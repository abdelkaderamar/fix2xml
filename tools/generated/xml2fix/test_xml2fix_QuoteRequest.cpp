#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequest_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_13931655"); // 0
  QuoteRequest_message_t_0.insert("QuoteReqID_t_13931655");
  elt.add_attribute("RFQReqID", "RFQReqID_t_1747218608"); // 0
  QuoteRequest_message_t_0.insert("RFQReqID_t_1747218608");
  elt.add_attribute("ClOrdID", "ClOrdID_t_588760659"); // 0
  QuoteRequest_message_t_0.insert("ClOrdID_t_588760659");
  elt.add_attribute("BkngTyp", "2"); // 0
  QuoteRequest_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "R"); // 0
  QuoteRequest_message_t_0.insert("R");
  elt.add_attribute("Rstctions", "E"); // 0
  QuoteRequest_message_t_0.insert("E");
  elt.add_attribute("PrvtQt", "false"); // 0
  QuoteRequest_message_t_0.insert("false");
  elt.add_attribute("RspdntTyp", "4"); // 0
  QuoteRequest_message_t_0.insert("4");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  QuoteRequest_message_t_0.insert("false");
  elt.add_attribute("Txt", "Text_t_1762781604"); // 0
  QuoteRequest_message_t_0.insert("Text_t_1762781604");
  elt.add_attribute("EncTxtLen", "1199205337"); // 0
  QuoteRequest_message_t_0.insert("1199205337");
  elt.add_attribute("EncTxt", "EncodedText_t_88641704"); // 0
  QuoteRequest_message_t_0.insert("EncodedText_t_88641704");
  all_values.push_back(QuoteRequest_message_t_0);
  all_compo_names.insert("QuoteRequest_message_t");

  { // Hdr
    xml_element Hdr_70{"Hdr"};
    multiset<string> Hdr_70_set;
    Hdr_70.add_attribute("SeqNum", "150066153"); // 1
    Hdr_70_set.insert("150066153");
    Hdr_70.add_attribute("SID", "SenderCompID_t_1419652385"); // 1
    Hdr_70_set.insert("SenderCompID_t_1419652385");
    Hdr_70.add_attribute("TID", "TargetCompID_t_787993600"); // 1
    Hdr_70_set.insert("TargetCompID_t_787993600");
    Hdr_70.add_attribute("OBID", "OnBehalfOfCompID_t_1745762605"); // 1
    Hdr_70_set.insert("OnBehalfOfCompID_t_1745762605");
    Hdr_70.add_attribute("D2ID", "DeliverToCompID_t_320838100"); // 1
    Hdr_70_set.insert("DeliverToCompID_t_320838100");
    Hdr_70.add_attribute("SSub", "SenderSubID_t_971460096"); // 1
    Hdr_70_set.insert("SenderSubID_t_971460096");
    Hdr_70.add_attribute("SLoc", "SenderLocationID_t_244070443"); // 1
    Hdr_70_set.insert("SenderLocationID_t_244070443");
    Hdr_70.add_attribute("TSub", "TargetSubID_t_1623889100"); // 1
    Hdr_70_set.insert("TargetSubID_t_1623889100");
    Hdr_70.add_attribute("TLoc", "TargetLocationID_t_2021852207"); // 1
    Hdr_70_set.insert("TargetLocationID_t_2021852207");
    Hdr_70.add_attribute("OBSub", "OnBehalfOfSubID_t_514745755"); // 1
    Hdr_70_set.insert("OnBehalfOfSubID_t_514745755");
    Hdr_70.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1756155756"); // 1
    Hdr_70_set.insert("OnBehalfOfLocationID_t_1756155756");
    Hdr_70.add_attribute("D2Sub", "DeliverToSubID_t_410659287"); // 1
    Hdr_70_set.insert("DeliverToSubID_t_410659287");
    Hdr_70.add_attribute("D2Loc", "DeliverToLocationID_t_1667776362"); // 1
    Hdr_70_set.insert("DeliverToLocationID_t_1667776362");
    Hdr_70.add_attribute("PosDup", "N"); // 1
    Hdr_70_set.insert("N");
    Hdr_70.add_attribute("PosRsnd", "N"); // 1
    Hdr_70_set.insert("N");
    Hdr_70.add_attribute("Snt", "SendingTime_t_2012684311"); // 1
    Hdr_70_set.insert("SendingTime_t_2012684311");
    Hdr_70.add_attribute("OrigSnt", "OrigSendingTime_t_739555802"); // 1
    Hdr_70_set.insert("OrigSendingTime_t_739555802");
    Hdr_70.add_attribute("MsgEncd", "MessageEncoding_t_1463012894"); // 1
    Hdr_70_set.insert("MessageEncoding_t_1463012894");
    all_values.push_back(Hdr_70_set);
    all_compo_names.insert("Hdr_70_set");

    {
      xml_element Hop_70{"Hop"};
      multiset<string> Hop_70_set;
      Hop_70.add_attribute("ID", "HopCompID_t_1815377982"); // 2
      Hop_70_set.insert("HopCompID_t_1815377982");
      Hop_70.add_attribute("Ref", "753487458"); // 2
      Hop_70_set.insert("753487458");
      Hop_70.add_attribute("Snt", "HopSendingTime_t_1062747854"); // 2
      Hop_70_set.insert("HopSendingTime_t_1062747854");
      all_values.push_back(Hop_70_set);
      all_compo_names.insert("Hop_70_set");

      Hdr_70.add_element(Hop_70);
    }
    elt.add_element(Hdr_70);
  } // end Hdr
  { // Pty
    xml_element Pty_327{"Pty"};
    multiset<string> Pty_327_set;
    Pty_327.add_attribute("ID", "RootPartyID_t_1935374120"); // 1
    Pty_327_set.insert("RootPartyID_t_1935374120");
    Pty_327.add_attribute("Src", "B"); // 1
    Pty_327_set.insert("B");
    Pty_327.add_attribute("R", "15"); // 1
    Pty_327_set.insert("15");
    all_values.push_back(Pty_327_set);
    all_compo_names.insert("Pty_327_set");

    {
      xml_element Sub_327{"Sub"};
      multiset<string> Sub_327_set;
      Sub_327.add_attribute("ID", "RootPartySubID_t_282228765"); // 2
      Sub_327_set.insert("RootPartySubID_t_282228765");
      Sub_327.add_attribute("Typ", "32"); // 2
      Sub_327_set.insert("32");
      all_values.push_back(Sub_327_set);
      all_compo_names.insert("Sub_327_set");

      Pty_327.add_element(Sub_327);
    }
    elt.add_element(Pty_327);
  } // end Pty
  { // Pty
    xml_element Pty_328{"Pty"};
    multiset<string> Pty_328_set;
    Pty_328.add_attribute("ID", "RootPartyID_t_2032138423"); // 1
    Pty_328_set.insert("RootPartyID_t_2032138423");
    Pty_328.add_attribute("Src", "4"); // 1
    Pty_328_set.insert("4");
    Pty_328.add_attribute("R", "35"); // 1
    Pty_328_set.insert("35");
    all_values.push_back(Pty_328_set);
    all_compo_names.insert("Pty_328_set");

    {
      xml_element Sub_328{"Sub"};
      multiset<string> Sub_328_set;
      Sub_328.add_attribute("ID", "RootPartySubID_t_2120780128"); // 2
      Sub_328_set.insert("RootPartySubID_t_2120780128");
      Sub_328.add_attribute("Typ", "19"); // 2
      Sub_328_set.insert("19");
      all_values.push_back(Sub_328_set);
      all_compo_names.insert("Sub_328_set");

      Pty_328.add_element(Sub_328);
    }
    elt.add_element(Pty_328);
  } // end Pty
  { // Pty
    xml_element Pty_329{"Pty"};
    multiset<string> Pty_329_set;
    Pty_329.add_attribute("ID", "RootPartyID_t_1146201204"); // 1
    Pty_329_set.insert("RootPartyID_t_1146201204");
    Pty_329.add_attribute("Src", "7"); // 1
    Pty_329_set.insert("7");
    Pty_329.add_attribute("R", "1"); // 1
    Pty_329_set.insert("1");
    all_values.push_back(Pty_329_set);
    all_compo_names.insert("Pty_329_set");

    {
      xml_element Sub_329{"Sub"};
      multiset<string> Sub_329_set;
      Sub_329.add_attribute("ID", "RootPartySubID_t_1467039304"); // 2
      Sub_329_set.insert("RootPartySubID_t_1467039304");
      Sub_329.add_attribute("Typ", "12"); // 2
      Sub_329_set.insert("12");
      all_values.push_back(Sub_329_set);
      all_compo_names.insert("Sub_329_set");

      Pty_329.add_element(Sub_329);
    }
    elt.add_element(Pty_329);
  } // end Pty
  { // QuotReq
    xml_element QuotReq_0{"QuotReq"};
    multiset<string> QuotReq_0_set;
    QuotReq_0.add_attribute("PrevClsPx", "9434447.560000"); // 1
    QuotReq_0_set.insert("9434447.560000");
    QuotReq_0.add_attribute("ReqTyp", "2"); // 1
    QuotReq_0_set.insert("2");
    QuotReq_0.add_attribute("Typ", "2"); // 1
    QuotReq_0_set.insert("2");
    QuotReq_0.add_attribute("SesID", "3"); // 1
    QuotReq_0_set.insert("3");
    QuotReq_0.add_attribute("SesSub", "3"); // 1
    QuotReq_0_set.insert("3");
    QuotReq_0.add_attribute("OrignDt", "TradeOriginationDate_t_2072464392"); // 1
    QuotReq_0_set.insert("TradeOriginationDate_t_2072464392");
    QuotReq_0.add_attribute("Side", "8"); // 1
    QuotReq_0_set.insert("8");
    QuotReq_0.add_attribute("QtyTyp", "0"); // 1
    QuotReq_0_set.insert("0");
    QuotReq_0.add_attribute("MinQty", "19376650.560000"); // 1
    QuotReq_0_set.insert("19376650.560000");
    QuotReq_0.add_attribute("SettlTyp", "5"); // 1
    QuotReq_0_set.insert("5");
    QuotReq_0.add_attribute("SettlDt", "SettlDate_t_1910839817"); // 1
    QuotReq_0_set.insert("SettlDate_t_1910839817");
    QuotReq_0.add_attribute("SettlDt2", "SettlDate2_t_1605559390"); // 1
    QuotReq_0_set.insert("SettlDate2_t_1605559390");
    QuotReq_0.add_attribute("Qty2", "12116458.430000"); // 1
    QuotReq_0_set.insert("12116458.430000");
    QuotReq_0.add_attribute("Ccy", "USD"); // 1
    QuotReq_0_set.insert("USD");
    QuotReq_0.add_attribute("SettlCcy", "JPY"); // 1
    QuotReq_0_set.insert("JPY");
    QuotReq_0.add_attribute("Acct", "Account_t_1381213379"); // 1
    QuotReq_0_set.insert("Account_t_1381213379");
    QuotReq_0.add_attribute("AcctIDSrc", "3"); // 1
    QuotReq_0_set.insert("3");
    QuotReq_0.add_attribute("AcctTyp", "6"); // 1
    QuotReq_0_set.insert("6");
    QuotReq_0.add_attribute("QuotPxTyp", "4"); // 1
    QuotReq_0_set.insert("4");
    QuotReq_0.add_attribute("OrdTyp", "A"); // 1
    QuotReq_0_set.insert("A");
    QuotReq_0.add_attribute("ValidUntilTm", "ValidUntilTime_t_1592608039"); // 1
    QuotReq_0_set.insert("ValidUntilTime_t_1592608039");
    QuotReq_0.add_attribute("ExpireTm", "ExpireTime_t_1239164634"); // 1
    QuotReq_0_set.insert("ExpireTime_t_1239164634");
    QuotReq_0.add_attribute("TxnTm", "TransactTime_t_1226884676"); // 1
    QuotReq_0_set.insert("TransactTime_t_1226884676");
    QuotReq_0.add_attribute("PxTyp", "19"); // 1
    QuotReq_0_set.insert("19");
    QuotReq_0.add_attribute("Px", "20004547.140000"); // 1
    QuotReq_0_set.insert("20004547.140000");
    QuotReq_0.add_attribute("Px2", "8727565.080000"); // 1
    QuotReq_0_set.insert("8727565.080000");
    all_values.push_back(QuotReq_0_set);
    all_compo_names.insert("QuotReq_0_set");

    {
      xml_element Instrmt_60{"Instrmt"};
      multiset<string> Instrmt_60_set;
      Instrmt_60.add_attribute("Sym", "Symbol_t_2058364899"); // 2
      Instrmt_60_set.insert("Symbol_t_2058364899");
      Instrmt_60.add_attribute("Sfx", "CD"); // 2
      Instrmt_60_set.insert("CD");
      Instrmt_60.add_attribute("ID", "SecurityID_t_762698783"); // 2
      Instrmt_60_set.insert("SecurityID_t_762698783");
      Instrmt_60.add_attribute("Src", "9"); // 2
      Instrmt_60_set.insert("9");
      Instrmt_60.add_attribute("Prod", "2"); // 2
      Instrmt_60_set.insert("2");
      Instrmt_60.add_attribute("ProdCmplx", "ProductComplex_t_1167386813"); // 2
      Instrmt_60_set.insert("ProductComplex_t_1167386813");
      Instrmt_60.add_attribute("SecGrp", "SecurityGroup_t_1406442872"); // 2
      Instrmt_60_set.insert("SecurityGroup_t_1406442872");
      Instrmt_60.add_attribute("CFI", "CFICode_t_915650705"); // 2
      Instrmt_60_set.insert("CFICode_t_915650705");
      Instrmt_60.add_attribute("SecTyp", "DINP"); // 2
      Instrmt_60_set.insert("DINP");
      Instrmt_60.add_attribute("SubTyp", "SecuritySubType_t_1125045455"); // 2
      Instrmt_60_set.insert("SecuritySubType_t_1125045455");
      Instrmt_60.add_attribute("MMY", "1363477628"); // 2
      Instrmt_60_set.insert("1363477628");
      Instrmt_60.add_attribute("MatDt", "MaturityDate_t_882548965"); // 2
      Instrmt_60_set.insert("MaturityDate_t_882548965");
      Instrmt_60.add_attribute("MatTm", "1583203841"); // 2
      Instrmt_60_set.insert("1583203841");
      Instrmt_60.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1126833798"); // 2
      Instrmt_60_set.insert("SettleOnOpenFlag_t_1126833798");
      Instrmt_60.add_attribute("AsgnMeth", "340624708"); // 2
      Instrmt_60_set.insert("340624708");
      Instrmt_60.add_attribute("Status", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("CpnPmt", "CouponPaymentDate_t_1952937822"); // 2
      Instrmt_60_set.insert("CouponPaymentDate_t_1952937822");
      Instrmt_60.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_60_set.insert("FR");
      Instrmt_60.add_attribute("Snrty", "SB"); // 2
      Instrmt_60_set.insert("SB");
      Instrmt_60.add_attribute("NotlPctOut", "9966862.640000"); // 2
      Instrmt_60_set.insert("9966862.640000");
      Instrmt_60.add_attribute("OrigNotlPctOut", "14365688.230000"); // 2
      Instrmt_60_set.insert("14365688.230000");
      Instrmt_60.add_attribute("AttchPnt", "7811837.840000"); // 2
      Instrmt_60_set.insert("7811837.840000");
      Instrmt_60.add_attribute("DetchPnt", "7152618.360000"); // 2
      Instrmt_60_set.insert("7152618.360000");
      Instrmt_60.add_attribute("Issued", "IssueDate_t_554953330"); // 2
      Instrmt_60_set.insert("IssueDate_t_554953330");
      Instrmt_60.add_attribute("RepoCollSecTyp", "1960475586"); // 2
      Instrmt_60_set.insert("1960475586");
      Instrmt_60.add_attribute("RepoTrm", "160386227"); // 2
      Instrmt_60_set.insert("160386227");
      Instrmt_60.add_attribute("RepoRt", "17941179.640000"); // 2
      Instrmt_60_set.insert("17941179.640000");
      Instrmt_60.add_attribute("Fctr", "10398766.140000"); // 2
      Instrmt_60_set.insert("10398766.140000");
      Instrmt_60.add_attribute("CrdRtg", "CreditRating_t_751711822"); // 2
      Instrmt_60_set.insert("CreditRating_t_751711822");
      Instrmt_60.add_attribute("Rgstry", "InstrRegistry_t_1647089031"); // 2
      Instrmt_60_set.insert("InstrRegistry_t_1647089031");
      Instrmt_60.add_attribute("IssuCtry", "1912633122"); // 2
      Instrmt_60_set.insert("1912633122");
      Instrmt_60.add_attribute("StPrv", "StateOrProvinceOfIssue_t_662593074"); // 2
      Instrmt_60_set.insert("StateOrProvinceOfIssue_t_662593074");
      Instrmt_60.add_attribute("Lcl", "LocaleOfIssue_t_1085326625"); // 2
      Instrmt_60_set.insert("LocaleOfIssue_t_1085326625");
      Instrmt_60.add_attribute("Redeem", "RedemptionDate_t_527848257"); // 2
      Instrmt_60_set.insert("RedemptionDate_t_527848257");
      Instrmt_60.add_attribute("StrkPx", "15169190.820000"); // 2
      Instrmt_60_set.insert("15169190.820000");
      Instrmt_60.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_60_set.insert("GBP");
      Instrmt_60.add_attribute("StrkMult", "7758783.060000"); // 2
      Instrmt_60_set.insert("7758783.060000");
      Instrmt_60.add_attribute("StrkValu", "8988500.120000"); // 2
      Instrmt_60_set.insert("8988500.120000");
      Instrmt_60.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_60_set.insert("4");
      Instrmt_60.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_60_set.insert("3");
      Instrmt_60.add_attribute("StrkPxBndryPrcsn", "1148439.930000"); // 2
      Instrmt_60_set.insert("1148439.930000");
      Instrmt_60.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_60_set.insert("2");
      Instrmt_60.add_attribute("OptAt", "1336643955"); // 2
      Instrmt_60_set.insert("1336643955");
      Instrmt_60.add_attribute("Mult", "12416777.910000"); // 2
      Instrmt_60_set.insert("12416777.910000");
      Instrmt_60.add_attribute("MultTyp", "0"); // 2
      Instrmt_60_set.insert("0");
      Instrmt_60.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("MinPxIncr", "10471319.650000"); // 2
      Instrmt_60_set.insert("10471319.650000");
      Instrmt_60.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1918648097"); // 2
      Instrmt_60_set.insert("MinPriceIncrementAmount_t_1918648097");
      Instrmt_60.add_attribute("UOM", "oz_tr"); // 2
      Instrmt_60_set.insert("oz_tr");
      Instrmt_60.add_attribute("UOMQty", "20438182.290000"); // 2
      Instrmt_60_set.insert("20438182.290000");
      Instrmt_60.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_60_set.insert("MMbbl");
      Instrmt_60.add_attribute("PxUOMQty", "1171288.320000"); // 2
      Instrmt_60_set.insert("1171288.320000");
      Instrmt_60.add_attribute("SettlMeth", "C"); // 2
      Instrmt_60_set.insert("C");
      Instrmt_60.add_attribute("ExerStyle", "0"); // 2
      Instrmt_60_set.insert("0");
      Instrmt_60.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("OptPayAmt", "OptPayoutAmount_t_771982645"); // 2
      Instrmt_60_set.insert("OptPayoutAmount_t_771982645");
      Instrmt_60.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_60_set.insert("PCTPAR");
      Instrmt_60.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_60_set.insert("CDSD");
      Instrmt_60.add_attribute("ListMeth", "0"); // 2
      Instrmt_60_set.insert("0");
      Instrmt_60.add_attribute("CapPx", "9089263.020000"); // 2
      Instrmt_60_set.insert("9089263.020000");
      Instrmt_60.add_attribute("FlrPx", "7351468.580000"); // 2
      Instrmt_60_set.insert("7351468.580000");
      Instrmt_60.add_attribute("PutCall", "0"); // 2
      Instrmt_60_set.insert("0");
      Instrmt_60.add_attribute("FlexInd", "true"); // 2
      Instrmt_60_set.insert("true");
      Instrmt_60.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_60_set.insert("false");
      Instrmt_60.add_attribute("TmUnit", "D"); // 2
      Instrmt_60_set.insert("D");
      Instrmt_60.add_attribute("CpnRt", "19774522.350000"); // 2
      Instrmt_60_set.insert("19774522.350000");
      Instrmt_60.add_attribute("Exch", "SecurityExchange_t_810746537"); // 2
      Instrmt_60_set.insert("SecurityExchange_t_810746537");
      Instrmt_60.add_attribute("PosLmt", "184117634"); // 2
      Instrmt_60_set.insert("184117634");
      Instrmt_60.add_attribute("NTPosLmt", "728818600"); // 2
      Instrmt_60_set.insert("728818600");
      Instrmt_60.add_attribute("Issr", "Issuer_t_1450865516"); // 2
      Instrmt_60_set.insert("Issuer_t_1450865516");
      Instrmt_60.add_attribute("EncIssrLen", "2085041396"); // 2
      Instrmt_60_set.insert("2085041396");
      Instrmt_60.add_attribute("EncIssr", "EncodedIssuer_t_843662593"); // 2
      Instrmt_60_set.insert("EncodedIssuer_t_843662593");
      Instrmt_60.add_attribute("Desc", "SecurityDesc_t_826049813"); // 2
      Instrmt_60_set.insert("SecurityDesc_t_826049813");
      Instrmt_60.add_attribute("EncSecDescLen", "1274201703"); // 2
      Instrmt_60_set.insert("1274201703");
      Instrmt_60.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2085340384"); // 2
      Instrmt_60_set.insert("EncodedSecurityDesc_t_2085340384");
      Instrmt_60.add_attribute("Pool", "Pool_t_541858818"); // 2
      Instrmt_60_set.insert("Pool_t_541858818");
      Instrmt_60.add_attribute("CSetMo", "1110728047"); // 2
      Instrmt_60_set.insert("1110728047");
      Instrmt_60.add_attribute("CPPgm", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("CPRegT", "CPRegType_t_313023268"); // 2
      Instrmt_60_set.insert("CPRegType_t_313023268");
      Instrmt_60.add_attribute("Dated", "DatedDate_t_446673094"); // 2
      Instrmt_60_set.insert("DatedDate_t_446673094");
      Instrmt_60.add_attribute("IntAcrl", "InterestAccrualDate_t_881323282"); // 2
      Instrmt_60_set.insert("InterestAccrualDate_t_881323282");
      all_values.push_back(Instrmt_60_set);
      all_compo_names.insert("Instrmt_60_set");

      {
        xml_element AID_63{"AID"};
        multiset<string> AID_63_set;
        AID_63.add_attribute("AltID", "SecurityAltID_t_1520756541"); // 3
        AID_63_set.insert("SecurityAltID_t_1520756541");
        AID_63.add_attribute("AltIDSrc", "7"); // 3
        AID_63_set.insert("7");
        all_values.push_back(AID_63_set);
        all_compo_names.insert("AID_63_set");

        Instrmt_60.add_element(AID_63);
      }
      {
        xml_element SecXML_63{"SecXML"};
        multiset<string> SecXML_63_set;
        SecXML_63.add_attribute("Schema", "SecurityXMLSchema_t_1492919700"); // 3
        SecXML_63_set.insert("SecurityXMLSchema_t_1492919700");
        all_values.push_back(SecXML_63_set);
        all_compo_names.insert("SecXML_63_set");

        Instrmt_60.add_element(SecXML_63);
      }
      {
        xml_element Evnt_63{"Evnt"};
        multiset<string> Evnt_63_set;
        Evnt_63.add_attribute("EventTyp", "16"); // 3
        Evnt_63_set.insert("16");
        Evnt_63.add_attribute("Dt", "EventDate_t_493922696"); // 3
        Evnt_63_set.insert("EventDate_t_493922696");
        Evnt_63.add_attribute("Tm", "EventTime_t_117418698"); // 3
        Evnt_63_set.insert("EventTime_t_117418698");
        Evnt_63.add_attribute("Px", "3977967.670000"); // 3
        Evnt_63_set.insert("3977967.670000");
        Evnt_63.add_attribute("Txt", "EventText_t_1463920080"); // 3
        Evnt_63_set.insert("EventText_t_1463920080");
        all_values.push_back(Evnt_63_set);
        all_compo_names.insert("Evnt_63_set");

        Instrmt_60.add_element(Evnt_63);
      }
      {
        xml_element Pty_330{"Pty"};
        multiset<string> Pty_330_set;
        Pty_330.add_attribute("ID", "InstrumentPartyID_t_1641113166"); // 3
        Pty_330_set.insert("InstrumentPartyID_t_1641113166");
        Pty_330.add_attribute("Src", "3"); // 3
        Pty_330_set.insert("3");
        Pty_330.add_attribute("R", "68"); // 3
        Pty_330_set.insert("68");
        all_values.push_back(Pty_330_set);
        all_compo_names.insert("Pty_330_set");

        {
          xml_element Sub_330{"Sub"};
          multiset<string> Sub_330_set;
          Sub_330.add_attribute("ID", "InstrumentPartySubID_t_1679917060"); // 4
          Sub_330_set.insert("InstrumentPartySubID_t_1679917060");
          Sub_330.add_attribute("Typ", "5"); // 4
          Sub_330_set.insert("5");
          all_values.push_back(Sub_330_set);
          all_compo_names.insert("Sub_330_set");

          Pty_330.add_element(Sub_330);
        }
        Instrmt_60.add_element(Pty_330);
      }
      {
        xml_element CmplxEvnt_60{"CmplxEvnt"};
        multiset<string> CmplxEvnt_60_set;
        CmplxEvnt_60.add_attribute("Typ", "3"); // 3
        CmplxEvnt_60_set.insert("3");
        CmplxEvnt_60.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1088156388"); // 3
        CmplxEvnt_60_set.insert("ComplexOptPayoutAmount_t_1088156388");
        CmplxEvnt_60.add_attribute("Px", "9834609.370000"); // 3
        CmplxEvnt_60_set.insert("9834609.370000");
        CmplxEvnt_60.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_60_set.insert("3");
        CmplxEvnt_60.add_attribute("PxBndryPrcsn", "12722740.220000"); // 3
        CmplxEvnt_60_set.insert("12722740.220000");
        CmplxEvnt_60.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_60_set.insert("3");
        CmplxEvnt_60.add_attribute("Cond", "2"); // 3
        CmplxEvnt_60_set.insert("2");
        all_values.push_back(CmplxEvnt_60_set);
        all_compo_names.insert("CmplxEvnt_60_set");

        {
          xml_element EvntDts_60{"EvntDts"};
          multiset<string> EvntDts_60_set;
          EvntDts_60.add_attribute("StartDt", "ComplexEventStartDate_t_1209831771"); // 4
          EvntDts_60_set.insert("ComplexEventStartDate_t_1209831771");
          EvntDts_60.add_attribute("EndDt", "ComplexEventEndDate_t_408458482"); // 4
          EvntDts_60_set.insert("ComplexEventEndDate_t_408458482");
          all_values.push_back(EvntDts_60_set);
          all_compo_names.insert("EvntDts_60_set");

          {
            xml_element EvntTms_60{"EvntTms"};
            multiset<string> EvntTms_60_set;
            EvntTms_60.add_attribute("StartTm", "107272976"); // 5
            EvntTms_60_set.insert("107272976");
            EvntTms_60.add_attribute("EndTm", "336549826"); // 5
            EvntTms_60_set.insert("336549826");
            all_values.push_back(EvntTms_60_set);
            all_compo_names.insert("EvntTms_60_set");

            EvntDts_60.add_element(EvntTms_60);
          }
          CmplxEvnt_60.add_element(EvntDts_60);
        }
        Instrmt_60.add_element(CmplxEvnt_60);
      }
      QuotReq_0.add_element(Instrmt_60);
    }
    {
      xml_element FinDetls_18{"FinDetls"};
      multiset<string> FinDetls_18_set;
      FinDetls_18.add_attribute("AgmtDesc", "AgreementDesc_t_346315218"); // 2
      FinDetls_18_set.insert("AgreementDesc_t_346315218");
      FinDetls_18.add_attribute("AgmtID", "AgreementID_t_649131795"); // 2
      FinDetls_18_set.insert("AgreementID_t_649131795");
      FinDetls_18.add_attribute("AgmtDt", "AgreementDate_t_1447277873"); // 2
      FinDetls_18_set.insert("AgreementDate_t_1447277873");
      FinDetls_18.add_attribute("AgmtCcy", "EUR"); // 2
      FinDetls_18_set.insert("EUR");
      FinDetls_18.add_attribute("TrmTyp", "1"); // 2
      FinDetls_18_set.insert("1");
      FinDetls_18.add_attribute("StartDt", "StartDate_t_65143554"); // 2
      FinDetls_18_set.insert("StartDate_t_65143554");
      FinDetls_18.add_attribute("EndDt", "EndDate_t_335427956"); // 2
      FinDetls_18_set.insert("EndDate_t_335427956");
      FinDetls_18.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_18_set.insert("2");
      FinDetls_18.add_attribute("MgnRatio", "15580632.540000"); // 2
      FinDetls_18_set.insert("15580632.540000");
      all_values.push_back(FinDetls_18_set);
      all_compo_names.insert("FinDetls_18_set");

      QuotReq_0.add_element(FinDetls_18);
    }
    {
      xml_element Undly_86{"Undly"};
      multiset<string> Undly_86_set;
      Undly_86.add_attribute("Sym", "UnderlyingSymbol_t_1471387452"); // 2
      Undly_86_set.insert("UnderlyingSymbol_t_1471387452");
      Undly_86.add_attribute("Sfx", "WI"); // 2
      Undly_86_set.insert("WI");
      Undly_86.add_attribute("ID", "UnderlyingSecurityID_t_1675481952"); // 2
      Undly_86_set.insert("UnderlyingSecurityID_t_1675481952");
      Undly_86.add_attribute("Src", "2"); // 2
      Undly_86_set.insert("2");
      Undly_86.add_attribute("Prod", "7"); // 2
      Undly_86_set.insert("7");
      Undly_86.add_attribute("CFI", "UnderlyingCFICode_t_1169111470"); // 2
      Undly_86_set.insert("UnderlyingCFICode_t_1169111470");
      Undly_86.add_attribute("SecTyp", "STRUCT"); // 2
      Undly_86_set.insert("STRUCT");
      Undly_86.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_172211666"); // 2
      Undly_86_set.insert("UnderlyingSecuritySubType_t_172211666");
      Undly_86.add_attribute("MMY", "701544882"); // 2
      Undly_86_set.insert("701544882");
      Undly_86.add_attribute("Mat", "UnderlyingMaturityDate_t_34432343"); // 2
      Undly_86_set.insert("UnderlyingMaturityDate_t_34432343");
      Undly_86.add_attribute("MatTm", "1486790071"); // 2
      Undly_86_set.insert("1486790071");
      Undly_86.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1789701270"); // 2
      Undly_86_set.insert("UnderlyingCouponPaymentDate_t_1789701270");
      Undly_86.add_attribute("RestrctTyp", "MR"); // 2
      Undly_86_set.insert("MR");
      Undly_86.add_attribute("Snrty", "SR"); // 2
      Undly_86_set.insert("SR");
      Undly_86.add_attribute("NotlPctOut", "9144916.450000"); // 2
      Undly_86_set.insert("9144916.450000");
      Undly_86.add_attribute("OrigNotlPctOut", "5826891.700000"); // 2
      Undly_86_set.insert("5826891.700000");
      Undly_86.add_attribute("AttchPnt", "7458545.290000"); // 2
      Undly_86_set.insert("7458545.290000");
      Undly_86.add_attribute("DetchPnt", "21243234.160000"); // 2
      Undly_86_set.insert("21243234.160000");
      Undly_86.add_attribute("Issued", "UnderlyingIssueDate_t_991147653"); // 2
      Undly_86_set.insert("UnderlyingIssueDate_t_991147653");
      Undly_86.add_attribute("RepoCollSecTyp", "853127505"); // 2
      Undly_86_set.insert("853127505");
      Undly_86.add_attribute("RepoTrm", "313389594"); // 2
      Undly_86_set.insert("313389594");
      Undly_86.add_attribute("RepoRt", "13374628.710000"); // 2
      Undly_86_set.insert("13374628.710000");
      Undly_86.add_attribute("Fctr", "15022593.000000"); // 2
      Undly_86_set.insert("15022593.000000");
      Undly_86.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1760667468"); // 2
      Undly_86_set.insert("UnderlyingCreditRating_t_1760667468");
      Undly_86.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_521283143"); // 2
      Undly_86_set.insert("UnderlyingInstrRegistry_t_521283143");
      Undly_86.add_attribute("Ctry", "316930715"); // 2
      Undly_86_set.insert("316930715");
      Undly_86.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1507134788"); // 2
      Undly_86_set.insert("UnderlyingStateOrProvinceOfIssue_t_1507134788");
      Undly_86.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_586426697"); // 2
      Undly_86_set.insert("UnderlyingLocaleOfIssue_t_586426697");
      Undly_86.add_attribute("Redeem", "UnderlyingRedemptionDate_t_652358671"); // 2
      Undly_86_set.insert("UnderlyingRedemptionDate_t_652358671");
      Undly_86.add_attribute("StrkPx", "18174040.340000"); // 2
      Undly_86_set.insert("18174040.340000");
      Undly_86.add_attribute("StrkCcy", "EUR"); // 2
      Undly_86_set.insert("EUR");
      Undly_86.add_attribute("OptA", "474112329"); // 2
      Undly_86_set.insert("474112329");
      Undly_86.add_attribute("Mult", "16724882.560000"); // 2
      Undly_86_set.insert("16724882.560000");
      Undly_86.add_attribute("MultTyp", "1"); // 2
      Undly_86_set.insert("1");
      Undly_86.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_86_set.insert("0");
      Undly_86.add_attribute("UOM", "MMbbl"); // 2
      Undly_86_set.insert("MMbbl");
      Undly_86.add_attribute("UOMQty", "7263866.880000"); // 2
      Undly_86_set.insert("7263866.880000");
      Undly_86.add_attribute("PxUOM", "Gal"); // 2
      Undly_86_set.insert("Gal");
      Undly_86.add_attribute("PxUOMQty", "13956609.610000"); // 2
      Undly_86_set.insert("13956609.610000");
      Undly_86.add_attribute("TmUnit", "Min"); // 2
      Undly_86_set.insert("Min");
      Undly_86.add_attribute("ExerStyle", "0"); // 2
      Undly_86_set.insert("0");
      Undly_86.add_attribute("CpnRt", "10378785.830000"); // 2
      Undly_86_set.insert("10378785.830000");
      Undly_86.add_attribute("Exch", "UnderlyingSecurityExchange_t_1778712313"); // 2
      Undly_86_set.insert("UnderlyingSecurityExchange_t_1778712313");
      Undly_86.add_attribute("Issr", "UnderlyingIssuer_t_1570890160"); // 2
      Undly_86_set.insert("UnderlyingIssuer_t_1570890160");
      Undly_86.add_attribute("EncUndIssrLen", "1952370228"); // 2
      Undly_86_set.insert("1952370228");
      Undly_86.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_213917835"); // 2
      Undly_86_set.insert("EncodedUnderlyingIssuer_t_213917835");
      Undly_86.add_attribute("Desc", "UnderlyingSecurityDesc_t_169261041"); // 2
      Undly_86_set.insert("UnderlyingSecurityDesc_t_169261041");
      Undly_86.add_attribute("EncUndSecDescLen", "1929209996"); // 2
      Undly_86_set.insert("1929209996");
      Undly_86.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1205065488"); // 2
      Undly_86_set.insert("EncodedUnderlyingSecurityDesc_t_1205065488");
      Undly_86.add_attribute("CPPgm", "UnderlyingCPProgram_t_1022388547"); // 2
      Undly_86_set.insert("UnderlyingCPProgram_t_1022388547");
      Undly_86.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_95115943"); // 2
      Undly_86_set.insert("UnderlyingCPRegType_t_95115943");
      Undly_86.add_attribute("AllocPct", "3950447.120000"); // 2
      Undly_86_set.insert("3950447.120000");
      Undly_86.add_attribute("Ccy", "EUR"); // 2
      Undly_86_set.insert("EUR");
      Undly_86.add_attribute("Qty", "9163278.550000"); // 2
      Undly_86_set.insert("9163278.550000");
      Undly_86.add_attribute("SettlTyp", "5"); // 2
      Undly_86_set.insert("5");
      Undly_86.add_attribute("CashAmt", "UnderlyingCashAmount_t_1215434551"); // 2
      Undly_86_set.insert("UnderlyingCashAmount_t_1215434551");
      Undly_86.add_attribute("CashTyp", "FIXED"); // 2
      Undly_86_set.insert("FIXED");
      Undly_86.add_attribute("Px", "13464535.860000"); // 2
      Undly_86_set.insert("13464535.860000");
      Undly_86.add_attribute("DirtPx", "8853549.370000"); // 2
      Undly_86_set.insert("8853549.370000");
      Undly_86.add_attribute("EndPx", "14997608.550000"); // 2
      Undly_86_set.insert("14997608.550000");
      Undly_86.add_attribute("StartVal", "UnderlyingStartValue_t_1322716062"); // 2
      Undly_86_set.insert("UnderlyingStartValue_t_1322716062");
      Undly_86.add_attribute("CurVal", "UnderlyingCurrentValue_t_1359467267"); // 2
      Undly_86_set.insert("UnderlyingCurrentValue_t_1359467267");
      Undly_86.add_attribute("EndVal", "UnderlyingEndValue_t_1024765463"); // 2
      Undly_86_set.insert("UnderlyingEndValue_t_1024765463");
      Undly_86.add_attribute("AdjQty", "10206791.090000"); // 2
      Undly_86_set.insert("10206791.090000");
      Undly_86.add_attribute("FxRate", "19542079.720000"); // 2
      Undly_86_set.insert("19542079.720000");
      Undly_86.add_attribute("FxRateCalc", "M"); // 2
      Undly_86_set.insert("M");
      Undly_86.add_attribute("CapValu", "UnderlyingCapValue_t_1747065797"); // 2
      Undly_86_set.insert("UnderlyingCapValue_t_1747065797");
      Undly_86.add_attribute("SetMeth", "UnderlyingSettlMethod_t_573676695"); // 2
      Undly_86_set.insert("UnderlyingSettlMethod_t_573676695");
      Undly_86.add_attribute("PutCall", "967058855"); // 2
      Undly_86_set.insert("967058855");
      all_values.push_back(Undly_86_set);
      all_compo_names.insert("Undly_86_set");

      {
        xml_element UndAID_86{"UndAID"};
        multiset<string> UndAID_86_set;
        UndAID_86.add_attribute("AltID", "UnderlyingSecurityAltID_t_360401181"); // 3
        UndAID_86_set.insert("UnderlyingSecurityAltID_t_360401181");
        UndAID_86.add_attribute("AltIDSrc", "E"); // 3
        UndAID_86_set.insert("E");
        all_values.push_back(UndAID_86_set);
        all_compo_names.insert("UndAID_86_set");

        Undly_86.add_element(UndAID_86);
      }
      {
        xml_element Stip_128{"Stip"};
        multiset<string> Stip_128_set;
        Stip_128.add_attribute("Typ", "DISCOUNT"); // 3
        Stip_128_set.insert("DISCOUNT");
        Stip_128.add_attribute("Val", "UnderlyingStipValue_t_2139113494"); // 3
        Stip_128_set.insert("UnderlyingStipValue_t_2139113494");
        all_values.push_back(Stip_128_set);
        all_compo_names.insert("Stip_128_set");

        Undly_86.add_element(Stip_128);
      }
      {
        xml_element Pty_331{"Pty"};
        multiset<string> Pty_331_set;
        Pty_331.add_attribute("ID", "UnderlyingInstrumentPartyID_t_103342002"); // 3
        Pty_331_set.insert("UnderlyingInstrumentPartyID_t_103342002");
        Pty_331.add_attribute("Src", "G"); // 3
        Pty_331_set.insert("G");
        Pty_331.add_attribute("R", "27"); // 3
        Pty_331_set.insert("27");
        all_values.push_back(Pty_331_set);
        all_compo_names.insert("Pty_331_set");

        {
          xml_element Sub_331{"Sub"};
          multiset<string> Sub_331_set;
          Sub_331.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_272603043"); // 4
          Sub_331_set.insert("UnderlyingInstrumentPartySubID_t_272603043");
          Sub_331.add_attribute("Typ", "1"); // 4
          Sub_331_set.insert("1");
          all_values.push_back(Sub_331_set);
          all_compo_names.insert("Sub_331_set");

          Pty_331.add_element(Sub_331);
        }
        Undly_86.add_element(Pty_331);
      }
      QuotReq_0.add_element(Undly_86);
    }
    {
      xml_element OrdQty_19{"OrdQty"};
      multiset<string> OrdQty_19_set;
      OrdQty_19.add_attribute("Qty", "14106131.700000"); // 2
      OrdQty_19_set.insert("14106131.700000");
      OrdQty_19.add_attribute("Cash", "12949915.900000"); // 2
      OrdQty_19_set.insert("12949915.900000");
      OrdQty_19.add_attribute("Pct", "16866663.100000"); // 2
      OrdQty_19_set.insert("16866663.100000");
      OrdQty_19.add_attribute("RndDir", "2"); // 2
      OrdQty_19_set.insert("2");
      OrdQty_19.add_attribute("RndMod", "16721557.900000"); // 2
      OrdQty_19_set.insert("16721557.900000");
      all_values.push_back(OrdQty_19_set);
      all_compo_names.insert("OrdQty_19_set");

      QuotReq_0.add_element(OrdQty_19);
    }
    {
      xml_element RtSrc_11{"RtSrc"};
      multiset<string> RtSrc_11_set;
      RtSrc_11.add_attribute("RtSrc", "1"); // 2
      RtSrc_11_set.insert("1");
      RtSrc_11.add_attribute("RtSrcTyp", "1"); // 2
      RtSrc_11_set.insert("1");
      RtSrc_11.add_attribute("RefPg", "ReferencePage_t_218767057"); // 2
      RtSrc_11_set.insert("ReferencePage_t_218767057");
      all_values.push_back(RtSrc_11_set);
      all_compo_names.insert("RtSrc_11_set");

      QuotReq_0.add_element(RtSrc_11);
    }
    {
      xml_element Stip_129{"Stip"};
      multiset<string> Stip_129_set;
      Stip_129.add_attribute("Typ", "ISSUER"); // 2
      Stip_129_set.insert("ISSUER");
      Stip_129.add_attribute("Val", "StipulationValue_t_2077256641"); // 2
      Stip_129_set.insert("StipulationValue_t_2077256641");
      all_values.push_back(Stip_129_set);
      all_compo_names.insert("Stip_129_set");

      QuotReq_0.add_element(Stip_129);
    }
    {
      xml_element Leg_65{"Leg"};
      multiset<string> Leg_65_set;
      Leg_65.add_attribute("Qty", "15652206.430000"); // 2
      Leg_65_set.insert("15652206.430000");
      Leg_65.add_attribute("OrdQty", "13482719.140000"); // 2
      Leg_65_set.insert("13482719.140000");
      Leg_65.add_attribute("SwapTyp", "2"); // 2
      Leg_65_set.insert("2");
      Leg_65.add_attribute("SettlTyp", "5"); // 2
      Leg_65_set.insert("5");
      Leg_65.add_attribute("SettlDt", "LegSettlDate_t_560255533"); // 2
      Leg_65_set.insert("LegSettlDate_t_560255533");
      Leg_65.add_attribute("RefID", "LegRefID_t_306815664"); // 2
      Leg_65_set.insert("LegRefID_t_306815664");
      all_values.push_back(Leg_65_set);
      all_compo_names.insert("Leg_65_set");

      {
        xml_element Leg_66{"Leg"};
        multiset<string> Leg_66_set;
        Leg_66.add_attribute("Sym", "LegSymbol_t_1761132166"); // 3
        Leg_66_set.insert("LegSymbol_t_1761132166");
        Leg_66.add_attribute("Sfx", "WI"); // 3
        Leg_66_set.insert("WI");
        Leg_66.add_attribute("ID", "LegSecurityID_t_2025697206"); // 3
        Leg_66_set.insert("LegSecurityID_t_2025697206");
        Leg_66.add_attribute("Src", "H"); // 3
        Leg_66_set.insert("H");
        Leg_66.add_attribute("Prod", "13"); // 3
        Leg_66_set.insert("13");
        Leg_66.add_attribute("CFI", "LegCFICode_t_845272413"); // 3
        Leg_66_set.insert("LegCFICode_t_845272413");
        Leg_66.add_attribute("SecTyp", "SPCLA"); // 3
        Leg_66_set.insert("SPCLA");
        Leg_66.add_attribute("SecSubTyp", "LegSecuritySubType_t_1620592041"); // 3
        Leg_66_set.insert("LegSecuritySubType_t_1620592041");
        Leg_66.add_attribute("MMY", "702726204"); // 3
        Leg_66_set.insert("702726204");
        Leg_66.add_attribute("Mat", "LegMaturityDate_t_1712745344"); // 3
        Leg_66_set.insert("LegMaturityDate_t_1712745344");
        Leg_66.add_attribute("MatTm", "1723934043"); // 3
        Leg_66_set.insert("1723934043");
        Leg_66.add_attribute("CpnPmt", "LegCouponPaymentDate_t_365066575"); // 3
        Leg_66_set.insert("LegCouponPaymentDate_t_365066575");
        Leg_66.add_attribute("Issued", "LegIssueDate_t_1918293026"); // 3
        Leg_66_set.insert("LegIssueDate_t_1918293026");
        Leg_66.add_attribute("RepoCollSecTyp", "1996537087"); // 3
        Leg_66_set.insert("1996537087");
        Leg_66.add_attribute("RepoTrm", "1956616942"); // 3
        Leg_66_set.insert("1956616942");
        Leg_66.add_attribute("RepoRt", "11814225.480000"); // 3
        Leg_66_set.insert("11814225.480000");
        Leg_66.add_attribute("Fctr", "11440450.290000"); // 3
        Leg_66_set.insert("11440450.290000");
        Leg_66.add_attribute("CrdRtg", "LegCreditRating_t_1495799605"); // 3
        Leg_66_set.insert("LegCreditRating_t_1495799605");
        Leg_66.add_attribute("Rgstry", "LegInstrRegistry_t_839596783"); // 3
        Leg_66_set.insert("LegInstrRegistry_t_839596783");
        Leg_66.add_attribute("Ctry", "668717171"); // 3
        Leg_66_set.insert("668717171");
        Leg_66.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_743282030"); // 3
        Leg_66_set.insert("LegStateOrProvinceOfIssue_t_743282030");
        Leg_66.add_attribute("Lcl", "LegLocaleOfIssue_t_1414098872"); // 3
        Leg_66_set.insert("LegLocaleOfIssue_t_1414098872");
        Leg_66.add_attribute("Redeem", "LegRedemptionDate_t_887484228"); // 3
        Leg_66_set.insert("LegRedemptionDate_t_887484228");
        Leg_66.add_attribute("Strk", "12061990.070000"); // 3
        Leg_66_set.insert("12061990.070000");
        Leg_66.add_attribute("StrkCcy", "USD"); // 3
        Leg_66_set.insert("USD");
        Leg_66.add_attribute("OptA", "406987273"); // 3
        Leg_66_set.insert("406987273");
        Leg_66.add_attribute("Cmult", "6259220.670000"); // 3
        Leg_66_set.insert("6259220.670000");
        Leg_66.add_attribute("MultTyp", "2"); // 3
        Leg_66_set.insert("2");
        Leg_66.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_66_set.insert("1");
        Leg_66.add_attribute("UOM", "Gal"); // 3
        Leg_66_set.insert("Gal");
        Leg_66.add_attribute("UOMQty", "6593228.000000"); // 3
        Leg_66_set.insert("6593228.000000");
        Leg_66.add_attribute("PxUOM", "lbs"); // 3
        Leg_66_set.insert("lbs");
        Leg_66.add_attribute("PxUOMQty", "8109512.900000"); // 3
        Leg_66_set.insert("8109512.900000");
        Leg_66.add_attribute("TmUnit", "Yr"); // 3
        Leg_66_set.insert("Yr");
        Leg_66.add_attribute("ExerStyle", "0"); // 3
        Leg_66_set.insert("0");
        Leg_66.add_attribute("CpnRt", "16562237.030000"); // 3
        Leg_66_set.insert("16562237.030000");
        Leg_66.add_attribute("Exch", "LegSecurityExchange_t_1593668965"); // 3
        Leg_66_set.insert("LegSecurityExchange_t_1593668965");
        Leg_66.add_attribute("Issr", "LegIssuer_t_1747987608"); // 3
        Leg_66_set.insert("LegIssuer_t_1747987608");
        Leg_66.add_attribute("EncLegIssrLen", "211466259"); // 3
        Leg_66_set.insert("211466259");
        Leg_66.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1158930661"); // 3
        Leg_66_set.insert("EncodedLegIssuer_t_1158930661");
        Leg_66.add_attribute("Desc", "LegSecurityDesc_t_1324438004"); // 3
        Leg_66_set.insert("LegSecurityDesc_t_1324438004");
        Leg_66.add_attribute("EncLegSecDescLen", "576532834"); // 3
        Leg_66_set.insert("576532834");
        Leg_66.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_929740039"); // 3
        Leg_66_set.insert("EncodedLegSecurityDesc_t_929740039");
        Leg_66.add_attribute("RatioQty", "11734914.430000"); // 3
        Leg_66_set.insert("11734914.430000");
        Leg_66.add_attribute("Side", "2"); // 3
        Leg_66_set.insert("2");
        Leg_66.add_attribute("Ccy", "GBP"); // 3
        Leg_66_set.insert("GBP");
        Leg_66.add_attribute("Pool", "LegPool_t_1881465734"); // 3
        Leg_66_set.insert("LegPool_t_1881465734");
        Leg_66.add_attribute("Dated", "LegDatedDate_t_803275723"); // 3
        Leg_66_set.insert("LegDatedDate_t_803275723");
        Leg_66.add_attribute("CSetMo", "838769996"); // 3
        Leg_66_set.insert("838769996");
        Leg_66.add_attribute("IntAcrl", "LegInterestAccrualDate_t_477264116"); // 3
        Leg_66_set.insert("LegInterestAccrualDate_t_477264116");
        Leg_66.add_attribute("PutCall", "69890947"); // 3
        Leg_66_set.insert("69890947");
        Leg_66.add_attribute("LegOptionRatio", "17262542.240000"); // 3
        Leg_66_set.insert("17262542.240000");
        Leg_66.add_attribute("Px", "16834631.230000"); // 3
        Leg_66_set.insert("16834631.230000");
        all_values.push_back(Leg_66_set);
        all_compo_names.insert("Leg_66_set");

        {
          xml_element LegAID_65{"LegAID"};
          multiset<string> LegAID_65_set;
          LegAID_65.add_attribute("SecAltID", "LegSecurityAltID_t_1413762813"); // 4
          LegAID_65_set.insert("LegSecurityAltID_t_1413762813");
          LegAID_65.add_attribute("SecAltIDSrc", "3"); // 4
          LegAID_65_set.insert("3");
          all_values.push_back(LegAID_65_set);
          all_compo_names.insert("LegAID_65_set");

          Leg_66.add_element(LegAID_65);
        }
        Leg_65.add_element(Leg_66);
      }
      {
        xml_element Stip_130{"Stip"};
        multiset<string> Stip_130_set;
        Stip_130.add_attribute("StipTyp", "SALESCREDITOVR"); // 3
        Stip_130_set.insert("SALESCREDITOVR");
        Stip_130.add_attribute("StipVal", "LegStipulationValue_t_2039684880"); // 3
        Stip_130_set.insert("LegStipulationValue_t_2039684880");
        all_values.push_back(Stip_130_set);
        all_compo_names.insert("Stip_130_set");

        Leg_65.add_element(Stip_130);
      }
      {
        xml_element Pty_332{"Pty"};
        multiset<string> Pty_332_set;
        Pty_332.add_attribute("ID", "NestedPartyID_t_929666082"); // 3
        Pty_332_set.insert("NestedPartyID_t_929666082");
        Pty_332.add_attribute("Src", "9"); // 3
        Pty_332_set.insert("9");
        Pty_332.add_attribute("R", "82"); // 3
        Pty_332_set.insert("82");
        all_values.push_back(Pty_332_set);
        all_compo_names.insert("Pty_332_set");

        {
          xml_element Sub_332{"Sub"};
          multiset<string> Sub_332_set;
          Sub_332.add_attribute("ID", "NestedPartySubID_t_1588988882"); // 4
          Sub_332_set.insert("NestedPartySubID_t_1588988882");
          Sub_332.add_attribute("Typ", "22"); // 4
          Sub_332_set.insert("22");
          all_values.push_back(Sub_332_set);
          all_compo_names.insert("Sub_332_set");

          Pty_332.add_element(Sub_332);
        }
        Leg_65.add_element(Pty_332);
      }
      {
        xml_element BnchmkCurve_3{"BnchmkCurve"};
        multiset<string> BnchmkCurve_3_set;
        BnchmkCurve_3.add_attribute("Ccy", "JPY"); // 3
        BnchmkCurve_3_set.insert("JPY");
        BnchmkCurve_3.add_attribute("Name", "Pfandbriefe"); // 3
        BnchmkCurve_3_set.insert("Pfandbriefe");
        BnchmkCurve_3.add_attribute("Point", "LegBenchmarkCurvePoint_t_1144630309"); // 3
        BnchmkCurve_3_set.insert("LegBenchmarkCurvePoint_t_1144630309");
        BnchmkCurve_3.add_attribute("Px", "9077276.670000"); // 3
        BnchmkCurve_3_set.insert("9077276.670000");
        BnchmkCurve_3.add_attribute("PxTyp", "1972331745"); // 3
        BnchmkCurve_3_set.insert("1972331745");
        all_values.push_back(BnchmkCurve_3_set);
        all_compo_names.insert("BnchmkCurve_3_set");

        Leg_65.add_element(BnchmkCurve_3);
      }
      QuotReq_0.add_element(Leg_65);
    }
    {
      xml_element QuotQual_2{"QuotQual"};
      multiset<string> QuotQual_2_set;
      QuotQual_2.add_attribute("Qual", "L"); // 2
      QuotQual_2_set.insert("L");
      all_values.push_back(QuotQual_2_set);
      all_compo_names.insert("QuotQual_2_set");

      QuotReq_0.add_element(QuotQual_2);
    }
    {
      xml_element SprdBnchmkCurve_24{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_24_set;
      SprdBnchmkCurve_24.add_attribute("Spread", "20666583.290000"); // 2
      SprdBnchmkCurve_24_set.insert("20666583.290000");
      SprdBnchmkCurve_24.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_24_set.insert("CHF");
      SprdBnchmkCurve_24.add_attribute("Name", "LIBID"); // 2
      SprdBnchmkCurve_24_set.insert("LIBID");
      SprdBnchmkCurve_24.add_attribute("Point", "BenchmarkCurvePoint_t_175293896"); // 2
      SprdBnchmkCurve_24_set.insert("BenchmarkCurvePoint_t_175293896");
      SprdBnchmkCurve_24.add_attribute("Px", "1708118.840000"); // 2
      SprdBnchmkCurve_24_set.insert("1708118.840000");
      SprdBnchmkCurve_24.add_attribute("PxTyp", "3"); // 2
      SprdBnchmkCurve_24_set.insert("3");
      SprdBnchmkCurve_24.add_attribute("SecID", "BenchmarkSecurityID_t_345346720"); // 2
      SprdBnchmkCurve_24_set.insert("BenchmarkSecurityID_t_345346720");
      SprdBnchmkCurve_24.add_attribute("SecIDSrc", "7"); // 2
      SprdBnchmkCurve_24_set.insert("7");
      all_values.push_back(SprdBnchmkCurve_24_set);
      all_compo_names.insert("SprdBnchmkCurve_24_set");

      QuotReq_0.add_element(SprdBnchmkCurve_24);
    }
    {
      xml_element Yield_19{"Yield"};
      multiset<string> Yield_19_set;
      Yield_19.add_attribute("Typ", "AVGMATURITY"); // 2
      Yield_19_set.insert("AVGMATURITY");
      Yield_19.add_attribute("Yld", "11841167.160000"); // 2
      Yield_19_set.insert("11841167.160000");
      Yield_19.add_attribute("CalcDt", "YieldCalcDate_t_382058087"); // 2
      Yield_19_set.insert("YieldCalcDate_t_382058087");
      Yield_19.add_attribute("RedDt", "YieldRedemptionDate_t_1685760331"); // 2
      Yield_19_set.insert("YieldRedemptionDate_t_1685760331");
      Yield_19.add_attribute("RedPx", "7628872.930000"); // 2
      Yield_19_set.insert("7628872.930000");
      Yield_19.add_attribute("RedPxTyp", "5"); // 2
      Yield_19_set.insert("5");
      all_values.push_back(Yield_19_set);
      all_compo_names.insert("Yield_19_set");

      QuotReq_0.add_element(Yield_19);
    }
    {
      xml_element Pty_333{"Pty"};
      multiset<string> Pty_333_set;
      Pty_333.add_attribute("ID", "PartyID_t_952039496"); // 2
      Pty_333_set.insert("PartyID_t_952039496");
      Pty_333.add_attribute("Src", "8"); // 2
      Pty_333_set.insert("8");
      Pty_333.add_attribute("R", "81"); // 2
      Pty_333_set.insert("81");
      all_values.push_back(Pty_333_set);
      all_compo_names.insert("Pty_333_set");

      {
        xml_element Sub_333{"Sub"};
        multiset<string> Sub_333_set;
        Sub_333.add_attribute("ID", "PartySubID_t_844240729"); // 3
        Sub_333_set.insert("PartySubID_t_844240729");
        Sub_333.add_attribute("Typ", "16"); // 3
        Sub_333_set.insert("16");
        all_values.push_back(Sub_333_set);
        all_compo_names.insert("Sub_333_set");

        Pty_333.add_element(Sub_333);
      }
      QuotReq_0.add_element(Pty_333);
    }
    elt.add_element(QuotReq_0);
  } // end QuotReq
  { // QuotReq
    xml_element QuotReq_1{"QuotReq"};
    multiset<string> QuotReq_1_set;
    QuotReq_1.add_attribute("PrevClsPx", "7712138.650000"); // 1
    QuotReq_1_set.insert("7712138.650000");
    QuotReq_1.add_attribute("ReqTyp", "2"); // 1
    QuotReq_1_set.insert("2");
    QuotReq_1.add_attribute("Typ", "1"); // 1
    QuotReq_1_set.insert("1");
    QuotReq_1.add_attribute("SesID", "2"); // 1
    QuotReq_1_set.insert("2");
    QuotReq_1.add_attribute("SesSub", "3"); // 1
    QuotReq_1_set.insert("3");
    QuotReq_1.add_attribute("OrignDt", "TradeOriginationDate_t_332109111"); // 1
    QuotReq_1_set.insert("TradeOriginationDate_t_332109111");
    QuotReq_1.add_attribute("Side", "C"); // 1
    QuotReq_1_set.insert("C");
    QuotReq_1.add_attribute("QtyTyp", "1"); // 1
    QuotReq_1_set.insert("1");
    QuotReq_1.add_attribute("MinQty", "12398367.790000"); // 1
    QuotReq_1_set.insert("12398367.790000");
    QuotReq_1.add_attribute("SettlTyp", "4"); // 1
    QuotReq_1_set.insert("4");
    QuotReq_1.add_attribute("SettlDt", "SettlDate_t_1510829529"); // 1
    QuotReq_1_set.insert("SettlDate_t_1510829529");
    QuotReq_1.add_attribute("SettlDt2", "SettlDate2_t_1159011460"); // 1
    QuotReq_1_set.insert("SettlDate2_t_1159011460");
    QuotReq_1.add_attribute("Qty2", "20666407.690000"); // 1
    QuotReq_1_set.insert("20666407.690000");
    QuotReq_1.add_attribute("Ccy", "GBP"); // 1
    QuotReq_1_set.insert("GBP");
    QuotReq_1.add_attribute("SettlCcy", "EUR"); // 1
    QuotReq_1_set.insert("EUR");
    QuotReq_1.add_attribute("Acct", "Account_t_673036193"); // 1
    QuotReq_1_set.insert("Account_t_673036193");
    QuotReq_1.add_attribute("AcctIDSrc", "1"); // 1
    QuotReq_1_set.insert("1");
    QuotReq_1.add_attribute("AcctTyp", "8"); // 1
    QuotReq_1_set.insert("8");
    QuotReq_1.add_attribute("QuotPxTyp", "8"); // 1
    QuotReq_1_set.insert("8");
    QuotReq_1.add_attribute("OrdTyp", "7"); // 1
    QuotReq_1_set.insert("7");
    QuotReq_1.add_attribute("ValidUntilTm", "ValidUntilTime_t_1753639227"); // 1
    QuotReq_1_set.insert("ValidUntilTime_t_1753639227");
    QuotReq_1.add_attribute("ExpireTm", "ExpireTime_t_1827182259"); // 1
    QuotReq_1_set.insert("ExpireTime_t_1827182259");
    QuotReq_1.add_attribute("TxnTm", "TransactTime_t_239318099"); // 1
    QuotReq_1_set.insert("TransactTime_t_239318099");
    QuotReq_1.add_attribute("PxTyp", "15"); // 1
    QuotReq_1_set.insert("15");
    QuotReq_1.add_attribute("Px", "6317381.080000"); // 1
    QuotReq_1_set.insert("6317381.080000");
    QuotReq_1.add_attribute("Px2", "8861971.930000"); // 1
    QuotReq_1_set.insert("8861971.930000");
    all_values.push_back(QuotReq_1_set);
    all_compo_names.insert("QuotReq_1_set");

    {
      xml_element Instrmt_61{"Instrmt"};
      multiset<string> Instrmt_61_set;
      Instrmt_61.add_attribute("Sym", "Symbol_t_1532681100"); // 2
      Instrmt_61_set.insert("Symbol_t_1532681100");
      Instrmt_61.add_attribute("Sfx", "WI"); // 2
      Instrmt_61_set.insert("WI");
      Instrmt_61.add_attribute("ID", "SecurityID_t_315258720"); // 2
      Instrmt_61_set.insert("SecurityID_t_315258720");
      Instrmt_61.add_attribute("Src", "9"); // 2
      Instrmt_61_set.insert("9");
      Instrmt_61.add_attribute("Prod", "6"); // 2
      Instrmt_61_set.insert("6");
      Instrmt_61.add_attribute("ProdCmplx", "ProductComplex_t_1333309130"); // 2
      Instrmt_61_set.insert("ProductComplex_t_1333309130");
      Instrmt_61.add_attribute("SecGrp", "SecurityGroup_t_1024573753"); // 2
      Instrmt_61_set.insert("SecurityGroup_t_1024573753");
      Instrmt_61.add_attribute("CFI", "CFICode_t_7777533"); // 2
      Instrmt_61_set.insert("CFICode_t_7777533");
      Instrmt_61.add_attribute("SecTyp", "EUFRN"); // 2
      Instrmt_61_set.insert("EUFRN");
      Instrmt_61.add_attribute("SubTyp", "SecuritySubType_t_2117080324"); // 2
      Instrmt_61_set.insert("SecuritySubType_t_2117080324");
      Instrmt_61.add_attribute("MMY", "162510493"); // 2
      Instrmt_61_set.insert("162510493");
      Instrmt_61.add_attribute("MatDt", "MaturityDate_t_757771372"); // 2
      Instrmt_61_set.insert("MaturityDate_t_757771372");
      Instrmt_61.add_attribute("MatTm", "886951345"); // 2
      Instrmt_61_set.insert("886951345");
      Instrmt_61.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1673340023"); // 2
      Instrmt_61_set.insert("SettleOnOpenFlag_t_1673340023");
      Instrmt_61.add_attribute("AsgnMeth", "1916782832"); // 2
      Instrmt_61_set.insert("1916782832");
      Instrmt_61.add_attribute("Status", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("CpnPmt", "CouponPaymentDate_t_821831660"); // 2
      Instrmt_61_set.insert("CouponPaymentDate_t_821831660");
      Instrmt_61.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_61_set.insert("MR");
      Instrmt_61.add_attribute("Snrty", "SB"); // 2
      Instrmt_61_set.insert("SB");
      Instrmt_61.add_attribute("NotlPctOut", "1411351.810000"); // 2
      Instrmt_61_set.insert("1411351.810000");
      Instrmt_61.add_attribute("OrigNotlPctOut", "3027779.100000"); // 2
      Instrmt_61_set.insert("3027779.100000");
      Instrmt_61.add_attribute("AttchPnt", "13403572.220000"); // 2
      Instrmt_61_set.insert("13403572.220000");
      Instrmt_61.add_attribute("DetchPnt", "15127163.210000"); // 2
      Instrmt_61_set.insert("15127163.210000");
      Instrmt_61.add_attribute("Issued", "IssueDate_t_444199838"); // 2
      Instrmt_61_set.insert("IssueDate_t_444199838");
      Instrmt_61.add_attribute("RepoCollSecTyp", "816788028"); // 2
      Instrmt_61_set.insert("816788028");
      Instrmt_61.add_attribute("RepoTrm", "1118871900"); // 2
      Instrmt_61_set.insert("1118871900");
      Instrmt_61.add_attribute("RepoRt", "1238984.500000"); // 2
      Instrmt_61_set.insert("1238984.500000");
      Instrmt_61.add_attribute("Fctr", "10561061.280000"); // 2
      Instrmt_61_set.insert("10561061.280000");
      Instrmt_61.add_attribute("CrdRtg", "CreditRating_t_643065042"); // 2
      Instrmt_61_set.insert("CreditRating_t_643065042");
      Instrmt_61.add_attribute("Rgstry", "InstrRegistry_t_755636558"); // 2
      Instrmt_61_set.insert("InstrRegistry_t_755636558");
      Instrmt_61.add_attribute("IssuCtry", "1942303321"); // 2
      Instrmt_61_set.insert("1942303321");
      Instrmt_61.add_attribute("StPrv", "StateOrProvinceOfIssue_t_28262494"); // 2
      Instrmt_61_set.insert("StateOrProvinceOfIssue_t_28262494");
      Instrmt_61.add_attribute("Lcl", "LocaleOfIssue_t_84131747"); // 2
      Instrmt_61_set.insert("LocaleOfIssue_t_84131747");
      Instrmt_61.add_attribute("Redeem", "RedemptionDate_t_110078393"); // 2
      Instrmt_61_set.insert("RedemptionDate_t_110078393");
      Instrmt_61.add_attribute("StrkPx", "1846738.120000"); // 2
      Instrmt_61_set.insert("1846738.120000");
      Instrmt_61.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_61_set.insert("EUR");
      Instrmt_61.add_attribute("StrkMult", "12092475.650000"); // 2
      Instrmt_61_set.insert("12092475.650000");
      Instrmt_61.add_attribute("StrkValu", "10895841.620000"); // 2
      Instrmt_61_set.insert("10895841.620000");
      Instrmt_61.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_61_set.insert("2");
      Instrmt_61.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_61_set.insert("3");
      Instrmt_61.add_attribute("StrkPxBndryPrcsn", "12520946.550000"); // 2
      Instrmt_61_set.insert("12520946.550000");
      Instrmt_61.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_61_set.insert("2");
      Instrmt_61.add_attribute("OptAt", "2065795587"); // 2
      Instrmt_61_set.insert("2065795587");
      Instrmt_61.add_attribute("Mult", "7779510.300000"); // 2
      Instrmt_61_set.insert("7779510.300000");
      Instrmt_61.add_attribute("MultTyp", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("MinPxIncr", "15997826.900000"); // 2
      Instrmt_61_set.insert("15997826.900000");
      Instrmt_61.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1118134391"); // 2
      Instrmt_61_set.insert("MinPriceIncrementAmount_t_1118134391");
      Instrmt_61.add_attribute("UOM", "MWh"); // 2
      Instrmt_61_set.insert("MWh");
      Instrmt_61.add_attribute("UOMQty", "17409178.720000"); // 2
      Instrmt_61_set.insert("17409178.720000");
      Instrmt_61.add_attribute("PxUOM", "Gal"); // 2
      Instrmt_61_set.insert("Gal");
      Instrmt_61.add_attribute("PxUOMQty", "8178534.630000"); // 2
      Instrmt_61_set.insert("8178534.630000");
      Instrmt_61.add_attribute("SettlMeth", "P"); // 2
      Instrmt_61_set.insert("P");
      Instrmt_61.add_attribute("ExerStyle", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_61_set.insert("2");
      Instrmt_61.add_attribute("OptPayAmt", "OptPayoutAmount_t_77538798"); // 2
      Instrmt_61_set.insert("OptPayoutAmount_t_77538798");
      Instrmt_61.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_61_set.insert("INX");
      Instrmt_61.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_61_set.insert("FUTDA");
      Instrmt_61.add_attribute("ListMeth", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("CapPx", "5971634.990000"); // 2
      Instrmt_61_set.insert("5971634.990000");
      Instrmt_61.add_attribute("FlrPx", "3380836.450000"); // 2
      Instrmt_61_set.insert("3380836.450000");
      Instrmt_61.add_attribute("PutCall", "0"); // 2
      Instrmt_61_set.insert("0");
      Instrmt_61.add_attribute("FlexInd", "true"); // 2
      Instrmt_61_set.insert("true");
      Instrmt_61.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_61_set.insert("true");
      Instrmt_61.add_attribute("TmUnit", "Min"); // 2
      Instrmt_61_set.insert("Min");
      Instrmt_61.add_attribute("CpnRt", "17631018.750000"); // 2
      Instrmt_61_set.insert("17631018.750000");
      Instrmt_61.add_attribute("Exch", "SecurityExchange_t_1891549562"); // 2
      Instrmt_61_set.insert("SecurityExchange_t_1891549562");
      Instrmt_61.add_attribute("PosLmt", "2142787712"); // 2
      Instrmt_61_set.insert("2142787712");
      Instrmt_61.add_attribute("NTPosLmt", "705202389"); // 2
      Instrmt_61_set.insert("705202389");
      Instrmt_61.add_attribute("Issr", "Issuer_t_705388031"); // 2
      Instrmt_61_set.insert("Issuer_t_705388031");
      Instrmt_61.add_attribute("EncIssrLen", "1174148306"); // 2
      Instrmt_61_set.insert("1174148306");
      Instrmt_61.add_attribute("EncIssr", "EncodedIssuer_t_1957297045"); // 2
      Instrmt_61_set.insert("EncodedIssuer_t_1957297045");
      Instrmt_61.add_attribute("Desc", "SecurityDesc_t_276997872"); // 2
      Instrmt_61_set.insert("SecurityDesc_t_276997872");
      Instrmt_61.add_attribute("EncSecDescLen", "1092460245"); // 2
      Instrmt_61_set.insert("1092460245");
      Instrmt_61.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_587764427"); // 2
      Instrmt_61_set.insert("EncodedSecurityDesc_t_587764427");
      Instrmt_61.add_attribute("Pool", "Pool_t_1765390546"); // 2
      Instrmt_61_set.insert("Pool_t_1765390546");
      Instrmt_61.add_attribute("CSetMo", "1816880651"); // 2
      Instrmt_61_set.insert("1816880651");
      Instrmt_61.add_attribute("CPPgm", "1"); // 2
      Instrmt_61_set.insert("1");
      Instrmt_61.add_attribute("CPRegT", "CPRegType_t_736041289"); // 2
      Instrmt_61_set.insert("CPRegType_t_736041289");
      Instrmt_61.add_attribute("Dated", "DatedDate_t_1294376892"); // 2
      Instrmt_61_set.insert("DatedDate_t_1294376892");
      Instrmt_61.add_attribute("IntAcrl", "InterestAccrualDate_t_1780981342"); // 2
      Instrmt_61_set.insert("InterestAccrualDate_t_1780981342");
      all_values.push_back(Instrmt_61_set);
      all_compo_names.insert("Instrmt_61_set");

      {
        xml_element AID_64{"AID"};
        multiset<string> AID_64_set;
        AID_64.add_attribute("AltID", "SecurityAltID_t_9469942"); // 3
        AID_64_set.insert("SecurityAltID_t_9469942");
        AID_64.add_attribute("AltIDSrc", "H"); // 3
        AID_64_set.insert("H");
        all_values.push_back(AID_64_set);
        all_compo_names.insert("AID_64_set");

        Instrmt_61.add_element(AID_64);
      }
      {
        xml_element SecXML_64{"SecXML"};
        multiset<string> SecXML_64_set;
        SecXML_64.add_attribute("Schema", "SecurityXMLSchema_t_739648239"); // 3
        SecXML_64_set.insert("SecurityXMLSchema_t_739648239");
        all_values.push_back(SecXML_64_set);
        all_compo_names.insert("SecXML_64_set");

        Instrmt_61.add_element(SecXML_64);
      }
      {
        xml_element Evnt_64{"Evnt"};
        multiset<string> Evnt_64_set;
        Evnt_64.add_attribute("EventTyp", "3"); // 3
        Evnt_64_set.insert("3");
        Evnt_64.add_attribute("Dt", "EventDate_t_1599388200"); // 3
        Evnt_64_set.insert("EventDate_t_1599388200");
        Evnt_64.add_attribute("Tm", "EventTime_t_817187037"); // 3
        Evnt_64_set.insert("EventTime_t_817187037");
        Evnt_64.add_attribute("Px", "17161090.230000"); // 3
        Evnt_64_set.insert("17161090.230000");
        Evnt_64.add_attribute("Txt", "EventText_t_2142652172"); // 3
        Evnt_64_set.insert("EventText_t_2142652172");
        all_values.push_back(Evnt_64_set);
        all_compo_names.insert("Evnt_64_set");

        Instrmt_61.add_element(Evnt_64);
      }
      {
        xml_element Pty_334{"Pty"};
        multiset<string> Pty_334_set;
        Pty_334.add_attribute("ID", "InstrumentPartyID_t_1537790877"); // 3
        Pty_334_set.insert("InstrumentPartyID_t_1537790877");
        Pty_334.add_attribute("Src", "2"); // 3
        Pty_334_set.insert("2");
        Pty_334.add_attribute("R", "63"); // 3
        Pty_334_set.insert("63");
        all_values.push_back(Pty_334_set);
        all_compo_names.insert("Pty_334_set");

        {
          xml_element Sub_334{"Sub"};
          multiset<string> Sub_334_set;
          Sub_334.add_attribute("ID", "InstrumentPartySubID_t_139173564"); // 4
          Sub_334_set.insert("InstrumentPartySubID_t_139173564");
          Sub_334.add_attribute("Typ", "27"); // 4
          Sub_334_set.insert("27");
          all_values.push_back(Sub_334_set);
          all_compo_names.insert("Sub_334_set");

          Pty_334.add_element(Sub_334);
        }
        Instrmt_61.add_element(Pty_334);
      }
      {
        xml_element CmplxEvnt_61{"CmplxEvnt"};
        multiset<string> CmplxEvnt_61_set;
        CmplxEvnt_61.add_attribute("Typ", "8"); // 3
        CmplxEvnt_61_set.insert("8");
        CmplxEvnt_61.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1072713711"); // 3
        CmplxEvnt_61_set.insert("ComplexOptPayoutAmount_t_1072713711");
        CmplxEvnt_61.add_attribute("Px", "4627023.490000"); // 3
        CmplxEvnt_61_set.insert("4627023.490000");
        CmplxEvnt_61.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_61_set.insert("2");
        CmplxEvnt_61.add_attribute("PxBndryPrcsn", "10680177.750000"); // 3
        CmplxEvnt_61_set.insert("10680177.750000");
        CmplxEvnt_61.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_61_set.insert("2");
        CmplxEvnt_61.add_attribute("Cond", "1"); // 3
        CmplxEvnt_61_set.insert("1");
        all_values.push_back(CmplxEvnt_61_set);
        all_compo_names.insert("CmplxEvnt_61_set");

        {
          xml_element EvntDts_61{"EvntDts"};
          multiset<string> EvntDts_61_set;
          EvntDts_61.add_attribute("StartDt", "ComplexEventStartDate_t_94682434"); // 4
          EvntDts_61_set.insert("ComplexEventStartDate_t_94682434");
          EvntDts_61.add_attribute("EndDt", "ComplexEventEndDate_t_977718135"); // 4
          EvntDts_61_set.insert("ComplexEventEndDate_t_977718135");
          all_values.push_back(EvntDts_61_set);
          all_compo_names.insert("EvntDts_61_set");

          {
            xml_element EvntTms_61{"EvntTms"};
            multiset<string> EvntTms_61_set;
            EvntTms_61.add_attribute("StartTm", "1507866025"); // 5
            EvntTms_61_set.insert("1507866025");
            EvntTms_61.add_attribute("EndTm", "1187142679"); // 5
            EvntTms_61_set.insert("1187142679");
            all_values.push_back(EvntTms_61_set);
            all_compo_names.insert("EvntTms_61_set");

            EvntDts_61.add_element(EvntTms_61);
          }
          CmplxEvnt_61.add_element(EvntDts_61);
        }
        Instrmt_61.add_element(CmplxEvnt_61);
      }
      QuotReq_1.add_element(Instrmt_61);
    }
    {
      xml_element FinDetls_19{"FinDetls"};
      multiset<string> FinDetls_19_set;
      FinDetls_19.add_attribute("AgmtDesc", "AgreementDesc_t_1565482563"); // 2
      FinDetls_19_set.insert("AgreementDesc_t_1565482563");
      FinDetls_19.add_attribute("AgmtID", "AgreementID_t_1125772923"); // 2
      FinDetls_19_set.insert("AgreementID_t_1125772923");
      FinDetls_19.add_attribute("AgmtDt", "AgreementDate_t_856539682"); // 2
      FinDetls_19_set.insert("AgreementDate_t_856539682");
      FinDetls_19.add_attribute("AgmtCcy", "CAN"); // 2
      FinDetls_19_set.insert("CAN");
      FinDetls_19.add_attribute("TrmTyp", "4"); // 2
      FinDetls_19_set.insert("4");
      FinDetls_19.add_attribute("StartDt", "StartDate_t_1239043727"); // 2
      FinDetls_19_set.insert("StartDate_t_1239043727");
      FinDetls_19.add_attribute("EndDt", "EndDate_t_1871284155"); // 2
      FinDetls_19_set.insert("EndDate_t_1871284155");
      FinDetls_19.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_19_set.insert("3");
      FinDetls_19.add_attribute("MgnRatio", "19786919.660000"); // 2
      FinDetls_19_set.insert("19786919.660000");
      all_values.push_back(FinDetls_19_set);
      all_compo_names.insert("FinDetls_19_set");

      QuotReq_1.add_element(FinDetls_19);
    }
    {
      xml_element Undly_87{"Undly"};
      multiset<string> Undly_87_set;
      Undly_87.add_attribute("Sym", "UnderlyingSymbol_t_1598382589"); // 2
      Undly_87_set.insert("UnderlyingSymbol_t_1598382589");
      Undly_87.add_attribute("Sfx", "WI"); // 2
      Undly_87_set.insert("WI");
      Undly_87.add_attribute("ID", "UnderlyingSecurityID_t_648395356"); // 2
      Undly_87_set.insert("UnderlyingSecurityID_t_648395356");
      Undly_87.add_attribute("Src", "E"); // 2
      Undly_87_set.insert("E");
      Undly_87.add_attribute("Prod", "11"); // 2
      Undly_87_set.insert("11");
      Undly_87.add_attribute("CFI", "UnderlyingCFICode_t_38702585"); // 2
      Undly_87_set.insert("UnderlyingCFICode_t_38702585");
      Undly_87.add_attribute("SecTyp", "RAN"); // 2
      Undly_87_set.insert("RAN");
      Undly_87.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1895988528"); // 2
      Undly_87_set.insert("UnderlyingSecuritySubType_t_1895988528");
      Undly_87.add_attribute("MMY", "177876149"); // 2
      Undly_87_set.insert("177876149");
      Undly_87.add_attribute("Mat", "UnderlyingMaturityDate_t_32397313"); // 2
      Undly_87_set.insert("UnderlyingMaturityDate_t_32397313");
      Undly_87.add_attribute("MatTm", "529919087"); // 2
      Undly_87_set.insert("529919087");
      Undly_87.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1250589860"); // 2
      Undly_87_set.insert("UnderlyingCouponPaymentDate_t_1250589860");
      Undly_87.add_attribute("RestrctTyp", "MM"); // 2
      Undly_87_set.insert("MM");
      Undly_87.add_attribute("Snrty", "SR"); // 2
      Undly_87_set.insert("SR");
      Undly_87.add_attribute("NotlPctOut", "1711239.880000"); // 2
      Undly_87_set.insert("1711239.880000");
      Undly_87.add_attribute("OrigNotlPctOut", "16630044.010000"); // 2
      Undly_87_set.insert("16630044.010000");
      Undly_87.add_attribute("AttchPnt", "1387837.130000"); // 2
      Undly_87_set.insert("1387837.130000");
      Undly_87.add_attribute("DetchPnt", "2658064.220000"); // 2
      Undly_87_set.insert("2658064.220000");
      Undly_87.add_attribute("Issued", "UnderlyingIssueDate_t_493238888"); // 2
      Undly_87_set.insert("UnderlyingIssueDate_t_493238888");
      Undly_87.add_attribute("RepoCollSecTyp", "1646649738"); // 2
      Undly_87_set.insert("1646649738");
      Undly_87.add_attribute("RepoTrm", "1452949101"); // 2
      Undly_87_set.insert("1452949101");
      Undly_87.add_attribute("RepoRt", "20587214.510000"); // 2
      Undly_87_set.insert("20587214.510000");
      Undly_87.add_attribute("Fctr", "6249390.140000"); // 2
      Undly_87_set.insert("6249390.140000");
      Undly_87.add_attribute("CrdRtg", "UnderlyingCreditRating_t_162005136"); // 2
      Undly_87_set.insert("UnderlyingCreditRating_t_162005136");
      Undly_87.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1516783836"); // 2
      Undly_87_set.insert("UnderlyingInstrRegistry_t_1516783836");
      Undly_87.add_attribute("Ctry", "339269579"); // 2
      Undly_87_set.insert("339269579");
      Undly_87.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_165438063"); // 2
      Undly_87_set.insert("UnderlyingStateOrProvinceOfIssue_t_165438063");
      Undly_87.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_608343915"); // 2
      Undly_87_set.insert("UnderlyingLocaleOfIssue_t_608343915");
      Undly_87.add_attribute("Redeem", "UnderlyingRedemptionDate_t_63070086"); // 2
      Undly_87_set.insert("UnderlyingRedemptionDate_t_63070086");
      Undly_87.add_attribute("StrkPx", "1336176.980000"); // 2
      Undly_87_set.insert("1336176.980000");
      Undly_87.add_attribute("StrkCcy", "GBP"); // 2
      Undly_87_set.insert("GBP");
      Undly_87.add_attribute("OptA", "1701185533"); // 2
      Undly_87_set.insert("1701185533");
      Undly_87.add_attribute("Mult", "10879475.900000"); // 2
      Undly_87_set.insert("10879475.900000");
      Undly_87.add_attribute("MultTyp", "0"); // 2
      Undly_87_set.insert("0");
      Undly_87.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_87_set.insert("4");
      Undly_87.add_attribute("UOM", "MMBtu"); // 2
      Undly_87_set.insert("MMBtu");
      Undly_87.add_attribute("UOMQty", "20137738.330000"); // 2
      Undly_87_set.insert("20137738.330000");
      Undly_87.add_attribute("PxUOM", "MMbbl"); // 2
      Undly_87_set.insert("MMbbl");
      Undly_87.add_attribute("PxUOMQty", "13045263.250000"); // 2
      Undly_87_set.insert("13045263.250000");
      Undly_87.add_attribute("TmUnit", "Mo"); // 2
      Undly_87_set.insert("Mo");
      Undly_87.add_attribute("ExerStyle", "1"); // 2
      Undly_87_set.insert("1");
      Undly_87.add_attribute("CpnRt", "4076325.370000"); // 2
      Undly_87_set.insert("4076325.370000");
      Undly_87.add_attribute("Exch", "UnderlyingSecurityExchange_t_393787161"); // 2
      Undly_87_set.insert("UnderlyingSecurityExchange_t_393787161");
      Undly_87.add_attribute("Issr", "UnderlyingIssuer_t_302777772"); // 2
      Undly_87_set.insert("UnderlyingIssuer_t_302777772");
      Undly_87.add_attribute("EncUndIssrLen", "578756525"); // 2
      Undly_87_set.insert("578756525");
      Undly_87.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2056791562"); // 2
      Undly_87_set.insert("EncodedUnderlyingIssuer_t_2056791562");
      Undly_87.add_attribute("Desc", "UnderlyingSecurityDesc_t_441561486"); // 2
      Undly_87_set.insert("UnderlyingSecurityDesc_t_441561486");
      Undly_87.add_attribute("EncUndSecDescLen", "844562947"); // 2
      Undly_87_set.insert("844562947");
      Undly_87.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_402546802"); // 2
      Undly_87_set.insert("EncodedUnderlyingSecurityDesc_t_402546802");
      Undly_87.add_attribute("CPPgm", "UnderlyingCPProgram_t_2088211224"); // 2
      Undly_87_set.insert("UnderlyingCPProgram_t_2088211224");
      Undly_87.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_150028401"); // 2
      Undly_87_set.insert("UnderlyingCPRegType_t_150028401");
      Undly_87.add_attribute("AllocPct", "3137846.060000"); // 2
      Undly_87_set.insert("3137846.060000");
      Undly_87.add_attribute("Ccy", "CHF"); // 2
      Undly_87_set.insert("CHF");
      Undly_87.add_attribute("Qty", "18305684.420000"); // 2
      Undly_87_set.insert("18305684.420000");
      Undly_87.add_attribute("SettlTyp", "5"); // 2
      Undly_87_set.insert("5");
      Undly_87.add_attribute("CashAmt", "UnderlyingCashAmount_t_477471600"); // 2
      Undly_87_set.insert("UnderlyingCashAmount_t_477471600");
      Undly_87.add_attribute("CashTyp", "FIXED"); // 2
      Undly_87_set.insert("FIXED");
      Undly_87.add_attribute("Px", "9680062.560000"); // 2
      Undly_87_set.insert("9680062.560000");
      Undly_87.add_attribute("DirtPx", "6110892.980000"); // 2
      Undly_87_set.insert("6110892.980000");
      Undly_87.add_attribute("EndPx", "7309809.440000"); // 2
      Undly_87_set.insert("7309809.440000");
      Undly_87.add_attribute("StartVal", "UnderlyingStartValue_t_481975284"); // 2
      Undly_87_set.insert("UnderlyingStartValue_t_481975284");
      Undly_87.add_attribute("CurVal", "UnderlyingCurrentValue_t_164791183"); // 2
      Undly_87_set.insert("UnderlyingCurrentValue_t_164791183");
      Undly_87.add_attribute("EndVal", "UnderlyingEndValue_t_1818928534"); // 2
      Undly_87_set.insert("UnderlyingEndValue_t_1818928534");
      Undly_87.add_attribute("AdjQty", "11629522.770000"); // 2
      Undly_87_set.insert("11629522.770000");
      Undly_87.add_attribute("FxRate", "12812294.270000"); // 2
      Undly_87_set.insert("12812294.270000");
      Undly_87.add_attribute("FxRateCalc", "D"); // 2
      Undly_87_set.insert("D");
      Undly_87.add_attribute("CapValu", "UnderlyingCapValue_t_1029242462"); // 2
      Undly_87_set.insert("UnderlyingCapValue_t_1029242462");
      Undly_87.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2146172551"); // 2
      Undly_87_set.insert("UnderlyingSettlMethod_t_2146172551");
      Undly_87.add_attribute("PutCall", "2102621386"); // 2
      Undly_87_set.insert("2102621386");
      all_values.push_back(Undly_87_set);
      all_compo_names.insert("Undly_87_set");

      {
        xml_element UndAID_87{"UndAID"};
        multiset<string> UndAID_87_set;
        UndAID_87.add_attribute("AltID", "UnderlyingSecurityAltID_t_927929960"); // 3
        UndAID_87_set.insert("UnderlyingSecurityAltID_t_927929960");
        UndAID_87.add_attribute("AltIDSrc", "B"); // 3
        UndAID_87_set.insert("B");
        all_values.push_back(UndAID_87_set);
        all_compo_names.insert("UndAID_87_set");

        Undly_87.add_element(UndAID_87);
      }
      {
        xml_element Stip_131{"Stip"};
        multiset<string> Stip_131_set;
        Stip_131.add_attribute("Typ", "PRICE"); // 3
        Stip_131_set.insert("PRICE");
        Stip_131.add_attribute("Val", "UnderlyingStipValue_t_1321717121"); // 3
        Stip_131_set.insert("UnderlyingStipValue_t_1321717121");
        all_values.push_back(Stip_131_set);
        all_compo_names.insert("Stip_131_set");

        Undly_87.add_element(Stip_131);
      }
      {
        xml_element Pty_335{"Pty"};
        multiset<string> Pty_335_set;
        Pty_335.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1696328887"); // 3
        Pty_335_set.insert("UnderlyingInstrumentPartyID_t_1696328887");
        Pty_335.add_attribute("Src", "A"); // 3
        Pty_335_set.insert("A");
        Pty_335.add_attribute("R", "81"); // 3
        Pty_335_set.insert("81");
        all_values.push_back(Pty_335_set);
        all_compo_names.insert("Pty_335_set");

        {
          xml_element Sub_335{"Sub"};
          multiset<string> Sub_335_set;
          Sub_335.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2137890373"); // 4
          Sub_335_set.insert("UnderlyingInstrumentPartySubID_t_2137890373");
          Sub_335.add_attribute("Typ", "27"); // 4
          Sub_335_set.insert("27");
          all_values.push_back(Sub_335_set);
          all_compo_names.insert("Sub_335_set");

          Pty_335.add_element(Sub_335);
        }
        Undly_87.add_element(Pty_335);
      }
      QuotReq_1.add_element(Undly_87);
    }
    {
      xml_element OrdQty_20{"OrdQty"};
      multiset<string> OrdQty_20_set;
      OrdQty_20.add_attribute("Qty", "16335718.380000"); // 2
      OrdQty_20_set.insert("16335718.380000");
      OrdQty_20.add_attribute("Cash", "20786179.490000"); // 2
      OrdQty_20_set.insert("20786179.490000");
      OrdQty_20.add_attribute("Pct", "19361181.500000"); // 2
      OrdQty_20_set.insert("19361181.500000");
      OrdQty_20.add_attribute("RndDir", "2"); // 2
      OrdQty_20_set.insert("2");
      OrdQty_20.add_attribute("RndMod", "4968008.920000"); // 2
      OrdQty_20_set.insert("4968008.920000");
      all_values.push_back(OrdQty_20_set);
      all_compo_names.insert("OrdQty_20_set");

      QuotReq_1.add_element(OrdQty_20);
    }
    {
      xml_element RtSrc_12{"RtSrc"};
      multiset<string> RtSrc_12_set;
      RtSrc_12.add_attribute("RtSrc", "99"); // 2
      RtSrc_12_set.insert("99");
      RtSrc_12.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_12_set.insert("0");
      RtSrc_12.add_attribute("RefPg", "ReferencePage_t_1401737061"); // 2
      RtSrc_12_set.insert("ReferencePage_t_1401737061");
      all_values.push_back(RtSrc_12_set);
      all_compo_names.insert("RtSrc_12_set");

      QuotReq_1.add_element(RtSrc_12);
    }
    {
      xml_element Stip_132{"Stip"};
      multiset<string> Stip_132_set;
      Stip_132.add_attribute("Typ", "PROTECT"); // 2
      Stip_132_set.insert("PROTECT");
      Stip_132.add_attribute("Val", "StipulationValue_t_1921869948"); // 2
      Stip_132_set.insert("StipulationValue_t_1921869948");
      all_values.push_back(Stip_132_set);
      all_compo_names.insert("Stip_132_set");

      QuotReq_1.add_element(Stip_132);
    }
    {
      xml_element Leg_67{"Leg"};
      multiset<string> Leg_67_set;
      Leg_67.add_attribute("Qty", "2222596.690000"); // 2
      Leg_67_set.insert("2222596.690000");
      Leg_67.add_attribute("OrdQty", "11892289.370000"); // 2
      Leg_67_set.insert("11892289.370000");
      Leg_67.add_attribute("SwapTyp", "1"); // 2
      Leg_67_set.insert("1");
      Leg_67.add_attribute("SettlTyp", "1"); // 2
      Leg_67_set.insert("1");
      Leg_67.add_attribute("SettlDt", "LegSettlDate_t_1354020120"); // 2
      Leg_67_set.insert("LegSettlDate_t_1354020120");
      Leg_67.add_attribute("RefID", "LegRefID_t_176812130"); // 2
      Leg_67_set.insert("LegRefID_t_176812130");
      all_values.push_back(Leg_67_set);
      all_compo_names.insert("Leg_67_set");

      {
        xml_element Leg_68{"Leg"};
        multiset<string> Leg_68_set;
        Leg_68.add_attribute("Sym", "LegSymbol_t_1867187230"); // 3
        Leg_68_set.insert("LegSymbol_t_1867187230");
        Leg_68.add_attribute("Sfx", "WI"); // 3
        Leg_68_set.insert("WI");
        Leg_68.add_attribute("ID", "LegSecurityID_t_974907192"); // 3
        Leg_68_set.insert("LegSecurityID_t_974907192");
        Leg_68.add_attribute("Src", "1"); // 3
        Leg_68_set.insert("1");
        Leg_68.add_attribute("Prod", "11"); // 3
        Leg_68_set.insert("11");
        Leg_68.add_attribute("CFI", "LegCFICode_t_930044930"); // 3
        Leg_68_set.insert("LegCFICode_t_930044930");
        Leg_68.add_attribute("SecTyp", "SWING"); // 3
        Leg_68_set.insert("SWING");
        Leg_68.add_attribute("SecSubTyp", "LegSecuritySubType_t_1880005916"); // 3
        Leg_68_set.insert("LegSecuritySubType_t_1880005916");
        Leg_68.add_attribute("MMY", "1292815206"); // 3
        Leg_68_set.insert("1292815206");
        Leg_68.add_attribute("Mat", "LegMaturityDate_t_851109478"); // 3
        Leg_68_set.insert("LegMaturityDate_t_851109478");
        Leg_68.add_attribute("MatTm", "1428851155"); // 3
        Leg_68_set.insert("1428851155");
        Leg_68.add_attribute("CpnPmt", "LegCouponPaymentDate_t_86858360"); // 3
        Leg_68_set.insert("LegCouponPaymentDate_t_86858360");
        Leg_68.add_attribute("Issued", "LegIssueDate_t_2082134514"); // 3
        Leg_68_set.insert("LegIssueDate_t_2082134514");
        Leg_68.add_attribute("RepoCollSecTyp", "1419257880"); // 3
        Leg_68_set.insert("1419257880");
        Leg_68.add_attribute("RepoTrm", "1872948109"); // 3
        Leg_68_set.insert("1872948109");
        Leg_68.add_attribute("RepoRt", "15682227.040000"); // 3
        Leg_68_set.insert("15682227.040000");
        Leg_68.add_attribute("Fctr", "13503921.820000"); // 3
        Leg_68_set.insert("13503921.820000");
        Leg_68.add_attribute("CrdRtg", "LegCreditRating_t_1661582611"); // 3
        Leg_68_set.insert("LegCreditRating_t_1661582611");
        Leg_68.add_attribute("Rgstry", "LegInstrRegistry_t_1368095500"); // 3
        Leg_68_set.insert("LegInstrRegistry_t_1368095500");
        Leg_68.add_attribute("Ctry", "1847193074"); // 3
        Leg_68_set.insert("1847193074");
        Leg_68.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1762250650"); // 3
        Leg_68_set.insert("LegStateOrProvinceOfIssue_t_1762250650");
        Leg_68.add_attribute("Lcl", "LegLocaleOfIssue_t_851053090"); // 3
        Leg_68_set.insert("LegLocaleOfIssue_t_851053090");
        Leg_68.add_attribute("Redeem", "LegRedemptionDate_t_1101446487"); // 3
        Leg_68_set.insert("LegRedemptionDate_t_1101446487");
        Leg_68.add_attribute("Strk", "1929066.410000"); // 3
        Leg_68_set.insert("1929066.410000");
        Leg_68.add_attribute("StrkCcy", "CAN"); // 3
        Leg_68_set.insert("CAN");
        Leg_68.add_attribute("OptA", "1382135578"); // 3
        Leg_68_set.insert("1382135578");
        Leg_68.add_attribute("Cmult", "11308066.350000"); // 3
        Leg_68_set.insert("11308066.350000");
        Leg_68.add_attribute("MultTyp", "0"); // 3
        Leg_68_set.insert("0");
        Leg_68.add_attribute("FlowSchedTyp", "0"); // 3
        Leg_68_set.insert("0");
        Leg_68.add_attribute("UOM", "Alw"); // 3
        Leg_68_set.insert("Alw");
        Leg_68.add_attribute("UOMQty", "17476446.930000"); // 3
        Leg_68_set.insert("17476446.930000");
        Leg_68.add_attribute("PxUOM", "Bbl"); // 3
        Leg_68_set.insert("Bbl");
        Leg_68.add_attribute("PxUOMQty", "1350423.100000"); // 3
        Leg_68_set.insert("1350423.100000");
        Leg_68.add_attribute("TmUnit", "H"); // 3
        Leg_68_set.insert("H");
        Leg_68.add_attribute("ExerStyle", "1"); // 3
        Leg_68_set.insert("1");
        Leg_68.add_attribute("CpnRt", "10650872.400000"); // 3
        Leg_68_set.insert("10650872.400000");
        Leg_68.add_attribute("Exch", "LegSecurityExchange_t_2025983094"); // 3
        Leg_68_set.insert("LegSecurityExchange_t_2025983094");
        Leg_68.add_attribute("Issr", "LegIssuer_t_1295415019"); // 3
        Leg_68_set.insert("LegIssuer_t_1295415019");
        Leg_68.add_attribute("EncLegIssrLen", "210418799"); // 3
        Leg_68_set.insert("210418799");
        Leg_68.add_attribute("EncLegIssr", "EncodedLegIssuer_t_729608925"); // 3
        Leg_68_set.insert("EncodedLegIssuer_t_729608925");
        Leg_68.add_attribute("Desc", "LegSecurityDesc_t_576782527"); // 3
        Leg_68_set.insert("LegSecurityDesc_t_576782527");
        Leg_68.add_attribute("EncLegSecDescLen", "297277159"); // 3
        Leg_68_set.insert("297277159");
        Leg_68.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_664259791"); // 3
        Leg_68_set.insert("EncodedLegSecurityDesc_t_664259791");
        Leg_68.add_attribute("RatioQty", "19960404.070000"); // 3
        Leg_68_set.insert("19960404.070000");
        Leg_68.add_attribute("Side", "5"); // 3
        Leg_68_set.insert("5");
        Leg_68.add_attribute("Ccy", "CHF"); // 3
        Leg_68_set.insert("CHF");
        Leg_68.add_attribute("Pool", "LegPool_t_1684324231"); // 3
        Leg_68_set.insert("LegPool_t_1684324231");
        Leg_68.add_attribute("Dated", "LegDatedDate_t_1453094347"); // 3
        Leg_68_set.insert("LegDatedDate_t_1453094347");
        Leg_68.add_attribute("CSetMo", "898658367"); // 3
        Leg_68_set.insert("898658367");
        Leg_68.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1299091233"); // 3
        Leg_68_set.insert("LegInterestAccrualDate_t_1299091233");
        Leg_68.add_attribute("PutCall", "156663789"); // 3
        Leg_68_set.insert("156663789");
        Leg_68.add_attribute("LegOptionRatio", "20001048.550000"); // 3
        Leg_68_set.insert("20001048.550000");
        Leg_68.add_attribute("Px", "14919978.740000"); // 3
        Leg_68_set.insert("14919978.740000");
        all_values.push_back(Leg_68_set);
        all_compo_names.insert("Leg_68_set");

        {
          xml_element LegAID_66{"LegAID"};
          multiset<string> LegAID_66_set;
          LegAID_66.add_attribute("SecAltID", "LegSecurityAltID_t_782103180"); // 4
          LegAID_66_set.insert("LegSecurityAltID_t_782103180");
          LegAID_66.add_attribute("SecAltIDSrc", "F"); // 4
          LegAID_66_set.insert("F");
          all_values.push_back(LegAID_66_set);
          all_compo_names.insert("LegAID_66_set");

          Leg_68.add_element(LegAID_66);
        }
        Leg_67.add_element(Leg_68);
      }
      {
        xml_element Stip_133{"Stip"};
        multiset<string> Stip_133_set;
        Stip_133.add_attribute("StipTyp", "REDEMPTION"); // 3
        Stip_133_set.insert("REDEMPTION");
        Stip_133.add_attribute("StipVal", "LegStipulationValue_t_1912909816"); // 3
        Stip_133_set.insert("LegStipulationValue_t_1912909816");
        all_values.push_back(Stip_133_set);
        all_compo_names.insert("Stip_133_set");

        Leg_67.add_element(Stip_133);
      }
      {
        xml_element Pty_336{"Pty"};
        multiset<string> Pty_336_set;
        Pty_336.add_attribute("ID", "NestedPartyID_t_1056784826"); // 3
        Pty_336_set.insert("NestedPartyID_t_1056784826");
        Pty_336.add_attribute("Src", "7"); // 3
        Pty_336_set.insert("7");
        Pty_336.add_attribute("R", "41"); // 3
        Pty_336_set.insert("41");
        all_values.push_back(Pty_336_set);
        all_compo_names.insert("Pty_336_set");

        {
          xml_element Sub_336{"Sub"};
          multiset<string> Sub_336_set;
          Sub_336.add_attribute("ID", "NestedPartySubID_t_656945871"); // 4
          Sub_336_set.insert("NestedPartySubID_t_656945871");
          Sub_336.add_attribute("Typ", "8"); // 4
          Sub_336_set.insert("8");
          all_values.push_back(Sub_336_set);
          all_compo_names.insert("Sub_336_set");

          Pty_336.add_element(Sub_336);
        }
        Leg_67.add_element(Pty_336);
      }
      {
        xml_element BnchmkCurve_4{"BnchmkCurve"};
        multiset<string> BnchmkCurve_4_set;
        BnchmkCurve_4.add_attribute("Ccy", "CHF"); // 3
        BnchmkCurve_4_set.insert("CHF");
        BnchmkCurve_4.add_attribute("Name", "SWAP"); // 3
        BnchmkCurve_4_set.insert("SWAP");
        BnchmkCurve_4.add_attribute("Point", "LegBenchmarkCurvePoint_t_125690836"); // 3
        BnchmkCurve_4_set.insert("LegBenchmarkCurvePoint_t_125690836");
        BnchmkCurve_4.add_attribute("Px", "8845524.070000"); // 3
        BnchmkCurve_4_set.insert("8845524.070000");
        BnchmkCurve_4.add_attribute("PxTyp", "955100277"); // 3
        BnchmkCurve_4_set.insert("955100277");
        all_values.push_back(BnchmkCurve_4_set);
        all_compo_names.insert("BnchmkCurve_4_set");

        Leg_67.add_element(BnchmkCurve_4);
      }
      QuotReq_1.add_element(Leg_67);
    }
    {
      xml_element QuotQual_3{"QuotQual"};
      multiset<string> QuotQual_3_set;
      QuotQual_3.add_attribute("Qual", "Q"); // 2
      QuotQual_3_set.insert("Q");
      all_values.push_back(QuotQual_3_set);
      all_compo_names.insert("QuotQual_3_set");

      QuotReq_1.add_element(QuotQual_3);
    }
    {
      xml_element SprdBnchmkCurve_25{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_25_set;
      SprdBnchmkCurve_25.add_attribute("Spread", "16141613.320000"); // 2
      SprdBnchmkCurve_25_set.insert("16141613.320000");
      SprdBnchmkCurve_25.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_25_set.insert("JPY");
      SprdBnchmkCurve_25.add_attribute("Name", "FutureSWAP"); // 2
      SprdBnchmkCurve_25_set.insert("FutureSWAP");
      SprdBnchmkCurve_25.add_attribute("Point", "BenchmarkCurvePoint_t_1380439564"); // 2
      SprdBnchmkCurve_25_set.insert("BenchmarkCurvePoint_t_1380439564");
      SprdBnchmkCurve_25.add_attribute("Px", "6561284.140000"); // 2
      SprdBnchmkCurve_25_set.insert("6561284.140000");
      SprdBnchmkCurve_25.add_attribute("PxTyp", "5"); // 2
      SprdBnchmkCurve_25_set.insert("5");
      SprdBnchmkCurve_25.add_attribute("SecID", "BenchmarkSecurityID_t_431904857"); // 2
      SprdBnchmkCurve_25_set.insert("BenchmarkSecurityID_t_431904857");
      SprdBnchmkCurve_25.add_attribute("SecIDSrc", "2"); // 2
      SprdBnchmkCurve_25_set.insert("2");
      all_values.push_back(SprdBnchmkCurve_25_set);
      all_compo_names.insert("SprdBnchmkCurve_25_set");

      QuotReq_1.add_element(SprdBnchmkCurve_25);
    }
    {
      xml_element Yield_20{"Yield"};
      multiset<string> Yield_20_set;
      Yield_20.add_attribute("Typ", "GROSS"); // 2
      Yield_20_set.insert("GROSS");
      Yield_20.add_attribute("Yld", "13305632.250000"); // 2
      Yield_20_set.insert("13305632.250000");
      Yield_20.add_attribute("CalcDt", "YieldCalcDate_t_1492060230"); // 2
      Yield_20_set.insert("YieldCalcDate_t_1492060230");
      Yield_20.add_attribute("RedDt", "YieldRedemptionDate_t_1825694459"); // 2
      Yield_20_set.insert("YieldRedemptionDate_t_1825694459");
      Yield_20.add_attribute("RedPx", "11831844.320000"); // 2
      Yield_20_set.insert("11831844.320000");
      Yield_20.add_attribute("RedPxTyp", "14"); // 2
      Yield_20_set.insert("14");
      all_values.push_back(Yield_20_set);
      all_compo_names.insert("Yield_20_set");

      QuotReq_1.add_element(Yield_20);
    }
    {
      xml_element Pty_337{"Pty"};
      multiset<string> Pty_337_set;
      Pty_337.add_attribute("ID", "PartyID_t_460313991"); // 2
      Pty_337_set.insert("PartyID_t_460313991");
      Pty_337.add_attribute("Src", "B"); // 2
      Pty_337_set.insert("B");
      Pty_337.add_attribute("R", "55"); // 2
      Pty_337_set.insert("55");
      all_values.push_back(Pty_337_set);
      all_compo_names.insert("Pty_337_set");

      {
        xml_element Sub_337{"Sub"};
        multiset<string> Sub_337_set;
        Sub_337.add_attribute("ID", "PartySubID_t_225740159"); // 3
        Sub_337_set.insert("PartySubID_t_225740159");
        Sub_337.add_attribute("Typ", "1"); // 3
        Sub_337_set.insert("1");
        all_values.push_back(Sub_337_set);
        all_compo_names.insert("Sub_337_set");

        Pty_337.add_element(Sub_337);
      }
      QuotReq_1.add_element(Pty_337);
    }
    elt.add_element(QuotReq_1);
  } // end QuotReq
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
