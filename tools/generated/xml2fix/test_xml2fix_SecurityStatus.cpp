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
  elt.add_attribute("StatReqID", "SecurityStatusReqID_t_1402840760"); // 0
  SecurityStatus_message_t_0.insert("SecurityStatusReqID_t_1402840760");
  elt.add_attribute("Ccy", "EUR"); // 0
  SecurityStatus_message_t_0.insert("EUR");
  elt.add_attribute("MktID", "MarketID_t_1079803791"); // 0
  SecurityStatus_message_t_0.insert("MarketID_t_1079803791");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_2007397668"); // 0
  SecurityStatus_message_t_0.insert("MarketSegmentID_t_2007397668");
  elt.add_attribute("SesID", "6"); // 0
  SecurityStatus_message_t_0.insert("6");
  elt.add_attribute("SesSub", "7"); // 0
  SecurityStatus_message_t_0.insert("7");
  elt.add_attribute("Unsol", "Y"); // 0
  SecurityStatus_message_t_0.insert("Y");
  elt.add_attribute("TrdgStat", "6"); // 0
  SecurityStatus_message_t_0.insert("6");
  elt.add_attribute("SecTrdEvnt", "2"); // 0
  SecurityStatus_message_t_0.insert("2");
  elt.add_attribute("FinclStat", "3"); // 0
  SecurityStatus_message_t_0.insert("3");
  elt.add_attribute("CorpActn", "Q"); // 0
  SecurityStatus_message_t_0.insert("Q");
  elt.add_attribute("HaltRsn", "5"); // 0
  SecurityStatus_message_t_0.insert("5");
  elt.add_attribute("InViewOfCmn", "N"); // 0
  SecurityStatus_message_t_0.insert("N");
  elt.add_attribute("DueToReltd", "N"); // 0
  SecurityStatus_message_t_0.insert("N");
  elt.add_attribute("MDBkTyp", "2"); // 0
  SecurityStatus_message_t_0.insert("2");
  elt.add_attribute("MktDepth", "900312743"); // 0
  SecurityStatus_message_t_0.insert("900312743");
  elt.add_attribute("BuyVol", "2784338.510000"); // 0
  SecurityStatus_message_t_0.insert("2784338.510000");
  elt.add_attribute("SellVol", "10427467.270000"); // 0
  SecurityStatus_message_t_0.insert("10427467.270000");
  elt.add_attribute("HighPx", "19848011.520000"); // 0
  SecurityStatus_message_t_0.insert("19848011.520000");
  elt.add_attribute("LowPx", "13583680.570000"); // 0
  SecurityStatus_message_t_0.insert("13583680.570000");
  elt.add_attribute("LastPx", "11655141.720000"); // 0
  SecurityStatus_message_t_0.insert("11655141.720000");
  elt.add_attribute("TxnTm", "TransactTime_t_18522428"); // 0
  SecurityStatus_message_t_0.insert("TransactTime_t_18522428");
  elt.add_attribute("Adjmt", "2"); // 0
  SecurityStatus_message_t_0.insert("2");
  elt.add_attribute("FirstPx", "6298731.850000"); // 0
  SecurityStatus_message_t_0.insert("6298731.850000");
  elt.add_attribute("Txt", "Text_t_967959260"); // 0
  SecurityStatus_message_t_0.insert("Text_t_967959260");
  elt.add_attribute("EncTxtLen", "1123193267"); // 0
  SecurityStatus_message_t_0.insert("1123193267");
  elt.add_attribute("EncTxt", "EncodedText_t_1607492168"); // 0
  SecurityStatus_message_t_0.insert("EncodedText_t_1607492168");
  all_values.push_back(SecurityStatus_message_t_0);
  all_compo_names.insert("SecurityStatus_message_t");

  { // Hdr
    xml_element Hdr_86{"Hdr"};
    multiset<string> Hdr_86_set;
    Hdr_86.add_attribute("SeqNum", "167890684"); // 1
    Hdr_86_set.insert("167890684");
    Hdr_86.add_attribute("SID", "SenderCompID_t_1667278164"); // 1
    Hdr_86_set.insert("SenderCompID_t_1667278164");
    Hdr_86.add_attribute("TID", "TargetCompID_t_300040542"); // 1
    Hdr_86_set.insert("TargetCompID_t_300040542");
    Hdr_86.add_attribute("OBID", "OnBehalfOfCompID_t_1570731444"); // 1
    Hdr_86_set.insert("OnBehalfOfCompID_t_1570731444");
    Hdr_86.add_attribute("D2ID", "DeliverToCompID_t_1344688574"); // 1
    Hdr_86_set.insert("DeliverToCompID_t_1344688574");
    Hdr_86.add_attribute("SSub", "SenderSubID_t_1904075983"); // 1
    Hdr_86_set.insert("SenderSubID_t_1904075983");
    Hdr_86.add_attribute("SLoc", "SenderLocationID_t_503051587"); // 1
    Hdr_86_set.insert("SenderLocationID_t_503051587");
    Hdr_86.add_attribute("TSub", "TargetSubID_t_1204602594"); // 1
    Hdr_86_set.insert("TargetSubID_t_1204602594");
    Hdr_86.add_attribute("TLoc", "TargetLocationID_t_549611134"); // 1
    Hdr_86_set.insert("TargetLocationID_t_549611134");
    Hdr_86.add_attribute("OBSub", "OnBehalfOfSubID_t_1388756819"); // 1
    Hdr_86_set.insert("OnBehalfOfSubID_t_1388756819");
    Hdr_86.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1332926135"); // 1
    Hdr_86_set.insert("OnBehalfOfLocationID_t_1332926135");
    Hdr_86.add_attribute("D2Sub", "DeliverToSubID_t_1993536545"); // 1
    Hdr_86_set.insert("DeliverToSubID_t_1993536545");
    Hdr_86.add_attribute("D2Loc", "DeliverToLocationID_t_175357892"); // 1
    Hdr_86_set.insert("DeliverToLocationID_t_175357892");
    Hdr_86.add_attribute("PosDup", "N"); // 1
    Hdr_86_set.insert("N");
    Hdr_86.add_attribute("PosRsnd", "Y"); // 1
    Hdr_86_set.insert("Y");
    Hdr_86.add_attribute("Snt", "SendingTime_t_355753987"); // 1
    Hdr_86_set.insert("SendingTime_t_355753987");
    Hdr_86.add_attribute("OrigSnt", "OrigSendingTime_t_556021442"); // 1
    Hdr_86_set.insert("OrigSendingTime_t_556021442");
    Hdr_86.add_attribute("MsgEncd", "MessageEncoding_t_508202193"); // 1
    Hdr_86_set.insert("MessageEncoding_t_508202193");
    all_values.push_back(Hdr_86_set);
    all_compo_names.insert("Hdr_86_set");

    {
      xml_element Hop_86{"Hop"};
      multiset<string> Hop_86_set;
      Hop_86.add_attribute("ID", "HopCompID_t_195780346"); // 2
      Hop_86_set.insert("HopCompID_t_195780346");
      Hop_86.add_attribute("Ref", "1456334185"); // 2
      Hop_86_set.insert("1456334185");
      Hop_86.add_attribute("Snt", "HopSendingTime_t_786636044"); // 2
      Hop_86_set.insert("HopSendingTime_t_786636044");
      all_values.push_back(Hop_86_set);
      all_compo_names.insert("Hop_86_set");

      Hdr_86.add_element(Hop_86);
    }
    elt.add_element(Hdr_86);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_16{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_16_set;
    ApplSeqCtrl_16.add_attribute("ApplID", "ApplID_t_1238527073"); // 1
    ApplSeqCtrl_16_set.insert("ApplID_t_1238527073");
    ApplSeqCtrl_16.add_attribute("ApplSeqNum", "1293651689"); // 1
    ApplSeqCtrl_16_set.insert("1293651689");
    ApplSeqCtrl_16.add_attribute("ApplLastSeqNum", "2145004101"); // 1
    ApplSeqCtrl_16_set.insert("2145004101");
    ApplSeqCtrl_16.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_16_set.insert("false");
    all_values.push_back(ApplSeqCtrl_16_set);
    all_compo_names.insert("ApplSeqCtrl_16_set");

    elt.add_element(ApplSeqCtrl_16);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_76{"Instrmt"};
    multiset<string> Instrmt_76_set;
    Instrmt_76.add_attribute("Sym", "Symbol_t_1312174117"); // 1
    Instrmt_76_set.insert("Symbol_t_1312174117");
    Instrmt_76.add_attribute("Sfx", "WI"); // 1
    Instrmt_76_set.insert("WI");
    Instrmt_76.add_attribute("ID", "SecurityID_t_886430783"); // 1
    Instrmt_76_set.insert("SecurityID_t_886430783");
    Instrmt_76.add_attribute("Src", "4"); // 1
    Instrmt_76_set.insert("4");
    Instrmt_76.add_attribute("Prod", "9"); // 1
    Instrmt_76_set.insert("9");
    Instrmt_76.add_attribute("ProdCmplx", "ProductComplex_t_346439303"); // 1
    Instrmt_76_set.insert("ProductComplex_t_346439303");
    Instrmt_76.add_attribute("SecGrp", "SecurityGroup_t_300540413"); // 1
    Instrmt_76_set.insert("SecurityGroup_t_300540413");
    Instrmt_76.add_attribute("CFI", "CFICode_t_437509300"); // 1
    Instrmt_76_set.insert("CFICode_t_437509300");
    Instrmt_76.add_attribute("SecTyp", "WAR"); // 1
    Instrmt_76_set.insert("WAR");
    Instrmt_76.add_attribute("SubTyp", "SecuritySubType_t_1871271858"); // 1
    Instrmt_76_set.insert("SecuritySubType_t_1871271858");
    Instrmt_76.add_attribute("MMY", "1782197874"); // 1
    Instrmt_76_set.insert("1782197874");
    Instrmt_76.add_attribute("MatDt", "MaturityDate_t_403072181"); // 1
    Instrmt_76_set.insert("MaturityDate_t_403072181");
    Instrmt_76.add_attribute("MatTm", "226839797"); // 1
    Instrmt_76_set.insert("226839797");
    Instrmt_76.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_839316820"); // 1
    Instrmt_76_set.insert("SettleOnOpenFlag_t_839316820");
    Instrmt_76.add_attribute("AsgnMeth", "952683315"); // 1
    Instrmt_76_set.insert("952683315");
    Instrmt_76.add_attribute("Status", "2"); // 1
    Instrmt_76_set.insert("2");
    Instrmt_76.add_attribute("CpnPmt", "CouponPaymentDate_t_24759307"); // 1
    Instrmt_76_set.insert("CouponPaymentDate_t_24759307");
    Instrmt_76.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_76_set.insert("MR");
    Instrmt_76.add_attribute("Snrty", "SR"); // 1
    Instrmt_76_set.insert("SR");
    Instrmt_76.add_attribute("NotlPctOut", "21389162.330000"); // 1
    Instrmt_76_set.insert("21389162.330000");
    Instrmt_76.add_attribute("OrigNotlPctOut", "16753638.120000"); // 1
    Instrmt_76_set.insert("16753638.120000");
    Instrmt_76.add_attribute("AttchPnt", "21467084.970000"); // 1
    Instrmt_76_set.insert("21467084.970000");
    Instrmt_76.add_attribute("DetchPnt", "5474540.270000"); // 1
    Instrmt_76_set.insert("5474540.270000");
    Instrmt_76.add_attribute("Issued", "IssueDate_t_36082357"); // 1
    Instrmt_76_set.insert("IssueDate_t_36082357");
    Instrmt_76.add_attribute("RepoCollSecTyp", "195005195"); // 1
    Instrmt_76_set.insert("195005195");
    Instrmt_76.add_attribute("RepoTrm", "2003788212"); // 1
    Instrmt_76_set.insert("2003788212");
    Instrmt_76.add_attribute("RepoRt", "8227184.020000"); // 1
    Instrmt_76_set.insert("8227184.020000");
    Instrmt_76.add_attribute("Fctr", "14335322.680000"); // 1
    Instrmt_76_set.insert("14335322.680000");
    Instrmt_76.add_attribute("CrdRtg", "CreditRating_t_1149956253"); // 1
    Instrmt_76_set.insert("CreditRating_t_1149956253");
    Instrmt_76.add_attribute("Rgstry", "InstrRegistry_t_820238855"); // 1
    Instrmt_76_set.insert("InstrRegistry_t_820238855");
    Instrmt_76.add_attribute("IssuCtry", "1690089866"); // 1
    Instrmt_76_set.insert("1690089866");
    Instrmt_76.add_attribute("StPrv", "StateOrProvinceOfIssue_t_314646723"); // 1
    Instrmt_76_set.insert("StateOrProvinceOfIssue_t_314646723");
    Instrmt_76.add_attribute("Lcl", "LocaleOfIssue_t_614760372"); // 1
    Instrmt_76_set.insert("LocaleOfIssue_t_614760372");
    Instrmt_76.add_attribute("Redeem", "RedemptionDate_t_429037001"); // 1
    Instrmt_76_set.insert("RedemptionDate_t_429037001");
    Instrmt_76.add_attribute("StrkPx", "4472964.520000"); // 1
    Instrmt_76_set.insert("4472964.520000");
    Instrmt_76.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_76_set.insert("JPY");
    Instrmt_76.add_attribute("StrkMult", "7478368.660000"); // 1
    Instrmt_76_set.insert("7478368.660000");
    Instrmt_76.add_attribute("StrkValu", "19699844.570000"); // 1
    Instrmt_76_set.insert("19699844.570000");
    Instrmt_76.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_76_set.insert("3");
    Instrmt_76.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_76_set.insert("2");
    Instrmt_76.add_attribute("StrkPxBndryPrcsn", "16046986.840000"); // 1
    Instrmt_76_set.insert("16046986.840000");
    Instrmt_76.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_76_set.insert("4");
    Instrmt_76.add_attribute("OptAt", "698464873"); // 1
    Instrmt_76_set.insert("698464873");
    Instrmt_76.add_attribute("Mult", "2965318.560000"); // 1
    Instrmt_76_set.insert("2965318.560000");
    Instrmt_76.add_attribute("MultTyp", "1"); // 1
    Instrmt_76_set.insert("1");
    Instrmt_76.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_76_set.insert("2");
    Instrmt_76.add_attribute("MinPxIncr", "3212911.640000"); // 1
    Instrmt_76_set.insert("3212911.640000");
    Instrmt_76.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1428964211"); // 1
    Instrmt_76_set.insert("MinPriceIncrementAmount_t_1428964211");
    Instrmt_76.add_attribute("UOM", "USD"); // 1
    Instrmt_76_set.insert("USD");
    Instrmt_76.add_attribute("UOMQty", "3127237.490000"); // 1
    Instrmt_76_set.insert("3127237.490000");
    Instrmt_76.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_76_set.insert("MMbbl");
    Instrmt_76.add_attribute("PxUOMQty", "19567572.010000"); // 1
    Instrmt_76_set.insert("19567572.010000");
    Instrmt_76.add_attribute("SettlMeth", "P"); // 1
    Instrmt_76_set.insert("P");
    Instrmt_76.add_attribute("ExerStyle", "2"); // 1
    Instrmt_76_set.insert("2");
    Instrmt_76.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_76_set.insert("2");
    Instrmt_76.add_attribute("OptPayAmt", "OptPayoutAmount_t_716482341"); // 1
    Instrmt_76_set.insert("OptPayoutAmount_t_716482341");
    Instrmt_76.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_76_set.insert("PCTPAR");
    Instrmt_76.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_76_set.insert("FUT");
    Instrmt_76.add_attribute("ListMeth", "1"); // 1
    Instrmt_76_set.insert("1");
    Instrmt_76.add_attribute("CapPx", "4884003.420000"); // 1
    Instrmt_76_set.insert("4884003.420000");
    Instrmt_76.add_attribute("FlrPx", "9804172.340000"); // 1
    Instrmt_76_set.insert("9804172.340000");
    Instrmt_76.add_attribute("PutCall", "0"); // 1
    Instrmt_76_set.insert("0");
    Instrmt_76.add_attribute("FlexInd", "false"); // 1
    Instrmt_76_set.insert("false");
    Instrmt_76.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_76_set.insert("false");
    Instrmt_76.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_76_set.insert("Mo");
    Instrmt_76.add_attribute("CpnRt", "4881522.240000"); // 1
    Instrmt_76_set.insert("4881522.240000");
    Instrmt_76.add_attribute("Exch", "SecurityExchange_t_37446892"); // 1
    Instrmt_76_set.insert("SecurityExchange_t_37446892");
    Instrmt_76.add_attribute("PosLmt", "1228734988"); // 1
    Instrmt_76_set.insert("1228734988");
    Instrmt_76.add_attribute("NTPosLmt", "310653033"); // 1
    Instrmt_76_set.insert("310653033");
    Instrmt_76.add_attribute("Issr", "Issuer_t_1459403042"); // 1
    Instrmt_76_set.insert("Issuer_t_1459403042");
    Instrmt_76.add_attribute("EncIssrLen", "1700360064"); // 1
    Instrmt_76_set.insert("1700360064");
    Instrmt_76.add_attribute("EncIssr", "EncodedIssuer_t_1915351717"); // 1
    Instrmt_76_set.insert("EncodedIssuer_t_1915351717");
    Instrmt_76.add_attribute("Desc", "SecurityDesc_t_1136947725"); // 1
    Instrmt_76_set.insert("SecurityDesc_t_1136947725");
    Instrmt_76.add_attribute("EncSecDescLen", "251341290"); // 1
    Instrmt_76_set.insert("251341290");
    Instrmt_76.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_64399926"); // 1
    Instrmt_76_set.insert("EncodedSecurityDesc_t_64399926");
    Instrmt_76.add_attribute("Pool", "Pool_t_1767175723"); // 1
    Instrmt_76_set.insert("Pool_t_1767175723");
    Instrmt_76.add_attribute("CSetMo", "417919132"); // 1
    Instrmt_76_set.insert("417919132");
    Instrmt_76.add_attribute("CPPgm", "99"); // 1
    Instrmt_76_set.insert("99");
    Instrmt_76.add_attribute("CPRegT", "CPRegType_t_1048656287"); // 1
    Instrmt_76_set.insert("CPRegType_t_1048656287");
    Instrmt_76.add_attribute("Dated", "DatedDate_t_227967836"); // 1
    Instrmt_76_set.insert("DatedDate_t_227967836");
    Instrmt_76.add_attribute("IntAcrl", "InterestAccrualDate_t_698414839"); // 1
    Instrmt_76_set.insert("InterestAccrualDate_t_698414839");
    all_values.push_back(Instrmt_76_set);
    all_compo_names.insert("Instrmt_76_set");

    {
      xml_element AID_79{"AID"};
      multiset<string> AID_79_set;
      AID_79.add_attribute("AltID", "SecurityAltID_t_2005500662"); // 2
      AID_79_set.insert("SecurityAltID_t_2005500662");
      AID_79.add_attribute("AltIDSrc", "A"); // 2
      AID_79_set.insert("A");
      all_values.push_back(AID_79_set);
      all_compo_names.insert("AID_79_set");

      Instrmt_76.add_element(AID_79);
    }
    {
      xml_element SecXML_79{"SecXML"};
      multiset<string> SecXML_79_set;
      SecXML_79.add_attribute("Schema", "SecurityXMLSchema_t_1558592616"); // 2
      SecXML_79_set.insert("SecurityXMLSchema_t_1558592616");
      all_values.push_back(SecXML_79_set);
      all_compo_names.insert("SecXML_79_set");

      Instrmt_76.add_element(SecXML_79);
    }
    {
      xml_element Evnt_79{"Evnt"};
      multiset<string> Evnt_79_set;
      Evnt_79.add_attribute("EventTyp", "7"); // 2
      Evnt_79_set.insert("7");
      Evnt_79.add_attribute("Dt", "EventDate_t_41520137"); // 2
      Evnt_79_set.insert("EventDate_t_41520137");
      Evnt_79.add_attribute("Tm", "EventTime_t_127591310"); // 2
      Evnt_79_set.insert("EventTime_t_127591310");
      Evnt_79.add_attribute("Px", "5191052.340000"); // 2
      Evnt_79_set.insert("5191052.340000");
      Evnt_79.add_attribute("Txt", "EventText_t_1479331154"); // 2
      Evnt_79_set.insert("EventText_t_1479331154");
      all_values.push_back(Evnt_79_set);
      all_compo_names.insert("Evnt_79_set");

      Instrmt_76.add_element(Evnt_79);
    }
    {
      xml_element Pty_388{"Pty"};
      multiset<string> Pty_388_set;
      Pty_388.add_attribute("ID", "InstrumentPartyID_t_1994029905"); // 2
      Pty_388_set.insert("InstrumentPartyID_t_1994029905");
      Pty_388.add_attribute("Src", "2"); // 2
      Pty_388_set.insert("2");
      Pty_388.add_attribute("R", "5"); // 2
      Pty_388_set.insert("5");
      all_values.push_back(Pty_388_set);
      all_compo_names.insert("Pty_388_set");

      {
        xml_element Sub_388{"Sub"};
        multiset<string> Sub_388_set;
        Sub_388.add_attribute("ID", "InstrumentPartySubID_t_2027631575"); // 3
        Sub_388_set.insert("InstrumentPartySubID_t_2027631575");
        Sub_388.add_attribute("Typ", "4"); // 3
        Sub_388_set.insert("4");
        all_values.push_back(Sub_388_set);
        all_compo_names.insert("Sub_388_set");

        Pty_388.add_element(Sub_388);
      }
      Instrmt_76.add_element(Pty_388);
    }
    {
      xml_element CmplxEvnt_76{"CmplxEvnt"};
      multiset<string> CmplxEvnt_76_set;
      CmplxEvnt_76.add_attribute("Typ", "5"); // 2
      CmplxEvnt_76_set.insert("5");
      CmplxEvnt_76.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_361046049"); // 2
      CmplxEvnt_76_set.insert("ComplexOptPayoutAmount_t_361046049");
      CmplxEvnt_76.add_attribute("Px", "4513348.680000"); // 2
      CmplxEvnt_76_set.insert("4513348.680000");
      CmplxEvnt_76.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_76_set.insert("4");
      CmplxEvnt_76.add_attribute("PxBndryPrcsn", "15897810.380000"); // 2
      CmplxEvnt_76_set.insert("15897810.380000");
      CmplxEvnt_76.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_76_set.insert("1");
      CmplxEvnt_76.add_attribute("Cond", "1"); // 2
      CmplxEvnt_76_set.insert("1");
      all_values.push_back(CmplxEvnt_76_set);
      all_compo_names.insert("CmplxEvnt_76_set");

      {
        xml_element EvntDts_76{"EvntDts"};
        multiset<string> EvntDts_76_set;
        EvntDts_76.add_attribute("StartDt", "ComplexEventStartDate_t_1142657454"); // 3
        EvntDts_76_set.insert("ComplexEventStartDate_t_1142657454");
        EvntDts_76.add_attribute("EndDt", "ComplexEventEndDate_t_529855971"); // 3
        EvntDts_76_set.insert("ComplexEventEndDate_t_529855971");
        all_values.push_back(EvntDts_76_set);
        all_compo_names.insert("EvntDts_76_set");

        {
          xml_element EvntTms_76{"EvntTms"};
          multiset<string> EvntTms_76_set;
          EvntTms_76.add_attribute("StartTm", "60549339"); // 4
          EvntTms_76_set.insert("60549339");
          EvntTms_76.add_attribute("EndTm", "1393998744"); // 4
          EvntTms_76_set.insert("1393998744");
          all_values.push_back(EvntTms_76_set);
          all_compo_names.insert("EvntTms_76_set");

          EvntDts_76.add_element(EvntTms_76);
        }
        CmplxEvnt_76.add_element(EvntDts_76);
      }
      Instrmt_76.add_element(CmplxEvnt_76);
    }
    elt.add_element(Instrmt_76);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_15{"InstrmtExt"};
    multiset<string> InstrmtExt_15_set;
    InstrmtExt_15.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_15_set.insert("2");
    InstrmtExt_15.add_attribute("PctAtRisk", "18277250.620000"); // 1
    InstrmtExt_15_set.insert("18277250.620000");
    all_values.push_back(InstrmtExt_15_set);
    all_compo_names.insert("InstrmtExt_15_set");

    {
      xml_element Attrb_28{"Attrb"};
      multiset<string> Attrb_28_set;
      Attrb_28.add_attribute("Typ", "5"); // 2
      Attrb_28_set.insert("5");
      Attrb_28.add_attribute("Val", "InstrAttribValue_t_979946987"); // 2
      Attrb_28_set.insert("InstrAttribValue_t_979946987");
      all_values.push_back(Attrb_28_set);
      all_compo_names.insert("Attrb_28_set");

      InstrmtExt_15.add_element(Attrb_28);
    }
    elt.add_element(InstrmtExt_15);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_109{"Undly"};
    multiset<string> Undly_109_set;
    Undly_109.add_attribute("Sym", "UnderlyingSymbol_t_2039885713"); // 1
    Undly_109_set.insert("UnderlyingSymbol_t_2039885713");
    Undly_109.add_attribute("Sfx", "CD"); // 1
    Undly_109_set.insert("CD");
    Undly_109.add_attribute("ID", "UnderlyingSecurityID_t_586914716"); // 1
    Undly_109_set.insert("UnderlyingSecurityID_t_586914716");
    Undly_109.add_attribute("Src", "8"); // 1
    Undly_109_set.insert("8");
    Undly_109.add_attribute("Prod", "7"); // 1
    Undly_109_set.insert("7");
    Undly_109.add_attribute("CFI", "UnderlyingCFICode_t_1437858463"); // 1
    Undly_109_set.insert("UnderlyingCFICode_t_1437858463");
    Undly_109.add_attribute("SecTyp", "TBA"); // 1
    Undly_109_set.insert("TBA");
    Undly_109.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1217062105"); // 1
    Undly_109_set.insert("UnderlyingSecuritySubType_t_1217062105");
    Undly_109.add_attribute("MMY", "1956963698"); // 1
    Undly_109_set.insert("1956963698");
    Undly_109.add_attribute("Mat", "UnderlyingMaturityDate_t_1450494746"); // 1
    Undly_109_set.insert("UnderlyingMaturityDate_t_1450494746");
    Undly_109.add_attribute("MatTm", "1063608362"); // 1
    Undly_109_set.insert("1063608362");
    Undly_109.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_816985627"); // 1
    Undly_109_set.insert("UnderlyingCouponPaymentDate_t_816985627");
    Undly_109.add_attribute("RestrctTyp", "XR"); // 1
    Undly_109_set.insert("XR");
    Undly_109.add_attribute("Snrty", "SB"); // 1
    Undly_109_set.insert("SB");
    Undly_109.add_attribute("NotlPctOut", "7801682.710000"); // 1
    Undly_109_set.insert("7801682.710000");
    Undly_109.add_attribute("OrigNotlPctOut", "13369948.150000"); // 1
    Undly_109_set.insert("13369948.150000");
    Undly_109.add_attribute("AttchPnt", "13048023.380000"); // 1
    Undly_109_set.insert("13048023.380000");
    Undly_109.add_attribute("DetchPnt", "12315031.390000"); // 1
    Undly_109_set.insert("12315031.390000");
    Undly_109.add_attribute("Issued", "UnderlyingIssueDate_t_948677035"); // 1
    Undly_109_set.insert("UnderlyingIssueDate_t_948677035");
    Undly_109.add_attribute("RepoCollSecTyp", "747099728"); // 1
    Undly_109_set.insert("747099728");
    Undly_109.add_attribute("RepoTrm", "1993491040"); // 1
    Undly_109_set.insert("1993491040");
    Undly_109.add_attribute("RepoRt", "20197622.970000"); // 1
    Undly_109_set.insert("20197622.970000");
    Undly_109.add_attribute("Fctr", "18897571.830000"); // 1
    Undly_109_set.insert("18897571.830000");
    Undly_109.add_attribute("CrdRtg", "UnderlyingCreditRating_t_375863363"); // 1
    Undly_109_set.insert("UnderlyingCreditRating_t_375863363");
    Undly_109.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2080311636"); // 1
    Undly_109_set.insert("UnderlyingInstrRegistry_t_2080311636");
    Undly_109.add_attribute("Ctry", "1136272279"); // 1
    Undly_109_set.insert("1136272279");
    Undly_109.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_970119260"); // 1
    Undly_109_set.insert("UnderlyingStateOrProvinceOfIssue_t_970119260");
    Undly_109.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1760553050"); // 1
    Undly_109_set.insert("UnderlyingLocaleOfIssue_t_1760553050");
    Undly_109.add_attribute("Redeem", "UnderlyingRedemptionDate_t_800706508"); // 1
    Undly_109_set.insert("UnderlyingRedemptionDate_t_800706508");
    Undly_109.add_attribute("StrkPx", "19500662.470000"); // 1
    Undly_109_set.insert("19500662.470000");
    Undly_109.add_attribute("StrkCcy", "JPY"); // 1
    Undly_109_set.insert("JPY");
    Undly_109.add_attribute("OptA", "1480944426"); // 1
    Undly_109_set.insert("1480944426");
    Undly_109.add_attribute("Mult", "9288818.200000"); // 1
    Undly_109_set.insert("9288818.200000");
    Undly_109.add_attribute("MultTyp", "2"); // 1
    Undly_109_set.insert("2");
    Undly_109.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_109_set.insert("3");
    Undly_109.add_attribute("UOM", "MWh"); // 1
    Undly_109_set.insert("MWh");
    Undly_109.add_attribute("UOMQty", "5939156.210000"); // 1
    Undly_109_set.insert("5939156.210000");
    Undly_109.add_attribute("PxUOM", "Bu"); // 1
    Undly_109_set.insert("Bu");
    Undly_109.add_attribute("PxUOMQty", "287366.850000"); // 1
    Undly_109_set.insert("287366.850000");
    Undly_109.add_attribute("TmUnit", "S"); // 1
    Undly_109_set.insert("S");
    Undly_109.add_attribute("ExerStyle", "1"); // 1
    Undly_109_set.insert("1");
    Undly_109.add_attribute("CpnRt", "8457223.120000"); // 1
    Undly_109_set.insert("8457223.120000");
    Undly_109.add_attribute("Exch", "UnderlyingSecurityExchange_t_1659686207"); // 1
    Undly_109_set.insert("UnderlyingSecurityExchange_t_1659686207");
    Undly_109.add_attribute("Issr", "UnderlyingIssuer_t_1499874681"); // 1
    Undly_109_set.insert("UnderlyingIssuer_t_1499874681");
    Undly_109.add_attribute("EncUndIssrLen", "1625890583"); // 1
    Undly_109_set.insert("1625890583");
    Undly_109.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_849197374"); // 1
    Undly_109_set.insert("EncodedUnderlyingIssuer_t_849197374");
    Undly_109.add_attribute("Desc", "UnderlyingSecurityDesc_t_657193371"); // 1
    Undly_109_set.insert("UnderlyingSecurityDesc_t_657193371");
    Undly_109.add_attribute("EncUndSecDescLen", "709910074"); // 1
    Undly_109_set.insert("709910074");
    Undly_109.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1797874409"); // 1
    Undly_109_set.insert("EncodedUnderlyingSecurityDesc_t_1797874409");
    Undly_109.add_attribute("CPPgm", "UnderlyingCPProgram_t_1404293100"); // 1
    Undly_109_set.insert("UnderlyingCPProgram_t_1404293100");
    Undly_109.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_555917467"); // 1
    Undly_109_set.insert("UnderlyingCPRegType_t_555917467");
    Undly_109.add_attribute("AllocPct", "16701530.580000"); // 1
    Undly_109_set.insert("16701530.580000");
    Undly_109.add_attribute("Ccy", "USD"); // 1
    Undly_109_set.insert("USD");
    Undly_109.add_attribute("Qty", "16029810.460000"); // 1
    Undly_109_set.insert("16029810.460000");
    Undly_109.add_attribute("SettlTyp", "2"); // 1
    Undly_109_set.insert("2");
    Undly_109.add_attribute("CashAmt", "UnderlyingCashAmount_t_1901900091"); // 1
    Undly_109_set.insert("UnderlyingCashAmount_t_1901900091");
    Undly_109.add_attribute("CashTyp", "FIXED"); // 1
    Undly_109_set.insert("FIXED");
    Undly_109.add_attribute("Px", "9360617.750000"); // 1
    Undly_109_set.insert("9360617.750000");
    Undly_109.add_attribute("DirtPx", "17044826.900000"); // 1
    Undly_109_set.insert("17044826.900000");
    Undly_109.add_attribute("EndPx", "15580175.520000"); // 1
    Undly_109_set.insert("15580175.520000");
    Undly_109.add_attribute("StartVal", "UnderlyingStartValue_t_1629170349"); // 1
    Undly_109_set.insert("UnderlyingStartValue_t_1629170349");
    Undly_109.add_attribute("CurVal", "UnderlyingCurrentValue_t_1037943468"); // 1
    Undly_109_set.insert("UnderlyingCurrentValue_t_1037943468");
    Undly_109.add_attribute("EndVal", "UnderlyingEndValue_t_339415724"); // 1
    Undly_109_set.insert("UnderlyingEndValue_t_339415724");
    Undly_109.add_attribute("AdjQty", "1044387.300000"); // 1
    Undly_109_set.insert("1044387.300000");
    Undly_109.add_attribute("FxRate", "14608750.410000"); // 1
    Undly_109_set.insert("14608750.410000");
    Undly_109.add_attribute("FxRateCalc", "M"); // 1
    Undly_109_set.insert("M");
    Undly_109.add_attribute("CapValu", "UnderlyingCapValue_t_698354351"); // 1
    Undly_109_set.insert("UnderlyingCapValue_t_698354351");
    Undly_109.add_attribute("SetMeth", "UnderlyingSettlMethod_t_953385071"); // 1
    Undly_109_set.insert("UnderlyingSettlMethod_t_953385071");
    Undly_109.add_attribute("PutCall", "587409045"); // 1
    Undly_109_set.insert("587409045");
    all_values.push_back(Undly_109_set);
    all_compo_names.insert("Undly_109_set");

    {
      xml_element UndAID_109{"UndAID"};
      multiset<string> UndAID_109_set;
      UndAID_109.add_attribute("AltID", "UnderlyingSecurityAltID_t_595281071"); // 2
      UndAID_109_set.insert("UnderlyingSecurityAltID_t_595281071");
      UndAID_109.add_attribute("AltIDSrc", "I"); // 2
      UndAID_109_set.insert("I");
      all_values.push_back(UndAID_109_set);
      all_compo_names.insert("UndAID_109_set");

      Undly_109.add_element(UndAID_109);
    }
    {
      xml_element Stip_176{"Stip"};
      multiset<string> Stip_176_set;
      Stip_176.add_attribute("Typ", "DISCOUNT"); // 2
      Stip_176_set.insert("DISCOUNT");
      Stip_176.add_attribute("Val", "UnderlyingStipValue_t_107483630"); // 2
      Stip_176_set.insert("UnderlyingStipValue_t_107483630");
      all_values.push_back(Stip_176_set);
      all_compo_names.insert("Stip_176_set");

      Undly_109.add_element(Stip_176);
    }
    {
      xml_element Pty_389{"Pty"};
      multiset<string> Pty_389_set;
      Pty_389.add_attribute("ID", "UnderlyingInstrumentPartyID_t_861894496"); // 2
      Pty_389_set.insert("UnderlyingInstrumentPartyID_t_861894496");
      Pty_389.add_attribute("Src", "6"); // 2
      Pty_389_set.insert("6");
      Pty_389.add_attribute("R", "51"); // 2
      Pty_389_set.insert("51");
      all_values.push_back(Pty_389_set);
      all_compo_names.insert("Pty_389_set");

      {
        xml_element Sub_389{"Sub"};
        multiset<string> Sub_389_set;
        Sub_389.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1519087868"); // 3
        Sub_389_set.insert("UnderlyingInstrumentPartySubID_t_1519087868");
        Sub_389.add_attribute("Typ", "10"); // 3
        Sub_389_set.insert("10");
        all_values.push_back(Sub_389_set);
        all_compo_names.insert("Sub_389_set");

        Pty_389.add_element(Sub_389);
      }
      Undly_109.add_element(Pty_389);
    }
    elt.add_element(Undly_109);
  } // end Undly
  { // Undly
    xml_element Undly_110{"Undly"};
    multiset<string> Undly_110_set;
    Undly_110.add_attribute("Sym", "UnderlyingSymbol_t_607071765"); // 1
    Undly_110_set.insert("UnderlyingSymbol_t_607071765");
    Undly_110.add_attribute("Sfx", "CD"); // 1
    Undly_110_set.insert("CD");
    Undly_110.add_attribute("ID", "UnderlyingSecurityID_t_29882187"); // 1
    Undly_110_set.insert("UnderlyingSecurityID_t_29882187");
    Undly_110.add_attribute("Src", "4"); // 1
    Undly_110_set.insert("4");
    Undly_110.add_attribute("Prod", "6"); // 1
    Undly_110_set.insert("6");
    Undly_110.add_attribute("CFI", "UnderlyingCFICode_t_961663017"); // 1
    Undly_110_set.insert("UnderlyingCFICode_t_961663017");
    Undly_110.add_attribute("SecTyp", "TAXA"); // 1
    Undly_110_set.insert("TAXA");
    Undly_110.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2057819221"); // 1
    Undly_110_set.insert("UnderlyingSecuritySubType_t_2057819221");
    Undly_110.add_attribute("MMY", "716079460"); // 1
    Undly_110_set.insert("716079460");
    Undly_110.add_attribute("Mat", "UnderlyingMaturityDate_t_801289022"); // 1
    Undly_110_set.insert("UnderlyingMaturityDate_t_801289022");
    Undly_110.add_attribute("MatTm", "846397348"); // 1
    Undly_110_set.insert("846397348");
    Undly_110.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_273078503"); // 1
    Undly_110_set.insert("UnderlyingCouponPaymentDate_t_273078503");
    Undly_110.add_attribute("RestrctTyp", "MM"); // 1
    Undly_110_set.insert("MM");
    Undly_110.add_attribute("Snrty", "SB"); // 1
    Undly_110_set.insert("SB");
    Undly_110.add_attribute("NotlPctOut", "13110219.710000"); // 1
    Undly_110_set.insert("13110219.710000");
    Undly_110.add_attribute("OrigNotlPctOut", "5512386.510000"); // 1
    Undly_110_set.insert("5512386.510000");
    Undly_110.add_attribute("AttchPnt", "4325227.790000"); // 1
    Undly_110_set.insert("4325227.790000");
    Undly_110.add_attribute("DetchPnt", "6244133.650000"); // 1
    Undly_110_set.insert("6244133.650000");
    Undly_110.add_attribute("Issued", "UnderlyingIssueDate_t_1109911011"); // 1
    Undly_110_set.insert("UnderlyingIssueDate_t_1109911011");
    Undly_110.add_attribute("RepoCollSecTyp", "1130877131"); // 1
    Undly_110_set.insert("1130877131");
    Undly_110.add_attribute("RepoTrm", "1577798436"); // 1
    Undly_110_set.insert("1577798436");
    Undly_110.add_attribute("RepoRt", "16973200.560000"); // 1
    Undly_110_set.insert("16973200.560000");
    Undly_110.add_attribute("Fctr", "17261582.020000"); // 1
    Undly_110_set.insert("17261582.020000");
    Undly_110.add_attribute("CrdRtg", "UnderlyingCreditRating_t_939818252"); // 1
    Undly_110_set.insert("UnderlyingCreditRating_t_939818252");
    Undly_110.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_982967766"); // 1
    Undly_110_set.insert("UnderlyingInstrRegistry_t_982967766");
    Undly_110.add_attribute("Ctry", "1833641833"); // 1
    Undly_110_set.insert("1833641833");
    Undly_110.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1801712748"); // 1
    Undly_110_set.insert("UnderlyingStateOrProvinceOfIssue_t_1801712748");
    Undly_110.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1894506060"); // 1
    Undly_110_set.insert("UnderlyingLocaleOfIssue_t_1894506060");
    Undly_110.add_attribute("Redeem", "UnderlyingRedemptionDate_t_642839189"); // 1
    Undly_110_set.insert("UnderlyingRedemptionDate_t_642839189");
    Undly_110.add_attribute("StrkPx", "11733169.680000"); // 1
    Undly_110_set.insert("11733169.680000");
    Undly_110.add_attribute("StrkCcy", "CHF"); // 1
    Undly_110_set.insert("CHF");
    Undly_110.add_attribute("OptA", "1949214288"); // 1
    Undly_110_set.insert("1949214288");
    Undly_110.add_attribute("Mult", "13983529.670000"); // 1
    Undly_110_set.insert("13983529.670000");
    Undly_110.add_attribute("MultTyp", "1"); // 1
    Undly_110_set.insert("1");
    Undly_110.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_110_set.insert("0");
    Undly_110.add_attribute("UOM", "Gal"); // 1
    Undly_110_set.insert("Gal");
    Undly_110.add_attribute("UOMQty", "9648907.040000"); // 1
    Undly_110_set.insert("9648907.040000");
    Undly_110.add_attribute("PxUOM", "Alw"); // 1
    Undly_110_set.insert("Alw");
    Undly_110.add_attribute("PxUOMQty", "9286117.970000"); // 1
    Undly_110_set.insert("9286117.970000");
    Undly_110.add_attribute("TmUnit", "D"); // 1
    Undly_110_set.insert("D");
    Undly_110.add_attribute("ExerStyle", "1"); // 1
    Undly_110_set.insert("1");
    Undly_110.add_attribute("CpnRt", "12016903.000000"); // 1
    Undly_110_set.insert("12016903.000000");
    Undly_110.add_attribute("Exch", "UnderlyingSecurityExchange_t_1978002652"); // 1
    Undly_110_set.insert("UnderlyingSecurityExchange_t_1978002652");
    Undly_110.add_attribute("Issr", "UnderlyingIssuer_t_661527919"); // 1
    Undly_110_set.insert("UnderlyingIssuer_t_661527919");
    Undly_110.add_attribute("EncUndIssrLen", "365228623"); // 1
    Undly_110_set.insert("365228623");
    Undly_110.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_381757655"); // 1
    Undly_110_set.insert("EncodedUnderlyingIssuer_t_381757655");
    Undly_110.add_attribute("Desc", "UnderlyingSecurityDesc_t_1094050698"); // 1
    Undly_110_set.insert("UnderlyingSecurityDesc_t_1094050698");
    Undly_110.add_attribute("EncUndSecDescLen", "989641988"); // 1
    Undly_110_set.insert("989641988");
    Undly_110.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1491668666"); // 1
    Undly_110_set.insert("EncodedUnderlyingSecurityDesc_t_1491668666");
    Undly_110.add_attribute("CPPgm", "UnderlyingCPProgram_t_77444181"); // 1
    Undly_110_set.insert("UnderlyingCPProgram_t_77444181");
    Undly_110.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_419956777"); // 1
    Undly_110_set.insert("UnderlyingCPRegType_t_419956777");
    Undly_110.add_attribute("AllocPct", "10415050.750000"); // 1
    Undly_110_set.insert("10415050.750000");
    Undly_110.add_attribute("Ccy", "CHF"); // 1
    Undly_110_set.insert("CHF");
    Undly_110.add_attribute("Qty", "20244728.410000"); // 1
    Undly_110_set.insert("20244728.410000");
    Undly_110.add_attribute("SettlTyp", "4"); // 1
    Undly_110_set.insert("4");
    Undly_110.add_attribute("CashAmt", "UnderlyingCashAmount_t_1014004129"); // 1
    Undly_110_set.insert("UnderlyingCashAmount_t_1014004129");
    Undly_110.add_attribute("CashTyp", "DIFF"); // 1
    Undly_110_set.insert("DIFF");
    Undly_110.add_attribute("Px", "21325997.580000"); // 1
    Undly_110_set.insert("21325997.580000");
    Undly_110.add_attribute("DirtPx", "398374.500000"); // 1
    Undly_110_set.insert("398374.500000");
    Undly_110.add_attribute("EndPx", "9924823.850000"); // 1
    Undly_110_set.insert("9924823.850000");
    Undly_110.add_attribute("StartVal", "UnderlyingStartValue_t_1235027065"); // 1
    Undly_110_set.insert("UnderlyingStartValue_t_1235027065");
    Undly_110.add_attribute("CurVal", "UnderlyingCurrentValue_t_1989051738"); // 1
    Undly_110_set.insert("UnderlyingCurrentValue_t_1989051738");
    Undly_110.add_attribute("EndVal", "UnderlyingEndValue_t_243351704"); // 1
    Undly_110_set.insert("UnderlyingEndValue_t_243351704");
    Undly_110.add_attribute("AdjQty", "4671955.480000"); // 1
    Undly_110_set.insert("4671955.480000");
    Undly_110.add_attribute("FxRate", "15657626.860000"); // 1
    Undly_110_set.insert("15657626.860000");
    Undly_110.add_attribute("FxRateCalc", "D"); // 1
    Undly_110_set.insert("D");
    Undly_110.add_attribute("CapValu", "UnderlyingCapValue_t_1432086252"); // 1
    Undly_110_set.insert("UnderlyingCapValue_t_1432086252");
    Undly_110.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1052809207"); // 1
    Undly_110_set.insert("UnderlyingSettlMethod_t_1052809207");
    Undly_110.add_attribute("PutCall", "1384495838"); // 1
    Undly_110_set.insert("1384495838");
    all_values.push_back(Undly_110_set);
    all_compo_names.insert("Undly_110_set");

    {
      xml_element UndAID_110{"UndAID"};
      multiset<string> UndAID_110_set;
      UndAID_110.add_attribute("AltID", "UnderlyingSecurityAltID_t_1050782330"); // 2
      UndAID_110_set.insert("UnderlyingSecurityAltID_t_1050782330");
      UndAID_110.add_attribute("AltIDSrc", "B"); // 2
      UndAID_110_set.insert("B");
      all_values.push_back(UndAID_110_set);
      all_compo_names.insert("UndAID_110_set");

      Undly_110.add_element(UndAID_110);
    }
    {
      xml_element Stip_177{"Stip"};
      multiset<string> Stip_177_set;
      Stip_177.add_attribute("Typ", "CUSTOMDATE"); // 2
      Stip_177_set.insert("CUSTOMDATE");
      Stip_177.add_attribute("Val", "UnderlyingStipValue_t_881301334"); // 2
      Stip_177_set.insert("UnderlyingStipValue_t_881301334");
      all_values.push_back(Stip_177_set);
      all_compo_names.insert("Stip_177_set");

      Undly_110.add_element(Stip_177);
    }
    {
      xml_element Pty_390{"Pty"};
      multiset<string> Pty_390_set;
      Pty_390.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2047780995"); // 2
      Pty_390_set.insert("UnderlyingInstrumentPartyID_t_2047780995");
      Pty_390.add_attribute("Src", "C"); // 2
      Pty_390_set.insert("C");
      Pty_390.add_attribute("R", "49"); // 2
      Pty_390_set.insert("49");
      all_values.push_back(Pty_390_set);
      all_compo_names.insert("Pty_390_set");

      {
        xml_element Sub_390{"Sub"};
        multiset<string> Sub_390_set;
        Sub_390.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_994348046"); // 3
        Sub_390_set.insert("UnderlyingInstrumentPartySubID_t_994348046");
        Sub_390.add_attribute("Typ", "11"); // 3
        Sub_390_set.insert("11");
        all_values.push_back(Sub_390_set);
        all_compo_names.insert("Sub_390_set");

        Pty_390.add_element(Sub_390);
      }
      Undly_110.add_element(Pty_390);
    }
    elt.add_element(Undly_110);
  } // end Undly
  { // Leg
    xml_element Leg_94{"Leg"};
    multiset<string> Leg_94_set;
    Leg_94.add_attribute("Sym", "LegSymbol_t_1071792227"); // 1
    Leg_94_set.insert("LegSymbol_t_1071792227");
    Leg_94.add_attribute("Sfx", "WI"); // 1
    Leg_94_set.insert("WI");
    Leg_94.add_attribute("ID", "LegSecurityID_t_1648749083"); // 1
    Leg_94_set.insert("LegSecurityID_t_1648749083");
    Leg_94.add_attribute("Src", "M"); // 1
    Leg_94_set.insert("M");
    Leg_94.add_attribute("Prod", "3"); // 1
    Leg_94_set.insert("3");
    Leg_94.add_attribute("CFI", "LegCFICode_t_1525738277"); // 1
    Leg_94_set.insert("LegCFICode_t_1525738277");
    Leg_94.add_attribute("SecTyp", "STN"); // 1
    Leg_94_set.insert("STN");
    Leg_94.add_attribute("SecSubTyp", "LegSecuritySubType_t_292341741"); // 1
    Leg_94_set.insert("LegSecuritySubType_t_292341741");
    Leg_94.add_attribute("MMY", "1149749882"); // 1
    Leg_94_set.insert("1149749882");
    Leg_94.add_attribute("Mat", "LegMaturityDate_t_55303995"); // 1
    Leg_94_set.insert("LegMaturityDate_t_55303995");
    Leg_94.add_attribute("MatTm", "332179191"); // 1
    Leg_94_set.insert("332179191");
    Leg_94.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2142232268"); // 1
    Leg_94_set.insert("LegCouponPaymentDate_t_2142232268");
    Leg_94.add_attribute("Issued", "LegIssueDate_t_1290331060"); // 1
    Leg_94_set.insert("LegIssueDate_t_1290331060");
    Leg_94.add_attribute("RepoCollSecTyp", "173747282"); // 1
    Leg_94_set.insert("173747282");
    Leg_94.add_attribute("RepoTrm", "238100324"); // 1
    Leg_94_set.insert("238100324");
    Leg_94.add_attribute("RepoRt", "17575266.080000"); // 1
    Leg_94_set.insert("17575266.080000");
    Leg_94.add_attribute("Fctr", "17395099.680000"); // 1
    Leg_94_set.insert("17395099.680000");
    Leg_94.add_attribute("CrdRtg", "LegCreditRating_t_693984365"); // 1
    Leg_94_set.insert("LegCreditRating_t_693984365");
    Leg_94.add_attribute("Rgstry", "LegInstrRegistry_t_1042129212"); // 1
    Leg_94_set.insert("LegInstrRegistry_t_1042129212");
    Leg_94.add_attribute("Ctry", "644835527"); // 1
    Leg_94_set.insert("644835527");
    Leg_94.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2078480203"); // 1
    Leg_94_set.insert("LegStateOrProvinceOfIssue_t_2078480203");
    Leg_94.add_attribute("Lcl", "LegLocaleOfIssue_t_2092911542"); // 1
    Leg_94_set.insert("LegLocaleOfIssue_t_2092911542");
    Leg_94.add_attribute("Redeem", "LegRedemptionDate_t_2031088603"); // 1
    Leg_94_set.insert("LegRedemptionDate_t_2031088603");
    Leg_94.add_attribute("Strk", "3696990.450000"); // 1
    Leg_94_set.insert("3696990.450000");
    Leg_94.add_attribute("StrkCcy", "CHF"); // 1
    Leg_94_set.insert("CHF");
    Leg_94.add_attribute("OptA", "1173630159"); // 1
    Leg_94_set.insert("1173630159");
    Leg_94.add_attribute("Cmult", "20897882.190000"); // 1
    Leg_94_set.insert("20897882.190000");
    Leg_94.add_attribute("MultTyp", "0"); // 1
    Leg_94_set.insert("0");
    Leg_94.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_94_set.insert("3");
    Leg_94.add_attribute("UOM", "oz_tr"); // 1
    Leg_94_set.insert("oz_tr");
    Leg_94.add_attribute("UOMQty", "18500425.760000"); // 1
    Leg_94_set.insert("18500425.760000");
    Leg_94.add_attribute("PxUOM", "Bbl"); // 1
    Leg_94_set.insert("Bbl");
    Leg_94.add_attribute("PxUOMQty", "508140.150000"); // 1
    Leg_94_set.insert("508140.150000");
    Leg_94.add_attribute("TmUnit", "Yr"); // 1
    Leg_94_set.insert("Yr");
    Leg_94.add_attribute("ExerStyle", "0"); // 1
    Leg_94_set.insert("0");
    Leg_94.add_attribute("CpnRt", "15765522.920000"); // 1
    Leg_94_set.insert("15765522.920000");
    Leg_94.add_attribute("Exch", "LegSecurityExchange_t_500657776"); // 1
    Leg_94_set.insert("LegSecurityExchange_t_500657776");
    Leg_94.add_attribute("Issr", "LegIssuer_t_456445197"); // 1
    Leg_94_set.insert("LegIssuer_t_456445197");
    Leg_94.add_attribute("EncLegIssrLen", "578818526"); // 1
    Leg_94_set.insert("578818526");
    Leg_94.add_attribute("EncLegIssr", "EncodedLegIssuer_t_555961771"); // 1
    Leg_94_set.insert("EncodedLegIssuer_t_555961771");
    Leg_94.add_attribute("Desc", "LegSecurityDesc_t_788624389"); // 1
    Leg_94_set.insert("LegSecurityDesc_t_788624389");
    Leg_94.add_attribute("EncLegSecDescLen", "573567146"); // 1
    Leg_94_set.insert("573567146");
    Leg_94.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1846292832"); // 1
    Leg_94_set.insert("EncodedLegSecurityDesc_t_1846292832");
    Leg_94.add_attribute("RatioQty", "9623716.710000"); // 1
    Leg_94_set.insert("9623716.710000");
    Leg_94.add_attribute("Side", "G"); // 1
    Leg_94_set.insert("G");
    Leg_94.add_attribute("Ccy", "EUR"); // 1
    Leg_94_set.insert("EUR");
    Leg_94.add_attribute("Pool", "LegPool_t_1505651836"); // 1
    Leg_94_set.insert("LegPool_t_1505651836");
    Leg_94.add_attribute("Dated", "LegDatedDate_t_350981357"); // 1
    Leg_94_set.insert("LegDatedDate_t_350981357");
    Leg_94.add_attribute("CSetMo", "1199233518"); // 1
    Leg_94_set.insert("1199233518");
    Leg_94.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1436648392"); // 1
    Leg_94_set.insert("LegInterestAccrualDate_t_1436648392");
    Leg_94.add_attribute("PutCall", "296409251"); // 1
    Leg_94_set.insert("296409251");
    Leg_94.add_attribute("LegOptionRatio", "10828384.730000"); // 1
    Leg_94_set.insert("10828384.730000");
    Leg_94.add_attribute("Px", "18063474.370000"); // 1
    Leg_94_set.insert("18063474.370000");
    all_values.push_back(Leg_94_set);
    all_compo_names.insert("Leg_94_set");

    {
      xml_element LegAID_91{"LegAID"};
      multiset<string> LegAID_91_set;
      LegAID_91.add_attribute("SecAltID", "LegSecurityAltID_t_1123138480"); // 2
      LegAID_91_set.insert("LegSecurityAltID_t_1123138480");
      LegAID_91.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_91_set.insert("1");
      all_values.push_back(LegAID_91_set);
      all_compo_names.insert("LegAID_91_set");

      Leg_94.add_element(LegAID_91);
    }
    elt.add_element(Leg_94);
  } // end Leg
  { // Leg
    xml_element Leg_95{"Leg"};
    multiset<string> Leg_95_set;
    Leg_95.add_attribute("Sym", "LegSymbol_t_832493948"); // 1
    Leg_95_set.insert("LegSymbol_t_832493948");
    Leg_95.add_attribute("Sfx", "WI"); // 1
    Leg_95_set.insert("WI");
    Leg_95.add_attribute("ID", "LegSecurityID_t_1644991125"); // 1
    Leg_95_set.insert("LegSecurityID_t_1644991125");
    Leg_95.add_attribute("Src", "A"); // 1
    Leg_95_set.insert("A");
    Leg_95.add_attribute("Prod", "3"); // 1
    Leg_95_set.insert("3");
    Leg_95.add_attribute("CFI", "LegCFICode_t_1347550054"); // 1
    Leg_95_set.insert("LegCFICode_t_1347550054");
    Leg_95.add_attribute("SecTyp", "CB"); // 1
    Leg_95_set.insert("CB");
    Leg_95.add_attribute("SecSubTyp", "LegSecuritySubType_t_1665805646"); // 1
    Leg_95_set.insert("LegSecuritySubType_t_1665805646");
    Leg_95.add_attribute("MMY", "1778019946"); // 1
    Leg_95_set.insert("1778019946");
    Leg_95.add_attribute("Mat", "LegMaturityDate_t_554599213"); // 1
    Leg_95_set.insert("LegMaturityDate_t_554599213");
    Leg_95.add_attribute("MatTm", "1094874290"); // 1
    Leg_95_set.insert("1094874290");
    Leg_95.add_attribute("CpnPmt", "LegCouponPaymentDate_t_131194074"); // 1
    Leg_95_set.insert("LegCouponPaymentDate_t_131194074");
    Leg_95.add_attribute("Issued", "LegIssueDate_t_1011044411"); // 1
    Leg_95_set.insert("LegIssueDate_t_1011044411");
    Leg_95.add_attribute("RepoCollSecTyp", "1673692816"); // 1
    Leg_95_set.insert("1673692816");
    Leg_95.add_attribute("RepoTrm", "687155846"); // 1
    Leg_95_set.insert("687155846");
    Leg_95.add_attribute("RepoRt", "17996688.000000"); // 1
    Leg_95_set.insert("17996688.000000");
    Leg_95.add_attribute("Fctr", "997763.150000"); // 1
    Leg_95_set.insert("997763.150000");
    Leg_95.add_attribute("CrdRtg", "LegCreditRating_t_385965030"); // 1
    Leg_95_set.insert("LegCreditRating_t_385965030");
    Leg_95.add_attribute("Rgstry", "LegInstrRegistry_t_614556823"); // 1
    Leg_95_set.insert("LegInstrRegistry_t_614556823");
    Leg_95.add_attribute("Ctry", "911443786"); // 1
    Leg_95_set.insert("911443786");
    Leg_95.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1842300822"); // 1
    Leg_95_set.insert("LegStateOrProvinceOfIssue_t_1842300822");
    Leg_95.add_attribute("Lcl", "LegLocaleOfIssue_t_1168954814"); // 1
    Leg_95_set.insert("LegLocaleOfIssue_t_1168954814");
    Leg_95.add_attribute("Redeem", "LegRedemptionDate_t_269611974"); // 1
    Leg_95_set.insert("LegRedemptionDate_t_269611974");
    Leg_95.add_attribute("Strk", "457985.310000"); // 1
    Leg_95_set.insert("457985.310000");
    Leg_95.add_attribute("StrkCcy", "JPY"); // 1
    Leg_95_set.insert("JPY");
    Leg_95.add_attribute("OptA", "342207783"); // 1
    Leg_95_set.insert("342207783");
    Leg_95.add_attribute("Cmult", "13035431.570000"); // 1
    Leg_95_set.insert("13035431.570000");
    Leg_95.add_attribute("MultTyp", "1"); // 1
    Leg_95_set.insert("1");
    Leg_95.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_95_set.insert("3");
    Leg_95.add_attribute("UOM", "Bbl"); // 1
    Leg_95_set.insert("Bbl");
    Leg_95.add_attribute("UOMQty", "501344.560000"); // 1
    Leg_95_set.insert("501344.560000");
    Leg_95.add_attribute("PxUOM", "t"); // 1
    Leg_95_set.insert("t");
    Leg_95.add_attribute("PxUOMQty", "16677914.110000"); // 1
    Leg_95_set.insert("16677914.110000");
    Leg_95.add_attribute("TmUnit", "S"); // 1
    Leg_95_set.insert("S");
    Leg_95.add_attribute("ExerStyle", "1"); // 1
    Leg_95_set.insert("1");
    Leg_95.add_attribute("CpnRt", "8678578.170000"); // 1
    Leg_95_set.insert("8678578.170000");
    Leg_95.add_attribute("Exch", "LegSecurityExchange_t_2092843775"); // 1
    Leg_95_set.insert("LegSecurityExchange_t_2092843775");
    Leg_95.add_attribute("Issr", "LegIssuer_t_1516619296"); // 1
    Leg_95_set.insert("LegIssuer_t_1516619296");
    Leg_95.add_attribute("EncLegIssrLen", "498394115"); // 1
    Leg_95_set.insert("498394115");
    Leg_95.add_attribute("EncLegIssr", "EncodedLegIssuer_t_499959341"); // 1
    Leg_95_set.insert("EncodedLegIssuer_t_499959341");
    Leg_95.add_attribute("Desc", "LegSecurityDesc_t_464009938"); // 1
    Leg_95_set.insert("LegSecurityDesc_t_464009938");
    Leg_95.add_attribute("EncLegSecDescLen", "629588190"); // 1
    Leg_95_set.insert("629588190");
    Leg_95.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1511003752"); // 1
    Leg_95_set.insert("EncodedLegSecurityDesc_t_1511003752");
    Leg_95.add_attribute("RatioQty", "21377027.540000"); // 1
    Leg_95_set.insert("21377027.540000");
    Leg_95.add_attribute("Side", "5"); // 1
    Leg_95_set.insert("5");
    Leg_95.add_attribute("Ccy", "CAN"); // 1
    Leg_95_set.insert("CAN");
    Leg_95.add_attribute("Pool", "LegPool_t_1702709066"); // 1
    Leg_95_set.insert("LegPool_t_1702709066");
    Leg_95.add_attribute("Dated", "LegDatedDate_t_1777745727"); // 1
    Leg_95_set.insert("LegDatedDate_t_1777745727");
    Leg_95.add_attribute("CSetMo", "1001439207"); // 1
    Leg_95_set.insert("1001439207");
    Leg_95.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1397526240"); // 1
    Leg_95_set.insert("LegInterestAccrualDate_t_1397526240");
    Leg_95.add_attribute("PutCall", "799216893"); // 1
    Leg_95_set.insert("799216893");
    Leg_95.add_attribute("LegOptionRatio", "12710511.820000"); // 1
    Leg_95_set.insert("12710511.820000");
    Leg_95.add_attribute("Px", "14433247.720000"); // 1
    Leg_95_set.insert("14433247.720000");
    all_values.push_back(Leg_95_set);
    all_compo_names.insert("Leg_95_set");

    {
      xml_element LegAID_92{"LegAID"};
      multiset<string> LegAID_92_set;
      LegAID_92.add_attribute("SecAltID", "LegSecurityAltID_t_1019921577"); // 2
      LegAID_92_set.insert("LegSecurityAltID_t_1019921577");
      LegAID_92.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_92_set.insert("1");
      all_values.push_back(LegAID_92_set);
      all_compo_names.insert("LegAID_92_set");

      Leg_95.add_element(LegAID_92);
    }
    elt.add_element(Leg_95);
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
