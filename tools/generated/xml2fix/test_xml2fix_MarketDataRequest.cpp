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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequest_message_t_0;
  elt.add_attribute("ReqID", "MDReqID_t_290412466"); // 0
  MarketDataRequest_message_t_0.insert("MDReqID_t_290412466");
  elt.add_attribute("SubReqTyp", "2"); // 0
  MarketDataRequest_message_t_0.insert("2");
  elt.add_attribute("MktDepth", "816783311"); // 0
  MarketDataRequest_message_t_0.insert("816783311");
  elt.add_attribute("UpdtTyp", "0"); // 0
  MarketDataRequest_message_t_0.insert("0");
  elt.add_attribute("AggBook", "Y"); // 0
  MarketDataRequest_message_t_0.insert("Y");
  elt.add_attribute("OpenClsSettlFlag", "2"); // 0
  MarketDataRequest_message_t_0.insert("2");
  elt.add_attribute("Scope", "2"); // 0
  MarketDataRequest_message_t_0.insert("2");
  elt.add_attribute("ImplctDel", "N"); // 0
  MarketDataRequest_message_t_0.insert("N");
  elt.add_attribute("ApplQuActn", "0"); // 0
  MarketDataRequest_message_t_0.insert("0");
  elt.add_attribute("ApplQuMax", "451675037"); // 0
  MarketDataRequest_message_t_0.insert("451675037");
  elt.add_attribute("MDQteTyp", "1"); // 0
  MarketDataRequest_message_t_0.insert("1");
  all_values.push_back(MarketDataRequest_message_t_0);
  all_compo_names.insert("MarketDataRequest_message_t");

  { // Hdr
    xml_element Hdr_40{"Hdr"};
    multiset<string> Hdr_40_set;
    Hdr_40.add_attribute("SeqNum", "937452253"); // 1
    Hdr_40_set.insert("937452253");
    Hdr_40.add_attribute("SID", "SenderCompID_t_2021562935"); // 1
    Hdr_40_set.insert("SenderCompID_t_2021562935");
    Hdr_40.add_attribute("TID", "TargetCompID_t_45871051"); // 1
    Hdr_40_set.insert("TargetCompID_t_45871051");
    Hdr_40.add_attribute("OBID", "OnBehalfOfCompID_t_1818398715"); // 1
    Hdr_40_set.insert("OnBehalfOfCompID_t_1818398715");
    Hdr_40.add_attribute("D2ID", "DeliverToCompID_t_1190624314"); // 1
    Hdr_40_set.insert("DeliverToCompID_t_1190624314");
    Hdr_40.add_attribute("SSub", "SenderSubID_t_655993497"); // 1
    Hdr_40_set.insert("SenderSubID_t_655993497");
    Hdr_40.add_attribute("SLoc", "SenderLocationID_t_1468872740"); // 1
    Hdr_40_set.insert("SenderLocationID_t_1468872740");
    Hdr_40.add_attribute("TSub", "TargetSubID_t_1228422048"); // 1
    Hdr_40_set.insert("TargetSubID_t_1228422048");
    Hdr_40.add_attribute("TLoc", "TargetLocationID_t_1575124140"); // 1
    Hdr_40_set.insert("TargetLocationID_t_1575124140");
    Hdr_40.add_attribute("OBSub", "OnBehalfOfSubID_t_1396000727"); // 1
    Hdr_40_set.insert("OnBehalfOfSubID_t_1396000727");
    Hdr_40.add_attribute("OBLoc", "OnBehalfOfLocationID_t_640395011"); // 1
    Hdr_40_set.insert("OnBehalfOfLocationID_t_640395011");
    Hdr_40.add_attribute("D2Sub", "DeliverToSubID_t_58518738"); // 1
    Hdr_40_set.insert("DeliverToSubID_t_58518738");
    Hdr_40.add_attribute("D2Loc", "DeliverToLocationID_t_297052732"); // 1
    Hdr_40_set.insert("DeliverToLocationID_t_297052732");
    Hdr_40.add_attribute("PosDup", "N"); // 1
    Hdr_40_set.insert("N");
    Hdr_40.add_attribute("PosRsnd", "Y"); // 1
    Hdr_40_set.insert("Y");
    Hdr_40.add_attribute("Snt", "SendingTime_t_743139210"); // 1
    Hdr_40_set.insert("SendingTime_t_743139210");
    Hdr_40.add_attribute("OrigSnt", "OrigSendingTime_t_121954255"); // 1
    Hdr_40_set.insert("OrigSendingTime_t_121954255");
    Hdr_40.add_attribute("MsgEncd", "MessageEncoding_t_1656350612"); // 1
    Hdr_40_set.insert("MessageEncoding_t_1656350612");
    all_values.push_back(Hdr_40_set);
    all_compo_names.insert("Hdr_40_set");

    {
      xml_element Hop_40{"Hop"};
      multiset<string> Hop_40_set;
      Hop_40.add_attribute("ID", "HopCompID_t_1780591087"); // 2
      Hop_40_set.insert("HopCompID_t_1780591087");
      Hop_40.add_attribute("Ref", "1408259941"); // 2
      Hop_40_set.insert("1408259941");
      Hop_40.add_attribute("Snt", "HopSendingTime_t_1946763078"); // 2
      Hop_40_set.insert("HopSendingTime_t_1946763078");
      all_values.push_back(Hop_40_set);
      all_compo_names.insert("Hop_40_set");

      Hdr_40.add_element(Hop_40);
    }
    elt.add_element(Hdr_40);
  } // end Hdr
  { // Pty
    xml_element Pty_170{"Pty"};
    multiset<string> Pty_170_set;
    Pty_170.add_attribute("ID", "PartyID_t_77559604"); // 1
    Pty_170_set.insert("PartyID_t_77559604");
    Pty_170.add_attribute("Src", "I"); // 1
    Pty_170_set.insert("I");
    Pty_170.add_attribute("R", "46"); // 1
    Pty_170_set.insert("46");
    all_values.push_back(Pty_170_set);
    all_compo_names.insert("Pty_170_set");

    {
      xml_element Sub_170{"Sub"};
      multiset<string> Sub_170_set;
      Sub_170.add_attribute("ID", "PartySubID_t_1416710454"); // 2
      Sub_170_set.insert("PartySubID_t_1416710454");
      Sub_170.add_attribute("Typ", "29"); // 2
      Sub_170_set.insert("29");
      all_values.push_back(Sub_170_set);
      all_compo_names.insert("Sub_170_set");

      Pty_170.add_element(Sub_170);
    }
    elt.add_element(Pty_170);
  } // end Pty
  { // Pty
    xml_element Pty_171{"Pty"};
    multiset<string> Pty_171_set;
    Pty_171.add_attribute("ID", "PartyID_t_1941270939"); // 1
    Pty_171_set.insert("PartyID_t_1941270939");
    Pty_171.add_attribute("Src", "E"); // 1
    Pty_171_set.insert("E");
    Pty_171.add_attribute("R", "71"); // 1
    Pty_171_set.insert("71");
    all_values.push_back(Pty_171_set);
    all_compo_names.insert("Pty_171_set");

    {
      xml_element Sub_171{"Sub"};
      multiset<string> Sub_171_set;
      Sub_171.add_attribute("ID", "PartySubID_t_1205504713"); // 2
      Sub_171_set.insert("PartySubID_t_1205504713");
      Sub_171.add_attribute("Typ", "22"); // 2
      Sub_171_set.insert("22");
      all_values.push_back(Sub_171_set);
      all_compo_names.insert("Sub_171_set");

      Pty_171.add_element(Sub_171);
    }
    elt.add_element(Pty_171);
  } // end Pty
  { // Req
    xml_element Req_0{"Req"};
    multiset<string> Req_0_set;
    Req_0.add_attribute("Typ", "Z"); // 1
    Req_0_set.insert("Z");
    all_values.push_back(Req_0_set);
    all_compo_names.insert("Req_0_set");

    elt.add_element(Req_0);
  } // end Req
  { // Req
    xml_element Req_1{"Req"};
    multiset<string> Req_1_set;
    Req_1.add_attribute("Typ", "3"); // 1
    Req_1_set.insert("3");
    all_values.push_back(Req_1_set);
    all_compo_names.insert("Req_1_set");

    elt.add_element(Req_1);
  } // end Req
  { // InstReq
    xml_element InstReq_0{"InstReq"};
    multiset<string> InstReq_0_set;
    InstReq_0.add_attribute("Ccy", "CHF"); // 1
    InstReq_0_set.insert("CHF");
    InstReq_0.add_attribute("Typ", "3"); // 1
    InstReq_0_set.insert("3");
    InstReq_0.add_attribute("SettlTyp", "C"); // 1
    InstReq_0_set.insert("C");
    InstReq_0.add_attribute("SettlDt", "SettlDate_t_1648906023"); // 1
    InstReq_0_set.insert("SettlDate_t_1648906023");
    InstReq_0.add_attribute("Sz", "1509540.300000"); // 1
    InstReq_0_set.insert("1509540.300000");
    InstReq_0.add_attribute("MDStrmID", "MDStreamID_t_1393528492"); // 1
    InstReq_0_set.insert("MDStreamID_t_1393528492");
    all_values.push_back(InstReq_0_set);
    all_compo_names.insert("InstReq_0_set");

    {
      xml_element Instrmt_31{"Instrmt"};
      multiset<string> Instrmt_31_set;
      Instrmt_31.add_attribute("Sym", "Symbol_t_1945958755"); // 2
      Instrmt_31_set.insert("Symbol_t_1945958755");
      Instrmt_31.add_attribute("Sfx", "CD"); // 2
      Instrmt_31_set.insert("CD");
      Instrmt_31.add_attribute("ID", "SecurityID_t_423049787"); // 2
      Instrmt_31_set.insert("SecurityID_t_423049787");
      Instrmt_31.add_attribute("Src", "E"); // 2
      Instrmt_31_set.insert("E");
      Instrmt_31.add_attribute("Prod", "3"); // 2
      Instrmt_31_set.insert("3");
      Instrmt_31.add_attribute("ProdCmplx", "ProductComplex_t_2079400400"); // 2
      Instrmt_31_set.insert("ProductComplex_t_2079400400");
      Instrmt_31.add_attribute("SecGrp", "SecurityGroup_t_174721757"); // 2
      Instrmt_31_set.insert("SecurityGroup_t_174721757");
      Instrmt_31.add_attribute("CFI", "CFICode_t_905933879"); // 2
      Instrmt_31_set.insert("CFICode_t_905933879");
      Instrmt_31.add_attribute("SecTyp", "REV"); // 2
      Instrmt_31_set.insert("REV");
      Instrmt_31.add_attribute("SubTyp", "SecuritySubType_t_702419469"); // 2
      Instrmt_31_set.insert("SecuritySubType_t_702419469");
      Instrmt_31.add_attribute("MMY", "983493483"); // 2
      Instrmt_31_set.insert("983493483");
      Instrmt_31.add_attribute("MatDt", "MaturityDate_t_1244011599"); // 2
      Instrmt_31_set.insert("MaturityDate_t_1244011599");
      Instrmt_31.add_attribute("MatTm", "452802128"); // 2
      Instrmt_31_set.insert("452802128");
      Instrmt_31.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_252720290"); // 2
      Instrmt_31_set.insert("SettleOnOpenFlag_t_252720290");
      Instrmt_31.add_attribute("AsgnMeth", "157253580"); // 2
      Instrmt_31_set.insert("157253580");
      Instrmt_31.add_attribute("Status", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("CpnPmt", "CouponPaymentDate_t_575869173"); // 2
      Instrmt_31_set.insert("CouponPaymentDate_t_575869173");
      Instrmt_31.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_31_set.insert("MR");
      Instrmt_31.add_attribute("Snrty", "SB"); // 2
      Instrmt_31_set.insert("SB");
      Instrmt_31.add_attribute("NotlPctOut", "18364703.090000"); // 2
      Instrmt_31_set.insert("18364703.090000");
      Instrmt_31.add_attribute("OrigNotlPctOut", "9086505.500000"); // 2
      Instrmt_31_set.insert("9086505.500000");
      Instrmt_31.add_attribute("AttchPnt", "5559862.490000"); // 2
      Instrmt_31_set.insert("5559862.490000");
      Instrmt_31.add_attribute("DetchPnt", "6205028.640000"); // 2
      Instrmt_31_set.insert("6205028.640000");
      Instrmt_31.add_attribute("Issued", "IssueDate_t_1338271169"); // 2
      Instrmt_31_set.insert("IssueDate_t_1338271169");
      Instrmt_31.add_attribute("RepoCollSecTyp", "315871863"); // 2
      Instrmt_31_set.insert("315871863");
      Instrmt_31.add_attribute("RepoTrm", "873408159"); // 2
      Instrmt_31_set.insert("873408159");
      Instrmt_31.add_attribute("RepoRt", "8488301.890000"); // 2
      Instrmt_31_set.insert("8488301.890000");
      Instrmt_31.add_attribute("Fctr", "16508816.180000"); // 2
      Instrmt_31_set.insert("16508816.180000");
      Instrmt_31.add_attribute("CrdRtg", "CreditRating_t_374830534"); // 2
      Instrmt_31_set.insert("CreditRating_t_374830534");
      Instrmt_31.add_attribute("Rgstry", "InstrRegistry_t_999784219"); // 2
      Instrmt_31_set.insert("InstrRegistry_t_999784219");
      Instrmt_31.add_attribute("IssuCtry", "896926462"); // 2
      Instrmt_31_set.insert("896926462");
      Instrmt_31.add_attribute("StPrv", "StateOrProvinceOfIssue_t_173305642"); // 2
      Instrmt_31_set.insert("StateOrProvinceOfIssue_t_173305642");
      Instrmt_31.add_attribute("Lcl", "LocaleOfIssue_t_375503902"); // 2
      Instrmt_31_set.insert("LocaleOfIssue_t_375503902");
      Instrmt_31.add_attribute("Redeem", "RedemptionDate_t_1319976250"); // 2
      Instrmt_31_set.insert("RedemptionDate_t_1319976250");
      Instrmt_31.add_attribute("StrkPx", "7149199.590000"); // 2
      Instrmt_31_set.insert("7149199.590000");
      Instrmt_31.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_31_set.insert("JPY");
      Instrmt_31.add_attribute("StrkMult", "8896417.160000"); // 2
      Instrmt_31_set.insert("8896417.160000");
      Instrmt_31.add_attribute("StrkValu", "7791117.180000"); // 2
      Instrmt_31_set.insert("7791117.180000");
      Instrmt_31.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("StrkPxBndryPrcsn", "17626052.020000"); // 2
      Instrmt_31_set.insert("17626052.020000");
      Instrmt_31.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("OptAt", "2044863314"); // 2
      Instrmt_31_set.insert("2044863314");
      Instrmt_31.add_attribute("Mult", "20153254.920000"); // 2
      Instrmt_31_set.insert("20153254.920000");
      Instrmt_31.add_attribute("MultTyp", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("MinPxIncr", "4437110.170000"); // 2
      Instrmt_31_set.insert("4437110.170000");
      Instrmt_31.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1906524961"); // 2
      Instrmt_31_set.insert("MinPriceIncrementAmount_t_1906524961");
      Instrmt_31.add_attribute("UOM", "Bcf"); // 2
      Instrmt_31_set.insert("Bcf");
      Instrmt_31.add_attribute("UOMQty", "1326976.780000"); // 2
      Instrmt_31_set.insert("1326976.780000");
      Instrmt_31.add_attribute("PxUOM", "oz_tr"); // 2
      Instrmt_31_set.insert("oz_tr");
      Instrmt_31.add_attribute("PxUOMQty", "45658.210000"); // 2
      Instrmt_31_set.insert("45658.210000");
      Instrmt_31.add_attribute("SettlMeth", "C"); // 2
      Instrmt_31_set.insert("C");
      Instrmt_31.add_attribute("ExerStyle", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("OptPayAmt", "OptPayoutAmount_t_1626608701"); // 2
      Instrmt_31_set.insert("OptPayoutAmount_t_1626608701");
      Instrmt_31.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_31_set.insert("INT");
      Instrmt_31.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_31_set.insert("FUTDA");
      Instrmt_31.add_attribute("ListMeth", "0"); // 2
      Instrmt_31_set.insert("0");
      Instrmt_31.add_attribute("CapPx", "17070937.940000"); // 2
      Instrmt_31_set.insert("17070937.940000");
      Instrmt_31.add_attribute("FlrPx", "7207621.170000"); // 2
      Instrmt_31_set.insert("7207621.170000");
      Instrmt_31.add_attribute("PutCall", "0"); // 2
      Instrmt_31_set.insert("0");
      Instrmt_31.add_attribute("FlexInd", "true"); // 2
      Instrmt_31_set.insert("true");
      Instrmt_31.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_31_set.insert("false");
      Instrmt_31.add_attribute("TmUnit", "Min"); // 2
      Instrmt_31_set.insert("Min");
      Instrmt_31.add_attribute("CpnRt", "19557755.350000"); // 2
      Instrmt_31_set.insert("19557755.350000");
      Instrmt_31.add_attribute("Exch", "SecurityExchange_t_1145147721"); // 2
      Instrmt_31_set.insert("SecurityExchange_t_1145147721");
      Instrmt_31.add_attribute("PosLmt", "1631822906"); // 2
      Instrmt_31_set.insert("1631822906");
      Instrmt_31.add_attribute("NTPosLmt", "587403606"); // 2
      Instrmt_31_set.insert("587403606");
      Instrmt_31.add_attribute("Issr", "Issuer_t_2128236905"); // 2
      Instrmt_31_set.insert("Issuer_t_2128236905");
      Instrmt_31.add_attribute("EncIssrLen", "1076400444"); // 2
      Instrmt_31_set.insert("1076400444");
      Instrmt_31.add_attribute("EncIssr", "EncodedIssuer_t_202525160"); // 2
      Instrmt_31_set.insert("EncodedIssuer_t_202525160");
      Instrmt_31.add_attribute("Desc", "SecurityDesc_t_60370393"); // 2
      Instrmt_31_set.insert("SecurityDesc_t_60370393");
      Instrmt_31.add_attribute("EncSecDescLen", "973780110"); // 2
      Instrmt_31_set.insert("973780110");
      Instrmt_31.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_70367004"); // 2
      Instrmt_31_set.insert("EncodedSecurityDesc_t_70367004");
      Instrmt_31.add_attribute("Pool", "Pool_t_297241109"); // 2
      Instrmt_31_set.insert("Pool_t_297241109");
      Instrmt_31.add_attribute("CSetMo", "1117749197"); // 2
      Instrmt_31_set.insert("1117749197");
      Instrmt_31.add_attribute("CPPgm", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("CPRegT", "CPRegType_t_56282423"); // 2
      Instrmt_31_set.insert("CPRegType_t_56282423");
      Instrmt_31.add_attribute("Dated", "DatedDate_t_566328768"); // 2
      Instrmt_31_set.insert("DatedDate_t_566328768");
      Instrmt_31.add_attribute("IntAcrl", "InterestAccrualDate_t_646775699"); // 2
      Instrmt_31_set.insert("InterestAccrualDate_t_646775699");
      all_values.push_back(Instrmt_31_set);
      all_compo_names.insert("Instrmt_31_set");

      {
        xml_element AID_34{"AID"};
        multiset<string> AID_34_set;
        AID_34.add_attribute("AltID", "SecurityAltID_t_723974287"); // 3
        AID_34_set.insert("SecurityAltID_t_723974287");
        AID_34.add_attribute("AltIDSrc", "2"); // 3
        AID_34_set.insert("2");
        all_values.push_back(AID_34_set);
        all_compo_names.insert("AID_34_set");

        Instrmt_31.add_element(AID_34);
      }
      {
        xml_element SecXML_34{"SecXML"};
        multiset<string> SecXML_34_set;
        SecXML_34.add_attribute("Schema", "SecurityXMLSchema_t_1399976241"); // 3
        SecXML_34_set.insert("SecurityXMLSchema_t_1399976241");
        all_values.push_back(SecXML_34_set);
        all_compo_names.insert("SecXML_34_set");

        Instrmt_31.add_element(SecXML_34);
      }
      {
        xml_element Evnt_34{"Evnt"};
        multiset<string> Evnt_34_set;
        Evnt_34.add_attribute("EventTyp", "12"); // 3
        Evnt_34_set.insert("12");
        Evnt_34.add_attribute("Dt", "EventDate_t_891332274"); // 3
        Evnt_34_set.insert("EventDate_t_891332274");
        Evnt_34.add_attribute("Tm", "EventTime_t_879101294"); // 3
        Evnt_34_set.insert("EventTime_t_879101294");
        Evnt_34.add_attribute("Px", "12897632.470000"); // 3
        Evnt_34_set.insert("12897632.470000");
        Evnt_34.add_attribute("Txt", "EventText_t_715167928"); // 3
        Evnt_34_set.insert("EventText_t_715167928");
        all_values.push_back(Evnt_34_set);
        all_compo_names.insert("Evnt_34_set");

        Instrmt_31.add_element(Evnt_34);
      }
      {
        xml_element Pty_172{"Pty"};
        multiset<string> Pty_172_set;
        Pty_172.add_attribute("ID", "InstrumentPartyID_t_733056882"); // 3
        Pty_172_set.insert("InstrumentPartyID_t_733056882");
        Pty_172.add_attribute("Src", "E"); // 3
        Pty_172_set.insert("E");
        Pty_172.add_attribute("R", "33"); // 3
        Pty_172_set.insert("33");
        all_values.push_back(Pty_172_set);
        all_compo_names.insert("Pty_172_set");

        {
          xml_element Sub_172{"Sub"};
          multiset<string> Sub_172_set;
          Sub_172.add_attribute("ID", "InstrumentPartySubID_t_760318112"); // 4
          Sub_172_set.insert("InstrumentPartySubID_t_760318112");
          Sub_172.add_attribute("Typ", "7"); // 4
          Sub_172_set.insert("7");
          all_values.push_back(Sub_172_set);
          all_compo_names.insert("Sub_172_set");

          Pty_172.add_element(Sub_172);
        }
        Instrmt_31.add_element(Pty_172);
      }
      {
        xml_element CmplxEvnt_31{"CmplxEvnt"};
        multiset<string> CmplxEvnt_31_set;
        CmplxEvnt_31.add_attribute("Typ", "1"); // 3
        CmplxEvnt_31_set.insert("1");
        CmplxEvnt_31.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1502499302"); // 3
        CmplxEvnt_31_set.insert("ComplexOptPayoutAmount_t_1502499302");
        CmplxEvnt_31.add_attribute("Px", "5927793.280000"); // 3
        CmplxEvnt_31_set.insert("5927793.280000");
        CmplxEvnt_31.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_31_set.insert("3");
        CmplxEvnt_31.add_attribute("PxBndryPrcsn", "9868385.600000"); // 3
        CmplxEvnt_31_set.insert("9868385.600000");
        CmplxEvnt_31.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_31_set.insert("2");
        CmplxEvnt_31.add_attribute("Cond", "2"); // 3
        CmplxEvnt_31_set.insert("2");
        all_values.push_back(CmplxEvnt_31_set);
        all_compo_names.insert("CmplxEvnt_31_set");

        {
          xml_element EvntDts_31{"EvntDts"};
          multiset<string> EvntDts_31_set;
          EvntDts_31.add_attribute("StartDt", "ComplexEventStartDate_t_2063239004"); // 4
          EvntDts_31_set.insert("ComplexEventStartDate_t_2063239004");
          EvntDts_31.add_attribute("EndDt", "ComplexEventEndDate_t_1382708094"); // 4
          EvntDts_31_set.insert("ComplexEventEndDate_t_1382708094");
          all_values.push_back(EvntDts_31_set);
          all_compo_names.insert("EvntDts_31_set");

          {
            xml_element EvntTms_31{"EvntTms"};
            multiset<string> EvntTms_31_set;
            EvntTms_31.add_attribute("StartTm", "367972488"); // 5
            EvntTms_31_set.insert("367972488");
            EvntTms_31.add_attribute("EndTm", "889535466"); // 5
            EvntTms_31_set.insert("889535466");
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
      Undly_43.add_attribute("Sym", "UnderlyingSymbol_t_1453075098"); // 2
      Undly_43_set.insert("UnderlyingSymbol_t_1453075098");
      Undly_43.add_attribute("Sfx", "CD"); // 2
      Undly_43_set.insert("CD");
      Undly_43.add_attribute("ID", "UnderlyingSecurityID_t_2007284663"); // 2
      Undly_43_set.insert("UnderlyingSecurityID_t_2007284663");
      Undly_43.add_attribute("Src", "L"); // 2
      Undly_43_set.insert("L");
      Undly_43.add_attribute("Prod", "9"); // 2
      Undly_43_set.insert("9");
      Undly_43.add_attribute("CFI", "UnderlyingCFICode_t_426129784"); // 2
      Undly_43_set.insert("UnderlyingCFICode_t_426129784");
      Undly_43.add_attribute("SecTyp", "DEFLTED"); // 2
      Undly_43_set.insert("DEFLTED");
      Undly_43.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1445470308"); // 2
      Undly_43_set.insert("UnderlyingSecuritySubType_t_1445470308");
      Undly_43.add_attribute("MMY", "997024373"); // 2
      Undly_43_set.insert("997024373");
      Undly_43.add_attribute("Mat", "UnderlyingMaturityDate_t_1866421411"); // 2
      Undly_43_set.insert("UnderlyingMaturityDate_t_1866421411");
      Undly_43.add_attribute("MatTm", "2027923980"); // 2
      Undly_43_set.insert("2027923980");
      Undly_43.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1888356647"); // 2
      Undly_43_set.insert("UnderlyingCouponPaymentDate_t_1888356647");
      Undly_43.add_attribute("RestrctTyp", "MM"); // 2
      Undly_43_set.insert("MM");
      Undly_43.add_attribute("Snrty", "SB"); // 2
      Undly_43_set.insert("SB");
      Undly_43.add_attribute("NotlPctOut", "4560409.280000"); // 2
      Undly_43_set.insert("4560409.280000");
      Undly_43.add_attribute("OrigNotlPctOut", "13310959.400000"); // 2
      Undly_43_set.insert("13310959.400000");
      Undly_43.add_attribute("AttchPnt", "20195769.720000"); // 2
      Undly_43_set.insert("20195769.720000");
      Undly_43.add_attribute("DetchPnt", "18919709.730000"); // 2
      Undly_43_set.insert("18919709.730000");
      Undly_43.add_attribute("Issued", "UnderlyingIssueDate_t_2091414053"); // 2
      Undly_43_set.insert("UnderlyingIssueDate_t_2091414053");
      Undly_43.add_attribute("RepoCollSecTyp", "656580765"); // 2
      Undly_43_set.insert("656580765");
      Undly_43.add_attribute("RepoTrm", "1073672090"); // 2
      Undly_43_set.insert("1073672090");
      Undly_43.add_attribute("RepoRt", "14464297.070000"); // 2
      Undly_43_set.insert("14464297.070000");
      Undly_43.add_attribute("Fctr", "12493600.940000"); // 2
      Undly_43_set.insert("12493600.940000");
      Undly_43.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1400520927"); // 2
      Undly_43_set.insert("UnderlyingCreditRating_t_1400520927");
      Undly_43.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_285784619"); // 2
      Undly_43_set.insert("UnderlyingInstrRegistry_t_285784619");
      Undly_43.add_attribute("Ctry", "282059380"); // 2
      Undly_43_set.insert("282059380");
      Undly_43.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1708123022"); // 2
      Undly_43_set.insert("UnderlyingStateOrProvinceOfIssue_t_1708123022");
      Undly_43.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_201539975"); // 2
      Undly_43_set.insert("UnderlyingLocaleOfIssue_t_201539975");
      Undly_43.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1664767475"); // 2
      Undly_43_set.insert("UnderlyingRedemptionDate_t_1664767475");
      Undly_43.add_attribute("StrkPx", "20760955.110000"); // 2
      Undly_43_set.insert("20760955.110000");
      Undly_43.add_attribute("StrkCcy", "CHF"); // 2
      Undly_43_set.insert("CHF");
      Undly_43.add_attribute("OptA", "593825461"); // 2
      Undly_43_set.insert("593825461");
      Undly_43.add_attribute("Mult", "9508764.570000"); // 2
      Undly_43_set.insert("9508764.570000");
      Undly_43.add_attribute("MultTyp", "0"); // 2
      Undly_43_set.insert("0");
      Undly_43.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_43_set.insert("2");
      Undly_43.add_attribute("UOM", "MWh"); // 2
      Undly_43_set.insert("MWh");
      Undly_43.add_attribute("UOMQty", "12564735.670000"); // 2
      Undly_43_set.insert("12564735.670000");
      Undly_43.add_attribute("PxUOM", "tn"); // 2
      Undly_43_set.insert("tn");
      Undly_43.add_attribute("PxUOMQty", "2265469.660000"); // 2
      Undly_43_set.insert("2265469.660000");
      Undly_43.add_attribute("TmUnit", "Yr"); // 2
      Undly_43_set.insert("Yr");
      Undly_43.add_attribute("ExerStyle", "2"); // 2
      Undly_43_set.insert("2");
      Undly_43.add_attribute("CpnRt", "21149036.140000"); // 2
      Undly_43_set.insert("21149036.140000");
      Undly_43.add_attribute("Exch", "UnderlyingSecurityExchange_t_1573450389"); // 2
      Undly_43_set.insert("UnderlyingSecurityExchange_t_1573450389");
      Undly_43.add_attribute("Issr", "UnderlyingIssuer_t_1663952054"); // 2
      Undly_43_set.insert("UnderlyingIssuer_t_1663952054");
      Undly_43.add_attribute("EncUndIssrLen", "423460894"); // 2
      Undly_43_set.insert("423460894");
      Undly_43.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_757062681"); // 2
      Undly_43_set.insert("EncodedUnderlyingIssuer_t_757062681");
      Undly_43.add_attribute("Desc", "UnderlyingSecurityDesc_t_1536045378"); // 2
      Undly_43_set.insert("UnderlyingSecurityDesc_t_1536045378");
      Undly_43.add_attribute("EncUndSecDescLen", "167948219"); // 2
      Undly_43_set.insert("167948219");
      Undly_43.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_700993086"); // 2
      Undly_43_set.insert("EncodedUnderlyingSecurityDesc_t_700993086");
      Undly_43.add_attribute("CPPgm", "UnderlyingCPProgram_t_45142496"); // 2
      Undly_43_set.insert("UnderlyingCPProgram_t_45142496");
      Undly_43.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1241620309"); // 2
      Undly_43_set.insert("UnderlyingCPRegType_t_1241620309");
      Undly_43.add_attribute("AllocPct", "21474227.930000"); // 2
      Undly_43_set.insert("21474227.930000");
      Undly_43.add_attribute("Ccy", "CHF"); // 2
      Undly_43_set.insert("CHF");
      Undly_43.add_attribute("Qty", "2857237.640000"); // 2
      Undly_43_set.insert("2857237.640000");
      Undly_43.add_attribute("SettlTyp", "5"); // 2
      Undly_43_set.insert("5");
      Undly_43.add_attribute("CashAmt", "UnderlyingCashAmount_t_55296963"); // 2
      Undly_43_set.insert("UnderlyingCashAmount_t_55296963");
      Undly_43.add_attribute("CashTyp", "DIFF"); // 2
      Undly_43_set.insert("DIFF");
      Undly_43.add_attribute("Px", "10938457.970000"); // 2
      Undly_43_set.insert("10938457.970000");
      Undly_43.add_attribute("DirtPx", "21313924.740000"); // 2
      Undly_43_set.insert("21313924.740000");
      Undly_43.add_attribute("EndPx", "15783391.810000"); // 2
      Undly_43_set.insert("15783391.810000");
      Undly_43.add_attribute("StartVal", "UnderlyingStartValue_t_2064204723"); // 2
      Undly_43_set.insert("UnderlyingStartValue_t_2064204723");
      Undly_43.add_attribute("CurVal", "UnderlyingCurrentValue_t_577734287"); // 2
      Undly_43_set.insert("UnderlyingCurrentValue_t_577734287");
      Undly_43.add_attribute("EndVal", "UnderlyingEndValue_t_381731990"); // 2
      Undly_43_set.insert("UnderlyingEndValue_t_381731990");
      Undly_43.add_attribute("AdjQty", "7067494.720000"); // 2
      Undly_43_set.insert("7067494.720000");
      Undly_43.add_attribute("FxRate", "18930557.690000"); // 2
      Undly_43_set.insert("18930557.690000");
      Undly_43.add_attribute("FxRateCalc", "D"); // 2
      Undly_43_set.insert("D");
      Undly_43.add_attribute("CapValu", "UnderlyingCapValue_t_1963223039"); // 2
      Undly_43_set.insert("UnderlyingCapValue_t_1963223039");
      Undly_43.add_attribute("SetMeth", "UnderlyingSettlMethod_t_358880263"); // 2
      Undly_43_set.insert("UnderlyingSettlMethod_t_358880263");
      Undly_43.add_attribute("PutCall", "1985285197"); // 2
      Undly_43_set.insert("1985285197");
      all_values.push_back(Undly_43_set);
      all_compo_names.insert("Undly_43_set");

      {
        xml_element UndAID_43{"UndAID"};
        multiset<string> UndAID_43_set;
        UndAID_43.add_attribute("AltID", "UnderlyingSecurityAltID_t_791150722"); // 3
        UndAID_43_set.insert("UnderlyingSecurityAltID_t_791150722");
        UndAID_43.add_attribute("AltIDSrc", "H"); // 3
        UndAID_43_set.insert("H");
        all_values.push_back(UndAID_43_set);
        all_compo_names.insert("UndAID_43_set");

        Undly_43.add_element(UndAID_43);
      }
      {
        xml_element Stip_70{"Stip"};
        multiset<string> Stip_70_set;
        Stip_70.add_attribute("Typ", "RATING"); // 3
        Stip_70_set.insert("RATING");
        Stip_70.add_attribute("Val", "UnderlyingStipValue_t_217117463"); // 3
        Stip_70_set.insert("UnderlyingStipValue_t_217117463");
        all_values.push_back(Stip_70_set);
        all_compo_names.insert("Stip_70_set");

        Undly_43.add_element(Stip_70);
      }
      {
        xml_element Pty_173{"Pty"};
        multiset<string> Pty_173_set;
        Pty_173.add_attribute("ID", "UnderlyingInstrumentPartyID_t_369097144"); // 3
        Pty_173_set.insert("UnderlyingInstrumentPartyID_t_369097144");
        Pty_173.add_attribute("Src", "6"); // 3
        Pty_173_set.insert("6");
        Pty_173.add_attribute("R", "39"); // 3
        Pty_173_set.insert("39");
        all_values.push_back(Pty_173_set);
        all_compo_names.insert("Pty_173_set");

        {
          xml_element Sub_173{"Sub"};
          multiset<string> Sub_173_set;
          Sub_173.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1905142522"); // 4
          Sub_173_set.insert("UnderlyingInstrumentPartySubID_t_1905142522");
          Sub_173.add_attribute("Typ", "33"); // 4
          Sub_173_set.insert("33");
          all_values.push_back(Sub_173_set);
          all_compo_names.insert("Sub_173_set");

          Pty_173.add_element(Sub_173);
        }
        Undly_43.add_element(Pty_173);
      }
      InstReq_0.add_element(Undly_43);
    }
    {
      xml_element Leg_41{"Leg"};
      multiset<string> Leg_41_set;
      Leg_41.add_attribute("Sym", "LegSymbol_t_1675173231"); // 2
      Leg_41_set.insert("LegSymbol_t_1675173231");
      Leg_41.add_attribute("Sfx", "CD"); // 2
      Leg_41_set.insert("CD");
      Leg_41.add_attribute("ID", "LegSecurityID_t_1638250938"); // 2
      Leg_41_set.insert("LegSecurityID_t_1638250938");
      Leg_41.add_attribute("Src", "G"); // 2
      Leg_41_set.insert("G");
      Leg_41.add_attribute("Prod", "9"); // 2
      Leg_41_set.insert("9");
      Leg_41.add_attribute("CFI", "LegCFICode_t_2132908527"); // 2
      Leg_41_set.insert("LegCFICode_t_2132908527");
      Leg_41.add_attribute("SecTyp", "PEF"); // 2
      Leg_41_set.insert("PEF");
      Leg_41.add_attribute("SecSubTyp", "LegSecuritySubType_t_526382283"); // 2
      Leg_41_set.insert("LegSecuritySubType_t_526382283");
      Leg_41.add_attribute("MMY", "40721843"); // 2
      Leg_41_set.insert("40721843");
      Leg_41.add_attribute("Mat", "LegMaturityDate_t_300616233"); // 2
      Leg_41_set.insert("LegMaturityDate_t_300616233");
      Leg_41.add_attribute("MatTm", "1620228080"); // 2
      Leg_41_set.insert("1620228080");
      Leg_41.add_attribute("CpnPmt", "LegCouponPaymentDate_t_24630669"); // 2
      Leg_41_set.insert("LegCouponPaymentDate_t_24630669");
      Leg_41.add_attribute("Issued", "LegIssueDate_t_1878955414"); // 2
      Leg_41_set.insert("LegIssueDate_t_1878955414");
      Leg_41.add_attribute("RepoCollSecTyp", "1536949155"); // 2
      Leg_41_set.insert("1536949155");
      Leg_41.add_attribute("RepoTrm", "602364957"); // 2
      Leg_41_set.insert("602364957");
      Leg_41.add_attribute("RepoRt", "1132037.560000"); // 2
      Leg_41_set.insert("1132037.560000");
      Leg_41.add_attribute("Fctr", "962149.790000"); // 2
      Leg_41_set.insert("962149.790000");
      Leg_41.add_attribute("CrdRtg", "LegCreditRating_t_347937078"); // 2
      Leg_41_set.insert("LegCreditRating_t_347937078");
      Leg_41.add_attribute("Rgstry", "LegInstrRegistry_t_1871941987"); // 2
      Leg_41_set.insert("LegInstrRegistry_t_1871941987");
      Leg_41.add_attribute("Ctry", "2059438019"); // 2
      Leg_41_set.insert("2059438019");
      Leg_41.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_706817342"); // 2
      Leg_41_set.insert("LegStateOrProvinceOfIssue_t_706817342");
      Leg_41.add_attribute("Lcl", "LegLocaleOfIssue_t_1709743536"); // 2
      Leg_41_set.insert("LegLocaleOfIssue_t_1709743536");
      Leg_41.add_attribute("Redeem", "LegRedemptionDate_t_703105093"); // 2
      Leg_41_set.insert("LegRedemptionDate_t_703105093");
      Leg_41.add_attribute("Strk", "15594460.800000"); // 2
      Leg_41_set.insert("15594460.800000");
      Leg_41.add_attribute("StrkCcy", "EUR"); // 2
      Leg_41_set.insert("EUR");
      Leg_41.add_attribute("OptA", "1928543224"); // 2
      Leg_41_set.insert("1928543224");
      Leg_41.add_attribute("Cmult", "17436474.610000"); // 2
      Leg_41_set.insert("17436474.610000");
      Leg_41.add_attribute("MultTyp", "1"); // 2
      Leg_41_set.insert("1");
      Leg_41.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_41_set.insert("3");
      Leg_41.add_attribute("UOM", "Bbl"); // 2
      Leg_41_set.insert("Bbl");
      Leg_41.add_attribute("UOMQty", "14220922.850000"); // 2
      Leg_41_set.insert("14220922.850000");
      Leg_41.add_attribute("PxUOM", "tn"); // 2
      Leg_41_set.insert("tn");
      Leg_41.add_attribute("PxUOMQty", "16310453.810000"); // 2
      Leg_41_set.insert("16310453.810000");
      Leg_41.add_attribute("TmUnit", "Wk"); // 2
      Leg_41_set.insert("Wk");
      Leg_41.add_attribute("ExerStyle", "2"); // 2
      Leg_41_set.insert("2");
      Leg_41.add_attribute("CpnRt", "16164702.600000"); // 2
      Leg_41_set.insert("16164702.600000");
      Leg_41.add_attribute("Exch", "LegSecurityExchange_t_763073508"); // 2
      Leg_41_set.insert("LegSecurityExchange_t_763073508");
      Leg_41.add_attribute("Issr", "LegIssuer_t_965206064"); // 2
      Leg_41_set.insert("LegIssuer_t_965206064");
      Leg_41.add_attribute("EncLegIssrLen", "1657192103"); // 2
      Leg_41_set.insert("1657192103");
      Leg_41.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1063689741"); // 2
      Leg_41_set.insert("EncodedLegIssuer_t_1063689741");
      Leg_41.add_attribute("Desc", "LegSecurityDesc_t_437950497"); // 2
      Leg_41_set.insert("LegSecurityDesc_t_437950497");
      Leg_41.add_attribute("EncLegSecDescLen", "1681822773"); // 2
      Leg_41_set.insert("1681822773");
      Leg_41.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_795161507"); // 2
      Leg_41_set.insert("EncodedLegSecurityDesc_t_795161507");
      Leg_41.add_attribute("RatioQty", "19748996.520000"); // 2
      Leg_41_set.insert("19748996.520000");
      Leg_41.add_attribute("Side", "3"); // 2
      Leg_41_set.insert("3");
      Leg_41.add_attribute("Ccy", "USD"); // 2
      Leg_41_set.insert("USD");
      Leg_41.add_attribute("Pool", "LegPool_t_484641160"); // 2
      Leg_41_set.insert("LegPool_t_484641160");
      Leg_41.add_attribute("Dated", "LegDatedDate_t_632823602"); // 2
      Leg_41_set.insert("LegDatedDate_t_632823602");
      Leg_41.add_attribute("CSetMo", "1983069003"); // 2
      Leg_41_set.insert("1983069003");
      Leg_41.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1191458502"); // 2
      Leg_41_set.insert("LegInterestAccrualDate_t_1191458502");
      Leg_41.add_attribute("PutCall", "195083490"); // 2
      Leg_41_set.insert("195083490");
      Leg_41.add_attribute("LegOptionRatio", "5386904.480000"); // 2
      Leg_41_set.insert("5386904.480000");
      Leg_41.add_attribute("Px", "6034209.340000"); // 2
      Leg_41_set.insert("6034209.340000");
      all_values.push_back(Leg_41_set);
      all_compo_names.insert("Leg_41_set");

      {
        xml_element LegAID_41{"LegAID"};
        multiset<string> LegAID_41_set;
        LegAID_41.add_attribute("SecAltID", "LegSecurityAltID_t_1710048542"); // 3
        LegAID_41_set.insert("LegSecurityAltID_t_1710048542");
        LegAID_41.add_attribute("SecAltIDSrc", "C"); // 3
        LegAID_41_set.insert("C");
        all_values.push_back(LegAID_41_set);
        all_compo_names.insert("LegAID_41_set");

        Leg_41.add_element(LegAID_41);
      }
      InstReq_0.add_element(Leg_41);
    }
    elt.add_element(InstReq_0);
  } // end InstReq
  { // TrdSes
    xml_element TrdSes_1{"TrdSes"};
    multiset<string> TrdSes_1_set;
    TrdSes_1.add_attribute("SesID", "3"); // 1
    TrdSes_1_set.insert("3");
    TrdSes_1.add_attribute("SesSub", "6"); // 1
    TrdSes_1_set.insert("6");
    all_values.push_back(TrdSes_1_set);
    all_compo_names.insert("TrdSes_1_set");

    elt.add_element(TrdSes_1);
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
