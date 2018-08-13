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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AdjPosRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AdjustedPositionReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_110318951"); // 0
  AdjustedPositionReport_message_t_0.insert("PosMaintRptID_t_110318951");
  elt.add_attribute("ReqTyp", "1"); // 0
  AdjustedPositionReport_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1666437139"); // 0
  AdjustedPositionReport_message_t_0.insert("ClearingBusinessDate_t_1666437139");
  elt.add_attribute("SetSesID", "RTH"); // 0
  AdjustedPositionReport_message_t_0.insert("RTH");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_207769698"); // 0
  AdjustedPositionReport_message_t_0.insert("PosMaintRptRefID_t_207769698");
  elt.add_attribute("SetPx", "4499304.540000"); // 0
  AdjustedPositionReport_message_t_0.insert("4499304.540000");
  elt.add_attribute("PriSetPx", "9847140.020000"); // 0
  AdjustedPositionReport_message_t_0.insert("9847140.020000");
  all_values.push_back(AdjustedPositionReport_message_t_0);
  all_compo_names.insert("AdjustedPositionReport_message_t");

  { // Hdr
    xml_element Hdr_0{"Hdr"};
    multiset<string> Hdr_0_set;
    Hdr_0.add_attribute("SeqNum", "1068320450"); // 1
    Hdr_0_set.insert("1068320450");
    Hdr_0.add_attribute("SID", "SenderCompID_t_1789133760"); // 1
    Hdr_0_set.insert("SenderCompID_t_1789133760");
    Hdr_0.add_attribute("TID", "TargetCompID_t_756619021"); // 1
    Hdr_0_set.insert("TargetCompID_t_756619021");
    Hdr_0.add_attribute("OBID", "OnBehalfOfCompID_t_406109978"); // 1
    Hdr_0_set.insert("OnBehalfOfCompID_t_406109978");
    Hdr_0.add_attribute("D2ID", "DeliverToCompID_t_311713975"); // 1
    Hdr_0_set.insert("DeliverToCompID_t_311713975");
    Hdr_0.add_attribute("SSub", "SenderSubID_t_423421485"); // 1
    Hdr_0_set.insert("SenderSubID_t_423421485");
    Hdr_0.add_attribute("SLoc", "SenderLocationID_t_30670065"); // 1
    Hdr_0_set.insert("SenderLocationID_t_30670065");
    Hdr_0.add_attribute("TSub", "TargetSubID_t_209801045"); // 1
    Hdr_0_set.insert("TargetSubID_t_209801045");
    Hdr_0.add_attribute("TLoc", "TargetLocationID_t_1241987412"); // 1
    Hdr_0_set.insert("TargetLocationID_t_1241987412");
    Hdr_0.add_attribute("OBSub", "OnBehalfOfSubID_t_1189829563"); // 1
    Hdr_0_set.insert("OnBehalfOfSubID_t_1189829563");
    Hdr_0.add_attribute("OBLoc", "OnBehalfOfLocationID_t_888212744"); // 1
    Hdr_0_set.insert("OnBehalfOfLocationID_t_888212744");
    Hdr_0.add_attribute("D2Sub", "DeliverToSubID_t_1061264018"); // 1
    Hdr_0_set.insert("DeliverToSubID_t_1061264018");
    Hdr_0.add_attribute("D2Loc", "DeliverToLocationID_t_1883758816"); // 1
    Hdr_0_set.insert("DeliverToLocationID_t_1883758816");
    Hdr_0.add_attribute("PosDup", "Y"); // 1
    Hdr_0_set.insert("Y");
    Hdr_0.add_attribute("PosRsnd", "Y"); // 1
    Hdr_0_set.insert("Y");
    Hdr_0.add_attribute("Snt", "SendingTime_t_1365480185"); // 1
    Hdr_0_set.insert("SendingTime_t_1365480185");
    Hdr_0.add_attribute("OrigSnt", "OrigSendingTime_t_1161934148"); // 1
    Hdr_0_set.insert("OrigSendingTime_t_1161934148");
    Hdr_0.add_attribute("MsgEncd", "MessageEncoding_t_922333779"); // 1
    Hdr_0_set.insert("MessageEncoding_t_922333779");
    all_values.push_back(Hdr_0_set);
    all_compo_names.insert("Hdr_0_set");

    {
      xml_element Hop_0{"Hop"};
      multiset<string> Hop_0_set;
      Hop_0.add_attribute("ID", "HopCompID_t_1131750258"); // 2
      Hop_0_set.insert("HopCompID_t_1131750258");
      Hop_0.add_attribute("Ref", "1568658590"); // 2
      Hop_0_set.insert("1568658590");
      Hop_0.add_attribute("Snt", "HopSendingTime_t_359008579"); // 2
      Hop_0_set.insert("HopSendingTime_t_359008579");
      all_values.push_back(Hop_0_set);
      all_compo_names.insert("Hop_0_set");

      Hdr_0.add_element(Hop_0);
    }
    elt.add_element(Hdr_0);
  } // end Hdr
  { // Pty
    xml_element Pty_0{"Pty"};
    multiset<string> Pty_0_set;
    Pty_0.add_attribute("ID", "PartyID_t_840283504"); // 1
    Pty_0_set.insert("PartyID_t_840283504");
    Pty_0.add_attribute("Src", "C"); // 1
    Pty_0_set.insert("C");
    Pty_0.add_attribute("R", "79"); // 1
    Pty_0_set.insert("79");
    all_values.push_back(Pty_0_set);
    all_compo_names.insert("Pty_0_set");

    {
      xml_element Sub_0{"Sub"};
      multiset<string> Sub_0_set;
      Sub_0.add_attribute("ID", "PartySubID_t_1474092324"); // 2
      Sub_0_set.insert("PartySubID_t_1474092324");
      Sub_0.add_attribute("Typ", "7"); // 2
      Sub_0_set.insert("7");
      all_values.push_back(Sub_0_set);
      all_compo_names.insert("Sub_0_set");

      Pty_0.add_element(Sub_0);
    }
    elt.add_element(Pty_0);
  } // end Pty
  { // Qty
    xml_element Qty_0{"Qty"};
    multiset<string> Qty_0_set;
    Qty_0.add_attribute("Typ", "AS"); // 1
    Qty_0_set.insert("AS");
    Qty_0.add_attribute("Long", "19175856.110000"); // 1
    Qty_0_set.insert("19175856.110000");
    Qty_0.add_attribute("Short", "18431196.890000"); // 1
    Qty_0_set.insert("18431196.890000");
    Qty_0.add_attribute("Stat", "1"); // 1
    Qty_0_set.insert("1");
    Qty_0.add_attribute("QtyDt", "QuantityDate_t_1559235723"); // 1
    Qty_0_set.insert("QuantityDate_t_1559235723");
    all_values.push_back(Qty_0_set);
    all_compo_names.insert("Qty_0_set");

    {
      xml_element Pty_1{"Pty"};
      multiset<string> Pty_1_set;
      Pty_1.add_attribute("ID", "NestedPartyID_t_452255062"); // 2
      Pty_1_set.insert("NestedPartyID_t_452255062");
      Pty_1.add_attribute("Src", "A"); // 2
      Pty_1_set.insert("A");
      Pty_1.add_attribute("R", "40"); // 2
      Pty_1_set.insert("40");
      all_values.push_back(Pty_1_set);
      all_compo_names.insert("Pty_1_set");

      {
        xml_element Sub_1{"Sub"};
        multiset<string> Sub_1_set;
        Sub_1.add_attribute("ID", "NestedPartySubID_t_875676547"); // 3
        Sub_1_set.insert("NestedPartySubID_t_875676547");
        Sub_1.add_attribute("Typ", "6"); // 3
        Sub_1_set.insert("6");
        all_values.push_back(Sub_1_set);
        all_compo_names.insert("Sub_1_set");

        Pty_1.add_element(Sub_1);
      }
      Qty_0.add_element(Pty_1);
    }
    elt.add_element(Qty_0);
  } // end Qty
  { // Inst
    xml_element Inst_0{"Inst"};
    {
      xml_element Instrmt_0{"Instrmt"};
      multiset<string> Instrmt_0_set;
      Instrmt_0.add_attribute("Sym", "Symbol_t_2117663960"); // 2
      Instrmt_0_set.insert("Symbol_t_2117663960");
      Instrmt_0.add_attribute("Sfx", "CD"); // 2
      Instrmt_0_set.insert("CD");
      Instrmt_0.add_attribute("ID", "SecurityID_t_821479839"); // 2
      Instrmt_0_set.insert("SecurityID_t_821479839");
      Instrmt_0.add_attribute("Src", "5"); // 2
      Instrmt_0_set.insert("5");
      Instrmt_0.add_attribute("Prod", "3"); // 2
      Instrmt_0_set.insert("3");
      Instrmt_0.add_attribute("ProdCmplx", "ProductComplex_t_384133537"); // 2
      Instrmt_0_set.insert("ProductComplex_t_384133537");
      Instrmt_0.add_attribute("SecGrp", "SecurityGroup_t_597148827"); // 2
      Instrmt_0_set.insert("SecurityGroup_t_597148827");
      Instrmt_0.add_attribute("CFI", "CFICode_t_1183580137"); // 2
      Instrmt_0_set.insert("CFICode_t_1183580137");
      Instrmt_0.add_attribute("SecTyp", "RVLV"); // 2
      Instrmt_0_set.insert("RVLV");
      Instrmt_0.add_attribute("SubTyp", "SecuritySubType_t_1519482606"); // 2
      Instrmt_0_set.insert("SecuritySubType_t_1519482606");
      Instrmt_0.add_attribute("MMY", "167846747"); // 2
      Instrmt_0_set.insert("167846747");
      Instrmt_0.add_attribute("MatDt", "MaturityDate_t_967242628"); // 2
      Instrmt_0_set.insert("MaturityDate_t_967242628");
      Instrmt_0.add_attribute("MatTm", "1878491185"); // 2
      Instrmt_0_set.insert("1878491185");
      Instrmt_0.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1598394894"); // 2
      Instrmt_0_set.insert("SettleOnOpenFlag_t_1598394894");
      Instrmt_0.add_attribute("AsgnMeth", "1807526132"); // 2
      Instrmt_0_set.insert("1807526132");
      Instrmt_0.add_attribute("Status", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("CpnPmt", "CouponPaymentDate_t_991778343"); // 2
      Instrmt_0_set.insert("CouponPaymentDate_t_991778343");
      Instrmt_0.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_0_set.insert("MR");
      Instrmt_0.add_attribute("Snrty", "SR"); // 2
      Instrmt_0_set.insert("SR");
      Instrmt_0.add_attribute("NotlPctOut", "18501840.300000"); // 2
      Instrmt_0_set.insert("18501840.300000");
      Instrmt_0.add_attribute("OrigNotlPctOut", "6685131.840000"); // 2
      Instrmt_0_set.insert("6685131.840000");
      Instrmt_0.add_attribute("AttchPnt", "7699826.750000"); // 2
      Instrmt_0_set.insert("7699826.750000");
      Instrmt_0.add_attribute("DetchPnt", "15458200.710000"); // 2
      Instrmt_0_set.insert("15458200.710000");
      Instrmt_0.add_attribute("Issued", "IssueDate_t_1271212009"); // 2
      Instrmt_0_set.insert("IssueDate_t_1271212009");
      Instrmt_0.add_attribute("RepoCollSecTyp", "181734750"); // 2
      Instrmt_0_set.insert("181734750");
      Instrmt_0.add_attribute("RepoTrm", "1998075133"); // 2
      Instrmt_0_set.insert("1998075133");
      Instrmt_0.add_attribute("RepoRt", "1325371.640000"); // 2
      Instrmt_0_set.insert("1325371.640000");
      Instrmt_0.add_attribute("Fctr", "20526844.490000"); // 2
      Instrmt_0_set.insert("20526844.490000");
      Instrmt_0.add_attribute("CrdRtg", "CreditRating_t_726268033"); // 2
      Instrmt_0_set.insert("CreditRating_t_726268033");
      Instrmt_0.add_attribute("Rgstry", "InstrRegistry_t_1172016033"); // 2
      Instrmt_0_set.insert("InstrRegistry_t_1172016033");
      Instrmt_0.add_attribute("IssuCtry", "1985951544"); // 2
      Instrmt_0_set.insert("1985951544");
      Instrmt_0.add_attribute("StPrv", "StateOrProvinceOfIssue_t_696448345"); // 2
      Instrmt_0_set.insert("StateOrProvinceOfIssue_t_696448345");
      Instrmt_0.add_attribute("Lcl", "LocaleOfIssue_t_1253840817"); // 2
      Instrmt_0_set.insert("LocaleOfIssue_t_1253840817");
      Instrmt_0.add_attribute("Redeem", "RedemptionDate_t_659947736"); // 2
      Instrmt_0_set.insert("RedemptionDate_t_659947736");
      Instrmt_0.add_attribute("StrkPx", "17278926.750000"); // 2
      Instrmt_0_set.insert("17278926.750000");
      Instrmt_0.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_0_set.insert("CHF");
      Instrmt_0.add_attribute("StrkMult", "1775578.540000"); // 2
      Instrmt_0_set.insert("1775578.540000");
      Instrmt_0.add_attribute("StrkValu", "1080372.580000"); // 2
      Instrmt_0_set.insert("1080372.580000");
      Instrmt_0.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_0_set.insert("3");
      Instrmt_0.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("StrkPxBndryPrcsn", "2758840.060000"); // 2
      Instrmt_0_set.insert("2758840.060000");
      Instrmt_0.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_0_set.insert("3");
      Instrmt_0.add_attribute("OptAt", "1428047997"); // 2
      Instrmt_0_set.insert("1428047997");
      Instrmt_0.add_attribute("Mult", "18742789.000000"); // 2
      Instrmt_0_set.insert("18742789.000000");
      Instrmt_0.add_attribute("MultTyp", "0"); // 2
      Instrmt_0_set.insert("0");
      Instrmt_0.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("MinPxIncr", "7185735.950000"); // 2
      Instrmt_0_set.insert("7185735.950000");
      Instrmt_0.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_56601584"); // 2
      Instrmt_0_set.insert("MinPriceIncrementAmount_t_56601584");
      Instrmt_0.add_attribute("UOM", "Bbl"); // 2
      Instrmt_0_set.insert("Bbl");
      Instrmt_0.add_attribute("UOMQty", "4212739.780000"); // 2
      Instrmt_0_set.insert("4212739.780000");
      Instrmt_0.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_0_set.insert("MMBtu");
      Instrmt_0.add_attribute("PxUOMQty", "5826532.900000"); // 2
      Instrmt_0_set.insert("5826532.900000");
      Instrmt_0.add_attribute("SettlMeth", "P"); // 2
      Instrmt_0_set.insert("P");
      Instrmt_0.add_attribute("ExerStyle", "0"); // 2
      Instrmt_0_set.insert("0");
      Instrmt_0.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("OptPayAmt", "OptPayoutAmount_t_1817685535"); // 2
      Instrmt_0_set.insert("OptPayoutAmount_t_1817685535");
      Instrmt_0.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_0_set.insert("INX");
      Instrmt_0.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_0_set.insert("FUT");
      Instrmt_0.add_attribute("ListMeth", "0"); // 2
      Instrmt_0_set.insert("0");
      Instrmt_0.add_attribute("CapPx", "11533963.270000"); // 2
      Instrmt_0_set.insert("11533963.270000");
      Instrmt_0.add_attribute("FlrPx", "5080567.380000"); // 2
      Instrmt_0_set.insert("5080567.380000");
      Instrmt_0.add_attribute("PutCall", "1"); // 2
      Instrmt_0_set.insert("1");
      Instrmt_0.add_attribute("FlexInd", "true"); // 2
      Instrmt_0_set.insert("true");
      Instrmt_0.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_0_set.insert("true");
      Instrmt_0.add_attribute("TmUnit", "Min"); // 2
      Instrmt_0_set.insert("Min");
      Instrmt_0.add_attribute("CpnRt", "13316942.660000"); // 2
      Instrmt_0_set.insert("13316942.660000");
      Instrmt_0.add_attribute("Exch", "SecurityExchange_t_64602099"); // 2
      Instrmt_0_set.insert("SecurityExchange_t_64602099");
      Instrmt_0.add_attribute("PosLmt", "850885146"); // 2
      Instrmt_0_set.insert("850885146");
      Instrmt_0.add_attribute("NTPosLmt", "1439731524"); // 2
      Instrmt_0_set.insert("1439731524");
      Instrmt_0.add_attribute("Issr", "Issuer_t_507267409"); // 2
      Instrmt_0_set.insert("Issuer_t_507267409");
      Instrmt_0.add_attribute("EncIssrLen", "400441958"); // 2
      Instrmt_0_set.insert("400441958");
      Instrmt_0.add_attribute("EncIssr", "EncodedIssuer_t_1715615530"); // 2
      Instrmt_0_set.insert("EncodedIssuer_t_1715615530");
      Instrmt_0.add_attribute("Desc", "SecurityDesc_t_1917175348"); // 2
      Instrmt_0_set.insert("SecurityDesc_t_1917175348");
      Instrmt_0.add_attribute("EncSecDescLen", "1828489955"); // 2
      Instrmt_0_set.insert("1828489955");
      Instrmt_0.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1442410782"); // 2
      Instrmt_0_set.insert("EncodedSecurityDesc_t_1442410782");
      Instrmt_0.add_attribute("Pool", "Pool_t_839642123"); // 2
      Instrmt_0_set.insert("Pool_t_839642123");
      Instrmt_0.add_attribute("CSetMo", "641279858"); // 2
      Instrmt_0_set.insert("641279858");
      Instrmt_0.add_attribute("CPPgm", "2"); // 2
      Instrmt_0_set.insert("2");
      Instrmt_0.add_attribute("CPRegT", "CPRegType_t_896243707"); // 2
      Instrmt_0_set.insert("CPRegType_t_896243707");
      Instrmt_0.add_attribute("Dated", "DatedDate_t_453950473"); // 2
      Instrmt_0_set.insert("DatedDate_t_453950473");
      Instrmt_0.add_attribute("IntAcrl", "InterestAccrualDate_t_434774708"); // 2
      Instrmt_0_set.insert("InterestAccrualDate_t_434774708");
      all_values.push_back(Instrmt_0_set);
      all_compo_names.insert("Instrmt_0_set");

      {
        xml_element AID_0{"AID"};
        multiset<string> AID_0_set;
        AID_0.add_attribute("AltID", "SecurityAltID_t_1621358475"); // 3
        AID_0_set.insert("SecurityAltID_t_1621358475");
        AID_0.add_attribute("AltIDSrc", "L"); // 3
        AID_0_set.insert("L");
        all_values.push_back(AID_0_set);
        all_compo_names.insert("AID_0_set");

        Instrmt_0.add_element(AID_0);
      }
      {
        xml_element SecXML_0{"SecXML"};
        multiset<string> SecXML_0_set;
        SecXML_0.add_attribute("Schema", "SecurityXMLSchema_t_254385109"); // 3
        SecXML_0_set.insert("SecurityXMLSchema_t_254385109");
        all_values.push_back(SecXML_0_set);
        all_compo_names.insert("SecXML_0_set");

        Instrmt_0.add_element(SecXML_0);
      }
      {
        xml_element Evnt_0{"Evnt"};
        multiset<string> Evnt_0_set;
        Evnt_0.add_attribute("EventTyp", "99"); // 3
        Evnt_0_set.insert("99");
        Evnt_0.add_attribute("Dt", "EventDate_t_1800991804"); // 3
        Evnt_0_set.insert("EventDate_t_1800991804");
        Evnt_0.add_attribute("Tm", "EventTime_t_2072070644"); // 3
        Evnt_0_set.insert("EventTime_t_2072070644");
        Evnt_0.add_attribute("Px", "14515818.970000"); // 3
        Evnt_0_set.insert("14515818.970000");
        Evnt_0.add_attribute("Txt", "EventText_t_323096997"); // 3
        Evnt_0_set.insert("EventText_t_323096997");
        all_values.push_back(Evnt_0_set);
        all_compo_names.insert("Evnt_0_set");

        Instrmt_0.add_element(Evnt_0);
      }
      {
        xml_element Pty_2{"Pty"};
        multiset<string> Pty_2_set;
        Pty_2.add_attribute("ID", "InstrumentPartyID_t_321056916"); // 3
        Pty_2_set.insert("InstrumentPartyID_t_321056916");
        Pty_2.add_attribute("Src", "7"); // 3
        Pty_2_set.insert("7");
        Pty_2.add_attribute("R", "35"); // 3
        Pty_2_set.insert("35");
        all_values.push_back(Pty_2_set);
        all_compo_names.insert("Pty_2_set");

        {
          xml_element Sub_2{"Sub"};
          multiset<string> Sub_2_set;
          Sub_2.add_attribute("ID", "InstrumentPartySubID_t_1413975181"); // 4
          Sub_2_set.insert("InstrumentPartySubID_t_1413975181");
          Sub_2.add_attribute("Typ", "12"); // 4
          Sub_2_set.insert("12");
          all_values.push_back(Sub_2_set);
          all_compo_names.insert("Sub_2_set");

          Pty_2.add_element(Sub_2);
        }
        Instrmt_0.add_element(Pty_2);
      }
      {
        xml_element CmplxEvnt_0{"CmplxEvnt"};
        multiset<string> CmplxEvnt_0_set;
        CmplxEvnt_0.add_attribute("Typ", "9"); // 3
        CmplxEvnt_0_set.insert("9");
        CmplxEvnt_0.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2087302473"); // 3
        CmplxEvnt_0_set.insert("ComplexOptPayoutAmount_t_2087302473");
        CmplxEvnt_0.add_attribute("Px", "20489423.390000"); // 3
        CmplxEvnt_0_set.insert("20489423.390000");
        CmplxEvnt_0.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_0_set.insert("4");
        CmplxEvnt_0.add_attribute("PxBndryPrcsn", "7907039.710000"); // 3
        CmplxEvnt_0_set.insert("7907039.710000");
        CmplxEvnt_0.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_0_set.insert("1");
        CmplxEvnt_0.add_attribute("Cond", "1"); // 3
        CmplxEvnt_0_set.insert("1");
        all_values.push_back(CmplxEvnt_0_set);
        all_compo_names.insert("CmplxEvnt_0_set");

        {
          xml_element EvntDts_0{"EvntDts"};
          multiset<string> EvntDts_0_set;
          EvntDts_0.add_attribute("StartDt", "ComplexEventStartDate_t_1191145929"); // 4
          EvntDts_0_set.insert("ComplexEventStartDate_t_1191145929");
          EvntDts_0.add_attribute("EndDt", "ComplexEventEndDate_t_909322098"); // 4
          EvntDts_0_set.insert("ComplexEventEndDate_t_909322098");
          all_values.push_back(EvntDts_0_set);
          all_compo_names.insert("EvntDts_0_set");

          {
            xml_element EvntTms_0{"EvntTms"};
            multiset<string> EvntTms_0_set;
            EvntTms_0.add_attribute("StartTm", "193235770"); // 5
            EvntTms_0_set.insert("193235770");
            EvntTms_0.add_attribute("EndTm", "872152236"); // 5
            EvntTms_0_set.insert("872152236");
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
