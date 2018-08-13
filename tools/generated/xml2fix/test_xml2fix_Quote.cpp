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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Quot" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Quote_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_1926502539"); // 0
  Quote_message_t_0.insert("QuoteReqID_t_1926502539");
  elt.add_attribute("QID", "QuoteID_t_1822527052"); // 0
  Quote_message_t_0.insert("QuoteID_t_1822527052");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_102237963"); // 0
  Quote_message_t_0.insert("QuoteMsgID_t_102237963");
  elt.add_attribute("RspID", "QuoteRespID_t_871123464"); // 0
  Quote_message_t_0.insert("QuoteRespID_t_871123464");
  elt.add_attribute("Typ", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("PrvtQt", "false"); // 0
  Quote_message_t_0.insert("false");
  elt.add_attribute("RspLvl", "3"); // 0
  Quote_message_t_0.insert("3");
  elt.add_attribute("SesID", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("SesSub", "4"); // 0
  Quote_message_t_0.insert("4");
  elt.add_attribute("Side", "F"); // 0
  Quote_message_t_0.insert("F");
  elt.add_attribute("SettlTyp", "8"); // 0
  Quote_message_t_0.insert("8");
  elt.add_attribute("SettlDt", "SettlDate_t_653252906"); // 0
  Quote_message_t_0.insert("SettlDate_t_653252906");
  elt.add_attribute("SettlDt2", "SettlDate2_t_463733388"); // 0
  Quote_message_t_0.insert("SettlDate2_t_463733388");
  elt.add_attribute("Qty2", "19860489.350000"); // 0
  Quote_message_t_0.insert("19860489.350000");
  elt.add_attribute("Ccy", "JPY"); // 0
  Quote_message_t_0.insert("JPY");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  Quote_message_t_0.insert("JPY");
  elt.add_attribute("Acct", "Account_t_771732472"); // 0
  Quote_message_t_0.insert("Account_t_771732472");
  elt.add_attribute("AcctIDSrc", "4"); // 0
  Quote_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "3"); // 0
  Quote_message_t_0.insert("3");
  elt.add_attribute("BidPx", "20783883.280000"); // 0
  Quote_message_t_0.insert("20783883.280000");
  elt.add_attribute("OfrPx", "9661193.850000"); // 0
  Quote_message_t_0.insert("9661193.850000");
  elt.add_attribute("MktBidPx", "18446097.940000"); // 0
  Quote_message_t_0.insert("18446097.940000");
  elt.add_attribute("MktOfrPx", "16532662.330000"); // 0
  Quote_message_t_0.insert("16532662.330000");
  elt.add_attribute("MinBidSz", "12541138.280000"); // 0
  Quote_message_t_0.insert("12541138.280000");
  elt.add_attribute("BidSz", "1446808.580000"); // 0
  Quote_message_t_0.insert("1446808.580000");
  elt.add_attribute("MinOfrSz", "2792435.840000"); // 0
  Quote_message_t_0.insert("2792435.840000");
  elt.add_attribute("OfrSz", "13650798.380000"); // 0
  Quote_message_t_0.insert("13650798.380000");
  elt.add_attribute("MinQty", "15413600.060000"); // 0
  Quote_message_t_0.insert("15413600.060000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_1438982690"); // 0
  Quote_message_t_0.insert("ValidUntilTime_t_1438982690");
  elt.add_attribute("BidSpotRt", "11440987.300000"); // 0
  Quote_message_t_0.insert("11440987.300000");
  elt.add_attribute("OfrSpotRt", "12164034.100000"); // 0
  Quote_message_t_0.insert("12164034.100000");
  elt.add_attribute("BidFwdPnts", "15412206.530000"); // 0
  Quote_message_t_0.insert("15412206.530000");
  elt.add_attribute("OfrFwdPnts", "20152221.940000"); // 0
  Quote_message_t_0.insert("20152221.940000");
  elt.add_attribute("BidSwapPnts", "2308201.240000"); // 0
  Quote_message_t_0.insert("2308201.240000");
  elt.add_attribute("OfrSwapPnts", "18793380.000000"); // 0
  Quote_message_t_0.insert("18793380.000000");
  elt.add_attribute("MidPx", "2977134.730000"); // 0
  Quote_message_t_0.insert("2977134.730000");
  elt.add_attribute("BidYld", "8275942.540000"); // 0
  Quote_message_t_0.insert("8275942.540000");
  elt.add_attribute("MidYld", "11395706.590000"); // 0
  Quote_message_t_0.insert("11395706.590000");
  elt.add_attribute("OfrYld", "17804703.360000"); // 0
  Quote_message_t_0.insert("17804703.360000");
  elt.add_attribute("TxnTm", "TransactTime_t_2076580506"); // 0
  Quote_message_t_0.insert("TransactTime_t_2076580506");
  elt.add_attribute("OrdTyp", "M"); // 0
  Quote_message_t_0.insert("M");
  elt.add_attribute("BidFwdPnts2", "967200.760000"); // 0
  Quote_message_t_0.insert("967200.760000");
  elt.add_attribute("OfrFwdPnts2", "19151457.940000"); // 0
  Quote_message_t_0.insert("19151457.940000");
  elt.add_attribute("SettlCurrBidFxRt", "15459441.970000"); // 0
  Quote_message_t_0.insert("15459441.970000");
  elt.add_attribute("SettlCurrOfrFxRt", "3779449.700000"); // 0
  Quote_message_t_0.insert("3779449.700000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  Quote_message_t_0.insert("D");
  elt.add_attribute("CommTyp", "6"); // 0
  Quote_message_t_0.insert("6");
  elt.add_attribute("Comm", "Commission_t_1149677442"); // 0
  Quote_message_t_0.insert("Commission_t_1149677442");
  elt.add_attribute("CustCpcty", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("ExDest", "ExDestination_t_525078699"); // 0
  Quote_message_t_0.insert("ExDestination_t_525078699");
  elt.add_attribute("ExDestIDSrc", "D"); // 0
  Quote_message_t_0.insert("D");
  elt.add_attribute("BkngTyp", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("Cpcty", "W"); // 0
  Quote_message_t_0.insert("W");
  elt.add_attribute("Rstctions", "8"); // 0
  Quote_message_t_0.insert("8");
  elt.add_attribute("PxTyp", "8"); // 0
  Quote_message_t_0.insert("8");
  elt.add_attribute("Txt", "Text_t_366885703"); // 0
  Quote_message_t_0.insert("Text_t_366885703");
  elt.add_attribute("EncTxtLen", "865608292"); // 0
  Quote_message_t_0.insert("865608292");
  elt.add_attribute("EncTxt", "EncodedText_t_824737756"); // 0
  Quote_message_t_0.insert("EncodedText_t_824737756");
  all_values.push_back(Quote_message_t_0);
  all_compo_names.insert("Quote_message_t");

  { // Hdr
    xml_element Hdr_68{"Hdr"};
    multiset<string> Hdr_68_set;
    Hdr_68.add_attribute("SeqNum", "1908245709"); // 1
    Hdr_68_set.insert("1908245709");
    Hdr_68.add_attribute("SID", "SenderCompID_t_157107334"); // 1
    Hdr_68_set.insert("SenderCompID_t_157107334");
    Hdr_68.add_attribute("TID", "TargetCompID_t_1968836486"); // 1
    Hdr_68_set.insert("TargetCompID_t_1968836486");
    Hdr_68.add_attribute("OBID", "OnBehalfOfCompID_t_977165472"); // 1
    Hdr_68_set.insert("OnBehalfOfCompID_t_977165472");
    Hdr_68.add_attribute("D2ID", "DeliverToCompID_t_1698327987"); // 1
    Hdr_68_set.insert("DeliverToCompID_t_1698327987");
    Hdr_68.add_attribute("SSub", "SenderSubID_t_1836575032"); // 1
    Hdr_68_set.insert("SenderSubID_t_1836575032");
    Hdr_68.add_attribute("SLoc", "SenderLocationID_t_1207985596"); // 1
    Hdr_68_set.insert("SenderLocationID_t_1207985596");
    Hdr_68.add_attribute("TSub", "TargetSubID_t_1430182339"); // 1
    Hdr_68_set.insert("TargetSubID_t_1430182339");
    Hdr_68.add_attribute("TLoc", "TargetLocationID_t_2134288505"); // 1
    Hdr_68_set.insert("TargetLocationID_t_2134288505");
    Hdr_68.add_attribute("OBSub", "OnBehalfOfSubID_t_2035579850"); // 1
    Hdr_68_set.insert("OnBehalfOfSubID_t_2035579850");
    Hdr_68.add_attribute("OBLoc", "OnBehalfOfLocationID_t_422269350"); // 1
    Hdr_68_set.insert("OnBehalfOfLocationID_t_422269350");
    Hdr_68.add_attribute("D2Sub", "DeliverToSubID_t_1767275193"); // 1
    Hdr_68_set.insert("DeliverToSubID_t_1767275193");
    Hdr_68.add_attribute("D2Loc", "DeliverToLocationID_t_1964676709"); // 1
    Hdr_68_set.insert("DeliverToLocationID_t_1964676709");
    Hdr_68.add_attribute("PosDup", "Y"); // 1
    Hdr_68_set.insert("Y");
    Hdr_68.add_attribute("PosRsnd", "Y"); // 1
    Hdr_68_set.insert("Y");
    Hdr_68.add_attribute("Snt", "SendingTime_t_1732338855"); // 1
    Hdr_68_set.insert("SendingTime_t_1732338855");
    Hdr_68.add_attribute("OrigSnt", "OrigSendingTime_t_1613553464"); // 1
    Hdr_68_set.insert("OrigSendingTime_t_1613553464");
    Hdr_68.add_attribute("MsgEncd", "MessageEncoding_t_94456591"); // 1
    Hdr_68_set.insert("MessageEncoding_t_94456591");
    all_values.push_back(Hdr_68_set);
    all_compo_names.insert("Hdr_68_set");

    {
      xml_element Hop_68{"Hop"};
      multiset<string> Hop_68_set;
      Hop_68.add_attribute("ID", "HopCompID_t_1658015928"); // 2
      Hop_68_set.insert("HopCompID_t_1658015928");
      Hop_68.add_attribute("Ref", "1235085083"); // 2
      Hop_68_set.insert("1235085083");
      Hop_68.add_attribute("Snt", "HopSendingTime_t_1244134033"); // 2
      Hop_68_set.insert("HopSendingTime_t_1244134033");
      all_values.push_back(Hop_68_set);
      all_compo_names.insert("Hop_68_set");

      Hdr_68.add_element(Hop_68);
    }
    elt.add_element(Hdr_68);
  } // end Hdr
  { // QuotQual
    xml_element QuotQual_0{"QuotQual"};
    multiset<string> QuotQual_0_set;
    QuotQual_0.add_attribute("Qual", "X"); // 1
    QuotQual_0_set.insert("X");
    all_values.push_back(QuotQual_0_set);
    all_compo_names.insert("QuotQual_0_set");

    elt.add_element(QuotQual_0);
  } // end QuotQual
  { // QuotQual
    xml_element QuotQual_1{"QuotQual"};
    multiset<string> QuotQual_1_set;
    QuotQual_1.add_attribute("Qual", "O"); // 1
    QuotQual_1_set.insert("O");
    all_values.push_back(QuotQual_1_set);
    all_compo_names.insert("QuotQual_1_set");

    elt.add_element(QuotQual_1);
  } // end QuotQual
  { // Pty
    xml_element Pty_315{"Pty"};
    multiset<string> Pty_315_set;
    Pty_315.add_attribute("ID", "PartyID_t_1982368628"); // 1
    Pty_315_set.insert("PartyID_t_1982368628");
    Pty_315.add_attribute("Src", "A"); // 1
    Pty_315_set.insert("A");
    Pty_315.add_attribute("R", "16"); // 1
    Pty_315_set.insert("16");
    all_values.push_back(Pty_315_set);
    all_compo_names.insert("Pty_315_set");

    {
      xml_element Sub_315{"Sub"};
      multiset<string> Sub_315_set;
      Sub_315.add_attribute("ID", "PartySubID_t_201770684"); // 2
      Sub_315_set.insert("PartySubID_t_201770684");
      Sub_315.add_attribute("Typ", "29"); // 2
      Sub_315_set.insert("29");
      all_values.push_back(Sub_315_set);
      all_compo_names.insert("Sub_315_set");

      Pty_315.add_element(Sub_315);
    }
    elt.add_element(Pty_315);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_58{"Instrmt"};
    multiset<string> Instrmt_58_set;
    Instrmt_58.add_attribute("Sym", "Symbol_t_1682347691"); // 1
    Instrmt_58_set.insert("Symbol_t_1682347691");
    Instrmt_58.add_attribute("Sfx", "WI"); // 1
    Instrmt_58_set.insert("WI");
    Instrmt_58.add_attribute("ID", "SecurityID_t_1786312841"); // 1
    Instrmt_58_set.insert("SecurityID_t_1786312841");
    Instrmt_58.add_attribute("Src", "2"); // 1
    Instrmt_58_set.insert("2");
    Instrmt_58.add_attribute("Prod", "12"); // 1
    Instrmt_58_set.insert("12");
    Instrmt_58.add_attribute("ProdCmplx", "ProductComplex_t_1337157180"); // 1
    Instrmt_58_set.insert("ProductComplex_t_1337157180");
    Instrmt_58.add_attribute("SecGrp", "SecurityGroup_t_1192791913"); // 1
    Instrmt_58_set.insert("SecurityGroup_t_1192791913");
    Instrmt_58.add_attribute("CFI", "CFICode_t_200165"); // 1
    Instrmt_58_set.insert("CFICode_t_200165");
    Instrmt_58.add_attribute("SecTyp", "BDN"); // 1
    Instrmt_58_set.insert("BDN");
    Instrmt_58.add_attribute("SubTyp", "SecuritySubType_t_1179596771"); // 1
    Instrmt_58_set.insert("SecuritySubType_t_1179596771");
    Instrmt_58.add_attribute("MMY", "2035780016"); // 1
    Instrmt_58_set.insert("2035780016");
    Instrmt_58.add_attribute("MatDt", "MaturityDate_t_1042125222"); // 1
    Instrmt_58_set.insert("MaturityDate_t_1042125222");
    Instrmt_58.add_attribute("MatTm", "799388316"); // 1
    Instrmt_58_set.insert("799388316");
    Instrmt_58.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1852973077"); // 1
    Instrmt_58_set.insert("SettleOnOpenFlag_t_1852973077");
    Instrmt_58.add_attribute("AsgnMeth", "1109734489"); // 1
    Instrmt_58_set.insert("1109734489");
    Instrmt_58.add_attribute("Status", "1"); // 1
    Instrmt_58_set.insert("1");
    Instrmt_58.add_attribute("CpnPmt", "CouponPaymentDate_t_1437828284"); // 1
    Instrmt_58_set.insert("CouponPaymentDate_t_1437828284");
    Instrmt_58.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_58_set.insert("MM");
    Instrmt_58.add_attribute("Snrty", "SR"); // 1
    Instrmt_58_set.insert("SR");
    Instrmt_58.add_attribute("NotlPctOut", "9483605.640000"); // 1
    Instrmt_58_set.insert("9483605.640000");
    Instrmt_58.add_attribute("OrigNotlPctOut", "18108893.890000"); // 1
    Instrmt_58_set.insert("18108893.890000");
    Instrmt_58.add_attribute("AttchPnt", "18544905.630000"); // 1
    Instrmt_58_set.insert("18544905.630000");
    Instrmt_58.add_attribute("DetchPnt", "19932848.440000"); // 1
    Instrmt_58_set.insert("19932848.440000");
    Instrmt_58.add_attribute("Issued", "IssueDate_t_1423569524"); // 1
    Instrmt_58_set.insert("IssueDate_t_1423569524");
    Instrmt_58.add_attribute("RepoCollSecTyp", "2031723070"); // 1
    Instrmt_58_set.insert("2031723070");
    Instrmt_58.add_attribute("RepoTrm", "1243753214"); // 1
    Instrmt_58_set.insert("1243753214");
    Instrmt_58.add_attribute("RepoRt", "12584545.050000"); // 1
    Instrmt_58_set.insert("12584545.050000");
    Instrmt_58.add_attribute("Fctr", "6478366.370000"); // 1
    Instrmt_58_set.insert("6478366.370000");
    Instrmt_58.add_attribute("CrdRtg", "CreditRating_t_2101363150"); // 1
    Instrmt_58_set.insert("CreditRating_t_2101363150");
    Instrmt_58.add_attribute("Rgstry", "InstrRegistry_t_1460225189"); // 1
    Instrmt_58_set.insert("InstrRegistry_t_1460225189");
    Instrmt_58.add_attribute("IssuCtry", "129558496"); // 1
    Instrmt_58_set.insert("129558496");
    Instrmt_58.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1636227193"); // 1
    Instrmt_58_set.insert("StateOrProvinceOfIssue_t_1636227193");
    Instrmt_58.add_attribute("Lcl", "LocaleOfIssue_t_1422757934"); // 1
    Instrmt_58_set.insert("LocaleOfIssue_t_1422757934");
    Instrmt_58.add_attribute("Redeem", "RedemptionDate_t_1915871337"); // 1
    Instrmt_58_set.insert("RedemptionDate_t_1915871337");
    Instrmt_58.add_attribute("StrkPx", "9924440.750000"); // 1
    Instrmt_58_set.insert("9924440.750000");
    Instrmt_58.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_58_set.insert("EUR");
    Instrmt_58.add_attribute("StrkMult", "377523.400000"); // 1
    Instrmt_58_set.insert("377523.400000");
    Instrmt_58.add_attribute("StrkValu", "2151726.690000"); // 1
    Instrmt_58_set.insert("2151726.690000");
    Instrmt_58.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_58_set.insert("2");
    Instrmt_58.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_58_set.insert("2");
    Instrmt_58.add_attribute("StrkPxBndryPrcsn", "1034690.370000"); // 1
    Instrmt_58_set.insert("1034690.370000");
    Instrmt_58.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_58_set.insert("4");
    Instrmt_58.add_attribute("OptAt", "2016737428"); // 1
    Instrmt_58_set.insert("2016737428");
    Instrmt_58.add_attribute("Mult", "19564421.140000"); // 1
    Instrmt_58_set.insert("19564421.140000");
    Instrmt_58.add_attribute("MultTyp", "0"); // 1
    Instrmt_58_set.insert("0");
    Instrmt_58.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_58_set.insert("3");
    Instrmt_58.add_attribute("MinPxIncr", "12467867.500000"); // 1
    Instrmt_58_set.insert("12467867.500000");
    Instrmt_58.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_158097462"); // 1
    Instrmt_58_set.insert("MinPriceIncrementAmount_t_158097462");
    Instrmt_58.add_attribute("UOM", "t"); // 1
    Instrmt_58_set.insert("t");
    Instrmt_58.add_attribute("UOMQty", "476636.660000"); // 1
    Instrmt_58_set.insert("476636.660000");
    Instrmt_58.add_attribute("PxUOM", "MMBtu"); // 1
    Instrmt_58_set.insert("MMBtu");
    Instrmt_58.add_attribute("PxUOMQty", "7025171.620000"); // 1
    Instrmt_58_set.insert("7025171.620000");
    Instrmt_58.add_attribute("SettlMeth", "P"); // 1
    Instrmt_58_set.insert("P");
    Instrmt_58.add_attribute("ExerStyle", "2"); // 1
    Instrmt_58_set.insert("2");
    Instrmt_58.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_58_set.insert("2");
    Instrmt_58.add_attribute("OptPayAmt", "OptPayoutAmount_t_1137218077"); // 1
    Instrmt_58_set.insert("OptPayoutAmount_t_1137218077");
    Instrmt_58.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_58_set.insert("INX");
    Instrmt_58.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_58_set.insert("FUTDA");
    Instrmt_58.add_attribute("ListMeth", "1"); // 1
    Instrmt_58_set.insert("1");
    Instrmt_58.add_attribute("CapPx", "18162687.740000"); // 1
    Instrmt_58_set.insert("18162687.740000");
    Instrmt_58.add_attribute("FlrPx", "13641517.190000"); // 1
    Instrmt_58_set.insert("13641517.190000");
    Instrmt_58.add_attribute("PutCall", "1"); // 1
    Instrmt_58_set.insert("1");
    Instrmt_58.add_attribute("FlexInd", "false"); // 1
    Instrmt_58_set.insert("false");
    Instrmt_58.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_58_set.insert("true");
    Instrmt_58.add_attribute("TmUnit", "D"); // 1
    Instrmt_58_set.insert("D");
    Instrmt_58.add_attribute("CpnRt", "13065155.650000"); // 1
    Instrmt_58_set.insert("13065155.650000");
    Instrmt_58.add_attribute("Exch", "SecurityExchange_t_90600630"); // 1
    Instrmt_58_set.insert("SecurityExchange_t_90600630");
    Instrmt_58.add_attribute("PosLmt", "1610037540"); // 1
    Instrmt_58_set.insert("1610037540");
    Instrmt_58.add_attribute("NTPosLmt", "1521688234"); // 1
    Instrmt_58_set.insert("1521688234");
    Instrmt_58.add_attribute("Issr", "Issuer_t_1816001371"); // 1
    Instrmt_58_set.insert("Issuer_t_1816001371");
    Instrmt_58.add_attribute("EncIssrLen", "679903004"); // 1
    Instrmt_58_set.insert("679903004");
    Instrmt_58.add_attribute("EncIssr", "EncodedIssuer_t_1625157272"); // 1
    Instrmt_58_set.insert("EncodedIssuer_t_1625157272");
    Instrmt_58.add_attribute("Desc", "SecurityDesc_t_288560038"); // 1
    Instrmt_58_set.insert("SecurityDesc_t_288560038");
    Instrmt_58.add_attribute("EncSecDescLen", "549156784"); // 1
    Instrmt_58_set.insert("549156784");
    Instrmt_58.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1434115738"); // 1
    Instrmt_58_set.insert("EncodedSecurityDesc_t_1434115738");
    Instrmt_58.add_attribute("Pool", "Pool_t_2018336842"); // 1
    Instrmt_58_set.insert("Pool_t_2018336842");
    Instrmt_58.add_attribute("CSetMo", "934310502"); // 1
    Instrmt_58_set.insert("934310502");
    Instrmt_58.add_attribute("CPPgm", "2"); // 1
    Instrmt_58_set.insert("2");
    Instrmt_58.add_attribute("CPRegT", "CPRegType_t_28950657"); // 1
    Instrmt_58_set.insert("CPRegType_t_28950657");
    Instrmt_58.add_attribute("Dated", "DatedDate_t_1929820749"); // 1
    Instrmt_58_set.insert("DatedDate_t_1929820749");
    Instrmt_58.add_attribute("IntAcrl", "InterestAccrualDate_t_581082507"); // 1
    Instrmt_58_set.insert("InterestAccrualDate_t_581082507");
    all_values.push_back(Instrmt_58_set);
    all_compo_names.insert("Instrmt_58_set");

    {
      xml_element AID_61{"AID"};
      multiset<string> AID_61_set;
      AID_61.add_attribute("AltID", "SecurityAltID_t_1997937509"); // 2
      AID_61_set.insert("SecurityAltID_t_1997937509");
      AID_61.add_attribute("AltIDSrc", "5"); // 2
      AID_61_set.insert("5");
      all_values.push_back(AID_61_set);
      all_compo_names.insert("AID_61_set");

      Instrmt_58.add_element(AID_61);
    }
    {
      xml_element SecXML_61{"SecXML"};
      multiset<string> SecXML_61_set;
      SecXML_61.add_attribute("Schema", "SecurityXMLSchema_t_474547370"); // 2
      SecXML_61_set.insert("SecurityXMLSchema_t_474547370");
      all_values.push_back(SecXML_61_set);
      all_compo_names.insert("SecXML_61_set");

      Instrmt_58.add_element(SecXML_61);
    }
    {
      xml_element Evnt_61{"Evnt"};
      multiset<string> Evnt_61_set;
      Evnt_61.add_attribute("EventTyp", "9"); // 2
      Evnt_61_set.insert("9");
      Evnt_61.add_attribute("Dt", "EventDate_t_1071610849"); // 2
      Evnt_61_set.insert("EventDate_t_1071610849");
      Evnt_61.add_attribute("Tm", "EventTime_t_1611765448"); // 2
      Evnt_61_set.insert("EventTime_t_1611765448");
      Evnt_61.add_attribute("Px", "14515701.750000"); // 2
      Evnt_61_set.insert("14515701.750000");
      Evnt_61.add_attribute("Txt", "EventText_t_158720423"); // 2
      Evnt_61_set.insert("EventText_t_158720423");
      all_values.push_back(Evnt_61_set);
      all_compo_names.insert("Evnt_61_set");

      Instrmt_58.add_element(Evnt_61);
    }
    {
      xml_element Pty_316{"Pty"};
      multiset<string> Pty_316_set;
      Pty_316.add_attribute("ID", "InstrumentPartyID_t_555379379"); // 2
      Pty_316_set.insert("InstrumentPartyID_t_555379379");
      Pty_316.add_attribute("Src", "4"); // 2
      Pty_316_set.insert("4");
      Pty_316.add_attribute("R", "30"); // 2
      Pty_316_set.insert("30");
      all_values.push_back(Pty_316_set);
      all_compo_names.insert("Pty_316_set");

      {
        xml_element Sub_316{"Sub"};
        multiset<string> Sub_316_set;
        Sub_316.add_attribute("ID", "InstrumentPartySubID_t_1135220504"); // 3
        Sub_316_set.insert("InstrumentPartySubID_t_1135220504");
        Sub_316.add_attribute("Typ", "10"); // 3
        Sub_316_set.insert("10");
        all_values.push_back(Sub_316_set);
        all_compo_names.insert("Sub_316_set");

        Pty_316.add_element(Sub_316);
      }
      Instrmt_58.add_element(Pty_316);
    }
    {
      xml_element CmplxEvnt_58{"CmplxEvnt"};
      multiset<string> CmplxEvnt_58_set;
      CmplxEvnt_58.add_attribute("Typ", "7"); // 2
      CmplxEvnt_58_set.insert("7");
      CmplxEvnt_58.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_560022056"); // 2
      CmplxEvnt_58_set.insert("ComplexOptPayoutAmount_t_560022056");
      CmplxEvnt_58.add_attribute("Px", "13709302.790000"); // 2
      CmplxEvnt_58_set.insert("13709302.790000");
      CmplxEvnt_58.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_58_set.insert("4");
      CmplxEvnt_58.add_attribute("PxBndryPrcsn", "225759.490000"); // 2
      CmplxEvnt_58_set.insert("225759.490000");
      CmplxEvnt_58.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_58_set.insert("3");
      CmplxEvnt_58.add_attribute("Cond", "1"); // 2
      CmplxEvnt_58_set.insert("1");
      all_values.push_back(CmplxEvnt_58_set);
      all_compo_names.insert("CmplxEvnt_58_set");

      {
        xml_element EvntDts_58{"EvntDts"};
        multiset<string> EvntDts_58_set;
        EvntDts_58.add_attribute("StartDt", "ComplexEventStartDate_t_702478953"); // 3
        EvntDts_58_set.insert("ComplexEventStartDate_t_702478953");
        EvntDts_58.add_attribute("EndDt", "ComplexEventEndDate_t_222808490"); // 3
        EvntDts_58_set.insert("ComplexEventEndDate_t_222808490");
        all_values.push_back(EvntDts_58_set);
        all_compo_names.insert("EvntDts_58_set");

        {
          xml_element EvntTms_58{"EvntTms"};
          multiset<string> EvntTms_58_set;
          EvntTms_58.add_attribute("StartTm", "555606294"); // 4
          EvntTms_58_set.insert("555606294");
          EvntTms_58.add_attribute("EndTm", "1251635737"); // 4
          EvntTms_58_set.insert("1251635737");
          all_values.push_back(EvntTms_58_set);
          all_compo_names.insert("EvntTms_58_set");

          EvntDts_58.add_element(EvntTms_58);
        }
        CmplxEvnt_58.add_element(EvntDts_58);
      }
      Instrmt_58.add_element(CmplxEvnt_58);
    }
    elt.add_element(Instrmt_58);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_16{"FinDetls"};
    multiset<string> FinDetls_16_set;
    FinDetls_16.add_attribute("AgmtDesc", "AgreementDesc_t_1656924228"); // 1
    FinDetls_16_set.insert("AgreementDesc_t_1656924228");
    FinDetls_16.add_attribute("AgmtID", "AgreementID_t_426459488"); // 1
    FinDetls_16_set.insert("AgreementID_t_426459488");
    FinDetls_16.add_attribute("AgmtDt", "AgreementDate_t_38462591"); // 1
    FinDetls_16_set.insert("AgreementDate_t_38462591");
    FinDetls_16.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_16_set.insert("CAN");
    FinDetls_16.add_attribute("TrmTyp", "1"); // 1
    FinDetls_16_set.insert("1");
    FinDetls_16.add_attribute("StartDt", "StartDate_t_623941929"); // 1
    FinDetls_16_set.insert("StartDate_t_623941929");
    FinDetls_16.add_attribute("EndDt", "EndDate_t_305864006"); // 1
    FinDetls_16_set.insert("EndDate_t_305864006");
    FinDetls_16.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_16_set.insert("0");
    FinDetls_16.add_attribute("MgnRatio", "10984892.990000"); // 1
    FinDetls_16_set.insert("10984892.990000");
    all_values.push_back(FinDetls_16_set);
    all_compo_names.insert("FinDetls_16_set");

    elt.add_element(FinDetls_16);
  } // end FinDetls
  { // Undly
    xml_element Undly_82{"Undly"};
    multiset<string> Undly_82_set;
    Undly_82.add_attribute("Sym", "UnderlyingSymbol_t_1377264805"); // 1
    Undly_82_set.insert("UnderlyingSymbol_t_1377264805");
    Undly_82.add_attribute("Sfx", "WI"); // 1
    Undly_82_set.insert("WI");
    Undly_82.add_attribute("ID", "UnderlyingSecurityID_t_705477123"); // 1
    Undly_82_set.insert("UnderlyingSecurityID_t_705477123");
    Undly_82.add_attribute("Src", "A"); // 1
    Undly_82_set.insert("A");
    Undly_82.add_attribute("Prod", "13"); // 1
    Undly_82_set.insert("13");
    Undly_82.add_attribute("CFI", "UnderlyingCFICode_t_1825832424"); // 1
    Undly_82_set.insert("UnderlyingCFICode_t_1825832424");
    Undly_82.add_attribute("SecTyp", "COFP"); // 1
    Undly_82_set.insert("COFP");
    Undly_82.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_105887335"); // 1
    Undly_82_set.insert("UnderlyingSecuritySubType_t_105887335");
    Undly_82.add_attribute("MMY", "1890247139"); // 1
    Undly_82_set.insert("1890247139");
    Undly_82.add_attribute("Mat", "UnderlyingMaturityDate_t_1419301626"); // 1
    Undly_82_set.insert("UnderlyingMaturityDate_t_1419301626");
    Undly_82.add_attribute("MatTm", "665909392"); // 1
    Undly_82_set.insert("665909392");
    Undly_82.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1113693770"); // 1
    Undly_82_set.insert("UnderlyingCouponPaymentDate_t_1113693770");
    Undly_82.add_attribute("RestrctTyp", "XR"); // 1
    Undly_82_set.insert("XR");
    Undly_82.add_attribute("Snrty", "SB"); // 1
    Undly_82_set.insert("SB");
    Undly_82.add_attribute("NotlPctOut", "18588286.360000"); // 1
    Undly_82_set.insert("18588286.360000");
    Undly_82.add_attribute("OrigNotlPctOut", "1373927.670000"); // 1
    Undly_82_set.insert("1373927.670000");
    Undly_82.add_attribute("AttchPnt", "13909642.940000"); // 1
    Undly_82_set.insert("13909642.940000");
    Undly_82.add_attribute("DetchPnt", "20816371.260000"); // 1
    Undly_82_set.insert("20816371.260000");
    Undly_82.add_attribute("Issued", "UnderlyingIssueDate_t_692999061"); // 1
    Undly_82_set.insert("UnderlyingIssueDate_t_692999061");
    Undly_82.add_attribute("RepoCollSecTyp", "495116383"); // 1
    Undly_82_set.insert("495116383");
    Undly_82.add_attribute("RepoTrm", "1591077707"); // 1
    Undly_82_set.insert("1591077707");
    Undly_82.add_attribute("RepoRt", "11194585.500000"); // 1
    Undly_82_set.insert("11194585.500000");
    Undly_82.add_attribute("Fctr", "5335789.740000"); // 1
    Undly_82_set.insert("5335789.740000");
    Undly_82.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1633937128"); // 1
    Undly_82_set.insert("UnderlyingCreditRating_t_1633937128");
    Undly_82.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1574868695"); // 1
    Undly_82_set.insert("UnderlyingInstrRegistry_t_1574868695");
    Undly_82.add_attribute("Ctry", "354378666"); // 1
    Undly_82_set.insert("354378666");
    Undly_82.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_110395409"); // 1
    Undly_82_set.insert("UnderlyingStateOrProvinceOfIssue_t_110395409");
    Undly_82.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1880732702"); // 1
    Undly_82_set.insert("UnderlyingLocaleOfIssue_t_1880732702");
    Undly_82.add_attribute("Redeem", "UnderlyingRedemptionDate_t_660032623"); // 1
    Undly_82_set.insert("UnderlyingRedemptionDate_t_660032623");
    Undly_82.add_attribute("StrkPx", "12088847.090000"); // 1
    Undly_82_set.insert("12088847.090000");
    Undly_82.add_attribute("StrkCcy", "GBP"); // 1
    Undly_82_set.insert("GBP");
    Undly_82.add_attribute("OptA", "1771655808"); // 1
    Undly_82_set.insert("1771655808");
    Undly_82.add_attribute("Mult", "18401167.730000"); // 1
    Undly_82_set.insert("18401167.730000");
    Undly_82.add_attribute("MultTyp", "1"); // 1
    Undly_82_set.insert("1");
    Undly_82.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_82_set.insert("4");
    Undly_82.add_attribute("UOM", "Gal"); // 1
    Undly_82_set.insert("Gal");
    Undly_82.add_attribute("UOMQty", "1896890.850000"); // 1
    Undly_82_set.insert("1896890.850000");
    Undly_82.add_attribute("PxUOM", "Bbl"); // 1
    Undly_82_set.insert("Bbl");
    Undly_82.add_attribute("PxUOMQty", "12612290.400000"); // 1
    Undly_82_set.insert("12612290.400000");
    Undly_82.add_attribute("TmUnit", "Yr"); // 1
    Undly_82_set.insert("Yr");
    Undly_82.add_attribute("ExerStyle", "2"); // 1
    Undly_82_set.insert("2");
    Undly_82.add_attribute("CpnRt", "2274391.630000"); // 1
    Undly_82_set.insert("2274391.630000");
    Undly_82.add_attribute("Exch", "UnderlyingSecurityExchange_t_1479337223"); // 1
    Undly_82_set.insert("UnderlyingSecurityExchange_t_1479337223");
    Undly_82.add_attribute("Issr", "UnderlyingIssuer_t_55121060"); // 1
    Undly_82_set.insert("UnderlyingIssuer_t_55121060");
    Undly_82.add_attribute("EncUndIssrLen", "2086267799"); // 1
    Undly_82_set.insert("2086267799");
    Undly_82.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1616729990"); // 1
    Undly_82_set.insert("EncodedUnderlyingIssuer_t_1616729990");
    Undly_82.add_attribute("Desc", "UnderlyingSecurityDesc_t_1446085354"); // 1
    Undly_82_set.insert("UnderlyingSecurityDesc_t_1446085354");
    Undly_82.add_attribute("EncUndSecDescLen", "2020421278"); // 1
    Undly_82_set.insert("2020421278");
    Undly_82.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_162245404"); // 1
    Undly_82_set.insert("EncodedUnderlyingSecurityDesc_t_162245404");
    Undly_82.add_attribute("CPPgm", "UnderlyingCPProgram_t_1941201737"); // 1
    Undly_82_set.insert("UnderlyingCPProgram_t_1941201737");
    Undly_82.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1464015337"); // 1
    Undly_82_set.insert("UnderlyingCPRegType_t_1464015337");
    Undly_82.add_attribute("AllocPct", "12817039.540000"); // 1
    Undly_82_set.insert("12817039.540000");
    Undly_82.add_attribute("Ccy", "CHF"); // 1
    Undly_82_set.insert("CHF");
    Undly_82.add_attribute("Qty", "7090890.010000"); // 1
    Undly_82_set.insert("7090890.010000");
    Undly_82.add_attribute("SettlTyp", "2"); // 1
    Undly_82_set.insert("2");
    Undly_82.add_attribute("CashAmt", "UnderlyingCashAmount_t_1060864227"); // 1
    Undly_82_set.insert("UnderlyingCashAmount_t_1060864227");
    Undly_82.add_attribute("CashTyp", "DIFF"); // 1
    Undly_82_set.insert("DIFF");
    Undly_82.add_attribute("Px", "13417083.520000"); // 1
    Undly_82_set.insert("13417083.520000");
    Undly_82.add_attribute("DirtPx", "1222652.880000"); // 1
    Undly_82_set.insert("1222652.880000");
    Undly_82.add_attribute("EndPx", "15769777.050000"); // 1
    Undly_82_set.insert("15769777.050000");
    Undly_82.add_attribute("StartVal", "UnderlyingStartValue_t_1231522133"); // 1
    Undly_82_set.insert("UnderlyingStartValue_t_1231522133");
    Undly_82.add_attribute("CurVal", "UnderlyingCurrentValue_t_1893921096"); // 1
    Undly_82_set.insert("UnderlyingCurrentValue_t_1893921096");
    Undly_82.add_attribute("EndVal", "UnderlyingEndValue_t_1269610830"); // 1
    Undly_82_set.insert("UnderlyingEndValue_t_1269610830");
    Undly_82.add_attribute("AdjQty", "5098374.940000"); // 1
    Undly_82_set.insert("5098374.940000");
    Undly_82.add_attribute("FxRate", "4887600.880000"); // 1
    Undly_82_set.insert("4887600.880000");
    Undly_82.add_attribute("FxRateCalc", "M"); // 1
    Undly_82_set.insert("M");
    Undly_82.add_attribute("CapValu", "UnderlyingCapValue_t_699526579"); // 1
    Undly_82_set.insert("UnderlyingCapValue_t_699526579");
    Undly_82.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1336970063"); // 1
    Undly_82_set.insert("UnderlyingSettlMethod_t_1336970063");
    Undly_82.add_attribute("PutCall", "1901821772"); // 1
    Undly_82_set.insert("1901821772");
    all_values.push_back(Undly_82_set);
    all_compo_names.insert("Undly_82_set");

    {
      xml_element UndAID_82{"UndAID"};
      multiset<string> UndAID_82_set;
      UndAID_82.add_attribute("AltID", "UnderlyingSecurityAltID_t_161033643"); // 2
      UndAID_82_set.insert("UnderlyingSecurityAltID_t_161033643");
      UndAID_82.add_attribute("AltIDSrc", "1"); // 2
      UndAID_82_set.insert("1");
      all_values.push_back(UndAID_82_set);
      all_compo_names.insert("UndAID_82_set");

      Undly_82.add_element(UndAID_82);
    }
    {
      xml_element Stip_120{"Stip"};
      multiset<string> Stip_120_set;
      Stip_120.add_attribute("Typ", "WAL"); // 2
      Stip_120_set.insert("WAL");
      Stip_120.add_attribute("Val", "UnderlyingStipValue_t_1640370866"); // 2
      Stip_120_set.insert("UnderlyingStipValue_t_1640370866");
      all_values.push_back(Stip_120_set);
      all_compo_names.insert("Stip_120_set");

      Undly_82.add_element(Stip_120);
    }
    {
      xml_element Pty_317{"Pty"};
      multiset<string> Pty_317_set;
      Pty_317.add_attribute("ID", "UnderlyingInstrumentPartyID_t_758726842"); // 2
      Pty_317_set.insert("UnderlyingInstrumentPartyID_t_758726842");
      Pty_317.add_attribute("Src", "E"); // 2
      Pty_317_set.insert("E");
      Pty_317.add_attribute("R", "59"); // 2
      Pty_317_set.insert("59");
      all_values.push_back(Pty_317_set);
      all_compo_names.insert("Pty_317_set");

      {
        xml_element Sub_317{"Sub"};
        multiset<string> Sub_317_set;
        Sub_317.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_57328548"); // 3
        Sub_317_set.insert("UnderlyingInstrumentPartySubID_t_57328548");
        Sub_317.add_attribute("Typ", "12"); // 3
        Sub_317_set.insert("12");
        all_values.push_back(Sub_317_set);
        all_compo_names.insert("Sub_317_set");

        Pty_317.add_element(Sub_317);
      }
      Undly_82.add_element(Pty_317);
    }
    elt.add_element(Undly_82);
  } // end Undly
  { // Undly
    xml_element Undly_83{"Undly"};
    multiset<string> Undly_83_set;
    Undly_83.add_attribute("Sym", "UnderlyingSymbol_t_1271862612"); // 1
    Undly_83_set.insert("UnderlyingSymbol_t_1271862612");
    Undly_83.add_attribute("Sfx", "WI"); // 1
    Undly_83_set.insert("WI");
    Undly_83.add_attribute("ID", "UnderlyingSecurityID_t_1257514406"); // 1
    Undly_83_set.insert("UnderlyingSecurityID_t_1257514406");
    Undly_83.add_attribute("Src", "B"); // 1
    Undly_83_set.insert("B");
    Undly_83.add_attribute("Prod", "11"); // 1
    Undly_83_set.insert("11");
    Undly_83.add_attribute("CFI", "UnderlyingCFICode_t_60499575"); // 1
    Undly_83_set.insert("UnderlyingCFICode_t_60499575");
    Undly_83.add_attribute("SecTyp", "REPO"); // 1
    Undly_83_set.insert("REPO");
    Undly_83.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_860019429"); // 1
    Undly_83_set.insert("UnderlyingSecuritySubType_t_860019429");
    Undly_83.add_attribute("MMY", "1121363802"); // 1
    Undly_83_set.insert("1121363802");
    Undly_83.add_attribute("Mat", "UnderlyingMaturityDate_t_1557509975"); // 1
    Undly_83_set.insert("UnderlyingMaturityDate_t_1557509975");
    Undly_83.add_attribute("MatTm", "54244134"); // 1
    Undly_83_set.insert("54244134");
    Undly_83.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1243629090"); // 1
    Undly_83_set.insert("UnderlyingCouponPaymentDate_t_1243629090");
    Undly_83.add_attribute("RestrctTyp", "MR"); // 1
    Undly_83_set.insert("MR");
    Undly_83.add_attribute("Snrty", "SB"); // 1
    Undly_83_set.insert("SB");
    Undly_83.add_attribute("NotlPctOut", "9900665.390000"); // 1
    Undly_83_set.insert("9900665.390000");
    Undly_83.add_attribute("OrigNotlPctOut", "1091312.150000"); // 1
    Undly_83_set.insert("1091312.150000");
    Undly_83.add_attribute("AttchPnt", "17956037.610000"); // 1
    Undly_83_set.insert("17956037.610000");
    Undly_83.add_attribute("DetchPnt", "14788266.270000"); // 1
    Undly_83_set.insert("14788266.270000");
    Undly_83.add_attribute("Issued", "UnderlyingIssueDate_t_749723947"); // 1
    Undly_83_set.insert("UnderlyingIssueDate_t_749723947");
    Undly_83.add_attribute("RepoCollSecTyp", "347646693"); // 1
    Undly_83_set.insert("347646693");
    Undly_83.add_attribute("RepoTrm", "668313042"); // 1
    Undly_83_set.insert("668313042");
    Undly_83.add_attribute("RepoRt", "5040620.720000"); // 1
    Undly_83_set.insert("5040620.720000");
    Undly_83.add_attribute("Fctr", "5086803.360000"); // 1
    Undly_83_set.insert("5086803.360000");
    Undly_83.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1371918824"); // 1
    Undly_83_set.insert("UnderlyingCreditRating_t_1371918824");
    Undly_83.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_485839359"); // 1
    Undly_83_set.insert("UnderlyingInstrRegistry_t_485839359");
    Undly_83.add_attribute("Ctry", "1567554"); // 1
    Undly_83_set.insert("1567554");
    Undly_83.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2130645666"); // 1
    Undly_83_set.insert("UnderlyingStateOrProvinceOfIssue_t_2130645666");
    Undly_83.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_406400798"); // 1
    Undly_83_set.insert("UnderlyingLocaleOfIssue_t_406400798");
    Undly_83.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1111184762"); // 1
    Undly_83_set.insert("UnderlyingRedemptionDate_t_1111184762");
    Undly_83.add_attribute("StrkPx", "404905.660000"); // 1
    Undly_83_set.insert("404905.660000");
    Undly_83.add_attribute("StrkCcy", "EUR"); // 1
    Undly_83_set.insert("EUR");
    Undly_83.add_attribute("OptA", "2039020851"); // 1
    Undly_83_set.insert("2039020851");
    Undly_83.add_attribute("Mult", "14574142.730000"); // 1
    Undly_83_set.insert("14574142.730000");
    Undly_83.add_attribute("MultTyp", "0"); // 1
    Undly_83_set.insert("0");
    Undly_83.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_83_set.insert("3");
    Undly_83.add_attribute("UOM", "Bcf"); // 1
    Undly_83_set.insert("Bcf");
    Undly_83.add_attribute("UOMQty", "17568185.650000"); // 1
    Undly_83_set.insert("17568185.650000");
    Undly_83.add_attribute("PxUOM", "Bcf"); // 1
    Undly_83_set.insert("Bcf");
    Undly_83.add_attribute("PxUOMQty", "4917940.030000"); // 1
    Undly_83_set.insert("4917940.030000");
    Undly_83.add_attribute("TmUnit", "Wk"); // 1
    Undly_83_set.insert("Wk");
    Undly_83.add_attribute("ExerStyle", "1"); // 1
    Undly_83_set.insert("1");
    Undly_83.add_attribute("CpnRt", "17354230.940000"); // 1
    Undly_83_set.insert("17354230.940000");
    Undly_83.add_attribute("Exch", "UnderlyingSecurityExchange_t_6365278"); // 1
    Undly_83_set.insert("UnderlyingSecurityExchange_t_6365278");
    Undly_83.add_attribute("Issr", "UnderlyingIssuer_t_122427085"); // 1
    Undly_83_set.insert("UnderlyingIssuer_t_122427085");
    Undly_83.add_attribute("EncUndIssrLen", "578005985"); // 1
    Undly_83_set.insert("578005985");
    Undly_83.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_115496493"); // 1
    Undly_83_set.insert("EncodedUnderlyingIssuer_t_115496493");
    Undly_83.add_attribute("Desc", "UnderlyingSecurityDesc_t_1918030847"); // 1
    Undly_83_set.insert("UnderlyingSecurityDesc_t_1918030847");
    Undly_83.add_attribute("EncUndSecDescLen", "2056832612"); // 1
    Undly_83_set.insert("2056832612");
    Undly_83.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_865220441"); // 1
    Undly_83_set.insert("EncodedUnderlyingSecurityDesc_t_865220441");
    Undly_83.add_attribute("CPPgm", "UnderlyingCPProgram_t_118193892"); // 1
    Undly_83_set.insert("UnderlyingCPProgram_t_118193892");
    Undly_83.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_577662006"); // 1
    Undly_83_set.insert("UnderlyingCPRegType_t_577662006");
    Undly_83.add_attribute("AllocPct", "13692825.130000"); // 1
    Undly_83_set.insert("13692825.130000");
    Undly_83.add_attribute("Ccy", "GBP"); // 1
    Undly_83_set.insert("GBP");
    Undly_83.add_attribute("Qty", "18551218.720000"); // 1
    Undly_83_set.insert("18551218.720000");
    Undly_83.add_attribute("SettlTyp", "2"); // 1
    Undly_83_set.insert("2");
    Undly_83.add_attribute("CashAmt", "UnderlyingCashAmount_t_1932742848"); // 1
    Undly_83_set.insert("UnderlyingCashAmount_t_1932742848");
    Undly_83.add_attribute("CashTyp", "DIFF"); // 1
    Undly_83_set.insert("DIFF");
    Undly_83.add_attribute("Px", "17396265.440000"); // 1
    Undly_83_set.insert("17396265.440000");
    Undly_83.add_attribute("DirtPx", "19732334.140000"); // 1
    Undly_83_set.insert("19732334.140000");
    Undly_83.add_attribute("EndPx", "3139388.900000"); // 1
    Undly_83_set.insert("3139388.900000");
    Undly_83.add_attribute("StartVal", "UnderlyingStartValue_t_1975190271"); // 1
    Undly_83_set.insert("UnderlyingStartValue_t_1975190271");
    Undly_83.add_attribute("CurVal", "UnderlyingCurrentValue_t_1864770617"); // 1
    Undly_83_set.insert("UnderlyingCurrentValue_t_1864770617");
    Undly_83.add_attribute("EndVal", "UnderlyingEndValue_t_1771353164"); // 1
    Undly_83_set.insert("UnderlyingEndValue_t_1771353164");
    Undly_83.add_attribute("AdjQty", "4693532.690000"); // 1
    Undly_83_set.insert("4693532.690000");
    Undly_83.add_attribute("FxRate", "19346515.200000"); // 1
    Undly_83_set.insert("19346515.200000");
    Undly_83.add_attribute("FxRateCalc", "D"); // 1
    Undly_83_set.insert("D");
    Undly_83.add_attribute("CapValu", "UnderlyingCapValue_t_78688186"); // 1
    Undly_83_set.insert("UnderlyingCapValue_t_78688186");
    Undly_83.add_attribute("SetMeth", "UnderlyingSettlMethod_t_717068204"); // 1
    Undly_83_set.insert("UnderlyingSettlMethod_t_717068204");
    Undly_83.add_attribute("PutCall", "1633577368"); // 1
    Undly_83_set.insert("1633577368");
    all_values.push_back(Undly_83_set);
    all_compo_names.insert("Undly_83_set");

    {
      xml_element UndAID_83{"UndAID"};
      multiset<string> UndAID_83_set;
      UndAID_83.add_attribute("AltID", "UnderlyingSecurityAltID_t_1245533079"); // 2
      UndAID_83_set.insert("UnderlyingSecurityAltID_t_1245533079");
      UndAID_83.add_attribute("AltIDSrc", "G"); // 2
      UndAID_83_set.insert("G");
      all_values.push_back(UndAID_83_set);
      all_compo_names.insert("UndAID_83_set");

      Undly_83.add_element(UndAID_83);
    }
    {
      xml_element Stip_121{"Stip"};
      multiset<string> Stip_121_set;
      Stip_121.add_attribute("Typ", "INSURED"); // 2
      Stip_121_set.insert("INSURED");
      Stip_121.add_attribute("Val", "UnderlyingStipValue_t_1251898357"); // 2
      Stip_121_set.insert("UnderlyingStipValue_t_1251898357");
      all_values.push_back(Stip_121_set);
      all_compo_names.insert("Stip_121_set");

      Undly_83.add_element(Stip_121);
    }
    {
      xml_element Pty_318{"Pty"};
      multiset<string> Pty_318_set;
      Pty_318.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1823639756"); // 2
      Pty_318_set.insert("UnderlyingInstrumentPartyID_t_1823639756");
      Pty_318.add_attribute("Src", "G"); // 2
      Pty_318_set.insert("G");
      Pty_318.add_attribute("R", "2"); // 2
      Pty_318_set.insert("2");
      all_values.push_back(Pty_318_set);
      all_compo_names.insert("Pty_318_set");

      {
        xml_element Sub_318{"Sub"};
        multiset<string> Sub_318_set;
        Sub_318.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1594186955"); // 3
        Sub_318_set.insert("UnderlyingInstrumentPartySubID_t_1594186955");
        Sub_318.add_attribute("Typ", "28"); // 3
        Sub_318_set.insert("28");
        all_values.push_back(Sub_318_set);
        all_compo_names.insert("Sub_318_set");

        Pty_318.add_element(Sub_318);
      }
      Undly_83.add_element(Pty_318);
    }
    elt.add_element(Undly_83);
  } // end Undly
  { // Undly
    xml_element Undly_84{"Undly"};
    multiset<string> Undly_84_set;
    Undly_84.add_attribute("Sym", "UnderlyingSymbol_t_85131644"); // 1
    Undly_84_set.insert("UnderlyingSymbol_t_85131644");
    Undly_84.add_attribute("Sfx", "WI"); // 1
    Undly_84_set.insert("WI");
    Undly_84.add_attribute("ID", "UnderlyingSecurityID_t_139050121"); // 1
    Undly_84_set.insert("UnderlyingSecurityID_t_139050121");
    Undly_84.add_attribute("Src", "A"); // 1
    Undly_84_set.insert("A");
    Undly_84.add_attribute("Prod", "12"); // 1
    Undly_84_set.insert("12");
    Undly_84.add_attribute("CFI", "UnderlyingCFICode_t_2088630951"); // 1
    Undly_84_set.insert("UnderlyingCFICode_t_2088630951");
    Undly_84.add_attribute("SecTyp", "SECLOAN"); // 1
    Undly_84_set.insert("SECLOAN");
    Undly_84.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_820213209"); // 1
    Undly_84_set.insert("UnderlyingSecuritySubType_t_820213209");
    Undly_84.add_attribute("MMY", "1873890151"); // 1
    Undly_84_set.insert("1873890151");
    Undly_84.add_attribute("Mat", "UnderlyingMaturityDate_t_1276091404"); // 1
    Undly_84_set.insert("UnderlyingMaturityDate_t_1276091404");
    Undly_84.add_attribute("MatTm", "412356106"); // 1
    Undly_84_set.insert("412356106");
    Undly_84.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1699639917"); // 1
    Undly_84_set.insert("UnderlyingCouponPaymentDate_t_1699639917");
    Undly_84.add_attribute("RestrctTyp", "XR"); // 1
    Undly_84_set.insert("XR");
    Undly_84.add_attribute("Snrty", "SB"); // 1
    Undly_84_set.insert("SB");
    Undly_84.add_attribute("NotlPctOut", "14169268.860000"); // 1
    Undly_84_set.insert("14169268.860000");
    Undly_84.add_attribute("OrigNotlPctOut", "12138998.110000"); // 1
    Undly_84_set.insert("12138998.110000");
    Undly_84.add_attribute("AttchPnt", "7094159.980000"); // 1
    Undly_84_set.insert("7094159.980000");
    Undly_84.add_attribute("DetchPnt", "12040947.580000"); // 1
    Undly_84_set.insert("12040947.580000");
    Undly_84.add_attribute("Issued", "UnderlyingIssueDate_t_208199528"); // 1
    Undly_84_set.insert("UnderlyingIssueDate_t_208199528");
    Undly_84.add_attribute("RepoCollSecTyp", "788104185"); // 1
    Undly_84_set.insert("788104185");
    Undly_84.add_attribute("RepoTrm", "1921162963"); // 1
    Undly_84_set.insert("1921162963");
    Undly_84.add_attribute("RepoRt", "18417768.960000"); // 1
    Undly_84_set.insert("18417768.960000");
    Undly_84.add_attribute("Fctr", "20336372.640000"); // 1
    Undly_84_set.insert("20336372.640000");
    Undly_84.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1474891986"); // 1
    Undly_84_set.insert("UnderlyingCreditRating_t_1474891986");
    Undly_84.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_915810063"); // 1
    Undly_84_set.insert("UnderlyingInstrRegistry_t_915810063");
    Undly_84.add_attribute("Ctry", "1138051974"); // 1
    Undly_84_set.insert("1138051974");
    Undly_84.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1151048094"); // 1
    Undly_84_set.insert("UnderlyingStateOrProvinceOfIssue_t_1151048094");
    Undly_84.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_567849214"); // 1
    Undly_84_set.insert("UnderlyingLocaleOfIssue_t_567849214");
    Undly_84.add_attribute("Redeem", "UnderlyingRedemptionDate_t_357963177"); // 1
    Undly_84_set.insert("UnderlyingRedemptionDate_t_357963177");
    Undly_84.add_attribute("StrkPx", "5977514.020000"); // 1
    Undly_84_set.insert("5977514.020000");
    Undly_84.add_attribute("StrkCcy", "CAN"); // 1
    Undly_84_set.insert("CAN");
    Undly_84.add_attribute("OptA", "162648601"); // 1
    Undly_84_set.insert("162648601");
    Undly_84.add_attribute("Mult", "2682874.510000"); // 1
    Undly_84_set.insert("2682874.510000");
    Undly_84.add_attribute("MultTyp", "2"); // 1
    Undly_84_set.insert("2");
    Undly_84.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_84_set.insert("4");
    Undly_84.add_attribute("UOM", "Bcf"); // 1
    Undly_84_set.insert("Bcf");
    Undly_84.add_attribute("UOMQty", "9120777.110000"); // 1
    Undly_84_set.insert("9120777.110000");
    Undly_84.add_attribute("PxUOM", "Alw"); // 1
    Undly_84_set.insert("Alw");
    Undly_84.add_attribute("PxUOMQty", "20833249.060000"); // 1
    Undly_84_set.insert("20833249.060000");
    Undly_84.add_attribute("TmUnit", "Mo"); // 1
    Undly_84_set.insert("Mo");
    Undly_84.add_attribute("ExerStyle", "0"); // 1
    Undly_84_set.insert("0");
    Undly_84.add_attribute("CpnRt", "16354811.760000"); // 1
    Undly_84_set.insert("16354811.760000");
    Undly_84.add_attribute("Exch", "UnderlyingSecurityExchange_t_1630715763"); // 1
    Undly_84_set.insert("UnderlyingSecurityExchange_t_1630715763");
    Undly_84.add_attribute("Issr", "UnderlyingIssuer_t_1827052074"); // 1
    Undly_84_set.insert("UnderlyingIssuer_t_1827052074");
    Undly_84.add_attribute("EncUndIssrLen", "904924414"); // 1
    Undly_84_set.insert("904924414");
    Undly_84.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_697131926"); // 1
    Undly_84_set.insert("EncodedUnderlyingIssuer_t_697131926");
    Undly_84.add_attribute("Desc", "UnderlyingSecurityDesc_t_388984424"); // 1
    Undly_84_set.insert("UnderlyingSecurityDesc_t_388984424");
    Undly_84.add_attribute("EncUndSecDescLen", "2109019173"); // 1
    Undly_84_set.insert("2109019173");
    Undly_84.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_905331454"); // 1
    Undly_84_set.insert("EncodedUnderlyingSecurityDesc_t_905331454");
    Undly_84.add_attribute("CPPgm", "UnderlyingCPProgram_t_1177088609"); // 1
    Undly_84_set.insert("UnderlyingCPProgram_t_1177088609");
    Undly_84.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1882698488"); // 1
    Undly_84_set.insert("UnderlyingCPRegType_t_1882698488");
    Undly_84.add_attribute("AllocPct", "5996247.020000"); // 1
    Undly_84_set.insert("5996247.020000");
    Undly_84.add_attribute("Ccy", "USD"); // 1
    Undly_84_set.insert("USD");
    Undly_84.add_attribute("Qty", "15154347.650000"); // 1
    Undly_84_set.insert("15154347.650000");
    Undly_84.add_attribute("SettlTyp", "5"); // 1
    Undly_84_set.insert("5");
    Undly_84.add_attribute("CashAmt", "UnderlyingCashAmount_t_213671272"); // 1
    Undly_84_set.insert("UnderlyingCashAmount_t_213671272");
    Undly_84.add_attribute("CashTyp", "FIXED"); // 1
    Undly_84_set.insert("FIXED");
    Undly_84.add_attribute("Px", "4117737.290000"); // 1
    Undly_84_set.insert("4117737.290000");
    Undly_84.add_attribute("DirtPx", "8114226.740000"); // 1
    Undly_84_set.insert("8114226.740000");
    Undly_84.add_attribute("EndPx", "650376.620000"); // 1
    Undly_84_set.insert("650376.620000");
    Undly_84.add_attribute("StartVal", "UnderlyingStartValue_t_854868550"); // 1
    Undly_84_set.insert("UnderlyingStartValue_t_854868550");
    Undly_84.add_attribute("CurVal", "UnderlyingCurrentValue_t_974071276"); // 1
    Undly_84_set.insert("UnderlyingCurrentValue_t_974071276");
    Undly_84.add_attribute("EndVal", "UnderlyingEndValue_t_333325113"); // 1
    Undly_84_set.insert("UnderlyingEndValue_t_333325113");
    Undly_84.add_attribute("AdjQty", "6048938.800000"); // 1
    Undly_84_set.insert("6048938.800000");
    Undly_84.add_attribute("FxRate", "13284913.050000"); // 1
    Undly_84_set.insert("13284913.050000");
    Undly_84.add_attribute("FxRateCalc", "M"); // 1
    Undly_84_set.insert("M");
    Undly_84.add_attribute("CapValu", "UnderlyingCapValue_t_1516971591"); // 1
    Undly_84_set.insert("UnderlyingCapValue_t_1516971591");
    Undly_84.add_attribute("SetMeth", "UnderlyingSettlMethod_t_355640895"); // 1
    Undly_84_set.insert("UnderlyingSettlMethod_t_355640895");
    Undly_84.add_attribute("PutCall", "478601127"); // 1
    Undly_84_set.insert("478601127");
    all_values.push_back(Undly_84_set);
    all_compo_names.insert("Undly_84_set");

    {
      xml_element UndAID_84{"UndAID"};
      multiset<string> UndAID_84_set;
      UndAID_84.add_attribute("AltID", "UnderlyingSecurityAltID_t_1557657059"); // 2
      UndAID_84_set.insert("UnderlyingSecurityAltID_t_1557657059");
      UndAID_84.add_attribute("AltIDSrc", "D"); // 2
      UndAID_84_set.insert("D");
      all_values.push_back(UndAID_84_set);
      all_compo_names.insert("UndAID_84_set");

      Undly_84.add_element(UndAID_84);
    }
    {
      xml_element Stip_122{"Stip"};
      multiset<string> Stip_122_set;
      Stip_122.add_attribute("Typ", "POOL"); // 2
      Stip_122_set.insert("POOL");
      Stip_122.add_attribute("Val", "UnderlyingStipValue_t_1040889174"); // 2
      Stip_122_set.insert("UnderlyingStipValue_t_1040889174");
      all_values.push_back(Stip_122_set);
      all_compo_names.insert("Stip_122_set");

      Undly_84.add_element(Stip_122);
    }
    {
      xml_element Pty_319{"Pty"};
      multiset<string> Pty_319_set;
      Pty_319.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1622198666"); // 2
      Pty_319_set.insert("UnderlyingInstrumentPartyID_t_1622198666");
      Pty_319.add_attribute("Src", "6"); // 2
      Pty_319_set.insert("6");
      Pty_319.add_attribute("R", "5"); // 2
      Pty_319_set.insert("5");
      all_values.push_back(Pty_319_set);
      all_compo_names.insert("Pty_319_set");

      {
        xml_element Sub_319{"Sub"};
        multiset<string> Sub_319_set;
        Sub_319.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2011183090"); // 3
        Sub_319_set.insert("UnderlyingInstrumentPartySubID_t_2011183090");
        Sub_319.add_attribute("Typ", "28"); // 3
        Sub_319_set.insert("28");
        all_values.push_back(Sub_319_set);
        all_compo_names.insert("Sub_319_set");

        Pty_319.add_element(Sub_319);
      }
      Undly_84.add_element(Pty_319);
    }
    elt.add_element(Undly_84);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_18{"OrdQty"};
    multiset<string> OrdQty_18_set;
    OrdQty_18.add_attribute("Qty", "4958689.060000"); // 1
    OrdQty_18_set.insert("4958689.060000");
    OrdQty_18.add_attribute("Cash", "10407880.520000"); // 1
    OrdQty_18_set.insert("10407880.520000");
    OrdQty_18.add_attribute("Pct", "5682734.340000"); // 1
    OrdQty_18_set.insert("5682734.340000");
    OrdQty_18.add_attribute("RndDir", "1"); // 1
    OrdQty_18_set.insert("1");
    OrdQty_18.add_attribute("RndMod", "21040302.780000"); // 1
    OrdQty_18_set.insert("21040302.780000");
    all_values.push_back(OrdQty_18_set);
    all_compo_names.insert("OrdQty_18_set");

    elt.add_element(OrdQty_18);
  } // end OrdQty
  { // RtSrc
    xml_element RtSrc_10{"RtSrc"};
    multiset<string> RtSrc_10_set;
    RtSrc_10.add_attribute("RtSrc", "2"); // 1
    RtSrc_10_set.insert("2");
    RtSrc_10.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_10_set.insert("0");
    RtSrc_10.add_attribute("RefPg", "ReferencePage_t_1992051533"); // 1
    RtSrc_10_set.insert("ReferencePage_t_1992051533");
    all_values.push_back(RtSrc_10_set);
    all_compo_names.insert("RtSrc_10_set");

    elt.add_element(RtSrc_10);
  } // end RtSrc
  { // Stip
    xml_element Stip_123{"Stip"};
    multiset<string> Stip_123_set;
    Stip_123.add_attribute("Typ", "PMAX"); // 1
    Stip_123_set.insert("PMAX");
    Stip_123.add_attribute("Val", "StipulationValue_t_655990559"); // 1
    Stip_123_set.insert("StipulationValue_t_655990559");
    all_values.push_back(Stip_123_set);
    all_compo_names.insert("Stip_123_set");

    elt.add_element(Stip_123);
  } // end Stip
  { // Quot
    xml_element Quot_0{"Quot"};
    multiset<string> Quot_0_set;
    Quot_0.add_attribute("Qty", "12769994.610000"); // 1
    Quot_0_set.insert("12769994.610000");
    Quot_0.add_attribute("OrdQty", "16300618.350000"); // 1
    Quot_0_set.insert("16300618.350000");
    Quot_0.add_attribute("SwapTyp", "4"); // 1
    Quot_0_set.insert("4");
    Quot_0.add_attribute("SettlTyp", "1"); // 1
    Quot_0_set.insert("1");
    Quot_0.add_attribute("SettlDt", "LegSettlDate_t_811069492"); // 1
    Quot_0_set.insert("LegSettlDate_t_811069492");
    Quot_0.add_attribute("PxTyp", "5"); // 1
    Quot_0_set.insert("5");
    Quot_0.add_attribute("BidPx", "12513812.840000"); // 1
    Quot_0_set.insert("12513812.840000");
    Quot_0.add_attribute("OfrPx", "11667103.880000"); // 1
    Quot_0_set.insert("11667103.880000");
    Quot_0.add_attribute("RefID", "LegRefID_t_1818968829"); // 1
    Quot_0_set.insert("LegRefID_t_1818968829");
    Quot_0.add_attribute("LegBidFwdPnts", "6615546.960000"); // 1
    Quot_0_set.insert("6615546.960000");
    Quot_0.add_attribute("LegOfrFwdPnts", "9618569.800000"); // 1
    Quot_0_set.insert("9618569.800000");
    all_values.push_back(Quot_0_set);
    all_compo_names.insert("Quot_0_set");

    {
      xml_element Leg_61{"Leg"};
      multiset<string> Leg_61_set;
      Leg_61.add_attribute("Sym", "LegSymbol_t_1785567484"); // 2
      Leg_61_set.insert("LegSymbol_t_1785567484");
      Leg_61.add_attribute("Sfx", "CD"); // 2
      Leg_61_set.insert("CD");
      Leg_61.add_attribute("ID", "LegSecurityID_t_436571998"); // 2
      Leg_61_set.insert("LegSecurityID_t_436571998");
      Leg_61.add_attribute("Src", "7"); // 2
      Leg_61_set.insert("7");
      Leg_61.add_attribute("Prod", "7"); // 2
      Leg_61_set.insert("7");
      Leg_61.add_attribute("CFI", "LegCFICode_t_300271440"); // 2
      Leg_61_set.insert("LegCFICode_t_300271440");
      Leg_61.add_attribute("SecTyp", "DN"); // 2
      Leg_61_set.insert("DN");
      Leg_61.add_attribute("SecSubTyp", "LegSecuritySubType_t_1788850229"); // 2
      Leg_61_set.insert("LegSecuritySubType_t_1788850229");
      Leg_61.add_attribute("MMY", "1341059492"); // 2
      Leg_61_set.insert("1341059492");
      Leg_61.add_attribute("Mat", "LegMaturityDate_t_1910938935"); // 2
      Leg_61_set.insert("LegMaturityDate_t_1910938935");
      Leg_61.add_attribute("MatTm", "736860190"); // 2
      Leg_61_set.insert("736860190");
      Leg_61.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1297606122"); // 2
      Leg_61_set.insert("LegCouponPaymentDate_t_1297606122");
      Leg_61.add_attribute("Issued", "LegIssueDate_t_1541835547"); // 2
      Leg_61_set.insert("LegIssueDate_t_1541835547");
      Leg_61.add_attribute("RepoCollSecTyp", "1200304917"); // 2
      Leg_61_set.insert("1200304917");
      Leg_61.add_attribute("RepoTrm", "1307963304"); // 2
      Leg_61_set.insert("1307963304");
      Leg_61.add_attribute("RepoRt", "13864034.320000"); // 2
      Leg_61_set.insert("13864034.320000");
      Leg_61.add_attribute("Fctr", "15995499.750000"); // 2
      Leg_61_set.insert("15995499.750000");
      Leg_61.add_attribute("CrdRtg", "LegCreditRating_t_1730094215"); // 2
      Leg_61_set.insert("LegCreditRating_t_1730094215");
      Leg_61.add_attribute("Rgstry", "LegInstrRegistry_t_2042393992"); // 2
      Leg_61_set.insert("LegInstrRegistry_t_2042393992");
      Leg_61.add_attribute("Ctry", "2063832696"); // 2
      Leg_61_set.insert("2063832696");
      Leg_61.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_859610028"); // 2
      Leg_61_set.insert("LegStateOrProvinceOfIssue_t_859610028");
      Leg_61.add_attribute("Lcl", "LegLocaleOfIssue_t_1524972179"); // 2
      Leg_61_set.insert("LegLocaleOfIssue_t_1524972179");
      Leg_61.add_attribute("Redeem", "LegRedemptionDate_t_713956882"); // 2
      Leg_61_set.insert("LegRedemptionDate_t_713956882");
      Leg_61.add_attribute("Strk", "5940197.210000"); // 2
      Leg_61_set.insert("5940197.210000");
      Leg_61.add_attribute("StrkCcy", "JPY"); // 2
      Leg_61_set.insert("JPY");
      Leg_61.add_attribute("OptA", "1845401006"); // 2
      Leg_61_set.insert("1845401006");
      Leg_61.add_attribute("Cmult", "13552684.120000"); // 2
      Leg_61_set.insert("13552684.120000");
      Leg_61.add_attribute("MultTyp", "0"); // 2
      Leg_61_set.insert("0");
      Leg_61.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_61_set.insert("4");
      Leg_61.add_attribute("UOM", "Alw"); // 2
      Leg_61_set.insert("Alw");
      Leg_61.add_attribute("UOMQty", "13638936.020000"); // 2
      Leg_61_set.insert("13638936.020000");
      Leg_61.add_attribute("PxUOM", "Gal"); // 2
      Leg_61_set.insert("Gal");
      Leg_61.add_attribute("PxUOMQty", "6062137.420000"); // 2
      Leg_61_set.insert("6062137.420000");
      Leg_61.add_attribute("TmUnit", "Mo"); // 2
      Leg_61_set.insert("Mo");
      Leg_61.add_attribute("ExerStyle", "2"); // 2
      Leg_61_set.insert("2");
      Leg_61.add_attribute("CpnRt", "9064851.820000"); // 2
      Leg_61_set.insert("9064851.820000");
      Leg_61.add_attribute("Exch", "LegSecurityExchange_t_1068682361"); // 2
      Leg_61_set.insert("LegSecurityExchange_t_1068682361");
      Leg_61.add_attribute("Issr", "LegIssuer_t_848780181"); // 2
      Leg_61_set.insert("LegIssuer_t_848780181");
      Leg_61.add_attribute("EncLegIssrLen", "100061027"); // 2
      Leg_61_set.insert("100061027");
      Leg_61.add_attribute("EncLegIssr", "EncodedLegIssuer_t_832137648"); // 2
      Leg_61_set.insert("EncodedLegIssuer_t_832137648");
      Leg_61.add_attribute("Desc", "LegSecurityDesc_t_1585640371"); // 2
      Leg_61_set.insert("LegSecurityDesc_t_1585640371");
      Leg_61.add_attribute("EncLegSecDescLen", "1397667149"); // 2
      Leg_61_set.insert("1397667149");
      Leg_61.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_226489547"); // 2
      Leg_61_set.insert("EncodedLegSecurityDesc_t_226489547");
      Leg_61.add_attribute("RatioQty", "6384616.400000"); // 2
      Leg_61_set.insert("6384616.400000");
      Leg_61.add_attribute("Side", "7"); // 2
      Leg_61_set.insert("7");
      Leg_61.add_attribute("Ccy", "JPY"); // 2
      Leg_61_set.insert("JPY");
      Leg_61.add_attribute("Pool", "LegPool_t_140757373"); // 2
      Leg_61_set.insert("LegPool_t_140757373");
      Leg_61.add_attribute("Dated", "LegDatedDate_t_1507803324"); // 2
      Leg_61_set.insert("LegDatedDate_t_1507803324");
      Leg_61.add_attribute("CSetMo", "6877016"); // 2
      Leg_61_set.insert("6877016");
      Leg_61.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1000367402"); // 2
      Leg_61_set.insert("LegInterestAccrualDate_t_1000367402");
      Leg_61.add_attribute("PutCall", "885291855"); // 2
      Leg_61_set.insert("885291855");
      Leg_61.add_attribute("LegOptionRatio", "7208338.980000"); // 2
      Leg_61_set.insert("7208338.980000");
      Leg_61.add_attribute("Px", "15943871.230000"); // 2
      Leg_61_set.insert("15943871.230000");
      all_values.push_back(Leg_61_set);
      all_compo_names.insert("Leg_61_set");

      {
        xml_element LegAID_61{"LegAID"};
        multiset<string> LegAID_61_set;
        LegAID_61.add_attribute("SecAltID", "LegSecurityAltID_t_1073849879"); // 3
        LegAID_61_set.insert("LegSecurityAltID_t_1073849879");
        LegAID_61.add_attribute("SecAltIDSrc", "7"); // 3
        LegAID_61_set.insert("7");
        all_values.push_back(LegAID_61_set);
        all_compo_names.insert("LegAID_61_set");

        Leg_61.add_element(LegAID_61);
      }
      Quot_0.add_element(Leg_61);
    }
    {
      xml_element Stip_124{"Stip"};
      multiset<string> Stip_124_set;
      Stip_124.add_attribute("StipTyp", "AMT"); // 2
      Stip_124_set.insert("AMT");
      Stip_124.add_attribute("StipVal", "LegStipulationValue_t_281634643"); // 2
      Stip_124_set.insert("LegStipulationValue_t_281634643");
      all_values.push_back(Stip_124_set);
      all_compo_names.insert("Stip_124_set");

      Quot_0.add_element(Stip_124);
    }
    {
      xml_element Pty_320{"Pty"};
      multiset<string> Pty_320_set;
      Pty_320.add_attribute("ID", "NestedPartyID_t_206000952"); // 2
      Pty_320_set.insert("NestedPartyID_t_206000952");
      Pty_320.add_attribute("Src", "2"); // 2
      Pty_320_set.insert("2");
      Pty_320.add_attribute("R", "81"); // 2
      Pty_320_set.insert("81");
      all_values.push_back(Pty_320_set);
      all_compo_names.insert("Pty_320_set");

      {
        xml_element Sub_320{"Sub"};
        multiset<string> Sub_320_set;
        Sub_320.add_attribute("ID", "NestedPartySubID_t_1569894555"); // 3
        Sub_320_set.insert("NestedPartySubID_t_1569894555");
        Sub_320.add_attribute("Typ", "12"); // 3
        Sub_320_set.insert("12");
        all_values.push_back(Sub_320_set);
        all_compo_names.insert("Sub_320_set");

        Pty_320.add_element(Sub_320);
      }
      Quot_0.add_element(Pty_320);
    }
    {
      xml_element BnchmkCurve_0{"BnchmkCurve"};
      multiset<string> BnchmkCurve_0_set;
      BnchmkCurve_0.add_attribute("Ccy", "CAN"); // 2
      BnchmkCurve_0_set.insert("CAN");
      BnchmkCurve_0.add_attribute("Name", "FutureSWAP"); // 2
      BnchmkCurve_0_set.insert("FutureSWAP");
      BnchmkCurve_0.add_attribute("Point", "LegBenchmarkCurvePoint_t_1963975312"); // 2
      BnchmkCurve_0_set.insert("LegBenchmarkCurvePoint_t_1963975312");
      BnchmkCurve_0.add_attribute("Px", "2171101.280000"); // 2
      BnchmkCurve_0_set.insert("2171101.280000");
      BnchmkCurve_0.add_attribute("PxTyp", "1474918944"); // 2
      BnchmkCurve_0_set.insert("1474918944");
      all_values.push_back(BnchmkCurve_0_set);
      all_compo_names.insert("BnchmkCurve_0_set");

      Quot_0.add_element(BnchmkCurve_0);
    }
    elt.add_element(Quot_0);
  } // end Quot
  { // Quot
    xml_element Quot_1{"Quot"};
    multiset<string> Quot_1_set;
    Quot_1.add_attribute("Qty", "20640363.390000"); // 1
    Quot_1_set.insert("20640363.390000");
    Quot_1.add_attribute("OrdQty", "10492477.760000"); // 1
    Quot_1_set.insert("10492477.760000");
    Quot_1.add_attribute("SwapTyp", "1"); // 1
    Quot_1_set.insert("1");
    Quot_1.add_attribute("SettlTyp", "0"); // 1
    Quot_1_set.insert("0");
    Quot_1.add_attribute("SettlDt", "LegSettlDate_t_1275737324"); // 1
    Quot_1_set.insert("LegSettlDate_t_1275737324");
    Quot_1.add_attribute("PxTyp", "11"); // 1
    Quot_1_set.insert("11");
    Quot_1.add_attribute("BidPx", "18723666.460000"); // 1
    Quot_1_set.insert("18723666.460000");
    Quot_1.add_attribute("OfrPx", "7411466.560000"); // 1
    Quot_1_set.insert("7411466.560000");
    Quot_1.add_attribute("RefID", "LegRefID_t_1642065276"); // 1
    Quot_1_set.insert("LegRefID_t_1642065276");
    Quot_1.add_attribute("LegBidFwdPnts", "20131240.200000"); // 1
    Quot_1_set.insert("20131240.200000");
    Quot_1.add_attribute("LegOfrFwdPnts", "1014663.320000"); // 1
    Quot_1_set.insert("1014663.320000");
    all_values.push_back(Quot_1_set);
    all_compo_names.insert("Quot_1_set");

    {
      xml_element Leg_62{"Leg"};
      multiset<string> Leg_62_set;
      Leg_62.add_attribute("Sym", "LegSymbol_t_1648942292"); // 2
      Leg_62_set.insert("LegSymbol_t_1648942292");
      Leg_62.add_attribute("Sfx", "CD"); // 2
      Leg_62_set.insert("CD");
      Leg_62.add_attribute("ID", "LegSecurityID_t_986758187"); // 2
      Leg_62_set.insert("LegSecurityID_t_986758187");
      Leg_62.add_attribute("Src", "B"); // 2
      Leg_62_set.insert("B");
      Leg_62.add_attribute("Prod", "10"); // 2
      Leg_62_set.insert("10");
      Leg_62.add_attribute("CFI", "LegCFICode_t_2060608067"); // 2
      Leg_62_set.insert("LegCFICode_t_2060608067");
      Leg_62.add_attribute("SecTyp", "MPO"); // 2
      Leg_62_set.insert("MPO");
      Leg_62.add_attribute("SecSubTyp", "LegSecuritySubType_t_1605215731"); // 2
      Leg_62_set.insert("LegSecuritySubType_t_1605215731");
      Leg_62.add_attribute("MMY", "194759062"); // 2
      Leg_62_set.insert("194759062");
      Leg_62.add_attribute("Mat", "LegMaturityDate_t_1055968329"); // 2
      Leg_62_set.insert("LegMaturityDate_t_1055968329");
      Leg_62.add_attribute("MatTm", "1109508618"); // 2
      Leg_62_set.insert("1109508618");
      Leg_62.add_attribute("CpnPmt", "LegCouponPaymentDate_t_646035450"); // 2
      Leg_62_set.insert("LegCouponPaymentDate_t_646035450");
      Leg_62.add_attribute("Issued", "LegIssueDate_t_478379236"); // 2
      Leg_62_set.insert("LegIssueDate_t_478379236");
      Leg_62.add_attribute("RepoCollSecTyp", "528233782"); // 2
      Leg_62_set.insert("528233782");
      Leg_62.add_attribute("RepoTrm", "1703525579"); // 2
      Leg_62_set.insert("1703525579");
      Leg_62.add_attribute("RepoRt", "17742906.520000"); // 2
      Leg_62_set.insert("17742906.520000");
      Leg_62.add_attribute("Fctr", "11543725.460000"); // 2
      Leg_62_set.insert("11543725.460000");
      Leg_62.add_attribute("CrdRtg", "LegCreditRating_t_1520017243"); // 2
      Leg_62_set.insert("LegCreditRating_t_1520017243");
      Leg_62.add_attribute("Rgstry", "LegInstrRegistry_t_1991400780"); // 2
      Leg_62_set.insert("LegInstrRegistry_t_1991400780");
      Leg_62.add_attribute("Ctry", "481807842"); // 2
      Leg_62_set.insert("481807842");
      Leg_62.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1436569934"); // 2
      Leg_62_set.insert("LegStateOrProvinceOfIssue_t_1436569934");
      Leg_62.add_attribute("Lcl", "LegLocaleOfIssue_t_893164909"); // 2
      Leg_62_set.insert("LegLocaleOfIssue_t_893164909");
      Leg_62.add_attribute("Redeem", "LegRedemptionDate_t_1394883510"); // 2
      Leg_62_set.insert("LegRedemptionDate_t_1394883510");
      Leg_62.add_attribute("Strk", "6033061.270000"); // 2
      Leg_62_set.insert("6033061.270000");
      Leg_62.add_attribute("StrkCcy", "EUR"); // 2
      Leg_62_set.insert("EUR");
      Leg_62.add_attribute("OptA", "328189125"); // 2
      Leg_62_set.insert("328189125");
      Leg_62.add_attribute("Cmult", "7625652.410000"); // 2
      Leg_62_set.insert("7625652.410000");
      Leg_62.add_attribute("MultTyp", "2"); // 2
      Leg_62_set.insert("2");
      Leg_62.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_62_set.insert("2");
      Leg_62.add_attribute("UOM", "Bbl"); // 2
      Leg_62_set.insert("Bbl");
      Leg_62.add_attribute("UOMQty", "19424610.920000"); // 2
      Leg_62_set.insert("19424610.920000");
      Leg_62.add_attribute("PxUOM", "Alw"); // 2
      Leg_62_set.insert("Alw");
      Leg_62.add_attribute("PxUOMQty", "18507897.600000"); // 2
      Leg_62_set.insert("18507897.600000");
      Leg_62.add_attribute("TmUnit", "Yr"); // 2
      Leg_62_set.insert("Yr");
      Leg_62.add_attribute("ExerStyle", "1"); // 2
      Leg_62_set.insert("1");
      Leg_62.add_attribute("CpnRt", "17639141.790000"); // 2
      Leg_62_set.insert("17639141.790000");
      Leg_62.add_attribute("Exch", "LegSecurityExchange_t_867237363"); // 2
      Leg_62_set.insert("LegSecurityExchange_t_867237363");
      Leg_62.add_attribute("Issr", "LegIssuer_t_830480604"); // 2
      Leg_62_set.insert("LegIssuer_t_830480604");
      Leg_62.add_attribute("EncLegIssrLen", "1958673242"); // 2
      Leg_62_set.insert("1958673242");
      Leg_62.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1923205693"); // 2
      Leg_62_set.insert("EncodedLegIssuer_t_1923205693");
      Leg_62.add_attribute("Desc", "LegSecurityDesc_t_1939989222"); // 2
      Leg_62_set.insert("LegSecurityDesc_t_1939989222");
      Leg_62.add_attribute("EncLegSecDescLen", "457225044"); // 2
      Leg_62_set.insert("457225044");
      Leg_62.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_254101281"); // 2
      Leg_62_set.insert("EncodedLegSecurityDesc_t_254101281");
      Leg_62.add_attribute("RatioQty", "3207393.570000"); // 2
      Leg_62_set.insert("3207393.570000");
      Leg_62.add_attribute("Side", "G"); // 2
      Leg_62_set.insert("G");
      Leg_62.add_attribute("Ccy", "CAN"); // 2
      Leg_62_set.insert("CAN");
      Leg_62.add_attribute("Pool", "LegPool_t_1533284219"); // 2
      Leg_62_set.insert("LegPool_t_1533284219");
      Leg_62.add_attribute("Dated", "LegDatedDate_t_1872309066"); // 2
      Leg_62_set.insert("LegDatedDate_t_1872309066");
      Leg_62.add_attribute("CSetMo", "1956919745"); // 2
      Leg_62_set.insert("1956919745");
      Leg_62.add_attribute("IntAcrl", "LegInterestAccrualDate_t_822370505"); // 2
      Leg_62_set.insert("LegInterestAccrualDate_t_822370505");
      Leg_62.add_attribute("PutCall", "617990327"); // 2
      Leg_62_set.insert("617990327");
      Leg_62.add_attribute("LegOptionRatio", "12043196.080000"); // 2
      Leg_62_set.insert("12043196.080000");
      Leg_62.add_attribute("Px", "14256766.320000"); // 2
      Leg_62_set.insert("14256766.320000");
      all_values.push_back(Leg_62_set);
      all_compo_names.insert("Leg_62_set");

      {
        xml_element LegAID_62{"LegAID"};
        multiset<string> LegAID_62_set;
        LegAID_62.add_attribute("SecAltID", "LegSecurityAltID_t_639408912"); // 3
        LegAID_62_set.insert("LegSecurityAltID_t_639408912");
        LegAID_62.add_attribute("SecAltIDSrc", "8"); // 3
        LegAID_62_set.insert("8");
        all_values.push_back(LegAID_62_set);
        all_compo_names.insert("LegAID_62_set");

        Leg_62.add_element(LegAID_62);
      }
      Quot_1.add_element(Leg_62);
    }
    {
      xml_element Stip_125{"Stip"};
      multiset<string> Stip_125_set;
      Stip_125.add_attribute("StipTyp", "DISCOUNT"); // 2
      Stip_125_set.insert("DISCOUNT");
      Stip_125.add_attribute("StipVal", "LegStipulationValue_t_1401974153"); // 2
      Stip_125_set.insert("LegStipulationValue_t_1401974153");
      all_values.push_back(Stip_125_set);
      all_compo_names.insert("Stip_125_set");

      Quot_1.add_element(Stip_125);
    }
    {
      xml_element Pty_321{"Pty"};
      multiset<string> Pty_321_set;
      Pty_321.add_attribute("ID", "NestedPartyID_t_149291930"); // 2
      Pty_321_set.insert("NestedPartyID_t_149291930");
      Pty_321.add_attribute("Src", "I"); // 2
      Pty_321_set.insert("I");
      Pty_321.add_attribute("R", "19"); // 2
      Pty_321_set.insert("19");
      all_values.push_back(Pty_321_set);
      all_compo_names.insert("Pty_321_set");

      {
        xml_element Sub_321{"Sub"};
        multiset<string> Sub_321_set;
        Sub_321.add_attribute("ID", "NestedPartySubID_t_2091753022"); // 3
        Sub_321_set.insert("NestedPartySubID_t_2091753022");
        Sub_321.add_attribute("Typ", "17"); // 3
        Sub_321_set.insert("17");
        all_values.push_back(Sub_321_set);
        all_compo_names.insert("Sub_321_set");

        Pty_321.add_element(Sub_321);
      }
      Quot_1.add_element(Pty_321);
    }
    {
      xml_element BnchmkCurve_1{"BnchmkCurve"};
      multiset<string> BnchmkCurve_1_set;
      BnchmkCurve_1.add_attribute("Ccy", "CAN"); // 2
      BnchmkCurve_1_set.insert("CAN");
      BnchmkCurve_1.add_attribute("Name", "LIBID"); // 2
      BnchmkCurve_1_set.insert("LIBID");
      BnchmkCurve_1.add_attribute("Point", "LegBenchmarkCurvePoint_t_1585742370"); // 2
      BnchmkCurve_1_set.insert("LegBenchmarkCurvePoint_t_1585742370");
      BnchmkCurve_1.add_attribute("Px", "8287767.240000"); // 2
      BnchmkCurve_1_set.insert("8287767.240000");
      BnchmkCurve_1.add_attribute("PxTyp", "915794356"); // 2
      BnchmkCurve_1_set.insert("915794356");
      all_values.push_back(BnchmkCurve_1_set);
      all_compo_names.insert("BnchmkCurve_1_set");

      Quot_1.add_element(BnchmkCurve_1);
    }
    elt.add_element(Quot_1);
  } // end Quot
  { // Quot
    xml_element Quot_2{"Quot"};
    multiset<string> Quot_2_set;
    Quot_2.add_attribute("Qty", "13969319.640000"); // 1
    Quot_2_set.insert("13969319.640000");
    Quot_2.add_attribute("OrdQty", "6044987.690000"); // 1
    Quot_2_set.insert("6044987.690000");
    Quot_2.add_attribute("SwapTyp", "4"); // 1
    Quot_2_set.insert("4");
    Quot_2.add_attribute("SettlTyp", "0"); // 1
    Quot_2_set.insert("0");
    Quot_2.add_attribute("SettlDt", "LegSettlDate_t_858600051"); // 1
    Quot_2_set.insert("LegSettlDate_t_858600051");
    Quot_2.add_attribute("PxTyp", "4"); // 1
    Quot_2_set.insert("4");
    Quot_2.add_attribute("BidPx", "18674239.830000"); // 1
    Quot_2_set.insert("18674239.830000");
    Quot_2.add_attribute("OfrPx", "7395083.360000"); // 1
    Quot_2_set.insert("7395083.360000");
    Quot_2.add_attribute("RefID", "LegRefID_t_356667542"); // 1
    Quot_2_set.insert("LegRefID_t_356667542");
    Quot_2.add_attribute("LegBidFwdPnts", "12532245.540000"); // 1
    Quot_2_set.insert("12532245.540000");
    Quot_2.add_attribute("LegOfrFwdPnts", "4643337.540000"); // 1
    Quot_2_set.insert("4643337.540000");
    all_values.push_back(Quot_2_set);
    all_compo_names.insert("Quot_2_set");

    {
      xml_element Leg_63{"Leg"};
      multiset<string> Leg_63_set;
      Leg_63.add_attribute("Sym", "LegSymbol_t_166103640"); // 2
      Leg_63_set.insert("LegSymbol_t_166103640");
      Leg_63.add_attribute("Sfx", "CD"); // 2
      Leg_63_set.insert("CD");
      Leg_63.add_attribute("ID", "LegSecurityID_t_1082324081"); // 2
      Leg_63_set.insert("LegSecurityID_t_1082324081");
      Leg_63.add_attribute("Src", "J"); // 2
      Leg_63_set.insert("J");
      Leg_63.add_attribute("Prod", "8"); // 2
      Leg_63_set.insert("8");
      Leg_63.add_attribute("CFI", "LegCFICode_t_1721732993"); // 2
      Leg_63_set.insert("LegCFICode_t_1721732993");
      Leg_63.add_attribute("SecTyp", "USTB"); // 2
      Leg_63_set.insert("USTB");
      Leg_63.add_attribute("SecSubTyp", "LegSecuritySubType_t_960170154"); // 2
      Leg_63_set.insert("LegSecuritySubType_t_960170154");
      Leg_63.add_attribute("MMY", "976223498"); // 2
      Leg_63_set.insert("976223498");
      Leg_63.add_attribute("Mat", "LegMaturityDate_t_1375488309"); // 2
      Leg_63_set.insert("LegMaturityDate_t_1375488309");
      Leg_63.add_attribute("MatTm", "760381762"); // 2
      Leg_63_set.insert("760381762");
      Leg_63.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1094745576"); // 2
      Leg_63_set.insert("LegCouponPaymentDate_t_1094745576");
      Leg_63.add_attribute("Issued", "LegIssueDate_t_1319757684"); // 2
      Leg_63_set.insert("LegIssueDate_t_1319757684");
      Leg_63.add_attribute("RepoCollSecTyp", "1620430641"); // 2
      Leg_63_set.insert("1620430641");
      Leg_63.add_attribute("RepoTrm", "916573767"); // 2
      Leg_63_set.insert("916573767");
      Leg_63.add_attribute("RepoRt", "12812970.450000"); // 2
      Leg_63_set.insert("12812970.450000");
      Leg_63.add_attribute("Fctr", "17057443.930000"); // 2
      Leg_63_set.insert("17057443.930000");
      Leg_63.add_attribute("CrdRtg", "LegCreditRating_t_354832489"); // 2
      Leg_63_set.insert("LegCreditRating_t_354832489");
      Leg_63.add_attribute("Rgstry", "LegInstrRegistry_t_2110073769"); // 2
      Leg_63_set.insert("LegInstrRegistry_t_2110073769");
      Leg_63.add_attribute("Ctry", "474055101"); // 2
      Leg_63_set.insert("474055101");
      Leg_63.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1751764453"); // 2
      Leg_63_set.insert("LegStateOrProvinceOfIssue_t_1751764453");
      Leg_63.add_attribute("Lcl", "LegLocaleOfIssue_t_567088891"); // 2
      Leg_63_set.insert("LegLocaleOfIssue_t_567088891");
      Leg_63.add_attribute("Redeem", "LegRedemptionDate_t_1182355031"); // 2
      Leg_63_set.insert("LegRedemptionDate_t_1182355031");
      Leg_63.add_attribute("Strk", "14584378.130000"); // 2
      Leg_63_set.insert("14584378.130000");
      Leg_63.add_attribute("StrkCcy", "CHF"); // 2
      Leg_63_set.insert("CHF");
      Leg_63.add_attribute("OptA", "1178378148"); // 2
      Leg_63_set.insert("1178378148");
      Leg_63.add_attribute("Cmult", "177136.300000"); // 2
      Leg_63_set.insert("177136.300000");
      Leg_63.add_attribute("MultTyp", "2"); // 2
      Leg_63_set.insert("2");
      Leg_63.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_63_set.insert("0");
      Leg_63.add_attribute("UOM", "MMBtu"); // 2
      Leg_63_set.insert("MMBtu");
      Leg_63.add_attribute("UOMQty", "5866818.530000"); // 2
      Leg_63_set.insert("5866818.530000");
      Leg_63.add_attribute("PxUOM", "lbs"); // 2
      Leg_63_set.insert("lbs");
      Leg_63.add_attribute("PxUOMQty", "15643714.660000"); // 2
      Leg_63_set.insert("15643714.660000");
      Leg_63.add_attribute("TmUnit", "S"); // 2
      Leg_63_set.insert("S");
      Leg_63.add_attribute("ExerStyle", "1"); // 2
      Leg_63_set.insert("1");
      Leg_63.add_attribute("CpnRt", "11386208.120000"); // 2
      Leg_63_set.insert("11386208.120000");
      Leg_63.add_attribute("Exch", "LegSecurityExchange_t_1035817832"); // 2
      Leg_63_set.insert("LegSecurityExchange_t_1035817832");
      Leg_63.add_attribute("Issr", "LegIssuer_t_378705018"); // 2
      Leg_63_set.insert("LegIssuer_t_378705018");
      Leg_63.add_attribute("EncLegIssrLen", "2114844310"); // 2
      Leg_63_set.insert("2114844310");
      Leg_63.add_attribute("EncLegIssr", "EncodedLegIssuer_t_263822494"); // 2
      Leg_63_set.insert("EncodedLegIssuer_t_263822494");
      Leg_63.add_attribute("Desc", "LegSecurityDesc_t_1139086780"); // 2
      Leg_63_set.insert("LegSecurityDesc_t_1139086780");
      Leg_63.add_attribute("EncLegSecDescLen", "1062106239"); // 2
      Leg_63_set.insert("1062106239");
      Leg_63.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1583580178"); // 2
      Leg_63_set.insert("EncodedLegSecurityDesc_t_1583580178");
      Leg_63.add_attribute("RatioQty", "6120337.730000"); // 2
      Leg_63_set.insert("6120337.730000");
      Leg_63.add_attribute("Side", "7"); // 2
      Leg_63_set.insert("7");
      Leg_63.add_attribute("Ccy", "JPY"); // 2
      Leg_63_set.insert("JPY");
      Leg_63.add_attribute("Pool", "LegPool_t_186028847"); // 2
      Leg_63_set.insert("LegPool_t_186028847");
      Leg_63.add_attribute("Dated", "LegDatedDate_t_679983696"); // 2
      Leg_63_set.insert("LegDatedDate_t_679983696");
      Leg_63.add_attribute("CSetMo", "644349619"); // 2
      Leg_63_set.insert("644349619");
      Leg_63.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1937793300"); // 2
      Leg_63_set.insert("LegInterestAccrualDate_t_1937793300");
      Leg_63.add_attribute("PutCall", "1247072587"); // 2
      Leg_63_set.insert("1247072587");
      Leg_63.add_attribute("LegOptionRatio", "18267046.500000"); // 2
      Leg_63_set.insert("18267046.500000");
      Leg_63.add_attribute("Px", "12487474.650000"); // 2
      Leg_63_set.insert("12487474.650000");
      all_values.push_back(Leg_63_set);
      all_compo_names.insert("Leg_63_set");

      {
        xml_element LegAID_63{"LegAID"};
        multiset<string> LegAID_63_set;
        LegAID_63.add_attribute("SecAltID", "LegSecurityAltID_t_525277881"); // 3
        LegAID_63_set.insert("LegSecurityAltID_t_525277881");
        LegAID_63.add_attribute("SecAltIDSrc", "2"); // 3
        LegAID_63_set.insert("2");
        all_values.push_back(LegAID_63_set);
        all_compo_names.insert("LegAID_63_set");

        Leg_63.add_element(LegAID_63);
      }
      Quot_2.add_element(Leg_63);
    }
    {
      xml_element Stip_126{"Stip"};
      multiset<string> Stip_126_set;
      Stip_126.add_attribute("StipTyp", "RESTRICTED"); // 2
      Stip_126_set.insert("RESTRICTED");
      Stip_126.add_attribute("StipVal", "LegStipulationValue_t_542991512"); // 2
      Stip_126_set.insert("LegStipulationValue_t_542991512");
      all_values.push_back(Stip_126_set);
      all_compo_names.insert("Stip_126_set");

      Quot_2.add_element(Stip_126);
    }
    {
      xml_element Pty_322{"Pty"};
      multiset<string> Pty_322_set;
      Pty_322.add_attribute("ID", "NestedPartyID_t_163709887"); // 2
      Pty_322_set.insert("NestedPartyID_t_163709887");
      Pty_322.add_attribute("Src", "D"); // 2
      Pty_322_set.insert("D");
      Pty_322.add_attribute("R", "10"); // 2
      Pty_322_set.insert("10");
      all_values.push_back(Pty_322_set);
      all_compo_names.insert("Pty_322_set");

      {
        xml_element Sub_322{"Sub"};
        multiset<string> Sub_322_set;
        Sub_322.add_attribute("ID", "NestedPartySubID_t_750391740"); // 3
        Sub_322_set.insert("NestedPartySubID_t_750391740");
        Sub_322.add_attribute("Typ", "26"); // 3
        Sub_322_set.insert("26");
        all_values.push_back(Sub_322_set);
        all_compo_names.insert("Sub_322_set");

        Pty_322.add_element(Sub_322);
      }
      Quot_2.add_element(Pty_322);
    }
    {
      xml_element BnchmkCurve_2{"BnchmkCurve"};
      multiset<string> BnchmkCurve_2_set;
      BnchmkCurve_2.add_attribute("Ccy", "GBP"); // 2
      BnchmkCurve_2_set.insert("GBP");
      BnchmkCurve_2.add_attribute("Name", "FutureSWAP"); // 2
      BnchmkCurve_2_set.insert("FutureSWAP");
      BnchmkCurve_2.add_attribute("Point", "LegBenchmarkCurvePoint_t_1580547527"); // 2
      BnchmkCurve_2_set.insert("LegBenchmarkCurvePoint_t_1580547527");
      BnchmkCurve_2.add_attribute("Px", "15958310.260000"); // 2
      BnchmkCurve_2_set.insert("15958310.260000");
      BnchmkCurve_2.add_attribute("PxTyp", "573231369"); // 2
      BnchmkCurve_2_set.insert("573231369");
      all_values.push_back(BnchmkCurve_2_set);
      all_compo_names.insert("BnchmkCurve_2_set");

      Quot_2.add_element(BnchmkCurve_2);
    }
    elt.add_element(Quot_2);
  } // end Quot
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_23{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_23_set;
    SprdBnchmkCurve_23.add_attribute("Spread", "15479081.900000"); // 1
    SprdBnchmkCurve_23_set.insert("15479081.900000");
    SprdBnchmkCurve_23.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_23_set.insert("EUR");
    SprdBnchmkCurve_23.add_attribute("Name", "SONIA"); // 1
    SprdBnchmkCurve_23_set.insert("SONIA");
    SprdBnchmkCurve_23.add_attribute("Point", "BenchmarkCurvePoint_t_1295750050"); // 1
    SprdBnchmkCurve_23_set.insert("BenchmarkCurvePoint_t_1295750050");
    SprdBnchmkCurve_23.add_attribute("Px", "1768682.740000"); // 1
    SprdBnchmkCurve_23_set.insert("1768682.740000");
    SprdBnchmkCurve_23.add_attribute("PxTyp", "6"); // 1
    SprdBnchmkCurve_23_set.insert("6");
    SprdBnchmkCurve_23.add_attribute("SecID", "BenchmarkSecurityID_t_2013143625"); // 1
    SprdBnchmkCurve_23_set.insert("BenchmarkSecurityID_t_2013143625");
    SprdBnchmkCurve_23.add_attribute("SecIDSrc", "K"); // 1
    SprdBnchmkCurve_23_set.insert("K");
    all_values.push_back(SprdBnchmkCurve_23_set);
    all_compo_names.insert("SprdBnchmkCurve_23_set");

    elt.add_element(SprdBnchmkCurve_23);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_18{"Yield"};
    multiset<string> Yield_18_set;
    Yield_18.add_attribute("Typ", "CHANGE"); // 1
    Yield_18_set.insert("CHANGE");
    Yield_18.add_attribute("Yld", "5456436.740000"); // 1
    Yield_18_set.insert("5456436.740000");
    Yield_18.add_attribute("CalcDt", "YieldCalcDate_t_991512411"); // 1
    Yield_18_set.insert("YieldCalcDate_t_991512411");
    Yield_18.add_attribute("RedDt", "YieldRedemptionDate_t_270065638"); // 1
    Yield_18_set.insert("YieldRedemptionDate_t_270065638");
    Yield_18.add_attribute("RedPx", "17927162.610000"); // 1
    Yield_18_set.insert("17927162.610000");
    Yield_18.add_attribute("RedPxTyp", "6"); // 1
    Yield_18_set.insert("6");
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
