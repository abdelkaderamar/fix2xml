#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusRequest_message_t_0;
  elt.add_attribute("StatReqID", "QuoteStatusReqID_t_597921687"); // 0
  QuoteStatusRequest_message_t_0.insert("QuoteStatusReqID_t_597921687");
  elt.add_attribute("QID", "QuoteID_t_1068550365"); // 0
  QuoteStatusRequest_message_t_0.insert("QuoteID_t_1068550365");
  elt.add_attribute("Acct", "Account_t_780545577"); // 0
  QuoteStatusRequest_message_t_0.insert("Account_t_780545577");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  QuoteStatusRequest_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "2"); // 0
  QuoteStatusRequest_message_t_0.insert("2");
  elt.add_attribute("SesID", "1"); // 0
  QuoteStatusRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "1"); // 0
  QuoteStatusRequest_message_t_0.insert("1");
  elt.add_attribute("SubReqTyp", "2"); // 0
  QuoteStatusRequest_message_t_0.insert("2");
  all_values.push_back(QuoteStatusRequest_message_t_0);
  all_compo_names.insert("QuoteStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_74{"Hdr"};
    multiset<string> Hdr_74_set;
    Hdr_74.add_attribute("SeqNum", "1066354922"); // 1
    Hdr_74_set.insert("1066354922");
    Hdr_74.add_attribute("SID", "SenderCompID_t_135608005"); // 1
    Hdr_74_set.insert("SenderCompID_t_135608005");
    Hdr_74.add_attribute("TID", "TargetCompID_t_2007359801"); // 1
    Hdr_74_set.insert("TargetCompID_t_2007359801");
    Hdr_74.add_attribute("OBID", "OnBehalfOfCompID_t_380433687"); // 1
    Hdr_74_set.insert("OnBehalfOfCompID_t_380433687");
    Hdr_74.add_attribute("D2ID", "DeliverToCompID_t_1187330487"); // 1
    Hdr_74_set.insert("DeliverToCompID_t_1187330487");
    Hdr_74.add_attribute("SSub", "SenderSubID_t_2041172440"); // 1
    Hdr_74_set.insert("SenderSubID_t_2041172440");
    Hdr_74.add_attribute("SLoc", "SenderLocationID_t_1813718348"); // 1
    Hdr_74_set.insert("SenderLocationID_t_1813718348");
    Hdr_74.add_attribute("TSub", "TargetSubID_t_1087919658"); // 1
    Hdr_74_set.insert("TargetSubID_t_1087919658");
    Hdr_74.add_attribute("TLoc", "TargetLocationID_t_1495435143"); // 1
    Hdr_74_set.insert("TargetLocationID_t_1495435143");
    Hdr_74.add_attribute("OBSub", "OnBehalfOfSubID_t_1779711028"); // 1
    Hdr_74_set.insert("OnBehalfOfSubID_t_1779711028");
    Hdr_74.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1202742169"); // 1
    Hdr_74_set.insert("OnBehalfOfLocationID_t_1202742169");
    Hdr_74.add_attribute("D2Sub", "DeliverToSubID_t_1241507698"); // 1
    Hdr_74_set.insert("DeliverToSubID_t_1241507698");
    Hdr_74.add_attribute("D2Loc", "DeliverToLocationID_t_900373190"); // 1
    Hdr_74_set.insert("DeliverToLocationID_t_900373190");
    Hdr_74.add_attribute("PosDup", "Y"); // 1
    Hdr_74_set.insert("Y");
    Hdr_74.add_attribute("PosRsnd", "N"); // 1
    Hdr_74_set.insert("N");
    Hdr_74.add_attribute("Snt", "SendingTime_t_947823259"); // 1
    Hdr_74_set.insert("SendingTime_t_947823259");
    Hdr_74.add_attribute("OrigSnt", "OrigSendingTime_t_1548510313"); // 1
    Hdr_74_set.insert("OrigSendingTime_t_1548510313");
    Hdr_74.add_attribute("MsgEncd", "MessageEncoding_t_199191587"); // 1
    Hdr_74_set.insert("MessageEncoding_t_199191587");
    all_values.push_back(Hdr_74_set);
    all_compo_names.insert("Hdr_74_set");

    {
      xml_element Hop_74{"Hop"};
      multiset<string> Hop_74_set;
      Hop_74.add_attribute("ID", "HopCompID_t_1973975582"); // 2
      Hop_74_set.insert("HopCompID_t_1973975582");
      Hop_74.add_attribute("Ref", "795618786"); // 2
      Hop_74_set.insert("795618786");
      Hop_74.add_attribute("Snt", "HopSendingTime_t_925770238"); // 2
      Hop_74_set.insert("HopSendingTime_t_925770238");
      all_values.push_back(Hop_74_set);
      all_compo_names.insert("Hop_74_set");

      Hdr_74.add_element(Hop_74);
    }
    elt.add_element(Hdr_74);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_67{"Instrmt"};
    multiset<string> Instrmt_67_set;
    Instrmt_67.add_attribute("Sym", "Symbol_t_1816213671"); // 1
    Instrmt_67_set.insert("Symbol_t_1816213671");
    Instrmt_67.add_attribute("Sfx", "CD"); // 1
    Instrmt_67_set.insert("CD");
    Instrmt_67.add_attribute("ID", "SecurityID_t_1523691925"); // 1
    Instrmt_67_set.insert("SecurityID_t_1523691925");
    Instrmt_67.add_attribute("Src", "K"); // 1
    Instrmt_67_set.insert("K");
    Instrmt_67.add_attribute("Prod", "2"); // 1
    Instrmt_67_set.insert("2");
    Instrmt_67.add_attribute("ProdCmplx", "ProductComplex_t_2116008492"); // 1
    Instrmt_67_set.insert("ProductComplex_t_2116008492");
    Instrmt_67.add_attribute("SecGrp", "SecurityGroup_t_1914788785"); // 1
    Instrmt_67_set.insert("SecurityGroup_t_1914788785");
    Instrmt_67.add_attribute("CFI", "CFICode_t_1524714376"); // 1
    Instrmt_67_set.insert("CFICode_t_1524714376");
    Instrmt_67.add_attribute("SecTyp", "WITHDRN"); // 1
    Instrmt_67_set.insert("WITHDRN");
    Instrmt_67.add_attribute("SubTyp", "SecuritySubType_t_969820111"); // 1
    Instrmt_67_set.insert("SecuritySubType_t_969820111");
    Instrmt_67.add_attribute("MMY", "443585650"); // 1
    Instrmt_67_set.insert("443585650");
    Instrmt_67.add_attribute("MatDt", "MaturityDate_t_802363319"); // 1
    Instrmt_67_set.insert("MaturityDate_t_802363319");
    Instrmt_67.add_attribute("MatTm", "829696264"); // 1
    Instrmt_67_set.insert("829696264");
    Instrmt_67.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_824019337"); // 1
    Instrmt_67_set.insert("SettleOnOpenFlag_t_824019337");
    Instrmt_67.add_attribute("AsgnMeth", "1989693806"); // 1
    Instrmt_67_set.insert("1989693806");
    Instrmt_67.add_attribute("Status", "2"); // 1
    Instrmt_67_set.insert("2");
    Instrmt_67.add_attribute("CpnPmt", "CouponPaymentDate_t_490254037"); // 1
    Instrmt_67_set.insert("CouponPaymentDate_t_490254037");
    Instrmt_67.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_67_set.insert("FR");
    Instrmt_67.add_attribute("Snrty", "SB"); // 1
    Instrmt_67_set.insert("SB");
    Instrmt_67.add_attribute("NotlPctOut", "1224814.170000"); // 1
    Instrmt_67_set.insert("1224814.170000");
    Instrmt_67.add_attribute("OrigNotlPctOut", "21328719.860000"); // 1
    Instrmt_67_set.insert("21328719.860000");
    Instrmt_67.add_attribute("AttchPnt", "13128442.510000"); // 1
    Instrmt_67_set.insert("13128442.510000");
    Instrmt_67.add_attribute("DetchPnt", "10228546.070000"); // 1
    Instrmt_67_set.insert("10228546.070000");
    Instrmt_67.add_attribute("Issued", "IssueDate_t_1943881629"); // 1
    Instrmt_67_set.insert("IssueDate_t_1943881629");
    Instrmt_67.add_attribute("RepoCollSecTyp", "1595561577"); // 1
    Instrmt_67_set.insert("1595561577");
    Instrmt_67.add_attribute("RepoTrm", "1970677866"); // 1
    Instrmt_67_set.insert("1970677866");
    Instrmt_67.add_attribute("RepoRt", "13449082.940000"); // 1
    Instrmt_67_set.insert("13449082.940000");
    Instrmt_67.add_attribute("Fctr", "17947531.640000"); // 1
    Instrmt_67_set.insert("17947531.640000");
    Instrmt_67.add_attribute("CrdRtg", "CreditRating_t_1797169801"); // 1
    Instrmt_67_set.insert("CreditRating_t_1797169801");
    Instrmt_67.add_attribute("Rgstry", "InstrRegistry_t_2140527080"); // 1
    Instrmt_67_set.insert("InstrRegistry_t_2140527080");
    Instrmt_67.add_attribute("IssuCtry", "573039754"); // 1
    Instrmt_67_set.insert("573039754");
    Instrmt_67.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1465899824"); // 1
    Instrmt_67_set.insert("StateOrProvinceOfIssue_t_1465899824");
    Instrmt_67.add_attribute("Lcl", "LocaleOfIssue_t_2087338671"); // 1
    Instrmt_67_set.insert("LocaleOfIssue_t_2087338671");
    Instrmt_67.add_attribute("Redeem", "RedemptionDate_t_2096731679"); // 1
    Instrmt_67_set.insert("RedemptionDate_t_2096731679");
    Instrmt_67.add_attribute("StrkPx", "556965.650000"); // 1
    Instrmt_67_set.insert("556965.650000");
    Instrmt_67.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_67_set.insert("CHF");
    Instrmt_67.add_attribute("StrkMult", "19704853.500000"); // 1
    Instrmt_67_set.insert("19704853.500000");
    Instrmt_67.add_attribute("StrkValu", "444429.190000"); // 1
    Instrmt_67_set.insert("444429.190000");
    Instrmt_67.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_67_set.insert("2");
    Instrmt_67.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_67_set.insert("4");
    Instrmt_67.add_attribute("StrkPxBndryPrcsn", "4880285.690000"); // 1
    Instrmt_67_set.insert("4880285.690000");
    Instrmt_67.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("OptAt", "1622518077"); // 1
    Instrmt_67_set.insert("1622518077");
    Instrmt_67.add_attribute("Mult", "13120479.060000"); // 1
    Instrmt_67_set.insert("13120479.060000");
    Instrmt_67.add_attribute("MultTyp", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("MinPxIncr", "18023019.430000"); // 1
    Instrmt_67_set.insert("18023019.430000");
    Instrmt_67.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_11747835"); // 1
    Instrmt_67_set.insert("MinPriceIncrementAmount_t_11747835");
    Instrmt_67.add_attribute("UOM", "lbs"); // 1
    Instrmt_67_set.insert("lbs");
    Instrmt_67.add_attribute("UOMQty", "19247833.600000"); // 1
    Instrmt_67_set.insert("19247833.600000");
    Instrmt_67.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_67_set.insert("MMbbl");
    Instrmt_67.add_attribute("PxUOMQty", "15826002.900000"); // 1
    Instrmt_67_set.insert("15826002.900000");
    Instrmt_67.add_attribute("SettlMeth", "P"); // 1
    Instrmt_67_set.insert("P");
    Instrmt_67.add_attribute("ExerStyle", "0"); // 1
    Instrmt_67_set.insert("0");
    Instrmt_67.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_67_set.insert("2");
    Instrmt_67.add_attribute("OptPayAmt", "OptPayoutAmount_t_623348537"); // 1
    Instrmt_67_set.insert("OptPayoutAmount_t_623348537");
    Instrmt_67.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_67_set.insert("INX");
    Instrmt_67.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_67_set.insert("EQTY");
    Instrmt_67.add_attribute("ListMeth", "0"); // 1
    Instrmt_67_set.insert("0");
    Instrmt_67.add_attribute("CapPx", "11314858.810000"); // 1
    Instrmt_67_set.insert("11314858.810000");
    Instrmt_67.add_attribute("FlrPx", "12509874.900000"); // 1
    Instrmt_67_set.insert("12509874.900000");
    Instrmt_67.add_attribute("PutCall", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("FlexInd", "true"); // 1
    Instrmt_67_set.insert("true");
    Instrmt_67.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_67_set.insert("false");
    Instrmt_67.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_67_set.insert("Wk");
    Instrmt_67.add_attribute("CpnRt", "17385530.950000"); // 1
    Instrmt_67_set.insert("17385530.950000");
    Instrmt_67.add_attribute("Exch", "SecurityExchange_t_1118008397"); // 1
    Instrmt_67_set.insert("SecurityExchange_t_1118008397");
    Instrmt_67.add_attribute("PosLmt", "1617632782"); // 1
    Instrmt_67_set.insert("1617632782");
    Instrmt_67.add_attribute("NTPosLmt", "1782996014"); // 1
    Instrmt_67_set.insert("1782996014");
    Instrmt_67.add_attribute("Issr", "Issuer_t_1702536586"); // 1
    Instrmt_67_set.insert("Issuer_t_1702536586");
    Instrmt_67.add_attribute("EncIssrLen", "262970947"); // 1
    Instrmt_67_set.insert("262970947");
    Instrmt_67.add_attribute("EncIssr", "EncodedIssuer_t_123540935"); // 1
    Instrmt_67_set.insert("EncodedIssuer_t_123540935");
    Instrmt_67.add_attribute("Desc", "SecurityDesc_t_941944447"); // 1
    Instrmt_67_set.insert("SecurityDesc_t_941944447");
    Instrmt_67.add_attribute("EncSecDescLen", "1885489024"); // 1
    Instrmt_67_set.insert("1885489024");
    Instrmt_67.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1435588841"); // 1
    Instrmt_67_set.insert("EncodedSecurityDesc_t_1435588841");
    Instrmt_67.add_attribute("Pool", "Pool_t_23562465"); // 1
    Instrmt_67_set.insert("Pool_t_23562465");
    Instrmt_67.add_attribute("CSetMo", "2083908511"); // 1
    Instrmt_67_set.insert("2083908511");
    Instrmt_67.add_attribute("CPPgm", "2"); // 1
    Instrmt_67_set.insert("2");
    Instrmt_67.add_attribute("CPRegT", "CPRegType_t_35310300"); // 1
    Instrmt_67_set.insert("CPRegType_t_35310300");
    Instrmt_67.add_attribute("Dated", "DatedDate_t_206180902"); // 1
    Instrmt_67_set.insert("DatedDate_t_206180902");
    Instrmt_67.add_attribute("IntAcrl", "InterestAccrualDate_t_867706848"); // 1
    Instrmt_67_set.insert("InterestAccrualDate_t_867706848");
    all_values.push_back(Instrmt_67_set);
    all_compo_names.insert("Instrmt_67_set");

    {
      xml_element AID_70{"AID"};
      multiset<string> AID_70_set;
      AID_70.add_attribute("AltID", "SecurityAltID_t_32446473"); // 2
      AID_70_set.insert("SecurityAltID_t_32446473");
      AID_70.add_attribute("AltIDSrc", "1"); // 2
      AID_70_set.insert("1");
      all_values.push_back(AID_70_set);
      all_compo_names.insert("AID_70_set");

      Instrmt_67.add_element(AID_70);
    }
    {
      xml_element SecXML_70{"SecXML"};
      multiset<string> SecXML_70_set;
      SecXML_70.add_attribute("Schema", "SecurityXMLSchema_t_1667861167"); // 2
      SecXML_70_set.insert("SecurityXMLSchema_t_1667861167");
      all_values.push_back(SecXML_70_set);
      all_compo_names.insert("SecXML_70_set");

      Instrmt_67.add_element(SecXML_70);
    }
    {
      xml_element Evnt_70{"Evnt"};
      multiset<string> Evnt_70_set;
      Evnt_70.add_attribute("EventTyp", "16"); // 2
      Evnt_70_set.insert("16");
      Evnt_70.add_attribute("Dt", "EventDate_t_671975763"); // 2
      Evnt_70_set.insert("EventDate_t_671975763");
      Evnt_70.add_attribute("Tm", "EventTime_t_143726057"); // 2
      Evnt_70_set.insert("EventTime_t_143726057");
      Evnt_70.add_attribute("Px", "9644230.770000"); // 2
      Evnt_70_set.insert("9644230.770000");
      Evnt_70.add_attribute("Txt", "EventText_t_1349923498"); // 2
      Evnt_70_set.insert("EventText_t_1349923498");
      all_values.push_back(Evnt_70_set);
      all_compo_names.insert("Evnt_70_set");

      Instrmt_67.add_element(Evnt_70);
    }
    {
      xml_element Pty_368{"Pty"};
      multiset<string> Pty_368_set;
      Pty_368.add_attribute("ID", "InstrumentPartyID_t_416760747"); // 2
      Pty_368_set.insert("InstrumentPartyID_t_416760747");
      Pty_368.add_attribute("Src", "B"); // 2
      Pty_368_set.insert("B");
      Pty_368.add_attribute("R", "47"); // 2
      Pty_368_set.insert("47");
      all_values.push_back(Pty_368_set);
      all_compo_names.insert("Pty_368_set");

      {
        xml_element Sub_368{"Sub"};
        multiset<string> Sub_368_set;
        Sub_368.add_attribute("ID", "InstrumentPartySubID_t_8211614"); // 3
        Sub_368_set.insert("InstrumentPartySubID_t_8211614");
        Sub_368.add_attribute("Typ", "25"); // 3
        Sub_368_set.insert("25");
        all_values.push_back(Sub_368_set);
        all_compo_names.insert("Sub_368_set");

        Pty_368.add_element(Sub_368);
      }
      Instrmt_67.add_element(Pty_368);
    }
    {
      xml_element CmplxEvnt_67{"CmplxEvnt"};
      multiset<string> CmplxEvnt_67_set;
      CmplxEvnt_67.add_attribute("Typ", "1"); // 2
      CmplxEvnt_67_set.insert("1");
      CmplxEvnt_67.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1802842694"); // 2
      CmplxEvnt_67_set.insert("ComplexOptPayoutAmount_t_1802842694");
      CmplxEvnt_67.add_attribute("Px", "6108356.620000"); // 2
      CmplxEvnt_67_set.insert("6108356.620000");
      CmplxEvnt_67.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_67_set.insert("2");
      CmplxEvnt_67.add_attribute("PxBndryPrcsn", "12729918.280000"); // 2
      CmplxEvnt_67_set.insert("12729918.280000");
      CmplxEvnt_67.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_67_set.insert("3");
      CmplxEvnt_67.add_attribute("Cond", "2"); // 2
      CmplxEvnt_67_set.insert("2");
      all_values.push_back(CmplxEvnt_67_set);
      all_compo_names.insert("CmplxEvnt_67_set");

      {
        xml_element EvntDts_67{"EvntDts"};
        multiset<string> EvntDts_67_set;
        EvntDts_67.add_attribute("StartDt", "ComplexEventStartDate_t_1535962775"); // 3
        EvntDts_67_set.insert("ComplexEventStartDate_t_1535962775");
        EvntDts_67.add_attribute("EndDt", "ComplexEventEndDate_t_369888964"); // 3
        EvntDts_67_set.insert("ComplexEventEndDate_t_369888964");
        all_values.push_back(EvntDts_67_set);
        all_compo_names.insert("EvntDts_67_set");

        {
          xml_element EvntTms_67{"EvntTms"};
          multiset<string> EvntTms_67_set;
          EvntTms_67.add_attribute("StartTm", "1121184996"); // 4
          EvntTms_67_set.insert("1121184996");
          EvntTms_67.add_attribute("EndTm", "1273968152"); // 4
          EvntTms_67_set.insert("1273968152");
          all_values.push_back(EvntTms_67_set);
          all_compo_names.insert("EvntTms_67_set");

          EvntDts_67.add_element(EvntTms_67);
        }
        CmplxEvnt_67.add_element(EvntDts_67);
      }
      Instrmt_67.add_element(CmplxEvnt_67);
    }
    elt.add_element(Instrmt_67);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_25{"FinDetls"};
    multiset<string> FinDetls_25_set;
    FinDetls_25.add_attribute("AgmtDesc", "AgreementDesc_t_1805477806"); // 1
    FinDetls_25_set.insert("AgreementDesc_t_1805477806");
    FinDetls_25.add_attribute("AgmtID", "AgreementID_t_1144747462"); // 1
    FinDetls_25_set.insert("AgreementID_t_1144747462");
    FinDetls_25.add_attribute("AgmtDt", "AgreementDate_t_1210393015"); // 1
    FinDetls_25_set.insert("AgreementDate_t_1210393015");
    FinDetls_25.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_25_set.insert("JPY");
    FinDetls_25.add_attribute("TrmTyp", "2"); // 1
    FinDetls_25_set.insert("2");
    FinDetls_25.add_attribute("StartDt", "StartDate_t_1616108143"); // 1
    FinDetls_25_set.insert("StartDate_t_1616108143");
    FinDetls_25.add_attribute("EndDt", "EndDate_t_1212504236"); // 1
    FinDetls_25_set.insert("EndDate_t_1212504236");
    FinDetls_25.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_25_set.insert("1");
    FinDetls_25.add_attribute("MgnRatio", "11364856.620000"); // 1
    FinDetls_25_set.insert("11364856.620000");
    all_values.push_back(FinDetls_25_set);
    all_compo_names.insert("FinDetls_25_set");

    elt.add_element(FinDetls_25);
  } // end FinDetls
  { // Undly
    xml_element Undly_94{"Undly"};
    multiset<string> Undly_94_set;
    Undly_94.add_attribute("Sym", "UnderlyingSymbol_t_1729847224"); // 1
    Undly_94_set.insert("UnderlyingSymbol_t_1729847224");
    Undly_94.add_attribute("Sfx", "WI"); // 1
    Undly_94_set.insert("WI");
    Undly_94.add_attribute("ID", "UnderlyingSecurityID_t_2002907941"); // 1
    Undly_94_set.insert("UnderlyingSecurityID_t_2002907941");
    Undly_94.add_attribute("Src", "5"); // 1
    Undly_94_set.insert("5");
    Undly_94.add_attribute("Prod", "5"); // 1
    Undly_94_set.insert("5");
    Undly_94.add_attribute("CFI", "UnderlyingCFICode_t_1951333251"); // 1
    Undly_94_set.insert("UnderlyingCFICode_t_1951333251");
    Undly_94.add_attribute("SecTyp", "RETIRED"); // 1
    Undly_94_set.insert("RETIRED");
    Undly_94.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1705184081"); // 1
    Undly_94_set.insert("UnderlyingSecuritySubType_t_1705184081");
    Undly_94.add_attribute("MMY", "823615818"); // 1
    Undly_94_set.insert("823615818");
    Undly_94.add_attribute("Mat", "UnderlyingMaturityDate_t_891893629"); // 1
    Undly_94_set.insert("UnderlyingMaturityDate_t_891893629");
    Undly_94.add_attribute("MatTm", "1360543128"); // 1
    Undly_94_set.insert("1360543128");
    Undly_94.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1434451481"); // 1
    Undly_94_set.insert("UnderlyingCouponPaymentDate_t_1434451481");
    Undly_94.add_attribute("RestrctTyp", "FR"); // 1
    Undly_94_set.insert("FR");
    Undly_94.add_attribute("Snrty", "SB"); // 1
    Undly_94_set.insert("SB");
    Undly_94.add_attribute("NotlPctOut", "16807995.100000"); // 1
    Undly_94_set.insert("16807995.100000");
    Undly_94.add_attribute("OrigNotlPctOut", "16953217.890000"); // 1
    Undly_94_set.insert("16953217.890000");
    Undly_94.add_attribute("AttchPnt", "20220140.840000"); // 1
    Undly_94_set.insert("20220140.840000");
    Undly_94.add_attribute("DetchPnt", "20506884.740000"); // 1
    Undly_94_set.insert("20506884.740000");
    Undly_94.add_attribute("Issued", "UnderlyingIssueDate_t_669023138"); // 1
    Undly_94_set.insert("UnderlyingIssueDate_t_669023138");
    Undly_94.add_attribute("RepoCollSecTyp", "1148498588"); // 1
    Undly_94_set.insert("1148498588");
    Undly_94.add_attribute("RepoTrm", "1708682632"); // 1
    Undly_94_set.insert("1708682632");
    Undly_94.add_attribute("RepoRt", "18137706.000000"); // 1
    Undly_94_set.insert("18137706.000000");
    Undly_94.add_attribute("Fctr", "2114079.550000"); // 1
    Undly_94_set.insert("2114079.550000");
    Undly_94.add_attribute("CrdRtg", "UnderlyingCreditRating_t_309600279"); // 1
    Undly_94_set.insert("UnderlyingCreditRating_t_309600279");
    Undly_94.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_846344714"); // 1
    Undly_94_set.insert("UnderlyingInstrRegistry_t_846344714");
    Undly_94.add_attribute("Ctry", "1627981872"); // 1
    Undly_94_set.insert("1627981872");
    Undly_94.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1925708422"); // 1
    Undly_94_set.insert("UnderlyingStateOrProvinceOfIssue_t_1925708422");
    Undly_94.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2058848950"); // 1
    Undly_94_set.insert("UnderlyingLocaleOfIssue_t_2058848950");
    Undly_94.add_attribute("Redeem", "UnderlyingRedemptionDate_t_538369685"); // 1
    Undly_94_set.insert("UnderlyingRedemptionDate_t_538369685");
    Undly_94.add_attribute("StrkPx", "9147104.360000"); // 1
    Undly_94_set.insert("9147104.360000");
    Undly_94.add_attribute("StrkCcy", "EUR"); // 1
    Undly_94_set.insert("EUR");
    Undly_94.add_attribute("OptA", "47438508"); // 1
    Undly_94_set.insert("47438508");
    Undly_94.add_attribute("Mult", "8052744.590000"); // 1
    Undly_94_set.insert("8052744.590000");
    Undly_94.add_attribute("MultTyp", "1"); // 1
    Undly_94_set.insert("1");
    Undly_94.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_94_set.insert("0");
    Undly_94.add_attribute("UOM", "Bbl"); // 1
    Undly_94_set.insert("Bbl");
    Undly_94.add_attribute("UOMQty", "2912511.020000"); // 1
    Undly_94_set.insert("2912511.020000");
    Undly_94.add_attribute("PxUOM", "MWh"); // 1
    Undly_94_set.insert("MWh");
    Undly_94.add_attribute("PxUOMQty", "14327398.810000"); // 1
    Undly_94_set.insert("14327398.810000");
    Undly_94.add_attribute("TmUnit", "Yr"); // 1
    Undly_94_set.insert("Yr");
    Undly_94.add_attribute("ExerStyle", "1"); // 1
    Undly_94_set.insert("1");
    Undly_94.add_attribute("CpnRt", "7197077.140000"); // 1
    Undly_94_set.insert("7197077.140000");
    Undly_94.add_attribute("Exch", "UnderlyingSecurityExchange_t_551742323"); // 1
    Undly_94_set.insert("UnderlyingSecurityExchange_t_551742323");
    Undly_94.add_attribute("Issr", "UnderlyingIssuer_t_1001222197"); // 1
    Undly_94_set.insert("UnderlyingIssuer_t_1001222197");
    Undly_94.add_attribute("EncUndIssrLen", "253023576"); // 1
    Undly_94_set.insert("253023576");
    Undly_94.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_99580465"); // 1
    Undly_94_set.insert("EncodedUnderlyingIssuer_t_99580465");
    Undly_94.add_attribute("Desc", "UnderlyingSecurityDesc_t_875752633"); // 1
    Undly_94_set.insert("UnderlyingSecurityDesc_t_875752633");
    Undly_94.add_attribute("EncUndSecDescLen", "156228403"); // 1
    Undly_94_set.insert("156228403");
    Undly_94.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_768603603"); // 1
    Undly_94_set.insert("EncodedUnderlyingSecurityDesc_t_768603603");
    Undly_94.add_attribute("CPPgm", "UnderlyingCPProgram_t_2024251221"); // 1
    Undly_94_set.insert("UnderlyingCPProgram_t_2024251221");
    Undly_94.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1864911035"); // 1
    Undly_94_set.insert("UnderlyingCPRegType_t_1864911035");
    Undly_94.add_attribute("AllocPct", "4348905.550000"); // 1
    Undly_94_set.insert("4348905.550000");
    Undly_94.add_attribute("Ccy", "USD"); // 1
    Undly_94_set.insert("USD");
    Undly_94.add_attribute("Qty", "12812352.690000"); // 1
    Undly_94_set.insert("12812352.690000");
    Undly_94.add_attribute("SettlTyp", "5"); // 1
    Undly_94_set.insert("5");
    Undly_94.add_attribute("CashAmt", "UnderlyingCashAmount_t_1952736088"); // 1
    Undly_94_set.insert("UnderlyingCashAmount_t_1952736088");
    Undly_94.add_attribute("CashTyp", "FIXED"); // 1
    Undly_94_set.insert("FIXED");
    Undly_94.add_attribute("Px", "1070434.370000"); // 1
    Undly_94_set.insert("1070434.370000");
    Undly_94.add_attribute("DirtPx", "7199628.770000"); // 1
    Undly_94_set.insert("7199628.770000");
    Undly_94.add_attribute("EndPx", "21424507.380000"); // 1
    Undly_94_set.insert("21424507.380000");
    Undly_94.add_attribute("StartVal", "UnderlyingStartValue_t_227776698"); // 1
    Undly_94_set.insert("UnderlyingStartValue_t_227776698");
    Undly_94.add_attribute("CurVal", "UnderlyingCurrentValue_t_767401385"); // 1
    Undly_94_set.insert("UnderlyingCurrentValue_t_767401385");
    Undly_94.add_attribute("EndVal", "UnderlyingEndValue_t_800241550"); // 1
    Undly_94_set.insert("UnderlyingEndValue_t_800241550");
    Undly_94.add_attribute("AdjQty", "12807970.330000"); // 1
    Undly_94_set.insert("12807970.330000");
    Undly_94.add_attribute("FxRate", "3643287.120000"); // 1
    Undly_94_set.insert("3643287.120000");
    Undly_94.add_attribute("FxRateCalc", "D"); // 1
    Undly_94_set.insert("D");
    Undly_94.add_attribute("CapValu", "UnderlyingCapValue_t_1572048136"); // 1
    Undly_94_set.insert("UnderlyingCapValue_t_1572048136");
    Undly_94.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1666440120"); // 1
    Undly_94_set.insert("UnderlyingSettlMethod_t_1666440120");
    Undly_94.add_attribute("PutCall", "694621846"); // 1
    Undly_94_set.insert("694621846");
    all_values.push_back(Undly_94_set);
    all_compo_names.insert("Undly_94_set");

    {
      xml_element UndAID_94{"UndAID"};
      multiset<string> UndAID_94_set;
      UndAID_94.add_attribute("AltID", "UnderlyingSecurityAltID_t_607709219"); // 2
      UndAID_94_set.insert("UnderlyingSecurityAltID_t_607709219");
      UndAID_94.add_attribute("AltIDSrc", "G"); // 2
      UndAID_94_set.insert("G");
      all_values.push_back(UndAID_94_set);
      all_compo_names.insert("UndAID_94_set");

      Undly_94.add_element(UndAID_94);
    }
    {
      xml_element Stip_155{"Stip"};
      multiset<string> Stip_155_set;
      Stip_155.add_attribute("Typ", "PURPOSE"); // 2
      Stip_155_set.insert("PURPOSE");
      Stip_155.add_attribute("Val", "UnderlyingStipValue_t_1159451543"); // 2
      Stip_155_set.insert("UnderlyingStipValue_t_1159451543");
      all_values.push_back(Stip_155_set);
      all_compo_names.insert("Stip_155_set");

      Undly_94.add_element(Stip_155);
    }
    {
      xml_element Pty_369{"Pty"};
      multiset<string> Pty_369_set;
      Pty_369.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1035349558"); // 2
      Pty_369_set.insert("UnderlyingInstrumentPartyID_t_1035349558");
      Pty_369.add_attribute("Src", "G"); // 2
      Pty_369_set.insert("G");
      Pty_369.add_attribute("R", "32"); // 2
      Pty_369_set.insert("32");
      all_values.push_back(Pty_369_set);
      all_compo_names.insert("Pty_369_set");

      {
        xml_element Sub_369{"Sub"};
        multiset<string> Sub_369_set;
        Sub_369.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1911102191"); // 3
        Sub_369_set.insert("UnderlyingInstrumentPartySubID_t_1911102191");
        Sub_369.add_attribute("Typ", "6"); // 3
        Sub_369_set.insert("6");
        all_values.push_back(Sub_369_set);
        all_compo_names.insert("Sub_369_set");

        Pty_369.add_element(Sub_369);
      }
      Undly_94.add_element(Pty_369);
    }
    elt.add_element(Undly_94);
  } // end Undly
  { // Undly
    xml_element Undly_95{"Undly"};
    multiset<string> Undly_95_set;
    Undly_95.add_attribute("Sym", "UnderlyingSymbol_t_2027635611"); // 1
    Undly_95_set.insert("UnderlyingSymbol_t_2027635611");
    Undly_95.add_attribute("Sfx", "CD"); // 1
    Undly_95_set.insert("CD");
    Undly_95.add_attribute("ID", "UnderlyingSecurityID_t_1541008928"); // 1
    Undly_95_set.insert("UnderlyingSecurityID_t_1541008928");
    Undly_95.add_attribute("Src", "B"); // 1
    Undly_95_set.insert("B");
    Undly_95.add_attribute("Prod", "13"); // 1
    Undly_95_set.insert("13");
    Undly_95.add_attribute("CFI", "UnderlyingCFICode_t_1568036594"); // 1
    Undly_95_set.insert("UnderlyingCFICode_t_1568036594");
    Undly_95.add_attribute("SecTyp", "BDN"); // 1
    Undly_95_set.insert("BDN");
    Undly_95.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1444719044"); // 1
    Undly_95_set.insert("UnderlyingSecuritySubType_t_1444719044");
    Undly_95.add_attribute("MMY", "1373289035"); // 1
    Undly_95_set.insert("1373289035");
    Undly_95.add_attribute("Mat", "UnderlyingMaturityDate_t_641394711"); // 1
    Undly_95_set.insert("UnderlyingMaturityDate_t_641394711");
    Undly_95.add_attribute("MatTm", "1551762481"); // 1
    Undly_95_set.insert("1551762481");
    Undly_95.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2093251912"); // 1
    Undly_95_set.insert("UnderlyingCouponPaymentDate_t_2093251912");
    Undly_95.add_attribute("RestrctTyp", "MM"); // 1
    Undly_95_set.insert("MM");
    Undly_95.add_attribute("Snrty", "SR"); // 1
    Undly_95_set.insert("SR");
    Undly_95.add_attribute("NotlPctOut", "7131696.490000"); // 1
    Undly_95_set.insert("7131696.490000");
    Undly_95.add_attribute("OrigNotlPctOut", "14366033.520000"); // 1
    Undly_95_set.insert("14366033.520000");
    Undly_95.add_attribute("AttchPnt", "9128525.640000"); // 1
    Undly_95_set.insert("9128525.640000");
    Undly_95.add_attribute("DetchPnt", "10774983.610000"); // 1
    Undly_95_set.insert("10774983.610000");
    Undly_95.add_attribute("Issued", "UnderlyingIssueDate_t_698485317"); // 1
    Undly_95_set.insert("UnderlyingIssueDate_t_698485317");
    Undly_95.add_attribute("RepoCollSecTyp", "337417052"); // 1
    Undly_95_set.insert("337417052");
    Undly_95.add_attribute("RepoTrm", "596454833"); // 1
    Undly_95_set.insert("596454833");
    Undly_95.add_attribute("RepoRt", "13931071.630000"); // 1
    Undly_95_set.insert("13931071.630000");
    Undly_95.add_attribute("Fctr", "9451262.720000"); // 1
    Undly_95_set.insert("9451262.720000");
    Undly_95.add_attribute("CrdRtg", "UnderlyingCreditRating_t_630582194"); // 1
    Undly_95_set.insert("UnderlyingCreditRating_t_630582194");
    Undly_95.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_659953076"); // 1
    Undly_95_set.insert("UnderlyingInstrRegistry_t_659953076");
    Undly_95.add_attribute("Ctry", "2104577815"); // 1
    Undly_95_set.insert("2104577815");
    Undly_95.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1665931752"); // 1
    Undly_95_set.insert("UnderlyingStateOrProvinceOfIssue_t_1665931752");
    Undly_95.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_179822566"); // 1
    Undly_95_set.insert("UnderlyingLocaleOfIssue_t_179822566");
    Undly_95.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1216126175"); // 1
    Undly_95_set.insert("UnderlyingRedemptionDate_t_1216126175");
    Undly_95.add_attribute("StrkPx", "14295502.950000"); // 1
    Undly_95_set.insert("14295502.950000");
    Undly_95.add_attribute("StrkCcy", "USD"); // 1
    Undly_95_set.insert("USD");
    Undly_95.add_attribute("OptA", "1069936411"); // 1
    Undly_95_set.insert("1069936411");
    Undly_95.add_attribute("Mult", "13969293.860000"); // 1
    Undly_95_set.insert("13969293.860000");
    Undly_95.add_attribute("MultTyp", "2"); // 1
    Undly_95_set.insert("2");
    Undly_95.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_95_set.insert("0");
    Undly_95.add_attribute("UOM", "tn"); // 1
    Undly_95_set.insert("tn");
    Undly_95.add_attribute("UOMQty", "8601147.950000"); // 1
    Undly_95_set.insert("8601147.950000");
    Undly_95.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_95_set.insert("oz_tr");
    Undly_95.add_attribute("PxUOMQty", "432877.200000"); // 1
    Undly_95_set.insert("432877.200000");
    Undly_95.add_attribute("TmUnit", "Min"); // 1
    Undly_95_set.insert("Min");
    Undly_95.add_attribute("ExerStyle", "2"); // 1
    Undly_95_set.insert("2");
    Undly_95.add_attribute("CpnRt", "21365396.320000"); // 1
    Undly_95_set.insert("21365396.320000");
    Undly_95.add_attribute("Exch", "UnderlyingSecurityExchange_t_2137871309"); // 1
    Undly_95_set.insert("UnderlyingSecurityExchange_t_2137871309");
    Undly_95.add_attribute("Issr", "UnderlyingIssuer_t_1279551463"); // 1
    Undly_95_set.insert("UnderlyingIssuer_t_1279551463");
    Undly_95.add_attribute("EncUndIssrLen", "702225633"); // 1
    Undly_95_set.insert("702225633");
    Undly_95.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1426991013"); // 1
    Undly_95_set.insert("EncodedUnderlyingIssuer_t_1426991013");
    Undly_95.add_attribute("Desc", "UnderlyingSecurityDesc_t_44920380"); // 1
    Undly_95_set.insert("UnderlyingSecurityDesc_t_44920380");
    Undly_95.add_attribute("EncUndSecDescLen", "1779723994"); // 1
    Undly_95_set.insert("1779723994");
    Undly_95.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2125476330"); // 1
    Undly_95_set.insert("EncodedUnderlyingSecurityDesc_t_2125476330");
    Undly_95.add_attribute("CPPgm", "UnderlyingCPProgram_t_382337432"); // 1
    Undly_95_set.insert("UnderlyingCPProgram_t_382337432");
    Undly_95.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_228695179"); // 1
    Undly_95_set.insert("UnderlyingCPRegType_t_228695179");
    Undly_95.add_attribute("AllocPct", "13710998.450000"); // 1
    Undly_95_set.insert("13710998.450000");
    Undly_95.add_attribute("Ccy", "JPY"); // 1
    Undly_95_set.insert("JPY");
    Undly_95.add_attribute("Qty", "20310529.220000"); // 1
    Undly_95_set.insert("20310529.220000");
    Undly_95.add_attribute("SettlTyp", "2"); // 1
    Undly_95_set.insert("2");
    Undly_95.add_attribute("CashAmt", "UnderlyingCashAmount_t_377725478"); // 1
    Undly_95_set.insert("UnderlyingCashAmount_t_377725478");
    Undly_95.add_attribute("CashTyp", "FIXED"); // 1
    Undly_95_set.insert("FIXED");
    Undly_95.add_attribute("Px", "3532003.980000"); // 1
    Undly_95_set.insert("3532003.980000");
    Undly_95.add_attribute("DirtPx", "18072757.740000"); // 1
    Undly_95_set.insert("18072757.740000");
    Undly_95.add_attribute("EndPx", "20667959.460000"); // 1
    Undly_95_set.insert("20667959.460000");
    Undly_95.add_attribute("StartVal", "UnderlyingStartValue_t_1449478536"); // 1
    Undly_95_set.insert("UnderlyingStartValue_t_1449478536");
    Undly_95.add_attribute("CurVal", "UnderlyingCurrentValue_t_729728537"); // 1
    Undly_95_set.insert("UnderlyingCurrentValue_t_729728537");
    Undly_95.add_attribute("EndVal", "UnderlyingEndValue_t_1316241685"); // 1
    Undly_95_set.insert("UnderlyingEndValue_t_1316241685");
    Undly_95.add_attribute("AdjQty", "7133155.440000"); // 1
    Undly_95_set.insert("7133155.440000");
    Undly_95.add_attribute("FxRate", "15282265.930000"); // 1
    Undly_95_set.insert("15282265.930000");
    Undly_95.add_attribute("FxRateCalc", "M"); // 1
    Undly_95_set.insert("M");
    Undly_95.add_attribute("CapValu", "UnderlyingCapValue_t_1573430340"); // 1
    Undly_95_set.insert("UnderlyingCapValue_t_1573430340");
    Undly_95.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1623960044"); // 1
    Undly_95_set.insert("UnderlyingSettlMethod_t_1623960044");
    Undly_95.add_attribute("PutCall", "29528090"); // 1
    Undly_95_set.insert("29528090");
    all_values.push_back(Undly_95_set);
    all_compo_names.insert("Undly_95_set");

    {
      xml_element UndAID_95{"UndAID"};
      multiset<string> UndAID_95_set;
      UndAID_95.add_attribute("AltID", "UnderlyingSecurityAltID_t_927456199"); // 2
      UndAID_95_set.insert("UnderlyingSecurityAltID_t_927456199");
      UndAID_95.add_attribute("AltIDSrc", "8"); // 2
      UndAID_95_set.insert("8");
      all_values.push_back(UndAID_95_set);
      all_compo_names.insert("UndAID_95_set");

      Undly_95.add_element(UndAID_95);
    }
    {
      xml_element Stip_156{"Stip"};
      multiset<string> Stip_156_set;
      Stip_156.add_attribute("Typ", "ORDRINCR"); // 2
      Stip_156_set.insert("ORDRINCR");
      Stip_156.add_attribute("Val", "UnderlyingStipValue_t_917843860"); // 2
      Stip_156_set.insert("UnderlyingStipValue_t_917843860");
      all_values.push_back(Stip_156_set);
      all_compo_names.insert("Stip_156_set");

      Undly_95.add_element(Stip_156);
    }
    {
      xml_element Pty_370{"Pty"};
      multiset<string> Pty_370_set;
      Pty_370.add_attribute("ID", "UnderlyingInstrumentPartyID_t_256040144"); // 2
      Pty_370_set.insert("UnderlyingInstrumentPartyID_t_256040144");
      Pty_370.add_attribute("Src", "E"); // 2
      Pty_370_set.insert("E");
      Pty_370.add_attribute("R", "37"); // 2
      Pty_370_set.insert("37");
      all_values.push_back(Pty_370_set);
      all_compo_names.insert("Pty_370_set");

      {
        xml_element Sub_370{"Sub"};
        multiset<string> Sub_370_set;
        Sub_370.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_300960524"); // 3
        Sub_370_set.insert("UnderlyingInstrumentPartySubID_t_300960524");
        Sub_370.add_attribute("Typ", "23"); // 3
        Sub_370_set.insert("23");
        all_values.push_back(Sub_370_set);
        all_compo_names.insert("Sub_370_set");

        Pty_370.add_element(Sub_370);
      }
      Undly_95.add_element(Pty_370);
    }
    elt.add_element(Undly_95);
  } // end Undly
  { // Leg
    xml_element Leg_80{"Leg"};
    multiset<string> Leg_80_set;
    Leg_80.add_attribute("Sym", "LegSymbol_t_683297957"); // 1
    Leg_80_set.insert("LegSymbol_t_683297957");
    Leg_80.add_attribute("Sfx", "CD"); // 1
    Leg_80_set.insert("CD");
    Leg_80.add_attribute("ID", "LegSecurityID_t_1546443752"); // 1
    Leg_80_set.insert("LegSecurityID_t_1546443752");
    Leg_80.add_attribute("Src", "8"); // 1
    Leg_80_set.insert("8");
    Leg_80.add_attribute("Prod", "7"); // 1
    Leg_80_set.insert("7");
    Leg_80.add_attribute("CFI", "LegCFICode_t_1430013026"); // 1
    Leg_80_set.insert("LegCFICode_t_1430013026");
    Leg_80.add_attribute("SecTyp", "WAR"); // 1
    Leg_80_set.insert("WAR");
    Leg_80.add_attribute("SecSubTyp", "LegSecuritySubType_t_1818748085"); // 1
    Leg_80_set.insert("LegSecuritySubType_t_1818748085");
    Leg_80.add_attribute("MMY", "1493404866"); // 1
    Leg_80_set.insert("1493404866");
    Leg_80.add_attribute("Mat", "LegMaturityDate_t_1501036283"); // 1
    Leg_80_set.insert("LegMaturityDate_t_1501036283");
    Leg_80.add_attribute("MatTm", "1478540211"); // 1
    Leg_80_set.insert("1478540211");
    Leg_80.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1412717165"); // 1
    Leg_80_set.insert("LegCouponPaymentDate_t_1412717165");
    Leg_80.add_attribute("Issued", "LegIssueDate_t_803031172"); // 1
    Leg_80_set.insert("LegIssueDate_t_803031172");
    Leg_80.add_attribute("RepoCollSecTyp", "60785100"); // 1
    Leg_80_set.insert("60785100");
    Leg_80.add_attribute("RepoTrm", "581475202"); // 1
    Leg_80_set.insert("581475202");
    Leg_80.add_attribute("RepoRt", "15163467.160000"); // 1
    Leg_80_set.insert("15163467.160000");
    Leg_80.add_attribute("Fctr", "15890116.930000"); // 1
    Leg_80_set.insert("15890116.930000");
    Leg_80.add_attribute("CrdRtg", "LegCreditRating_t_567715572"); // 1
    Leg_80_set.insert("LegCreditRating_t_567715572");
    Leg_80.add_attribute("Rgstry", "LegInstrRegistry_t_942293408"); // 1
    Leg_80_set.insert("LegInstrRegistry_t_942293408");
    Leg_80.add_attribute("Ctry", "1065488090"); // 1
    Leg_80_set.insert("1065488090");
    Leg_80.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_597243662"); // 1
    Leg_80_set.insert("LegStateOrProvinceOfIssue_t_597243662");
    Leg_80.add_attribute("Lcl", "LegLocaleOfIssue_t_1869749607"); // 1
    Leg_80_set.insert("LegLocaleOfIssue_t_1869749607");
    Leg_80.add_attribute("Redeem", "LegRedemptionDate_t_41976771"); // 1
    Leg_80_set.insert("LegRedemptionDate_t_41976771");
    Leg_80.add_attribute("Strk", "6158277.360000"); // 1
    Leg_80_set.insert("6158277.360000");
    Leg_80.add_attribute("StrkCcy", "CAN"); // 1
    Leg_80_set.insert("CAN");
    Leg_80.add_attribute("OptA", "1336637443"); // 1
    Leg_80_set.insert("1336637443");
    Leg_80.add_attribute("Cmult", "8374610.440000"); // 1
    Leg_80_set.insert("8374610.440000");
    Leg_80.add_attribute("MultTyp", "2"); // 1
    Leg_80_set.insert("2");
    Leg_80.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_80_set.insert("1");
    Leg_80.add_attribute("UOM", "Bbl"); // 1
    Leg_80_set.insert("Bbl");
    Leg_80.add_attribute("UOMQty", "12822753.970000"); // 1
    Leg_80_set.insert("12822753.970000");
    Leg_80.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_80_set.insert("oz_tr");
    Leg_80.add_attribute("PxUOMQty", "4117650.560000"); // 1
    Leg_80_set.insert("4117650.560000");
    Leg_80.add_attribute("TmUnit", "Min"); // 1
    Leg_80_set.insert("Min");
    Leg_80.add_attribute("ExerStyle", "0"); // 1
    Leg_80_set.insert("0");
    Leg_80.add_attribute("CpnRt", "18417780.820000"); // 1
    Leg_80_set.insert("18417780.820000");
    Leg_80.add_attribute("Exch", "LegSecurityExchange_t_145905647"); // 1
    Leg_80_set.insert("LegSecurityExchange_t_145905647");
    Leg_80.add_attribute("Issr", "LegIssuer_t_1236236124"); // 1
    Leg_80_set.insert("LegIssuer_t_1236236124");
    Leg_80.add_attribute("EncLegIssrLen", "1187699301"); // 1
    Leg_80_set.insert("1187699301");
    Leg_80.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1646941931"); // 1
    Leg_80_set.insert("EncodedLegIssuer_t_1646941931");
    Leg_80.add_attribute("Desc", "LegSecurityDesc_t_567292687"); // 1
    Leg_80_set.insert("LegSecurityDesc_t_567292687");
    Leg_80.add_attribute("EncLegSecDescLen", "452932818"); // 1
    Leg_80_set.insert("452932818");
    Leg_80.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_302489455"); // 1
    Leg_80_set.insert("EncodedLegSecurityDesc_t_302489455");
    Leg_80.add_attribute("RatioQty", "6280777.870000"); // 1
    Leg_80_set.insert("6280777.870000");
    Leg_80.add_attribute("Side", "5"); // 1
    Leg_80_set.insert("5");
    Leg_80.add_attribute("Ccy", "EUR"); // 1
    Leg_80_set.insert("EUR");
    Leg_80.add_attribute("Pool", "LegPool_t_1602123592"); // 1
    Leg_80_set.insert("LegPool_t_1602123592");
    Leg_80.add_attribute("Dated", "LegDatedDate_t_613645932"); // 1
    Leg_80_set.insert("LegDatedDate_t_613645932");
    Leg_80.add_attribute("CSetMo", "1135093923"); // 1
    Leg_80_set.insert("1135093923");
    Leg_80.add_attribute("IntAcrl", "LegInterestAccrualDate_t_51883606"); // 1
    Leg_80_set.insert("LegInterestAccrualDate_t_51883606");
    Leg_80.add_attribute("PutCall", "335911891"); // 1
    Leg_80_set.insert("335911891");
    Leg_80.add_attribute("LegOptionRatio", "11770706.940000"); // 1
    Leg_80_set.insert("11770706.940000");
    Leg_80.add_attribute("Px", "6677113.420000"); // 1
    Leg_80_set.insert("6677113.420000");
    all_values.push_back(Leg_80_set);
    all_compo_names.insert("Leg_80_set");

    {
      xml_element LegAID_75{"LegAID"};
      multiset<string> LegAID_75_set;
      LegAID_75.add_attribute("SecAltID", "LegSecurityAltID_t_976021711"); // 2
      LegAID_75_set.insert("LegSecurityAltID_t_976021711");
      LegAID_75.add_attribute("SecAltIDSrc", "I"); // 2
      LegAID_75_set.insert("I");
      all_values.push_back(LegAID_75_set);
      all_compo_names.insert("LegAID_75_set");

      Leg_80.add_element(LegAID_75);
    }
    elt.add_element(Leg_80);
  } // end Leg
  { // Pty
    xml_element Pty_371{"Pty"};
    multiset<string> Pty_371_set;
    Pty_371.add_attribute("ID", "PartyID_t_1813482755"); // 1
    Pty_371_set.insert("PartyID_t_1813482755");
    Pty_371.add_attribute("Src", "2"); // 1
    Pty_371_set.insert("2");
    Pty_371.add_attribute("R", "75"); // 1
    Pty_371_set.insert("75");
    all_values.push_back(Pty_371_set);
    all_compo_names.insert("Pty_371_set");

    {
      xml_element Sub_371{"Sub"};
      multiset<string> Sub_371_set;
      Sub_371.add_attribute("ID", "PartySubID_t_678804059"); // 2
      Sub_371_set.insert("PartySubID_t_678804059");
      Sub_371.add_attribute("Typ", "15"); // 2
      Sub_371_set.insert("15");
      all_values.push_back(Sub_371_set);
      all_compo_names.insert("Sub_371_set");

      Pty_371.add_element(Sub_371);
    }
    elt.add_element(Pty_371);
  } // end Pty
  { // Pty
    xml_element Pty_372{"Pty"};
    multiset<string> Pty_372_set;
    Pty_372.add_attribute("ID", "PartyID_t_1670501713"); // 1
    Pty_372_set.insert("PartyID_t_1670501713");
    Pty_372.add_attribute("Src", "2"); // 1
    Pty_372_set.insert("2");
    Pty_372.add_attribute("R", "60"); // 1
    Pty_372_set.insert("60");
    all_values.push_back(Pty_372_set);
    all_compo_names.insert("Pty_372_set");

    {
      xml_element Sub_372{"Sub"};
      multiset<string> Sub_372_set;
      Sub_372.add_attribute("ID", "PartySubID_t_1087989752"); // 2
      Sub_372_set.insert("PartySubID_t_1087989752");
      Sub_372.add_attribute("Typ", "31"); // 2
      Sub_372_set.insert("31");
      all_values.push_back(Sub_372_set);
      all_compo_names.insert("Sub_372_set");

      Pty_372.add_element(Sub_372);
    }
    elt.add_element(Pty_372);
  } // end Pty
  { // Pty
    xml_element Pty_373{"Pty"};
    multiset<string> Pty_373_set;
    Pty_373.add_attribute("ID", "PartyID_t_352832208"); // 1
    Pty_373_set.insert("PartyID_t_352832208");
    Pty_373.add_attribute("Src", "D"); // 1
    Pty_373_set.insert("D");
    Pty_373.add_attribute("R", "15"); // 1
    Pty_373_set.insert("15");
    all_values.push_back(Pty_373_set);
    all_compo_names.insert("Pty_373_set");

    {
      xml_element Sub_373{"Sub"};
      multiset<string> Sub_373_set;
      Sub_373.add_attribute("ID", "PartySubID_t_1999774139"); // 2
      Sub_373_set.insert("PartySubID_t_1999774139");
      Sub_373.add_attribute("Typ", "3"); // 2
      Sub_373_set.insert("3");
      all_values.push_back(Sub_373_set);
      all_compo_names.insert("Sub_373_set");

      Pty_373.add_element(Sub_373);
    }
    elt.add_element(Pty_373);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_14{"TgtPty"};
    multiset<string> TgtPty_14_set;
    TgtPty_14.add_attribute("ID", "TargetPartyID_t_154779946"); // 1
    TgtPty_14_set.insert("TargetPartyID_t_154779946");
    TgtPty_14.add_attribute("Src", "A"); // 1
    TgtPty_14_set.insert("A");
    TgtPty_14.add_attribute("R", "17"); // 1
    TgtPty_14_set.insert("17");
    all_values.push_back(TgtPty_14_set);
    all_compo_names.insert("TgtPty_14_set");

    elt.add_element(TgtPty_14);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_15{"TgtPty"};
    multiset<string> TgtPty_15_set;
    TgtPty_15.add_attribute("ID", "TargetPartyID_t_1973616118"); // 1
    TgtPty_15_set.insert("TargetPartyID_t_1973616118");
    TgtPty_15.add_attribute("Src", "5"); // 1
    TgtPty_15_set.insert("5");
    TgtPty_15.add_attribute("R", "43"); // 1
    TgtPty_15_set.insert("43");
    all_values.push_back(TgtPty_15_set);
    all_compo_names.insert("TgtPty_15_set");

    elt.add_element(TgtPty_15);
  } // end TgtPty
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
