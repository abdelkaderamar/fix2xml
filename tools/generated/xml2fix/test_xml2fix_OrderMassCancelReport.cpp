#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassCancelReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassCxlRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelReport_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1225377271"); // 0
  OrderMassCancelReport_message_t_0.insert("ClOrdID_t_1225377271");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_650711720"); // 0
  OrderMassCancelReport_message_t_0.insert("SecondaryClOrdID_t_650711720");
  elt.add_attribute("OrdID", "OrderID_t_758294689"); // 0
  OrderMassCancelReport_message_t_0.insert("OrderID_t_758294689");
  elt.add_attribute("MassActionReportID", "MassActionReportID_t_699863430"); // 0
  OrderMassCancelReport_message_t_0.insert("MassActionReportID_t_699863430");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_2049896747"); // 0
  OrderMassCancelReport_message_t_0.insert("SecondaryOrderID_t_2049896747");
  elt.add_attribute("ReqTyp", "6"); // 0
  OrderMassCancelReport_message_t_0.insert("6");
  elt.add_attribute("Rsp", "C"); // 0
  OrderMassCancelReport_message_t_0.insert("C");
  elt.add_attribute("MassCxlRejRsn", "4"); // 0
  OrderMassCancelReport_message_t_0.insert("4");
  elt.add_attribute("TotAffctdOrds", "1272639011"); // 0
  OrderMassCancelReport_message_t_0.insert("1272639011");
  elt.add_attribute("SesID", "6"); // 0
  OrderMassCancelReport_message_t_0.insert("6");
  elt.add_attribute("SesSub", "7"); // 0
  OrderMassCancelReport_message_t_0.insert("7");
  elt.add_attribute("MktID", "MarketID_t_1946568977"); // 0
  OrderMassCancelReport_message_t_0.insert("MarketID_t_1946568977");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_923206240"); // 0
  OrderMassCancelReport_message_t_0.insert("MarketSegmentID_t_923206240");
  elt.add_attribute("Side", "5"); // 0
  OrderMassCancelReport_message_t_0.insert("5");
  elt.add_attribute("TxnTm", "TransactTime_t_1638376509"); // 0
  OrderMassCancelReport_message_t_0.insert("TransactTime_t_1638376509");
  elt.add_attribute("Txt", "Text_t_665891635"); // 0
  OrderMassCancelReport_message_t_0.insert("Text_t_665891635");
  elt.add_attribute("EncTxtLen", "620787729"); // 0
  OrderMassCancelReport_message_t_0.insert("620787729");
  elt.add_attribute("EncTxt", "EncodedText_t_1588887473"); // 0
  OrderMassCancelReport_message_t_0.insert("EncodedText_t_1588887473");
  all_values.push_back(OrderMassCancelReport_message_t_0);
  all_compo_names.insert("OrderMassCancelReport_message_t");

  { // Hdr
    xml_element Hdr_61{"Hdr"};
    multiset<string> Hdr_61_set;
    Hdr_61.add_attribute("SeqNum", "2120691774"); // 1
    Hdr_61_set.insert("2120691774");
    Hdr_61.add_attribute("SID", "SenderCompID_t_635133245"); // 1
    Hdr_61_set.insert("SenderCompID_t_635133245");
    Hdr_61.add_attribute("TID", "TargetCompID_t_767115968"); // 1
    Hdr_61_set.insert("TargetCompID_t_767115968");
    Hdr_61.add_attribute("OBID", "OnBehalfOfCompID_t_1942365277"); // 1
    Hdr_61_set.insert("OnBehalfOfCompID_t_1942365277");
    Hdr_61.add_attribute("D2ID", "DeliverToCompID_t_2071401827"); // 1
    Hdr_61_set.insert("DeliverToCompID_t_2071401827");
    Hdr_61.add_attribute("SSub", "SenderSubID_t_1971479245"); // 1
    Hdr_61_set.insert("SenderSubID_t_1971479245");
    Hdr_61.add_attribute("SLoc", "SenderLocationID_t_486879916"); // 1
    Hdr_61_set.insert("SenderLocationID_t_486879916");
    Hdr_61.add_attribute("TSub", "TargetSubID_t_2112176831"); // 1
    Hdr_61_set.insert("TargetSubID_t_2112176831");
    Hdr_61.add_attribute("TLoc", "TargetLocationID_t_1012002799"); // 1
    Hdr_61_set.insert("TargetLocationID_t_1012002799");
    Hdr_61.add_attribute("OBSub", "OnBehalfOfSubID_t_1500777537"); // 1
    Hdr_61_set.insert("OnBehalfOfSubID_t_1500777537");
    Hdr_61.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2071581239"); // 1
    Hdr_61_set.insert("OnBehalfOfLocationID_t_2071581239");
    Hdr_61.add_attribute("D2Sub", "DeliverToSubID_t_1671027395"); // 1
    Hdr_61_set.insert("DeliverToSubID_t_1671027395");
    Hdr_61.add_attribute("D2Loc", "DeliverToLocationID_t_427466862"); // 1
    Hdr_61_set.insert("DeliverToLocationID_t_427466862");
    Hdr_61.add_attribute("PosDup", "Y"); // 1
    Hdr_61_set.insert("Y");
    Hdr_61.add_attribute("PosRsnd", "Y"); // 1
    Hdr_61_set.insert("Y");
    Hdr_61.add_attribute("Snt", "SendingTime_t_1185761551"); // 1
    Hdr_61_set.insert("SendingTime_t_1185761551");
    Hdr_61.add_attribute("OrigSnt", "OrigSendingTime_t_1849338293"); // 1
    Hdr_61_set.insert("OrigSendingTime_t_1849338293");
    Hdr_61.add_attribute("MsgEncd", "MessageEncoding_t_76668567"); // 1
    Hdr_61_set.insert("MessageEncoding_t_76668567");
    all_values.push_back(Hdr_61_set);
    all_compo_names.insert("Hdr_61_set");

    {
      xml_element Hop_61{"Hop"};
      multiset<string> Hop_61_set;
      Hop_61.add_attribute("ID", "HopCompID_t_651905692"); // 2
      Hop_61_set.insert("HopCompID_t_651905692");
      Hop_61.add_attribute("Ref", "1459882332"); // 2
      Hop_61_set.insert("1459882332");
      Hop_61.add_attribute("Snt", "HopSendingTime_t_478478941"); // 2
      Hop_61_set.insert("HopSendingTime_t_478478941");
      all_values.push_back(Hop_61_set);
      all_compo_names.insert("Hop_61_set");

      Hdr_61.add_element(Hop_61);
    }
    elt.add_element(Hdr_61);
  } // end Hdr
  { // AffectOrd
    xml_element AffectOrd_1{"AffectOrd"};
    multiset<string> AffectOrd_1_set;
    AffectOrd_1.add_attribute("OrigID", "OrigClOrdID_t_773802273"); // 1
    AffectOrd_1_set.insert("OrigClOrdID_t_773802273");
    AffectOrd_1.add_attribute("AffctdOrdID", "AffectedOrderID_t_1404378306"); // 1
    AffectOrd_1_set.insert("AffectedOrderID_t_1404378306");
    AffectOrd_1.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_1723630033"); // 1
    AffectOrd_1_set.insert("AffectedSecondaryOrderID_t_1723630033");
    all_values.push_back(AffectOrd_1_set);
    all_compo_names.insert("AffectOrd_1_set");

    elt.add_element(AffectOrd_1);
  } // end AffectOrd
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_3{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_3_set;
    NotAffectedOrdersGrp_3.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_433250455"); // 1
    NotAffectedOrdersGrp_3_set.insert("NotAffOrigClOrdID_t_433250455");
    NotAffectedOrdersGrp_3.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_1214522894"); // 1
    NotAffectedOrdersGrp_3_set.insert("NotAffectedOrderID_t_1214522894");
    all_values.push_back(NotAffectedOrdersGrp_3_set);
    all_compo_names.insert("NotAffectedOrdersGrp_3_set");

    elt.add_element(NotAffectedOrdersGrp_3);
  } // end NotAffectedOrdersGrp
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_4{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_4_set;
    NotAffectedOrdersGrp_4.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_215416501"); // 1
    NotAffectedOrdersGrp_4_set.insert("NotAffOrigClOrdID_t_215416501");
    NotAffectedOrdersGrp_4.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_1054038184"); // 1
    NotAffectedOrdersGrp_4_set.insert("NotAffectedOrderID_t_1054038184");
    all_values.push_back(NotAffectedOrdersGrp_4_set);
    all_compo_names.insert("NotAffectedOrdersGrp_4_set");

    elt.add_element(NotAffectedOrdersGrp_4);
  } // end NotAffectedOrdersGrp
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_5{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_5_set;
    NotAffectedOrdersGrp_5.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_655926719"); // 1
    NotAffectedOrdersGrp_5_set.insert("NotAffOrigClOrdID_t_655926719");
    NotAffectedOrdersGrp_5.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_188624627"); // 1
    NotAffectedOrdersGrp_5_set.insert("NotAffectedOrderID_t_188624627");
    all_values.push_back(NotAffectedOrdersGrp_5_set);
    all_compo_names.insert("NotAffectedOrdersGrp_5_set");

    elt.add_element(NotAffectedOrdersGrp_5);
  } // end NotAffectedOrdersGrp
  { // Pty
    xml_element Pty_276{"Pty"};
    multiset<string> Pty_276_set;
    Pty_276.add_attribute("ID", "PartyID_t_1423042688"); // 1
    Pty_276_set.insert("PartyID_t_1423042688");
    Pty_276.add_attribute("Src", "2"); // 1
    Pty_276_set.insert("2");
    Pty_276.add_attribute("R", "63"); // 1
    Pty_276_set.insert("63");
    all_values.push_back(Pty_276_set);
    all_compo_names.insert("Pty_276_set");

    {
      xml_element Sub_276{"Sub"};
      multiset<string> Sub_276_set;
      Sub_276.add_attribute("ID", "PartySubID_t_1247038285"); // 2
      Sub_276_set.insert("PartySubID_t_1247038285");
      Sub_276.add_attribute("Typ", "23"); // 2
      Sub_276_set.insert("23");
      all_values.push_back(Sub_276_set);
      all_compo_names.insert("Sub_276_set");

      Pty_276.add_element(Sub_276);
    }
    elt.add_element(Pty_276);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_7{"TgtPty"};
    multiset<string> TgtPty_7_set;
    TgtPty_7.add_attribute("ID", "TargetPartyID_t_111557436"); // 1
    TgtPty_7_set.insert("TargetPartyID_t_111557436");
    TgtPty_7.add_attribute("Src", "1"); // 1
    TgtPty_7_set.insert("1");
    TgtPty_7.add_attribute("R", "4"); // 1
    TgtPty_7_set.insert("4");
    all_values.push_back(TgtPty_7_set);
    all_compo_names.insert("TgtPty_7_set");

    elt.add_element(TgtPty_7);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_8{"TgtPty"};
    multiset<string> TgtPty_8_set;
    TgtPty_8.add_attribute("ID", "TargetPartyID_t_1782584832"); // 1
    TgtPty_8_set.insert("TargetPartyID_t_1782584832");
    TgtPty_8.add_attribute("Src", "H"); // 1
    TgtPty_8_set.insert("H");
    TgtPty_8.add_attribute("R", "7"); // 1
    TgtPty_8_set.insert("7");
    all_values.push_back(TgtPty_8_set);
    all_compo_names.insert("TgtPty_8_set");

    elt.add_element(TgtPty_8);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_51{"Instrmt"};
    multiset<string> Instrmt_51_set;
    Instrmt_51.add_attribute("Sym", "Symbol_t_1956840299"); // 1
    Instrmt_51_set.insert("Symbol_t_1956840299");
    Instrmt_51.add_attribute("Sfx", "CD"); // 1
    Instrmt_51_set.insert("CD");
    Instrmt_51.add_attribute("ID", "SecurityID_t_205726244"); // 1
    Instrmt_51_set.insert("SecurityID_t_205726244");
    Instrmt_51.add_attribute("Src", "5"); // 1
    Instrmt_51_set.insert("5");
    Instrmt_51.add_attribute("Prod", "9"); // 1
    Instrmt_51_set.insert("9");
    Instrmt_51.add_attribute("ProdCmplx", "ProductComplex_t_1665608576"); // 1
    Instrmt_51_set.insert("ProductComplex_t_1665608576");
    Instrmt_51.add_attribute("SecGrp", "SecurityGroup_t_364504160"); // 1
    Instrmt_51_set.insert("SecurityGroup_t_364504160");
    Instrmt_51.add_attribute("CFI", "CFICode_t_1865875224"); // 1
    Instrmt_51_set.insert("CFICode_t_1865875224");
    Instrmt_51.add_attribute("SecTyp", "MBS"); // 1
    Instrmt_51_set.insert("MBS");
    Instrmt_51.add_attribute("SubTyp", "SecuritySubType_t_1768882466"); // 1
    Instrmt_51_set.insert("SecuritySubType_t_1768882466");
    Instrmt_51.add_attribute("MMY", "1442021609"); // 1
    Instrmt_51_set.insert("1442021609");
    Instrmt_51.add_attribute("MatDt", "MaturityDate_t_1988935715"); // 1
    Instrmt_51_set.insert("MaturityDate_t_1988935715");
    Instrmt_51.add_attribute("MatTm", "54649273"); // 1
    Instrmt_51_set.insert("54649273");
    Instrmt_51.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_509060855"); // 1
    Instrmt_51_set.insert("SettleOnOpenFlag_t_509060855");
    Instrmt_51.add_attribute("AsgnMeth", "56868568"); // 1
    Instrmt_51_set.insert("56868568");
    Instrmt_51.add_attribute("Status", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("CpnPmt", "CouponPaymentDate_t_1164987575"); // 1
    Instrmt_51_set.insert("CouponPaymentDate_t_1164987575");
    Instrmt_51.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_51_set.insert("FR");
    Instrmt_51.add_attribute("Snrty", "SR"); // 1
    Instrmt_51_set.insert("SR");
    Instrmt_51.add_attribute("NotlPctOut", "4405466.150000"); // 1
    Instrmt_51_set.insert("4405466.150000");
    Instrmt_51.add_attribute("OrigNotlPctOut", "2289994.530000"); // 1
    Instrmt_51_set.insert("2289994.530000");
    Instrmt_51.add_attribute("AttchPnt", "1159812.000000"); // 1
    Instrmt_51_set.insert("1159812.000000");
    Instrmt_51.add_attribute("DetchPnt", "16875849.000000"); // 1
    Instrmt_51_set.insert("16875849.000000");
    Instrmt_51.add_attribute("Issued", "IssueDate_t_699385626"); // 1
    Instrmt_51_set.insert("IssueDate_t_699385626");
    Instrmt_51.add_attribute("RepoCollSecTyp", "1693763992"); // 1
    Instrmt_51_set.insert("1693763992");
    Instrmt_51.add_attribute("RepoTrm", "1799142337"); // 1
    Instrmt_51_set.insert("1799142337");
    Instrmt_51.add_attribute("RepoRt", "5230656.880000"); // 1
    Instrmt_51_set.insert("5230656.880000");
    Instrmt_51.add_attribute("Fctr", "10481607.270000"); // 1
    Instrmt_51_set.insert("10481607.270000");
    Instrmt_51.add_attribute("CrdRtg", "CreditRating_t_1434243521"); // 1
    Instrmt_51_set.insert("CreditRating_t_1434243521");
    Instrmt_51.add_attribute("Rgstry", "InstrRegistry_t_774212612"); // 1
    Instrmt_51_set.insert("InstrRegistry_t_774212612");
    Instrmt_51.add_attribute("IssuCtry", "1552032326"); // 1
    Instrmt_51_set.insert("1552032326");
    Instrmt_51.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1243600172"); // 1
    Instrmt_51_set.insert("StateOrProvinceOfIssue_t_1243600172");
    Instrmt_51.add_attribute("Lcl", "LocaleOfIssue_t_63637440"); // 1
    Instrmt_51_set.insert("LocaleOfIssue_t_63637440");
    Instrmt_51.add_attribute("Redeem", "RedemptionDate_t_1757758570"); // 1
    Instrmt_51_set.insert("RedemptionDate_t_1757758570");
    Instrmt_51.add_attribute("StrkPx", "11296253.910000"); // 1
    Instrmt_51_set.insert("11296253.910000");
    Instrmt_51.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_51_set.insert("JPY");
    Instrmt_51.add_attribute("StrkMult", "14941295.510000"); // 1
    Instrmt_51_set.insert("14941295.510000");
    Instrmt_51.add_attribute("StrkValu", "18708431.850000"); // 1
    Instrmt_51_set.insert("18708431.850000");
    Instrmt_51.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_51_set.insert("4");
    Instrmt_51.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_51_set.insert("5");
    Instrmt_51.add_attribute("StrkPxBndryPrcsn", "11653811.460000"); // 1
    Instrmt_51_set.insert("11653811.460000");
    Instrmt_51.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_51_set.insert("4");
    Instrmt_51.add_attribute("OptAt", "1170177643"); // 1
    Instrmt_51_set.insert("1170177643");
    Instrmt_51.add_attribute("Mult", "16744420.010000"); // 1
    Instrmt_51_set.insert("16744420.010000");
    Instrmt_51.add_attribute("MultTyp", "0"); // 1
    Instrmt_51_set.insert("0");
    Instrmt_51.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("MinPxIncr", "6919459.280000"); // 1
    Instrmt_51_set.insert("6919459.280000");
    Instrmt_51.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1711624531"); // 1
    Instrmt_51_set.insert("MinPriceIncrementAmount_t_1711624531");
    Instrmt_51.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_51_set.insert("MMBtu");
    Instrmt_51.add_attribute("UOMQty", "11324925.430000"); // 1
    Instrmt_51_set.insert("11324925.430000");
    Instrmt_51.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_51_set.insert("MWh");
    Instrmt_51.add_attribute("PxUOMQty", "8977378.910000"); // 1
    Instrmt_51_set.insert("8977378.910000");
    Instrmt_51.add_attribute("SettlMeth", "C"); // 1
    Instrmt_51_set.insert("C");
    Instrmt_51.add_attribute("ExerStyle", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("OptPayAmt", "OptPayoutAmount_t_324252485"); // 1
    Instrmt_51_set.insert("OptPayoutAmount_t_324252485");
    Instrmt_51.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_51_set.insert("INT");
    Instrmt_51.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_51_set.insert("CDS");
    Instrmt_51.add_attribute("ListMeth", "0"); // 1
    Instrmt_51_set.insert("0");
    Instrmt_51.add_attribute("CapPx", "17898042.630000"); // 1
    Instrmt_51_set.insert("17898042.630000");
    Instrmt_51.add_attribute("FlrPx", "8967276.410000"); // 1
    Instrmt_51_set.insert("8967276.410000");
    Instrmt_51.add_attribute("PutCall", "0"); // 1
    Instrmt_51_set.insert("0");
    Instrmt_51.add_attribute("FlexInd", "false"); // 1
    Instrmt_51_set.insert("false");
    Instrmt_51.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_51_set.insert("false");
    Instrmt_51.add_attribute("TmUnit", "Min"); // 1
    Instrmt_51_set.insert("Min");
    Instrmt_51.add_attribute("CpnRt", "18584096.640000"); // 1
    Instrmt_51_set.insert("18584096.640000");
    Instrmt_51.add_attribute("Exch", "SecurityExchange_t_1782886061"); // 1
    Instrmt_51_set.insert("SecurityExchange_t_1782886061");
    Instrmt_51.add_attribute("PosLmt", "1330883824"); // 1
    Instrmt_51_set.insert("1330883824");
    Instrmt_51.add_attribute("NTPosLmt", "1581769201"); // 1
    Instrmt_51_set.insert("1581769201");
    Instrmt_51.add_attribute("Issr", "Issuer_t_1203213112"); // 1
    Instrmt_51_set.insert("Issuer_t_1203213112");
    Instrmt_51.add_attribute("EncIssrLen", "298928546"); // 1
    Instrmt_51_set.insert("298928546");
    Instrmt_51.add_attribute("EncIssr", "EncodedIssuer_t_599666699"); // 1
    Instrmt_51_set.insert("EncodedIssuer_t_599666699");
    Instrmt_51.add_attribute("Desc", "SecurityDesc_t_464992231"); // 1
    Instrmt_51_set.insert("SecurityDesc_t_464992231");
    Instrmt_51.add_attribute("EncSecDescLen", "1469106189"); // 1
    Instrmt_51_set.insert("1469106189");
    Instrmt_51.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_126625053"); // 1
    Instrmt_51_set.insert("EncodedSecurityDesc_t_126625053");
    Instrmt_51.add_attribute("Pool", "Pool_t_1931123567"); // 1
    Instrmt_51_set.insert("Pool_t_1931123567");
    Instrmt_51.add_attribute("CSetMo", "1600487641"); // 1
    Instrmt_51_set.insert("1600487641");
    Instrmt_51.add_attribute("CPPgm", "99"); // 1
    Instrmt_51_set.insert("99");
    Instrmt_51.add_attribute("CPRegT", "CPRegType_t_1495264450"); // 1
    Instrmt_51_set.insert("CPRegType_t_1495264450");
    Instrmt_51.add_attribute("Dated", "DatedDate_t_234760685"); // 1
    Instrmt_51_set.insert("DatedDate_t_234760685");
    Instrmt_51.add_attribute("IntAcrl", "InterestAccrualDate_t_1951063525"); // 1
    Instrmt_51_set.insert("InterestAccrualDate_t_1951063525");
    all_values.push_back(Instrmt_51_set);
    all_compo_names.insert("Instrmt_51_set");

    {
      xml_element AID_54{"AID"};
      multiset<string> AID_54_set;
      AID_54.add_attribute("AltID", "SecurityAltID_t_1288404787"); // 2
      AID_54_set.insert("SecurityAltID_t_1288404787");
      AID_54.add_attribute("AltIDSrc", "1"); // 2
      AID_54_set.insert("1");
      all_values.push_back(AID_54_set);
      all_compo_names.insert("AID_54_set");

      Instrmt_51.add_element(AID_54);
    }
    {
      xml_element SecXML_54{"SecXML"};
      multiset<string> SecXML_54_set;
      SecXML_54.add_attribute("Schema", "SecurityXMLSchema_t_476173673"); // 2
      SecXML_54_set.insert("SecurityXMLSchema_t_476173673");
      all_values.push_back(SecXML_54_set);
      all_compo_names.insert("SecXML_54_set");

      Instrmt_51.add_element(SecXML_54);
    }
    {
      xml_element Evnt_54{"Evnt"};
      multiset<string> Evnt_54_set;
      Evnt_54.add_attribute("EventTyp", "9"); // 2
      Evnt_54_set.insert("9");
      Evnt_54.add_attribute("Dt", "EventDate_t_1576516812"); // 2
      Evnt_54_set.insert("EventDate_t_1576516812");
      Evnt_54.add_attribute("Tm", "EventTime_t_800426158"); // 2
      Evnt_54_set.insert("EventTime_t_800426158");
      Evnt_54.add_attribute("Px", "6490387.520000"); // 2
      Evnt_54_set.insert("6490387.520000");
      Evnt_54.add_attribute("Txt", "EventText_t_921212127"); // 2
      Evnt_54_set.insert("EventText_t_921212127");
      all_values.push_back(Evnt_54_set);
      all_compo_names.insert("Evnt_54_set");

      Instrmt_51.add_element(Evnt_54);
    }
    {
      xml_element Pty_277{"Pty"};
      multiset<string> Pty_277_set;
      Pty_277.add_attribute("ID", "InstrumentPartyID_t_411438516"); // 2
      Pty_277_set.insert("InstrumentPartyID_t_411438516");
      Pty_277.add_attribute("Src", "A"); // 2
      Pty_277_set.insert("A");
      Pty_277.add_attribute("R", "17"); // 2
      Pty_277_set.insert("17");
      all_values.push_back(Pty_277_set);
      all_compo_names.insert("Pty_277_set");

      {
        xml_element Sub_277{"Sub"};
        multiset<string> Sub_277_set;
        Sub_277.add_attribute("ID", "InstrumentPartySubID_t_1266051046"); // 3
        Sub_277_set.insert("InstrumentPartySubID_t_1266051046");
        Sub_277.add_attribute("Typ", "28"); // 3
        Sub_277_set.insert("28");
        all_values.push_back(Sub_277_set);
        all_compo_names.insert("Sub_277_set");

        Pty_277.add_element(Sub_277);
      }
      Instrmt_51.add_element(Pty_277);
    }
    {
      xml_element CmplxEvnt_51{"CmplxEvnt"};
      multiset<string> CmplxEvnt_51_set;
      CmplxEvnt_51.add_attribute("Typ", "5"); // 2
      CmplxEvnt_51_set.insert("5");
      CmplxEvnt_51.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1102805320"); // 2
      CmplxEvnt_51_set.insert("ComplexOptPayoutAmount_t_1102805320");
      CmplxEvnt_51.add_attribute("Px", "18557270.870000"); // 2
      CmplxEvnt_51_set.insert("18557270.870000");
      CmplxEvnt_51.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_51_set.insert("5");
      CmplxEvnt_51.add_attribute("PxBndryPrcsn", "2862054.960000"); // 2
      CmplxEvnt_51_set.insert("2862054.960000");
      CmplxEvnt_51.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_51_set.insert("2");
      CmplxEvnt_51.add_attribute("Cond", "1"); // 2
      CmplxEvnt_51_set.insert("1");
      all_values.push_back(CmplxEvnt_51_set);
      all_compo_names.insert("CmplxEvnt_51_set");

      {
        xml_element EvntDts_51{"EvntDts"};
        multiset<string> EvntDts_51_set;
        EvntDts_51.add_attribute("StartDt", "ComplexEventStartDate_t_585134042"); // 3
        EvntDts_51_set.insert("ComplexEventStartDate_t_585134042");
        EvntDts_51.add_attribute("EndDt", "ComplexEventEndDate_t_1889679340"); // 3
        EvntDts_51_set.insert("ComplexEventEndDate_t_1889679340");
        all_values.push_back(EvntDts_51_set);
        all_compo_names.insert("EvntDts_51_set");

        {
          xml_element EvntTms_51{"EvntTms"};
          multiset<string> EvntTms_51_set;
          EvntTms_51.add_attribute("StartTm", "1481066440"); // 4
          EvntTms_51_set.insert("1481066440");
          EvntTms_51.add_attribute("EndTm", "2054240231"); // 4
          EvntTms_51_set.insert("2054240231");
          all_values.push_back(EvntTms_51_set);
          all_compo_names.insert("EvntTms_51_set");

          EvntDts_51.add_element(EvntTms_51);
        }
        CmplxEvnt_51.add_element(EvntDts_51);
      }
      Instrmt_51.add_element(CmplxEvnt_51);
    }
    elt.add_element(Instrmt_51);
  } // end Instrmt
  { // Undly
    xml_element Undly_71{"Undly"};
    multiset<string> Undly_71_set;
    Undly_71.add_attribute("Sym", "UnderlyingSymbol_t_2016304393"); // 1
    Undly_71_set.insert("UnderlyingSymbol_t_2016304393");
    Undly_71.add_attribute("Sfx", "WI"); // 1
    Undly_71_set.insert("WI");
    Undly_71.add_attribute("ID", "UnderlyingSecurityID_t_1507244225"); // 1
    Undly_71_set.insert("UnderlyingSecurityID_t_1507244225");
    Undly_71.add_attribute("Src", "B"); // 1
    Undly_71_set.insert("B");
    Undly_71.add_attribute("Prod", "1"); // 1
    Undly_71_set.insert("1");
    Undly_71.add_attribute("CFI", "UnderlyingCFICode_t_1742004910"); // 1
    Undly_71_set.insert("UnderlyingCFICode_t_1742004910");
    Undly_71.add_attribute("SecTyp", "IET"); // 1
    Undly_71_set.insert("IET");
    Undly_71.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1900891948"); // 1
    Undly_71_set.insert("UnderlyingSecuritySubType_t_1900891948");
    Undly_71.add_attribute("MMY", "727019838"); // 1
    Undly_71_set.insert("727019838");
    Undly_71.add_attribute("Mat", "UnderlyingMaturityDate_t_967145276"); // 1
    Undly_71_set.insert("UnderlyingMaturityDate_t_967145276");
    Undly_71.add_attribute("MatTm", "1534339050"); // 1
    Undly_71_set.insert("1534339050");
    Undly_71.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_156053002"); // 1
    Undly_71_set.insert("UnderlyingCouponPaymentDate_t_156053002");
    Undly_71.add_attribute("RestrctTyp", "MM"); // 1
    Undly_71_set.insert("MM");
    Undly_71.add_attribute("Snrty", "SD"); // 1
    Undly_71_set.insert("SD");
    Undly_71.add_attribute("NotlPctOut", "10772651.290000"); // 1
    Undly_71_set.insert("10772651.290000");
    Undly_71.add_attribute("OrigNotlPctOut", "315263.020000"); // 1
    Undly_71_set.insert("315263.020000");
    Undly_71.add_attribute("AttchPnt", "3272535.210000"); // 1
    Undly_71_set.insert("3272535.210000");
    Undly_71.add_attribute("DetchPnt", "7477212.490000"); // 1
    Undly_71_set.insert("7477212.490000");
    Undly_71.add_attribute("Issued", "UnderlyingIssueDate_t_1297577349"); // 1
    Undly_71_set.insert("UnderlyingIssueDate_t_1297577349");
    Undly_71.add_attribute("RepoCollSecTyp", "324570943"); // 1
    Undly_71_set.insert("324570943");
    Undly_71.add_attribute("RepoTrm", "925179932"); // 1
    Undly_71_set.insert("925179932");
    Undly_71.add_attribute("RepoRt", "2528990.210000"); // 1
    Undly_71_set.insert("2528990.210000");
    Undly_71.add_attribute("Fctr", "328143.820000"); // 1
    Undly_71_set.insert("328143.820000");
    Undly_71.add_attribute("CrdRtg", "UnderlyingCreditRating_t_738041028"); // 1
    Undly_71_set.insert("UnderlyingCreditRating_t_738041028");
    Undly_71.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_539104517"); // 1
    Undly_71_set.insert("UnderlyingInstrRegistry_t_539104517");
    Undly_71.add_attribute("Ctry", "1322827023"); // 1
    Undly_71_set.insert("1322827023");
    Undly_71.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1754115237"); // 1
    Undly_71_set.insert("UnderlyingStateOrProvinceOfIssue_t_1754115237");
    Undly_71.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1124238560"); // 1
    Undly_71_set.insert("UnderlyingLocaleOfIssue_t_1124238560");
    Undly_71.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1065022715"); // 1
    Undly_71_set.insert("UnderlyingRedemptionDate_t_1065022715");
    Undly_71.add_attribute("StrkPx", "10876980.290000"); // 1
    Undly_71_set.insert("10876980.290000");
    Undly_71.add_attribute("StrkCcy", "JPY"); // 1
    Undly_71_set.insert("JPY");
    Undly_71.add_attribute("OptA", "204920740"); // 1
    Undly_71_set.insert("204920740");
    Undly_71.add_attribute("Mult", "3907557.200000"); // 1
    Undly_71_set.insert("3907557.200000");
    Undly_71.add_attribute("MultTyp", "2"); // 1
    Undly_71_set.insert("2");
    Undly_71.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_71_set.insert("1");
    Undly_71.add_attribute("UOM", "MWh"); // 1
    Undly_71_set.insert("MWh");
    Undly_71.add_attribute("UOMQty", "21122067.900000"); // 1
    Undly_71_set.insert("21122067.900000");
    Undly_71.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_71_set.insert("oz_tr");
    Undly_71.add_attribute("PxUOMQty", "7122968.210000"); // 1
    Undly_71_set.insert("7122968.210000");
    Undly_71.add_attribute("TmUnit", "Mo"); // 1
    Undly_71_set.insert("Mo");
    Undly_71.add_attribute("ExerStyle", "1"); // 1
    Undly_71_set.insert("1");
    Undly_71.add_attribute("CpnRt", "8683498.230000"); // 1
    Undly_71_set.insert("8683498.230000");
    Undly_71.add_attribute("Exch", "UnderlyingSecurityExchange_t_551956205"); // 1
    Undly_71_set.insert("UnderlyingSecurityExchange_t_551956205");
    Undly_71.add_attribute("Issr", "UnderlyingIssuer_t_2141049406"); // 1
    Undly_71_set.insert("UnderlyingIssuer_t_2141049406");
    Undly_71.add_attribute("EncUndIssrLen", "1945614953"); // 1
    Undly_71_set.insert("1945614953");
    Undly_71.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_583482507"); // 1
    Undly_71_set.insert("EncodedUnderlyingIssuer_t_583482507");
    Undly_71.add_attribute("Desc", "UnderlyingSecurityDesc_t_320819279"); // 1
    Undly_71_set.insert("UnderlyingSecurityDesc_t_320819279");
    Undly_71.add_attribute("EncUndSecDescLen", "545852554"); // 1
    Undly_71_set.insert("545852554");
    Undly_71.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1881059856"); // 1
    Undly_71_set.insert("EncodedUnderlyingSecurityDesc_t_1881059856");
    Undly_71.add_attribute("CPPgm", "UnderlyingCPProgram_t_645390222"); // 1
    Undly_71_set.insert("UnderlyingCPProgram_t_645390222");
    Undly_71.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1471032487"); // 1
    Undly_71_set.insert("UnderlyingCPRegType_t_1471032487");
    Undly_71.add_attribute("AllocPct", "21339588.770000"); // 1
    Undly_71_set.insert("21339588.770000");
    Undly_71.add_attribute("Ccy", "CAN"); // 1
    Undly_71_set.insert("CAN");
    Undly_71.add_attribute("Qty", "5255797.470000"); // 1
    Undly_71_set.insert("5255797.470000");
    Undly_71.add_attribute("SettlTyp", "5"); // 1
    Undly_71_set.insert("5");
    Undly_71.add_attribute("CashAmt", "UnderlyingCashAmount_t_1815705104"); // 1
    Undly_71_set.insert("UnderlyingCashAmount_t_1815705104");
    Undly_71.add_attribute("CashTyp", "DIFF"); // 1
    Undly_71_set.insert("DIFF");
    Undly_71.add_attribute("Px", "9185706.950000"); // 1
    Undly_71_set.insert("9185706.950000");
    Undly_71.add_attribute("DirtPx", "7559194.850000"); // 1
    Undly_71_set.insert("7559194.850000");
    Undly_71.add_attribute("EndPx", "5333298.020000"); // 1
    Undly_71_set.insert("5333298.020000");
    Undly_71.add_attribute("StartVal", "UnderlyingStartValue_t_1852414155"); // 1
    Undly_71_set.insert("UnderlyingStartValue_t_1852414155");
    Undly_71.add_attribute("CurVal", "UnderlyingCurrentValue_t_960840225"); // 1
    Undly_71_set.insert("UnderlyingCurrentValue_t_960840225");
    Undly_71.add_attribute("EndVal", "UnderlyingEndValue_t_924085523"); // 1
    Undly_71_set.insert("UnderlyingEndValue_t_924085523");
    Undly_71.add_attribute("AdjQty", "13261656.930000"); // 1
    Undly_71_set.insert("13261656.930000");
    Undly_71.add_attribute("FxRate", "17782481.270000"); // 1
    Undly_71_set.insert("17782481.270000");
    Undly_71.add_attribute("FxRateCalc", "D"); // 1
    Undly_71_set.insert("D");
    Undly_71.add_attribute("CapValu", "UnderlyingCapValue_t_1290888835"); // 1
    Undly_71_set.insert("UnderlyingCapValue_t_1290888835");
    Undly_71.add_attribute("SetMeth", "UnderlyingSettlMethod_t_201580681"); // 1
    Undly_71_set.insert("UnderlyingSettlMethod_t_201580681");
    Undly_71.add_attribute("PutCall", "1621659326"); // 1
    Undly_71_set.insert("1621659326");
    all_values.push_back(Undly_71_set);
    all_compo_names.insert("Undly_71_set");

    {
      xml_element UndAID_71{"UndAID"};
      multiset<string> UndAID_71_set;
      UndAID_71.add_attribute("AltID", "UnderlyingSecurityAltID_t_75273606"); // 2
      UndAID_71_set.insert("UnderlyingSecurityAltID_t_75273606");
      UndAID_71.add_attribute("AltIDSrc", "6"); // 2
      UndAID_71_set.insert("6");
      all_values.push_back(UndAID_71_set);
      all_compo_names.insert("UndAID_71_set");

      Undly_71.add_element(UndAID_71);
    }
    {
      xml_element Stip_109{"Stip"};
      multiset<string> Stip_109_set;
      Stip_109.add_attribute("Typ", "MAXBAL"); // 2
      Stip_109_set.insert("MAXBAL");
      Stip_109.add_attribute("Val", "UnderlyingStipValue_t_627229811"); // 2
      Stip_109_set.insert("UnderlyingStipValue_t_627229811");
      all_values.push_back(Stip_109_set);
      all_compo_names.insert("Stip_109_set");

      Undly_71.add_element(Stip_109);
    }
    {
      xml_element Pty_278{"Pty"};
      multiset<string> Pty_278_set;
      Pty_278.add_attribute("ID", "UnderlyingInstrumentPartyID_t_152818043"); // 2
      Pty_278_set.insert("UnderlyingInstrumentPartyID_t_152818043");
      Pty_278.add_attribute("Src", "2"); // 2
      Pty_278_set.insert("2");
      Pty_278.add_attribute("R", "76"); // 2
      Pty_278_set.insert("76");
      all_values.push_back(Pty_278_set);
      all_compo_names.insert("Pty_278_set");

      {
        xml_element Sub_278{"Sub"};
        multiset<string> Sub_278_set;
        Sub_278.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_473637322"); // 3
        Sub_278_set.insert("UnderlyingInstrumentPartySubID_t_473637322");
        Sub_278.add_attribute("Typ", "33"); // 3
        Sub_278_set.insert("33");
        all_values.push_back(Sub_278_set);
        all_compo_names.insert("Sub_278_set");

        Pty_278.add_element(Sub_278);
      }
      Undly_71.add_element(Pty_278);
    }
    elt.add_element(Undly_71);
  } // end Undly
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
