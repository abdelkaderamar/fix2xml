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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDefReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1650871244"); // 0
  SecurityDefinitionRequest_message_t_0.insert("SecurityReqID_t_1650871244");
  elt.add_attribute("ReqTyp", "0"); // 0
  SecurityDefinitionRequest_message_t_0.insert("0");
  elt.add_attribute("MktID", "MarketID_t_1733726900"); // 0
  SecurityDefinitionRequest_message_t_0.insert("MarketID_t_1733726900");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1691945331"); // 0
  SecurityDefinitionRequest_message_t_0.insert("MarketSegmentID_t_1691945331");
  elt.add_attribute("Ccy", "JPY"); // 0
  SecurityDefinitionRequest_message_t_0.insert("JPY");
  elt.add_attribute("Txt", "Text_t_978797308"); // 0
  SecurityDefinitionRequest_message_t_0.insert("Text_t_978797308");
  elt.add_attribute("EncTxtLen", "834911983"); // 0
  SecurityDefinitionRequest_message_t_0.insert("834911983");
  elt.add_attribute("EncTxt", "EncodedText_t_1881381556"); // 0
  SecurityDefinitionRequest_message_t_0.insert("EncodedText_t_1881381556");
  elt.add_attribute("SesID", "6"); // 0
  SecurityDefinitionRequest_message_t_0.insert("6");
  elt.add_attribute("SesSub", "3"); // 0
  SecurityDefinitionRequest_message_t_0.insert("3");
  elt.add_attribute("ExpirationCycle", "2"); // 0
  SecurityDefinitionRequest_message_t_0.insert("2");
  elt.add_attribute("SubReqTyp", "1"); // 0
  SecurityDefinitionRequest_message_t_0.insert("1");
  all_values.push_back(SecurityDefinitionRequest_message_t_0);
  all_compo_names.insert("SecurityDefinitionRequest_message_t");

  { // Hdr
    xml_element Hdr_81{"Hdr"};
    multiset<string> Hdr_81_set;
    Hdr_81.add_attribute("SeqNum", "456569488"); // 1
    Hdr_81_set.insert("456569488");
    Hdr_81.add_attribute("SID", "SenderCompID_t_1640555178"); // 1
    Hdr_81_set.insert("SenderCompID_t_1640555178");
    Hdr_81.add_attribute("TID", "TargetCompID_t_1818396928"); // 1
    Hdr_81_set.insert("TargetCompID_t_1818396928");
    Hdr_81.add_attribute("OBID", "OnBehalfOfCompID_t_2136606128"); // 1
    Hdr_81_set.insert("OnBehalfOfCompID_t_2136606128");
    Hdr_81.add_attribute("D2ID", "DeliverToCompID_t_898598512"); // 1
    Hdr_81_set.insert("DeliverToCompID_t_898598512");
    Hdr_81.add_attribute("SSub", "SenderSubID_t_1270592113"); // 1
    Hdr_81_set.insert("SenderSubID_t_1270592113");
    Hdr_81.add_attribute("SLoc", "SenderLocationID_t_1458762283"); // 1
    Hdr_81_set.insert("SenderLocationID_t_1458762283");
    Hdr_81.add_attribute("TSub", "TargetSubID_t_509419904"); // 1
    Hdr_81_set.insert("TargetSubID_t_509419904");
    Hdr_81.add_attribute("TLoc", "TargetLocationID_t_611785272"); // 1
    Hdr_81_set.insert("TargetLocationID_t_611785272");
    Hdr_81.add_attribute("OBSub", "OnBehalfOfSubID_t_742144894"); // 1
    Hdr_81_set.insert("OnBehalfOfSubID_t_742144894");
    Hdr_81.add_attribute("OBLoc", "OnBehalfOfLocationID_t_12994505"); // 1
    Hdr_81_set.insert("OnBehalfOfLocationID_t_12994505");
    Hdr_81.add_attribute("D2Sub", "DeliverToSubID_t_1311095579"); // 1
    Hdr_81_set.insert("DeliverToSubID_t_1311095579");
    Hdr_81.add_attribute("D2Loc", "DeliverToLocationID_t_1059879787"); // 1
    Hdr_81_set.insert("DeliverToLocationID_t_1059879787");
    Hdr_81.add_attribute("PosDup", "Y"); // 1
    Hdr_81_set.insert("Y");
    Hdr_81.add_attribute("PosRsnd", "Y"); // 1
    Hdr_81_set.insert("Y");
    Hdr_81.add_attribute("Snt", "SendingTime_t_1679873906"); // 1
    Hdr_81_set.insert("SendingTime_t_1679873906");
    Hdr_81.add_attribute("OrigSnt", "OrigSendingTime_t_1970722928"); // 1
    Hdr_81_set.insert("OrigSendingTime_t_1970722928");
    Hdr_81.add_attribute("MsgEncd", "MessageEncoding_t_1020454390"); // 1
    Hdr_81_set.insert("MessageEncoding_t_1020454390");
    all_values.push_back(Hdr_81_set);
    all_compo_names.insert("Hdr_81_set");

    {
      xml_element Hop_81{"Hop"};
      multiset<string> Hop_81_set;
      Hop_81.add_attribute("ID", "HopCompID_t_1183261503"); // 2
      Hop_81_set.insert("HopCompID_t_1183261503");
      Hop_81.add_attribute("Ref", "1831449710"); // 2
      Hop_81_set.insert("1831449710");
      Hop_81.add_attribute("Snt", "HopSendingTime_t_606697642"); // 2
      Hop_81_set.insert("HopSendingTime_t_606697642");
      all_values.push_back(Hop_81_set);
      all_compo_names.insert("Hop_81_set");

      Hdr_81.add_element(Hop_81);
    }
    elt.add_element(Hdr_81);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_69{"Instrmt"};
    multiset<string> Instrmt_69_set;
    Instrmt_69.add_attribute("Sym", "Symbol_t_727723186"); // 1
    Instrmt_69_set.insert("Symbol_t_727723186");
    Instrmt_69.add_attribute("Sfx", "CD"); // 1
    Instrmt_69_set.insert("CD");
    Instrmt_69.add_attribute("ID", "SecurityID_t_612168147"); // 1
    Instrmt_69_set.insert("SecurityID_t_612168147");
    Instrmt_69.add_attribute("Src", "9"); // 1
    Instrmt_69_set.insert("9");
    Instrmt_69.add_attribute("Prod", "3"); // 1
    Instrmt_69_set.insert("3");
    Instrmt_69.add_attribute("ProdCmplx", "ProductComplex_t_346066055"); // 1
    Instrmt_69_set.insert("ProductComplex_t_346066055");
    Instrmt_69.add_attribute("SecGrp", "SecurityGroup_t_1512562331"); // 1
    Instrmt_69_set.insert("SecurityGroup_t_1512562331");
    Instrmt_69.add_attribute("CFI", "CFICode_t_1388254222"); // 1
    Instrmt_69_set.insert("CFICode_t_1388254222");
    Instrmt_69.add_attribute("SecTyp", "AN"); // 1
    Instrmt_69_set.insert("AN");
    Instrmt_69.add_attribute("SubTyp", "SecuritySubType_t_1023679552"); // 1
    Instrmt_69_set.insert("SecuritySubType_t_1023679552");
    Instrmt_69.add_attribute("MMY", "1844823710"); // 1
    Instrmt_69_set.insert("1844823710");
    Instrmt_69.add_attribute("MatDt", "MaturityDate_t_696139706"); // 1
    Instrmt_69_set.insert("MaturityDate_t_696139706");
    Instrmt_69.add_attribute("MatTm", "694592833"); // 1
    Instrmt_69_set.insert("694592833");
    Instrmt_69.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1833946190"); // 1
    Instrmt_69_set.insert("SettleOnOpenFlag_t_1833946190");
    Instrmt_69.add_attribute("AsgnMeth", "1594738218"); // 1
    Instrmt_69_set.insert("1594738218");
    Instrmt_69.add_attribute("Status", "1"); // 1
    Instrmt_69_set.insert("1");
    Instrmt_69.add_attribute("CpnPmt", "CouponPaymentDate_t_1145224825"); // 1
    Instrmt_69_set.insert("CouponPaymentDate_t_1145224825");
    Instrmt_69.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_69_set.insert("MM");
    Instrmt_69.add_attribute("Snrty", "SD"); // 1
    Instrmt_69_set.insert("SD");
    Instrmt_69.add_attribute("NotlPctOut", "18873697.190000"); // 1
    Instrmt_69_set.insert("18873697.190000");
    Instrmt_69.add_attribute("OrigNotlPctOut", "21171526.270000"); // 1
    Instrmt_69_set.insert("21171526.270000");
    Instrmt_69.add_attribute("AttchPnt", "17405821.490000"); // 1
    Instrmt_69_set.insert("17405821.490000");
    Instrmt_69.add_attribute("DetchPnt", "7997658.590000"); // 1
    Instrmt_69_set.insert("7997658.590000");
    Instrmt_69.add_attribute("Issued", "IssueDate_t_1063692519"); // 1
    Instrmt_69_set.insert("IssueDate_t_1063692519");
    Instrmt_69.add_attribute("RepoCollSecTyp", "704512531"); // 1
    Instrmt_69_set.insert("704512531");
    Instrmt_69.add_attribute("RepoTrm", "332156117"); // 1
    Instrmt_69_set.insert("332156117");
    Instrmt_69.add_attribute("RepoRt", "8869317.990000"); // 1
    Instrmt_69_set.insert("8869317.990000");
    Instrmt_69.add_attribute("Fctr", "17249669.210000"); // 1
    Instrmt_69_set.insert("17249669.210000");
    Instrmt_69.add_attribute("CrdRtg", "CreditRating_t_1515417620"); // 1
    Instrmt_69_set.insert("CreditRating_t_1515417620");
    Instrmt_69.add_attribute("Rgstry", "InstrRegistry_t_570897861"); // 1
    Instrmt_69_set.insert("InstrRegistry_t_570897861");
    Instrmt_69.add_attribute("IssuCtry", "184180916"); // 1
    Instrmt_69_set.insert("184180916");
    Instrmt_69.add_attribute("StPrv", "StateOrProvinceOfIssue_t_95657158"); // 1
    Instrmt_69_set.insert("StateOrProvinceOfIssue_t_95657158");
    Instrmt_69.add_attribute("Lcl", "LocaleOfIssue_t_1753360438"); // 1
    Instrmt_69_set.insert("LocaleOfIssue_t_1753360438");
    Instrmt_69.add_attribute("Redeem", "RedemptionDate_t_796349063"); // 1
    Instrmt_69_set.insert("RedemptionDate_t_796349063");
    Instrmt_69.add_attribute("StrkPx", "18021776.530000"); // 1
    Instrmt_69_set.insert("18021776.530000");
    Instrmt_69.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_69_set.insert("JPY");
    Instrmt_69.add_attribute("StrkMult", "11672563.360000"); // 1
    Instrmt_69_set.insert("11672563.360000");
    Instrmt_69.add_attribute("StrkValu", "8640219.240000"); // 1
    Instrmt_69_set.insert("8640219.240000");
    Instrmt_69.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_69_set.insert("3");
    Instrmt_69.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_69_set.insert("2");
    Instrmt_69.add_attribute("StrkPxBndryPrcsn", "5613619.870000"); // 1
    Instrmt_69_set.insert("5613619.870000");
    Instrmt_69.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_69_set.insert("1");
    Instrmt_69.add_attribute("OptAt", "738045074"); // 1
    Instrmt_69_set.insert("738045074");
    Instrmt_69.add_attribute("Mult", "2478245.290000"); // 1
    Instrmt_69_set.insert("2478245.290000");
    Instrmt_69.add_attribute("MultTyp", "0"); // 1
    Instrmt_69_set.insert("0");
    Instrmt_69.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_69_set.insert("2");
    Instrmt_69.add_attribute("MinPxIncr", "13930493.550000"); // 1
    Instrmt_69_set.insert("13930493.550000");
    Instrmt_69.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_298068396"); // 1
    Instrmt_69_set.insert("MinPriceIncrementAmount_t_298068396");
    Instrmt_69.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_69_set.insert("MMbbl");
    Instrmt_69.add_attribute("UOMQty", "11329354.260000"); // 1
    Instrmt_69_set.insert("11329354.260000");
    Instrmt_69.add_attribute("PxUOM", "Bcf"); // 1
    Instrmt_69_set.insert("Bcf");
    Instrmt_69.add_attribute("PxUOMQty", "5783314.440000"); // 1
    Instrmt_69_set.insert("5783314.440000");
    Instrmt_69.add_attribute("SettlMeth", "P"); // 1
    Instrmt_69_set.insert("P");
    Instrmt_69.add_attribute("ExerStyle", "0"); // 1
    Instrmt_69_set.insert("0");
    Instrmt_69.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_69_set.insert("2");
    Instrmt_69.add_attribute("OptPayAmt", "OptPayoutAmount_t_117373755"); // 1
    Instrmt_69_set.insert("OptPayoutAmount_t_117373755");
    Instrmt_69.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_69_set.insert("INT");
    Instrmt_69.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_69_set.insert("CDSD");
    Instrmt_69.add_attribute("ListMeth", "1"); // 1
    Instrmt_69_set.insert("1");
    Instrmt_69.add_attribute("CapPx", "6417759.070000"); // 1
    Instrmt_69_set.insert("6417759.070000");
    Instrmt_69.add_attribute("FlrPx", "10445081.650000"); // 1
    Instrmt_69_set.insert("10445081.650000");
    Instrmt_69.add_attribute("PutCall", "0"); // 1
    Instrmt_69_set.insert("0");
    Instrmt_69.add_attribute("FlexInd", "false"); // 1
    Instrmt_69_set.insert("false");
    Instrmt_69.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_69_set.insert("true");
    Instrmt_69.add_attribute("TmUnit", "H"); // 1
    Instrmt_69_set.insert("H");
    Instrmt_69.add_attribute("CpnRt", "18709040.470000"); // 1
    Instrmt_69_set.insert("18709040.470000");
    Instrmt_69.add_attribute("Exch", "SecurityExchange_t_835788698"); // 1
    Instrmt_69_set.insert("SecurityExchange_t_835788698");
    Instrmt_69.add_attribute("PosLmt", "402915227"); // 1
    Instrmt_69_set.insert("402915227");
    Instrmt_69.add_attribute("NTPosLmt", "587442324"); // 1
    Instrmt_69_set.insert("587442324");
    Instrmt_69.add_attribute("Issr", "Issuer_t_1033788344"); // 1
    Instrmt_69_set.insert("Issuer_t_1033788344");
    Instrmt_69.add_attribute("EncIssrLen", "446367468"); // 1
    Instrmt_69_set.insert("446367468");
    Instrmt_69.add_attribute("EncIssr", "EncodedIssuer_t_1148804311"); // 1
    Instrmt_69_set.insert("EncodedIssuer_t_1148804311");
    Instrmt_69.add_attribute("Desc", "SecurityDesc_t_1927927696"); // 1
    Instrmt_69_set.insert("SecurityDesc_t_1927927696");
    Instrmt_69.add_attribute("EncSecDescLen", "1184412542"); // 1
    Instrmt_69_set.insert("1184412542");
    Instrmt_69.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1396628840"); // 1
    Instrmt_69_set.insert("EncodedSecurityDesc_t_1396628840");
    Instrmt_69.add_attribute("Pool", "Pool_t_121837970"); // 1
    Instrmt_69_set.insert("Pool_t_121837970");
    Instrmt_69.add_attribute("CSetMo", "1740158915"); // 1
    Instrmt_69_set.insert("1740158915");
    Instrmt_69.add_attribute("CPPgm", "1"); // 1
    Instrmt_69_set.insert("1");
    Instrmt_69.add_attribute("CPRegT", "CPRegType_t_419906366"); // 1
    Instrmt_69_set.insert("CPRegType_t_419906366");
    Instrmt_69.add_attribute("Dated", "DatedDate_t_577908210"); // 1
    Instrmt_69_set.insert("DatedDate_t_577908210");
    Instrmt_69.add_attribute("IntAcrl", "InterestAccrualDate_t_1775129974"); // 1
    Instrmt_69_set.insert("InterestAccrualDate_t_1775129974");
    all_values.push_back(Instrmt_69_set);
    all_compo_names.insert("Instrmt_69_set");

    {
      xml_element AID_72{"AID"};
      multiset<string> AID_72_set;
      AID_72.add_attribute("AltID", "SecurityAltID_t_687643742"); // 2
      AID_72_set.insert("SecurityAltID_t_687643742");
      AID_72.add_attribute("AltIDSrc", "K"); // 2
      AID_72_set.insert("K");
      all_values.push_back(AID_72_set);
      all_compo_names.insert("AID_72_set");

      Instrmt_69.add_element(AID_72);
    }
    {
      xml_element SecXML_72{"SecXML"};
      multiset<string> SecXML_72_set;
      SecXML_72.add_attribute("Schema", "SecurityXMLSchema_t_1560347611"); // 2
      SecXML_72_set.insert("SecurityXMLSchema_t_1560347611");
      all_values.push_back(SecXML_72_set);
      all_compo_names.insert("SecXML_72_set");

      Instrmt_69.add_element(SecXML_72);
    }
    {
      xml_element Evnt_72{"Evnt"};
      multiset<string> Evnt_72_set;
      Evnt_72.add_attribute("EventTyp", "17"); // 2
      Evnt_72_set.insert("17");
      Evnt_72.add_attribute("Dt", "EventDate_t_291599982"); // 2
      Evnt_72_set.insert("EventDate_t_291599982");
      Evnt_72.add_attribute("Tm", "EventTime_t_1677721366"); // 2
      Evnt_72_set.insert("EventTime_t_1677721366");
      Evnt_72.add_attribute("Px", "20899516.830000"); // 2
      Evnt_72_set.insert("20899516.830000");
      Evnt_72.add_attribute("Txt", "EventText_t_1151927231"); // 2
      Evnt_72_set.insert("EventText_t_1151927231");
      all_values.push_back(Evnt_72_set);
      all_compo_names.insert("Evnt_72_set");

      Instrmt_69.add_element(Evnt_72);
    }
    {
      xml_element Pty_371{"Pty"};
      multiset<string> Pty_371_set;
      Pty_371.add_attribute("ID", "InstrumentPartyID_t_1163029094"); // 2
      Pty_371_set.insert("InstrumentPartyID_t_1163029094");
      Pty_371.add_attribute("Src", "G"); // 2
      Pty_371_set.insert("G");
      Pty_371.add_attribute("R", "78"); // 2
      Pty_371_set.insert("78");
      all_values.push_back(Pty_371_set);
      all_compo_names.insert("Pty_371_set");

      {
        xml_element Sub_371{"Sub"};
        multiset<string> Sub_371_set;
        Sub_371.add_attribute("ID", "InstrumentPartySubID_t_743993980"); // 3
        Sub_371_set.insert("InstrumentPartySubID_t_743993980");
        Sub_371.add_attribute("Typ", "12"); // 3
        Sub_371_set.insert("12");
        all_values.push_back(Sub_371_set);
        all_compo_names.insert("Sub_371_set");

        Pty_371.add_element(Sub_371);
      }
      Instrmt_69.add_element(Pty_371);
    }
    {
      xml_element CmplxEvnt_69{"CmplxEvnt"};
      multiset<string> CmplxEvnt_69_set;
      CmplxEvnt_69.add_attribute("Typ", "2"); // 2
      CmplxEvnt_69_set.insert("2");
      CmplxEvnt_69.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2127136519"); // 2
      CmplxEvnt_69_set.insert("ComplexOptPayoutAmount_t_2127136519");
      CmplxEvnt_69.add_attribute("Px", "5553170.400000"); // 2
      CmplxEvnt_69_set.insert("5553170.400000");
      CmplxEvnt_69.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_69_set.insert("2");
      CmplxEvnt_69.add_attribute("PxBndryPrcsn", "3825680.980000"); // 2
      CmplxEvnt_69_set.insert("3825680.980000");
      CmplxEvnt_69.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_69_set.insert("1");
      CmplxEvnt_69.add_attribute("Cond", "1"); // 2
      CmplxEvnt_69_set.insert("1");
      all_values.push_back(CmplxEvnt_69_set);
      all_compo_names.insert("CmplxEvnt_69_set");

      {
        xml_element EvntDts_69{"EvntDts"};
        multiset<string> EvntDts_69_set;
        EvntDts_69.add_attribute("StartDt", "ComplexEventStartDate_t_828935567"); // 3
        EvntDts_69_set.insert("ComplexEventStartDate_t_828935567");
        EvntDts_69.add_attribute("EndDt", "ComplexEventEndDate_t_144080027"); // 3
        EvntDts_69_set.insert("ComplexEventEndDate_t_144080027");
        all_values.push_back(EvntDts_69_set);
        all_compo_names.insert("EvntDts_69_set");

        {
          xml_element EvntTms_69{"EvntTms"};
          multiset<string> EvntTms_69_set;
          EvntTms_69.add_attribute("StartTm", "1392346418"); // 4
          EvntTms_69_set.insert("1392346418");
          EvntTms_69.add_attribute("EndTm", "2013348109"); // 4
          EvntTms_69_set.insert("2013348109");
          all_values.push_back(EvntTms_69_set);
          all_compo_names.insert("EvntTms_69_set");

          EvntDts_69.add_element(EvntTms_69);
        }
        CmplxEvnt_69.add_element(EvntDts_69);
      }
      Instrmt_69.add_element(CmplxEvnt_69);
    }
    elt.add_element(Instrmt_69);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_8{"InstrmtExt"};
    multiset<string> InstrmtExt_8_set;
    InstrmtExt_8.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_8_set.insert("2");
    InstrmtExt_8.add_attribute("PctAtRisk", "15141843.880000"); // 1
    InstrmtExt_8_set.insert("15141843.880000");
    all_values.push_back(InstrmtExt_8_set);
    all_compo_names.insert("InstrmtExt_8_set");

    {
      xml_element Attrb_15{"Attrb"};
      multiset<string> Attrb_15_set;
      Attrb_15.add_attribute("Typ", "4"); // 2
      Attrb_15_set.insert("4");
      Attrb_15.add_attribute("Val", "InstrAttribValue_t_35419767"); // 2
      Attrb_15_set.insert("InstrAttribValue_t_35419767");
      all_values.push_back(Attrb_15_set);
      all_compo_names.insert("Attrb_15_set");

      InstrmtExt_8.add_element(Attrb_15);
    }
    elt.add_element(InstrmtExt_8);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_99{"Undly"};
    multiset<string> Undly_99_set;
    Undly_99.add_attribute("Sym", "UnderlyingSymbol_t_36447938"); // 1
    Undly_99_set.insert("UnderlyingSymbol_t_36447938");
    Undly_99.add_attribute("Sfx", "WI"); // 1
    Undly_99_set.insert("WI");
    Undly_99.add_attribute("ID", "UnderlyingSecurityID_t_474250849"); // 1
    Undly_99_set.insert("UnderlyingSecurityID_t_474250849");
    Undly_99.add_attribute("Src", "A"); // 1
    Undly_99_set.insert("A");
    Undly_99.add_attribute("Prod", "3"); // 1
    Undly_99_set.insert("3");
    Undly_99.add_attribute("CFI", "UnderlyingCFICode_t_345840838"); // 1
    Undly_99_set.insert("UnderlyingCFICode_t_345840838");
    Undly_99.add_attribute("SecTyp", "FOR"); // 1
    Undly_99_set.insert("FOR");
    Undly_99.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_753651423"); // 1
    Undly_99_set.insert("UnderlyingSecuritySubType_t_753651423");
    Undly_99.add_attribute("MMY", "288308874"); // 1
    Undly_99_set.insert("288308874");
    Undly_99.add_attribute("Mat", "UnderlyingMaturityDate_t_488731158"); // 1
    Undly_99_set.insert("UnderlyingMaturityDate_t_488731158");
    Undly_99.add_attribute("MatTm", "1916680517"); // 1
    Undly_99_set.insert("1916680517");
    Undly_99.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_872552817"); // 1
    Undly_99_set.insert("UnderlyingCouponPaymentDate_t_872552817");
    Undly_99.add_attribute("RestrctTyp", "MM"); // 1
    Undly_99_set.insert("MM");
    Undly_99.add_attribute("Snrty", "SR"); // 1
    Undly_99_set.insert("SR");
    Undly_99.add_attribute("NotlPctOut", "17044494.570000"); // 1
    Undly_99_set.insert("17044494.570000");
    Undly_99.add_attribute("OrigNotlPctOut", "2800082.340000"); // 1
    Undly_99_set.insert("2800082.340000");
    Undly_99.add_attribute("AttchPnt", "4928437.200000"); // 1
    Undly_99_set.insert("4928437.200000");
    Undly_99.add_attribute("DetchPnt", "1122828.490000"); // 1
    Undly_99_set.insert("1122828.490000");
    Undly_99.add_attribute("Issued", "UnderlyingIssueDate_t_858122260"); // 1
    Undly_99_set.insert("UnderlyingIssueDate_t_858122260");
    Undly_99.add_attribute("RepoCollSecTyp", "875411818"); // 1
    Undly_99_set.insert("875411818");
    Undly_99.add_attribute("RepoTrm", "1255042213"); // 1
    Undly_99_set.insert("1255042213");
    Undly_99.add_attribute("RepoRt", "3225409.820000"); // 1
    Undly_99_set.insert("3225409.820000");
    Undly_99.add_attribute("Fctr", "17043473.850000"); // 1
    Undly_99_set.insert("17043473.850000");
    Undly_99.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1399122240"); // 1
    Undly_99_set.insert("UnderlyingCreditRating_t_1399122240");
    Undly_99.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1714887400"); // 1
    Undly_99_set.insert("UnderlyingInstrRegistry_t_1714887400");
    Undly_99.add_attribute("Ctry", "1570211847"); // 1
    Undly_99_set.insert("1570211847");
    Undly_99.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_792347460"); // 1
    Undly_99_set.insert("UnderlyingStateOrProvinceOfIssue_t_792347460");
    Undly_99.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1081588140"); // 1
    Undly_99_set.insert("UnderlyingLocaleOfIssue_t_1081588140");
    Undly_99.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1028751575"); // 1
    Undly_99_set.insert("UnderlyingRedemptionDate_t_1028751575");
    Undly_99.add_attribute("StrkPx", "8277672.270000"); // 1
    Undly_99_set.insert("8277672.270000");
    Undly_99.add_attribute("StrkCcy", "GBP"); // 1
    Undly_99_set.insert("GBP");
    Undly_99.add_attribute("OptA", "490833320"); // 1
    Undly_99_set.insert("490833320");
    Undly_99.add_attribute("Mult", "13424460.950000"); // 1
    Undly_99_set.insert("13424460.950000");
    Undly_99.add_attribute("MultTyp", "0"); // 1
    Undly_99_set.insert("0");
    Undly_99.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_99_set.insert("4");
    Undly_99.add_attribute("UOM", "USD"); // 1
    Undly_99_set.insert("USD");
    Undly_99.add_attribute("UOMQty", "15946910.340000"); // 1
    Undly_99_set.insert("15946910.340000");
    Undly_99.add_attribute("PxUOM", "Gal"); // 1
    Undly_99_set.insert("Gal");
    Undly_99.add_attribute("PxUOMQty", "19765958.080000"); // 1
    Undly_99_set.insert("19765958.080000");
    Undly_99.add_attribute("TmUnit", "Mo"); // 1
    Undly_99_set.insert("Mo");
    Undly_99.add_attribute("ExerStyle", "0"); // 1
    Undly_99_set.insert("0");
    Undly_99.add_attribute("CpnRt", "7016649.770000"); // 1
    Undly_99_set.insert("7016649.770000");
    Undly_99.add_attribute("Exch", "UnderlyingSecurityExchange_t_473621450"); // 1
    Undly_99_set.insert("UnderlyingSecurityExchange_t_473621450");
    Undly_99.add_attribute("Issr", "UnderlyingIssuer_t_602802517"); // 1
    Undly_99_set.insert("UnderlyingIssuer_t_602802517");
    Undly_99.add_attribute("EncUndIssrLen", "258630786"); // 1
    Undly_99_set.insert("258630786");
    Undly_99.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_753629684"); // 1
    Undly_99_set.insert("EncodedUnderlyingIssuer_t_753629684");
    Undly_99.add_attribute("Desc", "UnderlyingSecurityDesc_t_1095646237"); // 1
    Undly_99_set.insert("UnderlyingSecurityDesc_t_1095646237");
    Undly_99.add_attribute("EncUndSecDescLen", "370913636"); // 1
    Undly_99_set.insert("370913636");
    Undly_99.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1611751944"); // 1
    Undly_99_set.insert("EncodedUnderlyingSecurityDesc_t_1611751944");
    Undly_99.add_attribute("CPPgm", "UnderlyingCPProgram_t_1971058056"); // 1
    Undly_99_set.insert("UnderlyingCPProgram_t_1971058056");
    Undly_99.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1625955849"); // 1
    Undly_99_set.insert("UnderlyingCPRegType_t_1625955849");
    Undly_99.add_attribute("AllocPct", "19342929.260000"); // 1
    Undly_99_set.insert("19342929.260000");
    Undly_99.add_attribute("Ccy", "GBP"); // 1
    Undly_99_set.insert("GBP");
    Undly_99.add_attribute("Qty", "15016966.780000"); // 1
    Undly_99_set.insert("15016966.780000");
    Undly_99.add_attribute("SettlTyp", "5"); // 1
    Undly_99_set.insert("5");
    Undly_99.add_attribute("CashAmt", "UnderlyingCashAmount_t_1669941902"); // 1
    Undly_99_set.insert("UnderlyingCashAmount_t_1669941902");
    Undly_99.add_attribute("CashTyp", "FIXED"); // 1
    Undly_99_set.insert("FIXED");
    Undly_99.add_attribute("Px", "19794015.680000"); // 1
    Undly_99_set.insert("19794015.680000");
    Undly_99.add_attribute("DirtPx", "3502254.810000"); // 1
    Undly_99_set.insert("3502254.810000");
    Undly_99.add_attribute("EndPx", "13039964.160000"); // 1
    Undly_99_set.insert("13039964.160000");
    Undly_99.add_attribute("StartVal", "UnderlyingStartValue_t_897117434"); // 1
    Undly_99_set.insert("UnderlyingStartValue_t_897117434");
    Undly_99.add_attribute("CurVal", "UnderlyingCurrentValue_t_841058801"); // 1
    Undly_99_set.insert("UnderlyingCurrentValue_t_841058801");
    Undly_99.add_attribute("EndVal", "UnderlyingEndValue_t_498958864"); // 1
    Undly_99_set.insert("UnderlyingEndValue_t_498958864");
    Undly_99.add_attribute("AdjQty", "10075208.930000"); // 1
    Undly_99_set.insert("10075208.930000");
    Undly_99.add_attribute("FxRate", "4078221.770000"); // 1
    Undly_99_set.insert("4078221.770000");
    Undly_99.add_attribute("FxRateCalc", "M"); // 1
    Undly_99_set.insert("M");
    Undly_99.add_attribute("CapValu", "UnderlyingCapValue_t_454728279"); // 1
    Undly_99_set.insert("UnderlyingCapValue_t_454728279");
    Undly_99.add_attribute("SetMeth", "UnderlyingSettlMethod_t_728236977"); // 1
    Undly_99_set.insert("UnderlyingSettlMethod_t_728236977");
    Undly_99.add_attribute("PutCall", "2016357958"); // 1
    Undly_99_set.insert("2016357958");
    all_values.push_back(Undly_99_set);
    all_compo_names.insert("Undly_99_set");

    {
      xml_element UndAID_99{"UndAID"};
      multiset<string> UndAID_99_set;
      UndAID_99.add_attribute("AltID", "UnderlyingSecurityAltID_t_390666823"); // 2
      UndAID_99_set.insert("UnderlyingSecurityAltID_t_390666823");
      UndAID_99.add_attribute("AltIDSrc", "A"); // 2
      UndAID_99_set.insert("A");
      all_values.push_back(UndAID_99_set);
      all_compo_names.insert("UndAID_99_set");

      Undly_99.add_element(UndAID_99);
    }
    {
      xml_element Stip_156{"Stip"};
      multiset<string> Stip_156_set;
      Stip_156.add_attribute("Typ", "CPR"); // 2
      Stip_156_set.insert("CPR");
      Stip_156.add_attribute("Val", "UnderlyingStipValue_t_864288273"); // 2
      Stip_156_set.insert("UnderlyingStipValue_t_864288273");
      all_values.push_back(Stip_156_set);
      all_compo_names.insert("Stip_156_set");

      Undly_99.add_element(Stip_156);
    }
    {
      xml_element Pty_372{"Pty"};
      multiset<string> Pty_372_set;
      Pty_372.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1420651163"); // 2
      Pty_372_set.insert("UnderlyingInstrumentPartyID_t_1420651163");
      Pty_372.add_attribute("Src", "2"); // 2
      Pty_372_set.insert("2");
      Pty_372.add_attribute("R", "14"); // 2
      Pty_372_set.insert("14");
      all_values.push_back(Pty_372_set);
      all_compo_names.insert("Pty_372_set");

      {
        xml_element Sub_372{"Sub"};
        multiset<string> Sub_372_set;
        Sub_372.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_368813752"); // 3
        Sub_372_set.insert("UnderlyingInstrumentPartySubID_t_368813752");
        Sub_372.add_attribute("Typ", "1"); // 3
        Sub_372_set.insert("1");
        all_values.push_back(Sub_372_set);
        all_compo_names.insert("Sub_372_set");

        Pty_372.add_element(Sub_372);
      }
      Undly_99.add_element(Pty_372);
    }
    elt.add_element(Undly_99);
  } // end Undly
  { // Stip
    xml_element Stip_157{"Stip"};
    multiset<string> Stip_157_set;
    Stip_157.add_attribute("Typ", "ABS"); // 1
    Stip_157_set.insert("ABS");
    Stip_157.add_attribute("Val", "StipulationValue_t_678555911"); // 1
    Stip_157_set.insert("StipulationValue_t_678555911");
    all_values.push_back(Stip_157_set);
    all_compo_names.insert("Stip_157_set");

    elt.add_element(Stip_157);
  } // end Stip
  { // Leg
    xml_element Leg_86{"Leg"};
    multiset<string> Leg_86_set;
    Leg_86.add_attribute("Sym", "LegSymbol_t_1720309954"); // 1
    Leg_86_set.insert("LegSymbol_t_1720309954");
    Leg_86.add_attribute("Sfx", "WI"); // 1
    Leg_86_set.insert("WI");
    Leg_86.add_attribute("ID", "LegSecurityID_t_223208561"); // 1
    Leg_86_set.insert("LegSecurityID_t_223208561");
    Leg_86.add_attribute("Src", "5"); // 1
    Leg_86_set.insert("5");
    Leg_86.add_attribute("Prod", "8"); // 1
    Leg_86_set.insert("8");
    Leg_86.add_attribute("CFI", "LegCFICode_t_659009731"); // 1
    Leg_86_set.insert("LegCFICode_t_659009731");
    Leg_86.add_attribute("SecTyp", "NONE"); // 1
    Leg_86_set.insert("NONE");
    Leg_86.add_attribute("SecSubTyp", "LegSecuritySubType_t_1428834088"); // 1
    Leg_86_set.insert("LegSecuritySubType_t_1428834088");
    Leg_86.add_attribute("MMY", "1963006147"); // 1
    Leg_86_set.insert("1963006147");
    Leg_86.add_attribute("Mat", "LegMaturityDate_t_1252511652"); // 1
    Leg_86_set.insert("LegMaturityDate_t_1252511652");
    Leg_86.add_attribute("MatTm", "122409241"); // 1
    Leg_86_set.insert("122409241");
    Leg_86.add_attribute("CpnPmt", "LegCouponPaymentDate_t_314481363"); // 1
    Leg_86_set.insert("LegCouponPaymentDate_t_314481363");
    Leg_86.add_attribute("Issued", "LegIssueDate_t_112548897"); // 1
    Leg_86_set.insert("LegIssueDate_t_112548897");
    Leg_86.add_attribute("RepoCollSecTyp", "530231418"); // 1
    Leg_86_set.insert("530231418");
    Leg_86.add_attribute("RepoTrm", "354243513"); // 1
    Leg_86_set.insert("354243513");
    Leg_86.add_attribute("RepoRt", "5672771.760000"); // 1
    Leg_86_set.insert("5672771.760000");
    Leg_86.add_attribute("Fctr", "12584683.950000"); // 1
    Leg_86_set.insert("12584683.950000");
    Leg_86.add_attribute("CrdRtg", "LegCreditRating_t_223117823"); // 1
    Leg_86_set.insert("LegCreditRating_t_223117823");
    Leg_86.add_attribute("Rgstry", "LegInstrRegistry_t_957943999"); // 1
    Leg_86_set.insert("LegInstrRegistry_t_957943999");
    Leg_86.add_attribute("Ctry", "2076317041"); // 1
    Leg_86_set.insert("2076317041");
    Leg_86.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_793657110"); // 1
    Leg_86_set.insert("LegStateOrProvinceOfIssue_t_793657110");
    Leg_86.add_attribute("Lcl", "LegLocaleOfIssue_t_1822232272"); // 1
    Leg_86_set.insert("LegLocaleOfIssue_t_1822232272");
    Leg_86.add_attribute("Redeem", "LegRedemptionDate_t_1349484556"); // 1
    Leg_86_set.insert("LegRedemptionDate_t_1349484556");
    Leg_86.add_attribute("Strk", "16228271.840000"); // 1
    Leg_86_set.insert("16228271.840000");
    Leg_86.add_attribute("StrkCcy", "GBP"); // 1
    Leg_86_set.insert("GBP");
    Leg_86.add_attribute("OptA", "675427245"); // 1
    Leg_86_set.insert("675427245");
    Leg_86.add_attribute("Cmult", "2273691.860000"); // 1
    Leg_86_set.insert("2273691.860000");
    Leg_86.add_attribute("MultTyp", "2"); // 1
    Leg_86_set.insert("2");
    Leg_86.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_86_set.insert("1");
    Leg_86.add_attribute("UOM", "MMbbl"); // 1
    Leg_86_set.insert("MMbbl");
    Leg_86.add_attribute("UOMQty", "14835127.750000"); // 1
    Leg_86_set.insert("14835127.750000");
    Leg_86.add_attribute("PxUOM", "Alw"); // 1
    Leg_86_set.insert("Alw");
    Leg_86.add_attribute("PxUOMQty", "13195732.780000"); // 1
    Leg_86_set.insert("13195732.780000");
    Leg_86.add_attribute("TmUnit", "Mo"); // 1
    Leg_86_set.insert("Mo");
    Leg_86.add_attribute("ExerStyle", "2"); // 1
    Leg_86_set.insert("2");
    Leg_86.add_attribute("CpnRt", "19785830.090000"); // 1
    Leg_86_set.insert("19785830.090000");
    Leg_86.add_attribute("Exch", "LegSecurityExchange_t_214899644"); // 1
    Leg_86_set.insert("LegSecurityExchange_t_214899644");
    Leg_86.add_attribute("Issr", "LegIssuer_t_1122608908"); // 1
    Leg_86_set.insert("LegIssuer_t_1122608908");
    Leg_86.add_attribute("EncLegIssrLen", "1794105509"); // 1
    Leg_86_set.insert("1794105509");
    Leg_86.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1467411296"); // 1
    Leg_86_set.insert("EncodedLegIssuer_t_1467411296");
    Leg_86.add_attribute("Desc", "LegSecurityDesc_t_1245018149"); // 1
    Leg_86_set.insert("LegSecurityDesc_t_1245018149");
    Leg_86.add_attribute("EncLegSecDescLen", "2108586872"); // 1
    Leg_86_set.insert("2108586872");
    Leg_86.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1579960194"); // 1
    Leg_86_set.insert("EncodedLegSecurityDesc_t_1579960194");
    Leg_86.add_attribute("RatioQty", "17752495.680000"); // 1
    Leg_86_set.insert("17752495.680000");
    Leg_86.add_attribute("Side", "3"); // 1
    Leg_86_set.insert("3");
    Leg_86.add_attribute("Ccy", "EUR"); // 1
    Leg_86_set.insert("EUR");
    Leg_86.add_attribute("Pool", "LegPool_t_538464561"); // 1
    Leg_86_set.insert("LegPool_t_538464561");
    Leg_86.add_attribute("Dated", "LegDatedDate_t_957697722"); // 1
    Leg_86_set.insert("LegDatedDate_t_957697722");
    Leg_86.add_attribute("CSetMo", "815067708"); // 1
    Leg_86_set.insert("815067708");
    Leg_86.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1332121672"); // 1
    Leg_86_set.insert("LegInterestAccrualDate_t_1332121672");
    Leg_86.add_attribute("PutCall", "632446346"); // 1
    Leg_86_set.insert("632446346");
    Leg_86.add_attribute("LegOptionRatio", "170686.160000"); // 1
    Leg_86_set.insert("170686.160000");
    Leg_86.add_attribute("Px", "8074652.080000"); // 1
    Leg_86_set.insert("8074652.080000");
    all_values.push_back(Leg_86_set);
    all_compo_names.insert("Leg_86_set");

    {
      xml_element LegAID_83{"LegAID"};
      multiset<string> LegAID_83_set;
      LegAID_83.add_attribute("SecAltID", "LegSecurityAltID_t_1925112928"); // 2
      LegAID_83_set.insert("LegSecurityAltID_t_1925112928");
      LegAID_83.add_attribute("SecAltIDSrc", "I"); // 2
      LegAID_83_set.insert("I");
      all_values.push_back(LegAID_83_set);
      all_compo_names.insert("LegAID_83_set");

      Leg_86.add_element(LegAID_83);
    }
    elt.add_element(Leg_86);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_26{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_26_set;
    SprdBnchmkCurve_26.add_attribute("Spread", "14828924.530000"); // 1
    SprdBnchmkCurve_26_set.insert("14828924.530000");
    SprdBnchmkCurve_26.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_26_set.insert("GBP");
    SprdBnchmkCurve_26.add_attribute("Name", "Euribor"); // 1
    SprdBnchmkCurve_26_set.insert("Euribor");
    SprdBnchmkCurve_26.add_attribute("Point", "BenchmarkCurvePoint_t_1101363184"); // 1
    SprdBnchmkCurve_26_set.insert("BenchmarkCurvePoint_t_1101363184");
    SprdBnchmkCurve_26.add_attribute("Px", "8345988.730000"); // 1
    SprdBnchmkCurve_26_set.insert("8345988.730000");
    SprdBnchmkCurve_26.add_attribute("PxTyp", "2"); // 1
    SprdBnchmkCurve_26_set.insert("2");
    SprdBnchmkCurve_26.add_attribute("SecID", "BenchmarkSecurityID_t_273452814"); // 1
    SprdBnchmkCurve_26_set.insert("BenchmarkSecurityID_t_273452814");
    SprdBnchmkCurve_26.add_attribute("SecIDSrc", "9"); // 1
    SprdBnchmkCurve_26_set.insert("9");
    all_values.push_back(SprdBnchmkCurve_26_set);
    all_compo_names.insert("SprdBnchmkCurve_26_set");

    elt.add_element(SprdBnchmkCurve_26);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_21{"Yield"};
    multiset<string> Yield_21_set;
    Yield_21.add_attribute("Typ", "LONGAVGLIFE"); // 1
    Yield_21_set.insert("LONGAVGLIFE");
    Yield_21.add_attribute("Yld", "1045521.760000"); // 1
    Yield_21_set.insert("1045521.760000");
    Yield_21.add_attribute("CalcDt", "YieldCalcDate_t_909003942"); // 1
    Yield_21_set.insert("YieldCalcDate_t_909003942");
    Yield_21.add_attribute("RedDt", "YieldRedemptionDate_t_120941904"); // 1
    Yield_21_set.insert("YieldRedemptionDate_t_120941904");
    Yield_21.add_attribute("RedPx", "18986576.850000"); // 1
    Yield_21_set.insert("18986576.850000");
    Yield_21.add_attribute("RedPxTyp", "15"); // 1
    Yield_21_set.insert("15");
    all_values.push_back(Yield_21_set);
    all_compo_names.insert("Yield_21_set");

    elt.add_element(Yield_21);
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
