#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/News.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( News_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"News" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> News_message_t_0;
  elt.add_attribute("ID", "NewsID_t_445318462"); // 0
  News_message_t_0.insert("NewsID_t_445318462");
  elt.add_attribute("NewsCatgy", "1"); // 0
  News_message_t_0.insert("1");
  elt.add_attribute("LangCd", "LanguageCode_t_2033080488"); // 0
  News_message_t_0.insert("LanguageCode_t_2033080488");
  elt.add_attribute("OrigTm", "OrigTime_t_1056248373"); // 0
  News_message_t_0.insert("OrigTime_t_1056248373");
  elt.add_attribute("Urgency", "2"); // 0
  News_message_t_0.insert("2");
  elt.add_attribute("Headline", "Headline_t_40939444"); // 0
  News_message_t_0.insert("Headline_t_40939444");
  elt.add_attribute("EncHeadlineLen", "446598070"); // 0
  News_message_t_0.insert("446598070");
  elt.add_attribute("EncHeadline", "EncodedHeadline_t_645547098"); // 0
  News_message_t_0.insert("EncodedHeadline_t_645547098");
  elt.add_attribute("MktID", "MarketID_t_454339047"); // 0
  News_message_t_0.insert("MarketID_t_454339047");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1350603361"); // 0
  News_message_t_0.insert("MarketSegmentID_t_1350603361");
  elt.add_attribute("URL", "URLLink_t_1303607890"); // 0
  News_message_t_0.insert("URLLink_t_1303607890");
  elt.add_attribute("RawDataLength", "552752536"); // 0
  News_message_t_0.insert("552752536");
  elt.add_attribute("RawData", "RawData_t_218229070"); // 0
  News_message_t_0.insert("RawData_t_218229070");
  all_values.push_back(News_message_t_0);
  all_compo_names.insert("News_message_t");

  { // Hdr
    xml_element Hdr_55{"Hdr"};
    multiset<string> Hdr_55_set;
    Hdr_55.add_attribute("SeqNum", "90948759"); // 1
    Hdr_55_set.insert("90948759");
    Hdr_55.add_attribute("SID", "SenderCompID_t_187931142"); // 1
    Hdr_55_set.insert("SenderCompID_t_187931142");
    Hdr_55.add_attribute("TID", "TargetCompID_t_1866299120"); // 1
    Hdr_55_set.insert("TargetCompID_t_1866299120");
    Hdr_55.add_attribute("OBID", "OnBehalfOfCompID_t_43799961"); // 1
    Hdr_55_set.insert("OnBehalfOfCompID_t_43799961");
    Hdr_55.add_attribute("D2ID", "DeliverToCompID_t_1272278090"); // 1
    Hdr_55_set.insert("DeliverToCompID_t_1272278090");
    Hdr_55.add_attribute("SSub", "SenderSubID_t_481793875"); // 1
    Hdr_55_set.insert("SenderSubID_t_481793875");
    Hdr_55.add_attribute("SLoc", "SenderLocationID_t_1176661004"); // 1
    Hdr_55_set.insert("SenderLocationID_t_1176661004");
    Hdr_55.add_attribute("TSub", "TargetSubID_t_2068027989"); // 1
    Hdr_55_set.insert("TargetSubID_t_2068027989");
    Hdr_55.add_attribute("TLoc", "TargetLocationID_t_707075163"); // 1
    Hdr_55_set.insert("TargetLocationID_t_707075163");
    Hdr_55.add_attribute("OBSub", "OnBehalfOfSubID_t_993621635"); // 1
    Hdr_55_set.insert("OnBehalfOfSubID_t_993621635");
    Hdr_55.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1497280756"); // 1
    Hdr_55_set.insert("OnBehalfOfLocationID_t_1497280756");
    Hdr_55.add_attribute("D2Sub", "DeliverToSubID_t_2072357859"); // 1
    Hdr_55_set.insert("DeliverToSubID_t_2072357859");
    Hdr_55.add_attribute("D2Loc", "DeliverToLocationID_t_257696578"); // 1
    Hdr_55_set.insert("DeliverToLocationID_t_257696578");
    Hdr_55.add_attribute("PosDup", "Y"); // 1
    Hdr_55_set.insert("Y");
    Hdr_55.add_attribute("PosRsnd", "Y"); // 1
    Hdr_55_set.insert("Y");
    Hdr_55.add_attribute("Snt", "SendingTime_t_298656454"); // 1
    Hdr_55_set.insert("SendingTime_t_298656454");
    Hdr_55.add_attribute("OrigSnt", "OrigSendingTime_t_1079176248"); // 1
    Hdr_55_set.insert("OrigSendingTime_t_1079176248");
    Hdr_55.add_attribute("MsgEncd", "MessageEncoding_t_1977575157"); // 1
    Hdr_55_set.insert("MessageEncoding_t_1977575157");
    all_values.push_back(Hdr_55_set);
    all_compo_names.insert("Hdr_55_set");

    {
      xml_element Hop_55{"Hop"};
      multiset<string> Hop_55_set;
      Hop_55.add_attribute("ID", "HopCompID_t_743974916"); // 2
      Hop_55_set.insert("HopCompID_t_743974916");
      Hop_55.add_attribute("Ref", "976649887"); // 2
      Hop_55_set.insert("976649887");
      Hop_55.add_attribute("Snt", "HopSendingTime_t_1863171997"); // 2
      Hop_55_set.insert("HopSendingTime_t_1863171997");
      all_values.push_back(Hop_55_set);
      all_compo_names.insert("Hop_55_set");

      Hdr_55.add_element(Hop_55);
    }
    elt.add_element(Hdr_55);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_10{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_10_set;
    ApplSeqCtrl_10.add_attribute("ApplID", "ApplID_t_1800223290"); // 1
    ApplSeqCtrl_10_set.insert("ApplID_t_1800223290");
    ApplSeqCtrl_10.add_attribute("ApplSeqNum", "746114137"); // 1
    ApplSeqCtrl_10_set.insert("746114137");
    ApplSeqCtrl_10.add_attribute("ApplLastSeqNum", "1904111441"); // 1
    ApplSeqCtrl_10_set.insert("1904111441");
    ApplSeqCtrl_10.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_10_set.insert("true");
    all_values.push_back(ApplSeqCtrl_10_set);
    all_compo_names.insert("ApplSeqCtrl_10_set");

    elt.add_element(ApplSeqCtrl_10);
  } // end ApplSeqCtrl
  { // Refs
    xml_element Refs_0{"Refs"};
    multiset<string> Refs_0_set;
    Refs_0.add_attribute("RefID", "NewsRefID_t_210966841"); // 1
    Refs_0_set.insert("NewsRefID_t_210966841");
    Refs_0.add_attribute("RefTyp", "0"); // 1
    Refs_0_set.insert("0");
    all_values.push_back(Refs_0_set);
    all_compo_names.insert("Refs_0_set");

    elt.add_element(Refs_0);
  } // end Refs
  { // Refs
    xml_element Refs_1{"Refs"};
    multiset<string> Refs_1_set;
    Refs_1.add_attribute("RefID", "NewsRefID_t_547785477"); // 1
    Refs_1_set.insert("NewsRefID_t_547785477");
    Refs_1.add_attribute("RefTyp", "2"); // 1
    Refs_1_set.insert("2");
    all_values.push_back(Refs_1_set);
    all_compo_names.insert("Refs_1_set");

    elt.add_element(Refs_1);
  } // end Refs
  { // Rtg
    xml_element Rtg_6{"Rtg"};
    multiset<string> Rtg_6_set;
    Rtg_6.add_attribute("RtgTyp", "2"); // 1
    Rtg_6_set.insert("2");
    Rtg_6.add_attribute("RtgID", "RoutingID_t_951650519"); // 1
    Rtg_6_set.insert("RoutingID_t_951650519");
    all_values.push_back(Rtg_6_set);
    all_compo_names.insert("Rtg_6_set");

    elt.add_element(Rtg_6);
  } // end Rtg
  { // Rtg
    xml_element Rtg_7{"Rtg"};
    multiset<string> Rtg_7_set;
    Rtg_7.add_attribute("RtgTyp", "1"); // 1
    Rtg_7_set.insert("1");
    Rtg_7.add_attribute("RtgID", "RoutingID_t_682534198"); // 1
    Rtg_7_set.insert("RoutingID_t_682534198");
    all_values.push_back(Rtg_7_set);
    all_compo_names.insert("Rtg_7_set");

    elt.add_element(Rtg_7);
  } // end Rtg
  { // Rtg
    xml_element Rtg_8{"Rtg"};
    multiset<string> Rtg_8_set;
    Rtg_8.add_attribute("RtgTyp", "2"); // 1
    Rtg_8_set.insert("2");
    Rtg_8.add_attribute("RtgID", "RoutingID_t_1868779491"); // 1
    Rtg_8_set.insert("RoutingID_t_1868779491");
    all_values.push_back(Rtg_8_set);
    all_compo_names.insert("Rtg_8_set");

    elt.add_element(Rtg_8);
  } // end Rtg
  { // Inst
    xml_element Inst_4{"Inst"};
    {
      xml_element Instrmt_46{"Instrmt"};
      multiset<string> Instrmt_46_set;
      Instrmt_46.add_attribute("Sym", "Symbol_t_2144472950"); // 2
      Instrmt_46_set.insert("Symbol_t_2144472950");
      Instrmt_46.add_attribute("Sfx", "CD"); // 2
      Instrmt_46_set.insert("CD");
      Instrmt_46.add_attribute("ID", "SecurityID_t_705333190"); // 2
      Instrmt_46_set.insert("SecurityID_t_705333190");
      Instrmt_46.add_attribute("Src", "8"); // 2
      Instrmt_46_set.insert("8");
      Instrmt_46.add_attribute("Prod", "1"); // 2
      Instrmt_46_set.insert("1");
      Instrmt_46.add_attribute("ProdCmplx", "ProductComplex_t_963029768"); // 2
      Instrmt_46_set.insert("ProductComplex_t_963029768");
      Instrmt_46.add_attribute("SecGrp", "SecurityGroup_t_590792678"); // 2
      Instrmt_46_set.insert("SecurityGroup_t_590792678");
      Instrmt_46.add_attribute("CFI", "CFICode_t_307761570"); // 2
      Instrmt_46_set.insert("CFICode_t_307761570");
      Instrmt_46.add_attribute("SecTyp", "COFO"); // 2
      Instrmt_46_set.insert("COFO");
      Instrmt_46.add_attribute("SubTyp", "SecuritySubType_t_1669968927"); // 2
      Instrmt_46_set.insert("SecuritySubType_t_1669968927");
      Instrmt_46.add_attribute("MMY", "137853080"); // 2
      Instrmt_46_set.insert("137853080");
      Instrmt_46.add_attribute("MatDt", "MaturityDate_t_2005661139"); // 2
      Instrmt_46_set.insert("MaturityDate_t_2005661139");
      Instrmt_46.add_attribute("MatTm", "499135166"); // 2
      Instrmt_46_set.insert("499135166");
      Instrmt_46.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2001025077"); // 2
      Instrmt_46_set.insert("SettleOnOpenFlag_t_2001025077");
      Instrmt_46.add_attribute("AsgnMeth", "1658400781"); // 2
      Instrmt_46_set.insert("1658400781");
      Instrmt_46.add_attribute("Status", "2"); // 2
      Instrmt_46_set.insert("2");
      Instrmt_46.add_attribute("CpnPmt", "CouponPaymentDate_t_1757652871"); // 2
      Instrmt_46_set.insert("CouponPaymentDate_t_1757652871");
      Instrmt_46.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_46_set.insert("MR");
      Instrmt_46.add_attribute("Snrty", "SB"); // 2
      Instrmt_46_set.insert("SB");
      Instrmt_46.add_attribute("NotlPctOut", "19686197.120000"); // 2
      Instrmt_46_set.insert("19686197.120000");
      Instrmt_46.add_attribute("OrigNotlPctOut", "10601959.190000"); // 2
      Instrmt_46_set.insert("10601959.190000");
      Instrmt_46.add_attribute("AttchPnt", "10372123.670000"); // 2
      Instrmt_46_set.insert("10372123.670000");
      Instrmt_46.add_attribute("DetchPnt", "5848554.410000"); // 2
      Instrmt_46_set.insert("5848554.410000");
      Instrmt_46.add_attribute("Issued", "IssueDate_t_580882415"); // 2
      Instrmt_46_set.insert("IssueDate_t_580882415");
      Instrmt_46.add_attribute("RepoCollSecTyp", "1675946604"); // 2
      Instrmt_46_set.insert("1675946604");
      Instrmt_46.add_attribute("RepoTrm", "1536505960"); // 2
      Instrmt_46_set.insert("1536505960");
      Instrmt_46.add_attribute("RepoRt", "19678680.310000"); // 2
      Instrmt_46_set.insert("19678680.310000");
      Instrmt_46.add_attribute("Fctr", "2109971.540000"); // 2
      Instrmt_46_set.insert("2109971.540000");
      Instrmt_46.add_attribute("CrdRtg", "CreditRating_t_1612950921"); // 2
      Instrmt_46_set.insert("CreditRating_t_1612950921");
      Instrmt_46.add_attribute("Rgstry", "InstrRegistry_t_1689163875"); // 2
      Instrmt_46_set.insert("InstrRegistry_t_1689163875");
      Instrmt_46.add_attribute("IssuCtry", "2070192357"); // 2
      Instrmt_46_set.insert("2070192357");
      Instrmt_46.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1609940224"); // 2
      Instrmt_46_set.insert("StateOrProvinceOfIssue_t_1609940224");
      Instrmt_46.add_attribute("Lcl", "LocaleOfIssue_t_2117534881"); // 2
      Instrmt_46_set.insert("LocaleOfIssue_t_2117534881");
      Instrmt_46.add_attribute("Redeem", "RedemptionDate_t_628041899"); // 2
      Instrmt_46_set.insert("RedemptionDate_t_628041899");
      Instrmt_46.add_attribute("StrkPx", "9567266.350000"); // 2
      Instrmt_46_set.insert("9567266.350000");
      Instrmt_46.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_46_set.insert("EUR");
      Instrmt_46.add_attribute("StrkMult", "15475193.130000"); // 2
      Instrmt_46_set.insert("15475193.130000");
      Instrmt_46.add_attribute("StrkValu", "6310580.210000"); // 2
      Instrmt_46_set.insert("6310580.210000");
      Instrmt_46.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_46_set.insert("3");
      Instrmt_46.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_46_set.insert("3");
      Instrmt_46.add_attribute("StrkPxBndryPrcsn", "7689111.010000"); // 2
      Instrmt_46_set.insert("7689111.010000");
      Instrmt_46.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_46_set.insert("2");
      Instrmt_46.add_attribute("OptAt", "1569139758"); // 2
      Instrmt_46_set.insert("1569139758");
      Instrmt_46.add_attribute("Mult", "6224525.310000"); // 2
      Instrmt_46_set.insert("6224525.310000");
      Instrmt_46.add_attribute("MultTyp", "0"); // 2
      Instrmt_46_set.insert("0");
      Instrmt_46.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_46_set.insert("3");
      Instrmt_46.add_attribute("MinPxIncr", "2326217.540000"); // 2
      Instrmt_46_set.insert("2326217.540000");
      Instrmt_46.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1832107359"); // 2
      Instrmt_46_set.insert("MinPriceIncrementAmount_t_1832107359");
      Instrmt_46.add_attribute("UOM", "USD"); // 2
      Instrmt_46_set.insert("USD");
      Instrmt_46.add_attribute("UOMQty", "537578.180000"); // 2
      Instrmt_46_set.insert("537578.180000");
      Instrmt_46.add_attribute("PxUOM", "USD"); // 2
      Instrmt_46_set.insert("USD");
      Instrmt_46.add_attribute("PxUOMQty", "460610.230000"); // 2
      Instrmt_46_set.insert("460610.230000");
      Instrmt_46.add_attribute("SettlMeth", "P"); // 2
      Instrmt_46_set.insert("P");
      Instrmt_46.add_attribute("ExerStyle", "2"); // 2
      Instrmt_46_set.insert("2");
      Instrmt_46.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_46_set.insert("2");
      Instrmt_46.add_attribute("OptPayAmt", "OptPayoutAmount_t_27635571"); // 2
      Instrmt_46_set.insert("OptPayoutAmount_t_27635571");
      Instrmt_46.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_46_set.insert("INX");
      Instrmt_46.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_46_set.insert("FUTDA");
      Instrmt_46.add_attribute("ListMeth", "0"); // 2
      Instrmt_46_set.insert("0");
      Instrmt_46.add_attribute("CapPx", "6877666.560000"); // 2
      Instrmt_46_set.insert("6877666.560000");
      Instrmt_46.add_attribute("FlrPx", "18557134.910000"); // 2
      Instrmt_46_set.insert("18557134.910000");
      Instrmt_46.add_attribute("PutCall", "0"); // 2
      Instrmt_46_set.insert("0");
      Instrmt_46.add_attribute("FlexInd", "false"); // 2
      Instrmt_46_set.insert("false");
      Instrmt_46.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_46_set.insert("true");
      Instrmt_46.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_46_set.insert("Mo");
      Instrmt_46.add_attribute("CpnRt", "9811143.400000"); // 2
      Instrmt_46_set.insert("9811143.400000");
      Instrmt_46.add_attribute("Exch", "SecurityExchange_t_1927343409"); // 2
      Instrmt_46_set.insert("SecurityExchange_t_1927343409");
      Instrmt_46.add_attribute("PosLmt", "1459805369"); // 2
      Instrmt_46_set.insert("1459805369");
      Instrmt_46.add_attribute("NTPosLmt", "1612172362"); // 2
      Instrmt_46_set.insert("1612172362");
      Instrmt_46.add_attribute("Issr", "Issuer_t_485134003"); // 2
      Instrmt_46_set.insert("Issuer_t_485134003");
      Instrmt_46.add_attribute("EncIssrLen", "382326313"); // 2
      Instrmt_46_set.insert("382326313");
      Instrmt_46.add_attribute("EncIssr", "EncodedIssuer_t_233599815"); // 2
      Instrmt_46_set.insert("EncodedIssuer_t_233599815");
      Instrmt_46.add_attribute("Desc", "SecurityDesc_t_1048585736"); // 2
      Instrmt_46_set.insert("SecurityDesc_t_1048585736");
      Instrmt_46.add_attribute("EncSecDescLen", "1951466072"); // 2
      Instrmt_46_set.insert("1951466072");
      Instrmt_46.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_856052346"); // 2
      Instrmt_46_set.insert("EncodedSecurityDesc_t_856052346");
      Instrmt_46.add_attribute("Pool", "Pool_t_1122954602"); // 2
      Instrmt_46_set.insert("Pool_t_1122954602");
      Instrmt_46.add_attribute("CSetMo", "470887837"); // 2
      Instrmt_46_set.insert("470887837");
      Instrmt_46.add_attribute("CPPgm", "99"); // 2
      Instrmt_46_set.insert("99");
      Instrmt_46.add_attribute("CPRegT", "CPRegType_t_807578314"); // 2
      Instrmt_46_set.insert("CPRegType_t_807578314");
      Instrmt_46.add_attribute("Dated", "DatedDate_t_1627220141"); // 2
      Instrmt_46_set.insert("DatedDate_t_1627220141");
      Instrmt_46.add_attribute("IntAcrl", "InterestAccrualDate_t_1142431918"); // 2
      Instrmt_46_set.insert("InterestAccrualDate_t_1142431918");
      all_values.push_back(Instrmt_46_set);
      all_compo_names.insert("Instrmt_46_set");

      {
        xml_element AID_49{"AID"};
        multiset<string> AID_49_set;
        AID_49.add_attribute("AltID", "SecurityAltID_t_1552397944"); // 3
        AID_49_set.insert("SecurityAltID_t_1552397944");
        AID_49.add_attribute("AltIDSrc", "H"); // 3
        AID_49_set.insert("H");
        all_values.push_back(AID_49_set);
        all_compo_names.insert("AID_49_set");

        Instrmt_46.add_element(AID_49);
      }
      {
        xml_element SecXML_49{"SecXML"};
        multiset<string> SecXML_49_set;
        SecXML_49.add_attribute("Schema", "SecurityXMLSchema_t_1781045177"); // 3
        SecXML_49_set.insert("SecurityXMLSchema_t_1781045177");
        all_values.push_back(SecXML_49_set);
        all_compo_names.insert("SecXML_49_set");

        Instrmt_46.add_element(SecXML_49);
      }
      {
        xml_element Evnt_49{"Evnt"};
        multiset<string> Evnt_49_set;
        Evnt_49.add_attribute("EventTyp", "3"); // 3
        Evnt_49_set.insert("3");
        Evnt_49.add_attribute("Dt", "EventDate_t_1247805143"); // 3
        Evnt_49_set.insert("EventDate_t_1247805143");
        Evnt_49.add_attribute("Tm", "EventTime_t_1808680748"); // 3
        Evnt_49_set.insert("EventTime_t_1808680748");
        Evnt_49.add_attribute("Px", "18767027.710000"); // 3
        Evnt_49_set.insert("18767027.710000");
        Evnt_49.add_attribute("Txt", "EventText_t_1033326277"); // 3
        Evnt_49_set.insert("EventText_t_1033326277");
        all_values.push_back(Evnt_49_set);
        all_compo_names.insert("Evnt_49_set");

        Instrmt_46.add_element(Evnt_49);
      }
      {
        xml_element Pty_252{"Pty"};
        multiset<string> Pty_252_set;
        Pty_252.add_attribute("ID", "InstrumentPartyID_t_1301783593"); // 3
        Pty_252_set.insert("InstrumentPartyID_t_1301783593");
        Pty_252.add_attribute("Src", "C"); // 3
        Pty_252_set.insert("C");
        Pty_252.add_attribute("R", "13"); // 3
        Pty_252_set.insert("13");
        all_values.push_back(Pty_252_set);
        all_compo_names.insert("Pty_252_set");

        {
          xml_element Sub_252{"Sub"};
          multiset<string> Sub_252_set;
          Sub_252.add_attribute("ID", "InstrumentPartySubID_t_257343013"); // 4
          Sub_252_set.insert("InstrumentPartySubID_t_257343013");
          Sub_252.add_attribute("Typ", "13"); // 4
          Sub_252_set.insert("13");
          all_values.push_back(Sub_252_set);
          all_compo_names.insert("Sub_252_set");

          Pty_252.add_element(Sub_252);
        }
        Instrmt_46.add_element(Pty_252);
      }
      {
        xml_element CmplxEvnt_46{"CmplxEvnt"};
        multiset<string> CmplxEvnt_46_set;
        CmplxEvnt_46.add_attribute("Typ", "4"); // 3
        CmplxEvnt_46_set.insert("4");
        CmplxEvnt_46.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_169629069"); // 3
        CmplxEvnt_46_set.insert("ComplexOptPayoutAmount_t_169629069");
        CmplxEvnt_46.add_attribute("Px", "20559180.090000"); // 3
        CmplxEvnt_46_set.insert("20559180.090000");
        CmplxEvnt_46.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_46_set.insert("5");
        CmplxEvnt_46.add_attribute("PxBndryPrcsn", "16294344.380000"); // 3
        CmplxEvnt_46_set.insert("16294344.380000");
        CmplxEvnt_46.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_46_set.insert("3");
        CmplxEvnt_46.add_attribute("Cond", "2"); // 3
        CmplxEvnt_46_set.insert("2");
        all_values.push_back(CmplxEvnt_46_set);
        all_compo_names.insert("CmplxEvnt_46_set");

        {
          xml_element EvntDts_46{"EvntDts"};
          multiset<string> EvntDts_46_set;
          EvntDts_46.add_attribute("StartDt", "ComplexEventStartDate_t_2011760751"); // 4
          EvntDts_46_set.insert("ComplexEventStartDate_t_2011760751");
          EvntDts_46.add_attribute("EndDt", "ComplexEventEndDate_t_1754206538"); // 4
          EvntDts_46_set.insert("ComplexEventEndDate_t_1754206538");
          all_values.push_back(EvntDts_46_set);
          all_compo_names.insert("EvntDts_46_set");

          {
            xml_element EvntTms_46{"EvntTms"};
            multiset<string> EvntTms_46_set;
            EvntTms_46.add_attribute("StartTm", "243923716"); // 5
            EvntTms_46_set.insert("243923716");
            EvntTms_46.add_attribute("EndTm", "1815743175"); // 5
            EvntTms_46_set.insert("1815743175");
            all_values.push_back(EvntTms_46_set);
            all_compo_names.insert("EvntTms_46_set");

            EvntDts_46.add_element(EvntTms_46);
          }
          CmplxEvnt_46.add_element(EvntDts_46);
        }
        Instrmt_46.add_element(CmplxEvnt_46);
      }
      Inst_4.add_element(Instrmt_46);
    }
    elt.add_element(Inst_4);
  } // end Inst
  { // Leg
    xml_element Leg_55{"Leg"};
    multiset<string> Leg_55_set;
    Leg_55.add_attribute("Sym", "LegSymbol_t_1366878318"); // 1
    Leg_55_set.insert("LegSymbol_t_1366878318");
    Leg_55.add_attribute("Sfx", "WI"); // 1
    Leg_55_set.insert("WI");
    Leg_55.add_attribute("ID", "LegSecurityID_t_1551449337"); // 1
    Leg_55_set.insert("LegSecurityID_t_1551449337");
    Leg_55.add_attribute("Src", "H"); // 1
    Leg_55_set.insert("H");
    Leg_55.add_attribute("Prod", "4"); // 1
    Leg_55_set.insert("4");
    Leg_55.add_attribute("CFI", "LegCFICode_t_546397608"); // 1
    Leg_55_set.insert("LegCFICode_t_546397608");
    Leg_55.add_attribute("SecTyp", "MTN"); // 1
    Leg_55_set.insert("MTN");
    Leg_55.add_attribute("SecSubTyp", "LegSecuritySubType_t_1292165022"); // 1
    Leg_55_set.insert("LegSecuritySubType_t_1292165022");
    Leg_55.add_attribute("MMY", "179959137"); // 1
    Leg_55_set.insert("179959137");
    Leg_55.add_attribute("Mat", "LegMaturityDate_t_162503623"); // 1
    Leg_55_set.insert("LegMaturityDate_t_162503623");
    Leg_55.add_attribute("MatTm", "392486517"); // 1
    Leg_55_set.insert("392486517");
    Leg_55.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1988639886"); // 1
    Leg_55_set.insert("LegCouponPaymentDate_t_1988639886");
    Leg_55.add_attribute("Issued", "LegIssueDate_t_2039206394"); // 1
    Leg_55_set.insert("LegIssueDate_t_2039206394");
    Leg_55.add_attribute("RepoCollSecTyp", "1425812795"); // 1
    Leg_55_set.insert("1425812795");
    Leg_55.add_attribute("RepoTrm", "1142939831"); // 1
    Leg_55_set.insert("1142939831");
    Leg_55.add_attribute("RepoRt", "3087085.250000"); // 1
    Leg_55_set.insert("3087085.250000");
    Leg_55.add_attribute("Fctr", "198852.670000"); // 1
    Leg_55_set.insert("198852.670000");
    Leg_55.add_attribute("CrdRtg", "LegCreditRating_t_1400282844"); // 1
    Leg_55_set.insert("LegCreditRating_t_1400282844");
    Leg_55.add_attribute("Rgstry", "LegInstrRegistry_t_1383512193"); // 1
    Leg_55_set.insert("LegInstrRegistry_t_1383512193");
    Leg_55.add_attribute("Ctry", "1097713130"); // 1
    Leg_55_set.insert("1097713130");
    Leg_55.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1569911913"); // 1
    Leg_55_set.insert("LegStateOrProvinceOfIssue_t_1569911913");
    Leg_55.add_attribute("Lcl", "LegLocaleOfIssue_t_1291946554"); // 1
    Leg_55_set.insert("LegLocaleOfIssue_t_1291946554");
    Leg_55.add_attribute("Redeem", "LegRedemptionDate_t_1955400754"); // 1
    Leg_55_set.insert("LegRedemptionDate_t_1955400754");
    Leg_55.add_attribute("Strk", "10518627.030000"); // 1
    Leg_55_set.insert("10518627.030000");
    Leg_55.add_attribute("StrkCcy", "CAN"); // 1
    Leg_55_set.insert("CAN");
    Leg_55.add_attribute("OptA", "916139807"); // 1
    Leg_55_set.insert("916139807");
    Leg_55.add_attribute("Cmult", "2717925.200000"); // 1
    Leg_55_set.insert("2717925.200000");
    Leg_55.add_attribute("MultTyp", "0"); // 1
    Leg_55_set.insert("0");
    Leg_55.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_55_set.insert("4");
    Leg_55.add_attribute("UOM", "MMBtu"); // 1
    Leg_55_set.insert("MMBtu");
    Leg_55.add_attribute("UOMQty", "6140571.200000"); // 1
    Leg_55_set.insert("6140571.200000");
    Leg_55.add_attribute("PxUOM", "tn"); // 1
    Leg_55_set.insert("tn");
    Leg_55.add_attribute("PxUOMQty", "1385334.460000"); // 1
    Leg_55_set.insert("1385334.460000");
    Leg_55.add_attribute("TmUnit", "Min"); // 1
    Leg_55_set.insert("Min");
    Leg_55.add_attribute("ExerStyle", "0"); // 1
    Leg_55_set.insert("0");
    Leg_55.add_attribute("CpnRt", "6849310.540000"); // 1
    Leg_55_set.insert("6849310.540000");
    Leg_55.add_attribute("Exch", "LegSecurityExchange_t_72917385"); // 1
    Leg_55_set.insert("LegSecurityExchange_t_72917385");
    Leg_55.add_attribute("Issr", "LegIssuer_t_1634595579"); // 1
    Leg_55_set.insert("LegIssuer_t_1634595579");
    Leg_55.add_attribute("EncLegIssrLen", "864890192"); // 1
    Leg_55_set.insert("864890192");
    Leg_55.add_attribute("EncLegIssr", "EncodedLegIssuer_t_235421008"); // 1
    Leg_55_set.insert("EncodedLegIssuer_t_235421008");
    Leg_55.add_attribute("Desc", "LegSecurityDesc_t_2027082097"); // 1
    Leg_55_set.insert("LegSecurityDesc_t_2027082097");
    Leg_55.add_attribute("EncLegSecDescLen", "706046430"); // 1
    Leg_55_set.insert("706046430");
    Leg_55.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_127143754"); // 1
    Leg_55_set.insert("EncodedLegSecurityDesc_t_127143754");
    Leg_55.add_attribute("RatioQty", "13054112.440000"); // 1
    Leg_55_set.insert("13054112.440000");
    Leg_55.add_attribute("Side", "6"); // 1
    Leg_55_set.insert("6");
    Leg_55.add_attribute("Ccy", "CAN"); // 1
    Leg_55_set.insert("CAN");
    Leg_55.add_attribute("Pool", "LegPool_t_1101785457"); // 1
    Leg_55_set.insert("LegPool_t_1101785457");
    Leg_55.add_attribute("Dated", "LegDatedDate_t_1819364473"); // 1
    Leg_55_set.insert("LegDatedDate_t_1819364473");
    Leg_55.add_attribute("CSetMo", "275525993"); // 1
    Leg_55_set.insert("275525993");
    Leg_55.add_attribute("IntAcrl", "LegInterestAccrualDate_t_524213723"); // 1
    Leg_55_set.insert("LegInterestAccrualDate_t_524213723");
    Leg_55.add_attribute("PutCall", "963827379"); // 1
    Leg_55_set.insert("963827379");
    Leg_55.add_attribute("LegOptionRatio", "834430.990000"); // 1
    Leg_55_set.insert("834430.990000");
    Leg_55.add_attribute("Px", "15760764.260000"); // 1
    Leg_55_set.insert("15760764.260000");
    all_values.push_back(Leg_55_set);
    all_compo_names.insert("Leg_55_set");

    {
      xml_element LegAID_55{"LegAID"};
      multiset<string> LegAID_55_set;
      LegAID_55.add_attribute("SecAltID", "LegSecurityAltID_t_1628897009"); // 2
      LegAID_55_set.insert("LegSecurityAltID_t_1628897009");
      LegAID_55.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_55_set.insert("6");
      all_values.push_back(LegAID_55_set);
      all_compo_names.insert("LegAID_55_set");

      Leg_55.add_element(LegAID_55);
    }
    elt.add_element(Leg_55);
  } // end Leg
  { // Leg
    xml_element Leg_56{"Leg"};
    multiset<string> Leg_56_set;
    Leg_56.add_attribute("Sym", "LegSymbol_t_344732585"); // 1
    Leg_56_set.insert("LegSymbol_t_344732585");
    Leg_56.add_attribute("Sfx", "WI"); // 1
    Leg_56_set.insert("WI");
    Leg_56.add_attribute("ID", "LegSecurityID_t_481360634"); // 1
    Leg_56_set.insert("LegSecurityID_t_481360634");
    Leg_56.add_attribute("Src", "3"); // 1
    Leg_56_set.insert("3");
    Leg_56.add_attribute("Prod", "10"); // 1
    Leg_56_set.insert("10");
    Leg_56.add_attribute("CFI", "LegCFICode_t_1095417754"); // 1
    Leg_56_set.insert("LegCFICode_t_1095417754");
    Leg_56.add_attribute("SecTyp", "AMENDED"); // 1
    Leg_56_set.insert("AMENDED");
    Leg_56.add_attribute("SecSubTyp", "LegSecuritySubType_t_626307084"); // 1
    Leg_56_set.insert("LegSecuritySubType_t_626307084");
    Leg_56.add_attribute("MMY", "1736447859"); // 1
    Leg_56_set.insert("1736447859");
    Leg_56.add_attribute("Mat", "LegMaturityDate_t_1995109177"); // 1
    Leg_56_set.insert("LegMaturityDate_t_1995109177");
    Leg_56.add_attribute("MatTm", "1311238139"); // 1
    Leg_56_set.insert("1311238139");
    Leg_56.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1809365244"); // 1
    Leg_56_set.insert("LegCouponPaymentDate_t_1809365244");
    Leg_56.add_attribute("Issued", "LegIssueDate_t_1482221108"); // 1
    Leg_56_set.insert("LegIssueDate_t_1482221108");
    Leg_56.add_attribute("RepoCollSecTyp", "28644683"); // 1
    Leg_56_set.insert("28644683");
    Leg_56.add_attribute("RepoTrm", "2044786253"); // 1
    Leg_56_set.insert("2044786253");
    Leg_56.add_attribute("RepoRt", "13618195.570000"); // 1
    Leg_56_set.insert("13618195.570000");
    Leg_56.add_attribute("Fctr", "7346911.130000"); // 1
    Leg_56_set.insert("7346911.130000");
    Leg_56.add_attribute("CrdRtg", "LegCreditRating_t_24446359"); // 1
    Leg_56_set.insert("LegCreditRating_t_24446359");
    Leg_56.add_attribute("Rgstry", "LegInstrRegistry_t_519747153"); // 1
    Leg_56_set.insert("LegInstrRegistry_t_519747153");
    Leg_56.add_attribute("Ctry", "436193726"); // 1
    Leg_56_set.insert("436193726");
    Leg_56.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_460298639"); // 1
    Leg_56_set.insert("LegStateOrProvinceOfIssue_t_460298639");
    Leg_56.add_attribute("Lcl", "LegLocaleOfIssue_t_1845043665"); // 1
    Leg_56_set.insert("LegLocaleOfIssue_t_1845043665");
    Leg_56.add_attribute("Redeem", "LegRedemptionDate_t_1537979183"); // 1
    Leg_56_set.insert("LegRedemptionDate_t_1537979183");
    Leg_56.add_attribute("Strk", "1321794.640000"); // 1
    Leg_56_set.insert("1321794.640000");
    Leg_56.add_attribute("StrkCcy", "JPY"); // 1
    Leg_56_set.insert("JPY");
    Leg_56.add_attribute("OptA", "1096006843"); // 1
    Leg_56_set.insert("1096006843");
    Leg_56.add_attribute("Cmult", "565291.100000"); // 1
    Leg_56_set.insert("565291.100000");
    Leg_56.add_attribute("MultTyp", "2"); // 1
    Leg_56_set.insert("2");
    Leg_56.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_56_set.insert("4");
    Leg_56.add_attribute("UOM", "Bbl"); // 1
    Leg_56_set.insert("Bbl");
    Leg_56.add_attribute("UOMQty", "18355182.700000"); // 1
    Leg_56_set.insert("18355182.700000");
    Leg_56.add_attribute("PxUOM", "Bcf"); // 1
    Leg_56_set.insert("Bcf");
    Leg_56.add_attribute("PxUOMQty", "17720715.770000"); // 1
    Leg_56_set.insert("17720715.770000");
    Leg_56.add_attribute("TmUnit", "Yr"); // 1
    Leg_56_set.insert("Yr");
    Leg_56.add_attribute("ExerStyle", "2"); // 1
    Leg_56_set.insert("2");
    Leg_56.add_attribute("CpnRt", "7200056.840000"); // 1
    Leg_56_set.insert("7200056.840000");
    Leg_56.add_attribute("Exch", "LegSecurityExchange_t_122361514"); // 1
    Leg_56_set.insert("LegSecurityExchange_t_122361514");
    Leg_56.add_attribute("Issr", "LegIssuer_t_1444706808"); // 1
    Leg_56_set.insert("LegIssuer_t_1444706808");
    Leg_56.add_attribute("EncLegIssrLen", "308969895"); // 1
    Leg_56_set.insert("308969895");
    Leg_56.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2117470691"); // 1
    Leg_56_set.insert("EncodedLegIssuer_t_2117470691");
    Leg_56.add_attribute("Desc", "LegSecurityDesc_t_608461299"); // 1
    Leg_56_set.insert("LegSecurityDesc_t_608461299");
    Leg_56.add_attribute("EncLegSecDescLen", "2118335139"); // 1
    Leg_56_set.insert("2118335139");
    Leg_56.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1452208151"); // 1
    Leg_56_set.insert("EncodedLegSecurityDesc_t_1452208151");
    Leg_56.add_attribute("RatioQty", "6371059.820000"); // 1
    Leg_56_set.insert("6371059.820000");
    Leg_56.add_attribute("Side", "1"); // 1
    Leg_56_set.insert("1");
    Leg_56.add_attribute("Ccy", "EUR"); // 1
    Leg_56_set.insert("EUR");
    Leg_56.add_attribute("Pool", "LegPool_t_2040084104"); // 1
    Leg_56_set.insert("LegPool_t_2040084104");
    Leg_56.add_attribute("Dated", "LegDatedDate_t_1186291214"); // 1
    Leg_56_set.insert("LegDatedDate_t_1186291214");
    Leg_56.add_attribute("CSetMo", "1807990821"); // 1
    Leg_56_set.insert("1807990821");
    Leg_56.add_attribute("IntAcrl", "LegInterestAccrualDate_t_352899095"); // 1
    Leg_56_set.insert("LegInterestAccrualDate_t_352899095");
    Leg_56.add_attribute("PutCall", "883851231"); // 1
    Leg_56_set.insert("883851231");
    Leg_56.add_attribute("LegOptionRatio", "11984863.560000"); // 1
    Leg_56_set.insert("11984863.560000");
    Leg_56.add_attribute("Px", "4850785.590000"); // 1
    Leg_56_set.insert("4850785.590000");
    all_values.push_back(Leg_56_set);
    all_compo_names.insert("Leg_56_set");

    {
      xml_element LegAID_56{"LegAID"};
      multiset<string> LegAID_56_set;
      LegAID_56.add_attribute("SecAltID", "LegSecurityAltID_t_856937242"); // 2
      LegAID_56_set.insert("LegSecurityAltID_t_856937242");
      LegAID_56.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_56_set.insert("G");
      all_values.push_back(LegAID_56_set);
      all_compo_names.insert("LegAID_56_set");

      Leg_56.add_element(LegAID_56);
    }
    elt.add_element(Leg_56);
  } // end Leg
  { // Undly
    xml_element Undly_62{"Undly"};
    multiset<string> Undly_62_set;
    Undly_62.add_attribute("Sym", "UnderlyingSymbol_t_913466352"); // 1
    Undly_62_set.insert("UnderlyingSymbol_t_913466352");
    Undly_62.add_attribute("Sfx", "CD"); // 1
    Undly_62_set.insert("CD");
    Undly_62.add_attribute("ID", "UnderlyingSecurityID_t_11021959"); // 1
    Undly_62_set.insert("UnderlyingSecurityID_t_11021959");
    Undly_62.add_attribute("Src", "M"); // 1
    Undly_62_set.insert("M");
    Undly_62.add_attribute("Prod", "12"); // 1
    Undly_62_set.insert("12");
    Undly_62.add_attribute("CFI", "UnderlyingCFICode_t_341648044"); // 1
    Undly_62_set.insert("UnderlyingCFICode_t_341648044");
    Undly_62.add_attribute("SecTyp", "MPP"); // 1
    Undly_62_set.insert("MPP");
    Undly_62.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_761698817"); // 1
    Undly_62_set.insert("UnderlyingSecuritySubType_t_761698817");
    Undly_62.add_attribute("MMY", "1160047768"); // 1
    Undly_62_set.insert("1160047768");
    Undly_62.add_attribute("Mat", "UnderlyingMaturityDate_t_401287260"); // 1
    Undly_62_set.insert("UnderlyingMaturityDate_t_401287260");
    Undly_62.add_attribute("MatTm", "884060331"); // 1
    Undly_62_set.insert("884060331");
    Undly_62.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_457270928"); // 1
    Undly_62_set.insert("UnderlyingCouponPaymentDate_t_457270928");
    Undly_62.add_attribute("RestrctTyp", "XR"); // 1
    Undly_62_set.insert("XR");
    Undly_62.add_attribute("Snrty", "SD"); // 1
    Undly_62_set.insert("SD");
    Undly_62.add_attribute("NotlPctOut", "10657322.270000"); // 1
    Undly_62_set.insert("10657322.270000");
    Undly_62.add_attribute("OrigNotlPctOut", "6811086.470000"); // 1
    Undly_62_set.insert("6811086.470000");
    Undly_62.add_attribute("AttchPnt", "1587718.770000"); // 1
    Undly_62_set.insert("1587718.770000");
    Undly_62.add_attribute("DetchPnt", "17028382.090000"); // 1
    Undly_62_set.insert("17028382.090000");
    Undly_62.add_attribute("Issued", "UnderlyingIssueDate_t_549262743"); // 1
    Undly_62_set.insert("UnderlyingIssueDate_t_549262743");
    Undly_62.add_attribute("RepoCollSecTyp", "825315938"); // 1
    Undly_62_set.insert("825315938");
    Undly_62.add_attribute("RepoTrm", "927151656"); // 1
    Undly_62_set.insert("927151656");
    Undly_62.add_attribute("RepoRt", "4418631.990000"); // 1
    Undly_62_set.insert("4418631.990000");
    Undly_62.add_attribute("Fctr", "20116071.530000"); // 1
    Undly_62_set.insert("20116071.530000");
    Undly_62.add_attribute("CrdRtg", "UnderlyingCreditRating_t_587658829"); // 1
    Undly_62_set.insert("UnderlyingCreditRating_t_587658829");
    Undly_62.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_794762294"); // 1
    Undly_62_set.insert("UnderlyingInstrRegistry_t_794762294");
    Undly_62.add_attribute("Ctry", "747974736"); // 1
    Undly_62_set.insert("747974736");
    Undly_62.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1786145185"); // 1
    Undly_62_set.insert("UnderlyingStateOrProvinceOfIssue_t_1786145185");
    Undly_62.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1279840853"); // 1
    Undly_62_set.insert("UnderlyingLocaleOfIssue_t_1279840853");
    Undly_62.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1604911978"); // 1
    Undly_62_set.insert("UnderlyingRedemptionDate_t_1604911978");
    Undly_62.add_attribute("StrkPx", "7518571.520000"); // 1
    Undly_62_set.insert("7518571.520000");
    Undly_62.add_attribute("StrkCcy", "GBP"); // 1
    Undly_62_set.insert("GBP");
    Undly_62.add_attribute("OptA", "1208354804"); // 1
    Undly_62_set.insert("1208354804");
    Undly_62.add_attribute("Mult", "7244645.670000"); // 1
    Undly_62_set.insert("7244645.670000");
    Undly_62.add_attribute("MultTyp", "0"); // 1
    Undly_62_set.insert("0");
    Undly_62.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_62_set.insert("4");
    Undly_62.add_attribute("UOM", "tn"); // 1
    Undly_62_set.insert("tn");
    Undly_62.add_attribute("UOMQty", "1088699.060000"); // 1
    Undly_62_set.insert("1088699.060000");
    Undly_62.add_attribute("PxUOM", "lbs"); // 1
    Undly_62_set.insert("lbs");
    Undly_62.add_attribute("PxUOMQty", "786767.310000"); // 1
    Undly_62_set.insert("786767.310000");
    Undly_62.add_attribute("TmUnit", "Min"); // 1
    Undly_62_set.insert("Min");
    Undly_62.add_attribute("ExerStyle", "2"); // 1
    Undly_62_set.insert("2");
    Undly_62.add_attribute("CpnRt", "5359476.590000"); // 1
    Undly_62_set.insert("5359476.590000");
    Undly_62.add_attribute("Exch", "UnderlyingSecurityExchange_t_1220414322"); // 1
    Undly_62_set.insert("UnderlyingSecurityExchange_t_1220414322");
    Undly_62.add_attribute("Issr", "UnderlyingIssuer_t_1705209953"); // 1
    Undly_62_set.insert("UnderlyingIssuer_t_1705209953");
    Undly_62.add_attribute("EncUndIssrLen", "1601679886"); // 1
    Undly_62_set.insert("1601679886");
    Undly_62.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1901522969"); // 1
    Undly_62_set.insert("EncodedUnderlyingIssuer_t_1901522969");
    Undly_62.add_attribute("Desc", "UnderlyingSecurityDesc_t_1863981830"); // 1
    Undly_62_set.insert("UnderlyingSecurityDesc_t_1863981830");
    Undly_62.add_attribute("EncUndSecDescLen", "1157034447"); // 1
    Undly_62_set.insert("1157034447");
    Undly_62.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_303302064"); // 1
    Undly_62_set.insert("EncodedUnderlyingSecurityDesc_t_303302064");
    Undly_62.add_attribute("CPPgm", "UnderlyingCPProgram_t_541814121"); // 1
    Undly_62_set.insert("UnderlyingCPProgram_t_541814121");
    Undly_62.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2084186103"); // 1
    Undly_62_set.insert("UnderlyingCPRegType_t_2084186103");
    Undly_62.add_attribute("AllocPct", "7451652.640000"); // 1
    Undly_62_set.insert("7451652.640000");
    Undly_62.add_attribute("Ccy", "GBP"); // 1
    Undly_62_set.insert("GBP");
    Undly_62.add_attribute("Qty", "15399275.580000"); // 1
    Undly_62_set.insert("15399275.580000");
    Undly_62.add_attribute("SettlTyp", "2"); // 1
    Undly_62_set.insert("2");
    Undly_62.add_attribute("CashAmt", "UnderlyingCashAmount_t_163022822"); // 1
    Undly_62_set.insert("UnderlyingCashAmount_t_163022822");
    Undly_62.add_attribute("CashTyp", "FIXED"); // 1
    Undly_62_set.insert("FIXED");
    Undly_62.add_attribute("Px", "6113406.930000"); // 1
    Undly_62_set.insert("6113406.930000");
    Undly_62.add_attribute("DirtPx", "9148799.740000"); // 1
    Undly_62_set.insert("9148799.740000");
    Undly_62.add_attribute("EndPx", "13857273.720000"); // 1
    Undly_62_set.insert("13857273.720000");
    Undly_62.add_attribute("StartVal", "UnderlyingStartValue_t_982235375"); // 1
    Undly_62_set.insert("UnderlyingStartValue_t_982235375");
    Undly_62.add_attribute("CurVal", "UnderlyingCurrentValue_t_2123234779"); // 1
    Undly_62_set.insert("UnderlyingCurrentValue_t_2123234779");
    Undly_62.add_attribute("EndVal", "UnderlyingEndValue_t_2110191939"); // 1
    Undly_62_set.insert("UnderlyingEndValue_t_2110191939");
    Undly_62.add_attribute("AdjQty", "14098237.050000"); // 1
    Undly_62_set.insert("14098237.050000");
    Undly_62.add_attribute("FxRate", "13286382.100000"); // 1
    Undly_62_set.insert("13286382.100000");
    Undly_62.add_attribute("FxRateCalc", "M"); // 1
    Undly_62_set.insert("M");
    Undly_62.add_attribute("CapValu", "UnderlyingCapValue_t_1518693611"); // 1
    Undly_62_set.insert("UnderlyingCapValue_t_1518693611");
    Undly_62.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1295740458"); // 1
    Undly_62_set.insert("UnderlyingSettlMethod_t_1295740458");
    Undly_62.add_attribute("PutCall", "1107497634"); // 1
    Undly_62_set.insert("1107497634");
    all_values.push_back(Undly_62_set);
    all_compo_names.insert("Undly_62_set");

    {
      xml_element UndAID_62{"UndAID"};
      multiset<string> UndAID_62_set;
      UndAID_62.add_attribute("AltID", "UnderlyingSecurityAltID_t_2028850777"); // 2
      UndAID_62_set.insert("UnderlyingSecurityAltID_t_2028850777");
      UndAID_62.add_attribute("AltIDSrc", "G"); // 2
      UndAID_62_set.insert("G");
      all_values.push_back(UndAID_62_set);
      all_compo_names.insert("UndAID_62_set");

      Undly_62.add_element(UndAID_62);
    }
    {
      xml_element Stip_100{"Stip"};
      multiset<string> Stip_100_set;
      Stip_100.add_attribute("Typ", "HEP"); // 2
      Stip_100_set.insert("HEP");
      Stip_100.add_attribute("Val", "UnderlyingStipValue_t_1101781451"); // 2
      Stip_100_set.insert("UnderlyingStipValue_t_1101781451");
      all_values.push_back(Stip_100_set);
      all_compo_names.insert("Stip_100_set");

      Undly_62.add_element(Stip_100);
    }
    {
      xml_element Pty_253{"Pty"};
      multiset<string> Pty_253_set;
      Pty_253.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1704629342"); // 2
      Pty_253_set.insert("UnderlyingInstrumentPartyID_t_1704629342");
      Pty_253.add_attribute("Src", "3"); // 2
      Pty_253_set.insert("3");
      Pty_253.add_attribute("R", "47"); // 2
      Pty_253_set.insert("47");
      all_values.push_back(Pty_253_set);
      all_compo_names.insert("Pty_253_set");

      {
        xml_element Sub_253{"Sub"};
        multiset<string> Sub_253_set;
        Sub_253.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1421127524"); // 3
        Sub_253_set.insert("UnderlyingInstrumentPartySubID_t_1421127524");
        Sub_253.add_attribute("Typ", "23"); // 3
        Sub_253_set.insert("23");
        all_values.push_back(Sub_253_set);
        all_compo_names.insert("Sub_253_set");

        Pty_253.add_element(Sub_253);
      }
      Undly_62.add_element(Pty_253);
    }
    elt.add_element(Undly_62);
  } // end Undly
  { // Undly
    xml_element Undly_63{"Undly"};
    multiset<string> Undly_63_set;
    Undly_63.add_attribute("Sym", "UnderlyingSymbol_t_1159122837"); // 1
    Undly_63_set.insert("UnderlyingSymbol_t_1159122837");
    Undly_63.add_attribute("Sfx", "WI"); // 1
    Undly_63_set.insert("WI");
    Undly_63.add_attribute("ID", "UnderlyingSecurityID_t_43894787"); // 1
    Undly_63_set.insert("UnderlyingSecurityID_t_43894787");
    Undly_63.add_attribute("Src", "2"); // 1
    Undly_63_set.insert("2");
    Undly_63.add_attribute("Prod", "4"); // 1
    Undly_63_set.insert("4");
    Undly_63.add_attribute("CFI", "UnderlyingCFICode_t_568256071"); // 1
    Undly_63_set.insert("UnderlyingCFICode_t_568256071");
    Undly_63.add_attribute("SecTyp", "MBS"); // 1
    Undly_63_set.insert("MBS");
    Undly_63.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1375307986"); // 1
    Undly_63_set.insert("UnderlyingSecuritySubType_t_1375307986");
    Undly_63.add_attribute("MMY", "731278893"); // 1
    Undly_63_set.insert("731278893");
    Undly_63.add_attribute("Mat", "UnderlyingMaturityDate_t_1969016775"); // 1
    Undly_63_set.insert("UnderlyingMaturityDate_t_1969016775");
    Undly_63.add_attribute("MatTm", "1986648679"); // 1
    Undly_63_set.insert("1986648679");
    Undly_63.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1646158868"); // 1
    Undly_63_set.insert("UnderlyingCouponPaymentDate_t_1646158868");
    Undly_63.add_attribute("RestrctTyp", "XR"); // 1
    Undly_63_set.insert("XR");
    Undly_63.add_attribute("Snrty", "SR"); // 1
    Undly_63_set.insert("SR");
    Undly_63.add_attribute("NotlPctOut", "16219099.990000"); // 1
    Undly_63_set.insert("16219099.990000");
    Undly_63.add_attribute("OrigNotlPctOut", "11699687.900000"); // 1
    Undly_63_set.insert("11699687.900000");
    Undly_63.add_attribute("AttchPnt", "837404.630000"); // 1
    Undly_63_set.insert("837404.630000");
    Undly_63.add_attribute("DetchPnt", "8030645.610000"); // 1
    Undly_63_set.insert("8030645.610000");
    Undly_63.add_attribute("Issued", "UnderlyingIssueDate_t_51306045"); // 1
    Undly_63_set.insert("UnderlyingIssueDate_t_51306045");
    Undly_63.add_attribute("RepoCollSecTyp", "1602434074"); // 1
    Undly_63_set.insert("1602434074");
    Undly_63.add_attribute("RepoTrm", "2098805019"); // 1
    Undly_63_set.insert("2098805019");
    Undly_63.add_attribute("RepoRt", "11588036.790000"); // 1
    Undly_63_set.insert("11588036.790000");
    Undly_63.add_attribute("Fctr", "14838012.040000"); // 1
    Undly_63_set.insert("14838012.040000");
    Undly_63.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2098224408"); // 1
    Undly_63_set.insert("UnderlyingCreditRating_t_2098224408");
    Undly_63.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_654765324"); // 1
    Undly_63_set.insert("UnderlyingInstrRegistry_t_654765324");
    Undly_63.add_attribute("Ctry", "438099007"); // 1
    Undly_63_set.insert("438099007");
    Undly_63.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1655370102"); // 1
    Undly_63_set.insert("UnderlyingStateOrProvinceOfIssue_t_1655370102");
    Undly_63.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1752406856"); // 1
    Undly_63_set.insert("UnderlyingLocaleOfIssue_t_1752406856");
    Undly_63.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1293919780"); // 1
    Undly_63_set.insert("UnderlyingRedemptionDate_t_1293919780");
    Undly_63.add_attribute("StrkPx", "9290139.780000"); // 1
    Undly_63_set.insert("9290139.780000");
    Undly_63.add_attribute("StrkCcy", "CAN"); // 1
    Undly_63_set.insert("CAN");
    Undly_63.add_attribute("OptA", "744471976"); // 1
    Undly_63_set.insert("744471976");
    Undly_63.add_attribute("Mult", "19034939.750000"); // 1
    Undly_63_set.insert("19034939.750000");
    Undly_63.add_attribute("MultTyp", "1"); // 1
    Undly_63_set.insert("1");
    Undly_63.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_63_set.insert("4");
    Undly_63.add_attribute("UOM", "MMBtu"); // 1
    Undly_63_set.insert("MMBtu");
    Undly_63.add_attribute("UOMQty", "13590954.330000"); // 1
    Undly_63_set.insert("13590954.330000");
    Undly_63.add_attribute("PxUOM", "Bcf"); // 1
    Undly_63_set.insert("Bcf");
    Undly_63.add_attribute("PxUOMQty", "10555452.920000"); // 1
    Undly_63_set.insert("10555452.920000");
    Undly_63.add_attribute("TmUnit", "S"); // 1
    Undly_63_set.insert("S");
    Undly_63.add_attribute("ExerStyle", "2"); // 1
    Undly_63_set.insert("2");
    Undly_63.add_attribute("CpnRt", "5542205.120000"); // 1
    Undly_63_set.insert("5542205.120000");
    Undly_63.add_attribute("Exch", "UnderlyingSecurityExchange_t_240405412"); // 1
    Undly_63_set.insert("UnderlyingSecurityExchange_t_240405412");
    Undly_63.add_attribute("Issr", "UnderlyingIssuer_t_854257375"); // 1
    Undly_63_set.insert("UnderlyingIssuer_t_854257375");
    Undly_63.add_attribute("EncUndIssrLen", "28646863"); // 1
    Undly_63_set.insert("28646863");
    Undly_63.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1410374203"); // 1
    Undly_63_set.insert("EncodedUnderlyingIssuer_t_1410374203");
    Undly_63.add_attribute("Desc", "UnderlyingSecurityDesc_t_937997838"); // 1
    Undly_63_set.insert("UnderlyingSecurityDesc_t_937997838");
    Undly_63.add_attribute("EncUndSecDescLen", "831711424"); // 1
    Undly_63_set.insert("831711424");
    Undly_63.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1461680248"); // 1
    Undly_63_set.insert("EncodedUnderlyingSecurityDesc_t_1461680248");
    Undly_63.add_attribute("CPPgm", "UnderlyingCPProgram_t_392948265"); // 1
    Undly_63_set.insert("UnderlyingCPProgram_t_392948265");
    Undly_63.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_783032795"); // 1
    Undly_63_set.insert("UnderlyingCPRegType_t_783032795");
    Undly_63.add_attribute("AllocPct", "4730002.790000"); // 1
    Undly_63_set.insert("4730002.790000");
    Undly_63.add_attribute("Ccy", "CHF"); // 1
    Undly_63_set.insert("CHF");
    Undly_63.add_attribute("Qty", "11277656.030000"); // 1
    Undly_63_set.insert("11277656.030000");
    Undly_63.add_attribute("SettlTyp", "2"); // 1
    Undly_63_set.insert("2");
    Undly_63.add_attribute("CashAmt", "UnderlyingCashAmount_t_241660009"); // 1
    Undly_63_set.insert("UnderlyingCashAmount_t_241660009");
    Undly_63.add_attribute("CashTyp", "FIXED"); // 1
    Undly_63_set.insert("FIXED");
    Undly_63.add_attribute("Px", "14612846.080000"); // 1
    Undly_63_set.insert("14612846.080000");
    Undly_63.add_attribute("DirtPx", "11706739.870000"); // 1
    Undly_63_set.insert("11706739.870000");
    Undly_63.add_attribute("EndPx", "4448043.520000"); // 1
    Undly_63_set.insert("4448043.520000");
    Undly_63.add_attribute("StartVal", "UnderlyingStartValue_t_1766843577"); // 1
    Undly_63_set.insert("UnderlyingStartValue_t_1766843577");
    Undly_63.add_attribute("CurVal", "UnderlyingCurrentValue_t_1915145963"); // 1
    Undly_63_set.insert("UnderlyingCurrentValue_t_1915145963");
    Undly_63.add_attribute("EndVal", "UnderlyingEndValue_t_200814679"); // 1
    Undly_63_set.insert("UnderlyingEndValue_t_200814679");
    Undly_63.add_attribute("AdjQty", "18292069.990000"); // 1
    Undly_63_set.insert("18292069.990000");
    Undly_63.add_attribute("FxRate", "7335299.150000"); // 1
    Undly_63_set.insert("7335299.150000");
    Undly_63.add_attribute("FxRateCalc", "D"); // 1
    Undly_63_set.insert("D");
    Undly_63.add_attribute("CapValu", "UnderlyingCapValue_t_1040818785"); // 1
    Undly_63_set.insert("UnderlyingCapValue_t_1040818785");
    Undly_63.add_attribute("SetMeth", "UnderlyingSettlMethod_t_927221852"); // 1
    Undly_63_set.insert("UnderlyingSettlMethod_t_927221852");
    Undly_63.add_attribute("PutCall", "1580626369"); // 1
    Undly_63_set.insert("1580626369");
    all_values.push_back(Undly_63_set);
    all_compo_names.insert("Undly_63_set");

    {
      xml_element UndAID_63{"UndAID"};
      multiset<string> UndAID_63_set;
      UndAID_63.add_attribute("AltID", "UnderlyingSecurityAltID_t_73963698"); // 2
      UndAID_63_set.insert("UnderlyingSecurityAltID_t_73963698");
      UndAID_63.add_attribute("AltIDSrc", "A"); // 2
      UndAID_63_set.insert("A");
      all_values.push_back(UndAID_63_set);
      all_compo_names.insert("UndAID_63_set");

      Undly_63.add_element(UndAID_63);
    }
    {
      xml_element Stip_101{"Stip"};
      multiset<string> Stip_101_set;
      Stip_101.add_attribute("Typ", "AMT"); // 2
      Stip_101_set.insert("AMT");
      Stip_101.add_attribute("Val", "UnderlyingStipValue_t_314369110"); // 2
      Stip_101_set.insert("UnderlyingStipValue_t_314369110");
      all_values.push_back(Stip_101_set);
      all_compo_names.insert("Stip_101_set");

      Undly_63.add_element(Stip_101);
    }
    {
      xml_element Pty_254{"Pty"};
      multiset<string> Pty_254_set;
      Pty_254.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1814336196"); // 2
      Pty_254_set.insert("UnderlyingInstrumentPartyID_t_1814336196");
      Pty_254.add_attribute("Src", "F"); // 2
      Pty_254_set.insert("F");
      Pty_254.add_attribute("R", "44"); // 2
      Pty_254_set.insert("44");
      all_values.push_back(Pty_254_set);
      all_compo_names.insert("Pty_254_set");

      {
        xml_element Sub_254{"Sub"};
        multiset<string> Sub_254_set;
        Sub_254.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_604850386"); // 3
        Sub_254_set.insert("UnderlyingInstrumentPartySubID_t_604850386");
        Sub_254.add_attribute("Typ", "31"); // 3
        Sub_254_set.insert("31");
        all_values.push_back(Sub_254_set);
        all_compo_names.insert("Sub_254_set");

        Pty_254.add_element(Sub_254);
      }
      Undly_63.add_element(Pty_254);
    }
    elt.add_element(Undly_63);
  } // end Undly
  { // TxtLn
    xml_element TxtLn_3{"TxtLn"};
    multiset<string> TxtLn_3_set;
    TxtLn_3.add_attribute("Txt", "Text_t_997798651"); // 1
    TxtLn_3_set.insert("Text_t_997798651");
    TxtLn_3.add_attribute("EncTxtLen", "1630754315"); // 1
    TxtLn_3_set.insert("1630754315");
    TxtLn_3.add_attribute("EncTxt", "EncodedText_t_1511940192"); // 1
    TxtLn_3_set.insert("EncodedText_t_1511940192");
    all_values.push_back(TxtLn_3_set);
    all_compo_names.insert("TxtLn_3_set");

    elt.add_element(TxtLn_3);
  } // end TxtLn
  { // TxtLn
    xml_element TxtLn_4{"TxtLn"};
    multiset<string> TxtLn_4_set;
    TxtLn_4.add_attribute("Txt", "Text_t_727064472"); // 1
    TxtLn_4_set.insert("Text_t_727064472");
    TxtLn_4.add_attribute("EncTxtLen", "217044222"); // 1
    TxtLn_4_set.insert("217044222");
    TxtLn_4.add_attribute("EncTxt", "EncodedText_t_492222148"); // 1
    TxtLn_4_set.insert("EncodedText_t_492222148");
    all_values.push_back(TxtLn_4_set);
    all_compo_names.insert("TxtLn_4_set");

    elt.add_element(TxtLn_4);
  } // end TxtLn
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
