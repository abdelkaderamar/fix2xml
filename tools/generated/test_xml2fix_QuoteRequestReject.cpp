#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteRequestReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequestReject_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotReqRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequestReject_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_1772172714"); // 0
  QuoteRequestReject_message_t_0.insert("QuoteReqID_t_1772172714");
  elt.add_attribute("RFQReqID", "RFQReqID_t_1618647427"); // 0
  QuoteRequestReject_message_t_0.insert("RFQReqID_t_1618647427");
  elt.add_attribute("ReqRejRsn", "99"); // 0
  QuoteRequestReject_message_t_0.insert("99");
  elt.add_attribute("PrvtQt", "true"); // 0
  QuoteRequestReject_message_t_0.insert("true");
  elt.add_attribute("RspdntTyp", "3"); // 0
  QuoteRequestReject_message_t_0.insert("3");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  QuoteRequestReject_message_t_0.insert("true");
  elt.add_attribute("Txt", "Text_t_1323213708"); // 0
  QuoteRequestReject_message_t_0.insert("Text_t_1323213708");
  elt.add_attribute("EncTxtLen", "1287140338"); // 0
  QuoteRequestReject_message_t_0.insert("1287140338");
  elt.add_attribute("EncTxt", "EncodedText_t_1961126588"); // 0
  QuoteRequestReject_message_t_0.insert("EncodedText_t_1961126588");
  all_values.push_back(QuoteRequestReject_message_t_0);
  all_compo_names.insert("QuoteRequestReject_message_t");

  { // Hdr
    xml_element Hdr_71{"Hdr"};
    multiset<string> Hdr_71_set;
    Hdr_71.add_attribute("SeqNum", "522104694"); // 1
    Hdr_71_set.insert("522104694");
    Hdr_71.add_attribute("SID", "SenderCompID_t_1393834206"); // 1
    Hdr_71_set.insert("SenderCompID_t_1393834206");
    Hdr_71.add_attribute("TID", "TargetCompID_t_144599092"); // 1
    Hdr_71_set.insert("TargetCompID_t_144599092");
    Hdr_71.add_attribute("OBID", "OnBehalfOfCompID_t_1362588555"); // 1
    Hdr_71_set.insert("OnBehalfOfCompID_t_1362588555");
    Hdr_71.add_attribute("D2ID", "DeliverToCompID_t_1637183462"); // 1
    Hdr_71_set.insert("DeliverToCompID_t_1637183462");
    Hdr_71.add_attribute("SSub", "SenderSubID_t_1554123727"); // 1
    Hdr_71_set.insert("SenderSubID_t_1554123727");
    Hdr_71.add_attribute("SLoc", "SenderLocationID_t_104058549"); // 1
    Hdr_71_set.insert("SenderLocationID_t_104058549");
    Hdr_71.add_attribute("TSub", "TargetSubID_t_1369796473"); // 1
    Hdr_71_set.insert("TargetSubID_t_1369796473");
    Hdr_71.add_attribute("TLoc", "TargetLocationID_t_1284988599"); // 1
    Hdr_71_set.insert("TargetLocationID_t_1284988599");
    Hdr_71.add_attribute("OBSub", "OnBehalfOfSubID_t_1152518601"); // 1
    Hdr_71_set.insert("OnBehalfOfSubID_t_1152518601");
    Hdr_71.add_attribute("OBLoc", "OnBehalfOfLocationID_t_596277584"); // 1
    Hdr_71_set.insert("OnBehalfOfLocationID_t_596277584");
    Hdr_71.add_attribute("D2Sub", "DeliverToSubID_t_673611779"); // 1
    Hdr_71_set.insert("DeliverToSubID_t_673611779");
    Hdr_71.add_attribute("D2Loc", "DeliverToLocationID_t_105496050"); // 1
    Hdr_71_set.insert("DeliverToLocationID_t_105496050");
    Hdr_71.add_attribute("PosDup", "Y"); // 1
    Hdr_71_set.insert("Y");
    Hdr_71.add_attribute("PosRsnd", "N"); // 1
    Hdr_71_set.insert("N");
    Hdr_71.add_attribute("Snt", "SendingTime_t_238568343"); // 1
    Hdr_71_set.insert("SendingTime_t_238568343");
    Hdr_71.add_attribute("OrigSnt", "OrigSendingTime_t_2146282912"); // 1
    Hdr_71_set.insert("OrigSendingTime_t_2146282912");
    Hdr_71.add_attribute("MsgEncd", "MessageEncoding_t_79269181"); // 1
    Hdr_71_set.insert("MessageEncoding_t_79269181");
    all_values.push_back(Hdr_71_set);
    all_compo_names.insert("Hdr_71_set");

    {
      xml_element Hop_71{"Hop"};
      multiset<string> Hop_71_set;
      Hop_71.add_attribute("ID", "HopCompID_t_782538279"); // 2
      Hop_71_set.insert("HopCompID_t_782538279");
      Hop_71.add_attribute("Ref", "2010594726"); // 2
      Hop_71_set.insert("2010594726");
      Hop_71.add_attribute("Snt", "HopSendingTime_t_702392788"); // 2
      Hop_71_set.insert("HopSendingTime_t_702392788");
      all_values.push_back(Hop_71_set);
      all_compo_names.insert("Hop_71_set");

      Hdr_71.add_element(Hop_71);
    }
    elt.add_element(Hdr_71);
  } // end Hdr
  { // Pty
    xml_element Pty_345{"Pty"};
    multiset<string> Pty_345_set;
    Pty_345.add_attribute("ID", "RootPartyID_t_1635283792"); // 1
    Pty_345_set.insert("RootPartyID_t_1635283792");
    Pty_345.add_attribute("Src", "B"); // 1
    Pty_345_set.insert("B");
    Pty_345.add_attribute("R", "5"); // 1
    Pty_345_set.insert("5");
    all_values.push_back(Pty_345_set);
    all_compo_names.insert("Pty_345_set");

    {
      xml_element Sub_345{"Sub"};
      multiset<string> Sub_345_set;
      Sub_345.add_attribute("ID", "RootPartySubID_t_1437770144"); // 2
      Sub_345_set.insert("RootPartySubID_t_1437770144");
      Sub_345.add_attribute("Typ", "7"); // 2
      Sub_345_set.insert("7");
      all_values.push_back(Sub_345_set);
      all_compo_names.insert("Sub_345_set");

      Pty_345.add_element(Sub_345);
    }
    elt.add_element(Pty_345);
  } // end Pty
  { // Pty
    xml_element Pty_346{"Pty"};
    multiset<string> Pty_346_set;
    Pty_346.add_attribute("ID", "RootPartyID_t_1710634374"); // 1
    Pty_346_set.insert("RootPartyID_t_1710634374");
    Pty_346.add_attribute("Src", "E"); // 1
    Pty_346_set.insert("E");
    Pty_346.add_attribute("R", "36"); // 1
    Pty_346_set.insert("36");
    all_values.push_back(Pty_346_set);
    all_compo_names.insert("Pty_346_set");

    {
      xml_element Sub_346{"Sub"};
      multiset<string> Sub_346_set;
      Sub_346.add_attribute("ID", "RootPartySubID_t_1524277314"); // 2
      Sub_346_set.insert("RootPartySubID_t_1524277314");
      Sub_346.add_attribute("Typ", "6"); // 2
      Sub_346_set.insert("6");
      all_values.push_back(Sub_346_set);
      all_compo_names.insert("Sub_346_set");

      Pty_346.add_element(Sub_346);
    }
    elt.add_element(Pty_346);
  } // end Pty
  { // Pty
    xml_element Pty_347{"Pty"};
    multiset<string> Pty_347_set;
    Pty_347.add_attribute("ID", "RootPartyID_t_327903590"); // 1
    Pty_347_set.insert("RootPartyID_t_327903590");
    Pty_347.add_attribute("Src", "H"); // 1
    Pty_347_set.insert("H");
    Pty_347.add_attribute("R", "64"); // 1
    Pty_347_set.insert("64");
    all_values.push_back(Pty_347_set);
    all_compo_names.insert("Pty_347_set");

    {
      xml_element Sub_347{"Sub"};
      multiset<string> Sub_347_set;
      Sub_347.add_attribute("ID", "RootPartySubID_t_1965087053"); // 2
      Sub_347_set.insert("RootPartySubID_t_1965087053");
      Sub_347.add_attribute("Typ", "5"); // 2
      Sub_347_set.insert("5");
      all_values.push_back(Sub_347_set);
      all_compo_names.insert("Sub_347_set");

      Pty_347.add_element(Sub_347);
    }
    elt.add_element(Pty_347);
  } // end Pty
  { // QuotReqRej
    xml_element QuotReqRej_0{"QuotReqRej"};
    multiset<string> QuotReqRej_0_set;
    QuotReqRej_0.add_attribute("PrevClsPx", "11873998.780000"); // 1
    QuotReqRej_0_set.insert("11873998.780000");
    QuotReqRej_0.add_attribute("ReqTyp", "1"); // 1
    QuotReqRej_0_set.insert("1");
    QuotReqRej_0.add_attribute("Typ", "0"); // 1
    QuotReqRej_0_set.insert("0");
    QuotReqRej_0.add_attribute("SesID", "1"); // 1
    QuotReqRej_0_set.insert("1");
    QuotReqRej_0.add_attribute("SesSub", "7"); // 1
    QuotReqRej_0_set.insert("7");
    QuotReqRej_0.add_attribute("OrignDt", "TradeOriginationDate_t_1712783006"); // 1
    QuotReqRej_0_set.insert("TradeOriginationDate_t_1712783006");
    QuotReqRej_0.add_attribute("Side", "C"); // 1
    QuotReqRej_0_set.insert("C");
    QuotReqRej_0.add_attribute("QtyTyp", "2"); // 1
    QuotReqRej_0_set.insert("2");
    QuotReqRej_0.add_attribute("SettlTyp", "5"); // 1
    QuotReqRej_0_set.insert("5");
    QuotReqRej_0.add_attribute("SettlDt", "SettlDate_t_1400818859"); // 1
    QuotReqRej_0_set.insert("SettlDate_t_1400818859");
    QuotReqRej_0.add_attribute("SettlDt2", "SettlDate2_t_1860124668"); // 1
    QuotReqRej_0_set.insert("SettlDate2_t_1860124668");
    QuotReqRej_0.add_attribute("Qty2", "5864059.800000"); // 1
    QuotReqRej_0_set.insert("5864059.800000");
    QuotReqRej_0.add_attribute("Ccy", "CHF"); // 1
    QuotReqRej_0_set.insert("CHF");
    QuotReqRej_0.add_attribute("Acct", "Account_t_556978185"); // 1
    QuotReqRej_0_set.insert("Account_t_556978185");
    QuotReqRej_0.add_attribute("AcctIDSrc", "1"); // 1
    QuotReqRej_0_set.insert("1");
    QuotReqRej_0.add_attribute("AcctTyp", "6"); // 1
    QuotReqRej_0_set.insert("6");
    QuotReqRej_0.add_attribute("QuotPxTyp", "5"); // 1
    QuotReqRej_0_set.insert("5");
    QuotReqRej_0.add_attribute("OrdTyp", "K"); // 1
    QuotReqRej_0_set.insert("K");
    QuotReqRej_0.add_attribute("ExpireTm", "ExpireTime_t_383003071"); // 1
    QuotReqRej_0_set.insert("ExpireTime_t_383003071");
    QuotReqRej_0.add_attribute("TxnTm", "TransactTime_t_1126230291"); // 1
    QuotReqRej_0_set.insert("TransactTime_t_1126230291");
    QuotReqRej_0.add_attribute("PxTyp", "11"); // 1
    QuotReqRej_0_set.insert("11");
    QuotReqRej_0.add_attribute("Px", "14645561.030000"); // 1
    QuotReqRej_0_set.insert("14645561.030000");
    QuotReqRej_0.add_attribute("Px2", "5030239.570000"); // 1
    QuotReqRej_0_set.insert("5030239.570000");
    all_values.push_back(QuotReqRej_0_set);
    all_compo_names.insert("QuotReqRej_0_set");

    {
      xml_element Instrmt_63{"Instrmt"};
      multiset<string> Instrmt_63_set;
      Instrmt_63.add_attribute("Sym", "Symbol_t_1791121683"); // 2
      Instrmt_63_set.insert("Symbol_t_1791121683");
      Instrmt_63.add_attribute("Sfx", "CD"); // 2
      Instrmt_63_set.insert("CD");
      Instrmt_63.add_attribute("ID", "SecurityID_t_24416715"); // 2
      Instrmt_63_set.insert("SecurityID_t_24416715");
      Instrmt_63.add_attribute("Src", "I"); // 2
      Instrmt_63_set.insert("I");
      Instrmt_63.add_attribute("Prod", "5"); // 2
      Instrmt_63_set.insert("5");
      Instrmt_63.add_attribute("ProdCmplx", "ProductComplex_t_1099933201"); // 2
      Instrmt_63_set.insert("ProductComplex_t_1099933201");
      Instrmt_63.add_attribute("SecGrp", "SecurityGroup_t_449116196"); // 2
      Instrmt_63_set.insert("SecurityGroup_t_449116196");
      Instrmt_63.add_attribute("CFI", "CFICode_t_649979329"); // 2
      Instrmt_63_set.insert("CFICode_t_649979329");
      Instrmt_63.add_attribute("SecTyp", "EUCORP"); // 2
      Instrmt_63_set.insert("EUCORP");
      Instrmt_63.add_attribute("SubTyp", "SecuritySubType_t_2056403152"); // 2
      Instrmt_63_set.insert("SecuritySubType_t_2056403152");
      Instrmt_63.add_attribute("MMY", "286173143"); // 2
      Instrmt_63_set.insert("286173143");
      Instrmt_63.add_attribute("MatDt", "MaturityDate_t_52104205"); // 2
      Instrmt_63_set.insert("MaturityDate_t_52104205");
      Instrmt_63.add_attribute("MatTm", "1621702510"); // 2
      Instrmt_63_set.insert("1621702510");
      Instrmt_63.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1688192738"); // 2
      Instrmt_63_set.insert("SettleOnOpenFlag_t_1688192738");
      Instrmt_63.add_attribute("AsgnMeth", "1832959692"); // 2
      Instrmt_63_set.insert("1832959692");
      Instrmt_63.add_attribute("Status", "2"); // 2
      Instrmt_63_set.insert("2");
      Instrmt_63.add_attribute("CpnPmt", "CouponPaymentDate_t_941527949"); // 2
      Instrmt_63_set.insert("CouponPaymentDate_t_941527949");
      Instrmt_63.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_63_set.insert("MR");
      Instrmt_63.add_attribute("Snrty", "SR"); // 2
      Instrmt_63_set.insert("SR");
      Instrmt_63.add_attribute("NotlPctOut", "579742.390000"); // 2
      Instrmt_63_set.insert("579742.390000");
      Instrmt_63.add_attribute("OrigNotlPctOut", "19606345.220000"); // 2
      Instrmt_63_set.insert("19606345.220000");
      Instrmt_63.add_attribute("AttchPnt", "4214707.280000"); // 2
      Instrmt_63_set.insert("4214707.280000");
      Instrmt_63.add_attribute("DetchPnt", "8097043.220000"); // 2
      Instrmt_63_set.insert("8097043.220000");
      Instrmt_63.add_attribute("Issued", "IssueDate_t_401741251"); // 2
      Instrmt_63_set.insert("IssueDate_t_401741251");
      Instrmt_63.add_attribute("RepoCollSecTyp", "1984550294"); // 2
      Instrmt_63_set.insert("1984550294");
      Instrmt_63.add_attribute("RepoTrm", "851720901"); // 2
      Instrmt_63_set.insert("851720901");
      Instrmt_63.add_attribute("RepoRt", "7847443.220000"); // 2
      Instrmt_63_set.insert("7847443.220000");
      Instrmt_63.add_attribute("Fctr", "9632969.370000"); // 2
      Instrmt_63_set.insert("9632969.370000");
      Instrmt_63.add_attribute("CrdRtg", "CreditRating_t_1507237685"); // 2
      Instrmt_63_set.insert("CreditRating_t_1507237685");
      Instrmt_63.add_attribute("Rgstry", "InstrRegistry_t_101816777"); // 2
      Instrmt_63_set.insert("InstrRegistry_t_101816777");
      Instrmt_63.add_attribute("IssuCtry", "1466320895"); // 2
      Instrmt_63_set.insert("1466320895");
      Instrmt_63.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1150875720"); // 2
      Instrmt_63_set.insert("StateOrProvinceOfIssue_t_1150875720");
      Instrmt_63.add_attribute("Lcl", "LocaleOfIssue_t_1894276471"); // 2
      Instrmt_63_set.insert("LocaleOfIssue_t_1894276471");
      Instrmt_63.add_attribute("Redeem", "RedemptionDate_t_1490737610"); // 2
      Instrmt_63_set.insert("RedemptionDate_t_1490737610");
      Instrmt_63.add_attribute("StrkPx", "11452235.610000"); // 2
      Instrmt_63_set.insert("11452235.610000");
      Instrmt_63.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_63_set.insert("EUR");
      Instrmt_63.add_attribute("StrkMult", "15943397.570000"); // 2
      Instrmt_63_set.insert("15943397.570000");
      Instrmt_63.add_attribute("StrkValu", "20068352.510000"); // 2
      Instrmt_63_set.insert("20068352.510000");
      Instrmt_63.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_63_set.insert("2");
      Instrmt_63.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_63_set.insert("2");
      Instrmt_63.add_attribute("StrkPxBndryPrcsn", "1455247.460000"); // 2
      Instrmt_63_set.insert("1455247.460000");
      Instrmt_63.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_63_set.insert("3");
      Instrmt_63.add_attribute("OptAt", "977478123"); // 2
      Instrmt_63_set.insert("977478123");
      Instrmt_63.add_attribute("Mult", "18337174.840000"); // 2
      Instrmt_63_set.insert("18337174.840000");
      Instrmt_63.add_attribute("MultTyp", "0"); // 2
      Instrmt_63_set.insert("0");
      Instrmt_63.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_63_set.insert("1");
      Instrmt_63.add_attribute("MinPxIncr", "6277617.860000"); // 2
      Instrmt_63_set.insert("6277617.860000");
      Instrmt_63.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_891839115"); // 2
      Instrmt_63_set.insert("MinPriceIncrementAmount_t_891839115");
      Instrmt_63.add_attribute("UOM", "MMbbl"); // 2
      Instrmt_63_set.insert("MMbbl");
      Instrmt_63.add_attribute("UOMQty", "6857360.250000"); // 2
      Instrmt_63_set.insert("6857360.250000");
      Instrmt_63.add_attribute("PxUOM", "Bbl"); // 2
      Instrmt_63_set.insert("Bbl");
      Instrmt_63.add_attribute("PxUOMQty", "5415279.570000"); // 2
      Instrmt_63_set.insert("5415279.570000");
      Instrmt_63.add_attribute("SettlMeth", "P"); // 2
      Instrmt_63_set.insert("P");
      Instrmt_63.add_attribute("ExerStyle", "1"); // 2
      Instrmt_63_set.insert("1");
      Instrmt_63.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_63_set.insert("1");
      Instrmt_63.add_attribute("OptPayAmt", "OptPayoutAmount_t_199677600"); // 2
      Instrmt_63_set.insert("OptPayoutAmount_t_199677600");
      Instrmt_63.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_63_set.insert("INT");
      Instrmt_63.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_63_set.insert("FUT");
      Instrmt_63.add_attribute("ListMeth", "1"); // 2
      Instrmt_63_set.insert("1");
      Instrmt_63.add_attribute("CapPx", "19932923.400000"); // 2
      Instrmt_63_set.insert("19932923.400000");
      Instrmt_63.add_attribute("FlrPx", "6607287.880000"); // 2
      Instrmt_63_set.insert("6607287.880000");
      Instrmt_63.add_attribute("PutCall", "1"); // 2
      Instrmt_63_set.insert("1");
      Instrmt_63.add_attribute("FlexInd", "false"); // 2
      Instrmt_63_set.insert("false");
      Instrmt_63.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_63_set.insert("true");
      Instrmt_63.add_attribute("TmUnit", "D"); // 2
      Instrmt_63_set.insert("D");
      Instrmt_63.add_attribute("CpnRt", "9494574.380000"); // 2
      Instrmt_63_set.insert("9494574.380000");
      Instrmt_63.add_attribute("Exch", "SecurityExchange_t_447169914"); // 2
      Instrmt_63_set.insert("SecurityExchange_t_447169914");
      Instrmt_63.add_attribute("PosLmt", "1302387027"); // 2
      Instrmt_63_set.insert("1302387027");
      Instrmt_63.add_attribute("NTPosLmt", "808809041"); // 2
      Instrmt_63_set.insert("808809041");
      Instrmt_63.add_attribute("Issr", "Issuer_t_55828067"); // 2
      Instrmt_63_set.insert("Issuer_t_55828067");
      Instrmt_63.add_attribute("EncIssrLen", "658162640"); // 2
      Instrmt_63_set.insert("658162640");
      Instrmt_63.add_attribute("EncIssr", "EncodedIssuer_t_954333788"); // 2
      Instrmt_63_set.insert("EncodedIssuer_t_954333788");
      Instrmt_63.add_attribute("Desc", "SecurityDesc_t_1864074073"); // 2
      Instrmt_63_set.insert("SecurityDesc_t_1864074073");
      Instrmt_63.add_attribute("EncSecDescLen", "1635640763"); // 2
      Instrmt_63_set.insert("1635640763");
      Instrmt_63.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_640567624"); // 2
      Instrmt_63_set.insert("EncodedSecurityDesc_t_640567624");
      Instrmt_63.add_attribute("Pool", "Pool_t_1210312475"); // 2
      Instrmt_63_set.insert("Pool_t_1210312475");
      Instrmt_63.add_attribute("CSetMo", "1891205449"); // 2
      Instrmt_63_set.insert("1891205449");
      Instrmt_63.add_attribute("CPPgm", "1"); // 2
      Instrmt_63_set.insert("1");
      Instrmt_63.add_attribute("CPRegT", "CPRegType_t_2102151591"); // 2
      Instrmt_63_set.insert("CPRegType_t_2102151591");
      Instrmt_63.add_attribute("Dated", "DatedDate_t_2011262678"); // 2
      Instrmt_63_set.insert("DatedDate_t_2011262678");
      Instrmt_63.add_attribute("IntAcrl", "InterestAccrualDate_t_1954065436"); // 2
      Instrmt_63_set.insert("InterestAccrualDate_t_1954065436");
      all_values.push_back(Instrmt_63_set);
      all_compo_names.insert("Instrmt_63_set");

      {
        xml_element AID_66{"AID"};
        multiset<string> AID_66_set;
        AID_66.add_attribute("AltID", "SecurityAltID_t_659657932"); // 3
        AID_66_set.insert("SecurityAltID_t_659657932");
        AID_66.add_attribute("AltIDSrc", "K"); // 3
        AID_66_set.insert("K");
        all_values.push_back(AID_66_set);
        all_compo_names.insert("AID_66_set");

        Instrmt_63.add_element(AID_66);
      }
      {
        xml_element SecXML_66{"SecXML"};
        multiset<string> SecXML_66_set;
        SecXML_66.add_attribute("Schema", "SecurityXMLSchema_t_1302022135"); // 3
        SecXML_66_set.insert("SecurityXMLSchema_t_1302022135");
        all_values.push_back(SecXML_66_set);
        all_compo_names.insert("SecXML_66_set");

        Instrmt_63.add_element(SecXML_66);
      }
      {
        xml_element Evnt_66{"Evnt"};
        multiset<string> Evnt_66_set;
        Evnt_66.add_attribute("EventTyp", "13"); // 3
        Evnt_66_set.insert("13");
        Evnt_66.add_attribute("Dt", "EventDate_t_783901591"); // 3
        Evnt_66_set.insert("EventDate_t_783901591");
        Evnt_66.add_attribute("Tm", "EventTime_t_1501699736"); // 3
        Evnt_66_set.insert("EventTime_t_1501699736");
        Evnt_66.add_attribute("Px", "15103810.870000"); // 3
        Evnt_66_set.insert("15103810.870000");
        Evnt_66.add_attribute("Txt", "EventText_t_2125793132"); // 3
        Evnt_66_set.insert("EventText_t_2125793132");
        all_values.push_back(Evnt_66_set);
        all_compo_names.insert("Evnt_66_set");

        Instrmt_63.add_element(Evnt_66);
      }
      {
        xml_element Pty_348{"Pty"};
        multiset<string> Pty_348_set;
        Pty_348.add_attribute("ID", "InstrumentPartyID_t_1061131373"); // 3
        Pty_348_set.insert("InstrumentPartyID_t_1061131373");
        Pty_348.add_attribute("Src", "C"); // 3
        Pty_348_set.insert("C");
        Pty_348.add_attribute("R", "43"); // 3
        Pty_348_set.insert("43");
        all_values.push_back(Pty_348_set);
        all_compo_names.insert("Pty_348_set");

        {
          xml_element Sub_348{"Sub"};
          multiset<string> Sub_348_set;
          Sub_348.add_attribute("ID", "InstrumentPartySubID_t_1771438731"); // 4
          Sub_348_set.insert("InstrumentPartySubID_t_1771438731");
          Sub_348.add_attribute("Typ", "20"); // 4
          Sub_348_set.insert("20");
          all_values.push_back(Sub_348_set);
          all_compo_names.insert("Sub_348_set");

          Pty_348.add_element(Sub_348);
        }
        Instrmt_63.add_element(Pty_348);
      }
      {
        xml_element CmplxEvnt_63{"CmplxEvnt"};
        multiset<string> CmplxEvnt_63_set;
        CmplxEvnt_63.add_attribute("Typ", "4"); // 3
        CmplxEvnt_63_set.insert("4");
        CmplxEvnt_63.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1479486001"); // 3
        CmplxEvnt_63_set.insert("ComplexOptPayoutAmount_t_1479486001");
        CmplxEvnt_63.add_attribute("Px", "18982487.330000"); // 3
        CmplxEvnt_63_set.insert("18982487.330000");
        CmplxEvnt_63.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_63_set.insert("3");
        CmplxEvnt_63.add_attribute("PxBndryPrcsn", "6343893.810000"); // 3
        CmplxEvnt_63_set.insert("6343893.810000");
        CmplxEvnt_63.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_63_set.insert("3");
        CmplxEvnt_63.add_attribute("Cond", "1"); // 3
        CmplxEvnt_63_set.insert("1");
        all_values.push_back(CmplxEvnt_63_set);
        all_compo_names.insert("CmplxEvnt_63_set");

        {
          xml_element EvntDts_63{"EvntDts"};
          multiset<string> EvntDts_63_set;
          EvntDts_63.add_attribute("StartDt", "ComplexEventStartDate_t_1292552021"); // 4
          EvntDts_63_set.insert("ComplexEventStartDate_t_1292552021");
          EvntDts_63.add_attribute("EndDt", "ComplexEventEndDate_t_1513907914"); // 4
          EvntDts_63_set.insert("ComplexEventEndDate_t_1513907914");
          all_values.push_back(EvntDts_63_set);
          all_compo_names.insert("EvntDts_63_set");

          {
            xml_element EvntTms_63{"EvntTms"};
            multiset<string> EvntTms_63_set;
            EvntTms_63.add_attribute("StartTm", "862609429"); // 5
            EvntTms_63_set.insert("862609429");
            EvntTms_63.add_attribute("EndTm", "780709137"); // 5
            EvntTms_63_set.insert("780709137");
            all_values.push_back(EvntTms_63_set);
            all_compo_names.insert("EvntTms_63_set");

            EvntDts_63.add_element(EvntTms_63);
          }
          CmplxEvnt_63.add_element(EvntDts_63);
        }
        Instrmt_63.add_element(CmplxEvnt_63);
      }
      QuotReqRej_0.add_element(Instrmt_63);
    }
    {
      xml_element FinDetls_21{"FinDetls"};
      multiset<string> FinDetls_21_set;
      FinDetls_21.add_attribute("AgmtDesc", "AgreementDesc_t_6991891"); // 2
      FinDetls_21_set.insert("AgreementDesc_t_6991891");
      FinDetls_21.add_attribute("AgmtID", "AgreementID_t_2072921904"); // 2
      FinDetls_21_set.insert("AgreementID_t_2072921904");
      FinDetls_21.add_attribute("AgmtDt", "AgreementDate_t_524430938"); // 2
      FinDetls_21_set.insert("AgreementDate_t_524430938");
      FinDetls_21.add_attribute("AgmtCcy", "EUR"); // 2
      FinDetls_21_set.insert("EUR");
      FinDetls_21.add_attribute("TrmTyp", "2"); // 2
      FinDetls_21_set.insert("2");
      FinDetls_21.add_attribute("StartDt", "StartDate_t_1081903089"); // 2
      FinDetls_21_set.insert("StartDate_t_1081903089");
      FinDetls_21.add_attribute("EndDt", "EndDate_t_539764132"); // 2
      FinDetls_21_set.insert("EndDate_t_539764132");
      FinDetls_21.add_attribute("DlvryTyp", "1"); // 2
      FinDetls_21_set.insert("1");
      FinDetls_21.add_attribute("MgnRatio", "2364415.770000"); // 2
      FinDetls_21_set.insert("2364415.770000");
      all_values.push_back(FinDetls_21_set);
      all_compo_names.insert("FinDetls_21_set");

      QuotReqRej_0.add_element(FinDetls_21);
    }
    {
      xml_element Undly_87{"Undly"};
      multiset<string> Undly_87_set;
      Undly_87.add_attribute("Sym", "UnderlyingSymbol_t_158669657"); // 2
      Undly_87_set.insert("UnderlyingSymbol_t_158669657");
      Undly_87.add_attribute("Sfx", "CD"); // 2
      Undly_87_set.insert("CD");
      Undly_87.add_attribute("ID", "UnderlyingSecurityID_t_1738141313"); // 2
      Undly_87_set.insert("UnderlyingSecurityID_t_1738141313");
      Undly_87.add_attribute("Src", "K"); // 2
      Undly_87_set.insert("K");
      Undly_87.add_attribute("Prod", "11"); // 2
      Undly_87_set.insert("11");
      Undly_87.add_attribute("CFI", "UnderlyingCFICode_t_651789038"); // 2
      Undly_87_set.insert("UnderlyingCFICode_t_651789038");
      Undly_87.add_attribute("SecTyp", "SUPRA"); // 2
      Undly_87_set.insert("SUPRA");
      Undly_87.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_47282657"); // 2
      Undly_87_set.insert("UnderlyingSecuritySubType_t_47282657");
      Undly_87.add_attribute("MMY", "275744121"); // 2
      Undly_87_set.insert("275744121");
      Undly_87.add_attribute("Mat", "UnderlyingMaturityDate_t_1826548171"); // 2
      Undly_87_set.insert("UnderlyingMaturityDate_t_1826548171");
      Undly_87.add_attribute("MatTm", "690303680"); // 2
      Undly_87_set.insert("690303680");
      Undly_87.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1755230123"); // 2
      Undly_87_set.insert("UnderlyingCouponPaymentDate_t_1755230123");
      Undly_87.add_attribute("RestrctTyp", "FR"); // 2
      Undly_87_set.insert("FR");
      Undly_87.add_attribute("Snrty", "SB"); // 2
      Undly_87_set.insert("SB");
      Undly_87.add_attribute("NotlPctOut", "2421358.560000"); // 2
      Undly_87_set.insert("2421358.560000");
      Undly_87.add_attribute("OrigNotlPctOut", "21368873.820000"); // 2
      Undly_87_set.insert("21368873.820000");
      Undly_87.add_attribute("AttchPnt", "7790299.730000"); // 2
      Undly_87_set.insert("7790299.730000");
      Undly_87.add_attribute("DetchPnt", "15346878.770000"); // 2
      Undly_87_set.insert("15346878.770000");
      Undly_87.add_attribute("Issued", "UnderlyingIssueDate_t_1503311649"); // 2
      Undly_87_set.insert("UnderlyingIssueDate_t_1503311649");
      Undly_87.add_attribute("RepoCollSecTyp", "1641639402"); // 2
      Undly_87_set.insert("1641639402");
      Undly_87.add_attribute("RepoTrm", "167913366"); // 2
      Undly_87_set.insert("167913366");
      Undly_87.add_attribute("RepoRt", "15103035.400000"); // 2
      Undly_87_set.insert("15103035.400000");
      Undly_87.add_attribute("Fctr", "15670776.590000"); // 2
      Undly_87_set.insert("15670776.590000");
      Undly_87.add_attribute("CrdRtg", "UnderlyingCreditRating_t_692344305"); // 2
      Undly_87_set.insert("UnderlyingCreditRating_t_692344305");
      Undly_87.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_638141193"); // 2
      Undly_87_set.insert("UnderlyingInstrRegistry_t_638141193");
      Undly_87.add_attribute("Ctry", "1447183858"); // 2
      Undly_87_set.insert("1447183858");
      Undly_87.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1080554274"); // 2
      Undly_87_set.insert("UnderlyingStateOrProvinceOfIssue_t_1080554274");
      Undly_87.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1720044283"); // 2
      Undly_87_set.insert("UnderlyingLocaleOfIssue_t_1720044283");
      Undly_87.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1986947990"); // 2
      Undly_87_set.insert("UnderlyingRedemptionDate_t_1986947990");
      Undly_87.add_attribute("StrkPx", "18740712.310000"); // 2
      Undly_87_set.insert("18740712.310000");
      Undly_87.add_attribute("StrkCcy", "EUR"); // 2
      Undly_87_set.insert("EUR");
      Undly_87.add_attribute("OptA", "1304006131"); // 2
      Undly_87_set.insert("1304006131");
      Undly_87.add_attribute("Mult", "15471435.250000"); // 2
      Undly_87_set.insert("15471435.250000");
      Undly_87.add_attribute("MultTyp", "0"); // 2
      Undly_87_set.insert("0");
      Undly_87.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_87_set.insert("1");
      Undly_87.add_attribute("UOM", "Bu"); // 2
      Undly_87_set.insert("Bu");
      Undly_87.add_attribute("UOMQty", "3974579.720000"); // 2
      Undly_87_set.insert("3974579.720000");
      Undly_87.add_attribute("PxUOM", "Bcf"); // 2
      Undly_87_set.insert("Bcf");
      Undly_87.add_attribute("PxUOMQty", "3271930.370000"); // 2
      Undly_87_set.insert("3271930.370000");
      Undly_87.add_attribute("TmUnit", "S"); // 2
      Undly_87_set.insert("S");
      Undly_87.add_attribute("ExerStyle", "1"); // 2
      Undly_87_set.insert("1");
      Undly_87.add_attribute("CpnRt", "20824231.600000"); // 2
      Undly_87_set.insert("20824231.600000");
      Undly_87.add_attribute("Exch", "UnderlyingSecurityExchange_t_1653835751"); // 2
      Undly_87_set.insert("UnderlyingSecurityExchange_t_1653835751");
      Undly_87.add_attribute("Issr", "UnderlyingIssuer_t_1082847824"); // 2
      Undly_87_set.insert("UnderlyingIssuer_t_1082847824");
      Undly_87.add_attribute("EncUndIssrLen", "177075368"); // 2
      Undly_87_set.insert("177075368");
      Undly_87.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1643239485"); // 2
      Undly_87_set.insert("EncodedUnderlyingIssuer_t_1643239485");
      Undly_87.add_attribute("Desc", "UnderlyingSecurityDesc_t_1861877797"); // 2
      Undly_87_set.insert("UnderlyingSecurityDesc_t_1861877797");
      Undly_87.add_attribute("EncUndSecDescLen", "1711763245"); // 2
      Undly_87_set.insert("1711763245");
      Undly_87.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_999067486"); // 2
      Undly_87_set.insert("EncodedUnderlyingSecurityDesc_t_999067486");
      Undly_87.add_attribute("CPPgm", "UnderlyingCPProgram_t_1356033552"); // 2
      Undly_87_set.insert("UnderlyingCPProgram_t_1356033552");
      Undly_87.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1879676612"); // 2
      Undly_87_set.insert("UnderlyingCPRegType_t_1879676612");
      Undly_87.add_attribute("AllocPct", "3618873.780000"); // 2
      Undly_87_set.insert("3618873.780000");
      Undly_87.add_attribute("Ccy", "CHF"); // 2
      Undly_87_set.insert("CHF");
      Undly_87.add_attribute("Qty", "10000285.720000"); // 2
      Undly_87_set.insert("10000285.720000");
      Undly_87.add_attribute("SettlTyp", "5"); // 2
      Undly_87_set.insert("5");
      Undly_87.add_attribute("CashAmt", "UnderlyingCashAmount_t_1505091543"); // 2
      Undly_87_set.insert("UnderlyingCashAmount_t_1505091543");
      Undly_87.add_attribute("CashTyp", "DIFF"); // 2
      Undly_87_set.insert("DIFF");
      Undly_87.add_attribute("Px", "20622757.640000"); // 2
      Undly_87_set.insert("20622757.640000");
      Undly_87.add_attribute("DirtPx", "12316791.260000"); // 2
      Undly_87_set.insert("12316791.260000");
      Undly_87.add_attribute("EndPx", "3815914.190000"); // 2
      Undly_87_set.insert("3815914.190000");
      Undly_87.add_attribute("StartVal", "UnderlyingStartValue_t_2060409763"); // 2
      Undly_87_set.insert("UnderlyingStartValue_t_2060409763");
      Undly_87.add_attribute("CurVal", "UnderlyingCurrentValue_t_388201609"); // 2
      Undly_87_set.insert("UnderlyingCurrentValue_t_388201609");
      Undly_87.add_attribute("EndVal", "UnderlyingEndValue_t_1928734944"); // 2
      Undly_87_set.insert("UnderlyingEndValue_t_1928734944");
      Undly_87.add_attribute("AdjQty", "15801108.590000"); // 2
      Undly_87_set.insert("15801108.590000");
      Undly_87.add_attribute("FxRate", "11004521.260000"); // 2
      Undly_87_set.insert("11004521.260000");
      Undly_87.add_attribute("FxRateCalc", "D"); // 2
      Undly_87_set.insert("D");
      Undly_87.add_attribute("CapValu", "UnderlyingCapValue_t_1977568831"); // 2
      Undly_87_set.insert("UnderlyingCapValue_t_1977568831");
      Undly_87.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1859985300"); // 2
      Undly_87_set.insert("UnderlyingSettlMethod_t_1859985300");
      Undly_87.add_attribute("PutCall", "159893248"); // 2
      Undly_87_set.insert("159893248");
      all_values.push_back(Undly_87_set);
      all_compo_names.insert("Undly_87_set");

      {
        xml_element UndAID_87{"UndAID"};
        multiset<string> UndAID_87_set;
        UndAID_87.add_attribute("AltID", "UnderlyingSecurityAltID_t_2054091326"); // 3
        UndAID_87_set.insert("UnderlyingSecurityAltID_t_2054091326");
        UndAID_87.add_attribute("AltIDSrc", "B"); // 3
        UndAID_87_set.insert("B");
        all_values.push_back(UndAID_87_set);
        all_compo_names.insert("UndAID_87_set");

        Undly_87.add_element(UndAID_87);
      }
      {
        xml_element Stip_130{"Stip"};
        multiset<string> Stip_130_set;
        Stip_130.add_attribute("Typ", "PSA"); // 3
        Stip_130_set.insert("PSA");
        Stip_130.add_attribute("Val", "UnderlyingStipValue_t_1560443429"); // 3
        Stip_130_set.insert("UnderlyingStipValue_t_1560443429");
        all_values.push_back(Stip_130_set);
        all_compo_names.insert("Stip_130_set");

        Undly_87.add_element(Stip_130);
      }
      {
        xml_element Pty_349{"Pty"};
        multiset<string> Pty_349_set;
        Pty_349.add_attribute("ID", "UnderlyingInstrumentPartyID_t_97702682"); // 3
        Pty_349_set.insert("UnderlyingInstrumentPartyID_t_97702682");
        Pty_349.add_attribute("Src", "3"); // 3
        Pty_349_set.insert("3");
        Pty_349.add_attribute("R", "69"); // 3
        Pty_349_set.insert("69");
        all_values.push_back(Pty_349_set);
        all_compo_names.insert("Pty_349_set");

        {
          xml_element Sub_349{"Sub"};
          multiset<string> Sub_349_set;
          Sub_349.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1959580480"); // 4
          Sub_349_set.insert("UnderlyingInstrumentPartySubID_t_1959580480");
          Sub_349.add_attribute("Typ", "9"); // 4
          Sub_349_set.insert("9");
          all_values.push_back(Sub_349_set);
          all_compo_names.insert("Sub_349_set");

          Pty_349.add_element(Sub_349);
        }
        Undly_87.add_element(Pty_349);
      }
      QuotReqRej_0.add_element(Undly_87);
    }
    {
      xml_element OrdQty_22{"OrdQty"};
      multiset<string> OrdQty_22_set;
      OrdQty_22.add_attribute("Qty", "20552667.530000"); // 2
      OrdQty_22_set.insert("20552667.530000");
      OrdQty_22.add_attribute("Cash", "11681303.840000"); // 2
      OrdQty_22_set.insert("11681303.840000");
      OrdQty_22.add_attribute("Pct", "17158643.380000"); // 2
      OrdQty_22_set.insert("17158643.380000");
      OrdQty_22.add_attribute("RndDir", "1"); // 2
      OrdQty_22_set.insert("1");
      OrdQty_22.add_attribute("RndMod", "19437579.470000"); // 2
      OrdQty_22_set.insert("19437579.470000");
      all_values.push_back(OrdQty_22_set);
      all_compo_names.insert("OrdQty_22_set");

      QuotReqRej_0.add_element(OrdQty_22);
    }
    {
      xml_element Stip_131{"Stip"};
      multiset<string> Stip_131_set;
      Stip_131.add_attribute("Typ", "CPR"); // 2
      Stip_131_set.insert("CPR");
      Stip_131.add_attribute("Val", "StipulationValue_t_1269699056"); // 2
      Stip_131_set.insert("StipulationValue_t_1269699056");
      all_values.push_back(Stip_131_set);
      all_compo_names.insert("Stip_131_set");

      QuotReqRej_0.add_element(Stip_131);
    }
    {
      xml_element Leg_75{"Leg"};
      multiset<string> Leg_75_set;
      Leg_75.add_attribute("Qty", "20190857.200000"); // 2
      Leg_75_set.insert("20190857.200000");
      Leg_75.add_attribute("OrdQty", "14980095.020000"); // 2
      Leg_75_set.insert("14980095.020000");
      Leg_75.add_attribute("SwapTyp", "5"); // 2
      Leg_75_set.insert("5");
      Leg_75.add_attribute("SettlTyp", "4"); // 2
      Leg_75_set.insert("4");
      Leg_75.add_attribute("SettlDt", "LegSettlDate_t_582204980"); // 2
      Leg_75_set.insert("LegSettlDate_t_582204980");
      Leg_75.add_attribute("RefID", "LegRefID_t_76396034"); // 2
      Leg_75_set.insert("LegRefID_t_76396034");
      all_values.push_back(Leg_75_set);
      all_compo_names.insert("Leg_75_set");

      {
        xml_element Leg_76{"Leg"};
        multiset<string> Leg_76_set;
        Leg_76.add_attribute("Sym", "LegSymbol_t_1846803952"); // 3
        Leg_76_set.insert("LegSymbol_t_1846803952");
        Leg_76.add_attribute("Sfx", "WI"); // 3
        Leg_76_set.insert("WI");
        Leg_76.add_attribute("ID", "LegSecurityID_t_2005130978"); // 3
        Leg_76_set.insert("LegSecurityID_t_2005130978");
        Leg_76.add_attribute("Src", "M"); // 3
        Leg_76_set.insert("M");
        Leg_76.add_attribute("Prod", "12"); // 3
        Leg_76_set.insert("12");
        Leg_76.add_attribute("CFI", "LegCFICode_t_1837831189"); // 3
        Leg_76_set.insert("LegCFICode_t_1837831189");
        Leg_76.add_attribute("SecTyp", "EUFRN"); // 3
        Leg_76_set.insert("EUFRN");
        Leg_76.add_attribute("SecSubTyp", "LegSecuritySubType_t_1783360367"); // 3
        Leg_76_set.insert("LegSecuritySubType_t_1783360367");
        Leg_76.add_attribute("MMY", "1997724438"); // 3
        Leg_76_set.insert("1997724438");
        Leg_76.add_attribute("Mat", "LegMaturityDate_t_1016124025"); // 3
        Leg_76_set.insert("LegMaturityDate_t_1016124025");
        Leg_76.add_attribute("MatTm", "798215226"); // 3
        Leg_76_set.insert("798215226");
        Leg_76.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2092557198"); // 3
        Leg_76_set.insert("LegCouponPaymentDate_t_2092557198");
        Leg_76.add_attribute("Issued", "LegIssueDate_t_429083807"); // 3
        Leg_76_set.insert("LegIssueDate_t_429083807");
        Leg_76.add_attribute("RepoCollSecTyp", "895917908"); // 3
        Leg_76_set.insert("895917908");
        Leg_76.add_attribute("RepoTrm", "216981679"); // 3
        Leg_76_set.insert("216981679");
        Leg_76.add_attribute("RepoRt", "14852830.740000"); // 3
        Leg_76_set.insert("14852830.740000");
        Leg_76.add_attribute("Fctr", "7080147.400000"); // 3
        Leg_76_set.insert("7080147.400000");
        Leg_76.add_attribute("CrdRtg", "LegCreditRating_t_53169405"); // 3
        Leg_76_set.insert("LegCreditRating_t_53169405");
        Leg_76.add_attribute("Rgstry", "LegInstrRegistry_t_1393066179"); // 3
        Leg_76_set.insert("LegInstrRegistry_t_1393066179");
        Leg_76.add_attribute("Ctry", "1876145124"); // 3
        Leg_76_set.insert("1876145124");
        Leg_76.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1769033743"); // 3
        Leg_76_set.insert("LegStateOrProvinceOfIssue_t_1769033743");
        Leg_76.add_attribute("Lcl", "LegLocaleOfIssue_t_1662736663"); // 3
        Leg_76_set.insert("LegLocaleOfIssue_t_1662736663");
        Leg_76.add_attribute("Redeem", "LegRedemptionDate_t_1672419423"); // 3
        Leg_76_set.insert("LegRedemptionDate_t_1672419423");
        Leg_76.add_attribute("Strk", "17619517.020000"); // 3
        Leg_76_set.insert("17619517.020000");
        Leg_76.add_attribute("StrkCcy", "USD"); // 3
        Leg_76_set.insert("USD");
        Leg_76.add_attribute("OptA", "1112477556"); // 3
        Leg_76_set.insert("1112477556");
        Leg_76.add_attribute("Cmult", "4797566.860000"); // 3
        Leg_76_set.insert("4797566.860000");
        Leg_76.add_attribute("MultTyp", "2"); // 3
        Leg_76_set.insert("2");
        Leg_76.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_76_set.insert("1");
        Leg_76.add_attribute("UOM", "MMbbl"); // 3
        Leg_76_set.insert("MMbbl");
        Leg_76.add_attribute("UOMQty", "10297359.880000"); // 3
        Leg_76_set.insert("10297359.880000");
        Leg_76.add_attribute("PxUOM", "Alw"); // 3
        Leg_76_set.insert("Alw");
        Leg_76.add_attribute("PxUOMQty", "4138000.500000"); // 3
        Leg_76_set.insert("4138000.500000");
        Leg_76.add_attribute("TmUnit", "D"); // 3
        Leg_76_set.insert("D");
        Leg_76.add_attribute("ExerStyle", "0"); // 3
        Leg_76_set.insert("0");
        Leg_76.add_attribute("CpnRt", "1041475.920000"); // 3
        Leg_76_set.insert("1041475.920000");
        Leg_76.add_attribute("Exch", "LegSecurityExchange_t_1271199851"); // 3
        Leg_76_set.insert("LegSecurityExchange_t_1271199851");
        Leg_76.add_attribute("Issr", "LegIssuer_t_76857264"); // 3
        Leg_76_set.insert("LegIssuer_t_76857264");
        Leg_76.add_attribute("EncLegIssrLen", "2101872030"); // 3
        Leg_76_set.insert("2101872030");
        Leg_76.add_attribute("EncLegIssr", "EncodedLegIssuer_t_139840228"); // 3
        Leg_76_set.insert("EncodedLegIssuer_t_139840228");
        Leg_76.add_attribute("Desc", "LegSecurityDesc_t_875072490"); // 3
        Leg_76_set.insert("LegSecurityDesc_t_875072490");
        Leg_76.add_attribute("EncLegSecDescLen", "2046945580"); // 3
        Leg_76_set.insert("2046945580");
        Leg_76.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_568924035"); // 3
        Leg_76_set.insert("EncodedLegSecurityDesc_t_568924035");
        Leg_76.add_attribute("RatioQty", "17709903.990000"); // 3
        Leg_76_set.insert("17709903.990000");
        Leg_76.add_attribute("Side", "C"); // 3
        Leg_76_set.insert("C");
        Leg_76.add_attribute("Ccy", "CAN"); // 3
        Leg_76_set.insert("CAN");
        Leg_76.add_attribute("Pool", "LegPool_t_169613016"); // 3
        Leg_76_set.insert("LegPool_t_169613016");
        Leg_76.add_attribute("Dated", "LegDatedDate_t_1299789641"); // 3
        Leg_76_set.insert("LegDatedDate_t_1299789641");
        Leg_76.add_attribute("CSetMo", "60182968"); // 3
        Leg_76_set.insert("60182968");
        Leg_76.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1938646759"); // 3
        Leg_76_set.insert("LegInterestAccrualDate_t_1938646759");
        Leg_76.add_attribute("PutCall", "815042656"); // 3
        Leg_76_set.insert("815042656");
        Leg_76.add_attribute("LegOptionRatio", "17326023.910000"); // 3
        Leg_76_set.insert("17326023.910000");
        Leg_76.add_attribute("Px", "15531148.130000"); // 3
        Leg_76_set.insert("15531148.130000");
        all_values.push_back(Leg_76_set);
        all_compo_names.insert("Leg_76_set");

        {
          xml_element LegAID_73{"LegAID"};
          multiset<string> LegAID_73_set;
          LegAID_73.add_attribute("SecAltID", "LegSecurityAltID_t_1599994728"); // 4
          LegAID_73_set.insert("LegSecurityAltID_t_1599994728");
          LegAID_73.add_attribute("SecAltIDSrc", "8"); // 4
          LegAID_73_set.insert("8");
          all_values.push_back(LegAID_73_set);
          all_compo_names.insert("LegAID_73_set");

          Leg_76.add_element(LegAID_73);
        }
        Leg_75.add_element(Leg_76);
      }
      {
        xml_element Stip_132{"Stip"};
        multiset<string> Stip_132_set;
        Stip_132.add_attribute("StipTyp", "AMT"); // 3
        Stip_132_set.insert("AMT");
        Stip_132.add_attribute("StipVal", "LegStipulationValue_t_2079751414"); // 3
        Stip_132_set.insert("LegStipulationValue_t_2079751414");
        all_values.push_back(Stip_132_set);
        all_compo_names.insert("Stip_132_set");

        Leg_75.add_element(Stip_132);
      }
      {
        xml_element Pty_350{"Pty"};
        multiset<string> Pty_350_set;
        Pty_350.add_attribute("ID", "NestedPartyID_t_312072276"); // 3
        Pty_350_set.insert("NestedPartyID_t_312072276");
        Pty_350.add_attribute("Src", "A"); // 3
        Pty_350_set.insert("A");
        Pty_350.add_attribute("R", "54"); // 3
        Pty_350_set.insert("54");
        all_values.push_back(Pty_350_set);
        all_compo_names.insert("Pty_350_set");

        {
          xml_element Sub_350{"Sub"};
          multiset<string> Sub_350_set;
          Sub_350.add_attribute("ID", "NestedPartySubID_t_1341808264"); // 4
          Sub_350_set.insert("NestedPartySubID_t_1341808264");
          Sub_350.add_attribute("Typ", "32"); // 4
          Sub_350_set.insert("32");
          all_values.push_back(Sub_350_set);
          all_compo_names.insert("Sub_350_set");

          Pty_350.add_element(Sub_350);
        }
        Leg_75.add_element(Pty_350);
      }
      {
        xml_element BnchmkCurve_3{"BnchmkCurve"};
        multiset<string> BnchmkCurve_3_set;
        BnchmkCurve_3.add_attribute("Ccy", "GBP"); // 3
        BnchmkCurve_3_set.insert("GBP");
        BnchmkCurve_3.add_attribute("Name", "LIBID"); // 3
        BnchmkCurve_3_set.insert("LIBID");
        BnchmkCurve_3.add_attribute("Point", "LegBenchmarkCurvePoint_t_1006368129"); // 3
        BnchmkCurve_3_set.insert("LegBenchmarkCurvePoint_t_1006368129");
        BnchmkCurve_3.add_attribute("Px", "6272079.710000"); // 3
        BnchmkCurve_3_set.insert("6272079.710000");
        BnchmkCurve_3.add_attribute("PxTyp", "1100750896"); // 3
        BnchmkCurve_3_set.insert("1100750896");
        all_values.push_back(BnchmkCurve_3_set);
        all_compo_names.insert("BnchmkCurve_3_set");

        Leg_75.add_element(BnchmkCurve_3);
      }
      QuotReqRej_0.add_element(Leg_75);
    }
    {
      xml_element QuotQual_3{"QuotQual"};
      multiset<string> QuotQual_3_set;
      QuotQual_3.add_attribute("Qual", "V"); // 2
      QuotQual_3_set.insert("V");
      all_values.push_back(QuotQual_3_set);
      all_compo_names.insert("QuotQual_3_set");

      QuotReqRej_0.add_element(QuotQual_3);
    }
    {
      xml_element SprdBnchmkCurve_24{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_24_set;
      SprdBnchmkCurve_24.add_attribute("Spread", "7670482.000000"); // 2
      SprdBnchmkCurve_24_set.insert("7670482.000000");
      SprdBnchmkCurve_24.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_24_set.insert("JPY");
      SprdBnchmkCurve_24.add_attribute("Name", "OTHER"); // 2
      SprdBnchmkCurve_24_set.insert("OTHER");
      SprdBnchmkCurve_24.add_attribute("Point", "BenchmarkCurvePoint_t_1599330138"); // 2
      SprdBnchmkCurve_24_set.insert("BenchmarkCurvePoint_t_1599330138");
      SprdBnchmkCurve_24.add_attribute("Px", "9766620.550000"); // 2
      SprdBnchmkCurve_24_set.insert("9766620.550000");
      SprdBnchmkCurve_24.add_attribute("PxTyp", "17"); // 2
      SprdBnchmkCurve_24_set.insert("17");
      SprdBnchmkCurve_24.add_attribute("SecID", "BenchmarkSecurityID_t_1930851629"); // 2
      SprdBnchmkCurve_24_set.insert("BenchmarkSecurityID_t_1930851629");
      SprdBnchmkCurve_24.add_attribute("SecIDSrc", "9"); // 2
      SprdBnchmkCurve_24_set.insert("9");
      all_values.push_back(SprdBnchmkCurve_24_set);
      all_compo_names.insert("SprdBnchmkCurve_24_set");

      QuotReqRej_0.add_element(SprdBnchmkCurve_24);
    }
    {
      xml_element Yield_19{"Yield"};
      multiset<string> Yield_19_set;
      Yield_19.add_attribute("Typ", "SEMIANNUAL"); // 2
      Yield_19_set.insert("SEMIANNUAL");
      Yield_19.add_attribute("Yld", "19910345.970000"); // 2
      Yield_19_set.insert("19910345.970000");
      Yield_19.add_attribute("CalcDt", "YieldCalcDate_t_937438183"); // 2
      Yield_19_set.insert("YieldCalcDate_t_937438183");
      Yield_19.add_attribute("RedDt", "YieldRedemptionDate_t_1210044346"); // 2
      Yield_19_set.insert("YieldRedemptionDate_t_1210044346");
      Yield_19.add_attribute("RedPx", "15761533.410000"); // 2
      Yield_19_set.insert("15761533.410000");
      Yield_19.add_attribute("RedPxTyp", "4"); // 2
      Yield_19_set.insert("4");
      all_values.push_back(Yield_19_set);
      all_compo_names.insert("Yield_19_set");

      QuotReqRej_0.add_element(Yield_19);
    }
    {
      xml_element Pty_351{"Pty"};
      multiset<string> Pty_351_set;
      Pty_351.add_attribute("ID", "PartyID_t_662555426"); // 2
      Pty_351_set.insert("PartyID_t_662555426");
      Pty_351.add_attribute("Src", "D"); // 2
      Pty_351_set.insert("D");
      Pty_351.add_attribute("R", "76"); // 2
      Pty_351_set.insert("76");
      all_values.push_back(Pty_351_set);
      all_compo_names.insert("Pty_351_set");

      {
        xml_element Sub_351{"Sub"};
        multiset<string> Sub_351_set;
        Sub_351.add_attribute("ID", "PartySubID_t_594823193"); // 3
        Sub_351_set.insert("PartySubID_t_594823193");
        Sub_351.add_attribute("Typ", "31"); // 3
        Sub_351_set.insert("31");
        all_values.push_back(Sub_351_set);
        all_compo_names.insert("Sub_351_set");

        Pty_351.add_element(Sub_351);
      }
      QuotReqRej_0.add_element(Pty_351);
    }
    elt.add_element(QuotReqRej_0);
  } // end QuotReqRej
  { // QuotReqRej
    xml_element QuotReqRej_1{"QuotReqRej"};
    multiset<string> QuotReqRej_1_set;
    QuotReqRej_1.add_attribute("PrevClsPx", "9264856.800000"); // 1
    QuotReqRej_1_set.insert("9264856.800000");
    QuotReqRej_1.add_attribute("ReqTyp", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("Typ", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("SesID", "2"); // 1
    QuotReqRej_1_set.insert("2");
    QuotReqRej_1.add_attribute("SesSub", "3"); // 1
    QuotReqRej_1_set.insert("3");
    QuotReqRej_1.add_attribute("OrignDt", "TradeOriginationDate_t_1567698593"); // 1
    QuotReqRej_1_set.insert("TradeOriginationDate_t_1567698593");
    QuotReqRej_1.add_attribute("Side", "G"); // 1
    QuotReqRej_1_set.insert("G");
    QuotReqRej_1.add_attribute("QtyTyp", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("SettlTyp", "9"); // 1
    QuotReqRej_1_set.insert("9");
    QuotReqRej_1.add_attribute("SettlDt", "SettlDate_t_1486559647"); // 1
    QuotReqRej_1_set.insert("SettlDate_t_1486559647");
    QuotReqRej_1.add_attribute("SettlDt2", "SettlDate2_t_1805105210"); // 1
    QuotReqRej_1_set.insert("SettlDate2_t_1805105210");
    QuotReqRej_1.add_attribute("Qty2", "8144711.170000"); // 1
    QuotReqRej_1_set.insert("8144711.170000");
    QuotReqRej_1.add_attribute("Ccy", "JPY"); // 1
    QuotReqRej_1_set.insert("JPY");
    QuotReqRej_1.add_attribute("Acct", "Account_t_2959704"); // 1
    QuotReqRej_1_set.insert("Account_t_2959704");
    QuotReqRej_1.add_attribute("AcctIDSrc", "3"); // 1
    QuotReqRej_1_set.insert("3");
    QuotReqRej_1.add_attribute("AcctTyp", "6"); // 1
    QuotReqRej_1_set.insert("6");
    QuotReqRej_1.add_attribute("QuotPxTyp", "10"); // 1
    QuotReqRej_1_set.insert("10");
    QuotReqRej_1.add_attribute("OrdTyp", "J"); // 1
    QuotReqRej_1_set.insert("J");
    QuotReqRej_1.add_attribute("ExpireTm", "ExpireTime_t_493293486"); // 1
    QuotReqRej_1_set.insert("ExpireTime_t_493293486");
    QuotReqRej_1.add_attribute("TxnTm", "TransactTime_t_1640657091"); // 1
    QuotReqRej_1_set.insert("TransactTime_t_1640657091");
    QuotReqRej_1.add_attribute("PxTyp", "10"); // 1
    QuotReqRej_1_set.insert("10");
    QuotReqRej_1.add_attribute("Px", "14307316.690000"); // 1
    QuotReqRej_1_set.insert("14307316.690000");
    QuotReqRej_1.add_attribute("Px2", "7032177.900000"); // 1
    QuotReqRej_1_set.insert("7032177.900000");
    all_values.push_back(QuotReqRej_1_set);
    all_compo_names.insert("QuotReqRej_1_set");

    {
      xml_element Instrmt_64{"Instrmt"};
      multiset<string> Instrmt_64_set;
      Instrmt_64.add_attribute("Sym", "Symbol_t_1969818148"); // 2
      Instrmt_64_set.insert("Symbol_t_1969818148");
      Instrmt_64.add_attribute("Sfx", "CD"); // 2
      Instrmt_64_set.insert("CD");
      Instrmt_64.add_attribute("ID", "SecurityID_t_1365773216"); // 2
      Instrmt_64_set.insert("SecurityID_t_1365773216");
      Instrmt_64.add_attribute("Src", "A"); // 2
      Instrmt_64_set.insert("A");
      Instrmt_64.add_attribute("Prod", "13"); // 2
      Instrmt_64_set.insert("13");
      Instrmt_64.add_attribute("ProdCmplx", "ProductComplex_t_1960596409"); // 2
      Instrmt_64_set.insert("ProductComplex_t_1960596409");
      Instrmt_64.add_attribute("SecGrp", "SecurityGroup_t_1250026641"); // 2
      Instrmt_64_set.insert("SecurityGroup_t_1250026641");
      Instrmt_64.add_attribute("CFI", "CFICode_t_1413981121"); // 2
      Instrmt_64_set.insert("CFICode_t_1413981121");
      Instrmt_64.add_attribute("SecTyp", "BA"); // 2
      Instrmt_64_set.insert("BA");
      Instrmt_64.add_attribute("SubTyp", "SecuritySubType_t_1314233466"); // 2
      Instrmt_64_set.insert("SecuritySubType_t_1314233466");
      Instrmt_64.add_attribute("MMY", "775896240"); // 2
      Instrmt_64_set.insert("775896240");
      Instrmt_64.add_attribute("MatDt", "MaturityDate_t_734337011"); // 2
      Instrmt_64_set.insert("MaturityDate_t_734337011");
      Instrmt_64.add_attribute("MatTm", "734448412"); // 2
      Instrmt_64_set.insert("734448412");
      Instrmt_64.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1161704991"); // 2
      Instrmt_64_set.insert("SettleOnOpenFlag_t_1161704991");
      Instrmt_64.add_attribute("AsgnMeth", "1578685710"); // 2
      Instrmt_64_set.insert("1578685710");
      Instrmt_64.add_attribute("Status", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("CpnPmt", "CouponPaymentDate_t_500780990"); // 2
      Instrmt_64_set.insert("CouponPaymentDate_t_500780990");
      Instrmt_64.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_64_set.insert("FR");
      Instrmt_64.add_attribute("Snrty", "SB"); // 2
      Instrmt_64_set.insert("SB");
      Instrmt_64.add_attribute("NotlPctOut", "18156803.770000"); // 2
      Instrmt_64_set.insert("18156803.770000");
      Instrmt_64.add_attribute("OrigNotlPctOut", "17541472.790000"); // 2
      Instrmt_64_set.insert("17541472.790000");
      Instrmt_64.add_attribute("AttchPnt", "15993021.500000"); // 2
      Instrmt_64_set.insert("15993021.500000");
      Instrmt_64.add_attribute("DetchPnt", "4349426.050000"); // 2
      Instrmt_64_set.insert("4349426.050000");
      Instrmt_64.add_attribute("Issued", "IssueDate_t_1101165693"); // 2
      Instrmt_64_set.insert("IssueDate_t_1101165693");
      Instrmt_64.add_attribute("RepoCollSecTyp", "697473904"); // 2
      Instrmt_64_set.insert("697473904");
      Instrmt_64.add_attribute("RepoTrm", "985056463"); // 2
      Instrmt_64_set.insert("985056463");
      Instrmt_64.add_attribute("RepoRt", "15944591.790000"); // 2
      Instrmt_64_set.insert("15944591.790000");
      Instrmt_64.add_attribute("Fctr", "1906473.470000"); // 2
      Instrmt_64_set.insert("1906473.470000");
      Instrmt_64.add_attribute("CrdRtg", "CreditRating_t_1378721271"); // 2
      Instrmt_64_set.insert("CreditRating_t_1378721271");
      Instrmt_64.add_attribute("Rgstry", "InstrRegistry_t_877707200"); // 2
      Instrmt_64_set.insert("InstrRegistry_t_877707200");
      Instrmt_64.add_attribute("IssuCtry", "893865137"); // 2
      Instrmt_64_set.insert("893865137");
      Instrmt_64.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1201055771"); // 2
      Instrmt_64_set.insert("StateOrProvinceOfIssue_t_1201055771");
      Instrmt_64.add_attribute("Lcl", "LocaleOfIssue_t_504024571"); // 2
      Instrmt_64_set.insert("LocaleOfIssue_t_504024571");
      Instrmt_64.add_attribute("Redeem", "RedemptionDate_t_112154706"); // 2
      Instrmt_64_set.insert("RedemptionDate_t_112154706");
      Instrmt_64.add_attribute("StrkPx", "15812002.040000"); // 2
      Instrmt_64_set.insert("15812002.040000");
      Instrmt_64.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_64_set.insert("EUR");
      Instrmt_64.add_attribute("StrkMult", "6837431.980000"); // 2
      Instrmt_64_set.insert("6837431.980000");
      Instrmt_64.add_attribute("StrkValu", "2580174.850000"); // 2
      Instrmt_64_set.insert("2580174.850000");
      Instrmt_64.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_64_set.insert("5");
      Instrmt_64.add_attribute("StrkPxBndryPrcsn", "10339137.250000"); // 2
      Instrmt_64_set.insert("10339137.250000");
      Instrmt_64.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_64_set.insert("1");
      Instrmt_64.add_attribute("OptAt", "584941428"); // 2
      Instrmt_64_set.insert("584941428");
      Instrmt_64.add_attribute("Mult", "481350.680000"); // 2
      Instrmt_64_set.insert("481350.680000");
      Instrmt_64.add_attribute("MultTyp", "1"); // 2
      Instrmt_64_set.insert("1");
      Instrmt_64.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("MinPxIncr", "5489160.580000"); // 2
      Instrmt_64_set.insert("5489160.580000");
      Instrmt_64.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_75986606"); // 2
      Instrmt_64_set.insert("MinPriceIncrementAmount_t_75986606");
      Instrmt_64.add_attribute("UOM", "Bcf"); // 2
      Instrmt_64_set.insert("Bcf");
      Instrmt_64.add_attribute("UOMQty", "2171127.870000"); // 2
      Instrmt_64_set.insert("2171127.870000");
      Instrmt_64.add_attribute("PxUOM", "oz_tr"); // 2
      Instrmt_64_set.insert("oz_tr");
      Instrmt_64.add_attribute("PxUOMQty", "2674900.580000"); // 2
      Instrmt_64_set.insert("2674900.580000");
      Instrmt_64.add_attribute("SettlMeth", "P"); // 2
      Instrmt_64_set.insert("P");
      Instrmt_64.add_attribute("ExerStyle", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_64_set.insert("1");
      Instrmt_64.add_attribute("OptPayAmt", "OptPayoutAmount_t_1637111856"); // 2
      Instrmt_64_set.insert("OptPayoutAmount_t_1637111856");
      Instrmt_64.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_64_set.insert("INX");
      Instrmt_64.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_64_set.insert("CDSD");
      Instrmt_64.add_attribute("ListMeth", "1"); // 2
      Instrmt_64_set.insert("1");
      Instrmt_64.add_attribute("CapPx", "11084986.620000"); // 2
      Instrmt_64_set.insert("11084986.620000");
      Instrmt_64.add_attribute("FlrPx", "20494764.470000"); // 2
      Instrmt_64_set.insert("20494764.470000");
      Instrmt_64.add_attribute("PutCall", "1"); // 2
      Instrmt_64_set.insert("1");
      Instrmt_64.add_attribute("FlexInd", "false"); // 2
      Instrmt_64_set.insert("false");
      Instrmt_64.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_64_set.insert("false");
      Instrmt_64.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_64_set.insert("Mo");
      Instrmt_64.add_attribute("CpnRt", "4565595.970000"); // 2
      Instrmt_64_set.insert("4565595.970000");
      Instrmt_64.add_attribute("Exch", "SecurityExchange_t_2086898620"); // 2
      Instrmt_64_set.insert("SecurityExchange_t_2086898620");
      Instrmt_64.add_attribute("PosLmt", "39381357"); // 2
      Instrmt_64_set.insert("39381357");
      Instrmt_64.add_attribute("NTPosLmt", "714577082"); // 2
      Instrmt_64_set.insert("714577082");
      Instrmt_64.add_attribute("Issr", "Issuer_t_761038881"); // 2
      Instrmt_64_set.insert("Issuer_t_761038881");
      Instrmt_64.add_attribute("EncIssrLen", "2037358022"); // 2
      Instrmt_64_set.insert("2037358022");
      Instrmt_64.add_attribute("EncIssr", "EncodedIssuer_t_1748490807"); // 2
      Instrmt_64_set.insert("EncodedIssuer_t_1748490807");
      Instrmt_64.add_attribute("Desc", "SecurityDesc_t_169516153"); // 2
      Instrmt_64_set.insert("SecurityDesc_t_169516153");
      Instrmt_64.add_attribute("EncSecDescLen", "474815802"); // 2
      Instrmt_64_set.insert("474815802");
      Instrmt_64.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1796625875"); // 2
      Instrmt_64_set.insert("EncodedSecurityDesc_t_1796625875");
      Instrmt_64.add_attribute("Pool", "Pool_t_1156679135"); // 2
      Instrmt_64_set.insert("Pool_t_1156679135");
      Instrmt_64.add_attribute("CSetMo", "1841628560"); // 2
      Instrmt_64_set.insert("1841628560");
      Instrmt_64.add_attribute("CPPgm", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("CPRegT", "CPRegType_t_1232665742"); // 2
      Instrmt_64_set.insert("CPRegType_t_1232665742");
      Instrmt_64.add_attribute("Dated", "DatedDate_t_509816467"); // 2
      Instrmt_64_set.insert("DatedDate_t_509816467");
      Instrmt_64.add_attribute("IntAcrl", "InterestAccrualDate_t_415171073"); // 2
      Instrmt_64_set.insert("InterestAccrualDate_t_415171073");
      all_values.push_back(Instrmt_64_set);
      all_compo_names.insert("Instrmt_64_set");

      {
        xml_element AID_67{"AID"};
        multiset<string> AID_67_set;
        AID_67.add_attribute("AltID", "SecurityAltID_t_915315979"); // 3
        AID_67_set.insert("SecurityAltID_t_915315979");
        AID_67.add_attribute("AltIDSrc", "I"); // 3
        AID_67_set.insert("I");
        all_values.push_back(AID_67_set);
        all_compo_names.insert("AID_67_set");

        Instrmt_64.add_element(AID_67);
      }
      {
        xml_element SecXML_67{"SecXML"};
        multiset<string> SecXML_67_set;
        SecXML_67.add_attribute("Schema", "SecurityXMLSchema_t_1067226466"); // 3
        SecXML_67_set.insert("SecurityXMLSchema_t_1067226466");
        all_values.push_back(SecXML_67_set);
        all_compo_names.insert("SecXML_67_set");

        Instrmt_64.add_element(SecXML_67);
      }
      {
        xml_element Evnt_67{"Evnt"};
        multiset<string> Evnt_67_set;
        Evnt_67.add_attribute("EventTyp", "11"); // 3
        Evnt_67_set.insert("11");
        Evnt_67.add_attribute("Dt", "EventDate_t_1742270487"); // 3
        Evnt_67_set.insert("EventDate_t_1742270487");
        Evnt_67.add_attribute("Tm", "EventTime_t_556854674"); // 3
        Evnt_67_set.insert("EventTime_t_556854674");
        Evnt_67.add_attribute("Px", "19299233.710000"); // 3
        Evnt_67_set.insert("19299233.710000");
        Evnt_67.add_attribute("Txt", "EventText_t_750398149"); // 3
        Evnt_67_set.insert("EventText_t_750398149");
        all_values.push_back(Evnt_67_set);
        all_compo_names.insert("Evnt_67_set");

        Instrmt_64.add_element(Evnt_67);
      }
      {
        xml_element Pty_352{"Pty"};
        multiset<string> Pty_352_set;
        Pty_352.add_attribute("ID", "InstrumentPartyID_t_1425204154"); // 3
        Pty_352_set.insert("InstrumentPartyID_t_1425204154");
        Pty_352.add_attribute("Src", "I"); // 3
        Pty_352_set.insert("I");
        Pty_352.add_attribute("R", "78"); // 3
        Pty_352_set.insert("78");
        all_values.push_back(Pty_352_set);
        all_compo_names.insert("Pty_352_set");

        {
          xml_element Sub_352{"Sub"};
          multiset<string> Sub_352_set;
          Sub_352.add_attribute("ID", "InstrumentPartySubID_t_1347125757"); // 4
          Sub_352_set.insert("InstrumentPartySubID_t_1347125757");
          Sub_352.add_attribute("Typ", "16"); // 4
          Sub_352_set.insert("16");
          all_values.push_back(Sub_352_set);
          all_compo_names.insert("Sub_352_set");

          Pty_352.add_element(Sub_352);
        }
        Instrmt_64.add_element(Pty_352);
      }
      {
        xml_element CmplxEvnt_64{"CmplxEvnt"};
        multiset<string> CmplxEvnt_64_set;
        CmplxEvnt_64.add_attribute("Typ", "2"); // 3
        CmplxEvnt_64_set.insert("2");
        CmplxEvnt_64.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_702763916"); // 3
        CmplxEvnt_64_set.insert("ComplexOptPayoutAmount_t_702763916");
        CmplxEvnt_64.add_attribute("Px", "8125375.670000"); // 3
        CmplxEvnt_64_set.insert("8125375.670000");
        CmplxEvnt_64.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_64_set.insert("1");
        CmplxEvnt_64.add_attribute("PxBndryPrcsn", "7421452.740000"); // 3
        CmplxEvnt_64_set.insert("7421452.740000");
        CmplxEvnt_64.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_64_set.insert("2");
        CmplxEvnt_64.add_attribute("Cond", "2"); // 3
        CmplxEvnt_64_set.insert("2");
        all_values.push_back(CmplxEvnt_64_set);
        all_compo_names.insert("CmplxEvnt_64_set");

        {
          xml_element EvntDts_64{"EvntDts"};
          multiset<string> EvntDts_64_set;
          EvntDts_64.add_attribute("StartDt", "ComplexEventStartDate_t_632019648"); // 4
          EvntDts_64_set.insert("ComplexEventStartDate_t_632019648");
          EvntDts_64.add_attribute("EndDt", "ComplexEventEndDate_t_1128121808"); // 4
          EvntDts_64_set.insert("ComplexEventEndDate_t_1128121808");
          all_values.push_back(EvntDts_64_set);
          all_compo_names.insert("EvntDts_64_set");

          {
            xml_element EvntTms_64{"EvntTms"};
            multiset<string> EvntTms_64_set;
            EvntTms_64.add_attribute("StartTm", "1536508460"); // 5
            EvntTms_64_set.insert("1536508460");
            EvntTms_64.add_attribute("EndTm", "1106835450"); // 5
            EvntTms_64_set.insert("1106835450");
            all_values.push_back(EvntTms_64_set);
            all_compo_names.insert("EvntTms_64_set");

            EvntDts_64.add_element(EvntTms_64);
          }
          CmplxEvnt_64.add_element(EvntDts_64);
        }
        Instrmt_64.add_element(CmplxEvnt_64);
      }
      QuotReqRej_1.add_element(Instrmt_64);
    }
    {
      xml_element FinDetls_22{"FinDetls"};
      multiset<string> FinDetls_22_set;
      FinDetls_22.add_attribute("AgmtDesc", "AgreementDesc_t_777264035"); // 2
      FinDetls_22_set.insert("AgreementDesc_t_777264035");
      FinDetls_22.add_attribute("AgmtID", "AgreementID_t_545703948"); // 2
      FinDetls_22_set.insert("AgreementID_t_545703948");
      FinDetls_22.add_attribute("AgmtDt", "AgreementDate_t_800980362"); // 2
      FinDetls_22_set.insert("AgreementDate_t_800980362");
      FinDetls_22.add_attribute("AgmtCcy", "GBP"); // 2
      FinDetls_22_set.insert("GBP");
      FinDetls_22.add_attribute("TrmTyp", "3"); // 2
      FinDetls_22_set.insert("3");
      FinDetls_22.add_attribute("StartDt", "StartDate_t_1390493394"); // 2
      FinDetls_22_set.insert("StartDate_t_1390493394");
      FinDetls_22.add_attribute("EndDt", "EndDate_t_546202021"); // 2
      FinDetls_22_set.insert("EndDate_t_546202021");
      FinDetls_22.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_22_set.insert("3");
      FinDetls_22.add_attribute("MgnRatio", "3102362.120000"); // 2
      FinDetls_22_set.insert("3102362.120000");
      all_values.push_back(FinDetls_22_set);
      all_compo_names.insert("FinDetls_22_set");

      QuotReqRej_1.add_element(FinDetls_22);
    }
    {
      xml_element Undly_88{"Undly"};
      multiset<string> Undly_88_set;
      Undly_88.add_attribute("Sym", "UnderlyingSymbol_t_97850283"); // 2
      Undly_88_set.insert("UnderlyingSymbol_t_97850283");
      Undly_88.add_attribute("Sfx", "WI"); // 2
      Undly_88_set.insert("WI");
      Undly_88.add_attribute("ID", "UnderlyingSecurityID_t_867090886"); // 2
      Undly_88_set.insert("UnderlyingSecurityID_t_867090886");
      Undly_88.add_attribute("Src", "I"); // 2
      Undly_88_set.insert("I");
      Undly_88.add_attribute("Prod", "5"); // 2
      Undly_88_set.insert("5");
      Undly_88.add_attribute("CFI", "UnderlyingCFICode_t_144811392"); // 2
      Undly_88_set.insert("UnderlyingCFICode_t_144811392");
      Undly_88.add_attribute("SecTyp", "CASH"); // 2
      Undly_88_set.insert("CASH");
      Undly_88.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_938195644"); // 2
      Undly_88_set.insert("UnderlyingSecuritySubType_t_938195644");
      Undly_88.add_attribute("MMY", "1491937149"); // 2
      Undly_88_set.insert("1491937149");
      Undly_88.add_attribute("Mat", "UnderlyingMaturityDate_t_1127206363"); // 2
      Undly_88_set.insert("UnderlyingMaturityDate_t_1127206363");
      Undly_88.add_attribute("MatTm", "1604734097"); // 2
      Undly_88_set.insert("1604734097");
      Undly_88.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_47217418"); // 2
      Undly_88_set.insert("UnderlyingCouponPaymentDate_t_47217418");
      Undly_88.add_attribute("RestrctTyp", "MM"); // 2
      Undly_88_set.insert("MM");
      Undly_88.add_attribute("Snrty", "SD"); // 2
      Undly_88_set.insert("SD");
      Undly_88.add_attribute("NotlPctOut", "7893626.920000"); // 2
      Undly_88_set.insert("7893626.920000");
      Undly_88.add_attribute("OrigNotlPctOut", "13193749.320000"); // 2
      Undly_88_set.insert("13193749.320000");
      Undly_88.add_attribute("AttchPnt", "14301961.810000"); // 2
      Undly_88_set.insert("14301961.810000");
      Undly_88.add_attribute("DetchPnt", "14213823.400000"); // 2
      Undly_88_set.insert("14213823.400000");
      Undly_88.add_attribute("Issued", "UnderlyingIssueDate_t_300013092"); // 2
      Undly_88_set.insert("UnderlyingIssueDate_t_300013092");
      Undly_88.add_attribute("RepoCollSecTyp", "819220994"); // 2
      Undly_88_set.insert("819220994");
      Undly_88.add_attribute("RepoTrm", "380734142"); // 2
      Undly_88_set.insert("380734142");
      Undly_88.add_attribute("RepoRt", "10772771.280000"); // 2
      Undly_88_set.insert("10772771.280000");
      Undly_88.add_attribute("Fctr", "13649249.420000"); // 2
      Undly_88_set.insert("13649249.420000");
      Undly_88.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1181714505"); // 2
      Undly_88_set.insert("UnderlyingCreditRating_t_1181714505");
      Undly_88.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2052599449"); // 2
      Undly_88_set.insert("UnderlyingInstrRegistry_t_2052599449");
      Undly_88.add_attribute("Ctry", "995810984"); // 2
      Undly_88_set.insert("995810984");
      Undly_88.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_345027687"); // 2
      Undly_88_set.insert("UnderlyingStateOrProvinceOfIssue_t_345027687");
      Undly_88.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1295609195"); // 2
      Undly_88_set.insert("UnderlyingLocaleOfIssue_t_1295609195");
      Undly_88.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1542013005"); // 2
      Undly_88_set.insert("UnderlyingRedemptionDate_t_1542013005");
      Undly_88.add_attribute("StrkPx", "2856473.940000"); // 2
      Undly_88_set.insert("2856473.940000");
      Undly_88.add_attribute("StrkCcy", "EUR"); // 2
      Undly_88_set.insert("EUR");
      Undly_88.add_attribute("OptA", "1968537589"); // 2
      Undly_88_set.insert("1968537589");
      Undly_88.add_attribute("Mult", "3254526.450000"); // 2
      Undly_88_set.insert("3254526.450000");
      Undly_88.add_attribute("MultTyp", "1"); // 2
      Undly_88_set.insert("1");
      Undly_88.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_88_set.insert("2");
      Undly_88.add_attribute("UOM", "Bcf"); // 2
      Undly_88_set.insert("Bcf");
      Undly_88.add_attribute("UOMQty", "1438980.400000"); // 2
      Undly_88_set.insert("1438980.400000");
      Undly_88.add_attribute("PxUOM", "Bu"); // 2
      Undly_88_set.insert("Bu");
      Undly_88.add_attribute("PxUOMQty", "19622011.870000"); // 2
      Undly_88_set.insert("19622011.870000");
      Undly_88.add_attribute("TmUnit", "H"); // 2
      Undly_88_set.insert("H");
      Undly_88.add_attribute("ExerStyle", "0"); // 2
      Undly_88_set.insert("0");
      Undly_88.add_attribute("CpnRt", "20094186.050000"); // 2
      Undly_88_set.insert("20094186.050000");
      Undly_88.add_attribute("Exch", "UnderlyingSecurityExchange_t_1063364686"); // 2
      Undly_88_set.insert("UnderlyingSecurityExchange_t_1063364686");
      Undly_88.add_attribute("Issr", "UnderlyingIssuer_t_565508605"); // 2
      Undly_88_set.insert("UnderlyingIssuer_t_565508605");
      Undly_88.add_attribute("EncUndIssrLen", "651297649"); // 2
      Undly_88_set.insert("651297649");
      Undly_88.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_235255970"); // 2
      Undly_88_set.insert("EncodedUnderlyingIssuer_t_235255970");
      Undly_88.add_attribute("Desc", "UnderlyingSecurityDesc_t_1995704786"); // 2
      Undly_88_set.insert("UnderlyingSecurityDesc_t_1995704786");
      Undly_88.add_attribute("EncUndSecDescLen", "2072679989"); // 2
      Undly_88_set.insert("2072679989");
      Undly_88.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_535269062"); // 2
      Undly_88_set.insert("EncodedUnderlyingSecurityDesc_t_535269062");
      Undly_88.add_attribute("CPPgm", "UnderlyingCPProgram_t_667442132"); // 2
      Undly_88_set.insert("UnderlyingCPProgram_t_667442132");
      Undly_88.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_305930484"); // 2
      Undly_88_set.insert("UnderlyingCPRegType_t_305930484");
      Undly_88.add_attribute("AllocPct", "16125461.900000"); // 2
      Undly_88_set.insert("16125461.900000");
      Undly_88.add_attribute("Ccy", "CHF"); // 2
      Undly_88_set.insert("CHF");
      Undly_88.add_attribute("Qty", "15176619.910000"); // 2
      Undly_88_set.insert("15176619.910000");
      Undly_88.add_attribute("SettlTyp", "4"); // 2
      Undly_88_set.insert("4");
      Undly_88.add_attribute("CashAmt", "UnderlyingCashAmount_t_1832672676"); // 2
      Undly_88_set.insert("UnderlyingCashAmount_t_1832672676");
      Undly_88.add_attribute("CashTyp", "FIXED"); // 2
      Undly_88_set.insert("FIXED");
      Undly_88.add_attribute("Px", "2752237.680000"); // 2
      Undly_88_set.insert("2752237.680000");
      Undly_88.add_attribute("DirtPx", "21183200.700000"); // 2
      Undly_88_set.insert("21183200.700000");
      Undly_88.add_attribute("EndPx", "1241492.970000"); // 2
      Undly_88_set.insert("1241492.970000");
      Undly_88.add_attribute("StartVal", "UnderlyingStartValue_t_1915087057"); // 2
      Undly_88_set.insert("UnderlyingStartValue_t_1915087057");
      Undly_88.add_attribute("CurVal", "UnderlyingCurrentValue_t_1939374012"); // 2
      Undly_88_set.insert("UnderlyingCurrentValue_t_1939374012");
      Undly_88.add_attribute("EndVal", "UnderlyingEndValue_t_449601943"); // 2
      Undly_88_set.insert("UnderlyingEndValue_t_449601943");
      Undly_88.add_attribute("AdjQty", "12877567.050000"); // 2
      Undly_88_set.insert("12877567.050000");
      Undly_88.add_attribute("FxRate", "20462326.490000"); // 2
      Undly_88_set.insert("20462326.490000");
      Undly_88.add_attribute("FxRateCalc", "D"); // 2
      Undly_88_set.insert("D");
      Undly_88.add_attribute("CapValu", "UnderlyingCapValue_t_1431654745"); // 2
      Undly_88_set.insert("UnderlyingCapValue_t_1431654745");
      Undly_88.add_attribute("SetMeth", "UnderlyingSettlMethod_t_943803283"); // 2
      Undly_88_set.insert("UnderlyingSettlMethod_t_943803283");
      Undly_88.add_attribute("PutCall", "734583520"); // 2
      Undly_88_set.insert("734583520");
      all_values.push_back(Undly_88_set);
      all_compo_names.insert("Undly_88_set");

      {
        xml_element UndAID_88{"UndAID"};
        multiset<string> UndAID_88_set;
        UndAID_88.add_attribute("AltID", "UnderlyingSecurityAltID_t_555275501"); // 3
        UndAID_88_set.insert("UnderlyingSecurityAltID_t_555275501");
        UndAID_88.add_attribute("AltIDSrc", "A"); // 3
        UndAID_88_set.insert("A");
        all_values.push_back(UndAID_88_set);
        all_compo_names.insert("UndAID_88_set");

        Undly_88.add_element(UndAID_88);
      }
      {
        xml_element Stip_133{"Stip"};
        multiset<string> Stip_133_set;
        Stip_133.add_attribute("Typ", "DISCOUNT"); // 3
        Stip_133_set.insert("DISCOUNT");
        Stip_133.add_attribute("Val", "UnderlyingStipValue_t_1618640187"); // 3
        Stip_133_set.insert("UnderlyingStipValue_t_1618640187");
        all_values.push_back(Stip_133_set);
        all_compo_names.insert("Stip_133_set");

        Undly_88.add_element(Stip_133);
      }
      {
        xml_element Pty_353{"Pty"};
        multiset<string> Pty_353_set;
        Pty_353.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2011616618"); // 3
        Pty_353_set.insert("UnderlyingInstrumentPartyID_t_2011616618");
        Pty_353.add_attribute("Src", "4"); // 3
        Pty_353_set.insert("4");
        Pty_353.add_attribute("R", "37"); // 3
        Pty_353_set.insert("37");
        all_values.push_back(Pty_353_set);
        all_compo_names.insert("Pty_353_set");

        {
          xml_element Sub_353{"Sub"};
          multiset<string> Sub_353_set;
          Sub_353.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1859837757"); // 4
          Sub_353_set.insert("UnderlyingInstrumentPartySubID_t_1859837757");
          Sub_353.add_attribute("Typ", "21"); // 4
          Sub_353_set.insert("21");
          all_values.push_back(Sub_353_set);
          all_compo_names.insert("Sub_353_set");

          Pty_353.add_element(Sub_353);
        }
        Undly_88.add_element(Pty_353);
      }
      QuotReqRej_1.add_element(Undly_88);
    }
    {
      xml_element OrdQty_23{"OrdQty"};
      multiset<string> OrdQty_23_set;
      OrdQty_23.add_attribute("Qty", "2416815.710000"); // 2
      OrdQty_23_set.insert("2416815.710000");
      OrdQty_23.add_attribute("Cash", "3797962.410000"); // 2
      OrdQty_23_set.insert("3797962.410000");
      OrdQty_23.add_attribute("Pct", "14789429.530000"); // 2
      OrdQty_23_set.insert("14789429.530000");
      OrdQty_23.add_attribute("RndDir", "2"); // 2
      OrdQty_23_set.insert("2");
      OrdQty_23.add_attribute("RndMod", "2646796.680000"); // 2
      OrdQty_23_set.insert("2646796.680000");
      all_values.push_back(OrdQty_23_set);
      all_compo_names.insert("OrdQty_23_set");

      QuotReqRej_1.add_element(OrdQty_23);
    }
    {
      xml_element Stip_134{"Stip"};
      multiset<string> Stip_134_set;
      Stip_134.add_attribute("Typ", "WAC"); // 2
      Stip_134_set.insert("WAC");
      Stip_134.add_attribute("Val", "StipulationValue_t_1224406105"); // 2
      Stip_134_set.insert("StipulationValue_t_1224406105");
      all_values.push_back(Stip_134_set);
      all_compo_names.insert("Stip_134_set");

      QuotReqRej_1.add_element(Stip_134);
    }
    {
      xml_element Leg_77{"Leg"};
      multiset<string> Leg_77_set;
      Leg_77.add_attribute("Qty", "11453740.780000"); // 2
      Leg_77_set.insert("11453740.780000");
      Leg_77.add_attribute("OrdQty", "5042933.220000"); // 2
      Leg_77_set.insert("5042933.220000");
      Leg_77.add_attribute("SwapTyp", "1"); // 2
      Leg_77_set.insert("1");
      Leg_77.add_attribute("SettlTyp", "C"); // 2
      Leg_77_set.insert("C");
      Leg_77.add_attribute("SettlDt", "LegSettlDate_t_475129744"); // 2
      Leg_77_set.insert("LegSettlDate_t_475129744");
      Leg_77.add_attribute("RefID", "LegRefID_t_2014342941"); // 2
      Leg_77_set.insert("LegRefID_t_2014342941");
      all_values.push_back(Leg_77_set);
      all_compo_names.insert("Leg_77_set");

      {
        xml_element Leg_78{"Leg"};
        multiset<string> Leg_78_set;
        Leg_78.add_attribute("Sym", "LegSymbol_t_1188201255"); // 3
        Leg_78_set.insert("LegSymbol_t_1188201255");
        Leg_78.add_attribute("Sfx", "CD"); // 3
        Leg_78_set.insert("CD");
        Leg_78.add_attribute("ID", "LegSecurityID_t_316461236"); // 3
        Leg_78_set.insert("LegSecurityID_t_316461236");
        Leg_78.add_attribute("Src", "D"); // 3
        Leg_78_set.insert("D");
        Leg_78.add_attribute("Prod", "1"); // 3
        Leg_78_set.insert("1");
        Leg_78.add_attribute("CFI", "LegCFICode_t_1236327217"); // 3
        Leg_78_set.insert("LegCFICode_t_1236327217");
        Leg_78.add_attribute("SecTyp", "TLQN"); // 3
        Leg_78_set.insert("TLQN");
        Leg_78.add_attribute("SecSubTyp", "LegSecuritySubType_t_1109572393"); // 3
        Leg_78_set.insert("LegSecuritySubType_t_1109572393");
        Leg_78.add_attribute("MMY", "1970910738"); // 3
        Leg_78_set.insert("1970910738");
        Leg_78.add_attribute("Mat", "LegMaturityDate_t_167920911"); // 3
        Leg_78_set.insert("LegMaturityDate_t_167920911");
        Leg_78.add_attribute("MatTm", "408196758"); // 3
        Leg_78_set.insert("408196758");
        Leg_78.add_attribute("CpnPmt", "LegCouponPaymentDate_t_419945568"); // 3
        Leg_78_set.insert("LegCouponPaymentDate_t_419945568");
        Leg_78.add_attribute("Issued", "LegIssueDate_t_1786561098"); // 3
        Leg_78_set.insert("LegIssueDate_t_1786561098");
        Leg_78.add_attribute("RepoCollSecTyp", "272329729"); // 3
        Leg_78_set.insert("272329729");
        Leg_78.add_attribute("RepoTrm", "1667761695"); // 3
        Leg_78_set.insert("1667761695");
        Leg_78.add_attribute("RepoRt", "14929736.070000"); // 3
        Leg_78_set.insert("14929736.070000");
        Leg_78.add_attribute("Fctr", "21321674.860000"); // 3
        Leg_78_set.insert("21321674.860000");
        Leg_78.add_attribute("CrdRtg", "LegCreditRating_t_693290516"); // 3
        Leg_78_set.insert("LegCreditRating_t_693290516");
        Leg_78.add_attribute("Rgstry", "LegInstrRegistry_t_1734655178"); // 3
        Leg_78_set.insert("LegInstrRegistry_t_1734655178");
        Leg_78.add_attribute("Ctry", "364480079"); // 3
        Leg_78_set.insert("364480079");
        Leg_78.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_24749821"); // 3
        Leg_78_set.insert("LegStateOrProvinceOfIssue_t_24749821");
        Leg_78.add_attribute("Lcl", "LegLocaleOfIssue_t_1441399292"); // 3
        Leg_78_set.insert("LegLocaleOfIssue_t_1441399292");
        Leg_78.add_attribute("Redeem", "LegRedemptionDate_t_629159747"); // 3
        Leg_78_set.insert("LegRedemptionDate_t_629159747");
        Leg_78.add_attribute("Strk", "8438541.150000"); // 3
        Leg_78_set.insert("8438541.150000");
        Leg_78.add_attribute("StrkCcy", "JPY"); // 3
        Leg_78_set.insert("JPY");
        Leg_78.add_attribute("OptA", "1348147437"); // 3
        Leg_78_set.insert("1348147437");
        Leg_78.add_attribute("Cmult", "2610317.460000"); // 3
        Leg_78_set.insert("2610317.460000");
        Leg_78.add_attribute("MultTyp", "0"); // 3
        Leg_78_set.insert("0");
        Leg_78.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_78_set.insert("2");
        Leg_78.add_attribute("UOM", "Gal"); // 3
        Leg_78_set.insert("Gal");
        Leg_78.add_attribute("UOMQty", "883656.320000"); // 3
        Leg_78_set.insert("883656.320000");
        Leg_78.add_attribute("PxUOM", "Gal"); // 3
        Leg_78_set.insert("Gal");
        Leg_78.add_attribute("PxUOMQty", "4443522.760000"); // 3
        Leg_78_set.insert("4443522.760000");
        Leg_78.add_attribute("TmUnit", "D"); // 3
        Leg_78_set.insert("D");
        Leg_78.add_attribute("ExerStyle", "2"); // 3
        Leg_78_set.insert("2");
        Leg_78.add_attribute("CpnRt", "16806794.930000"); // 3
        Leg_78_set.insert("16806794.930000");
        Leg_78.add_attribute("Exch", "LegSecurityExchange_t_29485354"); // 3
        Leg_78_set.insert("LegSecurityExchange_t_29485354");
        Leg_78.add_attribute("Issr", "LegIssuer_t_1218155145"); // 3
        Leg_78_set.insert("LegIssuer_t_1218155145");
        Leg_78.add_attribute("EncLegIssrLen", "1504106583"); // 3
        Leg_78_set.insert("1504106583");
        Leg_78.add_attribute("EncLegIssr", "EncodedLegIssuer_t_197406265"); // 3
        Leg_78_set.insert("EncodedLegIssuer_t_197406265");
        Leg_78.add_attribute("Desc", "LegSecurityDesc_t_1626351904"); // 3
        Leg_78_set.insert("LegSecurityDesc_t_1626351904");
        Leg_78.add_attribute("EncLegSecDescLen", "1924052151"); // 3
        Leg_78_set.insert("1924052151");
        Leg_78.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1983967363"); // 3
        Leg_78_set.insert("EncodedLegSecurityDesc_t_1983967363");
        Leg_78.add_attribute("RatioQty", "18986816.330000"); // 3
        Leg_78_set.insert("18986816.330000");
        Leg_78.add_attribute("Side", "8"); // 3
        Leg_78_set.insert("8");
        Leg_78.add_attribute("Ccy", "EUR"); // 3
        Leg_78_set.insert("EUR");
        Leg_78.add_attribute("Pool", "LegPool_t_2137620715"); // 3
        Leg_78_set.insert("LegPool_t_2137620715");
        Leg_78.add_attribute("Dated", "LegDatedDate_t_916628853"); // 3
        Leg_78_set.insert("LegDatedDate_t_916628853");
        Leg_78.add_attribute("CSetMo", "100361902"); // 3
        Leg_78_set.insert("100361902");
        Leg_78.add_attribute("IntAcrl", "LegInterestAccrualDate_t_14886889"); // 3
        Leg_78_set.insert("LegInterestAccrualDate_t_14886889");
        Leg_78.add_attribute("PutCall", "210544497"); // 3
        Leg_78_set.insert("210544497");
        Leg_78.add_attribute("LegOptionRatio", "7295216.500000"); // 3
        Leg_78_set.insert("7295216.500000");
        Leg_78.add_attribute("Px", "8587410.040000"); // 3
        Leg_78_set.insert("8587410.040000");
        all_values.push_back(Leg_78_set);
        all_compo_names.insert("Leg_78_set");

        {
          xml_element LegAID_74{"LegAID"};
          multiset<string> LegAID_74_set;
          LegAID_74.add_attribute("SecAltID", "LegSecurityAltID_t_728866247"); // 4
          LegAID_74_set.insert("LegSecurityAltID_t_728866247");
          LegAID_74.add_attribute("SecAltIDSrc", "9"); // 4
          LegAID_74_set.insert("9");
          all_values.push_back(LegAID_74_set);
          all_compo_names.insert("LegAID_74_set");

          Leg_78.add_element(LegAID_74);
        }
        Leg_77.add_element(Leg_78);
      }
      {
        xml_element Stip_135{"Stip"};
        multiset<string> Stip_135_set;
        Stip_135.add_attribute("StipTyp", "ORDRINCR"); // 3
        Stip_135_set.insert("ORDRINCR");
        Stip_135.add_attribute("StipVal", "LegStipulationValue_t_989897993"); // 3
        Stip_135_set.insert("LegStipulationValue_t_989897993");
        all_values.push_back(Stip_135_set);
        all_compo_names.insert("Stip_135_set");

        Leg_77.add_element(Stip_135);
      }
      {
        xml_element Pty_354{"Pty"};
        multiset<string> Pty_354_set;
        Pty_354.add_attribute("ID", "NestedPartyID_t_1404219852"); // 3
        Pty_354_set.insert("NestedPartyID_t_1404219852");
        Pty_354.add_attribute("Src", "3"); // 3
        Pty_354_set.insert("3");
        Pty_354.add_attribute("R", "33"); // 3
        Pty_354_set.insert("33");
        all_values.push_back(Pty_354_set);
        all_compo_names.insert("Pty_354_set");

        {
          xml_element Sub_354{"Sub"};
          multiset<string> Sub_354_set;
          Sub_354.add_attribute("ID", "NestedPartySubID_t_1492585484"); // 4
          Sub_354_set.insert("NestedPartySubID_t_1492585484");
          Sub_354.add_attribute("Typ", "10"); // 4
          Sub_354_set.insert("10");
          all_values.push_back(Sub_354_set);
          all_compo_names.insert("Sub_354_set");

          Pty_354.add_element(Sub_354);
        }
        Leg_77.add_element(Pty_354);
      }
      {
        xml_element BnchmkCurve_4{"BnchmkCurve"};
        multiset<string> BnchmkCurve_4_set;
        BnchmkCurve_4.add_attribute("Ccy", "CHF"); // 3
        BnchmkCurve_4_set.insert("CHF");
        BnchmkCurve_4.add_attribute("Name", "OTHER"); // 3
        BnchmkCurve_4_set.insert("OTHER");
        BnchmkCurve_4.add_attribute("Point", "LegBenchmarkCurvePoint_t_1095337154"); // 3
        BnchmkCurve_4_set.insert("LegBenchmarkCurvePoint_t_1095337154");
        BnchmkCurve_4.add_attribute("Px", "19389107.830000"); // 3
        BnchmkCurve_4_set.insert("19389107.830000");
        BnchmkCurve_4.add_attribute("PxTyp", "1004749868"); // 3
        BnchmkCurve_4_set.insert("1004749868");
        all_values.push_back(BnchmkCurve_4_set);
        all_compo_names.insert("BnchmkCurve_4_set");

        Leg_77.add_element(BnchmkCurve_4);
      }
      QuotReqRej_1.add_element(Leg_77);
    }
    {
      xml_element QuotQual_4{"QuotQual"};
      multiset<string> QuotQual_4_set;
      QuotQual_4.add_attribute("Qual", "Y"); // 2
      QuotQual_4_set.insert("Y");
      all_values.push_back(QuotQual_4_set);
      all_compo_names.insert("QuotQual_4_set");

      QuotReqRej_1.add_element(QuotQual_4);
    }
    {
      xml_element SprdBnchmkCurve_25{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_25_set;
      SprdBnchmkCurve_25.add_attribute("Spread", "21363170.490000"); // 2
      SprdBnchmkCurve_25_set.insert("21363170.490000");
      SprdBnchmkCurve_25.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_25_set.insert("CAN");
      SprdBnchmkCurve_25.add_attribute("Name", "Pfandbriefe"); // 2
      SprdBnchmkCurve_25_set.insert("Pfandbriefe");
      SprdBnchmkCurve_25.add_attribute("Point", "BenchmarkCurvePoint_t_234816109"); // 2
      SprdBnchmkCurve_25_set.insert("BenchmarkCurvePoint_t_234816109");
      SprdBnchmkCurve_25.add_attribute("Px", "16728587.920000"); // 2
      SprdBnchmkCurve_25_set.insert("16728587.920000");
      SprdBnchmkCurve_25.add_attribute("PxTyp", "8"); // 2
      SprdBnchmkCurve_25_set.insert("8");
      SprdBnchmkCurve_25.add_attribute("SecID", "BenchmarkSecurityID_t_2118181580"); // 2
      SprdBnchmkCurve_25_set.insert("BenchmarkSecurityID_t_2118181580");
      SprdBnchmkCurve_25.add_attribute("SecIDSrc", "K"); // 2
      SprdBnchmkCurve_25_set.insert("K");
      all_values.push_back(SprdBnchmkCurve_25_set);
      all_compo_names.insert("SprdBnchmkCurve_25_set");

      QuotReqRej_1.add_element(SprdBnchmkCurve_25);
    }
    {
      xml_element Yield_20{"Yield"};
      multiset<string> Yield_20_set;
      Yield_20.add_attribute("Typ", "COMPOUND"); // 2
      Yield_20_set.insert("COMPOUND");
      Yield_20.add_attribute("Yld", "710598.350000"); // 2
      Yield_20_set.insert("710598.350000");
      Yield_20.add_attribute("CalcDt", "YieldCalcDate_t_1677882749"); // 2
      Yield_20_set.insert("YieldCalcDate_t_1677882749");
      Yield_20.add_attribute("RedDt", "YieldRedemptionDate_t_134464141"); // 2
      Yield_20_set.insert("YieldRedemptionDate_t_134464141");
      Yield_20.add_attribute("RedPx", "8005814.850000"); // 2
      Yield_20_set.insert("8005814.850000");
      Yield_20.add_attribute("RedPxTyp", "15"); // 2
      Yield_20_set.insert("15");
      all_values.push_back(Yield_20_set);
      all_compo_names.insert("Yield_20_set");

      QuotReqRej_1.add_element(Yield_20);
    }
    {
      xml_element Pty_355{"Pty"};
      multiset<string> Pty_355_set;
      Pty_355.add_attribute("ID", "PartyID_t_863330389"); // 2
      Pty_355_set.insert("PartyID_t_863330389");
      Pty_355.add_attribute("Src", "4"); // 2
      Pty_355_set.insert("4");
      Pty_355.add_attribute("R", "28"); // 2
      Pty_355_set.insert("28");
      all_values.push_back(Pty_355_set);
      all_compo_names.insert("Pty_355_set");

      {
        xml_element Sub_355{"Sub"};
        multiset<string> Sub_355_set;
        Sub_355.add_attribute("ID", "PartySubID_t_1853228382"); // 3
        Sub_355_set.insert("PartySubID_t_1853228382");
        Sub_355.add_attribute("Typ", "3"); // 3
        Sub_355_set.insert("3");
        all_values.push_back(Sub_355_set);
        all_compo_names.insert("Sub_355_set");

        Pty_355.add_element(Sub_355);
      }
      QuotReqRej_1.add_element(Pty_355);
    }
    elt.add_element(QuotReqRej_1);
  } // end QuotReqRej
  { // QuotReqRej
    xml_element QuotReqRej_2{"QuotReqRej"};
    multiset<string> QuotReqRej_2_set;
    QuotReqRej_2.add_attribute("PrevClsPx", "1837432.270000"); // 1
    QuotReqRej_2_set.insert("1837432.270000");
    QuotReqRej_2.add_attribute("ReqTyp", "2"); // 1
    QuotReqRej_2_set.insert("2");
    QuotReqRej_2.add_attribute("Typ", "2"); // 1
    QuotReqRej_2_set.insert("2");
    QuotReqRej_2.add_attribute("SesID", "1"); // 1
    QuotReqRej_2_set.insert("1");
    QuotReqRej_2.add_attribute("SesSub", "7"); // 1
    QuotReqRej_2_set.insert("7");
    QuotReqRej_2.add_attribute("OrignDt", "TradeOriginationDate_t_1668416783"); // 1
    QuotReqRej_2_set.insert("TradeOriginationDate_t_1668416783");
    QuotReqRej_2.add_attribute("Side", "2"); // 1
    QuotReqRej_2_set.insert("2");
    QuotReqRej_2.add_attribute("QtyTyp", "2"); // 1
    QuotReqRej_2_set.insert("2");
    QuotReqRej_2.add_attribute("SettlTyp", "C"); // 1
    QuotReqRej_2_set.insert("C");
    QuotReqRej_2.add_attribute("SettlDt", "SettlDate_t_653099789"); // 1
    QuotReqRej_2_set.insert("SettlDate_t_653099789");
    QuotReqRej_2.add_attribute("SettlDt2", "SettlDate2_t_1785488673"); // 1
    QuotReqRej_2_set.insert("SettlDate2_t_1785488673");
    QuotReqRej_2.add_attribute("Qty2", "14486773.190000"); // 1
    QuotReqRej_2_set.insert("14486773.190000");
    QuotReqRej_2.add_attribute("Ccy", "GBP"); // 1
    QuotReqRej_2_set.insert("GBP");
    QuotReqRej_2.add_attribute("Acct", "Account_t_1273994436"); // 1
    QuotReqRej_2_set.insert("Account_t_1273994436");
    QuotReqRej_2.add_attribute("AcctIDSrc", "99"); // 1
    QuotReqRej_2_set.insert("99");
    QuotReqRej_2.add_attribute("AcctTyp", "6"); // 1
    QuotReqRej_2_set.insert("6");
    QuotReqRej_2.add_attribute("QuotPxTyp", "7"); // 1
    QuotReqRej_2_set.insert("7");
    QuotReqRej_2.add_attribute("OrdTyp", "D"); // 1
    QuotReqRej_2_set.insert("D");
    QuotReqRej_2.add_attribute("ExpireTm", "ExpireTime_t_1054904623"); // 1
    QuotReqRej_2_set.insert("ExpireTime_t_1054904623");
    QuotReqRej_2.add_attribute("TxnTm", "TransactTime_t_205204871"); // 1
    QuotReqRej_2_set.insert("TransactTime_t_205204871");
    QuotReqRej_2.add_attribute("PxTyp", "13"); // 1
    QuotReqRej_2_set.insert("13");
    QuotReqRej_2.add_attribute("Px", "5853037.240000"); // 1
    QuotReqRej_2_set.insert("5853037.240000");
    QuotReqRej_2.add_attribute("Px2", "3396690.120000"); // 1
    QuotReqRej_2_set.insert("3396690.120000");
    all_values.push_back(QuotReqRej_2_set);
    all_compo_names.insert("QuotReqRej_2_set");

    {
      xml_element Instrmt_65{"Instrmt"};
      multiset<string> Instrmt_65_set;
      Instrmt_65.add_attribute("Sym", "Symbol_t_66389628"); // 2
      Instrmt_65_set.insert("Symbol_t_66389628");
      Instrmt_65.add_attribute("Sfx", "WI"); // 2
      Instrmt_65_set.insert("WI");
      Instrmt_65.add_attribute("ID", "SecurityID_t_1202999401"); // 2
      Instrmt_65_set.insert("SecurityID_t_1202999401");
      Instrmt_65.add_attribute("Src", "6"); // 2
      Instrmt_65_set.insert("6");
      Instrmt_65.add_attribute("Prod", "3"); // 2
      Instrmt_65_set.insert("3");
      Instrmt_65.add_attribute("ProdCmplx", "ProductComplex_t_908744136"); // 2
      Instrmt_65_set.insert("ProductComplex_t_908744136");
      Instrmt_65.add_attribute("SecGrp", "SecurityGroup_t_1637432458"); // 2
      Instrmt_65_set.insert("SecurityGroup_t_1637432458");
      Instrmt_65.add_attribute("CFI", "CFICode_t_1606731956"); // 2
      Instrmt_65_set.insert("CFICode_t_1606731956");
      Instrmt_65.add_attribute("SecTyp", "EUCORP"); // 2
      Instrmt_65_set.insert("EUCORP");
      Instrmt_65.add_attribute("SubTyp", "SecuritySubType_t_1396423812"); // 2
      Instrmt_65_set.insert("SecuritySubType_t_1396423812");
      Instrmt_65.add_attribute("MMY", "1468487154"); // 2
      Instrmt_65_set.insert("1468487154");
      Instrmt_65.add_attribute("MatDt", "MaturityDate_t_1970469332"); // 2
      Instrmt_65_set.insert("MaturityDate_t_1970469332");
      Instrmt_65.add_attribute("MatTm", "917356947"); // 2
      Instrmt_65_set.insert("917356947");
      Instrmt_65.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1116837075"); // 2
      Instrmt_65_set.insert("SettleOnOpenFlag_t_1116837075");
      Instrmt_65.add_attribute("AsgnMeth", "1156514267"); // 2
      Instrmt_65_set.insert("1156514267");
      Instrmt_65.add_attribute("Status", "1"); // 2
      Instrmt_65_set.insert("1");
      Instrmt_65.add_attribute("CpnPmt", "CouponPaymentDate_t_1769936865"); // 2
      Instrmt_65_set.insert("CouponPaymentDate_t_1769936865");
      Instrmt_65.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_65_set.insert("FR");
      Instrmt_65.add_attribute("Snrty", "SB"); // 2
      Instrmt_65_set.insert("SB");
      Instrmt_65.add_attribute("NotlPctOut", "7591711.310000"); // 2
      Instrmt_65_set.insert("7591711.310000");
      Instrmt_65.add_attribute("OrigNotlPctOut", "6610529.100000"); // 2
      Instrmt_65_set.insert("6610529.100000");
      Instrmt_65.add_attribute("AttchPnt", "8049053.250000"); // 2
      Instrmt_65_set.insert("8049053.250000");
      Instrmt_65.add_attribute("DetchPnt", "21307051.540000"); // 2
      Instrmt_65_set.insert("21307051.540000");
      Instrmt_65.add_attribute("Issued", "IssueDate_t_52961673"); // 2
      Instrmt_65_set.insert("IssueDate_t_52961673");
      Instrmt_65.add_attribute("RepoCollSecTyp", "1086190552"); // 2
      Instrmt_65_set.insert("1086190552");
      Instrmt_65.add_attribute("RepoTrm", "1325453462"); // 2
      Instrmt_65_set.insert("1325453462");
      Instrmt_65.add_attribute("RepoRt", "11078662.960000"); // 2
      Instrmt_65_set.insert("11078662.960000");
      Instrmt_65.add_attribute("Fctr", "12913954.230000"); // 2
      Instrmt_65_set.insert("12913954.230000");
      Instrmt_65.add_attribute("CrdRtg", "CreditRating_t_591261605"); // 2
      Instrmt_65_set.insert("CreditRating_t_591261605");
      Instrmt_65.add_attribute("Rgstry", "InstrRegistry_t_1693170020"); // 2
      Instrmt_65_set.insert("InstrRegistry_t_1693170020");
      Instrmt_65.add_attribute("IssuCtry", "1631064436"); // 2
      Instrmt_65_set.insert("1631064436");
      Instrmt_65.add_attribute("StPrv", "StateOrProvinceOfIssue_t_657651233"); // 2
      Instrmt_65_set.insert("StateOrProvinceOfIssue_t_657651233");
      Instrmt_65.add_attribute("Lcl", "LocaleOfIssue_t_520130202"); // 2
      Instrmt_65_set.insert("LocaleOfIssue_t_520130202");
      Instrmt_65.add_attribute("Redeem", "RedemptionDate_t_686580189"); // 2
      Instrmt_65_set.insert("RedemptionDate_t_686580189");
      Instrmt_65.add_attribute("StrkPx", "18811941.740000"); // 2
      Instrmt_65_set.insert("18811941.740000");
      Instrmt_65.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_65_set.insert("CHF");
      Instrmt_65.add_attribute("StrkMult", "13711429.850000"); // 2
      Instrmt_65_set.insert("13711429.850000");
      Instrmt_65.add_attribute("StrkValu", "14023672.390000"); // 2
      Instrmt_65_set.insert("14023672.390000");
      Instrmt_65.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_65_set.insert("2");
      Instrmt_65.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_65_set.insert("5");
      Instrmt_65.add_attribute("StrkPxBndryPrcsn", "7233707.460000"); // 2
      Instrmt_65_set.insert("7233707.460000");
      Instrmt_65.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_65_set.insert("2");
      Instrmt_65.add_attribute("OptAt", "1537440097"); // 2
      Instrmt_65_set.insert("1537440097");
      Instrmt_65.add_attribute("Mult", "18402078.210000"); // 2
      Instrmt_65_set.insert("18402078.210000");
      Instrmt_65.add_attribute("MultTyp", "1"); // 2
      Instrmt_65_set.insert("1");
      Instrmt_65.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_65_set.insert("0");
      Instrmt_65.add_attribute("MinPxIncr", "14626610.380000"); // 2
      Instrmt_65_set.insert("14626610.380000");
      Instrmt_65.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_806654176"); // 2
      Instrmt_65_set.insert("MinPriceIncrementAmount_t_806654176");
      Instrmt_65.add_attribute("UOM", "t"); // 2
      Instrmt_65_set.insert("t");
      Instrmt_65.add_attribute("UOMQty", "743485.210000"); // 2
      Instrmt_65_set.insert("743485.210000");
      Instrmt_65.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_65_set.insert("MMBtu");
      Instrmt_65.add_attribute("PxUOMQty", "21029735.300000"); // 2
      Instrmt_65_set.insert("21029735.300000");
      Instrmt_65.add_attribute("SettlMeth", "C"); // 2
      Instrmt_65_set.insert("C");
      Instrmt_65.add_attribute("ExerStyle", "2"); // 2
      Instrmt_65_set.insert("2");
      Instrmt_65.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_65_set.insert("2");
      Instrmt_65.add_attribute("OptPayAmt", "OptPayoutAmount_t_1383023490"); // 2
      Instrmt_65_set.insert("OptPayoutAmount_t_1383023490");
      Instrmt_65.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_65_set.insert("STD");
      Instrmt_65.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_65_set.insert("EQTY");
      Instrmt_65.add_attribute("ListMeth", "0"); // 2
      Instrmt_65_set.insert("0");
      Instrmt_65.add_attribute("CapPx", "267377.810000"); // 2
      Instrmt_65_set.insert("267377.810000");
      Instrmt_65.add_attribute("FlrPx", "18166566.460000"); // 2
      Instrmt_65_set.insert("18166566.460000");
      Instrmt_65.add_attribute("PutCall", "1"); // 2
      Instrmt_65_set.insert("1");
      Instrmt_65.add_attribute("FlexInd", "false"); // 2
      Instrmt_65_set.insert("false");
      Instrmt_65.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_65_set.insert("false");
      Instrmt_65.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_65_set.insert("Wk");
      Instrmt_65.add_attribute("CpnRt", "3425032.660000"); // 2
      Instrmt_65_set.insert("3425032.660000");
      Instrmt_65.add_attribute("Exch", "SecurityExchange_t_1951077513"); // 2
      Instrmt_65_set.insert("SecurityExchange_t_1951077513");
      Instrmt_65.add_attribute("PosLmt", "1589306193"); // 2
      Instrmt_65_set.insert("1589306193");
      Instrmt_65.add_attribute("NTPosLmt", "1744870505"); // 2
      Instrmt_65_set.insert("1744870505");
      Instrmt_65.add_attribute("Issr", "Issuer_t_983712446"); // 2
      Instrmt_65_set.insert("Issuer_t_983712446");
      Instrmt_65.add_attribute("EncIssrLen", "61905694"); // 2
      Instrmt_65_set.insert("61905694");
      Instrmt_65.add_attribute("EncIssr", "EncodedIssuer_t_320757603"); // 2
      Instrmt_65_set.insert("EncodedIssuer_t_320757603");
      Instrmt_65.add_attribute("Desc", "SecurityDesc_t_1986816711"); // 2
      Instrmt_65_set.insert("SecurityDesc_t_1986816711");
      Instrmt_65.add_attribute("EncSecDescLen", "1599345791"); // 2
      Instrmt_65_set.insert("1599345791");
      Instrmt_65.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_13481777"); // 2
      Instrmt_65_set.insert("EncodedSecurityDesc_t_13481777");
      Instrmt_65.add_attribute("Pool", "Pool_t_1998951595"); // 2
      Instrmt_65_set.insert("Pool_t_1998951595");
      Instrmt_65.add_attribute("CSetMo", "1219019458"); // 2
      Instrmt_65_set.insert("1219019458");
      Instrmt_65.add_attribute("CPPgm", "1"); // 2
      Instrmt_65_set.insert("1");
      Instrmt_65.add_attribute("CPRegT", "CPRegType_t_658122123"); // 2
      Instrmt_65_set.insert("CPRegType_t_658122123");
      Instrmt_65.add_attribute("Dated", "DatedDate_t_369604015"); // 2
      Instrmt_65_set.insert("DatedDate_t_369604015");
      Instrmt_65.add_attribute("IntAcrl", "InterestAccrualDate_t_1550491337"); // 2
      Instrmt_65_set.insert("InterestAccrualDate_t_1550491337");
      all_values.push_back(Instrmt_65_set);
      all_compo_names.insert("Instrmt_65_set");

      {
        xml_element AID_68{"AID"};
        multiset<string> AID_68_set;
        AID_68.add_attribute("AltID", "SecurityAltID_t_2125829209"); // 3
        AID_68_set.insert("SecurityAltID_t_2125829209");
        AID_68.add_attribute("AltIDSrc", "8"); // 3
        AID_68_set.insert("8");
        all_values.push_back(AID_68_set);
        all_compo_names.insert("AID_68_set");

        Instrmt_65.add_element(AID_68);
      }
      {
        xml_element SecXML_68{"SecXML"};
        multiset<string> SecXML_68_set;
        SecXML_68.add_attribute("Schema", "SecurityXMLSchema_t_1608061365"); // 3
        SecXML_68_set.insert("SecurityXMLSchema_t_1608061365");
        all_values.push_back(SecXML_68_set);
        all_compo_names.insert("SecXML_68_set");

        Instrmt_65.add_element(SecXML_68);
      }
      {
        xml_element Evnt_68{"Evnt"};
        multiset<string> Evnt_68_set;
        Evnt_68.add_attribute("EventTyp", "2"); // 3
        Evnt_68_set.insert("2");
        Evnt_68.add_attribute("Dt", "EventDate_t_1366774331"); // 3
        Evnt_68_set.insert("EventDate_t_1366774331");
        Evnt_68.add_attribute("Tm", "EventTime_t_843601207"); // 3
        Evnt_68_set.insert("EventTime_t_843601207");
        Evnt_68.add_attribute("Px", "19800657.300000"); // 3
        Evnt_68_set.insert("19800657.300000");
        Evnt_68.add_attribute("Txt", "EventText_t_1552366541"); // 3
        Evnt_68_set.insert("EventText_t_1552366541");
        all_values.push_back(Evnt_68_set);
        all_compo_names.insert("Evnt_68_set");

        Instrmt_65.add_element(Evnt_68);
      }
      {
        xml_element Pty_356{"Pty"};
        multiset<string> Pty_356_set;
        Pty_356.add_attribute("ID", "InstrumentPartyID_t_670402655"); // 3
        Pty_356_set.insert("InstrumentPartyID_t_670402655");
        Pty_356.add_attribute("Src", "I"); // 3
        Pty_356_set.insert("I");
        Pty_356.add_attribute("R", "4"); // 3
        Pty_356_set.insert("4");
        all_values.push_back(Pty_356_set);
        all_compo_names.insert("Pty_356_set");

        {
          xml_element Sub_356{"Sub"};
          multiset<string> Sub_356_set;
          Sub_356.add_attribute("ID", "InstrumentPartySubID_t_1154855337"); // 4
          Sub_356_set.insert("InstrumentPartySubID_t_1154855337");
          Sub_356.add_attribute("Typ", "4"); // 4
          Sub_356_set.insert("4");
          all_values.push_back(Sub_356_set);
          all_compo_names.insert("Sub_356_set");

          Pty_356.add_element(Sub_356);
        }
        Instrmt_65.add_element(Pty_356);
      }
      {
        xml_element CmplxEvnt_65{"CmplxEvnt"};
        multiset<string> CmplxEvnt_65_set;
        CmplxEvnt_65.add_attribute("Typ", "5"); // 3
        CmplxEvnt_65_set.insert("5");
        CmplxEvnt_65.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1373018545"); // 3
        CmplxEvnt_65_set.insert("ComplexOptPayoutAmount_t_1373018545");
        CmplxEvnt_65.add_attribute("Px", "7486911.120000"); // 3
        CmplxEvnt_65_set.insert("7486911.120000");
        CmplxEvnt_65.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_65_set.insert("3");
        CmplxEvnt_65.add_attribute("PxBndryPrcsn", "8148410.900000"); // 3
        CmplxEvnt_65_set.insert("8148410.900000");
        CmplxEvnt_65.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_65_set.insert("1");
        CmplxEvnt_65.add_attribute("Cond", "1"); // 3
        CmplxEvnt_65_set.insert("1");
        all_values.push_back(CmplxEvnt_65_set);
        all_compo_names.insert("CmplxEvnt_65_set");

        {
          xml_element EvntDts_65{"EvntDts"};
          multiset<string> EvntDts_65_set;
          EvntDts_65.add_attribute("StartDt", "ComplexEventStartDate_t_876746784"); // 4
          EvntDts_65_set.insert("ComplexEventStartDate_t_876746784");
          EvntDts_65.add_attribute("EndDt", "ComplexEventEndDate_t_666835573"); // 4
          EvntDts_65_set.insert("ComplexEventEndDate_t_666835573");
          all_values.push_back(EvntDts_65_set);
          all_compo_names.insert("EvntDts_65_set");

          {
            xml_element EvntTms_65{"EvntTms"};
            multiset<string> EvntTms_65_set;
            EvntTms_65.add_attribute("StartTm", "56448453"); // 5
            EvntTms_65_set.insert("56448453");
            EvntTms_65.add_attribute("EndTm", "328608928"); // 5
            EvntTms_65_set.insert("328608928");
            all_values.push_back(EvntTms_65_set);
            all_compo_names.insert("EvntTms_65_set");

            EvntDts_65.add_element(EvntTms_65);
          }
          CmplxEvnt_65.add_element(EvntDts_65);
        }
        Instrmt_65.add_element(CmplxEvnt_65);
      }
      QuotReqRej_2.add_element(Instrmt_65);
    }
    {
      xml_element FinDetls_23{"FinDetls"};
      multiset<string> FinDetls_23_set;
      FinDetls_23.add_attribute("AgmtDesc", "AgreementDesc_t_680317350"); // 2
      FinDetls_23_set.insert("AgreementDesc_t_680317350");
      FinDetls_23.add_attribute("AgmtID", "AgreementID_t_2055400048"); // 2
      FinDetls_23_set.insert("AgreementID_t_2055400048");
      FinDetls_23.add_attribute("AgmtDt", "AgreementDate_t_1547628386"); // 2
      FinDetls_23_set.insert("AgreementDate_t_1547628386");
      FinDetls_23.add_attribute("AgmtCcy", "CAN"); // 2
      FinDetls_23_set.insert("CAN");
      FinDetls_23.add_attribute("TrmTyp", "2"); // 2
      FinDetls_23_set.insert("2");
      FinDetls_23.add_attribute("StartDt", "StartDate_t_1559467854"); // 2
      FinDetls_23_set.insert("StartDate_t_1559467854");
      FinDetls_23.add_attribute("EndDt", "EndDate_t_544384084"); // 2
      FinDetls_23_set.insert("EndDate_t_544384084");
      FinDetls_23.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_23_set.insert("2");
      FinDetls_23.add_attribute("MgnRatio", "10200455.710000"); // 2
      FinDetls_23_set.insert("10200455.710000");
      all_values.push_back(FinDetls_23_set);
      all_compo_names.insert("FinDetls_23_set");

      QuotReqRej_2.add_element(FinDetls_23);
    }
    {
      xml_element Undly_89{"Undly"};
      multiset<string> Undly_89_set;
      Undly_89.add_attribute("Sym", "UnderlyingSymbol_t_2043398406"); // 2
      Undly_89_set.insert("UnderlyingSymbol_t_2043398406");
      Undly_89.add_attribute("Sfx", "CD"); // 2
      Undly_89_set.insert("CD");
      Undly_89.add_attribute("ID", "UnderlyingSecurityID_t_1863646779"); // 2
      Undly_89_set.insert("UnderlyingSecurityID_t_1863646779");
      Undly_89.add_attribute("Src", "9"); // 2
      Undly_89_set.insert("9");
      Undly_89.add_attribute("Prod", "4"); // 2
      Undly_89_set.insert("4");
      Undly_89.add_attribute("CFI", "UnderlyingCFICode_t_386565786"); // 2
      Undly_89_set.insert("UnderlyingCFICode_t_386565786");
      Undly_89.add_attribute("SecTyp", "DINP"); // 2
      Undly_89_set.insert("DINP");
      Undly_89.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2088039415"); // 2
      Undly_89_set.insert("UnderlyingSecuritySubType_t_2088039415");
      Undly_89.add_attribute("MMY", "1541421123"); // 2
      Undly_89_set.insert("1541421123");
      Undly_89.add_attribute("Mat", "UnderlyingMaturityDate_t_2141488197"); // 2
      Undly_89_set.insert("UnderlyingMaturityDate_t_2141488197");
      Undly_89.add_attribute("MatTm", "1517848494"); // 2
      Undly_89_set.insert("1517848494");
      Undly_89.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_766956020"); // 2
      Undly_89_set.insert("UnderlyingCouponPaymentDate_t_766956020");
      Undly_89.add_attribute("RestrctTyp", "MR"); // 2
      Undly_89_set.insert("MR");
      Undly_89.add_attribute("Snrty", "SD"); // 2
      Undly_89_set.insert("SD");
      Undly_89.add_attribute("NotlPctOut", "15817971.100000"); // 2
      Undly_89_set.insert("15817971.100000");
      Undly_89.add_attribute("OrigNotlPctOut", "10887736.300000"); // 2
      Undly_89_set.insert("10887736.300000");
      Undly_89.add_attribute("AttchPnt", "9683668.280000"); // 2
      Undly_89_set.insert("9683668.280000");
      Undly_89.add_attribute("DetchPnt", "3110602.470000"); // 2
      Undly_89_set.insert("3110602.470000");
      Undly_89.add_attribute("Issued", "UnderlyingIssueDate_t_1755609203"); // 2
      Undly_89_set.insert("UnderlyingIssueDate_t_1755609203");
      Undly_89.add_attribute("RepoCollSecTyp", "1024815281"); // 2
      Undly_89_set.insert("1024815281");
      Undly_89.add_attribute("RepoTrm", "639669175"); // 2
      Undly_89_set.insert("639669175");
      Undly_89.add_attribute("RepoRt", "2884429.050000"); // 2
      Undly_89_set.insert("2884429.050000");
      Undly_89.add_attribute("Fctr", "9327316.810000"); // 2
      Undly_89_set.insert("9327316.810000");
      Undly_89.add_attribute("CrdRtg", "UnderlyingCreditRating_t_39813913"); // 2
      Undly_89_set.insert("UnderlyingCreditRating_t_39813913");
      Undly_89.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_297419423"); // 2
      Undly_89_set.insert("UnderlyingInstrRegistry_t_297419423");
      Undly_89.add_attribute("Ctry", "1498770204"); // 2
      Undly_89_set.insert("1498770204");
      Undly_89.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1957046315"); // 2
      Undly_89_set.insert("UnderlyingStateOrProvinceOfIssue_t_1957046315");
      Undly_89.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1856887277"); // 2
      Undly_89_set.insert("UnderlyingLocaleOfIssue_t_1856887277");
      Undly_89.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2043154288"); // 2
      Undly_89_set.insert("UnderlyingRedemptionDate_t_2043154288");
      Undly_89.add_attribute("StrkPx", "20518889.650000"); // 2
      Undly_89_set.insert("20518889.650000");
      Undly_89.add_attribute("StrkCcy", "GBP"); // 2
      Undly_89_set.insert("GBP");
      Undly_89.add_attribute("OptA", "1366022299"); // 2
      Undly_89_set.insert("1366022299");
      Undly_89.add_attribute("Mult", "4456123.320000"); // 2
      Undly_89_set.insert("4456123.320000");
      Undly_89.add_attribute("MultTyp", "1"); // 2
      Undly_89_set.insert("1");
      Undly_89.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_89_set.insert("2");
      Undly_89.add_attribute("UOM", "tn"); // 2
      Undly_89_set.insert("tn");
      Undly_89.add_attribute("UOMQty", "12553825.890000"); // 2
      Undly_89_set.insert("12553825.890000");
      Undly_89.add_attribute("PxUOM", "Bu"); // 2
      Undly_89_set.insert("Bu");
      Undly_89.add_attribute("PxUOMQty", "2261155.940000"); // 2
      Undly_89_set.insert("2261155.940000");
      Undly_89.add_attribute("TmUnit", "Yr"); // 2
      Undly_89_set.insert("Yr");
      Undly_89.add_attribute("ExerStyle", "1"); // 2
      Undly_89_set.insert("1");
      Undly_89.add_attribute("CpnRt", "9930716.140000"); // 2
      Undly_89_set.insert("9930716.140000");
      Undly_89.add_attribute("Exch", "UnderlyingSecurityExchange_t_1992082799"); // 2
      Undly_89_set.insert("UnderlyingSecurityExchange_t_1992082799");
      Undly_89.add_attribute("Issr", "UnderlyingIssuer_t_147210578"); // 2
      Undly_89_set.insert("UnderlyingIssuer_t_147210578");
      Undly_89.add_attribute("EncUndIssrLen", "427385077"); // 2
      Undly_89_set.insert("427385077");
      Undly_89.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_933372782"); // 2
      Undly_89_set.insert("EncodedUnderlyingIssuer_t_933372782");
      Undly_89.add_attribute("Desc", "UnderlyingSecurityDesc_t_1115577406"); // 2
      Undly_89_set.insert("UnderlyingSecurityDesc_t_1115577406");
      Undly_89.add_attribute("EncUndSecDescLen", "738445324"); // 2
      Undly_89_set.insert("738445324");
      Undly_89.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_541498337"); // 2
      Undly_89_set.insert("EncodedUnderlyingSecurityDesc_t_541498337");
      Undly_89.add_attribute("CPPgm", "UnderlyingCPProgram_t_2140392687"); // 2
      Undly_89_set.insert("UnderlyingCPProgram_t_2140392687");
      Undly_89.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1378114499"); // 2
      Undly_89_set.insert("UnderlyingCPRegType_t_1378114499");
      Undly_89.add_attribute("AllocPct", "8299412.430000"); // 2
      Undly_89_set.insert("8299412.430000");
      Undly_89.add_attribute("Ccy", "USD"); // 2
      Undly_89_set.insert("USD");
      Undly_89.add_attribute("Qty", "11273606.660000"); // 2
      Undly_89_set.insert("11273606.660000");
      Undly_89.add_attribute("SettlTyp", "2"); // 2
      Undly_89_set.insert("2");
      Undly_89.add_attribute("CashAmt", "UnderlyingCashAmount_t_1227491079"); // 2
      Undly_89_set.insert("UnderlyingCashAmount_t_1227491079");
      Undly_89.add_attribute("CashTyp", "DIFF"); // 2
      Undly_89_set.insert("DIFF");
      Undly_89.add_attribute("Px", "1725979.160000"); // 2
      Undly_89_set.insert("1725979.160000");
      Undly_89.add_attribute("DirtPx", "11318963.970000"); // 2
      Undly_89_set.insert("11318963.970000");
      Undly_89.add_attribute("EndPx", "15662134.960000"); // 2
      Undly_89_set.insert("15662134.960000");
      Undly_89.add_attribute("StartVal", "UnderlyingStartValue_t_2111666963"); // 2
      Undly_89_set.insert("UnderlyingStartValue_t_2111666963");
      Undly_89.add_attribute("CurVal", "UnderlyingCurrentValue_t_350435048"); // 2
      Undly_89_set.insert("UnderlyingCurrentValue_t_350435048");
      Undly_89.add_attribute("EndVal", "UnderlyingEndValue_t_2011825828"); // 2
      Undly_89_set.insert("UnderlyingEndValue_t_2011825828");
      Undly_89.add_attribute("AdjQty", "16317492.010000"); // 2
      Undly_89_set.insert("16317492.010000");
      Undly_89.add_attribute("FxRate", "4354735.750000"); // 2
      Undly_89_set.insert("4354735.750000");
      Undly_89.add_attribute("FxRateCalc", "D"); // 2
      Undly_89_set.insert("D");
      Undly_89.add_attribute("CapValu", "UnderlyingCapValue_t_739648143"); // 2
      Undly_89_set.insert("UnderlyingCapValue_t_739648143");
      Undly_89.add_attribute("SetMeth", "UnderlyingSettlMethod_t_461067869"); // 2
      Undly_89_set.insert("UnderlyingSettlMethod_t_461067869");
      Undly_89.add_attribute("PutCall", "922635893"); // 2
      Undly_89_set.insert("922635893");
      all_values.push_back(Undly_89_set);
      all_compo_names.insert("Undly_89_set");

      {
        xml_element UndAID_89{"UndAID"};
        multiset<string> UndAID_89_set;
        UndAID_89.add_attribute("AltID", "UnderlyingSecurityAltID_t_1989035281"); // 3
        UndAID_89_set.insert("UnderlyingSecurityAltID_t_1989035281");
        UndAID_89.add_attribute("AltIDSrc", "I"); // 3
        UndAID_89_set.insert("I");
        all_values.push_back(UndAID_89_set);
        all_compo_names.insert("UndAID_89_set");

        Undly_89.add_element(UndAID_89);
      }
      {
        xml_element Stip_136{"Stip"};
        multiset<string> Stip_136_set;
        Stip_136.add_attribute("Typ", "REFINT"); // 3
        Stip_136_set.insert("REFINT");
        Stip_136.add_attribute("Val", "UnderlyingStipValue_t_1833634433"); // 3
        Stip_136_set.insert("UnderlyingStipValue_t_1833634433");
        all_values.push_back(Stip_136_set);
        all_compo_names.insert("Stip_136_set");

        Undly_89.add_element(Stip_136);
      }
      {
        xml_element Pty_357{"Pty"};
        multiset<string> Pty_357_set;
        Pty_357.add_attribute("ID", "UnderlyingInstrumentPartyID_t_4237587"); // 3
        Pty_357_set.insert("UnderlyingInstrumentPartyID_t_4237587");
        Pty_357.add_attribute("Src", "3"); // 3
        Pty_357_set.insert("3");
        Pty_357.add_attribute("R", "50"); // 3
        Pty_357_set.insert("50");
        all_values.push_back(Pty_357_set);
        all_compo_names.insert("Pty_357_set");

        {
          xml_element Sub_357{"Sub"};
          multiset<string> Sub_357_set;
          Sub_357.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1119814993"); // 4
          Sub_357_set.insert("UnderlyingInstrumentPartySubID_t_1119814993");
          Sub_357.add_attribute("Typ", "26"); // 4
          Sub_357_set.insert("26");
          all_values.push_back(Sub_357_set);
          all_compo_names.insert("Sub_357_set");

          Pty_357.add_element(Sub_357);
        }
        Undly_89.add_element(Pty_357);
      }
      QuotReqRej_2.add_element(Undly_89);
    }
    {
      xml_element OrdQty_24{"OrdQty"};
      multiset<string> OrdQty_24_set;
      OrdQty_24.add_attribute("Qty", "11610219.040000"); // 2
      OrdQty_24_set.insert("11610219.040000");
      OrdQty_24.add_attribute("Cash", "11127240.320000"); // 2
      OrdQty_24_set.insert("11127240.320000");
      OrdQty_24.add_attribute("Pct", "1646851.110000"); // 2
      OrdQty_24_set.insert("1646851.110000");
      OrdQty_24.add_attribute("RndDir", "1"); // 2
      OrdQty_24_set.insert("1");
      OrdQty_24.add_attribute("RndMod", "20383647.520000"); // 2
      OrdQty_24_set.insert("20383647.520000");
      all_values.push_back(OrdQty_24_set);
      all_compo_names.insert("OrdQty_24_set");

      QuotReqRej_2.add_element(OrdQty_24);
    }
    {
      xml_element Stip_137{"Stip"};
      multiset<string> Stip_137_set;
      Stip_137.add_attribute("Typ", "BGNCON"); // 2
      Stip_137_set.insert("BGNCON");
      Stip_137.add_attribute("Val", "StipulationValue_t_970840165"); // 2
      Stip_137_set.insert("StipulationValue_t_970840165");
      all_values.push_back(Stip_137_set);
      all_compo_names.insert("Stip_137_set");

      QuotReqRej_2.add_element(Stip_137);
    }
    {
      xml_element Leg_79{"Leg"};
      multiset<string> Leg_79_set;
      Leg_79.add_attribute("Qty", "1678083.800000"); // 2
      Leg_79_set.insert("1678083.800000");
      Leg_79.add_attribute("OrdQty", "6626209.550000"); // 2
      Leg_79_set.insert("6626209.550000");
      Leg_79.add_attribute("SwapTyp", "2"); // 2
      Leg_79_set.insert("2");
      Leg_79.add_attribute("SettlTyp", "5"); // 2
      Leg_79_set.insert("5");
      Leg_79.add_attribute("SettlDt", "LegSettlDate_t_1794517352"); // 2
      Leg_79_set.insert("LegSettlDate_t_1794517352");
      Leg_79.add_attribute("RefID", "LegRefID_t_1226334309"); // 2
      Leg_79_set.insert("LegRefID_t_1226334309");
      all_values.push_back(Leg_79_set);
      all_compo_names.insert("Leg_79_set");

      {
        xml_element Leg_80{"Leg"};
        multiset<string> Leg_80_set;
        Leg_80.add_attribute("Sym", "LegSymbol_t_304589612"); // 3
        Leg_80_set.insert("LegSymbol_t_304589612");
        Leg_80.add_attribute("Sfx", "WI"); // 3
        Leg_80_set.insert("WI");
        Leg_80.add_attribute("ID", "LegSecurityID_t_1090676490"); // 3
        Leg_80_set.insert("LegSecurityID_t_1090676490");
        Leg_80.add_attribute("Src", "E"); // 3
        Leg_80_set.insert("E");
        Leg_80.add_attribute("Prod", "1"); // 3
        Leg_80_set.insert("1");
        Leg_80.add_attribute("CFI", "LegCFICode_t_1787196789"); // 3
        Leg_80_set.insert("LegCFICode_t_1787196789");
        Leg_80.add_attribute("SecTyp", "SUPRA"); // 3
        Leg_80_set.insert("SUPRA");
        Leg_80.add_attribute("SecSubTyp", "LegSecuritySubType_t_894010198"); // 3
        Leg_80_set.insert("LegSecuritySubType_t_894010198");
        Leg_80.add_attribute("MMY", "562349034"); // 3
        Leg_80_set.insert("562349034");
        Leg_80.add_attribute("Mat", "LegMaturityDate_t_370054942"); // 3
        Leg_80_set.insert("LegMaturityDate_t_370054942");
        Leg_80.add_attribute("MatTm", "751037207"); // 3
        Leg_80_set.insert("751037207");
        Leg_80.add_attribute("CpnPmt", "LegCouponPaymentDate_t_330572893"); // 3
        Leg_80_set.insert("LegCouponPaymentDate_t_330572893");
        Leg_80.add_attribute("Issued", "LegIssueDate_t_56205727"); // 3
        Leg_80_set.insert("LegIssueDate_t_56205727");
        Leg_80.add_attribute("RepoCollSecTyp", "755274795"); // 3
        Leg_80_set.insert("755274795");
        Leg_80.add_attribute("RepoTrm", "526181830"); // 3
        Leg_80_set.insert("526181830");
        Leg_80.add_attribute("RepoRt", "6757292.940000"); // 3
        Leg_80_set.insert("6757292.940000");
        Leg_80.add_attribute("Fctr", "18750897.880000"); // 3
        Leg_80_set.insert("18750897.880000");
        Leg_80.add_attribute("CrdRtg", "LegCreditRating_t_1460236090"); // 3
        Leg_80_set.insert("LegCreditRating_t_1460236090");
        Leg_80.add_attribute("Rgstry", "LegInstrRegistry_t_1836751198"); // 3
        Leg_80_set.insert("LegInstrRegistry_t_1836751198");
        Leg_80.add_attribute("Ctry", "840330173"); // 3
        Leg_80_set.insert("840330173");
        Leg_80.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1624921202"); // 3
        Leg_80_set.insert("LegStateOrProvinceOfIssue_t_1624921202");
        Leg_80.add_attribute("Lcl", "LegLocaleOfIssue_t_1680230698"); // 3
        Leg_80_set.insert("LegLocaleOfIssue_t_1680230698");
        Leg_80.add_attribute("Redeem", "LegRedemptionDate_t_731211277"); // 3
        Leg_80_set.insert("LegRedemptionDate_t_731211277");
        Leg_80.add_attribute("Strk", "10600510.780000"); // 3
        Leg_80_set.insert("10600510.780000");
        Leg_80.add_attribute("StrkCcy", "JPY"); // 3
        Leg_80_set.insert("JPY");
        Leg_80.add_attribute("OptA", "1722672033"); // 3
        Leg_80_set.insert("1722672033");
        Leg_80.add_attribute("Cmult", "1637080.280000"); // 3
        Leg_80_set.insert("1637080.280000");
        Leg_80.add_attribute("MultTyp", "0"); // 3
        Leg_80_set.insert("0");
        Leg_80.add_attribute("FlowSchedTyp", "3"); // 3
        Leg_80_set.insert("3");
        Leg_80.add_attribute("UOM", "USD"); // 3
        Leg_80_set.insert("USD");
        Leg_80.add_attribute("UOMQty", "15440155.670000"); // 3
        Leg_80_set.insert("15440155.670000");
        Leg_80.add_attribute("PxUOM", "lbs"); // 3
        Leg_80_set.insert("lbs");
        Leg_80.add_attribute("PxUOMQty", "3332351.800000"); // 3
        Leg_80_set.insert("3332351.800000");
        Leg_80.add_attribute("TmUnit", "Wk"); // 3
        Leg_80_set.insert("Wk");
        Leg_80.add_attribute("ExerStyle", "2"); // 3
        Leg_80_set.insert("2");
        Leg_80.add_attribute("CpnRt", "21204319.690000"); // 3
        Leg_80_set.insert("21204319.690000");
        Leg_80.add_attribute("Exch", "LegSecurityExchange_t_1861374041"); // 3
        Leg_80_set.insert("LegSecurityExchange_t_1861374041");
        Leg_80.add_attribute("Issr", "LegIssuer_t_546643369"); // 3
        Leg_80_set.insert("LegIssuer_t_546643369");
        Leg_80.add_attribute("EncLegIssrLen", "535297355"); // 3
        Leg_80_set.insert("535297355");
        Leg_80.add_attribute("EncLegIssr", "EncodedLegIssuer_t_83945335"); // 3
        Leg_80_set.insert("EncodedLegIssuer_t_83945335");
        Leg_80.add_attribute("Desc", "LegSecurityDesc_t_1297680577"); // 3
        Leg_80_set.insert("LegSecurityDesc_t_1297680577");
        Leg_80.add_attribute("EncLegSecDescLen", "865870248"); // 3
        Leg_80_set.insert("865870248");
        Leg_80.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_140151062"); // 3
        Leg_80_set.insert("EncodedLegSecurityDesc_t_140151062");
        Leg_80.add_attribute("RatioQty", "20529553.720000"); // 3
        Leg_80_set.insert("20529553.720000");
        Leg_80.add_attribute("Side", "F"); // 3
        Leg_80_set.insert("F");
        Leg_80.add_attribute("Ccy", "USD"); // 3
        Leg_80_set.insert("USD");
        Leg_80.add_attribute("Pool", "LegPool_t_704804521"); // 3
        Leg_80_set.insert("LegPool_t_704804521");
        Leg_80.add_attribute("Dated", "LegDatedDate_t_505147906"); // 3
        Leg_80_set.insert("LegDatedDate_t_505147906");
        Leg_80.add_attribute("CSetMo", "473408037"); // 3
        Leg_80_set.insert("473408037");
        Leg_80.add_attribute("IntAcrl", "LegInterestAccrualDate_t_182242075"); // 3
        Leg_80_set.insert("LegInterestAccrualDate_t_182242075");
        Leg_80.add_attribute("PutCall", "37894956"); // 3
        Leg_80_set.insert("37894956");
        Leg_80.add_attribute("LegOptionRatio", "12046193.150000"); // 3
        Leg_80_set.insert("12046193.150000");
        Leg_80.add_attribute("Px", "12422931.530000"); // 3
        Leg_80_set.insert("12422931.530000");
        all_values.push_back(Leg_80_set);
        all_compo_names.insert("Leg_80_set");

        {
          xml_element LegAID_75{"LegAID"};
          multiset<string> LegAID_75_set;
          LegAID_75.add_attribute("SecAltID", "LegSecurityAltID_t_541482172"); // 4
          LegAID_75_set.insert("LegSecurityAltID_t_541482172");
          LegAID_75.add_attribute("SecAltIDSrc", "8"); // 4
          LegAID_75_set.insert("8");
          all_values.push_back(LegAID_75_set);
          all_compo_names.insert("LegAID_75_set");

          Leg_80.add_element(LegAID_75);
        }
        Leg_79.add_element(Leg_80);
      }
      {
        xml_element Stip_138{"Stip"};
        multiset<string> Stip_138_set;
        Stip_138.add_attribute("StipTyp", "LOOKBACK"); // 3
        Stip_138_set.insert("LOOKBACK");
        Stip_138.add_attribute("StipVal", "LegStipulationValue_t_705190200"); // 3
        Stip_138_set.insert("LegStipulationValue_t_705190200");
        all_values.push_back(Stip_138_set);
        all_compo_names.insert("Stip_138_set");

        Leg_79.add_element(Stip_138);
      }
      {
        xml_element Pty_358{"Pty"};
        multiset<string> Pty_358_set;
        Pty_358.add_attribute("ID", "NestedPartyID_t_1195581280"); // 3
        Pty_358_set.insert("NestedPartyID_t_1195581280");
        Pty_358.add_attribute("Src", "3"); // 3
        Pty_358_set.insert("3");
        Pty_358.add_attribute("R", "45"); // 3
        Pty_358_set.insert("45");
        all_values.push_back(Pty_358_set);
        all_compo_names.insert("Pty_358_set");

        {
          xml_element Sub_358{"Sub"};
          multiset<string> Sub_358_set;
          Sub_358.add_attribute("ID", "NestedPartySubID_t_592113199"); // 4
          Sub_358_set.insert("NestedPartySubID_t_592113199");
          Sub_358.add_attribute("Typ", "18"); // 4
          Sub_358_set.insert("18");
          all_values.push_back(Sub_358_set);
          all_compo_names.insert("Sub_358_set");

          Pty_358.add_element(Sub_358);
        }
        Leg_79.add_element(Pty_358);
      }
      {
        xml_element BnchmkCurve_5{"BnchmkCurve"};
        multiset<string> BnchmkCurve_5_set;
        BnchmkCurve_5.add_attribute("Ccy", "EUR"); // 3
        BnchmkCurve_5_set.insert("EUR");
        BnchmkCurve_5.add_attribute("Name", "OTHER"); // 3
        BnchmkCurve_5_set.insert("OTHER");
        BnchmkCurve_5.add_attribute("Point", "LegBenchmarkCurvePoint_t_253932391"); // 3
        BnchmkCurve_5_set.insert("LegBenchmarkCurvePoint_t_253932391");
        BnchmkCurve_5.add_attribute("Px", "16388743.240000"); // 3
        BnchmkCurve_5_set.insert("16388743.240000");
        BnchmkCurve_5.add_attribute("PxTyp", "1606154660"); // 3
        BnchmkCurve_5_set.insert("1606154660");
        all_values.push_back(BnchmkCurve_5_set);
        all_compo_names.insert("BnchmkCurve_5_set");

        Leg_79.add_element(BnchmkCurve_5);
      }
      QuotReqRej_2.add_element(Leg_79);
    }
    {
      xml_element QuotQual_5{"QuotQual"};
      multiset<string> QuotQual_5_set;
      QuotQual_5.add_attribute("Qual", "A"); // 2
      QuotQual_5_set.insert("A");
      all_values.push_back(QuotQual_5_set);
      all_compo_names.insert("QuotQual_5_set");

      QuotReqRej_2.add_element(QuotQual_5);
    }
    {
      xml_element SprdBnchmkCurve_26{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_26_set;
      SprdBnchmkCurve_26.add_attribute("Spread", "17228196.590000"); // 2
      SprdBnchmkCurve_26_set.insert("17228196.590000");
      SprdBnchmkCurve_26.add_attribute("Ccy", "EUR"); // 2
      SprdBnchmkCurve_26_set.insert("EUR");
      SprdBnchmkCurve_26.add_attribute("Name", "EUREPO"); // 2
      SprdBnchmkCurve_26_set.insert("EUREPO");
      SprdBnchmkCurve_26.add_attribute("Point", "BenchmarkCurvePoint_t_661823313"); // 2
      SprdBnchmkCurve_26_set.insert("BenchmarkCurvePoint_t_661823313");
      SprdBnchmkCurve_26.add_attribute("Px", "8996684.250000"); // 2
      SprdBnchmkCurve_26_set.insert("8996684.250000");
      SprdBnchmkCurve_26.add_attribute("PxTyp", "15"); // 2
      SprdBnchmkCurve_26_set.insert("15");
      SprdBnchmkCurve_26.add_attribute("SecID", "BenchmarkSecurityID_t_294901178"); // 2
      SprdBnchmkCurve_26_set.insert("BenchmarkSecurityID_t_294901178");
      SprdBnchmkCurve_26.add_attribute("SecIDSrc", "B"); // 2
      SprdBnchmkCurve_26_set.insert("B");
      all_values.push_back(SprdBnchmkCurve_26_set);
      all_compo_names.insert("SprdBnchmkCurve_26_set");

      QuotReqRej_2.add_element(SprdBnchmkCurve_26);
    }
    {
      xml_element Yield_21{"Yield"};
      multiset<string> Yield_21_set;
      Yield_21.add_attribute("Typ", "CHANGE"); // 2
      Yield_21_set.insert("CHANGE");
      Yield_21.add_attribute("Yld", "7683092.150000"); // 2
      Yield_21_set.insert("7683092.150000");
      Yield_21.add_attribute("CalcDt", "YieldCalcDate_t_1786715021"); // 2
      Yield_21_set.insert("YieldCalcDate_t_1786715021");
      Yield_21.add_attribute("RedDt", "YieldRedemptionDate_t_1074410292"); // 2
      Yield_21_set.insert("YieldRedemptionDate_t_1074410292");
      Yield_21.add_attribute("RedPx", "19729285.300000"); // 2
      Yield_21_set.insert("19729285.300000");
      Yield_21.add_attribute("RedPxTyp", "16"); // 2
      Yield_21_set.insert("16");
      all_values.push_back(Yield_21_set);
      all_compo_names.insert("Yield_21_set");

      QuotReqRej_2.add_element(Yield_21);
    }
    {
      xml_element Pty_359{"Pty"};
      multiset<string> Pty_359_set;
      Pty_359.add_attribute("ID", "PartyID_t_1615892464"); // 2
      Pty_359_set.insert("PartyID_t_1615892464");
      Pty_359.add_attribute("Src", "6"); // 2
      Pty_359_set.insert("6");
      Pty_359.add_attribute("R", "39"); // 2
      Pty_359_set.insert("39");
      all_values.push_back(Pty_359_set);
      all_compo_names.insert("Pty_359_set");

      {
        xml_element Sub_359{"Sub"};
        multiset<string> Sub_359_set;
        Sub_359.add_attribute("ID", "PartySubID_t_173599017"); // 3
        Sub_359_set.insert("PartySubID_t_173599017");
        Sub_359.add_attribute("Typ", "16"); // 3
        Sub_359_set.insert("16");
        all_values.push_back(Sub_359_set);
        all_compo_names.insert("Sub_359_set");

        Pty_359.add_element(Sub_359);
      }
      QuotReqRej_2.add_element(Pty_359);
    }
    elt.add_element(QuotReqRej_2);
  } // end QuotReqRej
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
