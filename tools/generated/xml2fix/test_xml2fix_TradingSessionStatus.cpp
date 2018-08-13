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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatus_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_368924364"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesReqID_t_368924364");
  elt.add_attribute("MktID", "MarketID_t_2056678618"); // 0
  TradingSessionStatus_message_t_0.insert("MarketID_t_2056678618");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_726600812"); // 0
  TradingSessionStatus_message_t_0.insert("MarketSegmentID_t_726600812");
  elt.add_attribute("SesID", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("SesSub", "3"); // 0
  TradingSessionStatus_message_t_0.insert("3");
  elt.add_attribute("Method", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("Mode", "3"); // 0
  TradingSessionStatus_message_t_0.insert("3");
  elt.add_attribute("Unsol", "N"); // 0
  TradingSessionStatus_message_t_0.insert("N");
  elt.add_attribute("Stat", "5"); // 0
  TradingSessionStatus_message_t_0.insert("5");
  elt.add_attribute("TradSesEvent", "2"); // 0
  TradingSessionStatus_message_t_0.insert("2");
  elt.add_attribute("StatRejRsn", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("StartTm", "TradSesStartTime_t_1185991996"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesStartTime_t_1185991996");
  elt.add_attribute("OpenTm", "TradSesOpenTime_t_30869801"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesOpenTime_t_30869801");
  elt.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1159434763"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesPreCloseTime_t_1159434763");
  elt.add_attribute("ClsTm", "TradSesCloseTime_t_1726442626"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesCloseTime_t_1726442626");
  elt.add_attribute("EndTm", "TradSesEndTime_t_263558189"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesEndTime_t_263558189");
  elt.add_attribute("TotVolTrdd", "5422183.560000"); // 0
  TradingSessionStatus_message_t_0.insert("5422183.560000");
  elt.add_attribute("Txt", "Text_t_465121450"); // 0
  TradingSessionStatus_message_t_0.insert("Text_t_465121450");
  elt.add_attribute("EncTxtLen", "1438036405"); // 0
  TradingSessionStatus_message_t_0.insert("1438036405");
  elt.add_attribute("EncTxt", "EncodedText_t_709464796"); // 0
  TradingSessionStatus_message_t_0.insert("EncodedText_t_709464796");
  all_values.push_back(TradingSessionStatus_message_t_0);
  all_compo_names.insert("TradingSessionStatus_message_t");

  { // Hdr
    xml_element Hdr_103{"Hdr"};
    multiset<string> Hdr_103_set;
    Hdr_103.add_attribute("SeqNum", "1165313782"); // 1
    Hdr_103_set.insert("1165313782");
    Hdr_103.add_attribute("SID", "SenderCompID_t_726378572"); // 1
    Hdr_103_set.insert("SenderCompID_t_726378572");
    Hdr_103.add_attribute("TID", "TargetCompID_t_1649681213"); // 1
    Hdr_103_set.insert("TargetCompID_t_1649681213");
    Hdr_103.add_attribute("OBID", "OnBehalfOfCompID_t_1605162986"); // 1
    Hdr_103_set.insert("OnBehalfOfCompID_t_1605162986");
    Hdr_103.add_attribute("D2ID", "DeliverToCompID_t_351275738"); // 1
    Hdr_103_set.insert("DeliverToCompID_t_351275738");
    Hdr_103.add_attribute("SSub", "SenderSubID_t_435286489"); // 1
    Hdr_103_set.insert("SenderSubID_t_435286489");
    Hdr_103.add_attribute("SLoc", "SenderLocationID_t_590512244"); // 1
    Hdr_103_set.insert("SenderLocationID_t_590512244");
    Hdr_103.add_attribute("TSub", "TargetSubID_t_726695741"); // 1
    Hdr_103_set.insert("TargetSubID_t_726695741");
    Hdr_103.add_attribute("TLoc", "TargetLocationID_t_1933904835"); // 1
    Hdr_103_set.insert("TargetLocationID_t_1933904835");
    Hdr_103.add_attribute("OBSub", "OnBehalfOfSubID_t_351466495"); // 1
    Hdr_103_set.insert("OnBehalfOfSubID_t_351466495");
    Hdr_103.add_attribute("OBLoc", "OnBehalfOfLocationID_t_313777925"); // 1
    Hdr_103_set.insert("OnBehalfOfLocationID_t_313777925");
    Hdr_103.add_attribute("D2Sub", "DeliverToSubID_t_155345552"); // 1
    Hdr_103_set.insert("DeliverToSubID_t_155345552");
    Hdr_103.add_attribute("D2Loc", "DeliverToLocationID_t_260661465"); // 1
    Hdr_103_set.insert("DeliverToLocationID_t_260661465");
    Hdr_103.add_attribute("PosDup", "Y"); // 1
    Hdr_103_set.insert("Y");
    Hdr_103.add_attribute("PosRsnd", "N"); // 1
    Hdr_103_set.insert("N");
    Hdr_103.add_attribute("Snt", "SendingTime_t_1136541683"); // 1
    Hdr_103_set.insert("SendingTime_t_1136541683");
    Hdr_103.add_attribute("OrigSnt", "OrigSendingTime_t_728755893"); // 1
    Hdr_103_set.insert("OrigSendingTime_t_728755893");
    Hdr_103.add_attribute("MsgEncd", "MessageEncoding_t_317010752"); // 1
    Hdr_103_set.insert("MessageEncoding_t_317010752");
    all_values.push_back(Hdr_103_set);
    all_compo_names.insert("Hdr_103_set");

    {
      xml_element Hop_103{"Hop"};
      multiset<string> Hop_103_set;
      Hop_103.add_attribute("ID", "HopCompID_t_586865975"); // 2
      Hop_103_set.insert("HopCompID_t_586865975");
      Hop_103.add_attribute("Ref", "709768942"); // 2
      Hop_103_set.insert("709768942");
      Hop_103.add_attribute("Snt", "HopSendingTime_t_742835062"); // 2
      Hop_103_set.insert("HopSendingTime_t_742835062");
      all_values.push_back(Hop_103_set);
      all_compo_names.insert("Hop_103_set");

      Hdr_103.add_element(Hop_103);
    }
    elt.add_element(Hdr_103);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_22{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_22_set;
    ApplSeqCtrl_22.add_attribute("ApplID", "ApplID_t_2081806061"); // 1
    ApplSeqCtrl_22_set.insert("ApplID_t_2081806061");
    ApplSeqCtrl_22.add_attribute("ApplSeqNum", "1895760939"); // 1
    ApplSeqCtrl_22_set.insert("1895760939");
    ApplSeqCtrl_22.add_attribute("ApplLastSeqNum", "773704863"); // 1
    ApplSeqCtrl_22_set.insert("773704863");
    ApplSeqCtrl_22.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_22_set.insert("true");
    all_values.push_back(ApplSeqCtrl_22_set);
    all_compo_names.insert("ApplSeqCtrl_22_set");

    elt.add_element(ApplSeqCtrl_22);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_95{"Instrmt"};
    multiset<string> Instrmt_95_set;
    Instrmt_95.add_attribute("Sym", "Symbol_t_1474719917"); // 1
    Instrmt_95_set.insert("Symbol_t_1474719917");
    Instrmt_95.add_attribute("Sfx", "CD"); // 1
    Instrmt_95_set.insert("CD");
    Instrmt_95.add_attribute("ID", "SecurityID_t_1635975533"); // 1
    Instrmt_95_set.insert("SecurityID_t_1635975533");
    Instrmt_95.add_attribute("Src", "E"); // 1
    Instrmt_95_set.insert("E");
    Instrmt_95.add_attribute("Prod", "7"); // 1
    Instrmt_95_set.insert("7");
    Instrmt_95.add_attribute("ProdCmplx", "ProductComplex_t_197956681"); // 1
    Instrmt_95_set.insert("ProductComplex_t_197956681");
    Instrmt_95.add_attribute("SecGrp", "SecurityGroup_t_957671501"); // 1
    Instrmt_95_set.insert("SecurityGroup_t_957671501");
    Instrmt_95.add_attribute("CFI", "CFICode_t_1054194382"); // 1
    Instrmt_95_set.insert("CFICode_t_1054194382");
    Instrmt_95.add_attribute("SecTyp", "FADN"); // 1
    Instrmt_95_set.insert("FADN");
    Instrmt_95.add_attribute("SubTyp", "SecuritySubType_t_415350839"); // 1
    Instrmt_95_set.insert("SecuritySubType_t_415350839");
    Instrmt_95.add_attribute("MMY", "1405470120"); // 1
    Instrmt_95_set.insert("1405470120");
    Instrmt_95.add_attribute("MatDt", "MaturityDate_t_135440735"); // 1
    Instrmt_95_set.insert("MaturityDate_t_135440735");
    Instrmt_95.add_attribute("MatTm", "1005863084"); // 1
    Instrmt_95_set.insert("1005863084");
    Instrmt_95.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2132165862"); // 1
    Instrmt_95_set.insert("SettleOnOpenFlag_t_2132165862");
    Instrmt_95.add_attribute("AsgnMeth", "2069345571"); // 1
    Instrmt_95_set.insert("2069345571");
    Instrmt_95.add_attribute("Status", "2"); // 1
    Instrmt_95_set.insert("2");
    Instrmt_95.add_attribute("CpnPmt", "CouponPaymentDate_t_298460139"); // 1
    Instrmt_95_set.insert("CouponPaymentDate_t_298460139");
    Instrmt_95.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_95_set.insert("XR");
    Instrmt_95.add_attribute("Snrty", "SD"); // 1
    Instrmt_95_set.insert("SD");
    Instrmt_95.add_attribute("NotlPctOut", "13388388.760000"); // 1
    Instrmt_95_set.insert("13388388.760000");
    Instrmt_95.add_attribute("OrigNotlPctOut", "11792472.950000"); // 1
    Instrmt_95_set.insert("11792472.950000");
    Instrmt_95.add_attribute("AttchPnt", "6070490.790000"); // 1
    Instrmt_95_set.insert("6070490.790000");
    Instrmt_95.add_attribute("DetchPnt", "20675947.690000"); // 1
    Instrmt_95_set.insert("20675947.690000");
    Instrmt_95.add_attribute("Issued", "IssueDate_t_1496258047"); // 1
    Instrmt_95_set.insert("IssueDate_t_1496258047");
    Instrmt_95.add_attribute("RepoCollSecTyp", "1193915055"); // 1
    Instrmt_95_set.insert("1193915055");
    Instrmt_95.add_attribute("RepoTrm", "629880064"); // 1
    Instrmt_95_set.insert("629880064");
    Instrmt_95.add_attribute("RepoRt", "916094.610000"); // 1
    Instrmt_95_set.insert("916094.610000");
    Instrmt_95.add_attribute("Fctr", "11282374.680000"); // 1
    Instrmt_95_set.insert("11282374.680000");
    Instrmt_95.add_attribute("CrdRtg", "CreditRating_t_378157355"); // 1
    Instrmt_95_set.insert("CreditRating_t_378157355");
    Instrmt_95.add_attribute("Rgstry", "InstrRegistry_t_865314324"); // 1
    Instrmt_95_set.insert("InstrRegistry_t_865314324");
    Instrmt_95.add_attribute("IssuCtry", "74510997"); // 1
    Instrmt_95_set.insert("74510997");
    Instrmt_95.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1852877272"); // 1
    Instrmt_95_set.insert("StateOrProvinceOfIssue_t_1852877272");
    Instrmt_95.add_attribute("Lcl", "LocaleOfIssue_t_1902577376"); // 1
    Instrmt_95_set.insert("LocaleOfIssue_t_1902577376");
    Instrmt_95.add_attribute("Redeem", "RedemptionDate_t_1710486530"); // 1
    Instrmt_95_set.insert("RedemptionDate_t_1710486530");
    Instrmt_95.add_attribute("StrkPx", "16452349.910000"); // 1
    Instrmt_95_set.insert("16452349.910000");
    Instrmt_95.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_95_set.insert("CHF");
    Instrmt_95.add_attribute("StrkMult", "4554228.440000"); // 1
    Instrmt_95_set.insert("4554228.440000");
    Instrmt_95.add_attribute("StrkValu", "11371039.200000"); // 1
    Instrmt_95_set.insert("11371039.200000");
    Instrmt_95.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_95_set.insert("2");
    Instrmt_95.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_95_set.insert("4");
    Instrmt_95.add_attribute("StrkPxBndryPrcsn", "3950903.930000"); // 1
    Instrmt_95_set.insert("3950903.930000");
    Instrmt_95.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_95_set.insert("1");
    Instrmt_95.add_attribute("OptAt", "1876636767"); // 1
    Instrmt_95_set.insert("1876636767");
    Instrmt_95.add_attribute("Mult", "3797726.070000"); // 1
    Instrmt_95_set.insert("3797726.070000");
    Instrmt_95.add_attribute("MultTyp", "1"); // 1
    Instrmt_95_set.insert("1");
    Instrmt_95.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_95_set.insert("3");
    Instrmt_95.add_attribute("MinPxIncr", "6782327.460000"); // 1
    Instrmt_95_set.insert("6782327.460000");
    Instrmt_95.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1743107590"); // 1
    Instrmt_95_set.insert("MinPriceIncrementAmount_t_1743107590");
    Instrmt_95.add_attribute("UOM", "Alw"); // 1
    Instrmt_95_set.insert("Alw");
    Instrmt_95.add_attribute("UOMQty", "20170716.220000"); // 1
    Instrmt_95_set.insert("20170716.220000");
    Instrmt_95.add_attribute("PxUOM", "Bcf"); // 1
    Instrmt_95_set.insert("Bcf");
    Instrmt_95.add_attribute("PxUOMQty", "11640391.740000"); // 1
    Instrmt_95_set.insert("11640391.740000");
    Instrmt_95.add_attribute("SettlMeth", "C"); // 1
    Instrmt_95_set.insert("C");
    Instrmt_95.add_attribute("ExerStyle", "0"); // 1
    Instrmt_95_set.insert("0");
    Instrmt_95.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_95_set.insert("2");
    Instrmt_95.add_attribute("OptPayAmt", "OptPayoutAmount_t_419579160"); // 1
    Instrmt_95_set.insert("OptPayoutAmount_t_419579160");
    Instrmt_95.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_95_set.insert("INX");
    Instrmt_95.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_95_set.insert("EQTY");
    Instrmt_95.add_attribute("ListMeth", "1"); // 1
    Instrmt_95_set.insert("1");
    Instrmt_95.add_attribute("CapPx", "10805694.210000"); // 1
    Instrmt_95_set.insert("10805694.210000");
    Instrmt_95.add_attribute("FlrPx", "14132190.470000"); // 1
    Instrmt_95_set.insert("14132190.470000");
    Instrmt_95.add_attribute("PutCall", "1"); // 1
    Instrmt_95_set.insert("1");
    Instrmt_95.add_attribute("FlexInd", "true"); // 1
    Instrmt_95_set.insert("true");
    Instrmt_95.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_95_set.insert("false");
    Instrmt_95.add_attribute("TmUnit", "S"); // 1
    Instrmt_95_set.insert("S");
    Instrmt_95.add_attribute("CpnRt", "9185726.880000"); // 1
    Instrmt_95_set.insert("9185726.880000");
    Instrmt_95.add_attribute("Exch", "SecurityExchange_t_737181492"); // 1
    Instrmt_95_set.insert("SecurityExchange_t_737181492");
    Instrmt_95.add_attribute("PosLmt", "456304326"); // 1
    Instrmt_95_set.insert("456304326");
    Instrmt_95.add_attribute("NTPosLmt", "2055676609"); // 1
    Instrmt_95_set.insert("2055676609");
    Instrmt_95.add_attribute("Issr", "Issuer_t_198295301"); // 1
    Instrmt_95_set.insert("Issuer_t_198295301");
    Instrmt_95.add_attribute("EncIssrLen", "1327078009"); // 1
    Instrmt_95_set.insert("1327078009");
    Instrmt_95.add_attribute("EncIssr", "EncodedIssuer_t_303283354"); // 1
    Instrmt_95_set.insert("EncodedIssuer_t_303283354");
    Instrmt_95.add_attribute("Desc", "SecurityDesc_t_1942333493"); // 1
    Instrmt_95_set.insert("SecurityDesc_t_1942333493");
    Instrmt_95.add_attribute("EncSecDescLen", "1056231129"); // 1
    Instrmt_95_set.insert("1056231129");
    Instrmt_95.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_683055961"); // 1
    Instrmt_95_set.insert("EncodedSecurityDesc_t_683055961");
    Instrmt_95.add_attribute("Pool", "Pool_t_1460749961"); // 1
    Instrmt_95_set.insert("Pool_t_1460749961");
    Instrmt_95.add_attribute("CSetMo", "2142713827"); // 1
    Instrmt_95_set.insert("2142713827");
    Instrmt_95.add_attribute("CPPgm", "2"); // 1
    Instrmt_95_set.insert("2");
    Instrmt_95.add_attribute("CPRegT", "CPRegType_t_1056373903"); // 1
    Instrmt_95_set.insert("CPRegType_t_1056373903");
    Instrmt_95.add_attribute("Dated", "DatedDate_t_552220274"); // 1
    Instrmt_95_set.insert("DatedDate_t_552220274");
    Instrmt_95.add_attribute("IntAcrl", "InterestAccrualDate_t_1230876681"); // 1
    Instrmt_95_set.insert("InterestAccrualDate_t_1230876681");
    all_values.push_back(Instrmt_95_set);
    all_compo_names.insert("Instrmt_95_set");

    {
      xml_element AID_98{"AID"};
      multiset<string> AID_98_set;
      AID_98.add_attribute("AltID", "SecurityAltID_t_1831245141"); // 2
      AID_98_set.insert("SecurityAltID_t_1831245141");
      AID_98.add_attribute("AltIDSrc", "4"); // 2
      AID_98_set.insert("4");
      all_values.push_back(AID_98_set);
      all_compo_names.insert("AID_98_set");

      Instrmt_95.add_element(AID_98);
    }
    {
      xml_element SecXML_93{"SecXML"};
      multiset<string> SecXML_93_set;
      SecXML_93.add_attribute("Schema", "SecurityXMLSchema_t_1020575777"); // 2
      SecXML_93_set.insert("SecurityXMLSchema_t_1020575777");
      all_values.push_back(SecXML_93_set);
      all_compo_names.insert("SecXML_93_set");

      Instrmt_95.add_element(SecXML_93);
    }
    {
      xml_element Evnt_93{"Evnt"};
      multiset<string> Evnt_93_set;
      Evnt_93.add_attribute("EventTyp", "17"); // 2
      Evnt_93_set.insert("17");
      Evnt_93.add_attribute("Dt", "EventDate_t_1926730030"); // 2
      Evnt_93_set.insert("EventDate_t_1926730030");
      Evnt_93.add_attribute("Tm", "EventTime_t_1440154937"); // 2
      Evnt_93_set.insert("EventTime_t_1440154937");
      Evnt_93.add_attribute("Px", "226622.270000"); // 2
      Evnt_93_set.insert("226622.270000");
      Evnt_93.add_attribute("Txt", "EventText_t_1117954432"); // 2
      Evnt_93_set.insert("EventText_t_1117954432");
      all_values.push_back(Evnt_93_set);
      all_compo_names.insert("Evnt_93_set");

      Instrmt_95.add_element(Evnt_93);
    }
    {
      xml_element Pty_461{"Pty"};
      multiset<string> Pty_461_set;
      Pty_461.add_attribute("ID", "InstrumentPartyID_t_90407804"); // 2
      Pty_461_set.insert("InstrumentPartyID_t_90407804");
      Pty_461.add_attribute("Src", "3"); // 2
      Pty_461_set.insert("3");
      Pty_461.add_attribute("R", "16"); // 2
      Pty_461_set.insert("16");
      all_values.push_back(Pty_461_set);
      all_compo_names.insert("Pty_461_set");

      {
        xml_element Sub_461{"Sub"};
        multiset<string> Sub_461_set;
        Sub_461.add_attribute("ID", "InstrumentPartySubID_t_593537943"); // 3
        Sub_461_set.insert("InstrumentPartySubID_t_593537943");
        Sub_461.add_attribute("Typ", "28"); // 3
        Sub_461_set.insert("28");
        all_values.push_back(Sub_461_set);
        all_compo_names.insert("Sub_461_set");

        Pty_461.add_element(Sub_461);
      }
      Instrmt_95.add_element(Pty_461);
    }
    {
      xml_element CmplxEvnt_90{"CmplxEvnt"};
      multiset<string> CmplxEvnt_90_set;
      CmplxEvnt_90.add_attribute("Typ", "7"); // 2
      CmplxEvnt_90_set.insert("7");
      CmplxEvnt_90.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_594419425"); // 2
      CmplxEvnt_90_set.insert("ComplexOptPayoutAmount_t_594419425");
      CmplxEvnt_90.add_attribute("Px", "7099838.390000"); // 2
      CmplxEvnt_90_set.insert("7099838.390000");
      CmplxEvnt_90.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_90_set.insert("3");
      CmplxEvnt_90.add_attribute("PxBndryPrcsn", "10507237.510000"); // 2
      CmplxEvnt_90_set.insert("10507237.510000");
      CmplxEvnt_90.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_90_set.insert("2");
      CmplxEvnt_90.add_attribute("Cond", "2"); // 2
      CmplxEvnt_90_set.insert("2");
      all_values.push_back(CmplxEvnt_90_set);
      all_compo_names.insert("CmplxEvnt_90_set");

      {
        xml_element EvntDts_90{"EvntDts"};
        multiset<string> EvntDts_90_set;
        EvntDts_90.add_attribute("StartDt", "ComplexEventStartDate_t_230318113"); // 3
        EvntDts_90_set.insert("ComplexEventStartDate_t_230318113");
        EvntDts_90.add_attribute("EndDt", "ComplexEventEndDate_t_921460154"); // 3
        EvntDts_90_set.insert("ComplexEventEndDate_t_921460154");
        all_values.push_back(EvntDts_90_set);
        all_compo_names.insert("EvntDts_90_set");

        {
          xml_element EvntTms_90{"EvntTms"};
          multiset<string> EvntTms_90_set;
          EvntTms_90.add_attribute("StartTm", "2090238399"); // 4
          EvntTms_90_set.insert("2090238399");
          EvntTms_90.add_attribute("EndTm", "1286549242"); // 4
          EvntTms_90_set.insert("1286549242");
          all_values.push_back(EvntTms_90_set);
          all_compo_names.insert("EvntTms_90_set");

          EvntDts_90.add_element(EvntTms_90);
        }
        CmplxEvnt_90.add_element(EvntDts_90);
      }
      Instrmt_95.add_element(CmplxEvnt_90);
    }
    elt.add_element(Instrmt_95);
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
