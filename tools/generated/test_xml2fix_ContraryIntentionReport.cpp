#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ContraryIntentionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ContraryIntentionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ContIntRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ContraryIntentionReport_message_t_0;
  elt.add_attribute("RptID", "ContIntRptID_t_1031361029"); // 0
  ContraryIntentionReport_message_t_0.insert("ContIntRptID_t_1031361029");
  elt.add_attribute("TxnTm", "TransactTime_t_2036914345"); // 0
  ContraryIntentionReport_message_t_0.insert("TransactTime_t_2036914345");
  elt.add_attribute("LateInd", "true"); // 0
  ContraryIntentionReport_message_t_0.insert("true");
  elt.add_attribute("InptSrc", "InputSource_t_2043740664"); // 0
  ContraryIntentionReport_message_t_0.insert("InputSource_t_2043740664");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1059941917"); // 0
  ContraryIntentionReport_message_t_0.insert("ClearingBusinessDate_t_1059941917");
  elt.add_attribute("Txt", "Text_t_1227266059"); // 0
  ContraryIntentionReport_message_t_0.insert("Text_t_1227266059");
  elt.add_attribute("EncTxtLen", "963605655"); // 0
  ContraryIntentionReport_message_t_0.insert("963605655");
  elt.add_attribute("EncTxt", "EncodedText_t_1332353002"); // 0
  ContraryIntentionReport_message_t_0.insert("EncodedText_t_1332353002");
  all_values.push_back(ContraryIntentionReport_message_t_0);
  all_compo_names.insert("ContraryIntentionReport_message_t");

  { // Hdr
    xml_element Hdr_23{"Hdr"};
    multiset<string> Hdr_23_set;
    Hdr_23.add_attribute("SeqNum", "511601203"); // 1
    Hdr_23_set.insert("511601203");
    Hdr_23.add_attribute("SID", "SenderCompID_t_1222594532"); // 1
    Hdr_23_set.insert("SenderCompID_t_1222594532");
    Hdr_23.add_attribute("TID", "TargetCompID_t_245505853"); // 1
    Hdr_23_set.insert("TargetCompID_t_245505853");
    Hdr_23.add_attribute("OBID", "OnBehalfOfCompID_t_791699039"); // 1
    Hdr_23_set.insert("OnBehalfOfCompID_t_791699039");
    Hdr_23.add_attribute("D2ID", "DeliverToCompID_t_1055939178"); // 1
    Hdr_23_set.insert("DeliverToCompID_t_1055939178");
    Hdr_23.add_attribute("SSub", "SenderSubID_t_1061785125"); // 1
    Hdr_23_set.insert("SenderSubID_t_1061785125");
    Hdr_23.add_attribute("SLoc", "SenderLocationID_t_2133451764"); // 1
    Hdr_23_set.insert("SenderLocationID_t_2133451764");
    Hdr_23.add_attribute("TSub", "TargetSubID_t_380279814"); // 1
    Hdr_23_set.insert("TargetSubID_t_380279814");
    Hdr_23.add_attribute("TLoc", "TargetLocationID_t_195355601"); // 1
    Hdr_23_set.insert("TargetLocationID_t_195355601");
    Hdr_23.add_attribute("OBSub", "OnBehalfOfSubID_t_248887558"); // 1
    Hdr_23_set.insert("OnBehalfOfSubID_t_248887558");
    Hdr_23.add_attribute("OBLoc", "OnBehalfOfLocationID_t_664396560"); // 1
    Hdr_23_set.insert("OnBehalfOfLocationID_t_664396560");
    Hdr_23.add_attribute("D2Sub", "DeliverToSubID_t_2008877705"); // 1
    Hdr_23_set.insert("DeliverToSubID_t_2008877705");
    Hdr_23.add_attribute("D2Loc", "DeliverToLocationID_t_676290475"); // 1
    Hdr_23_set.insert("DeliverToLocationID_t_676290475");
    Hdr_23.add_attribute("PosDup", "N"); // 1
    Hdr_23_set.insert("N");
    Hdr_23.add_attribute("PosRsnd", "N"); // 1
    Hdr_23_set.insert("N");
    Hdr_23.add_attribute("Snt", "SendingTime_t_140494586"); // 1
    Hdr_23_set.insert("SendingTime_t_140494586");
    Hdr_23.add_attribute("OrigSnt", "OrigSendingTime_t_1406177412"); // 1
    Hdr_23_set.insert("OrigSendingTime_t_1406177412");
    Hdr_23.add_attribute("MsgEncd", "MessageEncoding_t_58846763"); // 1
    Hdr_23_set.insert("MessageEncoding_t_58846763");
    all_values.push_back(Hdr_23_set);
    all_compo_names.insert("Hdr_23_set");

    {
      xml_element Hop_23{"Hop"};
      multiset<string> Hop_23_set;
      Hop_23.add_attribute("ID", "HopCompID_t_2134987033"); // 2
      Hop_23_set.insert("HopCompID_t_2134987033");
      Hop_23.add_attribute("Ref", "67114021"); // 2
      Hop_23_set.insert("67114021");
      Hop_23.add_attribute("Snt", "HopSendingTime_t_1792773689"); // 2
      Hop_23_set.insert("HopSendingTime_t_1792773689");
      all_values.push_back(Hop_23_set);
      all_compo_names.insert("Hop_23_set");

      Hdr_23.add_element(Hop_23);
    }
    elt.add_element(Hdr_23);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_1{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_1_set;
    ApplSeqCtrl_1.add_attribute("ApplID", "ApplID_t_1670143345"); // 1
    ApplSeqCtrl_1_set.insert("ApplID_t_1670143345");
    ApplSeqCtrl_1.add_attribute("ApplSeqNum", "480695940"); // 1
    ApplSeqCtrl_1_set.insert("480695940");
    ApplSeqCtrl_1.add_attribute("ApplLastSeqNum", "676651071"); // 1
    ApplSeqCtrl_1_set.insert("676651071");
    ApplSeqCtrl_1.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_1_set.insert("true");
    all_values.push_back(ApplSeqCtrl_1_set);
    all_compo_names.insert("ApplSeqCtrl_1_set");

    elt.add_element(ApplSeqCtrl_1);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_114{"Pty"};
    multiset<string> Pty_114_set;
    Pty_114.add_attribute("ID", "PartyID_t_572908087"); // 1
    Pty_114_set.insert("PartyID_t_572908087");
    Pty_114.add_attribute("Src", "6"); // 1
    Pty_114_set.insert("6");
    Pty_114.add_attribute("R", "1"); // 1
    Pty_114_set.insert("1");
    all_values.push_back(Pty_114_set);
    all_compo_names.insert("Pty_114_set");

    {
      xml_element Sub_114{"Sub"};
      multiset<string> Sub_114_set;
      Sub_114.add_attribute("ID", "PartySubID_t_1536513743"); // 2
      Sub_114_set.insert("PartySubID_t_1536513743");
      Sub_114.add_attribute("Typ", "29"); // 2
      Sub_114_set.insert("29");
      all_values.push_back(Sub_114_set);
      all_compo_names.insert("Sub_114_set");

      Pty_114.add_element(Sub_114);
    }
    elt.add_element(Pty_114);
  } // end Pty
  { // Pty
    xml_element Pty_115{"Pty"};
    multiset<string> Pty_115_set;
    Pty_115.add_attribute("ID", "PartyID_t_35646239"); // 1
    Pty_115_set.insert("PartyID_t_35646239");
    Pty_115.add_attribute("Src", "I"); // 1
    Pty_115_set.insert("I");
    Pty_115.add_attribute("R", "31"); // 1
    Pty_115_set.insert("31");
    all_values.push_back(Pty_115_set);
    all_compo_names.insert("Pty_115_set");

    {
      xml_element Sub_115{"Sub"};
      multiset<string> Sub_115_set;
      Sub_115.add_attribute("ID", "PartySubID_t_827345278"); // 2
      Sub_115_set.insert("PartySubID_t_827345278");
      Sub_115.add_attribute("Typ", "26"); // 2
      Sub_115_set.insert("26");
      all_values.push_back(Sub_115_set);
      all_compo_names.insert("Sub_115_set");

      Pty_115.add_element(Sub_115);
    }
    elt.add_element(Pty_115);
  } // end Pty
  { // Qty
    xml_element Qty_3{"Qty"};
    multiset<string> Qty_3_set;
    Qty_3.add_attribute("ExpTyp", "5"); // 1
    Qty_3_set.insert("5");
    Qty_3.add_attribute("ExpQty", "20478436.200000"); // 1
    Qty_3_set.insert("20478436.200000");
    all_values.push_back(Qty_3_set);
    all_compo_names.insert("Qty_3_set");

    elt.add_element(Qty_3);
  } // end Qty
  { // Qty
    xml_element Qty_4{"Qty"};
    multiset<string> Qty_4_set;
    Qty_4.add_attribute("ExpTyp", "2"); // 1
    Qty_4_set.insert("2");
    Qty_4.add_attribute("ExpQty", "10622009.530000"); // 1
    Qty_4_set.insert("10622009.530000");
    all_values.push_back(Qty_4_set);
    all_compo_names.insert("Qty_4_set");

    elt.add_element(Qty_4);
  } // end Qty
  { // Instrmt
    xml_element Instrmt_15{"Instrmt"};
    multiset<string> Instrmt_15_set;
    Instrmt_15.add_attribute("Sym", "Symbol_t_564756532"); // 1
    Instrmt_15_set.insert("Symbol_t_564756532");
    Instrmt_15.add_attribute("Sfx", "WI"); // 1
    Instrmt_15_set.insert("WI");
    Instrmt_15.add_attribute("ID", "SecurityID_t_1738491428"); // 1
    Instrmt_15_set.insert("SecurityID_t_1738491428");
    Instrmt_15.add_attribute("Src", "3"); // 1
    Instrmt_15_set.insert("3");
    Instrmt_15.add_attribute("Prod", "2"); // 1
    Instrmt_15_set.insert("2");
    Instrmt_15.add_attribute("ProdCmplx", "ProductComplex_t_1878986015"); // 1
    Instrmt_15_set.insert("ProductComplex_t_1878986015");
    Instrmt_15.add_attribute("SecGrp", "SecurityGroup_t_355215368"); // 1
    Instrmt_15_set.insert("SecurityGroup_t_355215368");
    Instrmt_15.add_attribute("CFI", "CFICode_t_1106905676"); // 1
    Instrmt_15_set.insert("CFICode_t_1106905676");
    Instrmt_15.add_attribute("SecTyp", "XCN"); // 1
    Instrmt_15_set.insert("XCN");
    Instrmt_15.add_attribute("SubTyp", "SecuritySubType_t_422329390"); // 1
    Instrmt_15_set.insert("SecuritySubType_t_422329390");
    Instrmt_15.add_attribute("MMY", "752195717"); // 1
    Instrmt_15_set.insert("752195717");
    Instrmt_15.add_attribute("MatDt", "MaturityDate_t_1389149098"); // 1
    Instrmt_15_set.insert("MaturityDate_t_1389149098");
    Instrmt_15.add_attribute("MatTm", "903025330"); // 1
    Instrmt_15_set.insert("903025330");
    Instrmt_15.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1428846788"); // 1
    Instrmt_15_set.insert("SettleOnOpenFlag_t_1428846788");
    Instrmt_15.add_attribute("AsgnMeth", "801239492"); // 1
    Instrmt_15_set.insert("801239492");
    Instrmt_15.add_attribute("Status", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("CpnPmt", "CouponPaymentDate_t_2001754876"); // 1
    Instrmt_15_set.insert("CouponPaymentDate_t_2001754876");
    Instrmt_15.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_15_set.insert("FR");
    Instrmt_15.add_attribute("Snrty", "SD"); // 1
    Instrmt_15_set.insert("SD");
    Instrmt_15.add_attribute("NotlPctOut", "13907849.710000"); // 1
    Instrmt_15_set.insert("13907849.710000");
    Instrmt_15.add_attribute("OrigNotlPctOut", "9301734.700000"); // 1
    Instrmt_15_set.insert("9301734.700000");
    Instrmt_15.add_attribute("AttchPnt", "9069792.300000"); // 1
    Instrmt_15_set.insert("9069792.300000");
    Instrmt_15.add_attribute("DetchPnt", "20024095.980000"); // 1
    Instrmt_15_set.insert("20024095.980000");
    Instrmt_15.add_attribute("Issued", "IssueDate_t_832580989"); // 1
    Instrmt_15_set.insert("IssueDate_t_832580989");
    Instrmt_15.add_attribute("RepoCollSecTyp", "1734324508"); // 1
    Instrmt_15_set.insert("1734324508");
    Instrmt_15.add_attribute("RepoTrm", "1522489756"); // 1
    Instrmt_15_set.insert("1522489756");
    Instrmt_15.add_attribute("RepoRt", "17967736.340000"); // 1
    Instrmt_15_set.insert("17967736.340000");
    Instrmt_15.add_attribute("Fctr", "4001542.550000"); // 1
    Instrmt_15_set.insert("4001542.550000");
    Instrmt_15.add_attribute("CrdRtg", "CreditRating_t_1422849728"); // 1
    Instrmt_15_set.insert("CreditRating_t_1422849728");
    Instrmt_15.add_attribute("Rgstry", "InstrRegistry_t_808838232"); // 1
    Instrmt_15_set.insert("InstrRegistry_t_808838232");
    Instrmt_15.add_attribute("IssuCtry", "1462355208"); // 1
    Instrmt_15_set.insert("1462355208");
    Instrmt_15.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1987606260"); // 1
    Instrmt_15_set.insert("StateOrProvinceOfIssue_t_1987606260");
    Instrmt_15.add_attribute("Lcl", "LocaleOfIssue_t_1829780535"); // 1
    Instrmt_15_set.insert("LocaleOfIssue_t_1829780535");
    Instrmt_15.add_attribute("Redeem", "RedemptionDate_t_1053362988"); // 1
    Instrmt_15_set.insert("RedemptionDate_t_1053362988");
    Instrmt_15.add_attribute("StrkPx", "9366442.170000"); // 1
    Instrmt_15_set.insert("9366442.170000");
    Instrmt_15.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_15_set.insert("CHF");
    Instrmt_15.add_attribute("StrkMult", "12918595.850000"); // 1
    Instrmt_15_set.insert("12918595.850000");
    Instrmt_15.add_attribute("StrkValu", "18372614.760000"); // 1
    Instrmt_15_set.insert("18372614.760000");
    Instrmt_15.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("StrkPxBndryPrcsn", "4419735.460000"); // 1
    Instrmt_15_set.insert("4419735.460000");
    Instrmt_15.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_15_set.insert("3");
    Instrmt_15.add_attribute("OptAt", "469730657"); // 1
    Instrmt_15_set.insert("469730657");
    Instrmt_15.add_attribute("Mult", "18708203.340000"); // 1
    Instrmt_15_set.insert("18708203.340000");
    Instrmt_15.add_attribute("MultTyp", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_15_set.insert("2");
    Instrmt_15.add_attribute("MinPxIncr", "17250915.620000"); // 1
    Instrmt_15_set.insert("17250915.620000");
    Instrmt_15.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1820047854"); // 1
    Instrmt_15_set.insert("MinPriceIncrementAmount_t_1820047854");
    Instrmt_15.add_attribute("UOM", "Gal"); // 1
    Instrmt_15_set.insert("Gal");
    Instrmt_15.add_attribute("UOMQty", "9683928.850000"); // 1
    Instrmt_15_set.insert("9683928.850000");
    Instrmt_15.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_15_set.insert("oz_tr");
    Instrmt_15.add_attribute("PxUOMQty", "14478471.840000"); // 1
    Instrmt_15_set.insert("14478471.840000");
    Instrmt_15.add_attribute("SettlMeth", "C"); // 1
    Instrmt_15_set.insert("C");
    Instrmt_15.add_attribute("ExerStyle", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("OptPayAmt", "OptPayoutAmount_t_198324944"); // 1
    Instrmt_15_set.insert("OptPayoutAmount_t_198324944");
    Instrmt_15.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_15_set.insert("STD");
    Instrmt_15.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_15_set.insert("EQTY");
    Instrmt_15.add_attribute("ListMeth", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("CapPx", "18934468.850000"); // 1
    Instrmt_15_set.insert("18934468.850000");
    Instrmt_15.add_attribute("FlrPx", "7497138.600000"); // 1
    Instrmt_15_set.insert("7497138.600000");
    Instrmt_15.add_attribute("PutCall", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("FlexInd", "true"); // 1
    Instrmt_15_set.insert("true");
    Instrmt_15.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_15_set.insert("true");
    Instrmt_15.add_attribute("TmUnit", "D"); // 1
    Instrmt_15_set.insert("D");
    Instrmt_15.add_attribute("CpnRt", "1586159.250000"); // 1
    Instrmt_15_set.insert("1586159.250000");
    Instrmt_15.add_attribute("Exch", "SecurityExchange_t_440458556"); // 1
    Instrmt_15_set.insert("SecurityExchange_t_440458556");
    Instrmt_15.add_attribute("PosLmt", "1542317440"); // 1
    Instrmt_15_set.insert("1542317440");
    Instrmt_15.add_attribute("NTPosLmt", "1995877401"); // 1
    Instrmt_15_set.insert("1995877401");
    Instrmt_15.add_attribute("Issr", "Issuer_t_944329664"); // 1
    Instrmt_15_set.insert("Issuer_t_944329664");
    Instrmt_15.add_attribute("EncIssrLen", "1109022767"); // 1
    Instrmt_15_set.insert("1109022767");
    Instrmt_15.add_attribute("EncIssr", "EncodedIssuer_t_290367299"); // 1
    Instrmt_15_set.insert("EncodedIssuer_t_290367299");
    Instrmt_15.add_attribute("Desc", "SecurityDesc_t_689866222"); // 1
    Instrmt_15_set.insert("SecurityDesc_t_689866222");
    Instrmt_15.add_attribute("EncSecDescLen", "1578753425"); // 1
    Instrmt_15_set.insert("1578753425");
    Instrmt_15.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_13703986"); // 1
    Instrmt_15_set.insert("EncodedSecurityDesc_t_13703986");
    Instrmt_15.add_attribute("Pool", "Pool_t_1236642272"); // 1
    Instrmt_15_set.insert("Pool_t_1236642272");
    Instrmt_15.add_attribute("CSetMo", "1248288389"); // 1
    Instrmt_15_set.insert("1248288389");
    Instrmt_15.add_attribute("CPPgm", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("CPRegT", "CPRegType_t_909206479"); // 1
    Instrmt_15_set.insert("CPRegType_t_909206479");
    Instrmt_15.add_attribute("Dated", "DatedDate_t_1789156343"); // 1
    Instrmt_15_set.insert("DatedDate_t_1789156343");
    Instrmt_15.add_attribute("IntAcrl", "InterestAccrualDate_t_559704786"); // 1
    Instrmt_15_set.insert("InterestAccrualDate_t_559704786");
    all_values.push_back(Instrmt_15_set);
    all_compo_names.insert("Instrmt_15_set");

    {
      xml_element AID_15{"AID"};
      multiset<string> AID_15_set;
      AID_15.add_attribute("AltID", "SecurityAltID_t_1511944155"); // 2
      AID_15_set.insert("SecurityAltID_t_1511944155");
      AID_15.add_attribute("AltIDSrc", "K"); // 2
      AID_15_set.insert("K");
      all_values.push_back(AID_15_set);
      all_compo_names.insert("AID_15_set");

      Instrmt_15.add_element(AID_15);
    }
    {
      xml_element SecXML_15{"SecXML"};
      multiset<string> SecXML_15_set;
      SecXML_15.add_attribute("Schema", "SecurityXMLSchema_t_1383023622"); // 2
      SecXML_15_set.insert("SecurityXMLSchema_t_1383023622");
      all_values.push_back(SecXML_15_set);
      all_compo_names.insert("SecXML_15_set");

      Instrmt_15.add_element(SecXML_15);
    }
    {
      xml_element Evnt_15{"Evnt"};
      multiset<string> Evnt_15_set;
      Evnt_15.add_attribute("EventTyp", "13"); // 2
      Evnt_15_set.insert("13");
      Evnt_15.add_attribute("Dt", "EventDate_t_2124207925"); // 2
      Evnt_15_set.insert("EventDate_t_2124207925");
      Evnt_15.add_attribute("Tm", "EventTime_t_1581348566"); // 2
      Evnt_15_set.insert("EventTime_t_1581348566");
      Evnt_15.add_attribute("Px", "18843878.260000"); // 2
      Evnt_15_set.insert("18843878.260000");
      Evnt_15.add_attribute("Txt", "EventText_t_1411566577"); // 2
      Evnt_15_set.insert("EventText_t_1411566577");
      all_values.push_back(Evnt_15_set);
      all_compo_names.insert("Evnt_15_set");

      Instrmt_15.add_element(Evnt_15);
    }
    {
      xml_element Pty_116{"Pty"};
      multiset<string> Pty_116_set;
      Pty_116.add_attribute("ID", "InstrumentPartyID_t_1055039591"); // 2
      Pty_116_set.insert("InstrumentPartyID_t_1055039591");
      Pty_116.add_attribute("Src", "2"); // 2
      Pty_116_set.insert("2");
      Pty_116.add_attribute("R", "44"); // 2
      Pty_116_set.insert("44");
      all_values.push_back(Pty_116_set);
      all_compo_names.insert("Pty_116_set");

      {
        xml_element Sub_116{"Sub"};
        multiset<string> Sub_116_set;
        Sub_116.add_attribute("ID", "InstrumentPartySubID_t_368853229"); // 3
        Sub_116_set.insert("InstrumentPartySubID_t_368853229");
        Sub_116.add_attribute("Typ", "30"); // 3
        Sub_116_set.insert("30");
        all_values.push_back(Sub_116_set);
        all_compo_names.insert("Sub_116_set");

        Pty_116.add_element(Sub_116);
      }
      Instrmt_15.add_element(Pty_116);
    }
    {
      xml_element CmplxEvnt_15{"CmplxEvnt"};
      multiset<string> CmplxEvnt_15_set;
      CmplxEvnt_15.add_attribute("Typ", "6"); // 2
      CmplxEvnt_15_set.insert("6");
      CmplxEvnt_15.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_619311083"); // 2
      CmplxEvnt_15_set.insert("ComplexOptPayoutAmount_t_619311083");
      CmplxEvnt_15.add_attribute("Px", "12172271.120000"); // 2
      CmplxEvnt_15_set.insert("12172271.120000");
      CmplxEvnt_15.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_15_set.insert("1");
      CmplxEvnt_15.add_attribute("PxBndryPrcsn", "141448.750000"); // 2
      CmplxEvnt_15_set.insert("141448.750000");
      CmplxEvnt_15.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_15_set.insert("2");
      CmplxEvnt_15.add_attribute("Cond", "2"); // 2
      CmplxEvnt_15_set.insert("2");
      all_values.push_back(CmplxEvnt_15_set);
      all_compo_names.insert("CmplxEvnt_15_set");

      {
        xml_element EvntDts_15{"EvntDts"};
        multiset<string> EvntDts_15_set;
        EvntDts_15.add_attribute("StartDt", "ComplexEventStartDate_t_1123167643"); // 3
        EvntDts_15_set.insert("ComplexEventStartDate_t_1123167643");
        EvntDts_15.add_attribute("EndDt", "ComplexEventEndDate_t_1355988165"); // 3
        EvntDts_15_set.insert("ComplexEventEndDate_t_1355988165");
        all_values.push_back(EvntDts_15_set);
        all_compo_names.insert("EvntDts_15_set");

        {
          xml_element EvntTms_15{"EvntTms"};
          multiset<string> EvntTms_15_set;
          EvntTms_15.add_attribute("StartTm", "1744044431"); // 4
          EvntTms_15_set.insert("1744044431");
          EvntTms_15.add_attribute("EndTm", "554437420"); // 4
          EvntTms_15_set.insert("554437420");
          all_values.push_back(EvntTms_15_set);
          all_compo_names.insert("EvntTms_15_set");

          EvntDts_15.add_element(EvntTms_15);
        }
        CmplxEvnt_15.add_element(EvntDts_15);
      }
      Instrmt_15.add_element(CmplxEvnt_15);
    }
    elt.add_element(Instrmt_15);
  } // end Instrmt
  { // Undly
    xml_element Undly_22{"Undly"};
    multiset<string> Undly_22_set;
    Undly_22.add_attribute("Sym", "UnderlyingSymbol_t_833203056"); // 1
    Undly_22_set.insert("UnderlyingSymbol_t_833203056");
    Undly_22.add_attribute("Sfx", "WI"); // 1
    Undly_22_set.insert("WI");
    Undly_22.add_attribute("ID", "UnderlyingSecurityID_t_961004052"); // 1
    Undly_22_set.insert("UnderlyingSecurityID_t_961004052");
    Undly_22.add_attribute("Src", "A"); // 1
    Undly_22_set.insert("A");
    Undly_22.add_attribute("Prod", "12"); // 1
    Undly_22_set.insert("12");
    Undly_22.add_attribute("CFI", "UnderlyingCFICode_t_1520708838"); // 1
    Undly_22_set.insert("UnderlyingCFICode_t_1520708838");
    Undly_22.add_attribute("SecTyp", "SUPRA"); // 1
    Undly_22_set.insert("SUPRA");
    Undly_22.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_386434736"); // 1
    Undly_22_set.insert("UnderlyingSecuritySubType_t_386434736");
    Undly_22.add_attribute("MMY", "756248812"); // 1
    Undly_22_set.insert("756248812");
    Undly_22.add_attribute("Mat", "UnderlyingMaturityDate_t_1906649216"); // 1
    Undly_22_set.insert("UnderlyingMaturityDate_t_1906649216");
    Undly_22.add_attribute("MatTm", "363159013"); // 1
    Undly_22_set.insert("363159013");
    Undly_22.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_190113730"); // 1
    Undly_22_set.insert("UnderlyingCouponPaymentDate_t_190113730");
    Undly_22.add_attribute("RestrctTyp", "MM"); // 1
    Undly_22_set.insert("MM");
    Undly_22.add_attribute("Snrty", "SB"); // 1
    Undly_22_set.insert("SB");
    Undly_22.add_attribute("NotlPctOut", "12451533.220000"); // 1
    Undly_22_set.insert("12451533.220000");
    Undly_22.add_attribute("OrigNotlPctOut", "11264208.090000"); // 1
    Undly_22_set.insert("11264208.090000");
    Undly_22.add_attribute("AttchPnt", "17885223.790000"); // 1
    Undly_22_set.insert("17885223.790000");
    Undly_22.add_attribute("DetchPnt", "16140065.510000"); // 1
    Undly_22_set.insert("16140065.510000");
    Undly_22.add_attribute("Issued", "UnderlyingIssueDate_t_37548348"); // 1
    Undly_22_set.insert("UnderlyingIssueDate_t_37548348");
    Undly_22.add_attribute("RepoCollSecTyp", "1457912369"); // 1
    Undly_22_set.insert("1457912369");
    Undly_22.add_attribute("RepoTrm", "85833986"); // 1
    Undly_22_set.insert("85833986");
    Undly_22.add_attribute("RepoRt", "12547754.610000"); // 1
    Undly_22_set.insert("12547754.610000");
    Undly_22.add_attribute("Fctr", "15677609.140000"); // 1
    Undly_22_set.insert("15677609.140000");
    Undly_22.add_attribute("CrdRtg", "UnderlyingCreditRating_t_99978862"); // 1
    Undly_22_set.insert("UnderlyingCreditRating_t_99978862");
    Undly_22.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_172912679"); // 1
    Undly_22_set.insert("UnderlyingInstrRegistry_t_172912679");
    Undly_22.add_attribute("Ctry", "474455476"); // 1
    Undly_22_set.insert("474455476");
    Undly_22.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1223146505"); // 1
    Undly_22_set.insert("UnderlyingStateOrProvinceOfIssue_t_1223146505");
    Undly_22.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1528900844"); // 1
    Undly_22_set.insert("UnderlyingLocaleOfIssue_t_1528900844");
    Undly_22.add_attribute("Redeem", "UnderlyingRedemptionDate_t_71016259"); // 1
    Undly_22_set.insert("UnderlyingRedemptionDate_t_71016259");
    Undly_22.add_attribute("StrkPx", "17775839.250000"); // 1
    Undly_22_set.insert("17775839.250000");
    Undly_22.add_attribute("StrkCcy", "EUR"); // 1
    Undly_22_set.insert("EUR");
    Undly_22.add_attribute("OptA", "1432826086"); // 1
    Undly_22_set.insert("1432826086");
    Undly_22.add_attribute("Mult", "17121134.000000"); // 1
    Undly_22_set.insert("17121134.000000");
    Undly_22.add_attribute("MultTyp", "0"); // 1
    Undly_22_set.insert("0");
    Undly_22.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_22_set.insert("2");
    Undly_22.add_attribute("UOM", "Bu"); // 1
    Undly_22_set.insert("Bu");
    Undly_22.add_attribute("UOMQty", "16060152.450000"); // 1
    Undly_22_set.insert("16060152.450000");
    Undly_22.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_22_set.insert("oz_tr");
    Undly_22.add_attribute("PxUOMQty", "18415874.020000"); // 1
    Undly_22_set.insert("18415874.020000");
    Undly_22.add_attribute("TmUnit", "D"); // 1
    Undly_22_set.insert("D");
    Undly_22.add_attribute("ExerStyle", "0"); // 1
    Undly_22_set.insert("0");
    Undly_22.add_attribute("CpnRt", "20317011.320000"); // 1
    Undly_22_set.insert("20317011.320000");
    Undly_22.add_attribute("Exch", "UnderlyingSecurityExchange_t_861250559"); // 1
    Undly_22_set.insert("UnderlyingSecurityExchange_t_861250559");
    Undly_22.add_attribute("Issr", "UnderlyingIssuer_t_1106576635"); // 1
    Undly_22_set.insert("UnderlyingIssuer_t_1106576635");
    Undly_22.add_attribute("EncUndIssrLen", "1129370806"); // 1
    Undly_22_set.insert("1129370806");
    Undly_22.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1987671368"); // 1
    Undly_22_set.insert("EncodedUnderlyingIssuer_t_1987671368");
    Undly_22.add_attribute("Desc", "UnderlyingSecurityDesc_t_747615366"); // 1
    Undly_22_set.insert("UnderlyingSecurityDesc_t_747615366");
    Undly_22.add_attribute("EncUndSecDescLen", "595893709"); // 1
    Undly_22_set.insert("595893709");
    Undly_22.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2025219716"); // 1
    Undly_22_set.insert("EncodedUnderlyingSecurityDesc_t_2025219716");
    Undly_22.add_attribute("CPPgm", "UnderlyingCPProgram_t_58044087"); // 1
    Undly_22_set.insert("UnderlyingCPProgram_t_58044087");
    Undly_22.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_681727696"); // 1
    Undly_22_set.insert("UnderlyingCPRegType_t_681727696");
    Undly_22.add_attribute("AllocPct", "11325115.290000"); // 1
    Undly_22_set.insert("11325115.290000");
    Undly_22.add_attribute("Ccy", "GBP"); // 1
    Undly_22_set.insert("GBP");
    Undly_22.add_attribute("Qty", "13054242.080000"); // 1
    Undly_22_set.insert("13054242.080000");
    Undly_22.add_attribute("SettlTyp", "2"); // 1
    Undly_22_set.insert("2");
    Undly_22.add_attribute("CashAmt", "UnderlyingCashAmount_t_2004853063"); // 1
    Undly_22_set.insert("UnderlyingCashAmount_t_2004853063");
    Undly_22.add_attribute("CashTyp", "DIFF"); // 1
    Undly_22_set.insert("DIFF");
    Undly_22.add_attribute("Px", "237930.890000"); // 1
    Undly_22_set.insert("237930.890000");
    Undly_22.add_attribute("DirtPx", "16349533.400000"); // 1
    Undly_22_set.insert("16349533.400000");
    Undly_22.add_attribute("EndPx", "14379507.530000"); // 1
    Undly_22_set.insert("14379507.530000");
    Undly_22.add_attribute("StartVal", "UnderlyingStartValue_t_928012405"); // 1
    Undly_22_set.insert("UnderlyingStartValue_t_928012405");
    Undly_22.add_attribute("CurVal", "UnderlyingCurrentValue_t_920295778"); // 1
    Undly_22_set.insert("UnderlyingCurrentValue_t_920295778");
    Undly_22.add_attribute("EndVal", "UnderlyingEndValue_t_1002580505"); // 1
    Undly_22_set.insert("UnderlyingEndValue_t_1002580505");
    Undly_22.add_attribute("AdjQty", "14271576.070000"); // 1
    Undly_22_set.insert("14271576.070000");
    Undly_22.add_attribute("FxRate", "16500367.200000"); // 1
    Undly_22_set.insert("16500367.200000");
    Undly_22.add_attribute("FxRateCalc", "D"); // 1
    Undly_22_set.insert("D");
    Undly_22.add_attribute("CapValu", "UnderlyingCapValue_t_885689204"); // 1
    Undly_22_set.insert("UnderlyingCapValue_t_885689204");
    Undly_22.add_attribute("SetMeth", "UnderlyingSettlMethod_t_618728751"); // 1
    Undly_22_set.insert("UnderlyingSettlMethod_t_618728751");
    Undly_22.add_attribute("PutCall", "1782022849"); // 1
    Undly_22_set.insert("1782022849");
    all_values.push_back(Undly_22_set);
    all_compo_names.insert("Undly_22_set");

    {
      xml_element UndAID_22{"UndAID"};
      multiset<string> UndAID_22_set;
      UndAID_22.add_attribute("AltID", "UnderlyingSecurityAltID_t_103386369"); // 2
      UndAID_22_set.insert("UnderlyingSecurityAltID_t_103386369");
      UndAID_22.add_attribute("AltIDSrc", "5"); // 2
      UndAID_22_set.insert("5");
      all_values.push_back(UndAID_22_set);
      all_compo_names.insert("UndAID_22_set");

      Undly_22.add_element(UndAID_22);
    }
    {
      xml_element Stip_38{"Stip"};
      multiset<string> Stip_38_set;
      Stip_38.add_attribute("Typ", "HEP"); // 2
      Stip_38_set.insert("HEP");
      Stip_38.add_attribute("Val", "UnderlyingStipValue_t_964636928"); // 2
      Stip_38_set.insert("UnderlyingStipValue_t_964636928");
      all_values.push_back(Stip_38_set);
      all_compo_names.insert("Stip_38_set");

      Undly_22.add_element(Stip_38);
    }
    {
      xml_element Pty_117{"Pty"};
      multiset<string> Pty_117_set;
      Pty_117.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1057156431"); // 2
      Pty_117_set.insert("UnderlyingInstrumentPartyID_t_1057156431");
      Pty_117.add_attribute("Src", "H"); // 2
      Pty_117_set.insert("H");
      Pty_117.add_attribute("R", "70"); // 2
      Pty_117_set.insert("70");
      all_values.push_back(Pty_117_set);
      all_compo_names.insert("Pty_117_set");

      {
        xml_element Sub_117{"Sub"};
        multiset<string> Sub_117_set;
        Sub_117.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1804771797"); // 3
        Sub_117_set.insert("UnderlyingInstrumentPartySubID_t_1804771797");
        Sub_117.add_attribute("Typ", "14"); // 3
        Sub_117_set.insert("14");
        all_values.push_back(Sub_117_set);
        all_compo_names.insert("Sub_117_set");

        Pty_117.add_element(Sub_117);
      }
      Undly_22.add_element(Pty_117);
    }
    elt.add_element(Undly_22);
  } // end Undly
  { // Undly
    xml_element Undly_23{"Undly"};
    multiset<string> Undly_23_set;
    Undly_23.add_attribute("Sym", "UnderlyingSymbol_t_682560717"); // 1
    Undly_23_set.insert("UnderlyingSymbol_t_682560717");
    Undly_23.add_attribute("Sfx", "WI"); // 1
    Undly_23_set.insert("WI");
    Undly_23.add_attribute("ID", "UnderlyingSecurityID_t_1925748897"); // 1
    Undly_23_set.insert("UnderlyingSecurityID_t_1925748897");
    Undly_23.add_attribute("Src", "K"); // 1
    Undly_23_set.insert("K");
    Undly_23.add_attribute("Prod", "1"); // 1
    Undly_23_set.insert("1");
    Undly_23.add_attribute("CFI", "UnderlyingCFICode_t_559971807"); // 1
    Undly_23_set.insert("UnderlyingCFICode_t_559971807");
    Undly_23.add_attribute("SecTyp", "FAC"); // 1
    Undly_23_set.insert("FAC");
    Undly_23.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1293914069"); // 1
    Undly_23_set.insert("UnderlyingSecuritySubType_t_1293914069");
    Undly_23.add_attribute("MMY", "417341222"); // 1
    Undly_23_set.insert("417341222");
    Undly_23.add_attribute("Mat", "UnderlyingMaturityDate_t_1659854212"); // 1
    Undly_23_set.insert("UnderlyingMaturityDate_t_1659854212");
    Undly_23.add_attribute("MatTm", "1317707158"); // 1
    Undly_23_set.insert("1317707158");
    Undly_23.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2052294562"); // 1
    Undly_23_set.insert("UnderlyingCouponPaymentDate_t_2052294562");
    Undly_23.add_attribute("RestrctTyp", "MR"); // 1
    Undly_23_set.insert("MR");
    Undly_23.add_attribute("Snrty", "SD"); // 1
    Undly_23_set.insert("SD");
    Undly_23.add_attribute("NotlPctOut", "8251066.920000"); // 1
    Undly_23_set.insert("8251066.920000");
    Undly_23.add_attribute("OrigNotlPctOut", "19529018.220000"); // 1
    Undly_23_set.insert("19529018.220000");
    Undly_23.add_attribute("AttchPnt", "15253935.230000"); // 1
    Undly_23_set.insert("15253935.230000");
    Undly_23.add_attribute("DetchPnt", "3276597.650000"); // 1
    Undly_23_set.insert("3276597.650000");
    Undly_23.add_attribute("Issued", "UnderlyingIssueDate_t_1893337269"); // 1
    Undly_23_set.insert("UnderlyingIssueDate_t_1893337269");
    Undly_23.add_attribute("RepoCollSecTyp", "263599079"); // 1
    Undly_23_set.insert("263599079");
    Undly_23.add_attribute("RepoTrm", "946388516"); // 1
    Undly_23_set.insert("946388516");
    Undly_23.add_attribute("RepoRt", "15278764.700000"); // 1
    Undly_23_set.insert("15278764.700000");
    Undly_23.add_attribute("Fctr", "3669854.490000"); // 1
    Undly_23_set.insert("3669854.490000");
    Undly_23.add_attribute("CrdRtg", "UnderlyingCreditRating_t_896968312"); // 1
    Undly_23_set.insert("UnderlyingCreditRating_t_896968312");
    Undly_23.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1046633155"); // 1
    Undly_23_set.insert("UnderlyingInstrRegistry_t_1046633155");
    Undly_23.add_attribute("Ctry", "1331622377"); // 1
    Undly_23_set.insert("1331622377");
    Undly_23.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1954124743"); // 1
    Undly_23_set.insert("UnderlyingStateOrProvinceOfIssue_t_1954124743");
    Undly_23.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1694760647"); // 1
    Undly_23_set.insert("UnderlyingLocaleOfIssue_t_1694760647");
    Undly_23.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2136447026"); // 1
    Undly_23_set.insert("UnderlyingRedemptionDate_t_2136447026");
    Undly_23.add_attribute("StrkPx", "16114128.930000"); // 1
    Undly_23_set.insert("16114128.930000");
    Undly_23.add_attribute("StrkCcy", "CHF"); // 1
    Undly_23_set.insert("CHF");
    Undly_23.add_attribute("OptA", "1326745130"); // 1
    Undly_23_set.insert("1326745130");
    Undly_23.add_attribute("Mult", "5695634.500000"); // 1
    Undly_23_set.insert("5695634.500000");
    Undly_23.add_attribute("MultTyp", "1"); // 1
    Undly_23_set.insert("1");
    Undly_23.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_23_set.insert("1");
    Undly_23.add_attribute("UOM", "lbs"); // 1
    Undly_23_set.insert("lbs");
    Undly_23.add_attribute("UOMQty", "13121255.000000"); // 1
    Undly_23_set.insert("13121255.000000");
    Undly_23.add_attribute("PxUOM", "t"); // 1
    Undly_23_set.insert("t");
    Undly_23.add_attribute("PxUOMQty", "15468764.800000"); // 1
    Undly_23_set.insert("15468764.800000");
    Undly_23.add_attribute("TmUnit", "S"); // 1
    Undly_23_set.insert("S");
    Undly_23.add_attribute("ExerStyle", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("CpnRt", "14516873.950000"); // 1
    Undly_23_set.insert("14516873.950000");
    Undly_23.add_attribute("Exch", "UnderlyingSecurityExchange_t_1774817381"); // 1
    Undly_23_set.insert("UnderlyingSecurityExchange_t_1774817381");
    Undly_23.add_attribute("Issr", "UnderlyingIssuer_t_1082772216"); // 1
    Undly_23_set.insert("UnderlyingIssuer_t_1082772216");
    Undly_23.add_attribute("EncUndIssrLen", "129310439"); // 1
    Undly_23_set.insert("129310439");
    Undly_23.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1580235555"); // 1
    Undly_23_set.insert("EncodedUnderlyingIssuer_t_1580235555");
    Undly_23.add_attribute("Desc", "UnderlyingSecurityDesc_t_460682091"); // 1
    Undly_23_set.insert("UnderlyingSecurityDesc_t_460682091");
    Undly_23.add_attribute("EncUndSecDescLen", "456970204"); // 1
    Undly_23_set.insert("456970204");
    Undly_23.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1326089176"); // 1
    Undly_23_set.insert("EncodedUnderlyingSecurityDesc_t_1326089176");
    Undly_23.add_attribute("CPPgm", "UnderlyingCPProgram_t_724281170"); // 1
    Undly_23_set.insert("UnderlyingCPProgram_t_724281170");
    Undly_23.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1403358721"); // 1
    Undly_23_set.insert("UnderlyingCPRegType_t_1403358721");
    Undly_23.add_attribute("AllocPct", "7064819.980000"); // 1
    Undly_23_set.insert("7064819.980000");
    Undly_23.add_attribute("Ccy", "CHF"); // 1
    Undly_23_set.insert("CHF");
    Undly_23.add_attribute("Qty", "17531151.540000"); // 1
    Undly_23_set.insert("17531151.540000");
    Undly_23.add_attribute("SettlTyp", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("CashAmt", "UnderlyingCashAmount_t_2106968129"); // 1
    Undly_23_set.insert("UnderlyingCashAmount_t_2106968129");
    Undly_23.add_attribute("CashTyp", "DIFF"); // 1
    Undly_23_set.insert("DIFF");
    Undly_23.add_attribute("Px", "2643687.270000"); // 1
    Undly_23_set.insert("2643687.270000");
    Undly_23.add_attribute("DirtPx", "15708973.740000"); // 1
    Undly_23_set.insert("15708973.740000");
    Undly_23.add_attribute("EndPx", "20916903.540000"); // 1
    Undly_23_set.insert("20916903.540000");
    Undly_23.add_attribute("StartVal", "UnderlyingStartValue_t_935892822"); // 1
    Undly_23_set.insert("UnderlyingStartValue_t_935892822");
    Undly_23.add_attribute("CurVal", "UnderlyingCurrentValue_t_750158856"); // 1
    Undly_23_set.insert("UnderlyingCurrentValue_t_750158856");
    Undly_23.add_attribute("EndVal", "UnderlyingEndValue_t_513770157"); // 1
    Undly_23_set.insert("UnderlyingEndValue_t_513770157");
    Undly_23.add_attribute("AdjQty", "12750055.150000"); // 1
    Undly_23_set.insert("12750055.150000");
    Undly_23.add_attribute("FxRate", "12705575.770000"); // 1
    Undly_23_set.insert("12705575.770000");
    Undly_23.add_attribute("FxRateCalc", "D"); // 1
    Undly_23_set.insert("D");
    Undly_23.add_attribute("CapValu", "UnderlyingCapValue_t_439647368"); // 1
    Undly_23_set.insert("UnderlyingCapValue_t_439647368");
    Undly_23.add_attribute("SetMeth", "UnderlyingSettlMethod_t_937386719"); // 1
    Undly_23_set.insert("UnderlyingSettlMethod_t_937386719");
    Undly_23.add_attribute("PutCall", "1042698247"); // 1
    Undly_23_set.insert("1042698247");
    all_values.push_back(Undly_23_set);
    all_compo_names.insert("Undly_23_set");

    {
      xml_element UndAID_23{"UndAID"};
      multiset<string> UndAID_23_set;
      UndAID_23.add_attribute("AltID", "UnderlyingSecurityAltID_t_1264143432"); // 2
      UndAID_23_set.insert("UnderlyingSecurityAltID_t_1264143432");
      UndAID_23.add_attribute("AltIDSrc", "6"); // 2
      UndAID_23_set.insert("6");
      all_values.push_back(UndAID_23_set);
      all_compo_names.insert("UndAID_23_set");

      Undly_23.add_element(UndAID_23);
    }
    {
      xml_element Stip_39{"Stip"};
      multiset<string> Stip_39_set;
      Stip_39.add_attribute("Typ", "ORDRINCR"); // 2
      Stip_39_set.insert("ORDRINCR");
      Stip_39.add_attribute("Val", "UnderlyingStipValue_t_891477166"); // 2
      Stip_39_set.insert("UnderlyingStipValue_t_891477166");
      all_values.push_back(Stip_39_set);
      all_compo_names.insert("Stip_39_set");

      Undly_23.add_element(Stip_39);
    }
    {
      xml_element Pty_118{"Pty"};
      multiset<string> Pty_118_set;
      Pty_118.add_attribute("ID", "UnderlyingInstrumentPartyID_t_857211587"); // 2
      Pty_118_set.insert("UnderlyingInstrumentPartyID_t_857211587");
      Pty_118.add_attribute("Src", "7"); // 2
      Pty_118_set.insert("7");
      Pty_118.add_attribute("R", "79"); // 2
      Pty_118_set.insert("79");
      all_values.push_back(Pty_118_set);
      all_compo_names.insert("Pty_118_set");

      {
        xml_element Sub_118{"Sub"};
        multiset<string> Sub_118_set;
        Sub_118.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1317893678"); // 3
        Sub_118_set.insert("UnderlyingInstrumentPartySubID_t_1317893678");
        Sub_118.add_attribute("Typ", "9"); // 3
        Sub_118_set.insert("9");
        all_values.push_back(Sub_118_set);
        all_compo_names.insert("Sub_118_set");

        Pty_118.add_element(Sub_118);
      }
      Undly_23.add_element(Pty_118);
    }
    elt.add_element(Undly_23);
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
