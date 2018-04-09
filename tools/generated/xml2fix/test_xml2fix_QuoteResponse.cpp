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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteResponse_message_t_0;
  elt.add_attribute("RspID", "QuoteRespID_t_1457380421"); // 0
  QuoteResponse_message_t_0.insert("QuoteRespID_t_1457380421");
  elt.add_attribute("QID", "QuoteID_t_49719111"); // 0
  QuoteResponse_message_t_0.insert("QuoteID_t_49719111");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_495507953"); // 0
  QuoteResponse_message_t_0.insert("QuoteMsgID_t_495507953");
  elt.add_attribute("RspTyp", "8"); // 0
  QuoteResponse_message_t_0.insert("8");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1691226304"); // 0
  QuoteResponse_message_t_0.insert("ClOrdID_t_1691226304");
  elt.add_attribute("Cpcty", "P"); // 0
  QuoteResponse_message_t_0.insert("P");
  elt.add_attribute("Rstctions", "1"); // 0
  QuoteResponse_message_t_0.insert("1");
  elt.add_attribute("IOIID", "IOIID_t_1050782826"); // 0
  QuoteResponse_message_t_0.insert("IOIID_t_1050782826");
  elt.add_attribute("Typ", "3"); // 0
  QuoteResponse_message_t_0.insert("3");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  QuoteResponse_message_t_0.insert("true");
  elt.add_attribute("SesID", "6"); // 0
  QuoteResponse_message_t_0.insert("6");
  elt.add_attribute("SesSub", "6"); // 0
  QuoteResponse_message_t_0.insert("6");
  elt.add_attribute("Side", "6"); // 0
  QuoteResponse_message_t_0.insert("6");
  elt.add_attribute("MinQty", "17821025.560000"); // 0
  QuoteResponse_message_t_0.insert("17821025.560000");
  elt.add_attribute("SettlTyp", "9"); // 0
  QuoteResponse_message_t_0.insert("9");
  elt.add_attribute("SettlDt", "SettlDate_t_7124259"); // 0
  QuoteResponse_message_t_0.insert("SettlDate_t_7124259");
  elt.add_attribute("SettlDt2", "SettlDate2_t_273964832"); // 0
  QuoteResponse_message_t_0.insert("SettlDate2_t_273964832");
  elt.add_attribute("Qty2", "5960389.210000"); // 0
  QuoteResponse_message_t_0.insert("5960389.210000");
  elt.add_attribute("Ccy", "GBP"); // 0
  QuoteResponse_message_t_0.insert("GBP");
  elt.add_attribute("Acct", "Account_t_1333135844"); // 0
  QuoteResponse_message_t_0.insert("Account_t_1333135844");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  QuoteResponse_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "6"); // 0
  QuoteResponse_message_t_0.insert("6");
  elt.add_attribute("BidPx", "7049573.140000"); // 0
  QuoteResponse_message_t_0.insert("7049573.140000");
  elt.add_attribute("OfrPx", "15429029.330000"); // 0
  QuoteResponse_message_t_0.insert("15429029.330000");
  elt.add_attribute("MktBidPx", "19784254.040000"); // 0
  QuoteResponse_message_t_0.insert("19784254.040000");
  elt.add_attribute("MktOfrPx", "4344573.850000"); // 0
  QuoteResponse_message_t_0.insert("4344573.850000");
  elt.add_attribute("MinBidSz", "10693349.990000"); // 0
  QuoteResponse_message_t_0.insert("10693349.990000");
  elt.add_attribute("BidSz", "15326513.320000"); // 0
  QuoteResponse_message_t_0.insert("15326513.320000");
  elt.add_attribute("MinOfrSz", "14229941.080000"); // 0
  QuoteResponse_message_t_0.insert("14229941.080000");
  elt.add_attribute("OfrSz", "19910482.330000"); // 0
  QuoteResponse_message_t_0.insert("19910482.330000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_842548106"); // 0
  QuoteResponse_message_t_0.insert("ValidUntilTime_t_842548106");
  elt.add_attribute("BidSpotRt", "14727132.190000"); // 0
  QuoteResponse_message_t_0.insert("14727132.190000");
  elt.add_attribute("OfrSpotRt", "3390725.380000"); // 0
  QuoteResponse_message_t_0.insert("3390725.380000");
  elt.add_attribute("BidFwdPnts", "13130998.090000"); // 0
  QuoteResponse_message_t_0.insert("13130998.090000");
  elt.add_attribute("OfrFwdPnts", "10164558.760000"); // 0
  QuoteResponse_message_t_0.insert("10164558.760000");
  elt.add_attribute("MidPx", "7506003.910000"); // 0
  QuoteResponse_message_t_0.insert("7506003.910000");
  elt.add_attribute("BidYld", "49250.970000"); // 0
  QuoteResponse_message_t_0.insert("49250.970000");
  elt.add_attribute("MidYld", "20672387.020000"); // 0
  QuoteResponse_message_t_0.insert("20672387.020000");
  elt.add_attribute("OfrYld", "4165293.550000"); // 0
  QuoteResponse_message_t_0.insert("4165293.550000");
  elt.add_attribute("TxnTm", "TransactTime_t_1787536947"); // 0
  QuoteResponse_message_t_0.insert("TransactTime_t_1787536947");
  elt.add_attribute("OrdTyp", "2"); // 0
  QuoteResponse_message_t_0.insert("2");
  elt.add_attribute("BidFwdPnts2", "6870112.920000"); // 0
  QuoteResponse_message_t_0.insert("6870112.920000");
  elt.add_attribute("OfrFwdPnts2", "1307698.480000"); // 0
  QuoteResponse_message_t_0.insert("1307698.480000");
  elt.add_attribute("SettlCurrBidFxRt", "5414592.210000"); // 0
  QuoteResponse_message_t_0.insert("5414592.210000");
  elt.add_attribute("SettlCurrOfrFxRt", "10722281.490000"); // 0
  QuoteResponse_message_t_0.insert("10722281.490000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  QuoteResponse_message_t_0.insert("D");
  elt.add_attribute("Comm", "Commission_t_815424054"); // 0
  QuoteResponse_message_t_0.insert("Commission_t_815424054");
  elt.add_attribute("CommTyp", "5"); // 0
  QuoteResponse_message_t_0.insert("5");
  elt.add_attribute("CustCpcty", "4"); // 0
  QuoteResponse_message_t_0.insert("4");
  elt.add_attribute("ExDest", "ExDestination_t_1283816282"); // 0
  QuoteResponse_message_t_0.insert("ExDestination_t_1283816282");
  elt.add_attribute("ExDestIDSrc", "C"); // 0
  QuoteResponse_message_t_0.insert("C");
  elt.add_attribute("Txt", "Text_t_1320129599"); // 0
  QuoteResponse_message_t_0.insert("Text_t_1320129599");
  elt.add_attribute("EncTxtLen", "2017822265"); // 0
  QuoteResponse_message_t_0.insert("2017822265");
  elt.add_attribute("EncTxt", "EncodedText_t_1558876581"); // 0
  QuoteResponse_message_t_0.insert("EncodedText_t_1558876581");
  elt.add_attribute("Px", "7155488.840000"); // 0
  QuoteResponse_message_t_0.insert("7155488.840000");
  elt.add_attribute("PxTyp", "5"); // 0
  QuoteResponse_message_t_0.insert("5");
  all_values.push_back(QuoteResponse_message_t_0);
  all_compo_names.insert("QuoteResponse_message_t");

  { // Hdr
    xml_element Hdr_72{"Hdr"};
    multiset<string> Hdr_72_set;
    Hdr_72.add_attribute("SeqNum", "1993333966"); // 1
    Hdr_72_set.insert("1993333966");
    Hdr_72.add_attribute("SID", "SenderCompID_t_1784883883"); // 1
    Hdr_72_set.insert("SenderCompID_t_1784883883");
    Hdr_72.add_attribute("TID", "TargetCompID_t_1233931706"); // 1
    Hdr_72_set.insert("TargetCompID_t_1233931706");
    Hdr_72.add_attribute("OBID", "OnBehalfOfCompID_t_1268844426"); // 1
    Hdr_72_set.insert("OnBehalfOfCompID_t_1268844426");
    Hdr_72.add_attribute("D2ID", "DeliverToCompID_t_1628448468"); // 1
    Hdr_72_set.insert("DeliverToCompID_t_1628448468");
    Hdr_72.add_attribute("SSub", "SenderSubID_t_2076479812"); // 1
    Hdr_72_set.insert("SenderSubID_t_2076479812");
    Hdr_72.add_attribute("SLoc", "SenderLocationID_t_594073998"); // 1
    Hdr_72_set.insert("SenderLocationID_t_594073998");
    Hdr_72.add_attribute("TSub", "TargetSubID_t_1967521006"); // 1
    Hdr_72_set.insert("TargetSubID_t_1967521006");
    Hdr_72.add_attribute("TLoc", "TargetLocationID_t_1242095974"); // 1
    Hdr_72_set.insert("TargetLocationID_t_1242095974");
    Hdr_72.add_attribute("OBSub", "OnBehalfOfSubID_t_1610529874"); // 1
    Hdr_72_set.insert("OnBehalfOfSubID_t_1610529874");
    Hdr_72.add_attribute("OBLoc", "OnBehalfOfLocationID_t_570637750"); // 1
    Hdr_72_set.insert("OnBehalfOfLocationID_t_570637750");
    Hdr_72.add_attribute("D2Sub", "DeliverToSubID_t_1247021071"); // 1
    Hdr_72_set.insert("DeliverToSubID_t_1247021071");
    Hdr_72.add_attribute("D2Loc", "DeliverToLocationID_t_1530284928"); // 1
    Hdr_72_set.insert("DeliverToLocationID_t_1530284928");
    Hdr_72.add_attribute("PosDup", "Y"); // 1
    Hdr_72_set.insert("Y");
    Hdr_72.add_attribute("PosRsnd", "N"); // 1
    Hdr_72_set.insert("N");
    Hdr_72.add_attribute("Snt", "SendingTime_t_289641593"); // 1
    Hdr_72_set.insert("SendingTime_t_289641593");
    Hdr_72.add_attribute("OrigSnt", "OrigSendingTime_t_1674178397"); // 1
    Hdr_72_set.insert("OrigSendingTime_t_1674178397");
    Hdr_72.add_attribute("MsgEncd", "MessageEncoding_t_1017844219"); // 1
    Hdr_72_set.insert("MessageEncoding_t_1017844219");
    all_values.push_back(Hdr_72_set);
    all_compo_names.insert("Hdr_72_set");

    {
      xml_element Hop_72{"Hop"};
      multiset<string> Hop_72_set;
      Hop_72.add_attribute("ID", "HopCompID_t_831100814"); // 2
      Hop_72_set.insert("HopCompID_t_831100814");
      Hop_72.add_attribute("Ref", "598922898"); // 2
      Hop_72_set.insert("598922898");
      Hop_72.add_attribute("Snt", "HopSendingTime_t_1155738326"); // 2
      Hop_72_set.insert("HopSendingTime_t_1155738326");
      all_values.push_back(Hop_72_set);
      all_compo_names.insert("Hop_72_set");

      Hdr_72.add_element(Hop_72);
    }
    elt.add_element(Hdr_72);
  } // end Hdr
  { // QuotQual
    xml_element QuotQual_4{"QuotQual"};
    multiset<string> QuotQual_4_set;
    QuotQual_4.add_attribute("Qual", "C"); // 1
    QuotQual_4_set.insert("C");
    all_values.push_back(QuotQual_4_set);
    all_compo_names.insert("QuotQual_4_set");

    elt.add_element(QuotQual_4);
  } // end QuotQual
  { // QuotQual
    xml_element QuotQual_5{"QuotQual"};
    multiset<string> QuotQual_5_set;
    QuotQual_5.add_attribute("Qual", "Z"); // 1
    QuotQual_5_set.insert("Z");
    all_values.push_back(QuotQual_5_set);
    all_compo_names.insert("QuotQual_5_set");

    elt.add_element(QuotQual_5);
  } // end QuotQual
  { // QuotQual
    xml_element QuotQual_6{"QuotQual"};
    multiset<string> QuotQual_6_set;
    QuotQual_6.add_attribute("Qual", "Q"); // 1
    QuotQual_6_set.insert("Q");
    all_values.push_back(QuotQual_6_set);
    all_compo_names.insert("QuotQual_6_set");

    elt.add_element(QuotQual_6);
  } // end QuotQual
  { // Pty
    xml_element Pty_326{"Pty"};
    multiset<string> Pty_326_set;
    Pty_326.add_attribute("ID", "PartyID_t_321533445"); // 1
    Pty_326_set.insert("PartyID_t_321533445");
    Pty_326.add_attribute("Src", "7"); // 1
    Pty_326_set.insert("7");
    Pty_326.add_attribute("R", "70"); // 1
    Pty_326_set.insert("70");
    all_values.push_back(Pty_326_set);
    all_compo_names.insert("Pty_326_set");

    {
      xml_element Sub_326{"Sub"};
      multiset<string> Sub_326_set;
      Sub_326.add_attribute("ID", "PartySubID_t_1037082329"); // 2
      Sub_326_set.insert("PartySubID_t_1037082329");
      Sub_326.add_attribute("Typ", "32"); // 2
      Sub_326_set.insert("32");
      all_values.push_back(Sub_326_set);
      all_compo_names.insert("Sub_326_set");

      Pty_326.add_element(Sub_326);
    }
    elt.add_element(Pty_326);
  } // end Pty
  { // Pty
    xml_element Pty_327{"Pty"};
    multiset<string> Pty_327_set;
    Pty_327.add_attribute("ID", "PartyID_t_230868838"); // 1
    Pty_327_set.insert("PartyID_t_230868838");
    Pty_327.add_attribute("Src", "C"); // 1
    Pty_327_set.insert("C");
    Pty_327.add_attribute("R", "60"); // 1
    Pty_327_set.insert("60");
    all_values.push_back(Pty_327_set);
    all_compo_names.insert("Pty_327_set");

    {
      xml_element Sub_327{"Sub"};
      multiset<string> Sub_327_set;
      Sub_327.add_attribute("ID", "PartySubID_t_1499713265"); // 2
      Sub_327_set.insert("PartySubID_t_1499713265");
      Sub_327.add_attribute("Typ", "28"); // 2
      Sub_327_set.insert("28");
      all_values.push_back(Sub_327_set);
      all_compo_names.insert("Sub_327_set");

      Pty_327.add_element(Sub_327);
    }
    elt.add_element(Pty_327);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_62{"Instrmt"};
    multiset<string> Instrmt_62_set;
    Instrmt_62.add_attribute("Sym", "Symbol_t_1517404365"); // 1
    Instrmt_62_set.insert("Symbol_t_1517404365");
    Instrmt_62.add_attribute("Sfx", "WI"); // 1
    Instrmt_62_set.insert("WI");
    Instrmt_62.add_attribute("ID", "SecurityID_t_2122968392"); // 1
    Instrmt_62_set.insert("SecurityID_t_2122968392");
    Instrmt_62.add_attribute("Src", "C"); // 1
    Instrmt_62_set.insert("C");
    Instrmt_62.add_attribute("Prod", "12"); // 1
    Instrmt_62_set.insert("12");
    Instrmt_62.add_attribute("ProdCmplx", "ProductComplex_t_546122494"); // 1
    Instrmt_62_set.insert("ProductComplex_t_546122494");
    Instrmt_62.add_attribute("SecGrp", "SecurityGroup_t_1859037762"); // 1
    Instrmt_62_set.insert("SecurityGroup_t_1859037762");
    Instrmt_62.add_attribute("CFI", "CFICode_t_939634769"); // 1
    Instrmt_62_set.insert("CFICode_t_939634769");
    Instrmt_62.add_attribute("SecTyp", "TCAL"); // 1
    Instrmt_62_set.insert("TCAL");
    Instrmt_62.add_attribute("SubTyp", "SecuritySubType_t_598628485"); // 1
    Instrmt_62_set.insert("SecuritySubType_t_598628485");
    Instrmt_62.add_attribute("MMY", "1229276362"); // 1
    Instrmt_62_set.insert("1229276362");
    Instrmt_62.add_attribute("MatDt", "MaturityDate_t_1059984348"); // 1
    Instrmt_62_set.insert("MaturityDate_t_1059984348");
    Instrmt_62.add_attribute("MatTm", "1616472704"); // 1
    Instrmt_62_set.insert("1616472704");
    Instrmt_62.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2060377176"); // 1
    Instrmt_62_set.insert("SettleOnOpenFlag_t_2060377176");
    Instrmt_62.add_attribute("AsgnMeth", "1658907246"); // 1
    Instrmt_62_set.insert("1658907246");
    Instrmt_62.add_attribute("Status", "1"); // 1
    Instrmt_62_set.insert("1");
    Instrmt_62.add_attribute("CpnPmt", "CouponPaymentDate_t_1559418397"); // 1
    Instrmt_62_set.insert("CouponPaymentDate_t_1559418397");
    Instrmt_62.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_62_set.insert("MM");
    Instrmt_62.add_attribute("Snrty", "SB"); // 1
    Instrmt_62_set.insert("SB");
    Instrmt_62.add_attribute("NotlPctOut", "1947922.520000"); // 1
    Instrmt_62_set.insert("1947922.520000");
    Instrmt_62.add_attribute("OrigNotlPctOut", "6047555.050000"); // 1
    Instrmt_62_set.insert("6047555.050000");
    Instrmt_62.add_attribute("AttchPnt", "20951483.210000"); // 1
    Instrmt_62_set.insert("20951483.210000");
    Instrmt_62.add_attribute("DetchPnt", "8479883.720000"); // 1
    Instrmt_62_set.insert("8479883.720000");
    Instrmt_62.add_attribute("Issued", "IssueDate_t_989774025"); // 1
    Instrmt_62_set.insert("IssueDate_t_989774025");
    Instrmt_62.add_attribute("RepoCollSecTyp", "984747002"); // 1
    Instrmt_62_set.insert("984747002");
    Instrmt_62.add_attribute("RepoTrm", "1202464867"); // 1
    Instrmt_62_set.insert("1202464867");
    Instrmt_62.add_attribute("RepoRt", "12206428.640000"); // 1
    Instrmt_62_set.insert("12206428.640000");
    Instrmt_62.add_attribute("Fctr", "16592295.670000"); // 1
    Instrmt_62_set.insert("16592295.670000");
    Instrmt_62.add_attribute("CrdRtg", "CreditRating_t_643389420"); // 1
    Instrmt_62_set.insert("CreditRating_t_643389420");
    Instrmt_62.add_attribute("Rgstry", "InstrRegistry_t_572872481"); // 1
    Instrmt_62_set.insert("InstrRegistry_t_572872481");
    Instrmt_62.add_attribute("IssuCtry", "1814676953"); // 1
    Instrmt_62_set.insert("1814676953");
    Instrmt_62.add_attribute("StPrv", "StateOrProvinceOfIssue_t_13310137"); // 1
    Instrmt_62_set.insert("StateOrProvinceOfIssue_t_13310137");
    Instrmt_62.add_attribute("Lcl", "LocaleOfIssue_t_519176096"); // 1
    Instrmt_62_set.insert("LocaleOfIssue_t_519176096");
    Instrmt_62.add_attribute("Redeem", "RedemptionDate_t_1790161697"); // 1
    Instrmt_62_set.insert("RedemptionDate_t_1790161697");
    Instrmt_62.add_attribute("StrkPx", "6253268.290000"); // 1
    Instrmt_62_set.insert("6253268.290000");
    Instrmt_62.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_62_set.insert("EUR");
    Instrmt_62.add_attribute("StrkMult", "3368809.430000"); // 1
    Instrmt_62_set.insert("3368809.430000");
    Instrmt_62.add_attribute("StrkValu", "8681607.060000"); // 1
    Instrmt_62_set.insert("8681607.060000");
    Instrmt_62.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_62_set.insert("3");
    Instrmt_62.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_62_set.insert("4");
    Instrmt_62.add_attribute("StrkPxBndryPrcsn", "20974370.680000"); // 1
    Instrmt_62_set.insert("20974370.680000");
    Instrmt_62.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_62_set.insert("3");
    Instrmt_62.add_attribute("OptAt", "404498484"); // 1
    Instrmt_62_set.insert("404498484");
    Instrmt_62.add_attribute("Mult", "20103305.960000"); // 1
    Instrmt_62_set.insert("20103305.960000");
    Instrmt_62.add_attribute("MultTyp", "0"); // 1
    Instrmt_62_set.insert("0");
    Instrmt_62.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_62_set.insert("2");
    Instrmt_62.add_attribute("MinPxIncr", "14222653.450000"); // 1
    Instrmt_62_set.insert("14222653.450000");
    Instrmt_62.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1924628006"); // 1
    Instrmt_62_set.insert("MinPriceIncrementAmount_t_1924628006");
    Instrmt_62.add_attribute("UOM", "Gal"); // 1
    Instrmt_62_set.insert("Gal");
    Instrmt_62.add_attribute("UOMQty", "16170575.970000"); // 1
    Instrmt_62_set.insert("16170575.970000");
    Instrmt_62.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_62_set.insert("oz_tr");
    Instrmt_62.add_attribute("PxUOMQty", "6030217.680000"); // 1
    Instrmt_62_set.insert("6030217.680000");
    Instrmt_62.add_attribute("SettlMeth", "C"); // 1
    Instrmt_62_set.insert("C");
    Instrmt_62.add_attribute("ExerStyle", "2"); // 1
    Instrmt_62_set.insert("2");
    Instrmt_62.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_62_set.insert("3");
    Instrmt_62.add_attribute("OptPayAmt", "OptPayoutAmount_t_1520027189"); // 1
    Instrmt_62_set.insert("OptPayoutAmount_t_1520027189");
    Instrmt_62.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_62_set.insert("INX");
    Instrmt_62.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_62_set.insert("EQTY");
    Instrmt_62.add_attribute("ListMeth", "1"); // 1
    Instrmt_62_set.insert("1");
    Instrmt_62.add_attribute("CapPx", "10177055.860000"); // 1
    Instrmt_62_set.insert("10177055.860000");
    Instrmt_62.add_attribute("FlrPx", "7667079.950000"); // 1
    Instrmt_62_set.insert("7667079.950000");
    Instrmt_62.add_attribute("PutCall", "0"); // 1
    Instrmt_62_set.insert("0");
    Instrmt_62.add_attribute("FlexInd", "true"); // 1
    Instrmt_62_set.insert("true");
    Instrmt_62.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_62_set.insert("true");
    Instrmt_62.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_62_set.insert("Wk");
    Instrmt_62.add_attribute("CpnRt", "14654076.190000"); // 1
    Instrmt_62_set.insert("14654076.190000");
    Instrmt_62.add_attribute("Exch", "SecurityExchange_t_598186587"); // 1
    Instrmt_62_set.insert("SecurityExchange_t_598186587");
    Instrmt_62.add_attribute("PosLmt", "991450871"); // 1
    Instrmt_62_set.insert("991450871");
    Instrmt_62.add_attribute("NTPosLmt", "186084677"); // 1
    Instrmt_62_set.insert("186084677");
    Instrmt_62.add_attribute("Issr", "Issuer_t_172793081"); // 1
    Instrmt_62_set.insert("Issuer_t_172793081");
    Instrmt_62.add_attribute("EncIssrLen", "1926960299"); // 1
    Instrmt_62_set.insert("1926960299");
    Instrmt_62.add_attribute("EncIssr", "EncodedIssuer_t_136038097"); // 1
    Instrmt_62_set.insert("EncodedIssuer_t_136038097");
    Instrmt_62.add_attribute("Desc", "SecurityDesc_t_807383923"); // 1
    Instrmt_62_set.insert("SecurityDesc_t_807383923");
    Instrmt_62.add_attribute("EncSecDescLen", "183975136"); // 1
    Instrmt_62_set.insert("183975136");
    Instrmt_62.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2146368694"); // 1
    Instrmt_62_set.insert("EncodedSecurityDesc_t_2146368694");
    Instrmt_62.add_attribute("Pool", "Pool_t_953398363"); // 1
    Instrmt_62_set.insert("Pool_t_953398363");
    Instrmt_62.add_attribute("CSetMo", "1213201003"); // 1
    Instrmt_62_set.insert("1213201003");
    Instrmt_62.add_attribute("CPPgm", "1"); // 1
    Instrmt_62_set.insert("1");
    Instrmt_62.add_attribute("CPRegT", "CPRegType_t_730542721"); // 1
    Instrmt_62_set.insert("CPRegType_t_730542721");
    Instrmt_62.add_attribute("Dated", "DatedDate_t_1868558098"); // 1
    Instrmt_62_set.insert("DatedDate_t_1868558098");
    Instrmt_62.add_attribute("IntAcrl", "InterestAccrualDate_t_890724341"); // 1
    Instrmt_62_set.insert("InterestAccrualDate_t_890724341");
    all_values.push_back(Instrmt_62_set);
    all_compo_names.insert("Instrmt_62_set");

    {
      xml_element AID_65{"AID"};
      multiset<string> AID_65_set;
      AID_65.add_attribute("AltID", "SecurityAltID_t_1112442585"); // 2
      AID_65_set.insert("SecurityAltID_t_1112442585");
      AID_65.add_attribute("AltIDSrc", "7"); // 2
      AID_65_set.insert("7");
      all_values.push_back(AID_65_set);
      all_compo_names.insert("AID_65_set");

      Instrmt_62.add_element(AID_65);
    }
    {
      xml_element SecXML_65{"SecXML"};
      multiset<string> SecXML_65_set;
      SecXML_65.add_attribute("Schema", "SecurityXMLSchema_t_1208286663"); // 2
      SecXML_65_set.insert("SecurityXMLSchema_t_1208286663");
      all_values.push_back(SecXML_65_set);
      all_compo_names.insert("SecXML_65_set");

      Instrmt_62.add_element(SecXML_65);
    }
    {
      xml_element Evnt_65{"Evnt"};
      multiset<string> Evnt_65_set;
      Evnt_65.add_attribute("EventTyp", "7"); // 2
      Evnt_65_set.insert("7");
      Evnt_65.add_attribute("Dt", "EventDate_t_1911864988"); // 2
      Evnt_65_set.insert("EventDate_t_1911864988");
      Evnt_65.add_attribute("Tm", "EventTime_t_580830204"); // 2
      Evnt_65_set.insert("EventTime_t_580830204");
      Evnt_65.add_attribute("Px", "7814659.320000"); // 2
      Evnt_65_set.insert("7814659.320000");
      Evnt_65.add_attribute("Txt", "EventText_t_863896030"); // 2
      Evnt_65_set.insert("EventText_t_863896030");
      all_values.push_back(Evnt_65_set);
      all_compo_names.insert("Evnt_65_set");

      Instrmt_62.add_element(Evnt_65);
    }
    {
      xml_element Pty_328{"Pty"};
      multiset<string> Pty_328_set;
      Pty_328.add_attribute("ID", "InstrumentPartyID_t_596763165"); // 2
      Pty_328_set.insert("InstrumentPartyID_t_596763165");
      Pty_328.add_attribute("Src", "6"); // 2
      Pty_328_set.insert("6");
      Pty_328.add_attribute("R", "39"); // 2
      Pty_328_set.insert("39");
      all_values.push_back(Pty_328_set);
      all_compo_names.insert("Pty_328_set");

      {
        xml_element Sub_328{"Sub"};
        multiset<string> Sub_328_set;
        Sub_328.add_attribute("ID", "InstrumentPartySubID_t_626006263"); // 3
        Sub_328_set.insert("InstrumentPartySubID_t_626006263");
        Sub_328.add_attribute("Typ", "15"); // 3
        Sub_328_set.insert("15");
        all_values.push_back(Sub_328_set);
        all_compo_names.insert("Sub_328_set");

        Pty_328.add_element(Sub_328);
      }
      Instrmt_62.add_element(Pty_328);
    }
    {
      xml_element CmplxEvnt_62{"CmplxEvnt"};
      multiset<string> CmplxEvnt_62_set;
      CmplxEvnt_62.add_attribute("Typ", "3"); // 2
      CmplxEvnt_62_set.insert("3");
      CmplxEvnt_62.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1280576191"); // 2
      CmplxEvnt_62_set.insert("ComplexOptPayoutAmount_t_1280576191");
      CmplxEvnt_62.add_attribute("Px", "5064935.250000"); // 2
      CmplxEvnt_62_set.insert("5064935.250000");
      CmplxEvnt_62.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_62_set.insert("4");
      CmplxEvnt_62.add_attribute("PxBndryPrcsn", "1245434.140000"); // 2
      CmplxEvnt_62_set.insert("1245434.140000");
      CmplxEvnt_62.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_62_set.insert("3");
      CmplxEvnt_62.add_attribute("Cond", "2"); // 2
      CmplxEvnt_62_set.insert("2");
      all_values.push_back(CmplxEvnt_62_set);
      all_compo_names.insert("CmplxEvnt_62_set");

      {
        xml_element EvntDts_62{"EvntDts"};
        multiset<string> EvntDts_62_set;
        EvntDts_62.add_attribute("StartDt", "ComplexEventStartDate_t_2051503713"); // 3
        EvntDts_62_set.insert("ComplexEventStartDate_t_2051503713");
        EvntDts_62.add_attribute("EndDt", "ComplexEventEndDate_t_828616300"); // 3
        EvntDts_62_set.insert("ComplexEventEndDate_t_828616300");
        all_values.push_back(EvntDts_62_set);
        all_compo_names.insert("EvntDts_62_set");

        {
          xml_element EvntTms_62{"EvntTms"};
          multiset<string> EvntTms_62_set;
          EvntTms_62.add_attribute("StartTm", "1470870012"); // 4
          EvntTms_62_set.insert("1470870012");
          EvntTms_62.add_attribute("EndTm", "87995201"); // 4
          EvntTms_62_set.insert("87995201");
          all_values.push_back(EvntTms_62_set);
          all_compo_names.insert("EvntTms_62_set");

          EvntDts_62.add_element(EvntTms_62);
        }
        CmplxEvnt_62.add_element(EvntDts_62);
      }
      Instrmt_62.add_element(CmplxEvnt_62);
    }
    elt.add_element(Instrmt_62);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_22{"FinDetls"};
    multiset<string> FinDetls_22_set;
    FinDetls_22.add_attribute("AgmtDesc", "AgreementDesc_t_827501346"); // 1
    FinDetls_22_set.insert("AgreementDesc_t_827501346");
    FinDetls_22.add_attribute("AgmtID", "AgreementID_t_276784727"); // 1
    FinDetls_22_set.insert("AgreementID_t_276784727");
    FinDetls_22.add_attribute("AgmtDt", "AgreementDate_t_1301196204"); // 1
    FinDetls_22_set.insert("AgreementDate_t_1301196204");
    FinDetls_22.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_22_set.insert("EUR");
    FinDetls_22.add_attribute("TrmTyp", "3"); // 1
    FinDetls_22_set.insert("3");
    FinDetls_22.add_attribute("StartDt", "StartDate_t_991892430"); // 1
    FinDetls_22_set.insert("StartDate_t_991892430");
    FinDetls_22.add_attribute("EndDt", "EndDate_t_2119770034"); // 1
    FinDetls_22_set.insert("EndDate_t_2119770034");
    FinDetls_22.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_22_set.insert("0");
    FinDetls_22.add_attribute("MgnRatio", "526954.450000"); // 1
    FinDetls_22_set.insert("526954.450000");
    all_values.push_back(FinDetls_22_set);
    all_compo_names.insert("FinDetls_22_set");

    elt.add_element(FinDetls_22);
  } // end FinDetls
  { // Undly
    xml_element Undly_87{"Undly"};
    multiset<string> Undly_87_set;
    Undly_87.add_attribute("Sym", "UnderlyingSymbol_t_1110748213"); // 1
    Undly_87_set.insert("UnderlyingSymbol_t_1110748213");
    Undly_87.add_attribute("Sfx", "WI"); // 1
    Undly_87_set.insert("WI");
    Undly_87.add_attribute("ID", "UnderlyingSecurityID_t_1090385146"); // 1
    Undly_87_set.insert("UnderlyingSecurityID_t_1090385146");
    Undly_87.add_attribute("Src", "C"); // 1
    Undly_87_set.insert("C");
    Undly_87.add_attribute("Prod", "10"); // 1
    Undly_87_set.insert("10");
    Undly_87.add_attribute("CFI", "UnderlyingCFICode_t_742073017"); // 1
    Undly_87_set.insert("UnderlyingCFICode_t_742073017");
    Undly_87.add_attribute("SecTyp", "PZFJ"); // 1
    Undly_87_set.insert("PZFJ");
    Undly_87.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1856295078"); // 1
    Undly_87_set.insert("UnderlyingSecuritySubType_t_1856295078");
    Undly_87.add_attribute("MMY", "1930642570"); // 1
    Undly_87_set.insert("1930642570");
    Undly_87.add_attribute("Mat", "UnderlyingMaturityDate_t_1350271042"); // 1
    Undly_87_set.insert("UnderlyingMaturityDate_t_1350271042");
    Undly_87.add_attribute("MatTm", "989387621"); // 1
    Undly_87_set.insert("989387621");
    Undly_87.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_289652447"); // 1
    Undly_87_set.insert("UnderlyingCouponPaymentDate_t_289652447");
    Undly_87.add_attribute("RestrctTyp", "XR"); // 1
    Undly_87_set.insert("XR");
    Undly_87.add_attribute("Snrty", "SD"); // 1
    Undly_87_set.insert("SD");
    Undly_87.add_attribute("NotlPctOut", "9822306.500000"); // 1
    Undly_87_set.insert("9822306.500000");
    Undly_87.add_attribute("OrigNotlPctOut", "3569664.920000"); // 1
    Undly_87_set.insert("3569664.920000");
    Undly_87.add_attribute("AttchPnt", "10179511.000000"); // 1
    Undly_87_set.insert("10179511.000000");
    Undly_87.add_attribute("DetchPnt", "18108469.500000"); // 1
    Undly_87_set.insert("18108469.500000");
    Undly_87.add_attribute("Issued", "UnderlyingIssueDate_t_1827836505"); // 1
    Undly_87_set.insert("UnderlyingIssueDate_t_1827836505");
    Undly_87.add_attribute("RepoCollSecTyp", "1105946302"); // 1
    Undly_87_set.insert("1105946302");
    Undly_87.add_attribute("RepoTrm", "490864648"); // 1
    Undly_87_set.insert("490864648");
    Undly_87.add_attribute("RepoRt", "21046212.320000"); // 1
    Undly_87_set.insert("21046212.320000");
    Undly_87.add_attribute("Fctr", "2596588.580000"); // 1
    Undly_87_set.insert("2596588.580000");
    Undly_87.add_attribute("CrdRtg", "UnderlyingCreditRating_t_592032737"); // 1
    Undly_87_set.insert("UnderlyingCreditRating_t_592032737");
    Undly_87.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_964465033"); // 1
    Undly_87_set.insert("UnderlyingInstrRegistry_t_964465033");
    Undly_87.add_attribute("Ctry", "1281929513"); // 1
    Undly_87_set.insert("1281929513");
    Undly_87.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1583925168"); // 1
    Undly_87_set.insert("UnderlyingStateOrProvinceOfIssue_t_1583925168");
    Undly_87.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_936751420"); // 1
    Undly_87_set.insert("UnderlyingLocaleOfIssue_t_936751420");
    Undly_87.add_attribute("Redeem", "UnderlyingRedemptionDate_t_480812737"); // 1
    Undly_87_set.insert("UnderlyingRedemptionDate_t_480812737");
    Undly_87.add_attribute("StrkPx", "16366206.130000"); // 1
    Undly_87_set.insert("16366206.130000");
    Undly_87.add_attribute("StrkCcy", "GBP"); // 1
    Undly_87_set.insert("GBP");
    Undly_87.add_attribute("OptA", "122662615"); // 1
    Undly_87_set.insert("122662615");
    Undly_87.add_attribute("Mult", "1885721.310000"); // 1
    Undly_87_set.insert("1885721.310000");
    Undly_87.add_attribute("MultTyp", "0"); // 1
    Undly_87_set.insert("0");
    Undly_87.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_87_set.insert("4");
    Undly_87.add_attribute("UOM", "t"); // 1
    Undly_87_set.insert("t");
    Undly_87.add_attribute("UOMQty", "7290025.190000"); // 1
    Undly_87_set.insert("7290025.190000");
    Undly_87.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_87_set.insert("MMBtu");
    Undly_87.add_attribute("PxUOMQty", "7138040.710000"); // 1
    Undly_87_set.insert("7138040.710000");
    Undly_87.add_attribute("TmUnit", "Min"); // 1
    Undly_87_set.insert("Min");
    Undly_87.add_attribute("ExerStyle", "2"); // 1
    Undly_87_set.insert("2");
    Undly_87.add_attribute("CpnRt", "10034565.180000"); // 1
    Undly_87_set.insert("10034565.180000");
    Undly_87.add_attribute("Exch", "UnderlyingSecurityExchange_t_1772753964"); // 1
    Undly_87_set.insert("UnderlyingSecurityExchange_t_1772753964");
    Undly_87.add_attribute("Issr", "UnderlyingIssuer_t_1017597867"); // 1
    Undly_87_set.insert("UnderlyingIssuer_t_1017597867");
    Undly_87.add_attribute("EncUndIssrLen", "1985687168"); // 1
    Undly_87_set.insert("1985687168");
    Undly_87.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2129720457"); // 1
    Undly_87_set.insert("EncodedUnderlyingIssuer_t_2129720457");
    Undly_87.add_attribute("Desc", "UnderlyingSecurityDesc_t_2035548968"); // 1
    Undly_87_set.insert("UnderlyingSecurityDesc_t_2035548968");
    Undly_87.add_attribute("EncUndSecDescLen", "1649050470"); // 1
    Undly_87_set.insert("1649050470");
    Undly_87.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1810073314"); // 1
    Undly_87_set.insert("EncodedUnderlyingSecurityDesc_t_1810073314");
    Undly_87.add_attribute("CPPgm", "UnderlyingCPProgram_t_994011622"); // 1
    Undly_87_set.insert("UnderlyingCPProgram_t_994011622");
    Undly_87.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2139915118"); // 1
    Undly_87_set.insert("UnderlyingCPRegType_t_2139915118");
    Undly_87.add_attribute("AllocPct", "17672108.980000"); // 1
    Undly_87_set.insert("17672108.980000");
    Undly_87.add_attribute("Ccy", "GBP"); // 1
    Undly_87_set.insert("GBP");
    Undly_87.add_attribute("Qty", "5841922.840000"); // 1
    Undly_87_set.insert("5841922.840000");
    Undly_87.add_attribute("SettlTyp", "2"); // 1
    Undly_87_set.insert("2");
    Undly_87.add_attribute("CashAmt", "UnderlyingCashAmount_t_20905728"); // 1
    Undly_87_set.insert("UnderlyingCashAmount_t_20905728");
    Undly_87.add_attribute("CashTyp", "FIXED"); // 1
    Undly_87_set.insert("FIXED");
    Undly_87.add_attribute("Px", "8689290.830000"); // 1
    Undly_87_set.insert("8689290.830000");
    Undly_87.add_attribute("DirtPx", "16575263.410000"); // 1
    Undly_87_set.insert("16575263.410000");
    Undly_87.add_attribute("EndPx", "6191306.890000"); // 1
    Undly_87_set.insert("6191306.890000");
    Undly_87.add_attribute("StartVal", "UnderlyingStartValue_t_313006385"); // 1
    Undly_87_set.insert("UnderlyingStartValue_t_313006385");
    Undly_87.add_attribute("CurVal", "UnderlyingCurrentValue_t_1780188956"); // 1
    Undly_87_set.insert("UnderlyingCurrentValue_t_1780188956");
    Undly_87.add_attribute("EndVal", "UnderlyingEndValue_t_807702821"); // 1
    Undly_87_set.insert("UnderlyingEndValue_t_807702821");
    Undly_87.add_attribute("AdjQty", "17317279.310000"); // 1
    Undly_87_set.insert("17317279.310000");
    Undly_87.add_attribute("FxRate", "9856567.380000"); // 1
    Undly_87_set.insert("9856567.380000");
    Undly_87.add_attribute("FxRateCalc", "D"); // 1
    Undly_87_set.insert("D");
    Undly_87.add_attribute("CapValu", "UnderlyingCapValue_t_313246802"); // 1
    Undly_87_set.insert("UnderlyingCapValue_t_313246802");
    Undly_87.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2047419597"); // 1
    Undly_87_set.insert("UnderlyingSettlMethod_t_2047419597");
    Undly_87.add_attribute("PutCall", "304668392"); // 1
    Undly_87_set.insert("304668392");
    all_values.push_back(Undly_87_set);
    all_compo_names.insert("Undly_87_set");

    {
      xml_element UndAID_87{"UndAID"};
      multiset<string> UndAID_87_set;
      UndAID_87.add_attribute("AltID", "UnderlyingSecurityAltID_t_245036716"); // 2
      UndAID_87_set.insert("UnderlyingSecurityAltID_t_245036716");
      UndAID_87.add_attribute("AltIDSrc", "J"); // 2
      UndAID_87_set.insert("J");
      all_values.push_back(UndAID_87_set);
      all_compo_names.insert("UndAID_87_set");

      Undly_87.add_element(UndAID_87);
    }
    {
      xml_element Stip_135{"Stip"};
      multiset<string> Stip_135_set;
      Stip_135.add_attribute("Typ", "PMAX"); // 2
      Stip_135_set.insert("PMAX");
      Stip_135.add_attribute("Val", "UnderlyingStipValue_t_2017790680"); // 2
      Stip_135_set.insert("UnderlyingStipValue_t_2017790680");
      all_values.push_back(Stip_135_set);
      all_compo_names.insert("Stip_135_set");

      Undly_87.add_element(Stip_135);
    }
    {
      xml_element Pty_329{"Pty"};
      multiset<string> Pty_329_set;
      Pty_329.add_attribute("ID", "UnderlyingInstrumentPartyID_t_821200649"); // 2
      Pty_329_set.insert("UnderlyingInstrumentPartyID_t_821200649");
      Pty_329.add_attribute("Src", "G"); // 2
      Pty_329_set.insert("G");
      Pty_329.add_attribute("R", "14"); // 2
      Pty_329_set.insert("14");
      all_values.push_back(Pty_329_set);
      all_compo_names.insert("Pty_329_set");

      {
        xml_element Sub_329{"Sub"};
        multiset<string> Sub_329_set;
        Sub_329.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_709265969"); // 3
        Sub_329_set.insert("UnderlyingInstrumentPartySubID_t_709265969");
        Sub_329.add_attribute("Typ", "25"); // 3
        Sub_329_set.insert("25");
        all_values.push_back(Sub_329_set);
        all_compo_names.insert("Sub_329_set");

        Pty_329.add_element(Sub_329);
      }
      Undly_87.add_element(Pty_329);
    }
    elt.add_element(Undly_87);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_22{"OrdQty"};
    multiset<string> OrdQty_22_set;
    OrdQty_22.add_attribute("Qty", "16626171.550000"); // 1
    OrdQty_22_set.insert("16626171.550000");
    OrdQty_22.add_attribute("Cash", "17032775.910000"); // 1
    OrdQty_22_set.insert("17032775.910000");
    OrdQty_22.add_attribute("Pct", "6403267.240000"); // 1
    OrdQty_22_set.insert("6403267.240000");
    OrdQty_22.add_attribute("RndDir", "1"); // 1
    OrdQty_22_set.insert("1");
    OrdQty_22.add_attribute("RndMod", "8094644.240000"); // 1
    OrdQty_22_set.insert("8094644.240000");
    all_values.push_back(OrdQty_22_set);
    all_compo_names.insert("OrdQty_22_set");

    elt.add_element(OrdQty_22);
  } // end OrdQty
  { // Stip
    xml_element Stip_136{"Stip"};
    multiset<string> Stip_136_set;
    Stip_136.add_attribute("Typ", "SUBSFREQ"); // 1
    Stip_136_set.insert("SUBSFREQ");
    Stip_136.add_attribute("Val", "StipulationValue_t_1197580769"); // 1
    Stip_136_set.insert("StipulationValue_t_1197580769");
    all_values.push_back(Stip_136_set);
    all_compo_names.insert("Stip_136_set");

    elt.add_element(Stip_136);
  } // end Stip
  { // Quot
    xml_element Quot_2{"Quot"};
    multiset<string> Quot_2_set;
    Quot_2.add_attribute("Qty", "12399967.460000"); // 1
    Quot_2_set.insert("12399967.460000");
    Quot_2.add_attribute("OrdQty", "20665098.520000"); // 1
    Quot_2_set.insert("20665098.520000");
    Quot_2.add_attribute("SwapTyp", "4"); // 1
    Quot_2_set.insert("4");
    Quot_2.add_attribute("SettlTyp", "3"); // 1
    Quot_2_set.insert("3");
    Quot_2.add_attribute("SettlDt", "LegSettlDate_t_232032590"); // 1
    Quot_2_set.insert("LegSettlDate_t_232032590");
    Quot_2.add_attribute("PxTyp", "1"); // 1
    Quot_2_set.insert("1");
    Quot_2.add_attribute("BidPx", "5193466.080000"); // 1
    Quot_2_set.insert("5193466.080000");
    Quot_2.add_attribute("OfrPx", "19637605.210000"); // 1
    Quot_2_set.insert("19637605.210000");
    Quot_2.add_attribute("RefID", "LegRefID_t_1374101400"); // 1
    Quot_2_set.insert("LegRefID_t_1374101400");
    Quot_2.add_attribute("LegBidFwdPnts", "1102109.300000"); // 1
    Quot_2_set.insert("1102109.300000");
    Quot_2.add_attribute("LegOfrFwdPnts", "1295236.760000"); // 1
    Quot_2_set.insert("1295236.760000");
    all_values.push_back(Quot_2_set);
    all_compo_names.insert("Quot_2_set");

    {
      xml_element Leg_74{"Leg"};
      multiset<string> Leg_74_set;
      Leg_74.add_attribute("Sym", "LegSymbol_t_1274037350"); // 2
      Leg_74_set.insert("LegSymbol_t_1274037350");
      Leg_74.add_attribute("Sfx", "CD"); // 2
      Leg_74_set.insert("CD");
      Leg_74.add_attribute("ID", "LegSecurityID_t_374560392"); // 2
      Leg_74_set.insert("LegSecurityID_t_374560392");
      Leg_74.add_attribute("Src", "9"); // 2
      Leg_74_set.insert("9");
      Leg_74.add_attribute("Prod", "11"); // 2
      Leg_74_set.insert("11");
      Leg_74.add_attribute("CFI", "LegCFICode_t_244867424"); // 2
      Leg_74_set.insert("LegCFICode_t_244867424");
      Leg_74.add_attribute("SecTyp", "BA"); // 2
      Leg_74_set.insert("BA");
      Leg_74.add_attribute("SecSubTyp", "LegSecuritySubType_t_721849017"); // 2
      Leg_74_set.insert("LegSecuritySubType_t_721849017");
      Leg_74.add_attribute("MMY", "97411266"); // 2
      Leg_74_set.insert("97411266");
      Leg_74.add_attribute("Mat", "LegMaturityDate_t_460623103"); // 2
      Leg_74_set.insert("LegMaturityDate_t_460623103");
      Leg_74.add_attribute("MatTm", "1369744271"); // 2
      Leg_74_set.insert("1369744271");
      Leg_74.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1760028421"); // 2
      Leg_74_set.insert("LegCouponPaymentDate_t_1760028421");
      Leg_74.add_attribute("Issued", "LegIssueDate_t_16417046"); // 2
      Leg_74_set.insert("LegIssueDate_t_16417046");
      Leg_74.add_attribute("RepoCollSecTyp", "2010070995"); // 2
      Leg_74_set.insert("2010070995");
      Leg_74.add_attribute("RepoTrm", "894889179"); // 2
      Leg_74_set.insert("894889179");
      Leg_74.add_attribute("RepoRt", "8258814.700000"); // 2
      Leg_74_set.insert("8258814.700000");
      Leg_74.add_attribute("Fctr", "10873782.800000"); // 2
      Leg_74_set.insert("10873782.800000");
      Leg_74.add_attribute("CrdRtg", "LegCreditRating_t_613942221"); // 2
      Leg_74_set.insert("LegCreditRating_t_613942221");
      Leg_74.add_attribute("Rgstry", "LegInstrRegistry_t_2023462240"); // 2
      Leg_74_set.insert("LegInstrRegistry_t_2023462240");
      Leg_74.add_attribute("Ctry", "185591292"); // 2
      Leg_74_set.insert("185591292");
      Leg_74.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1853938967"); // 2
      Leg_74_set.insert("LegStateOrProvinceOfIssue_t_1853938967");
      Leg_74.add_attribute("Lcl", "LegLocaleOfIssue_t_1942488444"); // 2
      Leg_74_set.insert("LegLocaleOfIssue_t_1942488444");
      Leg_74.add_attribute("Redeem", "LegRedemptionDate_t_941330646"); // 2
      Leg_74_set.insert("LegRedemptionDate_t_941330646");
      Leg_74.add_attribute("Strk", "15655827.550000"); // 2
      Leg_74_set.insert("15655827.550000");
      Leg_74.add_attribute("StrkCcy", "EUR"); // 2
      Leg_74_set.insert("EUR");
      Leg_74.add_attribute("OptA", "2084929363"); // 2
      Leg_74_set.insert("2084929363");
      Leg_74.add_attribute("Cmult", "19907979.080000"); // 2
      Leg_74_set.insert("19907979.080000");
      Leg_74.add_attribute("MultTyp", "2"); // 2
      Leg_74_set.insert("2");
      Leg_74.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_74_set.insert("0");
      Leg_74.add_attribute("UOM", "t"); // 2
      Leg_74_set.insert("t");
      Leg_74.add_attribute("UOMQty", "18304304.110000"); // 2
      Leg_74_set.insert("18304304.110000");
      Leg_74.add_attribute("PxUOM", "Bu"); // 2
      Leg_74_set.insert("Bu");
      Leg_74.add_attribute("PxUOMQty", "3473983.280000"); // 2
      Leg_74_set.insert("3473983.280000");
      Leg_74.add_attribute("TmUnit", "Mo"); // 2
      Leg_74_set.insert("Mo");
      Leg_74.add_attribute("ExerStyle", "2"); // 2
      Leg_74_set.insert("2");
      Leg_74.add_attribute("CpnRt", "5922657.520000"); // 2
      Leg_74_set.insert("5922657.520000");
      Leg_74.add_attribute("Exch", "LegSecurityExchange_t_511944029"); // 2
      Leg_74_set.insert("LegSecurityExchange_t_511944029");
      Leg_74.add_attribute("Issr", "LegIssuer_t_759905570"); // 2
      Leg_74_set.insert("LegIssuer_t_759905570");
      Leg_74.add_attribute("EncLegIssrLen", "689677018"); // 2
      Leg_74_set.insert("689677018");
      Leg_74.add_attribute("EncLegIssr", "EncodedLegIssuer_t_972567132"); // 2
      Leg_74_set.insert("EncodedLegIssuer_t_972567132");
      Leg_74.add_attribute("Desc", "LegSecurityDesc_t_2129649841"); // 2
      Leg_74_set.insert("LegSecurityDesc_t_2129649841");
      Leg_74.add_attribute("EncLegSecDescLen", "302221792"); // 2
      Leg_74_set.insert("302221792");
      Leg_74.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_988984178"); // 2
      Leg_74_set.insert("EncodedLegSecurityDesc_t_988984178");
      Leg_74.add_attribute("RatioQty", "19922371.890000"); // 2
      Leg_74_set.insert("19922371.890000");
      Leg_74.add_attribute("Side", "C"); // 2
      Leg_74_set.insert("C");
      Leg_74.add_attribute("Ccy", "CHF"); // 2
      Leg_74_set.insert("CHF");
      Leg_74.add_attribute("Pool", "LegPool_t_1811053193"); // 2
      Leg_74_set.insert("LegPool_t_1811053193");
      Leg_74.add_attribute("Dated", "LegDatedDate_t_1690844241"); // 2
      Leg_74_set.insert("LegDatedDate_t_1690844241");
      Leg_74.add_attribute("CSetMo", "1117723113"); // 2
      Leg_74_set.insert("1117723113");
      Leg_74.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1517508512"); // 2
      Leg_74_set.insert("LegInterestAccrualDate_t_1517508512");
      Leg_74.add_attribute("PutCall", "1485849037"); // 2
      Leg_74_set.insert("1485849037");
      Leg_74.add_attribute("LegOptionRatio", "20590537.600000"); // 2
      Leg_74_set.insert("20590537.600000");
      Leg_74.add_attribute("Px", "9356076.190000"); // 2
      Leg_74_set.insert("9356076.190000");
      all_values.push_back(Leg_74_set);
      all_compo_names.insert("Leg_74_set");

      {
        xml_element LegAID_71{"LegAID"};
        multiset<string> LegAID_71_set;
        LegAID_71.add_attribute("SecAltID", "LegSecurityAltID_t_1512886424"); // 3
        LegAID_71_set.insert("LegSecurityAltID_t_1512886424");
        LegAID_71.add_attribute("SecAltIDSrc", "L"); // 3
        LegAID_71_set.insert("L");
        all_values.push_back(LegAID_71_set);
        all_compo_names.insert("LegAID_71_set");

        Leg_74.add_element(LegAID_71);
      }
      Quot_2.add_element(Leg_74);
    }
    {
      xml_element Stip_137{"Stip"};
      multiset<string> Stip_137_set;
      Stip_137.add_attribute("StipTyp", "WAL"); // 2
      Stip_137_set.insert("WAL");
      Stip_137.add_attribute("StipVal", "LegStipulationValue_t_1356200684"); // 2
      Stip_137_set.insert("LegStipulationValue_t_1356200684");
      all_values.push_back(Stip_137_set);
      all_compo_names.insert("Stip_137_set");

      Quot_2.add_element(Stip_137);
    }
    {
      xml_element Pty_330{"Pty"};
      multiset<string> Pty_330_set;
      Pty_330.add_attribute("ID", "NestedPartyID_t_1797738482"); // 2
      Pty_330_set.insert("NestedPartyID_t_1797738482");
      Pty_330.add_attribute("Src", "9"); // 2
      Pty_330_set.insert("9");
      Pty_330.add_attribute("R", "36"); // 2
      Pty_330_set.insert("36");
      all_values.push_back(Pty_330_set);
      all_compo_names.insert("Pty_330_set");

      {
        xml_element Sub_330{"Sub"};
        multiset<string> Sub_330_set;
        Sub_330.add_attribute("ID", "NestedPartySubID_t_1480685246"); // 3
        Sub_330_set.insert("NestedPartySubID_t_1480685246");
        Sub_330.add_attribute("Typ", "30"); // 3
        Sub_330_set.insert("30");
        all_values.push_back(Sub_330_set);
        all_compo_names.insert("Sub_330_set");

        Pty_330.add_element(Sub_330);
      }
      Quot_2.add_element(Pty_330);
    }
    {
      xml_element BnchmkCurve_5{"BnchmkCurve"};
      multiset<string> BnchmkCurve_5_set;
      BnchmkCurve_5.add_attribute("Ccy", "CHF"); // 2
      BnchmkCurve_5_set.insert("CHF");
      BnchmkCurve_5.add_attribute("Name", "Euribor"); // 2
      BnchmkCurve_5_set.insert("Euribor");
      BnchmkCurve_5.add_attribute("Point", "LegBenchmarkCurvePoint_t_121219052"); // 2
      BnchmkCurve_5_set.insert("LegBenchmarkCurvePoint_t_121219052");
      BnchmkCurve_5.add_attribute("Px", "6057325.220000"); // 2
      BnchmkCurve_5_set.insert("6057325.220000");
      BnchmkCurve_5.add_attribute("PxTyp", "33724424"); // 2
      BnchmkCurve_5_set.insert("33724424");
      all_values.push_back(BnchmkCurve_5_set);
      all_compo_names.insert("BnchmkCurve_5_set");

      Quot_2.add_element(BnchmkCurve_5);
    }
    elt.add_element(Quot_2);
  } // end Quot
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_23{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_23_set;
    SprdBnchmkCurve_23.add_attribute("Spread", "8108960.710000"); // 1
    SprdBnchmkCurve_23_set.insert("8108960.710000");
    SprdBnchmkCurve_23.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_23_set.insert("GBP");
    SprdBnchmkCurve_23.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_23_set.insert("Treasury");
    SprdBnchmkCurve_23.add_attribute("Point", "BenchmarkCurvePoint_t_419800185"); // 1
    SprdBnchmkCurve_23_set.insert("BenchmarkCurvePoint_t_419800185");
    SprdBnchmkCurve_23.add_attribute("Px", "20081278.070000"); // 1
    SprdBnchmkCurve_23_set.insert("20081278.070000");
    SprdBnchmkCurve_23.add_attribute("PxTyp", "3"); // 1
    SprdBnchmkCurve_23_set.insert("3");
    SprdBnchmkCurve_23.add_attribute("SecID", "BenchmarkSecurityID_t_87182186"); // 1
    SprdBnchmkCurve_23_set.insert("BenchmarkSecurityID_t_87182186");
    SprdBnchmkCurve_23.add_attribute("SecIDSrc", "J"); // 1
    SprdBnchmkCurve_23_set.insert("J");
    all_values.push_back(SprdBnchmkCurve_23_set);
    all_compo_names.insert("SprdBnchmkCurve_23_set");

    elt.add_element(SprdBnchmkCurve_23);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_18{"Yield"};
    multiset<string> Yield_18_set;
    Yield_18.add_attribute("Typ", "LASTYEAR"); // 1
    Yield_18_set.insert("LASTYEAR");
    Yield_18.add_attribute("Yld", "17780264.270000"); // 1
    Yield_18_set.insert("17780264.270000");
    Yield_18.add_attribute("CalcDt", "YieldCalcDate_t_1910499093"); // 1
    Yield_18_set.insert("YieldCalcDate_t_1910499093");
    Yield_18.add_attribute("RedDt", "YieldRedemptionDate_t_1343823244"); // 1
    Yield_18_set.insert("YieldRedemptionDate_t_1343823244");
    Yield_18.add_attribute("RedPx", "11163918.160000"); // 1
    Yield_18_set.insert("11163918.160000");
    Yield_18.add_attribute("RedPxTyp", "19"); // 1
    Yield_18_set.insert("19");
    all_values.push_back(Yield_18_set);
    all_compo_names.insert("Yield_18_set");

    elt.add_element(Yield_18);
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
