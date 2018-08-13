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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollAsgn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralAssignment_message_t_0;
  elt.add_attribute("ID", "CollAsgnID_t_938521576"); // 0
  CollateralAssignment_message_t_0.insert("CollAsgnID_t_938521576");
  elt.add_attribute("ReqID", "CollReqID_t_652357402"); // 0
  CollateralAssignment_message_t_0.insert("CollReqID_t_652357402");
  elt.add_attribute("AsgnRsn", "4"); // 0
  CollateralAssignment_message_t_0.insert("4");
  elt.add_attribute("TransTyp", "4"); // 0
  CollateralAssignment_message_t_0.insert("4");
  elt.add_attribute("RefID", "CollAsgnRefID_t_1985121368"); // 0
  CollateralAssignment_message_t_0.insert("CollAsgnRefID_t_1985121368");
  elt.add_attribute("TxnTm", "TransactTime_t_734445751"); // 0
  CollateralAssignment_message_t_0.insert("TransactTime_t_734445751");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1458328850"); // 0
  CollateralAssignment_message_t_0.insert("ExpireTime_t_1458328850");
  elt.add_attribute("Acct", "Account_t_567868324"); // 0
  CollateralAssignment_message_t_0.insert("Account_t_567868324");
  elt.add_attribute("AcctTyp", "3"); // 0
  CollateralAssignment_message_t_0.insert("3");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1452568057"); // 0
  CollateralAssignment_message_t_0.insert("ClOrdID_t_1452568057");
  elt.add_attribute("OrdID", "OrderID_t_318092463"); // 0
  CollateralAssignment_message_t_0.insert("OrderID_t_318092463");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_489138861"); // 0
  CollateralAssignment_message_t_0.insert("SecondaryOrderID_t_489138861");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_375035776"); // 0
  CollateralAssignment_message_t_0.insert("SecondaryClOrdID_t_375035776");
  elt.add_attribute("SettlDt", "SettlDate_t_148198265"); // 0
  CollateralAssignment_message_t_0.insert("SettlDate_t_148198265");
  elt.add_attribute("Qty", "16219054.240000"); // 0
  CollateralAssignment_message_t_0.insert("16219054.240000");
  elt.add_attribute("QtyTyp", "1"); // 0
  CollateralAssignment_message_t_0.insert("1");
  elt.add_attribute("Ccy", "EUR"); // 0
  CollateralAssignment_message_t_0.insert("EUR");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1549860942"); // 0
  CollateralAssignment_message_t_0.insert("MarginExcess_t_1549860942");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1715813898"); // 0
  CollateralAssignment_message_t_0.insert("TotalNetValue_t_1715813898");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_545107976"); // 0
  CollateralAssignment_message_t_0.insert("CashOutstanding_t_545107976");
  elt.add_attribute("Side", "1"); // 0
  CollateralAssignment_message_t_0.insert("1");
  elt.add_attribute("Px", "15419479.520000"); // 0
  CollateralAssignment_message_t_0.insert("15419479.520000");
  elt.add_attribute("PxTyp", "4"); // 0
  CollateralAssignment_message_t_0.insert("4");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1177186106"); // 0
  CollateralAssignment_message_t_0.insert("AccruedInterestAmt_t_1177186106");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1369395414"); // 0
  CollateralAssignment_message_t_0.insert("EndAccruedInterestAmt_t_1369395414");
  elt.add_attribute("StartCsh", "StartCash_t_1872424135"); // 0
  CollateralAssignment_message_t_0.insert("StartCash_t_1872424135");
  elt.add_attribute("EndCsh", "EndCash_t_756078469"); // 0
  CollateralAssignment_message_t_0.insert("EndCash_t_756078469");
  elt.add_attribute("SesID", "5"); // 0
  CollateralAssignment_message_t_0.insert("5");
  elt.add_attribute("SesSub", "5"); // 0
  CollateralAssignment_message_t_0.insert("5");
  elt.add_attribute("SetSesID", "ITD"); // 0
  CollateralAssignment_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1813268516"); // 0
  CollateralAssignment_message_t_0.insert("SettlSessSubID_t_1813268516");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1429075272"); // 0
  CollateralAssignment_message_t_0.insert("ClearingBusinessDate_t_1429075272");
  elt.add_attribute("Txt", "Text_t_467947597"); // 0
  CollateralAssignment_message_t_0.insert("Text_t_467947597");
  elt.add_attribute("EncTxtLen", "1330195713"); // 0
  CollateralAssignment_message_t_0.insert("1330195713");
  elt.add_attribute("EncTxt", "EncodedText_t_1266712992"); // 0
  CollateralAssignment_message_t_0.insert("EncodedText_t_1266712992");
  all_values.push_back(CollateralAssignment_message_t_0);
  all_compo_names.insert("CollateralAssignment_message_t");

  { // Hdr
    xml_element Hdr_14{"Hdr"};
    multiset<string> Hdr_14_set;
    Hdr_14.add_attribute("SeqNum", "1202393348"); // 1
    Hdr_14_set.insert("1202393348");
    Hdr_14.add_attribute("SID", "SenderCompID_t_641040915"); // 1
    Hdr_14_set.insert("SenderCompID_t_641040915");
    Hdr_14.add_attribute("TID", "TargetCompID_t_1834581317"); // 1
    Hdr_14_set.insert("TargetCompID_t_1834581317");
    Hdr_14.add_attribute("OBID", "OnBehalfOfCompID_t_1254714836"); // 1
    Hdr_14_set.insert("OnBehalfOfCompID_t_1254714836");
    Hdr_14.add_attribute("D2ID", "DeliverToCompID_t_2093608972"); // 1
    Hdr_14_set.insert("DeliverToCompID_t_2093608972");
    Hdr_14.add_attribute("SSub", "SenderSubID_t_5190132"); // 1
    Hdr_14_set.insert("SenderSubID_t_5190132");
    Hdr_14.add_attribute("SLoc", "SenderLocationID_t_1743853697"); // 1
    Hdr_14_set.insert("SenderLocationID_t_1743853697");
    Hdr_14.add_attribute("TSub", "TargetSubID_t_321161100"); // 1
    Hdr_14_set.insert("TargetSubID_t_321161100");
    Hdr_14.add_attribute("TLoc", "TargetLocationID_t_153388397"); // 1
    Hdr_14_set.insert("TargetLocationID_t_153388397");
    Hdr_14.add_attribute("OBSub", "OnBehalfOfSubID_t_1218275473"); // 1
    Hdr_14_set.insert("OnBehalfOfSubID_t_1218275473");
    Hdr_14.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1022784052"); // 1
    Hdr_14_set.insert("OnBehalfOfLocationID_t_1022784052");
    Hdr_14.add_attribute("D2Sub", "DeliverToSubID_t_1148280544"); // 1
    Hdr_14_set.insert("DeliverToSubID_t_1148280544");
    Hdr_14.add_attribute("D2Loc", "DeliverToLocationID_t_2086064060"); // 1
    Hdr_14_set.insert("DeliverToLocationID_t_2086064060");
    Hdr_14.add_attribute("PosDup", "Y"); // 1
    Hdr_14_set.insert("Y");
    Hdr_14.add_attribute("PosRsnd", "N"); // 1
    Hdr_14_set.insert("N");
    Hdr_14.add_attribute("Snt", "SendingTime_t_483688388"); // 1
    Hdr_14_set.insert("SendingTime_t_483688388");
    Hdr_14.add_attribute("OrigSnt", "OrigSendingTime_t_478677571"); // 1
    Hdr_14_set.insert("OrigSendingTime_t_478677571");
    Hdr_14.add_attribute("MsgEncd", "MessageEncoding_t_111075099"); // 1
    Hdr_14_set.insert("MessageEncoding_t_111075099");
    all_values.push_back(Hdr_14_set);
    all_compo_names.insert("Hdr_14_set");

    {
      xml_element Hop_14{"Hop"};
      multiset<string> Hop_14_set;
      Hop_14.add_attribute("ID", "HopCompID_t_126286080"); // 2
      Hop_14_set.insert("HopCompID_t_126286080");
      Hop_14.add_attribute("Ref", "1655863677"); // 2
      Hop_14_set.insert("1655863677");
      Hop_14.add_attribute("Snt", "HopSendingTime_t_1480470513"); // 2
      Hop_14_set.insert("HopSendingTime_t_1480470513");
      all_values.push_back(Hop_14_set);
      all_compo_names.insert("Hop_14_set");

      Hdr_14.add_element(Hop_14);
    }
    elt.add_element(Hdr_14);
  } // end Hdr
  { // Pty
    xml_element Pty_65{"Pty"};
    multiset<string> Pty_65_set;
    Pty_65.add_attribute("ID", "PartyID_t_264458499"); // 1
    Pty_65_set.insert("PartyID_t_264458499");
    Pty_65.add_attribute("Src", "I"); // 1
    Pty_65_set.insert("I");
    Pty_65.add_attribute("R", "1"); // 1
    Pty_65_set.insert("1");
    all_values.push_back(Pty_65_set);
    all_compo_names.insert("Pty_65_set");

    {
      xml_element Sub_65{"Sub"};
      multiset<string> Sub_65_set;
      Sub_65.add_attribute("ID", "PartySubID_t_1340680355"); // 2
      Sub_65_set.insert("PartySubID_t_1340680355");
      Sub_65.add_attribute("Typ", "4"); // 2
      Sub_65_set.insert("4");
      all_values.push_back(Sub_65_set);
      all_compo_names.insert("Sub_65_set");

      Pty_65.add_element(Sub_65);
    }
    elt.add_element(Pty_65);
  } // end Pty
  { // Pty
    xml_element Pty_66{"Pty"};
    multiset<string> Pty_66_set;
    Pty_66.add_attribute("ID", "PartyID_t_2057019708"); // 1
    Pty_66_set.insert("PartyID_t_2057019708");
    Pty_66.add_attribute("Src", "D"); // 1
    Pty_66_set.insert("D");
    Pty_66.add_attribute("R", "24"); // 1
    Pty_66_set.insert("24");
    all_values.push_back(Pty_66_set);
    all_compo_names.insert("Pty_66_set");

    {
      xml_element Sub_66{"Sub"};
      multiset<string> Sub_66_set;
      Sub_66.add_attribute("ID", "PartySubID_t_1176249053"); // 2
      Sub_66_set.insert("PartySubID_t_1176249053");
      Sub_66.add_attribute("Typ", "5"); // 2
      Sub_66_set.insert("5");
      all_values.push_back(Sub_66_set);
      all_compo_names.insert("Sub_66_set");

      Pty_66.add_element(Sub_66);
    }
    elt.add_element(Pty_66);
  } // end Pty
  { // CollExc
    xml_element CollExc_0{"CollExc"};
    multiset<string> CollExc_0_set;
    CollExc_0.add_attribute("ExecID", "ExecID_t_863346722"); // 1
    CollExc_0_set.insert("ExecID_t_863346722");
    all_values.push_back(CollExc_0_set);
    all_compo_names.insert("CollExc_0_set");

    elt.add_element(CollExc_0);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_0{"TrdColl"};
    multiset<string> TrdColl_0_set;
    TrdColl_0.add_attribute("RptID", "TradeReportID_t_1790880626"); // 1
    TrdColl_0_set.insert("TradeReportID_t_1790880626");
    TrdColl_0.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_868536854"); // 1
    TrdColl_0_set.insert("SecondaryTradeReportID_t_868536854");
    all_values.push_back(TrdColl_0_set);
    all_compo_names.insert("TrdColl_0_set");

    elt.add_element(TrdColl_0);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_6{"Instrmt"};
    multiset<string> Instrmt_6_set;
    Instrmt_6.add_attribute("Sym", "Symbol_t_1714622538"); // 1
    Instrmt_6_set.insert("Symbol_t_1714622538");
    Instrmt_6.add_attribute("Sfx", "CD"); // 1
    Instrmt_6_set.insert("CD");
    Instrmt_6.add_attribute("ID", "SecurityID_t_1021925252"); // 1
    Instrmt_6_set.insert("SecurityID_t_1021925252");
    Instrmt_6.add_attribute("Src", "K"); // 1
    Instrmt_6_set.insert("K");
    Instrmt_6.add_attribute("Prod", "5"); // 1
    Instrmt_6_set.insert("5");
    Instrmt_6.add_attribute("ProdCmplx", "ProductComplex_t_22722148"); // 1
    Instrmt_6_set.insert("ProductComplex_t_22722148");
    Instrmt_6.add_attribute("SecGrp", "SecurityGroup_t_723994776"); // 1
    Instrmt_6_set.insert("SecurityGroup_t_723994776");
    Instrmt_6.add_attribute("CFI", "CFICode_t_1412503477"); // 1
    Instrmt_6_set.insert("CFICode_t_1412503477");
    Instrmt_6.add_attribute("SecTyp", "NONE"); // 1
    Instrmt_6_set.insert("NONE");
    Instrmt_6.add_attribute("SubTyp", "SecuritySubType_t_1207683165"); // 1
    Instrmt_6_set.insert("SecuritySubType_t_1207683165");
    Instrmt_6.add_attribute("MMY", "1891181049"); // 1
    Instrmt_6_set.insert("1891181049");
    Instrmt_6.add_attribute("MatDt", "MaturityDate_t_850408041"); // 1
    Instrmt_6_set.insert("MaturityDate_t_850408041");
    Instrmt_6.add_attribute("MatTm", "1333969245"); // 1
    Instrmt_6_set.insert("1333969245");
    Instrmt_6.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1399561078"); // 1
    Instrmt_6_set.insert("SettleOnOpenFlag_t_1399561078");
    Instrmt_6.add_attribute("AsgnMeth", "183394907"); // 1
    Instrmt_6_set.insert("183394907");
    Instrmt_6.add_attribute("Status", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("CpnPmt", "CouponPaymentDate_t_1664019577"); // 1
    Instrmt_6_set.insert("CouponPaymentDate_t_1664019577");
    Instrmt_6.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_6_set.insert("FR");
    Instrmt_6.add_attribute("Snrty", "SB"); // 1
    Instrmt_6_set.insert("SB");
    Instrmt_6.add_attribute("NotlPctOut", "8572162.850000"); // 1
    Instrmt_6_set.insert("8572162.850000");
    Instrmt_6.add_attribute("OrigNotlPctOut", "2646473.860000"); // 1
    Instrmt_6_set.insert("2646473.860000");
    Instrmt_6.add_attribute("AttchPnt", "17226763.090000"); // 1
    Instrmt_6_set.insert("17226763.090000");
    Instrmt_6.add_attribute("DetchPnt", "5183605.890000"); // 1
    Instrmt_6_set.insert("5183605.890000");
    Instrmt_6.add_attribute("Issued", "IssueDate_t_1468361773"); // 1
    Instrmt_6_set.insert("IssueDate_t_1468361773");
    Instrmt_6.add_attribute("RepoCollSecTyp", "751441714"); // 1
    Instrmt_6_set.insert("751441714");
    Instrmt_6.add_attribute("RepoTrm", "1381898242"); // 1
    Instrmt_6_set.insert("1381898242");
    Instrmt_6.add_attribute("RepoRt", "11656334.270000"); // 1
    Instrmt_6_set.insert("11656334.270000");
    Instrmt_6.add_attribute("Fctr", "16147884.360000"); // 1
    Instrmt_6_set.insert("16147884.360000");
    Instrmt_6.add_attribute("CrdRtg", "CreditRating_t_1352667083"); // 1
    Instrmt_6_set.insert("CreditRating_t_1352667083");
    Instrmt_6.add_attribute("Rgstry", "InstrRegistry_t_809030405"); // 1
    Instrmt_6_set.insert("InstrRegistry_t_809030405");
    Instrmt_6.add_attribute("IssuCtry", "335841642"); // 1
    Instrmt_6_set.insert("335841642");
    Instrmt_6.add_attribute("StPrv", "StateOrProvinceOfIssue_t_919805973"); // 1
    Instrmt_6_set.insert("StateOrProvinceOfIssue_t_919805973");
    Instrmt_6.add_attribute("Lcl", "LocaleOfIssue_t_773588483"); // 1
    Instrmt_6_set.insert("LocaleOfIssue_t_773588483");
    Instrmt_6.add_attribute("Redeem", "RedemptionDate_t_1357766894"); // 1
    Instrmt_6_set.insert("RedemptionDate_t_1357766894");
    Instrmt_6.add_attribute("StrkPx", "17052203.370000"); // 1
    Instrmt_6_set.insert("17052203.370000");
    Instrmt_6.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_6_set.insert("USD");
    Instrmt_6.add_attribute("StrkMult", "2817314.660000"); // 1
    Instrmt_6_set.insert("2817314.660000");
    Instrmt_6.add_attribute("StrkValu", "10259504.430000"); // 1
    Instrmt_6_set.insert("10259504.430000");
    Instrmt_6.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("StrkPxBndryPrcsn", "7696478.440000"); // 1
    Instrmt_6_set.insert("7696478.440000");
    Instrmt_6.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_6_set.insert("3");
    Instrmt_6.add_attribute("OptAt", "675900228"); // 1
    Instrmt_6_set.insert("675900228");
    Instrmt_6.add_attribute("Mult", "217252.750000"); // 1
    Instrmt_6_set.insert("217252.750000");
    Instrmt_6.add_attribute("MultTyp", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_6_set.insert("0");
    Instrmt_6.add_attribute("MinPxIncr", "16857448.520000"); // 1
    Instrmt_6_set.insert("16857448.520000");
    Instrmt_6.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1397269998"); // 1
    Instrmt_6_set.insert("MinPriceIncrementAmount_t_1397269998");
    Instrmt_6.add_attribute("UOM", "Bcf"); // 1
    Instrmt_6_set.insert("Bcf");
    Instrmt_6.add_attribute("UOMQty", "3954774.890000"); // 1
    Instrmt_6_set.insert("3954774.890000");
    Instrmt_6.add_attribute("PxUOM", "Bcf"); // 1
    Instrmt_6_set.insert("Bcf");
    Instrmt_6.add_attribute("PxUOMQty", "11019453.010000"); // 1
    Instrmt_6_set.insert("11019453.010000");
    Instrmt_6.add_attribute("SettlMeth", "P"); // 1
    Instrmt_6_set.insert("P");
    Instrmt_6.add_attribute("ExerStyle", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_6_set.insert("3");
    Instrmt_6.add_attribute("OptPayAmt", "OptPayoutAmount_t_148252673"); // 1
    Instrmt_6_set.insert("OptPayoutAmount_t_148252673");
    Instrmt_6.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_6_set.insert("INX");
    Instrmt_6.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_6_set.insert("CDS");
    Instrmt_6.add_attribute("ListMeth", "0"); // 1
    Instrmt_6_set.insert("0");
    Instrmt_6.add_attribute("CapPx", "8099756.950000"); // 1
    Instrmt_6_set.insert("8099756.950000");
    Instrmt_6.add_attribute("FlrPx", "16565334.460000"); // 1
    Instrmt_6_set.insert("16565334.460000");
    Instrmt_6.add_attribute("PutCall", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("FlexInd", "true"); // 1
    Instrmt_6_set.insert("true");
    Instrmt_6.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_6_set.insert("true");
    Instrmt_6.add_attribute("TmUnit", "D"); // 1
    Instrmt_6_set.insert("D");
    Instrmt_6.add_attribute("CpnRt", "11970111.440000"); // 1
    Instrmt_6_set.insert("11970111.440000");
    Instrmt_6.add_attribute("Exch", "SecurityExchange_t_99822087"); // 1
    Instrmt_6_set.insert("SecurityExchange_t_99822087");
    Instrmt_6.add_attribute("PosLmt", "112710237"); // 1
    Instrmt_6_set.insert("112710237");
    Instrmt_6.add_attribute("NTPosLmt", "75477940"); // 1
    Instrmt_6_set.insert("75477940");
    Instrmt_6.add_attribute("Issr", "Issuer_t_72160424"); // 1
    Instrmt_6_set.insert("Issuer_t_72160424");
    Instrmt_6.add_attribute("EncIssrLen", "1602124868"); // 1
    Instrmt_6_set.insert("1602124868");
    Instrmt_6.add_attribute("EncIssr", "EncodedIssuer_t_845125784"); // 1
    Instrmt_6_set.insert("EncodedIssuer_t_845125784");
    Instrmt_6.add_attribute("Desc", "SecurityDesc_t_894906802"); // 1
    Instrmt_6_set.insert("SecurityDesc_t_894906802");
    Instrmt_6.add_attribute("EncSecDescLen", "130541448"); // 1
    Instrmt_6_set.insert("130541448");
    Instrmt_6.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_866851059"); // 1
    Instrmt_6_set.insert("EncodedSecurityDesc_t_866851059");
    Instrmt_6.add_attribute("Pool", "Pool_t_1901048088"); // 1
    Instrmt_6_set.insert("Pool_t_1901048088");
    Instrmt_6.add_attribute("CSetMo", "1991637488"); // 1
    Instrmt_6_set.insert("1991637488");
    Instrmt_6.add_attribute("CPPgm", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("CPRegT", "CPRegType_t_1150834438"); // 1
    Instrmt_6_set.insert("CPRegType_t_1150834438");
    Instrmt_6.add_attribute("Dated", "DatedDate_t_1370906480"); // 1
    Instrmt_6_set.insert("DatedDate_t_1370906480");
    Instrmt_6.add_attribute("IntAcrl", "InterestAccrualDate_t_800589753"); // 1
    Instrmt_6_set.insert("InterestAccrualDate_t_800589753");
    all_values.push_back(Instrmt_6_set);
    all_compo_names.insert("Instrmt_6_set");

    {
      xml_element AID_6{"AID"};
      multiset<string> AID_6_set;
      AID_6.add_attribute("AltID", "SecurityAltID_t_665268174"); // 2
      AID_6_set.insert("SecurityAltID_t_665268174");
      AID_6.add_attribute("AltIDSrc", "F"); // 2
      AID_6_set.insert("F");
      all_values.push_back(AID_6_set);
      all_compo_names.insert("AID_6_set");

      Instrmt_6.add_element(AID_6);
    }
    {
      xml_element SecXML_6{"SecXML"};
      multiset<string> SecXML_6_set;
      SecXML_6.add_attribute("Schema", "SecurityXMLSchema_t_1714427832"); // 2
      SecXML_6_set.insert("SecurityXMLSchema_t_1714427832");
      all_values.push_back(SecXML_6_set);
      all_compo_names.insert("SecXML_6_set");

      Instrmt_6.add_element(SecXML_6);
    }
    {
      xml_element Evnt_6{"Evnt"};
      multiset<string> Evnt_6_set;
      Evnt_6.add_attribute("EventTyp", "99"); // 2
      Evnt_6_set.insert("99");
      Evnt_6.add_attribute("Dt", "EventDate_t_31271501"); // 2
      Evnt_6_set.insert("EventDate_t_31271501");
      Evnt_6.add_attribute("Tm", "EventTime_t_1862680505"); // 2
      Evnt_6_set.insert("EventTime_t_1862680505");
      Evnt_6.add_attribute("Px", "16490089.740000"); // 2
      Evnt_6_set.insert("16490089.740000");
      Evnt_6.add_attribute("Txt", "EventText_t_1351963305"); // 2
      Evnt_6_set.insert("EventText_t_1351963305");
      all_values.push_back(Evnt_6_set);
      all_compo_names.insert("Evnt_6_set");

      Instrmt_6.add_element(Evnt_6);
    }
    {
      xml_element Pty_67{"Pty"};
      multiset<string> Pty_67_set;
      Pty_67.add_attribute("ID", "InstrumentPartyID_t_1216116613"); // 2
      Pty_67_set.insert("InstrumentPartyID_t_1216116613");
      Pty_67.add_attribute("Src", "6"); // 2
      Pty_67_set.insert("6");
      Pty_67.add_attribute("R", "85"); // 2
      Pty_67_set.insert("85");
      all_values.push_back(Pty_67_set);
      all_compo_names.insert("Pty_67_set");

      {
        xml_element Sub_67{"Sub"};
        multiset<string> Sub_67_set;
        Sub_67.add_attribute("ID", "InstrumentPartySubID_t_1489358695"); // 3
        Sub_67_set.insert("InstrumentPartySubID_t_1489358695");
        Sub_67.add_attribute("Typ", "14"); // 3
        Sub_67_set.insert("14");
        all_values.push_back(Sub_67_set);
        all_compo_names.insert("Sub_67_set");

        Pty_67.add_element(Sub_67);
      }
      Instrmt_6.add_element(Pty_67);
    }
    {
      xml_element CmplxEvnt_6{"CmplxEvnt"};
      multiset<string> CmplxEvnt_6_set;
      CmplxEvnt_6.add_attribute("Typ", "4"); // 2
      CmplxEvnt_6_set.insert("4");
      CmplxEvnt_6.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1320337466"); // 2
      CmplxEvnt_6_set.insert("ComplexOptPayoutAmount_t_1320337466");
      CmplxEvnt_6.add_attribute("Px", "9445926.960000"); // 2
      CmplxEvnt_6_set.insert("9445926.960000");
      CmplxEvnt_6.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_6_set.insert("3");
      CmplxEvnt_6.add_attribute("PxBndryPrcsn", "14330477.030000"); // 2
      CmplxEvnt_6_set.insert("14330477.030000");
      CmplxEvnt_6.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_6_set.insert("2");
      CmplxEvnt_6.add_attribute("Cond", "1"); // 2
      CmplxEvnt_6_set.insert("1");
      all_values.push_back(CmplxEvnt_6_set);
      all_compo_names.insert("CmplxEvnt_6_set");

      {
        xml_element EvntDts_6{"EvntDts"};
        multiset<string> EvntDts_6_set;
        EvntDts_6.add_attribute("StartDt", "ComplexEventStartDate_t_887688923"); // 3
        EvntDts_6_set.insert("ComplexEventStartDate_t_887688923");
        EvntDts_6.add_attribute("EndDt", "ComplexEventEndDate_t_1865196420"); // 3
        EvntDts_6_set.insert("ComplexEventEndDate_t_1865196420");
        all_values.push_back(EvntDts_6_set);
        all_compo_names.insert("EvntDts_6_set");

        {
          xml_element EvntTms_6{"EvntTms"};
          multiset<string> EvntTms_6_set;
          EvntTms_6.add_attribute("StartTm", "647235461"); // 4
          EvntTms_6_set.insert("647235461");
          EvntTms_6.add_attribute("EndTm", "1018230371"); // 4
          EvntTms_6_set.insert("1018230371");
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
    FinDetls_3.add_attribute("AgmtDesc", "AgreementDesc_t_584563832"); // 1
    FinDetls_3_set.insert("AgreementDesc_t_584563832");
    FinDetls_3.add_attribute("AgmtID", "AgreementID_t_400799901"); // 1
    FinDetls_3_set.insert("AgreementID_t_400799901");
    FinDetls_3.add_attribute("AgmtDt", "AgreementDate_t_862384211"); // 1
    FinDetls_3_set.insert("AgreementDate_t_862384211");
    FinDetls_3.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_3_set.insert("EUR");
    FinDetls_3.add_attribute("TrmTyp", "4"); // 1
    FinDetls_3_set.insert("4");
    FinDetls_3.add_attribute("StartDt", "StartDate_t_1790265849"); // 1
    FinDetls_3_set.insert("StartDate_t_1790265849");
    FinDetls_3.add_attribute("EndDt", "EndDate_t_69418865"); // 1
    FinDetls_3_set.insert("EndDate_t_69418865");
    FinDetls_3.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_3_set.insert("1");
    FinDetls_3.add_attribute("MgnRatio", "13572100.340000"); // 1
    FinDetls_3_set.insert("13572100.340000");
    all_values.push_back(FinDetls_3_set);
    all_compo_names.insert("FinDetls_3_set");

    elt.add_element(FinDetls_3);
  } // end FinDetls
  { // Leg
    xml_element Leg_10{"Leg"};
    multiset<string> Leg_10_set;
    Leg_10.add_attribute("Sym", "LegSymbol_t_442446679"); // 1
    Leg_10_set.insert("LegSymbol_t_442446679");
    Leg_10.add_attribute("Sfx", "WI"); // 1
    Leg_10_set.insert("WI");
    Leg_10.add_attribute("ID", "LegSecurityID_t_1219007876"); // 1
    Leg_10_set.insert("LegSecurityID_t_1219007876");
    Leg_10.add_attribute("Src", "5"); // 1
    Leg_10_set.insert("5");
    Leg_10.add_attribute("Prod", "7"); // 1
    Leg_10_set.insert("7");
    Leg_10.add_attribute("CFI", "LegCFICode_t_1530508897"); // 1
    Leg_10_set.insert("LegCFICode_t_1530508897");
    Leg_10.add_attribute("SecTyp", "RVLV"); // 1
    Leg_10_set.insert("RVLV");
    Leg_10.add_attribute("SecSubTyp", "LegSecuritySubType_t_1630398552"); // 1
    Leg_10_set.insert("LegSecuritySubType_t_1630398552");
    Leg_10.add_attribute("MMY", "1278090448"); // 1
    Leg_10_set.insert("1278090448");
    Leg_10.add_attribute("Mat", "LegMaturityDate_t_88285586"); // 1
    Leg_10_set.insert("LegMaturityDate_t_88285586");
    Leg_10.add_attribute("MatTm", "803252370"); // 1
    Leg_10_set.insert("803252370");
    Leg_10.add_attribute("CpnPmt", "LegCouponPaymentDate_t_75199496"); // 1
    Leg_10_set.insert("LegCouponPaymentDate_t_75199496");
    Leg_10.add_attribute("Issued", "LegIssueDate_t_1915937469"); // 1
    Leg_10_set.insert("LegIssueDate_t_1915937469");
    Leg_10.add_attribute("RepoCollSecTyp", "88816425"); // 1
    Leg_10_set.insert("88816425");
    Leg_10.add_attribute("RepoTrm", "1095270132"); // 1
    Leg_10_set.insert("1095270132");
    Leg_10.add_attribute("RepoRt", "16682661.270000"); // 1
    Leg_10_set.insert("16682661.270000");
    Leg_10.add_attribute("Fctr", "9765053.480000"); // 1
    Leg_10_set.insert("9765053.480000");
    Leg_10.add_attribute("CrdRtg", "LegCreditRating_t_812982905"); // 1
    Leg_10_set.insert("LegCreditRating_t_812982905");
    Leg_10.add_attribute("Rgstry", "LegInstrRegistry_t_168017940"); // 1
    Leg_10_set.insert("LegInstrRegistry_t_168017940");
    Leg_10.add_attribute("Ctry", "1994735719"); // 1
    Leg_10_set.insert("1994735719");
    Leg_10.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1397546737"); // 1
    Leg_10_set.insert("LegStateOrProvinceOfIssue_t_1397546737");
    Leg_10.add_attribute("Lcl", "LegLocaleOfIssue_t_568817841"); // 1
    Leg_10_set.insert("LegLocaleOfIssue_t_568817841");
    Leg_10.add_attribute("Redeem", "LegRedemptionDate_t_709636282"); // 1
    Leg_10_set.insert("LegRedemptionDate_t_709636282");
    Leg_10.add_attribute("Strk", "2397391.850000"); // 1
    Leg_10_set.insert("2397391.850000");
    Leg_10.add_attribute("StrkCcy", "CHF"); // 1
    Leg_10_set.insert("CHF");
    Leg_10.add_attribute("OptA", "2030005034"); // 1
    Leg_10_set.insert("2030005034");
    Leg_10.add_attribute("Cmult", "423873.980000"); // 1
    Leg_10_set.insert("423873.980000");
    Leg_10.add_attribute("MultTyp", "2"); // 1
    Leg_10_set.insert("2");
    Leg_10.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_10_set.insert("0");
    Leg_10.add_attribute("UOM", "tn"); // 1
    Leg_10_set.insert("tn");
    Leg_10.add_attribute("UOMQty", "16490651.820000"); // 1
    Leg_10_set.insert("16490651.820000");
    Leg_10.add_attribute("PxUOM", "tn"); // 1
    Leg_10_set.insert("tn");
    Leg_10.add_attribute("PxUOMQty", "8313941.760000"); // 1
    Leg_10_set.insert("8313941.760000");
    Leg_10.add_attribute("TmUnit", "D"); // 1
    Leg_10_set.insert("D");
    Leg_10.add_attribute("ExerStyle", "2"); // 1
    Leg_10_set.insert("2");
    Leg_10.add_attribute("CpnRt", "2144194.250000"); // 1
    Leg_10_set.insert("2144194.250000");
    Leg_10.add_attribute("Exch", "LegSecurityExchange_t_1803930957"); // 1
    Leg_10_set.insert("LegSecurityExchange_t_1803930957");
    Leg_10.add_attribute("Issr", "LegIssuer_t_1936093073"); // 1
    Leg_10_set.insert("LegIssuer_t_1936093073");
    Leg_10.add_attribute("EncLegIssrLen", "1492509873"); // 1
    Leg_10_set.insert("1492509873");
    Leg_10.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1892216543"); // 1
    Leg_10_set.insert("EncodedLegIssuer_t_1892216543");
    Leg_10.add_attribute("Desc", "LegSecurityDesc_t_591861795"); // 1
    Leg_10_set.insert("LegSecurityDesc_t_591861795");
    Leg_10.add_attribute("EncLegSecDescLen", "1567709370"); // 1
    Leg_10_set.insert("1567709370");
    Leg_10.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1660670364"); // 1
    Leg_10_set.insert("EncodedLegSecurityDesc_t_1660670364");
    Leg_10.add_attribute("RatioQty", "6806782.200000"); // 1
    Leg_10_set.insert("6806782.200000");
    Leg_10.add_attribute("Side", "F"); // 1
    Leg_10_set.insert("F");
    Leg_10.add_attribute("Ccy", "GBP"); // 1
    Leg_10_set.insert("GBP");
    Leg_10.add_attribute("Pool", "LegPool_t_1328478759"); // 1
    Leg_10_set.insert("LegPool_t_1328478759");
    Leg_10.add_attribute("Dated", "LegDatedDate_t_1349470784"); // 1
    Leg_10_set.insert("LegDatedDate_t_1349470784");
    Leg_10.add_attribute("CSetMo", "1504435639"); // 1
    Leg_10_set.insert("1504435639");
    Leg_10.add_attribute("IntAcrl", "LegInterestAccrualDate_t_578541848"); // 1
    Leg_10_set.insert("LegInterestAccrualDate_t_578541848");
    Leg_10.add_attribute("PutCall", "1918288626"); // 1
    Leg_10_set.insert("1918288626");
    Leg_10.add_attribute("LegOptionRatio", "665882.730000"); // 1
    Leg_10_set.insert("665882.730000");
    Leg_10.add_attribute("Px", "8182810.330000"); // 1
    Leg_10_set.insert("8182810.330000");
    all_values.push_back(Leg_10_set);
    all_compo_names.insert("Leg_10_set");

    {
      xml_element LegAID_10{"LegAID"};
      multiset<string> LegAID_10_set;
      LegAID_10.add_attribute("SecAltID", "LegSecurityAltID_t_1891257158"); // 2
      LegAID_10_set.insert("LegSecurityAltID_t_1891257158");
      LegAID_10.add_attribute("SecAltIDSrc", "B"); // 2
      LegAID_10_set.insert("B");
      all_values.push_back(LegAID_10_set);
      all_compo_names.insert("LegAID_10_set");

      Leg_10.add_element(LegAID_10);
    }
    elt.add_element(Leg_10);
  } // end Leg
  { // Leg
    xml_element Leg_11{"Leg"};
    multiset<string> Leg_11_set;
    Leg_11.add_attribute("Sym", "LegSymbol_t_700802420"); // 1
    Leg_11_set.insert("LegSymbol_t_700802420");
    Leg_11.add_attribute("Sfx", "CD"); // 1
    Leg_11_set.insert("CD");
    Leg_11.add_attribute("ID", "LegSecurityID_t_2068650101"); // 1
    Leg_11_set.insert("LegSecurityID_t_2068650101");
    Leg_11.add_attribute("Src", "F"); // 1
    Leg_11_set.insert("F");
    Leg_11.add_attribute("Prod", "3"); // 1
    Leg_11_set.insert("3");
    Leg_11.add_attribute("CFI", "LegCFICode_t_1570231635"); // 1
    Leg_11_set.insert("LegCFICode_t_1570231635");
    Leg_11.add_attribute("SecTyp", "SECPLEDGE"); // 1
    Leg_11_set.insert("SECPLEDGE");
    Leg_11.add_attribute("SecSubTyp", "LegSecuritySubType_t_229941384"); // 1
    Leg_11_set.insert("LegSecuritySubType_t_229941384");
    Leg_11.add_attribute("MMY", "718739505"); // 1
    Leg_11_set.insert("718739505");
    Leg_11.add_attribute("Mat", "LegMaturityDate_t_263399377"); // 1
    Leg_11_set.insert("LegMaturityDate_t_263399377");
    Leg_11.add_attribute("MatTm", "444360809"); // 1
    Leg_11_set.insert("444360809");
    Leg_11.add_attribute("CpnPmt", "LegCouponPaymentDate_t_375186814"); // 1
    Leg_11_set.insert("LegCouponPaymentDate_t_375186814");
    Leg_11.add_attribute("Issued", "LegIssueDate_t_52008802"); // 1
    Leg_11_set.insert("LegIssueDate_t_52008802");
    Leg_11.add_attribute("RepoCollSecTyp", "1936870683"); // 1
    Leg_11_set.insert("1936870683");
    Leg_11.add_attribute("RepoTrm", "119919710"); // 1
    Leg_11_set.insert("119919710");
    Leg_11.add_attribute("RepoRt", "6438705.970000"); // 1
    Leg_11_set.insert("6438705.970000");
    Leg_11.add_attribute("Fctr", "13570964.050000"); // 1
    Leg_11_set.insert("13570964.050000");
    Leg_11.add_attribute("CrdRtg", "LegCreditRating_t_1780590074"); // 1
    Leg_11_set.insert("LegCreditRating_t_1780590074");
    Leg_11.add_attribute("Rgstry", "LegInstrRegistry_t_1324548817"); // 1
    Leg_11_set.insert("LegInstrRegistry_t_1324548817");
    Leg_11.add_attribute("Ctry", "1872592259"); // 1
    Leg_11_set.insert("1872592259");
    Leg_11.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_814559270"); // 1
    Leg_11_set.insert("LegStateOrProvinceOfIssue_t_814559270");
    Leg_11.add_attribute("Lcl", "LegLocaleOfIssue_t_834248737"); // 1
    Leg_11_set.insert("LegLocaleOfIssue_t_834248737");
    Leg_11.add_attribute("Redeem", "LegRedemptionDate_t_1053587371"); // 1
    Leg_11_set.insert("LegRedemptionDate_t_1053587371");
    Leg_11.add_attribute("Strk", "165464.070000"); // 1
    Leg_11_set.insert("165464.070000");
    Leg_11.add_attribute("StrkCcy", "CHF"); // 1
    Leg_11_set.insert("CHF");
    Leg_11.add_attribute("OptA", "1934835033"); // 1
    Leg_11_set.insert("1934835033");
    Leg_11.add_attribute("Cmult", "2577890.010000"); // 1
    Leg_11_set.insert("2577890.010000");
    Leg_11.add_attribute("MultTyp", "0"); // 1
    Leg_11_set.insert("0");
    Leg_11.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_11_set.insert("3");
    Leg_11.add_attribute("UOM", "Bbl"); // 1
    Leg_11_set.insert("Bbl");
    Leg_11.add_attribute("UOMQty", "10037290.250000"); // 1
    Leg_11_set.insert("10037290.250000");
    Leg_11.add_attribute("PxUOM", "Gal"); // 1
    Leg_11_set.insert("Gal");
    Leg_11.add_attribute("PxUOMQty", "10409870.530000"); // 1
    Leg_11_set.insert("10409870.530000");
    Leg_11.add_attribute("TmUnit", "D"); // 1
    Leg_11_set.insert("D");
    Leg_11.add_attribute("ExerStyle", "0"); // 1
    Leg_11_set.insert("0");
    Leg_11.add_attribute("CpnRt", "4637350.410000"); // 1
    Leg_11_set.insert("4637350.410000");
    Leg_11.add_attribute("Exch", "LegSecurityExchange_t_754484074"); // 1
    Leg_11_set.insert("LegSecurityExchange_t_754484074");
    Leg_11.add_attribute("Issr", "LegIssuer_t_1093258045"); // 1
    Leg_11_set.insert("LegIssuer_t_1093258045");
    Leg_11.add_attribute("EncLegIssrLen", "1182474546"); // 1
    Leg_11_set.insert("1182474546");
    Leg_11.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1017883451"); // 1
    Leg_11_set.insert("EncodedLegIssuer_t_1017883451");
    Leg_11.add_attribute("Desc", "LegSecurityDesc_t_1537618854"); // 1
    Leg_11_set.insert("LegSecurityDesc_t_1537618854");
    Leg_11.add_attribute("EncLegSecDescLen", "1557661361"); // 1
    Leg_11_set.insert("1557661361");
    Leg_11.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1069892254"); // 1
    Leg_11_set.insert("EncodedLegSecurityDesc_t_1069892254");
    Leg_11.add_attribute("RatioQty", "13270058.890000"); // 1
    Leg_11_set.insert("13270058.890000");
    Leg_11.add_attribute("Side", "G"); // 1
    Leg_11_set.insert("G");
    Leg_11.add_attribute("Ccy", "USD"); // 1
    Leg_11_set.insert("USD");
    Leg_11.add_attribute("Pool", "LegPool_t_1310687497"); // 1
    Leg_11_set.insert("LegPool_t_1310687497");
    Leg_11.add_attribute("Dated", "LegDatedDate_t_890828021"); // 1
    Leg_11_set.insert("LegDatedDate_t_890828021");
    Leg_11.add_attribute("CSetMo", "261727258"); // 1
    Leg_11_set.insert("261727258");
    Leg_11.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2125246768"); // 1
    Leg_11_set.insert("LegInterestAccrualDate_t_2125246768");
    Leg_11.add_attribute("PutCall", "1725076758"); // 1
    Leg_11_set.insert("1725076758");
    Leg_11.add_attribute("LegOptionRatio", "13153146.290000"); // 1
    Leg_11_set.insert("13153146.290000");
    Leg_11.add_attribute("Px", "21417931.750000"); // 1
    Leg_11_set.insert("21417931.750000");
    all_values.push_back(Leg_11_set);
    all_compo_names.insert("Leg_11_set");

    {
      xml_element LegAID_11{"LegAID"};
      multiset<string> LegAID_11_set;
      LegAID_11.add_attribute("SecAltID", "LegSecurityAltID_t_1916277487"); // 2
      LegAID_11_set.insert("LegSecurityAltID_t_1916277487");
      LegAID_11.add_attribute("SecAltIDSrc", "7"); // 2
      LegAID_11_set.insert("7");
      all_values.push_back(LegAID_11_set);
      all_compo_names.insert("LegAID_11_set");

      Leg_11.add_element(LegAID_11);
    }
    elt.add_element(Leg_11);
  } // end Leg
  { // UndColl
    xml_element UndColl_0{"UndColl"};
    multiset<string> UndColl_0_set;
    UndColl_0.add_attribute("Actn", "2"); // 1
    UndColl_0_set.insert("2");
    all_values.push_back(UndColl_0_set);
    all_compo_names.insert("UndColl_0_set");

    {
      xml_element Undly_9{"Undly"};
      multiset<string> Undly_9_set;
      Undly_9.add_attribute("Sym", "UnderlyingSymbol_t_1102886805"); // 2
      Undly_9_set.insert("UnderlyingSymbol_t_1102886805");
      Undly_9.add_attribute("Sfx", "WI"); // 2
      Undly_9_set.insert("WI");
      Undly_9.add_attribute("ID", "UnderlyingSecurityID_t_1146403440"); // 2
      Undly_9_set.insert("UnderlyingSecurityID_t_1146403440");
      Undly_9.add_attribute("Src", "1"); // 2
      Undly_9_set.insert("1");
      Undly_9.add_attribute("Prod", "1"); // 2
      Undly_9_set.insert("1");
      Undly_9.add_attribute("CFI", "UnderlyingCFICode_t_39906846"); // 2
      Undly_9_set.insert("UnderlyingCFICode_t_39906846");
      Undly_9.add_attribute("SecTyp", "OOP"); // 2
      Undly_9_set.insert("OOP");
      Undly_9.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1640871920"); // 2
      Undly_9_set.insert("UnderlyingSecuritySubType_t_1640871920");
      Undly_9.add_attribute("MMY", "503641887"); // 2
      Undly_9_set.insert("503641887");
      Undly_9.add_attribute("Mat", "UnderlyingMaturityDate_t_1510395474"); // 2
      Undly_9_set.insert("UnderlyingMaturityDate_t_1510395474");
      Undly_9.add_attribute("MatTm", "586646317"); // 2
      Undly_9_set.insert("586646317");
      Undly_9.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1686116433"); // 2
      Undly_9_set.insert("UnderlyingCouponPaymentDate_t_1686116433");
      Undly_9.add_attribute("RestrctTyp", "MR"); // 2
      Undly_9_set.insert("MR");
      Undly_9.add_attribute("Snrty", "SR"); // 2
      Undly_9_set.insert("SR");
      Undly_9.add_attribute("NotlPctOut", "10962941.460000"); // 2
      Undly_9_set.insert("10962941.460000");
      Undly_9.add_attribute("OrigNotlPctOut", "14506875.310000"); // 2
      Undly_9_set.insert("14506875.310000");
      Undly_9.add_attribute("AttchPnt", "13037874.130000"); // 2
      Undly_9_set.insert("13037874.130000");
      Undly_9.add_attribute("DetchPnt", "6263915.690000"); // 2
      Undly_9_set.insert("6263915.690000");
      Undly_9.add_attribute("Issued", "UnderlyingIssueDate_t_1016966735"); // 2
      Undly_9_set.insert("UnderlyingIssueDate_t_1016966735");
      Undly_9.add_attribute("RepoCollSecTyp", "1840406059"); // 2
      Undly_9_set.insert("1840406059");
      Undly_9.add_attribute("RepoTrm", "1937079067"); // 2
      Undly_9_set.insert("1937079067");
      Undly_9.add_attribute("RepoRt", "19077947.560000"); // 2
      Undly_9_set.insert("19077947.560000");
      Undly_9.add_attribute("Fctr", "21021333.170000"); // 2
      Undly_9_set.insert("21021333.170000");
      Undly_9.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1914842187"); // 2
      Undly_9_set.insert("UnderlyingCreditRating_t_1914842187");
      Undly_9.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1485387866"); // 2
      Undly_9_set.insert("UnderlyingInstrRegistry_t_1485387866");
      Undly_9.add_attribute("Ctry", "1269964298"); // 2
      Undly_9_set.insert("1269964298");
      Undly_9.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1909151714"); // 2
      Undly_9_set.insert("UnderlyingStateOrProvinceOfIssue_t_1909151714");
      Undly_9.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1254181705"); // 2
      Undly_9_set.insert("UnderlyingLocaleOfIssue_t_1254181705");
      Undly_9.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2069924499"); // 2
      Undly_9_set.insert("UnderlyingRedemptionDate_t_2069924499");
      Undly_9.add_attribute("StrkPx", "16908126.260000"); // 2
      Undly_9_set.insert("16908126.260000");
      Undly_9.add_attribute("StrkCcy", "JPY"); // 2
      Undly_9_set.insert("JPY");
      Undly_9.add_attribute("OptA", "1003598433"); // 2
      Undly_9_set.insert("1003598433");
      Undly_9.add_attribute("Mult", "2796843.380000"); // 2
      Undly_9_set.insert("2796843.380000");
      Undly_9.add_attribute("MultTyp", "2"); // 2
      Undly_9_set.insert("2");
      Undly_9.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_9_set.insert("3");
      Undly_9.add_attribute("UOM", "Gal"); // 2
      Undly_9_set.insert("Gal");
      Undly_9.add_attribute("UOMQty", "17403712.390000"); // 2
      Undly_9_set.insert("17403712.390000");
      Undly_9.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_9_set.insert("oz_tr");
      Undly_9.add_attribute("PxUOMQty", "8232330.710000"); // 2
      Undly_9_set.insert("8232330.710000");
      Undly_9.add_attribute("TmUnit", "D"); // 2
      Undly_9_set.insert("D");
      Undly_9.add_attribute("ExerStyle", "0"); // 2
      Undly_9_set.insert("0");
      Undly_9.add_attribute("CpnRt", "3618658.570000"); // 2
      Undly_9_set.insert("3618658.570000");
      Undly_9.add_attribute("Exch", "UnderlyingSecurityExchange_t_1484078342"); // 2
      Undly_9_set.insert("UnderlyingSecurityExchange_t_1484078342");
      Undly_9.add_attribute("Issr", "UnderlyingIssuer_t_1837969805"); // 2
      Undly_9_set.insert("UnderlyingIssuer_t_1837969805");
      Undly_9.add_attribute("EncUndIssrLen", "1458160003"); // 2
      Undly_9_set.insert("1458160003");
      Undly_9.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_787282226"); // 2
      Undly_9_set.insert("EncodedUnderlyingIssuer_t_787282226");
      Undly_9.add_attribute("Desc", "UnderlyingSecurityDesc_t_994273570"); // 2
      Undly_9_set.insert("UnderlyingSecurityDesc_t_994273570");
      Undly_9.add_attribute("EncUndSecDescLen", "2084551573"); // 2
      Undly_9_set.insert("2084551573");
      Undly_9.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1804248961"); // 2
      Undly_9_set.insert("EncodedUnderlyingSecurityDesc_t_1804248961");
      Undly_9.add_attribute("CPPgm", "UnderlyingCPProgram_t_687195982"); // 2
      Undly_9_set.insert("UnderlyingCPProgram_t_687195982");
      Undly_9.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1874146992"); // 2
      Undly_9_set.insert("UnderlyingCPRegType_t_1874146992");
      Undly_9.add_attribute("AllocPct", "15645600.690000"); // 2
      Undly_9_set.insert("15645600.690000");
      Undly_9.add_attribute("Ccy", "EUR"); // 2
      Undly_9_set.insert("EUR");
      Undly_9.add_attribute("Qty", "9024642.870000"); // 2
      Undly_9_set.insert("9024642.870000");
      Undly_9.add_attribute("SettlTyp", "4"); // 2
      Undly_9_set.insert("4");
      Undly_9.add_attribute("CashAmt", "UnderlyingCashAmount_t_1403173597"); // 2
      Undly_9_set.insert("UnderlyingCashAmount_t_1403173597");
      Undly_9.add_attribute("CashTyp", "DIFF"); // 2
      Undly_9_set.insert("DIFF");
      Undly_9.add_attribute("Px", "18342508.010000"); // 2
      Undly_9_set.insert("18342508.010000");
      Undly_9.add_attribute("DirtPx", "9465025.750000"); // 2
      Undly_9_set.insert("9465025.750000");
      Undly_9.add_attribute("EndPx", "12899268.910000"); // 2
      Undly_9_set.insert("12899268.910000");
      Undly_9.add_attribute("StartVal", "UnderlyingStartValue_t_712094809"); // 2
      Undly_9_set.insert("UnderlyingStartValue_t_712094809");
      Undly_9.add_attribute("CurVal", "UnderlyingCurrentValue_t_1950101008"); // 2
      Undly_9_set.insert("UnderlyingCurrentValue_t_1950101008");
      Undly_9.add_attribute("EndVal", "UnderlyingEndValue_t_1569611229"); // 2
      Undly_9_set.insert("UnderlyingEndValue_t_1569611229");
      Undly_9.add_attribute("AdjQty", "16965546.480000"); // 2
      Undly_9_set.insert("16965546.480000");
      Undly_9.add_attribute("FxRate", "15837710.530000"); // 2
      Undly_9_set.insert("15837710.530000");
      Undly_9.add_attribute("FxRateCalc", "M"); // 2
      Undly_9_set.insert("M");
      Undly_9.add_attribute("CapValu", "UnderlyingCapValue_t_1289442239"); // 2
      Undly_9_set.insert("UnderlyingCapValue_t_1289442239");
      Undly_9.add_attribute("SetMeth", "UnderlyingSettlMethod_t_710829370"); // 2
      Undly_9_set.insert("UnderlyingSettlMethod_t_710829370");
      Undly_9.add_attribute("PutCall", "564951837"); // 2
      Undly_9_set.insert("564951837");
      all_values.push_back(Undly_9_set);
      all_compo_names.insert("Undly_9_set");

      {
        xml_element UndAID_9{"UndAID"};
        multiset<string> UndAID_9_set;
        UndAID_9.add_attribute("AltID", "UnderlyingSecurityAltID_t_245241656"); // 3
        UndAID_9_set.insert("UnderlyingSecurityAltID_t_245241656");
        UndAID_9.add_attribute("AltIDSrc", "5"); // 3
        UndAID_9_set.insert("5");
        all_values.push_back(UndAID_9_set);
        all_compo_names.insert("UndAID_9_set");

        Undly_9.add_element(UndAID_9);
      }
      {
        xml_element Stip_15{"Stip"};
        multiset<string> Stip_15_set;
        Stip_15.add_attribute("Typ", "INSURED"); // 3
        Stip_15_set.insert("INSURED");
        Stip_15.add_attribute("Val", "UnderlyingStipValue_t_1729319999"); // 3
        Stip_15_set.insert("UnderlyingStipValue_t_1729319999");
        all_values.push_back(Stip_15_set);
        all_compo_names.insert("Stip_15_set");

        Undly_9.add_element(Stip_15);
      }
      {
        xml_element Pty_68{"Pty"};
        multiset<string> Pty_68_set;
        Pty_68.add_attribute("ID", "UnderlyingInstrumentPartyID_t_115020162"); // 3
        Pty_68_set.insert("UnderlyingInstrumentPartyID_t_115020162");
        Pty_68.add_attribute("Src", "H"); // 3
        Pty_68_set.insert("H");
        Pty_68.add_attribute("R", "67"); // 3
        Pty_68_set.insert("67");
        all_values.push_back(Pty_68_set);
        all_compo_names.insert("Pty_68_set");

        {
          xml_element Sub_68{"Sub"};
          multiset<string> Sub_68_set;
          Sub_68.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1109293732"); // 4
          Sub_68_set.insert("UnderlyingInstrumentPartySubID_t_1109293732");
          Sub_68.add_attribute("Typ", "28"); // 4
          Sub_68_set.insert("28");
          all_values.push_back(Sub_68_set);
          all_compo_names.insert("Sub_68_set");

          Pty_68.add_element(Sub_68);
        }
        Undly_9.add_element(Pty_68);
      }
      UndColl_0.add_element(Undly_9);
    }
    elt.add_element(UndColl_0);
  } // end UndColl
  { // UndColl
    xml_element UndColl_1{"UndColl"};
    multiset<string> UndColl_1_set;
    UndColl_1.add_attribute("Actn", "1"); // 1
    UndColl_1_set.insert("1");
    all_values.push_back(UndColl_1_set);
    all_compo_names.insert("UndColl_1_set");

    {
      xml_element Undly_10{"Undly"};
      multiset<string> Undly_10_set;
      Undly_10.add_attribute("Sym", "UnderlyingSymbol_t_1796489714"); // 2
      Undly_10_set.insert("UnderlyingSymbol_t_1796489714");
      Undly_10.add_attribute("Sfx", "WI"); // 2
      Undly_10_set.insert("WI");
      Undly_10.add_attribute("ID", "UnderlyingSecurityID_t_1590443959"); // 2
      Undly_10_set.insert("UnderlyingSecurityID_t_1590443959");
      Undly_10.add_attribute("Src", "F"); // 2
      Undly_10_set.insert("F");
      Undly_10.add_attribute("Prod", "8"); // 2
      Undly_10_set.insert("8");
      Undly_10.add_attribute("CFI", "UnderlyingCFICode_t_345424598"); // 2
      Undly_10_set.insert("UnderlyingCFICode_t_345424598");
      Undly_10.add_attribute("SecTyp", "MF"); // 2
      Undly_10_set.insert("MF");
      Undly_10.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_798420799"); // 2
      Undly_10_set.insert("UnderlyingSecuritySubType_t_798420799");
      Undly_10.add_attribute("MMY", "354586943"); // 2
      Undly_10_set.insert("354586943");
      Undly_10.add_attribute("Mat", "UnderlyingMaturityDate_t_1889428821"); // 2
      Undly_10_set.insert("UnderlyingMaturityDate_t_1889428821");
      Undly_10.add_attribute("MatTm", "1744923374"); // 2
      Undly_10_set.insert("1744923374");
      Undly_10.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1644513834"); // 2
      Undly_10_set.insert("UnderlyingCouponPaymentDate_t_1644513834");
      Undly_10.add_attribute("RestrctTyp", "MM"); // 2
      Undly_10_set.insert("MM");
      Undly_10.add_attribute("Snrty", "SR"); // 2
      Undly_10_set.insert("SR");
      Undly_10.add_attribute("NotlPctOut", "10666414.160000"); // 2
      Undly_10_set.insert("10666414.160000");
      Undly_10.add_attribute("OrigNotlPctOut", "31109.830000"); // 2
      Undly_10_set.insert("31109.830000");
      Undly_10.add_attribute("AttchPnt", "9838281.400000"); // 2
      Undly_10_set.insert("9838281.400000");
      Undly_10.add_attribute("DetchPnt", "8083601.820000"); // 2
      Undly_10_set.insert("8083601.820000");
      Undly_10.add_attribute("Issued", "UnderlyingIssueDate_t_1292553222"); // 2
      Undly_10_set.insert("UnderlyingIssueDate_t_1292553222");
      Undly_10.add_attribute("RepoCollSecTyp", "1694657510"); // 2
      Undly_10_set.insert("1694657510");
      Undly_10.add_attribute("RepoTrm", "1373312019"); // 2
      Undly_10_set.insert("1373312019");
      Undly_10.add_attribute("RepoRt", "15377948.790000"); // 2
      Undly_10_set.insert("15377948.790000");
      Undly_10.add_attribute("Fctr", "21191915.150000"); // 2
      Undly_10_set.insert("21191915.150000");
      Undly_10.add_attribute("CrdRtg", "UnderlyingCreditRating_t_152646066"); // 2
      Undly_10_set.insert("UnderlyingCreditRating_t_152646066");
      Undly_10.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1119631230"); // 2
      Undly_10_set.insert("UnderlyingInstrRegistry_t_1119631230");
      Undly_10.add_attribute("Ctry", "86728029"); // 2
      Undly_10_set.insert("86728029");
      Undly_10.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_390140116"); // 2
      Undly_10_set.insert("UnderlyingStateOrProvinceOfIssue_t_390140116");
      Undly_10.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1488749807"); // 2
      Undly_10_set.insert("UnderlyingLocaleOfIssue_t_1488749807");
      Undly_10.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1196021761"); // 2
      Undly_10_set.insert("UnderlyingRedemptionDate_t_1196021761");
      Undly_10.add_attribute("StrkPx", "5647020.910000"); // 2
      Undly_10_set.insert("5647020.910000");
      Undly_10.add_attribute("StrkCcy", "GBP"); // 2
      Undly_10_set.insert("GBP");
      Undly_10.add_attribute("OptA", "465927410"); // 2
      Undly_10_set.insert("465927410");
      Undly_10.add_attribute("Mult", "9575940.080000"); // 2
      Undly_10_set.insert("9575940.080000");
      Undly_10.add_attribute("MultTyp", "1"); // 2
      Undly_10_set.insert("1");
      Undly_10.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_10_set.insert("0");
      Undly_10.add_attribute("UOM", "MMbbl"); // 2
      Undly_10_set.insert("MMbbl");
      Undly_10.add_attribute("UOMQty", "11910575.660000"); // 2
      Undly_10_set.insert("11910575.660000");
      Undly_10.add_attribute("PxUOM", "lbs"); // 2
      Undly_10_set.insert("lbs");
      Undly_10.add_attribute("PxUOMQty", "16576055.500000"); // 2
      Undly_10_set.insert("16576055.500000");
      Undly_10.add_attribute("TmUnit", "Wk"); // 2
      Undly_10_set.insert("Wk");
      Undly_10.add_attribute("ExerStyle", "0"); // 2
      Undly_10_set.insert("0");
      Undly_10.add_attribute("CpnRt", "11546357.360000"); // 2
      Undly_10_set.insert("11546357.360000");
      Undly_10.add_attribute("Exch", "UnderlyingSecurityExchange_t_1387042721"); // 2
      Undly_10_set.insert("UnderlyingSecurityExchange_t_1387042721");
      Undly_10.add_attribute("Issr", "UnderlyingIssuer_t_1804575871"); // 2
      Undly_10_set.insert("UnderlyingIssuer_t_1804575871");
      Undly_10.add_attribute("EncUndIssrLen", "73793504"); // 2
      Undly_10_set.insert("73793504");
      Undly_10.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1390153704"); // 2
      Undly_10_set.insert("EncodedUnderlyingIssuer_t_1390153704");
      Undly_10.add_attribute("Desc", "UnderlyingSecurityDesc_t_640920363"); // 2
      Undly_10_set.insert("UnderlyingSecurityDesc_t_640920363");
      Undly_10.add_attribute("EncUndSecDescLen", "882153686"); // 2
      Undly_10_set.insert("882153686");
      Undly_10.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_535223279"); // 2
      Undly_10_set.insert("EncodedUnderlyingSecurityDesc_t_535223279");
      Undly_10.add_attribute("CPPgm", "UnderlyingCPProgram_t_188094226"); // 2
      Undly_10_set.insert("UnderlyingCPProgram_t_188094226");
      Undly_10.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_107982058"); // 2
      Undly_10_set.insert("UnderlyingCPRegType_t_107982058");
      Undly_10.add_attribute("AllocPct", "20730181.580000"); // 2
      Undly_10_set.insert("20730181.580000");
      Undly_10.add_attribute("Ccy", "JPY"); // 2
      Undly_10_set.insert("JPY");
      Undly_10.add_attribute("Qty", "10451657.400000"); // 2
      Undly_10_set.insert("10451657.400000");
      Undly_10.add_attribute("SettlTyp", "4"); // 2
      Undly_10_set.insert("4");
      Undly_10.add_attribute("CashAmt", "UnderlyingCashAmount_t_650768240"); // 2
      Undly_10_set.insert("UnderlyingCashAmount_t_650768240");
      Undly_10.add_attribute("CashTyp", "DIFF"); // 2
      Undly_10_set.insert("DIFF");
      Undly_10.add_attribute("Px", "14425518.830000"); // 2
      Undly_10_set.insert("14425518.830000");
      Undly_10.add_attribute("DirtPx", "12154703.310000"); // 2
      Undly_10_set.insert("12154703.310000");
      Undly_10.add_attribute("EndPx", "19010655.960000"); // 2
      Undly_10_set.insert("19010655.960000");
      Undly_10.add_attribute("StartVal", "UnderlyingStartValue_t_140096063"); // 2
      Undly_10_set.insert("UnderlyingStartValue_t_140096063");
      Undly_10.add_attribute("CurVal", "UnderlyingCurrentValue_t_1681397741"); // 2
      Undly_10_set.insert("UnderlyingCurrentValue_t_1681397741");
      Undly_10.add_attribute("EndVal", "UnderlyingEndValue_t_711175956"); // 2
      Undly_10_set.insert("UnderlyingEndValue_t_711175956");
      Undly_10.add_attribute("AdjQty", "12759756.090000"); // 2
      Undly_10_set.insert("12759756.090000");
      Undly_10.add_attribute("FxRate", "15425723.530000"); // 2
      Undly_10_set.insert("15425723.530000");
      Undly_10.add_attribute("FxRateCalc", "M"); // 2
      Undly_10_set.insert("M");
      Undly_10.add_attribute("CapValu", "UnderlyingCapValue_t_319549527"); // 2
      Undly_10_set.insert("UnderlyingCapValue_t_319549527");
      Undly_10.add_attribute("SetMeth", "UnderlyingSettlMethod_t_54684116"); // 2
      Undly_10_set.insert("UnderlyingSettlMethod_t_54684116");
      Undly_10.add_attribute("PutCall", "1524316464"); // 2
      Undly_10_set.insert("1524316464");
      all_values.push_back(Undly_10_set);
      all_compo_names.insert("Undly_10_set");

      {
        xml_element UndAID_10{"UndAID"};
        multiset<string> UndAID_10_set;
        UndAID_10.add_attribute("AltID", "UnderlyingSecurityAltID_t_1252552266"); // 3
        UndAID_10_set.insert("UnderlyingSecurityAltID_t_1252552266");
        UndAID_10.add_attribute("AltIDSrc", "M"); // 3
        UndAID_10_set.insert("M");
        all_values.push_back(UndAID_10_set);
        all_compo_names.insert("UndAID_10_set");

        Undly_10.add_element(UndAID_10);
      }
      {
        xml_element Stip_16{"Stip"};
        multiset<string> Stip_16_set;
        Stip_16.add_attribute("Typ", "MAXORDQTY"); // 3
        Stip_16_set.insert("MAXORDQTY");
        Stip_16.add_attribute("Val", "UnderlyingStipValue_t_492111340"); // 3
        Stip_16_set.insert("UnderlyingStipValue_t_492111340");
        all_values.push_back(Stip_16_set);
        all_compo_names.insert("Stip_16_set");

        Undly_10.add_element(Stip_16);
      }
      {
        xml_element Pty_69{"Pty"};
        multiset<string> Pty_69_set;
        Pty_69.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2116295124"); // 3
        Pty_69_set.insert("UnderlyingInstrumentPartyID_t_2116295124");
        Pty_69.add_attribute("Src", "G"); // 3
        Pty_69_set.insert("G");
        Pty_69.add_attribute("R", "25"); // 3
        Pty_69_set.insert("25");
        all_values.push_back(Pty_69_set);
        all_compo_names.insert("Pty_69_set");

        {
          xml_element Sub_69{"Sub"};
          multiset<string> Sub_69_set;
          Sub_69.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_609731840"); // 4
          Sub_69_set.insert("UnderlyingInstrumentPartySubID_t_609731840");
          Sub_69.add_attribute("Typ", "20"); // 4
          Sub_69_set.insert("20");
          all_values.push_back(Sub_69_set);
          all_compo_names.insert("Sub_69_set");

          Pty_69.add_element(Sub_69);
        }
        Undly_10.add_element(Pty_69);
      }
      UndColl_1.add_element(Undly_10);
    }
    elt.add_element(UndColl_1);
  } // end UndColl
  { // UndColl
    xml_element UndColl_2{"UndColl"};
    multiset<string> UndColl_2_set;
    UndColl_2.add_attribute("Actn", "1"); // 1
    UndColl_2_set.insert("1");
    all_values.push_back(UndColl_2_set);
    all_compo_names.insert("UndColl_2_set");

    {
      xml_element Undly_11{"Undly"};
      multiset<string> Undly_11_set;
      Undly_11.add_attribute("Sym", "UnderlyingSymbol_t_797826066"); // 2
      Undly_11_set.insert("UnderlyingSymbol_t_797826066");
      Undly_11.add_attribute("Sfx", "CD"); // 2
      Undly_11_set.insert("CD");
      Undly_11.add_attribute("ID", "UnderlyingSecurityID_t_195539185"); // 2
      Undly_11_set.insert("UnderlyingSecurityID_t_195539185");
      Undly_11.add_attribute("Src", "G"); // 2
      Undly_11_set.insert("G");
      Undly_11.add_attribute("Prod", "10"); // 2
      Undly_11_set.insert("10");
      Undly_11.add_attribute("CFI", "UnderlyingCFICode_t_1240704925"); // 2
      Undly_11_set.insert("UnderlyingCFICode_t_1240704925");
      Undly_11.add_attribute("SecTyp", "DUAL"); // 2
      Undly_11_set.insert("DUAL");
      Undly_11.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_359310518"); // 2
      Undly_11_set.insert("UnderlyingSecuritySubType_t_359310518");
      Undly_11.add_attribute("MMY", "1627136824"); // 2
      Undly_11_set.insert("1627136824");
      Undly_11.add_attribute("Mat", "UnderlyingMaturityDate_t_499226516"); // 2
      Undly_11_set.insert("UnderlyingMaturityDate_t_499226516");
      Undly_11.add_attribute("MatTm", "1574780849"); // 2
      Undly_11_set.insert("1574780849");
      Undly_11.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1380718772"); // 2
      Undly_11_set.insert("UnderlyingCouponPaymentDate_t_1380718772");
      Undly_11.add_attribute("RestrctTyp", "FR"); // 2
      Undly_11_set.insert("FR");
      Undly_11.add_attribute("Snrty", "SB"); // 2
      Undly_11_set.insert("SB");
      Undly_11.add_attribute("NotlPctOut", "20918947.280000"); // 2
      Undly_11_set.insert("20918947.280000");
      Undly_11.add_attribute("OrigNotlPctOut", "19152981.890000"); // 2
      Undly_11_set.insert("19152981.890000");
      Undly_11.add_attribute("AttchPnt", "5037836.470000"); // 2
      Undly_11_set.insert("5037836.470000");
      Undly_11.add_attribute("DetchPnt", "19586056.430000"); // 2
      Undly_11_set.insert("19586056.430000");
      Undly_11.add_attribute("Issued", "UnderlyingIssueDate_t_87364069"); // 2
      Undly_11_set.insert("UnderlyingIssueDate_t_87364069");
      Undly_11.add_attribute("RepoCollSecTyp", "558467763"); // 2
      Undly_11_set.insert("558467763");
      Undly_11.add_attribute("RepoTrm", "1335438459"); // 2
      Undly_11_set.insert("1335438459");
      Undly_11.add_attribute("RepoRt", "13399163.350000"); // 2
      Undly_11_set.insert("13399163.350000");
      Undly_11.add_attribute("Fctr", "8701870.160000"); // 2
      Undly_11_set.insert("8701870.160000");
      Undly_11.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1866907012"); // 2
      Undly_11_set.insert("UnderlyingCreditRating_t_1866907012");
      Undly_11.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1832027675"); // 2
      Undly_11_set.insert("UnderlyingInstrRegistry_t_1832027675");
      Undly_11.add_attribute("Ctry", "838998492"); // 2
      Undly_11_set.insert("838998492");
      Undly_11.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_324685422"); // 2
      Undly_11_set.insert("UnderlyingStateOrProvinceOfIssue_t_324685422");
      Undly_11.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1566809072"); // 2
      Undly_11_set.insert("UnderlyingLocaleOfIssue_t_1566809072");
      Undly_11.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1448730332"); // 2
      Undly_11_set.insert("UnderlyingRedemptionDate_t_1448730332");
      Undly_11.add_attribute("StrkPx", "18121011.660000"); // 2
      Undly_11_set.insert("18121011.660000");
      Undly_11.add_attribute("StrkCcy", "USD"); // 2
      Undly_11_set.insert("USD");
      Undly_11.add_attribute("OptA", "1260015320"); // 2
      Undly_11_set.insert("1260015320");
      Undly_11.add_attribute("Mult", "20323529.330000"); // 2
      Undly_11_set.insert("20323529.330000");
      Undly_11.add_attribute("MultTyp", "1"); // 2
      Undly_11_set.insert("1");
      Undly_11.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_11_set.insert("3");
      Undly_11.add_attribute("UOM", "lbs"); // 2
      Undly_11_set.insert("lbs");
      Undly_11.add_attribute("UOMQty", "1133755.420000"); // 2
      Undly_11_set.insert("1133755.420000");
      Undly_11.add_attribute("PxUOM", "Gal"); // 2
      Undly_11_set.insert("Gal");
      Undly_11.add_attribute("PxUOMQty", "6052273.870000"); // 2
      Undly_11_set.insert("6052273.870000");
      Undly_11.add_attribute("TmUnit", "Yr"); // 2
      Undly_11_set.insert("Yr");
      Undly_11.add_attribute("ExerStyle", "1"); // 2
      Undly_11_set.insert("1");
      Undly_11.add_attribute("CpnRt", "19859461.590000"); // 2
      Undly_11_set.insert("19859461.590000");
      Undly_11.add_attribute("Exch", "UnderlyingSecurityExchange_t_1251924639"); // 2
      Undly_11_set.insert("UnderlyingSecurityExchange_t_1251924639");
      Undly_11.add_attribute("Issr", "UnderlyingIssuer_t_1863860259"); // 2
      Undly_11_set.insert("UnderlyingIssuer_t_1863860259");
      Undly_11.add_attribute("EncUndIssrLen", "1930357240"); // 2
      Undly_11_set.insert("1930357240");
      Undly_11.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1019739180"); // 2
      Undly_11_set.insert("EncodedUnderlyingIssuer_t_1019739180");
      Undly_11.add_attribute("Desc", "UnderlyingSecurityDesc_t_220160258"); // 2
      Undly_11_set.insert("UnderlyingSecurityDesc_t_220160258");
      Undly_11.add_attribute("EncUndSecDescLen", "1741479235"); // 2
      Undly_11_set.insert("1741479235");
      Undly_11.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1107103249"); // 2
      Undly_11_set.insert("EncodedUnderlyingSecurityDesc_t_1107103249");
      Undly_11.add_attribute("CPPgm", "UnderlyingCPProgram_t_778628021"); // 2
      Undly_11_set.insert("UnderlyingCPProgram_t_778628021");
      Undly_11.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_929434046"); // 2
      Undly_11_set.insert("UnderlyingCPRegType_t_929434046");
      Undly_11.add_attribute("AllocPct", "2995359.370000"); // 2
      Undly_11_set.insert("2995359.370000");
      Undly_11.add_attribute("Ccy", "CAN"); // 2
      Undly_11_set.insert("CAN");
      Undly_11.add_attribute("Qty", "21315636.120000"); // 2
      Undly_11_set.insert("21315636.120000");
      Undly_11.add_attribute("SettlTyp", "5"); // 2
      Undly_11_set.insert("5");
      Undly_11.add_attribute("CashAmt", "UnderlyingCashAmount_t_973542833"); // 2
      Undly_11_set.insert("UnderlyingCashAmount_t_973542833");
      Undly_11.add_attribute("CashTyp", "FIXED"); // 2
      Undly_11_set.insert("FIXED");
      Undly_11.add_attribute("Px", "17890602.140000"); // 2
      Undly_11_set.insert("17890602.140000");
      Undly_11.add_attribute("DirtPx", "6381603.510000"); // 2
      Undly_11_set.insert("6381603.510000");
      Undly_11.add_attribute("EndPx", "12402191.360000"); // 2
      Undly_11_set.insert("12402191.360000");
      Undly_11.add_attribute("StartVal", "UnderlyingStartValue_t_1888132964"); // 2
      Undly_11_set.insert("UnderlyingStartValue_t_1888132964");
      Undly_11.add_attribute("CurVal", "UnderlyingCurrentValue_t_1898175671"); // 2
      Undly_11_set.insert("UnderlyingCurrentValue_t_1898175671");
      Undly_11.add_attribute("EndVal", "UnderlyingEndValue_t_1125088421"); // 2
      Undly_11_set.insert("UnderlyingEndValue_t_1125088421");
      Undly_11.add_attribute("AdjQty", "7973502.260000"); // 2
      Undly_11_set.insert("7973502.260000");
      Undly_11.add_attribute("FxRate", "7192496.210000"); // 2
      Undly_11_set.insert("7192496.210000");
      Undly_11.add_attribute("FxRateCalc", "D"); // 2
      Undly_11_set.insert("D");
      Undly_11.add_attribute("CapValu", "UnderlyingCapValue_t_910725768"); // 2
      Undly_11_set.insert("UnderlyingCapValue_t_910725768");
      Undly_11.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2047117737"); // 2
      Undly_11_set.insert("UnderlyingSettlMethod_t_2047117737");
      Undly_11.add_attribute("PutCall", "708406370"); // 2
      Undly_11_set.insert("708406370");
      all_values.push_back(Undly_11_set);
      all_compo_names.insert("Undly_11_set");

      {
        xml_element UndAID_11{"UndAID"};
        multiset<string> UndAID_11_set;
        UndAID_11.add_attribute("AltID", "UnderlyingSecurityAltID_t_1523327827"); // 3
        UndAID_11_set.insert("UnderlyingSecurityAltID_t_1523327827");
        UndAID_11.add_attribute("AltIDSrc", "9"); // 3
        UndAID_11_set.insert("9");
        all_values.push_back(UndAID_11_set);
        all_compo_names.insert("UndAID_11_set");

        Undly_11.add_element(UndAID_11);
      }
      {
        xml_element Stip_17{"Stip"};
        multiset<string> Stip_17_set;
        Stip_17.add_attribute("Typ", "AUTOREINV"); // 3
        Stip_17_set.insert("AUTOREINV");
        Stip_17.add_attribute("Val", "UnderlyingStipValue_t_627768818"); // 3
        Stip_17_set.insert("UnderlyingStipValue_t_627768818");
        all_values.push_back(Stip_17_set);
        all_compo_names.insert("Stip_17_set");

        Undly_11.add_element(Stip_17);
      }
      {
        xml_element Pty_70{"Pty"};
        multiset<string> Pty_70_set;
        Pty_70.add_attribute("ID", "UnderlyingInstrumentPartyID_t_371176017"); // 3
        Pty_70_set.insert("UnderlyingInstrumentPartyID_t_371176017");
        Pty_70.add_attribute("Src", "7"); // 3
        Pty_70_set.insert("7");
        Pty_70.add_attribute("R", "42"); // 3
        Pty_70_set.insert("42");
        all_values.push_back(Pty_70_set);
        all_compo_names.insert("Pty_70_set");

        {
          xml_element Sub_70{"Sub"};
          multiset<string> Sub_70_set;
          Sub_70.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_591336275"); // 4
          Sub_70_set.insert("UnderlyingInstrumentPartySubID_t_591336275");
          Sub_70.add_attribute("Typ", "16"); // 4
          Sub_70_set.insert("16");
          all_values.push_back(Sub_70_set);
          all_compo_names.insert("Sub_70_set");

          Pty_70.add_element(Sub_70);
        }
        Undly_11.add_element(Pty_70);
      }
      UndColl_2.add_element(Undly_11);
    }
    elt.add_element(UndColl_2);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_0{"TrdRegTS"};
    multiset<string> TrdRegTS_0_set;
    TrdRegTS_0.add_attribute("TS", "TrdRegTimestamp_t_1369964296"); // 1
    TrdRegTS_0_set.insert("TrdRegTimestamp_t_1369964296");
    TrdRegTS_0.add_attribute("Typ", "5"); // 1
    TrdRegTS_0_set.insert("5");
    TrdRegTS_0.add_attribute("Src", "TrdRegTimestampOrigin_t_906663537"); // 1
    TrdRegTS_0_set.insert("TrdRegTimestampOrigin_t_906663537");
    TrdRegTS_0.add_attribute("DskTyp", "PR"); // 1
    TrdRegTS_0_set.insert("PR");
    TrdRegTS_0.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_0_set.insert("1");
    TrdRegTS_0.add_attribute("DskOrdHndlInst", "MQT"); // 1
    TrdRegTS_0_set.insert("MQT");
    all_values.push_back(TrdRegTS_0_set);
    all_compo_names.insert("TrdRegTS_0_set");

    elt.add_element(TrdRegTS_0);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_1{"TrdRegTS"};
    multiset<string> TrdRegTS_1_set;
    TrdRegTS_1.add_attribute("TS", "TrdRegTimestamp_t_1211625566"); // 1
    TrdRegTS_1_set.insert("TrdRegTimestamp_t_1211625566");
    TrdRegTS_1.add_attribute("Typ", "6"); // 1
    TrdRegTS_1_set.insert("6");
    TrdRegTS_1.add_attribute("Src", "TrdRegTimestampOrigin_t_294148890"); // 1
    TrdRegTS_1_set.insert("TrdRegTimestampOrigin_t_294148890");
    TrdRegTS_1.add_attribute("DskTyp", "D"); // 1
    TrdRegTS_1_set.insert("D");
    TrdRegTS_1.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_1_set.insert("1");
    TrdRegTS_1.add_attribute("DskOrdHndlInst", "CNH"); // 1
    TrdRegTS_1_set.insert("CNH");
    all_values.push_back(TrdRegTS_1_set);
    all_compo_names.insert("TrdRegTS_1_set");

    elt.add_element(TrdRegTS_1);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_2{"TrdRegTS"};
    multiset<string> TrdRegTS_2_set;
    TrdRegTS_2.add_attribute("TS", "TrdRegTimestamp_t_593851449"); // 1
    TrdRegTS_2_set.insert("TrdRegTimestamp_t_593851449");
    TrdRegTS_2.add_attribute("Typ", "7"); // 1
    TrdRegTS_2_set.insert("7");
    TrdRegTS_2.add_attribute("Src", "TrdRegTimestampOrigin_t_511972799"); // 1
    TrdRegTS_2_set.insert("TrdRegTimestampOrigin_t_511972799");
    TrdRegTS_2.add_attribute("DskTyp", "PF"); // 1
    TrdRegTS_2_set.insert("PF");
    TrdRegTS_2.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_2_set.insert("1");
    TrdRegTS_2.add_attribute("DskOrdHndlInst", "IOC"); // 1
    TrdRegTS_2_set.insert("IOC");
    all_values.push_back(TrdRegTS_2_set);
    all_compo_names.insert("TrdRegTS_2_set");

    elt.add_element(TrdRegTS_2);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_8{"MiscFees"};
    multiset<string> MiscFees_8_set;
    MiscFees_8.add_attribute("Amt", "MiscFeeAmt_t_1335824787"); // 1
    MiscFees_8_set.insert("MiscFeeAmt_t_1335824787");
    MiscFees_8.add_attribute("Curr", "CAN"); // 1
    MiscFees_8_set.insert("CAN");
    MiscFees_8.add_attribute("Typ", "3"); // 1
    MiscFees_8_set.insert("3");
    MiscFees_8.add_attribute("Basis", "1"); // 1
    MiscFees_8_set.insert("1");
    all_values.push_back(MiscFees_8_set);
    all_compo_names.insert("MiscFees_8_set");

    elt.add_element(MiscFees_8);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_3{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_3_set;
    SprdBnchmkCurve_3.add_attribute("Spread", "1580567.930000"); // 1
    SprdBnchmkCurve_3_set.insert("1580567.930000");
    SprdBnchmkCurve_3.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_3_set.insert("CAN");
    SprdBnchmkCurve_3.add_attribute("Name", "Pfandbriefe"); // 1
    SprdBnchmkCurve_3_set.insert("Pfandbriefe");
    SprdBnchmkCurve_3.add_attribute("Point", "BenchmarkCurvePoint_t_805652837"); // 1
    SprdBnchmkCurve_3_set.insert("BenchmarkCurvePoint_t_805652837");
    SprdBnchmkCurve_3.add_attribute("Px", "21239075.700000"); // 1
    SprdBnchmkCurve_3_set.insert("21239075.700000");
    SprdBnchmkCurve_3.add_attribute("PxTyp", "2"); // 1
    SprdBnchmkCurve_3_set.insert("2");
    SprdBnchmkCurve_3.add_attribute("SecID", "BenchmarkSecurityID_t_28133485"); // 1
    SprdBnchmkCurve_3_set.insert("BenchmarkSecurityID_t_28133485");
    SprdBnchmkCurve_3.add_attribute("SecIDSrc", "B"); // 1
    SprdBnchmkCurve_3_set.insert("B");
    all_values.push_back(SprdBnchmkCurve_3_set);
    all_compo_names.insert("SprdBnchmkCurve_3_set");

    elt.add_element(SprdBnchmkCurve_3);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_18{"Stip"};
    multiset<string> Stip_18_set;
    Stip_18.add_attribute("Typ", "SUBSFREQ"); // 1
    Stip_18_set.insert("SUBSFREQ");
    Stip_18.add_attribute("Val", "StipulationValue_t_184141900"); // 1
    Stip_18_set.insert("StipulationValue_t_184141900");
    all_values.push_back(Stip_18_set);
    all_compo_names.insert("Stip_18_set");

    elt.add_element(Stip_18);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_8{"SetInstr"};
    multiset<string> SetInstr_8_set;
    SetInstr_8.add_attribute("DlvryTyp", "0"); // 1
    SetInstr_8_set.insert("0");
    SetInstr_8.add_attribute("StandInstDbTyp", "2"); // 1
    SetInstr_8_set.insert("2");
    SetInstr_8.add_attribute("StandInstDbName", "StandInstDbName_t_512230604"); // 1
    SetInstr_8_set.insert("StandInstDbName_t_512230604");
    SetInstr_8.add_attribute("StandInstDbID", "StandInstDbID_t_209281027"); // 1
    SetInstr_8_set.insert("StandInstDbID_t_209281027");
    all_values.push_back(SetInstr_8_set);
    all_compo_names.insert("SetInstr_8_set");

    {
      xml_element DlvInst_8{"DlvInst"};
      multiset<string> DlvInst_8_set;
      DlvInst_8.add_attribute("InstSrc", "2"); // 2
      DlvInst_8_set.insert("2");
      DlvInst_8.add_attribute("InstTyp", "C"); // 2
      DlvInst_8_set.insert("C");
      all_values.push_back(DlvInst_8_set);
      all_compo_names.insert("DlvInst_8_set");

      {
        xml_element Pty_71{"Pty"};
        multiset<string> Pty_71_set;
        Pty_71.add_attribute("ID", "SettlPartyID_t_1743649053"); // 3
        Pty_71_set.insert("SettlPartyID_t_1743649053");
        Pty_71.add_attribute("Src", "5"); // 3
        Pty_71_set.insert("5");
        Pty_71.add_attribute("R", "55"); // 3
        Pty_71_set.insert("55");
        all_values.push_back(Pty_71_set);
        all_compo_names.insert("Pty_71_set");

        {
          xml_element Sub_71{"Sub"};
          multiset<string> Sub_71_set;
          Sub_71.add_attribute("ID", "SettlPartySubID_t_108138205"); // 4
          Sub_71_set.insert("SettlPartySubID_t_108138205");
          Sub_71.add_attribute("Typ", "3"); // 4
          Sub_71_set.insert("3");
          all_values.push_back(Sub_71_set);
          all_compo_names.insert("Sub_71_set");

          Pty_71.add_element(Sub_71);
        }
        DlvInst_8.add_element(Pty_71);
      }
      SetInstr_8.add_element(DlvInst_8);
    }
    elt.add_element(SetInstr_8);
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
