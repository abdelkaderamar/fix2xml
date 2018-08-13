#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequest_message_t_0;
  elt.add_attribute("ReqID", "MDReqID_t_538046284"); // 0
  MarketDataRequest_message_t_0.insert("MDReqID_t_538046284");
  elt.add_attribute("SubReqTyp", "1"); // 0
  MarketDataRequest_message_t_0.insert("1");
  elt.add_attribute("MktDepth", "2000480754"); // 0
  MarketDataRequest_message_t_0.insert("2000480754");
  elt.add_attribute("UpdtTyp", "1"); // 0
  MarketDataRequest_message_t_0.insert("1");
  elt.add_attribute("AggBook", "Y"); // 0
  MarketDataRequest_message_t_0.insert("Y");
  elt.add_attribute("OpenClsSettlFlag", "5"); // 0
  MarketDataRequest_message_t_0.insert("5");
  elt.add_attribute("Scope", "2"); // 0
  MarketDataRequest_message_t_0.insert("2");
  elt.add_attribute("ImplctDel", "Y"); // 0
  MarketDataRequest_message_t_0.insert("Y");
  elt.add_attribute("ApplQuActn", "2"); // 0
  MarketDataRequest_message_t_0.insert("2");
  elt.add_attribute("ApplQuMax", "182537940"); // 0
  MarketDataRequest_message_t_0.insert("182537940");
  elt.add_attribute("MDQteTyp", "2"); // 0
  MarketDataRequest_message_t_0.insert("2");
  all_values.push_back(MarketDataRequest_message_t_0);
  all_compo_names.insert("MarketDataRequest_message_t");

  { // Hdr
    xml_element Hdr_40{"Hdr"};
    multiset<string> Hdr_40_set;
    Hdr_40.add_attribute("SeqNum", "2035812859"); // 1
    Hdr_40_set.insert("2035812859");
    Hdr_40.add_attribute("SID", "SenderCompID_t_1575015748"); // 1
    Hdr_40_set.insert("SenderCompID_t_1575015748");
    Hdr_40.add_attribute("TID", "TargetCompID_t_1447489124"); // 1
    Hdr_40_set.insert("TargetCompID_t_1447489124");
    Hdr_40.add_attribute("OBID", "OnBehalfOfCompID_t_1745773490"); // 1
    Hdr_40_set.insert("OnBehalfOfCompID_t_1745773490");
    Hdr_40.add_attribute("D2ID", "DeliverToCompID_t_1927236987"); // 1
    Hdr_40_set.insert("DeliverToCompID_t_1927236987");
    Hdr_40.add_attribute("SSub", "SenderSubID_t_2089821468"); // 1
    Hdr_40_set.insert("SenderSubID_t_2089821468");
    Hdr_40.add_attribute("SLoc", "SenderLocationID_t_1921755128"); // 1
    Hdr_40_set.insert("SenderLocationID_t_1921755128");
    Hdr_40.add_attribute("TSub", "TargetSubID_t_1498659456"); // 1
    Hdr_40_set.insert("TargetSubID_t_1498659456");
    Hdr_40.add_attribute("TLoc", "TargetLocationID_t_342805213"); // 1
    Hdr_40_set.insert("TargetLocationID_t_342805213");
    Hdr_40.add_attribute("OBSub", "OnBehalfOfSubID_t_1457881188"); // 1
    Hdr_40_set.insert("OnBehalfOfSubID_t_1457881188");
    Hdr_40.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1520754615"); // 1
    Hdr_40_set.insert("OnBehalfOfLocationID_t_1520754615");
    Hdr_40.add_attribute("D2Sub", "DeliverToSubID_t_1764160738"); // 1
    Hdr_40_set.insert("DeliverToSubID_t_1764160738");
    Hdr_40.add_attribute("D2Loc", "DeliverToLocationID_t_1007589335"); // 1
    Hdr_40_set.insert("DeliverToLocationID_t_1007589335");
    Hdr_40.add_attribute("PosDup", "N"); // 1
    Hdr_40_set.insert("N");
    Hdr_40.add_attribute("PosRsnd", "N"); // 1
    Hdr_40_set.insert("N");
    Hdr_40.add_attribute("Snt", "SendingTime_t_540134041"); // 1
    Hdr_40_set.insert("SendingTime_t_540134041");
    Hdr_40.add_attribute("OrigSnt", "OrigSendingTime_t_525885788"); // 1
    Hdr_40_set.insert("OrigSendingTime_t_525885788");
    Hdr_40.add_attribute("MsgEncd", "MessageEncoding_t_1915032313"); // 1
    Hdr_40_set.insert("MessageEncoding_t_1915032313");
    all_values.push_back(Hdr_40_set);
    all_compo_names.insert("Hdr_40_set");

    {
      xml_element Hop_40{"Hop"};
      multiset<string> Hop_40_set;
      Hop_40.add_attribute("ID", "HopCompID_t_870759442"); // 2
      Hop_40_set.insert("HopCompID_t_870759442");
      Hop_40.add_attribute("Ref", "1483353637"); // 2
      Hop_40_set.insert("1483353637");
      Hop_40.add_attribute("Snt", "HopSendingTime_t_305594949"); // 2
      Hop_40_set.insert("HopSendingTime_t_305594949");
      all_values.push_back(Hop_40_set);
      all_compo_names.insert("Hop_40_set");

      Hdr_40.add_element(Hop_40);
    }
    elt.add_element(Hdr_40);
  } // end Hdr
  { // Pty
    xml_element Pty_174{"Pty"};
    multiset<string> Pty_174_set;
    Pty_174.add_attribute("ID", "PartyID_t_1336350743"); // 1
    Pty_174_set.insert("PartyID_t_1336350743");
    Pty_174.add_attribute("Src", "I"); // 1
    Pty_174_set.insert("I");
    Pty_174.add_attribute("R", "17"); // 1
    Pty_174_set.insert("17");
    all_values.push_back(Pty_174_set);
    all_compo_names.insert("Pty_174_set");

    {
      xml_element Sub_174{"Sub"};
      multiset<string> Sub_174_set;
      Sub_174.add_attribute("ID", "PartySubID_t_494807319"); // 2
      Sub_174_set.insert("PartySubID_t_494807319");
      Sub_174.add_attribute("Typ", "23"); // 2
      Sub_174_set.insert("23");
      all_values.push_back(Sub_174_set);
      all_compo_names.insert("Sub_174_set");

      Pty_174.add_element(Sub_174);
    }
    elt.add_element(Pty_174);
  } // end Pty
  { // Pty
    xml_element Pty_175{"Pty"};
    multiset<string> Pty_175_set;
    Pty_175.add_attribute("ID", "PartyID_t_1449622929"); // 1
    Pty_175_set.insert("PartyID_t_1449622929");
    Pty_175.add_attribute("Src", "I"); // 1
    Pty_175_set.insert("I");
    Pty_175.add_attribute("R", "24"); // 1
    Pty_175_set.insert("24");
    all_values.push_back(Pty_175_set);
    all_compo_names.insert("Pty_175_set");

    {
      xml_element Sub_175{"Sub"};
      multiset<string> Sub_175_set;
      Sub_175.add_attribute("ID", "PartySubID_t_1747776482"); // 2
      Sub_175_set.insert("PartySubID_t_1747776482");
      Sub_175.add_attribute("Typ", "21"); // 2
      Sub_175_set.insert("21");
      all_values.push_back(Sub_175_set);
      all_compo_names.insert("Sub_175_set");

      Pty_175.add_element(Sub_175);
    }
    elt.add_element(Pty_175);
  } // end Pty
  { // Pty
    xml_element Pty_176{"Pty"};
    multiset<string> Pty_176_set;
    Pty_176.add_attribute("ID", "PartyID_t_1140598043"); // 1
    Pty_176_set.insert("PartyID_t_1140598043");
    Pty_176.add_attribute("Src", "F"); // 1
    Pty_176_set.insert("F");
    Pty_176.add_attribute("R", "28"); // 1
    Pty_176_set.insert("28");
    all_values.push_back(Pty_176_set);
    all_compo_names.insert("Pty_176_set");

    {
      xml_element Sub_176{"Sub"};
      multiset<string> Sub_176_set;
      Sub_176.add_attribute("ID", "PartySubID_t_920351383"); // 2
      Sub_176_set.insert("PartySubID_t_920351383");
      Sub_176.add_attribute("Typ", "5"); // 2
      Sub_176_set.insert("5");
      all_values.push_back(Sub_176_set);
      all_compo_names.insert("Sub_176_set");

      Pty_176.add_element(Sub_176);
    }
    elt.add_element(Pty_176);
  } // end Pty
  { // Req
    xml_element Req_0{"Req"};
    multiset<string> Req_0_set;
    Req_0.add_attribute("Typ", "X"); // 1
    Req_0_set.insert("X");
    all_values.push_back(Req_0_set);
    all_compo_names.insert("Req_0_set");

    elt.add_element(Req_0);
  } // end Req
  { // Req
    xml_element Req_1{"Req"};
    multiset<string> Req_1_set;
    Req_1.add_attribute("Typ", "7"); // 1
    Req_1_set.insert("7");
    all_values.push_back(Req_1_set);
    all_compo_names.insert("Req_1_set");

    elt.add_element(Req_1);
  } // end Req
  { // InstReq
    xml_element InstReq_0{"InstReq"};
    multiset<string> InstReq_0_set;
    InstReq_0.add_attribute("Ccy", "CHF"); // 1
    InstReq_0_set.insert("CHF");
    InstReq_0.add_attribute("Typ", "2"); // 1
    InstReq_0_set.insert("2");
    InstReq_0.add_attribute("SettlTyp", "9"); // 1
    InstReq_0_set.insert("9");
    InstReq_0.add_attribute("SettlDt", "SettlDate_t_1737875113"); // 1
    InstReq_0_set.insert("SettlDate_t_1737875113");
    InstReq_0.add_attribute("Sz", "2583231.520000"); // 1
    InstReq_0_set.insert("2583231.520000");
    InstReq_0.add_attribute("MDStrmID", "MDStreamID_t_1527374789"); // 1
    InstReq_0_set.insert("MDStreamID_t_1527374789");
    all_values.push_back(InstReq_0_set);
    all_compo_names.insert("InstReq_0_set");

    {
      xml_element Instrmt_31{"Instrmt"};
      multiset<string> Instrmt_31_set;
      Instrmt_31.add_attribute("Sym", "Symbol_t_1505423779"); // 2
      Instrmt_31_set.insert("Symbol_t_1505423779");
      Instrmt_31.add_attribute("Sfx", "CD"); // 2
      Instrmt_31_set.insert("CD");
      Instrmt_31.add_attribute("ID", "SecurityID_t_863244778"); // 2
      Instrmt_31_set.insert("SecurityID_t_863244778");
      Instrmt_31.add_attribute("Src", "3"); // 2
      Instrmt_31_set.insert("3");
      Instrmt_31.add_attribute("Prod", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("ProdCmplx", "ProductComplex_t_52111873"); // 2
      Instrmt_31_set.insert("ProductComplex_t_52111873");
      Instrmt_31.add_attribute("SecGrp", "SecurityGroup_t_239273593"); // 2
      Instrmt_31_set.insert("SecurityGroup_t_239273593");
      Instrmt_31.add_attribute("CFI", "CFICode_t_2038252036"); // 2
      Instrmt_31_set.insert("CFICode_t_2038252036");
      Instrmt_31.add_attribute("SecTyp", "NONE"); // 2
      Instrmt_31_set.insert("NONE");
      Instrmt_31.add_attribute("SubTyp", "SecuritySubType_t_1769801596"); // 2
      Instrmt_31_set.insert("SecuritySubType_t_1769801596");
      Instrmt_31.add_attribute("MMY", "1340391317"); // 2
      Instrmt_31_set.insert("1340391317");
      Instrmt_31.add_attribute("MatDt", "MaturityDate_t_686230893"); // 2
      Instrmt_31_set.insert("MaturityDate_t_686230893");
      Instrmt_31.add_attribute("MatTm", "1335383891"); // 2
      Instrmt_31_set.insert("1335383891");
      Instrmt_31.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_940684151"); // 2
      Instrmt_31_set.insert("SettleOnOpenFlag_t_940684151");
      Instrmt_31.add_attribute("AsgnMeth", "713871806"); // 2
      Instrmt_31_set.insert("713871806");
      Instrmt_31.add_attribute("Status", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("CpnPmt", "CouponPaymentDate_t_1988466109"); // 2
      Instrmt_31_set.insert("CouponPaymentDate_t_1988466109");
      Instrmt_31.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_31_set.insert("MR");
      Instrmt_31.add_attribute("Snrty", "SR"); // 2
      Instrmt_31_set.insert("SR");
      Instrmt_31.add_attribute("NotlPctOut", "8311022.390000"); // 2
      Instrmt_31_set.insert("8311022.390000");
      Instrmt_31.add_attribute("OrigNotlPctOut", "18874884.440000"); // 2
      Instrmt_31_set.insert("18874884.440000");
      Instrmt_31.add_attribute("AttchPnt", "15203768.610000"); // 2
      Instrmt_31_set.insert("15203768.610000");
      Instrmt_31.add_attribute("DetchPnt", "165435.830000"); // 2
      Instrmt_31_set.insert("165435.830000");
      Instrmt_31.add_attribute("Issued", "IssueDate_t_598088219"); // 2
      Instrmt_31_set.insert("IssueDate_t_598088219");
      Instrmt_31.add_attribute("RepoCollSecTyp", "1165175019"); // 2
      Instrmt_31_set.insert("1165175019");
      Instrmt_31.add_attribute("RepoTrm", "966145664"); // 2
      Instrmt_31_set.insert("966145664");
      Instrmt_31.add_attribute("RepoRt", "3162773.300000"); // 2
      Instrmt_31_set.insert("3162773.300000");
      Instrmt_31.add_attribute("Fctr", "191803.720000"); // 2
      Instrmt_31_set.insert("191803.720000");
      Instrmt_31.add_attribute("CrdRtg", "CreditRating_t_556537130"); // 2
      Instrmt_31_set.insert("CreditRating_t_556537130");
      Instrmt_31.add_attribute("Rgstry", "InstrRegistry_t_574600482"); // 2
      Instrmt_31_set.insert("InstrRegistry_t_574600482");
      Instrmt_31.add_attribute("IssuCtry", "1546555161"); // 2
      Instrmt_31_set.insert("1546555161");
      Instrmt_31.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2061960909"); // 2
      Instrmt_31_set.insert("StateOrProvinceOfIssue_t_2061960909");
      Instrmt_31.add_attribute("Lcl", "LocaleOfIssue_t_1703683076"); // 2
      Instrmt_31_set.insert("LocaleOfIssue_t_1703683076");
      Instrmt_31.add_attribute("Redeem", "RedemptionDate_t_262316291"); // 2
      Instrmt_31_set.insert("RedemptionDate_t_262316291");
      Instrmt_31.add_attribute("StrkPx", "17254959.890000"); // 2
      Instrmt_31_set.insert("17254959.890000");
      Instrmt_31.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_31_set.insert("EUR");
      Instrmt_31.add_attribute("StrkMult", "19647695.830000"); // 2
      Instrmt_31_set.insert("19647695.830000");
      Instrmt_31.add_attribute("StrkValu", "14702532.280000"); // 2
      Instrmt_31_set.insert("14702532.280000");
      Instrmt_31.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("StrkPxBndryPrcsn", "6631608.980000"); // 2
      Instrmt_31_set.insert("6631608.980000");
      Instrmt_31.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_31_set.insert("4");
      Instrmt_31.add_attribute("OptAt", "774987775"); // 2
      Instrmt_31_set.insert("774987775");
      Instrmt_31.add_attribute("Mult", "16038450.490000"); // 2
      Instrmt_31_set.insert("16038450.490000");
      Instrmt_31.add_attribute("MultTyp", "0"); // 2
      Instrmt_31_set.insert("0");
      Instrmt_31.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("MinPxIncr", "14448275.110000"); // 2
      Instrmt_31_set.insert("14448275.110000");
      Instrmt_31.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_453768970"); // 2
      Instrmt_31_set.insert("MinPriceIncrementAmount_t_453768970");
      Instrmt_31.add_attribute("UOM", "oz_tr"); // 2
      Instrmt_31_set.insert("oz_tr");
      Instrmt_31.add_attribute("UOMQty", "1284461.020000"); // 2
      Instrmt_31_set.insert("1284461.020000");
      Instrmt_31.add_attribute("PxUOM", "t"); // 2
      Instrmt_31_set.insert("t");
      Instrmt_31.add_attribute("PxUOMQty", "17252289.450000"); // 2
      Instrmt_31_set.insert("17252289.450000");
      Instrmt_31.add_attribute("SettlMeth", "P"); // 2
      Instrmt_31_set.insert("P");
      Instrmt_31.add_attribute("ExerStyle", "0"); // 2
      Instrmt_31_set.insert("0");
      Instrmt_31.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("OptPayAmt", "OptPayoutAmount_t_1111135350"); // 2
      Instrmt_31_set.insert("OptPayoutAmount_t_1111135350");
      Instrmt_31.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_31_set.insert("PCTPAR");
      Instrmt_31.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_31_set.insert("CDSD");
      Instrmt_31.add_attribute("ListMeth", "0"); // 2
      Instrmt_31_set.insert("0");
      Instrmt_31.add_attribute("CapPx", "16827397.970000"); // 2
      Instrmt_31_set.insert("16827397.970000");
      Instrmt_31.add_attribute("FlrPx", "1611722.020000"); // 2
      Instrmt_31_set.insert("1611722.020000");
      Instrmt_31.add_attribute("PutCall", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("FlexInd", "true"); // 2
      Instrmt_31_set.insert("true");
      Instrmt_31.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_31_set.insert("true");
      Instrmt_31.add_attribute("TmUnit", "H"); // 2
      Instrmt_31_set.insert("H");
      Instrmt_31.add_attribute("CpnRt", "6709404.180000"); // 2
      Instrmt_31_set.insert("6709404.180000");
      Instrmt_31.add_attribute("Exch", "SecurityExchange_t_737916659"); // 2
      Instrmt_31_set.insert("SecurityExchange_t_737916659");
      Instrmt_31.add_attribute("PosLmt", "977448017"); // 2
      Instrmt_31_set.insert("977448017");
      Instrmt_31.add_attribute("NTPosLmt", "2141193647"); // 2
      Instrmt_31_set.insert("2141193647");
      Instrmt_31.add_attribute("Issr", "Issuer_t_1599264016"); // 2
      Instrmt_31_set.insert("Issuer_t_1599264016");
      Instrmt_31.add_attribute("EncIssrLen", "417051901"); // 2
      Instrmt_31_set.insert("417051901");
      Instrmt_31.add_attribute("EncIssr", "EncodedIssuer_t_656870897"); // 2
      Instrmt_31_set.insert("EncodedIssuer_t_656870897");
      Instrmt_31.add_attribute("Desc", "SecurityDesc_t_999358619"); // 2
      Instrmt_31_set.insert("SecurityDesc_t_999358619");
      Instrmt_31.add_attribute("EncSecDescLen", "1192039676"); // 2
      Instrmt_31_set.insert("1192039676");
      Instrmt_31.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_113232298"); // 2
      Instrmt_31_set.insert("EncodedSecurityDesc_t_113232298");
      Instrmt_31.add_attribute("Pool", "Pool_t_1113325028"); // 2
      Instrmt_31_set.insert("Pool_t_1113325028");
      Instrmt_31.add_attribute("CSetMo", "148042090"); // 2
      Instrmt_31_set.insert("148042090");
      Instrmt_31.add_attribute("CPPgm", "99"); // 2
      Instrmt_31_set.insert("99");
      Instrmt_31.add_attribute("CPRegT", "CPRegType_t_1567093998"); // 2
      Instrmt_31_set.insert("CPRegType_t_1567093998");
      Instrmt_31.add_attribute("Dated", "DatedDate_t_352894174"); // 2
      Instrmt_31_set.insert("DatedDate_t_352894174");
      Instrmt_31.add_attribute("IntAcrl", "InterestAccrualDate_t_1686505912"); // 2
      Instrmt_31_set.insert("InterestAccrualDate_t_1686505912");
      all_values.push_back(Instrmt_31_set);
      all_compo_names.insert("Instrmt_31_set");

      {
        xml_element AID_34{"AID"};
        multiset<string> AID_34_set;
        AID_34.add_attribute("AltID", "SecurityAltID_t_1760867764"); // 3
        AID_34_set.insert("SecurityAltID_t_1760867764");
        AID_34.add_attribute("AltIDSrc", "I"); // 3
        AID_34_set.insert("I");
        all_values.push_back(AID_34_set);
        all_compo_names.insert("AID_34_set");

        Instrmt_31.add_element(AID_34);
      }
      {
        xml_element SecXML_34{"SecXML"};
        multiset<string> SecXML_34_set;
        SecXML_34.add_attribute("Schema", "SecurityXMLSchema_t_1831495597"); // 3
        SecXML_34_set.insert("SecurityXMLSchema_t_1831495597");
        all_values.push_back(SecXML_34_set);
        all_compo_names.insert("SecXML_34_set");

        Instrmt_31.add_element(SecXML_34);
      }
      {
        xml_element Evnt_34{"Evnt"};
        multiset<string> Evnt_34_set;
        Evnt_34.add_attribute("EventTyp", "3"); // 3
        Evnt_34_set.insert("3");
        Evnt_34.add_attribute("Dt", "EventDate_t_673559787"); // 3
        Evnt_34_set.insert("EventDate_t_673559787");
        Evnt_34.add_attribute("Tm", "EventTime_t_795147299"); // 3
        Evnt_34_set.insert("EventTime_t_795147299");
        Evnt_34.add_attribute("Px", "15133854.170000"); // 3
        Evnt_34_set.insert("15133854.170000");
        Evnt_34.add_attribute("Txt", "EventText_t_1435660476"); // 3
        Evnt_34_set.insert("EventText_t_1435660476");
        all_values.push_back(Evnt_34_set);
        all_compo_names.insert("Evnt_34_set");

        Instrmt_31.add_element(Evnt_34);
      }
      {
        xml_element Pty_177{"Pty"};
        multiset<string> Pty_177_set;
        Pty_177.add_attribute("ID", "InstrumentPartyID_t_315336131"); // 3
        Pty_177_set.insert("InstrumentPartyID_t_315336131");
        Pty_177.add_attribute("Src", "G"); // 3
        Pty_177_set.insert("G");
        Pty_177.add_attribute("R", "73"); // 3
        Pty_177_set.insert("73");
        all_values.push_back(Pty_177_set);
        all_compo_names.insert("Pty_177_set");

        {
          xml_element Sub_177{"Sub"};
          multiset<string> Sub_177_set;
          Sub_177.add_attribute("ID", "InstrumentPartySubID_t_1897485872"); // 4
          Sub_177_set.insert("InstrumentPartySubID_t_1897485872");
          Sub_177.add_attribute("Typ", "10"); // 4
          Sub_177_set.insert("10");
          all_values.push_back(Sub_177_set);
          all_compo_names.insert("Sub_177_set");

          Pty_177.add_element(Sub_177);
        }
        Instrmt_31.add_element(Pty_177);
      }
      {
        xml_element CmplxEvnt_31{"CmplxEvnt"};
        multiset<string> CmplxEvnt_31_set;
        CmplxEvnt_31.add_attribute("Typ", "4"); // 3
        CmplxEvnt_31_set.insert("4");
        CmplxEvnt_31.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_910164307"); // 3
        CmplxEvnt_31_set.insert("ComplexOptPayoutAmount_t_910164307");
        CmplxEvnt_31.add_attribute("Px", "8110375.630000"); // 3
        CmplxEvnt_31_set.insert("8110375.630000");
        CmplxEvnt_31.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_31_set.insert("5");
        CmplxEvnt_31.add_attribute("PxBndryPrcsn", "18876123.240000"); // 3
        CmplxEvnt_31_set.insert("18876123.240000");
        CmplxEvnt_31.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_31_set.insert("2");
        CmplxEvnt_31.add_attribute("Cond", "1"); // 3
        CmplxEvnt_31_set.insert("1");
        all_values.push_back(CmplxEvnt_31_set);
        all_compo_names.insert("CmplxEvnt_31_set");

        {
          xml_element EvntDts_31{"EvntDts"};
          multiset<string> EvntDts_31_set;
          EvntDts_31.add_attribute("StartDt", "ComplexEventStartDate_t_157180577"); // 4
          EvntDts_31_set.insert("ComplexEventStartDate_t_157180577");
          EvntDts_31.add_attribute("EndDt", "ComplexEventEndDate_t_1461618459"); // 4
          EvntDts_31_set.insert("ComplexEventEndDate_t_1461618459");
          all_values.push_back(EvntDts_31_set);
          all_compo_names.insert("EvntDts_31_set");

          {
            xml_element EvntTms_31{"EvntTms"};
            multiset<string> EvntTms_31_set;
            EvntTms_31.add_attribute("StartTm", "1061893172"); // 5
            EvntTms_31_set.insert("1061893172");
            EvntTms_31.add_attribute("EndTm", "1349220253"); // 5
            EvntTms_31_set.insert("1349220253");
            all_values.push_back(EvntTms_31_set);
            all_compo_names.insert("EvntTms_31_set");

            EvntDts_31.add_element(EvntTms_31);
          }
          CmplxEvnt_31.add_element(EvntDts_31);
        }
        Instrmt_31.add_element(CmplxEvnt_31);
      }
      InstReq_0.add_element(Instrmt_31);
    }
    {
      xml_element Undly_43{"Undly"};
      multiset<string> Undly_43_set;
      Undly_43.add_attribute("Sym", "UnderlyingSymbol_t_1574850758"); // 2
      Undly_43_set.insert("UnderlyingSymbol_t_1574850758");
      Undly_43.add_attribute("Sfx", "CD"); // 2
      Undly_43_set.insert("CD");
      Undly_43.add_attribute("ID", "UnderlyingSecurityID_t_1497262343"); // 2
      Undly_43_set.insert("UnderlyingSecurityID_t_1497262343");
      Undly_43.add_attribute("Src", "G"); // 2
      Undly_43_set.insert("G");
      Undly_43.add_attribute("Prod", "13"); // 2
      Undly_43_set.insert("13");
      Undly_43.add_attribute("CFI", "UnderlyingCFICode_t_1850156517"); // 2
      Undly_43_set.insert("UnderlyingCFICode_t_1850156517");
      Undly_43.add_attribute("SecTyp", "SWING"); // 2
      Undly_43_set.insert("SWING");
      Undly_43.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1208212667"); // 2
      Undly_43_set.insert("UnderlyingSecuritySubType_t_1208212667");
      Undly_43.add_attribute("MMY", "1780795988"); // 2
      Undly_43_set.insert("1780795988");
      Undly_43.add_attribute("Mat", "UnderlyingMaturityDate_t_208461133"); // 2
      Undly_43_set.insert("UnderlyingMaturityDate_t_208461133");
      Undly_43.add_attribute("MatTm", "1613458769"); // 2
      Undly_43_set.insert("1613458769");
      Undly_43.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_306872128"); // 2
      Undly_43_set.insert("UnderlyingCouponPaymentDate_t_306872128");
      Undly_43.add_attribute("RestrctTyp", "FR"); // 2
      Undly_43_set.insert("FR");
      Undly_43.add_attribute("Snrty", "SD"); // 2
      Undly_43_set.insert("SD");
      Undly_43.add_attribute("NotlPctOut", "17425326.040000"); // 2
      Undly_43_set.insert("17425326.040000");
      Undly_43.add_attribute("OrigNotlPctOut", "13189445.640000"); // 2
      Undly_43_set.insert("13189445.640000");
      Undly_43.add_attribute("AttchPnt", "20280021.060000"); // 2
      Undly_43_set.insert("20280021.060000");
      Undly_43.add_attribute("DetchPnt", "11918816.350000"); // 2
      Undly_43_set.insert("11918816.350000");
      Undly_43.add_attribute("Issued", "UnderlyingIssueDate_t_1068946788"); // 2
      Undly_43_set.insert("UnderlyingIssueDate_t_1068946788");
      Undly_43.add_attribute("RepoCollSecTyp", "20615603"); // 2
      Undly_43_set.insert("20615603");
      Undly_43.add_attribute("RepoTrm", "1064719160"); // 2
      Undly_43_set.insert("1064719160");
      Undly_43.add_attribute("RepoRt", "19791110.950000"); // 2
      Undly_43_set.insert("19791110.950000");
      Undly_43.add_attribute("Fctr", "8316531.660000"); // 2
      Undly_43_set.insert("8316531.660000");
      Undly_43.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1675473344"); // 2
      Undly_43_set.insert("UnderlyingCreditRating_t_1675473344");
      Undly_43.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1719239772"); // 2
      Undly_43_set.insert("UnderlyingInstrRegistry_t_1719239772");
      Undly_43.add_attribute("Ctry", "1636400729"); // 2
      Undly_43_set.insert("1636400729");
      Undly_43.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1738007897"); // 2
      Undly_43_set.insert("UnderlyingStateOrProvinceOfIssue_t_1738007897");
      Undly_43.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1876420349"); // 2
      Undly_43_set.insert("UnderlyingLocaleOfIssue_t_1876420349");
      Undly_43.add_attribute("Redeem", "UnderlyingRedemptionDate_t_950535540"); // 2
      Undly_43_set.insert("UnderlyingRedemptionDate_t_950535540");
      Undly_43.add_attribute("StrkPx", "6524174.210000"); // 2
      Undly_43_set.insert("6524174.210000");
      Undly_43.add_attribute("StrkCcy", "USD"); // 2
      Undly_43_set.insert("USD");
      Undly_43.add_attribute("OptA", "680151973"); // 2
      Undly_43_set.insert("680151973");
      Undly_43.add_attribute("Mult", "4279356.500000"); // 2
      Undly_43_set.insert("4279356.500000");
      Undly_43.add_attribute("MultTyp", "0"); // 2
      Undly_43_set.insert("0");
      Undly_43.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_43_set.insert("1");
      Undly_43.add_attribute("UOM", "Gal"); // 2
      Undly_43_set.insert("Gal");
      Undly_43.add_attribute("UOMQty", "18877787.530000"); // 2
      Undly_43_set.insert("18877787.530000");
      Undly_43.add_attribute("PxUOM", "MWh"); // 2
      Undly_43_set.insert("MWh");
      Undly_43.add_attribute("PxUOMQty", "19114045.080000"); // 2
      Undly_43_set.insert("19114045.080000");
      Undly_43.add_attribute("TmUnit", "Yr"); // 2
      Undly_43_set.insert("Yr");
      Undly_43.add_attribute("ExerStyle", "2"); // 2
      Undly_43_set.insert("2");
      Undly_43.add_attribute("CpnRt", "707929.880000"); // 2
      Undly_43_set.insert("707929.880000");
      Undly_43.add_attribute("Exch", "UnderlyingSecurityExchange_t_952364671"); // 2
      Undly_43_set.insert("UnderlyingSecurityExchange_t_952364671");
      Undly_43.add_attribute("Issr", "UnderlyingIssuer_t_1781045204"); // 2
      Undly_43_set.insert("UnderlyingIssuer_t_1781045204");
      Undly_43.add_attribute("EncUndIssrLen", "1813325593"); // 2
      Undly_43_set.insert("1813325593");
      Undly_43.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_123825587"); // 2
      Undly_43_set.insert("EncodedUnderlyingIssuer_t_123825587");
      Undly_43.add_attribute("Desc", "UnderlyingSecurityDesc_t_1661563662"); // 2
      Undly_43_set.insert("UnderlyingSecurityDesc_t_1661563662");
      Undly_43.add_attribute("EncUndSecDescLen", "857723580"); // 2
      Undly_43_set.insert("857723580");
      Undly_43.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1192772375"); // 2
      Undly_43_set.insert("EncodedUnderlyingSecurityDesc_t_1192772375");
      Undly_43.add_attribute("CPPgm", "UnderlyingCPProgram_t_1682179265"); // 2
      Undly_43_set.insert("UnderlyingCPProgram_t_1682179265");
      Undly_43.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1922442741"); // 2
      Undly_43_set.insert("UnderlyingCPRegType_t_1922442741");
      Undly_43.add_attribute("AllocPct", "10243998.230000"); // 2
      Undly_43_set.insert("10243998.230000");
      Undly_43.add_attribute("Ccy", "CHF"); // 2
      Undly_43_set.insert("CHF");
      Undly_43.add_attribute("Qty", "5961559.470000"); // 2
      Undly_43_set.insert("5961559.470000");
      Undly_43.add_attribute("SettlTyp", "2"); // 2
      Undly_43_set.insert("2");
      Undly_43.add_attribute("CashAmt", "UnderlyingCashAmount_t_1040956686"); // 2
      Undly_43_set.insert("UnderlyingCashAmount_t_1040956686");
      Undly_43.add_attribute("CashTyp", "FIXED"); // 2
      Undly_43_set.insert("FIXED");
      Undly_43.add_attribute("Px", "8058014.050000"); // 2
      Undly_43_set.insert("8058014.050000");
      Undly_43.add_attribute("DirtPx", "16933741.070000"); // 2
      Undly_43_set.insert("16933741.070000");
      Undly_43.add_attribute("EndPx", "14032496.030000"); // 2
      Undly_43_set.insert("14032496.030000");
      Undly_43.add_attribute("StartVal", "UnderlyingStartValue_t_1183704056"); // 2
      Undly_43_set.insert("UnderlyingStartValue_t_1183704056");
      Undly_43.add_attribute("CurVal", "UnderlyingCurrentValue_t_226042433"); // 2
      Undly_43_set.insert("UnderlyingCurrentValue_t_226042433");
      Undly_43.add_attribute("EndVal", "UnderlyingEndValue_t_1831185254"); // 2
      Undly_43_set.insert("UnderlyingEndValue_t_1831185254");
      Undly_43.add_attribute("AdjQty", "3995499.780000"); // 2
      Undly_43_set.insert("3995499.780000");
      Undly_43.add_attribute("FxRate", "3535393.090000"); // 2
      Undly_43_set.insert("3535393.090000");
      Undly_43.add_attribute("FxRateCalc", "M"); // 2
      Undly_43_set.insert("M");
      Undly_43.add_attribute("CapValu", "UnderlyingCapValue_t_139845083"); // 2
      Undly_43_set.insert("UnderlyingCapValue_t_139845083");
      Undly_43.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1689248853"); // 2
      Undly_43_set.insert("UnderlyingSettlMethod_t_1689248853");
      Undly_43.add_attribute("PutCall", "1725714634"); // 2
      Undly_43_set.insert("1725714634");
      all_values.push_back(Undly_43_set);
      all_compo_names.insert("Undly_43_set");

      {
        xml_element UndAID_43{"UndAID"};
        multiset<string> UndAID_43_set;
        UndAID_43.add_attribute("AltID", "UnderlyingSecurityAltID_t_88601322"); // 3
        UndAID_43_set.insert("UnderlyingSecurityAltID_t_88601322");
        UndAID_43.add_attribute("AltIDSrc", "I"); // 3
        UndAID_43_set.insert("I");
        all_values.push_back(UndAID_43_set);
        all_compo_names.insert("UndAID_43_set");

        Undly_43.add_element(UndAID_43);
      }
      {
        xml_element Stip_70{"Stip"};
        multiset<string> Stip_70_set;
        Stip_70.add_attribute("Typ", "MAXSUBS"); // 3
        Stip_70_set.insert("MAXSUBS");
        Stip_70.add_attribute("Val", "UnderlyingStipValue_t_1040965993"); // 3
        Stip_70_set.insert("UnderlyingStipValue_t_1040965993");
        all_values.push_back(Stip_70_set);
        all_compo_names.insert("Stip_70_set");

        Undly_43.add_element(Stip_70);
      }
      {
        xml_element Pty_178{"Pty"};
        multiset<string> Pty_178_set;
        Pty_178.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2124495075"); // 3
        Pty_178_set.insert("UnderlyingInstrumentPartyID_t_2124495075");
        Pty_178.add_attribute("Src", "D"); // 3
        Pty_178_set.insert("D");
        Pty_178.add_attribute("R", "9"); // 3
        Pty_178_set.insert("9");
        all_values.push_back(Pty_178_set);
        all_compo_names.insert("Pty_178_set");

        {
          xml_element Sub_178{"Sub"};
          multiset<string> Sub_178_set;
          Sub_178.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1638575090"); // 4
          Sub_178_set.insert("UnderlyingInstrumentPartySubID_t_1638575090");
          Sub_178.add_attribute("Typ", "29"); // 4
          Sub_178_set.insert("29");
          all_values.push_back(Sub_178_set);
          all_compo_names.insert("Sub_178_set");

          Pty_178.add_element(Sub_178);
        }
        Undly_43.add_element(Pty_178);
      }
      InstReq_0.add_element(Undly_43);
    }
    {
      xml_element Leg_43{"Leg"};
      multiset<string> Leg_43_set;
      Leg_43.add_attribute("Sym", "LegSymbol_t_210080307"); // 2
      Leg_43_set.insert("LegSymbol_t_210080307");
      Leg_43.add_attribute("Sfx", "WI"); // 2
      Leg_43_set.insert("WI");
      Leg_43.add_attribute("ID", "LegSecurityID_t_2095032241"); // 2
      Leg_43_set.insert("LegSecurityID_t_2095032241");
      Leg_43.add_attribute("Src", "5"); // 2
      Leg_43_set.insert("5");
      Leg_43.add_attribute("Prod", "4"); // 2
      Leg_43_set.insert("4");
      Leg_43.add_attribute("CFI", "LegCFICode_t_1397981031"); // 2
      Leg_43_set.insert("LegCFICode_t_1397981031");
      Leg_43.add_attribute("SecTyp", "BRIDGE"); // 2
      Leg_43_set.insert("BRIDGE");
      Leg_43.add_attribute("SecSubTyp", "LegSecuritySubType_t_1394885356"); // 2
      Leg_43_set.insert("LegSecuritySubType_t_1394885356");
      Leg_43.add_attribute("MMY", "291454069"); // 2
      Leg_43_set.insert("291454069");
      Leg_43.add_attribute("Mat", "LegMaturityDate_t_8245078"); // 2
      Leg_43_set.insert("LegMaturityDate_t_8245078");
      Leg_43.add_attribute("MatTm", "53203114"); // 2
      Leg_43_set.insert("53203114");
      Leg_43.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1984828177"); // 2
      Leg_43_set.insert("LegCouponPaymentDate_t_1984828177");
      Leg_43.add_attribute("Issued", "LegIssueDate_t_1411494681"); // 2
      Leg_43_set.insert("LegIssueDate_t_1411494681");
      Leg_43.add_attribute("RepoCollSecTyp", "1236907170"); // 2
      Leg_43_set.insert("1236907170");
      Leg_43.add_attribute("RepoTrm", "63386962"); // 2
      Leg_43_set.insert("63386962");
      Leg_43.add_attribute("RepoRt", "10951962.870000"); // 2
      Leg_43_set.insert("10951962.870000");
      Leg_43.add_attribute("Fctr", "16364571.480000"); // 2
      Leg_43_set.insert("16364571.480000");
      Leg_43.add_attribute("CrdRtg", "LegCreditRating_t_416926271"); // 2
      Leg_43_set.insert("LegCreditRating_t_416926271");
      Leg_43.add_attribute("Rgstry", "LegInstrRegistry_t_909506413"); // 2
      Leg_43_set.insert("LegInstrRegistry_t_909506413");
      Leg_43.add_attribute("Ctry", "1776302231"); // 2
      Leg_43_set.insert("1776302231");
      Leg_43.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2106175125"); // 2
      Leg_43_set.insert("LegStateOrProvinceOfIssue_t_2106175125");
      Leg_43.add_attribute("Lcl", "LegLocaleOfIssue_t_487737400"); // 2
      Leg_43_set.insert("LegLocaleOfIssue_t_487737400");
      Leg_43.add_attribute("Redeem", "LegRedemptionDate_t_1864903553"); // 2
      Leg_43_set.insert("LegRedemptionDate_t_1864903553");
      Leg_43.add_attribute("Strk", "3021413.480000"); // 2
      Leg_43_set.insert("3021413.480000");
      Leg_43.add_attribute("StrkCcy", "JPY"); // 2
      Leg_43_set.insert("JPY");
      Leg_43.add_attribute("OptA", "279152775"); // 2
      Leg_43_set.insert("279152775");
      Leg_43.add_attribute("Cmult", "15991109.430000"); // 2
      Leg_43_set.insert("15991109.430000");
      Leg_43.add_attribute("MultTyp", "1"); // 2
      Leg_43_set.insert("1");
      Leg_43.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_43_set.insert("0");
      Leg_43.add_attribute("UOM", "MMbbl"); // 2
      Leg_43_set.insert("MMbbl");
      Leg_43.add_attribute("UOMQty", "21332577.860000"); // 2
      Leg_43_set.insert("21332577.860000");
      Leg_43.add_attribute("PxUOM", "Bbl"); // 2
      Leg_43_set.insert("Bbl");
      Leg_43.add_attribute("PxUOMQty", "17192490.370000"); // 2
      Leg_43_set.insert("17192490.370000");
      Leg_43.add_attribute("TmUnit", "H"); // 2
      Leg_43_set.insert("H");
      Leg_43.add_attribute("ExerStyle", "1"); // 2
      Leg_43_set.insert("1");
      Leg_43.add_attribute("CpnRt", "9697464.200000"); // 2
      Leg_43_set.insert("9697464.200000");
      Leg_43.add_attribute("Exch", "LegSecurityExchange_t_903406698"); // 2
      Leg_43_set.insert("LegSecurityExchange_t_903406698");
      Leg_43.add_attribute("Issr", "LegIssuer_t_1730536125"); // 2
      Leg_43_set.insert("LegIssuer_t_1730536125");
      Leg_43.add_attribute("EncLegIssrLen", "1261200489"); // 2
      Leg_43_set.insert("1261200489");
      Leg_43.add_attribute("EncLegIssr", "EncodedLegIssuer_t_911651776"); // 2
      Leg_43_set.insert("EncodedLegIssuer_t_911651776");
      Leg_43.add_attribute("Desc", "LegSecurityDesc_t_1783739239"); // 2
      Leg_43_set.insert("LegSecurityDesc_t_1783739239");
      Leg_43.add_attribute("EncLegSecDescLen", "1098545018"); // 2
      Leg_43_set.insert("1098545018");
      Leg_43.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_175662809"); // 2
      Leg_43_set.insert("EncodedLegSecurityDesc_t_175662809");
      Leg_43.add_attribute("RatioQty", "8731627.610000"); // 2
      Leg_43_set.insert("8731627.610000");
      Leg_43.add_attribute("Side", "D"); // 2
      Leg_43_set.insert("D");
      Leg_43.add_attribute("Ccy", "CHF"); // 2
      Leg_43_set.insert("CHF");
      Leg_43.add_attribute("Pool", "LegPool_t_1578858252"); // 2
      Leg_43_set.insert("LegPool_t_1578858252");
      Leg_43.add_attribute("Dated", "LegDatedDate_t_32881862"); // 2
      Leg_43_set.insert("LegDatedDate_t_32881862");
      Leg_43.add_attribute("CSetMo", "2138438492"); // 2
      Leg_43_set.insert("2138438492");
      Leg_43.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1537549729"); // 2
      Leg_43_set.insert("LegInterestAccrualDate_t_1537549729");
      Leg_43.add_attribute("PutCall", "520619262"); // 2
      Leg_43_set.insert("520619262");
      Leg_43.add_attribute("LegOptionRatio", "18558583.980000"); // 2
      Leg_43_set.insert("18558583.980000");
      Leg_43.add_attribute("Px", "18396910.770000"); // 2
      Leg_43_set.insert("18396910.770000");
      all_values.push_back(Leg_43_set);
      all_compo_names.insert("Leg_43_set");

      {
        xml_element LegAID_43{"LegAID"};
        multiset<string> LegAID_43_set;
        LegAID_43.add_attribute("SecAltID", "LegSecurityAltID_t_657380637"); // 3
        LegAID_43_set.insert("LegSecurityAltID_t_657380637");
        LegAID_43.add_attribute("SecAltIDSrc", "3"); // 3
        LegAID_43_set.insert("3");
        all_values.push_back(LegAID_43_set);
        all_compo_names.insert("LegAID_43_set");

        Leg_43.add_element(LegAID_43);
      }
      InstReq_0.add_element(Leg_43);
    }
    elt.add_element(InstReq_0);
  } // end InstReq
  { // InstReq
    xml_element InstReq_1{"InstReq"};
    multiset<string> InstReq_1_set;
    InstReq_1.add_attribute("Ccy", "JPY"); // 1
    InstReq_1_set.insert("JPY");
    InstReq_1.add_attribute("Typ", "3"); // 1
    InstReq_1_set.insert("3");
    InstReq_1.add_attribute("SettlTyp", "C"); // 1
    InstReq_1_set.insert("C");
    InstReq_1.add_attribute("SettlDt", "SettlDate_t_1880708376"); // 1
    InstReq_1_set.insert("SettlDate_t_1880708376");
    InstReq_1.add_attribute("Sz", "2282286.170000"); // 1
    InstReq_1_set.insert("2282286.170000");
    InstReq_1.add_attribute("MDStrmID", "MDStreamID_t_685119347"); // 1
    InstReq_1_set.insert("MDStreamID_t_685119347");
    all_values.push_back(InstReq_1_set);
    all_compo_names.insert("InstReq_1_set");

    {
      xml_element Instrmt_32{"Instrmt"};
      multiset<string> Instrmt_32_set;
      Instrmt_32.add_attribute("Sym", "Symbol_t_1452473765"); // 2
      Instrmt_32_set.insert("Symbol_t_1452473765");
      Instrmt_32.add_attribute("Sfx", "WI"); // 2
      Instrmt_32_set.insert("WI");
      Instrmt_32.add_attribute("ID", "SecurityID_t_1020770115"); // 2
      Instrmt_32_set.insert("SecurityID_t_1020770115");
      Instrmt_32.add_attribute("Src", "A"); // 2
      Instrmt_32_set.insert("A");
      Instrmt_32.add_attribute("Prod", "3"); // 2
      Instrmt_32_set.insert("3");
      Instrmt_32.add_attribute("ProdCmplx", "ProductComplex_t_603822592"); // 2
      Instrmt_32_set.insert("ProductComplex_t_603822592");
      Instrmt_32.add_attribute("SecGrp", "SecurityGroup_t_1535937026"); // 2
      Instrmt_32_set.insert("SecurityGroup_t_1535937026");
      Instrmt_32.add_attribute("CFI", "CFICode_t_1116057711"); // 2
      Instrmt_32_set.insert("CFICode_t_1116057711");
      Instrmt_32.add_attribute("SecTyp", "CAN"); // 2
      Instrmt_32_set.insert("CAN");
      Instrmt_32.add_attribute("SubTyp", "SecuritySubType_t_486998397"); // 2
      Instrmt_32_set.insert("SecuritySubType_t_486998397");
      Instrmt_32.add_attribute("MMY", "1291720521"); // 2
      Instrmt_32_set.insert("1291720521");
      Instrmt_32.add_attribute("MatDt", "MaturityDate_t_1113240944"); // 2
      Instrmt_32_set.insert("MaturityDate_t_1113240944");
      Instrmt_32.add_attribute("MatTm", "1648930377"); // 2
      Instrmt_32_set.insert("1648930377");
      Instrmt_32.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_415095970"); // 2
      Instrmt_32_set.insert("SettleOnOpenFlag_t_415095970");
      Instrmt_32.add_attribute("AsgnMeth", "1475377205"); // 2
      Instrmt_32_set.insert("1475377205");
      Instrmt_32.add_attribute("Status", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("CpnPmt", "CouponPaymentDate_t_447977832"); // 2
      Instrmt_32_set.insert("CouponPaymentDate_t_447977832");
      Instrmt_32.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_32_set.insert("MM");
      Instrmt_32.add_attribute("Snrty", "SD"); // 2
      Instrmt_32_set.insert("SD");
      Instrmt_32.add_attribute("NotlPctOut", "9685970.950000"); // 2
      Instrmt_32_set.insert("9685970.950000");
      Instrmt_32.add_attribute("OrigNotlPctOut", "11747068.000000"); // 2
      Instrmt_32_set.insert("11747068.000000");
      Instrmt_32.add_attribute("AttchPnt", "1625784.910000"); // 2
      Instrmt_32_set.insert("1625784.910000");
      Instrmt_32.add_attribute("DetchPnt", "16259777.320000"); // 2
      Instrmt_32_set.insert("16259777.320000");
      Instrmt_32.add_attribute("Issued", "IssueDate_t_1641467448"); // 2
      Instrmt_32_set.insert("IssueDate_t_1641467448");
      Instrmt_32.add_attribute("RepoCollSecTyp", "133938696"); // 2
      Instrmt_32_set.insert("133938696");
      Instrmt_32.add_attribute("RepoTrm", "1734985665"); // 2
      Instrmt_32_set.insert("1734985665");
      Instrmt_32.add_attribute("RepoRt", "18839219.270000"); // 2
      Instrmt_32_set.insert("18839219.270000");
      Instrmt_32.add_attribute("Fctr", "20230267.660000"); // 2
      Instrmt_32_set.insert("20230267.660000");
      Instrmt_32.add_attribute("CrdRtg", "CreditRating_t_1468210393"); // 2
      Instrmt_32_set.insert("CreditRating_t_1468210393");
      Instrmt_32.add_attribute("Rgstry", "InstrRegistry_t_2112150544"); // 2
      Instrmt_32_set.insert("InstrRegistry_t_2112150544");
      Instrmt_32.add_attribute("IssuCtry", "560662465"); // 2
      Instrmt_32_set.insert("560662465");
      Instrmt_32.add_attribute("StPrv", "StateOrProvinceOfIssue_t_773200510"); // 2
      Instrmt_32_set.insert("StateOrProvinceOfIssue_t_773200510");
      Instrmt_32.add_attribute("Lcl", "LocaleOfIssue_t_1413149782"); // 2
      Instrmt_32_set.insert("LocaleOfIssue_t_1413149782");
      Instrmt_32.add_attribute("Redeem", "RedemptionDate_t_1581432580"); // 2
      Instrmt_32_set.insert("RedemptionDate_t_1581432580");
      Instrmt_32.add_attribute("StrkPx", "10479370.470000"); // 2
      Instrmt_32_set.insert("10479370.470000");
      Instrmt_32.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_32_set.insert("EUR");
      Instrmt_32.add_attribute("StrkMult", "4363904.250000"); // 2
      Instrmt_32_set.insert("4363904.250000");
      Instrmt_32.add_attribute("StrkValu", "5861297.810000"); // 2
      Instrmt_32_set.insert("5861297.810000");
      Instrmt_32.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_32_set.insert("1");
      Instrmt_32.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_32_set.insert("3");
      Instrmt_32.add_attribute("StrkPxBndryPrcsn", "18778503.020000"); // 2
      Instrmt_32_set.insert("18778503.020000");
      Instrmt_32.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("OptAt", "424835552"); // 2
      Instrmt_32_set.insert("424835552");
      Instrmt_32.add_attribute("Mult", "1454626.240000"); // 2
      Instrmt_32_set.insert("1454626.240000");
      Instrmt_32.add_attribute("MultTyp", "1"); // 2
      Instrmt_32_set.insert("1");
      Instrmt_32.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_32_set.insert("3");
      Instrmt_32.add_attribute("MinPxIncr", "5934404.560000"); // 2
      Instrmt_32_set.insert("5934404.560000");
      Instrmt_32.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_37832612"); // 2
      Instrmt_32_set.insert("MinPriceIncrementAmount_t_37832612");
      Instrmt_32.add_attribute("UOM", "MMbbl"); // 2
      Instrmt_32_set.insert("MMbbl");
      Instrmt_32.add_attribute("UOMQty", "15620375.510000"); // 2
      Instrmt_32_set.insert("15620375.510000");
      Instrmt_32.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_32_set.insert("MMbbl");
      Instrmt_32.add_attribute("PxUOMQty", "21380900.870000"); // 2
      Instrmt_32_set.insert("21380900.870000");
      Instrmt_32.add_attribute("SettlMeth", "C"); // 2
      Instrmt_32_set.insert("C");
      Instrmt_32.add_attribute("ExerStyle", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_32_set.insert("1");
      Instrmt_32.add_attribute("OptPayAmt", "OptPayoutAmount_t_628033653"); // 2
      Instrmt_32_set.insert("OptPayoutAmount_t_628033653");
      Instrmt_32.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_32_set.insert("STD");
      Instrmt_32.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_32_set.insert("CDS");
      Instrmt_32.add_attribute("ListMeth", "0"); // 2
      Instrmt_32_set.insert("0");
      Instrmt_32.add_attribute("CapPx", "4076283.890000"); // 2
      Instrmt_32_set.insert("4076283.890000");
      Instrmt_32.add_attribute("FlrPx", "5607507.180000"); // 2
      Instrmt_32_set.insert("5607507.180000");
      Instrmt_32.add_attribute("PutCall", "0"); // 2
      Instrmt_32_set.insert("0");
      Instrmt_32.add_attribute("FlexInd", "false"); // 2
      Instrmt_32_set.insert("false");
      Instrmt_32.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_32_set.insert("false");
      Instrmt_32.add_attribute("TmUnit", "S"); // 2
      Instrmt_32_set.insert("S");
      Instrmt_32.add_attribute("CpnRt", "12908502.400000"); // 2
      Instrmt_32_set.insert("12908502.400000");
      Instrmt_32.add_attribute("Exch", "SecurityExchange_t_32471176"); // 2
      Instrmt_32_set.insert("SecurityExchange_t_32471176");
      Instrmt_32.add_attribute("PosLmt", "58804732"); // 2
      Instrmt_32_set.insert("58804732");
      Instrmt_32.add_attribute("NTPosLmt", "1876980021"); // 2
      Instrmt_32_set.insert("1876980021");
      Instrmt_32.add_attribute("Issr", "Issuer_t_310320884"); // 2
      Instrmt_32_set.insert("Issuer_t_310320884");
      Instrmt_32.add_attribute("EncIssrLen", "982193555"); // 2
      Instrmt_32_set.insert("982193555");
      Instrmt_32.add_attribute("EncIssr", "EncodedIssuer_t_1607346675"); // 2
      Instrmt_32_set.insert("EncodedIssuer_t_1607346675");
      Instrmt_32.add_attribute("Desc", "SecurityDesc_t_1701411537"); // 2
      Instrmt_32_set.insert("SecurityDesc_t_1701411537");
      Instrmt_32.add_attribute("EncSecDescLen", "1407029107"); // 2
      Instrmt_32_set.insert("1407029107");
      Instrmt_32.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1752809299"); // 2
      Instrmt_32_set.insert("EncodedSecurityDesc_t_1752809299");
      Instrmt_32.add_attribute("Pool", "Pool_t_272912100"); // 2
      Instrmt_32_set.insert("Pool_t_272912100");
      Instrmt_32.add_attribute("CSetMo", "764685992"); // 2
      Instrmt_32_set.insert("764685992");
      Instrmt_32.add_attribute("CPPgm", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("CPRegT", "CPRegType_t_310744712"); // 2
      Instrmt_32_set.insert("CPRegType_t_310744712");
      Instrmt_32.add_attribute("Dated", "DatedDate_t_592713940"); // 2
      Instrmt_32_set.insert("DatedDate_t_592713940");
      Instrmt_32.add_attribute("IntAcrl", "InterestAccrualDate_t_1760803659"); // 2
      Instrmt_32_set.insert("InterestAccrualDate_t_1760803659");
      all_values.push_back(Instrmt_32_set);
      all_compo_names.insert("Instrmt_32_set");

      {
        xml_element AID_35{"AID"};
        multiset<string> AID_35_set;
        AID_35.add_attribute("AltID", "SecurityAltID_t_1523284125"); // 3
        AID_35_set.insert("SecurityAltID_t_1523284125");
        AID_35.add_attribute("AltIDSrc", "H"); // 3
        AID_35_set.insert("H");
        all_values.push_back(AID_35_set);
        all_compo_names.insert("AID_35_set");

        Instrmt_32.add_element(AID_35);
      }
      {
        xml_element SecXML_35{"SecXML"};
        multiset<string> SecXML_35_set;
        SecXML_35.add_attribute("Schema", "SecurityXMLSchema_t_653851647"); // 3
        SecXML_35_set.insert("SecurityXMLSchema_t_653851647");
        all_values.push_back(SecXML_35_set);
        all_compo_names.insert("SecXML_35_set");

        Instrmt_32.add_element(SecXML_35);
      }
      {
        xml_element Evnt_35{"Evnt"};
        multiset<string> Evnt_35_set;
        Evnt_35.add_attribute("EventTyp", "11"); // 3
        Evnt_35_set.insert("11");
        Evnt_35.add_attribute("Dt", "EventDate_t_707865515"); // 3
        Evnt_35_set.insert("EventDate_t_707865515");
        Evnt_35.add_attribute("Tm", "EventTime_t_1281885300"); // 3
        Evnt_35_set.insert("EventTime_t_1281885300");
        Evnt_35.add_attribute("Px", "5252851.820000"); // 3
        Evnt_35_set.insert("5252851.820000");
        Evnt_35.add_attribute("Txt", "EventText_t_707953769"); // 3
        Evnt_35_set.insert("EventText_t_707953769");
        all_values.push_back(Evnt_35_set);
        all_compo_names.insert("Evnt_35_set");

        Instrmt_32.add_element(Evnt_35);
      }
      {
        xml_element Pty_179{"Pty"};
        multiset<string> Pty_179_set;
        Pty_179.add_attribute("ID", "InstrumentPartyID_t_1230645698"); // 3
        Pty_179_set.insert("InstrumentPartyID_t_1230645698");
        Pty_179.add_attribute("Src", "E"); // 3
        Pty_179_set.insert("E");
        Pty_179.add_attribute("R", "73"); // 3
        Pty_179_set.insert("73");
        all_values.push_back(Pty_179_set);
        all_compo_names.insert("Pty_179_set");

        {
          xml_element Sub_179{"Sub"};
          multiset<string> Sub_179_set;
          Sub_179.add_attribute("ID", "InstrumentPartySubID_t_1952606606"); // 4
          Sub_179_set.insert("InstrumentPartySubID_t_1952606606");
          Sub_179.add_attribute("Typ", "17"); // 4
          Sub_179_set.insert("17");
          all_values.push_back(Sub_179_set);
          all_compo_names.insert("Sub_179_set");

          Pty_179.add_element(Sub_179);
        }
        Instrmt_32.add_element(Pty_179);
      }
      {
        xml_element CmplxEvnt_32{"CmplxEvnt"};
        multiset<string> CmplxEvnt_32_set;
        CmplxEvnt_32.add_attribute("Typ", "6"); // 3
        CmplxEvnt_32_set.insert("6");
        CmplxEvnt_32.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1575020913"); // 3
        CmplxEvnt_32_set.insert("ComplexOptPayoutAmount_t_1575020913");
        CmplxEvnt_32.add_attribute("Px", "18970583.350000"); // 3
        CmplxEvnt_32_set.insert("18970583.350000");
        CmplxEvnt_32.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_32_set.insert("5");
        CmplxEvnt_32.add_attribute("PxBndryPrcsn", "16338256.460000"); // 3
        CmplxEvnt_32_set.insert("16338256.460000");
        CmplxEvnt_32.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_32_set.insert("3");
        CmplxEvnt_32.add_attribute("Cond", "2"); // 3
        CmplxEvnt_32_set.insert("2");
        all_values.push_back(CmplxEvnt_32_set);
        all_compo_names.insert("CmplxEvnt_32_set");

        {
          xml_element EvntDts_32{"EvntDts"};
          multiset<string> EvntDts_32_set;
          EvntDts_32.add_attribute("StartDt", "ComplexEventStartDate_t_468535553"); // 4
          EvntDts_32_set.insert("ComplexEventStartDate_t_468535553");
          EvntDts_32.add_attribute("EndDt", "ComplexEventEndDate_t_1086417736"); // 4
          EvntDts_32_set.insert("ComplexEventEndDate_t_1086417736");
          all_values.push_back(EvntDts_32_set);
          all_compo_names.insert("EvntDts_32_set");

          {
            xml_element EvntTms_32{"EvntTms"};
            multiset<string> EvntTms_32_set;
            EvntTms_32.add_attribute("StartTm", "1160124088"); // 5
            EvntTms_32_set.insert("1160124088");
            EvntTms_32.add_attribute("EndTm", "1875564660"); // 5
            EvntTms_32_set.insert("1875564660");
            all_values.push_back(EvntTms_32_set);
            all_compo_names.insert("EvntTms_32_set");

            EvntDts_32.add_element(EvntTms_32);
          }
          CmplxEvnt_32.add_element(EvntDts_32);
        }
        Instrmt_32.add_element(CmplxEvnt_32);
      }
      InstReq_1.add_element(Instrmt_32);
    }
    {
      xml_element Undly_44{"Undly"};
      multiset<string> Undly_44_set;
      Undly_44.add_attribute("Sym", "UnderlyingSymbol_t_691743387"); // 2
      Undly_44_set.insert("UnderlyingSymbol_t_691743387");
      Undly_44.add_attribute("Sfx", "CD"); // 2
      Undly_44_set.insert("CD");
      Undly_44.add_attribute("ID", "UnderlyingSecurityID_t_492767004"); // 2
      Undly_44_set.insert("UnderlyingSecurityID_t_492767004");
      Undly_44.add_attribute("Src", "8"); // 2
      Undly_44_set.insert("8");
      Undly_44.add_attribute("Prod", "2"); // 2
      Undly_44_set.insert("2");
      Undly_44.add_attribute("CFI", "UnderlyingCFICode_t_1085480945"); // 2
      Undly_44_set.insert("UnderlyingCFICode_t_1085480945");
      Undly_44.add_attribute("SecTyp", "STRUCT"); // 2
      Undly_44_set.insert("STRUCT");
      Undly_44.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1119581378"); // 2
      Undly_44_set.insert("UnderlyingSecuritySubType_t_1119581378");
      Undly_44.add_attribute("MMY", "1668801325"); // 2
      Undly_44_set.insert("1668801325");
      Undly_44.add_attribute("Mat", "UnderlyingMaturityDate_t_1157681154"); // 2
      Undly_44_set.insert("UnderlyingMaturityDate_t_1157681154");
      Undly_44.add_attribute("MatTm", "1201905068"); // 2
      Undly_44_set.insert("1201905068");
      Undly_44.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_229183192"); // 2
      Undly_44_set.insert("UnderlyingCouponPaymentDate_t_229183192");
      Undly_44.add_attribute("RestrctTyp", "XR"); // 2
      Undly_44_set.insert("XR");
      Undly_44.add_attribute("Snrty", "SR"); // 2
      Undly_44_set.insert("SR");
      Undly_44.add_attribute("NotlPctOut", "9371369.610000"); // 2
      Undly_44_set.insert("9371369.610000");
      Undly_44.add_attribute("OrigNotlPctOut", "15227285.050000"); // 2
      Undly_44_set.insert("15227285.050000");
      Undly_44.add_attribute("AttchPnt", "5126201.740000"); // 2
      Undly_44_set.insert("5126201.740000");
      Undly_44.add_attribute("DetchPnt", "583578.010000"); // 2
      Undly_44_set.insert("583578.010000");
      Undly_44.add_attribute("Issued", "UnderlyingIssueDate_t_1327851464"); // 2
      Undly_44_set.insert("UnderlyingIssueDate_t_1327851464");
      Undly_44.add_attribute("RepoCollSecTyp", "1118828268"); // 2
      Undly_44_set.insert("1118828268");
      Undly_44.add_attribute("RepoTrm", "1321761939"); // 2
      Undly_44_set.insert("1321761939");
      Undly_44.add_attribute("RepoRt", "7553887.290000"); // 2
      Undly_44_set.insert("7553887.290000");
      Undly_44.add_attribute("Fctr", "8684029.550000"); // 2
      Undly_44_set.insert("8684029.550000");
      Undly_44.add_attribute("CrdRtg", "UnderlyingCreditRating_t_470153606"); // 2
      Undly_44_set.insert("UnderlyingCreditRating_t_470153606");
      Undly_44.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_241730727"); // 2
      Undly_44_set.insert("UnderlyingInstrRegistry_t_241730727");
      Undly_44.add_attribute("Ctry", "347474016"); // 2
      Undly_44_set.insert("347474016");
      Undly_44.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2076349805"); // 2
      Undly_44_set.insert("UnderlyingStateOrProvinceOfIssue_t_2076349805");
      Undly_44.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_710266280"); // 2
      Undly_44_set.insert("UnderlyingLocaleOfIssue_t_710266280");
      Undly_44.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1433891752"); // 2
      Undly_44_set.insert("UnderlyingRedemptionDate_t_1433891752");
      Undly_44.add_attribute("StrkPx", "10889902.450000"); // 2
      Undly_44_set.insert("10889902.450000");
      Undly_44.add_attribute("StrkCcy", "EUR"); // 2
      Undly_44_set.insert("EUR");
      Undly_44.add_attribute("OptA", "374542786"); // 2
      Undly_44_set.insert("374542786");
      Undly_44.add_attribute("Mult", "9311142.970000"); // 2
      Undly_44_set.insert("9311142.970000");
      Undly_44.add_attribute("MultTyp", "1"); // 2
      Undly_44_set.insert("1");
      Undly_44.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_44_set.insert("2");
      Undly_44.add_attribute("UOM", "Alw"); // 2
      Undly_44_set.insert("Alw");
      Undly_44.add_attribute("UOMQty", "13724904.940000"); // 2
      Undly_44_set.insert("13724904.940000");
      Undly_44.add_attribute("PxUOM", "lbs"); // 2
      Undly_44_set.insert("lbs");
      Undly_44.add_attribute("PxUOMQty", "15379129.190000"); // 2
      Undly_44_set.insert("15379129.190000");
      Undly_44.add_attribute("TmUnit", "H"); // 2
      Undly_44_set.insert("H");
      Undly_44.add_attribute("ExerStyle", "2"); // 2
      Undly_44_set.insert("2");
      Undly_44.add_attribute("CpnRt", "17670961.110000"); // 2
      Undly_44_set.insert("17670961.110000");
      Undly_44.add_attribute("Exch", "UnderlyingSecurityExchange_t_674770807"); // 2
      Undly_44_set.insert("UnderlyingSecurityExchange_t_674770807");
      Undly_44.add_attribute("Issr", "UnderlyingIssuer_t_1872033087"); // 2
      Undly_44_set.insert("UnderlyingIssuer_t_1872033087");
      Undly_44.add_attribute("EncUndIssrLen", "556749425"); // 2
      Undly_44_set.insert("556749425");
      Undly_44.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_50015665"); // 2
      Undly_44_set.insert("EncodedUnderlyingIssuer_t_50015665");
      Undly_44.add_attribute("Desc", "UnderlyingSecurityDesc_t_237169613"); // 2
      Undly_44_set.insert("UnderlyingSecurityDesc_t_237169613");
      Undly_44.add_attribute("EncUndSecDescLen", "615107226"); // 2
      Undly_44_set.insert("615107226");
      Undly_44.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1377867129"); // 2
      Undly_44_set.insert("EncodedUnderlyingSecurityDesc_t_1377867129");
      Undly_44.add_attribute("CPPgm", "UnderlyingCPProgram_t_1355997882"); // 2
      Undly_44_set.insert("UnderlyingCPProgram_t_1355997882");
      Undly_44.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1936869165"); // 2
      Undly_44_set.insert("UnderlyingCPRegType_t_1936869165");
      Undly_44.add_attribute("AllocPct", "21332558.580000"); // 2
      Undly_44_set.insert("21332558.580000");
      Undly_44.add_attribute("Ccy", "CHF"); // 2
      Undly_44_set.insert("CHF");
      Undly_44.add_attribute("Qty", "2275029.380000"); // 2
      Undly_44_set.insert("2275029.380000");
      Undly_44.add_attribute("SettlTyp", "2"); // 2
      Undly_44_set.insert("2");
      Undly_44.add_attribute("CashAmt", "UnderlyingCashAmount_t_188405280"); // 2
      Undly_44_set.insert("UnderlyingCashAmount_t_188405280");
      Undly_44.add_attribute("CashTyp", "FIXED"); // 2
      Undly_44_set.insert("FIXED");
      Undly_44.add_attribute("Px", "18582829.570000"); // 2
      Undly_44_set.insert("18582829.570000");
      Undly_44.add_attribute("DirtPx", "12773955.260000"); // 2
      Undly_44_set.insert("12773955.260000");
      Undly_44.add_attribute("EndPx", "13761165.110000"); // 2
      Undly_44_set.insert("13761165.110000");
      Undly_44.add_attribute("StartVal", "UnderlyingStartValue_t_1836434449"); // 2
      Undly_44_set.insert("UnderlyingStartValue_t_1836434449");
      Undly_44.add_attribute("CurVal", "UnderlyingCurrentValue_t_1651938312"); // 2
      Undly_44_set.insert("UnderlyingCurrentValue_t_1651938312");
      Undly_44.add_attribute("EndVal", "UnderlyingEndValue_t_159747160"); // 2
      Undly_44_set.insert("UnderlyingEndValue_t_159747160");
      Undly_44.add_attribute("AdjQty", "5576117.880000"); // 2
      Undly_44_set.insert("5576117.880000");
      Undly_44.add_attribute("FxRate", "16227783.510000"); // 2
      Undly_44_set.insert("16227783.510000");
      Undly_44.add_attribute("FxRateCalc", "M"); // 2
      Undly_44_set.insert("M");
      Undly_44.add_attribute("CapValu", "UnderlyingCapValue_t_1930102282"); // 2
      Undly_44_set.insert("UnderlyingCapValue_t_1930102282");
      Undly_44.add_attribute("SetMeth", "UnderlyingSettlMethod_t_565716120"); // 2
      Undly_44_set.insert("UnderlyingSettlMethod_t_565716120");
      Undly_44.add_attribute("PutCall", "1566771673"); // 2
      Undly_44_set.insert("1566771673");
      all_values.push_back(Undly_44_set);
      all_compo_names.insert("Undly_44_set");

      {
        xml_element UndAID_44{"UndAID"};
        multiset<string> UndAID_44_set;
        UndAID_44.add_attribute("AltID", "UnderlyingSecurityAltID_t_165306634"); // 3
        UndAID_44_set.insert("UnderlyingSecurityAltID_t_165306634");
        UndAID_44.add_attribute("AltIDSrc", "A"); // 3
        UndAID_44_set.insert("A");
        all_values.push_back(UndAID_44_set);
        all_compo_names.insert("UndAID_44_set");

        Undly_44.add_element(UndAID_44);
      }
      {
        xml_element Stip_71{"Stip"};
        multiset<string> Stip_71_set;
        Stip_71.add_attribute("Typ", "WALA"); // 3
        Stip_71_set.insert("WALA");
        Stip_71.add_attribute("Val", "UnderlyingStipValue_t_840077442"); // 3
        Stip_71_set.insert("UnderlyingStipValue_t_840077442");
        all_values.push_back(Stip_71_set);
        all_compo_names.insert("Stip_71_set");

        Undly_44.add_element(Stip_71);
      }
      {
        xml_element Pty_180{"Pty"};
        multiset<string> Pty_180_set;
        Pty_180.add_attribute("ID", "UnderlyingInstrumentPartyID_t_435108396"); // 3
        Pty_180_set.insert("UnderlyingInstrumentPartyID_t_435108396");
        Pty_180.add_attribute("Src", "8"); // 3
        Pty_180_set.insert("8");
        Pty_180.add_attribute("R", "46"); // 3
        Pty_180_set.insert("46");
        all_values.push_back(Pty_180_set);
        all_compo_names.insert("Pty_180_set");

        {
          xml_element Sub_180{"Sub"};
          multiset<string> Sub_180_set;
          Sub_180.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_672278010"); // 4
          Sub_180_set.insert("UnderlyingInstrumentPartySubID_t_672278010");
          Sub_180.add_attribute("Typ", "33"); // 4
          Sub_180_set.insert("33");
          all_values.push_back(Sub_180_set);
          all_compo_names.insert("Sub_180_set");

          Pty_180.add_element(Sub_180);
        }
        Undly_44.add_element(Pty_180);
      }
      InstReq_1.add_element(Undly_44);
    }
    {
      xml_element Leg_44{"Leg"};
      multiset<string> Leg_44_set;
      Leg_44.add_attribute("Sym", "LegSymbol_t_120476588"); // 2
      Leg_44_set.insert("LegSymbol_t_120476588");
      Leg_44.add_attribute("Sfx", "CD"); // 2
      Leg_44_set.insert("CD");
      Leg_44.add_attribute("ID", "LegSecurityID_t_142657"); // 2
      Leg_44_set.insert("LegSecurityID_t_142657");
      Leg_44.add_attribute("Src", "J"); // 2
      Leg_44_set.insert("J");
      Leg_44.add_attribute("Prod", "13"); // 2
      Leg_44_set.insert("13");
      Leg_44.add_attribute("CFI", "LegCFICode_t_259681780"); // 2
      Leg_44_set.insert("LegCFICode_t_259681780");
      Leg_44.add_attribute("SecTyp", "SECPLEDGE"); // 2
      Leg_44_set.insert("SECPLEDGE");
      Leg_44.add_attribute("SecSubTyp", "LegSecuritySubType_t_382100639"); // 2
      Leg_44_set.insert("LegSecuritySubType_t_382100639");
      Leg_44.add_attribute("MMY", "448087061"); // 2
      Leg_44_set.insert("448087061");
      Leg_44.add_attribute("Mat", "LegMaturityDate_t_1271520955"); // 2
      Leg_44_set.insert("LegMaturityDate_t_1271520955");
      Leg_44.add_attribute("MatTm", "92899948"); // 2
      Leg_44_set.insert("92899948");
      Leg_44.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1725482587"); // 2
      Leg_44_set.insert("LegCouponPaymentDate_t_1725482587");
      Leg_44.add_attribute("Issued", "LegIssueDate_t_500153818"); // 2
      Leg_44_set.insert("LegIssueDate_t_500153818");
      Leg_44.add_attribute("RepoCollSecTyp", "1929334397"); // 2
      Leg_44_set.insert("1929334397");
      Leg_44.add_attribute("RepoTrm", "1229937251"); // 2
      Leg_44_set.insert("1229937251");
      Leg_44.add_attribute("RepoRt", "6599009.780000"); // 2
      Leg_44_set.insert("6599009.780000");
      Leg_44.add_attribute("Fctr", "3394625.370000"); // 2
      Leg_44_set.insert("3394625.370000");
      Leg_44.add_attribute("CrdRtg", "LegCreditRating_t_705231954"); // 2
      Leg_44_set.insert("LegCreditRating_t_705231954");
      Leg_44.add_attribute("Rgstry", "LegInstrRegistry_t_688759732"); // 2
      Leg_44_set.insert("LegInstrRegistry_t_688759732");
      Leg_44.add_attribute("Ctry", "122081171"); // 2
      Leg_44_set.insert("122081171");
      Leg_44.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1270948074"); // 2
      Leg_44_set.insert("LegStateOrProvinceOfIssue_t_1270948074");
      Leg_44.add_attribute("Lcl", "LegLocaleOfIssue_t_108047757"); // 2
      Leg_44_set.insert("LegLocaleOfIssue_t_108047757");
      Leg_44.add_attribute("Redeem", "LegRedemptionDate_t_287387806"); // 2
      Leg_44_set.insert("LegRedemptionDate_t_287387806");
      Leg_44.add_attribute("Strk", "19815070.310000"); // 2
      Leg_44_set.insert("19815070.310000");
      Leg_44.add_attribute("StrkCcy", "JPY"); // 2
      Leg_44_set.insert("JPY");
      Leg_44.add_attribute("OptA", "269131779"); // 2
      Leg_44_set.insert("269131779");
      Leg_44.add_attribute("Cmult", "8900818.070000"); // 2
      Leg_44_set.insert("8900818.070000");
      Leg_44.add_attribute("MultTyp", "2"); // 2
      Leg_44_set.insert("2");
      Leg_44.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_44_set.insert("4");
      Leg_44.add_attribute("UOM", "Alw"); // 2
      Leg_44_set.insert("Alw");
      Leg_44.add_attribute("UOMQty", "21380349.430000"); // 2
      Leg_44_set.insert("21380349.430000");
      Leg_44.add_attribute("PxUOM", "Gal"); // 2
      Leg_44_set.insert("Gal");
      Leg_44.add_attribute("PxUOMQty", "11009816.030000"); // 2
      Leg_44_set.insert("11009816.030000");
      Leg_44.add_attribute("TmUnit", "Mo"); // 2
      Leg_44_set.insert("Mo");
      Leg_44.add_attribute("ExerStyle", "0"); // 2
      Leg_44_set.insert("0");
      Leg_44.add_attribute("CpnRt", "13606633.840000"); // 2
      Leg_44_set.insert("13606633.840000");
      Leg_44.add_attribute("Exch", "LegSecurityExchange_t_430551830"); // 2
      Leg_44_set.insert("LegSecurityExchange_t_430551830");
      Leg_44.add_attribute("Issr", "LegIssuer_t_1162012106"); // 2
      Leg_44_set.insert("LegIssuer_t_1162012106");
      Leg_44.add_attribute("EncLegIssrLen", "1808750445"); // 2
      Leg_44_set.insert("1808750445");
      Leg_44.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1702072785"); // 2
      Leg_44_set.insert("EncodedLegIssuer_t_1702072785");
      Leg_44.add_attribute("Desc", "LegSecurityDesc_t_1254912054"); // 2
      Leg_44_set.insert("LegSecurityDesc_t_1254912054");
      Leg_44.add_attribute("EncLegSecDescLen", "1386749384"); // 2
      Leg_44_set.insert("1386749384");
      Leg_44.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_54742955"); // 2
      Leg_44_set.insert("EncodedLegSecurityDesc_t_54742955");
      Leg_44.add_attribute("RatioQty", "10367628.040000"); // 2
      Leg_44_set.insert("10367628.040000");
      Leg_44.add_attribute("Side", "C"); // 2
      Leg_44_set.insert("C");
      Leg_44.add_attribute("Ccy", "EUR"); // 2
      Leg_44_set.insert("EUR");
      Leg_44.add_attribute("Pool", "LegPool_t_1174434941"); // 2
      Leg_44_set.insert("LegPool_t_1174434941");
      Leg_44.add_attribute("Dated", "LegDatedDate_t_1403403665"); // 2
      Leg_44_set.insert("LegDatedDate_t_1403403665");
      Leg_44.add_attribute("CSetMo", "1498306513"); // 2
      Leg_44_set.insert("1498306513");
      Leg_44.add_attribute("IntAcrl", "LegInterestAccrualDate_t_297899367"); // 2
      Leg_44_set.insert("LegInterestAccrualDate_t_297899367");
      Leg_44.add_attribute("PutCall", "1511451422"); // 2
      Leg_44_set.insert("1511451422");
      Leg_44.add_attribute("LegOptionRatio", "17856943.190000"); // 2
      Leg_44_set.insert("17856943.190000");
      Leg_44.add_attribute("Px", "1319227.500000"); // 2
      Leg_44_set.insert("1319227.500000");
      all_values.push_back(Leg_44_set);
      all_compo_names.insert("Leg_44_set");

      {
        xml_element LegAID_44{"LegAID"};
        multiset<string> LegAID_44_set;
        LegAID_44.add_attribute("SecAltID", "LegSecurityAltID_t_658399667"); // 3
        LegAID_44_set.insert("LegSecurityAltID_t_658399667");
        LegAID_44.add_attribute("SecAltIDSrc", "L"); // 3
        LegAID_44_set.insert("L");
        all_values.push_back(LegAID_44_set);
        all_compo_names.insert("LegAID_44_set");

        Leg_44.add_element(LegAID_44);
      }
      InstReq_1.add_element(Leg_44);
    }
    elt.add_element(InstReq_1);
  } // end InstReq
  { // InstReq
    xml_element InstReq_2{"InstReq"};
    multiset<string> InstReq_2_set;
    InstReq_2.add_attribute("Ccy", "JPY"); // 1
    InstReq_2_set.insert("JPY");
    InstReq_2.add_attribute("Typ", "2"); // 1
    InstReq_2_set.insert("2");
    InstReq_2.add_attribute("SettlTyp", "7"); // 1
    InstReq_2_set.insert("7");
    InstReq_2.add_attribute("SettlDt", "SettlDate_t_501836773"); // 1
    InstReq_2_set.insert("SettlDate_t_501836773");
    InstReq_2.add_attribute("Sz", "6263019.210000"); // 1
    InstReq_2_set.insert("6263019.210000");
    InstReq_2.add_attribute("MDStrmID", "MDStreamID_t_17182704"); // 1
    InstReq_2_set.insert("MDStreamID_t_17182704");
    all_values.push_back(InstReq_2_set);
    all_compo_names.insert("InstReq_2_set");

    {
      xml_element Instrmt_33{"Instrmt"};
      multiset<string> Instrmt_33_set;
      Instrmt_33.add_attribute("Sym", "Symbol_t_1602818376"); // 2
      Instrmt_33_set.insert("Symbol_t_1602818376");
      Instrmt_33.add_attribute("Sfx", "CD"); // 2
      Instrmt_33_set.insert("CD");
      Instrmt_33.add_attribute("ID", "SecurityID_t_797094171"); // 2
      Instrmt_33_set.insert("SecurityID_t_797094171");
      Instrmt_33.add_attribute("Src", "7"); // 2
      Instrmt_33_set.insert("7");
      Instrmt_33.add_attribute("Prod", "2"); // 2
      Instrmt_33_set.insert("2");
      Instrmt_33.add_attribute("ProdCmplx", "ProductComplex_t_1959106277"); // 2
      Instrmt_33_set.insert("ProductComplex_t_1959106277");
      Instrmt_33.add_attribute("SecGrp", "SecurityGroup_t_477264909"); // 2
      Instrmt_33_set.insert("SecurityGroup_t_477264909");
      Instrmt_33.add_attribute("CFI", "CFICode_t_708242981"); // 2
      Instrmt_33_set.insert("CFICode_t_708242981");
      Instrmt_33.add_attribute("SecTyp", "RVLVTRM"); // 2
      Instrmt_33_set.insert("RVLVTRM");
      Instrmt_33.add_attribute("SubTyp", "SecuritySubType_t_1864014293"); // 2
      Instrmt_33_set.insert("SecuritySubType_t_1864014293");
      Instrmt_33.add_attribute("MMY", "762985936"); // 2
      Instrmt_33_set.insert("762985936");
      Instrmt_33.add_attribute("MatDt", "MaturityDate_t_2103297488"); // 2
      Instrmt_33_set.insert("MaturityDate_t_2103297488");
      Instrmt_33.add_attribute("MatTm", "185733632"); // 2
      Instrmt_33_set.insert("185733632");
      Instrmt_33.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1477629869"); // 2
      Instrmt_33_set.insert("SettleOnOpenFlag_t_1477629869");
      Instrmt_33.add_attribute("AsgnMeth", "1332039181"); // 2
      Instrmt_33_set.insert("1332039181");
      Instrmt_33.add_attribute("Status", "2"); // 2
      Instrmt_33_set.insert("2");
      Instrmt_33.add_attribute("CpnPmt", "CouponPaymentDate_t_733549886"); // 2
      Instrmt_33_set.insert("CouponPaymentDate_t_733549886");
      Instrmt_33.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_33_set.insert("MM");
      Instrmt_33.add_attribute("Snrty", "SR"); // 2
      Instrmt_33_set.insert("SR");
      Instrmt_33.add_attribute("NotlPctOut", "975176.600000"); // 2
      Instrmt_33_set.insert("975176.600000");
      Instrmt_33.add_attribute("OrigNotlPctOut", "3210727.170000"); // 2
      Instrmt_33_set.insert("3210727.170000");
      Instrmt_33.add_attribute("AttchPnt", "17899906.900000"); // 2
      Instrmt_33_set.insert("17899906.900000");
      Instrmt_33.add_attribute("DetchPnt", "7559173.280000"); // 2
      Instrmt_33_set.insert("7559173.280000");
      Instrmt_33.add_attribute("Issued", "IssueDate_t_1086748636"); // 2
      Instrmt_33_set.insert("IssueDate_t_1086748636");
      Instrmt_33.add_attribute("RepoCollSecTyp", "43561572"); // 2
      Instrmt_33_set.insert("43561572");
      Instrmt_33.add_attribute("RepoTrm", "156915154"); // 2
      Instrmt_33_set.insert("156915154");
      Instrmt_33.add_attribute("RepoRt", "17224992.620000"); // 2
      Instrmt_33_set.insert("17224992.620000");
      Instrmt_33.add_attribute("Fctr", "13860258.910000"); // 2
      Instrmt_33_set.insert("13860258.910000");
      Instrmt_33.add_attribute("CrdRtg", "CreditRating_t_658751927"); // 2
      Instrmt_33_set.insert("CreditRating_t_658751927");
      Instrmt_33.add_attribute("Rgstry", "InstrRegistry_t_201317535"); // 2
      Instrmt_33_set.insert("InstrRegistry_t_201317535");
      Instrmt_33.add_attribute("IssuCtry", "1403208595"); // 2
      Instrmt_33_set.insert("1403208595");
      Instrmt_33.add_attribute("StPrv", "StateOrProvinceOfIssue_t_114086656"); // 2
      Instrmt_33_set.insert("StateOrProvinceOfIssue_t_114086656");
      Instrmt_33.add_attribute("Lcl", "LocaleOfIssue_t_924419550"); // 2
      Instrmt_33_set.insert("LocaleOfIssue_t_924419550");
      Instrmt_33.add_attribute("Redeem", "RedemptionDate_t_52819119"); // 2
      Instrmt_33_set.insert("RedemptionDate_t_52819119");
      Instrmt_33.add_attribute("StrkPx", "9300847.680000"); // 2
      Instrmt_33_set.insert("9300847.680000");
      Instrmt_33.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_33_set.insert("GBP");
      Instrmt_33.add_attribute("StrkMult", "14073496.780000"); // 2
      Instrmt_33_set.insert("14073496.780000");
      Instrmt_33.add_attribute("StrkValu", "6388327.280000"); // 2
      Instrmt_33_set.insert("6388327.280000");
      Instrmt_33.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_33_set.insert("4");
      Instrmt_33.add_attribute("StrkPxBndryPrcsn", "14018186.640000"); // 2
      Instrmt_33_set.insert("14018186.640000");
      Instrmt_33.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("OptAt", "1309613956"); // 2
      Instrmt_33_set.insert("1309613956");
      Instrmt_33.add_attribute("Mult", "7319648.860000"); // 2
      Instrmt_33_set.insert("7319648.860000");
      Instrmt_33.add_attribute("MultTyp", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("MinPxIncr", "14655147.720000"); // 2
      Instrmt_33_set.insert("14655147.720000");
      Instrmt_33.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_754207852"); // 2
      Instrmt_33_set.insert("MinPriceIncrementAmount_t_754207852");
      Instrmt_33.add_attribute("UOM", "Alw"); // 2
      Instrmt_33_set.insert("Alw");
      Instrmt_33.add_attribute("UOMQty", "15630324.330000"); // 2
      Instrmt_33_set.insert("15630324.330000");
      Instrmt_33.add_attribute("PxUOM", "MWh"); // 2
      Instrmt_33_set.insert("MWh");
      Instrmt_33.add_attribute("PxUOMQty", "18228738.640000"); // 2
      Instrmt_33_set.insert("18228738.640000");
      Instrmt_33.add_attribute("SettlMeth", "P"); // 2
      Instrmt_33_set.insert("P");
      Instrmt_33.add_attribute("ExerStyle", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_33_set.insert("2");
      Instrmt_33.add_attribute("OptPayAmt", "OptPayoutAmount_t_328381267"); // 2
      Instrmt_33_set.insert("OptPayoutAmount_t_328381267");
      Instrmt_33.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_33_set.insert("INX");
      Instrmt_33.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_33_set.insert("CDSD");
      Instrmt_33.add_attribute("ListMeth", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("CapPx", "19383623.560000"); // 2
      Instrmt_33_set.insert("19383623.560000");
      Instrmt_33.add_attribute("FlrPx", "3607026.270000"); // 2
      Instrmt_33_set.insert("3607026.270000");
      Instrmt_33.add_attribute("PutCall", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("FlexInd", "true"); // 2
      Instrmt_33_set.insert("true");
      Instrmt_33.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_33_set.insert("true");
      Instrmt_33.add_attribute("TmUnit", "Min"); // 2
      Instrmt_33_set.insert("Min");
      Instrmt_33.add_attribute("CpnRt", "6458880.050000"); // 2
      Instrmt_33_set.insert("6458880.050000");
      Instrmt_33.add_attribute("Exch", "SecurityExchange_t_277963494"); // 2
      Instrmt_33_set.insert("SecurityExchange_t_277963494");
      Instrmt_33.add_attribute("PosLmt", "1291170649"); // 2
      Instrmt_33_set.insert("1291170649");
      Instrmt_33.add_attribute("NTPosLmt", "1284720733"); // 2
      Instrmt_33_set.insert("1284720733");
      Instrmt_33.add_attribute("Issr", "Issuer_t_1208939927"); // 2
      Instrmt_33_set.insert("Issuer_t_1208939927");
      Instrmt_33.add_attribute("EncIssrLen", "267567325"); // 2
      Instrmt_33_set.insert("267567325");
      Instrmt_33.add_attribute("EncIssr", "EncodedIssuer_t_539055749"); // 2
      Instrmt_33_set.insert("EncodedIssuer_t_539055749");
      Instrmt_33.add_attribute("Desc", "SecurityDesc_t_2095730199"); // 2
      Instrmt_33_set.insert("SecurityDesc_t_2095730199");
      Instrmt_33.add_attribute("EncSecDescLen", "1577181281"); // 2
      Instrmt_33_set.insert("1577181281");
      Instrmt_33.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1271020635"); // 2
      Instrmt_33_set.insert("EncodedSecurityDesc_t_1271020635");
      Instrmt_33.add_attribute("Pool", "Pool_t_19592357"); // 2
      Instrmt_33_set.insert("Pool_t_19592357");
      Instrmt_33.add_attribute("CSetMo", "2099480162"); // 2
      Instrmt_33_set.insert("2099480162");
      Instrmt_33.add_attribute("CPPgm", "99"); // 2
      Instrmt_33_set.insert("99");
      Instrmt_33.add_attribute("CPRegT", "CPRegType_t_773800210"); // 2
      Instrmt_33_set.insert("CPRegType_t_773800210");
      Instrmt_33.add_attribute("Dated", "DatedDate_t_2132363336"); // 2
      Instrmt_33_set.insert("DatedDate_t_2132363336");
      Instrmt_33.add_attribute("IntAcrl", "InterestAccrualDate_t_4600545"); // 2
      Instrmt_33_set.insert("InterestAccrualDate_t_4600545");
      all_values.push_back(Instrmt_33_set);
      all_compo_names.insert("Instrmt_33_set");

      {
        xml_element AID_36{"AID"};
        multiset<string> AID_36_set;
        AID_36.add_attribute("AltID", "SecurityAltID_t_1849080780"); // 3
        AID_36_set.insert("SecurityAltID_t_1849080780");
        AID_36.add_attribute("AltIDSrc", "2"); // 3
        AID_36_set.insert("2");
        all_values.push_back(AID_36_set);
        all_compo_names.insert("AID_36_set");

        Instrmt_33.add_element(AID_36);
      }
      {
        xml_element SecXML_36{"SecXML"};
        multiset<string> SecXML_36_set;
        SecXML_36.add_attribute("Schema", "SecurityXMLSchema_t_176066658"); // 3
        SecXML_36_set.insert("SecurityXMLSchema_t_176066658");
        all_values.push_back(SecXML_36_set);
        all_compo_names.insert("SecXML_36_set");

        Instrmt_33.add_element(SecXML_36);
      }
      {
        xml_element Evnt_36{"Evnt"};
        multiset<string> Evnt_36_set;
        Evnt_36.add_attribute("EventTyp", "18"); // 3
        Evnt_36_set.insert("18");
        Evnt_36.add_attribute("Dt", "EventDate_t_1526705341"); // 3
        Evnt_36_set.insert("EventDate_t_1526705341");
        Evnt_36.add_attribute("Tm", "EventTime_t_504447925"); // 3
        Evnt_36_set.insert("EventTime_t_504447925");
        Evnt_36.add_attribute("Px", "14531875.110000"); // 3
        Evnt_36_set.insert("14531875.110000");
        Evnt_36.add_attribute("Txt", "EventText_t_484199373"); // 3
        Evnt_36_set.insert("EventText_t_484199373");
        all_values.push_back(Evnt_36_set);
        all_compo_names.insert("Evnt_36_set");

        Instrmt_33.add_element(Evnt_36);
      }
      {
        xml_element Pty_181{"Pty"};
        multiset<string> Pty_181_set;
        Pty_181.add_attribute("ID", "InstrumentPartyID_t_1491581120"); // 3
        Pty_181_set.insert("InstrumentPartyID_t_1491581120");
        Pty_181.add_attribute("Src", "1"); // 3
        Pty_181_set.insert("1");
        Pty_181.add_attribute("R", "20"); // 3
        Pty_181_set.insert("20");
        all_values.push_back(Pty_181_set);
        all_compo_names.insert("Pty_181_set");

        {
          xml_element Sub_181{"Sub"};
          multiset<string> Sub_181_set;
          Sub_181.add_attribute("ID", "InstrumentPartySubID_t_445317323"); // 4
          Sub_181_set.insert("InstrumentPartySubID_t_445317323");
          Sub_181.add_attribute("Typ", "14"); // 4
          Sub_181_set.insert("14");
          all_values.push_back(Sub_181_set);
          all_compo_names.insert("Sub_181_set");

          Pty_181.add_element(Sub_181);
        }
        Instrmt_33.add_element(Pty_181);
      }
      {
        xml_element CmplxEvnt_33{"CmplxEvnt"};
        multiset<string> CmplxEvnt_33_set;
        CmplxEvnt_33.add_attribute("Typ", "7"); // 3
        CmplxEvnt_33_set.insert("7");
        CmplxEvnt_33.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_329138295"); // 3
        CmplxEvnt_33_set.insert("ComplexOptPayoutAmount_t_329138295");
        CmplxEvnt_33.add_attribute("Px", "4577688.350000"); // 3
        CmplxEvnt_33_set.insert("4577688.350000");
        CmplxEvnt_33.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_33_set.insert("1");
        CmplxEvnt_33.add_attribute("PxBndryPrcsn", "16203089.440000"); // 3
        CmplxEvnt_33_set.insert("16203089.440000");
        CmplxEvnt_33.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_33_set.insert("1");
        CmplxEvnt_33.add_attribute("Cond", "2"); // 3
        CmplxEvnt_33_set.insert("2");
        all_values.push_back(CmplxEvnt_33_set);
        all_compo_names.insert("CmplxEvnt_33_set");

        {
          xml_element EvntDts_33{"EvntDts"};
          multiset<string> EvntDts_33_set;
          EvntDts_33.add_attribute("StartDt", "ComplexEventStartDate_t_1887876269"); // 4
          EvntDts_33_set.insert("ComplexEventStartDate_t_1887876269");
          EvntDts_33.add_attribute("EndDt", "ComplexEventEndDate_t_134061670"); // 4
          EvntDts_33_set.insert("ComplexEventEndDate_t_134061670");
          all_values.push_back(EvntDts_33_set);
          all_compo_names.insert("EvntDts_33_set");

          {
            xml_element EvntTms_33{"EvntTms"};
            multiset<string> EvntTms_33_set;
            EvntTms_33.add_attribute("StartTm", "546090071"); // 5
            EvntTms_33_set.insert("546090071");
            EvntTms_33.add_attribute("EndTm", "1317573902"); // 5
            EvntTms_33_set.insert("1317573902");
            all_values.push_back(EvntTms_33_set);
            all_compo_names.insert("EvntTms_33_set");

            EvntDts_33.add_element(EvntTms_33);
          }
          CmplxEvnt_33.add_element(EvntDts_33);
        }
        Instrmt_33.add_element(CmplxEvnt_33);
      }
      InstReq_2.add_element(Instrmt_33);
    }
    {
      xml_element Undly_45{"Undly"};
      multiset<string> Undly_45_set;
      Undly_45.add_attribute("Sym", "UnderlyingSymbol_t_1405082305"); // 2
      Undly_45_set.insert("UnderlyingSymbol_t_1405082305");
      Undly_45.add_attribute("Sfx", "CD"); // 2
      Undly_45_set.insert("CD");
      Undly_45.add_attribute("ID", "UnderlyingSecurityID_t_1269570417"); // 2
      Undly_45_set.insert("UnderlyingSecurityID_t_1269570417");
      Undly_45.add_attribute("Src", "C"); // 2
      Undly_45_set.insert("C");
      Undly_45.add_attribute("Prod", "1"); // 2
      Undly_45_set.insert("1");
      Undly_45.add_attribute("CFI", "UnderlyingCFICode_t_1254450105"); // 2
      Undly_45_set.insert("UnderlyingCFICode_t_1254450105");
      Undly_45.add_attribute("SecTyp", "CMB"); // 2
      Undly_45_set.insert("CMB");
      Undly_45.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1041079770"); // 2
      Undly_45_set.insert("UnderlyingSecuritySubType_t_1041079770");
      Undly_45.add_attribute("MMY", "914720010"); // 2
      Undly_45_set.insert("914720010");
      Undly_45.add_attribute("Mat", "UnderlyingMaturityDate_t_27317620"); // 2
      Undly_45_set.insert("UnderlyingMaturityDate_t_27317620");
      Undly_45.add_attribute("MatTm", "757222461"); // 2
      Undly_45_set.insert("757222461");
      Undly_45.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_293941704"); // 2
      Undly_45_set.insert("UnderlyingCouponPaymentDate_t_293941704");
      Undly_45.add_attribute("RestrctTyp", "MM"); // 2
      Undly_45_set.insert("MM");
      Undly_45.add_attribute("Snrty", "SR"); // 2
      Undly_45_set.insert("SR");
      Undly_45.add_attribute("NotlPctOut", "7781410.770000"); // 2
      Undly_45_set.insert("7781410.770000");
      Undly_45.add_attribute("OrigNotlPctOut", "20233466.660000"); // 2
      Undly_45_set.insert("20233466.660000");
      Undly_45.add_attribute("AttchPnt", "13069925.440000"); // 2
      Undly_45_set.insert("13069925.440000");
      Undly_45.add_attribute("DetchPnt", "16230430.770000"); // 2
      Undly_45_set.insert("16230430.770000");
      Undly_45.add_attribute("Issued", "UnderlyingIssueDate_t_321180342"); // 2
      Undly_45_set.insert("UnderlyingIssueDate_t_321180342");
      Undly_45.add_attribute("RepoCollSecTyp", "1118873375"); // 2
      Undly_45_set.insert("1118873375");
      Undly_45.add_attribute("RepoTrm", "733983175"); // 2
      Undly_45_set.insert("733983175");
      Undly_45.add_attribute("RepoRt", "6503186.370000"); // 2
      Undly_45_set.insert("6503186.370000");
      Undly_45.add_attribute("Fctr", "15766422.100000"); // 2
      Undly_45_set.insert("15766422.100000");
      Undly_45.add_attribute("CrdRtg", "UnderlyingCreditRating_t_122886767"); // 2
      Undly_45_set.insert("UnderlyingCreditRating_t_122886767");
      Undly_45.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_123143933"); // 2
      Undly_45_set.insert("UnderlyingInstrRegistry_t_123143933");
      Undly_45.add_attribute("Ctry", "1171648131"); // 2
      Undly_45_set.insert("1171648131");
      Undly_45.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_720730287"); // 2
      Undly_45_set.insert("UnderlyingStateOrProvinceOfIssue_t_720730287");
      Undly_45.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2011020203"); // 2
      Undly_45_set.insert("UnderlyingLocaleOfIssue_t_2011020203");
      Undly_45.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1305709801"); // 2
      Undly_45_set.insert("UnderlyingRedemptionDate_t_1305709801");
      Undly_45.add_attribute("StrkPx", "12668203.580000"); // 2
      Undly_45_set.insert("12668203.580000");
      Undly_45.add_attribute("StrkCcy", "USD"); // 2
      Undly_45_set.insert("USD");
      Undly_45.add_attribute("OptA", "1832502786"); // 2
      Undly_45_set.insert("1832502786");
      Undly_45.add_attribute("Mult", "3031972.260000"); // 2
      Undly_45_set.insert("3031972.260000");
      Undly_45.add_attribute("MultTyp", "2"); // 2
      Undly_45_set.insert("2");
      Undly_45.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_45_set.insert("2");
      Undly_45.add_attribute("UOM", "lbs"); // 2
      Undly_45_set.insert("lbs");
      Undly_45.add_attribute("UOMQty", "2612098.380000"); // 2
      Undly_45_set.insert("2612098.380000");
      Undly_45.add_attribute("PxUOM", "Gal"); // 2
      Undly_45_set.insert("Gal");
      Undly_45.add_attribute("PxUOMQty", "3248836.940000"); // 2
      Undly_45_set.insert("3248836.940000");
      Undly_45.add_attribute("TmUnit", "D"); // 2
      Undly_45_set.insert("D");
      Undly_45.add_attribute("ExerStyle", "2"); // 2
      Undly_45_set.insert("2");
      Undly_45.add_attribute("CpnRt", "6188253.980000"); // 2
      Undly_45_set.insert("6188253.980000");
      Undly_45.add_attribute("Exch", "UnderlyingSecurityExchange_t_820293005"); // 2
      Undly_45_set.insert("UnderlyingSecurityExchange_t_820293005");
      Undly_45.add_attribute("Issr", "UnderlyingIssuer_t_738246685"); // 2
      Undly_45_set.insert("UnderlyingIssuer_t_738246685");
      Undly_45.add_attribute("EncUndIssrLen", "1396966475"); // 2
      Undly_45_set.insert("1396966475");
      Undly_45.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_696156023"); // 2
      Undly_45_set.insert("EncodedUnderlyingIssuer_t_696156023");
      Undly_45.add_attribute("Desc", "UnderlyingSecurityDesc_t_2045239229"); // 2
      Undly_45_set.insert("UnderlyingSecurityDesc_t_2045239229");
      Undly_45.add_attribute("EncUndSecDescLen", "872525904"); // 2
      Undly_45_set.insert("872525904");
      Undly_45.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1017336365"); // 2
      Undly_45_set.insert("EncodedUnderlyingSecurityDesc_t_1017336365");
      Undly_45.add_attribute("CPPgm", "UnderlyingCPProgram_t_1016628956"); // 2
      Undly_45_set.insert("UnderlyingCPProgram_t_1016628956");
      Undly_45.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1606509079"); // 2
      Undly_45_set.insert("UnderlyingCPRegType_t_1606509079");
      Undly_45.add_attribute("AllocPct", "16676550.020000"); // 2
      Undly_45_set.insert("16676550.020000");
      Undly_45.add_attribute("Ccy", "EUR"); // 2
      Undly_45_set.insert("EUR");
      Undly_45.add_attribute("Qty", "17907989.360000"); // 2
      Undly_45_set.insert("17907989.360000");
      Undly_45.add_attribute("SettlTyp", "5"); // 2
      Undly_45_set.insert("5");
      Undly_45.add_attribute("CashAmt", "UnderlyingCashAmount_t_302642486"); // 2
      Undly_45_set.insert("UnderlyingCashAmount_t_302642486");
      Undly_45.add_attribute("CashTyp", "DIFF"); // 2
      Undly_45_set.insert("DIFF");
      Undly_45.add_attribute("Px", "7756618.030000"); // 2
      Undly_45_set.insert("7756618.030000");
      Undly_45.add_attribute("DirtPx", "15694628.440000"); // 2
      Undly_45_set.insert("15694628.440000");
      Undly_45.add_attribute("EndPx", "6879623.000000"); // 2
      Undly_45_set.insert("6879623.000000");
      Undly_45.add_attribute("StartVal", "UnderlyingStartValue_t_1338970261"); // 2
      Undly_45_set.insert("UnderlyingStartValue_t_1338970261");
      Undly_45.add_attribute("CurVal", "UnderlyingCurrentValue_t_1254481982"); // 2
      Undly_45_set.insert("UnderlyingCurrentValue_t_1254481982");
      Undly_45.add_attribute("EndVal", "UnderlyingEndValue_t_991159527"); // 2
      Undly_45_set.insert("UnderlyingEndValue_t_991159527");
      Undly_45.add_attribute("AdjQty", "17489291.370000"); // 2
      Undly_45_set.insert("17489291.370000");
      Undly_45.add_attribute("FxRate", "1315001.110000"); // 2
      Undly_45_set.insert("1315001.110000");
      Undly_45.add_attribute("FxRateCalc", "D"); // 2
      Undly_45_set.insert("D");
      Undly_45.add_attribute("CapValu", "UnderlyingCapValue_t_2010138976"); // 2
      Undly_45_set.insert("UnderlyingCapValue_t_2010138976");
      Undly_45.add_attribute("SetMeth", "UnderlyingSettlMethod_t_49598011"); // 2
      Undly_45_set.insert("UnderlyingSettlMethod_t_49598011");
      Undly_45.add_attribute("PutCall", "726206905"); // 2
      Undly_45_set.insert("726206905");
      all_values.push_back(Undly_45_set);
      all_compo_names.insert("Undly_45_set");

      {
        xml_element UndAID_45{"UndAID"};
        multiset<string> UndAID_45_set;
        UndAID_45.add_attribute("AltID", "UnderlyingSecurityAltID_t_151182787"); // 3
        UndAID_45_set.insert("UnderlyingSecurityAltID_t_151182787");
        UndAID_45.add_attribute("AltIDSrc", "2"); // 3
        UndAID_45_set.insert("2");
        all_values.push_back(UndAID_45_set);
        all_compo_names.insert("UndAID_45_set");

        Undly_45.add_element(UndAID_45);
      }
      {
        xml_element Stip_72{"Stip"};
        multiset<string> Stip_72_set;
        Stip_72.add_attribute("Typ", "ROLLTYPE"); // 3
        Stip_72_set.insert("ROLLTYPE");
        Stip_72.add_attribute("Val", "UnderlyingStipValue_t_971475792"); // 3
        Stip_72_set.insert("UnderlyingStipValue_t_971475792");
        all_values.push_back(Stip_72_set);
        all_compo_names.insert("Stip_72_set");

        Undly_45.add_element(Stip_72);
      }
      {
        xml_element Pty_182{"Pty"};
        multiset<string> Pty_182_set;
        Pty_182.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1463165056"); // 3
        Pty_182_set.insert("UnderlyingInstrumentPartyID_t_1463165056");
        Pty_182.add_attribute("Src", "8"); // 3
        Pty_182_set.insert("8");
        Pty_182.add_attribute("R", "61"); // 3
        Pty_182_set.insert("61");
        all_values.push_back(Pty_182_set);
        all_compo_names.insert("Pty_182_set");

        {
          xml_element Sub_182{"Sub"};
          multiset<string> Sub_182_set;
          Sub_182.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1360920638"); // 4
          Sub_182_set.insert("UnderlyingInstrumentPartySubID_t_1360920638");
          Sub_182.add_attribute("Typ", "33"); // 4
          Sub_182_set.insert("33");
          all_values.push_back(Sub_182_set);
          all_compo_names.insert("Sub_182_set");

          Pty_182.add_element(Sub_182);
        }
        Undly_45.add_element(Pty_182);
      }
      InstReq_2.add_element(Undly_45);
    }
    {
      xml_element Leg_45{"Leg"};
      multiset<string> Leg_45_set;
      Leg_45.add_attribute("Sym", "LegSymbol_t_537484533"); // 2
      Leg_45_set.insert("LegSymbol_t_537484533");
      Leg_45.add_attribute("Sfx", "CD"); // 2
      Leg_45_set.insert("CD");
      Leg_45.add_attribute("ID", "LegSecurityID_t_926066467"); // 2
      Leg_45_set.insert("LegSecurityID_t_926066467");
      Leg_45.add_attribute("Src", "4"); // 2
      Leg_45_set.insert("4");
      Leg_45.add_attribute("Prod", "10"); // 2
      Leg_45_set.insert("10");
      Leg_45.add_attribute("CFI", "LegCFICode_t_507978666"); // 2
      Leg_45_set.insert("LegCFICode_t_507978666");
      Leg_45.add_attribute("SecTyp", "MPT"); // 2
      Leg_45_set.insert("MPT");
      Leg_45.add_attribute("SecSubTyp", "LegSecuritySubType_t_145805467"); // 2
      Leg_45_set.insert("LegSecuritySubType_t_145805467");
      Leg_45.add_attribute("MMY", "810621152"); // 2
      Leg_45_set.insert("810621152");
      Leg_45.add_attribute("Mat", "LegMaturityDate_t_1355306666"); // 2
      Leg_45_set.insert("LegMaturityDate_t_1355306666");
      Leg_45.add_attribute("MatTm", "921467270"); // 2
      Leg_45_set.insert("921467270");
      Leg_45.add_attribute("CpnPmt", "LegCouponPaymentDate_t_232600348"); // 2
      Leg_45_set.insert("LegCouponPaymentDate_t_232600348");
      Leg_45.add_attribute("Issued", "LegIssueDate_t_2043268967"); // 2
      Leg_45_set.insert("LegIssueDate_t_2043268967");
      Leg_45.add_attribute("RepoCollSecTyp", "112953884"); // 2
      Leg_45_set.insert("112953884");
      Leg_45.add_attribute("RepoTrm", "1487082331"); // 2
      Leg_45_set.insert("1487082331");
      Leg_45.add_attribute("RepoRt", "8869448.460000"); // 2
      Leg_45_set.insert("8869448.460000");
      Leg_45.add_attribute("Fctr", "18618830.210000"); // 2
      Leg_45_set.insert("18618830.210000");
      Leg_45.add_attribute("CrdRtg", "LegCreditRating_t_1618582442"); // 2
      Leg_45_set.insert("LegCreditRating_t_1618582442");
      Leg_45.add_attribute("Rgstry", "LegInstrRegistry_t_1288268057"); // 2
      Leg_45_set.insert("LegInstrRegistry_t_1288268057");
      Leg_45.add_attribute("Ctry", "1724538349"); // 2
      Leg_45_set.insert("1724538349");
      Leg_45.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1668180453"); // 2
      Leg_45_set.insert("LegStateOrProvinceOfIssue_t_1668180453");
      Leg_45.add_attribute("Lcl", "LegLocaleOfIssue_t_2014474962"); // 2
      Leg_45_set.insert("LegLocaleOfIssue_t_2014474962");
      Leg_45.add_attribute("Redeem", "LegRedemptionDate_t_1875721136"); // 2
      Leg_45_set.insert("LegRedemptionDate_t_1875721136");
      Leg_45.add_attribute("Strk", "2456151.770000"); // 2
      Leg_45_set.insert("2456151.770000");
      Leg_45.add_attribute("StrkCcy", "USD"); // 2
      Leg_45_set.insert("USD");
      Leg_45.add_attribute("OptA", "1708780233"); // 2
      Leg_45_set.insert("1708780233");
      Leg_45.add_attribute("Cmult", "18065387.500000"); // 2
      Leg_45_set.insert("18065387.500000");
      Leg_45.add_attribute("MultTyp", "1"); // 2
      Leg_45_set.insert("1");
      Leg_45.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_45_set.insert("3");
      Leg_45.add_attribute("UOM", "Bu"); // 2
      Leg_45_set.insert("Bu");
      Leg_45.add_attribute("UOMQty", "7573459.810000"); // 2
      Leg_45_set.insert("7573459.810000");
      Leg_45.add_attribute("PxUOM", "Alw"); // 2
      Leg_45_set.insert("Alw");
      Leg_45.add_attribute("PxUOMQty", "20521626.050000"); // 2
      Leg_45_set.insert("20521626.050000");
      Leg_45.add_attribute("TmUnit", "H"); // 2
      Leg_45_set.insert("H");
      Leg_45.add_attribute("ExerStyle", "1"); // 2
      Leg_45_set.insert("1");
      Leg_45.add_attribute("CpnRt", "4126576.240000"); // 2
      Leg_45_set.insert("4126576.240000");
      Leg_45.add_attribute("Exch", "LegSecurityExchange_t_515973044"); // 2
      Leg_45_set.insert("LegSecurityExchange_t_515973044");
      Leg_45.add_attribute("Issr", "LegIssuer_t_1973942103"); // 2
      Leg_45_set.insert("LegIssuer_t_1973942103");
      Leg_45.add_attribute("EncLegIssrLen", "1223278776"); // 2
      Leg_45_set.insert("1223278776");
      Leg_45.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1871279710"); // 2
      Leg_45_set.insert("EncodedLegIssuer_t_1871279710");
      Leg_45.add_attribute("Desc", "LegSecurityDesc_t_747925725"); // 2
      Leg_45_set.insert("LegSecurityDesc_t_747925725");
      Leg_45.add_attribute("EncLegSecDescLen", "1455879125"); // 2
      Leg_45_set.insert("1455879125");
      Leg_45.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1767065029"); // 2
      Leg_45_set.insert("EncodedLegSecurityDesc_t_1767065029");
      Leg_45.add_attribute("RatioQty", "8608796.090000"); // 2
      Leg_45_set.insert("8608796.090000");
      Leg_45.add_attribute("Side", "1"); // 2
      Leg_45_set.insert("1");
      Leg_45.add_attribute("Ccy", "CHF"); // 2
      Leg_45_set.insert("CHF");
      Leg_45.add_attribute("Pool", "LegPool_t_266576602"); // 2
      Leg_45_set.insert("LegPool_t_266576602");
      Leg_45.add_attribute("Dated", "LegDatedDate_t_1794794284"); // 2
      Leg_45_set.insert("LegDatedDate_t_1794794284");
      Leg_45.add_attribute("CSetMo", "152333684"); // 2
      Leg_45_set.insert("152333684");
      Leg_45.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1934757056"); // 2
      Leg_45_set.insert("LegInterestAccrualDate_t_1934757056");
      Leg_45.add_attribute("PutCall", "1661785599"); // 2
      Leg_45_set.insert("1661785599");
      Leg_45.add_attribute("LegOptionRatio", "20280548.210000"); // 2
      Leg_45_set.insert("20280548.210000");
      Leg_45.add_attribute("Px", "328885.850000"); // 2
      Leg_45_set.insert("328885.850000");
      all_values.push_back(Leg_45_set);
      all_compo_names.insert("Leg_45_set");

      {
        xml_element LegAID_45{"LegAID"};
        multiset<string> LegAID_45_set;
        LegAID_45.add_attribute("SecAltID", "LegSecurityAltID_t_726325569"); // 3
        LegAID_45_set.insert("LegSecurityAltID_t_726325569");
        LegAID_45.add_attribute("SecAltIDSrc", "2"); // 3
        LegAID_45_set.insert("2");
        all_values.push_back(LegAID_45_set);
        all_compo_names.insert("LegAID_45_set");

        Leg_45.add_element(LegAID_45);
      }
      InstReq_2.add_element(Leg_45);
    }
    elt.add_element(InstReq_2);
  } // end InstReq
  { // TrdSes
    xml_element TrdSes_1{"TrdSes"};
    multiset<string> TrdSes_1_set;
    TrdSes_1.add_attribute("SesID", "6"); // 1
    TrdSes_1_set.insert("6");
    TrdSes_1.add_attribute("SesSub", "3"); // 1
    TrdSes_1_set.insert("3");
    all_values.push_back(TrdSes_1_set);
    all_compo_names.insert("TrdSes_1_set");

    elt.add_element(TrdSes_1);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_2{"TrdSes"};
    multiset<string> TrdSes_2_set;
    TrdSes_2.add_attribute("SesID", "5"); // 1
    TrdSes_2_set.insert("5");
    TrdSes_2.add_attribute("SesSub", "4"); // 1
    TrdSes_2_set.insert("4");
    all_values.push_back(TrdSes_2_set);
    all_compo_names.insert("TrdSes_2_set");

    elt.add_element(TrdSes_2);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_3{"TrdSes"};
    multiset<string> TrdSes_3_set;
    TrdSes_3.add_attribute("SesID", "3"); // 1
    TrdSes_3_set.insert("3");
    TrdSes_3.add_attribute("SesSub", "1"); // 1
    TrdSes_3_set.insert("1");
    all_values.push_back(TrdSes_3_set);
    all_compo_names.insert("TrdSes_3_set");

    elt.add_element(TrdSes_3);
  } // end TrdSes
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
