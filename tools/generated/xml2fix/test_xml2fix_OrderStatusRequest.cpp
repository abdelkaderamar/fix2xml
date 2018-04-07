#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderStatusRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_577266941"); // 0
  OrderStatusRequest_message_t_0.insert("OrderID_t_577266941");
  elt.add_attribute("ID", "ClOrdID_t_1627754804"); // 0
  OrderStatusRequest_message_t_0.insert("ClOrdID_t_1627754804");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_467251861"); // 0
  OrderStatusRequest_message_t_0.insert("SecondaryClOrdID_t_467251861");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1000044949"); // 0
  OrderStatusRequest_message_t_0.insert("ClOrdLinkID_t_1000044949");
  elt.add_attribute("StatReqID", "OrdStatusReqID_t_1184410131"); // 0
  OrderStatusRequest_message_t_0.insert("OrdStatusReqID_t_1184410131");
  elt.add_attribute("Acct", "Account_t_789661040"); // 0
  OrderStatusRequest_message_t_0.insert("Account_t_789661040");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  OrderStatusRequest_message_t_0.insert("5");
  elt.add_attribute("Side", "8"); // 0
  OrderStatusRequest_message_t_0.insert("8");
  all_values.push_back(OrderStatusRequest_message_t_0);
  all_compo_names.insert("OrderStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_64{"Hdr"};
    multiset<string> Hdr_64_set;
    Hdr_64.add_attribute("SeqNum", "2102942542"); // 1
    Hdr_64_set.insert("2102942542");
    Hdr_64.add_attribute("SID", "SenderCompID_t_551829192"); // 1
    Hdr_64_set.insert("SenderCompID_t_551829192");
    Hdr_64.add_attribute("TID", "TargetCompID_t_390853798"); // 1
    Hdr_64_set.insert("TargetCompID_t_390853798");
    Hdr_64.add_attribute("OBID", "OnBehalfOfCompID_t_1809862831"); // 1
    Hdr_64_set.insert("OnBehalfOfCompID_t_1809862831");
    Hdr_64.add_attribute("D2ID", "DeliverToCompID_t_1269705999"); // 1
    Hdr_64_set.insert("DeliverToCompID_t_1269705999");
    Hdr_64.add_attribute("SSub", "SenderSubID_t_641813612"); // 1
    Hdr_64_set.insert("SenderSubID_t_641813612");
    Hdr_64.add_attribute("SLoc", "SenderLocationID_t_567856174"); // 1
    Hdr_64_set.insert("SenderLocationID_t_567856174");
    Hdr_64.add_attribute("TSub", "TargetSubID_t_2075135689"); // 1
    Hdr_64_set.insert("TargetSubID_t_2075135689");
    Hdr_64.add_attribute("TLoc", "TargetLocationID_t_1766846373"); // 1
    Hdr_64_set.insert("TargetLocationID_t_1766846373");
    Hdr_64.add_attribute("OBSub", "OnBehalfOfSubID_t_1386733244"); // 1
    Hdr_64_set.insert("OnBehalfOfSubID_t_1386733244");
    Hdr_64.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1320813288"); // 1
    Hdr_64_set.insert("OnBehalfOfLocationID_t_1320813288");
    Hdr_64.add_attribute("D2Sub", "DeliverToSubID_t_826545194"); // 1
    Hdr_64_set.insert("DeliverToSubID_t_826545194");
    Hdr_64.add_attribute("D2Loc", "DeliverToLocationID_t_1717987464"); // 1
    Hdr_64_set.insert("DeliverToLocationID_t_1717987464");
    Hdr_64.add_attribute("PosDup", "Y"); // 1
    Hdr_64_set.insert("Y");
    Hdr_64.add_attribute("PosRsnd", "Y"); // 1
    Hdr_64_set.insert("Y");
    Hdr_64.add_attribute("Snt", "SendingTime_t_160536947"); // 1
    Hdr_64_set.insert("SendingTime_t_160536947");
    Hdr_64.add_attribute("OrigSnt", "OrigSendingTime_t_1069564817"); // 1
    Hdr_64_set.insert("OrigSendingTime_t_1069564817");
    Hdr_64.add_attribute("MsgEncd", "MessageEncoding_t_153092170"); // 1
    Hdr_64_set.insert("MessageEncoding_t_153092170");
    all_values.push_back(Hdr_64_set);
    all_compo_names.insert("Hdr_64_set");

    {
      xml_element Hop_64{"Hop"};
      multiset<string> Hop_64_set;
      Hop_64.add_attribute("ID", "HopCompID_t_1476479498"); // 2
      Hop_64_set.insert("HopCompID_t_1476479498");
      Hop_64.add_attribute("Ref", "1682248381"); // 2
      Hop_64_set.insert("1682248381");
      Hop_64.add_attribute("Snt", "HopSendingTime_t_758121987"); // 2
      Hop_64_set.insert("HopSendingTime_t_758121987");
      all_values.push_back(Hop_64_set);
      all_compo_names.insert("Hop_64_set");

      Hdr_64.add_element(Hop_64);
    }
    elt.add_element(Hdr_64);
  } // end Hdr
  { // Pty
    xml_element Pty_301{"Pty"};
    multiset<string> Pty_301_set;
    Pty_301.add_attribute("ID", "PartyID_t_1022138997"); // 1
    Pty_301_set.insert("PartyID_t_1022138997");
    Pty_301.add_attribute("Src", "F"); // 1
    Pty_301_set.insert("F");
    Pty_301.add_attribute("R", "44"); // 1
    Pty_301_set.insert("44");
    all_values.push_back(Pty_301_set);
    all_compo_names.insert("Pty_301_set");

    {
      xml_element Sub_301{"Sub"};
      multiset<string> Sub_301_set;
      Sub_301.add_attribute("ID", "PartySubID_t_1489390858"); // 2
      Sub_301_set.insert("PartySubID_t_1489390858");
      Sub_301.add_attribute("Typ", "25"); // 2
      Sub_301_set.insert("25");
      all_values.push_back(Sub_301_set);
      all_compo_names.insert("Sub_301_set");

      Pty_301.add_element(Sub_301);
    }
    elt.add_element(Pty_301);
  } // end Pty
  { // Pty
    xml_element Pty_302{"Pty"};
    multiset<string> Pty_302_set;
    Pty_302.add_attribute("ID", "PartyID_t_1626249752"); // 1
    Pty_302_set.insert("PartyID_t_1626249752");
    Pty_302.add_attribute("Src", "6"); // 1
    Pty_302_set.insert("6");
    Pty_302.add_attribute("R", "27"); // 1
    Pty_302_set.insert("27");
    all_values.push_back(Pty_302_set);
    all_compo_names.insert("Pty_302_set");

    {
      xml_element Sub_302{"Sub"};
      multiset<string> Sub_302_set;
      Sub_302.add_attribute("ID", "PartySubID_t_2066994239"); // 2
      Sub_302_set.insert("PartySubID_t_2066994239");
      Sub_302.add_attribute("Typ", "16"); // 2
      Sub_302_set.insert("16");
      all_values.push_back(Sub_302_set);
      all_compo_names.insert("Sub_302_set");

      Pty_302.add_element(Sub_302);
    }
    elt.add_element(Pty_302);
  } // end Pty
  { // Pty
    xml_element Pty_303{"Pty"};
    multiset<string> Pty_303_set;
    Pty_303.add_attribute("ID", "PartyID_t_1314725778"); // 1
    Pty_303_set.insert("PartyID_t_1314725778");
    Pty_303.add_attribute("Src", "2"); // 1
    Pty_303_set.insert("2");
    Pty_303.add_attribute("R", "47"); // 1
    Pty_303_set.insert("47");
    all_values.push_back(Pty_303_set);
    all_compo_names.insert("Pty_303_set");

    {
      xml_element Sub_303{"Sub"};
      multiset<string> Sub_303_set;
      Sub_303.add_attribute("ID", "PartySubID_t_436948129"); // 2
      Sub_303_set.insert("PartySubID_t_436948129");
      Sub_303.add_attribute("Typ", "28"); // 2
      Sub_303_set.insert("28");
      all_values.push_back(Sub_303_set);
      all_compo_names.insert("Sub_303_set");

      Pty_303.add_element(Sub_303);
    }
    elt.add_element(Pty_303);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_54{"Instrmt"};
    multiset<string> Instrmt_54_set;
    Instrmt_54.add_attribute("Sym", "Symbol_t_317262502"); // 1
    Instrmt_54_set.insert("Symbol_t_317262502");
    Instrmt_54.add_attribute("Sfx", "WI"); // 1
    Instrmt_54_set.insert("WI");
    Instrmt_54.add_attribute("ID", "SecurityID_t_571540727"); // 1
    Instrmt_54_set.insert("SecurityID_t_571540727");
    Instrmt_54.add_attribute("Src", "4"); // 1
    Instrmt_54_set.insert("4");
    Instrmt_54.add_attribute("Prod", "11"); // 1
    Instrmt_54_set.insert("11");
    Instrmt_54.add_attribute("ProdCmplx", "ProductComplex_t_1398085921"); // 1
    Instrmt_54_set.insert("ProductComplex_t_1398085921");
    Instrmt_54.add_attribute("SecGrp", "SecurityGroup_t_1274499563"); // 1
    Instrmt_54_set.insert("SecurityGroup_t_1274499563");
    Instrmt_54.add_attribute("CFI", "CFICode_t_805460026"); // 1
    Instrmt_54_set.insert("CFICode_t_805460026");
    Instrmt_54.add_attribute("SecTyp", "PN"); // 1
    Instrmt_54_set.insert("PN");
    Instrmt_54.add_attribute("SubTyp", "SecuritySubType_t_1435036510"); // 1
    Instrmt_54_set.insert("SecuritySubType_t_1435036510");
    Instrmt_54.add_attribute("MMY", "1875024843"); // 1
    Instrmt_54_set.insert("1875024843");
    Instrmt_54.add_attribute("MatDt", "MaturityDate_t_1428425839"); // 1
    Instrmt_54_set.insert("MaturityDate_t_1428425839");
    Instrmt_54.add_attribute("MatTm", "764032360"); // 1
    Instrmt_54_set.insert("764032360");
    Instrmt_54.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1409789576"); // 1
    Instrmt_54_set.insert("SettleOnOpenFlag_t_1409789576");
    Instrmt_54.add_attribute("AsgnMeth", "39064178"); // 1
    Instrmt_54_set.insert("39064178");
    Instrmt_54.add_attribute("Status", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("CpnPmt", "CouponPaymentDate_t_284444925"); // 1
    Instrmt_54_set.insert("CouponPaymentDate_t_284444925");
    Instrmt_54.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_54_set.insert("MM");
    Instrmt_54.add_attribute("Snrty", "SR"); // 1
    Instrmt_54_set.insert("SR");
    Instrmt_54.add_attribute("NotlPctOut", "17738357.840000"); // 1
    Instrmt_54_set.insert("17738357.840000");
    Instrmt_54.add_attribute("OrigNotlPctOut", "15624033.360000"); // 1
    Instrmt_54_set.insert("15624033.360000");
    Instrmt_54.add_attribute("AttchPnt", "16462065.520000"); // 1
    Instrmt_54_set.insert("16462065.520000");
    Instrmt_54.add_attribute("DetchPnt", "19054040.350000"); // 1
    Instrmt_54_set.insert("19054040.350000");
    Instrmt_54.add_attribute("Issued", "IssueDate_t_177816274"); // 1
    Instrmt_54_set.insert("IssueDate_t_177816274");
    Instrmt_54.add_attribute("RepoCollSecTyp", "1565717143"); // 1
    Instrmt_54_set.insert("1565717143");
    Instrmt_54.add_attribute("RepoTrm", "1992431180"); // 1
    Instrmt_54_set.insert("1992431180");
    Instrmt_54.add_attribute("RepoRt", "14925420.520000"); // 1
    Instrmt_54_set.insert("14925420.520000");
    Instrmt_54.add_attribute("Fctr", "18760815.330000"); // 1
    Instrmt_54_set.insert("18760815.330000");
    Instrmt_54.add_attribute("CrdRtg", "CreditRating_t_1741837508"); // 1
    Instrmt_54_set.insert("CreditRating_t_1741837508");
    Instrmt_54.add_attribute("Rgstry", "InstrRegistry_t_1929490182"); // 1
    Instrmt_54_set.insert("InstrRegistry_t_1929490182");
    Instrmt_54.add_attribute("IssuCtry", "680775886"); // 1
    Instrmt_54_set.insert("680775886");
    Instrmt_54.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2059100011"); // 1
    Instrmt_54_set.insert("StateOrProvinceOfIssue_t_2059100011");
    Instrmt_54.add_attribute("Lcl", "LocaleOfIssue_t_146606705"); // 1
    Instrmt_54_set.insert("LocaleOfIssue_t_146606705");
    Instrmt_54.add_attribute("Redeem", "RedemptionDate_t_1252316613"); // 1
    Instrmt_54_set.insert("RedemptionDate_t_1252316613");
    Instrmt_54.add_attribute("StrkPx", "16156121.100000"); // 1
    Instrmt_54_set.insert("16156121.100000");
    Instrmt_54.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_54_set.insert("CHF");
    Instrmt_54.add_attribute("StrkMult", "7426280.250000"); // 1
    Instrmt_54_set.insert("7426280.250000");
    Instrmt_54.add_attribute("StrkValu", "4899965.420000"); // 1
    Instrmt_54_set.insert("4899965.420000");
    Instrmt_54.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_54_set.insert("3");
    Instrmt_54.add_attribute("StrkPxBndryPrcsn", "2175377.380000"); // 1
    Instrmt_54_set.insert("2175377.380000");
    Instrmt_54.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_54_set.insert("4");
    Instrmt_54.add_attribute("OptAt", "794213247"); // 1
    Instrmt_54_set.insert("794213247");
    Instrmt_54.add_attribute("Mult", "16273273.140000"); // 1
    Instrmt_54_set.insert("16273273.140000");
    Instrmt_54.add_attribute("MultTyp", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_54_set.insert("0");
    Instrmt_54.add_attribute("MinPxIncr", "19117722.400000"); // 1
    Instrmt_54_set.insert("19117722.400000");
    Instrmt_54.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_325228383"); // 1
    Instrmt_54_set.insert("MinPriceIncrementAmount_t_325228383");
    Instrmt_54.add_attribute("UOM", "tn"); // 1
    Instrmt_54_set.insert("tn");
    Instrmt_54.add_attribute("UOMQty", "15381243.760000"); // 1
    Instrmt_54_set.insert("15381243.760000");
    Instrmt_54.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_54_set.insert("MWh");
    Instrmt_54.add_attribute("PxUOMQty", "20384937.770000"); // 1
    Instrmt_54_set.insert("20384937.770000");
    Instrmt_54.add_attribute("SettlMeth", "P"); // 1
    Instrmt_54_set.insert("P");
    Instrmt_54.add_attribute("ExerStyle", "2"); // 1
    Instrmt_54_set.insert("2");
    Instrmt_54.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_54_set.insert("2");
    Instrmt_54.add_attribute("OptPayAmt", "OptPayoutAmount_t_1140992295"); // 1
    Instrmt_54_set.insert("OptPayoutAmount_t_1140992295");
    Instrmt_54.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_54_set.insert("PCTPAR");
    Instrmt_54.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_54_set.insert("FUTDA");
    Instrmt_54.add_attribute("ListMeth", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("CapPx", "11925129.330000"); // 1
    Instrmt_54_set.insert("11925129.330000");
    Instrmt_54.add_attribute("FlrPx", "18661010.440000"); // 1
    Instrmt_54_set.insert("18661010.440000");
    Instrmt_54.add_attribute("PutCall", "0"); // 1
    Instrmt_54_set.insert("0");
    Instrmt_54.add_attribute("FlexInd", "true"); // 1
    Instrmt_54_set.insert("true");
    Instrmt_54.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_54_set.insert("false");
    Instrmt_54.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_54_set.insert("Wk");
    Instrmt_54.add_attribute("CpnRt", "10236561.540000"); // 1
    Instrmt_54_set.insert("10236561.540000");
    Instrmt_54.add_attribute("Exch", "SecurityExchange_t_1473852896"); // 1
    Instrmt_54_set.insert("SecurityExchange_t_1473852896");
    Instrmt_54.add_attribute("PosLmt", "857719005"); // 1
    Instrmt_54_set.insert("857719005");
    Instrmt_54.add_attribute("NTPosLmt", "1513652696"); // 1
    Instrmt_54_set.insert("1513652696");
    Instrmt_54.add_attribute("Issr", "Issuer_t_1104621804"); // 1
    Instrmt_54_set.insert("Issuer_t_1104621804");
    Instrmt_54.add_attribute("EncIssrLen", "887899892"); // 1
    Instrmt_54_set.insert("887899892");
    Instrmt_54.add_attribute("EncIssr", "EncodedIssuer_t_1731190434"); // 1
    Instrmt_54_set.insert("EncodedIssuer_t_1731190434");
    Instrmt_54.add_attribute("Desc", "SecurityDesc_t_16332903"); // 1
    Instrmt_54_set.insert("SecurityDesc_t_16332903");
    Instrmt_54.add_attribute("EncSecDescLen", "1682113140"); // 1
    Instrmt_54_set.insert("1682113140");
    Instrmt_54.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1211034101"); // 1
    Instrmt_54_set.insert("EncodedSecurityDesc_t_1211034101");
    Instrmt_54.add_attribute("Pool", "Pool_t_1114591828"); // 1
    Instrmt_54_set.insert("Pool_t_1114591828");
    Instrmt_54.add_attribute("CSetMo", "2054443565"); // 1
    Instrmt_54_set.insert("2054443565");
    Instrmt_54.add_attribute("CPPgm", "2"); // 1
    Instrmt_54_set.insert("2");
    Instrmt_54.add_attribute("CPRegT", "CPRegType_t_1439820212"); // 1
    Instrmt_54_set.insert("CPRegType_t_1439820212");
    Instrmt_54.add_attribute("Dated", "DatedDate_t_299247142"); // 1
    Instrmt_54_set.insert("DatedDate_t_299247142");
    Instrmt_54.add_attribute("IntAcrl", "InterestAccrualDate_t_365963421"); // 1
    Instrmt_54_set.insert("InterestAccrualDate_t_365963421");
    all_values.push_back(Instrmt_54_set);
    all_compo_names.insert("Instrmt_54_set");

    {
      xml_element AID_57{"AID"};
      multiset<string> AID_57_set;
      AID_57.add_attribute("AltID", "SecurityAltID_t_1179968284"); // 2
      AID_57_set.insert("SecurityAltID_t_1179968284");
      AID_57.add_attribute("AltIDSrc", "I"); // 2
      AID_57_set.insert("I");
      all_values.push_back(AID_57_set);
      all_compo_names.insert("AID_57_set");

      Instrmt_54.add_element(AID_57);
    }
    {
      xml_element SecXML_57{"SecXML"};
      multiset<string> SecXML_57_set;
      SecXML_57.add_attribute("Schema", "SecurityXMLSchema_t_1662008184"); // 2
      SecXML_57_set.insert("SecurityXMLSchema_t_1662008184");
      all_values.push_back(SecXML_57_set);
      all_compo_names.insert("SecXML_57_set");

      Instrmt_54.add_element(SecXML_57);
    }
    {
      xml_element Evnt_57{"Evnt"};
      multiset<string> Evnt_57_set;
      Evnt_57.add_attribute("EventTyp", "11"); // 2
      Evnt_57_set.insert("11");
      Evnt_57.add_attribute("Dt", "EventDate_t_1646984544"); // 2
      Evnt_57_set.insert("EventDate_t_1646984544");
      Evnt_57.add_attribute("Tm", "EventTime_t_655516831"); // 2
      Evnt_57_set.insert("EventTime_t_655516831");
      Evnt_57.add_attribute("Px", "3609553.810000"); // 2
      Evnt_57_set.insert("3609553.810000");
      Evnt_57.add_attribute("Txt", "EventText_t_684826053"); // 2
      Evnt_57_set.insert("EventText_t_684826053");
      all_values.push_back(Evnt_57_set);
      all_compo_names.insert("Evnt_57_set");

      Instrmt_54.add_element(Evnt_57);
    }
    {
      xml_element Pty_304{"Pty"};
      multiset<string> Pty_304_set;
      Pty_304.add_attribute("ID", "InstrumentPartyID_t_1390862986"); // 2
      Pty_304_set.insert("InstrumentPartyID_t_1390862986");
      Pty_304.add_attribute("Src", "5"); // 2
      Pty_304_set.insert("5");
      Pty_304.add_attribute("R", "26"); // 2
      Pty_304_set.insert("26");
      all_values.push_back(Pty_304_set);
      all_compo_names.insert("Pty_304_set");

      {
        xml_element Sub_304{"Sub"};
        multiset<string> Sub_304_set;
        Sub_304.add_attribute("ID", "InstrumentPartySubID_t_2037825505"); // 3
        Sub_304_set.insert("InstrumentPartySubID_t_2037825505");
        Sub_304.add_attribute("Typ", "19"); // 3
        Sub_304_set.insert("19");
        all_values.push_back(Sub_304_set);
        all_compo_names.insert("Sub_304_set");

        Pty_304.add_element(Sub_304);
      }
      Instrmt_54.add_element(Pty_304);
    }
    {
      xml_element CmplxEvnt_54{"CmplxEvnt"};
      multiset<string> CmplxEvnt_54_set;
      CmplxEvnt_54.add_attribute("Typ", "6"); // 2
      CmplxEvnt_54_set.insert("6");
      CmplxEvnt_54.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_5432837"); // 2
      CmplxEvnt_54_set.insert("ComplexOptPayoutAmount_t_5432837");
      CmplxEvnt_54.add_attribute("Px", "17687604.580000"); // 2
      CmplxEvnt_54_set.insert("17687604.580000");
      CmplxEvnt_54.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_54_set.insert("3");
      CmplxEvnt_54.add_attribute("PxBndryPrcsn", "8631518.430000"); // 2
      CmplxEvnt_54_set.insert("8631518.430000");
      CmplxEvnt_54.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_54_set.insert("3");
      CmplxEvnt_54.add_attribute("Cond", "1"); // 2
      CmplxEvnt_54_set.insert("1");
      all_values.push_back(CmplxEvnt_54_set);
      all_compo_names.insert("CmplxEvnt_54_set");

      {
        xml_element EvntDts_54{"EvntDts"};
        multiset<string> EvntDts_54_set;
        EvntDts_54.add_attribute("StartDt", "ComplexEventStartDate_t_1751051735"); // 3
        EvntDts_54_set.insert("ComplexEventStartDate_t_1751051735");
        EvntDts_54.add_attribute("EndDt", "ComplexEventEndDate_t_718636293"); // 3
        EvntDts_54_set.insert("ComplexEventEndDate_t_718636293");
        all_values.push_back(EvntDts_54_set);
        all_compo_names.insert("EvntDts_54_set");

        {
          xml_element EvntTms_54{"EvntTms"};
          multiset<string> EvntTms_54_set;
          EvntTms_54.add_attribute("StartTm", "1821701415"); // 4
          EvntTms_54_set.insert("1821701415");
          EvntTms_54.add_attribute("EndTm", "1285681227"); // 4
          EvntTms_54_set.insert("1285681227");
          all_values.push_back(EvntTms_54_set);
          all_compo_names.insert("EvntTms_54_set");

          EvntDts_54.add_element(EvntTms_54);
        }
        CmplxEvnt_54.add_element(EvntDts_54);
      }
      Instrmt_54.add_element(CmplxEvnt_54);
    }
    elt.add_element(Instrmt_54);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_15{"FinDetls"};
    multiset<string> FinDetls_15_set;
    FinDetls_15.add_attribute("AgmtDesc", "AgreementDesc_t_1929670394"); // 1
    FinDetls_15_set.insert("AgreementDesc_t_1929670394");
    FinDetls_15.add_attribute("AgmtID", "AgreementID_t_788809596"); // 1
    FinDetls_15_set.insert("AgreementID_t_788809596");
    FinDetls_15.add_attribute("AgmtDt", "AgreementDate_t_1192641145"); // 1
    FinDetls_15_set.insert("AgreementDate_t_1192641145");
    FinDetls_15.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_15_set.insert("USD");
    FinDetls_15.add_attribute("TrmTyp", "4"); // 1
    FinDetls_15_set.insert("4");
    FinDetls_15.add_attribute("StartDt", "StartDate_t_1123472860"); // 1
    FinDetls_15_set.insert("StartDate_t_1123472860");
    FinDetls_15.add_attribute("EndDt", "EndDate_t_1261114444"); // 1
    FinDetls_15_set.insert("EndDate_t_1261114444");
    FinDetls_15.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_15_set.insert("3");
    FinDetls_15.add_attribute("MgnRatio", "6379973.960000"); // 1
    FinDetls_15_set.insert("6379973.960000");
    all_values.push_back(FinDetls_15_set);
    all_compo_names.insert("FinDetls_15_set");

    elt.add_element(FinDetls_15);
  } // end FinDetls
  { // Undly
    xml_element Undly_75{"Undly"};
    multiset<string> Undly_75_set;
    Undly_75.add_attribute("Sym", "UnderlyingSymbol_t_1181646455"); // 1
    Undly_75_set.insert("UnderlyingSymbol_t_1181646455");
    Undly_75.add_attribute("Sfx", "WI"); // 1
    Undly_75_set.insert("WI");
    Undly_75.add_attribute("ID", "UnderlyingSecurityID_t_572518808"); // 1
    Undly_75_set.insert("UnderlyingSecurityID_t_572518808");
    Undly_75.add_attribute("Src", "B"); // 1
    Undly_75_set.insert("B");
    Undly_75.add_attribute("Prod", "10"); // 1
    Undly_75_set.insert("10");
    Undly_75.add_attribute("CFI", "UnderlyingCFICode_t_2125987122"); // 1
    Undly_75_set.insert("UnderlyingCFICode_t_2125987122");
    Undly_75.add_attribute("SecTyp", "TLQN"); // 1
    Undly_75_set.insert("TLQN");
    Undly_75.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_427235423"); // 1
    Undly_75_set.insert("UnderlyingSecuritySubType_t_427235423");
    Undly_75.add_attribute("MMY", "723607779"); // 1
    Undly_75_set.insert("723607779");
    Undly_75.add_attribute("Mat", "UnderlyingMaturityDate_t_1496809769"); // 1
    Undly_75_set.insert("UnderlyingMaturityDate_t_1496809769");
    Undly_75.add_attribute("MatTm", "432668260"); // 1
    Undly_75_set.insert("432668260");
    Undly_75.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_344884589"); // 1
    Undly_75_set.insert("UnderlyingCouponPaymentDate_t_344884589");
    Undly_75.add_attribute("RestrctTyp", "FR"); // 1
    Undly_75_set.insert("FR");
    Undly_75.add_attribute("Snrty", "SR"); // 1
    Undly_75_set.insert("SR");
    Undly_75.add_attribute("NotlPctOut", "14798140.960000"); // 1
    Undly_75_set.insert("14798140.960000");
    Undly_75.add_attribute("OrigNotlPctOut", "18554413.400000"); // 1
    Undly_75_set.insert("18554413.400000");
    Undly_75.add_attribute("AttchPnt", "8993881.910000"); // 1
    Undly_75_set.insert("8993881.910000");
    Undly_75.add_attribute("DetchPnt", "509667.420000"); // 1
    Undly_75_set.insert("509667.420000");
    Undly_75.add_attribute("Issued", "UnderlyingIssueDate_t_1529659108"); // 1
    Undly_75_set.insert("UnderlyingIssueDate_t_1529659108");
    Undly_75.add_attribute("RepoCollSecTyp", "37585770"); // 1
    Undly_75_set.insert("37585770");
    Undly_75.add_attribute("RepoTrm", "1980637136"); // 1
    Undly_75_set.insert("1980637136");
    Undly_75.add_attribute("RepoRt", "1709850.560000"); // 1
    Undly_75_set.insert("1709850.560000");
    Undly_75.add_attribute("Fctr", "12302269.150000"); // 1
    Undly_75_set.insert("12302269.150000");
    Undly_75.add_attribute("CrdRtg", "UnderlyingCreditRating_t_590662928"); // 1
    Undly_75_set.insert("UnderlyingCreditRating_t_590662928");
    Undly_75.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_252131216"); // 1
    Undly_75_set.insert("UnderlyingInstrRegistry_t_252131216");
    Undly_75.add_attribute("Ctry", "574631555"); // 1
    Undly_75_set.insert("574631555");
    Undly_75.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1714135788"); // 1
    Undly_75_set.insert("UnderlyingStateOrProvinceOfIssue_t_1714135788");
    Undly_75.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1513245660"); // 1
    Undly_75_set.insert("UnderlyingLocaleOfIssue_t_1513245660");
    Undly_75.add_attribute("Redeem", "UnderlyingRedemptionDate_t_109293466"); // 1
    Undly_75_set.insert("UnderlyingRedemptionDate_t_109293466");
    Undly_75.add_attribute("StrkPx", "2046495.370000"); // 1
    Undly_75_set.insert("2046495.370000");
    Undly_75.add_attribute("StrkCcy", "CHF"); // 1
    Undly_75_set.insert("CHF");
    Undly_75.add_attribute("OptA", "1498163764"); // 1
    Undly_75_set.insert("1498163764");
    Undly_75.add_attribute("Mult", "1498442.460000"); // 1
    Undly_75_set.insert("1498442.460000");
    Undly_75.add_attribute("MultTyp", "0"); // 1
    Undly_75_set.insert("0");
    Undly_75.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_75_set.insert("0");
    Undly_75.add_attribute("UOM", "oz_tr"); // 1
    Undly_75_set.insert("oz_tr");
    Undly_75.add_attribute("UOMQty", "11323610.910000"); // 1
    Undly_75_set.insert("11323610.910000");
    Undly_75.add_attribute("PxUOM", "MWh"); // 1
    Undly_75_set.insert("MWh");
    Undly_75.add_attribute("PxUOMQty", "8519555.000000"); // 1
    Undly_75_set.insert("8519555.000000");
    Undly_75.add_attribute("TmUnit", "Yr"); // 1
    Undly_75_set.insert("Yr");
    Undly_75.add_attribute("ExerStyle", "0"); // 1
    Undly_75_set.insert("0");
    Undly_75.add_attribute("CpnRt", "11968400.890000"); // 1
    Undly_75_set.insert("11968400.890000");
    Undly_75.add_attribute("Exch", "UnderlyingSecurityExchange_t_531760041"); // 1
    Undly_75_set.insert("UnderlyingSecurityExchange_t_531760041");
    Undly_75.add_attribute("Issr", "UnderlyingIssuer_t_2043297469"); // 1
    Undly_75_set.insert("UnderlyingIssuer_t_2043297469");
    Undly_75.add_attribute("EncUndIssrLen", "529170538"); // 1
    Undly_75_set.insert("529170538");
    Undly_75.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_239717733"); // 1
    Undly_75_set.insert("EncodedUnderlyingIssuer_t_239717733");
    Undly_75.add_attribute("Desc", "UnderlyingSecurityDesc_t_795202012"); // 1
    Undly_75_set.insert("UnderlyingSecurityDesc_t_795202012");
    Undly_75.add_attribute("EncUndSecDescLen", "580137280"); // 1
    Undly_75_set.insert("580137280");
    Undly_75.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1769376841"); // 1
    Undly_75_set.insert("EncodedUnderlyingSecurityDesc_t_1769376841");
    Undly_75.add_attribute("CPPgm", "UnderlyingCPProgram_t_832787783"); // 1
    Undly_75_set.insert("UnderlyingCPProgram_t_832787783");
    Undly_75.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_413290768"); // 1
    Undly_75_set.insert("UnderlyingCPRegType_t_413290768");
    Undly_75.add_attribute("AllocPct", "19403618.970000"); // 1
    Undly_75_set.insert("19403618.970000");
    Undly_75.add_attribute("Ccy", "USD"); // 1
    Undly_75_set.insert("USD");
    Undly_75.add_attribute("Qty", "450094.650000"); // 1
    Undly_75_set.insert("450094.650000");
    Undly_75.add_attribute("SettlTyp", "2"); // 1
    Undly_75_set.insert("2");
    Undly_75.add_attribute("CashAmt", "UnderlyingCashAmount_t_570605837"); // 1
    Undly_75_set.insert("UnderlyingCashAmount_t_570605837");
    Undly_75.add_attribute("CashTyp", "DIFF"); // 1
    Undly_75_set.insert("DIFF");
    Undly_75.add_attribute("Px", "5994560.710000"); // 1
    Undly_75_set.insert("5994560.710000");
    Undly_75.add_attribute("DirtPx", "7752553.740000"); // 1
    Undly_75_set.insert("7752553.740000");
    Undly_75.add_attribute("EndPx", "11355805.640000"); // 1
    Undly_75_set.insert("11355805.640000");
    Undly_75.add_attribute("StartVal", "UnderlyingStartValue_t_1890395992"); // 1
    Undly_75_set.insert("UnderlyingStartValue_t_1890395992");
    Undly_75.add_attribute("CurVal", "UnderlyingCurrentValue_t_125935490"); // 1
    Undly_75_set.insert("UnderlyingCurrentValue_t_125935490");
    Undly_75.add_attribute("EndVal", "UnderlyingEndValue_t_1285424810"); // 1
    Undly_75_set.insert("UnderlyingEndValue_t_1285424810");
    Undly_75.add_attribute("AdjQty", "7528411.260000"); // 1
    Undly_75_set.insert("7528411.260000");
    Undly_75.add_attribute("FxRate", "135091.730000"); // 1
    Undly_75_set.insert("135091.730000");
    Undly_75.add_attribute("FxRateCalc", "D"); // 1
    Undly_75_set.insert("D");
    Undly_75.add_attribute("CapValu", "UnderlyingCapValue_t_1885202217"); // 1
    Undly_75_set.insert("UnderlyingCapValue_t_1885202217");
    Undly_75.add_attribute("SetMeth", "UnderlyingSettlMethod_t_328318278"); // 1
    Undly_75_set.insert("UnderlyingSettlMethod_t_328318278");
    Undly_75.add_attribute("PutCall", "118244383"); // 1
    Undly_75_set.insert("118244383");
    all_values.push_back(Undly_75_set);
    all_compo_names.insert("Undly_75_set");

    {
      xml_element UndAID_75{"UndAID"};
      multiset<string> UndAID_75_set;
      UndAID_75.add_attribute("AltID", "UnderlyingSecurityAltID_t_219405782"); // 2
      UndAID_75_set.insert("UnderlyingSecurityAltID_t_219405782");
      UndAID_75.add_attribute("AltIDSrc", "1"); // 2
      UndAID_75_set.insert("1");
      all_values.push_back(UndAID_75_set);
      all_compo_names.insert("UndAID_75_set");

      Undly_75.add_element(UndAID_75);
    }
    {
      xml_element Stip_111{"Stip"};
      multiset<string> Stip_111_set;
      Stip_111.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_111_set.insert("MAXORDQTY");
      Stip_111.add_attribute("Val", "UnderlyingStipValue_t_751165823"); // 2
      Stip_111_set.insert("UnderlyingStipValue_t_751165823");
      all_values.push_back(Stip_111_set);
      all_compo_names.insert("Stip_111_set");

      Undly_75.add_element(Stip_111);
    }
    {
      xml_element Pty_305{"Pty"};
      multiset<string> Pty_305_set;
      Pty_305.add_attribute("ID", "UnderlyingInstrumentPartyID_t_971609466"); // 2
      Pty_305_set.insert("UnderlyingInstrumentPartyID_t_971609466");
      Pty_305.add_attribute("Src", "E"); // 2
      Pty_305_set.insert("E");
      Pty_305.add_attribute("R", "70"); // 2
      Pty_305_set.insert("70");
      all_values.push_back(Pty_305_set);
      all_compo_names.insert("Pty_305_set");

      {
        xml_element Sub_305{"Sub"};
        multiset<string> Sub_305_set;
        Sub_305.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1766811478"); // 3
        Sub_305_set.insert("UnderlyingInstrumentPartySubID_t_1766811478");
        Sub_305.add_attribute("Typ", "1"); // 3
        Sub_305_set.insert("1");
        all_values.push_back(Sub_305_set);
        all_compo_names.insert("Sub_305_set");

        Pty_305.add_element(Sub_305);
      }
      Undly_75.add_element(Pty_305);
    }
    elt.add_element(Undly_75);
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
