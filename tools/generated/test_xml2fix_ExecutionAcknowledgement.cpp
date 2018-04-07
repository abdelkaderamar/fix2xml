#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ExecutionAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionAcknowledgement_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ExecAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionAcknowledgement_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1158657406"); // 0
  ExecutionAcknowledgement_message_t_0.insert("OrderID_t_1158657406");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_580653561"); // 0
  ExecutionAcknowledgement_message_t_0.insert("SecondaryOrderID_t_580653561");
  elt.add_attribute("ID", "ClOrdID_t_1630377642"); // 0
  ExecutionAcknowledgement_message_t_0.insert("ClOrdID_t_1630377642");
  elt.add_attribute("ExecAckStat", "1"); // 0
  ExecutionAcknowledgement_message_t_0.insert("1");
  elt.add_attribute("ExecID", "ExecID_t_1478163277"); // 0
  ExecutionAcknowledgement_message_t_0.insert("ExecID_t_1478163277");
  elt.add_attribute("DkRsn", "C"); // 0
  ExecutionAcknowledgement_message_t_0.insert("C");
  elt.add_attribute("Side", "7"); // 0
  ExecutionAcknowledgement_message_t_0.insert("7");
  elt.add_attribute("LastQty", "17817306.630000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("17817306.630000");
  elt.add_attribute("LastPx", "4721606.540000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("4721606.540000");
  elt.add_attribute("PxTyp", "8"); // 0
  ExecutionAcknowledgement_message_t_0.insert("8");
  elt.add_attribute("LastParPx", "16521627.090000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("16521627.090000");
  elt.add_attribute("CumQty", "21099097.370000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("21099097.370000");
  elt.add_attribute("AvgPx", "4472732.640000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("4472732.640000");
  elt.add_attribute("Txt", "Text_t_1725966819"); // 0
  ExecutionAcknowledgement_message_t_0.insert("Text_t_1725966819");
  elt.add_attribute("EncTxtLen", "1082189261"); // 0
  ExecutionAcknowledgement_message_t_0.insert("1082189261");
  elt.add_attribute("EncTxt", "EncodedText_t_1003598549"); // 0
  ExecutionAcknowledgement_message_t_0.insert("EncodedText_t_1003598549");
  all_values.push_back(ExecutionAcknowledgement_message_t_0);
  all_compo_names.insert("ExecutionAcknowledgement_message_t");

  { // Hdr
    xml_element Hdr_31{"Hdr"};
    multiset<string> Hdr_31_set;
    Hdr_31.add_attribute("SeqNum", "161415019"); // 1
    Hdr_31_set.insert("161415019");
    Hdr_31.add_attribute("SID", "SenderCompID_t_674980623"); // 1
    Hdr_31_set.insert("SenderCompID_t_674980623");
    Hdr_31.add_attribute("TID", "TargetCompID_t_1070397336"); // 1
    Hdr_31_set.insert("TargetCompID_t_1070397336");
    Hdr_31.add_attribute("OBID", "OnBehalfOfCompID_t_473346836"); // 1
    Hdr_31_set.insert("OnBehalfOfCompID_t_473346836");
    Hdr_31.add_attribute("D2ID", "DeliverToCompID_t_1600918037"); // 1
    Hdr_31_set.insert("DeliverToCompID_t_1600918037");
    Hdr_31.add_attribute("SSub", "SenderSubID_t_1848127146"); // 1
    Hdr_31_set.insert("SenderSubID_t_1848127146");
    Hdr_31.add_attribute("SLoc", "SenderLocationID_t_103609360"); // 1
    Hdr_31_set.insert("SenderLocationID_t_103609360");
    Hdr_31.add_attribute("TSub", "TargetSubID_t_923006410"); // 1
    Hdr_31_set.insert("TargetSubID_t_923006410");
    Hdr_31.add_attribute("TLoc", "TargetLocationID_t_2131876322"); // 1
    Hdr_31_set.insert("TargetLocationID_t_2131876322");
    Hdr_31.add_attribute("OBSub", "OnBehalfOfSubID_t_2088320313"); // 1
    Hdr_31_set.insert("OnBehalfOfSubID_t_2088320313");
    Hdr_31.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1062094456"); // 1
    Hdr_31_set.insert("OnBehalfOfLocationID_t_1062094456");
    Hdr_31.add_attribute("D2Sub", "DeliverToSubID_t_234737325"); // 1
    Hdr_31_set.insert("DeliverToSubID_t_234737325");
    Hdr_31.add_attribute("D2Loc", "DeliverToLocationID_t_226110089"); // 1
    Hdr_31_set.insert("DeliverToLocationID_t_226110089");
    Hdr_31.add_attribute("PosDup", "Y"); // 1
    Hdr_31_set.insert("Y");
    Hdr_31.add_attribute("PosRsnd", "N"); // 1
    Hdr_31_set.insert("N");
    Hdr_31.add_attribute("Snt", "SendingTime_t_1384767495"); // 1
    Hdr_31_set.insert("SendingTime_t_1384767495");
    Hdr_31.add_attribute("OrigSnt", "OrigSendingTime_t_1698114332"); // 1
    Hdr_31_set.insert("OrigSendingTime_t_1698114332");
    Hdr_31.add_attribute("MsgEncd", "MessageEncoding_t_1616990738"); // 1
    Hdr_31_set.insert("MessageEncoding_t_1616990738");
    all_values.push_back(Hdr_31_set);
    all_compo_names.insert("Hdr_31_set");

    {
      xml_element Hop_31{"Hop"};
      multiset<string> Hop_31_set;
      Hop_31.add_attribute("ID", "HopCompID_t_402874901"); // 2
      Hop_31_set.insert("HopCompID_t_402874901");
      Hop_31.add_attribute("Ref", "1028793961"); // 2
      Hop_31_set.insert("1028793961");
      Hop_31.add_attribute("Snt", "HopSendingTime_t_589313228"); // 2
      Hop_31_set.insert("HopSendingTime_t_589313228");
      all_values.push_back(Hop_31_set);
      all_compo_names.insert("Hop_31_set");

      Hdr_31.add_element(Hop_31);
    }
    elt.add_element(Hdr_31);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_26{"Instrmt"};
    multiset<string> Instrmt_26_set;
    Instrmt_26.add_attribute("Sym", "Symbol_t_342437547"); // 1
    Instrmt_26_set.insert("Symbol_t_342437547");
    Instrmt_26.add_attribute("Sfx", "WI"); // 1
    Instrmt_26_set.insert("WI");
    Instrmt_26.add_attribute("ID", "SecurityID_t_1061473882"); // 1
    Instrmt_26_set.insert("SecurityID_t_1061473882");
    Instrmt_26.add_attribute("Src", "K"); // 1
    Instrmt_26_set.insert("K");
    Instrmt_26.add_attribute("Prod", "2"); // 1
    Instrmt_26_set.insert("2");
    Instrmt_26.add_attribute("ProdCmplx", "ProductComplex_t_1023899971"); // 1
    Instrmt_26_set.insert("ProductComplex_t_1023899971");
    Instrmt_26.add_attribute("SecGrp", "SecurityGroup_t_734941984"); // 1
    Instrmt_26_set.insert("SecurityGroup_t_734941984");
    Instrmt_26.add_attribute("CFI", "CFICode_t_1893686857"); // 1
    Instrmt_26_set.insert("CFICode_t_1893686857");
    Instrmt_26.add_attribute("SecTyp", "CASH"); // 1
    Instrmt_26_set.insert("CASH");
    Instrmt_26.add_attribute("SubTyp", "SecuritySubType_t_1738540534"); // 1
    Instrmt_26_set.insert("SecuritySubType_t_1738540534");
    Instrmt_26.add_attribute("MMY", "2055101876"); // 1
    Instrmt_26_set.insert("2055101876");
    Instrmt_26.add_attribute("MatDt", "MaturityDate_t_633586208"); // 1
    Instrmt_26_set.insert("MaturityDate_t_633586208");
    Instrmt_26.add_attribute("MatTm", "661454222"); // 1
    Instrmt_26_set.insert("661454222");
    Instrmt_26.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_380965065"); // 1
    Instrmt_26_set.insert("SettleOnOpenFlag_t_380965065");
    Instrmt_26.add_attribute("AsgnMeth", "87020597"); // 1
    Instrmt_26_set.insert("87020597");
    Instrmt_26.add_attribute("Status", "1"); // 1
    Instrmt_26_set.insert("1");
    Instrmt_26.add_attribute("CpnPmt", "CouponPaymentDate_t_484574425"); // 1
    Instrmt_26_set.insert("CouponPaymentDate_t_484574425");
    Instrmt_26.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_26_set.insert("XR");
    Instrmt_26.add_attribute("Snrty", "SR"); // 1
    Instrmt_26_set.insert("SR");
    Instrmt_26.add_attribute("NotlPctOut", "4254110.900000"); // 1
    Instrmt_26_set.insert("4254110.900000");
    Instrmt_26.add_attribute("OrigNotlPctOut", "20721214.630000"); // 1
    Instrmt_26_set.insert("20721214.630000");
    Instrmt_26.add_attribute("AttchPnt", "5812277.200000"); // 1
    Instrmt_26_set.insert("5812277.200000");
    Instrmt_26.add_attribute("DetchPnt", "6515211.790000"); // 1
    Instrmt_26_set.insert("6515211.790000");
    Instrmt_26.add_attribute("Issued", "IssueDate_t_1042098586"); // 1
    Instrmt_26_set.insert("IssueDate_t_1042098586");
    Instrmt_26.add_attribute("RepoCollSecTyp", "567840816"); // 1
    Instrmt_26_set.insert("567840816");
    Instrmt_26.add_attribute("RepoTrm", "2036288674"); // 1
    Instrmt_26_set.insert("2036288674");
    Instrmt_26.add_attribute("RepoRt", "5927292.710000"); // 1
    Instrmt_26_set.insert("5927292.710000");
    Instrmt_26.add_attribute("Fctr", "373479.070000"); // 1
    Instrmt_26_set.insert("373479.070000");
    Instrmt_26.add_attribute("CrdRtg", "CreditRating_t_291679927"); // 1
    Instrmt_26_set.insert("CreditRating_t_291679927");
    Instrmt_26.add_attribute("Rgstry", "InstrRegistry_t_1621523232"); // 1
    Instrmt_26_set.insert("InstrRegistry_t_1621523232");
    Instrmt_26.add_attribute("IssuCtry", "626661135"); // 1
    Instrmt_26_set.insert("626661135");
    Instrmt_26.add_attribute("StPrv", "StateOrProvinceOfIssue_t_634117474"); // 1
    Instrmt_26_set.insert("StateOrProvinceOfIssue_t_634117474");
    Instrmt_26.add_attribute("Lcl", "LocaleOfIssue_t_137080561"); // 1
    Instrmt_26_set.insert("LocaleOfIssue_t_137080561");
    Instrmt_26.add_attribute("Redeem", "RedemptionDate_t_1688135017"); // 1
    Instrmt_26_set.insert("RedemptionDate_t_1688135017");
    Instrmt_26.add_attribute("StrkPx", "9217861.940000"); // 1
    Instrmt_26_set.insert("9217861.940000");
    Instrmt_26.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_26_set.insert("USD");
    Instrmt_26.add_attribute("StrkMult", "16567281.780000"); // 1
    Instrmt_26_set.insert("16567281.780000");
    Instrmt_26.add_attribute("StrkValu", "510038.090000"); // 1
    Instrmt_26_set.insert("510038.090000");
    Instrmt_26.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_26_set.insert("2");
    Instrmt_26.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_26_set.insert("5");
    Instrmt_26.add_attribute("StrkPxBndryPrcsn", "21061056.860000"); // 1
    Instrmt_26_set.insert("21061056.860000");
    Instrmt_26.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_26_set.insert("2");
    Instrmt_26.add_attribute("OptAt", "1909239287"); // 1
    Instrmt_26_set.insert("1909239287");
    Instrmt_26.add_attribute("Mult", "3395871.030000"); // 1
    Instrmt_26_set.insert("3395871.030000");
    Instrmt_26.add_attribute("MultTyp", "0"); // 1
    Instrmt_26_set.insert("0");
    Instrmt_26.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_26_set.insert("4");
    Instrmt_26.add_attribute("MinPxIncr", "8241615.280000"); // 1
    Instrmt_26_set.insert("8241615.280000");
    Instrmt_26.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_106307089"); // 1
    Instrmt_26_set.insert("MinPriceIncrementAmount_t_106307089");
    Instrmt_26.add_attribute("UOM", "Bcf"); // 1
    Instrmt_26_set.insert("Bcf");
    Instrmt_26.add_attribute("UOMQty", "12495726.180000"); // 1
    Instrmt_26_set.insert("12495726.180000");
    Instrmt_26.add_attribute("PxUOM", "t"); // 1
    Instrmt_26_set.insert("t");
    Instrmt_26.add_attribute("PxUOMQty", "10515714.750000"); // 1
    Instrmt_26_set.insert("10515714.750000");
    Instrmt_26.add_attribute("SettlMeth", "P"); // 1
    Instrmt_26_set.insert("P");
    Instrmt_26.add_attribute("ExerStyle", "2"); // 1
    Instrmt_26_set.insert("2");
    Instrmt_26.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_26_set.insert("1");
    Instrmt_26.add_attribute("OptPayAmt", "OptPayoutAmount_t_1789898823"); // 1
    Instrmt_26_set.insert("OptPayoutAmount_t_1789898823");
    Instrmt_26.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_26_set.insert("INT");
    Instrmt_26.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_26_set.insert("CDS");
    Instrmt_26.add_attribute("ListMeth", "0"); // 1
    Instrmt_26_set.insert("0");
    Instrmt_26.add_attribute("CapPx", "11398123.470000"); // 1
    Instrmt_26_set.insert("11398123.470000");
    Instrmt_26.add_attribute("FlrPx", "1359376.850000"); // 1
    Instrmt_26_set.insert("1359376.850000");
    Instrmt_26.add_attribute("PutCall", "0"); // 1
    Instrmt_26_set.insert("0");
    Instrmt_26.add_attribute("FlexInd", "true"); // 1
    Instrmt_26_set.insert("true");
    Instrmt_26.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_26_set.insert("true");
    Instrmt_26.add_attribute("TmUnit", "Min"); // 1
    Instrmt_26_set.insert("Min");
    Instrmt_26.add_attribute("CpnRt", "15816935.080000"); // 1
    Instrmt_26_set.insert("15816935.080000");
    Instrmt_26.add_attribute("Exch", "SecurityExchange_t_241140395"); // 1
    Instrmt_26_set.insert("SecurityExchange_t_241140395");
    Instrmt_26.add_attribute("PosLmt", "999243300"); // 1
    Instrmt_26_set.insert("999243300");
    Instrmt_26.add_attribute("NTPosLmt", "1632697318"); // 1
    Instrmt_26_set.insert("1632697318");
    Instrmt_26.add_attribute("Issr", "Issuer_t_764297320"); // 1
    Instrmt_26_set.insert("Issuer_t_764297320");
    Instrmt_26.add_attribute("EncIssrLen", "99544717"); // 1
    Instrmt_26_set.insert("99544717");
    Instrmt_26.add_attribute("EncIssr", "EncodedIssuer_t_1591319356"); // 1
    Instrmt_26_set.insert("EncodedIssuer_t_1591319356");
    Instrmt_26.add_attribute("Desc", "SecurityDesc_t_1921040453"); // 1
    Instrmt_26_set.insert("SecurityDesc_t_1921040453");
    Instrmt_26.add_attribute("EncSecDescLen", "2008784004"); // 1
    Instrmt_26_set.insert("2008784004");
    Instrmt_26.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1930906459"); // 1
    Instrmt_26_set.insert("EncodedSecurityDesc_t_1930906459");
    Instrmt_26.add_attribute("Pool", "Pool_t_1017320535"); // 1
    Instrmt_26_set.insert("Pool_t_1017320535");
    Instrmt_26.add_attribute("CSetMo", "2132637363"); // 1
    Instrmt_26_set.insert("2132637363");
    Instrmt_26.add_attribute("CPPgm", "1"); // 1
    Instrmt_26_set.insert("1");
    Instrmt_26.add_attribute("CPRegT", "CPRegType_t_1123627624"); // 1
    Instrmt_26_set.insert("CPRegType_t_1123627624");
    Instrmt_26.add_attribute("Dated", "DatedDate_t_455497470"); // 1
    Instrmt_26_set.insert("DatedDate_t_455497470");
    Instrmt_26.add_attribute("IntAcrl", "InterestAccrualDate_t_1857156957"); // 1
    Instrmt_26_set.insert("InterestAccrualDate_t_1857156957");
    all_values.push_back(Instrmt_26_set);
    all_compo_names.insert("Instrmt_26_set");

    {
      xml_element AID_29{"AID"};
      multiset<string> AID_29_set;
      AID_29.add_attribute("AltID", "SecurityAltID_t_1154572529"); // 2
      AID_29_set.insert("SecurityAltID_t_1154572529");
      AID_29.add_attribute("AltIDSrc", "L"); // 2
      AID_29_set.insert("L");
      all_values.push_back(AID_29_set);
      all_compo_names.insert("AID_29_set");

      Instrmt_26.add_element(AID_29);
    }
    {
      xml_element SecXML_29{"SecXML"};
      multiset<string> SecXML_29_set;
      SecXML_29.add_attribute("Schema", "SecurityXMLSchema_t_1610767106"); // 2
      SecXML_29_set.insert("SecurityXMLSchema_t_1610767106");
      all_values.push_back(SecXML_29_set);
      all_compo_names.insert("SecXML_29_set");

      Instrmt_26.add_element(SecXML_29);
    }
    {
      xml_element Evnt_29{"Evnt"};
      multiset<string> Evnt_29_set;
      Evnt_29.add_attribute("EventTyp", "13"); // 2
      Evnt_29_set.insert("13");
      Evnt_29.add_attribute("Dt", "EventDate_t_978997588"); // 2
      Evnt_29_set.insert("EventDate_t_978997588");
      Evnt_29.add_attribute("Tm", "EventTime_t_1253182281"); // 2
      Evnt_29_set.insert("EventTime_t_1253182281");
      Evnt_29.add_attribute("Px", "17459051.350000"); // 2
      Evnt_29_set.insert("17459051.350000");
      Evnt_29.add_attribute("Txt", "EventText_t_488274139"); // 2
      Evnt_29_set.insert("EventText_t_488274139");
      all_values.push_back(Evnt_29_set);
      all_compo_names.insert("Evnt_29_set");

      Instrmt_26.add_element(Evnt_29);
    }
    {
      xml_element Pty_157{"Pty"};
      multiset<string> Pty_157_set;
      Pty_157.add_attribute("ID", "InstrumentPartyID_t_1187277383"); // 2
      Pty_157_set.insert("InstrumentPartyID_t_1187277383");
      Pty_157.add_attribute("Src", "F"); // 2
      Pty_157_set.insert("F");
      Pty_157.add_attribute("R", "20"); // 2
      Pty_157_set.insert("20");
      all_values.push_back(Pty_157_set);
      all_compo_names.insert("Pty_157_set");

      {
        xml_element Sub_157{"Sub"};
        multiset<string> Sub_157_set;
        Sub_157.add_attribute("ID", "InstrumentPartySubID_t_1755489959"); // 3
        Sub_157_set.insert("InstrumentPartySubID_t_1755489959");
        Sub_157.add_attribute("Typ", "9"); // 3
        Sub_157_set.insert("9");
        all_values.push_back(Sub_157_set);
        all_compo_names.insert("Sub_157_set");

        Pty_157.add_element(Sub_157);
      }
      Instrmt_26.add_element(Pty_157);
    }
    {
      xml_element CmplxEvnt_26{"CmplxEvnt"};
      multiset<string> CmplxEvnt_26_set;
      CmplxEvnt_26.add_attribute("Typ", "9"); // 2
      CmplxEvnt_26_set.insert("9");
      CmplxEvnt_26.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1098005081"); // 2
      CmplxEvnt_26_set.insert("ComplexOptPayoutAmount_t_1098005081");
      CmplxEvnt_26.add_attribute("Px", "14493366.030000"); // 2
      CmplxEvnt_26_set.insert("14493366.030000");
      CmplxEvnt_26.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_26_set.insert("5");
      CmplxEvnt_26.add_attribute("PxBndryPrcsn", "20972483.810000"); // 2
      CmplxEvnt_26_set.insert("20972483.810000");
      CmplxEvnt_26.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_26_set.insert("3");
      CmplxEvnt_26.add_attribute("Cond", "1"); // 2
      CmplxEvnt_26_set.insert("1");
      all_values.push_back(CmplxEvnt_26_set);
      all_compo_names.insert("CmplxEvnt_26_set");

      {
        xml_element EvntDts_26{"EvntDts"};
        multiset<string> EvntDts_26_set;
        EvntDts_26.add_attribute("StartDt", "ComplexEventStartDate_t_49309450"); // 3
        EvntDts_26_set.insert("ComplexEventStartDate_t_49309450");
        EvntDts_26.add_attribute("EndDt", "ComplexEventEndDate_t_378385981"); // 3
        EvntDts_26_set.insert("ComplexEventEndDate_t_378385981");
        all_values.push_back(EvntDts_26_set);
        all_compo_names.insert("EvntDts_26_set");

        {
          xml_element EvntTms_26{"EvntTms"};
          multiset<string> EvntTms_26_set;
          EvntTms_26.add_attribute("StartTm", "1079795399"); // 4
          EvntTms_26_set.insert("1079795399");
          EvntTms_26.add_attribute("EndTm", "2058093454"); // 4
          EvntTms_26_set.insert("2058093454");
          all_values.push_back(EvntTms_26_set);
          all_compo_names.insert("EvntTms_26_set");

          EvntDts_26.add_element(EvntTms_26);
        }
        CmplxEvnt_26.add_element(EvntDts_26);
      }
      Instrmt_26.add_element(CmplxEvnt_26);
    }
    elt.add_element(Instrmt_26);
  } // end Instrmt
  { // Undly
    xml_element Undly_36{"Undly"};
    multiset<string> Undly_36_set;
    Undly_36.add_attribute("Sym", "UnderlyingSymbol_t_2097115934"); // 1
    Undly_36_set.insert("UnderlyingSymbol_t_2097115934");
    Undly_36.add_attribute("Sfx", "CD"); // 1
    Undly_36_set.insert("CD");
    Undly_36.add_attribute("ID", "UnderlyingSecurityID_t_769393131"); // 1
    Undly_36_set.insert("UnderlyingSecurityID_t_769393131");
    Undly_36.add_attribute("Src", "9"); // 1
    Undly_36_set.insert("9");
    Undly_36.add_attribute("Prod", "13"); // 1
    Undly_36_set.insert("13");
    Undly_36.add_attribute("CFI", "UnderlyingCFICode_t_479066440"); // 1
    Undly_36_set.insert("UnderlyingCFICode_t_479066440");
    Undly_36.add_attribute("SecTyp", "FXNDF"); // 1
    Undly_36_set.insert("FXNDF");
    Undly_36.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1858329937"); // 1
    Undly_36_set.insert("UnderlyingSecuritySubType_t_1858329937");
    Undly_36.add_attribute("MMY", "2089833546"); // 1
    Undly_36_set.insert("2089833546");
    Undly_36.add_attribute("Mat", "UnderlyingMaturityDate_t_160481165"); // 1
    Undly_36_set.insert("UnderlyingMaturityDate_t_160481165");
    Undly_36.add_attribute("MatTm", "689843877"); // 1
    Undly_36_set.insert("689843877");
    Undly_36.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1195532179"); // 1
    Undly_36_set.insert("UnderlyingCouponPaymentDate_t_1195532179");
    Undly_36.add_attribute("RestrctTyp", "FR"); // 1
    Undly_36_set.insert("FR");
    Undly_36.add_attribute("Snrty", "SR"); // 1
    Undly_36_set.insert("SR");
    Undly_36.add_attribute("NotlPctOut", "2353259.140000"); // 1
    Undly_36_set.insert("2353259.140000");
    Undly_36.add_attribute("OrigNotlPctOut", "4971364.870000"); // 1
    Undly_36_set.insert("4971364.870000");
    Undly_36.add_attribute("AttchPnt", "18023298.410000"); // 1
    Undly_36_set.insert("18023298.410000");
    Undly_36.add_attribute("DetchPnt", "19908158.730000"); // 1
    Undly_36_set.insert("19908158.730000");
    Undly_36.add_attribute("Issued", "UnderlyingIssueDate_t_364779582"); // 1
    Undly_36_set.insert("UnderlyingIssueDate_t_364779582");
    Undly_36.add_attribute("RepoCollSecTyp", "2103130720"); // 1
    Undly_36_set.insert("2103130720");
    Undly_36.add_attribute("RepoTrm", "941337306"); // 1
    Undly_36_set.insert("941337306");
    Undly_36.add_attribute("RepoRt", "18141161.850000"); // 1
    Undly_36_set.insert("18141161.850000");
    Undly_36.add_attribute("Fctr", "4975883.460000"); // 1
    Undly_36_set.insert("4975883.460000");
    Undly_36.add_attribute("CrdRtg", "UnderlyingCreditRating_t_891102040"); // 1
    Undly_36_set.insert("UnderlyingCreditRating_t_891102040");
    Undly_36.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_601182811"); // 1
    Undly_36_set.insert("UnderlyingInstrRegistry_t_601182811");
    Undly_36.add_attribute("Ctry", "1803826940"); // 1
    Undly_36_set.insert("1803826940");
    Undly_36.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_940411490"); // 1
    Undly_36_set.insert("UnderlyingStateOrProvinceOfIssue_t_940411490");
    Undly_36.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_979568792"); // 1
    Undly_36_set.insert("UnderlyingLocaleOfIssue_t_979568792");
    Undly_36.add_attribute("Redeem", "UnderlyingRedemptionDate_t_736138691"); // 1
    Undly_36_set.insert("UnderlyingRedemptionDate_t_736138691");
    Undly_36.add_attribute("StrkPx", "8510212.970000"); // 1
    Undly_36_set.insert("8510212.970000");
    Undly_36.add_attribute("StrkCcy", "CAN"); // 1
    Undly_36_set.insert("CAN");
    Undly_36.add_attribute("OptA", "746784819"); // 1
    Undly_36_set.insert("746784819");
    Undly_36.add_attribute("Mult", "19107707.160000"); // 1
    Undly_36_set.insert("19107707.160000");
    Undly_36.add_attribute("MultTyp", "0"); // 1
    Undly_36_set.insert("0");
    Undly_36.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_36_set.insert("1");
    Undly_36.add_attribute("UOM", "oz_tr"); // 1
    Undly_36_set.insert("oz_tr");
    Undly_36.add_attribute("UOMQty", "18393796.790000"); // 1
    Undly_36_set.insert("18393796.790000");
    Undly_36.add_attribute("PxUOM", "Gal"); // 1
    Undly_36_set.insert("Gal");
    Undly_36.add_attribute("PxUOMQty", "1847034.070000"); // 1
    Undly_36_set.insert("1847034.070000");
    Undly_36.add_attribute("TmUnit", "H"); // 1
    Undly_36_set.insert("H");
    Undly_36.add_attribute("ExerStyle", "0"); // 1
    Undly_36_set.insert("0");
    Undly_36.add_attribute("CpnRt", "13802355.870000"); // 1
    Undly_36_set.insert("13802355.870000");
    Undly_36.add_attribute("Exch", "UnderlyingSecurityExchange_t_1758763497"); // 1
    Undly_36_set.insert("UnderlyingSecurityExchange_t_1758763497");
    Undly_36.add_attribute("Issr", "UnderlyingIssuer_t_529370346"); // 1
    Undly_36_set.insert("UnderlyingIssuer_t_529370346");
    Undly_36.add_attribute("EncUndIssrLen", "1615561501"); // 1
    Undly_36_set.insert("1615561501");
    Undly_36.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_108416336"); // 1
    Undly_36_set.insert("EncodedUnderlyingIssuer_t_108416336");
    Undly_36.add_attribute("Desc", "UnderlyingSecurityDesc_t_184216539"); // 1
    Undly_36_set.insert("UnderlyingSecurityDesc_t_184216539");
    Undly_36.add_attribute("EncUndSecDescLen", "1458893727"); // 1
    Undly_36_set.insert("1458893727");
    Undly_36.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_473195918"); // 1
    Undly_36_set.insert("EncodedUnderlyingSecurityDesc_t_473195918");
    Undly_36.add_attribute("CPPgm", "UnderlyingCPProgram_t_139863611"); // 1
    Undly_36_set.insert("UnderlyingCPProgram_t_139863611");
    Undly_36.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_252747385"); // 1
    Undly_36_set.insert("UnderlyingCPRegType_t_252747385");
    Undly_36.add_attribute("AllocPct", "1398284.550000"); // 1
    Undly_36_set.insert("1398284.550000");
    Undly_36.add_attribute("Ccy", "CAN"); // 1
    Undly_36_set.insert("CAN");
    Undly_36.add_attribute("Qty", "7410112.660000"); // 1
    Undly_36_set.insert("7410112.660000");
    Undly_36.add_attribute("SettlTyp", "5"); // 1
    Undly_36_set.insert("5");
    Undly_36.add_attribute("CashAmt", "UnderlyingCashAmount_t_2084260916"); // 1
    Undly_36_set.insert("UnderlyingCashAmount_t_2084260916");
    Undly_36.add_attribute("CashTyp", "DIFF"); // 1
    Undly_36_set.insert("DIFF");
    Undly_36.add_attribute("Px", "10299339.400000"); // 1
    Undly_36_set.insert("10299339.400000");
    Undly_36.add_attribute("DirtPx", "7877985.650000"); // 1
    Undly_36_set.insert("7877985.650000");
    Undly_36.add_attribute("EndPx", "7144739.960000"); // 1
    Undly_36_set.insert("7144739.960000");
    Undly_36.add_attribute("StartVal", "UnderlyingStartValue_t_1715704917"); // 1
    Undly_36_set.insert("UnderlyingStartValue_t_1715704917");
    Undly_36.add_attribute("CurVal", "UnderlyingCurrentValue_t_1534583384"); // 1
    Undly_36_set.insert("UnderlyingCurrentValue_t_1534583384");
    Undly_36.add_attribute("EndVal", "UnderlyingEndValue_t_477761064"); // 1
    Undly_36_set.insert("UnderlyingEndValue_t_477761064");
    Undly_36.add_attribute("AdjQty", "13272521.560000"); // 1
    Undly_36_set.insert("13272521.560000");
    Undly_36.add_attribute("FxRate", "4851455.470000"); // 1
    Undly_36_set.insert("4851455.470000");
    Undly_36.add_attribute("FxRateCalc", "D"); // 1
    Undly_36_set.insert("D");
    Undly_36.add_attribute("CapValu", "UnderlyingCapValue_t_1019148188"); // 1
    Undly_36_set.insert("UnderlyingCapValue_t_1019148188");
    Undly_36.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1294037647"); // 1
    Undly_36_set.insert("UnderlyingSettlMethod_t_1294037647");
    Undly_36.add_attribute("PutCall", "904817981"); // 1
    Undly_36_set.insert("904817981");
    all_values.push_back(Undly_36_set);
    all_compo_names.insert("Undly_36_set");

    {
      xml_element UndAID_36{"UndAID"};
      multiset<string> UndAID_36_set;
      UndAID_36.add_attribute("AltID", "UnderlyingSecurityAltID_t_871525384"); // 2
      UndAID_36_set.insert("UnderlyingSecurityAltID_t_871525384");
      UndAID_36.add_attribute("AltIDSrc", "D"); // 2
      UndAID_36_set.insert("D");
      all_values.push_back(UndAID_36_set);
      all_compo_names.insert("UndAID_36_set");

      Undly_36.add_element(UndAID_36);
    }
    {
      xml_element Stip_53{"Stip"};
      multiset<string> Stip_53_set;
      Stip_53.add_attribute("Typ", "ABS"); // 2
      Stip_53_set.insert("ABS");
      Stip_53.add_attribute("Val", "UnderlyingStipValue_t_482805233"); // 2
      Stip_53_set.insert("UnderlyingStipValue_t_482805233");
      all_values.push_back(Stip_53_set);
      all_compo_names.insert("Stip_53_set");

      Undly_36.add_element(Stip_53);
    }
    {
      xml_element Pty_158{"Pty"};
      multiset<string> Pty_158_set;
      Pty_158.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1174660322"); // 2
      Pty_158_set.insert("UnderlyingInstrumentPartyID_t_1174660322");
      Pty_158.add_attribute("Src", "2"); // 2
      Pty_158_set.insert("2");
      Pty_158.add_attribute("R", "10"); // 2
      Pty_158_set.insert("10");
      all_values.push_back(Pty_158_set);
      all_compo_names.insert("Pty_158_set");

      {
        xml_element Sub_158{"Sub"};
        multiset<string> Sub_158_set;
        Sub_158.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1358876861"); // 3
        Sub_158_set.insert("UnderlyingInstrumentPartySubID_t_1358876861");
        Sub_158.add_attribute("Typ", "2"); // 3
        Sub_158_set.insert("2");
        all_values.push_back(Sub_158_set);
        all_compo_names.insert("Sub_158_set");

        Pty_158.add_element(Sub_158);
      }
      Undly_36.add_element(Pty_158);
    }
    elt.add_element(Undly_36);
  } // end Undly
  { // Leg
    xml_element Leg_38{"Leg"};
    multiset<string> Leg_38_set;
    Leg_38.add_attribute("Sym", "LegSymbol_t_1498740472"); // 1
    Leg_38_set.insert("LegSymbol_t_1498740472");
    Leg_38.add_attribute("Sfx", "CD"); // 1
    Leg_38_set.insert("CD");
    Leg_38.add_attribute("ID", "LegSecurityID_t_1204245943"); // 1
    Leg_38_set.insert("LegSecurityID_t_1204245943");
    Leg_38.add_attribute("Src", "L"); // 1
    Leg_38_set.insert("L");
    Leg_38.add_attribute("Prod", "7"); // 1
    Leg_38_set.insert("7");
    Leg_38.add_attribute("CFI", "LegCFICode_t_1945257209"); // 1
    Leg_38_set.insert("LegCFICode_t_1945257209");
    Leg_38.add_attribute("SecTyp", "TLQN"); // 1
    Leg_38_set.insert("TLQN");
    Leg_38.add_attribute("SecSubTyp", "LegSecuritySubType_t_250431931"); // 1
    Leg_38_set.insert("LegSecuritySubType_t_250431931");
    Leg_38.add_attribute("MMY", "1518353620"); // 1
    Leg_38_set.insert("1518353620");
    Leg_38.add_attribute("Mat", "LegMaturityDate_t_1312437970"); // 1
    Leg_38_set.insert("LegMaturityDate_t_1312437970");
    Leg_38.add_attribute("MatTm", "1038230496"); // 1
    Leg_38_set.insert("1038230496");
    Leg_38.add_attribute("CpnPmt", "LegCouponPaymentDate_t_85343968"); // 1
    Leg_38_set.insert("LegCouponPaymentDate_t_85343968");
    Leg_38.add_attribute("Issued", "LegIssueDate_t_880659239"); // 1
    Leg_38_set.insert("LegIssueDate_t_880659239");
    Leg_38.add_attribute("RepoCollSecTyp", "425330232"); // 1
    Leg_38_set.insert("425330232");
    Leg_38.add_attribute("RepoTrm", "563105033"); // 1
    Leg_38_set.insert("563105033");
    Leg_38.add_attribute("RepoRt", "604277.480000"); // 1
    Leg_38_set.insert("604277.480000");
    Leg_38.add_attribute("Fctr", "9104757.790000"); // 1
    Leg_38_set.insert("9104757.790000");
    Leg_38.add_attribute("CrdRtg", "LegCreditRating_t_1283219606"); // 1
    Leg_38_set.insert("LegCreditRating_t_1283219606");
    Leg_38.add_attribute("Rgstry", "LegInstrRegistry_t_1079575936"); // 1
    Leg_38_set.insert("LegInstrRegistry_t_1079575936");
    Leg_38.add_attribute("Ctry", "57029778"); // 1
    Leg_38_set.insert("57029778");
    Leg_38.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_40553939"); // 1
    Leg_38_set.insert("LegStateOrProvinceOfIssue_t_40553939");
    Leg_38.add_attribute("Lcl", "LegLocaleOfIssue_t_1951101320"); // 1
    Leg_38_set.insert("LegLocaleOfIssue_t_1951101320");
    Leg_38.add_attribute("Redeem", "LegRedemptionDate_t_702319755"); // 1
    Leg_38_set.insert("LegRedemptionDate_t_702319755");
    Leg_38.add_attribute("Strk", "1781238.590000"); // 1
    Leg_38_set.insert("1781238.590000");
    Leg_38.add_attribute("StrkCcy", "CAN"); // 1
    Leg_38_set.insert("CAN");
    Leg_38.add_attribute("OptA", "1931255281"); // 1
    Leg_38_set.insert("1931255281");
    Leg_38.add_attribute("Cmult", "8776444.750000"); // 1
    Leg_38_set.insert("8776444.750000");
    Leg_38.add_attribute("MultTyp", "0"); // 1
    Leg_38_set.insert("0");
    Leg_38.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_38_set.insert("3");
    Leg_38.add_attribute("UOM", "Bcf"); // 1
    Leg_38_set.insert("Bcf");
    Leg_38.add_attribute("UOMQty", "4396301.150000"); // 1
    Leg_38_set.insert("4396301.150000");
    Leg_38.add_attribute("PxUOM", "Bu"); // 1
    Leg_38_set.insert("Bu");
    Leg_38.add_attribute("PxUOMQty", "9988242.580000"); // 1
    Leg_38_set.insert("9988242.580000");
    Leg_38.add_attribute("TmUnit", "S"); // 1
    Leg_38_set.insert("S");
    Leg_38.add_attribute("ExerStyle", "2"); // 1
    Leg_38_set.insert("2");
    Leg_38.add_attribute("CpnRt", "7965978.190000"); // 1
    Leg_38_set.insert("7965978.190000");
    Leg_38.add_attribute("Exch", "LegSecurityExchange_t_710842927"); // 1
    Leg_38_set.insert("LegSecurityExchange_t_710842927");
    Leg_38.add_attribute("Issr", "LegIssuer_t_582204966"); // 1
    Leg_38_set.insert("LegIssuer_t_582204966");
    Leg_38.add_attribute("EncLegIssrLen", "167467792"); // 1
    Leg_38_set.insert("167467792");
    Leg_38.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2023280898"); // 1
    Leg_38_set.insert("EncodedLegIssuer_t_2023280898");
    Leg_38.add_attribute("Desc", "LegSecurityDesc_t_1620435463"); // 1
    Leg_38_set.insert("LegSecurityDesc_t_1620435463");
    Leg_38.add_attribute("EncLegSecDescLen", "252811760"); // 1
    Leg_38_set.insert("252811760");
    Leg_38.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_756456489"); // 1
    Leg_38_set.insert("EncodedLegSecurityDesc_t_756456489");
    Leg_38.add_attribute("RatioQty", "20457656.950000"); // 1
    Leg_38_set.insert("20457656.950000");
    Leg_38.add_attribute("Side", "A"); // 1
    Leg_38_set.insert("A");
    Leg_38.add_attribute("Ccy", "EUR"); // 1
    Leg_38_set.insert("EUR");
    Leg_38.add_attribute("Pool", "LegPool_t_2099136400"); // 1
    Leg_38_set.insert("LegPool_t_2099136400");
    Leg_38.add_attribute("Dated", "LegDatedDate_t_1896460173"); // 1
    Leg_38_set.insert("LegDatedDate_t_1896460173");
    Leg_38.add_attribute("CSetMo", "865787605"); // 1
    Leg_38_set.insert("865787605");
    Leg_38.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2139690339"); // 1
    Leg_38_set.insert("LegInterestAccrualDate_t_2139690339");
    Leg_38.add_attribute("PutCall", "1700077846"); // 1
    Leg_38_set.insert("1700077846");
    Leg_38.add_attribute("LegOptionRatio", "15681073.600000"); // 1
    Leg_38_set.insert("15681073.600000");
    Leg_38.add_attribute("Px", "1703305.510000"); // 1
    Leg_38_set.insert("1703305.510000");
    all_values.push_back(Leg_38_set);
    all_compo_names.insert("Leg_38_set");

    {
      xml_element LegAID_38{"LegAID"};
      multiset<string> LegAID_38_set;
      LegAID_38.add_attribute("SecAltID", "LegSecurityAltID_t_1986500752"); // 2
      LegAID_38_set.insert("LegSecurityAltID_t_1986500752");
      LegAID_38.add_attribute("SecAltIDSrc", "B"); // 2
      LegAID_38_set.insert("B");
      all_values.push_back(LegAID_38_set);
      all_compo_names.insert("LegAID_38_set");

      Leg_38.add_element(LegAID_38);
    }
    elt.add_element(Leg_38);
  } // end Leg
  { // OrdQty
    xml_element OrdQty_7{"OrdQty"};
    multiset<string> OrdQty_7_set;
    OrdQty_7.add_attribute("Qty", "21015858.320000"); // 1
    OrdQty_7_set.insert("21015858.320000");
    OrdQty_7.add_attribute("Cash", "7166615.790000"); // 1
    OrdQty_7_set.insert("7166615.790000");
    OrdQty_7.add_attribute("Pct", "2384934.330000"); // 1
    OrdQty_7_set.insert("2384934.330000");
    OrdQty_7.add_attribute("RndDir", "1"); // 1
    OrdQty_7_set.insert("1");
    OrdQty_7.add_attribute("RndMod", "5112398.940000"); // 1
    OrdQty_7_set.insert("5112398.940000");
    all_values.push_back(OrdQty_7_set);
    all_compo_names.insert("OrdQty_7_set");

    elt.add_element(OrdQty_7);
  } // end OrdQty
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
