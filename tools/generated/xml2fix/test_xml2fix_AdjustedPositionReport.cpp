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
  elt.add_attribute("RptID", "PosMaintRptID_t_124306265"); // 0
  AdjustedPositionReport_message_t_0.insert("PosMaintRptID_t_124306265");
  elt.add_attribute("ReqTyp", "3"); // 0
  AdjustedPositionReport_message_t_0.insert("3");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1249087095"); // 0
  AdjustedPositionReport_message_t_0.insert("ClearingBusinessDate_t_1249087095");
  elt.add_attribute("SetSesID", "EOD"); // 0
  AdjustedPositionReport_message_t_0.insert("EOD");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_172443335"); // 0
  AdjustedPositionReport_message_t_0.insert("PosMaintRptRefID_t_172443335");
  elt.add_attribute("SetPx", "13407791.330000"); // 0
  AdjustedPositionReport_message_t_0.insert("13407791.330000");
  elt.add_attribute("PriSetPx", "8350930.800000"); // 0
  AdjustedPositionReport_message_t_0.insert("8350930.800000");
  all_values.push_back(AdjustedPositionReport_message_t_0);
  all_compo_names.insert("AdjustedPositionReport_message_t");

  { // Hdr
    xml_element Hdr_0{"Hdr"};
    multiset<string> Hdr_0_set;
    Hdr_0.add_attribute("SeqNum", "704765453"); // 1
    Hdr_0_set.insert("704765453");
    Hdr_0.add_attribute("SID", "SenderCompID_t_1276040134"); // 1
    Hdr_0_set.insert("SenderCompID_t_1276040134");
    Hdr_0.add_attribute("TID", "TargetCompID_t_349118645"); // 1
    Hdr_0_set.insert("TargetCompID_t_349118645");
    Hdr_0.add_attribute("OBID", "OnBehalfOfCompID_t_460809608"); // 1
    Hdr_0_set.insert("OnBehalfOfCompID_t_460809608");
    Hdr_0.add_attribute("D2ID", "DeliverToCompID_t_1293517809"); // 1
    Hdr_0_set.insert("DeliverToCompID_t_1293517809");
    Hdr_0.add_attribute("SSub", "SenderSubID_t_1694987627"); // 1
    Hdr_0_set.insert("SenderSubID_t_1694987627");
    Hdr_0.add_attribute("SLoc", "SenderLocationID_t_467325263"); // 1
    Hdr_0_set.insert("SenderLocationID_t_467325263");
    Hdr_0.add_attribute("TSub", "TargetSubID_t_374902155"); // 1
    Hdr_0_set.insert("TargetSubID_t_374902155");
    Hdr_0.add_attribute("TLoc", "TargetLocationID_t_85238842"); // 1
    Hdr_0_set.insert("TargetLocationID_t_85238842");
    Hdr_0.add_attribute("OBSub", "OnBehalfOfSubID_t_1173609356"); // 1
    Hdr_0_set.insert("OnBehalfOfSubID_t_1173609356");
    Hdr_0.add_attribute("OBLoc", "OnBehalfOfLocationID_t_66291815"); // 1
    Hdr_0_set.insert("OnBehalfOfLocationID_t_66291815");
    Hdr_0.add_attribute("D2Sub", "DeliverToSubID_t_533110980"); // 1
    Hdr_0_set.insert("DeliverToSubID_t_533110980");
    Hdr_0.add_attribute("D2Loc", "DeliverToLocationID_t_414975510"); // 1
    Hdr_0_set.insert("DeliverToLocationID_t_414975510");
    Hdr_0.add_attribute("PosDup", "N"); // 1
    Hdr_0_set.insert("N");
    Hdr_0.add_attribute("PosRsnd", "Y"); // 1
    Hdr_0_set.insert("Y");
    Hdr_0.add_attribute("Snt", "SendingTime_t_1216547265"); // 1
    Hdr_0_set.insert("SendingTime_t_1216547265");
    Hdr_0.add_attribute("OrigSnt", "OrigSendingTime_t_403852980"); // 1
    Hdr_0_set.insert("OrigSendingTime_t_403852980");
    Hdr_0.add_attribute("MsgEncd", "MessageEncoding_t_1873933206"); // 1
    Hdr_0_set.insert("MessageEncoding_t_1873933206");
    all_values.push_back(Hdr_0_set);
    all_compo_names.insert("Hdr_0_set");

    {
      xml_element Hop_0{"Hop"};
      multiset<string> Hop_0_set;
      Hop_0.add_attribute("ID", "HopCompID_t_811283369"); // 2
      Hop_0_set.insert("HopCompID_t_811283369");
      Hop_0.add_attribute("Ref", "552472318"); // 2
      Hop_0_set.insert("552472318");
      Hop_0.add_attribute("Snt", "HopSendingTime_t_223549444"); // 2
      Hop_0_set.insert("HopSendingTime_t_223549444");
      all_values.push_back(Hop_0_set);
      all_compo_names.insert("Hop_0_set");

      Hdr_0.add_element(Hop_0);
    }
    elt.add_element(Hdr_0);
  } // end Hdr
  { // Pty
    xml_element Pty_0{"Pty"};
    multiset<string> Pty_0_set;
    Pty_0.add_attribute("ID", "PartyID_t_1408080402"); // 1
    Pty_0_set.insert("PartyID_t_1408080402");
    Pty_0.add_attribute("Src", "5"); // 1
    Pty_0_set.insert("5");
    Pty_0.add_attribute("R", "78"); // 1
    Pty_0_set.insert("78");
    all_values.push_back(Pty_0_set);
    all_compo_names.insert("Pty_0_set");

    {
      xml_element Sub_0{"Sub"};
      multiset<string> Sub_0_set;
      Sub_0.add_attribute("ID", "PartySubID_t_742413549"); // 2
      Sub_0_set.insert("PartySubID_t_742413549");
      Sub_0.add_attribute("Typ", "7"); // 2
      Sub_0_set.insert("7");
      all_values.push_back(Sub_0_set);
      all_compo_names.insert("Sub_0_set");

      Pty_0.add_element(Sub_0);
    }
    elt.add_element(Pty_0);
  } // end Pty
  { // Pty
    xml_element Pty_1{"Pty"};
    multiset<string> Pty_1_set;
    Pty_1.add_attribute("ID", "PartyID_t_1492391052"); // 1
    Pty_1_set.insert("PartyID_t_1492391052");
    Pty_1.add_attribute("Src", "9"); // 1
    Pty_1_set.insert("9");
    Pty_1.add_attribute("R", "82"); // 1
    Pty_1_set.insert("82");
    all_values.push_back(Pty_1_set);
    all_compo_names.insert("Pty_1_set");

    {
      xml_element Sub_1{"Sub"};
      multiset<string> Sub_1_set;
      Sub_1.add_attribute("ID", "PartySubID_t_180000484"); // 2
      Sub_1_set.insert("PartySubID_t_180000484");
      Sub_1.add_attribute("Typ", "9"); // 2
      Sub_1_set.insert("9");
      all_values.push_back(Sub_1_set);
      all_compo_names.insert("Sub_1_set");

      Pty_1.add_element(Sub_1);
    }
    elt.add_element(Pty_1);
  } // end Pty
  { // Qty
    xml_element Qty_0{"Qty"};
    multiset<string> Qty_0_set;
    Qty_0.add_attribute("Typ", "EP"); // 1
    Qty_0_set.insert("EP");
    Qty_0.add_attribute("Long", "20804319.450000"); // 1
    Qty_0_set.insert("20804319.450000");
    Qty_0.add_attribute("Short", "6950857.160000"); // 1
    Qty_0_set.insert("6950857.160000");
    Qty_0.add_attribute("Stat", "1"); // 1
    Qty_0_set.insert("1");
    Qty_0.add_attribute("QtyDt", "QuantityDate_t_400273560"); // 1
    Qty_0_set.insert("QuantityDate_t_400273560");
    all_values.push_back(Qty_0_set);
    all_compo_names.insert("Qty_0_set");

    {
      xml_element Pty_2{"Pty"};
      multiset<string> Pty_2_set;
      Pty_2.add_attribute("ID", "NestedPartyID_t_1069987871"); // 2
      Pty_2_set.insert("NestedPartyID_t_1069987871");
      Pty_2.add_attribute("Src", "C"); // 2
      Pty_2_set.insert("C");
      Pty_2.add_attribute("R", "6"); // 2
      Pty_2_set.insert("6");
      all_values.push_back(Pty_2_set);
      all_compo_names.insert("Pty_2_set");

      {
        xml_element Sub_2{"Sub"};
        multiset<string> Sub_2_set;
        Sub_2.add_attribute("ID", "NestedPartySubID_t_1136279687"); // 3
        Sub_2_set.insert("NestedPartySubID_t_1136279687");
        Sub_2.add_attribute("Typ", "27"); // 3
        Sub_2_set.insert("27");
        all_values.push_back(Sub_2_set);
        all_compo_names.insert("Sub_2_set");

        Pty_2.add_element(Sub_2);
      }
      Qty_0.add_element(Pty_2);
    }
    elt.add_element(Qty_0);
  } // end Qty
  { // Inst
    xml_element Inst_0{"Inst"};
    {
      xml_element Instrmt_0{"Instrmt"};
      multiset<string> Instrmt_0_set;
      Instrmt_0.add_attribute("Sym", "Symbol_t_1457256691"); // 2
      Instrmt_0_set.insert("Symbol_t_1457256691");
      Instrmt_0.add_attribute("Sfx", "CD"); // 2
      Instrmt_0_set.insert("CD");
      Instrmt_0.add_attribute("ID", "SecurityID_t_1057922044"); // 2
      Instrmt_0_set.insert("SecurityID_t_1057922044");
      Instrmt_0.add_attribute("Src", "4"); // 2
      Instrmt_0_set.insert("4");
      Instrmt_0.add_attribute("Prod", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("ProdCmplx", "ProductComplex_t_1869205414"); // 2
      Instrmt_0_set.insert("ProductComplex_t_1869205414");
      Instrmt_0.add_attribute("SecGrp", "SecurityGroup_t_266098342"); // 2
      Instrmt_0_set.insert("SecurityGroup_t_266098342");
      Instrmt_0.add_attribute("CFI", "CFICode_t_1495120698"); // 2
      Instrmt_0_set.insert("CFICode_t_1495120698");
      Instrmt_0.add_attribute("SecTyp", "TMCP"); // 2
      Instrmt_0_set.insert("TMCP");
      Instrmt_0.add_attribute("SubTyp", "SecuritySubType_t_1674178744"); // 2
      Instrmt_0_set.insert("SecuritySubType_t_1674178744");
      Instrmt_0.add_attribute("MMY", "1325749538"); // 2
      Instrmt_0_set.insert("1325749538");
      Instrmt_0.add_attribute("MatDt", "MaturityDate_t_1911205526"); // 2
      Instrmt_0_set.insert("MaturityDate_t_1911205526");
      Instrmt_0.add_attribute("MatTm", "269108645"); // 2
      Instrmt_0_set.insert("269108645");
      Instrmt_0.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_257981825"); // 2
      Instrmt_0_set.insert("SettleOnOpenFlag_t_257981825");
      Instrmt_0.add_attribute("AsgnMeth", "1256112930"); // 2
      Instrmt_0_set.insert("1256112930");
      Instrmt_0.add_attribute("Status", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("CpnPmt", "CouponPaymentDate_t_530993246"); // 2
      Instrmt_0_set.insert("CouponPaymentDate_t_530993246");
      Instrmt_0.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_0_set.insert("MM");
      Instrmt_0.add_attribute("Snrty", "SD"); // 2
      Instrmt_0_set.insert("SD");
      Instrmt_0.add_attribute("NotlPctOut", "20800448.000000"); // 2
      Instrmt_0_set.insert("20800448.000000");
      Instrmt_0.add_attribute("OrigNotlPctOut", "19652325.440000"); // 2
      Instrmt_0_set.insert("19652325.440000");
      Instrmt_0.add_attribute("AttchPnt", "5890525.160000"); // 2
      Instrmt_0_set.insert("5890525.160000");
      Instrmt_0.add_attribute("DetchPnt", "6276468.680000"); // 2
      Instrmt_0_set.insert("6276468.680000");
      Instrmt_0.add_attribute("Issued", "IssueDate_t_2041855653"); // 2
      Instrmt_0_set.insert("IssueDate_t_2041855653");
      Instrmt_0.add_attribute("RepoCollSecTyp", "989326076"); // 2
      Instrmt_0_set.insert("989326076");
      Instrmt_0.add_attribute("RepoTrm", "1697634740"); // 2
      Instrmt_0_set.insert("1697634740");
      Instrmt_0.add_attribute("RepoRt", "562339.560000"); // 2
      Instrmt_0_set.insert("562339.560000");
      Instrmt_0.add_attribute("Fctr", "4157253.450000"); // 2
      Instrmt_0_set.insert("4157253.450000");
      Instrmt_0.add_attribute("CrdRtg", "CreditRating_t_686430779"); // 2
      Instrmt_0_set.insert("CreditRating_t_686430779");
      Instrmt_0.add_attribute("Rgstry", "InstrRegistry_t_751206887"); // 2
      Instrmt_0_set.insert("InstrRegistry_t_751206887");
      Instrmt_0.add_attribute("IssuCtry", "257100125"); // 2
      Instrmt_0_set.insert("257100125");
      Instrmt_0.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2143687470"); // 2
      Instrmt_0_set.insert("StateOrProvinceOfIssue_t_2143687470");
      Instrmt_0.add_attribute("Lcl", "LocaleOfIssue_t_148844935"); // 2
      Instrmt_0_set.insert("LocaleOfIssue_t_148844935");
      Instrmt_0.add_attribute("Redeem", "RedemptionDate_t_1315022169"); // 2
      Instrmt_0_set.insert("RedemptionDate_t_1315022169");
      Instrmt_0.add_attribute("StrkPx", "18573134.930000"); // 2
      Instrmt_0_set.insert("18573134.930000");
      Instrmt_0.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_0_set.insert("CAN");
      Instrmt_0.add_attribute("StrkMult", "21234118.350000"); // 2
      Instrmt_0_set.insert("21234118.350000");
      Instrmt_0.add_attribute("StrkValu", "7680532.390000"); // 2
      Instrmt_0_set.insert("7680532.390000");
      Instrmt_0.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_0_set.insert("3");
      Instrmt_0.add_attribute("StrkPxBndryPrcsn", "20938027.770000"); // 2
      Instrmt_0_set.insert("20938027.770000");
      Instrmt_0.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_0_set.insert("4");
      Instrmt_0.add_attribute("OptAt", "1919215577"); // 2
      Instrmt_0_set.insert("1919215577");
      Instrmt_0.add_attribute("Mult", "2043009.550000"); // 2
      Instrmt_0_set.insert("2043009.550000");
      Instrmt_0.add_attribute("MultTyp", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_0_set.insert("4");
      Instrmt_0.add_attribute("MinPxIncr", "7352942.010000"); // 2
      Instrmt_0_set.insert("7352942.010000");
      Instrmt_0.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1025777199"); // 2
      Instrmt_0_set.insert("MinPriceIncrementAmount_t_1025777199");
      Instrmt_0.add_attribute("UOM", "tn"); // 2
      Instrmt_0_set.insert("tn");
      Instrmt_0.add_attribute("UOMQty", "6678553.530000"); // 2
      Instrmt_0_set.insert("6678553.530000");
      Instrmt_0.add_attribute("PxUOM", "Bcf"); // 2
      Instrmt_0_set.insert("Bcf");
      Instrmt_0.add_attribute("PxUOMQty", "533705.450000"); // 2
      Instrmt_0_set.insert("533705.450000");
      Instrmt_0.add_attribute("SettlMeth", "C"); // 2
      Instrmt_0_set.insert("C");
      Instrmt_0.add_attribute("ExerStyle", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_0_set.insert("3");
      Instrmt_0.add_attribute("OptPayAmt", "OptPayoutAmount_t_845653314"); // 2
      Instrmt_0_set.insert("OptPayoutAmount_t_845653314");
      Instrmt_0.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_0_set.insert("INT");
      Instrmt_0.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_0_set.insert("FUTDA");
      Instrmt_0.add_attribute("ListMeth", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("CapPx", "15453389.450000"); // 2
      Instrmt_0_set.insert("15453389.450000");
      Instrmt_0.add_attribute("FlrPx", "17155220.920000"); // 2
      Instrmt_0_set.insert("17155220.920000");
      Instrmt_0.add_attribute("PutCall", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("FlexInd", "false"); // 2
      Instrmt_0_set.insert("false");
      Instrmt_0.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_0_set.insert("true");
      Instrmt_0.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_0_set.insert("Mo");
      Instrmt_0.add_attribute("CpnRt", "9671164.220000"); // 2
      Instrmt_0_set.insert("9671164.220000");
      Instrmt_0.add_attribute("Exch", "SecurityExchange_t_1919804549"); // 2
      Instrmt_0_set.insert("SecurityExchange_t_1919804549");
      Instrmt_0.add_attribute("PosLmt", "1214045948"); // 2
      Instrmt_0_set.insert("1214045948");
      Instrmt_0.add_attribute("NTPosLmt", "1735169662"); // 2
      Instrmt_0_set.insert("1735169662");
      Instrmt_0.add_attribute("Issr", "Issuer_t_489633526"); // 2
      Instrmt_0_set.insert("Issuer_t_489633526");
      Instrmt_0.add_attribute("EncIssrLen", "716669232"); // 2
      Instrmt_0_set.insert("716669232");
      Instrmt_0.add_attribute("EncIssr", "EncodedIssuer_t_1681488791"); // 2
      Instrmt_0_set.insert("EncodedIssuer_t_1681488791");
      Instrmt_0.add_attribute("Desc", "SecurityDesc_t_970668029"); // 2
      Instrmt_0_set.insert("SecurityDesc_t_970668029");
      Instrmt_0.add_attribute("EncSecDescLen", "488401161"); // 2
      Instrmt_0_set.insert("488401161");
      Instrmt_0.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1885789746"); // 2
      Instrmt_0_set.insert("EncodedSecurityDesc_t_1885789746");
      Instrmt_0.add_attribute("Pool", "Pool_t_560331814"); // 2
      Instrmt_0_set.insert("Pool_t_560331814");
      Instrmt_0.add_attribute("CSetMo", "1444098620"); // 2
      Instrmt_0_set.insert("1444098620");
      Instrmt_0.add_attribute("CPPgm", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("CPRegT", "CPRegType_t_1586109014"); // 2
      Instrmt_0_set.insert("CPRegType_t_1586109014");
      Instrmt_0.add_attribute("Dated", "DatedDate_t_908416650"); // 2
      Instrmt_0_set.insert("DatedDate_t_908416650");
      Instrmt_0.add_attribute("IntAcrl", "InterestAccrualDate_t_1141455653"); // 2
      Instrmt_0_set.insert("InterestAccrualDate_t_1141455653");
      all_values.push_back(Instrmt_0_set);
      all_compo_names.insert("Instrmt_0_set");

      {
        xml_element AID_0{"AID"};
        multiset<string> AID_0_set;
        AID_0.add_attribute("AltID", "SecurityAltID_t_282151462"); // 3
        AID_0_set.insert("SecurityAltID_t_282151462");
        AID_0.add_attribute("AltIDSrc", "I"); // 3
        AID_0_set.insert("I");
        all_values.push_back(AID_0_set);
        all_compo_names.insert("AID_0_set");

        Instrmt_0.add_element(AID_0);
      }
      {
        xml_element SecXML_0{"SecXML"};
        multiset<string> SecXML_0_set;
        SecXML_0.add_attribute("Schema", "SecurityXMLSchema_t_289474227"); // 3
        SecXML_0_set.insert("SecurityXMLSchema_t_289474227");
        all_values.push_back(SecXML_0_set);
        all_compo_names.insert("SecXML_0_set");

        Instrmt_0.add_element(SecXML_0);
      }
      {
        xml_element Evnt_0{"Evnt"};
        multiset<string> Evnt_0_set;
        Evnt_0.add_attribute("EventTyp", "4"); // 3
        Evnt_0_set.insert("4");
        Evnt_0.add_attribute("Dt", "EventDate_t_2004483817"); // 3
        Evnt_0_set.insert("EventDate_t_2004483817");
        Evnt_0.add_attribute("Tm", "EventTime_t_1135127541"); // 3
        Evnt_0_set.insert("EventTime_t_1135127541");
        Evnt_0.add_attribute("Px", "18141816.210000"); // 3
        Evnt_0_set.insert("18141816.210000");
        Evnt_0.add_attribute("Txt", "EventText_t_1315422137"); // 3
        Evnt_0_set.insert("EventText_t_1315422137");
        all_values.push_back(Evnt_0_set);
        all_compo_names.insert("Evnt_0_set");

        Instrmt_0.add_element(Evnt_0);
      }
      {
        xml_element Pty_3{"Pty"};
        multiset<string> Pty_3_set;
        Pty_3.add_attribute("ID", "InstrumentPartyID_t_519727986"); // 3
        Pty_3_set.insert("InstrumentPartyID_t_519727986");
        Pty_3.add_attribute("Src", "8"); // 3
        Pty_3_set.insert("8");
        Pty_3.add_attribute("R", "75"); // 3
        Pty_3_set.insert("75");
        all_values.push_back(Pty_3_set);
        all_compo_names.insert("Pty_3_set");

        {
          xml_element Sub_3{"Sub"};
          multiset<string> Sub_3_set;
          Sub_3.add_attribute("ID", "InstrumentPartySubID_t_2048015901"); // 4
          Sub_3_set.insert("InstrumentPartySubID_t_2048015901");
          Sub_3.add_attribute("Typ", "31"); // 4
          Sub_3_set.insert("31");
          all_values.push_back(Sub_3_set);
          all_compo_names.insert("Sub_3_set");

          Pty_3.add_element(Sub_3);
        }
        Instrmt_0.add_element(Pty_3);
      }
      {
        xml_element CmplxEvnt_0{"CmplxEvnt"};
        multiset<string> CmplxEvnt_0_set;
        CmplxEvnt_0.add_attribute("Typ", "8"); // 3
        CmplxEvnt_0_set.insert("8");
        CmplxEvnt_0.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1138650013"); // 3
        CmplxEvnt_0_set.insert("ComplexOptPayoutAmount_t_1138650013");
        CmplxEvnt_0.add_attribute("Px", "17258535.740000"); // 3
        CmplxEvnt_0_set.insert("17258535.740000");
        CmplxEvnt_0.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_0_set.insert("3");
        CmplxEvnt_0.add_attribute("PxBndryPrcsn", "2052123.130000"); // 3
        CmplxEvnt_0_set.insert("2052123.130000");
        CmplxEvnt_0.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_0_set.insert("2");
        CmplxEvnt_0.add_attribute("Cond", "2"); // 3
        CmplxEvnt_0_set.insert("2");
        all_values.push_back(CmplxEvnt_0_set);
        all_compo_names.insert("CmplxEvnt_0_set");

        {
          xml_element EvntDts_0{"EvntDts"};
          multiset<string> EvntDts_0_set;
          EvntDts_0.add_attribute("StartDt", "ComplexEventStartDate_t_921881545"); // 4
          EvntDts_0_set.insert("ComplexEventStartDate_t_921881545");
          EvntDts_0.add_attribute("EndDt", "ComplexEventEndDate_t_847544732"); // 4
          EvntDts_0_set.insert("ComplexEventEndDate_t_847544732");
          all_values.push_back(EvntDts_0_set);
          all_compo_names.insert("EvntDts_0_set");

          {
            xml_element EvntTms_0{"EvntTms"};
            multiset<string> EvntTms_0_set;
            EvntTms_0.add_attribute("StartTm", "851660005"); // 5
            EvntTms_0_set.insert("851660005");
            EvntTms_0.add_attribute("EndTm", "1410282707"); // 5
            EvntTms_0_set.insert("1410282707");
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
