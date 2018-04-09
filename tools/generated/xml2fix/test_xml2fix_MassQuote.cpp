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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MassQuot" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuote_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_1035700838"); // 0
  MassQuote_message_t_0.insert("QuoteReqID_t_1035700838");
  elt.add_attribute("QID", "QuoteID_t_1533618635"); // 0
  MassQuote_message_t_0.insert("QuoteID_t_1533618635");
  elt.add_attribute("Typ", "0"); // 0
  MassQuote_message_t_0.insert("0");
  elt.add_attribute("RspLvl", "0"); // 0
  MassQuote_message_t_0.insert("0");
  elt.add_attribute("Acct", "Account_t_516087285"); // 0
  MassQuote_message_t_0.insert("Account_t_516087285");
  elt.add_attribute("AcctIDSrc", "4"); // 0
  MassQuote_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "1"); // 0
  MassQuote_message_t_0.insert("1");
  elt.add_attribute("DefBidSz", "14947433.230000"); // 0
  MassQuote_message_t_0.insert("14947433.230000");
  elt.add_attribute("DefOfrSz", "4679270.140000"); // 0
  MassQuote_message_t_0.insert("4679270.140000");
  all_values.push_back(MassQuote_message_t_0);
  all_compo_names.insert("MassQuote_message_t");

  { // Hdr
    xml_element Hdr_46{"Hdr"};
    multiset<string> Hdr_46_set;
    Hdr_46.add_attribute("SeqNum", "1168038481"); // 1
    Hdr_46_set.insert("1168038481");
    Hdr_46.add_attribute("SID", "SenderCompID_t_1430470686"); // 1
    Hdr_46_set.insert("SenderCompID_t_1430470686");
    Hdr_46.add_attribute("TID", "TargetCompID_t_2082590533"); // 1
    Hdr_46_set.insert("TargetCompID_t_2082590533");
    Hdr_46.add_attribute("OBID", "OnBehalfOfCompID_t_1301718143"); // 1
    Hdr_46_set.insert("OnBehalfOfCompID_t_1301718143");
    Hdr_46.add_attribute("D2ID", "DeliverToCompID_t_139644667"); // 1
    Hdr_46_set.insert("DeliverToCompID_t_139644667");
    Hdr_46.add_attribute("SSub", "SenderSubID_t_920637311"); // 1
    Hdr_46_set.insert("SenderSubID_t_920637311");
    Hdr_46.add_attribute("SLoc", "SenderLocationID_t_1882682871"); // 1
    Hdr_46_set.insert("SenderLocationID_t_1882682871");
    Hdr_46.add_attribute("TSub", "TargetSubID_t_1482599510"); // 1
    Hdr_46_set.insert("TargetSubID_t_1482599510");
    Hdr_46.add_attribute("TLoc", "TargetLocationID_t_485025484"); // 1
    Hdr_46_set.insert("TargetLocationID_t_485025484");
    Hdr_46.add_attribute("OBSub", "OnBehalfOfSubID_t_949593862"); // 1
    Hdr_46_set.insert("OnBehalfOfSubID_t_949593862");
    Hdr_46.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1842422829"); // 1
    Hdr_46_set.insert("OnBehalfOfLocationID_t_1842422829");
    Hdr_46.add_attribute("D2Sub", "DeliverToSubID_t_820921055"); // 1
    Hdr_46_set.insert("DeliverToSubID_t_820921055");
    Hdr_46.add_attribute("D2Loc", "DeliverToLocationID_t_1622894755"); // 1
    Hdr_46_set.insert("DeliverToLocationID_t_1622894755");
    Hdr_46.add_attribute("PosDup", "N"); // 1
    Hdr_46_set.insert("N");
    Hdr_46.add_attribute("PosRsnd", "Y"); // 1
    Hdr_46_set.insert("Y");
    Hdr_46.add_attribute("Snt", "SendingTime_t_928476263"); // 1
    Hdr_46_set.insert("SendingTime_t_928476263");
    Hdr_46.add_attribute("OrigSnt", "OrigSendingTime_t_2133444623"); // 1
    Hdr_46_set.insert("OrigSendingTime_t_2133444623");
    Hdr_46.add_attribute("MsgEncd", "MessageEncoding_t_35466949"); // 1
    Hdr_46_set.insert("MessageEncoding_t_35466949");
    all_values.push_back(Hdr_46_set);
    all_compo_names.insert("Hdr_46_set");

    {
      xml_element Hop_46{"Hop"};
      multiset<string> Hop_46_set;
      Hop_46.add_attribute("ID", "HopCompID_t_2134623158"); // 2
      Hop_46_set.insert("HopCompID_t_2134623158");
      Hop_46.add_attribute("Ref", "1337206498"); // 2
      Hop_46_set.insert("1337206498");
      Hop_46.add_attribute("Snt", "HopSendingTime_t_1053444060"); // 2
      Hop_46_set.insert("HopSendingTime_t_1053444060");
      all_values.push_back(Hop_46_set);
      all_compo_names.insert("Hop_46_set");

      Hdr_46.add_element(Hop_46);
    }
    elt.add_element(Hdr_46);
  } // end Hdr
  { // Pty
    xml_element Pty_180{"Pty"};
    multiset<string> Pty_180_set;
    Pty_180.add_attribute("ID", "PartyID_t_225423688"); // 1
    Pty_180_set.insert("PartyID_t_225423688");
    Pty_180.add_attribute("Src", "5"); // 1
    Pty_180_set.insert("5");
    Pty_180.add_attribute("R", "42"); // 1
    Pty_180_set.insert("42");
    all_values.push_back(Pty_180_set);
    all_compo_names.insert("Pty_180_set");

    {
      xml_element Sub_180{"Sub"};
      multiset<string> Sub_180_set;
      Sub_180.add_attribute("ID", "PartySubID_t_2018298304"); // 2
      Sub_180_set.insert("PartySubID_t_2018298304");
      Sub_180.add_attribute("Typ", "29"); // 2
      Sub_180_set.insert("29");
      all_values.push_back(Sub_180_set);
      all_compo_names.insert("Sub_180_set");

      Pty_180.add_element(Sub_180);
    }
    elt.add_element(Pty_180);
  } // end Pty
  { // Pty
    xml_element Pty_181{"Pty"};
    multiset<string> Pty_181_set;
    Pty_181.add_attribute("ID", "PartyID_t_426250757"); // 1
    Pty_181_set.insert("PartyID_t_426250757");
    Pty_181.add_attribute("Src", "E"); // 1
    Pty_181_set.insert("E");
    Pty_181.add_attribute("R", "10"); // 1
    Pty_181_set.insert("10");
    all_values.push_back(Pty_181_set);
    all_compo_names.insert("Pty_181_set");

    {
      xml_element Sub_181{"Sub"};
      multiset<string> Sub_181_set;
      Sub_181.add_attribute("ID", "PartySubID_t_894177771"); // 2
      Sub_181_set.insert("PartySubID_t_894177771");
      Sub_181.add_attribute("Typ", "32"); // 2
      Sub_181_set.insert("32");
      all_values.push_back(Sub_181_set);
      all_compo_names.insert("Sub_181_set");

      Pty_181.add_element(Sub_181);
    }
    elt.add_element(Pty_181);
  } // end Pty
  { // QuotSet
    xml_element QuotSet_0{"QuotSet"};
    multiset<string> QuotSet_0_set;
    QuotSet_0.add_attribute("SetID", "QuoteSetID_t_829284656"); // 1
    QuotSet_0_set.insert("QuoteSetID_t_829284656");
    QuotSet_0.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1313213724"); // 1
    QuotSet_0_set.insert("QuoteSetValidUntilTime_t_1313213724");
    QuotSet_0.add_attribute("TotNoQuotEntries", "1873041363"); // 1
    QuotSet_0_set.insert("1873041363");
    QuotSet_0.add_attribute("LastFragment", "N"); // 1
    QuotSet_0_set.insert("N");
    all_values.push_back(QuotSet_0_set);
    all_compo_names.insert("QuotSet_0_set");

    {
      xml_element Undly_45{"Undly"};
      multiset<string> Undly_45_set;
      Undly_45.add_attribute("Sym", "UnderlyingSymbol_t_1048412948"); // 2
      Undly_45_set.insert("UnderlyingSymbol_t_1048412948");
      Undly_45.add_attribute("Sfx", "WI"); // 2
      Undly_45_set.insert("WI");
      Undly_45.add_attribute("ID", "UnderlyingSecurityID_t_87463804"); // 2
      Undly_45_set.insert("UnderlyingSecurityID_t_87463804");
      Undly_45.add_attribute("Src", "9"); // 2
      Undly_45_set.insert("9");
      Undly_45.add_attribute("Prod", "13"); // 2
      Undly_45_set.insert("13");
      Undly_45.add_attribute("CFI", "UnderlyingCFICode_t_908384860"); // 2
      Undly_45_set.insert("UnderlyingCFICode_t_908384860");
      Undly_45.add_attribute("SecTyp", "RVLVTRM"); // 2
      Undly_45_set.insert("RVLVTRM");
      Undly_45.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_66692310"); // 2
      Undly_45_set.insert("UnderlyingSecuritySubType_t_66692310");
      Undly_45.add_attribute("MMY", "248061163"); // 2
      Undly_45_set.insert("248061163");
      Undly_45.add_attribute("Mat", "UnderlyingMaturityDate_t_254410533"); // 2
      Undly_45_set.insert("UnderlyingMaturityDate_t_254410533");
      Undly_45.add_attribute("MatTm", "52653286"); // 2
      Undly_45_set.insert("52653286");
      Undly_45.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_283528112"); // 2
      Undly_45_set.insert("UnderlyingCouponPaymentDate_t_283528112");
      Undly_45.add_attribute("RestrctTyp", "XR"); // 2
      Undly_45_set.insert("XR");
      Undly_45.add_attribute("Snrty", "SB"); // 2
      Undly_45_set.insert("SB");
      Undly_45.add_attribute("NotlPctOut", "13369721.720000"); // 2
      Undly_45_set.insert("13369721.720000");
      Undly_45.add_attribute("OrigNotlPctOut", "1311108.980000"); // 2
      Undly_45_set.insert("1311108.980000");
      Undly_45.add_attribute("AttchPnt", "16152834.720000"); // 2
      Undly_45_set.insert("16152834.720000");
      Undly_45.add_attribute("DetchPnt", "17765512.200000"); // 2
      Undly_45_set.insert("17765512.200000");
      Undly_45.add_attribute("Issued", "UnderlyingIssueDate_t_1557298806"); // 2
      Undly_45_set.insert("UnderlyingIssueDate_t_1557298806");
      Undly_45.add_attribute("RepoCollSecTyp", "1486098128"); // 2
      Undly_45_set.insert("1486098128");
      Undly_45.add_attribute("RepoTrm", "584733906"); // 2
      Undly_45_set.insert("584733906");
      Undly_45.add_attribute("RepoRt", "19835495.630000"); // 2
      Undly_45_set.insert("19835495.630000");
      Undly_45.add_attribute("Fctr", "3295552.280000"); // 2
      Undly_45_set.insert("3295552.280000");
      Undly_45.add_attribute("CrdRtg", "UnderlyingCreditRating_t_887659915"); // 2
      Undly_45_set.insert("UnderlyingCreditRating_t_887659915");
      Undly_45.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_730243686"); // 2
      Undly_45_set.insert("UnderlyingInstrRegistry_t_730243686");
      Undly_45.add_attribute("Ctry", "341050809"); // 2
      Undly_45_set.insert("341050809");
      Undly_45.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_473572962"); // 2
      Undly_45_set.insert("UnderlyingStateOrProvinceOfIssue_t_473572962");
      Undly_45.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1559528343"); // 2
      Undly_45_set.insert("UnderlyingLocaleOfIssue_t_1559528343");
      Undly_45.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1654264533"); // 2
      Undly_45_set.insert("UnderlyingRedemptionDate_t_1654264533");
      Undly_45.add_attribute("StrkPx", "1991306.770000"); // 2
      Undly_45_set.insert("1991306.770000");
      Undly_45.add_attribute("StrkCcy", "CHF"); // 2
      Undly_45_set.insert("CHF");
      Undly_45.add_attribute("OptA", "1407287903"); // 2
      Undly_45_set.insert("1407287903");
      Undly_45.add_attribute("Mult", "12494304.670000"); // 2
      Undly_45_set.insert("12494304.670000");
      Undly_45.add_attribute("MultTyp", "2"); // 2
      Undly_45_set.insert("2");
      Undly_45.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_45_set.insert("1");
      Undly_45.add_attribute("UOM", "lbs"); // 2
      Undly_45_set.insert("lbs");
      Undly_45.add_attribute("UOMQty", "18791349.140000"); // 2
      Undly_45_set.insert("18791349.140000");
      Undly_45.add_attribute("PxUOM", "Bu"); // 2
      Undly_45_set.insert("Bu");
      Undly_45.add_attribute("PxUOMQty", "2583928.420000"); // 2
      Undly_45_set.insert("2583928.420000");
      Undly_45.add_attribute("TmUnit", "Mo"); // 2
      Undly_45_set.insert("Mo");
      Undly_45.add_attribute("ExerStyle", "0"); // 2
      Undly_45_set.insert("0");
      Undly_45.add_attribute("CpnRt", "5419209.540000"); // 2
      Undly_45_set.insert("5419209.540000");
      Undly_45.add_attribute("Exch", "UnderlyingSecurityExchange_t_227611843"); // 2
      Undly_45_set.insert("UnderlyingSecurityExchange_t_227611843");
      Undly_45.add_attribute("Issr", "UnderlyingIssuer_t_1672106042"); // 2
      Undly_45_set.insert("UnderlyingIssuer_t_1672106042");
      Undly_45.add_attribute("EncUndIssrLen", "1878893127"); // 2
      Undly_45_set.insert("1878893127");
      Undly_45.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_358722741"); // 2
      Undly_45_set.insert("EncodedUnderlyingIssuer_t_358722741");
      Undly_45.add_attribute("Desc", "UnderlyingSecurityDesc_t_1139905866"); // 2
      Undly_45_set.insert("UnderlyingSecurityDesc_t_1139905866");
      Undly_45.add_attribute("EncUndSecDescLen", "1507960699"); // 2
      Undly_45_set.insert("1507960699");
      Undly_45.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1916021547"); // 2
      Undly_45_set.insert("EncodedUnderlyingSecurityDesc_t_1916021547");
      Undly_45.add_attribute("CPPgm", "UnderlyingCPProgram_t_478520346"); // 2
      Undly_45_set.insert("UnderlyingCPProgram_t_478520346");
      Undly_45.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2092694605"); // 2
      Undly_45_set.insert("UnderlyingCPRegType_t_2092694605");
      Undly_45.add_attribute("AllocPct", "17520874.620000"); // 2
      Undly_45_set.insert("17520874.620000");
      Undly_45.add_attribute("Ccy", "USD"); // 2
      Undly_45_set.insert("USD");
      Undly_45.add_attribute("Qty", "3348475.010000"); // 2
      Undly_45_set.insert("3348475.010000");
      Undly_45.add_attribute("SettlTyp", "5"); // 2
      Undly_45_set.insert("5");
      Undly_45.add_attribute("CashAmt", "UnderlyingCashAmount_t_1306443835"); // 2
      Undly_45_set.insert("UnderlyingCashAmount_t_1306443835");
      Undly_45.add_attribute("CashTyp", "FIXED"); // 2
      Undly_45_set.insert("FIXED");
      Undly_45.add_attribute("Px", "6559072.690000"); // 2
      Undly_45_set.insert("6559072.690000");
      Undly_45.add_attribute("DirtPx", "15055745.120000"); // 2
      Undly_45_set.insert("15055745.120000");
      Undly_45.add_attribute("EndPx", "9088588.590000"); // 2
      Undly_45_set.insert("9088588.590000");
      Undly_45.add_attribute("StartVal", "UnderlyingStartValue_t_1211101102"); // 2
      Undly_45_set.insert("UnderlyingStartValue_t_1211101102");
      Undly_45.add_attribute("CurVal", "UnderlyingCurrentValue_t_765378767"); // 2
      Undly_45_set.insert("UnderlyingCurrentValue_t_765378767");
      Undly_45.add_attribute("EndVal", "UnderlyingEndValue_t_10805678"); // 2
      Undly_45_set.insert("UnderlyingEndValue_t_10805678");
      Undly_45.add_attribute("AdjQty", "16168180.980000"); // 2
      Undly_45_set.insert("16168180.980000");
      Undly_45.add_attribute("FxRate", "9282794.290000"); // 2
      Undly_45_set.insert("9282794.290000");
      Undly_45.add_attribute("FxRateCalc", "M"); // 2
      Undly_45_set.insert("M");
      Undly_45.add_attribute("CapValu", "UnderlyingCapValue_t_1348469364"); // 2
      Undly_45_set.insert("UnderlyingCapValue_t_1348469364");
      Undly_45.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1157872401"); // 2
      Undly_45_set.insert("UnderlyingSettlMethod_t_1157872401");
      Undly_45.add_attribute("PutCall", "279530200"); // 2
      Undly_45_set.insert("279530200");
      all_values.push_back(Undly_45_set);
      all_compo_names.insert("Undly_45_set");

      {
        xml_element UndAID_45{"UndAID"};
        multiset<string> UndAID_45_set;
        UndAID_45.add_attribute("AltID", "UnderlyingSecurityAltID_t_1334531164"); // 3
        UndAID_45_set.insert("UnderlyingSecurityAltID_t_1334531164");
        UndAID_45.add_attribute("AltIDSrc", "2"); // 3
        UndAID_45_set.insert("2");
        all_values.push_back(UndAID_45_set);
        all_compo_names.insert("UndAID_45_set");

        Undly_45.add_element(UndAID_45);
      }
      {
        xml_element Stip_72{"Stip"};
        multiset<string> Stip_72_set;
        Stip_72.add_attribute("Typ", "PPT"); // 3
        Stip_72_set.insert("PPT");
        Stip_72.add_attribute("Val", "UnderlyingStipValue_t_1562143007"); // 3
        Stip_72_set.insert("UnderlyingStipValue_t_1562143007");
        all_values.push_back(Stip_72_set);
        all_compo_names.insert("Stip_72_set");

        Undly_45.add_element(Stip_72);
      }
      {
        xml_element Pty_182{"Pty"};
        multiset<string> Pty_182_set;
        Pty_182.add_attribute("ID", "UnderlyingInstrumentPartyID_t_964741053"); // 3
        Pty_182_set.insert("UnderlyingInstrumentPartyID_t_964741053");
        Pty_182.add_attribute("Src", "D"); // 3
        Pty_182_set.insert("D");
        Pty_182.add_attribute("R", "5"); // 3
        Pty_182_set.insert("5");
        all_values.push_back(Pty_182_set);
        all_compo_names.insert("Pty_182_set");

        {
          xml_element Sub_182{"Sub"};
          multiset<string> Sub_182_set;
          Sub_182.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2104646919"); // 4
          Sub_182_set.insert("UnderlyingInstrumentPartySubID_t_2104646919");
          Sub_182.add_attribute("Typ", "19"); // 4
          Sub_182_set.insert("19");
          all_values.push_back(Sub_182_set);
          all_compo_names.insert("Sub_182_set");

          Pty_182.add_element(Sub_182);
        }
        Undly_45.add_element(Pty_182);
      }
      QuotSet_0.add_element(Undly_45);
    }
    {
      xml_element QuotEntry_0{"QuotEntry"};
      multiset<string> QuotEntry_0_set;
      QuotEntry_0.add_attribute("EntryID", "QuoteEntryID_t_1689403648"); // 2
      QuotEntry_0_set.insert("QuoteEntryID_t_1689403648");
      QuotEntry_0.add_attribute("BidPx", "4356836.170000"); // 2
      QuotEntry_0_set.insert("4356836.170000");
      QuotEntry_0.add_attribute("OfrPx", "20060322.910000"); // 2
      QuotEntry_0_set.insert("20060322.910000");
      QuotEntry_0.add_attribute("BidSz", "12940074.620000"); // 2
      QuotEntry_0_set.insert("12940074.620000");
      QuotEntry_0.add_attribute("OfrSz", "12437591.920000"); // 2
      QuotEntry_0_set.insert("12437591.920000");
      QuotEntry_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_691419515"); // 2
      QuotEntry_0_set.insert("ValidUntilTime_t_691419515");
      QuotEntry_0.add_attribute("BidSpotRt", "16288549.630000"); // 2
      QuotEntry_0_set.insert("16288549.630000");
      QuotEntry_0.add_attribute("OfrSpotRt", "2454019.270000"); // 2
      QuotEntry_0_set.insert("2454019.270000");
      QuotEntry_0.add_attribute("BidFwdPnts", "19978633.500000"); // 2
      QuotEntry_0_set.insert("19978633.500000");
      QuotEntry_0.add_attribute("OfrFwdPnts", "13757471.590000"); // 2
      QuotEntry_0_set.insert("13757471.590000");
      QuotEntry_0.add_attribute("MidPx", "9013091.960000"); // 2
      QuotEntry_0_set.insert("9013091.960000");
      QuotEntry_0.add_attribute("BidYld", "13559542.150000"); // 2
      QuotEntry_0_set.insert("13559542.150000");
      QuotEntry_0.add_attribute("MidYld", "1371223.700000"); // 2
      QuotEntry_0_set.insert("1371223.700000");
      QuotEntry_0.add_attribute("OfrYld", "21124102.990000"); // 2
      QuotEntry_0_set.insert("21124102.990000");
      QuotEntry_0.add_attribute("TxnTm", "TransactTime_t_2121332982"); // 2
      QuotEntry_0_set.insert("TransactTime_t_2121332982");
      QuotEntry_0.add_attribute("SesID", "6"); // 2
      QuotEntry_0_set.insert("6");
      QuotEntry_0.add_attribute("SesSub", "5"); // 2
      QuotEntry_0_set.insert("5");
      QuotEntry_0.add_attribute("SettlDt", "SettlDate_t_902128763"); // 2
      QuotEntry_0_set.insert("SettlDate_t_902128763");
      QuotEntry_0.add_attribute("OrdTyp", "Q"); // 2
      QuotEntry_0_set.insert("Q");
      QuotEntry_0.add_attribute("SettlDt2", "SettlDate2_t_782730466"); // 2
      QuotEntry_0_set.insert("SettlDate2_t_782730466");
      QuotEntry_0.add_attribute("Qty2", "20600011.640000"); // 2
      QuotEntry_0_set.insert("20600011.640000");
      QuotEntry_0.add_attribute("BidFwdPnts2", "4485956.070000"); // 2
      QuotEntry_0_set.insert("4485956.070000");
      QuotEntry_0.add_attribute("OfrFwdPnts2", "21172616.300000"); // 2
      QuotEntry_0_set.insert("21172616.300000");
      QuotEntry_0.add_attribute("Ccy", "GBP"); // 2
      QuotEntry_0_set.insert("GBP");
      QuotEntry_0.add_attribute("BkngTyp", "2"); // 2
      QuotEntry_0_set.insert("2");
      QuotEntry_0.add_attribute("Cpcty", "R"); // 2
      QuotEntry_0_set.insert("R");
      QuotEntry_0.add_attribute("Rstctions", "C"); // 2
      QuotEntry_0_set.insert("C");
      all_values.push_back(QuotEntry_0_set);
      all_compo_names.insert("QuotEntry_0_set");

      {
        xml_element Instrmt_33{"Instrmt"};
        multiset<string> Instrmt_33_set;
        Instrmt_33.add_attribute("Sym", "Symbol_t_1305303089"); // 3
        Instrmt_33_set.insert("Symbol_t_1305303089");
        Instrmt_33.add_attribute("Sfx", "WI"); // 3
        Instrmt_33_set.insert("WI");
        Instrmt_33.add_attribute("ID", "SecurityID_t_1736245082"); // 3
        Instrmt_33_set.insert("SecurityID_t_1736245082");
        Instrmt_33.add_attribute("Src", "A"); // 3
        Instrmt_33_set.insert("A");
        Instrmt_33.add_attribute("Prod", "2"); // 3
        Instrmt_33_set.insert("2");
        Instrmt_33.add_attribute("ProdCmplx", "ProductComplex_t_1594793725"); // 3
        Instrmt_33_set.insert("ProductComplex_t_1594793725");
        Instrmt_33.add_attribute("SecGrp", "SecurityGroup_t_2141230552"); // 3
        Instrmt_33_set.insert("SecurityGroup_t_2141230552");
        Instrmt_33.add_attribute("CFI", "CFICode_t_1806499661"); // 3
        Instrmt_33_set.insert("CFICode_t_1806499661");
        Instrmt_33.add_attribute("SecTyp", "REV"); // 3
        Instrmt_33_set.insert("REV");
        Instrmt_33.add_attribute("SubTyp", "SecuritySubType_t_1622601867"); // 3
        Instrmt_33_set.insert("SecuritySubType_t_1622601867");
        Instrmt_33.add_attribute("MMY", "2051901588"); // 3
        Instrmt_33_set.insert("2051901588");
        Instrmt_33.add_attribute("MatDt", "MaturityDate_t_2136592943"); // 3
        Instrmt_33_set.insert("MaturityDate_t_2136592943");
        Instrmt_33.add_attribute("MatTm", "850865379"); // 3
        Instrmt_33_set.insert("850865379");
        Instrmt_33.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_805727137"); // 3
        Instrmt_33_set.insert("SettleOnOpenFlag_t_805727137");
        Instrmt_33.add_attribute("AsgnMeth", "1345063510"); // 3
        Instrmt_33_set.insert("1345063510");
        Instrmt_33.add_attribute("Status", "2"); // 3
        Instrmt_33_set.insert("2");
        Instrmt_33.add_attribute("CpnPmt", "CouponPaymentDate_t_770653788"); // 3
        Instrmt_33_set.insert("CouponPaymentDate_t_770653788");
        Instrmt_33.add_attribute("RestrctTyp", "FR"); // 3
        Instrmt_33_set.insert("FR");
        Instrmt_33.add_attribute("Snrty", "SR"); // 3
        Instrmt_33_set.insert("SR");
        Instrmt_33.add_attribute("NotlPctOut", "2049148.890000"); // 3
        Instrmt_33_set.insert("2049148.890000");
        Instrmt_33.add_attribute("OrigNotlPctOut", "735579.600000"); // 3
        Instrmt_33_set.insert("735579.600000");
        Instrmt_33.add_attribute("AttchPnt", "13049812.050000"); // 3
        Instrmt_33_set.insert("13049812.050000");
        Instrmt_33.add_attribute("DetchPnt", "9876453.550000"); // 3
        Instrmt_33_set.insert("9876453.550000");
        Instrmt_33.add_attribute("Issued", "IssueDate_t_2133559124"); // 3
        Instrmt_33_set.insert("IssueDate_t_2133559124");
        Instrmt_33.add_attribute("RepoCollSecTyp", "1753576813"); // 3
        Instrmt_33_set.insert("1753576813");
        Instrmt_33.add_attribute("RepoTrm", "957423337"); // 3
        Instrmt_33_set.insert("957423337");
        Instrmt_33.add_attribute("RepoRt", "13387116.520000"); // 3
        Instrmt_33_set.insert("13387116.520000");
        Instrmt_33.add_attribute("Fctr", "8761399.270000"); // 3
        Instrmt_33_set.insert("8761399.270000");
        Instrmt_33.add_attribute("CrdRtg", "CreditRating_t_341860678"); // 3
        Instrmt_33_set.insert("CreditRating_t_341860678");
        Instrmt_33.add_attribute("Rgstry", "InstrRegistry_t_1508605232"); // 3
        Instrmt_33_set.insert("InstrRegistry_t_1508605232");
        Instrmt_33.add_attribute("IssuCtry", "551563676"); // 3
        Instrmt_33_set.insert("551563676");
        Instrmt_33.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1647163768"); // 3
        Instrmt_33_set.insert("StateOrProvinceOfIssue_t_1647163768");
        Instrmt_33.add_attribute("Lcl", "LocaleOfIssue_t_1635662084"); // 3
        Instrmt_33_set.insert("LocaleOfIssue_t_1635662084");
        Instrmt_33.add_attribute("Redeem", "RedemptionDate_t_140325110"); // 3
        Instrmt_33_set.insert("RedemptionDate_t_140325110");
        Instrmt_33.add_attribute("StrkPx", "3469032.090000"); // 3
        Instrmt_33_set.insert("3469032.090000");
        Instrmt_33.add_attribute("StrkCcy", "CHF"); // 3
        Instrmt_33_set.insert("CHF");
        Instrmt_33.add_attribute("StrkMult", "3406501.130000"); // 3
        Instrmt_33_set.insert("3406501.130000");
        Instrmt_33.add_attribute("StrkValu", "18574185.660000"); // 3
        Instrmt_33_set.insert("18574185.660000");
        Instrmt_33.add_attribute("StrkPxDtrmnMeth", "4"); // 3
        Instrmt_33_set.insert("4");
        Instrmt_33.add_attribute("StrkPxBndryMeth", "2"); // 3
        Instrmt_33_set.insert("2");
        Instrmt_33.add_attribute("StrkPxBndryPrcsn", "17618365.060000"); // 3
        Instrmt_33_set.insert("17618365.060000");
        Instrmt_33.add_attribute("PxDtrmnMeth", "3"); // 3
        Instrmt_33_set.insert("3");
        Instrmt_33.add_attribute("OptAt", "666633712"); // 3
        Instrmt_33_set.insert("666633712");
        Instrmt_33.add_attribute("Mult", "4200799.950000"); // 3
        Instrmt_33_set.insert("4200799.950000");
        Instrmt_33.add_attribute("MultTyp", "0"); // 3
        Instrmt_33_set.insert("0");
        Instrmt_33.add_attribute("FlowSchedTyp", "1"); // 3
        Instrmt_33_set.insert("1");
        Instrmt_33.add_attribute("MinPxIncr", "11907337.830000"); // 3
        Instrmt_33_set.insert("11907337.830000");
        Instrmt_33.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_231966781"); // 3
        Instrmt_33_set.insert("MinPriceIncrementAmount_t_231966781");
        Instrmt_33.add_attribute("UOM", "MMbbl"); // 3
        Instrmt_33_set.insert("MMbbl");
        Instrmt_33.add_attribute("UOMQty", "13956486.730000"); // 3
        Instrmt_33_set.insert("13956486.730000");
        Instrmt_33.add_attribute("PxUOM", "Bbl"); // 3
        Instrmt_33_set.insert("Bbl");
        Instrmt_33.add_attribute("PxUOMQty", "19480348.170000"); // 3
        Instrmt_33_set.insert("19480348.170000");
        Instrmt_33.add_attribute("SettlMeth", "C"); // 3
        Instrmt_33_set.insert("C");
        Instrmt_33.add_attribute("ExerStyle", "1"); // 3
        Instrmt_33_set.insert("1");
        Instrmt_33.add_attribute("OptPayoutTyp", "3"); // 3
        Instrmt_33_set.insert("3");
        Instrmt_33.add_attribute("OptPayAmt", "OptPayoutAmount_t_1193233718"); // 3
        Instrmt_33_set.insert("OptPayoutAmount_t_1193233718");
        Instrmt_33.add_attribute("PxQteMeth", "INX"); // 3
        Instrmt_33_set.insert("INX");
        Instrmt_33.add_attribute("ValMeth", "FUTDA"); // 3
        Instrmt_33_set.insert("FUTDA");
        Instrmt_33.add_attribute("ListMeth", "0"); // 3
        Instrmt_33_set.insert("0");
        Instrmt_33.add_attribute("CapPx", "9914334.540000"); // 3
        Instrmt_33_set.insert("9914334.540000");
        Instrmt_33.add_attribute("FlrPx", "8343479.380000"); // 3
        Instrmt_33_set.insert("8343479.380000");
        Instrmt_33.add_attribute("PutCall", "0"); // 3
        Instrmt_33_set.insert("0");
        Instrmt_33.add_attribute("FlexInd", "true"); // 3
        Instrmt_33_set.insert("true");
        Instrmt_33.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_33_set.insert("true");
        Instrmt_33.add_attribute("TmUnit", "H"); // 3
        Instrmt_33_set.insert("H");
        Instrmt_33.add_attribute("CpnRt", "5305307.950000"); // 3
        Instrmt_33_set.insert("5305307.950000");
        Instrmt_33.add_attribute("Exch", "SecurityExchange_t_562308235"); // 3
        Instrmt_33_set.insert("SecurityExchange_t_562308235");
        Instrmt_33.add_attribute("PosLmt", "1722327839"); // 3
        Instrmt_33_set.insert("1722327839");
        Instrmt_33.add_attribute("NTPosLmt", "240465713"); // 3
        Instrmt_33_set.insert("240465713");
        Instrmt_33.add_attribute("Issr", "Issuer_t_288673014"); // 3
        Instrmt_33_set.insert("Issuer_t_288673014");
        Instrmt_33.add_attribute("EncIssrLen", "1538096172"); // 3
        Instrmt_33_set.insert("1538096172");
        Instrmt_33.add_attribute("EncIssr", "EncodedIssuer_t_2002302219"); // 3
        Instrmt_33_set.insert("EncodedIssuer_t_2002302219");
        Instrmt_33.add_attribute("Desc", "SecurityDesc_t_4147089"); // 3
        Instrmt_33_set.insert("SecurityDesc_t_4147089");
        Instrmt_33.add_attribute("EncSecDescLen", "57246236"); // 3
        Instrmt_33_set.insert("57246236");
        Instrmt_33.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_274898567"); // 3
        Instrmt_33_set.insert("EncodedSecurityDesc_t_274898567");
        Instrmt_33.add_attribute("Pool", "Pool_t_1064684673"); // 3
        Instrmt_33_set.insert("Pool_t_1064684673");
        Instrmt_33.add_attribute("CSetMo", "1711867698"); // 3
        Instrmt_33_set.insert("1711867698");
        Instrmt_33.add_attribute("CPPgm", "99"); // 3
        Instrmt_33_set.insert("99");
        Instrmt_33.add_attribute("CPRegT", "CPRegType_t_1296651454"); // 3
        Instrmt_33_set.insert("CPRegType_t_1296651454");
        Instrmt_33.add_attribute("Dated", "DatedDate_t_207437662"); // 3
        Instrmt_33_set.insert("DatedDate_t_207437662");
        Instrmt_33.add_attribute("IntAcrl", "InterestAccrualDate_t_713797375"); // 3
        Instrmt_33_set.insert("InterestAccrualDate_t_713797375");
        all_values.push_back(Instrmt_33_set);
        all_compo_names.insert("Instrmt_33_set");

        {
          xml_element AID_36{"AID"};
          multiset<string> AID_36_set;
          AID_36.add_attribute("AltID", "SecurityAltID_t_1602176195"); // 4
          AID_36_set.insert("SecurityAltID_t_1602176195");
          AID_36.add_attribute("AltIDSrc", "G"); // 4
          AID_36_set.insert("G");
          all_values.push_back(AID_36_set);
          all_compo_names.insert("AID_36_set");

          Instrmt_33.add_element(AID_36);
        }
        {
          xml_element SecXML_36{"SecXML"};
          multiset<string> SecXML_36_set;
          SecXML_36.add_attribute("Schema", "SecurityXMLSchema_t_949607756"); // 4
          SecXML_36_set.insert("SecurityXMLSchema_t_949607756");
          all_values.push_back(SecXML_36_set);
          all_compo_names.insert("SecXML_36_set");

          Instrmt_33.add_element(SecXML_36);
        }
        {
          xml_element Evnt_36{"Evnt"};
          multiset<string> Evnt_36_set;
          Evnt_36.add_attribute("EventTyp", "13"); // 4
          Evnt_36_set.insert("13");
          Evnt_36.add_attribute("Dt", "EventDate_t_1562116814"); // 4
          Evnt_36_set.insert("EventDate_t_1562116814");
          Evnt_36.add_attribute("Tm", "EventTime_t_2142841474"); // 4
          Evnt_36_set.insert("EventTime_t_2142841474");
          Evnt_36.add_attribute("Px", "13766046.340000"); // 4
          Evnt_36_set.insert("13766046.340000");
          Evnt_36.add_attribute("Txt", "EventText_t_1844901076"); // 4
          Evnt_36_set.insert("EventText_t_1844901076");
          all_values.push_back(Evnt_36_set);
          all_compo_names.insert("Evnt_36_set");

          Instrmt_33.add_element(Evnt_36);
        }
        {
          xml_element Pty_183{"Pty"};
          multiset<string> Pty_183_set;
          Pty_183.add_attribute("ID", "InstrumentPartyID_t_1530452222"); // 4
          Pty_183_set.insert("InstrumentPartyID_t_1530452222");
          Pty_183.add_attribute("Src", "9"); // 4
          Pty_183_set.insert("9");
          Pty_183.add_attribute("R", "15"); // 4
          Pty_183_set.insert("15");
          all_values.push_back(Pty_183_set);
          all_compo_names.insert("Pty_183_set");

          {
            xml_element Sub_183{"Sub"};
            multiset<string> Sub_183_set;
            Sub_183.add_attribute("ID", "InstrumentPartySubID_t_417743091"); // 5
            Sub_183_set.insert("InstrumentPartySubID_t_417743091");
            Sub_183.add_attribute("Typ", "25"); // 5
            Sub_183_set.insert("25");
            all_values.push_back(Sub_183_set);
            all_compo_names.insert("Sub_183_set");

            Pty_183.add_element(Sub_183);
          }
          Instrmt_33.add_element(Pty_183);
        }
        {
          xml_element CmplxEvnt_33{"CmplxEvnt"};
          multiset<string> CmplxEvnt_33_set;
          CmplxEvnt_33.add_attribute("Typ", "1"); // 4
          CmplxEvnt_33_set.insert("1");
          CmplxEvnt_33.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1799420817"); // 4
          CmplxEvnt_33_set.insert("ComplexOptPayoutAmount_t_1799420817");
          CmplxEvnt_33.add_attribute("Px", "12306971.250000"); // 4
          CmplxEvnt_33_set.insert("12306971.250000");
          CmplxEvnt_33.add_attribute("PxBndryMeth", "5"); // 4
          CmplxEvnt_33_set.insert("5");
          CmplxEvnt_33.add_attribute("PxBndryPrcsn", "13742650.080000"); // 4
          CmplxEvnt_33_set.insert("13742650.080000");
          CmplxEvnt_33.add_attribute("PxTmTyp", "3"); // 4
          CmplxEvnt_33_set.insert("3");
          CmplxEvnt_33.add_attribute("Cond", "2"); // 4
          CmplxEvnt_33_set.insert("2");
          all_values.push_back(CmplxEvnt_33_set);
          all_compo_names.insert("CmplxEvnt_33_set");

          {
            xml_element EvntDts_33{"EvntDts"};
            multiset<string> EvntDts_33_set;
            EvntDts_33.add_attribute("StartDt", "ComplexEventStartDate_t_764877533"); // 5
            EvntDts_33_set.insert("ComplexEventStartDate_t_764877533");
            EvntDts_33.add_attribute("EndDt", "ComplexEventEndDate_t_1325981410"); // 5
            EvntDts_33_set.insert("ComplexEventEndDate_t_1325981410");
            all_values.push_back(EvntDts_33_set);
            all_compo_names.insert("EvntDts_33_set");

            {
              xml_element EvntTms_33{"EvntTms"};
              multiset<string> EvntTms_33_set;
              EvntTms_33.add_attribute("StartTm", "214083104"); // 6
              EvntTms_33_set.insert("214083104");
              EvntTms_33.add_attribute("EndTm", "822123769"); // 6
              EvntTms_33_set.insert("822123769");
              all_values.push_back(EvntTms_33_set);
              all_compo_names.insert("EvntTms_33_set");

              EvntDts_33.add_element(EvntTms_33);
            }
            CmplxEvnt_33.add_element(EvntDts_33);
          }
          Instrmt_33.add_element(CmplxEvnt_33);
        }
        QuotEntry_0.add_element(Instrmt_33);
      }
      {
        xml_element Leg_45{"Leg"};
        multiset<string> Leg_45_set;
        Leg_45.add_attribute("Sym", "LegSymbol_t_1600879977"); // 3
        Leg_45_set.insert("LegSymbol_t_1600879977");
        Leg_45.add_attribute("Sfx", "CD"); // 3
        Leg_45_set.insert("CD");
        Leg_45.add_attribute("ID", "LegSecurityID_t_386507819"); // 3
        Leg_45_set.insert("LegSecurityID_t_386507819");
        Leg_45.add_attribute("Src", "L"); // 3
        Leg_45_set.insert("L");
        Leg_45.add_attribute("Prod", "8"); // 3
        Leg_45_set.insert("8");
        Leg_45.add_attribute("CFI", "LegCFICode_t_593945481"); // 3
        Leg_45_set.insert("LegCFICode_t_593945481");
        Leg_45.add_attribute("SecTyp", "TB"); // 3
        Leg_45_set.insert("TB");
        Leg_45.add_attribute("SecSubTyp", "LegSecuritySubType_t_2030111780"); // 3
        Leg_45_set.insert("LegSecuritySubType_t_2030111780");
        Leg_45.add_attribute("MMY", "601934313"); // 3
        Leg_45_set.insert("601934313");
        Leg_45.add_attribute("Mat", "LegMaturityDate_t_434950163"); // 3
        Leg_45_set.insert("LegMaturityDate_t_434950163");
        Leg_45.add_attribute("MatTm", "1776404545"); // 3
        Leg_45_set.insert("1776404545");
        Leg_45.add_attribute("CpnPmt", "LegCouponPaymentDate_t_16567479"); // 3
        Leg_45_set.insert("LegCouponPaymentDate_t_16567479");
        Leg_45.add_attribute("Issued", "LegIssueDate_t_430307989"); // 3
        Leg_45_set.insert("LegIssueDate_t_430307989");
        Leg_45.add_attribute("RepoCollSecTyp", "1005525531"); // 3
        Leg_45_set.insert("1005525531");
        Leg_45.add_attribute("RepoTrm", "1861468555"); // 3
        Leg_45_set.insert("1861468555");
        Leg_45.add_attribute("RepoRt", "19607602.110000"); // 3
        Leg_45_set.insert("19607602.110000");
        Leg_45.add_attribute("Fctr", "12260799.720000"); // 3
        Leg_45_set.insert("12260799.720000");
        Leg_45.add_attribute("CrdRtg", "LegCreditRating_t_245750273"); // 3
        Leg_45_set.insert("LegCreditRating_t_245750273");
        Leg_45.add_attribute("Rgstry", "LegInstrRegistry_t_231019654"); // 3
        Leg_45_set.insert("LegInstrRegistry_t_231019654");
        Leg_45.add_attribute("Ctry", "1926246302"); // 3
        Leg_45_set.insert("1926246302");
        Leg_45.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1752188687"); // 3
        Leg_45_set.insert("LegStateOrProvinceOfIssue_t_1752188687");
        Leg_45.add_attribute("Lcl", "LegLocaleOfIssue_t_2030440471"); // 3
        Leg_45_set.insert("LegLocaleOfIssue_t_2030440471");
        Leg_45.add_attribute("Redeem", "LegRedemptionDate_t_1009459780"); // 3
        Leg_45_set.insert("LegRedemptionDate_t_1009459780");
        Leg_45.add_attribute("Strk", "16734516.880000"); // 3
        Leg_45_set.insert("16734516.880000");
        Leg_45.add_attribute("StrkCcy", "JPY"); // 3
        Leg_45_set.insert("JPY");
        Leg_45.add_attribute("OptA", "1883387703"); // 3
        Leg_45_set.insert("1883387703");
        Leg_45.add_attribute("Cmult", "20220993.650000"); // 3
        Leg_45_set.insert("20220993.650000");
        Leg_45.add_attribute("MultTyp", "2"); // 3
        Leg_45_set.insert("2");
        Leg_45.add_attribute("FlowSchedTyp", "3"); // 3
        Leg_45_set.insert("3");
        Leg_45.add_attribute("UOM", "MMBtu"); // 3
        Leg_45_set.insert("MMBtu");
        Leg_45.add_attribute("UOMQty", "11125167.090000"); // 3
        Leg_45_set.insert("11125167.090000");
        Leg_45.add_attribute("PxUOM", "oz_tr"); // 3
        Leg_45_set.insert("oz_tr");
        Leg_45.add_attribute("PxUOMQty", "10832473.060000"); // 3
        Leg_45_set.insert("10832473.060000");
        Leg_45.add_attribute("TmUnit", "Yr"); // 3
        Leg_45_set.insert("Yr");
        Leg_45.add_attribute("ExerStyle", "0"); // 3
        Leg_45_set.insert("0");
        Leg_45.add_attribute("CpnRt", "16771927.870000"); // 3
        Leg_45_set.insert("16771927.870000");
        Leg_45.add_attribute("Exch", "LegSecurityExchange_t_1516887796"); // 3
        Leg_45_set.insert("LegSecurityExchange_t_1516887796");
        Leg_45.add_attribute("Issr", "LegIssuer_t_1539318654"); // 3
        Leg_45_set.insert("LegIssuer_t_1539318654");
        Leg_45.add_attribute("EncLegIssrLen", "131643452"); // 3
        Leg_45_set.insert("131643452");
        Leg_45.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1951837959"); // 3
        Leg_45_set.insert("EncodedLegIssuer_t_1951837959");
        Leg_45.add_attribute("Desc", "LegSecurityDesc_t_1168239551"); // 3
        Leg_45_set.insert("LegSecurityDesc_t_1168239551");
        Leg_45.add_attribute("EncLegSecDescLen", "148210931"); // 3
        Leg_45_set.insert("148210931");
        Leg_45.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_234662300"); // 3
        Leg_45_set.insert("EncodedLegSecurityDesc_t_234662300");
        Leg_45.add_attribute("RatioQty", "262814.350000"); // 3
        Leg_45_set.insert("262814.350000");
        Leg_45.add_attribute("Side", "F"); // 3
        Leg_45_set.insert("F");
        Leg_45.add_attribute("Ccy", "EUR"); // 3
        Leg_45_set.insert("EUR");
        Leg_45.add_attribute("Pool", "LegPool_t_107946111"); // 3
        Leg_45_set.insert("LegPool_t_107946111");
        Leg_45.add_attribute("Dated", "LegDatedDate_t_278958518"); // 3
        Leg_45_set.insert("LegDatedDate_t_278958518");
        Leg_45.add_attribute("CSetMo", "1031124061"); // 3
        Leg_45_set.insert("1031124061");
        Leg_45.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1860134798"); // 3
        Leg_45_set.insert("LegInterestAccrualDate_t_1860134798");
        Leg_45.add_attribute("PutCall", "161915341"); // 3
        Leg_45_set.insert("161915341");
        Leg_45.add_attribute("LegOptionRatio", "20405838.410000"); // 3
        Leg_45_set.insert("20405838.410000");
        Leg_45.add_attribute("Px", "13861028.380000"); // 3
        Leg_45_set.insert("13861028.380000");
        all_values.push_back(Leg_45_set);
        all_compo_names.insert("Leg_45_set");

        {
          xml_element LegAID_45{"LegAID"};
          multiset<string> LegAID_45_set;
          LegAID_45.add_attribute("SecAltID", "LegSecurityAltID_t_1419137173"); // 4
          LegAID_45_set.insert("LegSecurityAltID_t_1419137173");
          LegAID_45.add_attribute("SecAltIDSrc", "9"); // 4
          LegAID_45_set.insert("9");
          all_values.push_back(LegAID_45_set);
          all_compo_names.insert("LegAID_45_set");

          Leg_45.add_element(LegAID_45);
        }
        QuotEntry_0.add_element(Leg_45);
      }
      QuotSet_0.add_element(QuotEntry_0);
    }
    elt.add_element(QuotSet_0);
  } // end QuotSet
  { // QuotSet
    xml_element QuotSet_1{"QuotSet"};
    multiset<string> QuotSet_1_set;
    QuotSet_1.add_attribute("SetID", "QuoteSetID_t_1122006894"); // 1
    QuotSet_1_set.insert("QuoteSetID_t_1122006894");
    QuotSet_1.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1293752890"); // 1
    QuotSet_1_set.insert("QuoteSetValidUntilTime_t_1293752890");
    QuotSet_1.add_attribute("TotNoQuotEntries", "1885359544"); // 1
    QuotSet_1_set.insert("1885359544");
    QuotSet_1.add_attribute("LastFragment", "N"); // 1
    QuotSet_1_set.insert("N");
    all_values.push_back(QuotSet_1_set);
    all_compo_names.insert("QuotSet_1_set");

    {
      xml_element Undly_46{"Undly"};
      multiset<string> Undly_46_set;
      Undly_46.add_attribute("Sym", "UnderlyingSymbol_t_1990492377"); // 2
      Undly_46_set.insert("UnderlyingSymbol_t_1990492377");
      Undly_46.add_attribute("Sfx", "CD"); // 2
      Undly_46_set.insert("CD");
      Undly_46.add_attribute("ID", "UnderlyingSecurityID_t_153265344"); // 2
      Undly_46_set.insert("UnderlyingSecurityID_t_153265344");
      Undly_46.add_attribute("Src", "2"); // 2
      Undly_46_set.insert("2");
      Undly_46.add_attribute("Prod", "12"); // 2
      Undly_46_set.insert("12");
      Undly_46.add_attribute("CFI", "UnderlyingCFICode_t_1809955866"); // 2
      Undly_46_set.insert("UnderlyingCFICode_t_1809955866");
      Undly_46.add_attribute("SecTyp", "TBOND"); // 2
      Undly_46_set.insert("TBOND");
      Undly_46.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_103858495"); // 2
      Undly_46_set.insert("UnderlyingSecuritySubType_t_103858495");
      Undly_46.add_attribute("MMY", "1201790873"); // 2
      Undly_46_set.insert("1201790873");
      Undly_46.add_attribute("Mat", "UnderlyingMaturityDate_t_587608627"); // 2
      Undly_46_set.insert("UnderlyingMaturityDate_t_587608627");
      Undly_46.add_attribute("MatTm", "2055696454"); // 2
      Undly_46_set.insert("2055696454");
      Undly_46.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_222546776"); // 2
      Undly_46_set.insert("UnderlyingCouponPaymentDate_t_222546776");
      Undly_46.add_attribute("RestrctTyp", "MM"); // 2
      Undly_46_set.insert("MM");
      Undly_46.add_attribute("Snrty", "SR"); // 2
      Undly_46_set.insert("SR");
      Undly_46.add_attribute("NotlPctOut", "2488282.110000"); // 2
      Undly_46_set.insert("2488282.110000");
      Undly_46.add_attribute("OrigNotlPctOut", "5980153.970000"); // 2
      Undly_46_set.insert("5980153.970000");
      Undly_46.add_attribute("AttchPnt", "1908139.690000"); // 2
      Undly_46_set.insert("1908139.690000");
      Undly_46.add_attribute("DetchPnt", "15011896.180000"); // 2
      Undly_46_set.insert("15011896.180000");
      Undly_46.add_attribute("Issued", "UnderlyingIssueDate_t_705961508"); // 2
      Undly_46_set.insert("UnderlyingIssueDate_t_705961508");
      Undly_46.add_attribute("RepoCollSecTyp", "469772487"); // 2
      Undly_46_set.insert("469772487");
      Undly_46.add_attribute("RepoTrm", "384830032"); // 2
      Undly_46_set.insert("384830032");
      Undly_46.add_attribute("RepoRt", "4186126.590000"); // 2
      Undly_46_set.insert("4186126.590000");
      Undly_46.add_attribute("Fctr", "6316878.290000"); // 2
      Undly_46_set.insert("6316878.290000");
      Undly_46.add_attribute("CrdRtg", "UnderlyingCreditRating_t_277930225"); // 2
      Undly_46_set.insert("UnderlyingCreditRating_t_277930225");
      Undly_46.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1804715497"); // 2
      Undly_46_set.insert("UnderlyingInstrRegistry_t_1804715497");
      Undly_46.add_attribute("Ctry", "2050825002"); // 2
      Undly_46_set.insert("2050825002");
      Undly_46.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_504169389"); // 2
      Undly_46_set.insert("UnderlyingStateOrProvinceOfIssue_t_504169389");
      Undly_46.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_779238743"); // 2
      Undly_46_set.insert("UnderlyingLocaleOfIssue_t_779238743");
      Undly_46.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1197094245"); // 2
      Undly_46_set.insert("UnderlyingRedemptionDate_t_1197094245");
      Undly_46.add_attribute("StrkPx", "2420452.860000"); // 2
      Undly_46_set.insert("2420452.860000");
      Undly_46.add_attribute("StrkCcy", "JPY"); // 2
      Undly_46_set.insert("JPY");
      Undly_46.add_attribute("OptA", "1092437892"); // 2
      Undly_46_set.insert("1092437892");
      Undly_46.add_attribute("Mult", "20044981.410000"); // 2
      Undly_46_set.insert("20044981.410000");
      Undly_46.add_attribute("MultTyp", "0"); // 2
      Undly_46_set.insert("0");
      Undly_46.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_46_set.insert("4");
      Undly_46.add_attribute("UOM", "Gal"); // 2
      Undly_46_set.insert("Gal");
      Undly_46.add_attribute("UOMQty", "2748405.350000"); // 2
      Undly_46_set.insert("2748405.350000");
      Undly_46.add_attribute("PxUOM", "Gal"); // 2
      Undly_46_set.insert("Gal");
      Undly_46.add_attribute("PxUOMQty", "7212775.850000"); // 2
      Undly_46_set.insert("7212775.850000");
      Undly_46.add_attribute("TmUnit", "Min"); // 2
      Undly_46_set.insert("Min");
      Undly_46.add_attribute("ExerStyle", "2"); // 2
      Undly_46_set.insert("2");
      Undly_46.add_attribute("CpnRt", "9438243.610000"); // 2
      Undly_46_set.insert("9438243.610000");
      Undly_46.add_attribute("Exch", "UnderlyingSecurityExchange_t_1598268721"); // 2
      Undly_46_set.insert("UnderlyingSecurityExchange_t_1598268721");
      Undly_46.add_attribute("Issr", "UnderlyingIssuer_t_1981838646"); // 2
      Undly_46_set.insert("UnderlyingIssuer_t_1981838646");
      Undly_46.add_attribute("EncUndIssrLen", "1192652573"); // 2
      Undly_46_set.insert("1192652573");
      Undly_46.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_48800470"); // 2
      Undly_46_set.insert("EncodedUnderlyingIssuer_t_48800470");
      Undly_46.add_attribute("Desc", "UnderlyingSecurityDesc_t_25168967"); // 2
      Undly_46_set.insert("UnderlyingSecurityDesc_t_25168967");
      Undly_46.add_attribute("EncUndSecDescLen", "546358543"); // 2
      Undly_46_set.insert("546358543");
      Undly_46.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_754761978"); // 2
      Undly_46_set.insert("EncodedUnderlyingSecurityDesc_t_754761978");
      Undly_46.add_attribute("CPPgm", "UnderlyingCPProgram_t_494941455"); // 2
      Undly_46_set.insert("UnderlyingCPProgram_t_494941455");
      Undly_46.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_931188575"); // 2
      Undly_46_set.insert("UnderlyingCPRegType_t_931188575");
      Undly_46.add_attribute("AllocPct", "11733746.370000"); // 2
      Undly_46_set.insert("11733746.370000");
      Undly_46.add_attribute("Ccy", "EUR"); // 2
      Undly_46_set.insert("EUR");
      Undly_46.add_attribute("Qty", "8306064.870000"); // 2
      Undly_46_set.insert("8306064.870000");
      Undly_46.add_attribute("SettlTyp", "2"); // 2
      Undly_46_set.insert("2");
      Undly_46.add_attribute("CashAmt", "UnderlyingCashAmount_t_1713288190"); // 2
      Undly_46_set.insert("UnderlyingCashAmount_t_1713288190");
      Undly_46.add_attribute("CashTyp", "FIXED"); // 2
      Undly_46_set.insert("FIXED");
      Undly_46.add_attribute("Px", "795812.350000"); // 2
      Undly_46_set.insert("795812.350000");
      Undly_46.add_attribute("DirtPx", "19553334.760000"); // 2
      Undly_46_set.insert("19553334.760000");
      Undly_46.add_attribute("EndPx", "13135943.800000"); // 2
      Undly_46_set.insert("13135943.800000");
      Undly_46.add_attribute("StartVal", "UnderlyingStartValue_t_1119684209"); // 2
      Undly_46_set.insert("UnderlyingStartValue_t_1119684209");
      Undly_46.add_attribute("CurVal", "UnderlyingCurrentValue_t_900287720"); // 2
      Undly_46_set.insert("UnderlyingCurrentValue_t_900287720");
      Undly_46.add_attribute("EndVal", "UnderlyingEndValue_t_1170608873"); // 2
      Undly_46_set.insert("UnderlyingEndValue_t_1170608873");
      Undly_46.add_attribute("AdjQty", "9385595.700000"); // 2
      Undly_46_set.insert("9385595.700000");
      Undly_46.add_attribute("FxRate", "5796963.110000"); // 2
      Undly_46_set.insert("5796963.110000");
      Undly_46.add_attribute("FxRateCalc", "D"); // 2
      Undly_46_set.insert("D");
      Undly_46.add_attribute("CapValu", "UnderlyingCapValue_t_1213400106"); // 2
      Undly_46_set.insert("UnderlyingCapValue_t_1213400106");
      Undly_46.add_attribute("SetMeth", "UnderlyingSettlMethod_t_362963397"); // 2
      Undly_46_set.insert("UnderlyingSettlMethod_t_362963397");
      Undly_46.add_attribute("PutCall", "1411373170"); // 2
      Undly_46_set.insert("1411373170");
      all_values.push_back(Undly_46_set);
      all_compo_names.insert("Undly_46_set");

      {
        xml_element UndAID_46{"UndAID"};
        multiset<string> UndAID_46_set;
        UndAID_46.add_attribute("AltID", "UnderlyingSecurityAltID_t_2075849268"); // 3
        UndAID_46_set.insert("UnderlyingSecurityAltID_t_2075849268");
        UndAID_46.add_attribute("AltIDSrc", "M"); // 3
        UndAID_46_set.insert("M");
        all_values.push_back(UndAID_46_set);
        all_compo_names.insert("UndAID_46_set");

        Undly_46.add_element(UndAID_46);
      }
      {
        xml_element Stip_73{"Stip"};
        multiset<string> Stip_73_set;
        Stip_73.add_attribute("Typ", "REDEMPTION"); // 3
        Stip_73_set.insert("REDEMPTION");
        Stip_73.add_attribute("Val", "UnderlyingStipValue_t_1526634341"); // 3
        Stip_73_set.insert("UnderlyingStipValue_t_1526634341");
        all_values.push_back(Stip_73_set);
        all_compo_names.insert("Stip_73_set");

        Undly_46.add_element(Stip_73);
      }
      {
        xml_element Pty_184{"Pty"};
        multiset<string> Pty_184_set;
        Pty_184.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2036281935"); // 3
        Pty_184_set.insert("UnderlyingInstrumentPartyID_t_2036281935");
        Pty_184.add_attribute("Src", "A"); // 3
        Pty_184_set.insert("A");
        Pty_184.add_attribute("R", "35"); // 3
        Pty_184_set.insert("35");
        all_values.push_back(Pty_184_set);
        all_compo_names.insert("Pty_184_set");

        {
          xml_element Sub_184{"Sub"};
          multiset<string> Sub_184_set;
          Sub_184.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2061450903"); // 4
          Sub_184_set.insert("UnderlyingInstrumentPartySubID_t_2061450903");
          Sub_184.add_attribute("Typ", "6"); // 4
          Sub_184_set.insert("6");
          all_values.push_back(Sub_184_set);
          all_compo_names.insert("Sub_184_set");

          Pty_184.add_element(Sub_184);
        }
        Undly_46.add_element(Pty_184);
      }
      QuotSet_1.add_element(Undly_46);
    }
    {
      xml_element QuotEntry_1{"QuotEntry"};
      multiset<string> QuotEntry_1_set;
      QuotEntry_1.add_attribute("EntryID", "QuoteEntryID_t_182713142"); // 2
      QuotEntry_1_set.insert("QuoteEntryID_t_182713142");
      QuotEntry_1.add_attribute("BidPx", "4089087.100000"); // 2
      QuotEntry_1_set.insert("4089087.100000");
      QuotEntry_1.add_attribute("OfrPx", "7304299.280000"); // 2
      QuotEntry_1_set.insert("7304299.280000");
      QuotEntry_1.add_attribute("BidSz", "13560877.790000"); // 2
      QuotEntry_1_set.insert("13560877.790000");
      QuotEntry_1.add_attribute("OfrSz", "15355379.940000"); // 2
      QuotEntry_1_set.insert("15355379.940000");
      QuotEntry_1.add_attribute("ValidUntilTm", "ValidUntilTime_t_1939548729"); // 2
      QuotEntry_1_set.insert("ValidUntilTime_t_1939548729");
      QuotEntry_1.add_attribute("BidSpotRt", "392106.180000"); // 2
      QuotEntry_1_set.insert("392106.180000");
      QuotEntry_1.add_attribute("OfrSpotRt", "4180249.840000"); // 2
      QuotEntry_1_set.insert("4180249.840000");
      QuotEntry_1.add_attribute("BidFwdPnts", "15053532.710000"); // 2
      QuotEntry_1_set.insert("15053532.710000");
      QuotEntry_1.add_attribute("OfrFwdPnts", "16490558.490000"); // 2
      QuotEntry_1_set.insert("16490558.490000");
      QuotEntry_1.add_attribute("MidPx", "4976062.200000"); // 2
      QuotEntry_1_set.insert("4976062.200000");
      QuotEntry_1.add_attribute("BidYld", "13132031.000000"); // 2
      QuotEntry_1_set.insert("13132031.000000");
      QuotEntry_1.add_attribute("MidYld", "8151665.810000"); // 2
      QuotEntry_1_set.insert("8151665.810000");
      QuotEntry_1.add_attribute("OfrYld", "16172904.290000"); // 2
      QuotEntry_1_set.insert("16172904.290000");
      QuotEntry_1.add_attribute("TxnTm", "TransactTime_t_66007172"); // 2
      QuotEntry_1_set.insert("TransactTime_t_66007172");
      QuotEntry_1.add_attribute("SesID", "5"); // 2
      QuotEntry_1_set.insert("5");
      QuotEntry_1.add_attribute("SesSub", "3"); // 2
      QuotEntry_1_set.insert("3");
      QuotEntry_1.add_attribute("SettlDt", "SettlDate_t_645703484"); // 2
      QuotEntry_1_set.insert("SettlDate_t_645703484");
      QuotEntry_1.add_attribute("OrdTyp", "9"); // 2
      QuotEntry_1_set.insert("9");
      QuotEntry_1.add_attribute("SettlDt2", "SettlDate2_t_1621766458"); // 2
      QuotEntry_1_set.insert("SettlDate2_t_1621766458");
      QuotEntry_1.add_attribute("Qty2", "10086668.810000"); // 2
      QuotEntry_1_set.insert("10086668.810000");
      QuotEntry_1.add_attribute("BidFwdPnts2", "19397605.620000"); // 2
      QuotEntry_1_set.insert("19397605.620000");
      QuotEntry_1.add_attribute("OfrFwdPnts2", "15501320.780000"); // 2
      QuotEntry_1_set.insert("15501320.780000");
      QuotEntry_1.add_attribute("Ccy", "JPY"); // 2
      QuotEntry_1_set.insert("JPY");
      QuotEntry_1.add_attribute("BkngTyp", "0"); // 2
      QuotEntry_1_set.insert("0");
      QuotEntry_1.add_attribute("Cpcty", "R"); // 2
      QuotEntry_1_set.insert("R");
      QuotEntry_1.add_attribute("Rstctions", "6"); // 2
      QuotEntry_1_set.insert("6");
      all_values.push_back(QuotEntry_1_set);
      all_compo_names.insert("QuotEntry_1_set");

      {
        xml_element Instrmt_34{"Instrmt"};
        multiset<string> Instrmt_34_set;
        Instrmt_34.add_attribute("Sym", "Symbol_t_357233935"); // 3
        Instrmt_34_set.insert("Symbol_t_357233935");
        Instrmt_34.add_attribute("Sfx", "WI"); // 3
        Instrmt_34_set.insert("WI");
        Instrmt_34.add_attribute("ID", "SecurityID_t_1199598608"); // 3
        Instrmt_34_set.insert("SecurityID_t_1199598608");
        Instrmt_34.add_attribute("Src", "M"); // 3
        Instrmt_34_set.insert("M");
        Instrmt_34.add_attribute("Prod", "12"); // 3
        Instrmt_34_set.insert("12");
        Instrmt_34.add_attribute("ProdCmplx", "ProductComplex_t_1930028536"); // 3
        Instrmt_34_set.insert("ProductComplex_t_1930028536");
        Instrmt_34.add_attribute("SecGrp", "SecurityGroup_t_1896034857"); // 3
        Instrmt_34_set.insert("SecurityGroup_t_1896034857");
        Instrmt_34.add_attribute("CFI", "CFICode_t_662838769"); // 3
        Instrmt_34_set.insert("CFICode_t_662838769");
        Instrmt_34.add_attribute("SecTyp", "TNOTE"); // 3
        Instrmt_34_set.insert("TNOTE");
        Instrmt_34.add_attribute("SubTyp", "SecuritySubType_t_1935245475"); // 3
        Instrmt_34_set.insert("SecuritySubType_t_1935245475");
        Instrmt_34.add_attribute("MMY", "1080863754"); // 3
        Instrmt_34_set.insert("1080863754");
        Instrmt_34.add_attribute("MatDt", "MaturityDate_t_1079963240"); // 3
        Instrmt_34_set.insert("MaturityDate_t_1079963240");
        Instrmt_34.add_attribute("MatTm", "1436817676"); // 3
        Instrmt_34_set.insert("1436817676");
        Instrmt_34.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1578469974"); // 3
        Instrmt_34_set.insert("SettleOnOpenFlag_t_1578469974");
        Instrmt_34.add_attribute("AsgnMeth", "245682692"); // 3
        Instrmt_34_set.insert("245682692");
        Instrmt_34.add_attribute("Status", "2"); // 3
        Instrmt_34_set.insert("2");
        Instrmt_34.add_attribute("CpnPmt", "CouponPaymentDate_t_1048276755"); // 3
        Instrmt_34_set.insert("CouponPaymentDate_t_1048276755");
        Instrmt_34.add_attribute("RestrctTyp", "MR"); // 3
        Instrmt_34_set.insert("MR");
        Instrmt_34.add_attribute("Snrty", "SD"); // 3
        Instrmt_34_set.insert("SD");
        Instrmt_34.add_attribute("NotlPctOut", "14566431.070000"); // 3
        Instrmt_34_set.insert("14566431.070000");
        Instrmt_34.add_attribute("OrigNotlPctOut", "9573933.490000"); // 3
        Instrmt_34_set.insert("9573933.490000");
        Instrmt_34.add_attribute("AttchPnt", "4711798.080000"); // 3
        Instrmt_34_set.insert("4711798.080000");
        Instrmt_34.add_attribute("DetchPnt", "9309259.170000"); // 3
        Instrmt_34_set.insert("9309259.170000");
        Instrmt_34.add_attribute("Issued", "IssueDate_t_1966060230"); // 3
        Instrmt_34_set.insert("IssueDate_t_1966060230");
        Instrmt_34.add_attribute("RepoCollSecTyp", "263456722"); // 3
        Instrmt_34_set.insert("263456722");
        Instrmt_34.add_attribute("RepoTrm", "333574348"); // 3
        Instrmt_34_set.insert("333574348");
        Instrmt_34.add_attribute("RepoRt", "8816867.530000"); // 3
        Instrmt_34_set.insert("8816867.530000");
        Instrmt_34.add_attribute("Fctr", "2634475.210000"); // 3
        Instrmt_34_set.insert("2634475.210000");
        Instrmt_34.add_attribute("CrdRtg", "CreditRating_t_1262857120"); // 3
        Instrmt_34_set.insert("CreditRating_t_1262857120");
        Instrmt_34.add_attribute("Rgstry", "InstrRegistry_t_1833595212"); // 3
        Instrmt_34_set.insert("InstrRegistry_t_1833595212");
        Instrmt_34.add_attribute("IssuCtry", "1663804776"); // 3
        Instrmt_34_set.insert("1663804776");
        Instrmt_34.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1620091055"); // 3
        Instrmt_34_set.insert("StateOrProvinceOfIssue_t_1620091055");
        Instrmt_34.add_attribute("Lcl", "LocaleOfIssue_t_551987277"); // 3
        Instrmt_34_set.insert("LocaleOfIssue_t_551987277");
        Instrmt_34.add_attribute("Redeem", "RedemptionDate_t_715919736"); // 3
        Instrmt_34_set.insert("RedemptionDate_t_715919736");
        Instrmt_34.add_attribute("StrkPx", "125544.850000"); // 3
        Instrmt_34_set.insert("125544.850000");
        Instrmt_34.add_attribute("StrkCcy", "GBP"); // 3
        Instrmt_34_set.insert("GBP");
        Instrmt_34.add_attribute("StrkMult", "19085893.420000"); // 3
        Instrmt_34_set.insert("19085893.420000");
        Instrmt_34.add_attribute("StrkValu", "3421268.220000"); // 3
        Instrmt_34_set.insert("3421268.220000");
        Instrmt_34.add_attribute("StrkPxDtrmnMeth", "2"); // 3
        Instrmt_34_set.insert("2");
        Instrmt_34.add_attribute("StrkPxBndryMeth", "5"); // 3
        Instrmt_34_set.insert("5");
        Instrmt_34.add_attribute("StrkPxBndryPrcsn", "14229905.760000"); // 3
        Instrmt_34_set.insert("14229905.760000");
        Instrmt_34.add_attribute("PxDtrmnMeth", "3"); // 3
        Instrmt_34_set.insert("3");
        Instrmt_34.add_attribute("OptAt", "985685198"); // 3
        Instrmt_34_set.insert("985685198");
        Instrmt_34.add_attribute("Mult", "8539769.020000"); // 3
        Instrmt_34_set.insert("8539769.020000");
        Instrmt_34.add_attribute("MultTyp", "1"); // 3
        Instrmt_34_set.insert("1");
        Instrmt_34.add_attribute("FlowSchedTyp", "2"); // 3
        Instrmt_34_set.insert("2");
        Instrmt_34.add_attribute("MinPxIncr", "19022536.580000"); // 3
        Instrmt_34_set.insert("19022536.580000");
        Instrmt_34.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1710410391"); // 3
        Instrmt_34_set.insert("MinPriceIncrementAmount_t_1710410391");
        Instrmt_34.add_attribute("UOM", "t"); // 3
        Instrmt_34_set.insert("t");
        Instrmt_34.add_attribute("UOMQty", "12114131.170000"); // 3
        Instrmt_34_set.insert("12114131.170000");
        Instrmt_34.add_attribute("PxUOM", "MMbbl"); // 3
        Instrmt_34_set.insert("MMbbl");
        Instrmt_34.add_attribute("PxUOMQty", "15041580.310000"); // 3
        Instrmt_34_set.insert("15041580.310000");
        Instrmt_34.add_attribute("SettlMeth", "P"); // 3
        Instrmt_34_set.insert("P");
        Instrmt_34.add_attribute("ExerStyle", "1"); // 3
        Instrmt_34_set.insert("1");
        Instrmt_34.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_34_set.insert("1");
        Instrmt_34.add_attribute("OptPayAmt", "OptPayoutAmount_t_328429735"); // 3
        Instrmt_34_set.insert("OptPayoutAmount_t_328429735");
        Instrmt_34.add_attribute("PxQteMeth", "STD"); // 3
        Instrmt_34_set.insert("STD");
        Instrmt_34.add_attribute("ValMeth", "EQTY"); // 3
        Instrmt_34_set.insert("EQTY");
        Instrmt_34.add_attribute("ListMeth", "1"); // 3
        Instrmt_34_set.insert("1");
        Instrmt_34.add_attribute("CapPx", "9066949.920000"); // 3
        Instrmt_34_set.insert("9066949.920000");
        Instrmt_34.add_attribute("FlrPx", "15473834.030000"); // 3
        Instrmt_34_set.insert("15473834.030000");
        Instrmt_34.add_attribute("PutCall", "0"); // 3
        Instrmt_34_set.insert("0");
        Instrmt_34.add_attribute("FlexInd", "true"); // 3
        Instrmt_34_set.insert("true");
        Instrmt_34.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_34_set.insert("true");
        Instrmt_34.add_attribute("TmUnit", "D"); // 3
        Instrmt_34_set.insert("D");
        Instrmt_34.add_attribute("CpnRt", "11379703.230000"); // 3
        Instrmt_34_set.insert("11379703.230000");
        Instrmt_34.add_attribute("Exch", "SecurityExchange_t_614284116"); // 3
        Instrmt_34_set.insert("SecurityExchange_t_614284116");
        Instrmt_34.add_attribute("PosLmt", "837554441"); // 3
        Instrmt_34_set.insert("837554441");
        Instrmt_34.add_attribute("NTPosLmt", "1480097145"); // 3
        Instrmt_34_set.insert("1480097145");
        Instrmt_34.add_attribute("Issr", "Issuer_t_687358710"); // 3
        Instrmt_34_set.insert("Issuer_t_687358710");
        Instrmt_34.add_attribute("EncIssrLen", "386421963"); // 3
        Instrmt_34_set.insert("386421963");
        Instrmt_34.add_attribute("EncIssr", "EncodedIssuer_t_755604074"); // 3
        Instrmt_34_set.insert("EncodedIssuer_t_755604074");
        Instrmt_34.add_attribute("Desc", "SecurityDesc_t_1840396544"); // 3
        Instrmt_34_set.insert("SecurityDesc_t_1840396544");
        Instrmt_34.add_attribute("EncSecDescLen", "1372107161"); // 3
        Instrmt_34_set.insert("1372107161");
        Instrmt_34.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1609580976"); // 3
        Instrmt_34_set.insert("EncodedSecurityDesc_t_1609580976");
        Instrmt_34.add_attribute("Pool", "Pool_t_1091633422"); // 3
        Instrmt_34_set.insert("Pool_t_1091633422");
        Instrmt_34.add_attribute("CSetMo", "314809320"); // 3
        Instrmt_34_set.insert("314809320");
        Instrmt_34.add_attribute("CPPgm", "1"); // 3
        Instrmt_34_set.insert("1");
        Instrmt_34.add_attribute("CPRegT", "CPRegType_t_654560166"); // 3
        Instrmt_34_set.insert("CPRegType_t_654560166");
        Instrmt_34.add_attribute("Dated", "DatedDate_t_1347787544"); // 3
        Instrmt_34_set.insert("DatedDate_t_1347787544");
        Instrmt_34.add_attribute("IntAcrl", "InterestAccrualDate_t_428280456"); // 3
        Instrmt_34_set.insert("InterestAccrualDate_t_428280456");
        all_values.push_back(Instrmt_34_set);
        all_compo_names.insert("Instrmt_34_set");

        {
          xml_element AID_37{"AID"};
          multiset<string> AID_37_set;
          AID_37.add_attribute("AltID", "SecurityAltID_t_1174880258"); // 4
          AID_37_set.insert("SecurityAltID_t_1174880258");
          AID_37.add_attribute("AltIDSrc", "G"); // 4
          AID_37_set.insert("G");
          all_values.push_back(AID_37_set);
          all_compo_names.insert("AID_37_set");

          Instrmt_34.add_element(AID_37);
        }
        {
          xml_element SecXML_37{"SecXML"};
          multiset<string> SecXML_37_set;
          SecXML_37.add_attribute("Schema", "SecurityXMLSchema_t_423135843"); // 4
          SecXML_37_set.insert("SecurityXMLSchema_t_423135843");
          all_values.push_back(SecXML_37_set);
          all_compo_names.insert("SecXML_37_set");

          Instrmt_34.add_element(SecXML_37);
        }
        {
          xml_element Evnt_37{"Evnt"};
          multiset<string> Evnt_37_set;
          Evnt_37.add_attribute("EventTyp", "13"); // 4
          Evnt_37_set.insert("13");
          Evnt_37.add_attribute("Dt", "EventDate_t_324593033"); // 4
          Evnt_37_set.insert("EventDate_t_324593033");
          Evnt_37.add_attribute("Tm", "EventTime_t_751565578"); // 4
          Evnt_37_set.insert("EventTime_t_751565578");
          Evnt_37.add_attribute("Px", "5868767.140000"); // 4
          Evnt_37_set.insert("5868767.140000");
          Evnt_37.add_attribute("Txt", "EventText_t_208171660"); // 4
          Evnt_37_set.insert("EventText_t_208171660");
          all_values.push_back(Evnt_37_set);
          all_compo_names.insert("Evnt_37_set");

          Instrmt_34.add_element(Evnt_37);
        }
        {
          xml_element Pty_185{"Pty"};
          multiset<string> Pty_185_set;
          Pty_185.add_attribute("ID", "InstrumentPartyID_t_195368785"); // 4
          Pty_185_set.insert("InstrumentPartyID_t_195368785");
          Pty_185.add_attribute("Src", "H"); // 4
          Pty_185_set.insert("H");
          Pty_185.add_attribute("R", "13"); // 4
          Pty_185_set.insert("13");
          all_values.push_back(Pty_185_set);
          all_compo_names.insert("Pty_185_set");

          {
            xml_element Sub_185{"Sub"};
            multiset<string> Sub_185_set;
            Sub_185.add_attribute("ID", "InstrumentPartySubID_t_1259263047"); // 5
            Sub_185_set.insert("InstrumentPartySubID_t_1259263047");
            Sub_185.add_attribute("Typ", "5"); // 5
            Sub_185_set.insert("5");
            all_values.push_back(Sub_185_set);
            all_compo_names.insert("Sub_185_set");

            Pty_185.add_element(Sub_185);
          }
          Instrmt_34.add_element(Pty_185);
        }
        {
          xml_element CmplxEvnt_34{"CmplxEvnt"};
          multiset<string> CmplxEvnt_34_set;
          CmplxEvnt_34.add_attribute("Typ", "3"); // 4
          CmplxEvnt_34_set.insert("3");
          CmplxEvnt_34.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_188228147"); // 4
          CmplxEvnt_34_set.insert("ComplexOptPayoutAmount_t_188228147");
          CmplxEvnt_34.add_attribute("Px", "19427406.510000"); // 4
          CmplxEvnt_34_set.insert("19427406.510000");
          CmplxEvnt_34.add_attribute("PxBndryMeth", "5"); // 4
          CmplxEvnt_34_set.insert("5");
          CmplxEvnt_34.add_attribute("PxBndryPrcsn", "10257825.880000"); // 4
          CmplxEvnt_34_set.insert("10257825.880000");
          CmplxEvnt_34.add_attribute("PxTmTyp", "3"); // 4
          CmplxEvnt_34_set.insert("3");
          CmplxEvnt_34.add_attribute("Cond", "1"); // 4
          CmplxEvnt_34_set.insert("1");
          all_values.push_back(CmplxEvnt_34_set);
          all_compo_names.insert("CmplxEvnt_34_set");

          {
            xml_element EvntDts_34{"EvntDts"};
            multiset<string> EvntDts_34_set;
            EvntDts_34.add_attribute("StartDt", "ComplexEventStartDate_t_1412204551"); // 5
            EvntDts_34_set.insert("ComplexEventStartDate_t_1412204551");
            EvntDts_34.add_attribute("EndDt", "ComplexEventEndDate_t_2030958223"); // 5
            EvntDts_34_set.insert("ComplexEventEndDate_t_2030958223");
            all_values.push_back(EvntDts_34_set);
            all_compo_names.insert("EvntDts_34_set");

            {
              xml_element EvntTms_34{"EvntTms"};
              multiset<string> EvntTms_34_set;
              EvntTms_34.add_attribute("StartTm", "718446630"); // 6
              EvntTms_34_set.insert("718446630");
              EvntTms_34.add_attribute("EndTm", "636828064"); // 6
              EvntTms_34_set.insert("636828064");
              all_values.push_back(EvntTms_34_set);
              all_compo_names.insert("EvntTms_34_set");

              EvntDts_34.add_element(EvntTms_34);
            }
            CmplxEvnt_34.add_element(EvntDts_34);
          }
          Instrmt_34.add_element(CmplxEvnt_34);
        }
        QuotEntry_1.add_element(Instrmt_34);
      }
      {
        xml_element Leg_46{"Leg"};
        multiset<string> Leg_46_set;
        Leg_46.add_attribute("Sym", "LegSymbol_t_1493055551"); // 3
        Leg_46_set.insert("LegSymbol_t_1493055551");
        Leg_46.add_attribute("Sfx", "WI"); // 3
        Leg_46_set.insert("WI");
        Leg_46.add_attribute("ID", "LegSecurityID_t_951637385"); // 3
        Leg_46_set.insert("LegSecurityID_t_951637385");
        Leg_46.add_attribute("Src", "7"); // 3
        Leg_46_set.insert("7");
        Leg_46.add_attribute("Prod", "13"); // 3
        Leg_46_set.insert("13");
        Leg_46.add_attribute("CFI", "LegCFICode_t_151941281"); // 3
        Leg_46_set.insert("LegCFICode_t_151941281");
        Leg_46.add_attribute("SecTyp", "BUYSELL"); // 3
        Leg_46_set.insert("BUYSELL");
        Leg_46.add_attribute("SecSubTyp", "LegSecuritySubType_t_1492036829"); // 3
        Leg_46_set.insert("LegSecuritySubType_t_1492036829");
        Leg_46.add_attribute("MMY", "856403208"); // 3
        Leg_46_set.insert("856403208");
        Leg_46.add_attribute("Mat", "LegMaturityDate_t_1561339189"); // 3
        Leg_46_set.insert("LegMaturityDate_t_1561339189");
        Leg_46.add_attribute("MatTm", "858330115"); // 3
        Leg_46_set.insert("858330115");
        Leg_46.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1180996242"); // 3
        Leg_46_set.insert("LegCouponPaymentDate_t_1180996242");
        Leg_46.add_attribute("Issued", "LegIssueDate_t_165421119"); // 3
        Leg_46_set.insert("LegIssueDate_t_165421119");
        Leg_46.add_attribute("RepoCollSecTyp", "1445206829"); // 3
        Leg_46_set.insert("1445206829");
        Leg_46.add_attribute("RepoTrm", "1389167902"); // 3
        Leg_46_set.insert("1389167902");
        Leg_46.add_attribute("RepoRt", "3607899.040000"); // 3
        Leg_46_set.insert("3607899.040000");
        Leg_46.add_attribute("Fctr", "7912948.870000"); // 3
        Leg_46_set.insert("7912948.870000");
        Leg_46.add_attribute("CrdRtg", "LegCreditRating_t_997239318"); // 3
        Leg_46_set.insert("LegCreditRating_t_997239318");
        Leg_46.add_attribute("Rgstry", "LegInstrRegistry_t_1620052951"); // 3
        Leg_46_set.insert("LegInstrRegistry_t_1620052951");
        Leg_46.add_attribute("Ctry", "1596065216"); // 3
        Leg_46_set.insert("1596065216");
        Leg_46.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_721130226"); // 3
        Leg_46_set.insert("LegStateOrProvinceOfIssue_t_721130226");
        Leg_46.add_attribute("Lcl", "LegLocaleOfIssue_t_1808281098"); // 3
        Leg_46_set.insert("LegLocaleOfIssue_t_1808281098");
        Leg_46.add_attribute("Redeem", "LegRedemptionDate_t_1391322219"); // 3
        Leg_46_set.insert("LegRedemptionDate_t_1391322219");
        Leg_46.add_attribute("Strk", "10593052.510000"); // 3
        Leg_46_set.insert("10593052.510000");
        Leg_46.add_attribute("StrkCcy", "USD"); // 3
        Leg_46_set.insert("USD");
        Leg_46.add_attribute("OptA", "2084838985"); // 3
        Leg_46_set.insert("2084838985");
        Leg_46.add_attribute("Cmult", "20987845.900000"); // 3
        Leg_46_set.insert("20987845.900000");
        Leg_46.add_attribute("MultTyp", "2"); // 3
        Leg_46_set.insert("2");
        Leg_46.add_attribute("FlowSchedTyp", "3"); // 3
        Leg_46_set.insert("3");
        Leg_46.add_attribute("UOM", "Bu"); // 3
        Leg_46_set.insert("Bu");
        Leg_46.add_attribute("UOMQty", "18957228.470000"); // 3
        Leg_46_set.insert("18957228.470000");
        Leg_46.add_attribute("PxUOM", "lbs"); // 3
        Leg_46_set.insert("lbs");
        Leg_46.add_attribute("PxUOMQty", "15397663.920000"); // 3
        Leg_46_set.insert("15397663.920000");
        Leg_46.add_attribute("TmUnit", "S"); // 3
        Leg_46_set.insert("S");
        Leg_46.add_attribute("ExerStyle", "0"); // 3
        Leg_46_set.insert("0");
        Leg_46.add_attribute("CpnRt", "16917076.730000"); // 3
        Leg_46_set.insert("16917076.730000");
        Leg_46.add_attribute("Exch", "LegSecurityExchange_t_1596365435"); // 3
        Leg_46_set.insert("LegSecurityExchange_t_1596365435");
        Leg_46.add_attribute("Issr", "LegIssuer_t_2127591773"); // 3
        Leg_46_set.insert("LegIssuer_t_2127591773");
        Leg_46.add_attribute("EncLegIssrLen", "400627233"); // 3
        Leg_46_set.insert("400627233");
        Leg_46.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1010220976"); // 3
        Leg_46_set.insert("EncodedLegIssuer_t_1010220976");
        Leg_46.add_attribute("Desc", "LegSecurityDesc_t_838438240"); // 3
        Leg_46_set.insert("LegSecurityDesc_t_838438240");
        Leg_46.add_attribute("EncLegSecDescLen", "1581623475"); // 3
        Leg_46_set.insert("1581623475");
        Leg_46.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1175642095"); // 3
        Leg_46_set.insert("EncodedLegSecurityDesc_t_1175642095");
        Leg_46.add_attribute("RatioQty", "1361614.210000"); // 3
        Leg_46_set.insert("1361614.210000");
        Leg_46.add_attribute("Side", "3"); // 3
        Leg_46_set.insert("3");
        Leg_46.add_attribute("Ccy", "CHF"); // 3
        Leg_46_set.insert("CHF");
        Leg_46.add_attribute("Pool", "LegPool_t_1820547048"); // 3
        Leg_46_set.insert("LegPool_t_1820547048");
        Leg_46.add_attribute("Dated", "LegDatedDate_t_1009001302"); // 3
        Leg_46_set.insert("LegDatedDate_t_1009001302");
        Leg_46.add_attribute("CSetMo", "376037877"); // 3
        Leg_46_set.insert("376037877");
        Leg_46.add_attribute("IntAcrl", "LegInterestAccrualDate_t_394193627"); // 3
        Leg_46_set.insert("LegInterestAccrualDate_t_394193627");
        Leg_46.add_attribute("PutCall", "669798753"); // 3
        Leg_46_set.insert("669798753");
        Leg_46.add_attribute("LegOptionRatio", "17673600.960000"); // 3
        Leg_46_set.insert("17673600.960000");
        Leg_46.add_attribute("Px", "14534988.780000"); // 3
        Leg_46_set.insert("14534988.780000");
        all_values.push_back(Leg_46_set);
        all_compo_names.insert("Leg_46_set");

        {
          xml_element LegAID_46{"LegAID"};
          multiset<string> LegAID_46_set;
          LegAID_46.add_attribute("SecAltID", "LegSecurityAltID_t_1356378792"); // 4
          LegAID_46_set.insert("LegSecurityAltID_t_1356378792");
          LegAID_46.add_attribute("SecAltIDSrc", "L"); // 4
          LegAID_46_set.insert("L");
          all_values.push_back(LegAID_46_set);
          all_compo_names.insert("LegAID_46_set");

          Leg_46.add_element(LegAID_46);
        }
        QuotEntry_1.add_element(Leg_46);
      }
      QuotSet_1.add_element(QuotEntry_1);
    }
    elt.add_element(QuotSet_1);
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
