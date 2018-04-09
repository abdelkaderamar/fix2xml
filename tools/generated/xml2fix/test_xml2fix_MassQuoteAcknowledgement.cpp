#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MassQuoteAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MassQuoteAcknowledgement_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MassQuotAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuoteAcknowledgement_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_1390854215"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("QuoteReqID_t_1390854215");
  elt.add_attribute("QID", "QuoteID_t_1307679734"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("QuoteID_t_1307679734");
  elt.add_attribute("Stat", "4"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("4");
  elt.add_attribute("RejRsn", "6"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("6");
  elt.add_attribute("RspLvl", "1"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("1");
  elt.add_attribute("Typ", "3"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("3");
  elt.add_attribute("CxlTyp", "5"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("5");
  elt.add_attribute("Acct", "Account_t_1288091485"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("Account_t_1288091485");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "7"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("7");
  elt.add_attribute("Txt", "Text_t_832315510"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("Text_t_832315510");
  elt.add_attribute("EncTxtLen", "197019539"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("197019539");
  elt.add_attribute("EncTxt", "EncodedText_t_833233978"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("EncodedText_t_833233978");
  all_values.push_back(MassQuoteAcknowledgement_message_t_0);
  all_compo_names.insert("MassQuoteAcknowledgement_message_t");

  { // Hdr
    xml_element Hdr_47{"Hdr"};
    multiset<string> Hdr_47_set;
    Hdr_47.add_attribute("SeqNum", "1232942744"); // 1
    Hdr_47_set.insert("1232942744");
    Hdr_47.add_attribute("SID", "SenderCompID_t_1207240515"); // 1
    Hdr_47_set.insert("SenderCompID_t_1207240515");
    Hdr_47.add_attribute("TID", "TargetCompID_t_1671672218"); // 1
    Hdr_47_set.insert("TargetCompID_t_1671672218");
    Hdr_47.add_attribute("OBID", "OnBehalfOfCompID_t_667082571"); // 1
    Hdr_47_set.insert("OnBehalfOfCompID_t_667082571");
    Hdr_47.add_attribute("D2ID", "DeliverToCompID_t_235398962"); // 1
    Hdr_47_set.insert("DeliverToCompID_t_235398962");
    Hdr_47.add_attribute("SSub", "SenderSubID_t_1807833640"); // 1
    Hdr_47_set.insert("SenderSubID_t_1807833640");
    Hdr_47.add_attribute("SLoc", "SenderLocationID_t_1490390301"); // 1
    Hdr_47_set.insert("SenderLocationID_t_1490390301");
    Hdr_47.add_attribute("TSub", "TargetSubID_t_1771830961"); // 1
    Hdr_47_set.insert("TargetSubID_t_1771830961");
    Hdr_47.add_attribute("TLoc", "TargetLocationID_t_587806301"); // 1
    Hdr_47_set.insert("TargetLocationID_t_587806301");
    Hdr_47.add_attribute("OBSub", "OnBehalfOfSubID_t_1163453702"); // 1
    Hdr_47_set.insert("OnBehalfOfSubID_t_1163453702");
    Hdr_47.add_attribute("OBLoc", "OnBehalfOfLocationID_t_633348616"); // 1
    Hdr_47_set.insert("OnBehalfOfLocationID_t_633348616");
    Hdr_47.add_attribute("D2Sub", "DeliverToSubID_t_963844178"); // 1
    Hdr_47_set.insert("DeliverToSubID_t_963844178");
    Hdr_47.add_attribute("D2Loc", "DeliverToLocationID_t_1557647329"); // 1
    Hdr_47_set.insert("DeliverToLocationID_t_1557647329");
    Hdr_47.add_attribute("PosDup", "Y"); // 1
    Hdr_47_set.insert("Y");
    Hdr_47.add_attribute("PosRsnd", "N"); // 1
    Hdr_47_set.insert("N");
    Hdr_47.add_attribute("Snt", "SendingTime_t_863662559"); // 1
    Hdr_47_set.insert("SendingTime_t_863662559");
    Hdr_47.add_attribute("OrigSnt", "OrigSendingTime_t_512042513"); // 1
    Hdr_47_set.insert("OrigSendingTime_t_512042513");
    Hdr_47.add_attribute("MsgEncd", "MessageEncoding_t_722789795"); // 1
    Hdr_47_set.insert("MessageEncoding_t_722789795");
    all_values.push_back(Hdr_47_set);
    all_compo_names.insert("Hdr_47_set");

    {
      xml_element Hop_47{"Hop"};
      multiset<string> Hop_47_set;
      Hop_47.add_attribute("ID", "HopCompID_t_107033126"); // 2
      Hop_47_set.insert("HopCompID_t_107033126");
      Hop_47.add_attribute("Ref", "1819722247"); // 2
      Hop_47_set.insert("1819722247");
      Hop_47.add_attribute("Snt", "HopSendingTime_t_1264526260"); // 2
      Hop_47_set.insert("HopSendingTime_t_1264526260");
      all_values.push_back(Hop_47_set);
      all_compo_names.insert("Hop_47_set");

      Hdr_47.add_element(Hop_47);
    }
    elt.add_element(Hdr_47);
  } // end Hdr
  { // Pty
    xml_element Pty_186{"Pty"};
    multiset<string> Pty_186_set;
    Pty_186.add_attribute("ID", "PartyID_t_1568047341"); // 1
    Pty_186_set.insert("PartyID_t_1568047341");
    Pty_186.add_attribute("Src", "I"); // 1
    Pty_186_set.insert("I");
    Pty_186.add_attribute("R", "68"); // 1
    Pty_186_set.insert("68");
    all_values.push_back(Pty_186_set);
    all_compo_names.insert("Pty_186_set");

    {
      xml_element Sub_186{"Sub"};
      multiset<string> Sub_186_set;
      Sub_186.add_attribute("ID", "PartySubID_t_708655178"); // 2
      Sub_186_set.insert("PartySubID_t_708655178");
      Sub_186.add_attribute("Typ", "28"); // 2
      Sub_186_set.insert("28");
      all_values.push_back(Sub_186_set);
      all_compo_names.insert("Sub_186_set");

      Pty_186.add_element(Sub_186);
    }
    elt.add_element(Pty_186);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_0{"TgtPty"};
    multiset<string> TgtPty_0_set;
    TgtPty_0.add_attribute("ID", "TargetPartyID_t_1540970689"); // 1
    TgtPty_0_set.insert("TargetPartyID_t_1540970689");
    TgtPty_0.add_attribute("Src", "6"); // 1
    TgtPty_0_set.insert("6");
    TgtPty_0.add_attribute("R", "14"); // 1
    TgtPty_0_set.insert("14");
    all_values.push_back(TgtPty_0_set);
    all_compo_names.insert("TgtPty_0_set");

    elt.add_element(TgtPty_0);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_1{"TgtPty"};
    multiset<string> TgtPty_1_set;
    TgtPty_1.add_attribute("ID", "TargetPartyID_t_626429785"); // 1
    TgtPty_1_set.insert("TargetPartyID_t_626429785");
    TgtPty_1.add_attribute("Src", "G"); // 1
    TgtPty_1_set.insert("G");
    TgtPty_1.add_attribute("R", "31"); // 1
    TgtPty_1_set.insert("31");
    all_values.push_back(TgtPty_1_set);
    all_compo_names.insert("TgtPty_1_set");

    elt.add_element(TgtPty_1);
  } // end TgtPty
  { // QuotSetAck
    xml_element QuotSetAck_0{"QuotSetAck"};
    multiset<string> QuotSetAck_0_set;
    QuotSetAck_0.add_attribute("SetID", "QuoteSetID_t_1794815045"); // 1
    QuotSetAck_0_set.insert("QuoteSetID_t_1794815045");
    QuotSetAck_0.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1094674963"); // 1
    QuotSetAck_0_set.insert("QuoteSetValidUntilTime_t_1094674963");
    QuotSetAck_0.add_attribute("TotNoQuotEntries", "636419010"); // 1
    QuotSetAck_0_set.insert("636419010");
    QuotSetAck_0.add_attribute("TotNoCxldQts", "1419162359"); // 1
    QuotSetAck_0_set.insert("1419162359");
    QuotSetAck_0.add_attribute("TotNoAccQts", "1682481264"); // 1
    QuotSetAck_0_set.insert("1682481264");
    QuotSetAck_0.add_attribute("TotNoRejQts", "1799872712"); // 1
    QuotSetAck_0_set.insert("1799872712");
    QuotSetAck_0.add_attribute("LastFragment", "Y"); // 1
    QuotSetAck_0_set.insert("Y");
    all_values.push_back(QuotSetAck_0_set);
    all_compo_names.insert("QuotSetAck_0_set");

    {
      xml_element Undly_47{"Undly"};
      multiset<string> Undly_47_set;
      Undly_47.add_attribute("Sym", "UnderlyingSymbol_t_498841794"); // 2
      Undly_47_set.insert("UnderlyingSymbol_t_498841794");
      Undly_47.add_attribute("Sfx", "WI"); // 2
      Undly_47_set.insert("WI");
      Undly_47.add_attribute("ID", "UnderlyingSecurityID_t_1208174696"); // 2
      Undly_47_set.insert("UnderlyingSecurityID_t_1208174696");
      Undly_47.add_attribute("Src", "I"); // 2
      Undly_47_set.insert("I");
      Undly_47.add_attribute("Prod", "1"); // 2
      Undly_47_set.insert("1");
      Undly_47.add_attribute("CFI", "UnderlyingCFICode_t_1720217209"); // 2
      Undly_47_set.insert("UnderlyingCFICode_t_1720217209");
      Undly_47.add_attribute("SecTyp", "BRADY"); // 2
      Undly_47_set.insert("BRADY");
      Undly_47.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_33248430"); // 2
      Undly_47_set.insert("UnderlyingSecuritySubType_t_33248430");
      Undly_47.add_attribute("MMY", "1392455808"); // 2
      Undly_47_set.insert("1392455808");
      Undly_47.add_attribute("Mat", "UnderlyingMaturityDate_t_922394828"); // 2
      Undly_47_set.insert("UnderlyingMaturityDate_t_922394828");
      Undly_47.add_attribute("MatTm", "39454092"); // 2
      Undly_47_set.insert("39454092");
      Undly_47.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_813019501"); // 2
      Undly_47_set.insert("UnderlyingCouponPaymentDate_t_813019501");
      Undly_47.add_attribute("RestrctTyp", "FR"); // 2
      Undly_47_set.insert("FR");
      Undly_47.add_attribute("Snrty", "SR"); // 2
      Undly_47_set.insert("SR");
      Undly_47.add_attribute("NotlPctOut", "15216746.800000"); // 2
      Undly_47_set.insert("15216746.800000");
      Undly_47.add_attribute("OrigNotlPctOut", "4845691.320000"); // 2
      Undly_47_set.insert("4845691.320000");
      Undly_47.add_attribute("AttchPnt", "13401330.860000"); // 2
      Undly_47_set.insert("13401330.860000");
      Undly_47.add_attribute("DetchPnt", "9151617.210000"); // 2
      Undly_47_set.insert("9151617.210000");
      Undly_47.add_attribute("Issued", "UnderlyingIssueDate_t_836744699"); // 2
      Undly_47_set.insert("UnderlyingIssueDate_t_836744699");
      Undly_47.add_attribute("RepoCollSecTyp", "1102785839"); // 2
      Undly_47_set.insert("1102785839");
      Undly_47.add_attribute("RepoTrm", "1541591506"); // 2
      Undly_47_set.insert("1541591506");
      Undly_47.add_attribute("RepoRt", "2486771.340000"); // 2
      Undly_47_set.insert("2486771.340000");
      Undly_47.add_attribute("Fctr", "3896271.620000"); // 2
      Undly_47_set.insert("3896271.620000");
      Undly_47.add_attribute("CrdRtg", "UnderlyingCreditRating_t_687620214"); // 2
      Undly_47_set.insert("UnderlyingCreditRating_t_687620214");
      Undly_47.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2043492180"); // 2
      Undly_47_set.insert("UnderlyingInstrRegistry_t_2043492180");
      Undly_47.add_attribute("Ctry", "1484302126"); // 2
      Undly_47_set.insert("1484302126");
      Undly_47.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1324039224"); // 2
      Undly_47_set.insert("UnderlyingStateOrProvinceOfIssue_t_1324039224");
      Undly_47.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1315170891"); // 2
      Undly_47_set.insert("UnderlyingLocaleOfIssue_t_1315170891");
      Undly_47.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1019299742"); // 2
      Undly_47_set.insert("UnderlyingRedemptionDate_t_1019299742");
      Undly_47.add_attribute("StrkPx", "9764282.880000"); // 2
      Undly_47_set.insert("9764282.880000");
      Undly_47.add_attribute("StrkCcy", "CHF"); // 2
      Undly_47_set.insert("CHF");
      Undly_47.add_attribute("OptA", "38981033"); // 2
      Undly_47_set.insert("38981033");
      Undly_47.add_attribute("Mult", "2808892.660000"); // 2
      Undly_47_set.insert("2808892.660000");
      Undly_47.add_attribute("MultTyp", "2"); // 2
      Undly_47_set.insert("2");
      Undly_47.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_47_set.insert("0");
      Undly_47.add_attribute("UOM", "t"); // 2
      Undly_47_set.insert("t");
      Undly_47.add_attribute("UOMQty", "1110888.780000"); // 2
      Undly_47_set.insert("1110888.780000");
      Undly_47.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_47_set.insert("oz_tr");
      Undly_47.add_attribute("PxUOMQty", "12460786.350000"); // 2
      Undly_47_set.insert("12460786.350000");
      Undly_47.add_attribute("TmUnit", "Wk"); // 2
      Undly_47_set.insert("Wk");
      Undly_47.add_attribute("ExerStyle", "1"); // 2
      Undly_47_set.insert("1");
      Undly_47.add_attribute("CpnRt", "20590981.370000"); // 2
      Undly_47_set.insert("20590981.370000");
      Undly_47.add_attribute("Exch", "UnderlyingSecurityExchange_t_1362896811"); // 2
      Undly_47_set.insert("UnderlyingSecurityExchange_t_1362896811");
      Undly_47.add_attribute("Issr", "UnderlyingIssuer_t_301129523"); // 2
      Undly_47_set.insert("UnderlyingIssuer_t_301129523");
      Undly_47.add_attribute("EncUndIssrLen", "1433289169"); // 2
      Undly_47_set.insert("1433289169");
      Undly_47.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1847465943"); // 2
      Undly_47_set.insert("EncodedUnderlyingIssuer_t_1847465943");
      Undly_47.add_attribute("Desc", "UnderlyingSecurityDesc_t_1641262609"); // 2
      Undly_47_set.insert("UnderlyingSecurityDesc_t_1641262609");
      Undly_47.add_attribute("EncUndSecDescLen", "200967242"); // 2
      Undly_47_set.insert("200967242");
      Undly_47.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_536726994"); // 2
      Undly_47_set.insert("EncodedUnderlyingSecurityDesc_t_536726994");
      Undly_47.add_attribute("CPPgm", "UnderlyingCPProgram_t_596564800"); // 2
      Undly_47_set.insert("UnderlyingCPProgram_t_596564800");
      Undly_47.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1742558748"); // 2
      Undly_47_set.insert("UnderlyingCPRegType_t_1742558748");
      Undly_47.add_attribute("AllocPct", "7854041.290000"); // 2
      Undly_47_set.insert("7854041.290000");
      Undly_47.add_attribute("Ccy", "JPY"); // 2
      Undly_47_set.insert("JPY");
      Undly_47.add_attribute("Qty", "6814126.610000"); // 2
      Undly_47_set.insert("6814126.610000");
      Undly_47.add_attribute("SettlTyp", "2"); // 2
      Undly_47_set.insert("2");
      Undly_47.add_attribute("CashAmt", "UnderlyingCashAmount_t_1606734539"); // 2
      Undly_47_set.insert("UnderlyingCashAmount_t_1606734539");
      Undly_47.add_attribute("CashTyp", "FIXED"); // 2
      Undly_47_set.insert("FIXED");
      Undly_47.add_attribute("Px", "13423101.830000"); // 2
      Undly_47_set.insert("13423101.830000");
      Undly_47.add_attribute("DirtPx", "4356791.790000"); // 2
      Undly_47_set.insert("4356791.790000");
      Undly_47.add_attribute("EndPx", "10692981.220000"); // 2
      Undly_47_set.insert("10692981.220000");
      Undly_47.add_attribute("StartVal", "UnderlyingStartValue_t_712968072"); // 2
      Undly_47_set.insert("UnderlyingStartValue_t_712968072");
      Undly_47.add_attribute("CurVal", "UnderlyingCurrentValue_t_474660213"); // 2
      Undly_47_set.insert("UnderlyingCurrentValue_t_474660213");
      Undly_47.add_attribute("EndVal", "UnderlyingEndValue_t_1350187388"); // 2
      Undly_47_set.insert("UnderlyingEndValue_t_1350187388");
      Undly_47.add_attribute("AdjQty", "11661883.820000"); // 2
      Undly_47_set.insert("11661883.820000");
      Undly_47.add_attribute("FxRate", "4398565.500000"); // 2
      Undly_47_set.insert("4398565.500000");
      Undly_47.add_attribute("FxRateCalc", "D"); // 2
      Undly_47_set.insert("D");
      Undly_47.add_attribute("CapValu", "UnderlyingCapValue_t_1277277261"); // 2
      Undly_47_set.insert("UnderlyingCapValue_t_1277277261");
      Undly_47.add_attribute("SetMeth", "UnderlyingSettlMethod_t_438301318"); // 2
      Undly_47_set.insert("UnderlyingSettlMethod_t_438301318");
      Undly_47.add_attribute("PutCall", "302405202"); // 2
      Undly_47_set.insert("302405202");
      all_values.push_back(Undly_47_set);
      all_compo_names.insert("Undly_47_set");

      {
        xml_element UndAID_47{"UndAID"};
        multiset<string> UndAID_47_set;
        UndAID_47.add_attribute("AltID", "UnderlyingSecurityAltID_t_163277320"); // 3
        UndAID_47_set.insert("UnderlyingSecurityAltID_t_163277320");
        UndAID_47.add_attribute("AltIDSrc", "G"); // 3
        UndAID_47_set.insert("G");
        all_values.push_back(UndAID_47_set);
        all_compo_names.insert("UndAID_47_set");

        Undly_47.add_element(UndAID_47);
      }
      {
        xml_element Stip_74{"Stip"};
        multiset<string> Stip_74_set;
        Stip_74.add_attribute("Typ", "GEOG"); // 3
        Stip_74_set.insert("GEOG");
        Stip_74.add_attribute("Val", "UnderlyingStipValue_t_1526174131"); // 3
        Stip_74_set.insert("UnderlyingStipValue_t_1526174131");
        all_values.push_back(Stip_74_set);
        all_compo_names.insert("Stip_74_set");

        Undly_47.add_element(Stip_74);
      }
      {
        xml_element Pty_187{"Pty"};
        multiset<string> Pty_187_set;
        Pty_187.add_attribute("ID", "UnderlyingInstrumentPartyID_t_777329702"); // 3
        Pty_187_set.insert("UnderlyingInstrumentPartyID_t_777329702");
        Pty_187.add_attribute("Src", "H"); // 3
        Pty_187_set.insert("H");
        Pty_187.add_attribute("R", "34"); // 3
        Pty_187_set.insert("34");
        all_values.push_back(Pty_187_set);
        all_compo_names.insert("Pty_187_set");

        {
          xml_element Sub_187{"Sub"};
          multiset<string> Sub_187_set;
          Sub_187.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_271108664"); // 4
          Sub_187_set.insert("UnderlyingInstrumentPartySubID_t_271108664");
          Sub_187.add_attribute("Typ", "8"); // 4
          Sub_187_set.insert("8");
          all_values.push_back(Sub_187_set);
          all_compo_names.insert("Sub_187_set");

          Pty_187.add_element(Sub_187);
        }
        Undly_47.add_element(Pty_187);
      }
      QuotSetAck_0.add_element(Undly_47);
    }
    {
      xml_element QuotEntryAck_0{"QuotEntryAck"};
      multiset<string> QuotEntryAck_0_set;
      QuotEntryAck_0.add_attribute("EntryID", "QuoteEntryID_t_1762883420"); // 2
      QuotEntryAck_0_set.insert("QuoteEntryID_t_1762883420");
      QuotEntryAck_0.add_attribute("BidPx", "8676734.640000"); // 2
      QuotEntryAck_0_set.insert("8676734.640000");
      QuotEntryAck_0.add_attribute("OfrPx", "14433512.020000"); // 2
      QuotEntryAck_0_set.insert("14433512.020000");
      QuotEntryAck_0.add_attribute("BidSz", "4008039.010000"); // 2
      QuotEntryAck_0_set.insert("4008039.010000");
      QuotEntryAck_0.add_attribute("OfrSz", "18538654.270000"); // 2
      QuotEntryAck_0_set.insert("18538654.270000");
      QuotEntryAck_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_1726046517"); // 2
      QuotEntryAck_0_set.insert("ValidUntilTime_t_1726046517");
      QuotEntryAck_0.add_attribute("BidSpotRt", "10822165.620000"); // 2
      QuotEntryAck_0_set.insert("10822165.620000");
      QuotEntryAck_0.add_attribute("OfrSpotRt", "293922.200000"); // 2
      QuotEntryAck_0_set.insert("293922.200000");
      QuotEntryAck_0.add_attribute("BidFwdPnts", "11852974.080000"); // 2
      QuotEntryAck_0_set.insert("11852974.080000");
      QuotEntryAck_0.add_attribute("OfrFwdPnts", "9313164.660000"); // 2
      QuotEntryAck_0_set.insert("9313164.660000");
      QuotEntryAck_0.add_attribute("MidPx", "13717024.040000"); // 2
      QuotEntryAck_0_set.insert("13717024.040000");
      QuotEntryAck_0.add_attribute("BidYld", "16209765.870000"); // 2
      QuotEntryAck_0_set.insert("16209765.870000");
      QuotEntryAck_0.add_attribute("MidYld", "20006145.880000"); // 2
      QuotEntryAck_0_set.insert("20006145.880000");
      QuotEntryAck_0.add_attribute("OfrYld", "20846704.760000"); // 2
      QuotEntryAck_0_set.insert("20846704.760000");
      QuotEntryAck_0.add_attribute("TxnTm", "TransactTime_t_2095636800"); // 2
      QuotEntryAck_0_set.insert("TransactTime_t_2095636800");
      QuotEntryAck_0.add_attribute("SesID", "5"); // 2
      QuotEntryAck_0_set.insert("5");
      QuotEntryAck_0.add_attribute("SesSub", "2"); // 2
      QuotEntryAck_0_set.insert("2");
      QuotEntryAck_0.add_attribute("SettlDt", "SettlDate_t_388009703"); // 2
      QuotEntryAck_0_set.insert("SettlDate_t_388009703");
      QuotEntryAck_0.add_attribute("OrdTyp", "8"); // 2
      QuotEntryAck_0_set.insert("8");
      QuotEntryAck_0.add_attribute("SettlDt2", "SettlDate2_t_233168824"); // 2
      QuotEntryAck_0_set.insert("SettlDate2_t_233168824");
      QuotEntryAck_0.add_attribute("Qty2", "8263110.210000"); // 2
      QuotEntryAck_0_set.insert("8263110.210000");
      QuotEntryAck_0.add_attribute("BidFwdPnts2", "5620500.980000"); // 2
      QuotEntryAck_0_set.insert("5620500.980000");
      QuotEntryAck_0.add_attribute("OfrFwdPnts2", "3964461.440000"); // 2
      QuotEntryAck_0_set.insert("3964461.440000");
      QuotEntryAck_0.add_attribute("Ccy", "CAN"); // 2
      QuotEntryAck_0_set.insert("CAN");
      QuotEntryAck_0.add_attribute("BkngTyp", "0"); // 2
      QuotEntryAck_0_set.insert("0");
      QuotEntryAck_0.add_attribute("Cpcty", "P"); // 2
      QuotEntryAck_0_set.insert("P");
      QuotEntryAck_0.add_attribute("Rstctions", "3"); // 2
      QuotEntryAck_0_set.insert("3");
      QuotEntryAck_0.add_attribute("QtEntSts", "14"); // 2
      QuotEntryAck_0_set.insert("14");
      QuotEntryAck_0.add_attribute("EntryRejRsn", "13"); // 2
      QuotEntryAck_0_set.insert("13");
      all_values.push_back(QuotEntryAck_0_set);
      all_compo_names.insert("QuotEntryAck_0_set");

      {
        xml_element Instrmt_35{"Instrmt"};
        multiset<string> Instrmt_35_set;
        Instrmt_35.add_attribute("Sym", "Symbol_t_2124171104"); // 3
        Instrmt_35_set.insert("Symbol_t_2124171104");
        Instrmt_35.add_attribute("Sfx", "WI"); // 3
        Instrmt_35_set.insert("WI");
        Instrmt_35.add_attribute("ID", "SecurityID_t_1071139383"); // 3
        Instrmt_35_set.insert("SecurityID_t_1071139383");
        Instrmt_35.add_attribute("Src", "I"); // 3
        Instrmt_35_set.insert("I");
        Instrmt_35.add_attribute("Prod", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("ProdCmplx", "ProductComplex_t_777521163"); // 3
        Instrmt_35_set.insert("ProductComplex_t_777521163");
        Instrmt_35.add_attribute("SecGrp", "SecurityGroup_t_998601528"); // 3
        Instrmt_35_set.insert("SecurityGroup_t_998601528");
        Instrmt_35.add_attribute("CFI", "CFICode_t_2099713289"); // 3
        Instrmt_35_set.insert("CFICode_t_2099713289");
        Instrmt_35.add_attribute("SecTyp", "AMENDED"); // 3
        Instrmt_35_set.insert("AMENDED");
        Instrmt_35.add_attribute("SubTyp", "SecuritySubType_t_36415288"); // 3
        Instrmt_35_set.insert("SecuritySubType_t_36415288");
        Instrmt_35.add_attribute("MMY", "883546108"); // 3
        Instrmt_35_set.insert("883546108");
        Instrmt_35.add_attribute("MatDt", "MaturityDate_t_31132139"); // 3
        Instrmt_35_set.insert("MaturityDate_t_31132139");
        Instrmt_35.add_attribute("MatTm", "1657391875"); // 3
        Instrmt_35_set.insert("1657391875");
        Instrmt_35.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_736677048"); // 3
        Instrmt_35_set.insert("SettleOnOpenFlag_t_736677048");
        Instrmt_35.add_attribute("AsgnMeth", "2115802616"); // 3
        Instrmt_35_set.insert("2115802616");
        Instrmt_35.add_attribute("Status", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("CpnPmt", "CouponPaymentDate_t_1939995377"); // 3
        Instrmt_35_set.insert("CouponPaymentDate_t_1939995377");
        Instrmt_35.add_attribute("RestrctTyp", "XR"); // 3
        Instrmt_35_set.insert("XR");
        Instrmt_35.add_attribute("Snrty", "SB"); // 3
        Instrmt_35_set.insert("SB");
        Instrmt_35.add_attribute("NotlPctOut", "521566.240000"); // 3
        Instrmt_35_set.insert("521566.240000");
        Instrmt_35.add_attribute("OrigNotlPctOut", "13048630.030000"); // 3
        Instrmt_35_set.insert("13048630.030000");
        Instrmt_35.add_attribute("AttchPnt", "6723821.040000"); // 3
        Instrmt_35_set.insert("6723821.040000");
        Instrmt_35.add_attribute("DetchPnt", "6142067.220000"); // 3
        Instrmt_35_set.insert("6142067.220000");
        Instrmt_35.add_attribute("Issued", "IssueDate_t_1701309147"); // 3
        Instrmt_35_set.insert("IssueDate_t_1701309147");
        Instrmt_35.add_attribute("RepoCollSecTyp", "1974893305"); // 3
        Instrmt_35_set.insert("1974893305");
        Instrmt_35.add_attribute("RepoTrm", "1390276512"); // 3
        Instrmt_35_set.insert("1390276512");
        Instrmt_35.add_attribute("RepoRt", "14764457.740000"); // 3
        Instrmt_35_set.insert("14764457.740000");
        Instrmt_35.add_attribute("Fctr", "19072505.600000"); // 3
        Instrmt_35_set.insert("19072505.600000");
        Instrmt_35.add_attribute("CrdRtg", "CreditRating_t_1666171514"); // 3
        Instrmt_35_set.insert("CreditRating_t_1666171514");
        Instrmt_35.add_attribute("Rgstry", "InstrRegistry_t_330255179"); // 3
        Instrmt_35_set.insert("InstrRegistry_t_330255179");
        Instrmt_35.add_attribute("IssuCtry", "2110716479"); // 3
        Instrmt_35_set.insert("2110716479");
        Instrmt_35.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1642858970"); // 3
        Instrmt_35_set.insert("StateOrProvinceOfIssue_t_1642858970");
        Instrmt_35.add_attribute("Lcl", "LocaleOfIssue_t_946948004"); // 3
        Instrmt_35_set.insert("LocaleOfIssue_t_946948004");
        Instrmt_35.add_attribute("Redeem", "RedemptionDate_t_1034372214"); // 3
        Instrmt_35_set.insert("RedemptionDate_t_1034372214");
        Instrmt_35.add_attribute("StrkPx", "9154139.810000"); // 3
        Instrmt_35_set.insert("9154139.810000");
        Instrmt_35.add_attribute("StrkCcy", "CHF"); // 3
        Instrmt_35_set.insert("CHF");
        Instrmt_35.add_attribute("StrkMult", "19140155.090000"); // 3
        Instrmt_35_set.insert("19140155.090000");
        Instrmt_35.add_attribute("StrkValu", "19166743.730000"); // 3
        Instrmt_35_set.insert("19166743.730000");
        Instrmt_35.add_attribute("StrkPxDtrmnMeth", "2"); // 3
        Instrmt_35_set.insert("2");
        Instrmt_35.add_attribute("StrkPxBndryMeth", "3"); // 3
        Instrmt_35_set.insert("3");
        Instrmt_35.add_attribute("StrkPxBndryPrcsn", "6527368.330000"); // 3
        Instrmt_35_set.insert("6527368.330000");
        Instrmt_35.add_attribute("PxDtrmnMeth", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("OptAt", "1460339025"); // 3
        Instrmt_35_set.insert("1460339025");
        Instrmt_35.add_attribute("Mult", "13894138.810000"); // 3
        Instrmt_35_set.insert("13894138.810000");
        Instrmt_35.add_attribute("MultTyp", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("FlowSchedTyp", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("MinPxIncr", "11819256.100000"); // 3
        Instrmt_35_set.insert("11819256.100000");
        Instrmt_35.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1542468399"); // 3
        Instrmt_35_set.insert("MinPriceIncrementAmount_t_1542468399");
        Instrmt_35.add_attribute("UOM", "MMBtu"); // 3
        Instrmt_35_set.insert("MMBtu");
        Instrmt_35.add_attribute("UOMQty", "12340822.350000"); // 3
        Instrmt_35_set.insert("12340822.350000");
        Instrmt_35.add_attribute("PxUOM", "oz_tr"); // 3
        Instrmt_35_set.insert("oz_tr");
        Instrmt_35.add_attribute("PxUOMQty", "14368535.920000"); // 3
        Instrmt_35_set.insert("14368535.920000");
        Instrmt_35.add_attribute("SettlMeth", "P"); // 3
        Instrmt_35_set.insert("P");
        Instrmt_35.add_attribute("ExerStyle", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("OptPayAmt", "OptPayoutAmount_t_1091081821"); // 3
        Instrmt_35_set.insert("OptPayoutAmount_t_1091081821");
        Instrmt_35.add_attribute("PxQteMeth", "PCTPAR"); // 3
        Instrmt_35_set.insert("PCTPAR");
        Instrmt_35.add_attribute("ValMeth", "FUT"); // 3
        Instrmt_35_set.insert("FUT");
        Instrmt_35.add_attribute("ListMeth", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("CapPx", "20603742.060000"); // 3
        Instrmt_35_set.insert("20603742.060000");
        Instrmt_35.add_attribute("FlrPx", "9872629.920000"); // 3
        Instrmt_35_set.insert("9872629.920000");
        Instrmt_35.add_attribute("PutCall", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("FlexInd", "false"); // 3
        Instrmt_35_set.insert("false");
        Instrmt_35.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_35_set.insert("false");
        Instrmt_35.add_attribute("TmUnit", "Wk"); // 3
        Instrmt_35_set.insert("Wk");
        Instrmt_35.add_attribute("CpnRt", "6767996.460000"); // 3
        Instrmt_35_set.insert("6767996.460000");
        Instrmt_35.add_attribute("Exch", "SecurityExchange_t_1686044936"); // 3
        Instrmt_35_set.insert("SecurityExchange_t_1686044936");
        Instrmt_35.add_attribute("PosLmt", "787090853"); // 3
        Instrmt_35_set.insert("787090853");
        Instrmt_35.add_attribute("NTPosLmt", "445990371"); // 3
        Instrmt_35_set.insert("445990371");
        Instrmt_35.add_attribute("Issr", "Issuer_t_9884401"); // 3
        Instrmt_35_set.insert("Issuer_t_9884401");
        Instrmt_35.add_attribute("EncIssrLen", "590038002"); // 3
        Instrmt_35_set.insert("590038002");
        Instrmt_35.add_attribute("EncIssr", "EncodedIssuer_t_1098727204"); // 3
        Instrmt_35_set.insert("EncodedIssuer_t_1098727204");
        Instrmt_35.add_attribute("Desc", "SecurityDesc_t_512339654"); // 3
        Instrmt_35_set.insert("SecurityDesc_t_512339654");
        Instrmt_35.add_attribute("EncSecDescLen", "2050377027"); // 3
        Instrmt_35_set.insert("2050377027");
        Instrmt_35.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_340657438"); // 3
        Instrmt_35_set.insert("EncodedSecurityDesc_t_340657438");
        Instrmt_35.add_attribute("Pool", "Pool_t_983113874"); // 3
        Instrmt_35_set.insert("Pool_t_983113874");
        Instrmt_35.add_attribute("CSetMo", "821293784"); // 3
        Instrmt_35_set.insert("821293784");
        Instrmt_35.add_attribute("CPPgm", "99"); // 3
        Instrmt_35_set.insert("99");
        Instrmt_35.add_attribute("CPRegT", "CPRegType_t_378098626"); // 3
        Instrmt_35_set.insert("CPRegType_t_378098626");
        Instrmt_35.add_attribute("Dated", "DatedDate_t_1585765272"); // 3
        Instrmt_35_set.insert("DatedDate_t_1585765272");
        Instrmt_35.add_attribute("IntAcrl", "InterestAccrualDate_t_609181635"); // 3
        Instrmt_35_set.insert("InterestAccrualDate_t_609181635");
        all_values.push_back(Instrmt_35_set);
        all_compo_names.insert("Instrmt_35_set");

        {
          xml_element AID_38{"AID"};
          multiset<string> AID_38_set;
          AID_38.add_attribute("AltID", "SecurityAltID_t_1077946380"); // 4
          AID_38_set.insert("SecurityAltID_t_1077946380");
          AID_38.add_attribute("AltIDSrc", "C"); // 4
          AID_38_set.insert("C");
          all_values.push_back(AID_38_set);
          all_compo_names.insert("AID_38_set");

          Instrmt_35.add_element(AID_38);
        }
        {
          xml_element SecXML_38{"SecXML"};
          multiset<string> SecXML_38_set;
          SecXML_38.add_attribute("Schema", "SecurityXMLSchema_t_309986945"); // 4
          SecXML_38_set.insert("SecurityXMLSchema_t_309986945");
          all_values.push_back(SecXML_38_set);
          all_compo_names.insert("SecXML_38_set");

          Instrmt_35.add_element(SecXML_38);
        }
        {
          xml_element Evnt_38{"Evnt"};
          multiset<string> Evnt_38_set;
          Evnt_38.add_attribute("EventTyp", "14"); // 4
          Evnt_38_set.insert("14");
          Evnt_38.add_attribute("Dt", "EventDate_t_2139398466"); // 4
          Evnt_38_set.insert("EventDate_t_2139398466");
          Evnt_38.add_attribute("Tm", "EventTime_t_1401068766"); // 4
          Evnt_38_set.insert("EventTime_t_1401068766");
          Evnt_38.add_attribute("Px", "9142550.130000"); // 4
          Evnt_38_set.insert("9142550.130000");
          Evnt_38.add_attribute("Txt", "EventText_t_1015944980"); // 4
          Evnt_38_set.insert("EventText_t_1015944980");
          all_values.push_back(Evnt_38_set);
          all_compo_names.insert("Evnt_38_set");

          Instrmt_35.add_element(Evnt_38);
        }
        {
          xml_element Pty_188{"Pty"};
          multiset<string> Pty_188_set;
          Pty_188.add_attribute("ID", "InstrumentPartyID_t_2010838454"); // 4
          Pty_188_set.insert("InstrumentPartyID_t_2010838454");
          Pty_188.add_attribute("Src", "F"); // 4
          Pty_188_set.insert("F");
          Pty_188.add_attribute("R", "82"); // 4
          Pty_188_set.insert("82");
          all_values.push_back(Pty_188_set);
          all_compo_names.insert("Pty_188_set");

          {
            xml_element Sub_188{"Sub"};
            multiset<string> Sub_188_set;
            Sub_188.add_attribute("ID", "InstrumentPartySubID_t_2115983464"); // 5
            Sub_188_set.insert("InstrumentPartySubID_t_2115983464");
            Sub_188.add_attribute("Typ", "20"); // 5
            Sub_188_set.insert("20");
            all_values.push_back(Sub_188_set);
            all_compo_names.insert("Sub_188_set");

            Pty_188.add_element(Sub_188);
          }
          Instrmt_35.add_element(Pty_188);
        }
        {
          xml_element CmplxEvnt_35{"CmplxEvnt"};
          multiset<string> CmplxEvnt_35_set;
          CmplxEvnt_35.add_attribute("Typ", "5"); // 4
          CmplxEvnt_35_set.insert("5");
          CmplxEvnt_35.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_989058807"); // 4
          CmplxEvnt_35_set.insert("ComplexOptPayoutAmount_t_989058807");
          CmplxEvnt_35.add_attribute("Px", "2163001.330000"); // 4
          CmplxEvnt_35_set.insert("2163001.330000");
          CmplxEvnt_35.add_attribute("PxBndryMeth", "1"); // 4
          CmplxEvnt_35_set.insert("1");
          CmplxEvnt_35.add_attribute("PxBndryPrcsn", "17761496.600000"); // 4
          CmplxEvnt_35_set.insert("17761496.600000");
          CmplxEvnt_35.add_attribute("PxTmTyp", "3"); // 4
          CmplxEvnt_35_set.insert("3");
          CmplxEvnt_35.add_attribute("Cond", "2"); // 4
          CmplxEvnt_35_set.insert("2");
          all_values.push_back(CmplxEvnt_35_set);
          all_compo_names.insert("CmplxEvnt_35_set");

          {
            xml_element EvntDts_35{"EvntDts"};
            multiset<string> EvntDts_35_set;
            EvntDts_35.add_attribute("StartDt", "ComplexEventStartDate_t_218704015"); // 5
            EvntDts_35_set.insert("ComplexEventStartDate_t_218704015");
            EvntDts_35.add_attribute("EndDt", "ComplexEventEndDate_t_1761017709"); // 5
            EvntDts_35_set.insert("ComplexEventEndDate_t_1761017709");
            all_values.push_back(EvntDts_35_set);
            all_compo_names.insert("EvntDts_35_set");

            {
              xml_element EvntTms_35{"EvntTms"};
              multiset<string> EvntTms_35_set;
              EvntTms_35.add_attribute("StartTm", "1938144875"); // 6
              EvntTms_35_set.insert("1938144875");
              EvntTms_35.add_attribute("EndTm", "121597394"); // 6
              EvntTms_35_set.insert("121597394");
              all_values.push_back(EvntTms_35_set);
              all_compo_names.insert("EvntTms_35_set");

              EvntDts_35.add_element(EvntTms_35);
            }
            CmplxEvnt_35.add_element(EvntDts_35);
          }
          Instrmt_35.add_element(CmplxEvnt_35);
        }
        QuotEntryAck_0.add_element(Instrmt_35);
      }
      {
        xml_element Leg_47{"Leg"};
        multiset<string> Leg_47_set;
        Leg_47.add_attribute("Sym", "LegSymbol_t_2101675147"); // 3
        Leg_47_set.insert("LegSymbol_t_2101675147");
        Leg_47.add_attribute("Sfx", "CD"); // 3
        Leg_47_set.insert("CD");
        Leg_47.add_attribute("ID", "LegSecurityID_t_942891179"); // 3
        Leg_47_set.insert("LegSecurityID_t_942891179");
        Leg_47.add_attribute("Src", "J"); // 3
        Leg_47_set.insert("J");
        Leg_47.add_attribute("Prod", "2"); // 3
        Leg_47_set.insert("2");
        Leg_47.add_attribute("CFI", "LegCFICode_t_381172803"); // 3
        Leg_47_set.insert("LegCFICode_t_381172803");
        Leg_47.add_attribute("SecTyp", "?"); // 3
        Leg_47_set.insert("?");
        Leg_47.add_attribute("SecSubTyp", "LegSecuritySubType_t_82336460"); // 3
        Leg_47_set.insert("LegSecuritySubType_t_82336460");
        Leg_47.add_attribute("MMY", "1256308020"); // 3
        Leg_47_set.insert("1256308020");
        Leg_47.add_attribute("Mat", "LegMaturityDate_t_248459480"); // 3
        Leg_47_set.insert("LegMaturityDate_t_248459480");
        Leg_47.add_attribute("MatTm", "1413956094"); // 3
        Leg_47_set.insert("1413956094");
        Leg_47.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1248222839"); // 3
        Leg_47_set.insert("LegCouponPaymentDate_t_1248222839");
        Leg_47.add_attribute("Issued", "LegIssueDate_t_1649528247"); // 3
        Leg_47_set.insert("LegIssueDate_t_1649528247");
        Leg_47.add_attribute("RepoCollSecTyp", "180727460"); // 3
        Leg_47_set.insert("180727460");
        Leg_47.add_attribute("RepoTrm", "116684171"); // 3
        Leg_47_set.insert("116684171");
        Leg_47.add_attribute("RepoRt", "15128830.530000"); // 3
        Leg_47_set.insert("15128830.530000");
        Leg_47.add_attribute("Fctr", "10078730.320000"); // 3
        Leg_47_set.insert("10078730.320000");
        Leg_47.add_attribute("CrdRtg", "LegCreditRating_t_2119892143"); // 3
        Leg_47_set.insert("LegCreditRating_t_2119892143");
        Leg_47.add_attribute("Rgstry", "LegInstrRegistry_t_1481382869"); // 3
        Leg_47_set.insert("LegInstrRegistry_t_1481382869");
        Leg_47.add_attribute("Ctry", "547373519"); // 3
        Leg_47_set.insert("547373519");
        Leg_47.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1849768027"); // 3
        Leg_47_set.insert("LegStateOrProvinceOfIssue_t_1849768027");
        Leg_47.add_attribute("Lcl", "LegLocaleOfIssue_t_322958028"); // 3
        Leg_47_set.insert("LegLocaleOfIssue_t_322958028");
        Leg_47.add_attribute("Redeem", "LegRedemptionDate_t_763673652"); // 3
        Leg_47_set.insert("LegRedemptionDate_t_763673652");
        Leg_47.add_attribute("Strk", "11182051.990000"); // 3
        Leg_47_set.insert("11182051.990000");
        Leg_47.add_attribute("StrkCcy", "CAN"); // 3
        Leg_47_set.insert("CAN");
        Leg_47.add_attribute("OptA", "396526772"); // 3
        Leg_47_set.insert("396526772");
        Leg_47.add_attribute("Cmult", "1703280.560000"); // 3
        Leg_47_set.insert("1703280.560000");
        Leg_47.add_attribute("MultTyp", "1"); // 3
        Leg_47_set.insert("1");
        Leg_47.add_attribute("FlowSchedTyp", "0"); // 3
        Leg_47_set.insert("0");
        Leg_47.add_attribute("UOM", "Bu"); // 3
        Leg_47_set.insert("Bu");
        Leg_47.add_attribute("UOMQty", "9936897.180000"); // 3
        Leg_47_set.insert("9936897.180000");
        Leg_47.add_attribute("PxUOM", "oz_tr"); // 3
        Leg_47_set.insert("oz_tr");
        Leg_47.add_attribute("PxUOMQty", "12348166.290000"); // 3
        Leg_47_set.insert("12348166.290000");
        Leg_47.add_attribute("TmUnit", "H"); // 3
        Leg_47_set.insert("H");
        Leg_47.add_attribute("ExerStyle", "1"); // 3
        Leg_47_set.insert("1");
        Leg_47.add_attribute("CpnRt", "16159894.330000"); // 3
        Leg_47_set.insert("16159894.330000");
        Leg_47.add_attribute("Exch", "LegSecurityExchange_t_261453154"); // 3
        Leg_47_set.insert("LegSecurityExchange_t_261453154");
        Leg_47.add_attribute("Issr", "LegIssuer_t_47689642"); // 3
        Leg_47_set.insert("LegIssuer_t_47689642");
        Leg_47.add_attribute("EncLegIssrLen", "724813805"); // 3
        Leg_47_set.insert("724813805");
        Leg_47.add_attribute("EncLegIssr", "EncodedLegIssuer_t_509912634"); // 3
        Leg_47_set.insert("EncodedLegIssuer_t_509912634");
        Leg_47.add_attribute("Desc", "LegSecurityDesc_t_1461645737"); // 3
        Leg_47_set.insert("LegSecurityDesc_t_1461645737");
        Leg_47.add_attribute("EncLegSecDescLen", "1973036644"); // 3
        Leg_47_set.insert("1973036644");
        Leg_47.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_11957233"); // 3
        Leg_47_set.insert("EncodedLegSecurityDesc_t_11957233");
        Leg_47.add_attribute("RatioQty", "16423731.970000"); // 3
        Leg_47_set.insert("16423731.970000");
        Leg_47.add_attribute("Side", "G"); // 3
        Leg_47_set.insert("G");
        Leg_47.add_attribute("Ccy", "CHF"); // 3
        Leg_47_set.insert("CHF");
        Leg_47.add_attribute("Pool", "LegPool_t_2062129311"); // 3
        Leg_47_set.insert("LegPool_t_2062129311");
        Leg_47.add_attribute("Dated", "LegDatedDate_t_858739507"); // 3
        Leg_47_set.insert("LegDatedDate_t_858739507");
        Leg_47.add_attribute("CSetMo", "1050136100"); // 3
        Leg_47_set.insert("1050136100");
        Leg_47.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1764413690"); // 3
        Leg_47_set.insert("LegInterestAccrualDate_t_1764413690");
        Leg_47.add_attribute("PutCall", "1181697536"); // 3
        Leg_47_set.insert("1181697536");
        Leg_47.add_attribute("LegOptionRatio", "18138097.520000"); // 3
        Leg_47_set.insert("18138097.520000");
        Leg_47.add_attribute("Px", "7351352.410000"); // 3
        Leg_47_set.insert("7351352.410000");
        all_values.push_back(Leg_47_set);
        all_compo_names.insert("Leg_47_set");

        {
          xml_element LegAID_47{"LegAID"};
          multiset<string> LegAID_47_set;
          LegAID_47.add_attribute("SecAltID", "LegSecurityAltID_t_1133321577"); // 4
          LegAID_47_set.insert("LegSecurityAltID_t_1133321577");
          LegAID_47.add_attribute("SecAltIDSrc", "9"); // 4
          LegAID_47_set.insert("9");
          all_values.push_back(LegAID_47_set);
          all_compo_names.insert("LegAID_47_set");

          Leg_47.add_element(LegAID_47);
        }
        QuotEntryAck_0.add_element(Leg_47);
      }
      QuotSetAck_0.add_element(QuotEntryAck_0);
    }
    elt.add_element(QuotSetAck_0);
  } // end QuotSetAck
  { // QuotSetAck
    xml_element QuotSetAck_1{"QuotSetAck"};
    multiset<string> QuotSetAck_1_set;
    QuotSetAck_1.add_attribute("SetID", "QuoteSetID_t_1131662013"); // 1
    QuotSetAck_1_set.insert("QuoteSetID_t_1131662013");
    QuotSetAck_1.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1303649633"); // 1
    QuotSetAck_1_set.insert("QuoteSetValidUntilTime_t_1303649633");
    QuotSetAck_1.add_attribute("TotNoQuotEntries", "2131788481"); // 1
    QuotSetAck_1_set.insert("2131788481");
    QuotSetAck_1.add_attribute("TotNoCxldQts", "1318850013"); // 1
    QuotSetAck_1_set.insert("1318850013");
    QuotSetAck_1.add_attribute("TotNoAccQts", "1595575083"); // 1
    QuotSetAck_1_set.insert("1595575083");
    QuotSetAck_1.add_attribute("TotNoRejQts", "977994551"); // 1
    QuotSetAck_1_set.insert("977994551");
    QuotSetAck_1.add_attribute("LastFragment", "Y"); // 1
    QuotSetAck_1_set.insert("Y");
    all_values.push_back(QuotSetAck_1_set);
    all_compo_names.insert("QuotSetAck_1_set");

    {
      xml_element Undly_48{"Undly"};
      multiset<string> Undly_48_set;
      Undly_48.add_attribute("Sym", "UnderlyingSymbol_t_682908065"); // 2
      Undly_48_set.insert("UnderlyingSymbol_t_682908065");
      Undly_48.add_attribute("Sfx", "CD"); // 2
      Undly_48_set.insert("CD");
      Undly_48.add_attribute("ID", "UnderlyingSecurityID_t_97682649"); // 2
      Undly_48_set.insert("UnderlyingSecurityID_t_97682649");
      Undly_48.add_attribute("Src", "H"); // 2
      Undly_48_set.insert("H");
      Undly_48.add_attribute("Prod", "11"); // 2
      Undly_48_set.insert("11");
      Undly_48.add_attribute("CFI", "UnderlyingCFICode_t_145372292"); // 2
      Undly_48_set.insert("UnderlyingCFICode_t_145372292");
      Undly_48.add_attribute("SecTyp", "CL"); // 2
      Undly_48_set.insert("CL");
      Undly_48.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2072340958"); // 2
      Undly_48_set.insert("UnderlyingSecuritySubType_t_2072340958");
      Undly_48.add_attribute("MMY", "1607018029"); // 2
      Undly_48_set.insert("1607018029");
      Undly_48.add_attribute("Mat", "UnderlyingMaturityDate_t_701780652"); // 2
      Undly_48_set.insert("UnderlyingMaturityDate_t_701780652");
      Undly_48.add_attribute("MatTm", "2084298192"); // 2
      Undly_48_set.insert("2084298192");
      Undly_48.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1101907578"); // 2
      Undly_48_set.insert("UnderlyingCouponPaymentDate_t_1101907578");
      Undly_48.add_attribute("RestrctTyp", "XR"); // 2
      Undly_48_set.insert("XR");
      Undly_48.add_attribute("Snrty", "SB"); // 2
      Undly_48_set.insert("SB");
      Undly_48.add_attribute("NotlPctOut", "16046701.590000"); // 2
      Undly_48_set.insert("16046701.590000");
      Undly_48.add_attribute("OrigNotlPctOut", "5586634.820000"); // 2
      Undly_48_set.insert("5586634.820000");
      Undly_48.add_attribute("AttchPnt", "1729106.900000"); // 2
      Undly_48_set.insert("1729106.900000");
      Undly_48.add_attribute("DetchPnt", "5073226.110000"); // 2
      Undly_48_set.insert("5073226.110000");
      Undly_48.add_attribute("Issued", "UnderlyingIssueDate_t_175593524"); // 2
      Undly_48_set.insert("UnderlyingIssueDate_t_175593524");
      Undly_48.add_attribute("RepoCollSecTyp", "1354608226"); // 2
      Undly_48_set.insert("1354608226");
      Undly_48.add_attribute("RepoTrm", "173648715"); // 2
      Undly_48_set.insert("173648715");
      Undly_48.add_attribute("RepoRt", "9107287.650000"); // 2
      Undly_48_set.insert("9107287.650000");
      Undly_48.add_attribute("Fctr", "3404461.550000"); // 2
      Undly_48_set.insert("3404461.550000");
      Undly_48.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1265938977"); // 2
      Undly_48_set.insert("UnderlyingCreditRating_t_1265938977");
      Undly_48.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2042390779"); // 2
      Undly_48_set.insert("UnderlyingInstrRegistry_t_2042390779");
      Undly_48.add_attribute("Ctry", "1644095788"); // 2
      Undly_48_set.insert("1644095788");
      Undly_48.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1250243810"); // 2
      Undly_48_set.insert("UnderlyingStateOrProvinceOfIssue_t_1250243810");
      Undly_48.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1213757144"); // 2
      Undly_48_set.insert("UnderlyingLocaleOfIssue_t_1213757144");
      Undly_48.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1092187223"); // 2
      Undly_48_set.insert("UnderlyingRedemptionDate_t_1092187223");
      Undly_48.add_attribute("StrkPx", "807547.140000"); // 2
      Undly_48_set.insert("807547.140000");
      Undly_48.add_attribute("StrkCcy", "JPY"); // 2
      Undly_48_set.insert("JPY");
      Undly_48.add_attribute("OptA", "1381729884"); // 2
      Undly_48_set.insert("1381729884");
      Undly_48.add_attribute("Mult", "14437692.610000"); // 2
      Undly_48_set.insert("14437692.610000");
      Undly_48.add_attribute("MultTyp", "2"); // 2
      Undly_48_set.insert("2");
      Undly_48.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_48_set.insert("0");
      Undly_48.add_attribute("UOM", "Alw"); // 2
      Undly_48_set.insert("Alw");
      Undly_48.add_attribute("UOMQty", "6552531.460000"); // 2
      Undly_48_set.insert("6552531.460000");
      Undly_48.add_attribute("PxUOM", "lbs"); // 2
      Undly_48_set.insert("lbs");
      Undly_48.add_attribute("PxUOMQty", "10486759.340000"); // 2
      Undly_48_set.insert("10486759.340000");
      Undly_48.add_attribute("TmUnit", "Min"); // 2
      Undly_48_set.insert("Min");
      Undly_48.add_attribute("ExerStyle", "2"); // 2
      Undly_48_set.insert("2");
      Undly_48.add_attribute("CpnRt", "30998.640000"); // 2
      Undly_48_set.insert("30998.640000");
      Undly_48.add_attribute("Exch", "UnderlyingSecurityExchange_t_2001051617"); // 2
      Undly_48_set.insert("UnderlyingSecurityExchange_t_2001051617");
      Undly_48.add_attribute("Issr", "UnderlyingIssuer_t_2120001245"); // 2
      Undly_48_set.insert("UnderlyingIssuer_t_2120001245");
      Undly_48.add_attribute("EncUndIssrLen", "1607770023"); // 2
      Undly_48_set.insert("1607770023");
      Undly_48.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_412231452"); // 2
      Undly_48_set.insert("EncodedUnderlyingIssuer_t_412231452");
      Undly_48.add_attribute("Desc", "UnderlyingSecurityDesc_t_145428287"); // 2
      Undly_48_set.insert("UnderlyingSecurityDesc_t_145428287");
      Undly_48.add_attribute("EncUndSecDescLen", "2115092634"); // 2
      Undly_48_set.insert("2115092634");
      Undly_48.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_587824976"); // 2
      Undly_48_set.insert("EncodedUnderlyingSecurityDesc_t_587824976");
      Undly_48.add_attribute("CPPgm", "UnderlyingCPProgram_t_1500036513"); // 2
      Undly_48_set.insert("UnderlyingCPProgram_t_1500036513");
      Undly_48.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_141257702"); // 2
      Undly_48_set.insert("UnderlyingCPRegType_t_141257702");
      Undly_48.add_attribute("AllocPct", "14985537.420000"); // 2
      Undly_48_set.insert("14985537.420000");
      Undly_48.add_attribute("Ccy", "CAN"); // 2
      Undly_48_set.insert("CAN");
      Undly_48.add_attribute("Qty", "13934608.730000"); // 2
      Undly_48_set.insert("13934608.730000");
      Undly_48.add_attribute("SettlTyp", "4"); // 2
      Undly_48_set.insert("4");
      Undly_48.add_attribute("CashAmt", "UnderlyingCashAmount_t_509956842"); // 2
      Undly_48_set.insert("UnderlyingCashAmount_t_509956842");
      Undly_48.add_attribute("CashTyp", "DIFF"); // 2
      Undly_48_set.insert("DIFF");
      Undly_48.add_attribute("Px", "2817983.830000"); // 2
      Undly_48_set.insert("2817983.830000");
      Undly_48.add_attribute("DirtPx", "5907115.560000"); // 2
      Undly_48_set.insert("5907115.560000");
      Undly_48.add_attribute("EndPx", "18058209.810000"); // 2
      Undly_48_set.insert("18058209.810000");
      Undly_48.add_attribute("StartVal", "UnderlyingStartValue_t_2056893672"); // 2
      Undly_48_set.insert("UnderlyingStartValue_t_2056893672");
      Undly_48.add_attribute("CurVal", "UnderlyingCurrentValue_t_1972441440"); // 2
      Undly_48_set.insert("UnderlyingCurrentValue_t_1972441440");
      Undly_48.add_attribute("EndVal", "UnderlyingEndValue_t_1102106595"); // 2
      Undly_48_set.insert("UnderlyingEndValue_t_1102106595");
      Undly_48.add_attribute("AdjQty", "18359191.620000"); // 2
      Undly_48_set.insert("18359191.620000");
      Undly_48.add_attribute("FxRate", "6216323.520000"); // 2
      Undly_48_set.insert("6216323.520000");
      Undly_48.add_attribute("FxRateCalc", "M"); // 2
      Undly_48_set.insert("M");
      Undly_48.add_attribute("CapValu", "UnderlyingCapValue_t_343688660"); // 2
      Undly_48_set.insert("UnderlyingCapValue_t_343688660");
      Undly_48.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1343164222"); // 2
      Undly_48_set.insert("UnderlyingSettlMethod_t_1343164222");
      Undly_48.add_attribute("PutCall", "1592440435"); // 2
      Undly_48_set.insert("1592440435");
      all_values.push_back(Undly_48_set);
      all_compo_names.insert("Undly_48_set");

      {
        xml_element UndAID_48{"UndAID"};
        multiset<string> UndAID_48_set;
        UndAID_48.add_attribute("AltID", "UnderlyingSecurityAltID_t_1700722458"); // 3
        UndAID_48_set.insert("UnderlyingSecurityAltID_t_1700722458");
        UndAID_48.add_attribute("AltIDSrc", "6"); // 3
        UndAID_48_set.insert("6");
        all_values.push_back(UndAID_48_set);
        all_compo_names.insert("UndAID_48_set");

        Undly_48.add_element(UndAID_48);
      }
      {
        xml_element Stip_75{"Stip"};
        multiset<string> Stip_75_set;
        Stip_75.add_attribute("Typ", "YIELD"); // 3
        Stip_75_set.insert("YIELD");
        Stip_75.add_attribute("Val", "UnderlyingStipValue_t_1554290428"); // 3
        Stip_75_set.insert("UnderlyingStipValue_t_1554290428");
        all_values.push_back(Stip_75_set);
        all_compo_names.insert("Stip_75_set");

        Undly_48.add_element(Stip_75);
      }
      {
        xml_element Pty_189{"Pty"};
        multiset<string> Pty_189_set;
        Pty_189.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1974028234"); // 3
        Pty_189_set.insert("UnderlyingInstrumentPartyID_t_1974028234");
        Pty_189.add_attribute("Src", "A"); // 3
        Pty_189_set.insert("A");
        Pty_189.add_attribute("R", "66"); // 3
        Pty_189_set.insert("66");
        all_values.push_back(Pty_189_set);
        all_compo_names.insert("Pty_189_set");

        {
          xml_element Sub_189{"Sub"};
          multiset<string> Sub_189_set;
          Sub_189.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2119456521"); // 4
          Sub_189_set.insert("UnderlyingInstrumentPartySubID_t_2119456521");
          Sub_189.add_attribute("Typ", "29"); // 4
          Sub_189_set.insert("29");
          all_values.push_back(Sub_189_set);
          all_compo_names.insert("Sub_189_set");

          Pty_189.add_element(Sub_189);
        }
        Undly_48.add_element(Pty_189);
      }
      QuotSetAck_1.add_element(Undly_48);
    }
    {
      xml_element QuotEntryAck_1{"QuotEntryAck"};
      multiset<string> QuotEntryAck_1_set;
      QuotEntryAck_1.add_attribute("EntryID", "QuoteEntryID_t_406863208"); // 2
      QuotEntryAck_1_set.insert("QuoteEntryID_t_406863208");
      QuotEntryAck_1.add_attribute("BidPx", "14720093.860000"); // 2
      QuotEntryAck_1_set.insert("14720093.860000");
      QuotEntryAck_1.add_attribute("OfrPx", "11646933.630000"); // 2
      QuotEntryAck_1_set.insert("11646933.630000");
      QuotEntryAck_1.add_attribute("BidSz", "19054169.500000"); // 2
      QuotEntryAck_1_set.insert("19054169.500000");
      QuotEntryAck_1.add_attribute("OfrSz", "11650084.060000"); // 2
      QuotEntryAck_1_set.insert("11650084.060000");
      QuotEntryAck_1.add_attribute("ValidUntilTm", "ValidUntilTime_t_424406395"); // 2
      QuotEntryAck_1_set.insert("ValidUntilTime_t_424406395");
      QuotEntryAck_1.add_attribute("BidSpotRt", "11513941.750000"); // 2
      QuotEntryAck_1_set.insert("11513941.750000");
      QuotEntryAck_1.add_attribute("OfrSpotRt", "3546195.660000"); // 2
      QuotEntryAck_1_set.insert("3546195.660000");
      QuotEntryAck_1.add_attribute("BidFwdPnts", "9343632.370000"); // 2
      QuotEntryAck_1_set.insert("9343632.370000");
      QuotEntryAck_1.add_attribute("OfrFwdPnts", "16111285.450000"); // 2
      QuotEntryAck_1_set.insert("16111285.450000");
      QuotEntryAck_1.add_attribute("MidPx", "6364179.490000"); // 2
      QuotEntryAck_1_set.insert("6364179.490000");
      QuotEntryAck_1.add_attribute("BidYld", "15250747.930000"); // 2
      QuotEntryAck_1_set.insert("15250747.930000");
      QuotEntryAck_1.add_attribute("MidYld", "12694658.780000"); // 2
      QuotEntryAck_1_set.insert("12694658.780000");
      QuotEntryAck_1.add_attribute("OfrYld", "5458279.730000"); // 2
      QuotEntryAck_1_set.insert("5458279.730000");
      QuotEntryAck_1.add_attribute("TxnTm", "TransactTime_t_1350032585"); // 2
      QuotEntryAck_1_set.insert("TransactTime_t_1350032585");
      QuotEntryAck_1.add_attribute("SesID", "4"); // 2
      QuotEntryAck_1_set.insert("4");
      QuotEntryAck_1.add_attribute("SesSub", "5"); // 2
      QuotEntryAck_1_set.insert("5");
      QuotEntryAck_1.add_attribute("SettlDt", "SettlDate_t_1971664937"); // 2
      QuotEntryAck_1_set.insert("SettlDate_t_1971664937");
      QuotEntryAck_1.add_attribute("OrdTyp", "F"); // 2
      QuotEntryAck_1_set.insert("F");
      QuotEntryAck_1.add_attribute("SettlDt2", "SettlDate2_t_577952148"); // 2
      QuotEntryAck_1_set.insert("SettlDate2_t_577952148");
      QuotEntryAck_1.add_attribute("Qty2", "11673455.110000"); // 2
      QuotEntryAck_1_set.insert("11673455.110000");
      QuotEntryAck_1.add_attribute("BidFwdPnts2", "2128101.130000"); // 2
      QuotEntryAck_1_set.insert("2128101.130000");
      QuotEntryAck_1.add_attribute("OfrFwdPnts2", "1311909.590000"); // 2
      QuotEntryAck_1_set.insert("1311909.590000");
      QuotEntryAck_1.add_attribute("Ccy", "GBP"); // 2
      QuotEntryAck_1_set.insert("GBP");
      QuotEntryAck_1.add_attribute("BkngTyp", "0"); // 2
      QuotEntryAck_1_set.insert("0");
      QuotEntryAck_1.add_attribute("Cpcty", "I"); // 2
      QuotEntryAck_1_set.insert("I");
      QuotEntryAck_1.add_attribute("Rstctions", "A"); // 2
      QuotEntryAck_1_set.insert("A");
      QuotEntryAck_1.add_attribute("QtEntSts", "13"); // 2
      QuotEntryAck_1_set.insert("13");
      QuotEntryAck_1.add_attribute("EntryRejRsn", "8"); // 2
      QuotEntryAck_1_set.insert("8");
      all_values.push_back(QuotEntryAck_1_set);
      all_compo_names.insert("QuotEntryAck_1_set");

      {
        xml_element Instrmt_36{"Instrmt"};
        multiset<string> Instrmt_36_set;
        Instrmt_36.add_attribute("Sym", "Symbol_t_1740129101"); // 3
        Instrmt_36_set.insert("Symbol_t_1740129101");
        Instrmt_36.add_attribute("Sfx", "WI"); // 3
        Instrmt_36_set.insert("WI");
        Instrmt_36.add_attribute("ID", "SecurityID_t_144415697"); // 3
        Instrmt_36_set.insert("SecurityID_t_144415697");
        Instrmt_36.add_attribute("Src", "F"); // 3
        Instrmt_36_set.insert("F");
        Instrmt_36.add_attribute("Prod", "10"); // 3
        Instrmt_36_set.insert("10");
        Instrmt_36.add_attribute("ProdCmplx", "ProductComplex_t_1309424103"); // 3
        Instrmt_36_set.insert("ProductComplex_t_1309424103");
        Instrmt_36.add_attribute("SecGrp", "SecurityGroup_t_1181745211"); // 3
        Instrmt_36_set.insert("SecurityGroup_t_1181745211");
        Instrmt_36.add_attribute("CFI", "CFICode_t_673226657"); // 3
        Instrmt_36_set.insert("CFICode_t_673226657");
        Instrmt_36.add_attribute("SecTyp", "FXSWAP"); // 3
        Instrmt_36_set.insert("FXSWAP");
        Instrmt_36.add_attribute("SubTyp", "SecuritySubType_t_2116108448"); // 3
        Instrmt_36_set.insert("SecuritySubType_t_2116108448");
        Instrmt_36.add_attribute("MMY", "136871554"); // 3
        Instrmt_36_set.insert("136871554");
        Instrmt_36.add_attribute("MatDt", "MaturityDate_t_152977971"); // 3
        Instrmt_36_set.insert("MaturityDate_t_152977971");
        Instrmt_36.add_attribute("MatTm", "1493699593"); // 3
        Instrmt_36_set.insert("1493699593");
        Instrmt_36.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1406337433"); // 3
        Instrmt_36_set.insert("SettleOnOpenFlag_t_1406337433");
        Instrmt_36.add_attribute("AsgnMeth", "698805944"); // 3
        Instrmt_36_set.insert("698805944");
        Instrmt_36.add_attribute("Status", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("CpnPmt", "CouponPaymentDate_t_1630426258"); // 3
        Instrmt_36_set.insert("CouponPaymentDate_t_1630426258");
        Instrmt_36.add_attribute("RestrctTyp", "FR"); // 3
        Instrmt_36_set.insert("FR");
        Instrmt_36.add_attribute("Snrty", "SR"); // 3
        Instrmt_36_set.insert("SR");
        Instrmt_36.add_attribute("NotlPctOut", "2507959.360000"); // 3
        Instrmt_36_set.insert("2507959.360000");
        Instrmt_36.add_attribute("OrigNotlPctOut", "15110215.810000"); // 3
        Instrmt_36_set.insert("15110215.810000");
        Instrmt_36.add_attribute("AttchPnt", "16877753.310000"); // 3
        Instrmt_36_set.insert("16877753.310000");
        Instrmt_36.add_attribute("DetchPnt", "4636060.490000"); // 3
        Instrmt_36_set.insert("4636060.490000");
        Instrmt_36.add_attribute("Issued", "IssueDate_t_1642212540"); // 3
        Instrmt_36_set.insert("IssueDate_t_1642212540");
        Instrmt_36.add_attribute("RepoCollSecTyp", "561664183"); // 3
        Instrmt_36_set.insert("561664183");
        Instrmt_36.add_attribute("RepoTrm", "124472814"); // 3
        Instrmt_36_set.insert("124472814");
        Instrmt_36.add_attribute("RepoRt", "11802102.790000"); // 3
        Instrmt_36_set.insert("11802102.790000");
        Instrmt_36.add_attribute("Fctr", "14095812.700000"); // 3
        Instrmt_36_set.insert("14095812.700000");
        Instrmt_36.add_attribute("CrdRtg", "CreditRating_t_841166253"); // 3
        Instrmt_36_set.insert("CreditRating_t_841166253");
        Instrmt_36.add_attribute("Rgstry", "InstrRegistry_t_537246250"); // 3
        Instrmt_36_set.insert("InstrRegistry_t_537246250");
        Instrmt_36.add_attribute("IssuCtry", "81987581"); // 3
        Instrmt_36_set.insert("81987581");
        Instrmt_36.add_attribute("StPrv", "StateOrProvinceOfIssue_t_433811706"); // 3
        Instrmt_36_set.insert("StateOrProvinceOfIssue_t_433811706");
        Instrmt_36.add_attribute("Lcl", "LocaleOfIssue_t_301145429"); // 3
        Instrmt_36_set.insert("LocaleOfIssue_t_301145429");
        Instrmt_36.add_attribute("Redeem", "RedemptionDate_t_226403279"); // 3
        Instrmt_36_set.insert("RedemptionDate_t_226403279");
        Instrmt_36.add_attribute("StrkPx", "11911505.230000"); // 3
        Instrmt_36_set.insert("11911505.230000");
        Instrmt_36.add_attribute("StrkCcy", "GBP"); // 3
        Instrmt_36_set.insert("GBP");
        Instrmt_36.add_attribute("StrkMult", "2254120.860000"); // 3
        Instrmt_36_set.insert("2254120.860000");
        Instrmt_36.add_attribute("StrkValu", "4962045.690000"); // 3
        Instrmt_36_set.insert("4962045.690000");
        Instrmt_36.add_attribute("StrkPxDtrmnMeth", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("StrkPxBndryMeth", "3"); // 3
        Instrmt_36_set.insert("3");
        Instrmt_36.add_attribute("StrkPxBndryPrcsn", "6330761.230000"); // 3
        Instrmt_36_set.insert("6330761.230000");
        Instrmt_36.add_attribute("PxDtrmnMeth", "4"); // 3
        Instrmt_36_set.insert("4");
        Instrmt_36.add_attribute("OptAt", "1687736480"); // 3
        Instrmt_36_set.insert("1687736480");
        Instrmt_36.add_attribute("Mult", "20394135.560000"); // 3
        Instrmt_36_set.insert("20394135.560000");
        Instrmt_36.add_attribute("MultTyp", "0"); // 3
        Instrmt_36_set.insert("0");
        Instrmt_36.add_attribute("FlowSchedTyp", "3"); // 3
        Instrmt_36_set.insert("3");
        Instrmt_36.add_attribute("MinPxIncr", "15223561.670000"); // 3
        Instrmt_36_set.insert("15223561.670000");
        Instrmt_36.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_689757104"); // 3
        Instrmt_36_set.insert("MinPriceIncrementAmount_t_689757104");
        Instrmt_36.add_attribute("UOM", "lbs"); // 3
        Instrmt_36_set.insert("lbs");
        Instrmt_36.add_attribute("UOMQty", "17731521.030000"); // 3
        Instrmt_36_set.insert("17731521.030000");
        Instrmt_36.add_attribute("PxUOM", "Gal"); // 3
        Instrmt_36_set.insert("Gal");
        Instrmt_36.add_attribute("PxUOMQty", "2972228.650000"); // 3
        Instrmt_36_set.insert("2972228.650000");
        Instrmt_36.add_attribute("SettlMeth", "P"); // 3
        Instrmt_36_set.insert("P");
        Instrmt_36.add_attribute("ExerStyle", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("OptPayAmt", "OptPayoutAmount_t_213747319"); // 3
        Instrmt_36_set.insert("OptPayoutAmount_t_213747319");
        Instrmt_36.add_attribute("PxQteMeth", "STD"); // 3
        Instrmt_36_set.insert("STD");
        Instrmt_36.add_attribute("ValMeth", "FUT"); // 3
        Instrmt_36_set.insert("FUT");
        Instrmt_36.add_attribute("ListMeth", "0"); // 3
        Instrmt_36_set.insert("0");
        Instrmt_36.add_attribute("CapPx", "12654804.580000"); // 3
        Instrmt_36_set.insert("12654804.580000");
        Instrmt_36.add_attribute("FlrPx", "2029722.520000"); // 3
        Instrmt_36_set.insert("2029722.520000");
        Instrmt_36.add_attribute("PutCall", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("FlexInd", "false"); // 3
        Instrmt_36_set.insert("false");
        Instrmt_36.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_36_set.insert("false");
        Instrmt_36.add_attribute("TmUnit", "S"); // 3
        Instrmt_36_set.insert("S");
        Instrmt_36.add_attribute("CpnRt", "13896037.990000"); // 3
        Instrmt_36_set.insert("13896037.990000");
        Instrmt_36.add_attribute("Exch", "SecurityExchange_t_1965202914"); // 3
        Instrmt_36_set.insert("SecurityExchange_t_1965202914");
        Instrmt_36.add_attribute("PosLmt", "757804240"); // 3
        Instrmt_36_set.insert("757804240");
        Instrmt_36.add_attribute("NTPosLmt", "1885808368"); // 3
        Instrmt_36_set.insert("1885808368");
        Instrmt_36.add_attribute("Issr", "Issuer_t_870106670"); // 3
        Instrmt_36_set.insert("Issuer_t_870106670");
        Instrmt_36.add_attribute("EncIssrLen", "951841127"); // 3
        Instrmt_36_set.insert("951841127");
        Instrmt_36.add_attribute("EncIssr", "EncodedIssuer_t_371400843"); // 3
        Instrmt_36_set.insert("EncodedIssuer_t_371400843");
        Instrmt_36.add_attribute("Desc", "SecurityDesc_t_2075472045"); // 3
        Instrmt_36_set.insert("SecurityDesc_t_2075472045");
        Instrmt_36.add_attribute("EncSecDescLen", "492093960"); // 3
        Instrmt_36_set.insert("492093960");
        Instrmt_36.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_263330752"); // 3
        Instrmt_36_set.insert("EncodedSecurityDesc_t_263330752");
        Instrmt_36.add_attribute("Pool", "Pool_t_1832159716"); // 3
        Instrmt_36_set.insert("Pool_t_1832159716");
        Instrmt_36.add_attribute("CSetMo", "728595323"); // 3
        Instrmt_36_set.insert("728595323");
        Instrmt_36.add_attribute("CPPgm", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("CPRegT", "CPRegType_t_374433172"); // 3
        Instrmt_36_set.insert("CPRegType_t_374433172");
        Instrmt_36.add_attribute("Dated", "DatedDate_t_1485526505"); // 3
        Instrmt_36_set.insert("DatedDate_t_1485526505");
        Instrmt_36.add_attribute("IntAcrl", "InterestAccrualDate_t_1411355374"); // 3
        Instrmt_36_set.insert("InterestAccrualDate_t_1411355374");
        all_values.push_back(Instrmt_36_set);
        all_compo_names.insert("Instrmt_36_set");

        {
          xml_element AID_39{"AID"};
          multiset<string> AID_39_set;
          AID_39.add_attribute("AltID", "SecurityAltID_t_427728209"); // 4
          AID_39_set.insert("SecurityAltID_t_427728209");
          AID_39.add_attribute("AltIDSrc", "8"); // 4
          AID_39_set.insert("8");
          all_values.push_back(AID_39_set);
          all_compo_names.insert("AID_39_set");

          Instrmt_36.add_element(AID_39);
        }
        {
          xml_element SecXML_39{"SecXML"};
          multiset<string> SecXML_39_set;
          SecXML_39.add_attribute("Schema", "SecurityXMLSchema_t_1500629879"); // 4
          SecXML_39_set.insert("SecurityXMLSchema_t_1500629879");
          all_values.push_back(SecXML_39_set);
          all_compo_names.insert("SecXML_39_set");

          Instrmt_36.add_element(SecXML_39);
        }
        {
          xml_element Evnt_39{"Evnt"};
          multiset<string> Evnt_39_set;
          Evnt_39.add_attribute("EventTyp", "6"); // 4
          Evnt_39_set.insert("6");
          Evnt_39.add_attribute("Dt", "EventDate_t_494152772"); // 4
          Evnt_39_set.insert("EventDate_t_494152772");
          Evnt_39.add_attribute("Tm", "EventTime_t_1714377198"); // 4
          Evnt_39_set.insert("EventTime_t_1714377198");
          Evnt_39.add_attribute("Px", "7039863.460000"); // 4
          Evnt_39_set.insert("7039863.460000");
          Evnt_39.add_attribute("Txt", "EventText_t_615137443"); // 4
          Evnt_39_set.insert("EventText_t_615137443");
          all_values.push_back(Evnt_39_set);
          all_compo_names.insert("Evnt_39_set");

          Instrmt_36.add_element(Evnt_39);
        }
        {
          xml_element Pty_190{"Pty"};
          multiset<string> Pty_190_set;
          Pty_190.add_attribute("ID", "InstrumentPartyID_t_621807123"); // 4
          Pty_190_set.insert("InstrumentPartyID_t_621807123");
          Pty_190.add_attribute("Src", "9"); // 4
          Pty_190_set.insert("9");
          Pty_190.add_attribute("R", "2"); // 4
          Pty_190_set.insert("2");
          all_values.push_back(Pty_190_set);
          all_compo_names.insert("Pty_190_set");

          {
            xml_element Sub_190{"Sub"};
            multiset<string> Sub_190_set;
            Sub_190.add_attribute("ID", "InstrumentPartySubID_t_2110532402"); // 5
            Sub_190_set.insert("InstrumentPartySubID_t_2110532402");
            Sub_190.add_attribute("Typ", "32"); // 5
            Sub_190_set.insert("32");
            all_values.push_back(Sub_190_set);
            all_compo_names.insert("Sub_190_set");

            Pty_190.add_element(Sub_190);
          }
          Instrmt_36.add_element(Pty_190);
        }
        {
          xml_element CmplxEvnt_36{"CmplxEvnt"};
          multiset<string> CmplxEvnt_36_set;
          CmplxEvnt_36.add_attribute("Typ", "7"); // 4
          CmplxEvnt_36_set.insert("7");
          CmplxEvnt_36.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_495440908"); // 4
          CmplxEvnt_36_set.insert("ComplexOptPayoutAmount_t_495440908");
          CmplxEvnt_36.add_attribute("Px", "6307291.950000"); // 4
          CmplxEvnt_36_set.insert("6307291.950000");
          CmplxEvnt_36.add_attribute("PxBndryMeth", "4"); // 4
          CmplxEvnt_36_set.insert("4");
          CmplxEvnt_36.add_attribute("PxBndryPrcsn", "12532451.480000"); // 4
          CmplxEvnt_36_set.insert("12532451.480000");
          CmplxEvnt_36.add_attribute("PxTmTyp", "3"); // 4
          CmplxEvnt_36_set.insert("3");
          CmplxEvnt_36.add_attribute("Cond", "2"); // 4
          CmplxEvnt_36_set.insert("2");
          all_values.push_back(CmplxEvnt_36_set);
          all_compo_names.insert("CmplxEvnt_36_set");

          {
            xml_element EvntDts_36{"EvntDts"};
            multiset<string> EvntDts_36_set;
            EvntDts_36.add_attribute("StartDt", "ComplexEventStartDate_t_57602628"); // 5
            EvntDts_36_set.insert("ComplexEventStartDate_t_57602628");
            EvntDts_36.add_attribute("EndDt", "ComplexEventEndDate_t_740454758"); // 5
            EvntDts_36_set.insert("ComplexEventEndDate_t_740454758");
            all_values.push_back(EvntDts_36_set);
            all_compo_names.insert("EvntDts_36_set");

            {
              xml_element EvntTms_36{"EvntTms"};
              multiset<string> EvntTms_36_set;
              EvntTms_36.add_attribute("StartTm", "1863299560"); // 6
              EvntTms_36_set.insert("1863299560");
              EvntTms_36.add_attribute("EndTm", "549696588"); // 6
              EvntTms_36_set.insert("549696588");
              all_values.push_back(EvntTms_36_set);
              all_compo_names.insert("EvntTms_36_set");

              EvntDts_36.add_element(EvntTms_36);
            }
            CmplxEvnt_36.add_element(EvntDts_36);
          }
          Instrmt_36.add_element(CmplxEvnt_36);
        }
        QuotEntryAck_1.add_element(Instrmt_36);
      }
      {
        xml_element Leg_48{"Leg"};
        multiset<string> Leg_48_set;
        Leg_48.add_attribute("Sym", "LegSymbol_t_1003785510"); // 3
        Leg_48_set.insert("LegSymbol_t_1003785510");
        Leg_48.add_attribute("Sfx", "CD"); // 3
        Leg_48_set.insert("CD");
        Leg_48.add_attribute("ID", "LegSecurityID_t_1278291911"); // 3
        Leg_48_set.insert("LegSecurityID_t_1278291911");
        Leg_48.add_attribute("Src", "6"); // 3
        Leg_48_set.insert("6");
        Leg_48.add_attribute("Prod", "10"); // 3
        Leg_48_set.insert("10");
        Leg_48.add_attribute("CFI", "LegCFICode_t_616334768"); // 3
        Leg_48_set.insert("LegCFICode_t_616334768");
        Leg_48.add_attribute("SecTyp", "TD"); // 3
        Leg_48_set.insert("TD");
        Leg_48.add_attribute("SecSubTyp", "LegSecuritySubType_t_202653362"); // 3
        Leg_48_set.insert("LegSecuritySubType_t_202653362");
        Leg_48.add_attribute("MMY", "251600491"); // 3
        Leg_48_set.insert("251600491");
        Leg_48.add_attribute("Mat", "LegMaturityDate_t_1406490387"); // 3
        Leg_48_set.insert("LegMaturityDate_t_1406490387");
        Leg_48.add_attribute("MatTm", "178405501"); // 3
        Leg_48_set.insert("178405501");
        Leg_48.add_attribute("CpnPmt", "LegCouponPaymentDate_t_745753263"); // 3
        Leg_48_set.insert("LegCouponPaymentDate_t_745753263");
        Leg_48.add_attribute("Issued", "LegIssueDate_t_973383938"); // 3
        Leg_48_set.insert("LegIssueDate_t_973383938");
        Leg_48.add_attribute("RepoCollSecTyp", "882391847"); // 3
        Leg_48_set.insert("882391847");
        Leg_48.add_attribute("RepoTrm", "1360890706"); // 3
        Leg_48_set.insert("1360890706");
        Leg_48.add_attribute("RepoRt", "15951910.610000"); // 3
        Leg_48_set.insert("15951910.610000");
        Leg_48.add_attribute("Fctr", "7043750.040000"); // 3
        Leg_48_set.insert("7043750.040000");
        Leg_48.add_attribute("CrdRtg", "LegCreditRating_t_31516754"); // 3
        Leg_48_set.insert("LegCreditRating_t_31516754");
        Leg_48.add_attribute("Rgstry", "LegInstrRegistry_t_1558239815"); // 3
        Leg_48_set.insert("LegInstrRegistry_t_1558239815");
        Leg_48.add_attribute("Ctry", "2092984048"); // 3
        Leg_48_set.insert("2092984048");
        Leg_48.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1279001981"); // 3
        Leg_48_set.insert("LegStateOrProvinceOfIssue_t_1279001981");
        Leg_48.add_attribute("Lcl", "LegLocaleOfIssue_t_2053680723"); // 3
        Leg_48_set.insert("LegLocaleOfIssue_t_2053680723");
        Leg_48.add_attribute("Redeem", "LegRedemptionDate_t_576229595"); // 3
        Leg_48_set.insert("LegRedemptionDate_t_576229595");
        Leg_48.add_attribute("Strk", "1967228.260000"); // 3
        Leg_48_set.insert("1967228.260000");
        Leg_48.add_attribute("StrkCcy", "JPY"); // 3
        Leg_48_set.insert("JPY");
        Leg_48.add_attribute("OptA", "2132033989"); // 3
        Leg_48_set.insert("2132033989");
        Leg_48.add_attribute("Cmult", "12170448.510000"); // 3
        Leg_48_set.insert("12170448.510000");
        Leg_48.add_attribute("MultTyp", "0"); // 3
        Leg_48_set.insert("0");
        Leg_48.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_48_set.insert("1");
        Leg_48.add_attribute("UOM", "oz_tr"); // 3
        Leg_48_set.insert("oz_tr");
        Leg_48.add_attribute("UOMQty", "5420401.310000"); // 3
        Leg_48_set.insert("5420401.310000");
        Leg_48.add_attribute("PxUOM", "lbs"); // 3
        Leg_48_set.insert("lbs");
        Leg_48.add_attribute("PxUOMQty", "8975497.020000"); // 3
        Leg_48_set.insert("8975497.020000");
        Leg_48.add_attribute("TmUnit", "D"); // 3
        Leg_48_set.insert("D");
        Leg_48.add_attribute("ExerStyle", "1"); // 3
        Leg_48_set.insert("1");
        Leg_48.add_attribute("CpnRt", "15138844.710000"); // 3
        Leg_48_set.insert("15138844.710000");
        Leg_48.add_attribute("Exch", "LegSecurityExchange_t_1089889420"); // 3
        Leg_48_set.insert("LegSecurityExchange_t_1089889420");
        Leg_48.add_attribute("Issr", "LegIssuer_t_1225920397"); // 3
        Leg_48_set.insert("LegIssuer_t_1225920397");
        Leg_48.add_attribute("EncLegIssrLen", "1765484962"); // 3
        Leg_48_set.insert("1765484962");
        Leg_48.add_attribute("EncLegIssr", "EncodedLegIssuer_t_348896160"); // 3
        Leg_48_set.insert("EncodedLegIssuer_t_348896160");
        Leg_48.add_attribute("Desc", "LegSecurityDesc_t_1404325898"); // 3
        Leg_48_set.insert("LegSecurityDesc_t_1404325898");
        Leg_48.add_attribute("EncLegSecDescLen", "363754578"); // 3
        Leg_48_set.insert("363754578");
        Leg_48.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1322280098"); // 3
        Leg_48_set.insert("EncodedLegSecurityDesc_t_1322280098");
        Leg_48.add_attribute("RatioQty", "1392340.970000"); // 3
        Leg_48_set.insert("1392340.970000");
        Leg_48.add_attribute("Side", "5"); // 3
        Leg_48_set.insert("5");
        Leg_48.add_attribute("Ccy", "CAN"); // 3
        Leg_48_set.insert("CAN");
        Leg_48.add_attribute("Pool", "LegPool_t_1756162038"); // 3
        Leg_48_set.insert("LegPool_t_1756162038");
        Leg_48.add_attribute("Dated", "LegDatedDate_t_180743678"); // 3
        Leg_48_set.insert("LegDatedDate_t_180743678");
        Leg_48.add_attribute("CSetMo", "789109501"); // 3
        Leg_48_set.insert("789109501");
        Leg_48.add_attribute("IntAcrl", "LegInterestAccrualDate_t_887680371"); // 3
        Leg_48_set.insert("LegInterestAccrualDate_t_887680371");
        Leg_48.add_attribute("PutCall", "86940753"); // 3
        Leg_48_set.insert("86940753");
        Leg_48.add_attribute("LegOptionRatio", "13653390.960000"); // 3
        Leg_48_set.insert("13653390.960000");
        Leg_48.add_attribute("Px", "10844031.970000"); // 3
        Leg_48_set.insert("10844031.970000");
        all_values.push_back(Leg_48_set);
        all_compo_names.insert("Leg_48_set");

        {
          xml_element LegAID_48{"LegAID"};
          multiset<string> LegAID_48_set;
          LegAID_48.add_attribute("SecAltID", "LegSecurityAltID_t_1246382976"); // 4
          LegAID_48_set.insert("LegSecurityAltID_t_1246382976");
          LegAID_48.add_attribute("SecAltIDSrc", "5"); // 4
          LegAID_48_set.insert("5");
          all_values.push_back(LegAID_48_set);
          all_compo_names.insert("LegAID_48_set");

          Leg_48.add_element(LegAID_48);
        }
        QuotEntryAck_1.add_element(Leg_48);
      }
      QuotSetAck_1.add_element(QuotEntryAck_1);
    }
    elt.add_element(QuotSetAck_1);
  } // end QuotSetAck
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
