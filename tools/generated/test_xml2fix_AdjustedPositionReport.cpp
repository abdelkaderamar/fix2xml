#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AdjustedPositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AdjustedPositionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AdjPosRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AdjustedPositionReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_1616268272"); // 0
  AdjustedPositionReport_message_t_0.insert("PosMaintRptID_t_1616268272");
  elt.add_attribute("ReqTyp", "6"); // 0
  AdjustedPositionReport_message_t_0.insert("6");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_754761509"); // 0
  AdjustedPositionReport_message_t_0.insert("ClearingBusinessDate_t_754761509");
  elt.add_attribute("SetSesID", "ETH"); // 0
  AdjustedPositionReport_message_t_0.insert("ETH");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_1482829757"); // 0
  AdjustedPositionReport_message_t_0.insert("PosMaintRptRefID_t_1482829757");
  elt.add_attribute("SetPx", "5880816.390000"); // 0
  AdjustedPositionReport_message_t_0.insert("5880816.390000");
  elt.add_attribute("PriSetPx", "11072111.880000"); // 0
  AdjustedPositionReport_message_t_0.insert("11072111.880000");
  all_values.push_back(AdjustedPositionReport_message_t_0);
  all_compo_names.insert("AdjustedPositionReport_message_t");

  { // Hdr
    xml_element Hdr_0{"Hdr"};
    multiset<string> Hdr_0_set;
    Hdr_0.add_attribute("SeqNum", "941756442"); // 1
    Hdr_0_set.insert("941756442");
    Hdr_0.add_attribute("SID", "SenderCompID_t_1018696400"); // 1
    Hdr_0_set.insert("SenderCompID_t_1018696400");
    Hdr_0.add_attribute("TID", "TargetCompID_t_1993629525"); // 1
    Hdr_0_set.insert("TargetCompID_t_1993629525");
    Hdr_0.add_attribute("OBID", "OnBehalfOfCompID_t_1640307055"); // 1
    Hdr_0_set.insert("OnBehalfOfCompID_t_1640307055");
    Hdr_0.add_attribute("D2ID", "DeliverToCompID_t_1732653082"); // 1
    Hdr_0_set.insert("DeliverToCompID_t_1732653082");
    Hdr_0.add_attribute("SSub", "SenderSubID_t_272929400"); // 1
    Hdr_0_set.insert("SenderSubID_t_272929400");
    Hdr_0.add_attribute("SLoc", "SenderLocationID_t_1115337816"); // 1
    Hdr_0_set.insert("SenderLocationID_t_1115337816");
    Hdr_0.add_attribute("TSub", "TargetSubID_t_507600085"); // 1
    Hdr_0_set.insert("TargetSubID_t_507600085");
    Hdr_0.add_attribute("TLoc", "TargetLocationID_t_2126684481"); // 1
    Hdr_0_set.insert("TargetLocationID_t_2126684481");
    Hdr_0.add_attribute("OBSub", "OnBehalfOfSubID_t_971931607"); // 1
    Hdr_0_set.insert("OnBehalfOfSubID_t_971931607");
    Hdr_0.add_attribute("OBLoc", "OnBehalfOfLocationID_t_982613477"); // 1
    Hdr_0_set.insert("OnBehalfOfLocationID_t_982613477");
    Hdr_0.add_attribute("D2Sub", "DeliverToSubID_t_1707030140"); // 1
    Hdr_0_set.insert("DeliverToSubID_t_1707030140");
    Hdr_0.add_attribute("D2Loc", "DeliverToLocationID_t_1995702513"); // 1
    Hdr_0_set.insert("DeliverToLocationID_t_1995702513");
    Hdr_0.add_attribute("PosDup", "N"); // 1
    Hdr_0_set.insert("N");
    Hdr_0.add_attribute("PosRsnd", "Y"); // 1
    Hdr_0_set.insert("Y");
    Hdr_0.add_attribute("Snt", "SendingTime_t_1996918367"); // 1
    Hdr_0_set.insert("SendingTime_t_1996918367");
    Hdr_0.add_attribute("OrigSnt", "OrigSendingTime_t_1810608440"); // 1
    Hdr_0_set.insert("OrigSendingTime_t_1810608440");
    Hdr_0.add_attribute("MsgEncd", "MessageEncoding_t_202349308"); // 1
    Hdr_0_set.insert("MessageEncoding_t_202349308");
    all_values.push_back(Hdr_0_set);
    all_compo_names.insert("Hdr_0_set");

    {
      xml_element Hop_0{"Hop"};
      multiset<string> Hop_0_set;
      Hop_0.add_attribute("ID", "HopCompID_t_1700661053"); // 2
      Hop_0_set.insert("HopCompID_t_1700661053");
      Hop_0.add_attribute("Ref", "1866835227"); // 2
      Hop_0_set.insert("1866835227");
      Hop_0.add_attribute("Snt", "HopSendingTime_t_767136853"); // 2
      Hop_0_set.insert("HopSendingTime_t_767136853");
      all_values.push_back(Hop_0_set);
      all_compo_names.insert("Hop_0_set");

      Hdr_0.add_element(Hop_0);
    }
    elt.add_element(Hdr_0);
  } // end Hdr
  { // Pty
    xml_element Pty_0{"Pty"};
    multiset<string> Pty_0_set;
    Pty_0.add_attribute("ID", "PartyID_t_1873903602"); // 1
    Pty_0_set.insert("PartyID_t_1873903602");
    Pty_0.add_attribute("Src", "1"); // 1
    Pty_0_set.insert("1");
    Pty_0.add_attribute("R", "5"); // 1
    Pty_0_set.insert("5");
    all_values.push_back(Pty_0_set);
    all_compo_names.insert("Pty_0_set");

    {
      xml_element Sub_0{"Sub"};
      multiset<string> Sub_0_set;
      Sub_0.add_attribute("ID", "PartySubID_t_1569790846"); // 2
      Sub_0_set.insert("PartySubID_t_1569790846");
      Sub_0.add_attribute("Typ", "33"); // 2
      Sub_0_set.insert("33");
      all_values.push_back(Sub_0_set);
      all_compo_names.insert("Sub_0_set");

      Pty_0.add_element(Sub_0);
    }
    elt.add_element(Pty_0);
  } // end Pty
  { // Pty
    xml_element Pty_1{"Pty"};
    multiset<string> Pty_1_set;
    Pty_1.add_attribute("ID", "PartyID_t_1872709194"); // 1
    Pty_1_set.insert("PartyID_t_1872709194");
    Pty_1.add_attribute("Src", "9"); // 1
    Pty_1_set.insert("9");
    Pty_1.add_attribute("R", "9"); // 1
    Pty_1_set.insert("9");
    all_values.push_back(Pty_1_set);
    all_compo_names.insert("Pty_1_set");

    {
      xml_element Sub_1{"Sub"};
      multiset<string> Sub_1_set;
      Sub_1.add_attribute("ID", "PartySubID_t_832436734"); // 2
      Sub_1_set.insert("PartySubID_t_832436734");
      Sub_1.add_attribute("Typ", "4"); // 2
      Sub_1_set.insert("4");
      all_values.push_back(Sub_1_set);
      all_compo_names.insert("Sub_1_set");

      Pty_1.add_element(Sub_1);
    }
    elt.add_element(Pty_1);
  } // end Pty
  { // Pty
    xml_element Pty_2{"Pty"};
    multiset<string> Pty_2_set;
    Pty_2.add_attribute("ID", "PartyID_t_1307356893"); // 1
    Pty_2_set.insert("PartyID_t_1307356893");
    Pty_2.add_attribute("Src", "I"); // 1
    Pty_2_set.insert("I");
    Pty_2.add_attribute("R", "52"); // 1
    Pty_2_set.insert("52");
    all_values.push_back(Pty_2_set);
    all_compo_names.insert("Pty_2_set");

    {
      xml_element Sub_2{"Sub"};
      multiset<string> Sub_2_set;
      Sub_2.add_attribute("ID", "PartySubID_t_892526327"); // 2
      Sub_2_set.insert("PartySubID_t_892526327");
      Sub_2.add_attribute("Typ", "19"); // 2
      Sub_2_set.insert("19");
      all_values.push_back(Sub_2_set);
      all_compo_names.insert("Sub_2_set");

      Pty_2.add_element(Sub_2);
    }
    elt.add_element(Pty_2);
  } // end Pty
  { // Qty
    xml_element Qty_0{"Qty"};
    multiset<string> Qty_0_set;
    Qty_0.add_attribute("Typ", "DN"); // 1
    Qty_0_set.insert("DN");
    Qty_0.add_attribute("Long", "9307128.450000"); // 1
    Qty_0_set.insert("9307128.450000");
    Qty_0.add_attribute("Short", "12795025.810000"); // 1
    Qty_0_set.insert("12795025.810000");
    Qty_0.add_attribute("Stat", "0"); // 1
    Qty_0_set.insert("0");
    Qty_0.add_attribute("QtyDt", "QuantityDate_t_490259337"); // 1
    Qty_0_set.insert("QuantityDate_t_490259337");
    all_values.push_back(Qty_0_set);
    all_compo_names.insert("Qty_0_set");

    {
      xml_element Pty_3{"Pty"};
      multiset<string> Pty_3_set;
      Pty_3.add_attribute("ID", "NestedPartyID_t_1127721446"); // 2
      Pty_3_set.insert("NestedPartyID_t_1127721446");
      Pty_3.add_attribute("Src", "F"); // 2
      Pty_3_set.insert("F");
      Pty_3.add_attribute("R", "72"); // 2
      Pty_3_set.insert("72");
      all_values.push_back(Pty_3_set);
      all_compo_names.insert("Pty_3_set");

      {
        xml_element Sub_3{"Sub"};
        multiset<string> Sub_3_set;
        Sub_3.add_attribute("ID", "NestedPartySubID_t_977156165"); // 3
        Sub_3_set.insert("NestedPartySubID_t_977156165");
        Sub_3.add_attribute("Typ", "30"); // 3
        Sub_3_set.insert("30");
        all_values.push_back(Sub_3_set);
        all_compo_names.insert("Sub_3_set");

        Pty_3.add_element(Sub_3);
      }
      Qty_0.add_element(Pty_3);
    }
    elt.add_element(Qty_0);
  } // end Qty
  { // Inst
    xml_element Inst_0{"Inst"};
    {
      xml_element Instrmt_0{"Instrmt"};
      multiset<string> Instrmt_0_set;
      Instrmt_0.add_attribute("Sym", "Symbol_t_530333570"); // 2
      Instrmt_0_set.insert("Symbol_t_530333570");
      Instrmt_0.add_attribute("Sfx", "WI"); // 2
      Instrmt_0_set.insert("WI");
      Instrmt_0.add_attribute("ID", "SecurityID_t_1315836963"); // 2
      Instrmt_0_set.insert("SecurityID_t_1315836963");
      Instrmt_0.add_attribute("Src", "F"); // 2
      Instrmt_0_set.insert("F");
      Instrmt_0.add_attribute("Prod", "5"); // 2
      Instrmt_0_set.insert("5");
      Instrmt_0.add_attribute("ProdCmplx", "ProductComplex_t_261654307"); // 2
      Instrmt_0_set.insert("ProductComplex_t_261654307");
      Instrmt_0.add_attribute("SecGrp", "SecurityGroup_t_1944451378"); // 2
      Instrmt_0_set.insert("SecurityGroup_t_1944451378");
      Instrmt_0.add_attribute("CFI", "CFICode_t_1065070758"); // 2
      Instrmt_0_set.insert("CFICode_t_1065070758");
      Instrmt_0.add_attribute("SecTyp", "ABS"); // 2
      Instrmt_0_set.insert("ABS");
      Instrmt_0.add_attribute("SubTyp", "SecuritySubType_t_1669676924"); // 2
      Instrmt_0_set.insert("SecuritySubType_t_1669676924");
      Instrmt_0.add_attribute("MMY", "1970207714"); // 2
      Instrmt_0_set.insert("1970207714");
      Instrmt_0.add_attribute("MatDt", "MaturityDate_t_250893653"); // 2
      Instrmt_0_set.insert("MaturityDate_t_250893653");
      Instrmt_0.add_attribute("MatTm", "354630010"); // 2
      Instrmt_0_set.insert("354630010");
      Instrmt_0.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1669617464"); // 2
      Instrmt_0_set.insert("SettleOnOpenFlag_t_1669617464");
      Instrmt_0.add_attribute("AsgnMeth", "1558250546"); // 2
      Instrmt_0_set.insert("1558250546");
      Instrmt_0.add_attribute("Status", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("CpnPmt", "CouponPaymentDate_t_861850621"); // 2
      Instrmt_0_set.insert("CouponPaymentDate_t_861850621");
      Instrmt_0.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_0_set.insert("MR");
      Instrmt_0.add_attribute("Snrty", "SB"); // 2
      Instrmt_0_set.insert("SB");
      Instrmt_0.add_attribute("NotlPctOut", "11694215.950000"); // 2
      Instrmt_0_set.insert("11694215.950000");
      Instrmt_0.add_attribute("OrigNotlPctOut", "17034196.380000"); // 2
      Instrmt_0_set.insert("17034196.380000");
      Instrmt_0.add_attribute("AttchPnt", "7679538.300000"); // 2
      Instrmt_0_set.insert("7679538.300000");
      Instrmt_0.add_attribute("DetchPnt", "3014405.280000"); // 2
      Instrmt_0_set.insert("3014405.280000");
      Instrmt_0.add_attribute("Issued", "IssueDate_t_1938675879"); // 2
      Instrmt_0_set.insert("IssueDate_t_1938675879");
      Instrmt_0.add_attribute("RepoCollSecTyp", "1258213167"); // 2
      Instrmt_0_set.insert("1258213167");
      Instrmt_0.add_attribute("RepoTrm", "1429161974"); // 2
      Instrmt_0_set.insert("1429161974");
      Instrmt_0.add_attribute("RepoRt", "1775758.170000"); // 2
      Instrmt_0_set.insert("1775758.170000");
      Instrmt_0.add_attribute("Fctr", "16045639.690000"); // 2
      Instrmt_0_set.insert("16045639.690000");
      Instrmt_0.add_attribute("CrdRtg", "CreditRating_t_258834492"); // 2
      Instrmt_0_set.insert("CreditRating_t_258834492");
      Instrmt_0.add_attribute("Rgstry", "InstrRegistry_t_227084195"); // 2
      Instrmt_0_set.insert("InstrRegistry_t_227084195");
      Instrmt_0.add_attribute("IssuCtry", "5780431"); // 2
      Instrmt_0_set.insert("5780431");
      Instrmt_0.add_attribute("StPrv", "StateOrProvinceOfIssue_t_789168062"); // 2
      Instrmt_0_set.insert("StateOrProvinceOfIssue_t_789168062");
      Instrmt_0.add_attribute("Lcl", "LocaleOfIssue_t_2143427801"); // 2
      Instrmt_0_set.insert("LocaleOfIssue_t_2143427801");
      Instrmt_0.add_attribute("Redeem", "RedemptionDate_t_1321617395"); // 2
      Instrmt_0_set.insert("RedemptionDate_t_1321617395");
      Instrmt_0.add_attribute("StrkPx", "12184264.010000"); // 2
      Instrmt_0_set.insert("12184264.010000");
      Instrmt_0.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_0_set.insert("USD");
      Instrmt_0.add_attribute("StrkMult", "10153941.310000"); // 2
      Instrmt_0_set.insert("10153941.310000");
      Instrmt_0.add_attribute("StrkValu", "5562948.220000"); // 2
      Instrmt_0_set.insert("5562948.220000");
      Instrmt_0.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_0_set.insert("4");
      Instrmt_0.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_0_set.insert("4");
      Instrmt_0.add_attribute("StrkPxBndryPrcsn", "3790188.880000"); // 2
      Instrmt_0_set.insert("3790188.880000");
      Instrmt_0.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("OptAt", "892217418"); // 2
      Instrmt_0_set.insert("892217418");
      Instrmt_0.add_attribute("Mult", "20486363.520000"); // 2
      Instrmt_0_set.insert("20486363.520000");
      Instrmt_0.add_attribute("MultTyp", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_0_set.insert("0");
      Instrmt_0.add_attribute("MinPxIncr", "7630033.260000"); // 2
      Instrmt_0_set.insert("7630033.260000");
      Instrmt_0.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1510458639"); // 2
      Instrmt_0_set.insert("MinPriceIncrementAmount_t_1510458639");
      Instrmt_0.add_attribute("UOM", "Alw"); // 2
      Instrmt_0_set.insert("Alw");
      Instrmt_0.add_attribute("UOMQty", "19324249.210000"); // 2
      Instrmt_0_set.insert("19324249.210000");
      Instrmt_0.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_0_set.insert("MMBtu");
      Instrmt_0.add_attribute("PxUOMQty", "3831412.080000"); // 2
      Instrmt_0_set.insert("3831412.080000");
      Instrmt_0.add_attribute("SettlMeth", "C"); // 2
      Instrmt_0_set.insert("C");
      Instrmt_0.add_attribute("ExerStyle", "0"); // 2
      Instrmt_0_set.insert("0");
      Instrmt_0.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("OptPayAmt", "OptPayoutAmount_t_1515543776"); // 2
      Instrmt_0_set.insert("OptPayoutAmount_t_1515543776");
      Instrmt_0.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_0_set.insert("INT");
      Instrmt_0.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_0_set.insert("FUTDA");
      Instrmt_0.add_attribute("ListMeth", "0"); // 2
      Instrmt_0_set.insert("0");
      Instrmt_0.add_attribute("CapPx", "12622468.740000"); // 2
      Instrmt_0_set.insert("12622468.740000");
      Instrmt_0.add_attribute("FlrPx", "11042151.290000"); // 2
      Instrmt_0_set.insert("11042151.290000");
      Instrmt_0.add_attribute("PutCall", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("FlexInd", "false"); // 2
      Instrmt_0_set.insert("false");
      Instrmt_0.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_0_set.insert("true");
      Instrmt_0.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_0_set.insert("Wk");
      Instrmt_0.add_attribute("CpnRt", "7494150.910000"); // 2
      Instrmt_0_set.insert("7494150.910000");
      Instrmt_0.add_attribute("Exch", "SecurityExchange_t_1861620578"); // 2
      Instrmt_0_set.insert("SecurityExchange_t_1861620578");
      Instrmt_0.add_attribute("PosLmt", "502399567"); // 2
      Instrmt_0_set.insert("502399567");
      Instrmt_0.add_attribute("NTPosLmt", "1305709914"); // 2
      Instrmt_0_set.insert("1305709914");
      Instrmt_0.add_attribute("Issr", "Issuer_t_1259641793"); // 2
      Instrmt_0_set.insert("Issuer_t_1259641793");
      Instrmt_0.add_attribute("EncIssrLen", "1039986975"); // 2
      Instrmt_0_set.insert("1039986975");
      Instrmt_0.add_attribute("EncIssr", "EncodedIssuer_t_1684728802"); // 2
      Instrmt_0_set.insert("EncodedIssuer_t_1684728802");
      Instrmt_0.add_attribute("Desc", "SecurityDesc_t_908556661"); // 2
      Instrmt_0_set.insert("SecurityDesc_t_908556661");
      Instrmt_0.add_attribute("EncSecDescLen", "1932204394"); // 2
      Instrmt_0_set.insert("1932204394");
      Instrmt_0.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1585881507"); // 2
      Instrmt_0_set.insert("EncodedSecurityDesc_t_1585881507");
      Instrmt_0.add_attribute("Pool", "Pool_t_2115722075"); // 2
      Instrmt_0_set.insert("Pool_t_2115722075");
      Instrmt_0.add_attribute("CSetMo", "1710150786"); // 2
      Instrmt_0_set.insert("1710150786");
      Instrmt_0.add_attribute("CPPgm", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("CPRegT", "CPRegType_t_1478697067"); // 2
      Instrmt_0_set.insert("CPRegType_t_1478697067");
      Instrmt_0.add_attribute("Dated", "DatedDate_t_1325338164"); // 2
      Instrmt_0_set.insert("DatedDate_t_1325338164");
      Instrmt_0.add_attribute("IntAcrl", "InterestAccrualDate_t_2133826106"); // 2
      Instrmt_0_set.insert("InterestAccrualDate_t_2133826106");
      all_values.push_back(Instrmt_0_set);
      all_compo_names.insert("Instrmt_0_set");

      {
        xml_element AID_0{"AID"};
        multiset<string> AID_0_set;
        AID_0.add_attribute("AltID", "SecurityAltID_t_397608048"); // 3
        AID_0_set.insert("SecurityAltID_t_397608048");
        AID_0.add_attribute("AltIDSrc", "8"); // 3
        AID_0_set.insert("8");
        all_values.push_back(AID_0_set);
        all_compo_names.insert("AID_0_set");

        Instrmt_0.add_element(AID_0);
      }
      {
        xml_element SecXML_0{"SecXML"};
        multiset<string> SecXML_0_set;
        SecXML_0.add_attribute("Schema", "SecurityXMLSchema_t_72724260"); // 3
        SecXML_0_set.insert("SecurityXMLSchema_t_72724260");
        all_values.push_back(SecXML_0_set);
        all_compo_names.insert("SecXML_0_set");

        Instrmt_0.add_element(SecXML_0);
      }
      {
        xml_element Evnt_0{"Evnt"};
        multiset<string> Evnt_0_set;
        Evnt_0.add_attribute("EventTyp", "9"); // 3
        Evnt_0_set.insert("9");
        Evnt_0.add_attribute("Dt", "EventDate_t_1202350101"); // 3
        Evnt_0_set.insert("EventDate_t_1202350101");
        Evnt_0.add_attribute("Tm", "EventTime_t_1588268037"); // 3
        Evnt_0_set.insert("EventTime_t_1588268037");
        Evnt_0.add_attribute("Px", "1428739.400000"); // 3
        Evnt_0_set.insert("1428739.400000");
        Evnt_0.add_attribute("Txt", "EventText_t_153301150"); // 3
        Evnt_0_set.insert("EventText_t_153301150");
        all_values.push_back(Evnt_0_set);
        all_compo_names.insert("Evnt_0_set");

        Instrmt_0.add_element(Evnt_0);
      }
      {
        xml_element Pty_4{"Pty"};
        multiset<string> Pty_4_set;
        Pty_4.add_attribute("ID", "InstrumentPartyID_t_1215162657"); // 3
        Pty_4_set.insert("InstrumentPartyID_t_1215162657");
        Pty_4.add_attribute("Src", "9"); // 3
        Pty_4_set.insert("9");
        Pty_4.add_attribute("R", "77"); // 3
        Pty_4_set.insert("77");
        all_values.push_back(Pty_4_set);
        all_compo_names.insert("Pty_4_set");

        {
          xml_element Sub_4{"Sub"};
          multiset<string> Sub_4_set;
          Sub_4.add_attribute("ID", "InstrumentPartySubID_t_1631225340"); // 4
          Sub_4_set.insert("InstrumentPartySubID_t_1631225340");
          Sub_4.add_attribute("Typ", "20"); // 4
          Sub_4_set.insert("20");
          all_values.push_back(Sub_4_set);
          all_compo_names.insert("Sub_4_set");

          Pty_4.add_element(Sub_4);
        }
        Instrmt_0.add_element(Pty_4);
      }
      {
        xml_element CmplxEvnt_0{"CmplxEvnt"};
        multiset<string> CmplxEvnt_0_set;
        CmplxEvnt_0.add_attribute("Typ", "9"); // 3
        CmplxEvnt_0_set.insert("9");
        CmplxEvnt_0.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1118230776"); // 3
        CmplxEvnt_0_set.insert("ComplexOptPayoutAmount_t_1118230776");
        CmplxEvnt_0.add_attribute("Px", "12652432.840000"); // 3
        CmplxEvnt_0_set.insert("12652432.840000");
        CmplxEvnt_0.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_0_set.insert("2");
        CmplxEvnt_0.add_attribute("PxBndryPrcsn", "16206303.440000"); // 3
        CmplxEvnt_0_set.insert("16206303.440000");
        CmplxEvnt_0.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_0_set.insert("3");
        CmplxEvnt_0.add_attribute("Cond", "2"); // 3
        CmplxEvnt_0_set.insert("2");
        all_values.push_back(CmplxEvnt_0_set);
        all_compo_names.insert("CmplxEvnt_0_set");

        {
          xml_element EvntDts_0{"EvntDts"};
          multiset<string> EvntDts_0_set;
          EvntDts_0.add_attribute("StartDt", "ComplexEventStartDate_t_513133671"); // 4
          EvntDts_0_set.insert("ComplexEventStartDate_t_513133671");
          EvntDts_0.add_attribute("EndDt", "ComplexEventEndDate_t_2108198353"); // 4
          EvntDts_0_set.insert("ComplexEventEndDate_t_2108198353");
          all_values.push_back(EvntDts_0_set);
          all_compo_names.insert("EvntDts_0_set");

          {
            xml_element EvntTms_0{"EvntTms"};
            multiset<string> EvntTms_0_set;
            EvntTms_0.add_attribute("StartTm", "1270716893"); // 5
            EvntTms_0_set.insert("1270716893");
            EvntTms_0.add_attribute("EndTm", "297854417"); // 5
            EvntTms_0_set.insert("297854417");
            all_values.push_back(EvntTms_0_set);
            all_compo_names.insert("EvntTms_0_set");

            EvntDts_0.add_element(EvntTms_0);
          }
          CmplxEvnt_0.add_element(EvntDts_0);
        }
        Instrmt_0.add_element(CmplxEvnt_0);
      }
      Inst_0.add_element(Instrmt_0);
    }
    elt.add_element(Inst_0);
  } // end Inst
  { // Inst
    xml_element Inst_1{"Inst"};
    {
      xml_element Instrmt_1{"Instrmt"};
      multiset<string> Instrmt_1_set;
      Instrmt_1.add_attribute("Sym", "Symbol_t_1546596212"); // 2
      Instrmt_1_set.insert("Symbol_t_1546596212");
      Instrmt_1.add_attribute("Sfx", "CD"); // 2
      Instrmt_1_set.insert("CD");
      Instrmt_1.add_attribute("ID", "SecurityID_t_2008005204"); // 2
      Instrmt_1_set.insert("SecurityID_t_2008005204");
      Instrmt_1.add_attribute("Src", "4"); // 2
      Instrmt_1_set.insert("4");
      Instrmt_1.add_attribute("Prod", "7"); // 2
      Instrmt_1_set.insert("7");
      Instrmt_1.add_attribute("ProdCmplx", "ProductComplex_t_1185859720"); // 2
      Instrmt_1_set.insert("ProductComplex_t_1185859720");
      Instrmt_1.add_attribute("SecGrp", "SecurityGroup_t_1734339855"); // 2
      Instrmt_1_set.insert("SecurityGroup_t_1734339855");
      Instrmt_1.add_attribute("CFI", "CFICode_t_967776788"); // 2
      Instrmt_1_set.insert("CFICode_t_967776788");
      Instrmt_1.add_attribute("SecTyp", "PEF"); // 2
      Instrmt_1_set.insert("PEF");
      Instrmt_1.add_attribute("SubTyp", "SecuritySubType_t_1807064116"); // 2
      Instrmt_1_set.insert("SecuritySubType_t_1807064116");
      Instrmt_1.add_attribute("MMY", "75488049"); // 2
      Instrmt_1_set.insert("75488049");
      Instrmt_1.add_attribute("MatDt", "MaturityDate_t_1949205546"); // 2
      Instrmt_1_set.insert("MaturityDate_t_1949205546");
      Instrmt_1.add_attribute("MatTm", "1247848505"); // 2
      Instrmt_1_set.insert("1247848505");
      Instrmt_1.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_218361989"); // 2
      Instrmt_1_set.insert("SettleOnOpenFlag_t_218361989");
      Instrmt_1.add_attribute("AsgnMeth", "2102506697"); // 2
      Instrmt_1_set.insert("2102506697");
      Instrmt_1.add_attribute("Status", "1"); // 2
      Instrmt_1_set.insert("1");
      Instrmt_1.add_attribute("CpnPmt", "CouponPaymentDate_t_1623482803"); // 2
      Instrmt_1_set.insert("CouponPaymentDate_t_1623482803");
      Instrmt_1.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_1_set.insert("FR");
      Instrmt_1.add_attribute("Snrty", "SR"); // 2
      Instrmt_1_set.insert("SR");
      Instrmt_1.add_attribute("NotlPctOut", "21393109.960000"); // 2
      Instrmt_1_set.insert("21393109.960000");
      Instrmt_1.add_attribute("OrigNotlPctOut", "6009208.360000"); // 2
      Instrmt_1_set.insert("6009208.360000");
      Instrmt_1.add_attribute("AttchPnt", "9174999.830000"); // 2
      Instrmt_1_set.insert("9174999.830000");
      Instrmt_1.add_attribute("DetchPnt", "12570706.330000"); // 2
      Instrmt_1_set.insert("12570706.330000");
      Instrmt_1.add_attribute("Issued", "IssueDate_t_1850922922"); // 2
      Instrmt_1_set.insert("IssueDate_t_1850922922");
      Instrmt_1.add_attribute("RepoCollSecTyp", "390646679"); // 2
      Instrmt_1_set.insert("390646679");
      Instrmt_1.add_attribute("RepoTrm", "1680540183"); // 2
      Instrmt_1_set.insert("1680540183");
      Instrmt_1.add_attribute("RepoRt", "655995.050000"); // 2
      Instrmt_1_set.insert("655995.050000");
      Instrmt_1.add_attribute("Fctr", "9037803.510000"); // 2
      Instrmt_1_set.insert("9037803.510000");
      Instrmt_1.add_attribute("CrdRtg", "CreditRating_t_1641254888"); // 2
      Instrmt_1_set.insert("CreditRating_t_1641254888");
      Instrmt_1.add_attribute("Rgstry", "InstrRegistry_t_1336316398"); // 2
      Instrmt_1_set.insert("InstrRegistry_t_1336316398");
      Instrmt_1.add_attribute("IssuCtry", "1201634768"); // 2
      Instrmt_1_set.insert("1201634768");
      Instrmt_1.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1040367452"); // 2
      Instrmt_1_set.insert("StateOrProvinceOfIssue_t_1040367452");
      Instrmt_1.add_attribute("Lcl", "LocaleOfIssue_t_427788071"); // 2
      Instrmt_1_set.insert("LocaleOfIssue_t_427788071");
      Instrmt_1.add_attribute("Redeem", "RedemptionDate_t_1062156324"); // 2
      Instrmt_1_set.insert("RedemptionDate_t_1062156324");
      Instrmt_1.add_attribute("StrkPx", "6408812.010000"); // 2
      Instrmt_1_set.insert("6408812.010000");
      Instrmt_1.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_1_set.insert("CHF");
      Instrmt_1.add_attribute("StrkMult", "2277374.090000"); // 2
      Instrmt_1_set.insert("2277374.090000");
      Instrmt_1.add_attribute("StrkValu", "19657335.980000"); // 2
      Instrmt_1_set.insert("19657335.980000");
      Instrmt_1.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_1_set.insert("3");
      Instrmt_1.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_1_set.insert("1");
      Instrmt_1.add_attribute("StrkPxBndryPrcsn", "20412216.480000"); // 2
      Instrmt_1_set.insert("20412216.480000");
      Instrmt_1.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_1_set.insert("2");
      Instrmt_1.add_attribute("OptAt", "1135166382"); // 2
      Instrmt_1_set.insert("1135166382");
      Instrmt_1.add_attribute("Mult", "1120999.890000"); // 2
      Instrmt_1_set.insert("1120999.890000");
      Instrmt_1.add_attribute("MultTyp", "2"); // 2
      Instrmt_1_set.insert("2");
      Instrmt_1.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_1_set.insert("1");
      Instrmt_1.add_attribute("MinPxIncr", "17355827.930000"); // 2
      Instrmt_1_set.insert("17355827.930000");
      Instrmt_1.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1816672118"); // 2
      Instrmt_1_set.insert("MinPriceIncrementAmount_t_1816672118");
      Instrmt_1.add_attribute("UOM", "Alw"); // 2
      Instrmt_1_set.insert("Alw");
      Instrmt_1.add_attribute("UOMQty", "17274101.410000"); // 2
      Instrmt_1_set.insert("17274101.410000");
      Instrmt_1.add_attribute("PxUOM", "Alw"); // 2
      Instrmt_1_set.insert("Alw");
      Instrmt_1.add_attribute("PxUOMQty", "199794.390000"); // 2
      Instrmt_1_set.insert("199794.390000");
      Instrmt_1.add_attribute("SettlMeth", "C"); // 2
      Instrmt_1_set.insert("C");
      Instrmt_1.add_attribute("ExerStyle", "2"); // 2
      Instrmt_1_set.insert("2");
      Instrmt_1.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_1_set.insert("3");
      Instrmt_1.add_attribute("OptPayAmt", "OptPayoutAmount_t_370053662"); // 2
      Instrmt_1_set.insert("OptPayoutAmount_t_370053662");
      Instrmt_1.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_1_set.insert("INT");
      Instrmt_1.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_1_set.insert("CDSD");
      Instrmt_1.add_attribute("ListMeth", "0"); // 2
      Instrmt_1_set.insert("0");
      Instrmt_1.add_attribute("CapPx", "13754644.840000"); // 2
      Instrmt_1_set.insert("13754644.840000");
      Instrmt_1.add_attribute("FlrPx", "3685575.900000"); // 2
      Instrmt_1_set.insert("3685575.900000");
      Instrmt_1.add_attribute("PutCall", "1"); // 2
      Instrmt_1_set.insert("1");
      Instrmt_1.add_attribute("FlexInd", "false"); // 2
      Instrmt_1_set.insert("false");
      Instrmt_1.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_1_set.insert("true");
      Instrmt_1.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_1_set.insert("Mo");
      Instrmt_1.add_attribute("CpnRt", "6537257.180000"); // 2
      Instrmt_1_set.insert("6537257.180000");
      Instrmt_1.add_attribute("Exch", "SecurityExchange_t_1531246311"); // 2
      Instrmt_1_set.insert("SecurityExchange_t_1531246311");
      Instrmt_1.add_attribute("PosLmt", "1772810965"); // 2
      Instrmt_1_set.insert("1772810965");
      Instrmt_1.add_attribute("NTPosLmt", "471975668"); // 2
      Instrmt_1_set.insert("471975668");
      Instrmt_1.add_attribute("Issr", "Issuer_t_231150506"); // 2
      Instrmt_1_set.insert("Issuer_t_231150506");
      Instrmt_1.add_attribute("EncIssrLen", "1660128842"); // 2
      Instrmt_1_set.insert("1660128842");
      Instrmt_1.add_attribute("EncIssr", "EncodedIssuer_t_365713668"); // 2
      Instrmt_1_set.insert("EncodedIssuer_t_365713668");
      Instrmt_1.add_attribute("Desc", "SecurityDesc_t_880260247"); // 2
      Instrmt_1_set.insert("SecurityDesc_t_880260247");
      Instrmt_1.add_attribute("EncSecDescLen", "647811576"); // 2
      Instrmt_1_set.insert("647811576");
      Instrmt_1.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_477813658"); // 2
      Instrmt_1_set.insert("EncodedSecurityDesc_t_477813658");
      Instrmt_1.add_attribute("Pool", "Pool_t_1484393037"); // 2
      Instrmt_1_set.insert("Pool_t_1484393037");
      Instrmt_1.add_attribute("CSetMo", "2098505473"); // 2
      Instrmt_1_set.insert("2098505473");
      Instrmt_1.add_attribute("CPPgm", "2"); // 2
      Instrmt_1_set.insert("2");
      Instrmt_1.add_attribute("CPRegT", "CPRegType_t_1153581507"); // 2
      Instrmt_1_set.insert("CPRegType_t_1153581507");
      Instrmt_1.add_attribute("Dated", "DatedDate_t_1200984928"); // 2
      Instrmt_1_set.insert("DatedDate_t_1200984928");
      Instrmt_1.add_attribute("IntAcrl", "InterestAccrualDate_t_1793322944"); // 2
      Instrmt_1_set.insert("InterestAccrualDate_t_1793322944");
      all_values.push_back(Instrmt_1_set);
      all_compo_names.insert("Instrmt_1_set");

      {
        xml_element AID_1{"AID"};
        multiset<string> AID_1_set;
        AID_1.add_attribute("AltID", "SecurityAltID_t_1423690814"); // 3
        AID_1_set.insert("SecurityAltID_t_1423690814");
        AID_1.add_attribute("AltIDSrc", "8"); // 3
        AID_1_set.insert("8");
        all_values.push_back(AID_1_set);
        all_compo_names.insert("AID_1_set");

        Instrmt_1.add_element(AID_1);
      }
      {
        xml_element SecXML_1{"SecXML"};
        multiset<string> SecXML_1_set;
        SecXML_1.add_attribute("Schema", "SecurityXMLSchema_t_482836423"); // 3
        SecXML_1_set.insert("SecurityXMLSchema_t_482836423");
        all_values.push_back(SecXML_1_set);
        all_compo_names.insert("SecXML_1_set");

        Instrmt_1.add_element(SecXML_1);
      }
      {
        xml_element Evnt_1{"Evnt"};
        multiset<string> Evnt_1_set;
        Evnt_1.add_attribute("EventTyp", "14"); // 3
        Evnt_1_set.insert("14");
        Evnt_1.add_attribute("Dt", "EventDate_t_1631590486"); // 3
        Evnt_1_set.insert("EventDate_t_1631590486");
        Evnt_1.add_attribute("Tm", "EventTime_t_852890085"); // 3
        Evnt_1_set.insert("EventTime_t_852890085");
        Evnt_1.add_attribute("Px", "14363874.800000"); // 3
        Evnt_1_set.insert("14363874.800000");
        Evnt_1.add_attribute("Txt", "EventText_t_798513307"); // 3
        Evnt_1_set.insert("EventText_t_798513307");
        all_values.push_back(Evnt_1_set);
        all_compo_names.insert("Evnt_1_set");

        Instrmt_1.add_element(Evnt_1);
      }
      {
        xml_element Pty_5{"Pty"};
        multiset<string> Pty_5_set;
        Pty_5.add_attribute("ID", "InstrumentPartyID_t_716714987"); // 3
        Pty_5_set.insert("InstrumentPartyID_t_716714987");
        Pty_5.add_attribute("Src", "I"); // 3
        Pty_5_set.insert("I");
        Pty_5.add_attribute("R", "21"); // 3
        Pty_5_set.insert("21");
        all_values.push_back(Pty_5_set);
        all_compo_names.insert("Pty_5_set");

        {
          xml_element Sub_5{"Sub"};
          multiset<string> Sub_5_set;
          Sub_5.add_attribute("ID", "InstrumentPartySubID_t_1620907342"); // 4
          Sub_5_set.insert("InstrumentPartySubID_t_1620907342");
          Sub_5.add_attribute("Typ", "1"); // 4
          Sub_5_set.insert("1");
          all_values.push_back(Sub_5_set);
          all_compo_names.insert("Sub_5_set");

          Pty_5.add_element(Sub_5);
        }
        Instrmt_1.add_element(Pty_5);
      }
      {
        xml_element CmplxEvnt_1{"CmplxEvnt"};
        multiset<string> CmplxEvnt_1_set;
        CmplxEvnt_1.add_attribute("Typ", "7"); // 3
        CmplxEvnt_1_set.insert("7");
        CmplxEvnt_1.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1018497251"); // 3
        CmplxEvnt_1_set.insert("ComplexOptPayoutAmount_t_1018497251");
        CmplxEvnt_1.add_attribute("Px", "9738629.420000"); // 3
        CmplxEvnt_1_set.insert("9738629.420000");
        CmplxEvnt_1.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_1_set.insert("1");
        CmplxEvnt_1.add_attribute("PxBndryPrcsn", "6438245.680000"); // 3
        CmplxEvnt_1_set.insert("6438245.680000");
        CmplxEvnt_1.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_1_set.insert("3");
        CmplxEvnt_1.add_attribute("Cond", "2"); // 3
        CmplxEvnt_1_set.insert("2");
        all_values.push_back(CmplxEvnt_1_set);
        all_compo_names.insert("CmplxEvnt_1_set");

        {
          xml_element EvntDts_1{"EvntDts"};
          multiset<string> EvntDts_1_set;
          EvntDts_1.add_attribute("StartDt", "ComplexEventStartDate_t_156469763"); // 4
          EvntDts_1_set.insert("ComplexEventStartDate_t_156469763");
          EvntDts_1.add_attribute("EndDt", "ComplexEventEndDate_t_1811552279"); // 4
          EvntDts_1_set.insert("ComplexEventEndDate_t_1811552279");
          all_values.push_back(EvntDts_1_set);
          all_compo_names.insert("EvntDts_1_set");

          {
            xml_element EvntTms_1{"EvntTms"};
            multiset<string> EvntTms_1_set;
            EvntTms_1.add_attribute("StartTm", "945474580"); // 5
            EvntTms_1_set.insert("945474580");
            EvntTms_1.add_attribute("EndTm", "804281339"); // 5
            EvntTms_1_set.insert("804281339");
            all_values.push_back(EvntTms_1_set);
            all_compo_names.insert("EvntTms_1_set");

            EvntDts_1.add_element(EvntTms_1);
          }
          CmplxEvnt_1.add_element(EvntDts_1);
        }
        Instrmt_1.add_element(CmplxEvnt_1);
      }
      Inst_1.add_element(Instrmt_1);
    }
    elt.add_element(Inst_1);
  } // end Inst
  { // Inst
    xml_element Inst_2{"Inst"};
    {
      xml_element Instrmt_2{"Instrmt"};
      multiset<string> Instrmt_2_set;
      Instrmt_2.add_attribute("Sym", "Symbol_t_141882289"); // 2
      Instrmt_2_set.insert("Symbol_t_141882289");
      Instrmt_2.add_attribute("Sfx", "WI"); // 2
      Instrmt_2_set.insert("WI");
      Instrmt_2.add_attribute("ID", "SecurityID_t_755303164"); // 2
      Instrmt_2_set.insert("SecurityID_t_755303164");
      Instrmt_2.add_attribute("Src", "B"); // 2
      Instrmt_2_set.insert("B");
      Instrmt_2.add_attribute("Prod", "8"); // 2
      Instrmt_2_set.insert("8");
      Instrmt_2.add_attribute("ProdCmplx", "ProductComplex_t_1956288093"); // 2
      Instrmt_2_set.insert("ProductComplex_t_1956288093");
      Instrmt_2.add_attribute("SecGrp", "SecurityGroup_t_2001118037"); // 2
      Instrmt_2_set.insert("SecurityGroup_t_2001118037");
      Instrmt_2.add_attribute("CFI", "CFICode_t_712172643"); // 2
      Instrmt_2_set.insert("CFICode_t_712172643");
      Instrmt_2.add_attribute("SecTyp", "MF"); // 2
      Instrmt_2_set.insert("MF");
      Instrmt_2.add_attribute("SubTyp", "SecuritySubType_t_336470812"); // 2
      Instrmt_2_set.insert("SecuritySubType_t_336470812");
      Instrmt_2.add_attribute("MMY", "2109412037"); // 2
      Instrmt_2_set.insert("2109412037");
      Instrmt_2.add_attribute("MatDt", "MaturityDate_t_513875650"); // 2
      Instrmt_2_set.insert("MaturityDate_t_513875650");
      Instrmt_2.add_attribute("MatTm", "1189360897"); // 2
      Instrmt_2_set.insert("1189360897");
      Instrmt_2.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1398315870"); // 2
      Instrmt_2_set.insert("SettleOnOpenFlag_t_1398315870");
      Instrmt_2.add_attribute("AsgnMeth", "1312388958"); // 2
      Instrmt_2_set.insert("1312388958");
      Instrmt_2.add_attribute("Status", "1"); // 2
      Instrmt_2_set.insert("1");
      Instrmt_2.add_attribute("CpnPmt", "CouponPaymentDate_t_2062684187"); // 2
      Instrmt_2_set.insert("CouponPaymentDate_t_2062684187");
      Instrmt_2.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_2_set.insert("XR");
      Instrmt_2.add_attribute("Snrty", "SD"); // 2
      Instrmt_2_set.insert("SD");
      Instrmt_2.add_attribute("NotlPctOut", "2353377.630000"); // 2
      Instrmt_2_set.insert("2353377.630000");
      Instrmt_2.add_attribute("OrigNotlPctOut", "7822773.710000"); // 2
      Instrmt_2_set.insert("7822773.710000");
      Instrmt_2.add_attribute("AttchPnt", "2505131.820000"); // 2
      Instrmt_2_set.insert("2505131.820000");
      Instrmt_2.add_attribute("DetchPnt", "12092007.060000"); // 2
      Instrmt_2_set.insert("12092007.060000");
      Instrmt_2.add_attribute("Issued", "IssueDate_t_616341199"); // 2
      Instrmt_2_set.insert("IssueDate_t_616341199");
      Instrmt_2.add_attribute("RepoCollSecTyp", "894337750"); // 2
      Instrmt_2_set.insert("894337750");
      Instrmt_2.add_attribute("RepoTrm", "507555669"); // 2
      Instrmt_2_set.insert("507555669");
      Instrmt_2.add_attribute("RepoRt", "6815555.320000"); // 2
      Instrmt_2_set.insert("6815555.320000");
      Instrmt_2.add_attribute("Fctr", "10508075.130000"); // 2
      Instrmt_2_set.insert("10508075.130000");
      Instrmt_2.add_attribute("CrdRtg", "CreditRating_t_171624300"); // 2
      Instrmt_2_set.insert("CreditRating_t_171624300");
      Instrmt_2.add_attribute("Rgstry", "InstrRegistry_t_1627030113"); // 2
      Instrmt_2_set.insert("InstrRegistry_t_1627030113");
      Instrmt_2.add_attribute("IssuCtry", "1855088853"); // 2
      Instrmt_2_set.insert("1855088853");
      Instrmt_2.add_attribute("StPrv", "StateOrProvinceOfIssue_t_313506590"); // 2
      Instrmt_2_set.insert("StateOrProvinceOfIssue_t_313506590");
      Instrmt_2.add_attribute("Lcl", "LocaleOfIssue_t_1909414082"); // 2
      Instrmt_2_set.insert("LocaleOfIssue_t_1909414082");
      Instrmt_2.add_attribute("Redeem", "RedemptionDate_t_462908369"); // 2
      Instrmt_2_set.insert("RedemptionDate_t_462908369");
      Instrmt_2.add_attribute("StrkPx", "5213016.820000"); // 2
      Instrmt_2_set.insert("5213016.820000");
      Instrmt_2.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_2_set.insert("USD");
      Instrmt_2.add_attribute("StrkMult", "3749360.710000"); // 2
      Instrmt_2_set.insert("3749360.710000");
      Instrmt_2.add_attribute("StrkValu", "19100685.540000"); // 2
      Instrmt_2_set.insert("19100685.540000");
      Instrmt_2.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_2_set.insert("4");
      Instrmt_2.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_2_set.insert("4");
      Instrmt_2.add_attribute("StrkPxBndryPrcsn", "18719969.440000"); // 2
      Instrmt_2_set.insert("18719969.440000");
      Instrmt_2.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_2_set.insert("2");
      Instrmt_2.add_attribute("OptAt", "1900767780"); // 2
      Instrmt_2_set.insert("1900767780");
      Instrmt_2.add_attribute("Mult", "11228291.660000"); // 2
      Instrmt_2_set.insert("11228291.660000");
      Instrmt_2.add_attribute("MultTyp", "2"); // 2
      Instrmt_2_set.insert("2");
      Instrmt_2.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_2_set.insert("2");
      Instrmt_2.add_attribute("MinPxIncr", "10380297.050000"); // 2
      Instrmt_2_set.insert("10380297.050000");
      Instrmt_2.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1312238795"); // 2
      Instrmt_2_set.insert("MinPriceIncrementAmount_t_1312238795");
      Instrmt_2.add_attribute("UOM", "oz_tr"); // 2
      Instrmt_2_set.insert("oz_tr");
      Instrmt_2.add_attribute("UOMQty", "12733674.680000"); // 2
      Instrmt_2_set.insert("12733674.680000");
      Instrmt_2.add_attribute("PxUOM", "Bbl"); // 2
      Instrmt_2_set.insert("Bbl");
      Instrmt_2.add_attribute("PxUOMQty", "11418891.300000"); // 2
      Instrmt_2_set.insert("11418891.300000");
      Instrmt_2.add_attribute("SettlMeth", "C"); // 2
      Instrmt_2_set.insert("C");
      Instrmt_2.add_attribute("ExerStyle", "0"); // 2
      Instrmt_2_set.insert("0");
      Instrmt_2.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_2_set.insert("2");
      Instrmt_2.add_attribute("OptPayAmt", "OptPayoutAmount_t_842640195"); // 2
      Instrmt_2_set.insert("OptPayoutAmount_t_842640195");
      Instrmt_2.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_2_set.insert("INT");
      Instrmt_2.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_2_set.insert("FUT");
      Instrmt_2.add_attribute("ListMeth", "0"); // 2
      Instrmt_2_set.insert("0");
      Instrmt_2.add_attribute("CapPx", "7244757.150000"); // 2
      Instrmt_2_set.insert("7244757.150000");
      Instrmt_2.add_attribute("FlrPx", "6471559.510000"); // 2
      Instrmt_2_set.insert("6471559.510000");
      Instrmt_2.add_attribute("PutCall", "0"); // 2
      Instrmt_2_set.insert("0");
      Instrmt_2.add_attribute("FlexInd", "false"); // 2
      Instrmt_2_set.insert("false");
      Instrmt_2.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_2_set.insert("true");
      Instrmt_2.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_2_set.insert("Wk");
      Instrmt_2.add_attribute("CpnRt", "16843020.610000"); // 2
      Instrmt_2_set.insert("16843020.610000");
      Instrmt_2.add_attribute("Exch", "SecurityExchange_t_1381777135"); // 2
      Instrmt_2_set.insert("SecurityExchange_t_1381777135");
      Instrmt_2.add_attribute("PosLmt", "76525192"); // 2
      Instrmt_2_set.insert("76525192");
      Instrmt_2.add_attribute("NTPosLmt", "1446886967"); // 2
      Instrmt_2_set.insert("1446886967");
      Instrmt_2.add_attribute("Issr", "Issuer_t_535775114"); // 2
      Instrmt_2_set.insert("Issuer_t_535775114");
      Instrmt_2.add_attribute("EncIssrLen", "787932075"); // 2
      Instrmt_2_set.insert("787932075");
      Instrmt_2.add_attribute("EncIssr", "EncodedIssuer_t_1171400263"); // 2
      Instrmt_2_set.insert("EncodedIssuer_t_1171400263");
      Instrmt_2.add_attribute("Desc", "SecurityDesc_t_203648743"); // 2
      Instrmt_2_set.insert("SecurityDesc_t_203648743");
      Instrmt_2.add_attribute("EncSecDescLen", "541216208"); // 2
      Instrmt_2_set.insert("541216208");
      Instrmt_2.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_146745781"); // 2
      Instrmt_2_set.insert("EncodedSecurityDesc_t_146745781");
      Instrmt_2.add_attribute("Pool", "Pool_t_1183911331"); // 2
      Instrmt_2_set.insert("Pool_t_1183911331");
      Instrmt_2.add_attribute("CSetMo", "53092577"); // 2
      Instrmt_2_set.insert("53092577");
      Instrmt_2.add_attribute("CPPgm", "1"); // 2
      Instrmt_2_set.insert("1");
      Instrmt_2.add_attribute("CPRegT", "CPRegType_t_348666478"); // 2
      Instrmt_2_set.insert("CPRegType_t_348666478");
      Instrmt_2.add_attribute("Dated", "DatedDate_t_944468525"); // 2
      Instrmt_2_set.insert("DatedDate_t_944468525");
      Instrmt_2.add_attribute("IntAcrl", "InterestAccrualDate_t_310659307"); // 2
      Instrmt_2_set.insert("InterestAccrualDate_t_310659307");
      all_values.push_back(Instrmt_2_set);
      all_compo_names.insert("Instrmt_2_set");

      {
        xml_element AID_2{"AID"};
        multiset<string> AID_2_set;
        AID_2.add_attribute("AltID", "SecurityAltID_t_295698996"); // 3
        AID_2_set.insert("SecurityAltID_t_295698996");
        AID_2.add_attribute("AltIDSrc", "L"); // 3
        AID_2_set.insert("L");
        all_values.push_back(AID_2_set);
        all_compo_names.insert("AID_2_set");

        Instrmt_2.add_element(AID_2);
      }
      {
        xml_element SecXML_2{"SecXML"};
        multiset<string> SecXML_2_set;
        SecXML_2.add_attribute("Schema", "SecurityXMLSchema_t_645743833"); // 3
        SecXML_2_set.insert("SecurityXMLSchema_t_645743833");
        all_values.push_back(SecXML_2_set);
        all_compo_names.insert("SecXML_2_set");

        Instrmt_2.add_element(SecXML_2);
      }
      {
        xml_element Evnt_2{"Evnt"};
        multiset<string> Evnt_2_set;
        Evnt_2.add_attribute("EventTyp", "14"); // 3
        Evnt_2_set.insert("14");
        Evnt_2.add_attribute("Dt", "EventDate_t_1975100887"); // 3
        Evnt_2_set.insert("EventDate_t_1975100887");
        Evnt_2.add_attribute("Tm", "EventTime_t_1488384029"); // 3
        Evnt_2_set.insert("EventTime_t_1488384029");
        Evnt_2.add_attribute("Px", "21040019.640000"); // 3
        Evnt_2_set.insert("21040019.640000");
        Evnt_2.add_attribute("Txt", "EventText_t_767167985"); // 3
        Evnt_2_set.insert("EventText_t_767167985");
        all_values.push_back(Evnt_2_set);
        all_compo_names.insert("Evnt_2_set");

        Instrmt_2.add_element(Evnt_2);
      }
      {
        xml_element Pty_6{"Pty"};
        multiset<string> Pty_6_set;
        Pty_6.add_attribute("ID", "InstrumentPartyID_t_355164877"); // 3
        Pty_6_set.insert("InstrumentPartyID_t_355164877");
        Pty_6.add_attribute("Src", "E"); // 3
        Pty_6_set.insert("E");
        Pty_6.add_attribute("R", "62"); // 3
        Pty_6_set.insert("62");
        all_values.push_back(Pty_6_set);
        all_compo_names.insert("Pty_6_set");

        {
          xml_element Sub_6{"Sub"};
          multiset<string> Sub_6_set;
          Sub_6.add_attribute("ID", "InstrumentPartySubID_t_1682935963"); // 4
          Sub_6_set.insert("InstrumentPartySubID_t_1682935963");
          Sub_6.add_attribute("Typ", "10"); // 4
          Sub_6_set.insert("10");
          all_values.push_back(Sub_6_set);
          all_compo_names.insert("Sub_6_set");

          Pty_6.add_element(Sub_6);
        }
        Instrmt_2.add_element(Pty_6);
      }
      {
        xml_element CmplxEvnt_2{"CmplxEvnt"};
        multiset<string> CmplxEvnt_2_set;
        CmplxEvnt_2.add_attribute("Typ", "9"); // 3
        CmplxEvnt_2_set.insert("9");
        CmplxEvnt_2.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1384525083"); // 3
        CmplxEvnt_2_set.insert("ComplexOptPayoutAmount_t_1384525083");
        CmplxEvnt_2.add_attribute("Px", "7042185.930000"); // 3
        CmplxEvnt_2_set.insert("7042185.930000");
        CmplxEvnt_2.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_2_set.insert("5");
        CmplxEvnt_2.add_attribute("PxBndryPrcsn", "14610502.750000"); // 3
        CmplxEvnt_2_set.insert("14610502.750000");
        CmplxEvnt_2.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_2_set.insert("2");
        CmplxEvnt_2.add_attribute("Cond", "1"); // 3
        CmplxEvnt_2_set.insert("1");
        all_values.push_back(CmplxEvnt_2_set);
        all_compo_names.insert("CmplxEvnt_2_set");

        {
          xml_element EvntDts_2{"EvntDts"};
          multiset<string> EvntDts_2_set;
          EvntDts_2.add_attribute("StartDt", "ComplexEventStartDate_t_101498703"); // 4
          EvntDts_2_set.insert("ComplexEventStartDate_t_101498703");
          EvntDts_2.add_attribute("EndDt", "ComplexEventEndDate_t_1175022176"); // 4
          EvntDts_2_set.insert("ComplexEventEndDate_t_1175022176");
          all_values.push_back(EvntDts_2_set);
          all_compo_names.insert("EvntDts_2_set");

          {
            xml_element EvntTms_2{"EvntTms"};
            multiset<string> EvntTms_2_set;
            EvntTms_2.add_attribute("StartTm", "350621953"); // 5
            EvntTms_2_set.insert("350621953");
            EvntTms_2.add_attribute("EndTm", "642714911"); // 5
            EvntTms_2_set.insert("642714911");
            all_values.push_back(EvntTms_2_set);
            all_compo_names.insert("EvntTms_2_set");

            EvntDts_2.add_element(EvntTms_2);
          }
          CmplxEvnt_2.add_element(EvntDts_2);
        }
        Instrmt_2.add_element(CmplxEvnt_2);
      }
      Inst_2.add_element(Instrmt_2);
    }
    elt.add_element(Inst_2);
  } // end Inst
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
