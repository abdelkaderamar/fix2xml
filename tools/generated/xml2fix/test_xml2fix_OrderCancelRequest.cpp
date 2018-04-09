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
  elt.add_attribute("OrigID", "OrigClOrdID_t_637813832"); // 0
  OrderCancelRequest_message_t_0.insert("OrigClOrdID_t_637813832");
  elt.add_attribute("OrdID", "OrderID_t_1215568127"); // 0
  OrderCancelRequest_message_t_0.insert("OrderID_t_1215568127");
  elt.add_attribute("ID", "ClOrdID_t_426825313"); // 0
  OrderCancelRequest_message_t_0.insert("ClOrdID_t_426825313");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1207408968"); // 0
  OrderCancelRequest_message_t_0.insert("SecondaryClOrdID_t_1207408968");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_2009320462"); // 0
  OrderCancelRequest_message_t_0.insert("ClOrdLinkID_t_2009320462");
  elt.add_attribute("ListID", "ListID_t_2017791913"); // 0
  OrderCancelRequest_message_t_0.insert("ListID_t_2017791913");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1588307202"); // 0
  OrderCancelRequest_message_t_0.insert("OrigOrdModTime_t_1588307202");
  elt.add_attribute("Acct", "Account_t_622484124"); // 0
  OrderCancelRequest_message_t_0.insert("Account_t_622484124");
  elt.add_attribute("AcctIDSrc", "4"); // 0
  OrderCancelRequest_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "2"); // 0
  OrderCancelRequest_message_t_0.insert("2");
  elt.add_attribute("Side", "3"); // 0
  OrderCancelRequest_message_t_0.insert("3");
  elt.add_attribute("TxnTm", "TransactTime_t_1411726967"); // 0
  OrderCancelRequest_message_t_0.insert("TransactTime_t_1411726967");
  elt.add_attribute("ComplianceID", "ComplianceID_t_829791718"); // 0
  OrderCancelRequest_message_t_0.insert("ComplianceID_t_829791718");
  elt.add_attribute("Txt", "Text_t_971370191"); // 0
  OrderCancelRequest_message_t_0.insert("Text_t_971370191");
  elt.add_attribute("EncTxtLen", "1527139473"); // 0
  OrderCancelRequest_message_t_0.insert("1527139473");
  elt.add_attribute("EncTxt", "EncodedText_t_145142655"); // 0
  OrderCancelRequest_message_t_0.insert("EncodedText_t_145142655");
  all_values.push_back(OrderCancelRequest_message_t_0);
  all_compo_names.insert("OrderCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_58{"Hdr"};
    multiset<string> Hdr_58_set;
    Hdr_58.add_attribute("SeqNum", "66384724"); // 1
    Hdr_58_set.insert("66384724");
    Hdr_58.add_attribute("SID", "SenderCompID_t_306332558"); // 1
    Hdr_58_set.insert("SenderCompID_t_306332558");
    Hdr_58.add_attribute("TID", "TargetCompID_t_480403284"); // 1
    Hdr_58_set.insert("TargetCompID_t_480403284");
    Hdr_58.add_attribute("OBID", "OnBehalfOfCompID_t_140133873"); // 1
    Hdr_58_set.insert("OnBehalfOfCompID_t_140133873");
    Hdr_58.add_attribute("D2ID", "DeliverToCompID_t_1591984646"); // 1
    Hdr_58_set.insert("DeliverToCompID_t_1591984646");
    Hdr_58.add_attribute("SSub", "SenderSubID_t_126920793"); // 1
    Hdr_58_set.insert("SenderSubID_t_126920793");
    Hdr_58.add_attribute("SLoc", "SenderLocationID_t_1422590115"); // 1
    Hdr_58_set.insert("SenderLocationID_t_1422590115");
    Hdr_58.add_attribute("TSub", "TargetSubID_t_1322815908"); // 1
    Hdr_58_set.insert("TargetSubID_t_1322815908");
    Hdr_58.add_attribute("TLoc", "TargetLocationID_t_623828172"); // 1
    Hdr_58_set.insert("TargetLocationID_t_623828172");
    Hdr_58.add_attribute("OBSub", "OnBehalfOfSubID_t_1528523184"); // 1
    Hdr_58_set.insert("OnBehalfOfSubID_t_1528523184");
    Hdr_58.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1520670252"); // 1
    Hdr_58_set.insert("OnBehalfOfLocationID_t_1520670252");
    Hdr_58.add_attribute("D2Sub", "DeliverToSubID_t_1455091254"); // 1
    Hdr_58_set.insert("DeliverToSubID_t_1455091254");
    Hdr_58.add_attribute("D2Loc", "DeliverToLocationID_t_991081019"); // 1
    Hdr_58_set.insert("DeliverToLocationID_t_991081019");
    Hdr_58.add_attribute("PosDup", "N"); // 1
    Hdr_58_set.insert("N");
    Hdr_58.add_attribute("PosRsnd", "Y"); // 1
    Hdr_58_set.insert("Y");
    Hdr_58.add_attribute("Snt", "SendingTime_t_1628894851"); // 1
    Hdr_58_set.insert("SendingTime_t_1628894851");
    Hdr_58.add_attribute("OrigSnt", "OrigSendingTime_t_761382129"); // 1
    Hdr_58_set.insert("OrigSendingTime_t_761382129");
    Hdr_58.add_attribute("MsgEncd", "MessageEncoding_t_1832729482"); // 1
    Hdr_58_set.insert("MessageEncoding_t_1832729482");
    all_values.push_back(Hdr_58_set);
    all_compo_names.insert("Hdr_58_set");

    {
      xml_element Hop_58{"Hop"};
      multiset<string> Hop_58_set;
      Hop_58.add_attribute("ID", "HopCompID_t_688820171"); // 2
      Hop_58_set.insert("HopCompID_t_688820171");
      Hop_58.add_attribute("Ref", "623218943"); // 2
      Hop_58_set.insert("623218943");
      Hop_58.add_attribute("Snt", "HopSendingTime_t_1703037747"); // 2
      Hop_58_set.insert("HopSendingTime_t_1703037747");
      all_values.push_back(Hop_58_set);
      all_compo_names.insert("Hop_58_set");

      Hdr_58.add_element(Hop_58);
    }
    elt.add_element(Hdr_58);
  } // end Hdr
  { // Pty
    xml_element Pty_243{"Pty"};
    multiset<string> Pty_243_set;
    Pty_243.add_attribute("ID", "PartyID_t_1245703067"); // 1
    Pty_243_set.insert("PartyID_t_1245703067");
    Pty_243.add_attribute("Src", "B"); // 1
    Pty_243_set.insert("B");
    Pty_243.add_attribute("R", "60"); // 1
    Pty_243_set.insert("60");
    all_values.push_back(Pty_243_set);
    all_compo_names.insert("Pty_243_set");

    {
      xml_element Sub_243{"Sub"};
      multiset<string> Sub_243_set;
      Sub_243.add_attribute("ID", "PartySubID_t_88153950"); // 2
      Sub_243_set.insert("PartySubID_t_88153950");
      Sub_243.add_attribute("Typ", "30"); // 2
      Sub_243_set.insert("30");
      all_values.push_back(Sub_243_set);
      all_compo_names.insert("Sub_243_set");

      Pty_243.add_element(Sub_243);
    }
    elt.add_element(Pty_243);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_46{"Instrmt"};
    multiset<string> Instrmt_46_set;
    Instrmt_46.add_attribute("Sym", "Symbol_t_201725055"); // 1
    Instrmt_46_set.insert("Symbol_t_201725055");
    Instrmt_46.add_attribute("Sfx", "WI"); // 1
    Instrmt_46_set.insert("WI");
    Instrmt_46.add_attribute("ID", "SecurityID_t_78899421"); // 1
    Instrmt_46_set.insert("SecurityID_t_78899421");
    Instrmt_46.add_attribute("Src", "4"); // 1
    Instrmt_46_set.insert("4");
    Instrmt_46.add_attribute("Prod", "12"); // 1
    Instrmt_46_set.insert("12");
    Instrmt_46.add_attribute("ProdCmplx", "ProductComplex_t_385231979"); // 1
    Instrmt_46_set.insert("ProductComplex_t_385231979");
    Instrmt_46.add_attribute("SecGrp", "SecurityGroup_t_827270995"); // 1
    Instrmt_46_set.insert("SecurityGroup_t_827270995");
    Instrmt_46.add_attribute("CFI", "CFICode_t_1266042738"); // 1
    Instrmt_46_set.insert("CFICode_t_1266042738");
    Instrmt_46.add_attribute("SecTyp", "CL"); // 1
    Instrmt_46_set.insert("CL");
    Instrmt_46.add_attribute("SubTyp", "SecuritySubType_t_954191789"); // 1
    Instrmt_46_set.insert("SecuritySubType_t_954191789");
    Instrmt_46.add_attribute("MMY", "541149205"); // 1
    Instrmt_46_set.insert("541149205");
    Instrmt_46.add_attribute("MatDt", "MaturityDate_t_1152548885"); // 1
    Instrmt_46_set.insert("MaturityDate_t_1152548885");
    Instrmt_46.add_attribute("MatTm", "1578019961"); // 1
    Instrmt_46_set.insert("1578019961");
    Instrmt_46.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2069672390"); // 1
    Instrmt_46_set.insert("SettleOnOpenFlag_t_2069672390");
    Instrmt_46.add_attribute("AsgnMeth", "525735489"); // 1
    Instrmt_46_set.insert("525735489");
    Instrmt_46.add_attribute("Status", "2"); // 1
    Instrmt_46_set.insert("2");
    Instrmt_46.add_attribute("CpnPmt", "CouponPaymentDate_t_913269761"); // 1
    Instrmt_46_set.insert("CouponPaymentDate_t_913269761");
    Instrmt_46.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_46_set.insert("XR");
    Instrmt_46.add_attribute("Snrty", "SR"); // 1
    Instrmt_46_set.insert("SR");
    Instrmt_46.add_attribute("NotlPctOut", "3946809.640000"); // 1
    Instrmt_46_set.insert("3946809.640000");
    Instrmt_46.add_attribute("OrigNotlPctOut", "8329316.210000"); // 1
    Instrmt_46_set.insert("8329316.210000");
    Instrmt_46.add_attribute("AttchPnt", "19767775.700000"); // 1
    Instrmt_46_set.insert("19767775.700000");
    Instrmt_46.add_attribute("DetchPnt", "10835011.360000"); // 1
    Instrmt_46_set.insert("10835011.360000");
    Instrmt_46.add_attribute("Issued", "IssueDate_t_1456150564"); // 1
    Instrmt_46_set.insert("IssueDate_t_1456150564");
    Instrmt_46.add_attribute("RepoCollSecTyp", "1532331669"); // 1
    Instrmt_46_set.insert("1532331669");
    Instrmt_46.add_attribute("RepoTrm", "1213144861"); // 1
    Instrmt_46_set.insert("1213144861");
    Instrmt_46.add_attribute("RepoRt", "5543699.840000"); // 1
    Instrmt_46_set.insert("5543699.840000");
    Instrmt_46.add_attribute("Fctr", "8198482.980000"); // 1
    Instrmt_46_set.insert("8198482.980000");
    Instrmt_46.add_attribute("CrdRtg", "CreditRating_t_585078199"); // 1
    Instrmt_46_set.insert("CreditRating_t_585078199");
    Instrmt_46.add_attribute("Rgstry", "InstrRegistry_t_642523934"); // 1
    Instrmt_46_set.insert("InstrRegistry_t_642523934");
    Instrmt_46.add_attribute("IssuCtry", "1519091894"); // 1
    Instrmt_46_set.insert("1519091894");
    Instrmt_46.add_attribute("StPrv", "StateOrProvinceOfIssue_t_786803254"); // 1
    Instrmt_46_set.insert("StateOrProvinceOfIssue_t_786803254");
    Instrmt_46.add_attribute("Lcl", "LocaleOfIssue_t_1702048075"); // 1
    Instrmt_46_set.insert("LocaleOfIssue_t_1702048075");
    Instrmt_46.add_attribute("Redeem", "RedemptionDate_t_1597991315"); // 1
    Instrmt_46_set.insert("RedemptionDate_t_1597991315");
    Instrmt_46.add_attribute("StrkPx", "11336709.650000"); // 1
    Instrmt_46_set.insert("11336709.650000");
    Instrmt_46.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_46_set.insert("JPY");
    Instrmt_46.add_attribute("StrkMult", "19609419.610000"); // 1
    Instrmt_46_set.insert("19609419.610000");
    Instrmt_46.add_attribute("StrkValu", "19465160.310000"); // 1
    Instrmt_46_set.insert("19465160.310000");
    Instrmt_46.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_46_set.insert("4");
    Instrmt_46.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_46_set.insert("3");
    Instrmt_46.add_attribute("StrkPxBndryPrcsn", "3401815.890000"); // 1
    Instrmt_46_set.insert("3401815.890000");
    Instrmt_46.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_46_set.insert("1");
    Instrmt_46.add_attribute("OptAt", "198186415"); // 1
    Instrmt_46_set.insert("198186415");
    Instrmt_46.add_attribute("Mult", "2623703.310000"); // 1
    Instrmt_46_set.insert("2623703.310000");
    Instrmt_46.add_attribute("MultTyp", "0"); // 1
    Instrmt_46_set.insert("0");
    Instrmt_46.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_46_set.insert("2");
    Instrmt_46.add_attribute("MinPxIncr", "11756400.920000"); // 1
    Instrmt_46_set.insert("11756400.920000");
    Instrmt_46.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1415306488"); // 1
    Instrmt_46_set.insert("MinPriceIncrementAmount_t_1415306488");
    Instrmt_46.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_46_set.insert("MMbbl");
    Instrmt_46.add_attribute("UOMQty", "15703210.560000"); // 1
    Instrmt_46_set.insert("15703210.560000");
    Instrmt_46.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_46_set.insert("Bbl");
    Instrmt_46.add_attribute("PxUOMQty", "10571559.920000"); // 1
    Instrmt_46_set.insert("10571559.920000");
    Instrmt_46.add_attribute("SettlMeth", "C"); // 1
    Instrmt_46_set.insert("C");
    Instrmt_46.add_attribute("ExerStyle", "0"); // 1
    Instrmt_46_set.insert("0");
    Instrmt_46.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_46_set.insert("1");
    Instrmt_46.add_attribute("OptPayAmt", "OptPayoutAmount_t_1719483406"); // 1
    Instrmt_46_set.insert("OptPayoutAmount_t_1719483406");
    Instrmt_46.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_46_set.insert("INT");
    Instrmt_46.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_46_set.insert("FUT");
    Instrmt_46.add_attribute("ListMeth", "1"); // 1
    Instrmt_46_set.insert("1");
    Instrmt_46.add_attribute("CapPx", "6063152.960000"); // 1
    Instrmt_46_set.insert("6063152.960000");
    Instrmt_46.add_attribute("FlrPx", "6334605.570000"); // 1
    Instrmt_46_set.insert("6334605.570000");
    Instrmt_46.add_attribute("PutCall", "1"); // 1
    Instrmt_46_set.insert("1");
    Instrmt_46.add_attribute("FlexInd", "false"); // 1
    Instrmt_46_set.insert("false");
    Instrmt_46.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_46_set.insert("true");
    Instrmt_46.add_attribute("TmUnit", "Min"); // 1
    Instrmt_46_set.insert("Min");
    Instrmt_46.add_attribute("CpnRt", "8413530.160000"); // 1
    Instrmt_46_set.insert("8413530.160000");
    Instrmt_46.add_attribute("Exch", "SecurityExchange_t_2067191518"); // 1
    Instrmt_46_set.insert("SecurityExchange_t_2067191518");
    Instrmt_46.add_attribute("PosLmt", "1891010490"); // 1
    Instrmt_46_set.insert("1891010490");
    Instrmt_46.add_attribute("NTPosLmt", "640385400"); // 1
    Instrmt_46_set.insert("640385400");
    Instrmt_46.add_attribute("Issr", "Issuer_t_1732664141"); // 1
    Instrmt_46_set.insert("Issuer_t_1732664141");
    Instrmt_46.add_attribute("EncIssrLen", "511176944"); // 1
    Instrmt_46_set.insert("511176944");
    Instrmt_46.add_attribute("EncIssr", "EncodedIssuer_t_980566989"); // 1
    Instrmt_46_set.insert("EncodedIssuer_t_980566989");
    Instrmt_46.add_attribute("Desc", "SecurityDesc_t_403202001"); // 1
    Instrmt_46_set.insert("SecurityDesc_t_403202001");
    Instrmt_46.add_attribute("EncSecDescLen", "709363359"); // 1
    Instrmt_46_set.insert("709363359");
    Instrmt_46.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1242937320"); // 1
    Instrmt_46_set.insert("EncodedSecurityDesc_t_1242937320");
    Instrmt_46.add_attribute("Pool", "Pool_t_1746958998"); // 1
    Instrmt_46_set.insert("Pool_t_1746958998");
    Instrmt_46.add_attribute("CSetMo", "1793177341"); // 1
    Instrmt_46_set.insert("1793177341");
    Instrmt_46.add_attribute("CPPgm", "1"); // 1
    Instrmt_46_set.insert("1");
    Instrmt_46.add_attribute("CPRegT", "CPRegType_t_1014781839"); // 1
    Instrmt_46_set.insert("CPRegType_t_1014781839");
    Instrmt_46.add_attribute("Dated", "DatedDate_t_873555763"); // 1
    Instrmt_46_set.insert("DatedDate_t_873555763");
    Instrmt_46.add_attribute("IntAcrl", "InterestAccrualDate_t_1841414820"); // 1
    Instrmt_46_set.insert("InterestAccrualDate_t_1841414820");
    all_values.push_back(Instrmt_46_set);
    all_compo_names.insert("Instrmt_46_set");

    {
      xml_element AID_49{"AID"};
      multiset<string> AID_49_set;
      AID_49.add_attribute("AltID", "SecurityAltID_t_1115536300"); // 2
      AID_49_set.insert("SecurityAltID_t_1115536300");
      AID_49.add_attribute("AltIDSrc", "6"); // 2
      AID_49_set.insert("6");
      all_values.push_back(AID_49_set);
      all_compo_names.insert("AID_49_set");

      Instrmt_46.add_element(AID_49);
    }
    {
      xml_element SecXML_49{"SecXML"};
      multiset<string> SecXML_49_set;
      SecXML_49.add_attribute("Schema", "SecurityXMLSchema_t_200269717"); // 2
      SecXML_49_set.insert("SecurityXMLSchema_t_200269717");
      all_values.push_back(SecXML_49_set);
      all_compo_names.insert("SecXML_49_set");

      Instrmt_46.add_element(SecXML_49);
    }
    {
      xml_element Evnt_49{"Evnt"};
      multiset<string> Evnt_49_set;
      Evnt_49.add_attribute("EventTyp", "18"); // 2
      Evnt_49_set.insert("18");
      Evnt_49.add_attribute("Dt", "EventDate_t_225232120"); // 2
      Evnt_49_set.insert("EventDate_t_225232120");
      Evnt_49.add_attribute("Tm", "EventTime_t_1919753123"); // 2
      Evnt_49_set.insert("EventTime_t_1919753123");
      Evnt_49.add_attribute("Px", "4887490.400000"); // 2
      Evnt_49_set.insert("4887490.400000");
      Evnt_49.add_attribute("Txt", "EventText_t_1487084432"); // 2
      Evnt_49_set.insert("EventText_t_1487084432");
      all_values.push_back(Evnt_49_set);
      all_compo_names.insert("Evnt_49_set");

      Instrmt_46.add_element(Evnt_49);
    }
    {
      xml_element Pty_244{"Pty"};
      multiset<string> Pty_244_set;
      Pty_244.add_attribute("ID", "InstrumentPartyID_t_2076831080"); // 2
      Pty_244_set.insert("InstrumentPartyID_t_2076831080");
      Pty_244.add_attribute("Src", "B"); // 2
      Pty_244_set.insert("B");
      Pty_244.add_attribute("R", "26"); // 2
      Pty_244_set.insert("26");
      all_values.push_back(Pty_244_set);
      all_compo_names.insert("Pty_244_set");

      {
        xml_element Sub_244{"Sub"};
        multiset<string> Sub_244_set;
        Sub_244.add_attribute("ID", "InstrumentPartySubID_t_873228643"); // 3
        Sub_244_set.insert("InstrumentPartySubID_t_873228643");
        Sub_244.add_attribute("Typ", "31"); // 3
        Sub_244_set.insert("31");
        all_values.push_back(Sub_244_set);
        all_compo_names.insert("Sub_244_set");

        Pty_244.add_element(Sub_244);
      }
      Instrmt_46.add_element(Pty_244);
    }
    {
      xml_element CmplxEvnt_46{"CmplxEvnt"};
      multiset<string> CmplxEvnt_46_set;
      CmplxEvnt_46.add_attribute("Typ", "5"); // 2
      CmplxEvnt_46_set.insert("5");
      CmplxEvnt_46.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_803297172"); // 2
      CmplxEvnt_46_set.insert("ComplexOptPayoutAmount_t_803297172");
      CmplxEvnt_46.add_attribute("Px", "20972970.760000"); // 2
      CmplxEvnt_46_set.insert("20972970.760000");
      CmplxEvnt_46.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_46_set.insert("5");
      CmplxEvnt_46.add_attribute("PxBndryPrcsn", "5468240.140000"); // 2
      CmplxEvnt_46_set.insert("5468240.140000");
      CmplxEvnt_46.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_46_set.insert("3");
      CmplxEvnt_46.add_attribute("Cond", "1"); // 2
      CmplxEvnt_46_set.insert("1");
      all_values.push_back(CmplxEvnt_46_set);
      all_compo_names.insert("CmplxEvnt_46_set");

      {
        xml_element EvntDts_46{"EvntDts"};
        multiset<string> EvntDts_46_set;
        EvntDts_46.add_attribute("StartDt", "ComplexEventStartDate_t_1058000958"); // 3
        EvntDts_46_set.insert("ComplexEventStartDate_t_1058000958");
        EvntDts_46.add_attribute("EndDt", "ComplexEventEndDate_t_1570765817"); // 3
        EvntDts_46_set.insert("ComplexEventEndDate_t_1570765817");
        all_values.push_back(EvntDts_46_set);
        all_compo_names.insert("EvntDts_46_set");

        {
          xml_element EvntTms_46{"EvntTms"};
          multiset<string> EvntTms_46_set;
          EvntTms_46.add_attribute("StartTm", "2112603579"); // 4
          EvntTms_46_set.insert("2112603579");
          EvntTms_46.add_attribute("EndTm", "1767364317"); // 4
          EvntTms_46_set.insert("1767364317");
          all_values.push_back(EvntTms_46_set);
          all_compo_names.insert("EvntTms_46_set");

          EvntDts_46.add_element(EvntTms_46);
        }
        CmplxEvnt_46.add_element(EvntDts_46);
      }
      Instrmt_46.add_element(CmplxEvnt_46);
    }
    elt.add_element(Instrmt_46);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_14{"FinDetls"};
    multiset<string> FinDetls_14_set;
    FinDetls_14.add_attribute("AgmtDesc", "AgreementDesc_t_666219489"); // 1
    FinDetls_14_set.insert("AgreementDesc_t_666219489");
    FinDetls_14.add_attribute("AgmtID", "AgreementID_t_1712078930"); // 1
    FinDetls_14_set.insert("AgreementID_t_1712078930");
    FinDetls_14.add_attribute("AgmtDt", "AgreementDate_t_1413058010"); // 1
    FinDetls_14_set.insert("AgreementDate_t_1413058010");
    FinDetls_14.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_14_set.insert("CHF");
    FinDetls_14.add_attribute("TrmTyp", "2"); // 1
    FinDetls_14_set.insert("2");
    FinDetls_14.add_attribute("StartDt", "StartDate_t_631244426"); // 1
    FinDetls_14_set.insert("StartDate_t_631244426");
    FinDetls_14.add_attribute("EndDt", "EndDate_t_1694913421"); // 1
    FinDetls_14_set.insert("EndDate_t_1694913421");
    FinDetls_14.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_14_set.insert("0");
    FinDetls_14.add_attribute("MgnRatio", "8315141.430000"); // 1
    FinDetls_14_set.insert("8315141.430000");
    all_values.push_back(FinDetls_14_set);
    all_compo_names.insert("FinDetls_14_set");

    elt.add_element(FinDetls_14);
  } // end FinDetls
  { // Undly
    xml_element Undly_61{"Undly"};
    multiset<string> Undly_61_set;
    Undly_61.add_attribute("Sym", "UnderlyingSymbol_t_147590353"); // 1
    Undly_61_set.insert("UnderlyingSymbol_t_147590353");
    Undly_61.add_attribute("Sfx", "CD"); // 1
    Undly_61_set.insert("CD");
    Undly_61.add_attribute("ID", "UnderlyingSecurityID_t_561136492"); // 1
    Undly_61_set.insert("UnderlyingSecurityID_t_561136492");
    Undly_61.add_attribute("Src", "8"); // 1
    Undly_61_set.insert("8");
    Undly_61.add_attribute("Prod", "7"); // 1
    Undly_61_set.insert("7");
    Undly_61.add_attribute("CFI", "UnderlyingCFICode_t_1656200829"); // 1
    Undly_61_set.insert("UnderlyingCFICode_t_1656200829");
    Undly_61.add_attribute("SecTyp", "OPT"); // 1
    Undly_61_set.insert("OPT");
    Undly_61.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1406359693"); // 1
    Undly_61_set.insert("UnderlyingSecuritySubType_t_1406359693");
    Undly_61.add_attribute("MMY", "764661241"); // 1
    Undly_61_set.insert("764661241");
    Undly_61.add_attribute("Mat", "UnderlyingMaturityDate_t_1664765692"); // 1
    Undly_61_set.insert("UnderlyingMaturityDate_t_1664765692");
    Undly_61.add_attribute("MatTm", "62173218"); // 1
    Undly_61_set.insert("62173218");
    Undly_61.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_714474669"); // 1
    Undly_61_set.insert("UnderlyingCouponPaymentDate_t_714474669");
    Undly_61.add_attribute("RestrctTyp", "MR"); // 1
    Undly_61_set.insert("MR");
    Undly_61.add_attribute("Snrty", "SR"); // 1
    Undly_61_set.insert("SR");
    Undly_61.add_attribute("NotlPctOut", "13046734.980000"); // 1
    Undly_61_set.insert("13046734.980000");
    Undly_61.add_attribute("OrigNotlPctOut", "12034210.590000"); // 1
    Undly_61_set.insert("12034210.590000");
    Undly_61.add_attribute("AttchPnt", "16669981.910000"); // 1
    Undly_61_set.insert("16669981.910000");
    Undly_61.add_attribute("DetchPnt", "7279556.670000"); // 1
    Undly_61_set.insert("7279556.670000");
    Undly_61.add_attribute("Issued", "UnderlyingIssueDate_t_1168540990"); // 1
    Undly_61_set.insert("UnderlyingIssueDate_t_1168540990");
    Undly_61.add_attribute("RepoCollSecTyp", "1286878860"); // 1
    Undly_61_set.insert("1286878860");
    Undly_61.add_attribute("RepoTrm", "1394175157"); // 1
    Undly_61_set.insert("1394175157");
    Undly_61.add_attribute("RepoRt", "7331362.720000"); // 1
    Undly_61_set.insert("7331362.720000");
    Undly_61.add_attribute("Fctr", "5524532.230000"); // 1
    Undly_61_set.insert("5524532.230000");
    Undly_61.add_attribute("CrdRtg", "UnderlyingCreditRating_t_184004762"); // 1
    Undly_61_set.insert("UnderlyingCreditRating_t_184004762");
    Undly_61.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1312513393"); // 1
    Undly_61_set.insert("UnderlyingInstrRegistry_t_1312513393");
    Undly_61.add_attribute("Ctry", "691583348"); // 1
    Undly_61_set.insert("691583348");
    Undly_61.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_815249188"); // 1
    Undly_61_set.insert("UnderlyingStateOrProvinceOfIssue_t_815249188");
    Undly_61.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_859943167"); // 1
    Undly_61_set.insert("UnderlyingLocaleOfIssue_t_859943167");
    Undly_61.add_attribute("Redeem", "UnderlyingRedemptionDate_t_613941581"); // 1
    Undly_61_set.insert("UnderlyingRedemptionDate_t_613941581");
    Undly_61.add_attribute("StrkPx", "16467633.310000"); // 1
    Undly_61_set.insert("16467633.310000");
    Undly_61.add_attribute("StrkCcy", "USD"); // 1
    Undly_61_set.insert("USD");
    Undly_61.add_attribute("OptA", "103063301"); // 1
    Undly_61_set.insert("103063301");
    Undly_61.add_attribute("Mult", "14934671.110000"); // 1
    Undly_61_set.insert("14934671.110000");
    Undly_61.add_attribute("MultTyp", "1"); // 1
    Undly_61_set.insert("1");
    Undly_61.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_61_set.insert("1");
    Undly_61.add_attribute("UOM", "tn"); // 1
    Undly_61_set.insert("tn");
    Undly_61.add_attribute("UOMQty", "18564591.970000"); // 1
    Undly_61_set.insert("18564591.970000");
    Undly_61.add_attribute("PxUOM", "Alw"); // 1
    Undly_61_set.insert("Alw");
    Undly_61.add_attribute("PxUOMQty", "17668455.330000"); // 1
    Undly_61_set.insert("17668455.330000");
    Undly_61.add_attribute("TmUnit", "Yr"); // 1
    Undly_61_set.insert("Yr");
    Undly_61.add_attribute("ExerStyle", "1"); // 1
    Undly_61_set.insert("1");
    Undly_61.add_attribute("CpnRt", "3338365.550000"); // 1
    Undly_61_set.insert("3338365.550000");
    Undly_61.add_attribute("Exch", "UnderlyingSecurityExchange_t_867760723"); // 1
    Undly_61_set.insert("UnderlyingSecurityExchange_t_867760723");
    Undly_61.add_attribute("Issr", "UnderlyingIssuer_t_566240847"); // 1
    Undly_61_set.insert("UnderlyingIssuer_t_566240847");
    Undly_61.add_attribute("EncUndIssrLen", "1638510053"); // 1
    Undly_61_set.insert("1638510053");
    Undly_61.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2071181782"); // 1
    Undly_61_set.insert("EncodedUnderlyingIssuer_t_2071181782");
    Undly_61.add_attribute("Desc", "UnderlyingSecurityDesc_t_85755390"); // 1
    Undly_61_set.insert("UnderlyingSecurityDesc_t_85755390");
    Undly_61.add_attribute("EncUndSecDescLen", "218982072"); // 1
    Undly_61_set.insert("218982072");
    Undly_61.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1092239124"); // 1
    Undly_61_set.insert("EncodedUnderlyingSecurityDesc_t_1092239124");
    Undly_61.add_attribute("CPPgm", "UnderlyingCPProgram_t_1372634251"); // 1
    Undly_61_set.insert("UnderlyingCPProgram_t_1372634251");
    Undly_61.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1613157229"); // 1
    Undly_61_set.insert("UnderlyingCPRegType_t_1613157229");
    Undly_61.add_attribute("AllocPct", "18253753.970000"); // 1
    Undly_61_set.insert("18253753.970000");
    Undly_61.add_attribute("Ccy", "JPY"); // 1
    Undly_61_set.insert("JPY");
    Undly_61.add_attribute("Qty", "9904051.420000"); // 1
    Undly_61_set.insert("9904051.420000");
    Undly_61.add_attribute("SettlTyp", "5"); // 1
    Undly_61_set.insert("5");
    Undly_61.add_attribute("CashAmt", "UnderlyingCashAmount_t_464927532"); // 1
    Undly_61_set.insert("UnderlyingCashAmount_t_464927532");
    Undly_61.add_attribute("CashTyp", "DIFF"); // 1
    Undly_61_set.insert("DIFF");
    Undly_61.add_attribute("Px", "10831287.550000"); // 1
    Undly_61_set.insert("10831287.550000");
    Undly_61.add_attribute("DirtPx", "21116908.640000"); // 1
    Undly_61_set.insert("21116908.640000");
    Undly_61.add_attribute("EndPx", "6351952.800000"); // 1
    Undly_61_set.insert("6351952.800000");
    Undly_61.add_attribute("StartVal", "UnderlyingStartValue_t_1844660689"); // 1
    Undly_61_set.insert("UnderlyingStartValue_t_1844660689");
    Undly_61.add_attribute("CurVal", "UnderlyingCurrentValue_t_67270517"); // 1
    Undly_61_set.insert("UnderlyingCurrentValue_t_67270517");
    Undly_61.add_attribute("EndVal", "UnderlyingEndValue_t_2128662392"); // 1
    Undly_61_set.insert("UnderlyingEndValue_t_2128662392");
    Undly_61.add_attribute("AdjQty", "20933837.600000"); // 1
    Undly_61_set.insert("20933837.600000");
    Undly_61.add_attribute("FxRate", "7034648.690000"); // 1
    Undly_61_set.insert("7034648.690000");
    Undly_61.add_attribute("FxRateCalc", "M"); // 1
    Undly_61_set.insert("M");
    Undly_61.add_attribute("CapValu", "UnderlyingCapValue_t_1802359310"); // 1
    Undly_61_set.insert("UnderlyingCapValue_t_1802359310");
    Undly_61.add_attribute("SetMeth", "UnderlyingSettlMethod_t_598535266"); // 1
    Undly_61_set.insert("UnderlyingSettlMethod_t_598535266");
    Undly_61.add_attribute("PutCall", "602724922"); // 1
    Undly_61_set.insert("602724922");
    all_values.push_back(Undly_61_set);
    all_compo_names.insert("Undly_61_set");

    {
      xml_element UndAID_61{"UndAID"};
      multiset<string> UndAID_61_set;
      UndAID_61.add_attribute("AltID", "UnderlyingSecurityAltID_t_1028616904"); // 2
      UndAID_61_set.insert("UnderlyingSecurityAltID_t_1028616904");
      UndAID_61.add_attribute("AltIDSrc", "A"); // 2
      UndAID_61_set.insert("A");
      all_values.push_back(UndAID_61_set);
      all_compo_names.insert("UndAID_61_set");

      Undly_61.add_element(UndAID_61);
    }
    {
      xml_element Stip_98{"Stip"};
      multiset<string> Stip_98_set;
      Stip_98.add_attribute("Typ", "PRICEFREQ"); // 2
      Stip_98_set.insert("PRICEFREQ");
      Stip_98.add_attribute("Val", "UnderlyingStipValue_t_1896377627"); // 2
      Stip_98_set.insert("UnderlyingStipValue_t_1896377627");
      all_values.push_back(Stip_98_set);
      all_compo_names.insert("Stip_98_set");

      Undly_61.add_element(Stip_98);
    }
    {
      xml_element Pty_245{"Pty"};
      multiset<string> Pty_245_set;
      Pty_245.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1122019728"); // 2
      Pty_245_set.insert("UnderlyingInstrumentPartyID_t_1122019728");
      Pty_245.add_attribute("Src", "7"); // 2
      Pty_245_set.insert("7");
      Pty_245.add_attribute("R", "52"); // 2
      Pty_245_set.insert("52");
      all_values.push_back(Pty_245_set);
      all_compo_names.insert("Pty_245_set");

      {
        xml_element Sub_245{"Sub"};
        multiset<string> Sub_245_set;
        Sub_245.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1207775119"); // 3
        Sub_245_set.insert("UnderlyingInstrumentPartySubID_t_1207775119");
        Sub_245.add_attribute("Typ", "31"); // 3
        Sub_245_set.insert("31");
        all_values.push_back(Sub_245_set);
        all_compo_names.insert("Sub_245_set");

        Pty_245.add_element(Sub_245);
      }
      Undly_61.add_element(Pty_245);
    }
    elt.add_element(Undly_61);
  } // end Undly
  { // Undly
    xml_element Undly_62{"Undly"};
    multiset<string> Undly_62_set;
    Undly_62.add_attribute("Sym", "UnderlyingSymbol_t_764831237"); // 1
    Undly_62_set.insert("UnderlyingSymbol_t_764831237");
    Undly_62.add_attribute("Sfx", "CD"); // 1
    Undly_62_set.insert("CD");
    Undly_62.add_attribute("ID", "UnderlyingSecurityID_t_112243536"); // 1
    Undly_62_set.insert("UnderlyingSecurityID_t_112243536");
    Undly_62.add_attribute("Src", "3"); // 1
    Undly_62_set.insert("3");
    Undly_62.add_attribute("Prod", "5"); // 1
    Undly_62_set.insert("5");
    Undly_62.add_attribute("CFI", "UnderlyingCFICode_t_1909405528"); // 1
    Undly_62_set.insert("UnderlyingCFICode_t_1909405528");
    Undly_62.add_attribute("SecTyp", "TBILL"); // 1
    Undly_62_set.insert("TBILL");
    Undly_62.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_679716722"); // 1
    Undly_62_set.insert("UnderlyingSecuritySubType_t_679716722");
    Undly_62.add_attribute("MMY", "226849412"); // 1
    Undly_62_set.insert("226849412");
    Undly_62.add_attribute("Mat", "UnderlyingMaturityDate_t_1135992790"); // 1
    Undly_62_set.insert("UnderlyingMaturityDate_t_1135992790");
    Undly_62.add_attribute("MatTm", "1762845478"); // 1
    Undly_62_set.insert("1762845478");
    Undly_62.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_191056628"); // 1
    Undly_62_set.insert("UnderlyingCouponPaymentDate_t_191056628");
    Undly_62.add_attribute("RestrctTyp", "XR"); // 1
    Undly_62_set.insert("XR");
    Undly_62.add_attribute("Snrty", "SD"); // 1
    Undly_62_set.insert("SD");
    Undly_62.add_attribute("NotlPctOut", "2583271.460000"); // 1
    Undly_62_set.insert("2583271.460000");
    Undly_62.add_attribute("OrigNotlPctOut", "17523668.150000"); // 1
    Undly_62_set.insert("17523668.150000");
    Undly_62.add_attribute("AttchPnt", "14059226.320000"); // 1
    Undly_62_set.insert("14059226.320000");
    Undly_62.add_attribute("DetchPnt", "9617920.150000"); // 1
    Undly_62_set.insert("9617920.150000");
    Undly_62.add_attribute("Issued", "UnderlyingIssueDate_t_588246203"); // 1
    Undly_62_set.insert("UnderlyingIssueDate_t_588246203");
    Undly_62.add_attribute("RepoCollSecTyp", "1060798294"); // 1
    Undly_62_set.insert("1060798294");
    Undly_62.add_attribute("RepoTrm", "1560327281"); // 1
    Undly_62_set.insert("1560327281");
    Undly_62.add_attribute("RepoRt", "11909711.250000"); // 1
    Undly_62_set.insert("11909711.250000");
    Undly_62.add_attribute("Fctr", "20894151.980000"); // 1
    Undly_62_set.insert("20894151.980000");
    Undly_62.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2116106162"); // 1
    Undly_62_set.insert("UnderlyingCreditRating_t_2116106162");
    Undly_62.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2127532602"); // 1
    Undly_62_set.insert("UnderlyingInstrRegistry_t_2127532602");
    Undly_62.add_attribute("Ctry", "1838309177"); // 1
    Undly_62_set.insert("1838309177");
    Undly_62.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1090642242"); // 1
    Undly_62_set.insert("UnderlyingStateOrProvinceOfIssue_t_1090642242");
    Undly_62.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_407636836"); // 1
    Undly_62_set.insert("UnderlyingLocaleOfIssue_t_407636836");
    Undly_62.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1510901290"); // 1
    Undly_62_set.insert("UnderlyingRedemptionDate_t_1510901290");
    Undly_62.add_attribute("StrkPx", "1509337.130000"); // 1
    Undly_62_set.insert("1509337.130000");
    Undly_62.add_attribute("StrkCcy", "EUR"); // 1
    Undly_62_set.insert("EUR");
    Undly_62.add_attribute("OptA", "583859435"); // 1
    Undly_62_set.insert("583859435");
    Undly_62.add_attribute("Mult", "11664503.270000"); // 1
    Undly_62_set.insert("11664503.270000");
    Undly_62.add_attribute("MultTyp", "1"); // 1
    Undly_62_set.insert("1");
    Undly_62.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_62_set.insert("3");
    Undly_62.add_attribute("UOM", "USD"); // 1
    Undly_62_set.insert("USD");
    Undly_62.add_attribute("UOMQty", "20040999.950000"); // 1
    Undly_62_set.insert("20040999.950000");
    Undly_62.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_62_set.insert("oz_tr");
    Undly_62.add_attribute("PxUOMQty", "11552216.190000"); // 1
    Undly_62_set.insert("11552216.190000");
    Undly_62.add_attribute("TmUnit", "H"); // 1
    Undly_62_set.insert("H");
    Undly_62.add_attribute("ExerStyle", "1"); // 1
    Undly_62_set.insert("1");
    Undly_62.add_attribute("CpnRt", "13462782.480000"); // 1
    Undly_62_set.insert("13462782.480000");
    Undly_62.add_attribute("Exch", "UnderlyingSecurityExchange_t_616313560"); // 1
    Undly_62_set.insert("UnderlyingSecurityExchange_t_616313560");
    Undly_62.add_attribute("Issr", "UnderlyingIssuer_t_402006407"); // 1
    Undly_62_set.insert("UnderlyingIssuer_t_402006407");
    Undly_62.add_attribute("EncUndIssrLen", "1604605394"); // 1
    Undly_62_set.insert("1604605394");
    Undly_62.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_221196727"); // 1
    Undly_62_set.insert("EncodedUnderlyingIssuer_t_221196727");
    Undly_62.add_attribute("Desc", "UnderlyingSecurityDesc_t_1807929039"); // 1
    Undly_62_set.insert("UnderlyingSecurityDesc_t_1807929039");
    Undly_62.add_attribute("EncUndSecDescLen", "418913761"); // 1
    Undly_62_set.insert("418913761");
    Undly_62.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_809442931"); // 1
    Undly_62_set.insert("EncodedUnderlyingSecurityDesc_t_809442931");
    Undly_62.add_attribute("CPPgm", "UnderlyingCPProgram_t_721243685"); // 1
    Undly_62_set.insert("UnderlyingCPProgram_t_721243685");
    Undly_62.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1979241042"); // 1
    Undly_62_set.insert("UnderlyingCPRegType_t_1979241042");
    Undly_62.add_attribute("AllocPct", "20004140.560000"); // 1
    Undly_62_set.insert("20004140.560000");
    Undly_62.add_attribute("Ccy", "USD"); // 1
    Undly_62_set.insert("USD");
    Undly_62.add_attribute("Qty", "19804630.110000"); // 1
    Undly_62_set.insert("19804630.110000");
    Undly_62.add_attribute("SettlTyp", "5"); // 1
    Undly_62_set.insert("5");
    Undly_62.add_attribute("CashAmt", "UnderlyingCashAmount_t_891022150"); // 1
    Undly_62_set.insert("UnderlyingCashAmount_t_891022150");
    Undly_62.add_attribute("CashTyp", "DIFF"); // 1
    Undly_62_set.insert("DIFF");
    Undly_62.add_attribute("Px", "18649020.540000"); // 1
    Undly_62_set.insert("18649020.540000");
    Undly_62.add_attribute("DirtPx", "10419558.640000"); // 1
    Undly_62_set.insert("10419558.640000");
    Undly_62.add_attribute("EndPx", "12948229.900000"); // 1
    Undly_62_set.insert("12948229.900000");
    Undly_62.add_attribute("StartVal", "UnderlyingStartValue_t_1993150934"); // 1
    Undly_62_set.insert("UnderlyingStartValue_t_1993150934");
    Undly_62.add_attribute("CurVal", "UnderlyingCurrentValue_t_1625815299"); // 1
    Undly_62_set.insert("UnderlyingCurrentValue_t_1625815299");
    Undly_62.add_attribute("EndVal", "UnderlyingEndValue_t_313789669"); // 1
    Undly_62_set.insert("UnderlyingEndValue_t_313789669");
    Undly_62.add_attribute("AdjQty", "4166391.520000"); // 1
    Undly_62_set.insert("4166391.520000");
    Undly_62.add_attribute("FxRate", "2727206.350000"); // 1
    Undly_62_set.insert("2727206.350000");
    Undly_62.add_attribute("FxRateCalc", "M"); // 1
    Undly_62_set.insert("M");
    Undly_62.add_attribute("CapValu", "UnderlyingCapValue_t_273255499"); // 1
    Undly_62_set.insert("UnderlyingCapValue_t_273255499");
    Undly_62.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1746826341"); // 1
    Undly_62_set.insert("UnderlyingSettlMethod_t_1746826341");
    Undly_62.add_attribute("PutCall", "249899848"); // 1
    Undly_62_set.insert("249899848");
    all_values.push_back(Undly_62_set);
    all_compo_names.insert("Undly_62_set");

    {
      xml_element UndAID_62{"UndAID"};
      multiset<string> UndAID_62_set;
      UndAID_62.add_attribute("AltID", "UnderlyingSecurityAltID_t_1265864636"); // 2
      UndAID_62_set.insert("UnderlyingSecurityAltID_t_1265864636");
      UndAID_62.add_attribute("AltIDSrc", "L"); // 2
      UndAID_62_set.insert("L");
      all_values.push_back(UndAID_62_set);
      all_compo_names.insert("UndAID_62_set");

      Undly_62.add_element(UndAID_62);
    }
    {
      xml_element Stip_99{"Stip"};
      multiset<string> Stip_99_set;
      Stip_99.add_attribute("Typ", "ISSUER"); // 2
      Stip_99_set.insert("ISSUER");
      Stip_99.add_attribute("Val", "UnderlyingStipValue_t_1882178197"); // 2
      Stip_99_set.insert("UnderlyingStipValue_t_1882178197");
      all_values.push_back(Stip_99_set);
      all_compo_names.insert("Stip_99_set");

      Undly_62.add_element(Stip_99);
    }
    {
      xml_element Pty_246{"Pty"};
      multiset<string> Pty_246_set;
      Pty_246.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1090816636"); // 2
      Pty_246_set.insert("UnderlyingInstrumentPartyID_t_1090816636");
      Pty_246.add_attribute("Src", "H"); // 2
      Pty_246_set.insert("H");
      Pty_246.add_attribute("R", "59"); // 2
      Pty_246_set.insert("59");
      all_values.push_back(Pty_246_set);
      all_compo_names.insert("Pty_246_set");

      {
        xml_element Sub_246{"Sub"};
        multiset<string> Sub_246_set;
        Sub_246.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_751262028"); // 3
        Sub_246_set.insert("UnderlyingInstrumentPartySubID_t_751262028");
        Sub_246.add_attribute("Typ", "22"); // 3
        Sub_246_set.insert("22");
        all_values.push_back(Sub_246_set);
        all_compo_names.insert("Sub_246_set");

        Pty_246.add_element(Sub_246);
      }
      Undly_62.add_element(Pty_246);
    }
    elt.add_element(Undly_62);
  } // end Undly
  { // Undly
    xml_element Undly_63{"Undly"};
    multiset<string> Undly_63_set;
    Undly_63.add_attribute("Sym", "UnderlyingSymbol_t_765334207"); // 1
    Undly_63_set.insert("UnderlyingSymbol_t_765334207");
    Undly_63.add_attribute("Sfx", "WI"); // 1
    Undly_63_set.insert("WI");
    Undly_63.add_attribute("ID", "UnderlyingSecurityID_t_1303970997"); // 1
    Undly_63_set.insert("UnderlyingSecurityID_t_1303970997");
    Undly_63.add_attribute("Src", "3"); // 1
    Undly_63_set.insert("3");
    Undly_63.add_attribute("Prod", "9"); // 1
    Undly_63_set.insert("9");
    Undly_63.add_attribute("CFI", "UnderlyingCFICode_t_1104350905"); // 1
    Undly_63_set.insert("UnderlyingCFICode_t_1104350905");
    Undly_63.add_attribute("SecTyp", "RVLV"); // 1
    Undly_63_set.insert("RVLV");
    Undly_63.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_342198065"); // 1
    Undly_63_set.insert("UnderlyingSecuritySubType_t_342198065");
    Undly_63.add_attribute("MMY", "1995373055"); // 1
    Undly_63_set.insert("1995373055");
    Undly_63.add_attribute("Mat", "UnderlyingMaturityDate_t_691860178"); // 1
    Undly_63_set.insert("UnderlyingMaturityDate_t_691860178");
    Undly_63.add_attribute("MatTm", "59616472"); // 1
    Undly_63_set.insert("59616472");
    Undly_63.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_889845271"); // 1
    Undly_63_set.insert("UnderlyingCouponPaymentDate_t_889845271");
    Undly_63.add_attribute("RestrctTyp", "MR"); // 1
    Undly_63_set.insert("MR");
    Undly_63.add_attribute("Snrty", "SD"); // 1
    Undly_63_set.insert("SD");
    Undly_63.add_attribute("NotlPctOut", "3681769.230000"); // 1
    Undly_63_set.insert("3681769.230000");
    Undly_63.add_attribute("OrigNotlPctOut", "1529891.900000"); // 1
    Undly_63_set.insert("1529891.900000");
    Undly_63.add_attribute("AttchPnt", "3219229.100000"); // 1
    Undly_63_set.insert("3219229.100000");
    Undly_63.add_attribute("DetchPnt", "6408975.580000"); // 1
    Undly_63_set.insert("6408975.580000");
    Undly_63.add_attribute("Issued", "UnderlyingIssueDate_t_1395151067"); // 1
    Undly_63_set.insert("UnderlyingIssueDate_t_1395151067");
    Undly_63.add_attribute("RepoCollSecTyp", "595178409"); // 1
    Undly_63_set.insert("595178409");
    Undly_63.add_attribute("RepoTrm", "240240251"); // 1
    Undly_63_set.insert("240240251");
    Undly_63.add_attribute("RepoRt", "16450509.150000"); // 1
    Undly_63_set.insert("16450509.150000");
    Undly_63.add_attribute("Fctr", "18610430.450000"); // 1
    Undly_63_set.insert("18610430.450000");
    Undly_63.add_attribute("CrdRtg", "UnderlyingCreditRating_t_929050480"); // 1
    Undly_63_set.insert("UnderlyingCreditRating_t_929050480");
    Undly_63.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1093745363"); // 1
    Undly_63_set.insert("UnderlyingInstrRegistry_t_1093745363");
    Undly_63.add_attribute("Ctry", "1595737594"); // 1
    Undly_63_set.insert("1595737594");
    Undly_63.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2019867116"); // 1
    Undly_63_set.insert("UnderlyingStateOrProvinceOfIssue_t_2019867116");
    Undly_63.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2147045205"); // 1
    Undly_63_set.insert("UnderlyingLocaleOfIssue_t_2147045205");
    Undly_63.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1551628871"); // 1
    Undly_63_set.insert("UnderlyingRedemptionDate_t_1551628871");
    Undly_63.add_attribute("StrkPx", "6236454.960000"); // 1
    Undly_63_set.insert("6236454.960000");
    Undly_63.add_attribute("StrkCcy", "JPY"); // 1
    Undly_63_set.insert("JPY");
    Undly_63.add_attribute("OptA", "2096151210"); // 1
    Undly_63_set.insert("2096151210");
    Undly_63.add_attribute("Mult", "6282625.090000"); // 1
    Undly_63_set.insert("6282625.090000");
    Undly_63.add_attribute("MultTyp", "2"); // 1
    Undly_63_set.insert("2");
    Undly_63.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_63_set.insert("1");
    Undly_63.add_attribute("UOM", "Alw"); // 1
    Undly_63_set.insert("Alw");
    Undly_63.add_attribute("UOMQty", "12389880.250000"); // 1
    Undly_63_set.insert("12389880.250000");
    Undly_63.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_63_set.insert("MMBtu");
    Undly_63.add_attribute("PxUOMQty", "15805028.210000"); // 1
    Undly_63_set.insert("15805028.210000");
    Undly_63.add_attribute("TmUnit", "Mo"); // 1
    Undly_63_set.insert("Mo");
    Undly_63.add_attribute("ExerStyle", "1"); // 1
    Undly_63_set.insert("1");
    Undly_63.add_attribute("CpnRt", "3228644.450000"); // 1
    Undly_63_set.insert("3228644.450000");
    Undly_63.add_attribute("Exch", "UnderlyingSecurityExchange_t_1770047725"); // 1
    Undly_63_set.insert("UnderlyingSecurityExchange_t_1770047725");
    Undly_63.add_attribute("Issr", "UnderlyingIssuer_t_243963158"); // 1
    Undly_63_set.insert("UnderlyingIssuer_t_243963158");
    Undly_63.add_attribute("EncUndIssrLen", "691041368"); // 1
    Undly_63_set.insert("691041368");
    Undly_63.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1923036915"); // 1
    Undly_63_set.insert("EncodedUnderlyingIssuer_t_1923036915");
    Undly_63.add_attribute("Desc", "UnderlyingSecurityDesc_t_565886068"); // 1
    Undly_63_set.insert("UnderlyingSecurityDesc_t_565886068");
    Undly_63.add_attribute("EncUndSecDescLen", "1331938926"); // 1
    Undly_63_set.insert("1331938926");
    Undly_63.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1170704334"); // 1
    Undly_63_set.insert("EncodedUnderlyingSecurityDesc_t_1170704334");
    Undly_63.add_attribute("CPPgm", "UnderlyingCPProgram_t_1161064477"); // 1
    Undly_63_set.insert("UnderlyingCPProgram_t_1161064477");
    Undly_63.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1572179177"); // 1
    Undly_63_set.insert("UnderlyingCPRegType_t_1572179177");
    Undly_63.add_attribute("AllocPct", "6682716.010000"); // 1
    Undly_63_set.insert("6682716.010000");
    Undly_63.add_attribute("Ccy", "EUR"); // 1
    Undly_63_set.insert("EUR");
    Undly_63.add_attribute("Qty", "17620169.640000"); // 1
    Undly_63_set.insert("17620169.640000");
    Undly_63.add_attribute("SettlTyp", "4"); // 1
    Undly_63_set.insert("4");
    Undly_63.add_attribute("CashAmt", "UnderlyingCashAmount_t_226129477"); // 1
    Undly_63_set.insert("UnderlyingCashAmount_t_226129477");
    Undly_63.add_attribute("CashTyp", "DIFF"); // 1
    Undly_63_set.insert("DIFF");
    Undly_63.add_attribute("Px", "18745066.920000"); // 1
    Undly_63_set.insert("18745066.920000");
    Undly_63.add_attribute("DirtPx", "8497749.740000"); // 1
    Undly_63_set.insert("8497749.740000");
    Undly_63.add_attribute("EndPx", "10858700.330000"); // 1
    Undly_63_set.insert("10858700.330000");
    Undly_63.add_attribute("StartVal", "UnderlyingStartValue_t_2043986123"); // 1
    Undly_63_set.insert("UnderlyingStartValue_t_2043986123");
    Undly_63.add_attribute("CurVal", "UnderlyingCurrentValue_t_798442536"); // 1
    Undly_63_set.insert("UnderlyingCurrentValue_t_798442536");
    Undly_63.add_attribute("EndVal", "UnderlyingEndValue_t_1714132542"); // 1
    Undly_63_set.insert("UnderlyingEndValue_t_1714132542");
    Undly_63.add_attribute("AdjQty", "6842465.210000"); // 1
    Undly_63_set.insert("6842465.210000");
    Undly_63.add_attribute("FxRate", "7353073.990000"); // 1
    Undly_63_set.insert("7353073.990000");
    Undly_63.add_attribute("FxRateCalc", "M"); // 1
    Undly_63_set.insert("M");
    Undly_63.add_attribute("CapValu", "UnderlyingCapValue_t_1923234547"); // 1
    Undly_63_set.insert("UnderlyingCapValue_t_1923234547");
    Undly_63.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1014370327"); // 1
    Undly_63_set.insert("UnderlyingSettlMethod_t_1014370327");
    Undly_63.add_attribute("PutCall", "732281482"); // 1
    Undly_63_set.insert("732281482");
    all_values.push_back(Undly_63_set);
    all_compo_names.insert("Undly_63_set");

    {
      xml_element UndAID_63{"UndAID"};
      multiset<string> UndAID_63_set;
      UndAID_63.add_attribute("AltID", "UnderlyingSecurityAltID_t_1706599103"); // 2
      UndAID_63_set.insert("UnderlyingSecurityAltID_t_1706599103");
      UndAID_63.add_attribute("AltIDSrc", "9"); // 2
      UndAID_63_set.insert("9");
      all_values.push_back(UndAID_63_set);
      all_compo_names.insert("UndAID_63_set");

      Undly_63.add_element(UndAID_63);
    }
    {
      xml_element Stip_100{"Stip"};
      multiset<string> Stip_100_set;
      Stip_100.add_attribute("Typ", "CPR"); // 2
      Stip_100_set.insert("CPR");
      Stip_100.add_attribute("Val", "UnderlyingStipValue_t_1329163180"); // 2
      Stip_100_set.insert("UnderlyingStipValue_t_1329163180");
      all_values.push_back(Stip_100_set);
      all_compo_names.insert("Stip_100_set");

      Undly_63.add_element(Stip_100);
    }
    {
      xml_element Pty_247{"Pty"};
      multiset<string> Pty_247_set;
      Pty_247.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1597012886"); // 2
      Pty_247_set.insert("UnderlyingInstrumentPartyID_t_1597012886");
      Pty_247.add_attribute("Src", "6"); // 2
      Pty_247_set.insert("6");
      Pty_247.add_attribute("R", "31"); // 2
      Pty_247_set.insert("31");
      all_values.push_back(Pty_247_set);
      all_compo_names.insert("Pty_247_set");

      {
        xml_element Sub_247{"Sub"};
        multiset<string> Sub_247_set;
        Sub_247.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_15415307"); // 3
        Sub_247_set.insert("UnderlyingInstrumentPartySubID_t_15415307");
        Sub_247.add_attribute("Typ", "12"); // 3
        Sub_247_set.insert("12");
        all_values.push_back(Sub_247_set);
        all_compo_names.insert("Sub_247_set");

        Pty_247.add_element(Sub_247);
      }
      Undly_63.add_element(Pty_247);
    }
    elt.add_element(Undly_63);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_17{"OrdQty"};
    multiset<string> OrdQty_17_set;
    OrdQty_17.add_attribute("Qty", "1279371.340000"); // 1
    OrdQty_17_set.insert("1279371.340000");
    OrdQty_17.add_attribute("Cash", "11764797.840000"); // 1
    OrdQty_17_set.insert("11764797.840000");
    OrdQty_17.add_attribute("Pct", "3553381.020000"); // 1
    OrdQty_17_set.insert("3553381.020000");
    OrdQty_17.add_attribute("RndDir", "2"); // 1
    OrdQty_17_set.insert("2");
    OrdQty_17.add_attribute("RndMod", "20511036.590000"); // 1
    OrdQty_17_set.insert("20511036.590000");
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
