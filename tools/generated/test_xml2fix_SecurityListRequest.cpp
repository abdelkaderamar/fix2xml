#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecListReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1289581841"); // 0
  SecurityListRequest_message_t_0.insert("SecurityReqID_t_1289581841");
  elt.add_attribute("ListReqTyp", "2"); // 0
  SecurityListRequest_message_t_0.insert("2");
  elt.add_attribute("ListID", "SecurityListID_t_1355596960"); // 0
  SecurityListRequest_message_t_0.insert("SecurityListID_t_1355596960");
  elt.add_attribute("ListTyp", "4"); // 0
  SecurityListRequest_message_t_0.insert("4");
  elt.add_attribute("LstTypSrc", "1"); // 0
  SecurityListRequest_message_t_0.insert("1");
  elt.add_attribute("MktID", "MarketID_t_1378316191"); // 0
  SecurityListRequest_message_t_0.insert("MarketID_t_1378316191");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_733243984"); // 0
  SecurityListRequest_message_t_0.insert("MarketSegmentID_t_733243984");
  elt.add_attribute("Ccy", "EUR"); // 0
  SecurityListRequest_message_t_0.insert("EUR");
  elt.add_attribute("Txt", "Text_t_1855446293"); // 0
  SecurityListRequest_message_t_0.insert("Text_t_1855446293");
  elt.add_attribute("EncTxtLen", "771411415"); // 0
  SecurityListRequest_message_t_0.insert("771411415");
  elt.add_attribute("EncTxt", "EncodedText_t_2052199299"); // 0
  SecurityListRequest_message_t_0.insert("EncodedText_t_2052199299");
  elt.add_attribute("SesID", "4"); // 0
  SecurityListRequest_message_t_0.insert("4");
  elt.add_attribute("SesSub", "5"); // 0
  SecurityListRequest_message_t_0.insert("5");
  elt.add_attribute("SubReqTyp", "0"); // 0
  SecurityListRequest_message_t_0.insert("0");
  all_values.push_back(SecurityListRequest_message_t_0);
  all_compo_names.insert("SecurityListRequest_message_t");

  { // Hdr
    xml_element Hdr_84{"Hdr"};
    multiset<string> Hdr_84_set;
    Hdr_84.add_attribute("SeqNum", "1593240824"); // 1
    Hdr_84_set.insert("1593240824");
    Hdr_84.add_attribute("SID", "SenderCompID_t_520635643"); // 1
    Hdr_84_set.insert("SenderCompID_t_520635643");
    Hdr_84.add_attribute("TID", "TargetCompID_t_227506009"); // 1
    Hdr_84_set.insert("TargetCompID_t_227506009");
    Hdr_84.add_attribute("OBID", "OnBehalfOfCompID_t_1562210508"); // 1
    Hdr_84_set.insert("OnBehalfOfCompID_t_1562210508");
    Hdr_84.add_attribute("D2ID", "DeliverToCompID_t_21819756"); // 1
    Hdr_84_set.insert("DeliverToCompID_t_21819756");
    Hdr_84.add_attribute("SSub", "SenderSubID_t_188712872"); // 1
    Hdr_84_set.insert("SenderSubID_t_188712872");
    Hdr_84.add_attribute("SLoc", "SenderLocationID_t_680780751"); // 1
    Hdr_84_set.insert("SenderLocationID_t_680780751");
    Hdr_84.add_attribute("TSub", "TargetSubID_t_1167750264"); // 1
    Hdr_84_set.insert("TargetSubID_t_1167750264");
    Hdr_84.add_attribute("TLoc", "TargetLocationID_t_1816116701"); // 1
    Hdr_84_set.insert("TargetLocationID_t_1816116701");
    Hdr_84.add_attribute("OBSub", "OnBehalfOfSubID_t_1495117578"); // 1
    Hdr_84_set.insert("OnBehalfOfSubID_t_1495117578");
    Hdr_84.add_attribute("OBLoc", "OnBehalfOfLocationID_t_691336152"); // 1
    Hdr_84_set.insert("OnBehalfOfLocationID_t_691336152");
    Hdr_84.add_attribute("D2Sub", "DeliverToSubID_t_1557995255"); // 1
    Hdr_84_set.insert("DeliverToSubID_t_1557995255");
    Hdr_84.add_attribute("D2Loc", "DeliverToLocationID_t_1340520607"); // 1
    Hdr_84_set.insert("DeliverToLocationID_t_1340520607");
    Hdr_84.add_attribute("PosDup", "Y"); // 1
    Hdr_84_set.insert("Y");
    Hdr_84.add_attribute("PosRsnd", "Y"); // 1
    Hdr_84_set.insert("Y");
    Hdr_84.add_attribute("Snt", "SendingTime_t_2060463478"); // 1
    Hdr_84_set.insert("SendingTime_t_2060463478");
    Hdr_84.add_attribute("OrigSnt", "OrigSendingTime_t_237137066"); // 1
    Hdr_84_set.insert("OrigSendingTime_t_237137066");
    Hdr_84.add_attribute("MsgEncd", "MessageEncoding_t_1838028938"); // 1
    Hdr_84_set.insert("MessageEncoding_t_1838028938");
    all_values.push_back(Hdr_84_set);
    all_compo_names.insert("Hdr_84_set");

    {
      xml_element Hop_84{"Hop"};
      multiset<string> Hop_84_set;
      Hop_84.add_attribute("ID", "HopCompID_t_1268576790"); // 2
      Hop_84_set.insert("HopCompID_t_1268576790");
      Hop_84.add_attribute("Ref", "1551158941"); // 2
      Hop_84_set.insert("1551158941");
      Hop_84.add_attribute("Snt", "HopSendingTime_t_1114268541"); // 2
      Hop_84_set.insert("HopSendingTime_t_1114268541");
      all_values.push_back(Hop_84_set);
      all_compo_names.insert("Hop_84_set");

      Hdr_84.add_element(Hop_84);
    }
    elt.add_element(Hdr_84);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_77{"Instrmt"};
    multiset<string> Instrmt_77_set;
    Instrmt_77.add_attribute("Sym", "Symbol_t_499409334"); // 1
    Instrmt_77_set.insert("Symbol_t_499409334");
    Instrmt_77.add_attribute("Sfx", "CD"); // 1
    Instrmt_77_set.insert("CD");
    Instrmt_77.add_attribute("ID", "SecurityID_t_1976451163"); // 1
    Instrmt_77_set.insert("SecurityID_t_1976451163");
    Instrmt_77.add_attribute("Src", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("Prod", "10"); // 1
    Instrmt_77_set.insert("10");
    Instrmt_77.add_attribute("ProdCmplx", "ProductComplex_t_600378931"); // 1
    Instrmt_77_set.insert("ProductComplex_t_600378931");
    Instrmt_77.add_attribute("SecGrp", "SecurityGroup_t_501266751"); // 1
    Instrmt_77_set.insert("SecurityGroup_t_501266751");
    Instrmt_77.add_attribute("CFI", "CFICode_t_153629507"); // 1
    Instrmt_77_set.insert("CFICode_t_153629507");
    Instrmt_77.add_attribute("SecTyp", "NONE"); // 1
    Instrmt_77_set.insert("NONE");
    Instrmt_77.add_attribute("SubTyp", "SecuritySubType_t_1573062279"); // 1
    Instrmt_77_set.insert("SecuritySubType_t_1573062279");
    Instrmt_77.add_attribute("MMY", "1746870331"); // 1
    Instrmt_77_set.insert("1746870331");
    Instrmt_77.add_attribute("MatDt", "MaturityDate_t_1428129323"); // 1
    Instrmt_77_set.insert("MaturityDate_t_1428129323");
    Instrmt_77.add_attribute("MatTm", "1800568288"); // 1
    Instrmt_77_set.insert("1800568288");
    Instrmt_77.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1161597191"); // 1
    Instrmt_77_set.insert("SettleOnOpenFlag_t_1161597191");
    Instrmt_77.add_attribute("AsgnMeth", "1449949079"); // 1
    Instrmt_77_set.insert("1449949079");
    Instrmt_77.add_attribute("Status", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("CpnPmt", "CouponPaymentDate_t_1842377942"); // 1
    Instrmt_77_set.insert("CouponPaymentDate_t_1842377942");
    Instrmt_77.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_77_set.insert("XR");
    Instrmt_77.add_attribute("Snrty", "SR"); // 1
    Instrmt_77_set.insert("SR");
    Instrmt_77.add_attribute("NotlPctOut", "11900118.720000"); // 1
    Instrmt_77_set.insert("11900118.720000");
    Instrmt_77.add_attribute("OrigNotlPctOut", "11615518.470000"); // 1
    Instrmt_77_set.insert("11615518.470000");
    Instrmt_77.add_attribute("AttchPnt", "10684258.210000"); // 1
    Instrmt_77_set.insert("10684258.210000");
    Instrmt_77.add_attribute("DetchPnt", "3830488.310000"); // 1
    Instrmt_77_set.insert("3830488.310000");
    Instrmt_77.add_attribute("Issued", "IssueDate_t_109107073"); // 1
    Instrmt_77_set.insert("IssueDate_t_109107073");
    Instrmt_77.add_attribute("RepoCollSecTyp", "70241759"); // 1
    Instrmt_77_set.insert("70241759");
    Instrmt_77.add_attribute("RepoTrm", "296028662"); // 1
    Instrmt_77_set.insert("296028662");
    Instrmt_77.add_attribute("RepoRt", "3462441.390000"); // 1
    Instrmt_77_set.insert("3462441.390000");
    Instrmt_77.add_attribute("Fctr", "19082706.970000"); // 1
    Instrmt_77_set.insert("19082706.970000");
    Instrmt_77.add_attribute("CrdRtg", "CreditRating_t_1564605452"); // 1
    Instrmt_77_set.insert("CreditRating_t_1564605452");
    Instrmt_77.add_attribute("Rgstry", "InstrRegistry_t_1897403081"); // 1
    Instrmt_77_set.insert("InstrRegistry_t_1897403081");
    Instrmt_77.add_attribute("IssuCtry", "875055590"); // 1
    Instrmt_77_set.insert("875055590");
    Instrmt_77.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2064014786"); // 1
    Instrmt_77_set.insert("StateOrProvinceOfIssue_t_2064014786");
    Instrmt_77.add_attribute("Lcl", "LocaleOfIssue_t_2034322359"); // 1
    Instrmt_77_set.insert("LocaleOfIssue_t_2034322359");
    Instrmt_77.add_attribute("Redeem", "RedemptionDate_t_704023106"); // 1
    Instrmt_77_set.insert("RedemptionDate_t_704023106");
    Instrmt_77.add_attribute("StrkPx", "5130822.380000"); // 1
    Instrmt_77_set.insert("5130822.380000");
    Instrmt_77.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_77_set.insert("CHF");
    Instrmt_77.add_attribute("StrkMult", "10143489.890000"); // 1
    Instrmt_77_set.insert("10143489.890000");
    Instrmt_77.add_attribute("StrkValu", "20328337.890000"); // 1
    Instrmt_77_set.insert("20328337.890000");
    Instrmt_77.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("StrkPxBndryPrcsn", "16322204.730000"); // 1
    Instrmt_77_set.insert("16322204.730000");
    Instrmt_77.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("OptAt", "93012261"); // 1
    Instrmt_77_set.insert("93012261");
    Instrmt_77.add_attribute("Mult", "6463340.160000"); // 1
    Instrmt_77_set.insert("6463340.160000");
    Instrmt_77.add_attribute("MultTyp", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("MinPxIncr", "3412283.110000"); // 1
    Instrmt_77_set.insert("3412283.110000");
    Instrmt_77.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1265222519"); // 1
    Instrmt_77_set.insert("MinPriceIncrementAmount_t_1265222519");
    Instrmt_77.add_attribute("UOM", "Bu"); // 1
    Instrmt_77_set.insert("Bu");
    Instrmt_77.add_attribute("UOMQty", "15312401.830000"); // 1
    Instrmt_77_set.insert("15312401.830000");
    Instrmt_77.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_77_set.insert("MMbbl");
    Instrmt_77.add_attribute("PxUOMQty", "5136661.610000"); // 1
    Instrmt_77_set.insert("5136661.610000");
    Instrmt_77.add_attribute("SettlMeth", "P"); // 1
    Instrmt_77_set.insert("P");
    Instrmt_77.add_attribute("ExerStyle", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("OptPayAmt", "OptPayoutAmount_t_62834029"); // 1
    Instrmt_77_set.insert("OptPayoutAmount_t_62834029");
    Instrmt_77.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_77_set.insert("PCTPAR");
    Instrmt_77.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_77_set.insert("CDSD");
    Instrmt_77.add_attribute("ListMeth", "1"); // 1
    Instrmt_77_set.insert("1");
    Instrmt_77.add_attribute("CapPx", "4845613.640000"); // 1
    Instrmt_77_set.insert("4845613.640000");
    Instrmt_77.add_attribute("FlrPx", "12197505.600000"); // 1
    Instrmt_77_set.insert("12197505.600000");
    Instrmt_77.add_attribute("PutCall", "0"); // 1
    Instrmt_77_set.insert("0");
    Instrmt_77.add_attribute("FlexInd", "false"); // 1
    Instrmt_77_set.insert("false");
    Instrmt_77.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_77_set.insert("true");
    Instrmt_77.add_attribute("TmUnit", "S"); // 1
    Instrmt_77_set.insert("S");
    Instrmt_77.add_attribute("CpnRt", "1031207.100000"); // 1
    Instrmt_77_set.insert("1031207.100000");
    Instrmt_77.add_attribute("Exch", "SecurityExchange_t_1080692055"); // 1
    Instrmt_77_set.insert("SecurityExchange_t_1080692055");
    Instrmt_77.add_attribute("PosLmt", "923918199"); // 1
    Instrmt_77_set.insert("923918199");
    Instrmt_77.add_attribute("NTPosLmt", "2135954499"); // 1
    Instrmt_77_set.insert("2135954499");
    Instrmt_77.add_attribute("Issr", "Issuer_t_1145104124"); // 1
    Instrmt_77_set.insert("Issuer_t_1145104124");
    Instrmt_77.add_attribute("EncIssrLen", "1363845819"); // 1
    Instrmt_77_set.insert("1363845819");
    Instrmt_77.add_attribute("EncIssr", "EncodedIssuer_t_1620691324"); // 1
    Instrmt_77_set.insert("EncodedIssuer_t_1620691324");
    Instrmt_77.add_attribute("Desc", "SecurityDesc_t_490161868"); // 1
    Instrmt_77_set.insert("SecurityDesc_t_490161868");
    Instrmt_77.add_attribute("EncSecDescLen", "1456858080"); // 1
    Instrmt_77_set.insert("1456858080");
    Instrmt_77.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_119541693"); // 1
    Instrmt_77_set.insert("EncodedSecurityDesc_t_119541693");
    Instrmt_77.add_attribute("Pool", "Pool_t_1285168692"); // 1
    Instrmt_77_set.insert("Pool_t_1285168692");
    Instrmt_77.add_attribute("CSetMo", "1391667854"); // 1
    Instrmt_77_set.insert("1391667854");
    Instrmt_77.add_attribute("CPPgm", "2"); // 1
    Instrmt_77_set.insert("2");
    Instrmt_77.add_attribute("CPRegT", "CPRegType_t_402907564"); // 1
    Instrmt_77_set.insert("CPRegType_t_402907564");
    Instrmt_77.add_attribute("Dated", "DatedDate_t_836908194"); // 1
    Instrmt_77_set.insert("DatedDate_t_836908194");
    Instrmt_77.add_attribute("IntAcrl", "InterestAccrualDate_t_1992010187"); // 1
    Instrmt_77_set.insert("InterestAccrualDate_t_1992010187");
    all_values.push_back(Instrmt_77_set);
    all_compo_names.insert("Instrmt_77_set");

    {
      xml_element AID_80{"AID"};
      multiset<string> AID_80_set;
      AID_80.add_attribute("AltID", "SecurityAltID_t_682198283"); // 2
      AID_80_set.insert("SecurityAltID_t_682198283");
      AID_80.add_attribute("AltIDSrc", "B"); // 2
      AID_80_set.insert("B");
      all_values.push_back(AID_80_set);
      all_compo_names.insert("AID_80_set");

      Instrmt_77.add_element(AID_80);
    }
    {
      xml_element SecXML_80{"SecXML"};
      multiset<string> SecXML_80_set;
      SecXML_80.add_attribute("Schema", "SecurityXMLSchema_t_1758815554"); // 2
      SecXML_80_set.insert("SecurityXMLSchema_t_1758815554");
      all_values.push_back(SecXML_80_set);
      all_compo_names.insert("SecXML_80_set");

      Instrmt_77.add_element(SecXML_80);
    }
    {
      xml_element Evnt_80{"Evnt"};
      multiset<string> Evnt_80_set;
      Evnt_80.add_attribute("EventTyp", "15"); // 2
      Evnt_80_set.insert("15");
      Evnt_80.add_attribute("Dt", "EventDate_t_1934482276"); // 2
      Evnt_80_set.insert("EventDate_t_1934482276");
      Evnt_80.add_attribute("Tm", "EventTime_t_1821649583"); // 2
      Evnt_80_set.insert("EventTime_t_1821649583");
      Evnt_80.add_attribute("Px", "18052380.060000"); // 2
      Evnt_80_set.insert("18052380.060000");
      Evnt_80.add_attribute("Txt", "EventText_t_131693598"); // 2
      Evnt_80_set.insert("EventText_t_131693598");
      all_values.push_back(Evnt_80_set);
      all_compo_names.insert("Evnt_80_set");

      Instrmt_77.add_element(Evnt_80);
    }
    {
      xml_element Pty_411{"Pty"};
      multiset<string> Pty_411_set;
      Pty_411.add_attribute("ID", "InstrumentPartyID_t_1301605417"); // 2
      Pty_411_set.insert("InstrumentPartyID_t_1301605417");
      Pty_411.add_attribute("Src", "2"); // 2
      Pty_411_set.insert("2");
      Pty_411.add_attribute("R", "80"); // 2
      Pty_411_set.insert("80");
      all_values.push_back(Pty_411_set);
      all_compo_names.insert("Pty_411_set");

      {
        xml_element Sub_411{"Sub"};
        multiset<string> Sub_411_set;
        Sub_411.add_attribute("ID", "InstrumentPartySubID_t_698092389"); // 3
        Sub_411_set.insert("InstrumentPartySubID_t_698092389");
        Sub_411.add_attribute("Typ", "21"); // 3
        Sub_411_set.insert("21");
        all_values.push_back(Sub_411_set);
        all_compo_names.insert("Sub_411_set");

        Pty_411.add_element(Sub_411);
      }
      Instrmt_77.add_element(Pty_411);
    }
    {
      xml_element CmplxEvnt_77{"CmplxEvnt"};
      multiset<string> CmplxEvnt_77_set;
      CmplxEvnt_77.add_attribute("Typ", "4"); // 2
      CmplxEvnt_77_set.insert("4");
      CmplxEvnt_77.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_607661599"); // 2
      CmplxEvnt_77_set.insert("ComplexOptPayoutAmount_t_607661599");
      CmplxEvnt_77.add_attribute("Px", "6168365.080000"); // 2
      CmplxEvnt_77_set.insert("6168365.080000");
      CmplxEvnt_77.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_77_set.insert("4");
      CmplxEvnt_77.add_attribute("PxBndryPrcsn", "15315797.980000"); // 2
      CmplxEvnt_77_set.insert("15315797.980000");
      CmplxEvnt_77.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_77_set.insert("1");
      CmplxEvnt_77.add_attribute("Cond", "2"); // 2
      CmplxEvnt_77_set.insert("2");
      all_values.push_back(CmplxEvnt_77_set);
      all_compo_names.insert("CmplxEvnt_77_set");

      {
        xml_element EvntDts_77{"EvntDts"};
        multiset<string> EvntDts_77_set;
        EvntDts_77.add_attribute("StartDt", "ComplexEventStartDate_t_747941969"); // 3
        EvntDts_77_set.insert("ComplexEventStartDate_t_747941969");
        EvntDts_77.add_attribute("EndDt", "ComplexEventEndDate_t_78515036"); // 3
        EvntDts_77_set.insert("ComplexEventEndDate_t_78515036");
        all_values.push_back(EvntDts_77_set);
        all_compo_names.insert("EvntDts_77_set");

        {
          xml_element EvntTms_77{"EvntTms"};
          multiset<string> EvntTms_77_set;
          EvntTms_77.add_attribute("StartTm", "1696208575"); // 4
          EvntTms_77_set.insert("1696208575");
          EvntTms_77.add_attribute("EndTm", "57316402"); // 4
          EvntTms_77_set.insert("57316402");
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
    xml_element InstrmtExt_12{"InstrmtExt"};
    multiset<string> InstrmtExt_12_set;
    InstrmtExt_12.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_12_set.insert("2");
    InstrmtExt_12.add_attribute("PctAtRisk", "8338936.200000"); // 1
    InstrmtExt_12_set.insert("8338936.200000");
    all_values.push_back(InstrmtExt_12_set);
    all_compo_names.insert("InstrmtExt_12_set");

    {
      xml_element Attrb_21{"Attrb"};
      multiset<string> Attrb_21_set;
      Attrb_21.add_attribute("Typ", "15"); // 2
      Attrb_21_set.insert("15");
      Attrb_21.add_attribute("Val", "InstrAttribValue_t_658826733"); // 2
      Attrb_21_set.insert("InstrAttribValue_t_658826733");
      all_values.push_back(Attrb_21_set);
      all_compo_names.insert("Attrb_21_set");

      InstrmtExt_12.add_element(Attrb_21);
    }
    elt.add_element(InstrmtExt_12);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_28{"FinDetls"};
    multiset<string> FinDetls_28_set;
    FinDetls_28.add_attribute("AgmtDesc", "AgreementDesc_t_1236801184"); // 1
    FinDetls_28_set.insert("AgreementDesc_t_1236801184");
    FinDetls_28.add_attribute("AgmtID", "AgreementID_t_138408803"); // 1
    FinDetls_28_set.insert("AgreementID_t_138408803");
    FinDetls_28.add_attribute("AgmtDt", "AgreementDate_t_503353273"); // 1
    FinDetls_28_set.insert("AgreementDate_t_503353273");
    FinDetls_28.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_28_set.insert("CAN");
    FinDetls_28.add_attribute("TrmTyp", "4"); // 1
    FinDetls_28_set.insert("4");
    FinDetls_28.add_attribute("StartDt", "StartDate_t_842111894"); // 1
    FinDetls_28_set.insert("StartDate_t_842111894");
    FinDetls_28.add_attribute("EndDt", "EndDate_t_1275981787"); // 1
    FinDetls_28_set.insert("EndDate_t_1275981787");
    FinDetls_28.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_28_set.insert("3");
    FinDetls_28.add_attribute("MgnRatio", "4998662.520000"); // 1
    FinDetls_28_set.insert("4998662.520000");
    all_values.push_back(FinDetls_28_set);
    all_compo_names.insert("FinDetls_28_set");

    elt.add_element(FinDetls_28);
  } // end FinDetls
  { // Undly
    xml_element Undly_110{"Undly"};
    multiset<string> Undly_110_set;
    Undly_110.add_attribute("Sym", "UnderlyingSymbol_t_1090456532"); // 1
    Undly_110_set.insert("UnderlyingSymbol_t_1090456532");
    Undly_110.add_attribute("Sfx", "WI"); // 1
    Undly_110_set.insert("WI");
    Undly_110.add_attribute("ID", "UnderlyingSecurityID_t_611635895"); // 1
    Undly_110_set.insert("UnderlyingSecurityID_t_611635895");
    Undly_110.add_attribute("Src", "6"); // 1
    Undly_110_set.insert("6");
    Undly_110.add_attribute("Prod", "2"); // 1
    Undly_110_set.insert("2");
    Undly_110.add_attribute("CFI", "UnderlyingCFICode_t_1739370071"); // 1
    Undly_110_set.insert("UnderlyingCFICode_t_1739370071");
    Undly_110.add_attribute("SecTyp", "IRS"); // 1
    Undly_110_set.insert("IRS");
    Undly_110.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1772734282"); // 1
    Undly_110_set.insert("UnderlyingSecuritySubType_t_1772734282");
    Undly_110.add_attribute("MMY", "1800312654"); // 1
    Undly_110_set.insert("1800312654");
    Undly_110.add_attribute("Mat", "UnderlyingMaturityDate_t_1780306670"); // 1
    Undly_110_set.insert("UnderlyingMaturityDate_t_1780306670");
    Undly_110.add_attribute("MatTm", "230557994"); // 1
    Undly_110_set.insert("230557994");
    Undly_110.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_858875713"); // 1
    Undly_110_set.insert("UnderlyingCouponPaymentDate_t_858875713");
    Undly_110.add_attribute("RestrctTyp", "XR"); // 1
    Undly_110_set.insert("XR");
    Undly_110.add_attribute("Snrty", "SB"); // 1
    Undly_110_set.insert("SB");
    Undly_110.add_attribute("NotlPctOut", "4076006.410000"); // 1
    Undly_110_set.insert("4076006.410000");
    Undly_110.add_attribute("OrigNotlPctOut", "4380813.930000"); // 1
    Undly_110_set.insert("4380813.930000");
    Undly_110.add_attribute("AttchPnt", "5071297.600000"); // 1
    Undly_110_set.insert("5071297.600000");
    Undly_110.add_attribute("DetchPnt", "12414942.610000"); // 1
    Undly_110_set.insert("12414942.610000");
    Undly_110.add_attribute("Issued", "UnderlyingIssueDate_t_1887065650"); // 1
    Undly_110_set.insert("UnderlyingIssueDate_t_1887065650");
    Undly_110.add_attribute("RepoCollSecTyp", "1165956494"); // 1
    Undly_110_set.insert("1165956494");
    Undly_110.add_attribute("RepoTrm", "330811797"); // 1
    Undly_110_set.insert("330811797");
    Undly_110.add_attribute("RepoRt", "20254744.530000"); // 1
    Undly_110_set.insert("20254744.530000");
    Undly_110.add_attribute("Fctr", "16693097.670000"); // 1
    Undly_110_set.insert("16693097.670000");
    Undly_110.add_attribute("CrdRtg", "UnderlyingCreditRating_t_102327616"); // 1
    Undly_110_set.insert("UnderlyingCreditRating_t_102327616");
    Undly_110.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1366973964"); // 1
    Undly_110_set.insert("UnderlyingInstrRegistry_t_1366973964");
    Undly_110.add_attribute("Ctry", "1783994946"); // 1
    Undly_110_set.insert("1783994946");
    Undly_110.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_944439510"); // 1
    Undly_110_set.insert("UnderlyingStateOrProvinceOfIssue_t_944439510");
    Undly_110.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_495472103"); // 1
    Undly_110_set.insert("UnderlyingLocaleOfIssue_t_495472103");
    Undly_110.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1572846061"); // 1
    Undly_110_set.insert("UnderlyingRedemptionDate_t_1572846061");
    Undly_110.add_attribute("StrkPx", "14443057.620000"); // 1
    Undly_110_set.insert("14443057.620000");
    Undly_110.add_attribute("StrkCcy", "EUR"); // 1
    Undly_110_set.insert("EUR");
    Undly_110.add_attribute("OptA", "2086487738"); // 1
    Undly_110_set.insert("2086487738");
    Undly_110.add_attribute("Mult", "3672997.360000"); // 1
    Undly_110_set.insert("3672997.360000");
    Undly_110.add_attribute("MultTyp", "1"); // 1
    Undly_110_set.insert("1");
    Undly_110.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_110_set.insert("4");
    Undly_110.add_attribute("UOM", "USD"); // 1
    Undly_110_set.insert("USD");
    Undly_110.add_attribute("UOMQty", "4056110.900000"); // 1
    Undly_110_set.insert("4056110.900000");
    Undly_110.add_attribute("PxUOM", "MWh"); // 1
    Undly_110_set.insert("MWh");
    Undly_110.add_attribute("PxUOMQty", "17594988.140000"); // 1
    Undly_110_set.insert("17594988.140000");
    Undly_110.add_attribute("TmUnit", "D"); // 1
    Undly_110_set.insert("D");
    Undly_110.add_attribute("ExerStyle", "2"); // 1
    Undly_110_set.insert("2");
    Undly_110.add_attribute("CpnRt", "4708908.800000"); // 1
    Undly_110_set.insert("4708908.800000");
    Undly_110.add_attribute("Exch", "UnderlyingSecurityExchange_t_419199104"); // 1
    Undly_110_set.insert("UnderlyingSecurityExchange_t_419199104");
    Undly_110.add_attribute("Issr", "UnderlyingIssuer_t_1259783524"); // 1
    Undly_110_set.insert("UnderlyingIssuer_t_1259783524");
    Undly_110.add_attribute("EncUndIssrLen", "878491521"); // 1
    Undly_110_set.insert("878491521");
    Undly_110.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_857280497"); // 1
    Undly_110_set.insert("EncodedUnderlyingIssuer_t_857280497");
    Undly_110.add_attribute("Desc", "UnderlyingSecurityDesc_t_1766913284"); // 1
    Undly_110_set.insert("UnderlyingSecurityDesc_t_1766913284");
    Undly_110.add_attribute("EncUndSecDescLen", "2119985782"); // 1
    Undly_110_set.insert("2119985782");
    Undly_110.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_596862499"); // 1
    Undly_110_set.insert("EncodedUnderlyingSecurityDesc_t_596862499");
    Undly_110.add_attribute("CPPgm", "UnderlyingCPProgram_t_785386130"); // 1
    Undly_110_set.insert("UnderlyingCPProgram_t_785386130");
    Undly_110.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_303313931"); // 1
    Undly_110_set.insert("UnderlyingCPRegType_t_303313931");
    Undly_110.add_attribute("AllocPct", "4748533.040000"); // 1
    Undly_110_set.insert("4748533.040000");
    Undly_110.add_attribute("Ccy", "CHF"); // 1
    Undly_110_set.insert("CHF");
    Undly_110.add_attribute("Qty", "18418272.680000"); // 1
    Undly_110_set.insert("18418272.680000");
    Undly_110.add_attribute("SettlTyp", "4"); // 1
    Undly_110_set.insert("4");
    Undly_110.add_attribute("CashAmt", "UnderlyingCashAmount_t_1350081057"); // 1
    Undly_110_set.insert("UnderlyingCashAmount_t_1350081057");
    Undly_110.add_attribute("CashTyp", "FIXED"); // 1
    Undly_110_set.insert("FIXED");
    Undly_110.add_attribute("Px", "15165696.090000"); // 1
    Undly_110_set.insert("15165696.090000");
    Undly_110.add_attribute("DirtPx", "6469031.710000"); // 1
    Undly_110_set.insert("6469031.710000");
    Undly_110.add_attribute("EndPx", "20929632.130000"); // 1
    Undly_110_set.insert("20929632.130000");
    Undly_110.add_attribute("StartVal", "UnderlyingStartValue_t_2032388555"); // 1
    Undly_110_set.insert("UnderlyingStartValue_t_2032388555");
    Undly_110.add_attribute("CurVal", "UnderlyingCurrentValue_t_585907261"); // 1
    Undly_110_set.insert("UnderlyingCurrentValue_t_585907261");
    Undly_110.add_attribute("EndVal", "UnderlyingEndValue_t_312779301"); // 1
    Undly_110_set.insert("UnderlyingEndValue_t_312779301");
    Undly_110.add_attribute("AdjQty", "417891.250000"); // 1
    Undly_110_set.insert("417891.250000");
    Undly_110.add_attribute("FxRate", "16808091.250000"); // 1
    Undly_110_set.insert("16808091.250000");
    Undly_110.add_attribute("FxRateCalc", "D"); // 1
    Undly_110_set.insert("D");
    Undly_110.add_attribute("CapValu", "UnderlyingCapValue_t_447400216"); // 1
    Undly_110_set.insert("UnderlyingCapValue_t_447400216");
    Undly_110.add_attribute("SetMeth", "UnderlyingSettlMethod_t_253477976"); // 1
    Undly_110_set.insert("UnderlyingSettlMethod_t_253477976");
    Undly_110.add_attribute("PutCall", "2031464276"); // 1
    Undly_110_set.insert("2031464276");
    all_values.push_back(Undly_110_set);
    all_compo_names.insert("Undly_110_set");

    {
      xml_element UndAID_110{"UndAID"};
      multiset<string> UndAID_110_set;
      UndAID_110.add_attribute("AltID", "UnderlyingSecurityAltID_t_485834328"); // 2
      UndAID_110_set.insert("UnderlyingSecurityAltID_t_485834328");
      UndAID_110.add_attribute("AltIDSrc", "C"); // 2
      UndAID_110_set.insert("C");
      all_values.push_back(UndAID_110_set);
      all_compo_names.insert("UndAID_110_set");

      Undly_110.add_element(UndAID_110);
    }
    {
      xml_element Stip_173{"Stip"};
      multiset<string> Stip_173_set;
      Stip_173.add_attribute("Typ", "AVAILQTY"); // 2
      Stip_173_set.insert("AVAILQTY");
      Stip_173.add_attribute("Val", "UnderlyingStipValue_t_905033432"); // 2
      Stip_173_set.insert("UnderlyingStipValue_t_905033432");
      all_values.push_back(Stip_173_set);
      all_compo_names.insert("Stip_173_set");

      Undly_110.add_element(Stip_173);
    }
    {
      xml_element Pty_412{"Pty"};
      multiset<string> Pty_412_set;
      Pty_412.add_attribute("ID", "UnderlyingInstrumentPartyID_t_316488345"); // 2
      Pty_412_set.insert("UnderlyingInstrumentPartyID_t_316488345");
      Pty_412.add_attribute("Src", "6"); // 2
      Pty_412_set.insert("6");
      Pty_412.add_attribute("R", "64"); // 2
      Pty_412_set.insert("64");
      all_values.push_back(Pty_412_set);
      all_compo_names.insert("Pty_412_set");

      {
        xml_element Sub_412{"Sub"};
        multiset<string> Sub_412_set;
        Sub_412.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2083401629"); // 3
        Sub_412_set.insert("UnderlyingInstrumentPartySubID_t_2083401629");
        Sub_412.add_attribute("Typ", "3"); // 3
        Sub_412_set.insert("3");
        all_values.push_back(Sub_412_set);
        all_compo_names.insert("Sub_412_set");

        Pty_412.add_element(Sub_412);
      }
      Undly_110.add_element(Pty_412);
    }
    elt.add_element(Undly_110);
  } // end Undly
  { // Undly
    xml_element Undly_111{"Undly"};
    multiset<string> Undly_111_set;
    Undly_111.add_attribute("Sym", "UnderlyingSymbol_t_211692781"); // 1
    Undly_111_set.insert("UnderlyingSymbol_t_211692781");
    Undly_111.add_attribute("Sfx", "CD"); // 1
    Undly_111_set.insert("CD");
    Undly_111.add_attribute("ID", "UnderlyingSecurityID_t_1509179094"); // 1
    Undly_111_set.insert("UnderlyingSecurityID_t_1509179094");
    Undly_111.add_attribute("Src", "7"); // 1
    Undly_111_set.insert("7");
    Undly_111.add_attribute("Prod", "11"); // 1
    Undly_111_set.insert("11");
    Undly_111.add_attribute("CFI", "UnderlyingCFICode_t_1914820641"); // 1
    Undly_111_set.insert("UnderlyingCFICode_t_1914820641");
    Undly_111.add_attribute("SecTyp", "CAMM"); // 1
    Undly_111_set.insert("CAMM");
    Undly_111.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_972239909"); // 1
    Undly_111_set.insert("UnderlyingSecuritySubType_t_972239909");
    Undly_111.add_attribute("MMY", "1117418050"); // 1
    Undly_111_set.insert("1117418050");
    Undly_111.add_attribute("Mat", "UnderlyingMaturityDate_t_570705430"); // 1
    Undly_111_set.insert("UnderlyingMaturityDate_t_570705430");
    Undly_111.add_attribute("MatTm", "341325871"); // 1
    Undly_111_set.insert("341325871");
    Undly_111.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1764321221"); // 1
    Undly_111_set.insert("UnderlyingCouponPaymentDate_t_1764321221");
    Undly_111.add_attribute("RestrctTyp", "XR"); // 1
    Undly_111_set.insert("XR");
    Undly_111.add_attribute("Snrty", "SR"); // 1
    Undly_111_set.insert("SR");
    Undly_111.add_attribute("NotlPctOut", "2027448.350000"); // 1
    Undly_111_set.insert("2027448.350000");
    Undly_111.add_attribute("OrigNotlPctOut", "8289642.970000"); // 1
    Undly_111_set.insert("8289642.970000");
    Undly_111.add_attribute("AttchPnt", "2680199.030000"); // 1
    Undly_111_set.insert("2680199.030000");
    Undly_111.add_attribute("DetchPnt", "18835539.600000"); // 1
    Undly_111_set.insert("18835539.600000");
    Undly_111.add_attribute("Issued", "UnderlyingIssueDate_t_1100929758"); // 1
    Undly_111_set.insert("UnderlyingIssueDate_t_1100929758");
    Undly_111.add_attribute("RepoCollSecTyp", "715420119"); // 1
    Undly_111_set.insert("715420119");
    Undly_111.add_attribute("RepoTrm", "2137031936"); // 1
    Undly_111_set.insert("2137031936");
    Undly_111.add_attribute("RepoRt", "9849103.860000"); // 1
    Undly_111_set.insert("9849103.860000");
    Undly_111.add_attribute("Fctr", "12012544.480000"); // 1
    Undly_111_set.insert("12012544.480000");
    Undly_111.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1193736757"); // 1
    Undly_111_set.insert("UnderlyingCreditRating_t_1193736757");
    Undly_111.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1339781894"); // 1
    Undly_111_set.insert("UnderlyingInstrRegistry_t_1339781894");
    Undly_111.add_attribute("Ctry", "2106287880"); // 1
    Undly_111_set.insert("2106287880");
    Undly_111.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1510225102"); // 1
    Undly_111_set.insert("UnderlyingStateOrProvinceOfIssue_t_1510225102");
    Undly_111.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_425661275"); // 1
    Undly_111_set.insert("UnderlyingLocaleOfIssue_t_425661275");
    Undly_111.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1721118162"); // 1
    Undly_111_set.insert("UnderlyingRedemptionDate_t_1721118162");
    Undly_111.add_attribute("StrkPx", "14461430.840000"); // 1
    Undly_111_set.insert("14461430.840000");
    Undly_111.add_attribute("StrkCcy", "GBP"); // 1
    Undly_111_set.insert("GBP");
    Undly_111.add_attribute("OptA", "19963548"); // 1
    Undly_111_set.insert("19963548");
    Undly_111.add_attribute("Mult", "9932218.840000"); // 1
    Undly_111_set.insert("9932218.840000");
    Undly_111.add_attribute("MultTyp", "1"); // 1
    Undly_111_set.insert("1");
    Undly_111.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_111_set.insert("4");
    Undly_111.add_attribute("UOM", "MWh"); // 1
    Undly_111_set.insert("MWh");
    Undly_111.add_attribute("UOMQty", "8527630.880000"); // 1
    Undly_111_set.insert("8527630.880000");
    Undly_111.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_111_set.insert("MMBtu");
    Undly_111.add_attribute("PxUOMQty", "18779769.270000"); // 1
    Undly_111_set.insert("18779769.270000");
    Undly_111.add_attribute("TmUnit", "Wk"); // 1
    Undly_111_set.insert("Wk");
    Undly_111.add_attribute("ExerStyle", "2"); // 1
    Undly_111_set.insert("2");
    Undly_111.add_attribute("CpnRt", "14948145.010000"); // 1
    Undly_111_set.insert("14948145.010000");
    Undly_111.add_attribute("Exch", "UnderlyingSecurityExchange_t_1939653514"); // 1
    Undly_111_set.insert("UnderlyingSecurityExchange_t_1939653514");
    Undly_111.add_attribute("Issr", "UnderlyingIssuer_t_440792820"); // 1
    Undly_111_set.insert("UnderlyingIssuer_t_440792820");
    Undly_111.add_attribute("EncUndIssrLen", "1697559336"); // 1
    Undly_111_set.insert("1697559336");
    Undly_111.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_621134163"); // 1
    Undly_111_set.insert("EncodedUnderlyingIssuer_t_621134163");
    Undly_111.add_attribute("Desc", "UnderlyingSecurityDesc_t_708812723"); // 1
    Undly_111_set.insert("UnderlyingSecurityDesc_t_708812723");
    Undly_111.add_attribute("EncUndSecDescLen", "1433629648"); // 1
    Undly_111_set.insert("1433629648");
    Undly_111.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1722063922"); // 1
    Undly_111_set.insert("EncodedUnderlyingSecurityDesc_t_1722063922");
    Undly_111.add_attribute("CPPgm", "UnderlyingCPProgram_t_1424232843"); // 1
    Undly_111_set.insert("UnderlyingCPProgram_t_1424232843");
    Undly_111.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1423177937"); // 1
    Undly_111_set.insert("UnderlyingCPRegType_t_1423177937");
    Undly_111.add_attribute("AllocPct", "5594906.600000"); // 1
    Undly_111_set.insert("5594906.600000");
    Undly_111.add_attribute("Ccy", "JPY"); // 1
    Undly_111_set.insert("JPY");
    Undly_111.add_attribute("Qty", "18992725.550000"); // 1
    Undly_111_set.insert("18992725.550000");
    Undly_111.add_attribute("SettlTyp", "2"); // 1
    Undly_111_set.insert("2");
    Undly_111.add_attribute("CashAmt", "UnderlyingCashAmount_t_1979656149"); // 1
    Undly_111_set.insert("UnderlyingCashAmount_t_1979656149");
    Undly_111.add_attribute("CashTyp", "FIXED"); // 1
    Undly_111_set.insert("FIXED");
    Undly_111.add_attribute("Px", "104423.900000"); // 1
    Undly_111_set.insert("104423.900000");
    Undly_111.add_attribute("DirtPx", "12783155.850000"); // 1
    Undly_111_set.insert("12783155.850000");
    Undly_111.add_attribute("EndPx", "18089766.210000"); // 1
    Undly_111_set.insert("18089766.210000");
    Undly_111.add_attribute("StartVal", "UnderlyingStartValue_t_1943253334"); // 1
    Undly_111_set.insert("UnderlyingStartValue_t_1943253334");
    Undly_111.add_attribute("CurVal", "UnderlyingCurrentValue_t_1298279133"); // 1
    Undly_111_set.insert("UnderlyingCurrentValue_t_1298279133");
    Undly_111.add_attribute("EndVal", "UnderlyingEndValue_t_654714857"); // 1
    Undly_111_set.insert("UnderlyingEndValue_t_654714857");
    Undly_111.add_attribute("AdjQty", "2676430.680000"); // 1
    Undly_111_set.insert("2676430.680000");
    Undly_111.add_attribute("FxRate", "1992753.940000"); // 1
    Undly_111_set.insert("1992753.940000");
    Undly_111.add_attribute("FxRateCalc", "D"); // 1
    Undly_111_set.insert("D");
    Undly_111.add_attribute("CapValu", "UnderlyingCapValue_t_1120406156"); // 1
    Undly_111_set.insert("UnderlyingCapValue_t_1120406156");
    Undly_111.add_attribute("SetMeth", "UnderlyingSettlMethod_t_72511565"); // 1
    Undly_111_set.insert("UnderlyingSettlMethod_t_72511565");
    Undly_111.add_attribute("PutCall", "1145767014"); // 1
    Undly_111_set.insert("1145767014");
    all_values.push_back(Undly_111_set);
    all_compo_names.insert("Undly_111_set");

    {
      xml_element UndAID_111{"UndAID"};
      multiset<string> UndAID_111_set;
      UndAID_111.add_attribute("AltID", "UnderlyingSecurityAltID_t_396391027"); // 2
      UndAID_111_set.insert("UnderlyingSecurityAltID_t_396391027");
      UndAID_111.add_attribute("AltIDSrc", "8"); // 2
      UndAID_111_set.insert("8");
      all_values.push_back(UndAID_111_set);
      all_compo_names.insert("UndAID_111_set");

      Undly_111.add_element(UndAID_111);
    }
    {
      xml_element Stip_174{"Stip"};
      multiset<string> Stip_174_set;
      Stip_174.add_attribute("Typ", "MINQTY"); // 2
      Stip_174_set.insert("MINQTY");
      Stip_174.add_attribute("Val", "UnderlyingStipValue_t_188560894"); // 2
      Stip_174_set.insert("UnderlyingStipValue_t_188560894");
      all_values.push_back(Stip_174_set);
      all_compo_names.insert("Stip_174_set");

      Undly_111.add_element(Stip_174);
    }
    {
      xml_element Pty_413{"Pty"};
      multiset<string> Pty_413_set;
      Pty_413.add_attribute("ID", "UnderlyingInstrumentPartyID_t_727866427"); // 2
      Pty_413_set.insert("UnderlyingInstrumentPartyID_t_727866427");
      Pty_413.add_attribute("Src", "G"); // 2
      Pty_413_set.insert("G");
      Pty_413.add_attribute("R", "75"); // 2
      Pty_413_set.insert("75");
      all_values.push_back(Pty_413_set);
      all_compo_names.insert("Pty_413_set");

      {
        xml_element Sub_413{"Sub"};
        multiset<string> Sub_413_set;
        Sub_413.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1436679151"); // 3
        Sub_413_set.insert("UnderlyingInstrumentPartySubID_t_1436679151");
        Sub_413.add_attribute("Typ", "17"); // 3
        Sub_413_set.insert("17");
        all_values.push_back(Sub_413_set);
        all_compo_names.insert("Sub_413_set");

        Pty_413.add_element(Sub_413);
      }
      Undly_111.add_element(Pty_413);
    }
    elt.add_element(Undly_111);
  } // end Undly
  { // Leg
    xml_element Leg_96{"Leg"};
    multiset<string> Leg_96_set;
    Leg_96.add_attribute("Sym", "LegSymbol_t_713428346"); // 1
    Leg_96_set.insert("LegSymbol_t_713428346");
    Leg_96.add_attribute("Sfx", "WI"); // 1
    Leg_96_set.insert("WI");
    Leg_96.add_attribute("ID", "LegSecurityID_t_943765992"); // 1
    Leg_96_set.insert("LegSecurityID_t_943765992");
    Leg_96.add_attribute("Src", "C"); // 1
    Leg_96_set.insert("C");
    Leg_96.add_attribute("Prod", "1"); // 1
    Leg_96_set.insert("1");
    Leg_96.add_attribute("CFI", "LegCFICode_t_695554899"); // 1
    Leg_96_set.insert("LegCFICode_t_695554899");
    Leg_96.add_attribute("SecTyp", "FRN"); // 1
    Leg_96_set.insert("FRN");
    Leg_96.add_attribute("SecSubTyp", "LegSecuritySubType_t_1054101040"); // 1
    Leg_96_set.insert("LegSecuritySubType_t_1054101040");
    Leg_96.add_attribute("MMY", "873005081"); // 1
    Leg_96_set.insert("873005081");
    Leg_96.add_attribute("Mat", "LegMaturityDate_t_1638682254"); // 1
    Leg_96_set.insert("LegMaturityDate_t_1638682254");
    Leg_96.add_attribute("MatTm", "184932977"); // 1
    Leg_96_set.insert("184932977");
    Leg_96.add_attribute("CpnPmt", "LegCouponPaymentDate_t_534498054"); // 1
    Leg_96_set.insert("LegCouponPaymentDate_t_534498054");
    Leg_96.add_attribute("Issued", "LegIssueDate_t_1434451940"); // 1
    Leg_96_set.insert("LegIssueDate_t_1434451940");
    Leg_96.add_attribute("RepoCollSecTyp", "1483212110"); // 1
    Leg_96_set.insert("1483212110");
    Leg_96.add_attribute("RepoTrm", "1189212912"); // 1
    Leg_96_set.insert("1189212912");
    Leg_96.add_attribute("RepoRt", "17020950.080000"); // 1
    Leg_96_set.insert("17020950.080000");
    Leg_96.add_attribute("Fctr", "16824875.050000"); // 1
    Leg_96_set.insert("16824875.050000");
    Leg_96.add_attribute("CrdRtg", "LegCreditRating_t_457002999"); // 1
    Leg_96_set.insert("LegCreditRating_t_457002999");
    Leg_96.add_attribute("Rgstry", "LegInstrRegistry_t_675017517"); // 1
    Leg_96_set.insert("LegInstrRegistry_t_675017517");
    Leg_96.add_attribute("Ctry", "1754999070"); // 1
    Leg_96_set.insert("1754999070");
    Leg_96.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1602770013"); // 1
    Leg_96_set.insert("LegStateOrProvinceOfIssue_t_1602770013");
    Leg_96.add_attribute("Lcl", "LegLocaleOfIssue_t_1071408544"); // 1
    Leg_96_set.insert("LegLocaleOfIssue_t_1071408544");
    Leg_96.add_attribute("Redeem", "LegRedemptionDate_t_2042072678"); // 1
    Leg_96_set.insert("LegRedemptionDate_t_2042072678");
    Leg_96.add_attribute("Strk", "20958678.810000"); // 1
    Leg_96_set.insert("20958678.810000");
    Leg_96.add_attribute("StrkCcy", "EUR"); // 1
    Leg_96_set.insert("EUR");
    Leg_96.add_attribute("OptA", "2139041436"); // 1
    Leg_96_set.insert("2139041436");
    Leg_96.add_attribute("Cmult", "20696644.960000"); // 1
    Leg_96_set.insert("20696644.960000");
    Leg_96.add_attribute("MultTyp", "2"); // 1
    Leg_96_set.insert("2");
    Leg_96.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_96_set.insert("2");
    Leg_96.add_attribute("UOM", "Gal"); // 1
    Leg_96_set.insert("Gal");
    Leg_96.add_attribute("UOMQty", "6250793.060000"); // 1
    Leg_96_set.insert("6250793.060000");
    Leg_96.add_attribute("PxUOM", "Gal"); // 1
    Leg_96_set.insert("Gal");
    Leg_96.add_attribute("PxUOMQty", "12502221.710000"); // 1
    Leg_96_set.insert("12502221.710000");
    Leg_96.add_attribute("TmUnit", "Wk"); // 1
    Leg_96_set.insert("Wk");
    Leg_96.add_attribute("ExerStyle", "1"); // 1
    Leg_96_set.insert("1");
    Leg_96.add_attribute("CpnRt", "19457770.700000"); // 1
    Leg_96_set.insert("19457770.700000");
    Leg_96.add_attribute("Exch", "LegSecurityExchange_t_1297267512"); // 1
    Leg_96_set.insert("LegSecurityExchange_t_1297267512");
    Leg_96.add_attribute("Issr", "LegIssuer_t_201920769"); // 1
    Leg_96_set.insert("LegIssuer_t_201920769");
    Leg_96.add_attribute("EncLegIssrLen", "671298504"); // 1
    Leg_96_set.insert("671298504");
    Leg_96.add_attribute("EncLegIssr", "EncodedLegIssuer_t_788466118"); // 1
    Leg_96_set.insert("EncodedLegIssuer_t_788466118");
    Leg_96.add_attribute("Desc", "LegSecurityDesc_t_386853747"); // 1
    Leg_96_set.insert("LegSecurityDesc_t_386853747");
    Leg_96.add_attribute("EncLegSecDescLen", "1205796558"); // 1
    Leg_96_set.insert("1205796558");
    Leg_96.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_75434411"); // 1
    Leg_96_set.insert("EncodedLegSecurityDesc_t_75434411");
    Leg_96.add_attribute("RatioQty", "18700658.570000"); // 1
    Leg_96_set.insert("18700658.570000");
    Leg_96.add_attribute("Side", "F"); // 1
    Leg_96_set.insert("F");
    Leg_96.add_attribute("Ccy", "JPY"); // 1
    Leg_96_set.insert("JPY");
    Leg_96.add_attribute("Pool", "LegPool_t_704528821"); // 1
    Leg_96_set.insert("LegPool_t_704528821");
    Leg_96.add_attribute("Dated", "LegDatedDate_t_305063288"); // 1
    Leg_96_set.insert("LegDatedDate_t_305063288");
    Leg_96.add_attribute("CSetMo", "1012585137"); // 1
    Leg_96_set.insert("1012585137");
    Leg_96.add_attribute("IntAcrl", "LegInterestAccrualDate_t_159815187"); // 1
    Leg_96_set.insert("LegInterestAccrualDate_t_159815187");
    Leg_96.add_attribute("PutCall", "1376471833"); // 1
    Leg_96_set.insert("1376471833");
    Leg_96.add_attribute("LegOptionRatio", "9071741.670000"); // 1
    Leg_96_set.insert("9071741.670000");
    Leg_96.add_attribute("Px", "1081994.200000"); // 1
    Leg_96_set.insert("1081994.200000");
    all_values.push_back(Leg_96_set);
    all_compo_names.insert("Leg_96_set");

    {
      xml_element LegAID_91{"LegAID"};
      multiset<string> LegAID_91_set;
      LegAID_91.add_attribute("SecAltID", "LegSecurityAltID_t_488957623"); // 2
      LegAID_91_set.insert("LegSecurityAltID_t_488957623");
      LegAID_91.add_attribute("SecAltIDSrc", "7"); // 2
      LegAID_91_set.insert("7");
      all_values.push_back(LegAID_91_set);
      all_compo_names.insert("LegAID_91_set");

      Leg_96.add_element(LegAID_91);
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
