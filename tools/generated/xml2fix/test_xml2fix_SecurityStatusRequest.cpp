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
  elt.add_attribute("StatReqID", "SecurityStatusReqID_t_613670294"); // 0
  SecurityStatusRequest_message_t_0.insert("SecurityStatusReqID_t_613670294");
  elt.add_attribute("Ccy", "CHF"); // 0
  SecurityStatusRequest_message_t_0.insert("CHF");
  elt.add_attribute("SubReqTyp", "2"); // 0
  SecurityStatusRequest_message_t_0.insert("2");
  elt.add_attribute("MktID", "MarketID_t_1324925081"); // 0
  SecurityStatusRequest_message_t_0.insert("MarketID_t_1324925081");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1132471560"); // 0
  SecurityStatusRequest_message_t_0.insert("MarketSegmentID_t_1132471560");
  elt.add_attribute("SesID", "1"); // 0
  SecurityStatusRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "5"); // 0
  SecurityStatusRequest_message_t_0.insert("5");
  all_values.push_back(SecurityStatusRequest_message_t_0);
  all_compo_names.insert("SecurityStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_87{"Hdr"};
    multiset<string> Hdr_87_set;
    Hdr_87.add_attribute("SeqNum", "1237834559"); // 1
    Hdr_87_set.insert("1237834559");
    Hdr_87.add_attribute("SID", "SenderCompID_t_38199937"); // 1
    Hdr_87_set.insert("SenderCompID_t_38199937");
    Hdr_87.add_attribute("TID", "TargetCompID_t_2064025594"); // 1
    Hdr_87_set.insert("TargetCompID_t_2064025594");
    Hdr_87.add_attribute("OBID", "OnBehalfOfCompID_t_329366651"); // 1
    Hdr_87_set.insert("OnBehalfOfCompID_t_329366651");
    Hdr_87.add_attribute("D2ID", "DeliverToCompID_t_1744537146"); // 1
    Hdr_87_set.insert("DeliverToCompID_t_1744537146");
    Hdr_87.add_attribute("SSub", "SenderSubID_t_1865507828"); // 1
    Hdr_87_set.insert("SenderSubID_t_1865507828");
    Hdr_87.add_attribute("SLoc", "SenderLocationID_t_668767813"); // 1
    Hdr_87_set.insert("SenderLocationID_t_668767813");
    Hdr_87.add_attribute("TSub", "TargetSubID_t_371792572"); // 1
    Hdr_87_set.insert("TargetSubID_t_371792572");
    Hdr_87.add_attribute("TLoc", "TargetLocationID_t_227300716"); // 1
    Hdr_87_set.insert("TargetLocationID_t_227300716");
    Hdr_87.add_attribute("OBSub", "OnBehalfOfSubID_t_2146341611"); // 1
    Hdr_87_set.insert("OnBehalfOfSubID_t_2146341611");
    Hdr_87.add_attribute("OBLoc", "OnBehalfOfLocationID_t_133455310"); // 1
    Hdr_87_set.insert("OnBehalfOfLocationID_t_133455310");
    Hdr_87.add_attribute("D2Sub", "DeliverToSubID_t_1304640983"); // 1
    Hdr_87_set.insert("DeliverToSubID_t_1304640983");
    Hdr_87.add_attribute("D2Loc", "DeliverToLocationID_t_1866637403"); // 1
    Hdr_87_set.insert("DeliverToLocationID_t_1866637403");
    Hdr_87.add_attribute("PosDup", "Y"); // 1
    Hdr_87_set.insert("Y");
    Hdr_87.add_attribute("PosRsnd", "N"); // 1
    Hdr_87_set.insert("N");
    Hdr_87.add_attribute("Snt", "SendingTime_t_383578204"); // 1
    Hdr_87_set.insert("SendingTime_t_383578204");
    Hdr_87.add_attribute("OrigSnt", "OrigSendingTime_t_1240974497"); // 1
    Hdr_87_set.insert("OrigSendingTime_t_1240974497");
    Hdr_87.add_attribute("MsgEncd", "MessageEncoding_t_392786531"); // 1
    Hdr_87_set.insert("MessageEncoding_t_392786531");
    all_values.push_back(Hdr_87_set);
    all_compo_names.insert("Hdr_87_set");

    {
      xml_element Hop_87{"Hop"};
      multiset<string> Hop_87_set;
      Hop_87.add_attribute("ID", "HopCompID_t_222723522"); // 2
      Hop_87_set.insert("HopCompID_t_222723522");
      Hop_87.add_attribute("Ref", "1348054292"); // 2
      Hop_87_set.insert("1348054292");
      Hop_87.add_attribute("Snt", "HopSendingTime_t_2134917583"); // 2
      Hop_87_set.insert("HopSendingTime_t_2134917583");
      all_values.push_back(Hop_87_set);
      all_compo_names.insert("Hop_87_set");

      Hdr_87.add_element(Hop_87);
    }
    elt.add_element(Hdr_87);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_81{"Instrmt"};
    multiset<string> Instrmt_81_set;
    Instrmt_81.add_attribute("Sym", "Symbol_t_130843529"); // 1
    Instrmt_81_set.insert("Symbol_t_130843529");
    Instrmt_81.add_attribute("Sfx", "WI"); // 1
    Instrmt_81_set.insert("WI");
    Instrmt_81.add_attribute("ID", "SecurityID_t_601104229"); // 1
    Instrmt_81_set.insert("SecurityID_t_601104229");
    Instrmt_81.add_attribute("Src", "3"); // 1
    Instrmt_81_set.insert("3");
    Instrmt_81.add_attribute("Prod", "8"); // 1
    Instrmt_81_set.insert("8");
    Instrmt_81.add_attribute("ProdCmplx", "ProductComplex_t_972474564"); // 1
    Instrmt_81_set.insert("ProductComplex_t_972474564");
    Instrmt_81.add_attribute("SecGrp", "SecurityGroup_t_1777686470"); // 1
    Instrmt_81_set.insert("SecurityGroup_t_1777686470");
    Instrmt_81.add_attribute("CFI", "CFICode_t_275933254"); // 1
    Instrmt_81_set.insert("CFICode_t_275933254");
    Instrmt_81.add_attribute("SecTyp", "FADN"); // 1
    Instrmt_81_set.insert("FADN");
    Instrmt_81.add_attribute("SubTyp", "SecuritySubType_t_1927112849"); // 1
    Instrmt_81_set.insert("SecuritySubType_t_1927112849");
    Instrmt_81.add_attribute("MMY", "1513767814"); // 1
    Instrmt_81_set.insert("1513767814");
    Instrmt_81.add_attribute("MatDt", "MaturityDate_t_239268899"); // 1
    Instrmt_81_set.insert("MaturityDate_t_239268899");
    Instrmt_81.add_attribute("MatTm", "1843654795"); // 1
    Instrmt_81_set.insert("1843654795");
    Instrmt_81.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1843134465"); // 1
    Instrmt_81_set.insert("SettleOnOpenFlag_t_1843134465");
    Instrmt_81.add_attribute("AsgnMeth", "1983806045"); // 1
    Instrmt_81_set.insert("1983806045");
    Instrmt_81.add_attribute("Status", "2"); // 1
    Instrmt_81_set.insert("2");
    Instrmt_81.add_attribute("CpnPmt", "CouponPaymentDate_t_364418630"); // 1
    Instrmt_81_set.insert("CouponPaymentDate_t_364418630");
    Instrmt_81.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_81_set.insert("MM");
    Instrmt_81.add_attribute("Snrty", "SB"); // 1
    Instrmt_81_set.insert("SB");
    Instrmt_81.add_attribute("NotlPctOut", "3632765.930000"); // 1
    Instrmt_81_set.insert("3632765.930000");
    Instrmt_81.add_attribute("OrigNotlPctOut", "3415702.800000"); // 1
    Instrmt_81_set.insert("3415702.800000");
    Instrmt_81.add_attribute("AttchPnt", "9461370.260000"); // 1
    Instrmt_81_set.insert("9461370.260000");
    Instrmt_81.add_attribute("DetchPnt", "824303.480000"); // 1
    Instrmt_81_set.insert("824303.480000");
    Instrmt_81.add_attribute("Issued", "IssueDate_t_1093448611"); // 1
    Instrmt_81_set.insert("IssueDate_t_1093448611");
    Instrmt_81.add_attribute("RepoCollSecTyp", "2022143778"); // 1
    Instrmt_81_set.insert("2022143778");
    Instrmt_81.add_attribute("RepoTrm", "466008553"); // 1
    Instrmt_81_set.insert("466008553");
    Instrmt_81.add_attribute("RepoRt", "1869394.610000"); // 1
    Instrmt_81_set.insert("1869394.610000");
    Instrmt_81.add_attribute("Fctr", "2674466.610000"); // 1
    Instrmt_81_set.insert("2674466.610000");
    Instrmt_81.add_attribute("CrdRtg", "CreditRating_t_688732075"); // 1
    Instrmt_81_set.insert("CreditRating_t_688732075");
    Instrmt_81.add_attribute("Rgstry", "InstrRegistry_t_1534993753"); // 1
    Instrmt_81_set.insert("InstrRegistry_t_1534993753");
    Instrmt_81.add_attribute("IssuCtry", "254880596"); // 1
    Instrmt_81_set.insert("254880596");
    Instrmt_81.add_attribute("StPrv", "StateOrProvinceOfIssue_t_819575604"); // 1
    Instrmt_81_set.insert("StateOrProvinceOfIssue_t_819575604");
    Instrmt_81.add_attribute("Lcl", "LocaleOfIssue_t_128235536"); // 1
    Instrmt_81_set.insert("LocaleOfIssue_t_128235536");
    Instrmt_81.add_attribute("Redeem", "RedemptionDate_t_855984825"); // 1
    Instrmt_81_set.insert("RedemptionDate_t_855984825");
    Instrmt_81.add_attribute("StrkPx", "12723369.930000"); // 1
    Instrmt_81_set.insert("12723369.930000");
    Instrmt_81.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_81_set.insert("CHF");
    Instrmt_81.add_attribute("StrkMult", "9025398.150000"); // 1
    Instrmt_81_set.insert("9025398.150000");
    Instrmt_81.add_attribute("StrkValu", "16951141.330000"); // 1
    Instrmt_81_set.insert("16951141.330000");
    Instrmt_81.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_81_set.insert("4");
    Instrmt_81.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_81_set.insert("2");
    Instrmt_81.add_attribute("StrkPxBndryPrcsn", "10613982.990000"); // 1
    Instrmt_81_set.insert("10613982.990000");
    Instrmt_81.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_81_set.insert("4");
    Instrmt_81.add_attribute("OptAt", "378340163"); // 1
    Instrmt_81_set.insert("378340163");
    Instrmt_81.add_attribute("Mult", "7570491.160000"); // 1
    Instrmt_81_set.insert("7570491.160000");
    Instrmt_81.add_attribute("MultTyp", "1"); // 1
    Instrmt_81_set.insert("1");
    Instrmt_81.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_81_set.insert("3");
    Instrmt_81.add_attribute("MinPxIncr", "11214677.460000"); // 1
    Instrmt_81_set.insert("11214677.460000");
    Instrmt_81.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_165750970"); // 1
    Instrmt_81_set.insert("MinPriceIncrementAmount_t_165750970");
    Instrmt_81.add_attribute("UOM", "Alw"); // 1
    Instrmt_81_set.insert("Alw");
    Instrmt_81.add_attribute("UOMQty", "14847443.390000"); // 1
    Instrmt_81_set.insert("14847443.390000");
    Instrmt_81.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_81_set.insert("oz_tr");
    Instrmt_81.add_attribute("PxUOMQty", "3801685.590000"); // 1
    Instrmt_81_set.insert("3801685.590000");
    Instrmt_81.add_attribute("SettlMeth", "P"); // 1
    Instrmt_81_set.insert("P");
    Instrmt_81.add_attribute("ExerStyle", "0"); // 1
    Instrmt_81_set.insert("0");
    Instrmt_81.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_81_set.insert("2");
    Instrmt_81.add_attribute("OptPayAmt", "OptPayoutAmount_t_2033183240"); // 1
    Instrmt_81_set.insert("OptPayoutAmount_t_2033183240");
    Instrmt_81.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_81_set.insert("PCTPAR");
    Instrmt_81.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_81_set.insert("EQTY");
    Instrmt_81.add_attribute("ListMeth", "0"); // 1
    Instrmt_81_set.insert("0");
    Instrmt_81.add_attribute("CapPx", "11752194.280000"); // 1
    Instrmt_81_set.insert("11752194.280000");
    Instrmt_81.add_attribute("FlrPx", "7771559.460000"); // 1
    Instrmt_81_set.insert("7771559.460000");
    Instrmt_81.add_attribute("PutCall", "0"); // 1
    Instrmt_81_set.insert("0");
    Instrmt_81.add_attribute("FlexInd", "true"); // 1
    Instrmt_81_set.insert("true");
    Instrmt_81.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_81_set.insert("false");
    Instrmt_81.add_attribute("TmUnit", "H"); // 1
    Instrmt_81_set.insert("H");
    Instrmt_81.add_attribute("CpnRt", "5751521.950000"); // 1
    Instrmt_81_set.insert("5751521.950000");
    Instrmt_81.add_attribute("Exch", "SecurityExchange_t_1314116512"); // 1
    Instrmt_81_set.insert("SecurityExchange_t_1314116512");
    Instrmt_81.add_attribute("PosLmt", "1421400432"); // 1
    Instrmt_81_set.insert("1421400432");
    Instrmt_81.add_attribute("NTPosLmt", "122782680"); // 1
    Instrmt_81_set.insert("122782680");
    Instrmt_81.add_attribute("Issr", "Issuer_t_1196161215"); // 1
    Instrmt_81_set.insert("Issuer_t_1196161215");
    Instrmt_81.add_attribute("EncIssrLen", "2103569448"); // 1
    Instrmt_81_set.insert("2103569448");
    Instrmt_81.add_attribute("EncIssr", "EncodedIssuer_t_1184180979"); // 1
    Instrmt_81_set.insert("EncodedIssuer_t_1184180979");
    Instrmt_81.add_attribute("Desc", "SecurityDesc_t_1317474818"); // 1
    Instrmt_81_set.insert("SecurityDesc_t_1317474818");
    Instrmt_81.add_attribute("EncSecDescLen", "334425963"); // 1
    Instrmt_81_set.insert("334425963");
    Instrmt_81.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1941230095"); // 1
    Instrmt_81_set.insert("EncodedSecurityDesc_t_1941230095");
    Instrmt_81.add_attribute("Pool", "Pool_t_1275110819"); // 1
    Instrmt_81_set.insert("Pool_t_1275110819");
    Instrmt_81.add_attribute("CSetMo", "126961453"); // 1
    Instrmt_81_set.insert("126961453");
    Instrmt_81.add_attribute("CPPgm", "99"); // 1
    Instrmt_81_set.insert("99");
    Instrmt_81.add_attribute("CPRegT", "CPRegType_t_1440861789"); // 1
    Instrmt_81_set.insert("CPRegType_t_1440861789");
    Instrmt_81.add_attribute("Dated", "DatedDate_t_1708476634"); // 1
    Instrmt_81_set.insert("DatedDate_t_1708476634");
    Instrmt_81.add_attribute("IntAcrl", "InterestAccrualDate_t_252474884"); // 1
    Instrmt_81_set.insert("InterestAccrualDate_t_252474884");
    all_values.push_back(Instrmt_81_set);
    all_compo_names.insert("Instrmt_81_set");

    {
      xml_element AID_84{"AID"};
      multiset<string> AID_84_set;
      AID_84.add_attribute("AltID", "SecurityAltID_t_1948183040"); // 2
      AID_84_set.insert("SecurityAltID_t_1948183040");
      AID_84.add_attribute("AltIDSrc", "L"); // 2
      AID_84_set.insert("L");
      all_values.push_back(AID_84_set);
      all_compo_names.insert("AID_84_set");

      Instrmt_81.add_element(AID_84);
    }
    {
      xml_element SecXML_84{"SecXML"};
      multiset<string> SecXML_84_set;
      SecXML_84.add_attribute("Schema", "SecurityXMLSchema_t_1819649571"); // 2
      SecXML_84_set.insert("SecurityXMLSchema_t_1819649571");
      all_values.push_back(SecXML_84_set);
      all_compo_names.insert("SecXML_84_set");

      Instrmt_81.add_element(SecXML_84);
    }
    {
      xml_element Evnt_84{"Evnt"};
      multiset<string> Evnt_84_set;
      Evnt_84.add_attribute("EventTyp", "15"); // 2
      Evnt_84_set.insert("15");
      Evnt_84.add_attribute("Dt", "EventDate_t_195990234"); // 2
      Evnt_84_set.insert("EventDate_t_195990234");
      Evnt_84.add_attribute("Tm", "EventTime_t_1705349164"); // 2
      Evnt_84_set.insert("EventTime_t_1705349164");
      Evnt_84.add_attribute("Px", "10416949.300000"); // 2
      Evnt_84_set.insert("10416949.300000");
      Evnt_84.add_attribute("Txt", "EventText_t_718265584"); // 2
      Evnt_84_set.insert("EventText_t_718265584");
      all_values.push_back(Evnt_84_set);
      all_compo_names.insert("Evnt_84_set");

      Instrmt_81.add_element(Evnt_84);
    }
    {
      xml_element Pty_421{"Pty"};
      multiset<string> Pty_421_set;
      Pty_421.add_attribute("ID", "InstrumentPartyID_t_132297184"); // 2
      Pty_421_set.insert("InstrumentPartyID_t_132297184");
      Pty_421.add_attribute("Src", "E"); // 2
      Pty_421_set.insert("E");
      Pty_421.add_attribute("R", "30"); // 2
      Pty_421_set.insert("30");
      all_values.push_back(Pty_421_set);
      all_compo_names.insert("Pty_421_set");

      {
        xml_element Sub_421{"Sub"};
        multiset<string> Sub_421_set;
        Sub_421.add_attribute("ID", "InstrumentPartySubID_t_1526304456"); // 3
        Sub_421_set.insert("InstrumentPartySubID_t_1526304456");
        Sub_421.add_attribute("Typ", "16"); // 3
        Sub_421_set.insert("16");
        all_values.push_back(Sub_421_set);
        all_compo_names.insert("Sub_421_set");

        Pty_421.add_element(Sub_421);
      }
      Instrmt_81.add_element(Pty_421);
    }
    {
      xml_element CmplxEvnt_81{"CmplxEvnt"};
      multiset<string> CmplxEvnt_81_set;
      CmplxEvnt_81.add_attribute("Typ", "3"); // 2
      CmplxEvnt_81_set.insert("3");
      CmplxEvnt_81.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2045165074"); // 2
      CmplxEvnt_81_set.insert("ComplexOptPayoutAmount_t_2045165074");
      CmplxEvnt_81.add_attribute("Px", "19480378.700000"); // 2
      CmplxEvnt_81_set.insert("19480378.700000");
      CmplxEvnt_81.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_81_set.insert("3");
      CmplxEvnt_81.add_attribute("PxBndryPrcsn", "13190818.580000"); // 2
      CmplxEvnt_81_set.insert("13190818.580000");
      CmplxEvnt_81.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_81_set.insert("3");
      CmplxEvnt_81.add_attribute("Cond", "2"); // 2
      CmplxEvnt_81_set.insert("2");
      all_values.push_back(CmplxEvnt_81_set);
      all_compo_names.insert("CmplxEvnt_81_set");

      {
        xml_element EvntDts_81{"EvntDts"};
        multiset<string> EvntDts_81_set;
        EvntDts_81.add_attribute("StartDt", "ComplexEventStartDate_t_1275167659"); // 3
        EvntDts_81_set.insert("ComplexEventStartDate_t_1275167659");
        EvntDts_81.add_attribute("EndDt", "ComplexEventEndDate_t_1107517881"); // 3
        EvntDts_81_set.insert("ComplexEventEndDate_t_1107517881");
        all_values.push_back(EvntDts_81_set);
        all_compo_names.insert("EvntDts_81_set");

        {
          xml_element EvntTms_81{"EvntTms"};
          multiset<string> EvntTms_81_set;
          EvntTms_81.add_attribute("StartTm", "513863903"); // 4
          EvntTms_81_set.insert("513863903");
          EvntTms_81.add_attribute("EndTm", "1609593622"); // 4
          EvntTms_81_set.insert("1609593622");
          all_values.push_back(EvntTms_81_set);
          all_compo_names.insert("EvntTms_81_set");

          EvntDts_81.add_element(EvntTms_81);
        }
        CmplxEvnt_81.add_element(EvntDts_81);
      }
      Instrmt_81.add_element(CmplxEvnt_81);
    }
    elt.add_element(Instrmt_81);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_16{"InstrmtExt"};
    multiset<string> InstrmtExt_16_set;
    InstrmtExt_16.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_16_set.insert("1");
    InstrmtExt_16.add_attribute("PctAtRisk", "17889747.220000"); // 1
    InstrmtExt_16_set.insert("17889747.220000");
    all_values.push_back(InstrmtExt_16_set);
    all_compo_names.insert("InstrmtExt_16_set");

    {
      xml_element Attrb_27{"Attrb"};
      multiset<string> Attrb_27_set;
      Attrb_27.add_attribute("Typ", "15"); // 2
      Attrb_27_set.insert("15");
      Attrb_27.add_attribute("Val", "InstrAttribValue_t_1816478521"); // 2
      Attrb_27_set.insert("InstrAttribValue_t_1816478521");
      all_values.push_back(Attrb_27_set);
      all_compo_names.insert("Attrb_27_set");

      InstrmtExt_16.add_element(Attrb_27);
    }
    elt.add_element(InstrmtExt_16);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_116{"Undly"};
    multiset<string> Undly_116_set;
    Undly_116.add_attribute("Sym", "UnderlyingSymbol_t_1297548062"); // 1
    Undly_116_set.insert("UnderlyingSymbol_t_1297548062");
    Undly_116.add_attribute("Sfx", "WI"); // 1
    Undly_116_set.insert("WI");
    Undly_116.add_attribute("ID", "UnderlyingSecurityID_t_883052256"); // 1
    Undly_116_set.insert("UnderlyingSecurityID_t_883052256");
    Undly_116.add_attribute("Src", "5"); // 1
    Undly_116_set.insert("5");
    Undly_116.add_attribute("Prod", "10"); // 1
    Undly_116_set.insert("10");
    Undly_116.add_attribute("CFI", "UnderlyingCFICode_t_137037863"); // 1
    Undly_116_set.insert("UnderlyingCFICode_t_137037863");
    Undly_116.add_attribute("SecTyp", "EUSUPRA"); // 1
    Undly_116_set.insert("EUSUPRA");
    Undly_116.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1298984845"); // 1
    Undly_116_set.insert("UnderlyingSecuritySubType_t_1298984845");
    Undly_116.add_attribute("MMY", "1178732794"); // 1
    Undly_116_set.insert("1178732794");
    Undly_116.add_attribute("Mat", "UnderlyingMaturityDate_t_5481779"); // 1
    Undly_116_set.insert("UnderlyingMaturityDate_t_5481779");
    Undly_116.add_attribute("MatTm", "1431282029"); // 1
    Undly_116_set.insert("1431282029");
    Undly_116.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1248163505"); // 1
    Undly_116_set.insert("UnderlyingCouponPaymentDate_t_1248163505");
    Undly_116.add_attribute("RestrctTyp", "MR"); // 1
    Undly_116_set.insert("MR");
    Undly_116.add_attribute("Snrty", "SD"); // 1
    Undly_116_set.insert("SD");
    Undly_116.add_attribute("NotlPctOut", "4735655.320000"); // 1
    Undly_116_set.insert("4735655.320000");
    Undly_116.add_attribute("OrigNotlPctOut", "3344983.150000"); // 1
    Undly_116_set.insert("3344983.150000");
    Undly_116.add_attribute("AttchPnt", "7077842.630000"); // 1
    Undly_116_set.insert("7077842.630000");
    Undly_116.add_attribute("DetchPnt", "2741197.550000"); // 1
    Undly_116_set.insert("2741197.550000");
    Undly_116.add_attribute("Issued", "UnderlyingIssueDate_t_482209832"); // 1
    Undly_116_set.insert("UnderlyingIssueDate_t_482209832");
    Undly_116.add_attribute("RepoCollSecTyp", "2026866122"); // 1
    Undly_116_set.insert("2026866122");
    Undly_116.add_attribute("RepoTrm", "197456657"); // 1
    Undly_116_set.insert("197456657");
    Undly_116.add_attribute("RepoRt", "18260825.650000"); // 1
    Undly_116_set.insert("18260825.650000");
    Undly_116.add_attribute("Fctr", "11545501.330000"); // 1
    Undly_116_set.insert("11545501.330000");
    Undly_116.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1304974539"); // 1
    Undly_116_set.insert("UnderlyingCreditRating_t_1304974539");
    Undly_116.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_192462821"); // 1
    Undly_116_set.insert("UnderlyingInstrRegistry_t_192462821");
    Undly_116.add_attribute("Ctry", "616660107"); // 1
    Undly_116_set.insert("616660107");
    Undly_116.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_58755219"); // 1
    Undly_116_set.insert("UnderlyingStateOrProvinceOfIssue_t_58755219");
    Undly_116.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1981437543"); // 1
    Undly_116_set.insert("UnderlyingLocaleOfIssue_t_1981437543");
    Undly_116.add_attribute("Redeem", "UnderlyingRedemptionDate_t_205731535"); // 1
    Undly_116_set.insert("UnderlyingRedemptionDate_t_205731535");
    Undly_116.add_attribute("StrkPx", "18752337.410000"); // 1
    Undly_116_set.insert("18752337.410000");
    Undly_116.add_attribute("StrkCcy", "JPY"); // 1
    Undly_116_set.insert("JPY");
    Undly_116.add_attribute("OptA", "1796703498"); // 1
    Undly_116_set.insert("1796703498");
    Undly_116.add_attribute("Mult", "17993590.160000"); // 1
    Undly_116_set.insert("17993590.160000");
    Undly_116.add_attribute("MultTyp", "1"); // 1
    Undly_116_set.insert("1");
    Undly_116.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_116_set.insert("4");
    Undly_116.add_attribute("UOM", "MMBtu"); // 1
    Undly_116_set.insert("MMBtu");
    Undly_116.add_attribute("UOMQty", "20292054.000000"); // 1
    Undly_116_set.insert("20292054.000000");
    Undly_116.add_attribute("PxUOM", "Alw"); // 1
    Undly_116_set.insert("Alw");
    Undly_116.add_attribute("PxUOMQty", "9676460.250000"); // 1
    Undly_116_set.insert("9676460.250000");
    Undly_116.add_attribute("TmUnit", "S"); // 1
    Undly_116_set.insert("S");
    Undly_116.add_attribute("ExerStyle", "1"); // 1
    Undly_116_set.insert("1");
    Undly_116.add_attribute("CpnRt", "683258.820000"); // 1
    Undly_116_set.insert("683258.820000");
    Undly_116.add_attribute("Exch", "UnderlyingSecurityExchange_t_1388106841"); // 1
    Undly_116_set.insert("UnderlyingSecurityExchange_t_1388106841");
    Undly_116.add_attribute("Issr", "UnderlyingIssuer_t_635741595"); // 1
    Undly_116_set.insert("UnderlyingIssuer_t_635741595");
    Undly_116.add_attribute("EncUndIssrLen", "541891415"); // 1
    Undly_116_set.insert("541891415");
    Undly_116.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1722605156"); // 1
    Undly_116_set.insert("EncodedUnderlyingIssuer_t_1722605156");
    Undly_116.add_attribute("Desc", "UnderlyingSecurityDesc_t_1343525858"); // 1
    Undly_116_set.insert("UnderlyingSecurityDesc_t_1343525858");
    Undly_116.add_attribute("EncUndSecDescLen", "816011170"); // 1
    Undly_116_set.insert("816011170");
    Undly_116.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_57331340"); // 1
    Undly_116_set.insert("EncodedUnderlyingSecurityDesc_t_57331340");
    Undly_116.add_attribute("CPPgm", "UnderlyingCPProgram_t_1222908332"); // 1
    Undly_116_set.insert("UnderlyingCPProgram_t_1222908332");
    Undly_116.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1013467827"); // 1
    Undly_116_set.insert("UnderlyingCPRegType_t_1013467827");
    Undly_116.add_attribute("AllocPct", "18834139.060000"); // 1
    Undly_116_set.insert("18834139.060000");
    Undly_116.add_attribute("Ccy", "JPY"); // 1
    Undly_116_set.insert("JPY");
    Undly_116.add_attribute("Qty", "20758767.270000"); // 1
    Undly_116_set.insert("20758767.270000");
    Undly_116.add_attribute("SettlTyp", "5"); // 1
    Undly_116_set.insert("5");
    Undly_116.add_attribute("CashAmt", "UnderlyingCashAmount_t_229713938"); // 1
    Undly_116_set.insert("UnderlyingCashAmount_t_229713938");
    Undly_116.add_attribute("CashTyp", "FIXED"); // 1
    Undly_116_set.insert("FIXED");
    Undly_116.add_attribute("Px", "10523664.600000"); // 1
    Undly_116_set.insert("10523664.600000");
    Undly_116.add_attribute("DirtPx", "21049476.790000"); // 1
    Undly_116_set.insert("21049476.790000");
    Undly_116.add_attribute("EndPx", "6786537.340000"); // 1
    Undly_116_set.insert("6786537.340000");
    Undly_116.add_attribute("StartVal", "UnderlyingStartValue_t_408162410"); // 1
    Undly_116_set.insert("UnderlyingStartValue_t_408162410");
    Undly_116.add_attribute("CurVal", "UnderlyingCurrentValue_t_1754167529"); // 1
    Undly_116_set.insert("UnderlyingCurrentValue_t_1754167529");
    Undly_116.add_attribute("EndVal", "UnderlyingEndValue_t_330529102"); // 1
    Undly_116_set.insert("UnderlyingEndValue_t_330529102");
    Undly_116.add_attribute("AdjQty", "10026679.680000"); // 1
    Undly_116_set.insert("10026679.680000");
    Undly_116.add_attribute("FxRate", "9970230.610000"); // 1
    Undly_116_set.insert("9970230.610000");
    Undly_116.add_attribute("FxRateCalc", "D"); // 1
    Undly_116_set.insert("D");
    Undly_116.add_attribute("CapValu", "UnderlyingCapValue_t_884389721"); // 1
    Undly_116_set.insert("UnderlyingCapValue_t_884389721");
    Undly_116.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1538863437"); // 1
    Undly_116_set.insert("UnderlyingSettlMethod_t_1538863437");
    Undly_116.add_attribute("PutCall", "1087088359"); // 1
    Undly_116_set.insert("1087088359");
    all_values.push_back(Undly_116_set);
    all_compo_names.insert("Undly_116_set");

    {
      xml_element UndAID_116{"UndAID"};
      multiset<string> UndAID_116_set;
      UndAID_116.add_attribute("AltID", "UnderlyingSecurityAltID_t_771593252"); // 2
      UndAID_116_set.insert("UnderlyingSecurityAltID_t_771593252");
      UndAID_116.add_attribute("AltIDSrc", "2"); // 2
      UndAID_116_set.insert("2");
      all_values.push_back(UndAID_116_set);
      all_compo_names.insert("UndAID_116_set");

      Undly_116.add_element(UndAID_116);
    }
    {
      xml_element Stip_183{"Stip"};
      multiset<string> Stip_183_set;
      Stip_183.add_attribute("Typ", "AMT"); // 2
      Stip_183_set.insert("AMT");
      Stip_183.add_attribute("Val", "UnderlyingStipValue_t_12216445"); // 2
      Stip_183_set.insert("UnderlyingStipValue_t_12216445");
      all_values.push_back(Stip_183_set);
      all_compo_names.insert("Stip_183_set");

      Undly_116.add_element(Stip_183);
    }
    {
      xml_element Pty_422{"Pty"};
      multiset<string> Pty_422_set;
      Pty_422.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2000243790"); // 2
      Pty_422_set.insert("UnderlyingInstrumentPartyID_t_2000243790");
      Pty_422.add_attribute("Src", "D"); // 2
      Pty_422_set.insert("D");
      Pty_422.add_attribute("R", "18"); // 2
      Pty_422_set.insert("18");
      all_values.push_back(Pty_422_set);
      all_compo_names.insert("Pty_422_set");

      {
        xml_element Sub_422{"Sub"};
        multiset<string> Sub_422_set;
        Sub_422.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1196286000"); // 3
        Sub_422_set.insert("UnderlyingInstrumentPartySubID_t_1196286000");
        Sub_422.add_attribute("Typ", "30"); // 3
        Sub_422_set.insert("30");
        all_values.push_back(Sub_422_set);
        all_compo_names.insert("Sub_422_set");

        Pty_422.add_element(Sub_422);
      }
      Undly_116.add_element(Pty_422);
    }
    elt.add_element(Undly_116);
  } // end Undly
  { // Leg
    xml_element Leg_100{"Leg"};
    multiset<string> Leg_100_set;
    Leg_100.add_attribute("Sym", "LegSymbol_t_271710685"); // 1
    Leg_100_set.insert("LegSymbol_t_271710685");
    Leg_100.add_attribute("Sfx", "CD"); // 1
    Leg_100_set.insert("CD");
    Leg_100.add_attribute("ID", "LegSecurityID_t_1528083200"); // 1
    Leg_100_set.insert("LegSecurityID_t_1528083200");
    Leg_100.add_attribute("Src", "B"); // 1
    Leg_100_set.insert("B");
    Leg_100.add_attribute("Prod", "1"); // 1
    Leg_100_set.insert("1");
    Leg_100.add_attribute("CFI", "LegCFICode_t_1456476279"); // 1
    Leg_100_set.insert("LegCFICode_t_1456476279");
    Leg_100.add_attribute("SecTyp", "IET"); // 1
    Leg_100_set.insert("IET");
    Leg_100.add_attribute("SecSubTyp", "LegSecuritySubType_t_1779973662"); // 1
    Leg_100_set.insert("LegSecuritySubType_t_1779973662");
    Leg_100.add_attribute("MMY", "1218823253"); // 1
    Leg_100_set.insert("1218823253");
    Leg_100.add_attribute("Mat", "LegMaturityDate_t_253203240"); // 1
    Leg_100_set.insert("LegMaturityDate_t_253203240");
    Leg_100.add_attribute("MatTm", "1737437693"); // 1
    Leg_100_set.insert("1737437693");
    Leg_100.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1897476987"); // 1
    Leg_100_set.insert("LegCouponPaymentDate_t_1897476987");
    Leg_100.add_attribute("Issued", "LegIssueDate_t_661365650"); // 1
    Leg_100_set.insert("LegIssueDate_t_661365650");
    Leg_100.add_attribute("RepoCollSecTyp", "1344121575"); // 1
    Leg_100_set.insert("1344121575");
    Leg_100.add_attribute("RepoTrm", "80522441"); // 1
    Leg_100_set.insert("80522441");
    Leg_100.add_attribute("RepoRt", "16640336.190000"); // 1
    Leg_100_set.insert("16640336.190000");
    Leg_100.add_attribute("Fctr", "1936609.880000"); // 1
    Leg_100_set.insert("1936609.880000");
    Leg_100.add_attribute("CrdRtg", "LegCreditRating_t_199964775"); // 1
    Leg_100_set.insert("LegCreditRating_t_199964775");
    Leg_100.add_attribute("Rgstry", "LegInstrRegistry_t_400939692"); // 1
    Leg_100_set.insert("LegInstrRegistry_t_400939692");
    Leg_100.add_attribute("Ctry", "1732524425"); // 1
    Leg_100_set.insert("1732524425");
    Leg_100.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1287053134"); // 1
    Leg_100_set.insert("LegStateOrProvinceOfIssue_t_1287053134");
    Leg_100.add_attribute("Lcl", "LegLocaleOfIssue_t_1172532944"); // 1
    Leg_100_set.insert("LegLocaleOfIssue_t_1172532944");
    Leg_100.add_attribute("Redeem", "LegRedemptionDate_t_949542972"); // 1
    Leg_100_set.insert("LegRedemptionDate_t_949542972");
    Leg_100.add_attribute("Strk", "2949837.270000"); // 1
    Leg_100_set.insert("2949837.270000");
    Leg_100.add_attribute("StrkCcy", "JPY"); // 1
    Leg_100_set.insert("JPY");
    Leg_100.add_attribute("OptA", "1992289384"); // 1
    Leg_100_set.insert("1992289384");
    Leg_100.add_attribute("Cmult", "7720873.430000"); // 1
    Leg_100_set.insert("7720873.430000");
    Leg_100.add_attribute("MultTyp", "2"); // 1
    Leg_100_set.insert("2");
    Leg_100.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_100_set.insert("4");
    Leg_100.add_attribute("UOM", "Bu"); // 1
    Leg_100_set.insert("Bu");
    Leg_100.add_attribute("UOMQty", "1228161.520000"); // 1
    Leg_100_set.insert("1228161.520000");
    Leg_100.add_attribute("PxUOM", "Bcf"); // 1
    Leg_100_set.insert("Bcf");
    Leg_100.add_attribute("PxUOMQty", "19448398.370000"); // 1
    Leg_100_set.insert("19448398.370000");
    Leg_100.add_attribute("TmUnit", "S"); // 1
    Leg_100_set.insert("S");
    Leg_100.add_attribute("ExerStyle", "1"); // 1
    Leg_100_set.insert("1");
    Leg_100.add_attribute("CpnRt", "12538324.680000"); // 1
    Leg_100_set.insert("12538324.680000");
    Leg_100.add_attribute("Exch", "LegSecurityExchange_t_1972822082"); // 1
    Leg_100_set.insert("LegSecurityExchange_t_1972822082");
    Leg_100.add_attribute("Issr", "LegIssuer_t_625206011"); // 1
    Leg_100_set.insert("LegIssuer_t_625206011");
    Leg_100.add_attribute("EncLegIssrLen", "325172074"); // 1
    Leg_100_set.insert("325172074");
    Leg_100.add_attribute("EncLegIssr", "EncodedLegIssuer_t_78541674"); // 1
    Leg_100_set.insert("EncodedLegIssuer_t_78541674");
    Leg_100.add_attribute("Desc", "LegSecurityDesc_t_215160057"); // 1
    Leg_100_set.insert("LegSecurityDesc_t_215160057");
    Leg_100.add_attribute("EncLegSecDescLen", "75165413"); // 1
    Leg_100_set.insert("75165413");
    Leg_100.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_739907324"); // 1
    Leg_100_set.insert("EncodedLegSecurityDesc_t_739907324");
    Leg_100.add_attribute("RatioQty", "15592816.320000"); // 1
    Leg_100_set.insert("15592816.320000");
    Leg_100.add_attribute("Side", "G"); // 1
    Leg_100_set.insert("G");
    Leg_100.add_attribute("Ccy", "GBP"); // 1
    Leg_100_set.insert("GBP");
    Leg_100.add_attribute("Pool", "LegPool_t_355652630"); // 1
    Leg_100_set.insert("LegPool_t_355652630");
    Leg_100.add_attribute("Dated", "LegDatedDate_t_657396987"); // 1
    Leg_100_set.insert("LegDatedDate_t_657396987");
    Leg_100.add_attribute("CSetMo", "1337983397"); // 1
    Leg_100_set.insert("1337983397");
    Leg_100.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1642705764"); // 1
    Leg_100_set.insert("LegInterestAccrualDate_t_1642705764");
    Leg_100.add_attribute("PutCall", "1829929932"); // 1
    Leg_100_set.insert("1829929932");
    Leg_100.add_attribute("LegOptionRatio", "1400427.220000"); // 1
    Leg_100_set.insert("1400427.220000");
    Leg_100.add_attribute("Px", "19376894.910000"); // 1
    Leg_100_set.insert("19376894.910000");
    all_values.push_back(Leg_100_set);
    all_compo_names.insert("Leg_100_set");

    {
      xml_element LegAID_95{"LegAID"};
      multiset<string> LegAID_95_set;
      LegAID_95.add_attribute("SecAltID", "LegSecurityAltID_t_867195674"); // 2
      LegAID_95_set.insert("LegSecurityAltID_t_867195674");
      LegAID_95.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_95_set.insert("F");
      all_values.push_back(LegAID_95_set);
      all_compo_names.insert("LegAID_95_set");

      Leg_100.add_element(LegAID_95);
    }
    elt.add_element(Leg_100);
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
