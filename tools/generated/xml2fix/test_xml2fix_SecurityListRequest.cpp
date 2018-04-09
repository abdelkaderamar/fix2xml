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
  elt.add_attribute("ReqID", "SecurityReqID_t_1096151331"); // 0
  SecurityListRequest_message_t_0.insert("SecurityReqID_t_1096151331");
  elt.add_attribute("ListReqTyp", "2"); // 0
  SecurityListRequest_message_t_0.insert("2");
  elt.add_attribute("ListID", "SecurityListID_t_567558287"); // 0
  SecurityListRequest_message_t_0.insert("SecurityListID_t_567558287");
  elt.add_attribute("ListTyp", "4"); // 0
  SecurityListRequest_message_t_0.insert("4");
  elt.add_attribute("LstTypSrc", "1"); // 0
  SecurityListRequest_message_t_0.insert("1");
  elt.add_attribute("MktID", "MarketID_t_985777870"); // 0
  SecurityListRequest_message_t_0.insert("MarketID_t_985777870");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1838729182"); // 0
  SecurityListRequest_message_t_0.insert("MarketSegmentID_t_1838729182");
  elt.add_attribute("Ccy", "CAN"); // 0
  SecurityListRequest_message_t_0.insert("CAN");
  elt.add_attribute("Txt", "Text_t_384749583"); // 0
  SecurityListRequest_message_t_0.insert("Text_t_384749583");
  elt.add_attribute("EncTxtLen", "518286119"); // 0
  SecurityListRequest_message_t_0.insert("518286119");
  elt.add_attribute("EncTxt", "EncodedText_t_765298978"); // 0
  SecurityListRequest_message_t_0.insert("EncodedText_t_765298978");
  elt.add_attribute("SesID", "4"); // 0
  SecurityListRequest_message_t_0.insert("4");
  elt.add_attribute("SesSub", "6"); // 0
  SecurityListRequest_message_t_0.insert("6");
  elt.add_attribute("SubReqTyp", "1"); // 0
  SecurityListRequest_message_t_0.insert("1");
  all_values.push_back(SecurityListRequest_message_t_0);
  all_compo_names.insert("SecurityListRequest_message_t");

  { // Hdr
    xml_element Hdr_84{"Hdr"};
    multiset<string> Hdr_84_set;
    Hdr_84.add_attribute("SeqNum", "1712464681"); // 1
    Hdr_84_set.insert("1712464681");
    Hdr_84.add_attribute("SID", "SenderCompID_t_1202789109"); // 1
    Hdr_84_set.insert("SenderCompID_t_1202789109");
    Hdr_84.add_attribute("TID", "TargetCompID_t_794776052"); // 1
    Hdr_84_set.insert("TargetCompID_t_794776052");
    Hdr_84.add_attribute("OBID", "OnBehalfOfCompID_t_217302128"); // 1
    Hdr_84_set.insert("OnBehalfOfCompID_t_217302128");
    Hdr_84.add_attribute("D2ID", "DeliverToCompID_t_1436371529"); // 1
    Hdr_84_set.insert("DeliverToCompID_t_1436371529");
    Hdr_84.add_attribute("SSub", "SenderSubID_t_312139195"); // 1
    Hdr_84_set.insert("SenderSubID_t_312139195");
    Hdr_84.add_attribute("SLoc", "SenderLocationID_t_1572199311"); // 1
    Hdr_84_set.insert("SenderLocationID_t_1572199311");
    Hdr_84.add_attribute("TSub", "TargetSubID_t_1913590002"); // 1
    Hdr_84_set.insert("TargetSubID_t_1913590002");
    Hdr_84.add_attribute("TLoc", "TargetLocationID_t_222094444"); // 1
    Hdr_84_set.insert("TargetLocationID_t_222094444");
    Hdr_84.add_attribute("OBSub", "OnBehalfOfSubID_t_697301285"); // 1
    Hdr_84_set.insert("OnBehalfOfSubID_t_697301285");
    Hdr_84.add_attribute("OBLoc", "OnBehalfOfLocationID_t_331496208"); // 1
    Hdr_84_set.insert("OnBehalfOfLocationID_t_331496208");
    Hdr_84.add_attribute("D2Sub", "DeliverToSubID_t_960297422"); // 1
    Hdr_84_set.insert("DeliverToSubID_t_960297422");
    Hdr_84.add_attribute("D2Loc", "DeliverToLocationID_t_887113332"); // 1
    Hdr_84_set.insert("DeliverToLocationID_t_887113332");
    Hdr_84.add_attribute("PosDup", "N"); // 1
    Hdr_84_set.insert("N");
    Hdr_84.add_attribute("PosRsnd", "N"); // 1
    Hdr_84_set.insert("N");
    Hdr_84.add_attribute("Snt", "SendingTime_t_1069557654"); // 1
    Hdr_84_set.insert("SendingTime_t_1069557654");
    Hdr_84.add_attribute("OrigSnt", "OrigSendingTime_t_1635486655"); // 1
    Hdr_84_set.insert("OrigSendingTime_t_1635486655");
    Hdr_84.add_attribute("MsgEncd", "MessageEncoding_t_2041408090"); // 1
    Hdr_84_set.insert("MessageEncoding_t_2041408090");
    all_values.push_back(Hdr_84_set);
    all_compo_names.insert("Hdr_84_set");

    {
      xml_element Hop_84{"Hop"};
      multiset<string> Hop_84_set;
      Hop_84.add_attribute("ID", "HopCompID_t_1637115941"); // 2
      Hop_84_set.insert("HopCompID_t_1637115941");
      Hop_84.add_attribute("Ref", "499654034"); // 2
      Hop_84_set.insert("499654034");
      Hop_84.add_attribute("Snt", "HopSendingTime_t_160706588"); // 2
      Hop_84_set.insert("HopSendingTime_t_160706588");
      all_values.push_back(Hop_84_set);
      all_compo_names.insert("Hop_84_set");

      Hdr_84.add_element(Hop_84);
    }
    elt.add_element(Hdr_84);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_72{"Instrmt"};
    multiset<string> Instrmt_72_set;
    Instrmt_72.add_attribute("Sym", "Symbol_t_475410163"); // 1
    Instrmt_72_set.insert("Symbol_t_475410163");
    Instrmt_72.add_attribute("Sfx", "WI"); // 1
    Instrmt_72_set.insert("WI");
    Instrmt_72.add_attribute("ID", "SecurityID_t_1844234477"); // 1
    Instrmt_72_set.insert("SecurityID_t_1844234477");
    Instrmt_72.add_attribute("Src", "3"); // 1
    Instrmt_72_set.insert("3");
    Instrmt_72.add_attribute("Prod", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("ProdCmplx", "ProductComplex_t_215036949"); // 1
    Instrmt_72_set.insert("ProductComplex_t_215036949");
    Instrmt_72.add_attribute("SecGrp", "SecurityGroup_t_1241923415"); // 1
    Instrmt_72_set.insert("SecurityGroup_t_1241923415");
    Instrmt_72.add_attribute("CFI", "CFICode_t_826959875"); // 1
    Instrmt_72_set.insert("CFICode_t_826959875");
    Instrmt_72.add_attribute("SecTyp", "WAR"); // 1
    Instrmt_72_set.insert("WAR");
    Instrmt_72.add_attribute("SubTyp", "SecuritySubType_t_57333979"); // 1
    Instrmt_72_set.insert("SecuritySubType_t_57333979");
    Instrmt_72.add_attribute("MMY", "391940908"); // 1
    Instrmt_72_set.insert("391940908");
    Instrmt_72.add_attribute("MatDt", "MaturityDate_t_418025364"); // 1
    Instrmt_72_set.insert("MaturityDate_t_418025364");
    Instrmt_72.add_attribute("MatTm", "852110031"); // 1
    Instrmt_72_set.insert("852110031");
    Instrmt_72.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_609243036"); // 1
    Instrmt_72_set.insert("SettleOnOpenFlag_t_609243036");
    Instrmt_72.add_attribute("AsgnMeth", "1854396893"); // 1
    Instrmt_72_set.insert("1854396893");
    Instrmt_72.add_attribute("Status", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("CpnPmt", "CouponPaymentDate_t_33958699"); // 1
    Instrmt_72_set.insert("CouponPaymentDate_t_33958699");
    Instrmt_72.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_72_set.insert("XR");
    Instrmt_72.add_attribute("Snrty", "SB"); // 1
    Instrmt_72_set.insert("SB");
    Instrmt_72.add_attribute("NotlPctOut", "7312599.840000"); // 1
    Instrmt_72_set.insert("7312599.840000");
    Instrmt_72.add_attribute("OrigNotlPctOut", "19519994.550000"); // 1
    Instrmt_72_set.insert("19519994.550000");
    Instrmt_72.add_attribute("AttchPnt", "1991574.440000"); // 1
    Instrmt_72_set.insert("1991574.440000");
    Instrmt_72.add_attribute("DetchPnt", "16183733.170000"); // 1
    Instrmt_72_set.insert("16183733.170000");
    Instrmt_72.add_attribute("Issued", "IssueDate_t_343851131"); // 1
    Instrmt_72_set.insert("IssueDate_t_343851131");
    Instrmt_72.add_attribute("RepoCollSecTyp", "2130972028"); // 1
    Instrmt_72_set.insert("2130972028");
    Instrmt_72.add_attribute("RepoTrm", "540447323"); // 1
    Instrmt_72_set.insert("540447323");
    Instrmt_72.add_attribute("RepoRt", "19793377.870000"); // 1
    Instrmt_72_set.insert("19793377.870000");
    Instrmt_72.add_attribute("Fctr", "20248964.710000"); // 1
    Instrmt_72_set.insert("20248964.710000");
    Instrmt_72.add_attribute("CrdRtg", "CreditRating_t_30079617"); // 1
    Instrmt_72_set.insert("CreditRating_t_30079617");
    Instrmt_72.add_attribute("Rgstry", "InstrRegistry_t_331508173"); // 1
    Instrmt_72_set.insert("InstrRegistry_t_331508173");
    Instrmt_72.add_attribute("IssuCtry", "38119411"); // 1
    Instrmt_72_set.insert("38119411");
    Instrmt_72.add_attribute("StPrv", "StateOrProvinceOfIssue_t_505489780"); // 1
    Instrmt_72_set.insert("StateOrProvinceOfIssue_t_505489780");
    Instrmt_72.add_attribute("Lcl", "LocaleOfIssue_t_522407742"); // 1
    Instrmt_72_set.insert("LocaleOfIssue_t_522407742");
    Instrmt_72.add_attribute("Redeem", "RedemptionDate_t_1882353889"); // 1
    Instrmt_72_set.insert("RedemptionDate_t_1882353889");
    Instrmt_72.add_attribute("StrkPx", "9821142.170000"); // 1
    Instrmt_72_set.insert("9821142.170000");
    Instrmt_72.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_72_set.insert("JPY");
    Instrmt_72.add_attribute("StrkMult", "765539.840000"); // 1
    Instrmt_72_set.insert("765539.840000");
    Instrmt_72.add_attribute("StrkValu", "19250167.700000"); // 1
    Instrmt_72_set.insert("19250167.700000");
    Instrmt_72.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_72_set.insert("4");
    Instrmt_72.add_attribute("StrkPxBndryPrcsn", "1694740.310000"); // 1
    Instrmt_72_set.insert("1694740.310000");
    Instrmt_72.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("OptAt", "985997994"); // 1
    Instrmt_72_set.insert("985997994");
    Instrmt_72.add_attribute("Mult", "7787170.670000"); // 1
    Instrmt_72_set.insert("7787170.670000");
    Instrmt_72.add_attribute("MultTyp", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("MinPxIncr", "8126757.670000"); // 1
    Instrmt_72_set.insert("8126757.670000");
    Instrmt_72.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_910585301"); // 1
    Instrmt_72_set.insert("MinPriceIncrementAmount_t_910585301");
    Instrmt_72.add_attribute("UOM", "Gal"); // 1
    Instrmt_72_set.insert("Gal");
    Instrmt_72.add_attribute("UOMQty", "15439357.510000"); // 1
    Instrmt_72_set.insert("15439357.510000");
    Instrmt_72.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_72_set.insert("lbs");
    Instrmt_72.add_attribute("PxUOMQty", "15882646.860000"); // 1
    Instrmt_72_set.insert("15882646.860000");
    Instrmt_72.add_attribute("SettlMeth", "C"); // 1
    Instrmt_72_set.insert("C");
    Instrmt_72.add_attribute("ExerStyle", "0"); // 1
    Instrmt_72_set.insert("0");
    Instrmt_72.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_72_set.insert("3");
    Instrmt_72.add_attribute("OptPayAmt", "OptPayoutAmount_t_1555272744"); // 1
    Instrmt_72_set.insert("OptPayoutAmount_t_1555272744");
    Instrmt_72.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_72_set.insert("PCTPAR");
    Instrmt_72.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_72_set.insert("CDSD");
    Instrmt_72.add_attribute("ListMeth", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("CapPx", "12223145.520000"); // 1
    Instrmt_72_set.insert("12223145.520000");
    Instrmt_72.add_attribute("FlrPx", "14872853.010000"); // 1
    Instrmt_72_set.insert("14872853.010000");
    Instrmt_72.add_attribute("PutCall", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("FlexInd", "false"); // 1
    Instrmt_72_set.insert("false");
    Instrmt_72.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_72_set.insert("true");
    Instrmt_72.add_attribute("TmUnit", "Min"); // 1
    Instrmt_72_set.insert("Min");
    Instrmt_72.add_attribute("CpnRt", "6952955.420000"); // 1
    Instrmt_72_set.insert("6952955.420000");
    Instrmt_72.add_attribute("Exch", "SecurityExchange_t_1172062732"); // 1
    Instrmt_72_set.insert("SecurityExchange_t_1172062732");
    Instrmt_72.add_attribute("PosLmt", "1002026694"); // 1
    Instrmt_72_set.insert("1002026694");
    Instrmt_72.add_attribute("NTPosLmt", "472828664"); // 1
    Instrmt_72_set.insert("472828664");
    Instrmt_72.add_attribute("Issr", "Issuer_t_337206177"); // 1
    Instrmt_72_set.insert("Issuer_t_337206177");
    Instrmt_72.add_attribute("EncIssrLen", "1135914657"); // 1
    Instrmt_72_set.insert("1135914657");
    Instrmt_72.add_attribute("EncIssr", "EncodedIssuer_t_642302695"); // 1
    Instrmt_72_set.insert("EncodedIssuer_t_642302695");
    Instrmt_72.add_attribute("Desc", "SecurityDesc_t_2067858634"); // 1
    Instrmt_72_set.insert("SecurityDesc_t_2067858634");
    Instrmt_72.add_attribute("EncSecDescLen", "2121912651"); // 1
    Instrmt_72_set.insert("2121912651");
    Instrmt_72.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1421019763"); // 1
    Instrmt_72_set.insert("EncodedSecurityDesc_t_1421019763");
    Instrmt_72.add_attribute("Pool", "Pool_t_1357940688"); // 1
    Instrmt_72_set.insert("Pool_t_1357940688");
    Instrmt_72.add_attribute("CSetMo", "2124676223"); // 1
    Instrmt_72_set.insert("2124676223");
    Instrmt_72.add_attribute("CPPgm", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("CPRegT", "CPRegType_t_121042341"); // 1
    Instrmt_72_set.insert("CPRegType_t_121042341");
    Instrmt_72.add_attribute("Dated", "DatedDate_t_1366299817"); // 1
    Instrmt_72_set.insert("DatedDate_t_1366299817");
    Instrmt_72.add_attribute("IntAcrl", "InterestAccrualDate_t_1630147633"); // 1
    Instrmt_72_set.insert("InterestAccrualDate_t_1630147633");
    all_values.push_back(Instrmt_72_set);
    all_compo_names.insert("Instrmt_72_set");

    {
      xml_element AID_75{"AID"};
      multiset<string> AID_75_set;
      AID_75.add_attribute("AltID", "SecurityAltID_t_836143449"); // 2
      AID_75_set.insert("SecurityAltID_t_836143449");
      AID_75.add_attribute("AltIDSrc", "A"); // 2
      AID_75_set.insert("A");
      all_values.push_back(AID_75_set);
      all_compo_names.insert("AID_75_set");

      Instrmt_72.add_element(AID_75);
    }
    {
      xml_element SecXML_75{"SecXML"};
      multiset<string> SecXML_75_set;
      SecXML_75.add_attribute("Schema", "SecurityXMLSchema_t_497489406"); // 2
      SecXML_75_set.insert("SecurityXMLSchema_t_497489406");
      all_values.push_back(SecXML_75_set);
      all_compo_names.insert("SecXML_75_set");

      Instrmt_72.add_element(SecXML_75);
    }
    {
      xml_element Evnt_75{"Evnt"};
      multiset<string> Evnt_75_set;
      Evnt_75.add_attribute("EventTyp", "9"); // 2
      Evnt_75_set.insert("9");
      Evnt_75.add_attribute("Dt", "EventDate_t_231350274"); // 2
      Evnt_75_set.insert("EventDate_t_231350274");
      Evnt_75.add_attribute("Tm", "EventTime_t_2052762150"); // 2
      Evnt_75_set.insert("EventTime_t_2052762150");
      Evnt_75.add_attribute("Px", "6384184.200000"); // 2
      Evnt_75_set.insert("6384184.200000");
      Evnt_75.add_attribute("Txt", "EventText_t_1680516163"); // 2
      Evnt_75_set.insert("EventText_t_1680516163");
      all_values.push_back(Evnt_75_set);
      all_compo_names.insert("Evnt_75_set");

      Instrmt_72.add_element(Evnt_75);
    }
    {
      xml_element Pty_379{"Pty"};
      multiset<string> Pty_379_set;
      Pty_379.add_attribute("ID", "InstrumentPartyID_t_1490630863"); // 2
      Pty_379_set.insert("InstrumentPartyID_t_1490630863");
      Pty_379.add_attribute("Src", "2"); // 2
      Pty_379_set.insert("2");
      Pty_379.add_attribute("R", "59"); // 2
      Pty_379_set.insert("59");
      all_values.push_back(Pty_379_set);
      all_compo_names.insert("Pty_379_set");

      {
        xml_element Sub_379{"Sub"};
        multiset<string> Sub_379_set;
        Sub_379.add_attribute("ID", "InstrumentPartySubID_t_1433989356"); // 3
        Sub_379_set.insert("InstrumentPartySubID_t_1433989356");
        Sub_379.add_attribute("Typ", "15"); // 3
        Sub_379_set.insert("15");
        all_values.push_back(Sub_379_set);
        all_compo_names.insert("Sub_379_set");

        Pty_379.add_element(Sub_379);
      }
      Instrmt_72.add_element(Pty_379);
    }
    {
      xml_element CmplxEvnt_72{"CmplxEvnt"};
      multiset<string> CmplxEvnt_72_set;
      CmplxEvnt_72.add_attribute("Typ", "3"); // 2
      CmplxEvnt_72_set.insert("3");
      CmplxEvnt_72.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_211978419"); // 2
      CmplxEvnt_72_set.insert("ComplexOptPayoutAmount_t_211978419");
      CmplxEvnt_72.add_attribute("Px", "57835.140000"); // 2
      CmplxEvnt_72_set.insert("57835.140000");
      CmplxEvnt_72.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_72_set.insert("3");
      CmplxEvnt_72.add_attribute("PxBndryPrcsn", "12140051.130000"); // 2
      CmplxEvnt_72_set.insert("12140051.130000");
      CmplxEvnt_72.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_72_set.insert("3");
      CmplxEvnt_72.add_attribute("Cond", "2"); // 2
      CmplxEvnt_72_set.insert("2");
      all_values.push_back(CmplxEvnt_72_set);
      all_compo_names.insert("CmplxEvnt_72_set");

      {
        xml_element EvntDts_72{"EvntDts"};
        multiset<string> EvntDts_72_set;
        EvntDts_72.add_attribute("StartDt", "ComplexEventStartDate_t_202436123"); // 3
        EvntDts_72_set.insert("ComplexEventStartDate_t_202436123");
        EvntDts_72.add_attribute("EndDt", "ComplexEventEndDate_t_1120914874"); // 3
        EvntDts_72_set.insert("ComplexEventEndDate_t_1120914874");
        all_values.push_back(EvntDts_72_set);
        all_compo_names.insert("EvntDts_72_set");

        {
          xml_element EvntTms_72{"EvntTms"};
          multiset<string> EvntTms_72_set;
          EvntTms_72.add_attribute("StartTm", "1524633605"); // 4
          EvntTms_72_set.insert("1524633605");
          EvntTms_72.add_attribute("EndTm", "176865126"); // 4
          EvntTms_72_set.insert("176865126");
          all_values.push_back(EvntTms_72_set);
          all_compo_names.insert("EvntTms_72_set");

          EvntDts_72.add_element(EvntTms_72);
        }
        CmplxEvnt_72.add_element(EvntDts_72);
      }
      Instrmt_72.add_element(CmplxEvnt_72);
    }
    elt.add_element(Instrmt_72);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_11{"InstrmtExt"};
    multiset<string> InstrmtExt_11_set;
    InstrmtExt_11.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_11_set.insert("2");
    InstrmtExt_11.add_attribute("PctAtRisk", "7350906.450000"); // 1
    InstrmtExt_11_set.insert("7350906.450000");
    all_values.push_back(InstrmtExt_11_set);
    all_compo_names.insert("InstrmtExt_11_set");

    {
      xml_element Attrb_21{"Attrb"};
      multiset<string> Attrb_21_set;
      Attrb_21.add_attribute("Typ", "99"); // 2
      Attrb_21_set.insert("99");
      Attrb_21.add_attribute("Val", "InstrAttribValue_t_480662871"); // 2
      Attrb_21_set.insert("InstrAttribValue_t_480662871");
      all_values.push_back(Attrb_21_set);
      all_compo_names.insert("Attrb_21_set");

      InstrmtExt_11.add_element(Attrb_21);
    }
    elt.add_element(InstrmtExt_11);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_26{"FinDetls"};
    multiset<string> FinDetls_26_set;
    FinDetls_26.add_attribute("AgmtDesc", "AgreementDesc_t_856132986"); // 1
    FinDetls_26_set.insert("AgreementDesc_t_856132986");
    FinDetls_26.add_attribute("AgmtID", "AgreementID_t_1520357519"); // 1
    FinDetls_26_set.insert("AgreementID_t_1520357519");
    FinDetls_26.add_attribute("AgmtDt", "AgreementDate_t_2110810504"); // 1
    FinDetls_26_set.insert("AgreementDate_t_2110810504");
    FinDetls_26.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_26_set.insert("CHF");
    FinDetls_26.add_attribute("TrmTyp", "3"); // 1
    FinDetls_26_set.insert("3");
    FinDetls_26.add_attribute("StartDt", "StartDate_t_1439888477"); // 1
    FinDetls_26_set.insert("StartDate_t_1439888477");
    FinDetls_26.add_attribute("EndDt", "EndDate_t_411305001"); // 1
    FinDetls_26_set.insert("EndDate_t_411305001");
    FinDetls_26.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_26_set.insert("0");
    FinDetls_26.add_attribute("MgnRatio", "20783068.980000"); // 1
    FinDetls_26_set.insert("20783068.980000");
    all_values.push_back(FinDetls_26_set);
    all_compo_names.insert("FinDetls_26_set");

    elt.add_element(FinDetls_26);
  } // end FinDetls
  { // Undly
    xml_element Undly_104{"Undly"};
    multiset<string> Undly_104_set;
    Undly_104.add_attribute("Sym", "UnderlyingSymbol_t_1856725627"); // 1
    Undly_104_set.insert("UnderlyingSymbol_t_1856725627");
    Undly_104.add_attribute("Sfx", "WI"); // 1
    Undly_104_set.insert("WI");
    Undly_104.add_attribute("ID", "UnderlyingSecurityID_t_964655333"); // 1
    Undly_104_set.insert("UnderlyingSecurityID_t_964655333");
    Undly_104.add_attribute("Src", "H"); // 1
    Undly_104_set.insert("H");
    Undly_104.add_attribute("Prod", "2"); // 1
    Undly_104_set.insert("2");
    Undly_104.add_attribute("CFI", "UnderlyingCFICode_t_1059645043"); // 1
    Undly_104_set.insert("UnderlyingCFICode_t_1059645043");
    Undly_104.add_attribute("SecTyp", "PEF"); // 1
    Undly_104_set.insert("PEF");
    Undly_104.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1107827709"); // 1
    Undly_104_set.insert("UnderlyingSecuritySubType_t_1107827709");
    Undly_104.add_attribute("MMY", "179213838"); // 1
    Undly_104_set.insert("179213838");
    Undly_104.add_attribute("Mat", "UnderlyingMaturityDate_t_421731220"); // 1
    Undly_104_set.insert("UnderlyingMaturityDate_t_421731220");
    Undly_104.add_attribute("MatTm", "1586439887"); // 1
    Undly_104_set.insert("1586439887");
    Undly_104.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1783472457"); // 1
    Undly_104_set.insert("UnderlyingCouponPaymentDate_t_1783472457");
    Undly_104.add_attribute("RestrctTyp", "XR"); // 1
    Undly_104_set.insert("XR");
    Undly_104.add_attribute("Snrty", "SR"); // 1
    Undly_104_set.insert("SR");
    Undly_104.add_attribute("NotlPctOut", "11606224.150000"); // 1
    Undly_104_set.insert("11606224.150000");
    Undly_104.add_attribute("OrigNotlPctOut", "8010324.700000"); // 1
    Undly_104_set.insert("8010324.700000");
    Undly_104.add_attribute("AttchPnt", "9543221.020000"); // 1
    Undly_104_set.insert("9543221.020000");
    Undly_104.add_attribute("DetchPnt", "18957130.600000"); // 1
    Undly_104_set.insert("18957130.600000");
    Undly_104.add_attribute("Issued", "UnderlyingIssueDate_t_955090172"); // 1
    Undly_104_set.insert("UnderlyingIssueDate_t_955090172");
    Undly_104.add_attribute("RepoCollSecTyp", "1434984973"); // 1
    Undly_104_set.insert("1434984973");
    Undly_104.add_attribute("RepoTrm", "604362399"); // 1
    Undly_104_set.insert("604362399");
    Undly_104.add_attribute("RepoRt", "3279640.430000"); // 1
    Undly_104_set.insert("3279640.430000");
    Undly_104.add_attribute("Fctr", "13983118.300000"); // 1
    Undly_104_set.insert("13983118.300000");
    Undly_104.add_attribute("CrdRtg", "UnderlyingCreditRating_t_149155187"); // 1
    Undly_104_set.insert("UnderlyingCreditRating_t_149155187");
    Undly_104.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_507918770"); // 1
    Undly_104_set.insert("UnderlyingInstrRegistry_t_507918770");
    Undly_104.add_attribute("Ctry", "1859128092"); // 1
    Undly_104_set.insert("1859128092");
    Undly_104.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1589043664"); // 1
    Undly_104_set.insert("UnderlyingStateOrProvinceOfIssue_t_1589043664");
    Undly_104.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_919223771"); // 1
    Undly_104_set.insert("UnderlyingLocaleOfIssue_t_919223771");
    Undly_104.add_attribute("Redeem", "UnderlyingRedemptionDate_t_77739209"); // 1
    Undly_104_set.insert("UnderlyingRedemptionDate_t_77739209");
    Undly_104.add_attribute("StrkPx", "15198669.140000"); // 1
    Undly_104_set.insert("15198669.140000");
    Undly_104.add_attribute("StrkCcy", "USD"); // 1
    Undly_104_set.insert("USD");
    Undly_104.add_attribute("OptA", "1163939489"); // 1
    Undly_104_set.insert("1163939489");
    Undly_104.add_attribute("Mult", "18282166.210000"); // 1
    Undly_104_set.insert("18282166.210000");
    Undly_104.add_attribute("MultTyp", "1"); // 1
    Undly_104_set.insert("1");
    Undly_104.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_104_set.insert("1");
    Undly_104.add_attribute("UOM", "MMBtu"); // 1
    Undly_104_set.insert("MMBtu");
    Undly_104.add_attribute("UOMQty", "1379386.310000"); // 1
    Undly_104_set.insert("1379386.310000");
    Undly_104.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_104_set.insert("MMbbl");
    Undly_104.add_attribute("PxUOMQty", "9195918.540000"); // 1
    Undly_104_set.insert("9195918.540000");
    Undly_104.add_attribute("TmUnit", "S"); // 1
    Undly_104_set.insert("S");
    Undly_104.add_attribute("ExerStyle", "1"); // 1
    Undly_104_set.insert("1");
    Undly_104.add_attribute("CpnRt", "5555806.640000"); // 1
    Undly_104_set.insert("5555806.640000");
    Undly_104.add_attribute("Exch", "UnderlyingSecurityExchange_t_1183837195"); // 1
    Undly_104_set.insert("UnderlyingSecurityExchange_t_1183837195");
    Undly_104.add_attribute("Issr", "UnderlyingIssuer_t_1225155098"); // 1
    Undly_104_set.insert("UnderlyingIssuer_t_1225155098");
    Undly_104.add_attribute("EncUndIssrLen", "1716203079"); // 1
    Undly_104_set.insert("1716203079");
    Undly_104.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1984869665"); // 1
    Undly_104_set.insert("EncodedUnderlyingIssuer_t_1984869665");
    Undly_104.add_attribute("Desc", "UnderlyingSecurityDesc_t_31993553"); // 1
    Undly_104_set.insert("UnderlyingSecurityDesc_t_31993553");
    Undly_104.add_attribute("EncUndSecDescLen", "1464432491"); // 1
    Undly_104_set.insert("1464432491");
    Undly_104.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_792476189"); // 1
    Undly_104_set.insert("EncodedUnderlyingSecurityDesc_t_792476189");
    Undly_104.add_attribute("CPPgm", "UnderlyingCPProgram_t_1466978526"); // 1
    Undly_104_set.insert("UnderlyingCPProgram_t_1466978526");
    Undly_104.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2068794890"); // 1
    Undly_104_set.insert("UnderlyingCPRegType_t_2068794890");
    Undly_104.add_attribute("AllocPct", "11204402.330000"); // 1
    Undly_104_set.insert("11204402.330000");
    Undly_104.add_attribute("Ccy", "CAN"); // 1
    Undly_104_set.insert("CAN");
    Undly_104.add_attribute("Qty", "16283590.030000"); // 1
    Undly_104_set.insert("16283590.030000");
    Undly_104.add_attribute("SettlTyp", "4"); // 1
    Undly_104_set.insert("4");
    Undly_104.add_attribute("CashAmt", "UnderlyingCashAmount_t_1659510094"); // 1
    Undly_104_set.insert("UnderlyingCashAmount_t_1659510094");
    Undly_104.add_attribute("CashTyp", "DIFF"); // 1
    Undly_104_set.insert("DIFF");
    Undly_104.add_attribute("Px", "5071903.620000"); // 1
    Undly_104_set.insert("5071903.620000");
    Undly_104.add_attribute("DirtPx", "10318933.600000"); // 1
    Undly_104_set.insert("10318933.600000");
    Undly_104.add_attribute("EndPx", "12636604.150000"); // 1
    Undly_104_set.insert("12636604.150000");
    Undly_104.add_attribute("StartVal", "UnderlyingStartValue_t_294171550"); // 1
    Undly_104_set.insert("UnderlyingStartValue_t_294171550");
    Undly_104.add_attribute("CurVal", "UnderlyingCurrentValue_t_48349202"); // 1
    Undly_104_set.insert("UnderlyingCurrentValue_t_48349202");
    Undly_104.add_attribute("EndVal", "UnderlyingEndValue_t_944393388"); // 1
    Undly_104_set.insert("UnderlyingEndValue_t_944393388");
    Undly_104.add_attribute("AdjQty", "12243840.750000"); // 1
    Undly_104_set.insert("12243840.750000");
    Undly_104.add_attribute("FxRate", "1668492.380000"); // 1
    Undly_104_set.insert("1668492.380000");
    Undly_104.add_attribute("FxRateCalc", "M"); // 1
    Undly_104_set.insert("M");
    Undly_104.add_attribute("CapValu", "UnderlyingCapValue_t_1362322706"); // 1
    Undly_104_set.insert("UnderlyingCapValue_t_1362322706");
    Undly_104.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1393176984"); // 1
    Undly_104_set.insert("UnderlyingSettlMethod_t_1393176984");
    Undly_104.add_attribute("PutCall", "456879611"); // 1
    Undly_104_set.insert("456879611");
    all_values.push_back(Undly_104_set);
    all_compo_names.insert("Undly_104_set");

    {
      xml_element UndAID_104{"UndAID"};
      multiset<string> UndAID_104_set;
      UndAID_104.add_attribute("AltID", "UnderlyingSecurityAltID_t_1921992558"); // 2
      UndAID_104_set.insert("UnderlyingSecurityAltID_t_1921992558");
      UndAID_104.add_attribute("AltIDSrc", "G"); // 2
      UndAID_104_set.insert("G");
      all_values.push_back(UndAID_104_set);
      all_compo_names.insert("UndAID_104_set");

      Undly_104.add_element(UndAID_104);
    }
    {
      xml_element Stip_165{"Stip"};
      multiset<string> Stip_165_set;
      Stip_165.add_attribute("Typ", "PPT"); // 2
      Stip_165_set.insert("PPT");
      Stip_165.add_attribute("Val", "UnderlyingStipValue_t_958346106"); // 2
      Stip_165_set.insert("UnderlyingStipValue_t_958346106");
      all_values.push_back(Stip_165_set);
      all_compo_names.insert("Stip_165_set");

      Undly_104.add_element(Stip_165);
    }
    {
      xml_element Pty_380{"Pty"};
      multiset<string> Pty_380_set;
      Pty_380.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1136132419"); // 2
      Pty_380_set.insert("UnderlyingInstrumentPartyID_t_1136132419");
      Pty_380.add_attribute("Src", "9"); // 2
      Pty_380_set.insert("9");
      Pty_380.add_attribute("R", "42"); // 2
      Pty_380_set.insert("42");
      all_values.push_back(Pty_380_set);
      all_compo_names.insert("Pty_380_set");

      {
        xml_element Sub_380{"Sub"};
        multiset<string> Sub_380_set;
        Sub_380.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1168125972"); // 3
        Sub_380_set.insert("UnderlyingInstrumentPartySubID_t_1168125972");
        Sub_380.add_attribute("Typ", "21"); // 3
        Sub_380_set.insert("21");
        all_values.push_back(Sub_380_set);
        all_compo_names.insert("Sub_380_set");

        Pty_380.add_element(Sub_380);
      }
      Undly_104.add_element(Pty_380);
    }
    elt.add_element(Undly_104);
  } // end Undly
  { // Undly
    xml_element Undly_105{"Undly"};
    multiset<string> Undly_105_set;
    Undly_105.add_attribute("Sym", "UnderlyingSymbol_t_1588208313"); // 1
    Undly_105_set.insert("UnderlyingSymbol_t_1588208313");
    Undly_105.add_attribute("Sfx", "WI"); // 1
    Undly_105_set.insert("WI");
    Undly_105.add_attribute("ID", "UnderlyingSecurityID_t_1966923440"); // 1
    Undly_105_set.insert("UnderlyingSecurityID_t_1966923440");
    Undly_105.add_attribute("Src", "9"); // 1
    Undly_105_set.insert("9");
    Undly_105.add_attribute("Prod", "8"); // 1
    Undly_105_set.insert("8");
    Undly_105.add_attribute("CFI", "UnderlyingCFICode_t_2037389869"); // 1
    Undly_105_set.insert("UnderlyingCFICode_t_2037389869");
    Undly_105.add_attribute("SecTyp", "MBS"); // 1
    Undly_105_set.insert("MBS");
    Undly_105.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1634878712"); // 1
    Undly_105_set.insert("UnderlyingSecuritySubType_t_1634878712");
    Undly_105.add_attribute("MMY", "1549416315"); // 1
    Undly_105_set.insert("1549416315");
    Undly_105.add_attribute("Mat", "UnderlyingMaturityDate_t_442139380"); // 1
    Undly_105_set.insert("UnderlyingMaturityDate_t_442139380");
    Undly_105.add_attribute("MatTm", "2142069074"); // 1
    Undly_105_set.insert("2142069074");
    Undly_105.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_433826028"); // 1
    Undly_105_set.insert("UnderlyingCouponPaymentDate_t_433826028");
    Undly_105.add_attribute("RestrctTyp", "XR"); // 1
    Undly_105_set.insert("XR");
    Undly_105.add_attribute("Snrty", "SB"); // 1
    Undly_105_set.insert("SB");
    Undly_105.add_attribute("NotlPctOut", "4821752.300000"); // 1
    Undly_105_set.insert("4821752.300000");
    Undly_105.add_attribute("OrigNotlPctOut", "5027095.350000"); // 1
    Undly_105_set.insert("5027095.350000");
    Undly_105.add_attribute("AttchPnt", "15131410.520000"); // 1
    Undly_105_set.insert("15131410.520000");
    Undly_105.add_attribute("DetchPnt", "6490244.680000"); // 1
    Undly_105_set.insert("6490244.680000");
    Undly_105.add_attribute("Issued", "UnderlyingIssueDate_t_39997292"); // 1
    Undly_105_set.insert("UnderlyingIssueDate_t_39997292");
    Undly_105.add_attribute("RepoCollSecTyp", "727980110"); // 1
    Undly_105_set.insert("727980110");
    Undly_105.add_attribute("RepoTrm", "2042201452"); // 1
    Undly_105_set.insert("2042201452");
    Undly_105.add_attribute("RepoRt", "4968769.030000"); // 1
    Undly_105_set.insert("4968769.030000");
    Undly_105.add_attribute("Fctr", "5024890.210000"); // 1
    Undly_105_set.insert("5024890.210000");
    Undly_105.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1953178773"); // 1
    Undly_105_set.insert("UnderlyingCreditRating_t_1953178773");
    Undly_105.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1509337178"); // 1
    Undly_105_set.insert("UnderlyingInstrRegistry_t_1509337178");
    Undly_105.add_attribute("Ctry", "1460835127"); // 1
    Undly_105_set.insert("1460835127");
    Undly_105.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_941827545"); // 1
    Undly_105_set.insert("UnderlyingStateOrProvinceOfIssue_t_941827545");
    Undly_105.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2090516884"); // 1
    Undly_105_set.insert("UnderlyingLocaleOfIssue_t_2090516884");
    Undly_105.add_attribute("Redeem", "UnderlyingRedemptionDate_t_109083602"); // 1
    Undly_105_set.insert("UnderlyingRedemptionDate_t_109083602");
    Undly_105.add_attribute("StrkPx", "21099535.170000"); // 1
    Undly_105_set.insert("21099535.170000");
    Undly_105.add_attribute("StrkCcy", "CAN"); // 1
    Undly_105_set.insert("CAN");
    Undly_105.add_attribute("OptA", "450090720"); // 1
    Undly_105_set.insert("450090720");
    Undly_105.add_attribute("Mult", "18080852.250000"); // 1
    Undly_105_set.insert("18080852.250000");
    Undly_105.add_attribute("MultTyp", "0"); // 1
    Undly_105_set.insert("0");
    Undly_105.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_105_set.insert("0");
    Undly_105.add_attribute("UOM", "USD"); // 1
    Undly_105_set.insert("USD");
    Undly_105.add_attribute("UOMQty", "1530134.190000"); // 1
    Undly_105_set.insert("1530134.190000");
    Undly_105.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_105_set.insert("MMBtu");
    Undly_105.add_attribute("PxUOMQty", "10999241.140000"); // 1
    Undly_105_set.insert("10999241.140000");
    Undly_105.add_attribute("TmUnit", "D"); // 1
    Undly_105_set.insert("D");
    Undly_105.add_attribute("ExerStyle", "0"); // 1
    Undly_105_set.insert("0");
    Undly_105.add_attribute("CpnRt", "15337501.420000"); // 1
    Undly_105_set.insert("15337501.420000");
    Undly_105.add_attribute("Exch", "UnderlyingSecurityExchange_t_153468947"); // 1
    Undly_105_set.insert("UnderlyingSecurityExchange_t_153468947");
    Undly_105.add_attribute("Issr", "UnderlyingIssuer_t_1426255748"); // 1
    Undly_105_set.insert("UnderlyingIssuer_t_1426255748");
    Undly_105.add_attribute("EncUndIssrLen", "2015925372"); // 1
    Undly_105_set.insert("2015925372");
    Undly_105.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_656178482"); // 1
    Undly_105_set.insert("EncodedUnderlyingIssuer_t_656178482");
    Undly_105.add_attribute("Desc", "UnderlyingSecurityDesc_t_791913152"); // 1
    Undly_105_set.insert("UnderlyingSecurityDesc_t_791913152");
    Undly_105.add_attribute("EncUndSecDescLen", "517466193"); // 1
    Undly_105_set.insert("517466193");
    Undly_105.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_696175774"); // 1
    Undly_105_set.insert("EncodedUnderlyingSecurityDesc_t_696175774");
    Undly_105.add_attribute("CPPgm", "UnderlyingCPProgram_t_1519893262"); // 1
    Undly_105_set.insert("UnderlyingCPProgram_t_1519893262");
    Undly_105.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_412183997"); // 1
    Undly_105_set.insert("UnderlyingCPRegType_t_412183997");
    Undly_105.add_attribute("AllocPct", "11930526.770000"); // 1
    Undly_105_set.insert("11930526.770000");
    Undly_105.add_attribute("Ccy", "EUR"); // 1
    Undly_105_set.insert("EUR");
    Undly_105.add_attribute("Qty", "5549062.070000"); // 1
    Undly_105_set.insert("5549062.070000");
    Undly_105.add_attribute("SettlTyp", "4"); // 1
    Undly_105_set.insert("4");
    Undly_105.add_attribute("CashAmt", "UnderlyingCashAmount_t_1159706668"); // 1
    Undly_105_set.insert("UnderlyingCashAmount_t_1159706668");
    Undly_105.add_attribute("CashTyp", "DIFF"); // 1
    Undly_105_set.insert("DIFF");
    Undly_105.add_attribute("Px", "14448173.650000"); // 1
    Undly_105_set.insert("14448173.650000");
    Undly_105.add_attribute("DirtPx", "11221765.370000"); // 1
    Undly_105_set.insert("11221765.370000");
    Undly_105.add_attribute("EndPx", "3391012.290000"); // 1
    Undly_105_set.insert("3391012.290000");
    Undly_105.add_attribute("StartVal", "UnderlyingStartValue_t_994625632"); // 1
    Undly_105_set.insert("UnderlyingStartValue_t_994625632");
    Undly_105.add_attribute("CurVal", "UnderlyingCurrentValue_t_1572267258"); // 1
    Undly_105_set.insert("UnderlyingCurrentValue_t_1572267258");
    Undly_105.add_attribute("EndVal", "UnderlyingEndValue_t_2147186454"); // 1
    Undly_105_set.insert("UnderlyingEndValue_t_2147186454");
    Undly_105.add_attribute("AdjQty", "11055987.980000"); // 1
    Undly_105_set.insert("11055987.980000");
    Undly_105.add_attribute("FxRate", "10803018.900000"); // 1
    Undly_105_set.insert("10803018.900000");
    Undly_105.add_attribute("FxRateCalc", "D"); // 1
    Undly_105_set.insert("D");
    Undly_105.add_attribute("CapValu", "UnderlyingCapValue_t_1258612217"); // 1
    Undly_105_set.insert("UnderlyingCapValue_t_1258612217");
    Undly_105.add_attribute("SetMeth", "UnderlyingSettlMethod_t_75731586"); // 1
    Undly_105_set.insert("UnderlyingSettlMethod_t_75731586");
    Undly_105.add_attribute("PutCall", "650134720"); // 1
    Undly_105_set.insert("650134720");
    all_values.push_back(Undly_105_set);
    all_compo_names.insert("Undly_105_set");

    {
      xml_element UndAID_105{"UndAID"};
      multiset<string> UndAID_105_set;
      UndAID_105.add_attribute("AltID", "UnderlyingSecurityAltID_t_1853765016"); // 2
      UndAID_105_set.insert("UnderlyingSecurityAltID_t_1853765016");
      UndAID_105.add_attribute("AltIDSrc", "A"); // 2
      UndAID_105_set.insert("A");
      all_values.push_back(UndAID_105_set);
      all_compo_names.insert("UndAID_105_set");

      Undly_105.add_element(UndAID_105);
    }
    {
      xml_element Stip_166{"Stip"};
      multiset<string> Stip_166_set;
      Stip_166.add_attribute("Typ", "INSURED"); // 2
      Stip_166_set.insert("INSURED");
      Stip_166.add_attribute("Val", "UnderlyingStipValue_t_2007233963"); // 2
      Stip_166_set.insert("UnderlyingStipValue_t_2007233963");
      all_values.push_back(Stip_166_set);
      all_compo_names.insert("Stip_166_set");

      Undly_105.add_element(Stip_166);
    }
    {
      xml_element Pty_381{"Pty"};
      multiset<string> Pty_381_set;
      Pty_381.add_attribute("ID", "UnderlyingInstrumentPartyID_t_492002457"); // 2
      Pty_381_set.insert("UnderlyingInstrumentPartyID_t_492002457");
      Pty_381.add_attribute("Src", "E"); // 2
      Pty_381_set.insert("E");
      Pty_381.add_attribute("R", "45"); // 2
      Pty_381_set.insert("45");
      all_values.push_back(Pty_381_set);
      all_compo_names.insert("Pty_381_set");

      {
        xml_element Sub_381{"Sub"};
        multiset<string> Sub_381_set;
        Sub_381.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1283915609"); // 3
        Sub_381_set.insert("UnderlyingInstrumentPartySubID_t_1283915609");
        Sub_381.add_attribute("Typ", "22"); // 3
        Sub_381_set.insert("22");
        all_values.push_back(Sub_381_set);
        all_compo_names.insert("Sub_381_set");

        Pty_381.add_element(Sub_381);
      }
      Undly_105.add_element(Pty_381);
    }
    elt.add_element(Undly_105);
  } // end Undly
  { // Leg
    xml_element Leg_89{"Leg"};
    multiset<string> Leg_89_set;
    Leg_89.add_attribute("Sym", "LegSymbol_t_656325224"); // 1
    Leg_89_set.insert("LegSymbol_t_656325224");
    Leg_89.add_attribute("Sfx", "WI"); // 1
    Leg_89_set.insert("WI");
    Leg_89.add_attribute("ID", "LegSecurityID_t_257673602"); // 1
    Leg_89_set.insert("LegSecurityID_t_257673602");
    Leg_89.add_attribute("Src", "2"); // 1
    Leg_89_set.insert("2");
    Leg_89.add_attribute("Prod", "6"); // 1
    Leg_89_set.insert("6");
    Leg_89.add_attribute("CFI", "LegCFICode_t_812579809"); // 1
    Leg_89_set.insert("LegCFICode_t_812579809");
    Leg_89.add_attribute("SecTyp", "WITHDRN"); // 1
    Leg_89_set.insert("WITHDRN");
    Leg_89.add_attribute("SecSubTyp", "LegSecuritySubType_t_64595272"); // 1
    Leg_89_set.insert("LegSecuritySubType_t_64595272");
    Leg_89.add_attribute("MMY", "1310519253"); // 1
    Leg_89_set.insert("1310519253");
    Leg_89.add_attribute("Mat", "LegMaturityDate_t_1164291339"); // 1
    Leg_89_set.insert("LegMaturityDate_t_1164291339");
    Leg_89.add_attribute("MatTm", "1186771810"); // 1
    Leg_89_set.insert("1186771810");
    Leg_89.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1649620482"); // 1
    Leg_89_set.insert("LegCouponPaymentDate_t_1649620482");
    Leg_89.add_attribute("Issued", "LegIssueDate_t_11433323"); // 1
    Leg_89_set.insert("LegIssueDate_t_11433323");
    Leg_89.add_attribute("RepoCollSecTyp", "611555420"); // 1
    Leg_89_set.insert("611555420");
    Leg_89.add_attribute("RepoTrm", "1649323288"); // 1
    Leg_89_set.insert("1649323288");
    Leg_89.add_attribute("RepoRt", "11170321.210000"); // 1
    Leg_89_set.insert("11170321.210000");
    Leg_89.add_attribute("Fctr", "16918573.100000"); // 1
    Leg_89_set.insert("16918573.100000");
    Leg_89.add_attribute("CrdRtg", "LegCreditRating_t_1199533894"); // 1
    Leg_89_set.insert("LegCreditRating_t_1199533894");
    Leg_89.add_attribute("Rgstry", "LegInstrRegistry_t_228160690"); // 1
    Leg_89_set.insert("LegInstrRegistry_t_228160690");
    Leg_89.add_attribute("Ctry", "1767588896"); // 1
    Leg_89_set.insert("1767588896");
    Leg_89.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1849668614"); // 1
    Leg_89_set.insert("LegStateOrProvinceOfIssue_t_1849668614");
    Leg_89.add_attribute("Lcl", "LegLocaleOfIssue_t_2081925707"); // 1
    Leg_89_set.insert("LegLocaleOfIssue_t_2081925707");
    Leg_89.add_attribute("Redeem", "LegRedemptionDate_t_833335606"); // 1
    Leg_89_set.insert("LegRedemptionDate_t_833335606");
    Leg_89.add_attribute("Strk", "18860698.280000"); // 1
    Leg_89_set.insert("18860698.280000");
    Leg_89.add_attribute("StrkCcy", "EUR"); // 1
    Leg_89_set.insert("EUR");
    Leg_89.add_attribute("OptA", "1790912767"); // 1
    Leg_89_set.insert("1790912767");
    Leg_89.add_attribute("Cmult", "3101211.720000"); // 1
    Leg_89_set.insert("3101211.720000");
    Leg_89.add_attribute("MultTyp", "2"); // 1
    Leg_89_set.insert("2");
    Leg_89.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_89_set.insert("1");
    Leg_89.add_attribute("UOM", "MMBtu"); // 1
    Leg_89_set.insert("MMBtu");
    Leg_89.add_attribute("UOMQty", "11180952.490000"); // 1
    Leg_89_set.insert("11180952.490000");
    Leg_89.add_attribute("PxUOM", "Bcf"); // 1
    Leg_89_set.insert("Bcf");
    Leg_89.add_attribute("PxUOMQty", "17798993.470000"); // 1
    Leg_89_set.insert("17798993.470000");
    Leg_89.add_attribute("TmUnit", "D"); // 1
    Leg_89_set.insert("D");
    Leg_89.add_attribute("ExerStyle", "2"); // 1
    Leg_89_set.insert("2");
    Leg_89.add_attribute("CpnRt", "4449955.080000"); // 1
    Leg_89_set.insert("4449955.080000");
    Leg_89.add_attribute("Exch", "LegSecurityExchange_t_1368793082"); // 1
    Leg_89_set.insert("LegSecurityExchange_t_1368793082");
    Leg_89.add_attribute("Issr", "LegIssuer_t_2017198906"); // 1
    Leg_89_set.insert("LegIssuer_t_2017198906");
    Leg_89.add_attribute("EncLegIssrLen", "1755514761"); // 1
    Leg_89_set.insert("1755514761");
    Leg_89.add_attribute("EncLegIssr", "EncodedLegIssuer_t_385600773"); // 1
    Leg_89_set.insert("EncodedLegIssuer_t_385600773");
    Leg_89.add_attribute("Desc", "LegSecurityDesc_t_1056487068"); // 1
    Leg_89_set.insert("LegSecurityDesc_t_1056487068");
    Leg_89.add_attribute("EncLegSecDescLen", "1257651595"); // 1
    Leg_89_set.insert("1257651595");
    Leg_89.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_397034097"); // 1
    Leg_89_set.insert("EncodedLegSecurityDesc_t_397034097");
    Leg_89.add_attribute("RatioQty", "16680424.880000"); // 1
    Leg_89_set.insert("16680424.880000");
    Leg_89.add_attribute("Side", "5"); // 1
    Leg_89_set.insert("5");
    Leg_89.add_attribute("Ccy", "GBP"); // 1
    Leg_89_set.insert("GBP");
    Leg_89.add_attribute("Pool", "LegPool_t_1959025130"); // 1
    Leg_89_set.insert("LegPool_t_1959025130");
    Leg_89.add_attribute("Dated", "LegDatedDate_t_1742226909"); // 1
    Leg_89_set.insert("LegDatedDate_t_1742226909");
    Leg_89.add_attribute("CSetMo", "832521398"); // 1
    Leg_89_set.insert("832521398");
    Leg_89.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1661210096"); // 1
    Leg_89_set.insert("LegInterestAccrualDate_t_1661210096");
    Leg_89.add_attribute("PutCall", "1676668968"); // 1
    Leg_89_set.insert("1676668968");
    Leg_89.add_attribute("LegOptionRatio", "16658570.040000"); // 1
    Leg_89_set.insert("16658570.040000");
    Leg_89.add_attribute("Px", "13997962.760000"); // 1
    Leg_89_set.insert("13997962.760000");
    all_values.push_back(Leg_89_set);
    all_compo_names.insert("Leg_89_set");

    {
      xml_element LegAID_86{"LegAID"};
      multiset<string> LegAID_86_set;
      LegAID_86.add_attribute("SecAltID", "LegSecurityAltID_t_1470861342"); // 2
      LegAID_86_set.insert("LegSecurityAltID_t_1470861342");
      LegAID_86.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_86_set.insert("3");
      all_values.push_back(LegAID_86_set);
      all_compo_names.insert("LegAID_86_set");

      Leg_89.add_element(LegAID_86);
    }
    elt.add_element(Leg_89);
  } // end Leg
  { // Leg
    xml_element Leg_90{"Leg"};
    multiset<string> Leg_90_set;
    Leg_90.add_attribute("Sym", "LegSymbol_t_1043225396"); // 1
    Leg_90_set.insert("LegSymbol_t_1043225396");
    Leg_90.add_attribute("Sfx", "WI"); // 1
    Leg_90_set.insert("WI");
    Leg_90.add_attribute("ID", "LegSecurityID_t_1305481445"); // 1
    Leg_90_set.insert("LegSecurityID_t_1305481445");
    Leg_90.add_attribute("Src", "C"); // 1
    Leg_90_set.insert("C");
    Leg_90.add_attribute("Prod", "12"); // 1
    Leg_90_set.insert("12");
    Leg_90.add_attribute("CFI", "LegCFICode_t_276093046"); // 1
    Leg_90_set.insert("LegCFICode_t_276093046");
    Leg_90.add_attribute("SecTyp", "REV"); // 1
    Leg_90_set.insert("REV");
    Leg_90.add_attribute("SecSubTyp", "LegSecuritySubType_t_788140311"); // 1
    Leg_90_set.insert("LegSecuritySubType_t_788140311");
    Leg_90.add_attribute("MMY", "1925412154"); // 1
    Leg_90_set.insert("1925412154");
    Leg_90.add_attribute("Mat", "LegMaturityDate_t_1814315014"); // 1
    Leg_90_set.insert("LegMaturityDate_t_1814315014");
    Leg_90.add_attribute("MatTm", "1233135819"); // 1
    Leg_90_set.insert("1233135819");
    Leg_90.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1146721589"); // 1
    Leg_90_set.insert("LegCouponPaymentDate_t_1146721589");
    Leg_90.add_attribute("Issued", "LegIssueDate_t_1684030272"); // 1
    Leg_90_set.insert("LegIssueDate_t_1684030272");
    Leg_90.add_attribute("RepoCollSecTyp", "841166933"); // 1
    Leg_90_set.insert("841166933");
    Leg_90.add_attribute("RepoTrm", "1532322362"); // 1
    Leg_90_set.insert("1532322362");
    Leg_90.add_attribute("RepoRt", "5930336.920000"); // 1
    Leg_90_set.insert("5930336.920000");
    Leg_90.add_attribute("Fctr", "20988185.280000"); // 1
    Leg_90_set.insert("20988185.280000");
    Leg_90.add_attribute("CrdRtg", "LegCreditRating_t_1929356459"); // 1
    Leg_90_set.insert("LegCreditRating_t_1929356459");
    Leg_90.add_attribute("Rgstry", "LegInstrRegistry_t_113592532"); // 1
    Leg_90_set.insert("LegInstrRegistry_t_113592532");
    Leg_90.add_attribute("Ctry", "710826116"); // 1
    Leg_90_set.insert("710826116");
    Leg_90.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1295939030"); // 1
    Leg_90_set.insert("LegStateOrProvinceOfIssue_t_1295939030");
    Leg_90.add_attribute("Lcl", "LegLocaleOfIssue_t_1326008682"); // 1
    Leg_90_set.insert("LegLocaleOfIssue_t_1326008682");
    Leg_90.add_attribute("Redeem", "LegRedemptionDate_t_522367598"); // 1
    Leg_90_set.insert("LegRedemptionDate_t_522367598");
    Leg_90.add_attribute("Strk", "8906822.910000"); // 1
    Leg_90_set.insert("8906822.910000");
    Leg_90.add_attribute("StrkCcy", "GBP"); // 1
    Leg_90_set.insert("GBP");
    Leg_90.add_attribute("OptA", "419867611"); // 1
    Leg_90_set.insert("419867611");
    Leg_90.add_attribute("Cmult", "16769034.370000"); // 1
    Leg_90_set.insert("16769034.370000");
    Leg_90.add_attribute("MultTyp", "2"); // 1
    Leg_90_set.insert("2");
    Leg_90.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_90_set.insert("3");
    Leg_90.add_attribute("UOM", "USD"); // 1
    Leg_90_set.insert("USD");
    Leg_90.add_attribute("UOMQty", "3316320.710000"); // 1
    Leg_90_set.insert("3316320.710000");
    Leg_90.add_attribute("PxUOM", "Bu"); // 1
    Leg_90_set.insert("Bu");
    Leg_90.add_attribute("PxUOMQty", "16786126.540000"); // 1
    Leg_90_set.insert("16786126.540000");
    Leg_90.add_attribute("TmUnit", "H"); // 1
    Leg_90_set.insert("H");
    Leg_90.add_attribute("ExerStyle", "2"); // 1
    Leg_90_set.insert("2");
    Leg_90.add_attribute("CpnRt", "19547057.000000"); // 1
    Leg_90_set.insert("19547057.000000");
    Leg_90.add_attribute("Exch", "LegSecurityExchange_t_1302307099"); // 1
    Leg_90_set.insert("LegSecurityExchange_t_1302307099");
    Leg_90.add_attribute("Issr", "LegIssuer_t_1320609095"); // 1
    Leg_90_set.insert("LegIssuer_t_1320609095");
    Leg_90.add_attribute("EncLegIssrLen", "1732634206"); // 1
    Leg_90_set.insert("1732634206");
    Leg_90.add_attribute("EncLegIssr", "EncodedLegIssuer_t_969138465"); // 1
    Leg_90_set.insert("EncodedLegIssuer_t_969138465");
    Leg_90.add_attribute("Desc", "LegSecurityDesc_t_406261267"); // 1
    Leg_90_set.insert("LegSecurityDesc_t_406261267");
    Leg_90.add_attribute("EncLegSecDescLen", "731872147"); // 1
    Leg_90_set.insert("731872147");
    Leg_90.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_505685089"); // 1
    Leg_90_set.insert("EncodedLegSecurityDesc_t_505685089");
    Leg_90.add_attribute("RatioQty", "12474282.000000"); // 1
    Leg_90_set.insert("12474282.000000");
    Leg_90.add_attribute("Side", "F"); // 1
    Leg_90_set.insert("F");
    Leg_90.add_attribute("Ccy", "JPY"); // 1
    Leg_90_set.insert("JPY");
    Leg_90.add_attribute("Pool", "LegPool_t_2046067321"); // 1
    Leg_90_set.insert("LegPool_t_2046067321");
    Leg_90.add_attribute("Dated", "LegDatedDate_t_1212311313"); // 1
    Leg_90_set.insert("LegDatedDate_t_1212311313");
    Leg_90.add_attribute("CSetMo", "1909589197"); // 1
    Leg_90_set.insert("1909589197");
    Leg_90.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1194522703"); // 1
    Leg_90_set.insert("LegInterestAccrualDate_t_1194522703");
    Leg_90.add_attribute("PutCall", "390836347"); // 1
    Leg_90_set.insert("390836347");
    Leg_90.add_attribute("LegOptionRatio", "2844731.470000"); // 1
    Leg_90_set.insert("2844731.470000");
    Leg_90.add_attribute("Px", "20852049.940000"); // 1
    Leg_90_set.insert("20852049.940000");
    all_values.push_back(Leg_90_set);
    all_compo_names.insert("Leg_90_set");

    {
      xml_element LegAID_87{"LegAID"};
      multiset<string> LegAID_87_set;
      LegAID_87.add_attribute("SecAltID", "LegSecurityAltID_t_401882779"); // 2
      LegAID_87_set.insert("LegSecurityAltID_t_401882779");
      LegAID_87.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_87_set.insert("3");
      all_values.push_back(LegAID_87_set);
      all_compo_names.insert("LegAID_87_set");

      Leg_90.add_element(LegAID_87);
    }
    elt.add_element(Leg_90);
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
