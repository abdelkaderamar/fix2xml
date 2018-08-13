#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ContraryIntentionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ContraryIntentionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ContIntRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ContraryIntentionReport_message_t_0;
  elt.add_attribute("RptID", "ContIntRptID_t_1695375140"); // 0
  ContraryIntentionReport_message_t_0.insert("ContIntRptID_t_1695375140");
  elt.add_attribute("TxnTm", "TransactTime_t_1619661197"); // 0
  ContraryIntentionReport_message_t_0.insert("TransactTime_t_1619661197");
  elt.add_attribute("LateInd", "true"); // 0
  ContraryIntentionReport_message_t_0.insert("true");
  elt.add_attribute("InptSrc", "InputSource_t_1491120855"); // 0
  ContraryIntentionReport_message_t_0.insert("InputSource_t_1491120855");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1390840970"); // 0
  ContraryIntentionReport_message_t_0.insert("ClearingBusinessDate_t_1390840970");
  elt.add_attribute("Txt", "Text_t_500338597"); // 0
  ContraryIntentionReport_message_t_0.insert("Text_t_500338597");
  elt.add_attribute("EncTxtLen", "549697647"); // 0
  ContraryIntentionReport_message_t_0.insert("549697647");
  elt.add_attribute("EncTxt", "EncodedText_t_1363032094"); // 0
  ContraryIntentionReport_message_t_0.insert("EncodedText_t_1363032094");
  all_values.push_back(ContraryIntentionReport_message_t_0);
  all_compo_names.insert("ContraryIntentionReport_message_t");

  { // Hdr
    xml_element Hdr_23{"Hdr"};
    multiset<string> Hdr_23_set;
    Hdr_23.add_attribute("SeqNum", "1039349819"); // 1
    Hdr_23_set.insert("1039349819");
    Hdr_23.add_attribute("SID", "SenderCompID_t_2024634900"); // 1
    Hdr_23_set.insert("SenderCompID_t_2024634900");
    Hdr_23.add_attribute("TID", "TargetCompID_t_1948344157"); // 1
    Hdr_23_set.insert("TargetCompID_t_1948344157");
    Hdr_23.add_attribute("OBID", "OnBehalfOfCompID_t_1205787659"); // 1
    Hdr_23_set.insert("OnBehalfOfCompID_t_1205787659");
    Hdr_23.add_attribute("D2ID", "DeliverToCompID_t_1843297248"); // 1
    Hdr_23_set.insert("DeliverToCompID_t_1843297248");
    Hdr_23.add_attribute("SSub", "SenderSubID_t_2122663416"); // 1
    Hdr_23_set.insert("SenderSubID_t_2122663416");
    Hdr_23.add_attribute("SLoc", "SenderLocationID_t_1071773262"); // 1
    Hdr_23_set.insert("SenderLocationID_t_1071773262");
    Hdr_23.add_attribute("TSub", "TargetSubID_t_20273701"); // 1
    Hdr_23_set.insert("TargetSubID_t_20273701");
    Hdr_23.add_attribute("TLoc", "TargetLocationID_t_605865134"); // 1
    Hdr_23_set.insert("TargetLocationID_t_605865134");
    Hdr_23.add_attribute("OBSub", "OnBehalfOfSubID_t_1666218715"); // 1
    Hdr_23_set.insert("OnBehalfOfSubID_t_1666218715");
    Hdr_23.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1113213086"); // 1
    Hdr_23_set.insert("OnBehalfOfLocationID_t_1113213086");
    Hdr_23.add_attribute("D2Sub", "DeliverToSubID_t_2002050369"); // 1
    Hdr_23_set.insert("DeliverToSubID_t_2002050369");
    Hdr_23.add_attribute("D2Loc", "DeliverToLocationID_t_344831734"); // 1
    Hdr_23_set.insert("DeliverToLocationID_t_344831734");
    Hdr_23.add_attribute("PosDup", "Y"); // 1
    Hdr_23_set.insert("Y");
    Hdr_23.add_attribute("PosRsnd", "Y"); // 1
    Hdr_23_set.insert("Y");
    Hdr_23.add_attribute("Snt", "SendingTime_t_932095510"); // 1
    Hdr_23_set.insert("SendingTime_t_932095510");
    Hdr_23.add_attribute("OrigSnt", "OrigSendingTime_t_1368627259"); // 1
    Hdr_23_set.insert("OrigSendingTime_t_1368627259");
    Hdr_23.add_attribute("MsgEncd", "MessageEncoding_t_1464554511"); // 1
    Hdr_23_set.insert("MessageEncoding_t_1464554511");
    all_values.push_back(Hdr_23_set);
    all_compo_names.insert("Hdr_23_set");

    {
      xml_element Hop_23{"Hop"};
      multiset<string> Hop_23_set;
      Hop_23.add_attribute("ID", "HopCompID_t_1134742130"); // 2
      Hop_23_set.insert("HopCompID_t_1134742130");
      Hop_23.add_attribute("Ref", "165295879"); // 2
      Hop_23_set.insert("165295879");
      Hop_23.add_attribute("Snt", "HopSendingTime_t_398065586"); // 2
      Hop_23_set.insert("HopSendingTime_t_398065586");
      all_values.push_back(Hop_23_set);
      all_compo_names.insert("Hop_23_set");

      Hdr_23.add_element(Hop_23);
    }
    elt.add_element(Hdr_23);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_1{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_1_set;
    ApplSeqCtrl_1.add_attribute("ApplID", "ApplID_t_986501589"); // 1
    ApplSeqCtrl_1_set.insert("ApplID_t_986501589");
    ApplSeqCtrl_1.add_attribute("ApplSeqNum", "2093032368"); // 1
    ApplSeqCtrl_1_set.insert("2093032368");
    ApplSeqCtrl_1.add_attribute("ApplLastSeqNum", "2093440727"); // 1
    ApplSeqCtrl_1_set.insert("2093440727");
    ApplSeqCtrl_1.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_1_set.insert("true");
    all_values.push_back(ApplSeqCtrl_1_set);
    all_compo_names.insert("ApplSeqCtrl_1_set");

    elt.add_element(ApplSeqCtrl_1);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_110{"Pty"};
    multiset<string> Pty_110_set;
    Pty_110.add_attribute("ID", "PartyID_t_1437077934"); // 1
    Pty_110_set.insert("PartyID_t_1437077934");
    Pty_110.add_attribute("Src", "3"); // 1
    Pty_110_set.insert("3");
    Pty_110.add_attribute("R", "15"); // 1
    Pty_110_set.insert("15");
    all_values.push_back(Pty_110_set);
    all_compo_names.insert("Pty_110_set");

    {
      xml_element Sub_110{"Sub"};
      multiset<string> Sub_110_set;
      Sub_110.add_attribute("ID", "PartySubID_t_1986775581"); // 2
      Sub_110_set.insert("PartySubID_t_1986775581");
      Sub_110.add_attribute("Typ", "6"); // 2
      Sub_110_set.insert("6");
      all_values.push_back(Sub_110_set);
      all_compo_names.insert("Sub_110_set");

      Pty_110.add_element(Sub_110);
    }
    elt.add_element(Pty_110);
  } // end Pty
  { // Pty
    xml_element Pty_111{"Pty"};
    multiset<string> Pty_111_set;
    Pty_111.add_attribute("ID", "PartyID_t_1388780082"); // 1
    Pty_111_set.insert("PartyID_t_1388780082");
    Pty_111.add_attribute("Src", "E"); // 1
    Pty_111_set.insert("E");
    Pty_111.add_attribute("R", "35"); // 1
    Pty_111_set.insert("35");
    all_values.push_back(Pty_111_set);
    all_compo_names.insert("Pty_111_set");

    {
      xml_element Sub_111{"Sub"};
      multiset<string> Sub_111_set;
      Sub_111.add_attribute("ID", "PartySubID_t_447084093"); // 2
      Sub_111_set.insert("PartySubID_t_447084093");
      Sub_111.add_attribute("Typ", "5"); // 2
      Sub_111_set.insert("5");
      all_values.push_back(Sub_111_set);
      all_compo_names.insert("Sub_111_set");

      Pty_111.add_element(Sub_111);
    }
    elt.add_element(Pty_111);
  } // end Pty
  { // Qty
    xml_element Qty_4{"Qty"};
    multiset<string> Qty_4_set;
    Qty_4.add_attribute("ExpTyp", "1"); // 1
    Qty_4_set.insert("1");
    Qty_4.add_attribute("ExpQty", "15800141.350000"); // 1
    Qty_4_set.insert("15800141.350000");
    all_values.push_back(Qty_4_set);
    all_compo_names.insert("Qty_4_set");

    elt.add_element(Qty_4);
  } // end Qty
  { // Qty
    xml_element Qty_5{"Qty"};
    multiset<string> Qty_5_set;
    Qty_5.add_attribute("ExpTyp", "2"); // 1
    Qty_5_set.insert("2");
    Qty_5.add_attribute("ExpQty", "10375924.220000"); // 1
    Qty_5_set.insert("10375924.220000");
    all_values.push_back(Qty_5_set);
    all_compo_names.insert("Qty_5_set");

    elt.add_element(Qty_5);
  } // end Qty
  { // Instrmt
    xml_element Instrmt_13{"Instrmt"};
    multiset<string> Instrmt_13_set;
    Instrmt_13.add_attribute("Sym", "Symbol_t_545743573"); // 1
    Instrmt_13_set.insert("Symbol_t_545743573");
    Instrmt_13.add_attribute("Sfx", "WI"); // 1
    Instrmt_13_set.insert("WI");
    Instrmt_13.add_attribute("ID", "SecurityID_t_1382424157"); // 1
    Instrmt_13_set.insert("SecurityID_t_1382424157");
    Instrmt_13.add_attribute("Src", "C"); // 1
    Instrmt_13_set.insert("C");
    Instrmt_13.add_attribute("Prod", "12"); // 1
    Instrmt_13_set.insert("12");
    Instrmt_13.add_attribute("ProdCmplx", "ProductComplex_t_167036019"); // 1
    Instrmt_13_set.insert("ProductComplex_t_167036019");
    Instrmt_13.add_attribute("SecGrp", "SecurityGroup_t_1477697858"); // 1
    Instrmt_13_set.insert("SecurityGroup_t_1477697858");
    Instrmt_13.add_attribute("CFI", "CFICode_t_1582535975"); // 1
    Instrmt_13_set.insert("CFICode_t_1582535975");
    Instrmt_13.add_attribute("SecTyp", "EUCORP"); // 1
    Instrmt_13_set.insert("EUCORP");
    Instrmt_13.add_attribute("SubTyp", "SecuritySubType_t_1642993738"); // 1
    Instrmt_13_set.insert("SecuritySubType_t_1642993738");
    Instrmt_13.add_attribute("MMY", "1980601562"); // 1
    Instrmt_13_set.insert("1980601562");
    Instrmt_13.add_attribute("MatDt", "MaturityDate_t_140796091"); // 1
    Instrmt_13_set.insert("MaturityDate_t_140796091");
    Instrmt_13.add_attribute("MatTm", "1588542458"); // 1
    Instrmt_13_set.insert("1588542458");
    Instrmt_13.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1926558641"); // 1
    Instrmt_13_set.insert("SettleOnOpenFlag_t_1926558641");
    Instrmt_13.add_attribute("AsgnMeth", "599475229"); // 1
    Instrmt_13_set.insert("599475229");
    Instrmt_13.add_attribute("Status", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("CpnPmt", "CouponPaymentDate_t_1216152927"); // 1
    Instrmt_13_set.insert("CouponPaymentDate_t_1216152927");
    Instrmt_13.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_13_set.insert("MM");
    Instrmt_13.add_attribute("Snrty", "SB"); // 1
    Instrmt_13_set.insert("SB");
    Instrmt_13.add_attribute("NotlPctOut", "10554448.610000"); // 1
    Instrmt_13_set.insert("10554448.610000");
    Instrmt_13.add_attribute("OrigNotlPctOut", "13665802.440000"); // 1
    Instrmt_13_set.insert("13665802.440000");
    Instrmt_13.add_attribute("AttchPnt", "10283608.200000"); // 1
    Instrmt_13_set.insert("10283608.200000");
    Instrmt_13.add_attribute("DetchPnt", "7718880.460000"); // 1
    Instrmt_13_set.insert("7718880.460000");
    Instrmt_13.add_attribute("Issued", "IssueDate_t_85025660"); // 1
    Instrmt_13_set.insert("IssueDate_t_85025660");
    Instrmt_13.add_attribute("RepoCollSecTyp", "1475444913"); // 1
    Instrmt_13_set.insert("1475444913");
    Instrmt_13.add_attribute("RepoTrm", "184144832"); // 1
    Instrmt_13_set.insert("184144832");
    Instrmt_13.add_attribute("RepoRt", "9261344.910000"); // 1
    Instrmt_13_set.insert("9261344.910000");
    Instrmt_13.add_attribute("Fctr", "8468186.200000"); // 1
    Instrmt_13_set.insert("8468186.200000");
    Instrmt_13.add_attribute("CrdRtg", "CreditRating_t_1764158968"); // 1
    Instrmt_13_set.insert("CreditRating_t_1764158968");
    Instrmt_13.add_attribute("Rgstry", "InstrRegistry_t_225624809"); // 1
    Instrmt_13_set.insert("InstrRegistry_t_225624809");
    Instrmt_13.add_attribute("IssuCtry", "1884411043"); // 1
    Instrmt_13_set.insert("1884411043");
    Instrmt_13.add_attribute("StPrv", "StateOrProvinceOfIssue_t_162418893"); // 1
    Instrmt_13_set.insert("StateOrProvinceOfIssue_t_162418893");
    Instrmt_13.add_attribute("Lcl", "LocaleOfIssue_t_1527165496"); // 1
    Instrmt_13_set.insert("LocaleOfIssue_t_1527165496");
    Instrmt_13.add_attribute("Redeem", "RedemptionDate_t_1119351552"); // 1
    Instrmt_13_set.insert("RedemptionDate_t_1119351552");
    Instrmt_13.add_attribute("StrkPx", "2714894.920000"); // 1
    Instrmt_13_set.insert("2714894.920000");
    Instrmt_13.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_13_set.insert("CHF");
    Instrmt_13.add_attribute("StrkMult", "17491873.510000"); // 1
    Instrmt_13_set.insert("17491873.510000");
    Instrmt_13.add_attribute("StrkValu", "10801992.880000"); // 1
    Instrmt_13_set.insert("10801992.880000");
    Instrmt_13.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("StrkPxBndryPrcsn", "9133172.020000"); // 1
    Instrmt_13_set.insert("9133172.020000");
    Instrmt_13.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("OptAt", "685756251"); // 1
    Instrmt_13_set.insert("685756251");
    Instrmt_13.add_attribute("Mult", "6923921.950000"); // 1
    Instrmt_13_set.insert("6923921.950000");
    Instrmt_13.add_attribute("MultTyp", "0"); // 1
    Instrmt_13_set.insert("0");
    Instrmt_13.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_13_set.insert("0");
    Instrmt_13.add_attribute("MinPxIncr", "19085451.220000"); // 1
    Instrmt_13_set.insert("19085451.220000");
    Instrmt_13.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1482465083"); // 1
    Instrmt_13_set.insert("MinPriceIncrementAmount_t_1482465083");
    Instrmt_13.add_attribute("UOM", "lbs"); // 1
    Instrmt_13_set.insert("lbs");
    Instrmt_13.add_attribute("UOMQty", "8165063.350000"); // 1
    Instrmt_13_set.insert("8165063.350000");
    Instrmt_13.add_attribute("PxUOM", "MMBtu"); // 1
    Instrmt_13_set.insert("MMBtu");
    Instrmt_13.add_attribute("PxUOMQty", "6438482.850000"); // 1
    Instrmt_13_set.insert("6438482.850000");
    Instrmt_13.add_attribute("SettlMeth", "C"); // 1
    Instrmt_13_set.insert("C");
    Instrmt_13.add_attribute("ExerStyle", "0"); // 1
    Instrmt_13_set.insert("0");
    Instrmt_13.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("OptPayAmt", "OptPayoutAmount_t_1772539214"); // 1
    Instrmt_13_set.insert("OptPayoutAmount_t_1772539214");
    Instrmt_13.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_13_set.insert("PCTPAR");
    Instrmt_13.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_13_set.insert("EQTY");
    Instrmt_13.add_attribute("ListMeth", "0"); // 1
    Instrmt_13_set.insert("0");
    Instrmt_13.add_attribute("CapPx", "19383466.410000"); // 1
    Instrmt_13_set.insert("19383466.410000");
    Instrmt_13.add_attribute("FlrPx", "5555555.650000"); // 1
    Instrmt_13_set.insert("5555555.650000");
    Instrmt_13.add_attribute("PutCall", "0"); // 1
    Instrmt_13_set.insert("0");
    Instrmt_13.add_attribute("FlexInd", "false"); // 1
    Instrmt_13_set.insert("false");
    Instrmt_13.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_13_set.insert("false");
    Instrmt_13.add_attribute("TmUnit", "D"); // 1
    Instrmt_13_set.insert("D");
    Instrmt_13.add_attribute("CpnRt", "8156918.020000"); // 1
    Instrmt_13_set.insert("8156918.020000");
    Instrmt_13.add_attribute("Exch", "SecurityExchange_t_813811041"); // 1
    Instrmt_13_set.insert("SecurityExchange_t_813811041");
    Instrmt_13.add_attribute("PosLmt", "1424826623"); // 1
    Instrmt_13_set.insert("1424826623");
    Instrmt_13.add_attribute("NTPosLmt", "1895891090"); // 1
    Instrmt_13_set.insert("1895891090");
    Instrmt_13.add_attribute("Issr", "Issuer_t_1254493114"); // 1
    Instrmt_13_set.insert("Issuer_t_1254493114");
    Instrmt_13.add_attribute("EncIssrLen", "522040416"); // 1
    Instrmt_13_set.insert("522040416");
    Instrmt_13.add_attribute("EncIssr", "EncodedIssuer_t_661724644"); // 1
    Instrmt_13_set.insert("EncodedIssuer_t_661724644");
    Instrmt_13.add_attribute("Desc", "SecurityDesc_t_1835971278"); // 1
    Instrmt_13_set.insert("SecurityDesc_t_1835971278");
    Instrmt_13.add_attribute("EncSecDescLen", "1207796668"); // 1
    Instrmt_13_set.insert("1207796668");
    Instrmt_13.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1354116839"); // 1
    Instrmt_13_set.insert("EncodedSecurityDesc_t_1354116839");
    Instrmt_13.add_attribute("Pool", "Pool_t_869441023"); // 1
    Instrmt_13_set.insert("Pool_t_869441023");
    Instrmt_13.add_attribute("CSetMo", "1183703395"); // 1
    Instrmt_13_set.insert("1183703395");
    Instrmt_13.add_attribute("CPPgm", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("CPRegT", "CPRegType_t_204422459"); // 1
    Instrmt_13_set.insert("CPRegType_t_204422459");
    Instrmt_13.add_attribute("Dated", "DatedDate_t_799190860"); // 1
    Instrmt_13_set.insert("DatedDate_t_799190860");
    Instrmt_13.add_attribute("IntAcrl", "InterestAccrualDate_t_1931684649"); // 1
    Instrmt_13_set.insert("InterestAccrualDate_t_1931684649");
    all_values.push_back(Instrmt_13_set);
    all_compo_names.insert("Instrmt_13_set");

    {
      xml_element AID_13{"AID"};
      multiset<string> AID_13_set;
      AID_13.add_attribute("AltID", "SecurityAltID_t_905984139"); // 2
      AID_13_set.insert("SecurityAltID_t_905984139");
      AID_13.add_attribute("AltIDSrc", "A"); // 2
      AID_13_set.insert("A");
      all_values.push_back(AID_13_set);
      all_compo_names.insert("AID_13_set");

      Instrmt_13.add_element(AID_13);
    }
    {
      xml_element SecXML_13{"SecXML"};
      multiset<string> SecXML_13_set;
      SecXML_13.add_attribute("Schema", "SecurityXMLSchema_t_1372595383"); // 2
      SecXML_13_set.insert("SecurityXMLSchema_t_1372595383");
      all_values.push_back(SecXML_13_set);
      all_compo_names.insert("SecXML_13_set");

      Instrmt_13.add_element(SecXML_13);
    }
    {
      xml_element Evnt_13{"Evnt"};
      multiset<string> Evnt_13_set;
      Evnt_13.add_attribute("EventTyp", "19"); // 2
      Evnt_13_set.insert("19");
      Evnt_13.add_attribute("Dt", "EventDate_t_1414848695"); // 2
      Evnt_13_set.insert("EventDate_t_1414848695");
      Evnt_13.add_attribute("Tm", "EventTime_t_997650949"); // 2
      Evnt_13_set.insert("EventTime_t_997650949");
      Evnt_13.add_attribute("Px", "12578096.620000"); // 2
      Evnt_13_set.insert("12578096.620000");
      Evnt_13.add_attribute("Txt", "EventText_t_85993217"); // 2
      Evnt_13_set.insert("EventText_t_85993217");
      all_values.push_back(Evnt_13_set);
      all_compo_names.insert("Evnt_13_set");

      Instrmt_13.add_element(Evnt_13);
    }
    {
      xml_element Pty_112{"Pty"};
      multiset<string> Pty_112_set;
      Pty_112.add_attribute("ID", "InstrumentPartyID_t_239381836"); // 2
      Pty_112_set.insert("InstrumentPartyID_t_239381836");
      Pty_112.add_attribute("Src", "I"); // 2
      Pty_112_set.insert("I");
      Pty_112.add_attribute("R", "46"); // 2
      Pty_112_set.insert("46");
      all_values.push_back(Pty_112_set);
      all_compo_names.insert("Pty_112_set");

      {
        xml_element Sub_112{"Sub"};
        multiset<string> Sub_112_set;
        Sub_112.add_attribute("ID", "InstrumentPartySubID_t_1791015264"); // 3
        Sub_112_set.insert("InstrumentPartySubID_t_1791015264");
        Sub_112.add_attribute("Typ", "23"); // 3
        Sub_112_set.insert("23");
        all_values.push_back(Sub_112_set);
        all_compo_names.insert("Sub_112_set");

        Pty_112.add_element(Sub_112);
      }
      Instrmt_13.add_element(Pty_112);
    }
    {
      xml_element CmplxEvnt_13{"CmplxEvnt"};
      multiset<string> CmplxEvnt_13_set;
      CmplxEvnt_13.add_attribute("Typ", "7"); // 2
      CmplxEvnt_13_set.insert("7");
      CmplxEvnt_13.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1466654536"); // 2
      CmplxEvnt_13_set.insert("ComplexOptPayoutAmount_t_1466654536");
      CmplxEvnt_13.add_attribute("Px", "10349092.990000"); // 2
      CmplxEvnt_13_set.insert("10349092.990000");
      CmplxEvnt_13.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_13_set.insert("4");
      CmplxEvnt_13.add_attribute("PxBndryPrcsn", "7439975.120000"); // 2
      CmplxEvnt_13_set.insert("7439975.120000");
      CmplxEvnt_13.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_13_set.insert("2");
      CmplxEvnt_13.add_attribute("Cond", "2"); // 2
      CmplxEvnt_13_set.insert("2");
      all_values.push_back(CmplxEvnt_13_set);
      all_compo_names.insert("CmplxEvnt_13_set");

      {
        xml_element EvntDts_13{"EvntDts"};
        multiset<string> EvntDts_13_set;
        EvntDts_13.add_attribute("StartDt", "ComplexEventStartDate_t_1266037928"); // 3
        EvntDts_13_set.insert("ComplexEventStartDate_t_1266037928");
        EvntDts_13.add_attribute("EndDt", "ComplexEventEndDate_t_1445041385"); // 3
        EvntDts_13_set.insert("ComplexEventEndDate_t_1445041385");
        all_values.push_back(EvntDts_13_set);
        all_compo_names.insert("EvntDts_13_set");

        {
          xml_element EvntTms_13{"EvntTms"};
          multiset<string> EvntTms_13_set;
          EvntTms_13.add_attribute("StartTm", "1925764037"); // 4
          EvntTms_13_set.insert("1925764037");
          EvntTms_13.add_attribute("EndTm", "326350948"); // 4
          EvntTms_13_set.insert("326350948");
          all_values.push_back(EvntTms_13_set);
          all_compo_names.insert("EvntTms_13_set");

          EvntDts_13.add_element(EvntTms_13);
        }
        CmplxEvnt_13.add_element(EvntDts_13);
      }
      Instrmt_13.add_element(CmplxEvnt_13);
    }
    elt.add_element(Instrmt_13);
  } // end Instrmt
  { // Undly
    xml_element Undly_23{"Undly"};
    multiset<string> Undly_23_set;
    Undly_23.add_attribute("Sym", "UnderlyingSymbol_t_647721413"); // 1
    Undly_23_set.insert("UnderlyingSymbol_t_647721413");
    Undly_23.add_attribute("Sfx", "WI"); // 1
    Undly_23_set.insert("WI");
    Undly_23.add_attribute("ID", "UnderlyingSecurityID_t_1766852889"); // 1
    Undly_23_set.insert("UnderlyingSecurityID_t_1766852889");
    Undly_23.add_attribute("Src", "9"); // 1
    Undly_23_set.insert("9");
    Undly_23.add_attribute("Prod", "4"); // 1
    Undly_23_set.insert("4");
    Undly_23.add_attribute("CFI", "UnderlyingCFICode_t_1551053890"); // 1
    Undly_23_set.insert("UnderlyingCFICode_t_1551053890");
    Undly_23.add_attribute("SecTyp", "PROV"); // 1
    Undly_23_set.insert("PROV");
    Undly_23.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1604800700"); // 1
    Undly_23_set.insert("UnderlyingSecuritySubType_t_1604800700");
    Undly_23.add_attribute("MMY", "776165625"); // 1
    Undly_23_set.insert("776165625");
    Undly_23.add_attribute("Mat", "UnderlyingMaturityDate_t_1303215842"); // 1
    Undly_23_set.insert("UnderlyingMaturityDate_t_1303215842");
    Undly_23.add_attribute("MatTm", "872165747"); // 1
    Undly_23_set.insert("872165747");
    Undly_23.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1773816575"); // 1
    Undly_23_set.insert("UnderlyingCouponPaymentDate_t_1773816575");
    Undly_23.add_attribute("RestrctTyp", "FR"); // 1
    Undly_23_set.insert("FR");
    Undly_23.add_attribute("Snrty", "SB"); // 1
    Undly_23_set.insert("SB");
    Undly_23.add_attribute("NotlPctOut", "20131984.110000"); // 1
    Undly_23_set.insert("20131984.110000");
    Undly_23.add_attribute("OrigNotlPctOut", "14622145.120000"); // 1
    Undly_23_set.insert("14622145.120000");
    Undly_23.add_attribute("AttchPnt", "15997077.480000"); // 1
    Undly_23_set.insert("15997077.480000");
    Undly_23.add_attribute("DetchPnt", "16567300.270000"); // 1
    Undly_23_set.insert("16567300.270000");
    Undly_23.add_attribute("Issued", "UnderlyingIssueDate_t_1681432009"); // 1
    Undly_23_set.insert("UnderlyingIssueDate_t_1681432009");
    Undly_23.add_attribute("RepoCollSecTyp", "1768680000"); // 1
    Undly_23_set.insert("1768680000");
    Undly_23.add_attribute("RepoTrm", "975900915"); // 1
    Undly_23_set.insert("975900915");
    Undly_23.add_attribute("RepoRt", "5688576.600000"); // 1
    Undly_23_set.insert("5688576.600000");
    Undly_23.add_attribute("Fctr", "6039796.460000"); // 1
    Undly_23_set.insert("6039796.460000");
    Undly_23.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1719898427"); // 1
    Undly_23_set.insert("UnderlyingCreditRating_t_1719898427");
    Undly_23.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1352174401"); // 1
    Undly_23_set.insert("UnderlyingInstrRegistry_t_1352174401");
    Undly_23.add_attribute("Ctry", "693772405"); // 1
    Undly_23_set.insert("693772405");
    Undly_23.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_838452708"); // 1
    Undly_23_set.insert("UnderlyingStateOrProvinceOfIssue_t_838452708");
    Undly_23.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_649732138"); // 1
    Undly_23_set.insert("UnderlyingLocaleOfIssue_t_649732138");
    Undly_23.add_attribute("Redeem", "UnderlyingRedemptionDate_t_472052795"); // 1
    Undly_23_set.insert("UnderlyingRedemptionDate_t_472052795");
    Undly_23.add_attribute("StrkPx", "11648036.560000"); // 1
    Undly_23_set.insert("11648036.560000");
    Undly_23.add_attribute("StrkCcy", "JPY"); // 1
    Undly_23_set.insert("JPY");
    Undly_23.add_attribute("OptA", "527374352"); // 1
    Undly_23_set.insert("527374352");
    Undly_23.add_attribute("Mult", "9207759.550000"); // 1
    Undly_23_set.insert("9207759.550000");
    Undly_23.add_attribute("MultTyp", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("UOM", "lbs"); // 1
    Undly_23_set.insert("lbs");
    Undly_23.add_attribute("UOMQty", "15825624.430000"); // 1
    Undly_23_set.insert("15825624.430000");
    Undly_23.add_attribute("PxUOM", "t"); // 1
    Undly_23_set.insert("t");
    Undly_23.add_attribute("PxUOMQty", "11005118.230000"); // 1
    Undly_23_set.insert("11005118.230000");
    Undly_23.add_attribute("TmUnit", "D"); // 1
    Undly_23_set.insert("D");
    Undly_23.add_attribute("ExerStyle", "0"); // 1
    Undly_23_set.insert("0");
    Undly_23.add_attribute("CpnRt", "7268447.500000"); // 1
    Undly_23_set.insert("7268447.500000");
    Undly_23.add_attribute("Exch", "UnderlyingSecurityExchange_t_1151836493"); // 1
    Undly_23_set.insert("UnderlyingSecurityExchange_t_1151836493");
    Undly_23.add_attribute("Issr", "UnderlyingIssuer_t_1976777672"); // 1
    Undly_23_set.insert("UnderlyingIssuer_t_1976777672");
    Undly_23.add_attribute("EncUndIssrLen", "592559513"); // 1
    Undly_23_set.insert("592559513");
    Undly_23.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_466567357"); // 1
    Undly_23_set.insert("EncodedUnderlyingIssuer_t_466567357");
    Undly_23.add_attribute("Desc", "UnderlyingSecurityDesc_t_1429001772"); // 1
    Undly_23_set.insert("UnderlyingSecurityDesc_t_1429001772");
    Undly_23.add_attribute("EncUndSecDescLen", "101805892"); // 1
    Undly_23_set.insert("101805892");
    Undly_23.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_515718"); // 1
    Undly_23_set.insert("EncodedUnderlyingSecurityDesc_t_515718");
    Undly_23.add_attribute("CPPgm", "UnderlyingCPProgram_t_1050198125"); // 1
    Undly_23_set.insert("UnderlyingCPProgram_t_1050198125");
    Undly_23.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1077706808"); // 1
    Undly_23_set.insert("UnderlyingCPRegType_t_1077706808");
    Undly_23.add_attribute("AllocPct", "5693733.780000"); // 1
    Undly_23_set.insert("5693733.780000");
    Undly_23.add_attribute("Ccy", "CAN"); // 1
    Undly_23_set.insert("CAN");
    Undly_23.add_attribute("Qty", "19215477.790000"); // 1
    Undly_23_set.insert("19215477.790000");
    Undly_23.add_attribute("SettlTyp", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("CashAmt", "UnderlyingCashAmount_t_1488574295"); // 1
    Undly_23_set.insert("UnderlyingCashAmount_t_1488574295");
    Undly_23.add_attribute("CashTyp", "DIFF"); // 1
    Undly_23_set.insert("DIFF");
    Undly_23.add_attribute("Px", "6725193.230000"); // 1
    Undly_23_set.insert("6725193.230000");
    Undly_23.add_attribute("DirtPx", "5058943.040000"); // 1
    Undly_23_set.insert("5058943.040000");
    Undly_23.add_attribute("EndPx", "17252029.830000"); // 1
    Undly_23_set.insert("17252029.830000");
    Undly_23.add_attribute("StartVal", "UnderlyingStartValue_t_1792293531"); // 1
    Undly_23_set.insert("UnderlyingStartValue_t_1792293531");
    Undly_23.add_attribute("CurVal", "UnderlyingCurrentValue_t_1033268656"); // 1
    Undly_23_set.insert("UnderlyingCurrentValue_t_1033268656");
    Undly_23.add_attribute("EndVal", "UnderlyingEndValue_t_498495291"); // 1
    Undly_23_set.insert("UnderlyingEndValue_t_498495291");
    Undly_23.add_attribute("AdjQty", "16167279.630000"); // 1
    Undly_23_set.insert("16167279.630000");
    Undly_23.add_attribute("FxRate", "17224045.630000"); // 1
    Undly_23_set.insert("17224045.630000");
    Undly_23.add_attribute("FxRateCalc", "D"); // 1
    Undly_23_set.insert("D");
    Undly_23.add_attribute("CapValu", "UnderlyingCapValue_t_1051806758"); // 1
    Undly_23_set.insert("UnderlyingCapValue_t_1051806758");
    Undly_23.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1868857523"); // 1
    Undly_23_set.insert("UnderlyingSettlMethod_t_1868857523");
    Undly_23.add_attribute("PutCall", "1923353312"); // 1
    Undly_23_set.insert("1923353312");
    all_values.push_back(Undly_23_set);
    all_compo_names.insert("Undly_23_set");

    {
      xml_element UndAID_23{"UndAID"};
      multiset<string> UndAID_23_set;
      UndAID_23.add_attribute("AltID", "UnderlyingSecurityAltID_t_1790101395"); // 2
      UndAID_23_set.insert("UnderlyingSecurityAltID_t_1790101395");
      UndAID_23.add_attribute("AltIDSrc", "C"); // 2
      UndAID_23_set.insert("C");
      all_values.push_back(UndAID_23_set);
      all_compo_names.insert("UndAID_23_set");

      Undly_23.add_element(UndAID_23);
    }
    {
      xml_element Stip_41{"Stip"};
      multiset<string> Stip_41_set;
      Stip_41.add_attribute("Typ", "ISSUE"); // 2
      Stip_41_set.insert("ISSUE");
      Stip_41.add_attribute("Val", "UnderlyingStipValue_t_794454241"); // 2
      Stip_41_set.insert("UnderlyingStipValue_t_794454241");
      all_values.push_back(Stip_41_set);
      all_compo_names.insert("Stip_41_set");

      Undly_23.add_element(Stip_41);
    }
    {
      xml_element Pty_113{"Pty"};
      multiset<string> Pty_113_set;
      Pty_113.add_attribute("ID", "UnderlyingInstrumentPartyID_t_569286607"); // 2
      Pty_113_set.insert("UnderlyingInstrumentPartyID_t_569286607");
      Pty_113.add_attribute("Src", "B"); // 2
      Pty_113_set.insert("B");
      Pty_113.add_attribute("R", "76"); // 2
      Pty_113_set.insert("76");
      all_values.push_back(Pty_113_set);
      all_compo_names.insert("Pty_113_set");

      {
        xml_element Sub_113{"Sub"};
        multiset<string> Sub_113_set;
        Sub_113.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1998288380"); // 3
        Sub_113_set.insert("UnderlyingInstrumentPartySubID_t_1998288380");
        Sub_113.add_attribute("Typ", "12"); // 3
        Sub_113_set.insert("12");
        all_values.push_back(Sub_113_set);
        all_compo_names.insert("Sub_113_set");

        Pty_113.add_element(Sub_113);
      }
      Undly_23.add_element(Pty_113);
    }
    elt.add_element(Undly_23);
  } // end Undly
  { // Undly
    xml_element Undly_24{"Undly"};
    multiset<string> Undly_24_set;
    Undly_24.add_attribute("Sym", "UnderlyingSymbol_t_1261537317"); // 1
    Undly_24_set.insert("UnderlyingSymbol_t_1261537317");
    Undly_24.add_attribute("Sfx", "WI"); // 1
    Undly_24_set.insert("WI");
    Undly_24.add_attribute("ID", "UnderlyingSecurityID_t_127302981"); // 1
    Undly_24_set.insert("UnderlyingSecurityID_t_127302981");
    Undly_24.add_attribute("Src", "A"); // 1
    Undly_24_set.insert("A");
    Undly_24.add_attribute("Prod", "11"); // 1
    Undly_24_set.insert("11");
    Undly_24.add_attribute("CFI", "UnderlyingCFICode_t_777424568"); // 1
    Undly_24_set.insert("UnderlyingCFICode_t_777424568");
    Undly_24.add_attribute("SecTyp", "STRUCT"); // 1
    Undly_24_set.insert("STRUCT");
    Undly_24.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_608163508"); // 1
    Undly_24_set.insert("UnderlyingSecuritySubType_t_608163508");
    Undly_24.add_attribute("MMY", "118515216"); // 1
    Undly_24_set.insert("118515216");
    Undly_24.add_attribute("Mat", "UnderlyingMaturityDate_t_2028771096"); // 1
    Undly_24_set.insert("UnderlyingMaturityDate_t_2028771096");
    Undly_24.add_attribute("MatTm", "1280682832"); // 1
    Undly_24_set.insert("1280682832");
    Undly_24.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_624409520"); // 1
    Undly_24_set.insert("UnderlyingCouponPaymentDate_t_624409520");
    Undly_24.add_attribute("RestrctTyp", "FR"); // 1
    Undly_24_set.insert("FR");
    Undly_24.add_attribute("Snrty", "SB"); // 1
    Undly_24_set.insert("SB");
    Undly_24.add_attribute("NotlPctOut", "16576781.760000"); // 1
    Undly_24_set.insert("16576781.760000");
    Undly_24.add_attribute("OrigNotlPctOut", "21049857.230000"); // 1
    Undly_24_set.insert("21049857.230000");
    Undly_24.add_attribute("AttchPnt", "3947370.310000"); // 1
    Undly_24_set.insert("3947370.310000");
    Undly_24.add_attribute("DetchPnt", "12325990.910000"); // 1
    Undly_24_set.insert("12325990.910000");
    Undly_24.add_attribute("Issued", "UnderlyingIssueDate_t_780343564"); // 1
    Undly_24_set.insert("UnderlyingIssueDate_t_780343564");
    Undly_24.add_attribute("RepoCollSecTyp", "1446543789"); // 1
    Undly_24_set.insert("1446543789");
    Undly_24.add_attribute("RepoTrm", "953972967"); // 1
    Undly_24_set.insert("953972967");
    Undly_24.add_attribute("RepoRt", "5562132.280000"); // 1
    Undly_24_set.insert("5562132.280000");
    Undly_24.add_attribute("Fctr", "10891615.370000"); // 1
    Undly_24_set.insert("10891615.370000");
    Undly_24.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1693965550"); // 1
    Undly_24_set.insert("UnderlyingCreditRating_t_1693965550");
    Undly_24.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1058927643"); // 1
    Undly_24_set.insert("UnderlyingInstrRegistry_t_1058927643");
    Undly_24.add_attribute("Ctry", "1883615778"); // 1
    Undly_24_set.insert("1883615778");
    Undly_24.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_115768509"); // 1
    Undly_24_set.insert("UnderlyingStateOrProvinceOfIssue_t_115768509");
    Undly_24.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_6717924"); // 1
    Undly_24_set.insert("UnderlyingLocaleOfIssue_t_6717924");
    Undly_24.add_attribute("Redeem", "UnderlyingRedemptionDate_t_997153728"); // 1
    Undly_24_set.insert("UnderlyingRedemptionDate_t_997153728");
    Undly_24.add_attribute("StrkPx", "21140568.890000"); // 1
    Undly_24_set.insert("21140568.890000");
    Undly_24.add_attribute("StrkCcy", "EUR"); // 1
    Undly_24_set.insert("EUR");
    Undly_24.add_attribute("OptA", "867576098"); // 1
    Undly_24_set.insert("867576098");
    Undly_24.add_attribute("Mult", "13311007.260000"); // 1
    Undly_24_set.insert("13311007.260000");
    Undly_24.add_attribute("MultTyp", "2"); // 1
    Undly_24_set.insert("2");
    Undly_24.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_24_set.insert("3");
    Undly_24.add_attribute("UOM", "tn"); // 1
    Undly_24_set.insert("tn");
    Undly_24.add_attribute("UOMQty", "13996092.720000"); // 1
    Undly_24_set.insert("13996092.720000");
    Undly_24.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_24_set.insert("MMbbl");
    Undly_24.add_attribute("PxUOMQty", "795568.620000"); // 1
    Undly_24_set.insert("795568.620000");
    Undly_24.add_attribute("TmUnit", "Mo"); // 1
    Undly_24_set.insert("Mo");
    Undly_24.add_attribute("ExerStyle", "1"); // 1
    Undly_24_set.insert("1");
    Undly_24.add_attribute("CpnRt", "7039663.820000"); // 1
    Undly_24_set.insert("7039663.820000");
    Undly_24.add_attribute("Exch", "UnderlyingSecurityExchange_t_739903504"); // 1
    Undly_24_set.insert("UnderlyingSecurityExchange_t_739903504");
    Undly_24.add_attribute("Issr", "UnderlyingIssuer_t_1942128486"); // 1
    Undly_24_set.insert("UnderlyingIssuer_t_1942128486");
    Undly_24.add_attribute("EncUndIssrLen", "214160910"); // 1
    Undly_24_set.insert("214160910");
    Undly_24.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_697405579"); // 1
    Undly_24_set.insert("EncodedUnderlyingIssuer_t_697405579");
    Undly_24.add_attribute("Desc", "UnderlyingSecurityDesc_t_189381869"); // 1
    Undly_24_set.insert("UnderlyingSecurityDesc_t_189381869");
    Undly_24.add_attribute("EncUndSecDescLen", "1446760002"); // 1
    Undly_24_set.insert("1446760002");
    Undly_24.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1477749143"); // 1
    Undly_24_set.insert("EncodedUnderlyingSecurityDesc_t_1477749143");
    Undly_24.add_attribute("CPPgm", "UnderlyingCPProgram_t_1635925659"); // 1
    Undly_24_set.insert("UnderlyingCPProgram_t_1635925659");
    Undly_24.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_253249321"); // 1
    Undly_24_set.insert("UnderlyingCPRegType_t_253249321");
    Undly_24.add_attribute("AllocPct", "20339623.720000"); // 1
    Undly_24_set.insert("20339623.720000");
    Undly_24.add_attribute("Ccy", "CAN"); // 1
    Undly_24_set.insert("CAN");
    Undly_24.add_attribute("Qty", "9454063.670000"); // 1
    Undly_24_set.insert("9454063.670000");
    Undly_24.add_attribute("SettlTyp", "4"); // 1
    Undly_24_set.insert("4");
    Undly_24.add_attribute("CashAmt", "UnderlyingCashAmount_t_2062983380"); // 1
    Undly_24_set.insert("UnderlyingCashAmount_t_2062983380");
    Undly_24.add_attribute("CashTyp", "DIFF"); // 1
    Undly_24_set.insert("DIFF");
    Undly_24.add_attribute("Px", "13108894.060000"); // 1
    Undly_24_set.insert("13108894.060000");
    Undly_24.add_attribute("DirtPx", "20295566.220000"); // 1
    Undly_24_set.insert("20295566.220000");
    Undly_24.add_attribute("EndPx", "84383.880000"); // 1
    Undly_24_set.insert("84383.880000");
    Undly_24.add_attribute("StartVal", "UnderlyingStartValue_t_1422096804"); // 1
    Undly_24_set.insert("UnderlyingStartValue_t_1422096804");
    Undly_24.add_attribute("CurVal", "UnderlyingCurrentValue_t_749649072"); // 1
    Undly_24_set.insert("UnderlyingCurrentValue_t_749649072");
    Undly_24.add_attribute("EndVal", "UnderlyingEndValue_t_1339539114"); // 1
    Undly_24_set.insert("UnderlyingEndValue_t_1339539114");
    Undly_24.add_attribute("AdjQty", "12167312.490000"); // 1
    Undly_24_set.insert("12167312.490000");
    Undly_24.add_attribute("FxRate", "20249221.510000"); // 1
    Undly_24_set.insert("20249221.510000");
    Undly_24.add_attribute("FxRateCalc", "D"); // 1
    Undly_24_set.insert("D");
    Undly_24.add_attribute("CapValu", "UnderlyingCapValue_t_468856873"); // 1
    Undly_24_set.insert("UnderlyingCapValue_t_468856873");
    Undly_24.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1760875090"); // 1
    Undly_24_set.insert("UnderlyingSettlMethod_t_1760875090");
    Undly_24.add_attribute("PutCall", "1380137623"); // 1
    Undly_24_set.insert("1380137623");
    all_values.push_back(Undly_24_set);
    all_compo_names.insert("Undly_24_set");

    {
      xml_element UndAID_24{"UndAID"};
      multiset<string> UndAID_24_set;
      UndAID_24.add_attribute("AltID", "UnderlyingSecurityAltID_t_1749753593"); // 2
      UndAID_24_set.insert("UnderlyingSecurityAltID_t_1749753593");
      UndAID_24.add_attribute("AltIDSrc", "E"); // 2
      UndAID_24_set.insert("E");
      all_values.push_back(UndAID_24_set);
      all_compo_names.insert("UndAID_24_set");

      Undly_24.add_element(UndAID_24);
    }
    {
      xml_element Stip_42{"Stip"};
      multiset<string> Stip_42_set;
      Stip_42.add_attribute("Typ", "CPP"); // 2
      Stip_42_set.insert("CPP");
      Stip_42.add_attribute("Val", "UnderlyingStipValue_t_342173450"); // 2
      Stip_42_set.insert("UnderlyingStipValue_t_342173450");
      all_values.push_back(Stip_42_set);
      all_compo_names.insert("Stip_42_set");

      Undly_24.add_element(Stip_42);
    }
    {
      xml_element Pty_114{"Pty"};
      multiset<string> Pty_114_set;
      Pty_114.add_attribute("ID", "UnderlyingInstrumentPartyID_t_424672051"); // 2
      Pty_114_set.insert("UnderlyingInstrumentPartyID_t_424672051");
      Pty_114.add_attribute("Src", "3"); // 2
      Pty_114_set.insert("3");
      Pty_114.add_attribute("R", "71"); // 2
      Pty_114_set.insert("71");
      all_values.push_back(Pty_114_set);
      all_compo_names.insert("Pty_114_set");

      {
        xml_element Sub_114{"Sub"};
        multiset<string> Sub_114_set;
        Sub_114.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_614053921"); // 3
        Sub_114_set.insert("UnderlyingInstrumentPartySubID_t_614053921");
        Sub_114.add_attribute("Typ", "25"); // 3
        Sub_114_set.insert("25");
        all_values.push_back(Sub_114_set);
        all_compo_names.insert("Sub_114_set");

        Pty_114.add_element(Sub_114);
      }
      Undly_24.add_element(Pty_114);
    }
    elt.add_element(Undly_24);
  } // end Undly
  { // Undly
    xml_element Undly_25{"Undly"};
    multiset<string> Undly_25_set;
    Undly_25.add_attribute("Sym", "UnderlyingSymbol_t_369844525"); // 1
    Undly_25_set.insert("UnderlyingSymbol_t_369844525");
    Undly_25.add_attribute("Sfx", "CD"); // 1
    Undly_25_set.insert("CD");
    Undly_25.add_attribute("ID", "UnderlyingSecurityID_t_1850790591"); // 1
    Undly_25_set.insert("UnderlyingSecurityID_t_1850790591");
    Undly_25.add_attribute("Src", "I"); // 1
    Undly_25_set.insert("I");
    Undly_25.add_attribute("Prod", "5"); // 1
    Undly_25_set.insert("5");
    Undly_25.add_attribute("CFI", "UnderlyingCFICode_t_1650521814"); // 1
    Undly_25_set.insert("UnderlyingCFICode_t_1650521814");
    Undly_25.add_attribute("SecTyp", "GO"); // 1
    Undly_25_set.insert("GO");
    Undly_25.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_993835158"); // 1
    Undly_25_set.insert("UnderlyingSecuritySubType_t_993835158");
    Undly_25.add_attribute("MMY", "1566021547"); // 1
    Undly_25_set.insert("1566021547");
    Undly_25.add_attribute("Mat", "UnderlyingMaturityDate_t_6370260"); // 1
    Undly_25_set.insert("UnderlyingMaturityDate_t_6370260");
    Undly_25.add_attribute("MatTm", "157240916"); // 1
    Undly_25_set.insert("157240916");
    Undly_25.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1448094521"); // 1
    Undly_25_set.insert("UnderlyingCouponPaymentDate_t_1448094521");
    Undly_25.add_attribute("RestrctTyp", "FR"); // 1
    Undly_25_set.insert("FR");
    Undly_25.add_attribute("Snrty", "SB"); // 1
    Undly_25_set.insert("SB");
    Undly_25.add_attribute("NotlPctOut", "502599.450000"); // 1
    Undly_25_set.insert("502599.450000");
    Undly_25.add_attribute("OrigNotlPctOut", "13543477.630000"); // 1
    Undly_25_set.insert("13543477.630000");
    Undly_25.add_attribute("AttchPnt", "6485853.210000"); // 1
    Undly_25_set.insert("6485853.210000");
    Undly_25.add_attribute("DetchPnt", "20751820.960000"); // 1
    Undly_25_set.insert("20751820.960000");
    Undly_25.add_attribute("Issued", "UnderlyingIssueDate_t_507444876"); // 1
    Undly_25_set.insert("UnderlyingIssueDate_t_507444876");
    Undly_25.add_attribute("RepoCollSecTyp", "1117442194"); // 1
    Undly_25_set.insert("1117442194");
    Undly_25.add_attribute("RepoTrm", "1688573538"); // 1
    Undly_25_set.insert("1688573538");
    Undly_25.add_attribute("RepoRt", "18875824.990000"); // 1
    Undly_25_set.insert("18875824.990000");
    Undly_25.add_attribute("Fctr", "7197121.400000"); // 1
    Undly_25_set.insert("7197121.400000");
    Undly_25.add_attribute("CrdRtg", "UnderlyingCreditRating_t_171117103"); // 1
    Undly_25_set.insert("UnderlyingCreditRating_t_171117103");
    Undly_25.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1824202857"); // 1
    Undly_25_set.insert("UnderlyingInstrRegistry_t_1824202857");
    Undly_25.add_attribute("Ctry", "1061885590"); // 1
    Undly_25_set.insert("1061885590");
    Undly_25.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_595789155"); // 1
    Undly_25_set.insert("UnderlyingStateOrProvinceOfIssue_t_595789155");
    Undly_25.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1974984126"); // 1
    Undly_25_set.insert("UnderlyingLocaleOfIssue_t_1974984126");
    Undly_25.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2101464619"); // 1
    Undly_25_set.insert("UnderlyingRedemptionDate_t_2101464619");
    Undly_25.add_attribute("StrkPx", "12098430.760000"); // 1
    Undly_25_set.insert("12098430.760000");
    Undly_25.add_attribute("StrkCcy", "USD"); // 1
    Undly_25_set.insert("USD");
    Undly_25.add_attribute("OptA", "1312339008"); // 1
    Undly_25_set.insert("1312339008");
    Undly_25.add_attribute("Mult", "11283486.920000"); // 1
    Undly_25_set.insert("11283486.920000");
    Undly_25.add_attribute("MultTyp", "0"); // 1
    Undly_25_set.insert("0");
    Undly_25.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_25_set.insert("3");
    Undly_25.add_attribute("UOM", "Bu"); // 1
    Undly_25_set.insert("Bu");
    Undly_25.add_attribute("UOMQty", "17818783.620000"); // 1
    Undly_25_set.insert("17818783.620000");
    Undly_25.add_attribute("PxUOM", "lbs"); // 1
    Undly_25_set.insert("lbs");
    Undly_25.add_attribute("PxUOMQty", "499247.570000"); // 1
    Undly_25_set.insert("499247.570000");
    Undly_25.add_attribute("TmUnit", "Yr"); // 1
    Undly_25_set.insert("Yr");
    Undly_25.add_attribute("ExerStyle", "2"); // 1
    Undly_25_set.insert("2");
    Undly_25.add_attribute("CpnRt", "14980192.780000"); // 1
    Undly_25_set.insert("14980192.780000");
    Undly_25.add_attribute("Exch", "UnderlyingSecurityExchange_t_1803057270"); // 1
    Undly_25_set.insert("UnderlyingSecurityExchange_t_1803057270");
    Undly_25.add_attribute("Issr", "UnderlyingIssuer_t_427884987"); // 1
    Undly_25_set.insert("UnderlyingIssuer_t_427884987");
    Undly_25.add_attribute("EncUndIssrLen", "1548279224"); // 1
    Undly_25_set.insert("1548279224");
    Undly_25.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1009921385"); // 1
    Undly_25_set.insert("EncodedUnderlyingIssuer_t_1009921385");
    Undly_25.add_attribute("Desc", "UnderlyingSecurityDesc_t_1076470308"); // 1
    Undly_25_set.insert("UnderlyingSecurityDesc_t_1076470308");
    Undly_25.add_attribute("EncUndSecDescLen", "1475977672"); // 1
    Undly_25_set.insert("1475977672");
    Undly_25.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1517366261"); // 1
    Undly_25_set.insert("EncodedUnderlyingSecurityDesc_t_1517366261");
    Undly_25.add_attribute("CPPgm", "UnderlyingCPProgram_t_46428855"); // 1
    Undly_25_set.insert("UnderlyingCPProgram_t_46428855");
    Undly_25.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1017067563"); // 1
    Undly_25_set.insert("UnderlyingCPRegType_t_1017067563");
    Undly_25.add_attribute("AllocPct", "12574651.130000"); // 1
    Undly_25_set.insert("12574651.130000");
    Undly_25.add_attribute("Ccy", "JPY"); // 1
    Undly_25_set.insert("JPY");
    Undly_25.add_attribute("Qty", "9341843.220000"); // 1
    Undly_25_set.insert("9341843.220000");
    Undly_25.add_attribute("SettlTyp", "2"); // 1
    Undly_25_set.insert("2");
    Undly_25.add_attribute("CashAmt", "UnderlyingCashAmount_t_1783973821"); // 1
    Undly_25_set.insert("UnderlyingCashAmount_t_1783973821");
    Undly_25.add_attribute("CashTyp", "FIXED"); // 1
    Undly_25_set.insert("FIXED");
    Undly_25.add_attribute("Px", "17820075.560000"); // 1
    Undly_25_set.insert("17820075.560000");
    Undly_25.add_attribute("DirtPx", "8463332.490000"); // 1
    Undly_25_set.insert("8463332.490000");
    Undly_25.add_attribute("EndPx", "392429.010000"); // 1
    Undly_25_set.insert("392429.010000");
    Undly_25.add_attribute("StartVal", "UnderlyingStartValue_t_2105833053"); // 1
    Undly_25_set.insert("UnderlyingStartValue_t_2105833053");
    Undly_25.add_attribute("CurVal", "UnderlyingCurrentValue_t_11188609"); // 1
    Undly_25_set.insert("UnderlyingCurrentValue_t_11188609");
    Undly_25.add_attribute("EndVal", "UnderlyingEndValue_t_1167591593"); // 1
    Undly_25_set.insert("UnderlyingEndValue_t_1167591593");
    Undly_25.add_attribute("AdjQty", "5384981.500000"); // 1
    Undly_25_set.insert("5384981.500000");
    Undly_25.add_attribute("FxRate", "20036270.970000"); // 1
    Undly_25_set.insert("20036270.970000");
    Undly_25.add_attribute("FxRateCalc", "D"); // 1
    Undly_25_set.insert("D");
    Undly_25.add_attribute("CapValu", "UnderlyingCapValue_t_172892864"); // 1
    Undly_25_set.insert("UnderlyingCapValue_t_172892864");
    Undly_25.add_attribute("SetMeth", "UnderlyingSettlMethod_t_694933447"); // 1
    Undly_25_set.insert("UnderlyingSettlMethod_t_694933447");
    Undly_25.add_attribute("PutCall", "1848903209"); // 1
    Undly_25_set.insert("1848903209");
    all_values.push_back(Undly_25_set);
    all_compo_names.insert("Undly_25_set");

    {
      xml_element UndAID_25{"UndAID"};
      multiset<string> UndAID_25_set;
      UndAID_25.add_attribute("AltID", "UnderlyingSecurityAltID_t_1961141486"); // 2
      UndAID_25_set.insert("UnderlyingSecurityAltID_t_1961141486");
      UndAID_25.add_attribute("AltIDSrc", "B"); // 2
      UndAID_25_set.insert("B");
      all_values.push_back(UndAID_25_set);
      all_compo_names.insert("UndAID_25_set");

      Undly_25.add_element(UndAID_25);
    }
    {
      xml_element Stip_43{"Stip"};
      multiset<string> Stip_43_set;
      Stip_43.add_attribute("Typ", "PROTECT"); // 2
      Stip_43_set.insert("PROTECT");
      Stip_43.add_attribute("Val", "UnderlyingStipValue_t_1616715109"); // 2
      Stip_43_set.insert("UnderlyingStipValue_t_1616715109");
      all_values.push_back(Stip_43_set);
      all_compo_names.insert("Stip_43_set");

      Undly_25.add_element(Stip_43);
    }
    {
      xml_element Pty_115{"Pty"};
      multiset<string> Pty_115_set;
      Pty_115.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2118849349"); // 2
      Pty_115_set.insert("UnderlyingInstrumentPartyID_t_2118849349");
      Pty_115.add_attribute("Src", "8"); // 2
      Pty_115_set.insert("8");
      Pty_115.add_attribute("R", "49"); // 2
      Pty_115_set.insert("49");
      all_values.push_back(Pty_115_set);
      all_compo_names.insert("Pty_115_set");

      {
        xml_element Sub_115{"Sub"};
        multiset<string> Sub_115_set;
        Sub_115.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1047836009"); // 3
        Sub_115_set.insert("UnderlyingInstrumentPartySubID_t_1047836009");
        Sub_115.add_attribute("Typ", "28"); // 3
        Sub_115_set.insert("28");
        all_values.push_back(Sub_115_set);
        all_compo_names.insert("Sub_115_set");

        Pty_115.add_element(Sub_115);
      }
      Undly_25.add_element(Pty_115);
    }
    elt.add_element(Undly_25);
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
