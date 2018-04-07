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
  elt.add_attribute("StatReqID", "QuoteStatusReqID_t_717300252"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteStatusReqID_t_717300252");
  elt.add_attribute("ReqID", "QuoteReqID_t_888738487"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteReqID_t_888738487");
  elt.add_attribute("QID", "QuoteID_t_1231456725"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteID_t_1231456725");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_29828593"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteMsgID_t_29828593");
  elt.add_attribute("RspID", "QuoteRespID_t_2141370961"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteRespID_t_2141370961");
  elt.add_attribute("Typ", "3"); // 0
  QuoteStatusReport_message_t_0.insert("3");
  elt.add_attribute("CxlTyp", "5"); // 0
  QuoteStatusReport_message_t_0.insert("5");
  elt.add_attribute("SesID", "5"); // 0
  QuoteStatusReport_message_t_0.insert("5");
  elt.add_attribute("SesSub", "5"); // 0
  QuoteStatusReport_message_t_0.insert("5");
  elt.add_attribute("Side", "F"); // 0
  QuoteStatusReport_message_t_0.insert("F");
  elt.add_attribute("SettlTyp", "2"); // 0
  QuoteStatusReport_message_t_0.insert("2");
  elt.add_attribute("SettlDt", "SettlDate_t_272213778"); // 0
  QuoteStatusReport_message_t_0.insert("SettlDate_t_272213778");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1438027687"); // 0
  QuoteStatusReport_message_t_0.insert("SettlDate2_t_1438027687");
  elt.add_attribute("Qty2", "11970044.680000"); // 0
  QuoteStatusReport_message_t_0.insert("11970044.680000");
  elt.add_attribute("Ccy", "CHF"); // 0
  QuoteStatusReport_message_t_0.insert("CHF");
  elt.add_attribute("Acct", "Account_t_214705477"); // 0
  QuoteStatusReport_message_t_0.insert("Account_t_214705477");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  QuoteStatusReport_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "8"); // 0
  QuoteStatusReport_message_t_0.insert("8");
  elt.add_attribute("ExpireTm", "ExpireTime_t_944367395"); // 0
  QuoteStatusReport_message_t_0.insert("ExpireTime_t_944367395");
  elt.add_attribute("Px", "9170973.700000"); // 0
  QuoteStatusReport_message_t_0.insert("9170973.700000");
  elt.add_attribute("PxTyp", "4"); // 0
  QuoteStatusReport_message_t_0.insert("4");
  elt.add_attribute("BidPx", "6399843.560000"); // 0
  QuoteStatusReport_message_t_0.insert("6399843.560000");
  elt.add_attribute("OfrPx", "7809309.880000"); // 0
  QuoteStatusReport_message_t_0.insert("7809309.880000");
  elt.add_attribute("MktBidPx", "245051.870000"); // 0
  QuoteStatusReport_message_t_0.insert("245051.870000");
  elt.add_attribute("MktOfrPx", "20046734.090000"); // 0
  QuoteStatusReport_message_t_0.insert("20046734.090000");
  elt.add_attribute("MinBidSz", "10821618.470000"); // 0
  QuoteStatusReport_message_t_0.insert("10821618.470000");
  elt.add_attribute("BidSz", "1889157.520000"); // 0
  QuoteStatusReport_message_t_0.insert("1889157.520000");
  elt.add_attribute("MinOfrSz", "8478902.330000"); // 0
  QuoteStatusReport_message_t_0.insert("8478902.330000");
  elt.add_attribute("OfrSz", "13544865.260000"); // 0
  QuoteStatusReport_message_t_0.insert("13544865.260000");
  elt.add_attribute("MinQty", "21013611.870000"); // 0
  QuoteStatusReport_message_t_0.insert("21013611.870000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_1565190485"); // 0
  QuoteStatusReport_message_t_0.insert("ValidUntilTime_t_1565190485");
  elt.add_attribute("BidSpotRt", "957413.650000"); // 0
  QuoteStatusReport_message_t_0.insert("957413.650000");
  elt.add_attribute("OfrSpotRt", "11853342.640000"); // 0
  QuoteStatusReport_message_t_0.insert("11853342.640000");
  elt.add_attribute("BidFwdPnts", "15950190.780000"); // 0
  QuoteStatusReport_message_t_0.insert("15950190.780000");
  elt.add_attribute("OfrFwdPnts", "896286.790000"); // 0
  QuoteStatusReport_message_t_0.insert("896286.790000");
  elt.add_attribute("MidPx", "1232286.280000"); // 0
  QuoteStatusReport_message_t_0.insert("1232286.280000");
  elt.add_attribute("BidYld", "941214.430000"); // 0
  QuoteStatusReport_message_t_0.insert("941214.430000");
  elt.add_attribute("MidYld", "9724893.170000"); // 0
  QuoteStatusReport_message_t_0.insert("9724893.170000");
  elt.add_attribute("OfrYld", "5477775.610000"); // 0
  QuoteStatusReport_message_t_0.insert("5477775.610000");
  elt.add_attribute("TxnTm", "TransactTime_t_1994781393"); // 0
  QuoteStatusReport_message_t_0.insert("TransactTime_t_1994781393");
  elt.add_attribute("OrdTyp", "8"); // 0
  QuoteStatusReport_message_t_0.insert("8");
  elt.add_attribute("BidFwdPnts2", "8199913.390000"); // 0
  QuoteStatusReport_message_t_0.insert("8199913.390000");
  elt.add_attribute("OfrFwdPnts2", "12853254.330000"); // 0
  QuoteStatusReport_message_t_0.insert("12853254.330000");
  elt.add_attribute("SettlCurrBidFxRt", "3074123.790000"); // 0
  QuoteStatusReport_message_t_0.insert("3074123.790000");
  elt.add_attribute("SettlCurrOfrFxRt", "8835742.950000"); // 0
  QuoteStatusReport_message_t_0.insert("8835742.950000");
  elt.add_attribute("SettlCurrFxRtCalc", "M"); // 0
  QuoteStatusReport_message_t_0.insert("M");
  elt.add_attribute("CommTyp", "5"); // 0
  QuoteStatusReport_message_t_0.insert("5");
  elt.add_attribute("Comm", "Commission_t_2088250341"); // 0
  QuoteStatusReport_message_t_0.insert("Commission_t_2088250341");
  elt.add_attribute("CustCpcty", "3"); // 0
  QuoteStatusReport_message_t_0.insert("3");
  elt.add_attribute("ExDest", "ExDestination_t_1466485252"); // 0
  QuoteStatusReport_message_t_0.insert("ExDestination_t_1466485252");
  elt.add_attribute("ExDestIDSrc", "G"); // 0
  QuoteStatusReport_message_t_0.insert("G");
  elt.add_attribute("BkngTyp", "2"); // 0
  QuoteStatusReport_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "A"); // 0
  QuoteStatusReport_message_t_0.insert("A");
  elt.add_attribute("Rstctions", "8"); // 0
  QuoteStatusReport_message_t_0.insert("8");
  elt.add_attribute("Stat", "8"); // 0
  QuoteStatusReport_message_t_0.insert("8");
  elt.add_attribute("RejRsn", "8"); // 0
  QuoteStatusReport_message_t_0.insert("8");
  elt.add_attribute("Txt", "Text_t_573473251"); // 0
  QuoteStatusReport_message_t_0.insert("Text_t_573473251");
  elt.add_attribute("EncTxtLen", "1290574821"); // 0
  QuoteStatusReport_message_t_0.insert("1290574821");
  elt.add_attribute("EncTxt", "EncodedText_t_664065954"); // 0
  QuoteStatusReport_message_t_0.insert("EncodedText_t_664065954");
  all_values.push_back(QuoteStatusReport_message_t_0);
  all_compo_names.insert("QuoteStatusReport_message_t");

  { // Hdr
    xml_element Hdr_73{"Hdr"};
    multiset<string> Hdr_73_set;
    Hdr_73.add_attribute("SeqNum", "1927959777"); // 1
    Hdr_73_set.insert("1927959777");
    Hdr_73.add_attribute("SID", "SenderCompID_t_1244452360"); // 1
    Hdr_73_set.insert("SenderCompID_t_1244452360");
    Hdr_73.add_attribute("TID", "TargetCompID_t_81772792"); // 1
    Hdr_73_set.insert("TargetCompID_t_81772792");
    Hdr_73.add_attribute("OBID", "OnBehalfOfCompID_t_2023701143"); // 1
    Hdr_73_set.insert("OnBehalfOfCompID_t_2023701143");
    Hdr_73.add_attribute("D2ID", "DeliverToCompID_t_282302976"); // 1
    Hdr_73_set.insert("DeliverToCompID_t_282302976");
    Hdr_73.add_attribute("SSub", "SenderSubID_t_1676791870"); // 1
    Hdr_73_set.insert("SenderSubID_t_1676791870");
    Hdr_73.add_attribute("SLoc", "SenderLocationID_t_2113329822"); // 1
    Hdr_73_set.insert("SenderLocationID_t_2113329822");
    Hdr_73.add_attribute("TSub", "TargetSubID_t_405531604"); // 1
    Hdr_73_set.insert("TargetSubID_t_405531604");
    Hdr_73.add_attribute("TLoc", "TargetLocationID_t_1770913313"); // 1
    Hdr_73_set.insert("TargetLocationID_t_1770913313");
    Hdr_73.add_attribute("OBSub", "OnBehalfOfSubID_t_938335491"); // 1
    Hdr_73_set.insert("OnBehalfOfSubID_t_938335491");
    Hdr_73.add_attribute("OBLoc", "OnBehalfOfLocationID_t_953309166"); // 1
    Hdr_73_set.insert("OnBehalfOfLocationID_t_953309166");
    Hdr_73.add_attribute("D2Sub", "DeliverToSubID_t_1618211059"); // 1
    Hdr_73_set.insert("DeliverToSubID_t_1618211059");
    Hdr_73.add_attribute("D2Loc", "DeliverToLocationID_t_48743402"); // 1
    Hdr_73_set.insert("DeliverToLocationID_t_48743402");
    Hdr_73.add_attribute("PosDup", "Y"); // 1
    Hdr_73_set.insert("Y");
    Hdr_73.add_attribute("PosRsnd", "N"); // 1
    Hdr_73_set.insert("N");
    Hdr_73.add_attribute("Snt", "SendingTime_t_356155781"); // 1
    Hdr_73_set.insert("SendingTime_t_356155781");
    Hdr_73.add_attribute("OrigSnt", "OrigSendingTime_t_509391152"); // 1
    Hdr_73_set.insert("OrigSendingTime_t_509391152");
    Hdr_73.add_attribute("MsgEncd", "MessageEncoding_t_1024097688"); // 1
    Hdr_73_set.insert("MessageEncoding_t_1024097688");
    all_values.push_back(Hdr_73_set);
    all_compo_names.insert("Hdr_73_set");

    {
      xml_element Hop_73{"Hop"};
      multiset<string> Hop_73_set;
      Hop_73.add_attribute("ID", "HopCompID_t_878273638"); // 2
      Hop_73_set.insert("HopCompID_t_878273638");
      Hop_73.add_attribute("Ref", "450157846"); // 2
      Hop_73_set.insert("450157846");
      Hop_73.add_attribute("Snt", "HopSendingTime_t_2005074450"); // 2
      Hop_73_set.insert("HopSendingTime_t_2005074450");
      all_values.push_back(Hop_73_set);
      all_compo_names.insert("Hop_73_set");

      Hdr_73.add_element(Hop_73);
    }
    elt.add_element(Hdr_73);
  } // end Hdr
  { // Pty
    xml_element Pty_365{"Pty"};
    multiset<string> Pty_365_set;
    Pty_365.add_attribute("ID", "PartyID_t_1308021910"); // 1
    Pty_365_set.insert("PartyID_t_1308021910");
    Pty_365.add_attribute("Src", "4"); // 1
    Pty_365_set.insert("4");
    Pty_365.add_attribute("R", "7"); // 1
    Pty_365_set.insert("7");
    all_values.push_back(Pty_365_set);
    all_compo_names.insert("Pty_365_set");

    {
      xml_element Sub_365{"Sub"};
      multiset<string> Sub_365_set;
      Sub_365.add_attribute("ID", "PartySubID_t_799333314"); // 2
      Sub_365_set.insert("PartySubID_t_799333314");
      Sub_365.add_attribute("Typ", "4"); // 2
      Sub_365_set.insert("4");
      all_values.push_back(Sub_365_set);
      all_compo_names.insert("Sub_365_set");

      Pty_365.add_element(Sub_365);
    }
    elt.add_element(Pty_365);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_12{"TgtPty"};
    multiset<string> TgtPty_12_set;
    TgtPty_12.add_attribute("ID", "TargetPartyID_t_1372806565"); // 1
    TgtPty_12_set.insert("TargetPartyID_t_1372806565");
    TgtPty_12.add_attribute("Src", "G"); // 1
    TgtPty_12_set.insert("G");
    TgtPty_12.add_attribute("R", "27"); // 1
    TgtPty_12_set.insert("27");
    all_values.push_back(TgtPty_12_set);
    all_compo_names.insert("TgtPty_12_set");

    elt.add_element(TgtPty_12);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_13{"TgtPty"};
    multiset<string> TgtPty_13_set;
    TgtPty_13.add_attribute("ID", "TargetPartyID_t_1153282694"); // 1
    TgtPty_13_set.insert("TargetPartyID_t_1153282694");
    TgtPty_13.add_attribute("Src", "I"); // 1
    TgtPty_13_set.insert("I");
    TgtPty_13.add_attribute("R", "72"); // 1
    TgtPty_13_set.insert("72");
    all_values.push_back(TgtPty_13_set);
    all_compo_names.insert("TgtPty_13_set");

    elt.add_element(TgtPty_13);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_14{"TgtPty"};
    multiset<string> TgtPty_14_set;
    TgtPty_14.add_attribute("ID", "TargetPartyID_t_1029500189"); // 1
    TgtPty_14_set.insert("TargetPartyID_t_1029500189");
    TgtPty_14.add_attribute("Src", "D"); // 1
    TgtPty_14_set.insert("D");
    TgtPty_14.add_attribute("R", "33"); // 1
    TgtPty_14_set.insert("33");
    all_values.push_back(TgtPty_14_set);
    all_compo_names.insert("TgtPty_14_set");

    elt.add_element(TgtPty_14);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_67{"Instrmt"};
    multiset<string> Instrmt_67_set;
    Instrmt_67.add_attribute("Sym", "Symbol_t_995346363"); // 1
    Instrmt_67_set.insert("Symbol_t_995346363");
    Instrmt_67.add_attribute("Sfx", "CD"); // 1
    Instrmt_67_set.insert("CD");
    Instrmt_67.add_attribute("ID", "SecurityID_t_2018497206"); // 1
    Instrmt_67_set.insert("SecurityID_t_2018497206");
    Instrmt_67.add_attribute("Src", "H"); // 1
    Instrmt_67_set.insert("H");
    Instrmt_67.add_attribute("Prod", "13"); // 1
    Instrmt_67_set.insert("13");
    Instrmt_67.add_attribute("ProdCmplx", "ProductComplex_t_1489224617"); // 1
    Instrmt_67_set.insert("ProductComplex_t_1489224617");
    Instrmt_67.add_attribute("SecGrp", "SecurityGroup_t_1982425256"); // 1
    Instrmt_67_set.insert("SecurityGroup_t_1982425256");
    Instrmt_67.add_attribute("CFI", "CFICode_t_1543424242"); // 1
    Instrmt_67_set.insert("CFICode_t_1543424242");
    Instrmt_67.add_attribute("SecTyp", "COFP"); // 1
    Instrmt_67_set.insert("COFP");
    Instrmt_67.add_attribute("SubTyp", "SecuritySubType_t_191097390"); // 1
    Instrmt_67_set.insert("SecuritySubType_t_191097390");
    Instrmt_67.add_attribute("MMY", "2052815394"); // 1
    Instrmt_67_set.insert("2052815394");
    Instrmt_67.add_attribute("MatDt", "MaturityDate_t_1121891501"); // 1
    Instrmt_67_set.insert("MaturityDate_t_1121891501");
    Instrmt_67.add_attribute("MatTm", "1069371028"); // 1
    Instrmt_67_set.insert("1069371028");
    Instrmt_67.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_355489592"); // 1
    Instrmt_67_set.insert("SettleOnOpenFlag_t_355489592");
    Instrmt_67.add_attribute("AsgnMeth", "979482303"); // 1
    Instrmt_67_set.insert("979482303");
    Instrmt_67.add_attribute("Status", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("CpnPmt", "CouponPaymentDate_t_1663511502"); // 1
    Instrmt_67_set.insert("CouponPaymentDate_t_1663511502");
    Instrmt_67.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_67_set.insert("XR");
    Instrmt_67.add_attribute("Snrty", "SB"); // 1
    Instrmt_67_set.insert("SB");
    Instrmt_67.add_attribute("NotlPctOut", "3153611.680000"); // 1
    Instrmt_67_set.insert("3153611.680000");
    Instrmt_67.add_attribute("OrigNotlPctOut", "18031470.910000"); // 1
    Instrmt_67_set.insert("18031470.910000");
    Instrmt_67.add_attribute("AttchPnt", "13953443.960000"); // 1
    Instrmt_67_set.insert("13953443.960000");
    Instrmt_67.add_attribute("DetchPnt", "16881677.330000"); // 1
    Instrmt_67_set.insert("16881677.330000");
    Instrmt_67.add_attribute("Issued", "IssueDate_t_835158369"); // 1
    Instrmt_67_set.insert("IssueDate_t_835158369");
    Instrmt_67.add_attribute("RepoCollSecTyp", "2031847275"); // 1
    Instrmt_67_set.insert("2031847275");
    Instrmt_67.add_attribute("RepoTrm", "693966780"); // 1
    Instrmt_67_set.insert("693966780");
    Instrmt_67.add_attribute("RepoRt", "11116220.060000"); // 1
    Instrmt_67_set.insert("11116220.060000");
    Instrmt_67.add_attribute("Fctr", "6026392.970000"); // 1
    Instrmt_67_set.insert("6026392.970000");
    Instrmt_67.add_attribute("CrdRtg", "CreditRating_t_1723466969"); // 1
    Instrmt_67_set.insert("CreditRating_t_1723466969");
    Instrmt_67.add_attribute("Rgstry", "InstrRegistry_t_1670388620"); // 1
    Instrmt_67_set.insert("InstrRegistry_t_1670388620");
    Instrmt_67.add_attribute("IssuCtry", "850223190"); // 1
    Instrmt_67_set.insert("850223190");
    Instrmt_67.add_attribute("StPrv", "StateOrProvinceOfIssue_t_571329685"); // 1
    Instrmt_67_set.insert("StateOrProvinceOfIssue_t_571329685");
    Instrmt_67.add_attribute("Lcl", "LocaleOfIssue_t_487203191"); // 1
    Instrmt_67_set.insert("LocaleOfIssue_t_487203191");
    Instrmt_67.add_attribute("Redeem", "RedemptionDate_t_721236749"); // 1
    Instrmt_67_set.insert("RedemptionDate_t_721236749");
    Instrmt_67.add_attribute("StrkPx", "3575278.910000"); // 1
    Instrmt_67_set.insert("3575278.910000");
    Instrmt_67.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_67_set.insert("GBP");
    Instrmt_67.add_attribute("StrkMult", "1924695.000000"); // 1
    Instrmt_67_set.insert("1924695.000000");
    Instrmt_67.add_attribute("StrkValu", "18007511.690000"); // 1
    Instrmt_67_set.insert("18007511.690000");
    Instrmt_67.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("StrkPxBndryPrcsn", "17060829.160000"); // 1
    Instrmt_67_set.insert("17060829.160000");
    Instrmt_67.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_67_set.insert("2");
    Instrmt_67.add_attribute("OptAt", "1452937918"); // 1
    Instrmt_67_set.insert("1452937918");
    Instrmt_67.add_attribute("Mult", "20615725.080000"); // 1
    Instrmt_67_set.insert("20615725.080000");
    Instrmt_67.add_attribute("MultTyp", "0"); // 1
    Instrmt_67_set.insert("0");
    Instrmt_67.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_67_set.insert("0");
    Instrmt_67.add_attribute("MinPxIncr", "15776003.630000"); // 1
    Instrmt_67_set.insert("15776003.630000");
    Instrmt_67.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2028888676"); // 1
    Instrmt_67_set.insert("MinPriceIncrementAmount_t_2028888676");
    Instrmt_67.add_attribute("UOM", "Bcf"); // 1
    Instrmt_67_set.insert("Bcf");
    Instrmt_67.add_attribute("UOMQty", "18929615.310000"); // 1
    Instrmt_67_set.insert("18929615.310000");
    Instrmt_67.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_67_set.insert("Gal");
    Instrmt_67.add_attribute("PxUOMQty", "12428687.610000"); // 1
    Instrmt_67_set.insert("12428687.610000");
    Instrmt_67.add_attribute("SettlMeth", "P"); // 1
    Instrmt_67_set.insert("P");
    Instrmt_67.add_attribute("ExerStyle", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_67_set.insert("2");
    Instrmt_67.add_attribute("OptPayAmt", "OptPayoutAmount_t_2127612397"); // 1
    Instrmt_67_set.insert("OptPayoutAmount_t_2127612397");
    Instrmt_67.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_67_set.insert("PCTPAR");
    Instrmt_67.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_67_set.insert("EQTY");
    Instrmt_67.add_attribute("ListMeth", "0"); // 1
    Instrmt_67_set.insert("0");
    Instrmt_67.add_attribute("CapPx", "10067538.190000"); // 1
    Instrmt_67_set.insert("10067538.190000");
    Instrmt_67.add_attribute("FlrPx", "4326112.280000"); // 1
    Instrmt_67_set.insert("4326112.280000");
    Instrmt_67.add_attribute("PutCall", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("FlexInd", "true"); // 1
    Instrmt_67_set.insert("true");
    Instrmt_67.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_67_set.insert("false");
    Instrmt_67.add_attribute("TmUnit", "Min"); // 1
    Instrmt_67_set.insert("Min");
    Instrmt_67.add_attribute("CpnRt", "17512839.380000"); // 1
    Instrmt_67_set.insert("17512839.380000");
    Instrmt_67.add_attribute("Exch", "SecurityExchange_t_1216825695"); // 1
    Instrmt_67_set.insert("SecurityExchange_t_1216825695");
    Instrmt_67.add_attribute("PosLmt", "677439147"); // 1
    Instrmt_67_set.insert("677439147");
    Instrmt_67.add_attribute("NTPosLmt", "1404551459"); // 1
    Instrmt_67_set.insert("1404551459");
    Instrmt_67.add_attribute("Issr", "Issuer_t_1377597227"); // 1
    Instrmt_67_set.insert("Issuer_t_1377597227");
    Instrmt_67.add_attribute("EncIssrLen", "1061006037"); // 1
    Instrmt_67_set.insert("1061006037");
    Instrmt_67.add_attribute("EncIssr", "EncodedIssuer_t_963150727"); // 1
    Instrmt_67_set.insert("EncodedIssuer_t_963150727");
    Instrmt_67.add_attribute("Desc", "SecurityDesc_t_512776613"); // 1
    Instrmt_67_set.insert("SecurityDesc_t_512776613");
    Instrmt_67.add_attribute("EncSecDescLen", "366460307"); // 1
    Instrmt_67_set.insert("366460307");
    Instrmt_67.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_877239588"); // 1
    Instrmt_67_set.insert("EncodedSecurityDesc_t_877239588");
    Instrmt_67.add_attribute("Pool", "Pool_t_627438302"); // 1
    Instrmt_67_set.insert("Pool_t_627438302");
    Instrmt_67.add_attribute("CSetMo", "938560847"); // 1
    Instrmt_67_set.insert("938560847");
    Instrmt_67.add_attribute("CPPgm", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("CPRegT", "CPRegType_t_508843330"); // 1
    Instrmt_67_set.insert("CPRegType_t_508843330");
    Instrmt_67.add_attribute("Dated", "DatedDate_t_786085211"); // 1
    Instrmt_67_set.insert("DatedDate_t_786085211");
    Instrmt_67.add_attribute("IntAcrl", "InterestAccrualDate_t_52834186"); // 1
    Instrmt_67_set.insert("InterestAccrualDate_t_52834186");
    all_values.push_back(Instrmt_67_set);
    all_compo_names.insert("Instrmt_67_set");

    {
      xml_element AID_70{"AID"};
      multiset<string> AID_70_set;
      AID_70.add_attribute("AltID", "SecurityAltID_t_45911801"); // 2
      AID_70_set.insert("SecurityAltID_t_45911801");
      AID_70.add_attribute("AltIDSrc", "D"); // 2
      AID_70_set.insert("D");
      all_values.push_back(AID_70_set);
      all_compo_names.insert("AID_70_set");

      Instrmt_67.add_element(AID_70);
    }
    {
      xml_element SecXML_70{"SecXML"};
      multiset<string> SecXML_70_set;
      SecXML_70.add_attribute("Schema", "SecurityXMLSchema_t_1486479803"); // 2
      SecXML_70_set.insert("SecurityXMLSchema_t_1486479803");
      all_values.push_back(SecXML_70_set);
      all_compo_names.insert("SecXML_70_set");

      Instrmt_67.add_element(SecXML_70);
    }
    {
      xml_element Evnt_70{"Evnt"};
      multiset<string> Evnt_70_set;
      Evnt_70.add_attribute("EventTyp", "3"); // 2
      Evnt_70_set.insert("3");
      Evnt_70.add_attribute("Dt", "EventDate_t_1008702712"); // 2
      Evnt_70_set.insert("EventDate_t_1008702712");
      Evnt_70.add_attribute("Tm", "EventTime_t_1466608552"); // 2
      Evnt_70_set.insert("EventTime_t_1466608552");
      Evnt_70.add_attribute("Px", "19019874.890000"); // 2
      Evnt_70_set.insert("19019874.890000");
      Evnt_70.add_attribute("Txt", "EventText_t_591090750"); // 2
      Evnt_70_set.insert("EventText_t_591090750");
      all_values.push_back(Evnt_70_set);
      all_compo_names.insert("Evnt_70_set");

      Instrmt_67.add_element(Evnt_70);
    }
    {
      xml_element Pty_366{"Pty"};
      multiset<string> Pty_366_set;
      Pty_366.add_attribute("ID", "InstrumentPartyID_t_1022720623"); // 2
      Pty_366_set.insert("InstrumentPartyID_t_1022720623");
      Pty_366.add_attribute("Src", "5"); // 2
      Pty_366_set.insert("5");
      Pty_366.add_attribute("R", "34"); // 2
      Pty_366_set.insert("34");
      all_values.push_back(Pty_366_set);
      all_compo_names.insert("Pty_366_set");

      {
        xml_element Sub_366{"Sub"};
        multiset<string> Sub_366_set;
        Sub_366.add_attribute("ID", "InstrumentPartySubID_t_1150162378"); // 3
        Sub_366_set.insert("InstrumentPartySubID_t_1150162378");
        Sub_366.add_attribute("Typ", "23"); // 3
        Sub_366_set.insert("23");
        all_values.push_back(Sub_366_set);
        all_compo_names.insert("Sub_366_set");

        Pty_366.add_element(Sub_366);
      }
      Instrmt_67.add_element(Pty_366);
    }
    {
      xml_element CmplxEvnt_67{"CmplxEvnt"};
      multiset<string> CmplxEvnt_67_set;
      CmplxEvnt_67.add_attribute("Typ", "8"); // 2
      CmplxEvnt_67_set.insert("8");
      CmplxEvnt_67.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1635132025"); // 2
      CmplxEvnt_67_set.insert("ComplexOptPayoutAmount_t_1635132025");
      CmplxEvnt_67.add_attribute("Px", "18590149.610000"); // 2
      CmplxEvnt_67_set.insert("18590149.610000");
      CmplxEvnt_67.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_67_set.insert("3");
      CmplxEvnt_67.add_attribute("PxBndryPrcsn", "1650875.240000"); // 2
      CmplxEvnt_67_set.insert("1650875.240000");
      CmplxEvnt_67.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_67_set.insert("3");
      CmplxEvnt_67.add_attribute("Cond", "1"); // 2
      CmplxEvnt_67_set.insert("1");
      all_values.push_back(CmplxEvnt_67_set);
      all_compo_names.insert("CmplxEvnt_67_set");

      {
        xml_element EvntDts_67{"EvntDts"};
        multiset<string> EvntDts_67_set;
        EvntDts_67.add_attribute("StartDt", "ComplexEventStartDate_t_1226093561"); // 3
        EvntDts_67_set.insert("ComplexEventStartDate_t_1226093561");
        EvntDts_67.add_attribute("EndDt", "ComplexEventEndDate_t_2079233500"); // 3
        EvntDts_67_set.insert("ComplexEventEndDate_t_2079233500");
        all_values.push_back(EvntDts_67_set);
        all_compo_names.insert("EvntDts_67_set");

        {
          xml_element EvntTms_67{"EvntTms"};
          multiset<string> EvntTms_67_set;
          EvntTms_67.add_attribute("StartTm", "989782195"); // 4
          EvntTms_67_set.insert("989782195");
          EvntTms_67.add_attribute("EndTm", "1592553868"); // 4
          EvntTms_67_set.insert("1592553868");
          all_values.push_back(EvntTms_67_set);
          all_compo_names.insert("EvntTms_67_set");

          EvntDts_67.add_element(EvntTms_67);
        }
        CmplxEvnt_67.add_element(EvntDts_67);
      }
      Instrmt_67.add_element(CmplxEvnt_67);
    }
    elt.add_element(Instrmt_67);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_25{"FinDetls"};
    multiset<string> FinDetls_25_set;
    FinDetls_25.add_attribute("AgmtDesc", "AgreementDesc_t_808989440"); // 1
    FinDetls_25_set.insert("AgreementDesc_t_808989440");
    FinDetls_25.add_attribute("AgmtID", "AgreementID_t_1617220497"); // 1
    FinDetls_25_set.insert("AgreementID_t_1617220497");
    FinDetls_25.add_attribute("AgmtDt", "AgreementDate_t_383631067"); // 1
    FinDetls_25_set.insert("AgreementDate_t_383631067");
    FinDetls_25.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_25_set.insert("EUR");
    FinDetls_25.add_attribute("TrmTyp", "4"); // 1
    FinDetls_25_set.insert("4");
    FinDetls_25.add_attribute("StartDt", "StartDate_t_1169179929"); // 1
    FinDetls_25_set.insert("StartDate_t_1169179929");
    FinDetls_25.add_attribute("EndDt", "EndDate_t_24491980"); // 1
    FinDetls_25_set.insert("EndDate_t_24491980");
    FinDetls_25.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_25_set.insert("3");
    FinDetls_25.add_attribute("MgnRatio", "5081760.850000"); // 1
    FinDetls_25_set.insert("5081760.850000");
    all_values.push_back(FinDetls_25_set);
    all_compo_names.insert("FinDetls_25_set");

    elt.add_element(FinDetls_25);
  } // end FinDetls
  { // Undly
    xml_element Undly_91{"Undly"};
    multiset<string> Undly_91_set;
    Undly_91.add_attribute("Sym", "UnderlyingSymbol_t_2059889316"); // 1
    Undly_91_set.insert("UnderlyingSymbol_t_2059889316");
    Undly_91.add_attribute("Sfx", "WI"); // 1
    Undly_91_set.insert("WI");
    Undly_91.add_attribute("ID", "UnderlyingSecurityID_t_197134463"); // 1
    Undly_91_set.insert("UnderlyingSecurityID_t_197134463");
    Undly_91.add_attribute("Src", "J"); // 1
    Undly_91_set.insert("J");
    Undly_91.add_attribute("Prod", "8"); // 1
    Undly_91_set.insert("8");
    Undly_91.add_attribute("CFI", "UnderlyingCFICode_t_958392124"); // 1
    Undly_91_set.insert("UnderlyingCFICode_t_958392124");
    Undly_91.add_attribute("SecTyp", "GO"); // 1
    Undly_91_set.insert("GO");
    Undly_91.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2000183991"); // 1
    Undly_91_set.insert("UnderlyingSecuritySubType_t_2000183991");
    Undly_91.add_attribute("MMY", "1066123147"); // 1
    Undly_91_set.insert("1066123147");
    Undly_91.add_attribute("Mat", "UnderlyingMaturityDate_t_1557264703"); // 1
    Undly_91_set.insert("UnderlyingMaturityDate_t_1557264703");
    Undly_91.add_attribute("MatTm", "1487832368"); // 1
    Undly_91_set.insert("1487832368");
    Undly_91.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_777654460"); // 1
    Undly_91_set.insert("UnderlyingCouponPaymentDate_t_777654460");
    Undly_91.add_attribute("RestrctTyp", "MR"); // 1
    Undly_91_set.insert("MR");
    Undly_91.add_attribute("Snrty", "SB"); // 1
    Undly_91_set.insert("SB");
    Undly_91.add_attribute("NotlPctOut", "18937372.320000"); // 1
    Undly_91_set.insert("18937372.320000");
    Undly_91.add_attribute("OrigNotlPctOut", "11336786.390000"); // 1
    Undly_91_set.insert("11336786.390000");
    Undly_91.add_attribute("AttchPnt", "7315298.060000"); // 1
    Undly_91_set.insert("7315298.060000");
    Undly_91.add_attribute("DetchPnt", "18254870.840000"); // 1
    Undly_91_set.insert("18254870.840000");
    Undly_91.add_attribute("Issued", "UnderlyingIssueDate_t_2123460834"); // 1
    Undly_91_set.insert("UnderlyingIssueDate_t_2123460834");
    Undly_91.add_attribute("RepoCollSecTyp", "176600027"); // 1
    Undly_91_set.insert("176600027");
    Undly_91.add_attribute("RepoTrm", "486992876"); // 1
    Undly_91_set.insert("486992876");
    Undly_91.add_attribute("RepoRt", "15931976.830000"); // 1
    Undly_91_set.insert("15931976.830000");
    Undly_91.add_attribute("Fctr", "5602310.940000"); // 1
    Undly_91_set.insert("5602310.940000");
    Undly_91.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1603338619"); // 1
    Undly_91_set.insert("UnderlyingCreditRating_t_1603338619");
    Undly_91.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1571777862"); // 1
    Undly_91_set.insert("UnderlyingInstrRegistry_t_1571777862");
    Undly_91.add_attribute("Ctry", "1729947373"); // 1
    Undly_91_set.insert("1729947373");
    Undly_91.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_625034901"); // 1
    Undly_91_set.insert("UnderlyingStateOrProvinceOfIssue_t_625034901");
    Undly_91.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1596269843"); // 1
    Undly_91_set.insert("UnderlyingLocaleOfIssue_t_1596269843");
    Undly_91.add_attribute("Redeem", "UnderlyingRedemptionDate_t_633650329"); // 1
    Undly_91_set.insert("UnderlyingRedemptionDate_t_633650329");
    Undly_91.add_attribute("StrkPx", "11332109.860000"); // 1
    Undly_91_set.insert("11332109.860000");
    Undly_91.add_attribute("StrkCcy", "CAN"); // 1
    Undly_91_set.insert("CAN");
    Undly_91.add_attribute("OptA", "960511975"); // 1
    Undly_91_set.insert("960511975");
    Undly_91.add_attribute("Mult", "885512.810000"); // 1
    Undly_91_set.insert("885512.810000");
    Undly_91.add_attribute("MultTyp", "0"); // 1
    Undly_91_set.insert("0");
    Undly_91.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_91_set.insert("3");
    Undly_91.add_attribute("UOM", "MMBtu"); // 1
    Undly_91_set.insert("MMBtu");
    Undly_91.add_attribute("UOMQty", "4292671.630000"); // 1
    Undly_91_set.insert("4292671.630000");
    Undly_91.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_91_set.insert("oz_tr");
    Undly_91.add_attribute("PxUOMQty", "21130665.520000"); // 1
    Undly_91_set.insert("21130665.520000");
    Undly_91.add_attribute("TmUnit", "Wk"); // 1
    Undly_91_set.insert("Wk");
    Undly_91.add_attribute("ExerStyle", "1"); // 1
    Undly_91_set.insert("1");
    Undly_91.add_attribute("CpnRt", "7432373.640000"); // 1
    Undly_91_set.insert("7432373.640000");
    Undly_91.add_attribute("Exch", "UnderlyingSecurityExchange_t_495721275"); // 1
    Undly_91_set.insert("UnderlyingSecurityExchange_t_495721275");
    Undly_91.add_attribute("Issr", "UnderlyingIssuer_t_509018896"); // 1
    Undly_91_set.insert("UnderlyingIssuer_t_509018896");
    Undly_91.add_attribute("EncUndIssrLen", "489490948"); // 1
    Undly_91_set.insert("489490948");
    Undly_91.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1629399915"); // 1
    Undly_91_set.insert("EncodedUnderlyingIssuer_t_1629399915");
    Undly_91.add_attribute("Desc", "UnderlyingSecurityDesc_t_1240548703"); // 1
    Undly_91_set.insert("UnderlyingSecurityDesc_t_1240548703");
    Undly_91.add_attribute("EncUndSecDescLen", "167494385"); // 1
    Undly_91_set.insert("167494385");
    Undly_91.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1605377101"); // 1
    Undly_91_set.insert("EncodedUnderlyingSecurityDesc_t_1605377101");
    Undly_91.add_attribute("CPPgm", "UnderlyingCPProgram_t_1417148730"); // 1
    Undly_91_set.insert("UnderlyingCPProgram_t_1417148730");
    Undly_91.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_654487261"); // 1
    Undly_91_set.insert("UnderlyingCPRegType_t_654487261");
    Undly_91.add_attribute("AllocPct", "10510911.370000"); // 1
    Undly_91_set.insert("10510911.370000");
    Undly_91.add_attribute("Ccy", "EUR"); // 1
    Undly_91_set.insert("EUR");
    Undly_91.add_attribute("Qty", "4753853.510000"); // 1
    Undly_91_set.insert("4753853.510000");
    Undly_91.add_attribute("SettlTyp", "2"); // 1
    Undly_91_set.insert("2");
    Undly_91.add_attribute("CashAmt", "UnderlyingCashAmount_t_735377134"); // 1
    Undly_91_set.insert("UnderlyingCashAmount_t_735377134");
    Undly_91.add_attribute("CashTyp", "FIXED"); // 1
    Undly_91_set.insert("FIXED");
    Undly_91.add_attribute("Px", "460102.310000"); // 1
    Undly_91_set.insert("460102.310000");
    Undly_91.add_attribute("DirtPx", "18685881.200000"); // 1
    Undly_91_set.insert("18685881.200000");
    Undly_91.add_attribute("EndPx", "19630720.120000"); // 1
    Undly_91_set.insert("19630720.120000");
    Undly_91.add_attribute("StartVal", "UnderlyingStartValue_t_592066228"); // 1
    Undly_91_set.insert("UnderlyingStartValue_t_592066228");
    Undly_91.add_attribute("CurVal", "UnderlyingCurrentValue_t_681616447"); // 1
    Undly_91_set.insert("UnderlyingCurrentValue_t_681616447");
    Undly_91.add_attribute("EndVal", "UnderlyingEndValue_t_2051623293"); // 1
    Undly_91_set.insert("UnderlyingEndValue_t_2051623293");
    Undly_91.add_attribute("AdjQty", "16416186.430000"); // 1
    Undly_91_set.insert("16416186.430000");
    Undly_91.add_attribute("FxRate", "3446663.870000"); // 1
    Undly_91_set.insert("3446663.870000");
    Undly_91.add_attribute("FxRateCalc", "M"); // 1
    Undly_91_set.insert("M");
    Undly_91.add_attribute("CapValu", "UnderlyingCapValue_t_2070885806"); // 1
    Undly_91_set.insert("UnderlyingCapValue_t_2070885806");
    Undly_91.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2007900318"); // 1
    Undly_91_set.insert("UnderlyingSettlMethod_t_2007900318");
    Undly_91.add_attribute("PutCall", "916665954"); // 1
    Undly_91_set.insert("916665954");
    all_values.push_back(Undly_91_set);
    all_compo_names.insert("Undly_91_set");

    {
      xml_element UndAID_91{"UndAID"};
      multiset<string> UndAID_91_set;
      UndAID_91.add_attribute("AltID", "UnderlyingSecurityAltID_t_1909934024"); // 2
      UndAID_91_set.insert("UnderlyingSecurityAltID_t_1909934024");
      UndAID_91.add_attribute("AltIDSrc", "B"); // 2
      UndAID_91_set.insert("B");
      all_values.push_back(UndAID_91_set);
      all_compo_names.insert("UndAID_91_set");

      Undly_91.add_element(UndAID_91);
    }
    {
      xml_element Stip_142{"Stip"};
      multiset<string> Stip_142_set;
      Stip_142.add_attribute("Typ", "PROD"); // 2
      Stip_142_set.insert("PROD");
      Stip_142.add_attribute("Val", "UnderlyingStipValue_t_258171651"); // 2
      Stip_142_set.insert("UnderlyingStipValue_t_258171651");
      all_values.push_back(Stip_142_set);
      all_compo_names.insert("Stip_142_set");

      Undly_91.add_element(Stip_142);
    }
    {
      xml_element Pty_367{"Pty"};
      multiset<string> Pty_367_set;
      Pty_367.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1373018218"); // 2
      Pty_367_set.insert("UnderlyingInstrumentPartyID_t_1373018218");
      Pty_367.add_attribute("Src", "9"); // 2
      Pty_367_set.insert("9");
      Pty_367.add_attribute("R", "15"); // 2
      Pty_367_set.insert("15");
      all_values.push_back(Pty_367_set);
      all_compo_names.insert("Pty_367_set");

      {
        xml_element Sub_367{"Sub"};
        multiset<string> Sub_367_set;
        Sub_367.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_466083273"); // 3
        Sub_367_set.insert("UnderlyingInstrumentPartySubID_t_466083273");
        Sub_367.add_attribute("Typ", "32"); // 3
        Sub_367_set.insert("32");
        all_values.push_back(Sub_367_set);
        all_compo_names.insert("Sub_367_set");

        Pty_367.add_element(Sub_367);
      }
      Undly_91.add_element(Pty_367);
    }
    elt.add_element(Undly_91);
  } // end Undly
  { // Undly
    xml_element Undly_92{"Undly"};
    multiset<string> Undly_92_set;
    Undly_92.add_attribute("Sym", "UnderlyingSymbol_t_1345465020"); // 1
    Undly_92_set.insert("UnderlyingSymbol_t_1345465020");
    Undly_92.add_attribute("Sfx", "WI"); // 1
    Undly_92_set.insert("WI");
    Undly_92.add_attribute("ID", "UnderlyingSecurityID_t_823892265"); // 1
    Undly_92_set.insert("UnderlyingSecurityID_t_823892265");
    Undly_92.add_attribute("Src", "G"); // 1
    Undly_92_set.insert("G");
    Undly_92.add_attribute("Prod", "7"); // 1
    Undly_92_set.insert("7");
    Undly_92.add_attribute("CFI", "UnderlyingCFICode_t_934234498"); // 1
    Undly_92_set.insert("UnderlyingCFICode_t_934234498");
    Undly_92.add_attribute("SecTyp", "MT"); // 1
    Undly_92_set.insert("MT");
    Undly_92.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1125488082"); // 1
    Undly_92_set.insert("UnderlyingSecuritySubType_t_1125488082");
    Undly_92.add_attribute("MMY", "1669611632"); // 1
    Undly_92_set.insert("1669611632");
    Undly_92.add_attribute("Mat", "UnderlyingMaturityDate_t_648629407"); // 1
    Undly_92_set.insert("UnderlyingMaturityDate_t_648629407");
    Undly_92.add_attribute("MatTm", "1171498313"); // 1
    Undly_92_set.insert("1171498313");
    Undly_92.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1390716104"); // 1
    Undly_92_set.insert("UnderlyingCouponPaymentDate_t_1390716104");
    Undly_92.add_attribute("RestrctTyp", "XR"); // 1
    Undly_92_set.insert("XR");
    Undly_92.add_attribute("Snrty", "SD"); // 1
    Undly_92_set.insert("SD");
    Undly_92.add_attribute("NotlPctOut", "20723325.510000"); // 1
    Undly_92_set.insert("20723325.510000");
    Undly_92.add_attribute("OrigNotlPctOut", "3683574.160000"); // 1
    Undly_92_set.insert("3683574.160000");
    Undly_92.add_attribute("AttchPnt", "12576995.360000"); // 1
    Undly_92_set.insert("12576995.360000");
    Undly_92.add_attribute("DetchPnt", "2695152.910000"); // 1
    Undly_92_set.insert("2695152.910000");
    Undly_92.add_attribute("Issued", "UnderlyingIssueDate_t_1319440466"); // 1
    Undly_92_set.insert("UnderlyingIssueDate_t_1319440466");
    Undly_92.add_attribute("RepoCollSecTyp", "1181101694"); // 1
    Undly_92_set.insert("1181101694");
    Undly_92.add_attribute("RepoTrm", "129931961"); // 1
    Undly_92_set.insert("129931961");
    Undly_92.add_attribute("RepoRt", "886227.720000"); // 1
    Undly_92_set.insert("886227.720000");
    Undly_92.add_attribute("Fctr", "9435520.700000"); // 1
    Undly_92_set.insert("9435520.700000");
    Undly_92.add_attribute("CrdRtg", "UnderlyingCreditRating_t_993931283"); // 1
    Undly_92_set.insert("UnderlyingCreditRating_t_993931283");
    Undly_92.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1748526090"); // 1
    Undly_92_set.insert("UnderlyingInstrRegistry_t_1748526090");
    Undly_92.add_attribute("Ctry", "1201723721"); // 1
    Undly_92_set.insert("1201723721");
    Undly_92.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_219465854"); // 1
    Undly_92_set.insert("UnderlyingStateOrProvinceOfIssue_t_219465854");
    Undly_92.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1750436708"); // 1
    Undly_92_set.insert("UnderlyingLocaleOfIssue_t_1750436708");
    Undly_92.add_attribute("Redeem", "UnderlyingRedemptionDate_t_941811640"); // 1
    Undly_92_set.insert("UnderlyingRedemptionDate_t_941811640");
    Undly_92.add_attribute("StrkPx", "6855491.270000"); // 1
    Undly_92_set.insert("6855491.270000");
    Undly_92.add_attribute("StrkCcy", "GBP"); // 1
    Undly_92_set.insert("GBP");
    Undly_92.add_attribute("OptA", "421297483"); // 1
    Undly_92_set.insert("421297483");
    Undly_92.add_attribute("Mult", "5962503.290000"); // 1
    Undly_92_set.insert("5962503.290000");
    Undly_92.add_attribute("MultTyp", "1"); // 1
    Undly_92_set.insert("1");
    Undly_92.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_92_set.insert("3");
    Undly_92.add_attribute("UOM", "MMBtu"); // 1
    Undly_92_set.insert("MMBtu");
    Undly_92.add_attribute("UOMQty", "11133233.810000"); // 1
    Undly_92_set.insert("11133233.810000");
    Undly_92.add_attribute("PxUOM", "Alw"); // 1
    Undly_92_set.insert("Alw");
    Undly_92.add_attribute("PxUOMQty", "10526128.110000"); // 1
    Undly_92_set.insert("10526128.110000");
    Undly_92.add_attribute("TmUnit", "Min"); // 1
    Undly_92_set.insert("Min");
    Undly_92.add_attribute("ExerStyle", "1"); // 1
    Undly_92_set.insert("1");
    Undly_92.add_attribute("CpnRt", "2958452.670000"); // 1
    Undly_92_set.insert("2958452.670000");
    Undly_92.add_attribute("Exch", "UnderlyingSecurityExchange_t_78686911"); // 1
    Undly_92_set.insert("UnderlyingSecurityExchange_t_78686911");
    Undly_92.add_attribute("Issr", "UnderlyingIssuer_t_1900009303"); // 1
    Undly_92_set.insert("UnderlyingIssuer_t_1900009303");
    Undly_92.add_attribute("EncUndIssrLen", "220694170"); // 1
    Undly_92_set.insert("220694170");
    Undly_92.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_447044327"); // 1
    Undly_92_set.insert("EncodedUnderlyingIssuer_t_447044327");
    Undly_92.add_attribute("Desc", "UnderlyingSecurityDesc_t_1010225191"); // 1
    Undly_92_set.insert("UnderlyingSecurityDesc_t_1010225191");
    Undly_92.add_attribute("EncUndSecDescLen", "490209461"); // 1
    Undly_92_set.insert("490209461");
    Undly_92.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1766484793"); // 1
    Undly_92_set.insert("EncodedUnderlyingSecurityDesc_t_1766484793");
    Undly_92.add_attribute("CPPgm", "UnderlyingCPProgram_t_43843237"); // 1
    Undly_92_set.insert("UnderlyingCPProgram_t_43843237");
    Undly_92.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_620141423"); // 1
    Undly_92_set.insert("UnderlyingCPRegType_t_620141423");
    Undly_92.add_attribute("AllocPct", "18551075.650000"); // 1
    Undly_92_set.insert("18551075.650000");
    Undly_92.add_attribute("Ccy", "JPY"); // 1
    Undly_92_set.insert("JPY");
    Undly_92.add_attribute("Qty", "14561500.070000"); // 1
    Undly_92_set.insert("14561500.070000");
    Undly_92.add_attribute("SettlTyp", "2"); // 1
    Undly_92_set.insert("2");
    Undly_92.add_attribute("CashAmt", "UnderlyingCashAmount_t_1833538560"); // 1
    Undly_92_set.insert("UnderlyingCashAmount_t_1833538560");
    Undly_92.add_attribute("CashTyp", "FIXED"); // 1
    Undly_92_set.insert("FIXED");
    Undly_92.add_attribute("Px", "9834470.200000"); // 1
    Undly_92_set.insert("9834470.200000");
    Undly_92.add_attribute("DirtPx", "3716040.400000"); // 1
    Undly_92_set.insert("3716040.400000");
    Undly_92.add_attribute("EndPx", "8314611.320000"); // 1
    Undly_92_set.insert("8314611.320000");
    Undly_92.add_attribute("StartVal", "UnderlyingStartValue_t_1123240032"); // 1
    Undly_92_set.insert("UnderlyingStartValue_t_1123240032");
    Undly_92.add_attribute("CurVal", "UnderlyingCurrentValue_t_792901523"); // 1
    Undly_92_set.insert("UnderlyingCurrentValue_t_792901523");
    Undly_92.add_attribute("EndVal", "UnderlyingEndValue_t_1427711461"); // 1
    Undly_92_set.insert("UnderlyingEndValue_t_1427711461");
    Undly_92.add_attribute("AdjQty", "15121055.530000"); // 1
    Undly_92_set.insert("15121055.530000");
    Undly_92.add_attribute("FxRate", "7798435.380000"); // 1
    Undly_92_set.insert("7798435.380000");
    Undly_92.add_attribute("FxRateCalc", "M"); // 1
    Undly_92_set.insert("M");
    Undly_92.add_attribute("CapValu", "UnderlyingCapValue_t_477945287"); // 1
    Undly_92_set.insert("UnderlyingCapValue_t_477945287");
    Undly_92.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1892273635"); // 1
    Undly_92_set.insert("UnderlyingSettlMethod_t_1892273635");
    Undly_92.add_attribute("PutCall", "1863325451"); // 1
    Undly_92_set.insert("1863325451");
    all_values.push_back(Undly_92_set);
    all_compo_names.insert("Undly_92_set");

    {
      xml_element UndAID_92{"UndAID"};
      multiset<string> UndAID_92_set;
      UndAID_92.add_attribute("AltID", "UnderlyingSecurityAltID_t_92414427"); // 2
      UndAID_92_set.insert("UnderlyingSecurityAltID_t_92414427");
      UndAID_92.add_attribute("AltIDSrc", "E"); // 2
      UndAID_92_set.insert("E");
      all_values.push_back(UndAID_92_set);
      all_compo_names.insert("UndAID_92_set");

      Undly_92.add_element(UndAID_92);
    }
    {
      xml_element Stip_143{"Stip"};
      multiset<string> Stip_143_set;
      Stip_143.add_attribute("Typ", "PIECES"); // 2
      Stip_143_set.insert("PIECES");
      Stip_143.add_attribute("Val", "UnderlyingStipValue_t_171101339"); // 2
      Stip_143_set.insert("UnderlyingStipValue_t_171101339");
      all_values.push_back(Stip_143_set);
      all_compo_names.insert("Stip_143_set");

      Undly_92.add_element(Stip_143);
    }
    {
      xml_element Pty_368{"Pty"};
      multiset<string> Pty_368_set;
      Pty_368.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1781244052"); // 2
      Pty_368_set.insert("UnderlyingInstrumentPartyID_t_1781244052");
      Pty_368.add_attribute("Src", "H"); // 2
      Pty_368_set.insert("H");
      Pty_368.add_attribute("R", "84"); // 2
      Pty_368_set.insert("84");
      all_values.push_back(Pty_368_set);
      all_compo_names.insert("Pty_368_set");

      {
        xml_element Sub_368{"Sub"};
        multiset<string> Sub_368_set;
        Sub_368.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_643985595"); // 3
        Sub_368_set.insert("UnderlyingInstrumentPartySubID_t_643985595");
        Sub_368.add_attribute("Typ", "32"); // 3
        Sub_368_set.insert("32");
        all_values.push_back(Sub_368_set);
        all_compo_names.insert("Sub_368_set");

        Pty_368.add_element(Sub_368);
      }
      Undly_92.add_element(Pty_368);
    }
    elt.add_element(Undly_92);
  } // end Undly
  { // Undly
    xml_element Undly_93{"Undly"};
    multiset<string> Undly_93_set;
    Undly_93.add_attribute("Sym", "UnderlyingSymbol_t_237146812"); // 1
    Undly_93_set.insert("UnderlyingSymbol_t_237146812");
    Undly_93.add_attribute("Sfx", "CD"); // 1
    Undly_93_set.insert("CD");
    Undly_93.add_attribute("ID", "UnderlyingSecurityID_t_1342732125"); // 1
    Undly_93_set.insert("UnderlyingSecurityID_t_1342732125");
    Undly_93.add_attribute("Src", "G"); // 1
    Undly_93_set.insert("G");
    Undly_93.add_attribute("Prod", "13"); // 1
    Undly_93_set.insert("13");
    Undly_93.add_attribute("CFI", "UnderlyingCFICode_t_809321183"); // 1
    Undly_93_set.insert("UnderlyingCFICode_t_809321183");
    Undly_93.add_attribute("SecTyp", "TBILL"); // 1
    Undly_93_set.insert("TBILL");
    Undly_93.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1716859519"); // 1
    Undly_93_set.insert("UnderlyingSecuritySubType_t_1716859519");
    Undly_93.add_attribute("MMY", "495376096"); // 1
    Undly_93_set.insert("495376096");
    Undly_93.add_attribute("Mat", "UnderlyingMaturityDate_t_312540157"); // 1
    Undly_93_set.insert("UnderlyingMaturityDate_t_312540157");
    Undly_93.add_attribute("MatTm", "552822892"); // 1
    Undly_93_set.insert("552822892");
    Undly_93.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_866980136"); // 1
    Undly_93_set.insert("UnderlyingCouponPaymentDate_t_866980136");
    Undly_93.add_attribute("RestrctTyp", "MR"); // 1
    Undly_93_set.insert("MR");
    Undly_93.add_attribute("Snrty", "SR"); // 1
    Undly_93_set.insert("SR");
    Undly_93.add_attribute("NotlPctOut", "16598816.590000"); // 1
    Undly_93_set.insert("16598816.590000");
    Undly_93.add_attribute("OrigNotlPctOut", "4242291.020000"); // 1
    Undly_93_set.insert("4242291.020000");
    Undly_93.add_attribute("AttchPnt", "10406848.300000"); // 1
    Undly_93_set.insert("10406848.300000");
    Undly_93.add_attribute("DetchPnt", "2922415.490000"); // 1
    Undly_93_set.insert("2922415.490000");
    Undly_93.add_attribute("Issued", "UnderlyingIssueDate_t_1234941742"); // 1
    Undly_93_set.insert("UnderlyingIssueDate_t_1234941742");
    Undly_93.add_attribute("RepoCollSecTyp", "1518630117"); // 1
    Undly_93_set.insert("1518630117");
    Undly_93.add_attribute("RepoTrm", "37031536"); // 1
    Undly_93_set.insert("37031536");
    Undly_93.add_attribute("RepoRt", "9507835.450000"); // 1
    Undly_93_set.insert("9507835.450000");
    Undly_93.add_attribute("Fctr", "16110445.440000"); // 1
    Undly_93_set.insert("16110445.440000");
    Undly_93.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2065749933"); // 1
    Undly_93_set.insert("UnderlyingCreditRating_t_2065749933");
    Undly_93.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_962470615"); // 1
    Undly_93_set.insert("UnderlyingInstrRegistry_t_962470615");
    Undly_93.add_attribute("Ctry", "1782145883"); // 1
    Undly_93_set.insert("1782145883");
    Undly_93.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1699510337"); // 1
    Undly_93_set.insert("UnderlyingStateOrProvinceOfIssue_t_1699510337");
    Undly_93.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1194851855"); // 1
    Undly_93_set.insert("UnderlyingLocaleOfIssue_t_1194851855");
    Undly_93.add_attribute("Redeem", "UnderlyingRedemptionDate_t_252807902"); // 1
    Undly_93_set.insert("UnderlyingRedemptionDate_t_252807902");
    Undly_93.add_attribute("StrkPx", "1960122.840000"); // 1
    Undly_93_set.insert("1960122.840000");
    Undly_93.add_attribute("StrkCcy", "USD"); // 1
    Undly_93_set.insert("USD");
    Undly_93.add_attribute("OptA", "883841116"); // 1
    Undly_93_set.insert("883841116");
    Undly_93.add_attribute("Mult", "11126910.340000"); // 1
    Undly_93_set.insert("11126910.340000");
    Undly_93.add_attribute("MultTyp", "0"); // 1
    Undly_93_set.insert("0");
    Undly_93.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_93_set.insert("2");
    Undly_93.add_attribute("UOM", "USD"); // 1
    Undly_93_set.insert("USD");
    Undly_93.add_attribute("UOMQty", "18356461.800000"); // 1
    Undly_93_set.insert("18356461.800000");
    Undly_93.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_93_set.insert("MMbbl");
    Undly_93.add_attribute("PxUOMQty", "2699046.660000"); // 1
    Undly_93_set.insert("2699046.660000");
    Undly_93.add_attribute("TmUnit", "Min"); // 1
    Undly_93_set.insert("Min");
    Undly_93.add_attribute("ExerStyle", "0"); // 1
    Undly_93_set.insert("0");
    Undly_93.add_attribute("CpnRt", "11368848.020000"); // 1
    Undly_93_set.insert("11368848.020000");
    Undly_93.add_attribute("Exch", "UnderlyingSecurityExchange_t_1144703978"); // 1
    Undly_93_set.insert("UnderlyingSecurityExchange_t_1144703978");
    Undly_93.add_attribute("Issr", "UnderlyingIssuer_t_62359647"); // 1
    Undly_93_set.insert("UnderlyingIssuer_t_62359647");
    Undly_93.add_attribute("EncUndIssrLen", "649282813"); // 1
    Undly_93_set.insert("649282813");
    Undly_93.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1568933080"); // 1
    Undly_93_set.insert("EncodedUnderlyingIssuer_t_1568933080");
    Undly_93.add_attribute("Desc", "UnderlyingSecurityDesc_t_1103044477"); // 1
    Undly_93_set.insert("UnderlyingSecurityDesc_t_1103044477");
    Undly_93.add_attribute("EncUndSecDescLen", "941524362"); // 1
    Undly_93_set.insert("941524362");
    Undly_93.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_656391174"); // 1
    Undly_93_set.insert("EncodedUnderlyingSecurityDesc_t_656391174");
    Undly_93.add_attribute("CPPgm", "UnderlyingCPProgram_t_474190946"); // 1
    Undly_93_set.insert("UnderlyingCPProgram_t_474190946");
    Undly_93.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_978555898"); // 1
    Undly_93_set.insert("UnderlyingCPRegType_t_978555898");
    Undly_93.add_attribute("AllocPct", "16071747.190000"); // 1
    Undly_93_set.insert("16071747.190000");
    Undly_93.add_attribute("Ccy", "CAN"); // 1
    Undly_93_set.insert("CAN");
    Undly_93.add_attribute("Qty", "4221616.860000"); // 1
    Undly_93_set.insert("4221616.860000");
    Undly_93.add_attribute("SettlTyp", "2"); // 1
    Undly_93_set.insert("2");
    Undly_93.add_attribute("CashAmt", "UnderlyingCashAmount_t_448848872"); // 1
    Undly_93_set.insert("UnderlyingCashAmount_t_448848872");
    Undly_93.add_attribute("CashTyp", "FIXED"); // 1
    Undly_93_set.insert("FIXED");
    Undly_93.add_attribute("Px", "19727056.280000"); // 1
    Undly_93_set.insert("19727056.280000");
    Undly_93.add_attribute("DirtPx", "6448611.560000"); // 1
    Undly_93_set.insert("6448611.560000");
    Undly_93.add_attribute("EndPx", "13869724.510000"); // 1
    Undly_93_set.insert("13869724.510000");
    Undly_93.add_attribute("StartVal", "UnderlyingStartValue_t_315176694"); // 1
    Undly_93_set.insert("UnderlyingStartValue_t_315176694");
    Undly_93.add_attribute("CurVal", "UnderlyingCurrentValue_t_1528702272"); // 1
    Undly_93_set.insert("UnderlyingCurrentValue_t_1528702272");
    Undly_93.add_attribute("EndVal", "UnderlyingEndValue_t_352179838"); // 1
    Undly_93_set.insert("UnderlyingEndValue_t_352179838");
    Undly_93.add_attribute("AdjQty", "7499021.370000"); // 1
    Undly_93_set.insert("7499021.370000");
    Undly_93.add_attribute("FxRate", "19402838.790000"); // 1
    Undly_93_set.insert("19402838.790000");
    Undly_93.add_attribute("FxRateCalc", "M"); // 1
    Undly_93_set.insert("M");
    Undly_93.add_attribute("CapValu", "UnderlyingCapValue_t_438064670"); // 1
    Undly_93_set.insert("UnderlyingCapValue_t_438064670");
    Undly_93.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1921241357"); // 1
    Undly_93_set.insert("UnderlyingSettlMethod_t_1921241357");
    Undly_93.add_attribute("PutCall", "396613074"); // 1
    Undly_93_set.insert("396613074");
    all_values.push_back(Undly_93_set);
    all_compo_names.insert("Undly_93_set");

    {
      xml_element UndAID_93{"UndAID"};
      multiset<string> UndAID_93_set;
      UndAID_93.add_attribute("AltID", "UnderlyingSecurityAltID_t_438767359"); // 2
      UndAID_93_set.insert("UnderlyingSecurityAltID_t_438767359");
      UndAID_93.add_attribute("AltIDSrc", "F"); // 2
      UndAID_93_set.insert("F");
      all_values.push_back(UndAID_93_set);
      all_compo_names.insert("UndAID_93_set");

      Undly_93.add_element(UndAID_93);
    }
    {
      xml_element Stip_144{"Stip"};
      multiset<string> Stip_144_set;
      Stip_144.add_attribute("Typ", "PRICE"); // 2
      Stip_144_set.insert("PRICE");
      Stip_144.add_attribute("Val", "UnderlyingStipValue_t_1583471338"); // 2
      Stip_144_set.insert("UnderlyingStipValue_t_1583471338");
      all_values.push_back(Stip_144_set);
      all_compo_names.insert("Stip_144_set");

      Undly_93.add_element(Stip_144);
    }
    {
      xml_element Pty_369{"Pty"};
      multiset<string> Pty_369_set;
      Pty_369.add_attribute("ID", "UnderlyingInstrumentPartyID_t_369897727"); // 2
      Pty_369_set.insert("UnderlyingInstrumentPartyID_t_369897727");
      Pty_369.add_attribute("Src", "E"); // 2
      Pty_369_set.insert("E");
      Pty_369.add_attribute("R", "45"); // 2
      Pty_369_set.insert("45");
      all_values.push_back(Pty_369_set);
      all_compo_names.insert("Pty_369_set");

      {
        xml_element Sub_369{"Sub"};
        multiset<string> Sub_369_set;
        Sub_369.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1472942204"); // 3
        Sub_369_set.insert("UnderlyingInstrumentPartySubID_t_1472942204");
        Sub_369.add_attribute("Typ", "3"); // 3
        Sub_369_set.insert("3");
        all_values.push_back(Sub_369_set);
        all_compo_names.insert("Sub_369_set");

        Pty_369.add_element(Sub_369);
      }
      Undly_93.add_element(Pty_369);
    }
    elt.add_element(Undly_93);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_26{"OrdQty"};
    multiset<string> OrdQty_26_set;
    OrdQty_26.add_attribute("Qty", "16613119.450000"); // 1
    OrdQty_26_set.insert("16613119.450000");
    OrdQty_26.add_attribute("Cash", "19471331.500000"); // 1
    OrdQty_26_set.insert("19471331.500000");
    OrdQty_26.add_attribute("Pct", "19553773.010000"); // 1
    OrdQty_26_set.insert("19553773.010000");
    OrdQty_26.add_attribute("RndDir", "0"); // 1
    OrdQty_26_set.insert("0");
    OrdQty_26.add_attribute("RndMod", "18848849.920000"); // 1
    OrdQty_26_set.insert("18848849.920000");
    all_values.push_back(OrdQty_26_set);
    all_compo_names.insert("OrdQty_26_set");

    elt.add_element(OrdQty_26);
  } // end OrdQty
  { // Stip
    xml_element Stip_145{"Stip"};
    multiset<string> Stip_145_set;
    Stip_145.add_attribute("Typ", "POOL"); // 1
    Stip_145_set.insert("POOL");
    Stip_145.add_attribute("Val", "StipulationValue_t_1457299070"); // 1
    Stip_145_set.insert("StipulationValue_t_1457299070");
    all_values.push_back(Stip_145_set);
    all_compo_names.insert("Stip_145_set");

    elt.add_element(Stip_145);
  } // end Stip
  { // Stip
    xml_element Stip_146{"Stip"};
    multiset<string> Stip_146_set;
    Stip_146.add_attribute("Typ", "AVAILQTY"); // 1
    Stip_146_set.insert("AVAILQTY");
    Stip_146.add_attribute("Val", "StipulationValue_t_1012694597"); // 1
    Stip_146_set.insert("StipulationValue_t_1012694597");
    all_values.push_back(Stip_146_set);
    all_compo_names.insert("Stip_146_set");

    elt.add_element(Stip_146);
  } // end Stip
  { // Stip
    xml_element Stip_147{"Stip"};
    multiset<string> Stip_147_set;
    Stip_147.add_attribute("Typ", "CUSTOMDATE"); // 1
    Stip_147_set.insert("CUSTOMDATE");
    Stip_147.add_attribute("Val", "StipulationValue_t_1798425864"); // 1
    Stip_147_set.insert("StipulationValue_t_1798425864");
    all_values.push_back(Stip_147_set);
    all_compo_names.insert("Stip_147_set");

    elt.add_element(Stip_147);
  } // end Stip
  { // QuoteStat
    xml_element QuoteStat_0{"QuoteStat"};
    multiset<string> QuoteStat_0_set;
    QuoteStat_0.add_attribute("Qty", "15976977.440000"); // 1
    QuoteStat_0_set.insert("15976977.440000");
    QuoteStat_0.add_attribute("OrdQty", "11796444.880000"); // 1
    QuoteStat_0_set.insert("11796444.880000");
    QuoteStat_0.add_attribute("SwapTyp", "4"); // 1
    QuoteStat_0_set.insert("4");
    QuoteStat_0.add_attribute("SettlTyp", "C"); // 1
    QuoteStat_0_set.insert("C");
    QuoteStat_0.add_attribute("SettlDt", "LegSettlDate_t_972444719"); // 1
    QuoteStat_0_set.insert("LegSettlDate_t_972444719");
    all_values.push_back(QuoteStat_0_set);
    all_compo_names.insert("QuoteStat_0_set");

    {
      xml_element Leg_82{"Leg"};
      multiset<string> Leg_82_set;
      Leg_82.add_attribute("Sym", "LegSymbol_t_731071646"); // 2
      Leg_82_set.insert("LegSymbol_t_731071646");
      Leg_82.add_attribute("Sfx", "CD"); // 2
      Leg_82_set.insert("CD");
      Leg_82.add_attribute("ID", "LegSecurityID_t_746202428"); // 2
      Leg_82_set.insert("LegSecurityID_t_746202428");
      Leg_82.add_attribute("Src", "9"); // 2
      Leg_82_set.insert("9");
      Leg_82.add_attribute("Prod", "10"); // 2
      Leg_82_set.insert("10");
      Leg_82.add_attribute("CFI", "LegCFICode_t_1053740508"); // 2
      Leg_82_set.insert("LegCFICode_t_1053740508");
      Leg_82.add_attribute("SecTyp", "FRN"); // 2
      Leg_82_set.insert("FRN");
      Leg_82.add_attribute("SecSubTyp", "LegSecuritySubType_t_512935953"); // 2
      Leg_82_set.insert("LegSecuritySubType_t_512935953");
      Leg_82.add_attribute("MMY", "1423638235"); // 2
      Leg_82_set.insert("1423638235");
      Leg_82.add_attribute("Mat", "LegMaturityDate_t_548995989"); // 2
      Leg_82_set.insert("LegMaturityDate_t_548995989");
      Leg_82.add_attribute("MatTm", "1517856724"); // 2
      Leg_82_set.insert("1517856724");
      Leg_82.add_attribute("CpnPmt", "LegCouponPaymentDate_t_749096791"); // 2
      Leg_82_set.insert("LegCouponPaymentDate_t_749096791");
      Leg_82.add_attribute("Issued", "LegIssueDate_t_1525817392"); // 2
      Leg_82_set.insert("LegIssueDate_t_1525817392");
      Leg_82.add_attribute("RepoCollSecTyp", "1031685021"); // 2
      Leg_82_set.insert("1031685021");
      Leg_82.add_attribute("RepoTrm", "548746293"); // 2
      Leg_82_set.insert("548746293");
      Leg_82.add_attribute("RepoRt", "13337110.450000"); // 2
      Leg_82_set.insert("13337110.450000");
      Leg_82.add_attribute("Fctr", "52043.890000"); // 2
      Leg_82_set.insert("52043.890000");
      Leg_82.add_attribute("CrdRtg", "LegCreditRating_t_286147638"); // 2
      Leg_82_set.insert("LegCreditRating_t_286147638");
      Leg_82.add_attribute("Rgstry", "LegInstrRegistry_t_2038426881"); // 2
      Leg_82_set.insert("LegInstrRegistry_t_2038426881");
      Leg_82.add_attribute("Ctry", "1548369092"); // 2
      Leg_82_set.insert("1548369092");
      Leg_82.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1743446708"); // 2
      Leg_82_set.insert("LegStateOrProvinceOfIssue_t_1743446708");
      Leg_82.add_attribute("Lcl", "LegLocaleOfIssue_t_1044507941"); // 2
      Leg_82_set.insert("LegLocaleOfIssue_t_1044507941");
      Leg_82.add_attribute("Redeem", "LegRedemptionDate_t_413580041"); // 2
      Leg_82_set.insert("LegRedemptionDate_t_413580041");
      Leg_82.add_attribute("Strk", "8784841.110000"); // 2
      Leg_82_set.insert("8784841.110000");
      Leg_82.add_attribute("StrkCcy", "JPY"); // 2
      Leg_82_set.insert("JPY");
      Leg_82.add_attribute("OptA", "328698207"); // 2
      Leg_82_set.insert("328698207");
      Leg_82.add_attribute("Cmult", "18750946.450000"); // 2
      Leg_82_set.insert("18750946.450000");
      Leg_82.add_attribute("MultTyp", "0"); // 2
      Leg_82_set.insert("0");
      Leg_82.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_82_set.insert("1");
      Leg_82.add_attribute("UOM", "USD"); // 2
      Leg_82_set.insert("USD");
      Leg_82.add_attribute("UOMQty", "20011983.270000"); // 2
      Leg_82_set.insert("20011983.270000");
      Leg_82.add_attribute("PxUOM", "USD"); // 2
      Leg_82_set.insert("USD");
      Leg_82.add_attribute("PxUOMQty", "14462581.450000"); // 2
      Leg_82_set.insert("14462581.450000");
      Leg_82.add_attribute("TmUnit", "Min"); // 2
      Leg_82_set.insert("Min");
      Leg_82.add_attribute("ExerStyle", "1"); // 2
      Leg_82_set.insert("1");
      Leg_82.add_attribute("CpnRt", "3525150.050000"); // 2
      Leg_82_set.insert("3525150.050000");
      Leg_82.add_attribute("Exch", "LegSecurityExchange_t_1495098348"); // 2
      Leg_82_set.insert("LegSecurityExchange_t_1495098348");
      Leg_82.add_attribute("Issr", "LegIssuer_t_609395914"); // 2
      Leg_82_set.insert("LegIssuer_t_609395914");
      Leg_82.add_attribute("EncLegIssrLen", "1776153241"); // 2
      Leg_82_set.insert("1776153241");
      Leg_82.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2044094337"); // 2
      Leg_82_set.insert("EncodedLegIssuer_t_2044094337");
      Leg_82.add_attribute("Desc", "LegSecurityDesc_t_2127252638"); // 2
      Leg_82_set.insert("LegSecurityDesc_t_2127252638");
      Leg_82.add_attribute("EncLegSecDescLen", "377766384"); // 2
      Leg_82_set.insert("377766384");
      Leg_82.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1422428082"); // 2
      Leg_82_set.insert("EncodedLegSecurityDesc_t_1422428082");
      Leg_82.add_attribute("RatioQty", "10114540.110000"); // 2
      Leg_82_set.insert("10114540.110000");
      Leg_82.add_attribute("Side", "7"); // 2
      Leg_82_set.insert("7");
      Leg_82.add_attribute("Ccy", "CAN"); // 2
      Leg_82_set.insert("CAN");
      Leg_82.add_attribute("Pool", "LegPool_t_1212660316"); // 2
      Leg_82_set.insert("LegPool_t_1212660316");
      Leg_82.add_attribute("Dated", "LegDatedDate_t_499598713"); // 2
      Leg_82_set.insert("LegDatedDate_t_499598713");
      Leg_82.add_attribute("CSetMo", "417543845"); // 2
      Leg_82_set.insert("417543845");
      Leg_82.add_attribute("IntAcrl", "LegInterestAccrualDate_t_808623376"); // 2
      Leg_82_set.insert("LegInterestAccrualDate_t_808623376");
      Leg_82.add_attribute("PutCall", "1544106654"); // 2
      Leg_82_set.insert("1544106654");
      Leg_82.add_attribute("LegOptionRatio", "8311238.870000"); // 2
      Leg_82_set.insert("8311238.870000");
      Leg_82.add_attribute("Px", "16871074.870000"); // 2
      Leg_82_set.insert("16871074.870000");
      all_values.push_back(Leg_82_set);
      all_compo_names.insert("Leg_82_set");

      {
        xml_element LegAID_77{"LegAID"};
        multiset<string> LegAID_77_set;
        LegAID_77.add_attribute("SecAltID", "LegSecurityAltID_t_92073164"); // 3
        LegAID_77_set.insert("LegSecurityAltID_t_92073164");
        LegAID_77.add_attribute("SecAltIDSrc", "4"); // 3
        LegAID_77_set.insert("4");
        all_values.push_back(LegAID_77_set);
        all_compo_names.insert("LegAID_77_set");

        Leg_82.add_element(LegAID_77);
      }
      QuoteStat_0.add_element(Leg_82);
    }
    {
      xml_element Stip_148{"Stip"};
      multiset<string> Stip_148_set;
      Stip_148.add_attribute("StipTyp", "ISSUE"); // 2
      Stip_148_set.insert("ISSUE");
      Stip_148.add_attribute("StipVal", "LegStipulationValue_t_1967167809"); // 2
      Stip_148_set.insert("LegStipulationValue_t_1967167809");
      all_values.push_back(Stip_148_set);
      all_compo_names.insert("Stip_148_set");

      QuoteStat_0.add_element(Stip_148);
    }
    {
      xml_element Pty_370{"Pty"};
      multiset<string> Pty_370_set;
      Pty_370.add_attribute("ID", "NestedPartyID_t_619530361"); // 2
      Pty_370_set.insert("NestedPartyID_t_619530361");
      Pty_370.add_attribute("Src", "5"); // 2
      Pty_370_set.insert("5");
      Pty_370.add_attribute("R", "45"); // 2
      Pty_370_set.insert("45");
      all_values.push_back(Pty_370_set);
      all_compo_names.insert("Pty_370_set");

      {
        xml_element Sub_370{"Sub"};
        multiset<string> Sub_370_set;
        Sub_370.add_attribute("ID", "NestedPartySubID_t_473245040"); // 3
        Sub_370_set.insert("NestedPartySubID_t_473245040");
        Sub_370.add_attribute("Typ", "20"); // 3
        Sub_370_set.insert("20");
        all_values.push_back(Sub_370_set);
        all_compo_names.insert("Sub_370_set");

        Pty_370.add_element(Sub_370);
      }
      QuoteStat_0.add_element(Pty_370);
    }
    elt.add_element(QuoteStat_0);
  } // end QuoteStat
  { // QuoteStat
    xml_element QuoteStat_1{"QuoteStat"};
    multiset<string> QuoteStat_1_set;
    QuoteStat_1.add_attribute("Qty", "19659980.230000"); // 1
    QuoteStat_1_set.insert("19659980.230000");
    QuoteStat_1.add_attribute("OrdQty", "14546444.400000"); // 1
    QuoteStat_1_set.insert("14546444.400000");
    QuoteStat_1.add_attribute("SwapTyp", "5"); // 1
    QuoteStat_1_set.insert("5");
    QuoteStat_1.add_attribute("SettlTyp", "4"); // 1
    QuoteStat_1_set.insert("4");
    QuoteStat_1.add_attribute("SettlDt", "LegSettlDate_t_802259140"); // 1
    QuoteStat_1_set.insert("LegSettlDate_t_802259140");
    all_values.push_back(QuoteStat_1_set);
    all_compo_names.insert("QuoteStat_1_set");

    {
      xml_element Leg_83{"Leg"};
      multiset<string> Leg_83_set;
      Leg_83.add_attribute("Sym", "LegSymbol_t_122504061"); // 2
      Leg_83_set.insert("LegSymbol_t_122504061");
      Leg_83.add_attribute("Sfx", "WI"); // 2
      Leg_83_set.insert("WI");
      Leg_83.add_attribute("ID", "LegSecurityID_t_698869829"); // 2
      Leg_83_set.insert("LegSecurityID_t_698869829");
      Leg_83.add_attribute("Src", "3"); // 2
      Leg_83_set.insert("3");
      Leg_83.add_attribute("Prod", "2"); // 2
      Leg_83_set.insert("2");
      Leg_83.add_attribute("CFI", "LegCFICode_t_2121297911"); // 2
      Leg_83_set.insert("LegCFICode_t_2121297911");
      Leg_83.add_attribute("SecTyp", "TB"); // 2
      Leg_83_set.insert("TB");
      Leg_83.add_attribute("SecSubTyp", "LegSecuritySubType_t_1103978036"); // 2
      Leg_83_set.insert("LegSecuritySubType_t_1103978036");
      Leg_83.add_attribute("MMY", "582469743"); // 2
      Leg_83_set.insert("582469743");
      Leg_83.add_attribute("Mat", "LegMaturityDate_t_2130385464"); // 2
      Leg_83_set.insert("LegMaturityDate_t_2130385464");
      Leg_83.add_attribute("MatTm", "169154704"); // 2
      Leg_83_set.insert("169154704");
      Leg_83.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1082068456"); // 2
      Leg_83_set.insert("LegCouponPaymentDate_t_1082068456");
      Leg_83.add_attribute("Issued", "LegIssueDate_t_400445662"); // 2
      Leg_83_set.insert("LegIssueDate_t_400445662");
      Leg_83.add_attribute("RepoCollSecTyp", "977778080"); // 2
      Leg_83_set.insert("977778080");
      Leg_83.add_attribute("RepoTrm", "478691462"); // 2
      Leg_83_set.insert("478691462");
      Leg_83.add_attribute("RepoRt", "12315695.490000"); // 2
      Leg_83_set.insert("12315695.490000");
      Leg_83.add_attribute("Fctr", "5174019.200000"); // 2
      Leg_83_set.insert("5174019.200000");
      Leg_83.add_attribute("CrdRtg", "LegCreditRating_t_570764626"); // 2
      Leg_83_set.insert("LegCreditRating_t_570764626");
      Leg_83.add_attribute("Rgstry", "LegInstrRegistry_t_580973230"); // 2
      Leg_83_set.insert("LegInstrRegistry_t_580973230");
      Leg_83.add_attribute("Ctry", "385723967"); // 2
      Leg_83_set.insert("385723967");
      Leg_83.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_390448788"); // 2
      Leg_83_set.insert("LegStateOrProvinceOfIssue_t_390448788");
      Leg_83.add_attribute("Lcl", "LegLocaleOfIssue_t_1200503591"); // 2
      Leg_83_set.insert("LegLocaleOfIssue_t_1200503591");
      Leg_83.add_attribute("Redeem", "LegRedemptionDate_t_782860455"); // 2
      Leg_83_set.insert("LegRedemptionDate_t_782860455");
      Leg_83.add_attribute("Strk", "9101886.660000"); // 2
      Leg_83_set.insert("9101886.660000");
      Leg_83.add_attribute("StrkCcy", "EUR"); // 2
      Leg_83_set.insert("EUR");
      Leg_83.add_attribute("OptA", "728703041"); // 2
      Leg_83_set.insert("728703041");
      Leg_83.add_attribute("Cmult", "9809094.240000"); // 2
      Leg_83_set.insert("9809094.240000");
      Leg_83.add_attribute("MultTyp", "2"); // 2
      Leg_83_set.insert("2");
      Leg_83.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_83_set.insert("1");
      Leg_83.add_attribute("UOM", "oz_tr"); // 2
      Leg_83_set.insert("oz_tr");
      Leg_83.add_attribute("UOMQty", "19826044.980000"); // 2
      Leg_83_set.insert("19826044.980000");
      Leg_83.add_attribute("PxUOM", "MWh"); // 2
      Leg_83_set.insert("MWh");
      Leg_83.add_attribute("PxUOMQty", "3345547.450000"); // 2
      Leg_83_set.insert("3345547.450000");
      Leg_83.add_attribute("TmUnit", "S"); // 2
      Leg_83_set.insert("S");
      Leg_83.add_attribute("ExerStyle", "2"); // 2
      Leg_83_set.insert("2");
      Leg_83.add_attribute("CpnRt", "3083690.090000"); // 2
      Leg_83_set.insert("3083690.090000");
      Leg_83.add_attribute("Exch", "LegSecurityExchange_t_1051120965"); // 2
      Leg_83_set.insert("LegSecurityExchange_t_1051120965");
      Leg_83.add_attribute("Issr", "LegIssuer_t_1980874789"); // 2
      Leg_83_set.insert("LegIssuer_t_1980874789");
      Leg_83.add_attribute("EncLegIssrLen", "890838752"); // 2
      Leg_83_set.insert("890838752");
      Leg_83.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1034022782"); // 2
      Leg_83_set.insert("EncodedLegIssuer_t_1034022782");
      Leg_83.add_attribute("Desc", "LegSecurityDesc_t_2545845"); // 2
      Leg_83_set.insert("LegSecurityDesc_t_2545845");
      Leg_83.add_attribute("EncLegSecDescLen", "1972907208"); // 2
      Leg_83_set.insert("1972907208");
      Leg_83.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1434468444"); // 2
      Leg_83_set.insert("EncodedLegSecurityDesc_t_1434468444");
      Leg_83.add_attribute("RatioQty", "9803239.250000"); // 2
      Leg_83_set.insert("9803239.250000");
      Leg_83.add_attribute("Side", "F"); // 2
      Leg_83_set.insert("F");
      Leg_83.add_attribute("Ccy", "EUR"); // 2
      Leg_83_set.insert("EUR");
      Leg_83.add_attribute("Pool", "LegPool_t_874879649"); // 2
      Leg_83_set.insert("LegPool_t_874879649");
      Leg_83.add_attribute("Dated", "LegDatedDate_t_1099527575"); // 2
      Leg_83_set.insert("LegDatedDate_t_1099527575");
      Leg_83.add_attribute("CSetMo", "1883449812"); // 2
      Leg_83_set.insert("1883449812");
      Leg_83.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1265328437"); // 2
      Leg_83_set.insert("LegInterestAccrualDate_t_1265328437");
      Leg_83.add_attribute("PutCall", "152547518"); // 2
      Leg_83_set.insert("152547518");
      Leg_83.add_attribute("LegOptionRatio", "5188266.200000"); // 2
      Leg_83_set.insert("5188266.200000");
      Leg_83.add_attribute("Px", "280334.550000"); // 2
      Leg_83_set.insert("280334.550000");
      all_values.push_back(Leg_83_set);
      all_compo_names.insert("Leg_83_set");

      {
        xml_element LegAID_78{"LegAID"};
        multiset<string> LegAID_78_set;
        LegAID_78.add_attribute("SecAltID", "LegSecurityAltID_t_1826296150"); // 3
        LegAID_78_set.insert("LegSecurityAltID_t_1826296150");
        LegAID_78.add_attribute("SecAltIDSrc", "I"); // 3
        LegAID_78_set.insert("I");
        all_values.push_back(LegAID_78_set);
        all_compo_names.insert("LegAID_78_set");

        Leg_83.add_element(LegAID_78);
      }
      QuoteStat_1.add_element(Leg_83);
    }
    {
      xml_element Stip_149{"Stip"};
      multiset<string> Stip_149_set;
      Stip_149.add_attribute("StipTyp", "ISSUER"); // 2
      Stip_149_set.insert("ISSUER");
      Stip_149.add_attribute("StipVal", "LegStipulationValue_t_659721926"); // 2
      Stip_149_set.insert("LegStipulationValue_t_659721926");
      all_values.push_back(Stip_149_set);
      all_compo_names.insert("Stip_149_set");

      QuoteStat_1.add_element(Stip_149);
    }
    {
      xml_element Pty_371{"Pty"};
      multiset<string> Pty_371_set;
      Pty_371.add_attribute("ID", "NestedPartyID_t_430952050"); // 2
      Pty_371_set.insert("NestedPartyID_t_430952050");
      Pty_371.add_attribute("Src", "I"); // 2
      Pty_371_set.insert("I");
      Pty_371.add_attribute("R", "19"); // 2
      Pty_371_set.insert("19");
      all_values.push_back(Pty_371_set);
      all_compo_names.insert("Pty_371_set");

      {
        xml_element Sub_371{"Sub"};
        multiset<string> Sub_371_set;
        Sub_371.add_attribute("ID", "NestedPartySubID_t_266072900"); // 3
        Sub_371_set.insert("NestedPartySubID_t_266072900");
        Sub_371.add_attribute("Typ", "24"); // 3
        Sub_371_set.insert("24");
        all_values.push_back(Sub_371_set);
        all_compo_names.insert("Sub_371_set");

        Pty_371.add_element(Sub_371);
      }
      QuoteStat_1.add_element(Pty_371);
    }
    elt.add_element(QuoteStat_1);
  } // end QuoteStat
  { // QuotQual
    xml_element QuotQual_7{"QuotQual"};
    multiset<string> QuotQual_7_set;
    QuotQual_7.add_attribute("Qual", "I"); // 1
    QuotQual_7_set.insert("I");
    all_values.push_back(QuotQual_7_set);
    all_compo_names.insert("QuotQual_7_set");

    elt.add_element(QuotQual_7);
  } // end QuotQual
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_28{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_28_set;
    SprdBnchmkCurve_28.add_attribute("Spread", "10853134.170000"); // 1
    SprdBnchmkCurve_28_set.insert("10853134.170000");
    SprdBnchmkCurve_28.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_28_set.insert("EUR");
    SprdBnchmkCurve_28.add_attribute("Name", "Euribor"); // 1
    SprdBnchmkCurve_28_set.insert("Euribor");
    SprdBnchmkCurve_28.add_attribute("Point", "BenchmarkCurvePoint_t_1829169349"); // 1
    SprdBnchmkCurve_28_set.insert("BenchmarkCurvePoint_t_1829169349");
    SprdBnchmkCurve_28.add_attribute("Px", "1411269.010000"); // 1
    SprdBnchmkCurve_28_set.insert("1411269.010000");
    SprdBnchmkCurve_28.add_attribute("PxTyp", "19"); // 1
    SprdBnchmkCurve_28_set.insert("19");
    SprdBnchmkCurve_28.add_attribute("SecID", "BenchmarkSecurityID_t_1654592909"); // 1
    SprdBnchmkCurve_28_set.insert("BenchmarkSecurityID_t_1654592909");
    SprdBnchmkCurve_28.add_attribute("SecIDSrc", "6"); // 1
    SprdBnchmkCurve_28_set.insert("6");
    all_values.push_back(SprdBnchmkCurve_28_set);
    all_compo_names.insert("SprdBnchmkCurve_28_set");

    elt.add_element(SprdBnchmkCurve_28);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_23{"Yield"};
    multiset<string> Yield_23_set;
    Yield_23.add_attribute("Typ", "PUT"); // 1
    Yield_23_set.insert("PUT");
    Yield_23.add_attribute("Yld", "19587079.310000"); // 1
    Yield_23_set.insert("19587079.310000");
    Yield_23.add_attribute("CalcDt", "YieldCalcDate_t_2094149690"); // 1
    Yield_23_set.insert("YieldCalcDate_t_2094149690");
    Yield_23.add_attribute("RedDt", "YieldRedemptionDate_t_1251816526"); // 1
    Yield_23_set.insert("YieldRedemptionDate_t_1251816526");
    Yield_23.add_attribute("RedPx", "6861039.320000"); // 1
    Yield_23_set.insert("6861039.320000");
    Yield_23.add_attribute("RedPxTyp", "13"); // 1
    Yield_23_set.insert("13");
    all_values.push_back(Yield_23_set);
    all_compo_names.insert("Yield_23_set");

    elt.add_element(Yield_23);
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
