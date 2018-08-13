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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MassQuotAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuoteAcknowledgement_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_594864622"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("QuoteReqID_t_594864622");
  elt.add_attribute("QID", "QuoteID_t_1842147558"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("QuoteID_t_1842147558");
  elt.add_attribute("Stat", "1"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("1");
  elt.add_attribute("RejRsn", "11"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("11");
  elt.add_attribute("RspLvl", "2"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("2");
  elt.add_attribute("Typ", "0"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("0");
  elt.add_attribute("CxlTyp", "7"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("7");
  elt.add_attribute("Acct", "Account_t_1214854396"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("Account_t_1214854396");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "2"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_1787538043"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("Text_t_1787538043");
  elt.add_attribute("EncTxtLen", "1031561438"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("1031561438");
  elt.add_attribute("EncTxt", "EncodedText_t_327678553"); // 0
  MassQuoteAcknowledgement_message_t_0.insert("EncodedText_t_327678553");
  all_values.push_back(MassQuoteAcknowledgement_message_t_0);
  all_compo_names.insert("MassQuoteAcknowledgement_message_t");

  { // Hdr
    xml_element Hdr_47{"Hdr"};
    multiset<string> Hdr_47_set;
    Hdr_47.add_attribute("SeqNum", "1784137662"); // 1
    Hdr_47_set.insert("1784137662");
    Hdr_47.add_attribute("SID", "SenderCompID_t_1154175954"); // 1
    Hdr_47_set.insert("SenderCompID_t_1154175954");
    Hdr_47.add_attribute("TID", "TargetCompID_t_99630613"); // 1
    Hdr_47_set.insert("TargetCompID_t_99630613");
    Hdr_47.add_attribute("OBID", "OnBehalfOfCompID_t_1454901566"); // 1
    Hdr_47_set.insert("OnBehalfOfCompID_t_1454901566");
    Hdr_47.add_attribute("D2ID", "DeliverToCompID_t_1410793963"); // 1
    Hdr_47_set.insert("DeliverToCompID_t_1410793963");
    Hdr_47.add_attribute("SSub", "SenderSubID_t_2031291682"); // 1
    Hdr_47_set.insert("SenderSubID_t_2031291682");
    Hdr_47.add_attribute("SLoc", "SenderLocationID_t_1930111687"); // 1
    Hdr_47_set.insert("SenderLocationID_t_1930111687");
    Hdr_47.add_attribute("TSub", "TargetSubID_t_116790138"); // 1
    Hdr_47_set.insert("TargetSubID_t_116790138");
    Hdr_47.add_attribute("TLoc", "TargetLocationID_t_597449068"); // 1
    Hdr_47_set.insert("TargetLocationID_t_597449068");
    Hdr_47.add_attribute("OBSub", "OnBehalfOfSubID_t_1297213218"); // 1
    Hdr_47_set.insert("OnBehalfOfSubID_t_1297213218");
    Hdr_47.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1374760010"); // 1
    Hdr_47_set.insert("OnBehalfOfLocationID_t_1374760010");
    Hdr_47.add_attribute("D2Sub", "DeliverToSubID_t_1251528143"); // 1
    Hdr_47_set.insert("DeliverToSubID_t_1251528143");
    Hdr_47.add_attribute("D2Loc", "DeliverToLocationID_t_192449417"); // 1
    Hdr_47_set.insert("DeliverToLocationID_t_192449417");
    Hdr_47.add_attribute("PosDup", "Y"); // 1
    Hdr_47_set.insert("Y");
    Hdr_47.add_attribute("PosRsnd", "Y"); // 1
    Hdr_47_set.insert("Y");
    Hdr_47.add_attribute("Snt", "SendingTime_t_1635390587"); // 1
    Hdr_47_set.insert("SendingTime_t_1635390587");
    Hdr_47.add_attribute("OrigSnt", "OrigSendingTime_t_977312076"); // 1
    Hdr_47_set.insert("OrigSendingTime_t_977312076");
    Hdr_47.add_attribute("MsgEncd", "MessageEncoding_t_320516618"); // 1
    Hdr_47_set.insert("MessageEncoding_t_320516618");
    all_values.push_back(Hdr_47_set);
    all_compo_names.insert("Hdr_47_set");

    {
      xml_element Hop_47{"Hop"};
      multiset<string> Hop_47_set;
      Hop_47.add_attribute("ID", "HopCompID_t_82771561"); // 2
      Hop_47_set.insert("HopCompID_t_82771561");
      Hop_47.add_attribute("Ref", "671975986"); // 2
      Hop_47_set.insert("671975986");
      Hop_47.add_attribute("Snt", "HopSendingTime_t_506417733"); // 2
      Hop_47_set.insert("HopSendingTime_t_506417733");
      all_values.push_back(Hop_47_set);
      all_compo_names.insert("Hop_47_set");

      Hdr_47.add_element(Hop_47);
    }
    elt.add_element(Hdr_47);
  } // end Hdr
  { // Pty
    xml_element Pty_200{"Pty"};
    multiset<string> Pty_200_set;
    Pty_200.add_attribute("ID", "PartyID_t_1525620232"); // 1
    Pty_200_set.insert("PartyID_t_1525620232");
    Pty_200.add_attribute("Src", "7"); // 1
    Pty_200_set.insert("7");
    Pty_200.add_attribute("R", "20"); // 1
    Pty_200_set.insert("20");
    all_values.push_back(Pty_200_set);
    all_compo_names.insert("Pty_200_set");

    {
      xml_element Sub_200{"Sub"};
      multiset<string> Sub_200_set;
      Sub_200.add_attribute("ID", "PartySubID_t_592990981"); // 2
      Sub_200_set.insert("PartySubID_t_592990981");
      Sub_200.add_attribute("Typ", "3"); // 2
      Sub_200_set.insert("3");
      all_values.push_back(Sub_200_set);
      all_compo_names.insert("Sub_200_set");

      Pty_200.add_element(Sub_200);
    }
    elt.add_element(Pty_200);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_0{"TgtPty"};
    multiset<string> TgtPty_0_set;
    TgtPty_0.add_attribute("ID", "TargetPartyID_t_233045376"); // 1
    TgtPty_0_set.insert("TargetPartyID_t_233045376");
    TgtPty_0.add_attribute("Src", "1"); // 1
    TgtPty_0_set.insert("1");
    TgtPty_0.add_attribute("R", "49"); // 1
    TgtPty_0_set.insert("49");
    all_values.push_back(TgtPty_0_set);
    all_compo_names.insert("TgtPty_0_set");

    elt.add_element(TgtPty_0);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_1{"TgtPty"};
    multiset<string> TgtPty_1_set;
    TgtPty_1.add_attribute("ID", "TargetPartyID_t_2017183038"); // 1
    TgtPty_1_set.insert("TargetPartyID_t_2017183038");
    TgtPty_1.add_attribute("Src", "6"); // 1
    TgtPty_1_set.insert("6");
    TgtPty_1.add_attribute("R", "31"); // 1
    TgtPty_1_set.insert("31");
    all_values.push_back(TgtPty_1_set);
    all_compo_names.insert("TgtPty_1_set");

    elt.add_element(TgtPty_1);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_2{"TgtPty"};
    multiset<string> TgtPty_2_set;
    TgtPty_2.add_attribute("ID", "TargetPartyID_t_1324600957"); // 1
    TgtPty_2_set.insert("TargetPartyID_t_1324600957");
    TgtPty_2.add_attribute("Src", "B"); // 1
    TgtPty_2_set.insert("B");
    TgtPty_2.add_attribute("R", "53"); // 1
    TgtPty_2_set.insert("53");
    all_values.push_back(TgtPty_2_set);
    all_compo_names.insert("TgtPty_2_set");

    elt.add_element(TgtPty_2);
  } // end TgtPty
  { // QuotSetAck
    xml_element QuotSetAck_0{"QuotSetAck"};
    multiset<string> QuotSetAck_0_set;
    QuotSetAck_0.add_attribute("SetID", "QuoteSetID_t_303973138"); // 1
    QuotSetAck_0_set.insert("QuoteSetID_t_303973138");
    QuotSetAck_0.add_attribute("ValidTil", "QuoteSetValidUntilTime_t_1310692446"); // 1
    QuotSetAck_0_set.insert("QuoteSetValidUntilTime_t_1310692446");
    QuotSetAck_0.add_attribute("TotNoQuotEntries", "256958567"); // 1
    QuotSetAck_0_set.insert("256958567");
    QuotSetAck_0.add_attribute("TotNoCxldQts", "1678733149"); // 1
    QuotSetAck_0_set.insert("1678733149");
    QuotSetAck_0.add_attribute("TotNoAccQts", "414736941"); // 1
    QuotSetAck_0_set.insert("414736941");
    QuotSetAck_0.add_attribute("TotNoRejQts", "449407984"); // 1
    QuotSetAck_0_set.insert("449407984");
    QuotSetAck_0.add_attribute("LastFragment", "N"); // 1
    QuotSetAck_0_set.insert("N");
    all_values.push_back(QuotSetAck_0_set);
    all_compo_names.insert("QuotSetAck_0_set");

    {
      xml_element Undly_51{"Undly"};
      multiset<string> Undly_51_set;
      Undly_51.add_attribute("Sym", "UnderlyingSymbol_t_158259618"); // 2
      Undly_51_set.insert("UnderlyingSymbol_t_158259618");
      Undly_51.add_attribute("Sfx", "WI"); // 2
      Undly_51_set.insert("WI");
      Undly_51.add_attribute("ID", "UnderlyingSecurityID_t_408013696"); // 2
      Undly_51_set.insert("UnderlyingSecurityID_t_408013696");
      Undly_51.add_attribute("Src", "5"); // 2
      Undly_51_set.insert("5");
      Undly_51.add_attribute("Prod", "12"); // 2
      Undly_51_set.insert("12");
      Undly_51.add_attribute("CFI", "UnderlyingCFICode_t_1079989682"); // 2
      Undly_51_set.insert("UnderlyingCFICode_t_1079989682");
      Undly_51.add_attribute("SecTyp", "PFAND"); // 2
      Undly_51_set.insert("PFAND");
      Undly_51.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1617133995"); // 2
      Undly_51_set.insert("UnderlyingSecuritySubType_t_1617133995");
      Undly_51.add_attribute("MMY", "458126267"); // 2
      Undly_51_set.insert("458126267");
      Undly_51.add_attribute("Mat", "UnderlyingMaturityDate_t_1955979336"); // 2
      Undly_51_set.insert("UnderlyingMaturityDate_t_1955979336");
      Undly_51.add_attribute("MatTm", "927453896"); // 2
      Undly_51_set.insert("927453896");
      Undly_51.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1051117248"); // 2
      Undly_51_set.insert("UnderlyingCouponPaymentDate_t_1051117248");
      Undly_51.add_attribute("RestrctTyp", "FR"); // 2
      Undly_51_set.insert("FR");
      Undly_51.add_attribute("Snrty", "SR"); // 2
      Undly_51_set.insert("SR");
      Undly_51.add_attribute("NotlPctOut", "12841626.240000"); // 2
      Undly_51_set.insert("12841626.240000");
      Undly_51.add_attribute("OrigNotlPctOut", "4638113.580000"); // 2
      Undly_51_set.insert("4638113.580000");
      Undly_51.add_attribute("AttchPnt", "20593848.020000"); // 2
      Undly_51_set.insert("20593848.020000");
      Undly_51.add_attribute("DetchPnt", "11538620.150000"); // 2
      Undly_51_set.insert("11538620.150000");
      Undly_51.add_attribute("Issued", "UnderlyingIssueDate_t_1387684043"); // 2
      Undly_51_set.insert("UnderlyingIssueDate_t_1387684043");
      Undly_51.add_attribute("RepoCollSecTyp", "741336498"); // 2
      Undly_51_set.insert("741336498");
      Undly_51.add_attribute("RepoTrm", "330979324"); // 2
      Undly_51_set.insert("330979324");
      Undly_51.add_attribute("RepoRt", "15748670.440000"); // 2
      Undly_51_set.insert("15748670.440000");
      Undly_51.add_attribute("Fctr", "14545798.760000"); // 2
      Undly_51_set.insert("14545798.760000");
      Undly_51.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1438208320"); // 2
      Undly_51_set.insert("UnderlyingCreditRating_t_1438208320");
      Undly_51.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1878840182"); // 2
      Undly_51_set.insert("UnderlyingInstrRegistry_t_1878840182");
      Undly_51.add_attribute("Ctry", "617788674"); // 2
      Undly_51_set.insert("617788674");
      Undly_51.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1695166887"); // 2
      Undly_51_set.insert("UnderlyingStateOrProvinceOfIssue_t_1695166887");
      Undly_51.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1410089683"); // 2
      Undly_51_set.insert("UnderlyingLocaleOfIssue_t_1410089683");
      Undly_51.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1032525616"); // 2
      Undly_51_set.insert("UnderlyingRedemptionDate_t_1032525616");
      Undly_51.add_attribute("StrkPx", "21445748.720000"); // 2
      Undly_51_set.insert("21445748.720000");
      Undly_51.add_attribute("StrkCcy", "JPY"); // 2
      Undly_51_set.insert("JPY");
      Undly_51.add_attribute("OptA", "2081889795"); // 2
      Undly_51_set.insert("2081889795");
      Undly_51.add_attribute("Mult", "12488050.000000"); // 2
      Undly_51_set.insert("12488050.000000");
      Undly_51.add_attribute("MultTyp", "1"); // 2
      Undly_51_set.insert("1");
      Undly_51.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_51_set.insert("0");
      Undly_51.add_attribute("UOM", "USD"); // 2
      Undly_51_set.insert("USD");
      Undly_51.add_attribute("UOMQty", "5072717.930000"); // 2
      Undly_51_set.insert("5072717.930000");
      Undly_51.add_attribute("PxUOM", "MWh"); // 2
      Undly_51_set.insert("MWh");
      Undly_51.add_attribute("PxUOMQty", "6394373.020000"); // 2
      Undly_51_set.insert("6394373.020000");
      Undly_51.add_attribute("TmUnit", "Min"); // 2
      Undly_51_set.insert("Min");
      Undly_51.add_attribute("ExerStyle", "2"); // 2
      Undly_51_set.insert("2");
      Undly_51.add_attribute("CpnRt", "16905545.500000"); // 2
      Undly_51_set.insert("16905545.500000");
      Undly_51.add_attribute("Exch", "UnderlyingSecurityExchange_t_1009882109"); // 2
      Undly_51_set.insert("UnderlyingSecurityExchange_t_1009882109");
      Undly_51.add_attribute("Issr", "UnderlyingIssuer_t_1681176948"); // 2
      Undly_51_set.insert("UnderlyingIssuer_t_1681176948");
      Undly_51.add_attribute("EncUndIssrLen", "827233526"); // 2
      Undly_51_set.insert("827233526");
      Undly_51.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1473693467"); // 2
      Undly_51_set.insert("EncodedUnderlyingIssuer_t_1473693467");
      Undly_51.add_attribute("Desc", "UnderlyingSecurityDesc_t_1593078103"); // 2
      Undly_51_set.insert("UnderlyingSecurityDesc_t_1593078103");
      Undly_51.add_attribute("EncUndSecDescLen", "1981095541"); // 2
      Undly_51_set.insert("1981095541");
      Undly_51.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_713893863"); // 2
      Undly_51_set.insert("EncodedUnderlyingSecurityDesc_t_713893863");
      Undly_51.add_attribute("CPPgm", "UnderlyingCPProgram_t_186930953"); // 2
      Undly_51_set.insert("UnderlyingCPProgram_t_186930953");
      Undly_51.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_164591217"); // 2
      Undly_51_set.insert("UnderlyingCPRegType_t_164591217");
      Undly_51.add_attribute("AllocPct", "1412772.590000"); // 2
      Undly_51_set.insert("1412772.590000");
      Undly_51.add_attribute("Ccy", "GBP"); // 2
      Undly_51_set.insert("GBP");
      Undly_51.add_attribute("Qty", "20201174.410000"); // 2
      Undly_51_set.insert("20201174.410000");
      Undly_51.add_attribute("SettlTyp", "5"); // 2
      Undly_51_set.insert("5");
      Undly_51.add_attribute("CashAmt", "UnderlyingCashAmount_t_1150482777"); // 2
      Undly_51_set.insert("UnderlyingCashAmount_t_1150482777");
      Undly_51.add_attribute("CashTyp", "DIFF"); // 2
      Undly_51_set.insert("DIFF");
      Undly_51.add_attribute("Px", "11443414.710000"); // 2
      Undly_51_set.insert("11443414.710000");
      Undly_51.add_attribute("DirtPx", "11475740.010000"); // 2
      Undly_51_set.insert("11475740.010000");
      Undly_51.add_attribute("EndPx", "21235147.810000"); // 2
      Undly_51_set.insert("21235147.810000");
      Undly_51.add_attribute("StartVal", "UnderlyingStartValue_t_187643058"); // 2
      Undly_51_set.insert("UnderlyingStartValue_t_187643058");
      Undly_51.add_attribute("CurVal", "UnderlyingCurrentValue_t_1081980149"); // 2
      Undly_51_set.insert("UnderlyingCurrentValue_t_1081980149");
      Undly_51.add_attribute("EndVal", "UnderlyingEndValue_t_1224836133"); // 2
      Undly_51_set.insert("UnderlyingEndValue_t_1224836133");
      Undly_51.add_attribute("AdjQty", "18572045.290000"); // 2
      Undly_51_set.insert("18572045.290000");
      Undly_51.add_attribute("FxRate", "10364727.810000"); // 2
      Undly_51_set.insert("10364727.810000");
      Undly_51.add_attribute("FxRateCalc", "M"); // 2
      Undly_51_set.insert("M");
      Undly_51.add_attribute("CapValu", "UnderlyingCapValue_t_216992674"); // 2
      Undly_51_set.insert("UnderlyingCapValue_t_216992674");
      Undly_51.add_attribute("SetMeth", "UnderlyingSettlMethod_t_460615761"); // 2
      Undly_51_set.insert("UnderlyingSettlMethod_t_460615761");
      Undly_51.add_attribute("PutCall", "2045584470"); // 2
      Undly_51_set.insert("2045584470");
      all_values.push_back(Undly_51_set);
      all_compo_names.insert("Undly_51_set");

      {
        xml_element UndAID_51{"UndAID"};
        multiset<string> UndAID_51_set;
        UndAID_51.add_attribute("AltID", "UnderlyingSecurityAltID_t_532760155"); // 3
        UndAID_51_set.insert("UnderlyingSecurityAltID_t_532760155");
        UndAID_51.add_attribute("AltIDSrc", "6"); // 3
        UndAID_51_set.insert("6");
        all_values.push_back(UndAID_51_set);
        all_compo_names.insert("UndAID_51_set");

        Undly_51.add_element(UndAID_51);
      }
      {
        xml_element Stip_78{"Stip"};
        multiset<string> Stip_78_set;
        Stip_78.add_attribute("Typ", "HAIRCUT"); // 3
        Stip_78_set.insert("HAIRCUT");
        Stip_78.add_attribute("Val", "UnderlyingStipValue_t_1542642264"); // 3
        Stip_78_set.insert("UnderlyingStipValue_t_1542642264");
        all_values.push_back(Stip_78_set);
        all_compo_names.insert("Stip_78_set");

        Undly_51.add_element(Stip_78);
      }
      {
        xml_element Pty_201{"Pty"};
        multiset<string> Pty_201_set;
        Pty_201.add_attribute("ID", "UnderlyingInstrumentPartyID_t_345905938"); // 3
        Pty_201_set.insert("UnderlyingInstrumentPartyID_t_345905938");
        Pty_201.add_attribute("Src", "G"); // 3
        Pty_201_set.insert("G");
        Pty_201.add_attribute("R", "24"); // 3
        Pty_201_set.insert("24");
        all_values.push_back(Pty_201_set);
        all_compo_names.insert("Pty_201_set");

        {
          xml_element Sub_201{"Sub"};
          multiset<string> Sub_201_set;
          Sub_201.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1938984041"); // 4
          Sub_201_set.insert("UnderlyingInstrumentPartySubID_t_1938984041");
          Sub_201.add_attribute("Typ", "4"); // 4
          Sub_201_set.insert("4");
          all_values.push_back(Sub_201_set);
          all_compo_names.insert("Sub_201_set");

          Pty_201.add_element(Sub_201);
        }
        Undly_51.add_element(Pty_201);
      }
      QuotSetAck_0.add_element(Undly_51);
    }
    {
      xml_element QuotEntryAck_0{"QuotEntryAck"};
      multiset<string> QuotEntryAck_0_set;
      QuotEntryAck_0.add_attribute("EntryID", "QuoteEntryID_t_1582745946"); // 2
      QuotEntryAck_0_set.insert("QuoteEntryID_t_1582745946");
      QuotEntryAck_0.add_attribute("BidPx", "21259149.940000"); // 2
      QuotEntryAck_0_set.insert("21259149.940000");
      QuotEntryAck_0.add_attribute("OfrPx", "2666083.620000"); // 2
      QuotEntryAck_0_set.insert("2666083.620000");
      QuotEntryAck_0.add_attribute("BidSz", "17240232.050000"); // 2
      QuotEntryAck_0_set.insert("17240232.050000");
      QuotEntryAck_0.add_attribute("OfrSz", "16199421.750000"); // 2
      QuotEntryAck_0_set.insert("16199421.750000");
      QuotEntryAck_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_1869407900"); // 2
      QuotEntryAck_0_set.insert("ValidUntilTime_t_1869407900");
      QuotEntryAck_0.add_attribute("BidSpotRt", "15966569.990000"); // 2
      QuotEntryAck_0_set.insert("15966569.990000");
      QuotEntryAck_0.add_attribute("OfrSpotRt", "17317580.300000"); // 2
      QuotEntryAck_0_set.insert("17317580.300000");
      QuotEntryAck_0.add_attribute("BidFwdPnts", "8724070.290000"); // 2
      QuotEntryAck_0_set.insert("8724070.290000");
      QuotEntryAck_0.add_attribute("OfrFwdPnts", "7318968.280000"); // 2
      QuotEntryAck_0_set.insert("7318968.280000");
      QuotEntryAck_0.add_attribute("MidPx", "7286158.540000"); // 2
      QuotEntryAck_0_set.insert("7286158.540000");
      QuotEntryAck_0.add_attribute("BidYld", "20199810.310000"); // 2
      QuotEntryAck_0_set.insert("20199810.310000");
      QuotEntryAck_0.add_attribute("MidYld", "7079279.610000"); // 2
      QuotEntryAck_0_set.insert("7079279.610000");
      QuotEntryAck_0.add_attribute("OfrYld", "9162589.120000"); // 2
      QuotEntryAck_0_set.insert("9162589.120000");
      QuotEntryAck_0.add_attribute("TxnTm", "TransactTime_t_954477532"); // 2
      QuotEntryAck_0_set.insert("TransactTime_t_954477532");
      QuotEntryAck_0.add_attribute("SesID", "1"); // 2
      QuotEntryAck_0_set.insert("1");
      QuotEntryAck_0.add_attribute("SesSub", "6"); // 2
      QuotEntryAck_0_set.insert("6");
      QuotEntryAck_0.add_attribute("SettlDt", "SettlDate_t_1990950313"); // 2
      QuotEntryAck_0_set.insert("SettlDate_t_1990950313");
      QuotEntryAck_0.add_attribute("OrdTyp", "8"); // 2
      QuotEntryAck_0_set.insert("8");
      QuotEntryAck_0.add_attribute("SettlDt2", "SettlDate2_t_842972467"); // 2
      QuotEntryAck_0_set.insert("SettlDate2_t_842972467");
      QuotEntryAck_0.add_attribute("Qty2", "3040824.270000"); // 2
      QuotEntryAck_0_set.insert("3040824.270000");
      QuotEntryAck_0.add_attribute("BidFwdPnts2", "10895284.370000"); // 2
      QuotEntryAck_0_set.insert("10895284.370000");
      QuotEntryAck_0.add_attribute("OfrFwdPnts2", "13757326.220000"); // 2
      QuotEntryAck_0_set.insert("13757326.220000");
      QuotEntryAck_0.add_attribute("Ccy", "USD"); // 2
      QuotEntryAck_0_set.insert("USD");
      QuotEntryAck_0.add_attribute("BkngTyp", "0"); // 2
      QuotEntryAck_0_set.insert("0");
      QuotEntryAck_0.add_attribute("Cpcty", "A"); // 2
      QuotEntryAck_0_set.insert("A");
      QuotEntryAck_0.add_attribute("Rstctions", "4"); // 2
      QuotEntryAck_0_set.insert("4");
      QuotEntryAck_0.add_attribute("QtEntSts", "7"); // 2
      QuotEntryAck_0_set.insert("7");
      QuotEntryAck_0.add_attribute("EntryRejRsn", "99"); // 2
      QuotEntryAck_0_set.insert("99");
      all_values.push_back(QuotEntryAck_0_set);
      all_compo_names.insert("QuotEntryAck_0_set");

      {
        xml_element Instrmt_38{"Instrmt"};
        multiset<string> Instrmt_38_set;
        Instrmt_38.add_attribute("Sym", "Symbol_t_901122557"); // 3
        Instrmt_38_set.insert("Symbol_t_901122557");
        Instrmt_38.add_attribute("Sfx", "CD"); // 3
        Instrmt_38_set.insert("CD");
        Instrmt_38.add_attribute("ID", "SecurityID_t_1232132741"); // 3
        Instrmt_38_set.insert("SecurityID_t_1232132741");
        Instrmt_38.add_attribute("Src", "4"); // 3
        Instrmt_38_set.insert("4");
        Instrmt_38.add_attribute("Prod", "7"); // 3
        Instrmt_38_set.insert("7");
        Instrmt_38.add_attribute("ProdCmplx", "ProductComplex_t_704591268"); // 3
        Instrmt_38_set.insert("ProductComplex_t_704591268");
        Instrmt_38.add_attribute("SecGrp", "SecurityGroup_t_889655171"); // 3
        Instrmt_38_set.insert("SecurityGroup_t_889655171");
        Instrmt_38.add_attribute("CFI", "CFICode_t_100718528"); // 3
        Instrmt_38_set.insert("CFICode_t_100718528");
        Instrmt_38.add_attribute("SecTyp", "FXSWAP"); // 3
        Instrmt_38_set.insert("FXSWAP");
        Instrmt_38.add_attribute("SubTyp", "SecuritySubType_t_1762062201"); // 3
        Instrmt_38_set.insert("SecuritySubType_t_1762062201");
        Instrmt_38.add_attribute("MMY", "832615356"); // 3
        Instrmt_38_set.insert("832615356");
        Instrmt_38.add_attribute("MatDt", "MaturityDate_t_1017481505"); // 3
        Instrmt_38_set.insert("MaturityDate_t_1017481505");
        Instrmt_38.add_attribute("MatTm", "1634559584"); // 3
        Instrmt_38_set.insert("1634559584");
        Instrmt_38.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1540543317"); // 3
        Instrmt_38_set.insert("SettleOnOpenFlag_t_1540543317");
        Instrmt_38.add_attribute("AsgnMeth", "1933740417"); // 3
        Instrmt_38_set.insert("1933740417");
        Instrmt_38.add_attribute("Status", "1"); // 3
        Instrmt_38_set.insert("1");
        Instrmt_38.add_attribute("CpnPmt", "CouponPaymentDate_t_1325823764"); // 3
        Instrmt_38_set.insert("CouponPaymentDate_t_1325823764");
        Instrmt_38.add_attribute("RestrctTyp", "MM"); // 3
        Instrmt_38_set.insert("MM");
        Instrmt_38.add_attribute("Snrty", "SD"); // 3
        Instrmt_38_set.insert("SD");
        Instrmt_38.add_attribute("NotlPctOut", "3697677.310000"); // 3
        Instrmt_38_set.insert("3697677.310000");
        Instrmt_38.add_attribute("OrigNotlPctOut", "12552090.290000"); // 3
        Instrmt_38_set.insert("12552090.290000");
        Instrmt_38.add_attribute("AttchPnt", "5891025.600000"); // 3
        Instrmt_38_set.insert("5891025.600000");
        Instrmt_38.add_attribute("DetchPnt", "14592961.680000"); // 3
        Instrmt_38_set.insert("14592961.680000");
        Instrmt_38.add_attribute("Issued", "IssueDate_t_483458003"); // 3
        Instrmt_38_set.insert("IssueDate_t_483458003");
        Instrmt_38.add_attribute("RepoCollSecTyp", "1705397625"); // 3
        Instrmt_38_set.insert("1705397625");
        Instrmt_38.add_attribute("RepoTrm", "1989996330"); // 3
        Instrmt_38_set.insert("1989996330");
        Instrmt_38.add_attribute("RepoRt", "12543492.410000"); // 3
        Instrmt_38_set.insert("12543492.410000");
        Instrmt_38.add_attribute("Fctr", "10201149.790000"); // 3
        Instrmt_38_set.insert("10201149.790000");
        Instrmt_38.add_attribute("CrdRtg", "CreditRating_t_641618095"); // 3
        Instrmt_38_set.insert("CreditRating_t_641618095");
        Instrmt_38.add_attribute("Rgstry", "InstrRegistry_t_746608914"); // 3
        Instrmt_38_set.insert("InstrRegistry_t_746608914");
        Instrmt_38.add_attribute("IssuCtry", "126332727"); // 3
        Instrmt_38_set.insert("126332727");
        Instrmt_38.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1542740653"); // 3
        Instrmt_38_set.insert("StateOrProvinceOfIssue_t_1542740653");
        Instrmt_38.add_attribute("Lcl", "LocaleOfIssue_t_1821614534"); // 3
        Instrmt_38_set.insert("LocaleOfIssue_t_1821614534");
        Instrmt_38.add_attribute("Redeem", "RedemptionDate_t_1358465468"); // 3
        Instrmt_38_set.insert("RedemptionDate_t_1358465468");
        Instrmt_38.add_attribute("StrkPx", "5629879.240000"); // 3
        Instrmt_38_set.insert("5629879.240000");
        Instrmt_38.add_attribute("StrkCcy", "CHF"); // 3
        Instrmt_38_set.insert("CHF");
        Instrmt_38.add_attribute("StrkMult", "14526430.960000"); // 3
        Instrmt_38_set.insert("14526430.960000");
        Instrmt_38.add_attribute("StrkValu", "4263945.920000"); // 3
        Instrmt_38_set.insert("4263945.920000");
        Instrmt_38.add_attribute("StrkPxDtrmnMeth", "1"); // 3
        Instrmt_38_set.insert("1");
        Instrmt_38.add_attribute("StrkPxBndryMeth", "5"); // 3
        Instrmt_38_set.insert("5");
        Instrmt_38.add_attribute("StrkPxBndryPrcsn", "12590099.490000"); // 3
        Instrmt_38_set.insert("12590099.490000");
        Instrmt_38.add_attribute("PxDtrmnMeth", "2"); // 3
        Instrmt_38_set.insert("2");
        Instrmt_38.add_attribute("OptAt", "554297585"); // 3
        Instrmt_38_set.insert("554297585");
        Instrmt_38.add_attribute("Mult", "6520696.180000"); // 3
        Instrmt_38_set.insert("6520696.180000");
        Instrmt_38.add_attribute("MultTyp", "2"); // 3
        Instrmt_38_set.insert("2");
        Instrmt_38.add_attribute("FlowSchedTyp", "3"); // 3
        Instrmt_38_set.insert("3");
        Instrmt_38.add_attribute("MinPxIncr", "19778933.820000"); // 3
        Instrmt_38_set.insert("19778933.820000");
        Instrmt_38.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1420413576"); // 3
        Instrmt_38_set.insert("MinPriceIncrementAmount_t_1420413576");
        Instrmt_38.add_attribute("UOM", "Bcf"); // 3
        Instrmt_38_set.insert("Bcf");
        Instrmt_38.add_attribute("UOMQty", "2001774.650000"); // 3
        Instrmt_38_set.insert("2001774.650000");
        Instrmt_38.add_attribute("PxUOM", "oz_tr"); // 3
        Instrmt_38_set.insert("oz_tr");
        Instrmt_38.add_attribute("PxUOMQty", "18699737.470000"); // 3
        Instrmt_38_set.insert("18699737.470000");
        Instrmt_38.add_attribute("SettlMeth", "C"); // 3
        Instrmt_38_set.insert("C");
        Instrmt_38.add_attribute("ExerStyle", "2"); // 3
        Instrmt_38_set.insert("2");
        Instrmt_38.add_attribute("OptPayoutTyp", "3"); // 3
        Instrmt_38_set.insert("3");
        Instrmt_38.add_attribute("OptPayAmt", "OptPayoutAmount_t_1501986316"); // 3
        Instrmt_38_set.insert("OptPayoutAmount_t_1501986316");
        Instrmt_38.add_attribute("PxQteMeth", "INX"); // 3
        Instrmt_38_set.insert("INX");
        Instrmt_38.add_attribute("ValMeth", "EQTY"); // 3
        Instrmt_38_set.insert("EQTY");
        Instrmt_38.add_attribute("ListMeth", "0"); // 3
        Instrmt_38_set.insert("0");
        Instrmt_38.add_attribute("CapPx", "8650714.670000"); // 3
        Instrmt_38_set.insert("8650714.670000");
        Instrmt_38.add_attribute("FlrPx", "4268517.820000"); // 3
        Instrmt_38_set.insert("4268517.820000");
        Instrmt_38.add_attribute("PutCall", "1"); // 3
        Instrmt_38_set.insert("1");
        Instrmt_38.add_attribute("FlexInd", "true"); // 3
        Instrmt_38_set.insert("true");
        Instrmt_38.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_38_set.insert("false");
        Instrmt_38.add_attribute("TmUnit", "Wk"); // 3
        Instrmt_38_set.insert("Wk");
        Instrmt_38.add_attribute("CpnRt", "8648784.180000"); // 3
        Instrmt_38_set.insert("8648784.180000");
        Instrmt_38.add_attribute("Exch", "SecurityExchange_t_1700890340"); // 3
        Instrmt_38_set.insert("SecurityExchange_t_1700890340");
        Instrmt_38.add_attribute("PosLmt", "1407008789"); // 3
        Instrmt_38_set.insert("1407008789");
        Instrmt_38.add_attribute("NTPosLmt", "1291273010"); // 3
        Instrmt_38_set.insert("1291273010");
        Instrmt_38.add_attribute("Issr", "Issuer_t_1905329080"); // 3
        Instrmt_38_set.insert("Issuer_t_1905329080");
        Instrmt_38.add_attribute("EncIssrLen", "326746790"); // 3
        Instrmt_38_set.insert("326746790");
        Instrmt_38.add_attribute("EncIssr", "EncodedIssuer_t_402799311"); // 3
        Instrmt_38_set.insert("EncodedIssuer_t_402799311");
        Instrmt_38.add_attribute("Desc", "SecurityDesc_t_979765677"); // 3
        Instrmt_38_set.insert("SecurityDesc_t_979765677");
        Instrmt_38.add_attribute("EncSecDescLen", "881044375"); // 3
        Instrmt_38_set.insert("881044375");
        Instrmt_38.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1054868930"); // 3
        Instrmt_38_set.insert("EncodedSecurityDesc_t_1054868930");
        Instrmt_38.add_attribute("Pool", "Pool_t_1987942691"); // 3
        Instrmt_38_set.insert("Pool_t_1987942691");
        Instrmt_38.add_attribute("CSetMo", "1876895428"); // 3
        Instrmt_38_set.insert("1876895428");
        Instrmt_38.add_attribute("CPPgm", "1"); // 3
        Instrmt_38_set.insert("1");
        Instrmt_38.add_attribute("CPRegT", "CPRegType_t_1260872619"); // 3
        Instrmt_38_set.insert("CPRegType_t_1260872619");
        Instrmt_38.add_attribute("Dated", "DatedDate_t_1010282967"); // 3
        Instrmt_38_set.insert("DatedDate_t_1010282967");
        Instrmt_38.add_attribute("IntAcrl", "InterestAccrualDate_t_1085456130"); // 3
        Instrmt_38_set.insert("InterestAccrualDate_t_1085456130");
        all_values.push_back(Instrmt_38_set);
        all_compo_names.insert("Instrmt_38_set");

        {
          xml_element AID_41{"AID"};
          multiset<string> AID_41_set;
          AID_41.add_attribute("AltID", "SecurityAltID_t_1789011576"); // 4
          AID_41_set.insert("SecurityAltID_t_1789011576");
          AID_41.add_attribute("AltIDSrc", "F"); // 4
          AID_41_set.insert("F");
          all_values.push_back(AID_41_set);
          all_compo_names.insert("AID_41_set");

          Instrmt_38.add_element(AID_41);
        }
        {
          xml_element SecXML_41{"SecXML"};
          multiset<string> SecXML_41_set;
          SecXML_41.add_attribute("Schema", "SecurityXMLSchema_t_597446116"); // 4
          SecXML_41_set.insert("SecurityXMLSchema_t_597446116");
          all_values.push_back(SecXML_41_set);
          all_compo_names.insert("SecXML_41_set");

          Instrmt_38.add_element(SecXML_41);
        }
        {
          xml_element Evnt_41{"Evnt"};
          multiset<string> Evnt_41_set;
          Evnt_41.add_attribute("EventTyp", "8"); // 4
          Evnt_41_set.insert("8");
          Evnt_41.add_attribute("Dt", "EventDate_t_13177142"); // 4
          Evnt_41_set.insert("EventDate_t_13177142");
          Evnt_41.add_attribute("Tm", "EventTime_t_2099432432"); // 4
          Evnt_41_set.insert("EventTime_t_2099432432");
          Evnt_41.add_attribute("Px", "7715874.410000"); // 4
          Evnt_41_set.insert("7715874.410000");
          Evnt_41.add_attribute("Txt", "EventText_t_313696197"); // 4
          Evnt_41_set.insert("EventText_t_313696197");
          all_values.push_back(Evnt_41_set);
          all_compo_names.insert("Evnt_41_set");

          Instrmt_38.add_element(Evnt_41);
        }
        {
          xml_element Pty_202{"Pty"};
          multiset<string> Pty_202_set;
          Pty_202.add_attribute("ID", "InstrumentPartyID_t_2095553196"); // 4
          Pty_202_set.insert("InstrumentPartyID_t_2095553196");
          Pty_202.add_attribute("Src", "H"); // 4
          Pty_202_set.insert("H");
          Pty_202.add_attribute("R", "5"); // 4
          Pty_202_set.insert("5");
          all_values.push_back(Pty_202_set);
          all_compo_names.insert("Pty_202_set");

          {
            xml_element Sub_202{"Sub"};
            multiset<string> Sub_202_set;
            Sub_202.add_attribute("ID", "InstrumentPartySubID_t_1486930965"); // 5
            Sub_202_set.insert("InstrumentPartySubID_t_1486930965");
            Sub_202.add_attribute("Typ", "7"); // 5
            Sub_202_set.insert("7");
            all_values.push_back(Sub_202_set);
            all_compo_names.insert("Sub_202_set");

            Pty_202.add_element(Sub_202);
          }
          Instrmt_38.add_element(Pty_202);
        }
        {
          xml_element CmplxEvnt_38{"CmplxEvnt"};
          multiset<string> CmplxEvnt_38_set;
          CmplxEvnt_38.add_attribute("Typ", "2"); // 4
          CmplxEvnt_38_set.insert("2");
          CmplxEvnt_38.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1441296659"); // 4
          CmplxEvnt_38_set.insert("ComplexOptPayoutAmount_t_1441296659");
          CmplxEvnt_38.add_attribute("Px", "8932560.320000"); // 4
          CmplxEvnt_38_set.insert("8932560.320000");
          CmplxEvnt_38.add_attribute("PxBndryMeth", "4"); // 4
          CmplxEvnt_38_set.insert("4");
          CmplxEvnt_38.add_attribute("PxBndryPrcsn", "7008218.000000"); // 4
          CmplxEvnt_38_set.insert("7008218.000000");
          CmplxEvnt_38.add_attribute("PxTmTyp", "1"); // 4
          CmplxEvnt_38_set.insert("1");
          CmplxEvnt_38.add_attribute("Cond", "2"); // 4
          CmplxEvnt_38_set.insert("2");
          all_values.push_back(CmplxEvnt_38_set);
          all_compo_names.insert("CmplxEvnt_38_set");

          {
            xml_element EvntDts_38{"EvntDts"};
            multiset<string> EvntDts_38_set;
            EvntDts_38.add_attribute("StartDt", "ComplexEventStartDate_t_1027568591"); // 5
            EvntDts_38_set.insert("ComplexEventStartDate_t_1027568591");
            EvntDts_38.add_attribute("EndDt", "ComplexEventEndDate_t_439844706"); // 5
            EvntDts_38_set.insert("ComplexEventEndDate_t_439844706");
            all_values.push_back(EvntDts_38_set);
            all_compo_names.insert("EvntDts_38_set");

            {
              xml_element EvntTms_38{"EvntTms"};
              multiset<string> EvntTms_38_set;
              EvntTms_38.add_attribute("StartTm", "669399384"); // 6
              EvntTms_38_set.insert("669399384");
              EvntTms_38.add_attribute("EndTm", "1908612966"); // 6
              EvntTms_38_set.insert("1908612966");
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
        Leg_51.add_attribute("Sym", "LegSymbol_t_1494713636"); // 3
        Leg_51_set.insert("LegSymbol_t_1494713636");
        Leg_51.add_attribute("Sfx", "WI"); // 3
        Leg_51_set.insert("WI");
        Leg_51.add_attribute("ID", "LegSecurityID_t_1638024747"); // 3
        Leg_51_set.insert("LegSecurityID_t_1638024747");
        Leg_51.add_attribute("Src", "4"); // 3
        Leg_51_set.insert("4");
        Leg_51.add_attribute("Prod", "3"); // 3
        Leg_51_set.insert("3");
        Leg_51.add_attribute("CFI", "LegCFICode_t_500824066"); // 3
        Leg_51_set.insert("LegCFICode_t_500824066");
        Leg_51.add_attribute("SecTyp", "CB"); // 3
        Leg_51_set.insert("CB");
        Leg_51.add_attribute("SecSubTyp", "LegSecuritySubType_t_1412258974"); // 3
        Leg_51_set.insert("LegSecuritySubType_t_1412258974");
        Leg_51.add_attribute("MMY", "1233597132"); // 3
        Leg_51_set.insert("1233597132");
        Leg_51.add_attribute("Mat", "LegMaturityDate_t_1915410899"); // 3
        Leg_51_set.insert("LegMaturityDate_t_1915410899");
        Leg_51.add_attribute("MatTm", "2065383862"); // 3
        Leg_51_set.insert("2065383862");
        Leg_51.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1246774274"); // 3
        Leg_51_set.insert("LegCouponPaymentDate_t_1246774274");
        Leg_51.add_attribute("Issued", "LegIssueDate_t_1867359683"); // 3
        Leg_51_set.insert("LegIssueDate_t_1867359683");
        Leg_51.add_attribute("RepoCollSecTyp", "689487655"); // 3
        Leg_51_set.insert("689487655");
        Leg_51.add_attribute("RepoTrm", "1560470471"); // 3
        Leg_51_set.insert("1560470471");
        Leg_51.add_attribute("RepoRt", "18154292.320000"); // 3
        Leg_51_set.insert("18154292.320000");
        Leg_51.add_attribute("Fctr", "1786629.150000"); // 3
        Leg_51_set.insert("1786629.150000");
        Leg_51.add_attribute("CrdRtg", "LegCreditRating_t_153534803"); // 3
        Leg_51_set.insert("LegCreditRating_t_153534803");
        Leg_51.add_attribute("Rgstry", "LegInstrRegistry_t_1154876549"); // 3
        Leg_51_set.insert("LegInstrRegistry_t_1154876549");
        Leg_51.add_attribute("Ctry", "207040530"); // 3
        Leg_51_set.insert("207040530");
        Leg_51.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_531916386"); // 3
        Leg_51_set.insert("LegStateOrProvinceOfIssue_t_531916386");
        Leg_51.add_attribute("Lcl", "LegLocaleOfIssue_t_448689560"); // 3
        Leg_51_set.insert("LegLocaleOfIssue_t_448689560");
        Leg_51.add_attribute("Redeem", "LegRedemptionDate_t_1100296562"); // 3
        Leg_51_set.insert("LegRedemptionDate_t_1100296562");
        Leg_51.add_attribute("Strk", "4637046.610000"); // 3
        Leg_51_set.insert("4637046.610000");
        Leg_51.add_attribute("StrkCcy", "CAN"); // 3
        Leg_51_set.insert("CAN");
        Leg_51.add_attribute("OptA", "153338368"); // 3
        Leg_51_set.insert("153338368");
        Leg_51.add_attribute("Cmult", "295963.040000"); // 3
        Leg_51_set.insert("295963.040000");
        Leg_51.add_attribute("MultTyp", "0"); // 3
        Leg_51_set.insert("0");
        Leg_51.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_51_set.insert("2");
        Leg_51.add_attribute("UOM", "Bcf"); // 3
        Leg_51_set.insert("Bcf");
        Leg_51.add_attribute("UOMQty", "9244166.520000"); // 3
        Leg_51_set.insert("9244166.520000");
        Leg_51.add_attribute("PxUOM", "tn"); // 3
        Leg_51_set.insert("tn");
        Leg_51.add_attribute("PxUOMQty", "14287503.690000"); // 3
        Leg_51_set.insert("14287503.690000");
        Leg_51.add_attribute("TmUnit", "Wk"); // 3
        Leg_51_set.insert("Wk");
        Leg_51.add_attribute("ExerStyle", "2"); // 3
        Leg_51_set.insert("2");
        Leg_51.add_attribute("CpnRt", "19295744.350000"); // 3
        Leg_51_set.insert("19295744.350000");
        Leg_51.add_attribute("Exch", "LegSecurityExchange_t_327406440"); // 3
        Leg_51_set.insert("LegSecurityExchange_t_327406440");
        Leg_51.add_attribute("Issr", "LegIssuer_t_220618903"); // 3
        Leg_51_set.insert("LegIssuer_t_220618903");
        Leg_51.add_attribute("EncLegIssrLen", "1015687919"); // 3
        Leg_51_set.insert("1015687919");
        Leg_51.add_attribute("EncLegIssr", "EncodedLegIssuer_t_95333691"); // 3
        Leg_51_set.insert("EncodedLegIssuer_t_95333691");
        Leg_51.add_attribute("Desc", "LegSecurityDesc_t_138519117"); // 3
        Leg_51_set.insert("LegSecurityDesc_t_138519117");
        Leg_51.add_attribute("EncLegSecDescLen", "114978545"); // 3
        Leg_51_set.insert("114978545");
        Leg_51.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1962693375"); // 3
        Leg_51_set.insert("EncodedLegSecurityDesc_t_1962693375");
        Leg_51.add_attribute("RatioQty", "8280067.720000"); // 3
        Leg_51_set.insert("8280067.720000");
        Leg_51.add_attribute("Side", "A"); // 3
        Leg_51_set.insert("A");
        Leg_51.add_attribute("Ccy", "GBP"); // 3
        Leg_51_set.insert("GBP");
        Leg_51.add_attribute("Pool", "LegPool_t_1828983820"); // 3
        Leg_51_set.insert("LegPool_t_1828983820");
        Leg_51.add_attribute("Dated", "LegDatedDate_t_638031860"); // 3
        Leg_51_set.insert("LegDatedDate_t_638031860");
        Leg_51.add_attribute("CSetMo", "1213710218"); // 3
        Leg_51_set.insert("1213710218");
        Leg_51.add_attribute("IntAcrl", "LegInterestAccrualDate_t_213416559"); // 3
        Leg_51_set.insert("LegInterestAccrualDate_t_213416559");
        Leg_51.add_attribute("PutCall", "1086721421"); // 3
        Leg_51_set.insert("1086721421");
        Leg_51.add_attribute("LegOptionRatio", "1665231.320000"); // 3
        Leg_51_set.insert("1665231.320000");
        Leg_51.add_attribute("Px", "6771212.200000"); // 3
        Leg_51_set.insert("6771212.200000");
        all_values.push_back(Leg_51_set);
        all_compo_names.insert("Leg_51_set");

        {
          xml_element LegAID_51{"LegAID"};
          multiset<string> LegAID_51_set;
          LegAID_51.add_attribute("SecAltID", "LegSecurityAltID_t_88749134"); // 4
          LegAID_51_set.insert("LegSecurityAltID_t_88749134");
          LegAID_51.add_attribute("SecAltIDSrc", "1"); // 4
          LegAID_51_set.insert("1");
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
