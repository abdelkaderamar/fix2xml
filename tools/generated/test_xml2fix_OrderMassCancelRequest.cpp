#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelRequest_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_266704347"); // 0
  OrderMassCancelRequest_message_t_0.insert("ClOrdID_t_266704347");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_157116172"); // 0
  OrderMassCancelRequest_message_t_0.insert("SecondaryClOrdID_t_157116172");
  elt.add_attribute("ReqTyp", "1"); // 0
  OrderMassCancelRequest_message_t_0.insert("1");
  elt.add_attribute("SesID", "4"); // 0
  OrderMassCancelRequest_message_t_0.insert("4");
  elt.add_attribute("SesSub", "5"); // 0
  OrderMassCancelRequest_message_t_0.insert("5");
  elt.add_attribute("MktID", "MarketID_t_1117979087"); // 0
  OrderMassCancelRequest_message_t_0.insert("MarketID_t_1117979087");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1688740546"); // 0
  OrderMassCancelRequest_message_t_0.insert("MarketSegmentID_t_1688740546");
  elt.add_attribute("Side", "3"); // 0
  OrderMassCancelRequest_message_t_0.insert("3");
  elt.add_attribute("TxnTm", "TransactTime_t_1813682200"); // 0
  OrderMassCancelRequest_message_t_0.insert("TransactTime_t_1813682200");
  elt.add_attribute("Txt", "Text_t_1226116583"); // 0
  OrderMassCancelRequest_message_t_0.insert("Text_t_1226116583");
  elt.add_attribute("EncTxtLen", "95316177"); // 0
  OrderMassCancelRequest_message_t_0.insert("95316177");
  elt.add_attribute("EncTxt", "EncodedText_t_1992981975"); // 0
  OrderMassCancelRequest_message_t_0.insert("EncodedText_t_1992981975");
  all_values.push_back(OrderMassCancelRequest_message_t_0);
  all_compo_names.insert("OrderMassCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_62{"Hdr"};
    multiset<string> Hdr_62_set;
    Hdr_62.add_attribute("SeqNum", "1145794233"); // 1
    Hdr_62_set.insert("1145794233");
    Hdr_62.add_attribute("SID", "SenderCompID_t_525820530"); // 1
    Hdr_62_set.insert("SenderCompID_t_525820530");
    Hdr_62.add_attribute("TID", "TargetCompID_t_2083769426"); // 1
    Hdr_62_set.insert("TargetCompID_t_2083769426");
    Hdr_62.add_attribute("OBID", "OnBehalfOfCompID_t_1406440619"); // 1
    Hdr_62_set.insert("OnBehalfOfCompID_t_1406440619");
    Hdr_62.add_attribute("D2ID", "DeliverToCompID_t_468116458"); // 1
    Hdr_62_set.insert("DeliverToCompID_t_468116458");
    Hdr_62.add_attribute("SSub", "SenderSubID_t_740524363"); // 1
    Hdr_62_set.insert("SenderSubID_t_740524363");
    Hdr_62.add_attribute("SLoc", "SenderLocationID_t_1292630698"); // 1
    Hdr_62_set.insert("SenderLocationID_t_1292630698");
    Hdr_62.add_attribute("TSub", "TargetSubID_t_1093824267"); // 1
    Hdr_62_set.insert("TargetSubID_t_1093824267");
    Hdr_62.add_attribute("TLoc", "TargetLocationID_t_756462297"); // 1
    Hdr_62_set.insert("TargetLocationID_t_756462297");
    Hdr_62.add_attribute("OBSub", "OnBehalfOfSubID_t_2147242856"); // 1
    Hdr_62_set.insert("OnBehalfOfSubID_t_2147242856");
    Hdr_62.add_attribute("OBLoc", "OnBehalfOfLocationID_t_780267183"); // 1
    Hdr_62_set.insert("OnBehalfOfLocationID_t_780267183");
    Hdr_62.add_attribute("D2Sub", "DeliverToSubID_t_395424592"); // 1
    Hdr_62_set.insert("DeliverToSubID_t_395424592");
    Hdr_62.add_attribute("D2Loc", "DeliverToLocationID_t_1590950992"); // 1
    Hdr_62_set.insert("DeliverToLocationID_t_1590950992");
    Hdr_62.add_attribute("PosDup", "Y"); // 1
    Hdr_62_set.insert("Y");
    Hdr_62.add_attribute("PosRsnd", "N"); // 1
    Hdr_62_set.insert("N");
    Hdr_62.add_attribute("Snt", "SendingTime_t_866905546"); // 1
    Hdr_62_set.insert("SendingTime_t_866905546");
    Hdr_62.add_attribute("OrigSnt", "OrigSendingTime_t_1379299429"); // 1
    Hdr_62_set.insert("OrigSendingTime_t_1379299429");
    Hdr_62.add_attribute("MsgEncd", "MessageEncoding_t_1968539076"); // 1
    Hdr_62_set.insert("MessageEncoding_t_1968539076");
    all_values.push_back(Hdr_62_set);
    all_compo_names.insert("Hdr_62_set");

    {
      xml_element Hop_62{"Hop"};
      multiset<string> Hop_62_set;
      Hop_62.add_attribute("ID", "HopCompID_t_1838175715"); // 2
      Hop_62_set.insert("HopCompID_t_1838175715");
      Hop_62.add_attribute("Ref", "1646003776"); // 2
      Hop_62_set.insert("1646003776");
      Hop_62.add_attribute("Snt", "HopSendingTime_t_2125655248"); // 2
      Hop_62_set.insert("HopSendingTime_t_2125655248");
      all_values.push_back(Hop_62_set);
      all_compo_names.insert("Hop_62_set");

      Hdr_62.add_element(Hop_62);
    }
    elt.add_element(Hdr_62);
  } // end Hdr
  { // Pty
    xml_element Pty_293{"Pty"};
    multiset<string> Pty_293_set;
    Pty_293.add_attribute("ID", "PartyID_t_781928657"); // 1
    Pty_293_set.insert("PartyID_t_781928657");
    Pty_293.add_attribute("Src", "C"); // 1
    Pty_293_set.insert("C");
    Pty_293.add_attribute("R", "12"); // 1
    Pty_293_set.insert("12");
    all_values.push_back(Pty_293_set);
    all_compo_names.insert("Pty_293_set");

    {
      xml_element Sub_293{"Sub"};
      multiset<string> Sub_293_set;
      Sub_293.add_attribute("ID", "PartySubID_t_323185555"); // 2
      Sub_293_set.insert("PartySubID_t_323185555");
      Sub_293.add_attribute("Typ", "13"); // 2
      Sub_293_set.insert("13");
      all_values.push_back(Sub_293_set);
      all_compo_names.insert("Sub_293_set");

      Pty_293.add_element(Sub_293);
    }
    elt.add_element(Pty_293);
  } // end Pty
  { // Pty
    xml_element Pty_294{"Pty"};
    multiset<string> Pty_294_set;
    Pty_294.add_attribute("ID", "PartyID_t_124591847"); // 1
    Pty_294_set.insert("PartyID_t_124591847");
    Pty_294.add_attribute("Src", "1"); // 1
    Pty_294_set.insert("1");
    Pty_294.add_attribute("R", "10"); // 1
    Pty_294_set.insert("10");
    all_values.push_back(Pty_294_set);
    all_compo_names.insert("Pty_294_set");

    {
      xml_element Sub_294{"Sub"};
      multiset<string> Sub_294_set;
      Sub_294.add_attribute("ID", "PartySubID_t_2117573822"); // 2
      Sub_294_set.insert("PartySubID_t_2117573822");
      Sub_294.add_attribute("Typ", "32"); // 2
      Sub_294_set.insert("32");
      all_values.push_back(Sub_294_set);
      all_compo_names.insert("Sub_294_set");

      Pty_294.add_element(Sub_294);
    }
    elt.add_element(Pty_294);
  } // end Pty
  { // Pty
    xml_element Pty_295{"Pty"};
    multiset<string> Pty_295_set;
    Pty_295.add_attribute("ID", "PartyID_t_1330068451"); // 1
    Pty_295_set.insert("PartyID_t_1330068451");
    Pty_295.add_attribute("Src", "3"); // 1
    Pty_295_set.insert("3");
    Pty_295.add_attribute("R", "68"); // 1
    Pty_295_set.insert("68");
    all_values.push_back(Pty_295_set);
    all_compo_names.insert("Pty_295_set");

    {
      xml_element Sub_295{"Sub"};
      multiset<string> Sub_295_set;
      Sub_295.add_attribute("ID", "PartySubID_t_1798184909"); // 2
      Sub_295_set.insert("PartySubID_t_1798184909");
      Sub_295.add_attribute("Typ", "29"); // 2
      Sub_295_set.insert("29");
      all_values.push_back(Sub_295_set);
      all_compo_names.insert("Sub_295_set");

      Pty_295.add_element(Sub_295);
    }
    elt.add_element(Pty_295);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_7{"TgtPty"};
    multiset<string> TgtPty_7_set;
    TgtPty_7.add_attribute("ID", "TargetPartyID_t_744525528"); // 1
    TgtPty_7_set.insert("TargetPartyID_t_744525528");
    TgtPty_7.add_attribute("Src", "B"); // 1
    TgtPty_7_set.insert("B");
    TgtPty_7.add_attribute("R", "6"); // 1
    TgtPty_7_set.insert("6");
    all_values.push_back(TgtPty_7_set);
    all_compo_names.insert("TgtPty_7_set");

    elt.add_element(TgtPty_7);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_52{"Instrmt"};
    multiset<string> Instrmt_52_set;
    Instrmt_52.add_attribute("Sym", "Symbol_t_1524792711"); // 1
    Instrmt_52_set.insert("Symbol_t_1524792711");
    Instrmt_52.add_attribute("Sfx", "CD"); // 1
    Instrmt_52_set.insert("CD");
    Instrmt_52.add_attribute("ID", "SecurityID_t_542426946"); // 1
    Instrmt_52_set.insert("SecurityID_t_542426946");
    Instrmt_52.add_attribute("Src", "C"); // 1
    Instrmt_52_set.insert("C");
    Instrmt_52.add_attribute("Prod", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("ProdCmplx", "ProductComplex_t_1409332492"); // 1
    Instrmt_52_set.insert("ProductComplex_t_1409332492");
    Instrmt_52.add_attribute("SecGrp", "SecurityGroup_t_556378394"); // 1
    Instrmt_52_set.insert("SecurityGroup_t_556378394");
    Instrmt_52.add_attribute("CFI", "CFICode_t_912591055"); // 1
    Instrmt_52_set.insert("CFICode_t_912591055");
    Instrmt_52.add_attribute("SecTyp", "BA"); // 1
    Instrmt_52_set.insert("BA");
    Instrmt_52.add_attribute("SubTyp", "SecuritySubType_t_54898523"); // 1
    Instrmt_52_set.insert("SecuritySubType_t_54898523");
    Instrmt_52.add_attribute("MMY", "890762655"); // 1
    Instrmt_52_set.insert("890762655");
    Instrmt_52.add_attribute("MatDt", "MaturityDate_t_440438767"); // 1
    Instrmt_52_set.insert("MaturityDate_t_440438767");
    Instrmt_52.add_attribute("MatTm", "836827180"); // 1
    Instrmt_52_set.insert("836827180");
    Instrmt_52.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_435488413"); // 1
    Instrmt_52_set.insert("SettleOnOpenFlag_t_435488413");
    Instrmt_52.add_attribute("AsgnMeth", "898832062"); // 1
    Instrmt_52_set.insert("898832062");
    Instrmt_52.add_attribute("Status", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("CpnPmt", "CouponPaymentDate_t_1144420157"); // 1
    Instrmt_52_set.insert("CouponPaymentDate_t_1144420157");
    Instrmt_52.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_52_set.insert("MR");
    Instrmt_52.add_attribute("Snrty", "SR"); // 1
    Instrmt_52_set.insert("SR");
    Instrmt_52.add_attribute("NotlPctOut", "19486680.780000"); // 1
    Instrmt_52_set.insert("19486680.780000");
    Instrmt_52.add_attribute("OrigNotlPctOut", "9935140.830000"); // 1
    Instrmt_52_set.insert("9935140.830000");
    Instrmt_52.add_attribute("AttchPnt", "11094439.500000"); // 1
    Instrmt_52_set.insert("11094439.500000");
    Instrmt_52.add_attribute("DetchPnt", "11312528.820000"); // 1
    Instrmt_52_set.insert("11312528.820000");
    Instrmt_52.add_attribute("Issued", "IssueDate_t_899890035"); // 1
    Instrmt_52_set.insert("IssueDate_t_899890035");
    Instrmt_52.add_attribute("RepoCollSecTyp", "916013644"); // 1
    Instrmt_52_set.insert("916013644");
    Instrmt_52.add_attribute("RepoTrm", "781954143"); // 1
    Instrmt_52_set.insert("781954143");
    Instrmt_52.add_attribute("RepoRt", "15467903.500000"); // 1
    Instrmt_52_set.insert("15467903.500000");
    Instrmt_52.add_attribute("Fctr", "20152140.370000"); // 1
    Instrmt_52_set.insert("20152140.370000");
    Instrmt_52.add_attribute("CrdRtg", "CreditRating_t_1526479672"); // 1
    Instrmt_52_set.insert("CreditRating_t_1526479672");
    Instrmt_52.add_attribute("Rgstry", "InstrRegistry_t_802669315"); // 1
    Instrmt_52_set.insert("InstrRegistry_t_802669315");
    Instrmt_52.add_attribute("IssuCtry", "966689991"); // 1
    Instrmt_52_set.insert("966689991");
    Instrmt_52.add_attribute("StPrv", "StateOrProvinceOfIssue_t_903788735"); // 1
    Instrmt_52_set.insert("StateOrProvinceOfIssue_t_903788735");
    Instrmt_52.add_attribute("Lcl", "LocaleOfIssue_t_453972871"); // 1
    Instrmt_52_set.insert("LocaleOfIssue_t_453972871");
    Instrmt_52.add_attribute("Redeem", "RedemptionDate_t_1509116937"); // 1
    Instrmt_52_set.insert("RedemptionDate_t_1509116937");
    Instrmt_52.add_attribute("StrkPx", "808677.000000"); // 1
    Instrmt_52_set.insert("808677.000000");
    Instrmt_52.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_52_set.insert("CAN");
    Instrmt_52.add_attribute("StrkMult", "6372460.950000"); // 1
    Instrmt_52_set.insert("6372460.950000");
    Instrmt_52.add_attribute("StrkValu", "3106159.050000"); // 1
    Instrmt_52_set.insert("3106159.050000");
    Instrmt_52.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_52_set.insert("4");
    Instrmt_52.add_attribute("StrkPxBndryPrcsn", "12013785.610000"); // 1
    Instrmt_52_set.insert("12013785.610000");
    Instrmt_52.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_52_set.insert("4");
    Instrmt_52.add_attribute("OptAt", "1528971798"); // 1
    Instrmt_52_set.insert("1528971798");
    Instrmt_52.add_attribute("Mult", "16368669.740000"); // 1
    Instrmt_52_set.insert("16368669.740000");
    Instrmt_52.add_attribute("MultTyp", "2"); // 1
    Instrmt_52_set.insert("2");
    Instrmt_52.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("MinPxIncr", "6338034.830000"); // 1
    Instrmt_52_set.insert("6338034.830000");
    Instrmt_52.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2086201430"); // 1
    Instrmt_52_set.insert("MinPriceIncrementAmount_t_2086201430");
    Instrmt_52.add_attribute("UOM", "MWh"); // 1
    Instrmt_52_set.insert("MWh");
    Instrmt_52.add_attribute("UOMQty", "4349879.130000"); // 1
    Instrmt_52_set.insert("4349879.130000");
    Instrmt_52.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_52_set.insert("MMbbl");
    Instrmt_52.add_attribute("PxUOMQty", "652924.150000"); // 1
    Instrmt_52_set.insert("652924.150000");
    Instrmt_52.add_attribute("SettlMeth", "P"); // 1
    Instrmt_52_set.insert("P");
    Instrmt_52.add_attribute("ExerStyle", "0"); // 1
    Instrmt_52_set.insert("0");
    Instrmt_52.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_52_set.insert("3");
    Instrmt_52.add_attribute("OptPayAmt", "OptPayoutAmount_t_200711291"); // 1
    Instrmt_52_set.insert("OptPayoutAmount_t_200711291");
    Instrmt_52.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_52_set.insert("PCTPAR");
    Instrmt_52.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_52_set.insert("CDSD");
    Instrmt_52.add_attribute("ListMeth", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("CapPx", "20340979.180000"); // 1
    Instrmt_52_set.insert("20340979.180000");
    Instrmt_52.add_attribute("FlrPx", "18157264.400000"); // 1
    Instrmt_52_set.insert("18157264.400000");
    Instrmt_52.add_attribute("PutCall", "0"); // 1
    Instrmt_52_set.insert("0");
    Instrmt_52.add_attribute("FlexInd", "false"); // 1
    Instrmt_52_set.insert("false");
    Instrmt_52.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_52_set.insert("false");
    Instrmt_52.add_attribute("TmUnit", "S"); // 1
    Instrmt_52_set.insert("S");
    Instrmt_52.add_attribute("CpnRt", "18860956.400000"); // 1
    Instrmt_52_set.insert("18860956.400000");
    Instrmt_52.add_attribute("Exch", "SecurityExchange_t_1948325510"); // 1
    Instrmt_52_set.insert("SecurityExchange_t_1948325510");
    Instrmt_52.add_attribute("PosLmt", "1201609846"); // 1
    Instrmt_52_set.insert("1201609846");
    Instrmt_52.add_attribute("NTPosLmt", "49227897"); // 1
    Instrmt_52_set.insert("49227897");
    Instrmt_52.add_attribute("Issr", "Issuer_t_1671832202"); // 1
    Instrmt_52_set.insert("Issuer_t_1671832202");
    Instrmt_52.add_attribute("EncIssrLen", "1893754464"); // 1
    Instrmt_52_set.insert("1893754464");
    Instrmt_52.add_attribute("EncIssr", "EncodedIssuer_t_1250606458"); // 1
    Instrmt_52_set.insert("EncodedIssuer_t_1250606458");
    Instrmt_52.add_attribute("Desc", "SecurityDesc_t_1835777662"); // 1
    Instrmt_52_set.insert("SecurityDesc_t_1835777662");
    Instrmt_52.add_attribute("EncSecDescLen", "1275242614"); // 1
    Instrmt_52_set.insert("1275242614");
    Instrmt_52.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_739989784"); // 1
    Instrmt_52_set.insert("EncodedSecurityDesc_t_739989784");
    Instrmt_52.add_attribute("Pool", "Pool_t_751071535"); // 1
    Instrmt_52_set.insert("Pool_t_751071535");
    Instrmt_52.add_attribute("CSetMo", "1816743501"); // 1
    Instrmt_52_set.insert("1816743501");
    Instrmt_52.add_attribute("CPPgm", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("CPRegT", "CPRegType_t_689789318"); // 1
    Instrmt_52_set.insert("CPRegType_t_689789318");
    Instrmt_52.add_attribute("Dated", "DatedDate_t_772591966"); // 1
    Instrmt_52_set.insert("DatedDate_t_772591966");
    Instrmt_52.add_attribute("IntAcrl", "InterestAccrualDate_t_1808781181"); // 1
    Instrmt_52_set.insert("InterestAccrualDate_t_1808781181");
    all_values.push_back(Instrmt_52_set);
    all_compo_names.insert("Instrmt_52_set");

    {
      xml_element AID_55{"AID"};
      multiset<string> AID_55_set;
      AID_55.add_attribute("AltID", "SecurityAltID_t_1622021183"); // 2
      AID_55_set.insert("SecurityAltID_t_1622021183");
      AID_55.add_attribute("AltIDSrc", "G"); // 2
      AID_55_set.insert("G");
      all_values.push_back(AID_55_set);
      all_compo_names.insert("AID_55_set");

      Instrmt_52.add_element(AID_55);
    }
    {
      xml_element SecXML_55{"SecXML"};
      multiset<string> SecXML_55_set;
      SecXML_55.add_attribute("Schema", "SecurityXMLSchema_t_1227538328"); // 2
      SecXML_55_set.insert("SecurityXMLSchema_t_1227538328");
      all_values.push_back(SecXML_55_set);
      all_compo_names.insert("SecXML_55_set");

      Instrmt_52.add_element(SecXML_55);
    }
    {
      xml_element Evnt_55{"Evnt"};
      multiset<string> Evnt_55_set;
      Evnt_55.add_attribute("EventTyp", "16"); // 2
      Evnt_55_set.insert("16");
      Evnt_55.add_attribute("Dt", "EventDate_t_1819190440"); // 2
      Evnt_55_set.insert("EventDate_t_1819190440");
      Evnt_55.add_attribute("Tm", "EventTime_t_1428249619"); // 2
      Evnt_55_set.insert("EventTime_t_1428249619");
      Evnt_55.add_attribute("Px", "3906043.910000"); // 2
      Evnt_55_set.insert("3906043.910000");
      Evnt_55.add_attribute("Txt", "EventText_t_520743241"); // 2
      Evnt_55_set.insert("EventText_t_520743241");
      all_values.push_back(Evnt_55_set);
      all_compo_names.insert("Evnt_55_set");

      Instrmt_52.add_element(Evnt_55);
    }
    {
      xml_element Pty_296{"Pty"};
      multiset<string> Pty_296_set;
      Pty_296.add_attribute("ID", "InstrumentPartyID_t_1007956934"); // 2
      Pty_296_set.insert("InstrumentPartyID_t_1007956934");
      Pty_296.add_attribute("Src", "E"); // 2
      Pty_296_set.insert("E");
      Pty_296.add_attribute("R", "63"); // 2
      Pty_296_set.insert("63");
      all_values.push_back(Pty_296_set);
      all_compo_names.insert("Pty_296_set");

      {
        xml_element Sub_296{"Sub"};
        multiset<string> Sub_296_set;
        Sub_296.add_attribute("ID", "InstrumentPartySubID_t_1491452985"); // 3
        Sub_296_set.insert("InstrumentPartySubID_t_1491452985");
        Sub_296.add_attribute("Typ", "32"); // 3
        Sub_296_set.insert("32");
        all_values.push_back(Sub_296_set);
        all_compo_names.insert("Sub_296_set");

        Pty_296.add_element(Sub_296);
      }
      Instrmt_52.add_element(Pty_296);
    }
    {
      xml_element CmplxEvnt_52{"CmplxEvnt"};
      multiset<string> CmplxEvnt_52_set;
      CmplxEvnt_52.add_attribute("Typ", "8"); // 2
      CmplxEvnt_52_set.insert("8");
      CmplxEvnt_52.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2055816736"); // 2
      CmplxEvnt_52_set.insert("ComplexOptPayoutAmount_t_2055816736");
      CmplxEvnt_52.add_attribute("Px", "3564177.940000"); // 2
      CmplxEvnt_52_set.insert("3564177.940000");
      CmplxEvnt_52.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_52_set.insert("5");
      CmplxEvnt_52.add_attribute("PxBndryPrcsn", "11099429.340000"); // 2
      CmplxEvnt_52_set.insert("11099429.340000");
      CmplxEvnt_52.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_52_set.insert("3");
      CmplxEvnt_52.add_attribute("Cond", "2"); // 2
      CmplxEvnt_52_set.insert("2");
      all_values.push_back(CmplxEvnt_52_set);
      all_compo_names.insert("CmplxEvnt_52_set");

      {
        xml_element EvntDts_52{"EvntDts"};
        multiset<string> EvntDts_52_set;
        EvntDts_52.add_attribute("StartDt", "ComplexEventStartDate_t_856213750"); // 3
        EvntDts_52_set.insert("ComplexEventStartDate_t_856213750");
        EvntDts_52.add_attribute("EndDt", "ComplexEventEndDate_t_1656252150"); // 3
        EvntDts_52_set.insert("ComplexEventEndDate_t_1656252150");
        all_values.push_back(EvntDts_52_set);
        all_compo_names.insert("EvntDts_52_set");

        {
          xml_element EvntTms_52{"EvntTms"};
          multiset<string> EvntTms_52_set;
          EvntTms_52.add_attribute("StartTm", "379830193"); // 4
          EvntTms_52_set.insert("379830193");
          EvntTms_52.add_attribute("EndTm", "2131456364"); // 4
          EvntTms_52_set.insert("2131456364");
          all_values.push_back(EvntTms_52_set);
          all_compo_names.insert("EvntTms_52_set");

          EvntDts_52.add_element(EvntTms_52);
        }
        CmplxEvnt_52.add_element(EvntDts_52);
      }
      Instrmt_52.add_element(CmplxEvnt_52);
    }
    elt.add_element(Instrmt_52);
  } // end Instrmt
  { // Undly
    xml_element Undly_73{"Undly"};
    multiset<string> Undly_73_set;
    Undly_73.add_attribute("Sym", "UnderlyingSymbol_t_248758287"); // 1
    Undly_73_set.insert("UnderlyingSymbol_t_248758287");
    Undly_73.add_attribute("Sfx", "CD"); // 1
    Undly_73_set.insert("CD");
    Undly_73.add_attribute("ID", "UnderlyingSecurityID_t_1800716217"); // 1
    Undly_73_set.insert("UnderlyingSecurityID_t_1800716217");
    Undly_73.add_attribute("Src", "9"); // 1
    Undly_73_set.insert("9");
    Undly_73.add_attribute("Prod", "2"); // 1
    Undly_73_set.insert("2");
    Undly_73.add_attribute("CFI", "UnderlyingCFICode_t_425824535"); // 1
    Undly_73_set.insert("UnderlyingCFICode_t_425824535");
    Undly_73.add_attribute("SecTyp", "AMENDED"); // 1
    Undly_73_set.insert("AMENDED");
    Undly_73.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1295228582"); // 1
    Undly_73_set.insert("UnderlyingSecuritySubType_t_1295228582");
    Undly_73.add_attribute("MMY", "1263708916"); // 1
    Undly_73_set.insert("1263708916");
    Undly_73.add_attribute("Mat", "UnderlyingMaturityDate_t_363903768"); // 1
    Undly_73_set.insert("UnderlyingMaturityDate_t_363903768");
    Undly_73.add_attribute("MatTm", "454404370"); // 1
    Undly_73_set.insert("454404370");
    Undly_73.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_935415709"); // 1
    Undly_73_set.insert("UnderlyingCouponPaymentDate_t_935415709");
    Undly_73.add_attribute("RestrctTyp", "XR"); // 1
    Undly_73_set.insert("XR");
    Undly_73.add_attribute("Snrty", "SD"); // 1
    Undly_73_set.insert("SD");
    Undly_73.add_attribute("NotlPctOut", "14561589.500000"); // 1
    Undly_73_set.insert("14561589.500000");
    Undly_73.add_attribute("OrigNotlPctOut", "6526266.740000"); // 1
    Undly_73_set.insert("6526266.740000");
    Undly_73.add_attribute("AttchPnt", "11222274.220000"); // 1
    Undly_73_set.insert("11222274.220000");
    Undly_73.add_attribute("DetchPnt", "16451449.840000"); // 1
    Undly_73_set.insert("16451449.840000");
    Undly_73.add_attribute("Issued", "UnderlyingIssueDate_t_2144079659"); // 1
    Undly_73_set.insert("UnderlyingIssueDate_t_2144079659");
    Undly_73.add_attribute("RepoCollSecTyp", "1740033224"); // 1
    Undly_73_set.insert("1740033224");
    Undly_73.add_attribute("RepoTrm", "864007098"); // 1
    Undly_73_set.insert("864007098");
    Undly_73.add_attribute("RepoRt", "20524127.470000"); // 1
    Undly_73_set.insert("20524127.470000");
    Undly_73.add_attribute("Fctr", "20964510.190000"); // 1
    Undly_73_set.insert("20964510.190000");
    Undly_73.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2031194723"); // 1
    Undly_73_set.insert("UnderlyingCreditRating_t_2031194723");
    Undly_73.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1014872033"); // 1
    Undly_73_set.insert("UnderlyingInstrRegistry_t_1014872033");
    Undly_73.add_attribute("Ctry", "354613063"); // 1
    Undly_73_set.insert("354613063");
    Undly_73.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_575247254"); // 1
    Undly_73_set.insert("UnderlyingStateOrProvinceOfIssue_t_575247254");
    Undly_73.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1871085783"); // 1
    Undly_73_set.insert("UnderlyingLocaleOfIssue_t_1871085783");
    Undly_73.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2010865213"); // 1
    Undly_73_set.insert("UnderlyingRedemptionDate_t_2010865213");
    Undly_73.add_attribute("StrkPx", "9550774.470000"); // 1
    Undly_73_set.insert("9550774.470000");
    Undly_73.add_attribute("StrkCcy", "GBP"); // 1
    Undly_73_set.insert("GBP");
    Undly_73.add_attribute("OptA", "2085979175"); // 1
    Undly_73_set.insert("2085979175");
    Undly_73.add_attribute("Mult", "15082910.690000"); // 1
    Undly_73_set.insert("15082910.690000");
    Undly_73.add_attribute("MultTyp", "0"); // 1
    Undly_73_set.insert("0");
    Undly_73.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_73_set.insert("4");
    Undly_73.add_attribute("UOM", "tn"); // 1
    Undly_73_set.insert("tn");
    Undly_73.add_attribute("UOMQty", "8710568.460000"); // 1
    Undly_73_set.insert("8710568.460000");
    Undly_73.add_attribute("PxUOM", "Bbl"); // 1
    Undly_73_set.insert("Bbl");
    Undly_73.add_attribute("PxUOMQty", "10503408.730000"); // 1
    Undly_73_set.insert("10503408.730000");
    Undly_73.add_attribute("TmUnit", "Yr"); // 1
    Undly_73_set.insert("Yr");
    Undly_73.add_attribute("ExerStyle", "0"); // 1
    Undly_73_set.insert("0");
    Undly_73.add_attribute("CpnRt", "19857565.820000"); // 1
    Undly_73_set.insert("19857565.820000");
    Undly_73.add_attribute("Exch", "UnderlyingSecurityExchange_t_879630354"); // 1
    Undly_73_set.insert("UnderlyingSecurityExchange_t_879630354");
    Undly_73.add_attribute("Issr", "UnderlyingIssuer_t_58860991"); // 1
    Undly_73_set.insert("UnderlyingIssuer_t_58860991");
    Undly_73.add_attribute("EncUndIssrLen", "1294431884"); // 1
    Undly_73_set.insert("1294431884");
    Undly_73.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1532257028"); // 1
    Undly_73_set.insert("EncodedUnderlyingIssuer_t_1532257028");
    Undly_73.add_attribute("Desc", "UnderlyingSecurityDesc_t_1181088413"); // 1
    Undly_73_set.insert("UnderlyingSecurityDesc_t_1181088413");
    Undly_73.add_attribute("EncUndSecDescLen", "792093220"); // 1
    Undly_73_set.insert("792093220");
    Undly_73.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1528853039"); // 1
    Undly_73_set.insert("EncodedUnderlyingSecurityDesc_t_1528853039");
    Undly_73.add_attribute("CPPgm", "UnderlyingCPProgram_t_773637989"); // 1
    Undly_73_set.insert("UnderlyingCPProgram_t_773637989");
    Undly_73.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1656100319"); // 1
    Undly_73_set.insert("UnderlyingCPRegType_t_1656100319");
    Undly_73.add_attribute("AllocPct", "14337821.380000"); // 1
    Undly_73_set.insert("14337821.380000");
    Undly_73.add_attribute("Ccy", "GBP"); // 1
    Undly_73_set.insert("GBP");
    Undly_73.add_attribute("Qty", "3011705.230000"); // 1
    Undly_73_set.insert("3011705.230000");
    Undly_73.add_attribute("SettlTyp", "5"); // 1
    Undly_73_set.insert("5");
    Undly_73.add_attribute("CashAmt", "UnderlyingCashAmount_t_2115058648"); // 1
    Undly_73_set.insert("UnderlyingCashAmount_t_2115058648");
    Undly_73.add_attribute("CashTyp", "FIXED"); // 1
    Undly_73_set.insert("FIXED");
    Undly_73.add_attribute("Px", "9405999.890000"); // 1
    Undly_73_set.insert("9405999.890000");
    Undly_73.add_attribute("DirtPx", "9226524.470000"); // 1
    Undly_73_set.insert("9226524.470000");
    Undly_73.add_attribute("EndPx", "18798311.570000"); // 1
    Undly_73_set.insert("18798311.570000");
    Undly_73.add_attribute("StartVal", "UnderlyingStartValue_t_1052739841"); // 1
    Undly_73_set.insert("UnderlyingStartValue_t_1052739841");
    Undly_73.add_attribute("CurVal", "UnderlyingCurrentValue_t_861147974"); // 1
    Undly_73_set.insert("UnderlyingCurrentValue_t_861147974");
    Undly_73.add_attribute("EndVal", "UnderlyingEndValue_t_1240638578"); // 1
    Undly_73_set.insert("UnderlyingEndValue_t_1240638578");
    Undly_73.add_attribute("AdjQty", "6399476.000000"); // 1
    Undly_73_set.insert("6399476.000000");
    Undly_73.add_attribute("FxRate", "4728509.000000"); // 1
    Undly_73_set.insert("4728509.000000");
    Undly_73.add_attribute("FxRateCalc", "D"); // 1
    Undly_73_set.insert("D");
    Undly_73.add_attribute("CapValu", "UnderlyingCapValue_t_1511004447"); // 1
    Undly_73_set.insert("UnderlyingCapValue_t_1511004447");
    Undly_73.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1379782408"); // 1
    Undly_73_set.insert("UnderlyingSettlMethod_t_1379782408");
    Undly_73.add_attribute("PutCall", "2077611408"); // 1
    Undly_73_set.insert("2077611408");
    all_values.push_back(Undly_73_set);
    all_compo_names.insert("Undly_73_set");

    {
      xml_element UndAID_73{"UndAID"};
      multiset<string> UndAID_73_set;
      UndAID_73.add_attribute("AltID", "UnderlyingSecurityAltID_t_598481413"); // 2
      UndAID_73_set.insert("UnderlyingSecurityAltID_t_598481413");
      UndAID_73.add_attribute("AltIDSrc", "F"); // 2
      UndAID_73_set.insert("F");
      all_values.push_back(UndAID_73_set);
      all_compo_names.insert("UndAID_73_set");

      Undly_73.add_element(UndAID_73);
    }
    {
      xml_element Stip_109{"Stip"};
      multiset<string> Stip_109_set;
      Stip_109.add_attribute("Typ", "MATURITY"); // 2
      Stip_109_set.insert("MATURITY");
      Stip_109.add_attribute("Val", "UnderlyingStipValue_t_1478111767"); // 2
      Stip_109_set.insert("UnderlyingStipValue_t_1478111767");
      all_values.push_back(Stip_109_set);
      all_compo_names.insert("Stip_109_set");

      Undly_73.add_element(Stip_109);
    }
    {
      xml_element Pty_297{"Pty"};
      multiset<string> Pty_297_set;
      Pty_297.add_attribute("ID", "UnderlyingInstrumentPartyID_t_652495629"); // 2
      Pty_297_set.insert("UnderlyingInstrumentPartyID_t_652495629");
      Pty_297.add_attribute("Src", "7"); // 2
      Pty_297_set.insert("7");
      Pty_297.add_attribute("R", "28"); // 2
      Pty_297_set.insert("28");
      all_values.push_back(Pty_297_set);
      all_compo_names.insert("Pty_297_set");

      {
        xml_element Sub_297{"Sub"};
        multiset<string> Sub_297_set;
        Sub_297.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1833584042"); // 3
        Sub_297_set.insert("UnderlyingInstrumentPartySubID_t_1833584042");
        Sub_297.add_attribute("Typ", "7"); // 3
        Sub_297_set.insert("7");
        all_values.push_back(Sub_297_set);
        all_compo_names.insert("Sub_297_set");

        Pty_297.add_element(Sub_297);
      }
      Undly_73.add_element(Pty_297);
    }
    elt.add_element(Undly_73);
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
