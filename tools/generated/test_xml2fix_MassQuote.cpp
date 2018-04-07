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
  elt.add_attribute("ReqID", "QuoteReqID_t_1708810960"); // 0
  MassQuote_message_t_0.insert("QuoteReqID_t_1708810960");
  elt.add_attribute("QID", "QuoteID_t_1803063967"); // 0
  MassQuote_message_t_0.insert("QuoteID_t_1803063967");
  elt.add_attribute("Typ", "2"); // 0
  MassQuote_message_t_0.insert("2");
  elt.add_attribute("RspLvl", "2"); // 0
  MassQuote_message_t_0.insert("2");
  elt.add_attribute("Acct", "Account_t_1694905463"); // 0
  MassQuote_message_t_0.insert("Account_t_1694905463");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  MassQuote_message_t_0.insert("5");
  elt.add_attribute("AcctTyp", "7"); // 0
  MassQuote_message_t_0.insert("7");
  elt.add_attribute("DefBidSz", "11060794.800000"); // 0
  MassQuote_message_t_0.insert("11060794.800000");
  elt.add_attribute("DefOfrSz", "4158877.870000"); // 0
  MassQuote_message_t_0.insert("4158877.870000");
  all_values.push_back(MassQuote_message_t_0);
  all_compo_names.insert("MassQuote_message_t");

  { // Hdr
    xml_element Hdr_46{"Hdr"};
    multiset<string> Hdr_46_set;
    Hdr_46.add_attribute("SeqNum", "148998102"); // 1
    Hdr_46_set.insert("148998102");
    Hdr_46.add_attribute("SID", "SenderCompID_t_291922813"); // 1
    Hdr_46_set.insert("SenderCompID_t_291922813");
    Hdr_46.add_attribute("TID", "TargetCompID_t_676285946"); // 1
    Hdr_46_set.insert("TargetCompID_t_676285946");
    Hdr_46.add_attribute("OBID", "OnBehalfOfCompID_t_2104738626"); // 1
    Hdr_46_set.insert("OnBehalfOfCompID_t_2104738626");
    Hdr_46.add_attribute("D2ID", "DeliverToCompID_t_2027237089"); // 1
    Hdr_46_set.insert("DeliverToCompID_t_2027237089");
    Hdr_46.add_attribute("SSub", "SenderSubID_t_1263484255"); // 1
    Hdr_46_set.insert("SenderSubID_t_1263484255");
    Hdr_46.add_attribute("SLoc", "SenderLocationID_t_205004869"); // 1
    Hdr_46_set.insert("SenderLocationID_t_205004869");
    Hdr_46.add_attribute("TSub", "TargetSubID_t_252665002"); // 1
    Hdr_46_set.insert("TargetSubID_t_252665002");
    Hdr_46.add_attribute("TLoc", "TargetLocationID_t_908409509"); // 1
    Hdr_46_set.insert("TargetLocationID_t_908409509");
    Hdr_46.add_attribute("OBSub", "OnBehalfOfSubID_t_1027763372"); // 1
    Hdr_46_set.insert("OnBehalfOfSubID_t_1027763372");
    Hdr_46.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1591985219"); // 1
    Hdr_46_set.insert("OnBehalfOfLocationID_t_1591985219");
    Hdr_46.add_attribute("D2Sub", "DeliverToSubID_t_1966977884"); // 1
    Hdr_46_set.insert("DeliverToSubID_t_1966977884");
    Hdr_46.add_attribute("D2Loc", "DeliverToLocationID_t_308629127"); // 1
    Hdr_46_set.insert("DeliverToLocationID_t_308629127");
    Hdr_46.add_attribute("PosDup", "Y"); // 1
    Hdr_46_set.insert("Y");
    Hdr_46.add_attribute("PosRsnd", "N"); // 1
    Hdr_46_set.insert("N");
    Hdr_46.add_attribute("Snt", "SendingTime_t_17418210"); // 1
    Hdr_46_set.insert("SendingTime_t_17418210");
    Hdr_46.add_attribute("OrigSnt", "OrigSendingTime_t_302173148"); // 1
    Hdr_46_set.insert("OrigSendingTime_t_302173148");
    Hdr_46.add_attribute("MsgEncd", "MessageEncoding_t_1718528169"); // 1
    Hdr_46_set.insert("MessageEncoding_t_1718528169");
    all_values.push_back(Hdr_46_set);
    all_compo_names.insert("Hdr_46_set");

    {
      xml_element Hop_46{"Hop"};
      multiset<string> Hop_46_set;
      Hop_46.add_attribute("ID", "HopCompID_t_2006723220"); // 2
      Hop_46_set.insert("HopCompID_t_2006723220");
      Hop_46.add_attribute("Ref", "282194598"); // 2
      Hop_46_set.insert("282194598");
      Hop_46.add_attribute("Snt", "HopSendingTime_t_717168444"); // 2
      Hop_46_set.insert("HopSendingTime_t_717168444");
      all_values.push_back(Hop_46_set);
      all_compo_names.insert("Hop_46_set");

      Hdr_46.add_element(Hop_46);
    }
    elt.add_element(Hdr_46);
  } // end Hdr
  { // Pty
    xml_element Pty_200{"Pty"};
    multiset<string> Pty_200_set;
    Pty_200.add_attribute("ID", "PartyID_t_1991005558"); // 1
    Pty_200_set.insert("PartyID_t_1991005558");
    Pty_200.add_attribute("Src", "D"); // 1
    Pty_200_set.insert("D");
    Pty_200.add_attribute("R", "54"); // 1
    Pty_200_set.insert("54");
    all_values.push_back(Pty_200_set);
    all_compo_names.insert("Pty_200_set");

    {
      xml_element Sub_200{"Sub"};
      multiset<string> Sub_200_set;
      Sub_200.add_attribute("ID", "PartySubID_t_623287028"); // 2
      Sub_200_set.insert("PartySubID_t_623287028");
      Sub_200.add_attribute("Typ", "7"); // 2
      Sub_200_set.insert("7");
      all_values.push_back(Sub_200_set);
      all_compo_names.insert("Sub_200_set");

      Pty_200.add_element(Sub_200);
    }
    elt.add_element(Pty_200);
  } // end Pty
  { // QuotSet
    xml_element QuotSet_0{"QuotSet"};
    multiset<string> QuotSet_0_set;
    QuotSet_0.add_attribute("SetID", "QuoteSetID_t_1418867021"); // 1
    QuotSet_0_set.insert("QuoteSetID_t_1418867021");
    QuotSet_0.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1026250059"); // 1
    QuotSet_0_set.insert("QuoteSetValidUntilTime_t_1026250059");
    QuotSet_0.add_attribute("TotNoQuotEntries", "349447495"); // 1
    QuotSet_0_set.insert("349447495");
    QuotSet_0.add_attribute("LastFragment", "Y"); // 1
    QuotSet_0_set.insert("Y");
    all_values.push_back(QuotSet_0_set);
    all_compo_names.insert("QuotSet_0_set");

    {
      xml_element Undly_49{"Undly"};
      multiset<string> Undly_49_set;
      Undly_49.add_attribute("Sym", "UnderlyingSymbol_t_1318172872"); // 2
      Undly_49_set.insert("UnderlyingSymbol_t_1318172872");
      Undly_49.add_attribute("Sfx", "CD"); // 2
      Undly_49_set.insert("CD");
      Undly_49.add_attribute("ID", "UnderlyingSecurityID_t_1525120102"); // 2
      Undly_49_set.insert("UnderlyingSecurityID_t_1525120102");
      Undly_49.add_attribute("Src", "2"); // 2
      Undly_49_set.insert("2");
      Undly_49.add_attribute("Prod", "11"); // 2
      Undly_49_set.insert("11");
      Undly_49.add_attribute("CFI", "UnderlyingCFICode_t_1730124971"); // 2
      Undly_49_set.insert("UnderlyingCFICode_t_1730124971");
      Undly_49.add_attribute("SecTyp", "USTB"); // 2
      Undly_49_set.insert("USTB");
      Undly_49.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1050143559"); // 2
      Undly_49_set.insert("UnderlyingSecuritySubType_t_1050143559");
      Undly_49.add_attribute("MMY", "610404695"); // 2
      Undly_49_set.insert("610404695");
      Undly_49.add_attribute("Mat", "UnderlyingMaturityDate_t_895092887"); // 2
      Undly_49_set.insert("UnderlyingMaturityDate_t_895092887");
      Undly_49.add_attribute("MatTm", "869637795"); // 2
      Undly_49_set.insert("869637795");
      Undly_49.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_919033823"); // 2
      Undly_49_set.insert("UnderlyingCouponPaymentDate_t_919033823");
      Undly_49.add_attribute("RestrctTyp", "FR"); // 2
      Undly_49_set.insert("FR");
      Undly_49.add_attribute("Snrty", "SB"); // 2
      Undly_49_set.insert("SB");
      Undly_49.add_attribute("NotlPctOut", "9364520.330000"); // 2
      Undly_49_set.insert("9364520.330000");
      Undly_49.add_attribute("OrigNotlPctOut", "7234069.570000"); // 2
      Undly_49_set.insert("7234069.570000");
      Undly_49.add_attribute("AttchPnt", "16066010.340000"); // 2
      Undly_49_set.insert("16066010.340000");
      Undly_49.add_attribute("DetchPnt", "7956916.050000"); // 2
      Undly_49_set.insert("7956916.050000");
      Undly_49.add_attribute("Issued", "UnderlyingIssueDate_t_1005601555"); // 2
      Undly_49_set.insert("UnderlyingIssueDate_t_1005601555");
      Undly_49.add_attribute("RepoCollSecTyp", "176285831"); // 2
      Undly_49_set.insert("176285831");
      Undly_49.add_attribute("RepoTrm", "1809468078"); // 2
      Undly_49_set.insert("1809468078");
      Undly_49.add_attribute("RepoRt", "8491234.650000"); // 2
      Undly_49_set.insert("8491234.650000");
      Undly_49.add_attribute("Fctr", "5490345.950000"); // 2
      Undly_49_set.insert("5490345.950000");
      Undly_49.add_attribute("CrdRtg", "UnderlyingCreditRating_t_982319498"); // 2
      Undly_49_set.insert("UnderlyingCreditRating_t_982319498");
      Undly_49.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1472410493"); // 2
      Undly_49_set.insert("UnderlyingInstrRegistry_t_1472410493");
      Undly_49.add_attribute("Ctry", "469205174"); // 2
      Undly_49_set.insert("469205174");
      Undly_49.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_915879206"); // 2
      Undly_49_set.insert("UnderlyingStateOrProvinceOfIssue_t_915879206");
      Undly_49.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_743793866"); // 2
      Undly_49_set.insert("UnderlyingLocaleOfIssue_t_743793866");
      Undly_49.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1495455234"); // 2
      Undly_49_set.insert("UnderlyingRedemptionDate_t_1495455234");
      Undly_49.add_attribute("StrkPx", "12653267.010000"); // 2
      Undly_49_set.insert("12653267.010000");
      Undly_49.add_attribute("StrkCcy", "GBP"); // 2
      Undly_49_set.insert("GBP");
      Undly_49.add_attribute("OptA", "143576495"); // 2
      Undly_49_set.insert("143576495");
      Undly_49.add_attribute("Mult", "16892954.440000"); // 2
      Undly_49_set.insert("16892954.440000");
      Undly_49.add_attribute("MultTyp", "0"); // 2
      Undly_49_set.insert("0");
      Undly_49.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_49_set.insert("0");
      Undly_49.add_attribute("UOM", "Bcf"); // 2
      Undly_49_set.insert("Bcf");
      Undly_49.add_attribute("UOMQty", "11671784.390000"); // 2
      Undly_49_set.insert("11671784.390000");
      Undly_49.add_attribute("PxUOM", "Bcf"); // 2
      Undly_49_set.insert("Bcf");
      Undly_49.add_attribute("PxUOMQty", "18823414.620000"); // 2
      Undly_49_set.insert("18823414.620000");
      Undly_49.add_attribute("TmUnit", "D"); // 2
      Undly_49_set.insert("D");
      Undly_49.add_attribute("ExerStyle", "1"); // 2
      Undly_49_set.insert("1");
      Undly_49.add_attribute("CpnRt", "6538916.370000"); // 2
      Undly_49_set.insert("6538916.370000");
      Undly_49.add_attribute("Exch", "UnderlyingSecurityExchange_t_336021487"); // 2
      Undly_49_set.insert("UnderlyingSecurityExchange_t_336021487");
      Undly_49.add_attribute("Issr", "UnderlyingIssuer_t_2093164764"); // 2
      Undly_49_set.insert("UnderlyingIssuer_t_2093164764");
      Undly_49.add_attribute("EncUndIssrLen", "1590343671"); // 2
      Undly_49_set.insert("1590343671");
      Undly_49.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1059428444"); // 2
      Undly_49_set.insert("EncodedUnderlyingIssuer_t_1059428444");
      Undly_49.add_attribute("Desc", "UnderlyingSecurityDesc_t_1552282151"); // 2
      Undly_49_set.insert("UnderlyingSecurityDesc_t_1552282151");
      Undly_49.add_attribute("EncUndSecDescLen", "238551628"); // 2
      Undly_49_set.insert("238551628");
      Undly_49.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2065029999"); // 2
      Undly_49_set.insert("EncodedUnderlyingSecurityDesc_t_2065029999");
      Undly_49.add_attribute("CPPgm", "UnderlyingCPProgram_t_1728567982"); // 2
      Undly_49_set.insert("UnderlyingCPProgram_t_1728567982");
      Undly_49.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2048019707"); // 2
      Undly_49_set.insert("UnderlyingCPRegType_t_2048019707");
      Undly_49.add_attribute("AllocPct", "7666698.160000"); // 2
      Undly_49_set.insert("7666698.160000");
      Undly_49.add_attribute("Ccy", "CAN"); // 2
      Undly_49_set.insert("CAN");
      Undly_49.add_attribute("Qty", "915966.610000"); // 2
      Undly_49_set.insert("915966.610000");
      Undly_49.add_attribute("SettlTyp", "2"); // 2
      Undly_49_set.insert("2");
      Undly_49.add_attribute("CashAmt", "UnderlyingCashAmount_t_1798734763"); // 2
      Undly_49_set.insert("UnderlyingCashAmount_t_1798734763");
      Undly_49.add_attribute("CashTyp", "DIFF"); // 2
      Undly_49_set.insert("DIFF");
      Undly_49.add_attribute("Px", "20947793.370000"); // 2
      Undly_49_set.insert("20947793.370000");
      Undly_49.add_attribute("DirtPx", "9165778.160000"); // 2
      Undly_49_set.insert("9165778.160000");
      Undly_49.add_attribute("EndPx", "9995658.690000"); // 2
      Undly_49_set.insert("9995658.690000");
      Undly_49.add_attribute("StartVal", "UnderlyingStartValue_t_613440148"); // 2
      Undly_49_set.insert("UnderlyingStartValue_t_613440148");
      Undly_49.add_attribute("CurVal", "UnderlyingCurrentValue_t_1060154312"); // 2
      Undly_49_set.insert("UnderlyingCurrentValue_t_1060154312");
      Undly_49.add_attribute("EndVal", "UnderlyingEndValue_t_541377665"); // 2
      Undly_49_set.insert("UnderlyingEndValue_t_541377665");
      Undly_49.add_attribute("AdjQty", "3300272.720000"); // 2
      Undly_49_set.insert("3300272.720000");
      Undly_49.add_attribute("FxRate", "13454648.570000"); // 2
      Undly_49_set.insert("13454648.570000");
      Undly_49.add_attribute("FxRateCalc", "M"); // 2
      Undly_49_set.insert("M");
      Undly_49.add_attribute("CapValu", "UnderlyingCapValue_t_1497205711"); // 2
      Undly_49_set.insert("UnderlyingCapValue_t_1497205711");
      Undly_49.add_attribute("SetMeth", "UnderlyingSettlMethod_t_533435313"); // 2
      Undly_49_set.insert("UnderlyingSettlMethod_t_533435313");
      Undly_49.add_attribute("PutCall", "1548172247"); // 2
      Undly_49_set.insert("1548172247");
      all_values.push_back(Undly_49_set);
      all_compo_names.insert("Undly_49_set");

      {
        xml_element UndAID_49{"UndAID"};
        multiset<string> UndAID_49_set;
        UndAID_49.add_attribute("AltID", "UnderlyingSecurityAltID_t_1411993390"); // 3
        UndAID_49_set.insert("UnderlyingSecurityAltID_t_1411993390");
        UndAID_49.add_attribute("AltIDSrc", "D"); // 3
        UndAID_49_set.insert("D");
        all_values.push_back(UndAID_49_set);
        all_compo_names.insert("UndAID_49_set");

        Undly_49.add_element(UndAID_49);
      }
      {
        xml_element Stip_73{"Stip"};
        multiset<string> Stip_73_set;
        Stip_73.add_attribute("Typ", "SALESCREDITOVR"); // 3
        Stip_73_set.insert("SALESCREDITOVR");
        Stip_73.add_attribute("Val", "UnderlyingStipValue_t_1748014877"); // 3
        Stip_73_set.insert("UnderlyingStipValue_t_1748014877");
        all_values.push_back(Stip_73_set);
        all_compo_names.insert("Stip_73_set");

        Undly_49.add_element(Stip_73);
      }
      {
        xml_element Pty_201{"Pty"};
        multiset<string> Pty_201_set;
        Pty_201.add_attribute("ID", "UnderlyingInstrumentPartyID_t_536724680"); // 3
        Pty_201_set.insert("UnderlyingInstrumentPartyID_t_536724680");
        Pty_201.add_attribute("Src", "A"); // 3
        Pty_201_set.insert("A");
        Pty_201.add_attribute("R", "67"); // 3
        Pty_201_set.insert("67");
        all_values.push_back(Pty_201_set);
        all_compo_names.insert("Pty_201_set");

        {
          xml_element Sub_201{"Sub"};
          multiset<string> Sub_201_set;
          Sub_201.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2089006831"); // 4
          Sub_201_set.insert("UnderlyingInstrumentPartySubID_t_2089006831");
          Sub_201.add_attribute("Typ", "17"); // 4
          Sub_201_set.insert("17");
          all_values.push_back(Sub_201_set);
          all_compo_names.insert("Sub_201_set");

          Pty_201.add_element(Sub_201);
        }
        Undly_49.add_element(Pty_201);
      }
      QuotSet_0.add_element(Undly_49);
    }
    {
      xml_element QuotEntry_0{"QuotEntry"};
      multiset<string> QuotEntry_0_set;
      QuotEntry_0.add_attribute("EntryID", "QuoteEntryID_t_577506024"); // 2
      QuotEntry_0_set.insert("QuoteEntryID_t_577506024");
      QuotEntry_0.add_attribute("BidPx", "16700911.650000"); // 2
      QuotEntry_0_set.insert("16700911.650000");
      QuotEntry_0.add_attribute("OfrPx", "17840115.950000"); // 2
      QuotEntry_0_set.insert("17840115.950000");
      QuotEntry_0.add_attribute("BidSz", "13441758.400000"); // 2
      QuotEntry_0_set.insert("13441758.400000");
      QuotEntry_0.add_attribute("OfrSz", "18002100.940000"); // 2
      QuotEntry_0_set.insert("18002100.940000");
      QuotEntry_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_519383504"); // 2
      QuotEntry_0_set.insert("ValidUntilTime_t_519383504");
      QuotEntry_0.add_attribute("BidSpotRt", "14357725.010000"); // 2
      QuotEntry_0_set.insert("14357725.010000");
      QuotEntry_0.add_attribute("OfrSpotRt", "2520505.500000"); // 2
      QuotEntry_0_set.insert("2520505.500000");
      QuotEntry_0.add_attribute("BidFwdPnts", "1706346.190000"); // 2
      QuotEntry_0_set.insert("1706346.190000");
      QuotEntry_0.add_attribute("OfrFwdPnts", "1236793.800000"); // 2
      QuotEntry_0_set.insert("1236793.800000");
      QuotEntry_0.add_attribute("MidPx", "1993462.390000"); // 2
      QuotEntry_0_set.insert("1993462.390000");
      QuotEntry_0.add_attribute("BidYld", "10872124.350000"); // 2
      QuotEntry_0_set.insert("10872124.350000");
      QuotEntry_0.add_attribute("MidYld", "11232452.500000"); // 2
      QuotEntry_0_set.insert("11232452.500000");
      QuotEntry_0.add_attribute("OfrYld", "8127863.870000"); // 2
      QuotEntry_0_set.insert("8127863.870000");
      QuotEntry_0.add_attribute("TxnTm", "TransactTime_t_2147366747"); // 2
      QuotEntry_0_set.insert("TransactTime_t_2147366747");
      QuotEntry_0.add_attribute("SesID", "4"); // 2
      QuotEntry_0_set.insert("4");
      QuotEntry_0.add_attribute("SesSub", "2"); // 2
      QuotEntry_0_set.insert("2");
      QuotEntry_0.add_attribute("SettlDt", "SettlDate_t_1345347956"); // 2
      QuotEntry_0_set.insert("SettlDate_t_1345347956");
      QuotEntry_0.add_attribute("OrdTyp", "L"); // 2
      QuotEntry_0_set.insert("L");
      QuotEntry_0.add_attribute("SettlDt2", "SettlDate2_t_492535723"); // 2
      QuotEntry_0_set.insert("SettlDate2_t_492535723");
      QuotEntry_0.add_attribute("Qty2", "18787832.690000"); // 2
      QuotEntry_0_set.insert("18787832.690000");
      QuotEntry_0.add_attribute("BidFwdPnts2", "7311422.990000"); // 2
      QuotEntry_0_set.insert("7311422.990000");
      QuotEntry_0.add_attribute("OfrFwdPnts2", "19045291.130000"); // 2
      QuotEntry_0_set.insert("19045291.130000");
      QuotEntry_0.add_attribute("Ccy", "CAN"); // 2
      QuotEntry_0_set.insert("CAN");
      QuotEntry_0.add_attribute("BkngTyp", "2"); // 2
      QuotEntry_0_set.insert("2");
      QuotEntry_0.add_attribute("Cpcty", "R"); // 2
      QuotEntry_0_set.insert("R");
      QuotEntry_0.add_attribute("Rstctions", "B"); // 2
      QuotEntry_0_set.insert("B");
      all_values.push_back(QuotEntry_0_set);
      all_compo_names.insert("QuotEntry_0_set");

      {
        xml_element Instrmt_35{"Instrmt"};
        multiset<string> Instrmt_35_set;
        Instrmt_35.add_attribute("Sym", "Symbol_t_17536367"); // 3
        Instrmt_35_set.insert("Symbol_t_17536367");
        Instrmt_35.add_attribute("Sfx", "WI"); // 3
        Instrmt_35_set.insert("WI");
        Instrmt_35.add_attribute("ID", "SecurityID_t_19154683"); // 3
        Instrmt_35_set.insert("SecurityID_t_19154683");
        Instrmt_35.add_attribute("Src", "A"); // 3
        Instrmt_35_set.insert("A");
        Instrmt_35.add_attribute("Prod", "12"); // 3
        Instrmt_35_set.insert("12");
        Instrmt_35.add_attribute("ProdCmplx", "ProductComplex_t_1803166278"); // 3
        Instrmt_35_set.insert("ProductComplex_t_1803166278");
        Instrmt_35.add_attribute("SecGrp", "SecurityGroup_t_1939218231"); // 3
        Instrmt_35_set.insert("SecurityGroup_t_1939218231");
        Instrmt_35.add_attribute("CFI", "CFICode_t_2123408661"); // 3
        Instrmt_35_set.insert("CFICode_t_2123408661");
        Instrmt_35.add_attribute("SecTyp", "LOFC"); // 3
        Instrmt_35_set.insert("LOFC");
        Instrmt_35.add_attribute("SubTyp", "SecuritySubType_t_1227507084"); // 3
        Instrmt_35_set.insert("SecuritySubType_t_1227507084");
        Instrmt_35.add_attribute("MMY", "227975563"); // 3
        Instrmt_35_set.insert("227975563");
        Instrmt_35.add_attribute("MatDt", "MaturityDate_t_345700753"); // 3
        Instrmt_35_set.insert("MaturityDate_t_345700753");
        Instrmt_35.add_attribute("MatTm", "1351186464"); // 3
        Instrmt_35_set.insert("1351186464");
        Instrmt_35.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_427321803"); // 3
        Instrmt_35_set.insert("SettleOnOpenFlag_t_427321803");
        Instrmt_35.add_attribute("AsgnMeth", "1432913188"); // 3
        Instrmt_35_set.insert("1432913188");
        Instrmt_35.add_attribute("Status", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("CpnPmt", "CouponPaymentDate_t_1240108190"); // 3
        Instrmt_35_set.insert("CouponPaymentDate_t_1240108190");
        Instrmt_35.add_attribute("RestrctTyp", "FR"); // 3
        Instrmt_35_set.insert("FR");
        Instrmt_35.add_attribute("Snrty", "SD"); // 3
        Instrmt_35_set.insert("SD");
        Instrmt_35.add_attribute("NotlPctOut", "2354382.020000"); // 3
        Instrmt_35_set.insert("2354382.020000");
        Instrmt_35.add_attribute("OrigNotlPctOut", "6306605.960000"); // 3
        Instrmt_35_set.insert("6306605.960000");
        Instrmt_35.add_attribute("AttchPnt", "11745410.340000"); // 3
        Instrmt_35_set.insert("11745410.340000");
        Instrmt_35.add_attribute("DetchPnt", "7279739.250000"); // 3
        Instrmt_35_set.insert("7279739.250000");
        Instrmt_35.add_attribute("Issued", "IssueDate_t_361960218"); // 3
        Instrmt_35_set.insert("IssueDate_t_361960218");
        Instrmt_35.add_attribute("RepoCollSecTyp", "1905683333"); // 3
        Instrmt_35_set.insert("1905683333");
        Instrmt_35.add_attribute("RepoTrm", "485019390"); // 3
        Instrmt_35_set.insert("485019390");
        Instrmt_35.add_attribute("RepoRt", "6843034.030000"); // 3
        Instrmt_35_set.insert("6843034.030000");
        Instrmt_35.add_attribute("Fctr", "5439222.200000"); // 3
        Instrmt_35_set.insert("5439222.200000");
        Instrmt_35.add_attribute("CrdRtg", "CreditRating_t_1990079732"); // 3
        Instrmt_35_set.insert("CreditRating_t_1990079732");
        Instrmt_35.add_attribute("Rgstry", "InstrRegistry_t_1543371269"); // 3
        Instrmt_35_set.insert("InstrRegistry_t_1543371269");
        Instrmt_35.add_attribute("IssuCtry", "827085015"); // 3
        Instrmt_35_set.insert("827085015");
        Instrmt_35.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2007616099"); // 3
        Instrmt_35_set.insert("StateOrProvinceOfIssue_t_2007616099");
        Instrmt_35.add_attribute("Lcl", "LocaleOfIssue_t_196478671"); // 3
        Instrmt_35_set.insert("LocaleOfIssue_t_196478671");
        Instrmt_35.add_attribute("Redeem", "RedemptionDate_t_846239698"); // 3
        Instrmt_35_set.insert("RedemptionDate_t_846239698");
        Instrmt_35.add_attribute("StrkPx", "4551748.420000"); // 3
        Instrmt_35_set.insert("4551748.420000");
        Instrmt_35.add_attribute("StrkCcy", "GBP"); // 3
        Instrmt_35_set.insert("GBP");
        Instrmt_35.add_attribute("StrkMult", "2469094.250000"); // 3
        Instrmt_35_set.insert("2469094.250000");
        Instrmt_35.add_attribute("StrkValu", "4956022.510000"); // 3
        Instrmt_35_set.insert("4956022.510000");
        Instrmt_35.add_attribute("StrkPxDtrmnMeth", "3"); // 3
        Instrmt_35_set.insert("3");
        Instrmt_35.add_attribute("StrkPxBndryMeth", "5"); // 3
        Instrmt_35_set.insert("5");
        Instrmt_35.add_attribute("StrkPxBndryPrcsn", "7235778.150000"); // 3
        Instrmt_35_set.insert("7235778.150000");
        Instrmt_35.add_attribute("PxDtrmnMeth", "4"); // 3
        Instrmt_35_set.insert("4");
        Instrmt_35.add_attribute("OptAt", "678119325"); // 3
        Instrmt_35_set.insert("678119325");
        Instrmt_35.add_attribute("Mult", "11508996.180000"); // 3
        Instrmt_35_set.insert("11508996.180000");
        Instrmt_35.add_attribute("MultTyp", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("FlowSchedTyp", "2"); // 3
        Instrmt_35_set.insert("2");
        Instrmt_35.add_attribute("MinPxIncr", "2435241.600000"); // 3
        Instrmt_35_set.insert("2435241.600000");
        Instrmt_35.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1740915044"); // 3
        Instrmt_35_set.insert("MinPriceIncrementAmount_t_1740915044");
        Instrmt_35.add_attribute("UOM", "t"); // 3
        Instrmt_35_set.insert("t");
        Instrmt_35.add_attribute("UOMQty", "4789623.620000"); // 3
        Instrmt_35_set.insert("4789623.620000");
        Instrmt_35.add_attribute("PxUOM", "lbs"); // 3
        Instrmt_35_set.insert("lbs");
        Instrmt_35.add_attribute("PxUOMQty", "20236957.600000"); // 3
        Instrmt_35_set.insert("20236957.600000");
        Instrmt_35.add_attribute("SettlMeth", "P"); // 3
        Instrmt_35_set.insert("P");
        Instrmt_35.add_attribute("ExerStyle", "2"); // 3
        Instrmt_35_set.insert("2");
        Instrmt_35.add_attribute("OptPayoutTyp", "2"); // 3
        Instrmt_35_set.insert("2");
        Instrmt_35.add_attribute("OptPayAmt", "OptPayoutAmount_t_1691955677"); // 3
        Instrmt_35_set.insert("OptPayoutAmount_t_1691955677");
        Instrmt_35.add_attribute("PxQteMeth", "INT"); // 3
        Instrmt_35_set.insert("INT");
        Instrmt_35.add_attribute("ValMeth", "FUTDA"); // 3
        Instrmt_35_set.insert("FUTDA");
        Instrmt_35.add_attribute("ListMeth", "1"); // 3
        Instrmt_35_set.insert("1");
        Instrmt_35.add_attribute("CapPx", "6662432.350000"); // 3
        Instrmt_35_set.insert("6662432.350000");
        Instrmt_35.add_attribute("FlrPx", "10054190.330000"); // 3
        Instrmt_35_set.insert("10054190.330000");
        Instrmt_35.add_attribute("PutCall", "0"); // 3
        Instrmt_35_set.insert("0");
        Instrmt_35.add_attribute("FlexInd", "true"); // 3
        Instrmt_35_set.insert("true");
        Instrmt_35.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_35_set.insert("false");
        Instrmt_35.add_attribute("TmUnit", "Min"); // 3
        Instrmt_35_set.insert("Min");
        Instrmt_35.add_attribute("CpnRt", "13823991.440000"); // 3
        Instrmt_35_set.insert("13823991.440000");
        Instrmt_35.add_attribute("Exch", "SecurityExchange_t_206097412"); // 3
        Instrmt_35_set.insert("SecurityExchange_t_206097412");
        Instrmt_35.add_attribute("PosLmt", "2096768479"); // 3
        Instrmt_35_set.insert("2096768479");
        Instrmt_35.add_attribute("NTPosLmt", "1878001396"); // 3
        Instrmt_35_set.insert("1878001396");
        Instrmt_35.add_attribute("Issr", "Issuer_t_883085874"); // 3
        Instrmt_35_set.insert("Issuer_t_883085874");
        Instrmt_35.add_attribute("EncIssrLen", "1423701340"); // 3
        Instrmt_35_set.insert("1423701340");
        Instrmt_35.add_attribute("EncIssr", "EncodedIssuer_t_454095563"); // 3
        Instrmt_35_set.insert("EncodedIssuer_t_454095563");
        Instrmt_35.add_attribute("Desc", "SecurityDesc_t_1905775090"); // 3
        Instrmt_35_set.insert("SecurityDesc_t_1905775090");
        Instrmt_35.add_attribute("EncSecDescLen", "2101820666"); // 3
        Instrmt_35_set.insert("2101820666");
        Instrmt_35.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1604995181"); // 3
        Instrmt_35_set.insert("EncodedSecurityDesc_t_1604995181");
        Instrmt_35.add_attribute("Pool", "Pool_t_66410198"); // 3
        Instrmt_35_set.insert("Pool_t_66410198");
        Instrmt_35.add_attribute("CSetMo", "959404410"); // 3
        Instrmt_35_set.insert("959404410");
        Instrmt_35.add_attribute("CPPgm", "99"); // 3
        Instrmt_35_set.insert("99");
        Instrmt_35.add_attribute("CPRegT", "CPRegType_t_1807325242"); // 3
        Instrmt_35_set.insert("CPRegType_t_1807325242");
        Instrmt_35.add_attribute("Dated", "DatedDate_t_1808559136"); // 3
        Instrmt_35_set.insert("DatedDate_t_1808559136");
        Instrmt_35.add_attribute("IntAcrl", "InterestAccrualDate_t_179998056"); // 3
        Instrmt_35_set.insert("InterestAccrualDate_t_179998056");
        all_values.push_back(Instrmt_35_set);
        all_compo_names.insert("Instrmt_35_set");

        {
          xml_element AID_38{"AID"};
          multiset<string> AID_38_set;
          AID_38.add_attribute("AltID", "SecurityAltID_t_2031417234"); // 4
          AID_38_set.insert("SecurityAltID_t_2031417234");
          AID_38.add_attribute("AltIDSrc", "7"); // 4
          AID_38_set.insert("7");
          all_values.push_back(AID_38_set);
          all_compo_names.insert("AID_38_set");

          Instrmt_35.add_element(AID_38);
        }
        {
          xml_element SecXML_38{"SecXML"};
          multiset<string> SecXML_38_set;
          SecXML_38.add_attribute("Schema", "SecurityXMLSchema_t_1386934343"); // 4
          SecXML_38_set.insert("SecurityXMLSchema_t_1386934343");
          all_values.push_back(SecXML_38_set);
          all_compo_names.insert("SecXML_38_set");

          Instrmt_35.add_element(SecXML_38);
        }
        {
          xml_element Evnt_38{"Evnt"};
          multiset<string> Evnt_38_set;
          Evnt_38.add_attribute("EventTyp", "17"); // 4
          Evnt_38_set.insert("17");
          Evnt_38.add_attribute("Dt", "EventDate_t_1319183045"); // 4
          Evnt_38_set.insert("EventDate_t_1319183045");
          Evnt_38.add_attribute("Tm", "EventTime_t_931406373"); // 4
          Evnt_38_set.insert("EventTime_t_931406373");
          Evnt_38.add_attribute("Px", "17403414.110000"); // 4
          Evnt_38_set.insert("17403414.110000");
          Evnt_38.add_attribute("Txt", "EventText_t_1497517062"); // 4
          Evnt_38_set.insert("EventText_t_1497517062");
          all_values.push_back(Evnt_38_set);
          all_compo_names.insert("Evnt_38_set");

          Instrmt_35.add_element(Evnt_38);
        }
        {
          xml_element Pty_202{"Pty"};
          multiset<string> Pty_202_set;
          Pty_202.add_attribute("ID", "InstrumentPartyID_t_318474486"); // 4
          Pty_202_set.insert("InstrumentPartyID_t_318474486");
          Pty_202.add_attribute("Src", "H"); // 4
          Pty_202_set.insert("H");
          Pty_202.add_attribute("R", "65"); // 4
          Pty_202_set.insert("65");
          all_values.push_back(Pty_202_set);
          all_compo_names.insert("Pty_202_set");

          {
            xml_element Sub_202{"Sub"};
            multiset<string> Sub_202_set;
            Sub_202.add_attribute("ID", "InstrumentPartySubID_t_1713158699"); // 5
            Sub_202_set.insert("InstrumentPartySubID_t_1713158699");
            Sub_202.add_attribute("Typ", "24"); // 5
            Sub_202_set.insert("24");
            all_values.push_back(Sub_202_set);
            all_compo_names.insert("Sub_202_set");

            Pty_202.add_element(Sub_202);
          }
          Instrmt_35.add_element(Pty_202);
        }
        {
          xml_element CmplxEvnt_35{"CmplxEvnt"};
          multiset<string> CmplxEvnt_35_set;
          CmplxEvnt_35.add_attribute("Typ", "3"); // 4
          CmplxEvnt_35_set.insert("3");
          CmplxEvnt_35.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1415534105"); // 4
          CmplxEvnt_35_set.insert("ComplexOptPayoutAmount_t_1415534105");
          CmplxEvnt_35.add_attribute("Px", "3567384.010000"); // 4
          CmplxEvnt_35_set.insert("3567384.010000");
          CmplxEvnt_35.add_attribute("PxBndryMeth", "4"); // 4
          CmplxEvnt_35_set.insert("4");
          CmplxEvnt_35.add_attribute("PxBndryPrcsn", "13648189.370000"); // 4
          CmplxEvnt_35_set.insert("13648189.370000");
          CmplxEvnt_35.add_attribute("PxTmTyp", "1"); // 4
          CmplxEvnt_35_set.insert("1");
          CmplxEvnt_35.add_attribute("Cond", "2"); // 4
          CmplxEvnt_35_set.insert("2");
          all_values.push_back(CmplxEvnt_35_set);
          all_compo_names.insert("CmplxEvnt_35_set");

          {
            xml_element EvntDts_35{"EvntDts"};
            multiset<string> EvntDts_35_set;
            EvntDts_35.add_attribute("StartDt", "ComplexEventStartDate_t_641036629"); // 5
            EvntDts_35_set.insert("ComplexEventStartDate_t_641036629");
            EvntDts_35.add_attribute("EndDt", "ComplexEventEndDate_t_541351712"); // 5
            EvntDts_35_set.insert("ComplexEventEndDate_t_541351712");
            all_values.push_back(EvntDts_35_set);
            all_compo_names.insert("EvntDts_35_set");

            {
              xml_element EvntTms_35{"EvntTms"};
              multiset<string> EvntTms_35_set;
              EvntTms_35.add_attribute("StartTm", "907102259"); // 6
              EvntTms_35_set.insert("907102259");
              EvntTms_35.add_attribute("EndTm", "595373647"); // 6
              EvntTms_35_set.insert("595373647");
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
        Leg_48.add_attribute("Sym", "LegSymbol_t_2146346893"); // 3
        Leg_48_set.insert("LegSymbol_t_2146346893");
        Leg_48.add_attribute("Sfx", "WI"); // 3
        Leg_48_set.insert("WI");
        Leg_48.add_attribute("ID", "LegSecurityID_t_1554778057"); // 3
        Leg_48_set.insert("LegSecurityID_t_1554778057");
        Leg_48.add_attribute("Src", "I"); // 3
        Leg_48_set.insert("I");
        Leg_48.add_attribute("Prod", "2"); // 3
        Leg_48_set.insert("2");
        Leg_48.add_attribute("CFI", "LegCFICode_t_1215853545"); // 3
        Leg_48_set.insert("LegCFICode_t_1215853545");
        Leg_48.add_attribute("SecTyp", "CDS"); // 3
        Leg_48_set.insert("CDS");
        Leg_48.add_attribute("SecSubTyp", "LegSecuritySubType_t_517287638"); // 3
        Leg_48_set.insert("LegSecuritySubType_t_517287638");
        Leg_48.add_attribute("MMY", "753141145"); // 3
        Leg_48_set.insert("753141145");
        Leg_48.add_attribute("Mat", "LegMaturityDate_t_1266831338"); // 3
        Leg_48_set.insert("LegMaturityDate_t_1266831338");
        Leg_48.add_attribute("MatTm", "987273435"); // 3
        Leg_48_set.insert("987273435");
        Leg_48.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2072324190"); // 3
        Leg_48_set.insert("LegCouponPaymentDate_t_2072324190");
        Leg_48.add_attribute("Issued", "LegIssueDate_t_50754063"); // 3
        Leg_48_set.insert("LegIssueDate_t_50754063");
        Leg_48.add_attribute("RepoCollSecTyp", "580131198"); // 3
        Leg_48_set.insert("580131198");
        Leg_48.add_attribute("RepoTrm", "1422357605"); // 3
        Leg_48_set.insert("1422357605");
        Leg_48.add_attribute("RepoRt", "3692285.500000"); // 3
        Leg_48_set.insert("3692285.500000");
        Leg_48.add_attribute("Fctr", "8392321.960000"); // 3
        Leg_48_set.insert("8392321.960000");
        Leg_48.add_attribute("CrdRtg", "LegCreditRating_t_1777810052"); // 3
        Leg_48_set.insert("LegCreditRating_t_1777810052");
        Leg_48.add_attribute("Rgstry", "LegInstrRegistry_t_2082387249"); // 3
        Leg_48_set.insert("LegInstrRegistry_t_2082387249");
        Leg_48.add_attribute("Ctry", "1961055101"); // 3
        Leg_48_set.insert("1961055101");
        Leg_48.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1837437583"); // 3
        Leg_48_set.insert("LegStateOrProvinceOfIssue_t_1837437583");
        Leg_48.add_attribute("Lcl", "LegLocaleOfIssue_t_1350437706"); // 3
        Leg_48_set.insert("LegLocaleOfIssue_t_1350437706");
        Leg_48.add_attribute("Redeem", "LegRedemptionDate_t_170309855"); // 3
        Leg_48_set.insert("LegRedemptionDate_t_170309855");
        Leg_48.add_attribute("Strk", "21031625.260000"); // 3
        Leg_48_set.insert("21031625.260000");
        Leg_48.add_attribute("StrkCcy", "GBP"); // 3
        Leg_48_set.insert("GBP");
        Leg_48.add_attribute("OptA", "1104489696"); // 3
        Leg_48_set.insert("1104489696");
        Leg_48.add_attribute("Cmult", "12088096.250000"); // 3
        Leg_48_set.insert("12088096.250000");
        Leg_48.add_attribute("MultTyp", "2"); // 3
        Leg_48_set.insert("2");
        Leg_48.add_attribute("FlowSchedTyp", "0"); // 3
        Leg_48_set.insert("0");
        Leg_48.add_attribute("UOM", "oz_tr"); // 3
        Leg_48_set.insert("oz_tr");
        Leg_48.add_attribute("UOMQty", "7977809.620000"); // 3
        Leg_48_set.insert("7977809.620000");
        Leg_48.add_attribute("PxUOM", "lbs"); // 3
        Leg_48_set.insert("lbs");
        Leg_48.add_attribute("PxUOMQty", "12114776.820000"); // 3
        Leg_48_set.insert("12114776.820000");
        Leg_48.add_attribute("TmUnit", "Mo"); // 3
        Leg_48_set.insert("Mo");
        Leg_48.add_attribute("ExerStyle", "2"); // 3
        Leg_48_set.insert("2");
        Leg_48.add_attribute("CpnRt", "2798475.790000"); // 3
        Leg_48_set.insert("2798475.790000");
        Leg_48.add_attribute("Exch", "LegSecurityExchange_t_377576896"); // 3
        Leg_48_set.insert("LegSecurityExchange_t_377576896");
        Leg_48.add_attribute("Issr", "LegIssuer_t_1988262454"); // 3
        Leg_48_set.insert("LegIssuer_t_1988262454");
        Leg_48.add_attribute("EncLegIssrLen", "1032988725"); // 3
        Leg_48_set.insert("1032988725");
        Leg_48.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1644408235"); // 3
        Leg_48_set.insert("EncodedLegIssuer_t_1644408235");
        Leg_48.add_attribute("Desc", "LegSecurityDesc_t_828052241"); // 3
        Leg_48_set.insert("LegSecurityDesc_t_828052241");
        Leg_48.add_attribute("EncLegSecDescLen", "957829267"); // 3
        Leg_48_set.insert("957829267");
        Leg_48.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1695162298"); // 3
        Leg_48_set.insert("EncodedLegSecurityDesc_t_1695162298");
        Leg_48.add_attribute("RatioQty", "14081834.390000"); // 3
        Leg_48_set.insert("14081834.390000");
        Leg_48.add_attribute("Side", "9"); // 3
        Leg_48_set.insert("9");
        Leg_48.add_attribute("Ccy", "GBP"); // 3
        Leg_48_set.insert("GBP");
        Leg_48.add_attribute("Pool", "LegPool_t_2010513277"); // 3
        Leg_48_set.insert("LegPool_t_2010513277");
        Leg_48.add_attribute("Dated", "LegDatedDate_t_1999294449"); // 3
        Leg_48_set.insert("LegDatedDate_t_1999294449");
        Leg_48.add_attribute("CSetMo", "2060987089"); // 3
        Leg_48_set.insert("2060987089");
        Leg_48.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1700467212"); // 3
        Leg_48_set.insert("LegInterestAccrualDate_t_1700467212");
        Leg_48.add_attribute("PutCall", "1202248508"); // 3
        Leg_48_set.insert("1202248508");
        Leg_48.add_attribute("LegOptionRatio", "838132.960000"); // 3
        Leg_48_set.insert("838132.960000");
        Leg_48.add_attribute("Px", "16561460.910000"); // 3
        Leg_48_set.insert("16561460.910000");
        all_values.push_back(Leg_48_set);
        all_compo_names.insert("Leg_48_set");

        {
          xml_element LegAID_48{"LegAID"};
          multiset<string> LegAID_48_set;
          LegAID_48.add_attribute("SecAltID", "LegSecurityAltID_t_1770021503"); // 4
          LegAID_48_set.insert("LegSecurityAltID_t_1770021503");
          LegAID_48.add_attribute("SecAltIDSrc", "M"); // 4
          LegAID_48_set.insert("M");
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
    QuotSet_1.add_attribute("SetID", "QuoteSetID_t_613152139"); // 1
    QuotSet_1_set.insert("QuoteSetID_t_613152139");
    QuotSet_1.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_831347480"); // 1
    QuotSet_1_set.insert("QuoteSetValidUntilTime_t_831347480");
    QuotSet_1.add_attribute("TotNoQuotEntries", "1140297018"); // 1
    QuotSet_1_set.insert("1140297018");
    QuotSet_1.add_attribute("LastFragment", "N"); // 1
    QuotSet_1_set.insert("N");
    all_values.push_back(QuotSet_1_set);
    all_compo_names.insert("QuotSet_1_set");

    {
      xml_element Undly_50{"Undly"};
      multiset<string> Undly_50_set;
      Undly_50.add_attribute("Sym", "UnderlyingSymbol_t_488047105"); // 2
      Undly_50_set.insert("UnderlyingSymbol_t_488047105");
      Undly_50.add_attribute("Sfx", "CD"); // 2
      Undly_50_set.insert("CD");
      Undly_50.add_attribute("ID", "UnderlyingSecurityID_t_1314881211"); // 2
      Undly_50_set.insert("UnderlyingSecurityID_t_1314881211");
      Undly_50.add_attribute("Src", "G"); // 2
      Undly_50_set.insert("G");
      Undly_50.add_attribute("Prod", "10"); // 2
      Undly_50_set.insert("10");
      Undly_50.add_attribute("CFI", "UnderlyingCFICode_t_638372380"); // 2
      Undly_50_set.insert("UnderlyingCFICode_t_638372380");
      Undly_50.add_attribute("SecTyp", "CD"); // 2
      Undly_50_set.insert("CD");
      Undly_50.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_665851130"); // 2
      Undly_50_set.insert("UnderlyingSecuritySubType_t_665851130");
      Undly_50.add_attribute("MMY", "479151186"); // 2
      Undly_50_set.insert("479151186");
      Undly_50.add_attribute("Mat", "UnderlyingMaturityDate_t_864877443"); // 2
      Undly_50_set.insert("UnderlyingMaturityDate_t_864877443");
      Undly_50.add_attribute("MatTm", "162775717"); // 2
      Undly_50_set.insert("162775717");
      Undly_50.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1307203428"); // 2
      Undly_50_set.insert("UnderlyingCouponPaymentDate_t_1307203428");
      Undly_50.add_attribute("RestrctTyp", "XR"); // 2
      Undly_50_set.insert("XR");
      Undly_50.add_attribute("Snrty", "SD"); // 2
      Undly_50_set.insert("SD");
      Undly_50.add_attribute("NotlPctOut", "5679032.190000"); // 2
      Undly_50_set.insert("5679032.190000");
      Undly_50.add_attribute("OrigNotlPctOut", "20554099.350000"); // 2
      Undly_50_set.insert("20554099.350000");
      Undly_50.add_attribute("AttchPnt", "17748452.160000"); // 2
      Undly_50_set.insert("17748452.160000");
      Undly_50.add_attribute("DetchPnt", "6678352.070000"); // 2
      Undly_50_set.insert("6678352.070000");
      Undly_50.add_attribute("Issued", "UnderlyingIssueDate_t_1918439564"); // 2
      Undly_50_set.insert("UnderlyingIssueDate_t_1918439564");
      Undly_50.add_attribute("RepoCollSecTyp", "1626656018"); // 2
      Undly_50_set.insert("1626656018");
      Undly_50.add_attribute("RepoTrm", "581338649"); // 2
      Undly_50_set.insert("581338649");
      Undly_50.add_attribute("RepoRt", "14714231.290000"); // 2
      Undly_50_set.insert("14714231.290000");
      Undly_50.add_attribute("Fctr", "6814208.780000"); // 2
      Undly_50_set.insert("6814208.780000");
      Undly_50.add_attribute("CrdRtg", "UnderlyingCreditRating_t_665151945"); // 2
      Undly_50_set.insert("UnderlyingCreditRating_t_665151945");
      Undly_50.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_980085572"); // 2
      Undly_50_set.insert("UnderlyingInstrRegistry_t_980085572");
      Undly_50.add_attribute("Ctry", "303958733"); // 2
      Undly_50_set.insert("303958733");
      Undly_50.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1006531246"); // 2
      Undly_50_set.insert("UnderlyingStateOrProvinceOfIssue_t_1006531246");
      Undly_50.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1593237711"); // 2
      Undly_50_set.insert("UnderlyingLocaleOfIssue_t_1593237711");
      Undly_50.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1135306214"); // 2
      Undly_50_set.insert("UnderlyingRedemptionDate_t_1135306214");
      Undly_50.add_attribute("StrkPx", "21468282.640000"); // 2
      Undly_50_set.insert("21468282.640000");
      Undly_50.add_attribute("StrkCcy", "CHF"); // 2
      Undly_50_set.insert("CHF");
      Undly_50.add_attribute("OptA", "1937422597"); // 2
      Undly_50_set.insert("1937422597");
      Undly_50.add_attribute("Mult", "12378957.210000"); // 2
      Undly_50_set.insert("12378957.210000");
      Undly_50.add_attribute("MultTyp", "2"); // 2
      Undly_50_set.insert("2");
      Undly_50.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_50_set.insert("3");
      Undly_50.add_attribute("UOM", "MMbbl"); // 2
      Undly_50_set.insert("MMbbl");
      Undly_50.add_attribute("UOMQty", "10072831.760000"); // 2
      Undly_50_set.insert("10072831.760000");
      Undly_50.add_attribute("PxUOM", "tn"); // 2
      Undly_50_set.insert("tn");
      Undly_50.add_attribute("PxUOMQty", "2079356.390000"); // 2
      Undly_50_set.insert("2079356.390000");
      Undly_50.add_attribute("TmUnit", "Min"); // 2
      Undly_50_set.insert("Min");
      Undly_50.add_attribute("ExerStyle", "1"); // 2
      Undly_50_set.insert("1");
      Undly_50.add_attribute("CpnRt", "15151390.670000"); // 2
      Undly_50_set.insert("15151390.670000");
      Undly_50.add_attribute("Exch", "UnderlyingSecurityExchange_t_1547383683"); // 2
      Undly_50_set.insert("UnderlyingSecurityExchange_t_1547383683");
      Undly_50.add_attribute("Issr", "UnderlyingIssuer_t_617294399"); // 2
      Undly_50_set.insert("UnderlyingIssuer_t_617294399");
      Undly_50.add_attribute("EncUndIssrLen", "2083042287"); // 2
      Undly_50_set.insert("2083042287");
      Undly_50.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1455309970"); // 2
      Undly_50_set.insert("EncodedUnderlyingIssuer_t_1455309970");
      Undly_50.add_attribute("Desc", "UnderlyingSecurityDesc_t_244655967"); // 2
      Undly_50_set.insert("UnderlyingSecurityDesc_t_244655967");
      Undly_50.add_attribute("EncUndSecDescLen", "603393846"); // 2
      Undly_50_set.insert("603393846");
      Undly_50.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1226265887"); // 2
      Undly_50_set.insert("EncodedUnderlyingSecurityDesc_t_1226265887");
      Undly_50.add_attribute("CPPgm", "UnderlyingCPProgram_t_1871311985"); // 2
      Undly_50_set.insert("UnderlyingCPProgram_t_1871311985");
      Undly_50.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1184732495"); // 2
      Undly_50_set.insert("UnderlyingCPRegType_t_1184732495");
      Undly_50.add_attribute("AllocPct", "5502053.680000"); // 2
      Undly_50_set.insert("5502053.680000");
      Undly_50.add_attribute("Ccy", "CHF"); // 2
      Undly_50_set.insert("CHF");
      Undly_50.add_attribute("Qty", "15302909.400000"); // 2
      Undly_50_set.insert("15302909.400000");
      Undly_50.add_attribute("SettlTyp", "5"); // 2
      Undly_50_set.insert("5");
      Undly_50.add_attribute("CashAmt", "UnderlyingCashAmount_t_708932039"); // 2
      Undly_50_set.insert("UnderlyingCashAmount_t_708932039");
      Undly_50.add_attribute("CashTyp", "DIFF"); // 2
      Undly_50_set.insert("DIFF");
      Undly_50.add_attribute("Px", "18445141.630000"); // 2
      Undly_50_set.insert("18445141.630000");
      Undly_50.add_attribute("DirtPx", "7082766.560000"); // 2
      Undly_50_set.insert("7082766.560000");
      Undly_50.add_attribute("EndPx", "8990595.120000"); // 2
      Undly_50_set.insert("8990595.120000");
      Undly_50.add_attribute("StartVal", "UnderlyingStartValue_t_1320383834"); // 2
      Undly_50_set.insert("UnderlyingStartValue_t_1320383834");
      Undly_50.add_attribute("CurVal", "UnderlyingCurrentValue_t_498215605"); // 2
      Undly_50_set.insert("UnderlyingCurrentValue_t_498215605");
      Undly_50.add_attribute("EndVal", "UnderlyingEndValue_t_2136955233"); // 2
      Undly_50_set.insert("UnderlyingEndValue_t_2136955233");
      Undly_50.add_attribute("AdjQty", "3482946.440000"); // 2
      Undly_50_set.insert("3482946.440000");
      Undly_50.add_attribute("FxRate", "5764287.880000"); // 2
      Undly_50_set.insert("5764287.880000");
      Undly_50.add_attribute("FxRateCalc", "M"); // 2
      Undly_50_set.insert("M");
      Undly_50.add_attribute("CapValu", "UnderlyingCapValue_t_1355577820"); // 2
      Undly_50_set.insert("UnderlyingCapValue_t_1355577820");
      Undly_50.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1320493101"); // 2
      Undly_50_set.insert("UnderlyingSettlMethod_t_1320493101");
      Undly_50.add_attribute("PutCall", "2073675326"); // 2
      Undly_50_set.insert("2073675326");
      all_values.push_back(Undly_50_set);
      all_compo_names.insert("Undly_50_set");

      {
        xml_element UndAID_50{"UndAID"};
        multiset<string> UndAID_50_set;
        UndAID_50.add_attribute("AltID", "UnderlyingSecurityAltID_t_1080254792"); // 3
        UndAID_50_set.insert("UnderlyingSecurityAltID_t_1080254792");
        UndAID_50.add_attribute("AltIDSrc", "1"); // 3
        UndAID_50_set.insert("1");
        all_values.push_back(UndAID_50_set);
        all_compo_names.insert("UndAID_50_set");

        Undly_50.add_element(UndAID_50);
      }
      {
        xml_element Stip_74{"Stip"};
        multiset<string> Stip_74_set;
        Stip_74.add_attribute("Typ", "MINDNOM"); // 3
        Stip_74_set.insert("MINDNOM");
        Stip_74.add_attribute("Val", "UnderlyingStipValue_t_480154827"); // 3
        Stip_74_set.insert("UnderlyingStipValue_t_480154827");
        all_values.push_back(Stip_74_set);
        all_compo_names.insert("Stip_74_set");

        Undly_50.add_element(Stip_74);
      }
      {
        xml_element Pty_203{"Pty"};
        multiset<string> Pty_203_set;
        Pty_203.add_attribute("ID", "UnderlyingInstrumentPartyID_t_697143883"); // 3
        Pty_203_set.insert("UnderlyingInstrumentPartyID_t_697143883");
        Pty_203.add_attribute("Src", "D"); // 3
        Pty_203_set.insert("D");
        Pty_203.add_attribute("R", "53"); // 3
        Pty_203_set.insert("53");
        all_values.push_back(Pty_203_set);
        all_compo_names.insert("Pty_203_set");

        {
          xml_element Sub_203{"Sub"};
          multiset<string> Sub_203_set;
          Sub_203.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_941799851"); // 4
          Sub_203_set.insert("UnderlyingInstrumentPartySubID_t_941799851");
          Sub_203.add_attribute("Typ", "9"); // 4
          Sub_203_set.insert("9");
          all_values.push_back(Sub_203_set);
          all_compo_names.insert("Sub_203_set");

          Pty_203.add_element(Sub_203);
        }
        Undly_50.add_element(Pty_203);
      }
      QuotSet_1.add_element(Undly_50);
    }
    {
      xml_element QuotEntry_1{"QuotEntry"};
      multiset<string> QuotEntry_1_set;
      QuotEntry_1.add_attribute("EntryID", "QuoteEntryID_t_1014247037"); // 2
      QuotEntry_1_set.insert("QuoteEntryID_t_1014247037");
      QuotEntry_1.add_attribute("BidPx", "6656281.880000"); // 2
      QuotEntry_1_set.insert("6656281.880000");
      QuotEntry_1.add_attribute("OfrPx", "10175320.780000"); // 2
      QuotEntry_1_set.insert("10175320.780000");
      QuotEntry_1.add_attribute("BidSz", "15644524.050000"); // 2
      QuotEntry_1_set.insert("15644524.050000");
      QuotEntry_1.add_attribute("OfrSz", "10708774.040000"); // 2
      QuotEntry_1_set.insert("10708774.040000");
      QuotEntry_1.add_attribute("ValidUntilTm", "ValidUntilTime_t_719932871"); // 2
      QuotEntry_1_set.insert("ValidUntilTime_t_719932871");
      QuotEntry_1.add_attribute("BidSpotRt", "9472596.970000"); // 2
      QuotEntry_1_set.insert("9472596.970000");
      QuotEntry_1.add_attribute("OfrSpotRt", "17800853.530000"); // 2
      QuotEntry_1_set.insert("17800853.530000");
      QuotEntry_1.add_attribute("BidFwdPnts", "14288649.110000"); // 2
      QuotEntry_1_set.insert("14288649.110000");
      QuotEntry_1.add_attribute("OfrFwdPnts", "19233047.000000"); // 2
      QuotEntry_1_set.insert("19233047.000000");
      QuotEntry_1.add_attribute("MidPx", "14771158.680000"); // 2
      QuotEntry_1_set.insert("14771158.680000");
      QuotEntry_1.add_attribute("BidYld", "21371415.670000"); // 2
      QuotEntry_1_set.insert("21371415.670000");
      QuotEntry_1.add_attribute("MidYld", "6748805.640000"); // 2
      QuotEntry_1_set.insert("6748805.640000");
      QuotEntry_1.add_attribute("OfrYld", "6500160.540000"); // 2
      QuotEntry_1_set.insert("6500160.540000");
      QuotEntry_1.add_attribute("TxnTm", "TransactTime_t_487873524"); // 2
      QuotEntry_1_set.insert("TransactTime_t_487873524");
      QuotEntry_1.add_attribute("SesID", "3"); // 2
      QuotEntry_1_set.insert("3");
      QuotEntry_1.add_attribute("SesSub", "1"); // 2
      QuotEntry_1_set.insert("1");
      QuotEntry_1.add_attribute("SettlDt", "SettlDate_t_1064302312"); // 2
      QuotEntry_1_set.insert("SettlDate_t_1064302312");
      QuotEntry_1.add_attribute("OrdTyp", "L"); // 2
      QuotEntry_1_set.insert("L");
      QuotEntry_1.add_attribute("SettlDt2", "SettlDate2_t_206404870"); // 2
      QuotEntry_1_set.insert("SettlDate2_t_206404870");
      QuotEntry_1.add_attribute("Qty2", "2373117.650000"); // 2
      QuotEntry_1_set.insert("2373117.650000");
      QuotEntry_1.add_attribute("BidFwdPnts2", "3087998.660000"); // 2
      QuotEntry_1_set.insert("3087998.660000");
      QuotEntry_1.add_attribute("OfrFwdPnts2", "12866596.630000"); // 2
      QuotEntry_1_set.insert("12866596.630000");
      QuotEntry_1.add_attribute("Ccy", "GBP"); // 2
      QuotEntry_1_set.insert("GBP");
      QuotEntry_1.add_attribute("BkngTyp", "1"); // 2
      QuotEntry_1_set.insert("1");
      QuotEntry_1.add_attribute("Cpcty", "P"); // 2
      QuotEntry_1_set.insert("P");
      QuotEntry_1.add_attribute("Rstctions", "4"); // 2
      QuotEntry_1_set.insert("4");
      all_values.push_back(QuotEntry_1_set);
      all_compo_names.insert("QuotEntry_1_set");

      {
        xml_element Instrmt_36{"Instrmt"};
        multiset<string> Instrmt_36_set;
        Instrmt_36.add_attribute("Sym", "Symbol_t_1554795640"); // 3
        Instrmt_36_set.insert("Symbol_t_1554795640");
        Instrmt_36.add_attribute("Sfx", "CD"); // 3
        Instrmt_36_set.insert("CD");
        Instrmt_36.add_attribute("ID", "SecurityID_t_812335931"); // 3
        Instrmt_36_set.insert("SecurityID_t_812335931");
        Instrmt_36.add_attribute("Src", "2"); // 3
        Instrmt_36_set.insert("2");
        Instrmt_36.add_attribute("Prod", "6"); // 3
        Instrmt_36_set.insert("6");
        Instrmt_36.add_attribute("ProdCmplx", "ProductComplex_t_1829868010"); // 3
        Instrmt_36_set.insert("ProductComplex_t_1829868010");
        Instrmt_36.add_attribute("SecGrp", "SecurityGroup_t_1986011434"); // 3
        Instrmt_36_set.insert("SecurityGroup_t_1986011434");
        Instrmt_36.add_attribute("CFI", "CFICode_t_1545126929"); // 3
        Instrmt_36_set.insert("CFICode_t_1545126929");
        Instrmt_36.add_attribute("SecTyp", "CB"); // 3
        Instrmt_36_set.insert("CB");
        Instrmt_36.add_attribute("SubTyp", "SecuritySubType_t_785787483"); // 3
        Instrmt_36_set.insert("SecuritySubType_t_785787483");
        Instrmt_36.add_attribute("MMY", "1177728634"); // 3
        Instrmt_36_set.insert("1177728634");
        Instrmt_36.add_attribute("MatDt", "MaturityDate_t_1831182144"); // 3
        Instrmt_36_set.insert("MaturityDate_t_1831182144");
        Instrmt_36.add_attribute("MatTm", "561608535"); // 3
        Instrmt_36_set.insert("561608535");
        Instrmt_36.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_507360854"); // 3
        Instrmt_36_set.insert("SettleOnOpenFlag_t_507360854");
        Instrmt_36.add_attribute("AsgnMeth", "1820840063"); // 3
        Instrmt_36_set.insert("1820840063");
        Instrmt_36.add_attribute("Status", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("CpnPmt", "CouponPaymentDate_t_1157376908"); // 3
        Instrmt_36_set.insert("CouponPaymentDate_t_1157376908");
        Instrmt_36.add_attribute("RestrctTyp", "XR"); // 3
        Instrmt_36_set.insert("XR");
        Instrmt_36.add_attribute("Snrty", "SD"); // 3
        Instrmt_36_set.insert("SD");
        Instrmt_36.add_attribute("NotlPctOut", "82039.580000"); // 3
        Instrmt_36_set.insert("82039.580000");
        Instrmt_36.add_attribute("OrigNotlPctOut", "12255322.510000"); // 3
        Instrmt_36_set.insert("12255322.510000");
        Instrmt_36.add_attribute("AttchPnt", "1359657.900000"); // 3
        Instrmt_36_set.insert("1359657.900000");
        Instrmt_36.add_attribute("DetchPnt", "2146088.280000"); // 3
        Instrmt_36_set.insert("2146088.280000");
        Instrmt_36.add_attribute("Issued", "IssueDate_t_1462844017"); // 3
        Instrmt_36_set.insert("IssueDate_t_1462844017");
        Instrmt_36.add_attribute("RepoCollSecTyp", "444765657"); // 3
        Instrmt_36_set.insert("444765657");
        Instrmt_36.add_attribute("RepoTrm", "1501268491"); // 3
        Instrmt_36_set.insert("1501268491");
        Instrmt_36.add_attribute("RepoRt", "17800052.670000"); // 3
        Instrmt_36_set.insert("17800052.670000");
        Instrmt_36.add_attribute("Fctr", "474126.210000"); // 3
        Instrmt_36_set.insert("474126.210000");
        Instrmt_36.add_attribute("CrdRtg", "CreditRating_t_1120599334"); // 3
        Instrmt_36_set.insert("CreditRating_t_1120599334");
        Instrmt_36.add_attribute("Rgstry", "InstrRegistry_t_646826752"); // 3
        Instrmt_36_set.insert("InstrRegistry_t_646826752");
        Instrmt_36.add_attribute("IssuCtry", "1026948969"); // 3
        Instrmt_36_set.insert("1026948969");
        Instrmt_36.add_attribute("StPrv", "StateOrProvinceOfIssue_t_527911326"); // 3
        Instrmt_36_set.insert("StateOrProvinceOfIssue_t_527911326");
        Instrmt_36.add_attribute("Lcl", "LocaleOfIssue_t_455448089"); // 3
        Instrmt_36_set.insert("LocaleOfIssue_t_455448089");
        Instrmt_36.add_attribute("Redeem", "RedemptionDate_t_1839284901"); // 3
        Instrmt_36_set.insert("RedemptionDate_t_1839284901");
        Instrmt_36.add_attribute("StrkPx", "9494703.560000"); // 3
        Instrmt_36_set.insert("9494703.560000");
        Instrmt_36.add_attribute("StrkCcy", "CAN"); // 3
        Instrmt_36_set.insert("CAN");
        Instrmt_36.add_attribute("StrkMult", "7879981.420000"); // 3
        Instrmt_36_set.insert("7879981.420000");
        Instrmt_36.add_attribute("StrkValu", "3273408.950000"); // 3
        Instrmt_36_set.insert("3273408.950000");
        Instrmt_36.add_attribute("StrkPxDtrmnMeth", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("StrkPxBndryMeth", "2"); // 3
        Instrmt_36_set.insert("2");
        Instrmt_36.add_attribute("StrkPxBndryPrcsn", "15050695.290000"); // 3
        Instrmt_36_set.insert("15050695.290000");
        Instrmt_36.add_attribute("PxDtrmnMeth", "2"); // 3
        Instrmt_36_set.insert("2");
        Instrmt_36.add_attribute("OptAt", "2135394161"); // 3
        Instrmt_36_set.insert("2135394161");
        Instrmt_36.add_attribute("Mult", "20124303.830000"); // 3
        Instrmt_36_set.insert("20124303.830000");
        Instrmt_36.add_attribute("MultTyp", "2"); // 3
        Instrmt_36_set.insert("2");
        Instrmt_36.add_attribute("FlowSchedTyp", "3"); // 3
        Instrmt_36_set.insert("3");
        Instrmt_36.add_attribute("MinPxIncr", "10223236.430000"); // 3
        Instrmt_36_set.insert("10223236.430000");
        Instrmt_36.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1442271348"); // 3
        Instrmt_36_set.insert("MinPriceIncrementAmount_t_1442271348");
        Instrmt_36.add_attribute("UOM", "MMbbl"); // 3
        Instrmt_36_set.insert("MMbbl");
        Instrmt_36.add_attribute("UOMQty", "10305276.010000"); // 3
        Instrmt_36_set.insert("10305276.010000");
        Instrmt_36.add_attribute("PxUOM", "oz_tr"); // 3
        Instrmt_36_set.insert("oz_tr");
        Instrmt_36.add_attribute("PxUOMQty", "11137230.060000"); // 3
        Instrmt_36_set.insert("11137230.060000");
        Instrmt_36.add_attribute("SettlMeth", "P"); // 3
        Instrmt_36_set.insert("P");
        Instrmt_36.add_attribute("ExerStyle", "0"); // 3
        Instrmt_36_set.insert("0");
        Instrmt_36.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("OptPayAmt", "OptPayoutAmount_t_598921273"); // 3
        Instrmt_36_set.insert("OptPayoutAmount_t_598921273");
        Instrmt_36.add_attribute("PxQteMeth", "PCTPAR"); // 3
        Instrmt_36_set.insert("PCTPAR");
        Instrmt_36.add_attribute("ValMeth", "CDSD"); // 3
        Instrmt_36_set.insert("CDSD");
        Instrmt_36.add_attribute("ListMeth", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("CapPx", "1150286.920000"); // 3
        Instrmt_36_set.insert("1150286.920000");
        Instrmt_36.add_attribute("FlrPx", "4853666.050000"); // 3
        Instrmt_36_set.insert("4853666.050000");
        Instrmt_36.add_attribute("PutCall", "1"); // 3
        Instrmt_36_set.insert("1");
        Instrmt_36.add_attribute("FlexInd", "false"); // 3
        Instrmt_36_set.insert("false");
        Instrmt_36.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_36_set.insert("true");
        Instrmt_36.add_attribute("TmUnit", "Mo"); // 3
        Instrmt_36_set.insert("Mo");
        Instrmt_36.add_attribute("CpnRt", "15001743.950000"); // 3
        Instrmt_36_set.insert("15001743.950000");
        Instrmt_36.add_attribute("Exch", "SecurityExchange_t_1698837121"); // 3
        Instrmt_36_set.insert("SecurityExchange_t_1698837121");
        Instrmt_36.add_attribute("PosLmt", "1837416784"); // 3
        Instrmt_36_set.insert("1837416784");
        Instrmt_36.add_attribute("NTPosLmt", "1827515290"); // 3
        Instrmt_36_set.insert("1827515290");
        Instrmt_36.add_attribute("Issr", "Issuer_t_1475339970"); // 3
        Instrmt_36_set.insert("Issuer_t_1475339970");
        Instrmt_36.add_attribute("EncIssrLen", "1263718762"); // 3
        Instrmt_36_set.insert("1263718762");
        Instrmt_36.add_attribute("EncIssr", "EncodedIssuer_t_1185101171"); // 3
        Instrmt_36_set.insert("EncodedIssuer_t_1185101171");
        Instrmt_36.add_attribute("Desc", "SecurityDesc_t_935541315"); // 3
        Instrmt_36_set.insert("SecurityDesc_t_935541315");
        Instrmt_36.add_attribute("EncSecDescLen", "1251629275"); // 3
        Instrmt_36_set.insert("1251629275");
        Instrmt_36.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1050047906"); // 3
        Instrmt_36_set.insert("EncodedSecurityDesc_t_1050047906");
        Instrmt_36.add_attribute("Pool", "Pool_t_69099075"); // 3
        Instrmt_36_set.insert("Pool_t_69099075");
        Instrmt_36.add_attribute("CSetMo", "328545241"); // 3
        Instrmt_36_set.insert("328545241");
        Instrmt_36.add_attribute("CPPgm", "2"); // 3
        Instrmt_36_set.insert("2");
        Instrmt_36.add_attribute("CPRegT", "CPRegType_t_1511370423"); // 3
        Instrmt_36_set.insert("CPRegType_t_1511370423");
        Instrmt_36.add_attribute("Dated", "DatedDate_t_1306302456"); // 3
        Instrmt_36_set.insert("DatedDate_t_1306302456");
        Instrmt_36.add_attribute("IntAcrl", "InterestAccrualDate_t_955415502"); // 3
        Instrmt_36_set.insert("InterestAccrualDate_t_955415502");
        all_values.push_back(Instrmt_36_set);
        all_compo_names.insert("Instrmt_36_set");

        {
          xml_element AID_39{"AID"};
          multiset<string> AID_39_set;
          AID_39.add_attribute("AltID", "SecurityAltID_t_2031690375"); // 4
          AID_39_set.insert("SecurityAltID_t_2031690375");
          AID_39.add_attribute("AltIDSrc", "7"); // 4
          AID_39_set.insert("7");
          all_values.push_back(AID_39_set);
          all_compo_names.insert("AID_39_set");

          Instrmt_36.add_element(AID_39);
        }
        {
          xml_element SecXML_39{"SecXML"};
          multiset<string> SecXML_39_set;
          SecXML_39.add_attribute("Schema", "SecurityXMLSchema_t_53068283"); // 4
          SecXML_39_set.insert("SecurityXMLSchema_t_53068283");
          all_values.push_back(SecXML_39_set);
          all_compo_names.insert("SecXML_39_set");

          Instrmt_36.add_element(SecXML_39);
        }
        {
          xml_element Evnt_39{"Evnt"};
          multiset<string> Evnt_39_set;
          Evnt_39.add_attribute("EventTyp", "15"); // 4
          Evnt_39_set.insert("15");
          Evnt_39.add_attribute("Dt", "EventDate_t_1831030477"); // 4
          Evnt_39_set.insert("EventDate_t_1831030477");
          Evnt_39.add_attribute("Tm", "EventTime_t_651989556"); // 4
          Evnt_39_set.insert("EventTime_t_651989556");
          Evnt_39.add_attribute("Px", "13355726.350000"); // 4
          Evnt_39_set.insert("13355726.350000");
          Evnt_39.add_attribute("Txt", "EventText_t_1289448113"); // 4
          Evnt_39_set.insert("EventText_t_1289448113");
          all_values.push_back(Evnt_39_set);
          all_compo_names.insert("Evnt_39_set");

          Instrmt_36.add_element(Evnt_39);
        }
        {
          xml_element Pty_204{"Pty"};
          multiset<string> Pty_204_set;
          Pty_204.add_attribute("ID", "InstrumentPartyID_t_224026515"); // 4
          Pty_204_set.insert("InstrumentPartyID_t_224026515");
          Pty_204.add_attribute("Src", "C"); // 4
          Pty_204_set.insert("C");
          Pty_204.add_attribute("R", "58"); // 4
          Pty_204_set.insert("58");
          all_values.push_back(Pty_204_set);
          all_compo_names.insert("Pty_204_set");

          {
            xml_element Sub_204{"Sub"};
            multiset<string> Sub_204_set;
            Sub_204.add_attribute("ID", "InstrumentPartySubID_t_323974801"); // 5
            Sub_204_set.insert("InstrumentPartySubID_t_323974801");
            Sub_204.add_attribute("Typ", "14"); // 5
            Sub_204_set.insert("14");
            all_values.push_back(Sub_204_set);
            all_compo_names.insert("Sub_204_set");

            Pty_204.add_element(Sub_204);
          }
          Instrmt_36.add_element(Pty_204);
        }
        {
          xml_element CmplxEvnt_36{"CmplxEvnt"};
          multiset<string> CmplxEvnt_36_set;
          CmplxEvnt_36.add_attribute("Typ", "1"); // 4
          CmplxEvnt_36_set.insert("1");
          CmplxEvnt_36.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1373393442"); // 4
          CmplxEvnt_36_set.insert("ComplexOptPayoutAmount_t_1373393442");
          CmplxEvnt_36.add_attribute("Px", "13737688.550000"); // 4
          CmplxEvnt_36_set.insert("13737688.550000");
          CmplxEvnt_36.add_attribute("PxBndryMeth", "2"); // 4
          CmplxEvnt_36_set.insert("2");
          CmplxEvnt_36.add_attribute("PxBndryPrcsn", "10633265.780000"); // 4
          CmplxEvnt_36_set.insert("10633265.780000");
          CmplxEvnt_36.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_36_set.insert("2");
          CmplxEvnt_36.add_attribute("Cond", "2"); // 4
          CmplxEvnt_36_set.insert("2");
          all_values.push_back(CmplxEvnt_36_set);
          all_compo_names.insert("CmplxEvnt_36_set");

          {
            xml_element EvntDts_36{"EvntDts"};
            multiset<string> EvntDts_36_set;
            EvntDts_36.add_attribute("StartDt", "ComplexEventStartDate_t_179561692"); // 5
            EvntDts_36_set.insert("ComplexEventStartDate_t_179561692");
            EvntDts_36.add_attribute("EndDt", "ComplexEventEndDate_t_91418020"); // 5
            EvntDts_36_set.insert("ComplexEventEndDate_t_91418020");
            all_values.push_back(EvntDts_36_set);
            all_compo_names.insert("EvntDts_36_set");

            {
              xml_element EvntTms_36{"EvntTms"};
              multiset<string> EvntTms_36_set;
              EvntTms_36.add_attribute("StartTm", "1766733688"); // 6
              EvntTms_36_set.insert("1766733688");
              EvntTms_36.add_attribute("EndTm", "1431190968"); // 6
              EvntTms_36_set.insert("1431190968");
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
        Leg_49.add_attribute("Sym", "LegSymbol_t_1141465926"); // 3
        Leg_49_set.insert("LegSymbol_t_1141465926");
        Leg_49.add_attribute("Sfx", "WI"); // 3
        Leg_49_set.insert("WI");
        Leg_49.add_attribute("ID", "LegSecurityID_t_1759736209"); // 3
        Leg_49_set.insert("LegSecurityID_t_1759736209");
        Leg_49.add_attribute("Src", "C"); // 3
        Leg_49_set.insert("C");
        Leg_49.add_attribute("Prod", "2"); // 3
        Leg_49_set.insert("2");
        Leg_49.add_attribute("CFI", "LegCFICode_t_918555017"); // 3
        Leg_49_set.insert("LegCFICode_t_918555017");
        Leg_49.add_attribute("SecTyp", "MPT"); // 3
        Leg_49_set.insert("MPT");
        Leg_49.add_attribute("SecSubTyp", "LegSecuritySubType_t_1083926266"); // 3
        Leg_49_set.insert("LegSecuritySubType_t_1083926266");
        Leg_49.add_attribute("MMY", "1191096832"); // 3
        Leg_49_set.insert("1191096832");
        Leg_49.add_attribute("Mat", "LegMaturityDate_t_2074837612"); // 3
        Leg_49_set.insert("LegMaturityDate_t_2074837612");
        Leg_49.add_attribute("MatTm", "803813313"); // 3
        Leg_49_set.insert("803813313");
        Leg_49.add_attribute("CpnPmt", "LegCouponPaymentDate_t_874643661"); // 3
        Leg_49_set.insert("LegCouponPaymentDate_t_874643661");
        Leg_49.add_attribute("Issued", "LegIssueDate_t_579343521"); // 3
        Leg_49_set.insert("LegIssueDate_t_579343521");
        Leg_49.add_attribute("RepoCollSecTyp", "2139385948"); // 3
        Leg_49_set.insert("2139385948");
        Leg_49.add_attribute("RepoTrm", "16608127"); // 3
        Leg_49_set.insert("16608127");
        Leg_49.add_attribute("RepoRt", "8033700.360000"); // 3
        Leg_49_set.insert("8033700.360000");
        Leg_49.add_attribute("Fctr", "14425036.270000"); // 3
        Leg_49_set.insert("14425036.270000");
        Leg_49.add_attribute("CrdRtg", "LegCreditRating_t_1791422846"); // 3
        Leg_49_set.insert("LegCreditRating_t_1791422846");
        Leg_49.add_attribute("Rgstry", "LegInstrRegistry_t_1127344837"); // 3
        Leg_49_set.insert("LegInstrRegistry_t_1127344837");
        Leg_49.add_attribute("Ctry", "1316098087"); // 3
        Leg_49_set.insert("1316098087");
        Leg_49.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1595921775"); // 3
        Leg_49_set.insert("LegStateOrProvinceOfIssue_t_1595921775");
        Leg_49.add_attribute("Lcl", "LegLocaleOfIssue_t_353254632"); // 3
        Leg_49_set.insert("LegLocaleOfIssue_t_353254632");
        Leg_49.add_attribute("Redeem", "LegRedemptionDate_t_542383294"); // 3
        Leg_49_set.insert("LegRedemptionDate_t_542383294");
        Leg_49.add_attribute("Strk", "9517741.780000"); // 3
        Leg_49_set.insert("9517741.780000");
        Leg_49.add_attribute("StrkCcy", "CAN"); // 3
        Leg_49_set.insert("CAN");
        Leg_49.add_attribute("OptA", "1782966551"); // 3
        Leg_49_set.insert("1782966551");
        Leg_49.add_attribute("Cmult", "15961429.030000"); // 3
        Leg_49_set.insert("15961429.030000");
        Leg_49.add_attribute("MultTyp", "0"); // 3
        Leg_49_set.insert("0");
        Leg_49.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_49_set.insert("1");
        Leg_49.add_attribute("UOM", "tn"); // 3
        Leg_49_set.insert("tn");
        Leg_49.add_attribute("UOMQty", "6815840.890000"); // 3
        Leg_49_set.insert("6815840.890000");
        Leg_49.add_attribute("PxUOM", "Bcf"); // 3
        Leg_49_set.insert("Bcf");
        Leg_49.add_attribute("PxUOMQty", "4921027.840000"); // 3
        Leg_49_set.insert("4921027.840000");
        Leg_49.add_attribute("TmUnit", "Wk"); // 3
        Leg_49_set.insert("Wk");
        Leg_49.add_attribute("ExerStyle", "2"); // 3
        Leg_49_set.insert("2");
        Leg_49.add_attribute("CpnRt", "14106578.010000"); // 3
        Leg_49_set.insert("14106578.010000");
        Leg_49.add_attribute("Exch", "LegSecurityExchange_t_1622223597"); // 3
        Leg_49_set.insert("LegSecurityExchange_t_1622223597");
        Leg_49.add_attribute("Issr", "LegIssuer_t_1226727864"); // 3
        Leg_49_set.insert("LegIssuer_t_1226727864");
        Leg_49.add_attribute("EncLegIssrLen", "454270985"); // 3
        Leg_49_set.insert("454270985");
        Leg_49.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1549577562"); // 3
        Leg_49_set.insert("EncodedLegIssuer_t_1549577562");
        Leg_49.add_attribute("Desc", "LegSecurityDesc_t_2030541177"); // 3
        Leg_49_set.insert("LegSecurityDesc_t_2030541177");
        Leg_49.add_attribute("EncLegSecDescLen", "1328914647"); // 3
        Leg_49_set.insert("1328914647");
        Leg_49.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2128921083"); // 3
        Leg_49_set.insert("EncodedLegSecurityDesc_t_2128921083");
        Leg_49.add_attribute("RatioQty", "20224434.780000"); // 3
        Leg_49_set.insert("20224434.780000");
        Leg_49.add_attribute("Side", "7"); // 3
        Leg_49_set.insert("7");
        Leg_49.add_attribute("Ccy", "CAN"); // 3
        Leg_49_set.insert("CAN");
        Leg_49.add_attribute("Pool", "LegPool_t_989461972"); // 3
        Leg_49_set.insert("LegPool_t_989461972");
        Leg_49.add_attribute("Dated", "LegDatedDate_t_1912152309"); // 3
        Leg_49_set.insert("LegDatedDate_t_1912152309");
        Leg_49.add_attribute("CSetMo", "486077897"); // 3
        Leg_49_set.insert("486077897");
        Leg_49.add_attribute("IntAcrl", "LegInterestAccrualDate_t_437900099"); // 3
        Leg_49_set.insert("LegInterestAccrualDate_t_437900099");
        Leg_49.add_attribute("PutCall", "117923293"); // 3
        Leg_49_set.insert("117923293");
        Leg_49.add_attribute("LegOptionRatio", "10284611.910000"); // 3
        Leg_49_set.insert("10284611.910000");
        Leg_49.add_attribute("Px", "13896742.780000"); // 3
        Leg_49_set.insert("13896742.780000");
        all_values.push_back(Leg_49_set);
        all_compo_names.insert("Leg_49_set");

        {
          xml_element LegAID_49{"LegAID"};
          multiset<string> LegAID_49_set;
          LegAID_49.add_attribute("SecAltID", "LegSecurityAltID_t_1534504503"); // 4
          LegAID_49_set.insert("LegSecurityAltID_t_1534504503");
          LegAID_49.add_attribute("SecAltIDSrc", "E"); // 4
          LegAID_49_set.insert("E");
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
    QuotSet_2.add_attribute("SetID", "QuoteSetID_t_1025157181"); // 1
    QuotSet_2_set.insert("QuoteSetID_t_1025157181");
    QuotSet_2.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_983163758"); // 1
    QuotSet_2_set.insert("QuoteSetValidUntilTime_t_983163758");
    QuotSet_2.add_attribute("TotNoQuotEntries", "17279498"); // 1
    QuotSet_2_set.insert("17279498");
    QuotSet_2.add_attribute("LastFragment", "Y"); // 1
    QuotSet_2_set.insert("Y");
    all_values.push_back(QuotSet_2_set);
    all_compo_names.insert("QuotSet_2_set");

    {
      xml_element Undly_51{"Undly"};
      multiset<string> Undly_51_set;
      Undly_51.add_attribute("Sym", "UnderlyingSymbol_t_1863013981"); // 2
      Undly_51_set.insert("UnderlyingSymbol_t_1863013981");
      Undly_51.add_attribute("Sfx", "CD"); // 2
      Undly_51_set.insert("CD");
      Undly_51.add_attribute("ID", "UnderlyingSecurityID_t_1370455832"); // 2
      Undly_51_set.insert("UnderlyingSecurityID_t_1370455832");
      Undly_51.add_attribute("Src", "M"); // 2
      Undly_51_set.insert("M");
      Undly_51.add_attribute("Prod", "3"); // 2
      Undly_51_set.insert("3");
      Undly_51.add_attribute("CFI", "UnderlyingCFICode_t_1513257430"); // 2
      Undly_51_set.insert("UnderlyingCFICode_t_1513257430");
      Undly_51.add_attribute("SecTyp", "OOF"); // 2
      Undly_51_set.insert("OOF");
      Undly_51.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1921541454"); // 2
      Undly_51_set.insert("UnderlyingSecuritySubType_t_1921541454");
      Undly_51.add_attribute("MMY", "592501646"); // 2
      Undly_51_set.insert("592501646");
      Undly_51.add_attribute("Mat", "UnderlyingMaturityDate_t_2072561904"); // 2
      Undly_51_set.insert("UnderlyingMaturityDate_t_2072561904");
      Undly_51.add_attribute("MatTm", "1323635368"); // 2
      Undly_51_set.insert("1323635368");
      Undly_51.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_475559175"); // 2
      Undly_51_set.insert("UnderlyingCouponPaymentDate_t_475559175");
      Undly_51.add_attribute("RestrctTyp", "XR"); // 2
      Undly_51_set.insert("XR");
      Undly_51.add_attribute("Snrty", "SB"); // 2
      Undly_51_set.insert("SB");
      Undly_51.add_attribute("NotlPctOut", "3505190.050000"); // 2
      Undly_51_set.insert("3505190.050000");
      Undly_51.add_attribute("OrigNotlPctOut", "4520320.290000"); // 2
      Undly_51_set.insert("4520320.290000");
      Undly_51.add_attribute("AttchPnt", "20898802.740000"); // 2
      Undly_51_set.insert("20898802.740000");
      Undly_51.add_attribute("DetchPnt", "16679824.630000"); // 2
      Undly_51_set.insert("16679824.630000");
      Undly_51.add_attribute("Issued", "UnderlyingIssueDate_t_1441494001"); // 2
      Undly_51_set.insert("UnderlyingIssueDate_t_1441494001");
      Undly_51.add_attribute("RepoCollSecTyp", "1854548935"); // 2
      Undly_51_set.insert("1854548935");
      Undly_51.add_attribute("RepoTrm", "6576712"); // 2
      Undly_51_set.insert("6576712");
      Undly_51.add_attribute("RepoRt", "18793941.010000"); // 2
      Undly_51_set.insert("18793941.010000");
      Undly_51.add_attribute("Fctr", "19724722.280000"); // 2
      Undly_51_set.insert("19724722.280000");
      Undly_51.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1035037903"); // 2
      Undly_51_set.insert("UnderlyingCreditRating_t_1035037903");
      Undly_51.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1121584731"); // 2
      Undly_51_set.insert("UnderlyingInstrRegistry_t_1121584731");
      Undly_51.add_attribute("Ctry", "1359493084"); // 2
      Undly_51_set.insert("1359493084");
      Undly_51.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1512199238"); // 2
      Undly_51_set.insert("UnderlyingStateOrProvinceOfIssue_t_1512199238");
      Undly_51.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2146741912"); // 2
      Undly_51_set.insert("UnderlyingLocaleOfIssue_t_2146741912");
      Undly_51.add_attribute("Redeem", "UnderlyingRedemptionDate_t_195173194"); // 2
      Undly_51_set.insert("UnderlyingRedemptionDate_t_195173194");
      Undly_51.add_attribute("StrkPx", "15294787.370000"); // 2
      Undly_51_set.insert("15294787.370000");
      Undly_51.add_attribute("StrkCcy", "USD"); // 2
      Undly_51_set.insert("USD");
      Undly_51.add_attribute("OptA", "80858677"); // 2
      Undly_51_set.insert("80858677");
      Undly_51.add_attribute("Mult", "16496042.210000"); // 2
      Undly_51_set.insert("16496042.210000");
      Undly_51.add_attribute("MultTyp", "1"); // 2
      Undly_51_set.insert("1");
      Undly_51.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_51_set.insert("3");
      Undly_51.add_attribute("UOM", "Gal"); // 2
      Undly_51_set.insert("Gal");
      Undly_51.add_attribute("UOMQty", "17366275.640000"); // 2
      Undly_51_set.insert("17366275.640000");
      Undly_51.add_attribute("PxUOM", "Alw"); // 2
      Undly_51_set.insert("Alw");
      Undly_51.add_attribute("PxUOMQty", "16078796.490000"); // 2
      Undly_51_set.insert("16078796.490000");
      Undly_51.add_attribute("TmUnit", "Yr"); // 2
      Undly_51_set.insert("Yr");
      Undly_51.add_attribute("ExerStyle", "2"); // 2
      Undly_51_set.insert("2");
      Undly_51.add_attribute("CpnRt", "20834388.250000"); // 2
      Undly_51_set.insert("20834388.250000");
      Undly_51.add_attribute("Exch", "UnderlyingSecurityExchange_t_768215076"); // 2
      Undly_51_set.insert("UnderlyingSecurityExchange_t_768215076");
      Undly_51.add_attribute("Issr", "UnderlyingIssuer_t_635458862"); // 2
      Undly_51_set.insert("UnderlyingIssuer_t_635458862");
      Undly_51.add_attribute("EncUndIssrLen", "286474182"); // 2
      Undly_51_set.insert("286474182");
      Undly_51.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1220247106"); // 2
      Undly_51_set.insert("EncodedUnderlyingIssuer_t_1220247106");
      Undly_51.add_attribute("Desc", "UnderlyingSecurityDesc_t_577855489"); // 2
      Undly_51_set.insert("UnderlyingSecurityDesc_t_577855489");
      Undly_51.add_attribute("EncUndSecDescLen", "1954456645"); // 2
      Undly_51_set.insert("1954456645");
      Undly_51.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_514257459"); // 2
      Undly_51_set.insert("EncodedUnderlyingSecurityDesc_t_514257459");
      Undly_51.add_attribute("CPPgm", "UnderlyingCPProgram_t_284920776"); // 2
      Undly_51_set.insert("UnderlyingCPProgram_t_284920776");
      Undly_51.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1961033357"); // 2
      Undly_51_set.insert("UnderlyingCPRegType_t_1961033357");
      Undly_51.add_attribute("AllocPct", "2461679.120000"); // 2
      Undly_51_set.insert("2461679.120000");
      Undly_51.add_attribute("Ccy", "CAN"); // 2
      Undly_51_set.insert("CAN");
      Undly_51.add_attribute("Qty", "13677526.430000"); // 2
      Undly_51_set.insert("13677526.430000");
      Undly_51.add_attribute("SettlTyp", "5"); // 2
      Undly_51_set.insert("5");
      Undly_51.add_attribute("CashAmt", "UnderlyingCashAmount_t_213303203"); // 2
      Undly_51_set.insert("UnderlyingCashAmount_t_213303203");
      Undly_51.add_attribute("CashTyp", "FIXED"); // 2
      Undly_51_set.insert("FIXED");
      Undly_51.add_attribute("Px", "16645756.350000"); // 2
      Undly_51_set.insert("16645756.350000");
      Undly_51.add_attribute("DirtPx", "17427819.400000"); // 2
      Undly_51_set.insert("17427819.400000");
      Undly_51.add_attribute("EndPx", "16461592.970000"); // 2
      Undly_51_set.insert("16461592.970000");
      Undly_51.add_attribute("StartVal", "UnderlyingStartValue_t_1575279163"); // 2
      Undly_51_set.insert("UnderlyingStartValue_t_1575279163");
      Undly_51.add_attribute("CurVal", "UnderlyingCurrentValue_t_1823640617"); // 2
      Undly_51_set.insert("UnderlyingCurrentValue_t_1823640617");
      Undly_51.add_attribute("EndVal", "UnderlyingEndValue_t_1148279871"); // 2
      Undly_51_set.insert("UnderlyingEndValue_t_1148279871");
      Undly_51.add_attribute("AdjQty", "16936158.090000"); // 2
      Undly_51_set.insert("16936158.090000");
      Undly_51.add_attribute("FxRate", "563335.030000"); // 2
      Undly_51_set.insert("563335.030000");
      Undly_51.add_attribute("FxRateCalc", "M"); // 2
      Undly_51_set.insert("M");
      Undly_51.add_attribute("CapValu", "UnderlyingCapValue_t_1282759725"); // 2
      Undly_51_set.insert("UnderlyingCapValue_t_1282759725");
      Undly_51.add_attribute("SetMeth", "UnderlyingSettlMethod_t_210567842"); // 2
      Undly_51_set.insert("UnderlyingSettlMethod_t_210567842");
      Undly_51.add_attribute("PutCall", "1624053876"); // 2
      Undly_51_set.insert("1624053876");
      all_values.push_back(Undly_51_set);
      all_compo_names.insert("Undly_51_set");

      {
        xml_element UndAID_51{"UndAID"};
        multiset<string> UndAID_51_set;
        UndAID_51.add_attribute("AltID", "UnderlyingSecurityAltID_t_796981898"); // 3
        UndAID_51_set.insert("UnderlyingSecurityAltID_t_796981898");
        UndAID_51.add_attribute("AltIDSrc", "9"); // 3
        UndAID_51_set.insert("9");
        all_values.push_back(UndAID_51_set);
        all_compo_names.insert("UndAID_51_set");

        Undly_51.add_element(UndAID_51);
      }
      {
        xml_element Stip_75{"Stip"};
        multiset<string> Stip_75_set;
        Stip_75.add_attribute("Typ", "HEP"); // 3
        Stip_75_set.insert("HEP");
        Stip_75.add_attribute("Val", "UnderlyingStipValue_t_1565196975"); // 3
        Stip_75_set.insert("UnderlyingStipValue_t_1565196975");
        all_values.push_back(Stip_75_set);
        all_compo_names.insert("Stip_75_set");

        Undly_51.add_element(Stip_75);
      }
      {
        xml_element Pty_205{"Pty"};
        multiset<string> Pty_205_set;
        Pty_205.add_attribute("ID", "UnderlyingInstrumentPartyID_t_176412764"); // 3
        Pty_205_set.insert("UnderlyingInstrumentPartyID_t_176412764");
        Pty_205.add_attribute("Src", "I"); // 3
        Pty_205_set.insert("I");
        Pty_205.add_attribute("R", "14"); // 3
        Pty_205_set.insert("14");
        all_values.push_back(Pty_205_set);
        all_compo_names.insert("Pty_205_set");

        {
          xml_element Sub_205{"Sub"};
          multiset<string> Sub_205_set;
          Sub_205.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_754268253"); // 4
          Sub_205_set.insert("UnderlyingInstrumentPartySubID_t_754268253");
          Sub_205.add_attribute("Typ", "2"); // 4
          Sub_205_set.insert("2");
          all_values.push_back(Sub_205_set);
          all_compo_names.insert("Sub_205_set");

          Pty_205.add_element(Sub_205);
        }
        Undly_51.add_element(Pty_205);
      }
      QuotSet_2.add_element(Undly_51);
    }
    {
      xml_element QuotEntry_2{"QuotEntry"};
      multiset<string> QuotEntry_2_set;
      QuotEntry_2.add_attribute("EntryID", "QuoteEntryID_t_1152217892"); // 2
      QuotEntry_2_set.insert("QuoteEntryID_t_1152217892");
      QuotEntry_2.add_attribute("BidPx", "10391890.300000"); // 2
      QuotEntry_2_set.insert("10391890.300000");
      QuotEntry_2.add_attribute("OfrPx", "14670059.420000"); // 2
      QuotEntry_2_set.insert("14670059.420000");
      QuotEntry_2.add_attribute("BidSz", "13983858.050000"); // 2
      QuotEntry_2_set.insert("13983858.050000");
      QuotEntry_2.add_attribute("OfrSz", "11490983.870000"); // 2
      QuotEntry_2_set.insert("11490983.870000");
      QuotEntry_2.add_attribute("ValidUntilTm", "ValidUntilTime_t_168109907"); // 2
      QuotEntry_2_set.insert("ValidUntilTime_t_168109907");
      QuotEntry_2.add_attribute("BidSpotRt", "6186548.000000"); // 2
      QuotEntry_2_set.insert("6186548.000000");
      QuotEntry_2.add_attribute("OfrSpotRt", "4710171.800000"); // 2
      QuotEntry_2_set.insert("4710171.800000");
      QuotEntry_2.add_attribute("BidFwdPnts", "3814131.110000"); // 2
      QuotEntry_2_set.insert("3814131.110000");
      QuotEntry_2.add_attribute("OfrFwdPnts", "19856657.080000"); // 2
      QuotEntry_2_set.insert("19856657.080000");
      QuotEntry_2.add_attribute("MidPx", "21355928.150000"); // 2
      QuotEntry_2_set.insert("21355928.150000");
      QuotEntry_2.add_attribute("BidYld", "21241950.510000"); // 2
      QuotEntry_2_set.insert("21241950.510000");
      QuotEntry_2.add_attribute("MidYld", "14843413.580000"); // 2
      QuotEntry_2_set.insert("14843413.580000");
      QuotEntry_2.add_attribute("OfrYld", "15633883.310000"); // 2
      QuotEntry_2_set.insert("15633883.310000");
      QuotEntry_2.add_attribute("TxnTm", "TransactTime_t_1800352021"); // 2
      QuotEntry_2_set.insert("TransactTime_t_1800352021");
      QuotEntry_2.add_attribute("SesID", "4"); // 2
      QuotEntry_2_set.insert("4");
      QuotEntry_2.add_attribute("SesSub", "4"); // 2
      QuotEntry_2_set.insert("4");
      QuotEntry_2.add_attribute("SettlDt", "SettlDate_t_1856685524"); // 2
      QuotEntry_2_set.insert("SettlDate_t_1856685524");
      QuotEntry_2.add_attribute("OrdTyp", "Q"); // 2
      QuotEntry_2_set.insert("Q");
      QuotEntry_2.add_attribute("SettlDt2", "SettlDate2_t_244796569"); // 2
      QuotEntry_2_set.insert("SettlDate2_t_244796569");
      QuotEntry_2.add_attribute("Qty2", "20672533.660000"); // 2
      QuotEntry_2_set.insert("20672533.660000");
      QuotEntry_2.add_attribute("BidFwdPnts2", "21253656.830000"); // 2
      QuotEntry_2_set.insert("21253656.830000");
      QuotEntry_2.add_attribute("OfrFwdPnts2", "10417784.680000"); // 2
      QuotEntry_2_set.insert("10417784.680000");
      QuotEntry_2.add_attribute("Ccy", "GBP"); // 2
      QuotEntry_2_set.insert("GBP");
      QuotEntry_2.add_attribute("BkngTyp", "2"); // 2
      QuotEntry_2_set.insert("2");
      QuotEntry_2.add_attribute("Cpcty", "G"); // 2
      QuotEntry_2_set.insert("G");
      QuotEntry_2.add_attribute("Rstctions", "7"); // 2
      QuotEntry_2_set.insert("7");
      all_values.push_back(QuotEntry_2_set);
      all_compo_names.insert("QuotEntry_2_set");

      {
        xml_element Instrmt_37{"Instrmt"};
        multiset<string> Instrmt_37_set;
        Instrmt_37.add_attribute("Sym", "Symbol_t_1097452228"); // 3
        Instrmt_37_set.insert("Symbol_t_1097452228");
        Instrmt_37.add_attribute("Sfx", "CD"); // 3
        Instrmt_37_set.insert("CD");
        Instrmt_37.add_attribute("ID", "SecurityID_t_742863261"); // 3
        Instrmt_37_set.insert("SecurityID_t_742863261");
        Instrmt_37.add_attribute("Src", "F"); // 3
        Instrmt_37_set.insert("F");
        Instrmt_37.add_attribute("Prod", "7"); // 3
        Instrmt_37_set.insert("7");
        Instrmt_37.add_attribute("ProdCmplx", "ProductComplex_t_62385555"); // 3
        Instrmt_37_set.insert("ProductComplex_t_62385555");
        Instrmt_37.add_attribute("SecGrp", "SecurityGroup_t_1500572277"); // 3
        Instrmt_37_set.insert("SecurityGroup_t_1500572277");
        Instrmt_37.add_attribute("CFI", "CFICode_t_432208407"); // 3
        Instrmt_37_set.insert("CFICode_t_432208407");
        Instrmt_37.add_attribute("SecTyp", "MPT"); // 3
        Instrmt_37_set.insert("MPT");
        Instrmt_37.add_attribute("SubTyp", "SecuritySubType_t_2119227078"); // 3
        Instrmt_37_set.insert("SecuritySubType_t_2119227078");
        Instrmt_37.add_attribute("MMY", "903225587"); // 3
        Instrmt_37_set.insert("903225587");
        Instrmt_37.add_attribute("MatDt", "MaturityDate_t_611908574"); // 3
        Instrmt_37_set.insert("MaturityDate_t_611908574");
        Instrmt_37.add_attribute("MatTm", "1957409138"); // 3
        Instrmt_37_set.insert("1957409138");
        Instrmt_37.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_891334755"); // 3
        Instrmt_37_set.insert("SettleOnOpenFlag_t_891334755");
        Instrmt_37.add_attribute("AsgnMeth", "588619977"); // 3
        Instrmt_37_set.insert("588619977");
        Instrmt_37.add_attribute("Status", "1"); // 3
        Instrmt_37_set.insert("1");
        Instrmt_37.add_attribute("CpnPmt", "CouponPaymentDate_t_307239438"); // 3
        Instrmt_37_set.insert("CouponPaymentDate_t_307239438");
        Instrmt_37.add_attribute("RestrctTyp", "MM"); // 3
        Instrmt_37_set.insert("MM");
        Instrmt_37.add_attribute("Snrty", "SB"); // 3
        Instrmt_37_set.insert("SB");
        Instrmt_37.add_attribute("NotlPctOut", "14167599.300000"); // 3
        Instrmt_37_set.insert("14167599.300000");
        Instrmt_37.add_attribute("OrigNotlPctOut", "20981738.740000"); // 3
        Instrmt_37_set.insert("20981738.740000");
        Instrmt_37.add_attribute("AttchPnt", "1332325.890000"); // 3
        Instrmt_37_set.insert("1332325.890000");
        Instrmt_37.add_attribute("DetchPnt", "16615564.990000"); // 3
        Instrmt_37_set.insert("16615564.990000");
        Instrmt_37.add_attribute("Issued", "IssueDate_t_2017943593"); // 3
        Instrmt_37_set.insert("IssueDate_t_2017943593");
        Instrmt_37.add_attribute("RepoCollSecTyp", "111114624"); // 3
        Instrmt_37_set.insert("111114624");
        Instrmt_37.add_attribute("RepoTrm", "555851319"); // 3
        Instrmt_37_set.insert("555851319");
        Instrmt_37.add_attribute("RepoRt", "14786672.130000"); // 3
        Instrmt_37_set.insert("14786672.130000");
        Instrmt_37.add_attribute("Fctr", "16490057.130000"); // 3
        Instrmt_37_set.insert("16490057.130000");
        Instrmt_37.add_attribute("CrdRtg", "CreditRating_t_1015343114"); // 3
        Instrmt_37_set.insert("CreditRating_t_1015343114");
        Instrmt_37.add_attribute("Rgstry", "InstrRegistry_t_1115803598"); // 3
        Instrmt_37_set.insert("InstrRegistry_t_1115803598");
        Instrmt_37.add_attribute("IssuCtry", "738412741"); // 3
        Instrmt_37_set.insert("738412741");
        Instrmt_37.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2112795342"); // 3
        Instrmt_37_set.insert("StateOrProvinceOfIssue_t_2112795342");
        Instrmt_37.add_attribute("Lcl", "LocaleOfIssue_t_1507208237"); // 3
        Instrmt_37_set.insert("LocaleOfIssue_t_1507208237");
        Instrmt_37.add_attribute("Redeem", "RedemptionDate_t_1481276002"); // 3
        Instrmt_37_set.insert("RedemptionDate_t_1481276002");
        Instrmt_37.add_attribute("StrkPx", "674981.670000"); // 3
        Instrmt_37_set.insert("674981.670000");
        Instrmt_37.add_attribute("StrkCcy", "EUR"); // 3
        Instrmt_37_set.insert("EUR");
        Instrmt_37.add_attribute("StrkMult", "15680704.440000"); // 3
        Instrmt_37_set.insert("15680704.440000");
        Instrmt_37.add_attribute("StrkValu", "12225266.650000"); // 3
        Instrmt_37_set.insert("12225266.650000");
        Instrmt_37.add_attribute("StrkPxDtrmnMeth", "1"); // 3
        Instrmt_37_set.insert("1");
        Instrmt_37.add_attribute("StrkPxBndryMeth", "5"); // 3
        Instrmt_37_set.insert("5");
        Instrmt_37.add_attribute("StrkPxBndryPrcsn", "21257522.520000"); // 3
        Instrmt_37_set.insert("21257522.520000");
        Instrmt_37.add_attribute("PxDtrmnMeth", "3"); // 3
        Instrmt_37_set.insert("3");
        Instrmt_37.add_attribute("OptAt", "1349739365"); // 3
        Instrmt_37_set.insert("1349739365");
        Instrmt_37.add_attribute("Mult", "8696033.590000"); // 3
        Instrmt_37_set.insert("8696033.590000");
        Instrmt_37.add_attribute("MultTyp", "2"); // 3
        Instrmt_37_set.insert("2");
        Instrmt_37.add_attribute("FlowSchedTyp", "0"); // 3
        Instrmt_37_set.insert("0");
        Instrmt_37.add_attribute("MinPxIncr", "11768427.970000"); // 3
        Instrmt_37_set.insert("11768427.970000");
        Instrmt_37.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1068690274"); // 3
        Instrmt_37_set.insert("MinPriceIncrementAmount_t_1068690274");
        Instrmt_37.add_attribute("UOM", "MMbbl"); // 3
        Instrmt_37_set.insert("MMbbl");
        Instrmt_37.add_attribute("UOMQty", "4461190.790000"); // 3
        Instrmt_37_set.insert("4461190.790000");
        Instrmt_37.add_attribute("PxUOM", "USD"); // 3
        Instrmt_37_set.insert("USD");
        Instrmt_37.add_attribute("PxUOMQty", "2616759.360000"); // 3
        Instrmt_37_set.insert("2616759.360000");
        Instrmt_37.add_attribute("SettlMeth", "P"); // 3
        Instrmt_37_set.insert("P");
        Instrmt_37.add_attribute("ExerStyle", "0"); // 3
        Instrmt_37_set.insert("0");
        Instrmt_37.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_37_set.insert("1");
        Instrmt_37.add_attribute("OptPayAmt", "OptPayoutAmount_t_516043250"); // 3
        Instrmt_37_set.insert("OptPayoutAmount_t_516043250");
        Instrmt_37.add_attribute("PxQteMeth", "PCTPAR"); // 3
        Instrmt_37_set.insert("PCTPAR");
        Instrmt_37.add_attribute("ValMeth", "CDS"); // 3
        Instrmt_37_set.insert("CDS");
        Instrmt_37.add_attribute("ListMeth", "1"); // 3
        Instrmt_37_set.insert("1");
        Instrmt_37.add_attribute("CapPx", "13368276.100000"); // 3
        Instrmt_37_set.insert("13368276.100000");
        Instrmt_37.add_attribute("FlrPx", "6127253.660000"); // 3
        Instrmt_37_set.insert("6127253.660000");
        Instrmt_37.add_attribute("PutCall", "1"); // 3
        Instrmt_37_set.insert("1");
        Instrmt_37.add_attribute("FlexInd", "false"); // 3
        Instrmt_37_set.insert("false");
        Instrmt_37.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_37_set.insert("true");
        Instrmt_37.add_attribute("TmUnit", "Mo"); // 3
        Instrmt_37_set.insert("Mo");
        Instrmt_37.add_attribute("CpnRt", "14868704.560000"); // 3
        Instrmt_37_set.insert("14868704.560000");
        Instrmt_37.add_attribute("Exch", "SecurityExchange_t_1490179278"); // 3
        Instrmt_37_set.insert("SecurityExchange_t_1490179278");
        Instrmt_37.add_attribute("PosLmt", "984783023"); // 3
        Instrmt_37_set.insert("984783023");
        Instrmt_37.add_attribute("NTPosLmt", "561913473"); // 3
        Instrmt_37_set.insert("561913473");
        Instrmt_37.add_attribute("Issr", "Issuer_t_1116852650"); // 3
        Instrmt_37_set.insert("Issuer_t_1116852650");
        Instrmt_37.add_attribute("EncIssrLen", "377113249"); // 3
        Instrmt_37_set.insert("377113249");
        Instrmt_37.add_attribute("EncIssr", "EncodedIssuer_t_540182078"); // 3
        Instrmt_37_set.insert("EncodedIssuer_t_540182078");
        Instrmt_37.add_attribute("Desc", "SecurityDesc_t_1355434597"); // 3
        Instrmt_37_set.insert("SecurityDesc_t_1355434597");
        Instrmt_37.add_attribute("EncSecDescLen", "1726852614"); // 3
        Instrmt_37_set.insert("1726852614");
        Instrmt_37.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1409785437"); // 3
        Instrmt_37_set.insert("EncodedSecurityDesc_t_1409785437");
        Instrmt_37.add_attribute("Pool", "Pool_t_35152873"); // 3
        Instrmt_37_set.insert("Pool_t_35152873");
        Instrmt_37.add_attribute("CSetMo", "75891532"); // 3
        Instrmt_37_set.insert("75891532");
        Instrmt_37.add_attribute("CPPgm", "1"); // 3
        Instrmt_37_set.insert("1");
        Instrmt_37.add_attribute("CPRegT", "CPRegType_t_1103843147"); // 3
        Instrmt_37_set.insert("CPRegType_t_1103843147");
        Instrmt_37.add_attribute("Dated", "DatedDate_t_204334879"); // 3
        Instrmt_37_set.insert("DatedDate_t_204334879");
        Instrmt_37.add_attribute("IntAcrl", "InterestAccrualDate_t_885263666"); // 3
        Instrmt_37_set.insert("InterestAccrualDate_t_885263666");
        all_values.push_back(Instrmt_37_set);
        all_compo_names.insert("Instrmt_37_set");

        {
          xml_element AID_40{"AID"};
          multiset<string> AID_40_set;
          AID_40.add_attribute("AltID", "SecurityAltID_t_2123223648"); // 4
          AID_40_set.insert("SecurityAltID_t_2123223648");
          AID_40.add_attribute("AltIDSrc", "I"); // 4
          AID_40_set.insert("I");
          all_values.push_back(AID_40_set);
          all_compo_names.insert("AID_40_set");

          Instrmt_37.add_element(AID_40);
        }
        {
          xml_element SecXML_40{"SecXML"};
          multiset<string> SecXML_40_set;
          SecXML_40.add_attribute("Schema", "SecurityXMLSchema_t_845455597"); // 4
          SecXML_40_set.insert("SecurityXMLSchema_t_845455597");
          all_values.push_back(SecXML_40_set);
          all_compo_names.insert("SecXML_40_set");

          Instrmt_37.add_element(SecXML_40);
        }
        {
          xml_element Evnt_40{"Evnt"};
          multiset<string> Evnt_40_set;
          Evnt_40.add_attribute("EventTyp", "6"); // 4
          Evnt_40_set.insert("6");
          Evnt_40.add_attribute("Dt", "EventDate_t_838801375"); // 4
          Evnt_40_set.insert("EventDate_t_838801375");
          Evnt_40.add_attribute("Tm", "EventTime_t_1361498848"); // 4
          Evnt_40_set.insert("EventTime_t_1361498848");
          Evnt_40.add_attribute("Px", "10866044.580000"); // 4
          Evnt_40_set.insert("10866044.580000");
          Evnt_40.add_attribute("Txt", "EventText_t_713114001"); // 4
          Evnt_40_set.insert("EventText_t_713114001");
          all_values.push_back(Evnt_40_set);
          all_compo_names.insert("Evnt_40_set");

          Instrmt_37.add_element(Evnt_40);
        }
        {
          xml_element Pty_206{"Pty"};
          multiset<string> Pty_206_set;
          Pty_206.add_attribute("ID", "InstrumentPartyID_t_745401565"); // 4
          Pty_206_set.insert("InstrumentPartyID_t_745401565");
          Pty_206.add_attribute("Src", "F"); // 4
          Pty_206_set.insert("F");
          Pty_206.add_attribute("R", "85"); // 4
          Pty_206_set.insert("85");
          all_values.push_back(Pty_206_set);
          all_compo_names.insert("Pty_206_set");

          {
            xml_element Sub_206{"Sub"};
            multiset<string> Sub_206_set;
            Sub_206.add_attribute("ID", "InstrumentPartySubID_t_94615976"); // 5
            Sub_206_set.insert("InstrumentPartySubID_t_94615976");
            Sub_206.add_attribute("Typ", "8"); // 5
            Sub_206_set.insert("8");
            all_values.push_back(Sub_206_set);
            all_compo_names.insert("Sub_206_set");

            Pty_206.add_element(Sub_206);
          }
          Instrmt_37.add_element(Pty_206);
        }
        {
          xml_element CmplxEvnt_37{"CmplxEvnt"};
          multiset<string> CmplxEvnt_37_set;
          CmplxEvnt_37.add_attribute("Typ", "8"); // 4
          CmplxEvnt_37_set.insert("8");
          CmplxEvnt_37.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1658812203"); // 4
          CmplxEvnt_37_set.insert("ComplexOptPayoutAmount_t_1658812203");
          CmplxEvnt_37.add_attribute("Px", "3118874.270000"); // 4
          CmplxEvnt_37_set.insert("3118874.270000");
          CmplxEvnt_37.add_attribute("PxBndryMeth", "4"); // 4
          CmplxEvnt_37_set.insert("4");
          CmplxEvnt_37.add_attribute("PxBndryPrcsn", "4961115.780000"); // 4
          CmplxEvnt_37_set.insert("4961115.780000");
          CmplxEvnt_37.add_attribute("PxTmTyp", "1"); // 4
          CmplxEvnt_37_set.insert("1");
          CmplxEvnt_37.add_attribute("Cond", "1"); // 4
          CmplxEvnt_37_set.insert("1");
          all_values.push_back(CmplxEvnt_37_set);
          all_compo_names.insert("CmplxEvnt_37_set");

          {
            xml_element EvntDts_37{"EvntDts"};
            multiset<string> EvntDts_37_set;
            EvntDts_37.add_attribute("StartDt", "ComplexEventStartDate_t_873224827"); // 5
            EvntDts_37_set.insert("ComplexEventStartDate_t_873224827");
            EvntDts_37.add_attribute("EndDt", "ComplexEventEndDate_t_1413982979"); // 5
            EvntDts_37_set.insert("ComplexEventEndDate_t_1413982979");
            all_values.push_back(EvntDts_37_set);
            all_compo_names.insert("EvntDts_37_set");

            {
              xml_element EvntTms_37{"EvntTms"};
              multiset<string> EvntTms_37_set;
              EvntTms_37.add_attribute("StartTm", "939856317"); // 6
              EvntTms_37_set.insert("939856317");
              EvntTms_37.add_attribute("EndTm", "452593794"); // 6
              EvntTms_37_set.insert("452593794");
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
        Leg_50.add_attribute("Sym", "LegSymbol_t_676284768"); // 3
        Leg_50_set.insert("LegSymbol_t_676284768");
        Leg_50.add_attribute("Sfx", "CD"); // 3
        Leg_50_set.insert("CD");
        Leg_50.add_attribute("ID", "LegSecurityID_t_528485326"); // 3
        Leg_50_set.insert("LegSecurityID_t_528485326");
        Leg_50.add_attribute("Src", "8"); // 3
        Leg_50_set.insert("8");
        Leg_50.add_attribute("Prod", "13"); // 3
        Leg_50_set.insert("13");
        Leg_50.add_attribute("CFI", "LegCFICode_t_732820205"); // 3
        Leg_50_set.insert("LegCFICode_t_732820205");
        Leg_50.add_attribute("SecTyp", "TAN"); // 3
        Leg_50_set.insert("TAN");
        Leg_50.add_attribute("SecSubTyp", "LegSecuritySubType_t_2054592338"); // 3
        Leg_50_set.insert("LegSecuritySubType_t_2054592338");
        Leg_50.add_attribute("MMY", "1198831020"); // 3
        Leg_50_set.insert("1198831020");
        Leg_50.add_attribute("Mat", "LegMaturityDate_t_698664971"); // 3
        Leg_50_set.insert("LegMaturityDate_t_698664971");
        Leg_50.add_attribute("MatTm", "772689137"); // 3
        Leg_50_set.insert("772689137");
        Leg_50.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2037632395"); // 3
        Leg_50_set.insert("LegCouponPaymentDate_t_2037632395");
        Leg_50.add_attribute("Issued", "LegIssueDate_t_2060163819"); // 3
        Leg_50_set.insert("LegIssueDate_t_2060163819");
        Leg_50.add_attribute("RepoCollSecTyp", "1859293595"); // 3
        Leg_50_set.insert("1859293595");
        Leg_50.add_attribute("RepoTrm", "603262748"); // 3
        Leg_50_set.insert("603262748");
        Leg_50.add_attribute("RepoRt", "6580817.360000"); // 3
        Leg_50_set.insert("6580817.360000");
        Leg_50.add_attribute("Fctr", "21352420.150000"); // 3
        Leg_50_set.insert("21352420.150000");
        Leg_50.add_attribute("CrdRtg", "LegCreditRating_t_1929102116"); // 3
        Leg_50_set.insert("LegCreditRating_t_1929102116");
        Leg_50.add_attribute("Rgstry", "LegInstrRegistry_t_752697713"); // 3
        Leg_50_set.insert("LegInstrRegistry_t_752697713");
        Leg_50.add_attribute("Ctry", "960258986"); // 3
        Leg_50_set.insert("960258986");
        Leg_50.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1053975556"); // 3
        Leg_50_set.insert("LegStateOrProvinceOfIssue_t_1053975556");
        Leg_50.add_attribute("Lcl", "LegLocaleOfIssue_t_264026268"); // 3
        Leg_50_set.insert("LegLocaleOfIssue_t_264026268");
        Leg_50.add_attribute("Redeem", "LegRedemptionDate_t_1272146413"); // 3
        Leg_50_set.insert("LegRedemptionDate_t_1272146413");
        Leg_50.add_attribute("Strk", "16690282.740000"); // 3
        Leg_50_set.insert("16690282.740000");
        Leg_50.add_attribute("StrkCcy", "JPY"); // 3
        Leg_50_set.insert("JPY");
        Leg_50.add_attribute("OptA", "1253449994"); // 3
        Leg_50_set.insert("1253449994");
        Leg_50.add_attribute("Cmult", "16333626.730000"); // 3
        Leg_50_set.insert("16333626.730000");
        Leg_50.add_attribute("MultTyp", "1"); // 3
        Leg_50_set.insert("1");
        Leg_50.add_attribute("FlowSchedTyp", "4"); // 3
        Leg_50_set.insert("4");
        Leg_50.add_attribute("UOM", "Bcf"); // 3
        Leg_50_set.insert("Bcf");
        Leg_50.add_attribute("UOMQty", "20887314.140000"); // 3
        Leg_50_set.insert("20887314.140000");
        Leg_50.add_attribute("PxUOM", "Gal"); // 3
        Leg_50_set.insert("Gal");
        Leg_50.add_attribute("PxUOMQty", "4669581.450000"); // 3
        Leg_50_set.insert("4669581.450000");
        Leg_50.add_attribute("TmUnit", "D"); // 3
        Leg_50_set.insert("D");
        Leg_50.add_attribute("ExerStyle", "1"); // 3
        Leg_50_set.insert("1");
        Leg_50.add_attribute("CpnRt", "11997783.500000"); // 3
        Leg_50_set.insert("11997783.500000");
        Leg_50.add_attribute("Exch", "LegSecurityExchange_t_909886495"); // 3
        Leg_50_set.insert("LegSecurityExchange_t_909886495");
        Leg_50.add_attribute("Issr", "LegIssuer_t_859309235"); // 3
        Leg_50_set.insert("LegIssuer_t_859309235");
        Leg_50.add_attribute("EncLegIssrLen", "251125722"); // 3
        Leg_50_set.insert("251125722");
        Leg_50.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1608551467"); // 3
        Leg_50_set.insert("EncodedLegIssuer_t_1608551467");
        Leg_50.add_attribute("Desc", "LegSecurityDesc_t_1631998372"); // 3
        Leg_50_set.insert("LegSecurityDesc_t_1631998372");
        Leg_50.add_attribute("EncLegSecDescLen", "141274470"); // 3
        Leg_50_set.insert("141274470");
        Leg_50.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1521231638"); // 3
        Leg_50_set.insert("EncodedLegSecurityDesc_t_1521231638");
        Leg_50.add_attribute("RatioQty", "13438083.190000"); // 3
        Leg_50_set.insert("13438083.190000");
        Leg_50.add_attribute("Side", "3"); // 3
        Leg_50_set.insert("3");
        Leg_50.add_attribute("Ccy", "USD"); // 3
        Leg_50_set.insert("USD");
        Leg_50.add_attribute("Pool", "LegPool_t_526155686"); // 3
        Leg_50_set.insert("LegPool_t_526155686");
        Leg_50.add_attribute("Dated", "LegDatedDate_t_784527440"); // 3
        Leg_50_set.insert("LegDatedDate_t_784527440");
        Leg_50.add_attribute("CSetMo", "144342024"); // 3
        Leg_50_set.insert("144342024");
        Leg_50.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1580131242"); // 3
        Leg_50_set.insert("LegInterestAccrualDate_t_1580131242");
        Leg_50.add_attribute("PutCall", "1048553708"); // 3
        Leg_50_set.insert("1048553708");
        Leg_50.add_attribute("LegOptionRatio", "14164884.370000"); // 3
        Leg_50_set.insert("14164884.370000");
        Leg_50.add_attribute("Px", "11016758.680000"); // 3
        Leg_50_set.insert("11016758.680000");
        all_values.push_back(Leg_50_set);
        all_compo_names.insert("Leg_50_set");

        {
          xml_element LegAID_50{"LegAID"};
          multiset<string> LegAID_50_set;
          LegAID_50.add_attribute("SecAltID", "LegSecurityAltID_t_1808691554"); // 4
          LegAID_50_set.insert("LegSecurityAltID_t_1808691554");
          LegAID_50.add_attribute("SecAltIDSrc", "H"); // 4
          LegAID_50_set.insert("H");
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
