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
  elt.add_attribute("ReqID", "QuoteReqID_t_40887833"); // 0
  QuoteRequest_message_t_0.insert("QuoteReqID_t_40887833");
  elt.add_attribute("RFQReqID", "RFQReqID_t_1157832714"); // 0
  QuoteRequest_message_t_0.insert("RFQReqID_t_1157832714");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1429161475"); // 0
  QuoteRequest_message_t_0.insert("ClOrdID_t_1429161475");
  elt.add_attribute("BkngTyp", "2"); // 0
  QuoteRequest_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "A"); // 0
  QuoteRequest_message_t_0.insert("A");
  elt.add_attribute("Rstctions", "A"); // 0
  QuoteRequest_message_t_0.insert("A");
  elt.add_attribute("PrvtQt", "true"); // 0
  QuoteRequest_message_t_0.insert("true");
  elt.add_attribute("RspdntTyp", "1"); // 0
  QuoteRequest_message_t_0.insert("1");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  QuoteRequest_message_t_0.insert("false");
  elt.add_attribute("Txt", "Text_t_2069382307"); // 0
  QuoteRequest_message_t_0.insert("Text_t_2069382307");
  elt.add_attribute("EncTxtLen", "1789590421"); // 0
  QuoteRequest_message_t_0.insert("1789590421");
  elt.add_attribute("EncTxt", "EncodedText_t_1218773558"); // 0
  QuoteRequest_message_t_0.insert("EncodedText_t_1218773558");
  all_values.push_back(QuoteRequest_message_t_0);
  all_compo_names.insert("QuoteRequest_message_t");

  { // Hdr
    xml_element Hdr_70{"Hdr"};
    multiset<string> Hdr_70_set;
    Hdr_70.add_attribute("SeqNum", "1120777195"); // 1
    Hdr_70_set.insert("1120777195");
    Hdr_70.add_attribute("SID", "SenderCompID_t_1471521762"); // 1
    Hdr_70_set.insert("SenderCompID_t_1471521762");
    Hdr_70.add_attribute("TID", "TargetCompID_t_1990608552"); // 1
    Hdr_70_set.insert("TargetCompID_t_1990608552");
    Hdr_70.add_attribute("OBID", "OnBehalfOfCompID_t_411796790"); // 1
    Hdr_70_set.insert("OnBehalfOfCompID_t_411796790");
    Hdr_70.add_attribute("D2ID", "DeliverToCompID_t_2021197382"); // 1
    Hdr_70_set.insert("DeliverToCompID_t_2021197382");
    Hdr_70.add_attribute("SSub", "SenderSubID_t_1900444131"); // 1
    Hdr_70_set.insert("SenderSubID_t_1900444131");
    Hdr_70.add_attribute("SLoc", "SenderLocationID_t_279333864"); // 1
    Hdr_70_set.insert("SenderLocationID_t_279333864");
    Hdr_70.add_attribute("TSub", "TargetSubID_t_1028637274"); // 1
    Hdr_70_set.insert("TargetSubID_t_1028637274");
    Hdr_70.add_attribute("TLoc", "TargetLocationID_t_610128713"); // 1
    Hdr_70_set.insert("TargetLocationID_t_610128713");
    Hdr_70.add_attribute("OBSub", "OnBehalfOfSubID_t_1634866798"); // 1
    Hdr_70_set.insert("OnBehalfOfSubID_t_1634866798");
    Hdr_70.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1993660149"); // 1
    Hdr_70_set.insert("OnBehalfOfLocationID_t_1993660149");
    Hdr_70.add_attribute("D2Sub", "DeliverToSubID_t_343743343"); // 1
    Hdr_70_set.insert("DeliverToSubID_t_343743343");
    Hdr_70.add_attribute("D2Loc", "DeliverToLocationID_t_358520232"); // 1
    Hdr_70_set.insert("DeliverToLocationID_t_358520232");
    Hdr_70.add_attribute("PosDup", "Y"); // 1
    Hdr_70_set.insert("Y");
    Hdr_70.add_attribute("PosRsnd", "Y"); // 1
    Hdr_70_set.insert("Y");
    Hdr_70.add_attribute("Snt", "SendingTime_t_1087592896"); // 1
    Hdr_70_set.insert("SendingTime_t_1087592896");
    Hdr_70.add_attribute("OrigSnt", "OrigSendingTime_t_781561941"); // 1
    Hdr_70_set.insert("OrigSendingTime_t_781561941");
    Hdr_70.add_attribute("MsgEncd", "MessageEncoding_t_902418064"); // 1
    Hdr_70_set.insert("MessageEncoding_t_902418064");
    all_values.push_back(Hdr_70_set);
    all_compo_names.insert("Hdr_70_set");

    {
      xml_element Hop_70{"Hop"};
      multiset<string> Hop_70_set;
      Hop_70.add_attribute("ID", "HopCompID_t_456908925"); // 2
      Hop_70_set.insert("HopCompID_t_456908925");
      Hop_70.add_attribute("Ref", "822449774"); // 2
      Hop_70_set.insert("822449774");
      Hop_70.add_attribute("Snt", "HopSendingTime_t_2060250779"); // 2
      Hop_70_set.insert("HopSendingTime_t_2060250779");
      all_values.push_back(Hop_70_set);
      all_compo_names.insert("Hop_70_set");

      Hdr_70.add_element(Hop_70);
    }
    elt.add_element(Hdr_70);
  } // end Hdr
  { // Pty
    xml_element Pty_310{"Pty"};
    multiset<string> Pty_310_set;
    Pty_310.add_attribute("ID", "RootPartyID_t_871921246"); // 1
    Pty_310_set.insert("RootPartyID_t_871921246");
    Pty_310.add_attribute("Src", "G"); // 1
    Pty_310_set.insert("G");
    Pty_310.add_attribute("R", "45"); // 1
    Pty_310_set.insert("45");
    all_values.push_back(Pty_310_set);
    all_compo_names.insert("Pty_310_set");

    {
      xml_element Sub_310{"Sub"};
      multiset<string> Sub_310_set;
      Sub_310.add_attribute("ID", "RootPartySubID_t_1701320948"); // 2
      Sub_310_set.insert("RootPartySubID_t_1701320948");
      Sub_310.add_attribute("Typ", "20"); // 2
      Sub_310_set.insert("20");
      all_values.push_back(Sub_310_set);
      all_compo_names.insert("Sub_310_set");

      Pty_310.add_element(Sub_310);
    }
    elt.add_element(Pty_310);
  } // end Pty
  { // Pty
    xml_element Pty_311{"Pty"};
    multiset<string> Pty_311_set;
    Pty_311.add_attribute("ID", "RootPartyID_t_2033244611"); // 1
    Pty_311_set.insert("RootPartyID_t_2033244611");
    Pty_311.add_attribute("Src", "2"); // 1
    Pty_311_set.insert("2");
    Pty_311.add_attribute("R", "66"); // 1
    Pty_311_set.insert("66");
    all_values.push_back(Pty_311_set);
    all_compo_names.insert("Pty_311_set");

    {
      xml_element Sub_311{"Sub"};
      multiset<string> Sub_311_set;
      Sub_311.add_attribute("ID", "RootPartySubID_t_1104534522"); // 2
      Sub_311_set.insert("RootPartySubID_t_1104534522");
      Sub_311.add_attribute("Typ", "15"); // 2
      Sub_311_set.insert("15");
      all_values.push_back(Sub_311_set);
      all_compo_names.insert("Sub_311_set");

      Pty_311.add_element(Sub_311);
    }
    elt.add_element(Pty_311);
  } // end Pty
  { // Pty
    xml_element Pty_312{"Pty"};
    multiset<string> Pty_312_set;
    Pty_312.add_attribute("ID", "RootPartyID_t_1126737567"); // 1
    Pty_312_set.insert("RootPartyID_t_1126737567");
    Pty_312.add_attribute("Src", "H"); // 1
    Pty_312_set.insert("H");
    Pty_312.add_attribute("R", "70"); // 1
    Pty_312_set.insert("70");
    all_values.push_back(Pty_312_set);
    all_compo_names.insert("Pty_312_set");

    {
      xml_element Sub_312{"Sub"};
      multiset<string> Sub_312_set;
      Sub_312.add_attribute("ID", "RootPartySubID_t_1000451301"); // 2
      Sub_312_set.insert("RootPartySubID_t_1000451301");
      Sub_312.add_attribute("Typ", "2"); // 2
      Sub_312_set.insert("2");
      all_values.push_back(Sub_312_set);
      all_compo_names.insert("Sub_312_set");

      Pty_312.add_element(Sub_312);
    }
    elt.add_element(Pty_312);
  } // end Pty
  { // QuotReq
    xml_element QuotReq_0{"QuotReq"};
    multiset<string> QuotReq_0_set;
    QuotReq_0.add_attribute("PrevClsPx", "20290885.750000"); // 1
    QuotReq_0_set.insert("20290885.750000");
    QuotReq_0.add_attribute("ReqTyp", "2"); // 1
    QuotReq_0_set.insert("2");
    QuotReq_0.add_attribute("Typ", "3"); // 1
    QuotReq_0_set.insert("3");
    QuotReq_0.add_attribute("SesID", "4"); // 1
    QuotReq_0_set.insert("4");
    QuotReq_0.add_attribute("SesSub", "2"); // 1
    QuotReq_0_set.insert("2");
    QuotReq_0.add_attribute("OrignDt", "TradeOriginationDate_t_1133547191"); // 1
    QuotReq_0_set.insert("TradeOriginationDate_t_1133547191");
    QuotReq_0.add_attribute("Side", "7"); // 1
    QuotReq_0_set.insert("7");
    QuotReq_0.add_attribute("QtyTyp", "1"); // 1
    QuotReq_0_set.insert("1");
    QuotReq_0.add_attribute("MinQty", "736564.390000"); // 1
    QuotReq_0_set.insert("736564.390000");
    QuotReq_0.add_attribute("SettlTyp", "7"); // 1
    QuotReq_0_set.insert("7");
    QuotReq_0.add_attribute("SettlDt", "SettlDate_t_1392237695"); // 1
    QuotReq_0_set.insert("SettlDate_t_1392237695");
    QuotReq_0.add_attribute("SettlDt2", "SettlDate2_t_530565365"); // 1
    QuotReq_0_set.insert("SettlDate2_t_530565365");
    QuotReq_0.add_attribute("Qty2", "5931282.970000"); // 1
    QuotReq_0_set.insert("5931282.970000");
    QuotReq_0.add_attribute("Ccy", "GBP"); // 1
    QuotReq_0_set.insert("GBP");
    QuotReq_0.add_attribute("SettlCcy", "JPY"); // 1
    QuotReq_0_set.insert("JPY");
    QuotReq_0.add_attribute("Acct", "Account_t_1446897260"); // 1
    QuotReq_0_set.insert("Account_t_1446897260");
    QuotReq_0.add_attribute("AcctIDSrc", "99"); // 1
    QuotReq_0_set.insert("99");
    QuotReq_0.add_attribute("AcctTyp", "4"); // 1
    QuotReq_0_set.insert("4");
    QuotReq_0.add_attribute("QuotPxTyp", "4"); // 1
    QuotReq_0_set.insert("4");
    QuotReq_0.add_attribute("OrdTyp", "C"); // 1
    QuotReq_0_set.insert("C");
    QuotReq_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_531629206"); // 1
    QuotReq_0_set.insert("ValidUntilTime_t_531629206");
    QuotReq_0.add_attribute("ExpireTm", "ExpireTime_t_289709098"); // 1
    QuotReq_0_set.insert("ExpireTime_t_289709098");
    QuotReq_0.add_attribute("TxnTm", "TransactTime_t_1091135957"); // 1
    QuotReq_0_set.insert("TransactTime_t_1091135957");
    QuotReq_0.add_attribute("PxTyp", "6"); // 1
    QuotReq_0_set.insert("6");
    QuotReq_0.add_attribute("Px", "12373685.240000"); // 1
    QuotReq_0_set.insert("12373685.240000");
    QuotReq_0.add_attribute("Px2", "20994459.020000"); // 1
    QuotReq_0_set.insert("20994459.020000");
    all_values.push_back(QuotReq_0_set);
    all_compo_names.insert("QuotReq_0_set");

    {
      xml_element Instrmt_59{"Instrmt"};
      multiset<string> Instrmt_59_set;
      Instrmt_59.add_attribute("Sym", "Symbol_t_511334426"); // 2
      Instrmt_59_set.insert("Symbol_t_511334426");
      Instrmt_59.add_attribute("Sfx", "CD"); // 2
      Instrmt_59_set.insert("CD");
      Instrmt_59.add_attribute("ID", "SecurityID_t_1239606063"); // 2
      Instrmt_59_set.insert("SecurityID_t_1239606063");
      Instrmt_59.add_attribute("Src", "G"); // 2
      Instrmt_59_set.insert("G");
      Instrmt_59.add_attribute("Prod", "6"); // 2
      Instrmt_59_set.insert("6");
      Instrmt_59.add_attribute("ProdCmplx", "ProductComplex_t_2014633022"); // 2
      Instrmt_59_set.insert("ProductComplex_t_2014633022");
      Instrmt_59.add_attribute("SecGrp", "SecurityGroup_t_120720782"); // 2
      Instrmt_59_set.insert("SecurityGroup_t_120720782");
      Instrmt_59.add_attribute("CFI", "CFICode_t_608261727"); // 2
      Instrmt_59_set.insert("CFICode_t_608261727");
      Instrmt_59.add_attribute("SecTyp", "MPO"); // 2
      Instrmt_59_set.insert("MPO");
      Instrmt_59.add_attribute("SubTyp", "SecuritySubType_t_1257321012"); // 2
      Instrmt_59_set.insert("SecuritySubType_t_1257321012");
      Instrmt_59.add_attribute("MMY", "1098081358"); // 2
      Instrmt_59_set.insert("1098081358");
      Instrmt_59.add_attribute("MatDt", "MaturityDate_t_1074353004"); // 2
      Instrmt_59_set.insert("MaturityDate_t_1074353004");
      Instrmt_59.add_attribute("MatTm", "1027999535"); // 2
      Instrmt_59_set.insert("1027999535");
      Instrmt_59.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_342835405"); // 2
      Instrmt_59_set.insert("SettleOnOpenFlag_t_342835405");
      Instrmt_59.add_attribute("AsgnMeth", "1604918369"); // 2
      Instrmt_59_set.insert("1604918369");
      Instrmt_59.add_attribute("Status", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CpnPmt", "CouponPaymentDate_t_1647840232"); // 2
      Instrmt_59_set.insert("CouponPaymentDate_t_1647840232");
      Instrmt_59.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_59_set.insert("XR");
      Instrmt_59.add_attribute("Snrty", "SD"); // 2
      Instrmt_59_set.insert("SD");
      Instrmt_59.add_attribute("NotlPctOut", "3636609.540000"); // 2
      Instrmt_59_set.insert("3636609.540000");
      Instrmt_59.add_attribute("OrigNotlPctOut", "11734841.000000"); // 2
      Instrmt_59_set.insert("11734841.000000");
      Instrmt_59.add_attribute("AttchPnt", "19575805.710000"); // 2
      Instrmt_59_set.insert("19575805.710000");
      Instrmt_59.add_attribute("DetchPnt", "12400743.550000"); // 2
      Instrmt_59_set.insert("12400743.550000");
      Instrmt_59.add_attribute("Issued", "IssueDate_t_358658676"); // 2
      Instrmt_59_set.insert("IssueDate_t_358658676");
      Instrmt_59.add_attribute("RepoCollSecTyp", "304719726"); // 2
      Instrmt_59_set.insert("304719726");
      Instrmt_59.add_attribute("RepoTrm", "1771703561"); // 2
      Instrmt_59_set.insert("1771703561");
      Instrmt_59.add_attribute("RepoRt", "6483677.740000"); // 2
      Instrmt_59_set.insert("6483677.740000");
      Instrmt_59.add_attribute("Fctr", "13958556.830000"); // 2
      Instrmt_59_set.insert("13958556.830000");
      Instrmt_59.add_attribute("CrdRtg", "CreditRating_t_1282586686"); // 2
      Instrmt_59_set.insert("CreditRating_t_1282586686");
      Instrmt_59.add_attribute("Rgstry", "InstrRegistry_t_1885736298"); // 2
      Instrmt_59_set.insert("InstrRegistry_t_1885736298");
      Instrmt_59.add_attribute("IssuCtry", "1347817937"); // 2
      Instrmt_59_set.insert("1347817937");
      Instrmt_59.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1793921112"); // 2
      Instrmt_59_set.insert("StateOrProvinceOfIssue_t_1793921112");
      Instrmt_59.add_attribute("Lcl", "LocaleOfIssue_t_1676241084"); // 2
      Instrmt_59_set.insert("LocaleOfIssue_t_1676241084");
      Instrmt_59.add_attribute("Redeem", "RedemptionDate_t_439940352"); // 2
      Instrmt_59_set.insert("RedemptionDate_t_439940352");
      Instrmt_59.add_attribute("StrkPx", "393768.180000"); // 2
      Instrmt_59_set.insert("393768.180000");
      Instrmt_59.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_59_set.insert("USD");
      Instrmt_59.add_attribute("StrkMult", "1600976.000000"); // 2
      Instrmt_59_set.insert("1600976.000000");
      Instrmt_59.add_attribute("StrkValu", "12382725.720000"); // 2
      Instrmt_59_set.insert("12382725.720000");
      Instrmt_59.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_59_set.insert("4");
      Instrmt_59.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_59_set.insert("4");
      Instrmt_59.add_attribute("StrkPxBndryPrcsn", "1888702.820000"); // 2
      Instrmt_59_set.insert("1888702.820000");
      Instrmt_59.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("OptAt", "297934500"); // 2
      Instrmt_59_set.insert("297934500");
      Instrmt_59.add_attribute("Mult", "5317056.880000"); // 2
      Instrmt_59_set.insert("5317056.880000");
      Instrmt_59.add_attribute("MultTyp", "0"); // 2
      Instrmt_59_set.insert("0");
      Instrmt_59.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_59_set.insert("3");
      Instrmt_59.add_attribute("MinPxIncr", "320622.720000"); // 2
      Instrmt_59_set.insert("320622.720000");
      Instrmt_59.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1566160857"); // 2
      Instrmt_59_set.insert("MinPriceIncrementAmount_t_1566160857");
      Instrmt_59.add_attribute("UOM", "tn"); // 2
      Instrmt_59_set.insert("tn");
      Instrmt_59.add_attribute("UOMQty", "3957232.260000"); // 2
      Instrmt_59_set.insert("3957232.260000");
      Instrmt_59.add_attribute("PxUOM", "Alw"); // 2
      Instrmt_59_set.insert("Alw");
      Instrmt_59.add_attribute("PxUOMQty", "5203693.350000"); // 2
      Instrmt_59_set.insert("5203693.350000");
      Instrmt_59.add_attribute("SettlMeth", "P"); // 2
      Instrmt_59_set.insert("P");
      Instrmt_59.add_attribute("ExerStyle", "0"); // 2
      Instrmt_59_set.insert("0");
      Instrmt_59.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("OptPayAmt", "OptPayoutAmount_t_1260017495"); // 2
      Instrmt_59_set.insert("OptPayoutAmount_t_1260017495");
      Instrmt_59.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_59_set.insert("PCTPAR");
      Instrmt_59.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_59_set.insert("FUTDA");
      Instrmt_59.add_attribute("ListMeth", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CapPx", "13374404.090000"); // 2
      Instrmt_59_set.insert("13374404.090000");
      Instrmt_59.add_attribute("FlrPx", "14212790.340000"); // 2
      Instrmt_59_set.insert("14212790.340000");
      Instrmt_59.add_attribute("PutCall", "0"); // 2
      Instrmt_59_set.insert("0");
      Instrmt_59.add_attribute("FlexInd", "true"); // 2
      Instrmt_59_set.insert("true");
      Instrmt_59.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_59_set.insert("false");
      Instrmt_59.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_59_set.insert("Wk");
      Instrmt_59.add_attribute("CpnRt", "14962086.910000"); // 2
      Instrmt_59_set.insert("14962086.910000");
      Instrmt_59.add_attribute("Exch", "SecurityExchange_t_20825465"); // 2
      Instrmt_59_set.insert("SecurityExchange_t_20825465");
      Instrmt_59.add_attribute("PosLmt", "241032416"); // 2
      Instrmt_59_set.insert("241032416");
      Instrmt_59.add_attribute("NTPosLmt", "586997616"); // 2
      Instrmt_59_set.insert("586997616");
      Instrmt_59.add_attribute("Issr", "Issuer_t_1328611757"); // 2
      Instrmt_59_set.insert("Issuer_t_1328611757");
      Instrmt_59.add_attribute("EncIssrLen", "1658451029"); // 2
      Instrmt_59_set.insert("1658451029");
      Instrmt_59.add_attribute("EncIssr", "EncodedIssuer_t_775867898"); // 2
      Instrmt_59_set.insert("EncodedIssuer_t_775867898");
      Instrmt_59.add_attribute("Desc", "SecurityDesc_t_1563267405"); // 2
      Instrmt_59_set.insert("SecurityDesc_t_1563267405");
      Instrmt_59.add_attribute("EncSecDescLen", "1956385530"); // 2
      Instrmt_59_set.insert("1956385530");
      Instrmt_59.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1307573586"); // 2
      Instrmt_59_set.insert("EncodedSecurityDesc_t_1307573586");
      Instrmt_59.add_attribute("Pool", "Pool_t_1255357774"); // 2
      Instrmt_59_set.insert("Pool_t_1255357774");
      Instrmt_59.add_attribute("CSetMo", "1727964215"); // 2
      Instrmt_59_set.insert("1727964215");
      Instrmt_59.add_attribute("CPPgm", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CPRegT", "CPRegType_t_674034983"); // 2
      Instrmt_59_set.insert("CPRegType_t_674034983");
      Instrmt_59.add_attribute("Dated", "DatedDate_t_290752979"); // 2
      Instrmt_59_set.insert("DatedDate_t_290752979");
      Instrmt_59.add_attribute("IntAcrl", "InterestAccrualDate_t_1735359084"); // 2
      Instrmt_59_set.insert("InterestAccrualDate_t_1735359084");
      all_values.push_back(Instrmt_59_set);
      all_compo_names.insert("Instrmt_59_set");

      {
        xml_element AID_62{"AID"};
        multiset<string> AID_62_set;
        AID_62.add_attribute("AltID", "SecurityAltID_t_1266196292"); // 3
        AID_62_set.insert("SecurityAltID_t_1266196292");
        AID_62.add_attribute("AltIDSrc", "4"); // 3
        AID_62_set.insert("4");
        all_values.push_back(AID_62_set);
        all_compo_names.insert("AID_62_set");

        Instrmt_59.add_element(AID_62);
      }
      {
        xml_element SecXML_62{"SecXML"};
        multiset<string> SecXML_62_set;
        SecXML_62.add_attribute("Schema", "SecurityXMLSchema_t_1223673018"); // 3
        SecXML_62_set.insert("SecurityXMLSchema_t_1223673018");
        all_values.push_back(SecXML_62_set);
        all_compo_names.insert("SecXML_62_set");

        Instrmt_59.add_element(SecXML_62);
      }
      {
        xml_element Evnt_62{"Evnt"};
        multiset<string> Evnt_62_set;
        Evnt_62.add_attribute("EventTyp", "9"); // 3
        Evnt_62_set.insert("9");
        Evnt_62.add_attribute("Dt", "EventDate_t_1636211376"); // 3
        Evnt_62_set.insert("EventDate_t_1636211376");
        Evnt_62.add_attribute("Tm", "EventTime_t_336206865"); // 3
        Evnt_62_set.insert("EventTime_t_336206865");
        Evnt_62.add_attribute("Px", "16687203.880000"); // 3
        Evnt_62_set.insert("16687203.880000");
        Evnt_62.add_attribute("Txt", "EventText_t_1709672473"); // 3
        Evnt_62_set.insert("EventText_t_1709672473");
        all_values.push_back(Evnt_62_set);
        all_compo_names.insert("Evnt_62_set");

        Instrmt_59.add_element(Evnt_62);
      }
      {
        xml_element Pty_313{"Pty"};
        multiset<string> Pty_313_set;
        Pty_313.add_attribute("ID", "InstrumentPartyID_t_731327398"); // 3
        Pty_313_set.insert("InstrumentPartyID_t_731327398");
        Pty_313.add_attribute("Src", "3"); // 3
        Pty_313_set.insert("3");
        Pty_313.add_attribute("R", "62"); // 3
        Pty_313_set.insert("62");
        all_values.push_back(Pty_313_set);
        all_compo_names.insert("Pty_313_set");

        {
          xml_element Sub_313{"Sub"};
          multiset<string> Sub_313_set;
          Sub_313.add_attribute("ID", "InstrumentPartySubID_t_772885396"); // 4
          Sub_313_set.insert("InstrumentPartySubID_t_772885396");
          Sub_313.add_attribute("Typ", "18"); // 4
          Sub_313_set.insert("18");
          all_values.push_back(Sub_313_set);
          all_compo_names.insert("Sub_313_set");

          Pty_313.add_element(Sub_313);
        }
        Instrmt_59.add_element(Pty_313);
      }
      {
        xml_element CmplxEvnt_59{"CmplxEvnt"};
        multiset<string> CmplxEvnt_59_set;
        CmplxEvnt_59.add_attribute("Typ", "6"); // 3
        CmplxEvnt_59_set.insert("6");
        CmplxEvnt_59.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_853820212"); // 3
        CmplxEvnt_59_set.insert("ComplexOptPayoutAmount_t_853820212");
        CmplxEvnt_59.add_attribute("Px", "10736000.390000"); // 3
        CmplxEvnt_59_set.insert("10736000.390000");
        CmplxEvnt_59.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_59_set.insert("5");
        CmplxEvnt_59.add_attribute("PxBndryPrcsn", "10948526.290000"); // 3
        CmplxEvnt_59_set.insert("10948526.290000");
        CmplxEvnt_59.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_59_set.insert("3");
        CmplxEvnt_59.add_attribute("Cond", "2"); // 3
        CmplxEvnt_59_set.insert("2");
        all_values.push_back(CmplxEvnt_59_set);
        all_compo_names.insert("CmplxEvnt_59_set");

        {
          xml_element EvntDts_59{"EvntDts"};
          multiset<string> EvntDts_59_set;
          EvntDts_59.add_attribute("StartDt", "ComplexEventStartDate_t_605820010"); // 4
          EvntDts_59_set.insert("ComplexEventStartDate_t_605820010");
          EvntDts_59.add_attribute("EndDt", "ComplexEventEndDate_t_288981906"); // 4
          EvntDts_59_set.insert("ComplexEventEndDate_t_288981906");
          all_values.push_back(EvntDts_59_set);
          all_compo_names.insert("EvntDts_59_set");

          {
            xml_element EvntTms_59{"EvntTms"};
            multiset<string> EvntTms_59_set;
            EvntTms_59.add_attribute("StartTm", "1462424578"); // 5
            EvntTms_59_set.insert("1462424578");
            EvntTms_59.add_attribute("EndTm", "414721892"); // 5
            EvntTms_59_set.insert("414721892");
            all_values.push_back(EvntTms_59_set);
            all_compo_names.insert("EvntTms_59_set");

            EvntDts_59.add_element(EvntTms_59);
          }
          CmplxEvnt_59.add_element(EvntDts_59);
        }
        Instrmt_59.add_element(CmplxEvnt_59);
      }
      QuotReq_0.add_element(Instrmt_59);
    }
    {
      xml_element FinDetls_19{"FinDetls"};
      multiset<string> FinDetls_19_set;
      FinDetls_19.add_attribute("AgmtDesc", "AgreementDesc_t_1596555492"); // 2
      FinDetls_19_set.insert("AgreementDesc_t_1596555492");
      FinDetls_19.add_attribute("AgmtID", "AgreementID_t_570298705"); // 2
      FinDetls_19_set.insert("AgreementID_t_570298705");
      FinDetls_19.add_attribute("AgmtDt", "AgreementDate_t_2142686107"); // 2
      FinDetls_19_set.insert("AgreementDate_t_2142686107");
      FinDetls_19.add_attribute("AgmtCcy", "USD"); // 2
      FinDetls_19_set.insert("USD");
      FinDetls_19.add_attribute("TrmTyp", "4"); // 2
      FinDetls_19_set.insert("4");
      FinDetls_19.add_attribute("StartDt", "StartDate_t_376583139"); // 2
      FinDetls_19_set.insert("StartDate_t_376583139");
      FinDetls_19.add_attribute("EndDt", "EndDate_t_363046333"); // 2
      FinDetls_19_set.insert("EndDate_t_363046333");
      FinDetls_19.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_19_set.insert("2");
      FinDetls_19.add_attribute("MgnRatio", "16002561.570000"); // 2
      FinDetls_19_set.insert("16002561.570000");
      all_values.push_back(FinDetls_19_set);
      all_compo_names.insert("FinDetls_19_set");

      QuotReq_0.add_element(FinDetls_19);
    }
    {
      xml_element Undly_84{"Undly"};
      multiset<string> Undly_84_set;
      Undly_84.add_attribute("Sym", "UnderlyingSymbol_t_432578962"); // 2
      Undly_84_set.insert("UnderlyingSymbol_t_432578962");
      Undly_84.add_attribute("Sfx", "CD"); // 2
      Undly_84_set.insert("CD");
      Undly_84.add_attribute("ID", "UnderlyingSecurityID_t_1936463022"); // 2
      Undly_84_set.insert("UnderlyingSecurityID_t_1936463022");
      Undly_84.add_attribute("Src", "L"); // 2
      Undly_84_set.insert("L");
      Undly_84.add_attribute("Prod", "4"); // 2
      Undly_84_set.insert("4");
      Undly_84.add_attribute("CFI", "UnderlyingCFICode_t_520306773"); // 2
      Undly_84_set.insert("UnderlyingCFICode_t_520306773");
      Undly_84.add_attribute("SecTyp", "TCAL"); // 2
      Undly_84_set.insert("TCAL");
      Undly_84.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1131462168"); // 2
      Undly_84_set.insert("UnderlyingSecuritySubType_t_1131462168");
      Undly_84.add_attribute("MMY", "1293192169"); // 2
      Undly_84_set.insert("1293192169");
      Undly_84.add_attribute("Mat", "UnderlyingMaturityDate_t_389884201"); // 2
      Undly_84_set.insert("UnderlyingMaturityDate_t_389884201");
      Undly_84.add_attribute("MatTm", "1828665767"); // 2
      Undly_84_set.insert("1828665767");
      Undly_84.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2147012382"); // 2
      Undly_84_set.insert("UnderlyingCouponPaymentDate_t_2147012382");
      Undly_84.add_attribute("RestrctTyp", "FR"); // 2
      Undly_84_set.insert("FR");
      Undly_84.add_attribute("Snrty", "SR"); // 2
      Undly_84_set.insert("SR");
      Undly_84.add_attribute("NotlPctOut", "10943813.630000"); // 2
      Undly_84_set.insert("10943813.630000");
      Undly_84.add_attribute("OrigNotlPctOut", "9765982.480000"); // 2
      Undly_84_set.insert("9765982.480000");
      Undly_84.add_attribute("AttchPnt", "2983683.570000"); // 2
      Undly_84_set.insert("2983683.570000");
      Undly_84.add_attribute("DetchPnt", "17002013.730000"); // 2
      Undly_84_set.insert("17002013.730000");
      Undly_84.add_attribute("Issued", "UnderlyingIssueDate_t_1265580154"); // 2
      Undly_84_set.insert("UnderlyingIssueDate_t_1265580154");
      Undly_84.add_attribute("RepoCollSecTyp", "1760792935"); // 2
      Undly_84_set.insert("1760792935");
      Undly_84.add_attribute("RepoTrm", "2114923266"); // 2
      Undly_84_set.insert("2114923266");
      Undly_84.add_attribute("RepoRt", "7146519.980000"); // 2
      Undly_84_set.insert("7146519.980000");
      Undly_84.add_attribute("Fctr", "1836079.920000"); // 2
      Undly_84_set.insert("1836079.920000");
      Undly_84.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2110125725"); // 2
      Undly_84_set.insert("UnderlyingCreditRating_t_2110125725");
      Undly_84.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1503359701"); // 2
      Undly_84_set.insert("UnderlyingInstrRegistry_t_1503359701");
      Undly_84.add_attribute("Ctry", "1427941681"); // 2
      Undly_84_set.insert("1427941681");
      Undly_84.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_248597516"); // 2
      Undly_84_set.insert("UnderlyingStateOrProvinceOfIssue_t_248597516");
      Undly_84.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1879942841"); // 2
      Undly_84_set.insert("UnderlyingLocaleOfIssue_t_1879942841");
      Undly_84.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1790988014"); // 2
      Undly_84_set.insert("UnderlyingRedemptionDate_t_1790988014");
      Undly_84.add_attribute("StrkPx", "13456752.700000"); // 2
      Undly_84_set.insert("13456752.700000");
      Undly_84.add_attribute("StrkCcy", "JPY"); // 2
      Undly_84_set.insert("JPY");
      Undly_84.add_attribute("OptA", "1931480753"); // 2
      Undly_84_set.insert("1931480753");
      Undly_84.add_attribute("Mult", "11216947.250000"); // 2
      Undly_84_set.insert("11216947.250000");
      Undly_84.add_attribute("MultTyp", "2"); // 2
      Undly_84_set.insert("2");
      Undly_84.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_84_set.insert("1");
      Undly_84.add_attribute("UOM", "lbs"); // 2
      Undly_84_set.insert("lbs");
      Undly_84.add_attribute("UOMQty", "8423918.840000"); // 2
      Undly_84_set.insert("8423918.840000");
      Undly_84.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_84_set.insert("oz_tr");
      Undly_84.add_attribute("PxUOMQty", "7877100.190000"); // 2
      Undly_84_set.insert("7877100.190000");
      Undly_84.add_attribute("TmUnit", "Mo"); // 2
      Undly_84_set.insert("Mo");
      Undly_84.add_attribute("ExerStyle", "0"); // 2
      Undly_84_set.insert("0");
      Undly_84.add_attribute("CpnRt", "7872387.530000"); // 2
      Undly_84_set.insert("7872387.530000");
      Undly_84.add_attribute("Exch", "UnderlyingSecurityExchange_t_548276678"); // 2
      Undly_84_set.insert("UnderlyingSecurityExchange_t_548276678");
      Undly_84.add_attribute("Issr", "UnderlyingIssuer_t_1143846883"); // 2
      Undly_84_set.insert("UnderlyingIssuer_t_1143846883");
      Undly_84.add_attribute("EncUndIssrLen", "1881620116"); // 2
      Undly_84_set.insert("1881620116");
      Undly_84.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1524874926"); // 2
      Undly_84_set.insert("EncodedUnderlyingIssuer_t_1524874926");
      Undly_84.add_attribute("Desc", "UnderlyingSecurityDesc_t_1442215240"); // 2
      Undly_84_set.insert("UnderlyingSecurityDesc_t_1442215240");
      Undly_84.add_attribute("EncUndSecDescLen", "1434337842"); // 2
      Undly_84_set.insert("1434337842");
      Undly_84.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_642971432"); // 2
      Undly_84_set.insert("EncodedUnderlyingSecurityDesc_t_642971432");
      Undly_84.add_attribute("CPPgm", "UnderlyingCPProgram_t_1055524528"); // 2
      Undly_84_set.insert("UnderlyingCPProgram_t_1055524528");
      Undly_84.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1401777460"); // 2
      Undly_84_set.insert("UnderlyingCPRegType_t_1401777460");
      Undly_84.add_attribute("AllocPct", "13576234.300000"); // 2
      Undly_84_set.insert("13576234.300000");
      Undly_84.add_attribute("Ccy", "EUR"); // 2
      Undly_84_set.insert("EUR");
      Undly_84.add_attribute("Qty", "7134994.840000"); // 2
      Undly_84_set.insert("7134994.840000");
      Undly_84.add_attribute("SettlTyp", "2"); // 2
      Undly_84_set.insert("2");
      Undly_84.add_attribute("CashAmt", "UnderlyingCashAmount_t_1613017054"); // 2
      Undly_84_set.insert("UnderlyingCashAmount_t_1613017054");
      Undly_84.add_attribute("CashTyp", "DIFF"); // 2
      Undly_84_set.insert("DIFF");
      Undly_84.add_attribute("Px", "1630949.190000"); // 2
      Undly_84_set.insert("1630949.190000");
      Undly_84.add_attribute("DirtPx", "8112086.760000"); // 2
      Undly_84_set.insert("8112086.760000");
      Undly_84.add_attribute("EndPx", "17786740.270000"); // 2
      Undly_84_set.insert("17786740.270000");
      Undly_84.add_attribute("StartVal", "UnderlyingStartValue_t_239178248"); // 2
      Undly_84_set.insert("UnderlyingStartValue_t_239178248");
      Undly_84.add_attribute("CurVal", "UnderlyingCurrentValue_t_595205781"); // 2
      Undly_84_set.insert("UnderlyingCurrentValue_t_595205781");
      Undly_84.add_attribute("EndVal", "UnderlyingEndValue_t_752885104"); // 2
      Undly_84_set.insert("UnderlyingEndValue_t_752885104");
      Undly_84.add_attribute("AdjQty", "2690772.790000"); // 2
      Undly_84_set.insert("2690772.790000");
      Undly_84.add_attribute("FxRate", "5271971.940000"); // 2
      Undly_84_set.insert("5271971.940000");
      Undly_84.add_attribute("FxRateCalc", "M"); // 2
      Undly_84_set.insert("M");
      Undly_84.add_attribute("CapValu", "UnderlyingCapValue_t_1111469164"); // 2
      Undly_84_set.insert("UnderlyingCapValue_t_1111469164");
      Undly_84.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1590650775"); // 2
      Undly_84_set.insert("UnderlyingSettlMethod_t_1590650775");
      Undly_84.add_attribute("PutCall", "1035112974"); // 2
      Undly_84_set.insert("1035112974");
      all_values.push_back(Undly_84_set);
      all_compo_names.insert("Undly_84_set");

      {
        xml_element UndAID_84{"UndAID"};
        multiset<string> UndAID_84_set;
        UndAID_84.add_attribute("AltID", "UnderlyingSecurityAltID_t_196261601"); // 3
        UndAID_84_set.insert("UnderlyingSecurityAltID_t_196261601");
        UndAID_84.add_attribute("AltIDSrc", "4"); // 3
        UndAID_84_set.insert("4");
        all_values.push_back(UndAID_84_set);
        all_compo_names.insert("UndAID_84_set");

        Undly_84.add_element(UndAID_84);
      }
      {
        xml_element Stip_126{"Stip"};
        multiset<string> Stip_126_set;
        Stip_126.add_attribute("Typ", "SECTYPE"); // 3
        Stip_126_set.insert("SECTYPE");
        Stip_126.add_attribute("Val", "UnderlyingStipValue_t_744538279"); // 3
        Stip_126_set.insert("UnderlyingStipValue_t_744538279");
        all_values.push_back(Stip_126_set);
        all_compo_names.insert("Stip_126_set");

        Undly_84.add_element(Stip_126);
      }
      {
        xml_element Pty_314{"Pty"};
        multiset<string> Pty_314_set;
        Pty_314.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1331649711"); // 3
        Pty_314_set.insert("UnderlyingInstrumentPartyID_t_1331649711");
        Pty_314.add_attribute("Src", "9"); // 3
        Pty_314_set.insert("9");
        Pty_314.add_attribute("R", "37"); // 3
        Pty_314_set.insert("37");
        all_values.push_back(Pty_314_set);
        all_compo_names.insert("Pty_314_set");

        {
          xml_element Sub_314{"Sub"};
          multiset<string> Sub_314_set;
          Sub_314.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_626381303"); // 4
          Sub_314_set.insert("UnderlyingInstrumentPartySubID_t_626381303");
          Sub_314.add_attribute("Typ", "1"); // 4
          Sub_314_set.insert("1");
          all_values.push_back(Sub_314_set);
          all_compo_names.insert("Sub_314_set");

          Pty_314.add_element(Sub_314);
        }
        Undly_84.add_element(Pty_314);
      }
      QuotReq_0.add_element(Undly_84);
    }
    {
      xml_element OrdQty_19{"OrdQty"};
      multiset<string> OrdQty_19_set;
      OrdQty_19.add_attribute("Qty", "7649009.890000"); // 2
      OrdQty_19_set.insert("7649009.890000");
      OrdQty_19.add_attribute("Cash", "16819058.310000"); // 2
      OrdQty_19_set.insert("16819058.310000");
      OrdQty_19.add_attribute("Pct", "976362.020000"); // 2
      OrdQty_19_set.insert("976362.020000");
      OrdQty_19.add_attribute("RndDir", "0"); // 2
      OrdQty_19_set.insert("0");
      OrdQty_19.add_attribute("RndMod", "7735547.040000"); // 2
      OrdQty_19_set.insert("7735547.040000");
      all_values.push_back(OrdQty_19_set);
      all_compo_names.insert("OrdQty_19_set");

      QuotReq_0.add_element(OrdQty_19);
    }
    {
      xml_element RtSrc_11{"RtSrc"};
      multiset<string> RtSrc_11_set;
      RtSrc_11.add_attribute("RtSrc", "99"); // 2
      RtSrc_11_set.insert("99");
      RtSrc_11.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_11_set.insert("0");
      RtSrc_11.add_attribute("RefPg", "ReferencePage_t_1293145257"); // 2
      RtSrc_11_set.insert("ReferencePage_t_1293145257");
      all_values.push_back(RtSrc_11_set);
      all_compo_names.insert("RtSrc_11_set");

      QuotReq_0.add_element(RtSrc_11);
    }
    {
      xml_element Stip_127{"Stip"};
      multiset<string> Stip_127_set;
      Stip_127.add_attribute("Typ", "MINDNOM"); // 2
      Stip_127_set.insert("MINDNOM");
      Stip_127.add_attribute("Val", "StipulationValue_t_1134498933"); // 2
      Stip_127_set.insert("StipulationValue_t_1134498933");
      all_values.push_back(Stip_127_set);
      all_compo_names.insert("Stip_127_set");

      QuotReq_0.add_element(Stip_127);
    }
    {
      xml_element Leg_68{"Leg"};
      multiset<string> Leg_68_set;
      Leg_68.add_attribute("Qty", "14562401.770000"); // 2
      Leg_68_set.insert("14562401.770000");
      Leg_68.add_attribute("OrdQty", "17387978.220000"); // 2
      Leg_68_set.insert("17387978.220000");
      Leg_68.add_attribute("SwapTyp", "1"); // 2
      Leg_68_set.insert("1");
      Leg_68.add_attribute("SettlTyp", "9"); // 2
      Leg_68_set.insert("9");
      Leg_68.add_attribute("SettlDt", "LegSettlDate_t_186519955"); // 2
      Leg_68_set.insert("LegSettlDate_t_186519955");
      Leg_68.add_attribute("RefID", "LegRefID_t_1518574417"); // 2
      Leg_68_set.insert("LegRefID_t_1518574417");
      all_values.push_back(Leg_68_set);
      all_compo_names.insert("Leg_68_set");

      {
        xml_element Leg_69{"Leg"};
        multiset<string> Leg_69_set;
        Leg_69.add_attribute("Sym", "LegSymbol_t_1964495704"); // 3
        Leg_69_set.insert("LegSymbol_t_1964495704");
        Leg_69.add_attribute("Sfx", "CD"); // 3
        Leg_69_set.insert("CD");
        Leg_69.add_attribute("ID", "LegSecurityID_t_1765977371"); // 3
        Leg_69_set.insert("LegSecurityID_t_1765977371");
        Leg_69.add_attribute("Src", "J"); // 3
        Leg_69_set.insert("J");
        Leg_69.add_attribute("Prod", "13"); // 3
        Leg_69_set.insert("13");
        Leg_69.add_attribute("CFI", "LegCFICode_t_653606697"); // 3
        Leg_69_set.insert("LegCFICode_t_653606697");
        Leg_69.add_attribute("SecTyp", "CASH"); // 3
        Leg_69_set.insert("CASH");
        Leg_69.add_attribute("SecSubTyp", "LegSecuritySubType_t_344687105"); // 3
        Leg_69_set.insert("LegSecuritySubType_t_344687105");
        Leg_69.add_attribute("MMY", "328474777"); // 3
        Leg_69_set.insert("328474777");
        Leg_69.add_attribute("Mat", "LegMaturityDate_t_1869281101"); // 3
        Leg_69_set.insert("LegMaturityDate_t_1869281101");
        Leg_69.add_attribute("MatTm", "1676336816"); // 3
        Leg_69_set.insert("1676336816");
        Leg_69.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1884962973"); // 3
        Leg_69_set.insert("LegCouponPaymentDate_t_1884962973");
        Leg_69.add_attribute("Issued", "LegIssueDate_t_1991210659"); // 3
        Leg_69_set.insert("LegIssueDate_t_1991210659");
        Leg_69.add_attribute("RepoCollSecTyp", "155234471"); // 3
        Leg_69_set.insert("155234471");
        Leg_69.add_attribute("RepoTrm", "580821715"); // 3
        Leg_69_set.insert("580821715");
        Leg_69.add_attribute("RepoRt", "6086280.000000"); // 3
        Leg_69_set.insert("6086280.000000");
        Leg_69.add_attribute("Fctr", "18371403.030000"); // 3
        Leg_69_set.insert("18371403.030000");
        Leg_69.add_attribute("CrdRtg", "LegCreditRating_t_678457917"); // 3
        Leg_69_set.insert("LegCreditRating_t_678457917");
        Leg_69.add_attribute("Rgstry", "LegInstrRegistry_t_583668772"); // 3
        Leg_69_set.insert("LegInstrRegistry_t_583668772");
        Leg_69.add_attribute("Ctry", "463211359"); // 3
        Leg_69_set.insert("463211359");
        Leg_69.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2140513656"); // 3
        Leg_69_set.insert("LegStateOrProvinceOfIssue_t_2140513656");
        Leg_69.add_attribute("Lcl", "LegLocaleOfIssue_t_1272209028"); // 3
        Leg_69_set.insert("LegLocaleOfIssue_t_1272209028");
        Leg_69.add_attribute("Redeem", "LegRedemptionDate_t_1756356616"); // 3
        Leg_69_set.insert("LegRedemptionDate_t_1756356616");
        Leg_69.add_attribute("Strk", "9206191.540000"); // 3
        Leg_69_set.insert("9206191.540000");
        Leg_69.add_attribute("StrkCcy", "CHF"); // 3
        Leg_69_set.insert("CHF");
        Leg_69.add_attribute("OptA", "511933328"); // 3
        Leg_69_set.insert("511933328");
        Leg_69.add_attribute("Cmult", "10249136.260000"); // 3
        Leg_69_set.insert("10249136.260000");
        Leg_69.add_attribute("MultTyp", "1"); // 3
        Leg_69_set.insert("1");
        Leg_69.add_attribute("FlowSchedTyp", "3"); // 3
        Leg_69_set.insert("3");
        Leg_69.add_attribute("UOM", "lbs"); // 3
        Leg_69_set.insert("lbs");
        Leg_69.add_attribute("UOMQty", "4300599.790000"); // 3
        Leg_69_set.insert("4300599.790000");
        Leg_69.add_attribute("PxUOM", "Bu"); // 3
        Leg_69_set.insert("Bu");
        Leg_69.add_attribute("PxUOMQty", "144981.180000"); // 3
        Leg_69_set.insert("144981.180000");
        Leg_69.add_attribute("TmUnit", "Min"); // 3
        Leg_69_set.insert("Min");
        Leg_69.add_attribute("ExerStyle", "0"); // 3
        Leg_69_set.insert("0");
        Leg_69.add_attribute("CpnRt", "6681048.160000"); // 3
        Leg_69_set.insert("6681048.160000");
        Leg_69.add_attribute("Exch", "LegSecurityExchange_t_335800373"); // 3
        Leg_69_set.insert("LegSecurityExchange_t_335800373");
        Leg_69.add_attribute("Issr", "LegIssuer_t_1913741816"); // 3
        Leg_69_set.insert("LegIssuer_t_1913741816");
        Leg_69.add_attribute("EncLegIssrLen", "996579593"); // 3
        Leg_69_set.insert("996579593");
        Leg_69.add_attribute("EncLegIssr", "EncodedLegIssuer_t_57597827"); // 3
        Leg_69_set.insert("EncodedLegIssuer_t_57597827");
        Leg_69.add_attribute("Desc", "LegSecurityDesc_t_1442594984"); // 3
        Leg_69_set.insert("LegSecurityDesc_t_1442594984");
        Leg_69.add_attribute("EncLegSecDescLen", "734058918"); // 3
        Leg_69_set.insert("734058918");
        Leg_69.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2048808486"); // 3
        Leg_69_set.insert("EncodedLegSecurityDesc_t_2048808486");
        Leg_69.add_attribute("RatioQty", "15978294.550000"); // 3
        Leg_69_set.insert("15978294.550000");
        Leg_69.add_attribute("Side", "A"); // 3
        Leg_69_set.insert("A");
        Leg_69.add_attribute("Ccy", "GBP"); // 3
        Leg_69_set.insert("GBP");
        Leg_69.add_attribute("Pool", "LegPool_t_1993338550"); // 3
        Leg_69_set.insert("LegPool_t_1993338550");
        Leg_69.add_attribute("Dated", "LegDatedDate_t_1093621611"); // 3
        Leg_69_set.insert("LegDatedDate_t_1093621611");
        Leg_69.add_attribute("CSetMo", "1750697469"); // 3
        Leg_69_set.insert("1750697469");
        Leg_69.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1986368558"); // 3
        Leg_69_set.insert("LegInterestAccrualDate_t_1986368558");
        Leg_69.add_attribute("PutCall", "218346991"); // 3
        Leg_69_set.insert("218346991");
        Leg_69.add_attribute("LegOptionRatio", "13595704.380000"); // 3
        Leg_69_set.insert("13595704.380000");
        Leg_69.add_attribute("Px", "7595040.640000"); // 3
        Leg_69_set.insert("7595040.640000");
        all_values.push_back(Leg_69_set);
        all_compo_names.insert("Leg_69_set");

        {
          xml_element LegAID_68{"LegAID"};
          multiset<string> LegAID_68_set;
          LegAID_68.add_attribute("SecAltID", "LegSecurityAltID_t_477571305"); // 4
          LegAID_68_set.insert("LegSecurityAltID_t_477571305");
          LegAID_68.add_attribute("SecAltIDSrc", "2"); // 4
          LegAID_68_set.insert("2");
          all_values.push_back(LegAID_68_set);
          all_compo_names.insert("LegAID_68_set");

          Leg_69.add_element(LegAID_68);
        }
        Leg_68.add_element(Leg_69);
      }
      {
        xml_element Stip_128{"Stip"};
        multiset<string> Stip_128_set;
        Stip_128.add_attribute("StipTyp", "PPC"); // 3
        Stip_128_set.insert("PPC");
        Stip_128.add_attribute("StipVal", "LegStipulationValue_t_1502484931"); // 3
        Stip_128_set.insert("LegStipulationValue_t_1502484931");
        all_values.push_back(Stip_128_set);
        all_compo_names.insert("Stip_128_set");

        Leg_68.add_element(Stip_128);
      }
      {
        xml_element Pty_315{"Pty"};
        multiset<string> Pty_315_set;
        Pty_315.add_attribute("ID", "NestedPartyID_t_890247858"); // 3
        Pty_315_set.insert("NestedPartyID_t_890247858");
        Pty_315.add_attribute("Src", "H"); // 3
        Pty_315_set.insert("H");
        Pty_315.add_attribute("R", "7"); // 3
        Pty_315_set.insert("7");
        all_values.push_back(Pty_315_set);
        all_compo_names.insert("Pty_315_set");

        {
          xml_element Sub_315{"Sub"};
          multiset<string> Sub_315_set;
          Sub_315.add_attribute("ID", "NestedPartySubID_t_1320307837"); // 4
          Sub_315_set.insert("NestedPartySubID_t_1320307837");
          Sub_315.add_attribute("Typ", "16"); // 4
          Sub_315_set.insert("16");
          all_values.push_back(Sub_315_set);
          all_compo_names.insert("Sub_315_set");

          Pty_315.add_element(Sub_315);
        }
        Leg_68.add_element(Pty_315);
      }
      {
        xml_element BnchmkCurve_2{"BnchmkCurve"};
        multiset<string> BnchmkCurve_2_set;
        BnchmkCurve_2.add_attribute("Ccy", "USD"); // 3
        BnchmkCurve_2_set.insert("USD");
        BnchmkCurve_2.add_attribute("Name", "Pfandbriefe"); // 3
        BnchmkCurve_2_set.insert("Pfandbriefe");
        BnchmkCurve_2.add_attribute("Point", "LegBenchmarkCurvePoint_t_433608612"); // 3
        BnchmkCurve_2_set.insert("LegBenchmarkCurvePoint_t_433608612");
        BnchmkCurve_2.add_attribute("Px", "8671657.620000"); // 3
        BnchmkCurve_2_set.insert("8671657.620000");
        BnchmkCurve_2.add_attribute("PxTyp", "422406692"); // 3
        BnchmkCurve_2_set.insert("422406692");
        all_values.push_back(BnchmkCurve_2_set);
        all_compo_names.insert("BnchmkCurve_2_set");

        Leg_68.add_element(BnchmkCurve_2);
      }
      QuotReq_0.add_element(Leg_68);
    }
    {
      xml_element QuotQual_1{"QuotQual"};
      multiset<string> QuotQual_1_set;
      QuotQual_1.add_attribute("Qual", "L"); // 2
      QuotQual_1_set.insert("L");
      all_values.push_back(QuotQual_1_set);
      all_compo_names.insert("QuotQual_1_set");

      QuotReq_0.add_element(QuotQual_1);
    }
    {
      xml_element SprdBnchmkCurve_20{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_20_set;
      SprdBnchmkCurve_20.add_attribute("Spread", "9247635.890000"); // 2
      SprdBnchmkCurve_20_set.insert("9247635.890000");
      SprdBnchmkCurve_20.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_20_set.insert("CHF");
      SprdBnchmkCurve_20.add_attribute("Name", "FutureSWAP"); // 2
      SprdBnchmkCurve_20_set.insert("FutureSWAP");
      SprdBnchmkCurve_20.add_attribute("Point", "BenchmarkCurvePoint_t_1315347484"); // 2
      SprdBnchmkCurve_20_set.insert("BenchmarkCurvePoint_t_1315347484");
      SprdBnchmkCurve_20.add_attribute("Px", "13316441.080000"); // 2
      SprdBnchmkCurve_20_set.insert("13316441.080000");
      SprdBnchmkCurve_20.add_attribute("PxTyp", "15"); // 2
      SprdBnchmkCurve_20_set.insert("15");
      SprdBnchmkCurve_20.add_attribute("SecID", "BenchmarkSecurityID_t_455349946"); // 2
      SprdBnchmkCurve_20_set.insert("BenchmarkSecurityID_t_455349946");
      SprdBnchmkCurve_20.add_attribute("SecIDSrc", "7"); // 2
      SprdBnchmkCurve_20_set.insert("7");
      all_values.push_back(SprdBnchmkCurve_20_set);
      all_compo_names.insert("SprdBnchmkCurve_20_set");

      QuotReq_0.add_element(SprdBnchmkCurve_20);
    }
    {
      xml_element Yield_15{"Yield"};
      multiset<string> Yield_15_set;
      Yield_15.add_attribute("Typ", "ATISSUE"); // 2
      Yield_15_set.insert("ATISSUE");
      Yield_15.add_attribute("Yld", "585637.680000"); // 2
      Yield_15_set.insert("585637.680000");
      Yield_15.add_attribute("CalcDt", "YieldCalcDate_t_1016383921"); // 2
      Yield_15_set.insert("YieldCalcDate_t_1016383921");
      Yield_15.add_attribute("RedDt", "YieldRedemptionDate_t_500526220"); // 2
      Yield_15_set.insert("YieldRedemptionDate_t_500526220");
      Yield_15.add_attribute("RedPx", "14181342.060000"); // 2
      Yield_15_set.insert("14181342.060000");
      Yield_15.add_attribute("RedPxTyp", "13"); // 2
      Yield_15_set.insert("13");
      all_values.push_back(Yield_15_set);
      all_compo_names.insert("Yield_15_set");

      QuotReq_0.add_element(Yield_15);
    }
    {
      xml_element Pty_316{"Pty"};
      multiset<string> Pty_316_set;
      Pty_316.add_attribute("ID", "PartyID_t_978097525"); // 2
      Pty_316_set.insert("PartyID_t_978097525");
      Pty_316.add_attribute("Src", "2"); // 2
      Pty_316_set.insert("2");
      Pty_316.add_attribute("R", "49"); // 2
      Pty_316_set.insert("49");
      all_values.push_back(Pty_316_set);
      all_compo_names.insert("Pty_316_set");

      {
        xml_element Sub_316{"Sub"};
        multiset<string> Sub_316_set;
        Sub_316.add_attribute("ID", "PartySubID_t_333098808"); // 3
        Sub_316_set.insert("PartySubID_t_333098808");
        Sub_316.add_attribute("Typ", "4"); // 3
        Sub_316_set.insert("4");
        all_values.push_back(Sub_316_set);
        all_compo_names.insert("Sub_316_set");

        Pty_316.add_element(Sub_316);
      }
      QuotReq_0.add_element(Pty_316);
    }
    elt.add_element(QuotReq_0);
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
