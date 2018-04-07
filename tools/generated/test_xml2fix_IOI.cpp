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
  elt.add_attribute("ID", "IOIID_t_437195079"); // 0
  IOI_message_t_0.insert("IOIID_t_437195079");
  elt.add_attribute("TransTyp", "R"); // 0
  IOI_message_t_0.insert("R");
  elt.add_attribute("RefID", "IOIRefID_t_616369495"); // 0
  IOI_message_t_0.insert("IOIRefID_t_616369495");
  elt.add_attribute("Side", "4"); // 0
  IOI_message_t_0.insert("4");
  elt.add_attribute("QtyTyp", "2"); // 0
  IOI_message_t_0.insert("2");
  elt.add_attribute("Qty", "M"); // 0
  IOI_message_t_0.insert("M");
  elt.add_attribute("Ccy", "CAN"); // 0
  IOI_message_t_0.insert("CAN");
  elt.add_attribute("PxTyp", "8"); // 0
  IOI_message_t_0.insert("8");
  elt.add_attribute("Px", "15578590.120000"); // 0
  IOI_message_t_0.insert("15578590.120000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_1880170679"); // 0
  IOI_message_t_0.insert("ValidUntilTime_t_1880170679");
  elt.add_attribute("QltyInd", "M"); // 0
  IOI_message_t_0.insert("M");
  elt.add_attribute("NatFlag", "N"); // 0
  IOI_message_t_0.insert("N");
  elt.add_attribute("Txt", "Text_t_625211338"); // 0
  IOI_message_t_0.insert("Text_t_625211338");
  elt.add_attribute("EncTxtLen", "1173714922"); // 0
  IOI_message_t_0.insert("1173714922");
  elt.add_attribute("EncTxt", "EncodedText_t_375011491"); // 0
  IOI_message_t_0.insert("EncodedText_t_375011491");
  elt.add_attribute("TxnTm", "TransactTime_t_569062392"); // 0
  IOI_message_t_0.insert("TransactTime_t_569062392");
  elt.add_attribute("URL", "URLLink_t_405220405"); // 0
  IOI_message_t_0.insert("URLLink_t_405220405");
  all_values.push_back(IOI_message_t_0);
  all_compo_names.insert("IOI_message_t");

  { // Hdr
    xml_element Hdr_33{"Hdr"};
    multiset<string> Hdr_33_set;
    Hdr_33.add_attribute("SeqNum", "1350084144"); // 1
    Hdr_33_set.insert("1350084144");
    Hdr_33.add_attribute("SID", "SenderCompID_t_1657045526"); // 1
    Hdr_33_set.insert("SenderCompID_t_1657045526");
    Hdr_33.add_attribute("TID", "TargetCompID_t_1996364632"); // 1
    Hdr_33_set.insert("TargetCompID_t_1996364632");
    Hdr_33.add_attribute("OBID", "OnBehalfOfCompID_t_1055892586"); // 1
    Hdr_33_set.insert("OnBehalfOfCompID_t_1055892586");
    Hdr_33.add_attribute("D2ID", "DeliverToCompID_t_1335031604"); // 1
    Hdr_33_set.insert("DeliverToCompID_t_1335031604");
    Hdr_33.add_attribute("SSub", "SenderSubID_t_1785677028"); // 1
    Hdr_33_set.insert("SenderSubID_t_1785677028");
    Hdr_33.add_attribute("SLoc", "SenderLocationID_t_1415508474"); // 1
    Hdr_33_set.insert("SenderLocationID_t_1415508474");
    Hdr_33.add_attribute("TSub", "TargetSubID_t_1115192656"); // 1
    Hdr_33_set.insert("TargetSubID_t_1115192656");
    Hdr_33.add_attribute("TLoc", "TargetLocationID_t_62701180"); // 1
    Hdr_33_set.insert("TargetLocationID_t_62701180");
    Hdr_33.add_attribute("OBSub", "OnBehalfOfSubID_t_365841953"); // 1
    Hdr_33_set.insert("OnBehalfOfSubID_t_365841953");
    Hdr_33.add_attribute("OBLoc", "OnBehalfOfLocationID_t_779283102"); // 1
    Hdr_33_set.insert("OnBehalfOfLocationID_t_779283102");
    Hdr_33.add_attribute("D2Sub", "DeliverToSubID_t_528831155"); // 1
    Hdr_33_set.insert("DeliverToSubID_t_528831155");
    Hdr_33.add_attribute("D2Loc", "DeliverToLocationID_t_550390709"); // 1
    Hdr_33_set.insert("DeliverToLocationID_t_550390709");
    Hdr_33.add_attribute("PosDup", "Y"); // 1
    Hdr_33_set.insert("Y");
    Hdr_33.add_attribute("PosRsnd", "N"); // 1
    Hdr_33_set.insert("N");
    Hdr_33.add_attribute("Snt", "SendingTime_t_1166760205"); // 1
    Hdr_33_set.insert("SendingTime_t_1166760205");
    Hdr_33.add_attribute("OrigSnt", "OrigSendingTime_t_1396902472"); // 1
    Hdr_33_set.insert("OrigSendingTime_t_1396902472");
    Hdr_33.add_attribute("MsgEncd", "MessageEncoding_t_112938839"); // 1
    Hdr_33_set.insert("MessageEncoding_t_112938839");
    all_values.push_back(Hdr_33_set);
    all_compo_names.insert("Hdr_33_set");

    {
      xml_element Hop_33{"Hop"};
      multiset<string> Hop_33_set;
      Hop_33.add_attribute("ID", "HopCompID_t_714412679"); // 2
      Hop_33_set.insert("HopCompID_t_714412679");
      Hop_33.add_attribute("Ref", "2106897882"); // 2
      Hop_33_set.insert("2106897882");
      Hop_33.add_attribute("Snt", "HopSendingTime_t_118286230"); // 2
      Hop_33_set.insert("HopSendingTime_t_118286230");
      all_values.push_back(Hop_33_set);
      all_compo_names.insert("Hop_33_set");

      Hdr_33.add_element(Hop_33);
    }
    elt.add_element(Hdr_33);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_5{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_5_set;
    ApplSeqCtrl_5.add_attribute("ApplID", "ApplID_t_2069835764"); // 1
    ApplSeqCtrl_5_set.insert("ApplID_t_2069835764");
    ApplSeqCtrl_5.add_attribute("ApplSeqNum", "1517273247"); // 1
    ApplSeqCtrl_5_set.insert("1517273247");
    ApplSeqCtrl_5.add_attribute("ApplLastSeqNum", "1998456909"); // 1
    ApplSeqCtrl_5_set.insert("1998456909");
    ApplSeqCtrl_5.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_5_set.insert("true");
    all_values.push_back(ApplSeqCtrl_5_set);
    all_compo_names.insert("ApplSeqCtrl_5_set");

    elt.add_element(ApplSeqCtrl_5);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_28{"Instrmt"};
    multiset<string> Instrmt_28_set;
    Instrmt_28.add_attribute("Sym", "Symbol_t_599839879"); // 1
    Instrmt_28_set.insert("Symbol_t_599839879");
    Instrmt_28.add_attribute("Sfx", "CD"); // 1
    Instrmt_28_set.insert("CD");
    Instrmt_28.add_attribute("ID", "SecurityID_t_1752902508"); // 1
    Instrmt_28_set.insert("SecurityID_t_1752902508");
    Instrmt_28.add_attribute("Src", "K"); // 1
    Instrmt_28_set.insert("K");
    Instrmt_28.add_attribute("Prod", "7"); // 1
    Instrmt_28_set.insert("7");
    Instrmt_28.add_attribute("ProdCmplx", "ProductComplex_t_10639265"); // 1
    Instrmt_28_set.insert("ProductComplex_t_10639265");
    Instrmt_28.add_attribute("SecGrp", "SecurityGroup_t_177451866"); // 1
    Instrmt_28_set.insert("SecurityGroup_t_177451866");
    Instrmt_28.add_attribute("CFI", "CFICode_t_554808870"); // 1
    Instrmt_28_set.insert("CFICode_t_554808870");
    Instrmt_28.add_attribute("SecTyp", "TAN"); // 1
    Instrmt_28_set.insert("TAN");
    Instrmt_28.add_attribute("SubTyp", "SecuritySubType_t_1233344452"); // 1
    Instrmt_28_set.insert("SecuritySubType_t_1233344452");
    Instrmt_28.add_attribute("MMY", "1889840474"); // 1
    Instrmt_28_set.insert("1889840474");
    Instrmt_28.add_attribute("MatDt", "MaturityDate_t_1645197278"); // 1
    Instrmt_28_set.insert("MaturityDate_t_1645197278");
    Instrmt_28.add_attribute("MatTm", "501369279"); // 1
    Instrmt_28_set.insert("501369279");
    Instrmt_28.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_857549482"); // 1
    Instrmt_28_set.insert("SettleOnOpenFlag_t_857549482");
    Instrmt_28.add_attribute("AsgnMeth", "1707898458"); // 1
    Instrmt_28_set.insert("1707898458");
    Instrmt_28.add_attribute("Status", "1"); // 1
    Instrmt_28_set.insert("1");
    Instrmt_28.add_attribute("CpnPmt", "CouponPaymentDate_t_1636832584"); // 1
    Instrmt_28_set.insert("CouponPaymentDate_t_1636832584");
    Instrmt_28.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_28_set.insert("MR");
    Instrmt_28.add_attribute("Snrty", "SR"); // 1
    Instrmt_28_set.insert("SR");
    Instrmt_28.add_attribute("NotlPctOut", "7058271.180000"); // 1
    Instrmt_28_set.insert("7058271.180000");
    Instrmt_28.add_attribute("OrigNotlPctOut", "18950685.140000"); // 1
    Instrmt_28_set.insert("18950685.140000");
    Instrmt_28.add_attribute("AttchPnt", "4368784.980000"); // 1
    Instrmt_28_set.insert("4368784.980000");
    Instrmt_28.add_attribute("DetchPnt", "21027295.900000"); // 1
    Instrmt_28_set.insert("21027295.900000");
    Instrmt_28.add_attribute("Issued", "IssueDate_t_2008007353"); // 1
    Instrmt_28_set.insert("IssueDate_t_2008007353");
    Instrmt_28.add_attribute("RepoCollSecTyp", "1151291177"); // 1
    Instrmt_28_set.insert("1151291177");
    Instrmt_28.add_attribute("RepoTrm", "2062143825"); // 1
    Instrmt_28_set.insert("2062143825");
    Instrmt_28.add_attribute("RepoRt", "21262935.830000"); // 1
    Instrmt_28_set.insert("21262935.830000");
    Instrmt_28.add_attribute("Fctr", "10736432.930000"); // 1
    Instrmt_28_set.insert("10736432.930000");
    Instrmt_28.add_attribute("CrdRtg", "CreditRating_t_1431933424"); // 1
    Instrmt_28_set.insert("CreditRating_t_1431933424");
    Instrmt_28.add_attribute("Rgstry", "InstrRegistry_t_1977266844"); // 1
    Instrmt_28_set.insert("InstrRegistry_t_1977266844");
    Instrmt_28.add_attribute("IssuCtry", "1652830879"); // 1
    Instrmt_28_set.insert("1652830879");
    Instrmt_28.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2031773303"); // 1
    Instrmt_28_set.insert("StateOrProvinceOfIssue_t_2031773303");
    Instrmt_28.add_attribute("Lcl", "LocaleOfIssue_t_305967796"); // 1
    Instrmt_28_set.insert("LocaleOfIssue_t_305967796");
    Instrmt_28.add_attribute("Redeem", "RedemptionDate_t_1258249740"); // 1
    Instrmt_28_set.insert("RedemptionDate_t_1258249740");
    Instrmt_28.add_attribute("StrkPx", "8591410.250000"); // 1
    Instrmt_28_set.insert("8591410.250000");
    Instrmt_28.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_28_set.insert("CAN");
    Instrmt_28.add_attribute("StrkMult", "10365928.920000"); // 1
    Instrmt_28_set.insert("10365928.920000");
    Instrmt_28.add_attribute("StrkValu", "19060236.590000"); // 1
    Instrmt_28_set.insert("19060236.590000");
    Instrmt_28.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_28_set.insert("4");
    Instrmt_28.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_28_set.insert("2");
    Instrmt_28.add_attribute("StrkPxBndryPrcsn", "16483804.860000"); // 1
    Instrmt_28_set.insert("16483804.860000");
    Instrmt_28.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_28_set.insert("2");
    Instrmt_28.add_attribute("OptAt", "623822975"); // 1
    Instrmt_28_set.insert("623822975");
    Instrmt_28.add_attribute("Mult", "3584463.200000"); // 1
    Instrmt_28_set.insert("3584463.200000");
    Instrmt_28.add_attribute("MultTyp", "0"); // 1
    Instrmt_28_set.insert("0");
    Instrmt_28.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_28_set.insert("2");
    Instrmt_28.add_attribute("MinPxIncr", "19952789.050000"); // 1
    Instrmt_28_set.insert("19952789.050000");
    Instrmt_28.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_275783661"); // 1
    Instrmt_28_set.insert("MinPriceIncrementAmount_t_275783661");
    Instrmt_28.add_attribute("UOM", "tn"); // 1
    Instrmt_28_set.insert("tn");
    Instrmt_28.add_attribute("UOMQty", "5536223.750000"); // 1
    Instrmt_28_set.insert("5536223.750000");
    Instrmt_28.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_28_set.insert("MWh");
    Instrmt_28.add_attribute("PxUOMQty", "11980309.990000"); // 1
    Instrmt_28_set.insert("11980309.990000");
    Instrmt_28.add_attribute("SettlMeth", "P"); // 1
    Instrmt_28_set.insert("P");
    Instrmt_28.add_attribute("ExerStyle", "1"); // 1
    Instrmt_28_set.insert("1");
    Instrmt_28.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_28_set.insert("3");
    Instrmt_28.add_attribute("OptPayAmt", "OptPayoutAmount_t_423528494"); // 1
    Instrmt_28_set.insert("OptPayoutAmount_t_423528494");
    Instrmt_28.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_28_set.insert("PCTPAR");
    Instrmt_28.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_28_set.insert("FUTDA");
    Instrmt_28.add_attribute("ListMeth", "0"); // 1
    Instrmt_28_set.insert("0");
    Instrmt_28.add_attribute("CapPx", "18399690.120000"); // 1
    Instrmt_28_set.insert("18399690.120000");
    Instrmt_28.add_attribute("FlrPx", "7808290.540000"); // 1
    Instrmt_28_set.insert("7808290.540000");
    Instrmt_28.add_attribute("PutCall", "1"); // 1
    Instrmt_28_set.insert("1");
    Instrmt_28.add_attribute("FlexInd", "true"); // 1
    Instrmt_28_set.insert("true");
    Instrmt_28.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_28_set.insert("true");
    Instrmt_28.add_attribute("TmUnit", "S"); // 1
    Instrmt_28_set.insert("S");
    Instrmt_28.add_attribute("CpnRt", "13496679.490000"); // 1
    Instrmt_28_set.insert("13496679.490000");
    Instrmt_28.add_attribute("Exch", "SecurityExchange_t_1160484151"); // 1
    Instrmt_28_set.insert("SecurityExchange_t_1160484151");
    Instrmt_28.add_attribute("PosLmt", "1488001843"); // 1
    Instrmt_28_set.insert("1488001843");
    Instrmt_28.add_attribute("NTPosLmt", "1108207961"); // 1
    Instrmt_28_set.insert("1108207961");
    Instrmt_28.add_attribute("Issr", "Issuer_t_141409759"); // 1
    Instrmt_28_set.insert("Issuer_t_141409759");
    Instrmt_28.add_attribute("EncIssrLen", "1610455539"); // 1
    Instrmt_28_set.insert("1610455539");
    Instrmt_28.add_attribute("EncIssr", "EncodedIssuer_t_609104799"); // 1
    Instrmt_28_set.insert("EncodedIssuer_t_609104799");
    Instrmt_28.add_attribute("Desc", "SecurityDesc_t_767532644"); // 1
    Instrmt_28_set.insert("SecurityDesc_t_767532644");
    Instrmt_28.add_attribute("EncSecDescLen", "86794867"); // 1
    Instrmt_28_set.insert("86794867");
    Instrmt_28.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_967551119"); // 1
    Instrmt_28_set.insert("EncodedSecurityDesc_t_967551119");
    Instrmt_28.add_attribute("Pool", "Pool_t_954070340"); // 1
    Instrmt_28_set.insert("Pool_t_954070340");
    Instrmt_28.add_attribute("CSetMo", "1577829074"); // 1
    Instrmt_28_set.insert("1577829074");
    Instrmt_28.add_attribute("CPPgm", "2"); // 1
    Instrmt_28_set.insert("2");
    Instrmt_28.add_attribute("CPRegT", "CPRegType_t_1229854002"); // 1
    Instrmt_28_set.insert("CPRegType_t_1229854002");
    Instrmt_28.add_attribute("Dated", "DatedDate_t_191497927"); // 1
    Instrmt_28_set.insert("DatedDate_t_191497927");
    Instrmt_28.add_attribute("IntAcrl", "InterestAccrualDate_t_1368968751"); // 1
    Instrmt_28_set.insert("InterestAccrualDate_t_1368968751");
    all_values.push_back(Instrmt_28_set);
    all_compo_names.insert("Instrmt_28_set");

    {
      xml_element AID_31{"AID"};
      multiset<string> AID_31_set;
      AID_31.add_attribute("AltID", "SecurityAltID_t_1253222529"); // 2
      AID_31_set.insert("SecurityAltID_t_1253222529");
      AID_31.add_attribute("AltIDSrc", "I"); // 2
      AID_31_set.insert("I");
      all_values.push_back(AID_31_set);
      all_compo_names.insert("AID_31_set");

      Instrmt_28.add_element(AID_31);
    }
    {
      xml_element SecXML_31{"SecXML"};
      multiset<string> SecXML_31_set;
      SecXML_31.add_attribute("Schema", "SecurityXMLSchema_t_1877837069"); // 2
      SecXML_31_set.insert("SecurityXMLSchema_t_1877837069");
      all_values.push_back(SecXML_31_set);
      all_compo_names.insert("SecXML_31_set");

      Instrmt_28.add_element(SecXML_31);
    }
    {
      xml_element Evnt_31{"Evnt"};
      multiset<string> Evnt_31_set;
      Evnt_31.add_attribute("EventTyp", "3"); // 2
      Evnt_31_set.insert("3");
      Evnt_31.add_attribute("Dt", "EventDate_t_1591367456"); // 2
      Evnt_31_set.insert("EventDate_t_1591367456");
      Evnt_31.add_attribute("Tm", "EventTime_t_153881915"); // 2
      Evnt_31_set.insert("EventTime_t_153881915");
      Evnt_31.add_attribute("Px", "9998169.290000"); // 2
      Evnt_31_set.insert("9998169.290000");
      Evnt_31.add_attribute("Txt", "EventText_t_719365630"); // 2
      Evnt_31_set.insert("EventText_t_719365630");
      all_values.push_back(Evnt_31_set);
      all_compo_names.insert("Evnt_31_set");

      Instrmt_28.add_element(Evnt_31);
    }
    {
      xml_element Pty_171{"Pty"};
      multiset<string> Pty_171_set;
      Pty_171.add_attribute("ID", "InstrumentPartyID_t_2009343834"); // 2
      Pty_171_set.insert("InstrumentPartyID_t_2009343834");
      Pty_171.add_attribute("Src", "A"); // 2
      Pty_171_set.insert("A");
      Pty_171.add_attribute("R", "47"); // 2
      Pty_171_set.insert("47");
      all_values.push_back(Pty_171_set);
      all_compo_names.insert("Pty_171_set");

      {
        xml_element Sub_171{"Sub"};
        multiset<string> Sub_171_set;
        Sub_171.add_attribute("ID", "InstrumentPartySubID_t_1601611759"); // 3
        Sub_171_set.insert("InstrumentPartySubID_t_1601611759");
        Sub_171.add_attribute("Typ", "23"); // 3
        Sub_171_set.insert("23");
        all_values.push_back(Sub_171_set);
        all_compo_names.insert("Sub_171_set");

        Pty_171.add_element(Sub_171);
      }
      Instrmt_28.add_element(Pty_171);
    }
    {
      xml_element CmplxEvnt_28{"CmplxEvnt"};
      multiset<string> CmplxEvnt_28_set;
      CmplxEvnt_28.add_attribute("Typ", "5"); // 2
      CmplxEvnt_28_set.insert("5");
      CmplxEvnt_28.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2053020710"); // 2
      CmplxEvnt_28_set.insert("ComplexOptPayoutAmount_t_2053020710");
      CmplxEvnt_28.add_attribute("Px", "20404234.030000"); // 2
      CmplxEvnt_28_set.insert("20404234.030000");
      CmplxEvnt_28.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_28_set.insert("5");
      CmplxEvnt_28.add_attribute("PxBndryPrcsn", "13935389.050000"); // 2
      CmplxEvnt_28_set.insert("13935389.050000");
      CmplxEvnt_28.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_28_set.insert("2");
      CmplxEvnt_28.add_attribute("Cond", "2"); // 2
      CmplxEvnt_28_set.insert("2");
      all_values.push_back(CmplxEvnt_28_set);
      all_compo_names.insert("CmplxEvnt_28_set");

      {
        xml_element EvntDts_28{"EvntDts"};
        multiset<string> EvntDts_28_set;
        EvntDts_28.add_attribute("StartDt", "ComplexEventStartDate_t_856510797"); // 3
        EvntDts_28_set.insert("ComplexEventStartDate_t_856510797");
        EvntDts_28.add_attribute("EndDt", "ComplexEventEndDate_t_1610252515"); // 3
        EvntDts_28_set.insert("ComplexEventEndDate_t_1610252515");
        all_values.push_back(EvntDts_28_set);
        all_compo_names.insert("EvntDts_28_set");

        {
          xml_element EvntTms_28{"EvntTms"};
          multiset<string> EvntTms_28_set;
          EvntTms_28.add_attribute("StartTm", "1313732737"); // 4
          EvntTms_28_set.insert("1313732737");
          EvntTms_28.add_attribute("EndTm", "943305664"); // 4
          EvntTms_28_set.insert("943305664");
          all_values.push_back(EvntTms_28_set);
          all_compo_names.insert("EvntTms_28_set");

          EvntDts_28.add_element(EvntTms_28);
        }
        CmplxEvnt_28.add_element(EvntDts_28);
      }
      Instrmt_28.add_element(CmplxEvnt_28);
    }
    elt.add_element(Instrmt_28);
  } // end Instrmt
  { // Pty
    xml_element Pty_172{"Pty"};
    multiset<string> Pty_172_set;
    Pty_172.add_attribute("ID", "PartyID_t_120319430"); // 1
    Pty_172_set.insert("PartyID_t_120319430");
    Pty_172.add_attribute("Src", "H"); // 1
    Pty_172_set.insert("H");
    Pty_172.add_attribute("R", "42"); // 1
    Pty_172_set.insert("42");
    all_values.push_back(Pty_172_set);
    all_compo_names.insert("Pty_172_set");

    {
      xml_element Sub_172{"Sub"};
      multiset<string> Sub_172_set;
      Sub_172.add_attribute("ID", "PartySubID_t_1350173432"); // 2
      Sub_172_set.insert("PartySubID_t_1350173432");
      Sub_172.add_attribute("Typ", "28"); // 2
      Sub_172_set.insert("28");
      all_values.push_back(Sub_172_set);
      all_compo_names.insert("Sub_172_set");

      Pty_172.add_element(Sub_172);
    }
    elt.add_element(Pty_172);
  } // end Pty
  { // Pty
    xml_element Pty_173{"Pty"};
    multiset<string> Pty_173_set;
    Pty_173.add_attribute("ID", "PartyID_t_467151467"); // 1
    Pty_173_set.insert("PartyID_t_467151467");
    Pty_173.add_attribute("Src", "G"); // 1
    Pty_173_set.insert("G");
    Pty_173.add_attribute("R", "48"); // 1
    Pty_173_set.insert("48");
    all_values.push_back(Pty_173_set);
    all_compo_names.insert("Pty_173_set");

    {
      xml_element Sub_173{"Sub"};
      multiset<string> Sub_173_set;
      Sub_173.add_attribute("ID", "PartySubID_t_197504888"); // 2
      Sub_173_set.insert("PartySubID_t_197504888");
      Sub_173.add_attribute("Typ", "8"); // 2
      Sub_173_set.insert("8");
      all_values.push_back(Sub_173_set);
      all_compo_names.insert("Sub_173_set");

      Pty_173.add_element(Sub_173);
    }
    elt.add_element(Pty_173);
  } // end Pty
  { // Pty
    xml_element Pty_174{"Pty"};
    multiset<string> Pty_174_set;
    Pty_174.add_attribute("ID", "PartyID_t_1398561753"); // 1
    Pty_174_set.insert("PartyID_t_1398561753");
    Pty_174.add_attribute("Src", "2"); // 1
    Pty_174_set.insert("2");
    Pty_174.add_attribute("R", "10"); // 1
    Pty_174_set.insert("10");
    all_values.push_back(Pty_174_set);
    all_compo_names.insert("Pty_174_set");

    {
      xml_element Sub_174{"Sub"};
      multiset<string> Sub_174_set;
      Sub_174.add_attribute("ID", "PartySubID_t_2117927383"); // 2
      Sub_174_set.insert("PartySubID_t_2117927383");
      Sub_174.add_attribute("Typ", "33"); // 2
      Sub_174_set.insert("33");
      all_values.push_back(Sub_174_set);
      all_compo_names.insert("Sub_174_set");

      Pty_174.add_element(Sub_174);
    }
    elt.add_element(Pty_174);
  } // end Pty
  { // FinDetls
    xml_element FinDetls_11{"FinDetls"};
    multiset<string> FinDetls_11_set;
    FinDetls_11.add_attribute("AgmtDesc", "AgreementDesc_t_1137662650"); // 1
    FinDetls_11_set.insert("AgreementDesc_t_1137662650");
    FinDetls_11.add_attribute("AgmtID", "AgreementID_t_1470638420"); // 1
    FinDetls_11_set.insert("AgreementID_t_1470638420");
    FinDetls_11.add_attribute("AgmtDt", "AgreementDate_t_1814858749"); // 1
    FinDetls_11_set.insert("AgreementDate_t_1814858749");
    FinDetls_11.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_11_set.insert("JPY");
    FinDetls_11.add_attribute("TrmTyp", "4"); // 1
    FinDetls_11_set.insert("4");
    FinDetls_11.add_attribute("StartDt", "StartDate_t_1721357860"); // 1
    FinDetls_11_set.insert("StartDate_t_1721357860");
    FinDetls_11.add_attribute("EndDt", "EndDate_t_1119734936"); // 1
    FinDetls_11_set.insert("EndDate_t_1119734936");
    FinDetls_11.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_11_set.insert("1");
    FinDetls_11.add_attribute("MgnRatio", "5750219.280000"); // 1
    FinDetls_11_set.insert("5750219.280000");
    all_values.push_back(FinDetls_11_set);
    all_compo_names.insert("FinDetls_11_set");

    elt.add_element(FinDetls_11);
  } // end FinDetls
  { // Undly
    xml_element Undly_40{"Undly"};
    multiset<string> Undly_40_set;
    Undly_40.add_attribute("Sym", "UnderlyingSymbol_t_1822961866"); // 1
    Undly_40_set.insert("UnderlyingSymbol_t_1822961866");
    Undly_40.add_attribute("Sfx", "CD"); // 1
    Undly_40_set.insert("CD");
    Undly_40.add_attribute("ID", "UnderlyingSecurityID_t_832184119"); // 1
    Undly_40_set.insert("UnderlyingSecurityID_t_832184119");
    Undly_40.add_attribute("Src", "3"); // 1
    Undly_40_set.insert("3");
    Undly_40.add_attribute("Prod", "7"); // 1
    Undly_40_set.insert("7");
    Undly_40.add_attribute("CFI", "UnderlyingCFICode_t_952503549"); // 1
    Undly_40_set.insert("UnderlyingCFICode_t_952503549");
    Undly_40.add_attribute("SecTyp", "CAMM"); // 1
    Undly_40_set.insert("CAMM");
    Undly_40.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1713777146"); // 1
    Undly_40_set.insert("UnderlyingSecuritySubType_t_1713777146");
    Undly_40.add_attribute("MMY", "155193333"); // 1
    Undly_40_set.insert("155193333");
    Undly_40.add_attribute("Mat", "UnderlyingMaturityDate_t_1557583990"); // 1
    Undly_40_set.insert("UnderlyingMaturityDate_t_1557583990");
    Undly_40.add_attribute("MatTm", "33444965"); // 1
    Undly_40_set.insert("33444965");
    Undly_40.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_611105646"); // 1
    Undly_40_set.insert("UnderlyingCouponPaymentDate_t_611105646");
    Undly_40.add_attribute("RestrctTyp", "XR"); // 1
    Undly_40_set.insert("XR");
    Undly_40.add_attribute("Snrty", "SR"); // 1
    Undly_40_set.insert("SR");
    Undly_40.add_attribute("NotlPctOut", "566490.740000"); // 1
    Undly_40_set.insert("566490.740000");
    Undly_40.add_attribute("OrigNotlPctOut", "6158563.920000"); // 1
    Undly_40_set.insert("6158563.920000");
    Undly_40.add_attribute("AttchPnt", "5823366.570000"); // 1
    Undly_40_set.insert("5823366.570000");
    Undly_40.add_attribute("DetchPnt", "5020094.310000"); // 1
    Undly_40_set.insert("5020094.310000");
    Undly_40.add_attribute("Issued", "UnderlyingIssueDate_t_586300128"); // 1
    Undly_40_set.insert("UnderlyingIssueDate_t_586300128");
    Undly_40.add_attribute("RepoCollSecTyp", "795583646"); // 1
    Undly_40_set.insert("795583646");
    Undly_40.add_attribute("RepoTrm", "1639672081"); // 1
    Undly_40_set.insert("1639672081");
    Undly_40.add_attribute("RepoRt", "20569385.480000"); // 1
    Undly_40_set.insert("20569385.480000");
    Undly_40.add_attribute("Fctr", "4629587.470000"); // 1
    Undly_40_set.insert("4629587.470000");
    Undly_40.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1320606538"); // 1
    Undly_40_set.insert("UnderlyingCreditRating_t_1320606538");
    Undly_40.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_624399502"); // 1
    Undly_40_set.insert("UnderlyingInstrRegistry_t_624399502");
    Undly_40.add_attribute("Ctry", "35870911"); // 1
    Undly_40_set.insert("35870911");
    Undly_40.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_894480750"); // 1
    Undly_40_set.insert("UnderlyingStateOrProvinceOfIssue_t_894480750");
    Undly_40.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1744134439"); // 1
    Undly_40_set.insert("UnderlyingLocaleOfIssue_t_1744134439");
    Undly_40.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1002321980"); // 1
    Undly_40_set.insert("UnderlyingRedemptionDate_t_1002321980");
    Undly_40.add_attribute("StrkPx", "14695026.780000"); // 1
    Undly_40_set.insert("14695026.780000");
    Undly_40.add_attribute("StrkCcy", "JPY"); // 1
    Undly_40_set.insert("JPY");
    Undly_40.add_attribute("OptA", "1507293474"); // 1
    Undly_40_set.insert("1507293474");
    Undly_40.add_attribute("Mult", "20947699.390000"); // 1
    Undly_40_set.insert("20947699.390000");
    Undly_40.add_attribute("MultTyp", "1"); // 1
    Undly_40_set.insert("1");
    Undly_40.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_40_set.insert("2");
    Undly_40.add_attribute("UOM", "MMBtu"); // 1
    Undly_40_set.insert("MMBtu");
    Undly_40.add_attribute("UOMQty", "1415354.040000"); // 1
    Undly_40_set.insert("1415354.040000");
    Undly_40.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_40_set.insert("MMBtu");
    Undly_40.add_attribute("PxUOMQty", "10549831.730000"); // 1
    Undly_40_set.insert("10549831.730000");
    Undly_40.add_attribute("TmUnit", "Min"); // 1
    Undly_40_set.insert("Min");
    Undly_40.add_attribute("ExerStyle", "2"); // 1
    Undly_40_set.insert("2");
    Undly_40.add_attribute("CpnRt", "16660888.200000"); // 1
    Undly_40_set.insert("16660888.200000");
    Undly_40.add_attribute("Exch", "UnderlyingSecurityExchange_t_916414034"); // 1
    Undly_40_set.insert("UnderlyingSecurityExchange_t_916414034");
    Undly_40.add_attribute("Issr", "UnderlyingIssuer_t_1806092575"); // 1
    Undly_40_set.insert("UnderlyingIssuer_t_1806092575");
    Undly_40.add_attribute("EncUndIssrLen", "1722737894"); // 1
    Undly_40_set.insert("1722737894");
    Undly_40.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1532270427"); // 1
    Undly_40_set.insert("EncodedUnderlyingIssuer_t_1532270427");
    Undly_40.add_attribute("Desc", "UnderlyingSecurityDesc_t_240945584"); // 1
    Undly_40_set.insert("UnderlyingSecurityDesc_t_240945584");
    Undly_40.add_attribute("EncUndSecDescLen", "77263677"); // 1
    Undly_40_set.insert("77263677");
    Undly_40.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2118570555"); // 1
    Undly_40_set.insert("EncodedUnderlyingSecurityDesc_t_2118570555");
    Undly_40.add_attribute("CPPgm", "UnderlyingCPProgram_t_1036529230"); // 1
    Undly_40_set.insert("UnderlyingCPProgram_t_1036529230");
    Undly_40.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1716935758"); // 1
    Undly_40_set.insert("UnderlyingCPRegType_t_1716935758");
    Undly_40.add_attribute("AllocPct", "20280254.550000"); // 1
    Undly_40_set.insert("20280254.550000");
    Undly_40.add_attribute("Ccy", "USD"); // 1
    Undly_40_set.insert("USD");
    Undly_40.add_attribute("Qty", "5049413.090000"); // 1
    Undly_40_set.insert("5049413.090000");
    Undly_40.add_attribute("SettlTyp", "4"); // 1
    Undly_40_set.insert("4");
    Undly_40.add_attribute("CashAmt", "UnderlyingCashAmount_t_1784539398"); // 1
    Undly_40_set.insert("UnderlyingCashAmount_t_1784539398");
    Undly_40.add_attribute("CashTyp", "FIXED"); // 1
    Undly_40_set.insert("FIXED");
    Undly_40.add_attribute("Px", "3901972.210000"); // 1
    Undly_40_set.insert("3901972.210000");
    Undly_40.add_attribute("DirtPx", "11065584.290000"); // 1
    Undly_40_set.insert("11065584.290000");
    Undly_40.add_attribute("EndPx", "13641779.210000"); // 1
    Undly_40_set.insert("13641779.210000");
    Undly_40.add_attribute("StartVal", "UnderlyingStartValue_t_1067997419"); // 1
    Undly_40_set.insert("UnderlyingStartValue_t_1067997419");
    Undly_40.add_attribute("CurVal", "UnderlyingCurrentValue_t_466368255"); // 1
    Undly_40_set.insert("UnderlyingCurrentValue_t_466368255");
    Undly_40.add_attribute("EndVal", "UnderlyingEndValue_t_1311464212"); // 1
    Undly_40_set.insert("UnderlyingEndValue_t_1311464212");
    Undly_40.add_attribute("AdjQty", "2170978.510000"); // 1
    Undly_40_set.insert("2170978.510000");
    Undly_40.add_attribute("FxRate", "2942888.650000"); // 1
    Undly_40_set.insert("2942888.650000");
    Undly_40.add_attribute("FxRateCalc", "D"); // 1
    Undly_40_set.insert("D");
    Undly_40.add_attribute("CapValu", "UnderlyingCapValue_t_358633255"); // 1
    Undly_40_set.insert("UnderlyingCapValue_t_358633255");
    Undly_40.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1835986621"); // 1
    Undly_40_set.insert("UnderlyingSettlMethod_t_1835986621");
    Undly_40.add_attribute("PutCall", "1118753578"); // 1
    Undly_40_set.insert("1118753578");
    all_values.push_back(Undly_40_set);
    all_compo_names.insert("Undly_40_set");

    {
      xml_element UndAID_40{"UndAID"};
      multiset<string> UndAID_40_set;
      UndAID_40.add_attribute("AltID", "UnderlyingSecurityAltID_t_2057752650"); // 2
      UndAID_40_set.insert("UnderlyingSecurityAltID_t_2057752650");
      UndAID_40.add_attribute("AltIDSrc", "F"); // 2
      UndAID_40_set.insert("F");
      all_values.push_back(UndAID_40_set);
      all_compo_names.insert("UndAID_40_set");

      Undly_40.add_element(UndAID_40);
    }
    {
      xml_element Stip_61{"Stip"};
      multiset<string> Stip_61_set;
      Stip_61.add_attribute("Typ", "PIECES"); // 2
      Stip_61_set.insert("PIECES");
      Stip_61.add_attribute("Val", "UnderlyingStipValue_t_826683037"); // 2
      Stip_61_set.insert("UnderlyingStipValue_t_826683037");
      all_values.push_back(Stip_61_set);
      all_compo_names.insert("Stip_61_set");

      Undly_40.add_element(Stip_61);
    }
    {
      xml_element Pty_175{"Pty"};
      multiset<string> Pty_175_set;
      Pty_175.add_attribute("ID", "UnderlyingInstrumentPartyID_t_922254621"); // 2
      Pty_175_set.insert("UnderlyingInstrumentPartyID_t_922254621");
      Pty_175.add_attribute("Src", "3"); // 2
      Pty_175_set.insert("3");
      Pty_175.add_attribute("R", "70"); // 2
      Pty_175_set.insert("70");
      all_values.push_back(Pty_175_set);
      all_compo_names.insert("Pty_175_set");

      {
        xml_element Sub_175{"Sub"};
        multiset<string> Sub_175_set;
        Sub_175.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1163200205"); // 3
        Sub_175_set.insert("UnderlyingInstrumentPartySubID_t_1163200205");
        Sub_175.add_attribute("Typ", "4"); // 3
        Sub_175_set.insert("4");
        all_values.push_back(Sub_175_set);
        all_compo_names.insert("Sub_175_set");

        Pty_175.add_element(Sub_175);
      }
      Undly_40.add_element(Pty_175);
    }
    elt.add_element(Undly_40);
  } // end Undly
  { // Undly
    xml_element Undly_41{"Undly"};
    multiset<string> Undly_41_set;
    Undly_41.add_attribute("Sym", "UnderlyingSymbol_t_182556723"); // 1
    Undly_41_set.insert("UnderlyingSymbol_t_182556723");
    Undly_41.add_attribute("Sfx", "CD"); // 1
    Undly_41_set.insert("CD");
    Undly_41.add_attribute("ID", "UnderlyingSecurityID_t_2006812432"); // 1
    Undly_41_set.insert("UnderlyingSecurityID_t_2006812432");
    Undly_41.add_attribute("Src", "1"); // 1
    Undly_41_set.insert("1");
    Undly_41.add_attribute("Prod", "8"); // 1
    Undly_41_set.insert("8");
    Undly_41.add_attribute("CFI", "UnderlyingCFICode_t_749387432"); // 1
    Undly_41_set.insert("UnderlyingCFICode_t_749387432");
    Undly_41.add_attribute("SecTyp", "TB"); // 1
    Undly_41_set.insert("TB");
    Undly_41.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_939609007"); // 1
    Undly_41_set.insert("UnderlyingSecuritySubType_t_939609007");
    Undly_41.add_attribute("MMY", "386443183"); // 1
    Undly_41_set.insert("386443183");
    Undly_41.add_attribute("Mat", "UnderlyingMaturityDate_t_669631940"); // 1
    Undly_41_set.insert("UnderlyingMaturityDate_t_669631940");
    Undly_41.add_attribute("MatTm", "1329806228"); // 1
    Undly_41_set.insert("1329806228");
    Undly_41.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1493001612"); // 1
    Undly_41_set.insert("UnderlyingCouponPaymentDate_t_1493001612");
    Undly_41.add_attribute("RestrctTyp", "MR"); // 1
    Undly_41_set.insert("MR");
    Undly_41.add_attribute("Snrty", "SB"); // 1
    Undly_41_set.insert("SB");
    Undly_41.add_attribute("NotlPctOut", "19593698.670000"); // 1
    Undly_41_set.insert("19593698.670000");
    Undly_41.add_attribute("OrigNotlPctOut", "11977904.250000"); // 1
    Undly_41_set.insert("11977904.250000");
    Undly_41.add_attribute("AttchPnt", "4674178.500000"); // 1
    Undly_41_set.insert("4674178.500000");
    Undly_41.add_attribute("DetchPnt", "1061750.840000"); // 1
    Undly_41_set.insert("1061750.840000");
    Undly_41.add_attribute("Issued", "UnderlyingIssueDate_t_1261560830"); // 1
    Undly_41_set.insert("UnderlyingIssueDate_t_1261560830");
    Undly_41.add_attribute("RepoCollSecTyp", "826051105"); // 1
    Undly_41_set.insert("826051105");
    Undly_41.add_attribute("RepoTrm", "1942161705"); // 1
    Undly_41_set.insert("1942161705");
    Undly_41.add_attribute("RepoRt", "2328307.610000"); // 1
    Undly_41_set.insert("2328307.610000");
    Undly_41.add_attribute("Fctr", "7363201.080000"); // 1
    Undly_41_set.insert("7363201.080000");
    Undly_41.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1058323752"); // 1
    Undly_41_set.insert("UnderlyingCreditRating_t_1058323752");
    Undly_41.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_870189511"); // 1
    Undly_41_set.insert("UnderlyingInstrRegistry_t_870189511");
    Undly_41.add_attribute("Ctry", "1563003145"); // 1
    Undly_41_set.insert("1563003145");
    Undly_41.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1980578373"); // 1
    Undly_41_set.insert("UnderlyingStateOrProvinceOfIssue_t_1980578373");
    Undly_41.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1082802508"); // 1
    Undly_41_set.insert("UnderlyingLocaleOfIssue_t_1082802508");
    Undly_41.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1774472961"); // 1
    Undly_41_set.insert("UnderlyingRedemptionDate_t_1774472961");
    Undly_41.add_attribute("StrkPx", "9962949.310000"); // 1
    Undly_41_set.insert("9962949.310000");
    Undly_41.add_attribute("StrkCcy", "USD"); // 1
    Undly_41_set.insert("USD");
    Undly_41.add_attribute("OptA", "1048540719"); // 1
    Undly_41_set.insert("1048540719");
    Undly_41.add_attribute("Mult", "12320079.650000"); // 1
    Undly_41_set.insert("12320079.650000");
    Undly_41.add_attribute("MultTyp", "1"); // 1
    Undly_41_set.insert("1");
    Undly_41.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_41_set.insert("2");
    Undly_41.add_attribute("UOM", "oz_tr"); // 1
    Undly_41_set.insert("oz_tr");
    Undly_41.add_attribute("UOMQty", "4406844.050000"); // 1
    Undly_41_set.insert("4406844.050000");
    Undly_41.add_attribute("PxUOM", "t"); // 1
    Undly_41_set.insert("t");
    Undly_41.add_attribute("PxUOMQty", "2203549.330000"); // 1
    Undly_41_set.insert("2203549.330000");
    Undly_41.add_attribute("TmUnit", "Mo"); // 1
    Undly_41_set.insert("Mo");
    Undly_41.add_attribute("ExerStyle", "1"); // 1
    Undly_41_set.insert("1");
    Undly_41.add_attribute("CpnRt", "17133565.450000"); // 1
    Undly_41_set.insert("17133565.450000");
    Undly_41.add_attribute("Exch", "UnderlyingSecurityExchange_t_996642558"); // 1
    Undly_41_set.insert("UnderlyingSecurityExchange_t_996642558");
    Undly_41.add_attribute("Issr", "UnderlyingIssuer_t_825042423"); // 1
    Undly_41_set.insert("UnderlyingIssuer_t_825042423");
    Undly_41.add_attribute("EncUndIssrLen", "1525242764"); // 1
    Undly_41_set.insert("1525242764");
    Undly_41.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_46949336"); // 1
    Undly_41_set.insert("EncodedUnderlyingIssuer_t_46949336");
    Undly_41.add_attribute("Desc", "UnderlyingSecurityDesc_t_1292460273"); // 1
    Undly_41_set.insert("UnderlyingSecurityDesc_t_1292460273");
    Undly_41.add_attribute("EncUndSecDescLen", "1631417849"); // 1
    Undly_41_set.insert("1631417849");
    Undly_41.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1308510166"); // 1
    Undly_41_set.insert("EncodedUnderlyingSecurityDesc_t_1308510166");
    Undly_41.add_attribute("CPPgm", "UnderlyingCPProgram_t_2118511378"); // 1
    Undly_41_set.insert("UnderlyingCPProgram_t_2118511378");
    Undly_41.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1426095906"); // 1
    Undly_41_set.insert("UnderlyingCPRegType_t_1426095906");
    Undly_41.add_attribute("AllocPct", "15413409.270000"); // 1
    Undly_41_set.insert("15413409.270000");
    Undly_41.add_attribute("Ccy", "JPY"); // 1
    Undly_41_set.insert("JPY");
    Undly_41.add_attribute("Qty", "2640467.910000"); // 1
    Undly_41_set.insert("2640467.910000");
    Undly_41.add_attribute("SettlTyp", "4"); // 1
    Undly_41_set.insert("4");
    Undly_41.add_attribute("CashAmt", "UnderlyingCashAmount_t_170030736"); // 1
    Undly_41_set.insert("UnderlyingCashAmount_t_170030736");
    Undly_41.add_attribute("CashTyp", "DIFF"); // 1
    Undly_41_set.insert("DIFF");
    Undly_41.add_attribute("Px", "18973402.960000"); // 1
    Undly_41_set.insert("18973402.960000");
    Undly_41.add_attribute("DirtPx", "11663256.670000"); // 1
    Undly_41_set.insert("11663256.670000");
    Undly_41.add_attribute("EndPx", "5720448.320000"); // 1
    Undly_41_set.insert("5720448.320000");
    Undly_41.add_attribute("StartVal", "UnderlyingStartValue_t_1706886332"); // 1
    Undly_41_set.insert("UnderlyingStartValue_t_1706886332");
    Undly_41.add_attribute("CurVal", "UnderlyingCurrentValue_t_67382738"); // 1
    Undly_41_set.insert("UnderlyingCurrentValue_t_67382738");
    Undly_41.add_attribute("EndVal", "UnderlyingEndValue_t_1804052798"); // 1
    Undly_41_set.insert("UnderlyingEndValue_t_1804052798");
    Undly_41.add_attribute("AdjQty", "15795308.980000"); // 1
    Undly_41_set.insert("15795308.980000");
    Undly_41.add_attribute("FxRate", "5201735.750000"); // 1
    Undly_41_set.insert("5201735.750000");
    Undly_41.add_attribute("FxRateCalc", "M"); // 1
    Undly_41_set.insert("M");
    Undly_41.add_attribute("CapValu", "UnderlyingCapValue_t_2020215304"); // 1
    Undly_41_set.insert("UnderlyingCapValue_t_2020215304");
    Undly_41.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1912573419"); // 1
    Undly_41_set.insert("UnderlyingSettlMethod_t_1912573419");
    Undly_41.add_attribute("PutCall", "1858319481"); // 1
    Undly_41_set.insert("1858319481");
    all_values.push_back(Undly_41_set);
    all_compo_names.insert("Undly_41_set");

    {
      xml_element UndAID_41{"UndAID"};
      multiset<string> UndAID_41_set;
      UndAID_41.add_attribute("AltID", "UnderlyingSecurityAltID_t_983048001"); // 2
      UndAID_41_set.insert("UnderlyingSecurityAltID_t_983048001");
      UndAID_41.add_attribute("AltIDSrc", "L"); // 2
      UndAID_41_set.insert("L");
      all_values.push_back(UndAID_41_set);
      all_compo_names.insert("UndAID_41_set");

      Undly_41.add_element(UndAID_41);
    }
    {
      xml_element Stip_62{"Stip"};
      multiset<string> Stip_62_set;
      Stip_62.add_attribute("Typ", "WHOLE"); // 2
      Stip_62_set.insert("WHOLE");
      Stip_62.add_attribute("Val", "UnderlyingStipValue_t_1979690560"); // 2
      Stip_62_set.insert("UnderlyingStipValue_t_1979690560");
      all_values.push_back(Stip_62_set);
      all_compo_names.insert("Stip_62_set");

      Undly_41.add_element(Stip_62);
    }
    {
      xml_element Pty_176{"Pty"};
      multiset<string> Pty_176_set;
      Pty_176.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1164854618"); // 2
      Pty_176_set.insert("UnderlyingInstrumentPartyID_t_1164854618");
      Pty_176.add_attribute("Src", "F"); // 2
      Pty_176_set.insert("F");
      Pty_176.add_attribute("R", "9"); // 2
      Pty_176_set.insert("9");
      all_values.push_back(Pty_176_set);
      all_compo_names.insert("Pty_176_set");

      {
        xml_element Sub_176{"Sub"};
        multiset<string> Sub_176_set;
        Sub_176.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_309831243"); // 3
        Sub_176_set.insert("UnderlyingInstrumentPartySubID_t_309831243");
        Sub_176.add_attribute("Typ", "30"); // 3
        Sub_176_set.insert("30");
        all_values.push_back(Sub_176_set);
        all_compo_names.insert("Sub_176_set");

        Pty_176.add_element(Sub_176);
      }
      Undly_41.add_element(Pty_176);
    }
    elt.add_element(Undly_41);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_9{"OrdQty"};
    multiset<string> OrdQty_9_set;
    OrdQty_9.add_attribute("Qty", "11876664.140000"); // 1
    OrdQty_9_set.insert("11876664.140000");
    OrdQty_9.add_attribute("Cash", "2808589.730000"); // 1
    OrdQty_9_set.insert("2808589.730000");
    OrdQty_9.add_attribute("Pct", "17119816.020000"); // 1
    OrdQty_9_set.insert("17119816.020000");
    OrdQty_9.add_attribute("RndDir", "1"); // 1
    OrdQty_9_set.insert("1");
    OrdQty_9.add_attribute("RndMod", "9882068.120000"); // 1
    OrdQty_9_set.insert("9882068.120000");
    all_values.push_back(OrdQty_9_set);
    all_compo_names.insert("OrdQty_9_set");

    elt.add_element(OrdQty_9);
  } // end OrdQty
  { // Stip
    xml_element Stip_63{"Stip"};
    multiset<string> Stip_63_set;
    Stip_63.add_attribute("Typ", "COUPON"); // 1
    Stip_63_set.insert("COUPON");
    Stip_63.add_attribute("Val", "StipulationValue_t_1111074147"); // 1
    Stip_63_set.insert("StipulationValue_t_1111074147");
    all_values.push_back(Stip_63_set);
    all_compo_names.insert("Stip_63_set");

    elt.add_element(Stip_63);
  } // end Stip
  { // Stip
    xml_element Stip_64{"Stip"};
    multiset<string> Stip_64_set;
    Stip_64.add_attribute("Typ", "AVFICO"); // 1
    Stip_64_set.insert("AVFICO");
    Stip_64.add_attribute("Val", "StipulationValue_t_44936136"); // 1
    Stip_64_set.insert("StipulationValue_t_44936136");
    all_values.push_back(Stip_64_set);
    all_compo_names.insert("Stip_64_set");

    elt.add_element(Stip_64);
  } // end Stip
  { // IOI
    xml_element IOI_0{"IOI"};
    multiset<string> IOI_0_set;
    IOI_0.add_attribute("IOIQty", "M"); // 1
    IOI_0_set.insert("M");
    all_values.push_back(IOI_0_set);
    all_compo_names.insert("IOI_0_set");

    {
      xml_element Leg_40{"Leg"};
      multiset<string> Leg_40_set;
      Leg_40.add_attribute("Sym", "LegSymbol_t_616980968"); // 2
      Leg_40_set.insert("LegSymbol_t_616980968");
      Leg_40.add_attribute("Sfx", "CD"); // 2
      Leg_40_set.insert("CD");
      Leg_40.add_attribute("ID", "LegSecurityID_t_1305173105"); // 2
      Leg_40_set.insert("LegSecurityID_t_1305173105");
      Leg_40.add_attribute("Src", "7"); // 2
      Leg_40_set.insert("7");
      Leg_40.add_attribute("Prod", "3"); // 2
      Leg_40_set.insert("3");
      Leg_40.add_attribute("CFI", "LegCFICode_t_1825346680"); // 2
      Leg_40_set.insert("LegCFICode_t_1825346680");
      Leg_40.add_attribute("SecTyp", "CASH"); // 2
      Leg_40_set.insert("CASH");
      Leg_40.add_attribute("SecSubTyp", "LegSecuritySubType_t_1872596035"); // 2
      Leg_40_set.insert("LegSecuritySubType_t_1872596035");
      Leg_40.add_attribute("MMY", "1590436451"); // 2
      Leg_40_set.insert("1590436451");
      Leg_40.add_attribute("Mat", "LegMaturityDate_t_1622350499"); // 2
      Leg_40_set.insert("LegMaturityDate_t_1622350499");
      Leg_40.add_attribute("MatTm", "708160388"); // 2
      Leg_40_set.insert("708160388");
      Leg_40.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1930248646"); // 2
      Leg_40_set.insert("LegCouponPaymentDate_t_1930248646");
      Leg_40.add_attribute("Issued", "LegIssueDate_t_899059229"); // 2
      Leg_40_set.insert("LegIssueDate_t_899059229");
      Leg_40.add_attribute("RepoCollSecTyp", "540367300"); // 2
      Leg_40_set.insert("540367300");
      Leg_40.add_attribute("RepoTrm", "947619616"); // 2
      Leg_40_set.insert("947619616");
      Leg_40.add_attribute("RepoRt", "17010107.240000"); // 2
      Leg_40_set.insert("17010107.240000");
      Leg_40.add_attribute("Fctr", "4195235.480000"); // 2
      Leg_40_set.insert("4195235.480000");
      Leg_40.add_attribute("CrdRtg", "LegCreditRating_t_1257450859"); // 2
      Leg_40_set.insert("LegCreditRating_t_1257450859");
      Leg_40.add_attribute("Rgstry", "LegInstrRegistry_t_1986896419"); // 2
      Leg_40_set.insert("LegInstrRegistry_t_1986896419");
      Leg_40.add_attribute("Ctry", "1607189963"); // 2
      Leg_40_set.insert("1607189963");
      Leg_40.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1538309833"); // 2
      Leg_40_set.insert("LegStateOrProvinceOfIssue_t_1538309833");
      Leg_40.add_attribute("Lcl", "LegLocaleOfIssue_t_1551394373"); // 2
      Leg_40_set.insert("LegLocaleOfIssue_t_1551394373");
      Leg_40.add_attribute("Redeem", "LegRedemptionDate_t_41230009"); // 2
      Leg_40_set.insert("LegRedemptionDate_t_41230009");
      Leg_40.add_attribute("Strk", "3790329.970000"); // 2
      Leg_40_set.insert("3790329.970000");
      Leg_40.add_attribute("StrkCcy", "GBP"); // 2
      Leg_40_set.insert("GBP");
      Leg_40.add_attribute("OptA", "1490107144"); // 2
      Leg_40_set.insert("1490107144");
      Leg_40.add_attribute("Cmult", "15242930.380000"); // 2
      Leg_40_set.insert("15242930.380000");
      Leg_40.add_attribute("MultTyp", "2"); // 2
      Leg_40_set.insert("2");
      Leg_40.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_40_set.insert("2");
      Leg_40.add_attribute("UOM", "MMbbl"); // 2
      Leg_40_set.insert("MMbbl");
      Leg_40.add_attribute("UOMQty", "15487175.980000"); // 2
      Leg_40_set.insert("15487175.980000");
      Leg_40.add_attribute("PxUOM", "Bbl"); // 2
      Leg_40_set.insert("Bbl");
      Leg_40.add_attribute("PxUOMQty", "19197728.630000"); // 2
      Leg_40_set.insert("19197728.630000");
      Leg_40.add_attribute("TmUnit", "Wk"); // 2
      Leg_40_set.insert("Wk");
      Leg_40.add_attribute("ExerStyle", "0"); // 2
      Leg_40_set.insert("0");
      Leg_40.add_attribute("CpnRt", "15976358.960000"); // 2
      Leg_40_set.insert("15976358.960000");
      Leg_40.add_attribute("Exch", "LegSecurityExchange_t_1586298735"); // 2
      Leg_40_set.insert("LegSecurityExchange_t_1586298735");
      Leg_40.add_attribute("Issr", "LegIssuer_t_201380891"); // 2
      Leg_40_set.insert("LegIssuer_t_201380891");
      Leg_40.add_attribute("EncLegIssrLen", "1040588699"); // 2
      Leg_40_set.insert("1040588699");
      Leg_40.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1061165587"); // 2
      Leg_40_set.insert("EncodedLegIssuer_t_1061165587");
      Leg_40.add_attribute("Desc", "LegSecurityDesc_t_909541279"); // 2
      Leg_40_set.insert("LegSecurityDesc_t_909541279");
      Leg_40.add_attribute("EncLegSecDescLen", "823353698"); // 2
      Leg_40_set.insert("823353698");
      Leg_40.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1960224816"); // 2
      Leg_40_set.insert("EncodedLegSecurityDesc_t_1960224816");
      Leg_40.add_attribute("RatioQty", "14499085.800000"); // 2
      Leg_40_set.insert("14499085.800000");
      Leg_40.add_attribute("Side", "3"); // 2
      Leg_40_set.insert("3");
      Leg_40.add_attribute("Ccy", "GBP"); // 2
      Leg_40_set.insert("GBP");
      Leg_40.add_attribute("Pool", "LegPool_t_880940526"); // 2
      Leg_40_set.insert("LegPool_t_880940526");
      Leg_40.add_attribute("Dated", "LegDatedDate_t_1353164664"); // 2
      Leg_40_set.insert("LegDatedDate_t_1353164664");
      Leg_40.add_attribute("CSetMo", "1329138443"); // 2
      Leg_40_set.insert("1329138443");
      Leg_40.add_attribute("IntAcrl", "LegInterestAccrualDate_t_271766711"); // 2
      Leg_40_set.insert("LegInterestAccrualDate_t_271766711");
      Leg_40.add_attribute("PutCall", "757075389"); // 2
      Leg_40_set.insert("757075389");
      Leg_40.add_attribute("LegOptionRatio", "13703684.520000"); // 2
      Leg_40_set.insert("13703684.520000");
      Leg_40.add_attribute("Px", "6507997.080000"); // 2
      Leg_40_set.insert("6507997.080000");
      all_values.push_back(Leg_40_set);
      all_compo_names.insert("Leg_40_set");

      {
        xml_element LegAID_40{"LegAID"};
        multiset<string> LegAID_40_set;
        LegAID_40.add_attribute("SecAltID", "LegSecurityAltID_t_62420079"); // 3
        LegAID_40_set.insert("LegSecurityAltID_t_62420079");
        LegAID_40.add_attribute("SecAltIDSrc", "9"); // 3
        LegAID_40_set.insert("9");
        all_values.push_back(LegAID_40_set);
        all_compo_names.insert("LegAID_40_set");

        Leg_40.add_element(LegAID_40);
      }
      IOI_0.add_element(Leg_40);
    }
    {
      xml_element Stip_65{"Stip"};
      multiset<string> Stip_65_set;
      Stip_65.add_attribute("StipTyp", "TEXT"); // 2
      Stip_65_set.insert("TEXT");
      Stip_65.add_attribute("StipVal", "LegStipulationValue_t_1586713118"); // 2
      Stip_65_set.insert("LegStipulationValue_t_1586713118");
      all_values.push_back(Stip_65_set);
      all_compo_names.insert("Stip_65_set");

      IOI_0.add_element(Stip_65);
    }
    elt.add_element(IOI_0);
  } // end IOI
  { // Qual
    xml_element Qual_6{"Qual"};
    multiset<string> Qual_6_set;
    Qual_6.add_attribute("Qual", "L"); // 1
    Qual_6_set.insert("L");
    all_values.push_back(Qual_6_set);
    all_compo_names.insert("Qual_6_set");

    elt.add_element(Qual_6);
  } // end Qual
  { // Qual
    xml_element Qual_7{"Qual"};
    multiset<string> Qual_7_set;
    Qual_7.add_attribute("Qual", "T"); // 1
    Qual_7_set.insert("T");
    all_values.push_back(Qual_7_set);
    all_compo_names.insert("Qual_7_set");

    elt.add_element(Qual_7);
  } // end Qual
  { // Qual
    xml_element Qual_8{"Qual"};
    multiset<string> Qual_8_set;
    Qual_8.add_attribute("Qual", "L"); // 1
    Qual_8_set.insert("L");
    all_values.push_back(Qual_8_set);
    all_compo_names.insert("Qual_8_set");

    elt.add_element(Qual_8);
  } // end Qual
  { // Rtg
    xml_element Rtg_1{"Rtg"};
    multiset<string> Rtg_1_set;
    Rtg_1.add_attribute("RtgTyp", "4"); // 1
    Rtg_1_set.insert("4");
    Rtg_1.add_attribute("RtgID", "RoutingID_t_117439948"); // 1
    Rtg_1_set.insert("RoutingID_t_117439948");
    all_values.push_back(Rtg_1_set);
    all_compo_names.insert("Rtg_1_set");

    elt.add_element(Rtg_1);
  } // end Rtg
  { // Rtg
    xml_element Rtg_2{"Rtg"};
    multiset<string> Rtg_2_set;
    Rtg_2.add_attribute("RtgTyp", "3"); // 1
    Rtg_2_set.insert("3");
    Rtg_2.add_attribute("RtgID", "RoutingID_t_1423754339"); // 1
    Rtg_2_set.insert("RoutingID_t_1423754339");
    all_values.push_back(Rtg_2_set);
    all_compo_names.insert("Rtg_2_set");

    elt.add_element(Rtg_2);
  } // end Rtg
  { // Rtg
    xml_element Rtg_3{"Rtg"};
    multiset<string> Rtg_3_set;
    Rtg_3.add_attribute("RtgTyp", "4"); // 1
    Rtg_3_set.insert("4");
    Rtg_3.add_attribute("RtgID", "RoutingID_t_1498514665"); // 1
    Rtg_3_set.insert("RoutingID_t_1498514665");
    all_values.push_back(Rtg_3_set);
    all_compo_names.insert("Rtg_3_set");

    elt.add_element(Rtg_3);
  } // end Rtg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_11{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_11_set;
    SprdBnchmkCurve_11.add_attribute("Spread", "3168593.910000"); // 1
    SprdBnchmkCurve_11_set.insert("3168593.910000");
    SprdBnchmkCurve_11.add_attribute("Ccy", "USD"); // 1
    SprdBnchmkCurve_11_set.insert("USD");
    SprdBnchmkCurve_11.add_attribute("Name", "LIBOR"); // 1
    SprdBnchmkCurve_11_set.insert("LIBOR");
    SprdBnchmkCurve_11.add_attribute("Point", "BenchmarkCurvePoint_t_430161791"); // 1
    SprdBnchmkCurve_11_set.insert("BenchmarkCurvePoint_t_430161791");
    SprdBnchmkCurve_11.add_attribute("Px", "17104808.760000"); // 1
    SprdBnchmkCurve_11_set.insert("17104808.760000");
    SprdBnchmkCurve_11.add_attribute("PxTyp", "17"); // 1
    SprdBnchmkCurve_11_set.insert("17");
    SprdBnchmkCurve_11.add_attribute("SecID", "BenchmarkSecurityID_t_1943913683"); // 1
    SprdBnchmkCurve_11_set.insert("BenchmarkSecurityID_t_1943913683");
    SprdBnchmkCurve_11.add_attribute("SecIDSrc", "8"); // 1
    SprdBnchmkCurve_11_set.insert("8");
    all_values.push_back(SprdBnchmkCurve_11_set);
    all_compo_names.insert("SprdBnchmkCurve_11_set");

    elt.add_element(SprdBnchmkCurve_11);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_6{"Yield"};
    multiset<string> Yield_6_set;
    Yield_6.add_attribute("Typ", "CLOSE"); // 1
    Yield_6_set.insert("CLOSE");
    Yield_6.add_attribute("Yld", "11495946.990000"); // 1
    Yield_6_set.insert("11495946.990000");
    Yield_6.add_attribute("CalcDt", "YieldCalcDate_t_614084152"); // 1
    Yield_6_set.insert("YieldCalcDate_t_614084152");
    Yield_6.add_attribute("RedDt", "YieldRedemptionDate_t_1916409992"); // 1
    Yield_6_set.insert("YieldRedemptionDate_t_1916409992");
    Yield_6.add_attribute("RedPx", "19066700.890000"); // 1
    Yield_6_set.insert("19066700.890000");
    Yield_6.add_attribute("RedPxTyp", "19"); // 1
    Yield_6_set.insert("19");
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
