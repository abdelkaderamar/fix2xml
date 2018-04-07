#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Advertisement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Advertisement_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Adv" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Advertisement_message_t_0;
  elt.add_attribute("AdvId", "AdvId_t_1321767958"); // 0
  Advertisement_message_t_0.insert("AdvId_t_1321767958");
  elt.add_attribute("AdvTransTyp", "R"); // 0
  Advertisement_message_t_0.insert("R");
  elt.add_attribute("AdvRefID", "AdvRefID_t_695807488"); // 0
  Advertisement_message_t_0.insert("AdvRefID_t_695807488");
  elt.add_attribute("AdvSide", "B"); // 0
  Advertisement_message_t_0.insert("B");
  elt.add_attribute("Qty", "18831997.620000"); // 0
  Advertisement_message_t_0.insert("18831997.620000");
  elt.add_attribute("QtyTyp", "0"); // 0
  Advertisement_message_t_0.insert("0");
  elt.add_attribute("Px", "6697191.030000"); // 0
  Advertisement_message_t_0.insert("6697191.030000");
  elt.add_attribute("Ccy", "USD"); // 0
  Advertisement_message_t_0.insert("USD");
  elt.add_attribute("TrdDt", "TradeDate_t_1315462937"); // 0
  Advertisement_message_t_0.insert("TradeDate_t_1315462937");
  elt.add_attribute("TxnTm", "TransactTime_t_890487825"); // 0
  Advertisement_message_t_0.insert("TransactTime_t_890487825");
  elt.add_attribute("Txt", "Text_t_1406767259"); // 0
  Advertisement_message_t_0.insert("Text_t_1406767259");
  elt.add_attribute("EncTxtLen", "656363318"); // 0
  Advertisement_message_t_0.insert("656363318");
  elt.add_attribute("EncTxt", "EncodedText_t_847006141"); // 0
  Advertisement_message_t_0.insert("EncodedText_t_847006141");
  elt.add_attribute("URL", "URLLink_t_26451597"); // 0
  Advertisement_message_t_0.insert("URLLink_t_26451597");
  elt.add_attribute("LastMkt", "LastMkt_t_1011528195"); // 0
  Advertisement_message_t_0.insert("LastMkt_t_1011528195");
  elt.add_attribute("SesID", "3"); // 0
  Advertisement_message_t_0.insert("3");
  elt.add_attribute("SesSub", "2"); // 0
  Advertisement_message_t_0.insert("2");
  all_values.push_back(Advertisement_message_t_0);
  all_compo_names.insert("Advertisement_message_t");

  { // Hdr
    xml_element Hdr_1{"Hdr"};
    multiset<string> Hdr_1_set;
    Hdr_1.add_attribute("SeqNum", "546980510"); // 1
    Hdr_1_set.insert("546980510");
    Hdr_1.add_attribute("SID", "SenderCompID_t_547916704"); // 1
    Hdr_1_set.insert("SenderCompID_t_547916704");
    Hdr_1.add_attribute("TID", "TargetCompID_t_1817680142"); // 1
    Hdr_1_set.insert("TargetCompID_t_1817680142");
    Hdr_1.add_attribute("OBID", "OnBehalfOfCompID_t_1931505593"); // 1
    Hdr_1_set.insert("OnBehalfOfCompID_t_1931505593");
    Hdr_1.add_attribute("D2ID", "DeliverToCompID_t_1252135298"); // 1
    Hdr_1_set.insert("DeliverToCompID_t_1252135298");
    Hdr_1.add_attribute("SSub", "SenderSubID_t_1428878238"); // 1
    Hdr_1_set.insert("SenderSubID_t_1428878238");
    Hdr_1.add_attribute("SLoc", "SenderLocationID_t_1245072221"); // 1
    Hdr_1_set.insert("SenderLocationID_t_1245072221");
    Hdr_1.add_attribute("TSub", "TargetSubID_t_1255757211"); // 1
    Hdr_1_set.insert("TargetSubID_t_1255757211");
    Hdr_1.add_attribute("TLoc", "TargetLocationID_t_1575851448"); // 1
    Hdr_1_set.insert("TargetLocationID_t_1575851448");
    Hdr_1.add_attribute("OBSub", "OnBehalfOfSubID_t_1346570924"); // 1
    Hdr_1_set.insert("OnBehalfOfSubID_t_1346570924");
    Hdr_1.add_attribute("OBLoc", "OnBehalfOfLocationID_t_283295739"); // 1
    Hdr_1_set.insert("OnBehalfOfLocationID_t_283295739");
    Hdr_1.add_attribute("D2Sub", "DeliverToSubID_t_1926473402"); // 1
    Hdr_1_set.insert("DeliverToSubID_t_1926473402");
    Hdr_1.add_attribute("D2Loc", "DeliverToLocationID_t_1989285835"); // 1
    Hdr_1_set.insert("DeliverToLocationID_t_1989285835");
    Hdr_1.add_attribute("PosDup", "Y"); // 1
    Hdr_1_set.insert("Y");
    Hdr_1.add_attribute("PosRsnd", "N"); // 1
    Hdr_1_set.insert("N");
    Hdr_1.add_attribute("Snt", "SendingTime_t_537609675"); // 1
    Hdr_1_set.insert("SendingTime_t_537609675");
    Hdr_1.add_attribute("OrigSnt", "OrigSendingTime_t_1964123494"); // 1
    Hdr_1_set.insert("OrigSendingTime_t_1964123494");
    Hdr_1.add_attribute("MsgEncd", "MessageEncoding_t_1049239153"); // 1
    Hdr_1_set.insert("MessageEncoding_t_1049239153");
    all_values.push_back(Hdr_1_set);
    all_compo_names.insert("Hdr_1_set");

    {
      xml_element Hop_1{"Hop"};
      multiset<string> Hop_1_set;
      Hop_1.add_attribute("ID", "HopCompID_t_30402040"); // 2
      Hop_1_set.insert("HopCompID_t_30402040");
      Hop_1.add_attribute("Ref", "486358949"); // 2
      Hop_1_set.insert("486358949");
      Hop_1.add_attribute("Snt", "HopSendingTime_t_1080654264"); // 2
      Hop_1_set.insert("HopSendingTime_t_1080654264");
      all_values.push_back(Hop_1_set);
      all_compo_names.insert("Hop_1_set");

      Hdr_1.add_element(Hop_1);
    }
    elt.add_element(Hdr_1);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_3{"Instrmt"};
    multiset<string> Instrmt_3_set;
    Instrmt_3.add_attribute("Sym", "Symbol_t_1609552060"); // 1
    Instrmt_3_set.insert("Symbol_t_1609552060");
    Instrmt_3.add_attribute("Sfx", "CD"); // 1
    Instrmt_3_set.insert("CD");
    Instrmt_3.add_attribute("ID", "SecurityID_t_1971142089"); // 1
    Instrmt_3_set.insert("SecurityID_t_1971142089");
    Instrmt_3.add_attribute("Src", "C"); // 1
    Instrmt_3_set.insert("C");
    Instrmt_3.add_attribute("Prod", "6"); // 1
    Instrmt_3_set.insert("6");
    Instrmt_3.add_attribute("ProdCmplx", "ProductComplex_t_670664582"); // 1
    Instrmt_3_set.insert("ProductComplex_t_670664582");
    Instrmt_3.add_attribute("SecGrp", "SecurityGroup_t_895287268"); // 1
    Instrmt_3_set.insert("SecurityGroup_t_895287268");
    Instrmt_3.add_attribute("CFI", "CFICode_t_1322229751"); // 1
    Instrmt_3_set.insert("CFICode_t_1322229751");
    Instrmt_3.add_attribute("SecTyp", "DN"); // 1
    Instrmt_3_set.insert("DN");
    Instrmt_3.add_attribute("SubTyp", "SecuritySubType_t_188579154"); // 1
    Instrmt_3_set.insert("SecuritySubType_t_188579154");
    Instrmt_3.add_attribute("MMY", "1869210261"); // 1
    Instrmt_3_set.insert("1869210261");
    Instrmt_3.add_attribute("MatDt", "MaturityDate_t_599097810"); // 1
    Instrmt_3_set.insert("MaturityDate_t_599097810");
    Instrmt_3.add_attribute("MatTm", "2006259296"); // 1
    Instrmt_3_set.insert("2006259296");
    Instrmt_3.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1653232207"); // 1
    Instrmt_3_set.insert("SettleOnOpenFlag_t_1653232207");
    Instrmt_3.add_attribute("AsgnMeth", "1851233108"); // 1
    Instrmt_3_set.insert("1851233108");
    Instrmt_3.add_attribute("Status", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("CpnPmt", "CouponPaymentDate_t_750820780"); // 1
    Instrmt_3_set.insert("CouponPaymentDate_t_750820780");
    Instrmt_3.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_3_set.insert("XR");
    Instrmt_3.add_attribute("Snrty", "SB"); // 1
    Instrmt_3_set.insert("SB");
    Instrmt_3.add_attribute("NotlPctOut", "20973917.040000"); // 1
    Instrmt_3_set.insert("20973917.040000");
    Instrmt_3.add_attribute("OrigNotlPctOut", "12428024.110000"); // 1
    Instrmt_3_set.insert("12428024.110000");
    Instrmt_3.add_attribute("AttchPnt", "4950114.410000"); // 1
    Instrmt_3_set.insert("4950114.410000");
    Instrmt_3.add_attribute("DetchPnt", "19391938.910000"); // 1
    Instrmt_3_set.insert("19391938.910000");
    Instrmt_3.add_attribute("Issued", "IssueDate_t_700382460"); // 1
    Instrmt_3_set.insert("IssueDate_t_700382460");
    Instrmt_3.add_attribute("RepoCollSecTyp", "1808534480"); // 1
    Instrmt_3_set.insert("1808534480");
    Instrmt_3.add_attribute("RepoTrm", "329319918"); // 1
    Instrmt_3_set.insert("329319918");
    Instrmt_3.add_attribute("RepoRt", "5170223.060000"); // 1
    Instrmt_3_set.insert("5170223.060000");
    Instrmt_3.add_attribute("Fctr", "7102899.850000"); // 1
    Instrmt_3_set.insert("7102899.850000");
    Instrmt_3.add_attribute("CrdRtg", "CreditRating_t_359721958"); // 1
    Instrmt_3_set.insert("CreditRating_t_359721958");
    Instrmt_3.add_attribute("Rgstry", "InstrRegistry_t_1003381256"); // 1
    Instrmt_3_set.insert("InstrRegistry_t_1003381256");
    Instrmt_3.add_attribute("IssuCtry", "1790944249"); // 1
    Instrmt_3_set.insert("1790944249");
    Instrmt_3.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1969274018"); // 1
    Instrmt_3_set.insert("StateOrProvinceOfIssue_t_1969274018");
    Instrmt_3.add_attribute("Lcl", "LocaleOfIssue_t_657719494"); // 1
    Instrmt_3_set.insert("LocaleOfIssue_t_657719494");
    Instrmt_3.add_attribute("Redeem", "RedemptionDate_t_1614602690"); // 1
    Instrmt_3_set.insert("RedemptionDate_t_1614602690");
    Instrmt_3.add_attribute("StrkPx", "6906260.410000"); // 1
    Instrmt_3_set.insert("6906260.410000");
    Instrmt_3.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_3_set.insert("GBP");
    Instrmt_3.add_attribute("StrkMult", "15859133.100000"); // 1
    Instrmt_3_set.insert("15859133.100000");
    Instrmt_3.add_attribute("StrkValu", "1431671.540000"); // 1
    Instrmt_3_set.insert("1431671.540000");
    Instrmt_3.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_3_set.insert("3");
    Instrmt_3.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_3_set.insert("5");
    Instrmt_3.add_attribute("StrkPxBndryPrcsn", "20123774.160000"); // 1
    Instrmt_3_set.insert("20123774.160000");
    Instrmt_3.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_3_set.insert("1");
    Instrmt_3.add_attribute("OptAt", "1633268112"); // 1
    Instrmt_3_set.insert("1633268112");
    Instrmt_3.add_attribute("Mult", "15181259.750000"); // 1
    Instrmt_3_set.insert("15181259.750000");
    Instrmt_3.add_attribute("MultTyp", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_3_set.insert("1");
    Instrmt_3.add_attribute("MinPxIncr", "1214631.070000"); // 1
    Instrmt_3_set.insert("1214631.070000");
    Instrmt_3.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1451318672"); // 1
    Instrmt_3_set.insert("MinPriceIncrementAmount_t_1451318672");
    Instrmt_3.add_attribute("UOM", "Bbl"); // 1
    Instrmt_3_set.insert("Bbl");
    Instrmt_3.add_attribute("UOMQty", "713711.630000"); // 1
    Instrmt_3_set.insert("713711.630000");
    Instrmt_3.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_3_set.insert("MMbbl");
    Instrmt_3.add_attribute("PxUOMQty", "19844714.800000"); // 1
    Instrmt_3_set.insert("19844714.800000");
    Instrmt_3.add_attribute("SettlMeth", "C"); // 1
    Instrmt_3_set.insert("C");
    Instrmt_3.add_attribute("ExerStyle", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("OptPayAmt", "OptPayoutAmount_t_192401324"); // 1
    Instrmt_3_set.insert("OptPayoutAmount_t_192401324");
    Instrmt_3.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_3_set.insert("INT");
    Instrmt_3.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_3_set.insert("CDSD");
    Instrmt_3.add_attribute("ListMeth", "0"); // 1
    Instrmt_3_set.insert("0");
    Instrmt_3.add_attribute("CapPx", "6199398.100000"); // 1
    Instrmt_3_set.insert("6199398.100000");
    Instrmt_3.add_attribute("FlrPx", "19992728.980000"); // 1
    Instrmt_3_set.insert("19992728.980000");
    Instrmt_3.add_attribute("PutCall", "0"); // 1
    Instrmt_3_set.insert("0");
    Instrmt_3.add_attribute("FlexInd", "false"); // 1
    Instrmt_3_set.insert("false");
    Instrmt_3.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_3_set.insert("true");
    Instrmt_3.add_attribute("TmUnit", "S"); // 1
    Instrmt_3_set.insert("S");
    Instrmt_3.add_attribute("CpnRt", "985967.080000"); // 1
    Instrmt_3_set.insert("985967.080000");
    Instrmt_3.add_attribute("Exch", "SecurityExchange_t_1604175564"); // 1
    Instrmt_3_set.insert("SecurityExchange_t_1604175564");
    Instrmt_3.add_attribute("PosLmt", "502969355"); // 1
    Instrmt_3_set.insert("502969355");
    Instrmt_3.add_attribute("NTPosLmt", "241763862"); // 1
    Instrmt_3_set.insert("241763862");
    Instrmt_3.add_attribute("Issr", "Issuer_t_1793140294"); // 1
    Instrmt_3_set.insert("Issuer_t_1793140294");
    Instrmt_3.add_attribute("EncIssrLen", "129978171"); // 1
    Instrmt_3_set.insert("129978171");
    Instrmt_3.add_attribute("EncIssr", "EncodedIssuer_t_106657630"); // 1
    Instrmt_3_set.insert("EncodedIssuer_t_106657630");
    Instrmt_3.add_attribute("Desc", "SecurityDesc_t_433719187"); // 1
    Instrmt_3_set.insert("SecurityDesc_t_433719187");
    Instrmt_3.add_attribute("EncSecDescLen", "1763246284"); // 1
    Instrmt_3_set.insert("1763246284");
    Instrmt_3.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1624783605"); // 1
    Instrmt_3_set.insert("EncodedSecurityDesc_t_1624783605");
    Instrmt_3.add_attribute("Pool", "Pool_t_925531188"); // 1
    Instrmt_3_set.insert("Pool_t_925531188");
    Instrmt_3.add_attribute("CSetMo", "389200987"); // 1
    Instrmt_3_set.insert("389200987");
    Instrmt_3.add_attribute("CPPgm", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("CPRegT", "CPRegType_t_229366212"); // 1
    Instrmt_3_set.insert("CPRegType_t_229366212");
    Instrmt_3.add_attribute("Dated", "DatedDate_t_1878661026"); // 1
    Instrmt_3_set.insert("DatedDate_t_1878661026");
    Instrmt_3.add_attribute("IntAcrl", "InterestAccrualDate_t_1817617875"); // 1
    Instrmt_3_set.insert("InterestAccrualDate_t_1817617875");
    all_values.push_back(Instrmt_3_set);
    all_compo_names.insert("Instrmt_3_set");

    {
      xml_element AID_3{"AID"};
      multiset<string> AID_3_set;
      AID_3.add_attribute("AltID", "SecurityAltID_t_776003648"); // 2
      AID_3_set.insert("SecurityAltID_t_776003648");
      AID_3.add_attribute("AltIDSrc", "2"); // 2
      AID_3_set.insert("2");
      all_values.push_back(AID_3_set);
      all_compo_names.insert("AID_3_set");

      Instrmt_3.add_element(AID_3);
    }
    {
      xml_element SecXML_3{"SecXML"};
      multiset<string> SecXML_3_set;
      SecXML_3.add_attribute("Schema", "SecurityXMLSchema_t_1680699281"); // 2
      SecXML_3_set.insert("SecurityXMLSchema_t_1680699281");
      all_values.push_back(SecXML_3_set);
      all_compo_names.insert("SecXML_3_set");

      Instrmt_3.add_element(SecXML_3);
    }
    {
      xml_element Evnt_3{"Evnt"};
      multiset<string> Evnt_3_set;
      Evnt_3.add_attribute("EventTyp", "99"); // 2
      Evnt_3_set.insert("99");
      Evnt_3.add_attribute("Dt", "EventDate_t_1213687523"); // 2
      Evnt_3_set.insert("EventDate_t_1213687523");
      Evnt_3.add_attribute("Tm", "EventTime_t_1873100605"); // 2
      Evnt_3_set.insert("EventTime_t_1873100605");
      Evnt_3.add_attribute("Px", "16395820.980000"); // 2
      Evnt_3_set.insert("16395820.980000");
      Evnt_3.add_attribute("Txt", "EventText_t_1422016173"); // 2
      Evnt_3_set.insert("EventText_t_1422016173");
      all_values.push_back(Evnt_3_set);
      all_compo_names.insert("Evnt_3_set");

      Instrmt_3.add_element(Evnt_3);
    }
    {
      xml_element Pty_7{"Pty"};
      multiset<string> Pty_7_set;
      Pty_7.add_attribute("ID", "InstrumentPartyID_t_277740239"); // 2
      Pty_7_set.insert("InstrumentPartyID_t_277740239");
      Pty_7.add_attribute("Src", "G"); // 2
      Pty_7_set.insert("G");
      Pty_7.add_attribute("R", "31"); // 2
      Pty_7_set.insert("31");
      all_values.push_back(Pty_7_set);
      all_compo_names.insert("Pty_7_set");

      {
        xml_element Sub_7{"Sub"};
        multiset<string> Sub_7_set;
        Sub_7.add_attribute("ID", "InstrumentPartySubID_t_651653891"); // 3
        Sub_7_set.insert("InstrumentPartySubID_t_651653891");
        Sub_7.add_attribute("Typ", "23"); // 3
        Sub_7_set.insert("23");
        all_values.push_back(Sub_7_set);
        all_compo_names.insert("Sub_7_set");

        Pty_7.add_element(Sub_7);
      }
      Instrmt_3.add_element(Pty_7);
    }
    {
      xml_element CmplxEvnt_3{"CmplxEvnt"};
      multiset<string> CmplxEvnt_3_set;
      CmplxEvnt_3.add_attribute("Typ", "6"); // 2
      CmplxEvnt_3_set.insert("6");
      CmplxEvnt_3.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1716193585"); // 2
      CmplxEvnt_3_set.insert("ComplexOptPayoutAmount_t_1716193585");
      CmplxEvnt_3.add_attribute("Px", "14882942.740000"); // 2
      CmplxEvnt_3_set.insert("14882942.740000");
      CmplxEvnt_3.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_3_set.insert("3");
      CmplxEvnt_3.add_attribute("PxBndryPrcsn", "716792.920000"); // 2
      CmplxEvnt_3_set.insert("716792.920000");
      CmplxEvnt_3.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_3_set.insert("2");
      CmplxEvnt_3.add_attribute("Cond", "2"); // 2
      CmplxEvnt_3_set.insert("2");
      all_values.push_back(CmplxEvnt_3_set);
      all_compo_names.insert("CmplxEvnt_3_set");

      {
        xml_element EvntDts_3{"EvntDts"};
        multiset<string> EvntDts_3_set;
        EvntDts_3.add_attribute("StartDt", "ComplexEventStartDate_t_201657464"); // 3
        EvntDts_3_set.insert("ComplexEventStartDate_t_201657464");
        EvntDts_3.add_attribute("EndDt", "ComplexEventEndDate_t_1836715767"); // 3
        EvntDts_3_set.insert("ComplexEventEndDate_t_1836715767");
        all_values.push_back(EvntDts_3_set);
        all_compo_names.insert("EvntDts_3_set");

        {
          xml_element EvntTms_3{"EvntTms"};
          multiset<string> EvntTms_3_set;
          EvntTms_3.add_attribute("StartTm", "128781466"); // 4
          EvntTms_3_set.insert("128781466");
          EvntTms_3.add_attribute("EndTm", "1964903748"); // 4
          EvntTms_3_set.insert("1964903748");
          all_values.push_back(EvntTms_3_set);
          all_compo_names.insert("EvntTms_3_set");

          EvntDts_3.add_element(EvntTms_3);
        }
        CmplxEvnt_3.add_element(EvntDts_3);
      }
      Instrmt_3.add_element(CmplxEvnt_3);
    }
    elt.add_element(Instrmt_3);
  } // end Instrmt
  { // Leg
    xml_element Leg_0{"Leg"};
    multiset<string> Leg_0_set;
    Leg_0.add_attribute("Sym", "LegSymbol_t_1054312654"); // 1
    Leg_0_set.insert("LegSymbol_t_1054312654");
    Leg_0.add_attribute("Sfx", "WI"); // 1
    Leg_0_set.insert("WI");
    Leg_0.add_attribute("ID", "LegSecurityID_t_912778789"); // 1
    Leg_0_set.insert("LegSecurityID_t_912778789");
    Leg_0.add_attribute("Src", "9"); // 1
    Leg_0_set.insert("9");
    Leg_0.add_attribute("Prod", "3"); // 1
    Leg_0_set.insert("3");
    Leg_0.add_attribute("CFI", "LegCFICode_t_582913016"); // 1
    Leg_0_set.insert("LegCFICode_t_582913016");
    Leg_0.add_attribute("SecTyp", "SPCLO"); // 1
    Leg_0_set.insert("SPCLO");
    Leg_0.add_attribute("SecSubTyp", "LegSecuritySubType_t_1653447325"); // 1
    Leg_0_set.insert("LegSecuritySubType_t_1653447325");
    Leg_0.add_attribute("MMY", "116128650"); // 1
    Leg_0_set.insert("116128650");
    Leg_0.add_attribute("Mat", "LegMaturityDate_t_1935222410"); // 1
    Leg_0_set.insert("LegMaturityDate_t_1935222410");
    Leg_0.add_attribute("MatTm", "719651200"); // 1
    Leg_0_set.insert("719651200");
    Leg_0.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1989229255"); // 1
    Leg_0_set.insert("LegCouponPaymentDate_t_1989229255");
    Leg_0.add_attribute("Issued", "LegIssueDate_t_1427320861"); // 1
    Leg_0_set.insert("LegIssueDate_t_1427320861");
    Leg_0.add_attribute("RepoCollSecTyp", "2141667373"); // 1
    Leg_0_set.insert("2141667373");
    Leg_0.add_attribute("RepoTrm", "119485847"); // 1
    Leg_0_set.insert("119485847");
    Leg_0.add_attribute("RepoRt", "15393591.220000"); // 1
    Leg_0_set.insert("15393591.220000");
    Leg_0.add_attribute("Fctr", "12679891.490000"); // 1
    Leg_0_set.insert("12679891.490000");
    Leg_0.add_attribute("CrdRtg", "LegCreditRating_t_771139738"); // 1
    Leg_0_set.insert("LegCreditRating_t_771139738");
    Leg_0.add_attribute("Rgstry", "LegInstrRegistry_t_781573040"); // 1
    Leg_0_set.insert("LegInstrRegistry_t_781573040");
    Leg_0.add_attribute("Ctry", "1860702865"); // 1
    Leg_0_set.insert("1860702865");
    Leg_0.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_339849675"); // 1
    Leg_0_set.insert("LegStateOrProvinceOfIssue_t_339849675");
    Leg_0.add_attribute("Lcl", "LegLocaleOfIssue_t_122383666"); // 1
    Leg_0_set.insert("LegLocaleOfIssue_t_122383666");
    Leg_0.add_attribute("Redeem", "LegRedemptionDate_t_1910108497"); // 1
    Leg_0_set.insert("LegRedemptionDate_t_1910108497");
    Leg_0.add_attribute("Strk", "4115289.680000"); // 1
    Leg_0_set.insert("4115289.680000");
    Leg_0.add_attribute("StrkCcy", "JPY"); // 1
    Leg_0_set.insert("JPY");
    Leg_0.add_attribute("OptA", "613186432"); // 1
    Leg_0_set.insert("613186432");
    Leg_0.add_attribute("Cmult", "15416739.210000"); // 1
    Leg_0_set.insert("15416739.210000");
    Leg_0.add_attribute("MultTyp", "2"); // 1
    Leg_0_set.insert("2");
    Leg_0.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_0_set.insert("2");
    Leg_0.add_attribute("UOM", "MMbbl"); // 1
    Leg_0_set.insert("MMbbl");
    Leg_0.add_attribute("UOMQty", "6407812.480000"); // 1
    Leg_0_set.insert("6407812.480000");
    Leg_0.add_attribute("PxUOM", "Bbl"); // 1
    Leg_0_set.insert("Bbl");
    Leg_0.add_attribute("PxUOMQty", "16209847.870000"); // 1
    Leg_0_set.insert("16209847.870000");
    Leg_0.add_attribute("TmUnit", "Wk"); // 1
    Leg_0_set.insert("Wk");
    Leg_0.add_attribute("ExerStyle", "2"); // 1
    Leg_0_set.insert("2");
    Leg_0.add_attribute("CpnRt", "564141.550000"); // 1
    Leg_0_set.insert("564141.550000");
    Leg_0.add_attribute("Exch", "LegSecurityExchange_t_1836658981"); // 1
    Leg_0_set.insert("LegSecurityExchange_t_1836658981");
    Leg_0.add_attribute("Issr", "LegIssuer_t_80989762"); // 1
    Leg_0_set.insert("LegIssuer_t_80989762");
    Leg_0.add_attribute("EncLegIssrLen", "172542805"); // 1
    Leg_0_set.insert("172542805");
    Leg_0.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1624397744"); // 1
    Leg_0_set.insert("EncodedLegIssuer_t_1624397744");
    Leg_0.add_attribute("Desc", "LegSecurityDesc_t_800640963"); // 1
    Leg_0_set.insert("LegSecurityDesc_t_800640963");
    Leg_0.add_attribute("EncLegSecDescLen", "14288413"); // 1
    Leg_0_set.insert("14288413");
    Leg_0.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_904234957"); // 1
    Leg_0_set.insert("EncodedLegSecurityDesc_t_904234957");
    Leg_0.add_attribute("RatioQty", "7948246.880000"); // 1
    Leg_0_set.insert("7948246.880000");
    Leg_0.add_attribute("Side", "5"); // 1
    Leg_0_set.insert("5");
    Leg_0.add_attribute("Ccy", "EUR"); // 1
    Leg_0_set.insert("EUR");
    Leg_0.add_attribute("Pool", "LegPool_t_904913998"); // 1
    Leg_0_set.insert("LegPool_t_904913998");
    Leg_0.add_attribute("Dated", "LegDatedDate_t_1077683471"); // 1
    Leg_0_set.insert("LegDatedDate_t_1077683471");
    Leg_0.add_attribute("CSetMo", "1776033054"); // 1
    Leg_0_set.insert("1776033054");
    Leg_0.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1244763674"); // 1
    Leg_0_set.insert("LegInterestAccrualDate_t_1244763674");
    Leg_0.add_attribute("PutCall", "1200067137"); // 1
    Leg_0_set.insert("1200067137");
    Leg_0.add_attribute("LegOptionRatio", "15386579.040000"); // 1
    Leg_0_set.insert("15386579.040000");
    Leg_0.add_attribute("Px", "16562926.420000"); // 1
    Leg_0_set.insert("16562926.420000");
    all_values.push_back(Leg_0_set);
    all_compo_names.insert("Leg_0_set");

    {
      xml_element LegAID_0{"LegAID"};
      multiset<string> LegAID_0_set;
      LegAID_0.add_attribute("SecAltID", "LegSecurityAltID_t_905025291"); // 2
      LegAID_0_set.insert("LegSecurityAltID_t_905025291");
      LegAID_0.add_attribute("SecAltIDSrc", "D"); // 2
      LegAID_0_set.insert("D");
      all_values.push_back(LegAID_0_set);
      all_compo_names.insert("LegAID_0_set");

      Leg_0.add_element(LegAID_0);
    }
    elt.add_element(Leg_0);
  } // end Leg
  { // Leg
    xml_element Leg_1{"Leg"};
    multiset<string> Leg_1_set;
    Leg_1.add_attribute("Sym", "LegSymbol_t_121995426"); // 1
    Leg_1_set.insert("LegSymbol_t_121995426");
    Leg_1.add_attribute("Sfx", "WI"); // 1
    Leg_1_set.insert("WI");
    Leg_1.add_attribute("ID", "LegSecurityID_t_582813627"); // 1
    Leg_1_set.insert("LegSecurityID_t_582813627");
    Leg_1.add_attribute("Src", "J"); // 1
    Leg_1_set.insert("J");
    Leg_1.add_attribute("Prod", "2"); // 1
    Leg_1_set.insert("2");
    Leg_1.add_attribute("CFI", "LegCFICode_t_1223594875"); // 1
    Leg_1_set.insert("LegCFICode_t_1223594875");
    Leg_1.add_attribute("SecTyp", "RETIRED"); // 1
    Leg_1_set.insert("RETIRED");
    Leg_1.add_attribute("SecSubTyp", "LegSecuritySubType_t_480922702"); // 1
    Leg_1_set.insert("LegSecuritySubType_t_480922702");
    Leg_1.add_attribute("MMY", "1000571342"); // 1
    Leg_1_set.insert("1000571342");
    Leg_1.add_attribute("Mat", "LegMaturityDate_t_1764855663"); // 1
    Leg_1_set.insert("LegMaturityDate_t_1764855663");
    Leg_1.add_attribute("MatTm", "537336857"); // 1
    Leg_1_set.insert("537336857");
    Leg_1.add_attribute("CpnPmt", "LegCouponPaymentDate_t_689746676"); // 1
    Leg_1_set.insert("LegCouponPaymentDate_t_689746676");
    Leg_1.add_attribute("Issued", "LegIssueDate_t_1845845425"); // 1
    Leg_1_set.insert("LegIssueDate_t_1845845425");
    Leg_1.add_attribute("RepoCollSecTyp", "709879663"); // 1
    Leg_1_set.insert("709879663");
    Leg_1.add_attribute("RepoTrm", "166660772"); // 1
    Leg_1_set.insert("166660772");
    Leg_1.add_attribute("RepoRt", "4990027.400000"); // 1
    Leg_1_set.insert("4990027.400000");
    Leg_1.add_attribute("Fctr", "7241680.760000"); // 1
    Leg_1_set.insert("7241680.760000");
    Leg_1.add_attribute("CrdRtg", "LegCreditRating_t_1070895729"); // 1
    Leg_1_set.insert("LegCreditRating_t_1070895729");
    Leg_1.add_attribute("Rgstry", "LegInstrRegistry_t_1293827429"); // 1
    Leg_1_set.insert("LegInstrRegistry_t_1293827429");
    Leg_1.add_attribute("Ctry", "857942336"); // 1
    Leg_1_set.insert("857942336");
    Leg_1.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1367006160"); // 1
    Leg_1_set.insert("LegStateOrProvinceOfIssue_t_1367006160");
    Leg_1.add_attribute("Lcl", "LegLocaleOfIssue_t_1209157618"); // 1
    Leg_1_set.insert("LegLocaleOfIssue_t_1209157618");
    Leg_1.add_attribute("Redeem", "LegRedemptionDate_t_1762856334"); // 1
    Leg_1_set.insert("LegRedemptionDate_t_1762856334");
    Leg_1.add_attribute("Strk", "2972059.830000"); // 1
    Leg_1_set.insert("2972059.830000");
    Leg_1.add_attribute("StrkCcy", "USD"); // 1
    Leg_1_set.insert("USD");
    Leg_1.add_attribute("OptA", "1497273120"); // 1
    Leg_1_set.insert("1497273120");
    Leg_1.add_attribute("Cmult", "2288812.810000"); // 1
    Leg_1_set.insert("2288812.810000");
    Leg_1.add_attribute("MultTyp", "2"); // 1
    Leg_1_set.insert("2");
    Leg_1.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_1_set.insert("3");
    Leg_1.add_attribute("UOM", "Alw"); // 1
    Leg_1_set.insert("Alw");
    Leg_1.add_attribute("UOMQty", "4909407.800000"); // 1
    Leg_1_set.insert("4909407.800000");
    Leg_1.add_attribute("PxUOM", "lbs"); // 1
    Leg_1_set.insert("lbs");
    Leg_1.add_attribute("PxUOMQty", "18080399.400000"); // 1
    Leg_1_set.insert("18080399.400000");
    Leg_1.add_attribute("TmUnit", "S"); // 1
    Leg_1_set.insert("S");
    Leg_1.add_attribute("ExerStyle", "2"); // 1
    Leg_1_set.insert("2");
    Leg_1.add_attribute("CpnRt", "8841511.680000"); // 1
    Leg_1_set.insert("8841511.680000");
    Leg_1.add_attribute("Exch", "LegSecurityExchange_t_85888668"); // 1
    Leg_1_set.insert("LegSecurityExchange_t_85888668");
    Leg_1.add_attribute("Issr", "LegIssuer_t_2042374593"); // 1
    Leg_1_set.insert("LegIssuer_t_2042374593");
    Leg_1.add_attribute("EncLegIssrLen", "1884722510"); // 1
    Leg_1_set.insert("1884722510");
    Leg_1.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1850744331"); // 1
    Leg_1_set.insert("EncodedLegIssuer_t_1850744331");
    Leg_1.add_attribute("Desc", "LegSecurityDesc_t_432227803"); // 1
    Leg_1_set.insert("LegSecurityDesc_t_432227803");
    Leg_1.add_attribute("EncLegSecDescLen", "426985538"); // 1
    Leg_1_set.insert("426985538");
    Leg_1.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1549106108"); // 1
    Leg_1_set.insert("EncodedLegSecurityDesc_t_1549106108");
    Leg_1.add_attribute("RatioQty", "11421074.660000"); // 1
    Leg_1_set.insert("11421074.660000");
    Leg_1.add_attribute("Side", "7"); // 1
    Leg_1_set.insert("7");
    Leg_1.add_attribute("Ccy", "JPY"); // 1
    Leg_1_set.insert("JPY");
    Leg_1.add_attribute("Pool", "LegPool_t_1664542039"); // 1
    Leg_1_set.insert("LegPool_t_1664542039");
    Leg_1.add_attribute("Dated", "LegDatedDate_t_1194452630"); // 1
    Leg_1_set.insert("LegDatedDate_t_1194452630");
    Leg_1.add_attribute("CSetMo", "576734230"); // 1
    Leg_1_set.insert("576734230");
    Leg_1.add_attribute("IntAcrl", "LegInterestAccrualDate_t_884064551"); // 1
    Leg_1_set.insert("LegInterestAccrualDate_t_884064551");
    Leg_1.add_attribute("PutCall", "256126600"); // 1
    Leg_1_set.insert("256126600");
    Leg_1.add_attribute("LegOptionRatio", "1921069.160000"); // 1
    Leg_1_set.insert("1921069.160000");
    Leg_1.add_attribute("Px", "11812705.340000"); // 1
    Leg_1_set.insert("11812705.340000");
    all_values.push_back(Leg_1_set);
    all_compo_names.insert("Leg_1_set");

    {
      xml_element LegAID_1{"LegAID"};
      multiset<string> LegAID_1_set;
      LegAID_1.add_attribute("SecAltID", "LegSecurityAltID_t_1093833625"); // 2
      LegAID_1_set.insert("LegSecurityAltID_t_1093833625");
      LegAID_1.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_1_set.insert("L");
      all_values.push_back(LegAID_1_set);
      all_compo_names.insert("LegAID_1_set");

      Leg_1.add_element(LegAID_1);
    }
    elt.add_element(Leg_1);
  } // end Leg
  { // Undly
    xml_element Undly_0{"Undly"};
    multiset<string> Undly_0_set;
    Undly_0.add_attribute("Sym", "UnderlyingSymbol_t_1322714906"); // 1
    Undly_0_set.insert("UnderlyingSymbol_t_1322714906");
    Undly_0.add_attribute("Sfx", "WI"); // 1
    Undly_0_set.insert("WI");
    Undly_0.add_attribute("ID", "UnderlyingSecurityID_t_785874770"); // 1
    Undly_0_set.insert("UnderlyingSecurityID_t_785874770");
    Undly_0.add_attribute("Src", "K"); // 1
    Undly_0_set.insert("K");
    Undly_0.add_attribute("Prod", "8"); // 1
    Undly_0_set.insert("8");
    Undly_0.add_attribute("CFI", "UnderlyingCFICode_t_1339905098"); // 1
    Undly_0_set.insert("UnderlyingCFICode_t_1339905098");
    Undly_0.add_attribute("SecTyp", "TBOND"); // 1
    Undly_0_set.insert("TBOND");
    Undly_0.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_808188502"); // 1
    Undly_0_set.insert("UnderlyingSecuritySubType_t_808188502");
    Undly_0.add_attribute("MMY", "753873342"); // 1
    Undly_0_set.insert("753873342");
    Undly_0.add_attribute("Mat", "UnderlyingMaturityDate_t_945165032"); // 1
    Undly_0_set.insert("UnderlyingMaturityDate_t_945165032");
    Undly_0.add_attribute("MatTm", "894077170"); // 1
    Undly_0_set.insert("894077170");
    Undly_0.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_648764287"); // 1
    Undly_0_set.insert("UnderlyingCouponPaymentDate_t_648764287");
    Undly_0.add_attribute("RestrctTyp", "XR"); // 1
    Undly_0_set.insert("XR");
    Undly_0.add_attribute("Snrty", "SB"); // 1
    Undly_0_set.insert("SB");
    Undly_0.add_attribute("NotlPctOut", "10809920.900000"); // 1
    Undly_0_set.insert("10809920.900000");
    Undly_0.add_attribute("OrigNotlPctOut", "11093894.330000"); // 1
    Undly_0_set.insert("11093894.330000");
    Undly_0.add_attribute("AttchPnt", "21464439.620000"); // 1
    Undly_0_set.insert("21464439.620000");
    Undly_0.add_attribute("DetchPnt", "756159.080000"); // 1
    Undly_0_set.insert("756159.080000");
    Undly_0.add_attribute("Issued", "UnderlyingIssueDate_t_1703035744"); // 1
    Undly_0_set.insert("UnderlyingIssueDate_t_1703035744");
    Undly_0.add_attribute("RepoCollSecTyp", "2047069163"); // 1
    Undly_0_set.insert("2047069163");
    Undly_0.add_attribute("RepoTrm", "1941891450"); // 1
    Undly_0_set.insert("1941891450");
    Undly_0.add_attribute("RepoRt", "12200941.350000"); // 1
    Undly_0_set.insert("12200941.350000");
    Undly_0.add_attribute("Fctr", "10940381.450000"); // 1
    Undly_0_set.insert("10940381.450000");
    Undly_0.add_attribute("CrdRtg", "UnderlyingCreditRating_t_371142032"); // 1
    Undly_0_set.insert("UnderlyingCreditRating_t_371142032");
    Undly_0.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2104158687"); // 1
    Undly_0_set.insert("UnderlyingInstrRegistry_t_2104158687");
    Undly_0.add_attribute("Ctry", "1350164745"); // 1
    Undly_0_set.insert("1350164745");
    Undly_0.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_563248949"); // 1
    Undly_0_set.insert("UnderlyingStateOrProvinceOfIssue_t_563248949");
    Undly_0.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1137945573"); // 1
    Undly_0_set.insert("UnderlyingLocaleOfIssue_t_1137945573");
    Undly_0.add_attribute("Redeem", "UnderlyingRedemptionDate_t_296514723"); // 1
    Undly_0_set.insert("UnderlyingRedemptionDate_t_296514723");
    Undly_0.add_attribute("StrkPx", "16154922.260000"); // 1
    Undly_0_set.insert("16154922.260000");
    Undly_0.add_attribute("StrkCcy", "CAN"); // 1
    Undly_0_set.insert("CAN");
    Undly_0.add_attribute("OptA", "889197209"); // 1
    Undly_0_set.insert("889197209");
    Undly_0.add_attribute("Mult", "3073967.020000"); // 1
    Undly_0_set.insert("3073967.020000");
    Undly_0.add_attribute("MultTyp", "0"); // 1
    Undly_0_set.insert("0");
    Undly_0.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_0_set.insert("3");
    Undly_0.add_attribute("UOM", "MMBtu"); // 1
    Undly_0_set.insert("MMBtu");
    Undly_0.add_attribute("UOMQty", "20807010.660000"); // 1
    Undly_0_set.insert("20807010.660000");
    Undly_0.add_attribute("PxUOM", "USD"); // 1
    Undly_0_set.insert("USD");
    Undly_0.add_attribute("PxUOMQty", "2536914.940000"); // 1
    Undly_0_set.insert("2536914.940000");
    Undly_0.add_attribute("TmUnit", "Min"); // 1
    Undly_0_set.insert("Min");
    Undly_0.add_attribute("ExerStyle", "0"); // 1
    Undly_0_set.insert("0");
    Undly_0.add_attribute("CpnRt", "9024557.820000"); // 1
    Undly_0_set.insert("9024557.820000");
    Undly_0.add_attribute("Exch", "UnderlyingSecurityExchange_t_1560786345"); // 1
    Undly_0_set.insert("UnderlyingSecurityExchange_t_1560786345");
    Undly_0.add_attribute("Issr", "UnderlyingIssuer_t_805962852"); // 1
    Undly_0_set.insert("UnderlyingIssuer_t_805962852");
    Undly_0.add_attribute("EncUndIssrLen", "1983447872"); // 1
    Undly_0_set.insert("1983447872");
    Undly_0.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_522692131"); // 1
    Undly_0_set.insert("EncodedUnderlyingIssuer_t_522692131");
    Undly_0.add_attribute("Desc", "UnderlyingSecurityDesc_t_804923166"); // 1
    Undly_0_set.insert("UnderlyingSecurityDesc_t_804923166");
    Undly_0.add_attribute("EncUndSecDescLen", "2059063781"); // 1
    Undly_0_set.insert("2059063781");
    Undly_0.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_78244227"); // 1
    Undly_0_set.insert("EncodedUnderlyingSecurityDesc_t_78244227");
    Undly_0.add_attribute("CPPgm", "UnderlyingCPProgram_t_704508681"); // 1
    Undly_0_set.insert("UnderlyingCPProgram_t_704508681");
    Undly_0.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1853471583"); // 1
    Undly_0_set.insert("UnderlyingCPRegType_t_1853471583");
    Undly_0.add_attribute("AllocPct", "12983383.620000"); // 1
    Undly_0_set.insert("12983383.620000");
    Undly_0.add_attribute("Ccy", "JPY"); // 1
    Undly_0_set.insert("JPY");
    Undly_0.add_attribute("Qty", "12550134.010000"); // 1
    Undly_0_set.insert("12550134.010000");
    Undly_0.add_attribute("SettlTyp", "2"); // 1
    Undly_0_set.insert("2");
    Undly_0.add_attribute("CashAmt", "UnderlyingCashAmount_t_640378917"); // 1
    Undly_0_set.insert("UnderlyingCashAmount_t_640378917");
    Undly_0.add_attribute("CashTyp", "DIFF"); // 1
    Undly_0_set.insert("DIFF");
    Undly_0.add_attribute("Px", "12977426.460000"); // 1
    Undly_0_set.insert("12977426.460000");
    Undly_0.add_attribute("DirtPx", "1083874.950000"); // 1
    Undly_0_set.insert("1083874.950000");
    Undly_0.add_attribute("EndPx", "19144809.070000"); // 1
    Undly_0_set.insert("19144809.070000");
    Undly_0.add_attribute("StartVal", "UnderlyingStartValue_t_769488628"); // 1
    Undly_0_set.insert("UnderlyingStartValue_t_769488628");
    Undly_0.add_attribute("CurVal", "UnderlyingCurrentValue_t_997584704"); // 1
    Undly_0_set.insert("UnderlyingCurrentValue_t_997584704");
    Undly_0.add_attribute("EndVal", "UnderlyingEndValue_t_74393961"); // 1
    Undly_0_set.insert("UnderlyingEndValue_t_74393961");
    Undly_0.add_attribute("AdjQty", "6416921.810000"); // 1
    Undly_0_set.insert("6416921.810000");
    Undly_0.add_attribute("FxRate", "16514276.780000"); // 1
    Undly_0_set.insert("16514276.780000");
    Undly_0.add_attribute("FxRateCalc", "D"); // 1
    Undly_0_set.insert("D");
    Undly_0.add_attribute("CapValu", "UnderlyingCapValue_t_574909599"); // 1
    Undly_0_set.insert("UnderlyingCapValue_t_574909599");
    Undly_0.add_attribute("SetMeth", "UnderlyingSettlMethod_t_965975506"); // 1
    Undly_0_set.insert("UnderlyingSettlMethod_t_965975506");
    Undly_0.add_attribute("PutCall", "1975387256"); // 1
    Undly_0_set.insert("1975387256");
    all_values.push_back(Undly_0_set);
    all_compo_names.insert("Undly_0_set");

    {
      xml_element UndAID_0{"UndAID"};
      multiset<string> UndAID_0_set;
      UndAID_0.add_attribute("AltID", "UnderlyingSecurityAltID_t_1453292050"); // 2
      UndAID_0_set.insert("UnderlyingSecurityAltID_t_1453292050");
      UndAID_0.add_attribute("AltIDSrc", "1"); // 2
      UndAID_0_set.insert("1");
      all_values.push_back(UndAID_0_set);
      all_compo_names.insert("UndAID_0_set");

      Undly_0.add_element(UndAID_0);
    }
    {
      xml_element Stip_0{"Stip"};
      multiset<string> Stip_0_set;
      Stip_0.add_attribute("Typ", "PIECES"); // 2
      Stip_0_set.insert("PIECES");
      Stip_0.add_attribute("Val", "UnderlyingStipValue_t_866594747"); // 2
      Stip_0_set.insert("UnderlyingStipValue_t_866594747");
      all_values.push_back(Stip_0_set);
      all_compo_names.insert("Stip_0_set");

      Undly_0.add_element(Stip_0);
    }
    {
      xml_element Pty_8{"Pty"};
      multiset<string> Pty_8_set;
      Pty_8.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1980563356"); // 2
      Pty_8_set.insert("UnderlyingInstrumentPartyID_t_1980563356");
      Pty_8.add_attribute("Src", "1"); // 2
      Pty_8_set.insert("1");
      Pty_8.add_attribute("R", "45"); // 2
      Pty_8_set.insert("45");
      all_values.push_back(Pty_8_set);
      all_compo_names.insert("Pty_8_set");

      {
        xml_element Sub_8{"Sub"};
        multiset<string> Sub_8_set;
        Sub_8.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_638002874"); // 3
        Sub_8_set.insert("UnderlyingInstrumentPartySubID_t_638002874");
        Sub_8.add_attribute("Typ", "8"); // 3
        Sub_8_set.insert("8");
        all_values.push_back(Sub_8_set);
        all_compo_names.insert("Sub_8_set");

        Pty_8.add_element(Sub_8);
      }
      Undly_0.add_element(Pty_8);
    }
    elt.add_element(Undly_0);
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
