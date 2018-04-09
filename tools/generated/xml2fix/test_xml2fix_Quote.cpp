#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Quote.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Quote_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Quot" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Quote_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_582050106"); // 0
  Quote_message_t_0.insert("QuoteReqID_t_582050106");
  elt.add_attribute("QID", "QuoteID_t_1606786304"); // 0
  Quote_message_t_0.insert("QuoteID_t_1606786304");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1625724350"); // 0
  Quote_message_t_0.insert("QuoteMsgID_t_1625724350");
  elt.add_attribute("RspID", "QuoteRespID_t_1911787816"); // 0
  Quote_message_t_0.insert("QuoteRespID_t_1911787816");
  elt.add_attribute("Typ", "3"); // 0
  Quote_message_t_0.insert("3");
  elt.add_attribute("PrvtQt", "true"); // 0
  Quote_message_t_0.insert("true");
  elt.add_attribute("RspLvl", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("SesID", "4"); // 0
  Quote_message_t_0.insert("4");
  elt.add_attribute("SesSub", "6"); // 0
  Quote_message_t_0.insert("6");
  elt.add_attribute("Side", "A"); // 0
  Quote_message_t_0.insert("A");
  elt.add_attribute("SettlTyp", "C"); // 0
  Quote_message_t_0.insert("C");
  elt.add_attribute("SettlDt", "SettlDate_t_1175520353"); // 0
  Quote_message_t_0.insert("SettlDate_t_1175520353");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1873201875"); // 0
  Quote_message_t_0.insert("SettlDate2_t_1873201875");
  elt.add_attribute("Qty2", "3169008.980000"); // 0
  Quote_message_t_0.insert("3169008.980000");
  elt.add_attribute("Ccy", "CHF"); // 0
  Quote_message_t_0.insert("CHF");
  elt.add_attribute("SettlCcy", "EUR"); // 0
  Quote_message_t_0.insert("EUR");
  elt.add_attribute("Acct", "Account_t_3166447"); // 0
  Quote_message_t_0.insert("Account_t_3166447");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  Quote_message_t_0.insert("5");
  elt.add_attribute("AcctTyp", "2"); // 0
  Quote_message_t_0.insert("2");
  elt.add_attribute("BidPx", "2327832.770000"); // 0
  Quote_message_t_0.insert("2327832.770000");
  elt.add_attribute("OfrPx", "14643178.210000"); // 0
  Quote_message_t_0.insert("14643178.210000");
  elt.add_attribute("MktBidPx", "7737260.120000"); // 0
  Quote_message_t_0.insert("7737260.120000");
  elt.add_attribute("MktOfrPx", "19924096.110000"); // 0
  Quote_message_t_0.insert("19924096.110000");
  elt.add_attribute("MinBidSz", "4569361.930000"); // 0
  Quote_message_t_0.insert("4569361.930000");
  elt.add_attribute("BidSz", "17038731.950000"); // 0
  Quote_message_t_0.insert("17038731.950000");
  elt.add_attribute("MinOfrSz", "10005016.080000"); // 0
  Quote_message_t_0.insert("10005016.080000");
  elt.add_attribute("OfrSz", "2128399.010000"); // 0
  Quote_message_t_0.insert("2128399.010000");
  elt.add_attribute("MinQty", "5667224.110000"); // 0
  Quote_message_t_0.insert("5667224.110000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_548671991"); // 0
  Quote_message_t_0.insert("ValidUntilTime_t_548671991");
  elt.add_attribute("BidSpotRt", "7948900.070000"); // 0
  Quote_message_t_0.insert("7948900.070000");
  elt.add_attribute("OfrSpotRt", "260250.670000"); // 0
  Quote_message_t_0.insert("260250.670000");
  elt.add_attribute("BidFwdPnts", "269126.930000"); // 0
  Quote_message_t_0.insert("269126.930000");
  elt.add_attribute("OfrFwdPnts", "5591941.760000"); // 0
  Quote_message_t_0.insert("5591941.760000");
  elt.add_attribute("BidSwapPnts", "12838948.350000"); // 0
  Quote_message_t_0.insert("12838948.350000");
  elt.add_attribute("OfrSwapPnts", "19047664.520000"); // 0
  Quote_message_t_0.insert("19047664.520000");
  elt.add_attribute("MidPx", "14581081.490000"); // 0
  Quote_message_t_0.insert("14581081.490000");
  elt.add_attribute("BidYld", "16134524.520000"); // 0
  Quote_message_t_0.insert("16134524.520000");
  elt.add_attribute("MidYld", "6898243.980000"); // 0
  Quote_message_t_0.insert("6898243.980000");
  elt.add_attribute("OfrYld", "17025896.940000"); // 0
  Quote_message_t_0.insert("17025896.940000");
  elt.add_attribute("TxnTm", "TransactTime_t_1711403590"); // 0
  Quote_message_t_0.insert("TransactTime_t_1711403590");
  elt.add_attribute("OrdTyp", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("BidFwdPnts2", "14283079.220000"); // 0
  Quote_message_t_0.insert("14283079.220000");
  elt.add_attribute("OfrFwdPnts2", "20283044.880000"); // 0
  Quote_message_t_0.insert("20283044.880000");
  elt.add_attribute("SettlCurrBidFxRt", "18860175.010000"); // 0
  Quote_message_t_0.insert("18860175.010000");
  elt.add_attribute("SettlCurrOfrFxRt", "13149593.010000"); // 0
  Quote_message_t_0.insert("13149593.010000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  Quote_message_t_0.insert("D");
  elt.add_attribute("CommTyp", "3"); // 0
  Quote_message_t_0.insert("3");
  elt.add_attribute("Comm", "Commission_t_1318125748"); // 0
  Quote_message_t_0.insert("Commission_t_1318125748");
  elt.add_attribute("CustCpcty", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("ExDest", "ExDestination_t_1793249285"); // 0
  Quote_message_t_0.insert("ExDestination_t_1793249285");
  elt.add_attribute("ExDestIDSrc", "C"); // 0
  Quote_message_t_0.insert("C");
  elt.add_attribute("BkngTyp", "2"); // 0
  Quote_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "A"); // 0
  Quote_message_t_0.insert("A");
  elt.add_attribute("Rstctions", "F"); // 0
  Quote_message_t_0.insert("F");
  elt.add_attribute("PxTyp", "4"); // 0
  Quote_message_t_0.insert("4");
  elt.add_attribute("Txt", "Text_t_2123364845"); // 0
  Quote_message_t_0.insert("Text_t_2123364845");
  elt.add_attribute("EncTxtLen", "248852950"); // 0
  Quote_message_t_0.insert("248852950");
  elt.add_attribute("EncTxt", "EncodedText_t_427877788"); // 0
  Quote_message_t_0.insert("EncodedText_t_427877788");
  all_values.push_back(Quote_message_t_0);
  all_compo_names.insert("Quote_message_t");

  { // Hdr
    xml_element Hdr_68{"Hdr"};
    multiset<string> Hdr_68_set;
    Hdr_68.add_attribute("SeqNum", "542603608"); // 1
    Hdr_68_set.insert("542603608");
    Hdr_68.add_attribute("SID", "SenderCompID_t_797524941"); // 1
    Hdr_68_set.insert("SenderCompID_t_797524941");
    Hdr_68.add_attribute("TID", "TargetCompID_t_1222767795"); // 1
    Hdr_68_set.insert("TargetCompID_t_1222767795");
    Hdr_68.add_attribute("OBID", "OnBehalfOfCompID_t_568628676"); // 1
    Hdr_68_set.insert("OnBehalfOfCompID_t_568628676");
    Hdr_68.add_attribute("D2ID", "DeliverToCompID_t_824437634"); // 1
    Hdr_68_set.insert("DeliverToCompID_t_824437634");
    Hdr_68.add_attribute("SSub", "SenderSubID_t_1781961971"); // 1
    Hdr_68_set.insert("SenderSubID_t_1781961971");
    Hdr_68.add_attribute("SLoc", "SenderLocationID_t_1852523511"); // 1
    Hdr_68_set.insert("SenderLocationID_t_1852523511");
    Hdr_68.add_attribute("TSub", "TargetSubID_t_581720438"); // 1
    Hdr_68_set.insert("TargetSubID_t_581720438");
    Hdr_68.add_attribute("TLoc", "TargetLocationID_t_1092586473"); // 1
    Hdr_68_set.insert("TargetLocationID_t_1092586473");
    Hdr_68.add_attribute("OBSub", "OnBehalfOfSubID_t_1318492315"); // 1
    Hdr_68_set.insert("OnBehalfOfSubID_t_1318492315");
    Hdr_68.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1271544837"); // 1
    Hdr_68_set.insert("OnBehalfOfLocationID_t_1271544837");
    Hdr_68.add_attribute("D2Sub", "DeliverToSubID_t_647692519"); // 1
    Hdr_68_set.insert("DeliverToSubID_t_647692519");
    Hdr_68.add_attribute("D2Loc", "DeliverToLocationID_t_882412257"); // 1
    Hdr_68_set.insert("DeliverToLocationID_t_882412257");
    Hdr_68.add_attribute("PosDup", "Y"); // 1
    Hdr_68_set.insert("Y");
    Hdr_68.add_attribute("PosRsnd", "Y"); // 1
    Hdr_68_set.insert("Y");
    Hdr_68.add_attribute("Snt", "SendingTime_t_763233097"); // 1
    Hdr_68_set.insert("SendingTime_t_763233097");
    Hdr_68.add_attribute("OrigSnt", "OrigSendingTime_t_727939794"); // 1
    Hdr_68_set.insert("OrigSendingTime_t_727939794");
    Hdr_68.add_attribute("MsgEncd", "MessageEncoding_t_1243476095"); // 1
    Hdr_68_set.insert("MessageEncoding_t_1243476095");
    all_values.push_back(Hdr_68_set);
    all_compo_names.insert("Hdr_68_set");

    {
      xml_element Hop_68{"Hop"};
      multiset<string> Hop_68_set;
      Hop_68.add_attribute("ID", "HopCompID_t_1614915056"); // 2
      Hop_68_set.insert("HopCompID_t_1614915056");
      Hop_68.add_attribute("Ref", "720510367"); // 2
      Hop_68_set.insert("720510367");
      Hop_68.add_attribute("Snt", "HopSendingTime_t_414118195"); // 2
      Hop_68_set.insert("HopSendingTime_t_414118195");
      all_values.push_back(Hop_68_set);
      all_compo_names.insert("Hop_68_set");

      Hdr_68.add_element(Hop_68);
    }
    elt.add_element(Hdr_68);
  } // end Hdr
  { // QuotQual
    xml_element QuotQual_0{"QuotQual"};
    multiset<string> QuotQual_0_set;
    QuotQual_0.add_attribute("Qual", "Y"); // 1
    QuotQual_0_set.insert("Y");
    all_values.push_back(QuotQual_0_set);
    all_compo_names.insert("QuotQual_0_set");

    elt.add_element(QuotQual_0);
  } // end QuotQual
  { // Pty
    xml_element Pty_295{"Pty"};
    multiset<string> Pty_295_set;
    Pty_295.add_attribute("ID", "PartyID_t_1814284270"); // 1
    Pty_295_set.insert("PartyID_t_1814284270");
    Pty_295.add_attribute("Src", "B"); // 1
    Pty_295_set.insert("B");
    Pty_295.add_attribute("R", "77"); // 1
    Pty_295_set.insert("77");
    all_values.push_back(Pty_295_set);
    all_compo_names.insert("Pty_295_set");

    {
      xml_element Sub_295{"Sub"};
      multiset<string> Sub_295_set;
      Sub_295.add_attribute("ID", "PartySubID_t_2029322157"); // 2
      Sub_295_set.insert("PartySubID_t_2029322157");
      Sub_295.add_attribute("Typ", "16"); // 2
      Sub_295_set.insert("16");
      all_values.push_back(Sub_295_set);
      all_compo_names.insert("Sub_295_set");

      Pty_295.add_element(Sub_295);
    }
    elt.add_element(Pty_295);
  } // end Pty
  { // Pty
    xml_element Pty_296{"Pty"};
    multiset<string> Pty_296_set;
    Pty_296.add_attribute("ID", "PartyID_t_1462231513"); // 1
    Pty_296_set.insert("PartyID_t_1462231513");
    Pty_296.add_attribute("Src", "I"); // 1
    Pty_296_set.insert("I");
    Pty_296.add_attribute("R", "1"); // 1
    Pty_296_set.insert("1");
    all_values.push_back(Pty_296_set);
    all_compo_names.insert("Pty_296_set");

    {
      xml_element Sub_296{"Sub"};
      multiset<string> Sub_296_set;
      Sub_296.add_attribute("ID", "PartySubID_t_112272806"); // 2
      Sub_296_set.insert("PartySubID_t_112272806");
      Sub_296.add_attribute("Typ", "30"); // 2
      Sub_296_set.insert("30");
      all_values.push_back(Sub_296_set);
      all_compo_names.insert("Sub_296_set");

      Pty_296.add_element(Sub_296);
    }
    elt.add_element(Pty_296);
  } // end Pty
  { // Pty
    xml_element Pty_297{"Pty"};
    multiset<string> Pty_297_set;
    Pty_297.add_attribute("ID", "PartyID_t_1872881136"); // 1
    Pty_297_set.insert("PartyID_t_1872881136");
    Pty_297.add_attribute("Src", "H"); // 1
    Pty_297_set.insert("H");
    Pty_297.add_attribute("R", "62"); // 1
    Pty_297_set.insert("62");
    all_values.push_back(Pty_297_set);
    all_compo_names.insert("Pty_297_set");

    {
      xml_element Sub_297{"Sub"};
      multiset<string> Sub_297_set;
      Sub_297.add_attribute("ID", "PartySubID_t_1577920999"); // 2
      Sub_297_set.insert("PartySubID_t_1577920999");
      Sub_297.add_attribute("Typ", "32"); // 2
      Sub_297_set.insert("32");
      all_values.push_back(Sub_297_set);
      all_compo_names.insert("Sub_297_set");

      Pty_297.add_element(Sub_297);
    }
    elt.add_element(Pty_297);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_56{"Instrmt"};
    multiset<string> Instrmt_56_set;
    Instrmt_56.add_attribute("Sym", "Symbol_t_112065241"); // 1
    Instrmt_56_set.insert("Symbol_t_112065241");
    Instrmt_56.add_attribute("Sfx", "CD"); // 1
    Instrmt_56_set.insert("CD");
    Instrmt_56.add_attribute("ID", "SecurityID_t_642492068"); // 1
    Instrmt_56_set.insert("SecurityID_t_642492068");
    Instrmt_56.add_attribute("Src", "F"); // 1
    Instrmt_56_set.insert("F");
    Instrmt_56.add_attribute("Prod", "12"); // 1
    Instrmt_56_set.insert("12");
    Instrmt_56.add_attribute("ProdCmplx", "ProductComplex_t_1631898009"); // 1
    Instrmt_56_set.insert("ProductComplex_t_1631898009");
    Instrmt_56.add_attribute("SecGrp", "SecurityGroup_t_688274554"); // 1
    Instrmt_56_set.insert("SecurityGroup_t_688274554");
    Instrmt_56.add_attribute("CFI", "CFICode_t_247091372"); // 1
    Instrmt_56_set.insert("CFICode_t_247091372");
    Instrmt_56.add_attribute("SecTyp", "REPLACD"); // 1
    Instrmt_56_set.insert("REPLACD");
    Instrmt_56.add_attribute("SubTyp", "SecuritySubType_t_1931750649"); // 1
    Instrmt_56_set.insert("SecuritySubType_t_1931750649");
    Instrmt_56.add_attribute("MMY", "1862006428"); // 1
    Instrmt_56_set.insert("1862006428");
    Instrmt_56.add_attribute("MatDt", "MaturityDate_t_932864522"); // 1
    Instrmt_56_set.insert("MaturityDate_t_932864522");
    Instrmt_56.add_attribute("MatTm", "198385196"); // 1
    Instrmt_56_set.insert("198385196");
    Instrmt_56.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1770705357"); // 1
    Instrmt_56_set.insert("SettleOnOpenFlag_t_1770705357");
    Instrmt_56.add_attribute("AsgnMeth", "1299140527"); // 1
    Instrmt_56_set.insert("1299140527");
    Instrmt_56.add_attribute("Status", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("CpnPmt", "CouponPaymentDate_t_1437505979"); // 1
    Instrmt_56_set.insert("CouponPaymentDate_t_1437505979");
    Instrmt_56.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_56_set.insert("MR");
    Instrmt_56.add_attribute("Snrty", "SD"); // 1
    Instrmt_56_set.insert("SD");
    Instrmt_56.add_attribute("NotlPctOut", "13193444.880000"); // 1
    Instrmt_56_set.insert("13193444.880000");
    Instrmt_56.add_attribute("OrigNotlPctOut", "6990733.850000"); // 1
    Instrmt_56_set.insert("6990733.850000");
    Instrmt_56.add_attribute("AttchPnt", "5440551.980000"); // 1
    Instrmt_56_set.insert("5440551.980000");
    Instrmt_56.add_attribute("DetchPnt", "16290607.850000"); // 1
    Instrmt_56_set.insert("16290607.850000");
    Instrmt_56.add_attribute("Issued", "IssueDate_t_2003325845"); // 1
    Instrmt_56_set.insert("IssueDate_t_2003325845");
    Instrmt_56.add_attribute("RepoCollSecTyp", "656328004"); // 1
    Instrmt_56_set.insert("656328004");
    Instrmt_56.add_attribute("RepoTrm", "1014061229"); // 1
    Instrmt_56_set.insert("1014061229");
    Instrmt_56.add_attribute("RepoRt", "17287233.330000"); // 1
    Instrmt_56_set.insert("17287233.330000");
    Instrmt_56.add_attribute("Fctr", "15930384.440000"); // 1
    Instrmt_56_set.insert("15930384.440000");
    Instrmt_56.add_attribute("CrdRtg", "CreditRating_t_33539997"); // 1
    Instrmt_56_set.insert("CreditRating_t_33539997");
    Instrmt_56.add_attribute("Rgstry", "InstrRegistry_t_1159160684"); // 1
    Instrmt_56_set.insert("InstrRegistry_t_1159160684");
    Instrmt_56.add_attribute("IssuCtry", "963985675"); // 1
    Instrmt_56_set.insert("963985675");
    Instrmt_56.add_attribute("StPrv", "StateOrProvinceOfIssue_t_145605238"); // 1
    Instrmt_56_set.insert("StateOrProvinceOfIssue_t_145605238");
    Instrmt_56.add_attribute("Lcl", "LocaleOfIssue_t_1908090350"); // 1
    Instrmt_56_set.insert("LocaleOfIssue_t_1908090350");
    Instrmt_56.add_attribute("Redeem", "RedemptionDate_t_1606477743"); // 1
    Instrmt_56_set.insert("RedemptionDate_t_1606477743");
    Instrmt_56.add_attribute("StrkPx", "9053629.990000"); // 1
    Instrmt_56_set.insert("9053629.990000");
    Instrmt_56.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_56_set.insert("JPY");
    Instrmt_56.add_attribute("StrkMult", "15936375.530000"); // 1
    Instrmt_56_set.insert("15936375.530000");
    Instrmt_56.add_attribute("StrkValu", "16390399.970000"); // 1
    Instrmt_56_set.insert("16390399.970000");
    Instrmt_56.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_56_set.insert("5");
    Instrmt_56.add_attribute("StrkPxBndryPrcsn", "13535627.770000"); // 1
    Instrmt_56_set.insert("13535627.770000");
    Instrmt_56.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_56_set.insert("3");
    Instrmt_56.add_attribute("OptAt", "1576289750"); // 1
    Instrmt_56_set.insert("1576289750");
    Instrmt_56.add_attribute("Mult", "9767844.860000"); // 1
    Instrmt_56_set.insert("9767844.860000");
    Instrmt_56.add_attribute("MultTyp", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_56_set.insert("0");
    Instrmt_56.add_attribute("MinPxIncr", "2668068.170000"); // 1
    Instrmt_56_set.insert("2668068.170000");
    Instrmt_56.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1325192195"); // 1
    Instrmt_56_set.insert("MinPriceIncrementAmount_t_1325192195");
    Instrmt_56.add_attribute("UOM", "tn"); // 1
    Instrmt_56_set.insert("tn");
    Instrmt_56.add_attribute("UOMQty", "15861513.050000"); // 1
    Instrmt_56_set.insert("15861513.050000");
    Instrmt_56.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_56_set.insert("Alw");
    Instrmt_56.add_attribute("PxUOMQty", "12180974.030000"); // 1
    Instrmt_56_set.insert("12180974.030000");
    Instrmt_56.add_attribute("SettlMeth", "C"); // 1
    Instrmt_56_set.insert("C");
    Instrmt_56.add_attribute("ExerStyle", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("OptPayAmt", "OptPayoutAmount_t_2081789672"); // 1
    Instrmt_56_set.insert("OptPayoutAmount_t_2081789672");
    Instrmt_56.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_56_set.insert("INT");
    Instrmt_56.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_56_set.insert("CDSD");
    Instrmt_56.add_attribute("ListMeth", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("CapPx", "4730244.980000"); // 1
    Instrmt_56_set.insert("4730244.980000");
    Instrmt_56.add_attribute("FlrPx", "1364822.310000"); // 1
    Instrmt_56_set.insert("1364822.310000");
    Instrmt_56.add_attribute("PutCall", "0"); // 1
    Instrmt_56_set.insert("0");
    Instrmt_56.add_attribute("FlexInd", "true"); // 1
    Instrmt_56_set.insert("true");
    Instrmt_56.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_56_set.insert("false");
    Instrmt_56.add_attribute("TmUnit", "Min"); // 1
    Instrmt_56_set.insert("Min");
    Instrmt_56.add_attribute("CpnRt", "16255798.250000"); // 1
    Instrmt_56_set.insert("16255798.250000");
    Instrmt_56.add_attribute("Exch", "SecurityExchange_t_686368431"); // 1
    Instrmt_56_set.insert("SecurityExchange_t_686368431");
    Instrmt_56.add_attribute("PosLmt", "464968164"); // 1
    Instrmt_56_set.insert("464968164");
    Instrmt_56.add_attribute("NTPosLmt", "1117136174"); // 1
    Instrmt_56_set.insert("1117136174");
    Instrmt_56.add_attribute("Issr", "Issuer_t_1989614691"); // 1
    Instrmt_56_set.insert("Issuer_t_1989614691");
    Instrmt_56.add_attribute("EncIssrLen", "1842872718"); // 1
    Instrmt_56_set.insert("1842872718");
    Instrmt_56.add_attribute("EncIssr", "EncodedIssuer_t_323215303"); // 1
    Instrmt_56_set.insert("EncodedIssuer_t_323215303");
    Instrmt_56.add_attribute("Desc", "SecurityDesc_t_2078241826"); // 1
    Instrmt_56_set.insert("SecurityDesc_t_2078241826");
    Instrmt_56.add_attribute("EncSecDescLen", "1271678820"); // 1
    Instrmt_56_set.insert("1271678820");
    Instrmt_56.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1299999790"); // 1
    Instrmt_56_set.insert("EncodedSecurityDesc_t_1299999790");
    Instrmt_56.add_attribute("Pool", "Pool_t_1318525839"); // 1
    Instrmt_56_set.insert("Pool_t_1318525839");
    Instrmt_56.add_attribute("CSetMo", "716413693"); // 1
    Instrmt_56_set.insert("716413693");
    Instrmt_56.add_attribute("CPPgm", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("CPRegT", "CPRegType_t_496234386"); // 1
    Instrmt_56_set.insert("CPRegType_t_496234386");
    Instrmt_56.add_attribute("Dated", "DatedDate_t_1390455898"); // 1
    Instrmt_56_set.insert("DatedDate_t_1390455898");
    Instrmt_56.add_attribute("IntAcrl", "InterestAccrualDate_t_1005474265"); // 1
    Instrmt_56_set.insert("InterestAccrualDate_t_1005474265");
    all_values.push_back(Instrmt_56_set);
    all_compo_names.insert("Instrmt_56_set");

    {
      xml_element AID_59{"AID"};
      multiset<string> AID_59_set;
      AID_59.add_attribute("AltID", "SecurityAltID_t_373016318"); // 2
      AID_59_set.insert("SecurityAltID_t_373016318");
      AID_59.add_attribute("AltIDSrc", "D"); // 2
      AID_59_set.insert("D");
      all_values.push_back(AID_59_set);
      all_compo_names.insert("AID_59_set");

      Instrmt_56.add_element(AID_59);
    }
    {
      xml_element SecXML_59{"SecXML"};
      multiset<string> SecXML_59_set;
      SecXML_59.add_attribute("Schema", "SecurityXMLSchema_t_2073202707"); // 2
      SecXML_59_set.insert("SecurityXMLSchema_t_2073202707");
      all_values.push_back(SecXML_59_set);
      all_compo_names.insert("SecXML_59_set");

      Instrmt_56.add_element(SecXML_59);
    }
    {
      xml_element Evnt_59{"Evnt"};
      multiset<string> Evnt_59_set;
      Evnt_59.add_attribute("EventTyp", "7"); // 2
      Evnt_59_set.insert("7");
      Evnt_59.add_attribute("Dt", "EventDate_t_188011413"); // 2
      Evnt_59_set.insert("EventDate_t_188011413");
      Evnt_59.add_attribute("Tm", "EventTime_t_2007508731"); // 2
      Evnt_59_set.insert("EventTime_t_2007508731");
      Evnt_59.add_attribute("Px", "15669879.090000"); // 2
      Evnt_59_set.insert("15669879.090000");
      Evnt_59.add_attribute("Txt", "EventText_t_1507991617"); // 2
      Evnt_59_set.insert("EventText_t_1507991617");
      all_values.push_back(Evnt_59_set);
      all_compo_names.insert("Evnt_59_set");

      Instrmt_56.add_element(Evnt_59);
    }
    {
      xml_element Pty_298{"Pty"};
      multiset<string> Pty_298_set;
      Pty_298.add_attribute("ID", "InstrumentPartyID_t_1975354753"); // 2
      Pty_298_set.insert("InstrumentPartyID_t_1975354753");
      Pty_298.add_attribute("Src", "C"); // 2
      Pty_298_set.insert("C");
      Pty_298.add_attribute("R", "56"); // 2
      Pty_298_set.insert("56");
      all_values.push_back(Pty_298_set);
      all_compo_names.insert("Pty_298_set");

      {
        xml_element Sub_298{"Sub"};
        multiset<string> Sub_298_set;
        Sub_298.add_attribute("ID", "InstrumentPartySubID_t_2088806013"); // 3
        Sub_298_set.insert("InstrumentPartySubID_t_2088806013");
        Sub_298.add_attribute("Typ", "11"); // 3
        Sub_298_set.insert("11");
        all_values.push_back(Sub_298_set);
        all_compo_names.insert("Sub_298_set");

        Pty_298.add_element(Sub_298);
      }
      Instrmt_56.add_element(Pty_298);
    }
    {
      xml_element CmplxEvnt_56{"CmplxEvnt"};
      multiset<string> CmplxEvnt_56_set;
      CmplxEvnt_56.add_attribute("Typ", "8"); // 2
      CmplxEvnt_56_set.insert("8");
      CmplxEvnt_56.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_960136624"); // 2
      CmplxEvnt_56_set.insert("ComplexOptPayoutAmount_t_960136624");
      CmplxEvnt_56.add_attribute("Px", "17517397.840000"); // 2
      CmplxEvnt_56_set.insert("17517397.840000");
      CmplxEvnt_56.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_56_set.insert("3");
      CmplxEvnt_56.add_attribute("PxBndryPrcsn", "14251047.880000"); // 2
      CmplxEvnt_56_set.insert("14251047.880000");
      CmplxEvnt_56.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_56_set.insert("2");
      CmplxEvnt_56.add_attribute("Cond", "2"); // 2
      CmplxEvnt_56_set.insert("2");
      all_values.push_back(CmplxEvnt_56_set);
      all_compo_names.insert("CmplxEvnt_56_set");

      {
        xml_element EvntDts_56{"EvntDts"};
        multiset<string> EvntDts_56_set;
        EvntDts_56.add_attribute("StartDt", "ComplexEventStartDate_t_1120493858"); // 3
        EvntDts_56_set.insert("ComplexEventStartDate_t_1120493858");
        EvntDts_56.add_attribute("EndDt", "ComplexEventEndDate_t_1044607614"); // 3
        EvntDts_56_set.insert("ComplexEventEndDate_t_1044607614");
        all_values.push_back(EvntDts_56_set);
        all_compo_names.insert("EvntDts_56_set");

        {
          xml_element EvntTms_56{"EvntTms"};
          multiset<string> EvntTms_56_set;
          EvntTms_56.add_attribute("StartTm", "1699207829"); // 4
          EvntTms_56_set.insert("1699207829");
          EvntTms_56.add_attribute("EndTm", "244689030"); // 4
          EvntTms_56_set.insert("244689030");
          all_values.push_back(EvntTms_56_set);
          all_compo_names.insert("EvntTms_56_set");

          EvntDts_56.add_element(EvntTms_56);
        }
        CmplxEvnt_56.add_element(EvntDts_56);
      }
      Instrmt_56.add_element(CmplxEvnt_56);
    }
    elt.add_element(Instrmt_56);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_16{"FinDetls"};
    multiset<string> FinDetls_16_set;
    FinDetls_16.add_attribute("AgmtDesc", "AgreementDesc_t_197123756"); // 1
    FinDetls_16_set.insert("AgreementDesc_t_197123756");
    FinDetls_16.add_attribute("AgmtID", "AgreementID_t_870250020"); // 1
    FinDetls_16_set.insert("AgreementID_t_870250020");
    FinDetls_16.add_attribute("AgmtDt", "AgreementDate_t_961102723"); // 1
    FinDetls_16_set.insert("AgreementDate_t_961102723");
    FinDetls_16.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_16_set.insert("EUR");
    FinDetls_16.add_attribute("TrmTyp", "3"); // 1
    FinDetls_16_set.insert("3");
    FinDetls_16.add_attribute("StartDt", "StartDate_t_621920980"); // 1
    FinDetls_16_set.insert("StartDate_t_621920980");
    FinDetls_16.add_attribute("EndDt", "EndDate_t_1739500725"); // 1
    FinDetls_16_set.insert("EndDate_t_1739500725");
    FinDetls_16.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_16_set.insert("0");
    FinDetls_16.add_attribute("MgnRatio", "5476400.400000"); // 1
    FinDetls_16_set.insert("5476400.400000");
    all_values.push_back(FinDetls_16_set);
    all_compo_names.insert("FinDetls_16_set");

    elt.add_element(FinDetls_16);
  } // end FinDetls
  { // Undly
    xml_element Undly_79{"Undly"};
    multiset<string> Undly_79_set;
    Undly_79.add_attribute("Sym", "UnderlyingSymbol_t_853156041"); // 1
    Undly_79_set.insert("UnderlyingSymbol_t_853156041");
    Undly_79.add_attribute("Sfx", "WI"); // 1
    Undly_79_set.insert("WI");
    Undly_79.add_attribute("ID", "UnderlyingSecurityID_t_1264645434"); // 1
    Undly_79_set.insert("UnderlyingSecurityID_t_1264645434");
    Undly_79.add_attribute("Src", "C"); // 1
    Undly_79_set.insert("C");
    Undly_79.add_attribute("Prod", "2"); // 1
    Undly_79_set.insert("2");
    Undly_79.add_attribute("CFI", "UnderlyingCFICode_t_1157174194"); // 1
    Undly_79_set.insert("UnderlyingCFICode_t_1157174194");
    Undly_79.add_attribute("SecTyp", "AN"); // 1
    Undly_79_set.insert("AN");
    Undly_79.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_176858593"); // 1
    Undly_79_set.insert("UnderlyingSecuritySubType_t_176858593");
    Undly_79.add_attribute("MMY", "1283334153"); // 1
    Undly_79_set.insert("1283334153");
    Undly_79.add_attribute("Mat", "UnderlyingMaturityDate_t_950604388"); // 1
    Undly_79_set.insert("UnderlyingMaturityDate_t_950604388");
    Undly_79.add_attribute("MatTm", "1136995217"); // 1
    Undly_79_set.insert("1136995217");
    Undly_79.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_887590290"); // 1
    Undly_79_set.insert("UnderlyingCouponPaymentDate_t_887590290");
    Undly_79.add_attribute("RestrctTyp", "XR"); // 1
    Undly_79_set.insert("XR");
    Undly_79.add_attribute("Snrty", "SR"); // 1
    Undly_79_set.insert("SR");
    Undly_79.add_attribute("NotlPctOut", "16089826.000000"); // 1
    Undly_79_set.insert("16089826.000000");
    Undly_79.add_attribute("OrigNotlPctOut", "3504053.500000"); // 1
    Undly_79_set.insert("3504053.500000");
    Undly_79.add_attribute("AttchPnt", "15351102.150000"); // 1
    Undly_79_set.insert("15351102.150000");
    Undly_79.add_attribute("DetchPnt", "5061065.660000"); // 1
    Undly_79_set.insert("5061065.660000");
    Undly_79.add_attribute("Issued", "UnderlyingIssueDate_t_2049613179"); // 1
    Undly_79_set.insert("UnderlyingIssueDate_t_2049613179");
    Undly_79.add_attribute("RepoCollSecTyp", "1779799246"); // 1
    Undly_79_set.insert("1779799246");
    Undly_79.add_attribute("RepoTrm", "703230322"); // 1
    Undly_79_set.insert("703230322");
    Undly_79.add_attribute("RepoRt", "7723795.520000"); // 1
    Undly_79_set.insert("7723795.520000");
    Undly_79.add_attribute("Fctr", "5934183.210000"); // 1
    Undly_79_set.insert("5934183.210000");
    Undly_79.add_attribute("CrdRtg", "UnderlyingCreditRating_t_319677038"); // 1
    Undly_79_set.insert("UnderlyingCreditRating_t_319677038");
    Undly_79.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2138863959"); // 1
    Undly_79_set.insert("UnderlyingInstrRegistry_t_2138863959");
    Undly_79.add_attribute("Ctry", "797493295"); // 1
    Undly_79_set.insert("797493295");
    Undly_79.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_941598018"); // 1
    Undly_79_set.insert("UnderlyingStateOrProvinceOfIssue_t_941598018");
    Undly_79.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1730881036"); // 1
    Undly_79_set.insert("UnderlyingLocaleOfIssue_t_1730881036");
    Undly_79.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1462637923"); // 1
    Undly_79_set.insert("UnderlyingRedemptionDate_t_1462637923");
    Undly_79.add_attribute("StrkPx", "14892380.580000"); // 1
    Undly_79_set.insert("14892380.580000");
    Undly_79.add_attribute("StrkCcy", "CHF"); // 1
    Undly_79_set.insert("CHF");
    Undly_79.add_attribute("OptA", "1896903182"); // 1
    Undly_79_set.insert("1896903182");
    Undly_79.add_attribute("Mult", "5457003.480000"); // 1
    Undly_79_set.insert("5457003.480000");
    Undly_79.add_attribute("MultTyp", "0"); // 1
    Undly_79_set.insert("0");
    Undly_79.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_79_set.insert("0");
    Undly_79.add_attribute("UOM", "tn"); // 1
    Undly_79_set.insert("tn");
    Undly_79.add_attribute("UOMQty", "926285.400000"); // 1
    Undly_79_set.insert("926285.400000");
    Undly_79.add_attribute("PxUOM", "Bbl"); // 1
    Undly_79_set.insert("Bbl");
    Undly_79.add_attribute("PxUOMQty", "8387250.470000"); // 1
    Undly_79_set.insert("8387250.470000");
    Undly_79.add_attribute("TmUnit", "D"); // 1
    Undly_79_set.insert("D");
    Undly_79.add_attribute("ExerStyle", "1"); // 1
    Undly_79_set.insert("1");
    Undly_79.add_attribute("CpnRt", "17263153.370000"); // 1
    Undly_79_set.insert("17263153.370000");
    Undly_79.add_attribute("Exch", "UnderlyingSecurityExchange_t_1772672275"); // 1
    Undly_79_set.insert("UnderlyingSecurityExchange_t_1772672275");
    Undly_79.add_attribute("Issr", "UnderlyingIssuer_t_1713425931"); // 1
    Undly_79_set.insert("UnderlyingIssuer_t_1713425931");
    Undly_79.add_attribute("EncUndIssrLen", "1187814290"); // 1
    Undly_79_set.insert("1187814290");
    Undly_79.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2123077626"); // 1
    Undly_79_set.insert("EncodedUnderlyingIssuer_t_2123077626");
    Undly_79.add_attribute("Desc", "UnderlyingSecurityDesc_t_1101052498"); // 1
    Undly_79_set.insert("UnderlyingSecurityDesc_t_1101052498");
    Undly_79.add_attribute("EncUndSecDescLen", "1693920856"); // 1
    Undly_79_set.insert("1693920856");
    Undly_79.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2025207157"); // 1
    Undly_79_set.insert("EncodedUnderlyingSecurityDesc_t_2025207157");
    Undly_79.add_attribute("CPPgm", "UnderlyingCPProgram_t_733368096"); // 1
    Undly_79_set.insert("UnderlyingCPProgram_t_733368096");
    Undly_79.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_249667531"); // 1
    Undly_79_set.insert("UnderlyingCPRegType_t_249667531");
    Undly_79.add_attribute("AllocPct", "6501030.610000"); // 1
    Undly_79_set.insert("6501030.610000");
    Undly_79.add_attribute("Ccy", "CHF"); // 1
    Undly_79_set.insert("CHF");
    Undly_79.add_attribute("Qty", "6414833.720000"); // 1
    Undly_79_set.insert("6414833.720000");
    Undly_79.add_attribute("SettlTyp", "5"); // 1
    Undly_79_set.insert("5");
    Undly_79.add_attribute("CashAmt", "UnderlyingCashAmount_t_1510942587"); // 1
    Undly_79_set.insert("UnderlyingCashAmount_t_1510942587");
    Undly_79.add_attribute("CashTyp", "DIFF"); // 1
    Undly_79_set.insert("DIFF");
    Undly_79.add_attribute("Px", "14394339.890000"); // 1
    Undly_79_set.insert("14394339.890000");
    Undly_79.add_attribute("DirtPx", "8526969.980000"); // 1
    Undly_79_set.insert("8526969.980000");
    Undly_79.add_attribute("EndPx", "16534193.220000"); // 1
    Undly_79_set.insert("16534193.220000");
    Undly_79.add_attribute("StartVal", "UnderlyingStartValue_t_1607744306"); // 1
    Undly_79_set.insert("UnderlyingStartValue_t_1607744306");
    Undly_79.add_attribute("CurVal", "UnderlyingCurrentValue_t_602116532"); // 1
    Undly_79_set.insert("UnderlyingCurrentValue_t_602116532");
    Undly_79.add_attribute("EndVal", "UnderlyingEndValue_t_51636022"); // 1
    Undly_79_set.insert("UnderlyingEndValue_t_51636022");
    Undly_79.add_attribute("AdjQty", "19897186.340000"); // 1
    Undly_79_set.insert("19897186.340000");
    Undly_79.add_attribute("FxRate", "5870722.940000"); // 1
    Undly_79_set.insert("5870722.940000");
    Undly_79.add_attribute("FxRateCalc", "M"); // 1
    Undly_79_set.insert("M");
    Undly_79.add_attribute("CapValu", "UnderlyingCapValue_t_2082347174"); // 1
    Undly_79_set.insert("UnderlyingCapValue_t_2082347174");
    Undly_79.add_attribute("SetMeth", "UnderlyingSettlMethod_t_748886650"); // 1
    Undly_79_set.insert("UnderlyingSettlMethod_t_748886650");
    Undly_79.add_attribute("PutCall", "445751964"); // 1
    Undly_79_set.insert("445751964");
    all_values.push_back(Undly_79_set);
    all_compo_names.insert("Undly_79_set");

    {
      xml_element UndAID_79{"UndAID"};
      multiset<string> UndAID_79_set;
      UndAID_79.add_attribute("AltID", "UnderlyingSecurityAltID_t_978096454"); // 2
      UndAID_79_set.insert("UnderlyingSecurityAltID_t_978096454");
      UndAID_79.add_attribute("AltIDSrc", "3"); // 2
      UndAID_79_set.insert("3");
      all_values.push_back(UndAID_79_set);
      all_compo_names.insert("UndAID_79_set");

      Undly_79.add_element(UndAID_79);
    }
    {
      xml_element Stip_116{"Stip"};
      multiset<string> Stip_116_set;
      Stip_116.add_attribute("Typ", "TRDVAR"); // 2
      Stip_116_set.insert("TRDVAR");
      Stip_116.add_attribute("Val", "UnderlyingStipValue_t_603285081"); // 2
      Stip_116_set.insert("UnderlyingStipValue_t_603285081");
      all_values.push_back(Stip_116_set);
      all_compo_names.insert("Stip_116_set");

      Undly_79.add_element(Stip_116);
    }
    {
      xml_element Pty_299{"Pty"};
      multiset<string> Pty_299_set;
      Pty_299.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1613638507"); // 2
      Pty_299_set.insert("UnderlyingInstrumentPartyID_t_1613638507");
      Pty_299.add_attribute("Src", "6"); // 2
      Pty_299_set.insert("6");
      Pty_299.add_attribute("R", "4"); // 2
      Pty_299_set.insert("4");
      all_values.push_back(Pty_299_set);
      all_compo_names.insert("Pty_299_set");

      {
        xml_element Sub_299{"Sub"};
        multiset<string> Sub_299_set;
        Sub_299.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_567207357"); // 3
        Sub_299_set.insert("UnderlyingInstrumentPartySubID_t_567207357");
        Sub_299.add_attribute("Typ", "4"); // 3
        Sub_299_set.insert("4");
        all_values.push_back(Sub_299_set);
        all_compo_names.insert("Sub_299_set");

        Pty_299.add_element(Sub_299);
      }
      Undly_79.add_element(Pty_299);
    }
    elt.add_element(Undly_79);
  } // end Undly
  { // Undly
    xml_element Undly_80{"Undly"};
    multiset<string> Undly_80_set;
    Undly_80.add_attribute("Sym", "UnderlyingSymbol_t_456602569"); // 1
    Undly_80_set.insert("UnderlyingSymbol_t_456602569");
    Undly_80.add_attribute("Sfx", "CD"); // 1
    Undly_80_set.insert("CD");
    Undly_80.add_attribute("ID", "UnderlyingSecurityID_t_1008502683"); // 1
    Undly_80_set.insert("UnderlyingSecurityID_t_1008502683");
    Undly_80.add_attribute("Src", "9"); // 1
    Undly_80_set.insert("9");
    Undly_80.add_attribute("Prod", "4"); // 1
    Undly_80_set.insert("4");
    Undly_80.add_attribute("CFI", "UnderlyingCFICode_t_1577847252"); // 1
    Undly_80_set.insert("UnderlyingCFICode_t_1577847252");
    Undly_80.add_attribute("SecTyp", "BOX"); // 1
    Undly_80_set.insert("BOX");
    Undly_80.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_456674289"); // 1
    Undly_80_set.insert("UnderlyingSecuritySubType_t_456674289");
    Undly_80.add_attribute("MMY", "941306191"); // 1
    Undly_80_set.insert("941306191");
    Undly_80.add_attribute("Mat", "UnderlyingMaturityDate_t_1973069764"); // 1
    Undly_80_set.insert("UnderlyingMaturityDate_t_1973069764");
    Undly_80.add_attribute("MatTm", "1896108278"); // 1
    Undly_80_set.insert("1896108278");
    Undly_80.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1794003189"); // 1
    Undly_80_set.insert("UnderlyingCouponPaymentDate_t_1794003189");
    Undly_80.add_attribute("RestrctTyp", "MM"); // 1
    Undly_80_set.insert("MM");
    Undly_80.add_attribute("Snrty", "SB"); // 1
    Undly_80_set.insert("SB");
    Undly_80.add_attribute("NotlPctOut", "2486360.730000"); // 1
    Undly_80_set.insert("2486360.730000");
    Undly_80.add_attribute("OrigNotlPctOut", "15306414.610000"); // 1
    Undly_80_set.insert("15306414.610000");
    Undly_80.add_attribute("AttchPnt", "11986039.220000"); // 1
    Undly_80_set.insert("11986039.220000");
    Undly_80.add_attribute("DetchPnt", "8357083.680000"); // 1
    Undly_80_set.insert("8357083.680000");
    Undly_80.add_attribute("Issued", "UnderlyingIssueDate_t_1137668377"); // 1
    Undly_80_set.insert("UnderlyingIssueDate_t_1137668377");
    Undly_80.add_attribute("RepoCollSecTyp", "1133467448"); // 1
    Undly_80_set.insert("1133467448");
    Undly_80.add_attribute("RepoTrm", "1584595018"); // 1
    Undly_80_set.insert("1584595018");
    Undly_80.add_attribute("RepoRt", "15834203.410000"); // 1
    Undly_80_set.insert("15834203.410000");
    Undly_80.add_attribute("Fctr", "21115639.020000"); // 1
    Undly_80_set.insert("21115639.020000");
    Undly_80.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1484807594"); // 1
    Undly_80_set.insert("UnderlyingCreditRating_t_1484807594");
    Undly_80.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1608003995"); // 1
    Undly_80_set.insert("UnderlyingInstrRegistry_t_1608003995");
    Undly_80.add_attribute("Ctry", "567365336"); // 1
    Undly_80_set.insert("567365336");
    Undly_80.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_950962453"); // 1
    Undly_80_set.insert("UnderlyingStateOrProvinceOfIssue_t_950962453");
    Undly_80.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_672918290"); // 1
    Undly_80_set.insert("UnderlyingLocaleOfIssue_t_672918290");
    Undly_80.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1146244395"); // 1
    Undly_80_set.insert("UnderlyingRedemptionDate_t_1146244395");
    Undly_80.add_attribute("StrkPx", "15181698.110000"); // 1
    Undly_80_set.insert("15181698.110000");
    Undly_80.add_attribute("StrkCcy", "JPY"); // 1
    Undly_80_set.insert("JPY");
    Undly_80.add_attribute("OptA", "671261617"); // 1
    Undly_80_set.insert("671261617");
    Undly_80.add_attribute("Mult", "2927724.770000"); // 1
    Undly_80_set.insert("2927724.770000");
    Undly_80.add_attribute("MultTyp", "2"); // 1
    Undly_80_set.insert("2");
    Undly_80.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_80_set.insert("1");
    Undly_80.add_attribute("UOM", "t"); // 1
    Undly_80_set.insert("t");
    Undly_80.add_attribute("UOMQty", "1627743.020000"); // 1
    Undly_80_set.insert("1627743.020000");
    Undly_80.add_attribute("PxUOM", "MWh"); // 1
    Undly_80_set.insert("MWh");
    Undly_80.add_attribute("PxUOMQty", "6644422.730000"); // 1
    Undly_80_set.insert("6644422.730000");
    Undly_80.add_attribute("TmUnit", "Yr"); // 1
    Undly_80_set.insert("Yr");
    Undly_80.add_attribute("ExerStyle", "2"); // 1
    Undly_80_set.insert("2");
    Undly_80.add_attribute("CpnRt", "3109618.140000"); // 1
    Undly_80_set.insert("3109618.140000");
    Undly_80.add_attribute("Exch", "UnderlyingSecurityExchange_t_1467365856"); // 1
    Undly_80_set.insert("UnderlyingSecurityExchange_t_1467365856");
    Undly_80.add_attribute("Issr", "UnderlyingIssuer_t_565324049"); // 1
    Undly_80_set.insert("UnderlyingIssuer_t_565324049");
    Undly_80.add_attribute("EncUndIssrLen", "559597888"); // 1
    Undly_80_set.insert("559597888");
    Undly_80.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_850523669"); // 1
    Undly_80_set.insert("EncodedUnderlyingIssuer_t_850523669");
    Undly_80.add_attribute("Desc", "UnderlyingSecurityDesc_t_1763927972"); // 1
    Undly_80_set.insert("UnderlyingSecurityDesc_t_1763927972");
    Undly_80.add_attribute("EncUndSecDescLen", "1395306256"); // 1
    Undly_80_set.insert("1395306256");
    Undly_80.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1988192047"); // 1
    Undly_80_set.insert("EncodedUnderlyingSecurityDesc_t_1988192047");
    Undly_80.add_attribute("CPPgm", "UnderlyingCPProgram_t_749911772"); // 1
    Undly_80_set.insert("UnderlyingCPProgram_t_749911772");
    Undly_80.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_832417626"); // 1
    Undly_80_set.insert("UnderlyingCPRegType_t_832417626");
    Undly_80.add_attribute("AllocPct", "14241287.400000"); // 1
    Undly_80_set.insert("14241287.400000");
    Undly_80.add_attribute("Ccy", "EUR"); // 1
    Undly_80_set.insert("EUR");
    Undly_80.add_attribute("Qty", "8846490.870000"); // 1
    Undly_80_set.insert("8846490.870000");
    Undly_80.add_attribute("SettlTyp", "2"); // 1
    Undly_80_set.insert("2");
    Undly_80.add_attribute("CashAmt", "UnderlyingCashAmount_t_1120704026"); // 1
    Undly_80_set.insert("UnderlyingCashAmount_t_1120704026");
    Undly_80.add_attribute("CashTyp", "FIXED"); // 1
    Undly_80_set.insert("FIXED");
    Undly_80.add_attribute("Px", "2801181.100000"); // 1
    Undly_80_set.insert("2801181.100000");
    Undly_80.add_attribute("DirtPx", "4913901.890000"); // 1
    Undly_80_set.insert("4913901.890000");
    Undly_80.add_attribute("EndPx", "8418371.720000"); // 1
    Undly_80_set.insert("8418371.720000");
    Undly_80.add_attribute("StartVal", "UnderlyingStartValue_t_1882965075"); // 1
    Undly_80_set.insert("UnderlyingStartValue_t_1882965075");
    Undly_80.add_attribute("CurVal", "UnderlyingCurrentValue_t_1162651806"); // 1
    Undly_80_set.insert("UnderlyingCurrentValue_t_1162651806");
    Undly_80.add_attribute("EndVal", "UnderlyingEndValue_t_1134609650"); // 1
    Undly_80_set.insert("UnderlyingEndValue_t_1134609650");
    Undly_80.add_attribute("AdjQty", "2975503.740000"); // 1
    Undly_80_set.insert("2975503.740000");
    Undly_80.add_attribute("FxRate", "1663079.990000"); // 1
    Undly_80_set.insert("1663079.990000");
    Undly_80.add_attribute("FxRateCalc", "D"); // 1
    Undly_80_set.insert("D");
    Undly_80.add_attribute("CapValu", "UnderlyingCapValue_t_460324676"); // 1
    Undly_80_set.insert("UnderlyingCapValue_t_460324676");
    Undly_80.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1774122130"); // 1
    Undly_80_set.insert("UnderlyingSettlMethod_t_1774122130");
    Undly_80.add_attribute("PutCall", "1522188004"); // 1
    Undly_80_set.insert("1522188004");
    all_values.push_back(Undly_80_set);
    all_compo_names.insert("Undly_80_set");

    {
      xml_element UndAID_80{"UndAID"};
      multiset<string> UndAID_80_set;
      UndAID_80.add_attribute("AltID", "UnderlyingSecurityAltID_t_448685094"); // 2
      UndAID_80_set.insert("UnderlyingSecurityAltID_t_448685094");
      UndAID_80.add_attribute("AltIDSrc", "6"); // 2
      UndAID_80_set.insert("6");
      all_values.push_back(UndAID_80_set);
      all_compo_names.insert("UndAID_80_set");

      Undly_80.add_element(UndAID_80);
    }
    {
      xml_element Stip_117{"Stip"};
      multiset<string> Stip_117_set;
      Stip_117.add_attribute("Typ", "YIELD"); // 2
      Stip_117_set.insert("YIELD");
      Stip_117.add_attribute("Val", "UnderlyingStipValue_t_1916050950"); // 2
      Stip_117_set.insert("UnderlyingStipValue_t_1916050950");
      all_values.push_back(Stip_117_set);
      all_compo_names.insert("Stip_117_set");

      Undly_80.add_element(Stip_117);
    }
    {
      xml_element Pty_300{"Pty"};
      multiset<string> Pty_300_set;
      Pty_300.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1548401292"); // 2
      Pty_300_set.insert("UnderlyingInstrumentPartyID_t_1548401292");
      Pty_300.add_attribute("Src", "2"); // 2
      Pty_300_set.insert("2");
      Pty_300.add_attribute("R", "55"); // 2
      Pty_300_set.insert("55");
      all_values.push_back(Pty_300_set);
      all_compo_names.insert("Pty_300_set");

      {
        xml_element Sub_300{"Sub"};
        multiset<string> Sub_300_set;
        Sub_300.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1164845616"); // 3
        Sub_300_set.insert("UnderlyingInstrumentPartySubID_t_1164845616");
        Sub_300.add_attribute("Typ", "33"); // 3
        Sub_300_set.insert("33");
        all_values.push_back(Sub_300_set);
        all_compo_names.insert("Sub_300_set");

        Pty_300.add_element(Sub_300);
      }
      Undly_80.add_element(Pty_300);
    }
    elt.add_element(Undly_80);
  } // end Undly
  { // Undly
    xml_element Undly_81{"Undly"};
    multiset<string> Undly_81_set;
    Undly_81.add_attribute("Sym", "UnderlyingSymbol_t_459799371"); // 1
    Undly_81_set.insert("UnderlyingSymbol_t_459799371");
    Undly_81.add_attribute("Sfx", "WI"); // 1
    Undly_81_set.insert("WI");
    Undly_81.add_attribute("ID", "UnderlyingSecurityID_t_325504293"); // 1
    Undly_81_set.insert("UnderlyingSecurityID_t_325504293");
    Undly_81.add_attribute("Src", "M"); // 1
    Undly_81_set.insert("M");
    Undly_81.add_attribute("Prod", "6"); // 1
    Undly_81_set.insert("6");
    Undly_81.add_attribute("CFI", "UnderlyingCFICode_t_495245866"); // 1
    Undly_81_set.insert("UnderlyingCFICode_t_495245866");
    Undly_81.add_attribute("SecTyp", "TECP"); // 1
    Undly_81_set.insert("TECP");
    Undly_81.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1762623131"); // 1
    Undly_81_set.insert("UnderlyingSecuritySubType_t_1762623131");
    Undly_81.add_attribute("MMY", "1615949893"); // 1
    Undly_81_set.insert("1615949893");
    Undly_81.add_attribute("Mat", "UnderlyingMaturityDate_t_31177281"); // 1
    Undly_81_set.insert("UnderlyingMaturityDate_t_31177281");
    Undly_81.add_attribute("MatTm", "2042741241"); // 1
    Undly_81_set.insert("2042741241");
    Undly_81.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2107340082"); // 1
    Undly_81_set.insert("UnderlyingCouponPaymentDate_t_2107340082");
    Undly_81.add_attribute("RestrctTyp", "MR"); // 1
    Undly_81_set.insert("MR");
    Undly_81.add_attribute("Snrty", "SR"); // 1
    Undly_81_set.insert("SR");
    Undly_81.add_attribute("NotlPctOut", "11225082.410000"); // 1
    Undly_81_set.insert("11225082.410000");
    Undly_81.add_attribute("OrigNotlPctOut", "20076241.030000"); // 1
    Undly_81_set.insert("20076241.030000");
    Undly_81.add_attribute("AttchPnt", "20757730.420000"); // 1
    Undly_81_set.insert("20757730.420000");
    Undly_81.add_attribute("DetchPnt", "12888162.400000"); // 1
    Undly_81_set.insert("12888162.400000");
    Undly_81.add_attribute("Issued", "UnderlyingIssueDate_t_717886187"); // 1
    Undly_81_set.insert("UnderlyingIssueDate_t_717886187");
    Undly_81.add_attribute("RepoCollSecTyp", "388614070"); // 1
    Undly_81_set.insert("388614070");
    Undly_81.add_attribute("RepoTrm", "915454722"); // 1
    Undly_81_set.insert("915454722");
    Undly_81.add_attribute("RepoRt", "925905.430000"); // 1
    Undly_81_set.insert("925905.430000");
    Undly_81.add_attribute("Fctr", "8372991.640000"); // 1
    Undly_81_set.insert("8372991.640000");
    Undly_81.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1898531965"); // 1
    Undly_81_set.insert("UnderlyingCreditRating_t_1898531965");
    Undly_81.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1925740362"); // 1
    Undly_81_set.insert("UnderlyingInstrRegistry_t_1925740362");
    Undly_81.add_attribute("Ctry", "605866467"); // 1
    Undly_81_set.insert("605866467");
    Undly_81.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1299449610"); // 1
    Undly_81_set.insert("UnderlyingStateOrProvinceOfIssue_t_1299449610");
    Undly_81.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_23520773"); // 1
    Undly_81_set.insert("UnderlyingLocaleOfIssue_t_23520773");
    Undly_81.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1224957439"); // 1
    Undly_81_set.insert("UnderlyingRedemptionDate_t_1224957439");
    Undly_81.add_attribute("StrkPx", "3168115.780000"); // 1
    Undly_81_set.insert("3168115.780000");
    Undly_81.add_attribute("StrkCcy", "JPY"); // 1
    Undly_81_set.insert("JPY");
    Undly_81.add_attribute("OptA", "84085319"); // 1
    Undly_81_set.insert("84085319");
    Undly_81.add_attribute("Mult", "19895953.820000"); // 1
    Undly_81_set.insert("19895953.820000");
    Undly_81.add_attribute("MultTyp", "2"); // 1
    Undly_81_set.insert("2");
    Undly_81.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_81_set.insert("2");
    Undly_81.add_attribute("UOM", "oz_tr"); // 1
    Undly_81_set.insert("oz_tr");
    Undly_81.add_attribute("UOMQty", "20422948.240000"); // 1
    Undly_81_set.insert("20422948.240000");
    Undly_81.add_attribute("PxUOM", "MWh"); // 1
    Undly_81_set.insert("MWh");
    Undly_81.add_attribute("PxUOMQty", "19533074.930000"); // 1
    Undly_81_set.insert("19533074.930000");
    Undly_81.add_attribute("TmUnit", "Mo"); // 1
    Undly_81_set.insert("Mo");
    Undly_81.add_attribute("ExerStyle", "0"); // 1
    Undly_81_set.insert("0");
    Undly_81.add_attribute("CpnRt", "19131639.280000"); // 1
    Undly_81_set.insert("19131639.280000");
    Undly_81.add_attribute("Exch", "UnderlyingSecurityExchange_t_799002911"); // 1
    Undly_81_set.insert("UnderlyingSecurityExchange_t_799002911");
    Undly_81.add_attribute("Issr", "UnderlyingIssuer_t_1853970832"); // 1
    Undly_81_set.insert("UnderlyingIssuer_t_1853970832");
    Undly_81.add_attribute("EncUndIssrLen", "888188521"); // 1
    Undly_81_set.insert("888188521");
    Undly_81.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_659143366"); // 1
    Undly_81_set.insert("EncodedUnderlyingIssuer_t_659143366");
    Undly_81.add_attribute("Desc", "UnderlyingSecurityDesc_t_1782260227"); // 1
    Undly_81_set.insert("UnderlyingSecurityDesc_t_1782260227");
    Undly_81.add_attribute("EncUndSecDescLen", "29521113"); // 1
    Undly_81_set.insert("29521113");
    Undly_81.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1377029553"); // 1
    Undly_81_set.insert("EncodedUnderlyingSecurityDesc_t_1377029553");
    Undly_81.add_attribute("CPPgm", "UnderlyingCPProgram_t_23390649"); // 1
    Undly_81_set.insert("UnderlyingCPProgram_t_23390649");
    Undly_81.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_944975836"); // 1
    Undly_81_set.insert("UnderlyingCPRegType_t_944975836");
    Undly_81.add_attribute("AllocPct", "14696200.970000"); // 1
    Undly_81_set.insert("14696200.970000");
    Undly_81.add_attribute("Ccy", "CHF"); // 1
    Undly_81_set.insert("CHF");
    Undly_81.add_attribute("Qty", "12478768.110000"); // 1
    Undly_81_set.insert("12478768.110000");
    Undly_81.add_attribute("SettlTyp", "5"); // 1
    Undly_81_set.insert("5");
    Undly_81.add_attribute("CashAmt", "UnderlyingCashAmount_t_1995473763"); // 1
    Undly_81_set.insert("UnderlyingCashAmount_t_1995473763");
    Undly_81.add_attribute("CashTyp", "DIFF"); // 1
    Undly_81_set.insert("DIFF");
    Undly_81.add_attribute("Px", "5440300.720000"); // 1
    Undly_81_set.insert("5440300.720000");
    Undly_81.add_attribute("DirtPx", "1648016.940000"); // 1
    Undly_81_set.insert("1648016.940000");
    Undly_81.add_attribute("EndPx", "7880050.250000"); // 1
    Undly_81_set.insert("7880050.250000");
    Undly_81.add_attribute("StartVal", "UnderlyingStartValue_t_81303234"); // 1
    Undly_81_set.insert("UnderlyingStartValue_t_81303234");
    Undly_81.add_attribute("CurVal", "UnderlyingCurrentValue_t_248887013"); // 1
    Undly_81_set.insert("UnderlyingCurrentValue_t_248887013");
    Undly_81.add_attribute("EndVal", "UnderlyingEndValue_t_630116759"); // 1
    Undly_81_set.insert("UnderlyingEndValue_t_630116759");
    Undly_81.add_attribute("AdjQty", "15025045.070000"); // 1
    Undly_81_set.insert("15025045.070000");
    Undly_81.add_attribute("FxRate", "8142381.010000"); // 1
    Undly_81_set.insert("8142381.010000");
    Undly_81.add_attribute("FxRateCalc", "M"); // 1
    Undly_81_set.insert("M");
    Undly_81.add_attribute("CapValu", "UnderlyingCapValue_t_1397315684"); // 1
    Undly_81_set.insert("UnderlyingCapValue_t_1397315684");
    Undly_81.add_attribute("SetMeth", "UnderlyingSettlMethod_t_994728671"); // 1
    Undly_81_set.insert("UnderlyingSettlMethod_t_994728671");
    Undly_81.add_attribute("PutCall", "773298205"); // 1
    Undly_81_set.insert("773298205");
    all_values.push_back(Undly_81_set);
    all_compo_names.insert("Undly_81_set");

    {
      xml_element UndAID_81{"UndAID"};
      multiset<string> UndAID_81_set;
      UndAID_81.add_attribute("AltID", "UnderlyingSecurityAltID_t_1323304141"); // 2
      UndAID_81_set.insert("UnderlyingSecurityAltID_t_1323304141");
      UndAID_81.add_attribute("AltIDSrc", "M"); // 2
      UndAID_81_set.insert("M");
      all_values.push_back(UndAID_81_set);
      all_compo_names.insert("UndAID_81_set");

      Undly_81.add_element(UndAID_81);
    }
    {
      xml_element Stip_118{"Stip"};
      multiset<string> Stip_118_set;
      Stip_118.add_attribute("Typ", "COUPON"); // 2
      Stip_118_set.insert("COUPON");
      Stip_118.add_attribute("Val", "UnderlyingStipValue_t_2122307052"); // 2
      Stip_118_set.insert("UnderlyingStipValue_t_2122307052");
      all_values.push_back(Stip_118_set);
      all_compo_names.insert("Stip_118_set");

      Undly_81.add_element(Stip_118);
    }
    {
      xml_element Pty_301{"Pty"};
      multiset<string> Pty_301_set;
      Pty_301.add_attribute("ID", "UnderlyingInstrumentPartyID_t_776964020"); // 2
      Pty_301_set.insert("UnderlyingInstrumentPartyID_t_776964020");
      Pty_301.add_attribute("Src", "H"); // 2
      Pty_301_set.insert("H");
      Pty_301.add_attribute("R", "42"); // 2
      Pty_301_set.insert("42");
      all_values.push_back(Pty_301_set);
      all_compo_names.insert("Pty_301_set");

      {
        xml_element Sub_301{"Sub"};
        multiset<string> Sub_301_set;
        Sub_301.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_411740599"); // 3
        Sub_301_set.insert("UnderlyingInstrumentPartySubID_t_411740599");
        Sub_301.add_attribute("Typ", "17"); // 3
        Sub_301_set.insert("17");
        all_values.push_back(Sub_301_set);
        all_compo_names.insert("Sub_301_set");

        Pty_301.add_element(Sub_301);
      }
      Undly_81.add_element(Pty_301);
    }
    elt.add_element(Undly_81);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_18{"OrdQty"};
    multiset<string> OrdQty_18_set;
    OrdQty_18.add_attribute("Qty", "20109963.240000"); // 1
    OrdQty_18_set.insert("20109963.240000");
    OrdQty_18.add_attribute("Cash", "4351312.480000"); // 1
    OrdQty_18_set.insert("4351312.480000");
    OrdQty_18.add_attribute("Pct", "2541803.080000"); // 1
    OrdQty_18_set.insert("2541803.080000");
    OrdQty_18.add_attribute("RndDir", "0"); // 1
    OrdQty_18_set.insert("0");
    OrdQty_18.add_attribute("RndMod", "12958210.620000"); // 1
    OrdQty_18_set.insert("12958210.620000");
    all_values.push_back(OrdQty_18_set);
    all_compo_names.insert("OrdQty_18_set");

    elt.add_element(OrdQty_18);
  } // end OrdQty
  { // RtSrc
    xml_element RtSrc_9{"RtSrc"};
    multiset<string> RtSrc_9_set;
    RtSrc_9.add_attribute("RtSrc", "1"); // 1
    RtSrc_9_set.insert("1");
    RtSrc_9.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_9_set.insert("1");
    RtSrc_9.add_attribute("RefPg", "ReferencePage_t_798194577"); // 1
    RtSrc_9_set.insert("ReferencePage_t_798194577");
    all_values.push_back(RtSrc_9_set);
    all_compo_names.insert("RtSrc_9_set");

    elt.add_element(RtSrc_9);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_10{"RtSrc"};
    multiset<string> RtSrc_10_set;
    RtSrc_10.add_attribute("RtSrc", "2"); // 1
    RtSrc_10_set.insert("2");
    RtSrc_10.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_10_set.insert("1");
    RtSrc_10.add_attribute("RefPg", "ReferencePage_t_962996271"); // 1
    RtSrc_10_set.insert("ReferencePage_t_962996271");
    all_values.push_back(RtSrc_10_set);
    all_compo_names.insert("RtSrc_10_set");

    elt.add_element(RtSrc_10);
  } // end RtSrc
  { // Stip
    xml_element Stip_119{"Stip"};
    multiset<string> Stip_119_set;
    Stip_119.add_attribute("Typ", "PURPOSE"); // 1
    Stip_119_set.insert("PURPOSE");
    Stip_119.add_attribute("Val", "StipulationValue_t_1211883284"); // 1
    Stip_119_set.insert("StipulationValue_t_1211883284");
    all_values.push_back(Stip_119_set);
    all_compo_names.insert("Stip_119_set");

    elt.add_element(Stip_119);
  } // end Stip
  { // Stip
    xml_element Stip_120{"Stip"};
    multiset<string> Stip_120_set;
    Stip_120.add_attribute("Typ", "YIELD"); // 1
    Stip_120_set.insert("YIELD");
    Stip_120.add_attribute("Val", "StipulationValue_t_595247861"); // 1
    Stip_120_set.insert("StipulationValue_t_595247861");
    all_values.push_back(Stip_120_set);
    all_compo_names.insert("Stip_120_set");

    elt.add_element(Stip_120);
  } // end Stip
  { // Stip
    xml_element Stip_121{"Stip"};
    multiset<string> Stip_121_set;
    Stip_121.add_attribute("Typ", "MINDNOM"); // 1
    Stip_121_set.insert("MINDNOM");
    Stip_121.add_attribute("Val", "StipulationValue_t_1943036019"); // 1
    Stip_121_set.insert("StipulationValue_t_1943036019");
    all_values.push_back(Stip_121_set);
    all_compo_names.insert("Stip_121_set");

    elt.add_element(Stip_121);
  } // end Stip
  { // Quot
    xml_element Quot_0{"Quot"};
    multiset<string> Quot_0_set;
    Quot_0.add_attribute("Qty", "8733664.090000"); // 1
    Quot_0_set.insert("8733664.090000");
    Quot_0.add_attribute("OrdQty", "5688505.760000"); // 1
    Quot_0_set.insert("5688505.760000");
    Quot_0.add_attribute("SwapTyp", "4"); // 1
    Quot_0_set.insert("4");
    Quot_0.add_attribute("SettlTyp", "0"); // 1
    Quot_0_set.insert("0");
    Quot_0.add_attribute("SettlDt", "LegSettlDate_t_1107829062"); // 1
    Quot_0_set.insert("LegSettlDate_t_1107829062");
    Quot_0.add_attribute("PxTyp", "13"); // 1
    Quot_0_set.insert("13");
    Quot_0.add_attribute("BidPx", "5733236.160000"); // 1
    Quot_0_set.insert("5733236.160000");
    Quot_0.add_attribute("OfrPx", "3875124.200000"); // 1
    Quot_0_set.insert("3875124.200000");
    Quot_0.add_attribute("RefID", "LegRefID_t_1777174214"); // 1
    Quot_0_set.insert("LegRefID_t_1777174214");
    Quot_0.add_attribute("LegBidFwdPnts", "9850642.150000"); // 1
    Quot_0_set.insert("9850642.150000");
    Quot_0.add_attribute("LegOfrFwdPnts", "18442005.400000"); // 1
    Quot_0_set.insert("18442005.400000");
    all_values.push_back(Quot_0_set);
    all_compo_names.insert("Quot_0_set");

    {
      xml_element Leg_64{"Leg"};
      multiset<string> Leg_64_set;
      Leg_64.add_attribute("Sym", "LegSymbol_t_1640686890"); // 2
      Leg_64_set.insert("LegSymbol_t_1640686890");
      Leg_64.add_attribute("Sfx", "CD"); // 2
      Leg_64_set.insert("CD");
      Leg_64.add_attribute("ID", "LegSecurityID_t_2098380848"); // 2
      Leg_64_set.insert("LegSecurityID_t_2098380848");
      Leg_64.add_attribute("Src", "1"); // 2
      Leg_64_set.insert("1");
      Leg_64.add_attribute("Prod", "13"); // 2
      Leg_64_set.insert("13");
      Leg_64.add_attribute("CFI", "LegCFICode_t_901101662"); // 2
      Leg_64_set.insert("LegCFICode_t_901101662");
      Leg_64.add_attribute("SecTyp", "EUCORP"); // 2
      Leg_64_set.insert("EUCORP");
      Leg_64.add_attribute("SecSubTyp", "LegSecuritySubType_t_1183426574"); // 2
      Leg_64_set.insert("LegSecuritySubType_t_1183426574");
      Leg_64.add_attribute("MMY", "1699296239"); // 2
      Leg_64_set.insert("1699296239");
      Leg_64.add_attribute("Mat", "LegMaturityDate_t_817301827"); // 2
      Leg_64_set.insert("LegMaturityDate_t_817301827");
      Leg_64.add_attribute("MatTm", "194866693"); // 2
      Leg_64_set.insert("194866693");
      Leg_64.add_attribute("CpnPmt", "LegCouponPaymentDate_t_514808862"); // 2
      Leg_64_set.insert("LegCouponPaymentDate_t_514808862");
      Leg_64.add_attribute("Issued", "LegIssueDate_t_1162746726"); // 2
      Leg_64_set.insert("LegIssueDate_t_1162746726");
      Leg_64.add_attribute("RepoCollSecTyp", "1435093695"); // 2
      Leg_64_set.insert("1435093695");
      Leg_64.add_attribute("RepoTrm", "1726692146"); // 2
      Leg_64_set.insert("1726692146");
      Leg_64.add_attribute("RepoRt", "21383083.850000"); // 2
      Leg_64_set.insert("21383083.850000");
      Leg_64.add_attribute("Fctr", "20303415.560000"); // 2
      Leg_64_set.insert("20303415.560000");
      Leg_64.add_attribute("CrdRtg", "LegCreditRating_t_1605329884"); // 2
      Leg_64_set.insert("LegCreditRating_t_1605329884");
      Leg_64.add_attribute("Rgstry", "LegInstrRegistry_t_1933860756"); // 2
      Leg_64_set.insert("LegInstrRegistry_t_1933860756");
      Leg_64.add_attribute("Ctry", "1875421453"); // 2
      Leg_64_set.insert("1875421453");
      Leg_64.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_331212645"); // 2
      Leg_64_set.insert("LegStateOrProvinceOfIssue_t_331212645");
      Leg_64.add_attribute("Lcl", "LegLocaleOfIssue_t_355227685"); // 2
      Leg_64_set.insert("LegLocaleOfIssue_t_355227685");
      Leg_64.add_attribute("Redeem", "LegRedemptionDate_t_896321843"); // 2
      Leg_64_set.insert("LegRedemptionDate_t_896321843");
      Leg_64.add_attribute("Strk", "1275722.410000"); // 2
      Leg_64_set.insert("1275722.410000");
      Leg_64.add_attribute("StrkCcy", "JPY"); // 2
      Leg_64_set.insert("JPY");
      Leg_64.add_attribute("OptA", "700895858"); // 2
      Leg_64_set.insert("700895858");
      Leg_64.add_attribute("Cmult", "18505691.670000"); // 2
      Leg_64_set.insert("18505691.670000");
      Leg_64.add_attribute("MultTyp", "1"); // 2
      Leg_64_set.insert("1");
      Leg_64.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_64_set.insert("3");
      Leg_64.add_attribute("UOM", "oz_tr"); // 2
      Leg_64_set.insert("oz_tr");
      Leg_64.add_attribute("UOMQty", "11624230.950000"); // 2
      Leg_64_set.insert("11624230.950000");
      Leg_64.add_attribute("PxUOM", "MMbbl"); // 2
      Leg_64_set.insert("MMbbl");
      Leg_64.add_attribute("PxUOMQty", "14981832.600000"); // 2
      Leg_64_set.insert("14981832.600000");
      Leg_64.add_attribute("TmUnit", "D"); // 2
      Leg_64_set.insert("D");
      Leg_64.add_attribute("ExerStyle", "0"); // 2
      Leg_64_set.insert("0");
      Leg_64.add_attribute("CpnRt", "2518012.740000"); // 2
      Leg_64_set.insert("2518012.740000");
      Leg_64.add_attribute("Exch", "LegSecurityExchange_t_1101137416"); // 2
      Leg_64_set.insert("LegSecurityExchange_t_1101137416");
      Leg_64.add_attribute("Issr", "LegIssuer_t_563147694"); // 2
      Leg_64_set.insert("LegIssuer_t_563147694");
      Leg_64.add_attribute("EncLegIssrLen", "1951097513"); // 2
      Leg_64_set.insert("1951097513");
      Leg_64.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1918439243"); // 2
      Leg_64_set.insert("EncodedLegIssuer_t_1918439243");
      Leg_64.add_attribute("Desc", "LegSecurityDesc_t_758014387"); // 2
      Leg_64_set.insert("LegSecurityDesc_t_758014387");
      Leg_64.add_attribute("EncLegSecDescLen", "318422727"); // 2
      Leg_64_set.insert("318422727");
      Leg_64.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_933702321"); // 2
      Leg_64_set.insert("EncodedLegSecurityDesc_t_933702321");
      Leg_64.add_attribute("RatioQty", "456244.340000"); // 2
      Leg_64_set.insert("456244.340000");
      Leg_64.add_attribute("Side", "B"); // 2
      Leg_64_set.insert("B");
      Leg_64.add_attribute("Ccy", "JPY"); // 2
      Leg_64_set.insert("JPY");
      Leg_64.add_attribute("Pool", "LegPool_t_1502961110"); // 2
      Leg_64_set.insert("LegPool_t_1502961110");
      Leg_64.add_attribute("Dated", "LegDatedDate_t_710904167"); // 2
      Leg_64_set.insert("LegDatedDate_t_710904167");
      Leg_64.add_attribute("CSetMo", "1803903795"); // 2
      Leg_64_set.insert("1803903795");
      Leg_64.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1834173755"); // 2
      Leg_64_set.insert("LegInterestAccrualDate_t_1834173755");
      Leg_64.add_attribute("PutCall", "1066131852"); // 2
      Leg_64_set.insert("1066131852");
      Leg_64.add_attribute("LegOptionRatio", "5527419.910000"); // 2
      Leg_64_set.insert("5527419.910000");
      Leg_64.add_attribute("Px", "19617459.960000"); // 2
      Leg_64_set.insert("19617459.960000");
      all_values.push_back(Leg_64_set);
      all_compo_names.insert("Leg_64_set");

      {
        xml_element LegAID_64{"LegAID"};
        multiset<string> LegAID_64_set;
        LegAID_64.add_attribute("SecAltID", "LegSecurityAltID_t_381704951"); // 3
        LegAID_64_set.insert("LegSecurityAltID_t_381704951");
        LegAID_64.add_attribute("SecAltIDSrc", "C"); // 3
        LegAID_64_set.insert("C");
        all_values.push_back(LegAID_64_set);
        all_compo_names.insert("LegAID_64_set");

        Leg_64.add_element(LegAID_64);
      }
      Quot_0.add_element(Leg_64);
    }
    {
      xml_element Stip_122{"Stip"};
      multiset<string> Stip_122_set;
      Stip_122.add_attribute("StipTyp", "SECTOR"); // 2
      Stip_122_set.insert("SECTOR");
      Stip_122.add_attribute("StipVal", "LegStipulationValue_t_84790471"); // 2
      Stip_122_set.insert("LegStipulationValue_t_84790471");
      all_values.push_back(Stip_122_set);
      all_compo_names.insert("Stip_122_set");

      Quot_0.add_element(Stip_122);
    }
    {
      xml_element Pty_302{"Pty"};
      multiset<string> Pty_302_set;
      Pty_302.add_attribute("ID", "NestedPartyID_t_2114007482"); // 2
      Pty_302_set.insert("NestedPartyID_t_2114007482");
      Pty_302.add_attribute("Src", "F"); // 2
      Pty_302_set.insert("F");
      Pty_302.add_attribute("R", "46"); // 2
      Pty_302_set.insert("46");
      all_values.push_back(Pty_302_set);
      all_compo_names.insert("Pty_302_set");

      {
        xml_element Sub_302{"Sub"};
        multiset<string> Sub_302_set;
        Sub_302.add_attribute("ID", "NestedPartySubID_t_1128946929"); // 3
        Sub_302_set.insert("NestedPartySubID_t_1128946929");
        Sub_302.add_attribute("Typ", "15"); // 3
        Sub_302_set.insert("15");
        all_values.push_back(Sub_302_set);
        all_compo_names.insert("Sub_302_set");

        Pty_302.add_element(Sub_302);
      }
      Quot_0.add_element(Pty_302);
    }
    {
      xml_element BnchmkCurve_0{"BnchmkCurve"};
      multiset<string> BnchmkCurve_0_set;
      BnchmkCurve_0.add_attribute("Ccy", "USD"); // 2
      BnchmkCurve_0_set.insert("USD");
      BnchmkCurve_0.add_attribute("Name", "EUREPO"); // 2
      BnchmkCurve_0_set.insert("EUREPO");
      BnchmkCurve_0.add_attribute("Point", "LegBenchmarkCurvePoint_t_1234577418"); // 2
      BnchmkCurve_0_set.insert("LegBenchmarkCurvePoint_t_1234577418");
      BnchmkCurve_0.add_attribute("Px", "20713598.080000"); // 2
      BnchmkCurve_0_set.insert("20713598.080000");
      BnchmkCurve_0.add_attribute("PxTyp", "955175335"); // 2
      BnchmkCurve_0_set.insert("955175335");
      all_values.push_back(BnchmkCurve_0_set);
      all_compo_names.insert("BnchmkCurve_0_set");

      Quot_0.add_element(BnchmkCurve_0);
    }
    elt.add_element(Quot_0);
  } // end Quot
  { // Quot
    xml_element Quot_1{"Quot"};
    multiset<string> Quot_1_set;
    Quot_1.add_attribute("Qty", "10381912.830000"); // 1
    Quot_1_set.insert("10381912.830000");
    Quot_1.add_attribute("OrdQty", "18423154.030000"); // 1
    Quot_1_set.insert("18423154.030000");
    Quot_1.add_attribute("SwapTyp", "5"); // 1
    Quot_1_set.insert("5");
    Quot_1.add_attribute("SettlTyp", "7"); // 1
    Quot_1_set.insert("7");
    Quot_1.add_attribute("SettlDt", "LegSettlDate_t_628534076"); // 1
    Quot_1_set.insert("LegSettlDate_t_628534076");
    Quot_1.add_attribute("PxTyp", "13"); // 1
    Quot_1_set.insert("13");
    Quot_1.add_attribute("BidPx", "12542452.370000"); // 1
    Quot_1_set.insert("12542452.370000");
    Quot_1.add_attribute("OfrPx", "15530611.350000"); // 1
    Quot_1_set.insert("15530611.350000");
    Quot_1.add_attribute("RefID", "LegRefID_t_1687296500"); // 1
    Quot_1_set.insert("LegRefID_t_1687296500");
    Quot_1.add_attribute("LegBidFwdPnts", "6097226.990000"); // 1
    Quot_1_set.insert("6097226.990000");
    Quot_1.add_attribute("LegOfrFwdPnts", "1164816.550000"); // 1
    Quot_1_set.insert("1164816.550000");
    all_values.push_back(Quot_1_set);
    all_compo_names.insert("Quot_1_set");

    {
      xml_element Leg_65{"Leg"};
      multiset<string> Leg_65_set;
      Leg_65.add_attribute("Sym", "LegSymbol_t_1343716647"); // 2
      Leg_65_set.insert("LegSymbol_t_1343716647");
      Leg_65.add_attribute("Sfx", "CD"); // 2
      Leg_65_set.insert("CD");
      Leg_65.add_attribute("ID", "LegSecurityID_t_1182613507"); // 2
      Leg_65_set.insert("LegSecurityID_t_1182613507");
      Leg_65.add_attribute("Src", "9"); // 2
      Leg_65_set.insert("9");
      Leg_65.add_attribute("Prod", "2"); // 2
      Leg_65_set.insert("2");
      Leg_65.add_attribute("CFI", "LegCFICode_t_1564318459"); // 2
      Leg_65_set.insert("LegCFICode_t_1564318459");
      Leg_65.add_attribute("SecTyp", "CMBS"); // 2
      Leg_65_set.insert("CMBS");
      Leg_65.add_attribute("SecSubTyp", "LegSecuritySubType_t_625833361"); // 2
      Leg_65_set.insert("LegSecuritySubType_t_625833361");
      Leg_65.add_attribute("MMY", "1649108930"); // 2
      Leg_65_set.insert("1649108930");
      Leg_65.add_attribute("Mat", "LegMaturityDate_t_160286454"); // 2
      Leg_65_set.insert("LegMaturityDate_t_160286454");
      Leg_65.add_attribute("MatTm", "679467993"); // 2
      Leg_65_set.insert("679467993");
      Leg_65.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1133701813"); // 2
      Leg_65_set.insert("LegCouponPaymentDate_t_1133701813");
      Leg_65.add_attribute("Issued", "LegIssueDate_t_1289233383"); // 2
      Leg_65_set.insert("LegIssueDate_t_1289233383");
      Leg_65.add_attribute("RepoCollSecTyp", "1691774514"); // 2
      Leg_65_set.insert("1691774514");
      Leg_65.add_attribute("RepoTrm", "2116477956"); // 2
      Leg_65_set.insert("2116477956");
      Leg_65.add_attribute("RepoRt", "1119721.270000"); // 2
      Leg_65_set.insert("1119721.270000");
      Leg_65.add_attribute("Fctr", "20838021.560000"); // 2
      Leg_65_set.insert("20838021.560000");
      Leg_65.add_attribute("CrdRtg", "LegCreditRating_t_1203571726"); // 2
      Leg_65_set.insert("LegCreditRating_t_1203571726");
      Leg_65.add_attribute("Rgstry", "LegInstrRegistry_t_35848287"); // 2
      Leg_65_set.insert("LegInstrRegistry_t_35848287");
      Leg_65.add_attribute("Ctry", "891493843"); // 2
      Leg_65_set.insert("891493843");
      Leg_65.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_94279362"); // 2
      Leg_65_set.insert("LegStateOrProvinceOfIssue_t_94279362");
      Leg_65.add_attribute("Lcl", "LegLocaleOfIssue_t_1878163690"); // 2
      Leg_65_set.insert("LegLocaleOfIssue_t_1878163690");
      Leg_65.add_attribute("Redeem", "LegRedemptionDate_t_457199918"); // 2
      Leg_65_set.insert("LegRedemptionDate_t_457199918");
      Leg_65.add_attribute("Strk", "14508933.730000"); // 2
      Leg_65_set.insert("14508933.730000");
      Leg_65.add_attribute("StrkCcy", "USD"); // 2
      Leg_65_set.insert("USD");
      Leg_65.add_attribute("OptA", "557654962"); // 2
      Leg_65_set.insert("557654962");
      Leg_65.add_attribute("Cmult", "19122752.540000"); // 2
      Leg_65_set.insert("19122752.540000");
      Leg_65.add_attribute("MultTyp", "2"); // 2
      Leg_65_set.insert("2");
      Leg_65.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_65_set.insert("1");
      Leg_65.add_attribute("UOM", "Bcf"); // 2
      Leg_65_set.insert("Bcf");
      Leg_65.add_attribute("UOMQty", "9520599.270000"); // 2
      Leg_65_set.insert("9520599.270000");
      Leg_65.add_attribute("PxUOM", "USD"); // 2
      Leg_65_set.insert("USD");
      Leg_65.add_attribute("PxUOMQty", "10638867.680000"); // 2
      Leg_65_set.insert("10638867.680000");
      Leg_65.add_attribute("TmUnit", "D"); // 2
      Leg_65_set.insert("D");
      Leg_65.add_attribute("ExerStyle", "2"); // 2
      Leg_65_set.insert("2");
      Leg_65.add_attribute("CpnRt", "4807215.790000"); // 2
      Leg_65_set.insert("4807215.790000");
      Leg_65.add_attribute("Exch", "LegSecurityExchange_t_894797538"); // 2
      Leg_65_set.insert("LegSecurityExchange_t_894797538");
      Leg_65.add_attribute("Issr", "LegIssuer_t_52815334"); // 2
      Leg_65_set.insert("LegIssuer_t_52815334");
      Leg_65.add_attribute("EncLegIssrLen", "2129830509"); // 2
      Leg_65_set.insert("2129830509");
      Leg_65.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1055083992"); // 2
      Leg_65_set.insert("EncodedLegIssuer_t_1055083992");
      Leg_65.add_attribute("Desc", "LegSecurityDesc_t_732283327"); // 2
      Leg_65_set.insert("LegSecurityDesc_t_732283327");
      Leg_65.add_attribute("EncLegSecDescLen", "1116048674"); // 2
      Leg_65_set.insert("1116048674");
      Leg_65.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_196833727"); // 2
      Leg_65_set.insert("EncodedLegSecurityDesc_t_196833727");
      Leg_65.add_attribute("RatioQty", "2765741.940000"); // 2
      Leg_65_set.insert("2765741.940000");
      Leg_65.add_attribute("Side", "8"); // 2
      Leg_65_set.insert("8");
      Leg_65.add_attribute("Ccy", "USD"); // 2
      Leg_65_set.insert("USD");
      Leg_65.add_attribute("Pool", "LegPool_t_141131061"); // 2
      Leg_65_set.insert("LegPool_t_141131061");
      Leg_65.add_attribute("Dated", "LegDatedDate_t_344654141"); // 2
      Leg_65_set.insert("LegDatedDate_t_344654141");
      Leg_65.add_attribute("CSetMo", "1104386545"); // 2
      Leg_65_set.insert("1104386545");
      Leg_65.add_attribute("IntAcrl", "LegInterestAccrualDate_t_235410423"); // 2
      Leg_65_set.insert("LegInterestAccrualDate_t_235410423");
      Leg_65.add_attribute("PutCall", "75334183"); // 2
      Leg_65_set.insert("75334183");
      Leg_65.add_attribute("LegOptionRatio", "15615864.640000"); // 2
      Leg_65_set.insert("15615864.640000");
      Leg_65.add_attribute("Px", "16863037.960000"); // 2
      Leg_65_set.insert("16863037.960000");
      all_values.push_back(Leg_65_set);
      all_compo_names.insert("Leg_65_set");

      {
        xml_element LegAID_65{"LegAID"};
        multiset<string> LegAID_65_set;
        LegAID_65.add_attribute("SecAltID", "LegSecurityAltID_t_434548301"); // 3
        LegAID_65_set.insert("LegSecurityAltID_t_434548301");
        LegAID_65.add_attribute("SecAltIDSrc", "9"); // 3
        LegAID_65_set.insert("9");
        all_values.push_back(LegAID_65_set);
        all_compo_names.insert("LegAID_65_set");

        Leg_65.add_element(LegAID_65);
      }
      Quot_1.add_element(Leg_65);
    }
    {
      xml_element Stip_123{"Stip"};
      multiset<string> Stip_123_set;
      Stip_123.add_attribute("StipTyp", "INTERNALPX"); // 2
      Stip_123_set.insert("INTERNALPX");
      Stip_123.add_attribute("StipVal", "LegStipulationValue_t_199339907"); // 2
      Stip_123_set.insert("LegStipulationValue_t_199339907");
      all_values.push_back(Stip_123_set);
      all_compo_names.insert("Stip_123_set");

      Quot_1.add_element(Stip_123);
    }
    {
      xml_element Pty_303{"Pty"};
      multiset<string> Pty_303_set;
      Pty_303.add_attribute("ID", "NestedPartyID_t_1238460172"); // 2
      Pty_303_set.insert("NestedPartyID_t_1238460172");
      Pty_303.add_attribute("Src", "G"); // 2
      Pty_303_set.insert("G");
      Pty_303.add_attribute("R", "51"); // 2
      Pty_303_set.insert("51");
      all_values.push_back(Pty_303_set);
      all_compo_names.insert("Pty_303_set");

      {
        xml_element Sub_303{"Sub"};
        multiset<string> Sub_303_set;
        Sub_303.add_attribute("ID", "NestedPartySubID_t_43036451"); // 3
        Sub_303_set.insert("NestedPartySubID_t_43036451");
        Sub_303.add_attribute("Typ", "5"); // 3
        Sub_303_set.insert("5");
        all_values.push_back(Sub_303_set);
        all_compo_names.insert("Sub_303_set");

        Pty_303.add_element(Sub_303);
      }
      Quot_1.add_element(Pty_303);
    }
    {
      xml_element BnchmkCurve_1{"BnchmkCurve"};
      multiset<string> BnchmkCurve_1_set;
      BnchmkCurve_1.add_attribute("Ccy", "CAN"); // 2
      BnchmkCurve_1_set.insert("CAN");
      BnchmkCurve_1.add_attribute("Name", "LIBID"); // 2
      BnchmkCurve_1_set.insert("LIBID");
      BnchmkCurve_1.add_attribute("Point", "LegBenchmarkCurvePoint_t_1625221516"); // 2
      BnchmkCurve_1_set.insert("LegBenchmarkCurvePoint_t_1625221516");
      BnchmkCurve_1.add_attribute("Px", "16388689.070000"); // 2
      BnchmkCurve_1_set.insert("16388689.070000");
      BnchmkCurve_1.add_attribute("PxTyp", "59956898"); // 2
      BnchmkCurve_1_set.insert("59956898");
      all_values.push_back(BnchmkCurve_1_set);
      all_compo_names.insert("BnchmkCurve_1_set");

      Quot_1.add_element(BnchmkCurve_1);
    }
    elt.add_element(Quot_1);
  } // end Quot
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_19{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_19_set;
    SprdBnchmkCurve_19.add_attribute("Spread", "16075683.780000"); // 1
    SprdBnchmkCurve_19_set.insert("16075683.780000");
    SprdBnchmkCurve_19.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_19_set.insert("JPY");
    SprdBnchmkCurve_19.add_attribute("Name", "EONIA"); // 1
    SprdBnchmkCurve_19_set.insert("EONIA");
    SprdBnchmkCurve_19.add_attribute("Point", "BenchmarkCurvePoint_t_743302978"); // 1
    SprdBnchmkCurve_19_set.insert("BenchmarkCurvePoint_t_743302978");
    SprdBnchmkCurve_19.add_attribute("Px", "10688144.200000"); // 1
    SprdBnchmkCurve_19_set.insert("10688144.200000");
    SprdBnchmkCurve_19.add_attribute("PxTyp", "10"); // 1
    SprdBnchmkCurve_19_set.insert("10");
    SprdBnchmkCurve_19.add_attribute("SecID", "BenchmarkSecurityID_t_1052108832"); // 1
    SprdBnchmkCurve_19_set.insert("BenchmarkSecurityID_t_1052108832");
    SprdBnchmkCurve_19.add_attribute("SecIDSrc", "F"); // 1
    SprdBnchmkCurve_19_set.insert("F");
    all_values.push_back(SprdBnchmkCurve_19_set);
    all_compo_names.insert("SprdBnchmkCurve_19_set");

    elt.add_element(SprdBnchmkCurve_19);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_14{"Yield"};
    multiset<string> Yield_14_set;
    Yield_14.add_attribute("Typ", "NEXTREFUND"); // 1
    Yield_14_set.insert("NEXTREFUND");
    Yield_14.add_attribute("Yld", "13967629.730000"); // 1
    Yield_14_set.insert("13967629.730000");
    Yield_14.add_attribute("CalcDt", "YieldCalcDate_t_238610019"); // 1
    Yield_14_set.insert("YieldCalcDate_t_238610019");
    Yield_14.add_attribute("RedDt", "YieldRedemptionDate_t_2037717872"); // 1
    Yield_14_set.insert("YieldRedemptionDate_t_2037717872");
    Yield_14.add_attribute("RedPx", "14720971.560000"); // 1
    Yield_14_set.insert("14720971.560000");
    Yield_14.add_attribute("RedPxTyp", "15"); // 1
    Yield_14_set.insert("15");
    all_values.push_back(Yield_14_set);
    all_compo_names.insert("Yield_14_set");

    elt.add_element(Yield_14);
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
