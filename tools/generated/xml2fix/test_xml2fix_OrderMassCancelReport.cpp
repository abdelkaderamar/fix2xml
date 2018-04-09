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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassCxlRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelReport_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1616954324"); // 0
  OrderMassCancelReport_message_t_0.insert("ClOrdID_t_1616954324");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_899901609"); // 0
  OrderMassCancelReport_message_t_0.insert("SecondaryClOrdID_t_899901609");
  elt.add_attribute("OrdID", "OrderID_t_2141063387"); // 0
  OrderMassCancelReport_message_t_0.insert("OrderID_t_2141063387");
  elt.add_attribute("MassActionReportID", "MassActionReportID_t_378376088"); // 0
  OrderMassCancelReport_message_t_0.insert("MassActionReportID_t_378376088");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1665075045"); // 0
  OrderMassCancelReport_message_t_0.insert("SecondaryOrderID_t_1665075045");
  elt.add_attribute("ReqTyp", "7"); // 0
  OrderMassCancelReport_message_t_0.insert("7");
  elt.add_attribute("Rsp", "6"); // 0
  OrderMassCancelReport_message_t_0.insert("6");
  elt.add_attribute("MassCxlRejRsn", "2"); // 0
  OrderMassCancelReport_message_t_0.insert("2");
  elt.add_attribute("TotAffctdOrds", "1033671146"); // 0
  OrderMassCancelReport_message_t_0.insert("1033671146");
  elt.add_attribute("SesID", "3"); // 0
  OrderMassCancelReport_message_t_0.insert("3");
  elt.add_attribute("SesSub", "6"); // 0
  OrderMassCancelReport_message_t_0.insert("6");
  elt.add_attribute("MktID", "MarketID_t_20569577"); // 0
  OrderMassCancelReport_message_t_0.insert("MarketID_t_20569577");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_2087230638"); // 0
  OrderMassCancelReport_message_t_0.insert("MarketSegmentID_t_2087230638");
  elt.add_attribute("Side", "9"); // 0
  OrderMassCancelReport_message_t_0.insert("9");
  elt.add_attribute("TxnTm", "TransactTime_t_480382661"); // 0
  OrderMassCancelReport_message_t_0.insert("TransactTime_t_480382661");
  elt.add_attribute("Txt", "Text_t_264547683"); // 0
  OrderMassCancelReport_message_t_0.insert("Text_t_264547683");
  elt.add_attribute("EncTxtLen", "137629440"); // 0
  OrderMassCancelReport_message_t_0.insert("137629440");
  elt.add_attribute("EncTxt", "EncodedText_t_33857426"); // 0
  OrderMassCancelReport_message_t_0.insert("EncodedText_t_33857426");
  all_values.push_back(OrderMassCancelReport_message_t_0);
  all_compo_names.insert("OrderMassCancelReport_message_t");

  { // Hdr
    xml_element Hdr_61{"Hdr"};
    multiset<string> Hdr_61_set;
    Hdr_61.add_attribute("SeqNum", "1129786814"); // 1
    Hdr_61_set.insert("1129786814");
    Hdr_61.add_attribute("SID", "SenderCompID_t_969255055"); // 1
    Hdr_61_set.insert("SenderCompID_t_969255055");
    Hdr_61.add_attribute("TID", "TargetCompID_t_1447228560"); // 1
    Hdr_61_set.insert("TargetCompID_t_1447228560");
    Hdr_61.add_attribute("OBID", "OnBehalfOfCompID_t_1050282132"); // 1
    Hdr_61_set.insert("OnBehalfOfCompID_t_1050282132");
    Hdr_61.add_attribute("D2ID", "DeliverToCompID_t_1767774719"); // 1
    Hdr_61_set.insert("DeliverToCompID_t_1767774719");
    Hdr_61.add_attribute("SSub", "SenderSubID_t_452911764"); // 1
    Hdr_61_set.insert("SenderSubID_t_452911764");
    Hdr_61.add_attribute("SLoc", "SenderLocationID_t_99208392"); // 1
    Hdr_61_set.insert("SenderLocationID_t_99208392");
    Hdr_61.add_attribute("TSub", "TargetSubID_t_1660603232"); // 1
    Hdr_61_set.insert("TargetSubID_t_1660603232");
    Hdr_61.add_attribute("TLoc", "TargetLocationID_t_625294391"); // 1
    Hdr_61_set.insert("TargetLocationID_t_625294391");
    Hdr_61.add_attribute("OBSub", "OnBehalfOfSubID_t_912272846"); // 1
    Hdr_61_set.insert("OnBehalfOfSubID_t_912272846");
    Hdr_61.add_attribute("OBLoc", "OnBehalfOfLocationID_t_591744484"); // 1
    Hdr_61_set.insert("OnBehalfOfLocationID_t_591744484");
    Hdr_61.add_attribute("D2Sub", "DeliverToSubID_t_1884462926"); // 1
    Hdr_61_set.insert("DeliverToSubID_t_1884462926");
    Hdr_61.add_attribute("D2Loc", "DeliverToLocationID_t_1896447031"); // 1
    Hdr_61_set.insert("DeliverToLocationID_t_1896447031");
    Hdr_61.add_attribute("PosDup", "Y"); // 1
    Hdr_61_set.insert("Y");
    Hdr_61.add_attribute("PosRsnd", "Y"); // 1
    Hdr_61_set.insert("Y");
    Hdr_61.add_attribute("Snt", "SendingTime_t_1890026770"); // 1
    Hdr_61_set.insert("SendingTime_t_1890026770");
    Hdr_61.add_attribute("OrigSnt", "OrigSendingTime_t_439591249"); // 1
    Hdr_61_set.insert("OrigSendingTime_t_439591249");
    Hdr_61.add_attribute("MsgEncd", "MessageEncoding_t_154472285"); // 1
    Hdr_61_set.insert("MessageEncoding_t_154472285");
    all_values.push_back(Hdr_61_set);
    all_compo_names.insert("Hdr_61_set");

    {
      xml_element Hop_61{"Hop"};
      multiset<string> Hop_61_set;
      Hop_61.add_attribute("ID", "HopCompID_t_297629565"); // 2
      Hop_61_set.insert("HopCompID_t_297629565");
      Hop_61.add_attribute("Ref", "1642699240"); // 2
      Hop_61_set.insert("1642699240");
      Hop_61.add_attribute("Snt", "HopSendingTime_t_1400361711"); // 2
      Hop_61_set.insert("HopSendingTime_t_1400361711");
      all_values.push_back(Hop_61_set);
      all_compo_names.insert("Hop_61_set");

      Hdr_61.add_element(Hop_61);
    }
    elt.add_element(Hdr_61);
  } // end Hdr
  { // AffectOrd
    xml_element AffectOrd_1{"AffectOrd"};
    multiset<string> AffectOrd_1_set;
    AffectOrd_1.add_attribute("OrigID", "OrigClOrdID_t_423567256"); // 1
    AffectOrd_1_set.insert("OrigClOrdID_t_423567256");
    AffectOrd_1.add_attribute("AffctdOrdID", "AffectedOrderID_t_1809074776"); // 1
    AffectOrd_1_set.insert("AffectedOrderID_t_1809074776");
    AffectOrd_1.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_1351870288"); // 1
    AffectOrd_1_set.insert("AffectedSecondaryOrderID_t_1351870288");
    all_values.push_back(AffectOrd_1_set);
    all_compo_names.insert("AffectOrd_1_set");

    elt.add_element(AffectOrd_1);
  } // end AffectOrd
  { // AffectOrd
    xml_element AffectOrd_2{"AffectOrd"};
    multiset<string> AffectOrd_2_set;
    AffectOrd_2.add_attribute("OrigID", "OrigClOrdID_t_363314246"); // 1
    AffectOrd_2_set.insert("OrigClOrdID_t_363314246");
    AffectOrd_2.add_attribute("AffctdOrdID", "AffectedOrderID_t_1744863312"); // 1
    AffectOrd_2_set.insert("AffectedOrderID_t_1744863312");
    AffectOrd_2.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_1832252949"); // 1
    AffectOrd_2_set.insert("AffectedSecondaryOrderID_t_1832252949");
    all_values.push_back(AffectOrd_2_set);
    all_compo_names.insert("AffectOrd_2_set");

    elt.add_element(AffectOrd_2);
  } // end AffectOrd
  { // AffectOrd
    xml_element AffectOrd_3{"AffectOrd"};
    multiset<string> AffectOrd_3_set;
    AffectOrd_3.add_attribute("OrigID", "OrigClOrdID_t_627861929"); // 1
    AffectOrd_3_set.insert("OrigClOrdID_t_627861929");
    AffectOrd_3.add_attribute("AffctdOrdID", "AffectedOrderID_t_1882492753"); // 1
    AffectOrd_3_set.insert("AffectedOrderID_t_1882492753");
    AffectOrd_3.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_1866110376"); // 1
    AffectOrd_3_set.insert("AffectedSecondaryOrderID_t_1866110376");
    all_values.push_back(AffectOrd_3_set);
    all_compo_names.insert("AffectOrd_3_set");

    elt.add_element(AffectOrd_3);
  } // end AffectOrd
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_2{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_2_set;
    NotAffectedOrdersGrp_2.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_704264160"); // 1
    NotAffectedOrdersGrp_2_set.insert("NotAffOrigClOrdID_t_704264160");
    NotAffectedOrdersGrp_2.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_1165855288"); // 1
    NotAffectedOrdersGrp_2_set.insert("NotAffectedOrderID_t_1165855288");
    all_values.push_back(NotAffectedOrdersGrp_2_set);
    all_compo_names.insert("NotAffectedOrdersGrp_2_set");

    elt.add_element(NotAffectedOrdersGrp_2);
  } // end NotAffectedOrdersGrp
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_3{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_3_set;
    NotAffectedOrdersGrp_3.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_660447228"); // 1
    NotAffectedOrdersGrp_3_set.insert("NotAffOrigClOrdID_t_660447228");
    NotAffectedOrdersGrp_3.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_324555231"); // 1
    NotAffectedOrdersGrp_3_set.insert("NotAffectedOrderID_t_324555231");
    all_values.push_back(NotAffectedOrdersGrp_3_set);
    all_compo_names.insert("NotAffectedOrdersGrp_3_set");

    elt.add_element(NotAffectedOrdersGrp_3);
  } // end NotAffectedOrdersGrp
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_4{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_4_set;
    NotAffectedOrdersGrp_4.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_1618767053"); // 1
    NotAffectedOrdersGrp_4_set.insert("NotAffOrigClOrdID_t_1618767053");
    NotAffectedOrdersGrp_4.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_759655621"); // 1
    NotAffectedOrdersGrp_4_set.insert("NotAffectedOrderID_t_759655621");
    all_values.push_back(NotAffectedOrdersGrp_4_set);
    all_compo_names.insert("NotAffectedOrdersGrp_4_set");

    elt.add_element(NotAffectedOrdersGrp_4);
  } // end NotAffectedOrdersGrp
  { // Pty
    xml_element Pty_255{"Pty"};
    multiset<string> Pty_255_set;
    Pty_255.add_attribute("ID", "PartyID_t_96577796"); // 1
    Pty_255_set.insert("PartyID_t_96577796");
    Pty_255.add_attribute("Src", "G"); // 1
    Pty_255_set.insert("G");
    Pty_255.add_attribute("R", "47"); // 1
    Pty_255_set.insert("47");
    all_values.push_back(Pty_255_set);
    all_compo_names.insert("Pty_255_set");

    {
      xml_element Sub_255{"Sub"};
      multiset<string> Sub_255_set;
      Sub_255.add_attribute("ID", "PartySubID_t_1981040722"); // 2
      Sub_255_set.insert("PartySubID_t_1981040722");
      Sub_255.add_attribute("Typ", "27"); // 2
      Sub_255_set.insert("27");
      all_values.push_back(Sub_255_set);
      all_compo_names.insert("Sub_255_set");

      Pty_255.add_element(Sub_255);
    }
    elt.add_element(Pty_255);
  } // end Pty
  { // Pty
    xml_element Pty_256{"Pty"};
    multiset<string> Pty_256_set;
    Pty_256.add_attribute("ID", "PartyID_t_490634461"); // 1
    Pty_256_set.insert("PartyID_t_490634461");
    Pty_256.add_attribute("Src", "7"); // 1
    Pty_256_set.insert("7");
    Pty_256.add_attribute("R", "36"); // 1
    Pty_256_set.insert("36");
    all_values.push_back(Pty_256_set);
    all_compo_names.insert("Pty_256_set");

    {
      xml_element Sub_256{"Sub"};
      multiset<string> Sub_256_set;
      Sub_256.add_attribute("ID", "PartySubID_t_930225710"); // 2
      Sub_256_set.insert("PartySubID_t_930225710");
      Sub_256.add_attribute("Typ", "14"); // 2
      Sub_256_set.insert("14");
      all_values.push_back(Sub_256_set);
      all_compo_names.insert("Sub_256_set");

      Pty_256.add_element(Sub_256);
    }
    elt.add_element(Pty_256);
  } // end Pty
  { // Pty
    xml_element Pty_257{"Pty"};
    multiset<string> Pty_257_set;
    Pty_257.add_attribute("ID", "PartyID_t_1461064537"); // 1
    Pty_257_set.insert("PartyID_t_1461064537");
    Pty_257.add_attribute("Src", "H"); // 1
    Pty_257_set.insert("H");
    Pty_257.add_attribute("R", "41"); // 1
    Pty_257_set.insert("41");
    all_values.push_back(Pty_257_set);
    all_compo_names.insert("Pty_257_set");

    {
      xml_element Sub_257{"Sub"};
      multiset<string> Sub_257_set;
      Sub_257.add_attribute("ID", "PartySubID_t_644881601"); // 2
      Sub_257_set.insert("PartySubID_t_644881601");
      Sub_257.add_attribute("Typ", "11"); // 2
      Sub_257_set.insert("11");
      all_values.push_back(Sub_257_set);
      all_compo_names.insert("Sub_257_set");

      Pty_257.add_element(Sub_257);
    }
    elt.add_element(Pty_257);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_5{"TgtPty"};
    multiset<string> TgtPty_5_set;
    TgtPty_5.add_attribute("ID", "TargetPartyID_t_1996751889"); // 1
    TgtPty_5_set.insert("TargetPartyID_t_1996751889");
    TgtPty_5.add_attribute("Src", "H"); // 1
    TgtPty_5_set.insert("H");
    TgtPty_5.add_attribute("R", "24"); // 1
    TgtPty_5_set.insert("24");
    all_values.push_back(TgtPty_5_set);
    all_compo_names.insert("TgtPty_5_set");

    elt.add_element(TgtPty_5);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_6{"TgtPty"};
    multiset<string> TgtPty_6_set;
    TgtPty_6.add_attribute("ID", "TargetPartyID_t_1681521191"); // 1
    TgtPty_6_set.insert("TargetPartyID_t_1681521191");
    TgtPty_6.add_attribute("Src", "5"); // 1
    TgtPty_6_set.insert("5");
    TgtPty_6.add_attribute("R", "59"); // 1
    TgtPty_6_set.insert("59");
    all_values.push_back(TgtPty_6_set);
    all_compo_names.insert("TgtPty_6_set");

    elt.add_element(TgtPty_6);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_7{"TgtPty"};
    multiset<string> TgtPty_7_set;
    TgtPty_7.add_attribute("ID", "TargetPartyID_t_1400147919"); // 1
    TgtPty_7_set.insert("TargetPartyID_t_1400147919");
    TgtPty_7.add_attribute("Src", "B"); // 1
    TgtPty_7_set.insert("B");
    TgtPty_7.add_attribute("R", "70"); // 1
    TgtPty_7_set.insert("70");
    all_values.push_back(TgtPty_7_set);
    all_compo_names.insert("TgtPty_7_set");

    elt.add_element(TgtPty_7);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_49{"Instrmt"};
    multiset<string> Instrmt_49_set;
    Instrmt_49.add_attribute("Sym", "Symbol_t_418519559"); // 1
    Instrmt_49_set.insert("Symbol_t_418519559");
    Instrmt_49.add_attribute("Sfx", "CD"); // 1
    Instrmt_49_set.insert("CD");
    Instrmt_49.add_attribute("ID", "SecurityID_t_2048071247"); // 1
    Instrmt_49_set.insert("SecurityID_t_2048071247");
    Instrmt_49.add_attribute("Src", "K"); // 1
    Instrmt_49_set.insert("K");
    Instrmt_49.add_attribute("Prod", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("ProdCmplx", "ProductComplex_t_1885746063"); // 1
    Instrmt_49_set.insert("ProductComplex_t_1885746063");
    Instrmt_49.add_attribute("SecGrp", "SecurityGroup_t_2133864409"); // 1
    Instrmt_49_set.insert("SecurityGroup_t_2133864409");
    Instrmt_49.add_attribute("CFI", "CFICode_t_247413850"); // 1
    Instrmt_49_set.insert("CFICode_t_247413850");
    Instrmt_49.add_attribute("SecTyp", "REPLACD"); // 1
    Instrmt_49_set.insert("REPLACD");
    Instrmt_49.add_attribute("SubTyp", "SecuritySubType_t_1967421483"); // 1
    Instrmt_49_set.insert("SecuritySubType_t_1967421483");
    Instrmt_49.add_attribute("MMY", "1668305700"); // 1
    Instrmt_49_set.insert("1668305700");
    Instrmt_49.add_attribute("MatDt", "MaturityDate_t_658316176"); // 1
    Instrmt_49_set.insert("MaturityDate_t_658316176");
    Instrmt_49.add_attribute("MatTm", "290375797"); // 1
    Instrmt_49_set.insert("290375797");
    Instrmt_49.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_684257025"); // 1
    Instrmt_49_set.insert("SettleOnOpenFlag_t_684257025");
    Instrmt_49.add_attribute("AsgnMeth", "1588541886"); // 1
    Instrmt_49_set.insert("1588541886");
    Instrmt_49.add_attribute("Status", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("CpnPmt", "CouponPaymentDate_t_2145321562"); // 1
    Instrmt_49_set.insert("CouponPaymentDate_t_2145321562");
    Instrmt_49.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_49_set.insert("MR");
    Instrmt_49.add_attribute("Snrty", "SR"); // 1
    Instrmt_49_set.insert("SR");
    Instrmt_49.add_attribute("NotlPctOut", "6427195.150000"); // 1
    Instrmt_49_set.insert("6427195.150000");
    Instrmt_49.add_attribute("OrigNotlPctOut", "7155080.990000"); // 1
    Instrmt_49_set.insert("7155080.990000");
    Instrmt_49.add_attribute("AttchPnt", "3324537.940000"); // 1
    Instrmt_49_set.insert("3324537.940000");
    Instrmt_49.add_attribute("DetchPnt", "4919877.570000"); // 1
    Instrmt_49_set.insert("4919877.570000");
    Instrmt_49.add_attribute("Issued", "IssueDate_t_1927830904"); // 1
    Instrmt_49_set.insert("IssueDate_t_1927830904");
    Instrmt_49.add_attribute("RepoCollSecTyp", "1616696545"); // 1
    Instrmt_49_set.insert("1616696545");
    Instrmt_49.add_attribute("RepoTrm", "26025300"); // 1
    Instrmt_49_set.insert("26025300");
    Instrmt_49.add_attribute("RepoRt", "16205319.900000"); // 1
    Instrmt_49_set.insert("16205319.900000");
    Instrmt_49.add_attribute("Fctr", "4884647.540000"); // 1
    Instrmt_49_set.insert("4884647.540000");
    Instrmt_49.add_attribute("CrdRtg", "CreditRating_t_1426173219"); // 1
    Instrmt_49_set.insert("CreditRating_t_1426173219");
    Instrmt_49.add_attribute("Rgstry", "InstrRegistry_t_923398172"); // 1
    Instrmt_49_set.insert("InstrRegistry_t_923398172");
    Instrmt_49.add_attribute("IssuCtry", "64497122"); // 1
    Instrmt_49_set.insert("64497122");
    Instrmt_49.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1844692778"); // 1
    Instrmt_49_set.insert("StateOrProvinceOfIssue_t_1844692778");
    Instrmt_49.add_attribute("Lcl", "LocaleOfIssue_t_886711582"); // 1
    Instrmt_49_set.insert("LocaleOfIssue_t_886711582");
    Instrmt_49.add_attribute("Redeem", "RedemptionDate_t_2112568370"); // 1
    Instrmt_49_set.insert("RedemptionDate_t_2112568370");
    Instrmt_49.add_attribute("StrkPx", "17344957.430000"); // 1
    Instrmt_49_set.insert("17344957.430000");
    Instrmt_49.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_49_set.insert("CHF");
    Instrmt_49.add_attribute("StrkMult", "17208765.040000"); // 1
    Instrmt_49_set.insert("17208765.040000");
    Instrmt_49.add_attribute("StrkValu", "18570944.640000"); // 1
    Instrmt_49_set.insert("18570944.640000");
    Instrmt_49.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_49_set.insert("5");
    Instrmt_49.add_attribute("StrkPxBndryPrcsn", "13779165.170000"); // 1
    Instrmt_49_set.insert("13779165.170000");
    Instrmt_49.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("OptAt", "1831190137"); // 1
    Instrmt_49_set.insert("1831190137");
    Instrmt_49.add_attribute("Mult", "20621735.420000"); // 1
    Instrmt_49_set.insert("20621735.420000");
    Instrmt_49.add_attribute("MultTyp", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_49_set.insert("3");
    Instrmt_49.add_attribute("MinPxIncr", "20600114.560000"); // 1
    Instrmt_49_set.insert("20600114.560000");
    Instrmt_49.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1984386455"); // 1
    Instrmt_49_set.insert("MinPriceIncrementAmount_t_1984386455");
    Instrmt_49.add_attribute("UOM", "t"); // 1
    Instrmt_49_set.insert("t");
    Instrmt_49.add_attribute("UOMQty", "5552473.240000"); // 1
    Instrmt_49_set.insert("5552473.240000");
    Instrmt_49.add_attribute("PxUOM", "USD"); // 1
    Instrmt_49_set.insert("USD");
    Instrmt_49.add_attribute("PxUOMQty", "17245206.820000"); // 1
    Instrmt_49_set.insert("17245206.820000");
    Instrmt_49.add_attribute("SettlMeth", "P"); // 1
    Instrmt_49_set.insert("P");
    Instrmt_49.add_attribute("ExerStyle", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("OptPayAmt", "OptPayoutAmount_t_1073260381"); // 1
    Instrmt_49_set.insert("OptPayoutAmount_t_1073260381");
    Instrmt_49.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_49_set.insert("INX");
    Instrmt_49.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_49_set.insert("CDSD");
    Instrmt_49.add_attribute("ListMeth", "0"); // 1
    Instrmt_49_set.insert("0");
    Instrmt_49.add_attribute("CapPx", "7292046.770000"); // 1
    Instrmt_49_set.insert("7292046.770000");
    Instrmt_49.add_attribute("FlrPx", "17466954.560000"); // 1
    Instrmt_49_set.insert("17466954.560000");
    Instrmt_49.add_attribute("PutCall", "0"); // 1
    Instrmt_49_set.insert("0");
    Instrmt_49.add_attribute("FlexInd", "false"); // 1
    Instrmt_49_set.insert("false");
    Instrmt_49.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_49_set.insert("true");
    Instrmt_49.add_attribute("TmUnit", "Min"); // 1
    Instrmt_49_set.insert("Min");
    Instrmt_49.add_attribute("CpnRt", "10781132.250000"); // 1
    Instrmt_49_set.insert("10781132.250000");
    Instrmt_49.add_attribute("Exch", "SecurityExchange_t_1415127315"); // 1
    Instrmt_49_set.insert("SecurityExchange_t_1415127315");
    Instrmt_49.add_attribute("PosLmt", "1357047681"); // 1
    Instrmt_49_set.insert("1357047681");
    Instrmt_49.add_attribute("NTPosLmt", "787724042"); // 1
    Instrmt_49_set.insert("787724042");
    Instrmt_49.add_attribute("Issr", "Issuer_t_1286156167"); // 1
    Instrmt_49_set.insert("Issuer_t_1286156167");
    Instrmt_49.add_attribute("EncIssrLen", "750378373"); // 1
    Instrmt_49_set.insert("750378373");
    Instrmt_49.add_attribute("EncIssr", "EncodedIssuer_t_18156911"); // 1
    Instrmt_49_set.insert("EncodedIssuer_t_18156911");
    Instrmt_49.add_attribute("Desc", "SecurityDesc_t_1815501195"); // 1
    Instrmt_49_set.insert("SecurityDesc_t_1815501195");
    Instrmt_49.add_attribute("EncSecDescLen", "434084862"); // 1
    Instrmt_49_set.insert("434084862");
    Instrmt_49.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2080330453"); // 1
    Instrmt_49_set.insert("EncodedSecurityDesc_t_2080330453");
    Instrmt_49.add_attribute("Pool", "Pool_t_1785904462"); // 1
    Instrmt_49_set.insert("Pool_t_1785904462");
    Instrmt_49.add_attribute("CSetMo", "1033077395"); // 1
    Instrmt_49_set.insert("1033077395");
    Instrmt_49.add_attribute("CPPgm", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("CPRegT", "CPRegType_t_1622807269"); // 1
    Instrmt_49_set.insert("CPRegType_t_1622807269");
    Instrmt_49.add_attribute("Dated", "DatedDate_t_277660636"); // 1
    Instrmt_49_set.insert("DatedDate_t_277660636");
    Instrmt_49.add_attribute("IntAcrl", "InterestAccrualDate_t_400621937"); // 1
    Instrmt_49_set.insert("InterestAccrualDate_t_400621937");
    all_values.push_back(Instrmt_49_set);
    all_compo_names.insert("Instrmt_49_set");

    {
      xml_element AID_52{"AID"};
      multiset<string> AID_52_set;
      AID_52.add_attribute("AltID", "SecurityAltID_t_27734528"); // 2
      AID_52_set.insert("SecurityAltID_t_27734528");
      AID_52.add_attribute("AltIDSrc", "H"); // 2
      AID_52_set.insert("H");
      all_values.push_back(AID_52_set);
      all_compo_names.insert("AID_52_set");

      Instrmt_49.add_element(AID_52);
    }
    {
      xml_element SecXML_52{"SecXML"};
      multiset<string> SecXML_52_set;
      SecXML_52.add_attribute("Schema", "SecurityXMLSchema_t_1447857018"); // 2
      SecXML_52_set.insert("SecurityXMLSchema_t_1447857018");
      all_values.push_back(SecXML_52_set);
      all_compo_names.insert("SecXML_52_set");

      Instrmt_49.add_element(SecXML_52);
    }
    {
      xml_element Evnt_52{"Evnt"};
      multiset<string> Evnt_52_set;
      Evnt_52.add_attribute("EventTyp", "10"); // 2
      Evnt_52_set.insert("10");
      Evnt_52.add_attribute("Dt", "EventDate_t_1048431250"); // 2
      Evnt_52_set.insert("EventDate_t_1048431250");
      Evnt_52.add_attribute("Tm", "EventTime_t_373633751"); // 2
      Evnt_52_set.insert("EventTime_t_373633751");
      Evnt_52.add_attribute("Px", "1662991.960000"); // 2
      Evnt_52_set.insert("1662991.960000");
      Evnt_52.add_attribute("Txt", "EventText_t_583145936"); // 2
      Evnt_52_set.insert("EventText_t_583145936");
      all_values.push_back(Evnt_52_set);
      all_compo_names.insert("Evnt_52_set");

      Instrmt_49.add_element(Evnt_52);
    }
    {
      xml_element Pty_258{"Pty"};
      multiset<string> Pty_258_set;
      Pty_258.add_attribute("ID", "InstrumentPartyID_t_725583703"); // 2
      Pty_258_set.insert("InstrumentPartyID_t_725583703");
      Pty_258.add_attribute("Src", "4"); // 2
      Pty_258_set.insert("4");
      Pty_258.add_attribute("R", "48"); // 2
      Pty_258_set.insert("48");
      all_values.push_back(Pty_258_set);
      all_compo_names.insert("Pty_258_set");

      {
        xml_element Sub_258{"Sub"};
        multiset<string> Sub_258_set;
        Sub_258.add_attribute("ID", "InstrumentPartySubID_t_774742786"); // 3
        Sub_258_set.insert("InstrumentPartySubID_t_774742786");
        Sub_258.add_attribute("Typ", "2"); // 3
        Sub_258_set.insert("2");
        all_values.push_back(Sub_258_set);
        all_compo_names.insert("Sub_258_set");

        Pty_258.add_element(Sub_258);
      }
      Instrmt_49.add_element(Pty_258);
    }
    {
      xml_element CmplxEvnt_49{"CmplxEvnt"};
      multiset<string> CmplxEvnt_49_set;
      CmplxEvnt_49.add_attribute("Typ", "3"); // 2
      CmplxEvnt_49_set.insert("3");
      CmplxEvnt_49.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_410913963"); // 2
      CmplxEvnt_49_set.insert("ComplexOptPayoutAmount_t_410913963");
      CmplxEvnt_49.add_attribute("Px", "14420497.100000"); // 2
      CmplxEvnt_49_set.insert("14420497.100000");
      CmplxEvnt_49.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_49_set.insert("2");
      CmplxEvnt_49.add_attribute("PxBndryPrcsn", "17679616.450000"); // 2
      CmplxEvnt_49_set.insert("17679616.450000");
      CmplxEvnt_49.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_49_set.insert("3");
      CmplxEvnt_49.add_attribute("Cond", "1"); // 2
      CmplxEvnt_49_set.insert("1");
      all_values.push_back(CmplxEvnt_49_set);
      all_compo_names.insert("CmplxEvnt_49_set");

      {
        xml_element EvntDts_49{"EvntDts"};
        multiset<string> EvntDts_49_set;
        EvntDts_49.add_attribute("StartDt", "ComplexEventStartDate_t_370856370"); // 3
        EvntDts_49_set.insert("ComplexEventStartDate_t_370856370");
        EvntDts_49.add_attribute("EndDt", "ComplexEventEndDate_t_100447015"); // 3
        EvntDts_49_set.insert("ComplexEventEndDate_t_100447015");
        all_values.push_back(EvntDts_49_set);
        all_compo_names.insert("EvntDts_49_set");

        {
          xml_element EvntTms_49{"EvntTms"};
          multiset<string> EvntTms_49_set;
          EvntTms_49.add_attribute("StartTm", "2115955306"); // 4
          EvntTms_49_set.insert("2115955306");
          EvntTms_49.add_attribute("EndTm", "804941232"); // 4
          EvntTms_49_set.insert("804941232");
          all_values.push_back(EvntTms_49_set);
          all_compo_names.insert("EvntTms_49_set");

          EvntDts_49.add_element(EvntTms_49);
        }
        CmplxEvnt_49.add_element(EvntDts_49);
      }
      Instrmt_49.add_element(CmplxEvnt_49);
    }
    elt.add_element(Instrmt_49);
  } // end Instrmt
  { // Undly
    xml_element Undly_66{"Undly"};
    multiset<string> Undly_66_set;
    Undly_66.add_attribute("Sym", "UnderlyingSymbol_t_33293820"); // 1
    Undly_66_set.insert("UnderlyingSymbol_t_33293820");
    Undly_66.add_attribute("Sfx", "CD"); // 1
    Undly_66_set.insert("CD");
    Undly_66.add_attribute("ID", "UnderlyingSecurityID_t_1838018627"); // 1
    Undly_66_set.insert("UnderlyingSecurityID_t_1838018627");
    Undly_66.add_attribute("Src", "K"); // 1
    Undly_66_set.insert("K");
    Undly_66.add_attribute("Prod", "7"); // 1
    Undly_66_set.insert("7");
    Undly_66.add_attribute("CFI", "UnderlyingCFICode_t_2115679263"); // 1
    Undly_66_set.insert("UnderlyingCFICode_t_2115679263");
    Undly_66.add_attribute("SecTyp", "SPCLA"); // 1
    Undly_66_set.insert("SPCLA");
    Undly_66.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1257434270"); // 1
    Undly_66_set.insert("UnderlyingSecuritySubType_t_1257434270");
    Undly_66.add_attribute("MMY", "1970376934"); // 1
    Undly_66_set.insert("1970376934");
    Undly_66.add_attribute("Mat", "UnderlyingMaturityDate_t_1727147390"); // 1
    Undly_66_set.insert("UnderlyingMaturityDate_t_1727147390");
    Undly_66.add_attribute("MatTm", "1617926961"); // 1
    Undly_66_set.insert("1617926961");
    Undly_66.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_871324536"); // 1
    Undly_66_set.insert("UnderlyingCouponPaymentDate_t_871324536");
    Undly_66.add_attribute("RestrctTyp", "MR"); // 1
    Undly_66_set.insert("MR");
    Undly_66.add_attribute("Snrty", "SB"); // 1
    Undly_66_set.insert("SB");
    Undly_66.add_attribute("NotlPctOut", "14544704.730000"); // 1
    Undly_66_set.insert("14544704.730000");
    Undly_66.add_attribute("OrigNotlPctOut", "6788811.970000"); // 1
    Undly_66_set.insert("6788811.970000");
    Undly_66.add_attribute("AttchPnt", "5322463.830000"); // 1
    Undly_66_set.insert("5322463.830000");
    Undly_66.add_attribute("DetchPnt", "16368282.180000"); // 1
    Undly_66_set.insert("16368282.180000");
    Undly_66.add_attribute("Issued", "UnderlyingIssueDate_t_1453623983"); // 1
    Undly_66_set.insert("UnderlyingIssueDate_t_1453623983");
    Undly_66.add_attribute("RepoCollSecTyp", "896182868"); // 1
    Undly_66_set.insert("896182868");
    Undly_66.add_attribute("RepoTrm", "1383482493"); // 1
    Undly_66_set.insert("1383482493");
    Undly_66.add_attribute("RepoRt", "18645379.460000"); // 1
    Undly_66_set.insert("18645379.460000");
    Undly_66.add_attribute("Fctr", "1907489.310000"); // 1
    Undly_66_set.insert("1907489.310000");
    Undly_66.add_attribute("CrdRtg", "UnderlyingCreditRating_t_397780436"); // 1
    Undly_66_set.insert("UnderlyingCreditRating_t_397780436");
    Undly_66.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1485015943"); // 1
    Undly_66_set.insert("UnderlyingInstrRegistry_t_1485015943");
    Undly_66.add_attribute("Ctry", "273039035"); // 1
    Undly_66_set.insert("273039035");
    Undly_66.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_698234547"); // 1
    Undly_66_set.insert("UnderlyingStateOrProvinceOfIssue_t_698234547");
    Undly_66.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1855872313"); // 1
    Undly_66_set.insert("UnderlyingLocaleOfIssue_t_1855872313");
    Undly_66.add_attribute("Redeem", "UnderlyingRedemptionDate_t_373486051"); // 1
    Undly_66_set.insert("UnderlyingRedemptionDate_t_373486051");
    Undly_66.add_attribute("StrkPx", "6667062.050000"); // 1
    Undly_66_set.insert("6667062.050000");
    Undly_66.add_attribute("StrkCcy", "EUR"); // 1
    Undly_66_set.insert("EUR");
    Undly_66.add_attribute("OptA", "273598677"); // 1
    Undly_66_set.insert("273598677");
    Undly_66.add_attribute("Mult", "2038648.770000"); // 1
    Undly_66_set.insert("2038648.770000");
    Undly_66.add_attribute("MultTyp", "0"); // 1
    Undly_66_set.insert("0");
    Undly_66.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_66_set.insert("3");
    Undly_66.add_attribute("UOM", "MMbbl"); // 1
    Undly_66_set.insert("MMbbl");
    Undly_66.add_attribute("UOMQty", "5647386.770000"); // 1
    Undly_66_set.insert("5647386.770000");
    Undly_66.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_66_set.insert("MMBtu");
    Undly_66.add_attribute("PxUOMQty", "21424374.260000"); // 1
    Undly_66_set.insert("21424374.260000");
    Undly_66.add_attribute("TmUnit", "S"); // 1
    Undly_66_set.insert("S");
    Undly_66.add_attribute("ExerStyle", "1"); // 1
    Undly_66_set.insert("1");
    Undly_66.add_attribute("CpnRt", "8662783.150000"); // 1
    Undly_66_set.insert("8662783.150000");
    Undly_66.add_attribute("Exch", "UnderlyingSecurityExchange_t_97699912"); // 1
    Undly_66_set.insert("UnderlyingSecurityExchange_t_97699912");
    Undly_66.add_attribute("Issr", "UnderlyingIssuer_t_1867918512"); // 1
    Undly_66_set.insert("UnderlyingIssuer_t_1867918512");
    Undly_66.add_attribute("EncUndIssrLen", "173265140"); // 1
    Undly_66_set.insert("173265140");
    Undly_66.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_776581109"); // 1
    Undly_66_set.insert("EncodedUnderlyingIssuer_t_776581109");
    Undly_66.add_attribute("Desc", "UnderlyingSecurityDesc_t_252681247"); // 1
    Undly_66_set.insert("UnderlyingSecurityDesc_t_252681247");
    Undly_66.add_attribute("EncUndSecDescLen", "1810093358"); // 1
    Undly_66_set.insert("1810093358");
    Undly_66.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_82721444"); // 1
    Undly_66_set.insert("EncodedUnderlyingSecurityDesc_t_82721444");
    Undly_66.add_attribute("CPPgm", "UnderlyingCPProgram_t_1148864116"); // 1
    Undly_66_set.insert("UnderlyingCPProgram_t_1148864116");
    Undly_66.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1046092203"); // 1
    Undly_66_set.insert("UnderlyingCPRegType_t_1046092203");
    Undly_66.add_attribute("AllocPct", "19472593.910000"); // 1
    Undly_66_set.insert("19472593.910000");
    Undly_66.add_attribute("Ccy", "USD"); // 1
    Undly_66_set.insert("USD");
    Undly_66.add_attribute("Qty", "12847916.860000"); // 1
    Undly_66_set.insert("12847916.860000");
    Undly_66.add_attribute("SettlTyp", "2"); // 1
    Undly_66_set.insert("2");
    Undly_66.add_attribute("CashAmt", "UnderlyingCashAmount_t_2142107187"); // 1
    Undly_66_set.insert("UnderlyingCashAmount_t_2142107187");
    Undly_66.add_attribute("CashTyp", "FIXED"); // 1
    Undly_66_set.insert("FIXED");
    Undly_66.add_attribute("Px", "19861381.330000"); // 1
    Undly_66_set.insert("19861381.330000");
    Undly_66.add_attribute("DirtPx", "6613297.440000"); // 1
    Undly_66_set.insert("6613297.440000");
    Undly_66.add_attribute("EndPx", "15065102.490000"); // 1
    Undly_66_set.insert("15065102.490000");
    Undly_66.add_attribute("StartVal", "UnderlyingStartValue_t_245434357"); // 1
    Undly_66_set.insert("UnderlyingStartValue_t_245434357");
    Undly_66.add_attribute("CurVal", "UnderlyingCurrentValue_t_934928421"); // 1
    Undly_66_set.insert("UnderlyingCurrentValue_t_934928421");
    Undly_66.add_attribute("EndVal", "UnderlyingEndValue_t_1710375126"); // 1
    Undly_66_set.insert("UnderlyingEndValue_t_1710375126");
    Undly_66.add_attribute("AdjQty", "5308826.620000"); // 1
    Undly_66_set.insert("5308826.620000");
    Undly_66.add_attribute("FxRate", "2907431.910000"); // 1
    Undly_66_set.insert("2907431.910000");
    Undly_66.add_attribute("FxRateCalc", "D"); // 1
    Undly_66_set.insert("D");
    Undly_66.add_attribute("CapValu", "UnderlyingCapValue_t_1095621339"); // 1
    Undly_66_set.insert("UnderlyingCapValue_t_1095621339");
    Undly_66.add_attribute("SetMeth", "UnderlyingSettlMethod_t_903992232"); // 1
    Undly_66_set.insert("UnderlyingSettlMethod_t_903992232");
    Undly_66.add_attribute("PutCall", "1877389397"); // 1
    Undly_66_set.insert("1877389397");
    all_values.push_back(Undly_66_set);
    all_compo_names.insert("Undly_66_set");

    {
      xml_element UndAID_66{"UndAID"};
      multiset<string> UndAID_66_set;
      UndAID_66.add_attribute("AltID", "UnderlyingSecurityAltID_t_1240023758"); // 2
      UndAID_66_set.insert("UnderlyingSecurityAltID_t_1240023758");
      UndAID_66.add_attribute("AltIDSrc", "K"); // 2
      UndAID_66_set.insert("K");
      all_values.push_back(UndAID_66_set);
      all_compo_names.insert("UndAID_66_set");

      Undly_66.add_element(UndAID_66);
    }
    {
      xml_element Stip_103{"Stip"};
      multiset<string> Stip_103_set;
      Stip_103.add_attribute("Typ", "ROLLTYPE"); // 2
      Stip_103_set.insert("ROLLTYPE");
      Stip_103.add_attribute("Val", "UnderlyingStipValue_t_1337723671"); // 2
      Stip_103_set.insert("UnderlyingStipValue_t_1337723671");
      all_values.push_back(Stip_103_set);
      all_compo_names.insert("Stip_103_set");

      Undly_66.add_element(Stip_103);
    }
    {
      xml_element Pty_259{"Pty"};
      multiset<string> Pty_259_set;
      Pty_259.add_attribute("ID", "UnderlyingInstrumentPartyID_t_708119450"); // 2
      Pty_259_set.insert("UnderlyingInstrumentPartyID_t_708119450");
      Pty_259.add_attribute("Src", "1"); // 2
      Pty_259_set.insert("1");
      Pty_259.add_attribute("R", "1"); // 2
      Pty_259_set.insert("1");
      all_values.push_back(Pty_259_set);
      all_compo_names.insert("Pty_259_set");

      {
        xml_element Sub_259{"Sub"};
        multiset<string> Sub_259_set;
        Sub_259.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_960800697"); // 3
        Sub_259_set.insert("UnderlyingInstrumentPartySubID_t_960800697");
        Sub_259.add_attribute("Typ", "20"); // 3
        Sub_259_set.insert("20");
        all_values.push_back(Sub_259_set);
        all_compo_names.insert("Sub_259_set");

        Pty_259.add_element(Sub_259);
      }
      Undly_66.add_element(Pty_259);
    }
    elt.add_element(Undly_66);
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
