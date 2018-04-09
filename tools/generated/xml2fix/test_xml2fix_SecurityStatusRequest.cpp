#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatusRequest_message_t_0;
  elt.add_attribute("StatReqID", "SecurityStatusReqID_t_1785532555"); // 0
  SecurityStatusRequest_message_t_0.insert("SecurityStatusReqID_t_1785532555");
  elt.add_attribute("Ccy", "GBP"); // 0
  SecurityStatusRequest_message_t_0.insert("GBP");
  elt.add_attribute("SubReqTyp", "0"); // 0
  SecurityStatusRequest_message_t_0.insert("0");
  elt.add_attribute("MktID", "MarketID_t_198781372"); // 0
  SecurityStatusRequest_message_t_0.insert("MarketID_t_198781372");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_97602865"); // 0
  SecurityStatusRequest_message_t_0.insert("MarketSegmentID_t_97602865");
  elt.add_attribute("SesID", "6"); // 0
  SecurityStatusRequest_message_t_0.insert("6");
  elt.add_attribute("SesSub", "7"); // 0
  SecurityStatusRequest_message_t_0.insert("7");
  all_values.push_back(SecurityStatusRequest_message_t_0);
  all_compo_names.insert("SecurityStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_87{"Hdr"};
    multiset<string> Hdr_87_set;
    Hdr_87.add_attribute("SeqNum", "1799950883"); // 1
    Hdr_87_set.insert("1799950883");
    Hdr_87.add_attribute("SID", "SenderCompID_t_1337514487"); // 1
    Hdr_87_set.insert("SenderCompID_t_1337514487");
    Hdr_87.add_attribute("TID", "TargetCompID_t_586946953"); // 1
    Hdr_87_set.insert("TargetCompID_t_586946953");
    Hdr_87.add_attribute("OBID", "OnBehalfOfCompID_t_1745311010"); // 1
    Hdr_87_set.insert("OnBehalfOfCompID_t_1745311010");
    Hdr_87.add_attribute("D2ID", "DeliverToCompID_t_706650135"); // 1
    Hdr_87_set.insert("DeliverToCompID_t_706650135");
    Hdr_87.add_attribute("SSub", "SenderSubID_t_1085341069"); // 1
    Hdr_87_set.insert("SenderSubID_t_1085341069");
    Hdr_87.add_attribute("SLoc", "SenderLocationID_t_97786703"); // 1
    Hdr_87_set.insert("SenderLocationID_t_97786703");
    Hdr_87.add_attribute("TSub", "TargetSubID_t_1170660073"); // 1
    Hdr_87_set.insert("TargetSubID_t_1170660073");
    Hdr_87.add_attribute("TLoc", "TargetLocationID_t_1714929259"); // 1
    Hdr_87_set.insert("TargetLocationID_t_1714929259");
    Hdr_87.add_attribute("OBSub", "OnBehalfOfSubID_t_1608790455"); // 1
    Hdr_87_set.insert("OnBehalfOfSubID_t_1608790455");
    Hdr_87.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1160879180"); // 1
    Hdr_87_set.insert("OnBehalfOfLocationID_t_1160879180");
    Hdr_87.add_attribute("D2Sub", "DeliverToSubID_t_884189647"); // 1
    Hdr_87_set.insert("DeliverToSubID_t_884189647");
    Hdr_87.add_attribute("D2Loc", "DeliverToLocationID_t_624495711"); // 1
    Hdr_87_set.insert("DeliverToLocationID_t_624495711");
    Hdr_87.add_attribute("PosDup", "Y"); // 1
    Hdr_87_set.insert("Y");
    Hdr_87.add_attribute("PosRsnd", "Y"); // 1
    Hdr_87_set.insert("Y");
    Hdr_87.add_attribute("Snt", "SendingTime_t_254757790"); // 1
    Hdr_87_set.insert("SendingTime_t_254757790");
    Hdr_87.add_attribute("OrigSnt", "OrigSendingTime_t_104830161"); // 1
    Hdr_87_set.insert("OrigSendingTime_t_104830161");
    Hdr_87.add_attribute("MsgEncd", "MessageEncoding_t_1836941305"); // 1
    Hdr_87_set.insert("MessageEncoding_t_1836941305");
    all_values.push_back(Hdr_87_set);
    all_compo_names.insert("Hdr_87_set");

    {
      xml_element Hop_87{"Hop"};
      multiset<string> Hop_87_set;
      Hop_87.add_attribute("ID", "HopCompID_t_1053974683"); // 2
      Hop_87_set.insert("HopCompID_t_1053974683");
      Hop_87.add_attribute("Ref", "1375881343"); // 2
      Hop_87_set.insert("1375881343");
      Hop_87.add_attribute("Snt", "HopSendingTime_t_1132782429"); // 2
      Hop_87_set.insert("HopSendingTime_t_1132782429");
      all_values.push_back(Hop_87_set);
      all_compo_names.insert("Hop_87_set");

      Hdr_87.add_element(Hop_87);
    }
    elt.add_element(Hdr_87);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_77{"Instrmt"};
    multiset<string> Instrmt_77_set;
    Instrmt_77.add_attribute("Sym", "Symbol_t_2073896260"); // 1
    Instrmt_77_set.insert("Symbol_t_2073896260");
    Instrmt_77.add_attribute("Sfx", "WI"); // 1
    Instrmt_77_set.insert("WI");
    Instrmt_77.add_attribute("ID", "SecurityID_t_770831336"); // 1
    Instrmt_77_set.insert("SecurityID_t_770831336");
    Instrmt_77.add_attribute("Src", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("Prod", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("ProdCmplx", "ProductComplex_t_1874226507"); // 1
    Instrmt_77_set.insert("ProductComplex_t_1874226507");
    Instrmt_77.add_attribute("SecGrp", "SecurityGroup_t_301175071"); // 1
    Instrmt_77_set.insert("SecurityGroup_t_301175071");
    Instrmt_77.add_attribute("CFI", "CFICode_t_203296869"); // 1
    Instrmt_77_set.insert("CFICode_t_203296869");
    Instrmt_77.add_attribute("SecTyp", "CPP"); // 1
    Instrmt_77_set.insert("CPP");
    Instrmt_77.add_attribute("SubTyp", "SecuritySubType_t_20264207"); // 1
    Instrmt_77_set.insert("SecuritySubType_t_20264207");
    Instrmt_77.add_attribute("MMY", "2003247752"); // 1
    Instrmt_77_set.insert("2003247752");
    Instrmt_77.add_attribute("MatDt", "MaturityDate_t_403474536"); // 1
    Instrmt_77_set.insert("MaturityDate_t_403474536");
    Instrmt_77.add_attribute("MatTm", "607211161"); // 1
    Instrmt_77_set.insert("607211161");
    Instrmt_77.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1601075114"); // 1
    Instrmt_77_set.insert("SettleOnOpenFlag_t_1601075114");
    Instrmt_77.add_attribute("AsgnMeth", "1110124671"); // 1
    Instrmt_77_set.insert("1110124671");
    Instrmt_77.add_attribute("Status", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("CpnPmt", "CouponPaymentDate_t_1698861818"); // 1
    Instrmt_77_set.insert("CouponPaymentDate_t_1698861818");
    Instrmt_77.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_77_set.insert("MR");
    Instrmt_77.add_attribute("Snrty", "SR"); // 1
    Instrmt_77_set.insert("SR");
    Instrmt_77.add_attribute("NotlPctOut", "11601686.250000"); // 1
    Instrmt_77_set.insert("11601686.250000");
    Instrmt_77.add_attribute("OrigNotlPctOut", "12941802.770000"); // 1
    Instrmt_77_set.insert("12941802.770000");
    Instrmt_77.add_attribute("AttchPnt", "21441874.880000"); // 1
    Instrmt_77_set.insert("21441874.880000");
    Instrmt_77.add_attribute("DetchPnt", "17846643.370000"); // 1
    Instrmt_77_set.insert("17846643.370000");
    Instrmt_77.add_attribute("Issued", "IssueDate_t_397571230"); // 1
    Instrmt_77_set.insert("IssueDate_t_397571230");
    Instrmt_77.add_attribute("RepoCollSecTyp", "436118905"); // 1
    Instrmt_77_set.insert("436118905");
    Instrmt_77.add_attribute("RepoTrm", "2039422127"); // 1
    Instrmt_77_set.insert("2039422127");
    Instrmt_77.add_attribute("RepoRt", "5024013.910000"); // 1
    Instrmt_77_set.insert("5024013.910000");
    Instrmt_77.add_attribute("Fctr", "1255765.620000"); // 1
    Instrmt_77_set.insert("1255765.620000");
    Instrmt_77.add_attribute("CrdRtg", "CreditRating_t_945913163"); // 1
    Instrmt_77_set.insert("CreditRating_t_945913163");
    Instrmt_77.add_attribute("Rgstry", "InstrRegistry_t_1878282734"); // 1
    Instrmt_77_set.insert("InstrRegistry_t_1878282734");
    Instrmt_77.add_attribute("IssuCtry", "1258358992"); // 1
    Instrmt_77_set.insert("1258358992");
    Instrmt_77.add_attribute("StPrv", "StateOrProvinceOfIssue_t_872325775"); // 1
    Instrmt_77_set.insert("StateOrProvinceOfIssue_t_872325775");
    Instrmt_77.add_attribute("Lcl", "LocaleOfIssue_t_1936508330"); // 1
    Instrmt_77_set.insert("LocaleOfIssue_t_1936508330");
    Instrmt_77.add_attribute("Redeem", "RedemptionDate_t_2029190328"); // 1
    Instrmt_77_set.insert("RedemptionDate_t_2029190328");
    Instrmt_77.add_attribute("StrkPx", "9747194.740000"); // 1
    Instrmt_77_set.insert("9747194.740000");
    Instrmt_77.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_77_set.insert("EUR");
    Instrmt_77.add_attribute("StrkMult", "12758945.460000"); // 1
    Instrmt_77_set.insert("12758945.460000");
    Instrmt_77.add_attribute("StrkValu", "980155.550000"); // 1
    Instrmt_77_set.insert("980155.550000");
    Instrmt_77.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_77_set.insert("4");
    Instrmt_77.add_attribute("StrkPxBndryPrcsn", "21012633.070000"); // 1
    Instrmt_77_set.insert("21012633.070000");
    Instrmt_77.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("OptAt", "1903369914"); // 1
    Instrmt_77_set.insert("1903369914");
    Instrmt_77.add_attribute("Mult", "15548547.730000"); // 1
    Instrmt_77_set.insert("15548547.730000");
    Instrmt_77.add_attribute("MultTyp", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("MinPxIncr", "11062329.430000"); // 1
    Instrmt_77_set.insert("11062329.430000");
    Instrmt_77.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_321309892"); // 1
    Instrmt_77_set.insert("MinPriceIncrementAmount_t_321309892");
    Instrmt_77.add_attribute("UOM", "Bu"); // 1
    Instrmt_77_set.insert("Bu");
    Instrmt_77.add_attribute("UOMQty", "1189179.210000"); // 1
    Instrmt_77_set.insert("1189179.210000");
    Instrmt_77.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_77_set.insert("lbs");
    Instrmt_77.add_attribute("PxUOMQty", "5576565.290000"); // 1
    Instrmt_77_set.insert("5576565.290000");
    Instrmt_77.add_attribute("SettlMeth", "C"); // 1
    Instrmt_77_set.insert("C");
    Instrmt_77.add_attribute("ExerStyle", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("OptPayAmt", "OptPayoutAmount_t_1795520737"); // 1
    Instrmt_77_set.insert("OptPayoutAmount_t_1795520737");
    Instrmt_77.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_77_set.insert("PCTPAR");
    Instrmt_77.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_77_set.insert("FUTDA");
    Instrmt_77.add_attribute("ListMeth", "0"); // 1
    Instrmt_77_set.insert("0");
    Instrmt_77.add_attribute("CapPx", "987782.300000"); // 1
    Instrmt_77_set.insert("987782.300000");
    Instrmt_77.add_attribute("FlrPx", "2302273.410000"); // 1
    Instrmt_77_set.insert("2302273.410000");
    Instrmt_77.add_attribute("PutCall", "0"); // 1
    Instrmt_77_set.insert("0");
    Instrmt_77.add_attribute("FlexInd", "true"); // 1
    Instrmt_77_set.insert("true");
    Instrmt_77.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_77_set.insert("false");
    Instrmt_77.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_77_set.insert("Yr");
    Instrmt_77.add_attribute("CpnRt", "19300052.460000"); // 1
    Instrmt_77_set.insert("19300052.460000");
    Instrmt_77.add_attribute("Exch", "SecurityExchange_t_1867867209"); // 1
    Instrmt_77_set.insert("SecurityExchange_t_1867867209");
    Instrmt_77.add_attribute("PosLmt", "1569406400"); // 1
    Instrmt_77_set.insert("1569406400");
    Instrmt_77.add_attribute("NTPosLmt", "2028020801"); // 1
    Instrmt_77_set.insert("2028020801");
    Instrmt_77.add_attribute("Issr", "Issuer_t_542276797"); // 1
    Instrmt_77_set.insert("Issuer_t_542276797");
    Instrmt_77.add_attribute("EncIssrLen", "718081506"); // 1
    Instrmt_77_set.insert("718081506");
    Instrmt_77.add_attribute("EncIssr", "EncodedIssuer_t_1981800460"); // 1
    Instrmt_77_set.insert("EncodedIssuer_t_1981800460");
    Instrmt_77.add_attribute("Desc", "SecurityDesc_t_1767644569"); // 1
    Instrmt_77_set.insert("SecurityDesc_t_1767644569");
    Instrmt_77.add_attribute("EncSecDescLen", "473967772"); // 1
    Instrmt_77_set.insert("473967772");
    Instrmt_77.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1389171585"); // 1
    Instrmt_77_set.insert("EncodedSecurityDesc_t_1389171585");
    Instrmt_77.add_attribute("Pool", "Pool_t_1955653364"); // 1
    Instrmt_77_set.insert("Pool_t_1955653364");
    Instrmt_77.add_attribute("CSetMo", "1922406269"); // 1
    Instrmt_77_set.insert("1922406269");
    Instrmt_77.add_attribute("CPPgm", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("CPRegT", "CPRegType_t_129479609"); // 1
    Instrmt_77_set.insert("CPRegType_t_129479609");
    Instrmt_77.add_attribute("Dated", "DatedDate_t_335875310"); // 1
    Instrmt_77_set.insert("DatedDate_t_335875310");
    Instrmt_77.add_attribute("IntAcrl", "InterestAccrualDate_t_466838802"); // 1
    Instrmt_77_set.insert("InterestAccrualDate_t_466838802");
    all_values.push_back(Instrmt_77_set);
    all_compo_names.insert("Instrmt_77_set");

    {
      xml_element AID_80{"AID"};
      multiset<string> AID_80_set;
      AID_80.add_attribute("AltID", "SecurityAltID_t_1744969778"); // 2
      AID_80_set.insert("SecurityAltID_t_1744969778");
      AID_80.add_attribute("AltIDSrc", "F"); // 2
      AID_80_set.insert("F");
      all_values.push_back(AID_80_set);
      all_compo_names.insert("AID_80_set");

      Instrmt_77.add_element(AID_80);
    }
    {
      xml_element SecXML_80{"SecXML"};
      multiset<string> SecXML_80_set;
      SecXML_80.add_attribute("Schema", "SecurityXMLSchema_t_222937412"); // 2
      SecXML_80_set.insert("SecurityXMLSchema_t_222937412");
      all_values.push_back(SecXML_80_set);
      all_compo_names.insert("SecXML_80_set");

      Instrmt_77.add_element(SecXML_80);
    }
    {
      xml_element Evnt_80{"Evnt"};
      multiset<string> Evnt_80_set;
      Evnt_80.add_attribute("EventTyp", "11"); // 2
      Evnt_80_set.insert("11");
      Evnt_80.add_attribute("Dt", "EventDate_t_1887307274"); // 2
      Evnt_80_set.insert("EventDate_t_1887307274");
      Evnt_80.add_attribute("Tm", "EventTime_t_2018458149"); // 2
      Evnt_80_set.insert("EventTime_t_2018458149");
      Evnt_80.add_attribute("Px", "19785266.740000"); // 2
      Evnt_80_set.insert("19785266.740000");
      Evnt_80.add_attribute("Txt", "EventText_t_859175623"); // 2
      Evnt_80_set.insert("EventText_t_859175623");
      all_values.push_back(Evnt_80_set);
      all_compo_names.insert("Evnt_80_set");

      Instrmt_77.add_element(Evnt_80);
    }
    {
      xml_element Pty_391{"Pty"};
      multiset<string> Pty_391_set;
      Pty_391.add_attribute("ID", "InstrumentPartyID_t_464924754"); // 2
      Pty_391_set.insert("InstrumentPartyID_t_464924754");
      Pty_391.add_attribute("Src", "1"); // 2
      Pty_391_set.insert("1");
      Pty_391.add_attribute("R", "78"); // 2
      Pty_391_set.insert("78");
      all_values.push_back(Pty_391_set);
      all_compo_names.insert("Pty_391_set");

      {
        xml_element Sub_391{"Sub"};
        multiset<string> Sub_391_set;
        Sub_391.add_attribute("ID", "InstrumentPartySubID_t_1931200782"); // 3
        Sub_391_set.insert("InstrumentPartySubID_t_1931200782");
        Sub_391.add_attribute("Typ", "7"); // 3
        Sub_391_set.insert("7");
        all_values.push_back(Sub_391_set);
        all_compo_names.insert("Sub_391_set");

        Pty_391.add_element(Sub_391);
      }
      Instrmt_77.add_element(Pty_391);
    }
    {
      xml_element CmplxEvnt_77{"CmplxEvnt"};
      multiset<string> CmplxEvnt_77_set;
      CmplxEvnt_77.add_attribute("Typ", "4"); // 2
      CmplxEvnt_77_set.insert("4");
      CmplxEvnt_77.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_77228988"); // 2
      CmplxEvnt_77_set.insert("ComplexOptPayoutAmount_t_77228988");
      CmplxEvnt_77.add_attribute("Px", "17476294.140000"); // 2
      CmplxEvnt_77_set.insert("17476294.140000");
      CmplxEvnt_77.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_77_set.insert("3");
      CmplxEvnt_77.add_attribute("PxBndryPrcsn", "16466353.890000"); // 2
      CmplxEvnt_77_set.insert("16466353.890000");
      CmplxEvnt_77.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_77_set.insert("1");
      CmplxEvnt_77.add_attribute("Cond", "1"); // 2
      CmplxEvnt_77_set.insert("1");
      all_values.push_back(CmplxEvnt_77_set);
      all_compo_names.insert("CmplxEvnt_77_set");

      {
        xml_element EvntDts_77{"EvntDts"};
        multiset<string> EvntDts_77_set;
        EvntDts_77.add_attribute("StartDt", "ComplexEventStartDate_t_217233247"); // 3
        EvntDts_77_set.insert("ComplexEventStartDate_t_217233247");
        EvntDts_77.add_attribute("EndDt", "ComplexEventEndDate_t_1462483379"); // 3
        EvntDts_77_set.insert("ComplexEventEndDate_t_1462483379");
        all_values.push_back(EvntDts_77_set);
        all_compo_names.insert("EvntDts_77_set");

        {
          xml_element EvntTms_77{"EvntTms"};
          multiset<string> EvntTms_77_set;
          EvntTms_77.add_attribute("StartTm", "1084158265"); // 4
          EvntTms_77_set.insert("1084158265");
          EvntTms_77.add_attribute("EndTm", "691201019"); // 4
          EvntTms_77_set.insert("691201019");
          all_values.push_back(EvntTms_77_set);
          all_compo_names.insert("EvntTms_77_set");

          EvntDts_77.add_element(EvntTms_77);
        }
        CmplxEvnt_77.add_element(EvntDts_77);
      }
      Instrmt_77.add_element(CmplxEvnt_77);
    }
    elt.add_element(Instrmt_77);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_16{"InstrmtExt"};
    multiset<string> InstrmtExt_16_set;
    InstrmtExt_16.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_16_set.insert("1");
    InstrmtExt_16.add_attribute("PctAtRisk", "8923279.810000"); // 1
    InstrmtExt_16_set.insert("8923279.810000");
    all_values.push_back(InstrmtExt_16_set);
    all_compo_names.insert("InstrmtExt_16_set");

    {
      xml_element Attrb_29{"Attrb"};
      multiset<string> Attrb_29_set;
      Attrb_29.add_attribute("Typ", "8"); // 2
      Attrb_29_set.insert("8");
      Attrb_29.add_attribute("Val", "InstrAttribValue_t_1052092197"); // 2
      Attrb_29_set.insert("InstrAttribValue_t_1052092197");
      all_values.push_back(Attrb_29_set);
      all_compo_names.insert("Attrb_29_set");

      InstrmtExt_16.add_element(Attrb_29);
    }
    elt.add_element(InstrmtExt_16);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_111{"Undly"};
    multiset<string> Undly_111_set;
    Undly_111.add_attribute("Sym", "UnderlyingSymbol_t_801998951"); // 1
    Undly_111_set.insert("UnderlyingSymbol_t_801998951");
    Undly_111.add_attribute("Sfx", "WI"); // 1
    Undly_111_set.insert("WI");
    Undly_111.add_attribute("ID", "UnderlyingSecurityID_t_619293721"); // 1
    Undly_111_set.insert("UnderlyingSecurityID_t_619293721");
    Undly_111.add_attribute("Src", "A"); // 1
    Undly_111_set.insert("A");
    Undly_111.add_attribute("Prod", "7"); // 1
    Undly_111_set.insert("7");
    Undly_111.add_attribute("CFI", "UnderlyingCFICode_t_82357603"); // 1
    Undly_111_set.insert("UnderlyingCFICode_t_82357603");
    Undly_111.add_attribute("SecTyp", "REPLACD"); // 1
    Undly_111_set.insert("REPLACD");
    Undly_111.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1612842913"); // 1
    Undly_111_set.insert("UnderlyingSecuritySubType_t_1612842913");
    Undly_111.add_attribute("MMY", "2060884277"); // 1
    Undly_111_set.insert("2060884277");
    Undly_111.add_attribute("Mat", "UnderlyingMaturityDate_t_147046393"); // 1
    Undly_111_set.insert("UnderlyingMaturityDate_t_147046393");
    Undly_111.add_attribute("MatTm", "2077767667"); // 1
    Undly_111_set.insert("2077767667");
    Undly_111.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1990705533"); // 1
    Undly_111_set.insert("UnderlyingCouponPaymentDate_t_1990705533");
    Undly_111.add_attribute("RestrctTyp", "MR"); // 1
    Undly_111_set.insert("MR");
    Undly_111.add_attribute("Snrty", "SB"); // 1
    Undly_111_set.insert("SB");
    Undly_111.add_attribute("NotlPctOut", "18083297.010000"); // 1
    Undly_111_set.insert("18083297.010000");
    Undly_111.add_attribute("OrigNotlPctOut", "2903026.950000"); // 1
    Undly_111_set.insert("2903026.950000");
    Undly_111.add_attribute("AttchPnt", "19387137.890000"); // 1
    Undly_111_set.insert("19387137.890000");
    Undly_111.add_attribute("DetchPnt", "14084754.670000"); // 1
    Undly_111_set.insert("14084754.670000");
    Undly_111.add_attribute("Issued", "UnderlyingIssueDate_t_1212023242"); // 1
    Undly_111_set.insert("UnderlyingIssueDate_t_1212023242");
    Undly_111.add_attribute("RepoCollSecTyp", "1437865530"); // 1
    Undly_111_set.insert("1437865530");
    Undly_111.add_attribute("RepoTrm", "889158386"); // 1
    Undly_111_set.insert("889158386");
    Undly_111.add_attribute("RepoRt", "5285369.380000"); // 1
    Undly_111_set.insert("5285369.380000");
    Undly_111.add_attribute("Fctr", "16550987.770000"); // 1
    Undly_111_set.insert("16550987.770000");
    Undly_111.add_attribute("CrdRtg", "UnderlyingCreditRating_t_204158117"); // 1
    Undly_111_set.insert("UnderlyingCreditRating_t_204158117");
    Undly_111.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1612695203"); // 1
    Undly_111_set.insert("UnderlyingInstrRegistry_t_1612695203");
    Undly_111.add_attribute("Ctry", "198816149"); // 1
    Undly_111_set.insert("198816149");
    Undly_111.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_908329434"); // 1
    Undly_111_set.insert("UnderlyingStateOrProvinceOfIssue_t_908329434");
    Undly_111.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_357539537"); // 1
    Undly_111_set.insert("UnderlyingLocaleOfIssue_t_357539537");
    Undly_111.add_attribute("Redeem", "UnderlyingRedemptionDate_t_664939789"); // 1
    Undly_111_set.insert("UnderlyingRedemptionDate_t_664939789");
    Undly_111.add_attribute("StrkPx", "19604216.310000"); // 1
    Undly_111_set.insert("19604216.310000");
    Undly_111.add_attribute("StrkCcy", "USD"); // 1
    Undly_111_set.insert("USD");
    Undly_111.add_attribute("OptA", "1331868983"); // 1
    Undly_111_set.insert("1331868983");
    Undly_111.add_attribute("Mult", "19986408.480000"); // 1
    Undly_111_set.insert("19986408.480000");
    Undly_111.add_attribute("MultTyp", "2"); // 1
    Undly_111_set.insert("2");
    Undly_111.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_111_set.insert("1");
    Undly_111.add_attribute("UOM", "MWh"); // 1
    Undly_111_set.insert("MWh");
    Undly_111.add_attribute("UOMQty", "3028566.530000"); // 1
    Undly_111_set.insert("3028566.530000");
    Undly_111.add_attribute("PxUOM", "Bcf"); // 1
    Undly_111_set.insert("Bcf");
    Undly_111.add_attribute("PxUOMQty", "19943990.810000"); // 1
    Undly_111_set.insert("19943990.810000");
    Undly_111.add_attribute("TmUnit", "Mo"); // 1
    Undly_111_set.insert("Mo");
    Undly_111.add_attribute("ExerStyle", "0"); // 1
    Undly_111_set.insert("0");
    Undly_111.add_attribute("CpnRt", "18376209.670000"); // 1
    Undly_111_set.insert("18376209.670000");
    Undly_111.add_attribute("Exch", "UnderlyingSecurityExchange_t_1686352403"); // 1
    Undly_111_set.insert("UnderlyingSecurityExchange_t_1686352403");
    Undly_111.add_attribute("Issr", "UnderlyingIssuer_t_35898183"); // 1
    Undly_111_set.insert("UnderlyingIssuer_t_35898183");
    Undly_111.add_attribute("EncUndIssrLen", "1498467020"); // 1
    Undly_111_set.insert("1498467020");
    Undly_111.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1976655099"); // 1
    Undly_111_set.insert("EncodedUnderlyingIssuer_t_1976655099");
    Undly_111.add_attribute("Desc", "UnderlyingSecurityDesc_t_1974611973"); // 1
    Undly_111_set.insert("UnderlyingSecurityDesc_t_1974611973");
    Undly_111.add_attribute("EncUndSecDescLen", "759458840"); // 1
    Undly_111_set.insert("759458840");
    Undly_111.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1041194693"); // 1
    Undly_111_set.insert("EncodedUnderlyingSecurityDesc_t_1041194693");
    Undly_111.add_attribute("CPPgm", "UnderlyingCPProgram_t_1264993855"); // 1
    Undly_111_set.insert("UnderlyingCPProgram_t_1264993855");
    Undly_111.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1648617226"); // 1
    Undly_111_set.insert("UnderlyingCPRegType_t_1648617226");
    Undly_111.add_attribute("AllocPct", "15697316.320000"); // 1
    Undly_111_set.insert("15697316.320000");
    Undly_111.add_attribute("Ccy", "JPY"); // 1
    Undly_111_set.insert("JPY");
    Undly_111.add_attribute("Qty", "10349431.870000"); // 1
    Undly_111_set.insert("10349431.870000");
    Undly_111.add_attribute("SettlTyp", "2"); // 1
    Undly_111_set.insert("2");
    Undly_111.add_attribute("CashAmt", "UnderlyingCashAmount_t_613621130"); // 1
    Undly_111_set.insert("UnderlyingCashAmount_t_613621130");
    Undly_111.add_attribute("CashTyp", "FIXED"); // 1
    Undly_111_set.insert("FIXED");
    Undly_111.add_attribute("Px", "16363649.230000"); // 1
    Undly_111_set.insert("16363649.230000");
    Undly_111.add_attribute("DirtPx", "4265591.130000"); // 1
    Undly_111_set.insert("4265591.130000");
    Undly_111.add_attribute("EndPx", "6243462.040000"); // 1
    Undly_111_set.insert("6243462.040000");
    Undly_111.add_attribute("StartVal", "UnderlyingStartValue_t_955820016"); // 1
    Undly_111_set.insert("UnderlyingStartValue_t_955820016");
    Undly_111.add_attribute("CurVal", "UnderlyingCurrentValue_t_1758428096"); // 1
    Undly_111_set.insert("UnderlyingCurrentValue_t_1758428096");
    Undly_111.add_attribute("EndVal", "UnderlyingEndValue_t_475503404"); // 1
    Undly_111_set.insert("UnderlyingEndValue_t_475503404");
    Undly_111.add_attribute("AdjQty", "19708058.990000"); // 1
    Undly_111_set.insert("19708058.990000");
    Undly_111.add_attribute("FxRate", "5371981.950000"); // 1
    Undly_111_set.insert("5371981.950000");
    Undly_111.add_attribute("FxRateCalc", "M"); // 1
    Undly_111_set.insert("M");
    Undly_111.add_attribute("CapValu", "UnderlyingCapValue_t_126178904"); // 1
    Undly_111_set.insert("UnderlyingCapValue_t_126178904");
    Undly_111.add_attribute("SetMeth", "UnderlyingSettlMethod_t_928811206"); // 1
    Undly_111_set.insert("UnderlyingSettlMethod_t_928811206");
    Undly_111.add_attribute("PutCall", "255933642"); // 1
    Undly_111_set.insert("255933642");
    all_values.push_back(Undly_111_set);
    all_compo_names.insert("Undly_111_set");

    {
      xml_element UndAID_111{"UndAID"};
      multiset<string> UndAID_111_set;
      UndAID_111.add_attribute("AltID", "UnderlyingSecurityAltID_t_576081950"); // 2
      UndAID_111_set.insert("UnderlyingSecurityAltID_t_576081950");
      UndAID_111.add_attribute("AltIDSrc", "A"); // 2
      UndAID_111_set.insert("A");
      all_values.push_back(UndAID_111_set);
      all_compo_names.insert("UndAID_111_set");

      Undly_111.add_element(UndAID_111);
    }
    {
      xml_element Stip_178{"Stip"};
      multiset<string> Stip_178_set;
      Stip_178.add_attribute("Typ", "STRUCT"); // 2
      Stip_178_set.insert("STRUCT");
      Stip_178.add_attribute("Val", "UnderlyingStipValue_t_114950706"); // 2
      Stip_178_set.insert("UnderlyingStipValue_t_114950706");
      all_values.push_back(Stip_178_set);
      all_compo_names.insert("Stip_178_set");

      Undly_111.add_element(Stip_178);
    }
    {
      xml_element Pty_392{"Pty"};
      multiset<string> Pty_392_set;
      Pty_392.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1286606420"); // 2
      Pty_392_set.insert("UnderlyingInstrumentPartyID_t_1286606420");
      Pty_392.add_attribute("Src", "2"); // 2
      Pty_392_set.insert("2");
      Pty_392.add_attribute("R", "18"); // 2
      Pty_392_set.insert("18");
      all_values.push_back(Pty_392_set);
      all_compo_names.insert("Pty_392_set");

      {
        xml_element Sub_392{"Sub"};
        multiset<string> Sub_392_set;
        Sub_392.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1113734745"); // 3
        Sub_392_set.insert("UnderlyingInstrumentPartySubID_t_1113734745");
        Sub_392.add_attribute("Typ", "21"); // 3
        Sub_392_set.insert("21");
        all_values.push_back(Sub_392_set);
        all_compo_names.insert("Sub_392_set");

        Pty_392.add_element(Sub_392);
      }
      Undly_111.add_element(Pty_392);
    }
    elt.add_element(Undly_111);
  } // end Undly
  { // Leg
    xml_element Leg_96{"Leg"};
    multiset<string> Leg_96_set;
    Leg_96.add_attribute("Sym", "LegSymbol_t_231244953"); // 1
    Leg_96_set.insert("LegSymbol_t_231244953");
    Leg_96.add_attribute("Sfx", "CD"); // 1
    Leg_96_set.insert("CD");
    Leg_96.add_attribute("ID", "LegSecurityID_t_407564834"); // 1
    Leg_96_set.insert("LegSecurityID_t_407564834");
    Leg_96.add_attribute("Src", "B"); // 1
    Leg_96_set.insert("B");
    Leg_96.add_attribute("Prod", "2"); // 1
    Leg_96_set.insert("2");
    Leg_96.add_attribute("CFI", "LegCFICode_t_1442508022"); // 1
    Leg_96_set.insert("LegCFICode_t_1442508022");
    Leg_96.add_attribute("SecTyp", "CPP"); // 1
    Leg_96_set.insert("CPP");
    Leg_96.add_attribute("SecSubTyp", "LegSecuritySubType_t_2024043226"); // 1
    Leg_96_set.insert("LegSecuritySubType_t_2024043226");
    Leg_96.add_attribute("MMY", "687507098"); // 1
    Leg_96_set.insert("687507098");
    Leg_96.add_attribute("Mat", "LegMaturityDate_t_1464160347"); // 1
    Leg_96_set.insert("LegMaturityDate_t_1464160347");
    Leg_96.add_attribute("MatTm", "303118691"); // 1
    Leg_96_set.insert("303118691");
    Leg_96.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1311853302"); // 1
    Leg_96_set.insert("LegCouponPaymentDate_t_1311853302");
    Leg_96.add_attribute("Issued", "LegIssueDate_t_272496715"); // 1
    Leg_96_set.insert("LegIssueDate_t_272496715");
    Leg_96.add_attribute("RepoCollSecTyp", "2061546788"); // 1
    Leg_96_set.insert("2061546788");
    Leg_96.add_attribute("RepoTrm", "1787356707"); // 1
    Leg_96_set.insert("1787356707");
    Leg_96.add_attribute("RepoRt", "958189.670000"); // 1
    Leg_96_set.insert("958189.670000");
    Leg_96.add_attribute("Fctr", "4512613.350000"); // 1
    Leg_96_set.insert("4512613.350000");
    Leg_96.add_attribute("CrdRtg", "LegCreditRating_t_48891267"); // 1
    Leg_96_set.insert("LegCreditRating_t_48891267");
    Leg_96.add_attribute("Rgstry", "LegInstrRegistry_t_221997871"); // 1
    Leg_96_set.insert("LegInstrRegistry_t_221997871");
    Leg_96.add_attribute("Ctry", "1380072541"); // 1
    Leg_96_set.insert("1380072541");
    Leg_96.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_304824909"); // 1
    Leg_96_set.insert("LegStateOrProvinceOfIssue_t_304824909");
    Leg_96.add_attribute("Lcl", "LegLocaleOfIssue_t_798079822"); // 1
    Leg_96_set.insert("LegLocaleOfIssue_t_798079822");
    Leg_96.add_attribute("Redeem", "LegRedemptionDate_t_483297130"); // 1
    Leg_96_set.insert("LegRedemptionDate_t_483297130");
    Leg_96.add_attribute("Strk", "2508958.700000"); // 1
    Leg_96_set.insert("2508958.700000");
    Leg_96.add_attribute("StrkCcy", "EUR"); // 1
    Leg_96_set.insert("EUR");
    Leg_96.add_attribute("OptA", "1695433852"); // 1
    Leg_96_set.insert("1695433852");
    Leg_96.add_attribute("Cmult", "8571526.850000"); // 1
    Leg_96_set.insert("8571526.850000");
    Leg_96.add_attribute("MultTyp", "2"); // 1
    Leg_96_set.insert("2");
    Leg_96.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_96_set.insert("0");
    Leg_96.add_attribute("UOM", "Bcf"); // 1
    Leg_96_set.insert("Bcf");
    Leg_96.add_attribute("UOMQty", "9673996.010000"); // 1
    Leg_96_set.insert("9673996.010000");
    Leg_96.add_attribute("PxUOM", "Bu"); // 1
    Leg_96_set.insert("Bu");
    Leg_96.add_attribute("PxUOMQty", "1025507.220000"); // 1
    Leg_96_set.insert("1025507.220000");
    Leg_96.add_attribute("TmUnit", "D"); // 1
    Leg_96_set.insert("D");
    Leg_96.add_attribute("ExerStyle", "0"); // 1
    Leg_96_set.insert("0");
    Leg_96.add_attribute("CpnRt", "15450587.440000"); // 1
    Leg_96_set.insert("15450587.440000");
    Leg_96.add_attribute("Exch", "LegSecurityExchange_t_1799048963"); // 1
    Leg_96_set.insert("LegSecurityExchange_t_1799048963");
    Leg_96.add_attribute("Issr", "LegIssuer_t_449091803"); // 1
    Leg_96_set.insert("LegIssuer_t_449091803");
    Leg_96.add_attribute("EncLegIssrLen", "85082194"); // 1
    Leg_96_set.insert("85082194");
    Leg_96.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1115725663"); // 1
    Leg_96_set.insert("EncodedLegIssuer_t_1115725663");
    Leg_96.add_attribute("Desc", "LegSecurityDesc_t_752210495"); // 1
    Leg_96_set.insert("LegSecurityDesc_t_752210495");
    Leg_96.add_attribute("EncLegSecDescLen", "1396935497"); // 1
    Leg_96_set.insert("1396935497");
    Leg_96.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1388222378"); // 1
    Leg_96_set.insert("EncodedLegSecurityDesc_t_1388222378");
    Leg_96.add_attribute("RatioQty", "6662736.350000"); // 1
    Leg_96_set.insert("6662736.350000");
    Leg_96.add_attribute("Side", "D"); // 1
    Leg_96_set.insert("D");
    Leg_96.add_attribute("Ccy", "GBP"); // 1
    Leg_96_set.insert("GBP");
    Leg_96.add_attribute("Pool", "LegPool_t_1085699823"); // 1
    Leg_96_set.insert("LegPool_t_1085699823");
    Leg_96.add_attribute("Dated", "LegDatedDate_t_1706039217"); // 1
    Leg_96_set.insert("LegDatedDate_t_1706039217");
    Leg_96.add_attribute("CSetMo", "350123863"); // 1
    Leg_96_set.insert("350123863");
    Leg_96.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1390524733"); // 1
    Leg_96_set.insert("LegInterestAccrualDate_t_1390524733");
    Leg_96.add_attribute("PutCall", "356635391"); // 1
    Leg_96_set.insert("356635391");
    Leg_96.add_attribute("LegOptionRatio", "8334209.940000"); // 1
    Leg_96_set.insert("8334209.940000");
    Leg_96.add_attribute("Px", "16414206.030000"); // 1
    Leg_96_set.insert("16414206.030000");
    all_values.push_back(Leg_96_set);
    all_compo_names.insert("Leg_96_set");

    {
      xml_element LegAID_93{"LegAID"};
      multiset<string> LegAID_93_set;
      LegAID_93.add_attribute("SecAltID", "LegSecurityAltID_t_1269665919"); // 2
      LegAID_93_set.insert("LegSecurityAltID_t_1269665919");
      LegAID_93.add_attribute("SecAltIDSrc", "I"); // 2
      LegAID_93_set.insert("I");
      all_values.push_back(LegAID_93_set);
      all_compo_names.insert("LegAID_93_set");

      Leg_96.add_element(LegAID_93);
    }
    elt.add_element(Leg_96);
  } // end Leg
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
