#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecListReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_673326421"); // 0
  SecurityListRequest_message_t_0.insert("SecurityReqID_t_673326421");
  elt.add_attribute("ListReqTyp", "5"); // 0
  SecurityListRequest_message_t_0.insert("5");
  elt.add_attribute("ListID", "SecurityListID_t_2144511527"); // 0
  SecurityListRequest_message_t_0.insert("SecurityListID_t_2144511527");
  elt.add_attribute("ListTyp", "3"); // 0
  SecurityListRequest_message_t_0.insert("3");
  elt.add_attribute("LstTypSrc", "3"); // 0
  SecurityListRequest_message_t_0.insert("3");
  elt.add_attribute("MktID", "MarketID_t_1823334044"); // 0
  SecurityListRequest_message_t_0.insert("MarketID_t_1823334044");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_441098735"); // 0
  SecurityListRequest_message_t_0.insert("MarketSegmentID_t_441098735");
  elt.add_attribute("Ccy", "GBP"); // 0
  SecurityListRequest_message_t_0.insert("GBP");
  elt.add_attribute("Txt", "Text_t_1141602493"); // 0
  SecurityListRequest_message_t_0.insert("Text_t_1141602493");
  elt.add_attribute("EncTxtLen", "1382207240"); // 0
  SecurityListRequest_message_t_0.insert("1382207240");
  elt.add_attribute("EncTxt", "EncodedText_t_214213186"); // 0
  SecurityListRequest_message_t_0.insert("EncodedText_t_214213186");
  elt.add_attribute("SesID", "5"); // 0
  SecurityListRequest_message_t_0.insert("5");
  elt.add_attribute("SesSub", "6"); // 0
  SecurityListRequest_message_t_0.insert("6");
  elt.add_attribute("SubReqTyp", "2"); // 0
  SecurityListRequest_message_t_0.insert("2");
  all_values.push_back(SecurityListRequest_message_t_0);
  all_compo_names.insert("SecurityListRequest_message_t");

  { // Hdr
    xml_element Hdr_84{"Hdr"};
    multiset<string> Hdr_84_set;
    Hdr_84.add_attribute("SeqNum", "1995190385"); // 1
    Hdr_84_set.insert("1995190385");
    Hdr_84.add_attribute("SID", "SenderCompID_t_58367820"); // 1
    Hdr_84_set.insert("SenderCompID_t_58367820");
    Hdr_84.add_attribute("TID", "TargetCompID_t_538951962"); // 1
    Hdr_84_set.insert("TargetCompID_t_538951962");
    Hdr_84.add_attribute("OBID", "OnBehalfOfCompID_t_122069068"); // 1
    Hdr_84_set.insert("OnBehalfOfCompID_t_122069068");
    Hdr_84.add_attribute("D2ID", "DeliverToCompID_t_1165096867"); // 1
    Hdr_84_set.insert("DeliverToCompID_t_1165096867");
    Hdr_84.add_attribute("SSub", "SenderSubID_t_1873599175"); // 1
    Hdr_84_set.insert("SenderSubID_t_1873599175");
    Hdr_84.add_attribute("SLoc", "SenderLocationID_t_1332121903"); // 1
    Hdr_84_set.insert("SenderLocationID_t_1332121903");
    Hdr_84.add_attribute("TSub", "TargetSubID_t_1096552652"); // 1
    Hdr_84_set.insert("TargetSubID_t_1096552652");
    Hdr_84.add_attribute("TLoc", "TargetLocationID_t_2021005644"); // 1
    Hdr_84_set.insert("TargetLocationID_t_2021005644");
    Hdr_84.add_attribute("OBSub", "OnBehalfOfSubID_t_362541916"); // 1
    Hdr_84_set.insert("OnBehalfOfSubID_t_362541916");
    Hdr_84.add_attribute("OBLoc", "OnBehalfOfLocationID_t_786185036"); // 1
    Hdr_84_set.insert("OnBehalfOfLocationID_t_786185036");
    Hdr_84.add_attribute("D2Sub", "DeliverToSubID_t_1417374914"); // 1
    Hdr_84_set.insert("DeliverToSubID_t_1417374914");
    Hdr_84.add_attribute("D2Loc", "DeliverToLocationID_t_428455561"); // 1
    Hdr_84_set.insert("DeliverToLocationID_t_428455561");
    Hdr_84.add_attribute("PosDup", "N"); // 1
    Hdr_84_set.insert("N");
    Hdr_84.add_attribute("PosRsnd", "Y"); // 1
    Hdr_84_set.insert("Y");
    Hdr_84.add_attribute("Snt", "SendingTime_t_323568048"); // 1
    Hdr_84_set.insert("SendingTime_t_323568048");
    Hdr_84.add_attribute("OrigSnt", "OrigSendingTime_t_519721166"); // 1
    Hdr_84_set.insert("OrigSendingTime_t_519721166");
    Hdr_84.add_attribute("MsgEncd", "MessageEncoding_t_480772676"); // 1
    Hdr_84_set.insert("MessageEncoding_t_480772676");
    all_values.push_back(Hdr_84_set);
    all_compo_names.insert("Hdr_84_set");

    {
      xml_element Hop_84{"Hop"};
      multiset<string> Hop_84_set;
      Hop_84.add_attribute("ID", "HopCompID_t_320595928"); // 2
      Hop_84_set.insert("HopCompID_t_320595928");
      Hop_84.add_attribute("Ref", "871766408"); // 2
      Hop_84_set.insert("871766408");
      Hop_84.add_attribute("Snt", "HopSendingTime_t_1718952331"); // 2
      Hop_84_set.insert("HopSendingTime_t_1718952331");
      all_values.push_back(Hop_84_set);
      all_compo_names.insert("Hop_84_set");

      Hdr_84.add_element(Hop_84);
    }
    elt.add_element(Hdr_84);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_78{"Instrmt"};
    multiset<string> Instrmt_78_set;
    Instrmt_78.add_attribute("Sym", "Symbol_t_2143929972"); // 1
    Instrmt_78_set.insert("Symbol_t_2143929972");
    Instrmt_78.add_attribute("Sfx", "CD"); // 1
    Instrmt_78_set.insert("CD");
    Instrmt_78.add_attribute("ID", "SecurityID_t_482373007"); // 1
    Instrmt_78_set.insert("SecurityID_t_482373007");
    Instrmt_78.add_attribute("Src", "D"); // 1
    Instrmt_78_set.insert("D");
    Instrmt_78.add_attribute("Prod", "1"); // 1
    Instrmt_78_set.insert("1");
    Instrmt_78.add_attribute("ProdCmplx", "ProductComplex_t_1864580247"); // 1
    Instrmt_78_set.insert("ProductComplex_t_1864580247");
    Instrmt_78.add_attribute("SecGrp", "SecurityGroup_t_1677599386"); // 1
    Instrmt_78_set.insert("SecurityGroup_t_1677599386");
    Instrmt_78.add_attribute("CFI", "CFICode_t_2053635335"); // 1
    Instrmt_78_set.insert("CFICode_t_2053635335");
    Instrmt_78.add_attribute("SecTyp", "TERM"); // 1
    Instrmt_78_set.insert("TERM");
    Instrmt_78.add_attribute("SubTyp", "SecuritySubType_t_1981767054"); // 1
    Instrmt_78_set.insert("SecuritySubType_t_1981767054");
    Instrmt_78.add_attribute("MMY", "1901342073"); // 1
    Instrmt_78_set.insert("1901342073");
    Instrmt_78.add_attribute("MatDt", "MaturityDate_t_2123157271"); // 1
    Instrmt_78_set.insert("MaturityDate_t_2123157271");
    Instrmt_78.add_attribute("MatTm", "373235368"); // 1
    Instrmt_78_set.insert("373235368");
    Instrmt_78.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2023411141"); // 1
    Instrmt_78_set.insert("SettleOnOpenFlag_t_2023411141");
    Instrmt_78.add_attribute("AsgnMeth", "1140770490"); // 1
    Instrmt_78_set.insert("1140770490");
    Instrmt_78.add_attribute("Status", "2"); // 1
    Instrmt_78_set.insert("2");
    Instrmt_78.add_attribute("CpnPmt", "CouponPaymentDate_t_1208049397"); // 1
    Instrmt_78_set.insert("CouponPaymentDate_t_1208049397");
    Instrmt_78.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_78_set.insert("MM");
    Instrmt_78.add_attribute("Snrty", "SD"); // 1
    Instrmt_78_set.insert("SD");
    Instrmt_78.add_attribute("NotlPctOut", "15705913.130000"); // 1
    Instrmt_78_set.insert("15705913.130000");
    Instrmt_78.add_attribute("OrigNotlPctOut", "8760245.300000"); // 1
    Instrmt_78_set.insert("8760245.300000");
    Instrmt_78.add_attribute("AttchPnt", "13902478.060000"); // 1
    Instrmt_78_set.insert("13902478.060000");
    Instrmt_78.add_attribute("DetchPnt", "19990468.750000"); // 1
    Instrmt_78_set.insert("19990468.750000");
    Instrmt_78.add_attribute("Issued", "IssueDate_t_722419274"); // 1
    Instrmt_78_set.insert("IssueDate_t_722419274");
    Instrmt_78.add_attribute("RepoCollSecTyp", "1753811317"); // 1
    Instrmt_78_set.insert("1753811317");
    Instrmt_78.add_attribute("RepoTrm", "175131275"); // 1
    Instrmt_78_set.insert("175131275");
    Instrmt_78.add_attribute("RepoRt", "12421404.400000"); // 1
    Instrmt_78_set.insert("12421404.400000");
    Instrmt_78.add_attribute("Fctr", "871003.460000"); // 1
    Instrmt_78_set.insert("871003.460000");
    Instrmt_78.add_attribute("CrdRtg", "CreditRating_t_495727203"); // 1
    Instrmt_78_set.insert("CreditRating_t_495727203");
    Instrmt_78.add_attribute("Rgstry", "InstrRegistry_t_2113906849"); // 1
    Instrmt_78_set.insert("InstrRegistry_t_2113906849");
    Instrmt_78.add_attribute("IssuCtry", "1806052677"); // 1
    Instrmt_78_set.insert("1806052677");
    Instrmt_78.add_attribute("StPrv", "StateOrProvinceOfIssue_t_492173527"); // 1
    Instrmt_78_set.insert("StateOrProvinceOfIssue_t_492173527");
    Instrmt_78.add_attribute("Lcl", "LocaleOfIssue_t_1279288345"); // 1
    Instrmt_78_set.insert("LocaleOfIssue_t_1279288345");
    Instrmt_78.add_attribute("Redeem", "RedemptionDate_t_140942036"); // 1
    Instrmt_78_set.insert("RedemptionDate_t_140942036");
    Instrmt_78.add_attribute("StrkPx", "19555597.270000"); // 1
    Instrmt_78_set.insert("19555597.270000");
    Instrmt_78.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_78_set.insert("USD");
    Instrmt_78.add_attribute("StrkMult", "14856754.650000"); // 1
    Instrmt_78_set.insert("14856754.650000");
    Instrmt_78.add_attribute("StrkValu", "14924240.220000"); // 1
    Instrmt_78_set.insert("14924240.220000");
    Instrmt_78.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_78_set.insert("3");
    Instrmt_78.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_78_set.insert("2");
    Instrmt_78.add_attribute("StrkPxBndryPrcsn", "12462824.470000"); // 1
    Instrmt_78_set.insert("12462824.470000");
    Instrmt_78.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_78_set.insert("2");
    Instrmt_78.add_attribute("OptAt", "1693194239"); // 1
    Instrmt_78_set.insert("1693194239");
    Instrmt_78.add_attribute("Mult", "11222099.400000"); // 1
    Instrmt_78_set.insert("11222099.400000");
    Instrmt_78.add_attribute("MultTyp", "1"); // 1
    Instrmt_78_set.insert("1");
    Instrmt_78.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_78_set.insert("0");
    Instrmt_78.add_attribute("MinPxIncr", "1827756.890000"); // 1
    Instrmt_78_set.insert("1827756.890000");
    Instrmt_78.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_981628045"); // 1
    Instrmt_78_set.insert("MinPriceIncrementAmount_t_981628045");
    Instrmt_78.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_78_set.insert("oz_tr");
    Instrmt_78.add_attribute("UOMQty", "17533670.030000"); // 1
    Instrmt_78_set.insert("17533670.030000");
    Instrmt_78.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_78_set.insert("Alw");
    Instrmt_78.add_attribute("PxUOMQty", "10081821.840000"); // 1
    Instrmt_78_set.insert("10081821.840000");
    Instrmt_78.add_attribute("SettlMeth", "C"); // 1
    Instrmt_78_set.insert("C");
    Instrmt_78.add_attribute("ExerStyle", "1"); // 1
    Instrmt_78_set.insert("1");
    Instrmt_78.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_78_set.insert("1");
    Instrmt_78.add_attribute("OptPayAmt", "OptPayoutAmount_t_1780061505"); // 1
    Instrmt_78_set.insert("OptPayoutAmount_t_1780061505");
    Instrmt_78.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_78_set.insert("INT");
    Instrmt_78.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_78_set.insert("EQTY");
    Instrmt_78.add_attribute("ListMeth", "1"); // 1
    Instrmt_78_set.insert("1");
    Instrmt_78.add_attribute("CapPx", "16411518.430000"); // 1
    Instrmt_78_set.insert("16411518.430000");
    Instrmt_78.add_attribute("FlrPx", "3601792.290000"); // 1
    Instrmt_78_set.insert("3601792.290000");
    Instrmt_78.add_attribute("PutCall", "0"); // 1
    Instrmt_78_set.insert("0");
    Instrmt_78.add_attribute("FlexInd", "true"); // 1
    Instrmt_78_set.insert("true");
    Instrmt_78.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_78_set.insert("true");
    Instrmt_78.add_attribute("TmUnit", "D"); // 1
    Instrmt_78_set.insert("D");
    Instrmt_78.add_attribute("CpnRt", "2117452.270000"); // 1
    Instrmt_78_set.insert("2117452.270000");
    Instrmt_78.add_attribute("Exch", "SecurityExchange_t_359159902"); // 1
    Instrmt_78_set.insert("SecurityExchange_t_359159902");
    Instrmt_78.add_attribute("PosLmt", "1914230133"); // 1
    Instrmt_78_set.insert("1914230133");
    Instrmt_78.add_attribute("NTPosLmt", "1704169249"); // 1
    Instrmt_78_set.insert("1704169249");
    Instrmt_78.add_attribute("Issr", "Issuer_t_134504340"); // 1
    Instrmt_78_set.insert("Issuer_t_134504340");
    Instrmt_78.add_attribute("EncIssrLen", "1086705357"); // 1
    Instrmt_78_set.insert("1086705357");
    Instrmt_78.add_attribute("EncIssr", "EncodedIssuer_t_802968048"); // 1
    Instrmt_78_set.insert("EncodedIssuer_t_802968048");
    Instrmt_78.add_attribute("Desc", "SecurityDesc_t_2033006050"); // 1
    Instrmt_78_set.insert("SecurityDesc_t_2033006050");
    Instrmt_78.add_attribute("EncSecDescLen", "632415948"); // 1
    Instrmt_78_set.insert("632415948");
    Instrmt_78.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1925177988"); // 1
    Instrmt_78_set.insert("EncodedSecurityDesc_t_1925177988");
    Instrmt_78.add_attribute("Pool", "Pool_t_777310953"); // 1
    Instrmt_78_set.insert("Pool_t_777310953");
    Instrmt_78.add_attribute("CSetMo", "277477435"); // 1
    Instrmt_78_set.insert("277477435");
    Instrmt_78.add_attribute("CPPgm", "1"); // 1
    Instrmt_78_set.insert("1");
    Instrmt_78.add_attribute("CPRegT", "CPRegType_t_1758938999"); // 1
    Instrmt_78_set.insert("CPRegType_t_1758938999");
    Instrmt_78.add_attribute("Dated", "DatedDate_t_2042895462"); // 1
    Instrmt_78_set.insert("DatedDate_t_2042895462");
    Instrmt_78.add_attribute("IntAcrl", "InterestAccrualDate_t_1713837033"); // 1
    Instrmt_78_set.insert("InterestAccrualDate_t_1713837033");
    all_values.push_back(Instrmt_78_set);
    all_compo_names.insert("Instrmt_78_set");

    {
      xml_element AID_81{"AID"};
      multiset<string> AID_81_set;
      AID_81.add_attribute("AltID", "SecurityAltID_t_1469107926"); // 2
      AID_81_set.insert("SecurityAltID_t_1469107926");
      AID_81.add_attribute("AltIDSrc", "B"); // 2
      AID_81_set.insert("B");
      all_values.push_back(AID_81_set);
      all_compo_names.insert("AID_81_set");

      Instrmt_78.add_element(AID_81);
    }
    {
      xml_element SecXML_81{"SecXML"};
      multiset<string> SecXML_81_set;
      SecXML_81.add_attribute("Schema", "SecurityXMLSchema_t_1171283615"); // 2
      SecXML_81_set.insert("SecurityXMLSchema_t_1171283615");
      all_values.push_back(SecXML_81_set);
      all_compo_names.insert("SecXML_81_set");

      Instrmt_78.add_element(SecXML_81);
    }
    {
      xml_element Evnt_81{"Evnt"};
      multiset<string> Evnt_81_set;
      Evnt_81.add_attribute("EventTyp", "8"); // 2
      Evnt_81_set.insert("8");
      Evnt_81.add_attribute("Dt", "EventDate_t_1518103852"); // 2
      Evnt_81_set.insert("EventDate_t_1518103852");
      Evnt_81.add_attribute("Tm", "EventTime_t_803861472"); // 2
      Evnt_81_set.insert("EventTime_t_803861472");
      Evnt_81.add_attribute("Px", "14289411.230000"); // 2
      Evnt_81_set.insert("14289411.230000");
      Evnt_81.add_attribute("Txt", "EventText_t_72230404"); // 2
      Evnt_81_set.insert("EventText_t_72230404");
      all_values.push_back(Evnt_81_set);
      all_compo_names.insert("Evnt_81_set");

      Instrmt_78.add_element(Evnt_81);
    }
    {
      xml_element Pty_407{"Pty"};
      multiset<string> Pty_407_set;
      Pty_407.add_attribute("ID", "InstrumentPartyID_t_932166533"); // 2
      Pty_407_set.insert("InstrumentPartyID_t_932166533");
      Pty_407.add_attribute("Src", "5"); // 2
      Pty_407_set.insert("5");
      Pty_407.add_attribute("R", "64"); // 2
      Pty_407_set.insert("64");
      all_values.push_back(Pty_407_set);
      all_compo_names.insert("Pty_407_set");

      {
        xml_element Sub_407{"Sub"};
        multiset<string> Sub_407_set;
        Sub_407.add_attribute("ID", "InstrumentPartySubID_t_1552645122"); // 3
        Sub_407_set.insert("InstrumentPartySubID_t_1552645122");
        Sub_407.add_attribute("Typ", "4"); // 3
        Sub_407_set.insert("4");
        all_values.push_back(Sub_407_set);
        all_compo_names.insert("Sub_407_set");

        Pty_407.add_element(Sub_407);
      }
      Instrmt_78.add_element(Pty_407);
    }
    {
      xml_element CmplxEvnt_78{"CmplxEvnt"};
      multiset<string> CmplxEvnt_78_set;
      CmplxEvnt_78.add_attribute("Typ", "6"); // 2
      CmplxEvnt_78_set.insert("6");
      CmplxEvnt_78.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1981199790"); // 2
      CmplxEvnt_78_set.insert("ComplexOptPayoutAmount_t_1981199790");
      CmplxEvnt_78.add_attribute("Px", "19073110.860000"); // 2
      CmplxEvnt_78_set.insert("19073110.860000");
      CmplxEvnt_78.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_78_set.insert("3");
      CmplxEvnt_78.add_attribute("PxBndryPrcsn", "17479462.750000"); // 2
      CmplxEvnt_78_set.insert("17479462.750000");
      CmplxEvnt_78.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_78_set.insert("3");
      CmplxEvnt_78.add_attribute("Cond", "1"); // 2
      CmplxEvnt_78_set.insert("1");
      all_values.push_back(CmplxEvnt_78_set);
      all_compo_names.insert("CmplxEvnt_78_set");

      {
        xml_element EvntDts_78{"EvntDts"};
        multiset<string> EvntDts_78_set;
        EvntDts_78.add_attribute("StartDt", "ComplexEventStartDate_t_687167984"); // 3
        EvntDts_78_set.insert("ComplexEventStartDate_t_687167984");
        EvntDts_78.add_attribute("EndDt", "ComplexEventEndDate_t_119481087"); // 3
        EvntDts_78_set.insert("ComplexEventEndDate_t_119481087");
        all_values.push_back(EvntDts_78_set);
        all_compo_names.insert("EvntDts_78_set");

        {
          xml_element EvntTms_78{"EvntTms"};
          multiset<string> EvntTms_78_set;
          EvntTms_78.add_attribute("StartTm", "1312717544"); // 4
          EvntTms_78_set.insert("1312717544");
          EvntTms_78.add_attribute("EndTm", "1319583933"); // 4
          EvntTms_78_set.insert("1319583933");
          all_values.push_back(EvntTms_78_set);
          all_compo_names.insert("EvntTms_78_set");

          EvntDts_78.add_element(EvntTms_78);
        }
        CmplxEvnt_78.add_element(EvntDts_78);
      }
      Instrmt_78.add_element(CmplxEvnt_78);
    }
    elt.add_element(Instrmt_78);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_13{"InstrmtExt"};
    multiset<string> InstrmtExt_13_set;
    InstrmtExt_13.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_13_set.insert("2");
    InstrmtExt_13.add_attribute("PctAtRisk", "20900284.980000"); // 1
    InstrmtExt_13_set.insert("20900284.980000");
    all_values.push_back(InstrmtExt_13_set);
    all_compo_names.insert("InstrmtExt_13_set");

    {
      xml_element Attrb_23{"Attrb"};
      multiset<string> Attrb_23_set;
      Attrb_23.add_attribute("Typ", "28"); // 2
      Attrb_23_set.insert("28");
      Attrb_23.add_attribute("Val", "InstrAttribValue_t_2005129105"); // 2
      Attrb_23_set.insert("InstrAttribValue_t_2005129105");
      all_values.push_back(Attrb_23_set);
      all_compo_names.insert("Attrb_23_set");

      InstrmtExt_13.add_element(Attrb_23);
    }
    elt.add_element(InstrmtExt_13);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_28{"FinDetls"};
    multiset<string> FinDetls_28_set;
    FinDetls_28.add_attribute("AgmtDesc", "AgreementDesc_t_1701483849"); // 1
    FinDetls_28_set.insert("AgreementDesc_t_1701483849");
    FinDetls_28.add_attribute("AgmtID", "AgreementID_t_1492473182"); // 1
    FinDetls_28_set.insert("AgreementID_t_1492473182");
    FinDetls_28.add_attribute("AgmtDt", "AgreementDate_t_1571482490"); // 1
    FinDetls_28_set.insert("AgreementDate_t_1571482490");
    FinDetls_28.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_28_set.insert("CAN");
    FinDetls_28.add_attribute("TrmTyp", "2"); // 1
    FinDetls_28_set.insert("2");
    FinDetls_28.add_attribute("StartDt", "StartDate_t_777320608"); // 1
    FinDetls_28_set.insert("StartDate_t_777320608");
    FinDetls_28.add_attribute("EndDt", "EndDate_t_1766687385"); // 1
    FinDetls_28_set.insert("EndDate_t_1766687385");
    FinDetls_28.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_28_set.insert("2");
    FinDetls_28.add_attribute("MgnRatio", "587780.830000"); // 1
    FinDetls_28_set.insert("587780.830000");
    all_values.push_back(FinDetls_28_set);
    all_compo_names.insert("FinDetls_28_set");

    elt.add_element(FinDetls_28);
  } // end FinDetls
  { // Undly
    xml_element Undly_112{"Undly"};
    multiset<string> Undly_112_set;
    Undly_112.add_attribute("Sym", "UnderlyingSymbol_t_183826815"); // 1
    Undly_112_set.insert("UnderlyingSymbol_t_183826815");
    Undly_112.add_attribute("Sfx", "WI"); // 1
    Undly_112_set.insert("WI");
    Undly_112.add_attribute("ID", "UnderlyingSecurityID_t_123843776"); // 1
    Undly_112_set.insert("UnderlyingSecurityID_t_123843776");
    Undly_112.add_attribute("Src", "E"); // 1
    Undly_112_set.insert("E");
    Undly_112.add_attribute("Prod", "6"); // 1
    Undly_112_set.insert("6");
    Undly_112.add_attribute("CFI", "UnderlyingCFICode_t_1057374676"); // 1
    Undly_112_set.insert("UnderlyingCFICode_t_1057374676");
    Undly_112.add_attribute("SecTyp", "TBILL"); // 1
    Undly_112_set.insert("TBILL");
    Undly_112.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_289297050"); // 1
    Undly_112_set.insert("UnderlyingSecuritySubType_t_289297050");
    Undly_112.add_attribute("MMY", "202581830"); // 1
    Undly_112_set.insert("202581830");
    Undly_112.add_attribute("Mat", "UnderlyingMaturityDate_t_1170650707"); // 1
    Undly_112_set.insert("UnderlyingMaturityDate_t_1170650707");
    Undly_112.add_attribute("MatTm", "1753293737"); // 1
    Undly_112_set.insert("1753293737");
    Undly_112.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1629776972"); // 1
    Undly_112_set.insert("UnderlyingCouponPaymentDate_t_1629776972");
    Undly_112.add_attribute("RestrctTyp", "XR"); // 1
    Undly_112_set.insert("XR");
    Undly_112.add_attribute("Snrty", "SB"); // 1
    Undly_112_set.insert("SB");
    Undly_112.add_attribute("NotlPctOut", "7950108.690000"); // 1
    Undly_112_set.insert("7950108.690000");
    Undly_112.add_attribute("OrigNotlPctOut", "10299189.760000"); // 1
    Undly_112_set.insert("10299189.760000");
    Undly_112.add_attribute("AttchPnt", "17699502.520000"); // 1
    Undly_112_set.insert("17699502.520000");
    Undly_112.add_attribute("DetchPnt", "7375557.190000"); // 1
    Undly_112_set.insert("7375557.190000");
    Undly_112.add_attribute("Issued", "UnderlyingIssueDate_t_479496697"); // 1
    Undly_112_set.insert("UnderlyingIssueDate_t_479496697");
    Undly_112.add_attribute("RepoCollSecTyp", "1627595709"); // 1
    Undly_112_set.insert("1627595709");
    Undly_112.add_attribute("RepoTrm", "291555920"); // 1
    Undly_112_set.insert("291555920");
    Undly_112.add_attribute("RepoRt", "19719698.790000"); // 1
    Undly_112_set.insert("19719698.790000");
    Undly_112.add_attribute("Fctr", "10515945.520000"); // 1
    Undly_112_set.insert("10515945.520000");
    Undly_112.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1314664047"); // 1
    Undly_112_set.insert("UnderlyingCreditRating_t_1314664047");
    Undly_112.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_73069764"); // 1
    Undly_112_set.insert("UnderlyingInstrRegistry_t_73069764");
    Undly_112.add_attribute("Ctry", "1646877009"); // 1
    Undly_112_set.insert("1646877009");
    Undly_112.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2091984655"); // 1
    Undly_112_set.insert("UnderlyingStateOrProvinceOfIssue_t_2091984655");
    Undly_112.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1839757150"); // 1
    Undly_112_set.insert("UnderlyingLocaleOfIssue_t_1839757150");
    Undly_112.add_attribute("Redeem", "UnderlyingRedemptionDate_t_898537291"); // 1
    Undly_112_set.insert("UnderlyingRedemptionDate_t_898537291");
    Undly_112.add_attribute("StrkPx", "32790.900000"); // 1
    Undly_112_set.insert("32790.900000");
    Undly_112.add_attribute("StrkCcy", "CAN"); // 1
    Undly_112_set.insert("CAN");
    Undly_112.add_attribute("OptA", "984666492"); // 1
    Undly_112_set.insert("984666492");
    Undly_112.add_attribute("Mult", "16550350.680000"); // 1
    Undly_112_set.insert("16550350.680000");
    Undly_112.add_attribute("MultTyp", "0"); // 1
    Undly_112_set.insert("0");
    Undly_112.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_112_set.insert("4");
    Undly_112.add_attribute("UOM", "lbs"); // 1
    Undly_112_set.insert("lbs");
    Undly_112.add_attribute("UOMQty", "940568.280000"); // 1
    Undly_112_set.insert("940568.280000");
    Undly_112.add_attribute("PxUOM", "t"); // 1
    Undly_112_set.insert("t");
    Undly_112.add_attribute("PxUOMQty", "7675079.260000"); // 1
    Undly_112_set.insert("7675079.260000");
    Undly_112.add_attribute("TmUnit", "S"); // 1
    Undly_112_set.insert("S");
    Undly_112.add_attribute("ExerStyle", "0"); // 1
    Undly_112_set.insert("0");
    Undly_112.add_attribute("CpnRt", "2498012.500000"); // 1
    Undly_112_set.insert("2498012.500000");
    Undly_112.add_attribute("Exch", "UnderlyingSecurityExchange_t_975042578"); // 1
    Undly_112_set.insert("UnderlyingSecurityExchange_t_975042578");
    Undly_112.add_attribute("Issr", "UnderlyingIssuer_t_1134534421"); // 1
    Undly_112_set.insert("UnderlyingIssuer_t_1134534421");
    Undly_112.add_attribute("EncUndIssrLen", "1044812119"); // 1
    Undly_112_set.insert("1044812119");
    Undly_112.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2004961555"); // 1
    Undly_112_set.insert("EncodedUnderlyingIssuer_t_2004961555");
    Undly_112.add_attribute("Desc", "UnderlyingSecurityDesc_t_757001025"); // 1
    Undly_112_set.insert("UnderlyingSecurityDesc_t_757001025");
    Undly_112.add_attribute("EncUndSecDescLen", "1782367838"); // 1
    Undly_112_set.insert("1782367838");
    Undly_112.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_336974604"); // 1
    Undly_112_set.insert("EncodedUnderlyingSecurityDesc_t_336974604");
    Undly_112.add_attribute("CPPgm", "UnderlyingCPProgram_t_237113086"); // 1
    Undly_112_set.insert("UnderlyingCPProgram_t_237113086");
    Undly_112.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2073923758"); // 1
    Undly_112_set.insert("UnderlyingCPRegType_t_2073923758");
    Undly_112.add_attribute("AllocPct", "1614608.350000"); // 1
    Undly_112_set.insert("1614608.350000");
    Undly_112.add_attribute("Ccy", "USD"); // 1
    Undly_112_set.insert("USD");
    Undly_112.add_attribute("Qty", "2345306.000000"); // 1
    Undly_112_set.insert("2345306.000000");
    Undly_112.add_attribute("SettlTyp", "4"); // 1
    Undly_112_set.insert("4");
    Undly_112.add_attribute("CashAmt", "UnderlyingCashAmount_t_1185605165"); // 1
    Undly_112_set.insert("UnderlyingCashAmount_t_1185605165");
    Undly_112.add_attribute("CashTyp", "FIXED"); // 1
    Undly_112_set.insert("FIXED");
    Undly_112.add_attribute("Px", "16866382.910000"); // 1
    Undly_112_set.insert("16866382.910000");
    Undly_112.add_attribute("DirtPx", "11888842.560000"); // 1
    Undly_112_set.insert("11888842.560000");
    Undly_112.add_attribute("EndPx", "14579953.940000"); // 1
    Undly_112_set.insert("14579953.940000");
    Undly_112.add_attribute("StartVal", "UnderlyingStartValue_t_621518750"); // 1
    Undly_112_set.insert("UnderlyingStartValue_t_621518750");
    Undly_112.add_attribute("CurVal", "UnderlyingCurrentValue_t_26067100"); // 1
    Undly_112_set.insert("UnderlyingCurrentValue_t_26067100");
    Undly_112.add_attribute("EndVal", "UnderlyingEndValue_t_965546814"); // 1
    Undly_112_set.insert("UnderlyingEndValue_t_965546814");
    Undly_112.add_attribute("AdjQty", "12928711.470000"); // 1
    Undly_112_set.insert("12928711.470000");
    Undly_112.add_attribute("FxRate", "15402032.040000"); // 1
    Undly_112_set.insert("15402032.040000");
    Undly_112.add_attribute("FxRateCalc", "M"); // 1
    Undly_112_set.insert("M");
    Undly_112.add_attribute("CapValu", "UnderlyingCapValue_t_1386927975"); // 1
    Undly_112_set.insert("UnderlyingCapValue_t_1386927975");
    Undly_112.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1196152711"); // 1
    Undly_112_set.insert("UnderlyingSettlMethod_t_1196152711");
    Undly_112.add_attribute("PutCall", "150497188"); // 1
    Undly_112_set.insert("150497188");
    all_values.push_back(Undly_112_set);
    all_compo_names.insert("Undly_112_set");

    {
      xml_element UndAID_112{"UndAID"};
      multiset<string> UndAID_112_set;
      UndAID_112.add_attribute("AltID", "UnderlyingSecurityAltID_t_504151862"); // 2
      UndAID_112_set.insert("UnderlyingSecurityAltID_t_504151862");
      UndAID_112.add_attribute("AltIDSrc", "J"); // 2
      UndAID_112_set.insert("J");
      all_values.push_back(UndAID_112_set);
      all_compo_names.insert("UndAID_112_set");

      Undly_112.add_element(UndAID_112);
    }
    {
      xml_element Stip_181{"Stip"};
      multiset<string> Stip_181_set;
      Stip_181.add_attribute("Typ", "PROD"); // 2
      Stip_181_set.insert("PROD");
      Stip_181.add_attribute("Val", "UnderlyingStipValue_t_1479194440"); // 2
      Stip_181_set.insert("UnderlyingStipValue_t_1479194440");
      all_values.push_back(Stip_181_set);
      all_compo_names.insert("Stip_181_set");

      Undly_112.add_element(Stip_181);
    }
    {
      xml_element Pty_408{"Pty"};
      multiset<string> Pty_408_set;
      Pty_408.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1592446729"); // 2
      Pty_408_set.insert("UnderlyingInstrumentPartyID_t_1592446729");
      Pty_408.add_attribute("Src", "H"); // 2
      Pty_408_set.insert("H");
      Pty_408.add_attribute("R", "12"); // 2
      Pty_408_set.insert("12");
      all_values.push_back(Pty_408_set);
      all_compo_names.insert("Pty_408_set");

      {
        xml_element Sub_408{"Sub"};
        multiset<string> Sub_408_set;
        Sub_408.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_201964106"); // 3
        Sub_408_set.insert("UnderlyingInstrumentPartySubID_t_201964106");
        Sub_408.add_attribute("Typ", "3"); // 3
        Sub_408_set.insert("3");
        all_values.push_back(Sub_408_set);
        all_compo_names.insert("Sub_408_set");

        Pty_408.add_element(Sub_408);
      }
      Undly_112.add_element(Pty_408);
    }
    elt.add_element(Undly_112);
  } // end Undly
  { // Undly
    xml_element Undly_113{"Undly"};
    multiset<string> Undly_113_set;
    Undly_113.add_attribute("Sym", "UnderlyingSymbol_t_1673646951"); // 1
    Undly_113_set.insert("UnderlyingSymbol_t_1673646951");
    Undly_113.add_attribute("Sfx", "CD"); // 1
    Undly_113_set.insert("CD");
    Undly_113.add_attribute("ID", "UnderlyingSecurityID_t_1006434859"); // 1
    Undly_113_set.insert("UnderlyingSecurityID_t_1006434859");
    Undly_113.add_attribute("Src", "8"); // 1
    Undly_113_set.insert("8");
    Undly_113.add_attribute("Prod", "3"); // 1
    Undly_113_set.insert("3");
    Undly_113.add_attribute("CFI", "UnderlyingCFICode_t_100055369"); // 1
    Undly_113_set.insert("UnderlyingCFICode_t_100055369");
    Undly_113.add_attribute("SecTyp", "MPO"); // 1
    Undly_113_set.insert("MPO");
    Undly_113.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_368402183"); // 1
    Undly_113_set.insert("UnderlyingSecuritySubType_t_368402183");
    Undly_113.add_attribute("MMY", "1285660534"); // 1
    Undly_113_set.insert("1285660534");
    Undly_113.add_attribute("Mat", "UnderlyingMaturityDate_t_1996442489"); // 1
    Undly_113_set.insert("UnderlyingMaturityDate_t_1996442489");
    Undly_113.add_attribute("MatTm", "2055040474"); // 1
    Undly_113_set.insert("2055040474");
    Undly_113.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_327061142"); // 1
    Undly_113_set.insert("UnderlyingCouponPaymentDate_t_327061142");
    Undly_113.add_attribute("RestrctTyp", "XR"); // 1
    Undly_113_set.insert("XR");
    Undly_113.add_attribute("Snrty", "SB"); // 1
    Undly_113_set.insert("SB");
    Undly_113.add_attribute("NotlPctOut", "3531282.420000"); // 1
    Undly_113_set.insert("3531282.420000");
    Undly_113.add_attribute("OrigNotlPctOut", "1250174.010000"); // 1
    Undly_113_set.insert("1250174.010000");
    Undly_113.add_attribute("AttchPnt", "18219467.240000"); // 1
    Undly_113_set.insert("18219467.240000");
    Undly_113.add_attribute("DetchPnt", "18933314.470000"); // 1
    Undly_113_set.insert("18933314.470000");
    Undly_113.add_attribute("Issued", "UnderlyingIssueDate_t_1655490311"); // 1
    Undly_113_set.insert("UnderlyingIssueDate_t_1655490311");
    Undly_113.add_attribute("RepoCollSecTyp", "1061391051"); // 1
    Undly_113_set.insert("1061391051");
    Undly_113.add_attribute("RepoTrm", "942000510"); // 1
    Undly_113_set.insert("942000510");
    Undly_113.add_attribute("RepoRt", "18059874.990000"); // 1
    Undly_113_set.insert("18059874.990000");
    Undly_113.add_attribute("Fctr", "15655429.130000"); // 1
    Undly_113_set.insert("15655429.130000");
    Undly_113.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1399912818"); // 1
    Undly_113_set.insert("UnderlyingCreditRating_t_1399912818");
    Undly_113.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_58802289"); // 1
    Undly_113_set.insert("UnderlyingInstrRegistry_t_58802289");
    Undly_113.add_attribute("Ctry", "897253705"); // 1
    Undly_113_set.insert("897253705");
    Undly_113.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_844875899"); // 1
    Undly_113_set.insert("UnderlyingStateOrProvinceOfIssue_t_844875899");
    Undly_113.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1503912847"); // 1
    Undly_113_set.insert("UnderlyingLocaleOfIssue_t_1503912847");
    Undly_113.add_attribute("Redeem", "UnderlyingRedemptionDate_t_86442405"); // 1
    Undly_113_set.insert("UnderlyingRedemptionDate_t_86442405");
    Undly_113.add_attribute("StrkPx", "10468400.050000"); // 1
    Undly_113_set.insert("10468400.050000");
    Undly_113.add_attribute("StrkCcy", "USD"); // 1
    Undly_113_set.insert("USD");
    Undly_113.add_attribute("OptA", "1485917198"); // 1
    Undly_113_set.insert("1485917198");
    Undly_113.add_attribute("Mult", "14428588.070000"); // 1
    Undly_113_set.insert("14428588.070000");
    Undly_113.add_attribute("MultTyp", "0"); // 1
    Undly_113_set.insert("0");
    Undly_113.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_113_set.insert("1");
    Undly_113.add_attribute("UOM", "Bu"); // 1
    Undly_113_set.insert("Bu");
    Undly_113.add_attribute("UOMQty", "13698682.340000"); // 1
    Undly_113_set.insert("13698682.340000");
    Undly_113.add_attribute("PxUOM", "MWh"); // 1
    Undly_113_set.insert("MWh");
    Undly_113.add_attribute("PxUOMQty", "6810910.620000"); // 1
    Undly_113_set.insert("6810910.620000");
    Undly_113.add_attribute("TmUnit", "Wk"); // 1
    Undly_113_set.insert("Wk");
    Undly_113.add_attribute("ExerStyle", "1"); // 1
    Undly_113_set.insert("1");
    Undly_113.add_attribute("CpnRt", "10081522.050000"); // 1
    Undly_113_set.insert("10081522.050000");
    Undly_113.add_attribute("Exch", "UnderlyingSecurityExchange_t_378297662"); // 1
    Undly_113_set.insert("UnderlyingSecurityExchange_t_378297662");
    Undly_113.add_attribute("Issr", "UnderlyingIssuer_t_1871252967"); // 1
    Undly_113_set.insert("UnderlyingIssuer_t_1871252967");
    Undly_113.add_attribute("EncUndIssrLen", "1361280447"); // 1
    Undly_113_set.insert("1361280447");
    Undly_113.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_503315063"); // 1
    Undly_113_set.insert("EncodedUnderlyingIssuer_t_503315063");
    Undly_113.add_attribute("Desc", "UnderlyingSecurityDesc_t_1545716043"); // 1
    Undly_113_set.insert("UnderlyingSecurityDesc_t_1545716043");
    Undly_113.add_attribute("EncUndSecDescLen", "1107128246"); // 1
    Undly_113_set.insert("1107128246");
    Undly_113.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_11321726"); // 1
    Undly_113_set.insert("EncodedUnderlyingSecurityDesc_t_11321726");
    Undly_113.add_attribute("CPPgm", "UnderlyingCPProgram_t_459623446"); // 1
    Undly_113_set.insert("UnderlyingCPProgram_t_459623446");
    Undly_113.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2049128757"); // 1
    Undly_113_set.insert("UnderlyingCPRegType_t_2049128757");
    Undly_113.add_attribute("AllocPct", "18173092.250000"); // 1
    Undly_113_set.insert("18173092.250000");
    Undly_113.add_attribute("Ccy", "EUR"); // 1
    Undly_113_set.insert("EUR");
    Undly_113.add_attribute("Qty", "18761115.150000"); // 1
    Undly_113_set.insert("18761115.150000");
    Undly_113.add_attribute("SettlTyp", "2"); // 1
    Undly_113_set.insert("2");
    Undly_113.add_attribute("CashAmt", "UnderlyingCashAmount_t_2146433827"); // 1
    Undly_113_set.insert("UnderlyingCashAmount_t_2146433827");
    Undly_113.add_attribute("CashTyp", "FIXED"); // 1
    Undly_113_set.insert("FIXED");
    Undly_113.add_attribute("Px", "8613788.220000"); // 1
    Undly_113_set.insert("8613788.220000");
    Undly_113.add_attribute("DirtPx", "10457901.840000"); // 1
    Undly_113_set.insert("10457901.840000");
    Undly_113.add_attribute("EndPx", "16689646.620000"); // 1
    Undly_113_set.insert("16689646.620000");
    Undly_113.add_attribute("StartVal", "UnderlyingStartValue_t_473984530"); // 1
    Undly_113_set.insert("UnderlyingStartValue_t_473984530");
    Undly_113.add_attribute("CurVal", "UnderlyingCurrentValue_t_384223734"); // 1
    Undly_113_set.insert("UnderlyingCurrentValue_t_384223734");
    Undly_113.add_attribute("EndVal", "UnderlyingEndValue_t_964339821"); // 1
    Undly_113_set.insert("UnderlyingEndValue_t_964339821");
    Undly_113.add_attribute("AdjQty", "19216980.260000"); // 1
    Undly_113_set.insert("19216980.260000");
    Undly_113.add_attribute("FxRate", "14504421.150000"); // 1
    Undly_113_set.insert("14504421.150000");
    Undly_113.add_attribute("FxRateCalc", "D"); // 1
    Undly_113_set.insert("D");
    Undly_113.add_attribute("CapValu", "UnderlyingCapValue_t_1144082612"); // 1
    Undly_113_set.insert("UnderlyingCapValue_t_1144082612");
    Undly_113.add_attribute("SetMeth", "UnderlyingSettlMethod_t_737579031"); // 1
    Undly_113_set.insert("UnderlyingSettlMethod_t_737579031");
    Undly_113.add_attribute("PutCall", "1040861412"); // 1
    Undly_113_set.insert("1040861412");
    all_values.push_back(Undly_113_set);
    all_compo_names.insert("Undly_113_set");

    {
      xml_element UndAID_113{"UndAID"};
      multiset<string> UndAID_113_set;
      UndAID_113.add_attribute("AltID", "UnderlyingSecurityAltID_t_215426040"); // 2
      UndAID_113_set.insert("UnderlyingSecurityAltID_t_215426040");
      UndAID_113.add_attribute("AltIDSrc", "J"); // 2
      UndAID_113_set.insert("J");
      all_values.push_back(UndAID_113_set);
      all_compo_names.insert("UndAID_113_set");

      Undly_113.add_element(UndAID_113);
    }
    {
      xml_element Stip_182{"Stip"};
      multiset<string> Stip_182_set;
      Stip_182.add_attribute("Typ", "ISSUESIZE"); // 2
      Stip_182_set.insert("ISSUESIZE");
      Stip_182.add_attribute("Val", "UnderlyingStipValue_t_593723702"); // 2
      Stip_182_set.insert("UnderlyingStipValue_t_593723702");
      all_values.push_back(Stip_182_set);
      all_compo_names.insert("Stip_182_set");

      Undly_113.add_element(Stip_182);
    }
    {
      xml_element Pty_409{"Pty"};
      multiset<string> Pty_409_set;
      Pty_409.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1803525741"); // 2
      Pty_409_set.insert("UnderlyingInstrumentPartyID_t_1803525741");
      Pty_409.add_attribute("Src", "5"); // 2
      Pty_409_set.insert("5");
      Pty_409.add_attribute("R", "34"); // 2
      Pty_409_set.insert("34");
      all_values.push_back(Pty_409_set);
      all_compo_names.insert("Pty_409_set");

      {
        xml_element Sub_409{"Sub"};
        multiset<string> Sub_409_set;
        Sub_409.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1201758137"); // 3
        Sub_409_set.insert("UnderlyingInstrumentPartySubID_t_1201758137");
        Sub_409.add_attribute("Typ", "11"); // 3
        Sub_409_set.insert("11");
        all_values.push_back(Sub_409_set);
        all_compo_names.insert("Sub_409_set");

        Pty_409.add_element(Sub_409);
      }
      Undly_113.add_element(Pty_409);
    }
    elt.add_element(Undly_113);
  } // end Undly
  { // Undly
    xml_element Undly_114{"Undly"};
    multiset<string> Undly_114_set;
    Undly_114.add_attribute("Sym", "UnderlyingSymbol_t_1108360492"); // 1
    Undly_114_set.insert("UnderlyingSymbol_t_1108360492");
    Undly_114.add_attribute("Sfx", "WI"); // 1
    Undly_114_set.insert("WI");
    Undly_114.add_attribute("ID", "UnderlyingSecurityID_t_124100124"); // 1
    Undly_114_set.insert("UnderlyingSecurityID_t_124100124");
    Undly_114.add_attribute("Src", "3"); // 1
    Undly_114_set.insert("3");
    Undly_114.add_attribute("Prod", "11"); // 1
    Undly_114_set.insert("11");
    Undly_114.add_attribute("CFI", "UnderlyingCFICode_t_1425658051"); // 1
    Undly_114_set.insert("UnderlyingCFICode_t_1425658051");
    Undly_114.add_attribute("SecTyp", "MPO"); // 1
    Undly_114_set.insert("MPO");
    Undly_114.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_166517064"); // 1
    Undly_114_set.insert("UnderlyingSecuritySubType_t_166517064");
    Undly_114.add_attribute("MMY", "1424608230"); // 1
    Undly_114_set.insert("1424608230");
    Undly_114.add_attribute("Mat", "UnderlyingMaturityDate_t_1739354651"); // 1
    Undly_114_set.insert("UnderlyingMaturityDate_t_1739354651");
    Undly_114.add_attribute("MatTm", "1027895886"); // 1
    Undly_114_set.insert("1027895886");
    Undly_114.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_322914767"); // 1
    Undly_114_set.insert("UnderlyingCouponPaymentDate_t_322914767");
    Undly_114.add_attribute("RestrctTyp", "MM"); // 1
    Undly_114_set.insert("MM");
    Undly_114.add_attribute("Snrty", "SR"); // 1
    Undly_114_set.insert("SR");
    Undly_114.add_attribute("NotlPctOut", "7071385.010000"); // 1
    Undly_114_set.insert("7071385.010000");
    Undly_114.add_attribute("OrigNotlPctOut", "776918.390000"); // 1
    Undly_114_set.insert("776918.390000");
    Undly_114.add_attribute("AttchPnt", "12760947.940000"); // 1
    Undly_114_set.insert("12760947.940000");
    Undly_114.add_attribute("DetchPnt", "100969.690000"); // 1
    Undly_114_set.insert("100969.690000");
    Undly_114.add_attribute("Issued", "UnderlyingIssueDate_t_437462189"); // 1
    Undly_114_set.insert("UnderlyingIssueDate_t_437462189");
    Undly_114.add_attribute("RepoCollSecTyp", "272693759"); // 1
    Undly_114_set.insert("272693759");
    Undly_114.add_attribute("RepoTrm", "747676000"); // 1
    Undly_114_set.insert("747676000");
    Undly_114.add_attribute("RepoRt", "14783236.010000"); // 1
    Undly_114_set.insert("14783236.010000");
    Undly_114.add_attribute("Fctr", "4881197.990000"); // 1
    Undly_114_set.insert("4881197.990000");
    Undly_114.add_attribute("CrdRtg", "UnderlyingCreditRating_t_679948774"); // 1
    Undly_114_set.insert("UnderlyingCreditRating_t_679948774");
    Undly_114.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1379853570"); // 1
    Undly_114_set.insert("UnderlyingInstrRegistry_t_1379853570");
    Undly_114.add_attribute("Ctry", "1081843501"); // 1
    Undly_114_set.insert("1081843501");
    Undly_114.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_335990868"); // 1
    Undly_114_set.insert("UnderlyingStateOrProvinceOfIssue_t_335990868");
    Undly_114.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_495180338"); // 1
    Undly_114_set.insert("UnderlyingLocaleOfIssue_t_495180338");
    Undly_114.add_attribute("Redeem", "UnderlyingRedemptionDate_t_31398619"); // 1
    Undly_114_set.insert("UnderlyingRedemptionDate_t_31398619");
    Undly_114.add_attribute("StrkPx", "15377490.050000"); // 1
    Undly_114_set.insert("15377490.050000");
    Undly_114.add_attribute("StrkCcy", "USD"); // 1
    Undly_114_set.insert("USD");
    Undly_114.add_attribute("OptA", "1051646940"); // 1
    Undly_114_set.insert("1051646940");
    Undly_114.add_attribute("Mult", "8417354.770000"); // 1
    Undly_114_set.insert("8417354.770000");
    Undly_114.add_attribute("MultTyp", "2"); // 1
    Undly_114_set.insert("2");
    Undly_114.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_114_set.insert("2");
    Undly_114.add_attribute("UOM", "MWh"); // 1
    Undly_114_set.insert("MWh");
    Undly_114.add_attribute("UOMQty", "2772754.710000"); // 1
    Undly_114_set.insert("2772754.710000");
    Undly_114.add_attribute("PxUOM", "USD"); // 1
    Undly_114_set.insert("USD");
    Undly_114.add_attribute("PxUOMQty", "15445181.110000"); // 1
    Undly_114_set.insert("15445181.110000");
    Undly_114.add_attribute("TmUnit", "D"); // 1
    Undly_114_set.insert("D");
    Undly_114.add_attribute("ExerStyle", "0"); // 1
    Undly_114_set.insert("0");
    Undly_114.add_attribute("CpnRt", "18674328.780000"); // 1
    Undly_114_set.insert("18674328.780000");
    Undly_114.add_attribute("Exch", "UnderlyingSecurityExchange_t_1129982140"); // 1
    Undly_114_set.insert("UnderlyingSecurityExchange_t_1129982140");
    Undly_114.add_attribute("Issr", "UnderlyingIssuer_t_992037306"); // 1
    Undly_114_set.insert("UnderlyingIssuer_t_992037306");
    Undly_114.add_attribute("EncUndIssrLen", "427087732"); // 1
    Undly_114_set.insert("427087732");
    Undly_114.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1207673980"); // 1
    Undly_114_set.insert("EncodedUnderlyingIssuer_t_1207673980");
    Undly_114.add_attribute("Desc", "UnderlyingSecurityDesc_t_120648452"); // 1
    Undly_114_set.insert("UnderlyingSecurityDesc_t_120648452");
    Undly_114.add_attribute("EncUndSecDescLen", "437184701"); // 1
    Undly_114_set.insert("437184701");
    Undly_114.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1645136169"); // 1
    Undly_114_set.insert("EncodedUnderlyingSecurityDesc_t_1645136169");
    Undly_114.add_attribute("CPPgm", "UnderlyingCPProgram_t_393342211"); // 1
    Undly_114_set.insert("UnderlyingCPProgram_t_393342211");
    Undly_114.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1184860701"); // 1
    Undly_114_set.insert("UnderlyingCPRegType_t_1184860701");
    Undly_114.add_attribute("AllocPct", "9759761.220000"); // 1
    Undly_114_set.insert("9759761.220000");
    Undly_114.add_attribute("Ccy", "GBP"); // 1
    Undly_114_set.insert("GBP");
    Undly_114.add_attribute("Qty", "2083460.440000"); // 1
    Undly_114_set.insert("2083460.440000");
    Undly_114.add_attribute("SettlTyp", "5"); // 1
    Undly_114_set.insert("5");
    Undly_114.add_attribute("CashAmt", "UnderlyingCashAmount_t_53316696"); // 1
    Undly_114_set.insert("UnderlyingCashAmount_t_53316696");
    Undly_114.add_attribute("CashTyp", "FIXED"); // 1
    Undly_114_set.insert("FIXED");
    Undly_114.add_attribute("Px", "19947041.310000"); // 1
    Undly_114_set.insert("19947041.310000");
    Undly_114.add_attribute("DirtPx", "15910657.010000"); // 1
    Undly_114_set.insert("15910657.010000");
    Undly_114.add_attribute("EndPx", "14211617.360000"); // 1
    Undly_114_set.insert("14211617.360000");
    Undly_114.add_attribute("StartVal", "UnderlyingStartValue_t_986979595"); // 1
    Undly_114_set.insert("UnderlyingStartValue_t_986979595");
    Undly_114.add_attribute("CurVal", "UnderlyingCurrentValue_t_495228993"); // 1
    Undly_114_set.insert("UnderlyingCurrentValue_t_495228993");
    Undly_114.add_attribute("EndVal", "UnderlyingEndValue_t_115413565"); // 1
    Undly_114_set.insert("UnderlyingEndValue_t_115413565");
    Undly_114.add_attribute("AdjQty", "7574411.290000"); // 1
    Undly_114_set.insert("7574411.290000");
    Undly_114.add_attribute("FxRate", "9384565.810000"); // 1
    Undly_114_set.insert("9384565.810000");
    Undly_114.add_attribute("FxRateCalc", "M"); // 1
    Undly_114_set.insert("M");
    Undly_114.add_attribute("CapValu", "UnderlyingCapValue_t_1034716600"); // 1
    Undly_114_set.insert("UnderlyingCapValue_t_1034716600");
    Undly_114.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1548201232"); // 1
    Undly_114_set.insert("UnderlyingSettlMethod_t_1548201232");
    Undly_114.add_attribute("PutCall", "1779841558"); // 1
    Undly_114_set.insert("1779841558");
    all_values.push_back(Undly_114_set);
    all_compo_names.insert("Undly_114_set");

    {
      xml_element UndAID_114{"UndAID"};
      multiset<string> UndAID_114_set;
      UndAID_114.add_attribute("AltID", "UnderlyingSecurityAltID_t_903863075"); // 2
      UndAID_114_set.insert("UnderlyingSecurityAltID_t_903863075");
      UndAID_114.add_attribute("AltIDSrc", "B"); // 2
      UndAID_114_set.insert("B");
      all_values.push_back(UndAID_114_set);
      all_compo_names.insert("UndAID_114_set");

      Undly_114.add_element(UndAID_114);
    }
    {
      xml_element Stip_183{"Stip"};
      multiset<string> Stip_183_set;
      Stip_183.add_attribute("Typ", "AVAILQTY"); // 2
      Stip_183_set.insert("AVAILQTY");
      Stip_183.add_attribute("Val", "UnderlyingStipValue_t_2033845215"); // 2
      Stip_183_set.insert("UnderlyingStipValue_t_2033845215");
      all_values.push_back(Stip_183_set);
      all_compo_names.insert("Stip_183_set");

      Undly_114.add_element(Stip_183);
    }
    {
      xml_element Pty_410{"Pty"};
      multiset<string> Pty_410_set;
      Pty_410.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2030395428"); // 2
      Pty_410_set.insert("UnderlyingInstrumentPartyID_t_2030395428");
      Pty_410.add_attribute("Src", "D"); // 2
      Pty_410_set.insert("D");
      Pty_410.add_attribute("R", "61"); // 2
      Pty_410_set.insert("61");
      all_values.push_back(Pty_410_set);
      all_compo_names.insert("Pty_410_set");

      {
        xml_element Sub_410{"Sub"};
        multiset<string> Sub_410_set;
        Sub_410.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_3560232"); // 3
        Sub_410_set.insert("UnderlyingInstrumentPartySubID_t_3560232");
        Sub_410.add_attribute("Typ", "20"); // 3
        Sub_410_set.insert("20");
        all_values.push_back(Sub_410_set);
        all_compo_names.insert("Sub_410_set");

        Pty_410.add_element(Sub_410);
      }
      Undly_114.add_element(Pty_410);
    }
    elt.add_element(Undly_114);
  } // end Undly
  { // Leg
    xml_element Leg_95{"Leg"};
    multiset<string> Leg_95_set;
    Leg_95.add_attribute("Sym", "LegSymbol_t_396902444"); // 1
    Leg_95_set.insert("LegSymbol_t_396902444");
    Leg_95.add_attribute("Sfx", "WI"); // 1
    Leg_95_set.insert("WI");
    Leg_95.add_attribute("ID", "LegSecurityID_t_1567664190"); // 1
    Leg_95_set.insert("LegSecurityID_t_1567664190");
    Leg_95.add_attribute("Src", "5"); // 1
    Leg_95_set.insert("5");
    Leg_95.add_attribute("Prod", "1"); // 1
    Leg_95_set.insert("1");
    Leg_95.add_attribute("CFI", "LegCFICode_t_1776010234"); // 1
    Leg_95_set.insert("LegCFICode_t_1776010234");
    Leg_95.add_attribute("SecTyp", "NONE"); // 1
    Leg_95_set.insert("NONE");
    Leg_95.add_attribute("SecSubTyp", "LegSecuritySubType_t_1172082799"); // 1
    Leg_95_set.insert("LegSecuritySubType_t_1172082799");
    Leg_95.add_attribute("MMY", "332052969"); // 1
    Leg_95_set.insert("332052969");
    Leg_95.add_attribute("Mat", "LegMaturityDate_t_941406802"); // 1
    Leg_95_set.insert("LegMaturityDate_t_941406802");
    Leg_95.add_attribute("MatTm", "615664852"); // 1
    Leg_95_set.insert("615664852");
    Leg_95.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1753214705"); // 1
    Leg_95_set.insert("LegCouponPaymentDate_t_1753214705");
    Leg_95.add_attribute("Issued", "LegIssueDate_t_1928386397"); // 1
    Leg_95_set.insert("LegIssueDate_t_1928386397");
    Leg_95.add_attribute("RepoCollSecTyp", "1110893845"); // 1
    Leg_95_set.insert("1110893845");
    Leg_95.add_attribute("RepoTrm", "1868628270"); // 1
    Leg_95_set.insert("1868628270");
    Leg_95.add_attribute("RepoRt", "5383438.790000"); // 1
    Leg_95_set.insert("5383438.790000");
    Leg_95.add_attribute("Fctr", "20493504.260000"); // 1
    Leg_95_set.insert("20493504.260000");
    Leg_95.add_attribute("CrdRtg", "LegCreditRating_t_2103951717"); // 1
    Leg_95_set.insert("LegCreditRating_t_2103951717");
    Leg_95.add_attribute("Rgstry", "LegInstrRegistry_t_1573060479"); // 1
    Leg_95_set.insert("LegInstrRegistry_t_1573060479");
    Leg_95.add_attribute("Ctry", "1450068011"); // 1
    Leg_95_set.insert("1450068011");
    Leg_95.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1736309627"); // 1
    Leg_95_set.insert("LegStateOrProvinceOfIssue_t_1736309627");
    Leg_95.add_attribute("Lcl", "LegLocaleOfIssue_t_329439906"); // 1
    Leg_95_set.insert("LegLocaleOfIssue_t_329439906");
    Leg_95.add_attribute("Redeem", "LegRedemptionDate_t_340942485"); // 1
    Leg_95_set.insert("LegRedemptionDate_t_340942485");
    Leg_95.add_attribute("Strk", "10886167.670000"); // 1
    Leg_95_set.insert("10886167.670000");
    Leg_95.add_attribute("StrkCcy", "EUR"); // 1
    Leg_95_set.insert("EUR");
    Leg_95.add_attribute("OptA", "868011640"); // 1
    Leg_95_set.insert("868011640");
    Leg_95.add_attribute("Cmult", "13098370.210000"); // 1
    Leg_95_set.insert("13098370.210000");
    Leg_95.add_attribute("MultTyp", "1"); // 1
    Leg_95_set.insert("1");
    Leg_95.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_95_set.insert("3");
    Leg_95.add_attribute("UOM", "Bcf"); // 1
    Leg_95_set.insert("Bcf");
    Leg_95.add_attribute("UOMQty", "6243169.410000"); // 1
    Leg_95_set.insert("6243169.410000");
    Leg_95.add_attribute("PxUOM", "lbs"); // 1
    Leg_95_set.insert("lbs");
    Leg_95.add_attribute("PxUOMQty", "13217056.320000"); // 1
    Leg_95_set.insert("13217056.320000");
    Leg_95.add_attribute("TmUnit", "S"); // 1
    Leg_95_set.insert("S");
    Leg_95.add_attribute("ExerStyle", "1"); // 1
    Leg_95_set.insert("1");
    Leg_95.add_attribute("CpnRt", "9502322.190000"); // 1
    Leg_95_set.insert("9502322.190000");
    Leg_95.add_attribute("Exch", "LegSecurityExchange_t_849384066"); // 1
    Leg_95_set.insert("LegSecurityExchange_t_849384066");
    Leg_95.add_attribute("Issr", "LegIssuer_t_481913094"); // 1
    Leg_95_set.insert("LegIssuer_t_481913094");
    Leg_95.add_attribute("EncLegIssrLen", "1282285188"); // 1
    Leg_95_set.insert("1282285188");
    Leg_95.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1790790868"); // 1
    Leg_95_set.insert("EncodedLegIssuer_t_1790790868");
    Leg_95.add_attribute("Desc", "LegSecurityDesc_t_1097577946"); // 1
    Leg_95_set.insert("LegSecurityDesc_t_1097577946");
    Leg_95.add_attribute("EncLegSecDescLen", "888016245"); // 1
    Leg_95_set.insert("888016245");
    Leg_95.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1571693618"); // 1
    Leg_95_set.insert("EncodedLegSecurityDesc_t_1571693618");
    Leg_95.add_attribute("RatioQty", "609881.440000"); // 1
    Leg_95_set.insert("609881.440000");
    Leg_95.add_attribute("Side", "4"); // 1
    Leg_95_set.insert("4");
    Leg_95.add_attribute("Ccy", "USD"); // 1
    Leg_95_set.insert("USD");
    Leg_95.add_attribute("Pool", "LegPool_t_565628936"); // 1
    Leg_95_set.insert("LegPool_t_565628936");
    Leg_95.add_attribute("Dated", "LegDatedDate_t_1535614328"); // 1
    Leg_95_set.insert("LegDatedDate_t_1535614328");
    Leg_95.add_attribute("CSetMo", "1412922933"); // 1
    Leg_95_set.insert("1412922933");
    Leg_95.add_attribute("IntAcrl", "LegInterestAccrualDate_t_154454915"); // 1
    Leg_95_set.insert("LegInterestAccrualDate_t_154454915");
    Leg_95.add_attribute("PutCall", "1865054235"); // 1
    Leg_95_set.insert("1865054235");
    Leg_95.add_attribute("LegOptionRatio", "17538654.180000"); // 1
    Leg_95_set.insert("17538654.180000");
    Leg_95.add_attribute("Px", "12430716.830000"); // 1
    Leg_95_set.insert("12430716.830000");
    all_values.push_back(Leg_95_set);
    all_compo_names.insert("Leg_95_set");

    {
      xml_element LegAID_90{"LegAID"};
      multiset<string> LegAID_90_set;
      LegAID_90.add_attribute("SecAltID", "LegSecurityAltID_t_2080855709"); // 2
      LegAID_90_set.insert("LegSecurityAltID_t_2080855709");
      LegAID_90.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_90_set.insert("6");
      all_values.push_back(LegAID_90_set);
      all_compo_names.insert("LegAID_90_set");

      Leg_95.add_element(LegAID_90);
    }
    elt.add_element(Leg_95);
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
