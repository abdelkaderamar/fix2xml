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
  elt.add_attribute("ClOrdID", "ClOrdID_t_1238428517"); // 0
  OrderMassActionReport_message_t_0.insert("ClOrdID_t_1238428517");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_785082366"); // 0
  OrderMassActionReport_message_t_0.insert("SecondaryClOrdID_t_785082366");
  elt.add_attribute("MassActionReportID", "MassActionReportID_t_207742997"); // 0
  OrderMassActionReport_message_t_0.insert("MassActionReportID_t_207742997");
  elt.add_attribute("MassActionType", "2"); // 0
  OrderMassActionReport_message_t_0.insert("2");
  elt.add_attribute("MassActionScope", "4"); // 0
  OrderMassActionReport_message_t_0.insert("4");
  elt.add_attribute("MassActionResponse", "0"); // 0
  OrderMassActionReport_message_t_0.insert("0");
  elt.add_attribute("MassActionRejectReason", "9"); // 0
  OrderMassActionReport_message_t_0.insert("9");
  elt.add_attribute("TotAffctdOrds", "1987516401"); // 0
  OrderMassActionReport_message_t_0.insert("1987516401");
  elt.add_attribute("MktID", "MarketID_t_282638473"); // 0
  OrderMassActionReport_message_t_0.insert("MarketID_t_282638473");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_958723900"); // 0
  OrderMassActionReport_message_t_0.insert("MarketSegmentID_t_958723900");
  elt.add_attribute("SesID", "2"); // 0
  OrderMassActionReport_message_t_0.insert("2");
  elt.add_attribute("SesSub", "4"); // 0
  OrderMassActionReport_message_t_0.insert("4");
  elt.add_attribute("Side", "7"); // 0
  OrderMassActionReport_message_t_0.insert("7");
  elt.add_attribute("TxnTm", "TransactTime_t_173264689"); // 0
  OrderMassActionReport_message_t_0.insert("TransactTime_t_173264689");
  elt.add_attribute("Txt", "Text_t_166123477"); // 0
  OrderMassActionReport_message_t_0.insert("Text_t_166123477");
  elt.add_attribute("EncTxtLen", "787501555"); // 0
  OrderMassActionReport_message_t_0.insert("787501555");
  elt.add_attribute("EncTxt", "EncodedText_t_1424078764"); // 0
  OrderMassActionReport_message_t_0.insert("EncodedText_t_1424078764");
  all_values.push_back(OrderMassActionReport_message_t_0);
  all_compo_names.insert("OrderMassActionReport_message_t");

  { // Hdr
    xml_element Hdr_59{"Hdr"};
    multiset<string> Hdr_59_set;
    Hdr_59.add_attribute("SeqNum", "682339793"); // 1
    Hdr_59_set.insert("682339793");
    Hdr_59.add_attribute("SID", "SenderCompID_t_440251458"); // 1
    Hdr_59_set.insert("SenderCompID_t_440251458");
    Hdr_59.add_attribute("TID", "TargetCompID_t_955082562"); // 1
    Hdr_59_set.insert("TargetCompID_t_955082562");
    Hdr_59.add_attribute("OBID", "OnBehalfOfCompID_t_1124470870"); // 1
    Hdr_59_set.insert("OnBehalfOfCompID_t_1124470870");
    Hdr_59.add_attribute("D2ID", "DeliverToCompID_t_1012988871"); // 1
    Hdr_59_set.insert("DeliverToCompID_t_1012988871");
    Hdr_59.add_attribute("SSub", "SenderSubID_t_240473624"); // 1
    Hdr_59_set.insert("SenderSubID_t_240473624");
    Hdr_59.add_attribute("SLoc", "SenderLocationID_t_1565822985"); // 1
    Hdr_59_set.insert("SenderLocationID_t_1565822985");
    Hdr_59.add_attribute("TSub", "TargetSubID_t_477121548"); // 1
    Hdr_59_set.insert("TargetSubID_t_477121548");
    Hdr_59.add_attribute("TLoc", "TargetLocationID_t_2020508837"); // 1
    Hdr_59_set.insert("TargetLocationID_t_2020508837");
    Hdr_59.add_attribute("OBSub", "OnBehalfOfSubID_t_835748865"); // 1
    Hdr_59_set.insert("OnBehalfOfSubID_t_835748865");
    Hdr_59.add_attribute("OBLoc", "OnBehalfOfLocationID_t_608972499"); // 1
    Hdr_59_set.insert("OnBehalfOfLocationID_t_608972499");
    Hdr_59.add_attribute("D2Sub", "DeliverToSubID_t_1445069575"); // 1
    Hdr_59_set.insert("DeliverToSubID_t_1445069575");
    Hdr_59.add_attribute("D2Loc", "DeliverToLocationID_t_447902820"); // 1
    Hdr_59_set.insert("DeliverToLocationID_t_447902820");
    Hdr_59.add_attribute("PosDup", "Y"); // 1
    Hdr_59_set.insert("Y");
    Hdr_59.add_attribute("PosRsnd", "N"); // 1
    Hdr_59_set.insert("N");
    Hdr_59.add_attribute("Snt", "SendingTime_t_1232985186"); // 1
    Hdr_59_set.insert("SendingTime_t_1232985186");
    Hdr_59.add_attribute("OrigSnt", "OrigSendingTime_t_647885264"); // 1
    Hdr_59_set.insert("OrigSendingTime_t_647885264");
    Hdr_59.add_attribute("MsgEncd", "MessageEncoding_t_927919449"); // 1
    Hdr_59_set.insert("MessageEncoding_t_927919449");
    all_values.push_back(Hdr_59_set);
    all_compo_names.insert("Hdr_59_set");

    {
      xml_element Hop_59{"Hop"};
      multiset<string> Hop_59_set;
      Hop_59.add_attribute("ID", "HopCompID_t_1436829021"); // 2
      Hop_59_set.insert("HopCompID_t_1436829021");
      Hop_59.add_attribute("Ref", "1906123162"); // 2
      Hop_59_set.insert("1906123162");
      Hop_59.add_attribute("Snt", "HopSendingTime_t_1533707472"); // 2
      Hop_59_set.insert("HopSendingTime_t_1533707472");
      all_values.push_back(Hop_59_set);
      all_compo_names.insert("Hop_59_set");

      Hdr_59.add_element(Hop_59);
    }
    elt.add_element(Hdr_59);
  } // end Hdr
  { // AffectOrd
    xml_element AffectOrd_0{"AffectOrd"};
    multiset<string> AffectOrd_0_set;
    AffectOrd_0.add_attribute("OrigID", "OrigClOrdID_t_41277987"); // 1
    AffectOrd_0_set.insert("OrigClOrdID_t_41277987");
    AffectOrd_0.add_attribute("AffctdOrdID", "AffectedOrderID_t_344947724"); // 1
    AffectOrd_0_set.insert("AffectedOrderID_t_344947724");
    AffectOrd_0.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_1298446530"); // 1
    AffectOrd_0_set.insert("AffectedSecondaryOrderID_t_1298446530");
    all_values.push_back(AffectOrd_0_set);
    all_compo_names.insert("AffectOrd_0_set");

    elt.add_element(AffectOrd_0);
  } // end AffectOrd
  { // AffectOrd
    xml_element AffectOrd_1{"AffectOrd"};
    multiset<string> AffectOrd_1_set;
    AffectOrd_1.add_attribute("OrigID", "OrigClOrdID_t_823400311"); // 1
    AffectOrd_1_set.insert("OrigClOrdID_t_823400311");
    AffectOrd_1.add_attribute("AffctdOrdID", "AffectedOrderID_t_208261682"); // 1
    AffectOrd_1_set.insert("AffectedOrderID_t_208261682");
    AffectOrd_1.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_1471711220"); // 1
    AffectOrd_1_set.insert("AffectedSecondaryOrderID_t_1471711220");
    all_values.push_back(AffectOrd_1_set);
    all_compo_names.insert("AffectOrd_1_set");

    elt.add_element(AffectOrd_1);
  } // end AffectOrd
  { // AffectOrd
    xml_element AffectOrd_2{"AffectOrd"};
    multiset<string> AffectOrd_2_set;
    AffectOrd_2.add_attribute("OrigID", "OrigClOrdID_t_989523788"); // 1
    AffectOrd_2_set.insert("OrigClOrdID_t_989523788");
    AffectOrd_2.add_attribute("AffctdOrdID", "AffectedOrderID_t_995763237"); // 1
    AffectOrd_2_set.insert("AffectedOrderID_t_995763237");
    AffectOrd_2.add_attribute("AffctdScndOrdID", "AffectedSecondaryOrderID_t_748306336"); // 1
    AffectOrd_2_set.insert("AffectedSecondaryOrderID_t_748306336");
    all_values.push_back(AffectOrd_2_set);
    all_compo_names.insert("AffectOrd_2_set");

    elt.add_element(AffectOrd_2);
  } // end AffectOrd
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_0{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_0_set;
    NotAffectedOrdersGrp_0.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_1436014695"); // 1
    NotAffectedOrdersGrp_0_set.insert("NotAffOrigClOrdID_t_1436014695");
    NotAffectedOrdersGrp_0.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_1703388898"); // 1
    NotAffectedOrdersGrp_0_set.insert("NotAffectedOrderID_t_1703388898");
    all_values.push_back(NotAffectedOrdersGrp_0_set);
    all_compo_names.insert("NotAffectedOrdersGrp_0_set");

    elt.add_element(NotAffectedOrdersGrp_0);
  } // end NotAffectedOrdersGrp
  { // NotAffectedOrdersGrp
    xml_element NotAffectedOrdersGrp_1{"NotAffectedOrdersGrp"};
    multiset<string> NotAffectedOrdersGrp_1_set;
    NotAffectedOrdersGrp_1.add_attribute("NotAffOrigClOrdID", "NotAffOrigClOrdID_t_648850803"); // 1
    NotAffectedOrdersGrp_1_set.insert("NotAffOrigClOrdID_t_648850803");
    NotAffectedOrdersGrp_1.add_attribute("NotAffectedOrderID", "NotAffectedOrderID_t_301519918"); // 1
    NotAffectedOrdersGrp_1_set.insert("NotAffectedOrderID_t_301519918");
    all_values.push_back(NotAffectedOrdersGrp_1_set);
    all_compo_names.insert("NotAffectedOrdersGrp_1_set");

    elt.add_element(NotAffectedOrdersGrp_1);
  } // end NotAffectedOrdersGrp
  { // Pty
    xml_element Pty_279{"Pty"};
    multiset<string> Pty_279_set;
    Pty_279.add_attribute("ID", "PartyID_t_67190140"); // 1
    Pty_279_set.insert("PartyID_t_67190140");
    Pty_279.add_attribute("Src", "6"); // 1
    Pty_279_set.insert("6");
    Pty_279.add_attribute("R", "55"); // 1
    Pty_279_set.insert("55");
    all_values.push_back(Pty_279_set);
    all_compo_names.insert("Pty_279_set");

    {
      xml_element Sub_279{"Sub"};
      multiset<string> Sub_279_set;
      Sub_279.add_attribute("ID", "PartySubID_t_902939005"); // 2
      Sub_279_set.insert("PartySubID_t_902939005");
      Sub_279.add_attribute("Typ", "11"); // 2
      Sub_279_set.insert("11");
      all_values.push_back(Sub_279_set);
      all_compo_names.insert("Sub_279_set");

      Pty_279.add_element(Sub_279);
    }
    elt.add_element(Pty_279);
  } // end Pty
  { // Pty
    xml_element Pty_280{"Pty"};
    multiset<string> Pty_280_set;
    Pty_280.add_attribute("ID", "PartyID_t_1114473639"); // 1
    Pty_280_set.insert("PartyID_t_1114473639");
    Pty_280.add_attribute("Src", "2"); // 1
    Pty_280_set.insert("2");
    Pty_280.add_attribute("R", "67"); // 1
    Pty_280_set.insert("67");
    all_values.push_back(Pty_280_set);
    all_compo_names.insert("Pty_280_set");

    {
      xml_element Sub_280{"Sub"};
      multiset<string> Sub_280_set;
      Sub_280.add_attribute("ID", "PartySubID_t_1650488083"); // 2
      Sub_280_set.insert("PartySubID_t_1650488083");
      Sub_280.add_attribute("Typ", "14"); // 2
      Sub_280_set.insert("14");
      all_values.push_back(Sub_280_set);
      all_compo_names.insert("Sub_280_set");

      Pty_280.add_element(Sub_280);
    }
    elt.add_element(Pty_280);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_1{"TgtPty"};
    multiset<string> TgtPty_1_set;
    TgtPty_1.add_attribute("ID", "TargetPartyID_t_430923884"); // 1
    TgtPty_1_set.insert("TargetPartyID_t_430923884");
    TgtPty_1.add_attribute("Src", "A"); // 1
    TgtPty_1_set.insert("A");
    TgtPty_1.add_attribute("R", "81"); // 1
    TgtPty_1_set.insert("81");
    all_values.push_back(TgtPty_1_set);
    all_compo_names.insert("TgtPty_1_set");

    elt.add_element(TgtPty_1);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_2{"TgtPty"};
    multiset<string> TgtPty_2_set;
    TgtPty_2.add_attribute("ID", "TargetPartyID_t_1964631356"); // 1
    TgtPty_2_set.insert("TargetPartyID_t_1964631356");
    TgtPty_2.add_attribute("Src", "D"); // 1
    TgtPty_2_set.insert("D");
    TgtPty_2.add_attribute("R", "49"); // 1
    TgtPty_2_set.insert("49");
    all_values.push_back(TgtPty_2_set);
    all_compo_names.insert("TgtPty_2_set");

    elt.add_element(TgtPty_2);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_3{"TgtPty"};
    multiset<string> TgtPty_3_set;
    TgtPty_3.add_attribute("ID", "TargetPartyID_t_162095432"); // 1
    TgtPty_3_set.insert("TargetPartyID_t_162095432");
    TgtPty_3.add_attribute("Src", "H"); // 1
    TgtPty_3_set.insert("H");
    TgtPty_3.add_attribute("R", "26"); // 1
    TgtPty_3_set.insert("26");
    all_values.push_back(TgtPty_3_set);
    all_compo_names.insert("TgtPty_3_set");

    elt.add_element(TgtPty_3);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_49{"Instrmt"};
    multiset<string> Instrmt_49_set;
    Instrmt_49.add_attribute("Sym", "Symbol_t_370357115"); // 1
    Instrmt_49_set.insert("Symbol_t_370357115");
    Instrmt_49.add_attribute("Sfx", "CD"); // 1
    Instrmt_49_set.insert("CD");
    Instrmt_49.add_attribute("ID", "SecurityID_t_1940999450"); // 1
    Instrmt_49_set.insert("SecurityID_t_1940999450");
    Instrmt_49.add_attribute("Src", "F"); // 1
    Instrmt_49_set.insert("F");
    Instrmt_49.add_attribute("Prod", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("ProdCmplx", "ProductComplex_t_1465379383"); // 1
    Instrmt_49_set.insert("ProductComplex_t_1465379383");
    Instrmt_49.add_attribute("SecGrp", "SecurityGroup_t_654651400"); // 1
    Instrmt_49_set.insert("SecurityGroup_t_654651400");
    Instrmt_49.add_attribute("CFI", "CFICode_t_1929436201"); // 1
    Instrmt_49_set.insert("CFICode_t_1929436201");
    Instrmt_49.add_attribute("SecTyp", "FXSPOT"); // 1
    Instrmt_49_set.insert("FXSPOT");
    Instrmt_49.add_attribute("SubTyp", "SecuritySubType_t_956171318"); // 1
    Instrmt_49_set.insert("SecuritySubType_t_956171318");
    Instrmt_49.add_attribute("MMY", "1725815076"); // 1
    Instrmt_49_set.insert("1725815076");
    Instrmt_49.add_attribute("MatDt", "MaturityDate_t_33936679"); // 1
    Instrmt_49_set.insert("MaturityDate_t_33936679");
    Instrmt_49.add_attribute("MatTm", "1734812785"); // 1
    Instrmt_49_set.insert("1734812785");
    Instrmt_49.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1395219140"); // 1
    Instrmt_49_set.insert("SettleOnOpenFlag_t_1395219140");
    Instrmt_49.add_attribute("AsgnMeth", "936875685"); // 1
    Instrmt_49_set.insert("936875685");
    Instrmt_49.add_attribute("Status", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("CpnPmt", "CouponPaymentDate_t_362209131"); // 1
    Instrmt_49_set.insert("CouponPaymentDate_t_362209131");
    Instrmt_49.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_49_set.insert("MM");
    Instrmt_49.add_attribute("Snrty", "SR"); // 1
    Instrmt_49_set.insert("SR");
    Instrmt_49.add_attribute("NotlPctOut", "20126972.140000"); // 1
    Instrmt_49_set.insert("20126972.140000");
    Instrmt_49.add_attribute("OrigNotlPctOut", "5765772.260000"); // 1
    Instrmt_49_set.insert("5765772.260000");
    Instrmt_49.add_attribute("AttchPnt", "9833735.370000"); // 1
    Instrmt_49_set.insert("9833735.370000");
    Instrmt_49.add_attribute("DetchPnt", "2961374.510000"); // 1
    Instrmt_49_set.insert("2961374.510000");
    Instrmt_49.add_attribute("Issued", "IssueDate_t_302265963"); // 1
    Instrmt_49_set.insert("IssueDate_t_302265963");
    Instrmt_49.add_attribute("RepoCollSecTyp", "1070170900"); // 1
    Instrmt_49_set.insert("1070170900");
    Instrmt_49.add_attribute("RepoTrm", "113285159"); // 1
    Instrmt_49_set.insert("113285159");
    Instrmt_49.add_attribute("RepoRt", "13048164.750000"); // 1
    Instrmt_49_set.insert("13048164.750000");
    Instrmt_49.add_attribute("Fctr", "11982462.510000"); // 1
    Instrmt_49_set.insert("11982462.510000");
    Instrmt_49.add_attribute("CrdRtg", "CreditRating_t_275380592"); // 1
    Instrmt_49_set.insert("CreditRating_t_275380592");
    Instrmt_49.add_attribute("Rgstry", "InstrRegistry_t_1458329869"); // 1
    Instrmt_49_set.insert("InstrRegistry_t_1458329869");
    Instrmt_49.add_attribute("IssuCtry", "2238264"); // 1
    Instrmt_49_set.insert("2238264");
    Instrmt_49.add_attribute("StPrv", "StateOrProvinceOfIssue_t_645737707"); // 1
    Instrmt_49_set.insert("StateOrProvinceOfIssue_t_645737707");
    Instrmt_49.add_attribute("Lcl", "LocaleOfIssue_t_936070836"); // 1
    Instrmt_49_set.insert("LocaleOfIssue_t_936070836");
    Instrmt_49.add_attribute("Redeem", "RedemptionDate_t_1943237714"); // 1
    Instrmt_49_set.insert("RedemptionDate_t_1943237714");
    Instrmt_49.add_attribute("StrkPx", "20118580.590000"); // 1
    Instrmt_49_set.insert("20118580.590000");
    Instrmt_49.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_49_set.insert("GBP");
    Instrmt_49.add_attribute("StrkMult", "5190258.110000"); // 1
    Instrmt_49_set.insert("5190258.110000");
    Instrmt_49.add_attribute("StrkValu", "9440706.910000"); // 1
    Instrmt_49_set.insert("9440706.910000");
    Instrmt_49.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("StrkPxBndryPrcsn", "5224021.190000"); // 1
    Instrmt_49_set.insert("5224021.190000");
    Instrmt_49.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("OptAt", "1062526267"); // 1
    Instrmt_49_set.insert("1062526267");
    Instrmt_49.add_attribute("Mult", "19176212.590000"); // 1
    Instrmt_49_set.insert("19176212.590000");
    Instrmt_49.add_attribute("MultTyp", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("MinPxIncr", "1323467.420000"); // 1
    Instrmt_49_set.insert("1323467.420000");
    Instrmt_49.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_191442568"); // 1
    Instrmt_49_set.insert("MinPriceIncrementAmount_t_191442568");
    Instrmt_49.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_49_set.insert("MMBtu");
    Instrmt_49.add_attribute("UOMQty", "21450439.570000"); // 1
    Instrmt_49_set.insert("21450439.570000");
    Instrmt_49.add_attribute("PxUOM", "USD"); // 1
    Instrmt_49_set.insert("USD");
    Instrmt_49.add_attribute("PxUOMQty", "15285749.490000"); // 1
    Instrmt_49_set.insert("15285749.490000");
    Instrmt_49.add_attribute("SettlMeth", "C"); // 1
    Instrmt_49_set.insert("C");
    Instrmt_49.add_attribute("ExerStyle", "0"); // 1
    Instrmt_49_set.insert("0");
    Instrmt_49.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_49_set.insert("3");
    Instrmt_49.add_attribute("OptPayAmt", "OptPayoutAmount_t_406982919"); // 1
    Instrmt_49_set.insert("OptPayoutAmount_t_406982919");
    Instrmt_49.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_49_set.insert("STD");
    Instrmt_49.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_49_set.insert("FUTDA");
    Instrmt_49.add_attribute("ListMeth", "1"); // 1
    Instrmt_49_set.insert("1");
    Instrmt_49.add_attribute("CapPx", "16859484.530000"); // 1
    Instrmt_49_set.insert("16859484.530000");
    Instrmt_49.add_attribute("FlrPx", "16517467.170000"); // 1
    Instrmt_49_set.insert("16517467.170000");
    Instrmt_49.add_attribute("PutCall", "0"); // 1
    Instrmt_49_set.insert("0");
    Instrmt_49.add_attribute("FlexInd", "false"); // 1
    Instrmt_49_set.insert("false");
    Instrmt_49.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_49_set.insert("false");
    Instrmt_49.add_attribute("TmUnit", "D"); // 1
    Instrmt_49_set.insert("D");
    Instrmt_49.add_attribute("CpnRt", "16366537.800000"); // 1
    Instrmt_49_set.insert("16366537.800000");
    Instrmt_49.add_attribute("Exch", "SecurityExchange_t_561150585"); // 1
    Instrmt_49_set.insert("SecurityExchange_t_561150585");
    Instrmt_49.add_attribute("PosLmt", "1711501441"); // 1
    Instrmt_49_set.insert("1711501441");
    Instrmt_49.add_attribute("NTPosLmt", "433240823"); // 1
    Instrmt_49_set.insert("433240823");
    Instrmt_49.add_attribute("Issr", "Issuer_t_1789030574"); // 1
    Instrmt_49_set.insert("Issuer_t_1789030574");
    Instrmt_49.add_attribute("EncIssrLen", "1039214923"); // 1
    Instrmt_49_set.insert("1039214923");
    Instrmt_49.add_attribute("EncIssr", "EncodedIssuer_t_955642943"); // 1
    Instrmt_49_set.insert("EncodedIssuer_t_955642943");
    Instrmt_49.add_attribute("Desc", "SecurityDesc_t_903363595"); // 1
    Instrmt_49_set.insert("SecurityDesc_t_903363595");
    Instrmt_49.add_attribute("EncSecDescLen", "2101741191"); // 1
    Instrmt_49_set.insert("2101741191");
    Instrmt_49.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_725780554"); // 1
    Instrmt_49_set.insert("EncodedSecurityDesc_t_725780554");
    Instrmt_49.add_attribute("Pool", "Pool_t_954572300"); // 1
    Instrmt_49_set.insert("Pool_t_954572300");
    Instrmt_49.add_attribute("CSetMo", "1991726914"); // 1
    Instrmt_49_set.insert("1991726914");
    Instrmt_49.add_attribute("CPPgm", "2"); // 1
    Instrmt_49_set.insert("2");
    Instrmt_49.add_attribute("CPRegT", "CPRegType_t_1146014868"); // 1
    Instrmt_49_set.insert("CPRegType_t_1146014868");
    Instrmt_49.add_attribute("Dated", "DatedDate_t_389444677"); // 1
    Instrmt_49_set.insert("DatedDate_t_389444677");
    Instrmt_49.add_attribute("IntAcrl", "InterestAccrualDate_t_855687606"); // 1
    Instrmt_49_set.insert("InterestAccrualDate_t_855687606");
    all_values.push_back(Instrmt_49_set);
    all_compo_names.insert("Instrmt_49_set");

    {
      xml_element AID_52{"AID"};
      multiset<string> AID_52_set;
      AID_52.add_attribute("AltID", "SecurityAltID_t_1914034662"); // 2
      AID_52_set.insert("SecurityAltID_t_1914034662");
      AID_52.add_attribute("AltIDSrc", "7"); // 2
      AID_52_set.insert("7");
      all_values.push_back(AID_52_set);
      all_compo_names.insert("AID_52_set");

      Instrmt_49.add_element(AID_52);
    }
    {
      xml_element SecXML_52{"SecXML"};
      multiset<string> SecXML_52_set;
      SecXML_52.add_attribute("Schema", "SecurityXMLSchema_t_1149385366"); // 2
      SecXML_52_set.insert("SecurityXMLSchema_t_1149385366");
      all_values.push_back(SecXML_52_set);
      all_compo_names.insert("SecXML_52_set");

      Instrmt_49.add_element(SecXML_52);
    }
    {
      xml_element Evnt_52{"Evnt"};
      multiset<string> Evnt_52_set;
      Evnt_52.add_attribute("EventTyp", "10"); // 2
      Evnt_52_set.insert("10");
      Evnt_52.add_attribute("Dt", "EventDate_t_221798180"); // 2
      Evnt_52_set.insert("EventDate_t_221798180");
      Evnt_52.add_attribute("Tm", "EventTime_t_1556368285"); // 2
      Evnt_52_set.insert("EventTime_t_1556368285");
      Evnt_52.add_attribute("Px", "10644553.550000"); // 2
      Evnt_52_set.insert("10644553.550000");
      Evnt_52.add_attribute("Txt", "EventText_t_1871306632"); // 2
      Evnt_52_set.insert("EventText_t_1871306632");
      all_values.push_back(Evnt_52_set);
      all_compo_names.insert("Evnt_52_set");

      Instrmt_49.add_element(Evnt_52);
    }
    {
      xml_element Pty_281{"Pty"};
      multiset<string> Pty_281_set;
      Pty_281.add_attribute("ID", "InstrumentPartyID_t_91248149"); // 2
      Pty_281_set.insert("InstrumentPartyID_t_91248149");
      Pty_281.add_attribute("Src", "A"); // 2
      Pty_281_set.insert("A");
      Pty_281.add_attribute("R", "67"); // 2
      Pty_281_set.insert("67");
      all_values.push_back(Pty_281_set);
      all_compo_names.insert("Pty_281_set");

      {
        xml_element Sub_281{"Sub"};
        multiset<string> Sub_281_set;
        Sub_281.add_attribute("ID", "InstrumentPartySubID_t_1419349367"); // 3
        Sub_281_set.insert("InstrumentPartySubID_t_1419349367");
        Sub_281.add_attribute("Typ", "28"); // 3
        Sub_281_set.insert("28");
        all_values.push_back(Sub_281_set);
        all_compo_names.insert("Sub_281_set");

        Pty_281.add_element(Sub_281);
      }
      Instrmt_49.add_element(Pty_281);
    }
    {
      xml_element CmplxEvnt_49{"CmplxEvnt"};
      multiset<string> CmplxEvnt_49_set;
      CmplxEvnt_49.add_attribute("Typ", "2"); // 2
      CmplxEvnt_49_set.insert("2");
      CmplxEvnt_49.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_464341349"); // 2
      CmplxEvnt_49_set.insert("ComplexOptPayoutAmount_t_464341349");
      CmplxEvnt_49.add_attribute("Px", "5666259.340000"); // 2
      CmplxEvnt_49_set.insert("5666259.340000");
      CmplxEvnt_49.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_49_set.insert("3");
      CmplxEvnt_49.add_attribute("PxBndryPrcsn", "283591.430000"); // 2
      CmplxEvnt_49_set.insert("283591.430000");
      CmplxEvnt_49.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_49_set.insert("2");
      CmplxEvnt_49.add_attribute("Cond", "2"); // 2
      CmplxEvnt_49_set.insert("2");
      all_values.push_back(CmplxEvnt_49_set);
      all_compo_names.insert("CmplxEvnt_49_set");

      {
        xml_element EvntDts_49{"EvntDts"};
        multiset<string> EvntDts_49_set;
        EvntDts_49.add_attribute("StartDt", "ComplexEventStartDate_t_1067574066"); // 3
        EvntDts_49_set.insert("ComplexEventStartDate_t_1067574066");
        EvntDts_49.add_attribute("EndDt", "ComplexEventEndDate_t_1955509701"); // 3
        EvntDts_49_set.insert("ComplexEventEndDate_t_1955509701");
        all_values.push_back(EvntDts_49_set);
        all_compo_names.insert("EvntDts_49_set");

        {
          xml_element EvntTms_49{"EvntTms"};
          multiset<string> EvntTms_49_set;
          EvntTms_49.add_attribute("StartTm", "1781647944"); // 4
          EvntTms_49_set.insert("1781647944");
          EvntTms_49.add_attribute("EndTm", "1021831609"); // 4
          EvntTms_49_set.insert("1021831609");
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
    xml_element Undly_70{"Undly"};
    multiset<string> Undly_70_set;
    Undly_70.add_attribute("Sym", "UnderlyingSymbol_t_533806607"); // 1
    Undly_70_set.insert("UnderlyingSymbol_t_533806607");
    Undly_70.add_attribute("Sfx", "CD"); // 1
    Undly_70_set.insert("CD");
    Undly_70.add_attribute("ID", "UnderlyingSecurityID_t_866074875"); // 1
    Undly_70_set.insert("UnderlyingSecurityID_t_866074875");
    Undly_70.add_attribute("Src", "K"); // 1
    Undly_70_set.insert("K");
    Undly_70.add_attribute("Prod", "2"); // 1
    Undly_70_set.insert("2");
    Undly_70.add_attribute("CFI", "UnderlyingCFICode_t_1255519553"); // 1
    Undly_70_set.insert("UnderlyingCFICode_t_1255519553");
    Undly_70.add_attribute("SecTyp", "TLQN"); // 1
    Undly_70_set.insert("TLQN");
    Undly_70.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1501302479"); // 1
    Undly_70_set.insert("UnderlyingSecuritySubType_t_1501302479");
    Undly_70.add_attribute("MMY", "1026055531"); // 1
    Undly_70_set.insert("1026055531");
    Undly_70.add_attribute("Mat", "UnderlyingMaturityDate_t_1249523228"); // 1
    Undly_70_set.insert("UnderlyingMaturityDate_t_1249523228");
    Undly_70.add_attribute("MatTm", "190655603"); // 1
    Undly_70_set.insert("190655603");
    Undly_70.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1247853711"); // 1
    Undly_70_set.insert("UnderlyingCouponPaymentDate_t_1247853711");
    Undly_70.add_attribute("RestrctTyp", "MM"); // 1
    Undly_70_set.insert("MM");
    Undly_70.add_attribute("Snrty", "SR"); // 1
    Undly_70_set.insert("SR");
    Undly_70.add_attribute("NotlPctOut", "9716766.960000"); // 1
    Undly_70_set.insert("9716766.960000");
    Undly_70.add_attribute("OrigNotlPctOut", "7496560.150000"); // 1
    Undly_70_set.insert("7496560.150000");
    Undly_70.add_attribute("AttchPnt", "18580311.190000"); // 1
    Undly_70_set.insert("18580311.190000");
    Undly_70.add_attribute("DetchPnt", "1997627.490000"); // 1
    Undly_70_set.insert("1997627.490000");
    Undly_70.add_attribute("Issued", "UnderlyingIssueDate_t_21521734"); // 1
    Undly_70_set.insert("UnderlyingIssueDate_t_21521734");
    Undly_70.add_attribute("RepoCollSecTyp", "788003274"); // 1
    Undly_70_set.insert("788003274");
    Undly_70.add_attribute("RepoTrm", "875349586"); // 1
    Undly_70_set.insert("875349586");
    Undly_70.add_attribute("RepoRt", "4858630.840000"); // 1
    Undly_70_set.insert("4858630.840000");
    Undly_70.add_attribute("Fctr", "13546292.080000"); // 1
    Undly_70_set.insert("13546292.080000");
    Undly_70.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2112087009"); // 1
    Undly_70_set.insert("UnderlyingCreditRating_t_2112087009");
    Undly_70.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_514222227"); // 1
    Undly_70_set.insert("UnderlyingInstrRegistry_t_514222227");
    Undly_70.add_attribute("Ctry", "207012318"); // 1
    Undly_70_set.insert("207012318");
    Undly_70.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_842887710"); // 1
    Undly_70_set.insert("UnderlyingStateOrProvinceOfIssue_t_842887710");
    Undly_70.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1581796293"); // 1
    Undly_70_set.insert("UnderlyingLocaleOfIssue_t_1581796293");
    Undly_70.add_attribute("Redeem", "UnderlyingRedemptionDate_t_15038371"); // 1
    Undly_70_set.insert("UnderlyingRedemptionDate_t_15038371");
    Undly_70.add_attribute("StrkPx", "4770520.060000"); // 1
    Undly_70_set.insert("4770520.060000");
    Undly_70.add_attribute("StrkCcy", "EUR"); // 1
    Undly_70_set.insert("EUR");
    Undly_70.add_attribute("OptA", "1065788602"); // 1
    Undly_70_set.insert("1065788602");
    Undly_70.add_attribute("Mult", "13222191.300000"); // 1
    Undly_70_set.insert("13222191.300000");
    Undly_70.add_attribute("MultTyp", "1"); // 1
    Undly_70_set.insert("1");
    Undly_70.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_70_set.insert("4");
    Undly_70.add_attribute("UOM", "Bbl"); // 1
    Undly_70_set.insert("Bbl");
    Undly_70.add_attribute("UOMQty", "20409167.460000"); // 1
    Undly_70_set.insert("20409167.460000");
    Undly_70.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_70_set.insert("MMbbl");
    Undly_70.add_attribute("PxUOMQty", "14563105.670000"); // 1
    Undly_70_set.insert("14563105.670000");
    Undly_70.add_attribute("TmUnit", "Min"); // 1
    Undly_70_set.insert("Min");
    Undly_70.add_attribute("ExerStyle", "0"); // 1
    Undly_70_set.insert("0");
    Undly_70.add_attribute("CpnRt", "5566806.300000"); // 1
    Undly_70_set.insert("5566806.300000");
    Undly_70.add_attribute("Exch", "UnderlyingSecurityExchange_t_1801364192"); // 1
    Undly_70_set.insert("UnderlyingSecurityExchange_t_1801364192");
    Undly_70.add_attribute("Issr", "UnderlyingIssuer_t_1452641812"); // 1
    Undly_70_set.insert("UnderlyingIssuer_t_1452641812");
    Undly_70.add_attribute("EncUndIssrLen", "1528357326"); // 1
    Undly_70_set.insert("1528357326");
    Undly_70.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_403536559"); // 1
    Undly_70_set.insert("EncodedUnderlyingIssuer_t_403536559");
    Undly_70.add_attribute("Desc", "UnderlyingSecurityDesc_t_1163189284"); // 1
    Undly_70_set.insert("UnderlyingSecurityDesc_t_1163189284");
    Undly_70.add_attribute("EncUndSecDescLen", "1728120076"); // 1
    Undly_70_set.insert("1728120076");
    Undly_70.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_425058294"); // 1
    Undly_70_set.insert("EncodedUnderlyingSecurityDesc_t_425058294");
    Undly_70.add_attribute("CPPgm", "UnderlyingCPProgram_t_1951192558"); // 1
    Undly_70_set.insert("UnderlyingCPProgram_t_1951192558");
    Undly_70.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_455986014"); // 1
    Undly_70_set.insert("UnderlyingCPRegType_t_455986014");
    Undly_70.add_attribute("AllocPct", "9109213.780000"); // 1
    Undly_70_set.insert("9109213.780000");
    Undly_70.add_attribute("Ccy", "EUR"); // 1
    Undly_70_set.insert("EUR");
    Undly_70.add_attribute("Qty", "14251436.050000"); // 1
    Undly_70_set.insert("14251436.050000");
    Undly_70.add_attribute("SettlTyp", "4"); // 1
    Undly_70_set.insert("4");
    Undly_70.add_attribute("CashAmt", "UnderlyingCashAmount_t_1263477085"); // 1
    Undly_70_set.insert("UnderlyingCashAmount_t_1263477085");
    Undly_70.add_attribute("CashTyp", "FIXED"); // 1
    Undly_70_set.insert("FIXED");
    Undly_70.add_attribute("Px", "13803888.080000"); // 1
    Undly_70_set.insert("13803888.080000");
    Undly_70.add_attribute("DirtPx", "17405290.910000"); // 1
    Undly_70_set.insert("17405290.910000");
    Undly_70.add_attribute("EndPx", "13156005.050000"); // 1
    Undly_70_set.insert("13156005.050000");
    Undly_70.add_attribute("StartVal", "UnderlyingStartValue_t_1929233787"); // 1
    Undly_70_set.insert("UnderlyingStartValue_t_1929233787");
    Undly_70.add_attribute("CurVal", "UnderlyingCurrentValue_t_658834046"); // 1
    Undly_70_set.insert("UnderlyingCurrentValue_t_658834046");
    Undly_70.add_attribute("EndVal", "UnderlyingEndValue_t_490335988"); // 1
    Undly_70_set.insert("UnderlyingEndValue_t_490335988");
    Undly_70.add_attribute("AdjQty", "17225290.230000"); // 1
    Undly_70_set.insert("17225290.230000");
    Undly_70.add_attribute("FxRate", "13118904.650000"); // 1
    Undly_70_set.insert("13118904.650000");
    Undly_70.add_attribute("FxRateCalc", "D"); // 1
    Undly_70_set.insert("D");
    Undly_70.add_attribute("CapValu", "UnderlyingCapValue_t_1615962121"); // 1
    Undly_70_set.insert("UnderlyingCapValue_t_1615962121");
    Undly_70.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1318765716"); // 1
    Undly_70_set.insert("UnderlyingSettlMethod_t_1318765716");
    Undly_70.add_attribute("PutCall", "229417942"); // 1
    Undly_70_set.insert("229417942");
    all_values.push_back(Undly_70_set);
    all_compo_names.insert("Undly_70_set");

    {
      xml_element UndAID_70{"UndAID"};
      multiset<string> UndAID_70_set;
      UndAID_70.add_attribute("AltID", "UnderlyingSecurityAltID_t_611434799"); // 2
      UndAID_70_set.insert("UnderlyingSecurityAltID_t_611434799");
      UndAID_70.add_attribute("AltIDSrc", "9"); // 2
      UndAID_70_set.insert("9");
      all_values.push_back(UndAID_70_set);
      all_compo_names.insert("UndAID_70_set");

      Undly_70.add_element(UndAID_70);
    }
    {
      xml_element Stip_106{"Stip"};
      multiset<string> Stip_106_set;
      Stip_106.add_attribute("Typ", "HEP"); // 2
      Stip_106_set.insert("HEP");
      Stip_106.add_attribute("Val", "UnderlyingStipValue_t_265315344"); // 2
      Stip_106_set.insert("UnderlyingStipValue_t_265315344");
      all_values.push_back(Stip_106_set);
      all_compo_names.insert("Stip_106_set");

      Undly_70.add_element(Stip_106);
    }
    {
      xml_element Pty_282{"Pty"};
      multiset<string> Pty_282_set;
      Pty_282.add_attribute("ID", "UnderlyingInstrumentPartyID_t_821454735"); // 2
      Pty_282_set.insert("UnderlyingInstrumentPartyID_t_821454735");
      Pty_282.add_attribute("Src", "4"); // 2
      Pty_282_set.insert("4");
      Pty_282.add_attribute("R", "58"); // 2
      Pty_282_set.insert("58");
      all_values.push_back(Pty_282_set);
      all_compo_names.insert("Pty_282_set");

      {
        xml_element Sub_282{"Sub"};
        multiset<string> Sub_282_set;
        Sub_282.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1984644019"); // 3
        Sub_282_set.insert("UnderlyingInstrumentPartySubID_t_1984644019");
        Sub_282.add_attribute("Typ", "16"); // 3
        Sub_282_set.insert("16");
        all_values.push_back(Sub_282_set);
        all_compo_names.insert("Sub_282_set");

        Pty_282.add_element(Sub_282);
      }
      Undly_70.add_element(Pty_282);
    }
    elt.add_element(Undly_70);
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
