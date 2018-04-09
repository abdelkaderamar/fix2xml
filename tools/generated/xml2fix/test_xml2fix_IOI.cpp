#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/IOI.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( IOI_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"IOI" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> IOI_message_t_0;
  elt.add_attribute("ID", "IOIID_t_1644449183"); // 0
  IOI_message_t_0.insert("IOIID_t_1644449183");
  elt.add_attribute("TransTyp", "R"); // 0
  IOI_message_t_0.insert("R");
  elt.add_attribute("RefID", "IOIRefID_t_2115253831"); // 0
  IOI_message_t_0.insert("IOIRefID_t_2115253831");
  elt.add_attribute("Side", "2"); // 0
  IOI_message_t_0.insert("2");
  elt.add_attribute("QtyTyp", "2"); // 0
  IOI_message_t_0.insert("2");
  elt.add_attribute("Qty", "0"); // 0
  IOI_message_t_0.insert("0");
  elt.add_attribute("Ccy", "JPY"); // 0
  IOI_message_t_0.insert("JPY");
  elt.add_attribute("PxTyp", "9"); // 0
  IOI_message_t_0.insert("9");
  elt.add_attribute("Px", "17561614.850000"); // 0
  IOI_message_t_0.insert("17561614.850000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_1141212357"); // 0
  IOI_message_t_0.insert("ValidUntilTime_t_1141212357");
  elt.add_attribute("QltyInd", "M"); // 0
  IOI_message_t_0.insert("M");
  elt.add_attribute("NatFlag", "Y"); // 0
  IOI_message_t_0.insert("Y");
  elt.add_attribute("Txt", "Text_t_73838817"); // 0
  IOI_message_t_0.insert("Text_t_73838817");
  elt.add_attribute("EncTxtLen", "244616082"); // 0
  IOI_message_t_0.insert("244616082");
  elt.add_attribute("EncTxt", "EncodedText_t_608928073"); // 0
  IOI_message_t_0.insert("EncodedText_t_608928073");
  elt.add_attribute("TxnTm", "TransactTime_t_399894490"); // 0
  IOI_message_t_0.insert("TransactTime_t_399894490");
  elt.add_attribute("URL", "URLLink_t_780197004"); // 0
  IOI_message_t_0.insert("URLLink_t_780197004");
  all_values.push_back(IOI_message_t_0);
  all_compo_names.insert("IOI_message_t");

  { // Hdr
    xml_element Hdr_33{"Hdr"};
    multiset<string> Hdr_33_set;
    Hdr_33.add_attribute("SeqNum", "101289034"); // 1
    Hdr_33_set.insert("101289034");
    Hdr_33.add_attribute("SID", "SenderCompID_t_1595900866"); // 1
    Hdr_33_set.insert("SenderCompID_t_1595900866");
    Hdr_33.add_attribute("TID", "TargetCompID_t_900811628"); // 1
    Hdr_33_set.insert("TargetCompID_t_900811628");
    Hdr_33.add_attribute("OBID", "OnBehalfOfCompID_t_1430148955"); // 1
    Hdr_33_set.insert("OnBehalfOfCompID_t_1430148955");
    Hdr_33.add_attribute("D2ID", "DeliverToCompID_t_2004047030"); // 1
    Hdr_33_set.insert("DeliverToCompID_t_2004047030");
    Hdr_33.add_attribute("SSub", "SenderSubID_t_1892722404"); // 1
    Hdr_33_set.insert("SenderSubID_t_1892722404");
    Hdr_33.add_attribute("SLoc", "SenderLocationID_t_953908106"); // 1
    Hdr_33_set.insert("SenderLocationID_t_953908106");
    Hdr_33.add_attribute("TSub", "TargetSubID_t_109142134"); // 1
    Hdr_33_set.insert("TargetSubID_t_109142134");
    Hdr_33.add_attribute("TLoc", "TargetLocationID_t_1491039825"); // 1
    Hdr_33_set.insert("TargetLocationID_t_1491039825");
    Hdr_33.add_attribute("OBSub", "OnBehalfOfSubID_t_1790002485"); // 1
    Hdr_33_set.insert("OnBehalfOfSubID_t_1790002485");
    Hdr_33.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1194941110"); // 1
    Hdr_33_set.insert("OnBehalfOfLocationID_t_1194941110");
    Hdr_33.add_attribute("D2Sub", "DeliverToSubID_t_1701460312"); // 1
    Hdr_33_set.insert("DeliverToSubID_t_1701460312");
    Hdr_33.add_attribute("D2Loc", "DeliverToLocationID_t_1027920247"); // 1
    Hdr_33_set.insert("DeliverToLocationID_t_1027920247");
    Hdr_33.add_attribute("PosDup", "N"); // 1
    Hdr_33_set.insert("N");
    Hdr_33.add_attribute("PosRsnd", "Y"); // 1
    Hdr_33_set.insert("Y");
    Hdr_33.add_attribute("Snt", "SendingTime_t_995690430"); // 1
    Hdr_33_set.insert("SendingTime_t_995690430");
    Hdr_33.add_attribute("OrigSnt", "OrigSendingTime_t_506377991"); // 1
    Hdr_33_set.insert("OrigSendingTime_t_506377991");
    Hdr_33.add_attribute("MsgEncd", "MessageEncoding_t_1142983968"); // 1
    Hdr_33_set.insert("MessageEncoding_t_1142983968");
    all_values.push_back(Hdr_33_set);
    all_compo_names.insert("Hdr_33_set");

    {
      xml_element Hop_33{"Hop"};
      multiset<string> Hop_33_set;
      Hop_33.add_attribute("ID", "HopCompID_t_771044947"); // 2
      Hop_33_set.insert("HopCompID_t_771044947");
      Hop_33.add_attribute("Ref", "1223658391"); // 2
      Hop_33_set.insert("1223658391");
      Hop_33.add_attribute("Snt", "HopSendingTime_t_1671156389"); // 2
      Hop_33_set.insert("HopSendingTime_t_1671156389");
      all_values.push_back(Hop_33_set);
      all_compo_names.insert("Hop_33_set");

      Hdr_33.add_element(Hop_33);
    }
    elt.add_element(Hdr_33);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_5{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_5_set;
    ApplSeqCtrl_5.add_attribute("ApplID", "ApplID_t_1397828681"); // 1
    ApplSeqCtrl_5_set.insert("ApplID_t_1397828681");
    ApplSeqCtrl_5.add_attribute("ApplSeqNum", "832336228"); // 1
    ApplSeqCtrl_5_set.insert("832336228");
    ApplSeqCtrl_5.add_attribute("ApplLastSeqNum", "664885098"); // 1
    ApplSeqCtrl_5_set.insert("664885098");
    ApplSeqCtrl_5.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_5_set.insert("false");
    all_values.push_back(ApplSeqCtrl_5_set);
    all_compo_names.insert("ApplSeqCtrl_5_set");

    elt.add_element(ApplSeqCtrl_5);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_25{"Instrmt"};
    multiset<string> Instrmt_25_set;
    Instrmt_25.add_attribute("Sym", "Symbol_t_770431011"); // 1
    Instrmt_25_set.insert("Symbol_t_770431011");
    Instrmt_25.add_attribute("Sfx", "WI"); // 1
    Instrmt_25_set.insert("WI");
    Instrmt_25.add_attribute("ID", "SecurityID_t_1118157774"); // 1
    Instrmt_25_set.insert("SecurityID_t_1118157774");
    Instrmt_25.add_attribute("Src", "5"); // 1
    Instrmt_25_set.insert("5");
    Instrmt_25.add_attribute("Prod", "12"); // 1
    Instrmt_25_set.insert("12");
    Instrmt_25.add_attribute("ProdCmplx", "ProductComplex_t_1898354778"); // 1
    Instrmt_25_set.insert("ProductComplex_t_1898354778");
    Instrmt_25.add_attribute("SecGrp", "SecurityGroup_t_1480648118"); // 1
    Instrmt_25_set.insert("SecurityGroup_t_1480648118");
    Instrmt_25.add_attribute("CFI", "CFICode_t_587035624"); // 1
    Instrmt_25_set.insert("CFICode_t_587035624");
    Instrmt_25.add_attribute("SecTyp", "EUSUPRA"); // 1
    Instrmt_25_set.insert("EUSUPRA");
    Instrmt_25.add_attribute("SubTyp", "SecuritySubType_t_763313425"); // 1
    Instrmt_25_set.insert("SecuritySubType_t_763313425");
    Instrmt_25.add_attribute("MMY", "443599006"); // 1
    Instrmt_25_set.insert("443599006");
    Instrmt_25.add_attribute("MatDt", "MaturityDate_t_396921514"); // 1
    Instrmt_25_set.insert("MaturityDate_t_396921514");
    Instrmt_25.add_attribute("MatTm", "1717221532"); // 1
    Instrmt_25_set.insert("1717221532");
    Instrmt_25.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_552741141"); // 1
    Instrmt_25_set.insert("SettleOnOpenFlag_t_552741141");
    Instrmt_25.add_attribute("AsgnMeth", "1887961339"); // 1
    Instrmt_25_set.insert("1887961339");
    Instrmt_25.add_attribute("Status", "2"); // 1
    Instrmt_25_set.insert("2");
    Instrmt_25.add_attribute("CpnPmt", "CouponPaymentDate_t_1747682251"); // 1
    Instrmt_25_set.insert("CouponPaymentDate_t_1747682251");
    Instrmt_25.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_25_set.insert("XR");
    Instrmt_25.add_attribute("Snrty", "SR"); // 1
    Instrmt_25_set.insert("SR");
    Instrmt_25.add_attribute("NotlPctOut", "2921052.490000"); // 1
    Instrmt_25_set.insert("2921052.490000");
    Instrmt_25.add_attribute("OrigNotlPctOut", "14443936.660000"); // 1
    Instrmt_25_set.insert("14443936.660000");
    Instrmt_25.add_attribute("AttchPnt", "12358673.990000"); // 1
    Instrmt_25_set.insert("12358673.990000");
    Instrmt_25.add_attribute("DetchPnt", "7984832.410000"); // 1
    Instrmt_25_set.insert("7984832.410000");
    Instrmt_25.add_attribute("Issued", "IssueDate_t_439893987"); // 1
    Instrmt_25_set.insert("IssueDate_t_439893987");
    Instrmt_25.add_attribute("RepoCollSecTyp", "2006912346"); // 1
    Instrmt_25_set.insert("2006912346");
    Instrmt_25.add_attribute("RepoTrm", "2022141632"); // 1
    Instrmt_25_set.insert("2022141632");
    Instrmt_25.add_attribute("RepoRt", "21110503.760000"); // 1
    Instrmt_25_set.insert("21110503.760000");
    Instrmt_25.add_attribute("Fctr", "12572573.800000"); // 1
    Instrmt_25_set.insert("12572573.800000");
    Instrmt_25.add_attribute("CrdRtg", "CreditRating_t_706994212"); // 1
    Instrmt_25_set.insert("CreditRating_t_706994212");
    Instrmt_25.add_attribute("Rgstry", "InstrRegistry_t_628451826"); // 1
    Instrmt_25_set.insert("InstrRegistry_t_628451826");
    Instrmt_25.add_attribute("IssuCtry", "2130799071"); // 1
    Instrmt_25_set.insert("2130799071");
    Instrmt_25.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1477425224"); // 1
    Instrmt_25_set.insert("StateOrProvinceOfIssue_t_1477425224");
    Instrmt_25.add_attribute("Lcl", "LocaleOfIssue_t_1367175742"); // 1
    Instrmt_25_set.insert("LocaleOfIssue_t_1367175742");
    Instrmt_25.add_attribute("Redeem", "RedemptionDate_t_1101473197"); // 1
    Instrmt_25_set.insert("RedemptionDate_t_1101473197");
    Instrmt_25.add_attribute("StrkPx", "7093006.600000"); // 1
    Instrmt_25_set.insert("7093006.600000");
    Instrmt_25.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_25_set.insert("CAN");
    Instrmt_25.add_attribute("StrkMult", "424651.310000"); // 1
    Instrmt_25_set.insert("424651.310000");
    Instrmt_25.add_attribute("StrkValu", "9453461.240000"); // 1
    Instrmt_25_set.insert("9453461.240000");
    Instrmt_25.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_25_set.insert("2");
    Instrmt_25.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_25_set.insert("2");
    Instrmt_25.add_attribute("StrkPxBndryPrcsn", "13889451.310000"); // 1
    Instrmt_25_set.insert("13889451.310000");
    Instrmt_25.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_25_set.insert("4");
    Instrmt_25.add_attribute("OptAt", "375516440"); // 1
    Instrmt_25_set.insert("375516440");
    Instrmt_25.add_attribute("Mult", "19416862.720000"); // 1
    Instrmt_25_set.insert("19416862.720000");
    Instrmt_25.add_attribute("MultTyp", "0"); // 1
    Instrmt_25_set.insert("0");
    Instrmt_25.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_25_set.insert("4");
    Instrmt_25.add_attribute("MinPxIncr", "15418848.750000"); // 1
    Instrmt_25_set.insert("15418848.750000");
    Instrmt_25.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_935880646"); // 1
    Instrmt_25_set.insert("MinPriceIncrementAmount_t_935880646");
    Instrmt_25.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_25_set.insert("MMbbl");
    Instrmt_25.add_attribute("UOMQty", "18339901.250000"); // 1
    Instrmt_25_set.insert("18339901.250000");
    Instrmt_25.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_25_set.insert("Gal");
    Instrmt_25.add_attribute("PxUOMQty", "10638175.290000"); // 1
    Instrmt_25_set.insert("10638175.290000");
    Instrmt_25.add_attribute("SettlMeth", "C"); // 1
    Instrmt_25_set.insert("C");
    Instrmt_25.add_attribute("ExerStyle", "1"); // 1
    Instrmt_25_set.insert("1");
    Instrmt_25.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_25_set.insert("2");
    Instrmt_25.add_attribute("OptPayAmt", "OptPayoutAmount_t_359647702"); // 1
    Instrmt_25_set.insert("OptPayoutAmount_t_359647702");
    Instrmt_25.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_25_set.insert("STD");
    Instrmt_25.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_25_set.insert("CDSD");
    Instrmt_25.add_attribute("ListMeth", "0"); // 1
    Instrmt_25_set.insert("0");
    Instrmt_25.add_attribute("CapPx", "12647032.060000"); // 1
    Instrmt_25_set.insert("12647032.060000");
    Instrmt_25.add_attribute("FlrPx", "163353.830000"); // 1
    Instrmt_25_set.insert("163353.830000");
    Instrmt_25.add_attribute("PutCall", "0"); // 1
    Instrmt_25_set.insert("0");
    Instrmt_25.add_attribute("FlexInd", "true"); // 1
    Instrmt_25_set.insert("true");
    Instrmt_25.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_25_set.insert("true");
    Instrmt_25.add_attribute("TmUnit", "Min"); // 1
    Instrmt_25_set.insert("Min");
    Instrmt_25.add_attribute("CpnRt", "8427058.000000"); // 1
    Instrmt_25_set.insert("8427058.000000");
    Instrmt_25.add_attribute("Exch", "SecurityExchange_t_1970152908"); // 1
    Instrmt_25_set.insert("SecurityExchange_t_1970152908");
    Instrmt_25.add_attribute("PosLmt", "1148349282"); // 1
    Instrmt_25_set.insert("1148349282");
    Instrmt_25.add_attribute("NTPosLmt", "1788051925"); // 1
    Instrmt_25_set.insert("1788051925");
    Instrmt_25.add_attribute("Issr", "Issuer_t_1326696345"); // 1
    Instrmt_25_set.insert("Issuer_t_1326696345");
    Instrmt_25.add_attribute("EncIssrLen", "1954127838"); // 1
    Instrmt_25_set.insert("1954127838");
    Instrmt_25.add_attribute("EncIssr", "EncodedIssuer_t_1029513408"); // 1
    Instrmt_25_set.insert("EncodedIssuer_t_1029513408");
    Instrmt_25.add_attribute("Desc", "SecurityDesc_t_1080161297"); // 1
    Instrmt_25_set.insert("SecurityDesc_t_1080161297");
    Instrmt_25.add_attribute("EncSecDescLen", "182160631"); // 1
    Instrmt_25_set.insert("182160631");
    Instrmt_25.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_823716032"); // 1
    Instrmt_25_set.insert("EncodedSecurityDesc_t_823716032");
    Instrmt_25.add_attribute("Pool", "Pool_t_574103940"); // 1
    Instrmt_25_set.insert("Pool_t_574103940");
    Instrmt_25.add_attribute("CSetMo", "1917417440"); // 1
    Instrmt_25_set.insert("1917417440");
    Instrmt_25.add_attribute("CPPgm", "1"); // 1
    Instrmt_25_set.insert("1");
    Instrmt_25.add_attribute("CPRegT", "CPRegType_t_1509984586"); // 1
    Instrmt_25_set.insert("CPRegType_t_1509984586");
    Instrmt_25.add_attribute("Dated", "DatedDate_t_1745367570"); // 1
    Instrmt_25_set.insert("DatedDate_t_1745367570");
    Instrmt_25.add_attribute("IntAcrl", "InterestAccrualDate_t_2052107384"); // 1
    Instrmt_25_set.insert("InterestAccrualDate_t_2052107384");
    all_values.push_back(Instrmt_25_set);
    all_compo_names.insert("Instrmt_25_set");

    {
      xml_element AID_28{"AID"};
      multiset<string> AID_28_set;
      AID_28.add_attribute("AltID", "SecurityAltID_t_1742775251"); // 2
      AID_28_set.insert("SecurityAltID_t_1742775251");
      AID_28.add_attribute("AltIDSrc", "G"); // 2
      AID_28_set.insert("G");
      all_values.push_back(AID_28_set);
      all_compo_names.insert("AID_28_set");

      Instrmt_25.add_element(AID_28);
    }
    {
      xml_element SecXML_28{"SecXML"};
      multiset<string> SecXML_28_set;
      SecXML_28.add_attribute("Schema", "SecurityXMLSchema_t_389613454"); // 2
      SecXML_28_set.insert("SecurityXMLSchema_t_389613454");
      all_values.push_back(SecXML_28_set);
      all_compo_names.insert("SecXML_28_set");

      Instrmt_25.add_element(SecXML_28);
    }
    {
      xml_element Evnt_28{"Evnt"};
      multiset<string> Evnt_28_set;
      Evnt_28.add_attribute("EventTyp", "15"); // 2
      Evnt_28_set.insert("15");
      Evnt_28.add_attribute("Dt", "EventDate_t_1584947679"); // 2
      Evnt_28_set.insert("EventDate_t_1584947679");
      Evnt_28.add_attribute("Tm", "EventTime_t_749261156"); // 2
      Evnt_28_set.insert("EventTime_t_749261156");
      Evnt_28.add_attribute("Px", "9042276.350000"); // 2
      Evnt_28_set.insert("9042276.350000");
      Evnt_28.add_attribute("Txt", "EventText_t_1617967638"); // 2
      Evnt_28_set.insert("EventText_t_1617967638");
      all_values.push_back(Evnt_28_set);
      all_compo_names.insert("Evnt_28_set");

      Instrmt_25.add_element(Evnt_28);
    }
    {
      xml_element Pty_151{"Pty"};
      multiset<string> Pty_151_set;
      Pty_151.add_attribute("ID", "InstrumentPartyID_t_1815903071"); // 2
      Pty_151_set.insert("InstrumentPartyID_t_1815903071");
      Pty_151.add_attribute("Src", "F"); // 2
      Pty_151_set.insert("F");
      Pty_151.add_attribute("R", "37"); // 2
      Pty_151_set.insert("37");
      all_values.push_back(Pty_151_set);
      all_compo_names.insert("Pty_151_set");

      {
        xml_element Sub_151{"Sub"};
        multiset<string> Sub_151_set;
        Sub_151.add_attribute("ID", "InstrumentPartySubID_t_65002913"); // 3
        Sub_151_set.insert("InstrumentPartySubID_t_65002913");
        Sub_151.add_attribute("Typ", "22"); // 3
        Sub_151_set.insert("22");
        all_values.push_back(Sub_151_set);
        all_compo_names.insert("Sub_151_set");

        Pty_151.add_element(Sub_151);
      }
      Instrmt_25.add_element(Pty_151);
    }
    {
      xml_element CmplxEvnt_25{"CmplxEvnt"};
      multiset<string> CmplxEvnt_25_set;
      CmplxEvnt_25.add_attribute("Typ", "8"); // 2
      CmplxEvnt_25_set.insert("8");
      CmplxEvnt_25.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1170887064"); // 2
      CmplxEvnt_25_set.insert("ComplexOptPayoutAmount_t_1170887064");
      CmplxEvnt_25.add_attribute("Px", "13485482.950000"); // 2
      CmplxEvnt_25_set.insert("13485482.950000");
      CmplxEvnt_25.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_25_set.insert("5");
      CmplxEvnt_25.add_attribute("PxBndryPrcsn", "1717526.980000"); // 2
      CmplxEvnt_25_set.insert("1717526.980000");
      CmplxEvnt_25.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_25_set.insert("1");
      CmplxEvnt_25.add_attribute("Cond", "2"); // 2
      CmplxEvnt_25_set.insert("2");
      all_values.push_back(CmplxEvnt_25_set);
      all_compo_names.insert("CmplxEvnt_25_set");

      {
        xml_element EvntDts_25{"EvntDts"};
        multiset<string> EvntDts_25_set;
        EvntDts_25.add_attribute("StartDt", "ComplexEventStartDate_t_2125880537"); // 3
        EvntDts_25_set.insert("ComplexEventStartDate_t_2125880537");
        EvntDts_25.add_attribute("EndDt", "ComplexEventEndDate_t_2018629980"); // 3
        EvntDts_25_set.insert("ComplexEventEndDate_t_2018629980");
        all_values.push_back(EvntDts_25_set);
        all_compo_names.insert("EvntDts_25_set");

        {
          xml_element EvntTms_25{"EvntTms"};
          multiset<string> EvntTms_25_set;
          EvntTms_25.add_attribute("StartTm", "686671208"); // 4
          EvntTms_25_set.insert("686671208");
          EvntTms_25.add_attribute("EndTm", "160557520"); // 4
          EvntTms_25_set.insert("160557520");
          all_values.push_back(EvntTms_25_set);
          all_compo_names.insert("EvntTms_25_set");

          EvntDts_25.add_element(EvntTms_25);
        }
        CmplxEvnt_25.add_element(EvntDts_25);
      }
      Instrmt_25.add_element(CmplxEvnt_25);
    }
    elt.add_element(Instrmt_25);
  } // end Instrmt
  { // Pty
    xml_element Pty_152{"Pty"};
    multiset<string> Pty_152_set;
    Pty_152.add_attribute("ID", "PartyID_t_1260775148"); // 1
    Pty_152_set.insert("PartyID_t_1260775148");
    Pty_152.add_attribute("Src", "7"); // 1
    Pty_152_set.insert("7");
    Pty_152.add_attribute("R", "12"); // 1
    Pty_152_set.insert("12");
    all_values.push_back(Pty_152_set);
    all_compo_names.insert("Pty_152_set");

    {
      xml_element Sub_152{"Sub"};
      multiset<string> Sub_152_set;
      Sub_152.add_attribute("ID", "PartySubID_t_623276087"); // 2
      Sub_152_set.insert("PartySubID_t_623276087");
      Sub_152.add_attribute("Typ", "25"); // 2
      Sub_152_set.insert("25");
      all_values.push_back(Sub_152_set);
      all_compo_names.insert("Sub_152_set");

      Pty_152.add_element(Sub_152);
    }
    elt.add_element(Pty_152);
  } // end Pty
  { // FinDetls
    xml_element FinDetls_11{"FinDetls"};
    multiset<string> FinDetls_11_set;
    FinDetls_11.add_attribute("AgmtDesc", "AgreementDesc_t_817603360"); // 1
    FinDetls_11_set.insert("AgreementDesc_t_817603360");
    FinDetls_11.add_attribute("AgmtID", "AgreementID_t_218567690"); // 1
    FinDetls_11_set.insert("AgreementID_t_218567690");
    FinDetls_11.add_attribute("AgmtDt", "AgreementDate_t_190076686"); // 1
    FinDetls_11_set.insert("AgreementDate_t_190076686");
    FinDetls_11.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_11_set.insert("JPY");
    FinDetls_11.add_attribute("TrmTyp", "2"); // 1
    FinDetls_11_set.insert("2");
    FinDetls_11.add_attribute("StartDt", "StartDate_t_1956477971"); // 1
    FinDetls_11_set.insert("StartDate_t_1956477971");
    FinDetls_11.add_attribute("EndDt", "EndDate_t_1390771581"); // 1
    FinDetls_11_set.insert("EndDate_t_1390771581");
    FinDetls_11.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_11_set.insert("0");
    FinDetls_11.add_attribute("MgnRatio", "16248973.940000"); // 1
    FinDetls_11_set.insert("16248973.940000");
    all_values.push_back(FinDetls_11_set);
    all_compo_names.insert("FinDetls_11_set");

    elt.add_element(FinDetls_11);
  } // end FinDetls
  { // Undly
    xml_element Undly_35{"Undly"};
    multiset<string> Undly_35_set;
    Undly_35.add_attribute("Sym", "UnderlyingSymbol_t_732327729"); // 1
    Undly_35_set.insert("UnderlyingSymbol_t_732327729");
    Undly_35.add_attribute("Sfx", "WI"); // 1
    Undly_35_set.insert("WI");
    Undly_35.add_attribute("ID", "UnderlyingSecurityID_t_1918061270"); // 1
    Undly_35_set.insert("UnderlyingSecurityID_t_1918061270");
    Undly_35.add_attribute("Src", "L"); // 1
    Undly_35_set.insert("L");
    Undly_35.add_attribute("Prod", "12"); // 1
    Undly_35_set.insert("12");
    Undly_35.add_attribute("CFI", "UnderlyingCFICode_t_1119125917"); // 1
    Undly_35_set.insert("UnderlyingCFICode_t_1119125917");
    Undly_35.add_attribute("SecTyp", "USTB"); // 1
    Undly_35_set.insert("USTB");
    Undly_35.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_885056422"); // 1
    Undly_35_set.insert("UnderlyingSecuritySubType_t_885056422");
    Undly_35.add_attribute("MMY", "2108242489"); // 1
    Undly_35_set.insert("2108242489");
    Undly_35.add_attribute("Mat", "UnderlyingMaturityDate_t_1370762809"); // 1
    Undly_35_set.insert("UnderlyingMaturityDate_t_1370762809");
    Undly_35.add_attribute("MatTm", "863453311"); // 1
    Undly_35_set.insert("863453311");
    Undly_35.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1979388821"); // 1
    Undly_35_set.insert("UnderlyingCouponPaymentDate_t_1979388821");
    Undly_35.add_attribute("RestrctTyp", "MR"); // 1
    Undly_35_set.insert("MR");
    Undly_35.add_attribute("Snrty", "SB"); // 1
    Undly_35_set.insert("SB");
    Undly_35.add_attribute("NotlPctOut", "5267675.370000"); // 1
    Undly_35_set.insert("5267675.370000");
    Undly_35.add_attribute("OrigNotlPctOut", "11707255.180000"); // 1
    Undly_35_set.insert("11707255.180000");
    Undly_35.add_attribute("AttchPnt", "9545021.440000"); // 1
    Undly_35_set.insert("9545021.440000");
    Undly_35.add_attribute("DetchPnt", "14397471.600000"); // 1
    Undly_35_set.insert("14397471.600000");
    Undly_35.add_attribute("Issued", "UnderlyingIssueDate_t_1794001605"); // 1
    Undly_35_set.insert("UnderlyingIssueDate_t_1794001605");
    Undly_35.add_attribute("RepoCollSecTyp", "482877379"); // 1
    Undly_35_set.insert("482877379");
    Undly_35.add_attribute("RepoTrm", "109866872"); // 1
    Undly_35_set.insert("109866872");
    Undly_35.add_attribute("RepoRt", "20125692.950000"); // 1
    Undly_35_set.insert("20125692.950000");
    Undly_35.add_attribute("Fctr", "6729540.650000"); // 1
    Undly_35_set.insert("6729540.650000");
    Undly_35.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1317083687"); // 1
    Undly_35_set.insert("UnderlyingCreditRating_t_1317083687");
    Undly_35.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_351629593"); // 1
    Undly_35_set.insert("UnderlyingInstrRegistry_t_351629593");
    Undly_35.add_attribute("Ctry", "300494783"); // 1
    Undly_35_set.insert("300494783");
    Undly_35.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1126078010"); // 1
    Undly_35_set.insert("UnderlyingStateOrProvinceOfIssue_t_1126078010");
    Undly_35.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1742401175"); // 1
    Undly_35_set.insert("UnderlyingLocaleOfIssue_t_1742401175");
    Undly_35.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1546003139"); // 1
    Undly_35_set.insert("UnderlyingRedemptionDate_t_1546003139");
    Undly_35.add_attribute("StrkPx", "6034917.560000"); // 1
    Undly_35_set.insert("6034917.560000");
    Undly_35.add_attribute("StrkCcy", "USD"); // 1
    Undly_35_set.insert("USD");
    Undly_35.add_attribute("OptA", "145908415"); // 1
    Undly_35_set.insert("145908415");
    Undly_35.add_attribute("Mult", "7777139.240000"); // 1
    Undly_35_set.insert("7777139.240000");
    Undly_35.add_attribute("MultTyp", "2"); // 1
    Undly_35_set.insert("2");
    Undly_35.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_35_set.insert("4");
    Undly_35.add_attribute("UOM", "MWh"); // 1
    Undly_35_set.insert("MWh");
    Undly_35.add_attribute("UOMQty", "10845721.530000"); // 1
    Undly_35_set.insert("10845721.530000");
    Undly_35.add_attribute("PxUOM", "Bcf"); // 1
    Undly_35_set.insert("Bcf");
    Undly_35.add_attribute("PxUOMQty", "18575986.820000"); // 1
    Undly_35_set.insert("18575986.820000");
    Undly_35.add_attribute("TmUnit", "Min"); // 1
    Undly_35_set.insert("Min");
    Undly_35.add_attribute("ExerStyle", "2"); // 1
    Undly_35_set.insert("2");
    Undly_35.add_attribute("CpnRt", "16895038.550000"); // 1
    Undly_35_set.insert("16895038.550000");
    Undly_35.add_attribute("Exch", "UnderlyingSecurityExchange_t_217801684"); // 1
    Undly_35_set.insert("UnderlyingSecurityExchange_t_217801684");
    Undly_35.add_attribute("Issr", "UnderlyingIssuer_t_1484249057"); // 1
    Undly_35_set.insert("UnderlyingIssuer_t_1484249057");
    Undly_35.add_attribute("EncUndIssrLen", "68787744"); // 1
    Undly_35_set.insert("68787744");
    Undly_35.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1388527202"); // 1
    Undly_35_set.insert("EncodedUnderlyingIssuer_t_1388527202");
    Undly_35.add_attribute("Desc", "UnderlyingSecurityDesc_t_291267553"); // 1
    Undly_35_set.insert("UnderlyingSecurityDesc_t_291267553");
    Undly_35.add_attribute("EncUndSecDescLen", "1508534905"); // 1
    Undly_35_set.insert("1508534905");
    Undly_35.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1035045159"); // 1
    Undly_35_set.insert("EncodedUnderlyingSecurityDesc_t_1035045159");
    Undly_35.add_attribute("CPPgm", "UnderlyingCPProgram_t_774144932"); // 1
    Undly_35_set.insert("UnderlyingCPProgram_t_774144932");
    Undly_35.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1618401777"); // 1
    Undly_35_set.insert("UnderlyingCPRegType_t_1618401777");
    Undly_35.add_attribute("AllocPct", "9001308.060000"); // 1
    Undly_35_set.insert("9001308.060000");
    Undly_35.add_attribute("Ccy", "USD"); // 1
    Undly_35_set.insert("USD");
    Undly_35.add_attribute("Qty", "12517604.000000"); // 1
    Undly_35_set.insert("12517604.000000");
    Undly_35.add_attribute("SettlTyp", "2"); // 1
    Undly_35_set.insert("2");
    Undly_35.add_attribute("CashAmt", "UnderlyingCashAmount_t_1914079826"); // 1
    Undly_35_set.insert("UnderlyingCashAmount_t_1914079826");
    Undly_35.add_attribute("CashTyp", "DIFF"); // 1
    Undly_35_set.insert("DIFF");
    Undly_35.add_attribute("Px", "11461132.710000"); // 1
    Undly_35_set.insert("11461132.710000");
    Undly_35.add_attribute("DirtPx", "3700879.340000"); // 1
    Undly_35_set.insert("3700879.340000");
    Undly_35.add_attribute("EndPx", "18538142.290000"); // 1
    Undly_35_set.insert("18538142.290000");
    Undly_35.add_attribute("StartVal", "UnderlyingStartValue_t_1276960492"); // 1
    Undly_35_set.insert("UnderlyingStartValue_t_1276960492");
    Undly_35.add_attribute("CurVal", "UnderlyingCurrentValue_t_515996350"); // 1
    Undly_35_set.insert("UnderlyingCurrentValue_t_515996350");
    Undly_35.add_attribute("EndVal", "UnderlyingEndValue_t_484044506"); // 1
    Undly_35_set.insert("UnderlyingEndValue_t_484044506");
    Undly_35.add_attribute("AdjQty", "5972797.480000"); // 1
    Undly_35_set.insert("5972797.480000");
    Undly_35.add_attribute("FxRate", "13752084.890000"); // 1
    Undly_35_set.insert("13752084.890000");
    Undly_35.add_attribute("FxRateCalc", "D"); // 1
    Undly_35_set.insert("D");
    Undly_35.add_attribute("CapValu", "UnderlyingCapValue_t_1681851901"); // 1
    Undly_35_set.insert("UnderlyingCapValue_t_1681851901");
    Undly_35.add_attribute("SetMeth", "UnderlyingSettlMethod_t_971993403"); // 1
    Undly_35_set.insert("UnderlyingSettlMethod_t_971993403");
    Undly_35.add_attribute("PutCall", "2090999382"); // 1
    Undly_35_set.insert("2090999382");
    all_values.push_back(Undly_35_set);
    all_compo_names.insert("Undly_35_set");

    {
      xml_element UndAID_35{"UndAID"};
      multiset<string> UndAID_35_set;
      UndAID_35.add_attribute("AltID", "UnderlyingSecurityAltID_t_1989703216"); // 2
      UndAID_35_set.insert("UnderlyingSecurityAltID_t_1989703216");
      UndAID_35.add_attribute("AltIDSrc", "G"); // 2
      UndAID_35_set.insert("G");
      all_values.push_back(UndAID_35_set);
      all_compo_names.insert("UndAID_35_set");

      Undly_35.add_element(UndAID_35);
    }
    {
      xml_element Stip_60{"Stip"};
      multiset<string> Stip_60_set;
      Stip_60.add_attribute("Typ", "BROKERCREDIT"); // 2
      Stip_60_set.insert("BROKERCREDIT");
      Stip_60.add_attribute("Val", "UnderlyingStipValue_t_60021252"); // 2
      Stip_60_set.insert("UnderlyingStipValue_t_60021252");
      all_values.push_back(Stip_60_set);
      all_compo_names.insert("Stip_60_set");

      Undly_35.add_element(Stip_60);
    }
    {
      xml_element Pty_153{"Pty"};
      multiset<string> Pty_153_set;
      Pty_153.add_attribute("ID", "UnderlyingInstrumentPartyID_t_768997038"); // 2
      Pty_153_set.insert("UnderlyingInstrumentPartyID_t_768997038");
      Pty_153.add_attribute("Src", "H"); // 2
      Pty_153_set.insert("H");
      Pty_153.add_attribute("R", "41"); // 2
      Pty_153_set.insert("41");
      all_values.push_back(Pty_153_set);
      all_compo_names.insert("Pty_153_set");

      {
        xml_element Sub_153{"Sub"};
        multiset<string> Sub_153_set;
        Sub_153.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1060264591"); // 3
        Sub_153_set.insert("UnderlyingInstrumentPartySubID_t_1060264591");
        Sub_153.add_attribute("Typ", "12"); // 3
        Sub_153_set.insert("12");
        all_values.push_back(Sub_153_set);
        all_compo_names.insert("Sub_153_set");

        Pty_153.add_element(Sub_153);
      }
      Undly_35.add_element(Pty_153);
    }
    elt.add_element(Undly_35);
  } // end Undly
  { // Undly
    xml_element Undly_36{"Undly"};
    multiset<string> Undly_36_set;
    Undly_36.add_attribute("Sym", "UnderlyingSymbol_t_336109965"); // 1
    Undly_36_set.insert("UnderlyingSymbol_t_336109965");
    Undly_36.add_attribute("Sfx", "WI"); // 1
    Undly_36_set.insert("WI");
    Undly_36.add_attribute("ID", "UnderlyingSecurityID_t_533776720"); // 1
    Undly_36_set.insert("UnderlyingSecurityID_t_533776720");
    Undly_36.add_attribute("Src", "8"); // 1
    Undly_36_set.insert("8");
    Undly_36.add_attribute("Prod", "3"); // 1
    Undly_36_set.insert("3");
    Undly_36.add_attribute("CFI", "UnderlyingCFICode_t_1321778537"); // 1
    Undly_36_set.insert("UnderlyingCFICode_t_1321778537");
    Undly_36.add_attribute("SecTyp", "TRAN"); // 1
    Undly_36_set.insert("TRAN");
    Undly_36.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_734135005"); // 1
    Undly_36_set.insert("UnderlyingSecuritySubType_t_734135005");
    Undly_36.add_attribute("MMY", "1088374715"); // 1
    Undly_36_set.insert("1088374715");
    Undly_36.add_attribute("Mat", "UnderlyingMaturityDate_t_1187195450"); // 1
    Undly_36_set.insert("UnderlyingMaturityDate_t_1187195450");
    Undly_36.add_attribute("MatTm", "1880248276"); // 1
    Undly_36_set.insert("1880248276");
    Undly_36.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1458462650"); // 1
    Undly_36_set.insert("UnderlyingCouponPaymentDate_t_1458462650");
    Undly_36.add_attribute("RestrctTyp", "FR"); // 1
    Undly_36_set.insert("FR");
    Undly_36.add_attribute("Snrty", "SD"); // 1
    Undly_36_set.insert("SD");
    Undly_36.add_attribute("NotlPctOut", "19744590.000000"); // 1
    Undly_36_set.insert("19744590.000000");
    Undly_36.add_attribute("OrigNotlPctOut", "13775705.380000"); // 1
    Undly_36_set.insert("13775705.380000");
    Undly_36.add_attribute("AttchPnt", "16070048.680000"); // 1
    Undly_36_set.insert("16070048.680000");
    Undly_36.add_attribute("DetchPnt", "12021838.410000"); // 1
    Undly_36_set.insert("12021838.410000");
    Undly_36.add_attribute("Issued", "UnderlyingIssueDate_t_1610971237"); // 1
    Undly_36_set.insert("UnderlyingIssueDate_t_1610971237");
    Undly_36.add_attribute("RepoCollSecTyp", "1141373122"); // 1
    Undly_36_set.insert("1141373122");
    Undly_36.add_attribute("RepoTrm", "26693597"); // 1
    Undly_36_set.insert("26693597");
    Undly_36.add_attribute("RepoRt", "15544869.710000"); // 1
    Undly_36_set.insert("15544869.710000");
    Undly_36.add_attribute("Fctr", "9835926.900000"); // 1
    Undly_36_set.insert("9835926.900000");
    Undly_36.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1458925226"); // 1
    Undly_36_set.insert("UnderlyingCreditRating_t_1458925226");
    Undly_36.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1040022913"); // 1
    Undly_36_set.insert("UnderlyingInstrRegistry_t_1040022913");
    Undly_36.add_attribute("Ctry", "1043613942"); // 1
    Undly_36_set.insert("1043613942");
    Undly_36.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_80438616"); // 1
    Undly_36_set.insert("UnderlyingStateOrProvinceOfIssue_t_80438616");
    Undly_36.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_594346599"); // 1
    Undly_36_set.insert("UnderlyingLocaleOfIssue_t_594346599");
    Undly_36.add_attribute("Redeem", "UnderlyingRedemptionDate_t_344678748"); // 1
    Undly_36_set.insert("UnderlyingRedemptionDate_t_344678748");
    Undly_36.add_attribute("StrkPx", "11407032.070000"); // 1
    Undly_36_set.insert("11407032.070000");
    Undly_36.add_attribute("StrkCcy", "CHF"); // 1
    Undly_36_set.insert("CHF");
    Undly_36.add_attribute("OptA", "827629082"); // 1
    Undly_36_set.insert("827629082");
    Undly_36.add_attribute("Mult", "434982.620000"); // 1
    Undly_36_set.insert("434982.620000");
    Undly_36.add_attribute("MultTyp", "0"); // 1
    Undly_36_set.insert("0");
    Undly_36.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_36_set.insert("4");
    Undly_36.add_attribute("UOM", "Gal"); // 1
    Undly_36_set.insert("Gal");
    Undly_36.add_attribute("UOMQty", "1100633.600000"); // 1
    Undly_36_set.insert("1100633.600000");
    Undly_36.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_36_set.insert("oz_tr");
    Undly_36.add_attribute("PxUOMQty", "3061678.670000"); // 1
    Undly_36_set.insert("3061678.670000");
    Undly_36.add_attribute("TmUnit", "Min"); // 1
    Undly_36_set.insert("Min");
    Undly_36.add_attribute("ExerStyle", "0"); // 1
    Undly_36_set.insert("0");
    Undly_36.add_attribute("CpnRt", "17646305.170000"); // 1
    Undly_36_set.insert("17646305.170000");
    Undly_36.add_attribute("Exch", "UnderlyingSecurityExchange_t_43301194"); // 1
    Undly_36_set.insert("UnderlyingSecurityExchange_t_43301194");
    Undly_36.add_attribute("Issr", "UnderlyingIssuer_t_1290795060"); // 1
    Undly_36_set.insert("UnderlyingIssuer_t_1290795060");
    Undly_36.add_attribute("EncUndIssrLen", "1591605869"); // 1
    Undly_36_set.insert("1591605869");
    Undly_36.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1420871732"); // 1
    Undly_36_set.insert("EncodedUnderlyingIssuer_t_1420871732");
    Undly_36.add_attribute("Desc", "UnderlyingSecurityDesc_t_750316281"); // 1
    Undly_36_set.insert("UnderlyingSecurityDesc_t_750316281");
    Undly_36.add_attribute("EncUndSecDescLen", "646306062"); // 1
    Undly_36_set.insert("646306062");
    Undly_36.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_884359322"); // 1
    Undly_36_set.insert("EncodedUnderlyingSecurityDesc_t_884359322");
    Undly_36.add_attribute("CPPgm", "UnderlyingCPProgram_t_1891689403"); // 1
    Undly_36_set.insert("UnderlyingCPProgram_t_1891689403");
    Undly_36.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_672999659"); // 1
    Undly_36_set.insert("UnderlyingCPRegType_t_672999659");
    Undly_36.add_attribute("AllocPct", "2913626.450000"); // 1
    Undly_36_set.insert("2913626.450000");
    Undly_36.add_attribute("Ccy", "EUR"); // 1
    Undly_36_set.insert("EUR");
    Undly_36.add_attribute("Qty", "13313855.580000"); // 1
    Undly_36_set.insert("13313855.580000");
    Undly_36.add_attribute("SettlTyp", "5"); // 1
    Undly_36_set.insert("5");
    Undly_36.add_attribute("CashAmt", "UnderlyingCashAmount_t_64879853"); // 1
    Undly_36_set.insert("UnderlyingCashAmount_t_64879853");
    Undly_36.add_attribute("CashTyp", "DIFF"); // 1
    Undly_36_set.insert("DIFF");
    Undly_36.add_attribute("Px", "21160911.350000"); // 1
    Undly_36_set.insert("21160911.350000");
    Undly_36.add_attribute("DirtPx", "12055830.600000"); // 1
    Undly_36_set.insert("12055830.600000");
    Undly_36.add_attribute("EndPx", "14354536.990000"); // 1
    Undly_36_set.insert("14354536.990000");
    Undly_36.add_attribute("StartVal", "UnderlyingStartValue_t_649396200"); // 1
    Undly_36_set.insert("UnderlyingStartValue_t_649396200");
    Undly_36.add_attribute("CurVal", "UnderlyingCurrentValue_t_2033212142"); // 1
    Undly_36_set.insert("UnderlyingCurrentValue_t_2033212142");
    Undly_36.add_attribute("EndVal", "UnderlyingEndValue_t_1478951962"); // 1
    Undly_36_set.insert("UnderlyingEndValue_t_1478951962");
    Undly_36.add_attribute("AdjQty", "4189420.360000"); // 1
    Undly_36_set.insert("4189420.360000");
    Undly_36.add_attribute("FxRate", "18473824.490000"); // 1
    Undly_36_set.insert("18473824.490000");
    Undly_36.add_attribute("FxRateCalc", "D"); // 1
    Undly_36_set.insert("D");
    Undly_36.add_attribute("CapValu", "UnderlyingCapValue_t_529005396"); // 1
    Undly_36_set.insert("UnderlyingCapValue_t_529005396");
    Undly_36.add_attribute("SetMeth", "UnderlyingSettlMethod_t_248204112"); // 1
    Undly_36_set.insert("UnderlyingSettlMethod_t_248204112");
    Undly_36.add_attribute("PutCall", "1002912980"); // 1
    Undly_36_set.insert("1002912980");
    all_values.push_back(Undly_36_set);
    all_compo_names.insert("Undly_36_set");

    {
      xml_element UndAID_36{"UndAID"};
      multiset<string> UndAID_36_set;
      UndAID_36.add_attribute("AltID", "UnderlyingSecurityAltID_t_1826264207"); // 2
      UndAID_36_set.insert("UnderlyingSecurityAltID_t_1826264207");
      UndAID_36.add_attribute("AltIDSrc", "B"); // 2
      UndAID_36_set.insert("B");
      all_values.push_back(UndAID_36_set);
      all_compo_names.insert("UndAID_36_set");

      Undly_36.add_element(UndAID_36);
    }
    {
      xml_element Stip_61{"Stip"};
      multiset<string> Stip_61_set;
      Stip_61.add_attribute("Typ", "CURRENCY"); // 2
      Stip_61_set.insert("CURRENCY");
      Stip_61.add_attribute("Val", "UnderlyingStipValue_t_1869565401"); // 2
      Stip_61_set.insert("UnderlyingStipValue_t_1869565401");
      all_values.push_back(Stip_61_set);
      all_compo_names.insert("Stip_61_set");

      Undly_36.add_element(Stip_61);
    }
    {
      xml_element Pty_154{"Pty"};
      multiset<string> Pty_154_set;
      Pty_154.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1820069113"); // 2
      Pty_154_set.insert("UnderlyingInstrumentPartyID_t_1820069113");
      Pty_154.add_attribute("Src", "B"); // 2
      Pty_154_set.insert("B");
      Pty_154.add_attribute("R", "19"); // 2
      Pty_154_set.insert("19");
      all_values.push_back(Pty_154_set);
      all_compo_names.insert("Pty_154_set");

      {
        xml_element Sub_154{"Sub"};
        multiset<string> Sub_154_set;
        Sub_154.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_422901746"); // 3
        Sub_154_set.insert("UnderlyingInstrumentPartySubID_t_422901746");
        Sub_154.add_attribute("Typ", "22"); // 3
        Sub_154_set.insert("22");
        all_values.push_back(Sub_154_set);
        all_compo_names.insert("Sub_154_set");

        Pty_154.add_element(Sub_154);
      }
      Undly_36.add_element(Pty_154);
    }
    elt.add_element(Undly_36);
  } // end Undly
  { // Undly
    xml_element Undly_37{"Undly"};
    multiset<string> Undly_37_set;
    Undly_37.add_attribute("Sym", "UnderlyingSymbol_t_2027312808"); // 1
    Undly_37_set.insert("UnderlyingSymbol_t_2027312808");
    Undly_37.add_attribute("Sfx", "WI"); // 1
    Undly_37_set.insert("WI");
    Undly_37.add_attribute("ID", "UnderlyingSecurityID_t_1383487792"); // 1
    Undly_37_set.insert("UnderlyingSecurityID_t_1383487792");
    Undly_37.add_attribute("Src", "G"); // 1
    Undly_37_set.insert("G");
    Undly_37.add_attribute("Prod", "9"); // 1
    Undly_37_set.insert("9");
    Undly_37.add_attribute("CFI", "UnderlyingCFICode_t_1367929030"); // 1
    Undly_37_set.insert("UnderlyingCFICode_t_1367929030");
    Undly_37.add_attribute("SecTyp", "RAN"); // 1
    Undly_37_set.insert("RAN");
    Undly_37.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_518834685"); // 1
    Undly_37_set.insert("UnderlyingSecuritySubType_t_518834685");
    Undly_37.add_attribute("MMY", "1432808883"); // 1
    Undly_37_set.insert("1432808883");
    Undly_37.add_attribute("Mat", "UnderlyingMaturityDate_t_1280825873"); // 1
    Undly_37_set.insert("UnderlyingMaturityDate_t_1280825873");
    Undly_37.add_attribute("MatTm", "487442172"); // 1
    Undly_37_set.insert("487442172");
    Undly_37.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_490908296"); // 1
    Undly_37_set.insert("UnderlyingCouponPaymentDate_t_490908296");
    Undly_37.add_attribute("RestrctTyp", "MR"); // 1
    Undly_37_set.insert("MR");
    Undly_37.add_attribute("Snrty", "SD"); // 1
    Undly_37_set.insert("SD");
    Undly_37.add_attribute("NotlPctOut", "3766367.900000"); // 1
    Undly_37_set.insert("3766367.900000");
    Undly_37.add_attribute("OrigNotlPctOut", "20477478.870000"); // 1
    Undly_37_set.insert("20477478.870000");
    Undly_37.add_attribute("AttchPnt", "15557804.080000"); // 1
    Undly_37_set.insert("15557804.080000");
    Undly_37.add_attribute("DetchPnt", "765355.910000"); // 1
    Undly_37_set.insert("765355.910000");
    Undly_37.add_attribute("Issued", "UnderlyingIssueDate_t_597009352"); // 1
    Undly_37_set.insert("UnderlyingIssueDate_t_597009352");
    Undly_37.add_attribute("RepoCollSecTyp", "2084785805"); // 1
    Undly_37_set.insert("2084785805");
    Undly_37.add_attribute("RepoTrm", "324739704"); // 1
    Undly_37_set.insert("324739704");
    Undly_37.add_attribute("RepoRt", "15999223.330000"); // 1
    Undly_37_set.insert("15999223.330000");
    Undly_37.add_attribute("Fctr", "17635663.640000"); // 1
    Undly_37_set.insert("17635663.640000");
    Undly_37.add_attribute("CrdRtg", "UnderlyingCreditRating_t_854013756"); // 1
    Undly_37_set.insert("UnderlyingCreditRating_t_854013756");
    Undly_37.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_72498534"); // 1
    Undly_37_set.insert("UnderlyingInstrRegistry_t_72498534");
    Undly_37.add_attribute("Ctry", "1485648117"); // 1
    Undly_37_set.insert("1485648117");
    Undly_37.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_526599221"); // 1
    Undly_37_set.insert("UnderlyingStateOrProvinceOfIssue_t_526599221");
    Undly_37.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_136680605"); // 1
    Undly_37_set.insert("UnderlyingLocaleOfIssue_t_136680605");
    Undly_37.add_attribute("Redeem", "UnderlyingRedemptionDate_t_481117955"); // 1
    Undly_37_set.insert("UnderlyingRedemptionDate_t_481117955");
    Undly_37.add_attribute("StrkPx", "9495009.670000"); // 1
    Undly_37_set.insert("9495009.670000");
    Undly_37.add_attribute("StrkCcy", "CHF"); // 1
    Undly_37_set.insert("CHF");
    Undly_37.add_attribute("OptA", "1116608468"); // 1
    Undly_37_set.insert("1116608468");
    Undly_37.add_attribute("Mult", "831728.820000"); // 1
    Undly_37_set.insert("831728.820000");
    Undly_37.add_attribute("MultTyp", "1"); // 1
    Undly_37_set.insert("1");
    Undly_37.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_37_set.insert("4");
    Undly_37.add_attribute("UOM", "MWh"); // 1
    Undly_37_set.insert("MWh");
    Undly_37.add_attribute("UOMQty", "20347162.850000"); // 1
    Undly_37_set.insert("20347162.850000");
    Undly_37.add_attribute("PxUOM", "lbs"); // 1
    Undly_37_set.insert("lbs");
    Undly_37.add_attribute("PxUOMQty", "7364271.480000"); // 1
    Undly_37_set.insert("7364271.480000");
    Undly_37.add_attribute("TmUnit", "D"); // 1
    Undly_37_set.insert("D");
    Undly_37.add_attribute("ExerStyle", "0"); // 1
    Undly_37_set.insert("0");
    Undly_37.add_attribute("CpnRt", "12273354.440000"); // 1
    Undly_37_set.insert("12273354.440000");
    Undly_37.add_attribute("Exch", "UnderlyingSecurityExchange_t_1736854435"); // 1
    Undly_37_set.insert("UnderlyingSecurityExchange_t_1736854435");
    Undly_37.add_attribute("Issr", "UnderlyingIssuer_t_2007145995"); // 1
    Undly_37_set.insert("UnderlyingIssuer_t_2007145995");
    Undly_37.add_attribute("EncUndIssrLen", "1603972234"); // 1
    Undly_37_set.insert("1603972234");
    Undly_37.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1637118674"); // 1
    Undly_37_set.insert("EncodedUnderlyingIssuer_t_1637118674");
    Undly_37.add_attribute("Desc", "UnderlyingSecurityDesc_t_1415442756"); // 1
    Undly_37_set.insert("UnderlyingSecurityDesc_t_1415442756");
    Undly_37.add_attribute("EncUndSecDescLen", "1680507826"); // 1
    Undly_37_set.insert("1680507826");
    Undly_37.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_86644379"); // 1
    Undly_37_set.insert("EncodedUnderlyingSecurityDesc_t_86644379");
    Undly_37.add_attribute("CPPgm", "UnderlyingCPProgram_t_1352744913"); // 1
    Undly_37_set.insert("UnderlyingCPProgram_t_1352744913");
    Undly_37.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2005247530"); // 1
    Undly_37_set.insert("UnderlyingCPRegType_t_2005247530");
    Undly_37.add_attribute("AllocPct", "16865667.120000"); // 1
    Undly_37_set.insert("16865667.120000");
    Undly_37.add_attribute("Ccy", "GBP"); // 1
    Undly_37_set.insert("GBP");
    Undly_37.add_attribute("Qty", "17590652.460000"); // 1
    Undly_37_set.insert("17590652.460000");
    Undly_37.add_attribute("SettlTyp", "4"); // 1
    Undly_37_set.insert("4");
    Undly_37.add_attribute("CashAmt", "UnderlyingCashAmount_t_1238376860"); // 1
    Undly_37_set.insert("UnderlyingCashAmount_t_1238376860");
    Undly_37.add_attribute("CashTyp", "DIFF"); // 1
    Undly_37_set.insert("DIFF");
    Undly_37.add_attribute("Px", "7881100.540000"); // 1
    Undly_37_set.insert("7881100.540000");
    Undly_37.add_attribute("DirtPx", "403941.790000"); // 1
    Undly_37_set.insert("403941.790000");
    Undly_37.add_attribute("EndPx", "5954309.410000"); // 1
    Undly_37_set.insert("5954309.410000");
    Undly_37.add_attribute("StartVal", "UnderlyingStartValue_t_1149057169"); // 1
    Undly_37_set.insert("UnderlyingStartValue_t_1149057169");
    Undly_37.add_attribute("CurVal", "UnderlyingCurrentValue_t_1157002648"); // 1
    Undly_37_set.insert("UnderlyingCurrentValue_t_1157002648");
    Undly_37.add_attribute("EndVal", "UnderlyingEndValue_t_678603824"); // 1
    Undly_37_set.insert("UnderlyingEndValue_t_678603824");
    Undly_37.add_attribute("AdjQty", "16811960.900000"); // 1
    Undly_37_set.insert("16811960.900000");
    Undly_37.add_attribute("FxRate", "10210334.140000"); // 1
    Undly_37_set.insert("10210334.140000");
    Undly_37.add_attribute("FxRateCalc", "M"); // 1
    Undly_37_set.insert("M");
    Undly_37.add_attribute("CapValu", "UnderlyingCapValue_t_1568428727"); // 1
    Undly_37_set.insert("UnderlyingCapValue_t_1568428727");
    Undly_37.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1403898866"); // 1
    Undly_37_set.insert("UnderlyingSettlMethod_t_1403898866");
    Undly_37.add_attribute("PutCall", "718649236"); // 1
    Undly_37_set.insert("718649236");
    all_values.push_back(Undly_37_set);
    all_compo_names.insert("Undly_37_set");

    {
      xml_element UndAID_37{"UndAID"};
      multiset<string> UndAID_37_set;
      UndAID_37.add_attribute("AltID", "UnderlyingSecurityAltID_t_589003590"); // 2
      UndAID_37_set.insert("UnderlyingSecurityAltID_t_589003590");
      UndAID_37.add_attribute("AltIDSrc", "4"); // 2
      UndAID_37_set.insert("4");
      all_values.push_back(UndAID_37_set);
      all_compo_names.insert("UndAID_37_set");

      Undly_37.add_element(UndAID_37);
    }
    {
      xml_element Stip_62{"Stip"};
      multiset<string> Stip_62_set;
      Stip_62.add_attribute("Typ", "PSA"); // 2
      Stip_62_set.insert("PSA");
      Stip_62.add_attribute("Val", "UnderlyingStipValue_t_178374377"); // 2
      Stip_62_set.insert("UnderlyingStipValue_t_178374377");
      all_values.push_back(Stip_62_set);
      all_compo_names.insert("Stip_62_set");

      Undly_37.add_element(Stip_62);
    }
    {
      xml_element Pty_155{"Pty"};
      multiset<string> Pty_155_set;
      Pty_155.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2133868837"); // 2
      Pty_155_set.insert("UnderlyingInstrumentPartyID_t_2133868837");
      Pty_155.add_attribute("Src", "A"); // 2
      Pty_155_set.insert("A");
      Pty_155.add_attribute("R", "47"); // 2
      Pty_155_set.insert("47");
      all_values.push_back(Pty_155_set);
      all_compo_names.insert("Pty_155_set");

      {
        xml_element Sub_155{"Sub"};
        multiset<string> Sub_155_set;
        Sub_155.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1401827945"); // 3
        Sub_155_set.insert("UnderlyingInstrumentPartySubID_t_1401827945");
        Sub_155.add_attribute("Typ", "22"); // 3
        Sub_155_set.insert("22");
        all_values.push_back(Sub_155_set);
        all_compo_names.insert("Sub_155_set");

        Pty_155.add_element(Sub_155);
      }
      Undly_37.add_element(Pty_155);
    }
    elt.add_element(Undly_37);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_9{"OrdQty"};
    multiset<string> OrdQty_9_set;
    OrdQty_9.add_attribute("Qty", "19021374.310000"); // 1
    OrdQty_9_set.insert("19021374.310000");
    OrdQty_9.add_attribute("Cash", "6070892.100000"); // 1
    OrdQty_9_set.insert("6070892.100000");
    OrdQty_9.add_attribute("Pct", "7932613.270000"); // 1
    OrdQty_9_set.insert("7932613.270000");
    OrdQty_9.add_attribute("RndDir", "2"); // 1
    OrdQty_9_set.insert("2");
    OrdQty_9.add_attribute("RndMod", "15759168.390000"); // 1
    OrdQty_9_set.insert("15759168.390000");
    all_values.push_back(OrdQty_9_set);
    all_compo_names.insert("OrdQty_9_set");

    elt.add_element(OrdQty_9);
  } // end OrdQty
  { // Stip
    xml_element Stip_63{"Stip"};
    multiset<string> Stip_63_set;
    Stip_63.add_attribute("Typ", "HEP"); // 1
    Stip_63_set.insert("HEP");
    Stip_63.add_attribute("Val", "StipulationValue_t_1882908937"); // 1
    Stip_63_set.insert("StipulationValue_t_1882908937");
    all_values.push_back(Stip_63_set);
    all_compo_names.insert("Stip_63_set");

    elt.add_element(Stip_63);
  } // end Stip
  { // IOI
    xml_element IOI_0{"IOI"};
    multiset<string> IOI_0_set;
    IOI_0.add_attribute("IOIQty", "M"); // 1
    IOI_0_set.insert("M");
    all_values.push_back(IOI_0_set);
    all_compo_names.insert("IOI_0_set");

    {
      xml_element Leg_38{"Leg"};
      multiset<string> Leg_38_set;
      Leg_38.add_attribute("Sym", "LegSymbol_t_523535343"); // 2
      Leg_38_set.insert("LegSymbol_t_523535343");
      Leg_38.add_attribute("Sfx", "WI"); // 2
      Leg_38_set.insert("WI");
      Leg_38.add_attribute("ID", "LegSecurityID_t_1396495238"); // 2
      Leg_38_set.insert("LegSecurityID_t_1396495238");
      Leg_38.add_attribute("Src", "A"); // 2
      Leg_38_set.insert("A");
      Leg_38.add_attribute("Prod", "1"); // 2
      Leg_38_set.insert("1");
      Leg_38.add_attribute("CFI", "LegCFICode_t_2075099062"); // 2
      Leg_38_set.insert("LegCFICode_t_2075099062");
      Leg_38.add_attribute("SecTyp", "MIO"); // 2
      Leg_38_set.insert("MIO");
      Leg_38.add_attribute("SecSubTyp", "LegSecuritySubType_t_666878771"); // 2
      Leg_38_set.insert("LegSecuritySubType_t_666878771");
      Leg_38.add_attribute("MMY", "2057321151"); // 2
      Leg_38_set.insert("2057321151");
      Leg_38.add_attribute("Mat", "LegMaturityDate_t_627250035"); // 2
      Leg_38_set.insert("LegMaturityDate_t_627250035");
      Leg_38.add_attribute("MatTm", "2070777637"); // 2
      Leg_38_set.insert("2070777637");
      Leg_38.add_attribute("CpnPmt", "LegCouponPaymentDate_t_628486739"); // 2
      Leg_38_set.insert("LegCouponPaymentDate_t_628486739");
      Leg_38.add_attribute("Issued", "LegIssueDate_t_1216253625"); // 2
      Leg_38_set.insert("LegIssueDate_t_1216253625");
      Leg_38.add_attribute("RepoCollSecTyp", "50016831"); // 2
      Leg_38_set.insert("50016831");
      Leg_38.add_attribute("RepoTrm", "426987772"); // 2
      Leg_38_set.insert("426987772");
      Leg_38.add_attribute("RepoRt", "13946280.020000"); // 2
      Leg_38_set.insert("13946280.020000");
      Leg_38.add_attribute("Fctr", "364020.200000"); // 2
      Leg_38_set.insert("364020.200000");
      Leg_38.add_attribute("CrdRtg", "LegCreditRating_t_1829461039"); // 2
      Leg_38_set.insert("LegCreditRating_t_1829461039");
      Leg_38.add_attribute("Rgstry", "LegInstrRegistry_t_1062637406"); // 2
      Leg_38_set.insert("LegInstrRegistry_t_1062637406");
      Leg_38.add_attribute("Ctry", "1438229965"); // 2
      Leg_38_set.insert("1438229965");
      Leg_38.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_617474836"); // 2
      Leg_38_set.insert("LegStateOrProvinceOfIssue_t_617474836");
      Leg_38.add_attribute("Lcl", "LegLocaleOfIssue_t_817291189"); // 2
      Leg_38_set.insert("LegLocaleOfIssue_t_817291189");
      Leg_38.add_attribute("Redeem", "LegRedemptionDate_t_2045319175"); // 2
      Leg_38_set.insert("LegRedemptionDate_t_2045319175");
      Leg_38.add_attribute("Strk", "14107361.630000"); // 2
      Leg_38_set.insert("14107361.630000");
      Leg_38.add_attribute("StrkCcy", "GBP"); // 2
      Leg_38_set.insert("GBP");
      Leg_38.add_attribute("OptA", "768291480"); // 2
      Leg_38_set.insert("768291480");
      Leg_38.add_attribute("Cmult", "11638301.300000"); // 2
      Leg_38_set.insert("11638301.300000");
      Leg_38.add_attribute("MultTyp", "1"); // 2
      Leg_38_set.insert("1");
      Leg_38.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_38_set.insert("3");
      Leg_38.add_attribute("UOM", "Bbl"); // 2
      Leg_38_set.insert("Bbl");
      Leg_38.add_attribute("UOMQty", "17327129.990000"); // 2
      Leg_38_set.insert("17327129.990000");
      Leg_38.add_attribute("PxUOM", "USD"); // 2
      Leg_38_set.insert("USD");
      Leg_38.add_attribute("PxUOMQty", "12139060.170000"); // 2
      Leg_38_set.insert("12139060.170000");
      Leg_38.add_attribute("TmUnit", "Mo"); // 2
      Leg_38_set.insert("Mo");
      Leg_38.add_attribute("ExerStyle", "1"); // 2
      Leg_38_set.insert("1");
      Leg_38.add_attribute("CpnRt", "11415214.320000"); // 2
      Leg_38_set.insert("11415214.320000");
      Leg_38.add_attribute("Exch", "LegSecurityExchange_t_316643171"); // 2
      Leg_38_set.insert("LegSecurityExchange_t_316643171");
      Leg_38.add_attribute("Issr", "LegIssuer_t_165790495"); // 2
      Leg_38_set.insert("LegIssuer_t_165790495");
      Leg_38.add_attribute("EncLegIssrLen", "1051358935"); // 2
      Leg_38_set.insert("1051358935");
      Leg_38.add_attribute("EncLegIssr", "EncodedLegIssuer_t_943893206"); // 2
      Leg_38_set.insert("EncodedLegIssuer_t_943893206");
      Leg_38.add_attribute("Desc", "LegSecurityDesc_t_89084485"); // 2
      Leg_38_set.insert("LegSecurityDesc_t_89084485");
      Leg_38.add_attribute("EncLegSecDescLen", "1679845674"); // 2
      Leg_38_set.insert("1679845674");
      Leg_38.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_12663183"); // 2
      Leg_38_set.insert("EncodedLegSecurityDesc_t_12663183");
      Leg_38.add_attribute("RatioQty", "1391013.160000"); // 2
      Leg_38_set.insert("1391013.160000");
      Leg_38.add_attribute("Side", "7"); // 2
      Leg_38_set.insert("7");
      Leg_38.add_attribute("Ccy", "USD"); // 2
      Leg_38_set.insert("USD");
      Leg_38.add_attribute("Pool", "LegPool_t_1788810837"); // 2
      Leg_38_set.insert("LegPool_t_1788810837");
      Leg_38.add_attribute("Dated", "LegDatedDate_t_322444944"); // 2
      Leg_38_set.insert("LegDatedDate_t_322444944");
      Leg_38.add_attribute("CSetMo", "1613733301"); // 2
      Leg_38_set.insert("1613733301");
      Leg_38.add_attribute("IntAcrl", "LegInterestAccrualDate_t_258802025"); // 2
      Leg_38_set.insert("LegInterestAccrualDate_t_258802025");
      Leg_38.add_attribute("PutCall", "1139736134"); // 2
      Leg_38_set.insert("1139736134");
      Leg_38.add_attribute("LegOptionRatio", "15115688.280000"); // 2
      Leg_38_set.insert("15115688.280000");
      Leg_38.add_attribute("Px", "16695381.880000"); // 2
      Leg_38_set.insert("16695381.880000");
      all_values.push_back(Leg_38_set);
      all_compo_names.insert("Leg_38_set");

      {
        xml_element LegAID_38{"LegAID"};
        multiset<string> LegAID_38_set;
        LegAID_38.add_attribute("SecAltID", "LegSecurityAltID_t_1250764170"); // 3
        LegAID_38_set.insert("LegSecurityAltID_t_1250764170");
        LegAID_38.add_attribute("SecAltIDSrc", "J"); // 3
        LegAID_38_set.insert("J");
        all_values.push_back(LegAID_38_set);
        all_compo_names.insert("LegAID_38_set");

        Leg_38.add_element(LegAID_38);
      }
      IOI_0.add_element(Leg_38);
    }
    {
      xml_element Stip_64{"Stip"};
      multiset<string> Stip_64_set;
      Stip_64.add_attribute("StipTyp", "MAT"); // 2
      Stip_64_set.insert("MAT");
      Stip_64.add_attribute("StipVal", "LegStipulationValue_t_267110652"); // 2
      Stip_64_set.insert("LegStipulationValue_t_267110652");
      all_values.push_back(Stip_64_set);
      all_compo_names.insert("Stip_64_set");

      IOI_0.add_element(Stip_64);
    }
    elt.add_element(IOI_0);
  } // end IOI
  { // Qual
    xml_element Qual_5{"Qual"};
    multiset<string> Qual_5_set;
    Qual_5.add_attribute("Qual", "V"); // 1
    Qual_5_set.insert("V");
    all_values.push_back(Qual_5_set);
    all_compo_names.insert("Qual_5_set");

    elt.add_element(Qual_5);
  } // end Qual
  { // Qual
    xml_element Qual_6{"Qual"};
    multiset<string> Qual_6_set;
    Qual_6.add_attribute("Qual", "B"); // 1
    Qual_6_set.insert("B");
    all_values.push_back(Qual_6_set);
    all_compo_names.insert("Qual_6_set");

    elt.add_element(Qual_6);
  } // end Qual
  { // Rtg
    xml_element Rtg_2{"Rtg"};
    multiset<string> Rtg_2_set;
    Rtg_2.add_attribute("RtgTyp", "3"); // 1
    Rtg_2_set.insert("3");
    Rtg_2.add_attribute("RtgID", "RoutingID_t_1298427449"); // 1
    Rtg_2_set.insert("RoutingID_t_1298427449");
    all_values.push_back(Rtg_2_set);
    all_compo_names.insert("Rtg_2_set");

    elt.add_element(Rtg_2);
  } // end Rtg
  { // Rtg
    xml_element Rtg_3{"Rtg"};
    multiset<string> Rtg_3_set;
    Rtg_3.add_attribute("RtgTyp", "1"); // 1
    Rtg_3_set.insert("1");
    Rtg_3.add_attribute("RtgID", "RoutingID_t_1006547770"); // 1
    Rtg_3_set.insert("RoutingID_t_1006547770");
    all_values.push_back(Rtg_3_set);
    all_compo_names.insert("Rtg_3_set");

    elt.add_element(Rtg_3);
  } // end Rtg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_11{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_11_set;
    SprdBnchmkCurve_11.add_attribute("Spread", "2924652.330000"); // 1
    SprdBnchmkCurve_11_set.insert("2924652.330000");
    SprdBnchmkCurve_11.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_11_set.insert("CAN");
    SprdBnchmkCurve_11.add_attribute("Name", "LIBID"); // 1
    SprdBnchmkCurve_11_set.insert("LIBID");
    SprdBnchmkCurve_11.add_attribute("Point", "BenchmarkCurvePoint_t_2003119146"); // 1
    SprdBnchmkCurve_11_set.insert("BenchmarkCurvePoint_t_2003119146");
    SprdBnchmkCurve_11.add_attribute("Px", "12614227.500000"); // 1
    SprdBnchmkCurve_11_set.insert("12614227.500000");
    SprdBnchmkCurve_11.add_attribute("PxTyp", "16"); // 1
    SprdBnchmkCurve_11_set.insert("16");
    SprdBnchmkCurve_11.add_attribute("SecID", "BenchmarkSecurityID_t_2015782330"); // 1
    SprdBnchmkCurve_11_set.insert("BenchmarkSecurityID_t_2015782330");
    SprdBnchmkCurve_11.add_attribute("SecIDSrc", "J"); // 1
    SprdBnchmkCurve_11_set.insert("J");
    all_values.push_back(SprdBnchmkCurve_11_set);
    all_compo_names.insert("SprdBnchmkCurve_11_set");

    elt.add_element(SprdBnchmkCurve_11);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_6{"Yield"};
    multiset<string> Yield_6_set;
    Yield_6.add_attribute("Typ", "ANNUAL"); // 1
    Yield_6_set.insert("ANNUAL");
    Yield_6.add_attribute("Yld", "12755898.680000"); // 1
    Yield_6_set.insert("12755898.680000");
    Yield_6.add_attribute("CalcDt", "YieldCalcDate_t_1576027402"); // 1
    Yield_6_set.insert("YieldCalcDate_t_1576027402");
    Yield_6.add_attribute("RedDt", "YieldRedemptionDate_t_476863182"); // 1
    Yield_6_set.insert("YieldRedemptionDate_t_476863182");
    Yield_6.add_attribute("RedPx", "15980348.120000"); // 1
    Yield_6_set.insert("15980348.120000");
    Yield_6.add_attribute("RedPxTyp", "17"); // 1
    Yield_6_set.insert("17");
    all_values.push_back(Yield_6_set);
    all_compo_names.insert("Yield_6_set");

    elt.add_element(Yield_6);
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
