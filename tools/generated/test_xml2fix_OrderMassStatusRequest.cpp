#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassStatusRequest_message_t_0;
  elt.add_attribute("ReqID", "MassStatusReqID_t_244254538"); // 0
  OrderMassStatusRequest_message_t_0.insert("MassStatusReqID_t_244254538");
  elt.add_attribute("MassStatReqTyp", "5"); // 0
  OrderMassStatusRequest_message_t_0.insert("5");
  elt.add_attribute("Acct", "Account_t_1363542470"); // 0
  OrderMassStatusRequest_message_t_0.insert("Account_t_1363542470");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  OrderMassStatusRequest_message_t_0.insert("3");
  elt.add_attribute("SesID", "5"); // 0
  OrderMassStatusRequest_message_t_0.insert("5");
  elt.add_attribute("SesSub", "4"); // 0
  OrderMassStatusRequest_message_t_0.insert("4");
  elt.add_attribute("Side", "G"); // 0
  OrderMassStatusRequest_message_t_0.insert("G");
  all_values.push_back(OrderMassStatusRequest_message_t_0);
  all_compo_names.insert("OrderMassStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_63{"Hdr"};
    multiset<string> Hdr_63_set;
    Hdr_63.add_attribute("SeqNum", "112078520"); // 1
    Hdr_63_set.insert("112078520");
    Hdr_63.add_attribute("SID", "SenderCompID_t_723445216"); // 1
    Hdr_63_set.insert("SenderCompID_t_723445216");
    Hdr_63.add_attribute("TID", "TargetCompID_t_2003979857"); // 1
    Hdr_63_set.insert("TargetCompID_t_2003979857");
    Hdr_63.add_attribute("OBID", "OnBehalfOfCompID_t_1052678509"); // 1
    Hdr_63_set.insert("OnBehalfOfCompID_t_1052678509");
    Hdr_63.add_attribute("D2ID", "DeliverToCompID_t_1646097663"); // 1
    Hdr_63_set.insert("DeliverToCompID_t_1646097663");
    Hdr_63.add_attribute("SSub", "SenderSubID_t_1736327367"); // 1
    Hdr_63_set.insert("SenderSubID_t_1736327367");
    Hdr_63.add_attribute("SLoc", "SenderLocationID_t_2105418350"); // 1
    Hdr_63_set.insert("SenderLocationID_t_2105418350");
    Hdr_63.add_attribute("TSub", "TargetSubID_t_359761989"); // 1
    Hdr_63_set.insert("TargetSubID_t_359761989");
    Hdr_63.add_attribute("TLoc", "TargetLocationID_t_829482297"); // 1
    Hdr_63_set.insert("TargetLocationID_t_829482297");
    Hdr_63.add_attribute("OBSub", "OnBehalfOfSubID_t_597882303"); // 1
    Hdr_63_set.insert("OnBehalfOfSubID_t_597882303");
    Hdr_63.add_attribute("OBLoc", "OnBehalfOfLocationID_t_832612890"); // 1
    Hdr_63_set.insert("OnBehalfOfLocationID_t_832612890");
    Hdr_63.add_attribute("D2Sub", "DeliverToSubID_t_1856752832"); // 1
    Hdr_63_set.insert("DeliverToSubID_t_1856752832");
    Hdr_63.add_attribute("D2Loc", "DeliverToLocationID_t_2108886750"); // 1
    Hdr_63_set.insert("DeliverToLocationID_t_2108886750");
    Hdr_63.add_attribute("PosDup", "N"); // 1
    Hdr_63_set.insert("N");
    Hdr_63.add_attribute("PosRsnd", "N"); // 1
    Hdr_63_set.insert("N");
    Hdr_63.add_attribute("Snt", "SendingTime_t_559884515"); // 1
    Hdr_63_set.insert("SendingTime_t_559884515");
    Hdr_63.add_attribute("OrigSnt", "OrigSendingTime_t_658546289"); // 1
    Hdr_63_set.insert("OrigSendingTime_t_658546289");
    Hdr_63.add_attribute("MsgEncd", "MessageEncoding_t_1555281286"); // 1
    Hdr_63_set.insert("MessageEncoding_t_1555281286");
    all_values.push_back(Hdr_63_set);
    all_compo_names.insert("Hdr_63_set");

    {
      xml_element Hop_63{"Hop"};
      multiset<string> Hop_63_set;
      Hop_63.add_attribute("ID", "HopCompID_t_2037996283"); // 2
      Hop_63_set.insert("HopCompID_t_2037996283");
      Hop_63.add_attribute("Ref", "1311041918"); // 2
      Hop_63_set.insert("1311041918");
      Hop_63.add_attribute("Snt", "HopSendingTime_t_470630217"); // 2
      Hop_63_set.insert("HopSendingTime_t_470630217");
      all_values.push_back(Hop_63_set);
      all_compo_names.insert("Hop_63_set");

      Hdr_63.add_element(Hop_63);
    }
    elt.add_element(Hdr_63);
  } // end Hdr
  { // Pty
    xml_element Pty_298{"Pty"};
    multiset<string> Pty_298_set;
    Pty_298.add_attribute("ID", "PartyID_t_997142313"); // 1
    Pty_298_set.insert("PartyID_t_997142313");
    Pty_298.add_attribute("Src", "7"); // 1
    Pty_298_set.insert("7");
    Pty_298.add_attribute("R", "37"); // 1
    Pty_298_set.insert("37");
    all_values.push_back(Pty_298_set);
    all_compo_names.insert("Pty_298_set");

    {
      xml_element Sub_298{"Sub"};
      multiset<string> Sub_298_set;
      Sub_298.add_attribute("ID", "PartySubID_t_1456880697"); // 2
      Sub_298_set.insert("PartySubID_t_1456880697");
      Sub_298.add_attribute("Typ", "14"); // 2
      Sub_298_set.insert("14");
      all_values.push_back(Sub_298_set);
      all_compo_names.insert("Sub_298_set");

      Pty_298.add_element(Sub_298);
    }
    elt.add_element(Pty_298);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_8{"TgtPty"};
    multiset<string> TgtPty_8_set;
    TgtPty_8.add_attribute("ID", "TargetPartyID_t_491740793"); // 1
    TgtPty_8_set.insert("TargetPartyID_t_491740793");
    TgtPty_8.add_attribute("Src", "9"); // 1
    TgtPty_8_set.insert("9");
    TgtPty_8.add_attribute("R", "75"); // 1
    TgtPty_8_set.insert("75");
    all_values.push_back(TgtPty_8_set);
    all_compo_names.insert("TgtPty_8_set");

    elt.add_element(TgtPty_8);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_9{"TgtPty"};
    multiset<string> TgtPty_9_set;
    TgtPty_9.add_attribute("ID", "TargetPartyID_t_603819313"); // 1
    TgtPty_9_set.insert("TargetPartyID_t_603819313");
    TgtPty_9.add_attribute("Src", "7"); // 1
    TgtPty_9_set.insert("7");
    TgtPty_9.add_attribute("R", "7"); // 1
    TgtPty_9_set.insert("7");
    all_values.push_back(TgtPty_9_set);
    all_compo_names.insert("TgtPty_9_set");

    elt.add_element(TgtPty_9);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_10{"TgtPty"};
    multiset<string> TgtPty_10_set;
    TgtPty_10.add_attribute("ID", "TargetPartyID_t_1656497822"); // 1
    TgtPty_10_set.insert("TargetPartyID_t_1656497822");
    TgtPty_10.add_attribute("Src", "8"); // 1
    TgtPty_10_set.insert("8");
    TgtPty_10.add_attribute("R", "33"); // 1
    TgtPty_10_set.insert("33");
    all_values.push_back(TgtPty_10_set);
    all_compo_names.insert("TgtPty_10_set");

    elt.add_element(TgtPty_10);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_53{"Instrmt"};
    multiset<string> Instrmt_53_set;
    Instrmt_53.add_attribute("Sym", "Symbol_t_1614432525"); // 1
    Instrmt_53_set.insert("Symbol_t_1614432525");
    Instrmt_53.add_attribute("Sfx", "CD"); // 1
    Instrmt_53_set.insert("CD");
    Instrmt_53.add_attribute("ID", "SecurityID_t_634751127"); // 1
    Instrmt_53_set.insert("SecurityID_t_634751127");
    Instrmt_53.add_attribute("Src", "J"); // 1
    Instrmt_53_set.insert("J");
    Instrmt_53.add_attribute("Prod", "4"); // 1
    Instrmt_53_set.insert("4");
    Instrmt_53.add_attribute("ProdCmplx", "ProductComplex_t_344020311"); // 1
    Instrmt_53_set.insert("ProductComplex_t_344020311");
    Instrmt_53.add_attribute("SecGrp", "SecurityGroup_t_26234282"); // 1
    Instrmt_53_set.insert("SecurityGroup_t_26234282");
    Instrmt_53.add_attribute("CFI", "CFICode_t_1629347167"); // 1
    Instrmt_53_set.insert("CFICode_t_1629347167");
    Instrmt_53.add_attribute("SecTyp", "EUSUPRA"); // 1
    Instrmt_53_set.insert("EUSUPRA");
    Instrmt_53.add_attribute("SubTyp", "SecuritySubType_t_586118797"); // 1
    Instrmt_53_set.insert("SecuritySubType_t_586118797");
    Instrmt_53.add_attribute("MMY", "140409808"); // 1
    Instrmt_53_set.insert("140409808");
    Instrmt_53.add_attribute("MatDt", "MaturityDate_t_1538698542"); // 1
    Instrmt_53_set.insert("MaturityDate_t_1538698542");
    Instrmt_53.add_attribute("MatTm", "476631432"); // 1
    Instrmt_53_set.insert("476631432");
    Instrmt_53.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1451451726"); // 1
    Instrmt_53_set.insert("SettleOnOpenFlag_t_1451451726");
    Instrmt_53.add_attribute("AsgnMeth", "2009328759"); // 1
    Instrmt_53_set.insert("2009328759");
    Instrmt_53.add_attribute("Status", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("CpnPmt", "CouponPaymentDate_t_301110391"); // 1
    Instrmt_53_set.insert("CouponPaymentDate_t_301110391");
    Instrmt_53.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_53_set.insert("XR");
    Instrmt_53.add_attribute("Snrty", "SR"); // 1
    Instrmt_53_set.insert("SR");
    Instrmt_53.add_attribute("NotlPctOut", "17579910.880000"); // 1
    Instrmt_53_set.insert("17579910.880000");
    Instrmt_53.add_attribute("OrigNotlPctOut", "15815323.170000"); // 1
    Instrmt_53_set.insert("15815323.170000");
    Instrmt_53.add_attribute("AttchPnt", "6084032.370000"); // 1
    Instrmt_53_set.insert("6084032.370000");
    Instrmt_53.add_attribute("DetchPnt", "1022482.340000"); // 1
    Instrmt_53_set.insert("1022482.340000");
    Instrmt_53.add_attribute("Issued", "IssueDate_t_1731533723"); // 1
    Instrmt_53_set.insert("IssueDate_t_1731533723");
    Instrmt_53.add_attribute("RepoCollSecTyp", "968332138"); // 1
    Instrmt_53_set.insert("968332138");
    Instrmt_53.add_attribute("RepoTrm", "706067547"); // 1
    Instrmt_53_set.insert("706067547");
    Instrmt_53.add_attribute("RepoRt", "4574966.970000"); // 1
    Instrmt_53_set.insert("4574966.970000");
    Instrmt_53.add_attribute("Fctr", "11847572.490000"); // 1
    Instrmt_53_set.insert("11847572.490000");
    Instrmt_53.add_attribute("CrdRtg", "CreditRating_t_215081722"); // 1
    Instrmt_53_set.insert("CreditRating_t_215081722");
    Instrmt_53.add_attribute("Rgstry", "InstrRegistry_t_829557334"); // 1
    Instrmt_53_set.insert("InstrRegistry_t_829557334");
    Instrmt_53.add_attribute("IssuCtry", "990026078"); // 1
    Instrmt_53_set.insert("990026078");
    Instrmt_53.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1829514247"); // 1
    Instrmt_53_set.insert("StateOrProvinceOfIssue_t_1829514247");
    Instrmt_53.add_attribute("Lcl", "LocaleOfIssue_t_1561379961"); // 1
    Instrmt_53_set.insert("LocaleOfIssue_t_1561379961");
    Instrmt_53.add_attribute("Redeem", "RedemptionDate_t_1624777205"); // 1
    Instrmt_53_set.insert("RedemptionDate_t_1624777205");
    Instrmt_53.add_attribute("StrkPx", "18943454.270000"); // 1
    Instrmt_53_set.insert("18943454.270000");
    Instrmt_53.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_53_set.insert("CHF");
    Instrmt_53.add_attribute("StrkMult", "19205797.090000"); // 1
    Instrmt_53_set.insert("19205797.090000");
    Instrmt_53.add_attribute("StrkValu", "4601953.480000"); // 1
    Instrmt_53_set.insert("4601953.480000");
    Instrmt_53.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_53_set.insert("4");
    Instrmt_53.add_attribute("StrkPxBndryPrcsn", "6006051.560000"); // 1
    Instrmt_53_set.insert("6006051.560000");
    Instrmt_53.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_53_set.insert("4");
    Instrmt_53.add_attribute("OptAt", "835846291"); // 1
    Instrmt_53_set.insert("835846291");
    Instrmt_53.add_attribute("Mult", "20520568.830000"); // 1
    Instrmt_53_set.insert("20520568.830000");
    Instrmt_53.add_attribute("MultTyp", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("MinPxIncr", "2056836.260000"); // 1
    Instrmt_53_set.insert("2056836.260000");
    Instrmt_53.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1245192258"); // 1
    Instrmt_53_set.insert("MinPriceIncrementAmount_t_1245192258");
    Instrmt_53.add_attribute("UOM", "Bcf"); // 1
    Instrmt_53_set.insert("Bcf");
    Instrmt_53.add_attribute("UOMQty", "19636747.150000"); // 1
    Instrmt_53_set.insert("19636747.150000");
    Instrmt_53.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_53_set.insert("Bbl");
    Instrmt_53.add_attribute("PxUOMQty", "6069929.830000"); // 1
    Instrmt_53_set.insert("6069929.830000");
    Instrmt_53.add_attribute("SettlMeth", "P"); // 1
    Instrmt_53_set.insert("P");
    Instrmt_53.add_attribute("ExerStyle", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("OptPayAmt", "OptPayoutAmount_t_624506848"); // 1
    Instrmt_53_set.insert("OptPayoutAmount_t_624506848");
    Instrmt_53.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_53_set.insert("INX");
    Instrmt_53.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_53_set.insert("CDS");
    Instrmt_53.add_attribute("ListMeth", "0"); // 1
    Instrmt_53_set.insert("0");
    Instrmt_53.add_attribute("CapPx", "15503450.350000"); // 1
    Instrmt_53_set.insert("15503450.350000");
    Instrmt_53.add_attribute("FlrPx", "16026248.010000"); // 1
    Instrmt_53_set.insert("16026248.010000");
    Instrmt_53.add_attribute("PutCall", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("FlexInd", "true"); // 1
    Instrmt_53_set.insert("true");
    Instrmt_53.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_53_set.insert("false");
    Instrmt_53.add_attribute("TmUnit", "Min"); // 1
    Instrmt_53_set.insert("Min");
    Instrmt_53.add_attribute("CpnRt", "19425731.780000"); // 1
    Instrmt_53_set.insert("19425731.780000");
    Instrmt_53.add_attribute("Exch", "SecurityExchange_t_901232228"); // 1
    Instrmt_53_set.insert("SecurityExchange_t_901232228");
    Instrmt_53.add_attribute("PosLmt", "41577009"); // 1
    Instrmt_53_set.insert("41577009");
    Instrmt_53.add_attribute("NTPosLmt", "255284878"); // 1
    Instrmt_53_set.insert("255284878");
    Instrmt_53.add_attribute("Issr", "Issuer_t_705963353"); // 1
    Instrmt_53_set.insert("Issuer_t_705963353");
    Instrmt_53.add_attribute("EncIssrLen", "400791868"); // 1
    Instrmt_53_set.insert("400791868");
    Instrmt_53.add_attribute("EncIssr", "EncodedIssuer_t_855890035"); // 1
    Instrmt_53_set.insert("EncodedIssuer_t_855890035");
    Instrmt_53.add_attribute("Desc", "SecurityDesc_t_2049393020"); // 1
    Instrmt_53_set.insert("SecurityDesc_t_2049393020");
    Instrmt_53.add_attribute("EncSecDescLen", "1236638159"); // 1
    Instrmt_53_set.insert("1236638159");
    Instrmt_53.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_760463270"); // 1
    Instrmt_53_set.insert("EncodedSecurityDesc_t_760463270");
    Instrmt_53.add_attribute("Pool", "Pool_t_1107184151"); // 1
    Instrmt_53_set.insert("Pool_t_1107184151");
    Instrmt_53.add_attribute("CSetMo", "1155030017"); // 1
    Instrmt_53_set.insert("1155030017");
    Instrmt_53.add_attribute("CPPgm", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("CPRegT", "CPRegType_t_204892762"); // 1
    Instrmt_53_set.insert("CPRegType_t_204892762");
    Instrmt_53.add_attribute("Dated", "DatedDate_t_1153619763"); // 1
    Instrmt_53_set.insert("DatedDate_t_1153619763");
    Instrmt_53.add_attribute("IntAcrl", "InterestAccrualDate_t_782337963"); // 1
    Instrmt_53_set.insert("InterestAccrualDate_t_782337963");
    all_values.push_back(Instrmt_53_set);
    all_compo_names.insert("Instrmt_53_set");

    {
      xml_element AID_56{"AID"};
      multiset<string> AID_56_set;
      AID_56.add_attribute("AltID", "SecurityAltID_t_884133690"); // 2
      AID_56_set.insert("SecurityAltID_t_884133690");
      AID_56.add_attribute("AltIDSrc", "3"); // 2
      AID_56_set.insert("3");
      all_values.push_back(AID_56_set);
      all_compo_names.insert("AID_56_set");

      Instrmt_53.add_element(AID_56);
    }
    {
      xml_element SecXML_56{"SecXML"};
      multiset<string> SecXML_56_set;
      SecXML_56.add_attribute("Schema", "SecurityXMLSchema_t_700777264"); // 2
      SecXML_56_set.insert("SecurityXMLSchema_t_700777264");
      all_values.push_back(SecXML_56_set);
      all_compo_names.insert("SecXML_56_set");

      Instrmt_53.add_element(SecXML_56);
    }
    {
      xml_element Evnt_56{"Evnt"};
      multiset<string> Evnt_56_set;
      Evnt_56.add_attribute("EventTyp", "13"); // 2
      Evnt_56_set.insert("13");
      Evnt_56.add_attribute("Dt", "EventDate_t_1188454220"); // 2
      Evnt_56_set.insert("EventDate_t_1188454220");
      Evnt_56.add_attribute("Tm", "EventTime_t_1325284113"); // 2
      Evnt_56_set.insert("EventTime_t_1325284113");
      Evnt_56.add_attribute("Px", "18682123.940000"); // 2
      Evnt_56_set.insert("18682123.940000");
      Evnt_56.add_attribute("Txt", "EventText_t_1801052943"); // 2
      Evnt_56_set.insert("EventText_t_1801052943");
      all_values.push_back(Evnt_56_set);
      all_compo_names.insert("Evnt_56_set");

      Instrmt_53.add_element(Evnt_56);
    }
    {
      xml_element Pty_299{"Pty"};
      multiset<string> Pty_299_set;
      Pty_299.add_attribute("ID", "InstrumentPartyID_t_17389035"); // 2
      Pty_299_set.insert("InstrumentPartyID_t_17389035");
      Pty_299.add_attribute("Src", "3"); // 2
      Pty_299_set.insert("3");
      Pty_299.add_attribute("R", "56"); // 2
      Pty_299_set.insert("56");
      all_values.push_back(Pty_299_set);
      all_compo_names.insert("Pty_299_set");

      {
        xml_element Sub_299{"Sub"};
        multiset<string> Sub_299_set;
        Sub_299.add_attribute("ID", "InstrumentPartySubID_t_539008205"); // 3
        Sub_299_set.insert("InstrumentPartySubID_t_539008205");
        Sub_299.add_attribute("Typ", "11"); // 3
        Sub_299_set.insert("11");
        all_values.push_back(Sub_299_set);
        all_compo_names.insert("Sub_299_set");

        Pty_299.add_element(Sub_299);
      }
      Instrmt_53.add_element(Pty_299);
    }
    {
      xml_element CmplxEvnt_53{"CmplxEvnt"};
      multiset<string> CmplxEvnt_53_set;
      CmplxEvnt_53.add_attribute("Typ", "5"); // 2
      CmplxEvnt_53_set.insert("5");
      CmplxEvnt_53.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_807489153"); // 2
      CmplxEvnt_53_set.insert("ComplexOptPayoutAmount_t_807489153");
      CmplxEvnt_53.add_attribute("Px", "20304046.600000"); // 2
      CmplxEvnt_53_set.insert("20304046.600000");
      CmplxEvnt_53.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_53_set.insert("2");
      CmplxEvnt_53.add_attribute("PxBndryPrcsn", "8490661.630000"); // 2
      CmplxEvnt_53_set.insert("8490661.630000");
      CmplxEvnt_53.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_53_set.insert("2");
      CmplxEvnt_53.add_attribute("Cond", "2"); // 2
      CmplxEvnt_53_set.insert("2");
      all_values.push_back(CmplxEvnt_53_set);
      all_compo_names.insert("CmplxEvnt_53_set");

      {
        xml_element EvntDts_53{"EvntDts"};
        multiset<string> EvntDts_53_set;
        EvntDts_53.add_attribute("StartDt", "ComplexEventStartDate_t_1249858031"); // 3
        EvntDts_53_set.insert("ComplexEventStartDate_t_1249858031");
        EvntDts_53.add_attribute("EndDt", "ComplexEventEndDate_t_994095926"); // 3
        EvntDts_53_set.insert("ComplexEventEndDate_t_994095926");
        all_values.push_back(EvntDts_53_set);
        all_compo_names.insert("EvntDts_53_set");

        {
          xml_element EvntTms_53{"EvntTms"};
          multiset<string> EvntTms_53_set;
          EvntTms_53.add_attribute("StartTm", "1697733761"); // 4
          EvntTms_53_set.insert("1697733761");
          EvntTms_53.add_attribute("EndTm", "339012542"); // 4
          EvntTms_53_set.insert("339012542");
          all_values.push_back(EvntTms_53_set);
          all_compo_names.insert("EvntTms_53_set");

          EvntDts_53.add_element(EvntTms_53);
        }
        CmplxEvnt_53.add_element(EvntDts_53);
      }
      Instrmt_53.add_element(CmplxEvnt_53);
    }
    elt.add_element(Instrmt_53);
  } // end Instrmt
  { // Undly
    xml_element Undly_74{"Undly"};
    multiset<string> Undly_74_set;
    Undly_74.add_attribute("Sym", "UnderlyingSymbol_t_1754559196"); // 1
    Undly_74_set.insert("UnderlyingSymbol_t_1754559196");
    Undly_74.add_attribute("Sfx", "WI"); // 1
    Undly_74_set.insert("WI");
    Undly_74.add_attribute("ID", "UnderlyingSecurityID_t_1494042559"); // 1
    Undly_74_set.insert("UnderlyingSecurityID_t_1494042559");
    Undly_74.add_attribute("Src", "F"); // 1
    Undly_74_set.insert("F");
    Undly_74.add_attribute("Prod", "12"); // 1
    Undly_74_set.insert("12");
    Undly_74.add_attribute("CFI", "UnderlyingCFICode_t_500178674"); // 1
    Undly_74_set.insert("UnderlyingCFICode_t_500178674");
    Undly_74.add_attribute("SecTyp", "BUYSELL"); // 1
    Undly_74_set.insert("BUYSELL");
    Undly_74.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1746460717"); // 1
    Undly_74_set.insert("UnderlyingSecuritySubType_t_1746460717");
    Undly_74.add_attribute("MMY", "113307772"); // 1
    Undly_74_set.insert("113307772");
    Undly_74.add_attribute("Mat", "UnderlyingMaturityDate_t_2056337672"); // 1
    Undly_74_set.insert("UnderlyingMaturityDate_t_2056337672");
    Undly_74.add_attribute("MatTm", "746401762"); // 1
    Undly_74_set.insert("746401762");
    Undly_74.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1301761993"); // 1
    Undly_74_set.insert("UnderlyingCouponPaymentDate_t_1301761993");
    Undly_74.add_attribute("RestrctTyp", "MR"); // 1
    Undly_74_set.insert("MR");
    Undly_74.add_attribute("Snrty", "SB"); // 1
    Undly_74_set.insert("SB");
    Undly_74.add_attribute("NotlPctOut", "9553312.880000"); // 1
    Undly_74_set.insert("9553312.880000");
    Undly_74.add_attribute("OrigNotlPctOut", "12515271.730000"); // 1
    Undly_74_set.insert("12515271.730000");
    Undly_74.add_attribute("AttchPnt", "17382042.910000"); // 1
    Undly_74_set.insert("17382042.910000");
    Undly_74.add_attribute("DetchPnt", "640417.370000"); // 1
    Undly_74_set.insert("640417.370000");
    Undly_74.add_attribute("Issued", "UnderlyingIssueDate_t_1790535378"); // 1
    Undly_74_set.insert("UnderlyingIssueDate_t_1790535378");
    Undly_74.add_attribute("RepoCollSecTyp", "1826035773"); // 1
    Undly_74_set.insert("1826035773");
    Undly_74.add_attribute("RepoTrm", "252670545"); // 1
    Undly_74_set.insert("252670545");
    Undly_74.add_attribute("RepoRt", "4505408.830000"); // 1
    Undly_74_set.insert("4505408.830000");
    Undly_74.add_attribute("Fctr", "17089567.860000"); // 1
    Undly_74_set.insert("17089567.860000");
    Undly_74.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1342531581"); // 1
    Undly_74_set.insert("UnderlyingCreditRating_t_1342531581");
    Undly_74.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1299607046"); // 1
    Undly_74_set.insert("UnderlyingInstrRegistry_t_1299607046");
    Undly_74.add_attribute("Ctry", "1847162677"); // 1
    Undly_74_set.insert("1847162677");
    Undly_74.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_990872322"); // 1
    Undly_74_set.insert("UnderlyingStateOrProvinceOfIssue_t_990872322");
    Undly_74.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_401981429"); // 1
    Undly_74_set.insert("UnderlyingLocaleOfIssue_t_401981429");
    Undly_74.add_attribute("Redeem", "UnderlyingRedemptionDate_t_693774955"); // 1
    Undly_74_set.insert("UnderlyingRedemptionDate_t_693774955");
    Undly_74.add_attribute("StrkPx", "5411224.360000"); // 1
    Undly_74_set.insert("5411224.360000");
    Undly_74.add_attribute("StrkCcy", "CHF"); // 1
    Undly_74_set.insert("CHF");
    Undly_74.add_attribute("OptA", "1198556701"); // 1
    Undly_74_set.insert("1198556701");
    Undly_74.add_attribute("Mult", "875528.820000"); // 1
    Undly_74_set.insert("875528.820000");
    Undly_74.add_attribute("MultTyp", "0"); // 1
    Undly_74_set.insert("0");
    Undly_74.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_74_set.insert("3");
    Undly_74.add_attribute("UOM", "USD"); // 1
    Undly_74_set.insert("USD");
    Undly_74.add_attribute("UOMQty", "821497.070000"); // 1
    Undly_74_set.insert("821497.070000");
    Undly_74.add_attribute("PxUOM", "Bcf"); // 1
    Undly_74_set.insert("Bcf");
    Undly_74.add_attribute("PxUOMQty", "7010393.290000"); // 1
    Undly_74_set.insert("7010393.290000");
    Undly_74.add_attribute("TmUnit", "Min"); // 1
    Undly_74_set.insert("Min");
    Undly_74.add_attribute("ExerStyle", "0"); // 1
    Undly_74_set.insert("0");
    Undly_74.add_attribute("CpnRt", "20028013.220000"); // 1
    Undly_74_set.insert("20028013.220000");
    Undly_74.add_attribute("Exch", "UnderlyingSecurityExchange_t_1225141869"); // 1
    Undly_74_set.insert("UnderlyingSecurityExchange_t_1225141869");
    Undly_74.add_attribute("Issr", "UnderlyingIssuer_t_725909420"); // 1
    Undly_74_set.insert("UnderlyingIssuer_t_725909420");
    Undly_74.add_attribute("EncUndIssrLen", "810648962"); // 1
    Undly_74_set.insert("810648962");
    Undly_74.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_329185394"); // 1
    Undly_74_set.insert("EncodedUnderlyingIssuer_t_329185394");
    Undly_74.add_attribute("Desc", "UnderlyingSecurityDesc_t_316630063"); // 1
    Undly_74_set.insert("UnderlyingSecurityDesc_t_316630063");
    Undly_74.add_attribute("EncUndSecDescLen", "874690700"); // 1
    Undly_74_set.insert("874690700");
    Undly_74.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2119720772"); // 1
    Undly_74_set.insert("EncodedUnderlyingSecurityDesc_t_2119720772");
    Undly_74.add_attribute("CPPgm", "UnderlyingCPProgram_t_2142665837"); // 1
    Undly_74_set.insert("UnderlyingCPProgram_t_2142665837");
    Undly_74.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1127361245"); // 1
    Undly_74_set.insert("UnderlyingCPRegType_t_1127361245");
    Undly_74.add_attribute("AllocPct", "4227780.080000"); // 1
    Undly_74_set.insert("4227780.080000");
    Undly_74.add_attribute("Ccy", "EUR"); // 1
    Undly_74_set.insert("EUR");
    Undly_74.add_attribute("Qty", "17223850.540000"); // 1
    Undly_74_set.insert("17223850.540000");
    Undly_74.add_attribute("SettlTyp", "5"); // 1
    Undly_74_set.insert("5");
    Undly_74.add_attribute("CashAmt", "UnderlyingCashAmount_t_1313281501"); // 1
    Undly_74_set.insert("UnderlyingCashAmount_t_1313281501");
    Undly_74.add_attribute("CashTyp", "FIXED"); // 1
    Undly_74_set.insert("FIXED");
    Undly_74.add_attribute("Px", "20975929.590000"); // 1
    Undly_74_set.insert("20975929.590000");
    Undly_74.add_attribute("DirtPx", "18544039.370000"); // 1
    Undly_74_set.insert("18544039.370000");
    Undly_74.add_attribute("EndPx", "7178768.070000"); // 1
    Undly_74_set.insert("7178768.070000");
    Undly_74.add_attribute("StartVal", "UnderlyingStartValue_t_250959814"); // 1
    Undly_74_set.insert("UnderlyingStartValue_t_250959814");
    Undly_74.add_attribute("CurVal", "UnderlyingCurrentValue_t_905476990"); // 1
    Undly_74_set.insert("UnderlyingCurrentValue_t_905476990");
    Undly_74.add_attribute("EndVal", "UnderlyingEndValue_t_805429690"); // 1
    Undly_74_set.insert("UnderlyingEndValue_t_805429690");
    Undly_74.add_attribute("AdjQty", "11250327.610000"); // 1
    Undly_74_set.insert("11250327.610000");
    Undly_74.add_attribute("FxRate", "8188770.700000"); // 1
    Undly_74_set.insert("8188770.700000");
    Undly_74.add_attribute("FxRateCalc", "M"); // 1
    Undly_74_set.insert("M");
    Undly_74.add_attribute("CapValu", "UnderlyingCapValue_t_1207182469"); // 1
    Undly_74_set.insert("UnderlyingCapValue_t_1207182469");
    Undly_74.add_attribute("SetMeth", "UnderlyingSettlMethod_t_331254219"); // 1
    Undly_74_set.insert("UnderlyingSettlMethod_t_331254219");
    Undly_74.add_attribute("PutCall", "2094200575"); // 1
    Undly_74_set.insert("2094200575");
    all_values.push_back(Undly_74_set);
    all_compo_names.insert("Undly_74_set");

    {
      xml_element UndAID_74{"UndAID"};
      multiset<string> UndAID_74_set;
      UndAID_74.add_attribute("AltID", "UnderlyingSecurityAltID_t_1198186201"); // 2
      UndAID_74_set.insert("UnderlyingSecurityAltID_t_1198186201");
      UndAID_74.add_attribute("AltIDSrc", "I"); // 2
      UndAID_74_set.insert("I");
      all_values.push_back(UndAID_74_set);
      all_compo_names.insert("UndAID_74_set");

      Undly_74.add_element(UndAID_74);
    }
    {
      xml_element Stip_110{"Stip"};
      multiset<string> Stip_110_set;
      Stip_110.add_attribute("Typ", "CURRENCY"); // 2
      Stip_110_set.insert("CURRENCY");
      Stip_110.add_attribute("Val", "UnderlyingStipValue_t_275844422"); // 2
      Stip_110_set.insert("UnderlyingStipValue_t_275844422");
      all_values.push_back(Stip_110_set);
      all_compo_names.insert("Stip_110_set");

      Undly_74.add_element(Stip_110);
    }
    {
      xml_element Pty_300{"Pty"};
      multiset<string> Pty_300_set;
      Pty_300.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1315942551"); // 2
      Pty_300_set.insert("UnderlyingInstrumentPartyID_t_1315942551");
      Pty_300.add_attribute("Src", "F"); // 2
      Pty_300_set.insert("F");
      Pty_300.add_attribute("R", "79"); // 2
      Pty_300_set.insert("79");
      all_values.push_back(Pty_300_set);
      all_compo_names.insert("Pty_300_set");

      {
        xml_element Sub_300{"Sub"};
        multiset<string> Sub_300_set;
        Sub_300.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1632572615"); // 3
        Sub_300_set.insert("UnderlyingInstrumentPartySubID_t_1632572615");
        Sub_300.add_attribute("Typ", "21"); // 3
        Sub_300_set.insert("21");
        all_values.push_back(Sub_300_set);
        all_compo_names.insert("Sub_300_set");

        Pty_300.add_element(Sub_300);
      }
      Undly_74.add_element(Pty_300);
    }
    elt.add_element(Undly_74);
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
