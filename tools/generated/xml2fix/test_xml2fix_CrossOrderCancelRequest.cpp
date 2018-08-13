#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CrossOrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CrssOrdCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_909012086"); // 0
  CrossOrderCancelRequest_message_t_0.insert("OrderID_t_909012086");
  elt.add_attribute("ID", "CrossID_t_1294224829"); // 0
  CrossOrderCancelRequest_message_t_0.insert("CrossID_t_1294224829");
  elt.add_attribute("OrigID", "OrigCrossID_t_1571380381"); // 0
  CrossOrderCancelRequest_message_t_0.insert("OrigCrossID_t_1571380381");
  elt.add_attribute("HstCxID", "HostCrossID_t_502494161"); // 0
  CrossOrderCancelRequest_message_t_0.insert("HostCrossID_t_502494161");
  elt.add_attribute("Typ", "2"); // 0
  CrossOrderCancelRequest_message_t_0.insert("2");
  elt.add_attribute("Priorty", "2"); // 0
  CrossOrderCancelRequest_message_t_0.insert("2");
  elt.add_attribute("TxnTm", "TransactTime_t_830684289"); // 0
  CrossOrderCancelRequest_message_t_0.insert("TransactTime_t_830684289");
  all_values.push_back(CrossOrderCancelRequest_message_t_0);
  all_compo_names.insert("CrossOrderCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_25{"Hdr"};
    multiset<string> Hdr_25_set;
    Hdr_25.add_attribute("SeqNum", "1117970639"); // 1
    Hdr_25_set.insert("1117970639");
    Hdr_25.add_attribute("SID", "SenderCompID_t_75563148"); // 1
    Hdr_25_set.insert("SenderCompID_t_75563148");
    Hdr_25.add_attribute("TID", "TargetCompID_t_660349401"); // 1
    Hdr_25_set.insert("TargetCompID_t_660349401");
    Hdr_25.add_attribute("OBID", "OnBehalfOfCompID_t_446751672"); // 1
    Hdr_25_set.insert("OnBehalfOfCompID_t_446751672");
    Hdr_25.add_attribute("D2ID", "DeliverToCompID_t_1166825771"); // 1
    Hdr_25_set.insert("DeliverToCompID_t_1166825771");
    Hdr_25.add_attribute("SSub", "SenderSubID_t_446822114"); // 1
    Hdr_25_set.insert("SenderSubID_t_446822114");
    Hdr_25.add_attribute("SLoc", "SenderLocationID_t_842409046"); // 1
    Hdr_25_set.insert("SenderLocationID_t_842409046");
    Hdr_25.add_attribute("TSub", "TargetSubID_t_288022589"); // 1
    Hdr_25_set.insert("TargetSubID_t_288022589");
    Hdr_25.add_attribute("TLoc", "TargetLocationID_t_1620404139"); // 1
    Hdr_25_set.insert("TargetLocationID_t_1620404139");
    Hdr_25.add_attribute("OBSub", "OnBehalfOfSubID_t_907870252"); // 1
    Hdr_25_set.insert("OnBehalfOfSubID_t_907870252");
    Hdr_25.add_attribute("OBLoc", "OnBehalfOfLocationID_t_528130195"); // 1
    Hdr_25_set.insert("OnBehalfOfLocationID_t_528130195");
    Hdr_25.add_attribute("D2Sub", "DeliverToSubID_t_1303593106"); // 1
    Hdr_25_set.insert("DeliverToSubID_t_1303593106");
    Hdr_25.add_attribute("D2Loc", "DeliverToLocationID_t_247774066"); // 1
    Hdr_25_set.insert("DeliverToLocationID_t_247774066");
    Hdr_25.add_attribute("PosDup", "N"); // 1
    Hdr_25_set.insert("N");
    Hdr_25.add_attribute("PosRsnd", "N"); // 1
    Hdr_25_set.insert("N");
    Hdr_25.add_attribute("Snt", "SendingTime_t_1362213777"); // 1
    Hdr_25_set.insert("SendingTime_t_1362213777");
    Hdr_25.add_attribute("OrigSnt", "OrigSendingTime_t_1225986749"); // 1
    Hdr_25_set.insert("OrigSendingTime_t_1225986749");
    Hdr_25.add_attribute("MsgEncd", "MessageEncoding_t_1209902825"); // 1
    Hdr_25_set.insert("MessageEncoding_t_1209902825");
    all_values.push_back(Hdr_25_set);
    all_compo_names.insert("Hdr_25_set");

    {
      xml_element Hop_25{"Hop"};
      multiset<string> Hop_25_set;
      Hop_25.add_attribute("ID", "HopCompID_t_704076103"); // 2
      Hop_25_set.insert("HopCompID_t_704076103");
      Hop_25.add_attribute("Ref", "1255853766"); // 2
      Hop_25_set.insert("1255853766");
      Hop_25.add_attribute("Snt", "HopSendingTime_t_1464681722"); // 2
      Hop_25_set.insert("HopSendingTime_t_1464681722");
      all_values.push_back(Hop_25_set);
      all_compo_names.insert("Hop_25_set");

      Hdr_25.add_element(Hop_25);
    }
    elt.add_element(Hdr_25);
  } // end Hdr
  { // Pty
    xml_element Pty_123{"Pty"};
    multiset<string> Pty_123_set;
    Pty_123.add_attribute("ID", "RootPartyID_t_99432526"); // 1
    Pty_123_set.insert("RootPartyID_t_99432526");
    Pty_123.add_attribute("Src", "8"); // 1
    Pty_123_set.insert("8");
    Pty_123.add_attribute("R", "29"); // 1
    Pty_123_set.insert("29");
    all_values.push_back(Pty_123_set);
    all_compo_names.insert("Pty_123_set");

    {
      xml_element Sub_123{"Sub"};
      multiset<string> Sub_123_set;
      Sub_123.add_attribute("ID", "RootPartySubID_t_1393657356"); // 2
      Sub_123_set.insert("RootPartySubID_t_1393657356");
      Sub_123.add_attribute("Typ", "22"); // 2
      Sub_123_set.insert("22");
      all_values.push_back(Sub_123_set);
      all_compo_names.insert("Sub_123_set");

      Pty_123.add_element(Sub_123);
    }
    elt.add_element(Pty_123);
  } // end Pty
  { // SideCrossCxl
    xml_element SideCrossCxl_0{"SideCrossCxl"};
    multiset<string> SideCrossCxl_0_set;
    SideCrossCxl_0.add_attribute("Side", "2"); // 1
    SideCrossCxl_0_set.insert("2");
    SideCrossCxl_0.add_attribute("OrigClOrdID", "OrigClOrdID_t_1531608959"); // 1
    SideCrossCxl_0_set.insert("OrigClOrdID_t_1531608959");
    SideCrossCxl_0.add_attribute("ClOrdID", "ClOrdID_t_163481955"); // 1
    SideCrossCxl_0_set.insert("ClOrdID_t_163481955");
    SideCrossCxl_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_257017441"); // 1
    SideCrossCxl_0_set.insert("SecondaryClOrdID_t_257017441");
    SideCrossCxl_0.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1607172107"); // 1
    SideCrossCxl_0_set.insert("ClOrdLinkID_t_1607172107");
    SideCrossCxl_0.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_823831356"); // 1
    SideCrossCxl_0_set.insert("OrigOrdModTime_t_823831356");
    SideCrossCxl_0.add_attribute("OrignDt", "TradeOriginationDate_t_703769113"); // 1
    SideCrossCxl_0_set.insert("TradeOriginationDate_t_703769113");
    SideCrossCxl_0.add_attribute("TrdDt", "TradeDate_t_626514231"); // 1
    SideCrossCxl_0_set.insert("TradeDate_t_626514231");
    SideCrossCxl_0.add_attribute("ComplianceID", "ComplianceID_t_1270653471"); // 1
    SideCrossCxl_0_set.insert("ComplianceID_t_1270653471");
    SideCrossCxl_0.add_attribute("Txt", "Text_t_1546178160"); // 1
    SideCrossCxl_0_set.insert("Text_t_1546178160");
    SideCrossCxl_0.add_attribute("EncTxtLen", "914536820"); // 1
    SideCrossCxl_0_set.insert("914536820");
    SideCrossCxl_0.add_attribute("EncTxt", "EncodedText_t_743573962"); // 1
    SideCrossCxl_0_set.insert("EncodedText_t_743573962");
    all_values.push_back(SideCrossCxl_0_set);
    all_compo_names.insert("SideCrossCxl_0_set");

    {
      xml_element Pty_124{"Pty"};
      multiset<string> Pty_124_set;
      Pty_124.add_attribute("ID", "PartyID_t_306564764"); // 2
      Pty_124_set.insert("PartyID_t_306564764");
      Pty_124.add_attribute("Src", "A"); // 2
      Pty_124_set.insert("A");
      Pty_124.add_attribute("R", "47"); // 2
      Pty_124_set.insert("47");
      all_values.push_back(Pty_124_set);
      all_compo_names.insert("Pty_124_set");

      {
        xml_element Sub_124{"Sub"};
        multiset<string> Sub_124_set;
        Sub_124.add_attribute("ID", "PartySubID_t_554338830"); // 3
        Sub_124_set.insert("PartySubID_t_554338830");
        Sub_124.add_attribute("Typ", "29"); // 3
        Sub_124_set.insert("29");
        all_values.push_back(Sub_124_set);
        all_compo_names.insert("Sub_124_set");

        Pty_124.add_element(Sub_124);
      }
      SideCrossCxl_0.add_element(Pty_124);
    }
    {
      xml_element OrdQty_1{"OrdQty"};
      multiset<string> OrdQty_1_set;
      OrdQty_1.add_attribute("Qty", "10237415.810000"); // 2
      OrdQty_1_set.insert("10237415.810000");
      OrdQty_1.add_attribute("Cash", "19165526.070000"); // 2
      OrdQty_1_set.insert("19165526.070000");
      OrdQty_1.add_attribute("Pct", "20373871.800000"); // 2
      OrdQty_1_set.insert("20373871.800000");
      OrdQty_1.add_attribute("RndDir", "2"); // 2
      OrdQty_1_set.insert("2");
      OrdQty_1.add_attribute("RndMod", "4731450.620000"); // 2
      OrdQty_1_set.insert("4731450.620000");
      all_values.push_back(OrdQty_1_set);
      all_compo_names.insert("OrdQty_1_set");

      SideCrossCxl_0.add_element(OrdQty_1);
    }
    elt.add_element(SideCrossCxl_0);
  } // end SideCrossCxl
  { // SideCrossCxl
    xml_element SideCrossCxl_1{"SideCrossCxl"};
    multiset<string> SideCrossCxl_1_set;
    SideCrossCxl_1.add_attribute("Side", "4"); // 1
    SideCrossCxl_1_set.insert("4");
    SideCrossCxl_1.add_attribute("OrigClOrdID", "OrigClOrdID_t_1550842481"); // 1
    SideCrossCxl_1_set.insert("OrigClOrdID_t_1550842481");
    SideCrossCxl_1.add_attribute("ClOrdID", "ClOrdID_t_541920128"); // 1
    SideCrossCxl_1_set.insert("ClOrdID_t_541920128");
    SideCrossCxl_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1245189825"); // 1
    SideCrossCxl_1_set.insert("SecondaryClOrdID_t_1245189825");
    SideCrossCxl_1.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1666213686"); // 1
    SideCrossCxl_1_set.insert("ClOrdLinkID_t_1666213686");
    SideCrossCxl_1.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1519707281"); // 1
    SideCrossCxl_1_set.insert("OrigOrdModTime_t_1519707281");
    SideCrossCxl_1.add_attribute("OrignDt", "TradeOriginationDate_t_491363533"); // 1
    SideCrossCxl_1_set.insert("TradeOriginationDate_t_491363533");
    SideCrossCxl_1.add_attribute("TrdDt", "TradeDate_t_1205481624"); // 1
    SideCrossCxl_1_set.insert("TradeDate_t_1205481624");
    SideCrossCxl_1.add_attribute("ComplianceID", "ComplianceID_t_852504947"); // 1
    SideCrossCxl_1_set.insert("ComplianceID_t_852504947");
    SideCrossCxl_1.add_attribute("Txt", "Text_t_1777893983"); // 1
    SideCrossCxl_1_set.insert("Text_t_1777893983");
    SideCrossCxl_1.add_attribute("EncTxtLen", "589606935"); // 1
    SideCrossCxl_1_set.insert("589606935");
    SideCrossCxl_1.add_attribute("EncTxt", "EncodedText_t_1015986902"); // 1
    SideCrossCxl_1_set.insert("EncodedText_t_1015986902");
    all_values.push_back(SideCrossCxl_1_set);
    all_compo_names.insert("SideCrossCxl_1_set");

    {
      xml_element Pty_125{"Pty"};
      multiset<string> Pty_125_set;
      Pty_125.add_attribute("ID", "PartyID_t_2034911424"); // 2
      Pty_125_set.insert("PartyID_t_2034911424");
      Pty_125.add_attribute("Src", "1"); // 2
      Pty_125_set.insert("1");
      Pty_125.add_attribute("R", "34"); // 2
      Pty_125_set.insert("34");
      all_values.push_back(Pty_125_set);
      all_compo_names.insert("Pty_125_set");

      {
        xml_element Sub_125{"Sub"};
        multiset<string> Sub_125_set;
        Sub_125.add_attribute("ID", "PartySubID_t_591196889"); // 3
        Sub_125_set.insert("PartySubID_t_591196889");
        Sub_125.add_attribute("Typ", "26"); // 3
        Sub_125_set.insert("26");
        all_values.push_back(Sub_125_set);
        all_compo_names.insert("Sub_125_set");

        Pty_125.add_element(Sub_125);
      }
      SideCrossCxl_1.add_element(Pty_125);
    }
    {
      xml_element OrdQty_2{"OrdQty"};
      multiset<string> OrdQty_2_set;
      OrdQty_2.add_attribute("Qty", "9629880.810000"); // 2
      OrdQty_2_set.insert("9629880.810000");
      OrdQty_2.add_attribute("Cash", "21373750.490000"); // 2
      OrdQty_2_set.insert("21373750.490000");
      OrdQty_2.add_attribute("Pct", "15903464.450000"); // 2
      OrdQty_2_set.insert("15903464.450000");
      OrdQty_2.add_attribute("RndDir", "1"); // 2
      OrdQty_2_set.insert("1");
      OrdQty_2.add_attribute("RndMod", "2964561.650000"); // 2
      OrdQty_2_set.insert("2964561.650000");
      all_values.push_back(OrdQty_2_set);
      all_compo_names.insert("OrdQty_2_set");

      SideCrossCxl_1.add_element(OrdQty_2);
    }
    elt.add_element(SideCrossCxl_1);
  } // end SideCrossCxl
  { // SideCrossCxl
    xml_element SideCrossCxl_2{"SideCrossCxl"};
    multiset<string> SideCrossCxl_2_set;
    SideCrossCxl_2.add_attribute("Side", "6"); // 1
    SideCrossCxl_2_set.insert("6");
    SideCrossCxl_2.add_attribute("OrigClOrdID", "OrigClOrdID_t_1606245464"); // 1
    SideCrossCxl_2_set.insert("OrigClOrdID_t_1606245464");
    SideCrossCxl_2.add_attribute("ClOrdID", "ClOrdID_t_850794995"); // 1
    SideCrossCxl_2_set.insert("ClOrdID_t_850794995");
    SideCrossCxl_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1696930244"); // 1
    SideCrossCxl_2_set.insert("SecondaryClOrdID_t_1696930244");
    SideCrossCxl_2.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_482503397"); // 1
    SideCrossCxl_2_set.insert("ClOrdLinkID_t_482503397");
    SideCrossCxl_2.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_619863955"); // 1
    SideCrossCxl_2_set.insert("OrigOrdModTime_t_619863955");
    SideCrossCxl_2.add_attribute("OrignDt", "TradeOriginationDate_t_1586833777"); // 1
    SideCrossCxl_2_set.insert("TradeOriginationDate_t_1586833777");
    SideCrossCxl_2.add_attribute("TrdDt", "TradeDate_t_568664155"); // 1
    SideCrossCxl_2_set.insert("TradeDate_t_568664155");
    SideCrossCxl_2.add_attribute("ComplianceID", "ComplianceID_t_1093009017"); // 1
    SideCrossCxl_2_set.insert("ComplianceID_t_1093009017");
    SideCrossCxl_2.add_attribute("Txt", "Text_t_585107428"); // 1
    SideCrossCxl_2_set.insert("Text_t_585107428");
    SideCrossCxl_2.add_attribute("EncTxtLen", "2119506636"); // 1
    SideCrossCxl_2_set.insert("2119506636");
    SideCrossCxl_2.add_attribute("EncTxt", "EncodedText_t_1634929146"); // 1
    SideCrossCxl_2_set.insert("EncodedText_t_1634929146");
    all_values.push_back(SideCrossCxl_2_set);
    all_compo_names.insert("SideCrossCxl_2_set");

    {
      xml_element Pty_126{"Pty"};
      multiset<string> Pty_126_set;
      Pty_126.add_attribute("ID", "PartyID_t_1830297253"); // 2
      Pty_126_set.insert("PartyID_t_1830297253");
      Pty_126.add_attribute("Src", "B"); // 2
      Pty_126_set.insert("B");
      Pty_126.add_attribute("R", "12"); // 2
      Pty_126_set.insert("12");
      all_values.push_back(Pty_126_set);
      all_compo_names.insert("Pty_126_set");

      {
        xml_element Sub_126{"Sub"};
        multiset<string> Sub_126_set;
        Sub_126.add_attribute("ID", "PartySubID_t_174177139"); // 3
        Sub_126_set.insert("PartySubID_t_174177139");
        Sub_126.add_attribute("Typ", "7"); // 3
        Sub_126_set.insert("7");
        all_values.push_back(Sub_126_set);
        all_compo_names.insert("Sub_126_set");

        Pty_126.add_element(Sub_126);
      }
      SideCrossCxl_2.add_element(Pty_126);
    }
    {
      xml_element OrdQty_3{"OrdQty"};
      multiset<string> OrdQty_3_set;
      OrdQty_3.add_attribute("Qty", "18596577.260000"); // 2
      OrdQty_3_set.insert("18596577.260000");
      OrdQty_3.add_attribute("Cash", "19520711.220000"); // 2
      OrdQty_3_set.insert("19520711.220000");
      OrdQty_3.add_attribute("Pct", "12858415.850000"); // 2
      OrdQty_3_set.insert("12858415.850000");
      OrdQty_3.add_attribute("RndDir", "2"); // 2
      OrdQty_3_set.insert("2");
      OrdQty_3.add_attribute("RndMod", "18394988.980000"); // 2
      OrdQty_3_set.insert("18394988.980000");
      all_values.push_back(OrdQty_3_set);
      all_compo_names.insert("OrdQty_3_set");

      SideCrossCxl_2.add_element(OrdQty_3);
    }
    elt.add_element(SideCrossCxl_2);
  } // end SideCrossCxl
  { // Instrmt
    xml_element Instrmt_15{"Instrmt"};
    multiset<string> Instrmt_15_set;
    Instrmt_15.add_attribute("Sym", "Symbol_t_1335136980"); // 1
    Instrmt_15_set.insert("Symbol_t_1335136980");
    Instrmt_15.add_attribute("Sfx", "CD"); // 1
    Instrmt_15_set.insert("CD");
    Instrmt_15.add_attribute("ID", "SecurityID_t_283212139"); // 1
    Instrmt_15_set.insert("SecurityID_t_283212139");
    Instrmt_15.add_attribute("Src", "L"); // 1
    Instrmt_15_set.insert("L");
    Instrmt_15.add_attribute("Prod", "9"); // 1
    Instrmt_15_set.insert("9");
    Instrmt_15.add_attribute("ProdCmplx", "ProductComplex_t_273103541"); // 1
    Instrmt_15_set.insert("ProductComplex_t_273103541");
    Instrmt_15.add_attribute("SecGrp", "SecurityGroup_t_1453809403"); // 1
    Instrmt_15_set.insert("SecurityGroup_t_1453809403");
    Instrmt_15.add_attribute("CFI", "CFICode_t_942562067"); // 1
    Instrmt_15_set.insert("CFICode_t_942562067");
    Instrmt_15.add_attribute("SecTyp", "DEFLTED"); // 1
    Instrmt_15_set.insert("DEFLTED");
    Instrmt_15.add_attribute("SubTyp", "SecuritySubType_t_191855568"); // 1
    Instrmt_15_set.insert("SecuritySubType_t_191855568");
    Instrmt_15.add_attribute("MMY", "401323883"); // 1
    Instrmt_15_set.insert("401323883");
    Instrmt_15.add_attribute("MatDt", "MaturityDate_t_1420354702"); // 1
    Instrmt_15_set.insert("MaturityDate_t_1420354702");
    Instrmt_15.add_attribute("MatTm", "1888785812"); // 1
    Instrmt_15_set.insert("1888785812");
    Instrmt_15.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_883827280"); // 1
    Instrmt_15_set.insert("SettleOnOpenFlag_t_883827280");
    Instrmt_15.add_attribute("AsgnMeth", "2040218657"); // 1
    Instrmt_15_set.insert("2040218657");
    Instrmt_15.add_attribute("Status", "2"); // 1
    Instrmt_15_set.insert("2");
    Instrmt_15.add_attribute("CpnPmt", "CouponPaymentDate_t_1452491436"); // 1
    Instrmt_15_set.insert("CouponPaymentDate_t_1452491436");
    Instrmt_15.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_15_set.insert("MM");
    Instrmt_15.add_attribute("Snrty", "SB"); // 1
    Instrmt_15_set.insert("SB");
    Instrmt_15.add_attribute("NotlPctOut", "14245144.240000"); // 1
    Instrmt_15_set.insert("14245144.240000");
    Instrmt_15.add_attribute("OrigNotlPctOut", "4731895.240000"); // 1
    Instrmt_15_set.insert("4731895.240000");
    Instrmt_15.add_attribute("AttchPnt", "15960569.750000"); // 1
    Instrmt_15_set.insert("15960569.750000");
    Instrmt_15.add_attribute("DetchPnt", "9152674.510000"); // 1
    Instrmt_15_set.insert("9152674.510000");
    Instrmt_15.add_attribute("Issued", "IssueDate_t_1480342303"); // 1
    Instrmt_15_set.insert("IssueDate_t_1480342303");
    Instrmt_15.add_attribute("RepoCollSecTyp", "1770234114"); // 1
    Instrmt_15_set.insert("1770234114");
    Instrmt_15.add_attribute("RepoTrm", "1611502101"); // 1
    Instrmt_15_set.insert("1611502101");
    Instrmt_15.add_attribute("RepoRt", "11925163.810000"); // 1
    Instrmt_15_set.insert("11925163.810000");
    Instrmt_15.add_attribute("Fctr", "15748215.880000"); // 1
    Instrmt_15_set.insert("15748215.880000");
    Instrmt_15.add_attribute("CrdRtg", "CreditRating_t_749860039"); // 1
    Instrmt_15_set.insert("CreditRating_t_749860039");
    Instrmt_15.add_attribute("Rgstry", "InstrRegistry_t_1920677361"); // 1
    Instrmt_15_set.insert("InstrRegistry_t_1920677361");
    Instrmt_15.add_attribute("IssuCtry", "1266836838"); // 1
    Instrmt_15_set.insert("1266836838");
    Instrmt_15.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2084997019"); // 1
    Instrmt_15_set.insert("StateOrProvinceOfIssue_t_2084997019");
    Instrmt_15.add_attribute("Lcl", "LocaleOfIssue_t_193689304"); // 1
    Instrmt_15_set.insert("LocaleOfIssue_t_193689304");
    Instrmt_15.add_attribute("Redeem", "RedemptionDate_t_1550048977"); // 1
    Instrmt_15_set.insert("RedemptionDate_t_1550048977");
    Instrmt_15.add_attribute("StrkPx", "19484599.760000"); // 1
    Instrmt_15_set.insert("19484599.760000");
    Instrmt_15.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_15_set.insert("USD");
    Instrmt_15.add_attribute("StrkMult", "12547857.310000"); // 1
    Instrmt_15_set.insert("12547857.310000");
    Instrmt_15.add_attribute("StrkValu", "3722513.950000"); // 1
    Instrmt_15_set.insert("3722513.950000");
    Instrmt_15.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_15_set.insert("2");
    Instrmt_15.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_15_set.insert("5");
    Instrmt_15.add_attribute("StrkPxBndryPrcsn", "7735752.790000"); // 1
    Instrmt_15_set.insert("7735752.790000");
    Instrmt_15.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_15_set.insert("4");
    Instrmt_15.add_attribute("OptAt", "1187943464"); // 1
    Instrmt_15_set.insert("1187943464");
    Instrmt_15.add_attribute("Mult", "16574025.590000"); // 1
    Instrmt_15_set.insert("16574025.590000");
    Instrmt_15.add_attribute("MultTyp", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_15_set.insert("2");
    Instrmt_15.add_attribute("MinPxIncr", "9624103.470000"); // 1
    Instrmt_15_set.insert("9624103.470000");
    Instrmt_15.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_396578666"); // 1
    Instrmt_15_set.insert("MinPriceIncrementAmount_t_396578666");
    Instrmt_15.add_attribute("UOM", "Bu"); // 1
    Instrmt_15_set.insert("Bu");
    Instrmt_15.add_attribute("UOMQty", "2394411.240000"); // 1
    Instrmt_15_set.insert("2394411.240000");
    Instrmt_15.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_15_set.insert("MMbbl");
    Instrmt_15.add_attribute("PxUOMQty", "17304124.540000"); // 1
    Instrmt_15_set.insert("17304124.540000");
    Instrmt_15.add_attribute("SettlMeth", "P"); // 1
    Instrmt_15_set.insert("P");
    Instrmt_15.add_attribute("ExerStyle", "0"); // 1
    Instrmt_15_set.insert("0");
    Instrmt_15.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_15_set.insert("3");
    Instrmt_15.add_attribute("OptPayAmt", "OptPayoutAmount_t_618727028"); // 1
    Instrmt_15_set.insert("OptPayoutAmount_t_618727028");
    Instrmt_15.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_15_set.insert("STD");
    Instrmt_15.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_15_set.insert("EQTY");
    Instrmt_15.add_attribute("ListMeth", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("CapPx", "11683369.410000"); // 1
    Instrmt_15_set.insert("11683369.410000");
    Instrmt_15.add_attribute("FlrPx", "20473376.980000"); // 1
    Instrmt_15_set.insert("20473376.980000");
    Instrmt_15.add_attribute("PutCall", "0"); // 1
    Instrmt_15_set.insert("0");
    Instrmt_15.add_attribute("FlexInd", "false"); // 1
    Instrmt_15_set.insert("false");
    Instrmt_15.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_15_set.insert("false");
    Instrmt_15.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_15_set.insert("Yr");
    Instrmt_15.add_attribute("CpnRt", "7917155.730000"); // 1
    Instrmt_15_set.insert("7917155.730000");
    Instrmt_15.add_attribute("Exch", "SecurityExchange_t_1125571898"); // 1
    Instrmt_15_set.insert("SecurityExchange_t_1125571898");
    Instrmt_15.add_attribute("PosLmt", "214378850"); // 1
    Instrmt_15_set.insert("214378850");
    Instrmt_15.add_attribute("NTPosLmt", "1163966969"); // 1
    Instrmt_15_set.insert("1163966969");
    Instrmt_15.add_attribute("Issr", "Issuer_t_1370800475"); // 1
    Instrmt_15_set.insert("Issuer_t_1370800475");
    Instrmt_15.add_attribute("EncIssrLen", "1661020150"); // 1
    Instrmt_15_set.insert("1661020150");
    Instrmt_15.add_attribute("EncIssr", "EncodedIssuer_t_1937542248"); // 1
    Instrmt_15_set.insert("EncodedIssuer_t_1937542248");
    Instrmt_15.add_attribute("Desc", "SecurityDesc_t_888900106"); // 1
    Instrmt_15_set.insert("SecurityDesc_t_888900106");
    Instrmt_15.add_attribute("EncSecDescLen", "701479966"); // 1
    Instrmt_15_set.insert("701479966");
    Instrmt_15.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1447461159"); // 1
    Instrmt_15_set.insert("EncodedSecurityDesc_t_1447461159");
    Instrmt_15.add_attribute("Pool", "Pool_t_299734746"); // 1
    Instrmt_15_set.insert("Pool_t_299734746");
    Instrmt_15.add_attribute("CSetMo", "1070075723"); // 1
    Instrmt_15_set.insert("1070075723");
    Instrmt_15.add_attribute("CPPgm", "99"); // 1
    Instrmt_15_set.insert("99");
    Instrmt_15.add_attribute("CPRegT", "CPRegType_t_696313412"); // 1
    Instrmt_15_set.insert("CPRegType_t_696313412");
    Instrmt_15.add_attribute("Dated", "DatedDate_t_1204431202"); // 1
    Instrmt_15_set.insert("DatedDate_t_1204431202");
    Instrmt_15.add_attribute("IntAcrl", "InterestAccrualDate_t_501828983"); // 1
    Instrmt_15_set.insert("InterestAccrualDate_t_501828983");
    all_values.push_back(Instrmt_15_set);
    all_compo_names.insert("Instrmt_15_set");

    {
      xml_element AID_15{"AID"};
      multiset<string> AID_15_set;
      AID_15.add_attribute("AltID", "SecurityAltID_t_1566081603"); // 2
      AID_15_set.insert("SecurityAltID_t_1566081603");
      AID_15.add_attribute("AltIDSrc", "7"); // 2
      AID_15_set.insert("7");
      all_values.push_back(AID_15_set);
      all_compo_names.insert("AID_15_set");

      Instrmt_15.add_element(AID_15);
    }
    {
      xml_element SecXML_15{"SecXML"};
      multiset<string> SecXML_15_set;
      SecXML_15.add_attribute("Schema", "SecurityXMLSchema_t_1656537558"); // 2
      SecXML_15_set.insert("SecurityXMLSchema_t_1656537558");
      all_values.push_back(SecXML_15_set);
      all_compo_names.insert("SecXML_15_set");

      Instrmt_15.add_element(SecXML_15);
    }
    {
      xml_element Evnt_15{"Evnt"};
      multiset<string> Evnt_15_set;
      Evnt_15.add_attribute("EventTyp", "11"); // 2
      Evnt_15_set.insert("11");
      Evnt_15.add_attribute("Dt", "EventDate_t_2140522928"); // 2
      Evnt_15_set.insert("EventDate_t_2140522928");
      Evnt_15.add_attribute("Tm", "EventTime_t_127780938"); // 2
      Evnt_15_set.insert("EventTime_t_127780938");
      Evnt_15.add_attribute("Px", "10163680.300000"); // 2
      Evnt_15_set.insert("10163680.300000");
      Evnt_15.add_attribute("Txt", "EventText_t_773540140"); // 2
      Evnt_15_set.insert("EventText_t_773540140");
      all_values.push_back(Evnt_15_set);
      all_compo_names.insert("Evnt_15_set");

      Instrmt_15.add_element(Evnt_15);
    }
    {
      xml_element Pty_127{"Pty"};
      multiset<string> Pty_127_set;
      Pty_127.add_attribute("ID", "InstrumentPartyID_t_1496368006"); // 2
      Pty_127_set.insert("InstrumentPartyID_t_1496368006");
      Pty_127.add_attribute("Src", "6"); // 2
      Pty_127_set.insert("6");
      Pty_127.add_attribute("R", "45"); // 2
      Pty_127_set.insert("45");
      all_values.push_back(Pty_127_set);
      all_compo_names.insert("Pty_127_set");

      {
        xml_element Sub_127{"Sub"};
        multiset<string> Sub_127_set;
        Sub_127.add_attribute("ID", "InstrumentPartySubID_t_654984796"); // 3
        Sub_127_set.insert("InstrumentPartySubID_t_654984796");
        Sub_127.add_attribute("Typ", "24"); // 3
        Sub_127_set.insert("24");
        all_values.push_back(Sub_127_set);
        all_compo_names.insert("Sub_127_set");

        Pty_127.add_element(Sub_127);
      }
      Instrmt_15.add_element(Pty_127);
    }
    {
      xml_element CmplxEvnt_15{"CmplxEvnt"};
      multiset<string> CmplxEvnt_15_set;
      CmplxEvnt_15.add_attribute("Typ", "2"); // 2
      CmplxEvnt_15_set.insert("2");
      CmplxEvnt_15.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1762061563"); // 2
      CmplxEvnt_15_set.insert("ComplexOptPayoutAmount_t_1762061563");
      CmplxEvnt_15.add_attribute("Px", "434794.940000"); // 2
      CmplxEvnt_15_set.insert("434794.940000");
      CmplxEvnt_15.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_15_set.insert("4");
      CmplxEvnt_15.add_attribute("PxBndryPrcsn", "19764404.140000"); // 2
      CmplxEvnt_15_set.insert("19764404.140000");
      CmplxEvnt_15.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_15_set.insert("2");
      CmplxEvnt_15.add_attribute("Cond", "2"); // 2
      CmplxEvnt_15_set.insert("2");
      all_values.push_back(CmplxEvnt_15_set);
      all_compo_names.insert("CmplxEvnt_15_set");

      {
        xml_element EvntDts_15{"EvntDts"};
        multiset<string> EvntDts_15_set;
        EvntDts_15.add_attribute("StartDt", "ComplexEventStartDate_t_1489976916"); // 3
        EvntDts_15_set.insert("ComplexEventStartDate_t_1489976916");
        EvntDts_15.add_attribute("EndDt", "ComplexEventEndDate_t_997505063"); // 3
        EvntDts_15_set.insert("ComplexEventEndDate_t_997505063");
        all_values.push_back(EvntDts_15_set);
        all_compo_names.insert("EvntDts_15_set");

        {
          xml_element EvntTms_15{"EvntTms"};
          multiset<string> EvntTms_15_set;
          EvntTms_15.add_attribute("StartTm", "1213602401"); // 4
          EvntTms_15_set.insert("1213602401");
          EvntTms_15.add_attribute("EndTm", "43973234"); // 4
          EvntTms_15_set.insert("43973234");
          all_values.push_back(EvntTms_15_set);
          all_compo_names.insert("EvntTms_15_set");

          EvntDts_15.add_element(EvntTms_15);
        }
        CmplxEvnt_15.add_element(EvntDts_15);
      }
      Instrmt_15.add_element(CmplxEvnt_15);
    }
    elt.add_element(Instrmt_15);
  } // end Instrmt
  { // Undly
    xml_element Undly_27{"Undly"};
    multiset<string> Undly_27_set;
    Undly_27.add_attribute("Sym", "UnderlyingSymbol_t_1513337147"); // 1
    Undly_27_set.insert("UnderlyingSymbol_t_1513337147");
    Undly_27.add_attribute("Sfx", "WI"); // 1
    Undly_27_set.insert("WI");
    Undly_27.add_attribute("ID", "UnderlyingSecurityID_t_559870434"); // 1
    Undly_27_set.insert("UnderlyingSecurityID_t_559870434");
    Undly_27.add_attribute("Src", "G"); // 1
    Undly_27_set.insert("G");
    Undly_27.add_attribute("Prod", "8"); // 1
    Undly_27_set.insert("8");
    Undly_27.add_attribute("CFI", "UnderlyingCFICode_t_1061699417"); // 1
    Undly_27_set.insert("UnderlyingCFICode_t_1061699417");
    Undly_27.add_attribute("SecTyp", "EUSOV"); // 1
    Undly_27_set.insert("EUSOV");
    Undly_27.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_958356520"); // 1
    Undly_27_set.insert("UnderlyingSecuritySubType_t_958356520");
    Undly_27.add_attribute("MMY", "570753327"); // 1
    Undly_27_set.insert("570753327");
    Undly_27.add_attribute("Mat", "UnderlyingMaturityDate_t_1249473317"); // 1
    Undly_27_set.insert("UnderlyingMaturityDate_t_1249473317");
    Undly_27.add_attribute("MatTm", "951395801"); // 1
    Undly_27_set.insert("951395801");
    Undly_27.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_698534265"); // 1
    Undly_27_set.insert("UnderlyingCouponPaymentDate_t_698534265");
    Undly_27.add_attribute("RestrctTyp", "XR"); // 1
    Undly_27_set.insert("XR");
    Undly_27.add_attribute("Snrty", "SD"); // 1
    Undly_27_set.insert("SD");
    Undly_27.add_attribute("NotlPctOut", "474186.230000"); // 1
    Undly_27_set.insert("474186.230000");
    Undly_27.add_attribute("OrigNotlPctOut", "1555790.220000"); // 1
    Undly_27_set.insert("1555790.220000");
    Undly_27.add_attribute("AttchPnt", "2508464.840000"); // 1
    Undly_27_set.insert("2508464.840000");
    Undly_27.add_attribute("DetchPnt", "7024034.200000"); // 1
    Undly_27_set.insert("7024034.200000");
    Undly_27.add_attribute("Issued", "UnderlyingIssueDate_t_1554826591"); // 1
    Undly_27_set.insert("UnderlyingIssueDate_t_1554826591");
    Undly_27.add_attribute("RepoCollSecTyp", "226660054"); // 1
    Undly_27_set.insert("226660054");
    Undly_27.add_attribute("RepoTrm", "316981335"); // 1
    Undly_27_set.insert("316981335");
    Undly_27.add_attribute("RepoRt", "15983060.860000"); // 1
    Undly_27_set.insert("15983060.860000");
    Undly_27.add_attribute("Fctr", "13280455.220000"); // 1
    Undly_27_set.insert("13280455.220000");
    Undly_27.add_attribute("CrdRtg", "UnderlyingCreditRating_t_145938101"); // 1
    Undly_27_set.insert("UnderlyingCreditRating_t_145938101");
    Undly_27.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_658268901"); // 1
    Undly_27_set.insert("UnderlyingInstrRegistry_t_658268901");
    Undly_27.add_attribute("Ctry", "1652747817"); // 1
    Undly_27_set.insert("1652747817");
    Undly_27.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1635915017"); // 1
    Undly_27_set.insert("UnderlyingStateOrProvinceOfIssue_t_1635915017");
    Undly_27.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1655773965"); // 1
    Undly_27_set.insert("UnderlyingLocaleOfIssue_t_1655773965");
    Undly_27.add_attribute("Redeem", "UnderlyingRedemptionDate_t_718866570"); // 1
    Undly_27_set.insert("UnderlyingRedemptionDate_t_718866570");
    Undly_27.add_attribute("StrkPx", "16798882.510000"); // 1
    Undly_27_set.insert("16798882.510000");
    Undly_27.add_attribute("StrkCcy", "CHF"); // 1
    Undly_27_set.insert("CHF");
    Undly_27.add_attribute("OptA", "646453561"); // 1
    Undly_27_set.insert("646453561");
    Undly_27.add_attribute("Mult", "3656433.260000"); // 1
    Undly_27_set.insert("3656433.260000");
    Undly_27.add_attribute("MultTyp", "2"); // 1
    Undly_27_set.insert("2");
    Undly_27.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_27_set.insert("3");
    Undly_27.add_attribute("UOM", "oz_tr"); // 1
    Undly_27_set.insert("oz_tr");
    Undly_27.add_attribute("UOMQty", "17751354.950000"); // 1
    Undly_27_set.insert("17751354.950000");
    Undly_27.add_attribute("PxUOM", "Bbl"); // 1
    Undly_27_set.insert("Bbl");
    Undly_27.add_attribute("PxUOMQty", "19980960.700000"); // 1
    Undly_27_set.insert("19980960.700000");
    Undly_27.add_attribute("TmUnit", "Yr"); // 1
    Undly_27_set.insert("Yr");
    Undly_27.add_attribute("ExerStyle", "0"); // 1
    Undly_27_set.insert("0");
    Undly_27.add_attribute("CpnRt", "5491466.870000"); // 1
    Undly_27_set.insert("5491466.870000");
    Undly_27.add_attribute("Exch", "UnderlyingSecurityExchange_t_995482863"); // 1
    Undly_27_set.insert("UnderlyingSecurityExchange_t_995482863");
    Undly_27.add_attribute("Issr", "UnderlyingIssuer_t_157171040"); // 1
    Undly_27_set.insert("UnderlyingIssuer_t_157171040");
    Undly_27.add_attribute("EncUndIssrLen", "596565311"); // 1
    Undly_27_set.insert("596565311");
    Undly_27.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1151061886"); // 1
    Undly_27_set.insert("EncodedUnderlyingIssuer_t_1151061886");
    Undly_27.add_attribute("Desc", "UnderlyingSecurityDesc_t_408017524"); // 1
    Undly_27_set.insert("UnderlyingSecurityDesc_t_408017524");
    Undly_27.add_attribute("EncUndSecDescLen", "1298968731"); // 1
    Undly_27_set.insert("1298968731");
    Undly_27.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_558404829"); // 1
    Undly_27_set.insert("EncodedUnderlyingSecurityDesc_t_558404829");
    Undly_27.add_attribute("CPPgm", "UnderlyingCPProgram_t_634677578"); // 1
    Undly_27_set.insert("UnderlyingCPProgram_t_634677578");
    Undly_27.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1615950066"); // 1
    Undly_27_set.insert("UnderlyingCPRegType_t_1615950066");
    Undly_27.add_attribute("AllocPct", "92272.670000"); // 1
    Undly_27_set.insert("92272.670000");
    Undly_27.add_attribute("Ccy", "USD"); // 1
    Undly_27_set.insert("USD");
    Undly_27.add_attribute("Qty", "6674961.690000"); // 1
    Undly_27_set.insert("6674961.690000");
    Undly_27.add_attribute("SettlTyp", "5"); // 1
    Undly_27_set.insert("5");
    Undly_27.add_attribute("CashAmt", "UnderlyingCashAmount_t_1250319537"); // 1
    Undly_27_set.insert("UnderlyingCashAmount_t_1250319537");
    Undly_27.add_attribute("CashTyp", "FIXED"); // 1
    Undly_27_set.insert("FIXED");
    Undly_27.add_attribute("Px", "393701.910000"); // 1
    Undly_27_set.insert("393701.910000");
    Undly_27.add_attribute("DirtPx", "7827241.410000"); // 1
    Undly_27_set.insert("7827241.410000");
    Undly_27.add_attribute("EndPx", "21290430.260000"); // 1
    Undly_27_set.insert("21290430.260000");
    Undly_27.add_attribute("StartVal", "UnderlyingStartValue_t_124090260"); // 1
    Undly_27_set.insert("UnderlyingStartValue_t_124090260");
    Undly_27.add_attribute("CurVal", "UnderlyingCurrentValue_t_1429177702"); // 1
    Undly_27_set.insert("UnderlyingCurrentValue_t_1429177702");
    Undly_27.add_attribute("EndVal", "UnderlyingEndValue_t_347202704"); // 1
    Undly_27_set.insert("UnderlyingEndValue_t_347202704");
    Undly_27.add_attribute("AdjQty", "2709772.400000"); // 1
    Undly_27_set.insert("2709772.400000");
    Undly_27.add_attribute("FxRate", "991441.270000"); // 1
    Undly_27_set.insert("991441.270000");
    Undly_27.add_attribute("FxRateCalc", "D"); // 1
    Undly_27_set.insert("D");
    Undly_27.add_attribute("CapValu", "UnderlyingCapValue_t_2046112736"); // 1
    Undly_27_set.insert("UnderlyingCapValue_t_2046112736");
    Undly_27.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1874950720"); // 1
    Undly_27_set.insert("UnderlyingSettlMethod_t_1874950720");
    Undly_27.add_attribute("PutCall", "1625157869"); // 1
    Undly_27_set.insert("1625157869");
    all_values.push_back(Undly_27_set);
    all_compo_names.insert("Undly_27_set");

    {
      xml_element UndAID_27{"UndAID"};
      multiset<string> UndAID_27_set;
      UndAID_27.add_attribute("AltID", "UnderlyingSecurityAltID_t_775754252"); // 2
      UndAID_27_set.insert("UnderlyingSecurityAltID_t_775754252");
      UndAID_27.add_attribute("AltIDSrc", "I"); // 2
      UndAID_27_set.insert("I");
      all_values.push_back(UndAID_27_set);
      all_compo_names.insert("UndAID_27_set");

      Undly_27.add_element(UndAID_27);
    }
    {
      xml_element Stip_47{"Stip"};
      multiset<string> Stip_47_set;
      Stip_47.add_attribute("Typ", "MPR"); // 2
      Stip_47_set.insert("MPR");
      Stip_47.add_attribute("Val", "UnderlyingStipValue_t_1771237116"); // 2
      Stip_47_set.insert("UnderlyingStipValue_t_1771237116");
      all_values.push_back(Stip_47_set);
      all_compo_names.insert("Stip_47_set");

      Undly_27.add_element(Stip_47);
    }
    {
      xml_element Pty_128{"Pty"};
      multiset<string> Pty_128_set;
      Pty_128.add_attribute("ID", "UnderlyingInstrumentPartyID_t_464356859"); // 2
      Pty_128_set.insert("UnderlyingInstrumentPartyID_t_464356859");
      Pty_128.add_attribute("Src", "E"); // 2
      Pty_128_set.insert("E");
      Pty_128.add_attribute("R", "34"); // 2
      Pty_128_set.insert("34");
      all_values.push_back(Pty_128_set);
      all_compo_names.insert("Pty_128_set");

      {
        xml_element Sub_128{"Sub"};
        multiset<string> Sub_128_set;
        Sub_128.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_872374383"); // 3
        Sub_128_set.insert("UnderlyingInstrumentPartySubID_t_872374383");
        Sub_128.add_attribute("Typ", "19"); // 3
        Sub_128_set.insert("19");
        all_values.push_back(Sub_128_set);
        all_compo_names.insert("Sub_128_set");

        Pty_128.add_element(Sub_128);
      }
      Undly_27.add_element(Pty_128);
    }
    elt.add_element(Undly_27);
  } // end Undly
  { // Undly
    xml_element Undly_28{"Undly"};
    multiset<string> Undly_28_set;
    Undly_28.add_attribute("Sym", "UnderlyingSymbol_t_1333220183"); // 1
    Undly_28_set.insert("UnderlyingSymbol_t_1333220183");
    Undly_28.add_attribute("Sfx", "WI"); // 1
    Undly_28_set.insert("WI");
    Undly_28.add_attribute("ID", "UnderlyingSecurityID_t_1390821369"); // 1
    Undly_28_set.insert("UnderlyingSecurityID_t_1390821369");
    Undly_28.add_attribute("Src", "G"); // 1
    Undly_28_set.insert("G");
    Undly_28.add_attribute("Prod", "10"); // 1
    Undly_28_set.insert("10");
    Undly_28.add_attribute("CFI", "UnderlyingCFICode_t_1005225889"); // 1
    Undly_28_set.insert("UnderlyingCFICode_t_1005225889");
    Undly_28.add_attribute("SecTyp", "REV"); // 1
    Undly_28_set.insert("REV");
    Undly_28.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_642795034"); // 1
    Undly_28_set.insert("UnderlyingSecuritySubType_t_642795034");
    Undly_28.add_attribute("MMY", "108061778"); // 1
    Undly_28_set.insert("108061778");
    Undly_28.add_attribute("Mat", "UnderlyingMaturityDate_t_38246458"); // 1
    Undly_28_set.insert("UnderlyingMaturityDate_t_38246458");
    Undly_28.add_attribute("MatTm", "682165225"); // 1
    Undly_28_set.insert("682165225");
    Undly_28.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_890785919"); // 1
    Undly_28_set.insert("UnderlyingCouponPaymentDate_t_890785919");
    Undly_28.add_attribute("RestrctTyp", "FR"); // 1
    Undly_28_set.insert("FR");
    Undly_28.add_attribute("Snrty", "SR"); // 1
    Undly_28_set.insert("SR");
    Undly_28.add_attribute("NotlPctOut", "1724799.730000"); // 1
    Undly_28_set.insert("1724799.730000");
    Undly_28.add_attribute("OrigNotlPctOut", "3670085.400000"); // 1
    Undly_28_set.insert("3670085.400000");
    Undly_28.add_attribute("AttchPnt", "10772327.250000"); // 1
    Undly_28_set.insert("10772327.250000");
    Undly_28.add_attribute("DetchPnt", "2716241.000000"); // 1
    Undly_28_set.insert("2716241.000000");
    Undly_28.add_attribute("Issued", "UnderlyingIssueDate_t_2141553987"); // 1
    Undly_28_set.insert("UnderlyingIssueDate_t_2141553987");
    Undly_28.add_attribute("RepoCollSecTyp", "975861813"); // 1
    Undly_28_set.insert("975861813");
    Undly_28.add_attribute("RepoTrm", "2146574821"); // 1
    Undly_28_set.insert("2146574821");
    Undly_28.add_attribute("RepoRt", "16192282.080000"); // 1
    Undly_28_set.insert("16192282.080000");
    Undly_28.add_attribute("Fctr", "17516160.660000"); // 1
    Undly_28_set.insert("17516160.660000");
    Undly_28.add_attribute("CrdRtg", "UnderlyingCreditRating_t_306276992"); // 1
    Undly_28_set.insert("UnderlyingCreditRating_t_306276992");
    Undly_28.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1646049116"); // 1
    Undly_28_set.insert("UnderlyingInstrRegistry_t_1646049116");
    Undly_28.add_attribute("Ctry", "1375369534"); // 1
    Undly_28_set.insert("1375369534");
    Undly_28.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_770633851"); // 1
    Undly_28_set.insert("UnderlyingStateOrProvinceOfIssue_t_770633851");
    Undly_28.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_121951688"); // 1
    Undly_28_set.insert("UnderlyingLocaleOfIssue_t_121951688");
    Undly_28.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2701240"); // 1
    Undly_28_set.insert("UnderlyingRedemptionDate_t_2701240");
    Undly_28.add_attribute("StrkPx", "16430082.340000"); // 1
    Undly_28_set.insert("16430082.340000");
    Undly_28.add_attribute("StrkCcy", "CHF"); // 1
    Undly_28_set.insert("CHF");
    Undly_28.add_attribute("OptA", "1002576547"); // 1
    Undly_28_set.insert("1002576547");
    Undly_28.add_attribute("Mult", "12876443.590000"); // 1
    Undly_28_set.insert("12876443.590000");
    Undly_28.add_attribute("MultTyp", "0"); // 1
    Undly_28_set.insert("0");
    Undly_28.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_28_set.insert("2");
    Undly_28.add_attribute("UOM", "oz_tr"); // 1
    Undly_28_set.insert("oz_tr");
    Undly_28.add_attribute("UOMQty", "3933451.980000"); // 1
    Undly_28_set.insert("3933451.980000");
    Undly_28.add_attribute("PxUOM", "Alw"); // 1
    Undly_28_set.insert("Alw");
    Undly_28.add_attribute("PxUOMQty", "2534483.790000"); // 1
    Undly_28_set.insert("2534483.790000");
    Undly_28.add_attribute("TmUnit", "Yr"); // 1
    Undly_28_set.insert("Yr");
    Undly_28.add_attribute("ExerStyle", "2"); // 1
    Undly_28_set.insert("2");
    Undly_28.add_attribute("CpnRt", "11442342.980000"); // 1
    Undly_28_set.insert("11442342.980000");
    Undly_28.add_attribute("Exch", "UnderlyingSecurityExchange_t_451397492"); // 1
    Undly_28_set.insert("UnderlyingSecurityExchange_t_451397492");
    Undly_28.add_attribute("Issr", "UnderlyingIssuer_t_161116408"); // 1
    Undly_28_set.insert("UnderlyingIssuer_t_161116408");
    Undly_28.add_attribute("EncUndIssrLen", "1316714272"); // 1
    Undly_28_set.insert("1316714272");
    Undly_28.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_818406032"); // 1
    Undly_28_set.insert("EncodedUnderlyingIssuer_t_818406032");
    Undly_28.add_attribute("Desc", "UnderlyingSecurityDesc_t_1238349133"); // 1
    Undly_28_set.insert("UnderlyingSecurityDesc_t_1238349133");
    Undly_28.add_attribute("EncUndSecDescLen", "1588338372"); // 1
    Undly_28_set.insert("1588338372");
    Undly_28.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_812476371"); // 1
    Undly_28_set.insert("EncodedUnderlyingSecurityDesc_t_812476371");
    Undly_28.add_attribute("CPPgm", "UnderlyingCPProgram_t_66727299"); // 1
    Undly_28_set.insert("UnderlyingCPProgram_t_66727299");
    Undly_28.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1587429545"); // 1
    Undly_28_set.insert("UnderlyingCPRegType_t_1587429545");
    Undly_28.add_attribute("AllocPct", "2842209.310000"); // 1
    Undly_28_set.insert("2842209.310000");
    Undly_28.add_attribute("Ccy", "EUR"); // 1
    Undly_28_set.insert("EUR");
    Undly_28.add_attribute("Qty", "19302700.480000"); // 1
    Undly_28_set.insert("19302700.480000");
    Undly_28.add_attribute("SettlTyp", "5"); // 1
    Undly_28_set.insert("5");
    Undly_28.add_attribute("CashAmt", "UnderlyingCashAmount_t_516856740"); // 1
    Undly_28_set.insert("UnderlyingCashAmount_t_516856740");
    Undly_28.add_attribute("CashTyp", "FIXED"); // 1
    Undly_28_set.insert("FIXED");
    Undly_28.add_attribute("Px", "10489304.910000"); // 1
    Undly_28_set.insert("10489304.910000");
    Undly_28.add_attribute("DirtPx", "123813.260000"); // 1
    Undly_28_set.insert("123813.260000");
    Undly_28.add_attribute("EndPx", "19490447.260000"); // 1
    Undly_28_set.insert("19490447.260000");
    Undly_28.add_attribute("StartVal", "UnderlyingStartValue_t_237368266"); // 1
    Undly_28_set.insert("UnderlyingStartValue_t_237368266");
    Undly_28.add_attribute("CurVal", "UnderlyingCurrentValue_t_1014957873"); // 1
    Undly_28_set.insert("UnderlyingCurrentValue_t_1014957873");
    Undly_28.add_attribute("EndVal", "UnderlyingEndValue_t_1089205438"); // 1
    Undly_28_set.insert("UnderlyingEndValue_t_1089205438");
    Undly_28.add_attribute("AdjQty", "7682534.930000"); // 1
    Undly_28_set.insert("7682534.930000");
    Undly_28.add_attribute("FxRate", "11923421.850000"); // 1
    Undly_28_set.insert("11923421.850000");
    Undly_28.add_attribute("FxRateCalc", "M"); // 1
    Undly_28_set.insert("M");
    Undly_28.add_attribute("CapValu", "UnderlyingCapValue_t_1161598691"); // 1
    Undly_28_set.insert("UnderlyingCapValue_t_1161598691");
    Undly_28.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2012521531"); // 1
    Undly_28_set.insert("UnderlyingSettlMethod_t_2012521531");
    Undly_28.add_attribute("PutCall", "1488040417"); // 1
    Undly_28_set.insert("1488040417");
    all_values.push_back(Undly_28_set);
    all_compo_names.insert("Undly_28_set");

    {
      xml_element UndAID_28{"UndAID"};
      multiset<string> UndAID_28_set;
      UndAID_28.add_attribute("AltID", "UnderlyingSecurityAltID_t_1593190348"); // 2
      UndAID_28_set.insert("UnderlyingSecurityAltID_t_1593190348");
      UndAID_28.add_attribute("AltIDSrc", "K"); // 2
      UndAID_28_set.insert("K");
      all_values.push_back(UndAID_28_set);
      all_compo_names.insert("UndAID_28_set");

      Undly_28.add_element(UndAID_28);
    }
    {
      xml_element Stip_48{"Stip"};
      multiset<string> Stip_48_set;
      Stip_48.add_attribute("Typ", "MPR"); // 2
      Stip_48_set.insert("MPR");
      Stip_48.add_attribute("Val", "UnderlyingStipValue_t_2044587840"); // 2
      Stip_48_set.insert("UnderlyingStipValue_t_2044587840");
      all_values.push_back(Stip_48_set);
      all_compo_names.insert("Stip_48_set");

      Undly_28.add_element(Stip_48);
    }
    {
      xml_element Pty_129{"Pty"};
      multiset<string> Pty_129_set;
      Pty_129.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1528498862"); // 2
      Pty_129_set.insert("UnderlyingInstrumentPartyID_t_1528498862");
      Pty_129.add_attribute("Src", "1"); // 2
      Pty_129_set.insert("1");
      Pty_129.add_attribute("R", "75"); // 2
      Pty_129_set.insert("75");
      all_values.push_back(Pty_129_set);
      all_compo_names.insert("Pty_129_set");

      {
        xml_element Sub_129{"Sub"};
        multiset<string> Sub_129_set;
        Sub_129.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_619364348"); // 3
        Sub_129_set.insert("UnderlyingInstrumentPartySubID_t_619364348");
        Sub_129.add_attribute("Typ", "6"); // 3
        Sub_129_set.insert("6");
        all_values.push_back(Sub_129_set);
        all_compo_names.insert("Sub_129_set");

        Pty_129.add_element(Sub_129);
      }
      Undly_28.add_element(Pty_129);
    }
    elt.add_element(Undly_28);
  } // end Undly
  { // Leg
    xml_element Leg_23{"Leg"};
    multiset<string> Leg_23_set;
    Leg_23.add_attribute("Sym", "LegSymbol_t_686091647"); // 1
    Leg_23_set.insert("LegSymbol_t_686091647");
    Leg_23.add_attribute("Sfx", "CD"); // 1
    Leg_23_set.insert("CD");
    Leg_23.add_attribute("ID", "LegSecurityID_t_1812207528"); // 1
    Leg_23_set.insert("LegSecurityID_t_1812207528");
    Leg_23.add_attribute("Src", "1"); // 1
    Leg_23_set.insert("1");
    Leg_23.add_attribute("Prod", "7"); // 1
    Leg_23_set.insert("7");
    Leg_23.add_attribute("CFI", "LegCFICode_t_1594993928"); // 1
    Leg_23_set.insert("LegCFICode_t_1594993928");
    Leg_23.add_attribute("SecTyp", "CP"); // 1
    Leg_23_set.insert("CP");
    Leg_23.add_attribute("SecSubTyp", "LegSecuritySubType_t_945385592"); // 1
    Leg_23_set.insert("LegSecuritySubType_t_945385592");
    Leg_23.add_attribute("MMY", "1499732016"); // 1
    Leg_23_set.insert("1499732016");
    Leg_23.add_attribute("Mat", "LegMaturityDate_t_304627458"); // 1
    Leg_23_set.insert("LegMaturityDate_t_304627458");
    Leg_23.add_attribute("MatTm", "957766918"); // 1
    Leg_23_set.insert("957766918");
    Leg_23.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1301293094"); // 1
    Leg_23_set.insert("LegCouponPaymentDate_t_1301293094");
    Leg_23.add_attribute("Issued", "LegIssueDate_t_541995724"); // 1
    Leg_23_set.insert("LegIssueDate_t_541995724");
    Leg_23.add_attribute("RepoCollSecTyp", "1972724792"); // 1
    Leg_23_set.insert("1972724792");
    Leg_23.add_attribute("RepoTrm", "243014884"); // 1
    Leg_23_set.insert("243014884");
    Leg_23.add_attribute("RepoRt", "13102492.170000"); // 1
    Leg_23_set.insert("13102492.170000");
    Leg_23.add_attribute("Fctr", "10175833.290000"); // 1
    Leg_23_set.insert("10175833.290000");
    Leg_23.add_attribute("CrdRtg", "LegCreditRating_t_1477606923"); // 1
    Leg_23_set.insert("LegCreditRating_t_1477606923");
    Leg_23.add_attribute("Rgstry", "LegInstrRegistry_t_324364261"); // 1
    Leg_23_set.insert("LegInstrRegistry_t_324364261");
    Leg_23.add_attribute("Ctry", "882621213"); // 1
    Leg_23_set.insert("882621213");
    Leg_23.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_818163692"); // 1
    Leg_23_set.insert("LegStateOrProvinceOfIssue_t_818163692");
    Leg_23.add_attribute("Lcl", "LegLocaleOfIssue_t_1917554609"); // 1
    Leg_23_set.insert("LegLocaleOfIssue_t_1917554609");
    Leg_23.add_attribute("Redeem", "LegRedemptionDate_t_102520019"); // 1
    Leg_23_set.insert("LegRedemptionDate_t_102520019");
    Leg_23.add_attribute("Strk", "13029547.600000"); // 1
    Leg_23_set.insert("13029547.600000");
    Leg_23.add_attribute("StrkCcy", "GBP"); // 1
    Leg_23_set.insert("GBP");
    Leg_23.add_attribute("OptA", "956976452"); // 1
    Leg_23_set.insert("956976452");
    Leg_23.add_attribute("Cmult", "3826853.780000"); // 1
    Leg_23_set.insert("3826853.780000");
    Leg_23.add_attribute("MultTyp", "2"); // 1
    Leg_23_set.insert("2");
    Leg_23.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_23_set.insert("4");
    Leg_23.add_attribute("UOM", "t"); // 1
    Leg_23_set.insert("t");
    Leg_23.add_attribute("UOMQty", "7889912.290000"); // 1
    Leg_23_set.insert("7889912.290000");
    Leg_23.add_attribute("PxUOM", "Gal"); // 1
    Leg_23_set.insert("Gal");
    Leg_23.add_attribute("PxUOMQty", "15753958.550000"); // 1
    Leg_23_set.insert("15753958.550000");
    Leg_23.add_attribute("TmUnit", "Mo"); // 1
    Leg_23_set.insert("Mo");
    Leg_23.add_attribute("ExerStyle", "2"); // 1
    Leg_23_set.insert("2");
    Leg_23.add_attribute("CpnRt", "10229061.350000"); // 1
    Leg_23_set.insert("10229061.350000");
    Leg_23.add_attribute("Exch", "LegSecurityExchange_t_401639560"); // 1
    Leg_23_set.insert("LegSecurityExchange_t_401639560");
    Leg_23.add_attribute("Issr", "LegIssuer_t_2108073274"); // 1
    Leg_23_set.insert("LegIssuer_t_2108073274");
    Leg_23.add_attribute("EncLegIssrLen", "375154503"); // 1
    Leg_23_set.insert("375154503");
    Leg_23.add_attribute("EncLegIssr", "EncodedLegIssuer_t_706267018"); // 1
    Leg_23_set.insert("EncodedLegIssuer_t_706267018");
    Leg_23.add_attribute("Desc", "LegSecurityDesc_t_918356545"); // 1
    Leg_23_set.insert("LegSecurityDesc_t_918356545");
    Leg_23.add_attribute("EncLegSecDescLen", "1676447597"); // 1
    Leg_23_set.insert("1676447597");
    Leg_23.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1248262742"); // 1
    Leg_23_set.insert("EncodedLegSecurityDesc_t_1248262742");
    Leg_23.add_attribute("RatioQty", "7435976.890000"); // 1
    Leg_23_set.insert("7435976.890000");
    Leg_23.add_attribute("Side", "3"); // 1
    Leg_23_set.insert("3");
    Leg_23.add_attribute("Ccy", "JPY"); // 1
    Leg_23_set.insert("JPY");
    Leg_23.add_attribute("Pool", "LegPool_t_1249585757"); // 1
    Leg_23_set.insert("LegPool_t_1249585757");
    Leg_23.add_attribute("Dated", "LegDatedDate_t_735392573"); // 1
    Leg_23_set.insert("LegDatedDate_t_735392573");
    Leg_23.add_attribute("CSetMo", "496318583"); // 1
    Leg_23_set.insert("496318583");
    Leg_23.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2067749449"); // 1
    Leg_23_set.insert("LegInterestAccrualDate_t_2067749449");
    Leg_23.add_attribute("PutCall", "505463534"); // 1
    Leg_23_set.insert("505463534");
    Leg_23.add_attribute("LegOptionRatio", "5988386.030000"); // 1
    Leg_23_set.insert("5988386.030000");
    Leg_23.add_attribute("Px", "12232205.620000"); // 1
    Leg_23_set.insert("12232205.620000");
    all_values.push_back(Leg_23_set);
    all_compo_names.insert("Leg_23_set");

    {
      xml_element LegAID_23{"LegAID"};
      multiset<string> LegAID_23_set;
      LegAID_23.add_attribute("SecAltID", "LegSecurityAltID_t_172638687"); // 2
      LegAID_23_set.insert("LegSecurityAltID_t_172638687");
      LegAID_23.add_attribute("SecAltIDSrc", "8"); // 2
      LegAID_23_set.insert("8");
      all_values.push_back(LegAID_23_set);
      all_compo_names.insert("LegAID_23_set");

      Leg_23.add_element(LegAID_23);
    }
    elt.add_element(Leg_23);
  } // end Leg
  { // Leg
    xml_element Leg_24{"Leg"};
    multiset<string> Leg_24_set;
    Leg_24.add_attribute("Sym", "LegSymbol_t_32713366"); // 1
    Leg_24_set.insert("LegSymbol_t_32713366");
    Leg_24.add_attribute("Sfx", "CD"); // 1
    Leg_24_set.insert("CD");
    Leg_24.add_attribute("ID", "LegSecurityID_t_185273419"); // 1
    Leg_24_set.insert("LegSecurityID_t_185273419");
    Leg_24.add_attribute("Src", "I"); // 1
    Leg_24_set.insert("I");
    Leg_24.add_attribute("Prod", "13"); // 1
    Leg_24_set.insert("13");
    Leg_24.add_attribute("CFI", "LegCFICode_t_974264648"); // 1
    Leg_24_set.insert("LegCFICode_t_974264648");
    Leg_24.add_attribute("SecTyp", "AN"); // 1
    Leg_24_set.insert("AN");
    Leg_24.add_attribute("SecSubTyp", "LegSecuritySubType_t_1893908248"); // 1
    Leg_24_set.insert("LegSecuritySubType_t_1893908248");
    Leg_24.add_attribute("MMY", "2120207241"); // 1
    Leg_24_set.insert("2120207241");
    Leg_24.add_attribute("Mat", "LegMaturityDate_t_1981412749"); // 1
    Leg_24_set.insert("LegMaturityDate_t_1981412749");
    Leg_24.add_attribute("MatTm", "769330735"); // 1
    Leg_24_set.insert("769330735");
    Leg_24.add_attribute("CpnPmt", "LegCouponPaymentDate_t_374363153"); // 1
    Leg_24_set.insert("LegCouponPaymentDate_t_374363153");
    Leg_24.add_attribute("Issued", "LegIssueDate_t_1942002375"); // 1
    Leg_24_set.insert("LegIssueDate_t_1942002375");
    Leg_24.add_attribute("RepoCollSecTyp", "1144485238"); // 1
    Leg_24_set.insert("1144485238");
    Leg_24.add_attribute("RepoTrm", "1080630171"); // 1
    Leg_24_set.insert("1080630171");
    Leg_24.add_attribute("RepoRt", "7128752.720000"); // 1
    Leg_24_set.insert("7128752.720000");
    Leg_24.add_attribute("Fctr", "6734491.870000"); // 1
    Leg_24_set.insert("6734491.870000");
    Leg_24.add_attribute("CrdRtg", "LegCreditRating_t_181409265"); // 1
    Leg_24_set.insert("LegCreditRating_t_181409265");
    Leg_24.add_attribute("Rgstry", "LegInstrRegistry_t_1456472961"); // 1
    Leg_24_set.insert("LegInstrRegistry_t_1456472961");
    Leg_24.add_attribute("Ctry", "445428021"); // 1
    Leg_24_set.insert("445428021");
    Leg_24.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_592437577"); // 1
    Leg_24_set.insert("LegStateOrProvinceOfIssue_t_592437577");
    Leg_24.add_attribute("Lcl", "LegLocaleOfIssue_t_1070170332"); // 1
    Leg_24_set.insert("LegLocaleOfIssue_t_1070170332");
    Leg_24.add_attribute("Redeem", "LegRedemptionDate_t_1695013778"); // 1
    Leg_24_set.insert("LegRedemptionDate_t_1695013778");
    Leg_24.add_attribute("Strk", "13278301.500000"); // 1
    Leg_24_set.insert("13278301.500000");
    Leg_24.add_attribute("StrkCcy", "GBP"); // 1
    Leg_24_set.insert("GBP");
    Leg_24.add_attribute("OptA", "1833293684"); // 1
    Leg_24_set.insert("1833293684");
    Leg_24.add_attribute("Cmult", "178438.700000"); // 1
    Leg_24_set.insert("178438.700000");
    Leg_24.add_attribute("MultTyp", "1"); // 1
    Leg_24_set.insert("1");
    Leg_24.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_24_set.insert("2");
    Leg_24.add_attribute("UOM", "tn"); // 1
    Leg_24_set.insert("tn");
    Leg_24.add_attribute("UOMQty", "7237298.600000"); // 1
    Leg_24_set.insert("7237298.600000");
    Leg_24.add_attribute("PxUOM", "Bbl"); // 1
    Leg_24_set.insert("Bbl");
    Leg_24.add_attribute("PxUOMQty", "2854911.260000"); // 1
    Leg_24_set.insert("2854911.260000");
    Leg_24.add_attribute("TmUnit", "Yr"); // 1
    Leg_24_set.insert("Yr");
    Leg_24.add_attribute("ExerStyle", "0"); // 1
    Leg_24_set.insert("0");
    Leg_24.add_attribute("CpnRt", "12597557.740000"); // 1
    Leg_24_set.insert("12597557.740000");
    Leg_24.add_attribute("Exch", "LegSecurityExchange_t_1627021162"); // 1
    Leg_24_set.insert("LegSecurityExchange_t_1627021162");
    Leg_24.add_attribute("Issr", "LegIssuer_t_478709783"); // 1
    Leg_24_set.insert("LegIssuer_t_478709783");
    Leg_24.add_attribute("EncLegIssrLen", "1232479367"); // 1
    Leg_24_set.insert("1232479367");
    Leg_24.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1460950263"); // 1
    Leg_24_set.insert("EncodedLegIssuer_t_1460950263");
    Leg_24.add_attribute("Desc", "LegSecurityDesc_t_1248040518"); // 1
    Leg_24_set.insert("LegSecurityDesc_t_1248040518");
    Leg_24.add_attribute("EncLegSecDescLen", "1606842520"); // 1
    Leg_24_set.insert("1606842520");
    Leg_24.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1255468991"); // 1
    Leg_24_set.insert("EncodedLegSecurityDesc_t_1255468991");
    Leg_24.add_attribute("RatioQty", "2450421.080000"); // 1
    Leg_24_set.insert("2450421.080000");
    Leg_24.add_attribute("Side", "4"); // 1
    Leg_24_set.insert("4");
    Leg_24.add_attribute("Ccy", "CHF"); // 1
    Leg_24_set.insert("CHF");
    Leg_24.add_attribute("Pool", "LegPool_t_721398309"); // 1
    Leg_24_set.insert("LegPool_t_721398309");
    Leg_24.add_attribute("Dated", "LegDatedDate_t_1277333577"); // 1
    Leg_24_set.insert("LegDatedDate_t_1277333577");
    Leg_24.add_attribute("CSetMo", "1363919317"); // 1
    Leg_24_set.insert("1363919317");
    Leg_24.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1313835886"); // 1
    Leg_24_set.insert("LegInterestAccrualDate_t_1313835886");
    Leg_24.add_attribute("PutCall", "200020261"); // 1
    Leg_24_set.insert("200020261");
    Leg_24.add_attribute("LegOptionRatio", "9114494.470000"); // 1
    Leg_24_set.insert("9114494.470000");
    Leg_24.add_attribute("Px", "4941823.890000"); // 1
    Leg_24_set.insert("4941823.890000");
    all_values.push_back(Leg_24_set);
    all_compo_names.insert("Leg_24_set");

    {
      xml_element LegAID_24{"LegAID"};
      multiset<string> LegAID_24_set;
      LegAID_24.add_attribute("SecAltID", "LegSecurityAltID_t_1766509176"); // 2
      LegAID_24_set.insert("LegSecurityAltID_t_1766509176");
      LegAID_24.add_attribute("SecAltIDSrc", "8"); // 2
      LegAID_24_set.insert("8");
      all_values.push_back(LegAID_24_set);
      all_compo_names.insert("LegAID_24_set");

      Leg_24.add_element(LegAID_24);
    }
    elt.add_element(Leg_24);
  } // end Leg
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
