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
  elt.add_attribute("RspID", "QuoteRespID_t_1738709693"); // 0
  QuoteResponse_message_t_0.insert("QuoteRespID_t_1738709693");
  elt.add_attribute("QID", "QuoteID_t_121347907"); // 0
  QuoteResponse_message_t_0.insert("QuoteID_t_121347907");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1569294686"); // 0
  QuoteResponse_message_t_0.insert("QuoteMsgID_t_1569294686");
  elt.add_attribute("RspTyp", "6"); // 0
  QuoteResponse_message_t_0.insert("6");
  elt.add_attribute("ClOrdID", "ClOrdID_t_402331978"); // 0
  QuoteResponse_message_t_0.insert("ClOrdID_t_402331978");
  elt.add_attribute("Cpcty", "I"); // 0
  QuoteResponse_message_t_0.insert("I");
  elt.add_attribute("Rstctions", "C"); // 0
  QuoteResponse_message_t_0.insert("C");
  elt.add_attribute("IOIID", "IOIID_t_656264369"); // 0
  QuoteResponse_message_t_0.insert("IOIID_t_656264369");
  elt.add_attribute("Typ", "2"); // 0
  QuoteResponse_message_t_0.insert("2");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  QuoteResponse_message_t_0.insert("true");
  elt.add_attribute("SesID", "1"); // 0
  QuoteResponse_message_t_0.insert("1");
  elt.add_attribute("SesSub", "5"); // 0
  QuoteResponse_message_t_0.insert("5");
  elt.add_attribute("Side", "B"); // 0
  QuoteResponse_message_t_0.insert("B");
  elt.add_attribute("MinQty", "9531104.630000"); // 0
  QuoteResponse_message_t_0.insert("9531104.630000");
  elt.add_attribute("SettlTyp", "7"); // 0
  QuoteResponse_message_t_0.insert("7");
  elt.add_attribute("SettlDt", "SettlDate_t_786977723"); // 0
  QuoteResponse_message_t_0.insert("SettlDate_t_786977723");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1852778888"); // 0
  QuoteResponse_message_t_0.insert("SettlDate2_t_1852778888");
  elt.add_attribute("Qty2", "6603761.610000"); // 0
  QuoteResponse_message_t_0.insert("6603761.610000");
  elt.add_attribute("Ccy", "CAN"); // 0
  QuoteResponse_message_t_0.insert("CAN");
  elt.add_attribute("Acct", "Account_t_1696891497"); // 0
  QuoteResponse_message_t_0.insert("Account_t_1696891497");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  QuoteResponse_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "7"); // 0
  QuoteResponse_message_t_0.insert("7");
  elt.add_attribute("BidPx", "6238181.410000"); // 0
  QuoteResponse_message_t_0.insert("6238181.410000");
  elt.add_attribute("OfrPx", "16756329.990000"); // 0
  QuoteResponse_message_t_0.insert("16756329.990000");
  elt.add_attribute("MktBidPx", "18305240.870000"); // 0
  QuoteResponse_message_t_0.insert("18305240.870000");
  elt.add_attribute("MktOfrPx", "922269.580000"); // 0
  QuoteResponse_message_t_0.insert("922269.580000");
  elt.add_attribute("MinBidSz", "14572332.070000"); // 0
  QuoteResponse_message_t_0.insert("14572332.070000");
  elt.add_attribute("BidSz", "13820465.040000"); // 0
  QuoteResponse_message_t_0.insert("13820465.040000");
  elt.add_attribute("MinOfrSz", "2658259.750000"); // 0
  QuoteResponse_message_t_0.insert("2658259.750000");
  elt.add_attribute("OfrSz", "2869310.460000"); // 0
  QuoteResponse_message_t_0.insert("2869310.460000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_973272549"); // 0
  QuoteResponse_message_t_0.insert("ValidUntilTime_t_973272549");
  elt.add_attribute("BidSpotRt", "3871738.820000"); // 0
  QuoteResponse_message_t_0.insert("3871738.820000");
  elt.add_attribute("OfrSpotRt", "18562257.330000"); // 0
  QuoteResponse_message_t_0.insert("18562257.330000");
  elt.add_attribute("BidFwdPnts", "19713767.140000"); // 0
  QuoteResponse_message_t_0.insert("19713767.140000");
  elt.add_attribute("OfrFwdPnts", "7895058.600000"); // 0
  QuoteResponse_message_t_0.insert("7895058.600000");
  elt.add_attribute("MidPx", "10555370.550000"); // 0
  QuoteResponse_message_t_0.insert("10555370.550000");
  elt.add_attribute("BidYld", "18815085.220000"); // 0
  QuoteResponse_message_t_0.insert("18815085.220000");
  elt.add_attribute("MidYld", "14457702.300000"); // 0
  QuoteResponse_message_t_0.insert("14457702.300000");
  elt.add_attribute("OfrYld", "18937227.010000"); // 0
  QuoteResponse_message_t_0.insert("18937227.010000");
  elt.add_attribute("TxnTm", "TransactTime_t_1250311343"); // 0
  QuoteResponse_message_t_0.insert("TransactTime_t_1250311343");
  elt.add_attribute("OrdTyp", "B"); // 0
  QuoteResponse_message_t_0.insert("B");
  elt.add_attribute("BidFwdPnts2", "1597607.110000"); // 0
  QuoteResponse_message_t_0.insert("1597607.110000");
  elt.add_attribute("OfrFwdPnts2", "13754657.530000"); // 0
  QuoteResponse_message_t_0.insert("13754657.530000");
  elt.add_attribute("SettlCurrBidFxRt", "16968911.610000"); // 0
  QuoteResponse_message_t_0.insert("16968911.610000");
  elt.add_attribute("SettlCurrOfrFxRt", "2887694.430000"); // 0
  QuoteResponse_message_t_0.insert("2887694.430000");
  elt.add_attribute("SettlCurrFxRtCalc", "M"); // 0
  QuoteResponse_message_t_0.insert("M");
  elt.add_attribute("Comm", "Commission_t_1402186401"); // 0
  QuoteResponse_message_t_0.insert("Commission_t_1402186401");
  elt.add_attribute("CommTyp", "1"); // 0
  QuoteResponse_message_t_0.insert("1");
  elt.add_attribute("CustCpcty", "3"); // 0
  QuoteResponse_message_t_0.insert("3");
  elt.add_attribute("ExDest", "ExDestination_t_564470940"); // 0
  QuoteResponse_message_t_0.insert("ExDestination_t_564470940");
  elt.add_attribute("ExDestIDSrc", "E"); // 0
  QuoteResponse_message_t_0.insert("E");
  elt.add_attribute("Txt", "Text_t_799543199"); // 0
  QuoteResponse_message_t_0.insert("Text_t_799543199");
  elt.add_attribute("EncTxtLen", "1513470501"); // 0
  QuoteResponse_message_t_0.insert("1513470501");
  elt.add_attribute("EncTxt", "EncodedText_t_1122371594"); // 0
  QuoteResponse_message_t_0.insert("EncodedText_t_1122371594");
  elt.add_attribute("Px", "3276925.500000"); // 0
  QuoteResponse_message_t_0.insert("3276925.500000");
  elt.add_attribute("PxTyp", "1"); // 0
  QuoteResponse_message_t_0.insert("1");
  all_values.push_back(QuoteResponse_message_t_0);
  all_compo_names.insert("QuoteResponse_message_t");

  { // Hdr
    xml_element Hdr_72{"Hdr"};
    multiset<string> Hdr_72_set;
    Hdr_72.add_attribute("SeqNum", "1214598552"); // 1
    Hdr_72_set.insert("1214598552");
    Hdr_72.add_attribute("SID", "SenderCompID_t_1784925757"); // 1
    Hdr_72_set.insert("SenderCompID_t_1784925757");
    Hdr_72.add_attribute("TID", "TargetCompID_t_431073796"); // 1
    Hdr_72_set.insert("TargetCompID_t_431073796");
    Hdr_72.add_attribute("OBID", "OnBehalfOfCompID_t_1480424527"); // 1
    Hdr_72_set.insert("OnBehalfOfCompID_t_1480424527");
    Hdr_72.add_attribute("D2ID", "DeliverToCompID_t_2071856804"); // 1
    Hdr_72_set.insert("DeliverToCompID_t_2071856804");
    Hdr_72.add_attribute("SSub", "SenderSubID_t_1404346345"); // 1
    Hdr_72_set.insert("SenderSubID_t_1404346345");
    Hdr_72.add_attribute("SLoc", "SenderLocationID_t_1867598410"); // 1
    Hdr_72_set.insert("SenderLocationID_t_1867598410");
    Hdr_72.add_attribute("TSub", "TargetSubID_t_1780598889"); // 1
    Hdr_72_set.insert("TargetSubID_t_1780598889");
    Hdr_72.add_attribute("TLoc", "TargetLocationID_t_1228239412"); // 1
    Hdr_72_set.insert("TargetLocationID_t_1228239412");
    Hdr_72.add_attribute("OBSub", "OnBehalfOfSubID_t_509620622"); // 1
    Hdr_72_set.insert("OnBehalfOfSubID_t_509620622");
    Hdr_72.add_attribute("OBLoc", "OnBehalfOfLocationID_t_688652296"); // 1
    Hdr_72_set.insert("OnBehalfOfLocationID_t_688652296");
    Hdr_72.add_attribute("D2Sub", "DeliverToSubID_t_962264286"); // 1
    Hdr_72_set.insert("DeliverToSubID_t_962264286");
    Hdr_72.add_attribute("D2Loc", "DeliverToLocationID_t_1955390852"); // 1
    Hdr_72_set.insert("DeliverToLocationID_t_1955390852");
    Hdr_72.add_attribute("PosDup", "Y"); // 1
    Hdr_72_set.insert("Y");
    Hdr_72.add_attribute("PosRsnd", "Y"); // 1
    Hdr_72_set.insert("Y");
    Hdr_72.add_attribute("Snt", "SendingTime_t_551687902"); // 1
    Hdr_72_set.insert("SendingTime_t_551687902");
    Hdr_72.add_attribute("OrigSnt", "OrigSendingTime_t_594652061"); // 1
    Hdr_72_set.insert("OrigSendingTime_t_594652061");
    Hdr_72.add_attribute("MsgEncd", "MessageEncoding_t_1440557734"); // 1
    Hdr_72_set.insert("MessageEncoding_t_1440557734");
    all_values.push_back(Hdr_72_set);
    all_compo_names.insert("Hdr_72_set");

    {
      xml_element Hop_72{"Hop"};
      multiset<string> Hop_72_set;
      Hop_72.add_attribute("ID", "HopCompID_t_101095415"); // 2
      Hop_72_set.insert("HopCompID_t_101095415");
      Hop_72.add_attribute("Ref", "883421504"); // 2
      Hop_72_set.insert("883421504");
      Hop_72.add_attribute("Snt", "HopSendingTime_t_1455517563"); // 2
      Hop_72_set.insert("HopSendingTime_t_1455517563");
      all_values.push_back(Hop_72_set);
      all_compo_names.insert("Hop_72_set");

      Hdr_72.add_element(Hop_72);
    }
    elt.add_element(Hdr_72);
  } // end Hdr
  { // QuotQual
    xml_element QuotQual_6{"QuotQual"};
    multiset<string> QuotQual_6_set;
    QuotQual_6.add_attribute("Qual", "W"); // 1
    QuotQual_6_set.insert("W");
    all_values.push_back(QuotQual_6_set);
    all_compo_names.insert("QuotQual_6_set");

    elt.add_element(QuotQual_6);
  } // end QuotQual
  { // Pty
    xml_element Pty_360{"Pty"};
    multiset<string> Pty_360_set;
    Pty_360.add_attribute("ID", "PartyID_t_2067752757"); // 1
    Pty_360_set.insert("PartyID_t_2067752757");
    Pty_360.add_attribute("Src", "E"); // 1
    Pty_360_set.insert("E");
    Pty_360.add_attribute("R", "74"); // 1
    Pty_360_set.insert("74");
    all_values.push_back(Pty_360_set);
    all_compo_names.insert("Pty_360_set");

    {
      xml_element Sub_360{"Sub"};
      multiset<string> Sub_360_set;
      Sub_360.add_attribute("ID", "PartySubID_t_1433739610"); // 2
      Sub_360_set.insert("PartySubID_t_1433739610");
      Sub_360.add_attribute("Typ", "20"); // 2
      Sub_360_set.insert("20");
      all_values.push_back(Sub_360_set);
      all_compo_names.insert("Sub_360_set");

      Pty_360.add_element(Sub_360);
    }
    elt.add_element(Pty_360);
  } // end Pty
  { // Pty
    xml_element Pty_361{"Pty"};
    multiset<string> Pty_361_set;
    Pty_361.add_attribute("ID", "PartyID_t_1532108394"); // 1
    Pty_361_set.insert("PartyID_t_1532108394");
    Pty_361.add_attribute("Src", "9"); // 1
    Pty_361_set.insert("9");
    Pty_361.add_attribute("R", "5"); // 1
    Pty_361_set.insert("5");
    all_values.push_back(Pty_361_set);
    all_compo_names.insert("Pty_361_set");

    {
      xml_element Sub_361{"Sub"};
      multiset<string> Sub_361_set;
      Sub_361.add_attribute("ID", "PartySubID_t_1169550504"); // 2
      Sub_361_set.insert("PartySubID_t_1169550504");
      Sub_361.add_attribute("Typ", "20"); // 2
      Sub_361_set.insert("20");
      all_values.push_back(Sub_361_set);
      all_compo_names.insert("Sub_361_set");

      Pty_361.add_element(Sub_361);
    }
    elt.add_element(Pty_361);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_66{"Instrmt"};
    multiset<string> Instrmt_66_set;
    Instrmt_66.add_attribute("Sym", "Symbol_t_1853547939"); // 1
    Instrmt_66_set.insert("Symbol_t_1853547939");
    Instrmt_66.add_attribute("Sfx", "CD"); // 1
    Instrmt_66_set.insert("CD");
    Instrmt_66.add_attribute("ID", "SecurityID_t_170703396"); // 1
    Instrmt_66_set.insert("SecurityID_t_170703396");
    Instrmt_66.add_attribute("Src", "I"); // 1
    Instrmt_66_set.insert("I");
    Instrmt_66.add_attribute("Prod", "13"); // 1
    Instrmt_66_set.insert("13");
    Instrmt_66.add_attribute("ProdCmplx", "ProductComplex_t_1398942808"); // 1
    Instrmt_66_set.insert("ProductComplex_t_1398942808");
    Instrmt_66.add_attribute("SecGrp", "SecurityGroup_t_2083283324"); // 1
    Instrmt_66_set.insert("SecurityGroup_t_2083283324");
    Instrmt_66.add_attribute("CFI", "CFICode_t_1415691197"); // 1
    Instrmt_66_set.insert("CFICode_t_1415691197");
    Instrmt_66.add_attribute("SecTyp", "TBOND"); // 1
    Instrmt_66_set.insert("TBOND");
    Instrmt_66.add_attribute("SubTyp", "SecuritySubType_t_1891190528"); // 1
    Instrmt_66_set.insert("SecuritySubType_t_1891190528");
    Instrmt_66.add_attribute("MMY", "1850582546"); // 1
    Instrmt_66_set.insert("1850582546");
    Instrmt_66.add_attribute("MatDt", "MaturityDate_t_278815428"); // 1
    Instrmt_66_set.insert("MaturityDate_t_278815428");
    Instrmt_66.add_attribute("MatTm", "295394783"); // 1
    Instrmt_66_set.insert("295394783");
    Instrmt_66.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_297750959"); // 1
    Instrmt_66_set.insert("SettleOnOpenFlag_t_297750959");
    Instrmt_66.add_attribute("AsgnMeth", "1719373162"); // 1
    Instrmt_66_set.insert("1719373162");
    Instrmt_66.add_attribute("Status", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("CpnPmt", "CouponPaymentDate_t_1181172463"); // 1
    Instrmt_66_set.insert("CouponPaymentDate_t_1181172463");
    Instrmt_66.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_66_set.insert("MR");
    Instrmt_66.add_attribute("Snrty", "SR"); // 1
    Instrmt_66_set.insert("SR");
    Instrmt_66.add_attribute("NotlPctOut", "8662559.230000"); // 1
    Instrmt_66_set.insert("8662559.230000");
    Instrmt_66.add_attribute("OrigNotlPctOut", "14322797.220000"); // 1
    Instrmt_66_set.insert("14322797.220000");
    Instrmt_66.add_attribute("AttchPnt", "18200411.250000"); // 1
    Instrmt_66_set.insert("18200411.250000");
    Instrmt_66.add_attribute("DetchPnt", "10498928.360000"); // 1
    Instrmt_66_set.insert("10498928.360000");
    Instrmt_66.add_attribute("Issued", "IssueDate_t_489211918"); // 1
    Instrmt_66_set.insert("IssueDate_t_489211918");
    Instrmt_66.add_attribute("RepoCollSecTyp", "1106297087"); // 1
    Instrmt_66_set.insert("1106297087");
    Instrmt_66.add_attribute("RepoTrm", "208417696"); // 1
    Instrmt_66_set.insert("208417696");
    Instrmt_66.add_attribute("RepoRt", "20213203.130000"); // 1
    Instrmt_66_set.insert("20213203.130000");
    Instrmt_66.add_attribute("Fctr", "15890639.900000"); // 1
    Instrmt_66_set.insert("15890639.900000");
    Instrmt_66.add_attribute("CrdRtg", "CreditRating_t_581541108"); // 1
    Instrmt_66_set.insert("CreditRating_t_581541108");
    Instrmt_66.add_attribute("Rgstry", "InstrRegistry_t_1043387169"); // 1
    Instrmt_66_set.insert("InstrRegistry_t_1043387169");
    Instrmt_66.add_attribute("IssuCtry", "355421040"); // 1
    Instrmt_66_set.insert("355421040");
    Instrmt_66.add_attribute("StPrv", "StateOrProvinceOfIssue_t_287605399"); // 1
    Instrmt_66_set.insert("StateOrProvinceOfIssue_t_287605399");
    Instrmt_66.add_attribute("Lcl", "LocaleOfIssue_t_2137310829"); // 1
    Instrmt_66_set.insert("LocaleOfIssue_t_2137310829");
    Instrmt_66.add_attribute("Redeem", "RedemptionDate_t_526124436"); // 1
    Instrmt_66_set.insert("RedemptionDate_t_526124436");
    Instrmt_66.add_attribute("StrkPx", "18612681.010000"); // 1
    Instrmt_66_set.insert("18612681.010000");
    Instrmt_66.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_66_set.insert("JPY");
    Instrmt_66.add_attribute("StrkMult", "17970677.770000"); // 1
    Instrmt_66_set.insert("17970677.770000");
    Instrmt_66.add_attribute("StrkValu", "21325572.790000"); // 1
    Instrmt_66_set.insert("21325572.790000");
    Instrmt_66.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_66_set.insert("4");
    Instrmt_66.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_66_set.insert("3");
    Instrmt_66.add_attribute("StrkPxBndryPrcsn", "18356561.770000"); // 1
    Instrmt_66_set.insert("18356561.770000");
    Instrmt_66.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_66_set.insert("4");
    Instrmt_66.add_attribute("OptAt", "1836169440"); // 1
    Instrmt_66_set.insert("1836169440");
    Instrmt_66.add_attribute("Mult", "21334071.370000"); // 1
    Instrmt_66_set.insert("21334071.370000");
    Instrmt_66.add_attribute("MultTyp", "0"); // 1
    Instrmt_66_set.insert("0");
    Instrmt_66.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("MinPxIncr", "11670959.520000"); // 1
    Instrmt_66_set.insert("11670959.520000");
    Instrmt_66.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_869419063"); // 1
    Instrmt_66_set.insert("MinPriceIncrementAmount_t_869419063");
    Instrmt_66.add_attribute("UOM", "Bbl"); // 1
    Instrmt_66_set.insert("Bbl");
    Instrmt_66.add_attribute("UOMQty", "20333518.760000"); // 1
    Instrmt_66_set.insert("20333518.760000");
    Instrmt_66.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_66_set.insert("Bu");
    Instrmt_66.add_attribute("PxUOMQty", "16575054.830000"); // 1
    Instrmt_66_set.insert("16575054.830000");
    Instrmt_66.add_attribute("SettlMeth", "C"); // 1
    Instrmt_66_set.insert("C");
    Instrmt_66.add_attribute("ExerStyle", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("OptPayAmt", "OptPayoutAmount_t_1144178760"); // 1
    Instrmt_66_set.insert("OptPayoutAmount_t_1144178760");
    Instrmt_66.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_66_set.insert("INX");
    Instrmt_66.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_66_set.insert("EQTY");
    Instrmt_66.add_attribute("ListMeth", "0"); // 1
    Instrmt_66_set.insert("0");
    Instrmt_66.add_attribute("CapPx", "15606508.900000"); // 1
    Instrmt_66_set.insert("15606508.900000");
    Instrmt_66.add_attribute("FlrPx", "4133203.050000"); // 1
    Instrmt_66_set.insert("4133203.050000");
    Instrmt_66.add_attribute("PutCall", "0"); // 1
    Instrmt_66_set.insert("0");
    Instrmt_66.add_attribute("FlexInd", "false"); // 1
    Instrmt_66_set.insert("false");
    Instrmt_66.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_66_set.insert("true");
    Instrmt_66.add_attribute("TmUnit", "Min"); // 1
    Instrmt_66_set.insert("Min");
    Instrmt_66.add_attribute("CpnRt", "1198605.050000"); // 1
    Instrmt_66_set.insert("1198605.050000");
    Instrmt_66.add_attribute("Exch", "SecurityExchange_t_717028338"); // 1
    Instrmt_66_set.insert("SecurityExchange_t_717028338");
    Instrmt_66.add_attribute("PosLmt", "1376693850"); // 1
    Instrmt_66_set.insert("1376693850");
    Instrmt_66.add_attribute("NTPosLmt", "104934136"); // 1
    Instrmt_66_set.insert("104934136");
    Instrmt_66.add_attribute("Issr", "Issuer_t_708335381"); // 1
    Instrmt_66_set.insert("Issuer_t_708335381");
    Instrmt_66.add_attribute("EncIssrLen", "769984859"); // 1
    Instrmt_66_set.insert("769984859");
    Instrmt_66.add_attribute("EncIssr", "EncodedIssuer_t_1940590313"); // 1
    Instrmt_66_set.insert("EncodedIssuer_t_1940590313");
    Instrmt_66.add_attribute("Desc", "SecurityDesc_t_978457852"); // 1
    Instrmt_66_set.insert("SecurityDesc_t_978457852");
    Instrmt_66.add_attribute("EncSecDescLen", "458670652"); // 1
    Instrmt_66_set.insert("458670652");
    Instrmt_66.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1926513802"); // 1
    Instrmt_66_set.insert("EncodedSecurityDesc_t_1926513802");
    Instrmt_66.add_attribute("Pool", "Pool_t_820469838"); // 1
    Instrmt_66_set.insert("Pool_t_820469838");
    Instrmt_66.add_attribute("CSetMo", "543846643"); // 1
    Instrmt_66_set.insert("543846643");
    Instrmt_66.add_attribute("CPPgm", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("CPRegT", "CPRegType_t_1689888901"); // 1
    Instrmt_66_set.insert("CPRegType_t_1689888901");
    Instrmt_66.add_attribute("Dated", "DatedDate_t_381311001"); // 1
    Instrmt_66_set.insert("DatedDate_t_381311001");
    Instrmt_66.add_attribute("IntAcrl", "InterestAccrualDate_t_831994335"); // 1
    Instrmt_66_set.insert("InterestAccrualDate_t_831994335");
    all_values.push_back(Instrmt_66_set);
    all_compo_names.insert("Instrmt_66_set");

    {
      xml_element AID_69{"AID"};
      multiset<string> AID_69_set;
      AID_69.add_attribute("AltID", "SecurityAltID_t_1844104038"); // 2
      AID_69_set.insert("SecurityAltID_t_1844104038");
      AID_69.add_attribute("AltIDSrc", "E"); // 2
      AID_69_set.insert("E");
      all_values.push_back(AID_69_set);
      all_compo_names.insert("AID_69_set");

      Instrmt_66.add_element(AID_69);
    }
    {
      xml_element SecXML_69{"SecXML"};
      multiset<string> SecXML_69_set;
      SecXML_69.add_attribute("Schema", "SecurityXMLSchema_t_1767755399"); // 2
      SecXML_69_set.insert("SecurityXMLSchema_t_1767755399");
      all_values.push_back(SecXML_69_set);
      all_compo_names.insert("SecXML_69_set");

      Instrmt_66.add_element(SecXML_69);
    }
    {
      xml_element Evnt_69{"Evnt"};
      multiset<string> Evnt_69_set;
      Evnt_69.add_attribute("EventTyp", "6"); // 2
      Evnt_69_set.insert("6");
      Evnt_69.add_attribute("Dt", "EventDate_t_507651760"); // 2
      Evnt_69_set.insert("EventDate_t_507651760");
      Evnt_69.add_attribute("Tm", "EventTime_t_764450512"); // 2
      Evnt_69_set.insert("EventTime_t_764450512");
      Evnt_69.add_attribute("Px", "8573111.670000"); // 2
      Evnt_69_set.insert("8573111.670000");
      Evnt_69.add_attribute("Txt", "EventText_t_565551025"); // 2
      Evnt_69_set.insert("EventText_t_565551025");
      all_values.push_back(Evnt_69_set);
      all_compo_names.insert("Evnt_69_set");

      Instrmt_66.add_element(Evnt_69);
    }
    {
      xml_element Pty_362{"Pty"};
      multiset<string> Pty_362_set;
      Pty_362.add_attribute("ID", "InstrumentPartyID_t_342686732"); // 2
      Pty_362_set.insert("InstrumentPartyID_t_342686732");
      Pty_362.add_attribute("Src", "6"); // 2
      Pty_362_set.insert("6");
      Pty_362.add_attribute("R", "19"); // 2
      Pty_362_set.insert("19");
      all_values.push_back(Pty_362_set);
      all_compo_names.insert("Pty_362_set");

      {
        xml_element Sub_362{"Sub"};
        multiset<string> Sub_362_set;
        Sub_362.add_attribute("ID", "InstrumentPartySubID_t_208528352"); // 3
        Sub_362_set.insert("InstrumentPartySubID_t_208528352");
        Sub_362.add_attribute("Typ", "21"); // 3
        Sub_362_set.insert("21");
        all_values.push_back(Sub_362_set);
        all_compo_names.insert("Sub_362_set");

        Pty_362.add_element(Sub_362);
      }
      Instrmt_66.add_element(Pty_362);
    }
    {
      xml_element CmplxEvnt_66{"CmplxEvnt"};
      multiset<string> CmplxEvnt_66_set;
      CmplxEvnt_66.add_attribute("Typ", "3"); // 2
      CmplxEvnt_66_set.insert("3");
      CmplxEvnt_66.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1935638073"); // 2
      CmplxEvnt_66_set.insert("ComplexOptPayoutAmount_t_1935638073");
      CmplxEvnt_66.add_attribute("Px", "19408169.850000"); // 2
      CmplxEvnt_66_set.insert("19408169.850000");
      CmplxEvnt_66.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_66_set.insert("4");
      CmplxEvnt_66.add_attribute("PxBndryPrcsn", "11648482.750000"); // 2
      CmplxEvnt_66_set.insert("11648482.750000");
      CmplxEvnt_66.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_66_set.insert("2");
      CmplxEvnt_66.add_attribute("Cond", "1"); // 2
      CmplxEvnt_66_set.insert("1");
      all_values.push_back(CmplxEvnt_66_set);
      all_compo_names.insert("CmplxEvnt_66_set");

      {
        xml_element EvntDts_66{"EvntDts"};
        multiset<string> EvntDts_66_set;
        EvntDts_66.add_attribute("StartDt", "ComplexEventStartDate_t_1934833135"); // 3
        EvntDts_66_set.insert("ComplexEventStartDate_t_1934833135");
        EvntDts_66.add_attribute("EndDt", "ComplexEventEndDate_t_1838857787"); // 3
        EvntDts_66_set.insert("ComplexEventEndDate_t_1838857787");
        all_values.push_back(EvntDts_66_set);
        all_compo_names.insert("EvntDts_66_set");

        {
          xml_element EvntTms_66{"EvntTms"};
          multiset<string> EvntTms_66_set;
          EvntTms_66.add_attribute("StartTm", "27170349"); // 4
          EvntTms_66_set.insert("27170349");
          EvntTms_66.add_attribute("EndTm", "246020139"); // 4
          EvntTms_66_set.insert("246020139");
          all_values.push_back(EvntTms_66_set);
          all_compo_names.insert("EvntTms_66_set");

          EvntDts_66.add_element(EvntTms_66);
        }
        CmplxEvnt_66.add_element(EvntDts_66);
      }
      Instrmt_66.add_element(CmplxEvnt_66);
    }
    elt.add_element(Instrmt_66);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_24{"FinDetls"};
    multiset<string> FinDetls_24_set;
    FinDetls_24.add_attribute("AgmtDesc", "AgreementDesc_t_1617887941"); // 1
    FinDetls_24_set.insert("AgreementDesc_t_1617887941");
    FinDetls_24.add_attribute("AgmtID", "AgreementID_t_847640187"); // 1
    FinDetls_24_set.insert("AgreementID_t_847640187");
    FinDetls_24.add_attribute("AgmtDt", "AgreementDate_t_789866782"); // 1
    FinDetls_24_set.insert("AgreementDate_t_789866782");
    FinDetls_24.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_24_set.insert("GBP");
    FinDetls_24.add_attribute("TrmTyp", "4"); // 1
    FinDetls_24_set.insert("4");
    FinDetls_24.add_attribute("StartDt", "StartDate_t_1248524735"); // 1
    FinDetls_24_set.insert("StartDate_t_1248524735");
    FinDetls_24.add_attribute("EndDt", "EndDate_t_86665830"); // 1
    FinDetls_24_set.insert("EndDate_t_86665830");
    FinDetls_24.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_24_set.insert("0");
    FinDetls_24.add_attribute("MgnRatio", "8687964.870000"); // 1
    FinDetls_24_set.insert("8687964.870000");
    all_values.push_back(FinDetls_24_set);
    all_compo_names.insert("FinDetls_24_set");

    elt.add_element(FinDetls_24);
  } // end FinDetls
  { // Undly
    xml_element Undly_90{"Undly"};
    multiset<string> Undly_90_set;
    Undly_90.add_attribute("Sym", "UnderlyingSymbol_t_1570162380"); // 1
    Undly_90_set.insert("UnderlyingSymbol_t_1570162380");
    Undly_90.add_attribute("Sfx", "WI"); // 1
    Undly_90_set.insert("WI");
    Undly_90.add_attribute("ID", "UnderlyingSecurityID_t_1284024444"); // 1
    Undly_90_set.insert("UnderlyingSecurityID_t_1284024444");
    Undly_90.add_attribute("Src", "2"); // 1
    Undly_90_set.insert("2");
    Undly_90.add_attribute("Prod", "2"); // 1
    Undly_90_set.insert("2");
    Undly_90.add_attribute("CFI", "UnderlyingCFICode_t_1554502854"); // 1
    Undly_90_set.insert("UnderlyingCFICode_t_1554502854");
    Undly_90.add_attribute("SecTyp", "SLQN"); // 1
    Undly_90_set.insert("SLQN");
    Undly_90.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_36978436"); // 1
    Undly_90_set.insert("UnderlyingSecuritySubType_t_36978436");
    Undly_90.add_attribute("MMY", "1227975686"); // 1
    Undly_90_set.insert("1227975686");
    Undly_90.add_attribute("Mat", "UnderlyingMaturityDate_t_737933512"); // 1
    Undly_90_set.insert("UnderlyingMaturityDate_t_737933512");
    Undly_90.add_attribute("MatTm", "1972616509"); // 1
    Undly_90_set.insert("1972616509");
    Undly_90.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1021309024"); // 1
    Undly_90_set.insert("UnderlyingCouponPaymentDate_t_1021309024");
    Undly_90.add_attribute("RestrctTyp", "XR"); // 1
    Undly_90_set.insert("XR");
    Undly_90.add_attribute("Snrty", "SR"); // 1
    Undly_90_set.insert("SR");
    Undly_90.add_attribute("NotlPctOut", "9195764.970000"); // 1
    Undly_90_set.insert("9195764.970000");
    Undly_90.add_attribute("OrigNotlPctOut", "2745067.720000"); // 1
    Undly_90_set.insert("2745067.720000");
    Undly_90.add_attribute("AttchPnt", "7773306.240000"); // 1
    Undly_90_set.insert("7773306.240000");
    Undly_90.add_attribute("DetchPnt", "6109506.360000"); // 1
    Undly_90_set.insert("6109506.360000");
    Undly_90.add_attribute("Issued", "UnderlyingIssueDate_t_301677121"); // 1
    Undly_90_set.insert("UnderlyingIssueDate_t_301677121");
    Undly_90.add_attribute("RepoCollSecTyp", "1023350763"); // 1
    Undly_90_set.insert("1023350763");
    Undly_90.add_attribute("RepoTrm", "81354930"); // 1
    Undly_90_set.insert("81354930");
    Undly_90.add_attribute("RepoRt", "11493173.080000"); // 1
    Undly_90_set.insert("11493173.080000");
    Undly_90.add_attribute("Fctr", "18132175.450000"); // 1
    Undly_90_set.insert("18132175.450000");
    Undly_90.add_attribute("CrdRtg", "UnderlyingCreditRating_t_497885330"); // 1
    Undly_90_set.insert("UnderlyingCreditRating_t_497885330");
    Undly_90.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1539362748"); // 1
    Undly_90_set.insert("UnderlyingInstrRegistry_t_1539362748");
    Undly_90.add_attribute("Ctry", "836911680"); // 1
    Undly_90_set.insert("836911680");
    Undly_90.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1746410066"); // 1
    Undly_90_set.insert("UnderlyingStateOrProvinceOfIssue_t_1746410066");
    Undly_90.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1626028578"); // 1
    Undly_90_set.insert("UnderlyingLocaleOfIssue_t_1626028578");
    Undly_90.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1899422301"); // 1
    Undly_90_set.insert("UnderlyingRedemptionDate_t_1899422301");
    Undly_90.add_attribute("StrkPx", "4677229.050000"); // 1
    Undly_90_set.insert("4677229.050000");
    Undly_90.add_attribute("StrkCcy", "EUR"); // 1
    Undly_90_set.insert("EUR");
    Undly_90.add_attribute("OptA", "2100969904"); // 1
    Undly_90_set.insert("2100969904");
    Undly_90.add_attribute("Mult", "11892826.520000"); // 1
    Undly_90_set.insert("11892826.520000");
    Undly_90.add_attribute("MultTyp", "1"); // 1
    Undly_90_set.insert("1");
    Undly_90.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_90_set.insert("2");
    Undly_90.add_attribute("UOM", "USD"); // 1
    Undly_90_set.insert("USD");
    Undly_90.add_attribute("UOMQty", "1299482.310000"); // 1
    Undly_90_set.insert("1299482.310000");
    Undly_90.add_attribute("PxUOM", "Bbl"); // 1
    Undly_90_set.insert("Bbl");
    Undly_90.add_attribute("PxUOMQty", "18242775.440000"); // 1
    Undly_90_set.insert("18242775.440000");
    Undly_90.add_attribute("TmUnit", "Min"); // 1
    Undly_90_set.insert("Min");
    Undly_90.add_attribute("ExerStyle", "0"); // 1
    Undly_90_set.insert("0");
    Undly_90.add_attribute("CpnRt", "6981029.200000"); // 1
    Undly_90_set.insert("6981029.200000");
    Undly_90.add_attribute("Exch", "UnderlyingSecurityExchange_t_2093676019"); // 1
    Undly_90_set.insert("UnderlyingSecurityExchange_t_2093676019");
    Undly_90.add_attribute("Issr", "UnderlyingIssuer_t_634028774"); // 1
    Undly_90_set.insert("UnderlyingIssuer_t_634028774");
    Undly_90.add_attribute("EncUndIssrLen", "1617679418"); // 1
    Undly_90_set.insert("1617679418");
    Undly_90.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_220699143"); // 1
    Undly_90_set.insert("EncodedUnderlyingIssuer_t_220699143");
    Undly_90.add_attribute("Desc", "UnderlyingSecurityDesc_t_1411359398"); // 1
    Undly_90_set.insert("UnderlyingSecurityDesc_t_1411359398");
    Undly_90.add_attribute("EncUndSecDescLen", "81146406"); // 1
    Undly_90_set.insert("81146406");
    Undly_90.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_522376264"); // 1
    Undly_90_set.insert("EncodedUnderlyingSecurityDesc_t_522376264");
    Undly_90.add_attribute("CPPgm", "UnderlyingCPProgram_t_287226513"); // 1
    Undly_90_set.insert("UnderlyingCPProgram_t_287226513");
    Undly_90.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_162501336"); // 1
    Undly_90_set.insert("UnderlyingCPRegType_t_162501336");
    Undly_90.add_attribute("AllocPct", "16716935.720000"); // 1
    Undly_90_set.insert("16716935.720000");
    Undly_90.add_attribute("Ccy", "CHF"); // 1
    Undly_90_set.insert("CHF");
    Undly_90.add_attribute("Qty", "10635726.720000"); // 1
    Undly_90_set.insert("10635726.720000");
    Undly_90.add_attribute("SettlTyp", "5"); // 1
    Undly_90_set.insert("5");
    Undly_90.add_attribute("CashAmt", "UnderlyingCashAmount_t_259313085"); // 1
    Undly_90_set.insert("UnderlyingCashAmount_t_259313085");
    Undly_90.add_attribute("CashTyp", "FIXED"); // 1
    Undly_90_set.insert("FIXED");
    Undly_90.add_attribute("Px", "5418107.430000"); // 1
    Undly_90_set.insert("5418107.430000");
    Undly_90.add_attribute("DirtPx", "7270359.900000"); // 1
    Undly_90_set.insert("7270359.900000");
    Undly_90.add_attribute("EndPx", "4473758.100000"); // 1
    Undly_90_set.insert("4473758.100000");
    Undly_90.add_attribute("StartVal", "UnderlyingStartValue_t_1863911777"); // 1
    Undly_90_set.insert("UnderlyingStartValue_t_1863911777");
    Undly_90.add_attribute("CurVal", "UnderlyingCurrentValue_t_680522246"); // 1
    Undly_90_set.insert("UnderlyingCurrentValue_t_680522246");
    Undly_90.add_attribute("EndVal", "UnderlyingEndValue_t_1636658462"); // 1
    Undly_90_set.insert("UnderlyingEndValue_t_1636658462");
    Undly_90.add_attribute("AdjQty", "10267589.200000"); // 1
    Undly_90_set.insert("10267589.200000");
    Undly_90.add_attribute("FxRate", "4624585.850000"); // 1
    Undly_90_set.insert("4624585.850000");
    Undly_90.add_attribute("FxRateCalc", "M"); // 1
    Undly_90_set.insert("M");
    Undly_90.add_attribute("CapValu", "UnderlyingCapValue_t_1156707151"); // 1
    Undly_90_set.insert("UnderlyingCapValue_t_1156707151");
    Undly_90.add_attribute("SetMeth", "UnderlyingSettlMethod_t_281373361"); // 1
    Undly_90_set.insert("UnderlyingSettlMethod_t_281373361");
    Undly_90.add_attribute("PutCall", "1909754216"); // 1
    Undly_90_set.insert("1909754216");
    all_values.push_back(Undly_90_set);
    all_compo_names.insert("Undly_90_set");

    {
      xml_element UndAID_90{"UndAID"};
      multiset<string> UndAID_90_set;
      UndAID_90.add_attribute("AltID", "UnderlyingSecurityAltID_t_2024588894"); // 2
      UndAID_90_set.insert("UnderlyingSecurityAltID_t_2024588894");
      UndAID_90.add_attribute("AltIDSrc", "B"); // 2
      UndAID_90_set.insert("B");
      all_values.push_back(UndAID_90_set);
      all_compo_names.insert("UndAID_90_set");

      Undly_90.add_element(UndAID_90);
    }
    {
      xml_element Stip_139{"Stip"};
      multiset<string> Stip_139_set;
      Stip_139.add_attribute("Typ", "STRUCT"); // 2
      Stip_139_set.insert("STRUCT");
      Stip_139.add_attribute("Val", "UnderlyingStipValue_t_1970781265"); // 2
      Stip_139_set.insert("UnderlyingStipValue_t_1970781265");
      all_values.push_back(Stip_139_set);
      all_compo_names.insert("Stip_139_set");

      Undly_90.add_element(Stip_139);
    }
    {
      xml_element Pty_363{"Pty"};
      multiset<string> Pty_363_set;
      Pty_363.add_attribute("ID", "UnderlyingInstrumentPartyID_t_559449772"); // 2
      Pty_363_set.insert("UnderlyingInstrumentPartyID_t_559449772");
      Pty_363.add_attribute("Src", "E"); // 2
      Pty_363_set.insert("E");
      Pty_363.add_attribute("R", "82"); // 2
      Pty_363_set.insert("82");
      all_values.push_back(Pty_363_set);
      all_compo_names.insert("Pty_363_set");

      {
        xml_element Sub_363{"Sub"};
        multiset<string> Sub_363_set;
        Sub_363.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1970809170"); // 3
        Sub_363_set.insert("UnderlyingInstrumentPartySubID_t_1970809170");
        Sub_363.add_attribute("Typ", "14"); // 3
        Sub_363_set.insert("14");
        all_values.push_back(Sub_363_set);
        all_compo_names.insert("Sub_363_set");

        Pty_363.add_element(Sub_363);
      }
      Undly_90.add_element(Pty_363);
    }
    elt.add_element(Undly_90);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_25{"OrdQty"};
    multiset<string> OrdQty_25_set;
    OrdQty_25.add_attribute("Qty", "5663730.240000"); // 1
    OrdQty_25_set.insert("5663730.240000");
    OrdQty_25.add_attribute("Cash", "1105520.350000"); // 1
    OrdQty_25_set.insert("1105520.350000");
    OrdQty_25.add_attribute("Pct", "1742170.020000"); // 1
    OrdQty_25_set.insert("1742170.020000");
    OrdQty_25.add_attribute("RndDir", "0"); // 1
    OrdQty_25_set.insert("0");
    OrdQty_25.add_attribute("RndMod", "635124.450000"); // 1
    OrdQty_25_set.insert("635124.450000");
    all_values.push_back(OrdQty_25_set);
    all_compo_names.insert("OrdQty_25_set");

    elt.add_element(OrdQty_25);
  } // end OrdQty
  { // Stip
    xml_element Stip_140{"Stip"};
    multiset<string> Stip_140_set;
    Stip_140.add_attribute("Typ", "LOTVAR"); // 1
    Stip_140_set.insert("LOTVAR");
    Stip_140.add_attribute("Val", "StipulationValue_t_853384535"); // 1
    Stip_140_set.insert("StipulationValue_t_853384535");
    all_values.push_back(Stip_140_set);
    all_compo_names.insert("Stip_140_set");

    elt.add_element(Stip_140);
  } // end Stip
  { // Quot
    xml_element Quot_1{"Quot"};
    multiset<string> Quot_1_set;
    Quot_1.add_attribute("Qty", "16962732.230000"); // 1
    Quot_1_set.insert("16962732.230000");
    Quot_1.add_attribute("OrdQty", "13951952.790000"); // 1
    Quot_1_set.insert("13951952.790000");
    Quot_1.add_attribute("SwapTyp", "1"); // 1
    Quot_1_set.insert("1");
    Quot_1.add_attribute("SettlTyp", "5"); // 1
    Quot_1_set.insert("5");
    Quot_1.add_attribute("SettlDt", "LegSettlDate_t_1111623408"); // 1
    Quot_1_set.insert("LegSettlDate_t_1111623408");
    Quot_1.add_attribute("PxTyp", "14"); // 1
    Quot_1_set.insert("14");
    Quot_1.add_attribute("BidPx", "16328238.470000"); // 1
    Quot_1_set.insert("16328238.470000");
    Quot_1.add_attribute("OfrPx", "21383823.280000"); // 1
    Quot_1_set.insert("21383823.280000");
    Quot_1.add_attribute("RefID", "LegRefID_t_816449927"); // 1
    Quot_1_set.insert("LegRefID_t_816449927");
    Quot_1.add_attribute("LegBidFwdPnts", "17183005.190000"); // 1
    Quot_1_set.insert("17183005.190000");
    Quot_1.add_attribute("LegOfrFwdPnts", "11476058.310000"); // 1
    Quot_1_set.insert("11476058.310000");
    all_values.push_back(Quot_1_set);
    all_compo_names.insert("Quot_1_set");

    {
      xml_element Leg_81{"Leg"};
      multiset<string> Leg_81_set;
      Leg_81.add_attribute("Sym", "LegSymbol_t_1097823288"); // 2
      Leg_81_set.insert("LegSymbol_t_1097823288");
      Leg_81.add_attribute("Sfx", "WI"); // 2
      Leg_81_set.insert("WI");
      Leg_81.add_attribute("ID", "LegSecurityID_t_1024711077"); // 2
      Leg_81_set.insert("LegSecurityID_t_1024711077");
      Leg_81.add_attribute("Src", "K"); // 2
      Leg_81_set.insert("K");
      Leg_81.add_attribute("Prod", "9"); // 2
      Leg_81_set.insert("9");
      Leg_81.add_attribute("CFI", "LegCFICode_t_848008695"); // 2
      Leg_81_set.insert("LegCFICode_t_848008695");
      Leg_81.add_attribute("SecTyp", "REV"); // 2
      Leg_81_set.insert("REV");
      Leg_81.add_attribute("SecSubTyp", "LegSecuritySubType_t_1871513835"); // 2
      Leg_81_set.insert("LegSecuritySubType_t_1871513835");
      Leg_81.add_attribute("MMY", "892005455"); // 2
      Leg_81_set.insert("892005455");
      Leg_81.add_attribute("Mat", "LegMaturityDate_t_1406019580"); // 2
      Leg_81_set.insert("LegMaturityDate_t_1406019580");
      Leg_81.add_attribute("MatTm", "1883229501"); // 2
      Leg_81_set.insert("1883229501");
      Leg_81.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1458378480"); // 2
      Leg_81_set.insert("LegCouponPaymentDate_t_1458378480");
      Leg_81.add_attribute("Issued", "LegIssueDate_t_1516571615"); // 2
      Leg_81_set.insert("LegIssueDate_t_1516571615");
      Leg_81.add_attribute("RepoCollSecTyp", "2057446503"); // 2
      Leg_81_set.insert("2057446503");
      Leg_81.add_attribute("RepoTrm", "1548961428"); // 2
      Leg_81_set.insert("1548961428");
      Leg_81.add_attribute("RepoRt", "15800840.600000"); // 2
      Leg_81_set.insert("15800840.600000");
      Leg_81.add_attribute("Fctr", "7445665.240000"); // 2
      Leg_81_set.insert("7445665.240000");
      Leg_81.add_attribute("CrdRtg", "LegCreditRating_t_555633401"); // 2
      Leg_81_set.insert("LegCreditRating_t_555633401");
      Leg_81.add_attribute("Rgstry", "LegInstrRegistry_t_285984948"); // 2
      Leg_81_set.insert("LegInstrRegistry_t_285984948");
      Leg_81.add_attribute("Ctry", "1838483278"); // 2
      Leg_81_set.insert("1838483278");
      Leg_81.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_104422976"); // 2
      Leg_81_set.insert("LegStateOrProvinceOfIssue_t_104422976");
      Leg_81.add_attribute("Lcl", "LegLocaleOfIssue_t_1681180227"); // 2
      Leg_81_set.insert("LegLocaleOfIssue_t_1681180227");
      Leg_81.add_attribute("Redeem", "LegRedemptionDate_t_1511952374"); // 2
      Leg_81_set.insert("LegRedemptionDate_t_1511952374");
      Leg_81.add_attribute("Strk", "1005883.610000"); // 2
      Leg_81_set.insert("1005883.610000");
      Leg_81.add_attribute("StrkCcy", "GBP"); // 2
      Leg_81_set.insert("GBP");
      Leg_81.add_attribute("OptA", "1733412208"); // 2
      Leg_81_set.insert("1733412208");
      Leg_81.add_attribute("Cmult", "6362186.670000"); // 2
      Leg_81_set.insert("6362186.670000");
      Leg_81.add_attribute("MultTyp", "2"); // 2
      Leg_81_set.insert("2");
      Leg_81.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_81_set.insert("4");
      Leg_81.add_attribute("UOM", "MMBtu"); // 2
      Leg_81_set.insert("MMBtu");
      Leg_81.add_attribute("UOMQty", "16327332.840000"); // 2
      Leg_81_set.insert("16327332.840000");
      Leg_81.add_attribute("PxUOM", "lbs"); // 2
      Leg_81_set.insert("lbs");
      Leg_81.add_attribute("PxUOMQty", "6610519.270000"); // 2
      Leg_81_set.insert("6610519.270000");
      Leg_81.add_attribute("TmUnit", "Yr"); // 2
      Leg_81_set.insert("Yr");
      Leg_81.add_attribute("ExerStyle", "1"); // 2
      Leg_81_set.insert("1");
      Leg_81.add_attribute("CpnRt", "15090606.220000"); // 2
      Leg_81_set.insert("15090606.220000");
      Leg_81.add_attribute("Exch", "LegSecurityExchange_t_2091187981"); // 2
      Leg_81_set.insert("LegSecurityExchange_t_2091187981");
      Leg_81.add_attribute("Issr", "LegIssuer_t_154807634"); // 2
      Leg_81_set.insert("LegIssuer_t_154807634");
      Leg_81.add_attribute("EncLegIssrLen", "253582430"); // 2
      Leg_81_set.insert("253582430");
      Leg_81.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1349723913"); // 2
      Leg_81_set.insert("EncodedLegIssuer_t_1349723913");
      Leg_81.add_attribute("Desc", "LegSecurityDesc_t_2038037135"); // 2
      Leg_81_set.insert("LegSecurityDesc_t_2038037135");
      Leg_81.add_attribute("EncLegSecDescLen", "1711960910"); // 2
      Leg_81_set.insert("1711960910");
      Leg_81.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_718811881"); // 2
      Leg_81_set.insert("EncodedLegSecurityDesc_t_718811881");
      Leg_81.add_attribute("RatioQty", "19479999.900000"); // 2
      Leg_81_set.insert("19479999.900000");
      Leg_81.add_attribute("Side", "3"); // 2
      Leg_81_set.insert("3");
      Leg_81.add_attribute("Ccy", "GBP"); // 2
      Leg_81_set.insert("GBP");
      Leg_81.add_attribute("Pool", "LegPool_t_1669072091"); // 2
      Leg_81_set.insert("LegPool_t_1669072091");
      Leg_81.add_attribute("Dated", "LegDatedDate_t_437397241"); // 2
      Leg_81_set.insert("LegDatedDate_t_437397241");
      Leg_81.add_attribute("CSetMo", "236082496"); // 2
      Leg_81_set.insert("236082496");
      Leg_81.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1773495067"); // 2
      Leg_81_set.insert("LegInterestAccrualDate_t_1773495067");
      Leg_81.add_attribute("PutCall", "2118577468"); // 2
      Leg_81_set.insert("2118577468");
      Leg_81.add_attribute("LegOptionRatio", "17480348.700000"); // 2
      Leg_81_set.insert("17480348.700000");
      Leg_81.add_attribute("Px", "18740834.280000"); // 2
      Leg_81_set.insert("18740834.280000");
      all_values.push_back(Leg_81_set);
      all_compo_names.insert("Leg_81_set");

      {
        xml_element LegAID_76{"LegAID"};
        multiset<string> LegAID_76_set;
        LegAID_76.add_attribute("SecAltID", "LegSecurityAltID_t_616413807"); // 3
        LegAID_76_set.insert("LegSecurityAltID_t_616413807");
        LegAID_76.add_attribute("SecAltIDSrc", "J"); // 3
        LegAID_76_set.insert("J");
        all_values.push_back(LegAID_76_set);
        all_compo_names.insert("LegAID_76_set");

        Leg_81.add_element(LegAID_76);
      }
      Quot_1.add_element(Leg_81);
    }
    {
      xml_element Stip_141{"Stip"};
      multiset<string> Stip_141_set;
      Stip_141.add_attribute("StipTyp", "AVAILQTY"); // 2
      Stip_141_set.insert("AVAILQTY");
      Stip_141.add_attribute("StipVal", "LegStipulationValue_t_1252632474"); // 2
      Stip_141_set.insert("LegStipulationValue_t_1252632474");
      all_values.push_back(Stip_141_set);
      all_compo_names.insert("Stip_141_set");

      Quot_1.add_element(Stip_141);
    }
    {
      xml_element Pty_364{"Pty"};
      multiset<string> Pty_364_set;
      Pty_364.add_attribute("ID", "NestedPartyID_t_2001404934"); // 2
      Pty_364_set.insert("NestedPartyID_t_2001404934");
      Pty_364.add_attribute("Src", "2"); // 2
      Pty_364_set.insert("2");
      Pty_364.add_attribute("R", "66"); // 2
      Pty_364_set.insert("66");
      all_values.push_back(Pty_364_set);
      all_compo_names.insert("Pty_364_set");

      {
        xml_element Sub_364{"Sub"};
        multiset<string> Sub_364_set;
        Sub_364.add_attribute("ID", "NestedPartySubID_t_1486654570"); // 3
        Sub_364_set.insert("NestedPartySubID_t_1486654570");
        Sub_364.add_attribute("Typ", "26"); // 3
        Sub_364_set.insert("26");
        all_values.push_back(Sub_364_set);
        all_compo_names.insert("Sub_364_set");

        Pty_364.add_element(Sub_364);
      }
      Quot_1.add_element(Pty_364);
    }
    {
      xml_element BnchmkCurve_6{"BnchmkCurve"};
      multiset<string> BnchmkCurve_6_set;
      BnchmkCurve_6.add_attribute("Ccy", "JPY"); // 2
      BnchmkCurve_6_set.insert("JPY");
      BnchmkCurve_6.add_attribute("Name", "EUREPO"); // 2
      BnchmkCurve_6_set.insert("EUREPO");
      BnchmkCurve_6.add_attribute("Point", "LegBenchmarkCurvePoint_t_911602226"); // 2
      BnchmkCurve_6_set.insert("LegBenchmarkCurvePoint_t_911602226");
      BnchmkCurve_6.add_attribute("Px", "19388528.250000"); // 2
      BnchmkCurve_6_set.insert("19388528.250000");
      BnchmkCurve_6.add_attribute("PxTyp", "1839659019"); // 2
      BnchmkCurve_6_set.insert("1839659019");
      all_values.push_back(BnchmkCurve_6_set);
      all_compo_names.insert("BnchmkCurve_6_set");

      Quot_1.add_element(BnchmkCurve_6);
    }
    elt.add_element(Quot_1);
  } // end Quot
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_27{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_27_set;
    SprdBnchmkCurve_27.add_attribute("Spread", "11651846.560000"); // 1
    SprdBnchmkCurve_27_set.insert("11651846.560000");
    SprdBnchmkCurve_27.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_27_set.insert("EUR");
    SprdBnchmkCurve_27.add_attribute("Name", "SWAP"); // 1
    SprdBnchmkCurve_27_set.insert("SWAP");
    SprdBnchmkCurve_27.add_attribute("Point", "BenchmarkCurvePoint_t_1859904972"); // 1
    SprdBnchmkCurve_27_set.insert("BenchmarkCurvePoint_t_1859904972");
    SprdBnchmkCurve_27.add_attribute("Px", "15307288.490000"); // 1
    SprdBnchmkCurve_27_set.insert("15307288.490000");
    SprdBnchmkCurve_27.add_attribute("PxTyp", "4"); // 1
    SprdBnchmkCurve_27_set.insert("4");
    SprdBnchmkCurve_27.add_attribute("SecID", "BenchmarkSecurityID_t_2011317265"); // 1
    SprdBnchmkCurve_27_set.insert("BenchmarkSecurityID_t_2011317265");
    SprdBnchmkCurve_27.add_attribute("SecIDSrc", "1"); // 1
    SprdBnchmkCurve_27_set.insert("1");
    all_values.push_back(SprdBnchmkCurve_27_set);
    all_compo_names.insert("SprdBnchmkCurve_27_set");

    elt.add_element(SprdBnchmkCurve_27);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_22{"Yield"};
    multiset<string> Yield_22_set;
    Yield_22.add_attribute("Typ", "GOVTEQUIV"); // 1
    Yield_22_set.insert("GOVTEQUIV");
    Yield_22.add_attribute("Yld", "3012308.590000"); // 1
    Yield_22_set.insert("3012308.590000");
    Yield_22.add_attribute("CalcDt", "YieldCalcDate_t_164410564"); // 1
    Yield_22_set.insert("YieldCalcDate_t_164410564");
    Yield_22.add_attribute("RedDt", "YieldRedemptionDate_t_990700472"); // 1
    Yield_22_set.insert("YieldRedemptionDate_t_990700472");
    Yield_22.add_attribute("RedPx", "2723246.790000"); // 1
    Yield_22_set.insert("2723246.790000");
    Yield_22.add_attribute("RedPxTyp", "13"); // 1
    Yield_22_set.insert("13");
    all_values.push_back(Yield_22_set);
    all_compo_names.insert("Yield_22_set");

    elt.add_element(Yield_22);
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
