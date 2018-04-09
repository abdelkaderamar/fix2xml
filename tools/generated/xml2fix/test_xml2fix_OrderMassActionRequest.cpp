#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassActionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassActionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassActReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionRequest_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_815654049"); // 0
  OrderMassActionRequest_message_t_0.insert("ClOrdID_t_815654049");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_822782132"); // 0
  OrderMassActionRequest_message_t_0.insert("SecondaryClOrdID_t_822782132");
  elt.add_attribute("MassActionType", "1"); // 0
  OrderMassActionRequest_message_t_0.insert("1");
  elt.add_attribute("MassActionScope", "12"); // 0
  OrderMassActionRequest_message_t_0.insert("12");
  elt.add_attribute("MktID", "MarketID_t_345517113"); // 0
  OrderMassActionRequest_message_t_0.insert("MarketID_t_345517113");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1956003701"); // 0
  OrderMassActionRequest_message_t_0.insert("MarketSegmentID_t_1956003701");
  elt.add_attribute("SesID", "6"); // 0
  OrderMassActionRequest_message_t_0.insert("6");
  elt.add_attribute("SesSub", "7"); // 0
  OrderMassActionRequest_message_t_0.insert("7");
  elt.add_attribute("Side", "5"); // 0
  OrderMassActionRequest_message_t_0.insert("5");
  elt.add_attribute("TxnTm", "TransactTime_t_985364195"); // 0
  OrderMassActionRequest_message_t_0.insert("TransactTime_t_985364195");
  elt.add_attribute("Txt", "Text_t_363316379"); // 0
  OrderMassActionRequest_message_t_0.insert("Text_t_363316379");
  elt.add_attribute("EncTxtLen", "1767746513"); // 0
  OrderMassActionRequest_message_t_0.insert("1767746513");
  elt.add_attribute("EncTxt", "EncodedText_t_2031769420"); // 0
  OrderMassActionRequest_message_t_0.insert("EncodedText_t_2031769420");
  all_values.push_back(OrderMassActionRequest_message_t_0);
  all_compo_names.insert("OrderMassActionRequest_message_t");

  { // Hdr
    xml_element Hdr_60{"Hdr"};
    multiset<string> Hdr_60_set;
    Hdr_60.add_attribute("SeqNum", "257157481"); // 1
    Hdr_60_set.insert("257157481");
    Hdr_60.add_attribute("SID", "SenderCompID_t_603341669"); // 1
    Hdr_60_set.insert("SenderCompID_t_603341669");
    Hdr_60.add_attribute("TID", "TargetCompID_t_1045639597"); // 1
    Hdr_60_set.insert("TargetCompID_t_1045639597");
    Hdr_60.add_attribute("OBID", "OnBehalfOfCompID_t_2075792829"); // 1
    Hdr_60_set.insert("OnBehalfOfCompID_t_2075792829");
    Hdr_60.add_attribute("D2ID", "DeliverToCompID_t_1362367914"); // 1
    Hdr_60_set.insert("DeliverToCompID_t_1362367914");
    Hdr_60.add_attribute("SSub", "SenderSubID_t_1295118275"); // 1
    Hdr_60_set.insert("SenderSubID_t_1295118275");
    Hdr_60.add_attribute("SLoc", "SenderLocationID_t_1241860803"); // 1
    Hdr_60_set.insert("SenderLocationID_t_1241860803");
    Hdr_60.add_attribute("TSub", "TargetSubID_t_6014999"); // 1
    Hdr_60_set.insert("TargetSubID_t_6014999");
    Hdr_60.add_attribute("TLoc", "TargetLocationID_t_2061878164"); // 1
    Hdr_60_set.insert("TargetLocationID_t_2061878164");
    Hdr_60.add_attribute("OBSub", "OnBehalfOfSubID_t_1394630859"); // 1
    Hdr_60_set.insert("OnBehalfOfSubID_t_1394630859");
    Hdr_60.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1284059292"); // 1
    Hdr_60_set.insert("OnBehalfOfLocationID_t_1284059292");
    Hdr_60.add_attribute("D2Sub", "DeliverToSubID_t_1333104591"); // 1
    Hdr_60_set.insert("DeliverToSubID_t_1333104591");
    Hdr_60.add_attribute("D2Loc", "DeliverToLocationID_t_1671567033"); // 1
    Hdr_60_set.insert("DeliverToLocationID_t_1671567033");
    Hdr_60.add_attribute("PosDup", "Y"); // 1
    Hdr_60_set.insert("Y");
    Hdr_60.add_attribute("PosRsnd", "Y"); // 1
    Hdr_60_set.insert("Y");
    Hdr_60.add_attribute("Snt", "SendingTime_t_1464977761"); // 1
    Hdr_60_set.insert("SendingTime_t_1464977761");
    Hdr_60.add_attribute("OrigSnt", "OrigSendingTime_t_427741879"); // 1
    Hdr_60_set.insert("OrigSendingTime_t_427741879");
    Hdr_60.add_attribute("MsgEncd", "MessageEncoding_t_1349726417"); // 1
    Hdr_60_set.insert("MessageEncoding_t_1349726417");
    all_values.push_back(Hdr_60_set);
    all_compo_names.insert("Hdr_60_set");

    {
      xml_element Hop_60{"Hop"};
      multiset<string> Hop_60_set;
      Hop_60.add_attribute("ID", "HopCompID_t_133148162"); // 2
      Hop_60_set.insert("HopCompID_t_133148162");
      Hop_60.add_attribute("Ref", "1250524011"); // 2
      Hop_60_set.insert("1250524011");
      Hop_60.add_attribute("Snt", "HopSendingTime_t_1524814115"); // 2
      Hop_60_set.insert("HopSendingTime_t_1524814115");
      all_values.push_back(Hop_60_set);
      all_compo_names.insert("Hop_60_set");

      Hdr_60.add_element(Hop_60);
    }
    elt.add_element(Hdr_60);
  } // end Hdr
  { // Pty
    xml_element Pty_251{"Pty"};
    multiset<string> Pty_251_set;
    Pty_251.add_attribute("ID", "PartyID_t_1596041124"); // 1
    Pty_251_set.insert("PartyID_t_1596041124");
    Pty_251.add_attribute("Src", "9"); // 1
    Pty_251_set.insert("9");
    Pty_251.add_attribute("R", "78"); // 1
    Pty_251_set.insert("78");
    all_values.push_back(Pty_251_set);
    all_compo_names.insert("Pty_251_set");

    {
      xml_element Sub_251{"Sub"};
      multiset<string> Sub_251_set;
      Sub_251.add_attribute("ID", "PartySubID_t_1858631367"); // 2
      Sub_251_set.insert("PartySubID_t_1858631367");
      Sub_251.add_attribute("Typ", "10"); // 2
      Sub_251_set.insert("10");
      all_values.push_back(Sub_251_set);
      all_compo_names.insert("Sub_251_set");

      Pty_251.add_element(Sub_251);
    }
    elt.add_element(Pty_251);
  } // end Pty
  { // Pty
    xml_element Pty_252{"Pty"};
    multiset<string> Pty_252_set;
    Pty_252.add_attribute("ID", "PartyID_t_1164995500"); // 1
    Pty_252_set.insert("PartyID_t_1164995500");
    Pty_252.add_attribute("Src", "8"); // 1
    Pty_252_set.insert("8");
    Pty_252.add_attribute("R", "19"); // 1
    Pty_252_set.insert("19");
    all_values.push_back(Pty_252_set);
    all_compo_names.insert("Pty_252_set");

    {
      xml_element Sub_252{"Sub"};
      multiset<string> Sub_252_set;
      Sub_252.add_attribute("ID", "PartySubID_t_1049281272"); // 2
      Sub_252_set.insert("PartySubID_t_1049281272");
      Sub_252.add_attribute("Typ", "27"); // 2
      Sub_252_set.insert("27");
      all_values.push_back(Sub_252_set);
      all_compo_names.insert("Sub_252_set");

      Pty_252.add_element(Sub_252);
    }
    elt.add_element(Pty_252);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_4{"TgtPty"};
    multiset<string> TgtPty_4_set;
    TgtPty_4.add_attribute("ID", "TargetPartyID_t_2094920869"); // 1
    TgtPty_4_set.insert("TargetPartyID_t_2094920869");
    TgtPty_4.add_attribute("Src", "G"); // 1
    TgtPty_4_set.insert("G");
    TgtPty_4.add_attribute("R", "40"); // 1
    TgtPty_4_set.insert("40");
    all_values.push_back(TgtPty_4_set);
    all_compo_names.insert("TgtPty_4_set");

    elt.add_element(TgtPty_4);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_48{"Instrmt"};
    multiset<string> Instrmt_48_set;
    Instrmt_48.add_attribute("Sym", "Symbol_t_1242555496"); // 1
    Instrmt_48_set.insert("Symbol_t_1242555496");
    Instrmt_48.add_attribute("Sfx", "CD"); // 1
    Instrmt_48_set.insert("CD");
    Instrmt_48.add_attribute("ID", "SecurityID_t_2066902725"); // 1
    Instrmt_48_set.insert("SecurityID_t_2066902725");
    Instrmt_48.add_attribute("Src", "M"); // 1
    Instrmt_48_set.insert("M");
    Instrmt_48.add_attribute("Prod", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("ProdCmplx", "ProductComplex_t_1203478369"); // 1
    Instrmt_48_set.insert("ProductComplex_t_1203478369");
    Instrmt_48.add_attribute("SecGrp", "SecurityGroup_t_342570956"); // 1
    Instrmt_48_set.insert("SecurityGroup_t_342570956");
    Instrmt_48.add_attribute("CFI", "CFICode_t_273022161"); // 1
    Instrmt_48_set.insert("CFICode_t_273022161");
    Instrmt_48.add_attribute("SecTyp", "CMB"); // 1
    Instrmt_48_set.insert("CMB");
    Instrmt_48.add_attribute("SubTyp", "SecuritySubType_t_1847049825"); // 1
    Instrmt_48_set.insert("SecuritySubType_t_1847049825");
    Instrmt_48.add_attribute("MMY", "1737999922"); // 1
    Instrmt_48_set.insert("1737999922");
    Instrmt_48.add_attribute("MatDt", "MaturityDate_t_468978619"); // 1
    Instrmt_48_set.insert("MaturityDate_t_468978619");
    Instrmt_48.add_attribute("MatTm", "1049292594"); // 1
    Instrmt_48_set.insert("1049292594");
    Instrmt_48.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1871148084"); // 1
    Instrmt_48_set.insert("SettleOnOpenFlag_t_1871148084");
    Instrmt_48.add_attribute("AsgnMeth", "1719502630"); // 1
    Instrmt_48_set.insert("1719502630");
    Instrmt_48.add_attribute("Status", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("CpnPmt", "CouponPaymentDate_t_424206581"); // 1
    Instrmt_48_set.insert("CouponPaymentDate_t_424206581");
    Instrmt_48.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_48_set.insert("XR");
    Instrmt_48.add_attribute("Snrty", "SD"); // 1
    Instrmt_48_set.insert("SD");
    Instrmt_48.add_attribute("NotlPctOut", "6038378.860000"); // 1
    Instrmt_48_set.insert("6038378.860000");
    Instrmt_48.add_attribute("OrigNotlPctOut", "8792078.260000"); // 1
    Instrmt_48_set.insert("8792078.260000");
    Instrmt_48.add_attribute("AttchPnt", "873888.590000"); // 1
    Instrmt_48_set.insert("873888.590000");
    Instrmt_48.add_attribute("DetchPnt", "17688333.860000"); // 1
    Instrmt_48_set.insert("17688333.860000");
    Instrmt_48.add_attribute("Issued", "IssueDate_t_953671925"); // 1
    Instrmt_48_set.insert("IssueDate_t_953671925");
    Instrmt_48.add_attribute("RepoCollSecTyp", "182567001"); // 1
    Instrmt_48_set.insert("182567001");
    Instrmt_48.add_attribute("RepoTrm", "670631010"); // 1
    Instrmt_48_set.insert("670631010");
    Instrmt_48.add_attribute("RepoRt", "12852935.050000"); // 1
    Instrmt_48_set.insert("12852935.050000");
    Instrmt_48.add_attribute("Fctr", "8810868.130000"); // 1
    Instrmt_48_set.insert("8810868.130000");
    Instrmt_48.add_attribute("CrdRtg", "CreditRating_t_618068231"); // 1
    Instrmt_48_set.insert("CreditRating_t_618068231");
    Instrmt_48.add_attribute("Rgstry", "InstrRegistry_t_1545224267"); // 1
    Instrmt_48_set.insert("InstrRegistry_t_1545224267");
    Instrmt_48.add_attribute("IssuCtry", "794490891"); // 1
    Instrmt_48_set.insert("794490891");
    Instrmt_48.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1860623727"); // 1
    Instrmt_48_set.insert("StateOrProvinceOfIssue_t_1860623727");
    Instrmt_48.add_attribute("Lcl", "LocaleOfIssue_t_899532183"); // 1
    Instrmt_48_set.insert("LocaleOfIssue_t_899532183");
    Instrmt_48.add_attribute("Redeem", "RedemptionDate_t_713909968"); // 1
    Instrmt_48_set.insert("RedemptionDate_t_713909968");
    Instrmt_48.add_attribute("StrkPx", "8700900.920000"); // 1
    Instrmt_48_set.insert("8700900.920000");
    Instrmt_48.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_48_set.insert("USD");
    Instrmt_48.add_attribute("StrkMult", "12126610.480000"); // 1
    Instrmt_48_set.insert("12126610.480000");
    Instrmt_48.add_attribute("StrkValu", "19214931.200000"); // 1
    Instrmt_48_set.insert("19214931.200000");
    Instrmt_48.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_48_set.insert("3");
    Instrmt_48.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("StrkPxBndryPrcsn", "15120093.940000"); // 1
    Instrmt_48_set.insert("15120093.940000");
    Instrmt_48.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_48_set.insert("3");
    Instrmt_48.add_attribute("OptAt", "1961519820"); // 1
    Instrmt_48_set.insert("1961519820");
    Instrmt_48.add_attribute("Mult", "12356738.300000"); // 1
    Instrmt_48_set.insert("12356738.300000");
    Instrmt_48.add_attribute("MultTyp", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_48_set.insert("4");
    Instrmt_48.add_attribute("MinPxIncr", "16598804.110000"); // 1
    Instrmt_48_set.insert("16598804.110000");
    Instrmt_48.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1020199139"); // 1
    Instrmt_48_set.insert("MinPriceIncrementAmount_t_1020199139");
    Instrmt_48.add_attribute("UOM", "Gal"); // 1
    Instrmt_48_set.insert("Gal");
    Instrmt_48.add_attribute("UOMQty", "1162346.490000"); // 1
    Instrmt_48_set.insert("1162346.490000");
    Instrmt_48.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_48_set.insert("Bbl");
    Instrmt_48.add_attribute("PxUOMQty", "20880053.240000"); // 1
    Instrmt_48_set.insert("20880053.240000");
    Instrmt_48.add_attribute("SettlMeth", "P"); // 1
    Instrmt_48_set.insert("P");
    Instrmt_48.add_attribute("ExerStyle", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("OptPayAmt", "OptPayoutAmount_t_408215397"); // 1
    Instrmt_48_set.insert("OptPayoutAmount_t_408215397");
    Instrmt_48.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_48_set.insert("INX");
    Instrmt_48.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_48_set.insert("FUT");
    Instrmt_48.add_attribute("ListMeth", "0"); // 1
    Instrmt_48_set.insert("0");
    Instrmt_48.add_attribute("CapPx", "13886293.680000"); // 1
    Instrmt_48_set.insert("13886293.680000");
    Instrmt_48.add_attribute("FlrPx", "17986663.820000"); // 1
    Instrmt_48_set.insert("17986663.820000");
    Instrmt_48.add_attribute("PutCall", "0"); // 1
    Instrmt_48_set.insert("0");
    Instrmt_48.add_attribute("FlexInd", "false"); // 1
    Instrmt_48_set.insert("false");
    Instrmt_48.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_48_set.insert("true");
    Instrmt_48.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_48_set.insert("Yr");
    Instrmt_48.add_attribute("CpnRt", "17891488.620000"); // 1
    Instrmt_48_set.insert("17891488.620000");
    Instrmt_48.add_attribute("Exch", "SecurityExchange_t_134997392"); // 1
    Instrmt_48_set.insert("SecurityExchange_t_134997392");
    Instrmt_48.add_attribute("PosLmt", "674691201"); // 1
    Instrmt_48_set.insert("674691201");
    Instrmt_48.add_attribute("NTPosLmt", "1563158334"); // 1
    Instrmt_48_set.insert("1563158334");
    Instrmt_48.add_attribute("Issr", "Issuer_t_2093622471"); // 1
    Instrmt_48_set.insert("Issuer_t_2093622471");
    Instrmt_48.add_attribute("EncIssrLen", "1586918427"); // 1
    Instrmt_48_set.insert("1586918427");
    Instrmt_48.add_attribute("EncIssr", "EncodedIssuer_t_927684080"); // 1
    Instrmt_48_set.insert("EncodedIssuer_t_927684080");
    Instrmt_48.add_attribute("Desc", "SecurityDesc_t_226258873"); // 1
    Instrmt_48_set.insert("SecurityDesc_t_226258873");
    Instrmt_48.add_attribute("EncSecDescLen", "1400954599"); // 1
    Instrmt_48_set.insert("1400954599");
    Instrmt_48.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_15874262"); // 1
    Instrmt_48_set.insert("EncodedSecurityDesc_t_15874262");
    Instrmt_48.add_attribute("Pool", "Pool_t_78397905"); // 1
    Instrmt_48_set.insert("Pool_t_78397905");
    Instrmt_48.add_attribute("CSetMo", "1641613834"); // 1
    Instrmt_48_set.insert("1641613834");
    Instrmt_48.add_attribute("CPPgm", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("CPRegT", "CPRegType_t_1098597045"); // 1
    Instrmt_48_set.insert("CPRegType_t_1098597045");
    Instrmt_48.add_attribute("Dated", "DatedDate_t_1494746651"); // 1
    Instrmt_48_set.insert("DatedDate_t_1494746651");
    Instrmt_48.add_attribute("IntAcrl", "InterestAccrualDate_t_1791989323"); // 1
    Instrmt_48_set.insert("InterestAccrualDate_t_1791989323");
    all_values.push_back(Instrmt_48_set);
    all_compo_names.insert("Instrmt_48_set");

    {
      xml_element AID_51{"AID"};
      multiset<string> AID_51_set;
      AID_51.add_attribute("AltID", "SecurityAltID_t_850520363"); // 2
      AID_51_set.insert("SecurityAltID_t_850520363");
      AID_51.add_attribute("AltIDSrc", "A"); // 2
      AID_51_set.insert("A");
      all_values.push_back(AID_51_set);
      all_compo_names.insert("AID_51_set");

      Instrmt_48.add_element(AID_51);
    }
    {
      xml_element SecXML_51{"SecXML"};
      multiset<string> SecXML_51_set;
      SecXML_51.add_attribute("Schema", "SecurityXMLSchema_t_1529573711"); // 2
      SecXML_51_set.insert("SecurityXMLSchema_t_1529573711");
      all_values.push_back(SecXML_51_set);
      all_compo_names.insert("SecXML_51_set");

      Instrmt_48.add_element(SecXML_51);
    }
    {
      xml_element Evnt_51{"Evnt"};
      multiset<string> Evnt_51_set;
      Evnt_51.add_attribute("EventTyp", "6"); // 2
      Evnt_51_set.insert("6");
      Evnt_51.add_attribute("Dt", "EventDate_t_1558357005"); // 2
      Evnt_51_set.insert("EventDate_t_1558357005");
      Evnt_51.add_attribute("Tm", "EventTime_t_1937789108"); // 2
      Evnt_51_set.insert("EventTime_t_1937789108");
      Evnt_51.add_attribute("Px", "13995207.070000"); // 2
      Evnt_51_set.insert("13995207.070000");
      Evnt_51.add_attribute("Txt", "EventText_t_415048848"); // 2
      Evnt_51_set.insert("EventText_t_415048848");
      all_values.push_back(Evnt_51_set);
      all_compo_names.insert("Evnt_51_set");

      Instrmt_48.add_element(Evnt_51);
    }
    {
      xml_element Pty_253{"Pty"};
      multiset<string> Pty_253_set;
      Pty_253.add_attribute("ID", "InstrumentPartyID_t_816589089"); // 2
      Pty_253_set.insert("InstrumentPartyID_t_816589089");
      Pty_253.add_attribute("Src", "6"); // 2
      Pty_253_set.insert("6");
      Pty_253.add_attribute("R", "27"); // 2
      Pty_253_set.insert("27");
      all_values.push_back(Pty_253_set);
      all_compo_names.insert("Pty_253_set");

      {
        xml_element Sub_253{"Sub"};
        multiset<string> Sub_253_set;
        Sub_253.add_attribute("ID", "InstrumentPartySubID_t_1556012797"); // 3
        Sub_253_set.insert("InstrumentPartySubID_t_1556012797");
        Sub_253.add_attribute("Typ", "32"); // 3
        Sub_253_set.insert("32");
        all_values.push_back(Sub_253_set);
        all_compo_names.insert("Sub_253_set");

        Pty_253.add_element(Sub_253);
      }
      Instrmt_48.add_element(Pty_253);
    }
    {
      xml_element CmplxEvnt_48{"CmplxEvnt"};
      multiset<string> CmplxEvnt_48_set;
      CmplxEvnt_48.add_attribute("Typ", "6"); // 2
      CmplxEvnt_48_set.insert("6");
      CmplxEvnt_48.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1018042949"); // 2
      CmplxEvnt_48_set.insert("ComplexOptPayoutAmount_t_1018042949");
      CmplxEvnt_48.add_attribute("Px", "4230095.450000"); // 2
      CmplxEvnt_48_set.insert("4230095.450000");
      CmplxEvnt_48.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_48_set.insert("3");
      CmplxEvnt_48.add_attribute("PxBndryPrcsn", "16927341.500000"); // 2
      CmplxEvnt_48_set.insert("16927341.500000");
      CmplxEvnt_48.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_48_set.insert("1");
      CmplxEvnt_48.add_attribute("Cond", "1"); // 2
      CmplxEvnt_48_set.insert("1");
      all_values.push_back(CmplxEvnt_48_set);
      all_compo_names.insert("CmplxEvnt_48_set");

      {
        xml_element EvntDts_48{"EvntDts"};
        multiset<string> EvntDts_48_set;
        EvntDts_48.add_attribute("StartDt", "ComplexEventStartDate_t_1132168929"); // 3
        EvntDts_48_set.insert("ComplexEventStartDate_t_1132168929");
        EvntDts_48.add_attribute("EndDt", "ComplexEventEndDate_t_766368312"); // 3
        EvntDts_48_set.insert("ComplexEventEndDate_t_766368312");
        all_values.push_back(EvntDts_48_set);
        all_compo_names.insert("EvntDts_48_set");

        {
          xml_element EvntTms_48{"EvntTms"};
          multiset<string> EvntTms_48_set;
          EvntTms_48.add_attribute("StartTm", "738719373"); // 4
          EvntTms_48_set.insert("738719373");
          EvntTms_48.add_attribute("EndTm", "385639881"); // 4
          EvntTms_48_set.insert("385639881");
          all_values.push_back(EvntTms_48_set);
          all_compo_names.insert("EvntTms_48_set");

          EvntDts_48.add_element(EvntTms_48);
        }
        CmplxEvnt_48.add_element(EvntDts_48);
      }
      Instrmt_48.add_element(CmplxEvnt_48);
    }
    elt.add_element(Instrmt_48);
  } // end Instrmt
  { // Undly
    xml_element Undly_65{"Undly"};
    multiset<string> Undly_65_set;
    Undly_65.add_attribute("Sym", "UnderlyingSymbol_t_782242575"); // 1
    Undly_65_set.insert("UnderlyingSymbol_t_782242575");
    Undly_65.add_attribute("Sfx", "WI"); // 1
    Undly_65_set.insert("WI");
    Undly_65.add_attribute("ID", "UnderlyingSecurityID_t_2027253715"); // 1
    Undly_65_set.insert("UnderlyingSecurityID_t_2027253715");
    Undly_65.add_attribute("Src", "E"); // 1
    Undly_65_set.insert("E");
    Undly_65.add_attribute("Prod", "13"); // 1
    Undly_65_set.insert("13");
    Undly_65.add_attribute("CFI", "UnderlyingCFICode_t_1374516718"); // 1
    Undly_65_set.insert("UnderlyingCFICode_t_1374516718");
    Undly_65.add_attribute("SecTyp", "MT"); // 1
    Undly_65_set.insert("MT");
    Undly_65.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_618751039"); // 1
    Undly_65_set.insert("UnderlyingSecuritySubType_t_618751039");
    Undly_65.add_attribute("MMY", "662301397"); // 1
    Undly_65_set.insert("662301397");
    Undly_65.add_attribute("Mat", "UnderlyingMaturityDate_t_1484592987"); // 1
    Undly_65_set.insert("UnderlyingMaturityDate_t_1484592987");
    Undly_65.add_attribute("MatTm", "27382997"); // 1
    Undly_65_set.insert("27382997");
    Undly_65.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_73174755"); // 1
    Undly_65_set.insert("UnderlyingCouponPaymentDate_t_73174755");
    Undly_65.add_attribute("RestrctTyp", "FR"); // 1
    Undly_65_set.insert("FR");
    Undly_65.add_attribute("Snrty", "SR"); // 1
    Undly_65_set.insert("SR");
    Undly_65.add_attribute("NotlPctOut", "4882236.030000"); // 1
    Undly_65_set.insert("4882236.030000");
    Undly_65.add_attribute("OrigNotlPctOut", "20914875.370000"); // 1
    Undly_65_set.insert("20914875.370000");
    Undly_65.add_attribute("AttchPnt", "20675701.320000"); // 1
    Undly_65_set.insert("20675701.320000");
    Undly_65.add_attribute("DetchPnt", "5544551.860000"); // 1
    Undly_65_set.insert("5544551.860000");
    Undly_65.add_attribute("Issued", "UnderlyingIssueDate_t_1500016686"); // 1
    Undly_65_set.insert("UnderlyingIssueDate_t_1500016686");
    Undly_65.add_attribute("RepoCollSecTyp", "701430815"); // 1
    Undly_65_set.insert("701430815");
    Undly_65.add_attribute("RepoTrm", "985779471"); // 1
    Undly_65_set.insert("985779471");
    Undly_65.add_attribute("RepoRt", "3705759.870000"); // 1
    Undly_65_set.insert("3705759.870000");
    Undly_65.add_attribute("Fctr", "11244403.610000"); // 1
    Undly_65_set.insert("11244403.610000");
    Undly_65.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1552101148"); // 1
    Undly_65_set.insert("UnderlyingCreditRating_t_1552101148");
    Undly_65.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2063310138"); // 1
    Undly_65_set.insert("UnderlyingInstrRegistry_t_2063310138");
    Undly_65.add_attribute("Ctry", "963124593"); // 1
    Undly_65_set.insert("963124593");
    Undly_65.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2064561649"); // 1
    Undly_65_set.insert("UnderlyingStateOrProvinceOfIssue_t_2064561649");
    Undly_65.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1047995419"); // 1
    Undly_65_set.insert("UnderlyingLocaleOfIssue_t_1047995419");
    Undly_65.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1729492905"); // 1
    Undly_65_set.insert("UnderlyingRedemptionDate_t_1729492905");
    Undly_65.add_attribute("StrkPx", "6557973.740000"); // 1
    Undly_65_set.insert("6557973.740000");
    Undly_65.add_attribute("StrkCcy", "JPY"); // 1
    Undly_65_set.insert("JPY");
    Undly_65.add_attribute("OptA", "1472914653"); // 1
    Undly_65_set.insert("1472914653");
    Undly_65.add_attribute("Mult", "13134053.670000"); // 1
    Undly_65_set.insert("13134053.670000");
    Undly_65.add_attribute("MultTyp", "0"); // 1
    Undly_65_set.insert("0");
    Undly_65.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_65_set.insert("4");
    Undly_65.add_attribute("UOM", "MMbbl"); // 1
    Undly_65_set.insert("MMbbl");
    Undly_65.add_attribute("UOMQty", "6297847.100000"); // 1
    Undly_65_set.insert("6297847.100000");
    Undly_65.add_attribute("PxUOM", "tn"); // 1
    Undly_65_set.insert("tn");
    Undly_65.add_attribute("PxUOMQty", "12027398.350000"); // 1
    Undly_65_set.insert("12027398.350000");
    Undly_65.add_attribute("TmUnit", "Mo"); // 1
    Undly_65_set.insert("Mo");
    Undly_65.add_attribute("ExerStyle", "0"); // 1
    Undly_65_set.insert("0");
    Undly_65.add_attribute("CpnRt", "12759145.900000"); // 1
    Undly_65_set.insert("12759145.900000");
    Undly_65.add_attribute("Exch", "UnderlyingSecurityExchange_t_1241792497"); // 1
    Undly_65_set.insert("UnderlyingSecurityExchange_t_1241792497");
    Undly_65.add_attribute("Issr", "UnderlyingIssuer_t_1166699423"); // 1
    Undly_65_set.insert("UnderlyingIssuer_t_1166699423");
    Undly_65.add_attribute("EncUndIssrLen", "1764138193"); // 1
    Undly_65_set.insert("1764138193");
    Undly_65.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1185796386"); // 1
    Undly_65_set.insert("EncodedUnderlyingIssuer_t_1185796386");
    Undly_65.add_attribute("Desc", "UnderlyingSecurityDesc_t_1086785907"); // 1
    Undly_65_set.insert("UnderlyingSecurityDesc_t_1086785907");
    Undly_65.add_attribute("EncUndSecDescLen", "171109731"); // 1
    Undly_65_set.insert("171109731");
    Undly_65.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_538329424"); // 1
    Undly_65_set.insert("EncodedUnderlyingSecurityDesc_t_538329424");
    Undly_65.add_attribute("CPPgm", "UnderlyingCPProgram_t_1788216723"); // 1
    Undly_65_set.insert("UnderlyingCPProgram_t_1788216723");
    Undly_65.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1156889202"); // 1
    Undly_65_set.insert("UnderlyingCPRegType_t_1156889202");
    Undly_65.add_attribute("AllocPct", "9089054.120000"); // 1
    Undly_65_set.insert("9089054.120000");
    Undly_65.add_attribute("Ccy", "CHF"); // 1
    Undly_65_set.insert("CHF");
    Undly_65.add_attribute("Qty", "8247319.020000"); // 1
    Undly_65_set.insert("8247319.020000");
    Undly_65.add_attribute("SettlTyp", "2"); // 1
    Undly_65_set.insert("2");
    Undly_65.add_attribute("CashAmt", "UnderlyingCashAmount_t_478584704"); // 1
    Undly_65_set.insert("UnderlyingCashAmount_t_478584704");
    Undly_65.add_attribute("CashTyp", "DIFF"); // 1
    Undly_65_set.insert("DIFF");
    Undly_65.add_attribute("Px", "13103072.860000"); // 1
    Undly_65_set.insert("13103072.860000");
    Undly_65.add_attribute("DirtPx", "11343820.780000"); // 1
    Undly_65_set.insert("11343820.780000");
    Undly_65.add_attribute("EndPx", "11588789.740000"); // 1
    Undly_65_set.insert("11588789.740000");
    Undly_65.add_attribute("StartVal", "UnderlyingStartValue_t_1674559119"); // 1
    Undly_65_set.insert("UnderlyingStartValue_t_1674559119");
    Undly_65.add_attribute("CurVal", "UnderlyingCurrentValue_t_459813084"); // 1
    Undly_65_set.insert("UnderlyingCurrentValue_t_459813084");
    Undly_65.add_attribute("EndVal", "UnderlyingEndValue_t_324800693"); // 1
    Undly_65_set.insert("UnderlyingEndValue_t_324800693");
    Undly_65.add_attribute("AdjQty", "2018409.040000"); // 1
    Undly_65_set.insert("2018409.040000");
    Undly_65.add_attribute("FxRate", "17009584.130000"); // 1
    Undly_65_set.insert("17009584.130000");
    Undly_65.add_attribute("FxRateCalc", "D"); // 1
    Undly_65_set.insert("D");
    Undly_65.add_attribute("CapValu", "UnderlyingCapValue_t_831625614"); // 1
    Undly_65_set.insert("UnderlyingCapValue_t_831625614");
    Undly_65.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1413371134"); // 1
    Undly_65_set.insert("UnderlyingSettlMethod_t_1413371134");
    Undly_65.add_attribute("PutCall", "2067978966"); // 1
    Undly_65_set.insert("2067978966");
    all_values.push_back(Undly_65_set);
    all_compo_names.insert("Undly_65_set");

    {
      xml_element UndAID_65{"UndAID"};
      multiset<string> UndAID_65_set;
      UndAID_65.add_attribute("AltID", "UnderlyingSecurityAltID_t_798519664"); // 2
      UndAID_65_set.insert("UnderlyingSecurityAltID_t_798519664");
      UndAID_65.add_attribute("AltIDSrc", "3"); // 2
      UndAID_65_set.insert("3");
      all_values.push_back(UndAID_65_set);
      all_compo_names.insert("UndAID_65_set");

      Undly_65.add_element(UndAID_65);
    }
    {
      xml_element Stip_102{"Stip"};
      multiset<string> Stip_102_set;
      Stip_102.add_attribute("Typ", "AVAILQTY"); // 2
      Stip_102_set.insert("AVAILQTY");
      Stip_102.add_attribute("Val", "UnderlyingStipValue_t_2040312161"); // 2
      Stip_102_set.insert("UnderlyingStipValue_t_2040312161");
      all_values.push_back(Stip_102_set);
      all_compo_names.insert("Stip_102_set");

      Undly_65.add_element(Stip_102);
    }
    {
      xml_element Pty_254{"Pty"};
      multiset<string> Pty_254_set;
      Pty_254.add_attribute("ID", "UnderlyingInstrumentPartyID_t_172382627"); // 2
      Pty_254_set.insert("UnderlyingInstrumentPartyID_t_172382627");
      Pty_254.add_attribute("Src", "8"); // 2
      Pty_254_set.insert("8");
      Pty_254.add_attribute("R", "55"); // 2
      Pty_254_set.insert("55");
      all_values.push_back(Pty_254_set);
      all_compo_names.insert("Pty_254_set");

      {
        xml_element Sub_254{"Sub"};
        multiset<string> Sub_254_set;
        Sub_254.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1259168534"); // 3
        Sub_254_set.insert("UnderlyingInstrumentPartySubID_t_1259168534");
        Sub_254.add_attribute("Typ", "14"); // 3
        Sub_254_set.insert("14");
        all_values.push_back(Sub_254_set);
        all_compo_names.insert("Sub_254_set");

        Pty_254.add_element(Sub_254);
      }
      Undly_65.add_element(Pty_254);
    }
    elt.add_element(Undly_65);
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
