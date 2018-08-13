#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MassQuote.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MassQuote_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MassQuot" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuote_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_830828986"); // 0
  MassQuote_message_t_0.insert("QuoteReqID_t_830828986");
  elt.add_attribute("QID", "QuoteID_t_308959885"); // 0
  MassQuote_message_t_0.insert("QuoteID_t_308959885");
  elt.add_attribute("Typ", "2"); // 0
  MassQuote_message_t_0.insert("2");
  elt.add_attribute("RspLvl", "2"); // 0
  MassQuote_message_t_0.insert("2");
  elt.add_attribute("Acct", "Account_t_1749123335"); // 0
  MassQuote_message_t_0.insert("Account_t_1749123335");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  MassQuote_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "3"); // 0
  MassQuote_message_t_0.insert("3");
  elt.add_attribute("DefBidSz", "8768894.430000"); // 0
  MassQuote_message_t_0.insert("8768894.430000");
  elt.add_attribute("DefOfrSz", "20014713.160000"); // 0
  MassQuote_message_t_0.insert("20014713.160000");
  all_values.push_back(MassQuote_message_t_0);
  all_compo_names.insert("MassQuote_message_t");

  { // Hdr
    xml_element Hdr_46{"Hdr"};
    multiset<string> Hdr_46_set;
    Hdr_46.add_attribute("SeqNum", "982921941"); // 1
    Hdr_46_set.insert("982921941");
    Hdr_46.add_attribute("SID", "SenderCompID_t_541435467"); // 1
    Hdr_46_set.insert("SenderCompID_t_541435467");
    Hdr_46.add_attribute("TID", "TargetCompID_t_556106382"); // 1
    Hdr_46_set.insert("TargetCompID_t_556106382");
    Hdr_46.add_attribute("OBID", "OnBehalfOfCompID_t_1615564597"); // 1
    Hdr_46_set.insert("OnBehalfOfCompID_t_1615564597");
    Hdr_46.add_attribute("D2ID", "DeliverToCompID_t_1570350735"); // 1
    Hdr_46_set.insert("DeliverToCompID_t_1570350735");
    Hdr_46.add_attribute("SSub", "SenderSubID_t_1548057028"); // 1
    Hdr_46_set.insert("SenderSubID_t_1548057028");
    Hdr_46.add_attribute("SLoc", "SenderLocationID_t_1587500461"); // 1
    Hdr_46_set.insert("SenderLocationID_t_1587500461");
    Hdr_46.add_attribute("TSub", "TargetSubID_t_166645781"); // 1
    Hdr_46_set.insert("TargetSubID_t_166645781");
    Hdr_46.add_attribute("TLoc", "TargetLocationID_t_1056295920"); // 1
    Hdr_46_set.insert("TargetLocationID_t_1056295920");
    Hdr_46.add_attribute("OBSub", "OnBehalfOfSubID_t_617153164"); // 1
    Hdr_46_set.insert("OnBehalfOfSubID_t_617153164");
    Hdr_46.add_attribute("OBLoc", "OnBehalfOfLocationID_t_783528357"); // 1
    Hdr_46_set.insert("OnBehalfOfLocationID_t_783528357");
    Hdr_46.add_attribute("D2Sub", "DeliverToSubID_t_1325241194"); // 1
    Hdr_46_set.insert("DeliverToSubID_t_1325241194");
    Hdr_46.add_attribute("D2Loc", "DeliverToLocationID_t_529473135"); // 1
    Hdr_46_set.insert("DeliverToLocationID_t_529473135");
    Hdr_46.add_attribute("PosDup", "N"); // 1
    Hdr_46_set.insert("N");
    Hdr_46.add_attribute("PosRsnd", "Y"); // 1
    Hdr_46_set.insert("Y");
    Hdr_46.add_attribute("Snt", "SendingTime_t_1102516573"); // 1
    Hdr_46_set.insert("SendingTime_t_1102516573");
    Hdr_46.add_attribute("OrigSnt", "OrigSendingTime_t_413676754"); // 1
    Hdr_46_set.insert("OrigSendingTime_t_413676754");
    Hdr_46.add_attribute("MsgEncd", "MessageEncoding_t_1927291728"); // 1
    Hdr_46_set.insert("MessageEncoding_t_1927291728");
    all_values.push_back(Hdr_46_set);
    all_compo_names.insert("Hdr_46_set");

    {
      xml_element Hop_46{"Hop"};
      multiset<string> Hop_46_set;
      Hop_46.add_attribute("ID", "HopCompID_t_571417638"); // 2
      Hop_46_set.insert("HopCompID_t_571417638");
      Hop_46.add_attribute("Ref", "1879071148"); // 2
      Hop_46_set.insert("1879071148");
      Hop_46.add_attribute("Snt", "HopSendingTime_t_1734865474"); // 2
      Hop_46_set.insert("HopSendingTime_t_1734865474");
      all_values.push_back(Hop_46_set);
      all_compo_names.insert("Hop_46_set");

      Hdr_46.add_element(Hop_46);
    }
    elt.add_element(Hdr_46);
  } // end Hdr
  { // Pty
    xml_element Pty_191{"Pty"};
    multiset<string> Pty_191_set;
    Pty_191.add_attribute("ID", "PartyID_t_562416486"); // 1
    Pty_191_set.insert("PartyID_t_562416486");
    Pty_191.add_attribute("Src", "6"); // 1
    Pty_191_set.insert("6");
    Pty_191.add_attribute("R", "69"); // 1
    Pty_191_set.insert("69");
    all_values.push_back(Pty_191_set);
    all_compo_names.insert("Pty_191_set");

    {
      xml_element Sub_191{"Sub"};
      multiset<string> Sub_191_set;
      Sub_191.add_attribute("ID", "PartySubID_t_1427560784"); // 2
      Sub_191_set.insert("PartySubID_t_1427560784");
      Sub_191.add_attribute("Typ", "15"); // 2
      Sub_191_set.insert("15");
      all_values.push_back(Sub_191_set);
      all_compo_names.insert("Sub_191_set");

      Pty_191.add_element(Sub_191);
    }
    elt.add_element(Pty_191);
  } // end Pty
  { // Pty
    xml_element Pty_192{"Pty"};
    multiset<string> Pty_192_set;
    Pty_192.add_attribute("ID", "PartyID_t_523847579"); // 1
    Pty_192_set.insert("PartyID_t_523847579");
    Pty_192.add_attribute("Src", "1"); // 1
    Pty_192_set.insert("1");
    Pty_192.add_attribute("R", "19"); // 1
    Pty_192_set.insert("19");
    all_values.push_back(Pty_192_set);
    all_compo_names.insert("Pty_192_set");

    {
      xml_element Sub_192{"Sub"};
      multiset<string> Sub_192_set;
      Sub_192.add_attribute("ID", "PartySubID_t_377835248"); // 2
      Sub_192_set.insert("PartySubID_t_377835248");
      Sub_192.add_attribute("Typ", "6"); // 2
      Sub_192_set.insert("6");
      all_values.push_back(Sub_192_set);
      all_compo_names.insert("Sub_192_set");

      Pty_192.add_element(Sub_192);
    }
    elt.add_element(Pty_192);
  } // end Pty
  { // Pty
    xml_element Pty_193{"Pty"};
    multiset<string> Pty_193_set;
    Pty_193.add_attribute("ID", "PartyID_t_916306309"); // 1
    Pty_193_set.insert("PartyID_t_916306309");
    Pty_193.add_attribute("Src", "3"); // 1
    Pty_193_set.insert("3");
    Pty_193.add_attribute("R", "18"); // 1
    Pty_193_set.insert("18");
    all_values.push_back(Pty_193_set);
    all_compo_names.insert("Pty_193_set");

    {
      xml_element Sub_193{"Sub"};
      multiset<string> Sub_193_set;
      Sub_193.add_attribute("ID", "PartySubID_t_339173396"); // 2
      Sub_193_set.insert("PartySubID_t_339173396");
      Sub_193.add_attribute("Typ", "24"); // 2
      Sub_193_set.insert("24");
      all_values.push_back(Sub_193_set);
      all_compo_names.insert("Sub_193_set");

      Pty_193.add_element(Sub_193);
    }
    elt.add_element(Pty_193);
  } // end Pty
  { // QuotSet
    xml_element QuotSet_0{"QuotSet"};
    multiset<string> QuotSet_0_set;
    QuotSet_0.add_attribute("SetID", "QuoteSetID_t_505819178"); // 1
    QuotSet_0_set.insert("QuoteSetID_t_505819178");
    QuotSet_0.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1390810930"); // 1
    QuotSet_0_set.insert("QuoteSetValidUntilTime_t_1390810930");
    QuotSet_0.add_attribute("TotNoQuotEntries", "795336534"); // 1
    QuotSet_0_set.insert("795336534");
    QuotSet_0.add_attribute("LastFragment", "Y"); // 1
    QuotSet_0_set.insert("Y");
    all_values.push_back(QuotSet_0_set);
    all_compo_names.insert("QuotSet_0_set");

    {
      xml_element Undly_48{"Undly"};
      multiset<string> Undly_48_set;
      Undly_48.add_attribute("Sym", "UnderlyingSymbol_t_568568476"); // 2
      Undly_48_set.insert("UnderlyingSymbol_t_568568476");
      Undly_48.add_attribute("Sfx", "CD"); // 2
      Undly_48_set.insert("CD");
      Undly_48.add_attribute("ID", "UnderlyingSecurityID_t_478839889"); // 2
      Undly_48_set.insert("UnderlyingSecurityID_t_478839889");
      Undly_48.add_attribute("Src", "A"); // 2
      Undly_48_set.insert("A");
      Undly_48.add_attribute("Prod", "3"); // 2
      Undly_48_set.insert("3");
      Undly_48.add_attribute("CFI", "UnderlyingCFICode_t_892516644"); // 2
      Undly_48_set.insert("UnderlyingCFICode_t_892516644");
      Undly_48.add_attribute("SecTyp", "BA"); // 2
      Undly_48_set.insert("BA");
      Undly_48.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_851260234"); // 2
      Undly_48_set.insert("UnderlyingSecuritySubType_t_851260234");
      Undly_48.add_attribute("MMY", "624104144"); // 2
      Undly_48_set.insert("624104144");
      Undly_48.add_attribute("Mat", "UnderlyingMaturityDate_t_177366843"); // 2
      Undly_48_set.insert("UnderlyingMaturityDate_t_177366843");
      Undly_48.add_attribute("MatTm", "1033041255"); // 2
      Undly_48_set.insert("1033041255");
      Undly_48.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1186520631"); // 2
      Undly_48_set.insert("UnderlyingCouponPaymentDate_t_1186520631");
      Undly_48.add_attribute("RestrctTyp", "XR"); // 2
      Undly_48_set.insert("XR");
      Undly_48.add_attribute("Snrty", "SR"); // 2
      Undly_48_set.insert("SR");
      Undly_48.add_attribute("NotlPctOut", "4665977.670000"); // 2
      Undly_48_set.insert("4665977.670000");
      Undly_48.add_attribute("OrigNotlPctOut", "17191736.020000"); // 2
      Undly_48_set.insert("17191736.020000");
      Undly_48.add_attribute("AttchPnt", "1697927.410000"); // 2
      Undly_48_set.insert("1697927.410000");
      Undly_48.add_attribute("DetchPnt", "7537614.340000"); // 2
      Undly_48_set.insert("7537614.340000");
      Undly_48.add_attribute("Issued", "UnderlyingIssueDate_t_2094044444"); // 2
      Undly_48_set.insert("UnderlyingIssueDate_t_2094044444");
      Undly_48.add_attribute("RepoCollSecTyp", "547627989"); // 2
      Undly_48_set.insert("547627989");
      Undly_48.add_attribute("RepoTrm", "2023847042"); // 2
      Undly_48_set.insert("2023847042");
      Undly_48.add_attribute("RepoRt", "8628671.050000"); // 2
      Undly_48_set.insert("8628671.050000");
      Undly_48.add_attribute("Fctr", "14815696.190000"); // 2
      Undly_48_set.insert("14815696.190000");
      Undly_48.add_attribute("CrdRtg", "UnderlyingCreditRating_t_614529951"); // 2
      Undly_48_set.insert("UnderlyingCreditRating_t_614529951");
      Undly_48.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1202040501"); // 2
      Undly_48_set.insert("UnderlyingInstrRegistry_t_1202040501");
      Undly_48.add_attribute("Ctry", "1816084629"); // 2
      Undly_48_set.insert("1816084629");
      Undly_48.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_792713321"); // 2
      Undly_48_set.insert("UnderlyingStateOrProvinceOfIssue_t_792713321");
      Undly_48.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1707859679"); // 2
      Undly_48_set.insert("UnderlyingLocaleOfIssue_t_1707859679");
      Undly_48.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1059411911"); // 2
      Undly_48_set.insert("UnderlyingRedemptionDate_t_1059411911");
      Undly_48.add_attribute("StrkPx", "15880498.560000"); // 2
      Undly_48_set.insert("15880498.560000");
      Undly_48.add_attribute("StrkCcy", "JPY"); // 2
      Undly_48_set.insert("JPY");
      Undly_48.add_attribute("OptA", "765375878"); // 2
      Undly_48_set.insert("765375878");
      Undly_48.add_attribute("Mult", "13285634.560000"); // 2
      Undly_48_set.insert("13285634.560000");
      Undly_48.add_attribute("MultTyp", "2"); // 2
      Undly_48_set.insert("2");
      Undly_48.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_48_set.insert("3");
      Undly_48.add_attribute("UOM", "lbs"); // 2
      Undly_48_set.insert("lbs");
      Undly_48.add_attribute("UOMQty", "8806586.950000"); // 2
      Undly_48_set.insert("8806586.950000");
      Undly_48.add_attribute("PxUOM", "MMbbl"); // 2
      Undly_48_set.insert("MMbbl");
      Undly_48.add_attribute("PxUOMQty", "6977005.960000"); // 2
      Undly_48_set.insert("6977005.960000");
      Undly_48.add_attribute("TmUnit", "D"); // 2
      Undly_48_set.insert("D");
      Undly_48.add_attribute("ExerStyle", "1"); // 2
      Undly_48_set.insert("1");
      Undly_48.add_attribute("CpnRt", "18842212.270000"); // 2
      Undly_48_set.insert("18842212.270000");
      Undly_48.add_attribute("Exch", "UnderlyingSecurityExchange_t_1131734093"); // 2
      Undly_48_set.insert("UnderlyingSecurityExchange_t_1131734093");
      Undly_48.add_attribute("Issr", "UnderlyingIssuer_t_427981476"); // 2
      Undly_48_set.insert("UnderlyingIssuer_t_427981476");
      Undly_48.add_attribute("EncUndIssrLen", "203335347"); // 2
      Undly_48_set.insert("203335347");
      Undly_48.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_703424047"); // 2
      Undly_48_set.insert("EncodedUnderlyingIssuer_t_703424047");
      Undly_48.add_attribute("Desc", "UnderlyingSecurityDesc_t_597774218"); // 2
      Undly_48_set.insert("UnderlyingSecurityDesc_t_597774218");
      Undly_48.add_attribute("EncUndSecDescLen", "957096781"); // 2
      Undly_48_set.insert("957096781");
      Undly_48.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_649984843"); // 2
      Undly_48_set.insert("EncodedUnderlyingSecurityDesc_t_649984843");
      Undly_48.add_attribute("CPPgm", "UnderlyingCPProgram_t_1145402207"); // 2
      Undly_48_set.insert("UnderlyingCPProgram_t_1145402207");
      Undly_48.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_833460175"); // 2
      Undly_48_set.insert("UnderlyingCPRegType_t_833460175");
      Undly_48.add_attribute("AllocPct", "15128519.480000"); // 2
      Undly_48_set.insert("15128519.480000");
      Undly_48.add_attribute("Ccy", "JPY"); // 2
      Undly_48_set.insert("JPY");
      Undly_48.add_attribute("Qty", "5674088.020000"); // 2
      Undly_48_set.insert("5674088.020000");
      Undly_48.add_attribute("SettlTyp", "4"); // 2
      Undly_48_set.insert("4");
      Undly_48.add_attribute("CashAmt", "UnderlyingCashAmount_t_93219799"); // 2
      Undly_48_set.insert("UnderlyingCashAmount_t_93219799");
      Undly_48.add_attribute("CashTyp", "DIFF"); // 2
      Undly_48_set.insert("DIFF");
      Undly_48.add_attribute("Px", "12075010.720000"); // 2
      Undly_48_set.insert("12075010.720000");
      Undly_48.add_attribute("DirtPx", "16812696.550000"); // 2
      Undly_48_set.insert("16812696.550000");
      Undly_48.add_attribute("EndPx", "9775084.000000"); // 2
      Undly_48_set.insert("9775084.000000");
      Undly_48.add_attribute("StartVal", "UnderlyingStartValue_t_687997812"); // 2
      Undly_48_set.insert("UnderlyingStartValue_t_687997812");
      Undly_48.add_attribute("CurVal", "UnderlyingCurrentValue_t_299161885"); // 2
      Undly_48_set.insert("UnderlyingCurrentValue_t_299161885");
      Undly_48.add_attribute("EndVal", "UnderlyingEndValue_t_158588208"); // 2
      Undly_48_set.insert("UnderlyingEndValue_t_158588208");
      Undly_48.add_attribute("AdjQty", "9786714.890000"); // 2
      Undly_48_set.insert("9786714.890000");
      Undly_48.add_attribute("FxRate", "13443803.590000"); // 2
      Undly_48_set.insert("13443803.590000");
      Undly_48.add_attribute("FxRateCalc", "M"); // 2
      Undly_48_set.insert("M");
      Undly_48.add_attribute("CapValu", "UnderlyingCapValue_t_1859330184"); // 2
      Undly_48_set.insert("UnderlyingCapValue_t_1859330184");
      Undly_48.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1093375418"); // 2
      Undly_48_set.insert("UnderlyingSettlMethod_t_1093375418");
      Undly_48.add_attribute("PutCall", "929885256"); // 2
      Undly_48_set.insert("929885256");
      all_values.push_back(Undly_48_set);
      all_compo_names.insert("Undly_48_set");

      {
        xml_element UndAID_48{"UndAID"};
        multiset<string> UndAID_48_set;
        UndAID_48.add_attribute("AltID", "UnderlyingSecurityAltID_t_769872075"); // 3
        UndAID_48_set.insert("UnderlyingSecurityAltID_t_769872075");
        UndAID_48.add_attribute("AltIDSrc", "L"); // 3
        UndAID_48_set.insert("L");
        all_values.push_back(UndAID_48_set);
        all_compo_names.insert("UndAID_48_set");

        Undly_48.add_element(UndAID_48);
      }
      {
        xml_element Stip_75{"Stip"};
        multiset<string> Stip_75_set;
        Stip_75.add_attribute("Typ", "PRICE"); // 3
        Stip_75_set.insert("PRICE");
        Stip_75.add_attribute("Val", "UnderlyingStipValue_t_1901606168"); // 3
        Stip_75_set.insert("UnderlyingStipValue_t_1901606168");
        all_values.push_back(Stip_75_set);
        all_compo_names.insert("Stip_75_set");

        Undly_48.add_element(Stip_75);
      }
      {
        xml_element Pty_194{"Pty"};
        multiset<string> Pty_194_set;
        Pty_194.add_attribute("ID", "UnderlyingInstrumentPartyID_t_155909561"); // 3
        Pty_194_set.insert("UnderlyingInstrumentPartyID_t_155909561");
        Pty_194.add_attribute("Src", "4"); // 3
        Pty_194_set.insert("4");
        Pty_194.add_attribute("R", "82"); // 3
        Pty_194_set.insert("82");
        all_values.push_back(Pty_194_set);
        all_compo_names.insert("Pty_194_set");

        {
          xml_element Sub_194{"Sub"};
          multiset<string> Sub_194_set;
          Sub_194.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_753683779"); // 4
          Sub_194_set.insert("UnderlyingInstrumentPartySubID_t_753683779");
          Sub_194.add_attribute("Typ", "32"); // 4
          Sub_194_set.insert("32");
          all_values.push_back(Sub_194_set);
          all_compo_names.insert("Sub_194_set");

          Pty_194.add_element(Sub_194);
        }
        Undly_48.add_element(Pty_194);
      }
      QuotSet_0.add_element(Undly_48);
    }
    {
      xml_element QuotEntry_0{"QuotEntry"};
      multiset<string> QuotEntry_0_set;
      QuotEntry_0.add_attribute("EntryID", "QuoteEntryID_t_1107531411"); // 2
      QuotEntry_0_set.insert("QuoteEntryID_t_1107531411");
      QuotEntry_0.add_attribute("BidPx", "18990859.870000"); // 2
      QuotEntry_0_set.insert("18990859.870000");
      QuotEntry_0.add_attribute("OfrPx", "5130314.910000"); // 2
      QuotEntry_0_set.insert("5130314.910000");
      QuotEntry_0.add_attribute("BidSz", "4728997.120000"); // 2
      QuotEntry_0_set.insert("4728997.120000");
      QuotEntry_0.add_attribute("OfrSz", "2310905.180000"); // 2
      QuotEntry_0_set.insert("2310905.180000");
      QuotEntry_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_1961021617"); // 2
      QuotEntry_0_set.insert("ValidUntilTime_t_1961021617");
      QuotEntry_0.add_attribute("BidSpotRt", "10403085.140000"); // 2
      QuotEntry_0_set.insert("10403085.140000");
      QuotEntry_0.add_attribute("OfrSpotRt", "3791796.780000"); // 2
      QuotEntry_0_set.insert("3791796.780000");
      QuotEntry_0.add_attribute("BidFwdPnts", "20542414.160000"); // 2
      QuotEntry_0_set.insert("20542414.160000");
      QuotEntry_0.add_attribute("OfrFwdPnts", "11680933.470000"); // 2
      QuotEntry_0_set.insert("11680933.470000");
      QuotEntry_0.add_attribute("MidPx", "15866807.500000"); // 2
      QuotEntry_0_set.insert("15866807.500000");
      QuotEntry_0.add_attribute("BidYld", "15880274.240000"); // 2
      QuotEntry_0_set.insert("15880274.240000");
      QuotEntry_0.add_attribute("MidYld", "21456017.470000"); // 2
      QuotEntry_0_set.insert("21456017.470000");
      QuotEntry_0.add_attribute("OfrYld", "1271949.140000"); // 2
      QuotEntry_0_set.insert("1271949.140000");
      QuotEntry_0.add_attribute("TxnTm", "TransactTime_t_1887189309"); // 2
      QuotEntry_0_set.insert("TransactTime_t_1887189309");
      QuotEntry_0.add_attribute("SesID", "6"); // 2
      QuotEntry_0_set.insert("6");
      QuotEntry_0.add_attribute("SesSub", "7"); // 2
      QuotEntry_0_set.insert("7");
      QuotEntry_0.add_attribute("SettlDt", "SettlDate_t_1084086020"); // 2
      QuotEntry_0_set.insert("SettlDate_t_1084086020");
      QuotEntry_0.add_attribute("OrdTyp", "8"); // 2
      QuotEntry_0_set.insert("8");
      QuotEntry_0.add_attribute("SettlDt2", "SettlDate2_t_817712940"); // 2
      QuotEntry_0_set.insert("SettlDate2_t_817712940");
      QuotEntry_0.add_attribute("Qty2", "299777.910000"); // 2
      QuotEntry_0_set.insert("299777.910000");
      QuotEntry_0.add_attribute("BidFwdPnts2", "13187762.240000"); // 2
      QuotEntry_0_set.insert("13187762.240000");
      QuotEntry_0.add_attribute("OfrFwdPnts2", "15875850.150000"); // 2
      QuotEntry_0_set.insert("15875850.150000");
      QuotEntry_0.add_attribute("Ccy", "GBP"); // 2
      QuotEntry_0_set.insert("GBP");
      QuotEntry_0.add_attribute("BkngTyp", "1"); // 2
      QuotEntry_0_set.insert("1");
      QuotEntry_0.add_attribute("Cpcty", "P"); // 2
      QuotEntry_0_set.insert("P");
      QuotEntry_0.add_attribute("Rstctions", "1"); // 2
      QuotEntry_0_set.insert("1");
      all_values.push_back(QuotEntry_0_set);
      all_compo_names.insert("QuotEntry_0_set");

      {
        xml_element Instrmt_35{"Instrmt"};
        multiset<string> Instrmt_35_set;
        Instrmt_35.add_attribute("Sym", "Symbol_t_1799254104"); // 3
        Instrmt_35_set.insert("Symbol_t_1799254104");
        Instrmt_35.add_attribute("Sfx", "WI"); // 3
        Instrmt_35_set.insert("WI");
        Instrmt_35.add_attribute("ID", "SecurityID_t_387444911"); // 3
        Instrmt_35_set.insert("SecurityID_t_387444911");
        Instrmt_35.add_attribute("Src", "6"); // 3
        Instrmt_35_set.insert("6");
        Instrmt_35.add_attribute("Prod", "12"); // 3
        Instrmt_35_set.insert("12");
        Instrmt_35.add_attribute("ProdCmplx", "ProductComplex_t_900476402"); // 3
        Instrmt_35_set.insert("ProductComplex_t_900476402");
        Instrmt_35.add_attribute("SecGrp", "SecurityGroup_t_1232201579"); // 3
        Instrmt_35_set.insert("SecurityGroup_t_1232201579");
        Instrmt_35.add_attribute("CFI", "CFICode_t_650192074"); // 3
        Instrmt_35_set.insert("CFICode_t_650192074");
        Instrmt_35.add_attribute("SecTyp", "FAC"); // 3
        Instrmt_35_set.insert("FAC");
        Instrmt_35.add_attribute("SubTyp", "SecuritySubType_t_125026445"); // 3
        Instrmt_35_set.insert("SecuritySubType_t_125026445");
        Instrmt_35.add_attribute("MMY", "1029371752"); // 3
        Instrmt_35_set.insert("1029371752");
        Instrmt_35.add_attribute("MatDt", "MaturityDate_t_620772139"); // 3
        Instrmt_35_set.insert("MaturityDate_t_620772139");
        Instrmt_35.add_attribute("MatTm", "1293119793"); // 3
        Instrmt_35_set.insert("1293119793");
        Instrmt_35.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_468568855"); // 3
        Instrmt_35_set.insert("SettleOnOpenFlag_t_468568855");
        Instrmt_35.add_attribute("AsgnMeth", "61315915"); // 3
        Instrmt_35_set.insert("61315915");
        Instrmt_35.add_attribute("Status", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("CpnPmt", "CouponPaymentDate_t_595763769"); // 3
        Instrmt_35_set.insert("CouponPaymentDate_t_595763769");
        Instrmt_35.add_attribute("RestrctTyp", "MR"); // 3
        Instrmt_35_set.insert("MR");
        Instrmt_35.add_attribute("Snrty", "SB"); // 3
        Instrmt_35_set.insert("SB");
        Instrmt_35.add_attribute("NotlPctOut", "17016301.730000"); // 3
        Instrmt_35_set.insert("17016301.730000");
        Instrmt_35.add_attribute("OrigNotlPctOut", "8851075.970000"); // 3
        Instrmt_35_set.insert("8851075.970000");
        Instrmt_35.add_attribute("AttchPnt", "18368351.670000"); // 3
        Instrmt_35_set.insert("18368351.670000");
        Instrmt_35.add_attribute("DetchPnt", "3718594.660000"); // 3
        Instrmt_35_set.insert("3718594.660000");
        Instrmt_35.add_attribute("Issued", "IssueDate_t_915085388"); // 3
        Instrmt_35_set.insert("IssueDate_t_915085388");
        Instrmt_35.add_attribute("RepoCollSecTyp", "1008127743"); // 3
        Instrmt_35_set.insert("1008127743");
        Instrmt_35.add_attribute("RepoTrm", "1959444481"); // 3
        Instrmt_35_set.insert("1959444481");
        Instrmt_35.add_attribute("RepoRt", "6729912.640000"); // 3
        Instrmt_35_set.insert("6729912.640000");
        Instrmt_35.add_attribute("Fctr", "8460431.550000"); // 3
        Instrmt_35_set.insert("8460431.550000");
        Instrmt_35.add_attribute("CrdRtg", "CreditRating_t_1153668369"); // 3
        Instrmt_35_set.insert("CreditRating_t_1153668369");
        Instrmt_35.add_attribute("Rgstry", "InstrRegistry_t_586806702"); // 3
        Instrmt_35_set.insert("InstrRegistry_t_586806702");
        Instrmt_35.add_attribute("IssuCtry", "1553916750"); // 3
        Instrmt_35_set.insert("1553916750");
        Instrmt_35.add_attribute("StPrv", "StateOrProvinceOfIssue_t_805438825"); // 3
        Instrmt_35_set.insert("StateOrProvinceOfIssue_t_805438825");
        Instrmt_35.add_attribute("Lcl", "LocaleOfIssue_t_1254305919"); // 3
        Instrmt_35_set.insert("LocaleOfIssue_t_1254305919");
        Instrmt_35.add_attribute("Redeem", "RedemptionDate_t_1941361661"); // 3
        Instrmt_35_set.insert("RedemptionDate_t_1941361661");
        Instrmt_35.add_attribute("StrkPx", "15647406.930000"); // 3
        Instrmt_35_set.insert("15647406.930000");
        Instrmt_35.add_attribute("StrkCcy", "CAN"); // 3
        Instrmt_35_set.insert("CAN");
        Instrmt_35.add_attribute("StrkMult", "6494586.240000"); // 3
        Instrmt_35_set.insert("6494586.240000");
        Instrmt_35.add_attribute("StrkValu", "1761159.010000"); // 3
        Instrmt_35_set.insert("1761159.010000");
        Instrmt_35.add_attribute("StrkPxDtrmnMeth", "3"); // 3
        Instrmt_35_set.insert("3");
        Instrmt_35.add_attribute("StrkPxBndryMeth", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("StrkPxBndryPrcsn", "12054876.530000"); // 3
        Instrmt_35_set.insert("12054876.530000");
        Instrmt_35.add_attribute("PxDtrmnMeth", "3"); // 3
        Instrmt_35_set.insert("3");
        Instrmt_35.add_attribute("OptAt", "2067604863"); // 3
        Instrmt_35_set.insert("2067604863");
        Instrmt_35.add_attribute("Mult", "16740565.080000"); // 3
        Instrmt_35_set.insert("16740565.080000");
        Instrmt_35.add_attribute("MultTyp", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("FlowSchedTyp", "2"); // 3
        Instrmt_35_set.insert("2");
        Instrmt_35.add_attribute("MinPxIncr", "1223366.300000"); // 3
        Instrmt_35_set.insert("1223366.300000");
        Instrmt_35.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1891478418"); // 3
        Instrmt_35_set.insert("MinPriceIncrementAmount_t_1891478418");
        Instrmt_35.add_attribute("UOM", "MWh"); // 3
        Instrmt_35_set.insert("MWh");
        Instrmt_35.add_attribute("UOMQty", "18239668.030000"); // 3
        Instrmt_35_set.insert("18239668.030000");
        Instrmt_35.add_attribute("PxUOM", "Bu"); // 3
        Instrmt_35_set.insert("Bu");
        Instrmt_35.add_attribute("PxUOMQty", "2011711.790000"); // 3
        Instrmt_35_set.insert("2011711.790000");
        Instrmt_35.add_attribute("SettlMeth", "P"); // 3
        Instrmt_35_set.insert("P");
        Instrmt_35.add_attribute("ExerStyle", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("OptPayoutTyp", "3"); // 3
        Instrmt_35_set.insert("3");
        Instrmt_35.add_attribute("OptPayAmt", "OptPayoutAmount_t_2007787103"); // 3
        Instrmt_35_set.insert("OptPayoutAmount_t_2007787103");
        Instrmt_35.add_attribute("PxQteMeth", "INX"); // 3
        Instrmt_35_set.insert("INX");
        Instrmt_35.add_attribute("ValMeth", "CDS"); // 3
        Instrmt_35_set.insert("CDS");
        Instrmt_35.add_attribute("ListMeth", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("CapPx", "6565020.750000"); // 3
        Instrmt_35_set.insert("6565020.750000");
        Instrmt_35.add_attribute("FlrPx", "14617751.800000"); // 3
        Instrmt_35_set.insert("14617751.800000");
        Instrmt_35.add_attribute("PutCall", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("FlexInd", "true"); // 3
        Instrmt_35_set.insert("true");
        Instrmt_35.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_35_set.insert("true");
        Instrmt_35.add_attribute("TmUnit", "Wk"); // 3
        Instrmt_35_set.insert("Wk");
        Instrmt_35.add_attribute("CpnRt", "14367318.210000"); // 3
        Instrmt_35_set.insert("14367318.210000");
        Instrmt_35.add_attribute("Exch", "SecurityExchange_t_1950007609"); // 3
        Instrmt_35_set.insert("SecurityExchange_t_1950007609");
        Instrmt_35.add_attribute("PosLmt", "1886126319"); // 3
        Instrmt_35_set.insert("1886126319");
        Instrmt_35.add_attribute("NTPosLmt", "1612847722"); // 3
        Instrmt_35_set.insert("1612847722");
        Instrmt_35.add_attribute("Issr", "Issuer_t_1210892748"); // 3
        Instrmt_35_set.insert("Issuer_t_1210892748");
        Instrmt_35.add_attribute("EncIssrLen", "513127741"); // 3
        Instrmt_35_set.insert("513127741");
        Instrmt_35.add_attribute("EncIssr", "EncodedIssuer_t_670851727"); // 3
        Instrmt_35_set.insert("EncodedIssuer_t_670851727");
        Instrmt_35.add_attribute("Desc", "SecurityDesc_t_1092550026"); // 3
        Instrmt_35_set.insert("SecurityDesc_t_1092550026");
        Instrmt_35.add_attribute("EncSecDescLen", "433248956"); // 3
        Instrmt_35_set.insert("433248956");
        Instrmt_35.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_197424588"); // 3
        Instrmt_35_set.insert("EncodedSecurityDesc_t_197424588");
        Instrmt_35.add_attribute("Pool", "Pool_t_1035523219"); // 3
        Instrmt_35_set.insert("Pool_t_1035523219");
        Instrmt_35.add_attribute("CSetMo", "1644608064"); // 3
        Instrmt_35_set.insert("1644608064");
        Instrmt_35.add_attribute("CPPgm", "99"); // 3
        Instrmt_35_set.insert("99");
        Instrmt_35.add_attribute("CPRegT", "CPRegType_t_779517990"); // 3
        Instrmt_35_set.insert("CPRegType_t_779517990");
        Instrmt_35.add_attribute("Dated", "DatedDate_t_8944075"); // 3
        Instrmt_35_set.insert("DatedDate_t_8944075");
        Instrmt_35.add_attribute("IntAcrl", "InterestAccrualDate_t_2143728021"); // 3
        Instrmt_35_set.insert("InterestAccrualDate_t_2143728021");
        all_values.push_back(Instrmt_35_set);
        all_compo_names.insert("Instrmt_35_set");

        {
          xml_element AID_38{"AID"};
          multiset<string> AID_38_set;
          AID_38.add_attribute("AltID", "SecurityAltID_t_1408620358"); // 4
          AID_38_set.insert("SecurityAltID_t_1408620358");
          AID_38.add_attribute("AltIDSrc", "9"); // 4
          AID_38_set.insert("9");
          all_values.push_back(AID_38_set);
          all_compo_names.insert("AID_38_set");

          Instrmt_35.add_element(AID_38);
        }
        {
          xml_element SecXML_38{"SecXML"};
          multiset<string> SecXML_38_set;
          SecXML_38.add_attribute("Schema", "SecurityXMLSchema_t_44586995"); // 4
          SecXML_38_set.insert("SecurityXMLSchema_t_44586995");
          all_values.push_back(SecXML_38_set);
          all_compo_names.insert("SecXML_38_set");

          Instrmt_35.add_element(SecXML_38);
        }
        {
          xml_element Evnt_38{"Evnt"};
          multiset<string> Evnt_38_set;
          Evnt_38.add_attribute("EventTyp", "6"); // 4
          Evnt_38_set.insert("6");
          Evnt_38.add_attribute("Dt", "EventDate_t_1419414177"); // 4
          Evnt_38_set.insert("EventDate_t_1419414177");
          Evnt_38.add_attribute("Tm", "EventTime_t_2052374098"); // 4
          Evnt_38_set.insert("EventTime_t_2052374098");
          Evnt_38.add_attribute("Px", "8750198.390000"); // 4
          Evnt_38_set.insert("8750198.390000");
          Evnt_38.add_attribute("Txt", "EventText_t_1327272607"); // 4
          Evnt_38_set.insert("EventText_t_1327272607");
          all_values.push_back(Evnt_38_set);
          all_compo_names.insert("Evnt_38_set");

          Instrmt_35.add_element(Evnt_38);
        }
        {
          xml_element Pty_195{"Pty"};
          multiset<string> Pty_195_set;
          Pty_195.add_attribute("ID", "InstrumentPartyID_t_918862274"); // 4
          Pty_195_set.insert("InstrumentPartyID_t_918862274");
          Pty_195.add_attribute("Src", "F"); // 4
          Pty_195_set.insert("F");
          Pty_195.add_attribute("R", "35"); // 4
          Pty_195_set.insert("35");
          all_values.push_back(Pty_195_set);
          all_compo_names.insert("Pty_195_set");

          {
            xml_element Sub_195{"Sub"};
            multiset<string> Sub_195_set;
            Sub_195.add_attribute("ID", "InstrumentPartySubID_t_590789276"); // 5
            Sub_195_set.insert("InstrumentPartySubID_t_590789276");
            Sub_195.add_attribute("Typ", "23"); // 5
            Sub_195_set.insert("23");
            all_values.push_back(Sub_195_set);
            all_compo_names.insert("Sub_195_set");

            Pty_195.add_element(Sub_195);
          }
          Instrmt_35.add_element(Pty_195);
        }
        {
          xml_element CmplxEvnt_35{"CmplxEvnt"};
          multiset<string> CmplxEvnt_35_set;
          CmplxEvnt_35.add_attribute("Typ", "9"); // 4
          CmplxEvnt_35_set.insert("9");
          CmplxEvnt_35.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1827456971"); // 4
          CmplxEvnt_35_set.insert("ComplexOptPayoutAmount_t_1827456971");
          CmplxEvnt_35.add_attribute("Px", "5840944.330000"); // 4
          CmplxEvnt_35_set.insert("5840944.330000");
          CmplxEvnt_35.add_attribute("PxBndryMeth", "1"); // 4
          CmplxEvnt_35_set.insert("1");
          CmplxEvnt_35.add_attribute("PxBndryPrcsn", "15660996.430000"); // 4
          CmplxEvnt_35_set.insert("15660996.430000");
          CmplxEvnt_35.add_attribute("PxTmTyp", "1"); // 4
          CmplxEvnt_35_set.insert("1");
          CmplxEvnt_35.add_attribute("Cond", "2"); // 4
          CmplxEvnt_35_set.insert("2");
          all_values.push_back(CmplxEvnt_35_set);
          all_compo_names.insert("CmplxEvnt_35_set");

          {
            xml_element EvntDts_35{"EvntDts"};
            multiset<string> EvntDts_35_set;
            EvntDts_35.add_attribute("StartDt", "ComplexEventStartDate_t_2079227384"); // 5
            EvntDts_35_set.insert("ComplexEventStartDate_t_2079227384");
            EvntDts_35.add_attribute("EndDt", "ComplexEventEndDate_t_720310235"); // 5
            EvntDts_35_set.insert("ComplexEventEndDate_t_720310235");
            all_values.push_back(EvntDts_35_set);
            all_compo_names.insert("EvntDts_35_set");

            {
              xml_element EvntTms_35{"EvntTms"};
              multiset<string> EvntTms_35_set;
              EvntTms_35.add_attribute("StartTm", "1855700421"); // 6
              EvntTms_35_set.insert("1855700421");
              EvntTms_35.add_attribute("EndTm", "364992693"); // 6
              EvntTms_35_set.insert("364992693");
              all_values.push_back(EvntTms_35_set);
              all_compo_names.insert("EvntTms_35_set");

              EvntDts_35.add_element(EvntTms_35);
            }
            CmplxEvnt_35.add_element(EvntDts_35);
          }
          Instrmt_35.add_element(CmplxEvnt_35);
        }
        QuotEntry_0.add_element(Instrmt_35);
      }
      {
        xml_element Leg_48{"Leg"};
        multiset<string> Leg_48_set;
        Leg_48.add_attribute("Sym", "LegSymbol_t_917734823"); // 3
        Leg_48_set.insert("LegSymbol_t_917734823");
        Leg_48.add_attribute("Sfx", "CD"); // 3
        Leg_48_set.insert("CD");
        Leg_48.add_attribute("ID", "LegSecurityID_t_2009600757"); // 3
        Leg_48_set.insert("LegSecurityID_t_2009600757");
        Leg_48.add_attribute("Src", "2"); // 3
        Leg_48_set.insert("2");
        Leg_48.add_attribute("Prod", "9"); // 3
        Leg_48_set.insert("9");
        Leg_48.add_attribute("CFI", "LegCFICode_t_2018544832"); // 3
        Leg_48_set.insert("LegCFICode_t_2018544832");
        Leg_48.add_attribute("SecTyp", "EUSUPRA"); // 3
        Leg_48_set.insert("EUSUPRA");
        Leg_48.add_attribute("SecSubTyp", "LegSecuritySubType_t_784394692"); // 3
        Leg_48_set.insert("LegSecuritySubType_t_784394692");
        Leg_48.add_attribute("MMY", "81176439"); // 3
        Leg_48_set.insert("81176439");
        Leg_48.add_attribute("Mat", "LegMaturityDate_t_1278327409"); // 3
        Leg_48_set.insert("LegMaturityDate_t_1278327409");
        Leg_48.add_attribute("MatTm", "1589719159"); // 3
        Leg_48_set.insert("1589719159");
        Leg_48.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1500590616"); // 3
        Leg_48_set.insert("LegCouponPaymentDate_t_1500590616");
        Leg_48.add_attribute("Issued", "LegIssueDate_t_1183217859"); // 3
        Leg_48_set.insert("LegIssueDate_t_1183217859");
        Leg_48.add_attribute("RepoCollSecTyp", "317255350"); // 3
        Leg_48_set.insert("317255350");
        Leg_48.add_attribute("RepoTrm", "680379575"); // 3
        Leg_48_set.insert("680379575");
        Leg_48.add_attribute("RepoRt", "21020801.340000"); // 3
        Leg_48_set.insert("21020801.340000");
        Leg_48.add_attribute("Fctr", "18487772.650000"); // 3
        Leg_48_set.insert("18487772.650000");
        Leg_48.add_attribute("CrdRtg", "LegCreditRating_t_1321943714"); // 3
        Leg_48_set.insert("LegCreditRating_t_1321943714");
        Leg_48.add_attribute("Rgstry", "LegInstrRegistry_t_545385762"); // 3
        Leg_48_set.insert("LegInstrRegistry_t_545385762");
        Leg_48.add_attribute("Ctry", "996139877"); // 3
        Leg_48_set.insert("996139877");
        Leg_48.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1071677400"); // 3
        Leg_48_set.insert("LegStateOrProvinceOfIssue_t_1071677400");
        Leg_48.add_attribute("Lcl", "LegLocaleOfIssue_t_225359086"); // 3
        Leg_48_set.insert("LegLocaleOfIssue_t_225359086");
        Leg_48.add_attribute("Redeem", "LegRedemptionDate_t_1580234311"); // 3
        Leg_48_set.insert("LegRedemptionDate_t_1580234311");
        Leg_48.add_attribute("Strk", "6239350.470000"); // 3
        Leg_48_set.insert("6239350.470000");
        Leg_48.add_attribute("StrkCcy", "JPY"); // 3
        Leg_48_set.insert("JPY");
        Leg_48.add_attribute("OptA", "1387085442"); // 3
        Leg_48_set.insert("1387085442");
        Leg_48.add_attribute("Cmult", "17232024.650000"); // 3
        Leg_48_set.insert("17232024.650000");
        Leg_48.add_attribute("MultTyp", "1"); // 3
        Leg_48_set.insert("1");
        Leg_48.add_attribute("FlowSchedTyp", "0"); // 3
        Leg_48_set.insert("0");
        Leg_48.add_attribute("UOM", "Bcf"); // 3
        Leg_48_set.insert("Bcf");
        Leg_48.add_attribute("UOMQty", "11202542.280000"); // 3
        Leg_48_set.insert("11202542.280000");
        Leg_48.add_attribute("PxUOM", "Bbl"); // 3
        Leg_48_set.insert("Bbl");
        Leg_48.add_attribute("PxUOMQty", "19503122.670000"); // 3
        Leg_48_set.insert("19503122.670000");
        Leg_48.add_attribute("TmUnit", "Mo"); // 3
        Leg_48_set.insert("Mo");
        Leg_48.add_attribute("ExerStyle", "1"); // 3
        Leg_48_set.insert("1");
        Leg_48.add_attribute("CpnRt", "18213734.520000"); // 3
        Leg_48_set.insert("18213734.520000");
        Leg_48.add_attribute("Exch", "LegSecurityExchange_t_1444007036"); // 3
        Leg_48_set.insert("LegSecurityExchange_t_1444007036");
        Leg_48.add_attribute("Issr", "LegIssuer_t_1999211234"); // 3
        Leg_48_set.insert("LegIssuer_t_1999211234");
        Leg_48.add_attribute("EncLegIssrLen", "1902549891"); // 3
        Leg_48_set.insert("1902549891");
        Leg_48.add_attribute("EncLegIssr", "EncodedLegIssuer_t_574850797"); // 3
        Leg_48_set.insert("EncodedLegIssuer_t_574850797");
        Leg_48.add_attribute("Desc", "LegSecurityDesc_t_1441446745"); // 3
        Leg_48_set.insert("LegSecurityDesc_t_1441446745");
        Leg_48.add_attribute("EncLegSecDescLen", "1255656859"); // 3
        Leg_48_set.insert("1255656859");
        Leg_48.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1758068657"); // 3
        Leg_48_set.insert("EncodedLegSecurityDesc_t_1758068657");
        Leg_48.add_attribute("RatioQty", "17587020.960000"); // 3
        Leg_48_set.insert("17587020.960000");
        Leg_48.add_attribute("Side", "3"); // 3
        Leg_48_set.insert("3");
        Leg_48.add_attribute("Ccy", "CAN"); // 3
        Leg_48_set.insert("CAN");
        Leg_48.add_attribute("Pool", "LegPool_t_1110496500"); // 3
        Leg_48_set.insert("LegPool_t_1110496500");
        Leg_48.add_attribute("Dated", "LegDatedDate_t_110567257"); // 3
        Leg_48_set.insert("LegDatedDate_t_110567257");
        Leg_48.add_attribute("CSetMo", "308651942"); // 3
        Leg_48_set.insert("308651942");
        Leg_48.add_attribute("IntAcrl", "LegInterestAccrualDate_t_34690252"); // 3
        Leg_48_set.insert("LegInterestAccrualDate_t_34690252");
        Leg_48.add_attribute("PutCall", "335926343"); // 3
        Leg_48_set.insert("335926343");
        Leg_48.add_attribute("LegOptionRatio", "18888862.530000"); // 3
        Leg_48_set.insert("18888862.530000");
        Leg_48.add_attribute("Px", "6586252.990000"); // 3
        Leg_48_set.insert("6586252.990000");
        all_values.push_back(Leg_48_set);
        all_compo_names.insert("Leg_48_set");

        {
          xml_element LegAID_48{"LegAID"};
          multiset<string> LegAID_48_set;
          LegAID_48.add_attribute("SecAltID", "LegSecurityAltID_t_2127385072"); // 4
          LegAID_48_set.insert("LegSecurityAltID_t_2127385072");
          LegAID_48.add_attribute("SecAltIDSrc", "7"); // 4
          LegAID_48_set.insert("7");
          all_values.push_back(LegAID_48_set);
          all_compo_names.insert("LegAID_48_set");

          Leg_48.add_element(LegAID_48);
        }
        QuotEntry_0.add_element(Leg_48);
      }
      QuotSet_0.add_element(QuotEntry_0);
    }
    elt.add_element(QuotSet_0);
  } // end QuotSet
  { // QuotSet
    xml_element QuotSet_1{"QuotSet"};
    multiset<string> QuotSet_1_set;
    QuotSet_1.add_attribute("SetID", "QuoteSetID_t_2045710741"); // 1
    QuotSet_1_set.insert("QuoteSetID_t_2045710741");
    QuotSet_1.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1703103890"); // 1
    QuotSet_1_set.insert("QuoteSetValidUntilTime_t_1703103890");
    QuotSet_1.add_attribute("TotNoQuotEntries", "1573614829"); // 1
    QuotSet_1_set.insert("1573614829");
    QuotSet_1.add_attribute("LastFragment", "N"); // 1
    QuotSet_1_set.insert("N");
    all_values.push_back(QuotSet_1_set);
    all_compo_names.insert("QuotSet_1_set");

    {
      xml_element Undly_49{"Undly"};
      multiset<string> Undly_49_set;
      Undly_49.add_attribute("Sym", "UnderlyingSymbol_t_1643815400"); // 2
      Undly_49_set.insert("UnderlyingSymbol_t_1643815400");
      Undly_49.add_attribute("Sfx", "CD"); // 2
      Undly_49_set.insert("CD");
      Undly_49.add_attribute("ID", "UnderlyingSecurityID_t_685087868"); // 2
      Undly_49_set.insert("UnderlyingSecurityID_t_685087868");
      Undly_49.add_attribute("Src", "9"); // 2
      Undly_49_set.insert("9");
      Undly_49.add_attribute("Prod", "2"); // 2
      Undly_49_set.insert("2");
      Undly_49.add_attribute("CFI", "UnderlyingCFICode_t_1899904410"); // 2
      Undly_49_set.insert("UnderlyingCFICode_t_1899904410");
      Undly_49.add_attribute("SecTyp", "MLEG"); // 2
      Undly_49_set.insert("MLEG");
      Undly_49.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_53175419"); // 2
      Undly_49_set.insert("UnderlyingSecuritySubType_t_53175419");
      Undly_49.add_attribute("MMY", "1751631996"); // 2
      Undly_49_set.insert("1751631996");
      Undly_49.add_attribute("Mat", "UnderlyingMaturityDate_t_875600067"); // 2
      Undly_49_set.insert("UnderlyingMaturityDate_t_875600067");
      Undly_49.add_attribute("MatTm", "628026217"); // 2
      Undly_49_set.insert("628026217");
      Undly_49.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1045595094"); // 2
      Undly_49_set.insert("UnderlyingCouponPaymentDate_t_1045595094");
      Undly_49.add_attribute("RestrctTyp", "MM"); // 2
      Undly_49_set.insert("MM");
      Undly_49.add_attribute("Snrty", "SR"); // 2
      Undly_49_set.insert("SR");
      Undly_49.add_attribute("NotlPctOut", "6568135.420000"); // 2
      Undly_49_set.insert("6568135.420000");
      Undly_49.add_attribute("OrigNotlPctOut", "19198097.120000"); // 2
      Undly_49_set.insert("19198097.120000");
      Undly_49.add_attribute("AttchPnt", "19512763.690000"); // 2
      Undly_49_set.insert("19512763.690000");
      Undly_49.add_attribute("DetchPnt", "21168092.550000"); // 2
      Undly_49_set.insert("21168092.550000");
      Undly_49.add_attribute("Issued", "UnderlyingIssueDate_t_882822564"); // 2
      Undly_49_set.insert("UnderlyingIssueDate_t_882822564");
      Undly_49.add_attribute("RepoCollSecTyp", "2061843626"); // 2
      Undly_49_set.insert("2061843626");
      Undly_49.add_attribute("RepoTrm", "277977549"); // 2
      Undly_49_set.insert("277977549");
      Undly_49.add_attribute("RepoRt", "9175128.170000"); // 2
      Undly_49_set.insert("9175128.170000");
      Undly_49.add_attribute("Fctr", "2502863.220000"); // 2
      Undly_49_set.insert("2502863.220000");
      Undly_49.add_attribute("CrdRtg", "UnderlyingCreditRating_t_19380155"); // 2
      Undly_49_set.insert("UnderlyingCreditRating_t_19380155");
      Undly_49.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1576138116"); // 2
      Undly_49_set.insert("UnderlyingInstrRegistry_t_1576138116");
      Undly_49.add_attribute("Ctry", "230187746"); // 2
      Undly_49_set.insert("230187746");
      Undly_49.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1390475579"); // 2
      Undly_49_set.insert("UnderlyingStateOrProvinceOfIssue_t_1390475579");
      Undly_49.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1474365210"); // 2
      Undly_49_set.insert("UnderlyingLocaleOfIssue_t_1474365210");
      Undly_49.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1933291636"); // 2
      Undly_49_set.insert("UnderlyingRedemptionDate_t_1933291636");
      Undly_49.add_attribute("StrkPx", "8166067.600000"); // 2
      Undly_49_set.insert("8166067.600000");
      Undly_49.add_attribute("StrkCcy", "CAN"); // 2
      Undly_49_set.insert("CAN");
      Undly_49.add_attribute("OptA", "1362992170"); // 2
      Undly_49_set.insert("1362992170");
      Undly_49.add_attribute("Mult", "10054987.380000"); // 2
      Undly_49_set.insert("10054987.380000");
      Undly_49.add_attribute("MultTyp", "1"); // 2
      Undly_49_set.insert("1");
      Undly_49.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_49_set.insert("2");
      Undly_49.add_attribute("UOM", "MWh"); // 2
      Undly_49_set.insert("MWh");
      Undly_49.add_attribute("UOMQty", "18493175.850000"); // 2
      Undly_49_set.insert("18493175.850000");
      Undly_49.add_attribute("PxUOM", "MWh"); // 2
      Undly_49_set.insert("MWh");
      Undly_49.add_attribute("PxUOMQty", "3620678.490000"); // 2
      Undly_49_set.insert("3620678.490000");
      Undly_49.add_attribute("TmUnit", "S"); // 2
      Undly_49_set.insert("S");
      Undly_49.add_attribute("ExerStyle", "2"); // 2
      Undly_49_set.insert("2");
      Undly_49.add_attribute("CpnRt", "14076629.430000"); // 2
      Undly_49_set.insert("14076629.430000");
      Undly_49.add_attribute("Exch", "UnderlyingSecurityExchange_t_561207282"); // 2
      Undly_49_set.insert("UnderlyingSecurityExchange_t_561207282");
      Undly_49.add_attribute("Issr", "UnderlyingIssuer_t_891973416"); // 2
      Undly_49_set.insert("UnderlyingIssuer_t_891973416");
      Undly_49.add_attribute("EncUndIssrLen", "2064476485"); // 2
      Undly_49_set.insert("2064476485");
      Undly_49.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_333533346"); // 2
      Undly_49_set.insert("EncodedUnderlyingIssuer_t_333533346");
      Undly_49.add_attribute("Desc", "UnderlyingSecurityDesc_t_695766137"); // 2
      Undly_49_set.insert("UnderlyingSecurityDesc_t_695766137");
      Undly_49.add_attribute("EncUndSecDescLen", "2033802092"); // 2
      Undly_49_set.insert("2033802092");
      Undly_49.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1216355910"); // 2
      Undly_49_set.insert("EncodedUnderlyingSecurityDesc_t_1216355910");
      Undly_49.add_attribute("CPPgm", "UnderlyingCPProgram_t_610126116"); // 2
      Undly_49_set.insert("UnderlyingCPProgram_t_610126116");
      Undly_49.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_164295993"); // 2
      Undly_49_set.insert("UnderlyingCPRegType_t_164295993");
      Undly_49.add_attribute("AllocPct", "21338687.270000"); // 2
      Undly_49_set.insert("21338687.270000");
      Undly_49.add_attribute("Ccy", "GBP"); // 2
      Undly_49_set.insert("GBP");
      Undly_49.add_attribute("Qty", "15625231.960000"); // 2
      Undly_49_set.insert("15625231.960000");
      Undly_49.add_attribute("SettlTyp", "5"); // 2
      Undly_49_set.insert("5");
      Undly_49.add_attribute("CashAmt", "UnderlyingCashAmount_t_1574151727"); // 2
      Undly_49_set.insert("UnderlyingCashAmount_t_1574151727");
      Undly_49.add_attribute("CashTyp", "FIXED"); // 2
      Undly_49_set.insert("FIXED");
      Undly_49.add_attribute("Px", "8764081.730000"); // 2
      Undly_49_set.insert("8764081.730000");
      Undly_49.add_attribute("DirtPx", "2432748.400000"); // 2
      Undly_49_set.insert("2432748.400000");
      Undly_49.add_attribute("EndPx", "12098156.280000"); // 2
      Undly_49_set.insert("12098156.280000");
      Undly_49.add_attribute("StartVal", "UnderlyingStartValue_t_158547914"); // 2
      Undly_49_set.insert("UnderlyingStartValue_t_158547914");
      Undly_49.add_attribute("CurVal", "UnderlyingCurrentValue_t_1606267010"); // 2
      Undly_49_set.insert("UnderlyingCurrentValue_t_1606267010");
      Undly_49.add_attribute("EndVal", "UnderlyingEndValue_t_67830719"); // 2
      Undly_49_set.insert("UnderlyingEndValue_t_67830719");
      Undly_49.add_attribute("AdjQty", "8873316.750000"); // 2
      Undly_49_set.insert("8873316.750000");
      Undly_49.add_attribute("FxRate", "15784275.640000"); // 2
      Undly_49_set.insert("15784275.640000");
      Undly_49.add_attribute("FxRateCalc", "D"); // 2
      Undly_49_set.insert("D");
      Undly_49.add_attribute("CapValu", "UnderlyingCapValue_t_589165612"); // 2
      Undly_49_set.insert("UnderlyingCapValue_t_589165612");
      Undly_49.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1603763538"); // 2
      Undly_49_set.insert("UnderlyingSettlMethod_t_1603763538");
      Undly_49.add_attribute("PutCall", "1187818068"); // 2
      Undly_49_set.insert("1187818068");
      all_values.push_back(Undly_49_set);
      all_compo_names.insert("Undly_49_set");

      {
        xml_element UndAID_49{"UndAID"};
        multiset<string> UndAID_49_set;
        UndAID_49.add_attribute("AltID", "UnderlyingSecurityAltID_t_1166599616"); // 3
        UndAID_49_set.insert("UnderlyingSecurityAltID_t_1166599616");
        UndAID_49.add_attribute("AltIDSrc", "K"); // 3
        UndAID_49_set.insert("K");
        all_values.push_back(UndAID_49_set);
        all_compo_names.insert("UndAID_49_set");

        Undly_49.add_element(UndAID_49);
      }
      {
        xml_element Stip_76{"Stip"};
        multiset<string> Stip_76_set;
        Stip_76.add_attribute("Typ", "BANKQUAL"); // 3
        Stip_76_set.insert("BANKQUAL");
        Stip_76.add_attribute("Val", "UnderlyingStipValue_t_1727806898"); // 3
        Stip_76_set.insert("UnderlyingStipValue_t_1727806898");
        all_values.push_back(Stip_76_set);
        all_compo_names.insert("Stip_76_set");

        Undly_49.add_element(Stip_76);
      }
      {
        xml_element Pty_196{"Pty"};
        multiset<string> Pty_196_set;
        Pty_196.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1001615497"); // 3
        Pty_196_set.insert("UnderlyingInstrumentPartyID_t_1001615497");
        Pty_196.add_attribute("Src", "7"); // 3
        Pty_196_set.insert("7");
        Pty_196.add_attribute("R", "70"); // 3
        Pty_196_set.insert("70");
        all_values.push_back(Pty_196_set);
        all_compo_names.insert("Pty_196_set");

        {
          xml_element Sub_196{"Sub"};
          multiset<string> Sub_196_set;
          Sub_196.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1697381634"); // 4
          Sub_196_set.insert("UnderlyingInstrumentPartySubID_t_1697381634");
          Sub_196.add_attribute("Typ", "23"); // 4
          Sub_196_set.insert("23");
          all_values.push_back(Sub_196_set);
          all_compo_names.insert("Sub_196_set");

          Pty_196.add_element(Sub_196);
        }
        Undly_49.add_element(Pty_196);
      }
      QuotSet_1.add_element(Undly_49);
    }
    {
      xml_element QuotEntry_1{"QuotEntry"};
      multiset<string> QuotEntry_1_set;
      QuotEntry_1.add_attribute("EntryID", "QuoteEntryID_t_1130212506"); // 2
      QuotEntry_1_set.insert("QuoteEntryID_t_1130212506");
      QuotEntry_1.add_attribute("BidPx", "1600241.020000"); // 2
      QuotEntry_1_set.insert("1600241.020000");
      QuotEntry_1.add_attribute("OfrPx", "4156046.380000"); // 2
      QuotEntry_1_set.insert("4156046.380000");
      QuotEntry_1.add_attribute("BidSz", "11165975.860000"); // 2
      QuotEntry_1_set.insert("11165975.860000");
      QuotEntry_1.add_attribute("OfrSz", "10204365.400000"); // 2
      QuotEntry_1_set.insert("10204365.400000");
      QuotEntry_1.add_attribute("ValidUntilTm", "ValidUntilTime_t_599280786"); // 2
      QuotEntry_1_set.insert("ValidUntilTime_t_599280786");
      QuotEntry_1.add_attribute("BidSpotRt", "5316371.340000"); // 2
      QuotEntry_1_set.insert("5316371.340000");
      QuotEntry_1.add_attribute("OfrSpotRt", "21110367.250000"); // 2
      QuotEntry_1_set.insert("21110367.250000");
      QuotEntry_1.add_attribute("BidFwdPnts", "259488.660000"); // 2
      QuotEntry_1_set.insert("259488.660000");
      QuotEntry_1.add_attribute("OfrFwdPnts", "14210418.920000"); // 2
      QuotEntry_1_set.insert("14210418.920000");
      QuotEntry_1.add_attribute("MidPx", "8399612.500000"); // 2
      QuotEntry_1_set.insert("8399612.500000");
      QuotEntry_1.add_attribute("BidYld", "2692237.060000"); // 2
      QuotEntry_1_set.insert("2692237.060000");
      QuotEntry_1.add_attribute("MidYld", "4833738.720000"); // 2
      QuotEntry_1_set.insert("4833738.720000");
      QuotEntry_1.add_attribute("OfrYld", "9985091.640000"); // 2
      QuotEntry_1_set.insert("9985091.640000");
      QuotEntry_1.add_attribute("TxnTm", "TransactTime_t_1875490716"); // 2
      QuotEntry_1_set.insert("TransactTime_t_1875490716");
      QuotEntry_1.add_attribute("SesID", "6"); // 2
      QuotEntry_1_set.insert("6");
      QuotEntry_1.add_attribute("SesSub", "2"); // 2
      QuotEntry_1_set.insert("2");
      QuotEntry_1.add_attribute("SettlDt", "SettlDate_t_1306434633"); // 2
      QuotEntry_1_set.insert("SettlDate_t_1306434633");
      QuotEntry_1.add_attribute("OrdTyp", "4"); // 2
      QuotEntry_1_set.insert("4");
      QuotEntry_1.add_attribute("SettlDt2", "SettlDate2_t_327522803"); // 2
      QuotEntry_1_set.insert("SettlDate2_t_327522803");
      QuotEntry_1.add_attribute("Qty2", "7627145.230000"); // 2
      QuotEntry_1_set.insert("7627145.230000");
      QuotEntry_1.add_attribute("BidFwdPnts2", "4172892.310000"); // 2
      QuotEntry_1_set.insert("4172892.310000");
      QuotEntry_1.add_attribute("OfrFwdPnts2", "14941224.190000"); // 2
      QuotEntry_1_set.insert("14941224.190000");
      QuotEntry_1.add_attribute("Ccy", "CHF"); // 2
      QuotEntry_1_set.insert("CHF");
      QuotEntry_1.add_attribute("BkngTyp", "1"); // 2
      QuotEntry_1_set.insert("1");
      QuotEntry_1.add_attribute("Cpcty", "I"); // 2
      QuotEntry_1_set.insert("I");
      QuotEntry_1.add_attribute("Rstctions", "1"); // 2
      QuotEntry_1_set.insert("1");
      all_values.push_back(QuotEntry_1_set);
      all_compo_names.insert("QuotEntry_1_set");

      {
        xml_element Instrmt_36{"Instrmt"};
        multiset<string> Instrmt_36_set;
        Instrmt_36.add_attribute("Sym", "Symbol_t_988302265"); // 3
        Instrmt_36_set.insert("Symbol_t_988302265");
        Instrmt_36.add_attribute("Sfx", "WI"); // 3
        Instrmt_36_set.insert("WI");
        Instrmt_36.add_attribute("ID", "SecurityID_t_1481585440"); // 3
        Instrmt_36_set.insert("SecurityID_t_1481585440");
        Instrmt_36.add_attribute("Src", "M"); // 3
        Instrmt_36_set.insert("M");
        Instrmt_36.add_attribute("Prod", "4"); // 3
        Instrmt_36_set.insert("4");
        Instrmt_36.add_attribute("ProdCmplx", "ProductComplex_t_1897190078"); // 3
        Instrmt_36_set.insert("ProductComplex_t_1897190078");
        Instrmt_36.add_attribute("SecGrp", "SecurityGroup_t_1087628709"); // 3
        Instrmt_36_set.insert("SecurityGroup_t_1087628709");
        Instrmt_36.add_attribute("CFI", "CFICode_t_456847082"); // 3
        Instrmt_36_set.insert("CFICode_t_456847082");
        Instrmt_36.add_attribute("SecTyp", "XCN"); // 3
        Instrmt_36_set.insert("XCN");
        Instrmt_36.add_attribute("SubTyp", "SecuritySubType_t_1619265843"); // 3
        Instrmt_36_set.insert("SecuritySubType_t_1619265843");
        Instrmt_36.add_attribute("MMY", "420400159"); // 3
        Instrmt_36_set.insert("420400159");
        Instrmt_36.add_attribute("MatDt", "MaturityDate_t_374936082"); // 3
        Instrmt_36_set.insert("MaturityDate_t_374936082");
        Instrmt_36.add_attribute("MatTm", "892824087"); // 3
        Instrmt_36_set.insert("892824087");
        Instrmt_36.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1260361409"); // 3
        Instrmt_36_set.insert("SettleOnOpenFlag_t_1260361409");
        Instrmt_36.add_attribute("AsgnMeth", "644159788"); // 3
        Instrmt_36_set.insert("644159788");
        Instrmt_36.add_attribute("Status", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("CpnPmt", "CouponPaymentDate_t_111386925"); // 3
        Instrmt_36_set.insert("CouponPaymentDate_t_111386925");
        Instrmt_36.add_attribute("RestrctTyp", "MR"); // 3
        Instrmt_36_set.insert("MR");
        Instrmt_36.add_attribute("Snrty", "SD"); // 3
        Instrmt_36_set.insert("SD");
        Instrmt_36.add_attribute("NotlPctOut", "19972277.640000"); // 3
        Instrmt_36_set.insert("19972277.640000");
        Instrmt_36.add_attribute("OrigNotlPctOut", "16786014.900000"); // 3
        Instrmt_36_set.insert("16786014.900000");
        Instrmt_36.add_attribute("AttchPnt", "11568737.140000"); // 3
        Instrmt_36_set.insert("11568737.140000");
        Instrmt_36.add_attribute("DetchPnt", "1772669.190000"); // 3
        Instrmt_36_set.insert("1772669.190000");
        Instrmt_36.add_attribute("Issued", "IssueDate_t_293832365"); // 3
        Instrmt_36_set.insert("IssueDate_t_293832365");
        Instrmt_36.add_attribute("RepoCollSecTyp", "1574162946"); // 3
        Instrmt_36_set.insert("1574162946");
        Instrmt_36.add_attribute("RepoTrm", "1671389338"); // 3
        Instrmt_36_set.insert("1671389338");
        Instrmt_36.add_attribute("RepoRt", "11661889.680000"); // 3
        Instrmt_36_set.insert("11661889.680000");
        Instrmt_36.add_attribute("Fctr", "2919658.930000"); // 3
        Instrmt_36_set.insert("2919658.930000");
        Instrmt_36.add_attribute("CrdRtg", "CreditRating_t_598351359"); // 3
        Instrmt_36_set.insert("CreditRating_t_598351359");
        Instrmt_36.add_attribute("Rgstry", "InstrRegistry_t_892677421"); // 3
        Instrmt_36_set.insert("InstrRegistry_t_892677421");
        Instrmt_36.add_attribute("IssuCtry", "1522242688"); // 3
        Instrmt_36_set.insert("1522242688");
        Instrmt_36.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1586653624"); // 3
        Instrmt_36_set.insert("StateOrProvinceOfIssue_t_1586653624");
        Instrmt_36.add_attribute("Lcl", "LocaleOfIssue_t_169063860"); // 3
        Instrmt_36_set.insert("LocaleOfIssue_t_169063860");
        Instrmt_36.add_attribute("Redeem", "RedemptionDate_t_856344480"); // 3
        Instrmt_36_set.insert("RedemptionDate_t_856344480");
        Instrmt_36.add_attribute("StrkPx", "15576847.470000"); // 3
        Instrmt_36_set.insert("15576847.470000");
        Instrmt_36.add_attribute("StrkCcy", "USD"); // 3
        Instrmt_36_set.insert("USD");
        Instrmt_36.add_attribute("StrkMult", "4978298.090000"); // 3
        Instrmt_36_set.insert("4978298.090000");
        Instrmt_36.add_attribute("StrkValu", "623214.830000"); // 3
        Instrmt_36_set.insert("623214.830000");
        Instrmt_36.add_attribute("StrkPxDtrmnMeth", "4"); // 3
        Instrmt_36_set.insert("4");
        Instrmt_36.add_attribute("StrkPxBndryMeth", "3"); // 3
        Instrmt_36_set.insert("3");
        Instrmt_36.add_attribute("StrkPxBndryPrcsn", "4827216.420000"); // 3
        Instrmt_36_set.insert("4827216.420000");
        Instrmt_36.add_attribute("PxDtrmnMeth", "2"); // 3
        Instrmt_36_set.insert("2");
        Instrmt_36.add_attribute("OptAt", "862436092"); // 3
        Instrmt_36_set.insert("862436092");
        Instrmt_36.add_attribute("Mult", "17430830.510000"); // 3
        Instrmt_36_set.insert("17430830.510000");
        Instrmt_36.add_attribute("MultTyp", "0"); // 3
        Instrmt_36_set.insert("0");
        Instrmt_36.add_attribute("FlowSchedTyp", "4"); // 3
        Instrmt_36_set.insert("4");
        Instrmt_36.add_attribute("MinPxIncr", "18544699.760000"); // 3
        Instrmt_36_set.insert("18544699.760000");
        Instrmt_36.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_198817207"); // 3
        Instrmt_36_set.insert("MinPriceIncrementAmount_t_198817207");
        Instrmt_36.add_attribute("UOM", "Gal"); // 3
        Instrmt_36_set.insert("Gal");
        Instrmt_36.add_attribute("UOMQty", "17042140.920000"); // 3
        Instrmt_36_set.insert("17042140.920000");
        Instrmt_36.add_attribute("PxUOM", "Bu"); // 3
        Instrmt_36_set.insert("Bu");
        Instrmt_36.add_attribute("PxUOMQty", "10279430.220000"); // 3
        Instrmt_36_set.insert("10279430.220000");
        Instrmt_36.add_attribute("SettlMeth", "P"); // 3
        Instrmt_36_set.insert("P");
        Instrmt_36.add_attribute("ExerStyle", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("OptPayoutTyp", "2"); // 3
        Instrmt_36_set.insert("2");
        Instrmt_36.add_attribute("OptPayAmt", "OptPayoutAmount_t_1405386701"); // 3
        Instrmt_36_set.insert("OptPayoutAmount_t_1405386701");
        Instrmt_36.add_attribute("PxQteMeth", "INT"); // 3
        Instrmt_36_set.insert("INT");
        Instrmt_36.add_attribute("ValMeth", "CDS"); // 3
        Instrmt_36_set.insert("CDS");
        Instrmt_36.add_attribute("ListMeth", "0"); // 3
        Instrmt_36_set.insert("0");
        Instrmt_36.add_attribute("CapPx", "20826338.030000"); // 3
        Instrmt_36_set.insert("20826338.030000");
        Instrmt_36.add_attribute("FlrPx", "1213472.530000"); // 3
        Instrmt_36_set.insert("1213472.530000");
        Instrmt_36.add_attribute("PutCall", "0"); // 3
        Instrmt_36_set.insert("0");
        Instrmt_36.add_attribute("FlexInd", "false"); // 3
        Instrmt_36_set.insert("false");
        Instrmt_36.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_36_set.insert("true");
        Instrmt_36.add_attribute("TmUnit", "Mo"); // 3
        Instrmt_36_set.insert("Mo");
        Instrmt_36.add_attribute("CpnRt", "18571720.650000"); // 3
        Instrmt_36_set.insert("18571720.650000");
        Instrmt_36.add_attribute("Exch", "SecurityExchange_t_1583742644"); // 3
        Instrmt_36_set.insert("SecurityExchange_t_1583742644");
        Instrmt_36.add_attribute("PosLmt", "1350938945"); // 3
        Instrmt_36_set.insert("1350938945");
        Instrmt_36.add_attribute("NTPosLmt", "1919493548"); // 3
        Instrmt_36_set.insert("1919493548");
        Instrmt_36.add_attribute("Issr", "Issuer_t_391297123"); // 3
        Instrmt_36_set.insert("Issuer_t_391297123");
        Instrmt_36.add_attribute("EncIssrLen", "1320550949"); // 3
        Instrmt_36_set.insert("1320550949");
        Instrmt_36.add_attribute("EncIssr", "EncodedIssuer_t_254731543"); // 3
        Instrmt_36_set.insert("EncodedIssuer_t_254731543");
        Instrmt_36.add_attribute("Desc", "SecurityDesc_t_1721271333"); // 3
        Instrmt_36_set.insert("SecurityDesc_t_1721271333");
        Instrmt_36.add_attribute("EncSecDescLen", "35503393"); // 3
        Instrmt_36_set.insert("35503393");
        Instrmt_36.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1997814594"); // 3
        Instrmt_36_set.insert("EncodedSecurityDesc_t_1997814594");
        Instrmt_36.add_attribute("Pool", "Pool_t_1547921683"); // 3
        Instrmt_36_set.insert("Pool_t_1547921683");
        Instrmt_36.add_attribute("CSetMo", "126653797"); // 3
        Instrmt_36_set.insert("126653797");
        Instrmt_36.add_attribute("CPPgm", "2"); // 3
        Instrmt_36_set.insert("2");
        Instrmt_36.add_attribute("CPRegT", "CPRegType_t_1746738890"); // 3
        Instrmt_36_set.insert("CPRegType_t_1746738890");
        Instrmt_36.add_attribute("Dated", "DatedDate_t_2145206753"); // 3
        Instrmt_36_set.insert("DatedDate_t_2145206753");
        Instrmt_36.add_attribute("IntAcrl", "InterestAccrualDate_t_1261531367"); // 3
        Instrmt_36_set.insert("InterestAccrualDate_t_1261531367");
        all_values.push_back(Instrmt_36_set);
        all_compo_names.insert("Instrmt_36_set");

        {
          xml_element AID_39{"AID"};
          multiset<string> AID_39_set;
          AID_39.add_attribute("AltID", "SecurityAltID_t_1476673939"); // 4
          AID_39_set.insert("SecurityAltID_t_1476673939");
          AID_39.add_attribute("AltIDSrc", "E"); // 4
          AID_39_set.insert("E");
          all_values.push_back(AID_39_set);
          all_compo_names.insert("AID_39_set");

          Instrmt_36.add_element(AID_39);
        }
        {
          xml_element SecXML_39{"SecXML"};
          multiset<string> SecXML_39_set;
          SecXML_39.add_attribute("Schema", "SecurityXMLSchema_t_995528731"); // 4
          SecXML_39_set.insert("SecurityXMLSchema_t_995528731");
          all_values.push_back(SecXML_39_set);
          all_compo_names.insert("SecXML_39_set");

          Instrmt_36.add_element(SecXML_39);
        }
        {
          xml_element Evnt_39{"Evnt"};
          multiset<string> Evnt_39_set;
          Evnt_39.add_attribute("EventTyp", "13"); // 4
          Evnt_39_set.insert("13");
          Evnt_39.add_attribute("Dt", "EventDate_t_1480288447"); // 4
          Evnt_39_set.insert("EventDate_t_1480288447");
          Evnt_39.add_attribute("Tm", "EventTime_t_253431784"); // 4
          Evnt_39_set.insert("EventTime_t_253431784");
          Evnt_39.add_attribute("Px", "5429140.870000"); // 4
          Evnt_39_set.insert("5429140.870000");
          Evnt_39.add_attribute("Txt", "EventText_t_79393012"); // 4
          Evnt_39_set.insert("EventText_t_79393012");
          all_values.push_back(Evnt_39_set);
          all_compo_names.insert("Evnt_39_set");

          Instrmt_36.add_element(Evnt_39);
        }
        {
          xml_element Pty_197{"Pty"};
          multiset<string> Pty_197_set;
          Pty_197.add_attribute("ID", "InstrumentPartyID_t_109686197"); // 4
          Pty_197_set.insert("InstrumentPartyID_t_109686197");
          Pty_197.add_attribute("Src", "C"); // 4
          Pty_197_set.insert("C");
          Pty_197.add_attribute("R", "14"); // 4
          Pty_197_set.insert("14");
          all_values.push_back(Pty_197_set);
          all_compo_names.insert("Pty_197_set");

          {
            xml_element Sub_197{"Sub"};
            multiset<string> Sub_197_set;
            Sub_197.add_attribute("ID", "InstrumentPartySubID_t_1552594233"); // 5
            Sub_197_set.insert("InstrumentPartySubID_t_1552594233");
            Sub_197.add_attribute("Typ", "7"); // 5
            Sub_197_set.insert("7");
            all_values.push_back(Sub_197_set);
            all_compo_names.insert("Sub_197_set");

            Pty_197.add_element(Sub_197);
          }
          Instrmt_36.add_element(Pty_197);
        }
        {
          xml_element CmplxEvnt_36{"CmplxEvnt"};
          multiset<string> CmplxEvnt_36_set;
          CmplxEvnt_36.add_attribute("Typ", "8"); // 4
          CmplxEvnt_36_set.insert("8");
          CmplxEvnt_36.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_258219721"); // 4
          CmplxEvnt_36_set.insert("ComplexOptPayoutAmount_t_258219721");
          CmplxEvnt_36.add_attribute("Px", "2919666.750000"); // 4
          CmplxEvnt_36_set.insert("2919666.750000");
          CmplxEvnt_36.add_attribute("PxBndryMeth", "2"); // 4
          CmplxEvnt_36_set.insert("2");
          CmplxEvnt_36.add_attribute("PxBndryPrcsn", "16091586.660000"); // 4
          CmplxEvnt_36_set.insert("16091586.660000");
          CmplxEvnt_36.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_36_set.insert("2");
          CmplxEvnt_36.add_attribute("Cond", "2"); // 4
          CmplxEvnt_36_set.insert("2");
          all_values.push_back(CmplxEvnt_36_set);
          all_compo_names.insert("CmplxEvnt_36_set");

          {
            xml_element EvntDts_36{"EvntDts"};
            multiset<string> EvntDts_36_set;
            EvntDts_36.add_attribute("StartDt", "ComplexEventStartDate_t_782225968"); // 5
            EvntDts_36_set.insert("ComplexEventStartDate_t_782225968");
            EvntDts_36.add_attribute("EndDt", "ComplexEventEndDate_t_318708119"); // 5
            EvntDts_36_set.insert("ComplexEventEndDate_t_318708119");
            all_values.push_back(EvntDts_36_set);
            all_compo_names.insert("EvntDts_36_set");

            {
              xml_element EvntTms_36{"EvntTms"};
              multiset<string> EvntTms_36_set;
              EvntTms_36.add_attribute("StartTm", "579775804"); // 6
              EvntTms_36_set.insert("579775804");
              EvntTms_36.add_attribute("EndTm", "817729361"); // 6
              EvntTms_36_set.insert("817729361");
              all_values.push_back(EvntTms_36_set);
              all_compo_names.insert("EvntTms_36_set");

              EvntDts_36.add_element(EvntTms_36);
            }
            CmplxEvnt_36.add_element(EvntDts_36);
          }
          Instrmt_36.add_element(CmplxEvnt_36);
        }
        QuotEntry_1.add_element(Instrmt_36);
      }
      {
        xml_element Leg_49{"Leg"};
        multiset<string> Leg_49_set;
        Leg_49.add_attribute("Sym", "LegSymbol_t_169039065"); // 3
        Leg_49_set.insert("LegSymbol_t_169039065");
        Leg_49.add_attribute("Sfx", "WI"); // 3
        Leg_49_set.insert("WI");
        Leg_49.add_attribute("ID", "LegSecurityID_t_944383159"); // 3
        Leg_49_set.insert("LegSecurityID_t_944383159");
        Leg_49.add_attribute("Src", "K"); // 3
        Leg_49_set.insert("K");
        Leg_49.add_attribute("Prod", "5"); // 3
        Leg_49_set.insert("5");
        Leg_49.add_attribute("CFI", "LegCFICode_t_942106264"); // 3
        Leg_49_set.insert("LegCFICode_t_942106264");
        Leg_49.add_attribute("SecTyp", "UST"); // 3
        Leg_49_set.insert("UST");
        Leg_49.add_attribute("SecSubTyp", "LegSecuritySubType_t_1056143020"); // 3
        Leg_49_set.insert("LegSecuritySubType_t_1056143020");
        Leg_49.add_attribute("MMY", "1967772391"); // 3
        Leg_49_set.insert("1967772391");
        Leg_49.add_attribute("Mat", "LegMaturityDate_t_1983416439"); // 3
        Leg_49_set.insert("LegMaturityDate_t_1983416439");
        Leg_49.add_attribute("MatTm", "409100725"); // 3
        Leg_49_set.insert("409100725");
        Leg_49.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1300577190"); // 3
        Leg_49_set.insert("LegCouponPaymentDate_t_1300577190");
        Leg_49.add_attribute("Issued", "LegIssueDate_t_89364575"); // 3
        Leg_49_set.insert("LegIssueDate_t_89364575");
        Leg_49.add_attribute("RepoCollSecTyp", "952014813"); // 3
        Leg_49_set.insert("952014813");
        Leg_49.add_attribute("RepoTrm", "1379970202"); // 3
        Leg_49_set.insert("1379970202");
        Leg_49.add_attribute("RepoRt", "1990507.720000"); // 3
        Leg_49_set.insert("1990507.720000");
        Leg_49.add_attribute("Fctr", "14300790.560000"); // 3
        Leg_49_set.insert("14300790.560000");
        Leg_49.add_attribute("CrdRtg", "LegCreditRating_t_1580710467"); // 3
        Leg_49_set.insert("LegCreditRating_t_1580710467");
        Leg_49.add_attribute("Rgstry", "LegInstrRegistry_t_1751645006"); // 3
        Leg_49_set.insert("LegInstrRegistry_t_1751645006");
        Leg_49.add_attribute("Ctry", "2012357314"); // 3
        Leg_49_set.insert("2012357314");
        Leg_49.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_611658819"); // 3
        Leg_49_set.insert("LegStateOrProvinceOfIssue_t_611658819");
        Leg_49.add_attribute("Lcl", "LegLocaleOfIssue_t_2009864727"); // 3
        Leg_49_set.insert("LegLocaleOfIssue_t_2009864727");
        Leg_49.add_attribute("Redeem", "LegRedemptionDate_t_156840342"); // 3
        Leg_49_set.insert("LegRedemptionDate_t_156840342");
        Leg_49.add_attribute("Strk", "12263498.150000"); // 3
        Leg_49_set.insert("12263498.150000");
        Leg_49.add_attribute("StrkCcy", "JPY"); // 3
        Leg_49_set.insert("JPY");
        Leg_49.add_attribute("OptA", "84854286"); // 3
        Leg_49_set.insert("84854286");
        Leg_49.add_attribute("Cmult", "1062820.660000"); // 3
        Leg_49_set.insert("1062820.660000");
        Leg_49.add_attribute("MultTyp", "0"); // 3
        Leg_49_set.insert("0");
        Leg_49.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_49_set.insert("1");
        Leg_49.add_attribute("UOM", "MMBtu"); // 3
        Leg_49_set.insert("MMBtu");
        Leg_49.add_attribute("UOMQty", "7085641.020000"); // 3
        Leg_49_set.insert("7085641.020000");
        Leg_49.add_attribute("PxUOM", "Gal"); // 3
        Leg_49_set.insert("Gal");
        Leg_49.add_attribute("PxUOMQty", "18683945.860000"); // 3
        Leg_49_set.insert("18683945.860000");
        Leg_49.add_attribute("TmUnit", "Yr"); // 3
        Leg_49_set.insert("Yr");
        Leg_49.add_attribute("ExerStyle", "0"); // 3
        Leg_49_set.insert("0");
        Leg_49.add_attribute("CpnRt", "6630172.020000"); // 3
        Leg_49_set.insert("6630172.020000");
        Leg_49.add_attribute("Exch", "LegSecurityExchange_t_1422808151"); // 3
        Leg_49_set.insert("LegSecurityExchange_t_1422808151");
        Leg_49.add_attribute("Issr", "LegIssuer_t_1280456032"); // 3
        Leg_49_set.insert("LegIssuer_t_1280456032");
        Leg_49.add_attribute("EncLegIssrLen", "483305945"); // 3
        Leg_49_set.insert("483305945");
        Leg_49.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1258740942"); // 3
        Leg_49_set.insert("EncodedLegIssuer_t_1258740942");
        Leg_49.add_attribute("Desc", "LegSecurityDesc_t_1689556758"); // 3
        Leg_49_set.insert("LegSecurityDesc_t_1689556758");
        Leg_49.add_attribute("EncLegSecDescLen", "1783883135"); // 3
        Leg_49_set.insert("1783883135");
        Leg_49.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1348105517"); // 3
        Leg_49_set.insert("EncodedLegSecurityDesc_t_1348105517");
        Leg_49.add_attribute("RatioQty", "4940879.230000"); // 3
        Leg_49_set.insert("4940879.230000");
        Leg_49.add_attribute("Side", "A"); // 3
        Leg_49_set.insert("A");
        Leg_49.add_attribute("Ccy", "CHF"); // 3
        Leg_49_set.insert("CHF");
        Leg_49.add_attribute("Pool", "LegPool_t_449596509"); // 3
        Leg_49_set.insert("LegPool_t_449596509");
        Leg_49.add_attribute("Dated", "LegDatedDate_t_1151317648"); // 3
        Leg_49_set.insert("LegDatedDate_t_1151317648");
        Leg_49.add_attribute("CSetMo", "1789040645"); // 3
        Leg_49_set.insert("1789040645");
        Leg_49.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1061255328"); // 3
        Leg_49_set.insert("LegInterestAccrualDate_t_1061255328");
        Leg_49.add_attribute("PutCall", "1013698727"); // 3
        Leg_49_set.insert("1013698727");
        Leg_49.add_attribute("LegOptionRatio", "19458809.870000"); // 3
        Leg_49_set.insert("19458809.870000");
        Leg_49.add_attribute("Px", "1401214.950000"); // 3
        Leg_49_set.insert("1401214.950000");
        all_values.push_back(Leg_49_set);
        all_compo_names.insert("Leg_49_set");

        {
          xml_element LegAID_49{"LegAID"};
          multiset<string> LegAID_49_set;
          LegAID_49.add_attribute("SecAltID", "LegSecurityAltID_t_337754825"); // 4
          LegAID_49_set.insert("LegSecurityAltID_t_337754825");
          LegAID_49.add_attribute("SecAltIDSrc", "8"); // 4
          LegAID_49_set.insert("8");
          all_values.push_back(LegAID_49_set);
          all_compo_names.insert("LegAID_49_set");

          Leg_49.add_element(LegAID_49);
        }
        QuotEntry_1.add_element(Leg_49);
      }
      QuotSet_1.add_element(QuotEntry_1);
    }
    elt.add_element(QuotSet_1);
  } // end QuotSet
  { // QuotSet
    xml_element QuotSet_2{"QuotSet"};
    multiset<string> QuotSet_2_set;
    QuotSet_2.add_attribute("SetID", "QuoteSetID_t_224975781"); // 1
    QuotSet_2_set.insert("QuoteSetID_t_224975781");
    QuotSet_2.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_444036891"); // 1
    QuotSet_2_set.insert("QuoteSetValidUntilTime_t_444036891");
    QuotSet_2.add_attribute("TotNoQuotEntries", "558739294"); // 1
    QuotSet_2_set.insert("558739294");
    QuotSet_2.add_attribute("LastFragment", "N"); // 1
    QuotSet_2_set.insert("N");
    all_values.push_back(QuotSet_2_set);
    all_compo_names.insert("QuotSet_2_set");

    {
      xml_element Undly_50{"Undly"};
      multiset<string> Undly_50_set;
      Undly_50.add_attribute("Sym", "UnderlyingSymbol_t_1368048319"); // 2
      Undly_50_set.insert("UnderlyingSymbol_t_1368048319");
      Undly_50.add_attribute("Sfx", "WI"); // 2
      Undly_50_set.insert("WI");
      Undly_50.add_attribute("ID", "UnderlyingSecurityID_t_1534449803"); // 2
      Undly_50_set.insert("UnderlyingSecurityID_t_1534449803");
      Undly_50.add_attribute("Src", "2"); // 2
      Undly_50_set.insert("2");
      Undly_50.add_attribute("Prod", "2"); // 2
      Undly_50_set.insert("2");
      Undly_50.add_attribute("CFI", "UnderlyingCFICode_t_1758762815"); // 2
      Undly_50_set.insert("UnderlyingCFICode_t_1758762815");
      Undly_50.add_attribute("SecTyp", "CORP"); // 2
      Undly_50_set.insert("CORP");
      Undly_50.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_977548343"); // 2
      Undly_50_set.insert("UnderlyingSecuritySubType_t_977548343");
      Undly_50.add_attribute("MMY", "891735199"); // 2
      Undly_50_set.insert("891735199");
      Undly_50.add_attribute("Mat", "UnderlyingMaturityDate_t_87798757"); // 2
      Undly_50_set.insert("UnderlyingMaturityDate_t_87798757");
      Undly_50.add_attribute("MatTm", "88805637"); // 2
      Undly_50_set.insert("88805637");
      Undly_50.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_433808309"); // 2
      Undly_50_set.insert("UnderlyingCouponPaymentDate_t_433808309");
      Undly_50.add_attribute("RestrctTyp", "MR"); // 2
      Undly_50_set.insert("MR");
      Undly_50.add_attribute("Snrty", "SB"); // 2
      Undly_50_set.insert("SB");
      Undly_50.add_attribute("NotlPctOut", "9278962.320000"); // 2
      Undly_50_set.insert("9278962.320000");
      Undly_50.add_attribute("OrigNotlPctOut", "7405679.340000"); // 2
      Undly_50_set.insert("7405679.340000");
      Undly_50.add_attribute("AttchPnt", "8365837.960000"); // 2
      Undly_50_set.insert("8365837.960000");
      Undly_50.add_attribute("DetchPnt", "7045795.630000"); // 2
      Undly_50_set.insert("7045795.630000");
      Undly_50.add_attribute("Issued", "UnderlyingIssueDate_t_1190164443"); // 2
      Undly_50_set.insert("UnderlyingIssueDate_t_1190164443");
      Undly_50.add_attribute("RepoCollSecTyp", "1987901444"); // 2
      Undly_50_set.insert("1987901444");
      Undly_50.add_attribute("RepoTrm", "346136561"); // 2
      Undly_50_set.insert("346136561");
      Undly_50.add_attribute("RepoRt", "1039361.230000"); // 2
      Undly_50_set.insert("1039361.230000");
      Undly_50.add_attribute("Fctr", "8541165.240000"); // 2
      Undly_50_set.insert("8541165.240000");
      Undly_50.add_attribute("CrdRtg", "UnderlyingCreditRating_t_144533900"); // 2
      Undly_50_set.insert("UnderlyingCreditRating_t_144533900");
      Undly_50.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_244057618"); // 2
      Undly_50_set.insert("UnderlyingInstrRegistry_t_244057618");
      Undly_50.add_attribute("Ctry", "1191871349"); // 2
      Undly_50_set.insert("1191871349");
      Undly_50.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_163748158"); // 2
      Undly_50_set.insert("UnderlyingStateOrProvinceOfIssue_t_163748158");
      Undly_50.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_469033400"); // 2
      Undly_50_set.insert("UnderlyingLocaleOfIssue_t_469033400");
      Undly_50.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1635908241"); // 2
      Undly_50_set.insert("UnderlyingRedemptionDate_t_1635908241");
      Undly_50.add_attribute("StrkPx", "7224874.520000"); // 2
      Undly_50_set.insert("7224874.520000");
      Undly_50.add_attribute("StrkCcy", "GBP"); // 2
      Undly_50_set.insert("GBP");
      Undly_50.add_attribute("OptA", "1989790849"); // 2
      Undly_50_set.insert("1989790849");
      Undly_50.add_attribute("Mult", "7456054.270000"); // 2
      Undly_50_set.insert("7456054.270000");
      Undly_50.add_attribute("MultTyp", "2"); // 2
      Undly_50_set.insert("2");
      Undly_50.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_50_set.insert("1");
      Undly_50.add_attribute("UOM", "MMBtu"); // 2
      Undly_50_set.insert("MMBtu");
      Undly_50.add_attribute("UOMQty", "15499249.810000"); // 2
      Undly_50_set.insert("15499249.810000");
      Undly_50.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_50_set.insert("oz_tr");
      Undly_50.add_attribute("PxUOMQty", "12486197.940000"); // 2
      Undly_50_set.insert("12486197.940000");
      Undly_50.add_attribute("TmUnit", "Min"); // 2
      Undly_50_set.insert("Min");
      Undly_50.add_attribute("ExerStyle", "1"); // 2
      Undly_50_set.insert("1");
      Undly_50.add_attribute("CpnRt", "16824281.030000"); // 2
      Undly_50_set.insert("16824281.030000");
      Undly_50.add_attribute("Exch", "UnderlyingSecurityExchange_t_1361921984"); // 2
      Undly_50_set.insert("UnderlyingSecurityExchange_t_1361921984");
      Undly_50.add_attribute("Issr", "UnderlyingIssuer_t_1900312528"); // 2
      Undly_50_set.insert("UnderlyingIssuer_t_1900312528");
      Undly_50.add_attribute("EncUndIssrLen", "462840688"); // 2
      Undly_50_set.insert("462840688");
      Undly_50.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2102489918"); // 2
      Undly_50_set.insert("EncodedUnderlyingIssuer_t_2102489918");
      Undly_50.add_attribute("Desc", "UnderlyingSecurityDesc_t_589412676"); // 2
      Undly_50_set.insert("UnderlyingSecurityDesc_t_589412676");
      Undly_50.add_attribute("EncUndSecDescLen", "1167420251"); // 2
      Undly_50_set.insert("1167420251");
      Undly_50.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1145170714"); // 2
      Undly_50_set.insert("EncodedUnderlyingSecurityDesc_t_1145170714");
      Undly_50.add_attribute("CPPgm", "UnderlyingCPProgram_t_429830473"); // 2
      Undly_50_set.insert("UnderlyingCPProgram_t_429830473");
      Undly_50.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1513556812"); // 2
      Undly_50_set.insert("UnderlyingCPRegType_t_1513556812");
      Undly_50.add_attribute("AllocPct", "12491068.370000"); // 2
      Undly_50_set.insert("12491068.370000");
      Undly_50.add_attribute("Ccy", "EUR"); // 2
      Undly_50_set.insert("EUR");
      Undly_50.add_attribute("Qty", "14931644.560000"); // 2
      Undly_50_set.insert("14931644.560000");
      Undly_50.add_attribute("SettlTyp", "4"); // 2
      Undly_50_set.insert("4");
      Undly_50.add_attribute("CashAmt", "UnderlyingCashAmount_t_1821838871"); // 2
      Undly_50_set.insert("UnderlyingCashAmount_t_1821838871");
      Undly_50.add_attribute("CashTyp", "FIXED"); // 2
      Undly_50_set.insert("FIXED");
      Undly_50.add_attribute("Px", "19642429.390000"); // 2
      Undly_50_set.insert("19642429.390000");
      Undly_50.add_attribute("DirtPx", "3968426.750000"); // 2
      Undly_50_set.insert("3968426.750000");
      Undly_50.add_attribute("EndPx", "11733534.800000"); // 2
      Undly_50_set.insert("11733534.800000");
      Undly_50.add_attribute("StartVal", "UnderlyingStartValue_t_673232203"); // 2
      Undly_50_set.insert("UnderlyingStartValue_t_673232203");
      Undly_50.add_attribute("CurVal", "UnderlyingCurrentValue_t_239149877"); // 2
      Undly_50_set.insert("UnderlyingCurrentValue_t_239149877");
      Undly_50.add_attribute("EndVal", "UnderlyingEndValue_t_1918958908"); // 2
      Undly_50_set.insert("UnderlyingEndValue_t_1918958908");
      Undly_50.add_attribute("AdjQty", "4711807.250000"); // 2
      Undly_50_set.insert("4711807.250000");
      Undly_50.add_attribute("FxRate", "17836809.180000"); // 2
      Undly_50_set.insert("17836809.180000");
      Undly_50.add_attribute("FxRateCalc", "M"); // 2
      Undly_50_set.insert("M");
      Undly_50.add_attribute("CapValu", "UnderlyingCapValue_t_2021105706"); // 2
      Undly_50_set.insert("UnderlyingCapValue_t_2021105706");
      Undly_50.add_attribute("SetMeth", "UnderlyingSettlMethod_t_10793007"); // 2
      Undly_50_set.insert("UnderlyingSettlMethod_t_10793007");
      Undly_50.add_attribute("PutCall", "1376979648"); // 2
      Undly_50_set.insert("1376979648");
      all_values.push_back(Undly_50_set);
      all_compo_names.insert("Undly_50_set");

      {
        xml_element UndAID_50{"UndAID"};
        multiset<string> UndAID_50_set;
        UndAID_50.add_attribute("AltID", "UnderlyingSecurityAltID_t_1511345797"); // 3
        UndAID_50_set.insert("UnderlyingSecurityAltID_t_1511345797");
        UndAID_50.add_attribute("AltIDSrc", "1"); // 3
        UndAID_50_set.insert("1");
        all_values.push_back(UndAID_50_set);
        all_compo_names.insert("UndAID_50_set");

        Undly_50.add_element(UndAID_50);
      }
      {
        xml_element Stip_77{"Stip"};
        multiset<string> Stip_77_set;
        Stip_77.add_attribute("Typ", "MHP"); // 3
        Stip_77_set.insert("MHP");
        Stip_77.add_attribute("Val", "UnderlyingStipValue_t_725784133"); // 3
        Stip_77_set.insert("UnderlyingStipValue_t_725784133");
        all_values.push_back(Stip_77_set);
        all_compo_names.insert("Stip_77_set");

        Undly_50.add_element(Stip_77);
      }
      {
        xml_element Pty_198{"Pty"};
        multiset<string> Pty_198_set;
        Pty_198.add_attribute("ID", "UnderlyingInstrumentPartyID_t_227023260"); // 3
        Pty_198_set.insert("UnderlyingInstrumentPartyID_t_227023260");
        Pty_198.add_attribute("Src", "F"); // 3
        Pty_198_set.insert("F");
        Pty_198.add_attribute("R", "59"); // 3
        Pty_198_set.insert("59");
        all_values.push_back(Pty_198_set);
        all_compo_names.insert("Pty_198_set");

        {
          xml_element Sub_198{"Sub"};
          multiset<string> Sub_198_set;
          Sub_198.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_816435937"); // 4
          Sub_198_set.insert("UnderlyingInstrumentPartySubID_t_816435937");
          Sub_198.add_attribute("Typ", "2"); // 4
          Sub_198_set.insert("2");
          all_values.push_back(Sub_198_set);
          all_compo_names.insert("Sub_198_set");

          Pty_198.add_element(Sub_198);
        }
        Undly_50.add_element(Pty_198);
      }
      QuotSet_2.add_element(Undly_50);
    }
    {
      xml_element QuotEntry_2{"QuotEntry"};
      multiset<string> QuotEntry_2_set;
      QuotEntry_2.add_attribute("EntryID", "QuoteEntryID_t_1825961118"); // 2
      QuotEntry_2_set.insert("QuoteEntryID_t_1825961118");
      QuotEntry_2.add_attribute("BidPx", "12462664.100000"); // 2
      QuotEntry_2_set.insert("12462664.100000");
      QuotEntry_2.add_attribute("OfrPx", "19082582.080000"); // 2
      QuotEntry_2_set.insert("19082582.080000");
      QuotEntry_2.add_attribute("BidSz", "9275843.070000"); // 2
      QuotEntry_2_set.insert("9275843.070000");
      QuotEntry_2.add_attribute("OfrSz", "3827297.590000"); // 2
      QuotEntry_2_set.insert("3827297.590000");
      QuotEntry_2.add_attribute("ValidUntilTm", "ValidUntilTime_t_1418865273"); // 2
      QuotEntry_2_set.insert("ValidUntilTime_t_1418865273");
      QuotEntry_2.add_attribute("BidSpotRt", "2732651.150000"); // 2
      QuotEntry_2_set.insert("2732651.150000");
      QuotEntry_2.add_attribute("OfrSpotRt", "7110644.570000"); // 2
      QuotEntry_2_set.insert("7110644.570000");
      QuotEntry_2.add_attribute("BidFwdPnts", "10932204.960000"); // 2
      QuotEntry_2_set.insert("10932204.960000");
      QuotEntry_2.add_attribute("OfrFwdPnts", "879793.230000"); // 2
      QuotEntry_2_set.insert("879793.230000");
      QuotEntry_2.add_attribute("MidPx", "5278237.490000"); // 2
      QuotEntry_2_set.insert("5278237.490000");
      QuotEntry_2.add_attribute("BidYld", "14900631.710000"); // 2
      QuotEntry_2_set.insert("14900631.710000");
      QuotEntry_2.add_attribute("MidYld", "12613328.040000"); // 2
      QuotEntry_2_set.insert("12613328.040000");
      QuotEntry_2.add_attribute("OfrYld", "12010559.520000"); // 2
      QuotEntry_2_set.insert("12010559.520000");
      QuotEntry_2.add_attribute("TxnTm", "TransactTime_t_1729213048"); // 2
      QuotEntry_2_set.insert("TransactTime_t_1729213048");
      QuotEntry_2.add_attribute("SesID", "3"); // 2
      QuotEntry_2_set.insert("3");
      QuotEntry_2.add_attribute("SesSub", "7"); // 2
      QuotEntry_2_set.insert("7");
      QuotEntry_2.add_attribute("SettlDt", "SettlDate_t_1365410319"); // 2
      QuotEntry_2_set.insert("SettlDate_t_1365410319");
      QuotEntry_2.add_attribute("OrdTyp", "F"); // 2
      QuotEntry_2_set.insert("F");
      QuotEntry_2.add_attribute("SettlDt2", "SettlDate2_t_1545858736"); // 2
      QuotEntry_2_set.insert("SettlDate2_t_1545858736");
      QuotEntry_2.add_attribute("Qty2", "13762033.260000"); // 2
      QuotEntry_2_set.insert("13762033.260000");
      QuotEntry_2.add_attribute("BidFwdPnts2", "3906639.190000"); // 2
      QuotEntry_2_set.insert("3906639.190000");
      QuotEntry_2.add_attribute("OfrFwdPnts2", "9097208.850000"); // 2
      QuotEntry_2_set.insert("9097208.850000");
      QuotEntry_2.add_attribute("Ccy", "CAN"); // 2
      QuotEntry_2_set.insert("CAN");
      QuotEntry_2.add_attribute("BkngTyp", "2"); // 2
      QuotEntry_2_set.insert("2");
      QuotEntry_2.add_attribute("Cpcty", "W"); // 2
      QuotEntry_2_set.insert("W");
      QuotEntry_2.add_attribute("Rstctions", "3"); // 2
      QuotEntry_2_set.insert("3");
      all_values.push_back(QuotEntry_2_set);
      all_compo_names.insert("QuotEntry_2_set");

      {
        xml_element Instrmt_37{"Instrmt"};
        multiset<string> Instrmt_37_set;
        Instrmt_37.add_attribute("Sym", "Symbol_t_168811775"); // 3
        Instrmt_37_set.insert("Symbol_t_168811775");
        Instrmt_37.add_attribute("Sfx", "CD"); // 3
        Instrmt_37_set.insert("CD");
        Instrmt_37.add_attribute("ID", "SecurityID_t_924570562"); // 3
        Instrmt_37_set.insert("SecurityID_t_924570562");
        Instrmt_37.add_attribute("Src", "4"); // 3
        Instrmt_37_set.insert("4");
        Instrmt_37.add_attribute("Prod", "13"); // 3
        Instrmt_37_set.insert("13");
        Instrmt_37.add_attribute("ProdCmplx", "ProductComplex_t_685345122"); // 3
        Instrmt_37_set.insert("ProductComplex_t_685345122");
        Instrmt_37.add_attribute("SecGrp", "SecurityGroup_t_774873552"); // 3
        Instrmt_37_set.insert("SecurityGroup_t_774873552");
        Instrmt_37.add_attribute("CFI", "CFICode_t_227885777"); // 3
        Instrmt_37_set.insert("CFICode_t_227885777");
        Instrmt_37.add_attribute("SecTyp", "REPLACD"); // 3
        Instrmt_37_set.insert("REPLACD");
        Instrmt_37.add_attribute("SubTyp", "SecuritySubType_t_1048138668"); // 3
        Instrmt_37_set.insert("SecuritySubType_t_1048138668");
        Instrmt_37.add_attribute("MMY", "938950234"); // 3
        Instrmt_37_set.insert("938950234");
        Instrmt_37.add_attribute("MatDt", "MaturityDate_t_1049947243"); // 3
        Instrmt_37_set.insert("MaturityDate_t_1049947243");
        Instrmt_37.add_attribute("MatTm", "1136117991"); // 3
        Instrmt_37_set.insert("1136117991");
        Instrmt_37.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1466773983"); // 3
        Instrmt_37_set.insert("SettleOnOpenFlag_t_1466773983");
        Instrmt_37.add_attribute("AsgnMeth", "392526767"); // 3
        Instrmt_37_set.insert("392526767");
        Instrmt_37.add_attribute("Status", "2"); // 3
        Instrmt_37_set.insert("2");
        Instrmt_37.add_attribute("CpnPmt", "CouponPaymentDate_t_520346288"); // 3
        Instrmt_37_set.insert("CouponPaymentDate_t_520346288");
        Instrmt_37.add_attribute("RestrctTyp", "XR"); // 3
        Instrmt_37_set.insert("XR");
        Instrmt_37.add_attribute("Snrty", "SD"); // 3
        Instrmt_37_set.insert("SD");
        Instrmt_37.add_attribute("NotlPctOut", "450993.170000"); // 3
        Instrmt_37_set.insert("450993.170000");
        Instrmt_37.add_attribute("OrigNotlPctOut", "13396664.860000"); // 3
        Instrmt_37_set.insert("13396664.860000");
        Instrmt_37.add_attribute("AttchPnt", "2964594.820000"); // 3
        Instrmt_37_set.insert("2964594.820000");
        Instrmt_37.add_attribute("DetchPnt", "15909580.530000"); // 3
        Instrmt_37_set.insert("15909580.530000");
        Instrmt_37.add_attribute("Issued", "IssueDate_t_568386164"); // 3
        Instrmt_37_set.insert("IssueDate_t_568386164");
        Instrmt_37.add_attribute("RepoCollSecTyp", "687123401"); // 3
        Instrmt_37_set.insert("687123401");
        Instrmt_37.add_attribute("RepoTrm", "353195291"); // 3
        Instrmt_37_set.insert("353195291");
        Instrmt_37.add_attribute("RepoRt", "2713002.230000"); // 3
        Instrmt_37_set.insert("2713002.230000");
        Instrmt_37.add_attribute("Fctr", "19897114.240000"); // 3
        Instrmt_37_set.insert("19897114.240000");
        Instrmt_37.add_attribute("CrdRtg", "CreditRating_t_1988700310"); // 3
        Instrmt_37_set.insert("CreditRating_t_1988700310");
        Instrmt_37.add_attribute("Rgstry", "InstrRegistry_t_201237542"); // 3
        Instrmt_37_set.insert("InstrRegistry_t_201237542");
        Instrmt_37.add_attribute("IssuCtry", "372096943"); // 3
        Instrmt_37_set.insert("372096943");
        Instrmt_37.add_attribute("StPrv", "StateOrProvinceOfIssue_t_10028437"); // 3
        Instrmt_37_set.insert("StateOrProvinceOfIssue_t_10028437");
        Instrmt_37.add_attribute("Lcl", "LocaleOfIssue_t_947610798"); // 3
        Instrmt_37_set.insert("LocaleOfIssue_t_947610798");
        Instrmt_37.add_attribute("Redeem", "RedemptionDate_t_1296667505"); // 3
        Instrmt_37_set.insert("RedemptionDate_t_1296667505");
        Instrmt_37.add_attribute("StrkPx", "20048013.300000"); // 3
        Instrmt_37_set.insert("20048013.300000");
        Instrmt_37.add_attribute("StrkCcy", "USD"); // 3
        Instrmt_37_set.insert("USD");
        Instrmt_37.add_attribute("StrkMult", "6321912.340000"); // 3
        Instrmt_37_set.insert("6321912.340000");
        Instrmt_37.add_attribute("StrkValu", "10206525.930000"); // 3
        Instrmt_37_set.insert("10206525.930000");
        Instrmt_37.add_attribute("StrkPxDtrmnMeth", "4"); // 3
        Instrmt_37_set.insert("4");
        Instrmt_37.add_attribute("StrkPxBndryMeth", "3"); // 3
        Instrmt_37_set.insert("3");
        Instrmt_37.add_attribute("StrkPxBndryPrcsn", "19596028.270000"); // 3
        Instrmt_37_set.insert("19596028.270000");
        Instrmt_37.add_attribute("PxDtrmnMeth", "4"); // 3
        Instrmt_37_set.insert("4");
        Instrmt_37.add_attribute("OptAt", "668964246"); // 3
        Instrmt_37_set.insert("668964246");
        Instrmt_37.add_attribute("Mult", "12788931.630000"); // 3
        Instrmt_37_set.insert("12788931.630000");
        Instrmt_37.add_attribute("MultTyp", "0"); // 3
        Instrmt_37_set.insert("0");
        Instrmt_37.add_attribute("FlowSchedTyp", "3"); // 3
        Instrmt_37_set.insert("3");
        Instrmt_37.add_attribute("MinPxIncr", "17992394.510000"); // 3
        Instrmt_37_set.insert("17992394.510000");
        Instrmt_37.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1207985905"); // 3
        Instrmt_37_set.insert("MinPriceIncrementAmount_t_1207985905");
        Instrmt_37.add_attribute("UOM", "USD"); // 3
        Instrmt_37_set.insert("USD");
        Instrmt_37.add_attribute("UOMQty", "18443387.680000"); // 3
        Instrmt_37_set.insert("18443387.680000");
        Instrmt_37.add_attribute("PxUOM", "MMBtu"); // 3
        Instrmt_37_set.insert("MMBtu");
        Instrmt_37.add_attribute("PxUOMQty", "3506824.390000"); // 3
        Instrmt_37_set.insert("3506824.390000");
        Instrmt_37.add_attribute("SettlMeth", "C"); // 3
        Instrmt_37_set.insert("C");
        Instrmt_37.add_attribute("ExerStyle", "0"); // 3
        Instrmt_37_set.insert("0");
        Instrmt_37.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_37_set.insert("1");
        Instrmt_37.add_attribute("OptPayAmt", "OptPayoutAmount_t_1641008465"); // 3
        Instrmt_37_set.insert("OptPayoutAmount_t_1641008465");
        Instrmt_37.add_attribute("PxQteMeth", "PCTPAR"); // 3
        Instrmt_37_set.insert("PCTPAR");
        Instrmt_37.add_attribute("ValMeth", "FUT"); // 3
        Instrmt_37_set.insert("FUT");
        Instrmt_37.add_attribute("ListMeth", "1"); // 3
        Instrmt_37_set.insert("1");
        Instrmt_37.add_attribute("CapPx", "14410926.730000"); // 3
        Instrmt_37_set.insert("14410926.730000");
        Instrmt_37.add_attribute("FlrPx", "12521305.590000"); // 3
        Instrmt_37_set.insert("12521305.590000");
        Instrmt_37.add_attribute("PutCall", "0"); // 3
        Instrmt_37_set.insert("0");
        Instrmt_37.add_attribute("FlexInd", "false"); // 3
        Instrmt_37_set.insert("false");
        Instrmt_37.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_37_set.insert("true");
        Instrmt_37.add_attribute("TmUnit", "H"); // 3
        Instrmt_37_set.insert("H");
        Instrmt_37.add_attribute("CpnRt", "10339866.390000"); // 3
        Instrmt_37_set.insert("10339866.390000");
        Instrmt_37.add_attribute("Exch", "SecurityExchange_t_235843396"); // 3
        Instrmt_37_set.insert("SecurityExchange_t_235843396");
        Instrmt_37.add_attribute("PosLmt", "1981762480"); // 3
        Instrmt_37_set.insert("1981762480");
        Instrmt_37.add_attribute("NTPosLmt", "2054639232"); // 3
        Instrmt_37_set.insert("2054639232");
        Instrmt_37.add_attribute("Issr", "Issuer_t_27099124"); // 3
        Instrmt_37_set.insert("Issuer_t_27099124");
        Instrmt_37.add_attribute("EncIssrLen", "1514608735"); // 3
        Instrmt_37_set.insert("1514608735");
        Instrmt_37.add_attribute("EncIssr", "EncodedIssuer_t_1866758412"); // 3
        Instrmt_37_set.insert("EncodedIssuer_t_1866758412");
        Instrmt_37.add_attribute("Desc", "SecurityDesc_t_868302095"); // 3
        Instrmt_37_set.insert("SecurityDesc_t_868302095");
        Instrmt_37.add_attribute("EncSecDescLen", "36089333"); // 3
        Instrmt_37_set.insert("36089333");
        Instrmt_37.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_998167927"); // 3
        Instrmt_37_set.insert("EncodedSecurityDesc_t_998167927");
        Instrmt_37.add_attribute("Pool", "Pool_t_2102031833"); // 3
        Instrmt_37_set.insert("Pool_t_2102031833");
        Instrmt_37.add_attribute("CSetMo", "955020726"); // 3
        Instrmt_37_set.insert("955020726");
        Instrmt_37.add_attribute("CPPgm", "2"); // 3
        Instrmt_37_set.insert("2");
        Instrmt_37.add_attribute("CPRegT", "CPRegType_t_1162534090"); // 3
        Instrmt_37_set.insert("CPRegType_t_1162534090");
        Instrmt_37.add_attribute("Dated", "DatedDate_t_1009243683"); // 3
        Instrmt_37_set.insert("DatedDate_t_1009243683");
        Instrmt_37.add_attribute("IntAcrl", "InterestAccrualDate_t_346778850"); // 3
        Instrmt_37_set.insert("InterestAccrualDate_t_346778850");
        all_values.push_back(Instrmt_37_set);
        all_compo_names.insert("Instrmt_37_set");

        {
          xml_element AID_40{"AID"};
          multiset<string> AID_40_set;
          AID_40.add_attribute("AltID", "SecurityAltID_t_1562702834"); // 4
          AID_40_set.insert("SecurityAltID_t_1562702834");
          AID_40.add_attribute("AltIDSrc", "H"); // 4
          AID_40_set.insert("H");
          all_values.push_back(AID_40_set);
          all_compo_names.insert("AID_40_set");

          Instrmt_37.add_element(AID_40);
        }
        {
          xml_element SecXML_40{"SecXML"};
          multiset<string> SecXML_40_set;
          SecXML_40.add_attribute("Schema", "SecurityXMLSchema_t_1634592024"); // 4
          SecXML_40_set.insert("SecurityXMLSchema_t_1634592024");
          all_values.push_back(SecXML_40_set);
          all_compo_names.insert("SecXML_40_set");

          Instrmt_37.add_element(SecXML_40);
        }
        {
          xml_element Evnt_40{"Evnt"};
          multiset<string> Evnt_40_set;
          Evnt_40.add_attribute("EventTyp", "15"); // 4
          Evnt_40_set.insert("15");
          Evnt_40.add_attribute("Dt", "EventDate_t_250248314"); // 4
          Evnt_40_set.insert("EventDate_t_250248314");
          Evnt_40.add_attribute("Tm", "EventTime_t_1128116841"); // 4
          Evnt_40_set.insert("EventTime_t_1128116841");
          Evnt_40.add_attribute("Px", "16236292.260000"); // 4
          Evnt_40_set.insert("16236292.260000");
          Evnt_40.add_attribute("Txt", "EventText_t_1130281930"); // 4
          Evnt_40_set.insert("EventText_t_1130281930");
          all_values.push_back(Evnt_40_set);
          all_compo_names.insert("Evnt_40_set");

          Instrmt_37.add_element(Evnt_40);
        }
        {
          xml_element Pty_199{"Pty"};
          multiset<string> Pty_199_set;
          Pty_199.add_attribute("ID", "InstrumentPartyID_t_462858320"); // 4
          Pty_199_set.insert("InstrumentPartyID_t_462858320");
          Pty_199.add_attribute("Src", "D"); // 4
          Pty_199_set.insert("D");
          Pty_199.add_attribute("R", "79"); // 4
          Pty_199_set.insert("79");
          all_values.push_back(Pty_199_set);
          all_compo_names.insert("Pty_199_set");

          {
            xml_element Sub_199{"Sub"};
            multiset<string> Sub_199_set;
            Sub_199.add_attribute("ID", "InstrumentPartySubID_t_1955111884"); // 5
            Sub_199_set.insert("InstrumentPartySubID_t_1955111884");
            Sub_199.add_attribute("Typ", "14"); // 5
            Sub_199_set.insert("14");
            all_values.push_back(Sub_199_set);
            all_compo_names.insert("Sub_199_set");

            Pty_199.add_element(Sub_199);
          }
          Instrmt_37.add_element(Pty_199);
        }
        {
          xml_element CmplxEvnt_37{"CmplxEvnt"};
          multiset<string> CmplxEvnt_37_set;
          CmplxEvnt_37.add_attribute("Typ", "4"); // 4
          CmplxEvnt_37_set.insert("4");
          CmplxEvnt_37.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1157199482"); // 4
          CmplxEvnt_37_set.insert("ComplexOptPayoutAmount_t_1157199482");
          CmplxEvnt_37.add_attribute("Px", "449610.670000"); // 4
          CmplxEvnt_37_set.insert("449610.670000");
          CmplxEvnt_37.add_attribute("PxBndryMeth", "5"); // 4
          CmplxEvnt_37_set.insert("5");
          CmplxEvnt_37.add_attribute("PxBndryPrcsn", "9914783.150000"); // 4
          CmplxEvnt_37_set.insert("9914783.150000");
          CmplxEvnt_37.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_37_set.insert("2");
          CmplxEvnt_37.add_attribute("Cond", "1"); // 4
          CmplxEvnt_37_set.insert("1");
          all_values.push_back(CmplxEvnt_37_set);
          all_compo_names.insert("CmplxEvnt_37_set");

          {
            xml_element EvntDts_37{"EvntDts"};
            multiset<string> EvntDts_37_set;
            EvntDts_37.add_attribute("StartDt", "ComplexEventStartDate_t_358603402"); // 5
            EvntDts_37_set.insert("ComplexEventStartDate_t_358603402");
            EvntDts_37.add_attribute("EndDt", "ComplexEventEndDate_t_1818875063"); // 5
            EvntDts_37_set.insert("ComplexEventEndDate_t_1818875063");
            all_values.push_back(EvntDts_37_set);
            all_compo_names.insert("EvntDts_37_set");

            {
              xml_element EvntTms_37{"EvntTms"};
              multiset<string> EvntTms_37_set;
              EvntTms_37.add_attribute("StartTm", "1767487873"); // 6
              EvntTms_37_set.insert("1767487873");
              EvntTms_37.add_attribute("EndTm", "394692735"); // 6
              EvntTms_37_set.insert("394692735");
              all_values.push_back(EvntTms_37_set);
              all_compo_names.insert("EvntTms_37_set");

              EvntDts_37.add_element(EvntTms_37);
            }
            CmplxEvnt_37.add_element(EvntDts_37);
          }
          Instrmt_37.add_element(CmplxEvnt_37);
        }
        QuotEntry_2.add_element(Instrmt_37);
      }
      {
        xml_element Leg_50{"Leg"};
        multiset<string> Leg_50_set;
        Leg_50.add_attribute("Sym", "LegSymbol_t_669559342"); // 3
        Leg_50_set.insert("LegSymbol_t_669559342");
        Leg_50.add_attribute("Sfx", "CD"); // 3
        Leg_50_set.insert("CD");
        Leg_50.add_attribute("ID", "LegSecurityID_t_1349713461"); // 3
        Leg_50_set.insert("LegSecurityID_t_1349713461");
        Leg_50.add_attribute("Src", "7"); // 3
        Leg_50_set.insert("7");
        Leg_50.add_attribute("Prod", "5"); // 3
        Leg_50_set.insert("5");
        Leg_50.add_attribute("CFI", "LegCFICode_t_211473497"); // 3
        Leg_50_set.insert("LegCFICode_t_211473497");
        Leg_50.add_attribute("SecTyp", "WAR"); // 3
        Leg_50_set.insert("WAR");
        Leg_50.add_attribute("SecSubTyp", "LegSecuritySubType_t_152305687"); // 3
        Leg_50_set.insert("LegSecuritySubType_t_152305687");
        Leg_50.add_attribute("MMY", "1571399619"); // 3
        Leg_50_set.insert("1571399619");
        Leg_50.add_attribute("Mat", "LegMaturityDate_t_1153370299"); // 3
        Leg_50_set.insert("LegMaturityDate_t_1153370299");
        Leg_50.add_attribute("MatTm", "536079782"); // 3
        Leg_50_set.insert("536079782");
        Leg_50.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1821647934"); // 3
        Leg_50_set.insert("LegCouponPaymentDate_t_1821647934");
        Leg_50.add_attribute("Issued", "LegIssueDate_t_134003493"); // 3
        Leg_50_set.insert("LegIssueDate_t_134003493");
        Leg_50.add_attribute("RepoCollSecTyp", "12225361"); // 3
        Leg_50_set.insert("12225361");
        Leg_50.add_attribute("RepoTrm", "804446216"); // 3
        Leg_50_set.insert("804446216");
        Leg_50.add_attribute("RepoRt", "5968618.130000"); // 3
        Leg_50_set.insert("5968618.130000");
        Leg_50.add_attribute("Fctr", "9294636.130000"); // 3
        Leg_50_set.insert("9294636.130000");
        Leg_50.add_attribute("CrdRtg", "LegCreditRating_t_1039375058"); // 3
        Leg_50_set.insert("LegCreditRating_t_1039375058");
        Leg_50.add_attribute("Rgstry", "LegInstrRegistry_t_404490050"); // 3
        Leg_50_set.insert("LegInstrRegistry_t_404490050");
        Leg_50.add_attribute("Ctry", "2087921688"); // 3
        Leg_50_set.insert("2087921688");
        Leg_50.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1675618316"); // 3
        Leg_50_set.insert("LegStateOrProvinceOfIssue_t_1675618316");
        Leg_50.add_attribute("Lcl", "LegLocaleOfIssue_t_1561689532"); // 3
        Leg_50_set.insert("LegLocaleOfIssue_t_1561689532");
        Leg_50.add_attribute("Redeem", "LegRedemptionDate_t_2132882755"); // 3
        Leg_50_set.insert("LegRedemptionDate_t_2132882755");
        Leg_50.add_attribute("Strk", "4002213.220000"); // 3
        Leg_50_set.insert("4002213.220000");
        Leg_50.add_attribute("StrkCcy", "EUR"); // 3
        Leg_50_set.insert("EUR");
        Leg_50.add_attribute("OptA", "1299407101"); // 3
        Leg_50_set.insert("1299407101");
        Leg_50.add_attribute("Cmult", "7642876.010000"); // 3
        Leg_50_set.insert("7642876.010000");
        Leg_50.add_attribute("MultTyp", "1"); // 3
        Leg_50_set.insert("1");
        Leg_50.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_50_set.insert("1");
        Leg_50.add_attribute("UOM", "lbs"); // 3
        Leg_50_set.insert("lbs");
        Leg_50.add_attribute("UOMQty", "2784665.170000"); // 3
        Leg_50_set.insert("2784665.170000");
        Leg_50.add_attribute("PxUOM", "lbs"); // 3
        Leg_50_set.insert("lbs");
        Leg_50.add_attribute("PxUOMQty", "3612101.500000"); // 3
        Leg_50_set.insert("3612101.500000");
        Leg_50.add_attribute("TmUnit", "Mo"); // 3
        Leg_50_set.insert("Mo");
        Leg_50.add_attribute("ExerStyle", "1"); // 3
        Leg_50_set.insert("1");
        Leg_50.add_attribute("CpnRt", "5726836.470000"); // 3
        Leg_50_set.insert("5726836.470000");
        Leg_50.add_attribute("Exch", "LegSecurityExchange_t_1116727864"); // 3
        Leg_50_set.insert("LegSecurityExchange_t_1116727864");
        Leg_50.add_attribute("Issr", "LegIssuer_t_1383355925"); // 3
        Leg_50_set.insert("LegIssuer_t_1383355925");
        Leg_50.add_attribute("EncLegIssrLen", "2144083266"); // 3
        Leg_50_set.insert("2144083266");
        Leg_50.add_attribute("EncLegIssr", "EncodedLegIssuer_t_122614516"); // 3
        Leg_50_set.insert("EncodedLegIssuer_t_122614516");
        Leg_50.add_attribute("Desc", "LegSecurityDesc_t_1919435708"); // 3
        Leg_50_set.insert("LegSecurityDesc_t_1919435708");
        Leg_50.add_attribute("EncLegSecDescLen", "1818247552"); // 3
        Leg_50_set.insert("1818247552");
        Leg_50.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_256618009"); // 3
        Leg_50_set.insert("EncodedLegSecurityDesc_t_256618009");
        Leg_50.add_attribute("RatioQty", "19316610.690000"); // 3
        Leg_50_set.insert("19316610.690000");
        Leg_50.add_attribute("Side", "A"); // 3
        Leg_50_set.insert("A");
        Leg_50.add_attribute("Ccy", "GBP"); // 3
        Leg_50_set.insert("GBP");
        Leg_50.add_attribute("Pool", "LegPool_t_1514585179"); // 3
        Leg_50_set.insert("LegPool_t_1514585179");
        Leg_50.add_attribute("Dated", "LegDatedDate_t_1257969872"); // 3
        Leg_50_set.insert("LegDatedDate_t_1257969872");
        Leg_50.add_attribute("CSetMo", "654079074"); // 3
        Leg_50_set.insert("654079074");
        Leg_50.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1042719847"); // 3
        Leg_50_set.insert("LegInterestAccrualDate_t_1042719847");
        Leg_50.add_attribute("PutCall", "672175757"); // 3
        Leg_50_set.insert("672175757");
        Leg_50.add_attribute("LegOptionRatio", "6394781.820000"); // 3
        Leg_50_set.insert("6394781.820000");
        Leg_50.add_attribute("Px", "14429411.690000"); // 3
        Leg_50_set.insert("14429411.690000");
        all_values.push_back(Leg_50_set);
        all_compo_names.insert("Leg_50_set");

        {
          xml_element LegAID_50{"LegAID"};
          multiset<string> LegAID_50_set;
          LegAID_50.add_attribute("SecAltID", "LegSecurityAltID_t_1077859956"); // 4
          LegAID_50_set.insert("LegSecurityAltID_t_1077859956");
          LegAID_50.add_attribute("SecAltIDSrc", "8"); // 4
          LegAID_50_set.insert("8");
          all_values.push_back(LegAID_50_set);
          all_compo_names.insert("LegAID_50_set");

          Leg_50.add_element(LegAID_50);
        }
        QuotEntry_2.add_element(Leg_50);
      }
      QuotSet_2.add_element(QuotEntry_2);
    }
    elt.add_element(QuotSet_2);
  } // end QuotSet
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
