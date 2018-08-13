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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotReqRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequestReject_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_731062466"); // 0
  QuoteRequestReject_message_t_0.insert("QuoteReqID_t_731062466");
  elt.add_attribute("RFQReqID", "RFQReqID_t_1298785093"); // 0
  QuoteRequestReject_message_t_0.insert("RFQReqID_t_1298785093");
  elt.add_attribute("ReqRejRsn", "99"); // 0
  QuoteRequestReject_message_t_0.insert("99");
  elt.add_attribute("PrvtQt", "false"); // 0
  QuoteRequestReject_message_t_0.insert("false");
  elt.add_attribute("RspdntTyp", "2"); // 0
  QuoteRequestReject_message_t_0.insert("2");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  QuoteRequestReject_message_t_0.insert("false");
  elt.add_attribute("Txt", "Text_t_635023879"); // 0
  QuoteRequestReject_message_t_0.insert("Text_t_635023879");
  elt.add_attribute("EncTxtLen", "485079526"); // 0
  QuoteRequestReject_message_t_0.insert("485079526");
  elt.add_attribute("EncTxt", "EncodedText_t_1668880566"); // 0
  QuoteRequestReject_message_t_0.insert("EncodedText_t_1668880566");
  all_values.push_back(QuoteRequestReject_message_t_0);
  all_compo_names.insert("QuoteRequestReject_message_t");

  { // Hdr
    xml_element Hdr_71{"Hdr"};
    multiset<string> Hdr_71_set;
    Hdr_71.add_attribute("SeqNum", "1590124157"); // 1
    Hdr_71_set.insert("1590124157");
    Hdr_71.add_attribute("SID", "SenderCompID_t_821189161"); // 1
    Hdr_71_set.insert("SenderCompID_t_821189161");
    Hdr_71.add_attribute("TID", "TargetCompID_t_1135558251"); // 1
    Hdr_71_set.insert("TargetCompID_t_1135558251");
    Hdr_71.add_attribute("OBID", "OnBehalfOfCompID_t_974523313"); // 1
    Hdr_71_set.insert("OnBehalfOfCompID_t_974523313");
    Hdr_71.add_attribute("D2ID", "DeliverToCompID_t_1454575956"); // 1
    Hdr_71_set.insert("DeliverToCompID_t_1454575956");
    Hdr_71.add_attribute("SSub", "SenderSubID_t_1266495726"); // 1
    Hdr_71_set.insert("SenderSubID_t_1266495726");
    Hdr_71.add_attribute("SLoc", "SenderLocationID_t_207479229"); // 1
    Hdr_71_set.insert("SenderLocationID_t_207479229");
    Hdr_71.add_attribute("TSub", "TargetSubID_t_2110704370"); // 1
    Hdr_71_set.insert("TargetSubID_t_2110704370");
    Hdr_71.add_attribute("TLoc", "TargetLocationID_t_1482432049"); // 1
    Hdr_71_set.insert("TargetLocationID_t_1482432049");
    Hdr_71.add_attribute("OBSub", "OnBehalfOfSubID_t_639384087"); // 1
    Hdr_71_set.insert("OnBehalfOfSubID_t_639384087");
    Hdr_71.add_attribute("OBLoc", "OnBehalfOfLocationID_t_156189720"); // 1
    Hdr_71_set.insert("OnBehalfOfLocationID_t_156189720");
    Hdr_71.add_attribute("D2Sub", "DeliverToSubID_t_1003979070"); // 1
    Hdr_71_set.insert("DeliverToSubID_t_1003979070");
    Hdr_71.add_attribute("D2Loc", "DeliverToLocationID_t_1969947312"); // 1
    Hdr_71_set.insert("DeliverToLocationID_t_1969947312");
    Hdr_71.add_attribute("PosDup", "N"); // 1
    Hdr_71_set.insert("N");
    Hdr_71.add_attribute("PosRsnd", "Y"); // 1
    Hdr_71_set.insert("Y");
    Hdr_71.add_attribute("Snt", "SendingTime_t_1005648096"); // 1
    Hdr_71_set.insert("SendingTime_t_1005648096");
    Hdr_71.add_attribute("OrigSnt", "OrigSendingTime_t_337340759"); // 1
    Hdr_71_set.insert("OrigSendingTime_t_337340759");
    Hdr_71.add_attribute("MsgEncd", "MessageEncoding_t_1142503873"); // 1
    Hdr_71_set.insert("MessageEncoding_t_1142503873");
    all_values.push_back(Hdr_71_set);
    all_compo_names.insert("Hdr_71_set");

    {
      xml_element Hop_71{"Hop"};
      multiset<string> Hop_71_set;
      Hop_71.add_attribute("ID", "HopCompID_t_1217676244"); // 2
      Hop_71_set.insert("HopCompID_t_1217676244");
      Hop_71.add_attribute("Ref", "1900565019"); // 2
      Hop_71_set.insert("1900565019");
      Hop_71.add_attribute("Snt", "HopSendingTime_t_1368244032"); // 2
      Hop_71_set.insert("HopSendingTime_t_1368244032");
      all_values.push_back(Hop_71_set);
      all_compo_names.insert("Hop_71_set");

      Hdr_71.add_element(Hop_71);
    }
    elt.add_element(Hdr_71);
  } // end Hdr
  { // Pty
    xml_element Pty_338{"Pty"};
    multiset<string> Pty_338_set;
    Pty_338.add_attribute("ID", "RootPartyID_t_484143838"); // 1
    Pty_338_set.insert("RootPartyID_t_484143838");
    Pty_338.add_attribute("Src", "D"); // 1
    Pty_338_set.insert("D");
    Pty_338.add_attribute("R", "55"); // 1
    Pty_338_set.insert("55");
    all_values.push_back(Pty_338_set);
    all_compo_names.insert("Pty_338_set");

    {
      xml_element Sub_338{"Sub"};
      multiset<string> Sub_338_set;
      Sub_338.add_attribute("ID", "RootPartySubID_t_1459482459"); // 2
      Sub_338_set.insert("RootPartySubID_t_1459482459");
      Sub_338.add_attribute("Typ", "7"); // 2
      Sub_338_set.insert("7");
      all_values.push_back(Sub_338_set);
      all_compo_names.insert("Sub_338_set");

      Pty_338.add_element(Sub_338);
    }
    elt.add_element(Pty_338);
  } // end Pty
  { // Pty
    xml_element Pty_339{"Pty"};
    multiset<string> Pty_339_set;
    Pty_339.add_attribute("ID", "RootPartyID_t_901608927"); // 1
    Pty_339_set.insert("RootPartyID_t_901608927");
    Pty_339.add_attribute("Src", "6"); // 1
    Pty_339_set.insert("6");
    Pty_339.add_attribute("R", "3"); // 1
    Pty_339_set.insert("3");
    all_values.push_back(Pty_339_set);
    all_compo_names.insert("Pty_339_set");

    {
      xml_element Sub_339{"Sub"};
      multiset<string> Sub_339_set;
      Sub_339.add_attribute("ID", "RootPartySubID_t_423005846"); // 2
      Sub_339_set.insert("RootPartySubID_t_423005846");
      Sub_339.add_attribute("Typ", "25"); // 2
      Sub_339_set.insert("25");
      all_values.push_back(Sub_339_set);
      all_compo_names.insert("Sub_339_set");

      Pty_339.add_element(Sub_339);
    }
    elt.add_element(Pty_339);
  } // end Pty
  { // Pty
    xml_element Pty_340{"Pty"};
    multiset<string> Pty_340_set;
    Pty_340.add_attribute("ID", "RootPartyID_t_37719207"); // 1
    Pty_340_set.insert("RootPartyID_t_37719207");
    Pty_340.add_attribute("Src", "6"); // 1
    Pty_340_set.insert("6");
    Pty_340.add_attribute("R", "63"); // 1
    Pty_340_set.insert("63");
    all_values.push_back(Pty_340_set);
    all_compo_names.insert("Pty_340_set");

    {
      xml_element Sub_340{"Sub"};
      multiset<string> Sub_340_set;
      Sub_340.add_attribute("ID", "RootPartySubID_t_1492295163"); // 2
      Sub_340_set.insert("RootPartySubID_t_1492295163");
      Sub_340.add_attribute("Typ", "20"); // 2
      Sub_340_set.insert("20");
      all_values.push_back(Sub_340_set);
      all_compo_names.insert("Sub_340_set");

      Pty_340.add_element(Sub_340);
    }
    elt.add_element(Pty_340);
  } // end Pty
  { // QuotReqRej
    xml_element QuotReqRej_0{"QuotReqRej"};
    multiset<string> QuotReqRej_0_set;
    QuotReqRej_0.add_attribute("PrevClsPx", "14555158.850000"); // 1
    QuotReqRej_0_set.insert("14555158.850000");
    QuotReqRej_0.add_attribute("ReqTyp", "1"); // 1
    QuotReqRej_0_set.insert("1");
    QuotReqRej_0.add_attribute("Typ", "2"); // 1
    QuotReqRej_0_set.insert("2");
    QuotReqRej_0.add_attribute("SesID", "6"); // 1
    QuotReqRej_0_set.insert("6");
    QuotReqRej_0.add_attribute("SesSub", "6"); // 1
    QuotReqRej_0_set.insert("6");
    QuotReqRej_0.add_attribute("OrignDt", "TradeOriginationDate_t_1033513494"); // 1
    QuotReqRej_0_set.insert("TradeOriginationDate_t_1033513494");
    QuotReqRej_0.add_attribute("Side", "5"); // 1
    QuotReqRej_0_set.insert("5");
    QuotReqRej_0.add_attribute("QtyTyp", "0"); // 1
    QuotReqRej_0_set.insert("0");
    QuotReqRej_0.add_attribute("SettlTyp", "6"); // 1
    QuotReqRej_0_set.insert("6");
    QuotReqRej_0.add_attribute("SettlDt", "SettlDate_t_1449812667"); // 1
    QuotReqRej_0_set.insert("SettlDate_t_1449812667");
    QuotReqRej_0.add_attribute("SettlDt2", "SettlDate2_t_693713753"); // 1
    QuotReqRej_0_set.insert("SettlDate2_t_693713753");
    QuotReqRej_0.add_attribute("Qty2", "11093541.860000"); // 1
    QuotReqRej_0_set.insert("11093541.860000");
    QuotReqRej_0.add_attribute("Ccy", "USD"); // 1
    QuotReqRej_0_set.insert("USD");
    QuotReqRej_0.add_attribute("Acct", "Account_t_1448359756"); // 1
    QuotReqRej_0_set.insert("Account_t_1448359756");
    QuotReqRej_0.add_attribute("AcctIDSrc", "3"); // 1
    QuotReqRej_0_set.insert("3");
    QuotReqRej_0.add_attribute("AcctTyp", "3"); // 1
    QuotReqRej_0_set.insert("3");
    QuotReqRej_0.add_attribute("QuotPxTyp", "5"); // 1
    QuotReqRej_0_set.insert("5");
    QuotReqRej_0.add_attribute("OrdTyp", "H"); // 1
    QuotReqRej_0_set.insert("H");
    QuotReqRej_0.add_attribute("ExpireTm", "ExpireTime_t_1312953783"); // 1
    QuotReqRej_0_set.insert("ExpireTime_t_1312953783");
    QuotReqRej_0.add_attribute("TxnTm", "TransactTime_t_319765804"); // 1
    QuotReqRej_0_set.insert("TransactTime_t_319765804");
    QuotReqRej_0.add_attribute("PxTyp", "6"); // 1
    QuotReqRej_0_set.insert("6");
    QuotReqRej_0.add_attribute("Px", "5294838.290000"); // 1
    QuotReqRej_0_set.insert("5294838.290000");
    QuotReqRej_0.add_attribute("Px2", "7427716.500000"); // 1
    QuotReqRej_0_set.insert("7427716.500000");
    all_values.push_back(QuotReqRej_0_set);
    all_compo_names.insert("QuotReqRej_0_set");

    {
      xml_element Instrmt_62{"Instrmt"};
      multiset<string> Instrmt_62_set;
      Instrmt_62.add_attribute("Sym", "Symbol_t_335722579"); // 2
      Instrmt_62_set.insert("Symbol_t_335722579");
      Instrmt_62.add_attribute("Sfx", "CD"); // 2
      Instrmt_62_set.insert("CD");
      Instrmt_62.add_attribute("ID", "SecurityID_t_153852099"); // 2
      Instrmt_62_set.insert("SecurityID_t_153852099");
      Instrmt_62.add_attribute("Src", "F"); // 2
      Instrmt_62_set.insert("F");
      Instrmt_62.add_attribute("Prod", "2"); // 2
      Instrmt_62_set.insert("2");
      Instrmt_62.add_attribute("ProdCmplx", "ProductComplex_t_831428275"); // 2
      Instrmt_62_set.insert("ProductComplex_t_831428275");
      Instrmt_62.add_attribute("SecGrp", "SecurityGroup_t_1271574835"); // 2
      Instrmt_62_set.insert("SecurityGroup_t_1271574835");
      Instrmt_62.add_attribute("CFI", "CFICode_t_1367530436"); // 2
      Instrmt_62_set.insert("CFICode_t_1367530436");
      Instrmt_62.add_attribute("SecTyp", "YCD"); // 2
      Instrmt_62_set.insert("YCD");
      Instrmt_62.add_attribute("SubTyp", "SecuritySubType_t_335141017"); // 2
      Instrmt_62_set.insert("SecuritySubType_t_335141017");
      Instrmt_62.add_attribute("MMY", "831752394"); // 2
      Instrmt_62_set.insert("831752394");
      Instrmt_62.add_attribute("MatDt", "MaturityDate_t_1860456498"); // 2
      Instrmt_62_set.insert("MaturityDate_t_1860456498");
      Instrmt_62.add_attribute("MatTm", "1368654511"); // 2
      Instrmt_62_set.insert("1368654511");
      Instrmt_62.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1944224302"); // 2
      Instrmt_62_set.insert("SettleOnOpenFlag_t_1944224302");
      Instrmt_62.add_attribute("AsgnMeth", "1411666379"); // 2
      Instrmt_62_set.insert("1411666379");
      Instrmt_62.add_attribute("Status", "2"); // 2
      Instrmt_62_set.insert("2");
      Instrmt_62.add_attribute("CpnPmt", "CouponPaymentDate_t_1246553321"); // 2
      Instrmt_62_set.insert("CouponPaymentDate_t_1246553321");
      Instrmt_62.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_62_set.insert("FR");
      Instrmt_62.add_attribute("Snrty", "SB"); // 2
      Instrmt_62_set.insert("SB");
      Instrmt_62.add_attribute("NotlPctOut", "3019637.110000"); // 2
      Instrmt_62_set.insert("3019637.110000");
      Instrmt_62.add_attribute("OrigNotlPctOut", "20198542.700000"); // 2
      Instrmt_62_set.insert("20198542.700000");
      Instrmt_62.add_attribute("AttchPnt", "16705627.480000"); // 2
      Instrmt_62_set.insert("16705627.480000");
      Instrmt_62.add_attribute("DetchPnt", "19890015.880000"); // 2
      Instrmt_62_set.insert("19890015.880000");
      Instrmt_62.add_attribute("Issued", "IssueDate_t_306390238"); // 2
      Instrmt_62_set.insert("IssueDate_t_306390238");
      Instrmt_62.add_attribute("RepoCollSecTyp", "1088719625"); // 2
      Instrmt_62_set.insert("1088719625");
      Instrmt_62.add_attribute("RepoTrm", "840554628"); // 2
      Instrmt_62_set.insert("840554628");
      Instrmt_62.add_attribute("RepoRt", "16193440.220000"); // 2
      Instrmt_62_set.insert("16193440.220000");
      Instrmt_62.add_attribute("Fctr", "14084854.290000"); // 2
      Instrmt_62_set.insert("14084854.290000");
      Instrmt_62.add_attribute("CrdRtg", "CreditRating_t_1786614007"); // 2
      Instrmt_62_set.insert("CreditRating_t_1786614007");
      Instrmt_62.add_attribute("Rgstry", "InstrRegistry_t_1344203"); // 2
      Instrmt_62_set.insert("InstrRegistry_t_1344203");
      Instrmt_62.add_attribute("IssuCtry", "3773432"); // 2
      Instrmt_62_set.insert("3773432");
      Instrmt_62.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2122336586"); // 2
      Instrmt_62_set.insert("StateOrProvinceOfIssue_t_2122336586");
      Instrmt_62.add_attribute("Lcl", "LocaleOfIssue_t_568547239"); // 2
      Instrmt_62_set.insert("LocaleOfIssue_t_568547239");
      Instrmt_62.add_attribute("Redeem", "RedemptionDate_t_157625531"); // 2
      Instrmt_62_set.insert("RedemptionDate_t_157625531");
      Instrmt_62.add_attribute("StrkPx", "6747620.300000"); // 2
      Instrmt_62_set.insert("6747620.300000");
      Instrmt_62.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_62_set.insert("USD");
      Instrmt_62.add_attribute("StrkMult", "19463368.660000"); // 2
      Instrmt_62_set.insert("19463368.660000");
      Instrmt_62.add_attribute("StrkValu", "18480922.260000"); // 2
      Instrmt_62_set.insert("18480922.260000");
      Instrmt_62.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_62_set.insert("3");
      Instrmt_62.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("StrkPxBndryPrcsn", "5323609.720000"); // 2
      Instrmt_62_set.insert("5323609.720000");
      Instrmt_62.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("OptAt", "1502648747"); // 2
      Instrmt_62_set.insert("1502648747");
      Instrmt_62.add_attribute("Mult", "3291016.260000"); // 2
      Instrmt_62_set.insert("3291016.260000");
      Instrmt_62.add_attribute("MultTyp", "2"); // 2
      Instrmt_62_set.insert("2");
      Instrmt_62.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_62_set.insert("2");
      Instrmt_62.add_attribute("MinPxIncr", "15756549.470000"); // 2
      Instrmt_62_set.insert("15756549.470000");
      Instrmt_62.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_768058724"); // 2
      Instrmt_62_set.insert("MinPriceIncrementAmount_t_768058724");
      Instrmt_62.add_attribute("UOM", "tn"); // 2
      Instrmt_62_set.insert("tn");
      Instrmt_62.add_attribute("UOMQty", "18776186.590000"); // 2
      Instrmt_62_set.insert("18776186.590000");
      Instrmt_62.add_attribute("PxUOM", "Bu"); // 2
      Instrmt_62_set.insert("Bu");
      Instrmt_62.add_attribute("PxUOMQty", "3607796.440000"); // 2
      Instrmt_62_set.insert("3607796.440000");
      Instrmt_62.add_attribute("SettlMeth", "P"); // 2
      Instrmt_62_set.insert("P");
      Instrmt_62.add_attribute("ExerStyle", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("OptPayAmt", "OptPayoutAmount_t_412207579"); // 2
      Instrmt_62_set.insert("OptPayoutAmount_t_412207579");
      Instrmt_62.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_62_set.insert("PCTPAR");
      Instrmt_62.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_62_set.insert("EQTY");
      Instrmt_62.add_attribute("ListMeth", "0"); // 2
      Instrmt_62_set.insert("0");
      Instrmt_62.add_attribute("CapPx", "4200241.620000"); // 2
      Instrmt_62_set.insert("4200241.620000");
      Instrmt_62.add_attribute("FlrPx", "7142744.820000"); // 2
      Instrmt_62_set.insert("7142744.820000");
      Instrmt_62.add_attribute("PutCall", "0"); // 2
      Instrmt_62_set.insert("0");
      Instrmt_62.add_attribute("FlexInd", "false"); // 2
      Instrmt_62_set.insert("false");
      Instrmt_62.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_62_set.insert("true");
      Instrmt_62.add_attribute("TmUnit", "D"); // 2
      Instrmt_62_set.insert("D");
      Instrmt_62.add_attribute("CpnRt", "14691331.910000"); // 2
      Instrmt_62_set.insert("14691331.910000");
      Instrmt_62.add_attribute("Exch", "SecurityExchange_t_1860953820"); // 2
      Instrmt_62_set.insert("SecurityExchange_t_1860953820");
      Instrmt_62.add_attribute("PosLmt", "499806124"); // 2
      Instrmt_62_set.insert("499806124");
      Instrmt_62.add_attribute("NTPosLmt", "1169741769"); // 2
      Instrmt_62_set.insert("1169741769");
      Instrmt_62.add_attribute("Issr", "Issuer_t_1546476830"); // 2
      Instrmt_62_set.insert("Issuer_t_1546476830");
      Instrmt_62.add_attribute("EncIssrLen", "633800360"); // 2
      Instrmt_62_set.insert("633800360");
      Instrmt_62.add_attribute("EncIssr", "EncodedIssuer_t_1702102742"); // 2
      Instrmt_62_set.insert("EncodedIssuer_t_1702102742");
      Instrmt_62.add_attribute("Desc", "SecurityDesc_t_944972691"); // 2
      Instrmt_62_set.insert("SecurityDesc_t_944972691");
      Instrmt_62.add_attribute("EncSecDescLen", "2136449107"); // 2
      Instrmt_62_set.insert("2136449107");
      Instrmt_62.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2031204368"); // 2
      Instrmt_62_set.insert("EncodedSecurityDesc_t_2031204368");
      Instrmt_62.add_attribute("Pool", "Pool_t_1755134930"); // 2
      Instrmt_62_set.insert("Pool_t_1755134930");
      Instrmt_62.add_attribute("CSetMo", "604463011"); // 2
      Instrmt_62_set.insert("604463011");
      Instrmt_62.add_attribute("CPPgm", "1"); // 2
      Instrmt_62_set.insert("1");
      Instrmt_62.add_attribute("CPRegT", "CPRegType_t_375710006"); // 2
      Instrmt_62_set.insert("CPRegType_t_375710006");
      Instrmt_62.add_attribute("Dated", "DatedDate_t_1442163555"); // 2
      Instrmt_62_set.insert("DatedDate_t_1442163555");
      Instrmt_62.add_attribute("IntAcrl", "InterestAccrualDate_t_1189510679"); // 2
      Instrmt_62_set.insert("InterestAccrualDate_t_1189510679");
      all_values.push_back(Instrmt_62_set);
      all_compo_names.insert("Instrmt_62_set");

      {
        xml_element AID_65{"AID"};
        multiset<string> AID_65_set;
        AID_65.add_attribute("AltID", "SecurityAltID_t_1016139353"); // 3
        AID_65_set.insert("SecurityAltID_t_1016139353");
        AID_65.add_attribute("AltIDSrc", "E"); // 3
        AID_65_set.insert("E");
        all_values.push_back(AID_65_set);
        all_compo_names.insert("AID_65_set");

        Instrmt_62.add_element(AID_65);
      }
      {
        xml_element SecXML_65{"SecXML"};
        multiset<string> SecXML_65_set;
        SecXML_65.add_attribute("Schema", "SecurityXMLSchema_t_761163630"); // 3
        SecXML_65_set.insert("SecurityXMLSchema_t_761163630");
        all_values.push_back(SecXML_65_set);
        all_compo_names.insert("SecXML_65_set");

        Instrmt_62.add_element(SecXML_65);
      }
      {
        xml_element Evnt_65{"Evnt"};
        multiset<string> Evnt_65_set;
        Evnt_65.add_attribute("EventTyp", "18"); // 3
        Evnt_65_set.insert("18");
        Evnt_65.add_attribute("Dt", "EventDate_t_1104958820"); // 3
        Evnt_65_set.insert("EventDate_t_1104958820");
        Evnt_65.add_attribute("Tm", "EventTime_t_1173371209"); // 3
        Evnt_65_set.insert("EventTime_t_1173371209");
        Evnt_65.add_attribute("Px", "2341552.490000"); // 3
        Evnt_65_set.insert("2341552.490000");
        Evnt_65.add_attribute("Txt", "EventText_t_1815459871"); // 3
        Evnt_65_set.insert("EventText_t_1815459871");
        all_values.push_back(Evnt_65_set);
        all_compo_names.insert("Evnt_65_set");

        Instrmt_62.add_element(Evnt_65);
      }
      {
        xml_element Pty_341{"Pty"};
        multiset<string> Pty_341_set;
        Pty_341.add_attribute("ID", "InstrumentPartyID_t_1224709147"); // 3
        Pty_341_set.insert("InstrumentPartyID_t_1224709147");
        Pty_341.add_attribute("Src", "C"); // 3
        Pty_341_set.insert("C");
        Pty_341.add_attribute("R", "56"); // 3
        Pty_341_set.insert("56");
        all_values.push_back(Pty_341_set);
        all_compo_names.insert("Pty_341_set");

        {
          xml_element Sub_341{"Sub"};
          multiset<string> Sub_341_set;
          Sub_341.add_attribute("ID", "InstrumentPartySubID_t_1250900023"); // 4
          Sub_341_set.insert("InstrumentPartySubID_t_1250900023");
          Sub_341.add_attribute("Typ", "5"); // 4
          Sub_341_set.insert("5");
          all_values.push_back(Sub_341_set);
          all_compo_names.insert("Sub_341_set");

          Pty_341.add_element(Sub_341);
        }
        Instrmt_62.add_element(Pty_341);
      }
      {
        xml_element CmplxEvnt_62{"CmplxEvnt"};
        multiset<string> CmplxEvnt_62_set;
        CmplxEvnt_62.add_attribute("Typ", "9"); // 3
        CmplxEvnt_62_set.insert("9");
        CmplxEvnt_62.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1951852929"); // 3
        CmplxEvnt_62_set.insert("ComplexOptPayoutAmount_t_1951852929");
        CmplxEvnt_62.add_attribute("Px", "9644003.550000"); // 3
        CmplxEvnt_62_set.insert("9644003.550000");
        CmplxEvnt_62.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_62_set.insert("3");
        CmplxEvnt_62.add_attribute("PxBndryPrcsn", "3041754.060000"); // 3
        CmplxEvnt_62_set.insert("3041754.060000");
        CmplxEvnt_62.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_62_set.insert("1");
        CmplxEvnt_62.add_attribute("Cond", "1"); // 3
        CmplxEvnt_62_set.insert("1");
        all_values.push_back(CmplxEvnt_62_set);
        all_compo_names.insert("CmplxEvnt_62_set");

        {
          xml_element EvntDts_62{"EvntDts"};
          multiset<string> EvntDts_62_set;
          EvntDts_62.add_attribute("StartDt", "ComplexEventStartDate_t_937975766"); // 4
          EvntDts_62_set.insert("ComplexEventStartDate_t_937975766");
          EvntDts_62.add_attribute("EndDt", "ComplexEventEndDate_t_1688761218"); // 4
          EvntDts_62_set.insert("ComplexEventEndDate_t_1688761218");
          all_values.push_back(EvntDts_62_set);
          all_compo_names.insert("EvntDts_62_set");

          {
            xml_element EvntTms_62{"EvntTms"};
            multiset<string> EvntTms_62_set;
            EvntTms_62.add_attribute("StartTm", "1311586765"); // 5
            EvntTms_62_set.insert("1311586765");
            EvntTms_62.add_attribute("EndTm", "926941225"); // 5
            EvntTms_62_set.insert("926941225");
            all_values.push_back(EvntTms_62_set);
            all_compo_names.insert("EvntTms_62_set");

            EvntDts_62.add_element(EvntTms_62);
          }
          CmplxEvnt_62.add_element(EvntDts_62);
        }
        Instrmt_62.add_element(CmplxEvnt_62);
      }
      QuotReqRej_0.add_element(Instrmt_62);
    }
    {
      xml_element FinDetls_20{"FinDetls"};
      multiset<string> FinDetls_20_set;
      FinDetls_20.add_attribute("AgmtDesc", "AgreementDesc_t_1572481939"); // 2
      FinDetls_20_set.insert("AgreementDesc_t_1572481939");
      FinDetls_20.add_attribute("AgmtID", "AgreementID_t_919238048"); // 2
      FinDetls_20_set.insert("AgreementID_t_919238048");
      FinDetls_20.add_attribute("AgmtDt", "AgreementDate_t_1531404236"); // 2
      FinDetls_20_set.insert("AgreementDate_t_1531404236");
      FinDetls_20.add_attribute("AgmtCcy", "JPY"); // 2
      FinDetls_20_set.insert("JPY");
      FinDetls_20.add_attribute("TrmTyp", "1"); // 2
      FinDetls_20_set.insert("1");
      FinDetls_20.add_attribute("StartDt", "StartDate_t_2073884638"); // 2
      FinDetls_20_set.insert("StartDate_t_2073884638");
      FinDetls_20.add_attribute("EndDt", "EndDate_t_163603759"); // 2
      FinDetls_20_set.insert("EndDate_t_163603759");
      FinDetls_20.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_20_set.insert("3");
      FinDetls_20.add_attribute("MgnRatio", "6875646.200000"); // 2
      FinDetls_20_set.insert("6875646.200000");
      all_values.push_back(FinDetls_20_set);
      all_compo_names.insert("FinDetls_20_set");

      QuotReqRej_0.add_element(FinDetls_20);
    }
    {
      xml_element Undly_88{"Undly"};
      multiset<string> Undly_88_set;
      Undly_88.add_attribute("Sym", "UnderlyingSymbol_t_2126562697"); // 2
      Undly_88_set.insert("UnderlyingSymbol_t_2126562697");
      Undly_88.add_attribute("Sfx", "CD"); // 2
      Undly_88_set.insert("CD");
      Undly_88.add_attribute("ID", "UnderlyingSecurityID_t_1860935829"); // 2
      Undly_88_set.insert("UnderlyingSecurityID_t_1860935829");
      Undly_88.add_attribute("Src", "3"); // 2
      Undly_88_set.insert("3");
      Undly_88.add_attribute("Prod", "4"); // 2
      Undly_88_set.insert("4");
      Undly_88.add_attribute("CFI", "UnderlyingCFICode_t_938161328"); // 2
      Undly_88_set.insert("UnderlyingCFICode_t_938161328");
      Undly_88.add_attribute("SecTyp", "TBILL"); // 2
      Undly_88_set.insert("TBILL");
      Undly_88.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1636729444"); // 2
      Undly_88_set.insert("UnderlyingSecuritySubType_t_1636729444");
      Undly_88.add_attribute("MMY", "41577703"); // 2
      Undly_88_set.insert("41577703");
      Undly_88.add_attribute("Mat", "UnderlyingMaturityDate_t_362680873"); // 2
      Undly_88_set.insert("UnderlyingMaturityDate_t_362680873");
      Undly_88.add_attribute("MatTm", "743396516"); // 2
      Undly_88_set.insert("743396516");
      Undly_88.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1993430632"); // 2
      Undly_88_set.insert("UnderlyingCouponPaymentDate_t_1993430632");
      Undly_88.add_attribute("RestrctTyp", "FR"); // 2
      Undly_88_set.insert("FR");
      Undly_88.add_attribute("Snrty", "SD"); // 2
      Undly_88_set.insert("SD");
      Undly_88.add_attribute("NotlPctOut", "1501223.900000"); // 2
      Undly_88_set.insert("1501223.900000");
      Undly_88.add_attribute("OrigNotlPctOut", "13137397.050000"); // 2
      Undly_88_set.insert("13137397.050000");
      Undly_88.add_attribute("AttchPnt", "20776314.820000"); // 2
      Undly_88_set.insert("20776314.820000");
      Undly_88.add_attribute("DetchPnt", "10880981.560000"); // 2
      Undly_88_set.insert("10880981.560000");
      Undly_88.add_attribute("Issued", "UnderlyingIssueDate_t_855017275"); // 2
      Undly_88_set.insert("UnderlyingIssueDate_t_855017275");
      Undly_88.add_attribute("RepoCollSecTyp", "1241734600"); // 2
      Undly_88_set.insert("1241734600");
      Undly_88.add_attribute("RepoTrm", "2015039381"); // 2
      Undly_88_set.insert("2015039381");
      Undly_88.add_attribute("RepoRt", "2800155.660000"); // 2
      Undly_88_set.insert("2800155.660000");
      Undly_88.add_attribute("Fctr", "134890.000000"); // 2
      Undly_88_set.insert("134890.000000");
      Undly_88.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1398959970"); // 2
      Undly_88_set.insert("UnderlyingCreditRating_t_1398959970");
      Undly_88.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1164389525"); // 2
      Undly_88_set.insert("UnderlyingInstrRegistry_t_1164389525");
      Undly_88.add_attribute("Ctry", "1308437054"); // 2
      Undly_88_set.insert("1308437054");
      Undly_88.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_77560466"); // 2
      Undly_88_set.insert("UnderlyingStateOrProvinceOfIssue_t_77560466");
      Undly_88.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1090790515"); // 2
      Undly_88_set.insert("UnderlyingLocaleOfIssue_t_1090790515");
      Undly_88.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1472040814"); // 2
      Undly_88_set.insert("UnderlyingRedemptionDate_t_1472040814");
      Undly_88.add_attribute("StrkPx", "5591041.610000"); // 2
      Undly_88_set.insert("5591041.610000");
      Undly_88.add_attribute("StrkCcy", "CHF"); // 2
      Undly_88_set.insert("CHF");
      Undly_88.add_attribute("OptA", "2145606677"); // 2
      Undly_88_set.insert("2145606677");
      Undly_88.add_attribute("Mult", "14918073.160000"); // 2
      Undly_88_set.insert("14918073.160000");
      Undly_88.add_attribute("MultTyp", "2"); // 2
      Undly_88_set.insert("2");
      Undly_88.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_88_set.insert("3");
      Undly_88.add_attribute("UOM", "MMBtu"); // 2
      Undly_88_set.insert("MMBtu");
      Undly_88.add_attribute("UOMQty", "3842842.230000"); // 2
      Undly_88_set.insert("3842842.230000");
      Undly_88.add_attribute("PxUOM", "t"); // 2
      Undly_88_set.insert("t");
      Undly_88.add_attribute("PxUOMQty", "3240626.990000"); // 2
      Undly_88_set.insert("3240626.990000");
      Undly_88.add_attribute("TmUnit", "Wk"); // 2
      Undly_88_set.insert("Wk");
      Undly_88.add_attribute("ExerStyle", "1"); // 2
      Undly_88_set.insert("1");
      Undly_88.add_attribute("CpnRt", "1700096.840000"); // 2
      Undly_88_set.insert("1700096.840000");
      Undly_88.add_attribute("Exch", "UnderlyingSecurityExchange_t_2074046325"); // 2
      Undly_88_set.insert("UnderlyingSecurityExchange_t_2074046325");
      Undly_88.add_attribute("Issr", "UnderlyingIssuer_t_1048777841"); // 2
      Undly_88_set.insert("UnderlyingIssuer_t_1048777841");
      Undly_88.add_attribute("EncUndIssrLen", "320132074"); // 2
      Undly_88_set.insert("320132074");
      Undly_88.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1240302382"); // 2
      Undly_88_set.insert("EncodedUnderlyingIssuer_t_1240302382");
      Undly_88.add_attribute("Desc", "UnderlyingSecurityDesc_t_978925675"); // 2
      Undly_88_set.insert("UnderlyingSecurityDesc_t_978925675");
      Undly_88.add_attribute("EncUndSecDescLen", "1408230231"); // 2
      Undly_88_set.insert("1408230231");
      Undly_88.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2095319658"); // 2
      Undly_88_set.insert("EncodedUnderlyingSecurityDesc_t_2095319658");
      Undly_88.add_attribute("CPPgm", "UnderlyingCPProgram_t_73176627"); // 2
      Undly_88_set.insert("UnderlyingCPProgram_t_73176627");
      Undly_88.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1275785964"); // 2
      Undly_88_set.insert("UnderlyingCPRegType_t_1275785964");
      Undly_88.add_attribute("AllocPct", "2278515.760000"); // 2
      Undly_88_set.insert("2278515.760000");
      Undly_88.add_attribute("Ccy", "JPY"); // 2
      Undly_88_set.insert("JPY");
      Undly_88.add_attribute("Qty", "13922411.020000"); // 2
      Undly_88_set.insert("13922411.020000");
      Undly_88.add_attribute("SettlTyp", "4"); // 2
      Undly_88_set.insert("4");
      Undly_88.add_attribute("CashAmt", "UnderlyingCashAmount_t_604822752"); // 2
      Undly_88_set.insert("UnderlyingCashAmount_t_604822752");
      Undly_88.add_attribute("CashTyp", "DIFF"); // 2
      Undly_88_set.insert("DIFF");
      Undly_88.add_attribute("Px", "7196598.480000"); // 2
      Undly_88_set.insert("7196598.480000");
      Undly_88.add_attribute("DirtPx", "11639269.140000"); // 2
      Undly_88_set.insert("11639269.140000");
      Undly_88.add_attribute("EndPx", "21139031.050000"); // 2
      Undly_88_set.insert("21139031.050000");
      Undly_88.add_attribute("StartVal", "UnderlyingStartValue_t_23296063"); // 2
      Undly_88_set.insert("UnderlyingStartValue_t_23296063");
      Undly_88.add_attribute("CurVal", "UnderlyingCurrentValue_t_1162049943"); // 2
      Undly_88_set.insert("UnderlyingCurrentValue_t_1162049943");
      Undly_88.add_attribute("EndVal", "UnderlyingEndValue_t_1458226773"); // 2
      Undly_88_set.insert("UnderlyingEndValue_t_1458226773");
      Undly_88.add_attribute("AdjQty", "16876502.250000"); // 2
      Undly_88_set.insert("16876502.250000");
      Undly_88.add_attribute("FxRate", "2671680.640000"); // 2
      Undly_88_set.insert("2671680.640000");
      Undly_88.add_attribute("FxRateCalc", "M"); // 2
      Undly_88_set.insert("M");
      Undly_88.add_attribute("CapValu", "UnderlyingCapValue_t_2071934449"); // 2
      Undly_88_set.insert("UnderlyingCapValue_t_2071934449");
      Undly_88.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1009015629"); // 2
      Undly_88_set.insert("UnderlyingSettlMethod_t_1009015629");
      Undly_88.add_attribute("PutCall", "2064774469"); // 2
      Undly_88_set.insert("2064774469");
      all_values.push_back(Undly_88_set);
      all_compo_names.insert("Undly_88_set");

      {
        xml_element UndAID_88{"UndAID"};
        multiset<string> UndAID_88_set;
        UndAID_88.add_attribute("AltID", "UnderlyingSecurityAltID_t_671415898"); // 3
        UndAID_88_set.insert("UnderlyingSecurityAltID_t_671415898");
        UndAID_88.add_attribute("AltIDSrc", "7"); // 3
        UndAID_88_set.insert("7");
        all_values.push_back(UndAID_88_set);
        all_compo_names.insert("UndAID_88_set");

        Undly_88.add_element(UndAID_88);
      }
      {
        xml_element Stip_134{"Stip"};
        multiset<string> Stip_134_set;
        Stip_134.add_attribute("Typ", "MINDNOM"); // 3
        Stip_134_set.insert("MINDNOM");
        Stip_134.add_attribute("Val", "UnderlyingStipValue_t_597978575"); // 3
        Stip_134_set.insert("UnderlyingStipValue_t_597978575");
        all_values.push_back(Stip_134_set);
        all_compo_names.insert("Stip_134_set");

        Undly_88.add_element(Stip_134);
      }
      {
        xml_element Pty_342{"Pty"};
        multiset<string> Pty_342_set;
        Pty_342.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1395553903"); // 3
        Pty_342_set.insert("UnderlyingInstrumentPartyID_t_1395553903");
        Pty_342.add_attribute("Src", "7"); // 3
        Pty_342_set.insert("7");
        Pty_342.add_attribute("R", "19"); // 3
        Pty_342_set.insert("19");
        all_values.push_back(Pty_342_set);
        all_compo_names.insert("Pty_342_set");

        {
          xml_element Sub_342{"Sub"};
          multiset<string> Sub_342_set;
          Sub_342.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_226995930"); // 4
          Sub_342_set.insert("UnderlyingInstrumentPartySubID_t_226995930");
          Sub_342.add_attribute("Typ", "15"); // 4
          Sub_342_set.insert("15");
          all_values.push_back(Sub_342_set);
          all_compo_names.insert("Sub_342_set");

          Pty_342.add_element(Sub_342);
        }
        Undly_88.add_element(Pty_342);
      }
      QuotReqRej_0.add_element(Undly_88);
    }
    {
      xml_element OrdQty_21{"OrdQty"};
      multiset<string> OrdQty_21_set;
      OrdQty_21.add_attribute("Qty", "17861169.680000"); // 2
      OrdQty_21_set.insert("17861169.680000");
      OrdQty_21.add_attribute("Cash", "3001725.580000"); // 2
      OrdQty_21_set.insert("3001725.580000");
      OrdQty_21.add_attribute("Pct", "9439651.270000"); // 2
      OrdQty_21_set.insert("9439651.270000");
      OrdQty_21.add_attribute("RndDir", "0"); // 2
      OrdQty_21_set.insert("0");
      OrdQty_21.add_attribute("RndMod", "3868381.850000"); // 2
      OrdQty_21_set.insert("3868381.850000");
      all_values.push_back(OrdQty_21_set);
      all_compo_names.insert("OrdQty_21_set");

      QuotReqRej_0.add_element(OrdQty_21);
    }
    {
      xml_element Stip_135{"Stip"};
      multiset<string> Stip_135_set;
      Stip_135.add_attribute("Typ", "WAC"); // 2
      Stip_135_set.insert("WAC");
      Stip_135.add_attribute("Val", "StipulationValue_t_1258725998"); // 2
      Stip_135_set.insert("StipulationValue_t_1258725998");
      all_values.push_back(Stip_135_set);
      all_compo_names.insert("Stip_135_set");

      QuotReqRej_0.add_element(Stip_135);
    }
    {
      xml_element Leg_69{"Leg"};
      multiset<string> Leg_69_set;
      Leg_69.add_attribute("Qty", "17819408.670000"); // 2
      Leg_69_set.insert("17819408.670000");
      Leg_69.add_attribute("OrdQty", "20760501.660000"); // 2
      Leg_69_set.insert("20760501.660000");
      Leg_69.add_attribute("SwapTyp", "1"); // 2
      Leg_69_set.insert("1");
      Leg_69.add_attribute("SettlTyp", "7"); // 2
      Leg_69_set.insert("7");
      Leg_69.add_attribute("SettlDt", "LegSettlDate_t_1092493432"); // 2
      Leg_69_set.insert("LegSettlDate_t_1092493432");
      Leg_69.add_attribute("RefID", "LegRefID_t_1560693425"); // 2
      Leg_69_set.insert("LegRefID_t_1560693425");
      all_values.push_back(Leg_69_set);
      all_compo_names.insert("Leg_69_set");

      {
        xml_element Leg_70{"Leg"};
        multiset<string> Leg_70_set;
        Leg_70.add_attribute("Sym", "LegSymbol_t_377413131"); // 3
        Leg_70_set.insert("LegSymbol_t_377413131");
        Leg_70.add_attribute("Sfx", "CD"); // 3
        Leg_70_set.insert("CD");
        Leg_70.add_attribute("ID", "LegSecurityID_t_871436550"); // 3
        Leg_70_set.insert("LegSecurityID_t_871436550");
        Leg_70.add_attribute("Src", "5"); // 3
        Leg_70_set.insert("5");
        Leg_70.add_attribute("Prod", "12"); // 3
        Leg_70_set.insert("12");
        Leg_70.add_attribute("CFI", "LegCFICode_t_464664672"); // 3
        Leg_70_set.insert("LegCFICode_t_464664672");
        Leg_70.add_attribute("SecTyp", "PZFJ"); // 3
        Leg_70_set.insert("PZFJ");
        Leg_70.add_attribute("SecSubTyp", "LegSecuritySubType_t_1383243421"); // 3
        Leg_70_set.insert("LegSecuritySubType_t_1383243421");
        Leg_70.add_attribute("MMY", "381955494"); // 3
        Leg_70_set.insert("381955494");
        Leg_70.add_attribute("Mat", "LegMaturityDate_t_513446407"); // 3
        Leg_70_set.insert("LegMaturityDate_t_513446407");
        Leg_70.add_attribute("MatTm", "1730019483"); // 3
        Leg_70_set.insert("1730019483");
        Leg_70.add_attribute("CpnPmt", "LegCouponPaymentDate_t_469255999"); // 3
        Leg_70_set.insert("LegCouponPaymentDate_t_469255999");
        Leg_70.add_attribute("Issued", "LegIssueDate_t_1111424983"); // 3
        Leg_70_set.insert("LegIssueDate_t_1111424983");
        Leg_70.add_attribute("RepoCollSecTyp", "978089738"); // 3
        Leg_70_set.insert("978089738");
        Leg_70.add_attribute("RepoTrm", "876688579"); // 3
        Leg_70_set.insert("876688579");
        Leg_70.add_attribute("RepoRt", "8022222.930000"); // 3
        Leg_70_set.insert("8022222.930000");
        Leg_70.add_attribute("Fctr", "12050856.680000"); // 3
        Leg_70_set.insert("12050856.680000");
        Leg_70.add_attribute("CrdRtg", "LegCreditRating_t_544867742"); // 3
        Leg_70_set.insert("LegCreditRating_t_544867742");
        Leg_70.add_attribute("Rgstry", "LegInstrRegistry_t_440855613"); // 3
        Leg_70_set.insert("LegInstrRegistry_t_440855613");
        Leg_70.add_attribute("Ctry", "1505258226"); // 3
        Leg_70_set.insert("1505258226");
        Leg_70.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1488832870"); // 3
        Leg_70_set.insert("LegStateOrProvinceOfIssue_t_1488832870");
        Leg_70.add_attribute("Lcl", "LegLocaleOfIssue_t_307340509"); // 3
        Leg_70_set.insert("LegLocaleOfIssue_t_307340509");
        Leg_70.add_attribute("Redeem", "LegRedemptionDate_t_1892096412"); // 3
        Leg_70_set.insert("LegRedemptionDate_t_1892096412");
        Leg_70.add_attribute("Strk", "8125766.360000"); // 3
        Leg_70_set.insert("8125766.360000");
        Leg_70.add_attribute("StrkCcy", "EUR"); // 3
        Leg_70_set.insert("EUR");
        Leg_70.add_attribute("OptA", "741143154"); // 3
        Leg_70_set.insert("741143154");
        Leg_70.add_attribute("Cmult", "10128568.280000"); // 3
        Leg_70_set.insert("10128568.280000");
        Leg_70.add_attribute("MultTyp", "0"); // 3
        Leg_70_set.insert("0");
        Leg_70.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_70_set.insert("2");
        Leg_70.add_attribute("UOM", "Gal"); // 3
        Leg_70_set.insert("Gal");
        Leg_70.add_attribute("UOMQty", "1106001.820000"); // 3
        Leg_70_set.insert("1106001.820000");
        Leg_70.add_attribute("PxUOM", "Alw"); // 3
        Leg_70_set.insert("Alw");
        Leg_70.add_attribute("PxUOMQty", "12975031.550000"); // 3
        Leg_70_set.insert("12975031.550000");
        Leg_70.add_attribute("TmUnit", "Wk"); // 3
        Leg_70_set.insert("Wk");
        Leg_70.add_attribute("ExerStyle", "1"); // 3
        Leg_70_set.insert("1");
        Leg_70.add_attribute("CpnRt", "17621678.280000"); // 3
        Leg_70_set.insert("17621678.280000");
        Leg_70.add_attribute("Exch", "LegSecurityExchange_t_2017694048"); // 3
        Leg_70_set.insert("LegSecurityExchange_t_2017694048");
        Leg_70.add_attribute("Issr", "LegIssuer_t_1550683880"); // 3
        Leg_70_set.insert("LegIssuer_t_1550683880");
        Leg_70.add_attribute("EncLegIssrLen", "2144123322"); // 3
        Leg_70_set.insert("2144123322");
        Leg_70.add_attribute("EncLegIssr", "EncodedLegIssuer_t_383656807"); // 3
        Leg_70_set.insert("EncodedLegIssuer_t_383656807");
        Leg_70.add_attribute("Desc", "LegSecurityDesc_t_1133219715"); // 3
        Leg_70_set.insert("LegSecurityDesc_t_1133219715");
        Leg_70.add_attribute("EncLegSecDescLen", "465895673"); // 3
        Leg_70_set.insert("465895673");
        Leg_70.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1495081790"); // 3
        Leg_70_set.insert("EncodedLegSecurityDesc_t_1495081790");
        Leg_70.add_attribute("RatioQty", "21113094.530000"); // 3
        Leg_70_set.insert("21113094.530000");
        Leg_70.add_attribute("Side", "E"); // 3
        Leg_70_set.insert("E");
        Leg_70.add_attribute("Ccy", "CAN"); // 3
        Leg_70_set.insert("CAN");
        Leg_70.add_attribute("Pool", "LegPool_t_1887451995"); // 3
        Leg_70_set.insert("LegPool_t_1887451995");
        Leg_70.add_attribute("Dated", "LegDatedDate_t_590676048"); // 3
        Leg_70_set.insert("LegDatedDate_t_590676048");
        Leg_70.add_attribute("CSetMo", "526686052"); // 3
        Leg_70_set.insert("526686052");
        Leg_70.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1228801217"); // 3
        Leg_70_set.insert("LegInterestAccrualDate_t_1228801217");
        Leg_70.add_attribute("PutCall", "898016558"); // 3
        Leg_70_set.insert("898016558");
        Leg_70.add_attribute("LegOptionRatio", "2712988.160000"); // 3
        Leg_70_set.insert("2712988.160000");
        Leg_70.add_attribute("Px", "20413778.530000"); // 3
        Leg_70_set.insert("20413778.530000");
        all_values.push_back(Leg_70_set);
        all_compo_names.insert("Leg_70_set");

        {
          xml_element LegAID_67{"LegAID"};
          multiset<string> LegAID_67_set;
          LegAID_67.add_attribute("SecAltID", "LegSecurityAltID_t_316599418"); // 4
          LegAID_67_set.insert("LegSecurityAltID_t_316599418");
          LegAID_67.add_attribute("SecAltIDSrc", "I"); // 4
          LegAID_67_set.insert("I");
          all_values.push_back(LegAID_67_set);
          all_compo_names.insert("LegAID_67_set");

          Leg_70.add_element(LegAID_67);
        }
        Leg_69.add_element(Leg_70);
      }
      {
        xml_element Stip_136{"Stip"};
        multiset<string> Stip_136_set;
        Stip_136.add_attribute("StipTyp", "ABS"); // 3
        Stip_136_set.insert("ABS");
        Stip_136.add_attribute("StipVal", "LegStipulationValue_t_1329456246"); // 3
        Stip_136_set.insert("LegStipulationValue_t_1329456246");
        all_values.push_back(Stip_136_set);
        all_compo_names.insert("Stip_136_set");

        Leg_69.add_element(Stip_136);
      }
      {
        xml_element Pty_343{"Pty"};
        multiset<string> Pty_343_set;
        Pty_343.add_attribute("ID", "NestedPartyID_t_1531039498"); // 3
        Pty_343_set.insert("NestedPartyID_t_1531039498");
        Pty_343.add_attribute("Src", "A"); // 3
        Pty_343_set.insert("A");
        Pty_343.add_attribute("R", "50"); // 3
        Pty_343_set.insert("50");
        all_values.push_back(Pty_343_set);
        all_compo_names.insert("Pty_343_set");

        {
          xml_element Sub_343{"Sub"};
          multiset<string> Sub_343_set;
          Sub_343.add_attribute("ID", "NestedPartySubID_t_1641639680"); // 4
          Sub_343_set.insert("NestedPartySubID_t_1641639680");
          Sub_343.add_attribute("Typ", "26"); // 4
          Sub_343_set.insert("26");
          all_values.push_back(Sub_343_set);
          all_compo_names.insert("Sub_343_set");

          Pty_343.add_element(Sub_343);
        }
        Leg_69.add_element(Pty_343);
      }
      {
        xml_element BnchmkCurve_5{"BnchmkCurve"};
        multiset<string> BnchmkCurve_5_set;
        BnchmkCurve_5.add_attribute("Ccy", "CAN"); // 3
        BnchmkCurve_5_set.insert("CAN");
        BnchmkCurve_5.add_attribute("Name", "EUREPO"); // 3
        BnchmkCurve_5_set.insert("EUREPO");
        BnchmkCurve_5.add_attribute("Point", "LegBenchmarkCurvePoint_t_520226538"); // 3
        BnchmkCurve_5_set.insert("LegBenchmarkCurvePoint_t_520226538");
        BnchmkCurve_5.add_attribute("Px", "15400299.710000"); // 3
        BnchmkCurve_5_set.insert("15400299.710000");
        BnchmkCurve_5.add_attribute("PxTyp", "1832527305"); // 3
        BnchmkCurve_5_set.insert("1832527305");
        all_values.push_back(BnchmkCurve_5_set);
        all_compo_names.insert("BnchmkCurve_5_set");

        Leg_69.add_element(BnchmkCurve_5);
      }
      QuotReqRej_0.add_element(Leg_69);
    }
    {
      xml_element QuotQual_4{"QuotQual"};
      multiset<string> QuotQual_4_set;
      QuotQual_4.add_attribute("Qual", "R"); // 2
      QuotQual_4_set.insert("R");
      all_values.push_back(QuotQual_4_set);
      all_compo_names.insert("QuotQual_4_set");

      QuotReqRej_0.add_element(QuotQual_4);
    }
    {
      xml_element SprdBnchmkCurve_26{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_26_set;
      SprdBnchmkCurve_26.add_attribute("Spread", "19236867.780000"); // 2
      SprdBnchmkCurve_26_set.insert("19236867.780000");
      SprdBnchmkCurve_26.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_26_set.insert("JPY");
      SprdBnchmkCurve_26.add_attribute("Name", "EUREPO"); // 2
      SprdBnchmkCurve_26_set.insert("EUREPO");
      SprdBnchmkCurve_26.add_attribute("Point", "BenchmarkCurvePoint_t_782089177"); // 2
      SprdBnchmkCurve_26_set.insert("BenchmarkCurvePoint_t_782089177");
      SprdBnchmkCurve_26.add_attribute("Px", "1778624.910000"); // 2
      SprdBnchmkCurve_26_set.insert("1778624.910000");
      SprdBnchmkCurve_26.add_attribute("PxTyp", "9"); // 2
      SprdBnchmkCurve_26_set.insert("9");
      SprdBnchmkCurve_26.add_attribute("SecID", "BenchmarkSecurityID_t_1951000650"); // 2
      SprdBnchmkCurve_26_set.insert("BenchmarkSecurityID_t_1951000650");
      SprdBnchmkCurve_26.add_attribute("SecIDSrc", "5"); // 2
      SprdBnchmkCurve_26_set.insert("5");
      all_values.push_back(SprdBnchmkCurve_26_set);
      all_compo_names.insert("SprdBnchmkCurve_26_set");

      QuotReqRej_0.add_element(SprdBnchmkCurve_26);
    }
    {
      xml_element Yield_21{"Yield"};
      multiset<string> Yield_21_set;
      Yield_21.add_attribute("Typ", "GROSS"); // 2
      Yield_21_set.insert("GROSS");
      Yield_21.add_attribute("Yld", "3302030.540000"); // 2
      Yield_21_set.insert("3302030.540000");
      Yield_21.add_attribute("CalcDt", "YieldCalcDate_t_1146632056"); // 2
      Yield_21_set.insert("YieldCalcDate_t_1146632056");
      Yield_21.add_attribute("RedDt", "YieldRedemptionDate_t_762314315"); // 2
      Yield_21_set.insert("YieldRedemptionDate_t_762314315");
      Yield_21.add_attribute("RedPx", "6015018.700000"); // 2
      Yield_21_set.insert("6015018.700000");
      Yield_21.add_attribute("RedPxTyp", "8"); // 2
      Yield_21_set.insert("8");
      all_values.push_back(Yield_21_set);
      all_compo_names.insert("Yield_21_set");

      QuotReqRej_0.add_element(Yield_21);
    }
    {
      xml_element Pty_344{"Pty"};
      multiset<string> Pty_344_set;
      Pty_344.add_attribute("ID", "PartyID_t_1078913733"); // 2
      Pty_344_set.insert("PartyID_t_1078913733");
      Pty_344.add_attribute("Src", "1"); // 2
      Pty_344_set.insert("1");
      Pty_344.add_attribute("R", "83"); // 2
      Pty_344_set.insert("83");
      all_values.push_back(Pty_344_set);
      all_compo_names.insert("Pty_344_set");

      {
        xml_element Sub_344{"Sub"};
        multiset<string> Sub_344_set;
        Sub_344.add_attribute("ID", "PartySubID_t_260886331"); // 3
        Sub_344_set.insert("PartySubID_t_260886331");
        Sub_344.add_attribute("Typ", "29"); // 3
        Sub_344_set.insert("29");
        all_values.push_back(Sub_344_set);
        all_compo_names.insert("Sub_344_set");

        Pty_344.add_element(Sub_344);
      }
      QuotReqRej_0.add_element(Pty_344);
    }
    elt.add_element(QuotReqRej_0);
  } // end QuotReqRej
  { // QuotReqRej
    xml_element QuotReqRej_1{"QuotReqRej"};
    multiset<string> QuotReqRej_1_set;
    QuotReqRej_1.add_attribute("PrevClsPx", "19967539.200000"); // 1
    QuotReqRej_1_set.insert("19967539.200000");
    QuotReqRej_1.add_attribute("ReqTyp", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("Typ", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("SesID", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("SesSub", "3"); // 1
    QuotReqRej_1_set.insert("3");
    QuotReqRej_1.add_attribute("OrignDt", "TradeOriginationDate_t_799402124"); // 1
    QuotReqRej_1_set.insert("TradeOriginationDate_t_799402124");
    QuotReqRej_1.add_attribute("Side", "8"); // 1
    QuotReqRej_1_set.insert("8");
    QuotReqRej_1.add_attribute("QtyTyp", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("SettlTyp", "B"); // 1
    QuotReqRej_1_set.insert("B");
    QuotReqRej_1.add_attribute("SettlDt", "SettlDate_t_2078043968"); // 1
    QuotReqRej_1_set.insert("SettlDate_t_2078043968");
    QuotReqRej_1.add_attribute("SettlDt2", "SettlDate2_t_1811560643"); // 1
    QuotReqRej_1_set.insert("SettlDate2_t_1811560643");
    QuotReqRej_1.add_attribute("Qty2", "21156352.250000"); // 1
    QuotReqRej_1_set.insert("21156352.250000");
    QuotReqRej_1.add_attribute("Ccy", "EUR"); // 1
    QuotReqRej_1_set.insert("EUR");
    QuotReqRej_1.add_attribute("Acct", "Account_t_1239436498"); // 1
    QuotReqRej_1_set.insert("Account_t_1239436498");
    QuotReqRej_1.add_attribute("AcctIDSrc", "99"); // 1
    QuotReqRej_1_set.insert("99");
    QuotReqRej_1.add_attribute("AcctTyp", "7"); // 1
    QuotReqRej_1_set.insert("7");
    QuotReqRej_1.add_attribute("QuotPxTyp", "7"); // 1
    QuotReqRej_1_set.insert("7");
    QuotReqRej_1.add_attribute("OrdTyp", "H"); // 1
    QuotReqRej_1_set.insert("H");
    QuotReqRej_1.add_attribute("ExpireTm", "ExpireTime_t_742532211"); // 1
    QuotReqRej_1_set.insert("ExpireTime_t_742532211");
    QuotReqRej_1.add_attribute("TxnTm", "TransactTime_t_377355964"); // 1
    QuotReqRej_1_set.insert("TransactTime_t_377355964");
    QuotReqRej_1.add_attribute("PxTyp", "1"); // 1
    QuotReqRej_1_set.insert("1");
    QuotReqRej_1.add_attribute("Px", "18891642.670000"); // 1
    QuotReqRej_1_set.insert("18891642.670000");
    QuotReqRej_1.add_attribute("Px2", "11396702.790000"); // 1
    QuotReqRej_1_set.insert("11396702.790000");
    all_values.push_back(QuotReqRej_1_set);
    all_compo_names.insert("QuotReqRej_1_set");

    {
      xml_element Instrmt_63{"Instrmt"};
      multiset<string> Instrmt_63_set;
      Instrmt_63.add_attribute("Sym", "Symbol_t_118651149"); // 2
      Instrmt_63_set.insert("Symbol_t_118651149");
      Instrmt_63.add_attribute("Sfx", "CD"); // 2
      Instrmt_63_set.insert("CD");
      Instrmt_63.add_attribute("ID", "SecurityID_t_71100364"); // 2
      Instrmt_63_set.insert("SecurityID_t_71100364");
      Instrmt_63.add_attribute("Src", "L"); // 2
      Instrmt_63_set.insert("L");
      Instrmt_63.add_attribute("Prod", "4"); // 2
      Instrmt_63_set.insert("4");
      Instrmt_63.add_attribute("ProdCmplx", "ProductComplex_t_331986695"); // 2
      Instrmt_63_set.insert("ProductComplex_t_331986695");
      Instrmt_63.add_attribute("SecGrp", "SecurityGroup_t_5948339"); // 2
      Instrmt_63_set.insert("SecurityGroup_t_5948339");
      Instrmt_63.add_attribute("CFI", "CFICode_t_159557126"); // 2
      Instrmt_63_set.insert("CFICode_t_159557126");
      Instrmt_63.add_attribute("SecTyp", "AMENDED"); // 2
      Instrmt_63_set.insert("AMENDED");
      Instrmt_63.add_attribute("SubTyp", "SecuritySubType_t_1283014540"); // 2
      Instrmt_63_set.insert("SecuritySubType_t_1283014540");
      Instrmt_63.add_attribute("MMY", "123230365"); // 2
      Instrmt_63_set.insert("123230365");
      Instrmt_63.add_attribute("MatDt", "MaturityDate_t_975380121"); // 2
      Instrmt_63_set.insert("MaturityDate_t_975380121");
      Instrmt_63.add_attribute("MatTm", "2082416664"); // 2
      Instrmt_63_set.insert("2082416664");
      Instrmt_63.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_368747028"); // 2
      Instrmt_63_set.insert("SettleOnOpenFlag_t_368747028");
      Instrmt_63.add_attribute("AsgnMeth", "122590904"); // 2
      Instrmt_63_set.insert("122590904");
      Instrmt_63.add_attribute("Status", "2"); // 2
      Instrmt_63_set.insert("2");
      Instrmt_63.add_attribute("CpnPmt", "CouponPaymentDate_t_299307349"); // 2
      Instrmt_63_set.insert("CouponPaymentDate_t_299307349");
      Instrmt_63.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_63_set.insert("FR");
      Instrmt_63.add_attribute("Snrty", "SR"); // 2
      Instrmt_63_set.insert("SR");
      Instrmt_63.add_attribute("NotlPctOut", "10481310.410000"); // 2
      Instrmt_63_set.insert("10481310.410000");
      Instrmt_63.add_attribute("OrigNotlPctOut", "4335067.810000"); // 2
      Instrmt_63_set.insert("4335067.810000");
      Instrmt_63.add_attribute("AttchPnt", "13344695.390000"); // 2
      Instrmt_63_set.insert("13344695.390000");
      Instrmt_63.add_attribute("DetchPnt", "4315602.630000"); // 2
      Instrmt_63_set.insert("4315602.630000");
      Instrmt_63.add_attribute("Issued", "IssueDate_t_1258208154"); // 2
      Instrmt_63_set.insert("IssueDate_t_1258208154");
      Instrmt_63.add_attribute("RepoCollSecTyp", "1847527746"); // 2
      Instrmt_63_set.insert("1847527746");
      Instrmt_63.add_attribute("RepoTrm", "1765990135"); // 2
      Instrmt_63_set.insert("1765990135");
      Instrmt_63.add_attribute("RepoRt", "20007403.650000"); // 2
      Instrmt_63_set.insert("20007403.650000");
      Instrmt_63.add_attribute("Fctr", "774000.620000"); // 2
      Instrmt_63_set.insert("774000.620000");
      Instrmt_63.add_attribute("CrdRtg", "CreditRating_t_1283139413"); // 2
      Instrmt_63_set.insert("CreditRating_t_1283139413");
      Instrmt_63.add_attribute("Rgstry", "InstrRegistry_t_1742420984"); // 2
      Instrmt_63_set.insert("InstrRegistry_t_1742420984");
      Instrmt_63.add_attribute("IssuCtry", "1217070341"); // 2
      Instrmt_63_set.insert("1217070341");
      Instrmt_63.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1401790562"); // 2
      Instrmt_63_set.insert("StateOrProvinceOfIssue_t_1401790562");
      Instrmt_63.add_attribute("Lcl", "LocaleOfIssue_t_377144216"); // 2
      Instrmt_63_set.insert("LocaleOfIssue_t_377144216");
      Instrmt_63.add_attribute("Redeem", "RedemptionDate_t_1288170705"); // 2
      Instrmt_63_set.insert("RedemptionDate_t_1288170705");
      Instrmt_63.add_attribute("StrkPx", "17723123.810000"); // 2
      Instrmt_63_set.insert("17723123.810000");
      Instrmt_63.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_63_set.insert("GBP");
      Instrmt_63.add_attribute("StrkMult", "17782607.210000"); // 2
      Instrmt_63_set.insert("17782607.210000");
      Instrmt_63.add_attribute("StrkValu", "8469881.970000"); // 2
      Instrmt_63_set.insert("8469881.970000");
      Instrmt_63.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_63_set.insert("2");
      Instrmt_63.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_63_set.insert("4");
      Instrmt_63.add_attribute("StrkPxBndryPrcsn", "9702185.620000"); // 2
      Instrmt_63_set.insert("9702185.620000");
      Instrmt_63.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_63_set.insert("4");
      Instrmt_63.add_attribute("OptAt", "848724630"); // 2
      Instrmt_63_set.insert("848724630");
      Instrmt_63.add_attribute("Mult", "13389655.900000"); // 2
      Instrmt_63_set.insert("13389655.900000");
      Instrmt_63.add_attribute("MultTyp", "0"); // 2
      Instrmt_63_set.insert("0");
      Instrmt_63.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_63_set.insert("3");
      Instrmt_63.add_attribute("MinPxIncr", "16382729.390000"); // 2
      Instrmt_63_set.insert("16382729.390000");
      Instrmt_63.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_558224907"); // 2
      Instrmt_63_set.insert("MinPriceIncrementAmount_t_558224907");
      Instrmt_63.add_attribute("UOM", "MMbbl"); // 2
      Instrmt_63_set.insert("MMbbl");
      Instrmt_63.add_attribute("UOMQty", "5389203.330000"); // 2
      Instrmt_63_set.insert("5389203.330000");
      Instrmt_63.add_attribute("PxUOM", "MWh"); // 2
      Instrmt_63_set.insert("MWh");
      Instrmt_63.add_attribute("PxUOMQty", "2576250.260000"); // 2
      Instrmt_63_set.insert("2576250.260000");
      Instrmt_63.add_attribute("SettlMeth", "C"); // 2
      Instrmt_63_set.insert("C");
      Instrmt_63.add_attribute("ExerStyle", "0"); // 2
      Instrmt_63_set.insert("0");
      Instrmt_63.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_63_set.insert("3");
      Instrmt_63.add_attribute("OptPayAmt", "OptPayoutAmount_t_588987083"); // 2
      Instrmt_63_set.insert("OptPayoutAmount_t_588987083");
      Instrmt_63.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_63_set.insert("STD");
      Instrmt_63.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_63_set.insert("FUTDA");
      Instrmt_63.add_attribute("ListMeth", "0"); // 2
      Instrmt_63_set.insert("0");
      Instrmt_63.add_attribute("CapPx", "16981338.960000"); // 2
      Instrmt_63_set.insert("16981338.960000");
      Instrmt_63.add_attribute("FlrPx", "12521395.280000"); // 2
      Instrmt_63_set.insert("12521395.280000");
      Instrmt_63.add_attribute("PutCall", "1"); // 2
      Instrmt_63_set.insert("1");
      Instrmt_63.add_attribute("FlexInd", "true"); // 2
      Instrmt_63_set.insert("true");
      Instrmt_63.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_63_set.insert("true");
      Instrmt_63.add_attribute("TmUnit", "D"); // 2
      Instrmt_63_set.insert("D");
      Instrmt_63.add_attribute("CpnRt", "6152255.350000"); // 2
      Instrmt_63_set.insert("6152255.350000");
      Instrmt_63.add_attribute("Exch", "SecurityExchange_t_2012983986"); // 2
      Instrmt_63_set.insert("SecurityExchange_t_2012983986");
      Instrmt_63.add_attribute("PosLmt", "382039217"); // 2
      Instrmt_63_set.insert("382039217");
      Instrmt_63.add_attribute("NTPosLmt", "1462213732"); // 2
      Instrmt_63_set.insert("1462213732");
      Instrmt_63.add_attribute("Issr", "Issuer_t_1686569968"); // 2
      Instrmt_63_set.insert("Issuer_t_1686569968");
      Instrmt_63.add_attribute("EncIssrLen", "1295830831"); // 2
      Instrmt_63_set.insert("1295830831");
      Instrmt_63.add_attribute("EncIssr", "EncodedIssuer_t_284948646"); // 2
      Instrmt_63_set.insert("EncodedIssuer_t_284948646");
      Instrmt_63.add_attribute("Desc", "SecurityDesc_t_188052423"); // 2
      Instrmt_63_set.insert("SecurityDesc_t_188052423");
      Instrmt_63.add_attribute("EncSecDescLen", "2144555461"); // 2
      Instrmt_63_set.insert("2144555461");
      Instrmt_63.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1623914236"); // 2
      Instrmt_63_set.insert("EncodedSecurityDesc_t_1623914236");
      Instrmt_63.add_attribute("Pool", "Pool_t_959609430"); // 2
      Instrmt_63_set.insert("Pool_t_959609430");
      Instrmt_63.add_attribute("CSetMo", "972677906"); // 2
      Instrmt_63_set.insert("972677906");
      Instrmt_63.add_attribute("CPPgm", "99"); // 2
      Instrmt_63_set.insert("99");
      Instrmt_63.add_attribute("CPRegT", "CPRegType_t_1517834338"); // 2
      Instrmt_63_set.insert("CPRegType_t_1517834338");
      Instrmt_63.add_attribute("Dated", "DatedDate_t_2043317041"); // 2
      Instrmt_63_set.insert("DatedDate_t_2043317041");
      Instrmt_63.add_attribute("IntAcrl", "InterestAccrualDate_t_1653623861"); // 2
      Instrmt_63_set.insert("InterestAccrualDate_t_1653623861");
      all_values.push_back(Instrmt_63_set);
      all_compo_names.insert("Instrmt_63_set");

      {
        xml_element AID_66{"AID"};
        multiset<string> AID_66_set;
        AID_66.add_attribute("AltID", "SecurityAltID_t_362082379"); // 3
        AID_66_set.insert("SecurityAltID_t_362082379");
        AID_66.add_attribute("AltIDSrc", "G"); // 3
        AID_66_set.insert("G");
        all_values.push_back(AID_66_set);
        all_compo_names.insert("AID_66_set");

        Instrmt_63.add_element(AID_66);
      }
      {
        xml_element SecXML_66{"SecXML"};
        multiset<string> SecXML_66_set;
        SecXML_66.add_attribute("Schema", "SecurityXMLSchema_t_476620809"); // 3
        SecXML_66_set.insert("SecurityXMLSchema_t_476620809");
        all_values.push_back(SecXML_66_set);
        all_compo_names.insert("SecXML_66_set");

        Instrmt_63.add_element(SecXML_66);
      }
      {
        xml_element Evnt_66{"Evnt"};
        multiset<string> Evnt_66_set;
        Evnt_66.add_attribute("EventTyp", "14"); // 3
        Evnt_66_set.insert("14");
        Evnt_66.add_attribute("Dt", "EventDate_t_111127543"); // 3
        Evnt_66_set.insert("EventDate_t_111127543");
        Evnt_66.add_attribute("Tm", "EventTime_t_1065607892"); // 3
        Evnt_66_set.insert("EventTime_t_1065607892");
        Evnt_66.add_attribute("Px", "4202514.860000"); // 3
        Evnt_66_set.insert("4202514.860000");
        Evnt_66.add_attribute("Txt", "EventText_t_146196730"); // 3
        Evnt_66_set.insert("EventText_t_146196730");
        all_values.push_back(Evnt_66_set);
        all_compo_names.insert("Evnt_66_set");

        Instrmt_63.add_element(Evnt_66);
      }
      {
        xml_element Pty_345{"Pty"};
        multiset<string> Pty_345_set;
        Pty_345.add_attribute("ID", "InstrumentPartyID_t_790250740"); // 3
        Pty_345_set.insert("InstrumentPartyID_t_790250740");
        Pty_345.add_attribute("Src", "F"); // 3
        Pty_345_set.insert("F");
        Pty_345.add_attribute("R", "28"); // 3
        Pty_345_set.insert("28");
        all_values.push_back(Pty_345_set);
        all_compo_names.insert("Pty_345_set");

        {
          xml_element Sub_345{"Sub"};
          multiset<string> Sub_345_set;
          Sub_345.add_attribute("ID", "InstrumentPartySubID_t_1916684151"); // 4
          Sub_345_set.insert("InstrumentPartySubID_t_1916684151");
          Sub_345.add_attribute("Typ", "30"); // 4
          Sub_345_set.insert("30");
          all_values.push_back(Sub_345_set);
          all_compo_names.insert("Sub_345_set");

          Pty_345.add_element(Sub_345);
        }
        Instrmt_63.add_element(Pty_345);
      }
      {
        xml_element CmplxEvnt_63{"CmplxEvnt"};
        multiset<string> CmplxEvnt_63_set;
        CmplxEvnt_63.add_attribute("Typ", "9"); // 3
        CmplxEvnt_63_set.insert("9");
        CmplxEvnt_63.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_520462648"); // 3
        CmplxEvnt_63_set.insert("ComplexOptPayoutAmount_t_520462648");
        CmplxEvnt_63.add_attribute("Px", "5139217.330000"); // 3
        CmplxEvnt_63_set.insert("5139217.330000");
        CmplxEvnt_63.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_63_set.insert("4");
        CmplxEvnt_63.add_attribute("PxBndryPrcsn", "9025018.650000"); // 3
        CmplxEvnt_63_set.insert("9025018.650000");
        CmplxEvnt_63.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_63_set.insert("3");
        CmplxEvnt_63.add_attribute("Cond", "2"); // 3
        CmplxEvnt_63_set.insert("2");
        all_values.push_back(CmplxEvnt_63_set);
        all_compo_names.insert("CmplxEvnt_63_set");

        {
          xml_element EvntDts_63{"EvntDts"};
          multiset<string> EvntDts_63_set;
          EvntDts_63.add_attribute("StartDt", "ComplexEventStartDate_t_50849048"); // 4
          EvntDts_63_set.insert("ComplexEventStartDate_t_50849048");
          EvntDts_63.add_attribute("EndDt", "ComplexEventEndDate_t_113600463"); // 4
          EvntDts_63_set.insert("ComplexEventEndDate_t_113600463");
          all_values.push_back(EvntDts_63_set);
          all_compo_names.insert("EvntDts_63_set");

          {
            xml_element EvntTms_63{"EvntTms"};
            multiset<string> EvntTms_63_set;
            EvntTms_63.add_attribute("StartTm", "1383801926"); // 5
            EvntTms_63_set.insert("1383801926");
            EvntTms_63.add_attribute("EndTm", "47920861"); // 5
            EvntTms_63_set.insert("47920861");
            all_values.push_back(EvntTms_63_set);
            all_compo_names.insert("EvntTms_63_set");

            EvntDts_63.add_element(EvntTms_63);
          }
          CmplxEvnt_63.add_element(EvntDts_63);
        }
        Instrmt_63.add_element(CmplxEvnt_63);
      }
      QuotReqRej_1.add_element(Instrmt_63);
    }
    {
      xml_element FinDetls_21{"FinDetls"};
      multiset<string> FinDetls_21_set;
      FinDetls_21.add_attribute("AgmtDesc", "AgreementDesc_t_1737514700"); // 2
      FinDetls_21_set.insert("AgreementDesc_t_1737514700");
      FinDetls_21.add_attribute("AgmtID", "AgreementID_t_195927709"); // 2
      FinDetls_21_set.insert("AgreementID_t_195927709");
      FinDetls_21.add_attribute("AgmtDt", "AgreementDate_t_1020598768"); // 2
      FinDetls_21_set.insert("AgreementDate_t_1020598768");
      FinDetls_21.add_attribute("AgmtCcy", "CAN"); // 2
      FinDetls_21_set.insert("CAN");
      FinDetls_21.add_attribute("TrmTyp", "2"); // 2
      FinDetls_21_set.insert("2");
      FinDetls_21.add_attribute("StartDt", "StartDate_t_210874793"); // 2
      FinDetls_21_set.insert("StartDate_t_210874793");
      FinDetls_21.add_attribute("EndDt", "EndDate_t_2075844426"); // 2
      FinDetls_21_set.insert("EndDate_t_2075844426");
      FinDetls_21.add_attribute("DlvryTyp", "0"); // 2
      FinDetls_21_set.insert("0");
      FinDetls_21.add_attribute("MgnRatio", "6874956.020000"); // 2
      FinDetls_21_set.insert("6874956.020000");
      all_values.push_back(FinDetls_21_set);
      all_compo_names.insert("FinDetls_21_set");

      QuotReqRej_1.add_element(FinDetls_21);
    }
    {
      xml_element Undly_89{"Undly"};
      multiset<string> Undly_89_set;
      Undly_89.add_attribute("Sym", "UnderlyingSymbol_t_392899352"); // 2
      Undly_89_set.insert("UnderlyingSymbol_t_392899352");
      Undly_89.add_attribute("Sfx", "WI"); // 2
      Undly_89_set.insert("WI");
      Undly_89.add_attribute("ID", "UnderlyingSecurityID_t_1753103494"); // 2
      Undly_89_set.insert("UnderlyingSecurityID_t_1753103494");
      Undly_89.add_attribute("Src", "H"); // 2
      Undly_89_set.insert("H");
      Undly_89.add_attribute("Prod", "13"); // 2
      Undly_89_set.insert("13");
      Undly_89.add_attribute("CFI", "UnderlyingCFICode_t_395870586"); // 2
      Undly_89_set.insert("UnderlyingCFICode_t_395870586");
      Undly_89.add_attribute("SecTyp", "MATURED"); // 2
      Undly_89_set.insert("MATURED");
      Undly_89.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_578067465"); // 2
      Undly_89_set.insert("UnderlyingSecuritySubType_t_578067465");
      Undly_89.add_attribute("MMY", "165071090"); // 2
      Undly_89_set.insert("165071090");
      Undly_89.add_attribute("Mat", "UnderlyingMaturityDate_t_682748770"); // 2
      Undly_89_set.insert("UnderlyingMaturityDate_t_682748770");
      Undly_89.add_attribute("MatTm", "221746662"); // 2
      Undly_89_set.insert("221746662");
      Undly_89.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_685533738"); // 2
      Undly_89_set.insert("UnderlyingCouponPaymentDate_t_685533738");
      Undly_89.add_attribute("RestrctTyp", "FR"); // 2
      Undly_89_set.insert("FR");
      Undly_89.add_attribute("Snrty", "SD"); // 2
      Undly_89_set.insert("SD");
      Undly_89.add_attribute("NotlPctOut", "15880356.030000"); // 2
      Undly_89_set.insert("15880356.030000");
      Undly_89.add_attribute("OrigNotlPctOut", "10253223.210000"); // 2
      Undly_89_set.insert("10253223.210000");
      Undly_89.add_attribute("AttchPnt", "9266757.010000"); // 2
      Undly_89_set.insert("9266757.010000");
      Undly_89.add_attribute("DetchPnt", "16388846.520000"); // 2
      Undly_89_set.insert("16388846.520000");
      Undly_89.add_attribute("Issued", "UnderlyingIssueDate_t_1138922785"); // 2
      Undly_89_set.insert("UnderlyingIssueDate_t_1138922785");
      Undly_89.add_attribute("RepoCollSecTyp", "162993979"); // 2
      Undly_89_set.insert("162993979");
      Undly_89.add_attribute("RepoTrm", "1686805513"); // 2
      Undly_89_set.insert("1686805513");
      Undly_89.add_attribute("RepoRt", "7289538.370000"); // 2
      Undly_89_set.insert("7289538.370000");
      Undly_89.add_attribute("Fctr", "3589216.880000"); // 2
      Undly_89_set.insert("3589216.880000");
      Undly_89.add_attribute("CrdRtg", "UnderlyingCreditRating_t_559920633"); // 2
      Undly_89_set.insert("UnderlyingCreditRating_t_559920633");
      Undly_89.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1433688417"); // 2
      Undly_89_set.insert("UnderlyingInstrRegistry_t_1433688417");
      Undly_89.add_attribute("Ctry", "2072683735"); // 2
      Undly_89_set.insert("2072683735");
      Undly_89.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1476352794"); // 2
      Undly_89_set.insert("UnderlyingStateOrProvinceOfIssue_t_1476352794");
      Undly_89.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1644563210"); // 2
      Undly_89_set.insert("UnderlyingLocaleOfIssue_t_1644563210");
      Undly_89.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2001044513"); // 2
      Undly_89_set.insert("UnderlyingRedemptionDate_t_2001044513");
      Undly_89.add_attribute("StrkPx", "3987597.260000"); // 2
      Undly_89_set.insert("3987597.260000");
      Undly_89.add_attribute("StrkCcy", "CAN"); // 2
      Undly_89_set.insert("CAN");
      Undly_89.add_attribute("OptA", "1579777850"); // 2
      Undly_89_set.insert("1579777850");
      Undly_89.add_attribute("Mult", "19376786.580000"); // 2
      Undly_89_set.insert("19376786.580000");
      Undly_89.add_attribute("MultTyp", "0"); // 2
      Undly_89_set.insert("0");
      Undly_89.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_89_set.insert("1");
      Undly_89.add_attribute("UOM", "Bbl"); // 2
      Undly_89_set.insert("Bbl");
      Undly_89.add_attribute("UOMQty", "18436636.270000"); // 2
      Undly_89_set.insert("18436636.270000");
      Undly_89.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_89_set.insert("oz_tr");
      Undly_89.add_attribute("PxUOMQty", "3511366.860000"); // 2
      Undly_89_set.insert("3511366.860000");
      Undly_89.add_attribute("TmUnit", "Wk"); // 2
      Undly_89_set.insert("Wk");
      Undly_89.add_attribute("ExerStyle", "1"); // 2
      Undly_89_set.insert("1");
      Undly_89.add_attribute("CpnRt", "10366704.240000"); // 2
      Undly_89_set.insert("10366704.240000");
      Undly_89.add_attribute("Exch", "UnderlyingSecurityExchange_t_1575599254"); // 2
      Undly_89_set.insert("UnderlyingSecurityExchange_t_1575599254");
      Undly_89.add_attribute("Issr", "UnderlyingIssuer_t_1290249380"); // 2
      Undly_89_set.insert("UnderlyingIssuer_t_1290249380");
      Undly_89.add_attribute("EncUndIssrLen", "477222380"); // 2
      Undly_89_set.insert("477222380");
      Undly_89.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_453437927"); // 2
      Undly_89_set.insert("EncodedUnderlyingIssuer_t_453437927");
      Undly_89.add_attribute("Desc", "UnderlyingSecurityDesc_t_69441433"); // 2
      Undly_89_set.insert("UnderlyingSecurityDesc_t_69441433");
      Undly_89.add_attribute("EncUndSecDescLen", "2116107032"); // 2
      Undly_89_set.insert("2116107032");
      Undly_89.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1592360712"); // 2
      Undly_89_set.insert("EncodedUnderlyingSecurityDesc_t_1592360712");
      Undly_89.add_attribute("CPPgm", "UnderlyingCPProgram_t_232435413"); // 2
      Undly_89_set.insert("UnderlyingCPProgram_t_232435413");
      Undly_89.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1655428897"); // 2
      Undly_89_set.insert("UnderlyingCPRegType_t_1655428897");
      Undly_89.add_attribute("AllocPct", "1738309.010000"); // 2
      Undly_89_set.insert("1738309.010000");
      Undly_89.add_attribute("Ccy", "CHF"); // 2
      Undly_89_set.insert("CHF");
      Undly_89.add_attribute("Qty", "16075193.180000"); // 2
      Undly_89_set.insert("16075193.180000");
      Undly_89.add_attribute("SettlTyp", "5"); // 2
      Undly_89_set.insert("5");
      Undly_89.add_attribute("CashAmt", "UnderlyingCashAmount_t_1544218677"); // 2
      Undly_89_set.insert("UnderlyingCashAmount_t_1544218677");
      Undly_89.add_attribute("CashTyp", "FIXED"); // 2
      Undly_89_set.insert("FIXED");
      Undly_89.add_attribute("Px", "3701180.540000"); // 2
      Undly_89_set.insert("3701180.540000");
      Undly_89.add_attribute("DirtPx", "19429784.040000"); // 2
      Undly_89_set.insert("19429784.040000");
      Undly_89.add_attribute("EndPx", "12891740.440000"); // 2
      Undly_89_set.insert("12891740.440000");
      Undly_89.add_attribute("StartVal", "UnderlyingStartValue_t_616578272"); // 2
      Undly_89_set.insert("UnderlyingStartValue_t_616578272");
      Undly_89.add_attribute("CurVal", "UnderlyingCurrentValue_t_1375272606"); // 2
      Undly_89_set.insert("UnderlyingCurrentValue_t_1375272606");
      Undly_89.add_attribute("EndVal", "UnderlyingEndValue_t_1079369054"); // 2
      Undly_89_set.insert("UnderlyingEndValue_t_1079369054");
      Undly_89.add_attribute("AdjQty", "16761893.270000"); // 2
      Undly_89_set.insert("16761893.270000");
      Undly_89.add_attribute("FxRate", "21347816.620000"); // 2
      Undly_89_set.insert("21347816.620000");
      Undly_89.add_attribute("FxRateCalc", "D"); // 2
      Undly_89_set.insert("D");
      Undly_89.add_attribute("CapValu", "UnderlyingCapValue_t_1372369307"); // 2
      Undly_89_set.insert("UnderlyingCapValue_t_1372369307");
      Undly_89.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1324874535"); // 2
      Undly_89_set.insert("UnderlyingSettlMethod_t_1324874535");
      Undly_89.add_attribute("PutCall", "1616571337"); // 2
      Undly_89_set.insert("1616571337");
      all_values.push_back(Undly_89_set);
      all_compo_names.insert("Undly_89_set");

      {
        xml_element UndAID_89{"UndAID"};
        multiset<string> UndAID_89_set;
        UndAID_89.add_attribute("AltID", "UnderlyingSecurityAltID_t_1751298057"); // 3
        UndAID_89_set.insert("UnderlyingSecurityAltID_t_1751298057");
        UndAID_89.add_attribute("AltIDSrc", "5"); // 3
        UndAID_89_set.insert("5");
        all_values.push_back(UndAID_89_set);
        all_compo_names.insert("UndAID_89_set");

        Undly_89.add_element(UndAID_89);
      }
      {
        xml_element Stip_137{"Stip"};
        multiset<string> Stip_137_set;
        Stip_137.add_attribute("Typ", "PPM"); // 3
        Stip_137_set.insert("PPM");
        Stip_137.add_attribute("Val", "UnderlyingStipValue_t_1179413663"); // 3
        Stip_137_set.insert("UnderlyingStipValue_t_1179413663");
        all_values.push_back(Stip_137_set);
        all_compo_names.insert("Stip_137_set");

        Undly_89.add_element(Stip_137);
      }
      {
        xml_element Pty_346{"Pty"};
        multiset<string> Pty_346_set;
        Pty_346.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2026963450"); // 3
        Pty_346_set.insert("UnderlyingInstrumentPartyID_t_2026963450");
        Pty_346.add_attribute("Src", "9"); // 3
        Pty_346_set.insert("9");
        Pty_346.add_attribute("R", "7"); // 3
        Pty_346_set.insert("7");
        all_values.push_back(Pty_346_set);
        all_compo_names.insert("Pty_346_set");

        {
          xml_element Sub_346{"Sub"};
          multiset<string> Sub_346_set;
          Sub_346.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2096404884"); // 4
          Sub_346_set.insert("UnderlyingInstrumentPartySubID_t_2096404884");
          Sub_346.add_attribute("Typ", "14"); // 4
          Sub_346_set.insert("14");
          all_values.push_back(Sub_346_set);
          all_compo_names.insert("Sub_346_set");

          Pty_346.add_element(Sub_346);
        }
        Undly_89.add_element(Pty_346);
      }
      QuotReqRej_1.add_element(Undly_89);
    }
    {
      xml_element OrdQty_22{"OrdQty"};
      multiset<string> OrdQty_22_set;
      OrdQty_22.add_attribute("Qty", "10777286.550000"); // 2
      OrdQty_22_set.insert("10777286.550000");
      OrdQty_22.add_attribute("Cash", "1813566.490000"); // 2
      OrdQty_22_set.insert("1813566.490000");
      OrdQty_22.add_attribute("Pct", "4595491.270000"); // 2
      OrdQty_22_set.insert("4595491.270000");
      OrdQty_22.add_attribute("RndDir", "2"); // 2
      OrdQty_22_set.insert("2");
      OrdQty_22.add_attribute("RndMod", "7727137.500000"); // 2
      OrdQty_22_set.insert("7727137.500000");
      all_values.push_back(OrdQty_22_set);
      all_compo_names.insert("OrdQty_22_set");

      QuotReqRej_1.add_element(OrdQty_22);
    }
    {
      xml_element Stip_138{"Stip"};
      multiset<string> Stip_138_set;
      Stip_138.add_attribute("Typ", "SUBSFREQ"); // 2
      Stip_138_set.insert("SUBSFREQ");
      Stip_138.add_attribute("Val", "StipulationValue_t_711595227"); // 2
      Stip_138_set.insert("StipulationValue_t_711595227");
      all_values.push_back(Stip_138_set);
      all_compo_names.insert("Stip_138_set");

      QuotReqRej_1.add_element(Stip_138);
    }
    {
      xml_element Leg_71{"Leg"};
      multiset<string> Leg_71_set;
      Leg_71.add_attribute("Qty", "12892709.390000"); // 2
      Leg_71_set.insert("12892709.390000");
      Leg_71.add_attribute("OrdQty", "20716336.880000"); // 2
      Leg_71_set.insert("20716336.880000");
      Leg_71.add_attribute("SwapTyp", "5"); // 2
      Leg_71_set.insert("5");
      Leg_71.add_attribute("SettlTyp", "2"); // 2
      Leg_71_set.insert("2");
      Leg_71.add_attribute("SettlDt", "LegSettlDate_t_1867128444"); // 2
      Leg_71_set.insert("LegSettlDate_t_1867128444");
      Leg_71.add_attribute("RefID", "LegRefID_t_957884504"); // 2
      Leg_71_set.insert("LegRefID_t_957884504");
      all_values.push_back(Leg_71_set);
      all_compo_names.insert("Leg_71_set");

      {
        xml_element Leg_72{"Leg"};
        multiset<string> Leg_72_set;
        Leg_72.add_attribute("Sym", "LegSymbol_t_128483618"); // 3
        Leg_72_set.insert("LegSymbol_t_128483618");
        Leg_72.add_attribute("Sfx", "CD"); // 3
        Leg_72_set.insert("CD");
        Leg_72.add_attribute("ID", "LegSecurityID_t_2037253558"); // 3
        Leg_72_set.insert("LegSecurityID_t_2037253558");
        Leg_72.add_attribute("Src", "A"); // 3
        Leg_72_set.insert("A");
        Leg_72.add_attribute("Prod", "6"); // 3
        Leg_72_set.insert("6");
        Leg_72.add_attribute("CFI", "LegCFICode_t_1155204561"); // 3
        Leg_72_set.insert("LegCFICode_t_1155204561");
        Leg_72.add_attribute("SecTyp", "FRN"); // 3
        Leg_72_set.insert("FRN");
        Leg_72.add_attribute("SecSubTyp", "LegSecuritySubType_t_259606303"); // 3
        Leg_72_set.insert("LegSecuritySubType_t_259606303");
        Leg_72.add_attribute("MMY", "624292251"); // 3
        Leg_72_set.insert("624292251");
        Leg_72.add_attribute("Mat", "LegMaturityDate_t_633373013"); // 3
        Leg_72_set.insert("LegMaturityDate_t_633373013");
        Leg_72.add_attribute("MatTm", "996320373"); // 3
        Leg_72_set.insert("996320373");
        Leg_72.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1130050365"); // 3
        Leg_72_set.insert("LegCouponPaymentDate_t_1130050365");
        Leg_72.add_attribute("Issued", "LegIssueDate_t_1812786676"); // 3
        Leg_72_set.insert("LegIssueDate_t_1812786676");
        Leg_72.add_attribute("RepoCollSecTyp", "875800175"); // 3
        Leg_72_set.insert("875800175");
        Leg_72.add_attribute("RepoTrm", "2113030859"); // 3
        Leg_72_set.insert("2113030859");
        Leg_72.add_attribute("RepoRt", "12981546.190000"); // 3
        Leg_72_set.insert("12981546.190000");
        Leg_72.add_attribute("Fctr", "8247214.110000"); // 3
        Leg_72_set.insert("8247214.110000");
        Leg_72.add_attribute("CrdRtg", "LegCreditRating_t_917151089"); // 3
        Leg_72_set.insert("LegCreditRating_t_917151089");
        Leg_72.add_attribute("Rgstry", "LegInstrRegistry_t_228399626"); // 3
        Leg_72_set.insert("LegInstrRegistry_t_228399626");
        Leg_72.add_attribute("Ctry", "1006078060"); // 3
        Leg_72_set.insert("1006078060");
        Leg_72.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1376700216"); // 3
        Leg_72_set.insert("LegStateOrProvinceOfIssue_t_1376700216");
        Leg_72.add_attribute("Lcl", "LegLocaleOfIssue_t_1479959182"); // 3
        Leg_72_set.insert("LegLocaleOfIssue_t_1479959182");
        Leg_72.add_attribute("Redeem", "LegRedemptionDate_t_1778791811"); // 3
        Leg_72_set.insert("LegRedemptionDate_t_1778791811");
        Leg_72.add_attribute("Strk", "19041152.270000"); // 3
        Leg_72_set.insert("19041152.270000");
        Leg_72.add_attribute("StrkCcy", "GBP"); // 3
        Leg_72_set.insert("GBP");
        Leg_72.add_attribute("OptA", "1828265267"); // 3
        Leg_72_set.insert("1828265267");
        Leg_72.add_attribute("Cmult", "18602648.690000"); // 3
        Leg_72_set.insert("18602648.690000");
        Leg_72.add_attribute("MultTyp", "2"); // 3
        Leg_72_set.insert("2");
        Leg_72.add_attribute("FlowSchedTyp", "3"); // 3
        Leg_72_set.insert("3");
        Leg_72.add_attribute("UOM", "Bbl"); // 3
        Leg_72_set.insert("Bbl");
        Leg_72.add_attribute("UOMQty", "5609680.660000"); // 3
        Leg_72_set.insert("5609680.660000");
        Leg_72.add_attribute("PxUOM", "lbs"); // 3
        Leg_72_set.insert("lbs");
        Leg_72.add_attribute("PxUOMQty", "5604356.350000"); // 3
        Leg_72_set.insert("5604356.350000");
        Leg_72.add_attribute("TmUnit", "Mo"); // 3
        Leg_72_set.insert("Mo");
        Leg_72.add_attribute("ExerStyle", "2"); // 3
        Leg_72_set.insert("2");
        Leg_72.add_attribute("CpnRt", "17156401.970000"); // 3
        Leg_72_set.insert("17156401.970000");
        Leg_72.add_attribute("Exch", "LegSecurityExchange_t_1247715968"); // 3
        Leg_72_set.insert("LegSecurityExchange_t_1247715968");
        Leg_72.add_attribute("Issr", "LegIssuer_t_1837165536"); // 3
        Leg_72_set.insert("LegIssuer_t_1837165536");
        Leg_72.add_attribute("EncLegIssrLen", "192448800"); // 3
        Leg_72_set.insert("192448800");
        Leg_72.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1881088982"); // 3
        Leg_72_set.insert("EncodedLegIssuer_t_1881088982");
        Leg_72.add_attribute("Desc", "LegSecurityDesc_t_686002261"); // 3
        Leg_72_set.insert("LegSecurityDesc_t_686002261");
        Leg_72.add_attribute("EncLegSecDescLen", "1322499165"); // 3
        Leg_72_set.insert("1322499165");
        Leg_72.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1546392010"); // 3
        Leg_72_set.insert("EncodedLegSecurityDesc_t_1546392010");
        Leg_72.add_attribute("RatioQty", "15618024.360000"); // 3
        Leg_72_set.insert("15618024.360000");
        Leg_72.add_attribute("Side", "9"); // 3
        Leg_72_set.insert("9");
        Leg_72.add_attribute("Ccy", "GBP"); // 3
        Leg_72_set.insert("GBP");
        Leg_72.add_attribute("Pool", "LegPool_t_57713817"); // 3
        Leg_72_set.insert("LegPool_t_57713817");
        Leg_72.add_attribute("Dated", "LegDatedDate_t_925462607"); // 3
        Leg_72_set.insert("LegDatedDate_t_925462607");
        Leg_72.add_attribute("CSetMo", "1245118260"); // 3
        Leg_72_set.insert("1245118260");
        Leg_72.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1434414033"); // 3
        Leg_72_set.insert("LegInterestAccrualDate_t_1434414033");
        Leg_72.add_attribute("PutCall", "257938142"); // 3
        Leg_72_set.insert("257938142");
        Leg_72.add_attribute("LegOptionRatio", "8764264.230000"); // 3
        Leg_72_set.insert("8764264.230000");
        Leg_72.add_attribute("Px", "11910456.120000"); // 3
        Leg_72_set.insert("11910456.120000");
        all_values.push_back(Leg_72_set);
        all_compo_names.insert("Leg_72_set");

        {
          xml_element LegAID_68{"LegAID"};
          multiset<string> LegAID_68_set;
          LegAID_68.add_attribute("SecAltID", "LegSecurityAltID_t_302008903"); // 4
          LegAID_68_set.insert("LegSecurityAltID_t_302008903");
          LegAID_68.add_attribute("SecAltIDSrc", "9"); // 4
          LegAID_68_set.insert("9");
          all_values.push_back(LegAID_68_set);
          all_compo_names.insert("LegAID_68_set");

          Leg_72.add_element(LegAID_68);
        }
        Leg_71.add_element(Leg_72);
      }
      {
        xml_element Stip_139{"Stip"};
        multiset<string> Stip_139_set;
        Stip_139.add_attribute("StipTyp", "PMAX"); // 3
        Stip_139_set.insert("PMAX");
        Stip_139.add_attribute("StipVal", "LegStipulationValue_t_14790124"); // 3
        Stip_139_set.insert("LegStipulationValue_t_14790124");
        all_values.push_back(Stip_139_set);
        all_compo_names.insert("Stip_139_set");

        Leg_71.add_element(Stip_139);
      }
      {
        xml_element Pty_347{"Pty"};
        multiset<string> Pty_347_set;
        Pty_347.add_attribute("ID", "NestedPartyID_t_82006326"); // 3
        Pty_347_set.insert("NestedPartyID_t_82006326");
        Pty_347.add_attribute("Src", "B"); // 3
        Pty_347_set.insert("B");
        Pty_347.add_attribute("R", "39"); // 3
        Pty_347_set.insert("39");
        all_values.push_back(Pty_347_set);
        all_compo_names.insert("Pty_347_set");

        {
          xml_element Sub_347{"Sub"};
          multiset<string> Sub_347_set;
          Sub_347.add_attribute("ID", "NestedPartySubID_t_642974393"); // 4
          Sub_347_set.insert("NestedPartySubID_t_642974393");
          Sub_347.add_attribute("Typ", "15"); // 4
          Sub_347_set.insert("15");
          all_values.push_back(Sub_347_set);
          all_compo_names.insert("Sub_347_set");

          Pty_347.add_element(Sub_347);
        }
        Leg_71.add_element(Pty_347);
      }
      {
        xml_element BnchmkCurve_6{"BnchmkCurve"};
        multiset<string> BnchmkCurve_6_set;
        BnchmkCurve_6.add_attribute("Ccy", "CHF"); // 3
        BnchmkCurve_6_set.insert("CHF");
        BnchmkCurve_6.add_attribute("Name", "EONIA"); // 3
        BnchmkCurve_6_set.insert("EONIA");
        BnchmkCurve_6.add_attribute("Point", "LegBenchmarkCurvePoint_t_814048034"); // 3
        BnchmkCurve_6_set.insert("LegBenchmarkCurvePoint_t_814048034");
        BnchmkCurve_6.add_attribute("Px", "21088477.250000"); // 3
        BnchmkCurve_6_set.insert("21088477.250000");
        BnchmkCurve_6.add_attribute("PxTyp", "2034838584"); // 3
        BnchmkCurve_6_set.insert("2034838584");
        all_values.push_back(BnchmkCurve_6_set);
        all_compo_names.insert("BnchmkCurve_6_set");

        Leg_71.add_element(BnchmkCurve_6);
      }
      QuotReqRej_1.add_element(Leg_71);
    }
    {
      xml_element QuotQual_5{"QuotQual"};
      multiset<string> QuotQual_5_set;
      QuotQual_5.add_attribute("Qual", "W"); // 2
      QuotQual_5_set.insert("W");
      all_values.push_back(QuotQual_5_set);
      all_compo_names.insert("QuotQual_5_set");

      QuotReqRej_1.add_element(QuotQual_5);
    }
    {
      xml_element SprdBnchmkCurve_27{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_27_set;
      SprdBnchmkCurve_27.add_attribute("Spread", "18424530.590000"); // 2
      SprdBnchmkCurve_27_set.insert("18424530.590000");
      SprdBnchmkCurve_27.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_27_set.insert("CHF");
      SprdBnchmkCurve_27.add_attribute("Name", "Euribor"); // 2
      SprdBnchmkCurve_27_set.insert("Euribor");
      SprdBnchmkCurve_27.add_attribute("Point", "BenchmarkCurvePoint_t_2135159634"); // 2
      SprdBnchmkCurve_27_set.insert("BenchmarkCurvePoint_t_2135159634");
      SprdBnchmkCurve_27.add_attribute("Px", "14695587.270000"); // 2
      SprdBnchmkCurve_27_set.insert("14695587.270000");
      SprdBnchmkCurve_27.add_attribute("PxTyp", "13"); // 2
      SprdBnchmkCurve_27_set.insert("13");
      SprdBnchmkCurve_27.add_attribute("SecID", "BenchmarkSecurityID_t_226716186"); // 2
      SprdBnchmkCurve_27_set.insert("BenchmarkSecurityID_t_226716186");
      SprdBnchmkCurve_27.add_attribute("SecIDSrc", "7"); // 2
      SprdBnchmkCurve_27_set.insert("7");
      all_values.push_back(SprdBnchmkCurve_27_set);
      all_compo_names.insert("SprdBnchmkCurve_27_set");

      QuotReqRej_1.add_element(SprdBnchmkCurve_27);
    }
    {
      xml_element Yield_22{"Yield"};
      multiset<string> Yield_22_set;
      Yield_22.add_attribute("Typ", "CALL"); // 2
      Yield_22_set.insert("CALL");
      Yield_22.add_attribute("Yld", "14718344.460000"); // 2
      Yield_22_set.insert("14718344.460000");
      Yield_22.add_attribute("CalcDt", "YieldCalcDate_t_814202929"); // 2
      Yield_22_set.insert("YieldCalcDate_t_814202929");
      Yield_22.add_attribute("RedDt", "YieldRedemptionDate_t_974341505"); // 2
      Yield_22_set.insert("YieldRedemptionDate_t_974341505");
      Yield_22.add_attribute("RedPx", "2007772.220000"); // 2
      Yield_22_set.insert("2007772.220000");
      Yield_22.add_attribute("RedPxTyp", "16"); // 2
      Yield_22_set.insert("16");
      all_values.push_back(Yield_22_set);
      all_compo_names.insert("Yield_22_set");

      QuotReqRej_1.add_element(Yield_22);
    }
    {
      xml_element Pty_348{"Pty"};
      multiset<string> Pty_348_set;
      Pty_348.add_attribute("ID", "PartyID_t_1276350408"); // 2
      Pty_348_set.insert("PartyID_t_1276350408");
      Pty_348.add_attribute("Src", "9"); // 2
      Pty_348_set.insert("9");
      Pty_348.add_attribute("R", "48"); // 2
      Pty_348_set.insert("48");
      all_values.push_back(Pty_348_set);
      all_compo_names.insert("Pty_348_set");

      {
        xml_element Sub_348{"Sub"};
        multiset<string> Sub_348_set;
        Sub_348.add_attribute("ID", "PartySubID_t_1291140533"); // 3
        Sub_348_set.insert("PartySubID_t_1291140533");
        Sub_348.add_attribute("Typ", "2"); // 3
        Sub_348_set.insert("2");
        all_values.push_back(Sub_348_set);
        all_compo_names.insert("Sub_348_set");

        Pty_348.add_element(Sub_348);
      }
      QuotReqRej_1.add_element(Pty_348);
    }
    elt.add_element(QuotReqRej_1);
  } // end QuotReqRej
  { // QuotReqRej
    xml_element QuotReqRej_2{"QuotReqRej"};
    multiset<string> QuotReqRej_2_set;
    QuotReqRej_2.add_attribute("PrevClsPx", "10018457.720000"); // 1
    QuotReqRej_2_set.insert("10018457.720000");
    QuotReqRej_2.add_attribute("ReqTyp", "1"); // 1
    QuotReqRej_2_set.insert("1");
    QuotReqRej_2.add_attribute("Typ", "3"); // 1
    QuotReqRej_2_set.insert("3");
    QuotReqRej_2.add_attribute("SesID", "6"); // 1
    QuotReqRej_2_set.insert("6");
    QuotReqRej_2.add_attribute("SesSub", "3"); // 1
    QuotReqRej_2_set.insert("3");
    QuotReqRej_2.add_attribute("OrignDt", "TradeOriginationDate_t_1436411576"); // 1
    QuotReqRej_2_set.insert("TradeOriginationDate_t_1436411576");
    QuotReqRej_2.add_attribute("Side", "D"); // 1
    QuotReqRej_2_set.insert("D");
    QuotReqRej_2.add_attribute("QtyTyp", "1"); // 1
    QuotReqRej_2_set.insert("1");
    QuotReqRej_2.add_attribute("SettlTyp", "6"); // 1
    QuotReqRej_2_set.insert("6");
    QuotReqRej_2.add_attribute("SettlDt", "SettlDate_t_1854471220"); // 1
    QuotReqRej_2_set.insert("SettlDate_t_1854471220");
    QuotReqRej_2.add_attribute("SettlDt2", "SettlDate2_t_748065439"); // 1
    QuotReqRej_2_set.insert("SettlDate2_t_748065439");
    QuotReqRej_2.add_attribute("Qty2", "10927450.650000"); // 1
    QuotReqRej_2_set.insert("10927450.650000");
    QuotReqRej_2.add_attribute("Ccy", "JPY"); // 1
    QuotReqRej_2_set.insert("JPY");
    QuotReqRej_2.add_attribute("Acct", "Account_t_186622839"); // 1
    QuotReqRej_2_set.insert("Account_t_186622839");
    QuotReqRej_2.add_attribute("AcctIDSrc", "1"); // 1
    QuotReqRej_2_set.insert("1");
    QuotReqRej_2.add_attribute("AcctTyp", "8"); // 1
    QuotReqRej_2_set.insert("8");
    QuotReqRej_2.add_attribute("QuotPxTyp", "3"); // 1
    QuotReqRej_2_set.insert("3");
    QuotReqRej_2.add_attribute("OrdTyp", "7"); // 1
    QuotReqRej_2_set.insert("7");
    QuotReqRej_2.add_attribute("ExpireTm", "ExpireTime_t_1778925413"); // 1
    QuotReqRej_2_set.insert("ExpireTime_t_1778925413");
    QuotReqRej_2.add_attribute("TxnTm", "TransactTime_t_693966958"); // 1
    QuotReqRej_2_set.insert("TransactTime_t_693966958");
    QuotReqRej_2.add_attribute("PxTyp", "1"); // 1
    QuotReqRej_2_set.insert("1");
    QuotReqRej_2.add_attribute("Px", "4456446.950000"); // 1
    QuotReqRej_2_set.insert("4456446.950000");
    QuotReqRej_2.add_attribute("Px2", "16683084.630000"); // 1
    QuotReqRej_2_set.insert("16683084.630000");
    all_values.push_back(QuotReqRej_2_set);
    all_compo_names.insert("QuotReqRej_2_set");

    {
      xml_element Instrmt_64{"Instrmt"};
      multiset<string> Instrmt_64_set;
      Instrmt_64.add_attribute("Sym", "Symbol_t_19864962"); // 2
      Instrmt_64_set.insert("Symbol_t_19864962");
      Instrmt_64.add_attribute("Sfx", "WI"); // 2
      Instrmt_64_set.insert("WI");
      Instrmt_64.add_attribute("ID", "SecurityID_t_797175223"); // 2
      Instrmt_64_set.insert("SecurityID_t_797175223");
      Instrmt_64.add_attribute("Src", "D"); // 2
      Instrmt_64_set.insert("D");
      Instrmt_64.add_attribute("Prod", "13"); // 2
      Instrmt_64_set.insert("13");
      Instrmt_64.add_attribute("ProdCmplx", "ProductComplex_t_2088315756"); // 2
      Instrmt_64_set.insert("ProductComplex_t_2088315756");
      Instrmt_64.add_attribute("SecGrp", "SecurityGroup_t_1949953137"); // 2
      Instrmt_64_set.insert("SecurityGroup_t_1949953137");
      Instrmt_64.add_attribute("CFI", "CFICode_t_2034847486"); // 2
      Instrmt_64_set.insert("CFICode_t_2034847486");
      Instrmt_64.add_attribute("SecTyp", "FXSWAP"); // 2
      Instrmt_64_set.insert("FXSWAP");
      Instrmt_64.add_attribute("SubTyp", "SecuritySubType_t_377749308"); // 2
      Instrmt_64_set.insert("SecuritySubType_t_377749308");
      Instrmt_64.add_attribute("MMY", "1656807074"); // 2
      Instrmt_64_set.insert("1656807074");
      Instrmt_64.add_attribute("MatDt", "MaturityDate_t_844949062"); // 2
      Instrmt_64_set.insert("MaturityDate_t_844949062");
      Instrmt_64.add_attribute("MatTm", "1814160885"); // 2
      Instrmt_64_set.insert("1814160885");
      Instrmt_64.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1476439710"); // 2
      Instrmt_64_set.insert("SettleOnOpenFlag_t_1476439710");
      Instrmt_64.add_attribute("AsgnMeth", "586517668"); // 2
      Instrmt_64_set.insert("586517668");
      Instrmt_64.add_attribute("Status", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("CpnPmt", "CouponPaymentDate_t_1183427282"); // 2
      Instrmt_64_set.insert("CouponPaymentDate_t_1183427282");
      Instrmt_64.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_64_set.insert("XR");
      Instrmt_64.add_attribute("Snrty", "SB"); // 2
      Instrmt_64_set.insert("SB");
      Instrmt_64.add_attribute("NotlPctOut", "14637720.520000"); // 2
      Instrmt_64_set.insert("14637720.520000");
      Instrmt_64.add_attribute("OrigNotlPctOut", "1166772.500000"); // 2
      Instrmt_64_set.insert("1166772.500000");
      Instrmt_64.add_attribute("AttchPnt", "1963371.480000"); // 2
      Instrmt_64_set.insert("1963371.480000");
      Instrmt_64.add_attribute("DetchPnt", "17317928.080000"); // 2
      Instrmt_64_set.insert("17317928.080000");
      Instrmt_64.add_attribute("Issued", "IssueDate_t_368330119"); // 2
      Instrmt_64_set.insert("IssueDate_t_368330119");
      Instrmt_64.add_attribute("RepoCollSecTyp", "173900743"); // 2
      Instrmt_64_set.insert("173900743");
      Instrmt_64.add_attribute("RepoTrm", "79046102"); // 2
      Instrmt_64_set.insert("79046102");
      Instrmt_64.add_attribute("RepoRt", "21472555.330000"); // 2
      Instrmt_64_set.insert("21472555.330000");
      Instrmt_64.add_attribute("Fctr", "8678677.010000"); // 2
      Instrmt_64_set.insert("8678677.010000");
      Instrmt_64.add_attribute("CrdRtg", "CreditRating_t_2045617491"); // 2
      Instrmt_64_set.insert("CreditRating_t_2045617491");
      Instrmt_64.add_attribute("Rgstry", "InstrRegistry_t_445416580"); // 2
      Instrmt_64_set.insert("InstrRegistry_t_445416580");
      Instrmt_64.add_attribute("IssuCtry", "388692516"); // 2
      Instrmt_64_set.insert("388692516");
      Instrmt_64.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2065482453"); // 2
      Instrmt_64_set.insert("StateOrProvinceOfIssue_t_2065482453");
      Instrmt_64.add_attribute("Lcl", "LocaleOfIssue_t_748826169"); // 2
      Instrmt_64_set.insert("LocaleOfIssue_t_748826169");
      Instrmt_64.add_attribute("Redeem", "RedemptionDate_t_1185867739"); // 2
      Instrmt_64_set.insert("RedemptionDate_t_1185867739");
      Instrmt_64.add_attribute("StrkPx", "19356465.160000"); // 2
      Instrmt_64_set.insert("19356465.160000");
      Instrmt_64.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_64_set.insert("USD");
      Instrmt_64.add_attribute("StrkMult", "17381160.050000"); // 2
      Instrmt_64_set.insert("17381160.050000");
      Instrmt_64.add_attribute("StrkValu", "16691917.220000"); // 2
      Instrmt_64_set.insert("16691917.220000");
      Instrmt_64.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_64_set.insert("4");
      Instrmt_64.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_64_set.insert("4");
      Instrmt_64.add_attribute("StrkPxBndryPrcsn", "11785151.480000"); // 2
      Instrmt_64_set.insert("11785151.480000");
      Instrmt_64.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("OptAt", "1782542550"); // 2
      Instrmt_64_set.insert("1782542550");
      Instrmt_64.add_attribute("Mult", "5074712.100000"); // 2
      Instrmt_64_set.insert("5074712.100000");
      Instrmt_64.add_attribute("MultTyp", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_64_set.insert("3");
      Instrmt_64.add_attribute("MinPxIncr", "16908984.920000"); // 2
      Instrmt_64_set.insert("16908984.920000");
      Instrmt_64.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1515210881"); // 2
      Instrmt_64_set.insert("MinPriceIncrementAmount_t_1515210881");
      Instrmt_64.add_attribute("UOM", "MWh"); // 2
      Instrmt_64_set.insert("MWh");
      Instrmt_64.add_attribute("UOMQty", "10071868.970000"); // 2
      Instrmt_64_set.insert("10071868.970000");
      Instrmt_64.add_attribute("PxUOM", "Gal"); // 2
      Instrmt_64_set.insert("Gal");
      Instrmt_64.add_attribute("PxUOMQty", "9055632.500000"); // 2
      Instrmt_64_set.insert("9055632.500000");
      Instrmt_64.add_attribute("SettlMeth", "P"); // 2
      Instrmt_64_set.insert("P");
      Instrmt_64.add_attribute("ExerStyle", "2"); // 2
      Instrmt_64_set.insert("2");
      Instrmt_64.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_64_set.insert("1");
      Instrmt_64.add_attribute("OptPayAmt", "OptPayoutAmount_t_670542160"); // 2
      Instrmt_64_set.insert("OptPayoutAmount_t_670542160");
      Instrmt_64.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_64_set.insert("PCTPAR");
      Instrmt_64.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_64_set.insert("CDSD");
      Instrmt_64.add_attribute("ListMeth", "1"); // 2
      Instrmt_64_set.insert("1");
      Instrmt_64.add_attribute("CapPx", "2979230.670000"); // 2
      Instrmt_64_set.insert("2979230.670000");
      Instrmt_64.add_attribute("FlrPx", "1885405.620000"); // 2
      Instrmt_64_set.insert("1885405.620000");
      Instrmt_64.add_attribute("PutCall", "0"); // 2
      Instrmt_64_set.insert("0");
      Instrmt_64.add_attribute("FlexInd", "true"); // 2
      Instrmt_64_set.insert("true");
      Instrmt_64.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_64_set.insert("false");
      Instrmt_64.add_attribute("TmUnit", "Min"); // 2
      Instrmt_64_set.insert("Min");
      Instrmt_64.add_attribute("CpnRt", "6810934.720000"); // 2
      Instrmt_64_set.insert("6810934.720000");
      Instrmt_64.add_attribute("Exch", "SecurityExchange_t_353624501"); // 2
      Instrmt_64_set.insert("SecurityExchange_t_353624501");
      Instrmt_64.add_attribute("PosLmt", "2012953681"); // 2
      Instrmt_64_set.insert("2012953681");
      Instrmt_64.add_attribute("NTPosLmt", "202801546"); // 2
      Instrmt_64_set.insert("202801546");
      Instrmt_64.add_attribute("Issr", "Issuer_t_1250269192"); // 2
      Instrmt_64_set.insert("Issuer_t_1250269192");
      Instrmt_64.add_attribute("EncIssrLen", "1981335347"); // 2
      Instrmt_64_set.insert("1981335347");
      Instrmt_64.add_attribute("EncIssr", "EncodedIssuer_t_1381316694"); // 2
      Instrmt_64_set.insert("EncodedIssuer_t_1381316694");
      Instrmt_64.add_attribute("Desc", "SecurityDesc_t_844379298"); // 2
      Instrmt_64_set.insert("SecurityDesc_t_844379298");
      Instrmt_64.add_attribute("EncSecDescLen", "1616394249"); // 2
      Instrmt_64_set.insert("1616394249");
      Instrmt_64.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1888787904"); // 2
      Instrmt_64_set.insert("EncodedSecurityDesc_t_1888787904");
      Instrmt_64.add_attribute("Pool", "Pool_t_1025007071"); // 2
      Instrmt_64_set.insert("Pool_t_1025007071");
      Instrmt_64.add_attribute("CSetMo", "168422395"); // 2
      Instrmt_64_set.insert("168422395");
      Instrmt_64.add_attribute("CPPgm", "1"); // 2
      Instrmt_64_set.insert("1");
      Instrmt_64.add_attribute("CPRegT", "CPRegType_t_392734304"); // 2
      Instrmt_64_set.insert("CPRegType_t_392734304");
      Instrmt_64.add_attribute("Dated", "DatedDate_t_877648497"); // 2
      Instrmt_64_set.insert("DatedDate_t_877648497");
      Instrmt_64.add_attribute("IntAcrl", "InterestAccrualDate_t_291905997"); // 2
      Instrmt_64_set.insert("InterestAccrualDate_t_291905997");
      all_values.push_back(Instrmt_64_set);
      all_compo_names.insert("Instrmt_64_set");

      {
        xml_element AID_67{"AID"};
        multiset<string> AID_67_set;
        AID_67.add_attribute("AltID", "SecurityAltID_t_2024622435"); // 3
        AID_67_set.insert("SecurityAltID_t_2024622435");
        AID_67.add_attribute("AltIDSrc", "A"); // 3
        AID_67_set.insert("A");
        all_values.push_back(AID_67_set);
        all_compo_names.insert("AID_67_set");

        Instrmt_64.add_element(AID_67);
      }
      {
        xml_element SecXML_67{"SecXML"};
        multiset<string> SecXML_67_set;
        SecXML_67.add_attribute("Schema", "SecurityXMLSchema_t_883402055"); // 3
        SecXML_67_set.insert("SecurityXMLSchema_t_883402055");
        all_values.push_back(SecXML_67_set);
        all_compo_names.insert("SecXML_67_set");

        Instrmt_64.add_element(SecXML_67);
      }
      {
        xml_element Evnt_67{"Evnt"};
        multiset<string> Evnt_67_set;
        Evnt_67.add_attribute("EventTyp", "18"); // 3
        Evnt_67_set.insert("18");
        Evnt_67.add_attribute("Dt", "EventDate_t_715192092"); // 3
        Evnt_67_set.insert("EventDate_t_715192092");
        Evnt_67.add_attribute("Tm", "EventTime_t_1553944215"); // 3
        Evnt_67_set.insert("EventTime_t_1553944215");
        Evnt_67.add_attribute("Px", "17298635.250000"); // 3
        Evnt_67_set.insert("17298635.250000");
        Evnt_67.add_attribute("Txt", "EventText_t_515040138"); // 3
        Evnt_67_set.insert("EventText_t_515040138");
        all_values.push_back(Evnt_67_set);
        all_compo_names.insert("Evnt_67_set");

        Instrmt_64.add_element(Evnt_67);
      }
      {
        xml_element Pty_349{"Pty"};
        multiset<string> Pty_349_set;
        Pty_349.add_attribute("ID", "InstrumentPartyID_t_2122620218"); // 3
        Pty_349_set.insert("InstrumentPartyID_t_2122620218");
        Pty_349.add_attribute("Src", "E"); // 3
        Pty_349_set.insert("E");
        Pty_349.add_attribute("R", "62"); // 3
        Pty_349_set.insert("62");
        all_values.push_back(Pty_349_set);
        all_compo_names.insert("Pty_349_set");

        {
          xml_element Sub_349{"Sub"};
          multiset<string> Sub_349_set;
          Sub_349.add_attribute("ID", "InstrumentPartySubID_t_461811378"); // 4
          Sub_349_set.insert("InstrumentPartySubID_t_461811378");
          Sub_349.add_attribute("Typ", "2"); // 4
          Sub_349_set.insert("2");
          all_values.push_back(Sub_349_set);
          all_compo_names.insert("Sub_349_set");

          Pty_349.add_element(Sub_349);
        }
        Instrmt_64.add_element(Pty_349);
      }
      {
        xml_element CmplxEvnt_64{"CmplxEvnt"};
        multiset<string> CmplxEvnt_64_set;
        CmplxEvnt_64.add_attribute("Typ", "8"); // 3
        CmplxEvnt_64_set.insert("8");
        CmplxEvnt_64.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_736649055"); // 3
        CmplxEvnt_64_set.insert("ComplexOptPayoutAmount_t_736649055");
        CmplxEvnt_64.add_attribute("Px", "16081456.530000"); // 3
        CmplxEvnt_64_set.insert("16081456.530000");
        CmplxEvnt_64.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_64_set.insert("1");
        CmplxEvnt_64.add_attribute("PxBndryPrcsn", "6021190.880000"); // 3
        CmplxEvnt_64_set.insert("6021190.880000");
        CmplxEvnt_64.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_64_set.insert("2");
        CmplxEvnt_64.add_attribute("Cond", "2"); // 3
        CmplxEvnt_64_set.insert("2");
        all_values.push_back(CmplxEvnt_64_set);
        all_compo_names.insert("CmplxEvnt_64_set");

        {
          xml_element EvntDts_64{"EvntDts"};
          multiset<string> EvntDts_64_set;
          EvntDts_64.add_attribute("StartDt", "ComplexEventStartDate_t_435970787"); // 4
          EvntDts_64_set.insert("ComplexEventStartDate_t_435970787");
          EvntDts_64.add_attribute("EndDt", "ComplexEventEndDate_t_1044780245"); // 4
          EvntDts_64_set.insert("ComplexEventEndDate_t_1044780245");
          all_values.push_back(EvntDts_64_set);
          all_compo_names.insert("EvntDts_64_set");

          {
            xml_element EvntTms_64{"EvntTms"};
            multiset<string> EvntTms_64_set;
            EvntTms_64.add_attribute("StartTm", "231294697"); // 5
            EvntTms_64_set.insert("231294697");
            EvntTms_64.add_attribute("EndTm", "2052365037"); // 5
            EvntTms_64_set.insert("2052365037");
            all_values.push_back(EvntTms_64_set);
            all_compo_names.insert("EvntTms_64_set");

            EvntDts_64.add_element(EvntTms_64);
          }
          CmplxEvnt_64.add_element(EvntDts_64);
        }
        Instrmt_64.add_element(CmplxEvnt_64);
      }
      QuotReqRej_2.add_element(Instrmt_64);
    }
    {
      xml_element FinDetls_22{"FinDetls"};
      multiset<string> FinDetls_22_set;
      FinDetls_22.add_attribute("AgmtDesc", "AgreementDesc_t_786084501"); // 2
      FinDetls_22_set.insert("AgreementDesc_t_786084501");
      FinDetls_22.add_attribute("AgmtID", "AgreementID_t_1256301769"); // 2
      FinDetls_22_set.insert("AgreementID_t_1256301769");
      FinDetls_22.add_attribute("AgmtDt", "AgreementDate_t_73303784"); // 2
      FinDetls_22_set.insert("AgreementDate_t_73303784");
      FinDetls_22.add_attribute("AgmtCcy", "CHF"); // 2
      FinDetls_22_set.insert("CHF");
      FinDetls_22.add_attribute("TrmTyp", "2"); // 2
      FinDetls_22_set.insert("2");
      FinDetls_22.add_attribute("StartDt", "StartDate_t_362709599"); // 2
      FinDetls_22_set.insert("StartDate_t_362709599");
      FinDetls_22.add_attribute("EndDt", "EndDate_t_1526174861"); // 2
      FinDetls_22_set.insert("EndDate_t_1526174861");
      FinDetls_22.add_attribute("DlvryTyp", "0"); // 2
      FinDetls_22_set.insert("0");
      FinDetls_22.add_attribute("MgnRatio", "12461116.540000"); // 2
      FinDetls_22_set.insert("12461116.540000");
      all_values.push_back(FinDetls_22_set);
      all_compo_names.insert("FinDetls_22_set");

      QuotReqRej_2.add_element(FinDetls_22);
    }
    {
      xml_element Undly_90{"Undly"};
      multiset<string> Undly_90_set;
      Undly_90.add_attribute("Sym", "UnderlyingSymbol_t_1256048251"); // 2
      Undly_90_set.insert("UnderlyingSymbol_t_1256048251");
      Undly_90.add_attribute("Sfx", "CD"); // 2
      Undly_90_set.insert("CD");
      Undly_90.add_attribute("ID", "UnderlyingSecurityID_t_652572221"); // 2
      Undly_90_set.insert("UnderlyingSecurityID_t_652572221");
      Undly_90.add_attribute("Src", "B"); // 2
      Undly_90_set.insert("B");
      Undly_90.add_attribute("Prod", "3"); // 2
      Undly_90_set.insert("3");
      Undly_90.add_attribute("CFI", "UnderlyingCFICode_t_627708791"); // 2
      Undly_90_set.insert("UnderlyingCFICode_t_627708791");
      Undly_90.add_attribute("SecTyp", "IET"); // 2
      Undly_90_set.insert("IET");
      Undly_90.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_373009662"); // 2
      Undly_90_set.insert("UnderlyingSecuritySubType_t_373009662");
      Undly_90.add_attribute("MMY", "1089520170"); // 2
      Undly_90_set.insert("1089520170");
      Undly_90.add_attribute("Mat", "UnderlyingMaturityDate_t_1645783255"); // 2
      Undly_90_set.insert("UnderlyingMaturityDate_t_1645783255");
      Undly_90.add_attribute("MatTm", "303515015"); // 2
      Undly_90_set.insert("303515015");
      Undly_90.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1826169225"); // 2
      Undly_90_set.insert("UnderlyingCouponPaymentDate_t_1826169225");
      Undly_90.add_attribute("RestrctTyp", "FR"); // 2
      Undly_90_set.insert("FR");
      Undly_90.add_attribute("Snrty", "SR"); // 2
      Undly_90_set.insert("SR");
      Undly_90.add_attribute("NotlPctOut", "2808046.650000"); // 2
      Undly_90_set.insert("2808046.650000");
      Undly_90.add_attribute("OrigNotlPctOut", "7699088.120000"); // 2
      Undly_90_set.insert("7699088.120000");
      Undly_90.add_attribute("AttchPnt", "21220439.180000"); // 2
      Undly_90_set.insert("21220439.180000");
      Undly_90.add_attribute("DetchPnt", "7167754.530000"); // 2
      Undly_90_set.insert("7167754.530000");
      Undly_90.add_attribute("Issued", "UnderlyingIssueDate_t_1814689057"); // 2
      Undly_90_set.insert("UnderlyingIssueDate_t_1814689057");
      Undly_90.add_attribute("RepoCollSecTyp", "205854967"); // 2
      Undly_90_set.insert("205854967");
      Undly_90.add_attribute("RepoTrm", "621656842"); // 2
      Undly_90_set.insert("621656842");
      Undly_90.add_attribute("RepoRt", "4532899.110000"); // 2
      Undly_90_set.insert("4532899.110000");
      Undly_90.add_attribute("Fctr", "14621567.360000"); // 2
      Undly_90_set.insert("14621567.360000");
      Undly_90.add_attribute("CrdRtg", "UnderlyingCreditRating_t_694960626"); // 2
      Undly_90_set.insert("UnderlyingCreditRating_t_694960626");
      Undly_90.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_524093513"); // 2
      Undly_90_set.insert("UnderlyingInstrRegistry_t_524093513");
      Undly_90.add_attribute("Ctry", "963709162"); // 2
      Undly_90_set.insert("963709162");
      Undly_90.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1645912907"); // 2
      Undly_90_set.insert("UnderlyingStateOrProvinceOfIssue_t_1645912907");
      Undly_90.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_886803112"); // 2
      Undly_90_set.insert("UnderlyingLocaleOfIssue_t_886803112");
      Undly_90.add_attribute("Redeem", "UnderlyingRedemptionDate_t_342400375"); // 2
      Undly_90_set.insert("UnderlyingRedemptionDate_t_342400375");
      Undly_90.add_attribute("StrkPx", "851096.390000"); // 2
      Undly_90_set.insert("851096.390000");
      Undly_90.add_attribute("StrkCcy", "GBP"); // 2
      Undly_90_set.insert("GBP");
      Undly_90.add_attribute("OptA", "1386982111"); // 2
      Undly_90_set.insert("1386982111");
      Undly_90.add_attribute("Mult", "6380033.400000"); // 2
      Undly_90_set.insert("6380033.400000");
      Undly_90.add_attribute("MultTyp", "2"); // 2
      Undly_90_set.insert("2");
      Undly_90.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_90_set.insert("3");
      Undly_90.add_attribute("UOM", "USD"); // 2
      Undly_90_set.insert("USD");
      Undly_90.add_attribute("UOMQty", "10081241.800000"); // 2
      Undly_90_set.insert("10081241.800000");
      Undly_90.add_attribute("PxUOM", "Bbl"); // 2
      Undly_90_set.insert("Bbl");
      Undly_90.add_attribute("PxUOMQty", "2077486.540000"); // 2
      Undly_90_set.insert("2077486.540000");
      Undly_90.add_attribute("TmUnit", "H"); // 2
      Undly_90_set.insert("H");
      Undly_90.add_attribute("ExerStyle", "0"); // 2
      Undly_90_set.insert("0");
      Undly_90.add_attribute("CpnRt", "20339178.790000"); // 2
      Undly_90_set.insert("20339178.790000");
      Undly_90.add_attribute("Exch", "UnderlyingSecurityExchange_t_1612869047"); // 2
      Undly_90_set.insert("UnderlyingSecurityExchange_t_1612869047");
      Undly_90.add_attribute("Issr", "UnderlyingIssuer_t_173096973"); // 2
      Undly_90_set.insert("UnderlyingIssuer_t_173096973");
      Undly_90.add_attribute("EncUndIssrLen", "167238896"); // 2
      Undly_90_set.insert("167238896");
      Undly_90.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_235294211"); // 2
      Undly_90_set.insert("EncodedUnderlyingIssuer_t_235294211");
      Undly_90.add_attribute("Desc", "UnderlyingSecurityDesc_t_147657243"); // 2
      Undly_90_set.insert("UnderlyingSecurityDesc_t_147657243");
      Undly_90.add_attribute("EncUndSecDescLen", "884014349"); // 2
      Undly_90_set.insert("884014349");
      Undly_90.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2049983269"); // 2
      Undly_90_set.insert("EncodedUnderlyingSecurityDesc_t_2049983269");
      Undly_90.add_attribute("CPPgm", "UnderlyingCPProgram_t_353512210"); // 2
      Undly_90_set.insert("UnderlyingCPProgram_t_353512210");
      Undly_90.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1505671191"); // 2
      Undly_90_set.insert("UnderlyingCPRegType_t_1505671191");
      Undly_90.add_attribute("AllocPct", "3557895.320000"); // 2
      Undly_90_set.insert("3557895.320000");
      Undly_90.add_attribute("Ccy", "EUR"); // 2
      Undly_90_set.insert("EUR");
      Undly_90.add_attribute("Qty", "8798830.450000"); // 2
      Undly_90_set.insert("8798830.450000");
      Undly_90.add_attribute("SettlTyp", "2"); // 2
      Undly_90_set.insert("2");
      Undly_90.add_attribute("CashAmt", "UnderlyingCashAmount_t_1699061076"); // 2
      Undly_90_set.insert("UnderlyingCashAmount_t_1699061076");
      Undly_90.add_attribute("CashTyp", "DIFF"); // 2
      Undly_90_set.insert("DIFF");
      Undly_90.add_attribute("Px", "9742948.360000"); // 2
      Undly_90_set.insert("9742948.360000");
      Undly_90.add_attribute("DirtPx", "17841707.150000"); // 2
      Undly_90_set.insert("17841707.150000");
      Undly_90.add_attribute("EndPx", "17521172.760000"); // 2
      Undly_90_set.insert("17521172.760000");
      Undly_90.add_attribute("StartVal", "UnderlyingStartValue_t_425259814"); // 2
      Undly_90_set.insert("UnderlyingStartValue_t_425259814");
      Undly_90.add_attribute("CurVal", "UnderlyingCurrentValue_t_1023669178"); // 2
      Undly_90_set.insert("UnderlyingCurrentValue_t_1023669178");
      Undly_90.add_attribute("EndVal", "UnderlyingEndValue_t_242636969"); // 2
      Undly_90_set.insert("UnderlyingEndValue_t_242636969");
      Undly_90.add_attribute("AdjQty", "7146529.200000"); // 2
      Undly_90_set.insert("7146529.200000");
      Undly_90.add_attribute("FxRate", "20800802.510000"); // 2
      Undly_90_set.insert("20800802.510000");
      Undly_90.add_attribute("FxRateCalc", "D"); // 2
      Undly_90_set.insert("D");
      Undly_90.add_attribute("CapValu", "UnderlyingCapValue_t_1722777100"); // 2
      Undly_90_set.insert("UnderlyingCapValue_t_1722777100");
      Undly_90.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1362017338"); // 2
      Undly_90_set.insert("UnderlyingSettlMethod_t_1362017338");
      Undly_90.add_attribute("PutCall", "1716097755"); // 2
      Undly_90_set.insert("1716097755");
      all_values.push_back(Undly_90_set);
      all_compo_names.insert("Undly_90_set");

      {
        xml_element UndAID_90{"UndAID"};
        multiset<string> UndAID_90_set;
        UndAID_90.add_attribute("AltID", "UnderlyingSecurityAltID_t_81717239"); // 3
        UndAID_90_set.insert("UnderlyingSecurityAltID_t_81717239");
        UndAID_90.add_attribute("AltIDSrc", "I"); // 3
        UndAID_90_set.insert("I");
        all_values.push_back(UndAID_90_set);
        all_compo_names.insert("UndAID_90_set");

        Undly_90.add_element(UndAID_90);
      }
      {
        xml_element Stip_140{"Stip"};
        multiset<string> Stip_140_set;
        Stip_140.add_attribute("Typ", "REFPRIN"); // 3
        Stip_140_set.insert("REFPRIN");
        Stip_140.add_attribute("Val", "UnderlyingStipValue_t_1694586287"); // 3
        Stip_140_set.insert("UnderlyingStipValue_t_1694586287");
        all_values.push_back(Stip_140_set);
        all_compo_names.insert("Stip_140_set");

        Undly_90.add_element(Stip_140);
      }
      {
        xml_element Pty_350{"Pty"};
        multiset<string> Pty_350_set;
        Pty_350.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1120566414"); // 3
        Pty_350_set.insert("UnderlyingInstrumentPartyID_t_1120566414");
        Pty_350.add_attribute("Src", "B"); // 3
        Pty_350_set.insert("B");
        Pty_350.add_attribute("R", "72"); // 3
        Pty_350_set.insert("72");
        all_values.push_back(Pty_350_set);
        all_compo_names.insert("Pty_350_set");

        {
          xml_element Sub_350{"Sub"};
          multiset<string> Sub_350_set;
          Sub_350.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1268223657"); // 4
          Sub_350_set.insert("UnderlyingInstrumentPartySubID_t_1268223657");
          Sub_350.add_attribute("Typ", "17"); // 4
          Sub_350_set.insert("17");
          all_values.push_back(Sub_350_set);
          all_compo_names.insert("Sub_350_set");

          Pty_350.add_element(Sub_350);
        }
        Undly_90.add_element(Pty_350);
      }
      QuotReqRej_2.add_element(Undly_90);
    }
    {
      xml_element OrdQty_23{"OrdQty"};
      multiset<string> OrdQty_23_set;
      OrdQty_23.add_attribute("Qty", "18323801.190000"); // 2
      OrdQty_23_set.insert("18323801.190000");
      OrdQty_23.add_attribute("Cash", "16217358.670000"); // 2
      OrdQty_23_set.insert("16217358.670000");
      OrdQty_23.add_attribute("Pct", "20119727.750000"); // 2
      OrdQty_23_set.insert("20119727.750000");
      OrdQty_23.add_attribute("RndDir", "0"); // 2
      OrdQty_23_set.insert("0");
      OrdQty_23.add_attribute("RndMod", "12899211.660000"); // 2
      OrdQty_23_set.insert("12899211.660000");
      all_values.push_back(OrdQty_23_set);
      all_compo_names.insert("OrdQty_23_set");

      QuotReqRej_2.add_element(OrdQty_23);
    }
    {
      xml_element Stip_141{"Stip"};
      multiset<string> Stip_141_set;
      Stip_141.add_attribute("Typ", "REFTRADE"); // 2
      Stip_141_set.insert("REFTRADE");
      Stip_141.add_attribute("Val", "StipulationValue_t_920569048"); // 2
      Stip_141_set.insert("StipulationValue_t_920569048");
      all_values.push_back(Stip_141_set);
      all_compo_names.insert("Stip_141_set");

      QuotReqRej_2.add_element(Stip_141);
    }
    {
      xml_element Leg_73{"Leg"};
      multiset<string> Leg_73_set;
      Leg_73.add_attribute("Qty", "19218156.270000"); // 2
      Leg_73_set.insert("19218156.270000");
      Leg_73.add_attribute("OrdQty", "16166983.730000"); // 2
      Leg_73_set.insert("16166983.730000");
      Leg_73.add_attribute("SwapTyp", "4"); // 2
      Leg_73_set.insert("4");
      Leg_73.add_attribute("SettlTyp", "B"); // 2
      Leg_73_set.insert("B");
      Leg_73.add_attribute("SettlDt", "LegSettlDate_t_1253385441"); // 2
      Leg_73_set.insert("LegSettlDate_t_1253385441");
      Leg_73.add_attribute("RefID", "LegRefID_t_144405186"); // 2
      Leg_73_set.insert("LegRefID_t_144405186");
      all_values.push_back(Leg_73_set);
      all_compo_names.insert("Leg_73_set");

      {
        xml_element Leg_74{"Leg"};
        multiset<string> Leg_74_set;
        Leg_74.add_attribute("Sym", "LegSymbol_t_1173886629"); // 3
        Leg_74_set.insert("LegSymbol_t_1173886629");
        Leg_74.add_attribute("Sfx", "WI"); // 3
        Leg_74_set.insert("WI");
        Leg_74.add_attribute("ID", "LegSecurityID_t_387042155"); // 3
        Leg_74_set.insert("LegSecurityID_t_387042155");
        Leg_74.add_attribute("Src", "J"); // 3
        Leg_74_set.insert("J");
        Leg_74.add_attribute("Prod", "11"); // 3
        Leg_74_set.insert("11");
        Leg_74.add_attribute("CFI", "LegCFICode_t_1895391256"); // 3
        Leg_74_set.insert("LegCFICode_t_1895391256");
        Leg_74.add_attribute("SecTyp", "OPT"); // 3
        Leg_74_set.insert("OPT");
        Leg_74.add_attribute("SecSubTyp", "LegSecuritySubType_t_1424184913"); // 3
        Leg_74_set.insert("LegSecuritySubType_t_1424184913");
        Leg_74.add_attribute("MMY", "1464005363"); // 3
        Leg_74_set.insert("1464005363");
        Leg_74.add_attribute("Mat", "LegMaturityDate_t_1545550242"); // 3
        Leg_74_set.insert("LegMaturityDate_t_1545550242");
        Leg_74.add_attribute("MatTm", "224170706"); // 3
        Leg_74_set.insert("224170706");
        Leg_74.add_attribute("CpnPmt", "LegCouponPaymentDate_t_919053701"); // 3
        Leg_74_set.insert("LegCouponPaymentDate_t_919053701");
        Leg_74.add_attribute("Issued", "LegIssueDate_t_1092652881"); // 3
        Leg_74_set.insert("LegIssueDate_t_1092652881");
        Leg_74.add_attribute("RepoCollSecTyp", "1344737120"); // 3
        Leg_74_set.insert("1344737120");
        Leg_74.add_attribute("RepoTrm", "541340936"); // 3
        Leg_74_set.insert("541340936");
        Leg_74.add_attribute("RepoRt", "8750497.310000"); // 3
        Leg_74_set.insert("8750497.310000");
        Leg_74.add_attribute("Fctr", "4654771.290000"); // 3
        Leg_74_set.insert("4654771.290000");
        Leg_74.add_attribute("CrdRtg", "LegCreditRating_t_1047642520"); // 3
        Leg_74_set.insert("LegCreditRating_t_1047642520");
        Leg_74.add_attribute("Rgstry", "LegInstrRegistry_t_559946203"); // 3
        Leg_74_set.insert("LegInstrRegistry_t_559946203");
        Leg_74.add_attribute("Ctry", "2087212997"); // 3
        Leg_74_set.insert("2087212997");
        Leg_74.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_912131647"); // 3
        Leg_74_set.insert("LegStateOrProvinceOfIssue_t_912131647");
        Leg_74.add_attribute("Lcl", "LegLocaleOfIssue_t_600632206"); // 3
        Leg_74_set.insert("LegLocaleOfIssue_t_600632206");
        Leg_74.add_attribute("Redeem", "LegRedemptionDate_t_1229650515"); // 3
        Leg_74_set.insert("LegRedemptionDate_t_1229650515");
        Leg_74.add_attribute("Strk", "8297689.440000"); // 3
        Leg_74_set.insert("8297689.440000");
        Leg_74.add_attribute("StrkCcy", "CAN"); // 3
        Leg_74_set.insert("CAN");
        Leg_74.add_attribute("OptA", "298983670"); // 3
        Leg_74_set.insert("298983670");
        Leg_74.add_attribute("Cmult", "20609728.130000"); // 3
        Leg_74_set.insert("20609728.130000");
        Leg_74.add_attribute("MultTyp", "1"); // 3
        Leg_74_set.insert("1");
        Leg_74.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_74_set.insert("1");
        Leg_74.add_attribute("UOM", "oz_tr"); // 3
        Leg_74_set.insert("oz_tr");
        Leg_74.add_attribute("UOMQty", "7790122.920000"); // 3
        Leg_74_set.insert("7790122.920000");
        Leg_74.add_attribute("PxUOM", "t"); // 3
        Leg_74_set.insert("t");
        Leg_74.add_attribute("PxUOMQty", "4449365.070000"); // 3
        Leg_74_set.insert("4449365.070000");
        Leg_74.add_attribute("TmUnit", "H"); // 3
        Leg_74_set.insert("H");
        Leg_74.add_attribute("ExerStyle", "0"); // 3
        Leg_74_set.insert("0");
        Leg_74.add_attribute("CpnRt", "1928441.150000"); // 3
        Leg_74_set.insert("1928441.150000");
        Leg_74.add_attribute("Exch", "LegSecurityExchange_t_1983901196"); // 3
        Leg_74_set.insert("LegSecurityExchange_t_1983901196");
        Leg_74.add_attribute("Issr", "LegIssuer_t_1020808923"); // 3
        Leg_74_set.insert("LegIssuer_t_1020808923");
        Leg_74.add_attribute("EncLegIssrLen", "1656849479"); // 3
        Leg_74_set.insert("1656849479");
        Leg_74.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1381967790"); // 3
        Leg_74_set.insert("EncodedLegIssuer_t_1381967790");
        Leg_74.add_attribute("Desc", "LegSecurityDesc_t_1244979629"); // 3
        Leg_74_set.insert("LegSecurityDesc_t_1244979629");
        Leg_74.add_attribute("EncLegSecDescLen", "428419532"); // 3
        Leg_74_set.insert("428419532");
        Leg_74.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_327137023"); // 3
        Leg_74_set.insert("EncodedLegSecurityDesc_t_327137023");
        Leg_74.add_attribute("RatioQty", "4422331.020000"); // 3
        Leg_74_set.insert("4422331.020000");
        Leg_74.add_attribute("Side", "5"); // 3
        Leg_74_set.insert("5");
        Leg_74.add_attribute("Ccy", "CHF"); // 3
        Leg_74_set.insert("CHF");
        Leg_74.add_attribute("Pool", "LegPool_t_2017402988"); // 3
        Leg_74_set.insert("LegPool_t_2017402988");
        Leg_74.add_attribute("Dated", "LegDatedDate_t_1762132958"); // 3
        Leg_74_set.insert("LegDatedDate_t_1762132958");
        Leg_74.add_attribute("CSetMo", "847439580"); // 3
        Leg_74_set.insert("847439580");
        Leg_74.add_attribute("IntAcrl", "LegInterestAccrualDate_t_782050988"); // 3
        Leg_74_set.insert("LegInterestAccrualDate_t_782050988");
        Leg_74.add_attribute("PutCall", "215281516"); // 3
        Leg_74_set.insert("215281516");
        Leg_74.add_attribute("LegOptionRatio", "20770900.960000"); // 3
        Leg_74_set.insert("20770900.960000");
        Leg_74.add_attribute("Px", "16118199.320000"); // 3
        Leg_74_set.insert("16118199.320000");
        all_values.push_back(Leg_74_set);
        all_compo_names.insert("Leg_74_set");

        {
          xml_element LegAID_69{"LegAID"};
          multiset<string> LegAID_69_set;
          LegAID_69.add_attribute("SecAltID", "LegSecurityAltID_t_1736482771"); // 4
          LegAID_69_set.insert("LegSecurityAltID_t_1736482771");
          LegAID_69.add_attribute("SecAltIDSrc", "2"); // 4
          LegAID_69_set.insert("2");
          all_values.push_back(LegAID_69_set);
          all_compo_names.insert("LegAID_69_set");

          Leg_74.add_element(LegAID_69);
        }
        Leg_73.add_element(Leg_74);
      }
      {
        xml_element Stip_142{"Stip"};
        multiset<string> Stip_142_set;
        Stip_142.add_attribute("StipTyp", "AUTOREINV"); // 3
        Stip_142_set.insert("AUTOREINV");
        Stip_142.add_attribute("StipVal", "LegStipulationValue_t_1649971936"); // 3
        Stip_142_set.insert("LegStipulationValue_t_1649971936");
        all_values.push_back(Stip_142_set);
        all_compo_names.insert("Stip_142_set");

        Leg_73.add_element(Stip_142);
      }
      {
        xml_element Pty_351{"Pty"};
        multiset<string> Pty_351_set;
        Pty_351.add_attribute("ID", "NestedPartyID_t_538714605"); // 3
        Pty_351_set.insert("NestedPartyID_t_538714605");
        Pty_351.add_attribute("Src", "I"); // 3
        Pty_351_set.insert("I");
        Pty_351.add_attribute("R", "47"); // 3
        Pty_351_set.insert("47");
        all_values.push_back(Pty_351_set);
        all_compo_names.insert("Pty_351_set");

        {
          xml_element Sub_351{"Sub"};
          multiset<string> Sub_351_set;
          Sub_351.add_attribute("ID", "NestedPartySubID_t_1317726897"); // 4
          Sub_351_set.insert("NestedPartySubID_t_1317726897");
          Sub_351.add_attribute("Typ", "29"); // 4
          Sub_351_set.insert("29");
          all_values.push_back(Sub_351_set);
          all_compo_names.insert("Sub_351_set");

          Pty_351.add_element(Sub_351);
        }
        Leg_73.add_element(Pty_351);
      }
      {
        xml_element BnchmkCurve_7{"BnchmkCurve"};
        multiset<string> BnchmkCurve_7_set;
        BnchmkCurve_7.add_attribute("Ccy", "CAN"); // 3
        BnchmkCurve_7_set.insert("CAN");
        BnchmkCurve_7.add_attribute("Name", "LIBOR"); // 3
        BnchmkCurve_7_set.insert("LIBOR");
        BnchmkCurve_7.add_attribute("Point", "LegBenchmarkCurvePoint_t_198163262"); // 3
        BnchmkCurve_7_set.insert("LegBenchmarkCurvePoint_t_198163262");
        BnchmkCurve_7.add_attribute("Px", "16742126.400000"); // 3
        BnchmkCurve_7_set.insert("16742126.400000");
        BnchmkCurve_7.add_attribute("PxTyp", "1467578432"); // 3
        BnchmkCurve_7_set.insert("1467578432");
        all_values.push_back(BnchmkCurve_7_set);
        all_compo_names.insert("BnchmkCurve_7_set");

        Leg_73.add_element(BnchmkCurve_7);
      }
      QuotReqRej_2.add_element(Leg_73);
    }
    {
      xml_element QuotQual_6{"QuotQual"};
      multiset<string> QuotQual_6_set;
      QuotQual_6.add_attribute("Qual", "O"); // 2
      QuotQual_6_set.insert("O");
      all_values.push_back(QuotQual_6_set);
      all_compo_names.insert("QuotQual_6_set");

      QuotReqRej_2.add_element(QuotQual_6);
    }
    {
      xml_element SprdBnchmkCurve_28{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_28_set;
      SprdBnchmkCurve_28.add_attribute("Spread", "9086967.820000"); // 2
      SprdBnchmkCurve_28_set.insert("9086967.820000");
      SprdBnchmkCurve_28.add_attribute("Ccy", "GBP"); // 2
      SprdBnchmkCurve_28_set.insert("GBP");
      SprdBnchmkCurve_28.add_attribute("Name", "MuniAAA"); // 2
      SprdBnchmkCurve_28_set.insert("MuniAAA");
      SprdBnchmkCurve_28.add_attribute("Point", "BenchmarkCurvePoint_t_1007307516"); // 2
      SprdBnchmkCurve_28_set.insert("BenchmarkCurvePoint_t_1007307516");
      SprdBnchmkCurve_28.add_attribute("Px", "11057090.940000"); // 2
      SprdBnchmkCurve_28_set.insert("11057090.940000");
      SprdBnchmkCurve_28.add_attribute("PxTyp", "13"); // 2
      SprdBnchmkCurve_28_set.insert("13");
      SprdBnchmkCurve_28.add_attribute("SecID", "BenchmarkSecurityID_t_1915017747"); // 2
      SprdBnchmkCurve_28_set.insert("BenchmarkSecurityID_t_1915017747");
      SprdBnchmkCurve_28.add_attribute("SecIDSrc", "2"); // 2
      SprdBnchmkCurve_28_set.insert("2");
      all_values.push_back(SprdBnchmkCurve_28_set);
      all_compo_names.insert("SprdBnchmkCurve_28_set");

      QuotReqRej_2.add_element(SprdBnchmkCurve_28);
    }
    {
      xml_element Yield_23{"Yield"};
      multiset<string> Yield_23_set;
      Yield_23.add_attribute("Typ", "CURRENT"); // 2
      Yield_23_set.insert("CURRENT");
      Yield_23.add_attribute("Yld", "6149736.800000"); // 2
      Yield_23_set.insert("6149736.800000");
      Yield_23.add_attribute("CalcDt", "YieldCalcDate_t_1757679423"); // 2
      Yield_23_set.insert("YieldCalcDate_t_1757679423");
      Yield_23.add_attribute("RedDt", "YieldRedemptionDate_t_120467739"); // 2
      Yield_23_set.insert("YieldRedemptionDate_t_120467739");
      Yield_23.add_attribute("RedPx", "5445801.280000"); // 2
      Yield_23_set.insert("5445801.280000");
      Yield_23.add_attribute("RedPxTyp", "8"); // 2
      Yield_23_set.insert("8");
      all_values.push_back(Yield_23_set);
      all_compo_names.insert("Yield_23_set");

      QuotReqRej_2.add_element(Yield_23);
    }
    {
      xml_element Pty_352{"Pty"};
      multiset<string> Pty_352_set;
      Pty_352.add_attribute("ID", "PartyID_t_1856950511"); // 2
      Pty_352_set.insert("PartyID_t_1856950511");
      Pty_352.add_attribute("Src", "I"); // 2
      Pty_352_set.insert("I");
      Pty_352.add_attribute("R", "41"); // 2
      Pty_352_set.insert("41");
      all_values.push_back(Pty_352_set);
      all_compo_names.insert("Pty_352_set");

      {
        xml_element Sub_352{"Sub"};
        multiset<string> Sub_352_set;
        Sub_352.add_attribute("ID", "PartySubID_t_1359438799"); // 3
        Sub_352_set.insert("PartySubID_t_1359438799");
        Sub_352.add_attribute("Typ", "14"); // 3
        Sub_352_set.insert("14");
        all_values.push_back(Sub_352_set);
        all_compo_names.insert("Sub_352_set");

        Pty_352.add_element(Sub_352);
      }
      QuotReqRej_2.add_element(Pty_352);
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
