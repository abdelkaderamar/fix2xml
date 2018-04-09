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
  elt.add_attribute("ReqID", "QuoteReqID_t_1576538021"); // 0
  QuoteCancel_message_t_0.insert("QuoteReqID_t_1576538021");
  elt.add_attribute("QID", "QuoteID_t_1906645458"); // 0
  QuoteCancel_message_t_0.insert("QuoteID_t_1906645458");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1282829727"); // 0
  QuoteCancel_message_t_0.insert("QuoteMsgID_t_1282829727");
  elt.add_attribute("CxlTyp", "4"); // 0
  QuoteCancel_message_t_0.insert("4");
  elt.add_attribute("Typ", "1"); // 0
  QuoteCancel_message_t_0.insert("1");
  elt.add_attribute("RspLvl", "3"); // 0
  QuoteCancel_message_t_0.insert("3");
  elt.add_attribute("Acct", "Account_t_789382255"); // 0
  QuoteCancel_message_t_0.insert("Account_t_789382255");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  QuoteCancel_message_t_0.insert("5");
  elt.add_attribute("AcctTyp", "6"); // 0
  QuoteCancel_message_t_0.insert("6");
  elt.add_attribute("SesID", "2"); // 0
  QuoteCancel_message_t_0.insert("2");
  elt.add_attribute("SesSub", "7"); // 0
  QuoteCancel_message_t_0.insert("7");
  all_values.push_back(QuoteCancel_message_t_0);
  all_compo_names.insert("QuoteCancel_message_t");

  { // Hdr
    xml_element Hdr_69{"Hdr"};
    multiset<string> Hdr_69_set;
    Hdr_69.add_attribute("SeqNum", "1160914072"); // 1
    Hdr_69_set.insert("1160914072");
    Hdr_69.add_attribute("SID", "SenderCompID_t_1376683409"); // 1
    Hdr_69_set.insert("SenderCompID_t_1376683409");
    Hdr_69.add_attribute("TID", "TargetCompID_t_661352691"); // 1
    Hdr_69_set.insert("TargetCompID_t_661352691");
    Hdr_69.add_attribute("OBID", "OnBehalfOfCompID_t_652299332"); // 1
    Hdr_69_set.insert("OnBehalfOfCompID_t_652299332");
    Hdr_69.add_attribute("D2ID", "DeliverToCompID_t_1436640308"); // 1
    Hdr_69_set.insert("DeliverToCompID_t_1436640308");
    Hdr_69.add_attribute("SSub", "SenderSubID_t_121437421"); // 1
    Hdr_69_set.insert("SenderSubID_t_121437421");
    Hdr_69.add_attribute("SLoc", "SenderLocationID_t_1198768583"); // 1
    Hdr_69_set.insert("SenderLocationID_t_1198768583");
    Hdr_69.add_attribute("TSub", "TargetSubID_t_81396886"); // 1
    Hdr_69_set.insert("TargetSubID_t_81396886");
    Hdr_69.add_attribute("TLoc", "TargetLocationID_t_697570826"); // 1
    Hdr_69_set.insert("TargetLocationID_t_697570826");
    Hdr_69.add_attribute("OBSub", "OnBehalfOfSubID_t_1942071562"); // 1
    Hdr_69_set.insert("OnBehalfOfSubID_t_1942071562");
    Hdr_69.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1150211306"); // 1
    Hdr_69_set.insert("OnBehalfOfLocationID_t_1150211306");
    Hdr_69.add_attribute("D2Sub", "DeliverToSubID_t_211263565"); // 1
    Hdr_69_set.insert("DeliverToSubID_t_211263565");
    Hdr_69.add_attribute("D2Loc", "DeliverToLocationID_t_846696746"); // 1
    Hdr_69_set.insert("DeliverToLocationID_t_846696746");
    Hdr_69.add_attribute("PosDup", "N"); // 1
    Hdr_69_set.insert("N");
    Hdr_69.add_attribute("PosRsnd", "N"); // 1
    Hdr_69_set.insert("N");
    Hdr_69.add_attribute("Snt", "SendingTime_t_95976072"); // 1
    Hdr_69_set.insert("SendingTime_t_95976072");
    Hdr_69.add_attribute("OrigSnt", "OrigSendingTime_t_523044799"); // 1
    Hdr_69_set.insert("OrigSendingTime_t_523044799");
    Hdr_69.add_attribute("MsgEncd", "MessageEncoding_t_1903805239"); // 1
    Hdr_69_set.insert("MessageEncoding_t_1903805239");
    all_values.push_back(Hdr_69_set);
    all_compo_names.insert("Hdr_69_set");

    {
      xml_element Hop_69{"Hop"};
      multiset<string> Hop_69_set;
      Hop_69.add_attribute("ID", "HopCompID_t_1568073228"); // 2
      Hop_69_set.insert("HopCompID_t_1568073228");
      Hop_69.add_attribute("Ref", "175757635"); // 2
      Hop_69_set.insert("175757635");
      Hop_69.add_attribute("Snt", "HopSendingTime_t_1332859612"); // 2
      Hop_69_set.insert("HopSendingTime_t_1332859612");
      all_values.push_back(Hop_69_set);
      all_compo_names.insert("Hop_69_set");

      Hdr_69.add_element(Hop_69);
    }
    elt.add_element(Hdr_69);
  } // end Hdr
  { // Pty
    xml_element Pty_304{"Pty"};
    multiset<string> Pty_304_set;
    Pty_304.add_attribute("ID", "PartyID_t_1458587362"); // 1
    Pty_304_set.insert("PartyID_t_1458587362");
    Pty_304.add_attribute("Src", "2"); // 1
    Pty_304_set.insert("2");
    Pty_304.add_attribute("R", "82"); // 1
    Pty_304_set.insert("82");
    all_values.push_back(Pty_304_set);
    all_compo_names.insert("Pty_304_set");

    {
      xml_element Sub_304{"Sub"};
      multiset<string> Sub_304_set;
      Sub_304.add_attribute("ID", "PartySubID_t_1832393614"); // 2
      Sub_304_set.insert("PartySubID_t_1832393614");
      Sub_304.add_attribute("Typ", "14"); // 2
      Sub_304_set.insert("14");
      all_values.push_back(Sub_304_set);
      all_compo_names.insert("Sub_304_set");

      Pty_304.add_element(Sub_304);
    }
    elt.add_element(Pty_304);
  } // end Pty
  { // Pty
    xml_element Pty_305{"Pty"};
    multiset<string> Pty_305_set;
    Pty_305.add_attribute("ID", "PartyID_t_1324851642"); // 1
    Pty_305_set.insert("PartyID_t_1324851642");
    Pty_305.add_attribute("Src", "2"); // 1
    Pty_305_set.insert("2");
    Pty_305.add_attribute("R", "59"); // 1
    Pty_305_set.insert("59");
    all_values.push_back(Pty_305_set);
    all_compo_names.insert("Pty_305_set");

    {
      xml_element Sub_305{"Sub"};
      multiset<string> Sub_305_set;
      Sub_305.add_attribute("ID", "PartySubID_t_360982817"); // 2
      Sub_305_set.insert("PartySubID_t_360982817");
      Sub_305.add_attribute("Typ", "25"); // 2
      Sub_305_set.insert("25");
      all_values.push_back(Sub_305_set);
      all_compo_names.insert("Sub_305_set");

      Pty_305.add_element(Sub_305);
    }
    elt.add_element(Pty_305);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_13{"TgtPty"};
    multiset<string> TgtPty_13_set;
    TgtPty_13.add_attribute("ID", "TargetPartyID_t_1022335508"); // 1
    TgtPty_13_set.insert("TargetPartyID_t_1022335508");
    TgtPty_13.add_attribute("Src", "2"); // 1
    TgtPty_13_set.insert("2");
    TgtPty_13.add_attribute("R", "21"); // 1
    TgtPty_13_set.insert("21");
    all_values.push_back(TgtPty_13_set);
    all_compo_names.insert("TgtPty_13_set");

    elt.add_element(TgtPty_13);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_14{"TgtPty"};
    multiset<string> TgtPty_14_set;
    TgtPty_14.add_attribute("ID", "TargetPartyID_t_1143772930"); // 1
    TgtPty_14_set.insert("TargetPartyID_t_1143772930");
    TgtPty_14.add_attribute("Src", "C"); // 1
    TgtPty_14_set.insert("C");
    TgtPty_14.add_attribute("R", "61"); // 1
    TgtPty_14_set.insert("61");
    all_values.push_back(TgtPty_14_set);
    all_compo_names.insert("TgtPty_14_set");

    elt.add_element(TgtPty_14);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_15{"TgtPty"};
    multiset<string> TgtPty_15_set;
    TgtPty_15.add_attribute("ID", "TargetPartyID_t_1841343756"); // 1
    TgtPty_15_set.insert("TargetPartyID_t_1841343756");
    TgtPty_15.add_attribute("Src", "2"); // 1
    TgtPty_15_set.insert("2");
    TgtPty_15.add_attribute("R", "79"); // 1
    TgtPty_15_set.insert("79");
    all_values.push_back(TgtPty_15_set);
    all_compo_names.insert("TgtPty_15_set");

    elt.add_element(TgtPty_15);
  } // end TgtPty
  { // QuotCxlEntry
    xml_element QuotCxlEntry_0{"QuotCxlEntry"};
    {
      xml_element Instrmt_57{"Instrmt"};
      multiset<string> Instrmt_57_set;
      Instrmt_57.add_attribute("Sym", "Symbol_t_1607535669"); // 2
      Instrmt_57_set.insert("Symbol_t_1607535669");
      Instrmt_57.add_attribute("Sfx", "WI"); // 2
      Instrmt_57_set.insert("WI");
      Instrmt_57.add_attribute("ID", "SecurityID_t_1918694688"); // 2
      Instrmt_57_set.insert("SecurityID_t_1918694688");
      Instrmt_57.add_attribute("Src", "L"); // 2
      Instrmt_57_set.insert("L");
      Instrmt_57.add_attribute("Prod", "7"); // 2
      Instrmt_57_set.insert("7");
      Instrmt_57.add_attribute("ProdCmplx", "ProductComplex_t_1675016279"); // 2
      Instrmt_57_set.insert("ProductComplex_t_1675016279");
      Instrmt_57.add_attribute("SecGrp", "SecurityGroup_t_1124101322"); // 2
      Instrmt_57_set.insert("SecurityGroup_t_1124101322");
      Instrmt_57.add_attribute("CFI", "CFICode_t_1603031376"); // 2
      Instrmt_57_set.insert("CFICode_t_1603031376");
      Instrmt_57.add_attribute("SecTyp", "TINT"); // 2
      Instrmt_57_set.insert("TINT");
      Instrmt_57.add_attribute("SubTyp", "SecuritySubType_t_303852712"); // 2
      Instrmt_57_set.insert("SecuritySubType_t_303852712");
      Instrmt_57.add_attribute("MMY", "914135090"); // 2
      Instrmt_57_set.insert("914135090");
      Instrmt_57.add_attribute("MatDt", "MaturityDate_t_1718781338"); // 2
      Instrmt_57_set.insert("MaturityDate_t_1718781338");
      Instrmt_57.add_attribute("MatTm", "1589589468"); // 2
      Instrmt_57_set.insert("1589589468");
      Instrmt_57.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_599045056"); // 2
      Instrmt_57_set.insert("SettleOnOpenFlag_t_599045056");
      Instrmt_57.add_attribute("AsgnMeth", "1219069041"); // 2
      Instrmt_57_set.insert("1219069041");
      Instrmt_57.add_attribute("Status", "1"); // 2
      Instrmt_57_set.insert("1");
      Instrmt_57.add_attribute("CpnPmt", "CouponPaymentDate_t_700797725"); // 2
      Instrmt_57_set.insert("CouponPaymentDate_t_700797725");
      Instrmt_57.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_57_set.insert("MR");
      Instrmt_57.add_attribute("Snrty", "SD"); // 2
      Instrmt_57_set.insert("SD");
      Instrmt_57.add_attribute("NotlPctOut", "19634644.670000"); // 2
      Instrmt_57_set.insert("19634644.670000");
      Instrmt_57.add_attribute("OrigNotlPctOut", "404442.500000"); // 2
      Instrmt_57_set.insert("404442.500000");
      Instrmt_57.add_attribute("AttchPnt", "27921.400000"); // 2
      Instrmt_57_set.insert("27921.400000");
      Instrmt_57.add_attribute("DetchPnt", "17309468.920000"); // 2
      Instrmt_57_set.insert("17309468.920000");
      Instrmt_57.add_attribute("Issued", "IssueDate_t_1576113868"); // 2
      Instrmt_57_set.insert("IssueDate_t_1576113868");
      Instrmt_57.add_attribute("RepoCollSecTyp", "1146565070"); // 2
      Instrmt_57_set.insert("1146565070");
      Instrmt_57.add_attribute("RepoTrm", "549714253"); // 2
      Instrmt_57_set.insert("549714253");
      Instrmt_57.add_attribute("RepoRt", "10456967.230000"); // 2
      Instrmt_57_set.insert("10456967.230000");
      Instrmt_57.add_attribute("Fctr", "8404251.780000"); // 2
      Instrmt_57_set.insert("8404251.780000");
      Instrmt_57.add_attribute("CrdRtg", "CreditRating_t_1310553176"); // 2
      Instrmt_57_set.insert("CreditRating_t_1310553176");
      Instrmt_57.add_attribute("Rgstry", "InstrRegistry_t_1665490885"); // 2
      Instrmt_57_set.insert("InstrRegistry_t_1665490885");
      Instrmt_57.add_attribute("IssuCtry", "745548851"); // 2
      Instrmt_57_set.insert("745548851");
      Instrmt_57.add_attribute("StPrv", "StateOrProvinceOfIssue_t_770605198"); // 2
      Instrmt_57_set.insert("StateOrProvinceOfIssue_t_770605198");
      Instrmt_57.add_attribute("Lcl", "LocaleOfIssue_t_422236178"); // 2
      Instrmt_57_set.insert("LocaleOfIssue_t_422236178");
      Instrmt_57.add_attribute("Redeem", "RedemptionDate_t_516759891"); // 2
      Instrmt_57_set.insert("RedemptionDate_t_516759891");
      Instrmt_57.add_attribute("StrkPx", "3266332.910000"); // 2
      Instrmt_57_set.insert("3266332.910000");
      Instrmt_57.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_57_set.insert("USD");
      Instrmt_57.add_attribute("StrkMult", "14507346.130000"); // 2
      Instrmt_57_set.insert("14507346.130000");
      Instrmt_57.add_attribute("StrkValu", "13050576.470000"); // 2
      Instrmt_57_set.insert("13050576.470000");
      Instrmt_57.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_57_set.insert("2");
      Instrmt_57.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_57_set.insert("2");
      Instrmt_57.add_attribute("StrkPxBndryPrcsn", "717090.900000"); // 2
      Instrmt_57_set.insert("717090.900000");
      Instrmt_57.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_57_set.insert("1");
      Instrmt_57.add_attribute("OptAt", "1196693146"); // 2
      Instrmt_57_set.insert("1196693146");
      Instrmt_57.add_attribute("Mult", "6707541.460000"); // 2
      Instrmt_57_set.insert("6707541.460000");
      Instrmt_57.add_attribute("MultTyp", "2"); // 2
      Instrmt_57_set.insert("2");
      Instrmt_57.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_57_set.insert("4");
      Instrmt_57.add_attribute("MinPxIncr", "13715518.720000"); // 2
      Instrmt_57_set.insert("13715518.720000");
      Instrmt_57.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1636466438"); // 2
      Instrmt_57_set.insert("MinPriceIncrementAmount_t_1636466438");
      Instrmt_57.add_attribute("UOM", "Bu"); // 2
      Instrmt_57_set.insert("Bu");
      Instrmt_57.add_attribute("UOMQty", "11875326.910000"); // 2
      Instrmt_57_set.insert("11875326.910000");
      Instrmt_57.add_attribute("PxUOM", "Bu"); // 2
      Instrmt_57_set.insert("Bu");
      Instrmt_57.add_attribute("PxUOMQty", "9468993.800000"); // 2
      Instrmt_57_set.insert("9468993.800000");
      Instrmt_57.add_attribute("SettlMeth", "P"); // 2
      Instrmt_57_set.insert("P");
      Instrmt_57.add_attribute("ExerStyle", "0"); // 2
      Instrmt_57_set.insert("0");
      Instrmt_57.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_57_set.insert("2");
      Instrmt_57.add_attribute("OptPayAmt", "OptPayoutAmount_t_1320710189"); // 2
      Instrmt_57_set.insert("OptPayoutAmount_t_1320710189");
      Instrmt_57.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_57_set.insert("STD");
      Instrmt_57.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_57_set.insert("EQTY");
      Instrmt_57.add_attribute("ListMeth", "1"); // 2
      Instrmt_57_set.insert("1");
      Instrmt_57.add_attribute("CapPx", "16692448.690000"); // 2
      Instrmt_57_set.insert("16692448.690000");
      Instrmt_57.add_attribute("FlrPx", "15319548.320000"); // 2
      Instrmt_57_set.insert("15319548.320000");
      Instrmt_57.add_attribute("PutCall", "1"); // 2
      Instrmt_57_set.insert("1");
      Instrmt_57.add_attribute("FlexInd", "false"); // 2
      Instrmt_57_set.insert("false");
      Instrmt_57.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_57_set.insert("false");
      Instrmt_57.add_attribute("TmUnit", "Yr"); // 2
      Instrmt_57_set.insert("Yr");
      Instrmt_57.add_attribute("CpnRt", "17935073.190000"); // 2
      Instrmt_57_set.insert("17935073.190000");
      Instrmt_57.add_attribute("Exch", "SecurityExchange_t_2093007246"); // 2
      Instrmt_57_set.insert("SecurityExchange_t_2093007246");
      Instrmt_57.add_attribute("PosLmt", "884269172"); // 2
      Instrmt_57_set.insert("884269172");
      Instrmt_57.add_attribute("NTPosLmt", "951081318"); // 2
      Instrmt_57_set.insert("951081318");
      Instrmt_57.add_attribute("Issr", "Issuer_t_850208363"); // 2
      Instrmt_57_set.insert("Issuer_t_850208363");
      Instrmt_57.add_attribute("EncIssrLen", "491372850"); // 2
      Instrmt_57_set.insert("491372850");
      Instrmt_57.add_attribute("EncIssr", "EncodedIssuer_t_1022790408"); // 2
      Instrmt_57_set.insert("EncodedIssuer_t_1022790408");
      Instrmt_57.add_attribute("Desc", "SecurityDesc_t_1326190819"); // 2
      Instrmt_57_set.insert("SecurityDesc_t_1326190819");
      Instrmt_57.add_attribute("EncSecDescLen", "1688065997"); // 2
      Instrmt_57_set.insert("1688065997");
      Instrmt_57.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1693544555"); // 2
      Instrmt_57_set.insert("EncodedSecurityDesc_t_1693544555");
      Instrmt_57.add_attribute("Pool", "Pool_t_873758668"); // 2
      Instrmt_57_set.insert("Pool_t_873758668");
      Instrmt_57.add_attribute("CSetMo", "1504232958"); // 2
      Instrmt_57_set.insert("1504232958");
      Instrmt_57.add_attribute("CPPgm", "2"); // 2
      Instrmt_57_set.insert("2");
      Instrmt_57.add_attribute("CPRegT", "CPRegType_t_362741458"); // 2
      Instrmt_57_set.insert("CPRegType_t_362741458");
      Instrmt_57.add_attribute("Dated", "DatedDate_t_300856550"); // 2
      Instrmt_57_set.insert("DatedDate_t_300856550");
      Instrmt_57.add_attribute("IntAcrl", "InterestAccrualDate_t_2105145470"); // 2
      Instrmt_57_set.insert("InterestAccrualDate_t_2105145470");
      all_values.push_back(Instrmt_57_set);
      all_compo_names.insert("Instrmt_57_set");

      {
        xml_element AID_60{"AID"};
        multiset<string> AID_60_set;
        AID_60.add_attribute("AltID", "SecurityAltID_t_2039652147"); // 3
        AID_60_set.insert("SecurityAltID_t_2039652147");
        AID_60.add_attribute("AltIDSrc", "G"); // 3
        AID_60_set.insert("G");
        all_values.push_back(AID_60_set);
        all_compo_names.insert("AID_60_set");

        Instrmt_57.add_element(AID_60);
      }
      {
        xml_element SecXML_60{"SecXML"};
        multiset<string> SecXML_60_set;
        SecXML_60.add_attribute("Schema", "SecurityXMLSchema_t_728657757"); // 3
        SecXML_60_set.insert("SecurityXMLSchema_t_728657757");
        all_values.push_back(SecXML_60_set);
        all_compo_names.insert("SecXML_60_set");

        Instrmt_57.add_element(SecXML_60);
      }
      {
        xml_element Evnt_60{"Evnt"};
        multiset<string> Evnt_60_set;
        Evnt_60.add_attribute("EventTyp", "7"); // 3
        Evnt_60_set.insert("7");
        Evnt_60.add_attribute("Dt", "EventDate_t_1193736733"); // 3
        Evnt_60_set.insert("EventDate_t_1193736733");
        Evnt_60.add_attribute("Tm", "EventTime_t_2049367946"); // 3
        Evnt_60_set.insert("EventTime_t_2049367946");
        Evnt_60.add_attribute("Px", "10014633.910000"); // 3
        Evnt_60_set.insert("10014633.910000");
        Evnt_60.add_attribute("Txt", "EventText_t_1980142714"); // 3
        Evnt_60_set.insert("EventText_t_1980142714");
        all_values.push_back(Evnt_60_set);
        all_compo_names.insert("Evnt_60_set");

        Instrmt_57.add_element(Evnt_60);
      }
      {
        xml_element Pty_306{"Pty"};
        multiset<string> Pty_306_set;
        Pty_306.add_attribute("ID", "InstrumentPartyID_t_385664016"); // 3
        Pty_306_set.insert("InstrumentPartyID_t_385664016");
        Pty_306.add_attribute("Src", "1"); // 3
        Pty_306_set.insert("1");
        Pty_306.add_attribute("R", "49"); // 3
        Pty_306_set.insert("49");
        all_values.push_back(Pty_306_set);
        all_compo_names.insert("Pty_306_set");

        {
          xml_element Sub_306{"Sub"};
          multiset<string> Sub_306_set;
          Sub_306.add_attribute("ID", "InstrumentPartySubID_t_1640048931"); // 4
          Sub_306_set.insert("InstrumentPartySubID_t_1640048931");
          Sub_306.add_attribute("Typ", "27"); // 4
          Sub_306_set.insert("27");
          all_values.push_back(Sub_306_set);
          all_compo_names.insert("Sub_306_set");

          Pty_306.add_element(Sub_306);
        }
        Instrmt_57.add_element(Pty_306);
      }
      {
        xml_element CmplxEvnt_57{"CmplxEvnt"};
        multiset<string> CmplxEvnt_57_set;
        CmplxEvnt_57.add_attribute("Typ", "5"); // 3
        CmplxEvnt_57_set.insert("5");
        CmplxEvnt_57.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1073583490"); // 3
        CmplxEvnt_57_set.insert("ComplexOptPayoutAmount_t_1073583490");
        CmplxEvnt_57.add_attribute("Px", "1132456.830000"); // 3
        CmplxEvnt_57_set.insert("1132456.830000");
        CmplxEvnt_57.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_57_set.insert("2");
        CmplxEvnt_57.add_attribute("PxBndryPrcsn", "19578526.630000"); // 3
        CmplxEvnt_57_set.insert("19578526.630000");
        CmplxEvnt_57.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_57_set.insert("1");
        CmplxEvnt_57.add_attribute("Cond", "2"); // 3
        CmplxEvnt_57_set.insert("2");
        all_values.push_back(CmplxEvnt_57_set);
        all_compo_names.insert("CmplxEvnt_57_set");

        {
          xml_element EvntDts_57{"EvntDts"};
          multiset<string> EvntDts_57_set;
          EvntDts_57.add_attribute("StartDt", "ComplexEventStartDate_t_301741865"); // 4
          EvntDts_57_set.insert("ComplexEventStartDate_t_301741865");
          EvntDts_57.add_attribute("EndDt", "ComplexEventEndDate_t_2087117410"); // 4
          EvntDts_57_set.insert("ComplexEventEndDate_t_2087117410");
          all_values.push_back(EvntDts_57_set);
          all_compo_names.insert("EvntDts_57_set");

          {
            xml_element EvntTms_57{"EvntTms"};
            multiset<string> EvntTms_57_set;
            EvntTms_57.add_attribute("StartTm", "1240284106"); // 5
            EvntTms_57_set.insert("1240284106");
            EvntTms_57.add_attribute("EndTm", "1989807862"); // 5
            EvntTms_57_set.insert("1989807862");
            all_values.push_back(EvntTms_57_set);
            all_compo_names.insert("EvntTms_57_set");

            EvntDts_57.add_element(EvntTms_57);
          }
          CmplxEvnt_57.add_element(EvntDts_57);
        }
        Instrmt_57.add_element(CmplxEvnt_57);
      }
      QuotCxlEntry_0.add_element(Instrmt_57);
    }
    {
      xml_element FinDetls_17{"FinDetls"};
      multiset<string> FinDetls_17_set;
      FinDetls_17.add_attribute("AgmtDesc", "AgreementDesc_t_1633178317"); // 2
      FinDetls_17_set.insert("AgreementDesc_t_1633178317");
      FinDetls_17.add_attribute("AgmtID", "AgreementID_t_2114042775"); // 2
      FinDetls_17_set.insert("AgreementID_t_2114042775");
      FinDetls_17.add_attribute("AgmtDt", "AgreementDate_t_1346557172"); // 2
      FinDetls_17_set.insert("AgreementDate_t_1346557172");
      FinDetls_17.add_attribute("AgmtCcy", "CAN"); // 2
      FinDetls_17_set.insert("CAN");
      FinDetls_17.add_attribute("TrmTyp", "4"); // 2
      FinDetls_17_set.insert("4");
      FinDetls_17.add_attribute("StartDt", "StartDate_t_360969270"); // 2
      FinDetls_17_set.insert("StartDate_t_360969270");
      FinDetls_17.add_attribute("EndDt", "EndDate_t_221469084"); // 2
      FinDetls_17_set.insert("EndDate_t_221469084");
      FinDetls_17.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_17_set.insert("2");
      FinDetls_17.add_attribute("MgnRatio", "10896270.270000"); // 2
      FinDetls_17_set.insert("10896270.270000");
      all_values.push_back(FinDetls_17_set);
      all_compo_names.insert("FinDetls_17_set");

      QuotCxlEntry_0.add_element(FinDetls_17);
    }
    {
      xml_element Undly_82{"Undly"};
      multiset<string> Undly_82_set;
      Undly_82.add_attribute("Sym", "UnderlyingSymbol_t_1219178492"); // 2
      Undly_82_set.insert("UnderlyingSymbol_t_1219178492");
      Undly_82.add_attribute("Sfx", "WI"); // 2
      Undly_82_set.insert("WI");
      Undly_82.add_attribute("ID", "UnderlyingSecurityID_t_991511326"); // 2
      Undly_82_set.insert("UnderlyingSecurityID_t_991511326");
      Undly_82.add_attribute("Src", "8"); // 2
      Undly_82_set.insert("8");
      Undly_82.add_attribute("Prod", "11"); // 2
      Undly_82_set.insert("11");
      Undly_82.add_attribute("CFI", "UnderlyingCFICode_t_1377175342"); // 2
      Undly_82_set.insert("UnderlyingCFICode_t_1377175342");
      Undly_82.add_attribute("SecTyp", "SLQN"); // 2
      Undly_82_set.insert("SLQN");
      Undly_82.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_991212055"); // 2
      Undly_82_set.insert("UnderlyingSecuritySubType_t_991212055");
      Undly_82.add_attribute("MMY", "869740625"); // 2
      Undly_82_set.insert("869740625");
      Undly_82.add_attribute("Mat", "UnderlyingMaturityDate_t_1063604860"); // 2
      Undly_82_set.insert("UnderlyingMaturityDate_t_1063604860");
      Undly_82.add_attribute("MatTm", "109573381"); // 2
      Undly_82_set.insert("109573381");
      Undly_82.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1943324116"); // 2
      Undly_82_set.insert("UnderlyingCouponPaymentDate_t_1943324116");
      Undly_82.add_attribute("RestrctTyp", "XR"); // 2
      Undly_82_set.insert("XR");
      Undly_82.add_attribute("Snrty", "SD"); // 2
      Undly_82_set.insert("SD");
      Undly_82.add_attribute("NotlPctOut", "17536931.310000"); // 2
      Undly_82_set.insert("17536931.310000");
      Undly_82.add_attribute("OrigNotlPctOut", "936938.960000"); // 2
      Undly_82_set.insert("936938.960000");
      Undly_82.add_attribute("AttchPnt", "12350352.390000"); // 2
      Undly_82_set.insert("12350352.390000");
      Undly_82.add_attribute("DetchPnt", "20554349.960000"); // 2
      Undly_82_set.insert("20554349.960000");
      Undly_82.add_attribute("Issued", "UnderlyingIssueDate_t_33327658"); // 2
      Undly_82_set.insert("UnderlyingIssueDate_t_33327658");
      Undly_82.add_attribute("RepoCollSecTyp", "327835698"); // 2
      Undly_82_set.insert("327835698");
      Undly_82.add_attribute("RepoTrm", "1897759211"); // 2
      Undly_82_set.insert("1897759211");
      Undly_82.add_attribute("RepoRt", "16665059.750000"); // 2
      Undly_82_set.insert("16665059.750000");
      Undly_82.add_attribute("Fctr", "2943948.250000"); // 2
      Undly_82_set.insert("2943948.250000");
      Undly_82.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1096832735"); // 2
      Undly_82_set.insert("UnderlyingCreditRating_t_1096832735");
      Undly_82.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2069813423"); // 2
      Undly_82_set.insert("UnderlyingInstrRegistry_t_2069813423");
      Undly_82.add_attribute("Ctry", "623695410"); // 2
      Undly_82_set.insert("623695410");
      Undly_82.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_596762810"); // 2
      Undly_82_set.insert("UnderlyingStateOrProvinceOfIssue_t_596762810");
      Undly_82.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_283299045"); // 2
      Undly_82_set.insert("UnderlyingLocaleOfIssue_t_283299045");
      Undly_82.add_attribute("Redeem", "UnderlyingRedemptionDate_t_845164495"); // 2
      Undly_82_set.insert("UnderlyingRedemptionDate_t_845164495");
      Undly_82.add_attribute("StrkPx", "13444488.160000"); // 2
      Undly_82_set.insert("13444488.160000");
      Undly_82.add_attribute("StrkCcy", "CHF"); // 2
      Undly_82_set.insert("CHF");
      Undly_82.add_attribute("OptA", "1138387908"); // 2
      Undly_82_set.insert("1138387908");
      Undly_82.add_attribute("Mult", "2169537.510000"); // 2
      Undly_82_set.insert("2169537.510000");
      Undly_82.add_attribute("MultTyp", "1"); // 2
      Undly_82_set.insert("1");
      Undly_82.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_82_set.insert("0");
      Undly_82.add_attribute("UOM", "Bu"); // 2
      Undly_82_set.insert("Bu");
      Undly_82.add_attribute("UOMQty", "5864004.220000"); // 2
      Undly_82_set.insert("5864004.220000");
      Undly_82.add_attribute("PxUOM", "Bbl"); // 2
      Undly_82_set.insert("Bbl");
      Undly_82.add_attribute("PxUOMQty", "3163860.700000"); // 2
      Undly_82_set.insert("3163860.700000");
      Undly_82.add_attribute("TmUnit", "H"); // 2
      Undly_82_set.insert("H");
      Undly_82.add_attribute("ExerStyle", "0"); // 2
      Undly_82_set.insert("0");
      Undly_82.add_attribute("CpnRt", "1122265.380000"); // 2
      Undly_82_set.insert("1122265.380000");
      Undly_82.add_attribute("Exch", "UnderlyingSecurityExchange_t_679372177"); // 2
      Undly_82_set.insert("UnderlyingSecurityExchange_t_679372177");
      Undly_82.add_attribute("Issr", "UnderlyingIssuer_t_1039229806"); // 2
      Undly_82_set.insert("UnderlyingIssuer_t_1039229806");
      Undly_82.add_attribute("EncUndIssrLen", "1865919669"); // 2
      Undly_82_set.insert("1865919669");
      Undly_82.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_773066074"); // 2
      Undly_82_set.insert("EncodedUnderlyingIssuer_t_773066074");
      Undly_82.add_attribute("Desc", "UnderlyingSecurityDesc_t_126781398"); // 2
      Undly_82_set.insert("UnderlyingSecurityDesc_t_126781398");
      Undly_82.add_attribute("EncUndSecDescLen", "1773871018"); // 2
      Undly_82_set.insert("1773871018");
      Undly_82.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_806393732"); // 2
      Undly_82_set.insert("EncodedUnderlyingSecurityDesc_t_806393732");
      Undly_82.add_attribute("CPPgm", "UnderlyingCPProgram_t_454617096"); // 2
      Undly_82_set.insert("UnderlyingCPProgram_t_454617096");
      Undly_82.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1524146581"); // 2
      Undly_82_set.insert("UnderlyingCPRegType_t_1524146581");
      Undly_82.add_attribute("AllocPct", "3254160.600000"); // 2
      Undly_82_set.insert("3254160.600000");
      Undly_82.add_attribute("Ccy", "JPY"); // 2
      Undly_82_set.insert("JPY");
      Undly_82.add_attribute("Qty", "2477458.350000"); // 2
      Undly_82_set.insert("2477458.350000");
      Undly_82.add_attribute("SettlTyp", "4"); // 2
      Undly_82_set.insert("4");
      Undly_82.add_attribute("CashAmt", "UnderlyingCashAmount_t_1070258479"); // 2
      Undly_82_set.insert("UnderlyingCashAmount_t_1070258479");
      Undly_82.add_attribute("CashTyp", "DIFF"); // 2
      Undly_82_set.insert("DIFF");
      Undly_82.add_attribute("Px", "703881.780000"); // 2
      Undly_82_set.insert("703881.780000");
      Undly_82.add_attribute("DirtPx", "2672236.470000"); // 2
      Undly_82_set.insert("2672236.470000");
      Undly_82.add_attribute("EndPx", "19039709.540000"); // 2
      Undly_82_set.insert("19039709.540000");
      Undly_82.add_attribute("StartVal", "UnderlyingStartValue_t_2134731165"); // 2
      Undly_82_set.insert("UnderlyingStartValue_t_2134731165");
      Undly_82.add_attribute("CurVal", "UnderlyingCurrentValue_t_1405611555"); // 2
      Undly_82_set.insert("UnderlyingCurrentValue_t_1405611555");
      Undly_82.add_attribute("EndVal", "UnderlyingEndValue_t_2120924705"); // 2
      Undly_82_set.insert("UnderlyingEndValue_t_2120924705");
      Undly_82.add_attribute("AdjQty", "21247487.400000"); // 2
      Undly_82_set.insert("21247487.400000");
      Undly_82.add_attribute("FxRate", "231139.730000"); // 2
      Undly_82_set.insert("231139.730000");
      Undly_82.add_attribute("FxRateCalc", "M"); // 2
      Undly_82_set.insert("M");
      Undly_82.add_attribute("CapValu", "UnderlyingCapValue_t_563665514"); // 2
      Undly_82_set.insert("UnderlyingCapValue_t_563665514");
      Undly_82.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1779312094"); // 2
      Undly_82_set.insert("UnderlyingSettlMethod_t_1779312094");
      Undly_82.add_attribute("PutCall", "1883956220"); // 2
      Undly_82_set.insert("1883956220");
      all_values.push_back(Undly_82_set);
      all_compo_names.insert("Undly_82_set");

      {
        xml_element UndAID_82{"UndAID"};
        multiset<string> UndAID_82_set;
        UndAID_82.add_attribute("AltID", "UnderlyingSecurityAltID_t_66187149"); // 3
        UndAID_82_set.insert("UnderlyingSecurityAltID_t_66187149");
        UndAID_82.add_attribute("AltIDSrc", "K"); // 3
        UndAID_82_set.insert("K");
        all_values.push_back(UndAID_82_set);
        all_compo_names.insert("UndAID_82_set");

        Undly_82.add_element(UndAID_82);
      }
      {
        xml_element Stip_124{"Stip"};
        multiset<string> Stip_124_set;
        Stip_124.add_attribute("Typ", "PROTECT"); // 3
        Stip_124_set.insert("PROTECT");
        Stip_124.add_attribute("Val", "UnderlyingStipValue_t_745559326"); // 3
        Stip_124_set.insert("UnderlyingStipValue_t_745559326");
        all_values.push_back(Stip_124_set);
        all_compo_names.insert("Stip_124_set");

        Undly_82.add_element(Stip_124);
      }
      {
        xml_element Pty_307{"Pty"};
        multiset<string> Pty_307_set;
        Pty_307.add_attribute("ID", "UnderlyingInstrumentPartyID_t_389346106"); // 3
        Pty_307_set.insert("UnderlyingInstrumentPartyID_t_389346106");
        Pty_307.add_attribute("Src", "H"); // 3
        Pty_307_set.insert("H");
        Pty_307.add_attribute("R", "70"); // 3
        Pty_307_set.insert("70");
        all_values.push_back(Pty_307_set);
        all_compo_names.insert("Pty_307_set");

        {
          xml_element Sub_307{"Sub"};
          multiset<string> Sub_307_set;
          Sub_307.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_516127504"); // 4
          Sub_307_set.insert("UnderlyingInstrumentPartySubID_t_516127504");
          Sub_307.add_attribute("Typ", "1"); // 4
          Sub_307_set.insert("1");
          all_values.push_back(Sub_307_set);
          all_compo_names.insert("Sub_307_set");

          Pty_307.add_element(Sub_307);
        }
        Undly_82.add_element(Pty_307);
      }
      QuotCxlEntry_0.add_element(Undly_82);
    }
    {
      xml_element Leg_66{"Leg"};
      multiset<string> Leg_66_set;
      Leg_66.add_attribute("Sym", "LegSymbol_t_177535485"); // 2
      Leg_66_set.insert("LegSymbol_t_177535485");
      Leg_66.add_attribute("Sfx", "CD"); // 2
      Leg_66_set.insert("CD");
      Leg_66.add_attribute("ID", "LegSecurityID_t_717669083"); // 2
      Leg_66_set.insert("LegSecurityID_t_717669083");
      Leg_66.add_attribute("Src", "L"); // 2
      Leg_66_set.insert("L");
      Leg_66.add_attribute("Prod", "11"); // 2
      Leg_66_set.insert("11");
      Leg_66.add_attribute("CFI", "LegCFICode_t_1191164752"); // 2
      Leg_66_set.insert("LegCFICode_t_1191164752");
      Leg_66.add_attribute("SecTyp", "EUCD"); // 2
      Leg_66_set.insert("EUCD");
      Leg_66.add_attribute("SecSubTyp", "LegSecuritySubType_t_944980205"); // 2
      Leg_66_set.insert("LegSecuritySubType_t_944980205");
      Leg_66.add_attribute("MMY", "113939583"); // 2
      Leg_66_set.insert("113939583");
      Leg_66.add_attribute("Mat", "LegMaturityDate_t_1281742261"); // 2
      Leg_66_set.insert("LegMaturityDate_t_1281742261");
      Leg_66.add_attribute("MatTm", "1015368383"); // 2
      Leg_66_set.insert("1015368383");
      Leg_66.add_attribute("CpnPmt", "LegCouponPaymentDate_t_381163230"); // 2
      Leg_66_set.insert("LegCouponPaymentDate_t_381163230");
      Leg_66.add_attribute("Issued", "LegIssueDate_t_1038229567"); // 2
      Leg_66_set.insert("LegIssueDate_t_1038229567");
      Leg_66.add_attribute("RepoCollSecTyp", "1002615901"); // 2
      Leg_66_set.insert("1002615901");
      Leg_66.add_attribute("RepoTrm", "1786774786"); // 2
      Leg_66_set.insert("1786774786");
      Leg_66.add_attribute("RepoRt", "10116706.240000"); // 2
      Leg_66_set.insert("10116706.240000");
      Leg_66.add_attribute("Fctr", "9798809.930000"); // 2
      Leg_66_set.insert("9798809.930000");
      Leg_66.add_attribute("CrdRtg", "LegCreditRating_t_1809888759"); // 2
      Leg_66_set.insert("LegCreditRating_t_1809888759");
      Leg_66.add_attribute("Rgstry", "LegInstrRegistry_t_431757126"); // 2
      Leg_66_set.insert("LegInstrRegistry_t_431757126");
      Leg_66.add_attribute("Ctry", "1543546507"); // 2
      Leg_66_set.insert("1543546507");
      Leg_66.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1441717205"); // 2
      Leg_66_set.insert("LegStateOrProvinceOfIssue_t_1441717205");
      Leg_66.add_attribute("Lcl", "LegLocaleOfIssue_t_168229699"); // 2
      Leg_66_set.insert("LegLocaleOfIssue_t_168229699");
      Leg_66.add_attribute("Redeem", "LegRedemptionDate_t_1609733656"); // 2
      Leg_66_set.insert("LegRedemptionDate_t_1609733656");
      Leg_66.add_attribute("Strk", "7918335.050000"); // 2
      Leg_66_set.insert("7918335.050000");
      Leg_66.add_attribute("StrkCcy", "EUR"); // 2
      Leg_66_set.insert("EUR");
      Leg_66.add_attribute("OptA", "1181179611"); // 2
      Leg_66_set.insert("1181179611");
      Leg_66.add_attribute("Cmult", "17315475.900000"); // 2
      Leg_66_set.insert("17315475.900000");
      Leg_66.add_attribute("MultTyp", "0"); // 2
      Leg_66_set.insert("0");
      Leg_66.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_66_set.insert("1");
      Leg_66.add_attribute("UOM", "Alw"); // 2
      Leg_66_set.insert("Alw");
      Leg_66.add_attribute("UOMQty", "19039702.200000"); // 2
      Leg_66_set.insert("19039702.200000");
      Leg_66.add_attribute("PxUOM", "lbs"); // 2
      Leg_66_set.insert("lbs");
      Leg_66.add_attribute("PxUOMQty", "16427391.760000"); // 2
      Leg_66_set.insert("16427391.760000");
      Leg_66.add_attribute("TmUnit", "Min"); // 2
      Leg_66_set.insert("Min");
      Leg_66.add_attribute("ExerStyle", "2"); // 2
      Leg_66_set.insert("2");
      Leg_66.add_attribute("CpnRt", "6864202.800000"); // 2
      Leg_66_set.insert("6864202.800000");
      Leg_66.add_attribute("Exch", "LegSecurityExchange_t_1010135498"); // 2
      Leg_66_set.insert("LegSecurityExchange_t_1010135498");
      Leg_66.add_attribute("Issr", "LegIssuer_t_1037821147"); // 2
      Leg_66_set.insert("LegIssuer_t_1037821147");
      Leg_66.add_attribute("EncLegIssrLen", "800359863"); // 2
      Leg_66_set.insert("800359863");
      Leg_66.add_attribute("EncLegIssr", "EncodedLegIssuer_t_144394111"); // 2
      Leg_66_set.insert("EncodedLegIssuer_t_144394111");
      Leg_66.add_attribute("Desc", "LegSecurityDesc_t_2053189530"); // 2
      Leg_66_set.insert("LegSecurityDesc_t_2053189530");
      Leg_66.add_attribute("EncLegSecDescLen", "1181523094"); // 2
      Leg_66_set.insert("1181523094");
      Leg_66.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1182623679"); // 2
      Leg_66_set.insert("EncodedLegSecurityDesc_t_1182623679");
      Leg_66.add_attribute("RatioQty", "9083217.830000"); // 2
      Leg_66_set.insert("9083217.830000");
      Leg_66.add_attribute("Side", "9"); // 2
      Leg_66_set.insert("9");
      Leg_66.add_attribute("Ccy", "JPY"); // 2
      Leg_66_set.insert("JPY");
      Leg_66.add_attribute("Pool", "LegPool_t_483219343"); // 2
      Leg_66_set.insert("LegPool_t_483219343");
      Leg_66.add_attribute("Dated", "LegDatedDate_t_478567782"); // 2
      Leg_66_set.insert("LegDatedDate_t_478567782");
      Leg_66.add_attribute("CSetMo", "1284265636"); // 2
      Leg_66_set.insert("1284265636");
      Leg_66.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1924936548"); // 2
      Leg_66_set.insert("LegInterestAccrualDate_t_1924936548");
      Leg_66.add_attribute("PutCall", "646797481"); // 2
      Leg_66_set.insert("646797481");
      Leg_66.add_attribute("LegOptionRatio", "7465156.440000"); // 2
      Leg_66_set.insert("7465156.440000");
      Leg_66.add_attribute("Px", "5692864.050000"); // 2
      Leg_66_set.insert("5692864.050000");
      all_values.push_back(Leg_66_set);
      all_compo_names.insert("Leg_66_set");

      {
        xml_element LegAID_66{"LegAID"};
        multiset<string> LegAID_66_set;
        LegAID_66.add_attribute("SecAltID", "LegSecurityAltID_t_663726291"); // 3
        LegAID_66_set.insert("LegSecurityAltID_t_663726291");
        LegAID_66.add_attribute("SecAltIDSrc", "4"); // 3
        LegAID_66_set.insert("4");
        all_values.push_back(LegAID_66_set);
        all_compo_names.insert("LegAID_66_set");

        Leg_66.add_element(LegAID_66);
      }
      QuotCxlEntry_0.add_element(Leg_66);
    }
    elt.add_element(QuotCxlEntry_0);
  } // end QuotCxlEntry
  { // QuotCxlEntry
    xml_element QuotCxlEntry_1{"QuotCxlEntry"};
    {
      xml_element Instrmt_58{"Instrmt"};
      multiset<string> Instrmt_58_set;
      Instrmt_58.add_attribute("Sym", "Symbol_t_1750466016"); // 2
      Instrmt_58_set.insert("Symbol_t_1750466016");
      Instrmt_58.add_attribute("Sfx", "WI"); // 2
      Instrmt_58_set.insert("WI");
      Instrmt_58.add_attribute("ID", "SecurityID_t_533276067"); // 2
      Instrmt_58_set.insert("SecurityID_t_533276067");
      Instrmt_58.add_attribute("Src", "B"); // 2
      Instrmt_58_set.insert("B");
      Instrmt_58.add_attribute("Prod", "10"); // 2
      Instrmt_58_set.insert("10");
      Instrmt_58.add_attribute("ProdCmplx", "ProductComplex_t_289762639"); // 2
      Instrmt_58_set.insert("ProductComplex_t_289762639");
      Instrmt_58.add_attribute("SecGrp", "SecurityGroup_t_1820857553"); // 2
      Instrmt_58_set.insert("SecurityGroup_t_1820857553");
      Instrmt_58.add_attribute("CFI", "CFICode_t_668115855"); // 2
      Instrmt_58_set.insert("CFICode_t_668115855");
      Instrmt_58.add_attribute("SecTyp", "TNOTE"); // 2
      Instrmt_58_set.insert("TNOTE");
      Instrmt_58.add_attribute("SubTyp", "SecuritySubType_t_1913698495"); // 2
      Instrmt_58_set.insert("SecuritySubType_t_1913698495");
      Instrmt_58.add_attribute("MMY", "1354536135"); // 2
      Instrmt_58_set.insert("1354536135");
      Instrmt_58.add_attribute("MatDt", "MaturityDate_t_1559336255"); // 2
      Instrmt_58_set.insert("MaturityDate_t_1559336255");
      Instrmt_58.add_attribute("MatTm", "804035994"); // 2
      Instrmt_58_set.insert("804035994");
      Instrmt_58.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_7412351"); // 2
      Instrmt_58_set.insert("SettleOnOpenFlag_t_7412351");
      Instrmt_58.add_attribute("AsgnMeth", "1703730366"); // 2
      Instrmt_58_set.insert("1703730366");
      Instrmt_58.add_attribute("Status", "1"); // 2
      Instrmt_58_set.insert("1");
      Instrmt_58.add_attribute("CpnPmt", "CouponPaymentDate_t_1188935445"); // 2
      Instrmt_58_set.insert("CouponPaymentDate_t_1188935445");
      Instrmt_58.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_58_set.insert("MR");
      Instrmt_58.add_attribute("Snrty", "SR"); // 2
      Instrmt_58_set.insert("SR");
      Instrmt_58.add_attribute("NotlPctOut", "20097496.770000"); // 2
      Instrmt_58_set.insert("20097496.770000");
      Instrmt_58.add_attribute("OrigNotlPctOut", "7856810.530000"); // 2
      Instrmt_58_set.insert("7856810.530000");
      Instrmt_58.add_attribute("AttchPnt", "13587827.880000"); // 2
      Instrmt_58_set.insert("13587827.880000");
      Instrmt_58.add_attribute("DetchPnt", "3454853.720000"); // 2
      Instrmt_58_set.insert("3454853.720000");
      Instrmt_58.add_attribute("Issued", "IssueDate_t_1264248835"); // 2
      Instrmt_58_set.insert("IssueDate_t_1264248835");
      Instrmt_58.add_attribute("RepoCollSecTyp", "495564776"); // 2
      Instrmt_58_set.insert("495564776");
      Instrmt_58.add_attribute("RepoTrm", "122938272"); // 2
      Instrmt_58_set.insert("122938272");
      Instrmt_58.add_attribute("RepoRt", "19110463.160000"); // 2
      Instrmt_58_set.insert("19110463.160000");
      Instrmt_58.add_attribute("Fctr", "12420804.210000"); // 2
      Instrmt_58_set.insert("12420804.210000");
      Instrmt_58.add_attribute("CrdRtg", "CreditRating_t_692224677"); // 2
      Instrmt_58_set.insert("CreditRating_t_692224677");
      Instrmt_58.add_attribute("Rgstry", "InstrRegistry_t_427288959"); // 2
      Instrmt_58_set.insert("InstrRegistry_t_427288959");
      Instrmt_58.add_attribute("IssuCtry", "48921752"); // 2
      Instrmt_58_set.insert("48921752");
      Instrmt_58.add_attribute("StPrv", "StateOrProvinceOfIssue_t_295207045"); // 2
      Instrmt_58_set.insert("StateOrProvinceOfIssue_t_295207045");
      Instrmt_58.add_attribute("Lcl", "LocaleOfIssue_t_675079192"); // 2
      Instrmt_58_set.insert("LocaleOfIssue_t_675079192");
      Instrmt_58.add_attribute("Redeem", "RedemptionDate_t_582197819"); // 2
      Instrmt_58_set.insert("RedemptionDate_t_582197819");
      Instrmt_58.add_attribute("StrkPx", "15954965.300000"); // 2
      Instrmt_58_set.insert("15954965.300000");
      Instrmt_58.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_58_set.insert("EUR");
      Instrmt_58.add_attribute("StrkMult", "12688704.350000"); // 2
      Instrmt_58_set.insert("12688704.350000");
      Instrmt_58.add_attribute("StrkValu", "3685717.260000"); // 2
      Instrmt_58_set.insert("3685717.260000");
      Instrmt_58.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_58_set.insert("1");
      Instrmt_58.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_58_set.insert("3");
      Instrmt_58.add_attribute("StrkPxBndryPrcsn", "17231078.610000"); // 2
      Instrmt_58_set.insert("17231078.610000");
      Instrmt_58.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_58_set.insert("4");
      Instrmt_58.add_attribute("OptAt", "1839121276"); // 2
      Instrmt_58_set.insert("1839121276");
      Instrmt_58.add_attribute("Mult", "17305202.120000"); // 2
      Instrmt_58_set.insert("17305202.120000");
      Instrmt_58.add_attribute("MultTyp", "2"); // 2
      Instrmt_58_set.insert("2");
      Instrmt_58.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_58_set.insert("4");
      Instrmt_58.add_attribute("MinPxIncr", "7719720.090000"); // 2
      Instrmt_58_set.insert("7719720.090000");
      Instrmt_58.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1128130939"); // 2
      Instrmt_58_set.insert("MinPriceIncrementAmount_t_1128130939");
      Instrmt_58.add_attribute("UOM", "Bu"); // 2
      Instrmt_58_set.insert("Bu");
      Instrmt_58.add_attribute("UOMQty", "6342380.380000"); // 2
      Instrmt_58_set.insert("6342380.380000");
      Instrmt_58.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_58_set.insert("MMBtu");
      Instrmt_58.add_attribute("PxUOMQty", "12307423.050000"); // 2
      Instrmt_58_set.insert("12307423.050000");
      Instrmt_58.add_attribute("SettlMeth", "C"); // 2
      Instrmt_58_set.insert("C");
      Instrmt_58.add_attribute("ExerStyle", "1"); // 2
      Instrmt_58_set.insert("1");
      Instrmt_58.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_58_set.insert("3");
      Instrmt_58.add_attribute("OptPayAmt", "OptPayoutAmount_t_1102661682"); // 2
      Instrmt_58_set.insert("OptPayoutAmount_t_1102661682");
      Instrmt_58.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_58_set.insert("PCTPAR");
      Instrmt_58.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_58_set.insert("CDSD");
      Instrmt_58.add_attribute("ListMeth", "1"); // 2
      Instrmt_58_set.insert("1");
      Instrmt_58.add_attribute("CapPx", "12214288.060000"); // 2
      Instrmt_58_set.insert("12214288.060000");
      Instrmt_58.add_attribute("FlrPx", "8698256.070000"); // 2
      Instrmt_58_set.insert("8698256.070000");
      Instrmt_58.add_attribute("PutCall", "1"); // 2
      Instrmt_58_set.insert("1");
      Instrmt_58.add_attribute("FlexInd", "true"); // 2
      Instrmt_58_set.insert("true");
      Instrmt_58.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_58_set.insert("true");
      Instrmt_58.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_58_set.insert("Wk");
      Instrmt_58.add_attribute("CpnRt", "15969638.690000"); // 2
      Instrmt_58_set.insert("15969638.690000");
      Instrmt_58.add_attribute("Exch", "SecurityExchange_t_176500237"); // 2
      Instrmt_58_set.insert("SecurityExchange_t_176500237");
      Instrmt_58.add_attribute("PosLmt", "659493074"); // 2
      Instrmt_58_set.insert("659493074");
      Instrmt_58.add_attribute("NTPosLmt", "1965535595"); // 2
      Instrmt_58_set.insert("1965535595");
      Instrmt_58.add_attribute("Issr", "Issuer_t_1597661453"); // 2
      Instrmt_58_set.insert("Issuer_t_1597661453");
      Instrmt_58.add_attribute("EncIssrLen", "1694578356"); // 2
      Instrmt_58_set.insert("1694578356");
      Instrmt_58.add_attribute("EncIssr", "EncodedIssuer_t_1541159809"); // 2
      Instrmt_58_set.insert("EncodedIssuer_t_1541159809");
      Instrmt_58.add_attribute("Desc", "SecurityDesc_t_283191628"); // 2
      Instrmt_58_set.insert("SecurityDesc_t_283191628");
      Instrmt_58.add_attribute("EncSecDescLen", "1386215984"); // 2
      Instrmt_58_set.insert("1386215984");
      Instrmt_58.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1124196373"); // 2
      Instrmt_58_set.insert("EncodedSecurityDesc_t_1124196373");
      Instrmt_58.add_attribute("Pool", "Pool_t_672452170"); // 2
      Instrmt_58_set.insert("Pool_t_672452170");
      Instrmt_58.add_attribute("CSetMo", "1787595488"); // 2
      Instrmt_58_set.insert("1787595488");
      Instrmt_58.add_attribute("CPPgm", "99"); // 2
      Instrmt_58_set.insert("99");
      Instrmt_58.add_attribute("CPRegT", "CPRegType_t_1800583109"); // 2
      Instrmt_58_set.insert("CPRegType_t_1800583109");
      Instrmt_58.add_attribute("Dated", "DatedDate_t_1659555005"); // 2
      Instrmt_58_set.insert("DatedDate_t_1659555005");
      Instrmt_58.add_attribute("IntAcrl", "InterestAccrualDate_t_382922773"); // 2
      Instrmt_58_set.insert("InterestAccrualDate_t_382922773");
      all_values.push_back(Instrmt_58_set);
      all_compo_names.insert("Instrmt_58_set");

      {
        xml_element AID_61{"AID"};
        multiset<string> AID_61_set;
        AID_61.add_attribute("AltID", "SecurityAltID_t_1566911453"); // 3
        AID_61_set.insert("SecurityAltID_t_1566911453");
        AID_61.add_attribute("AltIDSrc", "9"); // 3
        AID_61_set.insert("9");
        all_values.push_back(AID_61_set);
        all_compo_names.insert("AID_61_set");

        Instrmt_58.add_element(AID_61);
      }
      {
        xml_element SecXML_61{"SecXML"};
        multiset<string> SecXML_61_set;
        SecXML_61.add_attribute("Schema", "SecurityXMLSchema_t_1362646184"); // 3
        SecXML_61_set.insert("SecurityXMLSchema_t_1362646184");
        all_values.push_back(SecXML_61_set);
        all_compo_names.insert("SecXML_61_set");

        Instrmt_58.add_element(SecXML_61);
      }
      {
        xml_element Evnt_61{"Evnt"};
        multiset<string> Evnt_61_set;
        Evnt_61.add_attribute("EventTyp", "99"); // 3
        Evnt_61_set.insert("99");
        Evnt_61.add_attribute("Dt", "EventDate_t_321637095"); // 3
        Evnt_61_set.insert("EventDate_t_321637095");
        Evnt_61.add_attribute("Tm", "EventTime_t_317824218"); // 3
        Evnt_61_set.insert("EventTime_t_317824218");
        Evnt_61.add_attribute("Px", "12441448.310000"); // 3
        Evnt_61_set.insert("12441448.310000");
        Evnt_61.add_attribute("Txt", "EventText_t_1142540950"); // 3
        Evnt_61_set.insert("EventText_t_1142540950");
        all_values.push_back(Evnt_61_set);
        all_compo_names.insert("Evnt_61_set");

        Instrmt_58.add_element(Evnt_61);
      }
      {
        xml_element Pty_308{"Pty"};
        multiset<string> Pty_308_set;
        Pty_308.add_attribute("ID", "InstrumentPartyID_t_2112710578"); // 3
        Pty_308_set.insert("InstrumentPartyID_t_2112710578");
        Pty_308.add_attribute("Src", "2"); // 3
        Pty_308_set.insert("2");
        Pty_308.add_attribute("R", "63"); // 3
        Pty_308_set.insert("63");
        all_values.push_back(Pty_308_set);
        all_compo_names.insert("Pty_308_set");

        {
          xml_element Sub_308{"Sub"};
          multiset<string> Sub_308_set;
          Sub_308.add_attribute("ID", "InstrumentPartySubID_t_2055320335"); // 4
          Sub_308_set.insert("InstrumentPartySubID_t_2055320335");
          Sub_308.add_attribute("Typ", "29"); // 4
          Sub_308_set.insert("29");
          all_values.push_back(Sub_308_set);
          all_compo_names.insert("Sub_308_set");

          Pty_308.add_element(Sub_308);
        }
        Instrmt_58.add_element(Pty_308);
      }
      {
        xml_element CmplxEvnt_58{"CmplxEvnt"};
        multiset<string> CmplxEvnt_58_set;
        CmplxEvnt_58.add_attribute("Typ", "2"); // 3
        CmplxEvnt_58_set.insert("2");
        CmplxEvnt_58.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1445942974"); // 3
        CmplxEvnt_58_set.insert("ComplexOptPayoutAmount_t_1445942974");
        CmplxEvnt_58.add_attribute("Px", "16640782.090000"); // 3
        CmplxEvnt_58_set.insert("16640782.090000");
        CmplxEvnt_58.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_58_set.insert("4");
        CmplxEvnt_58.add_attribute("PxBndryPrcsn", "21054360.480000"); // 3
        CmplxEvnt_58_set.insert("21054360.480000");
        CmplxEvnt_58.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_58_set.insert("2");
        CmplxEvnt_58.add_attribute("Cond", "1"); // 3
        CmplxEvnt_58_set.insert("1");
        all_values.push_back(CmplxEvnt_58_set);
        all_compo_names.insert("CmplxEvnt_58_set");

        {
          xml_element EvntDts_58{"EvntDts"};
          multiset<string> EvntDts_58_set;
          EvntDts_58.add_attribute("StartDt", "ComplexEventStartDate_t_1652530756"); // 4
          EvntDts_58_set.insert("ComplexEventStartDate_t_1652530756");
          EvntDts_58.add_attribute("EndDt", "ComplexEventEndDate_t_875806317"); // 4
          EvntDts_58_set.insert("ComplexEventEndDate_t_875806317");
          all_values.push_back(EvntDts_58_set);
          all_compo_names.insert("EvntDts_58_set");

          {
            xml_element EvntTms_58{"EvntTms"};
            multiset<string> EvntTms_58_set;
            EvntTms_58.add_attribute("StartTm", "1226776007"); // 5
            EvntTms_58_set.insert("1226776007");
            EvntTms_58.add_attribute("EndTm", "891263092"); // 5
            EvntTms_58_set.insert("891263092");
            all_values.push_back(EvntTms_58_set);
            all_compo_names.insert("EvntTms_58_set");

            EvntDts_58.add_element(EvntTms_58);
          }
          CmplxEvnt_58.add_element(EvntDts_58);
        }
        Instrmt_58.add_element(CmplxEvnt_58);
      }
      QuotCxlEntry_1.add_element(Instrmt_58);
    }
    {
      xml_element FinDetls_18{"FinDetls"};
      multiset<string> FinDetls_18_set;
      FinDetls_18.add_attribute("AgmtDesc", "AgreementDesc_t_2000002691"); // 2
      FinDetls_18_set.insert("AgreementDesc_t_2000002691");
      FinDetls_18.add_attribute("AgmtID", "AgreementID_t_1899228177"); // 2
      FinDetls_18_set.insert("AgreementID_t_1899228177");
      FinDetls_18.add_attribute("AgmtDt", "AgreementDate_t_531374932"); // 2
      FinDetls_18_set.insert("AgreementDate_t_531374932");
      FinDetls_18.add_attribute("AgmtCcy", "USD"); // 2
      FinDetls_18_set.insert("USD");
      FinDetls_18.add_attribute("TrmTyp", "2"); // 2
      FinDetls_18_set.insert("2");
      FinDetls_18.add_attribute("StartDt", "StartDate_t_2131610199"); // 2
      FinDetls_18_set.insert("StartDate_t_2131610199");
      FinDetls_18.add_attribute("EndDt", "EndDate_t_971755443"); // 2
      FinDetls_18_set.insert("EndDate_t_971755443");
      FinDetls_18.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_18_set.insert("3");
      FinDetls_18.add_attribute("MgnRatio", "13467727.350000"); // 2
      FinDetls_18_set.insert("13467727.350000");
      all_values.push_back(FinDetls_18_set);
      all_compo_names.insert("FinDetls_18_set");

      QuotCxlEntry_1.add_element(FinDetls_18);
    }
    {
      xml_element Undly_83{"Undly"};
      multiset<string> Undly_83_set;
      Undly_83.add_attribute("Sym", "UnderlyingSymbol_t_1421760427"); // 2
      Undly_83_set.insert("UnderlyingSymbol_t_1421760427");
      Undly_83.add_attribute("Sfx", "WI"); // 2
      Undly_83_set.insert("WI");
      Undly_83.add_attribute("ID", "UnderlyingSecurityID_t_1664596954"); // 2
      Undly_83_set.insert("UnderlyingSecurityID_t_1664596954");
      Undly_83.add_attribute("Src", "F"); // 2
      Undly_83_set.insert("F");
      Undly_83.add_attribute("Prod", "13"); // 2
      Undly_83_set.insert("13");
      Undly_83.add_attribute("CFI", "UnderlyingCFICode_t_1629823884"); // 2
      Undly_83_set.insert("UnderlyingCFICode_t_1629823884");
      Undly_83.add_attribute("SecTyp", "MIO"); // 2
      Undly_83_set.insert("MIO");
      Undly_83.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2115320906"); // 2
      Undly_83_set.insert("UnderlyingSecuritySubType_t_2115320906");
      Undly_83.add_attribute("MMY", "1537660571"); // 2
      Undly_83_set.insert("1537660571");
      Undly_83.add_attribute("Mat", "UnderlyingMaturityDate_t_903625938"); // 2
      Undly_83_set.insert("UnderlyingMaturityDate_t_903625938");
      Undly_83.add_attribute("MatTm", "1284743593"); // 2
      Undly_83_set.insert("1284743593");
      Undly_83.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_836119897"); // 2
      Undly_83_set.insert("UnderlyingCouponPaymentDate_t_836119897");
      Undly_83.add_attribute("RestrctTyp", "XR"); // 2
      Undly_83_set.insert("XR");
      Undly_83.add_attribute("Snrty", "SB"); // 2
      Undly_83_set.insert("SB");
      Undly_83.add_attribute("NotlPctOut", "7940722.970000"); // 2
      Undly_83_set.insert("7940722.970000");
      Undly_83.add_attribute("OrigNotlPctOut", "19023506.560000"); // 2
      Undly_83_set.insert("19023506.560000");
      Undly_83.add_attribute("AttchPnt", "15742508.970000"); // 2
      Undly_83_set.insert("15742508.970000");
      Undly_83.add_attribute("DetchPnt", "2991194.050000"); // 2
      Undly_83_set.insert("2991194.050000");
      Undly_83.add_attribute("Issued", "UnderlyingIssueDate_t_630673325"); // 2
      Undly_83_set.insert("UnderlyingIssueDate_t_630673325");
      Undly_83.add_attribute("RepoCollSecTyp", "653543256"); // 2
      Undly_83_set.insert("653543256");
      Undly_83.add_attribute("RepoTrm", "1190382497"); // 2
      Undly_83_set.insert("1190382497");
      Undly_83.add_attribute("RepoRt", "4831923.680000"); // 2
      Undly_83_set.insert("4831923.680000");
      Undly_83.add_attribute("Fctr", "4052877.850000"); // 2
      Undly_83_set.insert("4052877.850000");
      Undly_83.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1721757429"); // 2
      Undly_83_set.insert("UnderlyingCreditRating_t_1721757429");
      Undly_83.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_84396146"); // 2
      Undly_83_set.insert("UnderlyingInstrRegistry_t_84396146");
      Undly_83.add_attribute("Ctry", "1957615423"); // 2
      Undly_83_set.insert("1957615423");
      Undly_83.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1765203719"); // 2
      Undly_83_set.insert("UnderlyingStateOrProvinceOfIssue_t_1765203719");
      Undly_83.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_68522698"); // 2
      Undly_83_set.insert("UnderlyingLocaleOfIssue_t_68522698");
      Undly_83.add_attribute("Redeem", "UnderlyingRedemptionDate_t_781887218"); // 2
      Undly_83_set.insert("UnderlyingRedemptionDate_t_781887218");
      Undly_83.add_attribute("StrkPx", "4039800.220000"); // 2
      Undly_83_set.insert("4039800.220000");
      Undly_83.add_attribute("StrkCcy", "EUR"); // 2
      Undly_83_set.insert("EUR");
      Undly_83.add_attribute("OptA", "1511877069"); // 2
      Undly_83_set.insert("1511877069");
      Undly_83.add_attribute("Mult", "9324087.390000"); // 2
      Undly_83_set.insert("9324087.390000");
      Undly_83.add_attribute("MultTyp", "2"); // 2
      Undly_83_set.insert("2");
      Undly_83.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_83_set.insert("3");
      Undly_83.add_attribute("UOM", "t"); // 2
      Undly_83_set.insert("t");
      Undly_83.add_attribute("UOMQty", "14110972.060000"); // 2
      Undly_83_set.insert("14110972.060000");
      Undly_83.add_attribute("PxUOM", "t"); // 2
      Undly_83_set.insert("t");
      Undly_83.add_attribute("PxUOMQty", "19524095.460000"); // 2
      Undly_83_set.insert("19524095.460000");
      Undly_83.add_attribute("TmUnit", "Wk"); // 2
      Undly_83_set.insert("Wk");
      Undly_83.add_attribute("ExerStyle", "1"); // 2
      Undly_83_set.insert("1");
      Undly_83.add_attribute("CpnRt", "6410457.950000"); // 2
      Undly_83_set.insert("6410457.950000");
      Undly_83.add_attribute("Exch", "UnderlyingSecurityExchange_t_587459996"); // 2
      Undly_83_set.insert("UnderlyingSecurityExchange_t_587459996");
      Undly_83.add_attribute("Issr", "UnderlyingIssuer_t_1350595140"); // 2
      Undly_83_set.insert("UnderlyingIssuer_t_1350595140");
      Undly_83.add_attribute("EncUndIssrLen", "1435118092"); // 2
      Undly_83_set.insert("1435118092");
      Undly_83.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_342327004"); // 2
      Undly_83_set.insert("EncodedUnderlyingIssuer_t_342327004");
      Undly_83.add_attribute("Desc", "UnderlyingSecurityDesc_t_777362389"); // 2
      Undly_83_set.insert("UnderlyingSecurityDesc_t_777362389");
      Undly_83.add_attribute("EncUndSecDescLen", "1734237497"); // 2
      Undly_83_set.insert("1734237497");
      Undly_83.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_973000329"); // 2
      Undly_83_set.insert("EncodedUnderlyingSecurityDesc_t_973000329");
      Undly_83.add_attribute("CPPgm", "UnderlyingCPProgram_t_1430905645"); // 2
      Undly_83_set.insert("UnderlyingCPProgram_t_1430905645");
      Undly_83.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_777136346"); // 2
      Undly_83_set.insert("UnderlyingCPRegType_t_777136346");
      Undly_83.add_attribute("AllocPct", "14561926.980000"); // 2
      Undly_83_set.insert("14561926.980000");
      Undly_83.add_attribute("Ccy", "JPY"); // 2
      Undly_83_set.insert("JPY");
      Undly_83.add_attribute("Qty", "15405888.440000"); // 2
      Undly_83_set.insert("15405888.440000");
      Undly_83.add_attribute("SettlTyp", "4"); // 2
      Undly_83_set.insert("4");
      Undly_83.add_attribute("CashAmt", "UnderlyingCashAmount_t_2116613847"); // 2
      Undly_83_set.insert("UnderlyingCashAmount_t_2116613847");
      Undly_83.add_attribute("CashTyp", "FIXED"); // 2
      Undly_83_set.insert("FIXED");
      Undly_83.add_attribute("Px", "2807287.750000"); // 2
      Undly_83_set.insert("2807287.750000");
      Undly_83.add_attribute("DirtPx", "3731102.210000"); // 2
      Undly_83_set.insert("3731102.210000");
      Undly_83.add_attribute("EndPx", "8769233.280000"); // 2
      Undly_83_set.insert("8769233.280000");
      Undly_83.add_attribute("StartVal", "UnderlyingStartValue_t_336892772"); // 2
      Undly_83_set.insert("UnderlyingStartValue_t_336892772");
      Undly_83.add_attribute("CurVal", "UnderlyingCurrentValue_t_1884987291"); // 2
      Undly_83_set.insert("UnderlyingCurrentValue_t_1884987291");
      Undly_83.add_attribute("EndVal", "UnderlyingEndValue_t_1809332067"); // 2
      Undly_83_set.insert("UnderlyingEndValue_t_1809332067");
      Undly_83.add_attribute("AdjQty", "9114783.790000"); // 2
      Undly_83_set.insert("9114783.790000");
      Undly_83.add_attribute("FxRate", "13523350.610000"); // 2
      Undly_83_set.insert("13523350.610000");
      Undly_83.add_attribute("FxRateCalc", "D"); // 2
      Undly_83_set.insert("D");
      Undly_83.add_attribute("CapValu", "UnderlyingCapValue_t_175091937"); // 2
      Undly_83_set.insert("UnderlyingCapValue_t_175091937");
      Undly_83.add_attribute("SetMeth", "UnderlyingSettlMethod_t_787520090"); // 2
      Undly_83_set.insert("UnderlyingSettlMethod_t_787520090");
      Undly_83.add_attribute("PutCall", "2029006941"); // 2
      Undly_83_set.insert("2029006941");
      all_values.push_back(Undly_83_set);
      all_compo_names.insert("Undly_83_set");

      {
        xml_element UndAID_83{"UndAID"};
        multiset<string> UndAID_83_set;
        UndAID_83.add_attribute("AltID", "UnderlyingSecurityAltID_t_342331434"); // 3
        UndAID_83_set.insert("UnderlyingSecurityAltID_t_342331434");
        UndAID_83.add_attribute("AltIDSrc", "1"); // 3
        UndAID_83_set.insert("1");
        all_values.push_back(UndAID_83_set);
        all_compo_names.insert("UndAID_83_set");

        Undly_83.add_element(UndAID_83);
      }
      {
        xml_element Stip_125{"Stip"};
        multiset<string> Stip_125_set;
        Stip_125.add_attribute("Typ", "STRUCT"); // 3
        Stip_125_set.insert("STRUCT");
        Stip_125.add_attribute("Val", "UnderlyingStipValue_t_929791430"); // 3
        Stip_125_set.insert("UnderlyingStipValue_t_929791430");
        all_values.push_back(Stip_125_set);
        all_compo_names.insert("Stip_125_set");

        Undly_83.add_element(Stip_125);
      }
      {
        xml_element Pty_309{"Pty"};
        multiset<string> Pty_309_set;
        Pty_309.add_attribute("ID", "UnderlyingInstrumentPartyID_t_710560204"); // 3
        Pty_309_set.insert("UnderlyingInstrumentPartyID_t_710560204");
        Pty_309.add_attribute("Src", "I"); // 3
        Pty_309_set.insert("I");
        Pty_309.add_attribute("R", "15"); // 3
        Pty_309_set.insert("15");
        all_values.push_back(Pty_309_set);
        all_compo_names.insert("Pty_309_set");

        {
          xml_element Sub_309{"Sub"};
          multiset<string> Sub_309_set;
          Sub_309.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1487922594"); // 4
          Sub_309_set.insert("UnderlyingInstrumentPartySubID_t_1487922594");
          Sub_309.add_attribute("Typ", "20"); // 4
          Sub_309_set.insert("20");
          all_values.push_back(Sub_309_set);
          all_compo_names.insert("Sub_309_set");

          Pty_309.add_element(Sub_309);
        }
        Undly_83.add_element(Pty_309);
      }
      QuotCxlEntry_1.add_element(Undly_83);
    }
    {
      xml_element Leg_67{"Leg"};
      multiset<string> Leg_67_set;
      Leg_67.add_attribute("Sym", "LegSymbol_t_97635115"); // 2
      Leg_67_set.insert("LegSymbol_t_97635115");
      Leg_67.add_attribute("Sfx", "WI"); // 2
      Leg_67_set.insert("WI");
      Leg_67.add_attribute("ID", "LegSecurityID_t_174093729"); // 2
      Leg_67_set.insert("LegSecurityID_t_174093729");
      Leg_67.add_attribute("Src", "M"); // 2
      Leg_67_set.insert("M");
      Leg_67.add_attribute("Prod", "1"); // 2
      Leg_67_set.insert("1");
      Leg_67.add_attribute("CFI", "LegCFICode_t_525503857"); // 2
      Leg_67_set.insert("LegCFICode_t_525503857");
      Leg_67.add_attribute("SecTyp", "AN"); // 2
      Leg_67_set.insert("AN");
      Leg_67.add_attribute("SecSubTyp", "LegSecuritySubType_t_2106379579"); // 2
      Leg_67_set.insert("LegSecuritySubType_t_2106379579");
      Leg_67.add_attribute("MMY", "494634056"); // 2
      Leg_67_set.insert("494634056");
      Leg_67.add_attribute("Mat", "LegMaturityDate_t_408560904"); // 2
      Leg_67_set.insert("LegMaturityDate_t_408560904");
      Leg_67.add_attribute("MatTm", "239624707"); // 2
      Leg_67_set.insert("239624707");
      Leg_67.add_attribute("CpnPmt", "LegCouponPaymentDate_t_867744278"); // 2
      Leg_67_set.insert("LegCouponPaymentDate_t_867744278");
      Leg_67.add_attribute("Issued", "LegIssueDate_t_1285484232"); // 2
      Leg_67_set.insert("LegIssueDate_t_1285484232");
      Leg_67.add_attribute("RepoCollSecTyp", "576517479"); // 2
      Leg_67_set.insert("576517479");
      Leg_67.add_attribute("RepoTrm", "605247921"); // 2
      Leg_67_set.insert("605247921");
      Leg_67.add_attribute("RepoRt", "9473326.520000"); // 2
      Leg_67_set.insert("9473326.520000");
      Leg_67.add_attribute("Fctr", "14879958.590000"); // 2
      Leg_67_set.insert("14879958.590000");
      Leg_67.add_attribute("CrdRtg", "LegCreditRating_t_1957582982"); // 2
      Leg_67_set.insert("LegCreditRating_t_1957582982");
      Leg_67.add_attribute("Rgstry", "LegInstrRegistry_t_1023930047"); // 2
      Leg_67_set.insert("LegInstrRegistry_t_1023930047");
      Leg_67.add_attribute("Ctry", "1663087796"); // 2
      Leg_67_set.insert("1663087796");
      Leg_67.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_597619424"); // 2
      Leg_67_set.insert("LegStateOrProvinceOfIssue_t_597619424");
      Leg_67.add_attribute("Lcl", "LegLocaleOfIssue_t_905453340"); // 2
      Leg_67_set.insert("LegLocaleOfIssue_t_905453340");
      Leg_67.add_attribute("Redeem", "LegRedemptionDate_t_2005419230"); // 2
      Leg_67_set.insert("LegRedemptionDate_t_2005419230");
      Leg_67.add_attribute("Strk", "21050681.360000"); // 2
      Leg_67_set.insert("21050681.360000");
      Leg_67.add_attribute("StrkCcy", "GBP"); // 2
      Leg_67_set.insert("GBP");
      Leg_67.add_attribute("OptA", "668144693"); // 2
      Leg_67_set.insert("668144693");
      Leg_67.add_attribute("Cmult", "12382259.630000"); // 2
      Leg_67_set.insert("12382259.630000");
      Leg_67.add_attribute("MultTyp", "2"); // 2
      Leg_67_set.insert("2");
      Leg_67.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_67_set.insert("4");
      Leg_67.add_attribute("UOM", "tn"); // 2
      Leg_67_set.insert("tn");
      Leg_67.add_attribute("UOMQty", "99969.140000"); // 2
      Leg_67_set.insert("99969.140000");
      Leg_67.add_attribute("PxUOM", "Gal"); // 2
      Leg_67_set.insert("Gal");
      Leg_67.add_attribute("PxUOMQty", "8092770.750000"); // 2
      Leg_67_set.insert("8092770.750000");
      Leg_67.add_attribute("TmUnit", "D"); // 2
      Leg_67_set.insert("D");
      Leg_67.add_attribute("ExerStyle", "2"); // 2
      Leg_67_set.insert("2");
      Leg_67.add_attribute("CpnRt", "13347809.330000"); // 2
      Leg_67_set.insert("13347809.330000");
      Leg_67.add_attribute("Exch", "LegSecurityExchange_t_363274089"); // 2
      Leg_67_set.insert("LegSecurityExchange_t_363274089");
      Leg_67.add_attribute("Issr", "LegIssuer_t_1198878536"); // 2
      Leg_67_set.insert("LegIssuer_t_1198878536");
      Leg_67.add_attribute("EncLegIssrLen", "1829414989"); // 2
      Leg_67_set.insert("1829414989");
      Leg_67.add_attribute("EncLegIssr", "EncodedLegIssuer_t_771834994"); // 2
      Leg_67_set.insert("EncodedLegIssuer_t_771834994");
      Leg_67.add_attribute("Desc", "LegSecurityDesc_t_1438503243"); // 2
      Leg_67_set.insert("LegSecurityDesc_t_1438503243");
      Leg_67.add_attribute("EncLegSecDescLen", "549675619"); // 2
      Leg_67_set.insert("549675619");
      Leg_67.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2057319226"); // 2
      Leg_67_set.insert("EncodedLegSecurityDesc_t_2057319226");
      Leg_67.add_attribute("RatioQty", "20150207.220000"); // 2
      Leg_67_set.insert("20150207.220000");
      Leg_67.add_attribute("Side", "5"); // 2
      Leg_67_set.insert("5");
      Leg_67.add_attribute("Ccy", "CHF"); // 2
      Leg_67_set.insert("CHF");
      Leg_67.add_attribute("Pool", "LegPool_t_965022875"); // 2
      Leg_67_set.insert("LegPool_t_965022875");
      Leg_67.add_attribute("Dated", "LegDatedDate_t_1881098277"); // 2
      Leg_67_set.insert("LegDatedDate_t_1881098277");
      Leg_67.add_attribute("CSetMo", "871137082"); // 2
      Leg_67_set.insert("871137082");
      Leg_67.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1562642299"); // 2
      Leg_67_set.insert("LegInterestAccrualDate_t_1562642299");
      Leg_67.add_attribute("PutCall", "639067970"); // 2
      Leg_67_set.insert("639067970");
      Leg_67.add_attribute("LegOptionRatio", "7290726.640000"); // 2
      Leg_67_set.insert("7290726.640000");
      Leg_67.add_attribute("Px", "15202267.880000"); // 2
      Leg_67_set.insert("15202267.880000");
      all_values.push_back(Leg_67_set);
      all_compo_names.insert("Leg_67_set");

      {
        xml_element LegAID_67{"LegAID"};
        multiset<string> LegAID_67_set;
        LegAID_67.add_attribute("SecAltID", "LegSecurityAltID_t_2067090399"); // 3
        LegAID_67_set.insert("LegSecurityAltID_t_2067090399");
        LegAID_67.add_attribute("SecAltIDSrc", "L"); // 3
        LegAID_67_set.insert("L");
        all_values.push_back(LegAID_67_set);
        all_compo_names.insert("LegAID_67_set");

        Leg_67.add_element(LegAID_67);
      }
      QuotCxlEntry_1.add_element(Leg_67);
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
