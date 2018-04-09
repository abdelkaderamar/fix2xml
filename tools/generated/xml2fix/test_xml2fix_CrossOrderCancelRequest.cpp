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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CrssOrdCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1775836257"); // 0
  CrossOrderCancelRequest_message_t_0.insert("OrderID_t_1775836257");
  elt.add_attribute("ID", "CrossID_t_928774818"); // 0
  CrossOrderCancelRequest_message_t_0.insert("CrossID_t_928774818");
  elt.add_attribute("OrigID", "OrigCrossID_t_1243061654"); // 0
  CrossOrderCancelRequest_message_t_0.insert("OrigCrossID_t_1243061654");
  elt.add_attribute("HstCxID", "HostCrossID_t_1904579361"); // 0
  CrossOrderCancelRequest_message_t_0.insert("HostCrossID_t_1904579361");
  elt.add_attribute("Typ", "2"); // 0
  CrossOrderCancelRequest_message_t_0.insert("2");
  elt.add_attribute("Priorty", "1"); // 0
  CrossOrderCancelRequest_message_t_0.insert("1");
  elt.add_attribute("TxnTm", "TransactTime_t_566649574"); // 0
  CrossOrderCancelRequest_message_t_0.insert("TransactTime_t_566649574");
  all_values.push_back(CrossOrderCancelRequest_message_t_0);
  all_compo_names.insert("CrossOrderCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_25{"Hdr"};
    multiset<string> Hdr_25_set;
    Hdr_25.add_attribute("SeqNum", "1015068593"); // 1
    Hdr_25_set.insert("1015068593");
    Hdr_25.add_attribute("SID", "SenderCompID_t_1522409939"); // 1
    Hdr_25_set.insert("SenderCompID_t_1522409939");
    Hdr_25.add_attribute("TID", "TargetCompID_t_1336024931"); // 1
    Hdr_25_set.insert("TargetCompID_t_1336024931");
    Hdr_25.add_attribute("OBID", "OnBehalfOfCompID_t_1298761583"); // 1
    Hdr_25_set.insert("OnBehalfOfCompID_t_1298761583");
    Hdr_25.add_attribute("D2ID", "DeliverToCompID_t_1925573914"); // 1
    Hdr_25_set.insert("DeliverToCompID_t_1925573914");
    Hdr_25.add_attribute("SSub", "SenderSubID_t_12647721"); // 1
    Hdr_25_set.insert("SenderSubID_t_12647721");
    Hdr_25.add_attribute("SLoc", "SenderLocationID_t_18406664"); // 1
    Hdr_25_set.insert("SenderLocationID_t_18406664");
    Hdr_25.add_attribute("TSub", "TargetSubID_t_1372053046"); // 1
    Hdr_25_set.insert("TargetSubID_t_1372053046");
    Hdr_25.add_attribute("TLoc", "TargetLocationID_t_45510871"); // 1
    Hdr_25_set.insert("TargetLocationID_t_45510871");
    Hdr_25.add_attribute("OBSub", "OnBehalfOfSubID_t_914126452"); // 1
    Hdr_25_set.insert("OnBehalfOfSubID_t_914126452");
    Hdr_25.add_attribute("OBLoc", "OnBehalfOfLocationID_t_736036542"); // 1
    Hdr_25_set.insert("OnBehalfOfLocationID_t_736036542");
    Hdr_25.add_attribute("D2Sub", "DeliverToSubID_t_643861476"); // 1
    Hdr_25_set.insert("DeliverToSubID_t_643861476");
    Hdr_25.add_attribute("D2Loc", "DeliverToLocationID_t_1185663807"); // 1
    Hdr_25_set.insert("DeliverToLocationID_t_1185663807");
    Hdr_25.add_attribute("PosDup", "N"); // 1
    Hdr_25_set.insert("N");
    Hdr_25.add_attribute("PosRsnd", "Y"); // 1
    Hdr_25_set.insert("Y");
    Hdr_25.add_attribute("Snt", "SendingTime_t_2068585497"); // 1
    Hdr_25_set.insert("SendingTime_t_2068585497");
    Hdr_25.add_attribute("OrigSnt", "OrigSendingTime_t_532727131"); // 1
    Hdr_25_set.insert("OrigSendingTime_t_532727131");
    Hdr_25.add_attribute("MsgEncd", "MessageEncoding_t_2108757087"); // 1
    Hdr_25_set.insert("MessageEncoding_t_2108757087");
    all_values.push_back(Hdr_25_set);
    all_compo_names.insert("Hdr_25_set");

    {
      xml_element Hop_25{"Hop"};
      multiset<string> Hop_25_set;
      Hop_25.add_attribute("ID", "HopCompID_t_885604303"); // 2
      Hop_25_set.insert("HopCompID_t_885604303");
      Hop_25.add_attribute("Ref", "1317104310"); // 2
      Hop_25_set.insert("1317104310");
      Hop_25.add_attribute("Snt", "HopSendingTime_t_2008004168"); // 2
      Hop_25_set.insert("HopSendingTime_t_2008004168");
      all_values.push_back(Hop_25_set);
      all_compo_names.insert("Hop_25_set");

      Hdr_25.add_element(Hop_25);
    }
    elt.add_element(Hdr_25);
  } // end Hdr
  { // Pty
    xml_element Pty_113{"Pty"};
    multiset<string> Pty_113_set;
    Pty_113.add_attribute("ID", "RootPartyID_t_198475231"); // 1
    Pty_113_set.insert("RootPartyID_t_198475231");
    Pty_113.add_attribute("Src", "7"); // 1
    Pty_113_set.insert("7");
    Pty_113.add_attribute("R", "12"); // 1
    Pty_113_set.insert("12");
    all_values.push_back(Pty_113_set);
    all_compo_names.insert("Pty_113_set");

    {
      xml_element Sub_113{"Sub"};
      multiset<string> Sub_113_set;
      Sub_113.add_attribute("ID", "RootPartySubID_t_1127250049"); // 2
      Sub_113_set.insert("RootPartySubID_t_1127250049");
      Sub_113.add_attribute("Typ", "5"); // 2
      Sub_113_set.insert("5");
      all_values.push_back(Sub_113_set);
      all_compo_names.insert("Sub_113_set");

      Pty_113.add_element(Sub_113);
    }
    elt.add_element(Pty_113);
  } // end Pty
  { // SideCrossCxl
    xml_element SideCrossCxl_0{"SideCrossCxl"};
    multiset<string> SideCrossCxl_0_set;
    SideCrossCxl_0.add_attribute("Side", "F"); // 1
    SideCrossCxl_0_set.insert("F");
    SideCrossCxl_0.add_attribute("OrigClOrdID", "OrigClOrdID_t_1680433222"); // 1
    SideCrossCxl_0_set.insert("OrigClOrdID_t_1680433222");
    SideCrossCxl_0.add_attribute("ClOrdID", "ClOrdID_t_317488339"); // 1
    SideCrossCxl_0_set.insert("ClOrdID_t_317488339");
    SideCrossCxl_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1959354752"); // 1
    SideCrossCxl_0_set.insert("SecondaryClOrdID_t_1959354752");
    SideCrossCxl_0.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1055359513"); // 1
    SideCrossCxl_0_set.insert("ClOrdLinkID_t_1055359513");
    SideCrossCxl_0.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1653513270"); // 1
    SideCrossCxl_0_set.insert("OrigOrdModTime_t_1653513270");
    SideCrossCxl_0.add_attribute("OrignDt", "TradeOriginationDate_t_1110632687"); // 1
    SideCrossCxl_0_set.insert("TradeOriginationDate_t_1110632687");
    SideCrossCxl_0.add_attribute("TrdDt", "TradeDate_t_833449779"); // 1
    SideCrossCxl_0_set.insert("TradeDate_t_833449779");
    SideCrossCxl_0.add_attribute("ComplianceID", "ComplianceID_t_1666160992"); // 1
    SideCrossCxl_0_set.insert("ComplianceID_t_1666160992");
    SideCrossCxl_0.add_attribute("Txt", "Text_t_1129039352"); // 1
    SideCrossCxl_0_set.insert("Text_t_1129039352");
    SideCrossCxl_0.add_attribute("EncTxtLen", "58019178"); // 1
    SideCrossCxl_0_set.insert("58019178");
    SideCrossCxl_0.add_attribute("EncTxt", "EncodedText_t_1711671863"); // 1
    SideCrossCxl_0_set.insert("EncodedText_t_1711671863");
    all_values.push_back(SideCrossCxl_0_set);
    all_compo_names.insert("SideCrossCxl_0_set");

    {
      xml_element Pty_114{"Pty"};
      multiset<string> Pty_114_set;
      Pty_114.add_attribute("ID", "PartyID_t_2043165804"); // 2
      Pty_114_set.insert("PartyID_t_2043165804");
      Pty_114.add_attribute("Src", "D"); // 2
      Pty_114_set.insert("D");
      Pty_114.add_attribute("R", "12"); // 2
      Pty_114_set.insert("12");
      all_values.push_back(Pty_114_set);
      all_compo_names.insert("Pty_114_set");

      {
        xml_element Sub_114{"Sub"};
        multiset<string> Sub_114_set;
        Sub_114.add_attribute("ID", "PartySubID_t_1081345964"); // 3
        Sub_114_set.insert("PartySubID_t_1081345964");
        Sub_114.add_attribute("Typ", "15"); // 3
        Sub_114_set.insert("15");
        all_values.push_back(Sub_114_set);
        all_compo_names.insert("Sub_114_set");

        Pty_114.add_element(Sub_114);
      }
      SideCrossCxl_0.add_element(Pty_114);
    }
    {
      xml_element OrdQty_3{"OrdQty"};
      multiset<string> OrdQty_3_set;
      OrdQty_3.add_attribute("Qty", "5163505.580000"); // 2
      OrdQty_3_set.insert("5163505.580000");
      OrdQty_3.add_attribute("Cash", "10024478.130000"); // 2
      OrdQty_3_set.insert("10024478.130000");
      OrdQty_3.add_attribute("Pct", "7082145.370000"); // 2
      OrdQty_3_set.insert("7082145.370000");
      OrdQty_3.add_attribute("RndDir", "1"); // 2
      OrdQty_3_set.insert("1");
      OrdQty_3.add_attribute("RndMod", "18880521.160000"); // 2
      OrdQty_3_set.insert("18880521.160000");
      all_values.push_back(OrdQty_3_set);
      all_compo_names.insert("OrdQty_3_set");

      SideCrossCxl_0.add_element(OrdQty_3);
    }
    elt.add_element(SideCrossCxl_0);
  } // end SideCrossCxl
  { // SideCrossCxl
    xml_element SideCrossCxl_1{"SideCrossCxl"};
    multiset<string> SideCrossCxl_1_set;
    SideCrossCxl_1.add_attribute("Side", "G"); // 1
    SideCrossCxl_1_set.insert("G");
    SideCrossCxl_1.add_attribute("OrigClOrdID", "OrigClOrdID_t_338144518"); // 1
    SideCrossCxl_1_set.insert("OrigClOrdID_t_338144518");
    SideCrossCxl_1.add_attribute("ClOrdID", "ClOrdID_t_105958911"); // 1
    SideCrossCxl_1_set.insert("ClOrdID_t_105958911");
    SideCrossCxl_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_76310431"); // 1
    SideCrossCxl_1_set.insert("SecondaryClOrdID_t_76310431");
    SideCrossCxl_1.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_775498391"); // 1
    SideCrossCxl_1_set.insert("ClOrdLinkID_t_775498391");
    SideCrossCxl_1.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_99701962"); // 1
    SideCrossCxl_1_set.insert("OrigOrdModTime_t_99701962");
    SideCrossCxl_1.add_attribute("OrignDt", "TradeOriginationDate_t_1203560480"); // 1
    SideCrossCxl_1_set.insert("TradeOriginationDate_t_1203560480");
    SideCrossCxl_1.add_attribute("TrdDt", "TradeDate_t_308430270"); // 1
    SideCrossCxl_1_set.insert("TradeDate_t_308430270");
    SideCrossCxl_1.add_attribute("ComplianceID", "ComplianceID_t_1998024375"); // 1
    SideCrossCxl_1_set.insert("ComplianceID_t_1998024375");
    SideCrossCxl_1.add_attribute("Txt", "Text_t_362991"); // 1
    SideCrossCxl_1_set.insert("Text_t_362991");
    SideCrossCxl_1.add_attribute("EncTxtLen", "1988863492"); // 1
    SideCrossCxl_1_set.insert("1988863492");
    SideCrossCxl_1.add_attribute("EncTxt", "EncodedText_t_168029066"); // 1
    SideCrossCxl_1_set.insert("EncodedText_t_168029066");
    all_values.push_back(SideCrossCxl_1_set);
    all_compo_names.insert("SideCrossCxl_1_set");

    {
      xml_element Pty_115{"Pty"};
      multiset<string> Pty_115_set;
      Pty_115.add_attribute("ID", "PartyID_t_1959717743"); // 2
      Pty_115_set.insert("PartyID_t_1959717743");
      Pty_115.add_attribute("Src", "4"); // 2
      Pty_115_set.insert("4");
      Pty_115.add_attribute("R", "71"); // 2
      Pty_115_set.insert("71");
      all_values.push_back(Pty_115_set);
      all_compo_names.insert("Pty_115_set");

      {
        xml_element Sub_115{"Sub"};
        multiset<string> Sub_115_set;
        Sub_115.add_attribute("ID", "PartySubID_t_922866782"); // 3
        Sub_115_set.insert("PartySubID_t_922866782");
        Sub_115.add_attribute("Typ", "29"); // 3
        Sub_115_set.insert("29");
        all_values.push_back(Sub_115_set);
        all_compo_names.insert("Sub_115_set");

        Pty_115.add_element(Sub_115);
      }
      SideCrossCxl_1.add_element(Pty_115);
    }
    {
      xml_element OrdQty_4{"OrdQty"};
      multiset<string> OrdQty_4_set;
      OrdQty_4.add_attribute("Qty", "13402196.810000"); // 2
      OrdQty_4_set.insert("13402196.810000");
      OrdQty_4.add_attribute("Cash", "20519061.340000"); // 2
      OrdQty_4_set.insert("20519061.340000");
      OrdQty_4.add_attribute("Pct", "17882083.150000"); // 2
      OrdQty_4_set.insert("17882083.150000");
      OrdQty_4.add_attribute("RndDir", "2"); // 2
      OrdQty_4_set.insert("2");
      OrdQty_4.add_attribute("RndMod", "19475882.910000"); // 2
      OrdQty_4_set.insert("19475882.910000");
      all_values.push_back(OrdQty_4_set);
      all_compo_names.insert("OrdQty_4_set");

      SideCrossCxl_1.add_element(OrdQty_4);
    }
    elt.add_element(SideCrossCxl_1);
  } // end SideCrossCxl
  { // SideCrossCxl
    xml_element SideCrossCxl_2{"SideCrossCxl"};
    multiset<string> SideCrossCxl_2_set;
    SideCrossCxl_2.add_attribute("Side", "4"); // 1
    SideCrossCxl_2_set.insert("4");
    SideCrossCxl_2.add_attribute("OrigClOrdID", "OrigClOrdID_t_1112457588"); // 1
    SideCrossCxl_2_set.insert("OrigClOrdID_t_1112457588");
    SideCrossCxl_2.add_attribute("ClOrdID", "ClOrdID_t_881450607"); // 1
    SideCrossCxl_2_set.insert("ClOrdID_t_881450607");
    SideCrossCxl_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_610267793"); // 1
    SideCrossCxl_2_set.insert("SecondaryClOrdID_t_610267793");
    SideCrossCxl_2.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1628808146"); // 1
    SideCrossCxl_2_set.insert("ClOrdLinkID_t_1628808146");
    SideCrossCxl_2.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1883898420"); // 1
    SideCrossCxl_2_set.insert("OrigOrdModTime_t_1883898420");
    SideCrossCxl_2.add_attribute("OrignDt", "TradeOriginationDate_t_1318482331"); // 1
    SideCrossCxl_2_set.insert("TradeOriginationDate_t_1318482331");
    SideCrossCxl_2.add_attribute("TrdDt", "TradeDate_t_2106432144"); // 1
    SideCrossCxl_2_set.insert("TradeDate_t_2106432144");
    SideCrossCxl_2.add_attribute("ComplianceID", "ComplianceID_t_1624466889"); // 1
    SideCrossCxl_2_set.insert("ComplianceID_t_1624466889");
    SideCrossCxl_2.add_attribute("Txt", "Text_t_1196317530"); // 1
    SideCrossCxl_2_set.insert("Text_t_1196317530");
    SideCrossCxl_2.add_attribute("EncTxtLen", "297093015"); // 1
    SideCrossCxl_2_set.insert("297093015");
    SideCrossCxl_2.add_attribute("EncTxt", "EncodedText_t_1730425800"); // 1
    SideCrossCxl_2_set.insert("EncodedText_t_1730425800");
    all_values.push_back(SideCrossCxl_2_set);
    all_compo_names.insert("SideCrossCxl_2_set");

    {
      xml_element Pty_116{"Pty"};
      multiset<string> Pty_116_set;
      Pty_116.add_attribute("ID", "PartyID_t_1272627961"); // 2
      Pty_116_set.insert("PartyID_t_1272627961");
      Pty_116.add_attribute("Src", "9"); // 2
      Pty_116_set.insert("9");
      Pty_116.add_attribute("R", "30"); // 2
      Pty_116_set.insert("30");
      all_values.push_back(Pty_116_set);
      all_compo_names.insert("Pty_116_set");

      {
        xml_element Sub_116{"Sub"};
        multiset<string> Sub_116_set;
        Sub_116.add_attribute("ID", "PartySubID_t_328704794"); // 3
        Sub_116_set.insert("PartySubID_t_328704794");
        Sub_116.add_attribute("Typ", "7"); // 3
        Sub_116_set.insert("7");
        all_values.push_back(Sub_116_set);
        all_compo_names.insert("Sub_116_set");

        Pty_116.add_element(Sub_116);
      }
      SideCrossCxl_2.add_element(Pty_116);
    }
    {
      xml_element OrdQty_5{"OrdQty"};
      multiset<string> OrdQty_5_set;
      OrdQty_5.add_attribute("Qty", "16806684.900000"); // 2
      OrdQty_5_set.insert("16806684.900000");
      OrdQty_5.add_attribute("Cash", "3290677.850000"); // 2
      OrdQty_5_set.insert("3290677.850000");
      OrdQty_5.add_attribute("Pct", "12224015.200000"); // 2
      OrdQty_5_set.insert("12224015.200000");
      OrdQty_5.add_attribute("RndDir", "2"); // 2
      OrdQty_5_set.insert("2");
      OrdQty_5.add_attribute("RndMod", "1413018.800000"); // 2
      OrdQty_5_set.insert("1413018.800000");
      all_values.push_back(OrdQty_5_set);
      all_compo_names.insert("OrdQty_5_set");

      SideCrossCxl_2.add_element(OrdQty_5);
    }
    elt.add_element(SideCrossCxl_2);
  } // end SideCrossCxl
  { // Instrmt
    xml_element Instrmt_15{"Instrmt"};
    multiset<string> Instrmt_15_set;
    Instrmt_15.add_attribute("Sym", "Symbol_t_2119140877"); // 1
    Instrmt_15_set.insert("Symbol_t_2119140877");
    Instrmt_15.add_attribute("Sfx", "WI"); // 1
    Instrmt_15_set.insert("WI");
    Instrmt_15.add_attribute("ID", "SecurityID_t_1064168662"); // 1
    Instrmt_15_set.insert("SecurityID_t_1064168662");
    Instrmt_15.add_attribute("Src", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("Prod", "4"); // 1
    Instrmt_15_set.insert("4");
    Instrmt_15.add_attribute("ProdCmplx", "ProductComplex_t_968591149"); // 1
    Instrmt_15_set.insert("ProductComplex_t_968591149");
    Instrmt_15.add_attribute("SecGrp", "SecurityGroup_t_1342571033"); // 1
    Instrmt_15_set.insert("SecurityGroup_t_1342571033");
    Instrmt_15.add_attribute("CFI", "CFICode_t_1619900175"); // 1
    Instrmt_15_set.insert("CFICode_t_1619900175");
    Instrmt_15.add_attribute("SecTyp", "COFO"); // 1
    Instrmt_15_set.insert("COFO");
    Instrmt_15.add_attribute("SubTyp", "SecuritySubType_t_1777351420"); // 1
    Instrmt_15_set.insert("SecuritySubType_t_1777351420");
    Instrmt_15.add_attribute("MMY", "584874115"); // 1
    Instrmt_15_set.insert("584874115");
    Instrmt_15.add_attribute("MatDt", "MaturityDate_t_1650146399"); // 1
    Instrmt_15_set.insert("MaturityDate_t_1650146399");
    Instrmt_15.add_attribute("MatTm", "240135566"); // 1
    Instrmt_15_set.insert("240135566");
    Instrmt_15.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_66198613"); // 1
    Instrmt_15_set.insert("SettleOnOpenFlag_t_66198613");
    Instrmt_15.add_attribute("AsgnMeth", "1386561171"); // 1
    Instrmt_15_set.insert("1386561171");
    Instrmt_15.add_attribute("Status", "2"); // 1
    Instrmt_15_set.insert("2");
    Instrmt_15.add_attribute("CpnPmt", "CouponPaymentDate_t_25147110"); // 1
    Instrmt_15_set.insert("CouponPaymentDate_t_25147110");
    Instrmt_15.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_15_set.insert("FR");
    Instrmt_15.add_attribute("Snrty", "SR"); // 1
    Instrmt_15_set.insert("SR");
    Instrmt_15.add_attribute("NotlPctOut", "3222401.250000"); // 1
    Instrmt_15_set.insert("3222401.250000");
    Instrmt_15.add_attribute("OrigNotlPctOut", "4464865.640000"); // 1
    Instrmt_15_set.insert("4464865.640000");
    Instrmt_15.add_attribute("AttchPnt", "18800797.410000"); // 1
    Instrmt_15_set.insert("18800797.410000");
    Instrmt_15.add_attribute("DetchPnt", "13948315.310000"); // 1
    Instrmt_15_set.insert("13948315.310000");
    Instrmt_15.add_attribute("Issued", "IssueDate_t_129130679"); // 1
    Instrmt_15_set.insert("IssueDate_t_129130679");
    Instrmt_15.add_attribute("RepoCollSecTyp", "61300887"); // 1
    Instrmt_15_set.insert("61300887");
    Instrmt_15.add_attribute("RepoTrm", "628369559"); // 1
    Instrmt_15_set.insert("628369559");
    Instrmt_15.add_attribute("RepoRt", "18097991.690000"); // 1
    Instrmt_15_set.insert("18097991.690000");
    Instrmt_15.add_attribute("Fctr", "3903686.720000"); // 1
    Instrmt_15_set.insert("3903686.720000");
    Instrmt_15.add_attribute("CrdRtg", "CreditRating_t_1850771079"); // 1
    Instrmt_15_set.insert("CreditRating_t_1850771079");
    Instrmt_15.add_attribute("Rgstry", "InstrRegistry_t_1511013077"); // 1
    Instrmt_15_set.insert("InstrRegistry_t_1511013077");
    Instrmt_15.add_attribute("IssuCtry", "531670552"); // 1
    Instrmt_15_set.insert("531670552");
    Instrmt_15.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1822428308"); // 1
    Instrmt_15_set.insert("StateOrProvinceOfIssue_t_1822428308");
    Instrmt_15.add_attribute("Lcl", "LocaleOfIssue_t_886285675"); // 1
    Instrmt_15_set.insert("LocaleOfIssue_t_886285675");
    Instrmt_15.add_attribute("Redeem", "RedemptionDate_t_1595839214"); // 1
    Instrmt_15_set.insert("RedemptionDate_t_1595839214");
    Instrmt_15.add_attribute("StrkPx", "13767910.270000"); // 1
    Instrmt_15_set.insert("13767910.270000");
    Instrmt_15.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_15_set.insert("EUR");
    Instrmt_15.add_attribute("StrkMult", "5718784.120000"); // 1
    Instrmt_15_set.insert("5718784.120000");
    Instrmt_15.add_attribute("StrkValu", "10741944.800000"); // 1
    Instrmt_15_set.insert("10741944.800000");
    Instrmt_15.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_15_set.insert("4");
    Instrmt_15.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("StrkPxBndryPrcsn", "16590685.950000"); // 1
    Instrmt_15_set.insert("16590685.950000");
    Instrmt_15.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_15_set.insert("3");
    Instrmt_15.add_attribute("OptAt", "441881751"); // 1
    Instrmt_15_set.insert("441881751");
    Instrmt_15.add_attribute("Mult", "17252672.090000"); // 1
    Instrmt_15_set.insert("17252672.090000");
    Instrmt_15.add_attribute("MultTyp", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_15_set.insert("3");
    Instrmt_15.add_attribute("MinPxIncr", "17504143.190000"); // 1
    Instrmt_15_set.insert("17504143.190000");
    Instrmt_15.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_790927194"); // 1
    Instrmt_15_set.insert("MinPriceIncrementAmount_t_790927194");
    Instrmt_15.add_attribute("UOM", "tn"); // 1
    Instrmt_15_set.insert("tn");
    Instrmt_15.add_attribute("UOMQty", "20726544.440000"); // 1
    Instrmt_15_set.insert("20726544.440000");
    Instrmt_15.add_attribute("PxUOM", "Bcf"); // 1
    Instrmt_15_set.insert("Bcf");
    Instrmt_15.add_attribute("PxUOMQty", "1930638.720000"); // 1
    Instrmt_15_set.insert("1930638.720000");
    Instrmt_15.add_attribute("SettlMeth", "P"); // 1
    Instrmt_15_set.insert("P");
    Instrmt_15.add_attribute("ExerStyle", "2"); // 1
    Instrmt_15_set.insert("2");
    Instrmt_15.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("OptPayAmt", "OptPayoutAmount_t_1948371886"); // 1
    Instrmt_15_set.insert("OptPayoutAmount_t_1948371886");
    Instrmt_15.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_15_set.insert("PCTPAR");
    Instrmt_15.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_15_set.insert("FUT");
    Instrmt_15.add_attribute("ListMeth", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("CapPx", "3923893.880000"); // 1
    Instrmt_15_set.insert("3923893.880000");
    Instrmt_15.add_attribute("FlrPx", "11764039.830000"); // 1
    Instrmt_15_set.insert("11764039.830000");
    Instrmt_15.add_attribute("PutCall", "1"); // 1
    Instrmt_15_set.insert("1");
    Instrmt_15.add_attribute("FlexInd", "false"); // 1
    Instrmt_15_set.insert("false");
    Instrmt_15.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_15_set.insert("true");
    Instrmt_15.add_attribute("TmUnit", "S"); // 1
    Instrmt_15_set.insert("S");
    Instrmt_15.add_attribute("CpnRt", "7329693.690000"); // 1
    Instrmt_15_set.insert("7329693.690000");
    Instrmt_15.add_attribute("Exch", "SecurityExchange_t_1041706265"); // 1
    Instrmt_15_set.insert("SecurityExchange_t_1041706265");
    Instrmt_15.add_attribute("PosLmt", "1127789769"); // 1
    Instrmt_15_set.insert("1127789769");
    Instrmt_15.add_attribute("NTPosLmt", "1807163849"); // 1
    Instrmt_15_set.insert("1807163849");
    Instrmt_15.add_attribute("Issr", "Issuer_t_79865125"); // 1
    Instrmt_15_set.insert("Issuer_t_79865125");
    Instrmt_15.add_attribute("EncIssrLen", "1329535954"); // 1
    Instrmt_15_set.insert("1329535954");
    Instrmt_15.add_attribute("EncIssr", "EncodedIssuer_t_1318748797"); // 1
    Instrmt_15_set.insert("EncodedIssuer_t_1318748797");
    Instrmt_15.add_attribute("Desc", "SecurityDesc_t_768170383"); // 1
    Instrmt_15_set.insert("SecurityDesc_t_768170383");
    Instrmt_15.add_attribute("EncSecDescLen", "1771417705"); // 1
    Instrmt_15_set.insert("1771417705");
    Instrmt_15.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_896532358"); // 1
    Instrmt_15_set.insert("EncodedSecurityDesc_t_896532358");
    Instrmt_15.add_attribute("Pool", "Pool_t_695553165"); // 1
    Instrmt_15_set.insert("Pool_t_695553165");
    Instrmt_15.add_attribute("CSetMo", "1624433705"); // 1
    Instrmt_15_set.insert("1624433705");
    Instrmt_15.add_attribute("CPPgm", "2"); // 1
    Instrmt_15_set.insert("2");
    Instrmt_15.add_attribute("CPRegT", "CPRegType_t_1486480360"); // 1
    Instrmt_15_set.insert("CPRegType_t_1486480360");
    Instrmt_15.add_attribute("Dated", "DatedDate_t_2084901484"); // 1
    Instrmt_15_set.insert("DatedDate_t_2084901484");
    Instrmt_15.add_attribute("IntAcrl", "InterestAccrualDate_t_424633825"); // 1
    Instrmt_15_set.insert("InterestAccrualDate_t_424633825");
    all_values.push_back(Instrmt_15_set);
    all_compo_names.insert("Instrmt_15_set");

    {
      xml_element AID_15{"AID"};
      multiset<string> AID_15_set;
      AID_15.add_attribute("AltID", "SecurityAltID_t_576410471"); // 2
      AID_15_set.insert("SecurityAltID_t_576410471");
      AID_15.add_attribute("AltIDSrc", "I"); // 2
      AID_15_set.insert("I");
      all_values.push_back(AID_15_set);
      all_compo_names.insert("AID_15_set");

      Instrmt_15.add_element(AID_15);
    }
    {
      xml_element SecXML_15{"SecXML"};
      multiset<string> SecXML_15_set;
      SecXML_15.add_attribute("Schema", "SecurityXMLSchema_t_1744636152"); // 2
      SecXML_15_set.insert("SecurityXMLSchema_t_1744636152");
      all_values.push_back(SecXML_15_set);
      all_compo_names.insert("SecXML_15_set");

      Instrmt_15.add_element(SecXML_15);
    }
    {
      xml_element Evnt_15{"Evnt"};
      multiset<string> Evnt_15_set;
      Evnt_15.add_attribute("EventTyp", "9"); // 2
      Evnt_15_set.insert("9");
      Evnt_15.add_attribute("Dt", "EventDate_t_384846468"); // 2
      Evnt_15_set.insert("EventDate_t_384846468");
      Evnt_15.add_attribute("Tm", "EventTime_t_1545524390"); // 2
      Evnt_15_set.insert("EventTime_t_1545524390");
      Evnt_15.add_attribute("Px", "8243312.200000"); // 2
      Evnt_15_set.insert("8243312.200000");
      Evnt_15.add_attribute("Txt", "EventText_t_1029579900"); // 2
      Evnt_15_set.insert("EventText_t_1029579900");
      all_values.push_back(Evnt_15_set);
      all_compo_names.insert("Evnt_15_set");

      Instrmt_15.add_element(Evnt_15);
    }
    {
      xml_element Pty_117{"Pty"};
      multiset<string> Pty_117_set;
      Pty_117.add_attribute("ID", "InstrumentPartyID_t_1049700059"); // 2
      Pty_117_set.insert("InstrumentPartyID_t_1049700059");
      Pty_117.add_attribute("Src", "7"); // 2
      Pty_117_set.insert("7");
      Pty_117.add_attribute("R", "4"); // 2
      Pty_117_set.insert("4");
      all_values.push_back(Pty_117_set);
      all_compo_names.insert("Pty_117_set");

      {
        xml_element Sub_117{"Sub"};
        multiset<string> Sub_117_set;
        Sub_117.add_attribute("ID", "InstrumentPartySubID_t_228820388"); // 3
        Sub_117_set.insert("InstrumentPartySubID_t_228820388");
        Sub_117.add_attribute("Typ", "4"); // 3
        Sub_117_set.insert("4");
        all_values.push_back(Sub_117_set);
        all_compo_names.insert("Sub_117_set");

        Pty_117.add_element(Sub_117);
      }
      Instrmt_15.add_element(Pty_117);
    }
    {
      xml_element CmplxEvnt_15{"CmplxEvnt"};
      multiset<string> CmplxEvnt_15_set;
      CmplxEvnt_15.add_attribute("Typ", "9"); // 2
      CmplxEvnt_15_set.insert("9");
      CmplxEvnt_15.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_784731745"); // 2
      CmplxEvnt_15_set.insert("ComplexOptPayoutAmount_t_784731745");
      CmplxEvnt_15.add_attribute("Px", "10808813.930000"); // 2
      CmplxEvnt_15_set.insert("10808813.930000");
      CmplxEvnt_15.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_15_set.insert("2");
      CmplxEvnt_15.add_attribute("PxBndryPrcsn", "19125215.140000"); // 2
      CmplxEvnt_15_set.insert("19125215.140000");
      CmplxEvnt_15.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_15_set.insert("3");
      CmplxEvnt_15.add_attribute("Cond", "1"); // 2
      CmplxEvnt_15_set.insert("1");
      all_values.push_back(CmplxEvnt_15_set);
      all_compo_names.insert("CmplxEvnt_15_set");

      {
        xml_element EvntDts_15{"EvntDts"};
        multiset<string> EvntDts_15_set;
        EvntDts_15.add_attribute("StartDt", "ComplexEventStartDate_t_1094573820"); // 3
        EvntDts_15_set.insert("ComplexEventStartDate_t_1094573820");
        EvntDts_15.add_attribute("EndDt", "ComplexEventEndDate_t_2059310391"); // 3
        EvntDts_15_set.insert("ComplexEventEndDate_t_2059310391");
        all_values.push_back(EvntDts_15_set);
        all_compo_names.insert("EvntDts_15_set");

        {
          xml_element EvntTms_15{"EvntTms"};
          multiset<string> EvntTms_15_set;
          EvntTms_15.add_attribute("StartTm", "425517911"); // 4
          EvntTms_15_set.insert("425517911");
          EvntTms_15.add_attribute("EndTm", "718507877"); // 4
          EvntTms_15_set.insert("718507877");
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
    xml_element Undly_21{"Undly"};
    multiset<string> Undly_21_set;
    Undly_21.add_attribute("Sym", "UnderlyingSymbol_t_1121071077"); // 1
    Undly_21_set.insert("UnderlyingSymbol_t_1121071077");
    Undly_21.add_attribute("Sfx", "CD"); // 1
    Undly_21_set.insert("CD");
    Undly_21.add_attribute("ID", "UnderlyingSecurityID_t_1307822130"); // 1
    Undly_21_set.insert("UnderlyingSecurityID_t_1307822130");
    Undly_21.add_attribute("Src", "6"); // 1
    Undly_21_set.insert("6");
    Undly_21.add_attribute("Prod", "10"); // 1
    Undly_21_set.insert("10");
    Undly_21.add_attribute("CFI", "UnderlyingCFICode_t_1732455955"); // 1
    Undly_21_set.insert("UnderlyingCFICode_t_1732455955");
    Undly_21.add_attribute("SecTyp", "BUYSELL"); // 1
    Undly_21_set.insert("BUYSELL");
    Undly_21.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_263357479"); // 1
    Undly_21_set.insert("UnderlyingSecuritySubType_t_263357479");
    Undly_21.add_attribute("MMY", "1329608459"); // 1
    Undly_21_set.insert("1329608459");
    Undly_21.add_attribute("Mat", "UnderlyingMaturityDate_t_831949521"); // 1
    Undly_21_set.insert("UnderlyingMaturityDate_t_831949521");
    Undly_21.add_attribute("MatTm", "648203948"); // 1
    Undly_21_set.insert("648203948");
    Undly_21.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_727649201"); // 1
    Undly_21_set.insert("UnderlyingCouponPaymentDate_t_727649201");
    Undly_21.add_attribute("RestrctTyp", "MR"); // 1
    Undly_21_set.insert("MR");
    Undly_21.add_attribute("Snrty", "SB"); // 1
    Undly_21_set.insert("SB");
    Undly_21.add_attribute("NotlPctOut", "17773492.600000"); // 1
    Undly_21_set.insert("17773492.600000");
    Undly_21.add_attribute("OrigNotlPctOut", "7255177.010000"); // 1
    Undly_21_set.insert("7255177.010000");
    Undly_21.add_attribute("AttchPnt", "17362840.830000"); // 1
    Undly_21_set.insert("17362840.830000");
    Undly_21.add_attribute("DetchPnt", "20061696.490000"); // 1
    Undly_21_set.insert("20061696.490000");
    Undly_21.add_attribute("Issued", "UnderlyingIssueDate_t_1073429725"); // 1
    Undly_21_set.insert("UnderlyingIssueDate_t_1073429725");
    Undly_21.add_attribute("RepoCollSecTyp", "272060221"); // 1
    Undly_21_set.insert("272060221");
    Undly_21.add_attribute("RepoTrm", "643417746"); // 1
    Undly_21_set.insert("643417746");
    Undly_21.add_attribute("RepoRt", "68274.700000"); // 1
    Undly_21_set.insert("68274.700000");
    Undly_21.add_attribute("Fctr", "19970262.720000"); // 1
    Undly_21_set.insert("19970262.720000");
    Undly_21.add_attribute("CrdRtg", "UnderlyingCreditRating_t_408455612"); // 1
    Undly_21_set.insert("UnderlyingCreditRating_t_408455612");
    Undly_21.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_747389065"); // 1
    Undly_21_set.insert("UnderlyingInstrRegistry_t_747389065");
    Undly_21.add_attribute("Ctry", "1654373800"); // 1
    Undly_21_set.insert("1654373800");
    Undly_21.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1503029432"); // 1
    Undly_21_set.insert("UnderlyingStateOrProvinceOfIssue_t_1503029432");
    Undly_21.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_659215808"); // 1
    Undly_21_set.insert("UnderlyingLocaleOfIssue_t_659215808");
    Undly_21.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2079891711"); // 1
    Undly_21_set.insert("UnderlyingRedemptionDate_t_2079891711");
    Undly_21.add_attribute("StrkPx", "740536.610000"); // 1
    Undly_21_set.insert("740536.610000");
    Undly_21.add_attribute("StrkCcy", "JPY"); // 1
    Undly_21_set.insert("JPY");
    Undly_21.add_attribute("OptA", "269511595"); // 1
    Undly_21_set.insert("269511595");
    Undly_21.add_attribute("Mult", "6279133.920000"); // 1
    Undly_21_set.insert("6279133.920000");
    Undly_21.add_attribute("MultTyp", "0"); // 1
    Undly_21_set.insert("0");
    Undly_21.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_21_set.insert("0");
    Undly_21.add_attribute("UOM", "MMBtu"); // 1
    Undly_21_set.insert("MMBtu");
    Undly_21.add_attribute("UOMQty", "4025415.410000"); // 1
    Undly_21_set.insert("4025415.410000");
    Undly_21.add_attribute("PxUOM", "Alw"); // 1
    Undly_21_set.insert("Alw");
    Undly_21.add_attribute("PxUOMQty", "15424941.590000"); // 1
    Undly_21_set.insert("15424941.590000");
    Undly_21.add_attribute("TmUnit", "S"); // 1
    Undly_21_set.insert("S");
    Undly_21.add_attribute("ExerStyle", "0"); // 1
    Undly_21_set.insert("0");
    Undly_21.add_attribute("CpnRt", "1226597.130000"); // 1
    Undly_21_set.insert("1226597.130000");
    Undly_21.add_attribute("Exch", "UnderlyingSecurityExchange_t_743288155"); // 1
    Undly_21_set.insert("UnderlyingSecurityExchange_t_743288155");
    Undly_21.add_attribute("Issr", "UnderlyingIssuer_t_844248993"); // 1
    Undly_21_set.insert("UnderlyingIssuer_t_844248993");
    Undly_21.add_attribute("EncUndIssrLen", "1900008973"); // 1
    Undly_21_set.insert("1900008973");
    Undly_21.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1468805857"); // 1
    Undly_21_set.insert("EncodedUnderlyingIssuer_t_1468805857");
    Undly_21.add_attribute("Desc", "UnderlyingSecurityDesc_t_433049428"); // 1
    Undly_21_set.insert("UnderlyingSecurityDesc_t_433049428");
    Undly_21.add_attribute("EncUndSecDescLen", "1758694974"); // 1
    Undly_21_set.insert("1758694974");
    Undly_21.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_394751934"); // 1
    Undly_21_set.insert("EncodedUnderlyingSecurityDesc_t_394751934");
    Undly_21.add_attribute("CPPgm", "UnderlyingCPProgram_t_705109649"); // 1
    Undly_21_set.insert("UnderlyingCPProgram_t_705109649");
    Undly_21.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_254629072"); // 1
    Undly_21_set.insert("UnderlyingCPRegType_t_254629072");
    Undly_21.add_attribute("AllocPct", "4015794.050000"); // 1
    Undly_21_set.insert("4015794.050000");
    Undly_21.add_attribute("Ccy", "USD"); // 1
    Undly_21_set.insert("USD");
    Undly_21.add_attribute("Qty", "11489684.700000"); // 1
    Undly_21_set.insert("11489684.700000");
    Undly_21.add_attribute("SettlTyp", "5"); // 1
    Undly_21_set.insert("5");
    Undly_21.add_attribute("CashAmt", "UnderlyingCashAmount_t_18630468"); // 1
    Undly_21_set.insert("UnderlyingCashAmount_t_18630468");
    Undly_21.add_attribute("CashTyp", "FIXED"); // 1
    Undly_21_set.insert("FIXED");
    Undly_21.add_attribute("Px", "21414341.370000"); // 1
    Undly_21_set.insert("21414341.370000");
    Undly_21.add_attribute("DirtPx", "926841.290000"); // 1
    Undly_21_set.insert("926841.290000");
    Undly_21.add_attribute("EndPx", "11282755.400000"); // 1
    Undly_21_set.insert("11282755.400000");
    Undly_21.add_attribute("StartVal", "UnderlyingStartValue_t_1047429629"); // 1
    Undly_21_set.insert("UnderlyingStartValue_t_1047429629");
    Undly_21.add_attribute("CurVal", "UnderlyingCurrentValue_t_362195724"); // 1
    Undly_21_set.insert("UnderlyingCurrentValue_t_362195724");
    Undly_21.add_attribute("EndVal", "UnderlyingEndValue_t_1756188933"); // 1
    Undly_21_set.insert("UnderlyingEndValue_t_1756188933");
    Undly_21.add_attribute("AdjQty", "4134929.110000"); // 1
    Undly_21_set.insert("4134929.110000");
    Undly_21.add_attribute("FxRate", "7645830.900000"); // 1
    Undly_21_set.insert("7645830.900000");
    Undly_21.add_attribute("FxRateCalc", "D"); // 1
    Undly_21_set.insert("D");
    Undly_21.add_attribute("CapValu", "UnderlyingCapValue_t_816034452"); // 1
    Undly_21_set.insert("UnderlyingCapValue_t_816034452");
    Undly_21.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1430327935"); // 1
    Undly_21_set.insert("UnderlyingSettlMethod_t_1430327935");
    Undly_21.add_attribute("PutCall", "1364085144"); // 1
    Undly_21_set.insert("1364085144");
    all_values.push_back(Undly_21_set);
    all_compo_names.insert("Undly_21_set");

    {
      xml_element UndAID_21{"UndAID"};
      multiset<string> UndAID_21_set;
      UndAID_21.add_attribute("AltID", "UnderlyingSecurityAltID_t_2050525515"); // 2
      UndAID_21_set.insert("UnderlyingSecurityAltID_t_2050525515");
      UndAID_21.add_attribute("AltIDSrc", "5"); // 2
      UndAID_21_set.insert("5");
      all_values.push_back(UndAID_21_set);
      all_compo_names.insert("UndAID_21_set");

      Undly_21.add_element(UndAID_21);
    }
    {
      xml_element Stip_42{"Stip"};
      multiset<string> Stip_42_set;
      Stip_42.add_attribute("Typ", "WAM"); // 2
      Stip_42_set.insert("WAM");
      Stip_42.add_attribute("Val", "UnderlyingStipValue_t_646330022"); // 2
      Stip_42_set.insert("UnderlyingStipValue_t_646330022");
      all_values.push_back(Stip_42_set);
      all_compo_names.insert("Stip_42_set");

      Undly_21.add_element(Stip_42);
    }
    {
      xml_element Pty_118{"Pty"};
      multiset<string> Pty_118_set;
      Pty_118.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1441042073"); // 2
      Pty_118_set.insert("UnderlyingInstrumentPartyID_t_1441042073");
      Pty_118.add_attribute("Src", "A"); // 2
      Pty_118_set.insert("A");
      Pty_118.add_attribute("R", "12"); // 2
      Pty_118_set.insert("12");
      all_values.push_back(Pty_118_set);
      all_compo_names.insert("Pty_118_set");

      {
        xml_element Sub_118{"Sub"};
        multiset<string> Sub_118_set;
        Sub_118.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1874091501"); // 3
        Sub_118_set.insert("UnderlyingInstrumentPartySubID_t_1874091501");
        Sub_118.add_attribute("Typ", "32"); // 3
        Sub_118_set.insert("32");
        all_values.push_back(Sub_118_set);
        all_compo_names.insert("Sub_118_set");

        Pty_118.add_element(Sub_118);
      }
      Undly_21.add_element(Pty_118);
    }
    elt.add_element(Undly_21);
  } // end Undly
  { // Undly
    xml_element Undly_22{"Undly"};
    multiset<string> Undly_22_set;
    Undly_22.add_attribute("Sym", "UnderlyingSymbol_t_362404166"); // 1
    Undly_22_set.insert("UnderlyingSymbol_t_362404166");
    Undly_22.add_attribute("Sfx", "WI"); // 1
    Undly_22_set.insert("WI");
    Undly_22.add_attribute("ID", "UnderlyingSecurityID_t_1105110582"); // 1
    Undly_22_set.insert("UnderlyingSecurityID_t_1105110582");
    Undly_22.add_attribute("Src", "M"); // 1
    Undly_22_set.insert("M");
    Undly_22.add_attribute("Prod", "11"); // 1
    Undly_22_set.insert("11");
    Undly_22.add_attribute("CFI", "UnderlyingCFICode_t_1768195266"); // 1
    Undly_22_set.insert("UnderlyingCFICode_t_1768195266");
    Undly_22.add_attribute("SecTyp", "FXSPOT"); // 1
    Undly_22_set.insert("FXSPOT");
    Undly_22.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1047912202"); // 1
    Undly_22_set.insert("UnderlyingSecuritySubType_t_1047912202");
    Undly_22.add_attribute("MMY", "1786825735"); // 1
    Undly_22_set.insert("1786825735");
    Undly_22.add_attribute("Mat", "UnderlyingMaturityDate_t_1573652671"); // 1
    Undly_22_set.insert("UnderlyingMaturityDate_t_1573652671");
    Undly_22.add_attribute("MatTm", "1041862691"); // 1
    Undly_22_set.insert("1041862691");
    Undly_22.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1879509864"); // 1
    Undly_22_set.insert("UnderlyingCouponPaymentDate_t_1879509864");
    Undly_22.add_attribute("RestrctTyp", "FR"); // 1
    Undly_22_set.insert("FR");
    Undly_22.add_attribute("Snrty", "SR"); // 1
    Undly_22_set.insert("SR");
    Undly_22.add_attribute("NotlPctOut", "942219.410000"); // 1
    Undly_22_set.insert("942219.410000");
    Undly_22.add_attribute("OrigNotlPctOut", "1631498.490000"); // 1
    Undly_22_set.insert("1631498.490000");
    Undly_22.add_attribute("AttchPnt", "3553015.830000"); // 1
    Undly_22_set.insert("3553015.830000");
    Undly_22.add_attribute("DetchPnt", "8588050.310000"); // 1
    Undly_22_set.insert("8588050.310000");
    Undly_22.add_attribute("Issued", "UnderlyingIssueDate_t_2132224482"); // 1
    Undly_22_set.insert("UnderlyingIssueDate_t_2132224482");
    Undly_22.add_attribute("RepoCollSecTyp", "1171336036"); // 1
    Undly_22_set.insert("1171336036");
    Undly_22.add_attribute("RepoTrm", "141649318"); // 1
    Undly_22_set.insert("141649318");
    Undly_22.add_attribute("RepoRt", "13488259.780000"); // 1
    Undly_22_set.insert("13488259.780000");
    Undly_22.add_attribute("Fctr", "10743779.030000"); // 1
    Undly_22_set.insert("10743779.030000");
    Undly_22.add_attribute("CrdRtg", "UnderlyingCreditRating_t_738442398"); // 1
    Undly_22_set.insert("UnderlyingCreditRating_t_738442398");
    Undly_22.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_688087188"); // 1
    Undly_22_set.insert("UnderlyingInstrRegistry_t_688087188");
    Undly_22.add_attribute("Ctry", "1720707925"); // 1
    Undly_22_set.insert("1720707925");
    Undly_22.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_32000823"); // 1
    Undly_22_set.insert("UnderlyingStateOrProvinceOfIssue_t_32000823");
    Undly_22.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1927357371"); // 1
    Undly_22_set.insert("UnderlyingLocaleOfIssue_t_1927357371");
    Undly_22.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1688360157"); // 1
    Undly_22_set.insert("UnderlyingRedemptionDate_t_1688360157");
    Undly_22.add_attribute("StrkPx", "19060923.240000"); // 1
    Undly_22_set.insert("19060923.240000");
    Undly_22.add_attribute("StrkCcy", "CAN"); // 1
    Undly_22_set.insert("CAN");
    Undly_22.add_attribute("OptA", "190326179"); // 1
    Undly_22_set.insert("190326179");
    Undly_22.add_attribute("Mult", "17354658.140000"); // 1
    Undly_22_set.insert("17354658.140000");
    Undly_22.add_attribute("MultTyp", "1"); // 1
    Undly_22_set.insert("1");
    Undly_22.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_22_set.insert("1");
    Undly_22.add_attribute("UOM", "MWh"); // 1
    Undly_22_set.insert("MWh");
    Undly_22.add_attribute("UOMQty", "4327326.390000"); // 1
    Undly_22_set.insert("4327326.390000");
    Undly_22.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_22_set.insert("oz_tr");
    Undly_22.add_attribute("PxUOMQty", "9955195.200000"); // 1
    Undly_22_set.insert("9955195.200000");
    Undly_22.add_attribute("TmUnit", "Yr"); // 1
    Undly_22_set.insert("Yr");
    Undly_22.add_attribute("ExerStyle", "2"); // 1
    Undly_22_set.insert("2");
    Undly_22.add_attribute("CpnRt", "7275457.360000"); // 1
    Undly_22_set.insert("7275457.360000");
    Undly_22.add_attribute("Exch", "UnderlyingSecurityExchange_t_413346226"); // 1
    Undly_22_set.insert("UnderlyingSecurityExchange_t_413346226");
    Undly_22.add_attribute("Issr", "UnderlyingIssuer_t_1060795873"); // 1
    Undly_22_set.insert("UnderlyingIssuer_t_1060795873");
    Undly_22.add_attribute("EncUndIssrLen", "821767677"); // 1
    Undly_22_set.insert("821767677");
    Undly_22.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_576496075"); // 1
    Undly_22_set.insert("EncodedUnderlyingIssuer_t_576496075");
    Undly_22.add_attribute("Desc", "UnderlyingSecurityDesc_t_1416097457"); // 1
    Undly_22_set.insert("UnderlyingSecurityDesc_t_1416097457");
    Undly_22.add_attribute("EncUndSecDescLen", "1680572708"); // 1
    Undly_22_set.insert("1680572708");
    Undly_22.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_561236909"); // 1
    Undly_22_set.insert("EncodedUnderlyingSecurityDesc_t_561236909");
    Undly_22.add_attribute("CPPgm", "UnderlyingCPProgram_t_439949845"); // 1
    Undly_22_set.insert("UnderlyingCPProgram_t_439949845");
    Undly_22.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1822222026"); // 1
    Undly_22_set.insert("UnderlyingCPRegType_t_1822222026");
    Undly_22.add_attribute("AllocPct", "19100628.880000"); // 1
    Undly_22_set.insert("19100628.880000");
    Undly_22.add_attribute("Ccy", "JPY"); // 1
    Undly_22_set.insert("JPY");
    Undly_22.add_attribute("Qty", "4506664.280000"); // 1
    Undly_22_set.insert("4506664.280000");
    Undly_22.add_attribute("SettlTyp", "5"); // 1
    Undly_22_set.insert("5");
    Undly_22.add_attribute("CashAmt", "UnderlyingCashAmount_t_445181599"); // 1
    Undly_22_set.insert("UnderlyingCashAmount_t_445181599");
    Undly_22.add_attribute("CashTyp", "DIFF"); // 1
    Undly_22_set.insert("DIFF");
    Undly_22.add_attribute("Px", "6284285.340000"); // 1
    Undly_22_set.insert("6284285.340000");
    Undly_22.add_attribute("DirtPx", "2037902.760000"); // 1
    Undly_22_set.insert("2037902.760000");
    Undly_22.add_attribute("EndPx", "8608953.830000"); // 1
    Undly_22_set.insert("8608953.830000");
    Undly_22.add_attribute("StartVal", "UnderlyingStartValue_t_531709209"); // 1
    Undly_22_set.insert("UnderlyingStartValue_t_531709209");
    Undly_22.add_attribute("CurVal", "UnderlyingCurrentValue_t_394116455"); // 1
    Undly_22_set.insert("UnderlyingCurrentValue_t_394116455");
    Undly_22.add_attribute("EndVal", "UnderlyingEndValue_t_448877550"); // 1
    Undly_22_set.insert("UnderlyingEndValue_t_448877550");
    Undly_22.add_attribute("AdjQty", "11989734.550000"); // 1
    Undly_22_set.insert("11989734.550000");
    Undly_22.add_attribute("FxRate", "15708124.110000"); // 1
    Undly_22_set.insert("15708124.110000");
    Undly_22.add_attribute("FxRateCalc", "D"); // 1
    Undly_22_set.insert("D");
    Undly_22.add_attribute("CapValu", "UnderlyingCapValue_t_1631706094"); // 1
    Undly_22_set.insert("UnderlyingCapValue_t_1631706094");
    Undly_22.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1647936921"); // 1
    Undly_22_set.insert("UnderlyingSettlMethod_t_1647936921");
    Undly_22.add_attribute("PutCall", "653090855"); // 1
    Undly_22_set.insert("653090855");
    all_values.push_back(Undly_22_set);
    all_compo_names.insert("Undly_22_set");

    {
      xml_element UndAID_22{"UndAID"};
      multiset<string> UndAID_22_set;
      UndAID_22.add_attribute("AltID", "UnderlyingSecurityAltID_t_1490607757"); // 2
      UndAID_22_set.insert("UnderlyingSecurityAltID_t_1490607757");
      UndAID_22.add_attribute("AltIDSrc", "5"); // 2
      UndAID_22_set.insert("5");
      all_values.push_back(UndAID_22_set);
      all_compo_names.insert("UndAID_22_set");

      Undly_22.add_element(UndAID_22);
    }
    {
      xml_element Stip_43{"Stip"};
      multiset<string> Stip_43_set;
      Stip_43.add_attribute("Typ", "PMAX"); // 2
      Stip_43_set.insert("PMAX");
      Stip_43.add_attribute("Val", "UnderlyingStipValue_t_1903953983"); // 2
      Stip_43_set.insert("UnderlyingStipValue_t_1903953983");
      all_values.push_back(Stip_43_set);
      all_compo_names.insert("Stip_43_set");

      Undly_22.add_element(Stip_43);
    }
    {
      xml_element Pty_119{"Pty"};
      multiset<string> Pty_119_set;
      Pty_119.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1680236348"); // 2
      Pty_119_set.insert("UnderlyingInstrumentPartyID_t_1680236348");
      Pty_119.add_attribute("Src", "C"); // 2
      Pty_119_set.insert("C");
      Pty_119.add_attribute("R", "73"); // 2
      Pty_119_set.insert("73");
      all_values.push_back(Pty_119_set);
      all_compo_names.insert("Pty_119_set");

      {
        xml_element Sub_119{"Sub"};
        multiset<string> Sub_119_set;
        Sub_119.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_948850157"); // 3
        Sub_119_set.insert("UnderlyingInstrumentPartySubID_t_948850157");
        Sub_119.add_attribute("Typ", "32"); // 3
        Sub_119_set.insert("32");
        all_values.push_back(Sub_119_set);
        all_compo_names.insert("Sub_119_set");

        Pty_119.add_element(Sub_119);
      }
      Undly_22.add_element(Pty_119);
    }
    elt.add_element(Undly_22);
  } // end Undly
  { // Undly
    xml_element Undly_23{"Undly"};
    multiset<string> Undly_23_set;
    Undly_23.add_attribute("Sym", "UnderlyingSymbol_t_894203320"); // 1
    Undly_23_set.insert("UnderlyingSymbol_t_894203320");
    Undly_23.add_attribute("Sfx", "CD"); // 1
    Undly_23_set.insert("CD");
    Undly_23.add_attribute("ID", "UnderlyingSecurityID_t_1410231708"); // 1
    Undly_23_set.insert("UnderlyingSecurityID_t_1410231708");
    Undly_23.add_attribute("Src", "H"); // 1
    Undly_23_set.insert("H");
    Undly_23.add_attribute("Prod", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("CFI", "UnderlyingCFICode_t_1823412484"); // 1
    Undly_23_set.insert("UnderlyingCFICode_t_1823412484");
    Undly_23.add_attribute("SecTyp", "FRN"); // 1
    Undly_23_set.insert("FRN");
    Undly_23.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1843196127"); // 1
    Undly_23_set.insert("UnderlyingSecuritySubType_t_1843196127");
    Undly_23.add_attribute("MMY", "121110436"); // 1
    Undly_23_set.insert("121110436");
    Undly_23.add_attribute("Mat", "UnderlyingMaturityDate_t_1337989139"); // 1
    Undly_23_set.insert("UnderlyingMaturityDate_t_1337989139");
    Undly_23.add_attribute("MatTm", "324141014"); // 1
    Undly_23_set.insert("324141014");
    Undly_23.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_324900712"); // 1
    Undly_23_set.insert("UnderlyingCouponPaymentDate_t_324900712");
    Undly_23.add_attribute("RestrctTyp", "XR"); // 1
    Undly_23_set.insert("XR");
    Undly_23.add_attribute("Snrty", "SB"); // 1
    Undly_23_set.insert("SB");
    Undly_23.add_attribute("NotlPctOut", "7190171.670000"); // 1
    Undly_23_set.insert("7190171.670000");
    Undly_23.add_attribute("OrigNotlPctOut", "5002784.250000"); // 1
    Undly_23_set.insert("5002784.250000");
    Undly_23.add_attribute("AttchPnt", "20548236.790000"); // 1
    Undly_23_set.insert("20548236.790000");
    Undly_23.add_attribute("DetchPnt", "1423459.310000"); // 1
    Undly_23_set.insert("1423459.310000");
    Undly_23.add_attribute("Issued", "UnderlyingIssueDate_t_157849760"); // 1
    Undly_23_set.insert("UnderlyingIssueDate_t_157849760");
    Undly_23.add_attribute("RepoCollSecTyp", "1539046125"); // 1
    Undly_23_set.insert("1539046125");
    Undly_23.add_attribute("RepoTrm", "1790282852"); // 1
    Undly_23_set.insert("1790282852");
    Undly_23.add_attribute("RepoRt", "8109406.150000"); // 1
    Undly_23_set.insert("8109406.150000");
    Undly_23.add_attribute("Fctr", "8821702.340000"); // 1
    Undly_23_set.insert("8821702.340000");
    Undly_23.add_attribute("CrdRtg", "UnderlyingCreditRating_t_262239679"); // 1
    Undly_23_set.insert("UnderlyingCreditRating_t_262239679");
    Undly_23.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_44093558"); // 1
    Undly_23_set.insert("UnderlyingInstrRegistry_t_44093558");
    Undly_23.add_attribute("Ctry", "638640570"); // 1
    Undly_23_set.insert("638640570");
    Undly_23.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1942476027"); // 1
    Undly_23_set.insert("UnderlyingStateOrProvinceOfIssue_t_1942476027");
    Undly_23.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_99014179"); // 1
    Undly_23_set.insert("UnderlyingLocaleOfIssue_t_99014179");
    Undly_23.add_attribute("Redeem", "UnderlyingRedemptionDate_t_971606981"); // 1
    Undly_23_set.insert("UnderlyingRedemptionDate_t_971606981");
    Undly_23.add_attribute("StrkPx", "7438425.360000"); // 1
    Undly_23_set.insert("7438425.360000");
    Undly_23.add_attribute("StrkCcy", "CHF"); // 1
    Undly_23_set.insert("CHF");
    Undly_23.add_attribute("OptA", "2132642538"); // 1
    Undly_23_set.insert("2132642538");
    Undly_23.add_attribute("Mult", "10972555.690000"); // 1
    Undly_23_set.insert("10972555.690000");
    Undly_23.add_attribute("MultTyp", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("UOM", "MMbbl"); // 1
    Undly_23_set.insert("MMbbl");
    Undly_23.add_attribute("UOMQty", "14825582.020000"); // 1
    Undly_23_set.insert("14825582.020000");
    Undly_23.add_attribute("PxUOM", "Bbl"); // 1
    Undly_23_set.insert("Bbl");
    Undly_23.add_attribute("PxUOMQty", "8942948.410000"); // 1
    Undly_23_set.insert("8942948.410000");
    Undly_23.add_attribute("TmUnit", "H"); // 1
    Undly_23_set.insert("H");
    Undly_23.add_attribute("ExerStyle", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("CpnRt", "12191955.530000"); // 1
    Undly_23_set.insert("12191955.530000");
    Undly_23.add_attribute("Exch", "UnderlyingSecurityExchange_t_724464569"); // 1
    Undly_23_set.insert("UnderlyingSecurityExchange_t_724464569");
    Undly_23.add_attribute("Issr", "UnderlyingIssuer_t_1616506709"); // 1
    Undly_23_set.insert("UnderlyingIssuer_t_1616506709");
    Undly_23.add_attribute("EncUndIssrLen", "1938212721"); // 1
    Undly_23_set.insert("1938212721");
    Undly_23.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1224742994"); // 1
    Undly_23_set.insert("EncodedUnderlyingIssuer_t_1224742994");
    Undly_23.add_attribute("Desc", "UnderlyingSecurityDesc_t_1523846740"); // 1
    Undly_23_set.insert("UnderlyingSecurityDesc_t_1523846740");
    Undly_23.add_attribute("EncUndSecDescLen", "2080558652"); // 1
    Undly_23_set.insert("2080558652");
    Undly_23.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1382592754"); // 1
    Undly_23_set.insert("EncodedUnderlyingSecurityDesc_t_1382592754");
    Undly_23.add_attribute("CPPgm", "UnderlyingCPProgram_t_915409217"); // 1
    Undly_23_set.insert("UnderlyingCPProgram_t_915409217");
    Undly_23.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1723357856"); // 1
    Undly_23_set.insert("UnderlyingCPRegType_t_1723357856");
    Undly_23.add_attribute("AllocPct", "460497.210000"); // 1
    Undly_23_set.insert("460497.210000");
    Undly_23.add_attribute("Ccy", "CHF"); // 1
    Undly_23_set.insert("CHF");
    Undly_23.add_attribute("Qty", "901432.790000"); // 1
    Undly_23_set.insert("901432.790000");
    Undly_23.add_attribute("SettlTyp", "2"); // 1
    Undly_23_set.insert("2");
    Undly_23.add_attribute("CashAmt", "UnderlyingCashAmount_t_1780589914"); // 1
    Undly_23_set.insert("UnderlyingCashAmount_t_1780589914");
    Undly_23.add_attribute("CashTyp", "DIFF"); // 1
    Undly_23_set.insert("DIFF");
    Undly_23.add_attribute("Px", "12603433.550000"); // 1
    Undly_23_set.insert("12603433.550000");
    Undly_23.add_attribute("DirtPx", "3769488.020000"); // 1
    Undly_23_set.insert("3769488.020000");
    Undly_23.add_attribute("EndPx", "20236649.680000"); // 1
    Undly_23_set.insert("20236649.680000");
    Undly_23.add_attribute("StartVal", "UnderlyingStartValue_t_978670008"); // 1
    Undly_23_set.insert("UnderlyingStartValue_t_978670008");
    Undly_23.add_attribute("CurVal", "UnderlyingCurrentValue_t_362107692"); // 1
    Undly_23_set.insert("UnderlyingCurrentValue_t_362107692");
    Undly_23.add_attribute("EndVal", "UnderlyingEndValue_t_973436889"); // 1
    Undly_23_set.insert("UnderlyingEndValue_t_973436889");
    Undly_23.add_attribute("AdjQty", "13537792.220000"); // 1
    Undly_23_set.insert("13537792.220000");
    Undly_23.add_attribute("FxRate", "11029106.840000"); // 1
    Undly_23_set.insert("11029106.840000");
    Undly_23.add_attribute("FxRateCalc", "M"); // 1
    Undly_23_set.insert("M");
    Undly_23.add_attribute("CapValu", "UnderlyingCapValue_t_688853777"); // 1
    Undly_23_set.insert("UnderlyingCapValue_t_688853777");
    Undly_23.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1539426156"); // 1
    Undly_23_set.insert("UnderlyingSettlMethod_t_1539426156");
    Undly_23.add_attribute("PutCall", "493432488"); // 1
    Undly_23_set.insert("493432488");
    all_values.push_back(Undly_23_set);
    all_compo_names.insert("Undly_23_set");

    {
      xml_element UndAID_23{"UndAID"};
      multiset<string> UndAID_23_set;
      UndAID_23.add_attribute("AltID", "UnderlyingSecurityAltID_t_1361917471"); // 2
      UndAID_23_set.insert("UnderlyingSecurityAltID_t_1361917471");
      UndAID_23.add_attribute("AltIDSrc", "L"); // 2
      UndAID_23_set.insert("L");
      all_values.push_back(UndAID_23_set);
      all_compo_names.insert("UndAID_23_set");

      Undly_23.add_element(UndAID_23);
    }
    {
      xml_element Stip_44{"Stip"};
      multiset<string> Stip_44_set;
      Stip_44.add_attribute("Typ", "PURPOSE"); // 2
      Stip_44_set.insert("PURPOSE");
      Stip_44.add_attribute("Val", "UnderlyingStipValue_t_2086382040"); // 2
      Stip_44_set.insert("UnderlyingStipValue_t_2086382040");
      all_values.push_back(Stip_44_set);
      all_compo_names.insert("Stip_44_set");

      Undly_23.add_element(Stip_44);
    }
    {
      xml_element Pty_120{"Pty"};
      multiset<string> Pty_120_set;
      Pty_120.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1769105702"); // 2
      Pty_120_set.insert("UnderlyingInstrumentPartyID_t_1769105702");
      Pty_120.add_attribute("Src", "D"); // 2
      Pty_120_set.insert("D");
      Pty_120.add_attribute("R", "57"); // 2
      Pty_120_set.insert("57");
      all_values.push_back(Pty_120_set);
      all_compo_names.insert("Pty_120_set");

      {
        xml_element Sub_120{"Sub"};
        multiset<string> Sub_120_set;
        Sub_120.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1145468794"); // 3
        Sub_120_set.insert("UnderlyingInstrumentPartySubID_t_1145468794");
        Sub_120.add_attribute("Typ", "1"); // 3
        Sub_120_set.insert("1");
        all_values.push_back(Sub_120_set);
        all_compo_names.insert("Sub_120_set");

        Pty_120.add_element(Sub_120);
      }
      Undly_23.add_element(Pty_120);
    }
    elt.add_element(Undly_23);
  } // end Undly
  { // Leg
    xml_element Leg_24{"Leg"};
    multiset<string> Leg_24_set;
    Leg_24.add_attribute("Sym", "LegSymbol_t_2060878012"); // 1
    Leg_24_set.insert("LegSymbol_t_2060878012");
    Leg_24.add_attribute("Sfx", "WI"); // 1
    Leg_24_set.insert("WI");
    Leg_24.add_attribute("ID", "LegSecurityID_t_444800213"); // 1
    Leg_24_set.insert("LegSecurityID_t_444800213");
    Leg_24.add_attribute("Src", "3"); // 1
    Leg_24_set.insert("3");
    Leg_24.add_attribute("Prod", "4"); // 1
    Leg_24_set.insert("4");
    Leg_24.add_attribute("CFI", "LegCFICode_t_534943492"); // 1
    Leg_24_set.insert("LegCFICode_t_534943492");
    Leg_24.add_attribute("SecTyp", "RVLVTRM"); // 1
    Leg_24_set.insert("RVLVTRM");
    Leg_24.add_attribute("SecSubTyp", "LegSecuritySubType_t_483526481"); // 1
    Leg_24_set.insert("LegSecuritySubType_t_483526481");
    Leg_24.add_attribute("MMY", "724100951"); // 1
    Leg_24_set.insert("724100951");
    Leg_24.add_attribute("Mat", "LegMaturityDate_t_1112569897"); // 1
    Leg_24_set.insert("LegMaturityDate_t_1112569897");
    Leg_24.add_attribute("MatTm", "860475283"); // 1
    Leg_24_set.insert("860475283");
    Leg_24.add_attribute("CpnPmt", "LegCouponPaymentDate_t_600282271"); // 1
    Leg_24_set.insert("LegCouponPaymentDate_t_600282271");
    Leg_24.add_attribute("Issued", "LegIssueDate_t_2091239905"); // 1
    Leg_24_set.insert("LegIssueDate_t_2091239905");
    Leg_24.add_attribute("RepoCollSecTyp", "1222582976"); // 1
    Leg_24_set.insert("1222582976");
    Leg_24.add_attribute("RepoTrm", "1573719160"); // 1
    Leg_24_set.insert("1573719160");
    Leg_24.add_attribute("RepoRt", "12975354.800000"); // 1
    Leg_24_set.insert("12975354.800000");
    Leg_24.add_attribute("Fctr", "1780100.120000"); // 1
    Leg_24_set.insert("1780100.120000");
    Leg_24.add_attribute("CrdRtg", "LegCreditRating_t_1172856807"); // 1
    Leg_24_set.insert("LegCreditRating_t_1172856807");
    Leg_24.add_attribute("Rgstry", "LegInstrRegistry_t_1986389257"); // 1
    Leg_24_set.insert("LegInstrRegistry_t_1986389257");
    Leg_24.add_attribute("Ctry", "1717436168"); // 1
    Leg_24_set.insert("1717436168");
    Leg_24.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1666289295"); // 1
    Leg_24_set.insert("LegStateOrProvinceOfIssue_t_1666289295");
    Leg_24.add_attribute("Lcl", "LegLocaleOfIssue_t_1200823080"); // 1
    Leg_24_set.insert("LegLocaleOfIssue_t_1200823080");
    Leg_24.add_attribute("Redeem", "LegRedemptionDate_t_1870035162"); // 1
    Leg_24_set.insert("LegRedemptionDate_t_1870035162");
    Leg_24.add_attribute("Strk", "12314336.880000"); // 1
    Leg_24_set.insert("12314336.880000");
    Leg_24.add_attribute("StrkCcy", "USD"); // 1
    Leg_24_set.insert("USD");
    Leg_24.add_attribute("OptA", "587307155"); // 1
    Leg_24_set.insert("587307155");
    Leg_24.add_attribute("Cmult", "1558792.100000"); // 1
    Leg_24_set.insert("1558792.100000");
    Leg_24.add_attribute("MultTyp", "0"); // 1
    Leg_24_set.insert("0");
    Leg_24.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_24_set.insert("3");
    Leg_24.add_attribute("UOM", "Gal"); // 1
    Leg_24_set.insert("Gal");
    Leg_24.add_attribute("UOMQty", "4030367.270000"); // 1
    Leg_24_set.insert("4030367.270000");
    Leg_24.add_attribute("PxUOM", "tn"); // 1
    Leg_24_set.insert("tn");
    Leg_24.add_attribute("PxUOMQty", "9994299.150000"); // 1
    Leg_24_set.insert("9994299.150000");
    Leg_24.add_attribute("TmUnit", "Min"); // 1
    Leg_24_set.insert("Min");
    Leg_24.add_attribute("ExerStyle", "1"); // 1
    Leg_24_set.insert("1");
    Leg_24.add_attribute("CpnRt", "15343734.070000"); // 1
    Leg_24_set.insert("15343734.070000");
    Leg_24.add_attribute("Exch", "LegSecurityExchange_t_1966237085"); // 1
    Leg_24_set.insert("LegSecurityExchange_t_1966237085");
    Leg_24.add_attribute("Issr", "LegIssuer_t_75025000"); // 1
    Leg_24_set.insert("LegIssuer_t_75025000");
    Leg_24.add_attribute("EncLegIssrLen", "110990711"); // 1
    Leg_24_set.insert("110990711");
    Leg_24.add_attribute("EncLegIssr", "EncodedLegIssuer_t_931323334"); // 1
    Leg_24_set.insert("EncodedLegIssuer_t_931323334");
    Leg_24.add_attribute("Desc", "LegSecurityDesc_t_935500283"); // 1
    Leg_24_set.insert("LegSecurityDesc_t_935500283");
    Leg_24.add_attribute("EncLegSecDescLen", "711272982"); // 1
    Leg_24_set.insert("711272982");
    Leg_24.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_875079591"); // 1
    Leg_24_set.insert("EncodedLegSecurityDesc_t_875079591");
    Leg_24.add_attribute("RatioQty", "105996.110000"); // 1
    Leg_24_set.insert("105996.110000");
    Leg_24.add_attribute("Side", "G"); // 1
    Leg_24_set.insert("G");
    Leg_24.add_attribute("Ccy", "GBP"); // 1
    Leg_24_set.insert("GBP");
    Leg_24.add_attribute("Pool", "LegPool_t_1310365302"); // 1
    Leg_24_set.insert("LegPool_t_1310365302");
    Leg_24.add_attribute("Dated", "LegDatedDate_t_2011520680"); // 1
    Leg_24_set.insert("LegDatedDate_t_2011520680");
    Leg_24.add_attribute("CSetMo", "1906045792"); // 1
    Leg_24_set.insert("1906045792");
    Leg_24.add_attribute("IntAcrl", "LegInterestAccrualDate_t_829170949"); // 1
    Leg_24_set.insert("LegInterestAccrualDate_t_829170949");
    Leg_24.add_attribute("PutCall", "1064860112"); // 1
    Leg_24_set.insert("1064860112");
    Leg_24.add_attribute("LegOptionRatio", "16285973.060000"); // 1
    Leg_24_set.insert("16285973.060000");
    Leg_24.add_attribute("Px", "20606046.370000"); // 1
    Leg_24_set.insert("20606046.370000");
    all_values.push_back(Leg_24_set);
    all_compo_names.insert("Leg_24_set");

    {
      xml_element LegAID_24{"LegAID"};
      multiset<string> LegAID_24_set;
      LegAID_24.add_attribute("SecAltID", "LegSecurityAltID_t_57097936"); // 2
      LegAID_24_set.insert("LegSecurityAltID_t_57097936");
      LegAID_24.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_24_set.insert("M");
      all_values.push_back(LegAID_24_set);
      all_compo_names.insert("LegAID_24_set");

      Leg_24.add_element(LegAID_24);
    }
    elt.add_element(Leg_24);
  } // end Leg
  { // Leg
    xml_element Leg_25{"Leg"};
    multiset<string> Leg_25_set;
    Leg_25.add_attribute("Sym", "LegSymbol_t_500428144"); // 1
    Leg_25_set.insert("LegSymbol_t_500428144");
    Leg_25.add_attribute("Sfx", "CD"); // 1
    Leg_25_set.insert("CD");
    Leg_25.add_attribute("ID", "LegSecurityID_t_1462413238"); // 1
    Leg_25_set.insert("LegSecurityID_t_1462413238");
    Leg_25.add_attribute("Src", "D"); // 1
    Leg_25_set.insert("D");
    Leg_25.add_attribute("Prod", "5"); // 1
    Leg_25_set.insert("5");
    Leg_25.add_attribute("CFI", "LegCFICode_t_1865449965"); // 1
    Leg_25_set.insert("LegCFICode_t_1865449965");
    Leg_25.add_attribute("SecTyp", "MPP"); // 1
    Leg_25_set.insert("MPP");
    Leg_25.add_attribute("SecSubTyp", "LegSecuritySubType_t_1767036763"); // 1
    Leg_25_set.insert("LegSecuritySubType_t_1767036763");
    Leg_25.add_attribute("MMY", "1831976860"); // 1
    Leg_25_set.insert("1831976860");
    Leg_25.add_attribute("Mat", "LegMaturityDate_t_856744241"); // 1
    Leg_25_set.insert("LegMaturityDate_t_856744241");
    Leg_25.add_attribute("MatTm", "1153926523"); // 1
    Leg_25_set.insert("1153926523");
    Leg_25.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1650730297"); // 1
    Leg_25_set.insert("LegCouponPaymentDate_t_1650730297");
    Leg_25.add_attribute("Issued", "LegIssueDate_t_931769241"); // 1
    Leg_25_set.insert("LegIssueDate_t_931769241");
    Leg_25.add_attribute("RepoCollSecTyp", "1264917234"); // 1
    Leg_25_set.insert("1264917234");
    Leg_25.add_attribute("RepoTrm", "434569983"); // 1
    Leg_25_set.insert("434569983");
    Leg_25.add_attribute("RepoRt", "18672695.250000"); // 1
    Leg_25_set.insert("18672695.250000");
    Leg_25.add_attribute("Fctr", "19761902.160000"); // 1
    Leg_25_set.insert("19761902.160000");
    Leg_25.add_attribute("CrdRtg", "LegCreditRating_t_1309649574"); // 1
    Leg_25_set.insert("LegCreditRating_t_1309649574");
    Leg_25.add_attribute("Rgstry", "LegInstrRegistry_t_1877869136"); // 1
    Leg_25_set.insert("LegInstrRegistry_t_1877869136");
    Leg_25.add_attribute("Ctry", "2113698711"); // 1
    Leg_25_set.insert("2113698711");
    Leg_25.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1334780998"); // 1
    Leg_25_set.insert("LegStateOrProvinceOfIssue_t_1334780998");
    Leg_25.add_attribute("Lcl", "LegLocaleOfIssue_t_2066478760"); // 1
    Leg_25_set.insert("LegLocaleOfIssue_t_2066478760");
    Leg_25.add_attribute("Redeem", "LegRedemptionDate_t_1276580365"); // 1
    Leg_25_set.insert("LegRedemptionDate_t_1276580365");
    Leg_25.add_attribute("Strk", "11988180.300000"); // 1
    Leg_25_set.insert("11988180.300000");
    Leg_25.add_attribute("StrkCcy", "GBP"); // 1
    Leg_25_set.insert("GBP");
    Leg_25.add_attribute("OptA", "116194495"); // 1
    Leg_25_set.insert("116194495");
    Leg_25.add_attribute("Cmult", "13061545.630000"); // 1
    Leg_25_set.insert("13061545.630000");
    Leg_25.add_attribute("MultTyp", "2"); // 1
    Leg_25_set.insert("2");
    Leg_25.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_25_set.insert("1");
    Leg_25.add_attribute("UOM", "Alw"); // 1
    Leg_25_set.insert("Alw");
    Leg_25.add_attribute("UOMQty", "3718168.000000"); // 1
    Leg_25_set.insert("3718168.000000");
    Leg_25.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_25_set.insert("MMbbl");
    Leg_25.add_attribute("PxUOMQty", "15938550.280000"); // 1
    Leg_25_set.insert("15938550.280000");
    Leg_25.add_attribute("TmUnit", "Yr"); // 1
    Leg_25_set.insert("Yr");
    Leg_25.add_attribute("ExerStyle", "1"); // 1
    Leg_25_set.insert("1");
    Leg_25.add_attribute("CpnRt", "13118213.450000"); // 1
    Leg_25_set.insert("13118213.450000");
    Leg_25.add_attribute("Exch", "LegSecurityExchange_t_2013746293"); // 1
    Leg_25_set.insert("LegSecurityExchange_t_2013746293");
    Leg_25.add_attribute("Issr", "LegIssuer_t_773429542"); // 1
    Leg_25_set.insert("LegIssuer_t_773429542");
    Leg_25.add_attribute("EncLegIssrLen", "996314557"); // 1
    Leg_25_set.insert("996314557");
    Leg_25.add_attribute("EncLegIssr", "EncodedLegIssuer_t_723006886"); // 1
    Leg_25_set.insert("EncodedLegIssuer_t_723006886");
    Leg_25.add_attribute("Desc", "LegSecurityDesc_t_1927356065"); // 1
    Leg_25_set.insert("LegSecurityDesc_t_1927356065");
    Leg_25.add_attribute("EncLegSecDescLen", "499561206"); // 1
    Leg_25_set.insert("499561206");
    Leg_25.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1654776128"); // 1
    Leg_25_set.insert("EncodedLegSecurityDesc_t_1654776128");
    Leg_25.add_attribute("RatioQty", "10447896.510000"); // 1
    Leg_25_set.insert("10447896.510000");
    Leg_25.add_attribute("Side", "6"); // 1
    Leg_25_set.insert("6");
    Leg_25.add_attribute("Ccy", "EUR"); // 1
    Leg_25_set.insert("EUR");
    Leg_25.add_attribute("Pool", "LegPool_t_96297116"); // 1
    Leg_25_set.insert("LegPool_t_96297116");
    Leg_25.add_attribute("Dated", "LegDatedDate_t_1104947493"); // 1
    Leg_25_set.insert("LegDatedDate_t_1104947493");
    Leg_25.add_attribute("CSetMo", "839711283"); // 1
    Leg_25_set.insert("839711283");
    Leg_25.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1431078114"); // 1
    Leg_25_set.insert("LegInterestAccrualDate_t_1431078114");
    Leg_25.add_attribute("PutCall", "1023942606"); // 1
    Leg_25_set.insert("1023942606");
    Leg_25.add_attribute("LegOptionRatio", "21162916.480000"); // 1
    Leg_25_set.insert("21162916.480000");
    Leg_25.add_attribute("Px", "4824124.960000"); // 1
    Leg_25_set.insert("4824124.960000");
    all_values.push_back(Leg_25_set);
    all_compo_names.insert("Leg_25_set");

    {
      xml_element LegAID_25{"LegAID"};
      multiset<string> LegAID_25_set;
      LegAID_25.add_attribute("SecAltID", "LegSecurityAltID_t_701499863"); // 2
      LegAID_25_set.insert("LegSecurityAltID_t_701499863");
      LegAID_25.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_25_set.insert("G");
      all_values.push_back(LegAID_25_set);
      all_compo_names.insert("LegAID_25_set");

      Leg_25.add_element(LegAID_25);
    }
    elt.add_element(Leg_25);
  } // end Leg
  { // Leg
    xml_element Leg_26{"Leg"};
    multiset<string> Leg_26_set;
    Leg_26.add_attribute("Sym", "LegSymbol_t_598606991"); // 1
    Leg_26_set.insert("LegSymbol_t_598606991");
    Leg_26.add_attribute("Sfx", "CD"); // 1
    Leg_26_set.insert("CD");
    Leg_26.add_attribute("ID", "LegSecurityID_t_1945947971"); // 1
    Leg_26_set.insert("LegSecurityID_t_1945947971");
    Leg_26.add_attribute("Src", "A"); // 1
    Leg_26_set.insert("A");
    Leg_26.add_attribute("Prod", "8"); // 1
    Leg_26_set.insert("8");
    Leg_26.add_attribute("CFI", "LegCFICode_t_170281123"); // 1
    Leg_26_set.insert("LegCFICode_t_170281123");
    Leg_26.add_attribute("SecTyp", "SECLOAN"); // 1
    Leg_26_set.insert("SECLOAN");
    Leg_26.add_attribute("SecSubTyp", "LegSecuritySubType_t_1585467597"); // 1
    Leg_26_set.insert("LegSecuritySubType_t_1585467597");
    Leg_26.add_attribute("MMY", "918781694"); // 1
    Leg_26_set.insert("918781694");
    Leg_26.add_attribute("Mat", "LegMaturityDate_t_164561779"); // 1
    Leg_26_set.insert("LegMaturityDate_t_164561779");
    Leg_26.add_attribute("MatTm", "749805295"); // 1
    Leg_26_set.insert("749805295");
    Leg_26.add_attribute("CpnPmt", "LegCouponPaymentDate_t_785044339"); // 1
    Leg_26_set.insert("LegCouponPaymentDate_t_785044339");
    Leg_26.add_attribute("Issued", "LegIssueDate_t_937991321"); // 1
    Leg_26_set.insert("LegIssueDate_t_937991321");
    Leg_26.add_attribute("RepoCollSecTyp", "1746119852"); // 1
    Leg_26_set.insert("1746119852");
    Leg_26.add_attribute("RepoTrm", "1508051225"); // 1
    Leg_26_set.insert("1508051225");
    Leg_26.add_attribute("RepoRt", "7178637.380000"); // 1
    Leg_26_set.insert("7178637.380000");
    Leg_26.add_attribute("Fctr", "981974.110000"); // 1
    Leg_26_set.insert("981974.110000");
    Leg_26.add_attribute("CrdRtg", "LegCreditRating_t_1015343705"); // 1
    Leg_26_set.insert("LegCreditRating_t_1015343705");
    Leg_26.add_attribute("Rgstry", "LegInstrRegistry_t_1762653389"); // 1
    Leg_26_set.insert("LegInstrRegistry_t_1762653389");
    Leg_26.add_attribute("Ctry", "1032328600"); // 1
    Leg_26_set.insert("1032328600");
    Leg_26.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_242422062"); // 1
    Leg_26_set.insert("LegStateOrProvinceOfIssue_t_242422062");
    Leg_26.add_attribute("Lcl", "LegLocaleOfIssue_t_488665961"); // 1
    Leg_26_set.insert("LegLocaleOfIssue_t_488665961");
    Leg_26.add_attribute("Redeem", "LegRedemptionDate_t_1128625716"); // 1
    Leg_26_set.insert("LegRedemptionDate_t_1128625716");
    Leg_26.add_attribute("Strk", "13473695.560000"); // 1
    Leg_26_set.insert("13473695.560000");
    Leg_26.add_attribute("StrkCcy", "JPY"); // 1
    Leg_26_set.insert("JPY");
    Leg_26.add_attribute("OptA", "223828514"); // 1
    Leg_26_set.insert("223828514");
    Leg_26.add_attribute("Cmult", "12971852.440000"); // 1
    Leg_26_set.insert("12971852.440000");
    Leg_26.add_attribute("MultTyp", "0"); // 1
    Leg_26_set.insert("0");
    Leg_26.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_26_set.insert("2");
    Leg_26.add_attribute("UOM", "Gal"); // 1
    Leg_26_set.insert("Gal");
    Leg_26.add_attribute("UOMQty", "14932396.700000"); // 1
    Leg_26_set.insert("14932396.700000");
    Leg_26.add_attribute("PxUOM", "Alw"); // 1
    Leg_26_set.insert("Alw");
    Leg_26.add_attribute("PxUOMQty", "10227252.340000"); // 1
    Leg_26_set.insert("10227252.340000");
    Leg_26.add_attribute("TmUnit", "Mo"); // 1
    Leg_26_set.insert("Mo");
    Leg_26.add_attribute("ExerStyle", "1"); // 1
    Leg_26_set.insert("1");
    Leg_26.add_attribute("CpnRt", "11930063.580000"); // 1
    Leg_26_set.insert("11930063.580000");
    Leg_26.add_attribute("Exch", "LegSecurityExchange_t_1275824446"); // 1
    Leg_26_set.insert("LegSecurityExchange_t_1275824446");
    Leg_26.add_attribute("Issr", "LegIssuer_t_215095674"); // 1
    Leg_26_set.insert("LegIssuer_t_215095674");
    Leg_26.add_attribute("EncLegIssrLen", "2111788052"); // 1
    Leg_26_set.insert("2111788052");
    Leg_26.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1440386226"); // 1
    Leg_26_set.insert("EncodedLegIssuer_t_1440386226");
    Leg_26.add_attribute("Desc", "LegSecurityDesc_t_964900969"); // 1
    Leg_26_set.insert("LegSecurityDesc_t_964900969");
    Leg_26.add_attribute("EncLegSecDescLen", "749348743"); // 1
    Leg_26_set.insert("749348743");
    Leg_26.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_230893899"); // 1
    Leg_26_set.insert("EncodedLegSecurityDesc_t_230893899");
    Leg_26.add_attribute("RatioQty", "5635371.730000"); // 1
    Leg_26_set.insert("5635371.730000");
    Leg_26.add_attribute("Side", "1"); // 1
    Leg_26_set.insert("1");
    Leg_26.add_attribute("Ccy", "GBP"); // 1
    Leg_26_set.insert("GBP");
    Leg_26.add_attribute("Pool", "LegPool_t_1125260026"); // 1
    Leg_26_set.insert("LegPool_t_1125260026");
    Leg_26.add_attribute("Dated", "LegDatedDate_t_563927379"); // 1
    Leg_26_set.insert("LegDatedDate_t_563927379");
    Leg_26.add_attribute("CSetMo", "1694063185"); // 1
    Leg_26_set.insert("1694063185");
    Leg_26.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1367682088"); // 1
    Leg_26_set.insert("LegInterestAccrualDate_t_1367682088");
    Leg_26.add_attribute("PutCall", "1052593340"); // 1
    Leg_26_set.insert("1052593340");
    Leg_26.add_attribute("LegOptionRatio", "6752052.530000"); // 1
    Leg_26_set.insert("6752052.530000");
    Leg_26.add_attribute("Px", "5675679.960000"); // 1
    Leg_26_set.insert("5675679.960000");
    all_values.push_back(Leg_26_set);
    all_compo_names.insert("Leg_26_set");

    {
      xml_element LegAID_26{"LegAID"};
      multiset<string> LegAID_26_set;
      LegAID_26.add_attribute("SecAltID", "LegSecurityAltID_t_233486936"); // 2
      LegAID_26_set.insert("LegSecurityAltID_t_233486936");
      LegAID_26.add_attribute("SecAltIDSrc", "K"); // 2
      LegAID_26_set.insert("K");
      all_values.push_back(LegAID_26_set);
      all_compo_names.insert("LegAID_26_set");

      Leg_26.add_element(LegAID_26);
    }
    elt.add_element(Leg_26);
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
