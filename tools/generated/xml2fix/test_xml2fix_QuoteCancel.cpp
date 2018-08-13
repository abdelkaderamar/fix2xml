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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotCxl" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteCancel_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_1518813103"); // 0
  QuoteCancel_message_t_0.insert("QuoteReqID_t_1518813103");
  elt.add_attribute("QID", "QuoteID_t_170510495"); // 0
  QuoteCancel_message_t_0.insert("QuoteID_t_170510495");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_413865087"); // 0
  QuoteCancel_message_t_0.insert("QuoteMsgID_t_413865087");
  elt.add_attribute("CxlTyp", "5"); // 0
  QuoteCancel_message_t_0.insert("5");
  elt.add_attribute("Typ", "3"); // 0
  QuoteCancel_message_t_0.insert("3");
  elt.add_attribute("RspLvl", "2"); // 0
  QuoteCancel_message_t_0.insert("2");
  elt.add_attribute("Acct", "Account_t_214732441"); // 0
  QuoteCancel_message_t_0.insert("Account_t_214732441");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  QuoteCancel_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "6"); // 0
  QuoteCancel_message_t_0.insert("6");
  elt.add_attribute("SesID", "5"); // 0
  QuoteCancel_message_t_0.insert("5");
  elt.add_attribute("SesSub", "7"); // 0
  QuoteCancel_message_t_0.insert("7");
  all_values.push_back(QuoteCancel_message_t_0);
  all_compo_names.insert("QuoteCancel_message_t");

  { // Hdr
    xml_element Hdr_69{"Hdr"};
    multiset<string> Hdr_69_set;
    Hdr_69.add_attribute("SeqNum", "1887979908"); // 1
    Hdr_69_set.insert("1887979908");
    Hdr_69.add_attribute("SID", "SenderCompID_t_1185250279"); // 1
    Hdr_69_set.insert("SenderCompID_t_1185250279");
    Hdr_69.add_attribute("TID", "TargetCompID_t_1613531499"); // 1
    Hdr_69_set.insert("TargetCompID_t_1613531499");
    Hdr_69.add_attribute("OBID", "OnBehalfOfCompID_t_1336327287"); // 1
    Hdr_69_set.insert("OnBehalfOfCompID_t_1336327287");
    Hdr_69.add_attribute("D2ID", "DeliverToCompID_t_1758481648"); // 1
    Hdr_69_set.insert("DeliverToCompID_t_1758481648");
    Hdr_69.add_attribute("SSub", "SenderSubID_t_1013956041"); // 1
    Hdr_69_set.insert("SenderSubID_t_1013956041");
    Hdr_69.add_attribute("SLoc", "SenderLocationID_t_1048497159"); // 1
    Hdr_69_set.insert("SenderLocationID_t_1048497159");
    Hdr_69.add_attribute("TSub", "TargetSubID_t_1323316149"); // 1
    Hdr_69_set.insert("TargetSubID_t_1323316149");
    Hdr_69.add_attribute("TLoc", "TargetLocationID_t_1476486822"); // 1
    Hdr_69_set.insert("TargetLocationID_t_1476486822");
    Hdr_69.add_attribute("OBSub", "OnBehalfOfSubID_t_196763562"); // 1
    Hdr_69_set.insert("OnBehalfOfSubID_t_196763562");
    Hdr_69.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1500184423"); // 1
    Hdr_69_set.insert("OnBehalfOfLocationID_t_1500184423");
    Hdr_69.add_attribute("D2Sub", "DeliverToSubID_t_1770213961"); // 1
    Hdr_69_set.insert("DeliverToSubID_t_1770213961");
    Hdr_69.add_attribute("D2Loc", "DeliverToLocationID_t_62423539"); // 1
    Hdr_69_set.insert("DeliverToLocationID_t_62423539");
    Hdr_69.add_attribute("PosDup", "Y"); // 1
    Hdr_69_set.insert("Y");
    Hdr_69.add_attribute("PosRsnd", "Y"); // 1
    Hdr_69_set.insert("Y");
    Hdr_69.add_attribute("Snt", "SendingTime_t_608067213"); // 1
    Hdr_69_set.insert("SendingTime_t_608067213");
    Hdr_69.add_attribute("OrigSnt", "OrigSendingTime_t_691375978"); // 1
    Hdr_69_set.insert("OrigSendingTime_t_691375978");
    Hdr_69.add_attribute("MsgEncd", "MessageEncoding_t_372551937"); // 1
    Hdr_69_set.insert("MessageEncoding_t_372551937");
    all_values.push_back(Hdr_69_set);
    all_compo_names.insert("Hdr_69_set");

    {
      xml_element Hop_69{"Hop"};
      multiset<string> Hop_69_set;
      Hop_69.add_attribute("ID", "HopCompID_t_253299827"); // 2
      Hop_69_set.insert("HopCompID_t_253299827");
      Hop_69.add_attribute("Ref", "1362109392"); // 2
      Hop_69_set.insert("1362109392");
      Hop_69.add_attribute("Snt", "HopSendingTime_t_1891365040"); // 2
      Hop_69_set.insert("HopSendingTime_t_1891365040");
      all_values.push_back(Hop_69_set);
      all_compo_names.insert("Hop_69_set");

      Hdr_69.add_element(Hop_69);
    }
    elt.add_element(Hdr_69);
  } // end Hdr
  { // Pty
    xml_element Pty_323{"Pty"};
    multiset<string> Pty_323_set;
    Pty_323.add_attribute("ID", "PartyID_t_1775974479"); // 1
    Pty_323_set.insert("PartyID_t_1775974479");
    Pty_323.add_attribute("Src", "H"); // 1
    Pty_323_set.insert("H");
    Pty_323.add_attribute("R", "44"); // 1
    Pty_323_set.insert("44");
    all_values.push_back(Pty_323_set);
    all_compo_names.insert("Pty_323_set");

    {
      xml_element Sub_323{"Sub"};
      multiset<string> Sub_323_set;
      Sub_323.add_attribute("ID", "PartySubID_t_206065805"); // 2
      Sub_323_set.insert("PartySubID_t_206065805");
      Sub_323.add_attribute("Typ", "14"); // 2
      Sub_323_set.insert("14");
      all_values.push_back(Sub_323_set);
      all_compo_names.insert("Sub_323_set");

      Pty_323.add_element(Sub_323);
    }
    elt.add_element(Pty_323);
  } // end Pty
  { // Pty
    xml_element Pty_324{"Pty"};
    multiset<string> Pty_324_set;
    Pty_324.add_attribute("ID", "PartyID_t_728369585"); // 1
    Pty_324_set.insert("PartyID_t_728369585");
    Pty_324.add_attribute("Src", "G"); // 1
    Pty_324_set.insert("G");
    Pty_324.add_attribute("R", "76"); // 1
    Pty_324_set.insert("76");
    all_values.push_back(Pty_324_set);
    all_compo_names.insert("Pty_324_set");

    {
      xml_element Sub_324{"Sub"};
      multiset<string> Sub_324_set;
      Sub_324.add_attribute("ID", "PartySubID_t_761353556"); // 2
      Sub_324_set.insert("PartySubID_t_761353556");
      Sub_324.add_attribute("Typ", "17"); // 2
      Sub_324_set.insert("17");
      all_values.push_back(Sub_324_set);
      all_compo_names.insert("Sub_324_set");

      Pty_324.add_element(Sub_324);
    }
    elt.add_element(Pty_324);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_12{"TgtPty"};
    multiset<string> TgtPty_12_set;
    TgtPty_12.add_attribute("ID", "TargetPartyID_t_227401407"); // 1
    TgtPty_12_set.insert("TargetPartyID_t_227401407");
    TgtPty_12.add_attribute("Src", "4"); // 1
    TgtPty_12_set.insert("4");
    TgtPty_12.add_attribute("R", "15"); // 1
    TgtPty_12_set.insert("15");
    all_values.push_back(TgtPty_12_set);
    all_compo_names.insert("TgtPty_12_set");

    elt.add_element(TgtPty_12);
  } // end TgtPty
  { // QuotCxlEntry
    xml_element QuotCxlEntry_0{"QuotCxlEntry"};
    {
      xml_element Instrmt_59{"Instrmt"};
      multiset<string> Instrmt_59_set;
      Instrmt_59.add_attribute("Sym", "Symbol_t_1511869578"); // 2
      Instrmt_59_set.insert("Symbol_t_1511869578");
      Instrmt_59.add_attribute("Sfx", "WI"); // 2
      Instrmt_59_set.insert("WI");
      Instrmt_59.add_attribute("ID", "SecurityID_t_570360622"); // 2
      Instrmt_59_set.insert("SecurityID_t_570360622");
      Instrmt_59.add_attribute("Src", "H"); // 2
      Instrmt_59_set.insert("H");
      Instrmt_59.add_attribute("Prod", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("ProdCmplx", "ProductComplex_t_193090935"); // 2
      Instrmt_59_set.insert("ProductComplex_t_193090935");
      Instrmt_59.add_attribute("SecGrp", "SecurityGroup_t_1771056680"); // 2
      Instrmt_59_set.insert("SecurityGroup_t_1771056680");
      Instrmt_59.add_attribute("CFI", "CFICode_t_1772437954"); // 2
      Instrmt_59_set.insert("CFICode_t_1772437954");
      Instrmt_59.add_attribute("SecTyp", "OOP"); // 2
      Instrmt_59_set.insert("OOP");
      Instrmt_59.add_attribute("SubTyp", "SecuritySubType_t_231640245"); // 2
      Instrmt_59_set.insert("SecuritySubType_t_231640245");
      Instrmt_59.add_attribute("MMY", "316330285"); // 2
      Instrmt_59_set.insert("316330285");
      Instrmt_59.add_attribute("MatDt", "MaturityDate_t_668129171"); // 2
      Instrmt_59_set.insert("MaturityDate_t_668129171");
      Instrmt_59.add_attribute("MatTm", "484940072"); // 2
      Instrmt_59_set.insert("484940072");
      Instrmt_59.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1678439677"); // 2
      Instrmt_59_set.insert("SettleOnOpenFlag_t_1678439677");
      Instrmt_59.add_attribute("AsgnMeth", "412010563"); // 2
      Instrmt_59_set.insert("412010563");
      Instrmt_59.add_attribute("Status", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CpnPmt", "CouponPaymentDate_t_1306930508"); // 2
      Instrmt_59_set.insert("CouponPaymentDate_t_1306930508");
      Instrmt_59.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_59_set.insert("FR");
      Instrmt_59.add_attribute("Snrty", "SB"); // 2
      Instrmt_59_set.insert("SB");
      Instrmt_59.add_attribute("NotlPctOut", "15129963.130000"); // 2
      Instrmt_59_set.insert("15129963.130000");
      Instrmt_59.add_attribute("OrigNotlPctOut", "15639322.770000"); // 2
      Instrmt_59_set.insert("15639322.770000");
      Instrmt_59.add_attribute("AttchPnt", "6269486.600000"); // 2
      Instrmt_59_set.insert("6269486.600000");
      Instrmt_59.add_attribute("DetchPnt", "8995451.840000"); // 2
      Instrmt_59_set.insert("8995451.840000");
      Instrmt_59.add_attribute("Issued", "IssueDate_t_16757811"); // 2
      Instrmt_59_set.insert("IssueDate_t_16757811");
      Instrmt_59.add_attribute("RepoCollSecTyp", "1388302217"); // 2
      Instrmt_59_set.insert("1388302217");
      Instrmt_59.add_attribute("RepoTrm", "26590316"); // 2
      Instrmt_59_set.insert("26590316");
      Instrmt_59.add_attribute("RepoRt", "18023172.730000"); // 2
      Instrmt_59_set.insert("18023172.730000");
      Instrmt_59.add_attribute("Fctr", "16157036.240000"); // 2
      Instrmt_59_set.insert("16157036.240000");
      Instrmt_59.add_attribute("CrdRtg", "CreditRating_t_489962735"); // 2
      Instrmt_59_set.insert("CreditRating_t_489962735");
      Instrmt_59.add_attribute("Rgstry", "InstrRegistry_t_1051391087"); // 2
      Instrmt_59_set.insert("InstrRegistry_t_1051391087");
      Instrmt_59.add_attribute("IssuCtry", "709577425"); // 2
      Instrmt_59_set.insert("709577425");
      Instrmt_59.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2001832314"); // 2
      Instrmt_59_set.insert("StateOrProvinceOfIssue_t_2001832314");
      Instrmt_59.add_attribute("Lcl", "LocaleOfIssue_t_1623781050"); // 2
      Instrmt_59_set.insert("LocaleOfIssue_t_1623781050");
      Instrmt_59.add_attribute("Redeem", "RedemptionDate_t_1279938047"); // 2
      Instrmt_59_set.insert("RedemptionDate_t_1279938047");
      Instrmt_59.add_attribute("StrkPx", "15629818.060000"); // 2
      Instrmt_59_set.insert("15629818.060000");
      Instrmt_59.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_59_set.insert("CHF");
      Instrmt_59.add_attribute("StrkMult", "11865548.380000"); // 2
      Instrmt_59_set.insert("11865548.380000");
      Instrmt_59.add_attribute("StrkValu", "11738260.960000"); // 2
      Instrmt_59_set.insert("11738260.960000");
      Instrmt_59.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_59_set.insert("2");
      Instrmt_59.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_59_set.insert("5");
      Instrmt_59.add_attribute("StrkPxBndryPrcsn", "14901563.810000"); // 2
      Instrmt_59_set.insert("14901563.810000");
      Instrmt_59.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_59_set.insert("2");
      Instrmt_59.add_attribute("OptAt", "1903135156"); // 2
      Instrmt_59_set.insert("1903135156");
      Instrmt_59.add_attribute("Mult", "10211124.100000"); // 2
      Instrmt_59_set.insert("10211124.100000");
      Instrmt_59.add_attribute("MultTyp", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_59_set.insert("3");
      Instrmt_59.add_attribute("MinPxIncr", "1805592.700000"); // 2
      Instrmt_59_set.insert("1805592.700000");
      Instrmt_59.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_508125680"); // 2
      Instrmt_59_set.insert("MinPriceIncrementAmount_t_508125680");
      Instrmt_59.add_attribute("UOM", "MMBtu"); // 2
      Instrmt_59_set.insert("MMBtu");
      Instrmt_59.add_attribute("UOMQty", "16935555.830000"); // 2
      Instrmt_59_set.insert("16935555.830000");
      Instrmt_59.add_attribute("PxUOM", "USD"); // 2
      Instrmt_59_set.insert("USD");
      Instrmt_59.add_attribute("PxUOMQty", "11899296.390000"); // 2
      Instrmt_59_set.insert("11899296.390000");
      Instrmt_59.add_attribute("SettlMeth", "P"); // 2
      Instrmt_59_set.insert("P");
      Instrmt_59.add_attribute("ExerStyle", "0"); // 2
      Instrmt_59_set.insert("0");
      Instrmt_59.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("OptPayAmt", "OptPayoutAmount_t_472207436"); // 2
      Instrmt_59_set.insert("OptPayoutAmount_t_472207436");
      Instrmt_59.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_59_set.insert("INT");
      Instrmt_59.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_59_set.insert("FUTDA");
      Instrmt_59.add_attribute("ListMeth", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CapPx", "6475568.330000"); // 2
      Instrmt_59_set.insert("6475568.330000");
      Instrmt_59.add_attribute("FlrPx", "6085456.090000"); // 2
      Instrmt_59_set.insert("6085456.090000");
      Instrmt_59.add_attribute("PutCall", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("FlexInd", "true"); // 2
      Instrmt_59_set.insert("true");
      Instrmt_59.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_59_set.insert("false");
      Instrmt_59.add_attribute("TmUnit", "Min"); // 2
      Instrmt_59_set.insert("Min");
      Instrmt_59.add_attribute("CpnRt", "16727260.250000"); // 2
      Instrmt_59_set.insert("16727260.250000");
      Instrmt_59.add_attribute("Exch", "SecurityExchange_t_1214028992"); // 2
      Instrmt_59_set.insert("SecurityExchange_t_1214028992");
      Instrmt_59.add_attribute("PosLmt", "1418571834"); // 2
      Instrmt_59_set.insert("1418571834");
      Instrmt_59.add_attribute("NTPosLmt", "699068473"); // 2
      Instrmt_59_set.insert("699068473");
      Instrmt_59.add_attribute("Issr", "Issuer_t_835151561"); // 2
      Instrmt_59_set.insert("Issuer_t_835151561");
      Instrmt_59.add_attribute("EncIssrLen", "689283270"); // 2
      Instrmt_59_set.insert("689283270");
      Instrmt_59.add_attribute("EncIssr", "EncodedIssuer_t_41741206"); // 2
      Instrmt_59_set.insert("EncodedIssuer_t_41741206");
      Instrmt_59.add_attribute("Desc", "SecurityDesc_t_1124403302"); // 2
      Instrmt_59_set.insert("SecurityDesc_t_1124403302");
      Instrmt_59.add_attribute("EncSecDescLen", "444934779"); // 2
      Instrmt_59_set.insert("444934779");
      Instrmt_59.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1062853616"); // 2
      Instrmt_59_set.insert("EncodedSecurityDesc_t_1062853616");
      Instrmt_59.add_attribute("Pool", "Pool_t_1825665607"); // 2
      Instrmt_59_set.insert("Pool_t_1825665607");
      Instrmt_59.add_attribute("CSetMo", "1109336682"); // 2
      Instrmt_59_set.insert("1109336682");
      Instrmt_59.add_attribute("CPPgm", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CPRegT", "CPRegType_t_186307639"); // 2
      Instrmt_59_set.insert("CPRegType_t_186307639");
      Instrmt_59.add_attribute("Dated", "DatedDate_t_1672317660"); // 2
      Instrmt_59_set.insert("DatedDate_t_1672317660");
      Instrmt_59.add_attribute("IntAcrl", "InterestAccrualDate_t_789484821"); // 2
      Instrmt_59_set.insert("InterestAccrualDate_t_789484821");
      all_values.push_back(Instrmt_59_set);
      all_compo_names.insert("Instrmt_59_set");

      {
        xml_element AID_62{"AID"};
        multiset<string> AID_62_set;
        AID_62.add_attribute("AltID", "SecurityAltID_t_110881949"); // 3
        AID_62_set.insert("SecurityAltID_t_110881949");
        AID_62.add_attribute("AltIDSrc", "L"); // 3
        AID_62_set.insert("L");
        all_values.push_back(AID_62_set);
        all_compo_names.insert("AID_62_set");

        Instrmt_59.add_element(AID_62);
      }
      {
        xml_element SecXML_62{"SecXML"};
        multiset<string> SecXML_62_set;
        SecXML_62.add_attribute("Schema", "SecurityXMLSchema_t_1235101941"); // 3
        SecXML_62_set.insert("SecurityXMLSchema_t_1235101941");
        all_values.push_back(SecXML_62_set);
        all_compo_names.insert("SecXML_62_set");

        Instrmt_59.add_element(SecXML_62);
      }
      {
        xml_element Evnt_62{"Evnt"};
        multiset<string> Evnt_62_set;
        Evnt_62.add_attribute("EventTyp", "10"); // 3
        Evnt_62_set.insert("10");
        Evnt_62.add_attribute("Dt", "EventDate_t_1145511859"); // 3
        Evnt_62_set.insert("EventDate_t_1145511859");
        Evnt_62.add_attribute("Tm", "EventTime_t_1707309377"); // 3
        Evnt_62_set.insert("EventTime_t_1707309377");
        Evnt_62.add_attribute("Px", "17958634.650000"); // 3
        Evnt_62_set.insert("17958634.650000");
        Evnt_62.add_attribute("Txt", "EventText_t_1044480044"); // 3
        Evnt_62_set.insert("EventText_t_1044480044");
        all_values.push_back(Evnt_62_set);
        all_compo_names.insert("Evnt_62_set");

        Instrmt_59.add_element(Evnt_62);
      }
      {
        xml_element Pty_325{"Pty"};
        multiset<string> Pty_325_set;
        Pty_325.add_attribute("ID", "InstrumentPartyID_t_521995900"); // 3
        Pty_325_set.insert("InstrumentPartyID_t_521995900");
        Pty_325.add_attribute("Src", "2"); // 3
        Pty_325_set.insert("2");
        Pty_325.add_attribute("R", "71"); // 3
        Pty_325_set.insert("71");
        all_values.push_back(Pty_325_set);
        all_compo_names.insert("Pty_325_set");

        {
          xml_element Sub_325{"Sub"};
          multiset<string> Sub_325_set;
          Sub_325.add_attribute("ID", "InstrumentPartySubID_t_1338514738"); // 4
          Sub_325_set.insert("InstrumentPartySubID_t_1338514738");
          Sub_325.add_attribute("Typ", "33"); // 4
          Sub_325_set.insert("33");
          all_values.push_back(Sub_325_set);
          all_compo_names.insert("Sub_325_set");

          Pty_325.add_element(Sub_325);
        }
        Instrmt_59.add_element(Pty_325);
      }
      {
        xml_element CmplxEvnt_59{"CmplxEvnt"};
        multiset<string> CmplxEvnt_59_set;
        CmplxEvnt_59.add_attribute("Typ", "3"); // 3
        CmplxEvnt_59_set.insert("3");
        CmplxEvnt_59.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1570531734"); // 3
        CmplxEvnt_59_set.insert("ComplexOptPayoutAmount_t_1570531734");
        CmplxEvnt_59.add_attribute("Px", "20925169.120000"); // 3
        CmplxEvnt_59_set.insert("20925169.120000");
        CmplxEvnt_59.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_59_set.insert("2");
        CmplxEvnt_59.add_attribute("PxBndryPrcsn", "8416199.200000"); // 3
        CmplxEvnt_59_set.insert("8416199.200000");
        CmplxEvnt_59.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_59_set.insert("2");
        CmplxEvnt_59.add_attribute("Cond", "1"); // 3
        CmplxEvnt_59_set.insert("1");
        all_values.push_back(CmplxEvnt_59_set);
        all_compo_names.insert("CmplxEvnt_59_set");

        {
          xml_element EvntDts_59{"EvntDts"};
          multiset<string> EvntDts_59_set;
          EvntDts_59.add_attribute("StartDt", "ComplexEventStartDate_t_1530903191"); // 4
          EvntDts_59_set.insert("ComplexEventStartDate_t_1530903191");
          EvntDts_59.add_attribute("EndDt", "ComplexEventEndDate_t_685842944"); // 4
          EvntDts_59_set.insert("ComplexEventEndDate_t_685842944");
          all_values.push_back(EvntDts_59_set);
          all_compo_names.insert("EvntDts_59_set");

          {
            xml_element EvntTms_59{"EvntTms"};
            multiset<string> EvntTms_59_set;
            EvntTms_59.add_attribute("StartTm", "272642222"); // 5
            EvntTms_59_set.insert("272642222");
            EvntTms_59.add_attribute("EndTm", "1975837970"); // 5
            EvntTms_59_set.insert("1975837970");
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
      FinDetls_17.add_attribute("AgmtDesc", "AgreementDesc_t_1748696561"); // 2
      FinDetls_17_set.insert("AgreementDesc_t_1748696561");
      FinDetls_17.add_attribute("AgmtID", "AgreementID_t_2098307829"); // 2
      FinDetls_17_set.insert("AgreementID_t_2098307829");
      FinDetls_17.add_attribute("AgmtDt", "AgreementDate_t_937691004"); // 2
      FinDetls_17_set.insert("AgreementDate_t_937691004");
      FinDetls_17.add_attribute("AgmtCcy", "CHF"); // 2
      FinDetls_17_set.insert("CHF");
      FinDetls_17.add_attribute("TrmTyp", "1"); // 2
      FinDetls_17_set.insert("1");
      FinDetls_17.add_attribute("StartDt", "StartDate_t_1634110621"); // 2
      FinDetls_17_set.insert("StartDate_t_1634110621");
      FinDetls_17.add_attribute("EndDt", "EndDate_t_248013770"); // 2
      FinDetls_17_set.insert("EndDate_t_248013770");
      FinDetls_17.add_attribute("DlvryTyp", "0"); // 2
      FinDetls_17_set.insert("0");
      FinDetls_17.add_attribute("MgnRatio", "7217289.140000"); // 2
      FinDetls_17_set.insert("7217289.140000");
      all_values.push_back(FinDetls_17_set);
      all_compo_names.insert("FinDetls_17_set");

      QuotCxlEntry_0.add_element(FinDetls_17);
    }
    {
      xml_element Undly_85{"Undly"};
      multiset<string> Undly_85_set;
      Undly_85.add_attribute("Sym", "UnderlyingSymbol_t_300227841"); // 2
      Undly_85_set.insert("UnderlyingSymbol_t_300227841");
      Undly_85.add_attribute("Sfx", "WI"); // 2
      Undly_85_set.insert("WI");
      Undly_85.add_attribute("ID", "UnderlyingSecurityID_t_281554643"); // 2
      Undly_85_set.insert("UnderlyingSecurityID_t_281554643");
      Undly_85.add_attribute("Src", "E"); // 2
      Undly_85_set.insert("E");
      Undly_85.add_attribute("Prod", "4"); // 2
      Undly_85_set.insert("4");
      Undly_85.add_attribute("CFI", "UnderlyingCFICode_t_803550543"); // 2
      Undly_85_set.insert("UnderlyingCFICode_t_803550543");
      Undly_85.add_attribute("SecTyp", "NONE"); // 2
      Undly_85_set.insert("NONE");
      Undly_85.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_725338929"); // 2
      Undly_85_set.insert("UnderlyingSecuritySubType_t_725338929");
      Undly_85.add_attribute("MMY", "2142065281"); // 2
      Undly_85_set.insert("2142065281");
      Undly_85.add_attribute("Mat", "UnderlyingMaturityDate_t_664335197"); // 2
      Undly_85_set.insert("UnderlyingMaturityDate_t_664335197");
      Undly_85.add_attribute("MatTm", "2119364591"); // 2
      Undly_85_set.insert("2119364591");
      Undly_85.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1565113367"); // 2
      Undly_85_set.insert("UnderlyingCouponPaymentDate_t_1565113367");
      Undly_85.add_attribute("RestrctTyp", "MR"); // 2
      Undly_85_set.insert("MR");
      Undly_85.add_attribute("Snrty", "SD"); // 2
      Undly_85_set.insert("SD");
      Undly_85.add_attribute("NotlPctOut", "2592496.400000"); // 2
      Undly_85_set.insert("2592496.400000");
      Undly_85.add_attribute("OrigNotlPctOut", "12534701.990000"); // 2
      Undly_85_set.insert("12534701.990000");
      Undly_85.add_attribute("AttchPnt", "17281745.180000"); // 2
      Undly_85_set.insert("17281745.180000");
      Undly_85.add_attribute("DetchPnt", "17901528.310000"); // 2
      Undly_85_set.insert("17901528.310000");
      Undly_85.add_attribute("Issued", "UnderlyingIssueDate_t_1939313144"); // 2
      Undly_85_set.insert("UnderlyingIssueDate_t_1939313144");
      Undly_85.add_attribute("RepoCollSecTyp", "2000816740"); // 2
      Undly_85_set.insert("2000816740");
      Undly_85.add_attribute("RepoTrm", "1618507153"); // 2
      Undly_85_set.insert("1618507153");
      Undly_85.add_attribute("RepoRt", "15405260.570000"); // 2
      Undly_85_set.insert("15405260.570000");
      Undly_85.add_attribute("Fctr", "19516409.220000"); // 2
      Undly_85_set.insert("19516409.220000");
      Undly_85.add_attribute("CrdRtg", "UnderlyingCreditRating_t_408714509"); // 2
      Undly_85_set.insert("UnderlyingCreditRating_t_408714509");
      Undly_85.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_237668208"); // 2
      Undly_85_set.insert("UnderlyingInstrRegistry_t_237668208");
      Undly_85.add_attribute("Ctry", "2088772743"); // 2
      Undly_85_set.insert("2088772743");
      Undly_85.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_871239525"); // 2
      Undly_85_set.insert("UnderlyingStateOrProvinceOfIssue_t_871239525");
      Undly_85.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1871778829"); // 2
      Undly_85_set.insert("UnderlyingLocaleOfIssue_t_1871778829");
      Undly_85.add_attribute("Redeem", "UnderlyingRedemptionDate_t_189302865"); // 2
      Undly_85_set.insert("UnderlyingRedemptionDate_t_189302865");
      Undly_85.add_attribute("StrkPx", "20485281.930000"); // 2
      Undly_85_set.insert("20485281.930000");
      Undly_85.add_attribute("StrkCcy", "EUR"); // 2
      Undly_85_set.insert("EUR");
      Undly_85.add_attribute("OptA", "76361425"); // 2
      Undly_85_set.insert("76361425");
      Undly_85.add_attribute("Mult", "7275787.380000"); // 2
      Undly_85_set.insert("7275787.380000");
      Undly_85.add_attribute("MultTyp", "0"); // 2
      Undly_85_set.insert("0");
      Undly_85.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_85_set.insert("3");
      Undly_85.add_attribute("UOM", "lbs"); // 2
      Undly_85_set.insert("lbs");
      Undly_85.add_attribute("UOMQty", "6826826.760000"); // 2
      Undly_85_set.insert("6826826.760000");
      Undly_85.add_attribute("PxUOM", "lbs"); // 2
      Undly_85_set.insert("lbs");
      Undly_85.add_attribute("PxUOMQty", "15257109.150000"); // 2
      Undly_85_set.insert("15257109.150000");
      Undly_85.add_attribute("TmUnit", "Mo"); // 2
      Undly_85_set.insert("Mo");
      Undly_85.add_attribute("ExerStyle", "0"); // 2
      Undly_85_set.insert("0");
      Undly_85.add_attribute("CpnRt", "9433406.350000"); // 2
      Undly_85_set.insert("9433406.350000");
      Undly_85.add_attribute("Exch", "UnderlyingSecurityExchange_t_1956386334"); // 2
      Undly_85_set.insert("UnderlyingSecurityExchange_t_1956386334");
      Undly_85.add_attribute("Issr", "UnderlyingIssuer_t_278346523"); // 2
      Undly_85_set.insert("UnderlyingIssuer_t_278346523");
      Undly_85.add_attribute("EncUndIssrLen", "1202590275"); // 2
      Undly_85_set.insert("1202590275");
      Undly_85.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1062372886"); // 2
      Undly_85_set.insert("EncodedUnderlyingIssuer_t_1062372886");
      Undly_85.add_attribute("Desc", "UnderlyingSecurityDesc_t_2006521041"); // 2
      Undly_85_set.insert("UnderlyingSecurityDesc_t_2006521041");
      Undly_85.add_attribute("EncUndSecDescLen", "845259458"); // 2
      Undly_85_set.insert("845259458");
      Undly_85.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_854202382"); // 2
      Undly_85_set.insert("EncodedUnderlyingSecurityDesc_t_854202382");
      Undly_85.add_attribute("CPPgm", "UnderlyingCPProgram_t_1859854133"); // 2
      Undly_85_set.insert("UnderlyingCPProgram_t_1859854133");
      Undly_85.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_316282963"); // 2
      Undly_85_set.insert("UnderlyingCPRegType_t_316282963");
      Undly_85.add_attribute("AllocPct", "2472447.910000"); // 2
      Undly_85_set.insert("2472447.910000");
      Undly_85.add_attribute("Ccy", "USD"); // 2
      Undly_85_set.insert("USD");
      Undly_85.add_attribute("Qty", "4849129.990000"); // 2
      Undly_85_set.insert("4849129.990000");
      Undly_85.add_attribute("SettlTyp", "4"); // 2
      Undly_85_set.insert("4");
      Undly_85.add_attribute("CashAmt", "UnderlyingCashAmount_t_1596236997"); // 2
      Undly_85_set.insert("UnderlyingCashAmount_t_1596236997");
      Undly_85.add_attribute("CashTyp", "DIFF"); // 2
      Undly_85_set.insert("DIFF");
      Undly_85.add_attribute("Px", "17946033.680000"); // 2
      Undly_85_set.insert("17946033.680000");
      Undly_85.add_attribute("DirtPx", "14972815.430000"); // 2
      Undly_85_set.insert("14972815.430000");
      Undly_85.add_attribute("EndPx", "6552322.760000"); // 2
      Undly_85_set.insert("6552322.760000");
      Undly_85.add_attribute("StartVal", "UnderlyingStartValue_t_136650427"); // 2
      Undly_85_set.insert("UnderlyingStartValue_t_136650427");
      Undly_85.add_attribute("CurVal", "UnderlyingCurrentValue_t_1573642968"); // 2
      Undly_85_set.insert("UnderlyingCurrentValue_t_1573642968");
      Undly_85.add_attribute("EndVal", "UnderlyingEndValue_t_1382811015"); // 2
      Undly_85_set.insert("UnderlyingEndValue_t_1382811015");
      Undly_85.add_attribute("AdjQty", "5747887.930000"); // 2
      Undly_85_set.insert("5747887.930000");
      Undly_85.add_attribute("FxRate", "7223176.680000"); // 2
      Undly_85_set.insert("7223176.680000");
      Undly_85.add_attribute("FxRateCalc", "D"); // 2
      Undly_85_set.insert("D");
      Undly_85.add_attribute("CapValu", "UnderlyingCapValue_t_1257471469"); // 2
      Undly_85_set.insert("UnderlyingCapValue_t_1257471469");
      Undly_85.add_attribute("SetMeth", "UnderlyingSettlMethod_t_596331298"); // 2
      Undly_85_set.insert("UnderlyingSettlMethod_t_596331298");
      Undly_85.add_attribute("PutCall", "144683916"); // 2
      Undly_85_set.insert("144683916");
      all_values.push_back(Undly_85_set);
      all_compo_names.insert("Undly_85_set");

      {
        xml_element UndAID_85{"UndAID"};
        multiset<string> UndAID_85_set;
        UndAID_85.add_attribute("AltID", "UnderlyingSecurityAltID_t_457005694"); // 3
        UndAID_85_set.insert("UnderlyingSecurityAltID_t_457005694");
        UndAID_85.add_attribute("AltIDSrc", "M"); // 3
        UndAID_85_set.insert("M");
        all_values.push_back(UndAID_85_set);
        all_compo_names.insert("UndAID_85_set");

        Undly_85.add_element(UndAID_85);
      }
      {
        xml_element Stip_127{"Stip"};
        multiset<string> Stip_127_set;
        Stip_127.add_attribute("Typ", "INTERNALQTY"); // 3
        Stip_127_set.insert("INTERNALQTY");
        Stip_127.add_attribute("Val", "UnderlyingStipValue_t_265908380"); // 3
        Stip_127_set.insert("UnderlyingStipValue_t_265908380");
        all_values.push_back(Stip_127_set);
        all_compo_names.insert("Stip_127_set");

        Undly_85.add_element(Stip_127);
      }
      {
        xml_element Pty_326{"Pty"};
        multiset<string> Pty_326_set;
        Pty_326.add_attribute("ID", "UnderlyingInstrumentPartyID_t_720572394"); // 3
        Pty_326_set.insert("UnderlyingInstrumentPartyID_t_720572394");
        Pty_326.add_attribute("Src", "3"); // 3
        Pty_326_set.insert("3");
        Pty_326.add_attribute("R", "27"); // 3
        Pty_326_set.insert("27");
        all_values.push_back(Pty_326_set);
        all_compo_names.insert("Pty_326_set");

        {
          xml_element Sub_326{"Sub"};
          multiset<string> Sub_326_set;
          Sub_326.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_579609787"); // 4
          Sub_326_set.insert("UnderlyingInstrumentPartySubID_t_579609787");
          Sub_326.add_attribute("Typ", "21"); // 4
          Sub_326_set.insert("21");
          all_values.push_back(Sub_326_set);
          all_compo_names.insert("Sub_326_set");

          Pty_326.add_element(Sub_326);
        }
        Undly_85.add_element(Pty_326);
      }
      QuotCxlEntry_0.add_element(Undly_85);
    }
    {
      xml_element Leg_64{"Leg"};
      multiset<string> Leg_64_set;
      Leg_64.add_attribute("Sym", "LegSymbol_t_35000000"); // 2
      Leg_64_set.insert("LegSymbol_t_35000000");
      Leg_64.add_attribute("Sfx", "CD"); // 2
      Leg_64_set.insert("CD");
      Leg_64.add_attribute("ID", "LegSecurityID_t_1304673599"); // 2
      Leg_64_set.insert("LegSecurityID_t_1304673599");
      Leg_64.add_attribute("Src", "G"); // 2
      Leg_64_set.insert("G");
      Leg_64.add_attribute("Prod", "3"); // 2
      Leg_64_set.insert("3");
      Leg_64.add_attribute("CFI", "LegCFICode_t_2029671071"); // 2
      Leg_64_set.insert("LegCFICode_t_2029671071");
      Leg_64.add_attribute("SecTyp", "EUCORP"); // 2
      Leg_64_set.insert("EUCORP");
      Leg_64.add_attribute("SecSubTyp", "LegSecuritySubType_t_1413808534"); // 2
      Leg_64_set.insert("LegSecuritySubType_t_1413808534");
      Leg_64.add_attribute("MMY", "1478424421"); // 2
      Leg_64_set.insert("1478424421");
      Leg_64.add_attribute("Mat", "LegMaturityDate_t_976365972"); // 2
      Leg_64_set.insert("LegMaturityDate_t_976365972");
      Leg_64.add_attribute("MatTm", "1060928254"); // 2
      Leg_64_set.insert("1060928254");
      Leg_64.add_attribute("CpnPmt", "LegCouponPaymentDate_t_828222316"); // 2
      Leg_64_set.insert("LegCouponPaymentDate_t_828222316");
      Leg_64.add_attribute("Issued", "LegIssueDate_t_1631598248"); // 2
      Leg_64_set.insert("LegIssueDate_t_1631598248");
      Leg_64.add_attribute("RepoCollSecTyp", "1197578681"); // 2
      Leg_64_set.insert("1197578681");
      Leg_64.add_attribute("RepoTrm", "254381636"); // 2
      Leg_64_set.insert("254381636");
      Leg_64.add_attribute("RepoRt", "8669256.150000"); // 2
      Leg_64_set.insert("8669256.150000");
      Leg_64.add_attribute("Fctr", "17723674.740000"); // 2
      Leg_64_set.insert("17723674.740000");
      Leg_64.add_attribute("CrdRtg", "LegCreditRating_t_976699304"); // 2
      Leg_64_set.insert("LegCreditRating_t_976699304");
      Leg_64.add_attribute("Rgstry", "LegInstrRegistry_t_1633382264"); // 2
      Leg_64_set.insert("LegInstrRegistry_t_1633382264");
      Leg_64.add_attribute("Ctry", "882355295"); // 2
      Leg_64_set.insert("882355295");
      Leg_64.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1573030602"); // 2
      Leg_64_set.insert("LegStateOrProvinceOfIssue_t_1573030602");
      Leg_64.add_attribute("Lcl", "LegLocaleOfIssue_t_1778066181"); // 2
      Leg_64_set.insert("LegLocaleOfIssue_t_1778066181");
      Leg_64.add_attribute("Redeem", "LegRedemptionDate_t_1339360989"); // 2
      Leg_64_set.insert("LegRedemptionDate_t_1339360989");
      Leg_64.add_attribute("Strk", "20152564.730000"); // 2
      Leg_64_set.insert("20152564.730000");
      Leg_64.add_attribute("StrkCcy", "USD"); // 2
      Leg_64_set.insert("USD");
      Leg_64.add_attribute("OptA", "588345219"); // 2
      Leg_64_set.insert("588345219");
      Leg_64.add_attribute("Cmult", "8617382.630000"); // 2
      Leg_64_set.insert("8617382.630000");
      Leg_64.add_attribute("MultTyp", "1"); // 2
      Leg_64_set.insert("1");
      Leg_64.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_64_set.insert("1");
      Leg_64.add_attribute("UOM", "oz_tr"); // 2
      Leg_64_set.insert("oz_tr");
      Leg_64.add_attribute("UOMQty", "8210669.890000"); // 2
      Leg_64_set.insert("8210669.890000");
      Leg_64.add_attribute("PxUOM", "Bcf"); // 2
      Leg_64_set.insert("Bcf");
      Leg_64.add_attribute("PxUOMQty", "10073188.510000"); // 2
      Leg_64_set.insert("10073188.510000");
      Leg_64.add_attribute("TmUnit", "Wk"); // 2
      Leg_64_set.insert("Wk");
      Leg_64.add_attribute("ExerStyle", "0"); // 2
      Leg_64_set.insert("0");
      Leg_64.add_attribute("CpnRt", "8895062.740000"); // 2
      Leg_64_set.insert("8895062.740000");
      Leg_64.add_attribute("Exch", "LegSecurityExchange_t_1870469571"); // 2
      Leg_64_set.insert("LegSecurityExchange_t_1870469571");
      Leg_64.add_attribute("Issr", "LegIssuer_t_534768197"); // 2
      Leg_64_set.insert("LegIssuer_t_534768197");
      Leg_64.add_attribute("EncLegIssrLen", "220447047"); // 2
      Leg_64_set.insert("220447047");
      Leg_64.add_attribute("EncLegIssr", "EncodedLegIssuer_t_699351895"); // 2
      Leg_64_set.insert("EncodedLegIssuer_t_699351895");
      Leg_64.add_attribute("Desc", "LegSecurityDesc_t_1595696452"); // 2
      Leg_64_set.insert("LegSecurityDesc_t_1595696452");
      Leg_64.add_attribute("EncLegSecDescLen", "1048669363"); // 2
      Leg_64_set.insert("1048669363");
      Leg_64.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_183466496"); // 2
      Leg_64_set.insert("EncodedLegSecurityDesc_t_183466496");
      Leg_64.add_attribute("RatioQty", "6457914.850000"); // 2
      Leg_64_set.insert("6457914.850000");
      Leg_64.add_attribute("Side", "8"); // 2
      Leg_64_set.insert("8");
      Leg_64.add_attribute("Ccy", "USD"); // 2
      Leg_64_set.insert("USD");
      Leg_64.add_attribute("Pool", "LegPool_t_132266656"); // 2
      Leg_64_set.insert("LegPool_t_132266656");
      Leg_64.add_attribute("Dated", "LegDatedDate_t_536290728"); // 2
      Leg_64_set.insert("LegDatedDate_t_536290728");
      Leg_64.add_attribute("CSetMo", "1153030607"); // 2
      Leg_64_set.insert("1153030607");
      Leg_64.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1705297258"); // 2
      Leg_64_set.insert("LegInterestAccrualDate_t_1705297258");
      Leg_64.add_attribute("PutCall", "166873261"); // 2
      Leg_64_set.insert("166873261");
      Leg_64.add_attribute("LegOptionRatio", "3449079.490000"); // 2
      Leg_64_set.insert("3449079.490000");
      Leg_64.add_attribute("Px", "15730700.840000"); // 2
      Leg_64_set.insert("15730700.840000");
      all_values.push_back(Leg_64_set);
      all_compo_names.insert("Leg_64_set");

      {
        xml_element LegAID_64{"LegAID"};
        multiset<string> LegAID_64_set;
        LegAID_64.add_attribute("SecAltID", "LegSecurityAltID_t_885480345"); // 3
        LegAID_64_set.insert("LegSecurityAltID_t_885480345");
        LegAID_64.add_attribute("SecAltIDSrc", "E"); // 3
        LegAID_64_set.insert("E");
        all_values.push_back(LegAID_64_set);
        all_compo_names.insert("LegAID_64_set");

        Leg_64.add_element(LegAID_64);
      }
      QuotCxlEntry_0.add_element(Leg_64);
    }
    elt.add_element(QuotCxlEntry_0);
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
