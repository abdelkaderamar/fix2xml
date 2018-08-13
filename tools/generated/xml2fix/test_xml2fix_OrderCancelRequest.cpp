#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelRequest_message_t_0;
  elt.add_attribute("OrigID", "OrigClOrdID_t_346085805"); // 0
  OrderCancelRequest_message_t_0.insert("OrigClOrdID_t_346085805");
  elt.add_attribute("OrdID", "OrderID_t_497105009"); // 0
  OrderCancelRequest_message_t_0.insert("OrderID_t_497105009");
  elt.add_attribute("ID", "ClOrdID_t_1331094353"); // 0
  OrderCancelRequest_message_t_0.insert("ClOrdID_t_1331094353");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1137014324"); // 0
  OrderCancelRequest_message_t_0.insert("SecondaryClOrdID_t_1137014324");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_711096644"); // 0
  OrderCancelRequest_message_t_0.insert("ClOrdLinkID_t_711096644");
  elt.add_attribute("ListID", "ListID_t_1762163536"); // 0
  OrderCancelRequest_message_t_0.insert("ListID_t_1762163536");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_214897370"); // 0
  OrderCancelRequest_message_t_0.insert("OrigOrdModTime_t_214897370");
  elt.add_attribute("Acct", "Account_t_1817924697"); // 0
  OrderCancelRequest_message_t_0.insert("Account_t_1817924697");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  OrderCancelRequest_message_t_0.insert("5");
  elt.add_attribute("AcctTyp", "3"); // 0
  OrderCancelRequest_message_t_0.insert("3");
  elt.add_attribute("Side", "2"); // 0
  OrderCancelRequest_message_t_0.insert("2");
  elt.add_attribute("TxnTm", "TransactTime_t_942575752"); // 0
  OrderCancelRequest_message_t_0.insert("TransactTime_t_942575752");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1436421285"); // 0
  OrderCancelRequest_message_t_0.insert("ComplianceID_t_1436421285");
  elt.add_attribute("Txt", "Text_t_808553192"); // 0
  OrderCancelRequest_message_t_0.insert("Text_t_808553192");
  elt.add_attribute("EncTxtLen", "105262515"); // 0
  OrderCancelRequest_message_t_0.insert("105262515");
  elt.add_attribute("EncTxt", "EncodedText_t_349881350"); // 0
  OrderCancelRequest_message_t_0.insert("EncodedText_t_349881350");
  all_values.push_back(OrderCancelRequest_message_t_0);
  all_compo_names.insert("OrderCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_58{"Hdr"};
    multiset<string> Hdr_58_set;
    Hdr_58.add_attribute("SeqNum", "1682224606"); // 1
    Hdr_58_set.insert("1682224606");
    Hdr_58.add_attribute("SID", "SenderCompID_t_1967581896"); // 1
    Hdr_58_set.insert("SenderCompID_t_1967581896");
    Hdr_58.add_attribute("TID", "TargetCompID_t_911639722"); // 1
    Hdr_58_set.insert("TargetCompID_t_911639722");
    Hdr_58.add_attribute("OBID", "OnBehalfOfCompID_t_1081362193"); // 1
    Hdr_58_set.insert("OnBehalfOfCompID_t_1081362193");
    Hdr_58.add_attribute("D2ID", "DeliverToCompID_t_1510857379"); // 1
    Hdr_58_set.insert("DeliverToCompID_t_1510857379");
    Hdr_58.add_attribute("SSub", "SenderSubID_t_1210908624"); // 1
    Hdr_58_set.insert("SenderSubID_t_1210908624");
    Hdr_58.add_attribute("SLoc", "SenderLocationID_t_453246635"); // 1
    Hdr_58_set.insert("SenderLocationID_t_453246635");
    Hdr_58.add_attribute("TSub", "TargetSubID_t_447396543"); // 1
    Hdr_58_set.insert("TargetSubID_t_447396543");
    Hdr_58.add_attribute("TLoc", "TargetLocationID_t_1048123958"); // 1
    Hdr_58_set.insert("TargetLocationID_t_1048123958");
    Hdr_58.add_attribute("OBSub", "OnBehalfOfSubID_t_880977817"); // 1
    Hdr_58_set.insert("OnBehalfOfSubID_t_880977817");
    Hdr_58.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1801026796"); // 1
    Hdr_58_set.insert("OnBehalfOfLocationID_t_1801026796");
    Hdr_58.add_attribute("D2Sub", "DeliverToSubID_t_945198710"); // 1
    Hdr_58_set.insert("DeliverToSubID_t_945198710");
    Hdr_58.add_attribute("D2Loc", "DeliverToLocationID_t_66050307"); // 1
    Hdr_58_set.insert("DeliverToLocationID_t_66050307");
    Hdr_58.add_attribute("PosDup", "Y"); // 1
    Hdr_58_set.insert("Y");
    Hdr_58.add_attribute("PosRsnd", "N"); // 1
    Hdr_58_set.insert("N");
    Hdr_58.add_attribute("Snt", "SendingTime_t_412136112"); // 1
    Hdr_58_set.insert("SendingTime_t_412136112");
    Hdr_58.add_attribute("OrigSnt", "OrigSendingTime_t_264555050"); // 1
    Hdr_58_set.insert("OrigSendingTime_t_264555050");
    Hdr_58.add_attribute("MsgEncd", "MessageEncoding_t_649076991"); // 1
    Hdr_58_set.insert("MessageEncoding_t_649076991");
    all_values.push_back(Hdr_58_set);
    all_compo_names.insert("Hdr_58_set");

    {
      xml_element Hop_58{"Hop"};
      multiset<string> Hop_58_set;
      Hop_58.add_attribute("ID", "HopCompID_t_1549150436"); // 2
      Hop_58_set.insert("HopCompID_t_1549150436");
      Hop_58.add_attribute("Ref", "975651695"); // 2
      Hop_58_set.insert("975651695");
      Hop_58.add_attribute("Snt", "HopSendingTime_t_263756879"); // 2
      Hop_58_set.insert("HopSendingTime_t_263756879");
      all_values.push_back(Hop_58_set);
      all_compo_names.insert("Hop_58_set");

      Hdr_58.add_element(Hop_58);
    }
    elt.add_element(Hdr_58);
  } // end Hdr
  { // Pty
    xml_element Pty_262{"Pty"};
    multiset<string> Pty_262_set;
    Pty_262.add_attribute("ID", "PartyID_t_646092744"); // 1
    Pty_262_set.insert("PartyID_t_646092744");
    Pty_262.add_attribute("Src", "H"); // 1
    Pty_262_set.insert("H");
    Pty_262.add_attribute("R", "70"); // 1
    Pty_262_set.insert("70");
    all_values.push_back(Pty_262_set);
    all_compo_names.insert("Pty_262_set");

    {
      xml_element Sub_262{"Sub"};
      multiset<string> Sub_262_set;
      Sub_262.add_attribute("ID", "PartySubID_t_198102825"); // 2
      Sub_262_set.insert("PartySubID_t_198102825");
      Sub_262.add_attribute("Typ", "7"); // 2
      Sub_262_set.insert("7");
      all_values.push_back(Sub_262_set);
      all_compo_names.insert("Sub_262_set");

      Pty_262.add_element(Sub_262);
    }
    elt.add_element(Pty_262);
  } // end Pty
  { // Pty
    xml_element Pty_263{"Pty"};
    multiset<string> Pty_263_set;
    Pty_263.add_attribute("ID", "PartyID_t_1279379362"); // 1
    Pty_263_set.insert("PartyID_t_1279379362");
    Pty_263.add_attribute("Src", "6"); // 1
    Pty_263_set.insert("6");
    Pty_263.add_attribute("R", "15"); // 1
    Pty_263_set.insert("15");
    all_values.push_back(Pty_263_set);
    all_compo_names.insert("Pty_263_set");

    {
      xml_element Sub_263{"Sub"};
      multiset<string> Sub_263_set;
      Sub_263.add_attribute("ID", "PartySubID_t_1629260712"); // 2
      Sub_263_set.insert("PartySubID_t_1629260712");
      Sub_263.add_attribute("Typ", "32"); // 2
      Sub_263_set.insert("32");
      all_values.push_back(Sub_263_set);
      all_compo_names.insert("Sub_263_set");

      Pty_263.add_element(Sub_263);
    }
    elt.add_element(Pty_263);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_48{"Instrmt"};
    multiset<string> Instrmt_48_set;
    Instrmt_48.add_attribute("Sym", "Symbol_t_1198958926"); // 1
    Instrmt_48_set.insert("Symbol_t_1198958926");
    Instrmt_48.add_attribute("Sfx", "CD"); // 1
    Instrmt_48_set.insert("CD");
    Instrmt_48.add_attribute("ID", "SecurityID_t_1622759168"); // 1
    Instrmt_48_set.insert("SecurityID_t_1622759168");
    Instrmt_48.add_attribute("Src", "8"); // 1
    Instrmt_48_set.insert("8");
    Instrmt_48.add_attribute("Prod", "9"); // 1
    Instrmt_48_set.insert("9");
    Instrmt_48.add_attribute("ProdCmplx", "ProductComplex_t_2076005803"); // 1
    Instrmt_48_set.insert("ProductComplex_t_2076005803");
    Instrmt_48.add_attribute("SecGrp", "SecurityGroup_t_1009729201"); // 1
    Instrmt_48_set.insert("SecurityGroup_t_1009729201");
    Instrmt_48.add_attribute("CFI", "CFICode_t_504965721"); // 1
    Instrmt_48_set.insert("CFICode_t_504965721");
    Instrmt_48.add_attribute("SecTyp", "FADN"); // 1
    Instrmt_48_set.insert("FADN");
    Instrmt_48.add_attribute("SubTyp", "SecuritySubType_t_663272349"); // 1
    Instrmt_48_set.insert("SecuritySubType_t_663272349");
    Instrmt_48.add_attribute("MMY", "1450164431"); // 1
    Instrmt_48_set.insert("1450164431");
    Instrmt_48.add_attribute("MatDt", "MaturityDate_t_875550279"); // 1
    Instrmt_48_set.insert("MaturityDate_t_875550279");
    Instrmt_48.add_attribute("MatTm", "430722390"); // 1
    Instrmt_48_set.insert("430722390");
    Instrmt_48.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_768147069"); // 1
    Instrmt_48_set.insert("SettleOnOpenFlag_t_768147069");
    Instrmt_48.add_attribute("AsgnMeth", "1287686391"); // 1
    Instrmt_48_set.insert("1287686391");
    Instrmt_48.add_attribute("Status", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("CpnPmt", "CouponPaymentDate_t_1417224060"); // 1
    Instrmt_48_set.insert("CouponPaymentDate_t_1417224060");
    Instrmt_48.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_48_set.insert("XR");
    Instrmt_48.add_attribute("Snrty", "SB"); // 1
    Instrmt_48_set.insert("SB");
    Instrmt_48.add_attribute("NotlPctOut", "16809809.400000"); // 1
    Instrmt_48_set.insert("16809809.400000");
    Instrmt_48.add_attribute("OrigNotlPctOut", "3059173.370000"); // 1
    Instrmt_48_set.insert("3059173.370000");
    Instrmt_48.add_attribute("AttchPnt", "1695382.320000"); // 1
    Instrmt_48_set.insert("1695382.320000");
    Instrmt_48.add_attribute("DetchPnt", "20120033.500000"); // 1
    Instrmt_48_set.insert("20120033.500000");
    Instrmt_48.add_attribute("Issued", "IssueDate_t_148875414"); // 1
    Instrmt_48_set.insert("IssueDate_t_148875414");
    Instrmt_48.add_attribute("RepoCollSecTyp", "367641057"); // 1
    Instrmt_48_set.insert("367641057");
    Instrmt_48.add_attribute("RepoTrm", "1138117864"); // 1
    Instrmt_48_set.insert("1138117864");
    Instrmt_48.add_attribute("RepoRt", "14282547.760000"); // 1
    Instrmt_48_set.insert("14282547.760000");
    Instrmt_48.add_attribute("Fctr", "13742970.750000"); // 1
    Instrmt_48_set.insert("13742970.750000");
    Instrmt_48.add_attribute("CrdRtg", "CreditRating_t_369494894"); // 1
    Instrmt_48_set.insert("CreditRating_t_369494894");
    Instrmt_48.add_attribute("Rgstry", "InstrRegistry_t_910031840"); // 1
    Instrmt_48_set.insert("InstrRegistry_t_910031840");
    Instrmt_48.add_attribute("IssuCtry", "1915694050"); // 1
    Instrmt_48_set.insert("1915694050");
    Instrmt_48.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1568453821"); // 1
    Instrmt_48_set.insert("StateOrProvinceOfIssue_t_1568453821");
    Instrmt_48.add_attribute("Lcl", "LocaleOfIssue_t_1303448626"); // 1
    Instrmt_48_set.insert("LocaleOfIssue_t_1303448626");
    Instrmt_48.add_attribute("Redeem", "RedemptionDate_t_1390969571"); // 1
    Instrmt_48_set.insert("RedemptionDate_t_1390969571");
    Instrmt_48.add_attribute("StrkPx", "21307864.780000"); // 1
    Instrmt_48_set.insert("21307864.780000");
    Instrmt_48.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_48_set.insert("JPY");
    Instrmt_48.add_attribute("StrkMult", "9930320.310000"); // 1
    Instrmt_48_set.insert("9930320.310000");
    Instrmt_48.add_attribute("StrkValu", "12652561.100000"); // 1
    Instrmt_48_set.insert("12652561.100000");
    Instrmt_48.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_48_set.insert("4");
    Instrmt_48.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("StrkPxBndryPrcsn", "5679368.930000"); // 1
    Instrmt_48_set.insert("5679368.930000");
    Instrmt_48.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_48_set.insert("3");
    Instrmt_48.add_attribute("OptAt", "2087026771"); // 1
    Instrmt_48_set.insert("2087026771");
    Instrmt_48.add_attribute("Mult", "13360839.630000"); // 1
    Instrmt_48_set.insert("13360839.630000");
    Instrmt_48.add_attribute("MultTyp", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_48_set.insert("4");
    Instrmt_48.add_attribute("MinPxIncr", "6058243.750000"); // 1
    Instrmt_48_set.insert("6058243.750000");
    Instrmt_48.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_686614253"); // 1
    Instrmt_48_set.insert("MinPriceIncrementAmount_t_686614253");
    Instrmt_48.add_attribute("UOM", "USD"); // 1
    Instrmt_48_set.insert("USD");
    Instrmt_48.add_attribute("UOMQty", "1393216.670000"); // 1
    Instrmt_48_set.insert("1393216.670000");
    Instrmt_48.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_48_set.insert("Alw");
    Instrmt_48.add_attribute("PxUOMQty", "3278042.840000"); // 1
    Instrmt_48_set.insert("3278042.840000");
    Instrmt_48.add_attribute("SettlMeth", "P"); // 1
    Instrmt_48_set.insert("P");
    Instrmt_48.add_attribute("ExerStyle", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("OptPayAmt", "OptPayoutAmount_t_1141959234"); // 1
    Instrmt_48_set.insert("OptPayoutAmount_t_1141959234");
    Instrmt_48.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_48_set.insert("INX");
    Instrmt_48.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_48_set.insert("FUTDA");
    Instrmt_48.add_attribute("ListMeth", "0"); // 1
    Instrmt_48_set.insert("0");
    Instrmt_48.add_attribute("CapPx", "13322099.730000"); // 1
    Instrmt_48_set.insert("13322099.730000");
    Instrmt_48.add_attribute("FlrPx", "18379528.190000"); // 1
    Instrmt_48_set.insert("18379528.190000");
    Instrmt_48.add_attribute("PutCall", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("FlexInd", "false"); // 1
    Instrmt_48_set.insert("false");
    Instrmt_48.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_48_set.insert("true");
    Instrmt_48.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_48_set.insert("Mo");
    Instrmt_48.add_attribute("CpnRt", "12484653.400000"); // 1
    Instrmt_48_set.insert("12484653.400000");
    Instrmt_48.add_attribute("Exch", "SecurityExchange_t_253446821"); // 1
    Instrmt_48_set.insert("SecurityExchange_t_253446821");
    Instrmt_48.add_attribute("PosLmt", "1908759163"); // 1
    Instrmt_48_set.insert("1908759163");
    Instrmt_48.add_attribute("NTPosLmt", "366237802"); // 1
    Instrmt_48_set.insert("366237802");
    Instrmt_48.add_attribute("Issr", "Issuer_t_234954872"); // 1
    Instrmt_48_set.insert("Issuer_t_234954872");
    Instrmt_48.add_attribute("EncIssrLen", "1417579896"); // 1
    Instrmt_48_set.insert("1417579896");
    Instrmt_48.add_attribute("EncIssr", "EncodedIssuer_t_934174696"); // 1
    Instrmt_48_set.insert("EncodedIssuer_t_934174696");
    Instrmt_48.add_attribute("Desc", "SecurityDesc_t_1092013202"); // 1
    Instrmt_48_set.insert("SecurityDesc_t_1092013202");
    Instrmt_48.add_attribute("EncSecDescLen", "1357123020"); // 1
    Instrmt_48_set.insert("1357123020");
    Instrmt_48.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_122775011"); // 1
    Instrmt_48_set.insert("EncodedSecurityDesc_t_122775011");
    Instrmt_48.add_attribute("Pool", "Pool_t_1089274276"); // 1
    Instrmt_48_set.insert("Pool_t_1089274276");
    Instrmt_48.add_attribute("CSetMo", "1991943584"); // 1
    Instrmt_48_set.insert("1991943584");
    Instrmt_48.add_attribute("CPPgm", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("CPRegT", "CPRegType_t_1775888530"); // 1
    Instrmt_48_set.insert("CPRegType_t_1775888530");
    Instrmt_48.add_attribute("Dated", "DatedDate_t_2725989"); // 1
    Instrmt_48_set.insert("DatedDate_t_2725989");
    Instrmt_48.add_attribute("IntAcrl", "InterestAccrualDate_t_867921054"); // 1
    Instrmt_48_set.insert("InterestAccrualDate_t_867921054");
    all_values.push_back(Instrmt_48_set);
    all_compo_names.insert("Instrmt_48_set");

    {
      xml_element AID_51{"AID"};
      multiset<string> AID_51_set;
      AID_51.add_attribute("AltID", "SecurityAltID_t_620936473"); // 2
      AID_51_set.insert("SecurityAltID_t_620936473");
      AID_51.add_attribute("AltIDSrc", "8"); // 2
      AID_51_set.insert("8");
      all_values.push_back(AID_51_set);
      all_compo_names.insert("AID_51_set");

      Instrmt_48.add_element(AID_51);
    }
    {
      xml_element SecXML_51{"SecXML"};
      multiset<string> SecXML_51_set;
      SecXML_51.add_attribute("Schema", "SecurityXMLSchema_t_871762423"); // 2
      SecXML_51_set.insert("SecurityXMLSchema_t_871762423");
      all_values.push_back(SecXML_51_set);
      all_compo_names.insert("SecXML_51_set");

      Instrmt_48.add_element(SecXML_51);
    }
    {
      xml_element Evnt_51{"Evnt"};
      multiset<string> Evnt_51_set;
      Evnt_51.add_attribute("EventTyp", "18"); // 2
      Evnt_51_set.insert("18");
      Evnt_51.add_attribute("Dt", "EventDate_t_1025975615"); // 2
      Evnt_51_set.insert("EventDate_t_1025975615");
      Evnt_51.add_attribute("Tm", "EventTime_t_2013721657"); // 2
      Evnt_51_set.insert("EventTime_t_2013721657");
      Evnt_51.add_attribute("Px", "370379.630000"); // 2
      Evnt_51_set.insert("370379.630000");
      Evnt_51.add_attribute("Txt", "EventText_t_948234384"); // 2
      Evnt_51_set.insert("EventText_t_948234384");
      all_values.push_back(Evnt_51_set);
      all_compo_names.insert("Evnt_51_set");

      Instrmt_48.add_element(Evnt_51);
    }
    {
      xml_element Pty_264{"Pty"};
      multiset<string> Pty_264_set;
      Pty_264.add_attribute("ID", "InstrumentPartyID_t_1377692138"); // 2
      Pty_264_set.insert("InstrumentPartyID_t_1377692138");
      Pty_264.add_attribute("Src", "F"); // 2
      Pty_264_set.insert("F");
      Pty_264.add_attribute("R", "66"); // 2
      Pty_264_set.insert("66");
      all_values.push_back(Pty_264_set);
      all_compo_names.insert("Pty_264_set");

      {
        xml_element Sub_264{"Sub"};
        multiset<string> Sub_264_set;
        Sub_264.add_attribute("ID", "InstrumentPartySubID_t_162632791"); // 3
        Sub_264_set.insert("InstrumentPartySubID_t_162632791");
        Sub_264.add_attribute("Typ", "10"); // 3
        Sub_264_set.insert("10");
        all_values.push_back(Sub_264_set);
        all_compo_names.insert("Sub_264_set");

        Pty_264.add_element(Sub_264);
      }
      Instrmt_48.add_element(Pty_264);
    }
    {
      xml_element CmplxEvnt_48{"CmplxEvnt"};
      multiset<string> CmplxEvnt_48_set;
      CmplxEvnt_48.add_attribute("Typ", "1"); // 2
      CmplxEvnt_48_set.insert("1");
      CmplxEvnt_48.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1078359923"); // 2
      CmplxEvnt_48_set.insert("ComplexOptPayoutAmount_t_1078359923");
      CmplxEvnt_48.add_attribute("Px", "9584045.800000"); // 2
      CmplxEvnt_48_set.insert("9584045.800000");
      CmplxEvnt_48.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_48_set.insert("5");
      CmplxEvnt_48.add_attribute("PxBndryPrcsn", "8396354.390000"); // 2
      CmplxEvnt_48_set.insert("8396354.390000");
      CmplxEvnt_48.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_48_set.insert("3");
      CmplxEvnt_48.add_attribute("Cond", "2"); // 2
      CmplxEvnt_48_set.insert("2");
      all_values.push_back(CmplxEvnt_48_set);
      all_compo_names.insert("CmplxEvnt_48_set");

      {
        xml_element EvntDts_48{"EvntDts"};
        multiset<string> EvntDts_48_set;
        EvntDts_48.add_attribute("StartDt", "ComplexEventStartDate_t_109731687"); // 3
        EvntDts_48_set.insert("ComplexEventStartDate_t_109731687");
        EvntDts_48.add_attribute("EndDt", "ComplexEventEndDate_t_111333430"); // 3
        EvntDts_48_set.insert("ComplexEventEndDate_t_111333430");
        all_values.push_back(EvntDts_48_set);
        all_compo_names.insert("EvntDts_48_set");

        {
          xml_element EvntTms_48{"EvntTms"};
          multiset<string> EvntTms_48_set;
          EvntTms_48.add_attribute("StartTm", "1153073546"); // 4
          EvntTms_48_set.insert("1153073546");
          EvntTms_48.add_attribute("EndTm", "1466854707"); // 4
          EvntTms_48_set.insert("1466854707");
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
  { // FinDetls
    xml_element FinDetls_14{"FinDetls"};
    multiset<string> FinDetls_14_set;
    FinDetls_14.add_attribute("AgmtDesc", "AgreementDesc_t_234108441"); // 1
    FinDetls_14_set.insert("AgreementDesc_t_234108441");
    FinDetls_14.add_attribute("AgmtID", "AgreementID_t_94864174"); // 1
    FinDetls_14_set.insert("AgreementID_t_94864174");
    FinDetls_14.add_attribute("AgmtDt", "AgreementDate_t_1311314644"); // 1
    FinDetls_14_set.insert("AgreementDate_t_1311314644");
    FinDetls_14.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_14_set.insert("GBP");
    FinDetls_14.add_attribute("TrmTyp", "2"); // 1
    FinDetls_14_set.insert("2");
    FinDetls_14.add_attribute("StartDt", "StartDate_t_1830628882"); // 1
    FinDetls_14_set.insert("StartDate_t_1830628882");
    FinDetls_14.add_attribute("EndDt", "EndDate_t_344205529"); // 1
    FinDetls_14_set.insert("EndDate_t_344205529");
    FinDetls_14.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_14_set.insert("2");
    FinDetls_14.add_attribute("MgnRatio", "5549076.570000"); // 1
    FinDetls_14_set.insert("5549076.570000");
    all_values.push_back(FinDetls_14_set);
    all_compo_names.insert("FinDetls_14_set");

    elt.add_element(FinDetls_14);
  } // end FinDetls
  { // Undly
    xml_element Undly_67{"Undly"};
    multiset<string> Undly_67_set;
    Undly_67.add_attribute("Sym", "UnderlyingSymbol_t_523062874"); // 1
    Undly_67_set.insert("UnderlyingSymbol_t_523062874");
    Undly_67.add_attribute("Sfx", "WI"); // 1
    Undly_67_set.insert("WI");
    Undly_67.add_attribute("ID", "UnderlyingSecurityID_t_2143586970"); // 1
    Undly_67_set.insert("UnderlyingSecurityID_t_2143586970");
    Undly_67.add_attribute("Src", "3"); // 1
    Undly_67_set.insert("3");
    Undly_67.add_attribute("Prod", "8"); // 1
    Undly_67_set.insert("8");
    Undly_67.add_attribute("CFI", "UnderlyingCFICode_t_1365351258"); // 1
    Undly_67_set.insert("UnderlyingCFICode_t_1365351258");
    Undly_67.add_attribute("SecTyp", "CASH"); // 1
    Undly_67_set.insert("CASH");
    Undly_67.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1961470596"); // 1
    Undly_67_set.insert("UnderlyingSecuritySubType_t_1961470596");
    Undly_67.add_attribute("MMY", "1075290498"); // 1
    Undly_67_set.insert("1075290498");
    Undly_67.add_attribute("Mat", "UnderlyingMaturityDate_t_1682659465"); // 1
    Undly_67_set.insert("UnderlyingMaturityDate_t_1682659465");
    Undly_67.add_attribute("MatTm", "892346872"); // 1
    Undly_67_set.insert("892346872");
    Undly_67.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2033695078"); // 1
    Undly_67_set.insert("UnderlyingCouponPaymentDate_t_2033695078");
    Undly_67.add_attribute("RestrctTyp", "FR"); // 1
    Undly_67_set.insert("FR");
    Undly_67.add_attribute("Snrty", "SD"); // 1
    Undly_67_set.insert("SD");
    Undly_67.add_attribute("NotlPctOut", "12108538.120000"); // 1
    Undly_67_set.insert("12108538.120000");
    Undly_67.add_attribute("OrigNotlPctOut", "15698252.800000"); // 1
    Undly_67_set.insert("15698252.800000");
    Undly_67.add_attribute("AttchPnt", "18417139.980000"); // 1
    Undly_67_set.insert("18417139.980000");
    Undly_67.add_attribute("DetchPnt", "13221872.430000"); // 1
    Undly_67_set.insert("13221872.430000");
    Undly_67.add_attribute("Issued", "UnderlyingIssueDate_t_575415178"); // 1
    Undly_67_set.insert("UnderlyingIssueDate_t_575415178");
    Undly_67.add_attribute("RepoCollSecTyp", "1161085058"); // 1
    Undly_67_set.insert("1161085058");
    Undly_67.add_attribute("RepoTrm", "1556295684"); // 1
    Undly_67_set.insert("1556295684");
    Undly_67.add_attribute("RepoRt", "6702793.520000"); // 1
    Undly_67_set.insert("6702793.520000");
    Undly_67.add_attribute("Fctr", "3249160.540000"); // 1
    Undly_67_set.insert("3249160.540000");
    Undly_67.add_attribute("CrdRtg", "UnderlyingCreditRating_t_371519864"); // 1
    Undly_67_set.insert("UnderlyingCreditRating_t_371519864");
    Undly_67.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_393548409"); // 1
    Undly_67_set.insert("UnderlyingInstrRegistry_t_393548409");
    Undly_67.add_attribute("Ctry", "1638956687"); // 1
    Undly_67_set.insert("1638956687");
    Undly_67.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_54665098"); // 1
    Undly_67_set.insert("UnderlyingStateOrProvinceOfIssue_t_54665098");
    Undly_67.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_737753938"); // 1
    Undly_67_set.insert("UnderlyingLocaleOfIssue_t_737753938");
    Undly_67.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1136043945"); // 1
    Undly_67_set.insert("UnderlyingRedemptionDate_t_1136043945");
    Undly_67.add_attribute("StrkPx", "6095727.560000"); // 1
    Undly_67_set.insert("6095727.560000");
    Undly_67.add_attribute("StrkCcy", "EUR"); // 1
    Undly_67_set.insert("EUR");
    Undly_67.add_attribute("OptA", "1030718423"); // 1
    Undly_67_set.insert("1030718423");
    Undly_67.add_attribute("Mult", "6929226.200000"); // 1
    Undly_67_set.insert("6929226.200000");
    Undly_67.add_attribute("MultTyp", "1"); // 1
    Undly_67_set.insert("1");
    Undly_67.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_67_set.insert("0");
    Undly_67.add_attribute("UOM", "Alw"); // 1
    Undly_67_set.insert("Alw");
    Undly_67.add_attribute("UOMQty", "9454375.960000"); // 1
    Undly_67_set.insert("9454375.960000");
    Undly_67.add_attribute("PxUOM", "Gal"); // 1
    Undly_67_set.insert("Gal");
    Undly_67.add_attribute("PxUOMQty", "9860807.290000"); // 1
    Undly_67_set.insert("9860807.290000");
    Undly_67.add_attribute("TmUnit", "S"); // 1
    Undly_67_set.insert("S");
    Undly_67.add_attribute("ExerStyle", "1"); // 1
    Undly_67_set.insert("1");
    Undly_67.add_attribute("CpnRt", "8722921.590000"); // 1
    Undly_67_set.insert("8722921.590000");
    Undly_67.add_attribute("Exch", "UnderlyingSecurityExchange_t_1989378350"); // 1
    Undly_67_set.insert("UnderlyingSecurityExchange_t_1989378350");
    Undly_67.add_attribute("Issr", "UnderlyingIssuer_t_972905063"); // 1
    Undly_67_set.insert("UnderlyingIssuer_t_972905063");
    Undly_67.add_attribute("EncUndIssrLen", "2083145971"); // 1
    Undly_67_set.insert("2083145971");
    Undly_67.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1411719982"); // 1
    Undly_67_set.insert("EncodedUnderlyingIssuer_t_1411719982");
    Undly_67.add_attribute("Desc", "UnderlyingSecurityDesc_t_667135414"); // 1
    Undly_67_set.insert("UnderlyingSecurityDesc_t_667135414");
    Undly_67.add_attribute("EncUndSecDescLen", "1257849566"); // 1
    Undly_67_set.insert("1257849566");
    Undly_67.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1987135160"); // 1
    Undly_67_set.insert("EncodedUnderlyingSecurityDesc_t_1987135160");
    Undly_67.add_attribute("CPPgm", "UnderlyingCPProgram_t_1828220472"); // 1
    Undly_67_set.insert("UnderlyingCPProgram_t_1828220472");
    Undly_67.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_666661603"); // 1
    Undly_67_set.insert("UnderlyingCPRegType_t_666661603");
    Undly_67.add_attribute("AllocPct", "5099308.640000"); // 1
    Undly_67_set.insert("5099308.640000");
    Undly_67.add_attribute("Ccy", "CHF"); // 1
    Undly_67_set.insert("CHF");
    Undly_67.add_attribute("Qty", "9034792.730000"); // 1
    Undly_67_set.insert("9034792.730000");
    Undly_67.add_attribute("SettlTyp", "4"); // 1
    Undly_67_set.insert("4");
    Undly_67.add_attribute("CashAmt", "UnderlyingCashAmount_t_1092846566"); // 1
    Undly_67_set.insert("UnderlyingCashAmount_t_1092846566");
    Undly_67.add_attribute("CashTyp", "FIXED"); // 1
    Undly_67_set.insert("FIXED");
    Undly_67.add_attribute("Px", "6331698.620000"); // 1
    Undly_67_set.insert("6331698.620000");
    Undly_67.add_attribute("DirtPx", "17024193.220000"); // 1
    Undly_67_set.insert("17024193.220000");
    Undly_67.add_attribute("EndPx", "1905688.620000"); // 1
    Undly_67_set.insert("1905688.620000");
    Undly_67.add_attribute("StartVal", "UnderlyingStartValue_t_144793034"); // 1
    Undly_67_set.insert("UnderlyingStartValue_t_144793034");
    Undly_67.add_attribute("CurVal", "UnderlyingCurrentValue_t_585654097"); // 1
    Undly_67_set.insert("UnderlyingCurrentValue_t_585654097");
    Undly_67.add_attribute("EndVal", "UnderlyingEndValue_t_883491482"); // 1
    Undly_67_set.insert("UnderlyingEndValue_t_883491482");
    Undly_67.add_attribute("AdjQty", "11277134.640000"); // 1
    Undly_67_set.insert("11277134.640000");
    Undly_67.add_attribute("FxRate", "12677266.770000"); // 1
    Undly_67_set.insert("12677266.770000");
    Undly_67.add_attribute("FxRateCalc", "D"); // 1
    Undly_67_set.insert("D");
    Undly_67.add_attribute("CapValu", "UnderlyingCapValue_t_2073151060"); // 1
    Undly_67_set.insert("UnderlyingCapValue_t_2073151060");
    Undly_67.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1763786205"); // 1
    Undly_67_set.insert("UnderlyingSettlMethod_t_1763786205");
    Undly_67.add_attribute("PutCall", "1780362442"); // 1
    Undly_67_set.insert("1780362442");
    all_values.push_back(Undly_67_set);
    all_compo_names.insert("Undly_67_set");

    {
      xml_element UndAID_67{"UndAID"};
      multiset<string> UndAID_67_set;
      UndAID_67.add_attribute("AltID", "UnderlyingSecurityAltID_t_406280826"); // 2
      UndAID_67_set.insert("UnderlyingSecurityAltID_t_406280826");
      UndAID_67.add_attribute("AltIDSrc", "1"); // 2
      UndAID_67_set.insert("1");
      all_values.push_back(UndAID_67_set);
      all_compo_names.insert("UndAID_67_set");

      Undly_67.add_element(UndAID_67);
    }
    {
      xml_element Stip_105{"Stip"};
      multiset<string> Stip_105_set;
      Stip_105.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_105_set.insert("MAXORDQTY");
      Stip_105.add_attribute("Val", "UnderlyingStipValue_t_248175528"); // 2
      Stip_105_set.insert("UnderlyingStipValue_t_248175528");
      all_values.push_back(Stip_105_set);
      all_compo_names.insert("Stip_105_set");

      Undly_67.add_element(Stip_105);
    }
    {
      xml_element Pty_265{"Pty"};
      multiset<string> Pty_265_set;
      Pty_265.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1977614021"); // 2
      Pty_265_set.insert("UnderlyingInstrumentPartyID_t_1977614021");
      Pty_265.add_attribute("Src", "C"); // 2
      Pty_265_set.insert("C");
      Pty_265.add_attribute("R", "72"); // 2
      Pty_265_set.insert("72");
      all_values.push_back(Pty_265_set);
      all_compo_names.insert("Pty_265_set");

      {
        xml_element Sub_265{"Sub"};
        multiset<string> Sub_265_set;
        Sub_265.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_497265787"); // 3
        Sub_265_set.insert("UnderlyingInstrumentPartySubID_t_497265787");
        Sub_265.add_attribute("Typ", "6"); // 3
        Sub_265_set.insert("6");
        all_values.push_back(Sub_265_set);
        all_compo_names.insert("Sub_265_set");

        Pty_265.add_element(Sub_265);
      }
      Undly_67.add_element(Pty_265);
    }
    elt.add_element(Undly_67);
  } // end Undly
  { // Undly
    xml_element Undly_68{"Undly"};
    multiset<string> Undly_68_set;
    Undly_68.add_attribute("Sym", "UnderlyingSymbol_t_1499547022"); // 1
    Undly_68_set.insert("UnderlyingSymbol_t_1499547022");
    Undly_68.add_attribute("Sfx", "WI"); // 1
    Undly_68_set.insert("WI");
    Undly_68.add_attribute("ID", "UnderlyingSecurityID_t_217860798"); // 1
    Undly_68_set.insert("UnderlyingSecurityID_t_217860798");
    Undly_68.add_attribute("Src", "K"); // 1
    Undly_68_set.insert("K");
    Undly_68.add_attribute("Prod", "13"); // 1
    Undly_68_set.insert("13");
    Undly_68.add_attribute("CFI", "UnderlyingCFICode_t_1256042266"); // 1
    Undly_68_set.insert("UnderlyingCFICode_t_1256042266");
    Undly_68.add_attribute("SecTyp", "TD"); // 1
    Undly_68_set.insert("TD");
    Undly_68.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1828265054"); // 1
    Undly_68_set.insert("UnderlyingSecuritySubType_t_1828265054");
    Undly_68.add_attribute("MMY", "201405184"); // 1
    Undly_68_set.insert("201405184");
    Undly_68.add_attribute("Mat", "UnderlyingMaturityDate_t_259223076"); // 1
    Undly_68_set.insert("UnderlyingMaturityDate_t_259223076");
    Undly_68.add_attribute("MatTm", "313951269"); // 1
    Undly_68_set.insert("313951269");
    Undly_68.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1903824506"); // 1
    Undly_68_set.insert("UnderlyingCouponPaymentDate_t_1903824506");
    Undly_68.add_attribute("RestrctTyp", "MM"); // 1
    Undly_68_set.insert("MM");
    Undly_68.add_attribute("Snrty", "SB"); // 1
    Undly_68_set.insert("SB");
    Undly_68.add_attribute("NotlPctOut", "3419949.550000"); // 1
    Undly_68_set.insert("3419949.550000");
    Undly_68.add_attribute("OrigNotlPctOut", "13332834.200000"); // 1
    Undly_68_set.insert("13332834.200000");
    Undly_68.add_attribute("AttchPnt", "15864577.670000"); // 1
    Undly_68_set.insert("15864577.670000");
    Undly_68.add_attribute("DetchPnt", "16097216.320000"); // 1
    Undly_68_set.insert("16097216.320000");
    Undly_68.add_attribute("Issued", "UnderlyingIssueDate_t_2127565134"); // 1
    Undly_68_set.insert("UnderlyingIssueDate_t_2127565134");
    Undly_68.add_attribute("RepoCollSecTyp", "1512125179"); // 1
    Undly_68_set.insert("1512125179");
    Undly_68.add_attribute("RepoTrm", "1226024189"); // 1
    Undly_68_set.insert("1226024189");
    Undly_68.add_attribute("RepoRt", "17604439.280000"); // 1
    Undly_68_set.insert("17604439.280000");
    Undly_68.add_attribute("Fctr", "19184060.050000"); // 1
    Undly_68_set.insert("19184060.050000");
    Undly_68.add_attribute("CrdRtg", "UnderlyingCreditRating_t_83249499"); // 1
    Undly_68_set.insert("UnderlyingCreditRating_t_83249499");
    Undly_68.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_118131234"); // 1
    Undly_68_set.insert("UnderlyingInstrRegistry_t_118131234");
    Undly_68.add_attribute("Ctry", "19097885"); // 1
    Undly_68_set.insert("19097885");
    Undly_68.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2060863521"); // 1
    Undly_68_set.insert("UnderlyingStateOrProvinceOfIssue_t_2060863521");
    Undly_68.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_558964511"); // 1
    Undly_68_set.insert("UnderlyingLocaleOfIssue_t_558964511");
    Undly_68.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1678993395"); // 1
    Undly_68_set.insert("UnderlyingRedemptionDate_t_1678993395");
    Undly_68.add_attribute("StrkPx", "4106456.600000"); // 1
    Undly_68_set.insert("4106456.600000");
    Undly_68.add_attribute("StrkCcy", "CAN"); // 1
    Undly_68_set.insert("CAN");
    Undly_68.add_attribute("OptA", "588648272"); // 1
    Undly_68_set.insert("588648272");
    Undly_68.add_attribute("Mult", "3280245.050000"); // 1
    Undly_68_set.insert("3280245.050000");
    Undly_68.add_attribute("MultTyp", "1"); // 1
    Undly_68_set.insert("1");
    Undly_68.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_68_set.insert("1");
    Undly_68.add_attribute("UOM", "MMBtu"); // 1
    Undly_68_set.insert("MMBtu");
    Undly_68.add_attribute("UOMQty", "16585245.200000"); // 1
    Undly_68_set.insert("16585245.200000");
    Undly_68.add_attribute("PxUOM", "Gal"); // 1
    Undly_68_set.insert("Gal");
    Undly_68.add_attribute("PxUOMQty", "17854719.550000"); // 1
    Undly_68_set.insert("17854719.550000");
    Undly_68.add_attribute("TmUnit", "H"); // 1
    Undly_68_set.insert("H");
    Undly_68.add_attribute("ExerStyle", "1"); // 1
    Undly_68_set.insert("1");
    Undly_68.add_attribute("CpnRt", "15418128.130000"); // 1
    Undly_68_set.insert("15418128.130000");
    Undly_68.add_attribute("Exch", "UnderlyingSecurityExchange_t_220055886"); // 1
    Undly_68_set.insert("UnderlyingSecurityExchange_t_220055886");
    Undly_68.add_attribute("Issr", "UnderlyingIssuer_t_1225780740"); // 1
    Undly_68_set.insert("UnderlyingIssuer_t_1225780740");
    Undly_68.add_attribute("EncUndIssrLen", "1883807768"); // 1
    Undly_68_set.insert("1883807768");
    Undly_68.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1553339306"); // 1
    Undly_68_set.insert("EncodedUnderlyingIssuer_t_1553339306");
    Undly_68.add_attribute("Desc", "UnderlyingSecurityDesc_t_664754859"); // 1
    Undly_68_set.insert("UnderlyingSecurityDesc_t_664754859");
    Undly_68.add_attribute("EncUndSecDescLen", "1346045752"); // 1
    Undly_68_set.insert("1346045752");
    Undly_68.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1533420792"); // 1
    Undly_68_set.insert("EncodedUnderlyingSecurityDesc_t_1533420792");
    Undly_68.add_attribute("CPPgm", "UnderlyingCPProgram_t_29396390"); // 1
    Undly_68_set.insert("UnderlyingCPProgram_t_29396390");
    Undly_68.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_424586293"); // 1
    Undly_68_set.insert("UnderlyingCPRegType_t_424586293");
    Undly_68.add_attribute("AllocPct", "11463810.730000"); // 1
    Undly_68_set.insert("11463810.730000");
    Undly_68.add_attribute("Ccy", "CAN"); // 1
    Undly_68_set.insert("CAN");
    Undly_68.add_attribute("Qty", "12645123.070000"); // 1
    Undly_68_set.insert("12645123.070000");
    Undly_68.add_attribute("SettlTyp", "2"); // 1
    Undly_68_set.insert("2");
    Undly_68.add_attribute("CashAmt", "UnderlyingCashAmount_t_421215666"); // 1
    Undly_68_set.insert("UnderlyingCashAmount_t_421215666");
    Undly_68.add_attribute("CashTyp", "FIXED"); // 1
    Undly_68_set.insert("FIXED");
    Undly_68.add_attribute("Px", "14984100.290000"); // 1
    Undly_68_set.insert("14984100.290000");
    Undly_68.add_attribute("DirtPx", "8318613.260000"); // 1
    Undly_68_set.insert("8318613.260000");
    Undly_68.add_attribute("EndPx", "19336405.240000"); // 1
    Undly_68_set.insert("19336405.240000");
    Undly_68.add_attribute("StartVal", "UnderlyingStartValue_t_381983150"); // 1
    Undly_68_set.insert("UnderlyingStartValue_t_381983150");
    Undly_68.add_attribute("CurVal", "UnderlyingCurrentValue_t_1420509598"); // 1
    Undly_68_set.insert("UnderlyingCurrentValue_t_1420509598");
    Undly_68.add_attribute("EndVal", "UnderlyingEndValue_t_114181381"); // 1
    Undly_68_set.insert("UnderlyingEndValue_t_114181381");
    Undly_68.add_attribute("AdjQty", "12750341.580000"); // 1
    Undly_68_set.insert("12750341.580000");
    Undly_68.add_attribute("FxRate", "453297.120000"); // 1
    Undly_68_set.insert("453297.120000");
    Undly_68.add_attribute("FxRateCalc", "M"); // 1
    Undly_68_set.insert("M");
    Undly_68.add_attribute("CapValu", "UnderlyingCapValue_t_786075030"); // 1
    Undly_68_set.insert("UnderlyingCapValue_t_786075030");
    Undly_68.add_attribute("SetMeth", "UnderlyingSettlMethod_t_498414880"); // 1
    Undly_68_set.insert("UnderlyingSettlMethod_t_498414880");
    Undly_68.add_attribute("PutCall", "1336236459"); // 1
    Undly_68_set.insert("1336236459");
    all_values.push_back(Undly_68_set);
    all_compo_names.insert("Undly_68_set");

    {
      xml_element UndAID_68{"UndAID"};
      multiset<string> UndAID_68_set;
      UndAID_68.add_attribute("AltID", "UnderlyingSecurityAltID_t_556338978"); // 2
      UndAID_68_set.insert("UnderlyingSecurityAltID_t_556338978");
      UndAID_68.add_attribute("AltIDSrc", "A"); // 2
      UndAID_68_set.insert("A");
      all_values.push_back(UndAID_68_set);
      all_compo_names.insert("UndAID_68_set");

      Undly_68.add_element(UndAID_68);
    }
    {
      xml_element Stip_106{"Stip"};
      multiset<string> Stip_106_set;
      Stip_106.add_attribute("Typ", "MHP"); // 2
      Stip_106_set.insert("MHP");
      Stip_106.add_attribute("Val", "UnderlyingStipValue_t_776394864"); // 2
      Stip_106_set.insert("UnderlyingStipValue_t_776394864");
      all_values.push_back(Stip_106_set);
      all_compo_names.insert("Stip_106_set");

      Undly_68.add_element(Stip_106);
    }
    {
      xml_element Pty_266{"Pty"};
      multiset<string> Pty_266_set;
      Pty_266.add_attribute("ID", "UnderlyingInstrumentPartyID_t_343748409"); // 2
      Pty_266_set.insert("UnderlyingInstrumentPartyID_t_343748409");
      Pty_266.add_attribute("Src", "3"); // 2
      Pty_266_set.insert("3");
      Pty_266.add_attribute("R", "16"); // 2
      Pty_266_set.insert("16");
      all_values.push_back(Pty_266_set);
      all_compo_names.insert("Pty_266_set");

      {
        xml_element Sub_266{"Sub"};
        multiset<string> Sub_266_set;
        Sub_266.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1008503268"); // 3
        Sub_266_set.insert("UnderlyingInstrumentPartySubID_t_1008503268");
        Sub_266.add_attribute("Typ", "18"); // 3
        Sub_266_set.insert("18");
        all_values.push_back(Sub_266_set);
        all_compo_names.insert("Sub_266_set");

        Pty_266.add_element(Sub_266);
      }
      Undly_68.add_element(Pty_266);
    }
    elt.add_element(Undly_68);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_17{"OrdQty"};
    multiset<string> OrdQty_17_set;
    OrdQty_17.add_attribute("Qty", "17156713.150000"); // 1
    OrdQty_17_set.insert("17156713.150000");
    OrdQty_17.add_attribute("Cash", "10378996.580000"); // 1
    OrdQty_17_set.insert("10378996.580000");
    OrdQty_17.add_attribute("Pct", "900381.420000"); // 1
    OrdQty_17_set.insert("900381.420000");
    OrdQty_17.add_attribute("RndDir", "0"); // 1
    OrdQty_17_set.insert("0");
    OrdQty_17.add_attribute("RndMod", "8382184.060000"); // 1
    OrdQty_17_set.insert("8382184.060000");
    all_values.push_back(OrdQty_17_set);
    all_compo_names.insert("OrdQty_17_set");

    elt.add_element(OrdQty_17);
  } // end OrdQty
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
