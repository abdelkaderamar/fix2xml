#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiryAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiryAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollInqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiryAck_message_t_0;
  elt.add_attribute("ID", "CollInquiryID_t_478030775"); // 0
  CollateralInquiryAck_message_t_0.insert("CollInquiryID_t_478030775");
  elt.add_attribute("Stat", "4"); // 0
  CollateralInquiryAck_message_t_0.insert("4");
  elt.add_attribute("Rslt", "2"); // 0
  CollateralInquiryAck_message_t_0.insert("2");
  elt.add_attribute("TotNumRpts", "1517581869"); // 0
  CollateralInquiryAck_message_t_0.insert("1517581869");
  elt.add_attribute("Acct", "Account_t_1379625995"); // 0
  CollateralInquiryAck_message_t_0.insert("Account_t_1379625995");
  elt.add_attribute("AcctTyp", "4"); // 0
  CollateralInquiryAck_message_t_0.insert("4");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1303823158"); // 0
  CollateralInquiryAck_message_t_0.insert("ClOrdID_t_1303823158");
  elt.add_attribute("OrdID", "OrderID_t_1773980340"); // 0
  CollateralInquiryAck_message_t_0.insert("OrderID_t_1773980340");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1312187918"); // 0
  CollateralInquiryAck_message_t_0.insert("SecondaryOrderID_t_1312187918");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1040597826"); // 0
  CollateralInquiryAck_message_t_0.insert("SecondaryClOrdID_t_1040597826");
  elt.add_attribute("SettlDt", "SettlDate_t_1551024685"); // 0
  CollateralInquiryAck_message_t_0.insert("SettlDate_t_1551024685");
  elt.add_attribute("Qty", "7424544.650000"); // 0
  CollateralInquiryAck_message_t_0.insert("7424544.650000");
  elt.add_attribute("QtyTyp", "2"); // 0
  CollateralInquiryAck_message_t_0.insert("2");
  elt.add_attribute("Ccy", "USD"); // 0
  CollateralInquiryAck_message_t_0.insert("USD");
  elt.add_attribute("SesID", "2"); // 0
  CollateralInquiryAck_message_t_0.insert("2");
  elt.add_attribute("SesSub", "2"); // 0
  CollateralInquiryAck_message_t_0.insert("2");
  elt.add_attribute("SetSesID", "EOD"); // 0
  CollateralInquiryAck_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1372547555"); // 0
  CollateralInquiryAck_message_t_0.insert("SettlSessSubID_t_1372547555");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1250990727"); // 0
  CollateralInquiryAck_message_t_0.insert("ClearingBusinessDate_t_1250990727");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  CollateralInquiryAck_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_685763637"); // 0
  CollateralInquiryAck_message_t_0.insert("ResponseDestination_t_685763637");
  elt.add_attribute("Txt", "Text_t_981900011"); // 0
  CollateralInquiryAck_message_t_0.insert("Text_t_981900011");
  elt.add_attribute("EncTxtLen", "1181167890"); // 0
  CollateralInquiryAck_message_t_0.insert("1181167890");
  elt.add_attribute("EncTxt", "EncodedText_t_661865323"); // 0
  CollateralInquiryAck_message_t_0.insert("EncodedText_t_661865323");
  all_values.push_back(CollateralInquiryAck_message_t_0);
  all_compo_names.insert("CollateralInquiryAck_message_t");

  { // Hdr
    xml_element Hdr_16{"Hdr"};
    multiset<string> Hdr_16_set;
    Hdr_16.add_attribute("SeqNum", "1525000950"); // 1
    Hdr_16_set.insert("1525000950");
    Hdr_16.add_attribute("SID", "SenderCompID_t_1043064429"); // 1
    Hdr_16_set.insert("SenderCompID_t_1043064429");
    Hdr_16.add_attribute("TID", "TargetCompID_t_2511600"); // 1
    Hdr_16_set.insert("TargetCompID_t_2511600");
    Hdr_16.add_attribute("OBID", "OnBehalfOfCompID_t_1698274258"); // 1
    Hdr_16_set.insert("OnBehalfOfCompID_t_1698274258");
    Hdr_16.add_attribute("D2ID", "DeliverToCompID_t_82279020"); // 1
    Hdr_16_set.insert("DeliverToCompID_t_82279020");
    Hdr_16.add_attribute("SSub", "SenderSubID_t_2058328841"); // 1
    Hdr_16_set.insert("SenderSubID_t_2058328841");
    Hdr_16.add_attribute("SLoc", "SenderLocationID_t_28821385"); // 1
    Hdr_16_set.insert("SenderLocationID_t_28821385");
    Hdr_16.add_attribute("TSub", "TargetSubID_t_772222829"); // 1
    Hdr_16_set.insert("TargetSubID_t_772222829");
    Hdr_16.add_attribute("TLoc", "TargetLocationID_t_2112557611"); // 1
    Hdr_16_set.insert("TargetLocationID_t_2112557611");
    Hdr_16.add_attribute("OBSub", "OnBehalfOfSubID_t_1546403254"); // 1
    Hdr_16_set.insert("OnBehalfOfSubID_t_1546403254");
    Hdr_16.add_attribute("OBLoc", "OnBehalfOfLocationID_t_4365177"); // 1
    Hdr_16_set.insert("OnBehalfOfLocationID_t_4365177");
    Hdr_16.add_attribute("D2Sub", "DeliverToSubID_t_54961078"); // 1
    Hdr_16_set.insert("DeliverToSubID_t_54961078");
    Hdr_16.add_attribute("D2Loc", "DeliverToLocationID_t_702742765"); // 1
    Hdr_16_set.insert("DeliverToLocationID_t_702742765");
    Hdr_16.add_attribute("PosDup", "Y"); // 1
    Hdr_16_set.insert("Y");
    Hdr_16.add_attribute("PosRsnd", "Y"); // 1
    Hdr_16_set.insert("Y");
    Hdr_16.add_attribute("Snt", "SendingTime_t_1743340591"); // 1
    Hdr_16_set.insert("SendingTime_t_1743340591");
    Hdr_16.add_attribute("OrigSnt", "OrigSendingTime_t_1181886555"); // 1
    Hdr_16_set.insert("OrigSendingTime_t_1181886555");
    Hdr_16.add_attribute("MsgEncd", "MessageEncoding_t_2109603462"); // 1
    Hdr_16_set.insert("MessageEncoding_t_2109603462");
    all_values.push_back(Hdr_16_set);
    all_compo_names.insert("Hdr_16_set");

    {
      xml_element Hop_16{"Hop"};
      multiset<string> Hop_16_set;
      Hop_16.add_attribute("ID", "HopCompID_t_731866729"); // 2
      Hop_16_set.insert("HopCompID_t_731866729");
      Hop_16.add_attribute("Ref", "482951677"); // 2
      Hop_16_set.insert("482951677");
      Hop_16.add_attribute("Snt", "HopSendingTime_t_1020612653"); // 2
      Hop_16_set.insert("HopSendingTime_t_1020612653");
      all_values.push_back(Hop_16_set);
      all_compo_names.insert("Hop_16_set");

      Hdr_16.add_element(Hop_16);
    }
    elt.add_element(Hdr_16);
  } // end Hdr
  { // Qual
    xml_element Qual_2{"Qual"};
    multiset<string> Qual_2_set;
    Qual_2.add_attribute("Qual", "0"); // 1
    Qual_2_set.insert("0");
    all_values.push_back(Qual_2_set);
    all_compo_names.insert("Qual_2_set");

    elt.add_element(Qual_2);
  } // end Qual
  { // Qual
    xml_element Qual_3{"Qual"};
    multiset<string> Qual_3_set;
    Qual_3.add_attribute("Qual", "0"); // 1
    Qual_3_set.insert("0");
    all_values.push_back(Qual_3_set);
    all_compo_names.insert("Qual_3_set");

    elt.add_element(Qual_3);
  } // end Qual
  { // Qual
    xml_element Qual_4{"Qual"};
    multiset<string> Qual_4_set;
    Qual_4.add_attribute("Qual", "1"); // 1
    Qual_4_set.insert("1");
    all_values.push_back(Qual_4_set);
    all_compo_names.insert("Qual_4_set");

    elt.add_element(Qual_4);
  } // end Qual
  { // Pty
    xml_element Pty_68{"Pty"};
    multiset<string> Pty_68_set;
    Pty_68.add_attribute("ID", "PartyID_t_636276132"); // 1
    Pty_68_set.insert("PartyID_t_636276132");
    Pty_68.add_attribute("Src", "9"); // 1
    Pty_68_set.insert("9");
    Pty_68.add_attribute("R", "35"); // 1
    Pty_68_set.insert("35");
    all_values.push_back(Pty_68_set);
    all_compo_names.insert("Pty_68_set");

    {
      xml_element Sub_68{"Sub"};
      multiset<string> Sub_68_set;
      Sub_68.add_attribute("ID", "PartySubID_t_1817444022"); // 2
      Sub_68_set.insert("PartySubID_t_1817444022");
      Sub_68.add_attribute("Typ", "32"); // 2
      Sub_68_set.insert("32");
      all_values.push_back(Sub_68_set);
      all_compo_names.insert("Sub_68_set");

      Pty_68.add_element(Sub_68);
    }
    elt.add_element(Pty_68);
  } // end Pty
  { // CollExc
    xml_element CollExc_4{"CollExc"};
    multiset<string> CollExc_4_set;
    CollExc_4.add_attribute("ExecID", "ExecID_t_713024803"); // 1
    CollExc_4_set.insert("ExecID_t_713024803");
    all_values.push_back(CollExc_4_set);
    all_compo_names.insert("CollExc_4_set");

    elt.add_element(CollExc_4);
  } // end CollExc
  { // CollExc
    xml_element CollExc_5{"CollExc"};
    multiset<string> CollExc_5_set;
    CollExc_5.add_attribute("ExecID", "ExecID_t_35082961"); // 1
    CollExc_5_set.insert("ExecID_t_35082961");
    all_values.push_back(CollExc_5_set);
    all_compo_names.insert("CollExc_5_set");

    elt.add_element(CollExc_5);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_4{"TrdColl"};
    multiset<string> TrdColl_4_set;
    TrdColl_4.add_attribute("RptID", "TradeReportID_t_795303823"); // 1
    TrdColl_4_set.insert("TradeReportID_t_795303823");
    TrdColl_4.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_2093411803"); // 1
    TrdColl_4_set.insert("SecondaryTradeReportID_t_2093411803");
    all_values.push_back(TrdColl_4_set);
    all_compo_names.insert("TrdColl_4_set");

    elt.add_element(TrdColl_4);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_5{"TrdColl"};
    multiset<string> TrdColl_5_set;
    TrdColl_5.add_attribute("RptID", "TradeReportID_t_1757175709"); // 1
    TrdColl_5_set.insert("TradeReportID_t_1757175709");
    TrdColl_5.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1567526653"); // 1
    TrdColl_5_set.insert("SecondaryTradeReportID_t_1567526653");
    all_values.push_back(TrdColl_5_set);
    all_compo_names.insert("TrdColl_5_set");

    elt.add_element(TrdColl_5);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_6{"TrdColl"};
    multiset<string> TrdColl_6_set;
    TrdColl_6.add_attribute("RptID", "TradeReportID_t_2058485766"); // 1
    TrdColl_6_set.insert("TradeReportID_t_2058485766");
    TrdColl_6.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1156095315"); // 1
    TrdColl_6_set.insert("SecondaryTradeReportID_t_1156095315");
    all_values.push_back(TrdColl_6_set);
    all_compo_names.insert("TrdColl_6_set");

    elt.add_element(TrdColl_6);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_8{"Instrmt"};
    multiset<string> Instrmt_8_set;
    Instrmt_8.add_attribute("Sym", "Symbol_t_1571891830"); // 1
    Instrmt_8_set.insert("Symbol_t_1571891830");
    Instrmt_8.add_attribute("Sfx", "WI"); // 1
    Instrmt_8_set.insert("WI");
    Instrmt_8.add_attribute("ID", "SecurityID_t_1858838080"); // 1
    Instrmt_8_set.insert("SecurityID_t_1858838080");
    Instrmt_8.add_attribute("Src", "G"); // 1
    Instrmt_8_set.insert("G");
    Instrmt_8.add_attribute("Prod", "8"); // 1
    Instrmt_8_set.insert("8");
    Instrmt_8.add_attribute("ProdCmplx", "ProductComplex_t_1454695023"); // 1
    Instrmt_8_set.insert("ProductComplex_t_1454695023");
    Instrmt_8.add_attribute("SecGrp", "SecurityGroup_t_237156606"); // 1
    Instrmt_8_set.insert("SecurityGroup_t_237156606");
    Instrmt_8.add_attribute("CFI", "CFICode_t_1295232008"); // 1
    Instrmt_8_set.insert("CFICode_t_1295232008");
    Instrmt_8.add_attribute("SecTyp", "MPP"); // 1
    Instrmt_8_set.insert("MPP");
    Instrmt_8.add_attribute("SubTyp", "SecuritySubType_t_720108284"); // 1
    Instrmt_8_set.insert("SecuritySubType_t_720108284");
    Instrmt_8.add_attribute("MMY", "168361013"); // 1
    Instrmt_8_set.insert("168361013");
    Instrmt_8.add_attribute("MatDt", "MaturityDate_t_1646440246"); // 1
    Instrmt_8_set.insert("MaturityDate_t_1646440246");
    Instrmt_8.add_attribute("MatTm", "1287263956"); // 1
    Instrmt_8_set.insert("1287263956");
    Instrmt_8.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1740341158"); // 1
    Instrmt_8_set.insert("SettleOnOpenFlag_t_1740341158");
    Instrmt_8.add_attribute("AsgnMeth", "331382647"); // 1
    Instrmt_8_set.insert("331382647");
    Instrmt_8.add_attribute("Status", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("CpnPmt", "CouponPaymentDate_t_229133642"); // 1
    Instrmt_8_set.insert("CouponPaymentDate_t_229133642");
    Instrmt_8.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_8_set.insert("MR");
    Instrmt_8.add_attribute("Snrty", "SB"); // 1
    Instrmt_8_set.insert("SB");
    Instrmt_8.add_attribute("NotlPctOut", "20465776.640000"); // 1
    Instrmt_8_set.insert("20465776.640000");
    Instrmt_8.add_attribute("OrigNotlPctOut", "18821436.940000"); // 1
    Instrmt_8_set.insert("18821436.940000");
    Instrmt_8.add_attribute("AttchPnt", "16405695.360000"); // 1
    Instrmt_8_set.insert("16405695.360000");
    Instrmt_8.add_attribute("DetchPnt", "6121188.200000"); // 1
    Instrmt_8_set.insert("6121188.200000");
    Instrmt_8.add_attribute("Issued", "IssueDate_t_1917226656"); // 1
    Instrmt_8_set.insert("IssueDate_t_1917226656");
    Instrmt_8.add_attribute("RepoCollSecTyp", "1221440212"); // 1
    Instrmt_8_set.insert("1221440212");
    Instrmt_8.add_attribute("RepoTrm", "1407422643"); // 1
    Instrmt_8_set.insert("1407422643");
    Instrmt_8.add_attribute("RepoRt", "18631548.110000"); // 1
    Instrmt_8_set.insert("18631548.110000");
    Instrmt_8.add_attribute("Fctr", "8311322.730000"); // 1
    Instrmt_8_set.insert("8311322.730000");
    Instrmt_8.add_attribute("CrdRtg", "CreditRating_t_827465648"); // 1
    Instrmt_8_set.insert("CreditRating_t_827465648");
    Instrmt_8.add_attribute("Rgstry", "InstrRegistry_t_1774156929"); // 1
    Instrmt_8_set.insert("InstrRegistry_t_1774156929");
    Instrmt_8.add_attribute("IssuCtry", "1987227588"); // 1
    Instrmt_8_set.insert("1987227588");
    Instrmt_8.add_attribute("StPrv", "StateOrProvinceOfIssue_t_251873830"); // 1
    Instrmt_8_set.insert("StateOrProvinceOfIssue_t_251873830");
    Instrmt_8.add_attribute("Lcl", "LocaleOfIssue_t_1740120126"); // 1
    Instrmt_8_set.insert("LocaleOfIssue_t_1740120126");
    Instrmt_8.add_attribute("Redeem", "RedemptionDate_t_1698582021"); // 1
    Instrmt_8_set.insert("RedemptionDate_t_1698582021");
    Instrmt_8.add_attribute("StrkPx", "14546275.300000"); // 1
    Instrmt_8_set.insert("14546275.300000");
    Instrmt_8.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_8_set.insert("JPY");
    Instrmt_8.add_attribute("StrkMult", "16917841.360000"); // 1
    Instrmt_8_set.insert("16917841.360000");
    Instrmt_8.add_attribute("StrkValu", "734970.330000"); // 1
    Instrmt_8_set.insert("734970.330000");
    Instrmt_8.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_8_set.insert("3");
    Instrmt_8.add_attribute("StrkPxBndryPrcsn", "2418580.460000"); // 1
    Instrmt_8_set.insert("2418580.460000");
    Instrmt_8.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_8_set.insert("4");
    Instrmt_8.add_attribute("OptAt", "1551672729"); // 1
    Instrmt_8_set.insert("1551672729");
    Instrmt_8.add_attribute("Mult", "19821992.040000"); // 1
    Instrmt_8_set.insert("19821992.040000");
    Instrmt_8.add_attribute("MultTyp", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_8_set.insert("4");
    Instrmt_8.add_attribute("MinPxIncr", "638491.980000"); // 1
    Instrmt_8_set.insert("638491.980000");
    Instrmt_8.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_577299432"); // 1
    Instrmt_8_set.insert("MinPriceIncrementAmount_t_577299432");
    Instrmt_8.add_attribute("UOM", "Gal"); // 1
    Instrmt_8_set.insert("Gal");
    Instrmt_8.add_attribute("UOMQty", "21104268.630000"); // 1
    Instrmt_8_set.insert("21104268.630000");
    Instrmt_8.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_8_set.insert("MWh");
    Instrmt_8.add_attribute("PxUOMQty", "14656911.490000"); // 1
    Instrmt_8_set.insert("14656911.490000");
    Instrmt_8.add_attribute("SettlMeth", "P"); // 1
    Instrmt_8_set.insert("P");
    Instrmt_8.add_attribute("ExerStyle", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("OptPayAmt", "OptPayoutAmount_t_1982484678"); // 1
    Instrmt_8_set.insert("OptPayoutAmount_t_1982484678");
    Instrmt_8.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_8_set.insert("INT");
    Instrmt_8.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_8_set.insert("FUT");
    Instrmt_8.add_attribute("ListMeth", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("CapPx", "15715305.790000"); // 1
    Instrmt_8_set.insert("15715305.790000");
    Instrmt_8.add_attribute("FlrPx", "12105239.270000"); // 1
    Instrmt_8_set.insert("12105239.270000");
    Instrmt_8.add_attribute("PutCall", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("FlexInd", "true"); // 1
    Instrmt_8_set.insert("true");
    Instrmt_8.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_8_set.insert("true");
    Instrmt_8.add_attribute("TmUnit", "H"); // 1
    Instrmt_8_set.insert("H");
    Instrmt_8.add_attribute("CpnRt", "20899157.300000"); // 1
    Instrmt_8_set.insert("20899157.300000");
    Instrmt_8.add_attribute("Exch", "SecurityExchange_t_1767415696"); // 1
    Instrmt_8_set.insert("SecurityExchange_t_1767415696");
    Instrmt_8.add_attribute("PosLmt", "1913268528"); // 1
    Instrmt_8_set.insert("1913268528");
    Instrmt_8.add_attribute("NTPosLmt", "15929115"); // 1
    Instrmt_8_set.insert("15929115");
    Instrmt_8.add_attribute("Issr", "Issuer_t_664803549"); // 1
    Instrmt_8_set.insert("Issuer_t_664803549");
    Instrmt_8.add_attribute("EncIssrLen", "30193652"); // 1
    Instrmt_8_set.insert("30193652");
    Instrmt_8.add_attribute("EncIssr", "EncodedIssuer_t_257787162"); // 1
    Instrmt_8_set.insert("EncodedIssuer_t_257787162");
    Instrmt_8.add_attribute("Desc", "SecurityDesc_t_1208631649"); // 1
    Instrmt_8_set.insert("SecurityDesc_t_1208631649");
    Instrmt_8.add_attribute("EncSecDescLen", "1581866381"); // 1
    Instrmt_8_set.insert("1581866381");
    Instrmt_8.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_92502718"); // 1
    Instrmt_8_set.insert("EncodedSecurityDesc_t_92502718");
    Instrmt_8.add_attribute("Pool", "Pool_t_2083842396"); // 1
    Instrmt_8_set.insert("Pool_t_2083842396");
    Instrmt_8.add_attribute("CSetMo", "1943982171"); // 1
    Instrmt_8_set.insert("1943982171");
    Instrmt_8.add_attribute("CPPgm", "99"); // 1
    Instrmt_8_set.insert("99");
    Instrmt_8.add_attribute("CPRegT", "CPRegType_t_513658180"); // 1
    Instrmt_8_set.insert("CPRegType_t_513658180");
    Instrmt_8.add_attribute("Dated", "DatedDate_t_1769103784"); // 1
    Instrmt_8_set.insert("DatedDate_t_1769103784");
    Instrmt_8.add_attribute("IntAcrl", "InterestAccrualDate_t_119295132"); // 1
    Instrmt_8_set.insert("InterestAccrualDate_t_119295132");
    all_values.push_back(Instrmt_8_set);
    all_compo_names.insert("Instrmt_8_set");

    {
      xml_element AID_8{"AID"};
      multiset<string> AID_8_set;
      AID_8.add_attribute("AltID", "SecurityAltID_t_825617659"); // 2
      AID_8_set.insert("SecurityAltID_t_825617659");
      AID_8.add_attribute("AltIDSrc", "6"); // 2
      AID_8_set.insert("6");
      all_values.push_back(AID_8_set);
      all_compo_names.insert("AID_8_set");

      Instrmt_8.add_element(AID_8);
    }
    {
      xml_element SecXML_8{"SecXML"};
      multiset<string> SecXML_8_set;
      SecXML_8.add_attribute("Schema", "SecurityXMLSchema_t_694357167"); // 2
      SecXML_8_set.insert("SecurityXMLSchema_t_694357167");
      all_values.push_back(SecXML_8_set);
      all_compo_names.insert("SecXML_8_set");

      Instrmt_8.add_element(SecXML_8);
    }
    {
      xml_element Evnt_8{"Evnt"};
      multiset<string> Evnt_8_set;
      Evnt_8.add_attribute("EventTyp", "6"); // 2
      Evnt_8_set.insert("6");
      Evnt_8.add_attribute("Dt", "EventDate_t_1626958999"); // 2
      Evnt_8_set.insert("EventDate_t_1626958999");
      Evnt_8.add_attribute("Tm", "EventTime_t_529358197"); // 2
      Evnt_8_set.insert("EventTime_t_529358197");
      Evnt_8.add_attribute("Px", "7046937.960000"); // 2
      Evnt_8_set.insert("7046937.960000");
      Evnt_8.add_attribute("Txt", "EventText_t_850255337"); // 2
      Evnt_8_set.insert("EventText_t_850255337");
      all_values.push_back(Evnt_8_set);
      all_compo_names.insert("Evnt_8_set");

      Instrmt_8.add_element(Evnt_8);
    }
    {
      xml_element Pty_69{"Pty"};
      multiset<string> Pty_69_set;
      Pty_69.add_attribute("ID", "InstrumentPartyID_t_1191824876"); // 2
      Pty_69_set.insert("InstrumentPartyID_t_1191824876");
      Pty_69.add_attribute("Src", "D"); // 2
      Pty_69_set.insert("D");
      Pty_69.add_attribute("R", "43"); // 2
      Pty_69_set.insert("43");
      all_values.push_back(Pty_69_set);
      all_compo_names.insert("Pty_69_set");

      {
        xml_element Sub_69{"Sub"};
        multiset<string> Sub_69_set;
        Sub_69.add_attribute("ID", "InstrumentPartySubID_t_2106165386"); // 3
        Sub_69_set.insert("InstrumentPartySubID_t_2106165386");
        Sub_69.add_attribute("Typ", "28"); // 3
        Sub_69_set.insert("28");
        all_values.push_back(Sub_69_set);
        all_compo_names.insert("Sub_69_set");

        Pty_69.add_element(Sub_69);
      }
      Instrmt_8.add_element(Pty_69);
    }
    {
      xml_element CmplxEvnt_8{"CmplxEvnt"};
      multiset<string> CmplxEvnt_8_set;
      CmplxEvnt_8.add_attribute("Typ", "6"); // 2
      CmplxEvnt_8_set.insert("6");
      CmplxEvnt_8.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_180166129"); // 2
      CmplxEvnt_8_set.insert("ComplexOptPayoutAmount_t_180166129");
      CmplxEvnt_8.add_attribute("Px", "12353398.680000"); // 2
      CmplxEvnt_8_set.insert("12353398.680000");
      CmplxEvnt_8.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_8_set.insert("1");
      CmplxEvnt_8.add_attribute("PxBndryPrcsn", "20934346.570000"); // 2
      CmplxEvnt_8_set.insert("20934346.570000");
      CmplxEvnt_8.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_8_set.insert("2");
      CmplxEvnt_8.add_attribute("Cond", "1"); // 2
      CmplxEvnt_8_set.insert("1");
      all_values.push_back(CmplxEvnt_8_set);
      all_compo_names.insert("CmplxEvnt_8_set");

      {
        xml_element EvntDts_8{"EvntDts"};
        multiset<string> EvntDts_8_set;
        EvntDts_8.add_attribute("StartDt", "ComplexEventStartDate_t_2123628310"); // 3
        EvntDts_8_set.insert("ComplexEventStartDate_t_2123628310");
        EvntDts_8.add_attribute("EndDt", "ComplexEventEndDate_t_1509056146"); // 3
        EvntDts_8_set.insert("ComplexEventEndDate_t_1509056146");
        all_values.push_back(EvntDts_8_set);
        all_compo_names.insert("EvntDts_8_set");

        {
          xml_element EvntTms_8{"EvntTms"};
          multiset<string> EvntTms_8_set;
          EvntTms_8.add_attribute("StartTm", "20801515"); // 4
          EvntTms_8_set.insert("20801515");
          EvntTms_8.add_attribute("EndTm", "1558011043"); // 4
          EvntTms_8_set.insert("1558011043");
          all_values.push_back(EvntTms_8_set);
          all_compo_names.insert("EvntTms_8_set");

          EvntDts_8.add_element(EvntTms_8);
        }
        CmplxEvnt_8.add_element(EvntDts_8);
      }
      Instrmt_8.add_element(CmplxEvnt_8);
    }
    elt.add_element(Instrmt_8);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_5{"FinDetls"};
    multiset<string> FinDetls_5_set;
    FinDetls_5.add_attribute("AgmtDesc", "AgreementDesc_t_1601558864"); // 1
    FinDetls_5_set.insert("AgreementDesc_t_1601558864");
    FinDetls_5.add_attribute("AgmtID", "AgreementID_t_2104643911"); // 1
    FinDetls_5_set.insert("AgreementID_t_2104643911");
    FinDetls_5.add_attribute("AgmtDt", "AgreementDate_t_1354509566"); // 1
    FinDetls_5_set.insert("AgreementDate_t_1354509566");
    FinDetls_5.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_5_set.insert("JPY");
    FinDetls_5.add_attribute("TrmTyp", "3"); // 1
    FinDetls_5_set.insert("3");
    FinDetls_5.add_attribute("StartDt", "StartDate_t_1877205913"); // 1
    FinDetls_5_set.insert("StartDate_t_1877205913");
    FinDetls_5.add_attribute("EndDt", "EndDate_t_1296436103"); // 1
    FinDetls_5_set.insert("EndDate_t_1296436103");
    FinDetls_5.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_5_set.insert("0");
    FinDetls_5.add_attribute("MgnRatio", "4240794.320000"); // 1
    FinDetls_5_set.insert("4240794.320000");
    all_values.push_back(FinDetls_5_set);
    all_compo_names.insert("FinDetls_5_set");

    elt.add_element(FinDetls_5);
  } // end FinDetls
  { // Leg
    xml_element Leg_14{"Leg"};
    multiset<string> Leg_14_set;
    Leg_14.add_attribute("Sym", "LegSymbol_t_1542916339"); // 1
    Leg_14_set.insert("LegSymbol_t_1542916339");
    Leg_14.add_attribute("Sfx", "CD"); // 1
    Leg_14_set.insert("CD");
    Leg_14.add_attribute("ID", "LegSecurityID_t_760966398"); // 1
    Leg_14_set.insert("LegSecurityID_t_760966398");
    Leg_14.add_attribute("Src", "F"); // 1
    Leg_14_set.insert("F");
    Leg_14.add_attribute("Prod", "7"); // 1
    Leg_14_set.insert("7");
    Leg_14.add_attribute("CFI", "LegCFICode_t_889707126"); // 1
    Leg_14_set.insert("LegCFICode_t_889707126");
    Leg_14.add_attribute("SecTyp", "BA"); // 1
    Leg_14_set.insert("BA");
    Leg_14.add_attribute("SecSubTyp", "LegSecuritySubType_t_2103944244"); // 1
    Leg_14_set.insert("LegSecuritySubType_t_2103944244");
    Leg_14.add_attribute("MMY", "35131264"); // 1
    Leg_14_set.insert("35131264");
    Leg_14.add_attribute("Mat", "LegMaturityDate_t_833901561"); // 1
    Leg_14_set.insert("LegMaturityDate_t_833901561");
    Leg_14.add_attribute("MatTm", "136626726"); // 1
    Leg_14_set.insert("136626726");
    Leg_14.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1270471133"); // 1
    Leg_14_set.insert("LegCouponPaymentDate_t_1270471133");
    Leg_14.add_attribute("Issued", "LegIssueDate_t_1128751526"); // 1
    Leg_14_set.insert("LegIssueDate_t_1128751526");
    Leg_14.add_attribute("RepoCollSecTyp", "82577735"); // 1
    Leg_14_set.insert("82577735");
    Leg_14.add_attribute("RepoTrm", "374256469"); // 1
    Leg_14_set.insert("374256469");
    Leg_14.add_attribute("RepoRt", "20884050.410000"); // 1
    Leg_14_set.insert("20884050.410000");
    Leg_14.add_attribute("Fctr", "587223.970000"); // 1
    Leg_14_set.insert("587223.970000");
    Leg_14.add_attribute("CrdRtg", "LegCreditRating_t_1883312615"); // 1
    Leg_14_set.insert("LegCreditRating_t_1883312615");
    Leg_14.add_attribute("Rgstry", "LegInstrRegistry_t_2109206556"); // 1
    Leg_14_set.insert("LegInstrRegistry_t_2109206556");
    Leg_14.add_attribute("Ctry", "1616733441"); // 1
    Leg_14_set.insert("1616733441");
    Leg_14.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1337387831"); // 1
    Leg_14_set.insert("LegStateOrProvinceOfIssue_t_1337387831");
    Leg_14.add_attribute("Lcl", "LegLocaleOfIssue_t_2066366820"); // 1
    Leg_14_set.insert("LegLocaleOfIssue_t_2066366820");
    Leg_14.add_attribute("Redeem", "LegRedemptionDate_t_823759359"); // 1
    Leg_14_set.insert("LegRedemptionDate_t_823759359");
    Leg_14.add_attribute("Strk", "9478149.650000"); // 1
    Leg_14_set.insert("9478149.650000");
    Leg_14.add_attribute("StrkCcy", "GBP"); // 1
    Leg_14_set.insert("GBP");
    Leg_14.add_attribute("OptA", "677537230"); // 1
    Leg_14_set.insert("677537230");
    Leg_14.add_attribute("Cmult", "16861377.190000"); // 1
    Leg_14_set.insert("16861377.190000");
    Leg_14.add_attribute("MultTyp", "2"); // 1
    Leg_14_set.insert("2");
    Leg_14.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_14_set.insert("3");
    Leg_14.add_attribute("UOM", "Bbl"); // 1
    Leg_14_set.insert("Bbl");
    Leg_14.add_attribute("UOMQty", "11112790.930000"); // 1
    Leg_14_set.insert("11112790.930000");
    Leg_14.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_14_set.insert("MMbbl");
    Leg_14.add_attribute("PxUOMQty", "3558930.720000"); // 1
    Leg_14_set.insert("3558930.720000");
    Leg_14.add_attribute("TmUnit", "Yr"); // 1
    Leg_14_set.insert("Yr");
    Leg_14.add_attribute("ExerStyle", "0"); // 1
    Leg_14_set.insert("0");
    Leg_14.add_attribute("CpnRt", "12456001.980000"); // 1
    Leg_14_set.insert("12456001.980000");
    Leg_14.add_attribute("Exch", "LegSecurityExchange_t_1515950766"); // 1
    Leg_14_set.insert("LegSecurityExchange_t_1515950766");
    Leg_14.add_attribute("Issr", "LegIssuer_t_2009293748"); // 1
    Leg_14_set.insert("LegIssuer_t_2009293748");
    Leg_14.add_attribute("EncLegIssrLen", "1280731463"); // 1
    Leg_14_set.insert("1280731463");
    Leg_14.add_attribute("EncLegIssr", "EncodedLegIssuer_t_202368680"); // 1
    Leg_14_set.insert("EncodedLegIssuer_t_202368680");
    Leg_14.add_attribute("Desc", "LegSecurityDesc_t_2145920474"); // 1
    Leg_14_set.insert("LegSecurityDesc_t_2145920474");
    Leg_14.add_attribute("EncLegSecDescLen", "403718948"); // 1
    Leg_14_set.insert("403718948");
    Leg_14.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1331120206"); // 1
    Leg_14_set.insert("EncodedLegSecurityDesc_t_1331120206");
    Leg_14.add_attribute("RatioQty", "810145.610000"); // 1
    Leg_14_set.insert("810145.610000");
    Leg_14.add_attribute("Side", "A"); // 1
    Leg_14_set.insert("A");
    Leg_14.add_attribute("Ccy", "EUR"); // 1
    Leg_14_set.insert("EUR");
    Leg_14.add_attribute("Pool", "LegPool_t_513804384"); // 1
    Leg_14_set.insert("LegPool_t_513804384");
    Leg_14.add_attribute("Dated", "LegDatedDate_t_1233764508"); // 1
    Leg_14_set.insert("LegDatedDate_t_1233764508");
    Leg_14.add_attribute("CSetMo", "1756470400"); // 1
    Leg_14_set.insert("1756470400");
    Leg_14.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1851192215"); // 1
    Leg_14_set.insert("LegInterestAccrualDate_t_1851192215");
    Leg_14.add_attribute("PutCall", "1152647680"); // 1
    Leg_14_set.insert("1152647680");
    Leg_14.add_attribute("LegOptionRatio", "4327461.110000"); // 1
    Leg_14_set.insert("4327461.110000");
    Leg_14.add_attribute("Px", "6515235.320000"); // 1
    Leg_14_set.insert("6515235.320000");
    all_values.push_back(Leg_14_set);
    all_compo_names.insert("Leg_14_set");

    {
      xml_element LegAID_14{"LegAID"};
      multiset<string> LegAID_14_set;
      LegAID_14.add_attribute("SecAltID", "LegSecurityAltID_t_1542349296"); // 2
      LegAID_14_set.insert("LegSecurityAltID_t_1542349296");
      LegAID_14.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_14_set.insert("L");
      all_values.push_back(LegAID_14_set);
      all_compo_names.insert("LegAID_14_set");

      Leg_14.add_element(LegAID_14);
    }
    elt.add_element(Leg_14);
  } // end Leg
  { // Undly
    xml_element Undly_10{"Undly"};
    multiset<string> Undly_10_set;
    Undly_10.add_attribute("Sym", "UnderlyingSymbol_t_1081003367"); // 1
    Undly_10_set.insert("UnderlyingSymbol_t_1081003367");
    Undly_10.add_attribute("Sfx", "WI"); // 1
    Undly_10_set.insert("WI");
    Undly_10.add_attribute("ID", "UnderlyingSecurityID_t_283193778"); // 1
    Undly_10_set.insert("UnderlyingSecurityID_t_283193778");
    Undly_10.add_attribute("Src", "I"); // 1
    Undly_10_set.insert("I");
    Undly_10.add_attribute("Prod", "2"); // 1
    Undly_10_set.insert("2");
    Undly_10.add_attribute("CFI", "UnderlyingCFICode_t_190764423"); // 1
    Undly_10_set.insert("UnderlyingCFICode_t_190764423");
    Undly_10.add_attribute("SecTyp", "TECP"); // 1
    Undly_10_set.insert("TECP");
    Undly_10.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2121760494"); // 1
    Undly_10_set.insert("UnderlyingSecuritySubType_t_2121760494");
    Undly_10.add_attribute("MMY", "96113926"); // 1
    Undly_10_set.insert("96113926");
    Undly_10.add_attribute("Mat", "UnderlyingMaturityDate_t_129939663"); // 1
    Undly_10_set.insert("UnderlyingMaturityDate_t_129939663");
    Undly_10.add_attribute("MatTm", "1490227612"); // 1
    Undly_10_set.insert("1490227612");
    Undly_10.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2105407674"); // 1
    Undly_10_set.insert("UnderlyingCouponPaymentDate_t_2105407674");
    Undly_10.add_attribute("RestrctTyp", "MM"); // 1
    Undly_10_set.insert("MM");
    Undly_10.add_attribute("Snrty", "SD"); // 1
    Undly_10_set.insert("SD");
    Undly_10.add_attribute("NotlPctOut", "21038445.000000"); // 1
    Undly_10_set.insert("21038445.000000");
    Undly_10.add_attribute("OrigNotlPctOut", "18143900.740000"); // 1
    Undly_10_set.insert("18143900.740000");
    Undly_10.add_attribute("AttchPnt", "8762328.510000"); // 1
    Undly_10_set.insert("8762328.510000");
    Undly_10.add_attribute("DetchPnt", "373754.140000"); // 1
    Undly_10_set.insert("373754.140000");
    Undly_10.add_attribute("Issued", "UnderlyingIssueDate_t_444881843"); // 1
    Undly_10_set.insert("UnderlyingIssueDate_t_444881843");
    Undly_10.add_attribute("RepoCollSecTyp", "790802"); // 1
    Undly_10_set.insert("790802");
    Undly_10.add_attribute("RepoTrm", "177112373"); // 1
    Undly_10_set.insert("177112373");
    Undly_10.add_attribute("RepoRt", "9586862.270000"); // 1
    Undly_10_set.insert("9586862.270000");
    Undly_10.add_attribute("Fctr", "12345553.100000"); // 1
    Undly_10_set.insert("12345553.100000");
    Undly_10.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1933582773"); // 1
    Undly_10_set.insert("UnderlyingCreditRating_t_1933582773");
    Undly_10.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_662394795"); // 1
    Undly_10_set.insert("UnderlyingInstrRegistry_t_662394795");
    Undly_10.add_attribute("Ctry", "239719342"); // 1
    Undly_10_set.insert("239719342");
    Undly_10.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_218845236"); // 1
    Undly_10_set.insert("UnderlyingStateOrProvinceOfIssue_t_218845236");
    Undly_10.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1313918327"); // 1
    Undly_10_set.insert("UnderlyingLocaleOfIssue_t_1313918327");
    Undly_10.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1782068638"); // 1
    Undly_10_set.insert("UnderlyingRedemptionDate_t_1782068638");
    Undly_10.add_attribute("StrkPx", "3039967.620000"); // 1
    Undly_10_set.insert("3039967.620000");
    Undly_10.add_attribute("StrkCcy", "GBP"); // 1
    Undly_10_set.insert("GBP");
    Undly_10.add_attribute("OptA", "2104994689"); // 1
    Undly_10_set.insert("2104994689");
    Undly_10.add_attribute("Mult", "7786892.200000"); // 1
    Undly_10_set.insert("7786892.200000");
    Undly_10.add_attribute("MultTyp", "1"); // 1
    Undly_10_set.insert("1");
    Undly_10.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_10_set.insert("4");
    Undly_10.add_attribute("UOM", "Bbl"); // 1
    Undly_10_set.insert("Bbl");
    Undly_10.add_attribute("UOMQty", "2758578.640000"); // 1
    Undly_10_set.insert("2758578.640000");
    Undly_10.add_attribute("PxUOM", "Bu"); // 1
    Undly_10_set.insert("Bu");
    Undly_10.add_attribute("PxUOMQty", "10655675.700000"); // 1
    Undly_10_set.insert("10655675.700000");
    Undly_10.add_attribute("TmUnit", "H"); // 1
    Undly_10_set.insert("H");
    Undly_10.add_attribute("ExerStyle", "0"); // 1
    Undly_10_set.insert("0");
    Undly_10.add_attribute("CpnRt", "10234915.960000"); // 1
    Undly_10_set.insert("10234915.960000");
    Undly_10.add_attribute("Exch", "UnderlyingSecurityExchange_t_1816468654"); // 1
    Undly_10_set.insert("UnderlyingSecurityExchange_t_1816468654");
    Undly_10.add_attribute("Issr", "UnderlyingIssuer_t_1731921517"); // 1
    Undly_10_set.insert("UnderlyingIssuer_t_1731921517");
    Undly_10.add_attribute("EncUndIssrLen", "979852449"); // 1
    Undly_10_set.insert("979852449");
    Undly_10.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1483375080"); // 1
    Undly_10_set.insert("EncodedUnderlyingIssuer_t_1483375080");
    Undly_10.add_attribute("Desc", "UnderlyingSecurityDesc_t_460670720"); // 1
    Undly_10_set.insert("UnderlyingSecurityDesc_t_460670720");
    Undly_10.add_attribute("EncUndSecDescLen", "1017227863"); // 1
    Undly_10_set.insert("1017227863");
    Undly_10.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1928256924"); // 1
    Undly_10_set.insert("EncodedUnderlyingSecurityDesc_t_1928256924");
    Undly_10.add_attribute("CPPgm", "UnderlyingCPProgram_t_461461522"); // 1
    Undly_10_set.insert("UnderlyingCPProgram_t_461461522");
    Undly_10.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1194340236"); // 1
    Undly_10_set.insert("UnderlyingCPRegType_t_1194340236");
    Undly_10.add_attribute("AllocPct", "7394595.030000"); // 1
    Undly_10_set.insert("7394595.030000");
    Undly_10.add_attribute("Ccy", "EUR"); // 1
    Undly_10_set.insert("EUR");
    Undly_10.add_attribute("Qty", "14018542.980000"); // 1
    Undly_10_set.insert("14018542.980000");
    Undly_10.add_attribute("SettlTyp", "5"); // 1
    Undly_10_set.insert("5");
    Undly_10.add_attribute("CashAmt", "UnderlyingCashAmount_t_1199284597"); // 1
    Undly_10_set.insert("UnderlyingCashAmount_t_1199284597");
    Undly_10.add_attribute("CashTyp", "FIXED"); // 1
    Undly_10_set.insert("FIXED");
    Undly_10.add_attribute("Px", "15703211.660000"); // 1
    Undly_10_set.insert("15703211.660000");
    Undly_10.add_attribute("DirtPx", "15032813.590000"); // 1
    Undly_10_set.insert("15032813.590000");
    Undly_10.add_attribute("EndPx", "10637844.200000"); // 1
    Undly_10_set.insert("10637844.200000");
    Undly_10.add_attribute("StartVal", "UnderlyingStartValue_t_138425876"); // 1
    Undly_10_set.insert("UnderlyingStartValue_t_138425876");
    Undly_10.add_attribute("CurVal", "UnderlyingCurrentValue_t_1460792401"); // 1
    Undly_10_set.insert("UnderlyingCurrentValue_t_1460792401");
    Undly_10.add_attribute("EndVal", "UnderlyingEndValue_t_1842473641"); // 1
    Undly_10_set.insert("UnderlyingEndValue_t_1842473641");
    Undly_10.add_attribute("AdjQty", "15299442.750000"); // 1
    Undly_10_set.insert("15299442.750000");
    Undly_10.add_attribute("FxRate", "356131.670000"); // 1
    Undly_10_set.insert("356131.670000");
    Undly_10.add_attribute("FxRateCalc", "M"); // 1
    Undly_10_set.insert("M");
    Undly_10.add_attribute("CapValu", "UnderlyingCapValue_t_1805802139"); // 1
    Undly_10_set.insert("UnderlyingCapValue_t_1805802139");
    Undly_10.add_attribute("SetMeth", "UnderlyingSettlMethod_t_732194427"); // 1
    Undly_10_set.insert("UnderlyingSettlMethod_t_732194427");
    Undly_10.add_attribute("PutCall", "1730011206"); // 1
    Undly_10_set.insert("1730011206");
    all_values.push_back(Undly_10_set);
    all_compo_names.insert("Undly_10_set");

    {
      xml_element UndAID_10{"UndAID"};
      multiset<string> UndAID_10_set;
      UndAID_10.add_attribute("AltID", "UnderlyingSecurityAltID_t_64116018"); // 2
      UndAID_10_set.insert("UnderlyingSecurityAltID_t_64116018");
      UndAID_10.add_attribute("AltIDSrc", "2"); // 2
      UndAID_10_set.insert("2");
      all_values.push_back(UndAID_10_set);
      all_compo_names.insert("UndAID_10_set");

      Undly_10.add_element(UndAID_10);
    }
    {
      xml_element Stip_23{"Stip"};
      multiset<string> Stip_23_set;
      Stip_23.add_attribute("Typ", "PPT"); // 2
      Stip_23_set.insert("PPT");
      Stip_23.add_attribute("Val", "UnderlyingStipValue_t_1880584672"); // 2
      Stip_23_set.insert("UnderlyingStipValue_t_1880584672");
      all_values.push_back(Stip_23_set);
      all_compo_names.insert("Stip_23_set");

      Undly_10.add_element(Stip_23);
    }
    {
      xml_element Pty_70{"Pty"};
      multiset<string> Pty_70_set;
      Pty_70.add_attribute("ID", "UnderlyingInstrumentPartyID_t_355957520"); // 2
      Pty_70_set.insert("UnderlyingInstrumentPartyID_t_355957520");
      Pty_70.add_attribute("Src", "1"); // 2
      Pty_70_set.insert("1");
      Pty_70.add_attribute("R", "6"); // 2
      Pty_70_set.insert("6");
      all_values.push_back(Pty_70_set);
      all_compo_names.insert("Pty_70_set");

      {
        xml_element Sub_70{"Sub"};
        multiset<string> Sub_70_set;
        Sub_70.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_816628240"); // 3
        Sub_70_set.insert("UnderlyingInstrumentPartySubID_t_816628240");
        Sub_70.add_attribute("Typ", "33"); // 3
        Sub_70_set.insert("33");
        all_values.push_back(Sub_70_set);
        all_compo_names.insert("Sub_70_set");

        Pty_70.add_element(Sub_70);
      }
      Undly_10.add_element(Pty_70);
    }
    elt.add_element(Undly_10);
  } // end Undly
  { // Undly
    xml_element Undly_11{"Undly"};
    multiset<string> Undly_11_set;
    Undly_11.add_attribute("Sym", "UnderlyingSymbol_t_997249381"); // 1
    Undly_11_set.insert("UnderlyingSymbol_t_997249381");
    Undly_11.add_attribute("Sfx", "WI"); // 1
    Undly_11_set.insert("WI");
    Undly_11.add_attribute("ID", "UnderlyingSecurityID_t_1649956055"); // 1
    Undly_11_set.insert("UnderlyingSecurityID_t_1649956055");
    Undly_11.add_attribute("Src", "K"); // 1
    Undly_11_set.insert("K");
    Undly_11.add_attribute("Prod", "5"); // 1
    Undly_11_set.insert("5");
    Undly_11.add_attribute("CFI", "UnderlyingCFICode_t_482911768"); // 1
    Undly_11_set.insert("UnderlyingCFICode_t_482911768");
    Undly_11.add_attribute("SecTyp", "CMO"); // 1
    Undly_11_set.insert("CMO");
    Undly_11.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_614875475"); // 1
    Undly_11_set.insert("UnderlyingSecuritySubType_t_614875475");
    Undly_11.add_attribute("MMY", "1682196365"); // 1
    Undly_11_set.insert("1682196365");
    Undly_11.add_attribute("Mat", "UnderlyingMaturityDate_t_1559368513"); // 1
    Undly_11_set.insert("UnderlyingMaturityDate_t_1559368513");
    Undly_11.add_attribute("MatTm", "37712993"); // 1
    Undly_11_set.insert("37712993");
    Undly_11.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1037994077"); // 1
    Undly_11_set.insert("UnderlyingCouponPaymentDate_t_1037994077");
    Undly_11.add_attribute("RestrctTyp", "MR"); // 1
    Undly_11_set.insert("MR");
    Undly_11.add_attribute("Snrty", "SR"); // 1
    Undly_11_set.insert("SR");
    Undly_11.add_attribute("NotlPctOut", "3513028.300000"); // 1
    Undly_11_set.insert("3513028.300000");
    Undly_11.add_attribute("OrigNotlPctOut", "1706592.780000"); // 1
    Undly_11_set.insert("1706592.780000");
    Undly_11.add_attribute("AttchPnt", "17060831.440000"); // 1
    Undly_11_set.insert("17060831.440000");
    Undly_11.add_attribute("DetchPnt", "3869159.970000"); // 1
    Undly_11_set.insert("3869159.970000");
    Undly_11.add_attribute("Issued", "UnderlyingIssueDate_t_835102915"); // 1
    Undly_11_set.insert("UnderlyingIssueDate_t_835102915");
    Undly_11.add_attribute("RepoCollSecTyp", "1364401635"); // 1
    Undly_11_set.insert("1364401635");
    Undly_11.add_attribute("RepoTrm", "1119110424"); // 1
    Undly_11_set.insert("1119110424");
    Undly_11.add_attribute("RepoRt", "4176304.730000"); // 1
    Undly_11_set.insert("4176304.730000");
    Undly_11.add_attribute("Fctr", "14285176.540000"); // 1
    Undly_11_set.insert("14285176.540000");
    Undly_11.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1890630075"); // 1
    Undly_11_set.insert("UnderlyingCreditRating_t_1890630075");
    Undly_11.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1023649628"); // 1
    Undly_11_set.insert("UnderlyingInstrRegistry_t_1023649628");
    Undly_11.add_attribute("Ctry", "1161618678"); // 1
    Undly_11_set.insert("1161618678");
    Undly_11.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_99103948"); // 1
    Undly_11_set.insert("UnderlyingStateOrProvinceOfIssue_t_99103948");
    Undly_11.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_462037584"); // 1
    Undly_11_set.insert("UnderlyingLocaleOfIssue_t_462037584");
    Undly_11.add_attribute("Redeem", "UnderlyingRedemptionDate_t_230611135"); // 1
    Undly_11_set.insert("UnderlyingRedemptionDate_t_230611135");
    Undly_11.add_attribute("StrkPx", "9157321.880000"); // 1
    Undly_11_set.insert("9157321.880000");
    Undly_11.add_attribute("StrkCcy", "GBP"); // 1
    Undly_11_set.insert("GBP");
    Undly_11.add_attribute("OptA", "46338303"); // 1
    Undly_11_set.insert("46338303");
    Undly_11.add_attribute("Mult", "4201258.100000"); // 1
    Undly_11_set.insert("4201258.100000");
    Undly_11.add_attribute("MultTyp", "2"); // 1
    Undly_11_set.insert("2");
    Undly_11.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_11_set.insert("1");
    Undly_11.add_attribute("UOM", "MMBtu"); // 1
    Undly_11_set.insert("MMBtu");
    Undly_11.add_attribute("UOMQty", "18081652.880000"); // 1
    Undly_11_set.insert("18081652.880000");
    Undly_11.add_attribute("PxUOM", "MWh"); // 1
    Undly_11_set.insert("MWh");
    Undly_11.add_attribute("PxUOMQty", "4377502.960000"); // 1
    Undly_11_set.insert("4377502.960000");
    Undly_11.add_attribute("TmUnit", "S"); // 1
    Undly_11_set.insert("S");
    Undly_11.add_attribute("ExerStyle", "1"); // 1
    Undly_11_set.insert("1");
    Undly_11.add_attribute("CpnRt", "14757443.730000"); // 1
    Undly_11_set.insert("14757443.730000");
    Undly_11.add_attribute("Exch", "UnderlyingSecurityExchange_t_1695719438"); // 1
    Undly_11_set.insert("UnderlyingSecurityExchange_t_1695719438");
    Undly_11.add_attribute("Issr", "UnderlyingIssuer_t_1701688590"); // 1
    Undly_11_set.insert("UnderlyingIssuer_t_1701688590");
    Undly_11.add_attribute("EncUndIssrLen", "1827047203"); // 1
    Undly_11_set.insert("1827047203");
    Undly_11.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1866378717"); // 1
    Undly_11_set.insert("EncodedUnderlyingIssuer_t_1866378717");
    Undly_11.add_attribute("Desc", "UnderlyingSecurityDesc_t_1260288086"); // 1
    Undly_11_set.insert("UnderlyingSecurityDesc_t_1260288086");
    Undly_11.add_attribute("EncUndSecDescLen", "66479552"); // 1
    Undly_11_set.insert("66479552");
    Undly_11.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_553997984"); // 1
    Undly_11_set.insert("EncodedUnderlyingSecurityDesc_t_553997984");
    Undly_11.add_attribute("CPPgm", "UnderlyingCPProgram_t_477206074"); // 1
    Undly_11_set.insert("UnderlyingCPProgram_t_477206074");
    Undly_11.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1185589976"); // 1
    Undly_11_set.insert("UnderlyingCPRegType_t_1185589976");
    Undly_11.add_attribute("AllocPct", "9716284.570000"); // 1
    Undly_11_set.insert("9716284.570000");
    Undly_11.add_attribute("Ccy", "CHF"); // 1
    Undly_11_set.insert("CHF");
    Undly_11.add_attribute("Qty", "19952780.860000"); // 1
    Undly_11_set.insert("19952780.860000");
    Undly_11.add_attribute("SettlTyp", "2"); // 1
    Undly_11_set.insert("2");
    Undly_11.add_attribute("CashAmt", "UnderlyingCashAmount_t_1027840351"); // 1
    Undly_11_set.insert("UnderlyingCashAmount_t_1027840351");
    Undly_11.add_attribute("CashTyp", "FIXED"); // 1
    Undly_11_set.insert("FIXED");
    Undly_11.add_attribute("Px", "11504698.940000"); // 1
    Undly_11_set.insert("11504698.940000");
    Undly_11.add_attribute("DirtPx", "19435725.400000"); // 1
    Undly_11_set.insert("19435725.400000");
    Undly_11.add_attribute("EndPx", "12274854.260000"); // 1
    Undly_11_set.insert("12274854.260000");
    Undly_11.add_attribute("StartVal", "UnderlyingStartValue_t_230846762"); // 1
    Undly_11_set.insert("UnderlyingStartValue_t_230846762");
    Undly_11.add_attribute("CurVal", "UnderlyingCurrentValue_t_1989910843"); // 1
    Undly_11_set.insert("UnderlyingCurrentValue_t_1989910843");
    Undly_11.add_attribute("EndVal", "UnderlyingEndValue_t_1647611236"); // 1
    Undly_11_set.insert("UnderlyingEndValue_t_1647611236");
    Undly_11.add_attribute("AdjQty", "10479325.150000"); // 1
    Undly_11_set.insert("10479325.150000");
    Undly_11.add_attribute("FxRate", "7153884.470000"); // 1
    Undly_11_set.insert("7153884.470000");
    Undly_11.add_attribute("FxRateCalc", "D"); // 1
    Undly_11_set.insert("D");
    Undly_11.add_attribute("CapValu", "UnderlyingCapValue_t_708614155"); // 1
    Undly_11_set.insert("UnderlyingCapValue_t_708614155");
    Undly_11.add_attribute("SetMeth", "UnderlyingSettlMethod_t_55741526"); // 1
    Undly_11_set.insert("UnderlyingSettlMethod_t_55741526");
    Undly_11.add_attribute("PutCall", "840915463"); // 1
    Undly_11_set.insert("840915463");
    all_values.push_back(Undly_11_set);
    all_compo_names.insert("Undly_11_set");

    {
      xml_element UndAID_11{"UndAID"};
      multiset<string> UndAID_11_set;
      UndAID_11.add_attribute("AltID", "UnderlyingSecurityAltID_t_1928664308"); // 2
      UndAID_11_set.insert("UnderlyingSecurityAltID_t_1928664308");
      UndAID_11.add_attribute("AltIDSrc", "J"); // 2
      UndAID_11_set.insert("J");
      all_values.push_back(UndAID_11_set);
      all_compo_names.insert("UndAID_11_set");

      Undly_11.add_element(UndAID_11);
    }
    {
      xml_element Stip_24{"Stip"};
      multiset<string> Stip_24_set;
      Stip_24.add_attribute("Typ", "MPR"); // 2
      Stip_24_set.insert("MPR");
      Stip_24.add_attribute("Val", "UnderlyingStipValue_t_1476900099"); // 2
      Stip_24_set.insert("UnderlyingStipValue_t_1476900099");
      all_values.push_back(Stip_24_set);
      all_compo_names.insert("Stip_24_set");

      Undly_11.add_element(Stip_24);
    }
    {
      xml_element Pty_71{"Pty"};
      multiset<string> Pty_71_set;
      Pty_71.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1135496188"); // 2
      Pty_71_set.insert("UnderlyingInstrumentPartyID_t_1135496188");
      Pty_71.add_attribute("Src", "A"); // 2
      Pty_71_set.insert("A");
      Pty_71.add_attribute("R", "66"); // 2
      Pty_71_set.insert("66");
      all_values.push_back(Pty_71_set);
      all_compo_names.insert("Pty_71_set");

      {
        xml_element Sub_71{"Sub"};
        multiset<string> Sub_71_set;
        Sub_71.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_248300627"); // 3
        Sub_71_set.insert("UnderlyingInstrumentPartySubID_t_248300627");
        Sub_71.add_attribute("Typ", "27"); // 3
        Sub_71_set.insert("27");
        all_values.push_back(Sub_71_set);
        all_compo_names.insert("Sub_71_set");

        Pty_71.add_element(Sub_71);
      }
      Undly_11.add_element(Pty_71);
    }
    elt.add_element(Undly_11);
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
