#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatus_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatus_message_t_0;
  elt.add_attribute("StatReqID", "SecurityStatusReqID_t_742101802"); // 0
  SecurityStatus_message_t_0.insert("SecurityStatusReqID_t_742101802");
  elt.add_attribute("Ccy", "GBP"); // 0
  SecurityStatus_message_t_0.insert("GBP");
  elt.add_attribute("MktID", "MarketID_t_80265603"); // 0
  SecurityStatus_message_t_0.insert("MarketID_t_80265603");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_2019750166"); // 0
  SecurityStatus_message_t_0.insert("MarketSegmentID_t_2019750166");
  elt.add_attribute("SesID", "4"); // 0
  SecurityStatus_message_t_0.insert("4");
  elt.add_attribute("SesSub", "3"); // 0
  SecurityStatus_message_t_0.insert("3");
  elt.add_attribute("Unsol", "N"); // 0
  SecurityStatus_message_t_0.insert("N");
  elt.add_attribute("TrdgStat", "4"); // 0
  SecurityStatus_message_t_0.insert("4");
  elt.add_attribute("SecTrdEvnt", "4"); // 0
  SecurityStatus_message_t_0.insert("4");
  elt.add_attribute("FinclStat", "1"); // 0
  SecurityStatus_message_t_0.insert("1");
  elt.add_attribute("CorpActn", "G"); // 0
  SecurityStatus_message_t_0.insert("G");
  elt.add_attribute("HaltRsn", "4"); // 0
  SecurityStatus_message_t_0.insert("4");
  elt.add_attribute("InViewOfCmn", "Y"); // 0
  SecurityStatus_message_t_0.insert("Y");
  elt.add_attribute("DueToReltd", "Y"); // 0
  SecurityStatus_message_t_0.insert("Y");
  elt.add_attribute("MDBkTyp", "2"); // 0
  SecurityStatus_message_t_0.insert("2");
  elt.add_attribute("MktDepth", "1941894759"); // 0
  SecurityStatus_message_t_0.insert("1941894759");
  elt.add_attribute("BuyVol", "5096167.590000"); // 0
  SecurityStatus_message_t_0.insert("5096167.590000");
  elt.add_attribute("SellVol", "11481315.100000"); // 0
  SecurityStatus_message_t_0.insert("11481315.100000");
  elt.add_attribute("HighPx", "15023059.140000"); // 0
  SecurityStatus_message_t_0.insert("15023059.140000");
  elt.add_attribute("LowPx", "11874218.090000"); // 0
  SecurityStatus_message_t_0.insert("11874218.090000");
  elt.add_attribute("LastPx", "2753786.660000"); // 0
  SecurityStatus_message_t_0.insert("2753786.660000");
  elt.add_attribute("TxnTm", "TransactTime_t_256743800"); // 0
  SecurityStatus_message_t_0.insert("TransactTime_t_256743800");
  elt.add_attribute("Adjmt", "2"); // 0
  SecurityStatus_message_t_0.insert("2");
  elt.add_attribute("FirstPx", "11540738.130000"); // 0
  SecurityStatus_message_t_0.insert("11540738.130000");
  elt.add_attribute("Txt", "Text_t_159264269"); // 0
  SecurityStatus_message_t_0.insert("Text_t_159264269");
  elt.add_attribute("EncTxtLen", "2024146956"); // 0
  SecurityStatus_message_t_0.insert("2024146956");
  elt.add_attribute("EncTxt", "EncodedText_t_543305904"); // 0
  SecurityStatus_message_t_0.insert("EncodedText_t_543305904");
  all_values.push_back(SecurityStatus_message_t_0);
  all_compo_names.insert("SecurityStatus_message_t");

  { // Hdr
    xml_element Hdr_86{"Hdr"};
    multiset<string> Hdr_86_set;
    Hdr_86.add_attribute("SeqNum", "899200342"); // 1
    Hdr_86_set.insert("899200342");
    Hdr_86.add_attribute("SID", "SenderCompID_t_1969809727"); // 1
    Hdr_86_set.insert("SenderCompID_t_1969809727");
    Hdr_86.add_attribute("TID", "TargetCompID_t_602808069"); // 1
    Hdr_86_set.insert("TargetCompID_t_602808069");
    Hdr_86.add_attribute("OBID", "OnBehalfOfCompID_t_1641302144"); // 1
    Hdr_86_set.insert("OnBehalfOfCompID_t_1641302144");
    Hdr_86.add_attribute("D2ID", "DeliverToCompID_t_1646652267"); // 1
    Hdr_86_set.insert("DeliverToCompID_t_1646652267");
    Hdr_86.add_attribute("SSub", "SenderSubID_t_581187669"); // 1
    Hdr_86_set.insert("SenderSubID_t_581187669");
    Hdr_86.add_attribute("SLoc", "SenderLocationID_t_1721567747"); // 1
    Hdr_86_set.insert("SenderLocationID_t_1721567747");
    Hdr_86.add_attribute("TSub", "TargetSubID_t_1518918785"); // 1
    Hdr_86_set.insert("TargetSubID_t_1518918785");
    Hdr_86.add_attribute("TLoc", "TargetLocationID_t_1098276228"); // 1
    Hdr_86_set.insert("TargetLocationID_t_1098276228");
    Hdr_86.add_attribute("OBSub", "OnBehalfOfSubID_t_496525187"); // 1
    Hdr_86_set.insert("OnBehalfOfSubID_t_496525187");
    Hdr_86.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1643422960"); // 1
    Hdr_86_set.insert("OnBehalfOfLocationID_t_1643422960");
    Hdr_86.add_attribute("D2Sub", "DeliverToSubID_t_679805753"); // 1
    Hdr_86_set.insert("DeliverToSubID_t_679805753");
    Hdr_86.add_attribute("D2Loc", "DeliverToLocationID_t_1220210271"); // 1
    Hdr_86_set.insert("DeliverToLocationID_t_1220210271");
    Hdr_86.add_attribute("PosDup", "N"); // 1
    Hdr_86_set.insert("N");
    Hdr_86.add_attribute("PosRsnd", "Y"); // 1
    Hdr_86_set.insert("Y");
    Hdr_86.add_attribute("Snt", "SendingTime_t_1623776761"); // 1
    Hdr_86_set.insert("SendingTime_t_1623776761");
    Hdr_86.add_attribute("OrigSnt", "OrigSendingTime_t_1850173723"); // 1
    Hdr_86_set.insert("OrigSendingTime_t_1850173723");
    Hdr_86.add_attribute("MsgEncd", "MessageEncoding_t_1065547182"); // 1
    Hdr_86_set.insert("MessageEncoding_t_1065547182");
    all_values.push_back(Hdr_86_set);
    all_compo_names.insert("Hdr_86_set");

    {
      xml_element Hop_86{"Hop"};
      multiset<string> Hop_86_set;
      Hop_86.add_attribute("ID", "HopCompID_t_1499355354"); // 2
      Hop_86_set.insert("HopCompID_t_1499355354");
      Hop_86.add_attribute("Ref", "1644584835"); // 2
      Hop_86_set.insert("1644584835");
      Hop_86.add_attribute("Snt", "HopSendingTime_t_1575163941"); // 2
      Hop_86_set.insert("HopSendingTime_t_1575163941");
      all_values.push_back(Hop_86_set);
      all_compo_names.insert("Hop_86_set");

      Hdr_86.add_element(Hop_86);
    }
    elt.add_element(Hdr_86);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_16{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_16_set;
    ApplSeqCtrl_16.add_attribute("ApplID", "ApplID_t_500003217"); // 1
    ApplSeqCtrl_16_set.insert("ApplID_t_500003217");
    ApplSeqCtrl_16.add_attribute("ApplSeqNum", "999407101"); // 1
    ApplSeqCtrl_16_set.insert("999407101");
    ApplSeqCtrl_16.add_attribute("ApplLastSeqNum", "615102103"); // 1
    ApplSeqCtrl_16_set.insert("615102103");
    ApplSeqCtrl_16.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_16_set.insert("false");
    all_values.push_back(ApplSeqCtrl_16_set);
    all_compo_names.insert("ApplSeqCtrl_16_set");

    elt.add_element(ApplSeqCtrl_16);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_80{"Instrmt"};
    multiset<string> Instrmt_80_set;
    Instrmt_80.add_attribute("Sym", "Symbol_t_1256150901"); // 1
    Instrmt_80_set.insert("Symbol_t_1256150901");
    Instrmt_80.add_attribute("Sfx", "WI"); // 1
    Instrmt_80_set.insert("WI");
    Instrmt_80.add_attribute("ID", "SecurityID_t_1929455696"); // 1
    Instrmt_80_set.insert("SecurityID_t_1929455696");
    Instrmt_80.add_attribute("Src", "5"); // 1
    Instrmt_80_set.insert("5");
    Instrmt_80.add_attribute("Prod", "6"); // 1
    Instrmt_80_set.insert("6");
    Instrmt_80.add_attribute("ProdCmplx", "ProductComplex_t_325277953"); // 1
    Instrmt_80_set.insert("ProductComplex_t_325277953");
    Instrmt_80.add_attribute("SecGrp", "SecurityGroup_t_167131865"); // 1
    Instrmt_80_set.insert("SecurityGroup_t_167131865");
    Instrmt_80.add_attribute("CFI", "CFICode_t_397376499"); // 1
    Instrmt_80_set.insert("CFICode_t_397376499");
    Instrmt_80.add_attribute("SecTyp", "XCN"); // 1
    Instrmt_80_set.insert("XCN");
    Instrmt_80.add_attribute("SubTyp", "SecuritySubType_t_1808434009"); // 1
    Instrmt_80_set.insert("SecuritySubType_t_1808434009");
    Instrmt_80.add_attribute("MMY", "2044028766"); // 1
    Instrmt_80_set.insert("2044028766");
    Instrmt_80.add_attribute("MatDt", "MaturityDate_t_1509273691"); // 1
    Instrmt_80_set.insert("MaturityDate_t_1509273691");
    Instrmt_80.add_attribute("MatTm", "1382518109"); // 1
    Instrmt_80_set.insert("1382518109");
    Instrmt_80.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1415463904"); // 1
    Instrmt_80_set.insert("SettleOnOpenFlag_t_1415463904");
    Instrmt_80.add_attribute("AsgnMeth", "460066271"); // 1
    Instrmt_80_set.insert("460066271");
    Instrmt_80.add_attribute("Status", "1"); // 1
    Instrmt_80_set.insert("1");
    Instrmt_80.add_attribute("CpnPmt", "CouponPaymentDate_t_911403216"); // 1
    Instrmt_80_set.insert("CouponPaymentDate_t_911403216");
    Instrmt_80.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_80_set.insert("MR");
    Instrmt_80.add_attribute("Snrty", "SB"); // 1
    Instrmt_80_set.insert("SB");
    Instrmt_80.add_attribute("NotlPctOut", "4418951.480000"); // 1
    Instrmt_80_set.insert("4418951.480000");
    Instrmt_80.add_attribute("OrigNotlPctOut", "12147642.320000"); // 1
    Instrmt_80_set.insert("12147642.320000");
    Instrmt_80.add_attribute("AttchPnt", "4280630.330000"); // 1
    Instrmt_80_set.insert("4280630.330000");
    Instrmt_80.add_attribute("DetchPnt", "1445852.240000"); // 1
    Instrmt_80_set.insert("1445852.240000");
    Instrmt_80.add_attribute("Issued", "IssueDate_t_132827766"); // 1
    Instrmt_80_set.insert("IssueDate_t_132827766");
    Instrmt_80.add_attribute("RepoCollSecTyp", "1927418387"); // 1
    Instrmt_80_set.insert("1927418387");
    Instrmt_80.add_attribute("RepoTrm", "1789170059"); // 1
    Instrmt_80_set.insert("1789170059");
    Instrmt_80.add_attribute("RepoRt", "17079917.080000"); // 1
    Instrmt_80_set.insert("17079917.080000");
    Instrmt_80.add_attribute("Fctr", "2799379.560000"); // 1
    Instrmt_80_set.insert("2799379.560000");
    Instrmt_80.add_attribute("CrdRtg", "CreditRating_t_641093512"); // 1
    Instrmt_80_set.insert("CreditRating_t_641093512");
    Instrmt_80.add_attribute("Rgstry", "InstrRegistry_t_175610163"); // 1
    Instrmt_80_set.insert("InstrRegistry_t_175610163");
    Instrmt_80.add_attribute("IssuCtry", "1055319839"); // 1
    Instrmt_80_set.insert("1055319839");
    Instrmt_80.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1897244413"); // 1
    Instrmt_80_set.insert("StateOrProvinceOfIssue_t_1897244413");
    Instrmt_80.add_attribute("Lcl", "LocaleOfIssue_t_873997274"); // 1
    Instrmt_80_set.insert("LocaleOfIssue_t_873997274");
    Instrmt_80.add_attribute("Redeem", "RedemptionDate_t_837291888"); // 1
    Instrmt_80_set.insert("RedemptionDate_t_837291888");
    Instrmt_80.add_attribute("StrkPx", "11651759.350000"); // 1
    Instrmt_80_set.insert("11651759.350000");
    Instrmt_80.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_80_set.insert("EUR");
    Instrmt_80.add_attribute("StrkMult", "13323078.000000"); // 1
    Instrmt_80_set.insert("13323078.000000");
    Instrmt_80.add_attribute("StrkValu", "18464241.930000"); // 1
    Instrmt_80_set.insert("18464241.930000");
    Instrmt_80.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_80_set.insert("4");
    Instrmt_80.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_80_set.insert("3");
    Instrmt_80.add_attribute("StrkPxBndryPrcsn", "17429693.120000"); // 1
    Instrmt_80_set.insert("17429693.120000");
    Instrmt_80.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_80_set.insert("3");
    Instrmt_80.add_attribute("OptAt", "228292623"); // 1
    Instrmt_80_set.insert("228292623");
    Instrmt_80.add_attribute("Mult", "10109495.680000"); // 1
    Instrmt_80_set.insert("10109495.680000");
    Instrmt_80.add_attribute("MultTyp", "0"); // 1
    Instrmt_80_set.insert("0");
    Instrmt_80.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_80_set.insert("4");
    Instrmt_80.add_attribute("MinPxIncr", "19223527.840000"); // 1
    Instrmt_80_set.insert("19223527.840000");
    Instrmt_80.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_904900554"); // 1
    Instrmt_80_set.insert("MinPriceIncrementAmount_t_904900554");
    Instrmt_80.add_attribute("UOM", "Alw"); // 1
    Instrmt_80_set.insert("Alw");
    Instrmt_80.add_attribute("UOMQty", "2167642.840000"); // 1
    Instrmt_80_set.insert("2167642.840000");
    Instrmt_80.add_attribute("PxUOM", "tn"); // 1
    Instrmt_80_set.insert("tn");
    Instrmt_80.add_attribute("PxUOMQty", "13396852.240000"); // 1
    Instrmt_80_set.insert("13396852.240000");
    Instrmt_80.add_attribute("SettlMeth", "C"); // 1
    Instrmt_80_set.insert("C");
    Instrmt_80.add_attribute("ExerStyle", "1"); // 1
    Instrmt_80_set.insert("1");
    Instrmt_80.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_80_set.insert("2");
    Instrmt_80.add_attribute("OptPayAmt", "OptPayoutAmount_t_3035919"); // 1
    Instrmt_80_set.insert("OptPayoutAmount_t_3035919");
    Instrmt_80.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_80_set.insert("INX");
    Instrmt_80.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_80_set.insert("EQTY");
    Instrmt_80.add_attribute("ListMeth", "1"); // 1
    Instrmt_80_set.insert("1");
    Instrmt_80.add_attribute("CapPx", "19886107.760000"); // 1
    Instrmt_80_set.insert("19886107.760000");
    Instrmt_80.add_attribute("FlrPx", "3073941.110000"); // 1
    Instrmt_80_set.insert("3073941.110000");
    Instrmt_80.add_attribute("PutCall", "0"); // 1
    Instrmt_80_set.insert("0");
    Instrmt_80.add_attribute("FlexInd", "true"); // 1
    Instrmt_80_set.insert("true");
    Instrmt_80.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_80_set.insert("false");
    Instrmt_80.add_attribute("TmUnit", "Min"); // 1
    Instrmt_80_set.insert("Min");
    Instrmt_80.add_attribute("CpnRt", "166884.490000"); // 1
    Instrmt_80_set.insert("166884.490000");
    Instrmt_80.add_attribute("Exch", "SecurityExchange_t_159772192"); // 1
    Instrmt_80_set.insert("SecurityExchange_t_159772192");
    Instrmt_80.add_attribute("PosLmt", "743890284"); // 1
    Instrmt_80_set.insert("743890284");
    Instrmt_80.add_attribute("NTPosLmt", "1863112642"); // 1
    Instrmt_80_set.insert("1863112642");
    Instrmt_80.add_attribute("Issr", "Issuer_t_102944407"); // 1
    Instrmt_80_set.insert("Issuer_t_102944407");
    Instrmt_80.add_attribute("EncIssrLen", "1737148446"); // 1
    Instrmt_80_set.insert("1737148446");
    Instrmt_80.add_attribute("EncIssr", "EncodedIssuer_t_1458598306"); // 1
    Instrmt_80_set.insert("EncodedIssuer_t_1458598306");
    Instrmt_80.add_attribute("Desc", "SecurityDesc_t_1555390313"); // 1
    Instrmt_80_set.insert("SecurityDesc_t_1555390313");
    Instrmt_80.add_attribute("EncSecDescLen", "1965441069"); // 1
    Instrmt_80_set.insert("1965441069");
    Instrmt_80.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_322064226"); // 1
    Instrmt_80_set.insert("EncodedSecurityDesc_t_322064226");
    Instrmt_80.add_attribute("Pool", "Pool_t_1320418843"); // 1
    Instrmt_80_set.insert("Pool_t_1320418843");
    Instrmt_80.add_attribute("CSetMo", "1925293341"); // 1
    Instrmt_80_set.insert("1925293341");
    Instrmt_80.add_attribute("CPPgm", "99"); // 1
    Instrmt_80_set.insert("99");
    Instrmt_80.add_attribute("CPRegT", "CPRegType_t_77835749"); // 1
    Instrmt_80_set.insert("CPRegType_t_77835749");
    Instrmt_80.add_attribute("Dated", "DatedDate_t_689431884"); // 1
    Instrmt_80_set.insert("DatedDate_t_689431884");
    Instrmt_80.add_attribute("IntAcrl", "InterestAccrualDate_t_313697647"); // 1
    Instrmt_80_set.insert("InterestAccrualDate_t_313697647");
    all_values.push_back(Instrmt_80_set);
    all_compo_names.insert("Instrmt_80_set");

    {
      xml_element AID_83{"AID"};
      multiset<string> AID_83_set;
      AID_83.add_attribute("AltID", "SecurityAltID_t_50016888"); // 2
      AID_83_set.insert("SecurityAltID_t_50016888");
      AID_83.add_attribute("AltIDSrc", "J"); // 2
      AID_83_set.insert("J");
      all_values.push_back(AID_83_set);
      all_compo_names.insert("AID_83_set");

      Instrmt_80.add_element(AID_83);
    }
    {
      xml_element SecXML_83{"SecXML"};
      multiset<string> SecXML_83_set;
      SecXML_83.add_attribute("Schema", "SecurityXMLSchema_t_675047155"); // 2
      SecXML_83_set.insert("SecurityXMLSchema_t_675047155");
      all_values.push_back(SecXML_83_set);
      all_compo_names.insert("SecXML_83_set");

      Instrmt_80.add_element(SecXML_83);
    }
    {
      xml_element Evnt_83{"Evnt"};
      multiset<string> Evnt_83_set;
      Evnt_83.add_attribute("EventTyp", "13"); // 2
      Evnt_83_set.insert("13");
      Evnt_83.add_attribute("Dt", "EventDate_t_1001253423"); // 2
      Evnt_83_set.insert("EventDate_t_1001253423");
      Evnt_83.add_attribute("Tm", "EventTime_t_678083075"); // 2
      Evnt_83_set.insert("EventTime_t_678083075");
      Evnt_83.add_attribute("Px", "19680264.060000"); // 2
      Evnt_83_set.insert("19680264.060000");
      Evnt_83.add_attribute("Txt", "EventText_t_253327695"); // 2
      Evnt_83_set.insert("EventText_t_253327695");
      all_values.push_back(Evnt_83_set);
      all_compo_names.insert("Evnt_83_set");

      Instrmt_80.add_element(Evnt_83);
    }
    {
      xml_element Pty_413{"Pty"};
      multiset<string> Pty_413_set;
      Pty_413.add_attribute("ID", "InstrumentPartyID_t_1322212506"); // 2
      Pty_413_set.insert("InstrumentPartyID_t_1322212506");
      Pty_413.add_attribute("Src", "D"); // 2
      Pty_413_set.insert("D");
      Pty_413.add_attribute("R", "54"); // 2
      Pty_413_set.insert("54");
      all_values.push_back(Pty_413_set);
      all_compo_names.insert("Pty_413_set");

      {
        xml_element Sub_413{"Sub"};
        multiset<string> Sub_413_set;
        Sub_413.add_attribute("ID", "InstrumentPartySubID_t_1716102703"); // 3
        Sub_413_set.insert("InstrumentPartySubID_t_1716102703");
        Sub_413.add_attribute("Typ", "8"); // 3
        Sub_413_set.insert("8");
        all_values.push_back(Sub_413_set);
        all_compo_names.insert("Sub_413_set");

        Pty_413.add_element(Sub_413);
      }
      Instrmt_80.add_element(Pty_413);
    }
    {
      xml_element CmplxEvnt_80{"CmplxEvnt"};
      multiset<string> CmplxEvnt_80_set;
      CmplxEvnt_80.add_attribute("Typ", "3"); // 2
      CmplxEvnt_80_set.insert("3");
      CmplxEvnt_80.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1127685187"); // 2
      CmplxEvnt_80_set.insert("ComplexOptPayoutAmount_t_1127685187");
      CmplxEvnt_80.add_attribute("Px", "3934827.370000"); // 2
      CmplxEvnt_80_set.insert("3934827.370000");
      CmplxEvnt_80.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_80_set.insert("5");
      CmplxEvnt_80.add_attribute("PxBndryPrcsn", "18715754.710000"); // 2
      CmplxEvnt_80_set.insert("18715754.710000");
      CmplxEvnt_80.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_80_set.insert("2");
      CmplxEvnt_80.add_attribute("Cond", "1"); // 2
      CmplxEvnt_80_set.insert("1");
      all_values.push_back(CmplxEvnt_80_set);
      all_compo_names.insert("CmplxEvnt_80_set");

      {
        xml_element EvntDts_80{"EvntDts"};
        multiset<string> EvntDts_80_set;
        EvntDts_80.add_attribute("StartDt", "ComplexEventStartDate_t_1461240270"); // 3
        EvntDts_80_set.insert("ComplexEventStartDate_t_1461240270");
        EvntDts_80.add_attribute("EndDt", "ComplexEventEndDate_t_1567710038"); // 3
        EvntDts_80_set.insert("ComplexEventEndDate_t_1567710038");
        all_values.push_back(EvntDts_80_set);
        all_compo_names.insert("EvntDts_80_set");

        {
          xml_element EvntTms_80{"EvntTms"};
          multiset<string> EvntTms_80_set;
          EvntTms_80.add_attribute("StartTm", "1376031072"); // 4
          EvntTms_80_set.insert("1376031072");
          EvntTms_80.add_attribute("EndTm", "1279197691"); // 4
          EvntTms_80_set.insert("1279197691");
          all_values.push_back(EvntTms_80_set);
          all_compo_names.insert("EvntTms_80_set");

          EvntDts_80.add_element(EvntTms_80);
        }
        CmplxEvnt_80.add_element(EvntDts_80);
      }
      Instrmt_80.add_element(CmplxEvnt_80);
    }
    elt.add_element(Instrmt_80);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_15{"InstrmtExt"};
    multiset<string> InstrmtExt_15_set;
    InstrmtExt_15.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_15_set.insert("2");
    InstrmtExt_15.add_attribute("PctAtRisk", "5489662.670000"); // 1
    InstrmtExt_15_set.insert("5489662.670000");
    all_values.push_back(InstrmtExt_15_set);
    all_compo_names.insert("InstrmtExt_15_set");

    {
      xml_element Attrb_26{"Attrb"};
      multiset<string> Attrb_26_set;
      Attrb_26.add_attribute("Typ", "22"); // 2
      Attrb_26_set.insert("22");
      Attrb_26.add_attribute("Val", "InstrAttribValue_t_1986707627"); // 2
      Attrb_26_set.insert("InstrAttribValue_t_1986707627");
      all_values.push_back(Attrb_26_set);
      all_compo_names.insert("Attrb_26_set");

      InstrmtExt_15.add_element(Attrb_26);
    }
    elt.add_element(InstrmtExt_15);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_116{"Undly"};
    multiset<string> Undly_116_set;
    Undly_116.add_attribute("Sym", "UnderlyingSymbol_t_1746439268"); // 1
    Undly_116_set.insert("UnderlyingSymbol_t_1746439268");
    Undly_116.add_attribute("Sfx", "CD"); // 1
    Undly_116_set.insert("CD");
    Undly_116.add_attribute("ID", "UnderlyingSecurityID_t_676818904"); // 1
    Undly_116_set.insert("UnderlyingSecurityID_t_676818904");
    Undly_116.add_attribute("Src", "J"); // 1
    Undly_116_set.insert("J");
    Undly_116.add_attribute("Prod", "13"); // 1
    Undly_116_set.insert("13");
    Undly_116.add_attribute("CFI", "UnderlyingCFICode_t_831844697"); // 1
    Undly_116_set.insert("UnderlyingCFICode_t_831844697");
    Undly_116.add_attribute("SecTyp", "BRADY"); // 1
    Undly_116_set.insert("BRADY");
    Undly_116.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1506051857"); // 1
    Undly_116_set.insert("UnderlyingSecuritySubType_t_1506051857");
    Undly_116.add_attribute("MMY", "652387455"); // 1
    Undly_116_set.insert("652387455");
    Undly_116.add_attribute("Mat", "UnderlyingMaturityDate_t_735170199"); // 1
    Undly_116_set.insert("UnderlyingMaturityDate_t_735170199");
    Undly_116.add_attribute("MatTm", "680780715"); // 1
    Undly_116_set.insert("680780715");
    Undly_116.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_314057341"); // 1
    Undly_116_set.insert("UnderlyingCouponPaymentDate_t_314057341");
    Undly_116.add_attribute("RestrctTyp", "MM"); // 1
    Undly_116_set.insert("MM");
    Undly_116.add_attribute("Snrty", "SB"); // 1
    Undly_116_set.insert("SB");
    Undly_116.add_attribute("NotlPctOut", "6908516.300000"); // 1
    Undly_116_set.insert("6908516.300000");
    Undly_116.add_attribute("OrigNotlPctOut", "8538161.650000"); // 1
    Undly_116_set.insert("8538161.650000");
    Undly_116.add_attribute("AttchPnt", "13770849.570000"); // 1
    Undly_116_set.insert("13770849.570000");
    Undly_116.add_attribute("DetchPnt", "10843343.670000"); // 1
    Undly_116_set.insert("10843343.670000");
    Undly_116.add_attribute("Issued", "UnderlyingIssueDate_t_571512516"); // 1
    Undly_116_set.insert("UnderlyingIssueDate_t_571512516");
    Undly_116.add_attribute("RepoCollSecTyp", "1101176781"); // 1
    Undly_116_set.insert("1101176781");
    Undly_116.add_attribute("RepoTrm", "1193446099"); // 1
    Undly_116_set.insert("1193446099");
    Undly_116.add_attribute("RepoRt", "3921532.740000"); // 1
    Undly_116_set.insert("3921532.740000");
    Undly_116.add_attribute("Fctr", "4149334.030000"); // 1
    Undly_116_set.insert("4149334.030000");
    Undly_116.add_attribute("CrdRtg", "UnderlyingCreditRating_t_613672490"); // 1
    Undly_116_set.insert("UnderlyingCreditRating_t_613672490");
    Undly_116.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1768184346"); // 1
    Undly_116_set.insert("UnderlyingInstrRegistry_t_1768184346");
    Undly_116.add_attribute("Ctry", "1694131094"); // 1
    Undly_116_set.insert("1694131094");
    Undly_116.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_355963107"); // 1
    Undly_116_set.insert("UnderlyingStateOrProvinceOfIssue_t_355963107");
    Undly_116.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_169666965"); // 1
    Undly_116_set.insert("UnderlyingLocaleOfIssue_t_169666965");
    Undly_116.add_attribute("Redeem", "UnderlyingRedemptionDate_t_603654831"); // 1
    Undly_116_set.insert("UnderlyingRedemptionDate_t_603654831");
    Undly_116.add_attribute("StrkPx", "1951870.860000"); // 1
    Undly_116_set.insert("1951870.860000");
    Undly_116.add_attribute("StrkCcy", "CHF"); // 1
    Undly_116_set.insert("CHF");
    Undly_116.add_attribute("OptA", "348108713"); // 1
    Undly_116_set.insert("348108713");
    Undly_116.add_attribute("Mult", "14732878.860000"); // 1
    Undly_116_set.insert("14732878.860000");
    Undly_116.add_attribute("MultTyp", "2"); // 1
    Undly_116_set.insert("2");
    Undly_116.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_116_set.insert("0");
    Undly_116.add_attribute("UOM", "Gal"); // 1
    Undly_116_set.insert("Gal");
    Undly_116.add_attribute("UOMQty", "1650420.360000"); // 1
    Undly_116_set.insert("1650420.360000");
    Undly_116.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_116_set.insert("oz_tr");
    Undly_116.add_attribute("PxUOMQty", "8100363.910000"); // 1
    Undly_116_set.insert("8100363.910000");
    Undly_116.add_attribute("TmUnit", "Yr"); // 1
    Undly_116_set.insert("Yr");
    Undly_116.add_attribute("ExerStyle", "2"); // 1
    Undly_116_set.insert("2");
    Undly_116.add_attribute("CpnRt", "11240937.330000"); // 1
    Undly_116_set.insert("11240937.330000");
    Undly_116.add_attribute("Exch", "UnderlyingSecurityExchange_t_48620594"); // 1
    Undly_116_set.insert("UnderlyingSecurityExchange_t_48620594");
    Undly_116.add_attribute("Issr", "UnderlyingIssuer_t_1464826190"); // 1
    Undly_116_set.insert("UnderlyingIssuer_t_1464826190");
    Undly_116.add_attribute("EncUndIssrLen", "1814945363"); // 1
    Undly_116_set.insert("1814945363");
    Undly_116.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_902436759"); // 1
    Undly_116_set.insert("EncodedUnderlyingIssuer_t_902436759");
    Undly_116.add_attribute("Desc", "UnderlyingSecurityDesc_t_694427499"); // 1
    Undly_116_set.insert("UnderlyingSecurityDesc_t_694427499");
    Undly_116.add_attribute("EncUndSecDescLen", "751796082"); // 1
    Undly_116_set.insert("751796082");
    Undly_116.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1473949275"); // 1
    Undly_116_set.insert("EncodedUnderlyingSecurityDesc_t_1473949275");
    Undly_116.add_attribute("CPPgm", "UnderlyingCPProgram_t_1795604280"); // 1
    Undly_116_set.insert("UnderlyingCPProgram_t_1795604280");
    Undly_116.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1945242182"); // 1
    Undly_116_set.insert("UnderlyingCPRegType_t_1945242182");
    Undly_116.add_attribute("AllocPct", "18661025.490000"); // 1
    Undly_116_set.insert("18661025.490000");
    Undly_116.add_attribute("Ccy", "GBP"); // 1
    Undly_116_set.insert("GBP");
    Undly_116.add_attribute("Qty", "14868032.480000"); // 1
    Undly_116_set.insert("14868032.480000");
    Undly_116.add_attribute("SettlTyp", "5"); // 1
    Undly_116_set.insert("5");
    Undly_116.add_attribute("CashAmt", "UnderlyingCashAmount_t_767394131"); // 1
    Undly_116_set.insert("UnderlyingCashAmount_t_767394131");
    Undly_116.add_attribute("CashTyp", "DIFF"); // 1
    Undly_116_set.insert("DIFF");
    Undly_116.add_attribute("Px", "2133563.130000"); // 1
    Undly_116_set.insert("2133563.130000");
    Undly_116.add_attribute("DirtPx", "9625812.170000"); // 1
    Undly_116_set.insert("9625812.170000");
    Undly_116.add_attribute("EndPx", "3054555.470000"); // 1
    Undly_116_set.insert("3054555.470000");
    Undly_116.add_attribute("StartVal", "UnderlyingStartValue_t_415966764"); // 1
    Undly_116_set.insert("UnderlyingStartValue_t_415966764");
    Undly_116.add_attribute("CurVal", "UnderlyingCurrentValue_t_1310689930"); // 1
    Undly_116_set.insert("UnderlyingCurrentValue_t_1310689930");
    Undly_116.add_attribute("EndVal", "UnderlyingEndValue_t_1778743434"); // 1
    Undly_116_set.insert("UnderlyingEndValue_t_1778743434");
    Undly_116.add_attribute("AdjQty", "991662.960000"); // 1
    Undly_116_set.insert("991662.960000");
    Undly_116.add_attribute("FxRate", "3392837.770000"); // 1
    Undly_116_set.insert("3392837.770000");
    Undly_116.add_attribute("FxRateCalc", "M"); // 1
    Undly_116_set.insert("M");
    Undly_116.add_attribute("CapValu", "UnderlyingCapValue_t_264208332"); // 1
    Undly_116_set.insert("UnderlyingCapValue_t_264208332");
    Undly_116.add_attribute("SetMeth", "UnderlyingSettlMethod_t_873929481"); // 1
    Undly_116_set.insert("UnderlyingSettlMethod_t_873929481");
    Undly_116.add_attribute("PutCall", "598945113"); // 1
    Undly_116_set.insert("598945113");
    all_values.push_back(Undly_116_set);
    all_compo_names.insert("Undly_116_set");

    {
      xml_element UndAID_116{"UndAID"};
      multiset<string> UndAID_116_set;
      UndAID_116.add_attribute("AltID", "UnderlyingSecurityAltID_t_1164420568"); // 2
      UndAID_116_set.insert("UnderlyingSecurityAltID_t_1164420568");
      UndAID_116.add_attribute("AltIDSrc", "I"); // 2
      UndAID_116_set.insert("I");
      all_values.push_back(UndAID_116_set);
      all_compo_names.insert("UndAID_116_set");

      Undly_116.add_element(UndAID_116);
    }
    {
      xml_element Stip_187{"Stip"};
      multiset<string> Stip_187_set;
      Stip_187.add_attribute("Typ", "SECTOR"); // 2
      Stip_187_set.insert("SECTOR");
      Stip_187.add_attribute("Val", "UnderlyingStipValue_t_1213041162"); // 2
      Stip_187_set.insert("UnderlyingStipValue_t_1213041162");
      all_values.push_back(Stip_187_set);
      all_compo_names.insert("Stip_187_set");

      Undly_116.add_element(Stip_187);
    }
    {
      xml_element Pty_414{"Pty"};
      multiset<string> Pty_414_set;
      Pty_414.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1406698443"); // 2
      Pty_414_set.insert("UnderlyingInstrumentPartyID_t_1406698443");
      Pty_414.add_attribute("Src", "4"); // 2
      Pty_414_set.insert("4");
      Pty_414.add_attribute("R", "83"); // 2
      Pty_414_set.insert("83");
      all_values.push_back(Pty_414_set);
      all_compo_names.insert("Pty_414_set");

      {
        xml_element Sub_414{"Sub"};
        multiset<string> Sub_414_set;
        Sub_414.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2101125942"); // 3
        Sub_414_set.insert("UnderlyingInstrumentPartySubID_t_2101125942");
        Sub_414.add_attribute("Typ", "13"); // 3
        Sub_414_set.insert("13");
        all_values.push_back(Sub_414_set);
        all_compo_names.insert("Sub_414_set");

        Pty_414.add_element(Sub_414);
      }
      Undly_116.add_element(Pty_414);
    }
    elt.add_element(Undly_116);
  } // end Undly
  { // Undly
    xml_element Undly_117{"Undly"};
    multiset<string> Undly_117_set;
    Undly_117.add_attribute("Sym", "UnderlyingSymbol_t_1441943548"); // 1
    Undly_117_set.insert("UnderlyingSymbol_t_1441943548");
    Undly_117.add_attribute("Sfx", "WI"); // 1
    Undly_117_set.insert("WI");
    Undly_117.add_attribute("ID", "UnderlyingSecurityID_t_1940055178"); // 1
    Undly_117_set.insert("UnderlyingSecurityID_t_1940055178");
    Undly_117.add_attribute("Src", "E"); // 1
    Undly_117_set.insert("E");
    Undly_117.add_attribute("Prod", "12"); // 1
    Undly_117_set.insert("12");
    Undly_117.add_attribute("CFI", "UnderlyingCFICode_t_204002554"); // 1
    Undly_117_set.insert("UnderlyingCFICode_t_204002554");
    Undly_117.add_attribute("SecTyp", "SPCLA"); // 1
    Undly_117_set.insert("SPCLA");
    Undly_117.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1422002092"); // 1
    Undly_117_set.insert("UnderlyingSecuritySubType_t_1422002092");
    Undly_117.add_attribute("MMY", "971396685"); // 1
    Undly_117_set.insert("971396685");
    Undly_117.add_attribute("Mat", "UnderlyingMaturityDate_t_8868615"); // 1
    Undly_117_set.insert("UnderlyingMaturityDate_t_8868615");
    Undly_117.add_attribute("MatTm", "1635358405"); // 1
    Undly_117_set.insert("1635358405");
    Undly_117.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1933977902"); // 1
    Undly_117_set.insert("UnderlyingCouponPaymentDate_t_1933977902");
    Undly_117.add_attribute("RestrctTyp", "MM"); // 1
    Undly_117_set.insert("MM");
    Undly_117.add_attribute("Snrty", "SB"); // 1
    Undly_117_set.insert("SB");
    Undly_117.add_attribute("NotlPctOut", "10971841.850000"); // 1
    Undly_117_set.insert("10971841.850000");
    Undly_117.add_attribute("OrigNotlPctOut", "20930675.960000"); // 1
    Undly_117_set.insert("20930675.960000");
    Undly_117.add_attribute("AttchPnt", "30078.180000"); // 1
    Undly_117_set.insert("30078.180000");
    Undly_117.add_attribute("DetchPnt", "14364679.620000"); // 1
    Undly_117_set.insert("14364679.620000");
    Undly_117.add_attribute("Issued", "UnderlyingIssueDate_t_1881976318"); // 1
    Undly_117_set.insert("UnderlyingIssueDate_t_1881976318");
    Undly_117.add_attribute("RepoCollSecTyp", "267216151"); // 1
    Undly_117_set.insert("267216151");
    Undly_117.add_attribute("RepoTrm", "162913796"); // 1
    Undly_117_set.insert("162913796");
    Undly_117.add_attribute("RepoRt", "3334377.840000"); // 1
    Undly_117_set.insert("3334377.840000");
    Undly_117.add_attribute("Fctr", "14316367.190000"); // 1
    Undly_117_set.insert("14316367.190000");
    Undly_117.add_attribute("CrdRtg", "UnderlyingCreditRating_t_104786049"); // 1
    Undly_117_set.insert("UnderlyingCreditRating_t_104786049");
    Undly_117.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2056476630"); // 1
    Undly_117_set.insert("UnderlyingInstrRegistry_t_2056476630");
    Undly_117.add_attribute("Ctry", "497194233"); // 1
    Undly_117_set.insert("497194233");
    Undly_117.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1511484492"); // 1
    Undly_117_set.insert("UnderlyingStateOrProvinceOfIssue_t_1511484492");
    Undly_117.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1299493544"); // 1
    Undly_117_set.insert("UnderlyingLocaleOfIssue_t_1299493544");
    Undly_117.add_attribute("Redeem", "UnderlyingRedemptionDate_t_465188506"); // 1
    Undly_117_set.insert("UnderlyingRedemptionDate_t_465188506");
    Undly_117.add_attribute("StrkPx", "14651267.860000"); // 1
    Undly_117_set.insert("14651267.860000");
    Undly_117.add_attribute("StrkCcy", "GBP"); // 1
    Undly_117_set.insert("GBP");
    Undly_117.add_attribute("OptA", "1066889713"); // 1
    Undly_117_set.insert("1066889713");
    Undly_117.add_attribute("Mult", "10868780.700000"); // 1
    Undly_117_set.insert("10868780.700000");
    Undly_117.add_attribute("MultTyp", "2"); // 1
    Undly_117_set.insert("2");
    Undly_117.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_117_set.insert("1");
    Undly_117.add_attribute("UOM", "lbs"); // 1
    Undly_117_set.insert("lbs");
    Undly_117.add_attribute("UOMQty", "14200929.050000"); // 1
    Undly_117_set.insert("14200929.050000");
    Undly_117.add_attribute("PxUOM", "tn"); // 1
    Undly_117_set.insert("tn");
    Undly_117.add_attribute("PxUOMQty", "1147936.610000"); // 1
    Undly_117_set.insert("1147936.610000");
    Undly_117.add_attribute("TmUnit", "S"); // 1
    Undly_117_set.insert("S");
    Undly_117.add_attribute("ExerStyle", "2"); // 1
    Undly_117_set.insert("2");
    Undly_117.add_attribute("CpnRt", "20487715.630000"); // 1
    Undly_117_set.insert("20487715.630000");
    Undly_117.add_attribute("Exch", "UnderlyingSecurityExchange_t_1743285682"); // 1
    Undly_117_set.insert("UnderlyingSecurityExchange_t_1743285682");
    Undly_117.add_attribute("Issr", "UnderlyingIssuer_t_1545425048"); // 1
    Undly_117_set.insert("UnderlyingIssuer_t_1545425048");
    Undly_117.add_attribute("EncUndIssrLen", "998472100"); // 1
    Undly_117_set.insert("998472100");
    Undly_117.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1688869631"); // 1
    Undly_117_set.insert("EncodedUnderlyingIssuer_t_1688869631");
    Undly_117.add_attribute("Desc", "UnderlyingSecurityDesc_t_1548432866"); // 1
    Undly_117_set.insert("UnderlyingSecurityDesc_t_1548432866");
    Undly_117.add_attribute("EncUndSecDescLen", "287456415"); // 1
    Undly_117_set.insert("287456415");
    Undly_117.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1423362301"); // 1
    Undly_117_set.insert("EncodedUnderlyingSecurityDesc_t_1423362301");
    Undly_117.add_attribute("CPPgm", "UnderlyingCPProgram_t_1815649017"); // 1
    Undly_117_set.insert("UnderlyingCPProgram_t_1815649017");
    Undly_117.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_450370211"); // 1
    Undly_117_set.insert("UnderlyingCPRegType_t_450370211");
    Undly_117.add_attribute("AllocPct", "17568000.850000"); // 1
    Undly_117_set.insert("17568000.850000");
    Undly_117.add_attribute("Ccy", "GBP"); // 1
    Undly_117_set.insert("GBP");
    Undly_117.add_attribute("Qty", "16657930.680000"); // 1
    Undly_117_set.insert("16657930.680000");
    Undly_117.add_attribute("SettlTyp", "2"); // 1
    Undly_117_set.insert("2");
    Undly_117.add_attribute("CashAmt", "UnderlyingCashAmount_t_2066640752"); // 1
    Undly_117_set.insert("UnderlyingCashAmount_t_2066640752");
    Undly_117.add_attribute("CashTyp", "FIXED"); // 1
    Undly_117_set.insert("FIXED");
    Undly_117.add_attribute("Px", "20621848.270000"); // 1
    Undly_117_set.insert("20621848.270000");
    Undly_117.add_attribute("DirtPx", "13842838.900000"); // 1
    Undly_117_set.insert("13842838.900000");
    Undly_117.add_attribute("EndPx", "21121095.040000"); // 1
    Undly_117_set.insert("21121095.040000");
    Undly_117.add_attribute("StartVal", "UnderlyingStartValue_t_1821833233"); // 1
    Undly_117_set.insert("UnderlyingStartValue_t_1821833233");
    Undly_117.add_attribute("CurVal", "UnderlyingCurrentValue_t_303689956"); // 1
    Undly_117_set.insert("UnderlyingCurrentValue_t_303689956");
    Undly_117.add_attribute("EndVal", "UnderlyingEndValue_t_1051503926"); // 1
    Undly_117_set.insert("UnderlyingEndValue_t_1051503926");
    Undly_117.add_attribute("AdjQty", "5945604.410000"); // 1
    Undly_117_set.insert("5945604.410000");
    Undly_117.add_attribute("FxRate", "10353966.320000"); // 1
    Undly_117_set.insert("10353966.320000");
    Undly_117.add_attribute("FxRateCalc", "M"); // 1
    Undly_117_set.insert("M");
    Undly_117.add_attribute("CapValu", "UnderlyingCapValue_t_2014653346"); // 1
    Undly_117_set.insert("UnderlyingCapValue_t_2014653346");
    Undly_117.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1041621752"); // 1
    Undly_117_set.insert("UnderlyingSettlMethod_t_1041621752");
    Undly_117.add_attribute("PutCall", "309694563"); // 1
    Undly_117_set.insert("309694563");
    all_values.push_back(Undly_117_set);
    all_compo_names.insert("Undly_117_set");

    {
      xml_element UndAID_117{"UndAID"};
      multiset<string> UndAID_117_set;
      UndAID_117.add_attribute("AltID", "UnderlyingSecurityAltID_t_1296131218"); // 2
      UndAID_117_set.insert("UnderlyingSecurityAltID_t_1296131218");
      UndAID_117.add_attribute("AltIDSrc", "5"); // 2
      UndAID_117_set.insert("5");
      all_values.push_back(UndAID_117_set);
      all_compo_names.insert("UndAID_117_set");

      Undly_117.add_element(UndAID_117);
    }
    {
      xml_element Stip_188{"Stip"};
      multiset<string> Stip_188_set;
      Stip_188.add_attribute("Typ", "DISCOUNT"); // 2
      Stip_188_set.insert("DISCOUNT");
      Stip_188.add_attribute("Val", "UnderlyingStipValue_t_891933252"); // 2
      Stip_188_set.insert("UnderlyingStipValue_t_891933252");
      all_values.push_back(Stip_188_set);
      all_compo_names.insert("Stip_188_set");

      Undly_117.add_element(Stip_188);
    }
    {
      xml_element Pty_415{"Pty"};
      multiset<string> Pty_415_set;
      Pty_415.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2081146678"); // 2
      Pty_415_set.insert("UnderlyingInstrumentPartyID_t_2081146678");
      Pty_415.add_attribute("Src", "2"); // 2
      Pty_415_set.insert("2");
      Pty_415.add_attribute("R", "35"); // 2
      Pty_415_set.insert("35");
      all_values.push_back(Pty_415_set);
      all_compo_names.insert("Pty_415_set");

      {
        xml_element Sub_415{"Sub"};
        multiset<string> Sub_415_set;
        Sub_415.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1482095897"); // 3
        Sub_415_set.insert("UnderlyingInstrumentPartySubID_t_1482095897");
        Sub_415.add_attribute("Typ", "16"); // 3
        Sub_415_set.insert("16");
        all_values.push_back(Sub_415_set);
        all_compo_names.insert("Sub_415_set");

        Pty_415.add_element(Sub_415);
      }
      Undly_117.add_element(Pty_415);
    }
    elt.add_element(Undly_117);
  } // end Undly
  { // Leg
    xml_element Leg_97{"Leg"};
    multiset<string> Leg_97_set;
    Leg_97.add_attribute("Sym", "LegSymbol_t_1150261266"); // 1
    Leg_97_set.insert("LegSymbol_t_1150261266");
    Leg_97.add_attribute("Sfx", "WI"); // 1
    Leg_97_set.insert("WI");
    Leg_97.add_attribute("ID", "LegSecurityID_t_1465997974"); // 1
    Leg_97_set.insert("LegSecurityID_t_1465997974");
    Leg_97.add_attribute("Src", "M"); // 1
    Leg_97_set.insert("M");
    Leg_97.add_attribute("Prod", "7"); // 1
    Leg_97_set.insert("7");
    Leg_97.add_attribute("CFI", "LegCFICode_t_984307394"); // 1
    Leg_97_set.insert("LegCFICode_t_984307394");
    Leg_97.add_attribute("SecTyp", "TERM"); // 1
    Leg_97_set.insert("TERM");
    Leg_97.add_attribute("SecSubTyp", "LegSecuritySubType_t_274110921"); // 1
    Leg_97_set.insert("LegSecuritySubType_t_274110921");
    Leg_97.add_attribute("MMY", "1802110358"); // 1
    Leg_97_set.insert("1802110358");
    Leg_97.add_attribute("Mat", "LegMaturityDate_t_1614277208"); // 1
    Leg_97_set.insert("LegMaturityDate_t_1614277208");
    Leg_97.add_attribute("MatTm", "1658394811"); // 1
    Leg_97_set.insert("1658394811");
    Leg_97.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1766736214"); // 1
    Leg_97_set.insert("LegCouponPaymentDate_t_1766736214");
    Leg_97.add_attribute("Issued", "LegIssueDate_t_1288626793"); // 1
    Leg_97_set.insert("LegIssueDate_t_1288626793");
    Leg_97.add_attribute("RepoCollSecTyp", "1962084767"); // 1
    Leg_97_set.insert("1962084767");
    Leg_97.add_attribute("RepoTrm", "670756492"); // 1
    Leg_97_set.insert("670756492");
    Leg_97.add_attribute("RepoRt", "18831872.340000"); // 1
    Leg_97_set.insert("18831872.340000");
    Leg_97.add_attribute("Fctr", "8499977.510000"); // 1
    Leg_97_set.insert("8499977.510000");
    Leg_97.add_attribute("CrdRtg", "LegCreditRating_t_865657394"); // 1
    Leg_97_set.insert("LegCreditRating_t_865657394");
    Leg_97.add_attribute("Rgstry", "LegInstrRegistry_t_1750356932"); // 1
    Leg_97_set.insert("LegInstrRegistry_t_1750356932");
    Leg_97.add_attribute("Ctry", "1891619504"); // 1
    Leg_97_set.insert("1891619504");
    Leg_97.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1175351957"); // 1
    Leg_97_set.insert("LegStateOrProvinceOfIssue_t_1175351957");
    Leg_97.add_attribute("Lcl", "LegLocaleOfIssue_t_899004502"); // 1
    Leg_97_set.insert("LegLocaleOfIssue_t_899004502");
    Leg_97.add_attribute("Redeem", "LegRedemptionDate_t_279857486"); // 1
    Leg_97_set.insert("LegRedemptionDate_t_279857486");
    Leg_97.add_attribute("Strk", "13863344.360000"); // 1
    Leg_97_set.insert("13863344.360000");
    Leg_97.add_attribute("StrkCcy", "CAN"); // 1
    Leg_97_set.insert("CAN");
    Leg_97.add_attribute("OptA", "448305367"); // 1
    Leg_97_set.insert("448305367");
    Leg_97.add_attribute("Cmult", "767733.420000"); // 1
    Leg_97_set.insert("767733.420000");
    Leg_97.add_attribute("MultTyp", "1"); // 1
    Leg_97_set.insert("1");
    Leg_97.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_97_set.insert("1");
    Leg_97.add_attribute("UOM", "tn"); // 1
    Leg_97_set.insert("tn");
    Leg_97.add_attribute("UOMQty", "6983940.320000"); // 1
    Leg_97_set.insert("6983940.320000");
    Leg_97.add_attribute("PxUOM", "Bu"); // 1
    Leg_97_set.insert("Bu");
    Leg_97.add_attribute("PxUOMQty", "12519692.060000"); // 1
    Leg_97_set.insert("12519692.060000");
    Leg_97.add_attribute("TmUnit", "Yr"); // 1
    Leg_97_set.insert("Yr");
    Leg_97.add_attribute("ExerStyle", "0"); // 1
    Leg_97_set.insert("0");
    Leg_97.add_attribute("CpnRt", "887929.520000"); // 1
    Leg_97_set.insert("887929.520000");
    Leg_97.add_attribute("Exch", "LegSecurityExchange_t_353066120"); // 1
    Leg_97_set.insert("LegSecurityExchange_t_353066120");
    Leg_97.add_attribute("Issr", "LegIssuer_t_226595008"); // 1
    Leg_97_set.insert("LegIssuer_t_226595008");
    Leg_97.add_attribute("EncLegIssrLen", "1890903311"); // 1
    Leg_97_set.insert("1890903311");
    Leg_97.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1967343328"); // 1
    Leg_97_set.insert("EncodedLegIssuer_t_1967343328");
    Leg_97.add_attribute("Desc", "LegSecurityDesc_t_1884989819"); // 1
    Leg_97_set.insert("LegSecurityDesc_t_1884989819");
    Leg_97.add_attribute("EncLegSecDescLen", "1510155877"); // 1
    Leg_97_set.insert("1510155877");
    Leg_97.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1108486473"); // 1
    Leg_97_set.insert("EncodedLegSecurityDesc_t_1108486473");
    Leg_97.add_attribute("RatioQty", "16995909.390000"); // 1
    Leg_97_set.insert("16995909.390000");
    Leg_97.add_attribute("Side", "3"); // 1
    Leg_97_set.insert("3");
    Leg_97.add_attribute("Ccy", "USD"); // 1
    Leg_97_set.insert("USD");
    Leg_97.add_attribute("Pool", "LegPool_t_899086116"); // 1
    Leg_97_set.insert("LegPool_t_899086116");
    Leg_97.add_attribute("Dated", "LegDatedDate_t_447063344"); // 1
    Leg_97_set.insert("LegDatedDate_t_447063344");
    Leg_97.add_attribute("CSetMo", "146240898"); // 1
    Leg_97_set.insert("146240898");
    Leg_97.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2074438074"); // 1
    Leg_97_set.insert("LegInterestAccrualDate_t_2074438074");
    Leg_97.add_attribute("PutCall", "1346067847"); // 1
    Leg_97_set.insert("1346067847");
    Leg_97.add_attribute("LegOptionRatio", "4260983.850000"); // 1
    Leg_97_set.insert("4260983.850000");
    Leg_97.add_attribute("Px", "13132888.620000"); // 1
    Leg_97_set.insert("13132888.620000");
    all_values.push_back(Leg_97_set);
    all_compo_names.insert("Leg_97_set");

    {
      xml_element LegAID_92{"LegAID"};
      multiset<string> LegAID_92_set;
      LegAID_92.add_attribute("SecAltID", "LegSecurityAltID_t_989521954"); // 2
      LegAID_92_set.insert("LegSecurityAltID_t_989521954");
      LegAID_92.add_attribute("SecAltIDSrc", "B"); // 2
      LegAID_92_set.insert("B");
      all_values.push_back(LegAID_92_set);
      all_compo_names.insert("LegAID_92_set");

      Leg_97.add_element(LegAID_92);
    }
    elt.add_element(Leg_97);
  } // end Leg
  { // Leg
    xml_element Leg_98{"Leg"};
    multiset<string> Leg_98_set;
    Leg_98.add_attribute("Sym", "LegSymbol_t_1761594229"); // 1
    Leg_98_set.insert("LegSymbol_t_1761594229");
    Leg_98.add_attribute("Sfx", "CD"); // 1
    Leg_98_set.insert("CD");
    Leg_98.add_attribute("ID", "LegSecurityID_t_187751668"); // 1
    Leg_98_set.insert("LegSecurityID_t_187751668");
    Leg_98.add_attribute("Src", "9"); // 1
    Leg_98_set.insert("9");
    Leg_98.add_attribute("Prod", "6"); // 1
    Leg_98_set.insert("6");
    Leg_98.add_attribute("CFI", "LegCFICode_t_886145700"); // 1
    Leg_98_set.insert("LegCFICode_t_886145700");
    Leg_98.add_attribute("SecTyp", "TERM"); // 1
    Leg_98_set.insert("TERM");
    Leg_98.add_attribute("SecSubTyp", "LegSecuritySubType_t_2104235734"); // 1
    Leg_98_set.insert("LegSecuritySubType_t_2104235734");
    Leg_98.add_attribute("MMY", "1687119440"); // 1
    Leg_98_set.insert("1687119440");
    Leg_98.add_attribute("Mat", "LegMaturityDate_t_1109341299"); // 1
    Leg_98_set.insert("LegMaturityDate_t_1109341299");
    Leg_98.add_attribute("MatTm", "45545038"); // 1
    Leg_98_set.insert("45545038");
    Leg_98.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2040185560"); // 1
    Leg_98_set.insert("LegCouponPaymentDate_t_2040185560");
    Leg_98.add_attribute("Issued", "LegIssueDate_t_1335936307"); // 1
    Leg_98_set.insert("LegIssueDate_t_1335936307");
    Leg_98.add_attribute("RepoCollSecTyp", "1936448349"); // 1
    Leg_98_set.insert("1936448349");
    Leg_98.add_attribute("RepoTrm", "1860045240"); // 1
    Leg_98_set.insert("1860045240");
    Leg_98.add_attribute("RepoRt", "10734424.780000"); // 1
    Leg_98_set.insert("10734424.780000");
    Leg_98.add_attribute("Fctr", "12991205.790000"); // 1
    Leg_98_set.insert("12991205.790000");
    Leg_98.add_attribute("CrdRtg", "LegCreditRating_t_821048065"); // 1
    Leg_98_set.insert("LegCreditRating_t_821048065");
    Leg_98.add_attribute("Rgstry", "LegInstrRegistry_t_625549769"); // 1
    Leg_98_set.insert("LegInstrRegistry_t_625549769");
    Leg_98.add_attribute("Ctry", "1332549301"); // 1
    Leg_98_set.insert("1332549301");
    Leg_98.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1665238125"); // 1
    Leg_98_set.insert("LegStateOrProvinceOfIssue_t_1665238125");
    Leg_98.add_attribute("Lcl", "LegLocaleOfIssue_t_1027654812"); // 1
    Leg_98_set.insert("LegLocaleOfIssue_t_1027654812");
    Leg_98.add_attribute("Redeem", "LegRedemptionDate_t_84151769"); // 1
    Leg_98_set.insert("LegRedemptionDate_t_84151769");
    Leg_98.add_attribute("Strk", "21123014.700000"); // 1
    Leg_98_set.insert("21123014.700000");
    Leg_98.add_attribute("StrkCcy", "CHF"); // 1
    Leg_98_set.insert("CHF");
    Leg_98.add_attribute("OptA", "1310885669"); // 1
    Leg_98_set.insert("1310885669");
    Leg_98.add_attribute("Cmult", "15999940.950000"); // 1
    Leg_98_set.insert("15999940.950000");
    Leg_98.add_attribute("MultTyp", "0"); // 1
    Leg_98_set.insert("0");
    Leg_98.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_98_set.insert("0");
    Leg_98.add_attribute("UOM", "MWh"); // 1
    Leg_98_set.insert("MWh");
    Leg_98.add_attribute("UOMQty", "9385056.380000"); // 1
    Leg_98_set.insert("9385056.380000");
    Leg_98.add_attribute("PxUOM", "Bcf"); // 1
    Leg_98_set.insert("Bcf");
    Leg_98.add_attribute("PxUOMQty", "2798810.170000"); // 1
    Leg_98_set.insert("2798810.170000");
    Leg_98.add_attribute("TmUnit", "D"); // 1
    Leg_98_set.insert("D");
    Leg_98.add_attribute("ExerStyle", "1"); // 1
    Leg_98_set.insert("1");
    Leg_98.add_attribute("CpnRt", "11660267.180000"); // 1
    Leg_98_set.insert("11660267.180000");
    Leg_98.add_attribute("Exch", "LegSecurityExchange_t_1507206144"); // 1
    Leg_98_set.insert("LegSecurityExchange_t_1507206144");
    Leg_98.add_attribute("Issr", "LegIssuer_t_2028237885"); // 1
    Leg_98_set.insert("LegIssuer_t_2028237885");
    Leg_98.add_attribute("EncLegIssrLen", "705662510"); // 1
    Leg_98_set.insert("705662510");
    Leg_98.add_attribute("EncLegIssr", "EncodedLegIssuer_t_469063795"); // 1
    Leg_98_set.insert("EncodedLegIssuer_t_469063795");
    Leg_98.add_attribute("Desc", "LegSecurityDesc_t_2073782924"); // 1
    Leg_98_set.insert("LegSecurityDesc_t_2073782924");
    Leg_98.add_attribute("EncLegSecDescLen", "598364422"); // 1
    Leg_98_set.insert("598364422");
    Leg_98.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1805000102"); // 1
    Leg_98_set.insert("EncodedLegSecurityDesc_t_1805000102");
    Leg_98.add_attribute("RatioQty", "18627476.250000"); // 1
    Leg_98_set.insert("18627476.250000");
    Leg_98.add_attribute("Side", "F"); // 1
    Leg_98_set.insert("F");
    Leg_98.add_attribute("Ccy", "JPY"); // 1
    Leg_98_set.insert("JPY");
    Leg_98.add_attribute("Pool", "LegPool_t_1131974079"); // 1
    Leg_98_set.insert("LegPool_t_1131974079");
    Leg_98.add_attribute("Dated", "LegDatedDate_t_1356508702"); // 1
    Leg_98_set.insert("LegDatedDate_t_1356508702");
    Leg_98.add_attribute("CSetMo", "199450209"); // 1
    Leg_98_set.insert("199450209");
    Leg_98.add_attribute("IntAcrl", "LegInterestAccrualDate_t_649728557"); // 1
    Leg_98_set.insert("LegInterestAccrualDate_t_649728557");
    Leg_98.add_attribute("PutCall", "236679866"); // 1
    Leg_98_set.insert("236679866");
    Leg_98.add_attribute("LegOptionRatio", "2836019.790000"); // 1
    Leg_98_set.insert("2836019.790000");
    Leg_98.add_attribute("Px", "6145463.790000"); // 1
    Leg_98_set.insert("6145463.790000");
    all_values.push_back(Leg_98_set);
    all_compo_names.insert("Leg_98_set");

    {
      xml_element LegAID_93{"LegAID"};
      multiset<string> LegAID_93_set;
      LegAID_93.add_attribute("SecAltID", "LegSecurityAltID_t_1410575577"); // 2
      LegAID_93_set.insert("LegSecurityAltID_t_1410575577");
      LegAID_93.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_93_set.insert("3");
      all_values.push_back(LegAID_93_set);
      all_compo_names.insert("LegAID_93_set");

      Leg_98.add_element(LegAID_93);
    }
    elt.add_element(Leg_98);
  } // end Leg
  { // Leg
    xml_element Leg_99{"Leg"};
    multiset<string> Leg_99_set;
    Leg_99.add_attribute("Sym", "LegSymbol_t_1925432048"); // 1
    Leg_99_set.insert("LegSymbol_t_1925432048");
    Leg_99.add_attribute("Sfx", "CD"); // 1
    Leg_99_set.insert("CD");
    Leg_99.add_attribute("ID", "LegSecurityID_t_1619103232"); // 1
    Leg_99_set.insert("LegSecurityID_t_1619103232");
    Leg_99.add_attribute("Src", "8"); // 1
    Leg_99_set.insert("8");
    Leg_99.add_attribute("Prod", "6"); // 1
    Leg_99_set.insert("6");
    Leg_99.add_attribute("CFI", "LegCFICode_t_410125222"); // 1
    Leg_99_set.insert("LegCFICode_t_410125222");
    Leg_99.add_attribute("SecTyp", "MPP"); // 1
    Leg_99_set.insert("MPP");
    Leg_99.add_attribute("SecSubTyp", "LegSecuritySubType_t_1235096391"); // 1
    Leg_99_set.insert("LegSecuritySubType_t_1235096391");
    Leg_99.add_attribute("MMY", "760474155"); // 1
    Leg_99_set.insert("760474155");
    Leg_99.add_attribute("Mat", "LegMaturityDate_t_1074093798"); // 1
    Leg_99_set.insert("LegMaturityDate_t_1074093798");
    Leg_99.add_attribute("MatTm", "253639461"); // 1
    Leg_99_set.insert("253639461");
    Leg_99.add_attribute("CpnPmt", "LegCouponPaymentDate_t_120196651"); // 1
    Leg_99_set.insert("LegCouponPaymentDate_t_120196651");
    Leg_99.add_attribute("Issued", "LegIssueDate_t_954848035"); // 1
    Leg_99_set.insert("LegIssueDate_t_954848035");
    Leg_99.add_attribute("RepoCollSecTyp", "959301971"); // 1
    Leg_99_set.insert("959301971");
    Leg_99.add_attribute("RepoTrm", "589260447"); // 1
    Leg_99_set.insert("589260447");
    Leg_99.add_attribute("RepoRt", "8811473.110000"); // 1
    Leg_99_set.insert("8811473.110000");
    Leg_99.add_attribute("Fctr", "15576663.930000"); // 1
    Leg_99_set.insert("15576663.930000");
    Leg_99.add_attribute("CrdRtg", "LegCreditRating_t_246776901"); // 1
    Leg_99_set.insert("LegCreditRating_t_246776901");
    Leg_99.add_attribute("Rgstry", "LegInstrRegistry_t_596411289"); // 1
    Leg_99_set.insert("LegInstrRegistry_t_596411289");
    Leg_99.add_attribute("Ctry", "1868592407"); // 1
    Leg_99_set.insert("1868592407");
    Leg_99.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_977735834"); // 1
    Leg_99_set.insert("LegStateOrProvinceOfIssue_t_977735834");
    Leg_99.add_attribute("Lcl", "LegLocaleOfIssue_t_1610795845"); // 1
    Leg_99_set.insert("LegLocaleOfIssue_t_1610795845");
    Leg_99.add_attribute("Redeem", "LegRedemptionDate_t_853082839"); // 1
    Leg_99_set.insert("LegRedemptionDate_t_853082839");
    Leg_99.add_attribute("Strk", "1867608.890000"); // 1
    Leg_99_set.insert("1867608.890000");
    Leg_99.add_attribute("StrkCcy", "USD"); // 1
    Leg_99_set.insert("USD");
    Leg_99.add_attribute("OptA", "423440755"); // 1
    Leg_99_set.insert("423440755");
    Leg_99.add_attribute("Cmult", "20938480.340000"); // 1
    Leg_99_set.insert("20938480.340000");
    Leg_99.add_attribute("MultTyp", "0"); // 1
    Leg_99_set.insert("0");
    Leg_99.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_99_set.insert("2");
    Leg_99.add_attribute("UOM", "MMBtu"); // 1
    Leg_99_set.insert("MMBtu");
    Leg_99.add_attribute("UOMQty", "18953061.750000"); // 1
    Leg_99_set.insert("18953061.750000");
    Leg_99.add_attribute("PxUOM", "Gal"); // 1
    Leg_99_set.insert("Gal");
    Leg_99.add_attribute("PxUOMQty", "18601757.920000"); // 1
    Leg_99_set.insert("18601757.920000");
    Leg_99.add_attribute("TmUnit", "S"); // 1
    Leg_99_set.insert("S");
    Leg_99.add_attribute("ExerStyle", "0"); // 1
    Leg_99_set.insert("0");
    Leg_99.add_attribute("CpnRt", "1228173.670000"); // 1
    Leg_99_set.insert("1228173.670000");
    Leg_99.add_attribute("Exch", "LegSecurityExchange_t_828786548"); // 1
    Leg_99_set.insert("LegSecurityExchange_t_828786548");
    Leg_99.add_attribute("Issr", "LegIssuer_t_592446826"); // 1
    Leg_99_set.insert("LegIssuer_t_592446826");
    Leg_99.add_attribute("EncLegIssrLen", "883291522"); // 1
    Leg_99_set.insert("883291522");
    Leg_99.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1902880346"); // 1
    Leg_99_set.insert("EncodedLegIssuer_t_1902880346");
    Leg_99.add_attribute("Desc", "LegSecurityDesc_t_846086288"); // 1
    Leg_99_set.insert("LegSecurityDesc_t_846086288");
    Leg_99.add_attribute("EncLegSecDescLen", "1003488173"); // 1
    Leg_99_set.insert("1003488173");
    Leg_99.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_710244734"); // 1
    Leg_99_set.insert("EncodedLegSecurityDesc_t_710244734");
    Leg_99.add_attribute("RatioQty", "18053882.590000"); // 1
    Leg_99_set.insert("18053882.590000");
    Leg_99.add_attribute("Side", "D"); // 1
    Leg_99_set.insert("D");
    Leg_99.add_attribute("Ccy", "CHF"); // 1
    Leg_99_set.insert("CHF");
    Leg_99.add_attribute("Pool", "LegPool_t_1839525522"); // 1
    Leg_99_set.insert("LegPool_t_1839525522");
    Leg_99.add_attribute("Dated", "LegDatedDate_t_40319686"); // 1
    Leg_99_set.insert("LegDatedDate_t_40319686");
    Leg_99.add_attribute("CSetMo", "936679764"); // 1
    Leg_99_set.insert("936679764");
    Leg_99.add_attribute("IntAcrl", "LegInterestAccrualDate_t_669777708"); // 1
    Leg_99_set.insert("LegInterestAccrualDate_t_669777708");
    Leg_99.add_attribute("PutCall", "1651115532"); // 1
    Leg_99_set.insert("1651115532");
    Leg_99.add_attribute("LegOptionRatio", "17897626.030000"); // 1
    Leg_99_set.insert("17897626.030000");
    Leg_99.add_attribute("Px", "8565385.970000"); // 1
    Leg_99_set.insert("8565385.970000");
    all_values.push_back(Leg_99_set);
    all_compo_names.insert("Leg_99_set");

    {
      xml_element LegAID_94{"LegAID"};
      multiset<string> LegAID_94_set;
      LegAID_94.add_attribute("SecAltID", "LegSecurityAltID_t_1313877939"); // 2
      LegAID_94_set.insert("LegSecurityAltID_t_1313877939");
      LegAID_94.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_94_set.insert("A");
      all_values.push_back(LegAID_94_set);
      all_compo_names.insert("LegAID_94_set");

      Leg_99.add_element(LegAID_94);
    }
    elt.add_element(Leg_99);
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
