#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralAssignment.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralAssignment_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollAsgn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralAssignment_message_t_0;
  elt.add_attribute("ID", "CollAsgnID_t_450470543"); // 0
  CollateralAssignment_message_t_0.insert("CollAsgnID_t_450470543");
  elt.add_attribute("ReqID", "CollReqID_t_1336107081"); // 0
  CollateralAssignment_message_t_0.insert("CollReqID_t_1336107081");
  elt.add_attribute("AsgnRsn", "4"); // 0
  CollateralAssignment_message_t_0.insert("4");
  elt.add_attribute("TransTyp", "3"); // 0
  CollateralAssignment_message_t_0.insert("3");
  elt.add_attribute("RefID", "CollAsgnRefID_t_699002699"); // 0
  CollateralAssignment_message_t_0.insert("CollAsgnRefID_t_699002699");
  elt.add_attribute("TxnTm", "TransactTime_t_1510867941"); // 0
  CollateralAssignment_message_t_0.insert("TransactTime_t_1510867941");
  elt.add_attribute("ExpireTm", "ExpireTime_t_634429584"); // 0
  CollateralAssignment_message_t_0.insert("ExpireTime_t_634429584");
  elt.add_attribute("Acct", "Account_t_103948235"); // 0
  CollateralAssignment_message_t_0.insert("Account_t_103948235");
  elt.add_attribute("AcctTyp", "2"); // 0
  CollateralAssignment_message_t_0.insert("2");
  elt.add_attribute("ClOrdID", "ClOrdID_t_853641038"); // 0
  CollateralAssignment_message_t_0.insert("ClOrdID_t_853641038");
  elt.add_attribute("OrdID", "OrderID_t_1108191926"); // 0
  CollateralAssignment_message_t_0.insert("OrderID_t_1108191926");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1856666237"); // 0
  CollateralAssignment_message_t_0.insert("SecondaryOrderID_t_1856666237");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_181937424"); // 0
  CollateralAssignment_message_t_0.insert("SecondaryClOrdID_t_181937424");
  elt.add_attribute("SettlDt", "SettlDate_t_980802792"); // 0
  CollateralAssignment_message_t_0.insert("SettlDate_t_980802792");
  elt.add_attribute("Qty", "547364.020000"); // 0
  CollateralAssignment_message_t_0.insert("547364.020000");
  elt.add_attribute("QtyTyp", "0"); // 0
  CollateralAssignment_message_t_0.insert("0");
  elt.add_attribute("Ccy", "JPY"); // 0
  CollateralAssignment_message_t_0.insert("JPY");
  elt.add_attribute("MgnExcess", "MarginExcess_t_17703522"); // 0
  CollateralAssignment_message_t_0.insert("MarginExcess_t_17703522");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_143003144"); // 0
  CollateralAssignment_message_t_0.insert("TotalNetValue_t_143003144");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_494707682"); // 0
  CollateralAssignment_message_t_0.insert("CashOutstanding_t_494707682");
  elt.add_attribute("Side", "F"); // 0
  CollateralAssignment_message_t_0.insert("F");
  elt.add_attribute("Px", "6412145.170000"); // 0
  CollateralAssignment_message_t_0.insert("6412145.170000");
  elt.add_attribute("PxTyp", "9"); // 0
  CollateralAssignment_message_t_0.insert("9");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1630375924"); // 0
  CollateralAssignment_message_t_0.insert("AccruedInterestAmt_t_1630375924");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_79044370"); // 0
  CollateralAssignment_message_t_0.insert("EndAccruedInterestAmt_t_79044370");
  elt.add_attribute("StartCsh", "StartCash_t_1694655091"); // 0
  CollateralAssignment_message_t_0.insert("StartCash_t_1694655091");
  elt.add_attribute("EndCsh", "EndCash_t_1900481900"); // 0
  CollateralAssignment_message_t_0.insert("EndCash_t_1900481900");
  elt.add_attribute("SesID", "2"); // 0
  CollateralAssignment_message_t_0.insert("2");
  elt.add_attribute("SesSub", "6"); // 0
  CollateralAssignment_message_t_0.insert("6");
  elt.add_attribute("SetSesID", "EOD"); // 0
  CollateralAssignment_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_69187367"); // 0
  CollateralAssignment_message_t_0.insert("SettlSessSubID_t_69187367");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1790234935"); // 0
  CollateralAssignment_message_t_0.insert("ClearingBusinessDate_t_1790234935");
  elt.add_attribute("Txt", "Text_t_1620344239"); // 0
  CollateralAssignment_message_t_0.insert("Text_t_1620344239");
  elt.add_attribute("EncTxtLen", "540532450"); // 0
  CollateralAssignment_message_t_0.insert("540532450");
  elt.add_attribute("EncTxt", "EncodedText_t_341753986"); // 0
  CollateralAssignment_message_t_0.insert("EncodedText_t_341753986");
  all_values.push_back(CollateralAssignment_message_t_0);
  all_compo_names.insert("CollateralAssignment_message_t");

  { // Hdr
    xml_element Hdr_14{"Hdr"};
    multiset<string> Hdr_14_set;
    Hdr_14.add_attribute("SeqNum", "983728532"); // 1
    Hdr_14_set.insert("983728532");
    Hdr_14.add_attribute("SID", "SenderCompID_t_1174962035"); // 1
    Hdr_14_set.insert("SenderCompID_t_1174962035");
    Hdr_14.add_attribute("TID", "TargetCompID_t_445702222"); // 1
    Hdr_14_set.insert("TargetCompID_t_445702222");
    Hdr_14.add_attribute("OBID", "OnBehalfOfCompID_t_1429952409"); // 1
    Hdr_14_set.insert("OnBehalfOfCompID_t_1429952409");
    Hdr_14.add_attribute("D2ID", "DeliverToCompID_t_2028603073"); // 1
    Hdr_14_set.insert("DeliverToCompID_t_2028603073");
    Hdr_14.add_attribute("SSub", "SenderSubID_t_1553894148"); // 1
    Hdr_14_set.insert("SenderSubID_t_1553894148");
    Hdr_14.add_attribute("SLoc", "SenderLocationID_t_1139134998"); // 1
    Hdr_14_set.insert("SenderLocationID_t_1139134998");
    Hdr_14.add_attribute("TSub", "TargetSubID_t_63056850"); // 1
    Hdr_14_set.insert("TargetSubID_t_63056850");
    Hdr_14.add_attribute("TLoc", "TargetLocationID_t_387213293"); // 1
    Hdr_14_set.insert("TargetLocationID_t_387213293");
    Hdr_14.add_attribute("OBSub", "OnBehalfOfSubID_t_1193871401"); // 1
    Hdr_14_set.insert("OnBehalfOfSubID_t_1193871401");
    Hdr_14.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1038054816"); // 1
    Hdr_14_set.insert("OnBehalfOfLocationID_t_1038054816");
    Hdr_14.add_attribute("D2Sub", "DeliverToSubID_t_1196736953"); // 1
    Hdr_14_set.insert("DeliverToSubID_t_1196736953");
    Hdr_14.add_attribute("D2Loc", "DeliverToLocationID_t_1759452645"); // 1
    Hdr_14_set.insert("DeliverToLocationID_t_1759452645");
    Hdr_14.add_attribute("PosDup", "N"); // 1
    Hdr_14_set.insert("N");
    Hdr_14.add_attribute("PosRsnd", "Y"); // 1
    Hdr_14_set.insert("Y");
    Hdr_14.add_attribute("Snt", "SendingTime_t_106676679"); // 1
    Hdr_14_set.insert("SendingTime_t_106676679");
    Hdr_14.add_attribute("OrigSnt", "OrigSendingTime_t_1046854689"); // 1
    Hdr_14_set.insert("OrigSendingTime_t_1046854689");
    Hdr_14.add_attribute("MsgEncd", "MessageEncoding_t_1980954614"); // 1
    Hdr_14_set.insert("MessageEncoding_t_1980954614");
    all_values.push_back(Hdr_14_set);
    all_compo_names.insert("Hdr_14_set");

    {
      xml_element Hop_14{"Hop"};
      multiset<string> Hop_14_set;
      Hop_14.add_attribute("ID", "HopCompID_t_1688521837"); // 2
      Hop_14_set.insert("HopCompID_t_1688521837");
      Hop_14.add_attribute("Ref", "529746965"); // 2
      Hop_14_set.insert("529746965");
      Hop_14.add_attribute("Snt", "HopSendingTime_t_2059998985"); // 2
      Hop_14_set.insert("HopSendingTime_t_2059998985");
      all_values.push_back(Hop_14_set);
      all_compo_names.insert("Hop_14_set");

      Hdr_14.add_element(Hop_14);
    }
    elt.add_element(Hdr_14);
  } // end Hdr
  { // Pty
    xml_element Pty_56{"Pty"};
    multiset<string> Pty_56_set;
    Pty_56.add_attribute("ID", "PartyID_t_282745218"); // 1
    Pty_56_set.insert("PartyID_t_282745218");
    Pty_56.add_attribute("Src", "7"); // 1
    Pty_56_set.insert("7");
    Pty_56.add_attribute("R", "31"); // 1
    Pty_56_set.insert("31");
    all_values.push_back(Pty_56_set);
    all_compo_names.insert("Pty_56_set");

    {
      xml_element Sub_56{"Sub"};
      multiset<string> Sub_56_set;
      Sub_56.add_attribute("ID", "PartySubID_t_1773238565"); // 2
      Sub_56_set.insert("PartySubID_t_1773238565");
      Sub_56.add_attribute("Typ", "30"); // 2
      Sub_56_set.insert("30");
      all_values.push_back(Sub_56_set);
      all_compo_names.insert("Sub_56_set");

      Pty_56.add_element(Sub_56);
    }
    elt.add_element(Pty_56);
  } // end Pty
  { // Pty
    xml_element Pty_57{"Pty"};
    multiset<string> Pty_57_set;
    Pty_57.add_attribute("ID", "PartyID_t_1332572423"); // 1
    Pty_57_set.insert("PartyID_t_1332572423");
    Pty_57.add_attribute("Src", "H"); // 1
    Pty_57_set.insert("H");
    Pty_57.add_attribute("R", "64"); // 1
    Pty_57_set.insert("64");
    all_values.push_back(Pty_57_set);
    all_compo_names.insert("Pty_57_set");

    {
      xml_element Sub_57{"Sub"};
      multiset<string> Sub_57_set;
      Sub_57.add_attribute("ID", "PartySubID_t_1674326409"); // 2
      Sub_57_set.insert("PartySubID_t_1674326409");
      Sub_57.add_attribute("Typ", "32"); // 2
      Sub_57_set.insert("32");
      all_values.push_back(Sub_57_set);
      all_compo_names.insert("Sub_57_set");

      Pty_57.add_element(Sub_57);
    }
    elt.add_element(Pty_57);
  } // end Pty
  { // CollExc
    xml_element CollExc_0{"CollExc"};
    multiset<string> CollExc_0_set;
    CollExc_0.add_attribute("ExecID", "ExecID_t_2120028631"); // 1
    CollExc_0_set.insert("ExecID_t_2120028631");
    all_values.push_back(CollExc_0_set);
    all_compo_names.insert("CollExc_0_set");

    elt.add_element(CollExc_0);
  } // end CollExc
  { // CollExc
    xml_element CollExc_1{"CollExc"};
    multiset<string> CollExc_1_set;
    CollExc_1.add_attribute("ExecID", "ExecID_t_1512296450"); // 1
    CollExc_1_set.insert("ExecID_t_1512296450");
    all_values.push_back(CollExc_1_set);
    all_compo_names.insert("CollExc_1_set");

    elt.add_element(CollExc_1);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_0{"TrdColl"};
    multiset<string> TrdColl_0_set;
    TrdColl_0.add_attribute("RptID", "TradeReportID_t_1526439132"); // 1
    TrdColl_0_set.insert("TradeReportID_t_1526439132");
    TrdColl_0.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_503947800"); // 1
    TrdColl_0_set.insert("SecondaryTradeReportID_t_503947800");
    all_values.push_back(TrdColl_0_set);
    all_compo_names.insert("TrdColl_0_set");

    elt.add_element(TrdColl_0);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_6{"Instrmt"};
    multiset<string> Instrmt_6_set;
    Instrmt_6.add_attribute("Sym", "Symbol_t_1260090288"); // 1
    Instrmt_6_set.insert("Symbol_t_1260090288");
    Instrmt_6.add_attribute("Sfx", "WI"); // 1
    Instrmt_6_set.insert("WI");
    Instrmt_6.add_attribute("ID", "SecurityID_t_1697819201"); // 1
    Instrmt_6_set.insert("SecurityID_t_1697819201");
    Instrmt_6.add_attribute("Src", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("Prod", "4"); // 1
    Instrmt_6_set.insert("4");
    Instrmt_6.add_attribute("ProdCmplx", "ProductComplex_t_1309788198"); // 1
    Instrmt_6_set.insert("ProductComplex_t_1309788198");
    Instrmt_6.add_attribute("SecGrp", "SecurityGroup_t_1206419795"); // 1
    Instrmt_6_set.insert("SecurityGroup_t_1206419795");
    Instrmt_6.add_attribute("CFI", "CFICode_t_155162179"); // 1
    Instrmt_6_set.insert("CFICode_t_155162179");
    Instrmt_6.add_attribute("SecTyp", "TBOND"); // 1
    Instrmt_6_set.insert("TBOND");
    Instrmt_6.add_attribute("SubTyp", "SecuritySubType_t_105790836"); // 1
    Instrmt_6_set.insert("SecuritySubType_t_105790836");
    Instrmt_6.add_attribute("MMY", "2136116793"); // 1
    Instrmt_6_set.insert("2136116793");
    Instrmt_6.add_attribute("MatDt", "MaturityDate_t_957503067"); // 1
    Instrmt_6_set.insert("MaturityDate_t_957503067");
    Instrmt_6.add_attribute("MatTm", "635537801"); // 1
    Instrmt_6_set.insert("635537801");
    Instrmt_6.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2048632130"); // 1
    Instrmt_6_set.insert("SettleOnOpenFlag_t_2048632130");
    Instrmt_6.add_attribute("AsgnMeth", "45712700"); // 1
    Instrmt_6_set.insert("45712700");
    Instrmt_6.add_attribute("Status", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("CpnPmt", "CouponPaymentDate_t_1579864291"); // 1
    Instrmt_6_set.insert("CouponPaymentDate_t_1579864291");
    Instrmt_6.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_6_set.insert("FR");
    Instrmt_6.add_attribute("Snrty", "SB"); // 1
    Instrmt_6_set.insert("SB");
    Instrmt_6.add_attribute("NotlPctOut", "11802838.180000"); // 1
    Instrmt_6_set.insert("11802838.180000");
    Instrmt_6.add_attribute("OrigNotlPctOut", "9206226.110000"); // 1
    Instrmt_6_set.insert("9206226.110000");
    Instrmt_6.add_attribute("AttchPnt", "17901370.920000"); // 1
    Instrmt_6_set.insert("17901370.920000");
    Instrmt_6.add_attribute("DetchPnt", "13212357.960000"); // 1
    Instrmt_6_set.insert("13212357.960000");
    Instrmt_6.add_attribute("Issued", "IssueDate_t_447465372"); // 1
    Instrmt_6_set.insert("IssueDate_t_447465372");
    Instrmt_6.add_attribute("RepoCollSecTyp", "1872481133"); // 1
    Instrmt_6_set.insert("1872481133");
    Instrmt_6.add_attribute("RepoTrm", "489666161"); // 1
    Instrmt_6_set.insert("489666161");
    Instrmt_6.add_attribute("RepoRt", "4200103.560000"); // 1
    Instrmt_6_set.insert("4200103.560000");
    Instrmt_6.add_attribute("Fctr", "12372939.350000"); // 1
    Instrmt_6_set.insert("12372939.350000");
    Instrmt_6.add_attribute("CrdRtg", "CreditRating_t_1686699600"); // 1
    Instrmt_6_set.insert("CreditRating_t_1686699600");
    Instrmt_6.add_attribute("Rgstry", "InstrRegistry_t_1946449488"); // 1
    Instrmt_6_set.insert("InstrRegistry_t_1946449488");
    Instrmt_6.add_attribute("IssuCtry", "1741241735"); // 1
    Instrmt_6_set.insert("1741241735");
    Instrmt_6.add_attribute("StPrv", "StateOrProvinceOfIssue_t_799306240"); // 1
    Instrmt_6_set.insert("StateOrProvinceOfIssue_t_799306240");
    Instrmt_6.add_attribute("Lcl", "LocaleOfIssue_t_1712618265"); // 1
    Instrmt_6_set.insert("LocaleOfIssue_t_1712618265");
    Instrmt_6.add_attribute("Redeem", "RedemptionDate_t_1291577289"); // 1
    Instrmt_6_set.insert("RedemptionDate_t_1291577289");
    Instrmt_6.add_attribute("StrkPx", "9499676.970000"); // 1
    Instrmt_6_set.insert("9499676.970000");
    Instrmt_6.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_6_set.insert("EUR");
    Instrmt_6.add_attribute("StrkMult", "89038.440000"); // 1
    Instrmt_6_set.insert("89038.440000");
    Instrmt_6.add_attribute("StrkValu", "6832025.260000"); // 1
    Instrmt_6_set.insert("6832025.260000");
    Instrmt_6.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("StrkPxBndryPrcsn", "6718356.710000"); // 1
    Instrmt_6_set.insert("6718356.710000");
    Instrmt_6.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("OptAt", "750232481"); // 1
    Instrmt_6_set.insert("750232481");
    Instrmt_6.add_attribute("Mult", "5729841.540000"); // 1
    Instrmt_6_set.insert("5729841.540000");
    Instrmt_6.add_attribute("MultTyp", "0"); // 1
    Instrmt_6_set.insert("0");
    Instrmt_6.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("MinPxIncr", "53647.970000"); // 1
    Instrmt_6_set.insert("53647.970000");
    Instrmt_6.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_314129025"); // 1
    Instrmt_6_set.insert("MinPriceIncrementAmount_t_314129025");
    Instrmt_6.add_attribute("UOM", "tn"); // 1
    Instrmt_6_set.insert("tn");
    Instrmt_6.add_attribute("UOMQty", "11856486.150000"); // 1
    Instrmt_6_set.insert("11856486.150000");
    Instrmt_6.add_attribute("PxUOM", "MMBtu"); // 1
    Instrmt_6_set.insert("MMBtu");
    Instrmt_6.add_attribute("PxUOMQty", "18552068.820000"); // 1
    Instrmt_6_set.insert("18552068.820000");
    Instrmt_6.add_attribute("SettlMeth", "C"); // 1
    Instrmt_6_set.insert("C");
    Instrmt_6.add_attribute("ExerStyle", "0"); // 1
    Instrmt_6_set.insert("0");
    Instrmt_6.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("OptPayAmt", "OptPayoutAmount_t_849066925"); // 1
    Instrmt_6_set.insert("OptPayoutAmount_t_849066925");
    Instrmt_6.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_6_set.insert("INX");
    Instrmt_6.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_6_set.insert("CDSD");
    Instrmt_6.add_attribute("ListMeth", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("CapPx", "19011932.050000"); // 1
    Instrmt_6_set.insert("19011932.050000");
    Instrmt_6.add_attribute("FlrPx", "2637727.410000"); // 1
    Instrmt_6_set.insert("2637727.410000");
    Instrmt_6.add_attribute("PutCall", "0"); // 1
    Instrmt_6_set.insert("0");
    Instrmt_6.add_attribute("FlexInd", "true"); // 1
    Instrmt_6_set.insert("true");
    Instrmt_6.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_6_set.insert("true");
    Instrmt_6.add_attribute("TmUnit", "H"); // 1
    Instrmt_6_set.insert("H");
    Instrmt_6.add_attribute("CpnRt", "19943681.690000"); // 1
    Instrmt_6_set.insert("19943681.690000");
    Instrmt_6.add_attribute("Exch", "SecurityExchange_t_2009231870"); // 1
    Instrmt_6_set.insert("SecurityExchange_t_2009231870");
    Instrmt_6.add_attribute("PosLmt", "2146460659"); // 1
    Instrmt_6_set.insert("2146460659");
    Instrmt_6.add_attribute("NTPosLmt", "530087047"); // 1
    Instrmt_6_set.insert("530087047");
    Instrmt_6.add_attribute("Issr", "Issuer_t_1732094939"); // 1
    Instrmt_6_set.insert("Issuer_t_1732094939");
    Instrmt_6.add_attribute("EncIssrLen", "113671691"); // 1
    Instrmt_6_set.insert("113671691");
    Instrmt_6.add_attribute("EncIssr", "EncodedIssuer_t_1201922718"); // 1
    Instrmt_6_set.insert("EncodedIssuer_t_1201922718");
    Instrmt_6.add_attribute("Desc", "SecurityDesc_t_264977428"); // 1
    Instrmt_6_set.insert("SecurityDesc_t_264977428");
    Instrmt_6.add_attribute("EncSecDescLen", "863904172"); // 1
    Instrmt_6_set.insert("863904172");
    Instrmt_6.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1774906872"); // 1
    Instrmt_6_set.insert("EncodedSecurityDesc_t_1774906872");
    Instrmt_6.add_attribute("Pool", "Pool_t_991056266"); // 1
    Instrmt_6_set.insert("Pool_t_991056266");
    Instrmt_6.add_attribute("CSetMo", "384936025"); // 1
    Instrmt_6_set.insert("384936025");
    Instrmt_6.add_attribute("CPPgm", "99"); // 1
    Instrmt_6_set.insert("99");
    Instrmt_6.add_attribute("CPRegT", "CPRegType_t_1305185291"); // 1
    Instrmt_6_set.insert("CPRegType_t_1305185291");
    Instrmt_6.add_attribute("Dated", "DatedDate_t_450005815"); // 1
    Instrmt_6_set.insert("DatedDate_t_450005815");
    Instrmt_6.add_attribute("IntAcrl", "InterestAccrualDate_t_818436637"); // 1
    Instrmt_6_set.insert("InterestAccrualDate_t_818436637");
    all_values.push_back(Instrmt_6_set);
    all_compo_names.insert("Instrmt_6_set");

    {
      xml_element AID_6{"AID"};
      multiset<string> AID_6_set;
      AID_6.add_attribute("AltID", "SecurityAltID_t_392453280"); // 2
      AID_6_set.insert("SecurityAltID_t_392453280");
      AID_6.add_attribute("AltIDSrc", "6"); // 2
      AID_6_set.insert("6");
      all_values.push_back(AID_6_set);
      all_compo_names.insert("AID_6_set");

      Instrmt_6.add_element(AID_6);
    }
    {
      xml_element SecXML_6{"SecXML"};
      multiset<string> SecXML_6_set;
      SecXML_6.add_attribute("Schema", "SecurityXMLSchema_t_1177837401"); // 2
      SecXML_6_set.insert("SecurityXMLSchema_t_1177837401");
      all_values.push_back(SecXML_6_set);
      all_compo_names.insert("SecXML_6_set");

      Instrmt_6.add_element(SecXML_6);
    }
    {
      xml_element Evnt_6{"Evnt"};
      multiset<string> Evnt_6_set;
      Evnt_6.add_attribute("EventTyp", "9"); // 2
      Evnt_6_set.insert("9");
      Evnt_6.add_attribute("Dt", "EventDate_t_1737933416"); // 2
      Evnt_6_set.insert("EventDate_t_1737933416");
      Evnt_6.add_attribute("Tm", "EventTime_t_2026904326"); // 2
      Evnt_6_set.insert("EventTime_t_2026904326");
      Evnt_6.add_attribute("Px", "20294140.060000"); // 2
      Evnt_6_set.insert("20294140.060000");
      Evnt_6.add_attribute("Txt", "EventText_t_260464422"); // 2
      Evnt_6_set.insert("EventText_t_260464422");
      all_values.push_back(Evnt_6_set);
      all_compo_names.insert("Evnt_6_set");

      Instrmt_6.add_element(Evnt_6);
    }
    {
      xml_element Pty_58{"Pty"};
      multiset<string> Pty_58_set;
      Pty_58.add_attribute("ID", "InstrumentPartyID_t_267703556"); // 2
      Pty_58_set.insert("InstrumentPartyID_t_267703556");
      Pty_58.add_attribute("Src", "4"); // 2
      Pty_58_set.insert("4");
      Pty_58.add_attribute("R", "54"); // 2
      Pty_58_set.insert("54");
      all_values.push_back(Pty_58_set);
      all_compo_names.insert("Pty_58_set");

      {
        xml_element Sub_58{"Sub"};
        multiset<string> Sub_58_set;
        Sub_58.add_attribute("ID", "InstrumentPartySubID_t_1455292674"); // 3
        Sub_58_set.insert("InstrumentPartySubID_t_1455292674");
        Sub_58.add_attribute("Typ", "8"); // 3
        Sub_58_set.insert("8");
        all_values.push_back(Sub_58_set);
        all_compo_names.insert("Sub_58_set");

        Pty_58.add_element(Sub_58);
      }
      Instrmt_6.add_element(Pty_58);
    }
    {
      xml_element CmplxEvnt_6{"CmplxEvnt"};
      multiset<string> CmplxEvnt_6_set;
      CmplxEvnt_6.add_attribute("Typ", "8"); // 2
      CmplxEvnt_6_set.insert("8");
      CmplxEvnt_6.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1445365841"); // 2
      CmplxEvnt_6_set.insert("ComplexOptPayoutAmount_t_1445365841");
      CmplxEvnt_6.add_attribute("Px", "9488522.580000"); // 2
      CmplxEvnt_6_set.insert("9488522.580000");
      CmplxEvnt_6.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_6_set.insert("2");
      CmplxEvnt_6.add_attribute("PxBndryPrcsn", "14443428.520000"); // 2
      CmplxEvnt_6_set.insert("14443428.520000");
      CmplxEvnt_6.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_6_set.insert("2");
      CmplxEvnt_6.add_attribute("Cond", "2"); // 2
      CmplxEvnt_6_set.insert("2");
      all_values.push_back(CmplxEvnt_6_set);
      all_compo_names.insert("CmplxEvnt_6_set");

      {
        xml_element EvntDts_6{"EvntDts"};
        multiset<string> EvntDts_6_set;
        EvntDts_6.add_attribute("StartDt", "ComplexEventStartDate_t_1558014543"); // 3
        EvntDts_6_set.insert("ComplexEventStartDate_t_1558014543");
        EvntDts_6.add_attribute("EndDt", "ComplexEventEndDate_t_533378375"); // 3
        EvntDts_6_set.insert("ComplexEventEndDate_t_533378375");
        all_values.push_back(EvntDts_6_set);
        all_compo_names.insert("EvntDts_6_set");

        {
          xml_element EvntTms_6{"EvntTms"};
          multiset<string> EvntTms_6_set;
          EvntTms_6.add_attribute("StartTm", "1790924136"); // 4
          EvntTms_6_set.insert("1790924136");
          EvntTms_6.add_attribute("EndTm", "274435067"); // 4
          EvntTms_6_set.insert("274435067");
          all_values.push_back(EvntTms_6_set);
          all_compo_names.insert("EvntTms_6_set");

          EvntDts_6.add_element(EvntTms_6);
        }
        CmplxEvnt_6.add_element(EvntDts_6);
      }
      Instrmt_6.add_element(CmplxEvnt_6);
    }
    elt.add_element(Instrmt_6);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_3{"FinDetls"};
    multiset<string> FinDetls_3_set;
    FinDetls_3.add_attribute("AgmtDesc", "AgreementDesc_t_160801600"); // 1
    FinDetls_3_set.insert("AgreementDesc_t_160801600");
    FinDetls_3.add_attribute("AgmtID", "AgreementID_t_634496754"); // 1
    FinDetls_3_set.insert("AgreementID_t_634496754");
    FinDetls_3.add_attribute("AgmtDt", "AgreementDate_t_659371093"); // 1
    FinDetls_3_set.insert("AgreementDate_t_659371093");
    FinDetls_3.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_3_set.insert("CAN");
    FinDetls_3.add_attribute("TrmTyp", "1"); // 1
    FinDetls_3_set.insert("1");
    FinDetls_3.add_attribute("StartDt", "StartDate_t_612026258"); // 1
    FinDetls_3_set.insert("StartDate_t_612026258");
    FinDetls_3.add_attribute("EndDt", "EndDate_t_184651677"); // 1
    FinDetls_3_set.insert("EndDate_t_184651677");
    FinDetls_3.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_3_set.insert("1");
    FinDetls_3.add_attribute("MgnRatio", "17898636.590000"); // 1
    FinDetls_3_set.insert("17898636.590000");
    all_values.push_back(FinDetls_3_set);
    all_compo_names.insert("FinDetls_3_set");

    elt.add_element(FinDetls_3);
  } // end FinDetls
  { // Leg
    xml_element Leg_11{"Leg"};
    multiset<string> Leg_11_set;
    Leg_11.add_attribute("Sym", "LegSymbol_t_857555725"); // 1
    Leg_11_set.insert("LegSymbol_t_857555725");
    Leg_11.add_attribute("Sfx", "CD"); // 1
    Leg_11_set.insert("CD");
    Leg_11.add_attribute("ID", "LegSecurityID_t_2141252324"); // 1
    Leg_11_set.insert("LegSecurityID_t_2141252324");
    Leg_11.add_attribute("Src", "E"); // 1
    Leg_11_set.insert("E");
    Leg_11.add_attribute("Prod", "7"); // 1
    Leg_11_set.insert("7");
    Leg_11.add_attribute("CFI", "LegCFICode_t_1776892239"); // 1
    Leg_11_set.insert("LegCFICode_t_1776892239");
    Leg_11.add_attribute("SecTyp", "CASH"); // 1
    Leg_11_set.insert("CASH");
    Leg_11.add_attribute("SecSubTyp", "LegSecuritySubType_t_1244796920"); // 1
    Leg_11_set.insert("LegSecuritySubType_t_1244796920");
    Leg_11.add_attribute("MMY", "731376328"); // 1
    Leg_11_set.insert("731376328");
    Leg_11.add_attribute("Mat", "LegMaturityDate_t_1574360856"); // 1
    Leg_11_set.insert("LegMaturityDate_t_1574360856");
    Leg_11.add_attribute("MatTm", "542679113"); // 1
    Leg_11_set.insert("542679113");
    Leg_11.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1680228586"); // 1
    Leg_11_set.insert("LegCouponPaymentDate_t_1680228586");
    Leg_11.add_attribute("Issued", "LegIssueDate_t_1368212624"); // 1
    Leg_11_set.insert("LegIssueDate_t_1368212624");
    Leg_11.add_attribute("RepoCollSecTyp", "1987021965"); // 1
    Leg_11_set.insert("1987021965");
    Leg_11.add_attribute("RepoTrm", "1011684243"); // 1
    Leg_11_set.insert("1011684243");
    Leg_11.add_attribute("RepoRt", "7466756.840000"); // 1
    Leg_11_set.insert("7466756.840000");
    Leg_11.add_attribute("Fctr", "13975528.600000"); // 1
    Leg_11_set.insert("13975528.600000");
    Leg_11.add_attribute("CrdRtg", "LegCreditRating_t_1545062619"); // 1
    Leg_11_set.insert("LegCreditRating_t_1545062619");
    Leg_11.add_attribute("Rgstry", "LegInstrRegistry_t_390116172"); // 1
    Leg_11_set.insert("LegInstrRegistry_t_390116172");
    Leg_11.add_attribute("Ctry", "1671987927"); // 1
    Leg_11_set.insert("1671987927");
    Leg_11.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1705864219"); // 1
    Leg_11_set.insert("LegStateOrProvinceOfIssue_t_1705864219");
    Leg_11.add_attribute("Lcl", "LegLocaleOfIssue_t_1024612926"); // 1
    Leg_11_set.insert("LegLocaleOfIssue_t_1024612926");
    Leg_11.add_attribute("Redeem", "LegRedemptionDate_t_183875372"); // 1
    Leg_11_set.insert("LegRedemptionDate_t_183875372");
    Leg_11.add_attribute("Strk", "14994538.400000"); // 1
    Leg_11_set.insert("14994538.400000");
    Leg_11.add_attribute("StrkCcy", "JPY"); // 1
    Leg_11_set.insert("JPY");
    Leg_11.add_attribute("OptA", "2111480099"); // 1
    Leg_11_set.insert("2111480099");
    Leg_11.add_attribute("Cmult", "10014630.010000"); // 1
    Leg_11_set.insert("10014630.010000");
    Leg_11.add_attribute("MultTyp", "0"); // 1
    Leg_11_set.insert("0");
    Leg_11.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_11_set.insert("0");
    Leg_11.add_attribute("UOM", "MWh"); // 1
    Leg_11_set.insert("MWh");
    Leg_11.add_attribute("UOMQty", "12704303.140000"); // 1
    Leg_11_set.insert("12704303.140000");
    Leg_11.add_attribute("PxUOM", "Bu"); // 1
    Leg_11_set.insert("Bu");
    Leg_11.add_attribute("PxUOMQty", "11070699.960000"); // 1
    Leg_11_set.insert("11070699.960000");
    Leg_11.add_attribute("TmUnit", "D"); // 1
    Leg_11_set.insert("D");
    Leg_11.add_attribute("ExerStyle", "1"); // 1
    Leg_11_set.insert("1");
    Leg_11.add_attribute("CpnRt", "7364785.870000"); // 1
    Leg_11_set.insert("7364785.870000");
    Leg_11.add_attribute("Exch", "LegSecurityExchange_t_1883224124"); // 1
    Leg_11_set.insert("LegSecurityExchange_t_1883224124");
    Leg_11.add_attribute("Issr", "LegIssuer_t_162478318"); // 1
    Leg_11_set.insert("LegIssuer_t_162478318");
    Leg_11.add_attribute("EncLegIssrLen", "1467854916"); // 1
    Leg_11_set.insert("1467854916");
    Leg_11.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1310101332"); // 1
    Leg_11_set.insert("EncodedLegIssuer_t_1310101332");
    Leg_11.add_attribute("Desc", "LegSecurityDesc_t_705157431"); // 1
    Leg_11_set.insert("LegSecurityDesc_t_705157431");
    Leg_11.add_attribute("EncLegSecDescLen", "1000599854"); // 1
    Leg_11_set.insert("1000599854");
    Leg_11.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_530830309"); // 1
    Leg_11_set.insert("EncodedLegSecurityDesc_t_530830309");
    Leg_11.add_attribute("RatioQty", "5446957.480000"); // 1
    Leg_11_set.insert("5446957.480000");
    Leg_11.add_attribute("Side", "3"); // 1
    Leg_11_set.insert("3");
    Leg_11.add_attribute("Ccy", "GBP"); // 1
    Leg_11_set.insert("GBP");
    Leg_11.add_attribute("Pool", "LegPool_t_1409863069"); // 1
    Leg_11_set.insert("LegPool_t_1409863069");
    Leg_11.add_attribute("Dated", "LegDatedDate_t_1667622165"); // 1
    Leg_11_set.insert("LegDatedDate_t_1667622165");
    Leg_11.add_attribute("CSetMo", "1466752888"); // 1
    Leg_11_set.insert("1466752888");
    Leg_11.add_attribute("IntAcrl", "LegInterestAccrualDate_t_968243640"); // 1
    Leg_11_set.insert("LegInterestAccrualDate_t_968243640");
    Leg_11.add_attribute("PutCall", "544751443"); // 1
    Leg_11_set.insert("544751443");
    Leg_11.add_attribute("LegOptionRatio", "16506282.600000"); // 1
    Leg_11_set.insert("16506282.600000");
    Leg_11.add_attribute("Px", "3202138.320000"); // 1
    Leg_11_set.insert("3202138.320000");
    all_values.push_back(Leg_11_set);
    all_compo_names.insert("Leg_11_set");

    {
      xml_element LegAID_11{"LegAID"};
      multiset<string> LegAID_11_set;
      LegAID_11.add_attribute("SecAltID", "LegSecurityAltID_t_1361562766"); // 2
      LegAID_11_set.insert("LegSecurityAltID_t_1361562766");
      LegAID_11.add_attribute("SecAltIDSrc", "I"); // 2
      LegAID_11_set.insert("I");
      all_values.push_back(LegAID_11_set);
      all_compo_names.insert("LegAID_11_set");

      Leg_11.add_element(LegAID_11);
    }
    elt.add_element(Leg_11);
  } // end Leg
  { // Leg
    xml_element Leg_12{"Leg"};
    multiset<string> Leg_12_set;
    Leg_12.add_attribute("Sym", "LegSymbol_t_284210283"); // 1
    Leg_12_set.insert("LegSymbol_t_284210283");
    Leg_12.add_attribute("Sfx", "WI"); // 1
    Leg_12_set.insert("WI");
    Leg_12.add_attribute("ID", "LegSecurityID_t_1209271482"); // 1
    Leg_12_set.insert("LegSecurityID_t_1209271482");
    Leg_12.add_attribute("Src", "9"); // 1
    Leg_12_set.insert("9");
    Leg_12.add_attribute("Prod", "10"); // 1
    Leg_12_set.insert("10");
    Leg_12.add_attribute("CFI", "LegCFICode_t_332218149"); // 1
    Leg_12_set.insert("LegCFICode_t_332218149");
    Leg_12.add_attribute("SecTyp", "XCN"); // 1
    Leg_12_set.insert("XCN");
    Leg_12.add_attribute("SecSubTyp", "LegSecuritySubType_t_288429787"); // 1
    Leg_12_set.insert("LegSecuritySubType_t_288429787");
    Leg_12.add_attribute("MMY", "573184962"); // 1
    Leg_12_set.insert("573184962");
    Leg_12.add_attribute("Mat", "LegMaturityDate_t_83928945"); // 1
    Leg_12_set.insert("LegMaturityDate_t_83928945");
    Leg_12.add_attribute("MatTm", "1024908374"); // 1
    Leg_12_set.insert("1024908374");
    Leg_12.add_attribute("CpnPmt", "LegCouponPaymentDate_t_308925438"); // 1
    Leg_12_set.insert("LegCouponPaymentDate_t_308925438");
    Leg_12.add_attribute("Issued", "LegIssueDate_t_246407263"); // 1
    Leg_12_set.insert("LegIssueDate_t_246407263");
    Leg_12.add_attribute("RepoCollSecTyp", "345279642"); // 1
    Leg_12_set.insert("345279642");
    Leg_12.add_attribute("RepoTrm", "1619026771"); // 1
    Leg_12_set.insert("1619026771");
    Leg_12.add_attribute("RepoRt", "9515646.950000"); // 1
    Leg_12_set.insert("9515646.950000");
    Leg_12.add_attribute("Fctr", "13458794.970000"); // 1
    Leg_12_set.insert("13458794.970000");
    Leg_12.add_attribute("CrdRtg", "LegCreditRating_t_2373432"); // 1
    Leg_12_set.insert("LegCreditRating_t_2373432");
    Leg_12.add_attribute("Rgstry", "LegInstrRegistry_t_1496260443"); // 1
    Leg_12_set.insert("LegInstrRegistry_t_1496260443");
    Leg_12.add_attribute("Ctry", "1210679947"); // 1
    Leg_12_set.insert("1210679947");
    Leg_12.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1279879425"); // 1
    Leg_12_set.insert("LegStateOrProvinceOfIssue_t_1279879425");
    Leg_12.add_attribute("Lcl", "LegLocaleOfIssue_t_1291025404"); // 1
    Leg_12_set.insert("LegLocaleOfIssue_t_1291025404");
    Leg_12.add_attribute("Redeem", "LegRedemptionDate_t_473059368"); // 1
    Leg_12_set.insert("LegRedemptionDate_t_473059368");
    Leg_12.add_attribute("Strk", "8000179.420000"); // 1
    Leg_12_set.insert("8000179.420000");
    Leg_12.add_attribute("StrkCcy", "USD"); // 1
    Leg_12_set.insert("USD");
    Leg_12.add_attribute("OptA", "1344769385"); // 1
    Leg_12_set.insert("1344769385");
    Leg_12.add_attribute("Cmult", "1134392.560000"); // 1
    Leg_12_set.insert("1134392.560000");
    Leg_12.add_attribute("MultTyp", "0"); // 1
    Leg_12_set.insert("0");
    Leg_12.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_12_set.insert("3");
    Leg_12.add_attribute("UOM", "MMBtu"); // 1
    Leg_12_set.insert("MMBtu");
    Leg_12.add_attribute("UOMQty", "20457271.240000"); // 1
    Leg_12_set.insert("20457271.240000");
    Leg_12.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_12_set.insert("MMbbl");
    Leg_12.add_attribute("PxUOMQty", "21191076.320000"); // 1
    Leg_12_set.insert("21191076.320000");
    Leg_12.add_attribute("TmUnit", "Min"); // 1
    Leg_12_set.insert("Min");
    Leg_12.add_attribute("ExerStyle", "2"); // 1
    Leg_12_set.insert("2");
    Leg_12.add_attribute("CpnRt", "3038421.330000"); // 1
    Leg_12_set.insert("3038421.330000");
    Leg_12.add_attribute("Exch", "LegSecurityExchange_t_955077768"); // 1
    Leg_12_set.insert("LegSecurityExchange_t_955077768");
    Leg_12.add_attribute("Issr", "LegIssuer_t_244180201"); // 1
    Leg_12_set.insert("LegIssuer_t_244180201");
    Leg_12.add_attribute("EncLegIssrLen", "877027095"); // 1
    Leg_12_set.insert("877027095");
    Leg_12.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1039006713"); // 1
    Leg_12_set.insert("EncodedLegIssuer_t_1039006713");
    Leg_12.add_attribute("Desc", "LegSecurityDesc_t_1269088575"); // 1
    Leg_12_set.insert("LegSecurityDesc_t_1269088575");
    Leg_12.add_attribute("EncLegSecDescLen", "1185952534"); // 1
    Leg_12_set.insert("1185952534");
    Leg_12.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1285413977"); // 1
    Leg_12_set.insert("EncodedLegSecurityDesc_t_1285413977");
    Leg_12.add_attribute("RatioQty", "16143682.180000"); // 1
    Leg_12_set.insert("16143682.180000");
    Leg_12.add_attribute("Side", "A"); // 1
    Leg_12_set.insert("A");
    Leg_12.add_attribute("Ccy", "CAN"); // 1
    Leg_12_set.insert("CAN");
    Leg_12.add_attribute("Pool", "LegPool_t_659869089"); // 1
    Leg_12_set.insert("LegPool_t_659869089");
    Leg_12.add_attribute("Dated", "LegDatedDate_t_1585755467"); // 1
    Leg_12_set.insert("LegDatedDate_t_1585755467");
    Leg_12.add_attribute("CSetMo", "2023444014"); // 1
    Leg_12_set.insert("2023444014");
    Leg_12.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1939748514"); // 1
    Leg_12_set.insert("LegInterestAccrualDate_t_1939748514");
    Leg_12.add_attribute("PutCall", "729297223"); // 1
    Leg_12_set.insert("729297223");
    Leg_12.add_attribute("LegOptionRatio", "3490197.340000"); // 1
    Leg_12_set.insert("3490197.340000");
    Leg_12.add_attribute("Px", "5922828.080000"); // 1
    Leg_12_set.insert("5922828.080000");
    all_values.push_back(Leg_12_set);
    all_compo_names.insert("Leg_12_set");

    {
      xml_element LegAID_12{"LegAID"};
      multiset<string> LegAID_12_set;
      LegAID_12.add_attribute("SecAltID", "LegSecurityAltID_t_1339591867"); // 2
      LegAID_12_set.insert("LegSecurityAltID_t_1339591867");
      LegAID_12.add_attribute("SecAltIDSrc", "B"); // 2
      LegAID_12_set.insert("B");
      all_values.push_back(LegAID_12_set);
      all_compo_names.insert("LegAID_12_set");

      Leg_12.add_element(LegAID_12);
    }
    elt.add_element(Leg_12);
  } // end Leg
  { // UndColl
    xml_element UndColl_0{"UndColl"};
    multiset<string> UndColl_0_set;
    UndColl_0.add_attribute("Actn", "0"); // 1
    UndColl_0_set.insert("0");
    all_values.push_back(UndColl_0_set);
    all_compo_names.insert("UndColl_0_set");

    {
      xml_element Undly_7{"Undly"};
      multiset<string> Undly_7_set;
      Undly_7.add_attribute("Sym", "UnderlyingSymbol_t_1404355934"); // 2
      Undly_7_set.insert("UnderlyingSymbol_t_1404355934");
      Undly_7.add_attribute("Sfx", "CD"); // 2
      Undly_7_set.insert("CD");
      Undly_7.add_attribute("ID", "UnderlyingSecurityID_t_215383625"); // 2
      Undly_7_set.insert("UnderlyingSecurityID_t_215383625");
      Undly_7.add_attribute("Src", "3"); // 2
      Undly_7_set.insert("3");
      Undly_7.add_attribute("Prod", "8"); // 2
      Undly_7_set.insert("8");
      Undly_7.add_attribute("CFI", "UnderlyingCFICode_t_187007609"); // 2
      Undly_7_set.insert("UnderlyingCFICode_t_187007609");
      Undly_7.add_attribute("SecTyp", "TD"); // 2
      Undly_7_set.insert("TD");
      Undly_7.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1078558085"); // 2
      Undly_7_set.insert("UnderlyingSecuritySubType_t_1078558085");
      Undly_7.add_attribute("MMY", "490849742"); // 2
      Undly_7_set.insert("490849742");
      Undly_7.add_attribute("Mat", "UnderlyingMaturityDate_t_2046507401"); // 2
      Undly_7_set.insert("UnderlyingMaturityDate_t_2046507401");
      Undly_7.add_attribute("MatTm", "1322738286"); // 2
      Undly_7_set.insert("1322738286");
      Undly_7.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1367876838"); // 2
      Undly_7_set.insert("UnderlyingCouponPaymentDate_t_1367876838");
      Undly_7.add_attribute("RestrctTyp", "MM"); // 2
      Undly_7_set.insert("MM");
      Undly_7.add_attribute("Snrty", "SB"); // 2
      Undly_7_set.insert("SB");
      Undly_7.add_attribute("NotlPctOut", "4063457.240000"); // 2
      Undly_7_set.insert("4063457.240000");
      Undly_7.add_attribute("OrigNotlPctOut", "759607.950000"); // 2
      Undly_7_set.insert("759607.950000");
      Undly_7.add_attribute("AttchPnt", "20587114.320000"); // 2
      Undly_7_set.insert("20587114.320000");
      Undly_7.add_attribute("DetchPnt", "10638413.810000"); // 2
      Undly_7_set.insert("10638413.810000");
      Undly_7.add_attribute("Issued", "UnderlyingIssueDate_t_165455819"); // 2
      Undly_7_set.insert("UnderlyingIssueDate_t_165455819");
      Undly_7.add_attribute("RepoCollSecTyp", "723991851"); // 2
      Undly_7_set.insert("723991851");
      Undly_7.add_attribute("RepoTrm", "1723710470"); // 2
      Undly_7_set.insert("1723710470");
      Undly_7.add_attribute("RepoRt", "17512112.870000"); // 2
      Undly_7_set.insert("17512112.870000");
      Undly_7.add_attribute("Fctr", "5999522.170000"); // 2
      Undly_7_set.insert("5999522.170000");
      Undly_7.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1515975336"); // 2
      Undly_7_set.insert("UnderlyingCreditRating_t_1515975336");
      Undly_7.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_333024862"); // 2
      Undly_7_set.insert("UnderlyingInstrRegistry_t_333024862");
      Undly_7.add_attribute("Ctry", "948971951"); // 2
      Undly_7_set.insert("948971951");
      Undly_7.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2108258144"); // 2
      Undly_7_set.insert("UnderlyingStateOrProvinceOfIssue_t_2108258144");
      Undly_7.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1672616730"); // 2
      Undly_7_set.insert("UnderlyingLocaleOfIssue_t_1672616730");
      Undly_7.add_attribute("Redeem", "UnderlyingRedemptionDate_t_591811045"); // 2
      Undly_7_set.insert("UnderlyingRedemptionDate_t_591811045");
      Undly_7.add_attribute("StrkPx", "18978266.890000"); // 2
      Undly_7_set.insert("18978266.890000");
      Undly_7.add_attribute("StrkCcy", "CHF"); // 2
      Undly_7_set.insert("CHF");
      Undly_7.add_attribute("OptA", "98760089"); // 2
      Undly_7_set.insert("98760089");
      Undly_7.add_attribute("Mult", "11935478.310000"); // 2
      Undly_7_set.insert("11935478.310000");
      Undly_7.add_attribute("MultTyp", "0"); // 2
      Undly_7_set.insert("0");
      Undly_7.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_7_set.insert("1");
      Undly_7.add_attribute("UOM", "tn"); // 2
      Undly_7_set.insert("tn");
      Undly_7.add_attribute("UOMQty", "952287.260000"); // 2
      Undly_7_set.insert("952287.260000");
      Undly_7.add_attribute("PxUOM", "lbs"); // 2
      Undly_7_set.insert("lbs");
      Undly_7.add_attribute("PxUOMQty", "18714051.830000"); // 2
      Undly_7_set.insert("18714051.830000");
      Undly_7.add_attribute("TmUnit", "Yr"); // 2
      Undly_7_set.insert("Yr");
      Undly_7.add_attribute("ExerStyle", "0"); // 2
      Undly_7_set.insert("0");
      Undly_7.add_attribute("CpnRt", "10917983.730000"); // 2
      Undly_7_set.insert("10917983.730000");
      Undly_7.add_attribute("Exch", "UnderlyingSecurityExchange_t_932282946"); // 2
      Undly_7_set.insert("UnderlyingSecurityExchange_t_932282946");
      Undly_7.add_attribute("Issr", "UnderlyingIssuer_t_1919723699"); // 2
      Undly_7_set.insert("UnderlyingIssuer_t_1919723699");
      Undly_7.add_attribute("EncUndIssrLen", "1498144097"); // 2
      Undly_7_set.insert("1498144097");
      Undly_7.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1008243741"); // 2
      Undly_7_set.insert("EncodedUnderlyingIssuer_t_1008243741");
      Undly_7.add_attribute("Desc", "UnderlyingSecurityDesc_t_1830951483"); // 2
      Undly_7_set.insert("UnderlyingSecurityDesc_t_1830951483");
      Undly_7.add_attribute("EncUndSecDescLen", "414501830"); // 2
      Undly_7_set.insert("414501830");
      Undly_7.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1173699561"); // 2
      Undly_7_set.insert("EncodedUnderlyingSecurityDesc_t_1173699561");
      Undly_7.add_attribute("CPPgm", "UnderlyingCPProgram_t_407459686"); // 2
      Undly_7_set.insert("UnderlyingCPProgram_t_407459686");
      Undly_7.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2138212300"); // 2
      Undly_7_set.insert("UnderlyingCPRegType_t_2138212300");
      Undly_7.add_attribute("AllocPct", "7774272.000000"); // 2
      Undly_7_set.insert("7774272.000000");
      Undly_7.add_attribute("Ccy", "GBP"); // 2
      Undly_7_set.insert("GBP");
      Undly_7.add_attribute("Qty", "11104520.620000"); // 2
      Undly_7_set.insert("11104520.620000");
      Undly_7.add_attribute("SettlTyp", "4"); // 2
      Undly_7_set.insert("4");
      Undly_7.add_attribute("CashAmt", "UnderlyingCashAmount_t_1467478484"); // 2
      Undly_7_set.insert("UnderlyingCashAmount_t_1467478484");
      Undly_7.add_attribute("CashTyp", "FIXED"); // 2
      Undly_7_set.insert("FIXED");
      Undly_7.add_attribute("Px", "4007112.510000"); // 2
      Undly_7_set.insert("4007112.510000");
      Undly_7.add_attribute("DirtPx", "12178215.250000"); // 2
      Undly_7_set.insert("12178215.250000");
      Undly_7.add_attribute("EndPx", "16137493.500000"); // 2
      Undly_7_set.insert("16137493.500000");
      Undly_7.add_attribute("StartVal", "UnderlyingStartValue_t_249394582"); // 2
      Undly_7_set.insert("UnderlyingStartValue_t_249394582");
      Undly_7.add_attribute("CurVal", "UnderlyingCurrentValue_t_1316581615"); // 2
      Undly_7_set.insert("UnderlyingCurrentValue_t_1316581615");
      Undly_7.add_attribute("EndVal", "UnderlyingEndValue_t_659813534"); // 2
      Undly_7_set.insert("UnderlyingEndValue_t_659813534");
      Undly_7.add_attribute("AdjQty", "14006773.240000"); // 2
      Undly_7_set.insert("14006773.240000");
      Undly_7.add_attribute("FxRate", "3906657.280000"); // 2
      Undly_7_set.insert("3906657.280000");
      Undly_7.add_attribute("FxRateCalc", "D"); // 2
      Undly_7_set.insert("D");
      Undly_7.add_attribute("CapValu", "UnderlyingCapValue_t_1495906051"); // 2
      Undly_7_set.insert("UnderlyingCapValue_t_1495906051");
      Undly_7.add_attribute("SetMeth", "UnderlyingSettlMethod_t_543307926"); // 2
      Undly_7_set.insert("UnderlyingSettlMethod_t_543307926");
      Undly_7.add_attribute("PutCall", "1764290510"); // 2
      Undly_7_set.insert("1764290510");
      all_values.push_back(Undly_7_set);
      all_compo_names.insert("Undly_7_set");

      {
        xml_element UndAID_7{"UndAID"};
        multiset<string> UndAID_7_set;
        UndAID_7.add_attribute("AltID", "UnderlyingSecurityAltID_t_1490158530"); // 3
        UndAID_7_set.insert("UnderlyingSecurityAltID_t_1490158530");
        UndAID_7.add_attribute("AltIDSrc", "4"); // 3
        UndAID_7_set.insert("4");
        all_values.push_back(UndAID_7_set);
        all_compo_names.insert("UndAID_7_set");

        Undly_7.add_element(UndAID_7);
      }
      {
        xml_element Stip_15{"Stip"};
        multiset<string> Stip_15_set;
        Stip_15.add_attribute("Typ", "PRICE"); // 3
        Stip_15_set.insert("PRICE");
        Stip_15.add_attribute("Val", "UnderlyingStipValue_t_274957828"); // 3
        Stip_15_set.insert("UnderlyingStipValue_t_274957828");
        all_values.push_back(Stip_15_set);
        all_compo_names.insert("Stip_15_set");

        Undly_7.add_element(Stip_15);
      }
      {
        xml_element Pty_59{"Pty"};
        multiset<string> Pty_59_set;
        Pty_59.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1790928462"); // 3
        Pty_59_set.insert("UnderlyingInstrumentPartyID_t_1790928462");
        Pty_59.add_attribute("Src", "2"); // 3
        Pty_59_set.insert("2");
        Pty_59.add_attribute("R", "22"); // 3
        Pty_59_set.insert("22");
        all_values.push_back(Pty_59_set);
        all_compo_names.insert("Pty_59_set");

        {
          xml_element Sub_59{"Sub"};
          multiset<string> Sub_59_set;
          Sub_59.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1474396297"); // 4
          Sub_59_set.insert("UnderlyingInstrumentPartySubID_t_1474396297");
          Sub_59.add_attribute("Typ", "21"); // 4
          Sub_59_set.insert("21");
          all_values.push_back(Sub_59_set);
          all_compo_names.insert("Sub_59_set");

          Pty_59.add_element(Sub_59);
        }
        Undly_7.add_element(Pty_59);
      }
      UndColl_0.add_element(Undly_7);
    }
    elt.add_element(UndColl_0);
  } // end UndColl
  { // UndColl
    xml_element UndColl_1{"UndColl"};
    multiset<string> UndColl_1_set;
    UndColl_1.add_attribute("Actn", "0"); // 1
    UndColl_1_set.insert("0");
    all_values.push_back(UndColl_1_set);
    all_compo_names.insert("UndColl_1_set");

    {
      xml_element Undly_8{"Undly"};
      multiset<string> Undly_8_set;
      Undly_8.add_attribute("Sym", "UnderlyingSymbol_t_1881855983"); // 2
      Undly_8_set.insert("UnderlyingSymbol_t_1881855983");
      Undly_8.add_attribute("Sfx", "CD"); // 2
      Undly_8_set.insert("CD");
      Undly_8.add_attribute("ID", "UnderlyingSecurityID_t_1086844683"); // 2
      Undly_8_set.insert("UnderlyingSecurityID_t_1086844683");
      Undly_8.add_attribute("Src", "9"); // 2
      Undly_8_set.insert("9");
      Undly_8.add_attribute("Prod", "13"); // 2
      Undly_8_set.insert("13");
      Undly_8.add_attribute("CFI", "UnderlyingCFICode_t_49813097"); // 2
      Undly_8_set.insert("UnderlyingCFICode_t_49813097");
      Undly_8.add_attribute("SecTyp", "MATURED"); // 2
      Undly_8_set.insert("MATURED");
      Undly_8.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1291194993"); // 2
      Undly_8_set.insert("UnderlyingSecuritySubType_t_1291194993");
      Undly_8.add_attribute("MMY", "685398242"); // 2
      Undly_8_set.insert("685398242");
      Undly_8.add_attribute("Mat", "UnderlyingMaturityDate_t_951395695"); // 2
      Undly_8_set.insert("UnderlyingMaturityDate_t_951395695");
      Undly_8.add_attribute("MatTm", "361532871"); // 2
      Undly_8_set.insert("361532871");
      Undly_8.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_151663944"); // 2
      Undly_8_set.insert("UnderlyingCouponPaymentDate_t_151663944");
      Undly_8.add_attribute("RestrctTyp", "MM"); // 2
      Undly_8_set.insert("MM");
      Undly_8.add_attribute("Snrty", "SR"); // 2
      Undly_8_set.insert("SR");
      Undly_8.add_attribute("NotlPctOut", "8114774.780000"); // 2
      Undly_8_set.insert("8114774.780000");
      Undly_8.add_attribute("OrigNotlPctOut", "4539839.540000"); // 2
      Undly_8_set.insert("4539839.540000");
      Undly_8.add_attribute("AttchPnt", "20687802.140000"); // 2
      Undly_8_set.insert("20687802.140000");
      Undly_8.add_attribute("DetchPnt", "7043628.050000"); // 2
      Undly_8_set.insert("7043628.050000");
      Undly_8.add_attribute("Issued", "UnderlyingIssueDate_t_1949890005"); // 2
      Undly_8_set.insert("UnderlyingIssueDate_t_1949890005");
      Undly_8.add_attribute("RepoCollSecTyp", "464604492"); // 2
      Undly_8_set.insert("464604492");
      Undly_8.add_attribute("RepoTrm", "321169668"); // 2
      Undly_8_set.insert("321169668");
      Undly_8.add_attribute("RepoRt", "12925648.880000"); // 2
      Undly_8_set.insert("12925648.880000");
      Undly_8.add_attribute("Fctr", "3358092.560000"); // 2
      Undly_8_set.insert("3358092.560000");
      Undly_8.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1029774904"); // 2
      Undly_8_set.insert("UnderlyingCreditRating_t_1029774904");
      Undly_8.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1567522716"); // 2
      Undly_8_set.insert("UnderlyingInstrRegistry_t_1567522716");
      Undly_8.add_attribute("Ctry", "2126737718"); // 2
      Undly_8_set.insert("2126737718");
      Undly_8.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1089040589"); // 2
      Undly_8_set.insert("UnderlyingStateOrProvinceOfIssue_t_1089040589");
      Undly_8.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_703240638"); // 2
      Undly_8_set.insert("UnderlyingLocaleOfIssue_t_703240638");
      Undly_8.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1453650368"); // 2
      Undly_8_set.insert("UnderlyingRedemptionDate_t_1453650368");
      Undly_8.add_attribute("StrkPx", "15628081.050000"); // 2
      Undly_8_set.insert("15628081.050000");
      Undly_8.add_attribute("StrkCcy", "CAN"); // 2
      Undly_8_set.insert("CAN");
      Undly_8.add_attribute("OptA", "2027304274"); // 2
      Undly_8_set.insert("2027304274");
      Undly_8.add_attribute("Mult", "20995028.040000"); // 2
      Undly_8_set.insert("20995028.040000");
      Undly_8.add_attribute("MultTyp", "2"); // 2
      Undly_8_set.insert("2");
      Undly_8.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_8_set.insert("3");
      Undly_8.add_attribute("UOM", "oz_tr"); // 2
      Undly_8_set.insert("oz_tr");
      Undly_8.add_attribute("UOMQty", "3330077.380000"); // 2
      Undly_8_set.insert("3330077.380000");
      Undly_8.add_attribute("PxUOM", "MWh"); // 2
      Undly_8_set.insert("MWh");
      Undly_8.add_attribute("PxUOMQty", "6872304.960000"); // 2
      Undly_8_set.insert("6872304.960000");
      Undly_8.add_attribute("TmUnit", "Yr"); // 2
      Undly_8_set.insert("Yr");
      Undly_8.add_attribute("ExerStyle", "0"); // 2
      Undly_8_set.insert("0");
      Undly_8.add_attribute("CpnRt", "8388944.400000"); // 2
      Undly_8_set.insert("8388944.400000");
      Undly_8.add_attribute("Exch", "UnderlyingSecurityExchange_t_337710064"); // 2
      Undly_8_set.insert("UnderlyingSecurityExchange_t_337710064");
      Undly_8.add_attribute("Issr", "UnderlyingIssuer_t_886895837"); // 2
      Undly_8_set.insert("UnderlyingIssuer_t_886895837");
      Undly_8.add_attribute("EncUndIssrLen", "1650371919"); // 2
      Undly_8_set.insert("1650371919");
      Undly_8.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_791694018"); // 2
      Undly_8_set.insert("EncodedUnderlyingIssuer_t_791694018");
      Undly_8.add_attribute("Desc", "UnderlyingSecurityDesc_t_808192403"); // 2
      Undly_8_set.insert("UnderlyingSecurityDesc_t_808192403");
      Undly_8.add_attribute("EncUndSecDescLen", "207251076"); // 2
      Undly_8_set.insert("207251076");
      Undly_8.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_594100376"); // 2
      Undly_8_set.insert("EncodedUnderlyingSecurityDesc_t_594100376");
      Undly_8.add_attribute("CPPgm", "UnderlyingCPProgram_t_1272796896"); // 2
      Undly_8_set.insert("UnderlyingCPProgram_t_1272796896");
      Undly_8.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_528420744"); // 2
      Undly_8_set.insert("UnderlyingCPRegType_t_528420744");
      Undly_8.add_attribute("AllocPct", "18866652.640000"); // 2
      Undly_8_set.insert("18866652.640000");
      Undly_8.add_attribute("Ccy", "JPY"); // 2
      Undly_8_set.insert("JPY");
      Undly_8.add_attribute("Qty", "13067043.320000"); // 2
      Undly_8_set.insert("13067043.320000");
      Undly_8.add_attribute("SettlTyp", "5"); // 2
      Undly_8_set.insert("5");
      Undly_8.add_attribute("CashAmt", "UnderlyingCashAmount_t_499752590"); // 2
      Undly_8_set.insert("UnderlyingCashAmount_t_499752590");
      Undly_8.add_attribute("CashTyp", "DIFF"); // 2
      Undly_8_set.insert("DIFF");
      Undly_8.add_attribute("Px", "8940269.420000"); // 2
      Undly_8_set.insert("8940269.420000");
      Undly_8.add_attribute("DirtPx", "20625606.950000"); // 2
      Undly_8_set.insert("20625606.950000");
      Undly_8.add_attribute("EndPx", "8751194.440000"); // 2
      Undly_8_set.insert("8751194.440000");
      Undly_8.add_attribute("StartVal", "UnderlyingStartValue_t_2082049646"); // 2
      Undly_8_set.insert("UnderlyingStartValue_t_2082049646");
      Undly_8.add_attribute("CurVal", "UnderlyingCurrentValue_t_1942381321"); // 2
      Undly_8_set.insert("UnderlyingCurrentValue_t_1942381321");
      Undly_8.add_attribute("EndVal", "UnderlyingEndValue_t_827138601"); // 2
      Undly_8_set.insert("UnderlyingEndValue_t_827138601");
      Undly_8.add_attribute("AdjQty", "18643729.400000"); // 2
      Undly_8_set.insert("18643729.400000");
      Undly_8.add_attribute("FxRate", "16459184.560000"); // 2
      Undly_8_set.insert("16459184.560000");
      Undly_8.add_attribute("FxRateCalc", "D"); // 2
      Undly_8_set.insert("D");
      Undly_8.add_attribute("CapValu", "UnderlyingCapValue_t_49897030"); // 2
      Undly_8_set.insert("UnderlyingCapValue_t_49897030");
      Undly_8.add_attribute("SetMeth", "UnderlyingSettlMethod_t_493166937"); // 2
      Undly_8_set.insert("UnderlyingSettlMethod_t_493166937");
      Undly_8.add_attribute("PutCall", "1516201351"); // 2
      Undly_8_set.insert("1516201351");
      all_values.push_back(Undly_8_set);
      all_compo_names.insert("Undly_8_set");

      {
        xml_element UndAID_8{"UndAID"};
        multiset<string> UndAID_8_set;
        UndAID_8.add_attribute("AltID", "UnderlyingSecurityAltID_t_1334300464"); // 3
        UndAID_8_set.insert("UnderlyingSecurityAltID_t_1334300464");
        UndAID_8.add_attribute("AltIDSrc", "1"); // 3
        UndAID_8_set.insert("1");
        all_values.push_back(UndAID_8_set);
        all_compo_names.insert("UndAID_8_set");

        Undly_8.add_element(UndAID_8);
      }
      {
        xml_element Stip_16{"Stip"};
        multiset<string> Stip_16_set;
        Stip_16.add_attribute("Typ", "POOL"); // 3
        Stip_16_set.insert("POOL");
        Stip_16.add_attribute("Val", "UnderlyingStipValue_t_1672010528"); // 3
        Stip_16_set.insert("UnderlyingStipValue_t_1672010528");
        all_values.push_back(Stip_16_set);
        all_compo_names.insert("Stip_16_set");

        Undly_8.add_element(Stip_16);
      }
      {
        xml_element Pty_60{"Pty"};
        multiset<string> Pty_60_set;
        Pty_60.add_attribute("ID", "UnderlyingInstrumentPartyID_t_588844126"); // 3
        Pty_60_set.insert("UnderlyingInstrumentPartyID_t_588844126");
        Pty_60.add_attribute("Src", "F"); // 3
        Pty_60_set.insert("F");
        Pty_60.add_attribute("R", "46"); // 3
        Pty_60_set.insert("46");
        all_values.push_back(Pty_60_set);
        all_compo_names.insert("Pty_60_set");

        {
          xml_element Sub_60{"Sub"};
          multiset<string> Sub_60_set;
          Sub_60.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1397036529"); // 4
          Sub_60_set.insert("UnderlyingInstrumentPartySubID_t_1397036529");
          Sub_60.add_attribute("Typ", "1"); // 4
          Sub_60_set.insert("1");
          all_values.push_back(Sub_60_set);
          all_compo_names.insert("Sub_60_set");

          Pty_60.add_element(Sub_60);
        }
        Undly_8.add_element(Pty_60);
      }
      UndColl_1.add_element(Undly_8);
    }
    elt.add_element(UndColl_1);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_0{"TrdRegTS"};
    multiset<string> TrdRegTS_0_set;
    TrdRegTS_0.add_attribute("TS", "TrdRegTimestamp_t_522349777"); // 1
    TrdRegTS_0_set.insert("TrdRegTimestamp_t_522349777");
    TrdRegTS_0.add_attribute("Typ", "6"); // 1
    TrdRegTS_0_set.insert("6");
    TrdRegTS_0.add_attribute("Src", "TrdRegTimestampOrigin_t_649502891"); // 1
    TrdRegTS_0_set.insert("TrdRegTimestampOrigin_t_649502891");
    TrdRegTS_0.add_attribute("DskTyp", "IN"); // 1
    TrdRegTS_0_set.insert("IN");
    TrdRegTS_0.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_0_set.insert("1");
    TrdRegTS_0.add_attribute("DskOrdHndlInst", "IOC"); // 1
    TrdRegTS_0_set.insert("IOC");
    all_values.push_back(TrdRegTS_0_set);
    all_compo_names.insert("TrdRegTS_0_set");

    elt.add_element(TrdRegTS_0);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_4{"MiscFees"};
    multiset<string> MiscFees_4_set;
    MiscFees_4.add_attribute("Amt", "MiscFeeAmt_t_356636826"); // 1
    MiscFees_4_set.insert("MiscFeeAmt_t_356636826");
    MiscFees_4.add_attribute("Curr", "JPY"); // 1
    MiscFees_4_set.insert("JPY");
    MiscFees_4.add_attribute("Typ", "9"); // 1
    MiscFees_4_set.insert("9");
    MiscFees_4.add_attribute("Basis", "2"); // 1
    MiscFees_4_set.insert("2");
    all_values.push_back(MiscFees_4_set);
    all_compo_names.insert("MiscFees_4_set");

    elt.add_element(MiscFees_4);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_5{"MiscFees"};
    multiset<string> MiscFees_5_set;
    MiscFees_5.add_attribute("Amt", "MiscFeeAmt_t_252441796"); // 1
    MiscFees_5_set.insert("MiscFeeAmt_t_252441796");
    MiscFees_5.add_attribute("Curr", "GBP"); // 1
    MiscFees_5_set.insert("GBP");
    MiscFees_5.add_attribute("Typ", "6"); // 1
    MiscFees_5_set.insert("6");
    MiscFees_5.add_attribute("Basis", "1"); // 1
    MiscFees_5_set.insert("1");
    all_values.push_back(MiscFees_5_set);
    all_compo_names.insert("MiscFees_5_set");

    elt.add_element(MiscFees_5);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_3{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_3_set;
    SprdBnchmkCurve_3.add_attribute("Spread", "549301.510000"); // 1
    SprdBnchmkCurve_3_set.insert("549301.510000");
    SprdBnchmkCurve_3.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_3_set.insert("GBP");
    SprdBnchmkCurve_3.add_attribute("Name", "Euribor"); // 1
    SprdBnchmkCurve_3_set.insert("Euribor");
    SprdBnchmkCurve_3.add_attribute("Point", "BenchmarkCurvePoint_t_1353528583"); // 1
    SprdBnchmkCurve_3_set.insert("BenchmarkCurvePoint_t_1353528583");
    SprdBnchmkCurve_3.add_attribute("Px", "19076452.290000"); // 1
    SprdBnchmkCurve_3_set.insert("19076452.290000");
    SprdBnchmkCurve_3.add_attribute("PxTyp", "6"); // 1
    SprdBnchmkCurve_3_set.insert("6");
    SprdBnchmkCurve_3.add_attribute("SecID", "BenchmarkSecurityID_t_878055464"); // 1
    SprdBnchmkCurve_3_set.insert("BenchmarkSecurityID_t_878055464");
    SprdBnchmkCurve_3.add_attribute("SecIDSrc", "I"); // 1
    SprdBnchmkCurve_3_set.insert("I");
    all_values.push_back(SprdBnchmkCurve_3_set);
    all_compo_names.insert("SprdBnchmkCurve_3_set");

    elt.add_element(SprdBnchmkCurve_3);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_17{"Stip"};
    multiset<string> Stip_17_set;
    Stip_17.add_attribute("Typ", "RATING"); // 1
    Stip_17_set.insert("RATING");
    Stip_17.add_attribute("Val", "StipulationValue_t_1746042236"); // 1
    Stip_17_set.insert("StipulationValue_t_1746042236");
    all_values.push_back(Stip_17_set);
    all_compo_names.insert("Stip_17_set");

    elt.add_element(Stip_17);
  } // end Stip
  { // Stip
    xml_element Stip_18{"Stip"};
    multiset<string> Stip_18_set;
    Stip_18.add_attribute("Typ", "PMAX"); // 1
    Stip_18_set.insert("PMAX");
    Stip_18.add_attribute("Val", "StipulationValue_t_2104597638"); // 1
    Stip_18_set.insert("StipulationValue_t_2104597638");
    all_values.push_back(Stip_18_set);
    all_compo_names.insert("Stip_18_set");

    elt.add_element(Stip_18);
  } // end Stip
  { // Stip
    xml_element Stip_19{"Stip"};
    multiset<string> Stip_19_set;
    Stip_19.add_attribute("Typ", "SECTOR"); // 1
    Stip_19_set.insert("SECTOR");
    Stip_19.add_attribute("Val", "StipulationValue_t_1853167786"); // 1
    Stip_19_set.insert("StipulationValue_t_1853167786");
    all_values.push_back(Stip_19_set);
    all_compo_names.insert("Stip_19_set");

    elt.add_element(Stip_19);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_4{"SetInstr"};
    multiset<string> SetInstr_4_set;
    SetInstr_4.add_attribute("DlvryTyp", "1"); // 1
    SetInstr_4_set.insert("1");
    SetInstr_4.add_attribute("StandInstDbTyp", "2"); // 1
    SetInstr_4_set.insert("2");
    SetInstr_4.add_attribute("StandInstDbName", "StandInstDbName_t_1710052022"); // 1
    SetInstr_4_set.insert("StandInstDbName_t_1710052022");
    SetInstr_4.add_attribute("StandInstDbID", "StandInstDbID_t_415340456"); // 1
    SetInstr_4_set.insert("StandInstDbID_t_415340456");
    all_values.push_back(SetInstr_4_set);
    all_compo_names.insert("SetInstr_4_set");

    {
      xml_element DlvInst_4{"DlvInst"};
      multiset<string> DlvInst_4_set;
      DlvInst_4.add_attribute("InstSrc", "2"); // 2
      DlvInst_4_set.insert("2");
      DlvInst_4.add_attribute("InstTyp", "C"); // 2
      DlvInst_4_set.insert("C");
      all_values.push_back(DlvInst_4_set);
      all_compo_names.insert("DlvInst_4_set");

      {
        xml_element Pty_61{"Pty"};
        multiset<string> Pty_61_set;
        Pty_61.add_attribute("ID", "SettlPartyID_t_86525355"); // 3
        Pty_61_set.insert("SettlPartyID_t_86525355");
        Pty_61.add_attribute("Src", "D"); // 3
        Pty_61_set.insert("D");
        Pty_61.add_attribute("R", "19"); // 3
        Pty_61_set.insert("19");
        all_values.push_back(Pty_61_set);
        all_compo_names.insert("Pty_61_set");

        {
          xml_element Sub_61{"Sub"};
          multiset<string> Sub_61_set;
          Sub_61.add_attribute("ID", "SettlPartySubID_t_632829698"); // 4
          Sub_61_set.insert("SettlPartySubID_t_632829698");
          Sub_61.add_attribute("Typ", "7"); // 4
          Sub_61_set.insert("7");
          all_values.push_back(Sub_61_set);
          all_compo_names.insert("Sub_61_set");

          Pty_61.add_element(Sub_61);
        }
        DlvInst_4.add_element(Pty_61);
      }
      SetInstr_4.add_element(DlvInst_4);
    }
    elt.add_element(SetInstr_4);
  } // end SetInstr
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
