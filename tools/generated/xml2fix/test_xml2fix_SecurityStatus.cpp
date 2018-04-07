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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatus_message_t_0;
  elt.add_attribute("StatReqID", "SecurityStatusReqID_t_564912400"); // 0
  SecurityStatus_message_t_0.insert("SecurityStatusReqID_t_564912400");
  elt.add_attribute("Ccy", "GBP"); // 0
  SecurityStatus_message_t_0.insert("GBP");
  elt.add_attribute("MktID", "MarketID_t_1025396124"); // 0
  SecurityStatus_message_t_0.insert("MarketID_t_1025396124");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_404394776"); // 0
  SecurityStatus_message_t_0.insert("MarketSegmentID_t_404394776");
  elt.add_attribute("SesID", "4"); // 0
  SecurityStatus_message_t_0.insert("4");
  elt.add_attribute("SesSub", "6"); // 0
  SecurityStatus_message_t_0.insert("6");
  elt.add_attribute("Unsol", "Y"); // 0
  SecurityStatus_message_t_0.insert("Y");
  elt.add_attribute("TrdgStat", "8"); // 0
  SecurityStatus_message_t_0.insert("8");
  elt.add_attribute("SecTrdEvnt", "5"); // 0
  SecurityStatus_message_t_0.insert("5");
  elt.add_attribute("FinclStat", "2"); // 0
  SecurityStatus_message_t_0.insert("2");
  elt.add_attribute("CorpActn", "B"); // 0
  SecurityStatus_message_t_0.insert("B");
  elt.add_attribute("HaltRsn", "0"); // 0
  SecurityStatus_message_t_0.insert("0");
  elt.add_attribute("InViewOfCmn", "Y"); // 0
  SecurityStatus_message_t_0.insert("Y");
  elt.add_attribute("DueToReltd", "Y"); // 0
  SecurityStatus_message_t_0.insert("Y");
  elt.add_attribute("MDBkTyp", "1"); // 0
  SecurityStatus_message_t_0.insert("1");
  elt.add_attribute("MktDepth", "160451913"); // 0
  SecurityStatus_message_t_0.insert("160451913");
  elt.add_attribute("BuyVol", "8466448.430000"); // 0
  SecurityStatus_message_t_0.insert("8466448.430000");
  elt.add_attribute("SellVol", "12779927.030000"); // 0
  SecurityStatus_message_t_0.insert("12779927.030000");
  elt.add_attribute("HighPx", "6802776.590000"); // 0
  SecurityStatus_message_t_0.insert("6802776.590000");
  elt.add_attribute("LowPx", "13457006.000000"); // 0
  SecurityStatus_message_t_0.insert("13457006.000000");
  elt.add_attribute("LastPx", "13719906.770000"); // 0
  SecurityStatus_message_t_0.insert("13719906.770000");
  elt.add_attribute("TxnTm", "TransactTime_t_2048742915"); // 0
  SecurityStatus_message_t_0.insert("TransactTime_t_2048742915");
  elt.add_attribute("Adjmt", "3"); // 0
  SecurityStatus_message_t_0.insert("3");
  elt.add_attribute("FirstPx", "13307167.530000"); // 0
  SecurityStatus_message_t_0.insert("13307167.530000");
  elt.add_attribute("Txt", "Text_t_106838419"); // 0
  SecurityStatus_message_t_0.insert("Text_t_106838419");
  elt.add_attribute("EncTxtLen", "365643181"); // 0
  SecurityStatus_message_t_0.insert("365643181");
  elt.add_attribute("EncTxt", "EncodedText_t_869360097"); // 0
  SecurityStatus_message_t_0.insert("EncodedText_t_869360097");
  all_values.push_back(SecurityStatus_message_t_0);
  all_compo_names.insert("SecurityStatus_message_t");

  { // Hdr
    xml_element Hdr_86{"Hdr"};
    multiset<string> Hdr_86_set;
    Hdr_86.add_attribute("SeqNum", "1212769195"); // 1
    Hdr_86_set.insert("1212769195");
    Hdr_86.add_attribute("SID", "SenderCompID_t_1256319199"); // 1
    Hdr_86_set.insert("SenderCompID_t_1256319199");
    Hdr_86.add_attribute("TID", "TargetCompID_t_763274547"); // 1
    Hdr_86_set.insert("TargetCompID_t_763274547");
    Hdr_86.add_attribute("OBID", "OnBehalfOfCompID_t_1777681595"); // 1
    Hdr_86_set.insert("OnBehalfOfCompID_t_1777681595");
    Hdr_86.add_attribute("D2ID", "DeliverToCompID_t_131648723"); // 1
    Hdr_86_set.insert("DeliverToCompID_t_131648723");
    Hdr_86.add_attribute("SSub", "SenderSubID_t_973650329"); // 1
    Hdr_86_set.insert("SenderSubID_t_973650329");
    Hdr_86.add_attribute("SLoc", "SenderLocationID_t_655594071"); // 1
    Hdr_86_set.insert("SenderLocationID_t_655594071");
    Hdr_86.add_attribute("TSub", "TargetSubID_t_536043500"); // 1
    Hdr_86_set.insert("TargetSubID_t_536043500");
    Hdr_86.add_attribute("TLoc", "TargetLocationID_t_2066590196"); // 1
    Hdr_86_set.insert("TargetLocationID_t_2066590196");
    Hdr_86.add_attribute("OBSub", "OnBehalfOfSubID_t_767707539"); // 1
    Hdr_86_set.insert("OnBehalfOfSubID_t_767707539");
    Hdr_86.add_attribute("OBLoc", "OnBehalfOfLocationID_t_830092061"); // 1
    Hdr_86_set.insert("OnBehalfOfLocationID_t_830092061");
    Hdr_86.add_attribute("D2Sub", "DeliverToSubID_t_648359587"); // 1
    Hdr_86_set.insert("DeliverToSubID_t_648359587");
    Hdr_86.add_attribute("D2Loc", "DeliverToLocationID_t_118656840"); // 1
    Hdr_86_set.insert("DeliverToLocationID_t_118656840");
    Hdr_86.add_attribute("PosDup", "N"); // 1
    Hdr_86_set.insert("N");
    Hdr_86.add_attribute("PosRsnd", "N"); // 1
    Hdr_86_set.insert("N");
    Hdr_86.add_attribute("Snt", "SendingTime_t_126494154"); // 1
    Hdr_86_set.insert("SendingTime_t_126494154");
    Hdr_86.add_attribute("OrigSnt", "OrigSendingTime_t_991181403"); // 1
    Hdr_86_set.insert("OrigSendingTime_t_991181403");
    Hdr_86.add_attribute("MsgEncd", "MessageEncoding_t_1967609083"); // 1
    Hdr_86_set.insert("MessageEncoding_t_1967609083");
    all_values.push_back(Hdr_86_set);
    all_compo_names.insert("Hdr_86_set");

    {
      xml_element Hop_86{"Hop"};
      multiset<string> Hop_86_set;
      Hop_86.add_attribute("ID", "HopCompID_t_735035656"); // 2
      Hop_86_set.insert("HopCompID_t_735035656");
      Hop_86.add_attribute("Ref", "1151633317"); // 2
      Hop_86_set.insert("1151633317");
      Hop_86.add_attribute("Snt", "HopSendingTime_t_666770279"); // 2
      Hop_86_set.insert("HopSendingTime_t_666770279");
      all_values.push_back(Hop_86_set);
      all_compo_names.insert("Hop_86_set");

      Hdr_86.add_element(Hop_86);
    }
    elt.add_element(Hdr_86);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_16{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_16_set;
    ApplSeqCtrl_16.add_attribute("ApplID", "ApplID_t_2013028359"); // 1
    ApplSeqCtrl_16_set.insert("ApplID_t_2013028359");
    ApplSeqCtrl_16.add_attribute("ApplSeqNum", "1831910976"); // 1
    ApplSeqCtrl_16_set.insert("1831910976");
    ApplSeqCtrl_16.add_attribute("ApplLastSeqNum", "2012470879"); // 1
    ApplSeqCtrl_16_set.insert("2012470879");
    ApplSeqCtrl_16.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_16_set.insert("false");
    all_values.push_back(ApplSeqCtrl_16_set);
    all_compo_names.insert("ApplSeqCtrl_16_set");

    elt.add_element(ApplSeqCtrl_16);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_80{"Instrmt"};
    multiset<string> Instrmt_80_set;
    Instrmt_80.add_attribute("Sym", "Symbol_t_1733170243"); // 1
    Instrmt_80_set.insert("Symbol_t_1733170243");
    Instrmt_80.add_attribute("Sfx", "CD"); // 1
    Instrmt_80_set.insert("CD");
    Instrmt_80.add_attribute("ID", "SecurityID_t_420768494"); // 1
    Instrmt_80_set.insert("SecurityID_t_420768494");
    Instrmt_80.add_attribute("Src", "A"); // 1
    Instrmt_80_set.insert("A");
    Instrmt_80.add_attribute("Prod", "3"); // 1
    Instrmt_80_set.insert("3");
    Instrmt_80.add_attribute("ProdCmplx", "ProductComplex_t_1290128592"); // 1
    Instrmt_80_set.insert("ProductComplex_t_1290128592");
    Instrmt_80.add_attribute("SecGrp", "SecurityGroup_t_905294210"); // 1
    Instrmt_80_set.insert("SecurityGroup_t_905294210");
    Instrmt_80.add_attribute("CFI", "CFICode_t_935854348"); // 1
    Instrmt_80_set.insert("CFICode_t_935854348");
    Instrmt_80.add_attribute("SecTyp", "RVLV"); // 1
    Instrmt_80_set.insert("RVLV");
    Instrmt_80.add_attribute("SubTyp", "SecuritySubType_t_535492157"); // 1
    Instrmt_80_set.insert("SecuritySubType_t_535492157");
    Instrmt_80.add_attribute("MMY", "1067503072"); // 1
    Instrmt_80_set.insert("1067503072");
    Instrmt_80.add_attribute("MatDt", "MaturityDate_t_879569820"); // 1
    Instrmt_80_set.insert("MaturityDate_t_879569820");
    Instrmt_80.add_attribute("MatTm", "1191086228"); // 1
    Instrmt_80_set.insert("1191086228");
    Instrmt_80.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1603546572"); // 1
    Instrmt_80_set.insert("SettleOnOpenFlag_t_1603546572");
    Instrmt_80.add_attribute("AsgnMeth", "798676369"); // 1
    Instrmt_80_set.insert("798676369");
    Instrmt_80.add_attribute("Status", "1"); // 1
    Instrmt_80_set.insert("1");
    Instrmt_80.add_attribute("CpnPmt", "CouponPaymentDate_t_286154985"); // 1
    Instrmt_80_set.insert("CouponPaymentDate_t_286154985");
    Instrmt_80.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_80_set.insert("FR");
    Instrmt_80.add_attribute("Snrty", "SD"); // 1
    Instrmt_80_set.insert("SD");
    Instrmt_80.add_attribute("NotlPctOut", "15310116.670000"); // 1
    Instrmt_80_set.insert("15310116.670000");
    Instrmt_80.add_attribute("OrigNotlPctOut", "7065355.940000"); // 1
    Instrmt_80_set.insert("7065355.940000");
    Instrmt_80.add_attribute("AttchPnt", "564611.140000"); // 1
    Instrmt_80_set.insert("564611.140000");
    Instrmt_80.add_attribute("DetchPnt", "3747094.230000"); // 1
    Instrmt_80_set.insert("3747094.230000");
    Instrmt_80.add_attribute("Issued", "IssueDate_t_526661030"); // 1
    Instrmt_80_set.insert("IssueDate_t_526661030");
    Instrmt_80.add_attribute("RepoCollSecTyp", "791496770"); // 1
    Instrmt_80_set.insert("791496770");
    Instrmt_80.add_attribute("RepoTrm", "1526342740"); // 1
    Instrmt_80_set.insert("1526342740");
    Instrmt_80.add_attribute("RepoRt", "11934313.090000"); // 1
    Instrmt_80_set.insert("11934313.090000");
    Instrmt_80.add_attribute("Fctr", "6570414.820000"); // 1
    Instrmt_80_set.insert("6570414.820000");
    Instrmt_80.add_attribute("CrdRtg", "CreditRating_t_1210770068"); // 1
    Instrmt_80_set.insert("CreditRating_t_1210770068");
    Instrmt_80.add_attribute("Rgstry", "InstrRegistry_t_1058418540"); // 1
    Instrmt_80_set.insert("InstrRegistry_t_1058418540");
    Instrmt_80.add_attribute("IssuCtry", "1894576871"); // 1
    Instrmt_80_set.insert("1894576871");
    Instrmt_80.add_attribute("StPrv", "StateOrProvinceOfIssue_t_796456663"); // 1
    Instrmt_80_set.insert("StateOrProvinceOfIssue_t_796456663");
    Instrmt_80.add_attribute("Lcl", "LocaleOfIssue_t_372310508"); // 1
    Instrmt_80_set.insert("LocaleOfIssue_t_372310508");
    Instrmt_80.add_attribute("Redeem", "RedemptionDate_t_167861717"); // 1
    Instrmt_80_set.insert("RedemptionDate_t_167861717");
    Instrmt_80.add_attribute("StrkPx", "4889816.780000"); // 1
    Instrmt_80_set.insert("4889816.780000");
    Instrmt_80.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_80_set.insert("CAN");
    Instrmt_80.add_attribute("StrkMult", "13942758.880000"); // 1
    Instrmt_80_set.insert("13942758.880000");
    Instrmt_80.add_attribute("StrkValu", "9877000.060000"); // 1
    Instrmt_80_set.insert("9877000.060000");
    Instrmt_80.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_80_set.insert("1");
    Instrmt_80.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_80_set.insert("1");
    Instrmt_80.add_attribute("StrkPxBndryPrcsn", "20552030.780000"); // 1
    Instrmt_80_set.insert("20552030.780000");
    Instrmt_80.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_80_set.insert("2");
    Instrmt_80.add_attribute("OptAt", "973370626"); // 1
    Instrmt_80_set.insert("973370626");
    Instrmt_80.add_attribute("Mult", "15112660.020000"); // 1
    Instrmt_80_set.insert("15112660.020000");
    Instrmt_80.add_attribute("MultTyp", "0"); // 1
    Instrmt_80_set.insert("0");
    Instrmt_80.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_80_set.insert("1");
    Instrmt_80.add_attribute("MinPxIncr", "17974209.880000"); // 1
    Instrmt_80_set.insert("17974209.880000");
    Instrmt_80.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_194224650"); // 1
    Instrmt_80_set.insert("MinPriceIncrementAmount_t_194224650");
    Instrmt_80.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_80_set.insert("MMbbl");
    Instrmt_80.add_attribute("UOMQty", "11809490.070000"); // 1
    Instrmt_80_set.insert("11809490.070000");
    Instrmt_80.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_80_set.insert("oz_tr");
    Instrmt_80.add_attribute("PxUOMQty", "7711088.200000"); // 1
    Instrmt_80_set.insert("7711088.200000");
    Instrmt_80.add_attribute("SettlMeth", "C"); // 1
    Instrmt_80_set.insert("C");
    Instrmt_80.add_attribute("ExerStyle", "2"); // 1
    Instrmt_80_set.insert("2");
    Instrmt_80.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_80_set.insert("2");
    Instrmt_80.add_attribute("OptPayAmt", "OptPayoutAmount_t_934517522"); // 1
    Instrmt_80_set.insert("OptPayoutAmount_t_934517522");
    Instrmt_80.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_80_set.insert("STD");
    Instrmt_80.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_80_set.insert("EQTY");
    Instrmt_80.add_attribute("ListMeth", "0"); // 1
    Instrmt_80_set.insert("0");
    Instrmt_80.add_attribute("CapPx", "15317874.760000"); // 1
    Instrmt_80_set.insert("15317874.760000");
    Instrmt_80.add_attribute("FlrPx", "19667402.960000"); // 1
    Instrmt_80_set.insert("19667402.960000");
    Instrmt_80.add_attribute("PutCall", "0"); // 1
    Instrmt_80_set.insert("0");
    Instrmt_80.add_attribute("FlexInd", "true"); // 1
    Instrmt_80_set.insert("true");
    Instrmt_80.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_80_set.insert("false");
    Instrmt_80.add_attribute("TmUnit", "H"); // 1
    Instrmt_80_set.insert("H");
    Instrmt_80.add_attribute("CpnRt", "19559436.420000"); // 1
    Instrmt_80_set.insert("19559436.420000");
    Instrmt_80.add_attribute("Exch", "SecurityExchange_t_1445108675"); // 1
    Instrmt_80_set.insert("SecurityExchange_t_1445108675");
    Instrmt_80.add_attribute("PosLmt", "530034525"); // 1
    Instrmt_80_set.insert("530034525");
    Instrmt_80.add_attribute("NTPosLmt", "796160001"); // 1
    Instrmt_80_set.insert("796160001");
    Instrmt_80.add_attribute("Issr", "Issuer_t_661534827"); // 1
    Instrmt_80_set.insert("Issuer_t_661534827");
    Instrmt_80.add_attribute("EncIssrLen", "312318922"); // 1
    Instrmt_80_set.insert("312318922");
    Instrmt_80.add_attribute("EncIssr", "EncodedIssuer_t_703879431"); // 1
    Instrmt_80_set.insert("EncodedIssuer_t_703879431");
    Instrmt_80.add_attribute("Desc", "SecurityDesc_t_757530800"); // 1
    Instrmt_80_set.insert("SecurityDesc_t_757530800");
    Instrmt_80.add_attribute("EncSecDescLen", "1285689548"); // 1
    Instrmt_80_set.insert("1285689548");
    Instrmt_80.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_67661786"); // 1
    Instrmt_80_set.insert("EncodedSecurityDesc_t_67661786");
    Instrmt_80.add_attribute("Pool", "Pool_t_1652203142"); // 1
    Instrmt_80_set.insert("Pool_t_1652203142");
    Instrmt_80.add_attribute("CSetMo", "2070370294"); // 1
    Instrmt_80_set.insert("2070370294");
    Instrmt_80.add_attribute("CPPgm", "1"); // 1
    Instrmt_80_set.insert("1");
    Instrmt_80.add_attribute("CPRegT", "CPRegType_t_1846427793"); // 1
    Instrmt_80_set.insert("CPRegType_t_1846427793");
    Instrmt_80.add_attribute("Dated", "DatedDate_t_637534352"); // 1
    Instrmt_80_set.insert("DatedDate_t_637534352");
    Instrmt_80.add_attribute("IntAcrl", "InterestAccrualDate_t_898548133"); // 1
    Instrmt_80_set.insert("InterestAccrualDate_t_898548133");
    all_values.push_back(Instrmt_80_set);
    all_compo_names.insert("Instrmt_80_set");

    {
      xml_element AID_83{"AID"};
      multiset<string> AID_83_set;
      AID_83.add_attribute("AltID", "SecurityAltID_t_599704390"); // 2
      AID_83_set.insert("SecurityAltID_t_599704390");
      AID_83.add_attribute("AltIDSrc", "4"); // 2
      AID_83_set.insert("4");
      all_values.push_back(AID_83_set);
      all_compo_names.insert("AID_83_set");

      Instrmt_80.add_element(AID_83);
    }
    {
      xml_element SecXML_83{"SecXML"};
      multiset<string> SecXML_83_set;
      SecXML_83.add_attribute("Schema", "SecurityXMLSchema_t_306722916"); // 2
      SecXML_83_set.insert("SecurityXMLSchema_t_306722916");
      all_values.push_back(SecXML_83_set);
      all_compo_names.insert("SecXML_83_set");

      Instrmt_80.add_element(SecXML_83);
    }
    {
      xml_element Evnt_83{"Evnt"};
      multiset<string> Evnt_83_set;
      Evnt_83.add_attribute("EventTyp", "5"); // 2
      Evnt_83_set.insert("5");
      Evnt_83.add_attribute("Dt", "EventDate_t_823765116"); // 2
      Evnt_83_set.insert("EventDate_t_823765116");
      Evnt_83.add_attribute("Tm", "EventTime_t_1241240438"); // 2
      Evnt_83_set.insert("EventTime_t_1241240438");
      Evnt_83.add_attribute("Px", "3530109.530000"); // 2
      Evnt_83_set.insert("3530109.530000");
      Evnt_83.add_attribute("Txt", "EventText_t_895928541"); // 2
      Evnt_83_set.insert("EventText_t_895928541");
      all_values.push_back(Evnt_83_set);
      all_compo_names.insert("Evnt_83_set");

      Instrmt_80.add_element(Evnt_83);
    }
    {
      xml_element Pty_418{"Pty"};
      multiset<string> Pty_418_set;
      Pty_418.add_attribute("ID", "InstrumentPartyID_t_1239044381"); // 2
      Pty_418_set.insert("InstrumentPartyID_t_1239044381");
      Pty_418.add_attribute("Src", "G"); // 2
      Pty_418_set.insert("G");
      Pty_418.add_attribute("R", "6"); // 2
      Pty_418_set.insert("6");
      all_values.push_back(Pty_418_set);
      all_compo_names.insert("Pty_418_set");

      {
        xml_element Sub_418{"Sub"};
        multiset<string> Sub_418_set;
        Sub_418.add_attribute("ID", "InstrumentPartySubID_t_2033304987"); // 3
        Sub_418_set.insert("InstrumentPartySubID_t_2033304987");
        Sub_418.add_attribute("Typ", "9"); // 3
        Sub_418_set.insert("9");
        all_values.push_back(Sub_418_set);
        all_compo_names.insert("Sub_418_set");

        Pty_418.add_element(Sub_418);
      }
      Instrmt_80.add_element(Pty_418);
    }
    {
      xml_element CmplxEvnt_80{"CmplxEvnt"};
      multiset<string> CmplxEvnt_80_set;
      CmplxEvnt_80.add_attribute("Typ", "3"); // 2
      CmplxEvnt_80_set.insert("3");
      CmplxEvnt_80.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1169063623"); // 2
      CmplxEvnt_80_set.insert("ComplexOptPayoutAmount_t_1169063623");
      CmplxEvnt_80.add_attribute("Px", "14498727.600000"); // 2
      CmplxEvnt_80_set.insert("14498727.600000");
      CmplxEvnt_80.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_80_set.insert("5");
      CmplxEvnt_80.add_attribute("PxBndryPrcsn", "16990981.480000"); // 2
      CmplxEvnt_80_set.insert("16990981.480000");
      CmplxEvnt_80.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_80_set.insert("2");
      CmplxEvnt_80.add_attribute("Cond", "2"); // 2
      CmplxEvnt_80_set.insert("2");
      all_values.push_back(CmplxEvnt_80_set);
      all_compo_names.insert("CmplxEvnt_80_set");

      {
        xml_element EvntDts_80{"EvntDts"};
        multiset<string> EvntDts_80_set;
        EvntDts_80.add_attribute("StartDt", "ComplexEventStartDate_t_2011417071"); // 3
        EvntDts_80_set.insert("ComplexEventStartDate_t_2011417071");
        EvntDts_80.add_attribute("EndDt", "ComplexEventEndDate_t_802428544"); // 3
        EvntDts_80_set.insert("ComplexEventEndDate_t_802428544");
        all_values.push_back(EvntDts_80_set);
        all_compo_names.insert("EvntDts_80_set");

        {
          xml_element EvntTms_80{"EvntTms"};
          multiset<string> EvntTms_80_set;
          EvntTms_80.add_attribute("StartTm", "1418994209"); // 4
          EvntTms_80_set.insert("1418994209");
          EvntTms_80.add_attribute("EndTm", "1149622971"); // 4
          EvntTms_80_set.insert("1149622971");
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
    InstrmtExt_15.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_15_set.insert("1");
    InstrmtExt_15.add_attribute("PctAtRisk", "9237137.040000"); // 1
    InstrmtExt_15_set.insert("9237137.040000");
    all_values.push_back(InstrmtExt_15_set);
    all_compo_names.insert("InstrmtExt_15_set");

    {
      xml_element Attrb_26{"Attrb"};
      multiset<string> Attrb_26_set;
      Attrb_26.add_attribute("Typ", "6"); // 2
      Attrb_26_set.insert("6");
      Attrb_26.add_attribute("Val", "InstrAttribValue_t_587689456"); // 2
      Attrb_26_set.insert("InstrAttribValue_t_587689456");
      all_values.push_back(Attrb_26_set);
      all_compo_names.insert("Attrb_26_set");

      InstrmtExt_15.add_element(Attrb_26);
    }
    elt.add_element(InstrmtExt_15);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_114{"Undly"};
    multiset<string> Undly_114_set;
    Undly_114.add_attribute("Sym", "UnderlyingSymbol_t_1710043970"); // 1
    Undly_114_set.insert("UnderlyingSymbol_t_1710043970");
    Undly_114.add_attribute("Sfx", "CD"); // 1
    Undly_114_set.insert("CD");
    Undly_114.add_attribute("ID", "UnderlyingSecurityID_t_1222362239"); // 1
    Undly_114_set.insert("UnderlyingSecurityID_t_1222362239");
    Undly_114.add_attribute("Src", "A"); // 1
    Undly_114_set.insert("A");
    Undly_114.add_attribute("Prod", "9"); // 1
    Undly_114_set.insert("9");
    Undly_114.add_attribute("CFI", "UnderlyingCFICode_t_1102004256"); // 1
    Undly_114_set.insert("UnderlyingCFICode_t_1102004256");
    Undly_114.add_attribute("SecTyp", "MTN"); // 1
    Undly_114_set.insert("MTN");
    Undly_114.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_886717296"); // 1
    Undly_114_set.insert("UnderlyingSecuritySubType_t_886717296");
    Undly_114.add_attribute("MMY", "1455015209"); // 1
    Undly_114_set.insert("1455015209");
    Undly_114.add_attribute("Mat", "UnderlyingMaturityDate_t_543413504"); // 1
    Undly_114_set.insert("UnderlyingMaturityDate_t_543413504");
    Undly_114.add_attribute("MatTm", "2125761677"); // 1
    Undly_114_set.insert("2125761677");
    Undly_114.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1192329990"); // 1
    Undly_114_set.insert("UnderlyingCouponPaymentDate_t_1192329990");
    Undly_114.add_attribute("RestrctTyp", "MR"); // 1
    Undly_114_set.insert("MR");
    Undly_114.add_attribute("Snrty", "SD"); // 1
    Undly_114_set.insert("SD");
    Undly_114.add_attribute("NotlPctOut", "6862591.070000"); // 1
    Undly_114_set.insert("6862591.070000");
    Undly_114.add_attribute("OrigNotlPctOut", "19609022.480000"); // 1
    Undly_114_set.insert("19609022.480000");
    Undly_114.add_attribute("AttchPnt", "10331629.920000"); // 1
    Undly_114_set.insert("10331629.920000");
    Undly_114.add_attribute("DetchPnt", "21361318.670000"); // 1
    Undly_114_set.insert("21361318.670000");
    Undly_114.add_attribute("Issued", "UnderlyingIssueDate_t_1960830829"); // 1
    Undly_114_set.insert("UnderlyingIssueDate_t_1960830829");
    Undly_114.add_attribute("RepoCollSecTyp", "584777492"); // 1
    Undly_114_set.insert("584777492");
    Undly_114.add_attribute("RepoTrm", "87197332"); // 1
    Undly_114_set.insert("87197332");
    Undly_114.add_attribute("RepoRt", "4748105.900000"); // 1
    Undly_114_set.insert("4748105.900000");
    Undly_114.add_attribute("Fctr", "4487109.150000"); // 1
    Undly_114_set.insert("4487109.150000");
    Undly_114.add_attribute("CrdRtg", "UnderlyingCreditRating_t_889625877"); // 1
    Undly_114_set.insert("UnderlyingCreditRating_t_889625877");
    Undly_114.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1893804800"); // 1
    Undly_114_set.insert("UnderlyingInstrRegistry_t_1893804800");
    Undly_114.add_attribute("Ctry", "1598333887"); // 1
    Undly_114_set.insert("1598333887");
    Undly_114.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1759716207"); // 1
    Undly_114_set.insert("UnderlyingStateOrProvinceOfIssue_t_1759716207");
    Undly_114.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_670034856"); // 1
    Undly_114_set.insert("UnderlyingLocaleOfIssue_t_670034856");
    Undly_114.add_attribute("Redeem", "UnderlyingRedemptionDate_t_523359857"); // 1
    Undly_114_set.insert("UnderlyingRedemptionDate_t_523359857");
    Undly_114.add_attribute("StrkPx", "1999220.160000"); // 1
    Undly_114_set.insert("1999220.160000");
    Undly_114.add_attribute("StrkCcy", "CAN"); // 1
    Undly_114_set.insert("CAN");
    Undly_114.add_attribute("OptA", "1686159606"); // 1
    Undly_114_set.insert("1686159606");
    Undly_114.add_attribute("Mult", "3675712.960000"); // 1
    Undly_114_set.insert("3675712.960000");
    Undly_114.add_attribute("MultTyp", "1"); // 1
    Undly_114_set.insert("1");
    Undly_114.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_114_set.insert("4");
    Undly_114.add_attribute("UOM", "Gal"); // 1
    Undly_114_set.insert("Gal");
    Undly_114.add_attribute("UOMQty", "7046086.380000"); // 1
    Undly_114_set.insert("7046086.380000");
    Undly_114.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_114_set.insert("MMBtu");
    Undly_114.add_attribute("PxUOMQty", "7771071.130000"); // 1
    Undly_114_set.insert("7771071.130000");
    Undly_114.add_attribute("TmUnit", "Wk"); // 1
    Undly_114_set.insert("Wk");
    Undly_114.add_attribute("ExerStyle", "0"); // 1
    Undly_114_set.insert("0");
    Undly_114.add_attribute("CpnRt", "19694371.030000"); // 1
    Undly_114_set.insert("19694371.030000");
    Undly_114.add_attribute("Exch", "UnderlyingSecurityExchange_t_359137188"); // 1
    Undly_114_set.insert("UnderlyingSecurityExchange_t_359137188");
    Undly_114.add_attribute("Issr", "UnderlyingIssuer_t_2060731158"); // 1
    Undly_114_set.insert("UnderlyingIssuer_t_2060731158");
    Undly_114.add_attribute("EncUndIssrLen", "508212562"); // 1
    Undly_114_set.insert("508212562");
    Undly_114.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_172555788"); // 1
    Undly_114_set.insert("EncodedUnderlyingIssuer_t_172555788");
    Undly_114.add_attribute("Desc", "UnderlyingSecurityDesc_t_946410502"); // 1
    Undly_114_set.insert("UnderlyingSecurityDesc_t_946410502");
    Undly_114.add_attribute("EncUndSecDescLen", "496860782"); // 1
    Undly_114_set.insert("496860782");
    Undly_114.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2133386618"); // 1
    Undly_114_set.insert("EncodedUnderlyingSecurityDesc_t_2133386618");
    Undly_114.add_attribute("CPPgm", "UnderlyingCPProgram_t_1531187995"); // 1
    Undly_114_set.insert("UnderlyingCPProgram_t_1531187995");
    Undly_114.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_584058114"); // 1
    Undly_114_set.insert("UnderlyingCPRegType_t_584058114");
    Undly_114.add_attribute("AllocPct", "4607135.600000"); // 1
    Undly_114_set.insert("4607135.600000");
    Undly_114.add_attribute("Ccy", "CHF"); // 1
    Undly_114_set.insert("CHF");
    Undly_114.add_attribute("Qty", "2070347.120000"); // 1
    Undly_114_set.insert("2070347.120000");
    Undly_114.add_attribute("SettlTyp", "2"); // 1
    Undly_114_set.insert("2");
    Undly_114.add_attribute("CashAmt", "UnderlyingCashAmount_t_1085916551"); // 1
    Undly_114_set.insert("UnderlyingCashAmount_t_1085916551");
    Undly_114.add_attribute("CashTyp", "FIXED"); // 1
    Undly_114_set.insert("FIXED");
    Undly_114.add_attribute("Px", "19541090.060000"); // 1
    Undly_114_set.insert("19541090.060000");
    Undly_114.add_attribute("DirtPx", "12858385.670000"); // 1
    Undly_114_set.insert("12858385.670000");
    Undly_114.add_attribute("EndPx", "222786.250000"); // 1
    Undly_114_set.insert("222786.250000");
    Undly_114.add_attribute("StartVal", "UnderlyingStartValue_t_2040029186"); // 1
    Undly_114_set.insert("UnderlyingStartValue_t_2040029186");
    Undly_114.add_attribute("CurVal", "UnderlyingCurrentValue_t_824514525"); // 1
    Undly_114_set.insert("UnderlyingCurrentValue_t_824514525");
    Undly_114.add_attribute("EndVal", "UnderlyingEndValue_t_389849921"); // 1
    Undly_114_set.insert("UnderlyingEndValue_t_389849921");
    Undly_114.add_attribute("AdjQty", "9496692.130000"); // 1
    Undly_114_set.insert("9496692.130000");
    Undly_114.add_attribute("FxRate", "86673.410000"); // 1
    Undly_114_set.insert("86673.410000");
    Undly_114.add_attribute("FxRateCalc", "D"); // 1
    Undly_114_set.insert("D");
    Undly_114.add_attribute("CapValu", "UnderlyingCapValue_t_1654277851"); // 1
    Undly_114_set.insert("UnderlyingCapValue_t_1654277851");
    Undly_114.add_attribute("SetMeth", "UnderlyingSettlMethod_t_79537453"); // 1
    Undly_114_set.insert("UnderlyingSettlMethod_t_79537453");
    Undly_114.add_attribute("PutCall", "489048938"); // 1
    Undly_114_set.insert("489048938");
    all_values.push_back(Undly_114_set);
    all_compo_names.insert("Undly_114_set");

    {
      xml_element UndAID_114{"UndAID"};
      multiset<string> UndAID_114_set;
      UndAID_114.add_attribute("AltID", "UnderlyingSecurityAltID_t_754816346"); // 2
      UndAID_114_set.insert("UnderlyingSecurityAltID_t_754816346");
      UndAID_114.add_attribute("AltIDSrc", "6"); // 2
      UndAID_114_set.insert("6");
      all_values.push_back(UndAID_114_set);
      all_compo_names.insert("UndAID_114_set");

      Undly_114.add_element(UndAID_114);
    }
    {
      xml_element Stip_181{"Stip"};
      multiset<string> Stip_181_set;
      Stip_181.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_181_set.insert("MAXORDQTY");
      Stip_181.add_attribute("Val", "UnderlyingStipValue_t_1113953535"); // 2
      Stip_181_set.insert("UnderlyingStipValue_t_1113953535");
      all_values.push_back(Stip_181_set);
      all_compo_names.insert("Stip_181_set");

      Undly_114.add_element(Stip_181);
    }
    {
      xml_element Pty_419{"Pty"};
      multiset<string> Pty_419_set;
      Pty_419.add_attribute("ID", "UnderlyingInstrumentPartyID_t_41933106"); // 2
      Pty_419_set.insert("UnderlyingInstrumentPartyID_t_41933106");
      Pty_419.add_attribute("Src", "1"); // 2
      Pty_419_set.insert("1");
      Pty_419.add_attribute("R", "24"); // 2
      Pty_419_set.insert("24");
      all_values.push_back(Pty_419_set);
      all_compo_names.insert("Pty_419_set");

      {
        xml_element Sub_419{"Sub"};
        multiset<string> Sub_419_set;
        Sub_419.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_988343608"); // 3
        Sub_419_set.insert("UnderlyingInstrumentPartySubID_t_988343608");
        Sub_419.add_attribute("Typ", "33"); // 3
        Sub_419_set.insert("33");
        all_values.push_back(Sub_419_set);
        all_compo_names.insert("Sub_419_set");

        Pty_419.add_element(Sub_419);
      }
      Undly_114.add_element(Pty_419);
    }
    elt.add_element(Undly_114);
  } // end Undly
  { // Undly
    xml_element Undly_115{"Undly"};
    multiset<string> Undly_115_set;
    Undly_115.add_attribute("Sym", "UnderlyingSymbol_t_1272412293"); // 1
    Undly_115_set.insert("UnderlyingSymbol_t_1272412293");
    Undly_115.add_attribute("Sfx", "WI"); // 1
    Undly_115_set.insert("WI");
    Undly_115.add_attribute("ID", "UnderlyingSecurityID_t_1900133852"); // 1
    Undly_115_set.insert("UnderlyingSecurityID_t_1900133852");
    Undly_115.add_attribute("Src", "K"); // 1
    Undly_115_set.insert("K");
    Undly_115.add_attribute("Prod", "8"); // 1
    Undly_115_set.insert("8");
    Undly_115.add_attribute("CFI", "UnderlyingCFICode_t_1226334196"); // 1
    Undly_115_set.insert("UnderlyingCFICode_t_1226334196");
    Undly_115.add_attribute("SecTyp", "TIPS"); // 1
    Undly_115_set.insert("TIPS");
    Undly_115.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1635212367"); // 1
    Undly_115_set.insert("UnderlyingSecuritySubType_t_1635212367");
    Undly_115.add_attribute("MMY", "164767099"); // 1
    Undly_115_set.insert("164767099");
    Undly_115.add_attribute("Mat", "UnderlyingMaturityDate_t_669746487"); // 1
    Undly_115_set.insert("UnderlyingMaturityDate_t_669746487");
    Undly_115.add_attribute("MatTm", "1441837726"); // 1
    Undly_115_set.insert("1441837726");
    Undly_115.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1450605666"); // 1
    Undly_115_set.insert("UnderlyingCouponPaymentDate_t_1450605666");
    Undly_115.add_attribute("RestrctTyp", "FR"); // 1
    Undly_115_set.insert("FR");
    Undly_115.add_attribute("Snrty", "SR"); // 1
    Undly_115_set.insert("SR");
    Undly_115.add_attribute("NotlPctOut", "1276365.430000"); // 1
    Undly_115_set.insert("1276365.430000");
    Undly_115.add_attribute("OrigNotlPctOut", "10818750.340000"); // 1
    Undly_115_set.insert("10818750.340000");
    Undly_115.add_attribute("AttchPnt", "1365688.290000"); // 1
    Undly_115_set.insert("1365688.290000");
    Undly_115.add_attribute("DetchPnt", "1363038.840000"); // 1
    Undly_115_set.insert("1363038.840000");
    Undly_115.add_attribute("Issued", "UnderlyingIssueDate_t_793816859"); // 1
    Undly_115_set.insert("UnderlyingIssueDate_t_793816859");
    Undly_115.add_attribute("RepoCollSecTyp", "1790846680"); // 1
    Undly_115_set.insert("1790846680");
    Undly_115.add_attribute("RepoTrm", "215841337"); // 1
    Undly_115_set.insert("215841337");
    Undly_115.add_attribute("RepoRt", "12828657.980000"); // 1
    Undly_115_set.insert("12828657.980000");
    Undly_115.add_attribute("Fctr", "3981793.790000"); // 1
    Undly_115_set.insert("3981793.790000");
    Undly_115.add_attribute("CrdRtg", "UnderlyingCreditRating_t_344526933"); // 1
    Undly_115_set.insert("UnderlyingCreditRating_t_344526933");
    Undly_115.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1593868191"); // 1
    Undly_115_set.insert("UnderlyingInstrRegistry_t_1593868191");
    Undly_115.add_attribute("Ctry", "1512132914"); // 1
    Undly_115_set.insert("1512132914");
    Undly_115.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_386460039"); // 1
    Undly_115_set.insert("UnderlyingStateOrProvinceOfIssue_t_386460039");
    Undly_115.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_265599499"); // 1
    Undly_115_set.insert("UnderlyingLocaleOfIssue_t_265599499");
    Undly_115.add_attribute("Redeem", "UnderlyingRedemptionDate_t_651158589"); // 1
    Undly_115_set.insert("UnderlyingRedemptionDate_t_651158589");
    Undly_115.add_attribute("StrkPx", "13748036.470000"); // 1
    Undly_115_set.insert("13748036.470000");
    Undly_115.add_attribute("StrkCcy", "EUR"); // 1
    Undly_115_set.insert("EUR");
    Undly_115.add_attribute("OptA", "1746851603"); // 1
    Undly_115_set.insert("1746851603");
    Undly_115.add_attribute("Mult", "13343254.420000"); // 1
    Undly_115_set.insert("13343254.420000");
    Undly_115.add_attribute("MultTyp", "2"); // 1
    Undly_115_set.insert("2");
    Undly_115.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_115_set.insert("1");
    Undly_115.add_attribute("UOM", "MMbbl"); // 1
    Undly_115_set.insert("MMbbl");
    Undly_115.add_attribute("UOMQty", "13018900.070000"); // 1
    Undly_115_set.insert("13018900.070000");
    Undly_115.add_attribute("PxUOM", "Alw"); // 1
    Undly_115_set.insert("Alw");
    Undly_115.add_attribute("PxUOMQty", "5779430.890000"); // 1
    Undly_115_set.insert("5779430.890000");
    Undly_115.add_attribute("TmUnit", "H"); // 1
    Undly_115_set.insert("H");
    Undly_115.add_attribute("ExerStyle", "2"); // 1
    Undly_115_set.insert("2");
    Undly_115.add_attribute("CpnRt", "20285487.550000"); // 1
    Undly_115_set.insert("20285487.550000");
    Undly_115.add_attribute("Exch", "UnderlyingSecurityExchange_t_516177959"); // 1
    Undly_115_set.insert("UnderlyingSecurityExchange_t_516177959");
    Undly_115.add_attribute("Issr", "UnderlyingIssuer_t_2067780882"); // 1
    Undly_115_set.insert("UnderlyingIssuer_t_2067780882");
    Undly_115.add_attribute("EncUndIssrLen", "8701650"); // 1
    Undly_115_set.insert("8701650");
    Undly_115.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1598052993"); // 1
    Undly_115_set.insert("EncodedUnderlyingIssuer_t_1598052993");
    Undly_115.add_attribute("Desc", "UnderlyingSecurityDesc_t_56866063"); // 1
    Undly_115_set.insert("UnderlyingSecurityDesc_t_56866063");
    Undly_115.add_attribute("EncUndSecDescLen", "145005534"); // 1
    Undly_115_set.insert("145005534");
    Undly_115.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_244386204"); // 1
    Undly_115_set.insert("EncodedUnderlyingSecurityDesc_t_244386204");
    Undly_115.add_attribute("CPPgm", "UnderlyingCPProgram_t_1847712744"); // 1
    Undly_115_set.insert("UnderlyingCPProgram_t_1847712744");
    Undly_115.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_360846871"); // 1
    Undly_115_set.insert("UnderlyingCPRegType_t_360846871");
    Undly_115.add_attribute("AllocPct", "15272520.020000"); // 1
    Undly_115_set.insert("15272520.020000");
    Undly_115.add_attribute("Ccy", "JPY"); // 1
    Undly_115_set.insert("JPY");
    Undly_115.add_attribute("Qty", "9736365.460000"); // 1
    Undly_115_set.insert("9736365.460000");
    Undly_115.add_attribute("SettlTyp", "5"); // 1
    Undly_115_set.insert("5");
    Undly_115.add_attribute("CashAmt", "UnderlyingCashAmount_t_1091833843"); // 1
    Undly_115_set.insert("UnderlyingCashAmount_t_1091833843");
    Undly_115.add_attribute("CashTyp", "DIFF"); // 1
    Undly_115_set.insert("DIFF");
    Undly_115.add_attribute("Px", "1142163.300000"); // 1
    Undly_115_set.insert("1142163.300000");
    Undly_115.add_attribute("DirtPx", "3191538.430000"); // 1
    Undly_115_set.insert("3191538.430000");
    Undly_115.add_attribute("EndPx", "6734276.350000"); // 1
    Undly_115_set.insert("6734276.350000");
    Undly_115.add_attribute("StartVal", "UnderlyingStartValue_t_2037787213"); // 1
    Undly_115_set.insert("UnderlyingStartValue_t_2037787213");
    Undly_115.add_attribute("CurVal", "UnderlyingCurrentValue_t_2066005446"); // 1
    Undly_115_set.insert("UnderlyingCurrentValue_t_2066005446");
    Undly_115.add_attribute("EndVal", "UnderlyingEndValue_t_2007753077"); // 1
    Undly_115_set.insert("UnderlyingEndValue_t_2007753077");
    Undly_115.add_attribute("AdjQty", "13995166.540000"); // 1
    Undly_115_set.insert("13995166.540000");
    Undly_115.add_attribute("FxRate", "18698366.190000"); // 1
    Undly_115_set.insert("18698366.190000");
    Undly_115.add_attribute("FxRateCalc", "D"); // 1
    Undly_115_set.insert("D");
    Undly_115.add_attribute("CapValu", "UnderlyingCapValue_t_553923014"); // 1
    Undly_115_set.insert("UnderlyingCapValue_t_553923014");
    Undly_115.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1161396511"); // 1
    Undly_115_set.insert("UnderlyingSettlMethod_t_1161396511");
    Undly_115.add_attribute("PutCall", "851388508"); // 1
    Undly_115_set.insert("851388508");
    all_values.push_back(Undly_115_set);
    all_compo_names.insert("Undly_115_set");

    {
      xml_element UndAID_115{"UndAID"};
      multiset<string> UndAID_115_set;
      UndAID_115.add_attribute("AltID", "UnderlyingSecurityAltID_t_378075860"); // 2
      UndAID_115_set.insert("UnderlyingSecurityAltID_t_378075860");
      UndAID_115.add_attribute("AltIDSrc", "K"); // 2
      UndAID_115_set.insert("K");
      all_values.push_back(UndAID_115_set);
      all_compo_names.insert("UndAID_115_set");

      Undly_115.add_element(UndAID_115);
    }
    {
      xml_element Stip_182{"Stip"};
      multiset<string> Stip_182_set;
      Stip_182.add_attribute("Typ", "ISSUE"); // 2
      Stip_182_set.insert("ISSUE");
      Stip_182.add_attribute("Val", "UnderlyingStipValue_t_894253819"); // 2
      Stip_182_set.insert("UnderlyingStipValue_t_894253819");
      all_values.push_back(Stip_182_set);
      all_compo_names.insert("Stip_182_set");

      Undly_115.add_element(Stip_182);
    }
    {
      xml_element Pty_420{"Pty"};
      multiset<string> Pty_420_set;
      Pty_420.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1815091364"); // 2
      Pty_420_set.insert("UnderlyingInstrumentPartyID_t_1815091364");
      Pty_420.add_attribute("Src", "A"); // 2
      Pty_420_set.insert("A");
      Pty_420.add_attribute("R", "59"); // 2
      Pty_420_set.insert("59");
      all_values.push_back(Pty_420_set);
      all_compo_names.insert("Pty_420_set");

      {
        xml_element Sub_420{"Sub"};
        multiset<string> Sub_420_set;
        Sub_420.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1871957428"); // 3
        Sub_420_set.insert("UnderlyingInstrumentPartySubID_t_1871957428");
        Sub_420.add_attribute("Typ", "26"); // 3
        Sub_420_set.insert("26");
        all_values.push_back(Sub_420_set);
        all_compo_names.insert("Sub_420_set");

        Pty_420.add_element(Sub_420);
      }
      Undly_115.add_element(Pty_420);
    }
    elt.add_element(Undly_115);
  } // end Undly
  { // Leg
    xml_element Leg_99{"Leg"};
    multiset<string> Leg_99_set;
    Leg_99.add_attribute("Sym", "LegSymbol_t_1572186524"); // 1
    Leg_99_set.insert("LegSymbol_t_1572186524");
    Leg_99.add_attribute("Sfx", "CD"); // 1
    Leg_99_set.insert("CD");
    Leg_99.add_attribute("ID", "LegSecurityID_t_2116461371"); // 1
    Leg_99_set.insert("LegSecurityID_t_2116461371");
    Leg_99.add_attribute("Src", "8"); // 1
    Leg_99_set.insert("8");
    Leg_99.add_attribute("Prod", "2"); // 1
    Leg_99_set.insert("2");
    Leg_99.add_attribute("CFI", "LegCFICode_t_942614269"); // 1
    Leg_99_set.insert("LegCFICode_t_942614269");
    Leg_99.add_attribute("SecTyp", "TAN"); // 1
    Leg_99_set.insert("TAN");
    Leg_99.add_attribute("SecSubTyp", "LegSecuritySubType_t_896731670"); // 1
    Leg_99_set.insert("LegSecuritySubType_t_896731670");
    Leg_99.add_attribute("MMY", "34366667"); // 1
    Leg_99_set.insert("34366667");
    Leg_99.add_attribute("Mat", "LegMaturityDate_t_1247869070"); // 1
    Leg_99_set.insert("LegMaturityDate_t_1247869070");
    Leg_99.add_attribute("MatTm", "1215885513"); // 1
    Leg_99_set.insert("1215885513");
    Leg_99.add_attribute("CpnPmt", "LegCouponPaymentDate_t_707794302"); // 1
    Leg_99_set.insert("LegCouponPaymentDate_t_707794302");
    Leg_99.add_attribute("Issued", "LegIssueDate_t_1138172636"); // 1
    Leg_99_set.insert("LegIssueDate_t_1138172636");
    Leg_99.add_attribute("RepoCollSecTyp", "1134407311"); // 1
    Leg_99_set.insert("1134407311");
    Leg_99.add_attribute("RepoTrm", "568063731"); // 1
    Leg_99_set.insert("568063731");
    Leg_99.add_attribute("RepoRt", "3902056.420000"); // 1
    Leg_99_set.insert("3902056.420000");
    Leg_99.add_attribute("Fctr", "8567602.820000"); // 1
    Leg_99_set.insert("8567602.820000");
    Leg_99.add_attribute("CrdRtg", "LegCreditRating_t_841509150"); // 1
    Leg_99_set.insert("LegCreditRating_t_841509150");
    Leg_99.add_attribute("Rgstry", "LegInstrRegistry_t_944128656"); // 1
    Leg_99_set.insert("LegInstrRegistry_t_944128656");
    Leg_99.add_attribute("Ctry", "2018156794"); // 1
    Leg_99_set.insert("2018156794");
    Leg_99.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1692897658"); // 1
    Leg_99_set.insert("LegStateOrProvinceOfIssue_t_1692897658");
    Leg_99.add_attribute("Lcl", "LegLocaleOfIssue_t_1322204517"); // 1
    Leg_99_set.insert("LegLocaleOfIssue_t_1322204517");
    Leg_99.add_attribute("Redeem", "LegRedemptionDate_t_1765467276"); // 1
    Leg_99_set.insert("LegRedemptionDate_t_1765467276");
    Leg_99.add_attribute("Strk", "2778676.250000"); // 1
    Leg_99_set.insert("2778676.250000");
    Leg_99.add_attribute("StrkCcy", "USD"); // 1
    Leg_99_set.insert("USD");
    Leg_99.add_attribute("OptA", "1019022890"); // 1
    Leg_99_set.insert("1019022890");
    Leg_99.add_attribute("Cmult", "4137978.530000"); // 1
    Leg_99_set.insert("4137978.530000");
    Leg_99.add_attribute("MultTyp", "2"); // 1
    Leg_99_set.insert("2");
    Leg_99.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_99_set.insert("4");
    Leg_99.add_attribute("UOM", "USD"); // 1
    Leg_99_set.insert("USD");
    Leg_99.add_attribute("UOMQty", "5822516.480000"); // 1
    Leg_99_set.insert("5822516.480000");
    Leg_99.add_attribute("PxUOM", "lbs"); // 1
    Leg_99_set.insert("lbs");
    Leg_99.add_attribute("PxUOMQty", "9719849.450000"); // 1
    Leg_99_set.insert("9719849.450000");
    Leg_99.add_attribute("TmUnit", "S"); // 1
    Leg_99_set.insert("S");
    Leg_99.add_attribute("ExerStyle", "2"); // 1
    Leg_99_set.insert("2");
    Leg_99.add_attribute("CpnRt", "19145992.150000"); // 1
    Leg_99_set.insert("19145992.150000");
    Leg_99.add_attribute("Exch", "LegSecurityExchange_t_1239015739"); // 1
    Leg_99_set.insert("LegSecurityExchange_t_1239015739");
    Leg_99.add_attribute("Issr", "LegIssuer_t_1706337209"); // 1
    Leg_99_set.insert("LegIssuer_t_1706337209");
    Leg_99.add_attribute("EncLegIssrLen", "1948965882"); // 1
    Leg_99_set.insert("1948965882");
    Leg_99.add_attribute("EncLegIssr", "EncodedLegIssuer_t_339401162"); // 1
    Leg_99_set.insert("EncodedLegIssuer_t_339401162");
    Leg_99.add_attribute("Desc", "LegSecurityDesc_t_774739074"); // 1
    Leg_99_set.insert("LegSecurityDesc_t_774739074");
    Leg_99.add_attribute("EncLegSecDescLen", "509276536"); // 1
    Leg_99_set.insert("509276536");
    Leg_99.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1477573798"); // 1
    Leg_99_set.insert("EncodedLegSecurityDesc_t_1477573798");
    Leg_99.add_attribute("RatioQty", "19091463.860000"); // 1
    Leg_99_set.insert("19091463.860000");
    Leg_99.add_attribute("Side", "C"); // 1
    Leg_99_set.insert("C");
    Leg_99.add_attribute("Ccy", "GBP"); // 1
    Leg_99_set.insert("GBP");
    Leg_99.add_attribute("Pool", "LegPool_t_1918849417"); // 1
    Leg_99_set.insert("LegPool_t_1918849417");
    Leg_99.add_attribute("Dated", "LegDatedDate_t_664424449"); // 1
    Leg_99_set.insert("LegDatedDate_t_664424449");
    Leg_99.add_attribute("CSetMo", "489096166"); // 1
    Leg_99_set.insert("489096166");
    Leg_99.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1464263427"); // 1
    Leg_99_set.insert("LegInterestAccrualDate_t_1464263427");
    Leg_99.add_attribute("PutCall", "1986628966"); // 1
    Leg_99_set.insert("1986628966");
    Leg_99.add_attribute("LegOptionRatio", "1070797.940000"); // 1
    Leg_99_set.insert("1070797.940000");
    Leg_99.add_attribute("Px", "17421310.520000"); // 1
    Leg_99_set.insert("17421310.520000");
    all_values.push_back(Leg_99_set);
    all_compo_names.insert("Leg_99_set");

    {
      xml_element LegAID_94{"LegAID"};
      multiset<string> LegAID_94_set;
      LegAID_94.add_attribute("SecAltID", "LegSecurityAltID_t_2055603654"); // 2
      LegAID_94_set.insert("LegSecurityAltID_t_2055603654");
      LegAID_94.add_attribute("SecAltIDSrc", "I"); // 2
      LegAID_94_set.insert("I");
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
