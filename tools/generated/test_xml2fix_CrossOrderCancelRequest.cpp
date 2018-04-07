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
  elt.add_attribute("OrdID", "OrderID_t_269086566"); // 0
  CrossOrderCancelRequest_message_t_0.insert("OrderID_t_269086566");
  elt.add_attribute("ID", "CrossID_t_383796303"); // 0
  CrossOrderCancelRequest_message_t_0.insert("CrossID_t_383796303");
  elt.add_attribute("OrigID", "OrigCrossID_t_1226657339"); // 0
  CrossOrderCancelRequest_message_t_0.insert("OrigCrossID_t_1226657339");
  elt.add_attribute("HstCxID", "HostCrossID_t_1807792965"); // 0
  CrossOrderCancelRequest_message_t_0.insert("HostCrossID_t_1807792965");
  elt.add_attribute("Typ", "3"); // 0
  CrossOrderCancelRequest_message_t_0.insert("3");
  elt.add_attribute("Priorty", "2"); // 0
  CrossOrderCancelRequest_message_t_0.insert("2");
  elt.add_attribute("TxnTm", "TransactTime_t_1197182004"); // 0
  CrossOrderCancelRequest_message_t_0.insert("TransactTime_t_1197182004");
  all_values.push_back(CrossOrderCancelRequest_message_t_0);
  all_compo_names.insert("CrossOrderCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_25{"Hdr"};
    multiset<string> Hdr_25_set;
    Hdr_25.add_attribute("SeqNum", "295221169"); // 1
    Hdr_25_set.insert("295221169");
    Hdr_25.add_attribute("SID", "SenderCompID_t_30684398"); // 1
    Hdr_25_set.insert("SenderCompID_t_30684398");
    Hdr_25.add_attribute("TID", "TargetCompID_t_567305776"); // 1
    Hdr_25_set.insert("TargetCompID_t_567305776");
    Hdr_25.add_attribute("OBID", "OnBehalfOfCompID_t_988547082"); // 1
    Hdr_25_set.insert("OnBehalfOfCompID_t_988547082");
    Hdr_25.add_attribute("D2ID", "DeliverToCompID_t_1881300905"); // 1
    Hdr_25_set.insert("DeliverToCompID_t_1881300905");
    Hdr_25.add_attribute("SSub", "SenderSubID_t_1575106794"); // 1
    Hdr_25_set.insert("SenderSubID_t_1575106794");
    Hdr_25.add_attribute("SLoc", "SenderLocationID_t_871746974"); // 1
    Hdr_25_set.insert("SenderLocationID_t_871746974");
    Hdr_25.add_attribute("TSub", "TargetSubID_t_146365173"); // 1
    Hdr_25_set.insert("TargetSubID_t_146365173");
    Hdr_25.add_attribute("TLoc", "TargetLocationID_t_184306025"); // 1
    Hdr_25_set.insert("TargetLocationID_t_184306025");
    Hdr_25.add_attribute("OBSub", "OnBehalfOfSubID_t_1474529776"); // 1
    Hdr_25_set.insert("OnBehalfOfSubID_t_1474529776");
    Hdr_25.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1452495761"); // 1
    Hdr_25_set.insert("OnBehalfOfLocationID_t_1452495761");
    Hdr_25.add_attribute("D2Sub", "DeliverToSubID_t_793545555"); // 1
    Hdr_25_set.insert("DeliverToSubID_t_793545555");
    Hdr_25.add_attribute("D2Loc", "DeliverToLocationID_t_1433952787"); // 1
    Hdr_25_set.insert("DeliverToLocationID_t_1433952787");
    Hdr_25.add_attribute("PosDup", "N"); // 1
    Hdr_25_set.insert("N");
    Hdr_25.add_attribute("PosRsnd", "N"); // 1
    Hdr_25_set.insert("N");
    Hdr_25.add_attribute("Snt", "SendingTime_t_121768239"); // 1
    Hdr_25_set.insert("SendingTime_t_121768239");
    Hdr_25.add_attribute("OrigSnt", "OrigSendingTime_t_983074623"); // 1
    Hdr_25_set.insert("OrigSendingTime_t_983074623");
    Hdr_25.add_attribute("MsgEncd", "MessageEncoding_t_835873759"); // 1
    Hdr_25_set.insert("MessageEncoding_t_835873759");
    all_values.push_back(Hdr_25_set);
    all_compo_names.insert("Hdr_25_set");

    {
      xml_element Hop_25{"Hop"};
      multiset<string> Hop_25_set;
      Hop_25.add_attribute("ID", "HopCompID_t_864924111"); // 2
      Hop_25_set.insert("HopCompID_t_864924111");
      Hop_25.add_attribute("Ref", "1036276750"); // 2
      Hop_25_set.insert("1036276750");
      Hop_25.add_attribute("Snt", "HopSendingTime_t_358813438"); // 2
      Hop_25_set.insert("HopSendingTime_t_358813438");
      all_values.push_back(Hop_25_set);
      all_compo_names.insert("Hop_25_set");

      Hdr_25.add_element(Hop_25);
    }
    elt.add_element(Hdr_25);
  } // end Hdr
  { // Pty
    xml_element Pty_132{"Pty"};
    multiset<string> Pty_132_set;
    Pty_132.add_attribute("ID", "RootPartyID_t_2022579869"); // 1
    Pty_132_set.insert("RootPartyID_t_2022579869");
    Pty_132.add_attribute("Src", "1"); // 1
    Pty_132_set.insert("1");
    Pty_132.add_attribute("R", "16"); // 1
    Pty_132_set.insert("16");
    all_values.push_back(Pty_132_set);
    all_compo_names.insert("Pty_132_set");

    {
      xml_element Sub_132{"Sub"};
      multiset<string> Sub_132_set;
      Sub_132.add_attribute("ID", "RootPartySubID_t_258892524"); // 2
      Sub_132_set.insert("RootPartySubID_t_258892524");
      Sub_132.add_attribute("Typ", "31"); // 2
      Sub_132_set.insert("31");
      all_values.push_back(Sub_132_set);
      all_compo_names.insert("Sub_132_set");

      Pty_132.add_element(Sub_132);
    }
    elt.add_element(Pty_132);
  } // end Pty
  { // SideCrossCxl
    xml_element SideCrossCxl_0{"SideCrossCxl"};
    multiset<string> SideCrossCxl_0_set;
    SideCrossCxl_0.add_attribute("Side", "7"); // 1
    SideCrossCxl_0_set.insert("7");
    SideCrossCxl_0.add_attribute("OrigClOrdID", "OrigClOrdID_t_1474732728"); // 1
    SideCrossCxl_0_set.insert("OrigClOrdID_t_1474732728");
    SideCrossCxl_0.add_attribute("ClOrdID", "ClOrdID_t_1088809017"); // 1
    SideCrossCxl_0_set.insert("ClOrdID_t_1088809017");
    SideCrossCxl_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_263777447"); // 1
    SideCrossCxl_0_set.insert("SecondaryClOrdID_t_263777447");
    SideCrossCxl_0.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1505417126"); // 1
    SideCrossCxl_0_set.insert("ClOrdLinkID_t_1505417126");
    SideCrossCxl_0.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1656114793"); // 1
    SideCrossCxl_0_set.insert("OrigOrdModTime_t_1656114793");
    SideCrossCxl_0.add_attribute("OrignDt", "TradeOriginationDate_t_1252324530"); // 1
    SideCrossCxl_0_set.insert("TradeOriginationDate_t_1252324530");
    SideCrossCxl_0.add_attribute("TrdDt", "TradeDate_t_1239234383"); // 1
    SideCrossCxl_0_set.insert("TradeDate_t_1239234383");
    SideCrossCxl_0.add_attribute("ComplianceID", "ComplianceID_t_1083737939"); // 1
    SideCrossCxl_0_set.insert("ComplianceID_t_1083737939");
    SideCrossCxl_0.add_attribute("Txt", "Text_t_2124071504"); // 1
    SideCrossCxl_0_set.insert("Text_t_2124071504");
    SideCrossCxl_0.add_attribute("EncTxtLen", "1385599556"); // 1
    SideCrossCxl_0_set.insert("1385599556");
    SideCrossCxl_0.add_attribute("EncTxt", "EncodedText_t_1268043965"); // 1
    SideCrossCxl_0_set.insert("EncodedText_t_1268043965");
    all_values.push_back(SideCrossCxl_0_set);
    all_compo_names.insert("SideCrossCxl_0_set");

    {
      xml_element Pty_133{"Pty"};
      multiset<string> Pty_133_set;
      Pty_133.add_attribute("ID", "PartyID_t_1451117632"); // 2
      Pty_133_set.insert("PartyID_t_1451117632");
      Pty_133.add_attribute("Src", "I"); // 2
      Pty_133_set.insert("I");
      Pty_133.add_attribute("R", "5"); // 2
      Pty_133_set.insert("5");
      all_values.push_back(Pty_133_set);
      all_compo_names.insert("Pty_133_set");

      {
        xml_element Sub_133{"Sub"};
        multiset<string> Sub_133_set;
        Sub_133.add_attribute("ID", "PartySubID_t_737586771"); // 3
        Sub_133_set.insert("PartySubID_t_737586771");
        Sub_133.add_attribute("Typ", "13"); // 3
        Sub_133_set.insert("13");
        all_values.push_back(Sub_133_set);
        all_compo_names.insert("Sub_133_set");

        Pty_133.add_element(Sub_133);
      }
      SideCrossCxl_0.add_element(Pty_133);
    }
    {
      xml_element OrdQty_3{"OrdQty"};
      multiset<string> OrdQty_3_set;
      OrdQty_3.add_attribute("Qty", "20119367.840000"); // 2
      OrdQty_3_set.insert("20119367.840000");
      OrdQty_3.add_attribute("Cash", "8593550.110000"); // 2
      OrdQty_3_set.insert("8593550.110000");
      OrdQty_3.add_attribute("Pct", "17650534.510000"); // 2
      OrdQty_3_set.insert("17650534.510000");
      OrdQty_3.add_attribute("RndDir", "1"); // 2
      OrdQty_3_set.insert("1");
      OrdQty_3.add_attribute("RndMod", "17242791.220000"); // 2
      OrdQty_3_set.insert("17242791.220000");
      all_values.push_back(OrdQty_3_set);
      all_compo_names.insert("OrdQty_3_set");

      SideCrossCxl_0.add_element(OrdQty_3);
    }
    elt.add_element(SideCrossCxl_0);
  } // end SideCrossCxl
  { // SideCrossCxl
    xml_element SideCrossCxl_1{"SideCrossCxl"};
    multiset<string> SideCrossCxl_1_set;
    SideCrossCxl_1.add_attribute("Side", "A"); // 1
    SideCrossCxl_1_set.insert("A");
    SideCrossCxl_1.add_attribute("OrigClOrdID", "OrigClOrdID_t_1059140334"); // 1
    SideCrossCxl_1_set.insert("OrigClOrdID_t_1059140334");
    SideCrossCxl_1.add_attribute("ClOrdID", "ClOrdID_t_1686510252"); // 1
    SideCrossCxl_1_set.insert("ClOrdID_t_1686510252");
    SideCrossCxl_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_528942774"); // 1
    SideCrossCxl_1_set.insert("SecondaryClOrdID_t_528942774");
    SideCrossCxl_1.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_734353984"); // 1
    SideCrossCxl_1_set.insert("ClOrdLinkID_t_734353984");
    SideCrossCxl_1.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1917827947"); // 1
    SideCrossCxl_1_set.insert("OrigOrdModTime_t_1917827947");
    SideCrossCxl_1.add_attribute("OrignDt", "TradeOriginationDate_t_787835299"); // 1
    SideCrossCxl_1_set.insert("TradeOriginationDate_t_787835299");
    SideCrossCxl_1.add_attribute("TrdDt", "TradeDate_t_1636224974"); // 1
    SideCrossCxl_1_set.insert("TradeDate_t_1636224974");
    SideCrossCxl_1.add_attribute("ComplianceID", "ComplianceID_t_1809454960"); // 1
    SideCrossCxl_1_set.insert("ComplianceID_t_1809454960");
    SideCrossCxl_1.add_attribute("Txt", "Text_t_756391577"); // 1
    SideCrossCxl_1_set.insert("Text_t_756391577");
    SideCrossCxl_1.add_attribute("EncTxtLen", "963474054"); // 1
    SideCrossCxl_1_set.insert("963474054");
    SideCrossCxl_1.add_attribute("EncTxt", "EncodedText_t_750780330"); // 1
    SideCrossCxl_1_set.insert("EncodedText_t_750780330");
    all_values.push_back(SideCrossCxl_1_set);
    all_compo_names.insert("SideCrossCxl_1_set");

    {
      xml_element Pty_134{"Pty"};
      multiset<string> Pty_134_set;
      Pty_134.add_attribute("ID", "PartyID_t_1020169025"); // 2
      Pty_134_set.insert("PartyID_t_1020169025");
      Pty_134.add_attribute("Src", "1"); // 2
      Pty_134_set.insert("1");
      Pty_134.add_attribute("R", "73"); // 2
      Pty_134_set.insert("73");
      all_values.push_back(Pty_134_set);
      all_compo_names.insert("Pty_134_set");

      {
        xml_element Sub_134{"Sub"};
        multiset<string> Sub_134_set;
        Sub_134.add_attribute("ID", "PartySubID_t_125009907"); // 3
        Sub_134_set.insert("PartySubID_t_125009907");
        Sub_134.add_attribute("Typ", "17"); // 3
        Sub_134_set.insert("17");
        all_values.push_back(Sub_134_set);
        all_compo_names.insert("Sub_134_set");

        Pty_134.add_element(Sub_134);
      }
      SideCrossCxl_1.add_element(Pty_134);
    }
    {
      xml_element OrdQty_4{"OrdQty"};
      multiset<string> OrdQty_4_set;
      OrdQty_4.add_attribute("Qty", "13431494.150000"); // 2
      OrdQty_4_set.insert("13431494.150000");
      OrdQty_4.add_attribute("Cash", "1015977.630000"); // 2
      OrdQty_4_set.insert("1015977.630000");
      OrdQty_4.add_attribute("Pct", "7987578.230000"); // 2
      OrdQty_4_set.insert("7987578.230000");
      OrdQty_4.add_attribute("RndDir", "2"); // 2
      OrdQty_4_set.insert("2");
      OrdQty_4.add_attribute("RndMod", "15527153.960000"); // 2
      OrdQty_4_set.insert("15527153.960000");
      all_values.push_back(OrdQty_4_set);
      all_compo_names.insert("OrdQty_4_set");

      SideCrossCxl_1.add_element(OrdQty_4);
    }
    elt.add_element(SideCrossCxl_1);
  } // end SideCrossCxl
  { // SideCrossCxl
    xml_element SideCrossCxl_2{"SideCrossCxl"};
    multiset<string> SideCrossCxl_2_set;
    SideCrossCxl_2.add_attribute("Side", "5"); // 1
    SideCrossCxl_2_set.insert("5");
    SideCrossCxl_2.add_attribute("OrigClOrdID", "OrigClOrdID_t_377815604"); // 1
    SideCrossCxl_2_set.insert("OrigClOrdID_t_377815604");
    SideCrossCxl_2.add_attribute("ClOrdID", "ClOrdID_t_142818519"); // 1
    SideCrossCxl_2_set.insert("ClOrdID_t_142818519");
    SideCrossCxl_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_123864672"); // 1
    SideCrossCxl_2_set.insert("SecondaryClOrdID_t_123864672");
    SideCrossCxl_2.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_242268740"); // 1
    SideCrossCxl_2_set.insert("ClOrdLinkID_t_242268740");
    SideCrossCxl_2.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1002173530"); // 1
    SideCrossCxl_2_set.insert("OrigOrdModTime_t_1002173530");
    SideCrossCxl_2.add_attribute("OrignDt", "TradeOriginationDate_t_1888918123"); // 1
    SideCrossCxl_2_set.insert("TradeOriginationDate_t_1888918123");
    SideCrossCxl_2.add_attribute("TrdDt", "TradeDate_t_942595635"); // 1
    SideCrossCxl_2_set.insert("TradeDate_t_942595635");
    SideCrossCxl_2.add_attribute("ComplianceID", "ComplianceID_t_578969005"); // 1
    SideCrossCxl_2_set.insert("ComplianceID_t_578969005");
    SideCrossCxl_2.add_attribute("Txt", "Text_t_395281028"); // 1
    SideCrossCxl_2_set.insert("Text_t_395281028");
    SideCrossCxl_2.add_attribute("EncTxtLen", "2001735969"); // 1
    SideCrossCxl_2_set.insert("2001735969");
    SideCrossCxl_2.add_attribute("EncTxt", "EncodedText_t_117995609"); // 1
    SideCrossCxl_2_set.insert("EncodedText_t_117995609");
    all_values.push_back(SideCrossCxl_2_set);
    all_compo_names.insert("SideCrossCxl_2_set");

    {
      xml_element Pty_135{"Pty"};
      multiset<string> Pty_135_set;
      Pty_135.add_attribute("ID", "PartyID_t_924223803"); // 2
      Pty_135_set.insert("PartyID_t_924223803");
      Pty_135.add_attribute("Src", "7"); // 2
      Pty_135_set.insert("7");
      Pty_135.add_attribute("R", "62"); // 2
      Pty_135_set.insert("62");
      all_values.push_back(Pty_135_set);
      all_compo_names.insert("Pty_135_set");

      {
        xml_element Sub_135{"Sub"};
        multiset<string> Sub_135_set;
        Sub_135.add_attribute("ID", "PartySubID_t_1712059102"); // 3
        Sub_135_set.insert("PartySubID_t_1712059102");
        Sub_135.add_attribute("Typ", "5"); // 3
        Sub_135_set.insert("5");
        all_values.push_back(Sub_135_set);
        all_compo_names.insert("Sub_135_set");

        Pty_135.add_element(Sub_135);
      }
      SideCrossCxl_2.add_element(Pty_135);
    }
    {
      xml_element OrdQty_5{"OrdQty"};
      multiset<string> OrdQty_5_set;
      OrdQty_5.add_attribute("Qty", "16977948.690000"); // 2
      OrdQty_5_set.insert("16977948.690000");
      OrdQty_5.add_attribute("Cash", "3209670.310000"); // 2
      OrdQty_5_set.insert("3209670.310000");
      OrdQty_5.add_attribute("Pct", "10408216.860000"); // 2
      OrdQty_5_set.insert("10408216.860000");
      OrdQty_5.add_attribute("RndDir", "1"); // 2
      OrdQty_5_set.insert("1");
      OrdQty_5.add_attribute("RndMod", "13411360.560000"); // 2
      OrdQty_5_set.insert("13411360.560000");
      all_values.push_back(OrdQty_5_set);
      all_compo_names.insert("OrdQty_5_set");

      SideCrossCxl_2.add_element(OrdQty_5);
    }
    elt.add_element(SideCrossCxl_2);
  } // end SideCrossCxl
  { // Instrmt
    xml_element Instrmt_17{"Instrmt"};
    multiset<string> Instrmt_17_set;
    Instrmt_17.add_attribute("Sym", "Symbol_t_1362229218"); // 1
    Instrmt_17_set.insert("Symbol_t_1362229218");
    Instrmt_17.add_attribute("Sfx", "CD"); // 1
    Instrmt_17_set.insert("CD");
    Instrmt_17.add_attribute("ID", "SecurityID_t_1466145963"); // 1
    Instrmt_17_set.insert("SecurityID_t_1466145963");
    Instrmt_17.add_attribute("Src", "G"); // 1
    Instrmt_17_set.insert("G");
    Instrmt_17.add_attribute("Prod", "11"); // 1
    Instrmt_17_set.insert("11");
    Instrmt_17.add_attribute("ProdCmplx", "ProductComplex_t_1567743727"); // 1
    Instrmt_17_set.insert("ProductComplex_t_1567743727");
    Instrmt_17.add_attribute("SecGrp", "SecurityGroup_t_1574145308"); // 1
    Instrmt_17_set.insert("SecurityGroup_t_1574145308");
    Instrmt_17.add_attribute("CFI", "CFICode_t_219878525"); // 1
    Instrmt_17_set.insert("CFICode_t_219878525");
    Instrmt_17.add_attribute("SecTyp", "CAN"); // 1
    Instrmt_17_set.insert("CAN");
    Instrmt_17.add_attribute("SubTyp", "SecuritySubType_t_916031152"); // 1
    Instrmt_17_set.insert("SecuritySubType_t_916031152");
    Instrmt_17.add_attribute("MMY", "597694129"); // 1
    Instrmt_17_set.insert("597694129");
    Instrmt_17.add_attribute("MatDt", "MaturityDate_t_1115793994"); // 1
    Instrmt_17_set.insert("MaturityDate_t_1115793994");
    Instrmt_17.add_attribute("MatTm", "1039895825"); // 1
    Instrmt_17_set.insert("1039895825");
    Instrmt_17.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_839962869"); // 1
    Instrmt_17_set.insert("SettleOnOpenFlag_t_839962869");
    Instrmt_17.add_attribute("AsgnMeth", "2117967525"); // 1
    Instrmt_17_set.insert("2117967525");
    Instrmt_17.add_attribute("Status", "1"); // 1
    Instrmt_17_set.insert("1");
    Instrmt_17.add_attribute("CpnPmt", "CouponPaymentDate_t_1782558505"); // 1
    Instrmt_17_set.insert("CouponPaymentDate_t_1782558505");
    Instrmt_17.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_17_set.insert("MM");
    Instrmt_17.add_attribute("Snrty", "SR"); // 1
    Instrmt_17_set.insert("SR");
    Instrmt_17.add_attribute("NotlPctOut", "16368108.260000"); // 1
    Instrmt_17_set.insert("16368108.260000");
    Instrmt_17.add_attribute("OrigNotlPctOut", "6674484.910000"); // 1
    Instrmt_17_set.insert("6674484.910000");
    Instrmt_17.add_attribute("AttchPnt", "21008351.320000"); // 1
    Instrmt_17_set.insert("21008351.320000");
    Instrmt_17.add_attribute("DetchPnt", "779334.840000"); // 1
    Instrmt_17_set.insert("779334.840000");
    Instrmt_17.add_attribute("Issued", "IssueDate_t_555788399"); // 1
    Instrmt_17_set.insert("IssueDate_t_555788399");
    Instrmt_17.add_attribute("RepoCollSecTyp", "1665410586"); // 1
    Instrmt_17_set.insert("1665410586");
    Instrmt_17.add_attribute("RepoTrm", "155281116"); // 1
    Instrmt_17_set.insert("155281116");
    Instrmt_17.add_attribute("RepoRt", "1060996.200000"); // 1
    Instrmt_17_set.insert("1060996.200000");
    Instrmt_17.add_attribute("Fctr", "19863776.170000"); // 1
    Instrmt_17_set.insert("19863776.170000");
    Instrmt_17.add_attribute("CrdRtg", "CreditRating_t_1196102802"); // 1
    Instrmt_17_set.insert("CreditRating_t_1196102802");
    Instrmt_17.add_attribute("Rgstry", "InstrRegistry_t_407191171"); // 1
    Instrmt_17_set.insert("InstrRegistry_t_407191171");
    Instrmt_17.add_attribute("IssuCtry", "1180030026"); // 1
    Instrmt_17_set.insert("1180030026");
    Instrmt_17.add_attribute("StPrv", "StateOrProvinceOfIssue_t_410848372"); // 1
    Instrmt_17_set.insert("StateOrProvinceOfIssue_t_410848372");
    Instrmt_17.add_attribute("Lcl", "LocaleOfIssue_t_967694198"); // 1
    Instrmt_17_set.insert("LocaleOfIssue_t_967694198");
    Instrmt_17.add_attribute("Redeem", "RedemptionDate_t_498692341"); // 1
    Instrmt_17_set.insert("RedemptionDate_t_498692341");
    Instrmt_17.add_attribute("StrkPx", "11862358.570000"); // 1
    Instrmt_17_set.insert("11862358.570000");
    Instrmt_17.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_17_set.insert("GBP");
    Instrmt_17.add_attribute("StrkMult", "6128975.170000"); // 1
    Instrmt_17_set.insert("6128975.170000");
    Instrmt_17.add_attribute("StrkValu", "9437415.170000"); // 1
    Instrmt_17_set.insert("9437415.170000");
    Instrmt_17.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_17_set.insert("4");
    Instrmt_17.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_17_set.insert("1");
    Instrmt_17.add_attribute("StrkPxBndryPrcsn", "15414356.460000"); // 1
    Instrmt_17_set.insert("15414356.460000");
    Instrmt_17.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_17_set.insert("3");
    Instrmt_17.add_attribute("OptAt", "421340847"); // 1
    Instrmt_17_set.insert("421340847");
    Instrmt_17.add_attribute("Mult", "2339148.680000"); // 1
    Instrmt_17_set.insert("2339148.680000");
    Instrmt_17.add_attribute("MultTyp", "1"); // 1
    Instrmt_17_set.insert("1");
    Instrmt_17.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_17_set.insert("2");
    Instrmt_17.add_attribute("MinPxIncr", "20164733.730000"); // 1
    Instrmt_17_set.insert("20164733.730000");
    Instrmt_17.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_380175001"); // 1
    Instrmt_17_set.insert("MinPriceIncrementAmount_t_380175001");
    Instrmt_17.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_17_set.insert("MMBtu");
    Instrmt_17.add_attribute("UOMQty", "15058005.510000"); // 1
    Instrmt_17_set.insert("15058005.510000");
    Instrmt_17.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_17_set.insert("MMbbl");
    Instrmt_17.add_attribute("PxUOMQty", "1851503.120000"); // 1
    Instrmt_17_set.insert("1851503.120000");
    Instrmt_17.add_attribute("SettlMeth", "C"); // 1
    Instrmt_17_set.insert("C");
    Instrmt_17.add_attribute("ExerStyle", "1"); // 1
    Instrmt_17_set.insert("1");
    Instrmt_17.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_17_set.insert("3");
    Instrmt_17.add_attribute("OptPayAmt", "OptPayoutAmount_t_1739015152"); // 1
    Instrmt_17_set.insert("OptPayoutAmount_t_1739015152");
    Instrmt_17.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_17_set.insert("STD");
    Instrmt_17.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_17_set.insert("CDS");
    Instrmt_17.add_attribute("ListMeth", "1"); // 1
    Instrmt_17_set.insert("1");
    Instrmt_17.add_attribute("CapPx", "21167026.830000"); // 1
    Instrmt_17_set.insert("21167026.830000");
    Instrmt_17.add_attribute("FlrPx", "7220012.460000"); // 1
    Instrmt_17_set.insert("7220012.460000");
    Instrmt_17.add_attribute("PutCall", "1"); // 1
    Instrmt_17_set.insert("1");
    Instrmt_17.add_attribute("FlexInd", "false"); // 1
    Instrmt_17_set.insert("false");
    Instrmt_17.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_17_set.insert("false");
    Instrmt_17.add_attribute("TmUnit", "D"); // 1
    Instrmt_17_set.insert("D");
    Instrmt_17.add_attribute("CpnRt", "16607762.250000"); // 1
    Instrmt_17_set.insert("16607762.250000");
    Instrmt_17.add_attribute("Exch", "SecurityExchange_t_1139646008"); // 1
    Instrmt_17_set.insert("SecurityExchange_t_1139646008");
    Instrmt_17.add_attribute("PosLmt", "850132406"); // 1
    Instrmt_17_set.insert("850132406");
    Instrmt_17.add_attribute("NTPosLmt", "457034094"); // 1
    Instrmt_17_set.insert("457034094");
    Instrmt_17.add_attribute("Issr", "Issuer_t_2031573903"); // 1
    Instrmt_17_set.insert("Issuer_t_2031573903");
    Instrmt_17.add_attribute("EncIssrLen", "231577428"); // 1
    Instrmt_17_set.insert("231577428");
    Instrmt_17.add_attribute("EncIssr", "EncodedIssuer_t_1998469740"); // 1
    Instrmt_17_set.insert("EncodedIssuer_t_1998469740");
    Instrmt_17.add_attribute("Desc", "SecurityDesc_t_1891812145"); // 1
    Instrmt_17_set.insert("SecurityDesc_t_1891812145");
    Instrmt_17.add_attribute("EncSecDescLen", "652918275"); // 1
    Instrmt_17_set.insert("652918275");
    Instrmt_17.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_84900960"); // 1
    Instrmt_17_set.insert("EncodedSecurityDesc_t_84900960");
    Instrmt_17.add_attribute("Pool", "Pool_t_1722534264"); // 1
    Instrmt_17_set.insert("Pool_t_1722534264");
    Instrmt_17.add_attribute("CSetMo", "1855589423"); // 1
    Instrmt_17_set.insert("1855589423");
    Instrmt_17.add_attribute("CPPgm", "1"); // 1
    Instrmt_17_set.insert("1");
    Instrmt_17.add_attribute("CPRegT", "CPRegType_t_2102709265"); // 1
    Instrmt_17_set.insert("CPRegType_t_2102709265");
    Instrmt_17.add_attribute("Dated", "DatedDate_t_2087388251"); // 1
    Instrmt_17_set.insert("DatedDate_t_2087388251");
    Instrmt_17.add_attribute("IntAcrl", "InterestAccrualDate_t_1459691237"); // 1
    Instrmt_17_set.insert("InterestAccrualDate_t_1459691237");
    all_values.push_back(Instrmt_17_set);
    all_compo_names.insert("Instrmt_17_set");

    {
      xml_element AID_17{"AID"};
      multiset<string> AID_17_set;
      AID_17.add_attribute("AltID", "SecurityAltID_t_1002849109"); // 2
      AID_17_set.insert("SecurityAltID_t_1002849109");
      AID_17.add_attribute("AltIDSrc", "9"); // 2
      AID_17_set.insert("9");
      all_values.push_back(AID_17_set);
      all_compo_names.insert("AID_17_set");

      Instrmt_17.add_element(AID_17);
    }
    {
      xml_element SecXML_17{"SecXML"};
      multiset<string> SecXML_17_set;
      SecXML_17.add_attribute("Schema", "SecurityXMLSchema_t_895941625"); // 2
      SecXML_17_set.insert("SecurityXMLSchema_t_895941625");
      all_values.push_back(SecXML_17_set);
      all_compo_names.insert("SecXML_17_set");

      Instrmt_17.add_element(SecXML_17);
    }
    {
      xml_element Evnt_17{"Evnt"};
      multiset<string> Evnt_17_set;
      Evnt_17.add_attribute("EventTyp", "13"); // 2
      Evnt_17_set.insert("13");
      Evnt_17.add_attribute("Dt", "EventDate_t_1975615814"); // 2
      Evnt_17_set.insert("EventDate_t_1975615814");
      Evnt_17.add_attribute("Tm", "EventTime_t_487473129"); // 2
      Evnt_17_set.insert("EventTime_t_487473129");
      Evnt_17.add_attribute("Px", "208052.170000"); // 2
      Evnt_17_set.insert("208052.170000");
      Evnt_17.add_attribute("Txt", "EventText_t_1517587034"); // 2
      Evnt_17_set.insert("EventText_t_1517587034");
      all_values.push_back(Evnt_17_set);
      all_compo_names.insert("Evnt_17_set");

      Instrmt_17.add_element(Evnt_17);
    }
    {
      xml_element Pty_136{"Pty"};
      multiset<string> Pty_136_set;
      Pty_136.add_attribute("ID", "InstrumentPartyID_t_1275107436"); // 2
      Pty_136_set.insert("InstrumentPartyID_t_1275107436");
      Pty_136.add_attribute("Src", "H"); // 2
      Pty_136_set.insert("H");
      Pty_136.add_attribute("R", "62"); // 2
      Pty_136_set.insert("62");
      all_values.push_back(Pty_136_set);
      all_compo_names.insert("Pty_136_set");

      {
        xml_element Sub_136{"Sub"};
        multiset<string> Sub_136_set;
        Sub_136.add_attribute("ID", "InstrumentPartySubID_t_326106468"); // 3
        Sub_136_set.insert("InstrumentPartySubID_t_326106468");
        Sub_136.add_attribute("Typ", "8"); // 3
        Sub_136_set.insert("8");
        all_values.push_back(Sub_136_set);
        all_compo_names.insert("Sub_136_set");

        Pty_136.add_element(Sub_136);
      }
      Instrmt_17.add_element(Pty_136);
    }
    {
      xml_element CmplxEvnt_17{"CmplxEvnt"};
      multiset<string> CmplxEvnt_17_set;
      CmplxEvnt_17.add_attribute("Typ", "9"); // 2
      CmplxEvnt_17_set.insert("9");
      CmplxEvnt_17.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_563341357"); // 2
      CmplxEvnt_17_set.insert("ComplexOptPayoutAmount_t_563341357");
      CmplxEvnt_17.add_attribute("Px", "4402300.630000"); // 2
      CmplxEvnt_17_set.insert("4402300.630000");
      CmplxEvnt_17.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_17_set.insert("1");
      CmplxEvnt_17.add_attribute("PxBndryPrcsn", "14134737.630000"); // 2
      CmplxEvnt_17_set.insert("14134737.630000");
      CmplxEvnt_17.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_17_set.insert("2");
      CmplxEvnt_17.add_attribute("Cond", "2"); // 2
      CmplxEvnt_17_set.insert("2");
      all_values.push_back(CmplxEvnt_17_set);
      all_compo_names.insert("CmplxEvnt_17_set");

      {
        xml_element EvntDts_17{"EvntDts"};
        multiset<string> EvntDts_17_set;
        EvntDts_17.add_attribute("StartDt", "ComplexEventStartDate_t_1645051192"); // 3
        EvntDts_17_set.insert("ComplexEventStartDate_t_1645051192");
        EvntDts_17.add_attribute("EndDt", "ComplexEventEndDate_t_748250249"); // 3
        EvntDts_17_set.insert("ComplexEventEndDate_t_748250249");
        all_values.push_back(EvntDts_17_set);
        all_compo_names.insert("EvntDts_17_set");

        {
          xml_element EvntTms_17{"EvntTms"};
          multiset<string> EvntTms_17_set;
          EvntTms_17.add_attribute("StartTm", "2080862981"); // 4
          EvntTms_17_set.insert("2080862981");
          EvntTms_17.add_attribute("EndTm", "150485819"); // 4
          EvntTms_17_set.insert("150485819");
          all_values.push_back(EvntTms_17_set);
          all_compo_names.insert("EvntTms_17_set");

          EvntDts_17.add_element(EvntTms_17);
        }
        CmplxEvnt_17.add_element(EvntDts_17);
      }
      Instrmt_17.add_element(CmplxEvnt_17);
    }
    elt.add_element(Instrmt_17);
  } // end Instrmt
  { // Undly
    xml_element Undly_27{"Undly"};
    multiset<string> Undly_27_set;
    Undly_27.add_attribute("Sym", "UnderlyingSymbol_t_1655913597"); // 1
    Undly_27_set.insert("UnderlyingSymbol_t_1655913597");
    Undly_27.add_attribute("Sfx", "CD"); // 1
    Undly_27_set.insert("CD");
    Undly_27.add_attribute("ID", "UnderlyingSecurityID_t_787041895"); // 1
    Undly_27_set.insert("UnderlyingSecurityID_t_787041895");
    Undly_27.add_attribute("Src", "G"); // 1
    Undly_27_set.insert("G");
    Undly_27.add_attribute("Prod", "2"); // 1
    Undly_27_set.insert("2");
    Undly_27.add_attribute("CFI", "UnderlyingCFICode_t_99249484"); // 1
    Undly_27_set.insert("UnderlyingCFICode_t_99249484");
    Undly_27.add_attribute("SecTyp", "PS"); // 1
    Undly_27_set.insert("PS");
    Undly_27.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2071034762"); // 1
    Undly_27_set.insert("UnderlyingSecuritySubType_t_2071034762");
    Undly_27.add_attribute("MMY", "995191109"); // 1
    Undly_27_set.insert("995191109");
    Undly_27.add_attribute("Mat", "UnderlyingMaturityDate_t_925282029"); // 1
    Undly_27_set.insert("UnderlyingMaturityDate_t_925282029");
    Undly_27.add_attribute("MatTm", "1899166928"); // 1
    Undly_27_set.insert("1899166928");
    Undly_27.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1482664239"); // 1
    Undly_27_set.insert("UnderlyingCouponPaymentDate_t_1482664239");
    Undly_27.add_attribute("RestrctTyp", "MM"); // 1
    Undly_27_set.insert("MM");
    Undly_27.add_attribute("Snrty", "SD"); // 1
    Undly_27_set.insert("SD");
    Undly_27.add_attribute("NotlPctOut", "6102880.270000"); // 1
    Undly_27_set.insert("6102880.270000");
    Undly_27.add_attribute("OrigNotlPctOut", "9361114.990000"); // 1
    Undly_27_set.insert("9361114.990000");
    Undly_27.add_attribute("AttchPnt", "13613749.470000"); // 1
    Undly_27_set.insert("13613749.470000");
    Undly_27.add_attribute("DetchPnt", "9363944.950000"); // 1
    Undly_27_set.insert("9363944.950000");
    Undly_27.add_attribute("Issued", "UnderlyingIssueDate_t_1863048985"); // 1
    Undly_27_set.insert("UnderlyingIssueDate_t_1863048985");
    Undly_27.add_attribute("RepoCollSecTyp", "526689519"); // 1
    Undly_27_set.insert("526689519");
    Undly_27.add_attribute("RepoTrm", "1499735852"); // 1
    Undly_27_set.insert("1499735852");
    Undly_27.add_attribute("RepoRt", "1557954.000000"); // 1
    Undly_27_set.insert("1557954.000000");
    Undly_27.add_attribute("Fctr", "8316500.990000"); // 1
    Undly_27_set.insert("8316500.990000");
    Undly_27.add_attribute("CrdRtg", "UnderlyingCreditRating_t_765725968"); // 1
    Undly_27_set.insert("UnderlyingCreditRating_t_765725968");
    Undly_27.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1053059557"); // 1
    Undly_27_set.insert("UnderlyingInstrRegistry_t_1053059557");
    Undly_27.add_attribute("Ctry", "1020700935"); // 1
    Undly_27_set.insert("1020700935");
    Undly_27.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_263293512"); // 1
    Undly_27_set.insert("UnderlyingStateOrProvinceOfIssue_t_263293512");
    Undly_27.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1801309806"); // 1
    Undly_27_set.insert("UnderlyingLocaleOfIssue_t_1801309806");
    Undly_27.add_attribute("Redeem", "UnderlyingRedemptionDate_t_954080268"); // 1
    Undly_27_set.insert("UnderlyingRedemptionDate_t_954080268");
    Undly_27.add_attribute("StrkPx", "4137793.310000"); // 1
    Undly_27_set.insert("4137793.310000");
    Undly_27.add_attribute("StrkCcy", "EUR"); // 1
    Undly_27_set.insert("EUR");
    Undly_27.add_attribute("OptA", "272370926"); // 1
    Undly_27_set.insert("272370926");
    Undly_27.add_attribute("Mult", "12740192.640000"); // 1
    Undly_27_set.insert("12740192.640000");
    Undly_27.add_attribute("MultTyp", "1"); // 1
    Undly_27_set.insert("1");
    Undly_27.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_27_set.insert("4");
    Undly_27.add_attribute("UOM", "lbs"); // 1
    Undly_27_set.insert("lbs");
    Undly_27.add_attribute("UOMQty", "3926704.610000"); // 1
    Undly_27_set.insert("3926704.610000");
    Undly_27.add_attribute("PxUOM", "lbs"); // 1
    Undly_27_set.insert("lbs");
    Undly_27.add_attribute("PxUOMQty", "2209762.100000"); // 1
    Undly_27_set.insert("2209762.100000");
    Undly_27.add_attribute("TmUnit", "Min"); // 1
    Undly_27_set.insert("Min");
    Undly_27.add_attribute("ExerStyle", "1"); // 1
    Undly_27_set.insert("1");
    Undly_27.add_attribute("CpnRt", "17036404.490000"); // 1
    Undly_27_set.insert("17036404.490000");
    Undly_27.add_attribute("Exch", "UnderlyingSecurityExchange_t_116556089"); // 1
    Undly_27_set.insert("UnderlyingSecurityExchange_t_116556089");
    Undly_27.add_attribute("Issr", "UnderlyingIssuer_t_1015371833"); // 1
    Undly_27_set.insert("UnderlyingIssuer_t_1015371833");
    Undly_27.add_attribute("EncUndIssrLen", "166444828"); // 1
    Undly_27_set.insert("166444828");
    Undly_27.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1052667588"); // 1
    Undly_27_set.insert("EncodedUnderlyingIssuer_t_1052667588");
    Undly_27.add_attribute("Desc", "UnderlyingSecurityDesc_t_229263133"); // 1
    Undly_27_set.insert("UnderlyingSecurityDesc_t_229263133");
    Undly_27.add_attribute("EncUndSecDescLen", "1102839324"); // 1
    Undly_27_set.insert("1102839324");
    Undly_27.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_768232925"); // 1
    Undly_27_set.insert("EncodedUnderlyingSecurityDesc_t_768232925");
    Undly_27.add_attribute("CPPgm", "UnderlyingCPProgram_t_755952652"); // 1
    Undly_27_set.insert("UnderlyingCPProgram_t_755952652");
    Undly_27.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_455091528"); // 1
    Undly_27_set.insert("UnderlyingCPRegType_t_455091528");
    Undly_27.add_attribute("AllocPct", "9240283.250000"); // 1
    Undly_27_set.insert("9240283.250000");
    Undly_27.add_attribute("Ccy", "JPY"); // 1
    Undly_27_set.insert("JPY");
    Undly_27.add_attribute("Qty", "19770878.820000"); // 1
    Undly_27_set.insert("19770878.820000");
    Undly_27.add_attribute("SettlTyp", "5"); // 1
    Undly_27_set.insert("5");
    Undly_27.add_attribute("CashAmt", "UnderlyingCashAmount_t_1484111008"); // 1
    Undly_27_set.insert("UnderlyingCashAmount_t_1484111008");
    Undly_27.add_attribute("CashTyp", "FIXED"); // 1
    Undly_27_set.insert("FIXED");
    Undly_27.add_attribute("Px", "14149003.070000"); // 1
    Undly_27_set.insert("14149003.070000");
    Undly_27.add_attribute("DirtPx", "18978903.400000"); // 1
    Undly_27_set.insert("18978903.400000");
    Undly_27.add_attribute("EndPx", "21178914.090000"); // 1
    Undly_27_set.insert("21178914.090000");
    Undly_27.add_attribute("StartVal", "UnderlyingStartValue_t_1877410524"); // 1
    Undly_27_set.insert("UnderlyingStartValue_t_1877410524");
    Undly_27.add_attribute("CurVal", "UnderlyingCurrentValue_t_22777618"); // 1
    Undly_27_set.insert("UnderlyingCurrentValue_t_22777618");
    Undly_27.add_attribute("EndVal", "UnderlyingEndValue_t_1244427025"); // 1
    Undly_27_set.insert("UnderlyingEndValue_t_1244427025");
    Undly_27.add_attribute("AdjQty", "18035763.090000"); // 1
    Undly_27_set.insert("18035763.090000");
    Undly_27.add_attribute("FxRate", "936447.420000"); // 1
    Undly_27_set.insert("936447.420000");
    Undly_27.add_attribute("FxRateCalc", "D"); // 1
    Undly_27_set.insert("D");
    Undly_27.add_attribute("CapValu", "UnderlyingCapValue_t_48763122"); // 1
    Undly_27_set.insert("UnderlyingCapValue_t_48763122");
    Undly_27.add_attribute("SetMeth", "UnderlyingSettlMethod_t_88062980"); // 1
    Undly_27_set.insert("UnderlyingSettlMethod_t_88062980");
    Undly_27.add_attribute("PutCall", "691188335"); // 1
    Undly_27_set.insert("691188335");
    all_values.push_back(Undly_27_set);
    all_compo_names.insert("Undly_27_set");

    {
      xml_element UndAID_27{"UndAID"};
      multiset<string> UndAID_27_set;
      UndAID_27.add_attribute("AltID", "UnderlyingSecurityAltID_t_1366715612"); // 2
      UndAID_27_set.insert("UnderlyingSecurityAltID_t_1366715612");
      UndAID_27.add_attribute("AltIDSrc", "H"); // 2
      UndAID_27_set.insert("H");
      all_values.push_back(UndAID_27_set);
      all_compo_names.insert("UndAID_27_set");

      Undly_27.add_element(UndAID_27);
    }
    {
      xml_element Stip_44{"Stip"};
      multiset<string> Stip_44_set;
      Stip_44.add_attribute("Typ", "ISSUER"); // 2
      Stip_44_set.insert("ISSUER");
      Stip_44.add_attribute("Val", "UnderlyingStipValue_t_1483271701"); // 2
      Stip_44_set.insert("UnderlyingStipValue_t_1483271701");
      all_values.push_back(Stip_44_set);
      all_compo_names.insert("Stip_44_set");

      Undly_27.add_element(Stip_44);
    }
    {
      xml_element Pty_137{"Pty"};
      multiset<string> Pty_137_set;
      Pty_137.add_attribute("ID", "UnderlyingInstrumentPartyID_t_849536332"); // 2
      Pty_137_set.insert("UnderlyingInstrumentPartyID_t_849536332");
      Pty_137.add_attribute("Src", "8"); // 2
      Pty_137_set.insert("8");
      Pty_137.add_attribute("R", "79"); // 2
      Pty_137_set.insert("79");
      all_values.push_back(Pty_137_set);
      all_compo_names.insert("Pty_137_set");

      {
        xml_element Sub_137{"Sub"};
        multiset<string> Sub_137_set;
        Sub_137.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1078799465"); // 3
        Sub_137_set.insert("UnderlyingInstrumentPartySubID_t_1078799465");
        Sub_137.add_attribute("Typ", "19"); // 3
        Sub_137_set.insert("19");
        all_values.push_back(Sub_137_set);
        all_compo_names.insert("Sub_137_set");

        Pty_137.add_element(Sub_137);
      }
      Undly_27.add_element(Pty_137);
    }
    elt.add_element(Undly_27);
  } // end Undly
  { // Leg
    xml_element Leg_27{"Leg"};
    multiset<string> Leg_27_set;
    Leg_27.add_attribute("Sym", "LegSymbol_t_1834752117"); // 1
    Leg_27_set.insert("LegSymbol_t_1834752117");
    Leg_27.add_attribute("Sfx", "WI"); // 1
    Leg_27_set.insert("WI");
    Leg_27.add_attribute("ID", "LegSecurityID_t_2080716891"); // 1
    Leg_27_set.insert("LegSecurityID_t_2080716891");
    Leg_27.add_attribute("Src", "L"); // 1
    Leg_27_set.insert("L");
    Leg_27.add_attribute("Prod", "3"); // 1
    Leg_27_set.insert("3");
    Leg_27.add_attribute("CFI", "LegCFICode_t_1910321125"); // 1
    Leg_27_set.insert("LegCFICode_t_1910321125");
    Leg_27.add_attribute("SecTyp", "FXNDF"); // 1
    Leg_27_set.insert("FXNDF");
    Leg_27.add_attribute("SecSubTyp", "LegSecuritySubType_t_381682026"); // 1
    Leg_27_set.insert("LegSecuritySubType_t_381682026");
    Leg_27.add_attribute("MMY", "1393751518"); // 1
    Leg_27_set.insert("1393751518");
    Leg_27.add_attribute("Mat", "LegMaturityDate_t_1003107919"); // 1
    Leg_27_set.insert("LegMaturityDate_t_1003107919");
    Leg_27.add_attribute("MatTm", "132088718"); // 1
    Leg_27_set.insert("132088718");
    Leg_27.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1364159279"); // 1
    Leg_27_set.insert("LegCouponPaymentDate_t_1364159279");
    Leg_27.add_attribute("Issued", "LegIssueDate_t_733034796"); // 1
    Leg_27_set.insert("LegIssueDate_t_733034796");
    Leg_27.add_attribute("RepoCollSecTyp", "154866336"); // 1
    Leg_27_set.insert("154866336");
    Leg_27.add_attribute("RepoTrm", "461102656"); // 1
    Leg_27_set.insert("461102656");
    Leg_27.add_attribute("RepoRt", "3891274.570000"); // 1
    Leg_27_set.insert("3891274.570000");
    Leg_27.add_attribute("Fctr", "2485110.780000"); // 1
    Leg_27_set.insert("2485110.780000");
    Leg_27.add_attribute("CrdRtg", "LegCreditRating_t_931314781"); // 1
    Leg_27_set.insert("LegCreditRating_t_931314781");
    Leg_27.add_attribute("Rgstry", "LegInstrRegistry_t_437890579"); // 1
    Leg_27_set.insert("LegInstrRegistry_t_437890579");
    Leg_27.add_attribute("Ctry", "336574058"); // 1
    Leg_27_set.insert("336574058");
    Leg_27.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1622503117"); // 1
    Leg_27_set.insert("LegStateOrProvinceOfIssue_t_1622503117");
    Leg_27.add_attribute("Lcl", "LegLocaleOfIssue_t_1804606191"); // 1
    Leg_27_set.insert("LegLocaleOfIssue_t_1804606191");
    Leg_27.add_attribute("Redeem", "LegRedemptionDate_t_170738557"); // 1
    Leg_27_set.insert("LegRedemptionDate_t_170738557");
    Leg_27.add_attribute("Strk", "18698482.530000"); // 1
    Leg_27_set.insert("18698482.530000");
    Leg_27.add_attribute("StrkCcy", "CAN"); // 1
    Leg_27_set.insert("CAN");
    Leg_27.add_attribute("OptA", "136154570"); // 1
    Leg_27_set.insert("136154570");
    Leg_27.add_attribute("Cmult", "15288498.860000"); // 1
    Leg_27_set.insert("15288498.860000");
    Leg_27.add_attribute("MultTyp", "1"); // 1
    Leg_27_set.insert("1");
    Leg_27.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_27_set.insert("4");
    Leg_27.add_attribute("UOM", "Bbl"); // 1
    Leg_27_set.insert("Bbl");
    Leg_27.add_attribute("UOMQty", "17863428.230000"); // 1
    Leg_27_set.insert("17863428.230000");
    Leg_27.add_attribute("PxUOM", "Gal"); // 1
    Leg_27_set.insert("Gal");
    Leg_27.add_attribute("PxUOMQty", "4712880.480000"); // 1
    Leg_27_set.insert("4712880.480000");
    Leg_27.add_attribute("TmUnit", "Yr"); // 1
    Leg_27_set.insert("Yr");
    Leg_27.add_attribute("ExerStyle", "2"); // 1
    Leg_27_set.insert("2");
    Leg_27.add_attribute("CpnRt", "2341255.260000"); // 1
    Leg_27_set.insert("2341255.260000");
    Leg_27.add_attribute("Exch", "LegSecurityExchange_t_501938009"); // 1
    Leg_27_set.insert("LegSecurityExchange_t_501938009");
    Leg_27.add_attribute("Issr", "LegIssuer_t_756274073"); // 1
    Leg_27_set.insert("LegIssuer_t_756274073");
    Leg_27.add_attribute("EncLegIssrLen", "1627877044"); // 1
    Leg_27_set.insert("1627877044");
    Leg_27.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1505045929"); // 1
    Leg_27_set.insert("EncodedLegIssuer_t_1505045929");
    Leg_27.add_attribute("Desc", "LegSecurityDesc_t_888362792"); // 1
    Leg_27_set.insert("LegSecurityDesc_t_888362792");
    Leg_27.add_attribute("EncLegSecDescLen", "844552675"); // 1
    Leg_27_set.insert("844552675");
    Leg_27.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_90597077"); // 1
    Leg_27_set.insert("EncodedLegSecurityDesc_t_90597077");
    Leg_27.add_attribute("RatioQty", "10432291.280000"); // 1
    Leg_27_set.insert("10432291.280000");
    Leg_27.add_attribute("Side", "4"); // 1
    Leg_27_set.insert("4");
    Leg_27.add_attribute("Ccy", "CHF"); // 1
    Leg_27_set.insert("CHF");
    Leg_27.add_attribute("Pool", "LegPool_t_89486464"); // 1
    Leg_27_set.insert("LegPool_t_89486464");
    Leg_27.add_attribute("Dated", "LegDatedDate_t_917615113"); // 1
    Leg_27_set.insert("LegDatedDate_t_917615113");
    Leg_27.add_attribute("CSetMo", "1628314265"); // 1
    Leg_27_set.insert("1628314265");
    Leg_27.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1711989581"); // 1
    Leg_27_set.insert("LegInterestAccrualDate_t_1711989581");
    Leg_27.add_attribute("PutCall", "574737656"); // 1
    Leg_27_set.insert("574737656");
    Leg_27.add_attribute("LegOptionRatio", "17990528.220000"); // 1
    Leg_27_set.insert("17990528.220000");
    Leg_27.add_attribute("Px", "14343541.870000"); // 1
    Leg_27_set.insert("14343541.870000");
    all_values.push_back(Leg_27_set);
    all_compo_names.insert("Leg_27_set");

    {
      xml_element LegAID_27{"LegAID"};
      multiset<string> LegAID_27_set;
      LegAID_27.add_attribute("SecAltID", "LegSecurityAltID_t_1715131901"); // 2
      LegAID_27_set.insert("LegSecurityAltID_t_1715131901");
      LegAID_27.add_attribute("SecAltIDSrc", "C"); // 2
      LegAID_27_set.insert("C");
      all_values.push_back(LegAID_27_set);
      all_compo_names.insert("LegAID_27_set");

      Leg_27.add_element(LegAID_27);
    }
    elt.add_element(Leg_27);
  } // end Leg
  { // Leg
    xml_element Leg_28{"Leg"};
    multiset<string> Leg_28_set;
    Leg_28.add_attribute("Sym", "LegSymbol_t_1570508757"); // 1
    Leg_28_set.insert("LegSymbol_t_1570508757");
    Leg_28.add_attribute("Sfx", "CD"); // 1
    Leg_28_set.insert("CD");
    Leg_28.add_attribute("ID", "LegSecurityID_t_623434769"); // 1
    Leg_28_set.insert("LegSecurityID_t_623434769");
    Leg_28.add_attribute("Src", "G"); // 1
    Leg_28_set.insert("G");
    Leg_28.add_attribute("Prod", "9"); // 1
    Leg_28_set.insert("9");
    Leg_28.add_attribute("CFI", "LegCFICode_t_262293945"); // 1
    Leg_28_set.insert("LegCFICode_t_262293945");
    Leg_28.add_attribute("SecTyp", "SPCLO"); // 1
    Leg_28_set.insert("SPCLO");
    Leg_28.add_attribute("SecSubTyp", "LegSecuritySubType_t_2105840993"); // 1
    Leg_28_set.insert("LegSecuritySubType_t_2105840993");
    Leg_28.add_attribute("MMY", "1176024342"); // 1
    Leg_28_set.insert("1176024342");
    Leg_28.add_attribute("Mat", "LegMaturityDate_t_779938397"); // 1
    Leg_28_set.insert("LegMaturityDate_t_779938397");
    Leg_28.add_attribute("MatTm", "192482871"); // 1
    Leg_28_set.insert("192482871");
    Leg_28.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1677962351"); // 1
    Leg_28_set.insert("LegCouponPaymentDate_t_1677962351");
    Leg_28.add_attribute("Issued", "LegIssueDate_t_1536212470"); // 1
    Leg_28_set.insert("LegIssueDate_t_1536212470");
    Leg_28.add_attribute("RepoCollSecTyp", "1820359915"); // 1
    Leg_28_set.insert("1820359915");
    Leg_28.add_attribute("RepoTrm", "1035524632"); // 1
    Leg_28_set.insert("1035524632");
    Leg_28.add_attribute("RepoRt", "2770916.140000"); // 1
    Leg_28_set.insert("2770916.140000");
    Leg_28.add_attribute("Fctr", "5174289.420000"); // 1
    Leg_28_set.insert("5174289.420000");
    Leg_28.add_attribute("CrdRtg", "LegCreditRating_t_1126121709"); // 1
    Leg_28_set.insert("LegCreditRating_t_1126121709");
    Leg_28.add_attribute("Rgstry", "LegInstrRegistry_t_1320320743"); // 1
    Leg_28_set.insert("LegInstrRegistry_t_1320320743");
    Leg_28.add_attribute("Ctry", "1823084273"); // 1
    Leg_28_set.insert("1823084273");
    Leg_28.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1605846243"); // 1
    Leg_28_set.insert("LegStateOrProvinceOfIssue_t_1605846243");
    Leg_28.add_attribute("Lcl", "LegLocaleOfIssue_t_464577302"); // 1
    Leg_28_set.insert("LegLocaleOfIssue_t_464577302");
    Leg_28.add_attribute("Redeem", "LegRedemptionDate_t_1912570738"); // 1
    Leg_28_set.insert("LegRedemptionDate_t_1912570738");
    Leg_28.add_attribute("Strk", "3759777.080000"); // 1
    Leg_28_set.insert("3759777.080000");
    Leg_28.add_attribute("StrkCcy", "EUR"); // 1
    Leg_28_set.insert("EUR");
    Leg_28.add_attribute("OptA", "950715365"); // 1
    Leg_28_set.insert("950715365");
    Leg_28.add_attribute("Cmult", "17444607.420000"); // 1
    Leg_28_set.insert("17444607.420000");
    Leg_28.add_attribute("MultTyp", "0"); // 1
    Leg_28_set.insert("0");
    Leg_28.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_28_set.insert("3");
    Leg_28.add_attribute("UOM", "lbs"); // 1
    Leg_28_set.insert("lbs");
    Leg_28.add_attribute("UOMQty", "1869723.200000"); // 1
    Leg_28_set.insert("1869723.200000");
    Leg_28.add_attribute("PxUOM", "Gal"); // 1
    Leg_28_set.insert("Gal");
    Leg_28.add_attribute("PxUOMQty", "8922559.270000"); // 1
    Leg_28_set.insert("8922559.270000");
    Leg_28.add_attribute("TmUnit", "S"); // 1
    Leg_28_set.insert("S");
    Leg_28.add_attribute("ExerStyle", "2"); // 1
    Leg_28_set.insert("2");
    Leg_28.add_attribute("CpnRt", "11545498.720000"); // 1
    Leg_28_set.insert("11545498.720000");
    Leg_28.add_attribute("Exch", "LegSecurityExchange_t_1668127639"); // 1
    Leg_28_set.insert("LegSecurityExchange_t_1668127639");
    Leg_28.add_attribute("Issr", "LegIssuer_t_1060288401"); // 1
    Leg_28_set.insert("LegIssuer_t_1060288401");
    Leg_28.add_attribute("EncLegIssrLen", "183090566"); // 1
    Leg_28_set.insert("183090566");
    Leg_28.add_attribute("EncLegIssr", "EncodedLegIssuer_t_300582388"); // 1
    Leg_28_set.insert("EncodedLegIssuer_t_300582388");
    Leg_28.add_attribute("Desc", "LegSecurityDesc_t_1252771272"); // 1
    Leg_28_set.insert("LegSecurityDesc_t_1252771272");
    Leg_28.add_attribute("EncLegSecDescLen", "1861052917"); // 1
    Leg_28_set.insert("1861052917");
    Leg_28.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1836794858"); // 1
    Leg_28_set.insert("EncodedLegSecurityDesc_t_1836794858");
    Leg_28.add_attribute("RatioQty", "9256475.400000"); // 1
    Leg_28_set.insert("9256475.400000");
    Leg_28.add_attribute("Side", "F"); // 1
    Leg_28_set.insert("F");
    Leg_28.add_attribute("Ccy", "USD"); // 1
    Leg_28_set.insert("USD");
    Leg_28.add_attribute("Pool", "LegPool_t_1875215611"); // 1
    Leg_28_set.insert("LegPool_t_1875215611");
    Leg_28.add_attribute("Dated", "LegDatedDate_t_1286723568"); // 1
    Leg_28_set.insert("LegDatedDate_t_1286723568");
    Leg_28.add_attribute("CSetMo", "1118677108"); // 1
    Leg_28_set.insert("1118677108");
    Leg_28.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1333578207"); // 1
    Leg_28_set.insert("LegInterestAccrualDate_t_1333578207");
    Leg_28.add_attribute("PutCall", "1751300870"); // 1
    Leg_28_set.insert("1751300870");
    Leg_28.add_attribute("LegOptionRatio", "8837641.980000"); // 1
    Leg_28_set.insert("8837641.980000");
    Leg_28.add_attribute("Px", "17095559.150000"); // 1
    Leg_28_set.insert("17095559.150000");
    all_values.push_back(Leg_28_set);
    all_compo_names.insert("Leg_28_set");

    {
      xml_element LegAID_28{"LegAID"};
      multiset<string> LegAID_28_set;
      LegAID_28.add_attribute("SecAltID", "LegSecurityAltID_t_1696708789"); // 2
      LegAID_28_set.insert("LegSecurityAltID_t_1696708789");
      LegAID_28.add_attribute("SecAltIDSrc", "C"); // 2
      LegAID_28_set.insert("C");
      all_values.push_back(LegAID_28_set);
      all_compo_names.insert("LegAID_28_set");

      Leg_28.add_element(LegAID_28);
    }
    elt.add_element(Leg_28);
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
