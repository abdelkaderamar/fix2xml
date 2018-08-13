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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassActRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionReport_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_597873935"); // 0
  OrderMassActionReport_message_t_0.insert("ClOrdID_t_597873935");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1979081047"); // 0
  OrderMassActionReport_message_t_0.insert("SecondaryClOrdID_t_1979081047");
  elt.add_attribute("MassActionReportID", "MassActionReportID_t_657635040"); // 0
  OrderMassActionReport_message_t_0.insert("MassActionReportID_t_657635040");
  elt.add_attribute("MassActionType", "3"); // 0
  OrderMassActionReport_message_t_0.insert("3");
  elt.add_attribute("MassActionScope", "6"); // 0
  OrderMassActionReport_message_t_0.insert("6");
  elt.add_attribute("MassActionResponse", "1"); // 0
  OrderMassActionReport_message_t_0.insert("1");
  elt.add_attribute("MassActionRejectReason", "7"); // 0
  OrderMassActionReport_message_t_0.insert("7");
  elt.add_attribute("TotAffctdOrds", "1441231094"); // 0
  OrderMassActionReport_message_t_0.insert("1441231094");
  elt.add_attribute("MktID", "MarketID_t_390544571"); // 0
  OrderMassActionReport_message_t_0.insert("MarketID_t_390544571");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1123976878"); // 0
  OrderMassActionReport_message_t_0.insert("MarketSegmentID_t_1123976878");
  elt.add_attribute("SesID", "4"); // 0
  OrderMassActionReport_message_t_0.insert("4");
  elt.add_attribute("SesSub", "5"); // 0
  OrderMassActionReport_message_t_0.insert("5");
  elt.add_attribute("Side", "F"); // 0
  OrderMassActionReport_message_t_0.insert("F");
  elt.add_attribute("TxnTm", "TransactTime_t_1106176980"); // 0
  OrderMassActionReport_message_t_0.insert("TransactTime_t_1106176980");
  elt.add_attribute("Txt", "Text_t_304170112"); // 0
  OrderMassActionReport_message_t_0.insert("Text_t_304170112");
  elt.add_attribute("EncTxtLen", "1667721470"); // 0
  OrderMassActionReport_message_t_0.insert("1667721470");
  elt.add_attribute("EncTxt", "EncodedText_t_294929791"); // 0
  OrderMassActionReport_message_t_0.insert("EncodedText_t_294929791");
  all_values.push_back(OrderMassActionReport_message_t_0);
  all_compo_names.insert("OrderMassActionReport_message_t");

  { // Hdr
    xml_element Hdr_59{"Hdr"};
    multiset<string> Hdr_59_set;
    Hdr_59.add_attribute("SeqNum", "860509091"); // 1
    Hdr_59_set.insert("860509091");
    Hdr_59.add_attribute("SID", "SenderCompID_t_785689139"); // 1
    Hdr_59_set.insert("SenderCompID_t_785689139");
    Hdr_59.add_attribute("TID", "TargetCompID_t_1025495416"); // 1
    Hdr_59_set.insert("TargetCompID_t_1025495416");
    Hdr_59.add_attribute("OBID", "OnBehalfOfCompID_t_1636903955"); // 1
    Hdr_59_set.insert("OnBehalfOfCompID_t_1636903955");
    Hdr_59.add_attribute("D2ID", "DeliverToCompID_t_1129437548"); // 1
    Hdr_59_set.insert("DeliverToCompID_t_1129437548");
    Hdr_59.add_attribute("SSub", "SenderSubID_t_1492385160"); // 1
    Hdr_59_set.insert("SenderSubID_t_1492385160");
    Hdr_59.add_attribute("SLoc", "SenderLocationID_t_1819154478"); // 1
    Hdr_59_set.insert("SenderLocationID_t_1819154478");
    Hdr_59.add_attribute("TSub", "TargetSubID_t_2137940816"); // 1
    Hdr_59_set.insert("TargetSubID_t_2137940816");
    Hdr_59.add_attribute("TLoc", "TargetLocationID_t_1157837009"); // 1
    Hdr_59_set.insert("TargetLocationID_t_1157837009");
    Hdr_59.add_attribute("OBSub", "OnBehalfOfSubID_t_1387342146"); // 1
    Hdr_59_set.insert("OnBehalfOfSubID_t_1387342146");
    Hdr_59.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1028356826"); // 1
    Hdr_59_set.insert("OnBehalfOfLocationID_t_1028356826");
    Hdr_59.add_attribute("D2Sub", "DeliverToSubID_t_1247875151"); // 1
    Hdr_59_set.insert("DeliverToSubID_t_1247875151");
    Hdr_59.add_attribute("D2Loc", "DeliverToLocationID_t_2101910886"); // 1
    Hdr_59_set.insert("DeliverToLocationID_t_2101910886");
    Hdr_59.add_attribute("PosDup", "Y"); // 1
    Hdr_59_set.insert("Y");
    Hdr_59.add_attribute("PosRsnd", "N"); // 1
    Hdr_59_set.insert("N");
    Hdr_59.add_attribute("Snt", "SendingTime_t_1933508286"); // 1
    Hdr_59_set.insert("SendingTime_t_1933508286");
    Hdr_59.add_attribute("OrigSnt", "OrigSendingTime_t_376726625"); // 1
    Hdr_59_set.insert("OrigSendingTime_t_376726625");
    Hdr_59.add_attribute("MsgEncd", "MessageEncoding_t_717355039"); // 1
    Hdr_59_set.insert("MessageEncoding_t_717355039");
    all_values.push_back(Hdr_59_set);
    all_compo_names.insert("Hdr_59_set");

    {
      xml_element Hop_59{"Hop"};
      multiset<string> Hop_59_set;
      Hop_59.add_attribute("ID", "HopCompID_t_1441098855"); // 2
      Hop_59_set.insert("HopCompID_t_1441098855");
      Hop_59.add_attribute("Ref", "385288046"); // 2
      Hop_59_set.insert("385288046");
      Hop_59.add_attribute("Snt", "HopSendingTime_t_420822318"); // 2
      Hop_59_set.insert("HopSendingTime_t_420822318");
      all_values.push_back(Hop_59_set);
      all_compo_names.insert("Hop_59_set");

      Hdr_59.add_element(Hop_59);
    }
    elt.add_element(Hdr_59);
  } // end Hdr
  { // AffectOrd
    xml_element AffectOrd_0{"AffectOrd"};
    multiset<string> AffectOrd_0_set;
    AffectOrd_0.add_attribute("OrigID", "OrigClOrdID_t_775832617"); // 1
    AffectOrd_0_set.insert("OrigClOrdID_t_775832617");
    AffectOrd_0.add_attribute("AffctdOrdID", "AffectedOrderID_t_1544799196"); // 1
    AffectOrd_0_set.insert("AffectedOrderID_t_1544799196");
    AffectOrd_0.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_142775129"); // 1
    AffectOrd_0_set.insert("AffectedSecondaryOrderID_t_142775129");
    all_values.push_back(AffectOrd_0_set);
    all_compo_names.insert("AffectOrd_0_set");

    elt.add_element(AffectOrd_0);
  } // end AffectOrd
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_0{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_0_set;
    NotAffectedOrdersGrp_0.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_566622138"); // 1
    NotAffectedOrdersGrp_0_set.insert("NotAffOrigClOrdID_t_566622138");
    NotAffectedOrdersGrp_0.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_1248952109"); // 1
    NotAffectedOrdersGrp_0_set.insert("NotAffectedOrderID_t_1248952109");
    all_values.push_back(NotAffectedOrdersGrp_0_set);
    all_compo_names.insert("NotAffectedOrdersGrp_0_set");

    elt.add_element(NotAffectedOrdersGrp_0);
  } // end NotAffectedOrdersGrp
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_1{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_1_set;
    NotAffectedOrdersGrp_1.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_598097812"); // 1
    NotAffectedOrdersGrp_1_set.insert("NotAffOrigClOrdID_t_598097812");
    NotAffectedOrdersGrp_1.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_86859960"); // 1
    NotAffectedOrdersGrp_1_set.insert("NotAffectedOrderID_t_86859960");
    all_values.push_back(NotAffectedOrdersGrp_1_set);
    all_compo_names.insert("NotAffectedOrdersGrp_1_set");

    elt.add_element(NotAffectedOrdersGrp_1);
  } // end NotAffectedOrdersGrp
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_2{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_2_set;
    NotAffectedOrdersGrp_2.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_1543881900"); // 1
    NotAffectedOrdersGrp_2_set.insert("NotAffOrigClOrdID_t_1543881900");
    NotAffectedOrdersGrp_2.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_1458606903"); // 1
    NotAffectedOrdersGrp_2_set.insert("NotAffectedOrderID_t_1458606903");
    all_values.push_back(NotAffectedOrdersGrp_2_set);
    all_compo_names.insert("NotAffectedOrdersGrp_2_set");

    elt.add_element(NotAffectedOrdersGrp_2);
  } // end NotAffectedOrdersGrp
  { // Pty
    xml_element Pty_267{"Pty"};
    multiset<string> Pty_267_set;
    Pty_267.add_attribute("ID", "PartyID_t_421893668"); // 1
    Pty_267_set.insert("PartyID_t_421893668");
    Pty_267.add_attribute("Src", "7"); // 1
    Pty_267_set.insert("7");
    Pty_267.add_attribute("R", "4"); // 1
    Pty_267_set.insert("4");
    all_values.push_back(Pty_267_set);
    all_compo_names.insert("Pty_267_set");

    {
      xml_element Sub_267{"Sub"};
      multiset<string> Sub_267_set;
      Sub_267.add_attribute("ID", "PartySubID_t_1914278829"); // 2
      Sub_267_set.insert("PartySubID_t_1914278829");
      Sub_267.add_attribute("Typ", "25"); // 2
      Sub_267_set.insert("25");
      all_values.push_back(Sub_267_set);
      all_compo_names.insert("Sub_267_set");

      Pty_267.add_element(Sub_267);
    }
    elt.add_element(Pty_267);
  } // end Pty
  { // Pty
    xml_element Pty_268{"Pty"};
    multiset<string> Pty_268_set;
    Pty_268.add_attribute("ID", "PartyID_t_1992443815"); // 1
    Pty_268_set.insert("PartyID_t_1992443815");
    Pty_268.add_attribute("Src", "1"); // 1
    Pty_268_set.insert("1");
    Pty_268.add_attribute("R", "50"); // 1
    Pty_268_set.insert("50");
    all_values.push_back(Pty_268_set);
    all_compo_names.insert("Pty_268_set");

    {
      xml_element Sub_268{"Sub"};
      multiset<string> Sub_268_set;
      Sub_268.add_attribute("ID", "PartySubID_t_873316994"); // 2
      Sub_268_set.insert("PartySubID_t_873316994");
      Sub_268.add_attribute("Typ", "8"); // 2
      Sub_268_set.insert("8");
      all_values.push_back(Sub_268_set);
      all_compo_names.insert("Sub_268_set");

      Pty_268.add_element(Sub_268);
    }
    elt.add_element(Pty_268);
  } // end Pty
  { // Pty
    xml_element Pty_269{"Pty"};
    multiset<string> Pty_269_set;
    Pty_269.add_attribute("ID", "PartyID_t_1961467425"); // 1
    Pty_269_set.insert("PartyID_t_1961467425");
    Pty_269.add_attribute("Src", "E"); // 1
    Pty_269_set.insert("E");
    Pty_269.add_attribute("R", "46"); // 1
    Pty_269_set.insert("46");
    all_values.push_back(Pty_269_set);
    all_compo_names.insert("Pty_269_set");

    {
      xml_element Sub_269{"Sub"};
      multiset<string> Sub_269_set;
      Sub_269.add_attribute("ID", "PartySubID_t_1747492063"); // 2
      Sub_269_set.insert("PartySubID_t_1747492063");
      Sub_269.add_attribute("Typ", "23"); // 2
      Sub_269_set.insert("23");
      all_values.push_back(Sub_269_set);
      all_compo_names.insert("Sub_269_set");

      Pty_269.add_element(Sub_269);
    }
    elt.add_element(Pty_269);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_3{"TgtPty"};
    multiset<string> TgtPty_3_set;
    TgtPty_3.add_attribute("ID", "TargetPartyID_t_1041107271"); // 1
    TgtPty_3_set.insert("TargetPartyID_t_1041107271");
    TgtPty_3.add_attribute("Src", "3"); // 1
    TgtPty_3_set.insert("3");
    TgtPty_3.add_attribute("R", "9"); // 1
    TgtPty_3_set.insert("9");
    all_values.push_back(TgtPty_3_set);
    all_compo_names.insert("TgtPty_3_set");

    elt.add_element(TgtPty_3);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_49{"Instrmt"};
    multiset<string> Instrmt_49_set;
    Instrmt_49.add_attribute("Sym", "Symbol_t_1775953572"); // 1
    Instrmt_49_set.insert("Symbol_t_1775953572");
    Instrmt_49.add_attribute("Sfx", "WI"); // 1
    Instrmt_49_set.insert("WI");
    Instrmt_49.add_attribute("ID", "SecurityID_t_258782037"); // 1
    Instrmt_49_set.insert("SecurityID_t_258782037");
    Instrmt_49.add_attribute("Src", "M"); // 1
    Instrmt_49_set.insert("M");
    Instrmt_49.add_attribute("Prod", "11"); // 1
    Instrmt_49_set.insert("11");
    Instrmt_49.add_attribute("ProdCmplx", "ProductComplex_t_825404175"); // 1
    Instrmt_49_set.insert("ProductComplex_t_825404175");
    Instrmt_49.add_attribute("SecGrp", "SecurityGroup_t_1020197162"); // 1
    Instrmt_49_set.insert("SecurityGroup_t_1020197162");
    Instrmt_49.add_attribute("CFI", "CFICode_t_874797731"); // 1
    Instrmt_49_set.insert("CFICode_t_874797731");
    Instrmt_49.add_attribute("SecTyp", "ABS"); // 1
    Instrmt_49_set.insert("ABS");
    Instrmt_49.add_attribute("SubTyp", "SecuritySubType_t_416595415"); // 1
    Instrmt_49_set.insert("SecuritySubType_t_416595415");
    Instrmt_49.add_attribute("MMY", "185920986"); // 1
    Instrmt_49_set.insert("185920986");
    Instrmt_49.add_attribute("MatDt", "MaturityDate_t_1784813235"); // 1
    Instrmt_49_set.insert("MaturityDate_t_1784813235");
    Instrmt_49.add_attribute("MatTm", "838489083"); // 1
    Instrmt_49_set.insert("838489083");
    Instrmt_49.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1133948196"); // 1
    Instrmt_49_set.insert("SettleOnOpenFlag_t_1133948196");
    Instrmt_49.add_attribute("AsgnMeth", "1639316235"); // 1
    Instrmt_49_set.insert("1639316235");
    Instrmt_49.add_attribute("Status", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("CpnPmt", "CouponPaymentDate_t_1753646237"); // 1
    Instrmt_49_set.insert("CouponPaymentDate_t_1753646237");
    Instrmt_49.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_49_set.insert("MM");
    Instrmt_49.add_attribute("Snrty", "SR"); // 1
    Instrmt_49_set.insert("SR");
    Instrmt_49.add_attribute("NotlPctOut", "16132027.760000"); // 1
    Instrmt_49_set.insert("16132027.760000");
    Instrmt_49.add_attribute("OrigNotlPctOut", "2101097.480000"); // 1
    Instrmt_49_set.insert("2101097.480000");
    Instrmt_49.add_attribute("AttchPnt", "15549401.470000"); // 1
    Instrmt_49_set.insert("15549401.470000");
    Instrmt_49.add_attribute("DetchPnt", "14271865.540000"); // 1
    Instrmt_49_set.insert("14271865.540000");
    Instrmt_49.add_attribute("Issued", "IssueDate_t_802518327"); // 1
    Instrmt_49_set.insert("IssueDate_t_802518327");
    Instrmt_49.add_attribute("RepoCollSecTyp", "1278229278"); // 1
    Instrmt_49_set.insert("1278229278");
    Instrmt_49.add_attribute("RepoTrm", "1027194969"); // 1
    Instrmt_49_set.insert("1027194969");
    Instrmt_49.add_attribute("RepoRt", "17716535.310000"); // 1
    Instrmt_49_set.insert("17716535.310000");
    Instrmt_49.add_attribute("Fctr", "17188734.480000"); // 1
    Instrmt_49_set.insert("17188734.480000");
    Instrmt_49.add_attribute("CrdRtg", "CreditRating_t_2068302240"); // 1
    Instrmt_49_set.insert("CreditRating_t_2068302240");
    Instrmt_49.add_attribute("Rgstry", "InstrRegistry_t_978593133"); // 1
    Instrmt_49_set.insert("InstrRegistry_t_978593133");
    Instrmt_49.add_attribute("IssuCtry", "432856289"); // 1
    Instrmt_49_set.insert("432856289");
    Instrmt_49.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1696772165"); // 1
    Instrmt_49_set.insert("StateOrProvinceOfIssue_t_1696772165");
    Instrmt_49.add_attribute("Lcl", "LocaleOfIssue_t_961365353"); // 1
    Instrmt_49_set.insert("LocaleOfIssue_t_961365353");
    Instrmt_49.add_attribute("Redeem", "RedemptionDate_t_691638326"); // 1
    Instrmt_49_set.insert("RedemptionDate_t_691638326");
    Instrmt_49.add_attribute("StrkPx", "14680172.180000"); // 1
    Instrmt_49_set.insert("14680172.180000");
    Instrmt_49.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_49_set.insert("CAN");
    Instrmt_49.add_attribute("StrkMult", "3407307.330000"); // 1
    Instrmt_49_set.insert("3407307.330000");
    Instrmt_49.add_attribute("StrkValu", "21128630.030000"); // 1
    Instrmt_49_set.insert("21128630.030000");
    Instrmt_49.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_49_set.insert("4");
    Instrmt_49.add_attribute("StrkPxBndryPrcsn", "1513003.410000"); // 1
    Instrmt_49_set.insert("1513003.410000");
    Instrmt_49.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("OptAt", "1595815231"); // 1
    Instrmt_49_set.insert("1595815231");
    Instrmt_49.add_attribute("Mult", "12852485.370000"); // 1
    Instrmt_49_set.insert("12852485.370000");
    Instrmt_49.add_attribute("MultTyp", "0"); // 1
    Instrmt_49_set.insert("0");
    Instrmt_49.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_49_set.insert("3");
    Instrmt_49.add_attribute("MinPxIncr", "8914111.270000"); // 1
    Instrmt_49_set.insert("8914111.270000");
    Instrmt_49.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_895261566"); // 1
    Instrmt_49_set.insert("MinPriceIncrementAmount_t_895261566");
    Instrmt_49.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_49_set.insert("MMBtu");
    Instrmt_49.add_attribute("UOMQty", "3571302.550000"); // 1
    Instrmt_49_set.insert("3571302.550000");
    Instrmt_49.add_attribute("PxUOM", "USD"); // 1
    Instrmt_49_set.insert("USD");
    Instrmt_49.add_attribute("PxUOMQty", "9909888.020000"); // 1
    Instrmt_49_set.insert("9909888.020000");
    Instrmt_49.add_attribute("SettlMeth", "P"); // 1
    Instrmt_49_set.insert("P");
    Instrmt_49.add_attribute("ExerStyle", "0"); // 1
    Instrmt_49_set.insert("0");
    Instrmt_49.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("OptPayAmt", "OptPayoutAmount_t_664028131"); // 1
    Instrmt_49_set.insert("OptPayoutAmount_t_664028131");
    Instrmt_49.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_49_set.insert("INT");
    Instrmt_49.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_49_set.insert("FUT");
    Instrmt_49.add_attribute("ListMeth", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("CapPx", "3631690.110000"); // 1
    Instrmt_49_set.insert("3631690.110000");
    Instrmt_49.add_attribute("FlrPx", "1259805.220000"); // 1
    Instrmt_49_set.insert("1259805.220000");
    Instrmt_49.add_attribute("PutCall", "0"); // 1
    Instrmt_49_set.insert("0");
    Instrmt_49.add_attribute("FlexInd", "true"); // 1
    Instrmt_49_set.insert("true");
    Instrmt_49.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_49_set.insert("true");
    Instrmt_49.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_49_set.insert("Mo");
    Instrmt_49.add_attribute("CpnRt", "4151159.880000"); // 1
    Instrmt_49_set.insert("4151159.880000");
    Instrmt_49.add_attribute("Exch", "SecurityExchange_t_187177701"); // 1
    Instrmt_49_set.insert("SecurityExchange_t_187177701");
    Instrmt_49.add_attribute("PosLmt", "1942883192"); // 1
    Instrmt_49_set.insert("1942883192");
    Instrmt_49.add_attribute("NTPosLmt", "380495343"); // 1
    Instrmt_49_set.insert("380495343");
    Instrmt_49.add_attribute("Issr", "Issuer_t_469000691"); // 1
    Instrmt_49_set.insert("Issuer_t_469000691");
    Instrmt_49.add_attribute("EncIssrLen", "552725692"); // 1
    Instrmt_49_set.insert("552725692");
    Instrmt_49.add_attribute("EncIssr", "EncodedIssuer_t_531795684"); // 1
    Instrmt_49_set.insert("EncodedIssuer_t_531795684");
    Instrmt_49.add_attribute("Desc", "SecurityDesc_t_388153268"); // 1
    Instrmt_49_set.insert("SecurityDesc_t_388153268");
    Instrmt_49.add_attribute("EncSecDescLen", "1057275"); // 1
    Instrmt_49_set.insert("1057275");
    Instrmt_49.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1817044222"); // 1
    Instrmt_49_set.insert("EncodedSecurityDesc_t_1817044222");
    Instrmt_49.add_attribute("Pool", "Pool_t_1946622080"); // 1
    Instrmt_49_set.insert("Pool_t_1946622080");
    Instrmt_49.add_attribute("CSetMo", "54673123"); // 1
    Instrmt_49_set.insert("54673123");
    Instrmt_49.add_attribute("CPPgm", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("CPRegT", "CPRegType_t_694399998"); // 1
    Instrmt_49_set.insert("CPRegType_t_694399998");
    Instrmt_49.add_attribute("Dated", "DatedDate_t_1638205426"); // 1
    Instrmt_49_set.insert("DatedDate_t_1638205426");
    Instrmt_49.add_attribute("IntAcrl", "InterestAccrualDate_t_918101956"); // 1
    Instrmt_49_set.insert("InterestAccrualDate_t_918101956");
    all_values.push_back(Instrmt_49_set);
    all_compo_names.insert("Instrmt_49_set");

    {
      xml_element AID_52{"AID"};
      multiset<string> AID_52_set;
      AID_52.add_attribute("AltID", "SecurityAltID_t_1799771313"); // 2
      AID_52_set.insert("SecurityAltID_t_1799771313");
      AID_52.add_attribute("AltIDSrc", "B"); // 2
      AID_52_set.insert("B");
      all_values.push_back(AID_52_set);
      all_compo_names.insert("AID_52_set");

      Instrmt_49.add_element(AID_52);
    }
    {
      xml_element SecXML_52{"SecXML"};
      multiset<string> SecXML_52_set;
      SecXML_52.add_attribute("Schema", "SecurityXMLSchema_t_554935118"); // 2
      SecXML_52_set.insert("SecurityXMLSchema_t_554935118");
      all_values.push_back(SecXML_52_set);
      all_compo_names.insert("SecXML_52_set");

      Instrmt_49.add_element(SecXML_52);
    }
    {
      xml_element Evnt_52{"Evnt"};
      multiset<string> Evnt_52_set;
      Evnt_52.add_attribute("EventTyp", "8"); // 2
      Evnt_52_set.insert("8");
      Evnt_52.add_attribute("Dt", "EventDate_t_603445012"); // 2
      Evnt_52_set.insert("EventDate_t_603445012");
      Evnt_52.add_attribute("Tm", "EventTime_t_1218963249"); // 2
      Evnt_52_set.insert("EventTime_t_1218963249");
      Evnt_52.add_attribute("Px", "9447531.860000"); // 2
      Evnt_52_set.insert("9447531.860000");
      Evnt_52.add_attribute("Txt", "EventText_t_296569245"); // 2
      Evnt_52_set.insert("EventText_t_296569245");
      all_values.push_back(Evnt_52_set);
      all_compo_names.insert("Evnt_52_set");

      Instrmt_49.add_element(Evnt_52);
    }
    {
      xml_element Pty_270{"Pty"};
      multiset<string> Pty_270_set;
      Pty_270.add_attribute("ID", "InstrumentPartyID_t_1803809972"); // 2
      Pty_270_set.insert("InstrumentPartyID_t_1803809972");
      Pty_270.add_attribute("Src", "6"); // 2
      Pty_270_set.insert("6");
      Pty_270.add_attribute("R", "4"); // 2
      Pty_270_set.insert("4");
      all_values.push_back(Pty_270_set);
      all_compo_names.insert("Pty_270_set");

      {
        xml_element Sub_270{"Sub"};
        multiset<string> Sub_270_set;
        Sub_270.add_attribute("ID", "InstrumentPartySubID_t_1937945213"); // 3
        Sub_270_set.insert("InstrumentPartySubID_t_1937945213");
        Sub_270.add_attribute("Typ", "31"); // 3
        Sub_270_set.insert("31");
        all_values.push_back(Sub_270_set);
        all_compo_names.insert("Sub_270_set");

        Pty_270.add_element(Sub_270);
      }
      Instrmt_49.add_element(Pty_270);
    }
    {
      xml_element CmplxEvnt_49{"CmplxEvnt"};
      multiset<string> CmplxEvnt_49_set;
      CmplxEvnt_49.add_attribute("Typ", "8"); // 2
      CmplxEvnt_49_set.insert("8");
      CmplxEvnt_49.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1392614024"); // 2
      CmplxEvnt_49_set.insert("ComplexOptPayoutAmount_t_1392614024");
      CmplxEvnt_49.add_attribute("Px", "9000889.020000"); // 2
      CmplxEvnt_49_set.insert("9000889.020000");
      CmplxEvnt_49.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_49_set.insert("3");
      CmplxEvnt_49.add_attribute("PxBndryPrcsn", "11880135.680000"); // 2
      CmplxEvnt_49_set.insert("11880135.680000");
      CmplxEvnt_49.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_49_set.insert("2");
      CmplxEvnt_49.add_attribute("Cond", "1"); // 2
      CmplxEvnt_49_set.insert("1");
      all_values.push_back(CmplxEvnt_49_set);
      all_compo_names.insert("CmplxEvnt_49_set");

      {
        xml_element EvntDts_49{"EvntDts"};
        multiset<string> EvntDts_49_set;
        EvntDts_49.add_attribute("StartDt", "ComplexEventStartDate_t_1740739260"); // 3
        EvntDts_49_set.insert("ComplexEventStartDate_t_1740739260");
        EvntDts_49.add_attribute("EndDt", "ComplexEventEndDate_t_1812379930"); // 3
        EvntDts_49_set.insert("ComplexEventEndDate_t_1812379930");
        all_values.push_back(EvntDts_49_set);
        all_compo_names.insert("EvntDts_49_set");

        {
          xml_element EvntTms_49{"EvntTms"};
          multiset<string> EvntTms_49_set;
          EvntTms_49.add_attribute("StartTm", "137016628"); // 4
          EvntTms_49_set.insert("137016628");
          EvntTms_49.add_attribute("EndTm", "1741796535"); // 4
          EvntTms_49_set.insert("1741796535");
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
    xml_element Undly_69{"Undly"};
    multiset<string> Undly_69_set;
    Undly_69.add_attribute("Sym", "UnderlyingSymbol_t_1481940504"); // 1
    Undly_69_set.insert("UnderlyingSymbol_t_1481940504");
    Undly_69.add_attribute("Sfx", "CD"); // 1
    Undly_69_set.insert("CD");
    Undly_69.add_attribute("ID", "UnderlyingSecurityID_t_1796469659"); // 1
    Undly_69_set.insert("UnderlyingSecurityID_t_1796469659");
    Undly_69.add_attribute("Src", "G"); // 1
    Undly_69_set.insert("G");
    Undly_69.add_attribute("Prod", "12"); // 1
    Undly_69_set.insert("12");
    Undly_69.add_attribute("CFI", "UnderlyingCFICode_t_1287191437"); // 1
    Undly_69_set.insert("UnderlyingCFICode_t_1287191437");
    Undly_69.add_attribute("SecTyp", "MT"); // 1
    Undly_69_set.insert("MT");
    Undly_69.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_282842724"); // 1
    Undly_69_set.insert("UnderlyingSecuritySubType_t_282842724");
    Undly_69.add_attribute("MMY", "1768902017"); // 1
    Undly_69_set.insert("1768902017");
    Undly_69.add_attribute("Mat", "UnderlyingMaturityDate_t_1368465632"); // 1
    Undly_69_set.insert("UnderlyingMaturityDate_t_1368465632");
    Undly_69.add_attribute("MatTm", "1843020032"); // 1
    Undly_69_set.insert("1843020032");
    Undly_69.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_224863381"); // 1
    Undly_69_set.insert("UnderlyingCouponPaymentDate_t_224863381");
    Undly_69.add_attribute("RestrctTyp", "MR"); // 1
    Undly_69_set.insert("MR");
    Undly_69.add_attribute("Snrty", "SB"); // 1
    Undly_69_set.insert("SB");
    Undly_69.add_attribute("NotlPctOut", "5214326.270000"); // 1
    Undly_69_set.insert("5214326.270000");
    Undly_69.add_attribute("OrigNotlPctOut", "962715.570000"); // 1
    Undly_69_set.insert("962715.570000");
    Undly_69.add_attribute("AttchPnt", "19482117.670000"); // 1
    Undly_69_set.insert("19482117.670000");
    Undly_69.add_attribute("DetchPnt", "9439823.940000"); // 1
    Undly_69_set.insert("9439823.940000");
    Undly_69.add_attribute("Issued", "UnderlyingIssueDate_t_2034216770"); // 1
    Undly_69_set.insert("UnderlyingIssueDate_t_2034216770");
    Undly_69.add_attribute("RepoCollSecTyp", "285701033"); // 1
    Undly_69_set.insert("285701033");
    Undly_69.add_attribute("RepoTrm", "36667362"); // 1
    Undly_69_set.insert("36667362");
    Undly_69.add_attribute("RepoRt", "12793471.460000"); // 1
    Undly_69_set.insert("12793471.460000");
    Undly_69.add_attribute("Fctr", "11857899.360000"); // 1
    Undly_69_set.insert("11857899.360000");
    Undly_69.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1464013679"); // 1
    Undly_69_set.insert("UnderlyingCreditRating_t_1464013679");
    Undly_69.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_319877066"); // 1
    Undly_69_set.insert("UnderlyingInstrRegistry_t_319877066");
    Undly_69.add_attribute("Ctry", "318890534"); // 1
    Undly_69_set.insert("318890534");
    Undly_69.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1212877039"); // 1
    Undly_69_set.insert("UnderlyingStateOrProvinceOfIssue_t_1212877039");
    Undly_69.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2060616326"); // 1
    Undly_69_set.insert("UnderlyingLocaleOfIssue_t_2060616326");
    Undly_69.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2131270464"); // 1
    Undly_69_set.insert("UnderlyingRedemptionDate_t_2131270464");
    Undly_69.add_attribute("StrkPx", "13498936.670000"); // 1
    Undly_69_set.insert("13498936.670000");
    Undly_69.add_attribute("StrkCcy", "CAN"); // 1
    Undly_69_set.insert("CAN");
    Undly_69.add_attribute("OptA", "1286048727"); // 1
    Undly_69_set.insert("1286048727");
    Undly_69.add_attribute("Mult", "13039152.250000"); // 1
    Undly_69_set.insert("13039152.250000");
    Undly_69.add_attribute("MultTyp", "0"); // 1
    Undly_69_set.insert("0");
    Undly_69.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_69_set.insert("0");
    Undly_69.add_attribute("UOM", "Gal"); // 1
    Undly_69_set.insert("Gal");
    Undly_69.add_attribute("UOMQty", "272027.440000"); // 1
    Undly_69_set.insert("272027.440000");
    Undly_69.add_attribute("PxUOM", "Bbl"); // 1
    Undly_69_set.insert("Bbl");
    Undly_69.add_attribute("PxUOMQty", "650413.830000"); // 1
    Undly_69_set.insert("650413.830000");
    Undly_69.add_attribute("TmUnit", "Wk"); // 1
    Undly_69_set.insert("Wk");
    Undly_69.add_attribute("ExerStyle", "1"); // 1
    Undly_69_set.insert("1");
    Undly_69.add_attribute("CpnRt", "2899047.640000"); // 1
    Undly_69_set.insert("2899047.640000");
    Undly_69.add_attribute("Exch", "UnderlyingSecurityExchange_t_1835613609"); // 1
    Undly_69_set.insert("UnderlyingSecurityExchange_t_1835613609");
    Undly_69.add_attribute("Issr", "UnderlyingIssuer_t_387788815"); // 1
    Undly_69_set.insert("UnderlyingIssuer_t_387788815");
    Undly_69.add_attribute("EncUndIssrLen", "811337391"); // 1
    Undly_69_set.insert("811337391");
    Undly_69.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1931885167"); // 1
    Undly_69_set.insert("EncodedUnderlyingIssuer_t_1931885167");
    Undly_69.add_attribute("Desc", "UnderlyingSecurityDesc_t_188516935"); // 1
    Undly_69_set.insert("UnderlyingSecurityDesc_t_188516935");
    Undly_69.add_attribute("EncUndSecDescLen", "1755319786"); // 1
    Undly_69_set.insert("1755319786");
    Undly_69.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1818618289"); // 1
    Undly_69_set.insert("EncodedUnderlyingSecurityDesc_t_1818618289");
    Undly_69.add_attribute("CPPgm", "UnderlyingCPProgram_t_474217968"); // 1
    Undly_69_set.insert("UnderlyingCPProgram_t_474217968");
    Undly_69.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1791987148"); // 1
    Undly_69_set.insert("UnderlyingCPRegType_t_1791987148");
    Undly_69.add_attribute("AllocPct", "9504817.880000"); // 1
    Undly_69_set.insert("9504817.880000");
    Undly_69.add_attribute("Ccy", "EUR"); // 1
    Undly_69_set.insert("EUR");
    Undly_69.add_attribute("Qty", "12703588.540000"); // 1
    Undly_69_set.insert("12703588.540000");
    Undly_69.add_attribute("SettlTyp", "5"); // 1
    Undly_69_set.insert("5");
    Undly_69.add_attribute("CashAmt", "UnderlyingCashAmount_t_173910570"); // 1
    Undly_69_set.insert("UnderlyingCashAmount_t_173910570");
    Undly_69.add_attribute("CashTyp", "DIFF"); // 1
    Undly_69_set.insert("DIFF");
    Undly_69.add_attribute("Px", "19626852.550000"); // 1
    Undly_69_set.insert("19626852.550000");
    Undly_69.add_attribute("DirtPx", "15238042.370000"); // 1
    Undly_69_set.insert("15238042.370000");
    Undly_69.add_attribute("EndPx", "6909370.990000"); // 1
    Undly_69_set.insert("6909370.990000");
    Undly_69.add_attribute("StartVal", "UnderlyingStartValue_t_1280928928"); // 1
    Undly_69_set.insert("UnderlyingStartValue_t_1280928928");
    Undly_69.add_attribute("CurVal", "UnderlyingCurrentValue_t_662369316"); // 1
    Undly_69_set.insert("UnderlyingCurrentValue_t_662369316");
    Undly_69.add_attribute("EndVal", "UnderlyingEndValue_t_1994852324"); // 1
    Undly_69_set.insert("UnderlyingEndValue_t_1994852324");
    Undly_69.add_attribute("AdjQty", "4946011.580000"); // 1
    Undly_69_set.insert("4946011.580000");
    Undly_69.add_attribute("FxRate", "4314894.530000"); // 1
    Undly_69_set.insert("4314894.530000");
    Undly_69.add_attribute("FxRateCalc", "M"); // 1
    Undly_69_set.insert("M");
    Undly_69.add_attribute("CapValu", "UnderlyingCapValue_t_521803903"); // 1
    Undly_69_set.insert("UnderlyingCapValue_t_521803903");
    Undly_69.add_attribute("SetMeth", "UnderlyingSettlMethod_t_483452315"); // 1
    Undly_69_set.insert("UnderlyingSettlMethod_t_483452315");
    Undly_69.add_attribute("PutCall", "356033073"); // 1
    Undly_69_set.insert("356033073");
    all_values.push_back(Undly_69_set);
    all_compo_names.insert("Undly_69_set");

    {
      xml_element UndAID_69{"UndAID"};
      multiset<string> UndAID_69_set;
      UndAID_69.add_attribute("AltID", "UnderlyingSecurityAltID_t_1917472279"); // 2
      UndAID_69_set.insert("UnderlyingSecurityAltID_t_1917472279");
      UndAID_69.add_attribute("AltIDSrc", "5"); // 2
      UndAID_69_set.insert("5");
      all_values.push_back(UndAID_69_set);
      all_compo_names.insert("UndAID_69_set");

      Undly_69.add_element(UndAID_69);
    }
    {
      xml_element Stip_107{"Stip"};
      multiset<string> Stip_107_set;
      Stip_107.add_attribute("Typ", "TRADERCREDIT"); // 2
      Stip_107_set.insert("TRADERCREDIT");
      Stip_107.add_attribute("Val", "UnderlyingStipValue_t_1605602241"); // 2
      Stip_107_set.insert("UnderlyingStipValue_t_1605602241");
      all_values.push_back(Stip_107_set);
      all_compo_names.insert("Stip_107_set");

      Undly_69.add_element(Stip_107);
    }
    {
      xml_element Pty_271{"Pty"};
      multiset<string> Pty_271_set;
      Pty_271.add_attribute("ID", "UnderlyingInstrumentPartyID_t_618740376"); // 2
      Pty_271_set.insert("UnderlyingInstrumentPartyID_t_618740376");
      Pty_271.add_attribute("Src", "I"); // 2
      Pty_271_set.insert("I");
      Pty_271.add_attribute("R", "70"); // 2
      Pty_271_set.insert("70");
      all_values.push_back(Pty_271_set);
      all_compo_names.insert("Pty_271_set");

      {
        xml_element Sub_271{"Sub"};
        multiset<string> Sub_271_set;
        Sub_271.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_807257311"); // 3
        Sub_271_set.insert("UnderlyingInstrumentPartySubID_t_807257311");
        Sub_271.add_attribute("Typ", "10"); // 3
        Sub_271_set.insert("10");
        all_values.push_back(Sub_271_set);
        all_compo_names.insert("Sub_271_set");

        Pty_271.add_element(Sub_271);
      }
      Undly_69.add_element(Pty_271);
    }
    elt.add_element(Undly_69);
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
