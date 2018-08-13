#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteResponse_message_t_0;
  elt.add_attribute("RspID", "QuoteRespID_t_153541079"); // 0
  QuoteResponse_message_t_0.insert("QuoteRespID_t_153541079");
  elt.add_attribute("QID", "QuoteID_t_919821439"); // 0
  QuoteResponse_message_t_0.insert("QuoteID_t_919821439");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1187126926"); // 0
  QuoteResponse_message_t_0.insert("QuoteMsgID_t_1187126926");
  elt.add_attribute("RspTyp", "4"); // 0
  QuoteResponse_message_t_0.insert("4");
  elt.add_attribute("ClOrdID", "ClOrdID_t_925140586"); // 0
  QuoteResponse_message_t_0.insert("ClOrdID_t_925140586");
  elt.add_attribute("Cpcty", "G"); // 0
  QuoteResponse_message_t_0.insert("G");
  elt.add_attribute("Rstctions", "A"); // 0
  QuoteResponse_message_t_0.insert("A");
  elt.add_attribute("IOIID", "IOIID_t_1123303849"); // 0
  QuoteResponse_message_t_0.insert("IOIID_t_1123303849");
  elt.add_attribute("Typ", "1"); // 0
  QuoteResponse_message_t_0.insert("1");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  QuoteResponse_message_t_0.insert("false");
  elt.add_attribute("SesID", "1"); // 0
  QuoteResponse_message_t_0.insert("1");
  elt.add_attribute("SesSub", "5"); // 0
  QuoteResponse_message_t_0.insert("5");
  elt.add_attribute("Side", "8"); // 0
  QuoteResponse_message_t_0.insert("8");
  elt.add_attribute("MinQty", "9667815.680000"); // 0
  QuoteResponse_message_t_0.insert("9667815.680000");
  elt.add_attribute("SettlTyp", "2"); // 0
  QuoteResponse_message_t_0.insert("2");
  elt.add_attribute("SettlDt", "SettlDate_t_195449155"); // 0
  QuoteResponse_message_t_0.insert("SettlDate_t_195449155");
  elt.add_attribute("SettlDt2", "SettlDate2_t_2072490663"); // 0
  QuoteResponse_message_t_0.insert("SettlDate2_t_2072490663");
  elt.add_attribute("Qty2", "6917512.150000"); // 0
  QuoteResponse_message_t_0.insert("6917512.150000");
  elt.add_attribute("Ccy", "GBP"); // 0
  QuoteResponse_message_t_0.insert("GBP");
  elt.add_attribute("Acct", "Account_t_596937438"); // 0
  QuoteResponse_message_t_0.insert("Account_t_596937438");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  QuoteResponse_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "3"); // 0
  QuoteResponse_message_t_0.insert("3");
  elt.add_attribute("BidPx", "7174051.770000"); // 0
  QuoteResponse_message_t_0.insert("7174051.770000");
  elt.add_attribute("OfrPx", "11225370.630000"); // 0
  QuoteResponse_message_t_0.insert("11225370.630000");
  elt.add_attribute("MktBidPx", "17328469.320000"); // 0
  QuoteResponse_message_t_0.insert("17328469.320000");
  elt.add_attribute("MktOfrPx", "4268720.400000"); // 0
  QuoteResponse_message_t_0.insert("4268720.400000");
  elt.add_attribute("MinBidSz", "4532224.860000"); // 0
  QuoteResponse_message_t_0.insert("4532224.860000");
  elt.add_attribute("BidSz", "5706989.460000"); // 0
  QuoteResponse_message_t_0.insert("5706989.460000");
  elt.add_attribute("MinOfrSz", "17863108.400000"); // 0
  QuoteResponse_message_t_0.insert("17863108.400000");
  elt.add_attribute("OfrSz", "3226225.140000"); // 0
  QuoteResponse_message_t_0.insert("3226225.140000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_724240026"); // 0
  QuoteResponse_message_t_0.insert("ValidUntilTime_t_724240026");
  elt.add_attribute("BidSpotRt", "5586486.310000"); // 0
  QuoteResponse_message_t_0.insert("5586486.310000");
  elt.add_attribute("OfrSpotRt", "15097494.400000"); // 0
  QuoteResponse_message_t_0.insert("15097494.400000");
  elt.add_attribute("BidFwdPnts", "17279266.050000"); // 0
  QuoteResponse_message_t_0.insert("17279266.050000");
  elt.add_attribute("OfrFwdPnts", "14837892.180000"); // 0
  QuoteResponse_message_t_0.insert("14837892.180000");
  elt.add_attribute("MidPx", "2397041.620000"); // 0
  QuoteResponse_message_t_0.insert("2397041.620000");
  elt.add_attribute("BidYld", "10308990.460000"); // 0
  QuoteResponse_message_t_0.insert("10308990.460000");
  elt.add_attribute("MidYld", "4596094.190000"); // 0
  QuoteResponse_message_t_0.insert("4596094.190000");
  elt.add_attribute("OfrYld", "6438715.230000"); // 0
  QuoteResponse_message_t_0.insert("6438715.230000");
  elt.add_attribute("TxnTm", "TransactTime_t_1801449920"); // 0
  QuoteResponse_message_t_0.insert("TransactTime_t_1801449920");
  elt.add_attribute("OrdTyp", "I"); // 0
  QuoteResponse_message_t_0.insert("I");
  elt.add_attribute("BidFwdPnts2", "19567356.670000"); // 0
  QuoteResponse_message_t_0.insert("19567356.670000");
  elt.add_attribute("OfrFwdPnts2", "9895915.590000"); // 0
  QuoteResponse_message_t_0.insert("9895915.590000");
  elt.add_attribute("SettlCurrBidFxRt", "1097402.820000"); // 0
  QuoteResponse_message_t_0.insert("1097402.820000");
  elt.add_attribute("SettlCurrOfrFxRt", "2104663.210000"); // 0
  QuoteResponse_message_t_0.insert("2104663.210000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  QuoteResponse_message_t_0.insert("D");
  elt.add_attribute("Comm", "Commission_t_34747297"); // 0
  QuoteResponse_message_t_0.insert("Commission_t_34747297");
  elt.add_attribute("CommTyp", "3"); // 0
  QuoteResponse_message_t_0.insert("3");
  elt.add_attribute("CustCpcty", "3"); // 0
  QuoteResponse_message_t_0.insert("3");
  elt.add_attribute("ExDest", "ExDestination_t_935382747"); // 0
  QuoteResponse_message_t_0.insert("ExDestination_t_935382747");
  elt.add_attribute("ExDestIDSrc", "G"); // 0
  QuoteResponse_message_t_0.insert("G");
  elt.add_attribute("Txt", "Text_t_1725980905"); // 0
  QuoteResponse_message_t_0.insert("Text_t_1725980905");
  elt.add_attribute("EncTxtLen", "1446213972"); // 0
  QuoteResponse_message_t_0.insert("1446213972");
  elt.add_attribute("EncTxt", "EncodedText_t_69076504"); // 0
  QuoteResponse_message_t_0.insert("EncodedText_t_69076504");
  elt.add_attribute("Px", "7010343.200000"); // 0
  QuoteResponse_message_t_0.insert("7010343.200000");
  elt.add_attribute("PxTyp", "9"); // 0
  QuoteResponse_message_t_0.insert("9");
  all_values.push_back(QuoteResponse_message_t_0);
  all_compo_names.insert("QuoteResponse_message_t");

  { // Hdr
    xml_element Hdr_72{"Hdr"};
    multiset<string> Hdr_72_set;
    Hdr_72.add_attribute("SeqNum", "495948544"); // 1
    Hdr_72_set.insert("495948544");
    Hdr_72.add_attribute("SID", "SenderCompID_t_1154256806"); // 1
    Hdr_72_set.insert("SenderCompID_t_1154256806");
    Hdr_72.add_attribute("TID", "TargetCompID_t_1602276203"); // 1
    Hdr_72_set.insert("TargetCompID_t_1602276203");
    Hdr_72.add_attribute("OBID", "OnBehalfOfCompID_t_134775736"); // 1
    Hdr_72_set.insert("OnBehalfOfCompID_t_134775736");
    Hdr_72.add_attribute("D2ID", "DeliverToCompID_t_1476879320"); // 1
    Hdr_72_set.insert("DeliverToCompID_t_1476879320");
    Hdr_72.add_attribute("SSub", "SenderSubID_t_179032581"); // 1
    Hdr_72_set.insert("SenderSubID_t_179032581");
    Hdr_72.add_attribute("SLoc", "SenderLocationID_t_693424368"); // 1
    Hdr_72_set.insert("SenderLocationID_t_693424368");
    Hdr_72.add_attribute("TSub", "TargetSubID_t_839145113"); // 1
    Hdr_72_set.insert("TargetSubID_t_839145113");
    Hdr_72.add_attribute("TLoc", "TargetLocationID_t_1906959186"); // 1
    Hdr_72_set.insert("TargetLocationID_t_1906959186");
    Hdr_72.add_attribute("OBSub", "OnBehalfOfSubID_t_29729938"); // 1
    Hdr_72_set.insert("OnBehalfOfSubID_t_29729938");
    Hdr_72.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1078849275"); // 1
    Hdr_72_set.insert("OnBehalfOfLocationID_t_1078849275");
    Hdr_72.add_attribute("D2Sub", "DeliverToSubID_t_790374585"); // 1
    Hdr_72_set.insert("DeliverToSubID_t_790374585");
    Hdr_72.add_attribute("D2Loc", "DeliverToLocationID_t_489339357"); // 1
    Hdr_72_set.insert("DeliverToLocationID_t_489339357");
    Hdr_72.add_attribute("PosDup", "N"); // 1
    Hdr_72_set.insert("N");
    Hdr_72.add_attribute("PosRsnd", "Y"); // 1
    Hdr_72_set.insert("Y");
    Hdr_72.add_attribute("Snt", "SendingTime_t_1779781718"); // 1
    Hdr_72_set.insert("SendingTime_t_1779781718");
    Hdr_72.add_attribute("OrigSnt", "OrigSendingTime_t_1531972818"); // 1
    Hdr_72_set.insert("OrigSendingTime_t_1531972818");
    Hdr_72.add_attribute("MsgEncd", "MessageEncoding_t_1433932416"); // 1
    Hdr_72_set.insert("MessageEncoding_t_1433932416");
    all_values.push_back(Hdr_72_set);
    all_compo_names.insert("Hdr_72_set");

    {
      xml_element Hop_72{"Hop"};
      multiset<string> Hop_72_set;
      Hop_72.add_attribute("ID", "HopCompID_t_1889522000"); // 2
      Hop_72_set.insert("HopCompID_t_1889522000");
      Hop_72.add_attribute("Ref", "1742439139"); // 2
      Hop_72_set.insert("1742439139");
      Hop_72.add_attribute("Snt", "HopSendingTime_t_471489483"); // 2
      Hop_72_set.insert("HopSendingTime_t_471489483");
      all_values.push_back(Hop_72_set);
      all_compo_names.insert("Hop_72_set");

      Hdr_72.add_element(Hop_72);
    }
    elt.add_element(Hdr_72);
  } // end Hdr
  { // QuotQual
    xml_element QuotQual_7{"QuotQual"};
    multiset<string> QuotQual_7_set;
    QuotQual_7.add_attribute("Qual", "W"); // 1
    QuotQual_7_set.insert("W");
    all_values.push_back(QuotQual_7_set);
    all_compo_names.insert("QuotQual_7_set");

    elt.add_element(QuotQual_7);
  } // end QuotQual
  { // Pty
    xml_element Pty_353{"Pty"};
    multiset<string> Pty_353_set;
    Pty_353.add_attribute("ID", "PartyID_t_712168396"); // 1
    Pty_353_set.insert("PartyID_t_712168396");
    Pty_353.add_attribute("Src", "5"); // 1
    Pty_353_set.insert("5");
    Pty_353.add_attribute("R", "30"); // 1
    Pty_353_set.insert("30");
    all_values.push_back(Pty_353_set);
    all_compo_names.insert("Pty_353_set");

    {
      xml_element Sub_353{"Sub"};
      multiset<string> Sub_353_set;
      Sub_353.add_attribute("ID", "PartySubID_t_10898720"); // 2
      Sub_353_set.insert("PartySubID_t_10898720");
      Sub_353.add_attribute("Typ", "2"); // 2
      Sub_353_set.insert("2");
      all_values.push_back(Sub_353_set);
      all_compo_names.insert("Sub_353_set");

      Pty_353.add_element(Sub_353);
    }
    elt.add_element(Pty_353);
  } // end Pty
  { // Pty
    xml_element Pty_354{"Pty"};
    multiset<string> Pty_354_set;
    Pty_354.add_attribute("ID", "PartyID_t_1899045030"); // 1
    Pty_354_set.insert("PartyID_t_1899045030");
    Pty_354.add_attribute("Src", "2"); // 1
    Pty_354_set.insert("2");
    Pty_354.add_attribute("R", "61"); // 1
    Pty_354_set.insert("61");
    all_values.push_back(Pty_354_set);
    all_compo_names.insert("Pty_354_set");

    {
      xml_element Sub_354{"Sub"};
      multiset<string> Sub_354_set;
      Sub_354.add_attribute("ID", "PartySubID_t_905818188"); // 2
      Sub_354_set.insert("PartySubID_t_905818188");
      Sub_354.add_attribute("Typ", "21"); // 2
      Sub_354_set.insert("21");
      all_values.push_back(Sub_354_set);
      all_compo_names.insert("Sub_354_set");

      Pty_354.add_element(Sub_354);
    }
    elt.add_element(Pty_354);
  } // end Pty
  { // Pty
    xml_element Pty_355{"Pty"};
    multiset<string> Pty_355_set;
    Pty_355.add_attribute("ID", "PartyID_t_548645139"); // 1
    Pty_355_set.insert("PartyID_t_548645139");
    Pty_355.add_attribute("Src", "E"); // 1
    Pty_355_set.insert("E");
    Pty_355.add_attribute("R", "63"); // 1
    Pty_355_set.insert("63");
    all_values.push_back(Pty_355_set);
    all_compo_names.insert("Pty_355_set");

    {
      xml_element Sub_355{"Sub"};
      multiset<string> Sub_355_set;
      Sub_355.add_attribute("ID", "PartySubID_t_1242069507"); // 2
      Sub_355_set.insert("PartySubID_t_1242069507");
      Sub_355.add_attribute("Typ", "26"); // 2
      Sub_355_set.insert("26");
      all_values.push_back(Sub_355_set);
      all_compo_names.insert("Sub_355_set");

      Pty_355.add_element(Sub_355);
    }
    elt.add_element(Pty_355);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_65{"Instrmt"};
    multiset<string> Instrmt_65_set;
    Instrmt_65.add_attribute("Sym", "Symbol_t_435776651"); // 1
    Instrmt_65_set.insert("Symbol_t_435776651");
    Instrmt_65.add_attribute("Sfx", "WI"); // 1
    Instrmt_65_set.insert("WI");
    Instrmt_65.add_attribute("ID", "SecurityID_t_5724601"); // 1
    Instrmt_65_set.insert("SecurityID_t_5724601");
    Instrmt_65.add_attribute("Src", "3"); // 1
    Instrmt_65_set.insert("3");
    Instrmt_65.add_attribute("Prod", "4"); // 1
    Instrmt_65_set.insert("4");
    Instrmt_65.add_attribute("ProdCmplx", "ProductComplex_t_1728445399"); // 1
    Instrmt_65_set.insert("ProductComplex_t_1728445399");
    Instrmt_65.add_attribute("SecGrp", "SecurityGroup_t_1670492093"); // 1
    Instrmt_65_set.insert("SecurityGroup_t_1670492093");
    Instrmt_65.add_attribute("CFI", "CFICode_t_1393436873"); // 1
    Instrmt_65_set.insert("CFICode_t_1393436873");
    Instrmt_65.add_attribute("SecTyp", "CDS"); // 1
    Instrmt_65_set.insert("CDS");
    Instrmt_65.add_attribute("SubTyp", "SecuritySubType_t_956940862"); // 1
    Instrmt_65_set.insert("SecuritySubType_t_956940862");
    Instrmt_65.add_attribute("MMY", "1135475225"); // 1
    Instrmt_65_set.insert("1135475225");
    Instrmt_65.add_attribute("MatDt", "MaturityDate_t_707890061"); // 1
    Instrmt_65_set.insert("MaturityDate_t_707890061");
    Instrmt_65.add_attribute("MatTm", "1428430345"); // 1
    Instrmt_65_set.insert("1428430345");
    Instrmt_65.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_912260875"); // 1
    Instrmt_65_set.insert("SettleOnOpenFlag_t_912260875");
    Instrmt_65.add_attribute("AsgnMeth", "1205063089"); // 1
    Instrmt_65_set.insert("1205063089");
    Instrmt_65.add_attribute("Status", "2"); // 1
    Instrmt_65_set.insert("2");
    Instrmt_65.add_attribute("CpnPmt", "CouponPaymentDate_t_1624429271"); // 1
    Instrmt_65_set.insert("CouponPaymentDate_t_1624429271");
    Instrmt_65.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_65_set.insert("XR");
    Instrmt_65.add_attribute("Snrty", "SD"); // 1
    Instrmt_65_set.insert("SD");
    Instrmt_65.add_attribute("NotlPctOut", "16353279.920000"); // 1
    Instrmt_65_set.insert("16353279.920000");
    Instrmt_65.add_attribute("OrigNotlPctOut", "9718283.020000"); // 1
    Instrmt_65_set.insert("9718283.020000");
    Instrmt_65.add_attribute("AttchPnt", "18500322.440000"); // 1
    Instrmt_65_set.insert("18500322.440000");
    Instrmt_65.add_attribute("DetchPnt", "5303203.210000"); // 1
    Instrmt_65_set.insert("5303203.210000");
    Instrmt_65.add_attribute("Issued", "IssueDate_t_1385697705"); // 1
    Instrmt_65_set.insert("IssueDate_t_1385697705");
    Instrmt_65.add_attribute("RepoCollSecTyp", "608366784"); // 1
    Instrmt_65_set.insert("608366784");
    Instrmt_65.add_attribute("RepoTrm", "1027588853"); // 1
    Instrmt_65_set.insert("1027588853");
    Instrmt_65.add_attribute("RepoRt", "19343428.440000"); // 1
    Instrmt_65_set.insert("19343428.440000");
    Instrmt_65.add_attribute("Fctr", "8435806.450000"); // 1
    Instrmt_65_set.insert("8435806.450000");
    Instrmt_65.add_attribute("CrdRtg", "CreditRating_t_1703889966"); // 1
    Instrmt_65_set.insert("CreditRating_t_1703889966");
    Instrmt_65.add_attribute("Rgstry", "InstrRegistry_t_1028928704"); // 1
    Instrmt_65_set.insert("InstrRegistry_t_1028928704");
    Instrmt_65.add_attribute("IssuCtry", "1917939619"); // 1
    Instrmt_65_set.insert("1917939619");
    Instrmt_65.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2139666617"); // 1
    Instrmt_65_set.insert("StateOrProvinceOfIssue_t_2139666617");
    Instrmt_65.add_attribute("Lcl", "LocaleOfIssue_t_153244501"); // 1
    Instrmt_65_set.insert("LocaleOfIssue_t_153244501");
    Instrmt_65.add_attribute("Redeem", "RedemptionDate_t_1923664220"); // 1
    Instrmt_65_set.insert("RedemptionDate_t_1923664220");
    Instrmt_65.add_attribute("StrkPx", "12183342.060000"); // 1
    Instrmt_65_set.insert("12183342.060000");
    Instrmt_65.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_65_set.insert("GBP");
    Instrmt_65.add_attribute("StrkMult", "7413426.510000"); // 1
    Instrmt_65_set.insert("7413426.510000");
    Instrmt_65.add_attribute("StrkValu", "11603365.290000"); // 1
    Instrmt_65_set.insert("11603365.290000");
    Instrmt_65.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_65_set.insert("2");
    Instrmt_65.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_65_set.insert("4");
    Instrmt_65.add_attribute("StrkPxBndryPrcsn", "1483281.060000"); // 1
    Instrmt_65_set.insert("1483281.060000");
    Instrmt_65.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_65_set.insert("3");
    Instrmt_65.add_attribute("OptAt", "979230211"); // 1
    Instrmt_65_set.insert("979230211");
    Instrmt_65.add_attribute("Mult", "10605889.810000"); // 1
    Instrmt_65_set.insert("10605889.810000");
    Instrmt_65.add_attribute("MultTyp", "0"); // 1
    Instrmt_65_set.insert("0");
    Instrmt_65.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_65_set.insert("2");
    Instrmt_65.add_attribute("MinPxIncr", "5375346.050000"); // 1
    Instrmt_65_set.insert("5375346.050000");
    Instrmt_65.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1289453839"); // 1
    Instrmt_65_set.insert("MinPriceIncrementAmount_t_1289453839");
    Instrmt_65.add_attribute("UOM", "Alw"); // 1
    Instrmt_65_set.insert("Alw");
    Instrmt_65.add_attribute("UOMQty", "253789.490000"); // 1
    Instrmt_65_set.insert("253789.490000");
    Instrmt_65.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_65_set.insert("Gal");
    Instrmt_65.add_attribute("PxUOMQty", "15332261.710000"); // 1
    Instrmt_65_set.insert("15332261.710000");
    Instrmt_65.add_attribute("SettlMeth", "C"); // 1
    Instrmt_65_set.insert("C");
    Instrmt_65.add_attribute("ExerStyle", "0"); // 1
    Instrmt_65_set.insert("0");
    Instrmt_65.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_65_set.insert("3");
    Instrmt_65.add_attribute("OptPayAmt", "OptPayoutAmount_t_1583288123"); // 1
    Instrmt_65_set.insert("OptPayoutAmount_t_1583288123");
    Instrmt_65.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_65_set.insert("INT");
    Instrmt_65.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_65_set.insert("CDS");
    Instrmt_65.add_attribute("ListMeth", "1"); // 1
    Instrmt_65_set.insert("1");
    Instrmt_65.add_attribute("CapPx", "1678004.500000"); // 1
    Instrmt_65_set.insert("1678004.500000");
    Instrmt_65.add_attribute("FlrPx", "6081459.250000"); // 1
    Instrmt_65_set.insert("6081459.250000");
    Instrmt_65.add_attribute("PutCall", "0"); // 1
    Instrmt_65_set.insert("0");
    Instrmt_65.add_attribute("FlexInd", "true"); // 1
    Instrmt_65_set.insert("true");
    Instrmt_65.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_65_set.insert("false");
    Instrmt_65.add_attribute("TmUnit", "H"); // 1
    Instrmt_65_set.insert("H");
    Instrmt_65.add_attribute("CpnRt", "879446.080000"); // 1
    Instrmt_65_set.insert("879446.080000");
    Instrmt_65.add_attribute("Exch", "SecurityExchange_t_1888952469"); // 1
    Instrmt_65_set.insert("SecurityExchange_t_1888952469");
    Instrmt_65.add_attribute("PosLmt", "944070620"); // 1
    Instrmt_65_set.insert("944070620");
    Instrmt_65.add_attribute("NTPosLmt", "1248281137"); // 1
    Instrmt_65_set.insert("1248281137");
    Instrmt_65.add_attribute("Issr", "Issuer_t_211545715"); // 1
    Instrmt_65_set.insert("Issuer_t_211545715");
    Instrmt_65.add_attribute("EncIssrLen", "494870485"); // 1
    Instrmt_65_set.insert("494870485");
    Instrmt_65.add_attribute("EncIssr", "EncodedIssuer_t_1396609243"); // 1
    Instrmt_65_set.insert("EncodedIssuer_t_1396609243");
    Instrmt_65.add_attribute("Desc", "SecurityDesc_t_1389512669"); // 1
    Instrmt_65_set.insert("SecurityDesc_t_1389512669");
    Instrmt_65.add_attribute("EncSecDescLen", "1474100696"); // 1
    Instrmt_65_set.insert("1474100696");
    Instrmt_65.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_309714577"); // 1
    Instrmt_65_set.insert("EncodedSecurityDesc_t_309714577");
    Instrmt_65.add_attribute("Pool", "Pool_t_1625059065"); // 1
    Instrmt_65_set.insert("Pool_t_1625059065");
    Instrmt_65.add_attribute("CSetMo", "1206307410"); // 1
    Instrmt_65_set.insert("1206307410");
    Instrmt_65.add_attribute("CPPgm", "1"); // 1
    Instrmt_65_set.insert("1");
    Instrmt_65.add_attribute("CPRegT", "CPRegType_t_767029256"); // 1
    Instrmt_65_set.insert("CPRegType_t_767029256");
    Instrmt_65.add_attribute("Dated", "DatedDate_t_889501338"); // 1
    Instrmt_65_set.insert("DatedDate_t_889501338");
    Instrmt_65.add_attribute("IntAcrl", "InterestAccrualDate_t_872628131"); // 1
    Instrmt_65_set.insert("InterestAccrualDate_t_872628131");
    all_values.push_back(Instrmt_65_set);
    all_compo_names.insert("Instrmt_65_set");

    {
      xml_element AID_68{"AID"};
      multiset<string> AID_68_set;
      AID_68.add_attribute("AltID", "SecurityAltID_t_880827749"); // 2
      AID_68_set.insert("SecurityAltID_t_880827749");
      AID_68.add_attribute("AltIDSrc", "E"); // 2
      AID_68_set.insert("E");
      all_values.push_back(AID_68_set);
      all_compo_names.insert("AID_68_set");

      Instrmt_65.add_element(AID_68);
    }
    {
      xml_element SecXML_68{"SecXML"};
      multiset<string> SecXML_68_set;
      SecXML_68.add_attribute("Schema", "SecurityXMLSchema_t_1428327401"); // 2
      SecXML_68_set.insert("SecurityXMLSchema_t_1428327401");
      all_values.push_back(SecXML_68_set);
      all_compo_names.insert("SecXML_68_set");

      Instrmt_65.add_element(SecXML_68);
    }
    {
      xml_element Evnt_68{"Evnt"};
      multiset<string> Evnt_68_set;
      Evnt_68.add_attribute("EventTyp", "19"); // 2
      Evnt_68_set.insert("19");
      Evnt_68.add_attribute("Dt", "EventDate_t_269353169"); // 2
      Evnt_68_set.insert("EventDate_t_269353169");
      Evnt_68.add_attribute("Tm", "EventTime_t_864131876"); // 2
      Evnt_68_set.insert("EventTime_t_864131876");
      Evnt_68.add_attribute("Px", "15191956.930000"); // 2
      Evnt_68_set.insert("15191956.930000");
      Evnt_68.add_attribute("Txt", "EventText_t_1107043123"); // 2
      Evnt_68_set.insert("EventText_t_1107043123");
      all_values.push_back(Evnt_68_set);
      all_compo_names.insert("Evnt_68_set");

      Instrmt_65.add_element(Evnt_68);
    }
    {
      xml_element Pty_356{"Pty"};
      multiset<string> Pty_356_set;
      Pty_356.add_attribute("ID", "InstrumentPartyID_t_2003826317"); // 2
      Pty_356_set.insert("InstrumentPartyID_t_2003826317");
      Pty_356.add_attribute("Src", "1"); // 2
      Pty_356_set.insert("1");
      Pty_356.add_attribute("R", "29"); // 2
      Pty_356_set.insert("29");
      all_values.push_back(Pty_356_set);
      all_compo_names.insert("Pty_356_set");

      {
        xml_element Sub_356{"Sub"};
        multiset<string> Sub_356_set;
        Sub_356.add_attribute("ID", "InstrumentPartySubID_t_988220079"); // 3
        Sub_356_set.insert("InstrumentPartySubID_t_988220079");
        Sub_356.add_attribute("Typ", "15"); // 3
        Sub_356_set.insert("15");
        all_values.push_back(Sub_356_set);
        all_compo_names.insert("Sub_356_set");

        Pty_356.add_element(Sub_356);
      }
      Instrmt_65.add_element(Pty_356);
    }
    {
      xml_element CmplxEvnt_65{"CmplxEvnt"};
      multiset<string> CmplxEvnt_65_set;
      CmplxEvnt_65.add_attribute("Typ", "1"); // 2
      CmplxEvnt_65_set.insert("1");
      CmplxEvnt_65.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1190948048"); // 2
      CmplxEvnt_65_set.insert("ComplexOptPayoutAmount_t_1190948048");
      CmplxEvnt_65.add_attribute("Px", "20959857.040000"); // 2
      CmplxEvnt_65_set.insert("20959857.040000");
      CmplxEvnt_65.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_65_set.insert("3");
      CmplxEvnt_65.add_attribute("PxBndryPrcsn", "21350186.680000"); // 2
      CmplxEvnt_65_set.insert("21350186.680000");
      CmplxEvnt_65.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_65_set.insert("1");
      CmplxEvnt_65.add_attribute("Cond", "1"); // 2
      CmplxEvnt_65_set.insert("1");
      all_values.push_back(CmplxEvnt_65_set);
      all_compo_names.insert("CmplxEvnt_65_set");

      {
        xml_element EvntDts_65{"EvntDts"};
        multiset<string> EvntDts_65_set;
        EvntDts_65.add_attribute("StartDt", "ComplexEventStartDate_t_482405505"); // 3
        EvntDts_65_set.insert("ComplexEventStartDate_t_482405505");
        EvntDts_65.add_attribute("EndDt", "ComplexEventEndDate_t_445908788"); // 3
        EvntDts_65_set.insert("ComplexEventEndDate_t_445908788");
        all_values.push_back(EvntDts_65_set);
        all_compo_names.insert("EvntDts_65_set");

        {
          xml_element EvntTms_65{"EvntTms"};
          multiset<string> EvntTms_65_set;
          EvntTms_65.add_attribute("StartTm", "1294559103"); // 4
          EvntTms_65_set.insert("1294559103");
          EvntTms_65.add_attribute("EndTm", "1956506202"); // 4
          EvntTms_65_set.insert("1956506202");
          all_values.push_back(EvntTms_65_set);
          all_compo_names.insert("EvntTms_65_set");

          EvntDts_65.add_element(EvntTms_65);
        }
        CmplxEvnt_65.add_element(EvntDts_65);
      }
      Instrmt_65.add_element(CmplxEvnt_65);
    }
    elt.add_element(Instrmt_65);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_23{"FinDetls"};
    multiset<string> FinDetls_23_set;
    FinDetls_23.add_attribute("AgmtDesc", "AgreementDesc_t_755623365"); // 1
    FinDetls_23_set.insert("AgreementDesc_t_755623365");
    FinDetls_23.add_attribute("AgmtID", "AgreementID_t_772134520"); // 1
    FinDetls_23_set.insert("AgreementID_t_772134520");
    FinDetls_23.add_attribute("AgmtDt", "AgreementDate_t_1015329964"); // 1
    FinDetls_23_set.insert("AgreementDate_t_1015329964");
    FinDetls_23.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_23_set.insert("USD");
    FinDetls_23.add_attribute("TrmTyp", "3"); // 1
    FinDetls_23_set.insert("3");
    FinDetls_23.add_attribute("StartDt", "StartDate_t_328017030"); // 1
    FinDetls_23_set.insert("StartDate_t_328017030");
    FinDetls_23.add_attribute("EndDt", "EndDate_t_272507877"); // 1
    FinDetls_23_set.insert("EndDate_t_272507877");
    FinDetls_23.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_23_set.insert("0");
    FinDetls_23.add_attribute("MgnRatio", "17563444.310000"); // 1
    FinDetls_23_set.insert("17563444.310000");
    all_values.push_back(FinDetls_23_set);
    all_compo_names.insert("FinDetls_23_set");

    elt.add_element(FinDetls_23);
  } // end FinDetls
  { // Undly
    xml_element Undly_91{"Undly"};
    multiset<string> Undly_91_set;
    Undly_91.add_attribute("Sym", "UnderlyingSymbol_t_301944685"); // 1
    Undly_91_set.insert("UnderlyingSymbol_t_301944685");
    Undly_91.add_attribute("Sfx", "WI"); // 1
    Undly_91_set.insert("WI");
    Undly_91.add_attribute("ID", "UnderlyingSecurityID_t_2024543870"); // 1
    Undly_91_set.insert("UnderlyingSecurityID_t_2024543870");
    Undly_91.add_attribute("Src", "9"); // 1
    Undly_91_set.insert("9");
    Undly_91.add_attribute("Prod", "7"); // 1
    Undly_91_set.insert("7");
    Undly_91.add_attribute("CFI", "UnderlyingCFICode_t_1564056366"); // 1
    Undly_91_set.insert("UnderlyingCFICode_t_1564056366");
    Undly_91.add_attribute("SecTyp", "CD"); // 1
    Undly_91_set.insert("CD");
    Undly_91.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1317555408"); // 1
    Undly_91_set.insert("UnderlyingSecuritySubType_t_1317555408");
    Undly_91.add_attribute("MMY", "1424613814"); // 1
    Undly_91_set.insert("1424613814");
    Undly_91.add_attribute("Mat", "UnderlyingMaturityDate_t_928725106"); // 1
    Undly_91_set.insert("UnderlyingMaturityDate_t_928725106");
    Undly_91.add_attribute("MatTm", "361019808"); // 1
    Undly_91_set.insert("361019808");
    Undly_91.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1373115870"); // 1
    Undly_91_set.insert("UnderlyingCouponPaymentDate_t_1373115870");
    Undly_91.add_attribute("RestrctTyp", "MR"); // 1
    Undly_91_set.insert("MR");
    Undly_91.add_attribute("Snrty", "SB"); // 1
    Undly_91_set.insert("SB");
    Undly_91.add_attribute("NotlPctOut", "4224154.150000"); // 1
    Undly_91_set.insert("4224154.150000");
    Undly_91.add_attribute("OrigNotlPctOut", "5272722.590000"); // 1
    Undly_91_set.insert("5272722.590000");
    Undly_91.add_attribute("AttchPnt", "8309603.330000"); // 1
    Undly_91_set.insert("8309603.330000");
    Undly_91.add_attribute("DetchPnt", "8683242.030000"); // 1
    Undly_91_set.insert("8683242.030000");
    Undly_91.add_attribute("Issued", "UnderlyingIssueDate_t_1821831362"); // 1
    Undly_91_set.insert("UnderlyingIssueDate_t_1821831362");
    Undly_91.add_attribute("RepoCollSecTyp", "639982887"); // 1
    Undly_91_set.insert("639982887");
    Undly_91.add_attribute("RepoTrm", "1623947569"); // 1
    Undly_91_set.insert("1623947569");
    Undly_91.add_attribute("RepoRt", "4464822.350000"); // 1
    Undly_91_set.insert("4464822.350000");
    Undly_91.add_attribute("Fctr", "16553128.520000"); // 1
    Undly_91_set.insert("16553128.520000");
    Undly_91.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1079336468"); // 1
    Undly_91_set.insert("UnderlyingCreditRating_t_1079336468");
    Undly_91.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1985646011"); // 1
    Undly_91_set.insert("UnderlyingInstrRegistry_t_1985646011");
    Undly_91.add_attribute("Ctry", "1412660506"); // 1
    Undly_91_set.insert("1412660506");
    Undly_91.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1407353499"); // 1
    Undly_91_set.insert("UnderlyingStateOrProvinceOfIssue_t_1407353499");
    Undly_91.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_110670241"); // 1
    Undly_91_set.insert("UnderlyingLocaleOfIssue_t_110670241");
    Undly_91.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1445252022"); // 1
    Undly_91_set.insert("UnderlyingRedemptionDate_t_1445252022");
    Undly_91.add_attribute("StrkPx", "10162142.820000"); // 1
    Undly_91_set.insert("10162142.820000");
    Undly_91.add_attribute("StrkCcy", "GBP"); // 1
    Undly_91_set.insert("GBP");
    Undly_91.add_attribute("OptA", "1489206942"); // 1
    Undly_91_set.insert("1489206942");
    Undly_91.add_attribute("Mult", "4930786.390000"); // 1
    Undly_91_set.insert("4930786.390000");
    Undly_91.add_attribute("MultTyp", "2"); // 1
    Undly_91_set.insert("2");
    Undly_91.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_91_set.insert("0");
    Undly_91.add_attribute("UOM", "Gal"); // 1
    Undly_91_set.insert("Gal");
    Undly_91.add_attribute("UOMQty", "19853940.770000"); // 1
    Undly_91_set.insert("19853940.770000");
    Undly_91.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_91_set.insert("MMBtu");
    Undly_91.add_attribute("PxUOMQty", "13342651.710000"); // 1
    Undly_91_set.insert("13342651.710000");
    Undly_91.add_attribute("TmUnit", "Min"); // 1
    Undly_91_set.insert("Min");
    Undly_91.add_attribute("ExerStyle", "0"); // 1
    Undly_91_set.insert("0");
    Undly_91.add_attribute("CpnRt", "5598973.930000"); // 1
    Undly_91_set.insert("5598973.930000");
    Undly_91.add_attribute("Exch", "UnderlyingSecurityExchange_t_1388861360"); // 1
    Undly_91_set.insert("UnderlyingSecurityExchange_t_1388861360");
    Undly_91.add_attribute("Issr", "UnderlyingIssuer_t_1698188666"); // 1
    Undly_91_set.insert("UnderlyingIssuer_t_1698188666");
    Undly_91.add_attribute("EncUndIssrLen", "982312808"); // 1
    Undly_91_set.insert("982312808");
    Undly_91.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1916133619"); // 1
    Undly_91_set.insert("EncodedUnderlyingIssuer_t_1916133619");
    Undly_91.add_attribute("Desc", "UnderlyingSecurityDesc_t_381665352"); // 1
    Undly_91_set.insert("UnderlyingSecurityDesc_t_381665352");
    Undly_91.add_attribute("EncUndSecDescLen", "1850637012"); // 1
    Undly_91_set.insert("1850637012");
    Undly_91.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1590481333"); // 1
    Undly_91_set.insert("EncodedUnderlyingSecurityDesc_t_1590481333");
    Undly_91.add_attribute("CPPgm", "UnderlyingCPProgram_t_1021648239"); // 1
    Undly_91_set.insert("UnderlyingCPProgram_t_1021648239");
    Undly_91.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1327100933"); // 1
    Undly_91_set.insert("UnderlyingCPRegType_t_1327100933");
    Undly_91.add_attribute("AllocPct", "20369635.680000"); // 1
    Undly_91_set.insert("20369635.680000");
    Undly_91.add_attribute("Ccy", "CAN"); // 1
    Undly_91_set.insert("CAN");
    Undly_91.add_attribute("Qty", "18751259.320000"); // 1
    Undly_91_set.insert("18751259.320000");
    Undly_91.add_attribute("SettlTyp", "5"); // 1
    Undly_91_set.insert("5");
    Undly_91.add_attribute("CashAmt", "UnderlyingCashAmount_t_1666307252"); // 1
    Undly_91_set.insert("UnderlyingCashAmount_t_1666307252");
    Undly_91.add_attribute("CashTyp", "DIFF"); // 1
    Undly_91_set.insert("DIFF");
    Undly_91.add_attribute("Px", "12399063.240000"); // 1
    Undly_91_set.insert("12399063.240000");
    Undly_91.add_attribute("DirtPx", "5350378.870000"); // 1
    Undly_91_set.insert("5350378.870000");
    Undly_91.add_attribute("EndPx", "4543309.420000"); // 1
    Undly_91_set.insert("4543309.420000");
    Undly_91.add_attribute("StartVal", "UnderlyingStartValue_t_839619384"); // 1
    Undly_91_set.insert("UnderlyingStartValue_t_839619384");
    Undly_91.add_attribute("CurVal", "UnderlyingCurrentValue_t_2024244829"); // 1
    Undly_91_set.insert("UnderlyingCurrentValue_t_2024244829");
    Undly_91.add_attribute("EndVal", "UnderlyingEndValue_t_947409582"); // 1
    Undly_91_set.insert("UnderlyingEndValue_t_947409582");
    Undly_91.add_attribute("AdjQty", "18483202.530000"); // 1
    Undly_91_set.insert("18483202.530000");
    Undly_91.add_attribute("FxRate", "16953034.510000"); // 1
    Undly_91_set.insert("16953034.510000");
    Undly_91.add_attribute("FxRateCalc", "D"); // 1
    Undly_91_set.insert("D");
    Undly_91.add_attribute("CapValu", "UnderlyingCapValue_t_1686230682"); // 1
    Undly_91_set.insert("UnderlyingCapValue_t_1686230682");
    Undly_91.add_attribute("SetMeth", "UnderlyingSettlMethod_t_536433834"); // 1
    Undly_91_set.insert("UnderlyingSettlMethod_t_536433834");
    Undly_91.add_attribute("PutCall", "43842463"); // 1
    Undly_91_set.insert("43842463");
    all_values.push_back(Undly_91_set);
    all_compo_names.insert("Undly_91_set");

    {
      xml_element UndAID_91{"UndAID"};
      multiset<string> UndAID_91_set;
      UndAID_91.add_attribute("AltID", "UnderlyingSecurityAltID_t_305382569"); // 2
      UndAID_91_set.insert("UnderlyingSecurityAltID_t_305382569");
      UndAID_91.add_attribute("AltIDSrc", "H"); // 2
      UndAID_91_set.insert("H");
      all_values.push_back(UndAID_91_set);
      all_compo_names.insert("UndAID_91_set");

      Undly_91.add_element(UndAID_91);
    }
    {
      xml_element Stip_143{"Stip"};
      multiset<string> Stip_143_set;
      Stip_143.add_attribute("Typ", "ISSUER"); // 2
      Stip_143_set.insert("ISSUER");
      Stip_143.add_attribute("Val", "UnderlyingStipValue_t_1694243929"); // 2
      Stip_143_set.insert("UnderlyingStipValue_t_1694243929");
      all_values.push_back(Stip_143_set);
      all_compo_names.insert("Stip_143_set");

      Undly_91.add_element(Stip_143);
    }
    {
      xml_element Pty_357{"Pty"};
      multiset<string> Pty_357_set;
      Pty_357.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1436772691"); // 2
      Pty_357_set.insert("UnderlyingInstrumentPartyID_t_1436772691");
      Pty_357.add_attribute("Src", "I"); // 2
      Pty_357_set.insert("I");
      Pty_357.add_attribute("R", "51"); // 2
      Pty_357_set.insert("51");
      all_values.push_back(Pty_357_set);
      all_compo_names.insert("Pty_357_set");

      {
        xml_element Sub_357{"Sub"};
        multiset<string> Sub_357_set;
        Sub_357.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1818438043"); // 3
        Sub_357_set.insert("UnderlyingInstrumentPartySubID_t_1818438043");
        Sub_357.add_attribute("Typ", "20"); // 3
        Sub_357_set.insert("20");
        all_values.push_back(Sub_357_set);
        all_compo_names.insert("Sub_357_set");

        Pty_357.add_element(Sub_357);
      }
      Undly_91.add_element(Pty_357);
    }
    elt.add_element(Undly_91);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_24{"OrdQty"};
    multiset<string> OrdQty_24_set;
    OrdQty_24.add_attribute("Qty", "9058915.850000"); // 1
    OrdQty_24_set.insert("9058915.850000");
    OrdQty_24.add_attribute("Cash", "6926026.340000"); // 1
    OrdQty_24_set.insert("6926026.340000");
    OrdQty_24.add_attribute("Pct", "4688233.140000"); // 1
    OrdQty_24_set.insert("4688233.140000");
    OrdQty_24.add_attribute("RndDir", "1"); // 1
    OrdQty_24_set.insert("1");
    OrdQty_24.add_attribute("RndMod", "12220800.780000"); // 1
    OrdQty_24_set.insert("12220800.780000");
    all_values.push_back(OrdQty_24_set);
    all_compo_names.insert("OrdQty_24_set");

    elt.add_element(OrdQty_24);
  } // end OrdQty
  { // Stip
    xml_element Stip_144{"Stip"};
    multiset<string> Stip_144_set;
    Stip_144.add_attribute("Typ", "PIECES"); // 1
    Stip_144_set.insert("PIECES");
    Stip_144.add_attribute("Val", "StipulationValue_t_1016734380"); // 1
    Stip_144_set.insert("StipulationValue_t_1016734380");
    all_values.push_back(Stip_144_set);
    all_compo_names.insert("Stip_144_set");

    elt.add_element(Stip_144);
  } // end Stip
  { // Stip
    xml_element Stip_145{"Stip"};
    multiset<string> Stip_145_set;
    Stip_145.add_attribute("Typ", "PPC"); // 1
    Stip_145_set.insert("PPC");
    Stip_145.add_attribute("Val", "StipulationValue_t_361326315"); // 1
    Stip_145_set.insert("StipulationValue_t_361326315");
    all_values.push_back(Stip_145_set);
    all_compo_names.insert("Stip_145_set");

    elt.add_element(Stip_145);
  } // end Stip
  { // Stip
    xml_element Stip_146{"Stip"};
    multiset<string> Stip_146_set;
    Stip_146.add_attribute("Typ", "ISSUER"); // 1
    Stip_146_set.insert("ISSUER");
    Stip_146.add_attribute("Val", "StipulationValue_t_781638559"); // 1
    Stip_146_set.insert("StipulationValue_t_781638559");
    all_values.push_back(Stip_146_set);
    all_compo_names.insert("Stip_146_set");

    elt.add_element(Stip_146);
  } // end Stip
  { // Quot
    xml_element Quot_3{"Quot"};
    multiset<string> Quot_3_set;
    Quot_3.add_attribute("Qty", "9487764.410000"); // 1
    Quot_3_set.insert("9487764.410000");
    Quot_3.add_attribute("OrdQty", "6583997.400000"); // 1
    Quot_3_set.insert("6583997.400000");
    Quot_3.add_attribute("SwapTyp", "5"); // 1
    Quot_3_set.insert("5");
    Quot_3.add_attribute("SettlTyp", "6"); // 1
    Quot_3_set.insert("6");
    Quot_3.add_attribute("SettlDt", "LegSettlDate_t_206219543"); // 1
    Quot_3_set.insert("LegSettlDate_t_206219543");
    Quot_3.add_attribute("PxTyp", "4"); // 1
    Quot_3_set.insert("4");
    Quot_3.add_attribute("BidPx", "1883600.800000"); // 1
    Quot_3_set.insert("1883600.800000");
    Quot_3.add_attribute("OfrPx", "7426533.770000"); // 1
    Quot_3_set.insert("7426533.770000");
    Quot_3.add_attribute("RefID", "LegRefID_t_516486594"); // 1
    Quot_3_set.insert("LegRefID_t_516486594");
    Quot_3.add_attribute("LegBidFwdPnts", "4937426.490000"); // 1
    Quot_3_set.insert("4937426.490000");
    Quot_3.add_attribute("LegOfrFwdPnts", "4812374.020000"); // 1
    Quot_3_set.insert("4812374.020000");
    all_values.push_back(Quot_3_set);
    all_compo_names.insert("Quot_3_set");

    {
      xml_element Leg_75{"Leg"};
      multiset<string> Leg_75_set;
      Leg_75.add_attribute("Sym", "LegSymbol_t_1120226450"); // 2
      Leg_75_set.insert("LegSymbol_t_1120226450");
      Leg_75.add_attribute("Sfx", "CD"); // 2
      Leg_75_set.insert("CD");
      Leg_75.add_attribute("ID", "LegSecurityID_t_1918010093"); // 2
      Leg_75_set.insert("LegSecurityID_t_1918010093");
      Leg_75.add_attribute("Src", "M"); // 2
      Leg_75_set.insert("M");
      Leg_75.add_attribute("Prod", "1"); // 2
      Leg_75_set.insert("1");
      Leg_75.add_attribute("CFI", "LegCFICode_t_1588964488"); // 2
      Leg_75_set.insert("LegCFICode_t_1588964488");
      Leg_75.add_attribute("SecTyp", "TBA"); // 2
      Leg_75_set.insert("TBA");
      Leg_75.add_attribute("SecSubTyp", "LegSecuritySubType_t_261804767"); // 2
      Leg_75_set.insert("LegSecuritySubType_t_261804767");
      Leg_75.add_attribute("MMY", "134083474"); // 2
      Leg_75_set.insert("134083474");
      Leg_75.add_attribute("Mat", "LegMaturityDate_t_169341162"); // 2
      Leg_75_set.insert("LegMaturityDate_t_169341162");
      Leg_75.add_attribute("MatTm", "1057176273"); // 2
      Leg_75_set.insert("1057176273");
      Leg_75.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1356163552"); // 2
      Leg_75_set.insert("LegCouponPaymentDate_t_1356163552");
      Leg_75.add_attribute("Issued", "LegIssueDate_t_897118230"); // 2
      Leg_75_set.insert("LegIssueDate_t_897118230");
      Leg_75.add_attribute("RepoCollSecTyp", "1580190063"); // 2
      Leg_75_set.insert("1580190063");
      Leg_75.add_attribute("RepoTrm", "225414284"); // 2
      Leg_75_set.insert("225414284");
      Leg_75.add_attribute("RepoRt", "11437189.020000"); // 2
      Leg_75_set.insert("11437189.020000");
      Leg_75.add_attribute("Fctr", "19415163.780000"); // 2
      Leg_75_set.insert("19415163.780000");
      Leg_75.add_attribute("CrdRtg", "LegCreditRating_t_334571341"); // 2
      Leg_75_set.insert("LegCreditRating_t_334571341");
      Leg_75.add_attribute("Rgstry", "LegInstrRegistry_t_1925357461"); // 2
      Leg_75_set.insert("LegInstrRegistry_t_1925357461");
      Leg_75.add_attribute("Ctry", "609689988"); // 2
      Leg_75_set.insert("609689988");
      Leg_75.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1283347782"); // 2
      Leg_75_set.insert("LegStateOrProvinceOfIssue_t_1283347782");
      Leg_75.add_attribute("Lcl", "LegLocaleOfIssue_t_436273553"); // 2
      Leg_75_set.insert("LegLocaleOfIssue_t_436273553");
      Leg_75.add_attribute("Redeem", "LegRedemptionDate_t_225273179"); // 2
      Leg_75_set.insert("LegRedemptionDate_t_225273179");
      Leg_75.add_attribute("Strk", "19329608.280000"); // 2
      Leg_75_set.insert("19329608.280000");
      Leg_75.add_attribute("StrkCcy", "JPY"); // 2
      Leg_75_set.insert("JPY");
      Leg_75.add_attribute("OptA", "2121320908"); // 2
      Leg_75_set.insert("2121320908");
      Leg_75.add_attribute("Cmult", "13851464.740000"); // 2
      Leg_75_set.insert("13851464.740000");
      Leg_75.add_attribute("MultTyp", "1"); // 2
      Leg_75_set.insert("1");
      Leg_75.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_75_set.insert("4");
      Leg_75.add_attribute("UOM", "MMbbl"); // 2
      Leg_75_set.insert("MMbbl");
      Leg_75.add_attribute("UOMQty", "1871467.070000"); // 2
      Leg_75_set.insert("1871467.070000");
      Leg_75.add_attribute("PxUOM", "t"); // 2
      Leg_75_set.insert("t");
      Leg_75.add_attribute("PxUOMQty", "16369103.210000"); // 2
      Leg_75_set.insert("16369103.210000");
      Leg_75.add_attribute("TmUnit", "Mo"); // 2
      Leg_75_set.insert("Mo");
      Leg_75.add_attribute("ExerStyle", "0"); // 2
      Leg_75_set.insert("0");
      Leg_75.add_attribute("CpnRt", "10783911.610000"); // 2
      Leg_75_set.insert("10783911.610000");
      Leg_75.add_attribute("Exch", "LegSecurityExchange_t_446460023"); // 2
      Leg_75_set.insert("LegSecurityExchange_t_446460023");
      Leg_75.add_attribute("Issr", "LegIssuer_t_125800788"); // 2
      Leg_75_set.insert("LegIssuer_t_125800788");
      Leg_75.add_attribute("EncLegIssrLen", "1212474635"); // 2
      Leg_75_set.insert("1212474635");
      Leg_75.add_attribute("EncLegIssr", "EncodedLegIssuer_t_615801185"); // 2
      Leg_75_set.insert("EncodedLegIssuer_t_615801185");
      Leg_75.add_attribute("Desc", "LegSecurityDesc_t_1182977062"); // 2
      Leg_75_set.insert("LegSecurityDesc_t_1182977062");
      Leg_75.add_attribute("EncLegSecDescLen", "421154540"); // 2
      Leg_75_set.insert("421154540");
      Leg_75.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1512919415"); // 2
      Leg_75_set.insert("EncodedLegSecurityDesc_t_1512919415");
      Leg_75.add_attribute("RatioQty", "6156834.770000"); // 2
      Leg_75_set.insert("6156834.770000");
      Leg_75.add_attribute("Side", "9"); // 2
      Leg_75_set.insert("9");
      Leg_75.add_attribute("Ccy", "JPY"); // 2
      Leg_75_set.insert("JPY");
      Leg_75.add_attribute("Pool", "LegPool_t_981140165"); // 2
      Leg_75_set.insert("LegPool_t_981140165");
      Leg_75.add_attribute("Dated", "LegDatedDate_t_287028482"); // 2
      Leg_75_set.insert("LegDatedDate_t_287028482");
      Leg_75.add_attribute("CSetMo", "1019406196"); // 2
      Leg_75_set.insert("1019406196");
      Leg_75.add_attribute("IntAcrl", "LegInterestAccrualDate_t_117004299"); // 2
      Leg_75_set.insert("LegInterestAccrualDate_t_117004299");
      Leg_75.add_attribute("PutCall", "723302035"); // 2
      Leg_75_set.insert("723302035");
      Leg_75.add_attribute("LegOptionRatio", "12446793.750000"); // 2
      Leg_75_set.insert("12446793.750000");
      Leg_75.add_attribute("Px", "20499651.270000"); // 2
      Leg_75_set.insert("20499651.270000");
      all_values.push_back(Leg_75_set);
      all_compo_names.insert("Leg_75_set");

      {
        xml_element LegAID_70{"LegAID"};
        multiset<string> LegAID_70_set;
        LegAID_70.add_attribute("SecAltID", "LegSecurityAltID_t_1365795132"); // 3
        LegAID_70_set.insert("LegSecurityAltID_t_1365795132");
        LegAID_70.add_attribute("SecAltIDSrc", "9"); // 3
        LegAID_70_set.insert("9");
        all_values.push_back(LegAID_70_set);
        all_compo_names.insert("LegAID_70_set");

        Leg_75.add_element(LegAID_70);
      }
      Quot_3.add_element(Leg_75);
    }
    {
      xml_element Stip_147{"Stip"};
      multiset<string> Stip_147_set;
      Stip_147.add_attribute("StipTyp", "REFINT"); // 2
      Stip_147_set.insert("REFINT");
      Stip_147.add_attribute("StipVal", "LegStipulationValue_t_603457958"); // 2
      Stip_147_set.insert("LegStipulationValue_t_603457958");
      all_values.push_back(Stip_147_set);
      all_compo_names.insert("Stip_147_set");

      Quot_3.add_element(Stip_147);
    }
    {
      xml_element Pty_358{"Pty"};
      multiset<string> Pty_358_set;
      Pty_358.add_attribute("ID", "NestedPartyID_t_1009516942"); // 2
      Pty_358_set.insert("NestedPartyID_t_1009516942");
      Pty_358.add_attribute("Src", "9"); // 2
      Pty_358_set.insert("9");
      Pty_358.add_attribute("R", "41"); // 2
      Pty_358_set.insert("41");
      all_values.push_back(Pty_358_set);
      all_compo_names.insert("Pty_358_set");

      {
        xml_element Sub_358{"Sub"};
        multiset<string> Sub_358_set;
        Sub_358.add_attribute("ID", "NestedPartySubID_t_1196663649"); // 3
        Sub_358_set.insert("NestedPartySubID_t_1196663649");
        Sub_358.add_attribute("Typ", "28"); // 3
        Sub_358_set.insert("28");
        all_values.push_back(Sub_358_set);
        all_compo_names.insert("Sub_358_set");

        Pty_358.add_element(Sub_358);
      }
      Quot_3.add_element(Pty_358);
    }
    {
      xml_element BnchmkCurve_8{"BnchmkCurve"};
      multiset<string> BnchmkCurve_8_set;
      BnchmkCurve_8.add_attribute("Ccy", "GBP"); // 2
      BnchmkCurve_8_set.insert("GBP");
      BnchmkCurve_8.add_attribute("Name", "LIBID"); // 2
      BnchmkCurve_8_set.insert("LIBID");
      BnchmkCurve_8.add_attribute("Point", "LegBenchmarkCurvePoint_t_890176020"); // 2
      BnchmkCurve_8_set.insert("LegBenchmarkCurvePoint_t_890176020");
      BnchmkCurve_8.add_attribute("Px", "2415821.990000"); // 2
      BnchmkCurve_8_set.insert("2415821.990000");
      BnchmkCurve_8.add_attribute("PxTyp", "841778297"); // 2
      BnchmkCurve_8_set.insert("841778297");
      all_values.push_back(BnchmkCurve_8_set);
      all_compo_names.insert("BnchmkCurve_8_set");

      Quot_3.add_element(BnchmkCurve_8);
    }
    elt.add_element(Quot_3);
  } // end Quot
  { // Quot
    xml_element Quot_4{"Quot"};
    multiset<string> Quot_4_set;
    Quot_4.add_attribute("Qty", "21026506.550000"); // 1
    Quot_4_set.insert("21026506.550000");
    Quot_4.add_attribute("OrdQty", "8573833.840000"); // 1
    Quot_4_set.insert("8573833.840000");
    Quot_4.add_attribute("SwapTyp", "5"); // 1
    Quot_4_set.insert("5");
    Quot_4.add_attribute("SettlTyp", "B"); // 1
    Quot_4_set.insert("B");
    Quot_4.add_attribute("SettlDt", "LegSettlDate_t_222819152"); // 1
    Quot_4_set.insert("LegSettlDate_t_222819152");
    Quot_4.add_attribute("PxTyp", "5"); // 1
    Quot_4_set.insert("5");
    Quot_4.add_attribute("BidPx", "10228903.720000"); // 1
    Quot_4_set.insert("10228903.720000");
    Quot_4.add_attribute("OfrPx", "7319738.210000"); // 1
    Quot_4_set.insert("7319738.210000");
    Quot_4.add_attribute("RefID", "LegRefID_t_902671396"); // 1
    Quot_4_set.insert("LegRefID_t_902671396");
    Quot_4.add_attribute("LegBidFwdPnts", "20040305.370000"); // 1
    Quot_4_set.insert("20040305.370000");
    Quot_4.add_attribute("LegOfrFwdPnts", "10190023.040000"); // 1
    Quot_4_set.insert("10190023.040000");
    all_values.push_back(Quot_4_set);
    all_compo_names.insert("Quot_4_set");

    {
      xml_element Leg_76{"Leg"};
      multiset<string> Leg_76_set;
      Leg_76.add_attribute("Sym", "LegSymbol_t_1922077592"); // 2
      Leg_76_set.insert("LegSymbol_t_1922077592");
      Leg_76.add_attribute("Sfx", "WI"); // 2
      Leg_76_set.insert("WI");
      Leg_76.add_attribute("ID", "LegSecurityID_t_1742304339"); // 2
      Leg_76_set.insert("LegSecurityID_t_1742304339");
      Leg_76.add_attribute("Src", "B"); // 2
      Leg_76_set.insert("B");
      Leg_76.add_attribute("Prod", "12"); // 2
      Leg_76_set.insert("12");
      Leg_76.add_attribute("CFI", "LegCFICode_t_960615823"); // 2
      Leg_76_set.insert("LegCFICode_t_960615823");
      Leg_76.add_attribute("SecTyp", "LOFC"); // 2
      Leg_76_set.insert("LOFC");
      Leg_76.add_attribute("SecSubTyp", "LegSecuritySubType_t_1899835056"); // 2
      Leg_76_set.insert("LegSecuritySubType_t_1899835056");
      Leg_76.add_attribute("MMY", "1564073781"); // 2
      Leg_76_set.insert("1564073781");
      Leg_76.add_attribute("Mat", "LegMaturityDate_t_1823903300"); // 2
      Leg_76_set.insert("LegMaturityDate_t_1823903300");
      Leg_76.add_attribute("MatTm", "96250056"); // 2
      Leg_76_set.insert("96250056");
      Leg_76.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1886431967"); // 2
      Leg_76_set.insert("LegCouponPaymentDate_t_1886431967");
      Leg_76.add_attribute("Issued", "LegIssueDate_t_873083302"); // 2
      Leg_76_set.insert("LegIssueDate_t_873083302");
      Leg_76.add_attribute("RepoCollSecTyp", "948231544"); // 2
      Leg_76_set.insert("948231544");
      Leg_76.add_attribute("RepoTrm", "1698216826"); // 2
      Leg_76_set.insert("1698216826");
      Leg_76.add_attribute("RepoRt", "6682054.780000"); // 2
      Leg_76_set.insert("6682054.780000");
      Leg_76.add_attribute("Fctr", "16642090.520000"); // 2
      Leg_76_set.insert("16642090.520000");
      Leg_76.add_attribute("CrdRtg", "LegCreditRating_t_440909198"); // 2
      Leg_76_set.insert("LegCreditRating_t_440909198");
      Leg_76.add_attribute("Rgstry", "LegInstrRegistry_t_909787677"); // 2
      Leg_76_set.insert("LegInstrRegistry_t_909787677");
      Leg_76.add_attribute("Ctry", "358503701"); // 2
      Leg_76_set.insert("358503701");
      Leg_76.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_396076206"); // 2
      Leg_76_set.insert("LegStateOrProvinceOfIssue_t_396076206");
      Leg_76.add_attribute("Lcl", "LegLocaleOfIssue_t_1767171061"); // 2
      Leg_76_set.insert("LegLocaleOfIssue_t_1767171061");
      Leg_76.add_attribute("Redeem", "LegRedemptionDate_t_235775412"); // 2
      Leg_76_set.insert("LegRedemptionDate_t_235775412");
      Leg_76.add_attribute("Strk", "7723977.530000"); // 2
      Leg_76_set.insert("7723977.530000");
      Leg_76.add_attribute("StrkCcy", "EUR"); // 2
      Leg_76_set.insert("EUR");
      Leg_76.add_attribute("OptA", "1795288125"); // 2
      Leg_76_set.insert("1795288125");
      Leg_76.add_attribute("Cmult", "5744803.870000"); // 2
      Leg_76_set.insert("5744803.870000");
      Leg_76.add_attribute("MultTyp", "2"); // 2
      Leg_76_set.insert("2");
      Leg_76.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_76_set.insert("0");
      Leg_76.add_attribute("UOM", "oz_tr"); // 2
      Leg_76_set.insert("oz_tr");
      Leg_76.add_attribute("UOMQty", "14059959.420000"); // 2
      Leg_76_set.insert("14059959.420000");
      Leg_76.add_attribute("PxUOM", "MWh"); // 2
      Leg_76_set.insert("MWh");
      Leg_76.add_attribute("PxUOMQty", "11883033.820000"); // 2
      Leg_76_set.insert("11883033.820000");
      Leg_76.add_attribute("TmUnit", "Min"); // 2
      Leg_76_set.insert("Min");
      Leg_76.add_attribute("ExerStyle", "1"); // 2
      Leg_76_set.insert("1");
      Leg_76.add_attribute("CpnRt", "14355.580000"); // 2
      Leg_76_set.insert("14355.580000");
      Leg_76.add_attribute("Exch", "LegSecurityExchange_t_1092171972"); // 2
      Leg_76_set.insert("LegSecurityExchange_t_1092171972");
      Leg_76.add_attribute("Issr", "LegIssuer_t_1253770280"); // 2
      Leg_76_set.insert("LegIssuer_t_1253770280");
      Leg_76.add_attribute("EncLegIssrLen", "1565509339"); // 2
      Leg_76_set.insert("1565509339");
      Leg_76.add_attribute("EncLegIssr", "EncodedLegIssuer_t_768591624"); // 2
      Leg_76_set.insert("EncodedLegIssuer_t_768591624");
      Leg_76.add_attribute("Desc", "LegSecurityDesc_t_1350020337"); // 2
      Leg_76_set.insert("LegSecurityDesc_t_1350020337");
      Leg_76.add_attribute("EncLegSecDescLen", "1304457659"); // 2
      Leg_76_set.insert("1304457659");
      Leg_76.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1641674926"); // 2
      Leg_76_set.insert("EncodedLegSecurityDesc_t_1641674926");
      Leg_76.add_attribute("RatioQty", "1507682.330000"); // 2
      Leg_76_set.insert("1507682.330000");
      Leg_76.add_attribute("Side", "6"); // 2
      Leg_76_set.insert("6");
      Leg_76.add_attribute("Ccy", "EUR"); // 2
      Leg_76_set.insert("EUR");
      Leg_76.add_attribute("Pool", "LegPool_t_1296100036"); // 2
      Leg_76_set.insert("LegPool_t_1296100036");
      Leg_76.add_attribute("Dated", "LegDatedDate_t_1072184433"); // 2
      Leg_76_set.insert("LegDatedDate_t_1072184433");
      Leg_76.add_attribute("CSetMo", "25997339"); // 2
      Leg_76_set.insert("25997339");
      Leg_76.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1692176242"); // 2
      Leg_76_set.insert("LegInterestAccrualDate_t_1692176242");
      Leg_76.add_attribute("PutCall", "691871847"); // 2
      Leg_76_set.insert("691871847");
      Leg_76.add_attribute("LegOptionRatio", "2617727.510000"); // 2
      Leg_76_set.insert("2617727.510000");
      Leg_76.add_attribute("Px", "3170903.470000"); // 2
      Leg_76_set.insert("3170903.470000");
      all_values.push_back(Leg_76_set);
      all_compo_names.insert("Leg_76_set");

      {
        xml_element LegAID_71{"LegAID"};
        multiset<string> LegAID_71_set;
        LegAID_71.add_attribute("SecAltID", "LegSecurityAltID_t_534378412"); // 3
        LegAID_71_set.insert("LegSecurityAltID_t_534378412");
        LegAID_71.add_attribute("SecAltIDSrc", "F"); // 3
        LegAID_71_set.insert("F");
        all_values.push_back(LegAID_71_set);
        all_compo_names.insert("LegAID_71_set");

        Leg_76.add_element(LegAID_71);
      }
      Quot_4.add_element(Leg_76);
    }
    {
      xml_element Stip_148{"Stip"};
      multiset<string> Stip_148_set;
      Stip_148.add_attribute("StipTyp", "MAXORDQTY"); // 2
      Stip_148_set.insert("MAXORDQTY");
      Stip_148.add_attribute("StipVal", "LegStipulationValue_t_1108858799"); // 2
      Stip_148_set.insert("LegStipulationValue_t_1108858799");
      all_values.push_back(Stip_148_set);
      all_compo_names.insert("Stip_148_set");

      Quot_4.add_element(Stip_148);
    }
    {
      xml_element Pty_359{"Pty"};
      multiset<string> Pty_359_set;
      Pty_359.add_attribute("ID", "NestedPartyID_t_474421702"); // 2
      Pty_359_set.insert("NestedPartyID_t_474421702");
      Pty_359.add_attribute("Src", "9"); // 2
      Pty_359_set.insert("9");
      Pty_359.add_attribute("R", "45"); // 2
      Pty_359_set.insert("45");
      all_values.push_back(Pty_359_set);
      all_compo_names.insert("Pty_359_set");

      {
        xml_element Sub_359{"Sub"};
        multiset<string> Sub_359_set;
        Sub_359.add_attribute("ID", "NestedPartySubID_t_1880417644"); // 3
        Sub_359_set.insert("NestedPartySubID_t_1880417644");
        Sub_359.add_attribute("Typ", "6"); // 3
        Sub_359_set.insert("6");
        all_values.push_back(Sub_359_set);
        all_compo_names.insert("Sub_359_set");

        Pty_359.add_element(Sub_359);
      }
      Quot_4.add_element(Pty_359);
    }
    {
      xml_element BnchmkCurve_9{"BnchmkCurve"};
      multiset<string> BnchmkCurve_9_set;
      BnchmkCurve_9.add_attribute("Ccy", "JPY"); // 2
      BnchmkCurve_9_set.insert("JPY");
      BnchmkCurve_9.add_attribute("Name", "EONIA"); // 2
      BnchmkCurve_9_set.insert("EONIA");
      BnchmkCurve_9.add_attribute("Point", "LegBenchmarkCurvePoint_t_1744596783"); // 2
      BnchmkCurve_9_set.insert("LegBenchmarkCurvePoint_t_1744596783");
      BnchmkCurve_9.add_attribute("Px", "11028915.820000"); // 2
      BnchmkCurve_9_set.insert("11028915.820000");
      BnchmkCurve_9.add_attribute("PxTyp", "1702337901"); // 2
      BnchmkCurve_9_set.insert("1702337901");
      all_values.push_back(BnchmkCurve_9_set);
      all_compo_names.insert("BnchmkCurve_9_set");

      Quot_4.add_element(BnchmkCurve_9);
    }
    elt.add_element(Quot_4);
  } // end Quot
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_29{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_29_set;
    SprdBnchmkCurve_29.add_attribute("Spread", "11626224.740000"); // 1
    SprdBnchmkCurve_29_set.insert("11626224.740000");
    SprdBnchmkCurve_29.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_29_set.insert("JPY");
    SprdBnchmkCurve_29.add_attribute("Name", "LIBOR"); // 1
    SprdBnchmkCurve_29_set.insert("LIBOR");
    SprdBnchmkCurve_29.add_attribute("Point", "BenchmarkCurvePoint_t_1365674485"); // 1
    SprdBnchmkCurve_29_set.insert("BenchmarkCurvePoint_t_1365674485");
    SprdBnchmkCurve_29.add_attribute("Px", "10556428.230000"); // 1
    SprdBnchmkCurve_29_set.insert("10556428.230000");
    SprdBnchmkCurve_29.add_attribute("PxTyp", "6"); // 1
    SprdBnchmkCurve_29_set.insert("6");
    SprdBnchmkCurve_29.add_attribute("SecID", "BenchmarkSecurityID_t_1528071241"); // 1
    SprdBnchmkCurve_29_set.insert("BenchmarkSecurityID_t_1528071241");
    SprdBnchmkCurve_29.add_attribute("SecIDSrc", "3"); // 1
    SprdBnchmkCurve_29_set.insert("3");
    all_values.push_back(SprdBnchmkCurve_29_set);
    all_compo_names.insert("SprdBnchmkCurve_29_set");

    elt.add_element(SprdBnchmkCurve_29);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_24{"Yield"};
    multiset<string> Yield_24_set;
    Yield_24.add_attribute("Typ", "TAXEQUIV"); // 1
    Yield_24_set.insert("TAXEQUIV");
    Yield_24.add_attribute("Yld", "4527720.270000"); // 1
    Yield_24_set.insert("4527720.270000");
    Yield_24.add_attribute("CalcDt", "YieldCalcDate_t_749133799"); // 1
    Yield_24_set.insert("YieldCalcDate_t_749133799");
    Yield_24.add_attribute("RedDt", "YieldRedemptionDate_t_2015579953"); // 1
    Yield_24_set.insert("YieldRedemptionDate_t_2015579953");
    Yield_24.add_attribute("RedPx", "11446438.740000"); // 1
    Yield_24_set.insert("11446438.740000");
    Yield_24.add_attribute("RedPxTyp", "10"); // 1
    Yield_24_set.insert("10");
    all_values.push_back(Yield_24_set);
    all_compo_names.insert("Yield_24_set");

    elt.add_element(Yield_24);
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
