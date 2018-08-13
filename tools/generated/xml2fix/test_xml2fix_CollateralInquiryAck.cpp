#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiryAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiryAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollInqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiryAck_message_t_0;
  elt.add_attribute("ID", "CollInquiryID_t_1458055967"); // 0
  CollateralInquiryAck_message_t_0.insert("CollInquiryID_t_1458055967");
  elt.add_attribute("Stat", "1"); // 0
  CollateralInquiryAck_message_t_0.insert("1");
  elt.add_attribute("Rslt", "6"); // 0
  CollateralInquiryAck_message_t_0.insert("6");
  elt.add_attribute("TotNumRpts", "179768352"); // 0
  CollateralInquiryAck_message_t_0.insert("179768352");
  elt.add_attribute("Acct", "Account_t_787563690"); // 0
  CollateralInquiryAck_message_t_0.insert("Account_t_787563690");
  elt.add_attribute("AcctTyp", "6"); // 0
  CollateralInquiryAck_message_t_0.insert("6");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1494278752"); // 0
  CollateralInquiryAck_message_t_0.insert("ClOrdID_t_1494278752");
  elt.add_attribute("OrdID", "OrderID_t_1333067850"); // 0
  CollateralInquiryAck_message_t_0.insert("OrderID_t_1333067850");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_779683080"); // 0
  CollateralInquiryAck_message_t_0.insert("SecondaryOrderID_t_779683080");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_950375591"); // 0
  CollateralInquiryAck_message_t_0.insert("SecondaryClOrdID_t_950375591");
  elt.add_attribute("SettlDt", "SettlDate_t_907721421"); // 0
  CollateralInquiryAck_message_t_0.insert("SettlDate_t_907721421");
  elt.add_attribute("Qty", "745920.140000"); // 0
  CollateralInquiryAck_message_t_0.insert("745920.140000");
  elt.add_attribute("QtyTyp", "0"); // 0
  CollateralInquiryAck_message_t_0.insert("0");
  elt.add_attribute("Ccy", "USD"); // 0
  CollateralInquiryAck_message_t_0.insert("USD");
  elt.add_attribute("SesID", "5"); // 0
  CollateralInquiryAck_message_t_0.insert("5");
  elt.add_attribute("SesSub", "2"); // 0
  CollateralInquiryAck_message_t_0.insert("2");
  elt.add_attribute("SetSesID", "ITD"); // 0
  CollateralInquiryAck_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1890342350"); // 0
  CollateralInquiryAck_message_t_0.insert("SettlSessSubID_t_1890342350");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1921341733"); // 0
  CollateralInquiryAck_message_t_0.insert("ClearingBusinessDate_t_1921341733");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  CollateralInquiryAck_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_208426005"); // 0
  CollateralInquiryAck_message_t_0.insert("ResponseDestination_t_208426005");
  elt.add_attribute("Txt", "Text_t_824746946"); // 0
  CollateralInquiryAck_message_t_0.insert("Text_t_824746946");
  elt.add_attribute("EncTxtLen", "431206393"); // 0
  CollateralInquiryAck_message_t_0.insert("431206393");
  elt.add_attribute("EncTxt", "EncodedText_t_1404606171"); // 0
  CollateralInquiryAck_message_t_0.insert("EncodedText_t_1404606171");
  all_values.push_back(CollateralInquiryAck_message_t_0);
  all_compo_names.insert("CollateralInquiryAck_message_t");

  { // Hdr
    xml_element Hdr_16{"Hdr"};
    multiset<string> Hdr_16_set;
    Hdr_16.add_attribute("SeqNum", "508771512"); // 1
    Hdr_16_set.insert("508771512");
    Hdr_16.add_attribute("SID", "SenderCompID_t_152985013"); // 1
    Hdr_16_set.insert("SenderCompID_t_152985013");
    Hdr_16.add_attribute("TID", "TargetCompID_t_358133418"); // 1
    Hdr_16_set.insert("TargetCompID_t_358133418");
    Hdr_16.add_attribute("OBID", "OnBehalfOfCompID_t_1176819469"); // 1
    Hdr_16_set.insert("OnBehalfOfCompID_t_1176819469");
    Hdr_16.add_attribute("D2ID", "DeliverToCompID_t_1045154489"); // 1
    Hdr_16_set.insert("DeliverToCompID_t_1045154489");
    Hdr_16.add_attribute("SSub", "SenderSubID_t_308948326"); // 1
    Hdr_16_set.insert("SenderSubID_t_308948326");
    Hdr_16.add_attribute("SLoc", "SenderLocationID_t_487391788"); // 1
    Hdr_16_set.insert("SenderLocationID_t_487391788");
    Hdr_16.add_attribute("TSub", "TargetSubID_t_150114173"); // 1
    Hdr_16_set.insert("TargetSubID_t_150114173");
    Hdr_16.add_attribute("TLoc", "TargetLocationID_t_394940590"); // 1
    Hdr_16_set.insert("TargetLocationID_t_394940590");
    Hdr_16.add_attribute("OBSub", "OnBehalfOfSubID_t_667160141"); // 1
    Hdr_16_set.insert("OnBehalfOfSubID_t_667160141");
    Hdr_16.add_attribute("OBLoc", "OnBehalfOfLocationID_t_937677863"); // 1
    Hdr_16_set.insert("OnBehalfOfLocationID_t_937677863");
    Hdr_16.add_attribute("D2Sub", "DeliverToSubID_t_556863762"); // 1
    Hdr_16_set.insert("DeliverToSubID_t_556863762");
    Hdr_16.add_attribute("D2Loc", "DeliverToLocationID_t_13955245"); // 1
    Hdr_16_set.insert("DeliverToLocationID_t_13955245");
    Hdr_16.add_attribute("PosDup", "Y"); // 1
    Hdr_16_set.insert("Y");
    Hdr_16.add_attribute("PosRsnd", "N"); // 1
    Hdr_16_set.insert("N");
    Hdr_16.add_attribute("Snt", "SendingTime_t_964330836"); // 1
    Hdr_16_set.insert("SendingTime_t_964330836");
    Hdr_16.add_attribute("OrigSnt", "OrigSendingTime_t_1030983486"); // 1
    Hdr_16_set.insert("OrigSendingTime_t_1030983486");
    Hdr_16.add_attribute("MsgEncd", "MessageEncoding_t_1411138856"); // 1
    Hdr_16_set.insert("MessageEncoding_t_1411138856");
    all_values.push_back(Hdr_16_set);
    all_compo_names.insert("Hdr_16_set");

    {
      xml_element Hop_16{"Hop"};
      multiset<string> Hop_16_set;
      Hop_16.add_attribute("ID", "HopCompID_t_191914333"); // 2
      Hop_16_set.insert("HopCompID_t_191914333");
      Hop_16.add_attribute("Ref", "1085579809"); // 2
      Hop_16_set.insert("1085579809");
      Hop_16.add_attribute("Snt", "HopSendingTime_t_950806818"); // 2
      Hop_16_set.insert("HopSendingTime_t_950806818");
      all_values.push_back(Hop_16_set);
      all_compo_names.insert("Hop_16_set");

      Hdr_16.add_element(Hop_16);
    }
    elt.add_element(Hdr_16);
  } // end Hdr
  { // Qual
    xml_element Qual_1{"Qual"};
    multiset<string> Qual_1_set;
    Qual_1.add_attribute("Qual", "1"); // 1
    Qual_1_set.insert("1");
    all_values.push_back(Qual_1_set);
    all_compo_names.insert("Qual_1_set");

    elt.add_element(Qual_1);
  } // end Qual
  { // Qual
    xml_element Qual_2{"Qual"};
    multiset<string> Qual_2_set;
    Qual_2.add_attribute("Qual", "3"); // 1
    Qual_2_set.insert("3");
    all_values.push_back(Qual_2_set);
    all_compo_names.insert("Qual_2_set");

    elt.add_element(Qual_2);
  } // end Qual
  { // Qual
    xml_element Qual_3{"Qual"};
    multiset<string> Qual_3_set;
    Qual_3.add_attribute("Qual", "0"); // 1
    Qual_3_set.insert("0");
    all_values.push_back(Qual_3_set);
    all_compo_names.insert("Qual_3_set");

    elt.add_element(Qual_3);
  } // end Qual
  { // Pty
    xml_element Pty_80{"Pty"};
    multiset<string> Pty_80_set;
    Pty_80.add_attribute("ID", "PartyID_t_650374420"); // 1
    Pty_80_set.insert("PartyID_t_650374420");
    Pty_80.add_attribute("Src", "A"); // 1
    Pty_80_set.insert("A");
    Pty_80.add_attribute("R", "67"); // 1
    Pty_80_set.insert("67");
    all_values.push_back(Pty_80_set);
    all_compo_names.insert("Pty_80_set");

    {
      xml_element Sub_80{"Sub"};
      multiset<string> Sub_80_set;
      Sub_80.add_attribute("ID", "PartySubID_t_1081580813"); // 2
      Sub_80_set.insert("PartySubID_t_1081580813");
      Sub_80.add_attribute("Typ", "22"); // 2
      Sub_80_set.insert("22");
      all_values.push_back(Sub_80_set);
      all_compo_names.insert("Sub_80_set");

      Pty_80.add_element(Sub_80);
    }
    elt.add_element(Pty_80);
  } // end Pty
  { // Pty
    xml_element Pty_81{"Pty"};
    multiset<string> Pty_81_set;
    Pty_81.add_attribute("ID", "PartyID_t_1892300633"); // 1
    Pty_81_set.insert("PartyID_t_1892300633");
    Pty_81.add_attribute("Src", "7"); // 1
    Pty_81_set.insert("7");
    Pty_81.add_attribute("R", "50"); // 1
    Pty_81_set.insert("50");
    all_values.push_back(Pty_81_set);
    all_compo_names.insert("Pty_81_set");

    {
      xml_element Sub_81{"Sub"};
      multiset<string> Sub_81_set;
      Sub_81.add_attribute("ID", "PartySubID_t_921636455"); // 2
      Sub_81_set.insert("PartySubID_t_921636455");
      Sub_81.add_attribute("Typ", "9"); // 2
      Sub_81_set.insert("9");
      all_values.push_back(Sub_81_set);
      all_compo_names.insert("Sub_81_set");

      Pty_81.add_element(Sub_81);
    }
    elt.add_element(Pty_81);
  } // end Pty
  { // Pty
    xml_element Pty_82{"Pty"};
    multiset<string> Pty_82_set;
    Pty_82.add_attribute("ID", "PartyID_t_1870181865"); // 1
    Pty_82_set.insert("PartyID_t_1870181865");
    Pty_82.add_attribute("Src", "G"); // 1
    Pty_82_set.insert("G");
    Pty_82.add_attribute("R", "48"); // 1
    Pty_82_set.insert("48");
    all_values.push_back(Pty_82_set);
    all_compo_names.insert("Pty_82_set");

    {
      xml_element Sub_82{"Sub"};
      multiset<string> Sub_82_set;
      Sub_82.add_attribute("ID", "PartySubID_t_117638808"); // 2
      Sub_82_set.insert("PartySubID_t_117638808");
      Sub_82.add_attribute("Typ", "25"); // 2
      Sub_82_set.insert("25");
      all_values.push_back(Sub_82_set);
      all_compo_names.insert("Sub_82_set");

      Pty_82.add_element(Sub_82);
    }
    elt.add_element(Pty_82);
  } // end Pty
  { // CollExc
    xml_element CollExc_3{"CollExc"};
    multiset<string> CollExc_3_set;
    CollExc_3.add_attribute("ExecID", "ExecID_t_674502570"); // 1
    CollExc_3_set.insert("ExecID_t_674502570");
    all_values.push_back(CollExc_3_set);
    all_compo_names.insert("CollExc_3_set");

    elt.add_element(CollExc_3);
  } // end CollExc
  { // CollExc
    xml_element CollExc_4{"CollExc"};
    multiset<string> CollExc_4_set;
    CollExc_4.add_attribute("ExecID", "ExecID_t_2090143629"); // 1
    CollExc_4_set.insert("ExecID_t_2090143629");
    all_values.push_back(CollExc_4_set);
    all_compo_names.insert("CollExc_4_set");

    elt.add_element(CollExc_4);
  } // end CollExc
  { // CollExc
    xml_element CollExc_5{"CollExc"};
    multiset<string> CollExc_5_set;
    CollExc_5.add_attribute("ExecID", "ExecID_t_1343290769"); // 1
    CollExc_5_set.insert("ExecID_t_1343290769");
    all_values.push_back(CollExc_5_set);
    all_compo_names.insert("CollExc_5_set");

    elt.add_element(CollExc_5);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_3{"TrdColl"};
    multiset<string> TrdColl_3_set;
    TrdColl_3.add_attribute("RptID", "TradeReportID_t_906990817"); // 1
    TrdColl_3_set.insert("TradeReportID_t_906990817");
    TrdColl_3.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_226790608"); // 1
    TrdColl_3_set.insert("SecondaryTradeReportID_t_226790608");
    all_values.push_back(TrdColl_3_set);
    all_compo_names.insert("TrdColl_3_set");

    elt.add_element(TrdColl_3);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_8{"Instrmt"};
    multiset<string> Instrmt_8_set;
    Instrmt_8.add_attribute("Sym", "Symbol_t_1274704620"); // 1
    Instrmt_8_set.insert("Symbol_t_1274704620");
    Instrmt_8.add_attribute("Sfx", "CD"); // 1
    Instrmt_8_set.insert("CD");
    Instrmt_8.add_attribute("ID", "SecurityID_t_1312370417"); // 1
    Instrmt_8_set.insert("SecurityID_t_1312370417");
    Instrmt_8.add_attribute("Src", "H"); // 1
    Instrmt_8_set.insert("H");
    Instrmt_8.add_attribute("Prod", "11"); // 1
    Instrmt_8_set.insert("11");
    Instrmt_8.add_attribute("ProdCmplx", "ProductComplex_t_2097294506"); // 1
    Instrmt_8_set.insert("ProductComplex_t_2097294506");
    Instrmt_8.add_attribute("SecGrp", "SecurityGroup_t_644281121"); // 1
    Instrmt_8_set.insert("SecurityGroup_t_644281121");
    Instrmt_8.add_attribute("CFI", "CFICode_t_536182336"); // 1
    Instrmt_8_set.insert("CFICode_t_536182336");
    Instrmt_8.add_attribute("SecTyp", "PFAND"); // 1
    Instrmt_8_set.insert("PFAND");
    Instrmt_8.add_attribute("SubTyp", "SecuritySubType_t_1294655542"); // 1
    Instrmt_8_set.insert("SecuritySubType_t_1294655542");
    Instrmt_8.add_attribute("MMY", "334676285"); // 1
    Instrmt_8_set.insert("334676285");
    Instrmt_8.add_attribute("MatDt", "MaturityDate_t_1892122153"); // 1
    Instrmt_8_set.insert("MaturityDate_t_1892122153");
    Instrmt_8.add_attribute("MatTm", "228752707"); // 1
    Instrmt_8_set.insert("228752707");
    Instrmt_8.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1537776406"); // 1
    Instrmt_8_set.insert("SettleOnOpenFlag_t_1537776406");
    Instrmt_8.add_attribute("AsgnMeth", "1636939139"); // 1
    Instrmt_8_set.insert("1636939139");
    Instrmt_8.add_attribute("Status", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("CpnPmt", "CouponPaymentDate_t_951526298"); // 1
    Instrmt_8_set.insert("CouponPaymentDate_t_951526298");
    Instrmt_8.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_8_set.insert("MM");
    Instrmt_8.add_attribute("Snrty", "SD"); // 1
    Instrmt_8_set.insert("SD");
    Instrmt_8.add_attribute("NotlPctOut", "6742245.150000"); // 1
    Instrmt_8_set.insert("6742245.150000");
    Instrmt_8.add_attribute("OrigNotlPctOut", "18201201.890000"); // 1
    Instrmt_8_set.insert("18201201.890000");
    Instrmt_8.add_attribute("AttchPnt", "18779060.430000"); // 1
    Instrmt_8_set.insert("18779060.430000");
    Instrmt_8.add_attribute("DetchPnt", "7918633.230000"); // 1
    Instrmt_8_set.insert("7918633.230000");
    Instrmt_8.add_attribute("Issued", "IssueDate_t_1748824926"); // 1
    Instrmt_8_set.insert("IssueDate_t_1748824926");
    Instrmt_8.add_attribute("RepoCollSecTyp", "950451099"); // 1
    Instrmt_8_set.insert("950451099");
    Instrmt_8.add_attribute("RepoTrm", "1466365893"); // 1
    Instrmt_8_set.insert("1466365893");
    Instrmt_8.add_attribute("RepoRt", "16914849.070000"); // 1
    Instrmt_8_set.insert("16914849.070000");
    Instrmt_8.add_attribute("Fctr", "1462582.200000"); // 1
    Instrmt_8_set.insert("1462582.200000");
    Instrmt_8.add_attribute("CrdRtg", "CreditRating_t_1329931657"); // 1
    Instrmt_8_set.insert("CreditRating_t_1329931657");
    Instrmt_8.add_attribute("Rgstry", "InstrRegistry_t_450992077"); // 1
    Instrmt_8_set.insert("InstrRegistry_t_450992077");
    Instrmt_8.add_attribute("IssuCtry", "373048828"); // 1
    Instrmt_8_set.insert("373048828");
    Instrmt_8.add_attribute("StPrv", "StateOrProvinceOfIssue_t_457152629"); // 1
    Instrmt_8_set.insert("StateOrProvinceOfIssue_t_457152629");
    Instrmt_8.add_attribute("Lcl", "LocaleOfIssue_t_1549897227"); // 1
    Instrmt_8_set.insert("LocaleOfIssue_t_1549897227");
    Instrmt_8.add_attribute("Redeem", "RedemptionDate_t_1685419245"); // 1
    Instrmt_8_set.insert("RedemptionDate_t_1685419245");
    Instrmt_8.add_attribute("StrkPx", "5351804.200000"); // 1
    Instrmt_8_set.insert("5351804.200000");
    Instrmt_8.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_8_set.insert("CHF");
    Instrmt_8.add_attribute("StrkMult", "11794615.410000"); // 1
    Instrmt_8_set.insert("11794615.410000");
    Instrmt_8.add_attribute("StrkValu", "8847103.070000"); // 1
    Instrmt_8_set.insert("8847103.070000");
    Instrmt_8.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("StrkPxBndryPrcsn", "12193865.930000"); // 1
    Instrmt_8_set.insert("12193865.930000");
    Instrmt_8.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("OptAt", "555386143"); // 1
    Instrmt_8_set.insert("555386143");
    Instrmt_8.add_attribute("Mult", "6096793.510000"); // 1
    Instrmt_8_set.insert("6096793.510000");
    Instrmt_8.add_attribute("MultTyp", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("MinPxIncr", "15612056.490000"); // 1
    Instrmt_8_set.insert("15612056.490000");
    Instrmt_8.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1789009078"); // 1
    Instrmt_8_set.insert("MinPriceIncrementAmount_t_1789009078");
    Instrmt_8.add_attribute("UOM", "Bu"); // 1
    Instrmt_8_set.insert("Bu");
    Instrmt_8.add_attribute("UOMQty", "879465.170000"); // 1
    Instrmt_8_set.insert("879465.170000");
    Instrmt_8.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_8_set.insert("MMbbl");
    Instrmt_8.add_attribute("PxUOMQty", "11971986.260000"); // 1
    Instrmt_8_set.insert("11971986.260000");
    Instrmt_8.add_attribute("SettlMeth", "C"); // 1
    Instrmt_8_set.insert("C");
    Instrmt_8.add_attribute("ExerStyle", "0"); // 1
    Instrmt_8_set.insert("0");
    Instrmt_8.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("OptPayAmt", "OptPayoutAmount_t_198692086"); // 1
    Instrmt_8_set.insert("OptPayoutAmount_t_198692086");
    Instrmt_8.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_8_set.insert("INX");
    Instrmt_8.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_8_set.insert("FUTDA");
    Instrmt_8.add_attribute("ListMeth", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("CapPx", "10579802.340000"); // 1
    Instrmt_8_set.insert("10579802.340000");
    Instrmt_8.add_attribute("FlrPx", "5194731.260000"); // 1
    Instrmt_8_set.insert("5194731.260000");
    Instrmt_8.add_attribute("PutCall", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("FlexInd", "true"); // 1
    Instrmt_8_set.insert("true");
    Instrmt_8.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_8_set.insert("false");
    Instrmt_8.add_attribute("TmUnit", "D"); // 1
    Instrmt_8_set.insert("D");
    Instrmt_8.add_attribute("CpnRt", "8089217.850000"); // 1
    Instrmt_8_set.insert("8089217.850000");
    Instrmt_8.add_attribute("Exch", "SecurityExchange_t_1692638827"); // 1
    Instrmt_8_set.insert("SecurityExchange_t_1692638827");
    Instrmt_8.add_attribute("PosLmt", "1552934686"); // 1
    Instrmt_8_set.insert("1552934686");
    Instrmt_8.add_attribute("NTPosLmt", "1693632093"); // 1
    Instrmt_8_set.insert("1693632093");
    Instrmt_8.add_attribute("Issr", "Issuer_t_1688978315"); // 1
    Instrmt_8_set.insert("Issuer_t_1688978315");
    Instrmt_8.add_attribute("EncIssrLen", "1879568122"); // 1
    Instrmt_8_set.insert("1879568122");
    Instrmt_8.add_attribute("EncIssr", "EncodedIssuer_t_765535038"); // 1
    Instrmt_8_set.insert("EncodedIssuer_t_765535038");
    Instrmt_8.add_attribute("Desc", "SecurityDesc_t_1429956308"); // 1
    Instrmt_8_set.insert("SecurityDesc_t_1429956308");
    Instrmt_8.add_attribute("EncSecDescLen", "287470617"); // 1
    Instrmt_8_set.insert("287470617");
    Instrmt_8.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1375214389"); // 1
    Instrmt_8_set.insert("EncodedSecurityDesc_t_1375214389");
    Instrmt_8.add_attribute("Pool", "Pool_t_660389793"); // 1
    Instrmt_8_set.insert("Pool_t_660389793");
    Instrmt_8.add_attribute("CSetMo", "158691646"); // 1
    Instrmt_8_set.insert("158691646");
    Instrmt_8.add_attribute("CPPgm", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("CPRegT", "CPRegType_t_301915223"); // 1
    Instrmt_8_set.insert("CPRegType_t_301915223");
    Instrmt_8.add_attribute("Dated", "DatedDate_t_1625467877"); // 1
    Instrmt_8_set.insert("DatedDate_t_1625467877");
    Instrmt_8.add_attribute("IntAcrl", "InterestAccrualDate_t_876882908"); // 1
    Instrmt_8_set.insert("InterestAccrualDate_t_876882908");
    all_values.push_back(Instrmt_8_set);
    all_compo_names.insert("Instrmt_8_set");

    {
      xml_element AID_8{"AID"};
      multiset<string> AID_8_set;
      AID_8.add_attribute("AltID", "SecurityAltID_t_1763560843"); // 2
      AID_8_set.insert("SecurityAltID_t_1763560843");
      AID_8.add_attribute("AltIDSrc", "I"); // 2
      AID_8_set.insert("I");
      all_values.push_back(AID_8_set);
      all_compo_names.insert("AID_8_set");

      Instrmt_8.add_element(AID_8);
    }
    {
      xml_element SecXML_8{"SecXML"};
      multiset<string> SecXML_8_set;
      SecXML_8.add_attribute("Schema", "SecurityXMLSchema_t_1756692748"); // 2
      SecXML_8_set.insert("SecurityXMLSchema_t_1756692748");
      all_values.push_back(SecXML_8_set);
      all_compo_names.insert("SecXML_8_set");

      Instrmt_8.add_element(SecXML_8);
    }
    {
      xml_element Evnt_8{"Evnt"};
      multiset<string> Evnt_8_set;
      Evnt_8.add_attribute("EventTyp", "13"); // 2
      Evnt_8_set.insert("13");
      Evnt_8.add_attribute("Dt", "EventDate_t_675348932"); // 2
      Evnt_8_set.insert("EventDate_t_675348932");
      Evnt_8.add_attribute("Tm", "EventTime_t_1955384834"); // 2
      Evnt_8_set.insert("EventTime_t_1955384834");
      Evnt_8.add_attribute("Px", "12860522.510000"); // 2
      Evnt_8_set.insert("12860522.510000");
      Evnt_8.add_attribute("Txt", "EventText_t_821773229"); // 2
      Evnt_8_set.insert("EventText_t_821773229");
      all_values.push_back(Evnt_8_set);
      all_compo_names.insert("Evnt_8_set");

      Instrmt_8.add_element(Evnt_8);
    }
    {
      xml_element Pty_83{"Pty"};
      multiset<string> Pty_83_set;
      Pty_83.add_attribute("ID", "InstrumentPartyID_t_1336524930"); // 2
      Pty_83_set.insert("InstrumentPartyID_t_1336524930");
      Pty_83.add_attribute("Src", "G"); // 2
      Pty_83_set.insert("G");
      Pty_83.add_attribute("R", "46"); // 2
      Pty_83_set.insert("46");
      all_values.push_back(Pty_83_set);
      all_compo_names.insert("Pty_83_set");

      {
        xml_element Sub_83{"Sub"};
        multiset<string> Sub_83_set;
        Sub_83.add_attribute("ID", "InstrumentPartySubID_t_1174817655"); // 3
        Sub_83_set.insert("InstrumentPartySubID_t_1174817655");
        Sub_83.add_attribute("Typ", "11"); // 3
        Sub_83_set.insert("11");
        all_values.push_back(Sub_83_set);
        all_compo_names.insert("Sub_83_set");

        Pty_83.add_element(Sub_83);
      }
      Instrmt_8.add_element(Pty_83);
    }
    {
      xml_element CmplxEvnt_8{"CmplxEvnt"};
      multiset<string> CmplxEvnt_8_set;
      CmplxEvnt_8.add_attribute("Typ", "9"); // 2
      CmplxEvnt_8_set.insert("9");
      CmplxEvnt_8.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1548290800"); // 2
      CmplxEvnt_8_set.insert("ComplexOptPayoutAmount_t_1548290800");
      CmplxEvnt_8.add_attribute("Px", "14658644.370000"); // 2
      CmplxEvnt_8_set.insert("14658644.370000");
      CmplxEvnt_8.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_8_set.insert("4");
      CmplxEvnt_8.add_attribute("PxBndryPrcsn", "9537418.380000"); // 2
      CmplxEvnt_8_set.insert("9537418.380000");
      CmplxEvnt_8.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_8_set.insert("2");
      CmplxEvnt_8.add_attribute("Cond", "2"); // 2
      CmplxEvnt_8_set.insert("2");
      all_values.push_back(CmplxEvnt_8_set);
      all_compo_names.insert("CmplxEvnt_8_set");

      {
        xml_element EvntDts_8{"EvntDts"};
        multiset<string> EvntDts_8_set;
        EvntDts_8.add_attribute("StartDt", "ComplexEventStartDate_t_685826312"); // 3
        EvntDts_8_set.insert("ComplexEventStartDate_t_685826312");
        EvntDts_8.add_attribute("EndDt", "ComplexEventEndDate_t_1777547920"); // 3
        EvntDts_8_set.insert("ComplexEventEndDate_t_1777547920");
        all_values.push_back(EvntDts_8_set);
        all_compo_names.insert("EvntDts_8_set");

        {
          xml_element EvntTms_8{"EvntTms"};
          multiset<string> EvntTms_8_set;
          EvntTms_8.add_attribute("StartTm", "1915261233"); // 4
          EvntTms_8_set.insert("1915261233");
          EvntTms_8.add_attribute("EndTm", "973296929"); // 4
          EvntTms_8_set.insert("973296929");
          all_values.push_back(EvntTms_8_set);
          all_compo_names.insert("EvntTms_8_set");

          EvntDts_8.add_element(EvntTms_8);
        }
        CmplxEvnt_8.add_element(EvntDts_8);
      }
      Instrmt_8.add_element(CmplxEvnt_8);
    }
    elt.add_element(Instrmt_8);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_5{"FinDetls"};
    multiset<string> FinDetls_5_set;
    FinDetls_5.add_attribute("AgmtDesc", "AgreementDesc_t_1005278661"); // 1
    FinDetls_5_set.insert("AgreementDesc_t_1005278661");
    FinDetls_5.add_attribute("AgmtID", "AgreementID_t_428167378"); // 1
    FinDetls_5_set.insert("AgreementID_t_428167378");
    FinDetls_5.add_attribute("AgmtDt", "AgreementDate_t_1131988575"); // 1
    FinDetls_5_set.insert("AgreementDate_t_1131988575");
    FinDetls_5.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_5_set.insert("JPY");
    FinDetls_5.add_attribute("TrmTyp", "1"); // 1
    FinDetls_5_set.insert("1");
    FinDetls_5.add_attribute("StartDt", "StartDate_t_523614312"); // 1
    FinDetls_5_set.insert("StartDate_t_523614312");
    FinDetls_5.add_attribute("EndDt", "EndDate_t_346159797"); // 1
    FinDetls_5_set.insert("EndDate_t_346159797");
    FinDetls_5.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_5_set.insert("3");
    FinDetls_5.add_attribute("MgnRatio", "1328234.130000"); // 1
    FinDetls_5_set.insert("1328234.130000");
    all_values.push_back(FinDetls_5_set);
    all_compo_names.insert("FinDetls_5_set");

    elt.add_element(FinDetls_5);
  } // end FinDetls
  { // Leg
    xml_element Leg_15{"Leg"};
    multiset<string> Leg_15_set;
    Leg_15.add_attribute("Sym", "LegSymbol_t_1960504591"); // 1
    Leg_15_set.insert("LegSymbol_t_1960504591");
    Leg_15.add_attribute("Sfx", "WI"); // 1
    Leg_15_set.insert("WI");
    Leg_15.add_attribute("ID", "LegSecurityID_t_163792494"); // 1
    Leg_15_set.insert("LegSecurityID_t_163792494");
    Leg_15.add_attribute("Src", "E"); // 1
    Leg_15_set.insert("E");
    Leg_15.add_attribute("Prod", "7"); // 1
    Leg_15_set.insert("7");
    Leg_15.add_attribute("CFI", "LegCFICode_t_360341331"); // 1
    Leg_15_set.insert("LegCFICode_t_360341331");
    Leg_15.add_attribute("SecTyp", "DEFLTED"); // 1
    Leg_15_set.insert("DEFLTED");
    Leg_15.add_attribute("SecSubTyp", "LegSecuritySubType_t_304583536"); // 1
    Leg_15_set.insert("LegSecuritySubType_t_304583536");
    Leg_15.add_attribute("MMY", "1017283983"); // 1
    Leg_15_set.insert("1017283983");
    Leg_15.add_attribute("Mat", "LegMaturityDate_t_1227211959"); // 1
    Leg_15_set.insert("LegMaturityDate_t_1227211959");
    Leg_15.add_attribute("MatTm", "1852874336"); // 1
    Leg_15_set.insert("1852874336");
    Leg_15.add_attribute("CpnPmt", "LegCouponPaymentDate_t_335664772"); // 1
    Leg_15_set.insert("LegCouponPaymentDate_t_335664772");
    Leg_15.add_attribute("Issued", "LegIssueDate_t_23538569"); // 1
    Leg_15_set.insert("LegIssueDate_t_23538569");
    Leg_15.add_attribute("RepoCollSecTyp", "659132527"); // 1
    Leg_15_set.insert("659132527");
    Leg_15.add_attribute("RepoTrm", "1347677654"); // 1
    Leg_15_set.insert("1347677654");
    Leg_15.add_attribute("RepoRt", "5088434.940000"); // 1
    Leg_15_set.insert("5088434.940000");
    Leg_15.add_attribute("Fctr", "13449588.390000"); // 1
    Leg_15_set.insert("13449588.390000");
    Leg_15.add_attribute("CrdRtg", "LegCreditRating_t_977741926"); // 1
    Leg_15_set.insert("LegCreditRating_t_977741926");
    Leg_15.add_attribute("Rgstry", "LegInstrRegistry_t_276621080"); // 1
    Leg_15_set.insert("LegInstrRegistry_t_276621080");
    Leg_15.add_attribute("Ctry", "170772121"); // 1
    Leg_15_set.insert("170772121");
    Leg_15.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1983020587"); // 1
    Leg_15_set.insert("LegStateOrProvinceOfIssue_t_1983020587");
    Leg_15.add_attribute("Lcl", "LegLocaleOfIssue_t_704788458"); // 1
    Leg_15_set.insert("LegLocaleOfIssue_t_704788458");
    Leg_15.add_attribute("Redeem", "LegRedemptionDate_t_1302760696"); // 1
    Leg_15_set.insert("LegRedemptionDate_t_1302760696");
    Leg_15.add_attribute("Strk", "16297519.920000"); // 1
    Leg_15_set.insert("16297519.920000");
    Leg_15.add_attribute("StrkCcy", "CAN"); // 1
    Leg_15_set.insert("CAN");
    Leg_15.add_attribute("OptA", "5882656"); // 1
    Leg_15_set.insert("5882656");
    Leg_15.add_attribute("Cmult", "17810308.580000"); // 1
    Leg_15_set.insert("17810308.580000");
    Leg_15.add_attribute("MultTyp", "2"); // 1
    Leg_15_set.insert("2");
    Leg_15.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_15_set.insert("4");
    Leg_15.add_attribute("UOM", "MMBtu"); // 1
    Leg_15_set.insert("MMBtu");
    Leg_15.add_attribute("UOMQty", "8634264.560000"); // 1
    Leg_15_set.insert("8634264.560000");
    Leg_15.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_15_set.insert("MMbbl");
    Leg_15.add_attribute("PxUOMQty", "8225635.950000"); // 1
    Leg_15_set.insert("8225635.950000");
    Leg_15.add_attribute("TmUnit", "D"); // 1
    Leg_15_set.insert("D");
    Leg_15.add_attribute("ExerStyle", "2"); // 1
    Leg_15_set.insert("2");
    Leg_15.add_attribute("CpnRt", "11829049.260000"); // 1
    Leg_15_set.insert("11829049.260000");
    Leg_15.add_attribute("Exch", "LegSecurityExchange_t_1326777509"); // 1
    Leg_15_set.insert("LegSecurityExchange_t_1326777509");
    Leg_15.add_attribute("Issr", "LegIssuer_t_1661263735"); // 1
    Leg_15_set.insert("LegIssuer_t_1661263735");
    Leg_15.add_attribute("EncLegIssrLen", "52705261"); // 1
    Leg_15_set.insert("52705261");
    Leg_15.add_attribute("EncLegIssr", "EncodedLegIssuer_t_406505821"); // 1
    Leg_15_set.insert("EncodedLegIssuer_t_406505821");
    Leg_15.add_attribute("Desc", "LegSecurityDesc_t_1366654423"); // 1
    Leg_15_set.insert("LegSecurityDesc_t_1366654423");
    Leg_15.add_attribute("EncLegSecDescLen", "388370033"); // 1
    Leg_15_set.insert("388370033");
    Leg_15.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_430044390"); // 1
    Leg_15_set.insert("EncodedLegSecurityDesc_t_430044390");
    Leg_15.add_attribute("RatioQty", "20257869.500000"); // 1
    Leg_15_set.insert("20257869.500000");
    Leg_15.add_attribute("Side", "8"); // 1
    Leg_15_set.insert("8");
    Leg_15.add_attribute("Ccy", "JPY"); // 1
    Leg_15_set.insert("JPY");
    Leg_15.add_attribute("Pool", "LegPool_t_566305965"); // 1
    Leg_15_set.insert("LegPool_t_566305965");
    Leg_15.add_attribute("Dated", "LegDatedDate_t_1215508965"); // 1
    Leg_15_set.insert("LegDatedDate_t_1215508965");
    Leg_15.add_attribute("CSetMo", "1394034263"); // 1
    Leg_15_set.insert("1394034263");
    Leg_15.add_attribute("IntAcrl", "LegInterestAccrualDate_t_401842905"); // 1
    Leg_15_set.insert("LegInterestAccrualDate_t_401842905");
    Leg_15.add_attribute("PutCall", "1920297423"); // 1
    Leg_15_set.insert("1920297423");
    Leg_15.add_attribute("LegOptionRatio", "5493113.110000"); // 1
    Leg_15_set.insert("5493113.110000");
    Leg_15.add_attribute("Px", "20315948.970000"); // 1
    Leg_15_set.insert("20315948.970000");
    all_values.push_back(Leg_15_set);
    all_compo_names.insert("Leg_15_set");

    {
      xml_element LegAID_15{"LegAID"};
      multiset<string> LegAID_15_set;
      LegAID_15.add_attribute("SecAltID", "LegSecurityAltID_t_1207684836"); // 2
      LegAID_15_set.insert("LegSecurityAltID_t_1207684836");
      LegAID_15.add_attribute("SecAltIDSrc", "H"); // 2
      LegAID_15_set.insert("H");
      all_values.push_back(LegAID_15_set);
      all_compo_names.insert("LegAID_15_set");

      Leg_15.add_element(LegAID_15);
    }
    elt.add_element(Leg_15);
  } // end Leg
  { // Undly
    xml_element Undly_15{"Undly"};
    multiset<string> Undly_15_set;
    Undly_15.add_attribute("Sym", "UnderlyingSymbol_t_841232046"); // 1
    Undly_15_set.insert("UnderlyingSymbol_t_841232046");
    Undly_15.add_attribute("Sfx", "WI"); // 1
    Undly_15_set.insert("WI");
    Undly_15.add_attribute("ID", "UnderlyingSecurityID_t_28699975"); // 1
    Undly_15_set.insert("UnderlyingSecurityID_t_28699975");
    Undly_15.add_attribute("Src", "6"); // 1
    Undly_15_set.insert("6");
    Undly_15.add_attribute("Prod", "4"); // 1
    Undly_15_set.insert("4");
    Undly_15.add_attribute("CFI", "UnderlyingCFICode_t_108130644"); // 1
    Undly_15_set.insert("UnderlyingCFICode_t_108130644");
    Undly_15.add_attribute("SecTyp", "BN"); // 1
    Undly_15_set.insert("BN");
    Undly_15.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1579130114"); // 1
    Undly_15_set.insert("UnderlyingSecuritySubType_t_1579130114");
    Undly_15.add_attribute("MMY", "1464810842"); // 1
    Undly_15_set.insert("1464810842");
    Undly_15.add_attribute("Mat", "UnderlyingMaturityDate_t_1357988020"); // 1
    Undly_15_set.insert("UnderlyingMaturityDate_t_1357988020");
    Undly_15.add_attribute("MatTm", "758423975"); // 1
    Undly_15_set.insert("758423975");
    Undly_15.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_978590929"); // 1
    Undly_15_set.insert("UnderlyingCouponPaymentDate_t_978590929");
    Undly_15.add_attribute("RestrctTyp", "MM"); // 1
    Undly_15_set.insert("MM");
    Undly_15.add_attribute("Snrty", "SD"); // 1
    Undly_15_set.insert("SD");
    Undly_15.add_attribute("NotlPctOut", "1977617.050000"); // 1
    Undly_15_set.insert("1977617.050000");
    Undly_15.add_attribute("OrigNotlPctOut", "17990633.150000"); // 1
    Undly_15_set.insert("17990633.150000");
    Undly_15.add_attribute("AttchPnt", "15949741.870000"); // 1
    Undly_15_set.insert("15949741.870000");
    Undly_15.add_attribute("DetchPnt", "760650.070000"); // 1
    Undly_15_set.insert("760650.070000");
    Undly_15.add_attribute("Issued", "UnderlyingIssueDate_t_1387627355"); // 1
    Undly_15_set.insert("UnderlyingIssueDate_t_1387627355");
    Undly_15.add_attribute("RepoCollSecTyp", "386378424"); // 1
    Undly_15_set.insert("386378424");
    Undly_15.add_attribute("RepoTrm", "1299327149"); // 1
    Undly_15_set.insert("1299327149");
    Undly_15.add_attribute("RepoRt", "19539333.200000"); // 1
    Undly_15_set.insert("19539333.200000");
    Undly_15.add_attribute("Fctr", "16018873.890000"); // 1
    Undly_15_set.insert("16018873.890000");
    Undly_15.add_attribute("CrdRtg", "UnderlyingCreditRating_t_545877764"); // 1
    Undly_15_set.insert("UnderlyingCreditRating_t_545877764");
    Undly_15.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_208292577"); // 1
    Undly_15_set.insert("UnderlyingInstrRegistry_t_208292577");
    Undly_15.add_attribute("Ctry", "1374701164"); // 1
    Undly_15_set.insert("1374701164");
    Undly_15.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1095189076"); // 1
    Undly_15_set.insert("UnderlyingStateOrProvinceOfIssue_t_1095189076");
    Undly_15.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_92403826"); // 1
    Undly_15_set.insert("UnderlyingLocaleOfIssue_t_92403826");
    Undly_15.add_attribute("Redeem", "UnderlyingRedemptionDate_t_434902352"); // 1
    Undly_15_set.insert("UnderlyingRedemptionDate_t_434902352");
    Undly_15.add_attribute("StrkPx", "14097502.400000"); // 1
    Undly_15_set.insert("14097502.400000");
    Undly_15.add_attribute("StrkCcy", "GBP"); // 1
    Undly_15_set.insert("GBP");
    Undly_15.add_attribute("OptA", "627233269"); // 1
    Undly_15_set.insert("627233269");
    Undly_15.add_attribute("Mult", "110977.070000"); // 1
    Undly_15_set.insert("110977.070000");
    Undly_15.add_attribute("MultTyp", "0"); // 1
    Undly_15_set.insert("0");
    Undly_15.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_15_set.insert("4");
    Undly_15.add_attribute("UOM", "oz_tr"); // 1
    Undly_15_set.insert("oz_tr");
    Undly_15.add_attribute("UOMQty", "8037369.910000"); // 1
    Undly_15_set.insert("8037369.910000");
    Undly_15.add_attribute("PxUOM", "Alw"); // 1
    Undly_15_set.insert("Alw");
    Undly_15.add_attribute("PxUOMQty", "15840391.930000"); // 1
    Undly_15_set.insert("15840391.930000");
    Undly_15.add_attribute("TmUnit", "Wk"); // 1
    Undly_15_set.insert("Wk");
    Undly_15.add_attribute("ExerStyle", "2"); // 1
    Undly_15_set.insert("2");
    Undly_15.add_attribute("CpnRt", "4151464.750000"); // 1
    Undly_15_set.insert("4151464.750000");
    Undly_15.add_attribute("Exch", "UnderlyingSecurityExchange_t_1424934646"); // 1
    Undly_15_set.insert("UnderlyingSecurityExchange_t_1424934646");
    Undly_15.add_attribute("Issr", "UnderlyingIssuer_t_2063142992"); // 1
    Undly_15_set.insert("UnderlyingIssuer_t_2063142992");
    Undly_15.add_attribute("EncUndIssrLen", "612908180"); // 1
    Undly_15_set.insert("612908180");
    Undly_15.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1076514313"); // 1
    Undly_15_set.insert("EncodedUnderlyingIssuer_t_1076514313");
    Undly_15.add_attribute("Desc", "UnderlyingSecurityDesc_t_1510633531"); // 1
    Undly_15_set.insert("UnderlyingSecurityDesc_t_1510633531");
    Undly_15.add_attribute("EncUndSecDescLen", "688973187"); // 1
    Undly_15_set.insert("688973187");
    Undly_15.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_316658020"); // 1
    Undly_15_set.insert("EncodedUnderlyingSecurityDesc_t_316658020");
    Undly_15.add_attribute("CPPgm", "UnderlyingCPProgram_t_1897011955"); // 1
    Undly_15_set.insert("UnderlyingCPProgram_t_1897011955");
    Undly_15.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1988300337"); // 1
    Undly_15_set.insert("UnderlyingCPRegType_t_1988300337");
    Undly_15.add_attribute("AllocPct", "1231076.930000"); // 1
    Undly_15_set.insert("1231076.930000");
    Undly_15.add_attribute("Ccy", "CHF"); // 1
    Undly_15_set.insert("CHF");
    Undly_15.add_attribute("Qty", "3314002.700000"); // 1
    Undly_15_set.insert("3314002.700000");
    Undly_15.add_attribute("SettlTyp", "5"); // 1
    Undly_15_set.insert("5");
    Undly_15.add_attribute("CashAmt", "UnderlyingCashAmount_t_1481883529"); // 1
    Undly_15_set.insert("UnderlyingCashAmount_t_1481883529");
    Undly_15.add_attribute("CashTyp", "DIFF"); // 1
    Undly_15_set.insert("DIFF");
    Undly_15.add_attribute("Px", "10135355.650000"); // 1
    Undly_15_set.insert("10135355.650000");
    Undly_15.add_attribute("DirtPx", "7441501.220000"); // 1
    Undly_15_set.insert("7441501.220000");
    Undly_15.add_attribute("EndPx", "4062018.290000"); // 1
    Undly_15_set.insert("4062018.290000");
    Undly_15.add_attribute("StartVal", "UnderlyingStartValue_t_142186316"); // 1
    Undly_15_set.insert("UnderlyingStartValue_t_142186316");
    Undly_15.add_attribute("CurVal", "UnderlyingCurrentValue_t_1371383391"); // 1
    Undly_15_set.insert("UnderlyingCurrentValue_t_1371383391");
    Undly_15.add_attribute("EndVal", "UnderlyingEndValue_t_417299536"); // 1
    Undly_15_set.insert("UnderlyingEndValue_t_417299536");
    Undly_15.add_attribute("AdjQty", "7708402.130000"); // 1
    Undly_15_set.insert("7708402.130000");
    Undly_15.add_attribute("FxRate", "20795261.460000"); // 1
    Undly_15_set.insert("20795261.460000");
    Undly_15.add_attribute("FxRateCalc", "D"); // 1
    Undly_15_set.insert("D");
    Undly_15.add_attribute("CapValu", "UnderlyingCapValue_t_1574577205"); // 1
    Undly_15_set.insert("UnderlyingCapValue_t_1574577205");
    Undly_15.add_attribute("SetMeth", "UnderlyingSettlMethod_t_71831718"); // 1
    Undly_15_set.insert("UnderlyingSettlMethod_t_71831718");
    Undly_15.add_attribute("PutCall", "2120567080"); // 1
    Undly_15_set.insert("2120567080");
    all_values.push_back(Undly_15_set);
    all_compo_names.insert("Undly_15_set");

    {
      xml_element UndAID_15{"UndAID"};
      multiset<string> UndAID_15_set;
      UndAID_15.add_attribute("AltID", "UnderlyingSecurityAltID_t_1588818569"); // 2
      UndAID_15_set.insert("UnderlyingSecurityAltID_t_1588818569");
      UndAID_15.add_attribute("AltIDSrc", "F"); // 2
      UndAID_15_set.insert("F");
      all_values.push_back(UndAID_15_set);
      all_compo_names.insert("UndAID_15_set");

      Undly_15.add_element(UndAID_15);
    }
    {
      xml_element Stip_24{"Stip"};
      multiset<string> Stip_24_set;
      Stip_24.add_attribute("Typ", "REFINT"); // 2
      Stip_24_set.insert("REFINT");
      Stip_24.add_attribute("Val", "UnderlyingStipValue_t_866269567"); // 2
      Stip_24_set.insert("UnderlyingStipValue_t_866269567");
      all_values.push_back(Stip_24_set);
      all_compo_names.insert("Stip_24_set");

      Undly_15.add_element(Stip_24);
    }
    {
      xml_element Pty_84{"Pty"};
      multiset<string> Pty_84_set;
      Pty_84.add_attribute("ID", "UnderlyingInstrumentPartyID_t_885704259"); // 2
      Pty_84_set.insert("UnderlyingInstrumentPartyID_t_885704259");
      Pty_84.add_attribute("Src", "C"); // 2
      Pty_84_set.insert("C");
      Pty_84.add_attribute("R", "47"); // 2
      Pty_84_set.insert("47");
      all_values.push_back(Pty_84_set);
      all_compo_names.insert("Pty_84_set");

      {
        xml_element Sub_84{"Sub"};
        multiset<string> Sub_84_set;
        Sub_84.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_248854142"); // 3
        Sub_84_set.insert("UnderlyingInstrumentPartySubID_t_248854142");
        Sub_84.add_attribute("Typ", "15"); // 3
        Sub_84_set.insert("15");
        all_values.push_back(Sub_84_set);
        all_compo_names.insert("Sub_84_set");

        Pty_84.add_element(Sub_84);
      }
      Undly_15.add_element(Pty_84);
    }
    elt.add_element(Undly_15);
  } // end Undly
  { // Undly
    xml_element Undly_16{"Undly"};
    multiset<string> Undly_16_set;
    Undly_16.add_attribute("Sym", "UnderlyingSymbol_t_111958253"); // 1
    Undly_16_set.insert("UnderlyingSymbol_t_111958253");
    Undly_16.add_attribute("Sfx", "CD"); // 1
    Undly_16_set.insert("CD");
    Undly_16.add_attribute("ID", "UnderlyingSecurityID_t_1530927964"); // 1
    Undly_16_set.insert("UnderlyingSecurityID_t_1530927964");
    Undly_16.add_attribute("Src", "H"); // 1
    Undly_16_set.insert("H");
    Undly_16.add_attribute("Prod", "5"); // 1
    Undly_16_set.insert("5");
    Undly_16.add_attribute("CFI", "UnderlyingCFICode_t_1917622417"); // 1
    Undly_16_set.insert("UnderlyingCFICode_t_1917622417");
    Undly_16.add_attribute("SecTyp", "CPP"); // 1
    Undly_16_set.insert("CPP");
    Undly_16.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1928431359"); // 1
    Undly_16_set.insert("UnderlyingSecuritySubType_t_1928431359");
    Undly_16.add_attribute("MMY", "1252022299"); // 1
    Undly_16_set.insert("1252022299");
    Undly_16.add_attribute("Mat", "UnderlyingMaturityDate_t_990270313"); // 1
    Undly_16_set.insert("UnderlyingMaturityDate_t_990270313");
    Undly_16.add_attribute("MatTm", "794483277"); // 1
    Undly_16_set.insert("794483277");
    Undly_16.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1996172421"); // 1
    Undly_16_set.insert("UnderlyingCouponPaymentDate_t_1996172421");
    Undly_16.add_attribute("RestrctTyp", "MM"); // 1
    Undly_16_set.insert("MM");
    Undly_16.add_attribute("Snrty", "SB"); // 1
    Undly_16_set.insert("SB");
    Undly_16.add_attribute("NotlPctOut", "12200721.640000"); // 1
    Undly_16_set.insert("12200721.640000");
    Undly_16.add_attribute("OrigNotlPctOut", "18137716.780000"); // 1
    Undly_16_set.insert("18137716.780000");
    Undly_16.add_attribute("AttchPnt", "17075098.060000"); // 1
    Undly_16_set.insert("17075098.060000");
    Undly_16.add_attribute("DetchPnt", "11521146.620000"); // 1
    Undly_16_set.insert("11521146.620000");
    Undly_16.add_attribute("Issued", "UnderlyingIssueDate_t_202815917"); // 1
    Undly_16_set.insert("UnderlyingIssueDate_t_202815917");
    Undly_16.add_attribute("RepoCollSecTyp", "1134603363"); // 1
    Undly_16_set.insert("1134603363");
    Undly_16.add_attribute("RepoTrm", "1223946381"); // 1
    Undly_16_set.insert("1223946381");
    Undly_16.add_attribute("RepoRt", "1758993.500000"); // 1
    Undly_16_set.insert("1758993.500000");
    Undly_16.add_attribute("Fctr", "5759382.840000"); // 1
    Undly_16_set.insert("5759382.840000");
    Undly_16.add_attribute("CrdRtg", "UnderlyingCreditRating_t_46507647"); // 1
    Undly_16_set.insert("UnderlyingCreditRating_t_46507647");
    Undly_16.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_564129257"); // 1
    Undly_16_set.insert("UnderlyingInstrRegistry_t_564129257");
    Undly_16.add_attribute("Ctry", "1442207851"); // 1
    Undly_16_set.insert("1442207851");
    Undly_16.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_932211906"); // 1
    Undly_16_set.insert("UnderlyingStateOrProvinceOfIssue_t_932211906");
    Undly_16.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1565267345"); // 1
    Undly_16_set.insert("UnderlyingLocaleOfIssue_t_1565267345");
    Undly_16.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1237508084"); // 1
    Undly_16_set.insert("UnderlyingRedemptionDate_t_1237508084");
    Undly_16.add_attribute("StrkPx", "11810660.490000"); // 1
    Undly_16_set.insert("11810660.490000");
    Undly_16.add_attribute("StrkCcy", "EUR"); // 1
    Undly_16_set.insert("EUR");
    Undly_16.add_attribute("OptA", "1179448499"); // 1
    Undly_16_set.insert("1179448499");
    Undly_16.add_attribute("Mult", "4913392.880000"); // 1
    Undly_16_set.insert("4913392.880000");
    Undly_16.add_attribute("MultTyp", "2"); // 1
    Undly_16_set.insert("2");
    Undly_16.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_16_set.insert("2");
    Undly_16.add_attribute("UOM", "USD"); // 1
    Undly_16_set.insert("USD");
    Undly_16.add_attribute("UOMQty", "35148.510000"); // 1
    Undly_16_set.insert("35148.510000");
    Undly_16.add_attribute("PxUOM", "tn"); // 1
    Undly_16_set.insert("tn");
    Undly_16.add_attribute("PxUOMQty", "15135003.560000"); // 1
    Undly_16_set.insert("15135003.560000");
    Undly_16.add_attribute("TmUnit", "H"); // 1
    Undly_16_set.insert("H");
    Undly_16.add_attribute("ExerStyle", "0"); // 1
    Undly_16_set.insert("0");
    Undly_16.add_attribute("CpnRt", "13621891.290000"); // 1
    Undly_16_set.insert("13621891.290000");
    Undly_16.add_attribute("Exch", "UnderlyingSecurityExchange_t_242773659"); // 1
    Undly_16_set.insert("UnderlyingSecurityExchange_t_242773659");
    Undly_16.add_attribute("Issr", "UnderlyingIssuer_t_1893863579"); // 1
    Undly_16_set.insert("UnderlyingIssuer_t_1893863579");
    Undly_16.add_attribute("EncUndIssrLen", "434777646"); // 1
    Undly_16_set.insert("434777646");
    Undly_16.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2056545338"); // 1
    Undly_16_set.insert("EncodedUnderlyingIssuer_t_2056545338");
    Undly_16.add_attribute("Desc", "UnderlyingSecurityDesc_t_1453889737"); // 1
    Undly_16_set.insert("UnderlyingSecurityDesc_t_1453889737");
    Undly_16.add_attribute("EncUndSecDescLen", "1586892308"); // 1
    Undly_16_set.insert("1586892308");
    Undly_16.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_111877607"); // 1
    Undly_16_set.insert("EncodedUnderlyingSecurityDesc_t_111877607");
    Undly_16.add_attribute("CPPgm", "UnderlyingCPProgram_t_441009453"); // 1
    Undly_16_set.insert("UnderlyingCPProgram_t_441009453");
    Undly_16.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_663355041"); // 1
    Undly_16_set.insert("UnderlyingCPRegType_t_663355041");
    Undly_16.add_attribute("AllocPct", "2877769.570000"); // 1
    Undly_16_set.insert("2877769.570000");
    Undly_16.add_attribute("Ccy", "EUR"); // 1
    Undly_16_set.insert("EUR");
    Undly_16.add_attribute("Qty", "8519062.150000"); // 1
    Undly_16_set.insert("8519062.150000");
    Undly_16.add_attribute("SettlTyp", "2"); // 1
    Undly_16_set.insert("2");
    Undly_16.add_attribute("CashAmt", "UnderlyingCashAmount_t_1642074595"); // 1
    Undly_16_set.insert("UnderlyingCashAmount_t_1642074595");
    Undly_16.add_attribute("CashTyp", "FIXED"); // 1
    Undly_16_set.insert("FIXED");
    Undly_16.add_attribute("Px", "15491800.250000"); // 1
    Undly_16_set.insert("15491800.250000");
    Undly_16.add_attribute("DirtPx", "6756569.960000"); // 1
    Undly_16_set.insert("6756569.960000");
    Undly_16.add_attribute("EndPx", "13775848.840000"); // 1
    Undly_16_set.insert("13775848.840000");
    Undly_16.add_attribute("StartVal", "UnderlyingStartValue_t_751162714"); // 1
    Undly_16_set.insert("UnderlyingStartValue_t_751162714");
    Undly_16.add_attribute("CurVal", "UnderlyingCurrentValue_t_1855105495"); // 1
    Undly_16_set.insert("UnderlyingCurrentValue_t_1855105495");
    Undly_16.add_attribute("EndVal", "UnderlyingEndValue_t_1868924172"); // 1
    Undly_16_set.insert("UnderlyingEndValue_t_1868924172");
    Undly_16.add_attribute("AdjQty", "1882113.490000"); // 1
    Undly_16_set.insert("1882113.490000");
    Undly_16.add_attribute("FxRate", "893848.450000"); // 1
    Undly_16_set.insert("893848.450000");
    Undly_16.add_attribute("FxRateCalc", "D"); // 1
    Undly_16_set.insert("D");
    Undly_16.add_attribute("CapValu", "UnderlyingCapValue_t_191726200"); // 1
    Undly_16_set.insert("UnderlyingCapValue_t_191726200");
    Undly_16.add_attribute("SetMeth", "UnderlyingSettlMethod_t_252095554"); // 1
    Undly_16_set.insert("UnderlyingSettlMethod_t_252095554");
    Undly_16.add_attribute("PutCall", "1496418938"); // 1
    Undly_16_set.insert("1496418938");
    all_values.push_back(Undly_16_set);
    all_compo_names.insert("Undly_16_set");

    {
      xml_element UndAID_16{"UndAID"};
      multiset<string> UndAID_16_set;
      UndAID_16.add_attribute("AltID", "UnderlyingSecurityAltID_t_1185511365"); // 2
      UndAID_16_set.insert("UnderlyingSecurityAltID_t_1185511365");
      UndAID_16.add_attribute("AltIDSrc", "9"); // 2
      UndAID_16_set.insert("9");
      all_values.push_back(UndAID_16_set);
      all_compo_names.insert("UndAID_16_set");

      Undly_16.add_element(UndAID_16);
    }
    {
      xml_element Stip_25{"Stip"};
      multiset<string> Stip_25_set;
      Stip_25.add_attribute("Typ", "LOT"); // 2
      Stip_25_set.insert("LOT");
      Stip_25.add_attribute("Val", "UnderlyingStipValue_t_1428285025"); // 2
      Stip_25_set.insert("UnderlyingStipValue_t_1428285025");
      all_values.push_back(Stip_25_set);
      all_compo_names.insert("Stip_25_set");

      Undly_16.add_element(Stip_25);
    }
    {
      xml_element Pty_85{"Pty"};
      multiset<string> Pty_85_set;
      Pty_85.add_attribute("ID", "UnderlyingInstrumentPartyID_t_955669471"); // 2
      Pty_85_set.insert("UnderlyingInstrumentPartyID_t_955669471");
      Pty_85.add_attribute("Src", "G"); // 2
      Pty_85_set.insert("G");
      Pty_85.add_attribute("R", "28"); // 2
      Pty_85_set.insert("28");
      all_values.push_back(Pty_85_set);
      all_compo_names.insert("Pty_85_set");

      {
        xml_element Sub_85{"Sub"};
        multiset<string> Sub_85_set;
        Sub_85.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_262075560"); // 3
        Sub_85_set.insert("UnderlyingInstrumentPartySubID_t_262075560");
        Sub_85.add_attribute("Typ", "6"); // 3
        Sub_85_set.insert("6");
        all_values.push_back(Sub_85_set);
        all_compo_names.insert("Sub_85_set");

        Pty_85.add_element(Sub_85);
      }
      Undly_16.add_element(Pty_85);
    }
    elt.add_element(Undly_16);
  } // end Undly
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
