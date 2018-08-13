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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"IOI" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> IOI_message_t_0;
  elt.add_attribute("ID", "IOIID_t_381518584"); // 0
  IOI_message_t_0.insert("IOIID_t_381518584");
  elt.add_attribute("TransTyp", "R"); // 0
  IOI_message_t_0.insert("R");
  elt.add_attribute("RefID", "IOIRefID_t_303811864"); // 0
  IOI_message_t_0.insert("IOIRefID_t_303811864");
  elt.add_attribute("Side", "1"); // 0
  IOI_message_t_0.insert("1");
  elt.add_attribute("QtyTyp", "2"); // 0
  IOI_message_t_0.insert("2");
  elt.add_attribute("Qty", "S"); // 0
  IOI_message_t_0.insert("S");
  elt.add_attribute("Ccy", "JPY"); // 0
  IOI_message_t_0.insert("JPY");
  elt.add_attribute("PxTyp", "3"); // 0
  IOI_message_t_0.insert("3");
  elt.add_attribute("Px", "18105103.400000"); // 0
  IOI_message_t_0.insert("18105103.400000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_1144876909"); // 0
  IOI_message_t_0.insert("ValidUntilTime_t_1144876909");
  elt.add_attribute("QltyInd", "L"); // 0
  IOI_message_t_0.insert("L");
  elt.add_attribute("NatFlag", "N"); // 0
  IOI_message_t_0.insert("N");
  elt.add_attribute("Txt", "Text_t_921583464"); // 0
  IOI_message_t_0.insert("Text_t_921583464");
  elt.add_attribute("EncTxtLen", "391740892"); // 0
  IOI_message_t_0.insert("391740892");
  elt.add_attribute("EncTxt", "EncodedText_t_2018483997"); // 0
  IOI_message_t_0.insert("EncodedText_t_2018483997");
  elt.add_attribute("TxnTm", "TransactTime_t_307556249"); // 0
  IOI_message_t_0.insert("TransactTime_t_307556249");
  elt.add_attribute("URL", "URLLink_t_1319310910"); // 0
  IOI_message_t_0.insert("URLLink_t_1319310910");
  all_values.push_back(IOI_message_t_0);
  all_compo_names.insert("IOI_message_t");

  { // Hdr
    xml_element Hdr_33{"Hdr"};
    multiset<string> Hdr_33_set;
    Hdr_33.add_attribute("SeqNum", "782493093"); // 1
    Hdr_33_set.insert("782493093");
    Hdr_33.add_attribute("SID", "SenderCompID_t_1394057263"); // 1
    Hdr_33_set.insert("SenderCompID_t_1394057263");
    Hdr_33.add_attribute("TID", "TargetCompID_t_1940434165"); // 1
    Hdr_33_set.insert("TargetCompID_t_1940434165");
    Hdr_33.add_attribute("OBID", "OnBehalfOfCompID_t_2094890165"); // 1
    Hdr_33_set.insert("OnBehalfOfCompID_t_2094890165");
    Hdr_33.add_attribute("D2ID", "DeliverToCompID_t_1590738484"); // 1
    Hdr_33_set.insert("DeliverToCompID_t_1590738484");
    Hdr_33.add_attribute("SSub", "SenderSubID_t_685522403"); // 1
    Hdr_33_set.insert("SenderSubID_t_685522403");
    Hdr_33.add_attribute("SLoc", "SenderLocationID_t_1137325869"); // 1
    Hdr_33_set.insert("SenderLocationID_t_1137325869");
    Hdr_33.add_attribute("TSub", "TargetSubID_t_357886945"); // 1
    Hdr_33_set.insert("TargetSubID_t_357886945");
    Hdr_33.add_attribute("TLoc", "TargetLocationID_t_1059491072"); // 1
    Hdr_33_set.insert("TargetLocationID_t_1059491072");
    Hdr_33.add_attribute("OBSub", "OnBehalfOfSubID_t_567248676"); // 1
    Hdr_33_set.insert("OnBehalfOfSubID_t_567248676");
    Hdr_33.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2147018662"); // 1
    Hdr_33_set.insert("OnBehalfOfLocationID_t_2147018662");
    Hdr_33.add_attribute("D2Sub", "DeliverToSubID_t_37824863"); // 1
    Hdr_33_set.insert("DeliverToSubID_t_37824863");
    Hdr_33.add_attribute("D2Loc", "DeliverToLocationID_t_411079593"); // 1
    Hdr_33_set.insert("DeliverToLocationID_t_411079593");
    Hdr_33.add_attribute("PosDup", "N"); // 1
    Hdr_33_set.insert("N");
    Hdr_33.add_attribute("PosRsnd", "Y"); // 1
    Hdr_33_set.insert("Y");
    Hdr_33.add_attribute("Snt", "SendingTime_t_714891457"); // 1
    Hdr_33_set.insert("SendingTime_t_714891457");
    Hdr_33.add_attribute("OrigSnt", "OrigSendingTime_t_158495054"); // 1
    Hdr_33_set.insert("OrigSendingTime_t_158495054");
    Hdr_33.add_attribute("MsgEncd", "MessageEncoding_t_1816187731"); // 1
    Hdr_33_set.insert("MessageEncoding_t_1816187731");
    all_values.push_back(Hdr_33_set);
    all_compo_names.insert("Hdr_33_set");

    {
      xml_element Hop_33{"Hop"};
      multiset<string> Hop_33_set;
      Hop_33.add_attribute("ID", "HopCompID_t_724235378"); // 2
      Hop_33_set.insert("HopCompID_t_724235378");
      Hop_33.add_attribute("Ref", "237723184"); // 2
      Hop_33_set.insert("237723184");
      Hop_33.add_attribute("Snt", "HopSendingTime_t_876128439"); // 2
      Hop_33_set.insert("HopSendingTime_t_876128439");
      all_values.push_back(Hop_33_set);
      all_compo_names.insert("Hop_33_set");

      Hdr_33.add_element(Hop_33);
    }
    elt.add_element(Hdr_33);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_5{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_5_set;
    ApplSeqCtrl_5.add_attribute("ApplID", "ApplID_t_1872304038"); // 1
    ApplSeqCtrl_5_set.insert("ApplID_t_1872304038");
    ApplSeqCtrl_5.add_attribute("ApplSeqNum", "2048233524"); // 1
    ApplSeqCtrl_5_set.insert("2048233524");
    ApplSeqCtrl_5.add_attribute("ApplLastSeqNum", "2021005348"); // 1
    ApplSeqCtrl_5_set.insert("2021005348");
    ApplSeqCtrl_5.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_5_set.insert("true");
    all_values.push_back(ApplSeqCtrl_5_set);
    all_compo_names.insert("ApplSeqCtrl_5_set");

    elt.add_element(ApplSeqCtrl_5);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_26{"Instrmt"};
    multiset<string> Instrmt_26_set;
    Instrmt_26.add_attribute("Sym", "Symbol_t_972786762"); // 1
    Instrmt_26_set.insert("Symbol_t_972786762");
    Instrmt_26.add_attribute("Sfx", "CD"); // 1
    Instrmt_26_set.insert("CD");
    Instrmt_26.add_attribute("ID", "SecurityID_t_607869996"); // 1
    Instrmt_26_set.insert("SecurityID_t_607869996");
    Instrmt_26.add_attribute("Src", "F"); // 1
    Instrmt_26_set.insert("F");
    Instrmt_26.add_attribute("Prod", "7"); // 1
    Instrmt_26_set.insert("7");
    Instrmt_26.add_attribute("ProdCmplx", "ProductComplex_t_1927180906"); // 1
    Instrmt_26_set.insert("ProductComplex_t_1927180906");
    Instrmt_26.add_attribute("SecGrp", "SecurityGroup_t_1626280205"); // 1
    Instrmt_26_set.insert("SecurityGroup_t_1626280205");
    Instrmt_26.add_attribute("CFI", "CFICode_t_349235029"); // 1
    Instrmt_26_set.insert("CFICode_t_349235029");
    Instrmt_26.add_attribute("SecTyp", "TLQN"); // 1
    Instrmt_26_set.insert("TLQN");
    Instrmt_26.add_attribute("SubTyp", "SecuritySubType_t_1573686722"); // 1
    Instrmt_26_set.insert("SecuritySubType_t_1573686722");
    Instrmt_26.add_attribute("MMY", "1939973514"); // 1
    Instrmt_26_set.insert("1939973514");
    Instrmt_26.add_attribute("MatDt", "MaturityDate_t_258170179"); // 1
    Instrmt_26_set.insert("MaturityDate_t_258170179");
    Instrmt_26.add_attribute("MatTm", "563528943"); // 1
    Instrmt_26_set.insert("563528943");
    Instrmt_26.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_150376811"); // 1
    Instrmt_26_set.insert("SettleOnOpenFlag_t_150376811");
    Instrmt_26.add_attribute("AsgnMeth", "1317661251"); // 1
    Instrmt_26_set.insert("1317661251");
    Instrmt_26.add_attribute("Status", "1"); // 1
    Instrmt_26_set.insert("1");
    Instrmt_26.add_attribute("CpnPmt", "CouponPaymentDate_t_149911825"); // 1
    Instrmt_26_set.insert("CouponPaymentDate_t_149911825");
    Instrmt_26.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_26_set.insert("MM");
    Instrmt_26.add_attribute("Snrty", "SR"); // 1
    Instrmt_26_set.insert("SR");
    Instrmt_26.add_attribute("NotlPctOut", "5309654.230000"); // 1
    Instrmt_26_set.insert("5309654.230000");
    Instrmt_26.add_attribute("OrigNotlPctOut", "7387279.340000"); // 1
    Instrmt_26_set.insert("7387279.340000");
    Instrmt_26.add_attribute("AttchPnt", "1092650.220000"); // 1
    Instrmt_26_set.insert("1092650.220000");
    Instrmt_26.add_attribute("DetchPnt", "6894604.780000"); // 1
    Instrmt_26_set.insert("6894604.780000");
    Instrmt_26.add_attribute("Issued", "IssueDate_t_407432017"); // 1
    Instrmt_26_set.insert("IssueDate_t_407432017");
    Instrmt_26.add_attribute("RepoCollSecTyp", "833500400"); // 1
    Instrmt_26_set.insert("833500400");
    Instrmt_26.add_attribute("RepoTrm", "927183662"); // 1
    Instrmt_26_set.insert("927183662");
    Instrmt_26.add_attribute("RepoRt", "12835604.560000"); // 1
    Instrmt_26_set.insert("12835604.560000");
    Instrmt_26.add_attribute("Fctr", "5583207.900000"); // 1
    Instrmt_26_set.insert("5583207.900000");
    Instrmt_26.add_attribute("CrdRtg", "CreditRating_t_827933538"); // 1
    Instrmt_26_set.insert("CreditRating_t_827933538");
    Instrmt_26.add_attribute("Rgstry", "InstrRegistry_t_1157082156"); // 1
    Instrmt_26_set.insert("InstrRegistry_t_1157082156");
    Instrmt_26.add_attribute("IssuCtry", "774449894"); // 1
    Instrmt_26_set.insert("774449894");
    Instrmt_26.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1800720300"); // 1
    Instrmt_26_set.insert("StateOrProvinceOfIssue_t_1800720300");
    Instrmt_26.add_attribute("Lcl", "LocaleOfIssue_t_1952187321"); // 1
    Instrmt_26_set.insert("LocaleOfIssue_t_1952187321");
    Instrmt_26.add_attribute("Redeem", "RedemptionDate_t_1382319890"); // 1
    Instrmt_26_set.insert("RedemptionDate_t_1382319890");
    Instrmt_26.add_attribute("StrkPx", "4970237.640000"); // 1
    Instrmt_26_set.insert("4970237.640000");
    Instrmt_26.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_26_set.insert("JPY");
    Instrmt_26.add_attribute("StrkMult", "21233039.690000"); // 1
    Instrmt_26_set.insert("21233039.690000");
    Instrmt_26.add_attribute("StrkValu", "12566001.160000"); // 1
    Instrmt_26_set.insert("12566001.160000");
    Instrmt_26.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_26_set.insert("1");
    Instrmt_26.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_26_set.insert("5");
    Instrmt_26.add_attribute("StrkPxBndryPrcsn", "10490899.820000"); // 1
    Instrmt_26_set.insert("10490899.820000");
    Instrmt_26.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_26_set.insert("1");
    Instrmt_26.add_attribute("OptAt", "2113035987"); // 1
    Instrmt_26_set.insert("2113035987");
    Instrmt_26.add_attribute("Mult", "11994667.930000"); // 1
    Instrmt_26_set.insert("11994667.930000");
    Instrmt_26.add_attribute("MultTyp", "0"); // 1
    Instrmt_26_set.insert("0");
    Instrmt_26.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_26_set.insert("4");
    Instrmt_26.add_attribute("MinPxIncr", "13493786.180000"); // 1
    Instrmt_26_set.insert("13493786.180000");
    Instrmt_26.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1518498822"); // 1
    Instrmt_26_set.insert("MinPriceIncrementAmount_t_1518498822");
    Instrmt_26.add_attribute("UOM", "Alw"); // 1
    Instrmt_26_set.insert("Alw");
    Instrmt_26.add_attribute("UOMQty", "18803440.420000"); // 1
    Instrmt_26_set.insert("18803440.420000");
    Instrmt_26.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_26_set.insert("lbs");
    Instrmt_26.add_attribute("PxUOMQty", "5999685.460000"); // 1
    Instrmt_26_set.insert("5999685.460000");
    Instrmt_26.add_attribute("SettlMeth", "C"); // 1
    Instrmt_26_set.insert("C");
    Instrmt_26.add_attribute("ExerStyle", "1"); // 1
    Instrmt_26_set.insert("1");
    Instrmt_26.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_26_set.insert("1");
    Instrmt_26.add_attribute("OptPayAmt", "OptPayoutAmount_t_1349504534"); // 1
    Instrmt_26_set.insert("OptPayoutAmount_t_1349504534");
    Instrmt_26.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_26_set.insert("INX");
    Instrmt_26.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_26_set.insert("FUT");
    Instrmt_26.add_attribute("ListMeth", "0"); // 1
    Instrmt_26_set.insert("0");
    Instrmt_26.add_attribute("CapPx", "8103340.890000"); // 1
    Instrmt_26_set.insert("8103340.890000");
    Instrmt_26.add_attribute("FlrPx", "6187559.820000"); // 1
    Instrmt_26_set.insert("6187559.820000");
    Instrmt_26.add_attribute("PutCall", "0"); // 1
    Instrmt_26_set.insert("0");
    Instrmt_26.add_attribute("FlexInd", "true"); // 1
    Instrmt_26_set.insert("true");
    Instrmt_26.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_26_set.insert("true");
    Instrmt_26.add_attribute("TmUnit", "H"); // 1
    Instrmt_26_set.insert("H");
    Instrmt_26.add_attribute("CpnRt", "15224028.490000"); // 1
    Instrmt_26_set.insert("15224028.490000");
    Instrmt_26.add_attribute("Exch", "SecurityExchange_t_1015609373"); // 1
    Instrmt_26_set.insert("SecurityExchange_t_1015609373");
    Instrmt_26.add_attribute("PosLmt", "156035162"); // 1
    Instrmt_26_set.insert("156035162");
    Instrmt_26.add_attribute("NTPosLmt", "631519318"); // 1
    Instrmt_26_set.insert("631519318");
    Instrmt_26.add_attribute("Issr", "Issuer_t_1750274297"); // 1
    Instrmt_26_set.insert("Issuer_t_1750274297");
    Instrmt_26.add_attribute("EncIssrLen", "1705542206"); // 1
    Instrmt_26_set.insert("1705542206");
    Instrmt_26.add_attribute("EncIssr", "EncodedIssuer_t_1680609300"); // 1
    Instrmt_26_set.insert("EncodedIssuer_t_1680609300");
    Instrmt_26.add_attribute("Desc", "SecurityDesc_t_595625753"); // 1
    Instrmt_26_set.insert("SecurityDesc_t_595625753");
    Instrmt_26.add_attribute("EncSecDescLen", "1671094546"); // 1
    Instrmt_26_set.insert("1671094546");
    Instrmt_26.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_732592446"); // 1
    Instrmt_26_set.insert("EncodedSecurityDesc_t_732592446");
    Instrmt_26.add_attribute("Pool", "Pool_t_758638461"); // 1
    Instrmt_26_set.insert("Pool_t_758638461");
    Instrmt_26.add_attribute("CSetMo", "619940857"); // 1
    Instrmt_26_set.insert("619940857");
    Instrmt_26.add_attribute("CPPgm", "99"); // 1
    Instrmt_26_set.insert("99");
    Instrmt_26.add_attribute("CPRegT", "CPRegType_t_129653635"); // 1
    Instrmt_26_set.insert("CPRegType_t_129653635");
    Instrmt_26.add_attribute("Dated", "DatedDate_t_1110644382"); // 1
    Instrmt_26_set.insert("DatedDate_t_1110644382");
    Instrmt_26.add_attribute("IntAcrl", "InterestAccrualDate_t_1814831458"); // 1
    Instrmt_26_set.insert("InterestAccrualDate_t_1814831458");
    all_values.push_back(Instrmt_26_set);
    all_compo_names.insert("Instrmt_26_set");

    {
      xml_element AID_29{"AID"};
      multiset<string> AID_29_set;
      AID_29.add_attribute("AltID", "SecurityAltID_t_239396743"); // 2
      AID_29_set.insert("SecurityAltID_t_239396743");
      AID_29.add_attribute("AltIDSrc", "3"); // 2
      AID_29_set.insert("3");
      all_values.push_back(AID_29_set);
      all_compo_names.insert("AID_29_set");

      Instrmt_26.add_element(AID_29);
    }
    {
      xml_element SecXML_29{"SecXML"};
      multiset<string> SecXML_29_set;
      SecXML_29.add_attribute("Schema", "SecurityXMLSchema_t_89668682"); // 2
      SecXML_29_set.insert("SecurityXMLSchema_t_89668682");
      all_values.push_back(SecXML_29_set);
      all_compo_names.insert("SecXML_29_set");

      Instrmt_26.add_element(SecXML_29);
    }
    {
      xml_element Evnt_29{"Evnt"};
      multiset<string> Evnt_29_set;
      Evnt_29.add_attribute("EventTyp", "8"); // 2
      Evnt_29_set.insert("8");
      Evnt_29.add_attribute("Dt", "EventDate_t_996598227"); // 2
      Evnt_29_set.insert("EventDate_t_996598227");
      Evnt_29.add_attribute("Tm", "EventTime_t_1439173216"); // 2
      Evnt_29_set.insert("EventTime_t_1439173216");
      Evnt_29.add_attribute("Px", "4098238.010000"); // 2
      Evnt_29_set.insert("4098238.010000");
      Evnt_29.add_attribute("Txt", "EventText_t_840904315"); // 2
      Evnt_29_set.insert("EventText_t_840904315");
      all_values.push_back(Evnt_29_set);
      all_compo_names.insert("Evnt_29_set");

      Instrmt_26.add_element(Evnt_29);
    }
    {
      xml_element Pty_158{"Pty"};
      multiset<string> Pty_158_set;
      Pty_158.add_attribute("ID", "InstrumentPartyID_t_1469127640"); // 2
      Pty_158_set.insert("InstrumentPartyID_t_1469127640");
      Pty_158.add_attribute("Src", "9"); // 2
      Pty_158_set.insert("9");
      Pty_158.add_attribute("R", "34"); // 2
      Pty_158_set.insert("34");
      all_values.push_back(Pty_158_set);
      all_compo_names.insert("Pty_158_set");

      {
        xml_element Sub_158{"Sub"};
        multiset<string> Sub_158_set;
        Sub_158.add_attribute("ID", "InstrumentPartySubID_t_1152318717"); // 3
        Sub_158_set.insert("InstrumentPartySubID_t_1152318717");
        Sub_158.add_attribute("Typ", "24"); // 3
        Sub_158_set.insert("24");
        all_values.push_back(Sub_158_set);
        all_compo_names.insert("Sub_158_set");

        Pty_158.add_element(Sub_158);
      }
      Instrmt_26.add_element(Pty_158);
    }
    {
      xml_element CmplxEvnt_26{"CmplxEvnt"};
      multiset<string> CmplxEvnt_26_set;
      CmplxEvnt_26.add_attribute("Typ", "9"); // 2
      CmplxEvnt_26_set.insert("9");
      CmplxEvnt_26.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1332533558"); // 2
      CmplxEvnt_26_set.insert("ComplexOptPayoutAmount_t_1332533558");
      CmplxEvnt_26.add_attribute("Px", "12101148.540000"); // 2
      CmplxEvnt_26_set.insert("12101148.540000");
      CmplxEvnt_26.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_26_set.insert("3");
      CmplxEvnt_26.add_attribute("PxBndryPrcsn", "14885687.200000"); // 2
      CmplxEvnt_26_set.insert("14885687.200000");
      CmplxEvnt_26.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_26_set.insert("2");
      CmplxEvnt_26.add_attribute("Cond", "2"); // 2
      CmplxEvnt_26_set.insert("2");
      all_values.push_back(CmplxEvnt_26_set);
      all_compo_names.insert("CmplxEvnt_26_set");

      {
        xml_element EvntDts_26{"EvntDts"};
        multiset<string> EvntDts_26_set;
        EvntDts_26.add_attribute("StartDt", "ComplexEventStartDate_t_1046627279"); // 3
        EvntDts_26_set.insert("ComplexEventStartDate_t_1046627279");
        EvntDts_26.add_attribute("EndDt", "ComplexEventEndDate_t_1374759825"); // 3
        EvntDts_26_set.insert("ComplexEventEndDate_t_1374759825");
        all_values.push_back(EvntDts_26_set);
        all_compo_names.insert("EvntDts_26_set");

        {
          xml_element EvntTms_26{"EvntTms"};
          multiset<string> EvntTms_26_set;
          EvntTms_26.add_attribute("StartTm", "379794650"); // 4
          EvntTms_26_set.insert("379794650");
          EvntTms_26.add_attribute("EndTm", "570238177"); // 4
          EvntTms_26_set.insert("570238177");
          all_values.push_back(EvntTms_26_set);
          all_compo_names.insert("EvntTms_26_set");

          EvntDts_26.add_element(EvntTms_26);
        }
        CmplxEvnt_26.add_element(EvntDts_26);
      }
      Instrmt_26.add_element(CmplxEvnt_26);
    }
    elt.add_element(Instrmt_26);
  } // end Instrmt
  { // Pty
    xml_element Pty_159{"Pty"};
    multiset<string> Pty_159_set;
    Pty_159.add_attribute("ID", "PartyID_t_1138433111"); // 1
    Pty_159_set.insert("PartyID_t_1138433111");
    Pty_159.add_attribute("Src", "9"); // 1
    Pty_159_set.insert("9");
    Pty_159.add_attribute("R", "35"); // 1
    Pty_159_set.insert("35");
    all_values.push_back(Pty_159_set);
    all_compo_names.insert("Pty_159_set");

    {
      xml_element Sub_159{"Sub"};
      multiset<string> Sub_159_set;
      Sub_159.add_attribute("ID", "PartySubID_t_1268086746"); // 2
      Sub_159_set.insert("PartySubID_t_1268086746");
      Sub_159.add_attribute("Typ", "5"); // 2
      Sub_159_set.insert("5");
      all_values.push_back(Sub_159_set);
      all_compo_names.insert("Sub_159_set");

      Pty_159.add_element(Sub_159);
    }
    elt.add_element(Pty_159);
  } // end Pty
  { // FinDetls
    xml_element FinDetls_11{"FinDetls"};
    multiset<string> FinDetls_11_set;
    FinDetls_11.add_attribute("AgmtDesc", "AgreementDesc_t_1709187498"); // 1
    FinDetls_11_set.insert("AgreementDesc_t_1709187498");
    FinDetls_11.add_attribute("AgmtID", "AgreementID_t_1507483489"); // 1
    FinDetls_11_set.insert("AgreementID_t_1507483489");
    FinDetls_11.add_attribute("AgmtDt", "AgreementDate_t_1863952697"); // 1
    FinDetls_11_set.insert("AgreementDate_t_1863952697");
    FinDetls_11.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_11_set.insert("EUR");
    FinDetls_11.add_attribute("TrmTyp", "1"); // 1
    FinDetls_11_set.insert("1");
    FinDetls_11.add_attribute("StartDt", "StartDate_t_1090545749"); // 1
    FinDetls_11_set.insert("StartDate_t_1090545749");
    FinDetls_11.add_attribute("EndDt", "EndDate_t_526395510"); // 1
    FinDetls_11_set.insert("EndDate_t_526395510");
    FinDetls_11.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_11_set.insert("3");
    FinDetls_11.add_attribute("MgnRatio", "4121897.410000"); // 1
    FinDetls_11_set.insert("4121897.410000");
    all_values.push_back(FinDetls_11_set);
    all_compo_names.insert("FinDetls_11_set");

    elt.add_element(FinDetls_11);
  } // end FinDetls
  { // Undly
    xml_element Undly_38{"Undly"};
    multiset<string> Undly_38_set;
    Undly_38.add_attribute("Sym", "UnderlyingSymbol_t_866148241"); // 1
    Undly_38_set.insert("UnderlyingSymbol_t_866148241");
    Undly_38.add_attribute("Sfx", "CD"); // 1
    Undly_38_set.insert("CD");
    Undly_38.add_attribute("ID", "UnderlyingSecurityID_t_1434265406"); // 1
    Undly_38_set.insert("UnderlyingSecurityID_t_1434265406");
    Undly_38.add_attribute("Src", "1"); // 1
    Undly_38_set.insert("1");
    Undly_38.add_attribute("Prod", "1"); // 1
    Undly_38_set.insert("1");
    Undly_38.add_attribute("CFI", "UnderlyingCFICode_t_496896612"); // 1
    Undly_38_set.insert("UnderlyingCFICode_t_496896612");
    Undly_38.add_attribute("SecTyp", "OOF"); // 1
    Undly_38_set.insert("OOF");
    Undly_38.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_90643441"); // 1
    Undly_38_set.insert("UnderlyingSecuritySubType_t_90643441");
    Undly_38.add_attribute("MMY", "191047137"); // 1
    Undly_38_set.insert("191047137");
    Undly_38.add_attribute("Mat", "UnderlyingMaturityDate_t_2144947908"); // 1
    Undly_38_set.insert("UnderlyingMaturityDate_t_2144947908");
    Undly_38.add_attribute("MatTm", "1137270720"); // 1
    Undly_38_set.insert("1137270720");
    Undly_38.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1565806962"); // 1
    Undly_38_set.insert("UnderlyingCouponPaymentDate_t_1565806962");
    Undly_38.add_attribute("RestrctTyp", "XR"); // 1
    Undly_38_set.insert("XR");
    Undly_38.add_attribute("Snrty", "SR"); // 1
    Undly_38_set.insert("SR");
    Undly_38.add_attribute("NotlPctOut", "15256755.850000"); // 1
    Undly_38_set.insert("15256755.850000");
    Undly_38.add_attribute("OrigNotlPctOut", "15156920.220000"); // 1
    Undly_38_set.insert("15156920.220000");
    Undly_38.add_attribute("AttchPnt", "7502042.830000"); // 1
    Undly_38_set.insert("7502042.830000");
    Undly_38.add_attribute("DetchPnt", "14200316.240000"); // 1
    Undly_38_set.insert("14200316.240000");
    Undly_38.add_attribute("Issued", "UnderlyingIssueDate_t_636295121"); // 1
    Undly_38_set.insert("UnderlyingIssueDate_t_636295121");
    Undly_38.add_attribute("RepoCollSecTyp", "903544052"); // 1
    Undly_38_set.insert("903544052");
    Undly_38.add_attribute("RepoTrm", "981735474"); // 1
    Undly_38_set.insert("981735474");
    Undly_38.add_attribute("RepoRt", "21437786.100000"); // 1
    Undly_38_set.insert("21437786.100000");
    Undly_38.add_attribute("Fctr", "6200131.010000"); // 1
    Undly_38_set.insert("6200131.010000");
    Undly_38.add_attribute("CrdRtg", "UnderlyingCreditRating_t_633108007"); // 1
    Undly_38_set.insert("UnderlyingCreditRating_t_633108007");
    Undly_38.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_112866672"); // 1
    Undly_38_set.insert("UnderlyingInstrRegistry_t_112866672");
    Undly_38.add_attribute("Ctry", "1333080377"); // 1
    Undly_38_set.insert("1333080377");
    Undly_38.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1723653756"); // 1
    Undly_38_set.insert("UnderlyingStateOrProvinceOfIssue_t_1723653756");
    Undly_38.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_639262182"); // 1
    Undly_38_set.insert("UnderlyingLocaleOfIssue_t_639262182");
    Undly_38.add_attribute("Redeem", "UnderlyingRedemptionDate_t_739568320"); // 1
    Undly_38_set.insert("UnderlyingRedemptionDate_t_739568320");
    Undly_38.add_attribute("StrkPx", "21358434.970000"); // 1
    Undly_38_set.insert("21358434.970000");
    Undly_38.add_attribute("StrkCcy", "USD"); // 1
    Undly_38_set.insert("USD");
    Undly_38.add_attribute("OptA", "1552868308"); // 1
    Undly_38_set.insert("1552868308");
    Undly_38.add_attribute("Mult", "16725973.410000"); // 1
    Undly_38_set.insert("16725973.410000");
    Undly_38.add_attribute("MultTyp", "2"); // 1
    Undly_38_set.insert("2");
    Undly_38.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_38_set.insert("3");
    Undly_38.add_attribute("UOM", "MMbbl"); // 1
    Undly_38_set.insert("MMbbl");
    Undly_38.add_attribute("UOMQty", "18509290.410000"); // 1
    Undly_38_set.insert("18509290.410000");
    Undly_38.add_attribute("PxUOM", "Bu"); // 1
    Undly_38_set.insert("Bu");
    Undly_38.add_attribute("PxUOMQty", "2130574.430000"); // 1
    Undly_38_set.insert("2130574.430000");
    Undly_38.add_attribute("TmUnit", "S"); // 1
    Undly_38_set.insert("S");
    Undly_38.add_attribute("ExerStyle", "1"); // 1
    Undly_38_set.insert("1");
    Undly_38.add_attribute("CpnRt", "17788644.050000"); // 1
    Undly_38_set.insert("17788644.050000");
    Undly_38.add_attribute("Exch", "UnderlyingSecurityExchange_t_78168565"); // 1
    Undly_38_set.insert("UnderlyingSecurityExchange_t_78168565");
    Undly_38.add_attribute("Issr", "UnderlyingIssuer_t_942882438"); // 1
    Undly_38_set.insert("UnderlyingIssuer_t_942882438");
    Undly_38.add_attribute("EncUndIssrLen", "1157056342"); // 1
    Undly_38_set.insert("1157056342");
    Undly_38.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1593860587"); // 1
    Undly_38_set.insert("EncodedUnderlyingIssuer_t_1593860587");
    Undly_38.add_attribute("Desc", "UnderlyingSecurityDesc_t_1693086722"); // 1
    Undly_38_set.insert("UnderlyingSecurityDesc_t_1693086722");
    Undly_38.add_attribute("EncUndSecDescLen", "429604318"); // 1
    Undly_38_set.insert("429604318");
    Undly_38.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_82672060"); // 1
    Undly_38_set.insert("EncodedUnderlyingSecurityDesc_t_82672060");
    Undly_38.add_attribute("CPPgm", "UnderlyingCPProgram_t_449147126"); // 1
    Undly_38_set.insert("UnderlyingCPProgram_t_449147126");
    Undly_38.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1411339793"); // 1
    Undly_38_set.insert("UnderlyingCPRegType_t_1411339793");
    Undly_38.add_attribute("AllocPct", "789670.230000"); // 1
    Undly_38_set.insert("789670.230000");
    Undly_38.add_attribute("Ccy", "USD"); // 1
    Undly_38_set.insert("USD");
    Undly_38.add_attribute("Qty", "1918336.950000"); // 1
    Undly_38_set.insert("1918336.950000");
    Undly_38.add_attribute("SettlTyp", "4"); // 1
    Undly_38_set.insert("4");
    Undly_38.add_attribute("CashAmt", "UnderlyingCashAmount_t_1620617908"); // 1
    Undly_38_set.insert("UnderlyingCashAmount_t_1620617908");
    Undly_38.add_attribute("CashTyp", "DIFF"); // 1
    Undly_38_set.insert("DIFF");
    Undly_38.add_attribute("Px", "9943252.760000"); // 1
    Undly_38_set.insert("9943252.760000");
    Undly_38.add_attribute("DirtPx", "16089777.570000"); // 1
    Undly_38_set.insert("16089777.570000");
    Undly_38.add_attribute("EndPx", "10694278.130000"); // 1
    Undly_38_set.insert("10694278.130000");
    Undly_38.add_attribute("StartVal", "UnderlyingStartValue_t_452558190"); // 1
    Undly_38_set.insert("UnderlyingStartValue_t_452558190");
    Undly_38.add_attribute("CurVal", "UnderlyingCurrentValue_t_1014362417"); // 1
    Undly_38_set.insert("UnderlyingCurrentValue_t_1014362417");
    Undly_38.add_attribute("EndVal", "UnderlyingEndValue_t_594541506"); // 1
    Undly_38_set.insert("UnderlyingEndValue_t_594541506");
    Undly_38.add_attribute("AdjQty", "20901918.680000"); // 1
    Undly_38_set.insert("20901918.680000");
    Undly_38.add_attribute("FxRate", "11693054.460000"); // 1
    Undly_38_set.insert("11693054.460000");
    Undly_38.add_attribute("FxRateCalc", "M"); // 1
    Undly_38_set.insert("M");
    Undly_38.add_attribute("CapValu", "UnderlyingCapValue_t_1793637262"); // 1
    Undly_38_set.insert("UnderlyingCapValue_t_1793637262");
    Undly_38.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1414891915"); // 1
    Undly_38_set.insert("UnderlyingSettlMethod_t_1414891915");
    Undly_38.add_attribute("PutCall", "829609255"); // 1
    Undly_38_set.insert("829609255");
    all_values.push_back(Undly_38_set);
    all_compo_names.insert("Undly_38_set");

    {
      xml_element UndAID_38{"UndAID"};
      multiset<string> UndAID_38_set;
      UndAID_38.add_attribute("AltID", "UnderlyingSecurityAltID_t_1494546916"); // 2
      UndAID_38_set.insert("UnderlyingSecurityAltID_t_1494546916");
      UndAID_38.add_attribute("AltIDSrc", "I"); // 2
      UndAID_38_set.insert("I");
      all_values.push_back(UndAID_38_set);
      all_compo_names.insert("UndAID_38_set");

      Undly_38.add_element(UndAID_38);
    }
    {
      xml_element Stip_61{"Stip"};
      multiset<string> Stip_61_set;
      Stip_61.add_attribute("Typ", "HAIRCUT"); // 2
      Stip_61_set.insert("HAIRCUT");
      Stip_61.add_attribute("Val", "UnderlyingStipValue_t_1572715481"); // 2
      Stip_61_set.insert("UnderlyingStipValue_t_1572715481");
      all_values.push_back(Stip_61_set);
      all_compo_names.insert("Stip_61_set");

      Undly_38.add_element(Stip_61);
    }
    {
      xml_element Pty_160{"Pty"};
      multiset<string> Pty_160_set;
      Pty_160.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1593147895"); // 2
      Pty_160_set.insert("UnderlyingInstrumentPartyID_t_1593147895");
      Pty_160.add_attribute("Src", "3"); // 2
      Pty_160_set.insert("3");
      Pty_160.add_attribute("R", "55"); // 2
      Pty_160_set.insert("55");
      all_values.push_back(Pty_160_set);
      all_compo_names.insert("Pty_160_set");

      {
        xml_element Sub_160{"Sub"};
        multiset<string> Sub_160_set;
        Sub_160.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1138750969"); // 3
        Sub_160_set.insert("UnderlyingInstrumentPartySubID_t_1138750969");
        Sub_160.add_attribute("Typ", "21"); // 3
        Sub_160_set.insert("21");
        all_values.push_back(Sub_160_set);
        all_compo_names.insert("Sub_160_set");

        Pty_160.add_element(Sub_160);
      }
      Undly_38.add_element(Pty_160);
    }
    elt.add_element(Undly_38);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_7{"OrdQty"};
    multiset<string> OrdQty_7_set;
    OrdQty_7.add_attribute("Qty", "11017644.810000"); // 1
    OrdQty_7_set.insert("11017644.810000");
    OrdQty_7.add_attribute("Cash", "15878980.950000"); // 1
    OrdQty_7_set.insert("15878980.950000");
    OrdQty_7.add_attribute("Pct", "13115068.180000"); // 1
    OrdQty_7_set.insert("13115068.180000");
    OrdQty_7.add_attribute("RndDir", "0"); // 1
    OrdQty_7_set.insert("0");
    OrdQty_7.add_attribute("RndMod", "5095746.740000"); // 1
    OrdQty_7_set.insert("5095746.740000");
    all_values.push_back(OrdQty_7_set);
    all_compo_names.insert("OrdQty_7_set");

    elt.add_element(OrdQty_7);
  } // end OrdQty
  { // Stip
    xml_element Stip_62{"Stip"};
    multiset<string> Stip_62_set;
    Stip_62.add_attribute("Typ", "YTM"); // 1
    Stip_62_set.insert("YTM");
    Stip_62.add_attribute("Val", "StipulationValue_t_764331630"); // 1
    Stip_62_set.insert("StipulationValue_t_764331630");
    all_values.push_back(Stip_62_set);
    all_compo_names.insert("Stip_62_set");

    elt.add_element(Stip_62);
  } // end Stip
  { // Stip
    xml_element Stip_63{"Stip"};
    multiset<string> Stip_63_set;
    Stip_63.add_attribute("Typ", "PIECES"); // 1
    Stip_63_set.insert("PIECES");
    Stip_63.add_attribute("Val", "StipulationValue_t_56177428"); // 1
    Stip_63_set.insert("StipulationValue_t_56177428");
    all_values.push_back(Stip_63_set);
    all_compo_names.insert("Stip_63_set");

    elt.add_element(Stip_63);
  } // end Stip
  { // Stip
    xml_element Stip_64{"Stip"};
    multiset<string> Stip_64_set;
    Stip_64.add_attribute("Typ", "MINQTY"); // 1
    Stip_64_set.insert("MINQTY");
    Stip_64.add_attribute("Val", "StipulationValue_t_143099339"); // 1
    Stip_64_set.insert("StipulationValue_t_143099339");
    all_values.push_back(Stip_64_set);
    all_compo_names.insert("Stip_64_set");

    elt.add_element(Stip_64);
  } // end Stip
  { // IOI
    xml_element IOI_0{"IOI"};
    multiset<string> IOI_0_set;
    IOI_0.add_attribute("IOIQty", "U"); // 1
    IOI_0_set.insert("U");
    all_values.push_back(IOI_0_set);
    all_compo_names.insert("IOI_0_set");

    {
      xml_element Leg_39{"Leg"};
      multiset<string> Leg_39_set;
      Leg_39.add_attribute("Sym", "LegSymbol_t_1157461757"); // 2
      Leg_39_set.insert("LegSymbol_t_1157461757");
      Leg_39.add_attribute("Sfx", "CD"); // 2
      Leg_39_set.insert("CD");
      Leg_39.add_attribute("ID", "LegSecurityID_t_6439670"); // 2
      Leg_39_set.insert("LegSecurityID_t_6439670");
      Leg_39.add_attribute("Src", "C"); // 2
      Leg_39_set.insert("C");
      Leg_39.add_attribute("Prod", "12"); // 2
      Leg_39_set.insert("12");
      Leg_39.add_attribute("CFI", "LegCFICode_t_1800076932"); // 2
      Leg_39_set.insert("LegCFICode_t_1800076932");
      Leg_39.add_attribute("SecTyp", "TAN"); // 2
      Leg_39_set.insert("TAN");
      Leg_39.add_attribute("SecSubTyp", "LegSecuritySubType_t_1018824168"); // 2
      Leg_39_set.insert("LegSecuritySubType_t_1018824168");
      Leg_39.add_attribute("MMY", "1147140200"); // 2
      Leg_39_set.insert("1147140200");
      Leg_39.add_attribute("Mat", "LegMaturityDate_t_96957279"); // 2
      Leg_39_set.insert("LegMaturityDate_t_96957279");
      Leg_39.add_attribute("MatTm", "1479814180"); // 2
      Leg_39_set.insert("1479814180");
      Leg_39.add_attribute("CpnPmt", "LegCouponPaymentDate_t_572372033"); // 2
      Leg_39_set.insert("LegCouponPaymentDate_t_572372033");
      Leg_39.add_attribute("Issued", "LegIssueDate_t_1690105175"); // 2
      Leg_39_set.insert("LegIssueDate_t_1690105175");
      Leg_39.add_attribute("RepoCollSecTyp", "950376887"); // 2
      Leg_39_set.insert("950376887");
      Leg_39.add_attribute("RepoTrm", "1591464453"); // 2
      Leg_39_set.insert("1591464453");
      Leg_39.add_attribute("RepoRt", "6813724.960000"); // 2
      Leg_39_set.insert("6813724.960000");
      Leg_39.add_attribute("Fctr", "8505439.120000"); // 2
      Leg_39_set.insert("8505439.120000");
      Leg_39.add_attribute("CrdRtg", "LegCreditRating_t_545745286"); // 2
      Leg_39_set.insert("LegCreditRating_t_545745286");
      Leg_39.add_attribute("Rgstry", "LegInstrRegistry_t_121786944"); // 2
      Leg_39_set.insert("LegInstrRegistry_t_121786944");
      Leg_39.add_attribute("Ctry", "14567082"); // 2
      Leg_39_set.insert("14567082");
      Leg_39.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1726476790"); // 2
      Leg_39_set.insert("LegStateOrProvinceOfIssue_t_1726476790");
      Leg_39.add_attribute("Lcl", "LegLocaleOfIssue_t_631361618"); // 2
      Leg_39_set.insert("LegLocaleOfIssue_t_631361618");
      Leg_39.add_attribute("Redeem", "LegRedemptionDate_t_1223038052"); // 2
      Leg_39_set.insert("LegRedemptionDate_t_1223038052");
      Leg_39.add_attribute("Strk", "9515583.410000"); // 2
      Leg_39_set.insert("9515583.410000");
      Leg_39.add_attribute("StrkCcy", "USD"); // 2
      Leg_39_set.insert("USD");
      Leg_39.add_attribute("OptA", "1007735770"); // 2
      Leg_39_set.insert("1007735770");
      Leg_39.add_attribute("Cmult", "10068665.080000"); // 2
      Leg_39_set.insert("10068665.080000");
      Leg_39.add_attribute("MultTyp", "2"); // 2
      Leg_39_set.insert("2");
      Leg_39.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_39_set.insert("1");
      Leg_39.add_attribute("UOM", "MWh"); // 2
      Leg_39_set.insert("MWh");
      Leg_39.add_attribute("UOMQty", "10577207.300000"); // 2
      Leg_39_set.insert("10577207.300000");
      Leg_39.add_attribute("PxUOM", "MMbbl"); // 2
      Leg_39_set.insert("MMbbl");
      Leg_39.add_attribute("PxUOMQty", "10770376.270000"); // 2
      Leg_39_set.insert("10770376.270000");
      Leg_39.add_attribute("TmUnit", "Yr"); // 2
      Leg_39_set.insert("Yr");
      Leg_39.add_attribute("ExerStyle", "2"); // 2
      Leg_39_set.insert("2");
      Leg_39.add_attribute("CpnRt", "7296309.110000"); // 2
      Leg_39_set.insert("7296309.110000");
      Leg_39.add_attribute("Exch", "LegSecurityExchange_t_683696108"); // 2
      Leg_39_set.insert("LegSecurityExchange_t_683696108");
      Leg_39.add_attribute("Issr", "LegIssuer_t_766559544"); // 2
      Leg_39_set.insert("LegIssuer_t_766559544");
      Leg_39.add_attribute("EncLegIssrLen", "1876771111"); // 2
      Leg_39_set.insert("1876771111");
      Leg_39.add_attribute("EncLegIssr", "EncodedLegIssuer_t_780653387"); // 2
      Leg_39_set.insert("EncodedLegIssuer_t_780653387");
      Leg_39.add_attribute("Desc", "LegSecurityDesc_t_98890076"); // 2
      Leg_39_set.insert("LegSecurityDesc_t_98890076");
      Leg_39.add_attribute("EncLegSecDescLen", "301659496"); // 2
      Leg_39_set.insert("301659496");
      Leg_39.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_323274914"); // 2
      Leg_39_set.insert("EncodedLegSecurityDesc_t_323274914");
      Leg_39.add_attribute("RatioQty", "10492669.630000"); // 2
      Leg_39_set.insert("10492669.630000");
      Leg_39.add_attribute("Side", "F"); // 2
      Leg_39_set.insert("F");
      Leg_39.add_attribute("Ccy", "CAN"); // 2
      Leg_39_set.insert("CAN");
      Leg_39.add_attribute("Pool", "LegPool_t_291385588"); // 2
      Leg_39_set.insert("LegPool_t_291385588");
      Leg_39.add_attribute("Dated", "LegDatedDate_t_1126434355"); // 2
      Leg_39_set.insert("LegDatedDate_t_1126434355");
      Leg_39.add_attribute("CSetMo", "1914377957"); // 2
      Leg_39_set.insert("1914377957");
      Leg_39.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2017862379"); // 2
      Leg_39_set.insert("LegInterestAccrualDate_t_2017862379");
      Leg_39.add_attribute("PutCall", "1757795973"); // 2
      Leg_39_set.insert("1757795973");
      Leg_39.add_attribute("LegOptionRatio", "9899323.610000"); // 2
      Leg_39_set.insert("9899323.610000");
      Leg_39.add_attribute("Px", "8219370.720000"); // 2
      Leg_39_set.insert("8219370.720000");
      all_values.push_back(Leg_39_set);
      all_compo_names.insert("Leg_39_set");

      {
        xml_element LegAID_39{"LegAID"};
        multiset<string> LegAID_39_set;
        LegAID_39.add_attribute("SecAltID", "LegSecurityAltID_t_1006005574"); // 3
        LegAID_39_set.insert("LegSecurityAltID_t_1006005574");
        LegAID_39.add_attribute("SecAltIDSrc", "2"); // 3
        LegAID_39_set.insert("2");
        all_values.push_back(LegAID_39_set);
        all_compo_names.insert("LegAID_39_set");

        Leg_39.add_element(LegAID_39);
      }
      IOI_0.add_element(Leg_39);
    }
    {
      xml_element Stip_65{"Stip"};
      multiset<string> Stip_65_set;
      Stip_65.add_attribute("StipTyp", "PXSOURCE"); // 2
      Stip_65_set.insert("PXSOURCE");
      Stip_65.add_attribute("StipVal", "LegStipulationValue_t_2012872082"); // 2
      Stip_65_set.insert("LegStipulationValue_t_2012872082");
      all_values.push_back(Stip_65_set);
      all_compo_names.insert("Stip_65_set");

      IOI_0.add_element(Stip_65);
    }
    elt.add_element(IOI_0);
  } // end IOI
  { // Qual
    xml_element Qual_4{"Qual"};
    multiset<string> Qual_4_set;
    Qual_4.add_attribute("Qual", "I"); // 1
    Qual_4_set.insert("I");
    all_values.push_back(Qual_4_set);
    all_compo_names.insert("Qual_4_set");

    elt.add_element(Qual_4);
  } // end Qual
  { // Qual
    xml_element Qual_5{"Qual"};
    multiset<string> Qual_5_set;
    Qual_5.add_attribute("Qual", "A"); // 1
    Qual_5_set.insert("A");
    all_values.push_back(Qual_5_set);
    all_compo_names.insert("Qual_5_set");

    elt.add_element(Qual_5);
  } // end Qual
  { // Rtg
    xml_element Rtg_3{"Rtg"};
    multiset<string> Rtg_3_set;
    Rtg_3.add_attribute("RtgTyp", "2"); // 1
    Rtg_3_set.insert("2");
    Rtg_3.add_attribute("RtgID", "RoutingID_t_2013024019"); // 1
    Rtg_3_set.insert("RoutingID_t_2013024019");
    all_values.push_back(Rtg_3_set);
    all_compo_names.insert("Rtg_3_set");

    elt.add_element(Rtg_3);
  } // end Rtg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_11{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_11_set;
    SprdBnchmkCurve_11.add_attribute("Spread", "7945923.370000"); // 1
    SprdBnchmkCurve_11_set.insert("7945923.370000");
    SprdBnchmkCurve_11.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_11_set.insert("CAN");
    SprdBnchmkCurve_11.add_attribute("Name", "SONIA"); // 1
    SprdBnchmkCurve_11_set.insert("SONIA");
    SprdBnchmkCurve_11.add_attribute("Point", "BenchmarkCurvePoint_t_1888345589"); // 1
    SprdBnchmkCurve_11_set.insert("BenchmarkCurvePoint_t_1888345589");
    SprdBnchmkCurve_11.add_attribute("Px", "3244587.460000"); // 1
    SprdBnchmkCurve_11_set.insert("3244587.460000");
    SprdBnchmkCurve_11.add_attribute("PxTyp", "5"); // 1
    SprdBnchmkCurve_11_set.insert("5");
    SprdBnchmkCurve_11.add_attribute("SecID", "BenchmarkSecurityID_t_1987235666"); // 1
    SprdBnchmkCurve_11_set.insert("BenchmarkSecurityID_t_1987235666");
    SprdBnchmkCurve_11.add_attribute("SecIDSrc", "4"); // 1
    SprdBnchmkCurve_11_set.insert("4");
    all_values.push_back(SprdBnchmkCurve_11_set);
    all_compo_names.insert("SprdBnchmkCurve_11_set");

    elt.add_element(SprdBnchmkCurve_11);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_6{"Yield"};
    multiset<string> Yield_6_set;
    Yield_6.add_attribute("Typ", "NEXTREFUND"); // 1
    Yield_6_set.insert("NEXTREFUND");
    Yield_6.add_attribute("Yld", "8890189.810000"); // 1
    Yield_6_set.insert("8890189.810000");
    Yield_6.add_attribute("CalcDt", "YieldCalcDate_t_371758545"); // 1
    Yield_6_set.insert("YieldCalcDate_t_371758545");
    Yield_6.add_attribute("RedDt", "YieldRedemptionDate_t_1439380510"); // 1
    Yield_6_set.insert("YieldRedemptionDate_t_1439380510");
    Yield_6.add_attribute("RedPx", "6413462.090000"); // 1
    Yield_6_set.insert("6413462.090000");
    Yield_6.add_attribute("RedPxTyp", "15"); // 1
    Yield_6_set.insert("15");
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
