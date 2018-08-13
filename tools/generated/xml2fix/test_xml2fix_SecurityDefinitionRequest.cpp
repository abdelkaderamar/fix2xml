#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDefReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1043219216"); // 0
  SecurityDefinitionRequest_message_t_0.insert("SecurityReqID_t_1043219216");
  elt.add_attribute("ReqTyp", "4"); // 0
  SecurityDefinitionRequest_message_t_0.insert("4");
  elt.add_attribute("MktID", "MarketID_t_928619992"); // 0
  SecurityDefinitionRequest_message_t_0.insert("MarketID_t_928619992");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_819069231"); // 0
  SecurityDefinitionRequest_message_t_0.insert("MarketSegmentID_t_819069231");
  elt.add_attribute("Ccy", "CHF"); // 0
  SecurityDefinitionRequest_message_t_0.insert("CHF");
  elt.add_attribute("Txt", "Text_t_836412944"); // 0
  SecurityDefinitionRequest_message_t_0.insert("Text_t_836412944");
  elt.add_attribute("EncTxtLen", "2084436289"); // 0
  SecurityDefinitionRequest_message_t_0.insert("2084436289");
  elt.add_attribute("EncTxt", "EncodedText_t_691225134"); // 0
  SecurityDefinitionRequest_message_t_0.insert("EncodedText_t_691225134");
  elt.add_attribute("SesID", "4"); // 0
  SecurityDefinitionRequest_message_t_0.insert("4");
  elt.add_attribute("SesSub", "7"); // 0
  SecurityDefinitionRequest_message_t_0.insert("7");
  elt.add_attribute("ExpirationCycle", "0"); // 0
  SecurityDefinitionRequest_message_t_0.insert("0");
  elt.add_attribute("SubReqTyp", "1"); // 0
  SecurityDefinitionRequest_message_t_0.insert("1");
  all_values.push_back(SecurityDefinitionRequest_message_t_0);
  all_compo_names.insert("SecurityDefinitionRequest_message_t");

  { // Hdr
    xml_element Hdr_81{"Hdr"};
    multiset<string> Hdr_81_set;
    Hdr_81.add_attribute("SeqNum", "849797191"); // 1
    Hdr_81_set.insert("849797191");
    Hdr_81.add_attribute("SID", "SenderCompID_t_1101722194"); // 1
    Hdr_81_set.insert("SenderCompID_t_1101722194");
    Hdr_81.add_attribute("TID", "TargetCompID_t_301321604"); // 1
    Hdr_81_set.insert("TargetCompID_t_301321604");
    Hdr_81.add_attribute("OBID", "OnBehalfOfCompID_t_1828135354"); // 1
    Hdr_81_set.insert("OnBehalfOfCompID_t_1828135354");
    Hdr_81.add_attribute("D2ID", "DeliverToCompID_t_995471165"); // 1
    Hdr_81_set.insert("DeliverToCompID_t_995471165");
    Hdr_81.add_attribute("SSub", "SenderSubID_t_569807643"); // 1
    Hdr_81_set.insert("SenderSubID_t_569807643");
    Hdr_81.add_attribute("SLoc", "SenderLocationID_t_1413473299"); // 1
    Hdr_81_set.insert("SenderLocationID_t_1413473299");
    Hdr_81.add_attribute("TSub", "TargetSubID_t_2041948962"); // 1
    Hdr_81_set.insert("TargetSubID_t_2041948962");
    Hdr_81.add_attribute("TLoc", "TargetLocationID_t_1160652763"); // 1
    Hdr_81_set.insert("TargetLocationID_t_1160652763");
    Hdr_81.add_attribute("OBSub", "OnBehalfOfSubID_t_147958003"); // 1
    Hdr_81_set.insert("OnBehalfOfSubID_t_147958003");
    Hdr_81.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1064208021"); // 1
    Hdr_81_set.insert("OnBehalfOfLocationID_t_1064208021");
    Hdr_81.add_attribute("D2Sub", "DeliverToSubID_t_623570286"); // 1
    Hdr_81_set.insert("DeliverToSubID_t_623570286");
    Hdr_81.add_attribute("D2Loc", "DeliverToLocationID_t_488549352"); // 1
    Hdr_81_set.insert("DeliverToLocationID_t_488549352");
    Hdr_81.add_attribute("PosDup", "N"); // 1
    Hdr_81_set.insert("N");
    Hdr_81.add_attribute("PosRsnd", "N"); // 1
    Hdr_81_set.insert("N");
    Hdr_81.add_attribute("Snt", "SendingTime_t_1337484542"); // 1
    Hdr_81_set.insert("SendingTime_t_1337484542");
    Hdr_81.add_attribute("OrigSnt", "OrigSendingTime_t_207368128"); // 1
    Hdr_81_set.insert("OrigSendingTime_t_207368128");
    Hdr_81.add_attribute("MsgEncd", "MessageEncoding_t_395537166"); // 1
    Hdr_81_set.insert("MessageEncoding_t_395537166");
    all_values.push_back(Hdr_81_set);
    all_compo_names.insert("Hdr_81_set");

    {
      xml_element Hop_81{"Hop"};
      multiset<string> Hop_81_set;
      Hop_81.add_attribute("ID", "HopCompID_t_233220110"); // 2
      Hop_81_set.insert("HopCompID_t_233220110");
      Hop_81.add_attribute("Ref", "1323294673"); // 2
      Hop_81_set.insert("1323294673");
      Hop_81.add_attribute("Snt", "HopSendingTime_t_1324157158"); // 2
      Hop_81_set.insert("HopSendingTime_t_1324157158");
      all_values.push_back(Hop_81_set);
      all_compo_names.insert("Hop_81_set");

      Hdr_81.add_element(Hop_81);
    }
    elt.add_element(Hdr_81);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_74{"Instrmt"};
    multiset<string> Instrmt_74_set;
    Instrmt_74.add_attribute("Sym", "Symbol_t_1052289341"); // 1
    Instrmt_74_set.insert("Symbol_t_1052289341");
    Instrmt_74.add_attribute("Sfx", "WI"); // 1
    Instrmt_74_set.insert("WI");
    Instrmt_74.add_attribute("ID", "SecurityID_t_538590899"); // 1
    Instrmt_74_set.insert("SecurityID_t_538590899");
    Instrmt_74.add_attribute("Src", "K"); // 1
    Instrmt_74_set.insert("K");
    Instrmt_74.add_attribute("Prod", "7"); // 1
    Instrmt_74_set.insert("7");
    Instrmt_74.add_attribute("ProdCmplx", "ProductComplex_t_1229816033"); // 1
    Instrmt_74_set.insert("ProductComplex_t_1229816033");
    Instrmt_74.add_attribute("SecGrp", "SecurityGroup_t_1452366063"); // 1
    Instrmt_74_set.insert("SecurityGroup_t_1452366063");
    Instrmt_74.add_attribute("CFI", "CFICode_t_1923401188"); // 1
    Instrmt_74_set.insert("CFICode_t_1923401188");
    Instrmt_74.add_attribute("SecTyp", "TPRN"); // 1
    Instrmt_74_set.insert("TPRN");
    Instrmt_74.add_attribute("SubTyp", "SecuritySubType_t_78865016"); // 1
    Instrmt_74_set.insert("SecuritySubType_t_78865016");
    Instrmt_74.add_attribute("MMY", "625714731"); // 1
    Instrmt_74_set.insert("625714731");
    Instrmt_74.add_attribute("MatDt", "MaturityDate_t_1840185041"); // 1
    Instrmt_74_set.insert("MaturityDate_t_1840185041");
    Instrmt_74.add_attribute("MatTm", "380186621"); // 1
    Instrmt_74_set.insert("380186621");
    Instrmt_74.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_306366437"); // 1
    Instrmt_74_set.insert("SettleOnOpenFlag_t_306366437");
    Instrmt_74.add_attribute("AsgnMeth", "688172558"); // 1
    Instrmt_74_set.insert("688172558");
    Instrmt_74.add_attribute("Status", "1"); // 1
    Instrmt_74_set.insert("1");
    Instrmt_74.add_attribute("CpnPmt", "CouponPaymentDate_t_1719839737"); // 1
    Instrmt_74_set.insert("CouponPaymentDate_t_1719839737");
    Instrmt_74.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_74_set.insert("FR");
    Instrmt_74.add_attribute("Snrty", "SD"); // 1
    Instrmt_74_set.insert("SD");
    Instrmt_74.add_attribute("NotlPctOut", "18677977.400000"); // 1
    Instrmt_74_set.insert("18677977.400000");
    Instrmt_74.add_attribute("OrigNotlPctOut", "16468458.930000"); // 1
    Instrmt_74_set.insert("16468458.930000");
    Instrmt_74.add_attribute("AttchPnt", "5867336.650000"); // 1
    Instrmt_74_set.insert("5867336.650000");
    Instrmt_74.add_attribute("DetchPnt", "2088634.450000"); // 1
    Instrmt_74_set.insert("2088634.450000");
    Instrmt_74.add_attribute("Issued", "IssueDate_t_1991490813"); // 1
    Instrmt_74_set.insert("IssueDate_t_1991490813");
    Instrmt_74.add_attribute("RepoCollSecTyp", "1764385019"); // 1
    Instrmt_74_set.insert("1764385019");
    Instrmt_74.add_attribute("RepoTrm", "1546347987"); // 1
    Instrmt_74_set.insert("1546347987");
    Instrmt_74.add_attribute("RepoRt", "513752.940000"); // 1
    Instrmt_74_set.insert("513752.940000");
    Instrmt_74.add_attribute("Fctr", "124385.370000"); // 1
    Instrmt_74_set.insert("124385.370000");
    Instrmt_74.add_attribute("CrdRtg", "CreditRating_t_1779568097"); // 1
    Instrmt_74_set.insert("CreditRating_t_1779568097");
    Instrmt_74.add_attribute("Rgstry", "InstrRegistry_t_1374669967"); // 1
    Instrmt_74_set.insert("InstrRegistry_t_1374669967");
    Instrmt_74.add_attribute("IssuCtry", "1336595696"); // 1
    Instrmt_74_set.insert("1336595696");
    Instrmt_74.add_attribute("StPrv", "StateOrProvinceOfIssue_t_684373791"); // 1
    Instrmt_74_set.insert("StateOrProvinceOfIssue_t_684373791");
    Instrmt_74.add_attribute("Lcl", "LocaleOfIssue_t_1968486848"); // 1
    Instrmt_74_set.insert("LocaleOfIssue_t_1968486848");
    Instrmt_74.add_attribute("Redeem", "RedemptionDate_t_1875186595"); // 1
    Instrmt_74_set.insert("RedemptionDate_t_1875186595");
    Instrmt_74.add_attribute("StrkPx", "4255924.290000"); // 1
    Instrmt_74_set.insert("4255924.290000");
    Instrmt_74.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_74_set.insert("CAN");
    Instrmt_74.add_attribute("StrkMult", "18779584.920000"); // 1
    Instrmt_74_set.insert("18779584.920000");
    Instrmt_74.add_attribute("StrkValu", "1276902.620000"); // 1
    Instrmt_74_set.insert("1276902.620000");
    Instrmt_74.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_74_set.insert("4");
    Instrmt_74.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_74_set.insert("4");
    Instrmt_74.add_attribute("StrkPxBndryPrcsn", "7534049.940000"); // 1
    Instrmt_74_set.insert("7534049.940000");
    Instrmt_74.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_74_set.insert("1");
    Instrmt_74.add_attribute("OptAt", "189526481"); // 1
    Instrmt_74_set.insert("189526481");
    Instrmt_74.add_attribute("Mult", "10597714.310000"); // 1
    Instrmt_74_set.insert("10597714.310000");
    Instrmt_74.add_attribute("MultTyp", "1"); // 1
    Instrmt_74_set.insert("1");
    Instrmt_74.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_74_set.insert("0");
    Instrmt_74.add_attribute("MinPxIncr", "6321275.200000"); // 1
    Instrmt_74_set.insert("6321275.200000");
    Instrmt_74.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_512010002"); // 1
    Instrmt_74_set.insert("MinPriceIncrementAmount_t_512010002");
    Instrmt_74.add_attribute("UOM", "USD"); // 1
    Instrmt_74_set.insert("USD");
    Instrmt_74.add_attribute("UOMQty", "3524416.130000"); // 1
    Instrmt_74_set.insert("3524416.130000");
    Instrmt_74.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_74_set.insert("Gal");
    Instrmt_74.add_attribute("PxUOMQty", "16894177.890000"); // 1
    Instrmt_74_set.insert("16894177.890000");
    Instrmt_74.add_attribute("SettlMeth", "C"); // 1
    Instrmt_74_set.insert("C");
    Instrmt_74.add_attribute("ExerStyle", "1"); // 1
    Instrmt_74_set.insert("1");
    Instrmt_74.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_74_set.insert("2");
    Instrmt_74.add_attribute("OptPayAmt", "OptPayoutAmount_t_2107653045"); // 1
    Instrmt_74_set.insert("OptPayoutAmount_t_2107653045");
    Instrmt_74.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_74_set.insert("PCTPAR");
    Instrmt_74.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_74_set.insert("CDS");
    Instrmt_74.add_attribute("ListMeth", "0"); // 1
    Instrmt_74_set.insert("0");
    Instrmt_74.add_attribute("CapPx", "12814246.740000"); // 1
    Instrmt_74_set.insert("12814246.740000");
    Instrmt_74.add_attribute("FlrPx", "5078697.460000"); // 1
    Instrmt_74_set.insert("5078697.460000");
    Instrmt_74.add_attribute("PutCall", "1"); // 1
    Instrmt_74_set.insert("1");
    Instrmt_74.add_attribute("FlexInd", "true"); // 1
    Instrmt_74_set.insert("true");
    Instrmt_74.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_74_set.insert("true");
    Instrmt_74.add_attribute("TmUnit", "H"); // 1
    Instrmt_74_set.insert("H");
    Instrmt_74.add_attribute("CpnRt", "14542005.960000"); // 1
    Instrmt_74_set.insert("14542005.960000");
    Instrmt_74.add_attribute("Exch", "SecurityExchange_t_1193091675"); // 1
    Instrmt_74_set.insert("SecurityExchange_t_1193091675");
    Instrmt_74.add_attribute("PosLmt", "432694910"); // 1
    Instrmt_74_set.insert("432694910");
    Instrmt_74.add_attribute("NTPosLmt", "1581890858"); // 1
    Instrmt_74_set.insert("1581890858");
    Instrmt_74.add_attribute("Issr", "Issuer_t_741589854"); // 1
    Instrmt_74_set.insert("Issuer_t_741589854");
    Instrmt_74.add_attribute("EncIssrLen", "242034771"); // 1
    Instrmt_74_set.insert("242034771");
    Instrmt_74.add_attribute("EncIssr", "EncodedIssuer_t_187812204"); // 1
    Instrmt_74_set.insert("EncodedIssuer_t_187812204");
    Instrmt_74.add_attribute("Desc", "SecurityDesc_t_2130273075"); // 1
    Instrmt_74_set.insert("SecurityDesc_t_2130273075");
    Instrmt_74.add_attribute("EncSecDescLen", "431561252"); // 1
    Instrmt_74_set.insert("431561252");
    Instrmt_74.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1247583636"); // 1
    Instrmt_74_set.insert("EncodedSecurityDesc_t_1247583636");
    Instrmt_74.add_attribute("Pool", "Pool_t_2059645205"); // 1
    Instrmt_74_set.insert("Pool_t_2059645205");
    Instrmt_74.add_attribute("CSetMo", "1571081998"); // 1
    Instrmt_74_set.insert("1571081998");
    Instrmt_74.add_attribute("CPPgm", "2"); // 1
    Instrmt_74_set.insert("2");
    Instrmt_74.add_attribute("CPRegT", "CPRegType_t_424171560"); // 1
    Instrmt_74_set.insert("CPRegType_t_424171560");
    Instrmt_74.add_attribute("Dated", "DatedDate_t_526282474"); // 1
    Instrmt_74_set.insert("DatedDate_t_526282474");
    Instrmt_74.add_attribute("IntAcrl", "InterestAccrualDate_t_84669121"); // 1
    Instrmt_74_set.insert("InterestAccrualDate_t_84669121");
    all_values.push_back(Instrmt_74_set);
    all_compo_names.insert("Instrmt_74_set");

    {
      xml_element AID_77{"AID"};
      multiset<string> AID_77_set;
      AID_77.add_attribute("AltID", "SecurityAltID_t_435543807"); // 2
      AID_77_set.insert("SecurityAltID_t_435543807");
      AID_77.add_attribute("AltIDSrc", "7"); // 2
      AID_77_set.insert("7");
      all_values.push_back(AID_77_set);
      all_compo_names.insert("AID_77_set");

      Instrmt_74.add_element(AID_77);
    }
    {
      xml_element SecXML_77{"SecXML"};
      multiset<string> SecXML_77_set;
      SecXML_77.add_attribute("Schema", "SecurityXMLSchema_t_645974179"); // 2
      SecXML_77_set.insert("SecurityXMLSchema_t_645974179");
      all_values.push_back(SecXML_77_set);
      all_compo_names.insert("SecXML_77_set");

      Instrmt_74.add_element(SecXML_77);
    }
    {
      xml_element Evnt_77{"Evnt"};
      multiset<string> Evnt_77_set;
      Evnt_77.add_attribute("EventTyp", "1"); // 2
      Evnt_77_set.insert("1");
      Evnt_77.add_attribute("Dt", "EventDate_t_1374535777"); // 2
      Evnt_77_set.insert("EventDate_t_1374535777");
      Evnt_77.add_attribute("Tm", "EventTime_t_606143576"); // 2
      Evnt_77_set.insert("EventTime_t_606143576");
      Evnt_77.add_attribute("Px", "1976779.270000"); // 2
      Evnt_77_set.insert("1976779.270000");
      Evnt_77.add_attribute("Txt", "EventText_t_545809827"); // 2
      Evnt_77_set.insert("EventText_t_545809827");
      all_values.push_back(Evnt_77_set);
      all_compo_names.insert("Evnt_77_set");

      Instrmt_74.add_element(Evnt_77);
    }
    {
      xml_element Pty_397{"Pty"};
      multiset<string> Pty_397_set;
      Pty_397.add_attribute("ID", "InstrumentPartyID_t_198397423"); // 2
      Pty_397_set.insert("InstrumentPartyID_t_198397423");
      Pty_397.add_attribute("Src", "E"); // 2
      Pty_397_set.insert("E");
      Pty_397.add_attribute("R", "41"); // 2
      Pty_397_set.insert("41");
      all_values.push_back(Pty_397_set);
      all_compo_names.insert("Pty_397_set");

      {
        xml_element Sub_397{"Sub"};
        multiset<string> Sub_397_set;
        Sub_397.add_attribute("ID", "InstrumentPartySubID_t_475025060"); // 3
        Sub_397_set.insert("InstrumentPartySubID_t_475025060");
        Sub_397.add_attribute("Typ", "14"); // 3
        Sub_397_set.insert("14");
        all_values.push_back(Sub_397_set);
        all_compo_names.insert("Sub_397_set");

        Pty_397.add_element(Sub_397);
      }
      Instrmt_74.add_element(Pty_397);
    }
    {
      xml_element CmplxEvnt_74{"CmplxEvnt"};
      multiset<string> CmplxEvnt_74_set;
      CmplxEvnt_74.add_attribute("Typ", "1"); // 2
      CmplxEvnt_74_set.insert("1");
      CmplxEvnt_74.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1177245127"); // 2
      CmplxEvnt_74_set.insert("ComplexOptPayoutAmount_t_1177245127");
      CmplxEvnt_74.add_attribute("Px", "18882474.230000"); // 2
      CmplxEvnt_74_set.insert("18882474.230000");
      CmplxEvnt_74.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_74_set.insert("1");
      CmplxEvnt_74.add_attribute("PxBndryPrcsn", "16099400.370000"); // 2
      CmplxEvnt_74_set.insert("16099400.370000");
      CmplxEvnt_74.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_74_set.insert("1");
      CmplxEvnt_74.add_attribute("Cond", "2"); // 2
      CmplxEvnt_74_set.insert("2");
      all_values.push_back(CmplxEvnt_74_set);
      all_compo_names.insert("CmplxEvnt_74_set");

      {
        xml_element EvntDts_74{"EvntDts"};
        multiset<string> EvntDts_74_set;
        EvntDts_74.add_attribute("StartDt", "ComplexEventStartDate_t_1851974808"); // 3
        EvntDts_74_set.insert("ComplexEventStartDate_t_1851974808");
        EvntDts_74.add_attribute("EndDt", "ComplexEventEndDate_t_1510466838"); // 3
        EvntDts_74_set.insert("ComplexEventEndDate_t_1510466838");
        all_values.push_back(EvntDts_74_set);
        all_compo_names.insert("EvntDts_74_set");

        {
          xml_element EvntTms_74{"EvntTms"};
          multiset<string> EvntTms_74_set;
          EvntTms_74.add_attribute("StartTm", "1059239576"); // 4
          EvntTms_74_set.insert("1059239576");
          EvntTms_74.add_attribute("EndTm", "136052413"); // 4
          EvntTms_74_set.insert("136052413");
          all_values.push_back(EvntTms_74_set);
          all_compo_names.insert("EvntTms_74_set");

          EvntDts_74.add_element(EvntTms_74);
        }
        CmplxEvnt_74.add_element(EvntDts_74);
      }
      Instrmt_74.add_element(CmplxEvnt_74);
    }
    elt.add_element(Instrmt_74);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_9{"InstrmtExt"};
    multiset<string> InstrmtExt_9_set;
    InstrmtExt_9.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_9_set.insert("1");
    InstrmtExt_9.add_attribute("PctAtRisk", "9714011.340000"); // 1
    InstrmtExt_9_set.insert("9714011.340000");
    all_values.push_back(InstrmtExt_9_set);
    all_compo_names.insert("InstrmtExt_9_set");

    {
      xml_element Attrb_15{"Attrb"};
      multiset<string> Attrb_15_set;
      Attrb_15.add_attribute("Typ", "2"); // 2
      Attrb_15_set.insert("2");
      Attrb_15.add_attribute("Val", "InstrAttribValue_t_342794335"); // 2
      Attrb_15_set.insert("InstrAttribValue_t_342794335");
      all_values.push_back(Attrb_15_set);
      all_compo_names.insert("Attrb_15_set");

      InstrmtExt_9.add_element(Attrb_15);
    }
    elt.add_element(InstrmtExt_9);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_106{"Undly"};
    multiset<string> Undly_106_set;
    Undly_106.add_attribute("Sym", "UnderlyingSymbol_t_85933237"); // 1
    Undly_106_set.insert("UnderlyingSymbol_t_85933237");
    Undly_106.add_attribute("Sfx", "CD"); // 1
    Undly_106_set.insert("CD");
    Undly_106.add_attribute("ID", "UnderlyingSecurityID_t_1831116501"); // 1
    Undly_106_set.insert("UnderlyingSecurityID_t_1831116501");
    Undly_106.add_attribute("Src", "C"); // 1
    Undly_106_set.insert("C");
    Undly_106.add_attribute("Prod", "8"); // 1
    Undly_106_set.insert("8");
    Undly_106.add_attribute("CFI", "UnderlyingCFICode_t_2122039722"); // 1
    Undly_106_set.insert("UnderlyingCFICode_t_2122039722");
    Undly_106.add_attribute("SecTyp", "FXNDF"); // 1
    Undly_106_set.insert("FXNDF");
    Undly_106.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1679581212"); // 1
    Undly_106_set.insert("UnderlyingSecuritySubType_t_1679581212");
    Undly_106.add_attribute("MMY", "172234001"); // 1
    Undly_106_set.insert("172234001");
    Undly_106.add_attribute("Mat", "UnderlyingMaturityDate_t_2074495458"); // 1
    Undly_106_set.insert("UnderlyingMaturityDate_t_2074495458");
    Undly_106.add_attribute("MatTm", "1877978635"); // 1
    Undly_106_set.insert("1877978635");
    Undly_106.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1651336603"); // 1
    Undly_106_set.insert("UnderlyingCouponPaymentDate_t_1651336603");
    Undly_106.add_attribute("RestrctTyp", "FR"); // 1
    Undly_106_set.insert("FR");
    Undly_106.add_attribute("Snrty", "SB"); // 1
    Undly_106_set.insert("SB");
    Undly_106.add_attribute("NotlPctOut", "20853834.300000"); // 1
    Undly_106_set.insert("20853834.300000");
    Undly_106.add_attribute("OrigNotlPctOut", "1224600.040000"); // 1
    Undly_106_set.insert("1224600.040000");
    Undly_106.add_attribute("AttchPnt", "13827651.750000"); // 1
    Undly_106_set.insert("13827651.750000");
    Undly_106.add_attribute("DetchPnt", "18261472.060000"); // 1
    Undly_106_set.insert("18261472.060000");
    Undly_106.add_attribute("Issued", "UnderlyingIssueDate_t_457320299"); // 1
    Undly_106_set.insert("UnderlyingIssueDate_t_457320299");
    Undly_106.add_attribute("RepoCollSecTyp", "845221564"); // 1
    Undly_106_set.insert("845221564");
    Undly_106.add_attribute("RepoTrm", "1001318192"); // 1
    Undly_106_set.insert("1001318192");
    Undly_106.add_attribute("RepoRt", "15337704.480000"); // 1
    Undly_106_set.insert("15337704.480000");
    Undly_106.add_attribute("Fctr", "5497127.250000"); // 1
    Undly_106_set.insert("5497127.250000");
    Undly_106.add_attribute("CrdRtg", "UnderlyingCreditRating_t_364301382"); // 1
    Undly_106_set.insert("UnderlyingCreditRating_t_364301382");
    Undly_106.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_445526377"); // 1
    Undly_106_set.insert("UnderlyingInstrRegistry_t_445526377");
    Undly_106.add_attribute("Ctry", "685765138"); // 1
    Undly_106_set.insert("685765138");
    Undly_106.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_974868209"); // 1
    Undly_106_set.insert("UnderlyingStateOrProvinceOfIssue_t_974868209");
    Undly_106.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1416927511"); // 1
    Undly_106_set.insert("UnderlyingLocaleOfIssue_t_1416927511");
    Undly_106.add_attribute("Redeem", "UnderlyingRedemptionDate_t_245415901"); // 1
    Undly_106_set.insert("UnderlyingRedemptionDate_t_245415901");
    Undly_106.add_attribute("StrkPx", "13176625.440000"); // 1
    Undly_106_set.insert("13176625.440000");
    Undly_106.add_attribute("StrkCcy", "GBP"); // 1
    Undly_106_set.insert("GBP");
    Undly_106.add_attribute("OptA", "1745126000"); // 1
    Undly_106_set.insert("1745126000");
    Undly_106.add_attribute("Mult", "3486494.100000"); // 1
    Undly_106_set.insert("3486494.100000");
    Undly_106.add_attribute("MultTyp", "1"); // 1
    Undly_106_set.insert("1");
    Undly_106.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_106_set.insert("3");
    Undly_106.add_attribute("UOM", "t"); // 1
    Undly_106_set.insert("t");
    Undly_106.add_attribute("UOMQty", "20141846.220000"); // 1
    Undly_106_set.insert("20141846.220000");
    Undly_106.add_attribute("PxUOM", "lbs"); // 1
    Undly_106_set.insert("lbs");
    Undly_106.add_attribute("PxUOMQty", "4954394.860000"); // 1
    Undly_106_set.insert("4954394.860000");
    Undly_106.add_attribute("TmUnit", "S"); // 1
    Undly_106_set.insert("S");
    Undly_106.add_attribute("ExerStyle", "1"); // 1
    Undly_106_set.insert("1");
    Undly_106.add_attribute("CpnRt", "21467760.890000"); // 1
    Undly_106_set.insert("21467760.890000");
    Undly_106.add_attribute("Exch", "UnderlyingSecurityExchange_t_774404168"); // 1
    Undly_106_set.insert("UnderlyingSecurityExchange_t_774404168");
    Undly_106.add_attribute("Issr", "UnderlyingIssuer_t_139192588"); // 1
    Undly_106_set.insert("UnderlyingIssuer_t_139192588");
    Undly_106.add_attribute("EncUndIssrLen", "2084675871"); // 1
    Undly_106_set.insert("2084675871");
    Undly_106.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_896864172"); // 1
    Undly_106_set.insert("EncodedUnderlyingIssuer_t_896864172");
    Undly_106.add_attribute("Desc", "UnderlyingSecurityDesc_t_1521957763"); // 1
    Undly_106_set.insert("UnderlyingSecurityDesc_t_1521957763");
    Undly_106.add_attribute("EncUndSecDescLen", "1763339429"); // 1
    Undly_106_set.insert("1763339429");
    Undly_106.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1354184471"); // 1
    Undly_106_set.insert("EncodedUnderlyingSecurityDesc_t_1354184471");
    Undly_106.add_attribute("CPPgm", "UnderlyingCPProgram_t_219695680"); // 1
    Undly_106_set.insert("UnderlyingCPProgram_t_219695680");
    Undly_106.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_617173973"); // 1
    Undly_106_set.insert("UnderlyingCPRegType_t_617173973");
    Undly_106.add_attribute("AllocPct", "7404712.720000"); // 1
    Undly_106_set.insert("7404712.720000");
    Undly_106.add_attribute("Ccy", "USD"); // 1
    Undly_106_set.insert("USD");
    Undly_106.add_attribute("Qty", "11859976.490000"); // 1
    Undly_106_set.insert("11859976.490000");
    Undly_106.add_attribute("SettlTyp", "5"); // 1
    Undly_106_set.insert("5");
    Undly_106.add_attribute("CashAmt", "UnderlyingCashAmount_t_1956343565"); // 1
    Undly_106_set.insert("UnderlyingCashAmount_t_1956343565");
    Undly_106.add_attribute("CashTyp", "FIXED"); // 1
    Undly_106_set.insert("FIXED");
    Undly_106.add_attribute("Px", "17005894.440000"); // 1
    Undly_106_set.insert("17005894.440000");
    Undly_106.add_attribute("DirtPx", "11265224.610000"); // 1
    Undly_106_set.insert("11265224.610000");
    Undly_106.add_attribute("EndPx", "11204580.690000"); // 1
    Undly_106_set.insert("11204580.690000");
    Undly_106.add_attribute("StartVal", "UnderlyingStartValue_t_2031938582"); // 1
    Undly_106_set.insert("UnderlyingStartValue_t_2031938582");
    Undly_106.add_attribute("CurVal", "UnderlyingCurrentValue_t_724164813"); // 1
    Undly_106_set.insert("UnderlyingCurrentValue_t_724164813");
    Undly_106.add_attribute("EndVal", "UnderlyingEndValue_t_1469107479"); // 1
    Undly_106_set.insert("UnderlyingEndValue_t_1469107479");
    Undly_106.add_attribute("AdjQty", "3699539.260000"); // 1
    Undly_106_set.insert("3699539.260000");
    Undly_106.add_attribute("FxRate", "13952448.020000"); // 1
    Undly_106_set.insert("13952448.020000");
    Undly_106.add_attribute("FxRateCalc", "M"); // 1
    Undly_106_set.insert("M");
    Undly_106.add_attribute("CapValu", "UnderlyingCapValue_t_236654901"); // 1
    Undly_106_set.insert("UnderlyingCapValue_t_236654901");
    Undly_106.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1598422355"); // 1
    Undly_106_set.insert("UnderlyingSettlMethod_t_1598422355");
    Undly_106.add_attribute("PutCall", "140268802"); // 1
    Undly_106_set.insert("140268802");
    all_values.push_back(Undly_106_set);
    all_compo_names.insert("Undly_106_set");

    {
      xml_element UndAID_106{"UndAID"};
      multiset<string> UndAID_106_set;
      UndAID_106.add_attribute("AltID", "UnderlyingSecurityAltID_t_30367685"); // 2
      UndAID_106_set.insert("UnderlyingSecurityAltID_t_30367685");
      UndAID_106.add_attribute("AltIDSrc", "2"); // 2
      UndAID_106_set.insert("2");
      all_values.push_back(UndAID_106_set);
      all_compo_names.insert("UndAID_106_set");

      Undly_106.add_element(UndAID_106);
    }
    {
      xml_element Stip_168{"Stip"};
      multiset<string> Stip_168_set;
      Stip_168.add_attribute("Typ", "RATING"); // 2
      Stip_168_set.insert("RATING");
      Stip_168.add_attribute("Val", "UnderlyingStipValue_t_804771854"); // 2
      Stip_168_set.insert("UnderlyingStipValue_t_804771854");
      all_values.push_back(Stip_168_set);
      all_compo_names.insert("Stip_168_set");

      Undly_106.add_element(Stip_168);
    }
    {
      xml_element Pty_398{"Pty"};
      multiset<string> Pty_398_set;
      Pty_398.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1671287484"); // 2
      Pty_398_set.insert("UnderlyingInstrumentPartyID_t_1671287484");
      Pty_398.add_attribute("Src", "9"); // 2
      Pty_398_set.insert("9");
      Pty_398.add_attribute("R", "64"); // 2
      Pty_398_set.insert("64");
      all_values.push_back(Pty_398_set);
      all_compo_names.insert("Pty_398_set");

      {
        xml_element Sub_398{"Sub"};
        multiset<string> Sub_398_set;
        Sub_398.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1045761599"); // 3
        Sub_398_set.insert("UnderlyingInstrumentPartySubID_t_1045761599");
        Sub_398.add_attribute("Typ", "27"); // 3
        Sub_398_set.insert("27");
        all_values.push_back(Sub_398_set);
        all_compo_names.insert("Sub_398_set");

        Pty_398.add_element(Sub_398);
      }
      Undly_106.add_element(Pty_398);
    }
    elt.add_element(Undly_106);
  } // end Undly
  { // Stip
    xml_element Stip_169{"Stip"};
    multiset<string> Stip_169_set;
    Stip_169.add_attribute("Typ", "YTM"); // 1
    Stip_169_set.insert("YTM");
    Stip_169.add_attribute("Val", "StipulationValue_t_309783221"); // 1
    Stip_169_set.insert("StipulationValue_t_309783221");
    all_values.push_back(Stip_169_set);
    all_compo_names.insert("Stip_169_set");

    elt.add_element(Stip_169);
  } // end Stip
  { // Leg
    xml_element Leg_89{"Leg"};
    multiset<string> Leg_89_set;
    Leg_89.add_attribute("Sym", "LegSymbol_t_2034865684"); // 1
    Leg_89_set.insert("LegSymbol_t_2034865684");
    Leg_89.add_attribute("Sfx", "WI"); // 1
    Leg_89_set.insert("WI");
    Leg_89.add_attribute("ID", "LegSecurityID_t_687322123"); // 1
    Leg_89_set.insert("LegSecurityID_t_687322123");
    Leg_89.add_attribute("Src", "E"); // 1
    Leg_89_set.insert("E");
    Leg_89.add_attribute("Prod", "4"); // 1
    Leg_89_set.insert("4");
    Leg_89.add_attribute("CFI", "LegCFICode_t_1142763635"); // 1
    Leg_89_set.insert("LegCFICode_t_1142763635");
    Leg_89.add_attribute("SecTyp", "TBILL"); // 1
    Leg_89_set.insert("TBILL");
    Leg_89.add_attribute("SecSubTyp", "LegSecuritySubType_t_79157307"); // 1
    Leg_89_set.insert("LegSecuritySubType_t_79157307");
    Leg_89.add_attribute("MMY", "115738056"); // 1
    Leg_89_set.insert("115738056");
    Leg_89.add_attribute("Mat", "LegMaturityDate_t_780116310"); // 1
    Leg_89_set.insert("LegMaturityDate_t_780116310");
    Leg_89.add_attribute("MatTm", "803322121"); // 1
    Leg_89_set.insert("803322121");
    Leg_89.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1584845535"); // 1
    Leg_89_set.insert("LegCouponPaymentDate_t_1584845535");
    Leg_89.add_attribute("Issued", "LegIssueDate_t_1150070236"); // 1
    Leg_89_set.insert("LegIssueDate_t_1150070236");
    Leg_89.add_attribute("RepoCollSecTyp", "51083275"); // 1
    Leg_89_set.insert("51083275");
    Leg_89.add_attribute("RepoTrm", "1229674851"); // 1
    Leg_89_set.insert("1229674851");
    Leg_89.add_attribute("RepoRt", "13867251.370000"); // 1
    Leg_89_set.insert("13867251.370000");
    Leg_89.add_attribute("Fctr", "16495056.300000"); // 1
    Leg_89_set.insert("16495056.300000");
    Leg_89.add_attribute("CrdRtg", "LegCreditRating_t_1369943653"); // 1
    Leg_89_set.insert("LegCreditRating_t_1369943653");
    Leg_89.add_attribute("Rgstry", "LegInstrRegistry_t_1417092823"); // 1
    Leg_89_set.insert("LegInstrRegistry_t_1417092823");
    Leg_89.add_attribute("Ctry", "1034116877"); // 1
    Leg_89_set.insert("1034116877");
    Leg_89.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1509504896"); // 1
    Leg_89_set.insert("LegStateOrProvinceOfIssue_t_1509504896");
    Leg_89.add_attribute("Lcl", "LegLocaleOfIssue_t_74381029"); // 1
    Leg_89_set.insert("LegLocaleOfIssue_t_74381029");
    Leg_89.add_attribute("Redeem", "LegRedemptionDate_t_557920713"); // 1
    Leg_89_set.insert("LegRedemptionDate_t_557920713");
    Leg_89.add_attribute("Strk", "15862583.630000"); // 1
    Leg_89_set.insert("15862583.630000");
    Leg_89.add_attribute("StrkCcy", "CHF"); // 1
    Leg_89_set.insert("CHF");
    Leg_89.add_attribute("OptA", "1278867611"); // 1
    Leg_89_set.insert("1278867611");
    Leg_89.add_attribute("Cmult", "5368702.570000"); // 1
    Leg_89_set.insert("5368702.570000");
    Leg_89.add_attribute("MultTyp", "1"); // 1
    Leg_89_set.insert("1");
    Leg_89.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_89_set.insert("2");
    Leg_89.add_attribute("UOM", "Gal"); // 1
    Leg_89_set.insert("Gal");
    Leg_89.add_attribute("UOMQty", "6090379.810000"); // 1
    Leg_89_set.insert("6090379.810000");
    Leg_89.add_attribute("PxUOM", "Gal"); // 1
    Leg_89_set.insert("Gal");
    Leg_89.add_attribute("PxUOMQty", "7255168.540000"); // 1
    Leg_89_set.insert("7255168.540000");
    Leg_89.add_attribute("TmUnit", "S"); // 1
    Leg_89_set.insert("S");
    Leg_89.add_attribute("ExerStyle", "1"); // 1
    Leg_89_set.insert("1");
    Leg_89.add_attribute("CpnRt", "18682804.890000"); // 1
    Leg_89_set.insert("18682804.890000");
    Leg_89.add_attribute("Exch", "LegSecurityExchange_t_699771288"); // 1
    Leg_89_set.insert("LegSecurityExchange_t_699771288");
    Leg_89.add_attribute("Issr", "LegIssuer_t_1911701564"); // 1
    Leg_89_set.insert("LegIssuer_t_1911701564");
    Leg_89.add_attribute("EncLegIssrLen", "1984018545"); // 1
    Leg_89_set.insert("1984018545");
    Leg_89.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1479887598"); // 1
    Leg_89_set.insert("EncodedLegIssuer_t_1479887598");
    Leg_89.add_attribute("Desc", "LegSecurityDesc_t_567540037"); // 1
    Leg_89_set.insert("LegSecurityDesc_t_567540037");
    Leg_89.add_attribute("EncLegSecDescLen", "1421380433"); // 1
    Leg_89_set.insert("1421380433");
    Leg_89.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_482474186"); // 1
    Leg_89_set.insert("EncodedLegSecurityDesc_t_482474186");
    Leg_89.add_attribute("RatioQty", "6186233.120000"); // 1
    Leg_89_set.insert("6186233.120000");
    Leg_89.add_attribute("Side", "5"); // 1
    Leg_89_set.insert("5");
    Leg_89.add_attribute("Ccy", "USD"); // 1
    Leg_89_set.insert("USD");
    Leg_89.add_attribute("Pool", "LegPool_t_1873515290"); // 1
    Leg_89_set.insert("LegPool_t_1873515290");
    Leg_89.add_attribute("Dated", "LegDatedDate_t_1138808499"); // 1
    Leg_89_set.insert("LegDatedDate_t_1138808499");
    Leg_89.add_attribute("CSetMo", "1154762171"); // 1
    Leg_89_set.insert("1154762171");
    Leg_89.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1235536538"); // 1
    Leg_89_set.insert("LegInterestAccrualDate_t_1235536538");
    Leg_89.add_attribute("PutCall", "1213189528"); // 1
    Leg_89_set.insert("1213189528");
    Leg_89.add_attribute("LegOptionRatio", "17126828.850000"); // 1
    Leg_89_set.insert("17126828.850000");
    Leg_89.add_attribute("Px", "6743112.530000"); // 1
    Leg_89_set.insert("6743112.530000");
    all_values.push_back(Leg_89_set);
    all_compo_names.insert("Leg_89_set");

    {
      xml_element LegAID_84{"LegAID"};
      multiset<string> LegAID_84_set;
      LegAID_84.add_attribute("SecAltID", "LegSecurityAltID_t_841722935"); // 2
      LegAID_84_set.insert("LegSecurityAltID_t_841722935");
      LegAID_84.add_attribute("SecAltIDSrc", "D"); // 2
      LegAID_84_set.insert("D");
      all_values.push_back(LegAID_84_set);
      all_compo_names.insert("LegAID_84_set");

      Leg_89.add_element(LegAID_84);
    }
    elt.add_element(Leg_89);
  } // end Leg
  { // Leg
    xml_element Leg_90{"Leg"};
    multiset<string> Leg_90_set;
    Leg_90.add_attribute("Sym", "LegSymbol_t_1953178864"); // 1
    Leg_90_set.insert("LegSymbol_t_1953178864");
    Leg_90.add_attribute("Sfx", "WI"); // 1
    Leg_90_set.insert("WI");
    Leg_90.add_attribute("ID", "LegSecurityID_t_1890537494"); // 1
    Leg_90_set.insert("LegSecurityID_t_1890537494");
    Leg_90.add_attribute("Src", "L"); // 1
    Leg_90_set.insert("L");
    Leg_90.add_attribute("Prod", "3"); // 1
    Leg_90_set.insert("3");
    Leg_90.add_attribute("CFI", "LegCFICode_t_352091827"); // 1
    Leg_90_set.insert("LegCFICode_t_352091827");
    Leg_90.add_attribute("SecTyp", "PROV"); // 1
    Leg_90_set.insert("PROV");
    Leg_90.add_attribute("SecSubTyp", "LegSecuritySubType_t_2142304779"); // 1
    Leg_90_set.insert("LegSecuritySubType_t_2142304779");
    Leg_90.add_attribute("MMY", "156201740"); // 1
    Leg_90_set.insert("156201740");
    Leg_90.add_attribute("Mat", "LegMaturityDate_t_1811832419"); // 1
    Leg_90_set.insert("LegMaturityDate_t_1811832419");
    Leg_90.add_attribute("MatTm", "1863101620"); // 1
    Leg_90_set.insert("1863101620");
    Leg_90.add_attribute("CpnPmt", "LegCouponPaymentDate_t_855973028"); // 1
    Leg_90_set.insert("LegCouponPaymentDate_t_855973028");
    Leg_90.add_attribute("Issued", "LegIssueDate_t_1576050335"); // 1
    Leg_90_set.insert("LegIssueDate_t_1576050335");
    Leg_90.add_attribute("RepoCollSecTyp", "1699636518"); // 1
    Leg_90_set.insert("1699636518");
    Leg_90.add_attribute("RepoTrm", "188376978"); // 1
    Leg_90_set.insert("188376978");
    Leg_90.add_attribute("RepoRt", "21435903.720000"); // 1
    Leg_90_set.insert("21435903.720000");
    Leg_90.add_attribute("Fctr", "9735333.030000"); // 1
    Leg_90_set.insert("9735333.030000");
    Leg_90.add_attribute("CrdRtg", "LegCreditRating_t_670851164"); // 1
    Leg_90_set.insert("LegCreditRating_t_670851164");
    Leg_90.add_attribute("Rgstry", "LegInstrRegistry_t_614730036"); // 1
    Leg_90_set.insert("LegInstrRegistry_t_614730036");
    Leg_90.add_attribute("Ctry", "1477104939"); // 1
    Leg_90_set.insert("1477104939");
    Leg_90.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_392566840"); // 1
    Leg_90_set.insert("LegStateOrProvinceOfIssue_t_392566840");
    Leg_90.add_attribute("Lcl", "LegLocaleOfIssue_t_735375330"); // 1
    Leg_90_set.insert("LegLocaleOfIssue_t_735375330");
    Leg_90.add_attribute("Redeem", "LegRedemptionDate_t_1203136581"); // 1
    Leg_90_set.insert("LegRedemptionDate_t_1203136581");
    Leg_90.add_attribute("Strk", "15313753.390000"); // 1
    Leg_90_set.insert("15313753.390000");
    Leg_90.add_attribute("StrkCcy", "JPY"); // 1
    Leg_90_set.insert("JPY");
    Leg_90.add_attribute("OptA", "597081219"); // 1
    Leg_90_set.insert("597081219");
    Leg_90.add_attribute("Cmult", "14553367.390000"); // 1
    Leg_90_set.insert("14553367.390000");
    Leg_90.add_attribute("MultTyp", "0"); // 1
    Leg_90_set.insert("0");
    Leg_90.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_90_set.insert("0");
    Leg_90.add_attribute("UOM", "MMbbl"); // 1
    Leg_90_set.insert("MMbbl");
    Leg_90.add_attribute("UOMQty", "7711959.420000"); // 1
    Leg_90_set.insert("7711959.420000");
    Leg_90.add_attribute("PxUOM", "MMBtu"); // 1
    Leg_90_set.insert("MMBtu");
    Leg_90.add_attribute("PxUOMQty", "2197884.870000"); // 1
    Leg_90_set.insert("2197884.870000");
    Leg_90.add_attribute("TmUnit", "H"); // 1
    Leg_90_set.insert("H");
    Leg_90.add_attribute("ExerStyle", "0"); // 1
    Leg_90_set.insert("0");
    Leg_90.add_attribute("CpnRt", "5718803.150000"); // 1
    Leg_90_set.insert("5718803.150000");
    Leg_90.add_attribute("Exch", "LegSecurityExchange_t_2144830154"); // 1
    Leg_90_set.insert("LegSecurityExchange_t_2144830154");
    Leg_90.add_attribute("Issr", "LegIssuer_t_2081522755"); // 1
    Leg_90_set.insert("LegIssuer_t_2081522755");
    Leg_90.add_attribute("EncLegIssrLen", "728082055"); // 1
    Leg_90_set.insert("728082055");
    Leg_90.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1809178925"); // 1
    Leg_90_set.insert("EncodedLegIssuer_t_1809178925");
    Leg_90.add_attribute("Desc", "LegSecurityDesc_t_1797140728"); // 1
    Leg_90_set.insert("LegSecurityDesc_t_1797140728");
    Leg_90.add_attribute("EncLegSecDescLen", "1584055083"); // 1
    Leg_90_set.insert("1584055083");
    Leg_90.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1237745613"); // 1
    Leg_90_set.insert("EncodedLegSecurityDesc_t_1237745613");
    Leg_90.add_attribute("RatioQty", "13492935.980000"); // 1
    Leg_90_set.insert("13492935.980000");
    Leg_90.add_attribute("Side", "E"); // 1
    Leg_90_set.insert("E");
    Leg_90.add_attribute("Ccy", "CHF"); // 1
    Leg_90_set.insert("CHF");
    Leg_90.add_attribute("Pool", "LegPool_t_295799577"); // 1
    Leg_90_set.insert("LegPool_t_295799577");
    Leg_90.add_attribute("Dated", "LegDatedDate_t_1848582374"); // 1
    Leg_90_set.insert("LegDatedDate_t_1848582374");
    Leg_90.add_attribute("CSetMo", "1652448192"); // 1
    Leg_90_set.insert("1652448192");
    Leg_90.add_attribute("IntAcrl", "LegInterestAccrualDate_t_688366418"); // 1
    Leg_90_set.insert("LegInterestAccrualDate_t_688366418");
    Leg_90.add_attribute("PutCall", "436474056"); // 1
    Leg_90_set.insert("436474056");
    Leg_90.add_attribute("LegOptionRatio", "7081011.260000"); // 1
    Leg_90_set.insert("7081011.260000");
    Leg_90.add_attribute("Px", "722581.090000"); // 1
    Leg_90_set.insert("722581.090000");
    all_values.push_back(Leg_90_set);
    all_compo_names.insert("Leg_90_set");

    {
      xml_element LegAID_85{"LegAID"};
      multiset<string> LegAID_85_set;
      LegAID_85.add_attribute("SecAltID", "LegSecurityAltID_t_179127910"); // 2
      LegAID_85_set.insert("LegSecurityAltID_t_179127910");
      LegAID_85.add_attribute("SecAltIDSrc", "K"); // 2
      LegAID_85_set.insert("K");
      all_values.push_back(LegAID_85_set);
      all_compo_names.insert("LegAID_85_set");

      Leg_90.add_element(LegAID_85);
    }
    elt.add_element(Leg_90);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_32{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_32_set;
    SprdBnchmkCurve_32.add_attribute("Spread", "6693393.290000"); // 1
    SprdBnchmkCurve_32_set.insert("6693393.290000");
    SprdBnchmkCurve_32.add_attribute("Ccy", "CHF"); // 1
    SprdBnchmkCurve_32_set.insert("CHF");
    SprdBnchmkCurve_32.add_attribute("Name", "Pfandbriefe"); // 1
    SprdBnchmkCurve_32_set.insert("Pfandbriefe");
    SprdBnchmkCurve_32.add_attribute("Point", "BenchmarkCurvePoint_t_2111199290"); // 1
    SprdBnchmkCurve_32_set.insert("BenchmarkCurvePoint_t_2111199290");
    SprdBnchmkCurve_32.add_attribute("Px", "5885036.170000"); // 1
    SprdBnchmkCurve_32_set.insert("5885036.170000");
    SprdBnchmkCurve_32.add_attribute("PxTyp", "11"); // 1
    SprdBnchmkCurve_32_set.insert("11");
    SprdBnchmkCurve_32.add_attribute("SecID", "BenchmarkSecurityID_t_183504130"); // 1
    SprdBnchmkCurve_32_set.insert("BenchmarkSecurityID_t_183504130");
    SprdBnchmkCurve_32.add_attribute("SecIDSrc", "5"); // 1
    SprdBnchmkCurve_32_set.insert("5");
    all_values.push_back(SprdBnchmkCurve_32_set);
    all_compo_names.insert("SprdBnchmkCurve_32_set");

    elt.add_element(SprdBnchmkCurve_32);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_27{"Yield"};
    multiset<string> Yield_27_set;
    Yield_27.add_attribute("Typ", "TENDER"); // 1
    Yield_27_set.insert("TENDER");
    Yield_27.add_attribute("Yld", "7553844.450000"); // 1
    Yield_27_set.insert("7553844.450000");
    Yield_27.add_attribute("CalcDt", "YieldCalcDate_t_603908466"); // 1
    Yield_27_set.insert("YieldCalcDate_t_603908466");
    Yield_27.add_attribute("RedDt", "YieldRedemptionDate_t_503830620"); // 1
    Yield_27_set.insert("YieldRedemptionDate_t_503830620");
    Yield_27.add_attribute("RedPx", "14834665.000000"); // 1
    Yield_27_set.insert("14834665.000000");
    Yield_27.add_attribute("RedPxTyp", "9"); // 1
    Yield_27_set.insert("9");
    all_values.push_back(Yield_27_set);
    all_compo_names.insert("Yield_27_set");

    elt.add_element(Yield_27);
  } // end Yield
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
