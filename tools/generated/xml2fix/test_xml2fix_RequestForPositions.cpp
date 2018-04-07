#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositions_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ReqForPoss" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositions_message_t_0;
  elt.add_attribute("ReqID", "PosReqID_t_1763024913"); // 0
  RequestForPositions_message_t_0.insert("PosReqID_t_1763024913");
  elt.add_attribute("ReqTyp", "4"); // 0
  RequestForPositions_message_t_0.insert("4");
  elt.add_attribute("MtchStat", "0"); // 0
  RequestForPositions_message_t_0.insert("0");
  elt.add_attribute("SubReqTyp", "2"); // 0
  RequestForPositions_message_t_0.insert("2");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  RequestForPositions_message_t_0.insert("CHF");
  elt.add_attribute("Acct", "Account_t_525697583"); // 0
  RequestForPositions_message_t_0.insert("Account_t_525697583");
  elt.add_attribute("AcctIDSrc", "4"); // 0
  RequestForPositions_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "8"); // 0
  RequestForPositions_message_t_0.insert("8");
  elt.add_attribute("Ccy", "CAN"); // 0
  RequestForPositions_message_t_0.insert("CAN");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_330234122"); // 0
  RequestForPositions_message_t_0.insert("ClearingBusinessDate_t_330234122");
  elt.add_attribute("SetSesID", "ITD"); // 0
  RequestForPositions_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_516981214"); // 0
  RequestForPositions_message_t_0.insert("SettlSessSubID_t_516981214");
  elt.add_attribute("TxnTm", "TransactTime_t_1820603477"); // 0
  RequestForPositions_message_t_0.insert("TransactTime_t_1820603477");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  RequestForPositions_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_487713674"); // 0
  RequestForPositions_message_t_0.insert("ResponseDestination_t_487713674");
  elt.add_attribute("Txt", "Text_t_114969579"); // 0
  RequestForPositions_message_t_0.insert("Text_t_114969579");
  elt.add_attribute("EncTxtLen", "488690854"); // 0
  RequestForPositions_message_t_0.insert("488690854");
  elt.add_attribute("EncTxt", "EncodedText_t_946115154"); // 0
  RequestForPositions_message_t_0.insert("EncodedText_t_946115154");
  all_values.push_back(RequestForPositions_message_t_0);
  all_compo_names.insert("RequestForPositions_message_t");

  { // Hdr
    xml_element Hdr_78{"Hdr"};
    multiset<string> Hdr_78_set;
    Hdr_78.add_attribute("SeqNum", "1105985596"); // 1
    Hdr_78_set.insert("1105985596");
    Hdr_78.add_attribute("SID", "SenderCompID_t_615243581"); // 1
    Hdr_78_set.insert("SenderCompID_t_615243581");
    Hdr_78.add_attribute("TID", "TargetCompID_t_1359615295"); // 1
    Hdr_78_set.insert("TargetCompID_t_1359615295");
    Hdr_78.add_attribute("OBID", "OnBehalfOfCompID_t_639951110"); // 1
    Hdr_78_set.insert("OnBehalfOfCompID_t_639951110");
    Hdr_78.add_attribute("D2ID", "DeliverToCompID_t_636384551"); // 1
    Hdr_78_set.insert("DeliverToCompID_t_636384551");
    Hdr_78.add_attribute("SSub", "SenderSubID_t_689377011"); // 1
    Hdr_78_set.insert("SenderSubID_t_689377011");
    Hdr_78.add_attribute("SLoc", "SenderLocationID_t_1777852875"); // 1
    Hdr_78_set.insert("SenderLocationID_t_1777852875");
    Hdr_78.add_attribute("TSub", "TargetSubID_t_583195337"); // 1
    Hdr_78_set.insert("TargetSubID_t_583195337");
    Hdr_78.add_attribute("TLoc", "TargetLocationID_t_435832066"); // 1
    Hdr_78_set.insert("TargetLocationID_t_435832066");
    Hdr_78.add_attribute("OBSub", "OnBehalfOfSubID_t_2018771673"); // 1
    Hdr_78_set.insert("OnBehalfOfSubID_t_2018771673");
    Hdr_78.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1839161782"); // 1
    Hdr_78_set.insert("OnBehalfOfLocationID_t_1839161782");
    Hdr_78.add_attribute("D2Sub", "DeliverToSubID_t_51373331"); // 1
    Hdr_78_set.insert("DeliverToSubID_t_51373331");
    Hdr_78.add_attribute("D2Loc", "DeliverToLocationID_t_1144236951"); // 1
    Hdr_78_set.insert("DeliverToLocationID_t_1144236951");
    Hdr_78.add_attribute("PosDup", "N"); // 1
    Hdr_78_set.insert("N");
    Hdr_78.add_attribute("PosRsnd", "Y"); // 1
    Hdr_78_set.insert("Y");
    Hdr_78.add_attribute("Snt", "SendingTime_t_1005521801"); // 1
    Hdr_78_set.insert("SendingTime_t_1005521801");
    Hdr_78.add_attribute("OrigSnt", "OrigSendingTime_t_440511154"); // 1
    Hdr_78_set.insert("OrigSendingTime_t_440511154");
    Hdr_78.add_attribute("MsgEncd", "MessageEncoding_t_1721918500"); // 1
    Hdr_78_set.insert("MessageEncoding_t_1721918500");
    all_values.push_back(Hdr_78_set);
    all_compo_names.insert("Hdr_78_set");

    {
      xml_element Hop_78{"Hop"};
      multiset<string> Hop_78_set;
      Hop_78.add_attribute("ID", "HopCompID_t_2140909160"); // 2
      Hop_78_set.insert("HopCompID_t_2140909160");
      Hop_78.add_attribute("Ref", "287383883"); // 2
      Hop_78_set.insert("287383883");
      Hop_78.add_attribute("Snt", "HopSendingTime_t_870575551"); // 2
      Hop_78_set.insert("HopSendingTime_t_870575551");
      all_values.push_back(Hop_78_set);
      all_compo_names.insert("Hop_78_set");

      Hdr_78.add_element(Hop_78);
    }
    elt.add_element(Hdr_78);
  } // end Hdr
  { // Pty
    xml_element Pty_388{"Pty"};
    multiset<string> Pty_388_set;
    Pty_388.add_attribute("ID", "PartyID_t_617618005"); // 1
    Pty_388_set.insert("PartyID_t_617618005");
    Pty_388.add_attribute("Src", "E"); // 1
    Pty_388_set.insert("E");
    Pty_388.add_attribute("R", "19"); // 1
    Pty_388_set.insert("19");
    all_values.push_back(Pty_388_set);
    all_compo_names.insert("Pty_388_set");

    {
      xml_element Sub_388{"Sub"};
      multiset<string> Sub_388_set;
      Sub_388.add_attribute("ID", "PartySubID_t_290737834"); // 2
      Sub_388_set.insert("PartySubID_t_290737834");
      Sub_388.add_attribute("Typ", "15"); // 2
      Sub_388_set.insert("15");
      all_values.push_back(Sub_388_set);
      all_compo_names.insert("Sub_388_set");

      Pty_388.add_element(Sub_388);
    }
    elt.add_element(Pty_388);
  } // end Pty
  { // Pty
    xml_element Pty_389{"Pty"};
    multiset<string> Pty_389_set;
    Pty_389.add_attribute("ID", "PartyID_t_191486128"); // 1
    Pty_389_set.insert("PartyID_t_191486128");
    Pty_389.add_attribute("Src", "E"); // 1
    Pty_389_set.insert("E");
    Pty_389.add_attribute("R", "42"); // 1
    Pty_389_set.insert("42");
    all_values.push_back(Pty_389_set);
    all_compo_names.insert("Pty_389_set");

    {
      xml_element Sub_389{"Sub"};
      multiset<string> Sub_389_set;
      Sub_389.add_attribute("ID", "PartySubID_t_1137601282"); // 2
      Sub_389_set.insert("PartySubID_t_1137601282");
      Sub_389.add_attribute("Typ", "11"); // 2
      Sub_389_set.insert("11");
      all_values.push_back(Sub_389_set);
      all_compo_names.insert("Sub_389_set");

      Pty_389.add_element(Sub_389);
    }
    elt.add_element(Pty_389);
  } // end Pty
  { // Pty
    xml_element Pty_390{"Pty"};
    multiset<string> Pty_390_set;
    Pty_390.add_attribute("ID", "PartyID_t_636919232"); // 1
    Pty_390_set.insert("PartyID_t_636919232");
    Pty_390.add_attribute("Src", "4"); // 1
    Pty_390_set.insert("4");
    Pty_390.add_attribute("R", "8"); // 1
    Pty_390_set.insert("8");
    all_values.push_back(Pty_390_set);
    all_compo_names.insert("Pty_390_set");

    {
      xml_element Sub_390{"Sub"};
      multiset<string> Sub_390_set;
      Sub_390.add_attribute("ID", "PartySubID_t_1273303783"); // 2
      Sub_390_set.insert("PartySubID_t_1273303783");
      Sub_390.add_attribute("Typ", "1"); // 2
      Sub_390_set.insert("1");
      all_values.push_back(Sub_390_set);
      all_compo_names.insert("Sub_390_set");

      Pty_390.add_element(Sub_390);
    }
    elt.add_element(Pty_390);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_71{"Instrmt"};
    multiset<string> Instrmt_71_set;
    Instrmt_71.add_attribute("Sym", "Symbol_t_1782013347"); // 1
    Instrmt_71_set.insert("Symbol_t_1782013347");
    Instrmt_71.add_attribute("Sfx", "CD"); // 1
    Instrmt_71_set.insert("CD");
    Instrmt_71.add_attribute("ID", "SecurityID_t_1474942006"); // 1
    Instrmt_71_set.insert("SecurityID_t_1474942006");
    Instrmt_71.add_attribute("Src", "9"); // 1
    Instrmt_71_set.insert("9");
    Instrmt_71.add_attribute("Prod", "10"); // 1
    Instrmt_71_set.insert("10");
    Instrmt_71.add_attribute("ProdCmplx", "ProductComplex_t_1526315338"); // 1
    Instrmt_71_set.insert("ProductComplex_t_1526315338");
    Instrmt_71.add_attribute("SecGrp", "SecurityGroup_t_650054675"); // 1
    Instrmt_71_set.insert("SecurityGroup_t_650054675");
    Instrmt_71.add_attribute("CFI", "CFICode_t_1008719751"); // 1
    Instrmt_71_set.insert("CFICode_t_1008719751");
    Instrmt_71.add_attribute("SecTyp", "DINP"); // 1
    Instrmt_71_set.insert("DINP");
    Instrmt_71.add_attribute("SubTyp", "SecuritySubType_t_1655576476"); // 1
    Instrmt_71_set.insert("SecuritySubType_t_1655576476");
    Instrmt_71.add_attribute("MMY", "1449230905"); // 1
    Instrmt_71_set.insert("1449230905");
    Instrmt_71.add_attribute("MatDt", "MaturityDate_t_149487459"); // 1
    Instrmt_71_set.insert("MaturityDate_t_149487459");
    Instrmt_71.add_attribute("MatTm", "1649001989"); // 1
    Instrmt_71_set.insert("1649001989");
    Instrmt_71.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1736614788"); // 1
    Instrmt_71_set.insert("SettleOnOpenFlag_t_1736614788");
    Instrmt_71.add_attribute("AsgnMeth", "1020063010"); // 1
    Instrmt_71_set.insert("1020063010");
    Instrmt_71.add_attribute("Status", "1"); // 1
    Instrmt_71_set.insert("1");
    Instrmt_71.add_attribute("CpnPmt", "CouponPaymentDate_t_206749145"); // 1
    Instrmt_71_set.insert("CouponPaymentDate_t_206749145");
    Instrmt_71.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_71_set.insert("MR");
    Instrmt_71.add_attribute("Snrty", "SR"); // 1
    Instrmt_71_set.insert("SR");
    Instrmt_71.add_attribute("NotlPctOut", "4974869.790000"); // 1
    Instrmt_71_set.insert("4974869.790000");
    Instrmt_71.add_attribute("OrigNotlPctOut", "21267885.930000"); // 1
    Instrmt_71_set.insert("21267885.930000");
    Instrmt_71.add_attribute("AttchPnt", "7310518.100000"); // 1
    Instrmt_71_set.insert("7310518.100000");
    Instrmt_71.add_attribute("DetchPnt", "9031943.920000"); // 1
    Instrmt_71_set.insert("9031943.920000");
    Instrmt_71.add_attribute("Issued", "IssueDate_t_980596"); // 1
    Instrmt_71_set.insert("IssueDate_t_980596");
    Instrmt_71.add_attribute("RepoCollSecTyp", "1868653092"); // 1
    Instrmt_71_set.insert("1868653092");
    Instrmt_71.add_attribute("RepoTrm", "267403753"); // 1
    Instrmt_71_set.insert("267403753");
    Instrmt_71.add_attribute("RepoRt", "6378998.280000"); // 1
    Instrmt_71_set.insert("6378998.280000");
    Instrmt_71.add_attribute("Fctr", "709023.730000"); // 1
    Instrmt_71_set.insert("709023.730000");
    Instrmt_71.add_attribute("CrdRtg", "CreditRating_t_271564225"); // 1
    Instrmt_71_set.insert("CreditRating_t_271564225");
    Instrmt_71.add_attribute("Rgstry", "InstrRegistry_t_1911203611"); // 1
    Instrmt_71_set.insert("InstrRegistry_t_1911203611");
    Instrmt_71.add_attribute("IssuCtry", "1110012313"); // 1
    Instrmt_71_set.insert("1110012313");
    Instrmt_71.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2053577572"); // 1
    Instrmt_71_set.insert("StateOrProvinceOfIssue_t_2053577572");
    Instrmt_71.add_attribute("Lcl", "LocaleOfIssue_t_1620219084"); // 1
    Instrmt_71_set.insert("LocaleOfIssue_t_1620219084");
    Instrmt_71.add_attribute("Redeem", "RedemptionDate_t_437470672"); // 1
    Instrmt_71_set.insert("RedemptionDate_t_437470672");
    Instrmt_71.add_attribute("StrkPx", "15593952.960000"); // 1
    Instrmt_71_set.insert("15593952.960000");
    Instrmt_71.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_71_set.insert("GBP");
    Instrmt_71.add_attribute("StrkMult", "619663.230000"); // 1
    Instrmt_71_set.insert("619663.230000");
    Instrmt_71.add_attribute("StrkValu", "20296324.420000"); // 1
    Instrmt_71_set.insert("20296324.420000");
    Instrmt_71.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_71_set.insert("2");
    Instrmt_71.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_71_set.insert("5");
    Instrmt_71.add_attribute("StrkPxBndryPrcsn", "13313797.000000"); // 1
    Instrmt_71_set.insert("13313797.000000");
    Instrmt_71.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_71_set.insert("1");
    Instrmt_71.add_attribute("OptAt", "1219061140"); // 1
    Instrmt_71_set.insert("1219061140");
    Instrmt_71.add_attribute("Mult", "9205108.400000"); // 1
    Instrmt_71_set.insert("9205108.400000");
    Instrmt_71.add_attribute("MultTyp", "2"); // 1
    Instrmt_71_set.insert("2");
    Instrmt_71.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_71_set.insert("4");
    Instrmt_71.add_attribute("MinPxIncr", "11272599.860000"); // 1
    Instrmt_71_set.insert("11272599.860000");
    Instrmt_71.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2007225587"); // 1
    Instrmt_71_set.insert("MinPriceIncrementAmount_t_2007225587");
    Instrmt_71.add_attribute("UOM", "t"); // 1
    Instrmt_71_set.insert("t");
    Instrmt_71.add_attribute("UOMQty", "16247469.650000"); // 1
    Instrmt_71_set.insert("16247469.650000");
    Instrmt_71.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_71_set.insert("Alw");
    Instrmt_71.add_attribute("PxUOMQty", "11779882.140000"); // 1
    Instrmt_71_set.insert("11779882.140000");
    Instrmt_71.add_attribute("SettlMeth", "C"); // 1
    Instrmt_71_set.insert("C");
    Instrmt_71.add_attribute("ExerStyle", "2"); // 1
    Instrmt_71_set.insert("2");
    Instrmt_71.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_71_set.insert("2");
    Instrmt_71.add_attribute("OptPayAmt", "OptPayoutAmount_t_647861463"); // 1
    Instrmt_71_set.insert("OptPayoutAmount_t_647861463");
    Instrmt_71.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_71_set.insert("INX");
    Instrmt_71.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_71_set.insert("FUTDA");
    Instrmt_71.add_attribute("ListMeth", "0"); // 1
    Instrmt_71_set.insert("0");
    Instrmt_71.add_attribute("CapPx", "2416472.730000"); // 1
    Instrmt_71_set.insert("2416472.730000");
    Instrmt_71.add_attribute("FlrPx", "20800723.450000"); // 1
    Instrmt_71_set.insert("20800723.450000");
    Instrmt_71.add_attribute("PutCall", "0"); // 1
    Instrmt_71_set.insert("0");
    Instrmt_71.add_attribute("FlexInd", "false"); // 1
    Instrmt_71_set.insert("false");
    Instrmt_71.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_71_set.insert("false");
    Instrmt_71.add_attribute("TmUnit", "D"); // 1
    Instrmt_71_set.insert("D");
    Instrmt_71.add_attribute("CpnRt", "7352954.000000"); // 1
    Instrmt_71_set.insert("7352954.000000");
    Instrmt_71.add_attribute("Exch", "SecurityExchange_t_186361731"); // 1
    Instrmt_71_set.insert("SecurityExchange_t_186361731");
    Instrmt_71.add_attribute("PosLmt", "299397583"); // 1
    Instrmt_71_set.insert("299397583");
    Instrmt_71.add_attribute("NTPosLmt", "617444194"); // 1
    Instrmt_71_set.insert("617444194");
    Instrmt_71.add_attribute("Issr", "Issuer_t_577716700"); // 1
    Instrmt_71_set.insert("Issuer_t_577716700");
    Instrmt_71.add_attribute("EncIssrLen", "2016940383"); // 1
    Instrmt_71_set.insert("2016940383");
    Instrmt_71.add_attribute("EncIssr", "EncodedIssuer_t_1948823894"); // 1
    Instrmt_71_set.insert("EncodedIssuer_t_1948823894");
    Instrmt_71.add_attribute("Desc", "SecurityDesc_t_1118559128"); // 1
    Instrmt_71_set.insert("SecurityDesc_t_1118559128");
    Instrmt_71.add_attribute("EncSecDescLen", "1088517875"); // 1
    Instrmt_71_set.insert("1088517875");
    Instrmt_71.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_721851087"); // 1
    Instrmt_71_set.insert("EncodedSecurityDesc_t_721851087");
    Instrmt_71.add_attribute("Pool", "Pool_t_531980918"); // 1
    Instrmt_71_set.insert("Pool_t_531980918");
    Instrmt_71.add_attribute("CSetMo", "995888596"); // 1
    Instrmt_71_set.insert("995888596");
    Instrmt_71.add_attribute("CPPgm", "99"); // 1
    Instrmt_71_set.insert("99");
    Instrmt_71.add_attribute("CPRegT", "CPRegType_t_391722857"); // 1
    Instrmt_71_set.insert("CPRegType_t_391722857");
    Instrmt_71.add_attribute("Dated", "DatedDate_t_1442825000"); // 1
    Instrmt_71_set.insert("DatedDate_t_1442825000");
    Instrmt_71.add_attribute("IntAcrl", "InterestAccrualDate_t_1326374390"); // 1
    Instrmt_71_set.insert("InterestAccrualDate_t_1326374390");
    all_values.push_back(Instrmt_71_set);
    all_compo_names.insert("Instrmt_71_set");

    {
      xml_element AID_74{"AID"};
      multiset<string> AID_74_set;
      AID_74.add_attribute("AltID", "SecurityAltID_t_230769742"); // 2
      AID_74_set.insert("SecurityAltID_t_230769742");
      AID_74.add_attribute("AltIDSrc", "7"); // 2
      AID_74_set.insert("7");
      all_values.push_back(AID_74_set);
      all_compo_names.insert("AID_74_set");

      Instrmt_71.add_element(AID_74);
    }
    {
      xml_element SecXML_74{"SecXML"};
      multiset<string> SecXML_74_set;
      SecXML_74.add_attribute("Schema", "SecurityXMLSchema_t_1706832100"); // 2
      SecXML_74_set.insert("SecurityXMLSchema_t_1706832100");
      all_values.push_back(SecXML_74_set);
      all_compo_names.insert("SecXML_74_set");

      Instrmt_71.add_element(SecXML_74);
    }
    {
      xml_element Evnt_74{"Evnt"};
      multiset<string> Evnt_74_set;
      Evnt_74.add_attribute("EventTyp", "4"); // 2
      Evnt_74_set.insert("4");
      Evnt_74.add_attribute("Dt", "EventDate_t_1372487224"); // 2
      Evnt_74_set.insert("EventDate_t_1372487224");
      Evnt_74.add_attribute("Tm", "EventTime_t_207209916"); // 2
      Evnt_74_set.insert("EventTime_t_207209916");
      Evnt_74.add_attribute("Px", "5487245.320000"); // 2
      Evnt_74_set.insert("5487245.320000");
      Evnt_74.add_attribute("Txt", "EventText_t_195063608"); // 2
      Evnt_74_set.insert("EventText_t_195063608");
      all_values.push_back(Evnt_74_set);
      all_compo_names.insert("Evnt_74_set");

      Instrmt_71.add_element(Evnt_74);
    }
    {
      xml_element Pty_391{"Pty"};
      multiset<string> Pty_391_set;
      Pty_391.add_attribute("ID", "InstrumentPartyID_t_1126635604"); // 2
      Pty_391_set.insert("InstrumentPartyID_t_1126635604");
      Pty_391.add_attribute("Src", "E"); // 2
      Pty_391_set.insert("E");
      Pty_391.add_attribute("R", "34"); // 2
      Pty_391_set.insert("34");
      all_values.push_back(Pty_391_set);
      all_compo_names.insert("Pty_391_set");

      {
        xml_element Sub_391{"Sub"};
        multiset<string> Sub_391_set;
        Sub_391.add_attribute("ID", "InstrumentPartySubID_t_1952155217"); // 3
        Sub_391_set.insert("InstrumentPartySubID_t_1952155217");
        Sub_391.add_attribute("Typ", "2"); // 3
        Sub_391_set.insert("2");
        all_values.push_back(Sub_391_set);
        all_compo_names.insert("Sub_391_set");

        Pty_391.add_element(Sub_391);
      }
      Instrmt_71.add_element(Pty_391);
    }
    {
      xml_element CmplxEvnt_71{"CmplxEvnt"};
      multiset<string> CmplxEvnt_71_set;
      CmplxEvnt_71.add_attribute("Typ", "3"); // 2
      CmplxEvnt_71_set.insert("3");
      CmplxEvnt_71.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_42102829"); // 2
      CmplxEvnt_71_set.insert("ComplexOptPayoutAmount_t_42102829");
      CmplxEvnt_71.add_attribute("Px", "12400499.140000"); // 2
      CmplxEvnt_71_set.insert("12400499.140000");
      CmplxEvnt_71.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_71_set.insert("3");
      CmplxEvnt_71.add_attribute("PxBndryPrcsn", "3415004.130000"); // 2
      CmplxEvnt_71_set.insert("3415004.130000");
      CmplxEvnt_71.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_71_set.insert("1");
      CmplxEvnt_71.add_attribute("Cond", "2"); // 2
      CmplxEvnt_71_set.insert("2");
      all_values.push_back(CmplxEvnt_71_set);
      all_compo_names.insert("CmplxEvnt_71_set");

      {
        xml_element EvntDts_71{"EvntDts"};
        multiset<string> EvntDts_71_set;
        EvntDts_71.add_attribute("StartDt", "ComplexEventStartDate_t_210957148"); // 3
        EvntDts_71_set.insert("ComplexEventStartDate_t_210957148");
        EvntDts_71.add_attribute("EndDt", "ComplexEventEndDate_t_1658834355"); // 3
        EvntDts_71_set.insert("ComplexEventEndDate_t_1658834355");
        all_values.push_back(EvntDts_71_set);
        all_compo_names.insert("EvntDts_71_set");

        {
          xml_element EvntTms_71{"EvntTms"};
          multiset<string> EvntTms_71_set;
          EvntTms_71.add_attribute("StartTm", "232865588"); // 4
          EvntTms_71_set.insert("232865588");
          EvntTms_71.add_attribute("EndTm", "1299475023"); // 4
          EvntTms_71_set.insert("1299475023");
          all_values.push_back(EvntTms_71_set);
          all_compo_names.insert("EvntTms_71_set");

          EvntDts_71.add_element(EvntTms_71);
        }
        CmplxEvnt_71.add_element(EvntDts_71);
      }
      Instrmt_71.add_element(CmplxEvnt_71);
    }
    elt.add_element(Instrmt_71);
  } // end Instrmt
  { // Leg
    xml_element Leg_87{"Leg"};
    multiset<string> Leg_87_set;
    Leg_87.add_attribute("Sym", "LegSymbol_t_764846506"); // 1
    Leg_87_set.insert("LegSymbol_t_764846506");
    Leg_87.add_attribute("Sfx", "CD"); // 1
    Leg_87_set.insert("CD");
    Leg_87.add_attribute("ID", "LegSecurityID_t_2082312867"); // 1
    Leg_87_set.insert("LegSecurityID_t_2082312867");
    Leg_87.add_attribute("Src", "H"); // 1
    Leg_87_set.insert("H");
    Leg_87.add_attribute("Prod", "9"); // 1
    Leg_87_set.insert("9");
    Leg_87.add_attribute("CFI", "LegCFICode_t_1261203610"); // 1
    Leg_87_set.insert("LegCFICode_t_1261203610");
    Leg_87.add_attribute("SecTyp", "BUYSELL"); // 1
    Leg_87_set.insert("BUYSELL");
    Leg_87.add_attribute("SecSubTyp", "LegSecuritySubType_t_2064034538"); // 1
    Leg_87_set.insert("LegSecuritySubType_t_2064034538");
    Leg_87.add_attribute("MMY", "820552062"); // 1
    Leg_87_set.insert("820552062");
    Leg_87.add_attribute("Mat", "LegMaturityDate_t_1458136329"); // 1
    Leg_87_set.insert("LegMaturityDate_t_1458136329");
    Leg_87.add_attribute("MatTm", "1289038114"); // 1
    Leg_87_set.insert("1289038114");
    Leg_87.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1027761978"); // 1
    Leg_87_set.insert("LegCouponPaymentDate_t_1027761978");
    Leg_87.add_attribute("Issued", "LegIssueDate_t_2006860861"); // 1
    Leg_87_set.insert("LegIssueDate_t_2006860861");
    Leg_87.add_attribute("RepoCollSecTyp", "1484101723"); // 1
    Leg_87_set.insert("1484101723");
    Leg_87.add_attribute("RepoTrm", "6913935"); // 1
    Leg_87_set.insert("6913935");
    Leg_87.add_attribute("RepoRt", "6497490.190000"); // 1
    Leg_87_set.insert("6497490.190000");
    Leg_87.add_attribute("Fctr", "16117540.290000"); // 1
    Leg_87_set.insert("16117540.290000");
    Leg_87.add_attribute("CrdRtg", "LegCreditRating_t_1959069152"); // 1
    Leg_87_set.insert("LegCreditRating_t_1959069152");
    Leg_87.add_attribute("Rgstry", "LegInstrRegistry_t_1154503533"); // 1
    Leg_87_set.insert("LegInstrRegistry_t_1154503533");
    Leg_87.add_attribute("Ctry", "2109465704"); // 1
    Leg_87_set.insert("2109465704");
    Leg_87.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2001171981"); // 1
    Leg_87_set.insert("LegStateOrProvinceOfIssue_t_2001171981");
    Leg_87.add_attribute("Lcl", "LegLocaleOfIssue_t_247069800"); // 1
    Leg_87_set.insert("LegLocaleOfIssue_t_247069800");
    Leg_87.add_attribute("Redeem", "LegRedemptionDate_t_646055463"); // 1
    Leg_87_set.insert("LegRedemptionDate_t_646055463");
    Leg_87.add_attribute("Strk", "1951887.460000"); // 1
    Leg_87_set.insert("1951887.460000");
    Leg_87.add_attribute("StrkCcy", "CAN"); // 1
    Leg_87_set.insert("CAN");
    Leg_87.add_attribute("OptA", "406145894"); // 1
    Leg_87_set.insert("406145894");
    Leg_87.add_attribute("Cmult", "16159146.160000"); // 1
    Leg_87_set.insert("16159146.160000");
    Leg_87.add_attribute("MultTyp", "1"); // 1
    Leg_87_set.insert("1");
    Leg_87.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_87_set.insert("3");
    Leg_87.add_attribute("UOM", "Alw"); // 1
    Leg_87_set.insert("Alw");
    Leg_87.add_attribute("UOMQty", "7580740.170000"); // 1
    Leg_87_set.insert("7580740.170000");
    Leg_87.add_attribute("PxUOM", "lbs"); // 1
    Leg_87_set.insert("lbs");
    Leg_87.add_attribute("PxUOMQty", "17839456.300000"); // 1
    Leg_87_set.insert("17839456.300000");
    Leg_87.add_attribute("TmUnit", "S"); // 1
    Leg_87_set.insert("S");
    Leg_87.add_attribute("ExerStyle", "0"); // 1
    Leg_87_set.insert("0");
    Leg_87.add_attribute("CpnRt", "8976655.920000"); // 1
    Leg_87_set.insert("8976655.920000");
    Leg_87.add_attribute("Exch", "LegSecurityExchange_t_1154498839"); // 1
    Leg_87_set.insert("LegSecurityExchange_t_1154498839");
    Leg_87.add_attribute("Issr", "LegIssuer_t_1213273104"); // 1
    Leg_87_set.insert("LegIssuer_t_1213273104");
    Leg_87.add_attribute("EncLegIssrLen", "1718217655"); // 1
    Leg_87_set.insert("1718217655");
    Leg_87.add_attribute("EncLegIssr", "EncodedLegIssuer_t_465151520"); // 1
    Leg_87_set.insert("EncodedLegIssuer_t_465151520");
    Leg_87.add_attribute("Desc", "LegSecurityDesc_t_354827570"); // 1
    Leg_87_set.insert("LegSecurityDesc_t_354827570");
    Leg_87.add_attribute("EncLegSecDescLen", "598495985"); // 1
    Leg_87_set.insert("598495985");
    Leg_87.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_324528734"); // 1
    Leg_87_set.insert("EncodedLegSecurityDesc_t_324528734");
    Leg_87.add_attribute("RatioQty", "18389292.930000"); // 1
    Leg_87_set.insert("18389292.930000");
    Leg_87.add_attribute("Side", "1"); // 1
    Leg_87_set.insert("1");
    Leg_87.add_attribute("Ccy", "JPY"); // 1
    Leg_87_set.insert("JPY");
    Leg_87.add_attribute("Pool", "LegPool_t_416995424"); // 1
    Leg_87_set.insert("LegPool_t_416995424");
    Leg_87.add_attribute("Dated", "LegDatedDate_t_2128781286"); // 1
    Leg_87_set.insert("LegDatedDate_t_2128781286");
    Leg_87.add_attribute("CSetMo", "1265181731"); // 1
    Leg_87_set.insert("1265181731");
    Leg_87.add_attribute("IntAcrl", "LegInterestAccrualDate_t_270683758"); // 1
    Leg_87_set.insert("LegInterestAccrualDate_t_270683758");
    Leg_87.add_attribute("PutCall", "228367438"); // 1
    Leg_87_set.insert("228367438");
    Leg_87.add_attribute("LegOptionRatio", "19112371.940000"); // 1
    Leg_87_set.insert("19112371.940000");
    Leg_87.add_attribute("Px", "4658725.040000"); // 1
    Leg_87_set.insert("4658725.040000");
    all_values.push_back(Leg_87_set);
    all_compo_names.insert("Leg_87_set");

    {
      xml_element LegAID_82{"LegAID"};
      multiset<string> LegAID_82_set;
      LegAID_82.add_attribute("SecAltID", "LegSecurityAltID_t_185447699"); // 2
      LegAID_82_set.insert("LegSecurityAltID_t_185447699");
      LegAID_82.add_attribute("SecAltIDSrc", "2"); // 2
      LegAID_82_set.insert("2");
      all_values.push_back(LegAID_82_set);
      all_compo_names.insert("LegAID_82_set");

      Leg_87.add_element(LegAID_82);
    }
    elt.add_element(Leg_87);
  } // end Leg
  { // Leg
    xml_element Leg_88{"Leg"};
    multiset<string> Leg_88_set;
    Leg_88.add_attribute("Sym", "LegSymbol_t_872018399"); // 1
    Leg_88_set.insert("LegSymbol_t_872018399");
    Leg_88.add_attribute("Sfx", "CD"); // 1
    Leg_88_set.insert("CD");
    Leg_88.add_attribute("ID", "LegSecurityID_t_1664826628"); // 1
    Leg_88_set.insert("LegSecurityID_t_1664826628");
    Leg_88.add_attribute("Src", "A"); // 1
    Leg_88_set.insert("A");
    Leg_88.add_attribute("Prod", "10"); // 1
    Leg_88_set.insert("10");
    Leg_88.add_attribute("CFI", "LegCFICode_t_275416998"); // 1
    Leg_88_set.insert("LegCFICode_t_275416998");
    Leg_88.add_attribute("SecTyp", "TRAN"); // 1
    Leg_88_set.insert("TRAN");
    Leg_88.add_attribute("SecSubTyp", "LegSecuritySubType_t_1139457061"); // 1
    Leg_88_set.insert("LegSecuritySubType_t_1139457061");
    Leg_88.add_attribute("MMY", "42576731"); // 1
    Leg_88_set.insert("42576731");
    Leg_88.add_attribute("Mat", "LegMaturityDate_t_1432895125"); // 1
    Leg_88_set.insert("LegMaturityDate_t_1432895125");
    Leg_88.add_attribute("MatTm", "2037122654"); // 1
    Leg_88_set.insert("2037122654");
    Leg_88.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1197075571"); // 1
    Leg_88_set.insert("LegCouponPaymentDate_t_1197075571");
    Leg_88.add_attribute("Issued", "LegIssueDate_t_498684581"); // 1
    Leg_88_set.insert("LegIssueDate_t_498684581");
    Leg_88.add_attribute("RepoCollSecTyp", "1607856661"); // 1
    Leg_88_set.insert("1607856661");
    Leg_88.add_attribute("RepoTrm", "1662227091"); // 1
    Leg_88_set.insert("1662227091");
    Leg_88.add_attribute("RepoRt", "8535121.510000"); // 1
    Leg_88_set.insert("8535121.510000");
    Leg_88.add_attribute("Fctr", "588689.980000"); // 1
    Leg_88_set.insert("588689.980000");
    Leg_88.add_attribute("CrdRtg", "LegCreditRating_t_1986755825"); // 1
    Leg_88_set.insert("LegCreditRating_t_1986755825");
    Leg_88.add_attribute("Rgstry", "LegInstrRegistry_t_544957797"); // 1
    Leg_88_set.insert("LegInstrRegistry_t_544957797");
    Leg_88.add_attribute("Ctry", "664278919"); // 1
    Leg_88_set.insert("664278919");
    Leg_88.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_813549930"); // 1
    Leg_88_set.insert("LegStateOrProvinceOfIssue_t_813549930");
    Leg_88.add_attribute("Lcl", "LegLocaleOfIssue_t_1848157471"); // 1
    Leg_88_set.insert("LegLocaleOfIssue_t_1848157471");
    Leg_88.add_attribute("Redeem", "LegRedemptionDate_t_1081274343"); // 1
    Leg_88_set.insert("LegRedemptionDate_t_1081274343");
    Leg_88.add_attribute("Strk", "7948475.690000"); // 1
    Leg_88_set.insert("7948475.690000");
    Leg_88.add_attribute("StrkCcy", "EUR"); // 1
    Leg_88_set.insert("EUR");
    Leg_88.add_attribute("OptA", "1023215007"); // 1
    Leg_88_set.insert("1023215007");
    Leg_88.add_attribute("Cmult", "7296091.010000"); // 1
    Leg_88_set.insert("7296091.010000");
    Leg_88.add_attribute("MultTyp", "1"); // 1
    Leg_88_set.insert("1");
    Leg_88.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_88_set.insert("2");
    Leg_88.add_attribute("UOM", "oz_tr"); // 1
    Leg_88_set.insert("oz_tr");
    Leg_88.add_attribute("UOMQty", "5423653.570000"); // 1
    Leg_88_set.insert("5423653.570000");
    Leg_88.add_attribute("PxUOM", "lbs"); // 1
    Leg_88_set.insert("lbs");
    Leg_88.add_attribute("PxUOMQty", "19185511.990000"); // 1
    Leg_88_set.insert("19185511.990000");
    Leg_88.add_attribute("TmUnit", "Min"); // 1
    Leg_88_set.insert("Min");
    Leg_88.add_attribute("ExerStyle", "2"); // 1
    Leg_88_set.insert("2");
    Leg_88.add_attribute("CpnRt", "464845.490000"); // 1
    Leg_88_set.insert("464845.490000");
    Leg_88.add_attribute("Exch", "LegSecurityExchange_t_1108693937"); // 1
    Leg_88_set.insert("LegSecurityExchange_t_1108693937");
    Leg_88.add_attribute("Issr", "LegIssuer_t_1357509867"); // 1
    Leg_88_set.insert("LegIssuer_t_1357509867");
    Leg_88.add_attribute("EncLegIssrLen", "89061280"); // 1
    Leg_88_set.insert("89061280");
    Leg_88.add_attribute("EncLegIssr", "EncodedLegIssuer_t_394105414"); // 1
    Leg_88_set.insert("EncodedLegIssuer_t_394105414");
    Leg_88.add_attribute("Desc", "LegSecurityDesc_t_1247148873"); // 1
    Leg_88_set.insert("LegSecurityDesc_t_1247148873");
    Leg_88.add_attribute("EncLegSecDescLen", "1286136851"); // 1
    Leg_88_set.insert("1286136851");
    Leg_88.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_892789995"); // 1
    Leg_88_set.insert("EncodedLegSecurityDesc_t_892789995");
    Leg_88.add_attribute("RatioQty", "7075218.860000"); // 1
    Leg_88_set.insert("7075218.860000");
    Leg_88.add_attribute("Side", "8"); // 1
    Leg_88_set.insert("8");
    Leg_88.add_attribute("Ccy", "EUR"); // 1
    Leg_88_set.insert("EUR");
    Leg_88.add_attribute("Pool", "LegPool_t_640152472"); // 1
    Leg_88_set.insert("LegPool_t_640152472");
    Leg_88.add_attribute("Dated", "LegDatedDate_t_143776295"); // 1
    Leg_88_set.insert("LegDatedDate_t_143776295");
    Leg_88.add_attribute("CSetMo", "1430669804"); // 1
    Leg_88_set.insert("1430669804");
    Leg_88.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1453702403"); // 1
    Leg_88_set.insert("LegInterestAccrualDate_t_1453702403");
    Leg_88.add_attribute("PutCall", "1991933767"); // 1
    Leg_88_set.insert("1991933767");
    Leg_88.add_attribute("LegOptionRatio", "3644604.990000"); // 1
    Leg_88_set.insert("3644604.990000");
    Leg_88.add_attribute("Px", "1010663.240000"); // 1
    Leg_88_set.insert("1010663.240000");
    all_values.push_back(Leg_88_set);
    all_compo_names.insert("Leg_88_set");

    {
      xml_element LegAID_83{"LegAID"};
      multiset<string> LegAID_83_set;
      LegAID_83.add_attribute("SecAltID", "LegSecurityAltID_t_810305673"); // 2
      LegAID_83_set.insert("LegSecurityAltID_t_810305673");
      LegAID_83.add_attribute("SecAltIDSrc", "8"); // 2
      LegAID_83_set.insert("8");
      all_values.push_back(LegAID_83_set);
      all_compo_names.insert("LegAID_83_set");

      Leg_88.add_element(LegAID_83);
    }
    elt.add_element(Leg_88);
  } // end Leg
  { // Undly
    xml_element Undly_97{"Undly"};
    multiset<string> Undly_97_set;
    Undly_97.add_attribute("Sym", "UnderlyingSymbol_t_1539914774"); // 1
    Undly_97_set.insert("UnderlyingSymbol_t_1539914774");
    Undly_97.add_attribute("Sfx", "WI"); // 1
    Undly_97_set.insert("WI");
    Undly_97.add_attribute("ID", "UnderlyingSecurityID_t_185460390"); // 1
    Undly_97_set.insert("UnderlyingSecurityID_t_185460390");
    Undly_97.add_attribute("Src", "4"); // 1
    Undly_97_set.insert("4");
    Undly_97.add_attribute("Prod", "8"); // 1
    Undly_97_set.insert("8");
    Undly_97.add_attribute("CFI", "UnderlyingCFICode_t_1048001765"); // 1
    Undly_97_set.insert("UnderlyingCFICode_t_1048001765");
    Undly_97.add_attribute("SecTyp", "SLQN"); // 1
    Undly_97_set.insert("SLQN");
    Undly_97.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_754168294"); // 1
    Undly_97_set.insert("UnderlyingSecuritySubType_t_754168294");
    Undly_97.add_attribute("MMY", "1266054571"); // 1
    Undly_97_set.insert("1266054571");
    Undly_97.add_attribute("Mat", "UnderlyingMaturityDate_t_1611191445"); // 1
    Undly_97_set.insert("UnderlyingMaturityDate_t_1611191445");
    Undly_97.add_attribute("MatTm", "1862862231"); // 1
    Undly_97_set.insert("1862862231");
    Undly_97.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_476080791"); // 1
    Undly_97_set.insert("UnderlyingCouponPaymentDate_t_476080791");
    Undly_97.add_attribute("RestrctTyp", "MR"); // 1
    Undly_97_set.insert("MR");
    Undly_97.add_attribute("Snrty", "SB"); // 1
    Undly_97_set.insert("SB");
    Undly_97.add_attribute("NotlPctOut", "17232296.640000"); // 1
    Undly_97_set.insert("17232296.640000");
    Undly_97.add_attribute("OrigNotlPctOut", "8389059.290000"); // 1
    Undly_97_set.insert("8389059.290000");
    Undly_97.add_attribute("AttchPnt", "10022739.920000"); // 1
    Undly_97_set.insert("10022739.920000");
    Undly_97.add_attribute("DetchPnt", "2832679.030000"); // 1
    Undly_97_set.insert("2832679.030000");
    Undly_97.add_attribute("Issued", "UnderlyingIssueDate_t_1639786224"); // 1
    Undly_97_set.insert("UnderlyingIssueDate_t_1639786224");
    Undly_97.add_attribute("RepoCollSecTyp", "601092490"); // 1
    Undly_97_set.insert("601092490");
    Undly_97.add_attribute("RepoTrm", "1049658788"); // 1
    Undly_97_set.insert("1049658788");
    Undly_97.add_attribute("RepoRt", "1324550.480000"); // 1
    Undly_97_set.insert("1324550.480000");
    Undly_97.add_attribute("Fctr", "7448687.860000"); // 1
    Undly_97_set.insert("7448687.860000");
    Undly_97.add_attribute("CrdRtg", "UnderlyingCreditRating_t_332844944"); // 1
    Undly_97_set.insert("UnderlyingCreditRating_t_332844944");
    Undly_97.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1586157451"); // 1
    Undly_97_set.insert("UnderlyingInstrRegistry_t_1586157451");
    Undly_97.add_attribute("Ctry", "589318905"); // 1
    Undly_97_set.insert("589318905");
    Undly_97.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_697305443"); // 1
    Undly_97_set.insert("UnderlyingStateOrProvinceOfIssue_t_697305443");
    Undly_97.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1687223775"); // 1
    Undly_97_set.insert("UnderlyingLocaleOfIssue_t_1687223775");
    Undly_97.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1399624578"); // 1
    Undly_97_set.insert("UnderlyingRedemptionDate_t_1399624578");
    Undly_97.add_attribute("StrkPx", "2662403.960000"); // 1
    Undly_97_set.insert("2662403.960000");
    Undly_97.add_attribute("StrkCcy", "EUR"); // 1
    Undly_97_set.insert("EUR");
    Undly_97.add_attribute("OptA", "1653005955"); // 1
    Undly_97_set.insert("1653005955");
    Undly_97.add_attribute("Mult", "8494818.490000"); // 1
    Undly_97_set.insert("8494818.490000");
    Undly_97.add_attribute("MultTyp", "1"); // 1
    Undly_97_set.insert("1");
    Undly_97.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_97_set.insert("3");
    Undly_97.add_attribute("UOM", "MMBtu"); // 1
    Undly_97_set.insert("MMBtu");
    Undly_97.add_attribute("UOMQty", "20029182.980000"); // 1
    Undly_97_set.insert("20029182.980000");
    Undly_97.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_97_set.insert("MMBtu");
    Undly_97.add_attribute("PxUOMQty", "10160545.380000"); // 1
    Undly_97_set.insert("10160545.380000");
    Undly_97.add_attribute("TmUnit", "Wk"); // 1
    Undly_97_set.insert("Wk");
    Undly_97.add_attribute("ExerStyle", "2"); // 1
    Undly_97_set.insert("2");
    Undly_97.add_attribute("CpnRt", "14921353.290000"); // 1
    Undly_97_set.insert("14921353.290000");
    Undly_97.add_attribute("Exch", "UnderlyingSecurityExchange_t_1019395172"); // 1
    Undly_97_set.insert("UnderlyingSecurityExchange_t_1019395172");
    Undly_97.add_attribute("Issr", "UnderlyingIssuer_t_2013684097"); // 1
    Undly_97_set.insert("UnderlyingIssuer_t_2013684097");
    Undly_97.add_attribute("EncUndIssrLen", "1067881346"); // 1
    Undly_97_set.insert("1067881346");
    Undly_97.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1858301101"); // 1
    Undly_97_set.insert("EncodedUnderlyingIssuer_t_1858301101");
    Undly_97.add_attribute("Desc", "UnderlyingSecurityDesc_t_868474441"); // 1
    Undly_97_set.insert("UnderlyingSecurityDesc_t_868474441");
    Undly_97.add_attribute("EncUndSecDescLen", "1351149249"); // 1
    Undly_97_set.insert("1351149249");
    Undly_97.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1350603677"); // 1
    Undly_97_set.insert("EncodedUnderlyingSecurityDesc_t_1350603677");
    Undly_97.add_attribute("CPPgm", "UnderlyingCPProgram_t_1469566932"); // 1
    Undly_97_set.insert("UnderlyingCPProgram_t_1469566932");
    Undly_97.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_253324389"); // 1
    Undly_97_set.insert("UnderlyingCPRegType_t_253324389");
    Undly_97.add_attribute("AllocPct", "14830587.260000"); // 1
    Undly_97_set.insert("14830587.260000");
    Undly_97.add_attribute("Ccy", "CAN"); // 1
    Undly_97_set.insert("CAN");
    Undly_97.add_attribute("Qty", "9217325.290000"); // 1
    Undly_97_set.insert("9217325.290000");
    Undly_97.add_attribute("SettlTyp", "5"); // 1
    Undly_97_set.insert("5");
    Undly_97.add_attribute("CashAmt", "UnderlyingCashAmount_t_1283474776"); // 1
    Undly_97_set.insert("UnderlyingCashAmount_t_1283474776");
    Undly_97.add_attribute("CashTyp", "DIFF"); // 1
    Undly_97_set.insert("DIFF");
    Undly_97.add_attribute("Px", "20558955.530000"); // 1
    Undly_97_set.insert("20558955.530000");
    Undly_97.add_attribute("DirtPx", "15497151.730000"); // 1
    Undly_97_set.insert("15497151.730000");
    Undly_97.add_attribute("EndPx", "11254941.160000"); // 1
    Undly_97_set.insert("11254941.160000");
    Undly_97.add_attribute("StartVal", "UnderlyingStartValue_t_700467610"); // 1
    Undly_97_set.insert("UnderlyingStartValue_t_700467610");
    Undly_97.add_attribute("CurVal", "UnderlyingCurrentValue_t_1055237480"); // 1
    Undly_97_set.insert("UnderlyingCurrentValue_t_1055237480");
    Undly_97.add_attribute("EndVal", "UnderlyingEndValue_t_1974975965"); // 1
    Undly_97_set.insert("UnderlyingEndValue_t_1974975965");
    Undly_97.add_attribute("AdjQty", "11386790.120000"); // 1
    Undly_97_set.insert("11386790.120000");
    Undly_97.add_attribute("FxRate", "3424070.560000"); // 1
    Undly_97_set.insert("3424070.560000");
    Undly_97.add_attribute("FxRateCalc", "M"); // 1
    Undly_97_set.insert("M");
    Undly_97.add_attribute("CapValu", "UnderlyingCapValue_t_994113662"); // 1
    Undly_97_set.insert("UnderlyingCapValue_t_994113662");
    Undly_97.add_attribute("SetMeth", "UnderlyingSettlMethod_t_383744925"); // 1
    Undly_97_set.insert("UnderlyingSettlMethod_t_383744925");
    Undly_97.add_attribute("PutCall", "593546823"); // 1
    Undly_97_set.insert("593546823");
    all_values.push_back(Undly_97_set);
    all_compo_names.insert("Undly_97_set");

    {
      xml_element UndAID_97{"UndAID"};
      multiset<string> UndAID_97_set;
      UndAID_97.add_attribute("AltID", "UnderlyingSecurityAltID_t_313256109"); // 2
      UndAID_97_set.insert("UnderlyingSecurityAltID_t_313256109");
      UndAID_97.add_attribute("AltIDSrc", "3"); // 2
      UndAID_97_set.insert("3");
      all_values.push_back(UndAID_97_set);
      all_compo_names.insert("UndAID_97_set");

      Undly_97.add_element(UndAID_97);
    }
    {
      xml_element Stip_153{"Stip"};
      multiset<string> Stip_153_set;
      Stip_153.add_attribute("Typ", "LEAVEQTY"); // 2
      Stip_153_set.insert("LEAVEQTY");
      Stip_153.add_attribute("Val", "UnderlyingStipValue_t_1332651282"); // 2
      Stip_153_set.insert("UnderlyingStipValue_t_1332651282");
      all_values.push_back(Stip_153_set);
      all_compo_names.insert("Stip_153_set");

      Undly_97.add_element(Stip_153);
    }
    {
      xml_element Pty_392{"Pty"};
      multiset<string> Pty_392_set;
      Pty_392.add_attribute("ID", "UnderlyingInstrumentPartyID_t_6661827"); // 2
      Pty_392_set.insert("UnderlyingInstrumentPartyID_t_6661827");
      Pty_392.add_attribute("Src", "1"); // 2
      Pty_392_set.insert("1");
      Pty_392.add_attribute("R", "73"); // 2
      Pty_392_set.insert("73");
      all_values.push_back(Pty_392_set);
      all_compo_names.insert("Pty_392_set");

      {
        xml_element Sub_392{"Sub"};
        multiset<string> Sub_392_set;
        Sub_392.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_875136269"); // 3
        Sub_392_set.insert("UnderlyingInstrumentPartySubID_t_875136269");
        Sub_392.add_attribute("Typ", "9"); // 3
        Sub_392_set.insert("9");
        all_values.push_back(Sub_392_set);
        all_compo_names.insert("Sub_392_set");

        Pty_392.add_element(Sub_392);
      }
      Undly_97.add_element(Pty_392);
    }
    elt.add_element(Undly_97);
  } // end Undly
  { // Undly
    xml_element Undly_98{"Undly"};
    multiset<string> Undly_98_set;
    Undly_98.add_attribute("Sym", "UnderlyingSymbol_t_246588765"); // 1
    Undly_98_set.insert("UnderlyingSymbol_t_246588765");
    Undly_98.add_attribute("Sfx", "WI"); // 1
    Undly_98_set.insert("WI");
    Undly_98.add_attribute("ID", "UnderlyingSecurityID_t_463069840"); // 1
    Undly_98_set.insert("UnderlyingSecurityID_t_463069840");
    Undly_98.add_attribute("Src", "C"); // 1
    Undly_98_set.insert("C");
    Undly_98.add_attribute("Prod", "10"); // 1
    Undly_98_set.insert("10");
    Undly_98.add_attribute("CFI", "UnderlyingCFICode_t_1049239173"); // 1
    Undly_98_set.insert("UnderlyingCFICode_t_1049239173");
    Undly_98.add_attribute("SecTyp", "EUSUPRA"); // 1
    Undly_98_set.insert("EUSUPRA");
    Undly_98.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_920442598"); // 1
    Undly_98_set.insert("UnderlyingSecuritySubType_t_920442598");
    Undly_98.add_attribute("MMY", "185230302"); // 1
    Undly_98_set.insert("185230302");
    Undly_98.add_attribute("Mat", "UnderlyingMaturityDate_t_965369029"); // 1
    Undly_98_set.insert("UnderlyingMaturityDate_t_965369029");
    Undly_98.add_attribute("MatTm", "828854503"); // 1
    Undly_98_set.insert("828854503");
    Undly_98.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1734945475"); // 1
    Undly_98_set.insert("UnderlyingCouponPaymentDate_t_1734945475");
    Undly_98.add_attribute("RestrctTyp", "MR"); // 1
    Undly_98_set.insert("MR");
    Undly_98.add_attribute("Snrty", "SD"); // 1
    Undly_98_set.insert("SD");
    Undly_98.add_attribute("NotlPctOut", "6426993.070000"); // 1
    Undly_98_set.insert("6426993.070000");
    Undly_98.add_attribute("OrigNotlPctOut", "19183554.630000"); // 1
    Undly_98_set.insert("19183554.630000");
    Undly_98.add_attribute("AttchPnt", "5205174.780000"); // 1
    Undly_98_set.insert("5205174.780000");
    Undly_98.add_attribute("DetchPnt", "9851063.630000"); // 1
    Undly_98_set.insert("9851063.630000");
    Undly_98.add_attribute("Issued", "UnderlyingIssueDate_t_1495847747"); // 1
    Undly_98_set.insert("UnderlyingIssueDate_t_1495847747");
    Undly_98.add_attribute("RepoCollSecTyp", "1514631141"); // 1
    Undly_98_set.insert("1514631141");
    Undly_98.add_attribute("RepoTrm", "1368851289"); // 1
    Undly_98_set.insert("1368851289");
    Undly_98.add_attribute("RepoRt", "20893945.700000"); // 1
    Undly_98_set.insert("20893945.700000");
    Undly_98.add_attribute("Fctr", "18278872.500000"); // 1
    Undly_98_set.insert("18278872.500000");
    Undly_98.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1509312667"); // 1
    Undly_98_set.insert("UnderlyingCreditRating_t_1509312667");
    Undly_98.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2027593075"); // 1
    Undly_98_set.insert("UnderlyingInstrRegistry_t_2027593075");
    Undly_98.add_attribute("Ctry", "1013054884"); // 1
    Undly_98_set.insert("1013054884");
    Undly_98.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1515974494"); // 1
    Undly_98_set.insert("UnderlyingStateOrProvinceOfIssue_t_1515974494");
    Undly_98.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_886189277"); // 1
    Undly_98_set.insert("UnderlyingLocaleOfIssue_t_886189277");
    Undly_98.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2056523620"); // 1
    Undly_98_set.insert("UnderlyingRedemptionDate_t_2056523620");
    Undly_98.add_attribute("StrkPx", "2436271.150000"); // 1
    Undly_98_set.insert("2436271.150000");
    Undly_98.add_attribute("StrkCcy", "CAN"); // 1
    Undly_98_set.insert("CAN");
    Undly_98.add_attribute("OptA", "440846668"); // 1
    Undly_98_set.insert("440846668");
    Undly_98.add_attribute("Mult", "15590045.690000"); // 1
    Undly_98_set.insert("15590045.690000");
    Undly_98.add_attribute("MultTyp", "1"); // 1
    Undly_98_set.insert("1");
    Undly_98.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_98_set.insert("1");
    Undly_98.add_attribute("UOM", "Gal"); // 1
    Undly_98_set.insert("Gal");
    Undly_98.add_attribute("UOMQty", "2416889.520000"); // 1
    Undly_98_set.insert("2416889.520000");
    Undly_98.add_attribute("PxUOM", "MWh"); // 1
    Undly_98_set.insert("MWh");
    Undly_98.add_attribute("PxUOMQty", "6459903.970000"); // 1
    Undly_98_set.insert("6459903.970000");
    Undly_98.add_attribute("TmUnit", "Wk"); // 1
    Undly_98_set.insert("Wk");
    Undly_98.add_attribute("ExerStyle", "1"); // 1
    Undly_98_set.insert("1");
    Undly_98.add_attribute("CpnRt", "2334522.240000"); // 1
    Undly_98_set.insert("2334522.240000");
    Undly_98.add_attribute("Exch", "UnderlyingSecurityExchange_t_1150437479"); // 1
    Undly_98_set.insert("UnderlyingSecurityExchange_t_1150437479");
    Undly_98.add_attribute("Issr", "UnderlyingIssuer_t_1836153859"); // 1
    Undly_98_set.insert("UnderlyingIssuer_t_1836153859");
    Undly_98.add_attribute("EncUndIssrLen", "876151531"); // 1
    Undly_98_set.insert("876151531");
    Undly_98.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_921309294"); // 1
    Undly_98_set.insert("EncodedUnderlyingIssuer_t_921309294");
    Undly_98.add_attribute("Desc", "UnderlyingSecurityDesc_t_209187689"); // 1
    Undly_98_set.insert("UnderlyingSecurityDesc_t_209187689");
    Undly_98.add_attribute("EncUndSecDescLen", "1861257895"); // 1
    Undly_98_set.insert("1861257895");
    Undly_98.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_269673394"); // 1
    Undly_98_set.insert("EncodedUnderlyingSecurityDesc_t_269673394");
    Undly_98.add_attribute("CPPgm", "UnderlyingCPProgram_t_1723818830"); // 1
    Undly_98_set.insert("UnderlyingCPProgram_t_1723818830");
    Undly_98.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1082625536"); // 1
    Undly_98_set.insert("UnderlyingCPRegType_t_1082625536");
    Undly_98.add_attribute("AllocPct", "2115843.160000"); // 1
    Undly_98_set.insert("2115843.160000");
    Undly_98.add_attribute("Ccy", "EUR"); // 1
    Undly_98_set.insert("EUR");
    Undly_98.add_attribute("Qty", "916937.430000"); // 1
    Undly_98_set.insert("916937.430000");
    Undly_98.add_attribute("SettlTyp", "2"); // 1
    Undly_98_set.insert("2");
    Undly_98.add_attribute("CashAmt", "UnderlyingCashAmount_t_1960429049"); // 1
    Undly_98_set.insert("UnderlyingCashAmount_t_1960429049");
    Undly_98.add_attribute("CashTyp", "DIFF"); // 1
    Undly_98_set.insert("DIFF");
    Undly_98.add_attribute("Px", "1788336.410000"); // 1
    Undly_98_set.insert("1788336.410000");
    Undly_98.add_attribute("DirtPx", "565725.170000"); // 1
    Undly_98_set.insert("565725.170000");
    Undly_98.add_attribute("EndPx", "20738177.500000"); // 1
    Undly_98_set.insert("20738177.500000");
    Undly_98.add_attribute("StartVal", "UnderlyingStartValue_t_334462378"); // 1
    Undly_98_set.insert("UnderlyingStartValue_t_334462378");
    Undly_98.add_attribute("CurVal", "UnderlyingCurrentValue_t_497419185"); // 1
    Undly_98_set.insert("UnderlyingCurrentValue_t_497419185");
    Undly_98.add_attribute("EndVal", "UnderlyingEndValue_t_1485338671"); // 1
    Undly_98_set.insert("UnderlyingEndValue_t_1485338671");
    Undly_98.add_attribute("AdjQty", "722549.580000"); // 1
    Undly_98_set.insert("722549.580000");
    Undly_98.add_attribute("FxRate", "12024374.770000"); // 1
    Undly_98_set.insert("12024374.770000");
    Undly_98.add_attribute("FxRateCalc", "M"); // 1
    Undly_98_set.insert("M");
    Undly_98.add_attribute("CapValu", "UnderlyingCapValue_t_313943911"); // 1
    Undly_98_set.insert("UnderlyingCapValue_t_313943911");
    Undly_98.add_attribute("SetMeth", "UnderlyingSettlMethod_t_680414718"); // 1
    Undly_98_set.insert("UnderlyingSettlMethod_t_680414718");
    Undly_98.add_attribute("PutCall", "444605515"); // 1
    Undly_98_set.insert("444605515");
    all_values.push_back(Undly_98_set);
    all_compo_names.insert("Undly_98_set");

    {
      xml_element UndAID_98{"UndAID"};
      multiset<string> UndAID_98_set;
      UndAID_98.add_attribute("AltID", "UnderlyingSecurityAltID_t_1521001893"); // 2
      UndAID_98_set.insert("UnderlyingSecurityAltID_t_1521001893");
      UndAID_98.add_attribute("AltIDSrc", "6"); // 2
      UndAID_98_set.insert("6");
      all_values.push_back(UndAID_98_set);
      all_compo_names.insert("UndAID_98_set");

      Undly_98.add_element(UndAID_98);
    }
    {
      xml_element Stip_154{"Stip"};
      multiset<string> Stip_154_set;
      Stip_154.add_attribute("Typ", "YIELD"); // 2
      Stip_154_set.insert("YIELD");
      Stip_154.add_attribute("Val", "UnderlyingStipValue_t_523955724"); // 2
      Stip_154_set.insert("UnderlyingStipValue_t_523955724");
      all_values.push_back(Stip_154_set);
      all_compo_names.insert("Stip_154_set");

      Undly_98.add_element(Stip_154);
    }
    {
      xml_element Pty_393{"Pty"};
      multiset<string> Pty_393_set;
      Pty_393.add_attribute("ID", "UnderlyingInstrumentPartyID_t_675916674"); // 2
      Pty_393_set.insert("UnderlyingInstrumentPartyID_t_675916674");
      Pty_393.add_attribute("Src", "A"); // 2
      Pty_393_set.insert("A");
      Pty_393.add_attribute("R", "81"); // 2
      Pty_393_set.insert("81");
      all_values.push_back(Pty_393_set);
      all_compo_names.insert("Pty_393_set");

      {
        xml_element Sub_393{"Sub"};
        multiset<string> Sub_393_set;
        Sub_393.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_885104364"); // 3
        Sub_393_set.insert("UnderlyingInstrumentPartySubID_t_885104364");
        Sub_393.add_attribute("Typ", "33"); // 3
        Sub_393_set.insert("33");
        all_values.push_back(Sub_393_set);
        all_compo_names.insert("Sub_393_set");

        Pty_393.add_element(Sub_393);
      }
      Undly_98.add_element(Pty_393);
    }
    elt.add_element(Undly_98);
  } // end Undly
  { // Undly
    xml_element Undly_99{"Undly"};
    multiset<string> Undly_99_set;
    Undly_99.add_attribute("Sym", "UnderlyingSymbol_t_1714938413"); // 1
    Undly_99_set.insert("UnderlyingSymbol_t_1714938413");
    Undly_99.add_attribute("Sfx", "CD"); // 1
    Undly_99_set.insert("CD");
    Undly_99.add_attribute("ID", "UnderlyingSecurityID_t_203125406"); // 1
    Undly_99_set.insert("UnderlyingSecurityID_t_203125406");
    Undly_99.add_attribute("Src", "M"); // 1
    Undly_99_set.insert("M");
    Undly_99.add_attribute("Prod", "9"); // 1
    Undly_99_set.insert("9");
    Undly_99.add_attribute("CFI", "UnderlyingCFICode_t_647579961"); // 1
    Undly_99_set.insert("UnderlyingCFICode_t_647579961");
    Undly_99.add_attribute("SecTyp", "PEF"); // 1
    Undly_99_set.insert("PEF");
    Undly_99.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2135455649"); // 1
    Undly_99_set.insert("UnderlyingSecuritySubType_t_2135455649");
    Undly_99.add_attribute("MMY", "460525362"); // 1
    Undly_99_set.insert("460525362");
    Undly_99.add_attribute("Mat", "UnderlyingMaturityDate_t_848615846"); // 1
    Undly_99_set.insert("UnderlyingMaturityDate_t_848615846");
    Undly_99.add_attribute("MatTm", "166805642"); // 1
    Undly_99_set.insert("166805642");
    Undly_99.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_517097879"); // 1
    Undly_99_set.insert("UnderlyingCouponPaymentDate_t_517097879");
    Undly_99.add_attribute("RestrctTyp", "FR"); // 1
    Undly_99_set.insert("FR");
    Undly_99.add_attribute("Snrty", "SR"); // 1
    Undly_99_set.insert("SR");
    Undly_99.add_attribute("NotlPctOut", "10145170.650000"); // 1
    Undly_99_set.insert("10145170.650000");
    Undly_99.add_attribute("OrigNotlPctOut", "1128049.710000"); // 1
    Undly_99_set.insert("1128049.710000");
    Undly_99.add_attribute("AttchPnt", "5735229.790000"); // 1
    Undly_99_set.insert("5735229.790000");
    Undly_99.add_attribute("DetchPnt", "694708.940000"); // 1
    Undly_99_set.insert("694708.940000");
    Undly_99.add_attribute("Issued", "UnderlyingIssueDate_t_2058903738"); // 1
    Undly_99_set.insert("UnderlyingIssueDate_t_2058903738");
    Undly_99.add_attribute("RepoCollSecTyp", "887466890"); // 1
    Undly_99_set.insert("887466890");
    Undly_99.add_attribute("RepoTrm", "749885612"); // 1
    Undly_99_set.insert("749885612");
    Undly_99.add_attribute("RepoRt", "3560256.050000"); // 1
    Undly_99_set.insert("3560256.050000");
    Undly_99.add_attribute("Fctr", "2609851.350000"); // 1
    Undly_99_set.insert("2609851.350000");
    Undly_99.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1737132076"); // 1
    Undly_99_set.insert("UnderlyingCreditRating_t_1737132076");
    Undly_99.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1034083345"); // 1
    Undly_99_set.insert("UnderlyingInstrRegistry_t_1034083345");
    Undly_99.add_attribute("Ctry", "784940860"); // 1
    Undly_99_set.insert("784940860");
    Undly_99.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_265565102"); // 1
    Undly_99_set.insert("UnderlyingStateOrProvinceOfIssue_t_265565102");
    Undly_99.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_440808968"); // 1
    Undly_99_set.insert("UnderlyingLocaleOfIssue_t_440808968");
    Undly_99.add_attribute("Redeem", "UnderlyingRedemptionDate_t_82722231"); // 1
    Undly_99_set.insert("UnderlyingRedemptionDate_t_82722231");
    Undly_99.add_attribute("StrkPx", "11506694.660000"); // 1
    Undly_99_set.insert("11506694.660000");
    Undly_99.add_attribute("StrkCcy", "GBP"); // 1
    Undly_99_set.insert("GBP");
    Undly_99.add_attribute("OptA", "1612109013"); // 1
    Undly_99_set.insert("1612109013");
    Undly_99.add_attribute("Mult", "19119178.920000"); // 1
    Undly_99_set.insert("19119178.920000");
    Undly_99.add_attribute("MultTyp", "0"); // 1
    Undly_99_set.insert("0");
    Undly_99.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_99_set.insert("4");
    Undly_99.add_attribute("UOM", "tn"); // 1
    Undly_99_set.insert("tn");
    Undly_99.add_attribute("UOMQty", "14474325.500000"); // 1
    Undly_99_set.insert("14474325.500000");
    Undly_99.add_attribute("PxUOM", "MWh"); // 1
    Undly_99_set.insert("MWh");
    Undly_99.add_attribute("PxUOMQty", "8725395.670000"); // 1
    Undly_99_set.insert("8725395.670000");
    Undly_99.add_attribute("TmUnit", "D"); // 1
    Undly_99_set.insert("D");
    Undly_99.add_attribute("ExerStyle", "2"); // 1
    Undly_99_set.insert("2");
    Undly_99.add_attribute("CpnRt", "13896374.470000"); // 1
    Undly_99_set.insert("13896374.470000");
    Undly_99.add_attribute("Exch", "UnderlyingSecurityExchange_t_923514696"); // 1
    Undly_99_set.insert("UnderlyingSecurityExchange_t_923514696");
    Undly_99.add_attribute("Issr", "UnderlyingIssuer_t_1986333009"); // 1
    Undly_99_set.insert("UnderlyingIssuer_t_1986333009");
    Undly_99.add_attribute("EncUndIssrLen", "256670864"); // 1
    Undly_99_set.insert("256670864");
    Undly_99.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1036319668"); // 1
    Undly_99_set.insert("EncodedUnderlyingIssuer_t_1036319668");
    Undly_99.add_attribute("Desc", "UnderlyingSecurityDesc_t_412372340"); // 1
    Undly_99_set.insert("UnderlyingSecurityDesc_t_412372340");
    Undly_99.add_attribute("EncUndSecDescLen", "326141758"); // 1
    Undly_99_set.insert("326141758");
    Undly_99.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_947739758"); // 1
    Undly_99_set.insert("EncodedUnderlyingSecurityDesc_t_947739758");
    Undly_99.add_attribute("CPPgm", "UnderlyingCPProgram_t_1299839231"); // 1
    Undly_99_set.insert("UnderlyingCPProgram_t_1299839231");
    Undly_99.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1076027370"); // 1
    Undly_99_set.insert("UnderlyingCPRegType_t_1076027370");
    Undly_99.add_attribute("AllocPct", "13037653.630000"); // 1
    Undly_99_set.insert("13037653.630000");
    Undly_99.add_attribute("Ccy", "GBP"); // 1
    Undly_99_set.insert("GBP");
    Undly_99.add_attribute("Qty", "1903650.600000"); // 1
    Undly_99_set.insert("1903650.600000");
    Undly_99.add_attribute("SettlTyp", "4"); // 1
    Undly_99_set.insert("4");
    Undly_99.add_attribute("CashAmt", "UnderlyingCashAmount_t_931240901"); // 1
    Undly_99_set.insert("UnderlyingCashAmount_t_931240901");
    Undly_99.add_attribute("CashTyp", "FIXED"); // 1
    Undly_99_set.insert("FIXED");
    Undly_99.add_attribute("Px", "2810038.090000"); // 1
    Undly_99_set.insert("2810038.090000");
    Undly_99.add_attribute("DirtPx", "20819103.670000"); // 1
    Undly_99_set.insert("20819103.670000");
    Undly_99.add_attribute("EndPx", "1924828.660000"); // 1
    Undly_99_set.insert("1924828.660000");
    Undly_99.add_attribute("StartVal", "UnderlyingStartValue_t_2078664453"); // 1
    Undly_99_set.insert("UnderlyingStartValue_t_2078664453");
    Undly_99.add_attribute("CurVal", "UnderlyingCurrentValue_t_1546535732"); // 1
    Undly_99_set.insert("UnderlyingCurrentValue_t_1546535732");
    Undly_99.add_attribute("EndVal", "UnderlyingEndValue_t_2104400758"); // 1
    Undly_99_set.insert("UnderlyingEndValue_t_2104400758");
    Undly_99.add_attribute("AdjQty", "15078805.310000"); // 1
    Undly_99_set.insert("15078805.310000");
    Undly_99.add_attribute("FxRate", "7293394.290000"); // 1
    Undly_99_set.insert("7293394.290000");
    Undly_99.add_attribute("FxRateCalc", "D"); // 1
    Undly_99_set.insert("D");
    Undly_99.add_attribute("CapValu", "UnderlyingCapValue_t_807829433"); // 1
    Undly_99_set.insert("UnderlyingCapValue_t_807829433");
    Undly_99.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2047598774"); // 1
    Undly_99_set.insert("UnderlyingSettlMethod_t_2047598774");
    Undly_99.add_attribute("PutCall", "1241470883"); // 1
    Undly_99_set.insert("1241470883");
    all_values.push_back(Undly_99_set);
    all_compo_names.insert("Undly_99_set");

    {
      xml_element UndAID_99{"UndAID"};
      multiset<string> UndAID_99_set;
      UndAID_99.add_attribute("AltID", "UnderlyingSecurityAltID_t_956394182"); // 2
      UndAID_99_set.insert("UnderlyingSecurityAltID_t_956394182");
      UndAID_99.add_attribute("AltIDSrc", "B"); // 2
      UndAID_99_set.insert("B");
      all_values.push_back(UndAID_99_set);
      all_compo_names.insert("UndAID_99_set");

      Undly_99.add_element(UndAID_99);
    }
    {
      xml_element Stip_155{"Stip"};
      multiset<string> Stip_155_set;
      Stip_155.add_attribute("Typ", "PXSOURCE"); // 2
      Stip_155_set.insert("PXSOURCE");
      Stip_155.add_attribute("Val", "UnderlyingStipValue_t_1879908878"); // 2
      Stip_155_set.insert("UnderlyingStipValue_t_1879908878");
      all_values.push_back(Stip_155_set);
      all_compo_names.insert("Stip_155_set");

      Undly_99.add_element(Stip_155);
    }
    {
      xml_element Pty_394{"Pty"};
      multiset<string> Pty_394_set;
      Pty_394.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1224029475"); // 2
      Pty_394_set.insert("UnderlyingInstrumentPartyID_t_1224029475");
      Pty_394.add_attribute("Src", "7"); // 2
      Pty_394_set.insert("7");
      Pty_394.add_attribute("R", "84"); // 2
      Pty_394_set.insert("84");
      all_values.push_back(Pty_394_set);
      all_compo_names.insert("Pty_394_set");

      {
        xml_element Sub_394{"Sub"};
        multiset<string> Sub_394_set;
        Sub_394.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1636401816"); // 3
        Sub_394_set.insert("UnderlyingInstrumentPartySubID_t_1636401816");
        Sub_394.add_attribute("Typ", "32"); // 3
        Sub_394_set.insert("32");
        all_values.push_back(Sub_394_set);
        all_compo_names.insert("Sub_394_set");

        Pty_394.add_element(Sub_394);
      }
      Undly_99.add_element(Pty_394);
    }
    elt.add_element(Undly_99);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_19{"TrdSes"};
    multiset<string> TrdSes_19_set;
    TrdSes_19.add_attribute("SesID", "4"); // 1
    TrdSes_19_set.insert("4");
    TrdSes_19.add_attribute("SesSub", "1"); // 1
    TrdSes_19_set.insert("1");
    all_values.push_back(TrdSes_19_set);
    all_compo_names.insert("TrdSes_19_set");

    elt.add_element(TrdSes_19);
  } // end TrdSes
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
