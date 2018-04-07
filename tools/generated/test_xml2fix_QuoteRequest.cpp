#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequest_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_605657668"); // 0
  QuoteRequest_message_t_0.insert("QuoteReqID_t_605657668");
  elt.add_attribute("RFQReqID", "RFQReqID_t_1639043457"); // 0
  QuoteRequest_message_t_0.insert("RFQReqID_t_1639043457");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1577670186"); // 0
  QuoteRequest_message_t_0.insert("ClOrdID_t_1577670186");
  elt.add_attribute("BkngTyp", "0"); // 0
  QuoteRequest_message_t_0.insert("0");
  elt.add_attribute("Cpcty", "P"); // 0
  QuoteRequest_message_t_0.insert("P");
  elt.add_attribute("Rstctions", "8"); // 0
  QuoteRequest_message_t_0.insert("8");
  elt.add_attribute("PrvtQt", "false"); // 0
  QuoteRequest_message_t_0.insert("false");
  elt.add_attribute("RspdntTyp", "4"); // 0
  QuoteRequest_message_t_0.insert("4");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  QuoteRequest_message_t_0.insert("true");
  elt.add_attribute("Txt", "Text_t_687097951"); // 0
  QuoteRequest_message_t_0.insert("Text_t_687097951");
  elt.add_attribute("EncTxtLen", "538939525"); // 0
  QuoteRequest_message_t_0.insert("538939525");
  elt.add_attribute("EncTxt", "EncodedText_t_93001861"); // 0
  QuoteRequest_message_t_0.insert("EncodedText_t_93001861");
  all_values.push_back(QuoteRequest_message_t_0);
  all_compo_names.insert("QuoteRequest_message_t");

  { // Hdr
    xml_element Hdr_70{"Hdr"};
    multiset<string> Hdr_70_set;
    Hdr_70.add_attribute("SeqNum", "1216667792"); // 1
    Hdr_70_set.insert("1216667792");
    Hdr_70.add_attribute("SID", "SenderCompID_t_1743982379"); // 1
    Hdr_70_set.insert("SenderCompID_t_1743982379");
    Hdr_70.add_attribute("TID", "TargetCompID_t_1717472240"); // 1
    Hdr_70_set.insert("TargetCompID_t_1717472240");
    Hdr_70.add_attribute("OBID", "OnBehalfOfCompID_t_334157644"); // 1
    Hdr_70_set.insert("OnBehalfOfCompID_t_334157644");
    Hdr_70.add_attribute("D2ID", "DeliverToCompID_t_1054184084"); // 1
    Hdr_70_set.insert("DeliverToCompID_t_1054184084");
    Hdr_70.add_attribute("SSub", "SenderSubID_t_412805210"); // 1
    Hdr_70_set.insert("SenderSubID_t_412805210");
    Hdr_70.add_attribute("SLoc", "SenderLocationID_t_260486065"); // 1
    Hdr_70_set.insert("SenderLocationID_t_260486065");
    Hdr_70.add_attribute("TSub", "TargetSubID_t_773584526"); // 1
    Hdr_70_set.insert("TargetSubID_t_773584526");
    Hdr_70.add_attribute("TLoc", "TargetLocationID_t_80879779"); // 1
    Hdr_70_set.insert("TargetLocationID_t_80879779");
    Hdr_70.add_attribute("OBSub", "OnBehalfOfSubID_t_1941429150"); // 1
    Hdr_70_set.insert("OnBehalfOfSubID_t_1941429150");
    Hdr_70.add_attribute("OBLoc", "OnBehalfOfLocationID_t_334689167"); // 1
    Hdr_70_set.insert("OnBehalfOfLocationID_t_334689167");
    Hdr_70.add_attribute("D2Sub", "DeliverToSubID_t_144797265"); // 1
    Hdr_70_set.insert("DeliverToSubID_t_144797265");
    Hdr_70.add_attribute("D2Loc", "DeliverToLocationID_t_1116467579"); // 1
    Hdr_70_set.insert("DeliverToLocationID_t_1116467579");
    Hdr_70.add_attribute("PosDup", "N"); // 1
    Hdr_70_set.insert("N");
    Hdr_70.add_attribute("PosRsnd", "N"); // 1
    Hdr_70_set.insert("N");
    Hdr_70.add_attribute("Snt", "SendingTime_t_533255623"); // 1
    Hdr_70_set.insert("SendingTime_t_533255623");
    Hdr_70.add_attribute("OrigSnt", "OrigSendingTime_t_1105371478"); // 1
    Hdr_70_set.insert("OrigSendingTime_t_1105371478");
    Hdr_70.add_attribute("MsgEncd", "MessageEncoding_t_1287596961"); // 1
    Hdr_70_set.insert("MessageEncoding_t_1287596961");
    all_values.push_back(Hdr_70_set);
    all_compo_names.insert("Hdr_70_set");

    {
      xml_element Hop_70{"Hop"};
      multiset<string> Hop_70_set;
      Hop_70.add_attribute("ID", "HopCompID_t_68568914"); // 2
      Hop_70_set.insert("HopCompID_t_68568914");
      Hop_70.add_attribute("Ref", "1711029146"); // 2
      Hop_70_set.insert("1711029146");
      Hop_70.add_attribute("Snt", "HopSendingTime_t_779156770"); // 2
      Hop_70_set.insert("HopSendingTime_t_779156770");
      all_values.push_back(Hop_70_set);
      all_compo_names.insert("Hop_70_set");

      Hdr_70.add_element(Hop_70);
    }
    elt.add_element(Hdr_70);
  } // end Hdr
  { // Pty
    xml_element Pty_334{"Pty"};
    multiset<string> Pty_334_set;
    Pty_334.add_attribute("ID", "RootPartyID_t_1603715499"); // 1
    Pty_334_set.insert("RootPartyID_t_1603715499");
    Pty_334.add_attribute("Src", "I"); // 1
    Pty_334_set.insert("I");
    Pty_334.add_attribute("R", "26"); // 1
    Pty_334_set.insert("26");
    all_values.push_back(Pty_334_set);
    all_compo_names.insert("Pty_334_set");

    {
      xml_element Sub_334{"Sub"};
      multiset<string> Sub_334_set;
      Sub_334.add_attribute("ID", "RootPartySubID_t_1106722525"); // 2
      Sub_334_set.insert("RootPartySubID_t_1106722525");
      Sub_334.add_attribute("Typ", "6"); // 2
      Sub_334_set.insert("6");
      all_values.push_back(Sub_334_set);
      all_compo_names.insert("Sub_334_set");

      Pty_334.add_element(Sub_334);
    }
    elt.add_element(Pty_334);
  } // end Pty
  { // Pty
    xml_element Pty_335{"Pty"};
    multiset<string> Pty_335_set;
    Pty_335.add_attribute("ID", "RootPartyID_t_1628298963"); // 1
    Pty_335_set.insert("RootPartyID_t_1628298963");
    Pty_335.add_attribute("Src", "3"); // 1
    Pty_335_set.insert("3");
    Pty_335.add_attribute("R", "22"); // 1
    Pty_335_set.insert("22");
    all_values.push_back(Pty_335_set);
    all_compo_names.insert("Pty_335_set");

    {
      xml_element Sub_335{"Sub"};
      multiset<string> Sub_335_set;
      Sub_335.add_attribute("ID", "RootPartySubID_t_1721300824"); // 2
      Sub_335_set.insert("RootPartySubID_t_1721300824");
      Sub_335.add_attribute("Typ", "14"); // 2
      Sub_335_set.insert("14");
      all_values.push_back(Sub_335_set);
      all_compo_names.insert("Sub_335_set");

      Pty_335.add_element(Sub_335);
    }
    elt.add_element(Pty_335);
  } // end Pty
  { // Pty
    xml_element Pty_336{"Pty"};
    multiset<string> Pty_336_set;
    Pty_336.add_attribute("ID", "RootPartyID_t_680204753"); // 1
    Pty_336_set.insert("RootPartyID_t_680204753");
    Pty_336.add_attribute("Src", "H"); // 1
    Pty_336_set.insert("H");
    Pty_336.add_attribute("R", "62"); // 1
    Pty_336_set.insert("62");
    all_values.push_back(Pty_336_set);
    all_compo_names.insert("Pty_336_set");

    {
      xml_element Sub_336{"Sub"};
      multiset<string> Sub_336_set;
      Sub_336.add_attribute("ID", "RootPartySubID_t_1734388837"); // 2
      Sub_336_set.insert("RootPartySubID_t_1734388837");
      Sub_336.add_attribute("Typ", "12"); // 2
      Sub_336_set.insert("12");
      all_values.push_back(Sub_336_set);
      all_compo_names.insert("Sub_336_set");

      Pty_336.add_element(Sub_336);
    }
    elt.add_element(Pty_336);
  } // end Pty
  { // QuotReq
    xml_element QuotReq_0{"QuotReq"};
    multiset<string> QuotReq_0_set;
    QuotReq_0.add_attribute("PrevClsPx", "3604897.150000"); // 1
    QuotReq_0_set.insert("3604897.150000");
    QuotReq_0.add_attribute("ReqTyp", "1"); // 1
    QuotReq_0_set.insert("1");
    QuotReq_0.add_attribute("Typ", "0"); // 1
    QuotReq_0_set.insert("0");
    QuotReq_0.add_attribute("SesID", "1"); // 1
    QuotReq_0_set.insert("1");
    QuotReq_0.add_attribute("SesSub", "3"); // 1
    QuotReq_0_set.insert("3");
    QuotReq_0.add_attribute("OrignDt", "TradeOriginationDate_t_220577763"); // 1
    QuotReq_0_set.insert("TradeOriginationDate_t_220577763");
    QuotReq_0.add_attribute("Side", "9"); // 1
    QuotReq_0_set.insert("9");
    QuotReq_0.add_attribute("QtyTyp", "1"); // 1
    QuotReq_0_set.insert("1");
    QuotReq_0.add_attribute("MinQty", "7538333.860000"); // 1
    QuotReq_0_set.insert("7538333.860000");
    QuotReq_0.add_attribute("SettlTyp", "2"); // 1
    QuotReq_0_set.insert("2");
    QuotReq_0.add_attribute("SettlDt", "SettlDate_t_253956794"); // 1
    QuotReq_0_set.insert("SettlDate_t_253956794");
    QuotReq_0.add_attribute("SettlDt2", "SettlDate2_t_822402301"); // 1
    QuotReq_0_set.insert("SettlDate2_t_822402301");
    QuotReq_0.add_attribute("Qty2", "16039043.120000"); // 1
    QuotReq_0_set.insert("16039043.120000");
    QuotReq_0.add_attribute("Ccy", "EUR"); // 1
    QuotReq_0_set.insert("EUR");
    QuotReq_0.add_attribute("SettlCcy", "USD"); // 1
    QuotReq_0_set.insert("USD");
    QuotReq_0.add_attribute("Acct", "Account_t_1603753098"); // 1
    QuotReq_0_set.insert("Account_t_1603753098");
    QuotReq_0.add_attribute("AcctIDSrc", "4"); // 1
    QuotReq_0_set.insert("4");
    QuotReq_0.add_attribute("AcctTyp", "6"); // 1
    QuotReq_0_set.insert("6");
    QuotReq_0.add_attribute("QuotPxTyp", "4"); // 1
    QuotReq_0_set.insert("4");
    QuotReq_0.add_attribute("OrdTyp", "6"); // 1
    QuotReq_0_set.insert("6");
    QuotReq_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_792712070"); // 1
    QuotReq_0_set.insert("ValidUntilTime_t_792712070");
    QuotReq_0.add_attribute("ExpireTm", "ExpireTime_t_658385590"); // 1
    QuotReq_0_set.insert("ExpireTime_t_658385590");
    QuotReq_0.add_attribute("TxnTm", "TransactTime_t_528716490"); // 1
    QuotReq_0_set.insert("TransactTime_t_528716490");
    QuotReq_0.add_attribute("PxTyp", "6"); // 1
    QuotReq_0_set.insert("6");
    QuotReq_0.add_attribute("Px", "19496750.070000"); // 1
    QuotReq_0_set.insert("19496750.070000");
    QuotReq_0.add_attribute("Px2", "17258787.540000"); // 1
    QuotReq_0_set.insert("17258787.540000");
    all_values.push_back(QuotReq_0_set);
    all_compo_names.insert("QuotReq_0_set");

    {
      xml_element Instrmt_61{"Instrmt"};
      multiset<string> Instrmt_61_set;
      Instrmt_61.add_attribute("Sym", "Symbol_t_1059822013"); // 2
      Instrmt_61_set.insert("Symbol_t_1059822013");
      Instrmt_61.add_attribute("Sfx", "WI"); // 2
      Instrmt_61_set.insert("WI");
      Instrmt_61.add_attribute("ID", "SecurityID_t_1036043436"); // 2
      Instrmt_61_set.insert("SecurityID_t_1036043436");
      Instrmt_61.add_attribute("Src", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("Prod", "2"); // 2
      Instrmt_61_set.insert("2");
      Instrmt_61.add_attribute("ProdCmplx", "ProductComplex_t_140153620"); // 2
      Instrmt_61_set.insert("ProductComplex_t_140153620");
      Instrmt_61.add_attribute("SecGrp", "SecurityGroup_t_2115490611"); // 2
      Instrmt_61_set.insert("SecurityGroup_t_2115490611");
      Instrmt_61.add_attribute("CFI", "CFICode_t_926064767"); // 2
      Instrmt_61_set.insert("CFICode_t_926064767");
      Instrmt_61.add_attribute("SecTyp", "TAXA"); // 2
      Instrmt_61_set.insert("TAXA");
      Instrmt_61.add_attribute("SubTyp", "SecuritySubType_t_902994299"); // 2
      Instrmt_61_set.insert("SecuritySubType_t_902994299");
      Instrmt_61.add_attribute("MMY", "2039908248"); // 2
      Instrmt_61_set.insert("2039908248");
      Instrmt_61.add_attribute("MatDt", "MaturityDate_t_1114564770"); // 2
      Instrmt_61_set.insert("MaturityDate_t_1114564770");
      Instrmt_61.add_attribute("MatTm", "795869466"); // 2
      Instrmt_61_set.insert("795869466");
      Instrmt_61.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_146381395"); // 2
      Instrmt_61_set.insert("SettleOnOpenFlag_t_146381395");
      Instrmt_61.add_attribute("AsgnMeth", "1936967071"); // 2
      Instrmt_61_set.insert("1936967071");
      Instrmt_61.add_attribute("Status", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("CpnPmt", "CouponPaymentDate_t_1179494960"); // 2
      Instrmt_61_set.insert("CouponPaymentDate_t_1179494960");
      Instrmt_61.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_61_set.insert("FR");
      Instrmt_61.add_attribute("Snrty", "SR"); // 2
      Instrmt_61_set.insert("SR");
      Instrmt_61.add_attribute("NotlPctOut", "3437345.100000"); // 2
      Instrmt_61_set.insert("3437345.100000");
      Instrmt_61.add_attribute("OrigNotlPctOut", "17143942.750000"); // 2
      Instrmt_61_set.insert("17143942.750000");
      Instrmt_61.add_attribute("AttchPnt", "13318013.350000"); // 2
      Instrmt_61_set.insert("13318013.350000");
      Instrmt_61.add_attribute("DetchPnt", "527405.580000"); // 2
      Instrmt_61_set.insert("527405.580000");
      Instrmt_61.add_attribute("Issued", "IssueDate_t_651479041"); // 2
      Instrmt_61_set.insert("IssueDate_t_651479041");
      Instrmt_61.add_attribute("RepoCollSecTyp", "997513205"); // 2
      Instrmt_61_set.insert("997513205");
      Instrmt_61.add_attribute("RepoTrm", "845452628"); // 2
      Instrmt_61_set.insert("845452628");
      Instrmt_61.add_attribute("RepoRt", "13098646.310000"); // 2
      Instrmt_61_set.insert("13098646.310000");
      Instrmt_61.add_attribute("Fctr", "15262296.950000"); // 2
      Instrmt_61_set.insert("15262296.950000");
      Instrmt_61.add_attribute("CrdRtg", "CreditRating_t_170885803"); // 2
      Instrmt_61_set.insert("CreditRating_t_170885803");
      Instrmt_61.add_attribute("Rgstry", "InstrRegistry_t_1112055990"); // 2
      Instrmt_61_set.insert("InstrRegistry_t_1112055990");
      Instrmt_61.add_attribute("IssuCtry", "1104624801"); // 2
      Instrmt_61_set.insert("1104624801");
      Instrmt_61.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1230707816"); // 2
      Instrmt_61_set.insert("StateOrProvinceOfIssue_t_1230707816");
      Instrmt_61.add_attribute("Lcl", "LocaleOfIssue_t_470858328"); // 2
      Instrmt_61_set.insert("LocaleOfIssue_t_470858328");
      Instrmt_61.add_attribute("Redeem", "RedemptionDate_t_2140668237"); // 2
      Instrmt_61_set.insert("RedemptionDate_t_2140668237");
      Instrmt_61.add_attribute("StrkPx", "5035358.970000"); // 2
      Instrmt_61_set.insert("5035358.970000");
      Instrmt_61.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_61_set.insert("CAN");
      Instrmt_61.add_attribute("StrkMult", "4715428.600000"); // 2
      Instrmt_61_set.insert("4715428.600000");
      Instrmt_61.add_attribute("StrkValu", "3932161.900000"); // 2
      Instrmt_61_set.insert("3932161.900000");
      Instrmt_61.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_61_set.insert("2");
      Instrmt_61.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_61_set.insert("5");
      Instrmt_61.add_attribute("StrkPxBndryPrcsn", "2856407.910000"); // 2
      Instrmt_61_set.insert("2856407.910000");
      Instrmt_61.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_61_set.insert("4");
      Instrmt_61.add_attribute("OptAt", "22922977"); // 2
      Instrmt_61_set.insert("22922977");
      Instrmt_61.add_attribute("Mult", "4320221.860000"); // 2
      Instrmt_61_set.insert("4320221.860000");
      Instrmt_61.add_attribute("MultTyp", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_61_set.insert("3");
      Instrmt_61.add_attribute("MinPxIncr", "16115171.460000"); // 2
      Instrmt_61_set.insert("16115171.460000");
      Instrmt_61.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1508758962"); // 2
      Instrmt_61_set.insert("MinPriceIncrementAmount_t_1508758962");
      Instrmt_61.add_attribute("UOM", "Bu"); // 2
      Instrmt_61_set.insert("Bu");
      Instrmt_61.add_attribute("UOMQty", "19552516.560000"); // 2
      Instrmt_61_set.insert("19552516.560000");
      Instrmt_61.add_attribute("PxUOM", "lbs"); // 2
      Instrmt_61_set.insert("lbs");
      Instrmt_61.add_attribute("PxUOMQty", "7719570.900000"); // 2
      Instrmt_61_set.insert("7719570.900000");
      Instrmt_61.add_attribute("SettlMeth", "C"); // 2
      Instrmt_61_set.insert("C");
      Instrmt_61.add_attribute("ExerStyle", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_61_set.insert("3");
      Instrmt_61.add_attribute("OptPayAmt", "OptPayoutAmount_t_705961194"); // 2
      Instrmt_61_set.insert("OptPayoutAmount_t_705961194");
      Instrmt_61.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_61_set.insert("INT");
      Instrmt_61.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_61_set.insert("FUTDA");
      Instrmt_61.add_attribute("ListMeth", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("CapPx", "20015856.040000"); // 2
      Instrmt_61_set.insert("20015856.040000");
      Instrmt_61.add_attribute("FlrPx", "1053574.950000"); // 2
      Instrmt_61_set.insert("1053574.950000");
      Instrmt_61.add_attribute("PutCall", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("FlexInd", "true"); // 2
      Instrmt_61_set.insert("true");
      Instrmt_61.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_61_set.insert("false");
      Instrmt_61.add_attribute("TmUnit", "D"); // 2
      Instrmt_61_set.insert("D");
      Instrmt_61.add_attribute("CpnRt", "19395953.560000"); // 2
      Instrmt_61_set.insert("19395953.560000");
      Instrmt_61.add_attribute("Exch", "SecurityExchange_t_231880294"); // 2
      Instrmt_61_set.insert("SecurityExchange_t_231880294");
      Instrmt_61.add_attribute("PosLmt", "935149923"); // 2
      Instrmt_61_set.insert("935149923");
      Instrmt_61.add_attribute("NTPosLmt", "185327898"); // 2
      Instrmt_61_set.insert("185327898");
      Instrmt_61.add_attribute("Issr", "Issuer_t_725949887"); // 2
      Instrmt_61_set.insert("Issuer_t_725949887");
      Instrmt_61.add_attribute("EncIssrLen", "162203435"); // 2
      Instrmt_61_set.insert("162203435");
      Instrmt_61.add_attribute("EncIssr", "EncodedIssuer_t_470968689"); // 2
      Instrmt_61_set.insert("EncodedIssuer_t_470968689");
      Instrmt_61.add_attribute("Desc", "SecurityDesc_t_187100602"); // 2
      Instrmt_61_set.insert("SecurityDesc_t_187100602");
      Instrmt_61.add_attribute("EncSecDescLen", "185126412"); // 2
      Instrmt_61_set.insert("185126412");
      Instrmt_61.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_902990875"); // 2
      Instrmt_61_set.insert("EncodedSecurityDesc_t_902990875");
      Instrmt_61.add_attribute("Pool", "Pool_t_1585218388"); // 2
      Instrmt_61_set.insert("Pool_t_1585218388");
      Instrmt_61.add_attribute("CSetMo", "460339520"); // 2
      Instrmt_61_set.insert("460339520");
      Instrmt_61.add_attribute("CPPgm", "99"); // 2
      Instrmt_61_set.insert("99");
      Instrmt_61.add_attribute("CPRegT", "CPRegType_t_946493703"); // 2
      Instrmt_61_set.insert("CPRegType_t_946493703");
      Instrmt_61.add_attribute("Dated", "DatedDate_t_2047978923"); // 2
      Instrmt_61_set.insert("DatedDate_t_2047978923");
      Instrmt_61.add_attribute("IntAcrl", "InterestAccrualDate_t_174792382"); // 2
      Instrmt_61_set.insert("InterestAccrualDate_t_174792382");
      all_values.push_back(Instrmt_61_set);
      all_compo_names.insert("Instrmt_61_set");

      {
        xml_element AID_64{"AID"};
        multiset<string> AID_64_set;
        AID_64.add_attribute("AltID", "SecurityAltID_t_2022163292"); // 3
        AID_64_set.insert("SecurityAltID_t_2022163292");
        AID_64.add_attribute("AltIDSrc", "E"); // 3
        AID_64_set.insert("E");
        all_values.push_back(AID_64_set);
        all_compo_names.insert("AID_64_set");

        Instrmt_61.add_element(AID_64);
      }
      {
        xml_element SecXML_64{"SecXML"};
        multiset<string> SecXML_64_set;
        SecXML_64.add_attribute("Schema", "SecurityXMLSchema_t_35300948"); // 3
        SecXML_64_set.insert("SecurityXMLSchema_t_35300948");
        all_values.push_back(SecXML_64_set);
        all_compo_names.insert("SecXML_64_set");

        Instrmt_61.add_element(SecXML_64);
      }
      {
        xml_element Evnt_64{"Evnt"};
        multiset<string> Evnt_64_set;
        Evnt_64.add_attribute("EventTyp", "15"); // 3
        Evnt_64_set.insert("15");
        Evnt_64.add_attribute("Dt", "EventDate_t_294439012"); // 3
        Evnt_64_set.insert("EventDate_t_294439012");
        Evnt_64.add_attribute("Tm", "EventTime_t_741262143"); // 3
        Evnt_64_set.insert("EventTime_t_741262143");
        Evnt_64.add_attribute("Px", "3438742.410000"); // 3
        Evnt_64_set.insert("3438742.410000");
        Evnt_64.add_attribute("Txt", "EventText_t_1442655354"); // 3
        Evnt_64_set.insert("EventText_t_1442655354");
        all_values.push_back(Evnt_64_set);
        all_compo_names.insert("Evnt_64_set");

        Instrmt_61.add_element(Evnt_64);
      }
      {
        xml_element Pty_337{"Pty"};
        multiset<string> Pty_337_set;
        Pty_337.add_attribute("ID", "InstrumentPartyID_t_1618109141"); // 3
        Pty_337_set.insert("InstrumentPartyID_t_1618109141");
        Pty_337.add_attribute("Src", "C"); // 3
        Pty_337_set.insert("C");
        Pty_337.add_attribute("R", "6"); // 3
        Pty_337_set.insert("6");
        all_values.push_back(Pty_337_set);
        all_compo_names.insert("Pty_337_set");

        {
          xml_element Sub_337{"Sub"};
          multiset<string> Sub_337_set;
          Sub_337.add_attribute("ID", "InstrumentPartySubID_t_1578180307"); // 4
          Sub_337_set.insert("InstrumentPartySubID_t_1578180307");
          Sub_337.add_attribute("Typ", "11"); // 4
          Sub_337_set.insert("11");
          all_values.push_back(Sub_337_set);
          all_compo_names.insert("Sub_337_set");

          Pty_337.add_element(Sub_337);
        }
        Instrmt_61.add_element(Pty_337);
      }
      {
        xml_element CmplxEvnt_61{"CmplxEvnt"};
        multiset<string> CmplxEvnt_61_set;
        CmplxEvnt_61.add_attribute("Typ", "3"); // 3
        CmplxEvnt_61_set.insert("3");
        CmplxEvnt_61.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2041787371"); // 3
        CmplxEvnt_61_set.insert("ComplexOptPayoutAmount_t_2041787371");
        CmplxEvnt_61.add_attribute("Px", "3150481.900000"); // 3
        CmplxEvnt_61_set.insert("3150481.900000");
        CmplxEvnt_61.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_61_set.insert("5");
        CmplxEvnt_61.add_attribute("PxBndryPrcsn", "8294536.460000"); // 3
        CmplxEvnt_61_set.insert("8294536.460000");
        CmplxEvnt_61.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_61_set.insert("2");
        CmplxEvnt_61.add_attribute("Cond", "1"); // 3
        CmplxEvnt_61_set.insert("1");
        all_values.push_back(CmplxEvnt_61_set);
        all_compo_names.insert("CmplxEvnt_61_set");

        {
          xml_element EvntDts_61{"EvntDts"};
          multiset<string> EvntDts_61_set;
          EvntDts_61.add_attribute("StartDt", "ComplexEventStartDate_t_991657081"); // 4
          EvntDts_61_set.insert("ComplexEventStartDate_t_991657081");
          EvntDts_61.add_attribute("EndDt", "ComplexEventEndDate_t_971344778"); // 4
          EvntDts_61_set.insert("ComplexEventEndDate_t_971344778");
          all_values.push_back(EvntDts_61_set);
          all_compo_names.insert("EvntDts_61_set");

          {
            xml_element EvntTms_61{"EvntTms"};
            multiset<string> EvntTms_61_set;
            EvntTms_61.add_attribute("StartTm", "644002071"); // 5
            EvntTms_61_set.insert("644002071");
            EvntTms_61.add_attribute("EndTm", "1176783494"); // 5
            EvntTms_61_set.insert("1176783494");
            all_values.push_back(EvntTms_61_set);
            all_compo_names.insert("EvntTms_61_set");

            EvntDts_61.add_element(EvntTms_61);
          }
          CmplxEvnt_61.add_element(EvntDts_61);
        }
        Instrmt_61.add_element(CmplxEvnt_61);
      }
      QuotReq_0.add_element(Instrmt_61);
    }
    {
      xml_element FinDetls_19{"FinDetls"};
      multiset<string> FinDetls_19_set;
      FinDetls_19.add_attribute("AgmtDesc", "AgreementDesc_t_1874335653"); // 2
      FinDetls_19_set.insert("AgreementDesc_t_1874335653");
      FinDetls_19.add_attribute("AgmtID", "AgreementID_t_81736811"); // 2
      FinDetls_19_set.insert("AgreementID_t_81736811");
      FinDetls_19.add_attribute("AgmtDt", "AgreementDate_t_1637123014"); // 2
      FinDetls_19_set.insert("AgreementDate_t_1637123014");
      FinDetls_19.add_attribute("AgmtCcy", "GBP"); // 2
      FinDetls_19_set.insert("GBP");
      FinDetls_19.add_attribute("TrmTyp", "2"); // 2
      FinDetls_19_set.insert("2");
      FinDetls_19.add_attribute("StartDt", "StartDate_t_268668761"); // 2
      FinDetls_19_set.insert("StartDate_t_268668761");
      FinDetls_19.add_attribute("EndDt", "EndDate_t_902910159"); // 2
      FinDetls_19_set.insert("EndDate_t_902910159");
      FinDetls_19.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_19_set.insert("2");
      FinDetls_19.add_attribute("MgnRatio", "3039697.090000"); // 2
      FinDetls_19_set.insert("3039697.090000");
      all_values.push_back(FinDetls_19_set);
      all_compo_names.insert("FinDetls_19_set");

      QuotReq_0.add_element(FinDetls_19);
    }
    {
      xml_element Undly_85{"Undly"};
      multiset<string> Undly_85_set;
      Undly_85.add_attribute("Sym", "UnderlyingSymbol_t_357254786"); // 2
      Undly_85_set.insert("UnderlyingSymbol_t_357254786");
      Undly_85.add_attribute("Sfx", "CD"); // 2
      Undly_85_set.insert("CD");
      Undly_85.add_attribute("ID", "UnderlyingSecurityID_t_1045231852"); // 2
      Undly_85_set.insert("UnderlyingSecurityID_t_1045231852");
      Undly_85.add_attribute("Src", "6"); // 2
      Undly_85_set.insert("6");
      Undly_85.add_attribute("Prod", "5"); // 2
      Undly_85_set.insert("5");
      Undly_85.add_attribute("CFI", "UnderlyingCFICode_t_515857345"); // 2
      Undly_85_set.insert("UnderlyingCFICode_t_515857345");
      Undly_85.add_attribute("SecTyp", "YANK"); // 2
      Undly_85_set.insert("YANK");
      Undly_85.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1200210574"); // 2
      Undly_85_set.insert("UnderlyingSecuritySubType_t_1200210574");
      Undly_85.add_attribute("MMY", "2094037653"); // 2
      Undly_85_set.insert("2094037653");
      Undly_85.add_attribute("Mat", "UnderlyingMaturityDate_t_1422041706"); // 2
      Undly_85_set.insert("UnderlyingMaturityDate_t_1422041706");
      Undly_85.add_attribute("MatTm", "699281860"); // 2
      Undly_85_set.insert("699281860");
      Undly_85.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1988341376"); // 2
      Undly_85_set.insert("UnderlyingCouponPaymentDate_t_1988341376");
      Undly_85.add_attribute("RestrctTyp", "FR"); // 2
      Undly_85_set.insert("FR");
      Undly_85.add_attribute("Snrty", "SD"); // 2
      Undly_85_set.insert("SD");
      Undly_85.add_attribute("NotlPctOut", "6703113.740000"); // 2
      Undly_85_set.insert("6703113.740000");
      Undly_85.add_attribute("OrigNotlPctOut", "899823.370000"); // 2
      Undly_85_set.insert("899823.370000");
      Undly_85.add_attribute("AttchPnt", "8871349.100000"); // 2
      Undly_85_set.insert("8871349.100000");
      Undly_85.add_attribute("DetchPnt", "16619684.560000"); // 2
      Undly_85_set.insert("16619684.560000");
      Undly_85.add_attribute("Issued", "UnderlyingIssueDate_t_1061327115"); // 2
      Undly_85_set.insert("UnderlyingIssueDate_t_1061327115");
      Undly_85.add_attribute("RepoCollSecTyp", "1531136981"); // 2
      Undly_85_set.insert("1531136981");
      Undly_85.add_attribute("RepoTrm", "691268302"); // 2
      Undly_85_set.insert("691268302");
      Undly_85.add_attribute("RepoRt", "7881791.200000"); // 2
      Undly_85_set.insert("7881791.200000");
      Undly_85.add_attribute("Fctr", "16128737.920000"); // 2
      Undly_85_set.insert("16128737.920000");
      Undly_85.add_attribute("CrdRtg", "UnderlyingCreditRating_t_180907668"); // 2
      Undly_85_set.insert("UnderlyingCreditRating_t_180907668");
      Undly_85.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_882055499"); // 2
      Undly_85_set.insert("UnderlyingInstrRegistry_t_882055499");
      Undly_85.add_attribute("Ctry", "493620659"); // 2
      Undly_85_set.insert("493620659");
      Undly_85.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1718525958"); // 2
      Undly_85_set.insert("UnderlyingStateOrProvinceOfIssue_t_1718525958");
      Undly_85.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1150724260"); // 2
      Undly_85_set.insert("UnderlyingLocaleOfIssue_t_1150724260");
      Undly_85.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1396530818"); // 2
      Undly_85_set.insert("UnderlyingRedemptionDate_t_1396530818");
      Undly_85.add_attribute("StrkPx", "17811129.640000"); // 2
      Undly_85_set.insert("17811129.640000");
      Undly_85.add_attribute("StrkCcy", "JPY"); // 2
      Undly_85_set.insert("JPY");
      Undly_85.add_attribute("OptA", "2138138983"); // 2
      Undly_85_set.insert("2138138983");
      Undly_85.add_attribute("Mult", "3524421.740000"); // 2
      Undly_85_set.insert("3524421.740000");
      Undly_85.add_attribute("MultTyp", "1"); // 2
      Undly_85_set.insert("1");
      Undly_85.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_85_set.insert("2");
      Undly_85.add_attribute("UOM", "Bcf"); // 2
      Undly_85_set.insert("Bcf");
      Undly_85.add_attribute("UOMQty", "12065362.070000"); // 2
      Undly_85_set.insert("12065362.070000");
      Undly_85.add_attribute("PxUOM", "USD"); // 2
      Undly_85_set.insert("USD");
      Undly_85.add_attribute("PxUOMQty", "8148535.250000"); // 2
      Undly_85_set.insert("8148535.250000");
      Undly_85.add_attribute("TmUnit", "H"); // 2
      Undly_85_set.insert("H");
      Undly_85.add_attribute("ExerStyle", "2"); // 2
      Undly_85_set.insert("2");
      Undly_85.add_attribute("CpnRt", "6557112.530000"); // 2
      Undly_85_set.insert("6557112.530000");
      Undly_85.add_attribute("Exch", "UnderlyingSecurityExchange_t_70700514"); // 2
      Undly_85_set.insert("UnderlyingSecurityExchange_t_70700514");
      Undly_85.add_attribute("Issr", "UnderlyingIssuer_t_1972578935"); // 2
      Undly_85_set.insert("UnderlyingIssuer_t_1972578935");
      Undly_85.add_attribute("EncUndIssrLen", "1326022627"); // 2
      Undly_85_set.insert("1326022627");
      Undly_85.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_160682851"); // 2
      Undly_85_set.insert("EncodedUnderlyingIssuer_t_160682851");
      Undly_85.add_attribute("Desc", "UnderlyingSecurityDesc_t_712230197"); // 2
      Undly_85_set.insert("UnderlyingSecurityDesc_t_712230197");
      Undly_85.add_attribute("EncUndSecDescLen", "840507435"); // 2
      Undly_85_set.insert("840507435");
      Undly_85.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1222009966"); // 2
      Undly_85_set.insert("EncodedUnderlyingSecurityDesc_t_1222009966");
      Undly_85.add_attribute("CPPgm", "UnderlyingCPProgram_t_95883530"); // 2
      Undly_85_set.insert("UnderlyingCPProgram_t_95883530");
      Undly_85.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1531775737"); // 2
      Undly_85_set.insert("UnderlyingCPRegType_t_1531775737");
      Undly_85.add_attribute("AllocPct", "20101890.870000"); // 2
      Undly_85_set.insert("20101890.870000");
      Undly_85.add_attribute("Ccy", "GBP"); // 2
      Undly_85_set.insert("GBP");
      Undly_85.add_attribute("Qty", "7447609.380000"); // 2
      Undly_85_set.insert("7447609.380000");
      Undly_85.add_attribute("SettlTyp", "4"); // 2
      Undly_85_set.insert("4");
      Undly_85.add_attribute("CashAmt", "UnderlyingCashAmount_t_1283725716"); // 2
      Undly_85_set.insert("UnderlyingCashAmount_t_1283725716");
      Undly_85.add_attribute("CashTyp", "DIFF"); // 2
      Undly_85_set.insert("DIFF");
      Undly_85.add_attribute("Px", "14514251.520000"); // 2
      Undly_85_set.insert("14514251.520000");
      Undly_85.add_attribute("DirtPx", "9173550.320000"); // 2
      Undly_85_set.insert("9173550.320000");
      Undly_85.add_attribute("EndPx", "12026955.210000"); // 2
      Undly_85_set.insert("12026955.210000");
      Undly_85.add_attribute("StartVal", "UnderlyingStartValue_t_1057727108"); // 2
      Undly_85_set.insert("UnderlyingStartValue_t_1057727108");
      Undly_85.add_attribute("CurVal", "UnderlyingCurrentValue_t_908010367"); // 2
      Undly_85_set.insert("UnderlyingCurrentValue_t_908010367");
      Undly_85.add_attribute("EndVal", "UnderlyingEndValue_t_1555137695"); // 2
      Undly_85_set.insert("UnderlyingEndValue_t_1555137695");
      Undly_85.add_attribute("AdjQty", "13651580.910000"); // 2
      Undly_85_set.insert("13651580.910000");
      Undly_85.add_attribute("FxRate", "5508634.270000"); // 2
      Undly_85_set.insert("5508634.270000");
      Undly_85.add_attribute("FxRateCalc", "D"); // 2
      Undly_85_set.insert("D");
      Undly_85.add_attribute("CapValu", "UnderlyingCapValue_t_424210650"); // 2
      Undly_85_set.insert("UnderlyingCapValue_t_424210650");
      Undly_85.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1393927060"); // 2
      Undly_85_set.insert("UnderlyingSettlMethod_t_1393927060");
      Undly_85.add_attribute("PutCall", "1090807092"); // 2
      Undly_85_set.insert("1090807092");
      all_values.push_back(Undly_85_set);
      all_compo_names.insert("Undly_85_set");

      {
        xml_element UndAID_85{"UndAID"};
        multiset<string> UndAID_85_set;
        UndAID_85.add_attribute("AltID", "UnderlyingSecurityAltID_t_905304916"); // 3
        UndAID_85_set.insert("UnderlyingSecurityAltID_t_905304916");
        UndAID_85.add_attribute("AltIDSrc", "5"); // 3
        UndAID_85_set.insert("5");
        all_values.push_back(UndAID_85_set);
        all_compo_names.insert("UndAID_85_set");

        Undly_85.add_element(UndAID_85);
      }
      {
        xml_element Stip_124{"Stip"};
        multiset<string> Stip_124_set;
        Stip_124.add_attribute("Typ", "MINDNOM"); // 3
        Stip_124_set.insert("MINDNOM");
        Stip_124.add_attribute("Val", "UnderlyingStipValue_t_976005431"); // 3
        Stip_124_set.insert("UnderlyingStipValue_t_976005431");
        all_values.push_back(Stip_124_set);
        all_compo_names.insert("Stip_124_set");

        Undly_85.add_element(Stip_124);
      }
      {
        xml_element Pty_338{"Pty"};
        multiset<string> Pty_338_set;
        Pty_338.add_attribute("ID", "UnderlyingInstrumentPartyID_t_613884194"); // 3
        Pty_338_set.insert("UnderlyingInstrumentPartyID_t_613884194");
        Pty_338.add_attribute("Src", "C"); // 3
        Pty_338_set.insert("C");
        Pty_338.add_attribute("R", "38"); // 3
        Pty_338_set.insert("38");
        all_values.push_back(Pty_338_set);
        all_compo_names.insert("Pty_338_set");

        {
          xml_element Sub_338{"Sub"};
          multiset<string> Sub_338_set;
          Sub_338.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1326114391"); // 4
          Sub_338_set.insert("UnderlyingInstrumentPartySubID_t_1326114391");
          Sub_338.add_attribute("Typ", "22"); // 4
          Sub_338_set.insert("22");
          all_values.push_back(Sub_338_set);
          all_compo_names.insert("Sub_338_set");

          Pty_338.add_element(Sub_338);
        }
        Undly_85.add_element(Pty_338);
      }
      QuotReq_0.add_element(Undly_85);
    }
    {
      xml_element OrdQty_20{"OrdQty"};
      multiset<string> OrdQty_20_set;
      OrdQty_20.add_attribute("Qty", "2112146.010000"); // 2
      OrdQty_20_set.insert("2112146.010000");
      OrdQty_20.add_attribute("Cash", "14219979.220000"); // 2
      OrdQty_20_set.insert("14219979.220000");
      OrdQty_20.add_attribute("Pct", "11498568.500000"); // 2
      OrdQty_20_set.insert("11498568.500000");
      OrdQty_20.add_attribute("RndDir", "1"); // 2
      OrdQty_20_set.insert("1");
      OrdQty_20.add_attribute("RndMod", "9832715.970000"); // 2
      OrdQty_20_set.insert("9832715.970000");
      all_values.push_back(OrdQty_20_set);
      all_compo_names.insert("OrdQty_20_set");

      QuotReq_0.add_element(OrdQty_20);
    }
    {
      xml_element RtSrc_13{"RtSrc"};
      multiset<string> RtSrc_13_set;
      RtSrc_13.add_attribute("RtSrc", "0"); // 2
      RtSrc_13_set.insert("0");
      RtSrc_13.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_13_set.insert("0");
      RtSrc_13.add_attribute("RefPg", "ReferencePage_t_1038165931"); // 2
      RtSrc_13_set.insert("ReferencePage_t_1038165931");
      all_values.push_back(RtSrc_13_set);
      all_compo_names.insert("RtSrc_13_set");

      QuotReq_0.add_element(RtSrc_13);
    }
    {
      xml_element Stip_125{"Stip"};
      multiset<string> Stip_125_set;
      Stip_125.add_attribute("Typ", "BGNCON"); // 2
      Stip_125_set.insert("BGNCON");
      Stip_125.add_attribute("Val", "StipulationValue_t_566682529"); // 2
      Stip_125_set.insert("StipulationValue_t_566682529");
      all_values.push_back(Stip_125_set);
      all_compo_names.insert("Stip_125_set");

      QuotReq_0.add_element(Stip_125);
    }
    {
      xml_element Leg_71{"Leg"};
      multiset<string> Leg_71_set;
      Leg_71.add_attribute("Qty", "3421074.350000"); // 2
      Leg_71_set.insert("3421074.350000");
      Leg_71.add_attribute("OrdQty", "7686537.080000"); // 2
      Leg_71_set.insert("7686537.080000");
      Leg_71.add_attribute("SwapTyp", "4"); // 2
      Leg_71_set.insert("4");
      Leg_71.add_attribute("SettlTyp", "7"); // 2
      Leg_71_set.insert("7");
      Leg_71.add_attribute("SettlDt", "LegSettlDate_t_1676664076"); // 2
      Leg_71_set.insert("LegSettlDate_t_1676664076");
      Leg_71.add_attribute("RefID", "LegRefID_t_1177032098"); // 2
      Leg_71_set.insert("LegRefID_t_1177032098");
      all_values.push_back(Leg_71_set);
      all_compo_names.insert("Leg_71_set");

      {
        xml_element Leg_72{"Leg"};
        multiset<string> Leg_72_set;
        Leg_72.add_attribute("Sym", "LegSymbol_t_617508986"); // 3
        Leg_72_set.insert("LegSymbol_t_617508986");
        Leg_72.add_attribute("Sfx", "WI"); // 3
        Leg_72_set.insert("WI");
        Leg_72.add_attribute("ID", "LegSecurityID_t_1452985665"); // 3
        Leg_72_set.insert("LegSecurityID_t_1452985665");
        Leg_72.add_attribute("Src", "D"); // 3
        Leg_72_set.insert("D");
        Leg_72.add_attribute("Prod", "10"); // 3
        Leg_72_set.insert("10");
        Leg_72.add_attribute("CFI", "LegCFICode_t_396309110"); // 3
        Leg_72_set.insert("LegCFICode_t_396309110");
        Leg_72.add_attribute("SecTyp", "CB"); // 3
        Leg_72_set.insert("CB");
        Leg_72.add_attribute("SecSubTyp", "LegSecuritySubType_t_115276174"); // 3
        Leg_72_set.insert("LegSecuritySubType_t_115276174");
        Leg_72.add_attribute("MMY", "2142827455"); // 3
        Leg_72_set.insert("2142827455");
        Leg_72.add_attribute("Mat", "LegMaturityDate_t_775546336"); // 3
        Leg_72_set.insert("LegMaturityDate_t_775546336");
        Leg_72.add_attribute("MatTm", "729160368"); // 3
        Leg_72_set.insert("729160368");
        Leg_72.add_attribute("CpnPmt", "LegCouponPaymentDate_t_920401132"); // 3
        Leg_72_set.insert("LegCouponPaymentDate_t_920401132");
        Leg_72.add_attribute("Issued", "LegIssueDate_t_1912234618"); // 3
        Leg_72_set.insert("LegIssueDate_t_1912234618");
        Leg_72.add_attribute("RepoCollSecTyp", "2055274759"); // 3
        Leg_72_set.insert("2055274759");
        Leg_72.add_attribute("RepoTrm", "538482245"); // 3
        Leg_72_set.insert("538482245");
        Leg_72.add_attribute("RepoRt", "21234492.190000"); // 3
        Leg_72_set.insert("21234492.190000");
        Leg_72.add_attribute("Fctr", "13297890.330000"); // 3
        Leg_72_set.insert("13297890.330000");
        Leg_72.add_attribute("CrdRtg", "LegCreditRating_t_1688339095"); // 3
        Leg_72_set.insert("LegCreditRating_t_1688339095");
        Leg_72.add_attribute("Rgstry", "LegInstrRegistry_t_49885611"); // 3
        Leg_72_set.insert("LegInstrRegistry_t_49885611");
        Leg_72.add_attribute("Ctry", "165576982"); // 3
        Leg_72_set.insert("165576982");
        Leg_72.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_255912055"); // 3
        Leg_72_set.insert("LegStateOrProvinceOfIssue_t_255912055");
        Leg_72.add_attribute("Lcl", "LegLocaleOfIssue_t_868566590"); // 3
        Leg_72_set.insert("LegLocaleOfIssue_t_868566590");
        Leg_72.add_attribute("Redeem", "LegRedemptionDate_t_1203742913"); // 3
        Leg_72_set.insert("LegRedemptionDate_t_1203742913");
        Leg_72.add_attribute("Strk", "1072107.310000"); // 3
        Leg_72_set.insert("1072107.310000");
        Leg_72.add_attribute("StrkCcy", "JPY"); // 3
        Leg_72_set.insert("JPY");
        Leg_72.add_attribute("OptA", "875864439"); // 3
        Leg_72_set.insert("875864439");
        Leg_72.add_attribute("Cmult", "10571435.220000"); // 3
        Leg_72_set.insert("10571435.220000");
        Leg_72.add_attribute("MultTyp", "0"); // 3
        Leg_72_set.insert("0");
        Leg_72.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_72_set.insert("2");
        Leg_72.add_attribute("UOM", "Gal"); // 3
        Leg_72_set.insert("Gal");
        Leg_72.add_attribute("UOMQty", "14157102.290000"); // 3
        Leg_72_set.insert("14157102.290000");
        Leg_72.add_attribute("PxUOM", "MMBtu"); // 3
        Leg_72_set.insert("MMBtu");
        Leg_72.add_attribute("PxUOMQty", "15396776.370000"); // 3
        Leg_72_set.insert("15396776.370000");
        Leg_72.add_attribute("TmUnit", "Min"); // 3
        Leg_72_set.insert("Min");
        Leg_72.add_attribute("ExerStyle", "1"); // 3
        Leg_72_set.insert("1");
        Leg_72.add_attribute("CpnRt", "19359867.470000"); // 3
        Leg_72_set.insert("19359867.470000");
        Leg_72.add_attribute("Exch", "LegSecurityExchange_t_109487123"); // 3
        Leg_72_set.insert("LegSecurityExchange_t_109487123");
        Leg_72.add_attribute("Issr", "LegIssuer_t_2074335812"); // 3
        Leg_72_set.insert("LegIssuer_t_2074335812");
        Leg_72.add_attribute("EncLegIssrLen", "1931330555"); // 3
        Leg_72_set.insert("1931330555");
        Leg_72.add_attribute("EncLegIssr", "EncodedLegIssuer_t_885033459"); // 3
        Leg_72_set.insert("EncodedLegIssuer_t_885033459");
        Leg_72.add_attribute("Desc", "LegSecurityDesc_t_656012532"); // 3
        Leg_72_set.insert("LegSecurityDesc_t_656012532");
        Leg_72.add_attribute("EncLegSecDescLen", "704248039"); // 3
        Leg_72_set.insert("704248039");
        Leg_72.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_649784429"); // 3
        Leg_72_set.insert("EncodedLegSecurityDesc_t_649784429");
        Leg_72.add_attribute("RatioQty", "5638036.430000"); // 3
        Leg_72_set.insert("5638036.430000");
        Leg_72.add_attribute("Side", "D"); // 3
        Leg_72_set.insert("D");
        Leg_72.add_attribute("Ccy", "CHF"); // 3
        Leg_72_set.insert("CHF");
        Leg_72.add_attribute("Pool", "LegPool_t_783585731"); // 3
        Leg_72_set.insert("LegPool_t_783585731");
        Leg_72.add_attribute("Dated", "LegDatedDate_t_675635612"); // 3
        Leg_72_set.insert("LegDatedDate_t_675635612");
        Leg_72.add_attribute("CSetMo", "2059169659"); // 3
        Leg_72_set.insert("2059169659");
        Leg_72.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1039497786"); // 3
        Leg_72_set.insert("LegInterestAccrualDate_t_1039497786");
        Leg_72.add_attribute("PutCall", "1544202202"); // 3
        Leg_72_set.insert("1544202202");
        Leg_72.add_attribute("LegOptionRatio", "11154289.250000"); // 3
        Leg_72_set.insert("11154289.250000");
        Leg_72.add_attribute("Px", "11467085.170000"); // 3
        Leg_72_set.insert("11467085.170000");
        all_values.push_back(Leg_72_set);
        all_compo_names.insert("Leg_72_set");

        {
          xml_element LegAID_71{"LegAID"};
          multiset<string> LegAID_71_set;
          LegAID_71.add_attribute("SecAltID", "LegSecurityAltID_t_831967674"); // 4
          LegAID_71_set.insert("LegSecurityAltID_t_831967674");
          LegAID_71.add_attribute("SecAltIDSrc", "E"); // 4
          LegAID_71_set.insert("E");
          all_values.push_back(LegAID_71_set);
          all_compo_names.insert("LegAID_71_set");

          Leg_72.add_element(LegAID_71);
        }
        Leg_71.add_element(Leg_72);
      }
      {
        xml_element Stip_126{"Stip"};
        multiset<string> Stip_126_set;
        Stip_126.add_attribute("StipTyp", "TRADERCREDIT"); // 3
        Stip_126_set.insert("TRADERCREDIT");
        Stip_126.add_attribute("StipVal", "LegStipulationValue_t_1889111196"); // 3
        Stip_126_set.insert("LegStipulationValue_t_1889111196");
        all_values.push_back(Stip_126_set);
        all_compo_names.insert("Stip_126_set");

        Leg_71.add_element(Stip_126);
      }
      {
        xml_element Pty_339{"Pty"};
        multiset<string> Pty_339_set;
        Pty_339.add_attribute("ID", "NestedPartyID_t_1311996869"); // 3
        Pty_339_set.insert("NestedPartyID_t_1311996869");
        Pty_339.add_attribute("Src", "F"); // 3
        Pty_339_set.insert("F");
        Pty_339.add_attribute("R", "32"); // 3
        Pty_339_set.insert("32");
        all_values.push_back(Pty_339_set);
        all_compo_names.insert("Pty_339_set");

        {
          xml_element Sub_339{"Sub"};
          multiset<string> Sub_339_set;
          Sub_339.add_attribute("ID", "NestedPartySubID_t_580223450"); // 4
          Sub_339_set.insert("NestedPartySubID_t_580223450");
          Sub_339.add_attribute("Typ", "7"); // 4
          Sub_339_set.insert("7");
          all_values.push_back(Sub_339_set);
          all_compo_names.insert("Sub_339_set");

          Pty_339.add_element(Sub_339);
        }
        Leg_71.add_element(Pty_339);
      }
      {
        xml_element BnchmkCurve_1{"BnchmkCurve"};
        multiset<string> BnchmkCurve_1_set;
        BnchmkCurve_1.add_attribute("Ccy", "GBP"); // 3
        BnchmkCurve_1_set.insert("GBP");
        BnchmkCurve_1.add_attribute("Name", "EUREPO"); // 3
        BnchmkCurve_1_set.insert("EUREPO");
        BnchmkCurve_1.add_attribute("Point", "LegBenchmarkCurvePoint_t_1156500257"); // 3
        BnchmkCurve_1_set.insert("LegBenchmarkCurvePoint_t_1156500257");
        BnchmkCurve_1.add_attribute("Px", "9996567.910000"); // 3
        BnchmkCurve_1_set.insert("9996567.910000");
        BnchmkCurve_1.add_attribute("PxTyp", "503651053"); // 3
        BnchmkCurve_1_set.insert("503651053");
        all_values.push_back(BnchmkCurve_1_set);
        all_compo_names.insert("BnchmkCurve_1_set");

        Leg_71.add_element(BnchmkCurve_1);
      }
      QuotReq_0.add_element(Leg_71);
    }
    {
      xml_element QuotQual_1{"QuotQual"};
      multiset<string> QuotQual_1_set;
      QuotQual_1.add_attribute("Qual", "C"); // 2
      QuotQual_1_set.insert("C");
      all_values.push_back(QuotQual_1_set);
      all_compo_names.insert("QuotQual_1_set");

      QuotReq_0.add_element(QuotQual_1);
    }
    {
      xml_element SprdBnchmkCurve_22{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_22_set;
      SprdBnchmkCurve_22.add_attribute("Spread", "18846902.500000"); // 2
      SprdBnchmkCurve_22_set.insert("18846902.500000");
      SprdBnchmkCurve_22.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_22_set.insert("CHF");
      SprdBnchmkCurve_22.add_attribute("Name", "Pfandbriefe"); // 2
      SprdBnchmkCurve_22_set.insert("Pfandbriefe");
      SprdBnchmkCurve_22.add_attribute("Point", "BenchmarkCurvePoint_t_1723467228"); // 2
      SprdBnchmkCurve_22_set.insert("BenchmarkCurvePoint_t_1723467228");
      SprdBnchmkCurve_22.add_attribute("Px", "7398418.400000"); // 2
      SprdBnchmkCurve_22_set.insert("7398418.400000");
      SprdBnchmkCurve_22.add_attribute("PxTyp", "15"); // 2
      SprdBnchmkCurve_22_set.insert("15");
      SprdBnchmkCurve_22.add_attribute("SecID", "BenchmarkSecurityID_t_1469576257"); // 2
      SprdBnchmkCurve_22_set.insert("BenchmarkSecurityID_t_1469576257");
      SprdBnchmkCurve_22.add_attribute("SecIDSrc", "I"); // 2
      SprdBnchmkCurve_22_set.insert("I");
      all_values.push_back(SprdBnchmkCurve_22_set);
      all_compo_names.insert("SprdBnchmkCurve_22_set");

      QuotReq_0.add_element(SprdBnchmkCurve_22);
    }
    {
      xml_element Yield_17{"Yield"};
      multiset<string> Yield_17_set;
      Yield_17.add_attribute("Typ", "NEXTREFUND"); // 2
      Yield_17_set.insert("NEXTREFUND");
      Yield_17.add_attribute("Yld", "13812622.690000"); // 2
      Yield_17_set.insert("13812622.690000");
      Yield_17.add_attribute("CalcDt", "YieldCalcDate_t_415441710"); // 2
      Yield_17_set.insert("YieldCalcDate_t_415441710");
      Yield_17.add_attribute("RedDt", "YieldRedemptionDate_t_1085095200"); // 2
      Yield_17_set.insert("YieldRedemptionDate_t_1085095200");
      Yield_17.add_attribute("RedPx", "3492075.460000"); // 2
      Yield_17_set.insert("3492075.460000");
      Yield_17.add_attribute("RedPxTyp", "15"); // 2
      Yield_17_set.insert("15");
      all_values.push_back(Yield_17_set);
      all_compo_names.insert("Yield_17_set");

      QuotReq_0.add_element(Yield_17);
    }
    {
      xml_element Pty_340{"Pty"};
      multiset<string> Pty_340_set;
      Pty_340.add_attribute("ID", "PartyID_t_1917062874"); // 2
      Pty_340_set.insert("PartyID_t_1917062874");
      Pty_340.add_attribute("Src", "C"); // 2
      Pty_340_set.insert("C");
      Pty_340.add_attribute("R", "43"); // 2
      Pty_340_set.insert("43");
      all_values.push_back(Pty_340_set);
      all_compo_names.insert("Pty_340_set");

      {
        xml_element Sub_340{"Sub"};
        multiset<string> Sub_340_set;
        Sub_340.add_attribute("ID", "PartySubID_t_1658690422"); // 3
        Sub_340_set.insert("PartySubID_t_1658690422");
        Sub_340.add_attribute("Typ", "11"); // 3
        Sub_340_set.insert("11");
        all_values.push_back(Sub_340_set);
        all_compo_names.insert("Sub_340_set");

        Pty_340.add_element(Sub_340);
      }
      QuotReq_0.add_element(Pty_340);
    }
    elt.add_element(QuotReq_0);
  } // end QuotReq
  { // QuotReq
    xml_element QuotReq_1{"QuotReq"};
    multiset<string> QuotReq_1_set;
    QuotReq_1.add_attribute("PrevClsPx", "17173737.130000"); // 1
    QuotReq_1_set.insert("17173737.130000");
    QuotReq_1.add_attribute("ReqTyp", "1"); // 1
    QuotReq_1_set.insert("1");
    QuotReq_1.add_attribute("Typ", "3"); // 1
    QuotReq_1_set.insert("3");
    QuotReq_1.add_attribute("SesID", "5"); // 1
    QuotReq_1_set.insert("5");
    QuotReq_1.add_attribute("SesSub", "6"); // 1
    QuotReq_1_set.insert("6");
    QuotReq_1.add_attribute("OrignDt", "TradeOriginationDate_t_1497909511"); // 1
    QuotReq_1_set.insert("TradeOriginationDate_t_1497909511");
    QuotReq_1.add_attribute("Side", "E"); // 1
    QuotReq_1_set.insert("E");
    QuotReq_1.add_attribute("QtyTyp", "0"); // 1
    QuotReq_1_set.insert("0");
    QuotReq_1.add_attribute("MinQty", "3500826.550000"); // 1
    QuotReq_1_set.insert("3500826.550000");
    QuotReq_1.add_attribute("SettlTyp", "6"); // 1
    QuotReq_1_set.insert("6");
    QuotReq_1.add_attribute("SettlDt", "SettlDate_t_656887224"); // 1
    QuotReq_1_set.insert("SettlDate_t_656887224");
    QuotReq_1.add_attribute("SettlDt2", "SettlDate2_t_87289257"); // 1
    QuotReq_1_set.insert("SettlDate2_t_87289257");
    QuotReq_1.add_attribute("Qty2", "4277428.430000"); // 1
    QuotReq_1_set.insert("4277428.430000");
    QuotReq_1.add_attribute("Ccy", "CAN"); // 1
    QuotReq_1_set.insert("CAN");
    QuotReq_1.add_attribute("SettlCcy", "JPY"); // 1
    QuotReq_1_set.insert("JPY");
    QuotReq_1.add_attribute("Acct", "Account_t_1487021322"); // 1
    QuotReq_1_set.insert("Account_t_1487021322");
    QuotReq_1.add_attribute("AcctIDSrc", "99"); // 1
    QuotReq_1_set.insert("99");
    QuotReq_1.add_attribute("AcctTyp", "1"); // 1
    QuotReq_1_set.insert("1");
    QuotReq_1.add_attribute("QuotPxTyp", "1"); // 1
    QuotReq_1_set.insert("1");
    QuotReq_1.add_attribute("OrdTyp", "P"); // 1
    QuotReq_1_set.insert("P");
    QuotReq_1.add_attribute("ValidUntilTm", "ValidUntilTime_t_685226253"); // 1
    QuotReq_1_set.insert("ValidUntilTime_t_685226253");
    QuotReq_1.add_attribute("ExpireTm", "ExpireTime_t_2113009520"); // 1
    QuotReq_1_set.insert("ExpireTime_t_2113009520");
    QuotReq_1.add_attribute("TxnTm", "TransactTime_t_1056288848"); // 1
    QuotReq_1_set.insert("TransactTime_t_1056288848");
    QuotReq_1.add_attribute("PxTyp", "17"); // 1
    QuotReq_1_set.insert("17");
    QuotReq_1.add_attribute("Px", "18825887.460000"); // 1
    QuotReq_1_set.insert("18825887.460000");
    QuotReq_1.add_attribute("Px2", "19192920.190000"); // 1
    QuotReq_1_set.insert("19192920.190000");
    all_values.push_back(QuotReq_1_set);
    all_compo_names.insert("QuotReq_1_set");

    {
      xml_element Instrmt_62{"Instrmt"};
      multiset<string> Instrmt_62_set;
      Instrmt_62.add_attribute("Sym", "Symbol_t_1537132369"); // 2
      Instrmt_62_set.insert("Symbol_t_1537132369");
      Instrmt_62.add_attribute("Sfx", "CD"); // 2
      Instrmt_62_set.insert("CD");
      Instrmt_62.add_attribute("ID", "SecurityID_t_1946808412"); // 2
      Instrmt_62_set.insert("SecurityID_t_1946808412");
      Instrmt_62.add_attribute("Src", "D"); // 2
      Instrmt_62_set.insert("D");
      Instrmt_62.add_attribute("Prod", "13"); // 2
      Instrmt_62_set.insert("13");
      Instrmt_62.add_attribute("ProdCmplx", "ProductComplex_t_407064607"); // 2
      Instrmt_62_set.insert("ProductComplex_t_407064607");
      Instrmt_62.add_attribute("SecGrp", "SecurityGroup_t_1442135398"); // 2
      Instrmt_62_set.insert("SecurityGroup_t_1442135398");
      Instrmt_62.add_attribute("CFI", "CFICode_t_1440845265"); // 2
      Instrmt_62_set.insert("CFICode_t_1440845265");
      Instrmt_62.add_attribute("SecTyp", "PS"); // 2
      Instrmt_62_set.insert("PS");
      Instrmt_62.add_attribute("SubTyp", "SecuritySubType_t_206563603"); // 2
      Instrmt_62_set.insert("SecuritySubType_t_206563603");
      Instrmt_62.add_attribute("MMY", "1157385326"); // 2
      Instrmt_62_set.insert("1157385326");
      Instrmt_62.add_attribute("MatDt", "MaturityDate_t_107573125"); // 2
      Instrmt_62_set.insert("MaturityDate_t_107573125");
      Instrmt_62.add_attribute("MatTm", "1622126509"); // 2
      Instrmt_62_set.insert("1622126509");
      Instrmt_62.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1814272550"); // 2
      Instrmt_62_set.insert("SettleOnOpenFlag_t_1814272550");
      Instrmt_62.add_attribute("AsgnMeth", "194862383"); // 2
      Instrmt_62_set.insert("194862383");
      Instrmt_62.add_attribute("Status", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("CpnPmt", "CouponPaymentDate_t_1968271330"); // 2
      Instrmt_62_set.insert("CouponPaymentDate_t_1968271330");
      Instrmt_62.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_62_set.insert("FR");
      Instrmt_62.add_attribute("Snrty", "SR"); // 2
      Instrmt_62_set.insert("SR");
      Instrmt_62.add_attribute("NotlPctOut", "7146283.020000"); // 2
      Instrmt_62_set.insert("7146283.020000");
      Instrmt_62.add_attribute("OrigNotlPctOut", "86803.470000"); // 2
      Instrmt_62_set.insert("86803.470000");
      Instrmt_62.add_attribute("AttchPnt", "13794148.090000"); // 2
      Instrmt_62_set.insert("13794148.090000");
      Instrmt_62.add_attribute("DetchPnt", "9844128.460000"); // 2
      Instrmt_62_set.insert("9844128.460000");
      Instrmt_62.add_attribute("Issued", "IssueDate_t_1036594667"); // 2
      Instrmt_62_set.insert("IssueDate_t_1036594667");
      Instrmt_62.add_attribute("RepoCollSecTyp", "2086496111"); // 2
      Instrmt_62_set.insert("2086496111");
      Instrmt_62.add_attribute("RepoTrm", "1669639099"); // 2
      Instrmt_62_set.insert("1669639099");
      Instrmt_62.add_attribute("RepoRt", "10021205.390000"); // 2
      Instrmt_62_set.insert("10021205.390000");
      Instrmt_62.add_attribute("Fctr", "9953013.110000"); // 2
      Instrmt_62_set.insert("9953013.110000");
      Instrmt_62.add_attribute("CrdRtg", "CreditRating_t_1769531932"); // 2
      Instrmt_62_set.insert("CreditRating_t_1769531932");
      Instrmt_62.add_attribute("Rgstry", "InstrRegistry_t_737225637"); // 2
      Instrmt_62_set.insert("InstrRegistry_t_737225637");
      Instrmt_62.add_attribute("IssuCtry", "767109682"); // 2
      Instrmt_62_set.insert("767109682");
      Instrmt_62.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1159180654"); // 2
      Instrmt_62_set.insert("StateOrProvinceOfIssue_t_1159180654");
      Instrmt_62.add_attribute("Lcl", "LocaleOfIssue_t_2131021157"); // 2
      Instrmt_62_set.insert("LocaleOfIssue_t_2131021157");
      Instrmt_62.add_attribute("Redeem", "RedemptionDate_t_566434446"); // 2
      Instrmt_62_set.insert("RedemptionDate_t_566434446");
      Instrmt_62.add_attribute("StrkPx", "1187194.400000"); // 2
      Instrmt_62_set.insert("1187194.400000");
      Instrmt_62.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_62_set.insert("EUR");
      Instrmt_62.add_attribute("StrkMult", "15608548.390000"); // 2
      Instrmt_62_set.insert("15608548.390000");
      Instrmt_62.add_attribute("StrkValu", "102209.400000"); // 2
      Instrmt_62_set.insert("102209.400000");
      Instrmt_62.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_62_set.insert("3");
      Instrmt_62.add_attribute("StrkPxBndryPrcsn", "11676062.660000"); // 2
      Instrmt_62_set.insert("11676062.660000");
      Instrmt_62.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_62_set.insert("2");
      Instrmt_62.add_attribute("OptAt", "1242061304"); // 2
      Instrmt_62_set.insert("1242061304");
      Instrmt_62.add_attribute("Mult", "8343951.690000"); // 2
      Instrmt_62_set.insert("8343951.690000");
      Instrmt_62.add_attribute("MultTyp", "2"); // 2
      Instrmt_62_set.insert("2");
      Instrmt_62.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_62_set.insert("3");
      Instrmt_62.add_attribute("MinPxIncr", "6551828.510000"); // 2
      Instrmt_62_set.insert("6551828.510000");
      Instrmt_62.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1702567705"); // 2
      Instrmt_62_set.insert("MinPriceIncrementAmount_t_1702567705");
      Instrmt_62.add_attribute("UOM", "Gal"); // 2
      Instrmt_62_set.insert("Gal");
      Instrmt_62.add_attribute("UOMQty", "13698111.540000"); // 2
      Instrmt_62_set.insert("13698111.540000");
      Instrmt_62.add_attribute("PxUOM", "lbs"); // 2
      Instrmt_62_set.insert("lbs");
      Instrmt_62.add_attribute("PxUOMQty", "2824902.970000"); // 2
      Instrmt_62_set.insert("2824902.970000");
      Instrmt_62.add_attribute("SettlMeth", "C"); // 2
      Instrmt_62_set.insert("C");
      Instrmt_62.add_attribute("ExerStyle", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_62_set.insert("2");
      Instrmt_62.add_attribute("OptPayAmt", "OptPayoutAmount_t_1876379451"); // 2
      Instrmt_62_set.insert("OptPayoutAmount_t_1876379451");
      Instrmt_62.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_62_set.insert("INT");
      Instrmt_62.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_62_set.insert("FUT");
      Instrmt_62.add_attribute("ListMeth", "0"); // 2
      Instrmt_62_set.insert("0");
      Instrmt_62.add_attribute("CapPx", "1922215.990000"); // 2
      Instrmt_62_set.insert("1922215.990000");
      Instrmt_62.add_attribute("FlrPx", "19839137.540000"); // 2
      Instrmt_62_set.insert("19839137.540000");
      Instrmt_62.add_attribute("PutCall", "0"); // 2
      Instrmt_62_set.insert("0");
      Instrmt_62.add_attribute("FlexInd", "true"); // 2
      Instrmt_62_set.insert("true");
      Instrmt_62.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_62_set.insert("true");
      Instrmt_62.add_attribute("TmUnit", "Min"); // 2
      Instrmt_62_set.insert("Min");
      Instrmt_62.add_attribute("CpnRt", "8926184.310000"); // 2
      Instrmt_62_set.insert("8926184.310000");
      Instrmt_62.add_attribute("Exch", "SecurityExchange_t_1376363606"); // 2
      Instrmt_62_set.insert("SecurityExchange_t_1376363606");
      Instrmt_62.add_attribute("PosLmt", "42215373"); // 2
      Instrmt_62_set.insert("42215373");
      Instrmt_62.add_attribute("NTPosLmt", "902839371"); // 2
      Instrmt_62_set.insert("902839371");
      Instrmt_62.add_attribute("Issr", "Issuer_t_2107353130"); // 2
      Instrmt_62_set.insert("Issuer_t_2107353130");
      Instrmt_62.add_attribute("EncIssrLen", "1809633816"); // 2
      Instrmt_62_set.insert("1809633816");
      Instrmt_62.add_attribute("EncIssr", "EncodedIssuer_t_2070445638"); // 2
      Instrmt_62_set.insert("EncodedIssuer_t_2070445638");
      Instrmt_62.add_attribute("Desc", "SecurityDesc_t_798432131"); // 2
      Instrmt_62_set.insert("SecurityDesc_t_798432131");
      Instrmt_62.add_attribute("EncSecDescLen", "904211472"); // 2
      Instrmt_62_set.insert("904211472");
      Instrmt_62.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_757357159"); // 2
      Instrmt_62_set.insert("EncodedSecurityDesc_t_757357159");
      Instrmt_62.add_attribute("Pool", "Pool_t_1831857164"); // 2
      Instrmt_62_set.insert("Pool_t_1831857164");
      Instrmt_62.add_attribute("CSetMo", "2048658480"); // 2
      Instrmt_62_set.insert("2048658480");
      Instrmt_62.add_attribute("CPPgm", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("CPRegT", "CPRegType_t_1386941221"); // 2
      Instrmt_62_set.insert("CPRegType_t_1386941221");
      Instrmt_62.add_attribute("Dated", "DatedDate_t_951733969"); // 2
      Instrmt_62_set.insert("DatedDate_t_951733969");
      Instrmt_62.add_attribute("IntAcrl", "InterestAccrualDate_t_634867516"); // 2
      Instrmt_62_set.insert("InterestAccrualDate_t_634867516");
      all_values.push_back(Instrmt_62_set);
      all_compo_names.insert("Instrmt_62_set");

      {
        xml_element AID_65{"AID"};
        multiset<string> AID_65_set;
        AID_65.add_attribute("AltID", "SecurityAltID_t_950705625"); // 3
        AID_65_set.insert("SecurityAltID_t_950705625");
        AID_65.add_attribute("AltIDSrc", "1"); // 3
        AID_65_set.insert("1");
        all_values.push_back(AID_65_set);
        all_compo_names.insert("AID_65_set");

        Instrmt_62.add_element(AID_65);
      }
      {
        xml_element SecXML_65{"SecXML"};
        multiset<string> SecXML_65_set;
        SecXML_65.add_attribute("Schema", "SecurityXMLSchema_t_841607868"); // 3
        SecXML_65_set.insert("SecurityXMLSchema_t_841607868");
        all_values.push_back(SecXML_65_set);
        all_compo_names.insert("SecXML_65_set");

        Instrmt_62.add_element(SecXML_65);
      }
      {
        xml_element Evnt_65{"Evnt"};
        multiset<string> Evnt_65_set;
        Evnt_65.add_attribute("EventTyp", "16"); // 3
        Evnt_65_set.insert("16");
        Evnt_65.add_attribute("Dt", "EventDate_t_1455727027"); // 3
        Evnt_65_set.insert("EventDate_t_1455727027");
        Evnt_65.add_attribute("Tm", "EventTime_t_570503672"); // 3
        Evnt_65_set.insert("EventTime_t_570503672");
        Evnt_65.add_attribute("Px", "10060606.580000"); // 3
        Evnt_65_set.insert("10060606.580000");
        Evnt_65.add_attribute("Txt", "EventText_t_525047450"); // 3
        Evnt_65_set.insert("EventText_t_525047450");
        all_values.push_back(Evnt_65_set);
        all_compo_names.insert("Evnt_65_set");

        Instrmt_62.add_element(Evnt_65);
      }
      {
        xml_element Pty_341{"Pty"};
        multiset<string> Pty_341_set;
        Pty_341.add_attribute("ID", "InstrumentPartyID_t_2068931408"); // 3
        Pty_341_set.insert("InstrumentPartyID_t_2068931408");
        Pty_341.add_attribute("Src", "A"); // 3
        Pty_341_set.insert("A");
        Pty_341.add_attribute("R", "29"); // 3
        Pty_341_set.insert("29");
        all_values.push_back(Pty_341_set);
        all_compo_names.insert("Pty_341_set");

        {
          xml_element Sub_341{"Sub"};
          multiset<string> Sub_341_set;
          Sub_341.add_attribute("ID", "InstrumentPartySubID_t_431572502"); // 4
          Sub_341_set.insert("InstrumentPartySubID_t_431572502");
          Sub_341.add_attribute("Typ", "13"); // 4
          Sub_341_set.insert("13");
          all_values.push_back(Sub_341_set);
          all_compo_names.insert("Sub_341_set");

          Pty_341.add_element(Sub_341);
        }
        Instrmt_62.add_element(Pty_341);
      }
      {
        xml_element CmplxEvnt_62{"CmplxEvnt"};
        multiset<string> CmplxEvnt_62_set;
        CmplxEvnt_62.add_attribute("Typ", "1"); // 3
        CmplxEvnt_62_set.insert("1");
        CmplxEvnt_62.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1060416684"); // 3
        CmplxEvnt_62_set.insert("ComplexOptPayoutAmount_t_1060416684");
        CmplxEvnt_62.add_attribute("Px", "1191761.480000"); // 3
        CmplxEvnt_62_set.insert("1191761.480000");
        CmplxEvnt_62.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_62_set.insert("1");
        CmplxEvnt_62.add_attribute("PxBndryPrcsn", "11026320.580000"); // 3
        CmplxEvnt_62_set.insert("11026320.580000");
        CmplxEvnt_62.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_62_set.insert("3");
        CmplxEvnt_62.add_attribute("Cond", "2"); // 3
        CmplxEvnt_62_set.insert("2");
        all_values.push_back(CmplxEvnt_62_set);
        all_compo_names.insert("CmplxEvnt_62_set");

        {
          xml_element EvntDts_62{"EvntDts"};
          multiset<string> EvntDts_62_set;
          EvntDts_62.add_attribute("StartDt", "ComplexEventStartDate_t_764782226"); // 4
          EvntDts_62_set.insert("ComplexEventStartDate_t_764782226");
          EvntDts_62.add_attribute("EndDt", "ComplexEventEndDate_t_944977509"); // 4
          EvntDts_62_set.insert("ComplexEventEndDate_t_944977509");
          all_values.push_back(EvntDts_62_set);
          all_compo_names.insert("EvntDts_62_set");

          {
            xml_element EvntTms_62{"EvntTms"};
            multiset<string> EvntTms_62_set;
            EvntTms_62.add_attribute("StartTm", "751523680"); // 5
            EvntTms_62_set.insert("751523680");
            EvntTms_62.add_attribute("EndTm", "1668993698"); // 5
            EvntTms_62_set.insert("1668993698");
            all_values.push_back(EvntTms_62_set);
            all_compo_names.insert("EvntTms_62_set");

            EvntDts_62.add_element(EvntTms_62);
          }
          CmplxEvnt_62.add_element(EvntDts_62);
        }
        Instrmt_62.add_element(CmplxEvnt_62);
      }
      QuotReq_1.add_element(Instrmt_62);
    }
    {
      xml_element FinDetls_20{"FinDetls"};
      multiset<string> FinDetls_20_set;
      FinDetls_20.add_attribute("AgmtDesc", "AgreementDesc_t_1702334668"); // 2
      FinDetls_20_set.insert("AgreementDesc_t_1702334668");
      FinDetls_20.add_attribute("AgmtID", "AgreementID_t_435897196"); // 2
      FinDetls_20_set.insert("AgreementID_t_435897196");
      FinDetls_20.add_attribute("AgmtDt", "AgreementDate_t_1570168530"); // 2
      FinDetls_20_set.insert("AgreementDate_t_1570168530");
      FinDetls_20.add_attribute("AgmtCcy", "CAN"); // 2
      FinDetls_20_set.insert("CAN");
      FinDetls_20.add_attribute("TrmTyp", "4"); // 2
      FinDetls_20_set.insert("4");
      FinDetls_20.add_attribute("StartDt", "StartDate_t_1602258547"); // 2
      FinDetls_20_set.insert("StartDate_t_1602258547");
      FinDetls_20.add_attribute("EndDt", "EndDate_t_626060394"); // 2
      FinDetls_20_set.insert("EndDate_t_626060394");
      FinDetls_20.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_20_set.insert("2");
      FinDetls_20.add_attribute("MgnRatio", "2963827.680000"); // 2
      FinDetls_20_set.insert("2963827.680000");
      all_values.push_back(FinDetls_20_set);
      all_compo_names.insert("FinDetls_20_set");

      QuotReq_1.add_element(FinDetls_20);
    }
    {
      xml_element Undly_86{"Undly"};
      multiset<string> Undly_86_set;
      Undly_86.add_attribute("Sym", "UnderlyingSymbol_t_29641442"); // 2
      Undly_86_set.insert("UnderlyingSymbol_t_29641442");
      Undly_86.add_attribute("Sfx", "WI"); // 2
      Undly_86_set.insert("WI");
      Undly_86.add_attribute("ID", "UnderlyingSecurityID_t_866886440"); // 2
      Undly_86_set.insert("UnderlyingSecurityID_t_866886440");
      Undly_86.add_attribute("Src", "5"); // 2
      Undly_86_set.insert("5");
      Undly_86.add_attribute("Prod", "9"); // 2
      Undly_86_set.insert("9");
      Undly_86.add_attribute("CFI", "UnderlyingCFICode_t_788334200"); // 2
      Undly_86_set.insert("UnderlyingCFICode_t_788334200");
      Undly_86.add_attribute("SecTyp", "BDN"); // 2
      Undly_86_set.insert("BDN");
      Undly_86.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1803411504"); // 2
      Undly_86_set.insert("UnderlyingSecuritySubType_t_1803411504");
      Undly_86.add_attribute("MMY", "1219906702"); // 2
      Undly_86_set.insert("1219906702");
      Undly_86.add_attribute("Mat", "UnderlyingMaturityDate_t_1460542074"); // 2
      Undly_86_set.insert("UnderlyingMaturityDate_t_1460542074");
      Undly_86.add_attribute("MatTm", "420269965"); // 2
      Undly_86_set.insert("420269965");
      Undly_86.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_132839738"); // 2
      Undly_86_set.insert("UnderlyingCouponPaymentDate_t_132839738");
      Undly_86.add_attribute("RestrctTyp", "MM"); // 2
      Undly_86_set.insert("MM");
      Undly_86.add_attribute("Snrty", "SR"); // 2
      Undly_86_set.insert("SR");
      Undly_86.add_attribute("NotlPctOut", "12354717.960000"); // 2
      Undly_86_set.insert("12354717.960000");
      Undly_86.add_attribute("OrigNotlPctOut", "4542500.940000"); // 2
      Undly_86_set.insert("4542500.940000");
      Undly_86.add_attribute("AttchPnt", "3665835.810000"); // 2
      Undly_86_set.insert("3665835.810000");
      Undly_86.add_attribute("DetchPnt", "20002540.220000"); // 2
      Undly_86_set.insert("20002540.220000");
      Undly_86.add_attribute("Issued", "UnderlyingIssueDate_t_1399227603"); // 2
      Undly_86_set.insert("UnderlyingIssueDate_t_1399227603");
      Undly_86.add_attribute("RepoCollSecTyp", "1118107261"); // 2
      Undly_86_set.insert("1118107261");
      Undly_86.add_attribute("RepoTrm", "1521764072"); // 2
      Undly_86_set.insert("1521764072");
      Undly_86.add_attribute("RepoRt", "9540786.240000"); // 2
      Undly_86_set.insert("9540786.240000");
      Undly_86.add_attribute("Fctr", "15540044.580000"); // 2
      Undly_86_set.insert("15540044.580000");
      Undly_86.add_attribute("CrdRtg", "UnderlyingCreditRating_t_944448955"); // 2
      Undly_86_set.insert("UnderlyingCreditRating_t_944448955");
      Undly_86.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1921469655"); // 2
      Undly_86_set.insert("UnderlyingInstrRegistry_t_1921469655");
      Undly_86.add_attribute("Ctry", "1229359227"); // 2
      Undly_86_set.insert("1229359227");
      Undly_86.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1318867806"); // 2
      Undly_86_set.insert("UnderlyingStateOrProvinceOfIssue_t_1318867806");
      Undly_86.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1376244554"); // 2
      Undly_86_set.insert("UnderlyingLocaleOfIssue_t_1376244554");
      Undly_86.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1855419622"); // 2
      Undly_86_set.insert("UnderlyingRedemptionDate_t_1855419622");
      Undly_86.add_attribute("StrkPx", "7800272.760000"); // 2
      Undly_86_set.insert("7800272.760000");
      Undly_86.add_attribute("StrkCcy", "USD"); // 2
      Undly_86_set.insert("USD");
      Undly_86.add_attribute("OptA", "1696913773"); // 2
      Undly_86_set.insert("1696913773");
      Undly_86.add_attribute("Mult", "3920301.140000"); // 2
      Undly_86_set.insert("3920301.140000");
      Undly_86.add_attribute("MultTyp", "0"); // 2
      Undly_86_set.insert("0");
      Undly_86.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_86_set.insert("3");
      Undly_86.add_attribute("UOM", "Alw"); // 2
      Undly_86_set.insert("Alw");
      Undly_86.add_attribute("UOMQty", "8597802.260000"); // 2
      Undly_86_set.insert("8597802.260000");
      Undly_86.add_attribute("PxUOM", "Bu"); // 2
      Undly_86_set.insert("Bu");
      Undly_86.add_attribute("PxUOMQty", "2527873.680000"); // 2
      Undly_86_set.insert("2527873.680000");
      Undly_86.add_attribute("TmUnit", "Min"); // 2
      Undly_86_set.insert("Min");
      Undly_86.add_attribute("ExerStyle", "2"); // 2
      Undly_86_set.insert("2");
      Undly_86.add_attribute("CpnRt", "3856271.070000"); // 2
      Undly_86_set.insert("3856271.070000");
      Undly_86.add_attribute("Exch", "UnderlyingSecurityExchange_t_1752556875"); // 2
      Undly_86_set.insert("UnderlyingSecurityExchange_t_1752556875");
      Undly_86.add_attribute("Issr", "UnderlyingIssuer_t_1481053926"); // 2
      Undly_86_set.insert("UnderlyingIssuer_t_1481053926");
      Undly_86.add_attribute("EncUndIssrLen", "1621098903"); // 2
      Undly_86_set.insert("1621098903");
      Undly_86.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_59323321"); // 2
      Undly_86_set.insert("EncodedUnderlyingIssuer_t_59323321");
      Undly_86.add_attribute("Desc", "UnderlyingSecurityDesc_t_1847637507"); // 2
      Undly_86_set.insert("UnderlyingSecurityDesc_t_1847637507");
      Undly_86.add_attribute("EncUndSecDescLen", "1473869278"); // 2
      Undly_86_set.insert("1473869278");
      Undly_86.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1458550925"); // 2
      Undly_86_set.insert("EncodedUnderlyingSecurityDesc_t_1458550925");
      Undly_86.add_attribute("CPPgm", "UnderlyingCPProgram_t_818261120"); // 2
      Undly_86_set.insert("UnderlyingCPProgram_t_818261120");
      Undly_86.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_848149702"); // 2
      Undly_86_set.insert("UnderlyingCPRegType_t_848149702");
      Undly_86.add_attribute("AllocPct", "2651459.010000"); // 2
      Undly_86_set.insert("2651459.010000");
      Undly_86.add_attribute("Ccy", "CAN"); // 2
      Undly_86_set.insert("CAN");
      Undly_86.add_attribute("Qty", "391319.080000"); // 2
      Undly_86_set.insert("391319.080000");
      Undly_86.add_attribute("SettlTyp", "4"); // 2
      Undly_86_set.insert("4");
      Undly_86.add_attribute("CashAmt", "UnderlyingCashAmount_t_963982816"); // 2
      Undly_86_set.insert("UnderlyingCashAmount_t_963982816");
      Undly_86.add_attribute("CashTyp", "FIXED"); // 2
      Undly_86_set.insert("FIXED");
      Undly_86.add_attribute("Px", "11620771.320000"); // 2
      Undly_86_set.insert("11620771.320000");
      Undly_86.add_attribute("DirtPx", "17440100.920000"); // 2
      Undly_86_set.insert("17440100.920000");
      Undly_86.add_attribute("EndPx", "9405201.370000"); // 2
      Undly_86_set.insert("9405201.370000");
      Undly_86.add_attribute("StartVal", "UnderlyingStartValue_t_899654548"); // 2
      Undly_86_set.insert("UnderlyingStartValue_t_899654548");
      Undly_86.add_attribute("CurVal", "UnderlyingCurrentValue_t_1293440218"); // 2
      Undly_86_set.insert("UnderlyingCurrentValue_t_1293440218");
      Undly_86.add_attribute("EndVal", "UnderlyingEndValue_t_1332550251"); // 2
      Undly_86_set.insert("UnderlyingEndValue_t_1332550251");
      Undly_86.add_attribute("AdjQty", "16729340.650000"); // 2
      Undly_86_set.insert("16729340.650000");
      Undly_86.add_attribute("FxRate", "1373206.430000"); // 2
      Undly_86_set.insert("1373206.430000");
      Undly_86.add_attribute("FxRateCalc", "M"); // 2
      Undly_86_set.insert("M");
      Undly_86.add_attribute("CapValu", "UnderlyingCapValue_t_385230644"); // 2
      Undly_86_set.insert("UnderlyingCapValue_t_385230644");
      Undly_86.add_attribute("SetMeth", "UnderlyingSettlMethod_t_784612572"); // 2
      Undly_86_set.insert("UnderlyingSettlMethod_t_784612572");
      Undly_86.add_attribute("PutCall", "618218286"); // 2
      Undly_86_set.insert("618218286");
      all_values.push_back(Undly_86_set);
      all_compo_names.insert("Undly_86_set");

      {
        xml_element UndAID_86{"UndAID"};
        multiset<string> UndAID_86_set;
        UndAID_86.add_attribute("AltID", "UnderlyingSecurityAltID_t_558069297"); // 3
        UndAID_86_set.insert("UnderlyingSecurityAltID_t_558069297");
        UndAID_86.add_attribute("AltIDSrc", "B"); // 3
        UndAID_86_set.insert("B");
        all_values.push_back(UndAID_86_set);
        all_compo_names.insert("UndAID_86_set");

        Undly_86.add_element(UndAID_86);
      }
      {
        xml_element Stip_127{"Stip"};
        multiset<string> Stip_127_set;
        Stip_127.add_attribute("Typ", "PPL"); // 3
        Stip_127_set.insert("PPL");
        Stip_127.add_attribute("Val", "UnderlyingStipValue_t_163142524"); // 3
        Stip_127_set.insert("UnderlyingStipValue_t_163142524");
        all_values.push_back(Stip_127_set);
        all_compo_names.insert("Stip_127_set");

        Undly_86.add_element(Stip_127);
      }
      {
        xml_element Pty_342{"Pty"};
        multiset<string> Pty_342_set;
        Pty_342.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1185744744"); // 3
        Pty_342_set.insert("UnderlyingInstrumentPartyID_t_1185744744");
        Pty_342.add_attribute("Src", "C"); // 3
        Pty_342_set.insert("C");
        Pty_342.add_attribute("R", "80"); // 3
        Pty_342_set.insert("80");
        all_values.push_back(Pty_342_set);
        all_compo_names.insert("Pty_342_set");

        {
          xml_element Sub_342{"Sub"};
          multiset<string> Sub_342_set;
          Sub_342.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_885898603"); // 4
          Sub_342_set.insert("UnderlyingInstrumentPartySubID_t_885898603");
          Sub_342.add_attribute("Typ", "31"); // 4
          Sub_342_set.insert("31");
          all_values.push_back(Sub_342_set);
          all_compo_names.insert("Sub_342_set");

          Pty_342.add_element(Sub_342);
        }
        Undly_86.add_element(Pty_342);
      }
      QuotReq_1.add_element(Undly_86);
    }
    {
      xml_element OrdQty_21{"OrdQty"};
      multiset<string> OrdQty_21_set;
      OrdQty_21.add_attribute("Qty", "16810167.710000"); // 2
      OrdQty_21_set.insert("16810167.710000");
      OrdQty_21.add_attribute("Cash", "17041597.230000"); // 2
      OrdQty_21_set.insert("17041597.230000");
      OrdQty_21.add_attribute("Pct", "6519959.810000"); // 2
      OrdQty_21_set.insert("6519959.810000");
      OrdQty_21.add_attribute("RndDir", "2"); // 2
      OrdQty_21_set.insert("2");
      OrdQty_21.add_attribute("RndMod", "19289416.540000"); // 2
      OrdQty_21_set.insert("19289416.540000");
      all_values.push_back(OrdQty_21_set);
      all_compo_names.insert("OrdQty_21_set");

      QuotReq_1.add_element(OrdQty_21);
    }
    {
      xml_element RtSrc_14{"RtSrc"};
      multiset<string> RtSrc_14_set;
      RtSrc_14.add_attribute("RtSrc", "99"); // 2
      RtSrc_14_set.insert("99");
      RtSrc_14.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_14_set.insert("0");
      RtSrc_14.add_attribute("RefPg", "ReferencePage_t_1235599164"); // 2
      RtSrc_14_set.insert("ReferencePage_t_1235599164");
      all_values.push_back(RtSrc_14_set);
      all_compo_names.insert("RtSrc_14_set");

      QuotReq_1.add_element(RtSrc_14);
    }
    {
      xml_element Stip_128{"Stip"};
      multiset<string> Stip_128_set;
      Stip_128.add_attribute("Typ", "SECTYPE"); // 2
      Stip_128_set.insert("SECTYPE");
      Stip_128.add_attribute("Val", "StipulationValue_t_1253187394"); // 2
      Stip_128_set.insert("StipulationValue_t_1253187394");
      all_values.push_back(Stip_128_set);
      all_compo_names.insert("Stip_128_set");

      QuotReq_1.add_element(Stip_128);
    }
    {
      xml_element Leg_73{"Leg"};
      multiset<string> Leg_73_set;
      Leg_73.add_attribute("Qty", "2501926.480000"); // 2
      Leg_73_set.insert("2501926.480000");
      Leg_73.add_attribute("OrdQty", "8576202.510000"); // 2
      Leg_73_set.insert("8576202.510000");
      Leg_73.add_attribute("SwapTyp", "5"); // 2
      Leg_73_set.insert("5");
      Leg_73.add_attribute("SettlTyp", "8"); // 2
      Leg_73_set.insert("8");
      Leg_73.add_attribute("SettlDt", "LegSettlDate_t_3576821"); // 2
      Leg_73_set.insert("LegSettlDate_t_3576821");
      Leg_73.add_attribute("RefID", "LegRefID_t_1378774135"); // 2
      Leg_73_set.insert("LegRefID_t_1378774135");
      all_values.push_back(Leg_73_set);
      all_compo_names.insert("Leg_73_set");

      {
        xml_element Leg_74{"Leg"};
        multiset<string> Leg_74_set;
        Leg_74.add_attribute("Sym", "LegSymbol_t_675297614"); // 3
        Leg_74_set.insert("LegSymbol_t_675297614");
        Leg_74.add_attribute("Sfx", "CD"); // 3
        Leg_74_set.insert("CD");
        Leg_74.add_attribute("ID", "LegSecurityID_t_1744205053"); // 3
        Leg_74_set.insert("LegSecurityID_t_1744205053");
        Leg_74.add_attribute("Src", "K"); // 3
        Leg_74_set.insert("K");
        Leg_74.add_attribute("Prod", "6"); // 3
        Leg_74_set.insert("6");
        Leg_74.add_attribute("CFI", "LegCFICode_t_214939691"); // 3
        Leg_74_set.insert("LegCFICode_t_214939691");
        Leg_74.add_attribute("SecTyp", "PEF"); // 3
        Leg_74_set.insert("PEF");
        Leg_74.add_attribute("SecSubTyp", "LegSecuritySubType_t_630200854"); // 3
        Leg_74_set.insert("LegSecuritySubType_t_630200854");
        Leg_74.add_attribute("MMY", "1218785085"); // 3
        Leg_74_set.insert("1218785085");
        Leg_74.add_attribute("Mat", "LegMaturityDate_t_1781740079"); // 3
        Leg_74_set.insert("LegMaturityDate_t_1781740079");
        Leg_74.add_attribute("MatTm", "1815945598"); // 3
        Leg_74_set.insert("1815945598");
        Leg_74.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1696245734"); // 3
        Leg_74_set.insert("LegCouponPaymentDate_t_1696245734");
        Leg_74.add_attribute("Issued", "LegIssueDate_t_2004205925"); // 3
        Leg_74_set.insert("LegIssueDate_t_2004205925");
        Leg_74.add_attribute("RepoCollSecTyp", "554360553"); // 3
        Leg_74_set.insert("554360553");
        Leg_74.add_attribute("RepoTrm", "1500092013"); // 3
        Leg_74_set.insert("1500092013");
        Leg_74.add_attribute("RepoRt", "15377390.480000"); // 3
        Leg_74_set.insert("15377390.480000");
        Leg_74.add_attribute("Fctr", "1110366.290000"); // 3
        Leg_74_set.insert("1110366.290000");
        Leg_74.add_attribute("CrdRtg", "LegCreditRating_t_4604346"); // 3
        Leg_74_set.insert("LegCreditRating_t_4604346");
        Leg_74.add_attribute("Rgstry", "LegInstrRegistry_t_1336418072"); // 3
        Leg_74_set.insert("LegInstrRegistry_t_1336418072");
        Leg_74.add_attribute("Ctry", "2039978283"); // 3
        Leg_74_set.insert("2039978283");
        Leg_74.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_301715337"); // 3
        Leg_74_set.insert("LegStateOrProvinceOfIssue_t_301715337");
        Leg_74.add_attribute("Lcl", "LegLocaleOfIssue_t_1174229004"); // 3
        Leg_74_set.insert("LegLocaleOfIssue_t_1174229004");
        Leg_74.add_attribute("Redeem", "LegRedemptionDate_t_1128093799"); // 3
        Leg_74_set.insert("LegRedemptionDate_t_1128093799");
        Leg_74.add_attribute("Strk", "15628091.440000"); // 3
        Leg_74_set.insert("15628091.440000");
        Leg_74.add_attribute("StrkCcy", "CAN"); // 3
        Leg_74_set.insert("CAN");
        Leg_74.add_attribute("OptA", "272945748"); // 3
        Leg_74_set.insert("272945748");
        Leg_74.add_attribute("Cmult", "3261566.340000"); // 3
        Leg_74_set.insert("3261566.340000");
        Leg_74.add_attribute("MultTyp", "2"); // 3
        Leg_74_set.insert("2");
        Leg_74.add_attribute("FlowSchedTyp", "4"); // 3
        Leg_74_set.insert("4");
        Leg_74.add_attribute("UOM", "USD"); // 3
        Leg_74_set.insert("USD");
        Leg_74.add_attribute("UOMQty", "10559476.090000"); // 3
        Leg_74_set.insert("10559476.090000");
        Leg_74.add_attribute("PxUOM", "tn"); // 3
        Leg_74_set.insert("tn");
        Leg_74.add_attribute("PxUOMQty", "13016521.740000"); // 3
        Leg_74_set.insert("13016521.740000");
        Leg_74.add_attribute("TmUnit", "H"); // 3
        Leg_74_set.insert("H");
        Leg_74.add_attribute("ExerStyle", "2"); // 3
        Leg_74_set.insert("2");
        Leg_74.add_attribute("CpnRt", "15165918.660000"); // 3
        Leg_74_set.insert("15165918.660000");
        Leg_74.add_attribute("Exch", "LegSecurityExchange_t_1587589774"); // 3
        Leg_74_set.insert("LegSecurityExchange_t_1587589774");
        Leg_74.add_attribute("Issr", "LegIssuer_t_1973130925"); // 3
        Leg_74_set.insert("LegIssuer_t_1973130925");
        Leg_74.add_attribute("EncLegIssrLen", "587893303"); // 3
        Leg_74_set.insert("587893303");
        Leg_74.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1221846206"); // 3
        Leg_74_set.insert("EncodedLegIssuer_t_1221846206");
        Leg_74.add_attribute("Desc", "LegSecurityDesc_t_1641592875"); // 3
        Leg_74_set.insert("LegSecurityDesc_t_1641592875");
        Leg_74.add_attribute("EncLegSecDescLen", "136655389"); // 3
        Leg_74_set.insert("136655389");
        Leg_74.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1078568483"); // 3
        Leg_74_set.insert("EncodedLegSecurityDesc_t_1078568483");
        Leg_74.add_attribute("RatioQty", "484697.810000"); // 3
        Leg_74_set.insert("484697.810000");
        Leg_74.add_attribute("Side", "B"); // 3
        Leg_74_set.insert("B");
        Leg_74.add_attribute("Ccy", "JPY"); // 3
        Leg_74_set.insert("JPY");
        Leg_74.add_attribute("Pool", "LegPool_t_1641351748"); // 3
        Leg_74_set.insert("LegPool_t_1641351748");
        Leg_74.add_attribute("Dated", "LegDatedDate_t_1805241956"); // 3
        Leg_74_set.insert("LegDatedDate_t_1805241956");
        Leg_74.add_attribute("CSetMo", "52001045"); // 3
        Leg_74_set.insert("52001045");
        Leg_74.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1943067086"); // 3
        Leg_74_set.insert("LegInterestAccrualDate_t_1943067086");
        Leg_74.add_attribute("PutCall", "831987313"); // 3
        Leg_74_set.insert("831987313");
        Leg_74.add_attribute("LegOptionRatio", "11800948.440000"); // 3
        Leg_74_set.insert("11800948.440000");
        Leg_74.add_attribute("Px", "13583925.820000"); // 3
        Leg_74_set.insert("13583925.820000");
        all_values.push_back(Leg_74_set);
        all_compo_names.insert("Leg_74_set");

        {
          xml_element LegAID_72{"LegAID"};
          multiset<string> LegAID_72_set;
          LegAID_72.add_attribute("SecAltID", "LegSecurityAltID_t_1111920064"); // 4
          LegAID_72_set.insert("LegSecurityAltID_t_1111920064");
          LegAID_72.add_attribute("SecAltIDSrc", "E"); // 4
          LegAID_72_set.insert("E");
          all_values.push_back(LegAID_72_set);
          all_compo_names.insert("LegAID_72_set");

          Leg_74.add_element(LegAID_72);
        }
        Leg_73.add_element(Leg_74);
      }
      {
        xml_element Stip_129{"Stip"};
        multiset<string> Stip_129_set;
        Stip_129.add_attribute("StipTyp", "CUSTOMDATE"); // 3
        Stip_129_set.insert("CUSTOMDATE");
        Stip_129.add_attribute("StipVal", "LegStipulationValue_t_1438076698"); // 3
        Stip_129_set.insert("LegStipulationValue_t_1438076698");
        all_values.push_back(Stip_129_set);
        all_compo_names.insert("Stip_129_set");

        Leg_73.add_element(Stip_129);
      }
      {
        xml_element Pty_343{"Pty"};
        multiset<string> Pty_343_set;
        Pty_343.add_attribute("ID", "NestedPartyID_t_791547638"); // 3
        Pty_343_set.insert("NestedPartyID_t_791547638");
        Pty_343.add_attribute("Src", "5"); // 3
        Pty_343_set.insert("5");
        Pty_343.add_attribute("R", "13"); // 3
        Pty_343_set.insert("13");
        all_values.push_back(Pty_343_set);
        all_compo_names.insert("Pty_343_set");

        {
          xml_element Sub_343{"Sub"};
          multiset<string> Sub_343_set;
          Sub_343.add_attribute("ID", "NestedPartySubID_t_1847495248"); // 4
          Sub_343_set.insert("NestedPartySubID_t_1847495248");
          Sub_343.add_attribute("Typ", "26"); // 4
          Sub_343_set.insert("26");
          all_values.push_back(Sub_343_set);
          all_compo_names.insert("Sub_343_set");

          Pty_343.add_element(Sub_343);
        }
        Leg_73.add_element(Pty_343);
      }
      {
        xml_element BnchmkCurve_2{"BnchmkCurve"};
        multiset<string> BnchmkCurve_2_set;
        BnchmkCurve_2.add_attribute("Ccy", "EUR"); // 3
        BnchmkCurve_2_set.insert("EUR");
        BnchmkCurve_2.add_attribute("Name", "Pfandbriefe"); // 3
        BnchmkCurve_2_set.insert("Pfandbriefe");
        BnchmkCurve_2.add_attribute("Point", "LegBenchmarkCurvePoint_t_1666284212"); // 3
        BnchmkCurve_2_set.insert("LegBenchmarkCurvePoint_t_1666284212");
        BnchmkCurve_2.add_attribute("Px", "12565935.940000"); // 3
        BnchmkCurve_2_set.insert("12565935.940000");
        BnchmkCurve_2.add_attribute("PxTyp", "1346374633"); // 3
        BnchmkCurve_2_set.insert("1346374633");
        all_values.push_back(BnchmkCurve_2_set);
        all_compo_names.insert("BnchmkCurve_2_set");

        Leg_73.add_element(BnchmkCurve_2);
      }
      QuotReq_1.add_element(Leg_73);
    }
    {
      xml_element QuotQual_2{"QuotQual"};
      multiset<string> QuotQual_2_set;
      QuotQual_2.add_attribute("Qual", "B"); // 2
      QuotQual_2_set.insert("B");
      all_values.push_back(QuotQual_2_set);
      all_compo_names.insert("QuotQual_2_set");

      QuotReq_1.add_element(QuotQual_2);
    }
    {
      xml_element SprdBnchmkCurve_23{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_23_set;
      SprdBnchmkCurve_23.add_attribute("Spread", "3309561.520000"); // 2
      SprdBnchmkCurve_23_set.insert("3309561.520000");
      SprdBnchmkCurve_23.add_attribute("Ccy", "GBP"); // 2
      SprdBnchmkCurve_23_set.insert("GBP");
      SprdBnchmkCurve_23.add_attribute("Name", "FutureSWAP"); // 2
      SprdBnchmkCurve_23_set.insert("FutureSWAP");
      SprdBnchmkCurve_23.add_attribute("Point", "BenchmarkCurvePoint_t_888953642"); // 2
      SprdBnchmkCurve_23_set.insert("BenchmarkCurvePoint_t_888953642");
      SprdBnchmkCurve_23.add_attribute("Px", "18800966.580000"); // 2
      SprdBnchmkCurve_23_set.insert("18800966.580000");
      SprdBnchmkCurve_23.add_attribute("PxTyp", "8"); // 2
      SprdBnchmkCurve_23_set.insert("8");
      SprdBnchmkCurve_23.add_attribute("SecID", "BenchmarkSecurityID_t_1048460052"); // 2
      SprdBnchmkCurve_23_set.insert("BenchmarkSecurityID_t_1048460052");
      SprdBnchmkCurve_23.add_attribute("SecIDSrc", "E"); // 2
      SprdBnchmkCurve_23_set.insert("E");
      all_values.push_back(SprdBnchmkCurve_23_set);
      all_compo_names.insert("SprdBnchmkCurve_23_set");

      QuotReq_1.add_element(SprdBnchmkCurve_23);
    }
    {
      xml_element Yield_18{"Yield"};
      multiset<string> Yield_18_set;
      Yield_18.add_attribute("Typ", "MATURITY"); // 2
      Yield_18_set.insert("MATURITY");
      Yield_18.add_attribute("Yld", "11004610.970000"); // 2
      Yield_18_set.insert("11004610.970000");
      Yield_18.add_attribute("CalcDt", "YieldCalcDate_t_1169548197"); // 2
      Yield_18_set.insert("YieldCalcDate_t_1169548197");
      Yield_18.add_attribute("RedDt", "YieldRedemptionDate_t_220610493"); // 2
      Yield_18_set.insert("YieldRedemptionDate_t_220610493");
      Yield_18.add_attribute("RedPx", "1330722.930000"); // 2
      Yield_18_set.insert("1330722.930000");
      Yield_18.add_attribute("RedPxTyp", "4"); // 2
      Yield_18_set.insert("4");
      all_values.push_back(Yield_18_set);
      all_compo_names.insert("Yield_18_set");

      QuotReq_1.add_element(Yield_18);
    }
    {
      xml_element Pty_344{"Pty"};
      multiset<string> Pty_344_set;
      Pty_344.add_attribute("ID", "PartyID_t_1332530557"); // 2
      Pty_344_set.insert("PartyID_t_1332530557");
      Pty_344.add_attribute("Src", "1"); // 2
      Pty_344_set.insert("1");
      Pty_344.add_attribute("R", "84"); // 2
      Pty_344_set.insert("84");
      all_values.push_back(Pty_344_set);
      all_compo_names.insert("Pty_344_set");

      {
        xml_element Sub_344{"Sub"};
        multiset<string> Sub_344_set;
        Sub_344.add_attribute("ID", "PartySubID_t_623123607"); // 3
        Sub_344_set.insert("PartySubID_t_623123607");
        Sub_344.add_attribute("Typ", "25"); // 3
        Sub_344_set.insert("25");
        all_values.push_back(Sub_344_set);
        all_compo_names.insert("Sub_344_set");

        Pty_344.add_element(Sub_344);
      }
      QuotReq_1.add_element(Pty_344);
    }
    elt.add_element(QuotReq_1);
  } // end QuotReq
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
