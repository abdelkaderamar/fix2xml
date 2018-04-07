#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityList_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityList_message_t_0;
  elt.add_attribute("RptID", "729390170"); // 0
  SecurityList_message_t_0.insert("729390170");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_243582730"); // 0
  SecurityList_message_t_0.insert("ClearingBusinessDate_t_243582730");
  elt.add_attribute("ListID", "SecurityListID_t_972812557"); // 0
  SecurityList_message_t_0.insert("SecurityListID_t_972812557");
  elt.add_attribute("ListRefID", "SecurityListRefID_t_522142419"); // 0
  SecurityList_message_t_0.insert("SecurityListRefID_t_522142419");
  elt.add_attribute("ListDesc", "SecurityListDesc_t_153259205"); // 0
  SecurityList_message_t_0.insert("SecurityListDesc_t_153259205");
  elt.add_attribute("ListTyp", "2"); // 0
  SecurityList_message_t_0.insert("2");
  elt.add_attribute("LstTypSrc", "1"); // 0
  SecurityList_message_t_0.insert("1");
  elt.add_attribute("ReqID", "SecurityReqID_t_1883593654"); // 0
  SecurityList_message_t_0.insert("SecurityReqID_t_1883593654");
  elt.add_attribute("RspID", "SecurityResponseID_t_1458461494"); // 0
  SecurityList_message_t_0.insert("SecurityResponseID_t_1458461494");
  elt.add_attribute("ReqRslt", "2"); // 0
  SecurityList_message_t_0.insert("2");
  elt.add_attribute("TxnTm", "TransactTime_t_2145479810"); // 0
  SecurityList_message_t_0.insert("TransactTime_t_2145479810");
  elt.add_attribute("TotNoReltdSym", "1616839573"); // 0
  SecurityList_message_t_0.insert("1616839573");
  elt.add_attribute("MktID", "MarketID_t_634946275"); // 0
  SecurityList_message_t_0.insert("MarketID_t_634946275");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_742997147"); // 0
  SecurityList_message_t_0.insert("MarketSegmentID_t_742997147");
  elt.add_attribute("LastFragment", "Y"); // 0
  SecurityList_message_t_0.insert("Y");
  all_values.push_back(SecurityList_message_t_0);
  all_compo_names.insert("SecurityList_message_t");

  { // Hdr
    xml_element Hdr_83{"Hdr"};
    multiset<string> Hdr_83_set;
    Hdr_83.add_attribute("SeqNum", "1230396282"); // 1
    Hdr_83_set.insert("1230396282");
    Hdr_83.add_attribute("SID", "SenderCompID_t_1294633321"); // 1
    Hdr_83_set.insert("SenderCompID_t_1294633321");
    Hdr_83.add_attribute("TID", "TargetCompID_t_1215997169"); // 1
    Hdr_83_set.insert("TargetCompID_t_1215997169");
    Hdr_83.add_attribute("OBID", "OnBehalfOfCompID_t_2075979877"); // 1
    Hdr_83_set.insert("OnBehalfOfCompID_t_2075979877");
    Hdr_83.add_attribute("D2ID", "DeliverToCompID_t_2050839615"); // 1
    Hdr_83_set.insert("DeliverToCompID_t_2050839615");
    Hdr_83.add_attribute("SSub", "SenderSubID_t_2002495208"); // 1
    Hdr_83_set.insert("SenderSubID_t_2002495208");
    Hdr_83.add_attribute("SLoc", "SenderLocationID_t_1422787627"); // 1
    Hdr_83_set.insert("SenderLocationID_t_1422787627");
    Hdr_83.add_attribute("TSub", "TargetSubID_t_199133171"); // 1
    Hdr_83_set.insert("TargetSubID_t_199133171");
    Hdr_83.add_attribute("TLoc", "TargetLocationID_t_2061215778"); // 1
    Hdr_83_set.insert("TargetLocationID_t_2061215778");
    Hdr_83.add_attribute("OBSub", "OnBehalfOfSubID_t_2007044663"); // 1
    Hdr_83_set.insert("OnBehalfOfSubID_t_2007044663");
    Hdr_83.add_attribute("OBLoc", "OnBehalfOfLocationID_t_977039417"); // 1
    Hdr_83_set.insert("OnBehalfOfLocationID_t_977039417");
    Hdr_83.add_attribute("D2Sub", "DeliverToSubID_t_39047447"); // 1
    Hdr_83_set.insert("DeliverToSubID_t_39047447");
    Hdr_83.add_attribute("D2Loc", "DeliverToLocationID_t_106575520"); // 1
    Hdr_83_set.insert("DeliverToLocationID_t_106575520");
    Hdr_83.add_attribute("PosDup", "Y"); // 1
    Hdr_83_set.insert("Y");
    Hdr_83.add_attribute("PosRsnd", "Y"); // 1
    Hdr_83_set.insert("Y");
    Hdr_83.add_attribute("Snt", "SendingTime_t_1777100158"); // 1
    Hdr_83_set.insert("SendingTime_t_1777100158");
    Hdr_83.add_attribute("OrigSnt", "OrigSendingTime_t_508821569"); // 1
    Hdr_83_set.insert("OrigSendingTime_t_508821569");
    Hdr_83.add_attribute("MsgEncd", "MessageEncoding_t_1817433139"); // 1
    Hdr_83_set.insert("MessageEncoding_t_1817433139");
    all_values.push_back(Hdr_83_set);
    all_compo_names.insert("Hdr_83_set");

    {
      xml_element Hop_83{"Hop"};
      multiset<string> Hop_83_set;
      Hop_83.add_attribute("ID", "HopCompID_t_602429068"); // 2
      Hop_83_set.insert("HopCompID_t_602429068");
      Hop_83.add_attribute("Ref", "1030963988"); // 2
      Hop_83_set.insert("1030963988");
      Hop_83.add_attribute("Snt", "HopSendingTime_t_1970692344"); // 2
      Hop_83_set.insert("HopSendingTime_t_1970692344");
      all_values.push_back(Hop_83_set);
      all_compo_names.insert("Hop_83_set");

      Hdr_83.add_element(Hop_83);
    }
    elt.add_element(Hdr_83);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_14{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_14_set;
    ApplSeqCtrl_14.add_attribute("ApplID", "ApplID_t_1014382217"); // 1
    ApplSeqCtrl_14_set.insert("ApplID_t_1014382217");
    ApplSeqCtrl_14.add_attribute("ApplSeqNum", "647545176"); // 1
    ApplSeqCtrl_14_set.insert("647545176");
    ApplSeqCtrl_14.add_attribute("ApplLastSeqNum", "1706802350"); // 1
    ApplSeqCtrl_14_set.insert("1706802350");
    ApplSeqCtrl_14.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_14_set.insert("false");
    all_values.push_back(ApplSeqCtrl_14_set);
    all_compo_names.insert("ApplSeqCtrl_14_set");

    elt.add_element(ApplSeqCtrl_14);
  } // end ApplSeqCtrl
  { // SecL
    xml_element SecL_0{"SecL"};
    multiset<string> SecL_0_set;
    SecL_0.add_attribute("Ccy", "CHF"); // 1
    SecL_0_set.insert("CHF");
    SecL_0.add_attribute("TxnTm", "RelSymTransactTime_t_1039448186"); // 1
    SecL_0_set.insert("RelSymTransactTime_t_1039448186");
    SecL_0.add_attribute("Txt", "Text_t_300312012"); // 1
    SecL_0_set.insert("Text_t_300312012");
    SecL_0.add_attribute("EncTxtLen", "875487880"); // 1
    SecL_0_set.insert("875487880");
    SecL_0.add_attribute("EncTxt", "EncodedText_t_122360820"); // 1
    SecL_0_set.insert("EncodedText_t_122360820");
    all_values.push_back(SecL_0_set);
    all_compo_names.insert("SecL_0_set");

    {
      xml_element Instrmt_76{"Instrmt"};
      multiset<string> Instrmt_76_set;
      Instrmt_76.add_attribute("Sym", "Symbol_t_1594945333"); // 2
      Instrmt_76_set.insert("Symbol_t_1594945333");
      Instrmt_76.add_attribute("Sfx", "WI"); // 2
      Instrmt_76_set.insert("WI");
      Instrmt_76.add_attribute("ID", "SecurityID_t_50857049"); // 2
      Instrmt_76_set.insert("SecurityID_t_50857049");
      Instrmt_76.add_attribute("Src", "D"); // 2
      Instrmt_76_set.insert("D");
      Instrmt_76.add_attribute("Prod", "3"); // 2
      Instrmt_76_set.insert("3");
      Instrmt_76.add_attribute("ProdCmplx", "ProductComplex_t_1473644676"); // 2
      Instrmt_76_set.insert("ProductComplex_t_1473644676");
      Instrmt_76.add_attribute("SecGrp", "SecurityGroup_t_1697434472"); // 2
      Instrmt_76_set.insert("SecurityGroup_t_1697434472");
      Instrmt_76.add_attribute("CFI", "CFICode_t_1860228740"); // 2
      Instrmt_76_set.insert("CFICode_t_1860228740");
      Instrmt_76.add_attribute("SecTyp", "MATURED"); // 2
      Instrmt_76_set.insert("MATURED");
      Instrmt_76.add_attribute("SubTyp", "SecuritySubType_t_526990241"); // 2
      Instrmt_76_set.insert("SecuritySubType_t_526990241");
      Instrmt_76.add_attribute("MMY", "1899276187"); // 2
      Instrmt_76_set.insert("1899276187");
      Instrmt_76.add_attribute("MatDt", "MaturityDate_t_1439781212"); // 2
      Instrmt_76_set.insert("MaturityDate_t_1439781212");
      Instrmt_76.add_attribute("MatTm", "306421640"); // 2
      Instrmt_76_set.insert("306421640");
      Instrmt_76.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1325642948"); // 2
      Instrmt_76_set.insert("SettleOnOpenFlag_t_1325642948");
      Instrmt_76.add_attribute("AsgnMeth", "1069397722"); // 2
      Instrmt_76_set.insert("1069397722");
      Instrmt_76.add_attribute("Status", "2"); // 2
      Instrmt_76_set.insert("2");
      Instrmt_76.add_attribute("CpnPmt", "CouponPaymentDate_t_995592439"); // 2
      Instrmt_76_set.insert("CouponPaymentDate_t_995592439");
      Instrmt_76.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_76_set.insert("MM");
      Instrmt_76.add_attribute("Snrty", "SD"); // 2
      Instrmt_76_set.insert("SD");
      Instrmt_76.add_attribute("NotlPctOut", "8188011.350000"); // 2
      Instrmt_76_set.insert("8188011.350000");
      Instrmt_76.add_attribute("OrigNotlPctOut", "5387253.600000"); // 2
      Instrmt_76_set.insert("5387253.600000");
      Instrmt_76.add_attribute("AttchPnt", "3462687.250000"); // 2
      Instrmt_76_set.insert("3462687.250000");
      Instrmt_76.add_attribute("DetchPnt", "3781198.380000"); // 2
      Instrmt_76_set.insert("3781198.380000");
      Instrmt_76.add_attribute("Issued", "IssueDate_t_864085423"); // 2
      Instrmt_76_set.insert("IssueDate_t_864085423");
      Instrmt_76.add_attribute("RepoCollSecTyp", "750770635"); // 2
      Instrmt_76_set.insert("750770635");
      Instrmt_76.add_attribute("RepoTrm", "2082918350"); // 2
      Instrmt_76_set.insert("2082918350");
      Instrmt_76.add_attribute("RepoRt", "6588014.120000"); // 2
      Instrmt_76_set.insert("6588014.120000");
      Instrmt_76.add_attribute("Fctr", "17902188.210000"); // 2
      Instrmt_76_set.insert("17902188.210000");
      Instrmt_76.add_attribute("CrdRtg", "CreditRating_t_235746714"); // 2
      Instrmt_76_set.insert("CreditRating_t_235746714");
      Instrmt_76.add_attribute("Rgstry", "InstrRegistry_t_1534289292"); // 2
      Instrmt_76_set.insert("InstrRegistry_t_1534289292");
      Instrmt_76.add_attribute("IssuCtry", "1912579642"); // 2
      Instrmt_76_set.insert("1912579642");
      Instrmt_76.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1830692047"); // 2
      Instrmt_76_set.insert("StateOrProvinceOfIssue_t_1830692047");
      Instrmt_76.add_attribute("Lcl", "LocaleOfIssue_t_1478290694"); // 2
      Instrmt_76_set.insert("LocaleOfIssue_t_1478290694");
      Instrmt_76.add_attribute("Redeem", "RedemptionDate_t_1963436691"); // 2
      Instrmt_76_set.insert("RedemptionDate_t_1963436691");
      Instrmt_76.add_attribute("StrkPx", "11815097.000000"); // 2
      Instrmt_76_set.insert("11815097.000000");
      Instrmt_76.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_76_set.insert("GBP");
      Instrmt_76.add_attribute("StrkMult", "7314605.240000"); // 2
      Instrmt_76_set.insert("7314605.240000");
      Instrmt_76.add_attribute("StrkValu", "9900487.480000"); // 2
      Instrmt_76_set.insert("9900487.480000");
      Instrmt_76.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("StrkPxBndryPrcsn", "7418412.870000"); // 2
      Instrmt_76_set.insert("7418412.870000");
      Instrmt_76.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("OptAt", "1564872405"); // 2
      Instrmt_76_set.insert("1564872405");
      Instrmt_76.add_attribute("Mult", "20674842.360000"); // 2
      Instrmt_76_set.insert("20674842.360000");
      Instrmt_76.add_attribute("MultTyp", "2"); // 2
      Instrmt_76_set.insert("2");
      Instrmt_76.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("MinPxIncr", "9155930.270000"); // 2
      Instrmt_76_set.insert("9155930.270000");
      Instrmt_76.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_361358193"); // 2
      Instrmt_76_set.insert("MinPriceIncrementAmount_t_361358193");
      Instrmt_76.add_attribute("UOM", "Bu"); // 2
      Instrmt_76_set.insert("Bu");
      Instrmt_76.add_attribute("UOMQty", "17343941.630000"); // 2
      Instrmt_76_set.insert("17343941.630000");
      Instrmt_76.add_attribute("PxUOM", "tn"); // 2
      Instrmt_76_set.insert("tn");
      Instrmt_76.add_attribute("PxUOMQty", "2776242.400000"); // 2
      Instrmt_76_set.insert("2776242.400000");
      Instrmt_76.add_attribute("SettlMeth", "P"); // 2
      Instrmt_76_set.insert("P");
      Instrmt_76.add_attribute("ExerStyle", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_76_set.insert("3");
      Instrmt_76.add_attribute("OptPayAmt", "OptPayoutAmount_t_2047948703"); // 2
      Instrmt_76_set.insert("OptPayoutAmount_t_2047948703");
      Instrmt_76.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_76_set.insert("INX");
      Instrmt_76.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_76_set.insert("CDSD");
      Instrmt_76.add_attribute("ListMeth", "0"); // 2
      Instrmt_76_set.insert("0");
      Instrmt_76.add_attribute("CapPx", "18097760.330000"); // 2
      Instrmt_76_set.insert("18097760.330000");
      Instrmt_76.add_attribute("FlrPx", "4362260.430000"); // 2
      Instrmt_76_set.insert("4362260.430000");
      Instrmt_76.add_attribute("PutCall", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("FlexInd", "false"); // 2
      Instrmt_76_set.insert("false");
      Instrmt_76.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_76_set.insert("true");
      Instrmt_76.add_attribute("TmUnit", "H"); // 2
      Instrmt_76_set.insert("H");
      Instrmt_76.add_attribute("CpnRt", "2704030.870000"); // 2
      Instrmt_76_set.insert("2704030.870000");
      Instrmt_76.add_attribute("Exch", "SecurityExchange_t_1541776806"); // 2
      Instrmt_76_set.insert("SecurityExchange_t_1541776806");
      Instrmt_76.add_attribute("PosLmt", "1732390393"); // 2
      Instrmt_76_set.insert("1732390393");
      Instrmt_76.add_attribute("NTPosLmt", "1260451835"); // 2
      Instrmt_76_set.insert("1260451835");
      Instrmt_76.add_attribute("Issr", "Issuer_t_2017096570"); // 2
      Instrmt_76_set.insert("Issuer_t_2017096570");
      Instrmt_76.add_attribute("EncIssrLen", "843357510"); // 2
      Instrmt_76_set.insert("843357510");
      Instrmt_76.add_attribute("EncIssr", "EncodedIssuer_t_2002293123"); // 2
      Instrmt_76_set.insert("EncodedIssuer_t_2002293123");
      Instrmt_76.add_attribute("Desc", "SecurityDesc_t_1784713898"); // 2
      Instrmt_76_set.insert("SecurityDesc_t_1784713898");
      Instrmt_76.add_attribute("EncSecDescLen", "260746267"); // 2
      Instrmt_76_set.insert("260746267");
      Instrmt_76.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1922293711"); // 2
      Instrmt_76_set.insert("EncodedSecurityDesc_t_1922293711");
      Instrmt_76.add_attribute("Pool", "Pool_t_474245301"); // 2
      Instrmt_76_set.insert("Pool_t_474245301");
      Instrmt_76.add_attribute("CSetMo", "493378233"); // 2
      Instrmt_76_set.insert("493378233");
      Instrmt_76.add_attribute("CPPgm", "2"); // 2
      Instrmt_76_set.insert("2");
      Instrmt_76.add_attribute("CPRegT", "CPRegType_t_835603494"); // 2
      Instrmt_76_set.insert("CPRegType_t_835603494");
      Instrmt_76.add_attribute("Dated", "DatedDate_t_424733748"); // 2
      Instrmt_76_set.insert("DatedDate_t_424733748");
      Instrmt_76.add_attribute("IntAcrl", "InterestAccrualDate_t_277313605"); // 2
      Instrmt_76_set.insert("InterestAccrualDate_t_277313605");
      all_values.push_back(Instrmt_76_set);
      all_compo_names.insert("Instrmt_76_set");

      {
        xml_element AID_79{"AID"};
        multiset<string> AID_79_set;
        AID_79.add_attribute("AltID", "SecurityAltID_t_1735687047"); // 3
        AID_79_set.insert("SecurityAltID_t_1735687047");
        AID_79.add_attribute("AltIDSrc", "3"); // 3
        AID_79_set.insert("3");
        all_values.push_back(AID_79_set);
        all_compo_names.insert("AID_79_set");

        Instrmt_76.add_element(AID_79);
      }
      {
        xml_element SecXML_79{"SecXML"};
        multiset<string> SecXML_79_set;
        SecXML_79.add_attribute("Schema", "SecurityXMLSchema_t_242343958"); // 3
        SecXML_79_set.insert("SecurityXMLSchema_t_242343958");
        all_values.push_back(SecXML_79_set);
        all_compo_names.insert("SecXML_79_set");

        Instrmt_76.add_element(SecXML_79);
      }
      {
        xml_element Evnt_79{"Evnt"};
        multiset<string> Evnt_79_set;
        Evnt_79.add_attribute("EventTyp", "15"); // 3
        Evnt_79_set.insert("15");
        Evnt_79.add_attribute("Dt", "EventDate_t_1730752864"); // 3
        Evnt_79_set.insert("EventDate_t_1730752864");
        Evnt_79.add_attribute("Tm", "EventTime_t_142809014"); // 3
        Evnt_79_set.insert("EventTime_t_142809014");
        Evnt_79.add_attribute("Px", "16278591.160000"); // 3
        Evnt_79_set.insert("16278591.160000");
        Evnt_79.add_attribute("Txt", "EventText_t_254399265"); // 3
        Evnt_79_set.insert("EventText_t_254399265");
        all_values.push_back(Evnt_79_set);
        all_compo_names.insert("Evnt_79_set");

        Instrmt_76.add_element(Evnt_79);
      }
      {
        xml_element Pty_409{"Pty"};
        multiset<string> Pty_409_set;
        Pty_409.add_attribute("ID", "InstrumentPartyID_t_279020784"); // 3
        Pty_409_set.insert("InstrumentPartyID_t_279020784");
        Pty_409.add_attribute("Src", "9"); // 3
        Pty_409_set.insert("9");
        Pty_409.add_attribute("R", "74"); // 3
        Pty_409_set.insert("74");
        all_values.push_back(Pty_409_set);
        all_compo_names.insert("Pty_409_set");

        {
          xml_element Sub_409{"Sub"};
          multiset<string> Sub_409_set;
          Sub_409.add_attribute("ID", "InstrumentPartySubID_t_98440953"); // 4
          Sub_409_set.insert("InstrumentPartySubID_t_98440953");
          Sub_409.add_attribute("Typ", "4"); // 4
          Sub_409_set.insert("4");
          all_values.push_back(Sub_409_set);
          all_compo_names.insert("Sub_409_set");

          Pty_409.add_element(Sub_409);
        }
        Instrmt_76.add_element(Pty_409);
      }
      {
        xml_element CmplxEvnt_76{"CmplxEvnt"};
        multiset<string> CmplxEvnt_76_set;
        CmplxEvnt_76.add_attribute("Typ", "8"); // 3
        CmplxEvnt_76_set.insert("8");
        CmplxEvnt_76.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1099370823"); // 3
        CmplxEvnt_76_set.insert("ComplexOptPayoutAmount_t_1099370823");
        CmplxEvnt_76.add_attribute("Px", "5536540.210000"); // 3
        CmplxEvnt_76_set.insert("5536540.210000");
        CmplxEvnt_76.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_76_set.insert("4");
        CmplxEvnt_76.add_attribute("PxBndryPrcsn", "6842775.680000"); // 3
        CmplxEvnt_76_set.insert("6842775.680000");
        CmplxEvnt_76.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_76_set.insert("1");
        CmplxEvnt_76.add_attribute("Cond", "2"); // 3
        CmplxEvnt_76_set.insert("2");
        all_values.push_back(CmplxEvnt_76_set);
        all_compo_names.insert("CmplxEvnt_76_set");

        {
          xml_element EvntDts_76{"EvntDts"};
          multiset<string> EvntDts_76_set;
          EvntDts_76.add_attribute("StartDt", "ComplexEventStartDate_t_1527635079"); // 4
          EvntDts_76_set.insert("ComplexEventStartDate_t_1527635079");
          EvntDts_76.add_attribute("EndDt", "ComplexEventEndDate_t_1668915331"); // 4
          EvntDts_76_set.insert("ComplexEventEndDate_t_1668915331");
          all_values.push_back(EvntDts_76_set);
          all_compo_names.insert("EvntDts_76_set");

          {
            xml_element EvntTms_76{"EvntTms"};
            multiset<string> EvntTms_76_set;
            EvntTms_76.add_attribute("StartTm", "1991424374"); // 5
            EvntTms_76_set.insert("1991424374");
            EvntTms_76.add_attribute("EndTm", "1788381346"); // 5
            EvntTms_76_set.insert("1788381346");
            all_values.push_back(EvntTms_76_set);
            all_compo_names.insert("EvntTms_76_set");

            EvntDts_76.add_element(EvntTms_76);
          }
          CmplxEvnt_76.add_element(EvntDts_76);
        }
        Instrmt_76.add_element(CmplxEvnt_76);
      }
      SecL_0.add_element(Instrmt_76);
    }
    {
      xml_element InstrmtExt_11{"InstrmtExt"};
      multiset<string> InstrmtExt_11_set;
      InstrmtExt_11.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_11_set.insert("1");
      InstrmtExt_11.add_attribute("PctAtRisk", "3181860.270000"); // 2
      InstrmtExt_11_set.insert("3181860.270000");
      all_values.push_back(InstrmtExt_11_set);
      all_compo_names.insert("InstrmtExt_11_set");

      {
        xml_element Attrb_19{"Attrb"};
        multiset<string> Attrb_19_set;
        Attrb_19.add_attribute("Typ", "20"); // 3
        Attrb_19_set.insert("20");
        Attrb_19.add_attribute("Val", "InstrAttribValue_t_2134128485"); // 3
        Attrb_19_set.insert("InstrAttribValue_t_2134128485");
        all_values.push_back(Attrb_19_set);
        all_compo_names.insert("Attrb_19_set");

        InstrmtExt_11.add_element(Attrb_19);
      }
      SecL_0.add_element(InstrmtExt_11);
    }
    {
      xml_element FinDetls_27{"FinDetls"};
      multiset<string> FinDetls_27_set;
      FinDetls_27.add_attribute("AgmtDesc", "AgreementDesc_t_1153789521"); // 2
      FinDetls_27_set.insert("AgreementDesc_t_1153789521");
      FinDetls_27.add_attribute("AgmtID", "AgreementID_t_559009680"); // 2
      FinDetls_27_set.insert("AgreementID_t_559009680");
      FinDetls_27.add_attribute("AgmtDt", "AgreementDate_t_263958442"); // 2
      FinDetls_27_set.insert("AgreementDate_t_263958442");
      FinDetls_27.add_attribute("AgmtCcy", "CAN"); // 2
      FinDetls_27_set.insert("CAN");
      FinDetls_27.add_attribute("TrmTyp", "2"); // 2
      FinDetls_27_set.insert("2");
      FinDetls_27.add_attribute("StartDt", "StartDate_t_2094365295"); // 2
      FinDetls_27_set.insert("StartDate_t_2094365295");
      FinDetls_27.add_attribute("EndDt", "EndDate_t_844636885"); // 2
      FinDetls_27_set.insert("EndDate_t_844636885");
      FinDetls_27.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_27_set.insert("3");
      FinDetls_27.add_attribute("MgnRatio", "15747407.640000"); // 2
      FinDetls_27_set.insert("15747407.640000");
      all_values.push_back(FinDetls_27_set);
      all_compo_names.insert("FinDetls_27_set");

      SecL_0.add_element(FinDetls_27);
    }
    {
      xml_element SecTrdgRules_6{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_8{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_8_set;
        BaseTrdgRules_8.add_attribute("ExpirationCycle", "1"); // 3
        BaseTrdgRules_8_set.insert("1");
        BaseTrdgRules_8.add_attribute("MinTrdVol", "9281321.990000"); // 3
        BaseTrdgRules_8_set.insert("9281321.990000");
        BaseTrdgRules_8.add_attribute("MaxTrdVol", "7174086.180000"); // 3
        BaseTrdgRules_8_set.insert("7174086.180000");
        BaseTrdgRules_8.add_attribute("MxPxVar", "17896614.580000"); // 3
        BaseTrdgRules_8_set.insert("17896614.580000");
        BaseTrdgRules_8.add_attribute("ImpldMktInd", "0"); // 3
        BaseTrdgRules_8_set.insert("0");
        BaseTrdgRules_8.add_attribute("TrdCcy", "USD"); // 3
        BaseTrdgRules_8_set.insert("USD");
        BaseTrdgRules_8.add_attribute("RndLot", "21259439.750000"); // 3
        BaseTrdgRules_8_set.insert("21259439.750000");
        BaseTrdgRules_8.add_attribute("MlegModel", "0"); // 3
        BaseTrdgRules_8_set.insert("0");
        BaseTrdgRules_8.add_attribute("MlegPxMeth", "3"); // 3
        BaseTrdgRules_8_set.insert("3");
        BaseTrdgRules_8.add_attribute("PxTyp", "1"); // 3
        BaseTrdgRules_8_set.insert("1");
        all_values.push_back(BaseTrdgRules_8_set);
        all_compo_names.insert("BaseTrdgRules_8_set");

        {
          xml_element TickRules_8{"TickRules"};
          multiset<string> TickRules_8_set;
          TickRules_8.add_attribute("StartTickPxRng", "12209357.810000"); // 4
          TickRules_8_set.insert("12209357.810000");
          TickRules_8.add_attribute("EndTickPxRng", "11287902.330000"); // 4
          TickRules_8_set.insert("11287902.330000");
          TickRules_8.add_attribute("TickIncr", "428893.270000"); // 4
          TickRules_8_set.insert("428893.270000");
          TickRules_8.add_attribute("TickRuleTyp", "4"); // 4
          TickRules_8_set.insert("4");
          all_values.push_back(TickRules_8_set);
          all_compo_names.insert("TickRules_8_set");

          BaseTrdgRules_8.add_element(TickRules_8);
        }
        {
          xml_element LotTypeRules_8{"LotTypeRules"};
          multiset<string> LotTypeRules_8_set;
          LotTypeRules_8.add_attribute("LotTyp", "4"); // 4
          LotTypeRules_8_set.insert("4");
          LotTypeRules_8.add_attribute("MinLotSz", "18312706.730000"); // 4
          LotTypeRules_8_set.insert("18312706.730000");
          all_values.push_back(LotTypeRules_8_set);
          all_compo_names.insert("LotTypeRules_8_set");

          BaseTrdgRules_8.add_element(LotTypeRules_8);
        }
        {
          xml_element PxLmts_8{"PxLmts"};
          multiset<string> PxLmts_8_set;
          PxLmts_8.add_attribute("PxLmtTyp", "0"); // 4
          PxLmts_8_set.insert("0");
          PxLmts_8.add_attribute("LowLmtPx", "12909169.860000"); // 4
          PxLmts_8_set.insert("12909169.860000");
          PxLmts_8.add_attribute("HiLmtPx", "19655466.050000"); // 4
          PxLmts_8_set.insert("19655466.050000");
          PxLmts_8.add_attribute("TrdgRefPx", "252540.480000"); // 4
          PxLmts_8_set.insert("252540.480000");
          all_values.push_back(PxLmts_8_set);
          all_compo_names.insert("PxLmts_8_set");

          BaseTrdgRules_8.add_element(PxLmts_8);
        }
        SecTrdgRules_6.add_element(BaseTrdgRules_8);
      }
      {
        xml_element TrdgSesRulesGrp_6{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_6_set;
        TrdgSesRulesGrp_6.add_attribute("SesID", "2"); // 3
        TrdgSesRulesGrp_6_set.insert("2");
        TrdgSesRulesGrp_6.add_attribute("SesSub", "6"); // 3
        TrdgSesRulesGrp_6_set.insert("6");
        all_values.push_back(TrdgSesRulesGrp_6_set);
        all_compo_names.insert("TrdgSesRulesGrp_6_set");

        {
          xml_element TrdgSesRules_6{"TrdgSesRules"};
          {
            xml_element OrdTypRules_12{"OrdTypRules"};
            multiset<string> OrdTypRules_12_set;
            OrdTypRules_12.add_attribute("OrdTyp", "B"); // 5
            OrdTypRules_12_set.insert("B");
            all_values.push_back(OrdTypRules_12_set);
            all_compo_names.insert("OrdTypRules_12_set");

            TrdgSesRules_6.add_element(OrdTypRules_12);
          }
          {
            xml_element TmInForceRules_8{"TmInForceRules"};
            multiset<string> TmInForceRules_8_set;
            TmInForceRules_8.add_attribute("TmInForce", "9"); // 5
            TmInForceRules_8_set.insert("9");
            all_values.push_back(TmInForceRules_8_set);
            all_compo_names.insert("TmInForceRules_8_set");

            TrdgSesRules_6.add_element(TmInForceRules_8);
          }
          {
            xml_element ExecInstRules_11{"ExecInstRules"};
            multiset<string> ExecInstRules_11_set;
            ExecInstRules_11.add_attribute("ExecInstValu", "V"); // 5
            ExecInstRules_11_set.insert("V");
            all_values.push_back(ExecInstRules_11_set);
            all_compo_names.insert("ExecInstRules_11_set");

            TrdgSesRules_6.add_element(ExecInstRules_11);
          }
          {
            xml_element MtchRules_6{"MtchRules"};
            multiset<string> MtchRules_6_set;
            MtchRules_6.add_attribute("MtchAlgo", "MatchAlgorithm_t_795514891"); // 5
            MtchRules_6_set.insert("MatchAlgorithm_t_795514891");
            MtchRules_6.add_attribute("MtchTyp", "A3"); // 5
            MtchRules_6_set.insert("A3");
            all_values.push_back(MtchRules_6_set);
            all_compo_names.insert("MtchRules_6_set");

            TrdgSesRules_6.add_element(MtchRules_6);
          }
          {
            xml_element MDFeedTyps_6{"MDFeedTyps"};
            multiset<string> MDFeedTyps_6_set;
            MDFeedTyps_6.add_attribute("MDFeedTyp", "MDFeedType_t_335593544"); // 5
            MDFeedTyps_6_set.insert("MDFeedType_t_335593544");
            MDFeedTyps_6.add_attribute("MktDepth", "1444626306"); // 5
            MDFeedTyps_6_set.insert("1444626306");
            MDFeedTyps_6.add_attribute("MDBkTyp", "2"); // 5
            MDFeedTyps_6_set.insert("2");
            all_values.push_back(MDFeedTyps_6_set);
            all_compo_names.insert("MDFeedTyps_6_set");

            TrdgSesRules_6.add_element(MDFeedTyps_6);
          }
          TrdgSesRulesGrp_6.add_element(TrdgSesRules_6);
        }
        SecTrdgRules_6.add_element(TrdgSesRulesGrp_6);
      }
      {
        xml_element Attrb_20{"Attrb"};
        multiset<string> Attrb_20_set;
        Attrb_20.add_attribute("Typ", "24"); // 3
        Attrb_20_set.insert("24");
        Attrb_20.add_attribute("Val", "NestedInstrAttribValue_t_225274857"); // 3
        Attrb_20_set.insert("NestedInstrAttribValue_t_225274857");
        all_values.push_back(Attrb_20_set);
        all_compo_names.insert("Attrb_20_set");

        SecTrdgRules_6.add_element(Attrb_20);
      }
      SecL_0.add_element(SecTrdgRules_6);
    }
    {
      xml_element StrkRules_6{"StrkRules"};
      multiset<string> StrkRules_6_set;
      StrkRules_6.add_attribute("StrkRule", "StrikeRuleID_t_1130763160"); // 2
      StrkRules_6_set.insert("StrikeRuleID_t_1130763160");
      StrkRules_6.add_attribute("StartStrkPxRng", "10768075.040000"); // 2
      StrkRules_6_set.insert("10768075.040000");
      StrkRules_6.add_attribute("EndStrkPxRng", "12518480.100000"); // 2
      StrkRules_6_set.insert("12518480.100000");
      StrkRules_6.add_attribute("StrkIncr", "21314227.120000"); // 2
      StrkRules_6_set.insert("21314227.120000");
      StrkRules_6.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_6_set.insert("2");
      all_values.push_back(StrkRules_6_set);
      all_compo_names.insert("StrkRules_6_set");

      {
        xml_element MatRules_6{"MatRules"};
        multiset<string> MatRules_6_set;
        MatRules_6.add_attribute("MatRuleID", "MaturityRuleID_t_1230308337"); // 3
        MatRules_6_set.insert("MaturityRuleID_t_1230308337");
        MatRules_6.add_attribute("MMYFmt", "2"); // 3
        MatRules_6_set.insert("2");
        MatRules_6.add_attribute("MMYIncrUnits", "2"); // 3
        MatRules_6_set.insert("2");
        MatRules_6.add_attribute("StartMMY", "1893046233"); // 3
        MatRules_6_set.insert("1893046233");
        MatRules_6.add_attribute("EndMMY", "611704769"); // 3
        MatRules_6_set.insert("611704769");
        MatRules_6.add_attribute("MMYIncr", "1565176051"); // 3
        MatRules_6_set.insert("1565176051");
        all_values.push_back(MatRules_6_set);
        all_compo_names.insert("MatRules_6_set");

        StrkRules_6.add_element(MatRules_6);
      }
      SecL_0.add_element(StrkRules_6);
    }
    {
      xml_element Undly_109{"Undly"};
      multiset<string> Undly_109_set;
      Undly_109.add_attribute("Sym", "UnderlyingSymbol_t_1935935560"); // 2
      Undly_109_set.insert("UnderlyingSymbol_t_1935935560");
      Undly_109.add_attribute("Sfx", "CD"); // 2
      Undly_109_set.insert("CD");
      Undly_109.add_attribute("ID", "UnderlyingSecurityID_t_390423362"); // 2
      Undly_109_set.insert("UnderlyingSecurityID_t_390423362");
      Undly_109.add_attribute("Src", "K"); // 2
      Undly_109_set.insert("K");
      Undly_109.add_attribute("Prod", "9"); // 2
      Undly_109_set.insert("9");
      Undly_109.add_attribute("CFI", "UnderlyingCFICode_t_1681340348"); // 2
      Undly_109_set.insert("UnderlyingCFICode_t_1681340348");
      Undly_109.add_attribute("SecTyp", "FAC"); // 2
      Undly_109_set.insert("FAC");
      Undly_109.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1417935493"); // 2
      Undly_109_set.insert("UnderlyingSecuritySubType_t_1417935493");
      Undly_109.add_attribute("MMY", "1978563207"); // 2
      Undly_109_set.insert("1978563207");
      Undly_109.add_attribute("Mat", "UnderlyingMaturityDate_t_1814858181"); // 2
      Undly_109_set.insert("UnderlyingMaturityDate_t_1814858181");
      Undly_109.add_attribute("MatTm", "1707147983"); // 2
      Undly_109_set.insert("1707147983");
      Undly_109.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_870295338"); // 2
      Undly_109_set.insert("UnderlyingCouponPaymentDate_t_870295338");
      Undly_109.add_attribute("RestrctTyp", "FR"); // 2
      Undly_109_set.insert("FR");
      Undly_109.add_attribute("Snrty", "SB"); // 2
      Undly_109_set.insert("SB");
      Undly_109.add_attribute("NotlPctOut", "18563927.640000"); // 2
      Undly_109_set.insert("18563927.640000");
      Undly_109.add_attribute("OrigNotlPctOut", "16414083.840000"); // 2
      Undly_109_set.insert("16414083.840000");
      Undly_109.add_attribute("AttchPnt", "17998055.330000"); // 2
      Undly_109_set.insert("17998055.330000");
      Undly_109.add_attribute("DetchPnt", "1222636.590000"); // 2
      Undly_109_set.insert("1222636.590000");
      Undly_109.add_attribute("Issued", "UnderlyingIssueDate_t_928554430"); // 2
      Undly_109_set.insert("UnderlyingIssueDate_t_928554430");
      Undly_109.add_attribute("RepoCollSecTyp", "2025080391"); // 2
      Undly_109_set.insert("2025080391");
      Undly_109.add_attribute("RepoTrm", "1253026819"); // 2
      Undly_109_set.insert("1253026819");
      Undly_109.add_attribute("RepoRt", "20053619.340000"); // 2
      Undly_109_set.insert("20053619.340000");
      Undly_109.add_attribute("Fctr", "11294447.530000"); // 2
      Undly_109_set.insert("11294447.530000");
      Undly_109.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1236965883"); // 2
      Undly_109_set.insert("UnderlyingCreditRating_t_1236965883");
      Undly_109.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1519667995"); // 2
      Undly_109_set.insert("UnderlyingInstrRegistry_t_1519667995");
      Undly_109.add_attribute("Ctry", "212269442"); // 2
      Undly_109_set.insert("212269442");
      Undly_109.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_627734872"); // 2
      Undly_109_set.insert("UnderlyingStateOrProvinceOfIssue_t_627734872");
      Undly_109.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1956053813"); // 2
      Undly_109_set.insert("UnderlyingLocaleOfIssue_t_1956053813");
      Undly_109.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2105315676"); // 2
      Undly_109_set.insert("UnderlyingRedemptionDate_t_2105315676");
      Undly_109.add_attribute("StrkPx", "12394396.410000"); // 2
      Undly_109_set.insert("12394396.410000");
      Undly_109.add_attribute("StrkCcy", "GBP"); // 2
      Undly_109_set.insert("GBP");
      Undly_109.add_attribute("OptA", "446028227"); // 2
      Undly_109_set.insert("446028227");
      Undly_109.add_attribute("Mult", "17641695.780000"); // 2
      Undly_109_set.insert("17641695.780000");
      Undly_109.add_attribute("MultTyp", "2"); // 2
      Undly_109_set.insert("2");
      Undly_109.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_109_set.insert("2");
      Undly_109.add_attribute("UOM", "Gal"); // 2
      Undly_109_set.insert("Gal");
      Undly_109.add_attribute("UOMQty", "6563084.220000"); // 2
      Undly_109_set.insert("6563084.220000");
      Undly_109.add_attribute("PxUOM", "USD"); // 2
      Undly_109_set.insert("USD");
      Undly_109.add_attribute("PxUOMQty", "11291058.370000"); // 2
      Undly_109_set.insert("11291058.370000");
      Undly_109.add_attribute("TmUnit", "Min"); // 2
      Undly_109_set.insert("Min");
      Undly_109.add_attribute("ExerStyle", "0"); // 2
      Undly_109_set.insert("0");
      Undly_109.add_attribute("CpnRt", "19994011.750000"); // 2
      Undly_109_set.insert("19994011.750000");
      Undly_109.add_attribute("Exch", "UnderlyingSecurityExchange_t_1629497796"); // 2
      Undly_109_set.insert("UnderlyingSecurityExchange_t_1629497796");
      Undly_109.add_attribute("Issr", "UnderlyingIssuer_t_1024005080"); // 2
      Undly_109_set.insert("UnderlyingIssuer_t_1024005080");
      Undly_109.add_attribute("EncUndIssrLen", "1708310291"); // 2
      Undly_109_set.insert("1708310291");
      Undly_109.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1123422532"); // 2
      Undly_109_set.insert("EncodedUnderlyingIssuer_t_1123422532");
      Undly_109.add_attribute("Desc", "UnderlyingSecurityDesc_t_676326965"); // 2
      Undly_109_set.insert("UnderlyingSecurityDesc_t_676326965");
      Undly_109.add_attribute("EncUndSecDescLen", "1830573950"); // 2
      Undly_109_set.insert("1830573950");
      Undly_109.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2051976963"); // 2
      Undly_109_set.insert("EncodedUnderlyingSecurityDesc_t_2051976963");
      Undly_109.add_attribute("CPPgm", "UnderlyingCPProgram_t_553923708"); // 2
      Undly_109_set.insert("UnderlyingCPProgram_t_553923708");
      Undly_109.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_936117122"); // 2
      Undly_109_set.insert("UnderlyingCPRegType_t_936117122");
      Undly_109.add_attribute("AllocPct", "19098552.490000"); // 2
      Undly_109_set.insert("19098552.490000");
      Undly_109.add_attribute("Ccy", "CHF"); // 2
      Undly_109_set.insert("CHF");
      Undly_109.add_attribute("Qty", "12820395.960000"); // 2
      Undly_109_set.insert("12820395.960000");
      Undly_109.add_attribute("SettlTyp", "4"); // 2
      Undly_109_set.insert("4");
      Undly_109.add_attribute("CashAmt", "UnderlyingCashAmount_t_653334229"); // 2
      Undly_109_set.insert("UnderlyingCashAmount_t_653334229");
      Undly_109.add_attribute("CashTyp", "DIFF"); // 2
      Undly_109_set.insert("DIFF");
      Undly_109.add_attribute("Px", "18534699.320000"); // 2
      Undly_109_set.insert("18534699.320000");
      Undly_109.add_attribute("DirtPx", "18927738.710000"); // 2
      Undly_109_set.insert("18927738.710000");
      Undly_109.add_attribute("EndPx", "3168723.290000"); // 2
      Undly_109_set.insert("3168723.290000");
      Undly_109.add_attribute("StartVal", "UnderlyingStartValue_t_1599753872"); // 2
      Undly_109_set.insert("UnderlyingStartValue_t_1599753872");
      Undly_109.add_attribute("CurVal", "UnderlyingCurrentValue_t_191318450"); // 2
      Undly_109_set.insert("UnderlyingCurrentValue_t_191318450");
      Undly_109.add_attribute("EndVal", "UnderlyingEndValue_t_2081041907"); // 2
      Undly_109_set.insert("UnderlyingEndValue_t_2081041907");
      Undly_109.add_attribute("AdjQty", "8182767.510000"); // 2
      Undly_109_set.insert("8182767.510000");
      Undly_109.add_attribute("FxRate", "20300281.230000"); // 2
      Undly_109_set.insert("20300281.230000");
      Undly_109.add_attribute("FxRateCalc", "D"); // 2
      Undly_109_set.insert("D");
      Undly_109.add_attribute("CapValu", "UnderlyingCapValue_t_1474585173"); // 2
      Undly_109_set.insert("UnderlyingCapValue_t_1474585173");
      Undly_109.add_attribute("SetMeth", "UnderlyingSettlMethod_t_991705992"); // 2
      Undly_109_set.insert("UnderlyingSettlMethod_t_991705992");
      Undly_109.add_attribute("PutCall", "213206726"); // 2
      Undly_109_set.insert("213206726");
      all_values.push_back(Undly_109_set);
      all_compo_names.insert("Undly_109_set");

      {
        xml_element UndAID_109{"UndAID"};
        multiset<string> UndAID_109_set;
        UndAID_109.add_attribute("AltID", "UnderlyingSecurityAltID_t_1798268128"); // 3
        UndAID_109_set.insert("UnderlyingSecurityAltID_t_1798268128");
        UndAID_109.add_attribute("AltIDSrc", "6"); // 3
        UndAID_109_set.insert("6");
        all_values.push_back(UndAID_109_set);
        all_compo_names.insert("UndAID_109_set");

        Undly_109.add_element(UndAID_109);
      }
      {
        xml_element Stip_170{"Stip"};
        multiset<string> Stip_170_set;
        Stip_170.add_attribute("Typ", "HEP"); // 3
        Stip_170_set.insert("HEP");
        Stip_170.add_attribute("Val", "UnderlyingStipValue_t_1280282276"); // 3
        Stip_170_set.insert("UnderlyingStipValue_t_1280282276");
        all_values.push_back(Stip_170_set);
        all_compo_names.insert("Stip_170_set");

        Undly_109.add_element(Stip_170);
      }
      {
        xml_element Pty_410{"Pty"};
        multiset<string> Pty_410_set;
        Pty_410.add_attribute("ID", "UnderlyingInstrumentPartyID_t_537053277"); // 3
        Pty_410_set.insert("UnderlyingInstrumentPartyID_t_537053277");
        Pty_410.add_attribute("Src", "8"); // 3
        Pty_410_set.insert("8");
        Pty_410.add_attribute("R", "79"); // 3
        Pty_410_set.insert("79");
        all_values.push_back(Pty_410_set);
        all_compo_names.insert("Pty_410_set");

        {
          xml_element Sub_410{"Sub"};
          multiset<string> Sub_410_set;
          Sub_410.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1213380243"); // 4
          Sub_410_set.insert("UnderlyingInstrumentPartySubID_t_1213380243");
          Sub_410.add_attribute("Typ", "3"); // 4
          Sub_410_set.insert("3");
          all_values.push_back(Sub_410_set);
          all_compo_names.insert("Sub_410_set");

          Pty_410.add_element(Sub_410);
        }
        Undly_109.add_element(Pty_410);
      }
      SecL_0.add_element(Undly_109);
    }
    {
      xml_element Stip_171{"Stip"};
      multiset<string> Stip_171_set;
      Stip_171.add_attribute("Typ", "SALESCREDITOVR"); // 2
      Stip_171_set.insert("SALESCREDITOVR");
      Stip_171.add_attribute("Val", "StipulationValue_t_1767303951"); // 2
      Stip_171_set.insert("StipulationValue_t_1767303951");
      all_values.push_back(Stip_171_set);
      all_compo_names.insert("Stip_171_set");

      SecL_0.add_element(Stip_171);
    }
    {
      xml_element SecL_1{"SecL"};
      multiset<string> SecL_1_set;
      SecL_1.add_attribute("SwapTyp", "2"); // 2
      SecL_1_set.insert("2");
      SecL_1.add_attribute("SettlTyp", "1"); // 2
      SecL_1_set.insert("1");
      all_values.push_back(SecL_1_set);
      all_compo_names.insert("SecL_1_set");

      {
        xml_element Leg_95{"Leg"};
        multiset<string> Leg_95_set;
        Leg_95.add_attribute("Sym", "LegSymbol_t_1303188765"); // 3
        Leg_95_set.insert("LegSymbol_t_1303188765");
        Leg_95.add_attribute("Sfx", "WI"); // 3
        Leg_95_set.insert("WI");
        Leg_95.add_attribute("ID", "LegSecurityID_t_1205125674"); // 3
        Leg_95_set.insert("LegSecurityID_t_1205125674");
        Leg_95.add_attribute("Src", "4"); // 3
        Leg_95_set.insert("4");
        Leg_95.add_attribute("Prod", "9"); // 3
        Leg_95_set.insert("9");
        Leg_95.add_attribute("CFI", "LegCFICode_t_148251787"); // 3
        Leg_95_set.insert("LegCFICode_t_148251787");
        Leg_95.add_attribute("SecTyp", "TMCP"); // 3
        Leg_95_set.insert("TMCP");
        Leg_95.add_attribute("SecSubTyp", "LegSecuritySubType_t_669382131"); // 3
        Leg_95_set.insert("LegSecuritySubType_t_669382131");
        Leg_95.add_attribute("MMY", "465124117"); // 3
        Leg_95_set.insert("465124117");
        Leg_95.add_attribute("Mat", "LegMaturityDate_t_209599529"); // 3
        Leg_95_set.insert("LegMaturityDate_t_209599529");
        Leg_95.add_attribute("MatTm", "860700582"); // 3
        Leg_95_set.insert("860700582");
        Leg_95.add_attribute("CpnPmt", "LegCouponPaymentDate_t_398682376"); // 3
        Leg_95_set.insert("LegCouponPaymentDate_t_398682376");
        Leg_95.add_attribute("Issued", "LegIssueDate_t_1027876280"); // 3
        Leg_95_set.insert("LegIssueDate_t_1027876280");
        Leg_95.add_attribute("RepoCollSecTyp", "743245057"); // 3
        Leg_95_set.insert("743245057");
        Leg_95.add_attribute("RepoTrm", "1630266914"); // 3
        Leg_95_set.insert("1630266914");
        Leg_95.add_attribute("RepoRt", "3549778.050000"); // 3
        Leg_95_set.insert("3549778.050000");
        Leg_95.add_attribute("Fctr", "17349510.490000"); // 3
        Leg_95_set.insert("17349510.490000");
        Leg_95.add_attribute("CrdRtg", "LegCreditRating_t_1843473640"); // 3
        Leg_95_set.insert("LegCreditRating_t_1843473640");
        Leg_95.add_attribute("Rgstry", "LegInstrRegistry_t_5762286"); // 3
        Leg_95_set.insert("LegInstrRegistry_t_5762286");
        Leg_95.add_attribute("Ctry", "1247999247"); // 3
        Leg_95_set.insert("1247999247");
        Leg_95.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1908597894"); // 3
        Leg_95_set.insert("LegStateOrProvinceOfIssue_t_1908597894");
        Leg_95.add_attribute("Lcl", "LegLocaleOfIssue_t_1286044562"); // 3
        Leg_95_set.insert("LegLocaleOfIssue_t_1286044562");
        Leg_95.add_attribute("Redeem", "LegRedemptionDate_t_1785052524"); // 3
        Leg_95_set.insert("LegRedemptionDate_t_1785052524");
        Leg_95.add_attribute("Strk", "15345487.910000"); // 3
        Leg_95_set.insert("15345487.910000");
        Leg_95.add_attribute("StrkCcy", "EUR"); // 3
        Leg_95_set.insert("EUR");
        Leg_95.add_attribute("OptA", "843589990"); // 3
        Leg_95_set.insert("843589990");
        Leg_95.add_attribute("Cmult", "17029801.990000"); // 3
        Leg_95_set.insert("17029801.990000");
        Leg_95.add_attribute("MultTyp", "0"); // 3
        Leg_95_set.insert("0");
        Leg_95.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_95_set.insert("2");
        Leg_95.add_attribute("UOM", "t"); // 3
        Leg_95_set.insert("t");
        Leg_95.add_attribute("UOMQty", "17739581.880000"); // 3
        Leg_95_set.insert("17739581.880000");
        Leg_95.add_attribute("PxUOM", "Alw"); // 3
        Leg_95_set.insert("Alw");
        Leg_95.add_attribute("PxUOMQty", "6837083.030000"); // 3
        Leg_95_set.insert("6837083.030000");
        Leg_95.add_attribute("TmUnit", "Min"); // 3
        Leg_95_set.insert("Min");
        Leg_95.add_attribute("ExerStyle", "0"); // 3
        Leg_95_set.insert("0");
        Leg_95.add_attribute("CpnRt", "8319600.900000"); // 3
        Leg_95_set.insert("8319600.900000");
        Leg_95.add_attribute("Exch", "LegSecurityExchange_t_1435146866"); // 3
        Leg_95_set.insert("LegSecurityExchange_t_1435146866");
        Leg_95.add_attribute("Issr", "LegIssuer_t_805496383"); // 3
        Leg_95_set.insert("LegIssuer_t_805496383");
        Leg_95.add_attribute("EncLegIssrLen", "1297084207"); // 3
        Leg_95_set.insert("1297084207");
        Leg_95.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1644746395"); // 3
        Leg_95_set.insert("EncodedLegIssuer_t_1644746395");
        Leg_95.add_attribute("Desc", "LegSecurityDesc_t_1666196965"); // 3
        Leg_95_set.insert("LegSecurityDesc_t_1666196965");
        Leg_95.add_attribute("EncLegSecDescLen", "1695766584"); // 3
        Leg_95_set.insert("1695766584");
        Leg_95.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_525139028"); // 3
        Leg_95_set.insert("EncodedLegSecurityDesc_t_525139028");
        Leg_95.add_attribute("RatioQty", "2619583.740000"); // 3
        Leg_95_set.insert("2619583.740000");
        Leg_95.add_attribute("Side", "B"); // 3
        Leg_95_set.insert("B");
        Leg_95.add_attribute("Ccy", "EUR"); // 3
        Leg_95_set.insert("EUR");
        Leg_95.add_attribute("Pool", "LegPool_t_874539842"); // 3
        Leg_95_set.insert("LegPool_t_874539842");
        Leg_95.add_attribute("Dated", "LegDatedDate_t_885879119"); // 3
        Leg_95_set.insert("LegDatedDate_t_885879119");
        Leg_95.add_attribute("CSetMo", "1097425022"); // 3
        Leg_95_set.insert("1097425022");
        Leg_95.add_attribute("IntAcrl", "LegInterestAccrualDate_t_635654088"); // 3
        Leg_95_set.insert("LegInterestAccrualDate_t_635654088");
        Leg_95.add_attribute("PutCall", "24440034"); // 3
        Leg_95_set.insert("24440034");
        Leg_95.add_attribute("LegOptionRatio", "7349938.990000"); // 3
        Leg_95_set.insert("7349938.990000");
        Leg_95.add_attribute("Px", "227192.310000"); // 3
        Leg_95_set.insert("227192.310000");
        all_values.push_back(Leg_95_set);
        all_compo_names.insert("Leg_95_set");

        {
          xml_element LegAID_90{"LegAID"};
          multiset<string> LegAID_90_set;
          LegAID_90.add_attribute("SecAltID", "LegSecurityAltID_t_1566705757"); // 4
          LegAID_90_set.insert("LegSecurityAltID_t_1566705757");
          LegAID_90.add_attribute("SecAltIDSrc", "1"); // 4
          LegAID_90_set.insert("1");
          all_values.push_back(LegAID_90_set);
          all_compo_names.insert("LegAID_90_set");

          Leg_95.add_element(LegAID_90);
        }
        SecL_1.add_element(Leg_95);
      }
      {
        xml_element Stip_172{"Stip"};
        multiset<string> Stip_172_set;
        Stip_172.add_attribute("StipTyp", "MATURITY"); // 3
        Stip_172_set.insert("MATURITY");
        Stip_172.add_attribute("StipVal", "LegStipulationValue_t_1122202309"); // 3
        Stip_172_set.insert("LegStipulationValue_t_1122202309");
        all_values.push_back(Stip_172_set);
        all_compo_names.insert("Stip_172_set");

        SecL_1.add_element(Stip_172);
      }
      {
        xml_element BnchmkCurve_7{"BnchmkCurve"};
        multiset<string> BnchmkCurve_7_set;
        BnchmkCurve_7.add_attribute("Ccy", "GBP"); // 3
        BnchmkCurve_7_set.insert("GBP");
        BnchmkCurve_7.add_attribute("Name", "MuniAAA"); // 3
        BnchmkCurve_7_set.insert("MuniAAA");
        BnchmkCurve_7.add_attribute("Point", "LegBenchmarkCurvePoint_t_1683186981"); // 3
        BnchmkCurve_7_set.insert("LegBenchmarkCurvePoint_t_1683186981");
        BnchmkCurve_7.add_attribute("Px", "11670798.770000"); // 3
        BnchmkCurve_7_set.insert("11670798.770000");
        BnchmkCurve_7.add_attribute("PxTyp", "1284493241"); // 3
        BnchmkCurve_7_set.insert("1284493241");
        all_values.push_back(BnchmkCurve_7_set);
        all_compo_names.insert("BnchmkCurve_7_set");

        SecL_1.add_element(BnchmkCurve_7);
      }
      SecL_0.add_element(SecL_1);
    }
    {
      xml_element SprdBnchmkCurve_32{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_32_set;
      SprdBnchmkCurve_32.add_attribute("Spread", "2135208.940000"); // 2
      SprdBnchmkCurve_32_set.insert("2135208.940000");
      SprdBnchmkCurve_32.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_32_set.insert("CAN");
      SprdBnchmkCurve_32.add_attribute("Name", "EONIA"); // 2
      SprdBnchmkCurve_32_set.insert("EONIA");
      SprdBnchmkCurve_32.add_attribute("Point", "BenchmarkCurvePoint_t_2108690511"); // 2
      SprdBnchmkCurve_32_set.insert("BenchmarkCurvePoint_t_2108690511");
      SprdBnchmkCurve_32.add_attribute("Px", "12660538.910000"); // 2
      SprdBnchmkCurve_32_set.insert("12660538.910000");
      SprdBnchmkCurve_32.add_attribute("PxTyp", "1"); // 2
      SprdBnchmkCurve_32_set.insert("1");
      SprdBnchmkCurve_32.add_attribute("SecID", "BenchmarkSecurityID_t_1627403828"); // 2
      SprdBnchmkCurve_32_set.insert("BenchmarkSecurityID_t_1627403828");
      SprdBnchmkCurve_32.add_attribute("SecIDSrc", "8"); // 2
      SprdBnchmkCurve_32_set.insert("8");
      all_values.push_back(SprdBnchmkCurve_32_set);
      all_compo_names.insert("SprdBnchmkCurve_32_set");

      SecL_0.add_element(SprdBnchmkCurve_32);
    }
    {
      xml_element Yield_27{"Yield"};
      multiset<string> Yield_27_set;
      Yield_27.add_attribute("Typ", "AFTERTAX"); // 2
      Yield_27_set.insert("AFTERTAX");
      Yield_27.add_attribute("Yld", "18893622.020000"); // 2
      Yield_27_set.insert("18893622.020000");
      Yield_27.add_attribute("CalcDt", "YieldCalcDate_t_1992886677"); // 2
      Yield_27_set.insert("YieldCalcDate_t_1992886677");
      Yield_27.add_attribute("RedDt", "YieldRedemptionDate_t_403702721"); // 2
      Yield_27_set.insert("YieldRedemptionDate_t_403702721");
      Yield_27.add_attribute("RedPx", "17387879.780000"); // 2
      Yield_27_set.insert("17387879.780000");
      Yield_27.add_attribute("RedPxTyp", "2"); // 2
      Yield_27_set.insert("2");
      all_values.push_back(Yield_27_set);
      all_compo_names.insert("Yield_27_set");

      SecL_0.add_element(Yield_27);
    }
    elt.add_element(SecL_0);
  } // end SecL
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
