#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassActionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassActionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassActRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionReport_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_709084111"); // 0
  OrderMassActionReport_message_t_0.insert("ClOrdID_t_709084111");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_410742052"); // 0
  OrderMassActionReport_message_t_0.insert("SecondaryClOrdID_t_410742052");
  elt.add_attribute("MassActionReportID", "MassActionReportID_t_226497833"); // 0
  OrderMassActionReport_message_t_0.insert("MassActionReportID_t_226497833");
  elt.add_attribute("MassActionType", "3"); // 0
  OrderMassActionReport_message_t_0.insert("3");
  elt.add_attribute("MassActionScope", "10"); // 0
  OrderMassActionReport_message_t_0.insert("10");
  elt.add_attribute("MassActionResponse", "1"); // 0
  OrderMassActionReport_message_t_0.insert("1");
  elt.add_attribute("MassActionRejectReason", "6"); // 0
  OrderMassActionReport_message_t_0.insert("6");
  elt.add_attribute("TotAffctdOrds", "1110706959"); // 0
  OrderMassActionReport_message_t_0.insert("1110706959");
  elt.add_attribute("MktID", "MarketID_t_1997507000"); // 0
  OrderMassActionReport_message_t_0.insert("MarketID_t_1997507000");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_435947450"); // 0
  OrderMassActionReport_message_t_0.insert("MarketSegmentID_t_435947450");
  elt.add_attribute("SesID", "2"); // 0
  OrderMassActionReport_message_t_0.insert("2");
  elt.add_attribute("SesSub", "6"); // 0
  OrderMassActionReport_message_t_0.insert("6");
  elt.add_attribute("Side", "2"); // 0
  OrderMassActionReport_message_t_0.insert("2");
  elt.add_attribute("TxnTm", "TransactTime_t_1976618162"); // 0
  OrderMassActionReport_message_t_0.insert("TransactTime_t_1976618162");
  elt.add_attribute("Txt", "Text_t_310020773"); // 0
  OrderMassActionReport_message_t_0.insert("Text_t_310020773");
  elt.add_attribute("EncTxtLen", "38141529"); // 0
  OrderMassActionReport_message_t_0.insert("38141529");
  elt.add_attribute("EncTxt", "EncodedText_t_561415996"); // 0
  OrderMassActionReport_message_t_0.insert("EncodedText_t_561415996");
  all_values.push_back(OrderMassActionReport_message_t_0);
  all_compo_names.insert("OrderMassActionReport_message_t");

  { // Hdr
    xml_element Hdr_59{"Hdr"};
    multiset<string> Hdr_59_set;
    Hdr_59.add_attribute("SeqNum", "2016619876"); // 1
    Hdr_59_set.insert("2016619876");
    Hdr_59.add_attribute("SID", "SenderCompID_t_1391191257"); // 1
    Hdr_59_set.insert("SenderCompID_t_1391191257");
    Hdr_59.add_attribute("TID", "TargetCompID_t_1616561923"); // 1
    Hdr_59_set.insert("TargetCompID_t_1616561923");
    Hdr_59.add_attribute("OBID", "OnBehalfOfCompID_t_1198299408"); // 1
    Hdr_59_set.insert("OnBehalfOfCompID_t_1198299408");
    Hdr_59.add_attribute("D2ID", "DeliverToCompID_t_840720495"); // 1
    Hdr_59_set.insert("DeliverToCompID_t_840720495");
    Hdr_59.add_attribute("SSub", "SenderSubID_t_1215265570"); // 1
    Hdr_59_set.insert("SenderSubID_t_1215265570");
    Hdr_59.add_attribute("SLoc", "SenderLocationID_t_155532207"); // 1
    Hdr_59_set.insert("SenderLocationID_t_155532207");
    Hdr_59.add_attribute("TSub", "TargetSubID_t_856135802"); // 1
    Hdr_59_set.insert("TargetSubID_t_856135802");
    Hdr_59.add_attribute("TLoc", "TargetLocationID_t_2145908143"); // 1
    Hdr_59_set.insert("TargetLocationID_t_2145908143");
    Hdr_59.add_attribute("OBSub", "OnBehalfOfSubID_t_283469341"); // 1
    Hdr_59_set.insert("OnBehalfOfSubID_t_283469341");
    Hdr_59.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2032615587"); // 1
    Hdr_59_set.insert("OnBehalfOfLocationID_t_2032615587");
    Hdr_59.add_attribute("D2Sub", "DeliverToSubID_t_353762597"); // 1
    Hdr_59_set.insert("DeliverToSubID_t_353762597");
    Hdr_59.add_attribute("D2Loc", "DeliverToLocationID_t_1079678077"); // 1
    Hdr_59_set.insert("DeliverToLocationID_t_1079678077");
    Hdr_59.add_attribute("PosDup", "N"); // 1
    Hdr_59_set.insert("N");
    Hdr_59.add_attribute("PosRsnd", "N"); // 1
    Hdr_59_set.insert("N");
    Hdr_59.add_attribute("Snt", "SendingTime_t_1490420129"); // 1
    Hdr_59_set.insert("SendingTime_t_1490420129");
    Hdr_59.add_attribute("OrigSnt", "OrigSendingTime_t_15249783"); // 1
    Hdr_59_set.insert("OrigSendingTime_t_15249783");
    Hdr_59.add_attribute("MsgEncd", "MessageEncoding_t_1998060296"); // 1
    Hdr_59_set.insert("MessageEncoding_t_1998060296");
    all_values.push_back(Hdr_59_set);
    all_compo_names.insert("Hdr_59_set");

    {
      xml_element Hop_59{"Hop"};
      multiset<string> Hop_59_set;
      Hop_59.add_attribute("ID", "HopCompID_t_1515257054"); // 2
      Hop_59_set.insert("HopCompID_t_1515257054");
      Hop_59.add_attribute("Ref", "2116254309"); // 2
      Hop_59_set.insert("2116254309");
      Hop_59.add_attribute("Snt", "HopSendingTime_t_1635565211"); // 2
      Hop_59_set.insert("HopSendingTime_t_1635565211");
      all_values.push_back(Hop_59_set);
      all_compo_names.insert("Hop_59_set");

      Hdr_59.add_element(Hop_59);
    }
    elt.add_element(Hdr_59);
  } // end Hdr
  { // AffectOrd
    xml_element AffectOrd_0{"AffectOrd"};
    multiset<string> AffectOrd_0_set;
    AffectOrd_0.add_attribute("OrigID", "OrigClOrdID_t_1966277661"); // 1
    AffectOrd_0_set.insert("OrigClOrdID_t_1966277661");
    AffectOrd_0.add_attribute("AffctdOrdID", "AffectedOrderID_t_2071512661"); // 1
    AffectOrd_0_set.insert("AffectedOrderID_t_2071512661");
    AffectOrd_0.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_1155836219"); // 1
    AffectOrd_0_set.insert("AffectedSecondaryOrderID_t_1155836219");
    all_values.push_back(AffectOrd_0_set);
    all_compo_names.insert("AffectOrd_0_set");

    elt.add_element(AffectOrd_0);
  } // end AffectOrd
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_0{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_0_set;
    NotAffectedOrdersGrp_0.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_1095283863"); // 1
    NotAffectedOrdersGrp_0_set.insert("NotAffOrigClOrdID_t_1095283863");
    NotAffectedOrdersGrp_0.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_984970733"); // 1
    NotAffectedOrdersGrp_0_set.insert("NotAffectedOrderID_t_984970733");
    all_values.push_back(NotAffectedOrdersGrp_0_set);
    all_compo_names.insert("NotAffectedOrdersGrp_0_set");

    elt.add_element(NotAffectedOrdersGrp_0);
  } // end NotAffectedOrdersGrp
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_1{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_1_set;
    NotAffectedOrdersGrp_1.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_663084660"); // 1
    NotAffectedOrdersGrp_1_set.insert("NotAffOrigClOrdID_t_663084660");
    NotAffectedOrdersGrp_1.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_1133425392"); // 1
    NotAffectedOrdersGrp_1_set.insert("NotAffectedOrderID_t_1133425392");
    all_values.push_back(NotAffectedOrdersGrp_1_set);
    all_compo_names.insert("NotAffectedOrdersGrp_1_set");

    elt.add_element(NotAffectedOrdersGrp_1);
  } // end NotAffectedOrdersGrp
  { // Pty
    xml_element Pty_248{"Pty"};
    multiset<string> Pty_248_set;
    Pty_248.add_attribute("ID", "PartyID_t_532220888"); // 1
    Pty_248_set.insert("PartyID_t_532220888");
    Pty_248.add_attribute("Src", "8"); // 1
    Pty_248_set.insert("8");
    Pty_248.add_attribute("R", "17"); // 1
    Pty_248_set.insert("17");
    all_values.push_back(Pty_248_set);
    all_compo_names.insert("Pty_248_set");

    {
      xml_element Sub_248{"Sub"};
      multiset<string> Sub_248_set;
      Sub_248.add_attribute("ID", "PartySubID_t_1730520296"); // 2
      Sub_248_set.insert("PartySubID_t_1730520296");
      Sub_248.add_attribute("Typ", "21"); // 2
      Sub_248_set.insert("21");
      all_values.push_back(Sub_248_set);
      all_compo_names.insert("Sub_248_set");

      Pty_248.add_element(Sub_248);
    }
    elt.add_element(Pty_248);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_2{"TgtPty"};
    multiset<string> TgtPty_2_set;
    TgtPty_2.add_attribute("ID", "TargetPartyID_t_1886052504"); // 1
    TgtPty_2_set.insert("TargetPartyID_t_1886052504");
    TgtPty_2.add_attribute("Src", "E"); // 1
    TgtPty_2_set.insert("E");
    TgtPty_2.add_attribute("R", "71"); // 1
    TgtPty_2_set.insert("71");
    all_values.push_back(TgtPty_2_set);
    all_compo_names.insert("TgtPty_2_set");

    elt.add_element(TgtPty_2);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_3{"TgtPty"};
    multiset<string> TgtPty_3_set;
    TgtPty_3.add_attribute("ID", "TargetPartyID_t_22038197"); // 1
    TgtPty_3_set.insert("TargetPartyID_t_22038197");
    TgtPty_3.add_attribute("Src", "F"); // 1
    TgtPty_3_set.insert("F");
    TgtPty_3.add_attribute("R", "34"); // 1
    TgtPty_3_set.insert("34");
    all_values.push_back(TgtPty_3_set);
    all_compo_names.insert("TgtPty_3_set");

    elt.add_element(TgtPty_3);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_47{"Instrmt"};
    multiset<string> Instrmt_47_set;
    Instrmt_47.add_attribute("Sym", "Symbol_t_1101716274"); // 1
    Instrmt_47_set.insert("Symbol_t_1101716274");
    Instrmt_47.add_attribute("Sfx", "CD"); // 1
    Instrmt_47_set.insert("CD");
    Instrmt_47.add_attribute("ID", "SecurityID_t_1498280726"); // 1
    Instrmt_47_set.insert("SecurityID_t_1498280726");
    Instrmt_47.add_attribute("Src", "L"); // 1
    Instrmt_47_set.insert("L");
    Instrmt_47.add_attribute("Prod", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("ProdCmplx", "ProductComplex_t_1348857374"); // 1
    Instrmt_47_set.insert("ProductComplex_t_1348857374");
    Instrmt_47.add_attribute("SecGrp", "SecurityGroup_t_1959909810"); // 1
    Instrmt_47_set.insert("SecurityGroup_t_1959909810");
    Instrmt_47.add_attribute("CFI", "CFICode_t_1731893633"); // 1
    Instrmt_47_set.insert("CFICode_t_1731893633");
    Instrmt_47.add_attribute("SecTyp", "BDN"); // 1
    Instrmt_47_set.insert("BDN");
    Instrmt_47.add_attribute("SubTyp", "SecuritySubType_t_290906527"); // 1
    Instrmt_47_set.insert("SecuritySubType_t_290906527");
    Instrmt_47.add_attribute("MMY", "1550687646"); // 1
    Instrmt_47_set.insert("1550687646");
    Instrmt_47.add_attribute("MatDt", "MaturityDate_t_760967951"); // 1
    Instrmt_47_set.insert("MaturityDate_t_760967951");
    Instrmt_47.add_attribute("MatTm", "1446742746"); // 1
    Instrmt_47_set.insert("1446742746");
    Instrmt_47.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1903751534"); // 1
    Instrmt_47_set.insert("SettleOnOpenFlag_t_1903751534");
    Instrmt_47.add_attribute("AsgnMeth", "1856251814"); // 1
    Instrmt_47_set.insert("1856251814");
    Instrmt_47.add_attribute("Status", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("CpnPmt", "CouponPaymentDate_t_419352546"); // 1
    Instrmt_47_set.insert("CouponPaymentDate_t_419352546");
    Instrmt_47.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_47_set.insert("MM");
    Instrmt_47.add_attribute("Snrty", "SD"); // 1
    Instrmt_47_set.insert("SD");
    Instrmt_47.add_attribute("NotlPctOut", "9515734.350000"); // 1
    Instrmt_47_set.insert("9515734.350000");
    Instrmt_47.add_attribute("OrigNotlPctOut", "12193265.590000"); // 1
    Instrmt_47_set.insert("12193265.590000");
    Instrmt_47.add_attribute("AttchPnt", "6985979.160000"); // 1
    Instrmt_47_set.insert("6985979.160000");
    Instrmt_47.add_attribute("DetchPnt", "5346100.830000"); // 1
    Instrmt_47_set.insert("5346100.830000");
    Instrmt_47.add_attribute("Issued", "IssueDate_t_289696407"); // 1
    Instrmt_47_set.insert("IssueDate_t_289696407");
    Instrmt_47.add_attribute("RepoCollSecTyp", "781844842"); // 1
    Instrmt_47_set.insert("781844842");
    Instrmt_47.add_attribute("RepoTrm", "273178939"); // 1
    Instrmt_47_set.insert("273178939");
    Instrmt_47.add_attribute("RepoRt", "2162020.580000"); // 1
    Instrmt_47_set.insert("2162020.580000");
    Instrmt_47.add_attribute("Fctr", "8635162.630000"); // 1
    Instrmt_47_set.insert("8635162.630000");
    Instrmt_47.add_attribute("CrdRtg", "CreditRating_t_295217137"); // 1
    Instrmt_47_set.insert("CreditRating_t_295217137");
    Instrmt_47.add_attribute("Rgstry", "InstrRegistry_t_27839648"); // 1
    Instrmt_47_set.insert("InstrRegistry_t_27839648");
    Instrmt_47.add_attribute("IssuCtry", "1298950281"); // 1
    Instrmt_47_set.insert("1298950281");
    Instrmt_47.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1396933411"); // 1
    Instrmt_47_set.insert("StateOrProvinceOfIssue_t_1396933411");
    Instrmt_47.add_attribute("Lcl", "LocaleOfIssue_t_1775712837"); // 1
    Instrmt_47_set.insert("LocaleOfIssue_t_1775712837");
    Instrmt_47.add_attribute("Redeem", "RedemptionDate_t_649747359"); // 1
    Instrmt_47_set.insert("RedemptionDate_t_649747359");
    Instrmt_47.add_attribute("StrkPx", "18415861.670000"); // 1
    Instrmt_47_set.insert("18415861.670000");
    Instrmt_47.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_47_set.insert("USD");
    Instrmt_47.add_attribute("StrkMult", "16540123.290000"); // 1
    Instrmt_47_set.insert("16540123.290000");
    Instrmt_47.add_attribute("StrkValu", "9757621.460000"); // 1
    Instrmt_47_set.insert("9757621.460000");
    Instrmt_47.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_47_set.insert("4");
    Instrmt_47.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("StrkPxBndryPrcsn", "3789661.440000"); // 1
    Instrmt_47_set.insert("3789661.440000");
    Instrmt_47.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_47_set.insert("3");
    Instrmt_47.add_attribute("OptAt", "1244177955"); // 1
    Instrmt_47_set.insert("1244177955");
    Instrmt_47.add_attribute("Mult", "1352340.300000"); // 1
    Instrmt_47_set.insert("1352340.300000");
    Instrmt_47.add_attribute("MultTyp", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("MinPxIncr", "5545865.770000"); // 1
    Instrmt_47_set.insert("5545865.770000");
    Instrmt_47.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1999989698"); // 1
    Instrmt_47_set.insert("MinPriceIncrementAmount_t_1999989698");
    Instrmt_47.add_attribute("UOM", "tn"); // 1
    Instrmt_47_set.insert("tn");
    Instrmt_47.add_attribute("UOMQty", "15061600.120000"); // 1
    Instrmt_47_set.insert("15061600.120000");
    Instrmt_47.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_47_set.insert("Gal");
    Instrmt_47.add_attribute("PxUOMQty", "19101386.150000"); // 1
    Instrmt_47_set.insert("19101386.150000");
    Instrmt_47.add_attribute("SettlMeth", "P"); // 1
    Instrmt_47_set.insert("P");
    Instrmt_47.add_attribute("ExerStyle", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_47_set.insert("3");
    Instrmt_47.add_attribute("OptPayAmt", "OptPayoutAmount_t_166465387"); // 1
    Instrmt_47_set.insert("OptPayoutAmount_t_166465387");
    Instrmt_47.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_47_set.insert("PCTPAR");
    Instrmt_47.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_47_set.insert("CDS");
    Instrmt_47.add_attribute("ListMeth", "0"); // 1
    Instrmt_47_set.insert("0");
    Instrmt_47.add_attribute("CapPx", "16055707.240000"); // 1
    Instrmt_47_set.insert("16055707.240000");
    Instrmt_47.add_attribute("FlrPx", "5594827.070000"); // 1
    Instrmt_47_set.insert("5594827.070000");
    Instrmt_47.add_attribute("PutCall", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("FlexInd", "false"); // 1
    Instrmt_47_set.insert("false");
    Instrmt_47.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_47_set.insert("true");
    Instrmt_47.add_attribute("TmUnit", "S"); // 1
    Instrmt_47_set.insert("S");
    Instrmt_47.add_attribute("CpnRt", "4776684.260000"); // 1
    Instrmt_47_set.insert("4776684.260000");
    Instrmt_47.add_attribute("Exch", "SecurityExchange_t_1060351152"); // 1
    Instrmt_47_set.insert("SecurityExchange_t_1060351152");
    Instrmt_47.add_attribute("PosLmt", "1059247135"); // 1
    Instrmt_47_set.insert("1059247135");
    Instrmt_47.add_attribute("NTPosLmt", "1453430572"); // 1
    Instrmt_47_set.insert("1453430572");
    Instrmt_47.add_attribute("Issr", "Issuer_t_1748411176"); // 1
    Instrmt_47_set.insert("Issuer_t_1748411176");
    Instrmt_47.add_attribute("EncIssrLen", "856682344"); // 1
    Instrmt_47_set.insert("856682344");
    Instrmt_47.add_attribute("EncIssr", "EncodedIssuer_t_1832396716"); // 1
    Instrmt_47_set.insert("EncodedIssuer_t_1832396716");
    Instrmt_47.add_attribute("Desc", "SecurityDesc_t_1049955502"); // 1
    Instrmt_47_set.insert("SecurityDesc_t_1049955502");
    Instrmt_47.add_attribute("EncSecDescLen", "2100860299"); // 1
    Instrmt_47_set.insert("2100860299");
    Instrmt_47.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1967630747"); // 1
    Instrmt_47_set.insert("EncodedSecurityDesc_t_1967630747");
    Instrmt_47.add_attribute("Pool", "Pool_t_60267995"); // 1
    Instrmt_47_set.insert("Pool_t_60267995");
    Instrmt_47.add_attribute("CSetMo", "1481784437"); // 1
    Instrmt_47_set.insert("1481784437");
    Instrmt_47.add_attribute("CPPgm", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("CPRegT", "CPRegType_t_2060257693"); // 1
    Instrmt_47_set.insert("CPRegType_t_2060257693");
    Instrmt_47.add_attribute("Dated", "DatedDate_t_545841488"); // 1
    Instrmt_47_set.insert("DatedDate_t_545841488");
    Instrmt_47.add_attribute("IntAcrl", "InterestAccrualDate_t_1880893688"); // 1
    Instrmt_47_set.insert("InterestAccrualDate_t_1880893688");
    all_values.push_back(Instrmt_47_set);
    all_compo_names.insert("Instrmt_47_set");

    {
      xml_element AID_50{"AID"};
      multiset<string> AID_50_set;
      AID_50.add_attribute("AltID", "SecurityAltID_t_984606655"); // 2
      AID_50_set.insert("SecurityAltID_t_984606655");
      AID_50.add_attribute("AltIDSrc", "5"); // 2
      AID_50_set.insert("5");
      all_values.push_back(AID_50_set);
      all_compo_names.insert("AID_50_set");

      Instrmt_47.add_element(AID_50);
    }
    {
      xml_element SecXML_50{"SecXML"};
      multiset<string> SecXML_50_set;
      SecXML_50.add_attribute("Schema", "SecurityXMLSchema_t_1774180135"); // 2
      SecXML_50_set.insert("SecurityXMLSchema_t_1774180135");
      all_values.push_back(SecXML_50_set);
      all_compo_names.insert("SecXML_50_set");

      Instrmt_47.add_element(SecXML_50);
    }
    {
      xml_element Evnt_50{"Evnt"};
      multiset<string> Evnt_50_set;
      Evnt_50.add_attribute("EventTyp", "99"); // 2
      Evnt_50_set.insert("99");
      Evnt_50.add_attribute("Dt", "EventDate_t_852996266"); // 2
      Evnt_50_set.insert("EventDate_t_852996266");
      Evnt_50.add_attribute("Tm", "EventTime_t_1940645522"); // 2
      Evnt_50_set.insert("EventTime_t_1940645522");
      Evnt_50.add_attribute("Px", "17763830.990000"); // 2
      Evnt_50_set.insert("17763830.990000");
      Evnt_50.add_attribute("Txt", "EventText_t_113528691"); // 2
      Evnt_50_set.insert("EventText_t_113528691");
      all_values.push_back(Evnt_50_set);
      all_compo_names.insert("Evnt_50_set");

      Instrmt_47.add_element(Evnt_50);
    }
    {
      xml_element Pty_249{"Pty"};
      multiset<string> Pty_249_set;
      Pty_249.add_attribute("ID", "InstrumentPartyID_t_254844398"); // 2
      Pty_249_set.insert("InstrumentPartyID_t_254844398");
      Pty_249.add_attribute("Src", "8"); // 2
      Pty_249_set.insert("8");
      Pty_249.add_attribute("R", "41"); // 2
      Pty_249_set.insert("41");
      all_values.push_back(Pty_249_set);
      all_compo_names.insert("Pty_249_set");

      {
        xml_element Sub_249{"Sub"};
        multiset<string> Sub_249_set;
        Sub_249.add_attribute("ID", "InstrumentPartySubID_t_2113460334"); // 3
        Sub_249_set.insert("InstrumentPartySubID_t_2113460334");
        Sub_249.add_attribute("Typ", "16"); // 3
        Sub_249_set.insert("16");
        all_values.push_back(Sub_249_set);
        all_compo_names.insert("Sub_249_set");

        Pty_249.add_element(Sub_249);
      }
      Instrmt_47.add_element(Pty_249);
    }
    {
      xml_element CmplxEvnt_47{"CmplxEvnt"};
      multiset<string> CmplxEvnt_47_set;
      CmplxEvnt_47.add_attribute("Typ", "6"); // 2
      CmplxEvnt_47_set.insert("6");
      CmplxEvnt_47.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1518695140"); // 2
      CmplxEvnt_47_set.insert("ComplexOptPayoutAmount_t_1518695140");
      CmplxEvnt_47.add_attribute("Px", "7984548.660000"); // 2
      CmplxEvnt_47_set.insert("7984548.660000");
      CmplxEvnt_47.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_47_set.insert("5");
      CmplxEvnt_47.add_attribute("PxBndryPrcsn", "4304586.280000"); // 2
      CmplxEvnt_47_set.insert("4304586.280000");
      CmplxEvnt_47.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_47_set.insert("3");
      CmplxEvnt_47.add_attribute("Cond", "2"); // 2
      CmplxEvnt_47_set.insert("2");
      all_values.push_back(CmplxEvnt_47_set);
      all_compo_names.insert("CmplxEvnt_47_set");

      {
        xml_element EvntDts_47{"EvntDts"};
        multiset<string> EvntDts_47_set;
        EvntDts_47.add_attribute("StartDt", "ComplexEventStartDate_t_1287140972"); // 3
        EvntDts_47_set.insert("ComplexEventStartDate_t_1287140972");
        EvntDts_47.add_attribute("EndDt", "ComplexEventEndDate_t_1936798507"); // 3
        EvntDts_47_set.insert("ComplexEventEndDate_t_1936798507");
        all_values.push_back(EvntDts_47_set);
        all_compo_names.insert("EvntDts_47_set");

        {
          xml_element EvntTms_47{"EvntTms"};
          multiset<string> EvntTms_47_set;
          EvntTms_47.add_attribute("StartTm", "1445992000"); // 4
          EvntTms_47_set.insert("1445992000");
          EvntTms_47.add_attribute("EndTm", "1240517623"); // 4
          EvntTms_47_set.insert("1240517623");
          all_values.push_back(EvntTms_47_set);
          all_compo_names.insert("EvntTms_47_set");

          EvntDts_47.add_element(EvntTms_47);
        }
        CmplxEvnt_47.add_element(EvntDts_47);
      }
      Instrmt_47.add_element(CmplxEvnt_47);
    }
    elt.add_element(Instrmt_47);
  } // end Instrmt
  { // Undly
    xml_element Undly_64{"Undly"};
    multiset<string> Undly_64_set;
    Undly_64.add_attribute("Sym", "UnderlyingSymbol_t_1756945606"); // 1
    Undly_64_set.insert("UnderlyingSymbol_t_1756945606");
    Undly_64.add_attribute("Sfx", "WI"); // 1
    Undly_64_set.insert("WI");
    Undly_64.add_attribute("ID", "UnderlyingSecurityID_t_574818412"); // 1
    Undly_64_set.insert("UnderlyingSecurityID_t_574818412");
    Undly_64.add_attribute("Src", "J"); // 1
    Undly_64_set.insert("J");
    Undly_64.add_attribute("Prod", "5"); // 1
    Undly_64_set.insert("5");
    Undly_64.add_attribute("CFI", "UnderlyingCFICode_t_1120659901"); // 1
    Undly_64_set.insert("UnderlyingCFICode_t_1120659901");
    Undly_64.add_attribute("SecTyp", "TPRN"); // 1
    Undly_64_set.insert("TPRN");
    Undly_64.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_256157047"); // 1
    Undly_64_set.insert("UnderlyingSecuritySubType_t_256157047");
    Undly_64.add_attribute("MMY", "1429156357"); // 1
    Undly_64_set.insert("1429156357");
    Undly_64.add_attribute("Mat", "UnderlyingMaturityDate_t_1491785809"); // 1
    Undly_64_set.insert("UnderlyingMaturityDate_t_1491785809");
    Undly_64.add_attribute("MatTm", "454809071"); // 1
    Undly_64_set.insert("454809071");
    Undly_64.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_134668975"); // 1
    Undly_64_set.insert("UnderlyingCouponPaymentDate_t_134668975");
    Undly_64.add_attribute("RestrctTyp", "FR"); // 1
    Undly_64_set.insert("FR");
    Undly_64.add_attribute("Snrty", "SD"); // 1
    Undly_64_set.insert("SD");
    Undly_64.add_attribute("NotlPctOut", "2481976.660000"); // 1
    Undly_64_set.insert("2481976.660000");
    Undly_64.add_attribute("OrigNotlPctOut", "15397920.820000"); // 1
    Undly_64_set.insert("15397920.820000");
    Undly_64.add_attribute("AttchPnt", "13181786.980000"); // 1
    Undly_64_set.insert("13181786.980000");
    Undly_64.add_attribute("DetchPnt", "9212090.650000"); // 1
    Undly_64_set.insert("9212090.650000");
    Undly_64.add_attribute("Issued", "UnderlyingIssueDate_t_1505768768"); // 1
    Undly_64_set.insert("UnderlyingIssueDate_t_1505768768");
    Undly_64.add_attribute("RepoCollSecTyp", "1638965139"); // 1
    Undly_64_set.insert("1638965139");
    Undly_64.add_attribute("RepoTrm", "655966882"); // 1
    Undly_64_set.insert("655966882");
    Undly_64.add_attribute("RepoRt", "8769802.610000"); // 1
    Undly_64_set.insert("8769802.610000");
    Undly_64.add_attribute("Fctr", "2899363.570000"); // 1
    Undly_64_set.insert("2899363.570000");
    Undly_64.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1451075851"); // 1
    Undly_64_set.insert("UnderlyingCreditRating_t_1451075851");
    Undly_64.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1307438889"); // 1
    Undly_64_set.insert("UnderlyingInstrRegistry_t_1307438889");
    Undly_64.add_attribute("Ctry", "394338148"); // 1
    Undly_64_set.insert("394338148");
    Undly_64.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1847112349"); // 1
    Undly_64_set.insert("UnderlyingStateOrProvinceOfIssue_t_1847112349");
    Undly_64.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_447096213"); // 1
    Undly_64_set.insert("UnderlyingLocaleOfIssue_t_447096213");
    Undly_64.add_attribute("Redeem", "UnderlyingRedemptionDate_t_183653007"); // 1
    Undly_64_set.insert("UnderlyingRedemptionDate_t_183653007");
    Undly_64.add_attribute("StrkPx", "11456207.010000"); // 1
    Undly_64_set.insert("11456207.010000");
    Undly_64.add_attribute("StrkCcy", "EUR"); // 1
    Undly_64_set.insert("EUR");
    Undly_64.add_attribute("OptA", "504397048"); // 1
    Undly_64_set.insert("504397048");
    Undly_64.add_attribute("Mult", "1149486.000000"); // 1
    Undly_64_set.insert("1149486.000000");
    Undly_64.add_attribute("MultTyp", "1"); // 1
    Undly_64_set.insert("1");
    Undly_64.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_64_set.insert("3");
    Undly_64.add_attribute("UOM", "Bcf"); // 1
    Undly_64_set.insert("Bcf");
    Undly_64.add_attribute("UOMQty", "16423999.210000"); // 1
    Undly_64_set.insert("16423999.210000");
    Undly_64.add_attribute("PxUOM", "MWh"); // 1
    Undly_64_set.insert("MWh");
    Undly_64.add_attribute("PxUOMQty", "5172812.100000"); // 1
    Undly_64_set.insert("5172812.100000");
    Undly_64.add_attribute("TmUnit", "H"); // 1
    Undly_64_set.insert("H");
    Undly_64.add_attribute("ExerStyle", "2"); // 1
    Undly_64_set.insert("2");
    Undly_64.add_attribute("CpnRt", "6519501.850000"); // 1
    Undly_64_set.insert("6519501.850000");
    Undly_64.add_attribute("Exch", "UnderlyingSecurityExchange_t_124166118"); // 1
    Undly_64_set.insert("UnderlyingSecurityExchange_t_124166118");
    Undly_64.add_attribute("Issr", "UnderlyingIssuer_t_570622082"); // 1
    Undly_64_set.insert("UnderlyingIssuer_t_570622082");
    Undly_64.add_attribute("EncUndIssrLen", "900147852"); // 1
    Undly_64_set.insert("900147852");
    Undly_64.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1663958201"); // 1
    Undly_64_set.insert("EncodedUnderlyingIssuer_t_1663958201");
    Undly_64.add_attribute("Desc", "UnderlyingSecurityDesc_t_1888800781"); // 1
    Undly_64_set.insert("UnderlyingSecurityDesc_t_1888800781");
    Undly_64.add_attribute("EncUndSecDescLen", "1821356917"); // 1
    Undly_64_set.insert("1821356917");
    Undly_64.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1022243321"); // 1
    Undly_64_set.insert("EncodedUnderlyingSecurityDesc_t_1022243321");
    Undly_64.add_attribute("CPPgm", "UnderlyingCPProgram_t_1380282272"); // 1
    Undly_64_set.insert("UnderlyingCPProgram_t_1380282272");
    Undly_64.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_329840151"); // 1
    Undly_64_set.insert("UnderlyingCPRegType_t_329840151");
    Undly_64.add_attribute("AllocPct", "18992235.820000"); // 1
    Undly_64_set.insert("18992235.820000");
    Undly_64.add_attribute("Ccy", "JPY"); // 1
    Undly_64_set.insert("JPY");
    Undly_64.add_attribute("Qty", "10591788.230000"); // 1
    Undly_64_set.insert("10591788.230000");
    Undly_64.add_attribute("SettlTyp", "4"); // 1
    Undly_64_set.insert("4");
    Undly_64.add_attribute("CashAmt", "UnderlyingCashAmount_t_1480544703"); // 1
    Undly_64_set.insert("UnderlyingCashAmount_t_1480544703");
    Undly_64.add_attribute("CashTyp", "FIXED"); // 1
    Undly_64_set.insert("FIXED");
    Undly_64.add_attribute("Px", "1007261.360000"); // 1
    Undly_64_set.insert("1007261.360000");
    Undly_64.add_attribute("DirtPx", "4786817.560000"); // 1
    Undly_64_set.insert("4786817.560000");
    Undly_64.add_attribute("EndPx", "10464052.240000"); // 1
    Undly_64_set.insert("10464052.240000");
    Undly_64.add_attribute("StartVal", "UnderlyingStartValue_t_2041324749"); // 1
    Undly_64_set.insert("UnderlyingStartValue_t_2041324749");
    Undly_64.add_attribute("CurVal", "UnderlyingCurrentValue_t_983078804"); // 1
    Undly_64_set.insert("UnderlyingCurrentValue_t_983078804");
    Undly_64.add_attribute("EndVal", "UnderlyingEndValue_t_1161353825"); // 1
    Undly_64_set.insert("UnderlyingEndValue_t_1161353825");
    Undly_64.add_attribute("AdjQty", "18186353.480000"); // 1
    Undly_64_set.insert("18186353.480000");
    Undly_64.add_attribute("FxRate", "7590262.450000"); // 1
    Undly_64_set.insert("7590262.450000");
    Undly_64.add_attribute("FxRateCalc", "M"); // 1
    Undly_64_set.insert("M");
    Undly_64.add_attribute("CapValu", "UnderlyingCapValue_t_1313551621"); // 1
    Undly_64_set.insert("UnderlyingCapValue_t_1313551621");
    Undly_64.add_attribute("SetMeth", "UnderlyingSettlMethod_t_791130733"); // 1
    Undly_64_set.insert("UnderlyingSettlMethod_t_791130733");
    Undly_64.add_attribute("PutCall", "766759889"); // 1
    Undly_64_set.insert("766759889");
    all_values.push_back(Undly_64_set);
    all_compo_names.insert("Undly_64_set");

    {
      xml_element UndAID_64{"UndAID"};
      multiset<string> UndAID_64_set;
      UndAID_64.add_attribute("AltID", "UnderlyingSecurityAltID_t_152770056"); // 2
      UndAID_64_set.insert("UnderlyingSecurityAltID_t_152770056");
      UndAID_64.add_attribute("AltIDSrc", "9"); // 2
      UndAID_64_set.insert("9");
      all_values.push_back(UndAID_64_set);
      all_compo_names.insert("UndAID_64_set");

      Undly_64.add_element(UndAID_64);
    }
    {
      xml_element Stip_101{"Stip"};
      multiset<string> Stip_101_set;
      Stip_101.add_attribute("Typ", "ORDRINCR"); // 2
      Stip_101_set.insert("ORDRINCR");
      Stip_101.add_attribute("Val", "UnderlyingStipValue_t_276936174"); // 2
      Stip_101_set.insert("UnderlyingStipValue_t_276936174");
      all_values.push_back(Stip_101_set);
      all_compo_names.insert("Stip_101_set");

      Undly_64.add_element(Stip_101);
    }
    {
      xml_element Pty_250{"Pty"};
      multiset<string> Pty_250_set;
      Pty_250.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1848666375"); // 2
      Pty_250_set.insert("UnderlyingInstrumentPartyID_t_1848666375");
      Pty_250.add_attribute("Src", "5"); // 2
      Pty_250_set.insert("5");
      Pty_250.add_attribute("R", "8"); // 2
      Pty_250_set.insert("8");
      all_values.push_back(Pty_250_set);
      all_compo_names.insert("Pty_250_set");

      {
        xml_element Sub_250{"Sub"};
        multiset<string> Sub_250_set;
        Sub_250.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1589983508"); // 3
        Sub_250_set.insert("UnderlyingInstrumentPartySubID_t_1589983508");
        Sub_250.add_attribute("Typ", "27"); // 3
        Sub_250_set.insert("27");
        all_values.push_back(Sub_250_set);
        all_compo_names.insert("Sub_250_set");

        Pty_250.add_element(Sub_250);
      }
      Undly_64.add_element(Pty_250);
    }
    elt.add_element(Undly_64);
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
