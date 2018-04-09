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
  elt.add_attribute("ReqID", "QuoteReqID_t_722248758"); // 0
  QuoteRequestReject_message_t_0.insert("QuoteReqID_t_722248758");
  elt.add_attribute("RFQReqID", "RFQReqID_t_84104486"); // 0
  QuoteRequestReject_message_t_0.insert("RFQReqID_t_84104486");
  elt.add_attribute("ReqRejRsn", "1"); // 0
  QuoteRequestReject_message_t_0.insert("1");
  elt.add_attribute("PrvtQt", "false"); // 0
  QuoteRequestReject_message_t_0.insert("false");
  elt.add_attribute("RspdntTyp", "3"); // 0
  QuoteRequestReject_message_t_0.insert("3");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  QuoteRequestReject_message_t_0.insert("false");
  elt.add_attribute("Txt", "Text_t_465491096"); // 0
  QuoteRequestReject_message_t_0.insert("Text_t_465491096");
  elt.add_attribute("EncTxtLen", "283216895"); // 0
  QuoteRequestReject_message_t_0.insert("283216895");
  elt.add_attribute("EncTxt", "EncodedText_t_1009453691"); // 0
  QuoteRequestReject_message_t_0.insert("EncodedText_t_1009453691");
  all_values.push_back(QuoteRequestReject_message_t_0);
  all_compo_names.insert("QuoteRequestReject_message_t");

  { // Hdr
    xml_element Hdr_71{"Hdr"};
    multiset<string> Hdr_71_set;
    Hdr_71.add_attribute("SeqNum", "887897788"); // 1
    Hdr_71_set.insert("887897788");
    Hdr_71.add_attribute("SID", "SenderCompID_t_1713405100"); // 1
    Hdr_71_set.insert("SenderCompID_t_1713405100");
    Hdr_71.add_attribute("TID", "TargetCompID_t_1934217280"); // 1
    Hdr_71_set.insert("TargetCompID_t_1934217280");
    Hdr_71.add_attribute("OBID", "OnBehalfOfCompID_t_605415817"); // 1
    Hdr_71_set.insert("OnBehalfOfCompID_t_605415817");
    Hdr_71.add_attribute("D2ID", "DeliverToCompID_t_1730168576"); // 1
    Hdr_71_set.insert("DeliverToCompID_t_1730168576");
    Hdr_71.add_attribute("SSub", "SenderSubID_t_612822059"); // 1
    Hdr_71_set.insert("SenderSubID_t_612822059");
    Hdr_71.add_attribute("SLoc", "SenderLocationID_t_1920763301"); // 1
    Hdr_71_set.insert("SenderLocationID_t_1920763301");
    Hdr_71.add_attribute("TSub", "TargetSubID_t_914329036"); // 1
    Hdr_71_set.insert("TargetSubID_t_914329036");
    Hdr_71.add_attribute("TLoc", "TargetLocationID_t_1948863324"); // 1
    Hdr_71_set.insert("TargetLocationID_t_1948863324");
    Hdr_71.add_attribute("OBSub", "OnBehalfOfSubID_t_228629599"); // 1
    Hdr_71_set.insert("OnBehalfOfSubID_t_228629599");
    Hdr_71.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2091828047"); // 1
    Hdr_71_set.insert("OnBehalfOfLocationID_t_2091828047");
    Hdr_71.add_attribute("D2Sub", "DeliverToSubID_t_83558905"); // 1
    Hdr_71_set.insert("DeliverToSubID_t_83558905");
    Hdr_71.add_attribute("D2Loc", "DeliverToLocationID_t_287193367"); // 1
    Hdr_71_set.insert("DeliverToLocationID_t_287193367");
    Hdr_71.add_attribute("PosDup", "N"); // 1
    Hdr_71_set.insert("N");
    Hdr_71.add_attribute("PosRsnd", "Y"); // 1
    Hdr_71_set.insert("Y");
    Hdr_71.add_attribute("Snt", "SendingTime_t_1705327573"); // 1
    Hdr_71_set.insert("SendingTime_t_1705327573");
    Hdr_71.add_attribute("OrigSnt", "OrigSendingTime_t_589132657"); // 1
    Hdr_71_set.insert("OrigSendingTime_t_589132657");
    Hdr_71.add_attribute("MsgEncd", "MessageEncoding_t_1562182650"); // 1
    Hdr_71_set.insert("MessageEncoding_t_1562182650");
    all_values.push_back(Hdr_71_set);
    all_compo_names.insert("Hdr_71_set");

    {
      xml_element Hop_71{"Hop"};
      multiset<string> Hop_71_set;
      Hop_71.add_attribute("ID", "HopCompID_t_1253178067"); // 2
      Hop_71_set.insert("HopCompID_t_1253178067");
      Hop_71.add_attribute("Ref", "1488974387"); // 2
      Hop_71_set.insert("1488974387");
      Hop_71.add_attribute("Snt", "HopSendingTime_t_1895281458"); // 2
      Hop_71_set.insert("HopSendingTime_t_1895281458");
      all_values.push_back(Hop_71_set);
      all_compo_names.insert("Hop_71_set");

      Hdr_71.add_element(Hop_71);
    }
    elt.add_element(Hdr_71);
  } // end Hdr
  { // Pty
    xml_element Pty_317{"Pty"};
    multiset<string> Pty_317_set;
    Pty_317.add_attribute("ID", "RootPartyID_t_63739497"); // 1
    Pty_317_set.insert("RootPartyID_t_63739497");
    Pty_317.add_attribute("Src", "F"); // 1
    Pty_317_set.insert("F");
    Pty_317.add_attribute("R", "50"); // 1
    Pty_317_set.insert("50");
    all_values.push_back(Pty_317_set);
    all_compo_names.insert("Pty_317_set");

    {
      xml_element Sub_317{"Sub"};
      multiset<string> Sub_317_set;
      Sub_317.add_attribute("ID", "RootPartySubID_t_2020565717"); // 2
      Sub_317_set.insert("RootPartySubID_t_2020565717");
      Sub_317.add_attribute("Typ", "23"); // 2
      Sub_317_set.insert("23");
      all_values.push_back(Sub_317_set);
      all_compo_names.insert("Sub_317_set");

      Pty_317.add_element(Sub_317);
    }
    elt.add_element(Pty_317);
  } // end Pty
  { // QuotReqRej
    xml_element QuotReqRej_0{"QuotReqRej"};
    multiset<string> QuotReqRej_0_set;
    QuotReqRej_0.add_attribute("PrevClsPx", "3385731.650000"); // 1
    QuotReqRej_0_set.insert("3385731.650000");
    QuotReqRej_0.add_attribute("ReqTyp", "2"); // 1
    QuotReqRej_0_set.insert("2");
    QuotReqRej_0.add_attribute("Typ", "3"); // 1
    QuotReqRej_0_set.insert("3");
    QuotReqRej_0.add_attribute("SesID", "4"); // 1
    QuotReqRej_0_set.insert("4");
    QuotReqRej_0.add_attribute("SesSub", "7"); // 1
    QuotReqRej_0_set.insert("7");
    QuotReqRej_0.add_attribute("OrignDt", "TradeOriginationDate_t_93190563"); // 1
    QuotReqRej_0_set.insert("TradeOriginationDate_t_93190563");
    QuotReqRej_0.add_attribute("Side", "3"); // 1
    QuotReqRej_0_set.insert("3");
    QuotReqRej_0.add_attribute("QtyTyp", "2"); // 1
    QuotReqRej_0_set.insert("2");
    QuotReqRej_0.add_attribute("SettlTyp", "2"); // 1
    QuotReqRej_0_set.insert("2");
    QuotReqRej_0.add_attribute("SettlDt", "SettlDate_t_1605166423"); // 1
    QuotReqRej_0_set.insert("SettlDate_t_1605166423");
    QuotReqRej_0.add_attribute("SettlDt2", "SettlDate2_t_27662890"); // 1
    QuotReqRej_0_set.insert("SettlDate2_t_27662890");
    QuotReqRej_0.add_attribute("Qty2", "5073922.980000"); // 1
    QuotReqRej_0_set.insert("5073922.980000");
    QuotReqRej_0.add_attribute("Ccy", "CHF"); // 1
    QuotReqRej_0_set.insert("CHF");
    QuotReqRej_0.add_attribute("Acct", "Account_t_590951203"); // 1
    QuotReqRej_0_set.insert("Account_t_590951203");
    QuotReqRej_0.add_attribute("AcctIDSrc", "5"); // 1
    QuotReqRej_0_set.insert("5");
    QuotReqRej_0.add_attribute("AcctTyp", "2"); // 1
    QuotReqRej_0_set.insert("2");
    QuotReqRej_0.add_attribute("QuotPxTyp", "8"); // 1
    QuotReqRej_0_set.insert("8");
    QuotReqRej_0.add_attribute("OrdTyp", "5"); // 1
    QuotReqRej_0_set.insert("5");
    QuotReqRej_0.add_attribute("ExpireTm", "ExpireTime_t_1521868267"); // 1
    QuotReqRej_0_set.insert("ExpireTime_t_1521868267");
    QuotReqRej_0.add_attribute("TxnTm", "TransactTime_t_589735330"); // 1
    QuotReqRej_0_set.insert("TransactTime_t_589735330");
    QuotReqRej_0.add_attribute("PxTyp", "2"); // 1
    QuotReqRej_0_set.insert("2");
    QuotReqRej_0.add_attribute("Px", "8633590.060000"); // 1
    QuotReqRej_0_set.insert("8633590.060000");
    QuotReqRej_0.add_attribute("Px2", "3375331.400000"); // 1
    QuotReqRej_0_set.insert("3375331.400000");
    all_values.push_back(QuotReqRej_0_set);
    all_compo_names.insert("QuotReqRej_0_set");

    {
      xml_element Instrmt_60{"Instrmt"};
      multiset<string> Instrmt_60_set;
      Instrmt_60.add_attribute("Sym", "Symbol_t_328320505"); // 2
      Instrmt_60_set.insert("Symbol_t_328320505");
      Instrmt_60.add_attribute("Sfx", "CD"); // 2
      Instrmt_60_set.insert("CD");
      Instrmt_60.add_attribute("ID", "SecurityID_t_169435436"); // 2
      Instrmt_60_set.insert("SecurityID_t_169435436");
      Instrmt_60.add_attribute("Src", "3"); // 2
      Instrmt_60_set.insert("3");
      Instrmt_60.add_attribute("Prod", "7"); // 2
      Instrmt_60_set.insert("7");
      Instrmt_60.add_attribute("ProdCmplx", "ProductComplex_t_1998429663"); // 2
      Instrmt_60_set.insert("ProductComplex_t_1998429663");
      Instrmt_60.add_attribute("SecGrp", "SecurityGroup_t_927522704"); // 2
      Instrmt_60_set.insert("SecurityGroup_t_927522704");
      Instrmt_60.add_attribute("CFI", "CFICode_t_1138753738"); // 2
      Instrmt_60_set.insert("CFICode_t_1138753738");
      Instrmt_60.add_attribute("SecTyp", "CTB"); // 2
      Instrmt_60_set.insert("CTB");
      Instrmt_60.add_attribute("SubTyp", "SecuritySubType_t_1233979635"); // 2
      Instrmt_60_set.insert("SecuritySubType_t_1233979635");
      Instrmt_60.add_attribute("MMY", "217741043"); // 2
      Instrmt_60_set.insert("217741043");
      Instrmt_60.add_attribute("MatDt", "MaturityDate_t_1493806062"); // 2
      Instrmt_60_set.insert("MaturityDate_t_1493806062");
      Instrmt_60.add_attribute("MatTm", "1327170198"); // 2
      Instrmt_60_set.insert("1327170198");
      Instrmt_60.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2049627814"); // 2
      Instrmt_60_set.insert("SettleOnOpenFlag_t_2049627814");
      Instrmt_60.add_attribute("AsgnMeth", "607139916"); // 2
      Instrmt_60_set.insert("607139916");
      Instrmt_60.add_attribute("Status", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("CpnPmt", "CouponPaymentDate_t_1507310589"); // 2
      Instrmt_60_set.insert("CouponPaymentDate_t_1507310589");
      Instrmt_60.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_60_set.insert("XR");
      Instrmt_60.add_attribute("Snrty", "SR"); // 2
      Instrmt_60_set.insert("SR");
      Instrmt_60.add_attribute("NotlPctOut", "11936229.640000"); // 2
      Instrmt_60_set.insert("11936229.640000");
      Instrmt_60.add_attribute("OrigNotlPctOut", "6068100.960000"); // 2
      Instrmt_60_set.insert("6068100.960000");
      Instrmt_60.add_attribute("AttchPnt", "9840426.740000"); // 2
      Instrmt_60_set.insert("9840426.740000");
      Instrmt_60.add_attribute("DetchPnt", "11671287.070000"); // 2
      Instrmt_60_set.insert("11671287.070000");
      Instrmt_60.add_attribute("Issued", "IssueDate_t_1539545706"); // 2
      Instrmt_60_set.insert("IssueDate_t_1539545706");
      Instrmt_60.add_attribute("RepoCollSecTyp", "11595355"); // 2
      Instrmt_60_set.insert("11595355");
      Instrmt_60.add_attribute("RepoTrm", "698478375"); // 2
      Instrmt_60_set.insert("698478375");
      Instrmt_60.add_attribute("RepoRt", "9139303.250000"); // 2
      Instrmt_60_set.insert("9139303.250000");
      Instrmt_60.add_attribute("Fctr", "6013306.850000"); // 2
      Instrmt_60_set.insert("6013306.850000");
      Instrmt_60.add_attribute("CrdRtg", "CreditRating_t_1483006110"); // 2
      Instrmt_60_set.insert("CreditRating_t_1483006110");
      Instrmt_60.add_attribute("Rgstry", "InstrRegistry_t_1777289331"); // 2
      Instrmt_60_set.insert("InstrRegistry_t_1777289331");
      Instrmt_60.add_attribute("IssuCtry", "938863826"); // 2
      Instrmt_60_set.insert("938863826");
      Instrmt_60.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1811326615"); // 2
      Instrmt_60_set.insert("StateOrProvinceOfIssue_t_1811326615");
      Instrmt_60.add_attribute("Lcl", "LocaleOfIssue_t_556904187"); // 2
      Instrmt_60_set.insert("LocaleOfIssue_t_556904187");
      Instrmt_60.add_attribute("Redeem", "RedemptionDate_t_1108299262"); // 2
      Instrmt_60_set.insert("RedemptionDate_t_1108299262");
      Instrmt_60.add_attribute("StrkPx", "12943624.320000"); // 2
      Instrmt_60_set.insert("12943624.320000");
      Instrmt_60.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_60_set.insert("CAN");
      Instrmt_60.add_attribute("StrkMult", "744014.880000"); // 2
      Instrmt_60_set.insert("744014.880000");
      Instrmt_60.add_attribute("StrkValu", "3483548.500000"); // 2
      Instrmt_60_set.insert("3483548.500000");
      Instrmt_60.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_60_set.insert("3");
      Instrmt_60.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_60_set.insert("5");
      Instrmt_60.add_attribute("StrkPxBndryPrcsn", "5660958.940000"); // 2
      Instrmt_60_set.insert("5660958.940000");
      Instrmt_60.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("OptAt", "488067674"); // 2
      Instrmt_60_set.insert("488067674");
      Instrmt_60.add_attribute("Mult", "4682400.600000"); // 2
      Instrmt_60_set.insert("4682400.600000");
      Instrmt_60.add_attribute("MultTyp", "0"); // 2
      Instrmt_60_set.insert("0");
      Instrmt_60.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_60_set.insert("2");
      Instrmt_60.add_attribute("MinPxIncr", "19755506.490000"); // 2
      Instrmt_60_set.insert("19755506.490000");
      Instrmt_60.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1363183904"); // 2
      Instrmt_60_set.insert("MinPriceIncrementAmount_t_1363183904");
      Instrmt_60.add_attribute("UOM", "tn"); // 2
      Instrmt_60_set.insert("tn");
      Instrmt_60.add_attribute("UOMQty", "10216899.660000"); // 2
      Instrmt_60_set.insert("10216899.660000");
      Instrmt_60.add_attribute("PxUOM", "MWh"); // 2
      Instrmt_60_set.insert("MWh");
      Instrmt_60.add_attribute("PxUOMQty", "17509009.920000"); // 2
      Instrmt_60_set.insert("17509009.920000");
      Instrmt_60.add_attribute("SettlMeth", "P"); // 2
      Instrmt_60_set.insert("P");
      Instrmt_60.add_attribute("ExerStyle", "0"); // 2
      Instrmt_60_set.insert("0");
      Instrmt_60.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_60_set.insert("2");
      Instrmt_60.add_attribute("OptPayAmt", "OptPayoutAmount_t_739813400"); // 2
      Instrmt_60_set.insert("OptPayoutAmount_t_739813400");
      Instrmt_60.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_60_set.insert("PCTPAR");
      Instrmt_60.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_60_set.insert("EQTY");
      Instrmt_60.add_attribute("ListMeth", "0"); // 2
      Instrmt_60_set.insert("0");
      Instrmt_60.add_attribute("CapPx", "19057920.670000"); // 2
      Instrmt_60_set.insert("19057920.670000");
      Instrmt_60.add_attribute("FlrPx", "11552072.110000"); // 2
      Instrmt_60_set.insert("11552072.110000");
      Instrmt_60.add_attribute("PutCall", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("FlexInd", "true"); // 2
      Instrmt_60_set.insert("true");
      Instrmt_60.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_60_set.insert("false");
      Instrmt_60.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_60_set.insert("Wk");
      Instrmt_60.add_attribute("CpnRt", "16722973.670000"); // 2
      Instrmt_60_set.insert("16722973.670000");
      Instrmt_60.add_attribute("Exch", "SecurityExchange_t_1075268103"); // 2
      Instrmt_60_set.insert("SecurityExchange_t_1075268103");
      Instrmt_60.add_attribute("PosLmt", "1107942750"); // 2
      Instrmt_60_set.insert("1107942750");
      Instrmt_60.add_attribute("NTPosLmt", "2020652217"); // 2
      Instrmt_60_set.insert("2020652217");
      Instrmt_60.add_attribute("Issr", "Issuer_t_1850186869"); // 2
      Instrmt_60_set.insert("Issuer_t_1850186869");
      Instrmt_60.add_attribute("EncIssrLen", "268840226"); // 2
      Instrmt_60_set.insert("268840226");
      Instrmt_60.add_attribute("EncIssr", "EncodedIssuer_t_439264463"); // 2
      Instrmt_60_set.insert("EncodedIssuer_t_439264463");
      Instrmt_60.add_attribute("Desc", "SecurityDesc_t_1971428049"); // 2
      Instrmt_60_set.insert("SecurityDesc_t_1971428049");
      Instrmt_60.add_attribute("EncSecDescLen", "756907900"); // 2
      Instrmt_60_set.insert("756907900");
      Instrmt_60.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_907504523"); // 2
      Instrmt_60_set.insert("EncodedSecurityDesc_t_907504523");
      Instrmt_60.add_attribute("Pool", "Pool_t_552325498"); // 2
      Instrmt_60_set.insert("Pool_t_552325498");
      Instrmt_60.add_attribute("CSetMo", "1130674747"); // 2
      Instrmt_60_set.insert("1130674747");
      Instrmt_60.add_attribute("CPPgm", "2"); // 2
      Instrmt_60_set.insert("2");
      Instrmt_60.add_attribute("CPRegT", "CPRegType_t_1915509402"); // 2
      Instrmt_60_set.insert("CPRegType_t_1915509402");
      Instrmt_60.add_attribute("Dated", "DatedDate_t_1897533065"); // 2
      Instrmt_60_set.insert("DatedDate_t_1897533065");
      Instrmt_60.add_attribute("IntAcrl", "InterestAccrualDate_t_1757261491"); // 2
      Instrmt_60_set.insert("InterestAccrualDate_t_1757261491");
      all_values.push_back(Instrmt_60_set);
      all_compo_names.insert("Instrmt_60_set");

      {
        xml_element AID_63{"AID"};
        multiset<string> AID_63_set;
        AID_63.add_attribute("AltID", "SecurityAltID_t_1738019755"); // 3
        AID_63_set.insert("SecurityAltID_t_1738019755");
        AID_63.add_attribute("AltIDSrc", "F"); // 3
        AID_63_set.insert("F");
        all_values.push_back(AID_63_set);
        all_compo_names.insert("AID_63_set");

        Instrmt_60.add_element(AID_63);
      }
      {
        xml_element SecXML_63{"SecXML"};
        multiset<string> SecXML_63_set;
        SecXML_63.add_attribute("Schema", "SecurityXMLSchema_t_1798596516"); // 3
        SecXML_63_set.insert("SecurityXMLSchema_t_1798596516");
        all_values.push_back(SecXML_63_set);
        all_compo_names.insert("SecXML_63_set");

        Instrmt_60.add_element(SecXML_63);
      }
      {
        xml_element Evnt_63{"Evnt"};
        multiset<string> Evnt_63_set;
        Evnt_63.add_attribute("EventTyp", "5"); // 3
        Evnt_63_set.insert("5");
        Evnt_63.add_attribute("Dt", "EventDate_t_1115963109"); // 3
        Evnt_63_set.insert("EventDate_t_1115963109");
        Evnt_63.add_attribute("Tm", "EventTime_t_390926268"); // 3
        Evnt_63_set.insert("EventTime_t_390926268");
        Evnt_63.add_attribute("Px", "10810949.010000"); // 3
        Evnt_63_set.insert("10810949.010000");
        Evnt_63.add_attribute("Txt", "EventText_t_1332306494"); // 3
        Evnt_63_set.insert("EventText_t_1332306494");
        all_values.push_back(Evnt_63_set);
        all_compo_names.insert("Evnt_63_set");

        Instrmt_60.add_element(Evnt_63);
      }
      {
        xml_element Pty_318{"Pty"};
        multiset<string> Pty_318_set;
        Pty_318.add_attribute("ID", "InstrumentPartyID_t_466262130"); // 3
        Pty_318_set.insert("InstrumentPartyID_t_466262130");
        Pty_318.add_attribute("Src", "F"); // 3
        Pty_318_set.insert("F");
        Pty_318.add_attribute("R", "75"); // 3
        Pty_318_set.insert("75");
        all_values.push_back(Pty_318_set);
        all_compo_names.insert("Pty_318_set");

        {
          xml_element Sub_318{"Sub"};
          multiset<string> Sub_318_set;
          Sub_318.add_attribute("ID", "InstrumentPartySubID_t_205440959"); // 4
          Sub_318_set.insert("InstrumentPartySubID_t_205440959");
          Sub_318.add_attribute("Typ", "21"); // 4
          Sub_318_set.insert("21");
          all_values.push_back(Sub_318_set);
          all_compo_names.insert("Sub_318_set");

          Pty_318.add_element(Sub_318);
        }
        Instrmt_60.add_element(Pty_318);
      }
      {
        xml_element CmplxEvnt_60{"CmplxEvnt"};
        multiset<string> CmplxEvnt_60_set;
        CmplxEvnt_60.add_attribute("Typ", "6"); // 3
        CmplxEvnt_60_set.insert("6");
        CmplxEvnt_60.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1238982221"); // 3
        CmplxEvnt_60_set.insert("ComplexOptPayoutAmount_t_1238982221");
        CmplxEvnt_60.add_attribute("Px", "6794296.450000"); // 3
        CmplxEvnt_60_set.insert("6794296.450000");
        CmplxEvnt_60.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_60_set.insert("2");
        CmplxEvnt_60.add_attribute("PxBndryPrcsn", "1994413.230000"); // 3
        CmplxEvnt_60_set.insert("1994413.230000");
        CmplxEvnt_60.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_60_set.insert("1");
        CmplxEvnt_60.add_attribute("Cond", "2"); // 3
        CmplxEvnt_60_set.insert("2");
        all_values.push_back(CmplxEvnt_60_set);
        all_compo_names.insert("CmplxEvnt_60_set");

        {
          xml_element EvntDts_60{"EvntDts"};
          multiset<string> EvntDts_60_set;
          EvntDts_60.add_attribute("StartDt", "ComplexEventStartDate_t_468281549"); // 4
          EvntDts_60_set.insert("ComplexEventStartDate_t_468281549");
          EvntDts_60.add_attribute("EndDt", "ComplexEventEndDate_t_991862678"); // 4
          EvntDts_60_set.insert("ComplexEventEndDate_t_991862678");
          all_values.push_back(EvntDts_60_set);
          all_compo_names.insert("EvntDts_60_set");

          {
            xml_element EvntTms_60{"EvntTms"};
            multiset<string> EvntTms_60_set;
            EvntTms_60.add_attribute("StartTm", "1057968608"); // 5
            EvntTms_60_set.insert("1057968608");
            EvntTms_60.add_attribute("EndTm", "1225189449"); // 5
            EvntTms_60_set.insert("1225189449");
            all_values.push_back(EvntTms_60_set);
            all_compo_names.insert("EvntTms_60_set");

            EvntDts_60.add_element(EvntTms_60);
          }
          CmplxEvnt_60.add_element(EvntDts_60);
        }
        Instrmt_60.add_element(CmplxEvnt_60);
      }
      QuotReqRej_0.add_element(Instrmt_60);
    }
    {
      xml_element FinDetls_20{"FinDetls"};
      multiset<string> FinDetls_20_set;
      FinDetls_20.add_attribute("AgmtDesc", "AgreementDesc_t_1899367202"); // 2
      FinDetls_20_set.insert("AgreementDesc_t_1899367202");
      FinDetls_20.add_attribute("AgmtID", "AgreementID_t_1610294107"); // 2
      FinDetls_20_set.insert("AgreementID_t_1610294107");
      FinDetls_20.add_attribute("AgmtDt", "AgreementDate_t_208380549"); // 2
      FinDetls_20_set.insert("AgreementDate_t_208380549");
      FinDetls_20.add_attribute("AgmtCcy", "CAN"); // 2
      FinDetls_20_set.insert("CAN");
      FinDetls_20.add_attribute("TrmTyp", "3"); // 2
      FinDetls_20_set.insert("3");
      FinDetls_20.add_attribute("StartDt", "StartDate_t_97232922"); // 2
      FinDetls_20_set.insert("StartDate_t_97232922");
      FinDetls_20.add_attribute("EndDt", "EndDate_t_968855968"); // 2
      FinDetls_20_set.insert("EndDate_t_968855968");
      FinDetls_20.add_attribute("DlvryTyp", "0"); // 2
      FinDetls_20_set.insert("0");
      FinDetls_20.add_attribute("MgnRatio", "18958294.380000"); // 2
      FinDetls_20_set.insert("18958294.380000");
      all_values.push_back(FinDetls_20_set);
      all_compo_names.insert("FinDetls_20_set");

      QuotReqRej_0.add_element(FinDetls_20);
    }
    {
      xml_element Undly_85{"Undly"};
      multiset<string> Undly_85_set;
      Undly_85.add_attribute("Sym", "UnderlyingSymbol_t_1921448134"); // 2
      Undly_85_set.insert("UnderlyingSymbol_t_1921448134");
      Undly_85.add_attribute("Sfx", "CD"); // 2
      Undly_85_set.insert("CD");
      Undly_85.add_attribute("ID", "UnderlyingSecurityID_t_139272058"); // 2
      Undly_85_set.insert("UnderlyingSecurityID_t_139272058");
      Undly_85.add_attribute("Src", "I"); // 2
      Undly_85_set.insert("I");
      Undly_85.add_attribute("Prod", "11"); // 2
      Undly_85_set.insert("11");
      Undly_85.add_attribute("CFI", "UnderlyingCFICode_t_605534188"); // 2
      Undly_85_set.insert("UnderlyingCFICode_t_605534188");
      Undly_85.add_attribute("SecTyp", "PN"); // 2
      Undly_85_set.insert("PN");
      Undly_85.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2100196390"); // 2
      Undly_85_set.insert("UnderlyingSecuritySubType_t_2100196390");
      Undly_85.add_attribute("MMY", "810975147"); // 2
      Undly_85_set.insert("810975147");
      Undly_85.add_attribute("Mat", "UnderlyingMaturityDate_t_701594985"); // 2
      Undly_85_set.insert("UnderlyingMaturityDate_t_701594985");
      Undly_85.add_attribute("MatTm", "408765625"); // 2
      Undly_85_set.insert("408765625");
      Undly_85.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2049957368"); // 2
      Undly_85_set.insert("UnderlyingCouponPaymentDate_t_2049957368");
      Undly_85.add_attribute("RestrctTyp", "XR"); // 2
      Undly_85_set.insert("XR");
      Undly_85.add_attribute("Snrty", "SD"); // 2
      Undly_85_set.insert("SD");
      Undly_85.add_attribute("NotlPctOut", "1019150.430000"); // 2
      Undly_85_set.insert("1019150.430000");
      Undly_85.add_attribute("OrigNotlPctOut", "19336228.460000"); // 2
      Undly_85_set.insert("19336228.460000");
      Undly_85.add_attribute("AttchPnt", "10266271.700000"); // 2
      Undly_85_set.insert("10266271.700000");
      Undly_85.add_attribute("DetchPnt", "5701965.920000"); // 2
      Undly_85_set.insert("5701965.920000");
      Undly_85.add_attribute("Issued", "UnderlyingIssueDate_t_778001876"); // 2
      Undly_85_set.insert("UnderlyingIssueDate_t_778001876");
      Undly_85.add_attribute("RepoCollSecTyp", "2084595778"); // 2
      Undly_85_set.insert("2084595778");
      Undly_85.add_attribute("RepoTrm", "1795386042"); // 2
      Undly_85_set.insert("1795386042");
      Undly_85.add_attribute("RepoRt", "5298854.300000"); // 2
      Undly_85_set.insert("5298854.300000");
      Undly_85.add_attribute("Fctr", "15474062.370000"); // 2
      Undly_85_set.insert("15474062.370000");
      Undly_85.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2003766591"); // 2
      Undly_85_set.insert("UnderlyingCreditRating_t_2003766591");
      Undly_85.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1017340509"); // 2
      Undly_85_set.insert("UnderlyingInstrRegistry_t_1017340509");
      Undly_85.add_attribute("Ctry", "778242451"); // 2
      Undly_85_set.insert("778242451");
      Undly_85.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1962196557"); // 2
      Undly_85_set.insert("UnderlyingStateOrProvinceOfIssue_t_1962196557");
      Undly_85.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1114573431"); // 2
      Undly_85_set.insert("UnderlyingLocaleOfIssue_t_1114573431");
      Undly_85.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1747098419"); // 2
      Undly_85_set.insert("UnderlyingRedemptionDate_t_1747098419");
      Undly_85.add_attribute("StrkPx", "12740932.860000"); // 2
      Undly_85_set.insert("12740932.860000");
      Undly_85.add_attribute("StrkCcy", "EUR"); // 2
      Undly_85_set.insert("EUR");
      Undly_85.add_attribute("OptA", "1701953124"); // 2
      Undly_85_set.insert("1701953124");
      Undly_85.add_attribute("Mult", "10021912.790000"); // 2
      Undly_85_set.insert("10021912.790000");
      Undly_85.add_attribute("MultTyp", "1"); // 2
      Undly_85_set.insert("1");
      Undly_85.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_85_set.insert("3");
      Undly_85.add_attribute("UOM", "Bcf"); // 2
      Undly_85_set.insert("Bcf");
      Undly_85.add_attribute("UOMQty", "19231013.510000"); // 2
      Undly_85_set.insert("19231013.510000");
      Undly_85.add_attribute("PxUOM", "MWh"); // 2
      Undly_85_set.insert("MWh");
      Undly_85.add_attribute("PxUOMQty", "2712169.670000"); // 2
      Undly_85_set.insert("2712169.670000");
      Undly_85.add_attribute("TmUnit", "H"); // 2
      Undly_85_set.insert("H");
      Undly_85.add_attribute("ExerStyle", "0"); // 2
      Undly_85_set.insert("0");
      Undly_85.add_attribute("CpnRt", "1736906.870000"); // 2
      Undly_85_set.insert("1736906.870000");
      Undly_85.add_attribute("Exch", "UnderlyingSecurityExchange_t_1858237320"); // 2
      Undly_85_set.insert("UnderlyingSecurityExchange_t_1858237320");
      Undly_85.add_attribute("Issr", "UnderlyingIssuer_t_1468717138"); // 2
      Undly_85_set.insert("UnderlyingIssuer_t_1468717138");
      Undly_85.add_attribute("EncUndIssrLen", "275605731"); // 2
      Undly_85_set.insert("275605731");
      Undly_85.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1644376518"); // 2
      Undly_85_set.insert("EncodedUnderlyingIssuer_t_1644376518");
      Undly_85.add_attribute("Desc", "UnderlyingSecurityDesc_t_347860660"); // 2
      Undly_85_set.insert("UnderlyingSecurityDesc_t_347860660");
      Undly_85.add_attribute("EncUndSecDescLen", "845802323"); // 2
      Undly_85_set.insert("845802323");
      Undly_85.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_274894746"); // 2
      Undly_85_set.insert("EncodedUnderlyingSecurityDesc_t_274894746");
      Undly_85.add_attribute("CPPgm", "UnderlyingCPProgram_t_284972791"); // 2
      Undly_85_set.insert("UnderlyingCPProgram_t_284972791");
      Undly_85.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_493704717"); // 2
      Undly_85_set.insert("UnderlyingCPRegType_t_493704717");
      Undly_85.add_attribute("AllocPct", "8047801.770000"); // 2
      Undly_85_set.insert("8047801.770000");
      Undly_85.add_attribute("Ccy", "JPY"); // 2
      Undly_85_set.insert("JPY");
      Undly_85.add_attribute("Qty", "18221206.860000"); // 2
      Undly_85_set.insert("18221206.860000");
      Undly_85.add_attribute("SettlTyp", "2"); // 2
      Undly_85_set.insert("2");
      Undly_85.add_attribute("CashAmt", "UnderlyingCashAmount_t_164700570"); // 2
      Undly_85_set.insert("UnderlyingCashAmount_t_164700570");
      Undly_85.add_attribute("CashTyp", "FIXED"); // 2
      Undly_85_set.insert("FIXED");
      Undly_85.add_attribute("Px", "627526.030000"); // 2
      Undly_85_set.insert("627526.030000");
      Undly_85.add_attribute("DirtPx", "14387938.560000"); // 2
      Undly_85_set.insert("14387938.560000");
      Undly_85.add_attribute("EndPx", "16521296.910000"); // 2
      Undly_85_set.insert("16521296.910000");
      Undly_85.add_attribute("StartVal", "UnderlyingStartValue_t_1583815508"); // 2
      Undly_85_set.insert("UnderlyingStartValue_t_1583815508");
      Undly_85.add_attribute("CurVal", "UnderlyingCurrentValue_t_993263332"); // 2
      Undly_85_set.insert("UnderlyingCurrentValue_t_993263332");
      Undly_85.add_attribute("EndVal", "UnderlyingEndValue_t_506837323"); // 2
      Undly_85_set.insert("UnderlyingEndValue_t_506837323");
      Undly_85.add_attribute("AdjQty", "18124541.530000"); // 2
      Undly_85_set.insert("18124541.530000");
      Undly_85.add_attribute("FxRate", "1604154.920000"); // 2
      Undly_85_set.insert("1604154.920000");
      Undly_85.add_attribute("FxRateCalc", "M"); // 2
      Undly_85_set.insert("M");
      Undly_85.add_attribute("CapValu", "UnderlyingCapValue_t_1588071856"); // 2
      Undly_85_set.insert("UnderlyingCapValue_t_1588071856");
      Undly_85.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1427764043"); // 2
      Undly_85_set.insert("UnderlyingSettlMethod_t_1427764043");
      Undly_85.add_attribute("PutCall", "238296109"); // 2
      Undly_85_set.insert("238296109");
      all_values.push_back(Undly_85_set);
      all_compo_names.insert("Undly_85_set");

      {
        xml_element UndAID_85{"UndAID"};
        multiset<string> UndAID_85_set;
        UndAID_85.add_attribute("AltID", "UnderlyingSecurityAltID_t_2065284545"); // 3
        UndAID_85_set.insert("UnderlyingSecurityAltID_t_2065284545");
        UndAID_85.add_attribute("AltIDSrc", "B"); // 3
        UndAID_85_set.insert("B");
        all_values.push_back(UndAID_85_set);
        all_compo_names.insert("UndAID_85_set");

        Undly_85.add_element(UndAID_85);
      }
      {
        xml_element Stip_129{"Stip"};
        multiset<string> Stip_129_set;
        Stip_129.add_attribute("Typ", "TRADERCREDIT"); // 3
        Stip_129_set.insert("TRADERCREDIT");
        Stip_129.add_attribute("Val", "UnderlyingStipValue_t_1776038217"); // 3
        Stip_129_set.insert("UnderlyingStipValue_t_1776038217");
        all_values.push_back(Stip_129_set);
        all_compo_names.insert("Stip_129_set");

        Undly_85.add_element(Stip_129);
      }
      {
        xml_element Pty_319{"Pty"};
        multiset<string> Pty_319_set;
        Pty_319.add_attribute("ID", "UnderlyingInstrumentPartyID_t_277628061"); // 3
        Pty_319_set.insert("UnderlyingInstrumentPartyID_t_277628061");
        Pty_319.add_attribute("Src", "H"); // 3
        Pty_319_set.insert("H");
        Pty_319.add_attribute("R", "46"); // 3
        Pty_319_set.insert("46");
        all_values.push_back(Pty_319_set);
        all_compo_names.insert("Pty_319_set");

        {
          xml_element Sub_319{"Sub"};
          multiset<string> Sub_319_set;
          Sub_319.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_625488721"); // 4
          Sub_319_set.insert("UnderlyingInstrumentPartySubID_t_625488721");
          Sub_319.add_attribute("Typ", "5"); // 4
          Sub_319_set.insert("5");
          all_values.push_back(Sub_319_set);
          all_compo_names.insert("Sub_319_set");

          Pty_319.add_element(Sub_319);
        }
        Undly_85.add_element(Pty_319);
      }
      QuotReqRej_0.add_element(Undly_85);
    }
    {
      xml_element OrdQty_20{"OrdQty"};
      multiset<string> OrdQty_20_set;
      OrdQty_20.add_attribute("Qty", "15478258.340000"); // 2
      OrdQty_20_set.insert("15478258.340000");
      OrdQty_20.add_attribute("Cash", "9104615.120000"); // 2
      OrdQty_20_set.insert("9104615.120000");
      OrdQty_20.add_attribute("Pct", "20270995.690000"); // 2
      OrdQty_20_set.insert("20270995.690000");
      OrdQty_20.add_attribute("RndDir", "0"); // 2
      OrdQty_20_set.insert("0");
      OrdQty_20.add_attribute("RndMod", "5953568.930000"); // 2
      OrdQty_20_set.insert("5953568.930000");
      all_values.push_back(OrdQty_20_set);
      all_compo_names.insert("OrdQty_20_set");

      QuotReqRej_0.add_element(OrdQty_20);
    }
    {
      xml_element Stip_130{"Stip"};
      multiset<string> Stip_130_set;
      Stip_130.add_attribute("Typ", "AVSIZE"); // 2
      Stip_130_set.insert("AVSIZE");
      Stip_130.add_attribute("Val", "StipulationValue_t_2027243049"); // 2
      Stip_130_set.insert("StipulationValue_t_2027243049");
      all_values.push_back(Stip_130_set);
      all_compo_names.insert("Stip_130_set");

      QuotReqRej_0.add_element(Stip_130);
    }
    {
      xml_element Leg_70{"Leg"};
      multiset<string> Leg_70_set;
      Leg_70.add_attribute("Qty", "10584947.240000"); // 2
      Leg_70_set.insert("10584947.240000");
      Leg_70.add_attribute("OrdQty", "3943041.510000"); // 2
      Leg_70_set.insert("3943041.510000");
      Leg_70.add_attribute("SwapTyp", "5"); // 2
      Leg_70_set.insert("5");
      Leg_70.add_attribute("SettlTyp", "3"); // 2
      Leg_70_set.insert("3");
      Leg_70.add_attribute("SettlDt", "LegSettlDate_t_1833098007"); // 2
      Leg_70_set.insert("LegSettlDate_t_1833098007");
      Leg_70.add_attribute("RefID", "LegRefID_t_173615915"); // 2
      Leg_70_set.insert("LegRefID_t_173615915");
      all_values.push_back(Leg_70_set);
      all_compo_names.insert("Leg_70_set");

      {
        xml_element Leg_71{"Leg"};
        multiset<string> Leg_71_set;
        Leg_71.add_attribute("Sym", "LegSymbol_t_557579188"); // 3
        Leg_71_set.insert("LegSymbol_t_557579188");
        Leg_71.add_attribute("Sfx", "WI"); // 3
        Leg_71_set.insert("WI");
        Leg_71.add_attribute("ID", "LegSecurityID_t_680453238"); // 3
        Leg_71_set.insert("LegSecurityID_t_680453238");
        Leg_71.add_attribute("Src", "4"); // 3
        Leg_71_set.insert("4");
        Leg_71.add_attribute("Prod", "11"); // 3
        Leg_71_set.insert("11");
        Leg_71.add_attribute("CFI", "LegCFICode_t_647532380"); // 3
        Leg_71_set.insert("LegCFICode_t_647532380");
        Leg_71.add_attribute("SecTyp", "ONITE"); // 3
        Leg_71_set.insert("ONITE");
        Leg_71.add_attribute("SecSubTyp", "LegSecuritySubType_t_119573579"); // 3
        Leg_71_set.insert("LegSecuritySubType_t_119573579");
        Leg_71.add_attribute("MMY", "885828490"); // 3
        Leg_71_set.insert("885828490");
        Leg_71.add_attribute("Mat", "LegMaturityDate_t_1728422447"); // 3
        Leg_71_set.insert("LegMaturityDate_t_1728422447");
        Leg_71.add_attribute("MatTm", "1075968149"); // 3
        Leg_71_set.insert("1075968149");
        Leg_71.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1297815287"); // 3
        Leg_71_set.insert("LegCouponPaymentDate_t_1297815287");
        Leg_71.add_attribute("Issued", "LegIssueDate_t_1356977016"); // 3
        Leg_71_set.insert("LegIssueDate_t_1356977016");
        Leg_71.add_attribute("RepoCollSecTyp", "1353596210"); // 3
        Leg_71_set.insert("1353596210");
        Leg_71.add_attribute("RepoTrm", "1985407815"); // 3
        Leg_71_set.insert("1985407815");
        Leg_71.add_attribute("RepoRt", "4824244.560000"); // 3
        Leg_71_set.insert("4824244.560000");
        Leg_71.add_attribute("Fctr", "19790849.320000"); // 3
        Leg_71_set.insert("19790849.320000");
        Leg_71.add_attribute("CrdRtg", "LegCreditRating_t_1371319018"); // 3
        Leg_71_set.insert("LegCreditRating_t_1371319018");
        Leg_71.add_attribute("Rgstry", "LegInstrRegistry_t_2030250290"); // 3
        Leg_71_set.insert("LegInstrRegistry_t_2030250290");
        Leg_71.add_attribute("Ctry", "742062796"); // 3
        Leg_71_set.insert("742062796");
        Leg_71.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1250934939"); // 3
        Leg_71_set.insert("LegStateOrProvinceOfIssue_t_1250934939");
        Leg_71.add_attribute("Lcl", "LegLocaleOfIssue_t_87889005"); // 3
        Leg_71_set.insert("LegLocaleOfIssue_t_87889005");
        Leg_71.add_attribute("Redeem", "LegRedemptionDate_t_1337419689"); // 3
        Leg_71_set.insert("LegRedemptionDate_t_1337419689");
        Leg_71.add_attribute("Strk", "14805385.210000"); // 3
        Leg_71_set.insert("14805385.210000");
        Leg_71.add_attribute("StrkCcy", "JPY"); // 3
        Leg_71_set.insert("JPY");
        Leg_71.add_attribute("OptA", "1874842672"); // 3
        Leg_71_set.insert("1874842672");
        Leg_71.add_attribute("Cmult", "6366182.780000"); // 3
        Leg_71_set.insert("6366182.780000");
        Leg_71.add_attribute("MultTyp", "1"); // 3
        Leg_71_set.insert("1");
        Leg_71.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_71_set.insert("2");
        Leg_71.add_attribute("UOM", "Bbl"); // 3
        Leg_71_set.insert("Bbl");
        Leg_71.add_attribute("UOMQty", "19272572.810000"); // 3
        Leg_71_set.insert("19272572.810000");
        Leg_71.add_attribute("PxUOM", "t"); // 3
        Leg_71_set.insert("t");
        Leg_71.add_attribute("PxUOMQty", "14906874.310000"); // 3
        Leg_71_set.insert("14906874.310000");
        Leg_71.add_attribute("TmUnit", "Mo"); // 3
        Leg_71_set.insert("Mo");
        Leg_71.add_attribute("ExerStyle", "2"); // 3
        Leg_71_set.insert("2");
        Leg_71.add_attribute("CpnRt", "21382198.110000"); // 3
        Leg_71_set.insert("21382198.110000");
        Leg_71.add_attribute("Exch", "LegSecurityExchange_t_1812944876"); // 3
        Leg_71_set.insert("LegSecurityExchange_t_1812944876");
        Leg_71.add_attribute("Issr", "LegIssuer_t_1050717838"); // 3
        Leg_71_set.insert("LegIssuer_t_1050717838");
        Leg_71.add_attribute("EncLegIssrLen", "876564653"); // 3
        Leg_71_set.insert("876564653");
        Leg_71.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1393883675"); // 3
        Leg_71_set.insert("EncodedLegIssuer_t_1393883675");
        Leg_71.add_attribute("Desc", "LegSecurityDesc_t_2126685988"); // 3
        Leg_71_set.insert("LegSecurityDesc_t_2126685988");
        Leg_71.add_attribute("EncLegSecDescLen", "26896292"); // 3
        Leg_71_set.insert("26896292");
        Leg_71.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_603377043"); // 3
        Leg_71_set.insert("EncodedLegSecurityDesc_t_603377043");
        Leg_71.add_attribute("RatioQty", "13327985.500000"); // 3
        Leg_71_set.insert("13327985.500000");
        Leg_71.add_attribute("Side", "C"); // 3
        Leg_71_set.insert("C");
        Leg_71.add_attribute("Ccy", "USD"); // 3
        Leg_71_set.insert("USD");
        Leg_71.add_attribute("Pool", "LegPool_t_1236139478"); // 3
        Leg_71_set.insert("LegPool_t_1236139478");
        Leg_71.add_attribute("Dated", "LegDatedDate_t_968568141"); // 3
        Leg_71_set.insert("LegDatedDate_t_968568141");
        Leg_71.add_attribute("CSetMo", "1906462631"); // 3
        Leg_71_set.insert("1906462631");
        Leg_71.add_attribute("IntAcrl", "LegInterestAccrualDate_t_339590769"); // 3
        Leg_71_set.insert("LegInterestAccrualDate_t_339590769");
        Leg_71.add_attribute("PutCall", "1056457146"); // 3
        Leg_71_set.insert("1056457146");
        Leg_71.add_attribute("LegOptionRatio", "10963986.720000"); // 3
        Leg_71_set.insert("10963986.720000");
        Leg_71.add_attribute("Px", "18201292.900000"); // 3
        Leg_71_set.insert("18201292.900000");
        all_values.push_back(Leg_71_set);
        all_compo_names.insert("Leg_71_set");

        {
          xml_element LegAID_69{"LegAID"};
          multiset<string> LegAID_69_set;
          LegAID_69.add_attribute("SecAltID", "LegSecurityAltID_t_1024105553"); // 4
          LegAID_69_set.insert("LegSecurityAltID_t_1024105553");
          LegAID_69.add_attribute("SecAltIDSrc", "J"); // 4
          LegAID_69_set.insert("J");
          all_values.push_back(LegAID_69_set);
          all_compo_names.insert("LegAID_69_set");

          Leg_71.add_element(LegAID_69);
        }
        Leg_70.add_element(Leg_71);
      }
      {
        xml_element Stip_131{"Stip"};
        multiset<string> Stip_131_set;
        Stip_131.add_attribute("StipTyp", "PRIMARY"); // 3
        Stip_131_set.insert("PRIMARY");
        Stip_131.add_attribute("StipVal", "LegStipulationValue_t_1660723831"); // 3
        Stip_131_set.insert("LegStipulationValue_t_1660723831");
        all_values.push_back(Stip_131_set);
        all_compo_names.insert("Stip_131_set");

        Leg_70.add_element(Stip_131);
      }
      {
        xml_element Pty_320{"Pty"};
        multiset<string> Pty_320_set;
        Pty_320.add_attribute("ID", "NestedPartyID_t_567023884"); // 3
        Pty_320_set.insert("NestedPartyID_t_567023884");
        Pty_320.add_attribute("Src", "6"); // 3
        Pty_320_set.insert("6");
        Pty_320.add_attribute("R", "9"); // 3
        Pty_320_set.insert("9");
        all_values.push_back(Pty_320_set);
        all_compo_names.insert("Pty_320_set");

        {
          xml_element Sub_320{"Sub"};
          multiset<string> Sub_320_set;
          Sub_320.add_attribute("ID", "NestedPartySubID_t_346797517"); // 4
          Sub_320_set.insert("NestedPartySubID_t_346797517");
          Sub_320.add_attribute("Typ", "30"); // 4
          Sub_320_set.insert("30");
          all_values.push_back(Sub_320_set);
          all_compo_names.insert("Sub_320_set");

          Pty_320.add_element(Sub_320);
        }
        Leg_70.add_element(Pty_320);
      }
      {
        xml_element BnchmkCurve_3{"BnchmkCurve"};
        multiset<string> BnchmkCurve_3_set;
        BnchmkCurve_3.add_attribute("Ccy", "GBP"); // 3
        BnchmkCurve_3_set.insert("GBP");
        BnchmkCurve_3.add_attribute("Name", "Euribor"); // 3
        BnchmkCurve_3_set.insert("Euribor");
        BnchmkCurve_3.add_attribute("Point", "LegBenchmarkCurvePoint_t_1804897970"); // 3
        BnchmkCurve_3_set.insert("LegBenchmarkCurvePoint_t_1804897970");
        BnchmkCurve_3.add_attribute("Px", "145820.720000"); // 3
        BnchmkCurve_3_set.insert("145820.720000");
        BnchmkCurve_3.add_attribute("PxTyp", "886691224"); // 3
        BnchmkCurve_3_set.insert("886691224");
        all_values.push_back(BnchmkCurve_3_set);
        all_compo_names.insert("BnchmkCurve_3_set");

        Leg_70.add_element(BnchmkCurve_3);
      }
      QuotReqRej_0.add_element(Leg_70);
    }
    {
      xml_element QuotQual_2{"QuotQual"};
      multiset<string> QuotQual_2_set;
      QuotQual_2.add_attribute("Qual", "T"); // 2
      QuotQual_2_set.insert("T");
      all_values.push_back(QuotQual_2_set);
      all_compo_names.insert("QuotQual_2_set");

      QuotReqRej_0.add_element(QuotQual_2);
    }
    {
      xml_element SprdBnchmkCurve_21{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_21_set;
      SprdBnchmkCurve_21.add_attribute("Spread", "14084657.470000"); // 2
      SprdBnchmkCurve_21_set.insert("14084657.470000");
      SprdBnchmkCurve_21.add_attribute("Ccy", "GBP"); // 2
      SprdBnchmkCurve_21_set.insert("GBP");
      SprdBnchmkCurve_21.add_attribute("Name", "SWAP"); // 2
      SprdBnchmkCurve_21_set.insert("SWAP");
      SprdBnchmkCurve_21.add_attribute("Point", "BenchmarkCurvePoint_t_51208467"); // 2
      SprdBnchmkCurve_21_set.insert("BenchmarkCurvePoint_t_51208467");
      SprdBnchmkCurve_21.add_attribute("Px", "4256957.280000"); // 2
      SprdBnchmkCurve_21_set.insert("4256957.280000");
      SprdBnchmkCurve_21.add_attribute("PxTyp", "5"); // 2
      SprdBnchmkCurve_21_set.insert("5");
      SprdBnchmkCurve_21.add_attribute("SecID", "BenchmarkSecurityID_t_1215608301"); // 2
      SprdBnchmkCurve_21_set.insert("BenchmarkSecurityID_t_1215608301");
      SprdBnchmkCurve_21.add_attribute("SecIDSrc", "K"); // 2
      SprdBnchmkCurve_21_set.insert("K");
      all_values.push_back(SprdBnchmkCurve_21_set);
      all_compo_names.insert("SprdBnchmkCurve_21_set");

      QuotReqRej_0.add_element(SprdBnchmkCurve_21);
    }
    {
      xml_element Yield_16{"Yield"};
      multiset<string> Yield_16_set;
      Yield_16.add_attribute("Typ", "LASTYEAR"); // 2
      Yield_16_set.insert("LASTYEAR");
      Yield_16.add_attribute("Yld", "9745872.840000"); // 2
      Yield_16_set.insert("9745872.840000");
      Yield_16.add_attribute("CalcDt", "YieldCalcDate_t_2001425975"); // 2
      Yield_16_set.insert("YieldCalcDate_t_2001425975");
      Yield_16.add_attribute("RedDt", "YieldRedemptionDate_t_827702282"); // 2
      Yield_16_set.insert("YieldRedemptionDate_t_827702282");
      Yield_16.add_attribute("RedPx", "20709859.570000"); // 2
      Yield_16_set.insert("20709859.570000");
      Yield_16.add_attribute("RedPxTyp", "16"); // 2
      Yield_16_set.insert("16");
      all_values.push_back(Yield_16_set);
      all_compo_names.insert("Yield_16_set");

      QuotReqRej_0.add_element(Yield_16);
    }
    {
      xml_element Pty_321{"Pty"};
      multiset<string> Pty_321_set;
      Pty_321.add_attribute("ID", "PartyID_t_1851807835"); // 2
      Pty_321_set.insert("PartyID_t_1851807835");
      Pty_321.add_attribute("Src", "G"); // 2
      Pty_321_set.insert("G");
      Pty_321.add_attribute("R", "60"); // 2
      Pty_321_set.insert("60");
      all_values.push_back(Pty_321_set);
      all_compo_names.insert("Pty_321_set");

      {
        xml_element Sub_321{"Sub"};
        multiset<string> Sub_321_set;
        Sub_321.add_attribute("ID", "PartySubID_t_1365048018"); // 3
        Sub_321_set.insert("PartySubID_t_1365048018");
        Sub_321.add_attribute("Typ", "19"); // 3
        Sub_321_set.insert("19");
        all_values.push_back(Sub_321_set);
        all_compo_names.insert("Sub_321_set");

        Pty_321.add_element(Sub_321);
      }
      QuotReqRej_0.add_element(Pty_321);
    }
    elt.add_element(QuotReqRej_0);
  } // end QuotReqRej
  { // QuotReqRej
    xml_element QuotReqRej_1{"QuotReqRej"};
    multiset<string> QuotReqRej_1_set;
    QuotReqRej_1.add_attribute("PrevClsPx", "20345379.840000"); // 1
    QuotReqRej_1_set.insert("20345379.840000");
    QuotReqRej_1.add_attribute("ReqTyp", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("Typ", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("SesID", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("SesSub", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("OrignDt", "TradeOriginationDate_t_383790345"); // 1
    QuotReqRej_1_set.insert("TradeOriginationDate_t_383790345");
    QuotReqRej_1.add_attribute("Side", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("QtyTyp", "2"); // 1
    QuotReqRej_1_set.insert("2");
    QuotReqRej_1.add_attribute("SettlTyp", "5"); // 1
    QuotReqRej_1_set.insert("5");
    QuotReqRej_1.add_attribute("SettlDt", "SettlDate_t_1662031721"); // 1
    QuotReqRej_1_set.insert("SettlDate_t_1662031721");
    QuotReqRej_1.add_attribute("SettlDt2", "SettlDate2_t_1546593851"); // 1
    QuotReqRej_1_set.insert("SettlDate2_t_1546593851");
    QuotReqRej_1.add_attribute("Qty2", "18068381.640000"); // 1
    QuotReqRej_1_set.insert("18068381.640000");
    QuotReqRej_1.add_attribute("Ccy", "GBP"); // 1
    QuotReqRej_1_set.insert("GBP");
    QuotReqRej_1.add_attribute("Acct", "Account_t_1671197306"); // 1
    QuotReqRej_1_set.insert("Account_t_1671197306");
    QuotReqRej_1.add_attribute("AcctIDSrc", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("AcctTyp", "3"); // 1
    QuotReqRej_1_set.insert("3");
    QuotReqRej_1.add_attribute("QuotPxTyp", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("OrdTyp", "P"); // 1
    QuotReqRej_1_set.insert("P");
    QuotReqRej_1.add_attribute("ExpireTm", "ExpireTime_t_2047516406"); // 1
    QuotReqRej_1_set.insert("ExpireTime_t_2047516406");
    QuotReqRej_1.add_attribute("TxnTm", "TransactTime_t_245119436"); // 1
    QuotReqRej_1_set.insert("TransactTime_t_245119436");
    QuotReqRej_1.add_attribute("PxTyp", "16"); // 1
    QuotReqRej_1_set.insert("16");
    QuotReqRej_1.add_attribute("Px", "19014587.330000"); // 1
    QuotReqRej_1_set.insert("19014587.330000");
    QuotReqRej_1.add_attribute("Px2", "10728217.180000"); // 1
    QuotReqRej_1_set.insert("10728217.180000");
    all_values.push_back(QuotReqRej_1_set);
    all_compo_names.insert("QuotReqRej_1_set");

    {
      xml_element Instrmt_61{"Instrmt"};
      multiset<string> Instrmt_61_set;
      Instrmt_61.add_attribute("Sym", "Symbol_t_397864351"); // 2
      Instrmt_61_set.insert("Symbol_t_397864351");
      Instrmt_61.add_attribute("Sfx", "WI"); // 2
      Instrmt_61_set.insert("WI");
      Instrmt_61.add_attribute("ID", "SecurityID_t_777145905"); // 2
      Instrmt_61_set.insert("SecurityID_t_777145905");
      Instrmt_61.add_attribute("Src", "8"); // 2
      Instrmt_61_set.insert("8");
      Instrmt_61.add_attribute("Prod", "12"); // 2
      Instrmt_61_set.insert("12");
      Instrmt_61.add_attribute("ProdCmplx", "ProductComplex_t_2142193923"); // 2
      Instrmt_61_set.insert("ProductComplex_t_2142193923");
      Instrmt_61.add_attribute("SecGrp", "SecurityGroup_t_1354068082"); // 2
      Instrmt_61_set.insert("SecurityGroup_t_1354068082");
      Instrmt_61.add_attribute("CFI", "CFICode_t_241693676"); // 2
      Instrmt_61_set.insert("CFICode_t_241693676");
      Instrmt_61.add_attribute("SecTyp", "TBILL"); // 2
      Instrmt_61_set.insert("TBILL");
      Instrmt_61.add_attribute("SubTyp", "SecuritySubType_t_1388737583"); // 2
      Instrmt_61_set.insert("SecuritySubType_t_1388737583");
      Instrmt_61.add_attribute("MMY", "1181060787"); // 2
      Instrmt_61_set.insert("1181060787");
      Instrmt_61.add_attribute("MatDt", "MaturityDate_t_890949574"); // 2
      Instrmt_61_set.insert("MaturityDate_t_890949574");
      Instrmt_61.add_attribute("MatTm", "1772527928"); // 2
      Instrmt_61_set.insert("1772527928");
      Instrmt_61.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1956401283"); // 2
      Instrmt_61_set.insert("SettleOnOpenFlag_t_1956401283");
      Instrmt_61.add_attribute("AsgnMeth", "1903564449"); // 2
      Instrmt_61_set.insert("1903564449");
      Instrmt_61.add_attribute("Status", "2"); // 2
      Instrmt_61_set.insert("2");
      Instrmt_61.add_attribute("CpnPmt", "CouponPaymentDate_t_1470949356"); // 2
      Instrmt_61_set.insert("CouponPaymentDate_t_1470949356");
      Instrmt_61.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_61_set.insert("MR");
      Instrmt_61.add_attribute("Snrty", "SB"); // 2
      Instrmt_61_set.insert("SB");
      Instrmt_61.add_attribute("NotlPctOut", "18513909.940000"); // 2
      Instrmt_61_set.insert("18513909.940000");
      Instrmt_61.add_attribute("OrigNotlPctOut", "12626601.250000"); // 2
      Instrmt_61_set.insert("12626601.250000");
      Instrmt_61.add_attribute("AttchPnt", "13539685.200000"); // 2
      Instrmt_61_set.insert("13539685.200000");
      Instrmt_61.add_attribute("DetchPnt", "1355574.500000"); // 2
      Instrmt_61_set.insert("1355574.500000");
      Instrmt_61.add_attribute("Issued", "IssueDate_t_1648341325"); // 2
      Instrmt_61_set.insert("IssueDate_t_1648341325");
      Instrmt_61.add_attribute("RepoCollSecTyp", "1827842820"); // 2
      Instrmt_61_set.insert("1827842820");
      Instrmt_61.add_attribute("RepoTrm", "1782815856"); // 2
      Instrmt_61_set.insert("1782815856");
      Instrmt_61.add_attribute("RepoRt", "15483740.830000"); // 2
      Instrmt_61_set.insert("15483740.830000");
      Instrmt_61.add_attribute("Fctr", "20729622.560000"); // 2
      Instrmt_61_set.insert("20729622.560000");
      Instrmt_61.add_attribute("CrdRtg", "CreditRating_t_109694251"); // 2
      Instrmt_61_set.insert("CreditRating_t_109694251");
      Instrmt_61.add_attribute("Rgstry", "InstrRegistry_t_1302349168"); // 2
      Instrmt_61_set.insert("InstrRegistry_t_1302349168");
      Instrmt_61.add_attribute("IssuCtry", "998300326"); // 2
      Instrmt_61_set.insert("998300326");
      Instrmt_61.add_attribute("StPrv", "StateOrProvinceOfIssue_t_507558602"); // 2
      Instrmt_61_set.insert("StateOrProvinceOfIssue_t_507558602");
      Instrmt_61.add_attribute("Lcl", "LocaleOfIssue_t_582912224"); // 2
      Instrmt_61_set.insert("LocaleOfIssue_t_582912224");
      Instrmt_61.add_attribute("Redeem", "RedemptionDate_t_1775446231"); // 2
      Instrmt_61_set.insert("RedemptionDate_t_1775446231");
      Instrmt_61.add_attribute("StrkPx", "262710.530000"); // 2
      Instrmt_61_set.insert("262710.530000");
      Instrmt_61.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_61_set.insert("GBP");
      Instrmt_61.add_attribute("StrkMult", "13803391.360000"); // 2
      Instrmt_61_set.insert("13803391.360000");
      Instrmt_61.add_attribute("StrkValu", "11792452.410000"); // 2
      Instrmt_61_set.insert("11792452.410000");
      Instrmt_61.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_61_set.insert("4");
      Instrmt_61.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_61_set.insert("2");
      Instrmt_61.add_attribute("StrkPxBndryPrcsn", "2128223.800000"); // 2
      Instrmt_61_set.insert("2128223.800000");
      Instrmt_61.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_61_set.insert("2");
      Instrmt_61.add_attribute("OptAt", "246637352"); // 2
      Instrmt_61_set.insert("246637352");
      Instrmt_61.add_attribute("Mult", "217400.150000"); // 2
      Instrmt_61_set.insert("217400.150000");
      Instrmt_61.add_attribute("MultTyp", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_61_set.insert("4");
      Instrmt_61.add_attribute("MinPxIncr", "14926893.720000"); // 2
      Instrmt_61_set.insert("14926893.720000");
      Instrmt_61.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1108126908"); // 2
      Instrmt_61_set.insert("MinPriceIncrementAmount_t_1108126908");
      Instrmt_61.add_attribute("UOM", "Alw"); // 2
      Instrmt_61_set.insert("Alw");
      Instrmt_61.add_attribute("UOMQty", "11965967.180000"); // 2
      Instrmt_61_set.insert("11965967.180000");
      Instrmt_61.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_61_set.insert("MMbbl");
      Instrmt_61.add_attribute("PxUOMQty", "13067937.830000"); // 2
      Instrmt_61_set.insert("13067937.830000");
      Instrmt_61.add_attribute("SettlMeth", "C"); // 2
      Instrmt_61_set.insert("C");
      Instrmt_61.add_attribute("ExerStyle", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("OptPayAmt", "OptPayoutAmount_t_967486377"); // 2
      Instrmt_61_set.insert("OptPayoutAmount_t_967486377");
      Instrmt_61.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_61_set.insert("INX");
      Instrmt_61.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_61_set.insert("CDSD");
      Instrmt_61.add_attribute("ListMeth", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("CapPx", "4274006.650000"); // 2
      Instrmt_61_set.insert("4274006.650000");
      Instrmt_61.add_attribute("FlrPx", "19109318.900000"); // 2
      Instrmt_61_set.insert("19109318.900000");
      Instrmt_61.add_attribute("PutCall", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("FlexInd", "false"); // 2
      Instrmt_61_set.insert("false");
      Instrmt_61.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_61_set.insert("true");
      Instrmt_61.add_attribute("TmUnit", "H"); // 2
      Instrmt_61_set.insert("H");
      Instrmt_61.add_attribute("CpnRt", "19478644.540000"); // 2
      Instrmt_61_set.insert("19478644.540000");
      Instrmt_61.add_attribute("Exch", "SecurityExchange_t_1161567332"); // 2
      Instrmt_61_set.insert("SecurityExchange_t_1161567332");
      Instrmt_61.add_attribute("PosLmt", "843865772"); // 2
      Instrmt_61_set.insert("843865772");
      Instrmt_61.add_attribute("NTPosLmt", "979626047"); // 2
      Instrmt_61_set.insert("979626047");
      Instrmt_61.add_attribute("Issr", "Issuer_t_319989212"); // 2
      Instrmt_61_set.insert("Issuer_t_319989212");
      Instrmt_61.add_attribute("EncIssrLen", "1465458843"); // 2
      Instrmt_61_set.insert("1465458843");
      Instrmt_61.add_attribute("EncIssr", "EncodedIssuer_t_1192448427"); // 2
      Instrmt_61_set.insert("EncodedIssuer_t_1192448427");
      Instrmt_61.add_attribute("Desc", "SecurityDesc_t_369360665"); // 2
      Instrmt_61_set.insert("SecurityDesc_t_369360665");
      Instrmt_61.add_attribute("EncSecDescLen", "1712096195"); // 2
      Instrmt_61_set.insert("1712096195");
      Instrmt_61.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1214188442"); // 2
      Instrmt_61_set.insert("EncodedSecurityDesc_t_1214188442");
      Instrmt_61.add_attribute("Pool", "Pool_t_174812920"); // 2
      Instrmt_61_set.insert("Pool_t_174812920");
      Instrmt_61.add_attribute("CSetMo", "1982150245"); // 2
      Instrmt_61_set.insert("1982150245");
      Instrmt_61.add_attribute("CPPgm", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("CPRegT", "CPRegType_t_1282939828"); // 2
      Instrmt_61_set.insert("CPRegType_t_1282939828");
      Instrmt_61.add_attribute("Dated", "DatedDate_t_1934975508"); // 2
      Instrmt_61_set.insert("DatedDate_t_1934975508");
      Instrmt_61.add_attribute("IntAcrl", "InterestAccrualDate_t_1755990884"); // 2
      Instrmt_61_set.insert("InterestAccrualDate_t_1755990884");
      all_values.push_back(Instrmt_61_set);
      all_compo_names.insert("Instrmt_61_set");

      {
        xml_element AID_64{"AID"};
        multiset<string> AID_64_set;
        AID_64.add_attribute("AltID", "SecurityAltID_t_1506243213"); // 3
        AID_64_set.insert("SecurityAltID_t_1506243213");
        AID_64.add_attribute("AltIDSrc", "C"); // 3
        AID_64_set.insert("C");
        all_values.push_back(AID_64_set);
        all_compo_names.insert("AID_64_set");

        Instrmt_61.add_element(AID_64);
      }
      {
        xml_element SecXML_64{"SecXML"};
        multiset<string> SecXML_64_set;
        SecXML_64.add_attribute("Schema", "SecurityXMLSchema_t_940661405"); // 3
        SecXML_64_set.insert("SecurityXMLSchema_t_940661405");
        all_values.push_back(SecXML_64_set);
        all_compo_names.insert("SecXML_64_set");

        Instrmt_61.add_element(SecXML_64);
      }
      {
        xml_element Evnt_64{"Evnt"};
        multiset<string> Evnt_64_set;
        Evnt_64.add_attribute("EventTyp", "15"); // 3
        Evnt_64_set.insert("15");
        Evnt_64.add_attribute("Dt", "EventDate_t_2081438598"); // 3
        Evnt_64_set.insert("EventDate_t_2081438598");
        Evnt_64.add_attribute("Tm", "EventTime_t_1908147782"); // 3
        Evnt_64_set.insert("EventTime_t_1908147782");
        Evnt_64.add_attribute("Px", "3554557.720000"); // 3
        Evnt_64_set.insert("3554557.720000");
        Evnt_64.add_attribute("Txt", "EventText_t_846586514"); // 3
        Evnt_64_set.insert("EventText_t_846586514");
        all_values.push_back(Evnt_64_set);
        all_compo_names.insert("Evnt_64_set");

        Instrmt_61.add_element(Evnt_64);
      }
      {
        xml_element Pty_322{"Pty"};
        multiset<string> Pty_322_set;
        Pty_322.add_attribute("ID", "InstrumentPartyID_t_837844762"); // 3
        Pty_322_set.insert("InstrumentPartyID_t_837844762");
        Pty_322.add_attribute("Src", "7"); // 3
        Pty_322_set.insert("7");
        Pty_322.add_attribute("R", "48"); // 3
        Pty_322_set.insert("48");
        all_values.push_back(Pty_322_set);
        all_compo_names.insert("Pty_322_set");

        {
          xml_element Sub_322{"Sub"};
          multiset<string> Sub_322_set;
          Sub_322.add_attribute("ID", "InstrumentPartySubID_t_275100344"); // 4
          Sub_322_set.insert("InstrumentPartySubID_t_275100344");
          Sub_322.add_attribute("Typ", "23"); // 4
          Sub_322_set.insert("23");
          all_values.push_back(Sub_322_set);
          all_compo_names.insert("Sub_322_set");

          Pty_322.add_element(Sub_322);
        }
        Instrmt_61.add_element(Pty_322);
      }
      {
        xml_element CmplxEvnt_61{"CmplxEvnt"};
        multiset<string> CmplxEvnt_61_set;
        CmplxEvnt_61.add_attribute("Typ", "4"); // 3
        CmplxEvnt_61_set.insert("4");
        CmplxEvnt_61.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1886110628"); // 3
        CmplxEvnt_61_set.insert("ComplexOptPayoutAmount_t_1886110628");
        CmplxEvnt_61.add_attribute("Px", "15935501.330000"); // 3
        CmplxEvnt_61_set.insert("15935501.330000");
        CmplxEvnt_61.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_61_set.insert("1");
        CmplxEvnt_61.add_attribute("PxBndryPrcsn", "5824927.520000"); // 3
        CmplxEvnt_61_set.insert("5824927.520000");
        CmplxEvnt_61.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_61_set.insert("3");
        CmplxEvnt_61.add_attribute("Cond", "2"); // 3
        CmplxEvnt_61_set.insert("2");
        all_values.push_back(CmplxEvnt_61_set);
        all_compo_names.insert("CmplxEvnt_61_set");

        {
          xml_element EvntDts_61{"EvntDts"};
          multiset<string> EvntDts_61_set;
          EvntDts_61.add_attribute("StartDt", "ComplexEventStartDate_t_2047951596"); // 4
          EvntDts_61_set.insert("ComplexEventStartDate_t_2047951596");
          EvntDts_61.add_attribute("EndDt", "ComplexEventEndDate_t_1618140959"); // 4
          EvntDts_61_set.insert("ComplexEventEndDate_t_1618140959");
          all_values.push_back(EvntDts_61_set);
          all_compo_names.insert("EvntDts_61_set");

          {
            xml_element EvntTms_61{"EvntTms"};
            multiset<string> EvntTms_61_set;
            EvntTms_61.add_attribute("StartTm", "1852362793"); // 5
            EvntTms_61_set.insert("1852362793");
            EvntTms_61.add_attribute("EndTm", "1612564143"); // 5
            EvntTms_61_set.insert("1612564143");
            all_values.push_back(EvntTms_61_set);
            all_compo_names.insert("EvntTms_61_set");

            EvntDts_61.add_element(EvntTms_61);
          }
          CmplxEvnt_61.add_element(EvntDts_61);
        }
        Instrmt_61.add_element(CmplxEvnt_61);
      }
      QuotReqRej_1.add_element(Instrmt_61);
    }
    {
      xml_element FinDetls_21{"FinDetls"};
      multiset<string> FinDetls_21_set;
      FinDetls_21.add_attribute("AgmtDesc", "AgreementDesc_t_684845754"); // 2
      FinDetls_21_set.insert("AgreementDesc_t_684845754");
      FinDetls_21.add_attribute("AgmtID", "AgreementID_t_2027175713"); // 2
      FinDetls_21_set.insert("AgreementID_t_2027175713");
      FinDetls_21.add_attribute("AgmtDt", "AgreementDate_t_1447230740"); // 2
      FinDetls_21_set.insert("AgreementDate_t_1447230740");
      FinDetls_21.add_attribute("AgmtCcy", "GBP"); // 2
      FinDetls_21_set.insert("GBP");
      FinDetls_21.add_attribute("TrmTyp", "1"); // 2
      FinDetls_21_set.insert("1");
      FinDetls_21.add_attribute("StartDt", "StartDate_t_852747157"); // 2
      FinDetls_21_set.insert("StartDate_t_852747157");
      FinDetls_21.add_attribute("EndDt", "EndDate_t_521391459"); // 2
      FinDetls_21_set.insert("EndDate_t_521391459");
      FinDetls_21.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_21_set.insert("3");
      FinDetls_21.add_attribute("MgnRatio", "17934085.620000"); // 2
      FinDetls_21_set.insert("17934085.620000");
      all_values.push_back(FinDetls_21_set);
      all_compo_names.insert("FinDetls_21_set");

      QuotReqRej_1.add_element(FinDetls_21);
    }
    {
      xml_element Undly_86{"Undly"};
      multiset<string> Undly_86_set;
      Undly_86.add_attribute("Sym", "UnderlyingSymbol_t_1751795735"); // 2
      Undly_86_set.insert("UnderlyingSymbol_t_1751795735");
      Undly_86.add_attribute("Sfx", "CD"); // 2
      Undly_86_set.insert("CD");
      Undly_86.add_attribute("ID", "UnderlyingSecurityID_t_1554072696"); // 2
      Undly_86_set.insert("UnderlyingSecurityID_t_1554072696");
      Undly_86.add_attribute("Src", "A"); // 2
      Undly_86_set.insert("A");
      Undly_86.add_attribute("Prod", "4"); // 2
      Undly_86_set.insert("4");
      Undly_86.add_attribute("CFI", "UnderlyingCFICode_t_244433810"); // 2
      Undly_86_set.insert("UnderlyingCFICode_t_244433810");
      Undly_86.add_attribute("SecTyp", "FAC"); // 2
      Undly_86_set.insert("FAC");
      Undly_86.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1572100817"); // 2
      Undly_86_set.insert("UnderlyingSecuritySubType_t_1572100817");
      Undly_86.add_attribute("MMY", "519534154"); // 2
      Undly_86_set.insert("519534154");
      Undly_86.add_attribute("Mat", "UnderlyingMaturityDate_t_388309977"); // 2
      Undly_86_set.insert("UnderlyingMaturityDate_t_388309977");
      Undly_86.add_attribute("MatTm", "1573546400"); // 2
      Undly_86_set.insert("1573546400");
      Undly_86.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_258161135"); // 2
      Undly_86_set.insert("UnderlyingCouponPaymentDate_t_258161135");
      Undly_86.add_attribute("RestrctTyp", "MM"); // 2
      Undly_86_set.insert("MM");
      Undly_86.add_attribute("Snrty", "SD"); // 2
      Undly_86_set.insert("SD");
      Undly_86.add_attribute("NotlPctOut", "8406538.870000"); // 2
      Undly_86_set.insert("8406538.870000");
      Undly_86.add_attribute("OrigNotlPctOut", "2600689.950000"); // 2
      Undly_86_set.insert("2600689.950000");
      Undly_86.add_attribute("AttchPnt", "20720777.950000"); // 2
      Undly_86_set.insert("20720777.950000");
      Undly_86.add_attribute("DetchPnt", "7411218.350000"); // 2
      Undly_86_set.insert("7411218.350000");
      Undly_86.add_attribute("Issued", "UnderlyingIssueDate_t_1878209954"); // 2
      Undly_86_set.insert("UnderlyingIssueDate_t_1878209954");
      Undly_86.add_attribute("RepoCollSecTyp", "1776956940"); // 2
      Undly_86_set.insert("1776956940");
      Undly_86.add_attribute("RepoTrm", "206202331"); // 2
      Undly_86_set.insert("206202331");
      Undly_86.add_attribute("RepoRt", "4155720.600000"); // 2
      Undly_86_set.insert("4155720.600000");
      Undly_86.add_attribute("Fctr", "16566490.060000"); // 2
      Undly_86_set.insert("16566490.060000");
      Undly_86.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1653433071"); // 2
      Undly_86_set.insert("UnderlyingCreditRating_t_1653433071");
      Undly_86.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1659811981"); // 2
      Undly_86_set.insert("UnderlyingInstrRegistry_t_1659811981");
      Undly_86.add_attribute("Ctry", "671797252"); // 2
      Undly_86_set.insert("671797252");
      Undly_86.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_740672024"); // 2
      Undly_86_set.insert("UnderlyingStateOrProvinceOfIssue_t_740672024");
      Undly_86.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_365075490"); // 2
      Undly_86_set.insert("UnderlyingLocaleOfIssue_t_365075490");
      Undly_86.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1193188711"); // 2
      Undly_86_set.insert("UnderlyingRedemptionDate_t_1193188711");
      Undly_86.add_attribute("StrkPx", "9221966.190000"); // 2
      Undly_86_set.insert("9221966.190000");
      Undly_86.add_attribute("StrkCcy", "JPY"); // 2
      Undly_86_set.insert("JPY");
      Undly_86.add_attribute("OptA", "1037676165"); // 2
      Undly_86_set.insert("1037676165");
      Undly_86.add_attribute("Mult", "15650731.000000"); // 2
      Undly_86_set.insert("15650731.000000");
      Undly_86.add_attribute("MultTyp", "0"); // 2
      Undly_86_set.insert("0");
      Undly_86.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_86_set.insert("1");
      Undly_86.add_attribute("UOM", "Gal"); // 2
      Undly_86_set.insert("Gal");
      Undly_86.add_attribute("UOMQty", "14998929.550000"); // 2
      Undly_86_set.insert("14998929.550000");
      Undly_86.add_attribute("PxUOM", "t"); // 2
      Undly_86_set.insert("t");
      Undly_86.add_attribute("PxUOMQty", "1815574.160000"); // 2
      Undly_86_set.insert("1815574.160000");
      Undly_86.add_attribute("TmUnit", "S"); // 2
      Undly_86_set.insert("S");
      Undly_86.add_attribute("ExerStyle", "1"); // 2
      Undly_86_set.insert("1");
      Undly_86.add_attribute("CpnRt", "4397185.510000"); // 2
      Undly_86_set.insert("4397185.510000");
      Undly_86.add_attribute("Exch", "UnderlyingSecurityExchange_t_1722579395"); // 2
      Undly_86_set.insert("UnderlyingSecurityExchange_t_1722579395");
      Undly_86.add_attribute("Issr", "UnderlyingIssuer_t_1439497816"); // 2
      Undly_86_set.insert("UnderlyingIssuer_t_1439497816");
      Undly_86.add_attribute("EncUndIssrLen", "1280372439"); // 2
      Undly_86_set.insert("1280372439");
      Undly_86.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1982648390"); // 2
      Undly_86_set.insert("EncodedUnderlyingIssuer_t_1982648390");
      Undly_86.add_attribute("Desc", "UnderlyingSecurityDesc_t_1364091963"); // 2
      Undly_86_set.insert("UnderlyingSecurityDesc_t_1364091963");
      Undly_86.add_attribute("EncUndSecDescLen", "2021494274"); // 2
      Undly_86_set.insert("2021494274");
      Undly_86.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1713374696"); // 2
      Undly_86_set.insert("EncodedUnderlyingSecurityDesc_t_1713374696");
      Undly_86.add_attribute("CPPgm", "UnderlyingCPProgram_t_993565256"); // 2
      Undly_86_set.insert("UnderlyingCPProgram_t_993565256");
      Undly_86.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_80212957"); // 2
      Undly_86_set.insert("UnderlyingCPRegType_t_80212957");
      Undly_86.add_attribute("AllocPct", "21289467.570000"); // 2
      Undly_86_set.insert("21289467.570000");
      Undly_86.add_attribute("Ccy", "CAN"); // 2
      Undly_86_set.insert("CAN");
      Undly_86.add_attribute("Qty", "16412750.900000"); // 2
      Undly_86_set.insert("16412750.900000");
      Undly_86.add_attribute("SettlTyp", "5"); // 2
      Undly_86_set.insert("5");
      Undly_86.add_attribute("CashAmt", "UnderlyingCashAmount_t_326834405"); // 2
      Undly_86_set.insert("UnderlyingCashAmount_t_326834405");
      Undly_86.add_attribute("CashTyp", "FIXED"); // 2
      Undly_86_set.insert("FIXED");
      Undly_86.add_attribute("Px", "2202329.290000"); // 2
      Undly_86_set.insert("2202329.290000");
      Undly_86.add_attribute("DirtPx", "12490310.240000"); // 2
      Undly_86_set.insert("12490310.240000");
      Undly_86.add_attribute("EndPx", "20173509.840000"); // 2
      Undly_86_set.insert("20173509.840000");
      Undly_86.add_attribute("StartVal", "UnderlyingStartValue_t_1017733728"); // 2
      Undly_86_set.insert("UnderlyingStartValue_t_1017733728");
      Undly_86.add_attribute("CurVal", "UnderlyingCurrentValue_t_139223542"); // 2
      Undly_86_set.insert("UnderlyingCurrentValue_t_139223542");
      Undly_86.add_attribute("EndVal", "UnderlyingEndValue_t_1434940436"); // 2
      Undly_86_set.insert("UnderlyingEndValue_t_1434940436");
      Undly_86.add_attribute("AdjQty", "17750023.860000"); // 2
      Undly_86_set.insert("17750023.860000");
      Undly_86.add_attribute("FxRate", "21389657.680000"); // 2
      Undly_86_set.insert("21389657.680000");
      Undly_86.add_attribute("FxRateCalc", "M"); // 2
      Undly_86_set.insert("M");
      Undly_86.add_attribute("CapValu", "UnderlyingCapValue_t_1127411693"); // 2
      Undly_86_set.insert("UnderlyingCapValue_t_1127411693");
      Undly_86.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1415841515"); // 2
      Undly_86_set.insert("UnderlyingSettlMethod_t_1415841515");
      Undly_86.add_attribute("PutCall", "1278521114"); // 2
      Undly_86_set.insert("1278521114");
      all_values.push_back(Undly_86_set);
      all_compo_names.insert("Undly_86_set");

      {
        xml_element UndAID_86{"UndAID"};
        multiset<string> UndAID_86_set;
        UndAID_86.add_attribute("AltID", "UnderlyingSecurityAltID_t_868130978"); // 3
        UndAID_86_set.insert("UnderlyingSecurityAltID_t_868130978");
        UndAID_86.add_attribute("AltIDSrc", "E"); // 3
        UndAID_86_set.insert("E");
        all_values.push_back(UndAID_86_set);
        all_compo_names.insert("UndAID_86_set");

        Undly_86.add_element(UndAID_86);
      }
      {
        xml_element Stip_132{"Stip"};
        multiset<string> Stip_132_set;
        Stip_132.add_attribute("Typ", "REFPRIN"); // 3
        Stip_132_set.insert("REFPRIN");
        Stip_132.add_attribute("Val", "UnderlyingStipValue_t_443226725"); // 3
        Stip_132_set.insert("UnderlyingStipValue_t_443226725");
        all_values.push_back(Stip_132_set);
        all_compo_names.insert("Stip_132_set");

        Undly_86.add_element(Stip_132);
      }
      {
        xml_element Pty_323{"Pty"};
        multiset<string> Pty_323_set;
        Pty_323.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1558277831"); // 3
        Pty_323_set.insert("UnderlyingInstrumentPartyID_t_1558277831");
        Pty_323.add_attribute("Src", "6"); // 3
        Pty_323_set.insert("6");
        Pty_323.add_attribute("R", "2"); // 3
        Pty_323_set.insert("2");
        all_values.push_back(Pty_323_set);
        all_compo_names.insert("Pty_323_set");

        {
          xml_element Sub_323{"Sub"};
          multiset<string> Sub_323_set;
          Sub_323.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_774886147"); // 4
          Sub_323_set.insert("UnderlyingInstrumentPartySubID_t_774886147");
          Sub_323.add_attribute("Typ", "4"); // 4
          Sub_323_set.insert("4");
          all_values.push_back(Sub_323_set);
          all_compo_names.insert("Sub_323_set");

          Pty_323.add_element(Sub_323);
        }
        Undly_86.add_element(Pty_323);
      }
      QuotReqRej_1.add_element(Undly_86);
    }
    {
      xml_element OrdQty_21{"OrdQty"};
      multiset<string> OrdQty_21_set;
      OrdQty_21.add_attribute("Qty", "19917661.630000"); // 2
      OrdQty_21_set.insert("19917661.630000");
      OrdQty_21.add_attribute("Cash", "17684514.030000"); // 2
      OrdQty_21_set.insert("17684514.030000");
      OrdQty_21.add_attribute("Pct", "8053520.410000"); // 2
      OrdQty_21_set.insert("8053520.410000");
      OrdQty_21.add_attribute("RndDir", "2"); // 2
      OrdQty_21_set.insert("2");
      OrdQty_21.add_attribute("RndMod", "1236983.690000"); // 2
      OrdQty_21_set.insert("1236983.690000");
      all_values.push_back(OrdQty_21_set);
      all_compo_names.insert("OrdQty_21_set");

      QuotReqRej_1.add_element(OrdQty_21);
    }
    {
      xml_element Stip_133{"Stip"};
      multiset<string> Stip_133_set;
      Stip_133.add_attribute("Typ", "MATURITY"); // 2
      Stip_133_set.insert("MATURITY");
      Stip_133.add_attribute("Val", "StipulationValue_t_1467020714"); // 2
      Stip_133_set.insert("StipulationValue_t_1467020714");
      all_values.push_back(Stip_133_set);
      all_compo_names.insert("Stip_133_set");

      QuotReqRej_1.add_element(Stip_133);
    }
    {
      xml_element Leg_72{"Leg"};
      multiset<string> Leg_72_set;
      Leg_72.add_attribute("Qty", "12982262.350000"); // 2
      Leg_72_set.insert("12982262.350000");
      Leg_72.add_attribute("OrdQty", "7183488.270000"); // 2
      Leg_72_set.insert("7183488.270000");
      Leg_72.add_attribute("SwapTyp", "4"); // 2
      Leg_72_set.insert("4");
      Leg_72.add_attribute("SettlTyp", "8"); // 2
      Leg_72_set.insert("8");
      Leg_72.add_attribute("SettlDt", "LegSettlDate_t_1967379851"); // 2
      Leg_72_set.insert("LegSettlDate_t_1967379851");
      Leg_72.add_attribute("RefID", "LegRefID_t_1195754982"); // 2
      Leg_72_set.insert("LegRefID_t_1195754982");
      all_values.push_back(Leg_72_set);
      all_compo_names.insert("Leg_72_set");

      {
        xml_element Leg_73{"Leg"};
        multiset<string> Leg_73_set;
        Leg_73.add_attribute("Sym", "LegSymbol_t_388709244"); // 3
        Leg_73_set.insert("LegSymbol_t_388709244");
        Leg_73.add_attribute("Sfx", "WI"); // 3
        Leg_73_set.insert("WI");
        Leg_73.add_attribute("ID", "LegSecurityID_t_483211770"); // 3
        Leg_73_set.insert("LegSecurityID_t_483211770");
        Leg_73.add_attribute("Src", "D"); // 3
        Leg_73_set.insert("D");
        Leg_73.add_attribute("Prod", "13"); // 3
        Leg_73_set.insert("13");
        Leg_73.add_attribute("CFI", "LegCFICode_t_1580175468"); // 3
        Leg_73_set.insert("LegCFICode_t_1580175468");
        Leg_73.add_attribute("SecTyp", "TD"); // 3
        Leg_73_set.insert("TD");
        Leg_73.add_attribute("SecSubTyp", "LegSecuritySubType_t_1366443381"); // 3
        Leg_73_set.insert("LegSecuritySubType_t_1366443381");
        Leg_73.add_attribute("MMY", "711212935"); // 3
        Leg_73_set.insert("711212935");
        Leg_73.add_attribute("Mat", "LegMaturityDate_t_2011770654"); // 3
        Leg_73_set.insert("LegMaturityDate_t_2011770654");
        Leg_73.add_attribute("MatTm", "1485223396"); // 3
        Leg_73_set.insert("1485223396");
        Leg_73.add_attribute("CpnPmt", "LegCouponPaymentDate_t_281968953"); // 3
        Leg_73_set.insert("LegCouponPaymentDate_t_281968953");
        Leg_73.add_attribute("Issued", "LegIssueDate_t_307513731"); // 3
        Leg_73_set.insert("LegIssueDate_t_307513731");
        Leg_73.add_attribute("RepoCollSecTyp", "896017580"); // 3
        Leg_73_set.insert("896017580");
        Leg_73.add_attribute("RepoTrm", "1133097410"); // 3
        Leg_73_set.insert("1133097410");
        Leg_73.add_attribute("RepoRt", "5859051.980000"); // 3
        Leg_73_set.insert("5859051.980000");
        Leg_73.add_attribute("Fctr", "16709037.270000"); // 3
        Leg_73_set.insert("16709037.270000");
        Leg_73.add_attribute("CrdRtg", "LegCreditRating_t_1858236493"); // 3
        Leg_73_set.insert("LegCreditRating_t_1858236493");
        Leg_73.add_attribute("Rgstry", "LegInstrRegistry_t_430187713"); // 3
        Leg_73_set.insert("LegInstrRegistry_t_430187713");
        Leg_73.add_attribute("Ctry", "1291871482"); // 3
        Leg_73_set.insert("1291871482");
        Leg_73.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_516104886"); // 3
        Leg_73_set.insert("LegStateOrProvinceOfIssue_t_516104886");
        Leg_73.add_attribute("Lcl", "LegLocaleOfIssue_t_255933338"); // 3
        Leg_73_set.insert("LegLocaleOfIssue_t_255933338");
        Leg_73.add_attribute("Redeem", "LegRedemptionDate_t_1415569851"); // 3
        Leg_73_set.insert("LegRedemptionDate_t_1415569851");
        Leg_73.add_attribute("Strk", "9076193.080000"); // 3
        Leg_73_set.insert("9076193.080000");
        Leg_73.add_attribute("StrkCcy", "GBP"); // 3
        Leg_73_set.insert("GBP");
        Leg_73.add_attribute("OptA", "1625968135"); // 3
        Leg_73_set.insert("1625968135");
        Leg_73.add_attribute("Cmult", "9013580.510000"); // 3
        Leg_73_set.insert("9013580.510000");
        Leg_73.add_attribute("MultTyp", "1"); // 3
        Leg_73_set.insert("1");
        Leg_73.add_attribute("FlowSchedTyp", "4"); // 3
        Leg_73_set.insert("4");
        Leg_73.add_attribute("UOM", "Bbl"); // 3
        Leg_73_set.insert("Bbl");
        Leg_73.add_attribute("UOMQty", "3259971.990000"); // 3
        Leg_73_set.insert("3259971.990000");
        Leg_73.add_attribute("PxUOM", "Bcf"); // 3
        Leg_73_set.insert("Bcf");
        Leg_73.add_attribute("PxUOMQty", "4328411.560000"); // 3
        Leg_73_set.insert("4328411.560000");
        Leg_73.add_attribute("TmUnit", "Wk"); // 3
        Leg_73_set.insert("Wk");
        Leg_73.add_attribute("ExerStyle", "1"); // 3
        Leg_73_set.insert("1");
        Leg_73.add_attribute("CpnRt", "20130166.240000"); // 3
        Leg_73_set.insert("20130166.240000");
        Leg_73.add_attribute("Exch", "LegSecurityExchange_t_1485864857"); // 3
        Leg_73_set.insert("LegSecurityExchange_t_1485864857");
        Leg_73.add_attribute("Issr", "LegIssuer_t_574545683"); // 3
        Leg_73_set.insert("LegIssuer_t_574545683");
        Leg_73.add_attribute("EncLegIssrLen", "576745911"); // 3
        Leg_73_set.insert("576745911");
        Leg_73.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1350151863"); // 3
        Leg_73_set.insert("EncodedLegIssuer_t_1350151863");
        Leg_73.add_attribute("Desc", "LegSecurityDesc_t_2059769079"); // 3
        Leg_73_set.insert("LegSecurityDesc_t_2059769079");
        Leg_73.add_attribute("EncLegSecDescLen", "858714864"); // 3
        Leg_73_set.insert("858714864");
        Leg_73.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1657665594"); // 3
        Leg_73_set.insert("EncodedLegSecurityDesc_t_1657665594");
        Leg_73.add_attribute("RatioQty", "8083030.110000"); // 3
        Leg_73_set.insert("8083030.110000");
        Leg_73.add_attribute("Side", "3"); // 3
        Leg_73_set.insert("3");
        Leg_73.add_attribute("Ccy", "JPY"); // 3
        Leg_73_set.insert("JPY");
        Leg_73.add_attribute("Pool", "LegPool_t_1702565120"); // 3
        Leg_73_set.insert("LegPool_t_1702565120");
        Leg_73.add_attribute("Dated", "LegDatedDate_t_526274858"); // 3
        Leg_73_set.insert("LegDatedDate_t_526274858");
        Leg_73.add_attribute("CSetMo", "1623594572"); // 3
        Leg_73_set.insert("1623594572");
        Leg_73.add_attribute("IntAcrl", "LegInterestAccrualDate_t_71186358"); // 3
        Leg_73_set.insert("LegInterestAccrualDate_t_71186358");
        Leg_73.add_attribute("PutCall", "782208196"); // 3
        Leg_73_set.insert("782208196");
        Leg_73.add_attribute("LegOptionRatio", "8916807.750000"); // 3
        Leg_73_set.insert("8916807.750000");
        Leg_73.add_attribute("Px", "9788056.670000"); // 3
        Leg_73_set.insert("9788056.670000");
        all_values.push_back(Leg_73_set);
        all_compo_names.insert("Leg_73_set");

        {
          xml_element LegAID_70{"LegAID"};
          multiset<string> LegAID_70_set;
          LegAID_70.add_attribute("SecAltID", "LegSecurityAltID_t_357678600"); // 4
          LegAID_70_set.insert("LegSecurityAltID_t_357678600");
          LegAID_70.add_attribute("SecAltIDSrc", "I"); // 4
          LegAID_70_set.insert("I");
          all_values.push_back(LegAID_70_set);
          all_compo_names.insert("LegAID_70_set");

          Leg_73.add_element(LegAID_70);
        }
        Leg_72.add_element(Leg_73);
      }
      {
        xml_element Stip_134{"Stip"};
        multiset<string> Stip_134_set;
        Stip_134.add_attribute("StipTyp", "ORDRINCR"); // 3
        Stip_134_set.insert("ORDRINCR");
        Stip_134.add_attribute("StipVal", "LegStipulationValue_t_1259036651"); // 3
        Stip_134_set.insert("LegStipulationValue_t_1259036651");
        all_values.push_back(Stip_134_set);
        all_compo_names.insert("Stip_134_set");

        Leg_72.add_element(Stip_134);
      }
      {
        xml_element Pty_324{"Pty"};
        multiset<string> Pty_324_set;
        Pty_324.add_attribute("ID", "NestedPartyID_t_1395281168"); // 3
        Pty_324_set.insert("NestedPartyID_t_1395281168");
        Pty_324.add_attribute("Src", "4"); // 3
        Pty_324_set.insert("4");
        Pty_324.add_attribute("R", "6"); // 3
        Pty_324_set.insert("6");
        all_values.push_back(Pty_324_set);
        all_compo_names.insert("Pty_324_set");

        {
          xml_element Sub_324{"Sub"};
          multiset<string> Sub_324_set;
          Sub_324.add_attribute("ID", "NestedPartySubID_t_1721278367"); // 4
          Sub_324_set.insert("NestedPartySubID_t_1721278367");
          Sub_324.add_attribute("Typ", "25"); // 4
          Sub_324_set.insert("25");
          all_values.push_back(Sub_324_set);
          all_compo_names.insert("Sub_324_set");

          Pty_324.add_element(Sub_324);
        }
        Leg_72.add_element(Pty_324);
      }
      {
        xml_element BnchmkCurve_4{"BnchmkCurve"};
        multiset<string> BnchmkCurve_4_set;
        BnchmkCurve_4.add_attribute("Ccy", "USD"); // 3
        BnchmkCurve_4_set.insert("USD");
        BnchmkCurve_4.add_attribute("Name", "LIBID"); // 3
        BnchmkCurve_4_set.insert("LIBID");
        BnchmkCurve_4.add_attribute("Point", "LegBenchmarkCurvePoint_t_1507040169"); // 3
        BnchmkCurve_4_set.insert("LegBenchmarkCurvePoint_t_1507040169");
        BnchmkCurve_4.add_attribute("Px", "14018847.580000"); // 3
        BnchmkCurve_4_set.insert("14018847.580000");
        BnchmkCurve_4.add_attribute("PxTyp", "943302915"); // 3
        BnchmkCurve_4_set.insert("943302915");
        all_values.push_back(BnchmkCurve_4_set);
        all_compo_names.insert("BnchmkCurve_4_set");

        Leg_72.add_element(BnchmkCurve_4);
      }
      QuotReqRej_1.add_element(Leg_72);
    }
    {
      xml_element QuotQual_3{"QuotQual"};
      multiset<string> QuotQual_3_set;
      QuotQual_3.add_attribute("Qual", "O"); // 2
      QuotQual_3_set.insert("O");
      all_values.push_back(QuotQual_3_set);
      all_compo_names.insert("QuotQual_3_set");

      QuotReqRej_1.add_element(QuotQual_3);
    }
    {
      xml_element SprdBnchmkCurve_22{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_22_set;
      SprdBnchmkCurve_22.add_attribute("Spread", "6045529.730000"); // 2
      SprdBnchmkCurve_22_set.insert("6045529.730000");
      SprdBnchmkCurve_22.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_22_set.insert("CAN");
      SprdBnchmkCurve_22.add_attribute("Name", "LIBID"); // 2
      SprdBnchmkCurve_22_set.insert("LIBID");
      SprdBnchmkCurve_22.add_attribute("Point", "BenchmarkCurvePoint_t_1663891358"); // 2
      SprdBnchmkCurve_22_set.insert("BenchmarkCurvePoint_t_1663891358");
      SprdBnchmkCurve_22.add_attribute("Px", "6393459.240000"); // 2
      SprdBnchmkCurve_22_set.insert("6393459.240000");
      SprdBnchmkCurve_22.add_attribute("PxTyp", "18"); // 2
      SprdBnchmkCurve_22_set.insert("18");
      SprdBnchmkCurve_22.add_attribute("SecID", "BenchmarkSecurityID_t_1995614448"); // 2
      SprdBnchmkCurve_22_set.insert("BenchmarkSecurityID_t_1995614448");
      SprdBnchmkCurve_22.add_attribute("SecIDSrc", "K"); // 2
      SprdBnchmkCurve_22_set.insert("K");
      all_values.push_back(SprdBnchmkCurve_22_set);
      all_compo_names.insert("SprdBnchmkCurve_22_set");

      QuotReqRej_1.add_element(SprdBnchmkCurve_22);
    }
    {
      xml_element Yield_17{"Yield"};
      multiset<string> Yield_17_set;
      Yield_17.add_attribute("Typ", "COMPOUND"); // 2
      Yield_17_set.insert("COMPOUND");
      Yield_17.add_attribute("Yld", "14717253.730000"); // 2
      Yield_17_set.insert("14717253.730000");
      Yield_17.add_attribute("CalcDt", "YieldCalcDate_t_265613754"); // 2
      Yield_17_set.insert("YieldCalcDate_t_265613754");
      Yield_17.add_attribute("RedDt", "YieldRedemptionDate_t_1519305118"); // 2
      Yield_17_set.insert("YieldRedemptionDate_t_1519305118");
      Yield_17.add_attribute("RedPx", "2159225.000000"); // 2
      Yield_17_set.insert("2159225.000000");
      Yield_17.add_attribute("RedPxTyp", "4"); // 2
      Yield_17_set.insert("4");
      all_values.push_back(Yield_17_set);
      all_compo_names.insert("Yield_17_set");

      QuotReqRej_1.add_element(Yield_17);
    }
    {
      xml_element Pty_325{"Pty"};
      multiset<string> Pty_325_set;
      Pty_325.add_attribute("ID", "PartyID_t_1876983719"); // 2
      Pty_325_set.insert("PartyID_t_1876983719");
      Pty_325.add_attribute("Src", "9"); // 2
      Pty_325_set.insert("9");
      Pty_325.add_attribute("R", "36"); // 2
      Pty_325_set.insert("36");
      all_values.push_back(Pty_325_set);
      all_compo_names.insert("Pty_325_set");

      {
        xml_element Sub_325{"Sub"};
        multiset<string> Sub_325_set;
        Sub_325.add_attribute("ID", "PartySubID_t_988536722"); // 3
        Sub_325_set.insert("PartySubID_t_988536722");
        Sub_325.add_attribute("Typ", "11"); // 3
        Sub_325_set.insert("11");
        all_values.push_back(Sub_325_set);
        all_compo_names.insert("Sub_325_set");

        Pty_325.add_element(Sub_325);
      }
      QuotReqRej_1.add_element(Pty_325);
    }
    elt.add_element(QuotReqRej_1);
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
