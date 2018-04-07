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
  elt.add_attribute("ClOrdID", "ClOrdID_t_9316921"); // 0
  OrderMassCancelReport_message_t_0.insert("ClOrdID_t_9316921");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1036720867"); // 0
  OrderMassCancelReport_message_t_0.insert("SecondaryClOrdID_t_1036720867");
  elt.add_attribute("OrdID", "OrderID_t_966873337"); // 0
  OrderMassCancelReport_message_t_0.insert("OrderID_t_966873337");
  elt.add_attribute("MassActionReportID", "MassActionReportID_t_1306118045"); // 0
  OrderMassCancelReport_message_t_0.insert("MassActionReportID_t_1306118045");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_298622970"); // 0
  OrderMassCancelReport_message_t_0.insert("SecondaryOrderID_t_298622970");
  elt.add_attribute("ReqTyp", "8"); // 0
  OrderMassCancelReport_message_t_0.insert("8");
  elt.add_attribute("Rsp", "2"); // 0
  OrderMassCancelReport_message_t_0.insert("2");
  elt.add_attribute("MassCxlRejRsn", "99"); // 0
  OrderMassCancelReport_message_t_0.insert("99");
  elt.add_attribute("TotAffctdOrds", "1091641918"); // 0
  OrderMassCancelReport_message_t_0.insert("1091641918");
  elt.add_attribute("SesID", "4"); // 0
  OrderMassCancelReport_message_t_0.insert("4");
  elt.add_attribute("SesSub", "3"); // 0
  OrderMassCancelReport_message_t_0.insert("3");
  elt.add_attribute("MktID", "MarketID_t_1137545456"); // 0
  OrderMassCancelReport_message_t_0.insert("MarketID_t_1137545456");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1270965239"); // 0
  OrderMassCancelReport_message_t_0.insert("MarketSegmentID_t_1270965239");
  elt.add_attribute("Side", "9"); // 0
  OrderMassCancelReport_message_t_0.insert("9");
  elt.add_attribute("TxnTm", "TransactTime_t_1939126622"); // 0
  OrderMassCancelReport_message_t_0.insert("TransactTime_t_1939126622");
  elt.add_attribute("Txt", "Text_t_986265657"); // 0
  OrderMassCancelReport_message_t_0.insert("Text_t_986265657");
  elt.add_attribute("EncTxtLen", "178450977"); // 0
  OrderMassCancelReport_message_t_0.insert("178450977");
  elt.add_attribute("EncTxt", "EncodedText_t_331616044"); // 0
  OrderMassCancelReport_message_t_0.insert("EncodedText_t_331616044");
  all_values.push_back(OrderMassCancelReport_message_t_0);
  all_compo_names.insert("OrderMassCancelReport_message_t");

  { // Hdr
    xml_element Hdr_61{"Hdr"};
    multiset<string> Hdr_61_set;
    Hdr_61.add_attribute("SeqNum", "812362319"); // 1
    Hdr_61_set.insert("812362319");
    Hdr_61.add_attribute("SID", "SenderCompID_t_1434347471"); // 1
    Hdr_61_set.insert("SenderCompID_t_1434347471");
    Hdr_61.add_attribute("TID", "TargetCompID_t_1163655780"); // 1
    Hdr_61_set.insert("TargetCompID_t_1163655780");
    Hdr_61.add_attribute("OBID", "OnBehalfOfCompID_t_2004508541"); // 1
    Hdr_61_set.insert("OnBehalfOfCompID_t_2004508541");
    Hdr_61.add_attribute("D2ID", "DeliverToCompID_t_1495629434"); // 1
    Hdr_61_set.insert("DeliverToCompID_t_1495629434");
    Hdr_61.add_attribute("SSub", "SenderSubID_t_1486337942"); // 1
    Hdr_61_set.insert("SenderSubID_t_1486337942");
    Hdr_61.add_attribute("SLoc", "SenderLocationID_t_696365490"); // 1
    Hdr_61_set.insert("SenderLocationID_t_696365490");
    Hdr_61.add_attribute("TSub", "TargetSubID_t_680223557"); // 1
    Hdr_61_set.insert("TargetSubID_t_680223557");
    Hdr_61.add_attribute("TLoc", "TargetLocationID_t_1599985351"); // 1
    Hdr_61_set.insert("TargetLocationID_t_1599985351");
    Hdr_61.add_attribute("OBSub", "OnBehalfOfSubID_t_2041400706"); // 1
    Hdr_61_set.insert("OnBehalfOfSubID_t_2041400706");
    Hdr_61.add_attribute("OBLoc", "OnBehalfOfLocationID_t_95215373"); // 1
    Hdr_61_set.insert("OnBehalfOfLocationID_t_95215373");
    Hdr_61.add_attribute("D2Sub", "DeliverToSubID_t_2050002334"); // 1
    Hdr_61_set.insert("DeliverToSubID_t_2050002334");
    Hdr_61.add_attribute("D2Loc", "DeliverToLocationID_t_504660822"); // 1
    Hdr_61_set.insert("DeliverToLocationID_t_504660822");
    Hdr_61.add_attribute("PosDup", "N"); // 1
    Hdr_61_set.insert("N");
    Hdr_61.add_attribute("PosRsnd", "Y"); // 1
    Hdr_61_set.insert("Y");
    Hdr_61.add_attribute("Snt", "SendingTime_t_1471534159"); // 1
    Hdr_61_set.insert("SendingTime_t_1471534159");
    Hdr_61.add_attribute("OrigSnt", "OrigSendingTime_t_1410650339"); // 1
    Hdr_61_set.insert("OrigSendingTime_t_1410650339");
    Hdr_61.add_attribute("MsgEncd", "MessageEncoding_t_1237862524"); // 1
    Hdr_61_set.insert("MessageEncoding_t_1237862524");
    all_values.push_back(Hdr_61_set);
    all_compo_names.insert("Hdr_61_set");

    {
      xml_element Hop_61{"Hop"};
      multiset<string> Hop_61_set;
      Hop_61.add_attribute("ID", "HopCompID_t_47184354"); // 2
      Hop_61_set.insert("HopCompID_t_47184354");
      Hop_61.add_attribute("Ref", "53638519"); // 2
      Hop_61_set.insert("53638519");
      Hop_61.add_attribute("Snt", "HopSendingTime_t_620613316"); // 2
      Hop_61_set.insert("HopSendingTime_t_620613316");
      all_values.push_back(Hop_61_set);
      all_compo_names.insert("Hop_61_set");

      Hdr_61.add_element(Hop_61);
    }
    elt.add_element(Hdr_61);
  } // end Hdr
  { // AffectOrd
    xml_element AffectOrd_3{"AffectOrd"};
    multiset<string> AffectOrd_3_set;
    AffectOrd_3.add_attribute("OrigID", "OrigClOrdID_t_2134120066"); // 1
    AffectOrd_3_set.insert("OrigClOrdID_t_2134120066");
    AffectOrd_3.add_attribute("AffctdOrdID", "AffectedOrderID_t_345580839"); // 1
    AffectOrd_3_set.insert("AffectedOrderID_t_345580839");
    AffectOrd_3.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_128888080"); // 1
    AffectOrd_3_set.insert("AffectedSecondaryOrderID_t_128888080");
    all_values.push_back(AffectOrd_3_set);
    all_compo_names.insert("AffectOrd_3_set");

    elt.add_element(AffectOrd_3);
  } // end AffectOrd
  { // AffectOrd
    xml_element AffectOrd_4{"AffectOrd"};
    multiset<string> AffectOrd_4_set;
    AffectOrd_4.add_attribute("OrigID", "OrigClOrdID_t_1257601657"); // 1
    AffectOrd_4_set.insert("OrigClOrdID_t_1257601657");
    AffectOrd_4.add_attribute("AffctdOrdID", "AffectedOrderID_t_1153018943"); // 1
    AffectOrd_4_set.insert("AffectedOrderID_t_1153018943");
    AffectOrd_4.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_2068014702"); // 1
    AffectOrd_4_set.insert("AffectedSecondaryOrderID_t_2068014702");
    all_values.push_back(AffectOrd_4_set);
    all_compo_names.insert("AffectOrd_4_set");

    elt.add_element(AffectOrd_4);
  } // end AffectOrd
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_2{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_2_set;
    NotAffectedOrdersGrp_2.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_1331469920"); // 1
    NotAffectedOrdersGrp_2_set.insert("NotAffOrigClOrdID_t_1331469920");
    NotAffectedOrdersGrp_2.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_252147099"); // 1
    NotAffectedOrdersGrp_2_set.insert("NotAffectedOrderID_t_252147099");
    all_values.push_back(NotAffectedOrdersGrp_2_set);
    all_compo_names.insert("NotAffectedOrdersGrp_2_set");

    elt.add_element(NotAffectedOrdersGrp_2);
  } // end NotAffectedOrdersGrp
  { // Pty
    xml_element Pty_288{"Pty"};
    multiset<string> Pty_288_set;
    Pty_288.add_attribute("ID", "PartyID_t_618333743"); // 1
    Pty_288_set.insert("PartyID_t_618333743");
    Pty_288.add_attribute("Src", "A"); // 1
    Pty_288_set.insert("A");
    Pty_288.add_attribute("R", "85"); // 1
    Pty_288_set.insert("85");
    all_values.push_back(Pty_288_set);
    all_compo_names.insert("Pty_288_set");

    {
      xml_element Sub_288{"Sub"};
      multiset<string> Sub_288_set;
      Sub_288.add_attribute("ID", "PartySubID_t_2113963177"); // 2
      Sub_288_set.insert("PartySubID_t_2113963177");
      Sub_288.add_attribute("Typ", "15"); // 2
      Sub_288_set.insert("15");
      all_values.push_back(Sub_288_set);
      all_compo_names.insert("Sub_288_set");

      Pty_288.add_element(Sub_288);
    }
    elt.add_element(Pty_288);
  } // end Pty
  { // Pty
    xml_element Pty_289{"Pty"};
    multiset<string> Pty_289_set;
    Pty_289.add_attribute("ID", "PartyID_t_1462136369"); // 1
    Pty_289_set.insert("PartyID_t_1462136369");
    Pty_289.add_attribute("Src", "5"); // 1
    Pty_289_set.insert("5");
    Pty_289.add_attribute("R", "17"); // 1
    Pty_289_set.insert("17");
    all_values.push_back(Pty_289_set);
    all_compo_names.insert("Pty_289_set");

    {
      xml_element Sub_289{"Sub"};
      multiset<string> Sub_289_set;
      Sub_289.add_attribute("ID", "PartySubID_t_1356053428"); // 2
      Sub_289_set.insert("PartySubID_t_1356053428");
      Sub_289.add_attribute("Typ", "26"); // 2
      Sub_289_set.insert("26");
      all_values.push_back(Sub_289_set);
      all_compo_names.insert("Sub_289_set");

      Pty_289.add_element(Sub_289);
    }
    elt.add_element(Pty_289);
  } // end Pty
  { // Pty
    xml_element Pty_290{"Pty"};
    multiset<string> Pty_290_set;
    Pty_290.add_attribute("ID", "PartyID_t_109677563"); // 1
    Pty_290_set.insert("PartyID_t_109677563");
    Pty_290.add_attribute("Src", "H"); // 1
    Pty_290_set.insert("H");
    Pty_290.add_attribute("R", "40"); // 1
    Pty_290_set.insert("40");
    all_values.push_back(Pty_290_set);
    all_compo_names.insert("Pty_290_set");

    {
      xml_element Sub_290{"Sub"};
      multiset<string> Sub_290_set;
      Sub_290.add_attribute("ID", "PartySubID_t_1048917116"); // 2
      Sub_290_set.insert("PartySubID_t_1048917116");
      Sub_290.add_attribute("Typ", "24"); // 2
      Sub_290_set.insert("24");
      all_values.push_back(Sub_290_set);
      all_compo_names.insert("Sub_290_set");

      Pty_290.add_element(Sub_290);
    }
    elt.add_element(Pty_290);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_5{"TgtPty"};
    multiset<string> TgtPty_5_set;
    TgtPty_5.add_attribute("ID", "TargetPartyID_t_139295992"); // 1
    TgtPty_5_set.insert("TargetPartyID_t_139295992");
    TgtPty_5.add_attribute("Src", "B"); // 1
    TgtPty_5_set.insert("B");
    TgtPty_5.add_attribute("R", "5"); // 1
    TgtPty_5_set.insert("5");
    all_values.push_back(TgtPty_5_set);
    all_compo_names.insert("TgtPty_5_set");

    elt.add_element(TgtPty_5);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_6{"TgtPty"};
    multiset<string> TgtPty_6_set;
    TgtPty_6.add_attribute("ID", "TargetPartyID_t_759909309"); // 1
    TgtPty_6_set.insert("TargetPartyID_t_759909309");
    TgtPty_6.add_attribute("Src", "E"); // 1
    TgtPty_6_set.insert("E");
    TgtPty_6.add_attribute("R", "2"); // 1
    TgtPty_6_set.insert("2");
    all_values.push_back(TgtPty_6_set);
    all_compo_names.insert("TgtPty_6_set");

    elt.add_element(TgtPty_6);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_51{"Instrmt"};
    multiset<string> Instrmt_51_set;
    Instrmt_51.add_attribute("Sym", "Symbol_t_1105490148"); // 1
    Instrmt_51_set.insert("Symbol_t_1105490148");
    Instrmt_51.add_attribute("Sfx", "WI"); // 1
    Instrmt_51_set.insert("WI");
    Instrmt_51.add_attribute("ID", "SecurityID_t_1407494040"); // 1
    Instrmt_51_set.insert("SecurityID_t_1407494040");
    Instrmt_51.add_attribute("Src", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("Prod", "6"); // 1
    Instrmt_51_set.insert("6");
    Instrmt_51.add_attribute("ProdCmplx", "ProductComplex_t_1503877707"); // 1
    Instrmt_51_set.insert("ProductComplex_t_1503877707");
    Instrmt_51.add_attribute("SecGrp", "SecurityGroup_t_1442495363"); // 1
    Instrmt_51_set.insert("SecurityGroup_t_1442495363");
    Instrmt_51.add_attribute("CFI", "CFICode_t_524857975"); // 1
    Instrmt_51_set.insert("CFICode_t_524857975");
    Instrmt_51.add_attribute("SecTyp", "SECLOAN"); // 1
    Instrmt_51_set.insert("SECLOAN");
    Instrmt_51.add_attribute("SubTyp", "SecuritySubType_t_2060829107"); // 1
    Instrmt_51_set.insert("SecuritySubType_t_2060829107");
    Instrmt_51.add_attribute("MMY", "1940660854"); // 1
    Instrmt_51_set.insert("1940660854");
    Instrmt_51.add_attribute("MatDt", "MaturityDate_t_1030910925"); // 1
    Instrmt_51_set.insert("MaturityDate_t_1030910925");
    Instrmt_51.add_attribute("MatTm", "2027308636"); // 1
    Instrmt_51_set.insert("2027308636");
    Instrmt_51.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_547834379"); // 1
    Instrmt_51_set.insert("SettleOnOpenFlag_t_547834379");
    Instrmt_51.add_attribute("AsgnMeth", "345563646"); // 1
    Instrmt_51_set.insert("345563646");
    Instrmt_51.add_attribute("Status", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("CpnPmt", "CouponPaymentDate_t_754993256"); // 1
    Instrmt_51_set.insert("CouponPaymentDate_t_754993256");
    Instrmt_51.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_51_set.insert("MM");
    Instrmt_51.add_attribute("Snrty", "SR"); // 1
    Instrmt_51_set.insert("SR");
    Instrmt_51.add_attribute("NotlPctOut", "8646708.190000"); // 1
    Instrmt_51_set.insert("8646708.190000");
    Instrmt_51.add_attribute("OrigNotlPctOut", "14148476.770000"); // 1
    Instrmt_51_set.insert("14148476.770000");
    Instrmt_51.add_attribute("AttchPnt", "21148972.880000"); // 1
    Instrmt_51_set.insert("21148972.880000");
    Instrmt_51.add_attribute("DetchPnt", "19135879.350000"); // 1
    Instrmt_51_set.insert("19135879.350000");
    Instrmt_51.add_attribute("Issued", "IssueDate_t_452128791"); // 1
    Instrmt_51_set.insert("IssueDate_t_452128791");
    Instrmt_51.add_attribute("RepoCollSecTyp", "77031086"); // 1
    Instrmt_51_set.insert("77031086");
    Instrmt_51.add_attribute("RepoTrm", "2052883928"); // 1
    Instrmt_51_set.insert("2052883928");
    Instrmt_51.add_attribute("RepoRt", "16840779.070000"); // 1
    Instrmt_51_set.insert("16840779.070000");
    Instrmt_51.add_attribute("Fctr", "2402870.500000"); // 1
    Instrmt_51_set.insert("2402870.500000");
    Instrmt_51.add_attribute("CrdRtg", "CreditRating_t_665309589"); // 1
    Instrmt_51_set.insert("CreditRating_t_665309589");
    Instrmt_51.add_attribute("Rgstry", "InstrRegistry_t_1907369648"); // 1
    Instrmt_51_set.insert("InstrRegistry_t_1907369648");
    Instrmt_51.add_attribute("IssuCtry", "390179433"); // 1
    Instrmt_51_set.insert("390179433");
    Instrmt_51.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1770799737"); // 1
    Instrmt_51_set.insert("StateOrProvinceOfIssue_t_1770799737");
    Instrmt_51.add_attribute("Lcl", "LocaleOfIssue_t_112065822"); // 1
    Instrmt_51_set.insert("LocaleOfIssue_t_112065822");
    Instrmt_51.add_attribute("Redeem", "RedemptionDate_t_1797673474"); // 1
    Instrmt_51_set.insert("RedemptionDate_t_1797673474");
    Instrmt_51.add_attribute("StrkPx", "18818251.800000"); // 1
    Instrmt_51_set.insert("18818251.800000");
    Instrmt_51.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_51_set.insert("CAN");
    Instrmt_51.add_attribute("StrkMult", "11768368.950000"); // 1
    Instrmt_51_set.insert("11768368.950000");
    Instrmt_51.add_attribute("StrkValu", "9096346.730000"); // 1
    Instrmt_51_set.insert("9096346.730000");
    Instrmt_51.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_51_set.insert("4");
    Instrmt_51.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_51_set.insert("5");
    Instrmt_51.add_attribute("StrkPxBndryPrcsn", "7028118.790000"); // 1
    Instrmt_51_set.insert("7028118.790000");
    Instrmt_51.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_51_set.insert("1");
    Instrmt_51.add_attribute("OptAt", "970007343"); // 1
    Instrmt_51_set.insert("970007343");
    Instrmt_51.add_attribute("Mult", "12506462.580000"); // 1
    Instrmt_51_set.insert("12506462.580000");
    Instrmt_51.add_attribute("MultTyp", "1"); // 1
    Instrmt_51_set.insert("1");
    Instrmt_51.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_51_set.insert("3");
    Instrmt_51.add_attribute("MinPxIncr", "20056395.140000"); // 1
    Instrmt_51_set.insert("20056395.140000");
    Instrmt_51.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_202331929"); // 1
    Instrmt_51_set.insert("MinPriceIncrementAmount_t_202331929");
    Instrmt_51.add_attribute("UOM", "lbs"); // 1
    Instrmt_51_set.insert("lbs");
    Instrmt_51.add_attribute("UOMQty", "7228266.850000"); // 1
    Instrmt_51_set.insert("7228266.850000");
    Instrmt_51.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_51_set.insert("Gal");
    Instrmt_51.add_attribute("PxUOMQty", "5849119.450000"); // 1
    Instrmt_51_set.insert("5849119.450000");
    Instrmt_51.add_attribute("SettlMeth", "P"); // 1
    Instrmt_51_set.insert("P");
    Instrmt_51.add_attribute("ExerStyle", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_51_set.insert("1");
    Instrmt_51.add_attribute("OptPayAmt", "OptPayoutAmount_t_394331253"); // 1
    Instrmt_51_set.insert("OptPayoutAmount_t_394331253");
    Instrmt_51.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_51_set.insert("STD");
    Instrmt_51.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_51_set.insert("FUT");
    Instrmt_51.add_attribute("ListMeth", "0"); // 1
    Instrmt_51_set.insert("0");
    Instrmt_51.add_attribute("CapPx", "13657886.570000"); // 1
    Instrmt_51_set.insert("13657886.570000");
    Instrmt_51.add_attribute("FlrPx", "12924095.150000"); // 1
    Instrmt_51_set.insert("12924095.150000");
    Instrmt_51.add_attribute("PutCall", "1"); // 1
    Instrmt_51_set.insert("1");
    Instrmt_51.add_attribute("FlexInd", "false"); // 1
    Instrmt_51_set.insert("false");
    Instrmt_51.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_51_set.insert("false");
    Instrmt_51.add_attribute("TmUnit", "Min"); // 1
    Instrmt_51_set.insert("Min");
    Instrmt_51.add_attribute("CpnRt", "18626311.770000"); // 1
    Instrmt_51_set.insert("18626311.770000");
    Instrmt_51.add_attribute("Exch", "SecurityExchange_t_2096666874"); // 1
    Instrmt_51_set.insert("SecurityExchange_t_2096666874");
    Instrmt_51.add_attribute("PosLmt", "1594135358"); // 1
    Instrmt_51_set.insert("1594135358");
    Instrmt_51.add_attribute("NTPosLmt", "624782202"); // 1
    Instrmt_51_set.insert("624782202");
    Instrmt_51.add_attribute("Issr", "Issuer_t_1368390805"); // 1
    Instrmt_51_set.insert("Issuer_t_1368390805");
    Instrmt_51.add_attribute("EncIssrLen", "536834065"); // 1
    Instrmt_51_set.insert("536834065");
    Instrmt_51.add_attribute("EncIssr", "EncodedIssuer_t_1327594081"); // 1
    Instrmt_51_set.insert("EncodedIssuer_t_1327594081");
    Instrmt_51.add_attribute("Desc", "SecurityDesc_t_1671025661"); // 1
    Instrmt_51_set.insert("SecurityDesc_t_1671025661");
    Instrmt_51.add_attribute("EncSecDescLen", "1506841408"); // 1
    Instrmt_51_set.insert("1506841408");
    Instrmt_51.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_430756691"); // 1
    Instrmt_51_set.insert("EncodedSecurityDesc_t_430756691");
    Instrmt_51.add_attribute("Pool", "Pool_t_171740516"); // 1
    Instrmt_51_set.insert("Pool_t_171740516");
    Instrmt_51.add_attribute("CSetMo", "855893178"); // 1
    Instrmt_51_set.insert("855893178");
    Instrmt_51.add_attribute("CPPgm", "1"); // 1
    Instrmt_51_set.insert("1");
    Instrmt_51.add_attribute("CPRegT", "CPRegType_t_374072445"); // 1
    Instrmt_51_set.insert("CPRegType_t_374072445");
    Instrmt_51.add_attribute("Dated", "DatedDate_t_1473391482"); // 1
    Instrmt_51_set.insert("DatedDate_t_1473391482");
    Instrmt_51.add_attribute("IntAcrl", "InterestAccrualDate_t_1011739243"); // 1
    Instrmt_51_set.insert("InterestAccrualDate_t_1011739243");
    all_values.push_back(Instrmt_51_set);
    all_compo_names.insert("Instrmt_51_set");

    {
      xml_element AID_54{"AID"};
      multiset<string> AID_54_set;
      AID_54.add_attribute("AltID", "SecurityAltID_t_1991252051"); // 2
      AID_54_set.insert("SecurityAltID_t_1991252051");
      AID_54.add_attribute("AltIDSrc", "G"); // 2
      AID_54_set.insert("G");
      all_values.push_back(AID_54_set);
      all_compo_names.insert("AID_54_set");

      Instrmt_51.add_element(AID_54);
    }
    {
      xml_element SecXML_54{"SecXML"};
      multiset<string> SecXML_54_set;
      SecXML_54.add_attribute("Schema", "SecurityXMLSchema_t_1500670216"); // 2
      SecXML_54_set.insert("SecurityXMLSchema_t_1500670216");
      all_values.push_back(SecXML_54_set);
      all_compo_names.insert("SecXML_54_set");

      Instrmt_51.add_element(SecXML_54);
    }
    {
      xml_element Evnt_54{"Evnt"};
      multiset<string> Evnt_54_set;
      Evnt_54.add_attribute("EventTyp", "1"); // 2
      Evnt_54_set.insert("1");
      Evnt_54.add_attribute("Dt", "EventDate_t_572762810"); // 2
      Evnt_54_set.insert("EventDate_t_572762810");
      Evnt_54.add_attribute("Tm", "EventTime_t_1895001469"); // 2
      Evnt_54_set.insert("EventTime_t_1895001469");
      Evnt_54.add_attribute("Px", "13714958.080000"); // 2
      Evnt_54_set.insert("13714958.080000");
      Evnt_54.add_attribute("Txt", "EventText_t_1474992892"); // 2
      Evnt_54_set.insert("EventText_t_1474992892");
      all_values.push_back(Evnt_54_set);
      all_compo_names.insert("Evnt_54_set");

      Instrmt_51.add_element(Evnt_54);
    }
    {
      xml_element Pty_291{"Pty"};
      multiset<string> Pty_291_set;
      Pty_291.add_attribute("ID", "InstrumentPartyID_t_807158663"); // 2
      Pty_291_set.insert("InstrumentPartyID_t_807158663");
      Pty_291.add_attribute("Src", "2"); // 2
      Pty_291_set.insert("2");
      Pty_291.add_attribute("R", "28"); // 2
      Pty_291_set.insert("28");
      all_values.push_back(Pty_291_set);
      all_compo_names.insert("Pty_291_set");

      {
        xml_element Sub_291{"Sub"};
        multiset<string> Sub_291_set;
        Sub_291.add_attribute("ID", "InstrumentPartySubID_t_1490115594"); // 3
        Sub_291_set.insert("InstrumentPartySubID_t_1490115594");
        Sub_291.add_attribute("Typ", "12"); // 3
        Sub_291_set.insert("12");
        all_values.push_back(Sub_291_set);
        all_compo_names.insert("Sub_291_set");

        Pty_291.add_element(Sub_291);
      }
      Instrmt_51.add_element(Pty_291);
    }
    {
      xml_element CmplxEvnt_51{"CmplxEvnt"};
      multiset<string> CmplxEvnt_51_set;
      CmplxEvnt_51.add_attribute("Typ", "3"); // 2
      CmplxEvnt_51_set.insert("3");
      CmplxEvnt_51.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1907414057"); // 2
      CmplxEvnt_51_set.insert("ComplexOptPayoutAmount_t_1907414057");
      CmplxEvnt_51.add_attribute("Px", "17828028.250000"); // 2
      CmplxEvnt_51_set.insert("17828028.250000");
      CmplxEvnt_51.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_51_set.insert("2");
      CmplxEvnt_51.add_attribute("PxBndryPrcsn", "13540657.680000"); // 2
      CmplxEvnt_51_set.insert("13540657.680000");
      CmplxEvnt_51.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_51_set.insert("3");
      CmplxEvnt_51.add_attribute("Cond", "1"); // 2
      CmplxEvnt_51_set.insert("1");
      all_values.push_back(CmplxEvnt_51_set);
      all_compo_names.insert("CmplxEvnt_51_set");

      {
        xml_element EvntDts_51{"EvntDts"};
        multiset<string> EvntDts_51_set;
        EvntDts_51.add_attribute("StartDt", "ComplexEventStartDate_t_1890899833"); // 3
        EvntDts_51_set.insert("ComplexEventStartDate_t_1890899833");
        EvntDts_51.add_attribute("EndDt", "ComplexEventEndDate_t_1587695460"); // 3
        EvntDts_51_set.insert("ComplexEventEndDate_t_1587695460");
        all_values.push_back(EvntDts_51_set);
        all_compo_names.insert("EvntDts_51_set");

        {
          xml_element EvntTms_51{"EvntTms"};
          multiset<string> EvntTms_51_set;
          EvntTms_51.add_attribute("StartTm", "256150497"); // 4
          EvntTms_51_set.insert("256150497");
          EvntTms_51.add_attribute("EndTm", "1250257593"); // 4
          EvntTms_51_set.insert("1250257593");
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
    xml_element Undly_72{"Undly"};
    multiset<string> Undly_72_set;
    Undly_72.add_attribute("Sym", "UnderlyingSymbol_t_2018452152"); // 1
    Undly_72_set.insert("UnderlyingSymbol_t_2018452152");
    Undly_72.add_attribute("Sfx", "WI"); // 1
    Undly_72_set.insert("WI");
    Undly_72.add_attribute("ID", "UnderlyingSecurityID_t_2106150771"); // 1
    Undly_72_set.insert("UnderlyingSecurityID_t_2106150771");
    Undly_72.add_attribute("Src", "1"); // 1
    Undly_72_set.insert("1");
    Undly_72.add_attribute("Prod", "7"); // 1
    Undly_72_set.insert("7");
    Undly_72.add_attribute("CFI", "UnderlyingCFICode_t_1432058605"); // 1
    Undly_72_set.insert("UnderlyingCFICode_t_1432058605");
    Undly_72.add_attribute("SecTyp", "TBILL"); // 1
    Undly_72_set.insert("TBILL");
    Undly_72.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_645731861"); // 1
    Undly_72_set.insert("UnderlyingSecuritySubType_t_645731861");
    Undly_72.add_attribute("MMY", "1342878385"); // 1
    Undly_72_set.insert("1342878385");
    Undly_72.add_attribute("Mat", "UnderlyingMaturityDate_t_524806874"); // 1
    Undly_72_set.insert("UnderlyingMaturityDate_t_524806874");
    Undly_72.add_attribute("MatTm", "411325013"); // 1
    Undly_72_set.insert("411325013");
    Undly_72.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1915641195"); // 1
    Undly_72_set.insert("UnderlyingCouponPaymentDate_t_1915641195");
    Undly_72.add_attribute("RestrctTyp", "XR"); // 1
    Undly_72_set.insert("XR");
    Undly_72.add_attribute("Snrty", "SR"); // 1
    Undly_72_set.insert("SR");
    Undly_72.add_attribute("NotlPctOut", "12431504.390000"); // 1
    Undly_72_set.insert("12431504.390000");
    Undly_72.add_attribute("OrigNotlPctOut", "10794833.590000"); // 1
    Undly_72_set.insert("10794833.590000");
    Undly_72.add_attribute("AttchPnt", "2251379.910000"); // 1
    Undly_72_set.insert("2251379.910000");
    Undly_72.add_attribute("DetchPnt", "18630691.980000"); // 1
    Undly_72_set.insert("18630691.980000");
    Undly_72.add_attribute("Issued", "UnderlyingIssueDate_t_422115305"); // 1
    Undly_72_set.insert("UnderlyingIssueDate_t_422115305");
    Undly_72.add_attribute("RepoCollSecTyp", "145309640"); // 1
    Undly_72_set.insert("145309640");
    Undly_72.add_attribute("RepoTrm", "1278103650"); // 1
    Undly_72_set.insert("1278103650");
    Undly_72.add_attribute("RepoRt", "1820457.150000"); // 1
    Undly_72_set.insert("1820457.150000");
    Undly_72.add_attribute("Fctr", "19281124.650000"); // 1
    Undly_72_set.insert("19281124.650000");
    Undly_72.add_attribute("CrdRtg", "UnderlyingCreditRating_t_642321329"); // 1
    Undly_72_set.insert("UnderlyingCreditRating_t_642321329");
    Undly_72.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1536111483"); // 1
    Undly_72_set.insert("UnderlyingInstrRegistry_t_1536111483");
    Undly_72.add_attribute("Ctry", "40730197"); // 1
    Undly_72_set.insert("40730197");
    Undly_72.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1374929813"); // 1
    Undly_72_set.insert("UnderlyingStateOrProvinceOfIssue_t_1374929813");
    Undly_72.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1279527668"); // 1
    Undly_72_set.insert("UnderlyingLocaleOfIssue_t_1279527668");
    Undly_72.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1628425657"); // 1
    Undly_72_set.insert("UnderlyingRedemptionDate_t_1628425657");
    Undly_72.add_attribute("StrkPx", "16310803.100000"); // 1
    Undly_72_set.insert("16310803.100000");
    Undly_72.add_attribute("StrkCcy", "CAN"); // 1
    Undly_72_set.insert("CAN");
    Undly_72.add_attribute("OptA", "2058971324"); // 1
    Undly_72_set.insert("2058971324");
    Undly_72.add_attribute("Mult", "3409687.360000"); // 1
    Undly_72_set.insert("3409687.360000");
    Undly_72.add_attribute("MultTyp", "0"); // 1
    Undly_72_set.insert("0");
    Undly_72.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_72_set.insert("4");
    Undly_72.add_attribute("UOM", "lbs"); // 1
    Undly_72_set.insert("lbs");
    Undly_72.add_attribute("UOMQty", "6834118.810000"); // 1
    Undly_72_set.insert("6834118.810000");
    Undly_72.add_attribute("PxUOM", "Bbl"); // 1
    Undly_72_set.insert("Bbl");
    Undly_72.add_attribute("PxUOMQty", "9684220.780000"); // 1
    Undly_72_set.insert("9684220.780000");
    Undly_72.add_attribute("TmUnit", "H"); // 1
    Undly_72_set.insert("H");
    Undly_72.add_attribute("ExerStyle", "1"); // 1
    Undly_72_set.insert("1");
    Undly_72.add_attribute("CpnRt", "7365796.260000"); // 1
    Undly_72_set.insert("7365796.260000");
    Undly_72.add_attribute("Exch", "UnderlyingSecurityExchange_t_1480543450"); // 1
    Undly_72_set.insert("UnderlyingSecurityExchange_t_1480543450");
    Undly_72.add_attribute("Issr", "UnderlyingIssuer_t_1405845183"); // 1
    Undly_72_set.insert("UnderlyingIssuer_t_1405845183");
    Undly_72.add_attribute("EncUndIssrLen", "1979730065"); // 1
    Undly_72_set.insert("1979730065");
    Undly_72.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_412543161"); // 1
    Undly_72_set.insert("EncodedUnderlyingIssuer_t_412543161");
    Undly_72.add_attribute("Desc", "UnderlyingSecurityDesc_t_1630983175"); // 1
    Undly_72_set.insert("UnderlyingSecurityDesc_t_1630983175");
    Undly_72.add_attribute("EncUndSecDescLen", "1695315616"); // 1
    Undly_72_set.insert("1695315616");
    Undly_72.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_834658467"); // 1
    Undly_72_set.insert("EncodedUnderlyingSecurityDesc_t_834658467");
    Undly_72.add_attribute("CPPgm", "UnderlyingCPProgram_t_1776292815"); // 1
    Undly_72_set.insert("UnderlyingCPProgram_t_1776292815");
    Undly_72.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_825935618"); // 1
    Undly_72_set.insert("UnderlyingCPRegType_t_825935618");
    Undly_72.add_attribute("AllocPct", "10167041.820000"); // 1
    Undly_72_set.insert("10167041.820000");
    Undly_72.add_attribute("Ccy", "EUR"); // 1
    Undly_72_set.insert("EUR");
    Undly_72.add_attribute("Qty", "4053320.170000"); // 1
    Undly_72_set.insert("4053320.170000");
    Undly_72.add_attribute("SettlTyp", "5"); // 1
    Undly_72_set.insert("5");
    Undly_72.add_attribute("CashAmt", "UnderlyingCashAmount_t_695703112"); // 1
    Undly_72_set.insert("UnderlyingCashAmount_t_695703112");
    Undly_72.add_attribute("CashTyp", "DIFF"); // 1
    Undly_72_set.insert("DIFF");
    Undly_72.add_attribute("Px", "10785938.390000"); // 1
    Undly_72_set.insert("10785938.390000");
    Undly_72.add_attribute("DirtPx", "1792997.750000"); // 1
    Undly_72_set.insert("1792997.750000");
    Undly_72.add_attribute("EndPx", "20671612.980000"); // 1
    Undly_72_set.insert("20671612.980000");
    Undly_72.add_attribute("StartVal", "UnderlyingStartValue_t_430504352"); // 1
    Undly_72_set.insert("UnderlyingStartValue_t_430504352");
    Undly_72.add_attribute("CurVal", "UnderlyingCurrentValue_t_90787451"); // 1
    Undly_72_set.insert("UnderlyingCurrentValue_t_90787451");
    Undly_72.add_attribute("EndVal", "UnderlyingEndValue_t_260646386"); // 1
    Undly_72_set.insert("UnderlyingEndValue_t_260646386");
    Undly_72.add_attribute("AdjQty", "20897795.760000"); // 1
    Undly_72_set.insert("20897795.760000");
    Undly_72.add_attribute("FxRate", "8042385.850000"); // 1
    Undly_72_set.insert("8042385.850000");
    Undly_72.add_attribute("FxRateCalc", "D"); // 1
    Undly_72_set.insert("D");
    Undly_72.add_attribute("CapValu", "UnderlyingCapValue_t_625707809"); // 1
    Undly_72_set.insert("UnderlyingCapValue_t_625707809");
    Undly_72.add_attribute("SetMeth", "UnderlyingSettlMethod_t_15937933"); // 1
    Undly_72_set.insert("UnderlyingSettlMethod_t_15937933");
    Undly_72.add_attribute("PutCall", "854612158"); // 1
    Undly_72_set.insert("854612158");
    all_values.push_back(Undly_72_set);
    all_compo_names.insert("Undly_72_set");

    {
      xml_element UndAID_72{"UndAID"};
      multiset<string> UndAID_72_set;
      UndAID_72.add_attribute("AltID", "UnderlyingSecurityAltID_t_1833926564"); // 2
      UndAID_72_set.insert("UnderlyingSecurityAltID_t_1833926564");
      UndAID_72.add_attribute("AltIDSrc", "8"); // 2
      UndAID_72_set.insert("8");
      all_values.push_back(UndAID_72_set);
      all_compo_names.insert("UndAID_72_set");

      Undly_72.add_element(UndAID_72);
    }
    {
      xml_element Stip_108{"Stip"};
      multiset<string> Stip_108_set;
      Stip_108.add_attribute("Typ", "MHP"); // 2
      Stip_108_set.insert("MHP");
      Stip_108.add_attribute("Val", "UnderlyingStipValue_t_1166986366"); // 2
      Stip_108_set.insert("UnderlyingStipValue_t_1166986366");
      all_values.push_back(Stip_108_set);
      all_compo_names.insert("Stip_108_set");

      Undly_72.add_element(Stip_108);
    }
    {
      xml_element Pty_292{"Pty"};
      multiset<string> Pty_292_set;
      Pty_292.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1044807478"); // 2
      Pty_292_set.insert("UnderlyingInstrumentPartyID_t_1044807478");
      Pty_292.add_attribute("Src", "2"); // 2
      Pty_292_set.insert("2");
      Pty_292.add_attribute("R", "82"); // 2
      Pty_292_set.insert("82");
      all_values.push_back(Pty_292_set);
      all_compo_names.insert("Pty_292_set");

      {
        xml_element Sub_292{"Sub"};
        multiset<string> Sub_292_set;
        Sub_292.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_528307005"); // 3
        Sub_292_set.insert("UnderlyingInstrumentPartySubID_t_528307005");
        Sub_292.add_attribute("Typ", "20"); // 3
        Sub_292_set.insert("20");
        all_values.push_back(Sub_292_set);
        all_compo_names.insert("Sub_292_set");

        Pty_292.add_element(Sub_292);
      }
      Undly_72.add_element(Pty_292);
    }
    elt.add_element(Undly_72);
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
