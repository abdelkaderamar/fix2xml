#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatus_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatus_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_185791393"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesReqID_t_185791393");
  elt.add_attribute("MktID", "MarketID_t_1194446882"); // 0
  TradingSessionStatus_message_t_0.insert("MarketID_t_1194446882");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_249096033"); // 0
  TradingSessionStatus_message_t_0.insert("MarketSegmentID_t_249096033");
  elt.add_attribute("SesID", "2"); // 0
  TradingSessionStatus_message_t_0.insert("2");
  elt.add_attribute("SesSub", "7"); // 0
  TradingSessionStatus_message_t_0.insert("7");
  elt.add_attribute("Method", "2"); // 0
  TradingSessionStatus_message_t_0.insert("2");
  elt.add_attribute("Mode", "3"); // 0
  TradingSessionStatus_message_t_0.insert("3");
  elt.add_attribute("Unsol", "N"); // 0
  TradingSessionStatus_message_t_0.insert("N");
  elt.add_attribute("Stat", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("TradSesEvent", "2"); // 0
  TradingSessionStatus_message_t_0.insert("2");
  elt.add_attribute("StatRejRsn", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("StartTm", "TradSesStartTime_t_1274788239"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesStartTime_t_1274788239");
  elt.add_attribute("OpenTm", "TradSesOpenTime_t_138848835"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesOpenTime_t_138848835");
  elt.add_attribute("PreClsTm", "TradSesPreCloseTime_t_671758204"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesPreCloseTime_t_671758204");
  elt.add_attribute("ClsTm", "TradSesCloseTime_t_1982351151"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesCloseTime_t_1982351151");
  elt.add_attribute("EndTm", "TradSesEndTime_t_1609507167"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesEndTime_t_1609507167");
  elt.add_attribute("TotVolTrdd", "9868411.780000"); // 0
  TradingSessionStatus_message_t_0.insert("9868411.780000");
  elt.add_attribute("Txt", "Text_t_1718001288"); // 0
  TradingSessionStatus_message_t_0.insert("Text_t_1718001288");
  elt.add_attribute("EncTxtLen", "435521970"); // 0
  TradingSessionStatus_message_t_0.insert("435521970");
  elt.add_attribute("EncTxt", "EncodedText_t_1231869677"); // 0
  TradingSessionStatus_message_t_0.insert("EncodedText_t_1231869677");
  all_values.push_back(TradingSessionStatus_message_t_0);
  all_compo_names.insert("TradingSessionStatus_message_t");

  { // Hdr
    xml_element Hdr_103{"Hdr"};
    multiset<string> Hdr_103_set;
    Hdr_103.add_attribute("SeqNum", "1105061724"); // 1
    Hdr_103_set.insert("1105061724");
    Hdr_103.add_attribute("SID", "SenderCompID_t_1493167129"); // 1
    Hdr_103_set.insert("SenderCompID_t_1493167129");
    Hdr_103.add_attribute("TID", "TargetCompID_t_2051667205"); // 1
    Hdr_103_set.insert("TargetCompID_t_2051667205");
    Hdr_103.add_attribute("OBID", "OnBehalfOfCompID_t_502745540"); // 1
    Hdr_103_set.insert("OnBehalfOfCompID_t_502745540");
    Hdr_103.add_attribute("D2ID", "DeliverToCompID_t_873669102"); // 1
    Hdr_103_set.insert("DeliverToCompID_t_873669102");
    Hdr_103.add_attribute("SSub", "SenderSubID_t_421871769"); // 1
    Hdr_103_set.insert("SenderSubID_t_421871769");
    Hdr_103.add_attribute("SLoc", "SenderLocationID_t_207857225"); // 1
    Hdr_103_set.insert("SenderLocationID_t_207857225");
    Hdr_103.add_attribute("TSub", "TargetSubID_t_755260489"); // 1
    Hdr_103_set.insert("TargetSubID_t_755260489");
    Hdr_103.add_attribute("TLoc", "TargetLocationID_t_728453293"); // 1
    Hdr_103_set.insert("TargetLocationID_t_728453293");
    Hdr_103.add_attribute("OBSub", "OnBehalfOfSubID_t_331101560"); // 1
    Hdr_103_set.insert("OnBehalfOfSubID_t_331101560");
    Hdr_103.add_attribute("OBLoc", "OnBehalfOfLocationID_t_879956387"); // 1
    Hdr_103_set.insert("OnBehalfOfLocationID_t_879956387");
    Hdr_103.add_attribute("D2Sub", "DeliverToSubID_t_914244686"); // 1
    Hdr_103_set.insert("DeliverToSubID_t_914244686");
    Hdr_103.add_attribute("D2Loc", "DeliverToLocationID_t_1525548442"); // 1
    Hdr_103_set.insert("DeliverToLocationID_t_1525548442");
    Hdr_103.add_attribute("PosDup", "N"); // 1
    Hdr_103_set.insert("N");
    Hdr_103.add_attribute("PosRsnd", "Y"); // 1
    Hdr_103_set.insert("Y");
    Hdr_103.add_attribute("Snt", "SendingTime_t_1758883648"); // 1
    Hdr_103_set.insert("SendingTime_t_1758883648");
    Hdr_103.add_attribute("OrigSnt", "OrigSendingTime_t_708769745"); // 1
    Hdr_103_set.insert("OrigSendingTime_t_708769745");
    Hdr_103.add_attribute("MsgEncd", "MessageEncoding_t_156963079"); // 1
    Hdr_103_set.insert("MessageEncoding_t_156963079");
    all_values.push_back(Hdr_103_set);
    all_compo_names.insert("Hdr_103_set");

    {
      xml_element Hop_103{"Hop"};
      multiset<string> Hop_103_set;
      Hop_103.add_attribute("ID", "HopCompID_t_1789777508"); // 2
      Hop_103_set.insert("HopCompID_t_1789777508");
      Hop_103.add_attribute("Ref", "1470568847"); // 2
      Hop_103_set.insert("1470568847");
      Hop_103.add_attribute("Snt", "HopSendingTime_t_185421893"); // 2
      Hop_103_set.insert("HopSendingTime_t_185421893");
      all_values.push_back(Hop_103_set);
      all_compo_names.insert("Hop_103_set");

      Hdr_103.add_element(Hop_103);
    }
    elt.add_element(Hdr_103);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_22{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_22_set;
    ApplSeqCtrl_22.add_attribute("ApplID", "ApplID_t_213299642"); // 1
    ApplSeqCtrl_22_set.insert("ApplID_t_213299642");
    ApplSeqCtrl_22.add_attribute("ApplSeqNum", "597873439"); // 1
    ApplSeqCtrl_22_set.insert("597873439");
    ApplSeqCtrl_22.add_attribute("ApplLastSeqNum", "324270729"); // 1
    ApplSeqCtrl_22_set.insert("324270729");
    ApplSeqCtrl_22.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_22_set.insert("true");
    all_values.push_back(ApplSeqCtrl_22_set);
    all_compo_names.insert("ApplSeqCtrl_22_set");

    elt.add_element(ApplSeqCtrl_22);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_98{"Instrmt"};
    multiset<string> Instrmt_98_set;
    Instrmt_98.add_attribute("Sym", "Symbol_t_432740942"); // 1
    Instrmt_98_set.insert("Symbol_t_432740942");
    Instrmt_98.add_attribute("Sfx", "CD"); // 1
    Instrmt_98_set.insert("CD");
    Instrmt_98.add_attribute("ID", "SecurityID_t_1871899024"); // 1
    Instrmt_98_set.insert("SecurityID_t_1871899024");
    Instrmt_98.add_attribute("Src", "9"); // 1
    Instrmt_98_set.insert("9");
    Instrmt_98.add_attribute("Prod", "10"); // 1
    Instrmt_98_set.insert("10");
    Instrmt_98.add_attribute("ProdCmplx", "ProductComplex_t_956285054"); // 1
    Instrmt_98_set.insert("ProductComplex_t_956285054");
    Instrmt_98.add_attribute("SecGrp", "SecurityGroup_t_1108320306"); // 1
    Instrmt_98_set.insert("SecurityGroup_t_1108320306");
    Instrmt_98.add_attribute("CFI", "CFICode_t_1714983348"); // 1
    Instrmt_98_set.insert("CFICode_t_1714983348");
    Instrmt_98.add_attribute("SecTyp", "CAN"); // 1
    Instrmt_98_set.insert("CAN");
    Instrmt_98.add_attribute("SubTyp", "SecuritySubType_t_1611065846"); // 1
    Instrmt_98_set.insert("SecuritySubType_t_1611065846");
    Instrmt_98.add_attribute("MMY", "441168802"); // 1
    Instrmt_98_set.insert("441168802");
    Instrmt_98.add_attribute("MatDt", "MaturityDate_t_1282340381"); // 1
    Instrmt_98_set.insert("MaturityDate_t_1282340381");
    Instrmt_98.add_attribute("MatTm", "1818923071"); // 1
    Instrmt_98_set.insert("1818923071");
    Instrmt_98.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1196429291"); // 1
    Instrmt_98_set.insert("SettleOnOpenFlag_t_1196429291");
    Instrmt_98.add_attribute("AsgnMeth", "2010793674"); // 1
    Instrmt_98_set.insert("2010793674");
    Instrmt_98.add_attribute("Status", "2"); // 1
    Instrmt_98_set.insert("2");
    Instrmt_98.add_attribute("CpnPmt", "CouponPaymentDate_t_2076385678"); // 1
    Instrmt_98_set.insert("CouponPaymentDate_t_2076385678");
    Instrmt_98.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_98_set.insert("FR");
    Instrmt_98.add_attribute("Snrty", "SB"); // 1
    Instrmt_98_set.insert("SB");
    Instrmt_98.add_attribute("NotlPctOut", "10579544.510000"); // 1
    Instrmt_98_set.insert("10579544.510000");
    Instrmt_98.add_attribute("OrigNotlPctOut", "2910512.720000"); // 1
    Instrmt_98_set.insert("2910512.720000");
    Instrmt_98.add_attribute("AttchPnt", "11394894.250000"); // 1
    Instrmt_98_set.insert("11394894.250000");
    Instrmt_98.add_attribute("DetchPnt", "17667241.960000"); // 1
    Instrmt_98_set.insert("17667241.960000");
    Instrmt_98.add_attribute("Issued", "IssueDate_t_448014351"); // 1
    Instrmt_98_set.insert("IssueDate_t_448014351");
    Instrmt_98.add_attribute("RepoCollSecTyp", "781783286"); // 1
    Instrmt_98_set.insert("781783286");
    Instrmt_98.add_attribute("RepoTrm", "1089809395"); // 1
    Instrmt_98_set.insert("1089809395");
    Instrmt_98.add_attribute("RepoRt", "6334362.440000"); // 1
    Instrmt_98_set.insert("6334362.440000");
    Instrmt_98.add_attribute("Fctr", "9950829.280000"); // 1
    Instrmt_98_set.insert("9950829.280000");
    Instrmt_98.add_attribute("CrdRtg", "CreditRating_t_1687682834"); // 1
    Instrmt_98_set.insert("CreditRating_t_1687682834");
    Instrmt_98.add_attribute("Rgstry", "InstrRegistry_t_957706973"); // 1
    Instrmt_98_set.insert("InstrRegistry_t_957706973");
    Instrmt_98.add_attribute("IssuCtry", "1880140775"); // 1
    Instrmt_98_set.insert("1880140775");
    Instrmt_98.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2120423776"); // 1
    Instrmt_98_set.insert("StateOrProvinceOfIssue_t_2120423776");
    Instrmt_98.add_attribute("Lcl", "LocaleOfIssue_t_744001222"); // 1
    Instrmt_98_set.insert("LocaleOfIssue_t_744001222");
    Instrmt_98.add_attribute("Redeem", "RedemptionDate_t_1604556151"); // 1
    Instrmt_98_set.insert("RedemptionDate_t_1604556151");
    Instrmt_98.add_attribute("StrkPx", "21236823.580000"); // 1
    Instrmt_98_set.insert("21236823.580000");
    Instrmt_98.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_98_set.insert("EUR");
    Instrmt_98.add_attribute("StrkMult", "10845190.160000"); // 1
    Instrmt_98_set.insert("10845190.160000");
    Instrmt_98.add_attribute("StrkValu", "5333171.410000"); // 1
    Instrmt_98_set.insert("5333171.410000");
    Instrmt_98.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_98_set.insert("2");
    Instrmt_98.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_98_set.insert("5");
    Instrmt_98.add_attribute("StrkPxBndryPrcsn", "9744859.430000"); // 1
    Instrmt_98_set.insert("9744859.430000");
    Instrmt_98.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_98_set.insert("3");
    Instrmt_98.add_attribute("OptAt", "219540638"); // 1
    Instrmt_98_set.insert("219540638");
    Instrmt_98.add_attribute("Mult", "234315.870000"); // 1
    Instrmt_98_set.insert("234315.870000");
    Instrmt_98.add_attribute("MultTyp", "1"); // 1
    Instrmt_98_set.insert("1");
    Instrmt_98.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_98_set.insert("1");
    Instrmt_98.add_attribute("MinPxIncr", "20998172.650000"); // 1
    Instrmt_98_set.insert("20998172.650000");
    Instrmt_98.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1049547640"); // 1
    Instrmt_98_set.insert("MinPriceIncrementAmount_t_1049547640");
    Instrmt_98.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_98_set.insert("MMBtu");
    Instrmt_98.add_attribute("UOMQty", "10102880.680000"); // 1
    Instrmt_98_set.insert("10102880.680000");
    Instrmt_98.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_98_set.insert("Gal");
    Instrmt_98.add_attribute("PxUOMQty", "7421768.240000"); // 1
    Instrmt_98_set.insert("7421768.240000");
    Instrmt_98.add_attribute("SettlMeth", "C"); // 1
    Instrmt_98_set.insert("C");
    Instrmt_98.add_attribute("ExerStyle", "0"); // 1
    Instrmt_98_set.insert("0");
    Instrmt_98.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_98_set.insert("2");
    Instrmt_98.add_attribute("OptPayAmt", "OptPayoutAmount_t_1719338012"); // 1
    Instrmt_98_set.insert("OptPayoutAmount_t_1719338012");
    Instrmt_98.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_98_set.insert("STD");
    Instrmt_98.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_98_set.insert("FUT");
    Instrmt_98.add_attribute("ListMeth", "0"); // 1
    Instrmt_98_set.insert("0");
    Instrmt_98.add_attribute("CapPx", "12322728.330000"); // 1
    Instrmt_98_set.insert("12322728.330000");
    Instrmt_98.add_attribute("FlrPx", "1042165.180000"); // 1
    Instrmt_98_set.insert("1042165.180000");
    Instrmt_98.add_attribute("PutCall", "1"); // 1
    Instrmt_98_set.insert("1");
    Instrmt_98.add_attribute("FlexInd", "false"); // 1
    Instrmt_98_set.insert("false");
    Instrmt_98.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_98_set.insert("false");
    Instrmt_98.add_attribute("TmUnit", "H"); // 1
    Instrmt_98_set.insert("H");
    Instrmt_98.add_attribute("CpnRt", "7946078.480000"); // 1
    Instrmt_98_set.insert("7946078.480000");
    Instrmt_98.add_attribute("Exch", "SecurityExchange_t_2122130227"); // 1
    Instrmt_98_set.insert("SecurityExchange_t_2122130227");
    Instrmt_98.add_attribute("PosLmt", "145711406"); // 1
    Instrmt_98_set.insert("145711406");
    Instrmt_98.add_attribute("NTPosLmt", "1327924989"); // 1
    Instrmt_98_set.insert("1327924989");
    Instrmt_98.add_attribute("Issr", "Issuer_t_1248472748"); // 1
    Instrmt_98_set.insert("Issuer_t_1248472748");
    Instrmt_98.add_attribute("EncIssrLen", "693812620"); // 1
    Instrmt_98_set.insert("693812620");
    Instrmt_98.add_attribute("EncIssr", "EncodedIssuer_t_154927285"); // 1
    Instrmt_98_set.insert("EncodedIssuer_t_154927285");
    Instrmt_98.add_attribute("Desc", "SecurityDesc_t_1657155650"); // 1
    Instrmt_98_set.insert("SecurityDesc_t_1657155650");
    Instrmt_98.add_attribute("EncSecDescLen", "913353258"); // 1
    Instrmt_98_set.insert("913353258");
    Instrmt_98.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_178358872"); // 1
    Instrmt_98_set.insert("EncodedSecurityDesc_t_178358872");
    Instrmt_98.add_attribute("Pool", "Pool_t_1929148578"); // 1
    Instrmt_98_set.insert("Pool_t_1929148578");
    Instrmt_98.add_attribute("CSetMo", "1135434880"); // 1
    Instrmt_98_set.insert("1135434880");
    Instrmt_98.add_attribute("CPPgm", "1"); // 1
    Instrmt_98_set.insert("1");
    Instrmt_98.add_attribute("CPRegT", "CPRegType_t_831212570"); // 1
    Instrmt_98_set.insert("CPRegType_t_831212570");
    Instrmt_98.add_attribute("Dated", "DatedDate_t_738122279"); // 1
    Instrmt_98_set.insert("DatedDate_t_738122279");
    Instrmt_98.add_attribute("IntAcrl", "InterestAccrualDate_t_1140980558"); // 1
    Instrmt_98_set.insert("InterestAccrualDate_t_1140980558");
    all_values.push_back(Instrmt_98_set);
    all_compo_names.insert("Instrmt_98_set");

    {
      xml_element AID_101{"AID"};
      multiset<string> AID_101_set;
      AID_101.add_attribute("AltID", "SecurityAltID_t_24327835"); // 2
      AID_101_set.insert("SecurityAltID_t_24327835");
      AID_101.add_attribute("AltIDSrc", "L"); // 2
      AID_101_set.insert("L");
      all_values.push_back(AID_101_set);
      all_compo_names.insert("AID_101_set");

      Instrmt_98.add_element(AID_101);
    }
    {
      xml_element SecXML_95{"SecXML"};
      multiset<string> SecXML_95_set;
      SecXML_95.add_attribute("Schema", "SecurityXMLSchema_t_1770509174"); // 2
      SecXML_95_set.insert("SecurityXMLSchema_t_1770509174");
      all_values.push_back(SecXML_95_set);
      all_compo_names.insert("SecXML_95_set");

      Instrmt_98.add_element(SecXML_95);
    }
    {
      xml_element Evnt_95{"Evnt"};
      multiset<string> Evnt_95_set;
      Evnt_95.add_attribute("EventTyp", "18"); // 2
      Evnt_95_set.insert("18");
      Evnt_95.add_attribute("Dt", "EventDate_t_856775566"); // 2
      Evnt_95_set.insert("EventDate_t_856775566");
      Evnt_95.add_attribute("Tm", "EventTime_t_1342363538"); // 2
      Evnt_95_set.insert("EventTime_t_1342363538");
      Evnt_95.add_attribute("Px", "20875069.580000"); // 2
      Evnt_95_set.insert("20875069.580000");
      Evnt_95.add_attribute("Txt", "EventText_t_1228334957"); // 2
      Evnt_95_set.insert("EventText_t_1228334957");
      all_values.push_back(Evnt_95_set);
      all_compo_names.insert("Evnt_95_set");

      Instrmt_98.add_element(Evnt_95);
    }
    {
      xml_element Pty_480{"Pty"};
      multiset<string> Pty_480_set;
      Pty_480.add_attribute("ID", "InstrumentPartyID_t_454417089"); // 2
      Pty_480_set.insert("InstrumentPartyID_t_454417089");
      Pty_480.add_attribute("Src", "B"); // 2
      Pty_480_set.insert("B");
      Pty_480.add_attribute("R", "12"); // 2
      Pty_480_set.insert("12");
      all_values.push_back(Pty_480_set);
      all_compo_names.insert("Pty_480_set");

      {
        xml_element Sub_480{"Sub"};
        multiset<string> Sub_480_set;
        Sub_480.add_attribute("ID", "InstrumentPartySubID_t_1686894416"); // 3
        Sub_480_set.insert("InstrumentPartySubID_t_1686894416");
        Sub_480.add_attribute("Typ", "12"); // 3
        Sub_480_set.insert("12");
        all_values.push_back(Sub_480_set);
        all_compo_names.insert("Sub_480_set");

        Pty_480.add_element(Sub_480);
      }
      Instrmt_98.add_element(Pty_480);
    }
    {
      xml_element CmplxEvnt_92{"CmplxEvnt"};
      multiset<string> CmplxEvnt_92_set;
      CmplxEvnt_92.add_attribute("Typ", "7"); // 2
      CmplxEvnt_92_set.insert("7");
      CmplxEvnt_92.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_748086805"); // 2
      CmplxEvnt_92_set.insert("ComplexOptPayoutAmount_t_748086805");
      CmplxEvnt_92.add_attribute("Px", "17956944.000000"); // 2
      CmplxEvnt_92_set.insert("17956944.000000");
      CmplxEvnt_92.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_92_set.insert("1");
      CmplxEvnt_92.add_attribute("PxBndryPrcsn", "8937982.110000"); // 2
      CmplxEvnt_92_set.insert("8937982.110000");
      CmplxEvnt_92.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_92_set.insert("2");
      CmplxEvnt_92.add_attribute("Cond", "2"); // 2
      CmplxEvnt_92_set.insert("2");
      all_values.push_back(CmplxEvnt_92_set);
      all_compo_names.insert("CmplxEvnt_92_set");

      {
        xml_element EvntDts_92{"EvntDts"};
        multiset<string> EvntDts_92_set;
        EvntDts_92.add_attribute("StartDt", "ComplexEventStartDate_t_1587610832"); // 3
        EvntDts_92_set.insert("ComplexEventStartDate_t_1587610832");
        EvntDts_92.add_attribute("EndDt", "ComplexEventEndDate_t_1131063026"); // 3
        EvntDts_92_set.insert("ComplexEventEndDate_t_1131063026");
        all_values.push_back(EvntDts_92_set);
        all_compo_names.insert("EvntDts_92_set");

        {
          xml_element EvntTms_92{"EvntTms"};
          multiset<string> EvntTms_92_set;
          EvntTms_92.add_attribute("StartTm", "1626631825"); // 4
          EvntTms_92_set.insert("1626631825");
          EvntTms_92.add_attribute("EndTm", "353480442"); // 4
          EvntTms_92_set.insert("353480442");
          all_values.push_back(EvntTms_92_set);
          all_compo_names.insert("EvntTms_92_set");

          EvntDts_92.add_element(EvntTms_92);
        }
        CmplxEvnt_92.add_element(EvntDts_92);
      }
      Instrmt_98.add_element(CmplxEvnt_92);
    }
    elt.add_element(Instrmt_98);
  } // end Instrmt
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
