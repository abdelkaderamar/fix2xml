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
  elt.add_attribute("ReqID", "QuoteReqID_t_207642215"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("QuoteReqID_t_207642215");
  elt.add_attribute("QID", "QuoteID_t_1294570579"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("QuoteID_t_1294570579");
  elt.add_attribute("Stat", "6"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("6");
  elt.add_attribute("RejRsn", "4"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("4");
  elt.add_attribute("RspLvl", "3"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("3");
  elt.add_attribute("Typ", "3"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("3");
  elt.add_attribute("CxlTyp", "6"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("6");
  elt.add_attribute("Acct", "Account_t_1700001544"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("Account_t_1700001544");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "4"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("4");
  elt.add_attribute("Txt", "Text_t_752296247"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("Text_t_752296247");
  elt.add_attribute("EncTxtLen", "440242836"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("440242836");
  elt.add_attribute("EncTxt", "EncodedText_t_938322865"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("EncodedText_t_938322865");
  all_values.push_back(MassQuoteAcknowledgement_message_t_0);
  all_compo_names.insert("MassQuoteAcknowledgement_message_t");

  { // Hdr
    xml_element Hdr_47{"Hdr"};
    multiset<string> Hdr_47_set;
    Hdr_47.add_attribute("SeqNum", "1003421969"); // 1
    Hdr_47_set.insert("1003421969");
    Hdr_47.add_attribute("SID", "SenderCompID_t_2048794303"); // 1
    Hdr_47_set.insert("SenderCompID_t_2048794303");
    Hdr_47.add_attribute("TID", "TargetCompID_t_422837589"); // 1
    Hdr_47_set.insert("TargetCompID_t_422837589");
    Hdr_47.add_attribute("OBID", "OnBehalfOfCompID_t_1144696439"); // 1
    Hdr_47_set.insert("OnBehalfOfCompID_t_1144696439");
    Hdr_47.add_attribute("D2ID", "DeliverToCompID_t_1422542294"); // 1
    Hdr_47_set.insert("DeliverToCompID_t_1422542294");
    Hdr_47.add_attribute("SSub", "SenderSubID_t_1766645908"); // 1
    Hdr_47_set.insert("SenderSubID_t_1766645908");
    Hdr_47.add_attribute("SLoc", "SenderLocationID_t_1889233658"); // 1
    Hdr_47_set.insert("SenderLocationID_t_1889233658");
    Hdr_47.add_attribute("TSub", "TargetSubID_t_1454372021"); // 1
    Hdr_47_set.insert("TargetSubID_t_1454372021");
    Hdr_47.add_attribute("TLoc", "TargetLocationID_t_950728946"); // 1
    Hdr_47_set.insert("TargetLocationID_t_950728946");
    Hdr_47.add_attribute("OBSub", "OnBehalfOfSubID_t_267905696"); // 1
    Hdr_47_set.insert("OnBehalfOfSubID_t_267905696");
    Hdr_47.add_attribute("OBLoc", "OnBehalfOfLocationID_t_91415813"); // 1
    Hdr_47_set.insert("OnBehalfOfLocationID_t_91415813");
    Hdr_47.add_attribute("D2Sub", "DeliverToSubID_t_1095070970"); // 1
    Hdr_47_set.insert("DeliverToSubID_t_1095070970");
    Hdr_47.add_attribute("D2Loc", "DeliverToLocationID_t_1848036939"); // 1
    Hdr_47_set.insert("DeliverToLocationID_t_1848036939");
    Hdr_47.add_attribute("PosDup", "Y"); // 1
    Hdr_47_set.insert("Y");
    Hdr_47.add_attribute("PosRsnd", "Y"); // 1
    Hdr_47_set.insert("Y");
    Hdr_47.add_attribute("Snt", "SendingTime_t_802229159"); // 1
    Hdr_47_set.insert("SendingTime_t_802229159");
    Hdr_47.add_attribute("OrigSnt", "OrigSendingTime_t_801177427"); // 1
    Hdr_47_set.insert("OrigSendingTime_t_801177427");
    Hdr_47.add_attribute("MsgEncd", "MessageEncoding_t_1779027863"); // 1
    Hdr_47_set.insert("MessageEncoding_t_1779027863");
    all_values.push_back(Hdr_47_set);
    all_compo_names.insert("Hdr_47_set");

    {
      xml_element Hop_47{"Hop"};
      multiset<string> Hop_47_set;
      Hop_47.add_attribute("ID", "HopCompID_t_1009871374"); // 2
      Hop_47_set.insert("HopCompID_t_1009871374");
      Hop_47.add_attribute("Ref", "2095748006"); // 2
      Hop_47_set.insert("2095748006");
      Hop_47.add_attribute("Snt", "HopSendingTime_t_311459317"); // 2
      Hop_47_set.insert("HopSendingTime_t_311459317");
      all_values.push_back(Hop_47_set);
      all_compo_names.insert("Hop_47_set");

      Hdr_47.add_element(Hop_47);
    }
    elt.add_element(Hdr_47);
  } // end Hdr
  { // Pty
    xml_element Pty_207{"Pty"};
    multiset<string> Pty_207_set;
    Pty_207.add_attribute("ID", "PartyID_t_1181307757"); // 1
    Pty_207_set.insert("PartyID_t_1181307757");
    Pty_207.add_attribute("Src", "B"); // 1
    Pty_207_set.insert("B");
    Pty_207.add_attribute("R", "85"); // 1
    Pty_207_set.insert("85");
    all_values.push_back(Pty_207_set);
    all_compo_names.insert("Pty_207_set");

    {
      xml_element Sub_207{"Sub"};
      multiset<string> Sub_207_set;
      Sub_207.add_attribute("ID", "PartySubID_t_733825654"); // 2
      Sub_207_set.insert("PartySubID_t_733825654");
      Sub_207.add_attribute("Typ", "18"); // 2
      Sub_207_set.insert("18");
      all_values.push_back(Sub_207_set);
      all_compo_names.insert("Sub_207_set");

      Pty_207.add_element(Sub_207);
    }
    elt.add_element(Pty_207);
  } // end Pty
  { // Pty
    xml_element Pty_208{"Pty"};
    multiset<string> Pty_208_set;
    Pty_208.add_attribute("ID", "PartyID_t_469162969"); // 1
    Pty_208_set.insert("PartyID_t_469162969");
    Pty_208.add_attribute("Src", "G"); // 1
    Pty_208_set.insert("G");
    Pty_208.add_attribute("R", "30"); // 1
    Pty_208_set.insert("30");
    all_values.push_back(Pty_208_set);
    all_compo_names.insert("Pty_208_set");

    {
      xml_element Sub_208{"Sub"};
      multiset<string> Sub_208_set;
      Sub_208.add_attribute("ID", "PartySubID_t_1407485834"); // 2
      Sub_208_set.insert("PartySubID_t_1407485834");
      Sub_208.add_attribute("Typ", "18"); // 2
      Sub_208_set.insert("18");
      all_values.push_back(Sub_208_set);
      all_compo_names.insert("Sub_208_set");

      Pty_208.add_element(Sub_208);
    }
    elt.add_element(Pty_208);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_0{"TgtPty"};
    multiset<string> TgtPty_0_set;
    TgtPty_0.add_attribute("ID", "TargetPartyID_t_1830323423"); // 1
    TgtPty_0_set.insert("TargetPartyID_t_1830323423");
    TgtPty_0.add_attribute("Src", "7"); // 1
    TgtPty_0_set.insert("7");
    TgtPty_0.add_attribute("R", "77"); // 1
    TgtPty_0_set.insert("77");
    all_values.push_back(TgtPty_0_set);
    all_compo_names.insert("TgtPty_0_set");

    elt.add_element(TgtPty_0);
  } // end TgtPty
  { // QuotSetAck
    xml_element QuotSetAck_0{"QuotSetAck"};
    multiset<string> QuotSetAck_0_set;
    QuotSetAck_0.add_attribute("SetID", "QuoteSetID_t_1228506672"); // 1
    QuotSetAck_0_set.insert("QuoteSetID_t_1228506672");
    QuotSetAck_0.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1533962684"); // 1
    QuotSetAck_0_set.insert("QuoteSetValidUntilTime_t_1533962684");
    QuotSetAck_0.add_attribute("TotNoQuotEntries", "252730981"); // 1
    QuotSetAck_0_set.insert("252730981");
    QuotSetAck_0.add_attribute("TotNoCxldQts", "1496412368"); // 1
    QuotSetAck_0_set.insert("1496412368");
    QuotSetAck_0.add_attribute("TotNoAccQts", "1625378497"); // 1
    QuotSetAck_0_set.insert("1625378497");
    QuotSetAck_0.add_attribute("TotNoRejQts", "1347801951"); // 1
    QuotSetAck_0_set.insert("1347801951");
    QuotSetAck_0.add_attribute("LastFragment", "Y"); // 1
    QuotSetAck_0_set.insert("Y");
    all_values.push_back(QuotSetAck_0_set);
    all_compo_names.insert("QuotSetAck_0_set");

    {
      xml_element Undly_52{"Undly"};
      multiset<string> Undly_52_set;
      Undly_52.add_attribute("Sym", "UnderlyingSymbol_t_617864370"); // 2
      Undly_52_set.insert("UnderlyingSymbol_t_617864370");
      Undly_52.add_attribute("Sfx", "CD"); // 2
      Undly_52_set.insert("CD");
      Undly_52.add_attribute("ID", "UnderlyingSecurityID_t_1999194819"); // 2
      Undly_52_set.insert("UnderlyingSecurityID_t_1999194819");
      Undly_52.add_attribute("Src", "L"); // 2
      Undly_52_set.insert("L");
      Undly_52.add_attribute("Prod", "11"); // 2
      Undly_52_set.insert("11");
      Undly_52.add_attribute("CFI", "UnderlyingCFICode_t_861582545"); // 2
      Undly_52_set.insert("UnderlyingCFICode_t_861582545");
      Undly_52.add_attribute("SecTyp", "LOFC"); // 2
      Undly_52_set.insert("LOFC");
      Undly_52.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1654881243"); // 2
      Undly_52_set.insert("UnderlyingSecuritySubType_t_1654881243");
      Undly_52.add_attribute("MMY", "2124918799"); // 2
      Undly_52_set.insert("2124918799");
      Undly_52.add_attribute("Mat", "UnderlyingMaturityDate_t_401130265"); // 2
      Undly_52_set.insert("UnderlyingMaturityDate_t_401130265");
      Undly_52.add_attribute("MatTm", "440019779"); // 2
      Undly_52_set.insert("440019779");
      Undly_52.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_367584490"); // 2
      Undly_52_set.insert("UnderlyingCouponPaymentDate_t_367584490");
      Undly_52.add_attribute("RestrctTyp", "XR"); // 2
      Undly_52_set.insert("XR");
      Undly_52.add_attribute("Snrty", "SD"); // 2
      Undly_52_set.insert("SD");
      Undly_52.add_attribute("NotlPctOut", "8367474.590000"); // 2
      Undly_52_set.insert("8367474.590000");
      Undly_52.add_attribute("OrigNotlPctOut", "4735941.720000"); // 2
      Undly_52_set.insert("4735941.720000");
      Undly_52.add_attribute("AttchPnt", "18062196.670000"); // 2
      Undly_52_set.insert("18062196.670000");
      Undly_52.add_attribute("DetchPnt", "967496.450000"); // 2
      Undly_52_set.insert("967496.450000");
      Undly_52.add_attribute("Issued", "UnderlyingIssueDate_t_815654395"); // 2
      Undly_52_set.insert("UnderlyingIssueDate_t_815654395");
      Undly_52.add_attribute("RepoCollSecTyp", "463268036"); // 2
      Undly_52_set.insert("463268036");
      Undly_52.add_attribute("RepoTrm", "1927073068"); // 2
      Undly_52_set.insert("1927073068");
      Undly_52.add_attribute("RepoRt", "1549274.090000"); // 2
      Undly_52_set.insert("1549274.090000");
      Undly_52.add_attribute("Fctr", "5428587.000000"); // 2
      Undly_52_set.insert("5428587.000000");
      Undly_52.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1229075103"); // 2
      Undly_52_set.insert("UnderlyingCreditRating_t_1229075103");
      Undly_52.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1383434081"); // 2
      Undly_52_set.insert("UnderlyingInstrRegistry_t_1383434081");
      Undly_52.add_attribute("Ctry", "2076821384"); // 2
      Undly_52_set.insert("2076821384");
      Undly_52.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1481806084"); // 2
      Undly_52_set.insert("UnderlyingStateOrProvinceOfIssue_t_1481806084");
      Undly_52.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_732362801"); // 2
      Undly_52_set.insert("UnderlyingLocaleOfIssue_t_732362801");
      Undly_52.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1554716234"); // 2
      Undly_52_set.insert("UnderlyingRedemptionDate_t_1554716234");
      Undly_52.add_attribute("StrkPx", "6821243.870000"); // 2
      Undly_52_set.insert("6821243.870000");
      Undly_52.add_attribute("StrkCcy", "USD"); // 2
      Undly_52_set.insert("USD");
      Undly_52.add_attribute("OptA", "246518449"); // 2
      Undly_52_set.insert("246518449");
      Undly_52.add_attribute("Mult", "17810396.320000"); // 2
      Undly_52_set.insert("17810396.320000");
      Undly_52.add_attribute("MultTyp", "2"); // 2
      Undly_52_set.insert("2");
      Undly_52.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_52_set.insert("0");
      Undly_52.add_attribute("UOM", "Bbl"); // 2
      Undly_52_set.insert("Bbl");
      Undly_52.add_attribute("UOMQty", "6639612.620000"); // 2
      Undly_52_set.insert("6639612.620000");
      Undly_52.add_attribute("PxUOM", "MMBtu"); // 2
      Undly_52_set.insert("MMBtu");
      Undly_52.add_attribute("PxUOMQty", "4725736.800000"); // 2
      Undly_52_set.insert("4725736.800000");
      Undly_52.add_attribute("TmUnit", "D"); // 2
      Undly_52_set.insert("D");
      Undly_52.add_attribute("ExerStyle", "1"); // 2
      Undly_52_set.insert("1");
      Undly_52.add_attribute("CpnRt", "8401581.700000"); // 2
      Undly_52_set.insert("8401581.700000");
      Undly_52.add_attribute("Exch", "UnderlyingSecurityExchange_t_52563799"); // 2
      Undly_52_set.insert("UnderlyingSecurityExchange_t_52563799");
      Undly_52.add_attribute("Issr", "UnderlyingIssuer_t_292872407"); // 2
      Undly_52_set.insert("UnderlyingIssuer_t_292872407");
      Undly_52.add_attribute("EncUndIssrLen", "1676905629"); // 2
      Undly_52_set.insert("1676905629");
      Undly_52.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_526157971"); // 2
      Undly_52_set.insert("EncodedUnderlyingIssuer_t_526157971");
      Undly_52.add_attribute("Desc", "UnderlyingSecurityDesc_t_2099092074"); // 2
      Undly_52_set.insert("UnderlyingSecurityDesc_t_2099092074");
      Undly_52.add_attribute("EncUndSecDescLen", "1773655274"); // 2
      Undly_52_set.insert("1773655274");
      Undly_52.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1341812366"); // 2
      Undly_52_set.insert("EncodedUnderlyingSecurityDesc_t_1341812366");
      Undly_52.add_attribute("CPPgm", "UnderlyingCPProgram_t_414876462"); // 2
      Undly_52_set.insert("UnderlyingCPProgram_t_414876462");
      Undly_52.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1553244694"); // 2
      Undly_52_set.insert("UnderlyingCPRegType_t_1553244694");
      Undly_52.add_attribute("AllocPct", "14967397.750000"); // 2
      Undly_52_set.insert("14967397.750000");
      Undly_52.add_attribute("Ccy", "CAN"); // 2
      Undly_52_set.insert("CAN");
      Undly_52.add_attribute("Qty", "7326902.080000"); // 2
      Undly_52_set.insert("7326902.080000");
      Undly_52.add_attribute("SettlTyp", "4"); // 2
      Undly_52_set.insert("4");
      Undly_52.add_attribute("CashAmt", "UnderlyingCashAmount_t_2116642233"); // 2
      Undly_52_set.insert("UnderlyingCashAmount_t_2116642233");
      Undly_52.add_attribute("CashTyp", "FIXED"); // 2
      Undly_52_set.insert("FIXED");
      Undly_52.add_attribute("Px", "2943054.850000"); // 2
      Undly_52_set.insert("2943054.850000");
      Undly_52.add_attribute("DirtPx", "6512829.720000"); // 2
      Undly_52_set.insert("6512829.720000");
      Undly_52.add_attribute("EndPx", "12468978.230000"); // 2
      Undly_52_set.insert("12468978.230000");
      Undly_52.add_attribute("StartVal", "UnderlyingStartValue_t_319402441"); // 2
      Undly_52_set.insert("UnderlyingStartValue_t_319402441");
      Undly_52.add_attribute("CurVal", "UnderlyingCurrentValue_t_897801422"); // 2
      Undly_52_set.insert("UnderlyingCurrentValue_t_897801422");
      Undly_52.add_attribute("EndVal", "UnderlyingEndValue_t_880453807"); // 2
      Undly_52_set.insert("UnderlyingEndValue_t_880453807");
      Undly_52.add_attribute("AdjQty", "17635411.950000"); // 2
      Undly_52_set.insert("17635411.950000");
      Undly_52.add_attribute("FxRate", "3402581.490000"); // 2
      Undly_52_set.insert("3402581.490000");
      Undly_52.add_attribute("FxRateCalc", "M"); // 2
      Undly_52_set.insert("M");
      Undly_52.add_attribute("CapValu", "UnderlyingCapValue_t_280018809"); // 2
      Undly_52_set.insert("UnderlyingCapValue_t_280018809");
      Undly_52.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1437596120"); // 2
      Undly_52_set.insert("UnderlyingSettlMethod_t_1437596120");
      Undly_52.add_attribute("PutCall", "1848166017"); // 2
      Undly_52_set.insert("1848166017");
      all_values.push_back(Undly_52_set);
      all_compo_names.insert("Undly_52_set");

      {
        xml_element UndAID_52{"UndAID"};
        multiset<string> UndAID_52_set;
        UndAID_52.add_attribute("AltID", "UnderlyingSecurityAltID_t_1345110337"); // 3
        UndAID_52_set.insert("UnderlyingSecurityAltID_t_1345110337");
        UndAID_52.add_attribute("AltIDSrc", "J"); // 3
        UndAID_52_set.insert("J");
        all_values.push_back(UndAID_52_set);
        all_compo_names.insert("UndAID_52_set");

        Undly_52.add_element(UndAID_52);
      }
      {
        xml_element Stip_76{"Stip"};
        multiset<string> Stip_76_set;
        Stip_76.add_attribute("Typ", "YIELD"); // 3
        Stip_76_set.insert("YIELD");
        Stip_76.add_attribute("Val", "UnderlyingStipValue_t_1397674136"); // 3
        Stip_76_set.insert("UnderlyingStipValue_t_1397674136");
        all_values.push_back(Stip_76_set);
        all_compo_names.insert("Stip_76_set");

        Undly_52.add_element(Stip_76);
      }
      {
        xml_element Pty_209{"Pty"};
        multiset<string> Pty_209_set;
        Pty_209.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1120342629"); // 3
        Pty_209_set.insert("UnderlyingInstrumentPartyID_t_1120342629");
        Pty_209.add_attribute("Src", "8"); // 3
        Pty_209_set.insert("8");
        Pty_209.add_attribute("R", "24"); // 3
        Pty_209_set.insert("24");
        all_values.push_back(Pty_209_set);
        all_compo_names.insert("Pty_209_set");

        {
          xml_element Sub_209{"Sub"};
          multiset<string> Sub_209_set;
          Sub_209.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1071951055"); // 4
          Sub_209_set.insert("UnderlyingInstrumentPartySubID_t_1071951055");
          Sub_209.add_attribute("Typ", "28"); // 4
          Sub_209_set.insert("28");
          all_values.push_back(Sub_209_set);
          all_compo_names.insert("Sub_209_set");

          Pty_209.add_element(Sub_209);
        }
        Undly_52.add_element(Pty_209);
      }
      QuotSetAck_0.add_element(Undly_52);
    }
    {
      xml_element QuotEntryAck_0{"QuotEntryAck"};
      multiset<string> QuotEntryAck_0_set;
      QuotEntryAck_0.add_attribute("EntryID", "QuoteEntryID_t_1118160826"); // 2
      QuotEntryAck_0_set.insert("QuoteEntryID_t_1118160826");
      QuotEntryAck_0.add_attribute("BidPx", "14868275.170000"); // 2
      QuotEntryAck_0_set.insert("14868275.170000");
      QuotEntryAck_0.add_attribute("OfrPx", "12496788.420000"); // 2
      QuotEntryAck_0_set.insert("12496788.420000");
      QuotEntryAck_0.add_attribute("BidSz", "4674169.530000"); // 2
      QuotEntryAck_0_set.insert("4674169.530000");
      QuotEntryAck_0.add_attribute("OfrSz", "2970790.320000"); // 2
      QuotEntryAck_0_set.insert("2970790.320000");
      QuotEntryAck_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_1884514991"); // 2
      QuotEntryAck_0_set.insert("ValidUntilTime_t_1884514991");
      QuotEntryAck_0.add_attribute("BidSpotRt", "12001071.620000"); // 2
      QuotEntryAck_0_set.insert("12001071.620000");
      QuotEntryAck_0.add_attribute("OfrSpotRt", "11841519.310000"); // 2
      QuotEntryAck_0_set.insert("11841519.310000");
      QuotEntryAck_0.add_attribute("BidFwdPnts", "18536735.770000"); // 2
      QuotEntryAck_0_set.insert("18536735.770000");
      QuotEntryAck_0.add_attribute("OfrFwdPnts", "5176765.240000"); // 2
      QuotEntryAck_0_set.insert("5176765.240000");
      QuotEntryAck_0.add_attribute("MidPx", "14784574.160000"); // 2
      QuotEntryAck_0_set.insert("14784574.160000");
      QuotEntryAck_0.add_attribute("BidYld", "3574729.010000"); // 2
      QuotEntryAck_0_set.insert("3574729.010000");
      QuotEntryAck_0.add_attribute("MidYld", "17645743.470000"); // 2
      QuotEntryAck_0_set.insert("17645743.470000");
      QuotEntryAck_0.add_attribute("OfrYld", "17978598.570000"); // 2
      QuotEntryAck_0_set.insert("17978598.570000");
      QuotEntryAck_0.add_attribute("TxnTm", "TransactTime_t_1255274323"); // 2
      QuotEntryAck_0_set.insert("TransactTime_t_1255274323");
      QuotEntryAck_0.add_attribute("SesID", "3"); // 2
      QuotEntryAck_0_set.insert("3");
      QuotEntryAck_0.add_attribute("SesSub", "6"); // 2
      QuotEntryAck_0_set.insert("6");
      QuotEntryAck_0.add_attribute("SettlDt", "SettlDate_t_1595532473"); // 2
      QuotEntryAck_0_set.insert("SettlDate_t_1595532473");
      QuotEntryAck_0.add_attribute("OrdTyp", "B"); // 2
      QuotEntryAck_0_set.insert("B");
      QuotEntryAck_0.add_attribute("SettlDt2", "SettlDate2_t_1693936214"); // 2
      QuotEntryAck_0_set.insert("SettlDate2_t_1693936214");
      QuotEntryAck_0.add_attribute("Qty2", "8856449.450000"); // 2
      QuotEntryAck_0_set.insert("8856449.450000");
      QuotEntryAck_0.add_attribute("BidFwdPnts2", "15738192.110000"); // 2
      QuotEntryAck_0_set.insert("15738192.110000");
      QuotEntryAck_0.add_attribute("OfrFwdPnts2", "8915629.030000"); // 2
      QuotEntryAck_0_set.insert("8915629.030000");
      QuotEntryAck_0.add_attribute("Ccy", "CAN"); // 2
      QuotEntryAck_0_set.insert("CAN");
      QuotEntryAck_0.add_attribute("BkngTyp", "1"); // 2
      QuotEntryAck_0_set.insert("1");
      QuotEntryAck_0.add_attribute("Cpcty", "R"); // 2
      QuotEntryAck_0_set.insert("R");
      QuotEntryAck_0.add_attribute("Rstctions", "5"); // 2
      QuotEntryAck_0_set.insert("5");
      QuotEntryAck_0.add_attribute("QtEntSts", "16"); // 2
      QuotEntryAck_0_set.insert("16");
      QuotEntryAck_0.add_attribute("EntryRejRsn", "13"); // 2
      QuotEntryAck_0_set.insert("13");
      all_values.push_back(QuotEntryAck_0_set);
      all_compo_names.insert("QuotEntryAck_0_set");

      {
        xml_element Instrmt_38{"Instrmt"};
        multiset<string> Instrmt_38_set;
        Instrmt_38.add_attribute("Sym", "Symbol_t_1881356419"); // 3
        Instrmt_38_set.insert("Symbol_t_1881356419");
        Instrmt_38.add_attribute("Sfx", "WI"); // 3
        Instrmt_38_set.insert("WI");
        Instrmt_38.add_attribute("ID", "SecurityID_t_1097269072"); // 3
        Instrmt_38_set.insert("SecurityID_t_1097269072");
        Instrmt_38.add_attribute("Src", "C"); // 3
        Instrmt_38_set.insert("C");
        Instrmt_38.add_attribute("Prod", "8"); // 3
        Instrmt_38_set.insert("8");
        Instrmt_38.add_attribute("ProdCmplx", "ProductComplex_t_1394348104"); // 3
        Instrmt_38_set.insert("ProductComplex_t_1394348104");
        Instrmt_38.add_attribute("SecGrp", "SecurityGroup_t_720582957"); // 3
        Instrmt_38_set.insert("SecurityGroup_t_720582957");
        Instrmt_38.add_attribute("CFI", "CFICode_t_556303144"); // 3
        Instrmt_38_set.insert("CFICode_t_556303144");
        Instrmt_38.add_attribute("SecTyp", "FAC"); // 3
        Instrmt_38_set.insert("FAC");
        Instrmt_38.add_attribute("SubTyp", "SecuritySubType_t_426772886"); // 3
        Instrmt_38_set.insert("SecuritySubType_t_426772886");
        Instrmt_38.add_attribute("MMY", "1073979668"); // 3
        Instrmt_38_set.insert("1073979668");
        Instrmt_38.add_attribute("MatDt", "MaturityDate_t_1909473803"); // 3
        Instrmt_38_set.insert("MaturityDate_t_1909473803");
        Instrmt_38.add_attribute("MatTm", "784245787"); // 3
        Instrmt_38_set.insert("784245787");
        Instrmt_38.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_691070367"); // 3
        Instrmt_38_set.insert("SettleOnOpenFlag_t_691070367");
        Instrmt_38.add_attribute("AsgnMeth", "1559850013"); // 3
        Instrmt_38_set.insert("1559850013");
        Instrmt_38.add_attribute("Status", "2"); // 3
        Instrmt_38_set.insert("2");
        Instrmt_38.add_attribute("CpnPmt", "CouponPaymentDate_t_1188614873"); // 3
        Instrmt_38_set.insert("CouponPaymentDate_t_1188614873");
        Instrmt_38.add_attribute("RestrctTyp", "MM"); // 3
        Instrmt_38_set.insert("MM");
        Instrmt_38.add_attribute("Snrty", "SD"); // 3
        Instrmt_38_set.insert("SD");
        Instrmt_38.add_attribute("NotlPctOut", "9142680.680000"); // 3
        Instrmt_38_set.insert("9142680.680000");
        Instrmt_38.add_attribute("OrigNotlPctOut", "3727363.360000"); // 3
        Instrmt_38_set.insert("3727363.360000");
        Instrmt_38.add_attribute("AttchPnt", "2257302.330000"); // 3
        Instrmt_38_set.insert("2257302.330000");
        Instrmt_38.add_attribute("DetchPnt", "3406036.310000"); // 3
        Instrmt_38_set.insert("3406036.310000");
        Instrmt_38.add_attribute("Issued", "IssueDate_t_1264299240"); // 3
        Instrmt_38_set.insert("IssueDate_t_1264299240");
        Instrmt_38.add_attribute("RepoCollSecTyp", "1938845400"); // 3
        Instrmt_38_set.insert("1938845400");
        Instrmt_38.add_attribute("RepoTrm", "307779734"); // 3
        Instrmt_38_set.insert("307779734");
        Instrmt_38.add_attribute("RepoRt", "14060526.310000"); // 3
        Instrmt_38_set.insert("14060526.310000");
        Instrmt_38.add_attribute("Fctr", "4773359.000000"); // 3
        Instrmt_38_set.insert("4773359.000000");
        Instrmt_38.add_attribute("CrdRtg", "CreditRating_t_345218358"); // 3
        Instrmt_38_set.insert("CreditRating_t_345218358");
        Instrmt_38.add_attribute("Rgstry", "InstrRegistry_t_1324154482"); // 3
        Instrmt_38_set.insert("InstrRegistry_t_1324154482");
        Instrmt_38.add_attribute("IssuCtry", "87777455"); // 3
        Instrmt_38_set.insert("87777455");
        Instrmt_38.add_attribute("StPrv", "StateOrProvinceOfIssue_t_79091130"); // 3
        Instrmt_38_set.insert("StateOrProvinceOfIssue_t_79091130");
        Instrmt_38.add_attribute("Lcl", "LocaleOfIssue_t_212933511"); // 3
        Instrmt_38_set.insert("LocaleOfIssue_t_212933511");
        Instrmt_38.add_attribute("Redeem", "RedemptionDate_t_1185046527"); // 3
        Instrmt_38_set.insert("RedemptionDate_t_1185046527");
        Instrmt_38.add_attribute("StrkPx", "10626427.430000"); // 3
        Instrmt_38_set.insert("10626427.430000");
        Instrmt_38.add_attribute("StrkCcy", "USD"); // 3
        Instrmt_38_set.insert("USD");
        Instrmt_38.add_attribute("StrkMult", "17832257.000000"); // 3
        Instrmt_38_set.insert("17832257.000000");
        Instrmt_38.add_attribute("StrkValu", "1254326.380000"); // 3
        Instrmt_38_set.insert("1254326.380000");
        Instrmt_38.add_attribute("StrkPxDtrmnMeth", "4"); // 3
        Instrmt_38_set.insert("4");
        Instrmt_38.add_attribute("StrkPxBndryMeth", "4"); // 3
        Instrmt_38_set.insert("4");
        Instrmt_38.add_attribute("StrkPxBndryPrcsn", "11994123.070000"); // 3
        Instrmt_38_set.insert("11994123.070000");
        Instrmt_38.add_attribute("PxDtrmnMeth", "4"); // 3
        Instrmt_38_set.insert("4");
        Instrmt_38.add_attribute("OptAt", "846760726"); // 3
        Instrmt_38_set.insert("846760726");
        Instrmt_38.add_attribute("Mult", "18904826.740000"); // 3
        Instrmt_38_set.insert("18904826.740000");
        Instrmt_38.add_attribute("MultTyp", "0"); // 3
        Instrmt_38_set.insert("0");
        Instrmt_38.add_attribute("FlowSchedTyp", "4"); // 3
        Instrmt_38_set.insert("4");
        Instrmt_38.add_attribute("MinPxIncr", "9316139.000000"); // 3
        Instrmt_38_set.insert("9316139.000000");
        Instrmt_38.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_863567662"); // 3
        Instrmt_38_set.insert("MinPriceIncrementAmount_t_863567662");
        Instrmt_38.add_attribute("UOM", "Bu"); // 3
        Instrmt_38_set.insert("Bu");
        Instrmt_38.add_attribute("UOMQty", "18458819.680000"); // 3
        Instrmt_38_set.insert("18458819.680000");
        Instrmt_38.add_attribute("PxUOM", "lbs"); // 3
        Instrmt_38_set.insert("lbs");
        Instrmt_38.add_attribute("PxUOMQty", "3046127.100000"); // 3
        Instrmt_38_set.insert("3046127.100000");
        Instrmt_38.add_attribute("SettlMeth", "P"); // 3
        Instrmt_38_set.insert("P");
        Instrmt_38.add_attribute("ExerStyle", "0"); // 3
        Instrmt_38_set.insert("0");
        Instrmt_38.add_attribute("OptPayoutTyp", "2"); // 3
        Instrmt_38_set.insert("2");
        Instrmt_38.add_attribute("OptPayAmt", "OptPayoutAmount_t_346781686"); // 3
        Instrmt_38_set.insert("OptPayoutAmount_t_346781686");
        Instrmt_38.add_attribute("PxQteMeth", "INT"); // 3
        Instrmt_38_set.insert("INT");
        Instrmt_38.add_attribute("ValMeth", "FUTDA"); // 3
        Instrmt_38_set.insert("FUTDA");
        Instrmt_38.add_attribute("ListMeth", "0"); // 3
        Instrmt_38_set.insert("0");
        Instrmt_38.add_attribute("CapPx", "9358430.560000"); // 3
        Instrmt_38_set.insert("9358430.560000");
        Instrmt_38.add_attribute("FlrPx", "6610878.170000"); // 3
        Instrmt_38_set.insert("6610878.170000");
        Instrmt_38.add_attribute("PutCall", "0"); // 3
        Instrmt_38_set.insert("0");
        Instrmt_38.add_attribute("FlexInd", "true"); // 3
        Instrmt_38_set.insert("true");
        Instrmt_38.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_38_set.insert("true");
        Instrmt_38.add_attribute("TmUnit", "H"); // 3
        Instrmt_38_set.insert("H");
        Instrmt_38.add_attribute("CpnRt", "7179060.620000"); // 3
        Instrmt_38_set.insert("7179060.620000");
        Instrmt_38.add_attribute("Exch", "SecurityExchange_t_130561680"); // 3
        Instrmt_38_set.insert("SecurityExchange_t_130561680");
        Instrmt_38.add_attribute("PosLmt", "1469475970"); // 3
        Instrmt_38_set.insert("1469475970");
        Instrmt_38.add_attribute("NTPosLmt", "843338700"); // 3
        Instrmt_38_set.insert("843338700");
        Instrmt_38.add_attribute("Issr", "Issuer_t_993489052"); // 3
        Instrmt_38_set.insert("Issuer_t_993489052");
        Instrmt_38.add_attribute("EncIssrLen", "1531990909"); // 3
        Instrmt_38_set.insert("1531990909");
        Instrmt_38.add_attribute("EncIssr", "EncodedIssuer_t_2042751007"); // 3
        Instrmt_38_set.insert("EncodedIssuer_t_2042751007");
        Instrmt_38.add_attribute("Desc", "SecurityDesc_t_1618406579"); // 3
        Instrmt_38_set.insert("SecurityDesc_t_1618406579");
        Instrmt_38.add_attribute("EncSecDescLen", "231267987"); // 3
        Instrmt_38_set.insert("231267987");
        Instrmt_38.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1785750034"); // 3
        Instrmt_38_set.insert("EncodedSecurityDesc_t_1785750034");
        Instrmt_38.add_attribute("Pool", "Pool_t_1655690471"); // 3
        Instrmt_38_set.insert("Pool_t_1655690471");
        Instrmt_38.add_attribute("CSetMo", "970065176"); // 3
        Instrmt_38_set.insert("970065176");
        Instrmt_38.add_attribute("CPPgm", "2"); // 3
        Instrmt_38_set.insert("2");
        Instrmt_38.add_attribute("CPRegT", "CPRegType_t_371774485"); // 3
        Instrmt_38_set.insert("CPRegType_t_371774485");
        Instrmt_38.add_attribute("Dated", "DatedDate_t_1048947653"); // 3
        Instrmt_38_set.insert("DatedDate_t_1048947653");
        Instrmt_38.add_attribute("IntAcrl", "InterestAccrualDate_t_268278606"); // 3
        Instrmt_38_set.insert("InterestAccrualDate_t_268278606");
        all_values.push_back(Instrmt_38_set);
        all_compo_names.insert("Instrmt_38_set");

        {
          xml_element AID_41{"AID"};
          multiset<string> AID_41_set;
          AID_41.add_attribute("AltID", "SecurityAltID_t_1608078483"); // 4
          AID_41_set.insert("SecurityAltID_t_1608078483");
          AID_41.add_attribute("AltIDSrc", "2"); // 4
          AID_41_set.insert("2");
          all_values.push_back(AID_41_set);
          all_compo_names.insert("AID_41_set");

          Instrmt_38.add_element(AID_41);
        }
        {
          xml_element SecXML_41{"SecXML"};
          multiset<string> SecXML_41_set;
          SecXML_41.add_attribute("Schema", "SecurityXMLSchema_t_307280557"); // 4
          SecXML_41_set.insert("SecurityXMLSchema_t_307280557");
          all_values.push_back(SecXML_41_set);
          all_compo_names.insert("SecXML_41_set");

          Instrmt_38.add_element(SecXML_41);
        }
        {
          xml_element Evnt_41{"Evnt"};
          multiset<string> Evnt_41_set;
          Evnt_41.add_attribute("EventTyp", "14"); // 4
          Evnt_41_set.insert("14");
          Evnt_41.add_attribute("Dt", "EventDate_t_1449534825"); // 4
          Evnt_41_set.insert("EventDate_t_1449534825");
          Evnt_41.add_attribute("Tm", "EventTime_t_654062243"); // 4
          Evnt_41_set.insert("EventTime_t_654062243");
          Evnt_41.add_attribute("Px", "15728866.480000"); // 4
          Evnt_41_set.insert("15728866.480000");
          Evnt_41.add_attribute("Txt", "EventText_t_2022845187"); // 4
          Evnt_41_set.insert("EventText_t_2022845187");
          all_values.push_back(Evnt_41_set);
          all_compo_names.insert("Evnt_41_set");

          Instrmt_38.add_element(Evnt_41);
        }
        {
          xml_element Pty_210{"Pty"};
          multiset<string> Pty_210_set;
          Pty_210.add_attribute("ID", "InstrumentPartyID_t_1346062288"); // 4
          Pty_210_set.insert("InstrumentPartyID_t_1346062288");
          Pty_210.add_attribute("Src", "7"); // 4
          Pty_210_set.insert("7");
          Pty_210.add_attribute("R", "74"); // 4
          Pty_210_set.insert("74");
          all_values.push_back(Pty_210_set);
          all_compo_names.insert("Pty_210_set");

          {
            xml_element Sub_210{"Sub"};
            multiset<string> Sub_210_set;
            Sub_210.add_attribute("ID", "InstrumentPartySubID_t_2117153462"); // 5
            Sub_210_set.insert("InstrumentPartySubID_t_2117153462");
            Sub_210.add_attribute("Typ", "2"); // 5
            Sub_210_set.insert("2");
            all_values.push_back(Sub_210_set);
            all_compo_names.insert("Sub_210_set");

            Pty_210.add_element(Sub_210);
          }
          Instrmt_38.add_element(Pty_210);
        }
        {
          xml_element CmplxEvnt_38{"CmplxEvnt"};
          multiset<string> CmplxEvnt_38_set;
          CmplxEvnt_38.add_attribute("Typ", "1"); // 4
          CmplxEvnt_38_set.insert("1");
          CmplxEvnt_38.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1803403732"); // 4
          CmplxEvnt_38_set.insert("ComplexOptPayoutAmount_t_1803403732");
          CmplxEvnt_38.add_attribute("Px", "804450.380000"); // 4
          CmplxEvnt_38_set.insert("804450.380000");
          CmplxEvnt_38.add_attribute("PxBndryMeth", "4"); // 4
          CmplxEvnt_38_set.insert("4");
          CmplxEvnt_38.add_attribute("PxBndryPrcsn", "11253960.550000"); // 4
          CmplxEvnt_38_set.insert("11253960.550000");
          CmplxEvnt_38.add_attribute("PxTmTyp", "1"); // 4
          CmplxEvnt_38_set.insert("1");
          CmplxEvnt_38.add_attribute("Cond", "2"); // 4
          CmplxEvnt_38_set.insert("2");
          all_values.push_back(CmplxEvnt_38_set);
          all_compo_names.insert("CmplxEvnt_38_set");

          {
            xml_element EvntDts_38{"EvntDts"};
            multiset<string> EvntDts_38_set;
            EvntDts_38.add_attribute("StartDt", "ComplexEventStartDate_t_509903316"); // 5
            EvntDts_38_set.insert("ComplexEventStartDate_t_509903316");
            EvntDts_38.add_attribute("EndDt", "ComplexEventEndDate_t_819051098"); // 5
            EvntDts_38_set.insert("ComplexEventEndDate_t_819051098");
            all_values.push_back(EvntDts_38_set);
            all_compo_names.insert("EvntDts_38_set");

            {
              xml_element EvntTms_38{"EvntTms"};
              multiset<string> EvntTms_38_set;
              EvntTms_38.add_attribute("StartTm", "830073716"); // 6
              EvntTms_38_set.insert("830073716");
              EvntTms_38.add_attribute("EndTm", "741171303"); // 6
              EvntTms_38_set.insert("741171303");
              all_values.push_back(EvntTms_38_set);
              all_compo_names.insert("EvntTms_38_set");

              EvntDts_38.add_element(EvntTms_38);
            }
            CmplxEvnt_38.add_element(EvntDts_38);
          }
          Instrmt_38.add_element(CmplxEvnt_38);
        }
        QuotEntryAck_0.add_element(Instrmt_38);
      }
      {
        xml_element Leg_51{"Leg"};
        multiset<string> Leg_51_set;
        Leg_51.add_attribute("Sym", "LegSymbol_t_457317484"); // 3
        Leg_51_set.insert("LegSymbol_t_457317484");
        Leg_51.add_attribute("Sfx", "WI"); // 3
        Leg_51_set.insert("WI");
        Leg_51.add_attribute("ID", "LegSecurityID_t_1711236479"); // 3
        Leg_51_set.insert("LegSecurityID_t_1711236479");
        Leg_51.add_attribute("Src", "H"); // 3
        Leg_51_set.insert("H");
        Leg_51.add_attribute("Prod", "12"); // 3
        Leg_51_set.insert("12");
        Leg_51.add_attribute("CFI", "LegCFICode_t_612700484"); // 3
        Leg_51_set.insert("LegCFICode_t_612700484");
        Leg_51.add_attribute("SecTyp", "MLEG"); // 3
        Leg_51_set.insert("MLEG");
        Leg_51.add_attribute("SecSubTyp", "LegSecuritySubType_t_170649859"); // 3
        Leg_51_set.insert("LegSecuritySubType_t_170649859");
        Leg_51.add_attribute("MMY", "1966260847"); // 3
        Leg_51_set.insert("1966260847");
        Leg_51.add_attribute("Mat", "LegMaturityDate_t_1602756934"); // 3
        Leg_51_set.insert("LegMaturityDate_t_1602756934");
        Leg_51.add_attribute("MatTm", "2131847933"); // 3
        Leg_51_set.insert("2131847933");
        Leg_51.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1268312024"); // 3
        Leg_51_set.insert("LegCouponPaymentDate_t_1268312024");
        Leg_51.add_attribute("Issued", "LegIssueDate_t_109335529"); // 3
        Leg_51_set.insert("LegIssueDate_t_109335529");
        Leg_51.add_attribute("RepoCollSecTyp", "1557250933"); // 3
        Leg_51_set.insert("1557250933");
        Leg_51.add_attribute("RepoTrm", "1143673563"); // 3
        Leg_51_set.insert("1143673563");
        Leg_51.add_attribute("RepoRt", "14553978.170000"); // 3
        Leg_51_set.insert("14553978.170000");
        Leg_51.add_attribute("Fctr", "19184969.900000"); // 3
        Leg_51_set.insert("19184969.900000");
        Leg_51.add_attribute("CrdRtg", "LegCreditRating_t_1680122919"); // 3
        Leg_51_set.insert("LegCreditRating_t_1680122919");
        Leg_51.add_attribute("Rgstry", "LegInstrRegistry_t_1425067632"); // 3
        Leg_51_set.insert("LegInstrRegistry_t_1425067632");
        Leg_51.add_attribute("Ctry", "1281035966"); // 3
        Leg_51_set.insert("1281035966");
        Leg_51.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1915222971"); // 3
        Leg_51_set.insert("LegStateOrProvinceOfIssue_t_1915222971");
        Leg_51.add_attribute("Lcl", "LegLocaleOfIssue_t_1080987716"); // 3
        Leg_51_set.insert("LegLocaleOfIssue_t_1080987716");
        Leg_51.add_attribute("Redeem", "LegRedemptionDate_t_1361481005"); // 3
        Leg_51_set.insert("LegRedemptionDate_t_1361481005");
        Leg_51.add_attribute("Strk", "1334010.560000"); // 3
        Leg_51_set.insert("1334010.560000");
        Leg_51.add_attribute("StrkCcy", "USD"); // 3
        Leg_51_set.insert("USD");
        Leg_51.add_attribute("OptA", "1492551841"); // 3
        Leg_51_set.insert("1492551841");
        Leg_51.add_attribute("Cmult", "5688034.390000"); // 3
        Leg_51_set.insert("5688034.390000");
        Leg_51.add_attribute("MultTyp", "2"); // 3
        Leg_51_set.insert("2");
        Leg_51.add_attribute("FlowSchedTyp", "4"); // 3
        Leg_51_set.insert("4");
        Leg_51.add_attribute("UOM", "Bu"); // 3
        Leg_51_set.insert("Bu");
        Leg_51.add_attribute("UOMQty", "14141496.790000"); // 3
        Leg_51_set.insert("14141496.790000");
        Leg_51.add_attribute("PxUOM", "MMbbl"); // 3
        Leg_51_set.insert("MMbbl");
        Leg_51.add_attribute("PxUOMQty", "8737275.730000"); // 3
        Leg_51_set.insert("8737275.730000");
        Leg_51.add_attribute("TmUnit", "S"); // 3
        Leg_51_set.insert("S");
        Leg_51.add_attribute("ExerStyle", "0"); // 3
        Leg_51_set.insert("0");
        Leg_51.add_attribute("CpnRt", "14864280.570000"); // 3
        Leg_51_set.insert("14864280.570000");
        Leg_51.add_attribute("Exch", "LegSecurityExchange_t_1589340178"); // 3
        Leg_51_set.insert("LegSecurityExchange_t_1589340178");
        Leg_51.add_attribute("Issr", "LegIssuer_t_1394127332"); // 3
        Leg_51_set.insert("LegIssuer_t_1394127332");
        Leg_51.add_attribute("EncLegIssrLen", "1305205256"); // 3
        Leg_51_set.insert("1305205256");
        Leg_51.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1044613464"); // 3
        Leg_51_set.insert("EncodedLegIssuer_t_1044613464");
        Leg_51.add_attribute("Desc", "LegSecurityDesc_t_1378491617"); // 3
        Leg_51_set.insert("LegSecurityDesc_t_1378491617");
        Leg_51.add_attribute("EncLegSecDescLen", "426033632"); // 3
        Leg_51_set.insert("426033632");
        Leg_51.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1153948993"); // 3
        Leg_51_set.insert("EncodedLegSecurityDesc_t_1153948993");
        Leg_51.add_attribute("RatioQty", "7882589.030000"); // 3
        Leg_51_set.insert("7882589.030000");
        Leg_51.add_attribute("Side", "C"); // 3
        Leg_51_set.insert("C");
        Leg_51.add_attribute("Ccy", "CAN"); // 3
        Leg_51_set.insert("CAN");
        Leg_51.add_attribute("Pool", "LegPool_t_1102346466"); // 3
        Leg_51_set.insert("LegPool_t_1102346466");
        Leg_51.add_attribute("Dated", "LegDatedDate_t_1886930795"); // 3
        Leg_51_set.insert("LegDatedDate_t_1886930795");
        Leg_51.add_attribute("CSetMo", "1840308211"); // 3
        Leg_51_set.insert("1840308211");
        Leg_51.add_attribute("IntAcrl", "LegInterestAccrualDate_t_870085790"); // 3
        Leg_51_set.insert("LegInterestAccrualDate_t_870085790");
        Leg_51.add_attribute("PutCall", "820434863"); // 3
        Leg_51_set.insert("820434863");
        Leg_51.add_attribute("LegOptionRatio", "10543055.680000"); // 3
        Leg_51_set.insert("10543055.680000");
        Leg_51.add_attribute("Px", "10034868.460000"); // 3
        Leg_51_set.insert("10034868.460000");
        all_values.push_back(Leg_51_set);
        all_compo_names.insert("Leg_51_set");

        {
          xml_element LegAID_51{"LegAID"};
          multiset<string> LegAID_51_set;
          LegAID_51.add_attribute("SecAltID", "LegSecurityAltID_t_879334987"); // 4
          LegAID_51_set.insert("LegSecurityAltID_t_879334987");
          LegAID_51.add_attribute("SecAltIDSrc", "B"); // 4
          LegAID_51_set.insert("B");
          all_values.push_back(LegAID_51_set);
          all_compo_names.insert("LegAID_51_set");

          Leg_51.add_element(LegAID_51);
        }
        QuotEntryAck_0.add_element(Leg_51);
      }
      QuotSetAck_0.add_element(QuotEntryAck_0);
    }
    elt.add_element(QuotSetAck_0);
  } // end QuotSetAck
  { // QuotSetAck
    xml_element QuotSetAck_1{"QuotSetAck"};
    multiset<string> QuotSetAck_1_set;
    QuotSetAck_1.add_attribute("SetID", "QuoteSetID_t_348555040"); // 1
    QuotSetAck_1_set.insert("QuoteSetID_t_348555040");
    QuotSetAck_1.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1448138426"); // 1
    QuotSetAck_1_set.insert("QuoteSetValidUntilTime_t_1448138426");
    QuotSetAck_1.add_attribute("TotNoQuotEntries", "1435211"); // 1
    QuotSetAck_1_set.insert("1435211");
    QuotSetAck_1.add_attribute("TotNoCxldQts", "523696949"); // 1
    QuotSetAck_1_set.insert("523696949");
    QuotSetAck_1.add_attribute("TotNoAccQts", "610629521"); // 1
    QuotSetAck_1_set.insert("610629521");
    QuotSetAck_1.add_attribute("TotNoRejQts", "1415584890"); // 1
    QuotSetAck_1_set.insert("1415584890");
    QuotSetAck_1.add_attribute("LastFragment", "N"); // 1
    QuotSetAck_1_set.insert("N");
    all_values.push_back(QuotSetAck_1_set);
    all_compo_names.insert("QuotSetAck_1_set");

    {
      xml_element Undly_53{"Undly"};
      multiset<string> Undly_53_set;
      Undly_53.add_attribute("Sym", "UnderlyingSymbol_t_1484357094"); // 2
      Undly_53_set.insert("UnderlyingSymbol_t_1484357094");
      Undly_53.add_attribute("Sfx", "WI"); // 2
      Undly_53_set.insert("WI");
      Undly_53.add_attribute("ID", "UnderlyingSecurityID_t_113113222"); // 2
      Undly_53_set.insert("UnderlyingSecurityID_t_113113222");
      Undly_53.add_attribute("Src", "F"); // 2
      Undly_53_set.insert("F");
      Undly_53.add_attribute("Prod", "10"); // 2
      Undly_53_set.insert("10");
      Undly_53.add_attribute("CFI", "UnderlyingCFICode_t_1507240554"); // 2
      Undly_53_set.insert("UnderlyingCFICode_t_1507240554");
      Undly_53.add_attribute("SecTyp", "CTB"); // 2
      Undly_53_set.insert("CTB");
      Undly_53.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_48435037"); // 2
      Undly_53_set.insert("UnderlyingSecuritySubType_t_48435037");
      Undly_53.add_attribute("MMY", "738248524"); // 2
      Undly_53_set.insert("738248524");
      Undly_53.add_attribute("Mat", "UnderlyingMaturityDate_t_407056745"); // 2
      Undly_53_set.insert("UnderlyingMaturityDate_t_407056745");
      Undly_53.add_attribute("MatTm", "1202384031"); // 2
      Undly_53_set.insert("1202384031");
      Undly_53.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1526507427"); // 2
      Undly_53_set.insert("UnderlyingCouponPaymentDate_t_1526507427");
      Undly_53.add_attribute("RestrctTyp", "FR"); // 2
      Undly_53_set.insert("FR");
      Undly_53.add_attribute("Snrty", "SB"); // 2
      Undly_53_set.insert("SB");
      Undly_53.add_attribute("NotlPctOut", "20857796.720000"); // 2
      Undly_53_set.insert("20857796.720000");
      Undly_53.add_attribute("OrigNotlPctOut", "9316267.590000"); // 2
      Undly_53_set.insert("9316267.590000");
      Undly_53.add_attribute("AttchPnt", "14036943.410000"); // 2
      Undly_53_set.insert("14036943.410000");
      Undly_53.add_attribute("DetchPnt", "17786042.350000"); // 2
      Undly_53_set.insert("17786042.350000");
      Undly_53.add_attribute("Issued", "UnderlyingIssueDate_t_1801712549"); // 2
      Undly_53_set.insert("UnderlyingIssueDate_t_1801712549");
      Undly_53.add_attribute("RepoCollSecTyp", "76645556"); // 2
      Undly_53_set.insert("76645556");
      Undly_53.add_attribute("RepoTrm", "685426156"); // 2
      Undly_53_set.insert("685426156");
      Undly_53.add_attribute("RepoRt", "6577157.470000"); // 2
      Undly_53_set.insert("6577157.470000");
      Undly_53.add_attribute("Fctr", "9559805.430000"); // 2
      Undly_53_set.insert("9559805.430000");
      Undly_53.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1877512820"); // 2
      Undly_53_set.insert("UnderlyingCreditRating_t_1877512820");
      Undly_53.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1006270787"); // 2
      Undly_53_set.insert("UnderlyingInstrRegistry_t_1006270787");
      Undly_53.add_attribute("Ctry", "256635322"); // 2
      Undly_53_set.insert("256635322");
      Undly_53.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1878948031"); // 2
      Undly_53_set.insert("UnderlyingStateOrProvinceOfIssue_t_1878948031");
      Undly_53.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1529967737"); // 2
      Undly_53_set.insert("UnderlyingLocaleOfIssue_t_1529967737");
      Undly_53.add_attribute("Redeem", "UnderlyingRedemptionDate_t_867264843"); // 2
      Undly_53_set.insert("UnderlyingRedemptionDate_t_867264843");
      Undly_53.add_attribute("StrkPx", "11470492.730000"); // 2
      Undly_53_set.insert("11470492.730000");
      Undly_53.add_attribute("StrkCcy", "EUR"); // 2
      Undly_53_set.insert("EUR");
      Undly_53.add_attribute("OptA", "709014317"); // 2
      Undly_53_set.insert("709014317");
      Undly_53.add_attribute("Mult", "5327167.090000"); // 2
      Undly_53_set.insert("5327167.090000");
      Undly_53.add_attribute("MultTyp", "0"); // 2
      Undly_53_set.insert("0");
      Undly_53.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_53_set.insert("3");
      Undly_53.add_attribute("UOM", "lbs"); // 2
      Undly_53_set.insert("lbs");
      Undly_53.add_attribute("UOMQty", "10084629.060000"); // 2
      Undly_53_set.insert("10084629.060000");
      Undly_53.add_attribute("PxUOM", "MMBtu"); // 2
      Undly_53_set.insert("MMBtu");
      Undly_53.add_attribute("PxUOMQty", "6307221.400000"); // 2
      Undly_53_set.insert("6307221.400000");
      Undly_53.add_attribute("TmUnit", "S"); // 2
      Undly_53_set.insert("S");
      Undly_53.add_attribute("ExerStyle", "2"); // 2
      Undly_53_set.insert("2");
      Undly_53.add_attribute("CpnRt", "97459.190000"); // 2
      Undly_53_set.insert("97459.190000");
      Undly_53.add_attribute("Exch", "UnderlyingSecurityExchange_t_1244799943"); // 2
      Undly_53_set.insert("UnderlyingSecurityExchange_t_1244799943");
      Undly_53.add_attribute("Issr", "UnderlyingIssuer_t_480418505"); // 2
      Undly_53_set.insert("UnderlyingIssuer_t_480418505");
      Undly_53.add_attribute("EncUndIssrLen", "2095525591"); // 2
      Undly_53_set.insert("2095525591");
      Undly_53.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_28943054"); // 2
      Undly_53_set.insert("EncodedUnderlyingIssuer_t_28943054");
      Undly_53.add_attribute("Desc", "UnderlyingSecurityDesc_t_1884112846"); // 2
      Undly_53_set.insert("UnderlyingSecurityDesc_t_1884112846");
      Undly_53.add_attribute("EncUndSecDescLen", "1726646178"); // 2
      Undly_53_set.insert("1726646178");
      Undly_53.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1830655603"); // 2
      Undly_53_set.insert("EncodedUnderlyingSecurityDesc_t_1830655603");
      Undly_53.add_attribute("CPPgm", "UnderlyingCPProgram_t_1960758402"); // 2
      Undly_53_set.insert("UnderlyingCPProgram_t_1960758402");
      Undly_53.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_264588686"); // 2
      Undly_53_set.insert("UnderlyingCPRegType_t_264588686");
      Undly_53.add_attribute("AllocPct", "3408877.030000"); // 2
      Undly_53_set.insert("3408877.030000");
      Undly_53.add_attribute("Ccy", "CAN"); // 2
      Undly_53_set.insert("CAN");
      Undly_53.add_attribute("Qty", "13471584.900000"); // 2
      Undly_53_set.insert("13471584.900000");
      Undly_53.add_attribute("SettlTyp", "2"); // 2
      Undly_53_set.insert("2");
      Undly_53.add_attribute("CashAmt", "UnderlyingCashAmount_t_1873565890"); // 2
      Undly_53_set.insert("UnderlyingCashAmount_t_1873565890");
      Undly_53.add_attribute("CashTyp", "DIFF"); // 2
      Undly_53_set.insert("DIFF");
      Undly_53.add_attribute("Px", "18931554.630000"); // 2
      Undly_53_set.insert("18931554.630000");
      Undly_53.add_attribute("DirtPx", "8731315.160000"); // 2
      Undly_53_set.insert("8731315.160000");
      Undly_53.add_attribute("EndPx", "11492460.660000"); // 2
      Undly_53_set.insert("11492460.660000");
      Undly_53.add_attribute("StartVal", "UnderlyingStartValue_t_2097293752"); // 2
      Undly_53_set.insert("UnderlyingStartValue_t_2097293752");
      Undly_53.add_attribute("CurVal", "UnderlyingCurrentValue_t_1582145833"); // 2
      Undly_53_set.insert("UnderlyingCurrentValue_t_1582145833");
      Undly_53.add_attribute("EndVal", "UnderlyingEndValue_t_1681962776"); // 2
      Undly_53_set.insert("UnderlyingEndValue_t_1681962776");
      Undly_53.add_attribute("AdjQty", "9772498.980000"); // 2
      Undly_53_set.insert("9772498.980000");
      Undly_53.add_attribute("FxRate", "12949817.230000"); // 2
      Undly_53_set.insert("12949817.230000");
      Undly_53.add_attribute("FxRateCalc", "M"); // 2
      Undly_53_set.insert("M");
      Undly_53.add_attribute("CapValu", "UnderlyingCapValue_t_1985712804"); // 2
      Undly_53_set.insert("UnderlyingCapValue_t_1985712804");
      Undly_53.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1056252651"); // 2
      Undly_53_set.insert("UnderlyingSettlMethod_t_1056252651");
      Undly_53.add_attribute("PutCall", "57674884"); // 2
      Undly_53_set.insert("57674884");
      all_values.push_back(Undly_53_set);
      all_compo_names.insert("Undly_53_set");

      {
        xml_element UndAID_53{"UndAID"};
        multiset<string> UndAID_53_set;
        UndAID_53.add_attribute("AltID", "UnderlyingSecurityAltID_t_1253748807"); // 3
        UndAID_53_set.insert("UnderlyingSecurityAltID_t_1253748807");
        UndAID_53.add_attribute("AltIDSrc", "7"); // 3
        UndAID_53_set.insert("7");
        all_values.push_back(UndAID_53_set);
        all_compo_names.insert("UndAID_53_set");

        Undly_53.add_element(UndAID_53);
      }
      {
        xml_element Stip_77{"Stip"};
        multiset<string> Stip_77_set;
        Stip_77.add_attribute("Typ", "BANKQUAL"); // 3
        Stip_77_set.insert("BANKQUAL");
        Stip_77.add_attribute("Val", "UnderlyingStipValue_t_351065102"); // 3
        Stip_77_set.insert("UnderlyingStipValue_t_351065102");
        all_values.push_back(Stip_77_set);
        all_compo_names.insert("Stip_77_set");

        Undly_53.add_element(Stip_77);
      }
      {
        xml_element Pty_211{"Pty"};
        multiset<string> Pty_211_set;
        Pty_211.add_attribute("ID", "UnderlyingInstrumentPartyID_t_352842467"); // 3
        Pty_211_set.insert("UnderlyingInstrumentPartyID_t_352842467");
        Pty_211.add_attribute("Src", "9"); // 3
        Pty_211_set.insert("9");
        Pty_211.add_attribute("R", "56"); // 3
        Pty_211_set.insert("56");
        all_values.push_back(Pty_211_set);
        all_compo_names.insert("Pty_211_set");

        {
          xml_element Sub_211{"Sub"};
          multiset<string> Sub_211_set;
          Sub_211.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_89471665"); // 4
          Sub_211_set.insert("UnderlyingInstrumentPartySubID_t_89471665");
          Sub_211.add_attribute("Typ", "25"); // 4
          Sub_211_set.insert("25");
          all_values.push_back(Sub_211_set);
          all_compo_names.insert("Sub_211_set");

          Pty_211.add_element(Sub_211);
        }
        Undly_53.add_element(Pty_211);
      }
      QuotSetAck_1.add_element(Undly_53);
    }
    {
      xml_element QuotEntryAck_1{"QuotEntryAck"};
      multiset<string> QuotEntryAck_1_set;
      QuotEntryAck_1.add_attribute("EntryID", "QuoteEntryID_t_63180112"); // 2
      QuotEntryAck_1_set.insert("QuoteEntryID_t_63180112");
      QuotEntryAck_1.add_attribute("BidPx", "20502300.680000"); // 2
      QuotEntryAck_1_set.insert("20502300.680000");
      QuotEntryAck_1.add_attribute("OfrPx", "20066976.110000"); // 2
      QuotEntryAck_1_set.insert("20066976.110000");
      QuotEntryAck_1.add_attribute("BidSz", "4040678.150000"); // 2
      QuotEntryAck_1_set.insert("4040678.150000");
      QuotEntryAck_1.add_attribute("OfrSz", "6720017.180000"); // 2
      QuotEntryAck_1_set.insert("6720017.180000");
      QuotEntryAck_1.add_attribute("ValidUntilTm", "ValidUntilTime_t_2001315470"); // 2
      QuotEntryAck_1_set.insert("ValidUntilTime_t_2001315470");
      QuotEntryAck_1.add_attribute("BidSpotRt", "17512263.060000"); // 2
      QuotEntryAck_1_set.insert("17512263.060000");
      QuotEntryAck_1.add_attribute("OfrSpotRt", "16978923.380000"); // 2
      QuotEntryAck_1_set.insert("16978923.380000");
      QuotEntryAck_1.add_attribute("BidFwdPnts", "17273977.120000"); // 2
      QuotEntryAck_1_set.insert("17273977.120000");
      QuotEntryAck_1.add_attribute("OfrFwdPnts", "3333852.370000"); // 2
      QuotEntryAck_1_set.insert("3333852.370000");
      QuotEntryAck_1.add_attribute("MidPx", "14435641.530000"); // 2
      QuotEntryAck_1_set.insert("14435641.530000");
      QuotEntryAck_1.add_attribute("BidYld", "4530455.800000"); // 2
      QuotEntryAck_1_set.insert("4530455.800000");
      QuotEntryAck_1.add_attribute("MidYld", "14826313.040000"); // 2
      QuotEntryAck_1_set.insert("14826313.040000");
      QuotEntryAck_1.add_attribute("OfrYld", "13933742.570000"); // 2
      QuotEntryAck_1_set.insert("13933742.570000");
      QuotEntryAck_1.add_attribute("TxnTm", "TransactTime_t_2035191413"); // 2
      QuotEntryAck_1_set.insert("TransactTime_t_2035191413");
      QuotEntryAck_1.add_attribute("SesID", "3"); // 2
      QuotEntryAck_1_set.insert("3");
      QuotEntryAck_1.add_attribute("SesSub", "3"); // 2
      QuotEntryAck_1_set.insert("3");
      QuotEntryAck_1.add_attribute("SettlDt", "SettlDate_t_1182689489"); // 2
      QuotEntryAck_1_set.insert("SettlDate_t_1182689489");
      QuotEntryAck_1.add_attribute("OrdTyp", "9"); // 2
      QuotEntryAck_1_set.insert("9");
      QuotEntryAck_1.add_attribute("SettlDt2", "SettlDate2_t_61369663"); // 2
      QuotEntryAck_1_set.insert("SettlDate2_t_61369663");
      QuotEntryAck_1.add_attribute("Qty2", "914584.920000"); // 2
      QuotEntryAck_1_set.insert("914584.920000");
      QuotEntryAck_1.add_attribute("BidFwdPnts2", "5017380.600000"); // 2
      QuotEntryAck_1_set.insert("5017380.600000");
      QuotEntryAck_1.add_attribute("OfrFwdPnts2", "13151184.700000"); // 2
      QuotEntryAck_1_set.insert("13151184.700000");
      QuotEntryAck_1.add_attribute("Ccy", "CHF"); // 2
      QuotEntryAck_1_set.insert("CHF");
      QuotEntryAck_1.add_attribute("BkngTyp", "1"); // 2
      QuotEntryAck_1_set.insert("1");
      QuotEntryAck_1.add_attribute("Cpcty", "A"); // 2
      QuotEntryAck_1_set.insert("A");
      QuotEntryAck_1.add_attribute("Rstctions", "F"); // 2
      QuotEntryAck_1_set.insert("F");
      QuotEntryAck_1.add_attribute("QtEntSts", "14"); // 2
      QuotEntryAck_1_set.insert("14");
      QuotEntryAck_1.add_attribute("EntryRejRsn", "1"); // 2
      QuotEntryAck_1_set.insert("1");
      all_values.push_back(QuotEntryAck_1_set);
      all_compo_names.insert("QuotEntryAck_1_set");

      {
        xml_element Instrmt_39{"Instrmt"};
        multiset<string> Instrmt_39_set;
        Instrmt_39.add_attribute("Sym", "Symbol_t_179246885"); // 3
        Instrmt_39_set.insert("Symbol_t_179246885");
        Instrmt_39.add_attribute("Sfx", "CD"); // 3
        Instrmt_39_set.insert("CD");
        Instrmt_39.add_attribute("ID", "SecurityID_t_308943008"); // 3
        Instrmt_39_set.insert("SecurityID_t_308943008");
        Instrmt_39.add_attribute("Src", "9"); // 3
        Instrmt_39_set.insert("9");
        Instrmt_39.add_attribute("Prod", "13"); // 3
        Instrmt_39_set.insert("13");
        Instrmt_39.add_attribute("ProdCmplx", "ProductComplex_t_980944726"); // 3
        Instrmt_39_set.insert("ProductComplex_t_980944726");
        Instrmt_39.add_attribute("SecGrp", "SecurityGroup_t_2039776318"); // 3
        Instrmt_39_set.insert("SecurityGroup_t_2039776318");
        Instrmt_39.add_attribute("CFI", "CFICode_t_2117182316"); // 3
        Instrmt_39_set.insert("CFICode_t_2117182316");
        Instrmt_39.add_attribute("SecTyp", "BRADY"); // 3
        Instrmt_39_set.insert("BRADY");
        Instrmt_39.add_attribute("SubTyp", "SecuritySubType_t_1619690383"); // 3
        Instrmt_39_set.insert("SecuritySubType_t_1619690383");
        Instrmt_39.add_attribute("MMY", "303083905"); // 3
        Instrmt_39_set.insert("303083905");
        Instrmt_39.add_attribute("MatDt", "MaturityDate_t_1974917569"); // 3
        Instrmt_39_set.insert("MaturityDate_t_1974917569");
        Instrmt_39.add_attribute("MatTm", "2072735963"); // 3
        Instrmt_39_set.insert("2072735963");
        Instrmt_39.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1785715209"); // 3
        Instrmt_39_set.insert("SettleOnOpenFlag_t_1785715209");
        Instrmt_39.add_attribute("AsgnMeth", "1220808178"); // 3
        Instrmt_39_set.insert("1220808178");
        Instrmt_39.add_attribute("Status", "2"); // 3
        Instrmt_39_set.insert("2");
        Instrmt_39.add_attribute("CpnPmt", "CouponPaymentDate_t_655341993"); // 3
        Instrmt_39_set.insert("CouponPaymentDate_t_655341993");
        Instrmt_39.add_attribute("RestrctTyp", "MM"); // 3
        Instrmt_39_set.insert("MM");
        Instrmt_39.add_attribute("Snrty", "SD"); // 3
        Instrmt_39_set.insert("SD");
        Instrmt_39.add_attribute("NotlPctOut", "10994051.690000"); // 3
        Instrmt_39_set.insert("10994051.690000");
        Instrmt_39.add_attribute("OrigNotlPctOut", "15053183.490000"); // 3
        Instrmt_39_set.insert("15053183.490000");
        Instrmt_39.add_attribute("AttchPnt", "10871080.620000"); // 3
        Instrmt_39_set.insert("10871080.620000");
        Instrmt_39.add_attribute("DetchPnt", "16011432.290000"); // 3
        Instrmt_39_set.insert("16011432.290000");
        Instrmt_39.add_attribute("Issued", "IssueDate_t_672953172"); // 3
        Instrmt_39_set.insert("IssueDate_t_672953172");
        Instrmt_39.add_attribute("RepoCollSecTyp", "1050990517"); // 3
        Instrmt_39_set.insert("1050990517");
        Instrmt_39.add_attribute("RepoTrm", "22818444"); // 3
        Instrmt_39_set.insert("22818444");
        Instrmt_39.add_attribute("RepoRt", "1916530.970000"); // 3
        Instrmt_39_set.insert("1916530.970000");
        Instrmt_39.add_attribute("Fctr", "13677154.400000"); // 3
        Instrmt_39_set.insert("13677154.400000");
        Instrmt_39.add_attribute("CrdRtg", "CreditRating_t_607440053"); // 3
        Instrmt_39_set.insert("CreditRating_t_607440053");
        Instrmt_39.add_attribute("Rgstry", "InstrRegistry_t_90361179"); // 3
        Instrmt_39_set.insert("InstrRegistry_t_90361179");
        Instrmt_39.add_attribute("IssuCtry", "1773912028"); // 3
        Instrmt_39_set.insert("1773912028");
        Instrmt_39.add_attribute("StPrv", "StateOrProvinceOfIssue_t_786686939"); // 3
        Instrmt_39_set.insert("StateOrProvinceOfIssue_t_786686939");
        Instrmt_39.add_attribute("Lcl", "LocaleOfIssue_t_52249373"); // 3
        Instrmt_39_set.insert("LocaleOfIssue_t_52249373");
        Instrmt_39.add_attribute("Redeem", "RedemptionDate_t_2082855036"); // 3
        Instrmt_39_set.insert("RedemptionDate_t_2082855036");
        Instrmt_39.add_attribute("StrkPx", "8251477.870000"); // 3
        Instrmt_39_set.insert("8251477.870000");
        Instrmt_39.add_attribute("StrkCcy", "GBP"); // 3
        Instrmt_39_set.insert("GBP");
        Instrmt_39.add_attribute("StrkMult", "7174404.580000"); // 3
        Instrmt_39_set.insert("7174404.580000");
        Instrmt_39.add_attribute("StrkValu", "3879040.510000"); // 3
        Instrmt_39_set.insert("3879040.510000");
        Instrmt_39.add_attribute("StrkPxDtrmnMeth", "3"); // 3
        Instrmt_39_set.insert("3");
        Instrmt_39.add_attribute("StrkPxBndryMeth", "4"); // 3
        Instrmt_39_set.insert("4");
        Instrmt_39.add_attribute("StrkPxBndryPrcsn", "6909879.570000"); // 3
        Instrmt_39_set.insert("6909879.570000");
        Instrmt_39.add_attribute("PxDtrmnMeth", "4"); // 3
        Instrmt_39_set.insert("4");
        Instrmt_39.add_attribute("OptAt", "114899508"); // 3
        Instrmt_39_set.insert("114899508");
        Instrmt_39.add_attribute("Mult", "3292195.180000"); // 3
        Instrmt_39_set.insert("3292195.180000");
        Instrmt_39.add_attribute("MultTyp", "1"); // 3
        Instrmt_39_set.insert("1");
        Instrmt_39.add_attribute("FlowSchedTyp", "2"); // 3
        Instrmt_39_set.insert("2");
        Instrmt_39.add_attribute("MinPxIncr", "9845615.120000"); // 3
        Instrmt_39_set.insert("9845615.120000");
        Instrmt_39.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1792376667"); // 3
        Instrmt_39_set.insert("MinPriceIncrementAmount_t_1792376667");
        Instrmt_39.add_attribute("UOM", "MMBtu"); // 3
        Instrmt_39_set.insert("MMBtu");
        Instrmt_39.add_attribute("UOMQty", "20839666.810000"); // 3
        Instrmt_39_set.insert("20839666.810000");
        Instrmt_39.add_attribute("PxUOM", "oz_tr"); // 3
        Instrmt_39_set.insert("oz_tr");
        Instrmt_39.add_attribute("PxUOMQty", "20106172.220000"); // 3
        Instrmt_39_set.insert("20106172.220000");
        Instrmt_39.add_attribute("SettlMeth", "P"); // 3
        Instrmt_39_set.insert("P");
        Instrmt_39.add_attribute("ExerStyle", "2"); // 3
        Instrmt_39_set.insert("2");
        Instrmt_39.add_attribute("OptPayoutTyp", "2"); // 3
        Instrmt_39_set.insert("2");
        Instrmt_39.add_attribute("OptPayAmt", "OptPayoutAmount_t_1560444707"); // 3
        Instrmt_39_set.insert("OptPayoutAmount_t_1560444707");
        Instrmt_39.add_attribute("PxQteMeth", "INT"); // 3
        Instrmt_39_set.insert("INT");
        Instrmt_39.add_attribute("ValMeth", "CDS"); // 3
        Instrmt_39_set.insert("CDS");
        Instrmt_39.add_attribute("ListMeth", "1"); // 3
        Instrmt_39_set.insert("1");
        Instrmt_39.add_attribute("CapPx", "21051788.170000"); // 3
        Instrmt_39_set.insert("21051788.170000");
        Instrmt_39.add_attribute("FlrPx", "19082679.110000"); // 3
        Instrmt_39_set.insert("19082679.110000");
        Instrmt_39.add_attribute("PutCall", "0"); // 3
        Instrmt_39_set.insert("0");
        Instrmt_39.add_attribute("FlexInd", "true"); // 3
        Instrmt_39_set.insert("true");
        Instrmt_39.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_39_set.insert("false");
        Instrmt_39.add_attribute("TmUnit", "D"); // 3
        Instrmt_39_set.insert("D");
        Instrmt_39.add_attribute("CpnRt", "4281499.260000"); // 3
        Instrmt_39_set.insert("4281499.260000");
        Instrmt_39.add_attribute("Exch", "SecurityExchange_t_612471765"); // 3
        Instrmt_39_set.insert("SecurityExchange_t_612471765");
        Instrmt_39.add_attribute("PosLmt", "202192649"); // 3
        Instrmt_39_set.insert("202192649");
        Instrmt_39.add_attribute("NTPosLmt", "816053977"); // 3
        Instrmt_39_set.insert("816053977");
        Instrmt_39.add_attribute("Issr", "Issuer_t_2060141295"); // 3
        Instrmt_39_set.insert("Issuer_t_2060141295");
        Instrmt_39.add_attribute("EncIssrLen", "391839842"); // 3
        Instrmt_39_set.insert("391839842");
        Instrmt_39.add_attribute("EncIssr", "EncodedIssuer_t_1507041934"); // 3
        Instrmt_39_set.insert("EncodedIssuer_t_1507041934");
        Instrmt_39.add_attribute("Desc", "SecurityDesc_t_1187761098"); // 3
        Instrmt_39_set.insert("SecurityDesc_t_1187761098");
        Instrmt_39.add_attribute("EncSecDescLen", "506739351"); // 3
        Instrmt_39_set.insert("506739351");
        Instrmt_39.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1836261453"); // 3
        Instrmt_39_set.insert("EncodedSecurityDesc_t_1836261453");
        Instrmt_39.add_attribute("Pool", "Pool_t_1536189080"); // 3
        Instrmt_39_set.insert("Pool_t_1536189080");
        Instrmt_39.add_attribute("CSetMo", "434598940"); // 3
        Instrmt_39_set.insert("434598940");
        Instrmt_39.add_attribute("CPPgm", "1"); // 3
        Instrmt_39_set.insert("1");
        Instrmt_39.add_attribute("CPRegT", "CPRegType_t_1181082099"); // 3
        Instrmt_39_set.insert("CPRegType_t_1181082099");
        Instrmt_39.add_attribute("Dated", "DatedDate_t_1358108100"); // 3
        Instrmt_39_set.insert("DatedDate_t_1358108100");
        Instrmt_39.add_attribute("IntAcrl", "InterestAccrualDate_t_609822350"); // 3
        Instrmt_39_set.insert("InterestAccrualDate_t_609822350");
        all_values.push_back(Instrmt_39_set);
        all_compo_names.insert("Instrmt_39_set");

        {
          xml_element AID_42{"AID"};
          multiset<string> AID_42_set;
          AID_42.add_attribute("AltID", "SecurityAltID_t_183809820"); // 4
          AID_42_set.insert("SecurityAltID_t_183809820");
          AID_42.add_attribute("AltIDSrc", "5"); // 4
          AID_42_set.insert("5");
          all_values.push_back(AID_42_set);
          all_compo_names.insert("AID_42_set");

          Instrmt_39.add_element(AID_42);
        }
        {
          xml_element SecXML_42{"SecXML"};
          multiset<string> SecXML_42_set;
          SecXML_42.add_attribute("Schema", "SecurityXMLSchema_t_2147448613"); // 4
          SecXML_42_set.insert("SecurityXMLSchema_t_2147448613");
          all_values.push_back(SecXML_42_set);
          all_compo_names.insert("SecXML_42_set");

          Instrmt_39.add_element(SecXML_42);
        }
        {
          xml_element Evnt_42{"Evnt"};
          multiset<string> Evnt_42_set;
          Evnt_42.add_attribute("EventTyp", "2"); // 4
          Evnt_42_set.insert("2");
          Evnt_42.add_attribute("Dt", "EventDate_t_2135365765"); // 4
          Evnt_42_set.insert("EventDate_t_2135365765");
          Evnt_42.add_attribute("Tm", "EventTime_t_1560409673"); // 4
          Evnt_42_set.insert("EventTime_t_1560409673");
          Evnt_42.add_attribute("Px", "18743083.510000"); // 4
          Evnt_42_set.insert("18743083.510000");
          Evnt_42.add_attribute("Txt", "EventText_t_122238001"); // 4
          Evnt_42_set.insert("EventText_t_122238001");
          all_values.push_back(Evnt_42_set);
          all_compo_names.insert("Evnt_42_set");

          Instrmt_39.add_element(Evnt_42);
        }
        {
          xml_element Pty_212{"Pty"};
          multiset<string> Pty_212_set;
          Pty_212.add_attribute("ID", "InstrumentPartyID_t_1580810786"); // 4
          Pty_212_set.insert("InstrumentPartyID_t_1580810786");
          Pty_212.add_attribute("Src", "7"); // 4
          Pty_212_set.insert("7");
          Pty_212.add_attribute("R", "9"); // 4
          Pty_212_set.insert("9");
          all_values.push_back(Pty_212_set);
          all_compo_names.insert("Pty_212_set");

          {
            xml_element Sub_212{"Sub"};
            multiset<string> Sub_212_set;
            Sub_212.add_attribute("ID", "InstrumentPartySubID_t_240415190"); // 5
            Sub_212_set.insert("InstrumentPartySubID_t_240415190");
            Sub_212.add_attribute("Typ", "33"); // 5
            Sub_212_set.insert("33");
            all_values.push_back(Sub_212_set);
            all_compo_names.insert("Sub_212_set");

            Pty_212.add_element(Sub_212);
          }
          Instrmt_39.add_element(Pty_212);
        }
        {
          xml_element CmplxEvnt_39{"CmplxEvnt"};
          multiset<string> CmplxEvnt_39_set;
          CmplxEvnt_39.add_attribute("Typ", "9"); // 4
          CmplxEvnt_39_set.insert("9");
          CmplxEvnt_39.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1872651029"); // 4
          CmplxEvnt_39_set.insert("ComplexOptPayoutAmount_t_1872651029");
          CmplxEvnt_39.add_attribute("Px", "1226143.410000"); // 4
          CmplxEvnt_39_set.insert("1226143.410000");
          CmplxEvnt_39.add_attribute("PxBndryMeth", "2"); // 4
          CmplxEvnt_39_set.insert("2");
          CmplxEvnt_39.add_attribute("PxBndryPrcsn", "20748436.790000"); // 4
          CmplxEvnt_39_set.insert("20748436.790000");
          CmplxEvnt_39.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_39_set.insert("2");
          CmplxEvnt_39.add_attribute("Cond", "2"); // 4
          CmplxEvnt_39_set.insert("2");
          all_values.push_back(CmplxEvnt_39_set);
          all_compo_names.insert("CmplxEvnt_39_set");

          {
            xml_element EvntDts_39{"EvntDts"};
            multiset<string> EvntDts_39_set;
            EvntDts_39.add_attribute("StartDt", "ComplexEventStartDate_t_319199873"); // 5
            EvntDts_39_set.insert("ComplexEventStartDate_t_319199873");
            EvntDts_39.add_attribute("EndDt", "ComplexEventEndDate_t_298226605"); // 5
            EvntDts_39_set.insert("ComplexEventEndDate_t_298226605");
            all_values.push_back(EvntDts_39_set);
            all_compo_names.insert("EvntDts_39_set");

            {
              xml_element EvntTms_39{"EvntTms"};
              multiset<string> EvntTms_39_set;
              EvntTms_39.add_attribute("StartTm", "1292068427"); // 6
              EvntTms_39_set.insert("1292068427");
              EvntTms_39.add_attribute("EndTm", "825939224"); // 6
              EvntTms_39_set.insert("825939224");
              all_values.push_back(EvntTms_39_set);
              all_compo_names.insert("EvntTms_39_set");

              EvntDts_39.add_element(EvntTms_39);
            }
            CmplxEvnt_39.add_element(EvntDts_39);
          }
          Instrmt_39.add_element(CmplxEvnt_39);
        }
        QuotEntryAck_1.add_element(Instrmt_39);
      }
      {
        xml_element Leg_52{"Leg"};
        multiset<string> Leg_52_set;
        Leg_52.add_attribute("Sym", "LegSymbol_t_2134488058"); // 3
        Leg_52_set.insert("LegSymbol_t_2134488058");
        Leg_52.add_attribute("Sfx", "WI"); // 3
        Leg_52_set.insert("WI");
        Leg_52.add_attribute("ID", "LegSecurityID_t_1260538165"); // 3
        Leg_52_set.insert("LegSecurityID_t_1260538165");
        Leg_52.add_attribute("Src", "M"); // 3
        Leg_52_set.insert("M");
        Leg_52.add_attribute("Prod", "11"); // 3
        Leg_52_set.insert("11");
        Leg_52.add_attribute("CFI", "LegCFICode_t_471162617"); // 3
        Leg_52_set.insert("LegCFICode_t_471162617");
        Leg_52.add_attribute("SecTyp", "IET"); // 3
        Leg_52_set.insert("IET");
        Leg_52.add_attribute("SecSubTyp", "LegSecuritySubType_t_2045665779"); // 3
        Leg_52_set.insert("LegSecuritySubType_t_2045665779");
        Leg_52.add_attribute("MMY", "1692404291"); // 3
        Leg_52_set.insert("1692404291");
        Leg_52.add_attribute("Mat", "LegMaturityDate_t_1270131043"); // 3
        Leg_52_set.insert("LegMaturityDate_t_1270131043");
        Leg_52.add_attribute("MatTm", "1905156493"); // 3
        Leg_52_set.insert("1905156493");
        Leg_52.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1680286408"); // 3
        Leg_52_set.insert("LegCouponPaymentDate_t_1680286408");
        Leg_52.add_attribute("Issued", "LegIssueDate_t_683057068"); // 3
        Leg_52_set.insert("LegIssueDate_t_683057068");
        Leg_52.add_attribute("RepoCollSecTyp", "1631981196"); // 3
        Leg_52_set.insert("1631981196");
        Leg_52.add_attribute("RepoTrm", "1802524409"); // 3
        Leg_52_set.insert("1802524409");
        Leg_52.add_attribute("RepoRt", "1163842.060000"); // 3
        Leg_52_set.insert("1163842.060000");
        Leg_52.add_attribute("Fctr", "13165010.690000"); // 3
        Leg_52_set.insert("13165010.690000");
        Leg_52.add_attribute("CrdRtg", "LegCreditRating_t_1685546674"); // 3
        Leg_52_set.insert("LegCreditRating_t_1685546674");
        Leg_52.add_attribute("Rgstry", "LegInstrRegistry_t_356799396"); // 3
        Leg_52_set.insert("LegInstrRegistry_t_356799396");
        Leg_52.add_attribute("Ctry", "1010965484"); // 3
        Leg_52_set.insert("1010965484");
        Leg_52.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1264724590"); // 3
        Leg_52_set.insert("LegStateOrProvinceOfIssue_t_1264724590");
        Leg_52.add_attribute("Lcl", "LegLocaleOfIssue_t_81966777"); // 3
        Leg_52_set.insert("LegLocaleOfIssue_t_81966777");
        Leg_52.add_attribute("Redeem", "LegRedemptionDate_t_1133579825"); // 3
        Leg_52_set.insert("LegRedemptionDate_t_1133579825");
        Leg_52.add_attribute("Strk", "14563742.710000"); // 3
        Leg_52_set.insert("14563742.710000");
        Leg_52.add_attribute("StrkCcy", "CHF"); // 3
        Leg_52_set.insert("CHF");
        Leg_52.add_attribute("OptA", "1560681600"); // 3
        Leg_52_set.insert("1560681600");
        Leg_52.add_attribute("Cmult", "3285266.820000"); // 3
        Leg_52_set.insert("3285266.820000");
        Leg_52.add_attribute("MultTyp", "2"); // 3
        Leg_52_set.insert("2");
        Leg_52.add_attribute("FlowSchedTyp", "0"); // 3
        Leg_52_set.insert("0");
        Leg_52.add_attribute("UOM", "USD"); // 3
        Leg_52_set.insert("USD");
        Leg_52.add_attribute("UOMQty", "2099955.100000"); // 3
        Leg_52_set.insert("2099955.100000");
        Leg_52.add_attribute("PxUOM", "Alw"); // 3
        Leg_52_set.insert("Alw");
        Leg_52.add_attribute("PxUOMQty", "2675204.230000"); // 3
        Leg_52_set.insert("2675204.230000");
        Leg_52.add_attribute("TmUnit", "Mo"); // 3
        Leg_52_set.insert("Mo");
        Leg_52.add_attribute("ExerStyle", "1"); // 3
        Leg_52_set.insert("1");
        Leg_52.add_attribute("CpnRt", "7386830.400000"); // 3
        Leg_52_set.insert("7386830.400000");
        Leg_52.add_attribute("Exch", "LegSecurityExchange_t_2140505315"); // 3
        Leg_52_set.insert("LegSecurityExchange_t_2140505315");
        Leg_52.add_attribute("Issr", "LegIssuer_t_998594682"); // 3
        Leg_52_set.insert("LegIssuer_t_998594682");
        Leg_52.add_attribute("EncLegIssrLen", "283603683"); // 3
        Leg_52_set.insert("283603683");
        Leg_52.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1263152710"); // 3
        Leg_52_set.insert("EncodedLegIssuer_t_1263152710");
        Leg_52.add_attribute("Desc", "LegSecurityDesc_t_756267527"); // 3
        Leg_52_set.insert("LegSecurityDesc_t_756267527");
        Leg_52.add_attribute("EncLegSecDescLen", "1963890092"); // 3
        Leg_52_set.insert("1963890092");
        Leg_52.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1946209778"); // 3
        Leg_52_set.insert("EncodedLegSecurityDesc_t_1946209778");
        Leg_52.add_attribute("RatioQty", "2407650.750000"); // 3
        Leg_52_set.insert("2407650.750000");
        Leg_52.add_attribute("Side", "6"); // 3
        Leg_52_set.insert("6");
        Leg_52.add_attribute("Ccy", "GBP"); // 3
        Leg_52_set.insert("GBP");
        Leg_52.add_attribute("Pool", "LegPool_t_1156993879"); // 3
        Leg_52_set.insert("LegPool_t_1156993879");
        Leg_52.add_attribute("Dated", "LegDatedDate_t_271909732"); // 3
        Leg_52_set.insert("LegDatedDate_t_271909732");
        Leg_52.add_attribute("CSetMo", "420747980"); // 3
        Leg_52_set.insert("420747980");
        Leg_52.add_attribute("IntAcrl", "LegInterestAccrualDate_t_274234821"); // 3
        Leg_52_set.insert("LegInterestAccrualDate_t_274234821");
        Leg_52.add_attribute("PutCall", "353876509"); // 3
        Leg_52_set.insert("353876509");
        Leg_52.add_attribute("LegOptionRatio", "15543278.050000"); // 3
        Leg_52_set.insert("15543278.050000");
        Leg_52.add_attribute("Px", "17306090.930000"); // 3
        Leg_52_set.insert("17306090.930000");
        all_values.push_back(Leg_52_set);
        all_compo_names.insert("Leg_52_set");

        {
          xml_element LegAID_52{"LegAID"};
          multiset<string> LegAID_52_set;
          LegAID_52.add_attribute("SecAltID", "LegSecurityAltID_t_363203318"); // 4
          LegAID_52_set.insert("LegSecurityAltID_t_363203318");
          LegAID_52.add_attribute("SecAltIDSrc", "6"); // 4
          LegAID_52_set.insert("6");
          all_values.push_back(LegAID_52_set);
          all_compo_names.insert("LegAID_52_set");

          Leg_52.add_element(LegAID_52);
        }
        QuotEntryAck_1.add_element(Leg_52);
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
