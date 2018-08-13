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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Adv" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Advertisement_message_t_0;
  elt.add_attribute("AdvId", "AdvId_t_204249232"); // 0
  Advertisement_message_t_0.insert("AdvId_t_204249232");
  elt.add_attribute("AdvTransTyp", "C"); // 0
  Advertisement_message_t_0.insert("C");
  elt.add_attribute("AdvRefID", "AdvRefID_t_1513432095"); // 0
  Advertisement_message_t_0.insert("AdvRefID_t_1513432095");
  elt.add_attribute("AdvSide", "T"); // 0
  Advertisement_message_t_0.insert("T");
  elt.add_attribute("Qty", "19291216.000000"); // 0
  Advertisement_message_t_0.insert("19291216.000000");
  elt.add_attribute("QtyTyp", "1"); // 0
  Advertisement_message_t_0.insert("1");
  elt.add_attribute("Px", "6525246.700000"); // 0
  Advertisement_message_t_0.insert("6525246.700000");
  elt.add_attribute("Ccy", "GBP"); // 0
  Advertisement_message_t_0.insert("GBP");
  elt.add_attribute("TrdDt", "TradeDate_t_906909780"); // 0
  Advertisement_message_t_0.insert("TradeDate_t_906909780");
  elt.add_attribute("TxnTm", "TransactTime_t_725714383"); // 0
  Advertisement_message_t_0.insert("TransactTime_t_725714383");
  elt.add_attribute("Txt", "Text_t_510010840"); // 0
  Advertisement_message_t_0.insert("Text_t_510010840");
  elt.add_attribute("EncTxtLen", "831496776"); // 0
  Advertisement_message_t_0.insert("831496776");
  elt.add_attribute("EncTxt", "EncodedText_t_29812632"); // 0
  Advertisement_message_t_0.insert("EncodedText_t_29812632");
  elt.add_attribute("URL", "URLLink_t_833107837"); // 0
  Advertisement_message_t_0.insert("URLLink_t_833107837");
  elt.add_attribute("LastMkt", "LastMkt_t_1152553693"); // 0
  Advertisement_message_t_0.insert("LastMkt_t_1152553693");
  elt.add_attribute("SesID", "2"); // 0
  Advertisement_message_t_0.insert("2");
  elt.add_attribute("SesSub", "3"); // 0
  Advertisement_message_t_0.insert("3");
  all_values.push_back(Advertisement_message_t_0);
  all_compo_names.insert("Advertisement_message_t");

  { // Hdr
    xml_element Hdr_1{"Hdr"};
    multiset<string> Hdr_1_set;
    Hdr_1.add_attribute("SeqNum", "419045226"); // 1
    Hdr_1_set.insert("419045226");
    Hdr_1.add_attribute("SID", "SenderCompID_t_1204555282"); // 1
    Hdr_1_set.insert("SenderCompID_t_1204555282");
    Hdr_1.add_attribute("TID", "TargetCompID_t_1515936134"); // 1
    Hdr_1_set.insert("TargetCompID_t_1515936134");
    Hdr_1.add_attribute("OBID", "OnBehalfOfCompID_t_358864052"); // 1
    Hdr_1_set.insert("OnBehalfOfCompID_t_358864052");
    Hdr_1.add_attribute("D2ID", "DeliverToCompID_t_1106013973"); // 1
    Hdr_1_set.insert("DeliverToCompID_t_1106013973");
    Hdr_1.add_attribute("SSub", "SenderSubID_t_1432212795"); // 1
    Hdr_1_set.insert("SenderSubID_t_1432212795");
    Hdr_1.add_attribute("SLoc", "SenderLocationID_t_1149568023"); // 1
    Hdr_1_set.insert("SenderLocationID_t_1149568023");
    Hdr_1.add_attribute("TSub", "TargetSubID_t_299720540"); // 1
    Hdr_1_set.insert("TargetSubID_t_299720540");
    Hdr_1.add_attribute("TLoc", "TargetLocationID_t_1855756865"); // 1
    Hdr_1_set.insert("TargetLocationID_t_1855756865");
    Hdr_1.add_attribute("OBSub", "OnBehalfOfSubID_t_193230305"); // 1
    Hdr_1_set.insert("OnBehalfOfSubID_t_193230305");
    Hdr_1.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1209042638"); // 1
    Hdr_1_set.insert("OnBehalfOfLocationID_t_1209042638");
    Hdr_1.add_attribute("D2Sub", "DeliverToSubID_t_2048992635"); // 1
    Hdr_1_set.insert("DeliverToSubID_t_2048992635");
    Hdr_1.add_attribute("D2Loc", "DeliverToLocationID_t_1065382541"); // 1
    Hdr_1_set.insert("DeliverToLocationID_t_1065382541");
    Hdr_1.add_attribute("PosDup", "Y"); // 1
    Hdr_1_set.insert("Y");
    Hdr_1.add_attribute("PosRsnd", "N"); // 1
    Hdr_1_set.insert("N");
    Hdr_1.add_attribute("Snt", "SendingTime_t_431330988"); // 1
    Hdr_1_set.insert("SendingTime_t_431330988");
    Hdr_1.add_attribute("OrigSnt", "OrigSendingTime_t_1631041833"); // 1
    Hdr_1_set.insert("OrigSendingTime_t_1631041833");
    Hdr_1.add_attribute("MsgEncd", "MessageEncoding_t_716024832"); // 1
    Hdr_1_set.insert("MessageEncoding_t_716024832");
    all_values.push_back(Hdr_1_set);
    all_compo_names.insert("Hdr_1_set");

    {
      xml_element Hop_1{"Hop"};
      multiset<string> Hop_1_set;
      Hop_1.add_attribute("ID", "HopCompID_t_251229909"); // 2
      Hop_1_set.insert("HopCompID_t_251229909");
      Hop_1.add_attribute("Ref", "136082856"); // 2
      Hop_1_set.insert("136082856");
      Hop_1.add_attribute("Snt", "HopSendingTime_t_2119021259"); // 2
      Hop_1_set.insert("HopSendingTime_t_2119021259");
      all_values.push_back(Hop_1_set);
      all_compo_names.insert("Hop_1_set");

      Hdr_1.add_element(Hop_1);
    }
    elt.add_element(Hdr_1);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_1{"Instrmt"};
    multiset<string> Instrmt_1_set;
    Instrmt_1.add_attribute("Sym", "Symbol_t_1107732593"); // 1
    Instrmt_1_set.insert("Symbol_t_1107732593");
    Instrmt_1.add_attribute("Sfx", "CD"); // 1
    Instrmt_1_set.insert("CD");
    Instrmt_1.add_attribute("ID", "SecurityID_t_697251994"); // 1
    Instrmt_1_set.insert("SecurityID_t_697251994");
    Instrmt_1.add_attribute("Src", "A"); // 1
    Instrmt_1_set.insert("A");
    Instrmt_1.add_attribute("Prod", "12"); // 1
    Instrmt_1_set.insert("12");
    Instrmt_1.add_attribute("ProdCmplx", "ProductComplex_t_727064626"); // 1
    Instrmt_1_set.insert("ProductComplex_t_727064626");
    Instrmt_1.add_attribute("SecGrp", "SecurityGroup_t_303367622"); // 1
    Instrmt_1_set.insert("SecurityGroup_t_303367622");
    Instrmt_1.add_attribute("CFI", "CFICode_t_879559457"); // 1
    Instrmt_1_set.insert("CFICode_t_879559457");
    Instrmt_1.add_attribute("SecTyp", "USTB"); // 1
    Instrmt_1_set.insert("USTB");
    Instrmt_1.add_attribute("SubTyp", "SecuritySubType_t_1967629195"); // 1
    Instrmt_1_set.insert("SecuritySubType_t_1967629195");
    Instrmt_1.add_attribute("MMY", "1298604684"); // 1
    Instrmt_1_set.insert("1298604684");
    Instrmt_1.add_attribute("MatDt", "MaturityDate_t_271443469"); // 1
    Instrmt_1_set.insert("MaturityDate_t_271443469");
    Instrmt_1.add_attribute("MatTm", "1336081682"); // 1
    Instrmt_1_set.insert("1336081682");
    Instrmt_1.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1657468736"); // 1
    Instrmt_1_set.insert("SettleOnOpenFlag_t_1657468736");
    Instrmt_1.add_attribute("AsgnMeth", "1377457442"); // 1
    Instrmt_1_set.insert("1377457442");
    Instrmt_1.add_attribute("Status", "2"); // 1
    Instrmt_1_set.insert("2");
    Instrmt_1.add_attribute("CpnPmt", "CouponPaymentDate_t_659553111"); // 1
    Instrmt_1_set.insert("CouponPaymentDate_t_659553111");
    Instrmt_1.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_1_set.insert("XR");
    Instrmt_1.add_attribute("Snrty", "SD"); // 1
    Instrmt_1_set.insert("SD");
    Instrmt_1.add_attribute("NotlPctOut", "8527834.160000"); // 1
    Instrmt_1_set.insert("8527834.160000");
    Instrmt_1.add_attribute("OrigNotlPctOut", "7387369.730000"); // 1
    Instrmt_1_set.insert("7387369.730000");
    Instrmt_1.add_attribute("AttchPnt", "2305930.330000"); // 1
    Instrmt_1_set.insert("2305930.330000");
    Instrmt_1.add_attribute("DetchPnt", "19181659.580000"); // 1
    Instrmt_1_set.insert("19181659.580000");
    Instrmt_1.add_attribute("Issued", "IssueDate_t_4545196"); // 1
    Instrmt_1_set.insert("IssueDate_t_4545196");
    Instrmt_1.add_attribute("RepoCollSecTyp", "1164979913"); // 1
    Instrmt_1_set.insert("1164979913");
    Instrmt_1.add_attribute("RepoTrm", "202013298"); // 1
    Instrmt_1_set.insert("202013298");
    Instrmt_1.add_attribute("RepoRt", "16355870.300000"); // 1
    Instrmt_1_set.insert("16355870.300000");
    Instrmt_1.add_attribute("Fctr", "18810047.450000"); // 1
    Instrmt_1_set.insert("18810047.450000");
    Instrmt_1.add_attribute("CrdRtg", "CreditRating_t_453243207"); // 1
    Instrmt_1_set.insert("CreditRating_t_453243207");
    Instrmt_1.add_attribute("Rgstry", "InstrRegistry_t_1771669886"); // 1
    Instrmt_1_set.insert("InstrRegistry_t_1771669886");
    Instrmt_1.add_attribute("IssuCtry", "1852542356"); // 1
    Instrmt_1_set.insert("1852542356");
    Instrmt_1.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1560975800"); // 1
    Instrmt_1_set.insert("StateOrProvinceOfIssue_t_1560975800");
    Instrmt_1.add_attribute("Lcl", "LocaleOfIssue_t_667178874"); // 1
    Instrmt_1_set.insert("LocaleOfIssue_t_667178874");
    Instrmt_1.add_attribute("Redeem", "RedemptionDate_t_402310702"); // 1
    Instrmt_1_set.insert("RedemptionDate_t_402310702");
    Instrmt_1.add_attribute("StrkPx", "10312355.850000"); // 1
    Instrmt_1_set.insert("10312355.850000");
    Instrmt_1.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_1_set.insert("GBP");
    Instrmt_1.add_attribute("StrkMult", "13346032.080000"); // 1
    Instrmt_1_set.insert("13346032.080000");
    Instrmt_1.add_attribute("StrkValu", "12737440.960000"); // 1
    Instrmt_1_set.insert("12737440.960000");
    Instrmt_1.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("StrkPxBndryPrcsn", "4248651.320000"); // 1
    Instrmt_1_set.insert("4248651.320000");
    Instrmt_1.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_1_set.insert("2");
    Instrmt_1.add_attribute("OptAt", "343346789"); // 1
    Instrmt_1_set.insert("343346789");
    Instrmt_1.add_attribute("Mult", "20823338.680000"); // 1
    Instrmt_1_set.insert("20823338.680000");
    Instrmt_1.add_attribute("MultTyp", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_1_set.insert("3");
    Instrmt_1.add_attribute("MinPxIncr", "5944033.310000"); // 1
    Instrmt_1_set.insert("5944033.310000");
    Instrmt_1.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1374858763"); // 1
    Instrmt_1_set.insert("MinPriceIncrementAmount_t_1374858763");
    Instrmt_1.add_attribute("UOM", "MWh"); // 1
    Instrmt_1_set.insert("MWh");
    Instrmt_1.add_attribute("UOMQty", "14471867.480000"); // 1
    Instrmt_1_set.insert("14471867.480000");
    Instrmt_1.add_attribute("PxUOM", "tn"); // 1
    Instrmt_1_set.insert("tn");
    Instrmt_1.add_attribute("PxUOMQty", "15238346.970000"); // 1
    Instrmt_1_set.insert("15238346.970000");
    Instrmt_1.add_attribute("SettlMeth", "C"); // 1
    Instrmt_1_set.insert("C");
    Instrmt_1.add_attribute("ExerStyle", "2"); // 1
    Instrmt_1_set.insert("2");
    Instrmt_1.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("OptPayAmt", "OptPayoutAmount_t_1419882356"); // 1
    Instrmt_1_set.insert("OptPayoutAmount_t_1419882356");
    Instrmt_1.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_1_set.insert("PCTPAR");
    Instrmt_1.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_1_set.insert("CDSD");
    Instrmt_1.add_attribute("ListMeth", "0"); // 1
    Instrmt_1_set.insert("0");
    Instrmt_1.add_attribute("CapPx", "12304305.530000"); // 1
    Instrmt_1_set.insert("12304305.530000");
    Instrmt_1.add_attribute("FlrPx", "21273944.150000"); // 1
    Instrmt_1_set.insert("21273944.150000");
    Instrmt_1.add_attribute("PutCall", "0"); // 1
    Instrmt_1_set.insert("0");
    Instrmt_1.add_attribute("FlexInd", "false"); // 1
    Instrmt_1_set.insert("false");
    Instrmt_1.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_1_set.insert("false");
    Instrmt_1.add_attribute("TmUnit", "S"); // 1
    Instrmt_1_set.insert("S");
    Instrmt_1.add_attribute("CpnRt", "1443104.170000"); // 1
    Instrmt_1_set.insert("1443104.170000");
    Instrmt_1.add_attribute("Exch", "SecurityExchange_t_1511596798"); // 1
    Instrmt_1_set.insert("SecurityExchange_t_1511596798");
    Instrmt_1.add_attribute("PosLmt", "1504972862"); // 1
    Instrmt_1_set.insert("1504972862");
    Instrmt_1.add_attribute("NTPosLmt", "1418054513"); // 1
    Instrmt_1_set.insert("1418054513");
    Instrmt_1.add_attribute("Issr", "Issuer_t_1707860314"); // 1
    Instrmt_1_set.insert("Issuer_t_1707860314");
    Instrmt_1.add_attribute("EncIssrLen", "512237969"); // 1
    Instrmt_1_set.insert("512237969");
    Instrmt_1.add_attribute("EncIssr", "EncodedIssuer_t_1842919645"); // 1
    Instrmt_1_set.insert("EncodedIssuer_t_1842919645");
    Instrmt_1.add_attribute("Desc", "SecurityDesc_t_28083651"); // 1
    Instrmt_1_set.insert("SecurityDesc_t_28083651");
    Instrmt_1.add_attribute("EncSecDescLen", "855584759"); // 1
    Instrmt_1_set.insert("855584759");
    Instrmt_1.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1777769865"); // 1
    Instrmt_1_set.insert("EncodedSecurityDesc_t_1777769865");
    Instrmt_1.add_attribute("Pool", "Pool_t_1873248079"); // 1
    Instrmt_1_set.insert("Pool_t_1873248079");
    Instrmt_1.add_attribute("CSetMo", "1819742377"); // 1
    Instrmt_1_set.insert("1819742377");
    Instrmt_1.add_attribute("CPPgm", "2"); // 1
    Instrmt_1_set.insert("2");
    Instrmt_1.add_attribute("CPRegT", "CPRegType_t_1100623194"); // 1
    Instrmt_1_set.insert("CPRegType_t_1100623194");
    Instrmt_1.add_attribute("Dated", "DatedDate_t_965500394"); // 1
    Instrmt_1_set.insert("DatedDate_t_965500394");
    Instrmt_1.add_attribute("IntAcrl", "InterestAccrualDate_t_1671876297"); // 1
    Instrmt_1_set.insert("InterestAccrualDate_t_1671876297");
    all_values.push_back(Instrmt_1_set);
    all_compo_names.insert("Instrmt_1_set");

    {
      xml_element AID_1{"AID"};
      multiset<string> AID_1_set;
      AID_1.add_attribute("AltID", "SecurityAltID_t_1066735283"); // 2
      AID_1_set.insert("SecurityAltID_t_1066735283");
      AID_1.add_attribute("AltIDSrc", "M"); // 2
      AID_1_set.insert("M");
      all_values.push_back(AID_1_set);
      all_compo_names.insert("AID_1_set");

      Instrmt_1.add_element(AID_1);
    }
    {
      xml_element SecXML_1{"SecXML"};
      multiset<string> SecXML_1_set;
      SecXML_1.add_attribute("Schema", "SecurityXMLSchema_t_742261707"); // 2
      SecXML_1_set.insert("SecurityXMLSchema_t_742261707");
      all_values.push_back(SecXML_1_set);
      all_compo_names.insert("SecXML_1_set");

      Instrmt_1.add_element(SecXML_1);
    }
    {
      xml_element Evnt_1{"Evnt"};
      multiset<string> Evnt_1_set;
      Evnt_1.add_attribute("EventTyp", "8"); // 2
      Evnt_1_set.insert("8");
      Evnt_1.add_attribute("Dt", "EventDate_t_883182406"); // 2
      Evnt_1_set.insert("EventDate_t_883182406");
      Evnt_1.add_attribute("Tm", "EventTime_t_14660415"); // 2
      Evnt_1_set.insert("EventTime_t_14660415");
      Evnt_1.add_attribute("Px", "4961532.350000"); // 2
      Evnt_1_set.insert("4961532.350000");
      Evnt_1.add_attribute("Txt", "EventText_t_1158034465"); // 2
      Evnt_1_set.insert("EventText_t_1158034465");
      all_values.push_back(Evnt_1_set);
      all_compo_names.insert("Evnt_1_set");

      Instrmt_1.add_element(Evnt_1);
    }
    {
      xml_element Pty_3{"Pty"};
      multiset<string> Pty_3_set;
      Pty_3.add_attribute("ID", "InstrumentPartyID_t_1887785979"); // 2
      Pty_3_set.insert("InstrumentPartyID_t_1887785979");
      Pty_3.add_attribute("Src", "B"); // 2
      Pty_3_set.insert("B");
      Pty_3.add_attribute("R", "14"); // 2
      Pty_3_set.insert("14");
      all_values.push_back(Pty_3_set);
      all_compo_names.insert("Pty_3_set");

      {
        xml_element Sub_3{"Sub"};
        multiset<string> Sub_3_set;
        Sub_3.add_attribute("ID", "InstrumentPartySubID_t_1026920048"); // 3
        Sub_3_set.insert("InstrumentPartySubID_t_1026920048");
        Sub_3.add_attribute("Typ", "9"); // 3
        Sub_3_set.insert("9");
        all_values.push_back(Sub_3_set);
        all_compo_names.insert("Sub_3_set");

        Pty_3.add_element(Sub_3);
      }
      Instrmt_1.add_element(Pty_3);
    }
    {
      xml_element CmplxEvnt_1{"CmplxEvnt"};
      multiset<string> CmplxEvnt_1_set;
      CmplxEvnt_1.add_attribute("Typ", "4"); // 2
      CmplxEvnt_1_set.insert("4");
      CmplxEvnt_1.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1197289702"); // 2
      CmplxEvnt_1_set.insert("ComplexOptPayoutAmount_t_1197289702");
      CmplxEvnt_1.add_attribute("Px", "16210199.840000"); // 2
      CmplxEvnt_1_set.insert("16210199.840000");
      CmplxEvnt_1.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_1_set.insert("3");
      CmplxEvnt_1.add_attribute("PxBndryPrcsn", "5547789.160000"); // 2
      CmplxEvnt_1_set.insert("5547789.160000");
      CmplxEvnt_1.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_1_set.insert("1");
      CmplxEvnt_1.add_attribute("Cond", "1"); // 2
      CmplxEvnt_1_set.insert("1");
      all_values.push_back(CmplxEvnt_1_set);
      all_compo_names.insert("CmplxEvnt_1_set");

      {
        xml_element EvntDts_1{"EvntDts"};
        multiset<string> EvntDts_1_set;
        EvntDts_1.add_attribute("StartDt", "ComplexEventStartDate_t_1067016885"); // 3
        EvntDts_1_set.insert("ComplexEventStartDate_t_1067016885");
        EvntDts_1.add_attribute("EndDt", "ComplexEventEndDate_t_587026847"); // 3
        EvntDts_1_set.insert("ComplexEventEndDate_t_587026847");
        all_values.push_back(EvntDts_1_set);
        all_compo_names.insert("EvntDts_1_set");

        {
          xml_element EvntTms_1{"EvntTms"};
          multiset<string> EvntTms_1_set;
          EvntTms_1.add_attribute("StartTm", "472740170"); // 4
          EvntTms_1_set.insert("472740170");
          EvntTms_1.add_attribute("EndTm", "1922601644"); // 4
          EvntTms_1_set.insert("1922601644");
          all_values.push_back(EvntTms_1_set);
          all_compo_names.insert("EvntTms_1_set");

          EvntDts_1.add_element(EvntTms_1);
        }
        CmplxEvnt_1.add_element(EvntDts_1);
      }
      Instrmt_1.add_element(CmplxEvnt_1);
    }
    elt.add_element(Instrmt_1);
  } // end Instrmt
  { // Leg
    xml_element Leg_0{"Leg"};
    multiset<string> Leg_0_set;
    Leg_0.add_attribute("Sym", "LegSymbol_t_198504601"); // 1
    Leg_0_set.insert("LegSymbol_t_198504601");
    Leg_0.add_attribute("Sfx", "CD"); // 1
    Leg_0_set.insert("CD");
    Leg_0.add_attribute("ID", "LegSecurityID_t_442002614"); // 1
    Leg_0_set.insert("LegSecurityID_t_442002614");
    Leg_0.add_attribute("Src", "B"); // 1
    Leg_0_set.insert("B");
    Leg_0.add_attribute("Prod", "3"); // 1
    Leg_0_set.insert("3");
    Leg_0.add_attribute("CFI", "LegCFICode_t_2113878911"); // 1
    Leg_0_set.insert("LegCFICode_t_2113878911");
    Leg_0.add_attribute("SecTyp", "CP"); // 1
    Leg_0_set.insert("CP");
    Leg_0.add_attribute("SecSubTyp", "LegSecuritySubType_t_754728563"); // 1
    Leg_0_set.insert("LegSecuritySubType_t_754728563");
    Leg_0.add_attribute("MMY", "708656970"); // 1
    Leg_0_set.insert("708656970");
    Leg_0.add_attribute("Mat", "LegMaturityDate_t_1255771999"); // 1
    Leg_0_set.insert("LegMaturityDate_t_1255771999");
    Leg_0.add_attribute("MatTm", "1637910969"); // 1
    Leg_0_set.insert("1637910969");
    Leg_0.add_attribute("CpnPmt", "LegCouponPaymentDate_t_723317385"); // 1
    Leg_0_set.insert("LegCouponPaymentDate_t_723317385");
    Leg_0.add_attribute("Issued", "LegIssueDate_t_1751925234"); // 1
    Leg_0_set.insert("LegIssueDate_t_1751925234");
    Leg_0.add_attribute("RepoCollSecTyp", "648461787"); // 1
    Leg_0_set.insert("648461787");
    Leg_0.add_attribute("RepoTrm", "463619717"); // 1
    Leg_0_set.insert("463619717");
    Leg_0.add_attribute("RepoRt", "13310253.740000"); // 1
    Leg_0_set.insert("13310253.740000");
    Leg_0.add_attribute("Fctr", "17864070.200000"); // 1
    Leg_0_set.insert("17864070.200000");
    Leg_0.add_attribute("CrdRtg", "LegCreditRating_t_1490539765"); // 1
    Leg_0_set.insert("LegCreditRating_t_1490539765");
    Leg_0.add_attribute("Rgstry", "LegInstrRegistry_t_660251293"); // 1
    Leg_0_set.insert("LegInstrRegistry_t_660251293");
    Leg_0.add_attribute("Ctry", "1159090074"); // 1
    Leg_0_set.insert("1159090074");
    Leg_0.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_540345819"); // 1
    Leg_0_set.insert("LegStateOrProvinceOfIssue_t_540345819");
    Leg_0.add_attribute("Lcl", "LegLocaleOfIssue_t_133787629"); // 1
    Leg_0_set.insert("LegLocaleOfIssue_t_133787629");
    Leg_0.add_attribute("Redeem", "LegRedemptionDate_t_2043369927"); // 1
    Leg_0_set.insert("LegRedemptionDate_t_2043369927");
    Leg_0.add_attribute("Strk", "10951247.350000"); // 1
    Leg_0_set.insert("10951247.350000");
    Leg_0.add_attribute("StrkCcy", "CAN"); // 1
    Leg_0_set.insert("CAN");
    Leg_0.add_attribute("OptA", "14657972"); // 1
    Leg_0_set.insert("14657972");
    Leg_0.add_attribute("Cmult", "16124053.270000"); // 1
    Leg_0_set.insert("16124053.270000");
    Leg_0.add_attribute("MultTyp", "1"); // 1
    Leg_0_set.insert("1");
    Leg_0.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_0_set.insert("2");
    Leg_0.add_attribute("UOM", "oz_tr"); // 1
    Leg_0_set.insert("oz_tr");
    Leg_0.add_attribute("UOMQty", "10117875.690000"); // 1
    Leg_0_set.insert("10117875.690000");
    Leg_0.add_attribute("PxUOM", "Alw"); // 1
    Leg_0_set.insert("Alw");
    Leg_0.add_attribute("PxUOMQty", "1242373.580000"); // 1
    Leg_0_set.insert("1242373.580000");
    Leg_0.add_attribute("TmUnit", "Min"); // 1
    Leg_0_set.insert("Min");
    Leg_0.add_attribute("ExerStyle", "1"); // 1
    Leg_0_set.insert("1");
    Leg_0.add_attribute("CpnRt", "906326.210000"); // 1
    Leg_0_set.insert("906326.210000");
    Leg_0.add_attribute("Exch", "LegSecurityExchange_t_381811148"); // 1
    Leg_0_set.insert("LegSecurityExchange_t_381811148");
    Leg_0.add_attribute("Issr", "LegIssuer_t_404758378"); // 1
    Leg_0_set.insert("LegIssuer_t_404758378");
    Leg_0.add_attribute("EncLegIssrLen", "799289591"); // 1
    Leg_0_set.insert("799289591");
    Leg_0.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1637583147"); // 1
    Leg_0_set.insert("EncodedLegIssuer_t_1637583147");
    Leg_0.add_attribute("Desc", "LegSecurityDesc_t_2042669348"); // 1
    Leg_0_set.insert("LegSecurityDesc_t_2042669348");
    Leg_0.add_attribute("EncLegSecDescLen", "1522606976"); // 1
    Leg_0_set.insert("1522606976");
    Leg_0.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1242024733"); // 1
    Leg_0_set.insert("EncodedLegSecurityDesc_t_1242024733");
    Leg_0.add_attribute("RatioQty", "5436474.870000"); // 1
    Leg_0_set.insert("5436474.870000");
    Leg_0.add_attribute("Side", "6"); // 1
    Leg_0_set.insert("6");
    Leg_0.add_attribute("Ccy", "CHF"); // 1
    Leg_0_set.insert("CHF");
    Leg_0.add_attribute("Pool", "LegPool_t_1329282810"); // 1
    Leg_0_set.insert("LegPool_t_1329282810");
    Leg_0.add_attribute("Dated", "LegDatedDate_t_1085817752"); // 1
    Leg_0_set.insert("LegDatedDate_t_1085817752");
    Leg_0.add_attribute("CSetMo", "1341660933"); // 1
    Leg_0_set.insert("1341660933");
    Leg_0.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1869628629"); // 1
    Leg_0_set.insert("LegInterestAccrualDate_t_1869628629");
    Leg_0.add_attribute("PutCall", "1219605381"); // 1
    Leg_0_set.insert("1219605381");
    Leg_0.add_attribute("LegOptionRatio", "12375472.120000"); // 1
    Leg_0_set.insert("12375472.120000");
    Leg_0.add_attribute("Px", "8172697.160000"); // 1
    Leg_0_set.insert("8172697.160000");
    all_values.push_back(Leg_0_set);
    all_compo_names.insert("Leg_0_set");

    {
      xml_element LegAID_0{"LegAID"};
      multiset<string> LegAID_0_set;
      LegAID_0.add_attribute("SecAltID", "LegSecurityAltID_t_97500213"); // 2
      LegAID_0_set.insert("LegSecurityAltID_t_97500213");
      LegAID_0.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_0_set.insert("3");
      all_values.push_back(LegAID_0_set);
      all_compo_names.insert("LegAID_0_set");

      Leg_0.add_element(LegAID_0);
    }
    elt.add_element(Leg_0);
  } // end Leg
  { // Leg
    xml_element Leg_1{"Leg"};
    multiset<string> Leg_1_set;
    Leg_1.add_attribute("Sym", "LegSymbol_t_831927689"); // 1
    Leg_1_set.insert("LegSymbol_t_831927689");
    Leg_1.add_attribute("Sfx", "CD"); // 1
    Leg_1_set.insert("CD");
    Leg_1.add_attribute("ID", "LegSecurityID_t_243889329"); // 1
    Leg_1_set.insert("LegSecurityID_t_243889329");
    Leg_1.add_attribute("Src", "5"); // 1
    Leg_1_set.insert("5");
    Leg_1.add_attribute("Prod", "11"); // 1
    Leg_1_set.insert("11");
    Leg_1.add_attribute("CFI", "LegCFICode_t_1255676898"); // 1
    Leg_1_set.insert("LegCFICode_t_1255676898");
    Leg_1.add_attribute("SecTyp", "MPO"); // 1
    Leg_1_set.insert("MPO");
    Leg_1.add_attribute("SecSubTyp", "LegSecuritySubType_t_1516377642"); // 1
    Leg_1_set.insert("LegSecuritySubType_t_1516377642");
    Leg_1.add_attribute("MMY", "1419108615"); // 1
    Leg_1_set.insert("1419108615");
    Leg_1.add_attribute("Mat", "LegMaturityDate_t_1656369816"); // 1
    Leg_1_set.insert("LegMaturityDate_t_1656369816");
    Leg_1.add_attribute("MatTm", "1607010263"); // 1
    Leg_1_set.insert("1607010263");
    Leg_1.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1800919763"); // 1
    Leg_1_set.insert("LegCouponPaymentDate_t_1800919763");
    Leg_1.add_attribute("Issued", "LegIssueDate_t_2061128194"); // 1
    Leg_1_set.insert("LegIssueDate_t_2061128194");
    Leg_1.add_attribute("RepoCollSecTyp", "258816206"); // 1
    Leg_1_set.insert("258816206");
    Leg_1.add_attribute("RepoTrm", "1291019262"); // 1
    Leg_1_set.insert("1291019262");
    Leg_1.add_attribute("RepoRt", "19563138.940000"); // 1
    Leg_1_set.insert("19563138.940000");
    Leg_1.add_attribute("Fctr", "17814231.820000"); // 1
    Leg_1_set.insert("17814231.820000");
    Leg_1.add_attribute("CrdRtg", "LegCreditRating_t_385560347"); // 1
    Leg_1_set.insert("LegCreditRating_t_385560347");
    Leg_1.add_attribute("Rgstry", "LegInstrRegistry_t_352477733"); // 1
    Leg_1_set.insert("LegInstrRegistry_t_352477733");
    Leg_1.add_attribute("Ctry", "1620166228"); // 1
    Leg_1_set.insert("1620166228");
    Leg_1.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_811126806"); // 1
    Leg_1_set.insert("LegStateOrProvinceOfIssue_t_811126806");
    Leg_1.add_attribute("Lcl", "LegLocaleOfIssue_t_535048592"); // 1
    Leg_1_set.insert("LegLocaleOfIssue_t_535048592");
    Leg_1.add_attribute("Redeem", "LegRedemptionDate_t_801965390"); // 1
    Leg_1_set.insert("LegRedemptionDate_t_801965390");
    Leg_1.add_attribute("Strk", "18969445.580000"); // 1
    Leg_1_set.insert("18969445.580000");
    Leg_1.add_attribute("StrkCcy", "JPY"); // 1
    Leg_1_set.insert("JPY");
    Leg_1.add_attribute("OptA", "969066292"); // 1
    Leg_1_set.insert("969066292");
    Leg_1.add_attribute("Cmult", "9667730.900000"); // 1
    Leg_1_set.insert("9667730.900000");
    Leg_1.add_attribute("MultTyp", "0"); // 1
    Leg_1_set.insert("0");
    Leg_1.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_1_set.insert("0");
    Leg_1.add_attribute("UOM", "Bbl"); // 1
    Leg_1_set.insert("Bbl");
    Leg_1.add_attribute("UOMQty", "258241.290000"); // 1
    Leg_1_set.insert("258241.290000");
    Leg_1.add_attribute("PxUOM", "Bu"); // 1
    Leg_1_set.insert("Bu");
    Leg_1.add_attribute("PxUOMQty", "6412687.820000"); // 1
    Leg_1_set.insert("6412687.820000");
    Leg_1.add_attribute("TmUnit", "Wk"); // 1
    Leg_1_set.insert("Wk");
    Leg_1.add_attribute("ExerStyle", "1"); // 1
    Leg_1_set.insert("1");
    Leg_1.add_attribute("CpnRt", "18969456.800000"); // 1
    Leg_1_set.insert("18969456.800000");
    Leg_1.add_attribute("Exch", "LegSecurityExchange_t_506384140"); // 1
    Leg_1_set.insert("LegSecurityExchange_t_506384140");
    Leg_1.add_attribute("Issr", "LegIssuer_t_1390022675"); // 1
    Leg_1_set.insert("LegIssuer_t_1390022675");
    Leg_1.add_attribute("EncLegIssrLen", "1168570648"); // 1
    Leg_1_set.insert("1168570648");
    Leg_1.add_attribute("EncLegIssr", "EncodedLegIssuer_t_15270308"); // 1
    Leg_1_set.insert("EncodedLegIssuer_t_15270308");
    Leg_1.add_attribute("Desc", "LegSecurityDesc_t_849549290"); // 1
    Leg_1_set.insert("LegSecurityDesc_t_849549290");
    Leg_1.add_attribute("EncLegSecDescLen", "822006763"); // 1
    Leg_1_set.insert("822006763");
    Leg_1.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2076398503"); // 1
    Leg_1_set.insert("EncodedLegSecurityDesc_t_2076398503");
    Leg_1.add_attribute("RatioQty", "11083654.960000"); // 1
    Leg_1_set.insert("11083654.960000");
    Leg_1.add_attribute("Side", "B"); // 1
    Leg_1_set.insert("B");
    Leg_1.add_attribute("Ccy", "USD"); // 1
    Leg_1_set.insert("USD");
    Leg_1.add_attribute("Pool", "LegPool_t_351102725"); // 1
    Leg_1_set.insert("LegPool_t_351102725");
    Leg_1.add_attribute("Dated", "LegDatedDate_t_90222835"); // 1
    Leg_1_set.insert("LegDatedDate_t_90222835");
    Leg_1.add_attribute("CSetMo", "214987610"); // 1
    Leg_1_set.insert("214987610");
    Leg_1.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1162229532"); // 1
    Leg_1_set.insert("LegInterestAccrualDate_t_1162229532");
    Leg_1.add_attribute("PutCall", "625271427"); // 1
    Leg_1_set.insert("625271427");
    Leg_1.add_attribute("LegOptionRatio", "10169530.010000"); // 1
    Leg_1_set.insert("10169530.010000");
    Leg_1.add_attribute("Px", "9116904.420000"); // 1
    Leg_1_set.insert("9116904.420000");
    all_values.push_back(Leg_1_set);
    all_compo_names.insert("Leg_1_set");

    {
      xml_element LegAID_1{"LegAID"};
      multiset<string> LegAID_1_set;
      LegAID_1.add_attribute("SecAltID", "LegSecurityAltID_t_354497305"); // 2
      LegAID_1_set.insert("LegSecurityAltID_t_354497305");
      LegAID_1.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_1_set.insert("4");
      all_values.push_back(LegAID_1_set);
      all_compo_names.insert("LegAID_1_set");

      Leg_1.add_element(LegAID_1);
    }
    elt.add_element(Leg_1);
  } // end Leg
  { // Undly
    xml_element Undly_0{"Undly"};
    multiset<string> Undly_0_set;
    Undly_0.add_attribute("Sym", "UnderlyingSymbol_t_1321270396"); // 1
    Undly_0_set.insert("UnderlyingSymbol_t_1321270396");
    Undly_0.add_attribute("Sfx", "WI"); // 1
    Undly_0_set.insert("WI");
    Undly_0.add_attribute("ID", "UnderlyingSecurityID_t_799839591"); // 1
    Undly_0_set.insert("UnderlyingSecurityID_t_799839591");
    Undly_0.add_attribute("Src", "F"); // 1
    Undly_0_set.insert("F");
    Undly_0.add_attribute("Prod", "7"); // 1
    Undly_0_set.insert("7");
    Undly_0.add_attribute("CFI", "UnderlyingCFICode_t_1428827988"); // 1
    Undly_0_set.insert("UnderlyingCFICode_t_1428827988");
    Undly_0.add_attribute("SecTyp", "PS"); // 1
    Undly_0_set.insert("PS");
    Undly_0.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1408311730"); // 1
    Undly_0_set.insert("UnderlyingSecuritySubType_t_1408311730");
    Undly_0.add_attribute("MMY", "1302473021"); // 1
    Undly_0_set.insert("1302473021");
    Undly_0.add_attribute("Mat", "UnderlyingMaturityDate_t_2109380663"); // 1
    Undly_0_set.insert("UnderlyingMaturityDate_t_2109380663");
    Undly_0.add_attribute("MatTm", "1914695871"); // 1
    Undly_0_set.insert("1914695871");
    Undly_0.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_545012048"); // 1
    Undly_0_set.insert("UnderlyingCouponPaymentDate_t_545012048");
    Undly_0.add_attribute("RestrctTyp", "XR"); // 1
    Undly_0_set.insert("XR");
    Undly_0.add_attribute("Snrty", "SB"); // 1
    Undly_0_set.insert("SB");
    Undly_0.add_attribute("NotlPctOut", "13945613.380000"); // 1
    Undly_0_set.insert("13945613.380000");
    Undly_0.add_attribute("OrigNotlPctOut", "19524744.260000"); // 1
    Undly_0_set.insert("19524744.260000");
    Undly_0.add_attribute("AttchPnt", "18588810.340000"); // 1
    Undly_0_set.insert("18588810.340000");
    Undly_0.add_attribute("DetchPnt", "3554431.860000"); // 1
    Undly_0_set.insert("3554431.860000");
    Undly_0.add_attribute("Issued", "UnderlyingIssueDate_t_1918016804"); // 1
    Undly_0_set.insert("UnderlyingIssueDate_t_1918016804");
    Undly_0.add_attribute("RepoCollSecTyp", "1596626136"); // 1
    Undly_0_set.insert("1596626136");
    Undly_0.add_attribute("RepoTrm", "1097748217"); // 1
    Undly_0_set.insert("1097748217");
    Undly_0.add_attribute("RepoRt", "1216358.820000"); // 1
    Undly_0_set.insert("1216358.820000");
    Undly_0.add_attribute("Fctr", "16868489.710000"); // 1
    Undly_0_set.insert("16868489.710000");
    Undly_0.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1312735827"); // 1
    Undly_0_set.insert("UnderlyingCreditRating_t_1312735827");
    Undly_0.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1283865414"); // 1
    Undly_0_set.insert("UnderlyingInstrRegistry_t_1283865414");
    Undly_0.add_attribute("Ctry", "164636750"); // 1
    Undly_0_set.insert("164636750");
    Undly_0.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_182205180"); // 1
    Undly_0_set.insert("UnderlyingStateOrProvinceOfIssue_t_182205180");
    Undly_0.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_48072208"); // 1
    Undly_0_set.insert("UnderlyingLocaleOfIssue_t_48072208");
    Undly_0.add_attribute("Redeem", "UnderlyingRedemptionDate_t_519134056"); // 1
    Undly_0_set.insert("UnderlyingRedemptionDate_t_519134056");
    Undly_0.add_attribute("StrkPx", "17232685.530000"); // 1
    Undly_0_set.insert("17232685.530000");
    Undly_0.add_attribute("StrkCcy", "GBP"); // 1
    Undly_0_set.insert("GBP");
    Undly_0.add_attribute("OptA", "310744719"); // 1
    Undly_0_set.insert("310744719");
    Undly_0.add_attribute("Mult", "5811848.860000"); // 1
    Undly_0_set.insert("5811848.860000");
    Undly_0.add_attribute("MultTyp", "2"); // 1
    Undly_0_set.insert("2");
    Undly_0.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_0_set.insert("2");
    Undly_0.add_attribute("UOM", "MWh"); // 1
    Undly_0_set.insert("MWh");
    Undly_0.add_attribute("UOMQty", "16240056.350000"); // 1
    Undly_0_set.insert("16240056.350000");
    Undly_0.add_attribute("PxUOM", "tn"); // 1
    Undly_0_set.insert("tn");
    Undly_0.add_attribute("PxUOMQty", "11650022.480000"); // 1
    Undly_0_set.insert("11650022.480000");
    Undly_0.add_attribute("TmUnit", "D"); // 1
    Undly_0_set.insert("D");
    Undly_0.add_attribute("ExerStyle", "2"); // 1
    Undly_0_set.insert("2");
    Undly_0.add_attribute("CpnRt", "17100142.970000"); // 1
    Undly_0_set.insert("17100142.970000");
    Undly_0.add_attribute("Exch", "UnderlyingSecurityExchange_t_568886665"); // 1
    Undly_0_set.insert("UnderlyingSecurityExchange_t_568886665");
    Undly_0.add_attribute("Issr", "UnderlyingIssuer_t_2029535147"); // 1
    Undly_0_set.insert("UnderlyingIssuer_t_2029535147");
    Undly_0.add_attribute("EncUndIssrLen", "957091987"); // 1
    Undly_0_set.insert("957091987");
    Undly_0.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_373877443"); // 1
    Undly_0_set.insert("EncodedUnderlyingIssuer_t_373877443");
    Undly_0.add_attribute("Desc", "UnderlyingSecurityDesc_t_1740932533"); // 1
    Undly_0_set.insert("UnderlyingSecurityDesc_t_1740932533");
    Undly_0.add_attribute("EncUndSecDescLen", "1312535174"); // 1
    Undly_0_set.insert("1312535174");
    Undly_0.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_144410600"); // 1
    Undly_0_set.insert("EncodedUnderlyingSecurityDesc_t_144410600");
    Undly_0.add_attribute("CPPgm", "UnderlyingCPProgram_t_1190075021"); // 1
    Undly_0_set.insert("UnderlyingCPProgram_t_1190075021");
    Undly_0.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_262799743"); // 1
    Undly_0_set.insert("UnderlyingCPRegType_t_262799743");
    Undly_0.add_attribute("AllocPct", "2660464.820000"); // 1
    Undly_0_set.insert("2660464.820000");
    Undly_0.add_attribute("Ccy", "JPY"); // 1
    Undly_0_set.insert("JPY");
    Undly_0.add_attribute("Qty", "15499118.960000"); // 1
    Undly_0_set.insert("15499118.960000");
    Undly_0.add_attribute("SettlTyp", "4"); // 1
    Undly_0_set.insert("4");
    Undly_0.add_attribute("CashAmt", "UnderlyingCashAmount_t_1757740751"); // 1
    Undly_0_set.insert("UnderlyingCashAmount_t_1757740751");
    Undly_0.add_attribute("CashTyp", "FIXED"); // 1
    Undly_0_set.insert("FIXED");
    Undly_0.add_attribute("Px", "14132111.510000"); // 1
    Undly_0_set.insert("14132111.510000");
    Undly_0.add_attribute("DirtPx", "13335256.560000"); // 1
    Undly_0_set.insert("13335256.560000");
    Undly_0.add_attribute("EndPx", "13793293.990000"); // 1
    Undly_0_set.insert("13793293.990000");
    Undly_0.add_attribute("StartVal", "UnderlyingStartValue_t_1106131955"); // 1
    Undly_0_set.insert("UnderlyingStartValue_t_1106131955");
    Undly_0.add_attribute("CurVal", "UnderlyingCurrentValue_t_1644270375"); // 1
    Undly_0_set.insert("UnderlyingCurrentValue_t_1644270375");
    Undly_0.add_attribute("EndVal", "UnderlyingEndValue_t_1960514286"); // 1
    Undly_0_set.insert("UnderlyingEndValue_t_1960514286");
    Undly_0.add_attribute("AdjQty", "3702189.590000"); // 1
    Undly_0_set.insert("3702189.590000");
    Undly_0.add_attribute("FxRate", "5683153.890000"); // 1
    Undly_0_set.insert("5683153.890000");
    Undly_0.add_attribute("FxRateCalc", "D"); // 1
    Undly_0_set.insert("D");
    Undly_0.add_attribute("CapValu", "UnderlyingCapValue_t_1994224594"); // 1
    Undly_0_set.insert("UnderlyingCapValue_t_1994224594");
    Undly_0.add_attribute("SetMeth", "UnderlyingSettlMethod_t_900672134"); // 1
    Undly_0_set.insert("UnderlyingSettlMethod_t_900672134");
    Undly_0.add_attribute("PutCall", "840562113"); // 1
    Undly_0_set.insert("840562113");
    all_values.push_back(Undly_0_set);
    all_compo_names.insert("Undly_0_set");

    {
      xml_element UndAID_0{"UndAID"};
      multiset<string> UndAID_0_set;
      UndAID_0.add_attribute("AltID", "UnderlyingSecurityAltID_t_1432643596"); // 2
      UndAID_0_set.insert("UnderlyingSecurityAltID_t_1432643596");
      UndAID_0.add_attribute("AltIDSrc", "E"); // 2
      UndAID_0_set.insert("E");
      all_values.push_back(UndAID_0_set);
      all_compo_names.insert("UndAID_0_set");

      Undly_0.add_element(UndAID_0);
    }
    {
      xml_element Stip_0{"Stip"};
      multiset<string> Stip_0_set;
      Stip_0.add_attribute("Typ", "PXSOURCE"); // 2
      Stip_0_set.insert("PXSOURCE");
      Stip_0.add_attribute("Val", "UnderlyingStipValue_t_2001530261"); // 2
      Stip_0_set.insert("UnderlyingStipValue_t_2001530261");
      all_values.push_back(Stip_0_set);
      all_compo_names.insert("Stip_0_set");

      Undly_0.add_element(Stip_0);
    }
    {
      xml_element Pty_4{"Pty"};
      multiset<string> Pty_4_set;
      Pty_4.add_attribute("ID", "UnderlyingInstrumentPartyID_t_882292600"); // 2
      Pty_4_set.insert("UnderlyingInstrumentPartyID_t_882292600");
      Pty_4.add_attribute("Src", "9"); // 2
      Pty_4_set.insert("9");
      Pty_4.add_attribute("R", "56"); // 2
      Pty_4_set.insert("56");
      all_values.push_back(Pty_4_set);
      all_compo_names.insert("Pty_4_set");

      {
        xml_element Sub_4{"Sub"};
        multiset<string> Sub_4_set;
        Sub_4.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_475741486"); // 3
        Sub_4_set.insert("UnderlyingInstrumentPartySubID_t_475741486");
        Sub_4.add_attribute("Typ", "27"); // 3
        Sub_4_set.insert("27");
        all_values.push_back(Sub_4_set);
        all_compo_names.insert("Sub_4_set");

        Pty_4.add_element(Sub_4);
      }
      Undly_0.add_element(Pty_4);
    }
    elt.add_element(Undly_0);
  } // end Undly
  { // Undly
    xml_element Undly_1{"Undly"};
    multiset<string> Undly_1_set;
    Undly_1.add_attribute("Sym", "UnderlyingSymbol_t_372334657"); // 1
    Undly_1_set.insert("UnderlyingSymbol_t_372334657");
    Undly_1.add_attribute("Sfx", "WI"); // 1
    Undly_1_set.insert("WI");
    Undly_1.add_attribute("ID", "UnderlyingSecurityID_t_788036019"); // 1
    Undly_1_set.insert("UnderlyingSecurityID_t_788036019");
    Undly_1.add_attribute("Src", "C"); // 1
    Undly_1_set.insert("C");
    Undly_1.add_attribute("Prod", "12"); // 1
    Undly_1_set.insert("12");
    Undly_1.add_attribute("CFI", "UnderlyingCFICode_t_216087941"); // 1
    Undly_1_set.insert("UnderlyingCFICode_t_216087941");
    Undly_1.add_attribute("SecTyp", "FOR"); // 1
    Undly_1_set.insert("FOR");
    Undly_1.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1141850299"); // 1
    Undly_1_set.insert("UnderlyingSecuritySubType_t_1141850299");
    Undly_1.add_attribute("MMY", "1973828692"); // 1
    Undly_1_set.insert("1973828692");
    Undly_1.add_attribute("Mat", "UnderlyingMaturityDate_t_1638793491"); // 1
    Undly_1_set.insert("UnderlyingMaturityDate_t_1638793491");
    Undly_1.add_attribute("MatTm", "407577802"); // 1
    Undly_1_set.insert("407577802");
    Undly_1.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1159870701"); // 1
    Undly_1_set.insert("UnderlyingCouponPaymentDate_t_1159870701");
    Undly_1.add_attribute("RestrctTyp", "XR"); // 1
    Undly_1_set.insert("XR");
    Undly_1.add_attribute("Snrty", "SD"); // 1
    Undly_1_set.insert("SD");
    Undly_1.add_attribute("NotlPctOut", "6566574.280000"); // 1
    Undly_1_set.insert("6566574.280000");
    Undly_1.add_attribute("OrigNotlPctOut", "6836698.810000"); // 1
    Undly_1_set.insert("6836698.810000");
    Undly_1.add_attribute("AttchPnt", "18839287.160000"); // 1
    Undly_1_set.insert("18839287.160000");
    Undly_1.add_attribute("DetchPnt", "12249728.180000"); // 1
    Undly_1_set.insert("12249728.180000");
    Undly_1.add_attribute("Issued", "UnderlyingIssueDate_t_359229746"); // 1
    Undly_1_set.insert("UnderlyingIssueDate_t_359229746");
    Undly_1.add_attribute("RepoCollSecTyp", "1730669663"); // 1
    Undly_1_set.insert("1730669663");
    Undly_1.add_attribute("RepoTrm", "2125644952"); // 1
    Undly_1_set.insert("2125644952");
    Undly_1.add_attribute("RepoRt", "11997918.590000"); // 1
    Undly_1_set.insert("11997918.590000");
    Undly_1.add_attribute("Fctr", "10158296.110000"); // 1
    Undly_1_set.insert("10158296.110000");
    Undly_1.add_attribute("CrdRtg", "UnderlyingCreditRating_t_978402405"); // 1
    Undly_1_set.insert("UnderlyingCreditRating_t_978402405");
    Undly_1.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1602884622"); // 1
    Undly_1_set.insert("UnderlyingInstrRegistry_t_1602884622");
    Undly_1.add_attribute("Ctry", "869876225"); // 1
    Undly_1_set.insert("869876225");
    Undly_1.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1860695006"); // 1
    Undly_1_set.insert("UnderlyingStateOrProvinceOfIssue_t_1860695006");
    Undly_1.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_815585724"); // 1
    Undly_1_set.insert("UnderlyingLocaleOfIssue_t_815585724");
    Undly_1.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1097800282"); // 1
    Undly_1_set.insert("UnderlyingRedemptionDate_t_1097800282");
    Undly_1.add_attribute("StrkPx", "1889528.440000"); // 1
    Undly_1_set.insert("1889528.440000");
    Undly_1.add_attribute("StrkCcy", "CAN"); // 1
    Undly_1_set.insert("CAN");
    Undly_1.add_attribute("OptA", "1854769351"); // 1
    Undly_1_set.insert("1854769351");
    Undly_1.add_attribute("Mult", "21288580.190000"); // 1
    Undly_1_set.insert("21288580.190000");
    Undly_1.add_attribute("MultTyp", "2"); // 1
    Undly_1_set.insert("2");
    Undly_1.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_1_set.insert("0");
    Undly_1.add_attribute("UOM", "oz_tr"); // 1
    Undly_1_set.insert("oz_tr");
    Undly_1.add_attribute("UOMQty", "18418.170000"); // 1
    Undly_1_set.insert("18418.170000");
    Undly_1.add_attribute("PxUOM", "Gal"); // 1
    Undly_1_set.insert("Gal");
    Undly_1.add_attribute("PxUOMQty", "238073.570000"); // 1
    Undly_1_set.insert("238073.570000");
    Undly_1.add_attribute("TmUnit", "Wk"); // 1
    Undly_1_set.insert("Wk");
    Undly_1.add_attribute("ExerStyle", "1"); // 1
    Undly_1_set.insert("1");
    Undly_1.add_attribute("CpnRt", "11836780.580000"); // 1
    Undly_1_set.insert("11836780.580000");
    Undly_1.add_attribute("Exch", "UnderlyingSecurityExchange_t_363790903"); // 1
    Undly_1_set.insert("UnderlyingSecurityExchange_t_363790903");
    Undly_1.add_attribute("Issr", "UnderlyingIssuer_t_870713117"); // 1
    Undly_1_set.insert("UnderlyingIssuer_t_870713117");
    Undly_1.add_attribute("EncUndIssrLen", "1840335486"); // 1
    Undly_1_set.insert("1840335486");
    Undly_1.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1047460784"); // 1
    Undly_1_set.insert("EncodedUnderlyingIssuer_t_1047460784");
    Undly_1.add_attribute("Desc", "UnderlyingSecurityDesc_t_607158186"); // 1
    Undly_1_set.insert("UnderlyingSecurityDesc_t_607158186");
    Undly_1.add_attribute("EncUndSecDescLen", "917824656"); // 1
    Undly_1_set.insert("917824656");
    Undly_1.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1406690530"); // 1
    Undly_1_set.insert("EncodedUnderlyingSecurityDesc_t_1406690530");
    Undly_1.add_attribute("CPPgm", "UnderlyingCPProgram_t_190344201"); // 1
    Undly_1_set.insert("UnderlyingCPProgram_t_190344201");
    Undly_1.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_895985960"); // 1
    Undly_1_set.insert("UnderlyingCPRegType_t_895985960");
    Undly_1.add_attribute("AllocPct", "4589987.420000"); // 1
    Undly_1_set.insert("4589987.420000");
    Undly_1.add_attribute("Ccy", "USD"); // 1
    Undly_1_set.insert("USD");
    Undly_1.add_attribute("Qty", "20618833.640000"); // 1
    Undly_1_set.insert("20618833.640000");
    Undly_1.add_attribute("SettlTyp", "2"); // 1
    Undly_1_set.insert("2");
    Undly_1.add_attribute("CashAmt", "UnderlyingCashAmount_t_1587599724"); // 1
    Undly_1_set.insert("UnderlyingCashAmount_t_1587599724");
    Undly_1.add_attribute("CashTyp", "FIXED"); // 1
    Undly_1_set.insert("FIXED");
    Undly_1.add_attribute("Px", "10263666.710000"); // 1
    Undly_1_set.insert("10263666.710000");
    Undly_1.add_attribute("DirtPx", "17765525.680000"); // 1
    Undly_1_set.insert("17765525.680000");
    Undly_1.add_attribute("EndPx", "20708074.400000"); // 1
    Undly_1_set.insert("20708074.400000");
    Undly_1.add_attribute("StartVal", "UnderlyingStartValue_t_349017962"); // 1
    Undly_1_set.insert("UnderlyingStartValue_t_349017962");
    Undly_1.add_attribute("CurVal", "UnderlyingCurrentValue_t_1483838271"); // 1
    Undly_1_set.insert("UnderlyingCurrentValue_t_1483838271");
    Undly_1.add_attribute("EndVal", "UnderlyingEndValue_t_2052181811"); // 1
    Undly_1_set.insert("UnderlyingEndValue_t_2052181811");
    Undly_1.add_attribute("AdjQty", "3100503.920000"); // 1
    Undly_1_set.insert("3100503.920000");
    Undly_1.add_attribute("FxRate", "14388971.790000"); // 1
    Undly_1_set.insert("14388971.790000");
    Undly_1.add_attribute("FxRateCalc", "D"); // 1
    Undly_1_set.insert("D");
    Undly_1.add_attribute("CapValu", "UnderlyingCapValue_t_311892209"); // 1
    Undly_1_set.insert("UnderlyingCapValue_t_311892209");
    Undly_1.add_attribute("SetMeth", "UnderlyingSettlMethod_t_388322737"); // 1
    Undly_1_set.insert("UnderlyingSettlMethod_t_388322737");
    Undly_1.add_attribute("PutCall", "125967832"); // 1
    Undly_1_set.insert("125967832");
    all_values.push_back(Undly_1_set);
    all_compo_names.insert("Undly_1_set");

    {
      xml_element UndAID_1{"UndAID"};
      multiset<string> UndAID_1_set;
      UndAID_1.add_attribute("AltID", "UnderlyingSecurityAltID_t_1952527518"); // 2
      UndAID_1_set.insert("UnderlyingSecurityAltID_t_1952527518");
      UndAID_1.add_attribute("AltIDSrc", "F"); // 2
      UndAID_1_set.insert("F");
      all_values.push_back(UndAID_1_set);
      all_compo_names.insert("UndAID_1_set");

      Undly_1.add_element(UndAID_1);
    }
    {
      xml_element Stip_1{"Stip"};
      multiset<string> Stip_1_set;
      Stip_1.add_attribute("Typ", "SUBSFREQ"); // 2
      Stip_1_set.insert("SUBSFREQ");
      Stip_1.add_attribute("Val", "UnderlyingStipValue_t_168834773"); // 2
      Stip_1_set.insert("UnderlyingStipValue_t_168834773");
      all_values.push_back(Stip_1_set);
      all_compo_names.insert("Stip_1_set");

      Undly_1.add_element(Stip_1);
    }
    {
      xml_element Pty_5{"Pty"};
      multiset<string> Pty_5_set;
      Pty_5.add_attribute("ID", "UnderlyingInstrumentPartyID_t_616039215"); // 2
      Pty_5_set.insert("UnderlyingInstrumentPartyID_t_616039215");
      Pty_5.add_attribute("Src", "6"); // 2
      Pty_5_set.insert("6");
      Pty_5.add_attribute("R", "11"); // 2
      Pty_5_set.insert("11");
      all_values.push_back(Pty_5_set);
      all_compo_names.insert("Pty_5_set");

      {
        xml_element Sub_5{"Sub"};
        multiset<string> Sub_5_set;
        Sub_5.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1223197401"); // 3
        Sub_5_set.insert("UnderlyingInstrumentPartySubID_t_1223197401");
        Sub_5.add_attribute("Typ", "22"); // 3
        Sub_5_set.insert("22");
        all_values.push_back(Sub_5_set);
        all_compo_names.insert("Sub_5_set");

        Pty_5.add_element(Sub_5);
      }
      Undly_1.add_element(Pty_5);
    }
    elt.add_element(Undly_1);
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
