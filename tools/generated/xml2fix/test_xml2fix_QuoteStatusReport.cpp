#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteStatusReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotStatRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusReport_message_t_0;
  elt.add_attribute("StatReqID", "QuoteStatusReqID_t_131947215"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteStatusReqID_t_131947215");
  elt.add_attribute("ReqID", "QuoteReqID_t_481794592"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteReqID_t_481794592");
  elt.add_attribute("QID", "QuoteID_t_915930978"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteID_t_915930978");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1005000550"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteMsgID_t_1005000550");
  elt.add_attribute("RspID", "QuoteRespID_t_1837995276"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteRespID_t_1837995276");
  elt.add_attribute("Typ", "1"); // 0
  QuoteStatusReport_message_t_0.insert("1");
  elt.add_attribute("CxlTyp", "4"); // 0
  QuoteStatusReport_message_t_0.insert("4");
  elt.add_attribute("SesID", "3"); // 0
  QuoteStatusReport_message_t_0.insert("3");
  elt.add_attribute("SesSub", "3"); // 0
  QuoteStatusReport_message_t_0.insert("3");
  elt.add_attribute("Side", "G"); // 0
  QuoteStatusReport_message_t_0.insert("G");
  elt.add_attribute("SettlTyp", "0"); // 0
  QuoteStatusReport_message_t_0.insert("0");
  elt.add_attribute("SettlDt", "SettlDate_t_2140659552"); // 0
  QuoteStatusReport_message_t_0.insert("SettlDate_t_2140659552");
  elt.add_attribute("SettlDt2", "SettlDate2_t_435291685"); // 0
  QuoteStatusReport_message_t_0.insert("SettlDate2_t_435291685");
  elt.add_attribute("Qty2", "6697226.010000"); // 0
  QuoteStatusReport_message_t_0.insert("6697226.010000");
  elt.add_attribute("Ccy", "JPY"); // 0
  QuoteStatusReport_message_t_0.insert("JPY");
  elt.add_attribute("Acct", "Account_t_1480618672"); // 0
  QuoteStatusReport_message_t_0.insert("Account_t_1480618672");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  QuoteStatusReport_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "7"); // 0
  QuoteStatusReport_message_t_0.insert("7");
  elt.add_attribute("ExpireTm", "ExpireTime_t_446252887"); // 0
  QuoteStatusReport_message_t_0.insert("ExpireTime_t_446252887");
  elt.add_attribute("Px", "4495246.180000"); // 0
  QuoteStatusReport_message_t_0.insert("4495246.180000");
  elt.add_attribute("PxTyp", "8"); // 0
  QuoteStatusReport_message_t_0.insert("8");
  elt.add_attribute("BidPx", "6089980.730000"); // 0
  QuoteStatusReport_message_t_0.insert("6089980.730000");
  elt.add_attribute("OfrPx", "5367068.040000"); // 0
  QuoteStatusReport_message_t_0.insert("5367068.040000");
  elt.add_attribute("MktBidPx", "11383268.670000"); // 0
  QuoteStatusReport_message_t_0.insert("11383268.670000");
  elt.add_attribute("MktOfrPx", "4353128.050000"); // 0
  QuoteStatusReport_message_t_0.insert("4353128.050000");
  elt.add_attribute("MinBidSz", "1672495.830000"); // 0
  QuoteStatusReport_message_t_0.insert("1672495.830000");
  elt.add_attribute("BidSz", "9013423.120000"); // 0
  QuoteStatusReport_message_t_0.insert("9013423.120000");
  elt.add_attribute("MinOfrSz", "17791360.490000"); // 0
  QuoteStatusReport_message_t_0.insert("17791360.490000");
  elt.add_attribute("OfrSz", "12836414.000000"); // 0
  QuoteStatusReport_message_t_0.insert("12836414.000000");
  elt.add_attribute("MinQty", "5759278.700000"); // 0
  QuoteStatusReport_message_t_0.insert("5759278.700000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_1911083264"); // 0
  QuoteStatusReport_message_t_0.insert("ValidUntilTime_t_1911083264");
  elt.add_attribute("BidSpotRt", "17654359.920000"); // 0
  QuoteStatusReport_message_t_0.insert("17654359.920000");
  elt.add_attribute("OfrSpotRt", "14918588.480000"); // 0
  QuoteStatusReport_message_t_0.insert("14918588.480000");
  elt.add_attribute("BidFwdPnts", "7686001.670000"); // 0
  QuoteStatusReport_message_t_0.insert("7686001.670000");
  elt.add_attribute("OfrFwdPnts", "14559476.210000"); // 0
  QuoteStatusReport_message_t_0.insert("14559476.210000");
  elt.add_attribute("MidPx", "20580446.610000"); // 0
  QuoteStatusReport_message_t_0.insert("20580446.610000");
  elt.add_attribute("BidYld", "5468270.500000"); // 0
  QuoteStatusReport_message_t_0.insert("5468270.500000");
  elt.add_attribute("MidYld", "3280142.210000"); // 0
  QuoteStatusReport_message_t_0.insert("3280142.210000");
  elt.add_attribute("OfrYld", "19574320.720000"); // 0
  QuoteStatusReport_message_t_0.insert("19574320.720000");
  elt.add_attribute("TxnTm", "TransactTime_t_1708299881"); // 0
  QuoteStatusReport_message_t_0.insert("TransactTime_t_1708299881");
  elt.add_attribute("OrdTyp", "J"); // 0
  QuoteStatusReport_message_t_0.insert("J");
  elt.add_attribute("BidFwdPnts2", "19506079.770000"); // 0
  QuoteStatusReport_message_t_0.insert("19506079.770000");
  elt.add_attribute("OfrFwdPnts2", "21435915.670000"); // 0
  QuoteStatusReport_message_t_0.insert("21435915.670000");
  elt.add_attribute("SettlCurrBidFxRt", "15462403.710000"); // 0
  QuoteStatusReport_message_t_0.insert("15462403.710000");
  elt.add_attribute("SettlCurrOfrFxRt", "4020327.560000"); // 0
  QuoteStatusReport_message_t_0.insert("4020327.560000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  QuoteStatusReport_message_t_0.insert("D");
  elt.add_attribute("CommTyp", "6"); // 0
  QuoteStatusReport_message_t_0.insert("6");
  elt.add_attribute("Comm", "Commission_t_431757189"); // 0
  QuoteStatusReport_message_t_0.insert("Commission_t_431757189");
  elt.add_attribute("CustCpcty", "2"); // 0
  QuoteStatusReport_message_t_0.insert("2");
  elt.add_attribute("ExDest", "ExDestination_t_1325628282"); // 0
  QuoteStatusReport_message_t_0.insert("ExDestination_t_1325628282");
  elt.add_attribute("ExDestIDSrc", "E"); // 0
  QuoteStatusReport_message_t_0.insert("E");
  elt.add_attribute("BkngTyp", "0"); // 0
  QuoteStatusReport_message_t_0.insert("0");
  elt.add_attribute("Cpcty", "W"); // 0
  QuoteStatusReport_message_t_0.insert("W");
  elt.add_attribute("Rstctions", "3"); // 0
  QuoteStatusReport_message_t_0.insert("3");
  elt.add_attribute("Stat", "12"); // 0
  QuoteStatusReport_message_t_0.insert("12");
  elt.add_attribute("RejRsn", "7"); // 0
  QuoteStatusReport_message_t_0.insert("7");
  elt.add_attribute("Txt", "Text_t_1585238196"); // 0
  QuoteStatusReport_message_t_0.insert("Text_t_1585238196");
  elt.add_attribute("EncTxtLen", "1187767175"); // 0
  QuoteStatusReport_message_t_0.insert("1187767175");
  elt.add_attribute("EncTxt", "EncodedText_t_2001591561"); // 0
  QuoteStatusReport_message_t_0.insert("EncodedText_t_2001591561");
  all_values.push_back(QuoteStatusReport_message_t_0);
  all_compo_names.insert("QuoteStatusReport_message_t");

  { // Hdr
    xml_element Hdr_73{"Hdr"};
    multiset<string> Hdr_73_set;
    Hdr_73.add_attribute("SeqNum", "721395948"); // 1
    Hdr_73_set.insert("721395948");
    Hdr_73.add_attribute("SID", "SenderCompID_t_1763695045"); // 1
    Hdr_73_set.insert("SenderCompID_t_1763695045");
    Hdr_73.add_attribute("TID", "TargetCompID_t_1765191178"); // 1
    Hdr_73_set.insert("TargetCompID_t_1765191178");
    Hdr_73.add_attribute("OBID", "OnBehalfOfCompID_t_339348292"); // 1
    Hdr_73_set.insert("OnBehalfOfCompID_t_339348292");
    Hdr_73.add_attribute("D2ID", "DeliverToCompID_t_1108070246"); // 1
    Hdr_73_set.insert("DeliverToCompID_t_1108070246");
    Hdr_73.add_attribute("SSub", "SenderSubID_t_386307697"); // 1
    Hdr_73_set.insert("SenderSubID_t_386307697");
    Hdr_73.add_attribute("SLoc", "SenderLocationID_t_1795295913"); // 1
    Hdr_73_set.insert("SenderLocationID_t_1795295913");
    Hdr_73.add_attribute("TSub", "TargetSubID_t_1018631259"); // 1
    Hdr_73_set.insert("TargetSubID_t_1018631259");
    Hdr_73.add_attribute("TLoc", "TargetLocationID_t_933134747"); // 1
    Hdr_73_set.insert("TargetLocationID_t_933134747");
    Hdr_73.add_attribute("OBSub", "OnBehalfOfSubID_t_2123310135"); // 1
    Hdr_73_set.insert("OnBehalfOfSubID_t_2123310135");
    Hdr_73.add_attribute("OBLoc", "OnBehalfOfLocationID_t_828579684"); // 1
    Hdr_73_set.insert("OnBehalfOfLocationID_t_828579684");
    Hdr_73.add_attribute("D2Sub", "DeliverToSubID_t_493950980"); // 1
    Hdr_73_set.insert("DeliverToSubID_t_493950980");
    Hdr_73.add_attribute("D2Loc", "DeliverToLocationID_t_852344257"); // 1
    Hdr_73_set.insert("DeliverToLocationID_t_852344257");
    Hdr_73.add_attribute("PosDup", "Y"); // 1
    Hdr_73_set.insert("Y");
    Hdr_73.add_attribute("PosRsnd", "Y"); // 1
    Hdr_73_set.insert("Y");
    Hdr_73.add_attribute("Snt", "SendingTime_t_251100980"); // 1
    Hdr_73_set.insert("SendingTime_t_251100980");
    Hdr_73.add_attribute("OrigSnt", "OrigSendingTime_t_1033736769"); // 1
    Hdr_73_set.insert("OrigSendingTime_t_1033736769");
    Hdr_73.add_attribute("MsgEncd", "MessageEncoding_t_955182928"); // 1
    Hdr_73_set.insert("MessageEncoding_t_955182928");
    all_values.push_back(Hdr_73_set);
    all_compo_names.insert("Hdr_73_set");

    {
      xml_element Hop_73{"Hop"};
      multiset<string> Hop_73_set;
      Hop_73.add_attribute("ID", "HopCompID_t_1130476375"); // 2
      Hop_73_set.insert("HopCompID_t_1130476375");
      Hop_73.add_attribute("Ref", "1465493958"); // 2
      Hop_73_set.insert("1465493958");
      Hop_73.add_attribute("Snt", "HopSendingTime_t_1905213685"); // 2
      Hop_73_set.insert("HopSendingTime_t_1905213685");
      all_values.push_back(Hop_73_set);
      all_compo_names.insert("Hop_73_set");

      Hdr_73.add_element(Hop_73);
    }
    elt.add_element(Hdr_73);
  } // end Hdr
  { // Pty
    xml_element Pty_331{"Pty"};
    multiset<string> Pty_331_set;
    Pty_331.add_attribute("ID", "PartyID_t_199292118"); // 1
    Pty_331_set.insert("PartyID_t_199292118");
    Pty_331.add_attribute("Src", "C"); // 1
    Pty_331_set.insert("C");
    Pty_331.add_attribute("R", "29"); // 1
    Pty_331_set.insert("29");
    all_values.push_back(Pty_331_set);
    all_compo_names.insert("Pty_331_set");

    {
      xml_element Sub_331{"Sub"};
      multiset<string> Sub_331_set;
      Sub_331.add_attribute("ID", "PartySubID_t_1617280731"); // 2
      Sub_331_set.insert("PartySubID_t_1617280731");
      Sub_331.add_attribute("Typ", "12"); // 2
      Sub_331_set.insert("12");
      all_values.push_back(Sub_331_set);
      all_compo_names.insert("Sub_331_set");

      Pty_331.add_element(Sub_331);
    }
    elt.add_element(Pty_331);
  } // end Pty
  { // Pty
    xml_element Pty_332{"Pty"};
    multiset<string> Pty_332_set;
    Pty_332.add_attribute("ID", "PartyID_t_318219229"); // 1
    Pty_332_set.insert("PartyID_t_318219229");
    Pty_332.add_attribute("Src", "2"); // 1
    Pty_332_set.insert("2");
    Pty_332.add_attribute("R", "43"); // 1
    Pty_332_set.insert("43");
    all_values.push_back(Pty_332_set);
    all_compo_names.insert("Pty_332_set");

    {
      xml_element Sub_332{"Sub"};
      multiset<string> Sub_332_set;
      Sub_332.add_attribute("ID", "PartySubID_t_172327142"); // 2
      Sub_332_set.insert("PartySubID_t_172327142");
      Sub_332.add_attribute("Typ", "19"); // 2
      Sub_332_set.insert("19");
      all_values.push_back(Sub_332_set);
      all_compo_names.insert("Sub_332_set");

      Pty_332.add_element(Sub_332);
    }
    elt.add_element(Pty_332);
  } // end Pty
  { // Pty
    xml_element Pty_333{"Pty"};
    multiset<string> Pty_333_set;
    Pty_333.add_attribute("ID", "PartyID_t_2143715117"); // 1
    Pty_333_set.insert("PartyID_t_2143715117");
    Pty_333.add_attribute("Src", "D"); // 1
    Pty_333_set.insert("D");
    Pty_333.add_attribute("R", "8"); // 1
    Pty_333_set.insert("8");
    all_values.push_back(Pty_333_set);
    all_compo_names.insert("Pty_333_set");

    {
      xml_element Sub_333{"Sub"};
      multiset<string> Sub_333_set;
      Sub_333.add_attribute("ID", "PartySubID_t_1104301715"); // 2
      Sub_333_set.insert("PartySubID_t_1104301715");
      Sub_333.add_attribute("Typ", "14"); // 2
      Sub_333_set.insert("14");
      all_values.push_back(Sub_333_set);
      all_compo_names.insert("Sub_333_set");

      Pty_333.add_element(Sub_333);
    }
    elt.add_element(Pty_333);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_16{"TgtPty"};
    multiset<string> TgtPty_16_set;
    TgtPty_16.add_attribute("ID", "TargetPartyID_t_2122932975"); // 1
    TgtPty_16_set.insert("TargetPartyID_t_2122932975");
    TgtPty_16.add_attribute("Src", "B"); // 1
    TgtPty_16_set.insert("B");
    TgtPty_16.add_attribute("R", "5"); // 1
    TgtPty_16_set.insert("5");
    all_values.push_back(TgtPty_16_set);
    all_compo_names.insert("TgtPty_16_set");

    elt.add_element(TgtPty_16);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_17{"TgtPty"};
    multiset<string> TgtPty_17_set;
    TgtPty_17.add_attribute("ID", "TargetPartyID_t_804029011"); // 1
    TgtPty_17_set.insert("TargetPartyID_t_804029011");
    TgtPty_17.add_attribute("Src", "E"); // 1
    TgtPty_17_set.insert("E");
    TgtPty_17.add_attribute("R", "33"); // 1
    TgtPty_17_set.insert("33");
    all_values.push_back(TgtPty_17_set);
    all_compo_names.insert("TgtPty_17_set");

    elt.add_element(TgtPty_17);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_63{"Instrmt"};
    multiset<string> Instrmt_63_set;
    Instrmt_63.add_attribute("Sym", "Symbol_t_1435733024"); // 1
    Instrmt_63_set.insert("Symbol_t_1435733024");
    Instrmt_63.add_attribute("Sfx", "CD"); // 1
    Instrmt_63_set.insert("CD");
    Instrmt_63.add_attribute("ID", "SecurityID_t_695379861"); // 1
    Instrmt_63_set.insert("SecurityID_t_695379861");
    Instrmt_63.add_attribute("Src", "L"); // 1
    Instrmt_63_set.insert("L");
    Instrmt_63.add_attribute("Prod", "13"); // 1
    Instrmt_63_set.insert("13");
    Instrmt_63.add_attribute("ProdCmplx", "ProductComplex_t_1825856236"); // 1
    Instrmt_63_set.insert("ProductComplex_t_1825856236");
    Instrmt_63.add_attribute("SecGrp", "SecurityGroup_t_1787480103"); // 1
    Instrmt_63_set.insert("SecurityGroup_t_1787480103");
    Instrmt_63.add_attribute("CFI", "CFICode_t_658916314"); // 1
    Instrmt_63_set.insert("CFICode_t_658916314");
    Instrmt_63.add_attribute("SecTyp", "EUCORP"); // 1
    Instrmt_63_set.insert("EUCORP");
    Instrmt_63.add_attribute("SubTyp", "SecuritySubType_t_1986772222"); // 1
    Instrmt_63_set.insert("SecuritySubType_t_1986772222");
    Instrmt_63.add_attribute("MMY", "1712227996"); // 1
    Instrmt_63_set.insert("1712227996");
    Instrmt_63.add_attribute("MatDt", "MaturityDate_t_82757313"); // 1
    Instrmt_63_set.insert("MaturityDate_t_82757313");
    Instrmt_63.add_attribute("MatTm", "1456569305"); // 1
    Instrmt_63_set.insert("1456569305");
    Instrmt_63.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_904480892"); // 1
    Instrmt_63_set.insert("SettleOnOpenFlag_t_904480892");
    Instrmt_63.add_attribute("AsgnMeth", "400976542"); // 1
    Instrmt_63_set.insert("400976542");
    Instrmt_63.add_attribute("Status", "1"); // 1
    Instrmt_63_set.insert("1");
    Instrmt_63.add_attribute("CpnPmt", "CouponPaymentDate_t_1284500964"); // 1
    Instrmt_63_set.insert("CouponPaymentDate_t_1284500964");
    Instrmt_63.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_63_set.insert("MR");
    Instrmt_63.add_attribute("Snrty", "SB"); // 1
    Instrmt_63_set.insert("SB");
    Instrmt_63.add_attribute("NotlPctOut", "12807324.340000"); // 1
    Instrmt_63_set.insert("12807324.340000");
    Instrmt_63.add_attribute("OrigNotlPctOut", "3633383.570000"); // 1
    Instrmt_63_set.insert("3633383.570000");
    Instrmt_63.add_attribute("AttchPnt", "21088480.340000"); // 1
    Instrmt_63_set.insert("21088480.340000");
    Instrmt_63.add_attribute("DetchPnt", "2375505.010000"); // 1
    Instrmt_63_set.insert("2375505.010000");
    Instrmt_63.add_attribute("Issued", "IssueDate_t_539680727"); // 1
    Instrmt_63_set.insert("IssueDate_t_539680727");
    Instrmt_63.add_attribute("RepoCollSecTyp", "1724956171"); // 1
    Instrmt_63_set.insert("1724956171");
    Instrmt_63.add_attribute("RepoTrm", "212999828"); // 1
    Instrmt_63_set.insert("212999828");
    Instrmt_63.add_attribute("RepoRt", "16491578.430000"); // 1
    Instrmt_63_set.insert("16491578.430000");
    Instrmt_63.add_attribute("Fctr", "13168907.950000"); // 1
    Instrmt_63_set.insert("13168907.950000");
    Instrmt_63.add_attribute("CrdRtg", "CreditRating_t_1017028839"); // 1
    Instrmt_63_set.insert("CreditRating_t_1017028839");
    Instrmt_63.add_attribute("Rgstry", "InstrRegistry_t_1105102292"); // 1
    Instrmt_63_set.insert("InstrRegistry_t_1105102292");
    Instrmt_63.add_attribute("IssuCtry", "1761169676"); // 1
    Instrmt_63_set.insert("1761169676");
    Instrmt_63.add_attribute("StPrv", "StateOrProvinceOfIssue_t_305278215"); // 1
    Instrmt_63_set.insert("StateOrProvinceOfIssue_t_305278215");
    Instrmt_63.add_attribute("Lcl", "LocaleOfIssue_t_1051105641"); // 1
    Instrmt_63_set.insert("LocaleOfIssue_t_1051105641");
    Instrmt_63.add_attribute("Redeem", "RedemptionDate_t_309065889"); // 1
    Instrmt_63_set.insert("RedemptionDate_t_309065889");
    Instrmt_63.add_attribute("StrkPx", "6272643.600000"); // 1
    Instrmt_63_set.insert("6272643.600000");
    Instrmt_63.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_63_set.insert("EUR");
    Instrmt_63.add_attribute("StrkMult", "2672608.160000"); // 1
    Instrmt_63_set.insert("2672608.160000");
    Instrmt_63.add_attribute("StrkValu", "4637245.840000"); // 1
    Instrmt_63_set.insert("4637245.840000");
    Instrmt_63.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_63_set.insert("3");
    Instrmt_63.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_63_set.insert("1");
    Instrmt_63.add_attribute("StrkPxBndryPrcsn", "284689.320000"); // 1
    Instrmt_63_set.insert("284689.320000");
    Instrmt_63.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_63_set.insert("1");
    Instrmt_63.add_attribute("OptAt", "1563118695"); // 1
    Instrmt_63_set.insert("1563118695");
    Instrmt_63.add_attribute("Mult", "9329498.250000"); // 1
    Instrmt_63_set.insert("9329498.250000");
    Instrmt_63.add_attribute("MultTyp", "2"); // 1
    Instrmt_63_set.insert("2");
    Instrmt_63.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_63_set.insert("1");
    Instrmt_63.add_attribute("MinPxIncr", "699671.410000"); // 1
    Instrmt_63_set.insert("699671.410000");
    Instrmt_63.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1031469615"); // 1
    Instrmt_63_set.insert("MinPriceIncrementAmount_t_1031469615");
    Instrmt_63.add_attribute("UOM", "Gal"); // 1
    Instrmt_63_set.insert("Gal");
    Instrmt_63.add_attribute("UOMQty", "13506995.750000"); // 1
    Instrmt_63_set.insert("13506995.750000");
    Instrmt_63.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_63_set.insert("MWh");
    Instrmt_63.add_attribute("PxUOMQty", "18816725.320000"); // 1
    Instrmt_63_set.insert("18816725.320000");
    Instrmt_63.add_attribute("SettlMeth", "P"); // 1
    Instrmt_63_set.insert("P");
    Instrmt_63.add_attribute("ExerStyle", "2"); // 1
    Instrmt_63_set.insert("2");
    Instrmt_63.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_63_set.insert("2");
    Instrmt_63.add_attribute("OptPayAmt", "OptPayoutAmount_t_1801249905"); // 1
    Instrmt_63_set.insert("OptPayoutAmount_t_1801249905");
    Instrmt_63.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_63_set.insert("PCTPAR");
    Instrmt_63.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_63_set.insert("CDS");
    Instrmt_63.add_attribute("ListMeth", "1"); // 1
    Instrmt_63_set.insert("1");
    Instrmt_63.add_attribute("CapPx", "3937815.400000"); // 1
    Instrmt_63_set.insert("3937815.400000");
    Instrmt_63.add_attribute("FlrPx", "2422382.320000"); // 1
    Instrmt_63_set.insert("2422382.320000");
    Instrmt_63.add_attribute("PutCall", "0"); // 1
    Instrmt_63_set.insert("0");
    Instrmt_63.add_attribute("FlexInd", "false"); // 1
    Instrmt_63_set.insert("false");
    Instrmt_63.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_63_set.insert("false");
    Instrmt_63.add_attribute("TmUnit", "S"); // 1
    Instrmt_63_set.insert("S");
    Instrmt_63.add_attribute("CpnRt", "12496954.510000"); // 1
    Instrmt_63_set.insert("12496954.510000");
    Instrmt_63.add_attribute("Exch", "SecurityExchange_t_538742599"); // 1
    Instrmt_63_set.insert("SecurityExchange_t_538742599");
    Instrmt_63.add_attribute("PosLmt", "1870598489"); // 1
    Instrmt_63_set.insert("1870598489");
    Instrmt_63.add_attribute("NTPosLmt", "1713420035"); // 1
    Instrmt_63_set.insert("1713420035");
    Instrmt_63.add_attribute("Issr", "Issuer_t_513174673"); // 1
    Instrmt_63_set.insert("Issuer_t_513174673");
    Instrmt_63.add_attribute("EncIssrLen", "1977147879"); // 1
    Instrmt_63_set.insert("1977147879");
    Instrmt_63.add_attribute("EncIssr", "EncodedIssuer_t_1741888968"); // 1
    Instrmt_63_set.insert("EncodedIssuer_t_1741888968");
    Instrmt_63.add_attribute("Desc", "SecurityDesc_t_570364061"); // 1
    Instrmt_63_set.insert("SecurityDesc_t_570364061");
    Instrmt_63.add_attribute("EncSecDescLen", "1392782926"); // 1
    Instrmt_63_set.insert("1392782926");
    Instrmt_63.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_527355145"); // 1
    Instrmt_63_set.insert("EncodedSecurityDesc_t_527355145");
    Instrmt_63.add_attribute("Pool", "Pool_t_1028529992"); // 1
    Instrmt_63_set.insert("Pool_t_1028529992");
    Instrmt_63.add_attribute("CSetMo", "1172538909"); // 1
    Instrmt_63_set.insert("1172538909");
    Instrmt_63.add_attribute("CPPgm", "99"); // 1
    Instrmt_63_set.insert("99");
    Instrmt_63.add_attribute("CPRegT", "CPRegType_t_2059999607"); // 1
    Instrmt_63_set.insert("CPRegType_t_2059999607");
    Instrmt_63.add_attribute("Dated", "DatedDate_t_945363407"); // 1
    Instrmt_63_set.insert("DatedDate_t_945363407");
    Instrmt_63.add_attribute("IntAcrl", "InterestAccrualDate_t_1948021862"); // 1
    Instrmt_63_set.insert("InterestAccrualDate_t_1948021862");
    all_values.push_back(Instrmt_63_set);
    all_compo_names.insert("Instrmt_63_set");

    {
      xml_element AID_66{"AID"};
      multiset<string> AID_66_set;
      AID_66.add_attribute("AltID", "SecurityAltID_t_1307323932"); // 2
      AID_66_set.insert("SecurityAltID_t_1307323932");
      AID_66.add_attribute("AltIDSrc", "C"); // 2
      AID_66_set.insert("C");
      all_values.push_back(AID_66_set);
      all_compo_names.insert("AID_66_set");

      Instrmt_63.add_element(AID_66);
    }
    {
      xml_element SecXML_66{"SecXML"};
      multiset<string> SecXML_66_set;
      SecXML_66.add_attribute("Schema", "SecurityXMLSchema_t_1388788291"); // 2
      SecXML_66_set.insert("SecurityXMLSchema_t_1388788291");
      all_values.push_back(SecXML_66_set);
      all_compo_names.insert("SecXML_66_set");

      Instrmt_63.add_element(SecXML_66);
    }
    {
      xml_element Evnt_66{"Evnt"};
      multiset<string> Evnt_66_set;
      Evnt_66.add_attribute("EventTyp", "99"); // 2
      Evnt_66_set.insert("99");
      Evnt_66.add_attribute("Dt", "EventDate_t_2138697347"); // 2
      Evnt_66_set.insert("EventDate_t_2138697347");
      Evnt_66.add_attribute("Tm", "EventTime_t_1042554548"); // 2
      Evnt_66_set.insert("EventTime_t_1042554548");
      Evnt_66.add_attribute("Px", "3830082.320000"); // 2
      Evnt_66_set.insert("3830082.320000");
      Evnt_66.add_attribute("Txt", "EventText_t_619765903"); // 2
      Evnt_66_set.insert("EventText_t_619765903");
      all_values.push_back(Evnt_66_set);
      all_compo_names.insert("Evnt_66_set");

      Instrmt_63.add_element(Evnt_66);
    }
    {
      xml_element Pty_334{"Pty"};
      multiset<string> Pty_334_set;
      Pty_334.add_attribute("ID", "InstrumentPartyID_t_1713349645"); // 2
      Pty_334_set.insert("InstrumentPartyID_t_1713349645");
      Pty_334.add_attribute("Src", "7"); // 2
      Pty_334_set.insert("7");
      Pty_334.add_attribute("R", "85"); // 2
      Pty_334_set.insert("85");
      all_values.push_back(Pty_334_set);
      all_compo_names.insert("Pty_334_set");

      {
        xml_element Sub_334{"Sub"};
        multiset<string> Sub_334_set;
        Sub_334.add_attribute("ID", "InstrumentPartySubID_t_541939310"); // 3
        Sub_334_set.insert("InstrumentPartySubID_t_541939310");
        Sub_334.add_attribute("Typ", "33"); // 3
        Sub_334_set.insert("33");
        all_values.push_back(Sub_334_set);
        all_compo_names.insert("Sub_334_set");

        Pty_334.add_element(Sub_334);
      }
      Instrmt_63.add_element(Pty_334);
    }
    {
      xml_element CmplxEvnt_63{"CmplxEvnt"};
      multiset<string> CmplxEvnt_63_set;
      CmplxEvnt_63.add_attribute("Typ", "7"); // 2
      CmplxEvnt_63_set.insert("7");
      CmplxEvnt_63.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2145276983"); // 2
      CmplxEvnt_63_set.insert("ComplexOptPayoutAmount_t_2145276983");
      CmplxEvnt_63.add_attribute("Px", "13238887.560000"); // 2
      CmplxEvnt_63_set.insert("13238887.560000");
      CmplxEvnt_63.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_63_set.insert("1");
      CmplxEvnt_63.add_attribute("PxBndryPrcsn", "18683918.240000"); // 2
      CmplxEvnt_63_set.insert("18683918.240000");
      CmplxEvnt_63.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_63_set.insert("1");
      CmplxEvnt_63.add_attribute("Cond", "2"); // 2
      CmplxEvnt_63_set.insert("2");
      all_values.push_back(CmplxEvnt_63_set);
      all_compo_names.insert("CmplxEvnt_63_set");

      {
        xml_element EvntDts_63{"EvntDts"};
        multiset<string> EvntDts_63_set;
        EvntDts_63.add_attribute("StartDt", "ComplexEventStartDate_t_1698056055"); // 3
        EvntDts_63_set.insert("ComplexEventStartDate_t_1698056055");
        EvntDts_63.add_attribute("EndDt", "ComplexEventEndDate_t_484230463"); // 3
        EvntDts_63_set.insert("ComplexEventEndDate_t_484230463");
        all_values.push_back(EvntDts_63_set);
        all_compo_names.insert("EvntDts_63_set");

        {
          xml_element EvntTms_63{"EvntTms"};
          multiset<string> EvntTms_63_set;
          EvntTms_63.add_attribute("StartTm", "888105942"); // 4
          EvntTms_63_set.insert("888105942");
          EvntTms_63.add_attribute("EndTm", "943355333"); // 4
          EvntTms_63_set.insert("943355333");
          all_values.push_back(EvntTms_63_set);
          all_compo_names.insert("EvntTms_63_set");

          EvntDts_63.add_element(EvntTms_63);
        }
        CmplxEvnt_63.add_element(EvntDts_63);
      }
      Instrmt_63.add_element(CmplxEvnt_63);
    }
    elt.add_element(Instrmt_63);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_23{"FinDetls"};
    multiset<string> FinDetls_23_set;
    FinDetls_23.add_attribute("AgmtDesc", "AgreementDesc_t_1011585608"); // 1
    FinDetls_23_set.insert("AgreementDesc_t_1011585608");
    FinDetls_23.add_attribute("AgmtID", "AgreementID_t_1916635934"); // 1
    FinDetls_23_set.insert("AgreementID_t_1916635934");
    FinDetls_23.add_attribute("AgmtDt", "AgreementDate_t_2115894242"); // 1
    FinDetls_23_set.insert("AgreementDate_t_2115894242");
    FinDetls_23.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_23_set.insert("USD");
    FinDetls_23.add_attribute("TrmTyp", "2"); // 1
    FinDetls_23_set.insert("2");
    FinDetls_23.add_attribute("StartDt", "StartDate_t_1409446109"); // 1
    FinDetls_23_set.insert("StartDate_t_1409446109");
    FinDetls_23.add_attribute("EndDt", "EndDate_t_988992178"); // 1
    FinDetls_23_set.insert("EndDate_t_988992178");
    FinDetls_23.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_23_set.insert("0");
    FinDetls_23.add_attribute("MgnRatio", "6507507.520000"); // 1
    FinDetls_23_set.insert("6507507.520000");
    all_values.push_back(FinDetls_23_set);
    all_compo_names.insert("FinDetls_23_set");

    elt.add_element(FinDetls_23);
  } // end FinDetls
  { // Undly
    xml_element Undly_88{"Undly"};
    multiset<string> Undly_88_set;
    Undly_88.add_attribute("Sym", "UnderlyingSymbol_t_1584539992"); // 1
    Undly_88_set.insert("UnderlyingSymbol_t_1584539992");
    Undly_88.add_attribute("Sfx", "CD"); // 1
    Undly_88_set.insert("CD");
    Undly_88.add_attribute("ID", "UnderlyingSecurityID_t_318845747"); // 1
    Undly_88_set.insert("UnderlyingSecurityID_t_318845747");
    Undly_88.add_attribute("Src", "A"); // 1
    Undly_88_set.insert("A");
    Undly_88.add_attribute("Prod", "5"); // 1
    Undly_88_set.insert("5");
    Undly_88.add_attribute("CFI", "UnderlyingCFICode_t_1095635519"); // 1
    Undly_88_set.insert("UnderlyingCFICode_t_1095635519");
    Undly_88.add_attribute("SecTyp", "FADN"); // 1
    Undly_88_set.insert("FADN");
    Undly_88.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1801110608"); // 1
    Undly_88_set.insert("UnderlyingSecuritySubType_t_1801110608");
    Undly_88.add_attribute("MMY", "1169828824"); // 1
    Undly_88_set.insert("1169828824");
    Undly_88.add_attribute("Mat", "UnderlyingMaturityDate_t_184650990"); // 1
    Undly_88_set.insert("UnderlyingMaturityDate_t_184650990");
    Undly_88.add_attribute("MatTm", "1798903943"); // 1
    Undly_88_set.insert("1798903943");
    Undly_88.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_346233932"); // 1
    Undly_88_set.insert("UnderlyingCouponPaymentDate_t_346233932");
    Undly_88.add_attribute("RestrctTyp", "MM"); // 1
    Undly_88_set.insert("MM");
    Undly_88.add_attribute("Snrty", "SB"); // 1
    Undly_88_set.insert("SB");
    Undly_88.add_attribute("NotlPctOut", "12360590.750000"); // 1
    Undly_88_set.insert("12360590.750000");
    Undly_88.add_attribute("OrigNotlPctOut", "3069600.790000"); // 1
    Undly_88_set.insert("3069600.790000");
    Undly_88.add_attribute("AttchPnt", "10703845.260000"); // 1
    Undly_88_set.insert("10703845.260000");
    Undly_88.add_attribute("DetchPnt", "17202895.390000"); // 1
    Undly_88_set.insert("17202895.390000");
    Undly_88.add_attribute("Issued", "UnderlyingIssueDate_t_1195066021"); // 1
    Undly_88_set.insert("UnderlyingIssueDate_t_1195066021");
    Undly_88.add_attribute("RepoCollSecTyp", "2013739859"); // 1
    Undly_88_set.insert("2013739859");
    Undly_88.add_attribute("RepoTrm", "584391499"); // 1
    Undly_88_set.insert("584391499");
    Undly_88.add_attribute("RepoRt", "9642183.080000"); // 1
    Undly_88_set.insert("9642183.080000");
    Undly_88.add_attribute("Fctr", "19821504.530000"); // 1
    Undly_88_set.insert("19821504.530000");
    Undly_88.add_attribute("CrdRtg", "UnderlyingCreditRating_t_45815746"); // 1
    Undly_88_set.insert("UnderlyingCreditRating_t_45815746");
    Undly_88.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_645886554"); // 1
    Undly_88_set.insert("UnderlyingInstrRegistry_t_645886554");
    Undly_88.add_attribute("Ctry", "748440806"); // 1
    Undly_88_set.insert("748440806");
    Undly_88.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1455261855"); // 1
    Undly_88_set.insert("UnderlyingStateOrProvinceOfIssue_t_1455261855");
    Undly_88.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1634878732"); // 1
    Undly_88_set.insert("UnderlyingLocaleOfIssue_t_1634878732");
    Undly_88.add_attribute("Redeem", "UnderlyingRedemptionDate_t_194283450"); // 1
    Undly_88_set.insert("UnderlyingRedemptionDate_t_194283450");
    Undly_88.add_attribute("StrkPx", "21060126.070000"); // 1
    Undly_88_set.insert("21060126.070000");
    Undly_88.add_attribute("StrkCcy", "JPY"); // 1
    Undly_88_set.insert("JPY");
    Undly_88.add_attribute("OptA", "1651834260"); // 1
    Undly_88_set.insert("1651834260");
    Undly_88.add_attribute("Mult", "18895619.940000"); // 1
    Undly_88_set.insert("18895619.940000");
    Undly_88.add_attribute("MultTyp", "1"); // 1
    Undly_88_set.insert("1");
    Undly_88.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_88_set.insert("0");
    Undly_88.add_attribute("UOM", "MMBtu"); // 1
    Undly_88_set.insert("MMBtu");
    Undly_88.add_attribute("UOMQty", "6069884.230000"); // 1
    Undly_88_set.insert("6069884.230000");
    Undly_88.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_88_set.insert("oz_tr");
    Undly_88.add_attribute("PxUOMQty", "20075426.890000"); // 1
    Undly_88_set.insert("20075426.890000");
    Undly_88.add_attribute("TmUnit", "Yr"); // 1
    Undly_88_set.insert("Yr");
    Undly_88.add_attribute("ExerStyle", "1"); // 1
    Undly_88_set.insert("1");
    Undly_88.add_attribute("CpnRt", "2062929.730000"); // 1
    Undly_88_set.insert("2062929.730000");
    Undly_88.add_attribute("Exch", "UnderlyingSecurityExchange_t_780857612"); // 1
    Undly_88_set.insert("UnderlyingSecurityExchange_t_780857612");
    Undly_88.add_attribute("Issr", "UnderlyingIssuer_t_1588381284"); // 1
    Undly_88_set.insert("UnderlyingIssuer_t_1588381284");
    Undly_88.add_attribute("EncUndIssrLen", "1442352049"); // 1
    Undly_88_set.insert("1442352049");
    Undly_88.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1087817691"); // 1
    Undly_88_set.insert("EncodedUnderlyingIssuer_t_1087817691");
    Undly_88.add_attribute("Desc", "UnderlyingSecurityDesc_t_511282162"); // 1
    Undly_88_set.insert("UnderlyingSecurityDesc_t_511282162");
    Undly_88.add_attribute("EncUndSecDescLen", "1015157940"); // 1
    Undly_88_set.insert("1015157940");
    Undly_88.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_135400064"); // 1
    Undly_88_set.insert("EncodedUnderlyingSecurityDesc_t_135400064");
    Undly_88.add_attribute("CPPgm", "UnderlyingCPProgram_t_377538373"); // 1
    Undly_88_set.insert("UnderlyingCPProgram_t_377538373");
    Undly_88.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1599549439"); // 1
    Undly_88_set.insert("UnderlyingCPRegType_t_1599549439");
    Undly_88.add_attribute("AllocPct", "10996183.720000"); // 1
    Undly_88_set.insert("10996183.720000");
    Undly_88.add_attribute("Ccy", "USD"); // 1
    Undly_88_set.insert("USD");
    Undly_88.add_attribute("Qty", "17455049.260000"); // 1
    Undly_88_set.insert("17455049.260000");
    Undly_88.add_attribute("SettlTyp", "2"); // 1
    Undly_88_set.insert("2");
    Undly_88.add_attribute("CashAmt", "UnderlyingCashAmount_t_953143393"); // 1
    Undly_88_set.insert("UnderlyingCashAmount_t_953143393");
    Undly_88.add_attribute("CashTyp", "DIFF"); // 1
    Undly_88_set.insert("DIFF");
    Undly_88.add_attribute("Px", "11549294.340000"); // 1
    Undly_88_set.insert("11549294.340000");
    Undly_88.add_attribute("DirtPx", "9116723.530000"); // 1
    Undly_88_set.insert("9116723.530000");
    Undly_88.add_attribute("EndPx", "6561326.100000"); // 1
    Undly_88_set.insert("6561326.100000");
    Undly_88.add_attribute("StartVal", "UnderlyingStartValue_t_786269229"); // 1
    Undly_88_set.insert("UnderlyingStartValue_t_786269229");
    Undly_88.add_attribute("CurVal", "UnderlyingCurrentValue_t_416022965"); // 1
    Undly_88_set.insert("UnderlyingCurrentValue_t_416022965");
    Undly_88.add_attribute("EndVal", "UnderlyingEndValue_t_398210957"); // 1
    Undly_88_set.insert("UnderlyingEndValue_t_398210957");
    Undly_88.add_attribute("AdjQty", "4744312.700000"); // 1
    Undly_88_set.insert("4744312.700000");
    Undly_88.add_attribute("FxRate", "11795448.750000"); // 1
    Undly_88_set.insert("11795448.750000");
    Undly_88.add_attribute("FxRateCalc", "M"); // 1
    Undly_88_set.insert("M");
    Undly_88.add_attribute("CapValu", "UnderlyingCapValue_t_1081419694"); // 1
    Undly_88_set.insert("UnderlyingCapValue_t_1081419694");
    Undly_88.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1596693745"); // 1
    Undly_88_set.insert("UnderlyingSettlMethod_t_1596693745");
    Undly_88.add_attribute("PutCall", "1095983864"); // 1
    Undly_88_set.insert("1095983864");
    all_values.push_back(Undly_88_set);
    all_compo_names.insert("Undly_88_set");

    {
      xml_element UndAID_88{"UndAID"};
      multiset<string> UndAID_88_set;
      UndAID_88.add_attribute("AltID", "UnderlyingSecurityAltID_t_1873059108"); // 2
      UndAID_88_set.insert("UnderlyingSecurityAltID_t_1873059108");
      UndAID_88.add_attribute("AltIDSrc", "F"); // 2
      UndAID_88_set.insert("F");
      all_values.push_back(UndAID_88_set);
      all_compo_names.insert("UndAID_88_set");

      Undly_88.add_element(UndAID_88);
    }
    {
      xml_element Stip_138{"Stip"};
      multiset<string> Stip_138_set;
      Stip_138.add_attribute("Typ", "PRICEFREQ"); // 2
      Stip_138_set.insert("PRICEFREQ");
      Stip_138.add_attribute("Val", "UnderlyingStipValue_t_506433072"); // 2
      Stip_138_set.insert("UnderlyingStipValue_t_506433072");
      all_values.push_back(Stip_138_set);
      all_compo_names.insert("Stip_138_set");

      Undly_88.add_element(Stip_138);
    }
    {
      xml_element Pty_335{"Pty"};
      multiset<string> Pty_335_set;
      Pty_335.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1106160546"); // 2
      Pty_335_set.insert("UnderlyingInstrumentPartyID_t_1106160546");
      Pty_335.add_attribute("Src", "9"); // 2
      Pty_335_set.insert("9");
      Pty_335.add_attribute("R", "65"); // 2
      Pty_335_set.insert("65");
      all_values.push_back(Pty_335_set);
      all_compo_names.insert("Pty_335_set");

      {
        xml_element Sub_335{"Sub"};
        multiset<string> Sub_335_set;
        Sub_335.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1617442708"); // 3
        Sub_335_set.insert("UnderlyingInstrumentPartySubID_t_1617442708");
        Sub_335.add_attribute("Typ", "11"); // 3
        Sub_335_set.insert("11");
        all_values.push_back(Sub_335_set);
        all_compo_names.insert("Sub_335_set");

        Pty_335.add_element(Sub_335);
      }
      Undly_88.add_element(Pty_335);
    }
    elt.add_element(Undly_88);
  } // end Undly
  { // Undly
    xml_element Undly_89{"Undly"};
    multiset<string> Undly_89_set;
    Undly_89.add_attribute("Sym", "UnderlyingSymbol_t_1729650827"); // 1
    Undly_89_set.insert("UnderlyingSymbol_t_1729650827");
    Undly_89.add_attribute("Sfx", "WI"); // 1
    Undly_89_set.insert("WI");
    Undly_89.add_attribute("ID", "UnderlyingSecurityID_t_1064368970"); // 1
    Undly_89_set.insert("UnderlyingSecurityID_t_1064368970");
    Undly_89.add_attribute("Src", "9"); // 1
    Undly_89_set.insert("9");
    Undly_89.add_attribute("Prod", "4"); // 1
    Undly_89_set.insert("4");
    Undly_89.add_attribute("CFI", "UnderlyingCFICode_t_562250508"); // 1
    Undly_89_set.insert("UnderlyingCFICode_t_562250508");
    Undly_89.add_attribute("SecTyp", "MATURED"); // 1
    Undly_89_set.insert("MATURED");
    Undly_89.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1020348595"); // 1
    Undly_89_set.insert("UnderlyingSecuritySubType_t_1020348595");
    Undly_89.add_attribute("MMY", "1515393901"); // 1
    Undly_89_set.insert("1515393901");
    Undly_89.add_attribute("Mat", "UnderlyingMaturityDate_t_1512706841"); // 1
    Undly_89_set.insert("UnderlyingMaturityDate_t_1512706841");
    Undly_89.add_attribute("MatTm", "27794381"); // 1
    Undly_89_set.insert("27794381");
    Undly_89.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_279582606"); // 1
    Undly_89_set.insert("UnderlyingCouponPaymentDate_t_279582606");
    Undly_89.add_attribute("RestrctTyp", "FR"); // 1
    Undly_89_set.insert("FR");
    Undly_89.add_attribute("Snrty", "SB"); // 1
    Undly_89_set.insert("SB");
    Undly_89.add_attribute("NotlPctOut", "6956055.710000"); // 1
    Undly_89_set.insert("6956055.710000");
    Undly_89.add_attribute("OrigNotlPctOut", "4195667.610000"); // 1
    Undly_89_set.insert("4195667.610000");
    Undly_89.add_attribute("AttchPnt", "12884948.810000"); // 1
    Undly_89_set.insert("12884948.810000");
    Undly_89.add_attribute("DetchPnt", "18751504.460000"); // 1
    Undly_89_set.insert("18751504.460000");
    Undly_89.add_attribute("Issued", "UnderlyingIssueDate_t_1655491583"); // 1
    Undly_89_set.insert("UnderlyingIssueDate_t_1655491583");
    Undly_89.add_attribute("RepoCollSecTyp", "222430927"); // 1
    Undly_89_set.insert("222430927");
    Undly_89.add_attribute("RepoTrm", "1324360543"); // 1
    Undly_89_set.insert("1324360543");
    Undly_89.add_attribute("RepoRt", "6039917.990000"); // 1
    Undly_89_set.insert("6039917.990000");
    Undly_89.add_attribute("Fctr", "20954900.350000"); // 1
    Undly_89_set.insert("20954900.350000");
    Undly_89.add_attribute("CrdRtg", "UnderlyingCreditRating_t_842139805"); // 1
    Undly_89_set.insert("UnderlyingCreditRating_t_842139805");
    Undly_89.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1906268637"); // 1
    Undly_89_set.insert("UnderlyingInstrRegistry_t_1906268637");
    Undly_89.add_attribute("Ctry", "454439459"); // 1
    Undly_89_set.insert("454439459");
    Undly_89.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1948300351"); // 1
    Undly_89_set.insert("UnderlyingStateOrProvinceOfIssue_t_1948300351");
    Undly_89.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_355930227"); // 1
    Undly_89_set.insert("UnderlyingLocaleOfIssue_t_355930227");
    Undly_89.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2048690222"); // 1
    Undly_89_set.insert("UnderlyingRedemptionDate_t_2048690222");
    Undly_89.add_attribute("StrkPx", "14182594.110000"); // 1
    Undly_89_set.insert("14182594.110000");
    Undly_89.add_attribute("StrkCcy", "CAN"); // 1
    Undly_89_set.insert("CAN");
    Undly_89.add_attribute("OptA", "1265756844"); // 1
    Undly_89_set.insert("1265756844");
    Undly_89.add_attribute("Mult", "8851187.280000"); // 1
    Undly_89_set.insert("8851187.280000");
    Undly_89.add_attribute("MultTyp", "2"); // 1
    Undly_89_set.insert("2");
    Undly_89.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_89_set.insert("0");
    Undly_89.add_attribute("UOM", "MMBtu"); // 1
    Undly_89_set.insert("MMBtu");
    Undly_89.add_attribute("UOMQty", "4449661.360000"); // 1
    Undly_89_set.insert("4449661.360000");
    Undly_89.add_attribute("PxUOM", "Gal"); // 1
    Undly_89_set.insert("Gal");
    Undly_89.add_attribute("PxUOMQty", "8152794.890000"); // 1
    Undly_89_set.insert("8152794.890000");
    Undly_89.add_attribute("TmUnit", "Min"); // 1
    Undly_89_set.insert("Min");
    Undly_89.add_attribute("ExerStyle", "0"); // 1
    Undly_89_set.insert("0");
    Undly_89.add_attribute("CpnRt", "10948620.960000"); // 1
    Undly_89_set.insert("10948620.960000");
    Undly_89.add_attribute("Exch", "UnderlyingSecurityExchange_t_1979028781"); // 1
    Undly_89_set.insert("UnderlyingSecurityExchange_t_1979028781");
    Undly_89.add_attribute("Issr", "UnderlyingIssuer_t_1040182394"); // 1
    Undly_89_set.insert("UnderlyingIssuer_t_1040182394");
    Undly_89.add_attribute("EncUndIssrLen", "1790467667"); // 1
    Undly_89_set.insert("1790467667");
    Undly_89.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_251111894"); // 1
    Undly_89_set.insert("EncodedUnderlyingIssuer_t_251111894");
    Undly_89.add_attribute("Desc", "UnderlyingSecurityDesc_t_181193627"); // 1
    Undly_89_set.insert("UnderlyingSecurityDesc_t_181193627");
    Undly_89.add_attribute("EncUndSecDescLen", "1518134466"); // 1
    Undly_89_set.insert("1518134466");
    Undly_89.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1906603478"); // 1
    Undly_89_set.insert("EncodedUnderlyingSecurityDesc_t_1906603478");
    Undly_89.add_attribute("CPPgm", "UnderlyingCPProgram_t_403624554"); // 1
    Undly_89_set.insert("UnderlyingCPProgram_t_403624554");
    Undly_89.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_695011361"); // 1
    Undly_89_set.insert("UnderlyingCPRegType_t_695011361");
    Undly_89.add_attribute("AllocPct", "3631116.290000"); // 1
    Undly_89_set.insert("3631116.290000");
    Undly_89.add_attribute("Ccy", "EUR"); // 1
    Undly_89_set.insert("EUR");
    Undly_89.add_attribute("Qty", "1218966.180000"); // 1
    Undly_89_set.insert("1218966.180000");
    Undly_89.add_attribute("SettlTyp", "4"); // 1
    Undly_89_set.insert("4");
    Undly_89.add_attribute("CashAmt", "UnderlyingCashAmount_t_1337967870"); // 1
    Undly_89_set.insert("UnderlyingCashAmount_t_1337967870");
    Undly_89.add_attribute("CashTyp", "FIXED"); // 1
    Undly_89_set.insert("FIXED");
    Undly_89.add_attribute("Px", "7072769.740000"); // 1
    Undly_89_set.insert("7072769.740000");
    Undly_89.add_attribute("DirtPx", "6087436.340000"); // 1
    Undly_89_set.insert("6087436.340000");
    Undly_89.add_attribute("EndPx", "2985766.040000"); // 1
    Undly_89_set.insert("2985766.040000");
    Undly_89.add_attribute("StartVal", "UnderlyingStartValue_t_190650728"); // 1
    Undly_89_set.insert("UnderlyingStartValue_t_190650728");
    Undly_89.add_attribute("CurVal", "UnderlyingCurrentValue_t_1874500478"); // 1
    Undly_89_set.insert("UnderlyingCurrentValue_t_1874500478");
    Undly_89.add_attribute("EndVal", "UnderlyingEndValue_t_1183695332"); // 1
    Undly_89_set.insert("UnderlyingEndValue_t_1183695332");
    Undly_89.add_attribute("AdjQty", "3558100.330000"); // 1
    Undly_89_set.insert("3558100.330000");
    Undly_89.add_attribute("FxRate", "10524762.860000"); // 1
    Undly_89_set.insert("10524762.860000");
    Undly_89.add_attribute("FxRateCalc", "M"); // 1
    Undly_89_set.insert("M");
    Undly_89.add_attribute("CapValu", "UnderlyingCapValue_t_800776169"); // 1
    Undly_89_set.insert("UnderlyingCapValue_t_800776169");
    Undly_89.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1250800688"); // 1
    Undly_89_set.insert("UnderlyingSettlMethod_t_1250800688");
    Undly_89.add_attribute("PutCall", "1298860409"); // 1
    Undly_89_set.insert("1298860409");
    all_values.push_back(Undly_89_set);
    all_compo_names.insert("Undly_89_set");

    {
      xml_element UndAID_89{"UndAID"};
      multiset<string> UndAID_89_set;
      UndAID_89.add_attribute("AltID", "UnderlyingSecurityAltID_t_610965499"); // 2
      UndAID_89_set.insert("UnderlyingSecurityAltID_t_610965499");
      UndAID_89.add_attribute("AltIDSrc", "7"); // 2
      UndAID_89_set.insert("7");
      all_values.push_back(UndAID_89_set);
      all_compo_names.insert("UndAID_89_set");

      Undly_89.add_element(UndAID_89);
    }
    {
      xml_element Stip_139{"Stip"};
      multiset<string> Stip_139_set;
      Stip_139.add_attribute("Typ", "WAM"); // 2
      Stip_139_set.insert("WAM");
      Stip_139.add_attribute("Val", "UnderlyingStipValue_t_442510632"); // 2
      Stip_139_set.insert("UnderlyingStipValue_t_442510632");
      all_values.push_back(Stip_139_set);
      all_compo_names.insert("Stip_139_set");

      Undly_89.add_element(Stip_139);
    }
    {
      xml_element Pty_336{"Pty"};
      multiset<string> Pty_336_set;
      Pty_336.add_attribute("ID", "UnderlyingInstrumentPartyID_t_369618219"); // 2
      Pty_336_set.insert("UnderlyingInstrumentPartyID_t_369618219");
      Pty_336.add_attribute("Src", "A"); // 2
      Pty_336_set.insert("A");
      Pty_336.add_attribute("R", "12"); // 2
      Pty_336_set.insert("12");
      all_values.push_back(Pty_336_set);
      all_compo_names.insert("Pty_336_set");

      {
        xml_element Sub_336{"Sub"};
        multiset<string> Sub_336_set;
        Sub_336.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_550811846"); // 3
        Sub_336_set.insert("UnderlyingInstrumentPartySubID_t_550811846");
        Sub_336.add_attribute("Typ", "16"); // 3
        Sub_336_set.insert("16");
        all_values.push_back(Sub_336_set);
        all_compo_names.insert("Sub_336_set");

        Pty_336.add_element(Sub_336);
      }
      Undly_89.add_element(Pty_336);
    }
    elt.add_element(Undly_89);
  } // end Undly
  { // Undly
    xml_element Undly_90{"Undly"};
    multiset<string> Undly_90_set;
    Undly_90.add_attribute("Sym", "UnderlyingSymbol_t_452742357"); // 1
    Undly_90_set.insert("UnderlyingSymbol_t_452742357");
    Undly_90.add_attribute("Sfx", "WI"); // 1
    Undly_90_set.insert("WI");
    Undly_90.add_attribute("ID", "UnderlyingSecurityID_t_2102368704"); // 1
    Undly_90_set.insert("UnderlyingSecurityID_t_2102368704");
    Undly_90.add_attribute("Src", "3"); // 1
    Undly_90_set.insert("3");
    Undly_90.add_attribute("Prod", "5"); // 1
    Undly_90_set.insert("5");
    Undly_90.add_attribute("CFI", "UnderlyingCFICode_t_1492036223"); // 1
    Undly_90_set.insert("UnderlyingCFICode_t_1492036223");
    Undly_90.add_attribute("SecTyp", "BA"); // 1
    Undly_90_set.insert("BA");
    Undly_90.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2112137743"); // 1
    Undly_90_set.insert("UnderlyingSecuritySubType_t_2112137743");
    Undly_90.add_attribute("MMY", "682520446"); // 1
    Undly_90_set.insert("682520446");
    Undly_90.add_attribute("Mat", "UnderlyingMaturityDate_t_1415577451"); // 1
    Undly_90_set.insert("UnderlyingMaturityDate_t_1415577451");
    Undly_90.add_attribute("MatTm", "671931069"); // 1
    Undly_90_set.insert("671931069");
    Undly_90.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1291264080"); // 1
    Undly_90_set.insert("UnderlyingCouponPaymentDate_t_1291264080");
    Undly_90.add_attribute("RestrctTyp", "XR"); // 1
    Undly_90_set.insert("XR");
    Undly_90.add_attribute("Snrty", "SB"); // 1
    Undly_90_set.insert("SB");
    Undly_90.add_attribute("NotlPctOut", "10182809.100000"); // 1
    Undly_90_set.insert("10182809.100000");
    Undly_90.add_attribute("OrigNotlPctOut", "7503657.390000"); // 1
    Undly_90_set.insert("7503657.390000");
    Undly_90.add_attribute("AttchPnt", "12183918.310000"); // 1
    Undly_90_set.insert("12183918.310000");
    Undly_90.add_attribute("DetchPnt", "20707571.960000"); // 1
    Undly_90_set.insert("20707571.960000");
    Undly_90.add_attribute("Issued", "UnderlyingIssueDate_t_1233946659"); // 1
    Undly_90_set.insert("UnderlyingIssueDate_t_1233946659");
    Undly_90.add_attribute("RepoCollSecTyp", "2019168000"); // 1
    Undly_90_set.insert("2019168000");
    Undly_90.add_attribute("RepoTrm", "1174074237"); // 1
    Undly_90_set.insert("1174074237");
    Undly_90.add_attribute("RepoRt", "3853234.200000"); // 1
    Undly_90_set.insert("3853234.200000");
    Undly_90.add_attribute("Fctr", "4826498.510000"); // 1
    Undly_90_set.insert("4826498.510000");
    Undly_90.add_attribute("CrdRtg", "UnderlyingCreditRating_t_503510061"); // 1
    Undly_90_set.insert("UnderlyingCreditRating_t_503510061");
    Undly_90.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_631562278"); // 1
    Undly_90_set.insert("UnderlyingInstrRegistry_t_631562278");
    Undly_90.add_attribute("Ctry", "925160484"); // 1
    Undly_90_set.insert("925160484");
    Undly_90.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_873128280"); // 1
    Undly_90_set.insert("UnderlyingStateOrProvinceOfIssue_t_873128280");
    Undly_90.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_520785155"); // 1
    Undly_90_set.insert("UnderlyingLocaleOfIssue_t_520785155");
    Undly_90.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1618783011"); // 1
    Undly_90_set.insert("UnderlyingRedemptionDate_t_1618783011");
    Undly_90.add_attribute("StrkPx", "14239401.270000"); // 1
    Undly_90_set.insert("14239401.270000");
    Undly_90.add_attribute("StrkCcy", "USD"); // 1
    Undly_90_set.insert("USD");
    Undly_90.add_attribute("OptA", "230892880"); // 1
    Undly_90_set.insert("230892880");
    Undly_90.add_attribute("Mult", "18830275.540000"); // 1
    Undly_90_set.insert("18830275.540000");
    Undly_90.add_attribute("MultTyp", "0"); // 1
    Undly_90_set.insert("0");
    Undly_90.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_90_set.insert("2");
    Undly_90.add_attribute("UOM", "Bcf"); // 1
    Undly_90_set.insert("Bcf");
    Undly_90.add_attribute("UOMQty", "16776463.110000"); // 1
    Undly_90_set.insert("16776463.110000");
    Undly_90.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_90_set.insert("oz_tr");
    Undly_90.add_attribute("PxUOMQty", "19101005.760000"); // 1
    Undly_90_set.insert("19101005.760000");
    Undly_90.add_attribute("TmUnit", "Wk"); // 1
    Undly_90_set.insert("Wk");
    Undly_90.add_attribute("ExerStyle", "1"); // 1
    Undly_90_set.insert("1");
    Undly_90.add_attribute("CpnRt", "10538810.080000"); // 1
    Undly_90_set.insert("10538810.080000");
    Undly_90.add_attribute("Exch", "UnderlyingSecurityExchange_t_512410521"); // 1
    Undly_90_set.insert("UnderlyingSecurityExchange_t_512410521");
    Undly_90.add_attribute("Issr", "UnderlyingIssuer_t_888643536"); // 1
    Undly_90_set.insert("UnderlyingIssuer_t_888643536");
    Undly_90.add_attribute("EncUndIssrLen", "2072161918"); // 1
    Undly_90_set.insert("2072161918");
    Undly_90.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1262776260"); // 1
    Undly_90_set.insert("EncodedUnderlyingIssuer_t_1262776260");
    Undly_90.add_attribute("Desc", "UnderlyingSecurityDesc_t_2107035367"); // 1
    Undly_90_set.insert("UnderlyingSecurityDesc_t_2107035367");
    Undly_90.add_attribute("EncUndSecDescLen", "1995435467"); // 1
    Undly_90_set.insert("1995435467");
    Undly_90.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_349239271"); // 1
    Undly_90_set.insert("EncodedUnderlyingSecurityDesc_t_349239271");
    Undly_90.add_attribute("CPPgm", "UnderlyingCPProgram_t_1978719720"); // 1
    Undly_90_set.insert("UnderlyingCPProgram_t_1978719720");
    Undly_90.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1022026056"); // 1
    Undly_90_set.insert("UnderlyingCPRegType_t_1022026056");
    Undly_90.add_attribute("AllocPct", "7345626.920000"); // 1
    Undly_90_set.insert("7345626.920000");
    Undly_90.add_attribute("Ccy", "CHF"); // 1
    Undly_90_set.insert("CHF");
    Undly_90.add_attribute("Qty", "13661249.700000"); // 1
    Undly_90_set.insert("13661249.700000");
    Undly_90.add_attribute("SettlTyp", "2"); // 1
    Undly_90_set.insert("2");
    Undly_90.add_attribute("CashAmt", "UnderlyingCashAmount_t_251180750"); // 1
    Undly_90_set.insert("UnderlyingCashAmount_t_251180750");
    Undly_90.add_attribute("CashTyp", "DIFF"); // 1
    Undly_90_set.insert("DIFF");
    Undly_90.add_attribute("Px", "7103457.700000"); // 1
    Undly_90_set.insert("7103457.700000");
    Undly_90.add_attribute("DirtPx", "16751208.770000"); // 1
    Undly_90_set.insert("16751208.770000");
    Undly_90.add_attribute("EndPx", "16675689.750000"); // 1
    Undly_90_set.insert("16675689.750000");
    Undly_90.add_attribute("StartVal", "UnderlyingStartValue_t_634387490"); // 1
    Undly_90_set.insert("UnderlyingStartValue_t_634387490");
    Undly_90.add_attribute("CurVal", "UnderlyingCurrentValue_t_1906013757"); // 1
    Undly_90_set.insert("UnderlyingCurrentValue_t_1906013757");
    Undly_90.add_attribute("EndVal", "UnderlyingEndValue_t_1403112881"); // 1
    Undly_90_set.insert("UnderlyingEndValue_t_1403112881");
    Undly_90.add_attribute("AdjQty", "13742831.970000"); // 1
    Undly_90_set.insert("13742831.970000");
    Undly_90.add_attribute("FxRate", "12954903.310000"); // 1
    Undly_90_set.insert("12954903.310000");
    Undly_90.add_attribute("FxRateCalc", "D"); // 1
    Undly_90_set.insert("D");
    Undly_90.add_attribute("CapValu", "UnderlyingCapValue_t_904445860"); // 1
    Undly_90_set.insert("UnderlyingCapValue_t_904445860");
    Undly_90.add_attribute("SetMeth", "UnderlyingSettlMethod_t_649621001"); // 1
    Undly_90_set.insert("UnderlyingSettlMethod_t_649621001");
    Undly_90.add_attribute("PutCall", "245826291"); // 1
    Undly_90_set.insert("245826291");
    all_values.push_back(Undly_90_set);
    all_compo_names.insert("Undly_90_set");

    {
      xml_element UndAID_90{"UndAID"};
      multiset<string> UndAID_90_set;
      UndAID_90.add_attribute("AltID", "UnderlyingSecurityAltID_t_1850185975"); // 2
      UndAID_90_set.insert("UnderlyingSecurityAltID_t_1850185975");
      UndAID_90.add_attribute("AltIDSrc", "J"); // 2
      UndAID_90_set.insert("J");
      all_values.push_back(UndAID_90_set);
      all_compo_names.insert("UndAID_90_set");

      Undly_90.add_element(UndAID_90);
    }
    {
      xml_element Stip_140{"Stip"};
      multiset<string> Stip_140_set;
      Stip_140.add_attribute("Typ", "LOT"); // 2
      Stip_140_set.insert("LOT");
      Stip_140.add_attribute("Val", "UnderlyingStipValue_t_215112848"); // 2
      Stip_140_set.insert("UnderlyingStipValue_t_215112848");
      all_values.push_back(Stip_140_set);
      all_compo_names.insert("Stip_140_set");

      Undly_90.add_element(Stip_140);
    }
    {
      xml_element Pty_337{"Pty"};
      multiset<string> Pty_337_set;
      Pty_337.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1564326276"); // 2
      Pty_337_set.insert("UnderlyingInstrumentPartyID_t_1564326276");
      Pty_337.add_attribute("Src", "B"); // 2
      Pty_337_set.insert("B");
      Pty_337.add_attribute("R", "83"); // 2
      Pty_337_set.insert("83");
      all_values.push_back(Pty_337_set);
      all_compo_names.insert("Pty_337_set");

      {
        xml_element Sub_337{"Sub"};
        multiset<string> Sub_337_set;
        Sub_337.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1523877996"); // 3
        Sub_337_set.insert("UnderlyingInstrumentPartySubID_t_1523877996");
        Sub_337.add_attribute("Typ", "21"); // 3
        Sub_337_set.insert("21");
        all_values.push_back(Sub_337_set);
        all_compo_names.insert("Sub_337_set");

        Pty_337.add_element(Sub_337);
      }
      Undly_90.add_element(Pty_337);
    }
    elt.add_element(Undly_90);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_23{"OrdQty"};
    multiset<string> OrdQty_23_set;
    OrdQty_23.add_attribute("Qty", "18271283.800000"); // 1
    OrdQty_23_set.insert("18271283.800000");
    OrdQty_23.add_attribute("Cash", "13551140.680000"); // 1
    OrdQty_23_set.insert("13551140.680000");
    OrdQty_23.add_attribute("Pct", "20943634.450000"); // 1
    OrdQty_23_set.insert("20943634.450000");
    OrdQty_23.add_attribute("RndDir", "1"); // 1
    OrdQty_23_set.insert("1");
    OrdQty_23.add_attribute("RndMod", "16689999.910000"); // 1
    OrdQty_23_set.insert("16689999.910000");
    all_values.push_back(OrdQty_23_set);
    all_compo_names.insert("OrdQty_23_set");

    elt.add_element(OrdQty_23);
  } // end OrdQty
  { // Stip
    xml_element Stip_141{"Stip"};
    multiset<string> Stip_141_set;
    Stip_141.add_attribute("Typ", "ORDRINCR"); // 1
    Stip_141_set.insert("ORDRINCR");
    Stip_141.add_attribute("Val", "StipulationValue_t_760562751"); // 1
    Stip_141_set.insert("StipulationValue_t_760562751");
    all_values.push_back(Stip_141_set);
    all_compo_names.insert("Stip_141_set");

    elt.add_element(Stip_141);
  } // end Stip
  { // Stip
    xml_element Stip_142{"Stip"};
    multiset<string> Stip_142_set;
    Stip_142.add_attribute("Typ", "MHP"); // 1
    Stip_142_set.insert("MHP");
    Stip_142.add_attribute("Val", "StipulationValue_t_1519758871"); // 1
    Stip_142_set.insert("StipulationValue_t_1519758871");
    all_values.push_back(Stip_142_set);
    all_compo_names.insert("Stip_142_set");

    elt.add_element(Stip_142);
  } // end Stip
  { // Stip
    xml_element Stip_143{"Stip"};
    multiset<string> Stip_143_set;
    Stip_143.add_attribute("Typ", "PURPOSE"); // 1
    Stip_143_set.insert("PURPOSE");
    Stip_143.add_attribute("Val", "StipulationValue_t_1251233893"); // 1
    Stip_143_set.insert("StipulationValue_t_1251233893");
    all_values.push_back(Stip_143_set);
    all_compo_names.insert("Stip_143_set");

    elt.add_element(Stip_143);
  } // end Stip
  { // QuoteStat
    xml_element QuoteStat_0{"QuoteStat"};
    multiset<string> QuoteStat_0_set;
    QuoteStat_0.add_attribute("Qty", "21052960.120000"); // 1
    QuoteStat_0_set.insert("21052960.120000");
    QuoteStat_0.add_attribute("OrdQty", "10097640.020000"); // 1
    QuoteStat_0_set.insert("10097640.020000");
    QuoteStat_0.add_attribute("SwapTyp", "1"); // 1
    QuoteStat_0_set.insert("1");
    QuoteStat_0.add_attribute("SettlTyp", "5"); // 1
    QuoteStat_0_set.insert("5");
    QuoteStat_0.add_attribute("SettlDt", "LegSettlDate_t_157770686"); // 1
    QuoteStat_0_set.insert("LegSettlDate_t_157770686");
    all_values.push_back(QuoteStat_0_set);
    all_compo_names.insert("QuoteStat_0_set");

    {
      xml_element Leg_75{"Leg"};
      multiset<string> Leg_75_set;
      Leg_75.add_attribute("Sym", "LegSymbol_t_778682795"); // 2
      Leg_75_set.insert("LegSymbol_t_778682795");
      Leg_75.add_attribute("Sfx", "WI"); // 2
      Leg_75_set.insert("WI");
      Leg_75.add_attribute("ID", "LegSecurityID_t_807391687"); // 2
      Leg_75_set.insert("LegSecurityID_t_807391687");
      Leg_75.add_attribute("Src", "L"); // 2
      Leg_75_set.insert("L");
      Leg_75.add_attribute("Prod", "1"); // 2
      Leg_75_set.insert("1");
      Leg_75.add_attribute("CFI", "LegCFICode_t_1483074427"); // 2
      Leg_75_set.insert("LegCFICode_t_1483074427");
      Leg_75.add_attribute("SecTyp", "BUYSELL"); // 2
      Leg_75_set.insert("BUYSELL");
      Leg_75.add_attribute("SecSubTyp", "LegSecuritySubType_t_6872949"); // 2
      Leg_75_set.insert("LegSecuritySubType_t_6872949");
      Leg_75.add_attribute("MMY", "899917055"); // 2
      Leg_75_set.insert("899917055");
      Leg_75.add_attribute("Mat", "LegMaturityDate_t_1401118308"); // 2
      Leg_75_set.insert("LegMaturityDate_t_1401118308");
      Leg_75.add_attribute("MatTm", "1484762058"); // 2
      Leg_75_set.insert("1484762058");
      Leg_75.add_attribute("CpnPmt", "LegCouponPaymentDate_t_276311403"); // 2
      Leg_75_set.insert("LegCouponPaymentDate_t_276311403");
      Leg_75.add_attribute("Issued", "LegIssueDate_t_325972049"); // 2
      Leg_75_set.insert("LegIssueDate_t_325972049");
      Leg_75.add_attribute("RepoCollSecTyp", "1164406790"); // 2
      Leg_75_set.insert("1164406790");
      Leg_75.add_attribute("RepoTrm", "1631425471"); // 2
      Leg_75_set.insert("1631425471");
      Leg_75.add_attribute("RepoRt", "2728518.460000"); // 2
      Leg_75_set.insert("2728518.460000");
      Leg_75.add_attribute("Fctr", "15786142.150000"); // 2
      Leg_75_set.insert("15786142.150000");
      Leg_75.add_attribute("CrdRtg", "LegCreditRating_t_1152941815"); // 2
      Leg_75_set.insert("LegCreditRating_t_1152941815");
      Leg_75.add_attribute("Rgstry", "LegInstrRegistry_t_1745267761"); // 2
      Leg_75_set.insert("LegInstrRegistry_t_1745267761");
      Leg_75.add_attribute("Ctry", "1211462961"); // 2
      Leg_75_set.insert("1211462961");
      Leg_75.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1913504566"); // 2
      Leg_75_set.insert("LegStateOrProvinceOfIssue_t_1913504566");
      Leg_75.add_attribute("Lcl", "LegLocaleOfIssue_t_1321380777"); // 2
      Leg_75_set.insert("LegLocaleOfIssue_t_1321380777");
      Leg_75.add_attribute("Redeem", "LegRedemptionDate_t_583738185"); // 2
      Leg_75_set.insert("LegRedemptionDate_t_583738185");
      Leg_75.add_attribute("Strk", "12369294.390000"); // 2
      Leg_75_set.insert("12369294.390000");
      Leg_75.add_attribute("StrkCcy", "CAN"); // 2
      Leg_75_set.insert("CAN");
      Leg_75.add_attribute("OptA", "1194741803"); // 2
      Leg_75_set.insert("1194741803");
      Leg_75.add_attribute("Cmult", "14348950.250000"); // 2
      Leg_75_set.insert("14348950.250000");
      Leg_75.add_attribute("MultTyp", "2"); // 2
      Leg_75_set.insert("2");
      Leg_75.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_75_set.insert("1");
      Leg_75.add_attribute("UOM", "MWh"); // 2
      Leg_75_set.insert("MWh");
      Leg_75.add_attribute("UOMQty", "5502549.630000"); // 2
      Leg_75_set.insert("5502549.630000");
      Leg_75.add_attribute("PxUOM", "MMBtu"); // 2
      Leg_75_set.insert("MMBtu");
      Leg_75.add_attribute("PxUOMQty", "2525737.500000"); // 2
      Leg_75_set.insert("2525737.500000");
      Leg_75.add_attribute("TmUnit", "Yr"); // 2
      Leg_75_set.insert("Yr");
      Leg_75.add_attribute("ExerStyle", "1"); // 2
      Leg_75_set.insert("1");
      Leg_75.add_attribute("CpnRt", "17356481.770000"); // 2
      Leg_75_set.insert("17356481.770000");
      Leg_75.add_attribute("Exch", "LegSecurityExchange_t_1751496788"); // 2
      Leg_75_set.insert("LegSecurityExchange_t_1751496788");
      Leg_75.add_attribute("Issr", "LegIssuer_t_267044539"); // 2
      Leg_75_set.insert("LegIssuer_t_267044539");
      Leg_75.add_attribute("EncLegIssrLen", "488081585"); // 2
      Leg_75_set.insert("488081585");
      Leg_75.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1005131449"); // 2
      Leg_75_set.insert("EncodedLegIssuer_t_1005131449");
      Leg_75.add_attribute("Desc", "LegSecurityDesc_t_1751806597"); // 2
      Leg_75_set.insert("LegSecurityDesc_t_1751806597");
      Leg_75.add_attribute("EncLegSecDescLen", "764392988"); // 2
      Leg_75_set.insert("764392988");
      Leg_75.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1331103498"); // 2
      Leg_75_set.insert("EncodedLegSecurityDesc_t_1331103498");
      Leg_75.add_attribute("RatioQty", "7687297.400000"); // 2
      Leg_75_set.insert("7687297.400000");
      Leg_75.add_attribute("Side", "D"); // 2
      Leg_75_set.insert("D");
      Leg_75.add_attribute("Ccy", "EUR"); // 2
      Leg_75_set.insert("EUR");
      Leg_75.add_attribute("Pool", "LegPool_t_1401276627"); // 2
      Leg_75_set.insert("LegPool_t_1401276627");
      Leg_75.add_attribute("Dated", "LegDatedDate_t_1201739458"); // 2
      Leg_75_set.insert("LegDatedDate_t_1201739458");
      Leg_75.add_attribute("CSetMo", "1411323268"); // 2
      Leg_75_set.insert("1411323268");
      Leg_75.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1167297545"); // 2
      Leg_75_set.insert("LegInterestAccrualDate_t_1167297545");
      Leg_75.add_attribute("PutCall", "375636587"); // 2
      Leg_75_set.insert("375636587");
      Leg_75.add_attribute("LegOptionRatio", "19950614.530000"); // 2
      Leg_75_set.insert("19950614.530000");
      Leg_75.add_attribute("Px", "2567433.360000"); // 2
      Leg_75_set.insert("2567433.360000");
      all_values.push_back(Leg_75_set);
      all_compo_names.insert("Leg_75_set");

      {
        xml_element LegAID_72{"LegAID"};
        multiset<string> LegAID_72_set;
        LegAID_72.add_attribute("SecAltID", "LegSecurityAltID_t_800767610"); // 3
        LegAID_72_set.insert("LegSecurityAltID_t_800767610");
        LegAID_72.add_attribute("SecAltIDSrc", "G"); // 3
        LegAID_72_set.insert("G");
        all_values.push_back(LegAID_72_set);
        all_compo_names.insert("LegAID_72_set");

        Leg_75.add_element(LegAID_72);
      }
      QuoteStat_0.add_element(Leg_75);
    }
    {
      xml_element Stip_144{"Stip"};
      multiset<string> Stip_144_set;
      Stip_144.add_attribute("StipTyp", "LOTVAR"); // 2
      Stip_144_set.insert("LOTVAR");
      Stip_144.add_attribute("StipVal", "LegStipulationValue_t_88178988"); // 2
      Stip_144_set.insert("LegStipulationValue_t_88178988");
      all_values.push_back(Stip_144_set);
      all_compo_names.insert("Stip_144_set");

      QuoteStat_0.add_element(Stip_144);
    }
    {
      xml_element Pty_338{"Pty"};
      multiset<string> Pty_338_set;
      Pty_338.add_attribute("ID", "NestedPartyID_t_1242732356"); // 2
      Pty_338_set.insert("NestedPartyID_t_1242732356");
      Pty_338.add_attribute("Src", "F"); // 2
      Pty_338_set.insert("F");
      Pty_338.add_attribute("R", "81"); // 2
      Pty_338_set.insert("81");
      all_values.push_back(Pty_338_set);
      all_compo_names.insert("Pty_338_set");

      {
        xml_element Sub_338{"Sub"};
        multiset<string> Sub_338_set;
        Sub_338.add_attribute("ID", "NestedPartySubID_t_1792987319"); // 3
        Sub_338_set.insert("NestedPartySubID_t_1792987319");
        Sub_338.add_attribute("Typ", "29"); // 3
        Sub_338_set.insert("29");
        all_values.push_back(Sub_338_set);
        all_compo_names.insert("Sub_338_set");

        Pty_338.add_element(Sub_338);
      }
      QuoteStat_0.add_element(Pty_338);
    }
    elt.add_element(QuoteStat_0);
  } // end QuoteStat
  { // QuoteStat
    xml_element QuoteStat_1{"QuoteStat"};
    multiset<string> QuoteStat_1_set;
    QuoteStat_1.add_attribute("Qty", "19334184.500000"); // 1
    QuoteStat_1_set.insert("19334184.500000");
    QuoteStat_1.add_attribute("OrdQty", "12202677.210000"); // 1
    QuoteStat_1_set.insert("12202677.210000");
    QuoteStat_1.add_attribute("SwapTyp", "2"); // 1
    QuoteStat_1_set.insert("2");
    QuoteStat_1.add_attribute("SettlTyp", "7"); // 1
    QuoteStat_1_set.insert("7");
    QuoteStat_1.add_attribute("SettlDt", "LegSettlDate_t_824280862"); // 1
    QuoteStat_1_set.insert("LegSettlDate_t_824280862");
    all_values.push_back(QuoteStat_1_set);
    all_compo_names.insert("QuoteStat_1_set");

    {
      xml_element Leg_76{"Leg"};
      multiset<string> Leg_76_set;
      Leg_76.add_attribute("Sym", "LegSymbol_t_678982828"); // 2
      Leg_76_set.insert("LegSymbol_t_678982828");
      Leg_76.add_attribute("Sfx", "CD"); // 2
      Leg_76_set.insert("CD");
      Leg_76.add_attribute("ID", "LegSecurityID_t_1829412311"); // 2
      Leg_76_set.insert("LegSecurityID_t_1829412311");
      Leg_76.add_attribute("Src", "9"); // 2
      Leg_76_set.insert("9");
      Leg_76.add_attribute("Prod", "6"); // 2
      Leg_76_set.insert("6");
      Leg_76.add_attribute("CFI", "LegCFICode_t_1013032161"); // 2
      Leg_76_set.insert("LegCFICode_t_1013032161");
      Leg_76.add_attribute("SecTyp", "EUSUPRA"); // 2
      Leg_76_set.insert("EUSUPRA");
      Leg_76.add_attribute("SecSubTyp", "LegSecuritySubType_t_874908717"); // 2
      Leg_76_set.insert("LegSecuritySubType_t_874908717");
      Leg_76.add_attribute("MMY", "469503858"); // 2
      Leg_76_set.insert("469503858");
      Leg_76.add_attribute("Mat", "LegMaturityDate_t_1251895825"); // 2
      Leg_76_set.insert("LegMaturityDate_t_1251895825");
      Leg_76.add_attribute("MatTm", "128701696"); // 2
      Leg_76_set.insert("128701696");
      Leg_76.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1671243316"); // 2
      Leg_76_set.insert("LegCouponPaymentDate_t_1671243316");
      Leg_76.add_attribute("Issued", "LegIssueDate_t_515735445"); // 2
      Leg_76_set.insert("LegIssueDate_t_515735445");
      Leg_76.add_attribute("RepoCollSecTyp", "1295999241"); // 2
      Leg_76_set.insert("1295999241");
      Leg_76.add_attribute("RepoTrm", "2046879904"); // 2
      Leg_76_set.insert("2046879904");
      Leg_76.add_attribute("RepoRt", "3633132.510000"); // 2
      Leg_76_set.insert("3633132.510000");
      Leg_76.add_attribute("Fctr", "15527425.770000"); // 2
      Leg_76_set.insert("15527425.770000");
      Leg_76.add_attribute("CrdRtg", "LegCreditRating_t_700163866"); // 2
      Leg_76_set.insert("LegCreditRating_t_700163866");
      Leg_76.add_attribute("Rgstry", "LegInstrRegistry_t_1834473440"); // 2
      Leg_76_set.insert("LegInstrRegistry_t_1834473440");
      Leg_76.add_attribute("Ctry", "856744069"); // 2
      Leg_76_set.insert("856744069");
      Leg_76.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_788342854"); // 2
      Leg_76_set.insert("LegStateOrProvinceOfIssue_t_788342854");
      Leg_76.add_attribute("Lcl", "LegLocaleOfIssue_t_929722148"); // 2
      Leg_76_set.insert("LegLocaleOfIssue_t_929722148");
      Leg_76.add_attribute("Redeem", "LegRedemptionDate_t_540099278"); // 2
      Leg_76_set.insert("LegRedemptionDate_t_540099278");
      Leg_76.add_attribute("Strk", "3217039.060000"); // 2
      Leg_76_set.insert("3217039.060000");
      Leg_76.add_attribute("StrkCcy", "USD"); // 2
      Leg_76_set.insert("USD");
      Leg_76.add_attribute("OptA", "107638708"); // 2
      Leg_76_set.insert("107638708");
      Leg_76.add_attribute("Cmult", "17954935.410000"); // 2
      Leg_76_set.insert("17954935.410000");
      Leg_76.add_attribute("MultTyp", "0"); // 2
      Leg_76_set.insert("0");
      Leg_76.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_76_set.insert("2");
      Leg_76.add_attribute("UOM", "MMBtu"); // 2
      Leg_76_set.insert("MMBtu");
      Leg_76.add_attribute("UOMQty", "17827870.940000"); // 2
      Leg_76_set.insert("17827870.940000");
      Leg_76.add_attribute("PxUOM", "Gal"); // 2
      Leg_76_set.insert("Gal");
      Leg_76.add_attribute("PxUOMQty", "1542194.180000"); // 2
      Leg_76_set.insert("1542194.180000");
      Leg_76.add_attribute("TmUnit", "Wk"); // 2
      Leg_76_set.insert("Wk");
      Leg_76.add_attribute("ExerStyle", "2"); // 2
      Leg_76_set.insert("2");
      Leg_76.add_attribute("CpnRt", "11672515.800000"); // 2
      Leg_76_set.insert("11672515.800000");
      Leg_76.add_attribute("Exch", "LegSecurityExchange_t_970644742"); // 2
      Leg_76_set.insert("LegSecurityExchange_t_970644742");
      Leg_76.add_attribute("Issr", "LegIssuer_t_845401578"); // 2
      Leg_76_set.insert("LegIssuer_t_845401578");
      Leg_76.add_attribute("EncLegIssrLen", "1636755438"); // 2
      Leg_76_set.insert("1636755438");
      Leg_76.add_attribute("EncLegIssr", "EncodedLegIssuer_t_75056919"); // 2
      Leg_76_set.insert("EncodedLegIssuer_t_75056919");
      Leg_76.add_attribute("Desc", "LegSecurityDesc_t_974103274"); // 2
      Leg_76_set.insert("LegSecurityDesc_t_974103274");
      Leg_76.add_attribute("EncLegSecDescLen", "1160515107"); // 2
      Leg_76_set.insert("1160515107");
      Leg_76.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_590792364"); // 2
      Leg_76_set.insert("EncodedLegSecurityDesc_t_590792364");
      Leg_76.add_attribute("RatioQty", "1226188.670000"); // 2
      Leg_76_set.insert("1226188.670000");
      Leg_76.add_attribute("Side", "4"); // 2
      Leg_76_set.insert("4");
      Leg_76.add_attribute("Ccy", "GBP"); // 2
      Leg_76_set.insert("GBP");
      Leg_76.add_attribute("Pool", "LegPool_t_1760075229"); // 2
      Leg_76_set.insert("LegPool_t_1760075229");
      Leg_76.add_attribute("Dated", "LegDatedDate_t_641095407"); // 2
      Leg_76_set.insert("LegDatedDate_t_641095407");
      Leg_76.add_attribute("CSetMo", "384621866"); // 2
      Leg_76_set.insert("384621866");
      Leg_76.add_attribute("IntAcrl", "LegInterestAccrualDate_t_400934436"); // 2
      Leg_76_set.insert("LegInterestAccrualDate_t_400934436");
      Leg_76.add_attribute("PutCall", "1570817556"); // 2
      Leg_76_set.insert("1570817556");
      Leg_76.add_attribute("LegOptionRatio", "9247211.440000"); // 2
      Leg_76_set.insert("9247211.440000");
      Leg_76.add_attribute("Px", "7226383.420000"); // 2
      Leg_76_set.insert("7226383.420000");
      all_values.push_back(Leg_76_set);
      all_compo_names.insert("Leg_76_set");

      {
        xml_element LegAID_73{"LegAID"};
        multiset<string> LegAID_73_set;
        LegAID_73.add_attribute("SecAltID", "LegSecurityAltID_t_2146043376"); // 3
        LegAID_73_set.insert("LegSecurityAltID_t_2146043376");
        LegAID_73.add_attribute("SecAltIDSrc", "H"); // 3
        LegAID_73_set.insert("H");
        all_values.push_back(LegAID_73_set);
        all_compo_names.insert("LegAID_73_set");

        Leg_76.add_element(LegAID_73);
      }
      QuoteStat_1.add_element(Leg_76);
    }
    {
      xml_element Stip_145{"Stip"};
      multiset<string> Stip_145_set;
      Stip_145.add_attribute("StipTyp", "CUSTOMDATE"); // 2
      Stip_145_set.insert("CUSTOMDATE");
      Stip_145.add_attribute("StipVal", "LegStipulationValue_t_1794053269"); // 2
      Stip_145_set.insert("LegStipulationValue_t_1794053269");
      all_values.push_back(Stip_145_set);
      all_compo_names.insert("Stip_145_set");

      QuoteStat_1.add_element(Stip_145);
    }
    {
      xml_element Pty_339{"Pty"};
      multiset<string> Pty_339_set;
      Pty_339.add_attribute("ID", "NestedPartyID_t_572907738"); // 2
      Pty_339_set.insert("NestedPartyID_t_572907738");
      Pty_339.add_attribute("Src", "C"); // 2
      Pty_339_set.insert("C");
      Pty_339.add_attribute("R", "44"); // 2
      Pty_339_set.insert("44");
      all_values.push_back(Pty_339_set);
      all_compo_names.insert("Pty_339_set");

      {
        xml_element Sub_339{"Sub"};
        multiset<string> Sub_339_set;
        Sub_339.add_attribute("ID", "NestedPartySubID_t_208211184"); // 3
        Sub_339_set.insert("NestedPartySubID_t_208211184");
        Sub_339.add_attribute("Typ", "1"); // 3
        Sub_339_set.insert("1");
        all_values.push_back(Sub_339_set);
        all_compo_names.insert("Sub_339_set");

        Pty_339.add_element(Sub_339);
      }
      QuoteStat_1.add_element(Pty_339);
    }
    elt.add_element(QuoteStat_1);
  } // end QuoteStat
  { // QuoteStat
    xml_element QuoteStat_2{"QuoteStat"};
    multiset<string> QuoteStat_2_set;
    QuoteStat_2.add_attribute("Qty", "2730797.950000"); // 1
    QuoteStat_2_set.insert("2730797.950000");
    QuoteStat_2.add_attribute("OrdQty", "1268204.080000"); // 1
    QuoteStat_2_set.insert("1268204.080000");
    QuoteStat_2.add_attribute("SwapTyp", "4"); // 1
    QuoteStat_2_set.insert("4");
    QuoteStat_2.add_attribute("SettlTyp", "7"); // 1
    QuoteStat_2_set.insert("7");
    QuoteStat_2.add_attribute("SettlDt", "LegSettlDate_t_1097465150"); // 1
    QuoteStat_2_set.insert("LegSettlDate_t_1097465150");
    all_values.push_back(QuoteStat_2_set);
    all_compo_names.insert("QuoteStat_2_set");

    {
      xml_element Leg_77{"Leg"};
      multiset<string> Leg_77_set;
      Leg_77.add_attribute("Sym", "LegSymbol_t_471828484"); // 2
      Leg_77_set.insert("LegSymbol_t_471828484");
      Leg_77.add_attribute("Sfx", "CD"); // 2
      Leg_77_set.insert("CD");
      Leg_77.add_attribute("ID", "LegSecurityID_t_1172522069"); // 2
      Leg_77_set.insert("LegSecurityID_t_1172522069");
      Leg_77.add_attribute("Src", "J"); // 2
      Leg_77_set.insert("J");
      Leg_77.add_attribute("Prod", "6"); // 2
      Leg_77_set.insert("6");
      Leg_77.add_attribute("CFI", "LegCFICode_t_1763314433"); // 2
      Leg_77_set.insert("LegCFICode_t_1763314433");
      Leg_77.add_attribute("SecTyp", "EUFRN"); // 2
      Leg_77_set.insert("EUFRN");
      Leg_77.add_attribute("SecSubTyp", "LegSecuritySubType_t_1002545988"); // 2
      Leg_77_set.insert("LegSecuritySubType_t_1002545988");
      Leg_77.add_attribute("MMY", "569936401"); // 2
      Leg_77_set.insert("569936401");
      Leg_77.add_attribute("Mat", "LegMaturityDate_t_1096428422"); // 2
      Leg_77_set.insert("LegMaturityDate_t_1096428422");
      Leg_77.add_attribute("MatTm", "615137569"); // 2
      Leg_77_set.insert("615137569");
      Leg_77.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1211031808"); // 2
      Leg_77_set.insert("LegCouponPaymentDate_t_1211031808");
      Leg_77.add_attribute("Issued", "LegIssueDate_t_1481050288"); // 2
      Leg_77_set.insert("LegIssueDate_t_1481050288");
      Leg_77.add_attribute("RepoCollSecTyp", "1016072005"); // 2
      Leg_77_set.insert("1016072005");
      Leg_77.add_attribute("RepoTrm", "634365716"); // 2
      Leg_77_set.insert("634365716");
      Leg_77.add_attribute("RepoRt", "2582877.840000"); // 2
      Leg_77_set.insert("2582877.840000");
      Leg_77.add_attribute("Fctr", "17387103.470000"); // 2
      Leg_77_set.insert("17387103.470000");
      Leg_77.add_attribute("CrdRtg", "LegCreditRating_t_632925444"); // 2
      Leg_77_set.insert("LegCreditRating_t_632925444");
      Leg_77.add_attribute("Rgstry", "LegInstrRegistry_t_1874874904"); // 2
      Leg_77_set.insert("LegInstrRegistry_t_1874874904");
      Leg_77.add_attribute("Ctry", "421503749"); // 2
      Leg_77_set.insert("421503749");
      Leg_77.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_279495066"); // 2
      Leg_77_set.insert("LegStateOrProvinceOfIssue_t_279495066");
      Leg_77.add_attribute("Lcl", "LegLocaleOfIssue_t_300298994"); // 2
      Leg_77_set.insert("LegLocaleOfIssue_t_300298994");
      Leg_77.add_attribute("Redeem", "LegRedemptionDate_t_733518839"); // 2
      Leg_77_set.insert("LegRedemptionDate_t_733518839");
      Leg_77.add_attribute("Strk", "3983554.430000"); // 2
      Leg_77_set.insert("3983554.430000");
      Leg_77.add_attribute("StrkCcy", "USD"); // 2
      Leg_77_set.insert("USD");
      Leg_77.add_attribute("OptA", "671435238"); // 2
      Leg_77_set.insert("671435238");
      Leg_77.add_attribute("Cmult", "6353305.860000"); // 2
      Leg_77_set.insert("6353305.860000");
      Leg_77.add_attribute("MultTyp", "2"); // 2
      Leg_77_set.insert("2");
      Leg_77.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_77_set.insert("4");
      Leg_77.add_attribute("UOM", "USD"); // 2
      Leg_77_set.insert("USD");
      Leg_77.add_attribute("UOMQty", "4877082.750000"); // 2
      Leg_77_set.insert("4877082.750000");
      Leg_77.add_attribute("PxUOM", "USD"); // 2
      Leg_77_set.insert("USD");
      Leg_77.add_attribute("PxUOMQty", "7578341.570000"); // 2
      Leg_77_set.insert("7578341.570000");
      Leg_77.add_attribute("TmUnit", "Wk"); // 2
      Leg_77_set.insert("Wk");
      Leg_77.add_attribute("ExerStyle", "1"); // 2
      Leg_77_set.insert("1");
      Leg_77.add_attribute("CpnRt", "3736649.430000"); // 2
      Leg_77_set.insert("3736649.430000");
      Leg_77.add_attribute("Exch", "LegSecurityExchange_t_1354707011"); // 2
      Leg_77_set.insert("LegSecurityExchange_t_1354707011");
      Leg_77.add_attribute("Issr", "LegIssuer_t_1839066745"); // 2
      Leg_77_set.insert("LegIssuer_t_1839066745");
      Leg_77.add_attribute("EncLegIssrLen", "943601344"); // 2
      Leg_77_set.insert("943601344");
      Leg_77.add_attribute("EncLegIssr", "EncodedLegIssuer_t_303651785"); // 2
      Leg_77_set.insert("EncodedLegIssuer_t_303651785");
      Leg_77.add_attribute("Desc", "LegSecurityDesc_t_306720666"); // 2
      Leg_77_set.insert("LegSecurityDesc_t_306720666");
      Leg_77.add_attribute("EncLegSecDescLen", "7149504"); // 2
      Leg_77_set.insert("7149504");
      Leg_77.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1784702073"); // 2
      Leg_77_set.insert("EncodedLegSecurityDesc_t_1784702073");
      Leg_77.add_attribute("RatioQty", "13227926.720000"); // 2
      Leg_77_set.insert("13227926.720000");
      Leg_77.add_attribute("Side", "6"); // 2
      Leg_77_set.insert("6");
      Leg_77.add_attribute("Ccy", "CAN"); // 2
      Leg_77_set.insert("CAN");
      Leg_77.add_attribute("Pool", "LegPool_t_1274440665"); // 2
      Leg_77_set.insert("LegPool_t_1274440665");
      Leg_77.add_attribute("Dated", "LegDatedDate_t_1770381114"); // 2
      Leg_77_set.insert("LegDatedDate_t_1770381114");
      Leg_77.add_attribute("CSetMo", "1335523121"); // 2
      Leg_77_set.insert("1335523121");
      Leg_77.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1553935731"); // 2
      Leg_77_set.insert("LegInterestAccrualDate_t_1553935731");
      Leg_77.add_attribute("PutCall", "2070680108"); // 2
      Leg_77_set.insert("2070680108");
      Leg_77.add_attribute("LegOptionRatio", "20690419.600000"); // 2
      Leg_77_set.insert("20690419.600000");
      Leg_77.add_attribute("Px", "19522911.740000"); // 2
      Leg_77_set.insert("19522911.740000");
      all_values.push_back(Leg_77_set);
      all_compo_names.insert("Leg_77_set");

      {
        xml_element LegAID_74{"LegAID"};
        multiset<string> LegAID_74_set;
        LegAID_74.add_attribute("SecAltID", "LegSecurityAltID_t_431706639"); // 3
        LegAID_74_set.insert("LegSecurityAltID_t_431706639");
        LegAID_74.add_attribute("SecAltIDSrc", "D"); // 3
        LegAID_74_set.insert("D");
        all_values.push_back(LegAID_74_set);
        all_compo_names.insert("LegAID_74_set");

        Leg_77.add_element(LegAID_74);
      }
      QuoteStat_2.add_element(Leg_77);
    }
    {
      xml_element Stip_146{"Stip"};
      multiset<string> Stip_146_set;
      Stip_146.add_attribute("StipTyp", "RESTRICTED"); // 2
      Stip_146_set.insert("RESTRICTED");
      Stip_146.add_attribute("StipVal", "LegStipulationValue_t_1067037225"); // 2
      Stip_146_set.insert("LegStipulationValue_t_1067037225");
      all_values.push_back(Stip_146_set);
      all_compo_names.insert("Stip_146_set");

      QuoteStat_2.add_element(Stip_146);
    }
    {
      xml_element Pty_340{"Pty"};
      multiset<string> Pty_340_set;
      Pty_340.add_attribute("ID", "NestedPartyID_t_326890987"); // 2
      Pty_340_set.insert("NestedPartyID_t_326890987");
      Pty_340.add_attribute("Src", "E"); // 2
      Pty_340_set.insert("E");
      Pty_340.add_attribute("R", "30"); // 2
      Pty_340_set.insert("30");
      all_values.push_back(Pty_340_set);
      all_compo_names.insert("Pty_340_set");

      {
        xml_element Sub_340{"Sub"};
        multiset<string> Sub_340_set;
        Sub_340.add_attribute("ID", "NestedPartySubID_t_814599263"); // 3
        Sub_340_set.insert("NestedPartySubID_t_814599263");
        Sub_340.add_attribute("Typ", "13"); // 3
        Sub_340_set.insert("13");
        all_values.push_back(Sub_340_set);
        all_compo_names.insert("Sub_340_set");

        Pty_340.add_element(Sub_340);
      }
      QuoteStat_2.add_element(Pty_340);
    }
    elt.add_element(QuoteStat_2);
  } // end QuoteStat
  { // QuotQual
    xml_element QuotQual_7{"QuotQual"};
    multiset<string> QuotQual_7_set;
    QuotQual_7.add_attribute("Qual", "X"); // 1
    QuotQual_7_set.insert("X");
    all_values.push_back(QuotQual_7_set);
    all_compo_names.insert("QuotQual_7_set");

    elt.add_element(QuotQual_7);
  } // end QuotQual
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_24{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_24_set;
    SprdBnchmkCurve_24.add_attribute("Spread", "234489.720000"); // 1
    SprdBnchmkCurve_24_set.insert("234489.720000");
    SprdBnchmkCurve_24.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_24_set.insert("GBP");
    SprdBnchmkCurve_24.add_attribute("Name", "EUREPO"); // 1
    SprdBnchmkCurve_24_set.insert("EUREPO");
    SprdBnchmkCurve_24.add_attribute("Point", "BenchmarkCurvePoint_t_579966110"); // 1
    SprdBnchmkCurve_24_set.insert("BenchmarkCurvePoint_t_579966110");
    SprdBnchmkCurve_24.add_attribute("Px", "1116307.980000"); // 1
    SprdBnchmkCurve_24_set.insert("1116307.980000");
    SprdBnchmkCurve_24.add_attribute("PxTyp", "4"); // 1
    SprdBnchmkCurve_24_set.insert("4");
    SprdBnchmkCurve_24.add_attribute("SecID", "BenchmarkSecurityID_t_587115615"); // 1
    SprdBnchmkCurve_24_set.insert("BenchmarkSecurityID_t_587115615");
    SprdBnchmkCurve_24.add_attribute("SecIDSrc", "G"); // 1
    SprdBnchmkCurve_24_set.insert("G");
    all_values.push_back(SprdBnchmkCurve_24_set);
    all_compo_names.insert("SprdBnchmkCurve_24_set");

    elt.add_element(SprdBnchmkCurve_24);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_19{"Yield"};
    multiset<string> Yield_19_set;
    Yield_19.add_attribute("Typ", "CALL"); // 1
    Yield_19_set.insert("CALL");
    Yield_19.add_attribute("Yld", "12286308.360000"); // 1
    Yield_19_set.insert("12286308.360000");
    Yield_19.add_attribute("CalcDt", "YieldCalcDate_t_1791839081"); // 1
    Yield_19_set.insert("YieldCalcDate_t_1791839081");
    Yield_19.add_attribute("RedDt", "YieldRedemptionDate_t_111081131"); // 1
    Yield_19_set.insert("YieldRedemptionDate_t_111081131");
    Yield_19.add_attribute("RedPx", "3555878.530000"); // 1
    Yield_19_set.insert("3555878.530000");
    Yield_19.add_attribute("RedPxTyp", "17"); // 1
    Yield_19_set.insert("17");
    all_values.push_back(Yield_19_set);
    all_compo_names.insert("Yield_19_set");

    elt.add_element(Yield_19);
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
