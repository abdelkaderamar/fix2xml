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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelRequest_message_t_0;
  elt.add_attribute("OrigID", "OrigClOrdID_t_528495787"); // 0
  OrderCancelRequest_message_t_0.insert("OrigClOrdID_t_528495787");
  elt.add_attribute("OrdID", "OrderID_t_36508028"); // 0
  OrderCancelRequest_message_t_0.insert("OrderID_t_36508028");
  elt.add_attribute("ID", "ClOrdID_t_11523005"); // 0
  OrderCancelRequest_message_t_0.insert("ClOrdID_t_11523005");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_890714583"); // 0
  OrderCancelRequest_message_t_0.insert("SecondaryClOrdID_t_890714583");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_197415560"); // 0
  OrderCancelRequest_message_t_0.insert("ClOrdLinkID_t_197415560");
  elt.add_attribute("ListID", "ListID_t_1902611957"); // 0
  OrderCancelRequest_message_t_0.insert("ListID_t_1902611957");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1993648243"); // 0
  OrderCancelRequest_message_t_0.insert("OrigOrdModTime_t_1993648243");
  elt.add_attribute("Acct", "Account_t_900541293"); // 0
  OrderCancelRequest_message_t_0.insert("Account_t_900541293");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  OrderCancelRequest_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "1"); // 0
  OrderCancelRequest_message_t_0.insert("1");
  elt.add_attribute("Side", "A"); // 0
  OrderCancelRequest_message_t_0.insert("A");
  elt.add_attribute("TxnTm", "TransactTime_t_962698569"); // 0
  OrderCancelRequest_message_t_0.insert("TransactTime_t_962698569");
  elt.add_attribute("ComplianceID", "ComplianceID_t_678029701"); // 0
  OrderCancelRequest_message_t_0.insert("ComplianceID_t_678029701");
  elt.add_attribute("Txt", "Text_t_547730764"); // 0
  OrderCancelRequest_message_t_0.insert("Text_t_547730764");
  elt.add_attribute("EncTxtLen", "2017188281"); // 0
  OrderCancelRequest_message_t_0.insert("2017188281");
  elt.add_attribute("EncTxt", "EncodedText_t_1252757589"); // 0
  OrderCancelRequest_message_t_0.insert("EncodedText_t_1252757589");
  all_values.push_back(OrderCancelRequest_message_t_0);
  all_compo_names.insert("OrderCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_58{"Hdr"};
    multiset<string> Hdr_58_set;
    Hdr_58.add_attribute("SeqNum", "1907495323"); // 1
    Hdr_58_set.insert("1907495323");
    Hdr_58.add_attribute("SID", "SenderCompID_t_463400127"); // 1
    Hdr_58_set.insert("SenderCompID_t_463400127");
    Hdr_58.add_attribute("TID", "TargetCompID_t_1647681864"); // 1
    Hdr_58_set.insert("TargetCompID_t_1647681864");
    Hdr_58.add_attribute("OBID", "OnBehalfOfCompID_t_1486706920"); // 1
    Hdr_58_set.insert("OnBehalfOfCompID_t_1486706920");
    Hdr_58.add_attribute("D2ID", "DeliverToCompID_t_619049746"); // 1
    Hdr_58_set.insert("DeliverToCompID_t_619049746");
    Hdr_58.add_attribute("SSub", "SenderSubID_t_1525934668"); // 1
    Hdr_58_set.insert("SenderSubID_t_1525934668");
    Hdr_58.add_attribute("SLoc", "SenderLocationID_t_1390429651"); // 1
    Hdr_58_set.insert("SenderLocationID_t_1390429651");
    Hdr_58.add_attribute("TSub", "TargetSubID_t_929413522"); // 1
    Hdr_58_set.insert("TargetSubID_t_929413522");
    Hdr_58.add_attribute("TLoc", "TargetLocationID_t_1691128060"); // 1
    Hdr_58_set.insert("TargetLocationID_t_1691128060");
    Hdr_58.add_attribute("OBSub", "OnBehalfOfSubID_t_1475062291"); // 1
    Hdr_58_set.insert("OnBehalfOfSubID_t_1475062291");
    Hdr_58.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1633413194"); // 1
    Hdr_58_set.insert("OnBehalfOfLocationID_t_1633413194");
    Hdr_58.add_attribute("D2Sub", "DeliverToSubID_t_1369977968"); // 1
    Hdr_58_set.insert("DeliverToSubID_t_1369977968");
    Hdr_58.add_attribute("D2Loc", "DeliverToLocationID_t_370510251"); // 1
    Hdr_58_set.insert("DeliverToLocationID_t_370510251");
    Hdr_58.add_attribute("PosDup", "Y"); // 1
    Hdr_58_set.insert("Y");
    Hdr_58.add_attribute("PosRsnd", "N"); // 1
    Hdr_58_set.insert("N");
    Hdr_58.add_attribute("Snt", "SendingTime_t_899006038"); // 1
    Hdr_58_set.insert("SendingTime_t_899006038");
    Hdr_58.add_attribute("OrigSnt", "OrigSendingTime_t_793795278"); // 1
    Hdr_58_set.insert("OrigSendingTime_t_793795278");
    Hdr_58.add_attribute("MsgEncd", "MessageEncoding_t_532194319"); // 1
    Hdr_58_set.insert("MessageEncoding_t_532194319");
    all_values.push_back(Hdr_58_set);
    all_compo_names.insert("Hdr_58_set");

    {
      xml_element Hop_58{"Hop"};
      multiset<string> Hop_58_set;
      Hop_58.add_attribute("ID", "HopCompID_t_1789720621"); // 2
      Hop_58_set.insert("HopCompID_t_1789720621");
      Hop_58.add_attribute("Ref", "991210838"); // 2
      Hop_58_set.insert("991210838");
      Hop_58.add_attribute("Snt", "HopSendingTime_t_287322628"); // 2
      Hop_58_set.insert("HopSendingTime_t_287322628");
      all_values.push_back(Hop_58_set);
      all_compo_names.insert("Hop_58_set");

      Hdr_58.add_element(Hop_58);
    }
    elt.add_element(Hdr_58);
  } // end Hdr
  { // Pty
    xml_element Pty_273{"Pty"};
    multiset<string> Pty_273_set;
    Pty_273.add_attribute("ID", "PartyID_t_1891752131"); // 1
    Pty_273_set.insert("PartyID_t_1891752131");
    Pty_273.add_attribute("Src", "1"); // 1
    Pty_273_set.insert("1");
    Pty_273.add_attribute("R", "73"); // 1
    Pty_273_set.insert("73");
    all_values.push_back(Pty_273_set);
    all_compo_names.insert("Pty_273_set");

    {
      xml_element Sub_273{"Sub"};
      multiset<string> Sub_273_set;
      Sub_273.add_attribute("ID", "PartySubID_t_1241839276"); // 2
      Sub_273_set.insert("PartySubID_t_1241839276");
      Sub_273.add_attribute("Typ", "10"); // 2
      Sub_273_set.insert("10");
      all_values.push_back(Sub_273_set);
      all_compo_names.insert("Sub_273_set");

      Pty_273.add_element(Sub_273);
    }
    elt.add_element(Pty_273);
  } // end Pty
  { // Pty
    xml_element Pty_274{"Pty"};
    multiset<string> Pty_274_set;
    Pty_274.add_attribute("ID", "PartyID_t_481080304"); // 1
    Pty_274_set.insert("PartyID_t_481080304");
    Pty_274.add_attribute("Src", "F"); // 1
    Pty_274_set.insert("F");
    Pty_274.add_attribute("R", "33"); // 1
    Pty_274_set.insert("33");
    all_values.push_back(Pty_274_set);
    all_compo_names.insert("Pty_274_set");

    {
      xml_element Sub_274{"Sub"};
      multiset<string> Sub_274_set;
      Sub_274.add_attribute("ID", "PartySubID_t_1733837893"); // 2
      Sub_274_set.insert("PartySubID_t_1733837893");
      Sub_274.add_attribute("Typ", "7"); // 2
      Sub_274_set.insert("7");
      all_values.push_back(Sub_274_set);
      all_compo_names.insert("Sub_274_set");

      Pty_274.add_element(Sub_274);
    }
    elt.add_element(Pty_274);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_48{"Instrmt"};
    multiset<string> Instrmt_48_set;
    Instrmt_48.add_attribute("Sym", "Symbol_t_1769155037"); // 1
    Instrmt_48_set.insert("Symbol_t_1769155037");
    Instrmt_48.add_attribute("Sfx", "CD"); // 1
    Instrmt_48_set.insert("CD");
    Instrmt_48.add_attribute("ID", "SecurityID_t_888804988"); // 1
    Instrmt_48_set.insert("SecurityID_t_888804988");
    Instrmt_48.add_attribute("Src", "I"); // 1
    Instrmt_48_set.insert("I");
    Instrmt_48.add_attribute("Prod", "5"); // 1
    Instrmt_48_set.insert("5");
    Instrmt_48.add_attribute("ProdCmplx", "ProductComplex_t_131750991"); // 1
    Instrmt_48_set.insert("ProductComplex_t_131750991");
    Instrmt_48.add_attribute("SecGrp", "SecurityGroup_t_1170134657"); // 1
    Instrmt_48_set.insert("SecurityGroup_t_1170134657");
    Instrmt_48.add_attribute("CFI", "CFICode_t_156131543"); // 1
    Instrmt_48_set.insert("CFICode_t_156131543");
    Instrmt_48.add_attribute("SecTyp", "TPRN"); // 1
    Instrmt_48_set.insert("TPRN");
    Instrmt_48.add_attribute("SubTyp", "SecuritySubType_t_656064204"); // 1
    Instrmt_48_set.insert("SecuritySubType_t_656064204");
    Instrmt_48.add_attribute("MMY", "1526109511"); // 1
    Instrmt_48_set.insert("1526109511");
    Instrmt_48.add_attribute("MatDt", "MaturityDate_t_1977323533"); // 1
    Instrmt_48_set.insert("MaturityDate_t_1977323533");
    Instrmt_48.add_attribute("MatTm", "1413351453"); // 1
    Instrmt_48_set.insert("1413351453");
    Instrmt_48.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2046780825"); // 1
    Instrmt_48_set.insert("SettleOnOpenFlag_t_2046780825");
    Instrmt_48.add_attribute("AsgnMeth", "728845924"); // 1
    Instrmt_48_set.insert("728845924");
    Instrmt_48.add_attribute("Status", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("CpnPmt", "CouponPaymentDate_t_431491496"); // 1
    Instrmt_48_set.insert("CouponPaymentDate_t_431491496");
    Instrmt_48.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_48_set.insert("MR");
    Instrmt_48.add_attribute("Snrty", "SD"); // 1
    Instrmt_48_set.insert("SD");
    Instrmt_48.add_attribute("NotlPctOut", "7188141.240000"); // 1
    Instrmt_48_set.insert("7188141.240000");
    Instrmt_48.add_attribute("OrigNotlPctOut", "20069681.140000"); // 1
    Instrmt_48_set.insert("20069681.140000");
    Instrmt_48.add_attribute("AttchPnt", "7951424.040000"); // 1
    Instrmt_48_set.insert("7951424.040000");
    Instrmt_48.add_attribute("DetchPnt", "11921658.310000"); // 1
    Instrmt_48_set.insert("11921658.310000");
    Instrmt_48.add_attribute("Issued", "IssueDate_t_1810018718"); // 1
    Instrmt_48_set.insert("IssueDate_t_1810018718");
    Instrmt_48.add_attribute("RepoCollSecTyp", "2036981681"); // 1
    Instrmt_48_set.insert("2036981681");
    Instrmt_48.add_attribute("RepoTrm", "480732459"); // 1
    Instrmt_48_set.insert("480732459");
    Instrmt_48.add_attribute("RepoRt", "1436153.740000"); // 1
    Instrmt_48_set.insert("1436153.740000");
    Instrmt_48.add_attribute("Fctr", "16790680.730000"); // 1
    Instrmt_48_set.insert("16790680.730000");
    Instrmt_48.add_attribute("CrdRtg", "CreditRating_t_1786487368"); // 1
    Instrmt_48_set.insert("CreditRating_t_1786487368");
    Instrmt_48.add_attribute("Rgstry", "InstrRegistry_t_1877453268"); // 1
    Instrmt_48_set.insert("InstrRegistry_t_1877453268");
    Instrmt_48.add_attribute("IssuCtry", "1081166141"); // 1
    Instrmt_48_set.insert("1081166141");
    Instrmt_48.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1408158757"); // 1
    Instrmt_48_set.insert("StateOrProvinceOfIssue_t_1408158757");
    Instrmt_48.add_attribute("Lcl", "LocaleOfIssue_t_964005730"); // 1
    Instrmt_48_set.insert("LocaleOfIssue_t_964005730");
    Instrmt_48.add_attribute("Redeem", "RedemptionDate_t_1969971130"); // 1
    Instrmt_48_set.insert("RedemptionDate_t_1969971130");
    Instrmt_48.add_attribute("StrkPx", "16488798.920000"); // 1
    Instrmt_48_set.insert("16488798.920000");
    Instrmt_48.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_48_set.insert("EUR");
    Instrmt_48.add_attribute("StrkMult", "6715309.020000"); // 1
    Instrmt_48_set.insert("6715309.020000");
    Instrmt_48.add_attribute("StrkValu", "17326244.030000"); // 1
    Instrmt_48_set.insert("17326244.030000");
    Instrmt_48.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("StrkPxBndryPrcsn", "11112502.670000"); // 1
    Instrmt_48_set.insert("11112502.670000");
    Instrmt_48.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_48_set.insert("2");
    Instrmt_48.add_attribute("OptAt", "593462911"); // 1
    Instrmt_48_set.insert("593462911");
    Instrmt_48.add_attribute("Mult", "10105474.440000"); // 1
    Instrmt_48_set.insert("10105474.440000");
    Instrmt_48.add_attribute("MultTyp", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_48_set.insert("0");
    Instrmt_48.add_attribute("MinPxIncr", "14420389.410000"); // 1
    Instrmt_48_set.insert("14420389.410000");
    Instrmt_48.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_343336815"); // 1
    Instrmt_48_set.insert("MinPriceIncrementAmount_t_343336815");
    Instrmt_48.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_48_set.insert("oz_tr");
    Instrmt_48.add_attribute("UOMQty", "133694.170000"); // 1
    Instrmt_48_set.insert("133694.170000");
    Instrmt_48.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_48_set.insert("MWh");
    Instrmt_48.add_attribute("PxUOMQty", "3516586.730000"); // 1
    Instrmt_48_set.insert("3516586.730000");
    Instrmt_48.add_attribute("SettlMeth", "C"); // 1
    Instrmt_48_set.insert("C");
    Instrmt_48.add_attribute("ExerStyle", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_48_set.insert("3");
    Instrmt_48.add_attribute("OptPayAmt", "OptPayoutAmount_t_1686267707"); // 1
    Instrmt_48_set.insert("OptPayoutAmount_t_1686267707");
    Instrmt_48.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_48_set.insert("INT");
    Instrmt_48.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_48_set.insert("CDSD");
    Instrmt_48.add_attribute("ListMeth", "0"); // 1
    Instrmt_48_set.insert("0");
    Instrmt_48.add_attribute("CapPx", "18864249.940000"); // 1
    Instrmt_48_set.insert("18864249.940000");
    Instrmt_48.add_attribute("FlrPx", "8539072.730000"); // 1
    Instrmt_48_set.insert("8539072.730000");
    Instrmt_48.add_attribute("PutCall", "1"); // 1
    Instrmt_48_set.insert("1");
    Instrmt_48.add_attribute("FlexInd", "true"); // 1
    Instrmt_48_set.insert("true");
    Instrmt_48.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_48_set.insert("false");
    Instrmt_48.add_attribute("TmUnit", "H"); // 1
    Instrmt_48_set.insert("H");
    Instrmt_48.add_attribute("CpnRt", "1319562.880000"); // 1
    Instrmt_48_set.insert("1319562.880000");
    Instrmt_48.add_attribute("Exch", "SecurityExchange_t_630633228"); // 1
    Instrmt_48_set.insert("SecurityExchange_t_630633228");
    Instrmt_48.add_attribute("PosLmt", "758873684"); // 1
    Instrmt_48_set.insert("758873684");
    Instrmt_48.add_attribute("NTPosLmt", "1864580692"); // 1
    Instrmt_48_set.insert("1864580692");
    Instrmt_48.add_attribute("Issr", "Issuer_t_44201336"); // 1
    Instrmt_48_set.insert("Issuer_t_44201336");
    Instrmt_48.add_attribute("EncIssrLen", "2086468790"); // 1
    Instrmt_48_set.insert("2086468790");
    Instrmt_48.add_attribute("EncIssr", "EncodedIssuer_t_828347311"); // 1
    Instrmt_48_set.insert("EncodedIssuer_t_828347311");
    Instrmt_48.add_attribute("Desc", "SecurityDesc_t_1435092978"); // 1
    Instrmt_48_set.insert("SecurityDesc_t_1435092978");
    Instrmt_48.add_attribute("EncSecDescLen", "532448053"); // 1
    Instrmt_48_set.insert("532448053");
    Instrmt_48.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1838894755"); // 1
    Instrmt_48_set.insert("EncodedSecurityDesc_t_1838894755");
    Instrmt_48.add_attribute("Pool", "Pool_t_1407346895"); // 1
    Instrmt_48_set.insert("Pool_t_1407346895");
    Instrmt_48.add_attribute("CSetMo", "1185574048"); // 1
    Instrmt_48_set.insert("1185574048");
    Instrmt_48.add_attribute("CPPgm", "99"); // 1
    Instrmt_48_set.insert("99");
    Instrmt_48.add_attribute("CPRegT", "CPRegType_t_1750683710"); // 1
    Instrmt_48_set.insert("CPRegType_t_1750683710");
    Instrmt_48.add_attribute("Dated", "DatedDate_t_742090317"); // 1
    Instrmt_48_set.insert("DatedDate_t_742090317");
    Instrmt_48.add_attribute("IntAcrl", "InterestAccrualDate_t_1146819466"); // 1
    Instrmt_48_set.insert("InterestAccrualDate_t_1146819466");
    all_values.push_back(Instrmt_48_set);
    all_compo_names.insert("Instrmt_48_set");

    {
      xml_element AID_51{"AID"};
      multiset<string> AID_51_set;
      AID_51.add_attribute("AltID", "SecurityAltID_t_1953504992"); // 2
      AID_51_set.insert("SecurityAltID_t_1953504992");
      AID_51.add_attribute("AltIDSrc", "5"); // 2
      AID_51_set.insert("5");
      all_values.push_back(AID_51_set);
      all_compo_names.insert("AID_51_set");

      Instrmt_48.add_element(AID_51);
    }
    {
      xml_element SecXML_51{"SecXML"};
      multiset<string> SecXML_51_set;
      SecXML_51.add_attribute("Schema", "SecurityXMLSchema_t_204871066"); // 2
      SecXML_51_set.insert("SecurityXMLSchema_t_204871066");
      all_values.push_back(SecXML_51_set);
      all_compo_names.insert("SecXML_51_set");

      Instrmt_48.add_element(SecXML_51);
    }
    {
      xml_element Evnt_51{"Evnt"};
      multiset<string> Evnt_51_set;
      Evnt_51.add_attribute("EventTyp", "4"); // 2
      Evnt_51_set.insert("4");
      Evnt_51.add_attribute("Dt", "EventDate_t_1334905696"); // 2
      Evnt_51_set.insert("EventDate_t_1334905696");
      Evnt_51.add_attribute("Tm", "EventTime_t_1891138774"); // 2
      Evnt_51_set.insert("EventTime_t_1891138774");
      Evnt_51.add_attribute("Px", "18278330.690000"); // 2
      Evnt_51_set.insert("18278330.690000");
      Evnt_51.add_attribute("Txt", "EventText_t_1107646827"); // 2
      Evnt_51_set.insert("EventText_t_1107646827");
      all_values.push_back(Evnt_51_set);
      all_compo_names.insert("Evnt_51_set");

      Instrmt_48.add_element(Evnt_51);
    }
    {
      xml_element Pty_275{"Pty"};
      multiset<string> Pty_275_set;
      Pty_275.add_attribute("ID", "InstrumentPartyID_t_1068926554"); // 2
      Pty_275_set.insert("InstrumentPartyID_t_1068926554");
      Pty_275.add_attribute("Src", "2"); // 2
      Pty_275_set.insert("2");
      Pty_275.add_attribute("R", "47"); // 2
      Pty_275_set.insert("47");
      all_values.push_back(Pty_275_set);
      all_compo_names.insert("Pty_275_set");

      {
        xml_element Sub_275{"Sub"};
        multiset<string> Sub_275_set;
        Sub_275.add_attribute("ID", "InstrumentPartySubID_t_1654873091"); // 3
        Sub_275_set.insert("InstrumentPartySubID_t_1654873091");
        Sub_275.add_attribute("Typ", "11"); // 3
        Sub_275_set.insert("11");
        all_values.push_back(Sub_275_set);
        all_compo_names.insert("Sub_275_set");

        Pty_275.add_element(Sub_275);
      }
      Instrmt_48.add_element(Pty_275);
    }
    {
      xml_element CmplxEvnt_48{"CmplxEvnt"};
      multiset<string> CmplxEvnt_48_set;
      CmplxEvnt_48.add_attribute("Typ", "2"); // 2
      CmplxEvnt_48_set.insert("2");
      CmplxEvnt_48.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1742215873"); // 2
      CmplxEvnt_48_set.insert("ComplexOptPayoutAmount_t_1742215873");
      CmplxEvnt_48.add_attribute("Px", "2541941.320000"); // 2
      CmplxEvnt_48_set.insert("2541941.320000");
      CmplxEvnt_48.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_48_set.insert("2");
      CmplxEvnt_48.add_attribute("PxBndryPrcsn", "3536059.090000"); // 2
      CmplxEvnt_48_set.insert("3536059.090000");
      CmplxEvnt_48.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_48_set.insert("3");
      CmplxEvnt_48.add_attribute("Cond", "1"); // 2
      CmplxEvnt_48_set.insert("1");
      all_values.push_back(CmplxEvnt_48_set);
      all_compo_names.insert("CmplxEvnt_48_set");

      {
        xml_element EvntDts_48{"EvntDts"};
        multiset<string> EvntDts_48_set;
        EvntDts_48.add_attribute("StartDt", "ComplexEventStartDate_t_292591051"); // 3
        EvntDts_48_set.insert("ComplexEventStartDate_t_292591051");
        EvntDts_48.add_attribute("EndDt", "ComplexEventEndDate_t_799638487"); // 3
        EvntDts_48_set.insert("ComplexEventEndDate_t_799638487");
        all_values.push_back(EvntDts_48_set);
        all_compo_names.insert("EvntDts_48_set");

        {
          xml_element EvntTms_48{"EvntTms"};
          multiset<string> EvntTms_48_set;
          EvntTms_48.add_attribute("StartTm", "452909102"); // 4
          EvntTms_48_set.insert("452909102");
          EvntTms_48.add_attribute("EndTm", "825039105"); // 4
          EvntTms_48_set.insert("825039105");
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
    FinDetls_14.add_attribute("AgmtDesc", "AgreementDesc_t_491049594"); // 1
    FinDetls_14_set.insert("AgreementDesc_t_491049594");
    FinDetls_14.add_attribute("AgmtID", "AgreementID_t_1860255998"); // 1
    FinDetls_14_set.insert("AgreementID_t_1860255998");
    FinDetls_14.add_attribute("AgmtDt", "AgreementDate_t_2010613153"); // 1
    FinDetls_14_set.insert("AgreementDate_t_2010613153");
    FinDetls_14.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_14_set.insert("GBP");
    FinDetls_14.add_attribute("TrmTyp", "3"); // 1
    FinDetls_14_set.insert("3");
    FinDetls_14.add_attribute("StartDt", "StartDate_t_623835461"); // 1
    FinDetls_14_set.insert("StartDate_t_623835461");
    FinDetls_14.add_attribute("EndDt", "EndDate_t_1269477404"); // 1
    FinDetls_14_set.insert("EndDate_t_1269477404");
    FinDetls_14.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_14_set.insert("0");
    FinDetls_14.add_attribute("MgnRatio", "8287065.270000"); // 1
    FinDetls_14_set.insert("8287065.270000");
    all_values.push_back(FinDetls_14_set);
    all_compo_names.insert("FinDetls_14_set");

    elt.add_element(FinDetls_14);
  } // end FinDetls
  { // Undly
    xml_element Undly_67{"Undly"};
    multiset<string> Undly_67_set;
    Undly_67.add_attribute("Sym", "UnderlyingSymbol_t_886390860"); // 1
    Undly_67_set.insert("UnderlyingSymbol_t_886390860");
    Undly_67.add_attribute("Sfx", "WI"); // 1
    Undly_67_set.insert("WI");
    Undly_67.add_attribute("ID", "UnderlyingSecurityID_t_621204521"); // 1
    Undly_67_set.insert("UnderlyingSecurityID_t_621204521");
    Undly_67.add_attribute("Src", "H"); // 1
    Undly_67_set.insert("H");
    Undly_67.add_attribute("Prod", "1"); // 1
    Undly_67_set.insert("1");
    Undly_67.add_attribute("CFI", "UnderlyingCFICode_t_40495289"); // 1
    Undly_67_set.insert("UnderlyingCFICode_t_40495289");
    Undly_67.add_attribute("SecTyp", "MF"); // 1
    Undly_67_set.insert("MF");
    Undly_67.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1148677651"); // 1
    Undly_67_set.insert("UnderlyingSecuritySubType_t_1148677651");
    Undly_67.add_attribute("MMY", "162733132"); // 1
    Undly_67_set.insert("162733132");
    Undly_67.add_attribute("Mat", "UnderlyingMaturityDate_t_151089700"); // 1
    Undly_67_set.insert("UnderlyingMaturityDate_t_151089700");
    Undly_67.add_attribute("MatTm", "743409876"); // 1
    Undly_67_set.insert("743409876");
    Undly_67.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_416927264"); // 1
    Undly_67_set.insert("UnderlyingCouponPaymentDate_t_416927264");
    Undly_67.add_attribute("RestrctTyp", "FR"); // 1
    Undly_67_set.insert("FR");
    Undly_67.add_attribute("Snrty", "SB"); // 1
    Undly_67_set.insert("SB");
    Undly_67.add_attribute("NotlPctOut", "3882184.400000"); // 1
    Undly_67_set.insert("3882184.400000");
    Undly_67.add_attribute("OrigNotlPctOut", "2900042.600000"); // 1
    Undly_67_set.insert("2900042.600000");
    Undly_67.add_attribute("AttchPnt", "13896068.370000"); // 1
    Undly_67_set.insert("13896068.370000");
    Undly_67.add_attribute("DetchPnt", "11878569.270000"); // 1
    Undly_67_set.insert("11878569.270000");
    Undly_67.add_attribute("Issued", "UnderlyingIssueDate_t_742913363"); // 1
    Undly_67_set.insert("UnderlyingIssueDate_t_742913363");
    Undly_67.add_attribute("RepoCollSecTyp", "67162294"); // 1
    Undly_67_set.insert("67162294");
    Undly_67.add_attribute("RepoTrm", "1678906522"); // 1
    Undly_67_set.insert("1678906522");
    Undly_67.add_attribute("RepoRt", "4556857.130000"); // 1
    Undly_67_set.insert("4556857.130000");
    Undly_67.add_attribute("Fctr", "20777754.480000"); // 1
    Undly_67_set.insert("20777754.480000");
    Undly_67.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1155922517"); // 1
    Undly_67_set.insert("UnderlyingCreditRating_t_1155922517");
    Undly_67.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1919141773"); // 1
    Undly_67_set.insert("UnderlyingInstrRegistry_t_1919141773");
    Undly_67.add_attribute("Ctry", "535511622"); // 1
    Undly_67_set.insert("535511622");
    Undly_67.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1779757978"); // 1
    Undly_67_set.insert("UnderlyingStateOrProvinceOfIssue_t_1779757978");
    Undly_67.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1041135530"); // 1
    Undly_67_set.insert("UnderlyingLocaleOfIssue_t_1041135530");
    Undly_67.add_attribute("Redeem", "UnderlyingRedemptionDate_t_86996787"); // 1
    Undly_67_set.insert("UnderlyingRedemptionDate_t_86996787");
    Undly_67.add_attribute("StrkPx", "4609808.570000"); // 1
    Undly_67_set.insert("4609808.570000");
    Undly_67.add_attribute("StrkCcy", "CHF"); // 1
    Undly_67_set.insert("CHF");
    Undly_67.add_attribute("OptA", "1033342511"); // 1
    Undly_67_set.insert("1033342511");
    Undly_67.add_attribute("Mult", "4557115.030000"); // 1
    Undly_67_set.insert("4557115.030000");
    Undly_67.add_attribute("MultTyp", "2"); // 1
    Undly_67_set.insert("2");
    Undly_67.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_67_set.insert("0");
    Undly_67.add_attribute("UOM", "Gal"); // 1
    Undly_67_set.insert("Gal");
    Undly_67.add_attribute("UOMQty", "4805661.800000"); // 1
    Undly_67_set.insert("4805661.800000");
    Undly_67.add_attribute("PxUOM", "Alw"); // 1
    Undly_67_set.insert("Alw");
    Undly_67.add_attribute("PxUOMQty", "6589399.250000"); // 1
    Undly_67_set.insert("6589399.250000");
    Undly_67.add_attribute("TmUnit", "H"); // 1
    Undly_67_set.insert("H");
    Undly_67.add_attribute("ExerStyle", "0"); // 1
    Undly_67_set.insert("0");
    Undly_67.add_attribute("CpnRt", "10758671.890000"); // 1
    Undly_67_set.insert("10758671.890000");
    Undly_67.add_attribute("Exch", "UnderlyingSecurityExchange_t_1903844016"); // 1
    Undly_67_set.insert("UnderlyingSecurityExchange_t_1903844016");
    Undly_67.add_attribute("Issr", "UnderlyingIssuer_t_1368766736"); // 1
    Undly_67_set.insert("UnderlyingIssuer_t_1368766736");
    Undly_67.add_attribute("EncUndIssrLen", "1464085630"); // 1
    Undly_67_set.insert("1464085630");
    Undly_67.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_46364628"); // 1
    Undly_67_set.insert("EncodedUnderlyingIssuer_t_46364628");
    Undly_67.add_attribute("Desc", "UnderlyingSecurityDesc_t_610889925"); // 1
    Undly_67_set.insert("UnderlyingSecurityDesc_t_610889925");
    Undly_67.add_attribute("EncUndSecDescLen", "504458909"); // 1
    Undly_67_set.insert("504458909");
    Undly_67.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_789277991"); // 1
    Undly_67_set.insert("EncodedUnderlyingSecurityDesc_t_789277991");
    Undly_67.add_attribute("CPPgm", "UnderlyingCPProgram_t_678052220"); // 1
    Undly_67_set.insert("UnderlyingCPProgram_t_678052220");
    Undly_67.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_35881783"); // 1
    Undly_67_set.insert("UnderlyingCPRegType_t_35881783");
    Undly_67.add_attribute("AllocPct", "12449637.040000"); // 1
    Undly_67_set.insert("12449637.040000");
    Undly_67.add_attribute("Ccy", "USD"); // 1
    Undly_67_set.insert("USD");
    Undly_67.add_attribute("Qty", "10166218.300000"); // 1
    Undly_67_set.insert("10166218.300000");
    Undly_67.add_attribute("SettlTyp", "2"); // 1
    Undly_67_set.insert("2");
    Undly_67.add_attribute("CashAmt", "UnderlyingCashAmount_t_824078630"); // 1
    Undly_67_set.insert("UnderlyingCashAmount_t_824078630");
    Undly_67.add_attribute("CashTyp", "FIXED"); // 1
    Undly_67_set.insert("FIXED");
    Undly_67.add_attribute("Px", "12308524.290000"); // 1
    Undly_67_set.insert("12308524.290000");
    Undly_67.add_attribute("DirtPx", "12850594.880000"); // 1
    Undly_67_set.insert("12850594.880000");
    Undly_67.add_attribute("EndPx", "18922643.420000"); // 1
    Undly_67_set.insert("18922643.420000");
    Undly_67.add_attribute("StartVal", "UnderlyingStartValue_t_56756429"); // 1
    Undly_67_set.insert("UnderlyingStartValue_t_56756429");
    Undly_67.add_attribute("CurVal", "UnderlyingCurrentValue_t_170918351"); // 1
    Undly_67_set.insert("UnderlyingCurrentValue_t_170918351");
    Undly_67.add_attribute("EndVal", "UnderlyingEndValue_t_200492197"); // 1
    Undly_67_set.insert("UnderlyingEndValue_t_200492197");
    Undly_67.add_attribute("AdjQty", "8766981.160000"); // 1
    Undly_67_set.insert("8766981.160000");
    Undly_67.add_attribute("FxRate", "6980654.210000"); // 1
    Undly_67_set.insert("6980654.210000");
    Undly_67.add_attribute("FxRateCalc", "M"); // 1
    Undly_67_set.insert("M");
    Undly_67.add_attribute("CapValu", "UnderlyingCapValue_t_1357264296"); // 1
    Undly_67_set.insert("UnderlyingCapValue_t_1357264296");
    Undly_67.add_attribute("SetMeth", "UnderlyingSettlMethod_t_226406495"); // 1
    Undly_67_set.insert("UnderlyingSettlMethod_t_226406495");
    Undly_67.add_attribute("PutCall", "1355638915"); // 1
    Undly_67_set.insert("1355638915");
    all_values.push_back(Undly_67_set);
    all_compo_names.insert("Undly_67_set");

    {
      xml_element UndAID_67{"UndAID"};
      multiset<string> UndAID_67_set;
      UndAID_67.add_attribute("AltID", "UnderlyingSecurityAltID_t_1988920176"); // 2
      UndAID_67_set.insert("UnderlyingSecurityAltID_t_1988920176");
      UndAID_67.add_attribute("AltIDSrc", "6"); // 2
      UndAID_67_set.insert("6");
      all_values.push_back(UndAID_67_set);
      all_compo_names.insert("UndAID_67_set");

      Undly_67.add_element(UndAID_67);
    }
    {
      xml_element Stip_103{"Stip"};
      multiset<string> Stip_103_set;
      Stip_103.add_attribute("Typ", "WALA"); // 2
      Stip_103_set.insert("WALA");
      Stip_103.add_attribute("Val", "UnderlyingStipValue_t_1745280544"); // 2
      Stip_103_set.insert("UnderlyingStipValue_t_1745280544");
      all_values.push_back(Stip_103_set);
      all_compo_names.insert("Stip_103_set");

      Undly_67.add_element(Stip_103);
    }
    {
      xml_element Pty_276{"Pty"};
      multiset<string> Pty_276_set;
      Pty_276.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1866924181"); // 2
      Pty_276_set.insert("UnderlyingInstrumentPartyID_t_1866924181");
      Pty_276.add_attribute("Src", "H"); // 2
      Pty_276_set.insert("H");
      Pty_276.add_attribute("R", "26"); // 2
      Pty_276_set.insert("26");
      all_values.push_back(Pty_276_set);
      all_compo_names.insert("Pty_276_set");

      {
        xml_element Sub_276{"Sub"};
        multiset<string> Sub_276_set;
        Sub_276.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_330330458"); // 3
        Sub_276_set.insert("UnderlyingInstrumentPartySubID_t_330330458");
        Sub_276.add_attribute("Typ", "30"); // 3
        Sub_276_set.insert("30");
        all_values.push_back(Sub_276_set);
        all_compo_names.insert("Sub_276_set");

        Pty_276.add_element(Sub_276);
      }
      Undly_67.add_element(Pty_276);
    }
    elt.add_element(Undly_67);
  } // end Undly
  { // Undly
    xml_element Undly_68{"Undly"};
    multiset<string> Undly_68_set;
    Undly_68.add_attribute("Sym", "UnderlyingSymbol_t_433439516"); // 1
    Undly_68_set.insert("UnderlyingSymbol_t_433439516");
    Undly_68.add_attribute("Sfx", "CD"); // 1
    Undly_68_set.insert("CD");
    Undly_68.add_attribute("ID", "UnderlyingSecurityID_t_140965131"); // 1
    Undly_68_set.insert("UnderlyingSecurityID_t_140965131");
    Undly_68.add_attribute("Src", "C"); // 1
    Undly_68_set.insert("C");
    Undly_68.add_attribute("Prod", "11"); // 1
    Undly_68_set.insert("11");
    Undly_68.add_attribute("CFI", "UnderlyingCFICode_t_1332769432"); // 1
    Undly_68_set.insert("UnderlyingCFICode_t_1332769432");
    Undly_68.add_attribute("SecTyp", "MPT"); // 1
    Undly_68_set.insert("MPT");
    Undly_68.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_613098693"); // 1
    Undly_68_set.insert("UnderlyingSecuritySubType_t_613098693");
    Undly_68.add_attribute("MMY", "9364414"); // 1
    Undly_68_set.insert("9364414");
    Undly_68.add_attribute("Mat", "UnderlyingMaturityDate_t_457815115"); // 1
    Undly_68_set.insert("UnderlyingMaturityDate_t_457815115");
    Undly_68.add_attribute("MatTm", "1843951122"); // 1
    Undly_68_set.insert("1843951122");
    Undly_68.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1294423902"); // 1
    Undly_68_set.insert("UnderlyingCouponPaymentDate_t_1294423902");
    Undly_68.add_attribute("RestrctTyp", "MR"); // 1
    Undly_68_set.insert("MR");
    Undly_68.add_attribute("Snrty", "SB"); // 1
    Undly_68_set.insert("SB");
    Undly_68.add_attribute("NotlPctOut", "14653422.530000"); // 1
    Undly_68_set.insert("14653422.530000");
    Undly_68.add_attribute("OrigNotlPctOut", "4030880.060000"); // 1
    Undly_68_set.insert("4030880.060000");
    Undly_68.add_attribute("AttchPnt", "6299220.200000"); // 1
    Undly_68_set.insert("6299220.200000");
    Undly_68.add_attribute("DetchPnt", "159240.270000"); // 1
    Undly_68_set.insert("159240.270000");
    Undly_68.add_attribute("Issued", "UnderlyingIssueDate_t_1099786996"); // 1
    Undly_68_set.insert("UnderlyingIssueDate_t_1099786996");
    Undly_68.add_attribute("RepoCollSecTyp", "1987186316"); // 1
    Undly_68_set.insert("1987186316");
    Undly_68.add_attribute("RepoTrm", "242330522"); // 1
    Undly_68_set.insert("242330522");
    Undly_68.add_attribute("RepoRt", "3079422.630000"); // 1
    Undly_68_set.insert("3079422.630000");
    Undly_68.add_attribute("Fctr", "18286228.450000"); // 1
    Undly_68_set.insert("18286228.450000");
    Undly_68.add_attribute("CrdRtg", "UnderlyingCreditRating_t_740487967"); // 1
    Undly_68_set.insert("UnderlyingCreditRating_t_740487967");
    Undly_68.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_591964720"); // 1
    Undly_68_set.insert("UnderlyingInstrRegistry_t_591964720");
    Undly_68.add_attribute("Ctry", "1426419741"); // 1
    Undly_68_set.insert("1426419741");
    Undly_68.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_459928500"); // 1
    Undly_68_set.insert("UnderlyingStateOrProvinceOfIssue_t_459928500");
    Undly_68.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_192589158"); // 1
    Undly_68_set.insert("UnderlyingLocaleOfIssue_t_192589158");
    Undly_68.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1070581266"); // 1
    Undly_68_set.insert("UnderlyingRedemptionDate_t_1070581266");
    Undly_68.add_attribute("StrkPx", "7902589.580000"); // 1
    Undly_68_set.insert("7902589.580000");
    Undly_68.add_attribute("StrkCcy", "CHF"); // 1
    Undly_68_set.insert("CHF");
    Undly_68.add_attribute("OptA", "1798641637"); // 1
    Undly_68_set.insert("1798641637");
    Undly_68.add_attribute("Mult", "4386376.380000"); // 1
    Undly_68_set.insert("4386376.380000");
    Undly_68.add_attribute("MultTyp", "2"); // 1
    Undly_68_set.insert("2");
    Undly_68.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_68_set.insert("2");
    Undly_68.add_attribute("UOM", "t"); // 1
    Undly_68_set.insert("t");
    Undly_68.add_attribute("UOMQty", "15824817.590000"); // 1
    Undly_68_set.insert("15824817.590000");
    Undly_68.add_attribute("PxUOM", "Gal"); // 1
    Undly_68_set.insert("Gal");
    Undly_68.add_attribute("PxUOMQty", "17807714.840000"); // 1
    Undly_68_set.insert("17807714.840000");
    Undly_68.add_attribute("TmUnit", "S"); // 1
    Undly_68_set.insert("S");
    Undly_68.add_attribute("ExerStyle", "2"); // 1
    Undly_68_set.insert("2");
    Undly_68.add_attribute("CpnRt", "9277117.390000"); // 1
    Undly_68_set.insert("9277117.390000");
    Undly_68.add_attribute("Exch", "UnderlyingSecurityExchange_t_95409035"); // 1
    Undly_68_set.insert("UnderlyingSecurityExchange_t_95409035");
    Undly_68.add_attribute("Issr", "UnderlyingIssuer_t_1330674758"); // 1
    Undly_68_set.insert("UnderlyingIssuer_t_1330674758");
    Undly_68.add_attribute("EncUndIssrLen", "245570344"); // 1
    Undly_68_set.insert("245570344");
    Undly_68.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_498497041"); // 1
    Undly_68_set.insert("EncodedUnderlyingIssuer_t_498497041");
    Undly_68.add_attribute("Desc", "UnderlyingSecurityDesc_t_1960596778"); // 1
    Undly_68_set.insert("UnderlyingSecurityDesc_t_1960596778");
    Undly_68.add_attribute("EncUndSecDescLen", "261494371"); // 1
    Undly_68_set.insert("261494371");
    Undly_68.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1598284038"); // 1
    Undly_68_set.insert("EncodedUnderlyingSecurityDesc_t_1598284038");
    Undly_68.add_attribute("CPPgm", "UnderlyingCPProgram_t_1800299447"); // 1
    Undly_68_set.insert("UnderlyingCPProgram_t_1800299447");
    Undly_68.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_503824893"); // 1
    Undly_68_set.insert("UnderlyingCPRegType_t_503824893");
    Undly_68.add_attribute("AllocPct", "19062263.010000"); // 1
    Undly_68_set.insert("19062263.010000");
    Undly_68.add_attribute("Ccy", "JPY"); // 1
    Undly_68_set.insert("JPY");
    Undly_68.add_attribute("Qty", "3507073.730000"); // 1
    Undly_68_set.insert("3507073.730000");
    Undly_68.add_attribute("SettlTyp", "5"); // 1
    Undly_68_set.insert("5");
    Undly_68.add_attribute("CashAmt", "UnderlyingCashAmount_t_1704241360"); // 1
    Undly_68_set.insert("UnderlyingCashAmount_t_1704241360");
    Undly_68.add_attribute("CashTyp", "FIXED"); // 1
    Undly_68_set.insert("FIXED");
    Undly_68.add_attribute("Px", "18309560.040000"); // 1
    Undly_68_set.insert("18309560.040000");
    Undly_68.add_attribute("DirtPx", "3470166.710000"); // 1
    Undly_68_set.insert("3470166.710000");
    Undly_68.add_attribute("EndPx", "8409690.380000"); // 1
    Undly_68_set.insert("8409690.380000");
    Undly_68.add_attribute("StartVal", "UnderlyingStartValue_t_1187493139"); // 1
    Undly_68_set.insert("UnderlyingStartValue_t_1187493139");
    Undly_68.add_attribute("CurVal", "UnderlyingCurrentValue_t_2145658308"); // 1
    Undly_68_set.insert("UnderlyingCurrentValue_t_2145658308");
    Undly_68.add_attribute("EndVal", "UnderlyingEndValue_t_1279606676"); // 1
    Undly_68_set.insert("UnderlyingEndValue_t_1279606676");
    Undly_68.add_attribute("AdjQty", "749498.470000"); // 1
    Undly_68_set.insert("749498.470000");
    Undly_68.add_attribute("FxRate", "12660593.470000"); // 1
    Undly_68_set.insert("12660593.470000");
    Undly_68.add_attribute("FxRateCalc", "M"); // 1
    Undly_68_set.insert("M");
    Undly_68.add_attribute("CapValu", "UnderlyingCapValue_t_1657431606"); // 1
    Undly_68_set.insert("UnderlyingCapValue_t_1657431606");
    Undly_68.add_attribute("SetMeth", "UnderlyingSettlMethod_t_999559080"); // 1
    Undly_68_set.insert("UnderlyingSettlMethod_t_999559080");
    Undly_68.add_attribute("PutCall", "536817935"); // 1
    Undly_68_set.insert("536817935");
    all_values.push_back(Undly_68_set);
    all_compo_names.insert("Undly_68_set");

    {
      xml_element UndAID_68{"UndAID"};
      multiset<string> UndAID_68_set;
      UndAID_68.add_attribute("AltID", "UnderlyingSecurityAltID_t_1550244832"); // 2
      UndAID_68_set.insert("UnderlyingSecurityAltID_t_1550244832");
      UndAID_68.add_attribute("AltIDSrc", "4"); // 2
      UndAID_68_set.insert("4");
      all_values.push_back(UndAID_68_set);
      all_compo_names.insert("UndAID_68_set");

      Undly_68.add_element(UndAID_68);
    }
    {
      xml_element Stip_104{"Stip"};
      multiset<string> Stip_104_set;
      Stip_104.add_attribute("Typ", "ORDRINCR"); // 2
      Stip_104_set.insert("ORDRINCR");
      Stip_104.add_attribute("Val", "UnderlyingStipValue_t_1645653867"); // 2
      Stip_104_set.insert("UnderlyingStipValue_t_1645653867");
      all_values.push_back(Stip_104_set);
      all_compo_names.insert("Stip_104_set");

      Undly_68.add_element(Stip_104);
    }
    {
      xml_element Pty_277{"Pty"};
      multiset<string> Pty_277_set;
      Pty_277.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1760201045"); // 2
      Pty_277_set.insert("UnderlyingInstrumentPartyID_t_1760201045");
      Pty_277.add_attribute("Src", "B"); // 2
      Pty_277_set.insert("B");
      Pty_277.add_attribute("R", "13"); // 2
      Pty_277_set.insert("13");
      all_values.push_back(Pty_277_set);
      all_compo_names.insert("Pty_277_set");

      {
        xml_element Sub_277{"Sub"};
        multiset<string> Sub_277_set;
        Sub_277.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1573314176"); // 3
        Sub_277_set.insert("UnderlyingInstrumentPartySubID_t_1573314176");
        Sub_277.add_attribute("Typ", "26"); // 3
        Sub_277_set.insert("26");
        all_values.push_back(Sub_277_set);
        all_compo_names.insert("Sub_277_set");

        Pty_277.add_element(Sub_277);
      }
      Undly_68.add_element(Pty_277);
    }
    elt.add_element(Undly_68);
  } // end Undly
  { // Undly
    xml_element Undly_69{"Undly"};
    multiset<string> Undly_69_set;
    Undly_69.add_attribute("Sym", "UnderlyingSymbol_t_1594951298"); // 1
    Undly_69_set.insert("UnderlyingSymbol_t_1594951298");
    Undly_69.add_attribute("Sfx", "WI"); // 1
    Undly_69_set.insert("WI");
    Undly_69.add_attribute("ID", "UnderlyingSecurityID_t_327935635"); // 1
    Undly_69_set.insert("UnderlyingSecurityID_t_327935635");
    Undly_69.add_attribute("Src", "7"); // 1
    Undly_69_set.insert("7");
    Undly_69.add_attribute("Prod", "13"); // 1
    Undly_69_set.insert("13");
    Undly_69.add_attribute("CFI", "UnderlyingCFICode_t_1572248496"); // 1
    Undly_69_set.insert("UnderlyingCFICode_t_1572248496");
    Undly_69.add_attribute("SecTyp", "BA"); // 1
    Undly_69_set.insert("BA");
    Undly_69.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1320459708"); // 1
    Undly_69_set.insert("UnderlyingSecuritySubType_t_1320459708");
    Undly_69.add_attribute("MMY", "1129006208"); // 1
    Undly_69_set.insert("1129006208");
    Undly_69.add_attribute("Mat", "UnderlyingMaturityDate_t_100214209"); // 1
    Undly_69_set.insert("UnderlyingMaturityDate_t_100214209");
    Undly_69.add_attribute("MatTm", "1003932064"); // 1
    Undly_69_set.insert("1003932064");
    Undly_69.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1476022879"); // 1
    Undly_69_set.insert("UnderlyingCouponPaymentDate_t_1476022879");
    Undly_69.add_attribute("RestrctTyp", "FR"); // 1
    Undly_69_set.insert("FR");
    Undly_69.add_attribute("Snrty", "SD"); // 1
    Undly_69_set.insert("SD");
    Undly_69.add_attribute("NotlPctOut", "14741975.390000"); // 1
    Undly_69_set.insert("14741975.390000");
    Undly_69.add_attribute("OrigNotlPctOut", "733062.760000"); // 1
    Undly_69_set.insert("733062.760000");
    Undly_69.add_attribute("AttchPnt", "1188914.020000"); // 1
    Undly_69_set.insert("1188914.020000");
    Undly_69.add_attribute("DetchPnt", "5927732.390000"); // 1
    Undly_69_set.insert("5927732.390000");
    Undly_69.add_attribute("Issued", "UnderlyingIssueDate_t_976836375"); // 1
    Undly_69_set.insert("UnderlyingIssueDate_t_976836375");
    Undly_69.add_attribute("RepoCollSecTyp", "1776323008"); // 1
    Undly_69_set.insert("1776323008");
    Undly_69.add_attribute("RepoTrm", "1592332319"); // 1
    Undly_69_set.insert("1592332319");
    Undly_69.add_attribute("RepoRt", "15136543.100000"); // 1
    Undly_69_set.insert("15136543.100000");
    Undly_69.add_attribute("Fctr", "11790841.920000"); // 1
    Undly_69_set.insert("11790841.920000");
    Undly_69.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2021858606"); // 1
    Undly_69_set.insert("UnderlyingCreditRating_t_2021858606");
    Undly_69.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_830700336"); // 1
    Undly_69_set.insert("UnderlyingInstrRegistry_t_830700336");
    Undly_69.add_attribute("Ctry", "677254411"); // 1
    Undly_69_set.insert("677254411");
    Undly_69.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1634576003"); // 1
    Undly_69_set.insert("UnderlyingStateOrProvinceOfIssue_t_1634576003");
    Undly_69.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_393316706"); // 1
    Undly_69_set.insert("UnderlyingLocaleOfIssue_t_393316706");
    Undly_69.add_attribute("Redeem", "UnderlyingRedemptionDate_t_673921672"); // 1
    Undly_69_set.insert("UnderlyingRedemptionDate_t_673921672");
    Undly_69.add_attribute("StrkPx", "10604065.310000"); // 1
    Undly_69_set.insert("10604065.310000");
    Undly_69.add_attribute("StrkCcy", "JPY"); // 1
    Undly_69_set.insert("JPY");
    Undly_69.add_attribute("OptA", "139052858"); // 1
    Undly_69_set.insert("139052858");
    Undly_69.add_attribute("Mult", "5453630.840000"); // 1
    Undly_69_set.insert("5453630.840000");
    Undly_69.add_attribute("MultTyp", "2"); // 1
    Undly_69_set.insert("2");
    Undly_69.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_69_set.insert("4");
    Undly_69.add_attribute("UOM", "MMbbl"); // 1
    Undly_69_set.insert("MMbbl");
    Undly_69.add_attribute("UOMQty", "10320009.520000"); // 1
    Undly_69_set.insert("10320009.520000");
    Undly_69.add_attribute("PxUOM", "Bcf"); // 1
    Undly_69_set.insert("Bcf");
    Undly_69.add_attribute("PxUOMQty", "10991341.400000"); // 1
    Undly_69_set.insert("10991341.400000");
    Undly_69.add_attribute("TmUnit", "S"); // 1
    Undly_69_set.insert("S");
    Undly_69.add_attribute("ExerStyle", "0"); // 1
    Undly_69_set.insert("0");
    Undly_69.add_attribute("CpnRt", "4276733.720000"); // 1
    Undly_69_set.insert("4276733.720000");
    Undly_69.add_attribute("Exch", "UnderlyingSecurityExchange_t_2073398409"); // 1
    Undly_69_set.insert("UnderlyingSecurityExchange_t_2073398409");
    Undly_69.add_attribute("Issr", "UnderlyingIssuer_t_919987510"); // 1
    Undly_69_set.insert("UnderlyingIssuer_t_919987510");
    Undly_69.add_attribute("EncUndIssrLen", "1901870911"); // 1
    Undly_69_set.insert("1901870911");
    Undly_69.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2146704686"); // 1
    Undly_69_set.insert("EncodedUnderlyingIssuer_t_2146704686");
    Undly_69.add_attribute("Desc", "UnderlyingSecurityDesc_t_1038878912"); // 1
    Undly_69_set.insert("UnderlyingSecurityDesc_t_1038878912");
    Undly_69.add_attribute("EncUndSecDescLen", "347160502"); // 1
    Undly_69_set.insert("347160502");
    Undly_69.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_976057413"); // 1
    Undly_69_set.insert("EncodedUnderlyingSecurityDesc_t_976057413");
    Undly_69.add_attribute("CPPgm", "UnderlyingCPProgram_t_667718273"); // 1
    Undly_69_set.insert("UnderlyingCPProgram_t_667718273");
    Undly_69.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1939492821"); // 1
    Undly_69_set.insert("UnderlyingCPRegType_t_1939492821");
    Undly_69.add_attribute("AllocPct", "3422280.750000"); // 1
    Undly_69_set.insert("3422280.750000");
    Undly_69.add_attribute("Ccy", "CHF"); // 1
    Undly_69_set.insert("CHF");
    Undly_69.add_attribute("Qty", "11729284.110000"); // 1
    Undly_69_set.insert("11729284.110000");
    Undly_69.add_attribute("SettlTyp", "5"); // 1
    Undly_69_set.insert("5");
    Undly_69.add_attribute("CashAmt", "UnderlyingCashAmount_t_1300960135"); // 1
    Undly_69_set.insert("UnderlyingCashAmount_t_1300960135");
    Undly_69.add_attribute("CashTyp", "DIFF"); // 1
    Undly_69_set.insert("DIFF");
    Undly_69.add_attribute("Px", "10504949.010000"); // 1
    Undly_69_set.insert("10504949.010000");
    Undly_69.add_attribute("DirtPx", "2138830.180000"); // 1
    Undly_69_set.insert("2138830.180000");
    Undly_69.add_attribute("EndPx", "17836725.660000"); // 1
    Undly_69_set.insert("17836725.660000");
    Undly_69.add_attribute("StartVal", "UnderlyingStartValue_t_1171884223"); // 1
    Undly_69_set.insert("UnderlyingStartValue_t_1171884223");
    Undly_69.add_attribute("CurVal", "UnderlyingCurrentValue_t_352935877"); // 1
    Undly_69_set.insert("UnderlyingCurrentValue_t_352935877");
    Undly_69.add_attribute("EndVal", "UnderlyingEndValue_t_181552002"); // 1
    Undly_69_set.insert("UnderlyingEndValue_t_181552002");
    Undly_69.add_attribute("AdjQty", "4994838.500000"); // 1
    Undly_69_set.insert("4994838.500000");
    Undly_69.add_attribute("FxRate", "10520737.060000"); // 1
    Undly_69_set.insert("10520737.060000");
    Undly_69.add_attribute("FxRateCalc", "M"); // 1
    Undly_69_set.insert("M");
    Undly_69.add_attribute("CapValu", "UnderlyingCapValue_t_1531484802"); // 1
    Undly_69_set.insert("UnderlyingCapValue_t_1531484802");
    Undly_69.add_attribute("SetMeth", "UnderlyingSettlMethod_t_924187596"); // 1
    Undly_69_set.insert("UnderlyingSettlMethod_t_924187596");
    Undly_69.add_attribute("PutCall", "1250814074"); // 1
    Undly_69_set.insert("1250814074");
    all_values.push_back(Undly_69_set);
    all_compo_names.insert("Undly_69_set");

    {
      xml_element UndAID_69{"UndAID"};
      multiset<string> UndAID_69_set;
      UndAID_69.add_attribute("AltID", "UnderlyingSecurityAltID_t_516216315"); // 2
      UndAID_69_set.insert("UnderlyingSecurityAltID_t_516216315");
      UndAID_69.add_attribute("AltIDSrc", "I"); // 2
      UndAID_69_set.insert("I");
      all_values.push_back(UndAID_69_set);
      all_compo_names.insert("UndAID_69_set");

      Undly_69.add_element(UndAID_69);
    }
    {
      xml_element Stip_105{"Stip"};
      multiset<string> Stip_105_set;
      Stip_105.add_attribute("Typ", "CPP"); // 2
      Stip_105_set.insert("CPP");
      Stip_105.add_attribute("Val", "UnderlyingStipValue_t_442131077"); // 2
      Stip_105_set.insert("UnderlyingStipValue_t_442131077");
      all_values.push_back(Stip_105_set);
      all_compo_names.insert("Stip_105_set");

      Undly_69.add_element(Stip_105);
    }
    {
      xml_element Pty_278{"Pty"};
      multiset<string> Pty_278_set;
      Pty_278.add_attribute("ID", "UnderlyingInstrumentPartyID_t_572737413"); // 2
      Pty_278_set.insert("UnderlyingInstrumentPartyID_t_572737413");
      Pty_278.add_attribute("Src", "B"); // 2
      Pty_278_set.insert("B");
      Pty_278.add_attribute("R", "73"); // 2
      Pty_278_set.insert("73");
      all_values.push_back(Pty_278_set);
      all_compo_names.insert("Pty_278_set");

      {
        xml_element Sub_278{"Sub"};
        multiset<string> Sub_278_set;
        Sub_278.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1611616325"); // 3
        Sub_278_set.insert("UnderlyingInstrumentPartySubID_t_1611616325");
        Sub_278.add_attribute("Typ", "33"); // 3
        Sub_278_set.insert("33");
        all_values.push_back(Sub_278_set);
        all_compo_names.insert("Sub_278_set");

        Pty_278.add_element(Sub_278);
      }
      Undly_69.add_element(Pty_278);
    }
    elt.add_element(Undly_69);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_18{"OrdQty"};
    multiset<string> OrdQty_18_set;
    OrdQty_18.add_attribute("Qty", "14174095.280000"); // 1
    OrdQty_18_set.insert("14174095.280000");
    OrdQty_18.add_attribute("Cash", "1318509.500000"); // 1
    OrdQty_18_set.insert("1318509.500000");
    OrdQty_18.add_attribute("Pct", "15720443.860000"); // 1
    OrdQty_18_set.insert("15720443.860000");
    OrdQty_18.add_attribute("RndDir", "2"); // 1
    OrdQty_18_set.insert("2");
    OrdQty_18.add_attribute("RndMod", "19786534.160000"); // 1
    OrdQty_18_set.insert("19786534.160000");
    all_values.push_back(OrdQty_18_set);
    all_compo_names.insert("OrdQty_18_set");

    elt.add_element(OrdQty_18);
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
