#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RFQRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RFQRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"RFQReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RFQRequest_message_t_0;
  elt.add_attribute("RFQReqID", "RFQReqID_t_439778402"); // 0
  RFQRequest_message_t_0.insert("RFQReqID_t_439778402");
  elt.add_attribute("SubReqTyp", "2"); // 0
  RFQRequest_message_t_0.insert("2");
  elt.add_attribute("PrvtQt", "true"); // 0
  RFQRequest_message_t_0.insert("true");
  all_values.push_back(RFQRequest_message_t_0);
  all_compo_names.insert("RFQRequest_message_t");

  { // Hdr
    xml_element Hdr_75{"Hdr"};
    multiset<string> Hdr_75_set;
    Hdr_75.add_attribute("SeqNum", "775690293"); // 1
    Hdr_75_set.insert("775690293");
    Hdr_75.add_attribute("SID", "SenderCompID_t_1606399505"); // 1
    Hdr_75_set.insert("SenderCompID_t_1606399505");
    Hdr_75.add_attribute("TID", "TargetCompID_t_1486654932"); // 1
    Hdr_75_set.insert("TargetCompID_t_1486654932");
    Hdr_75.add_attribute("OBID", "OnBehalfOfCompID_t_1751712004"); // 1
    Hdr_75_set.insert("OnBehalfOfCompID_t_1751712004");
    Hdr_75.add_attribute("D2ID", "DeliverToCompID_t_934003466"); // 1
    Hdr_75_set.insert("DeliverToCompID_t_934003466");
    Hdr_75.add_attribute("SSub", "SenderSubID_t_1343520069"); // 1
    Hdr_75_set.insert("SenderSubID_t_1343520069");
    Hdr_75.add_attribute("SLoc", "SenderLocationID_t_1417711112"); // 1
    Hdr_75_set.insert("SenderLocationID_t_1417711112");
    Hdr_75.add_attribute("TSub", "TargetSubID_t_860584868"); // 1
    Hdr_75_set.insert("TargetSubID_t_860584868");
    Hdr_75.add_attribute("TLoc", "TargetLocationID_t_742589054"); // 1
    Hdr_75_set.insert("TargetLocationID_t_742589054");
    Hdr_75.add_attribute("OBSub", "OnBehalfOfSubID_t_2096515171"); // 1
    Hdr_75_set.insert("OnBehalfOfSubID_t_2096515171");
    Hdr_75.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2069441666"); // 1
    Hdr_75_set.insert("OnBehalfOfLocationID_t_2069441666");
    Hdr_75.add_attribute("D2Sub", "DeliverToSubID_t_265607120"); // 1
    Hdr_75_set.insert("DeliverToSubID_t_265607120");
    Hdr_75.add_attribute("D2Loc", "DeliverToLocationID_t_1039600638"); // 1
    Hdr_75_set.insert("DeliverToLocationID_t_1039600638");
    Hdr_75.add_attribute("PosDup", "Y"); // 1
    Hdr_75_set.insert("Y");
    Hdr_75.add_attribute("PosRsnd", "N"); // 1
    Hdr_75_set.insert("N");
    Hdr_75.add_attribute("Snt", "SendingTime_t_1824464187"); // 1
    Hdr_75_set.insert("SendingTime_t_1824464187");
    Hdr_75.add_attribute("OrigSnt", "OrigSendingTime_t_481716788"); // 1
    Hdr_75_set.insert("OrigSendingTime_t_481716788");
    Hdr_75.add_attribute("MsgEncd", "MessageEncoding_t_1530339101"); // 1
    Hdr_75_set.insert("MessageEncoding_t_1530339101");
    all_values.push_back(Hdr_75_set);
    all_compo_names.insert("Hdr_75_set");

    {
      xml_element Hop_75{"Hop"};
      multiset<string> Hop_75_set;
      Hop_75.add_attribute("ID", "HopCompID_t_1649543390"); // 2
      Hop_75_set.insert("HopCompID_t_1649543390");
      Hop_75.add_attribute("Ref", "334007279"); // 2
      Hop_75_set.insert("334007279");
      Hop_75.add_attribute("Snt", "HopSendingTime_t_126890368"); // 2
      Hop_75_set.insert("HopSendingTime_t_126890368");
      all_values.push_back(Hop_75_set);
      all_compo_names.insert("Hop_75_set");

      Hdr_75.add_element(Hop_75);
    }
    elt.add_element(Hdr_75);
  } // end Hdr
  { // Pty
    xml_element Pty_374{"Pty"};
    multiset<string> Pty_374_set;
    Pty_374.add_attribute("ID", "PartyID_t_488787226"); // 1
    Pty_374_set.insert("PartyID_t_488787226");
    Pty_374.add_attribute("Src", "8"); // 1
    Pty_374_set.insert("8");
    Pty_374.add_attribute("R", "69"); // 1
    Pty_374_set.insert("69");
    all_values.push_back(Pty_374_set);
    all_compo_names.insert("Pty_374_set");

    {
      xml_element Sub_374{"Sub"};
      multiset<string> Sub_374_set;
      Sub_374.add_attribute("ID", "PartySubID_t_314919696"); // 2
      Sub_374_set.insert("PartySubID_t_314919696");
      Sub_374.add_attribute("Typ", "31"); // 2
      Sub_374_set.insert("31");
      all_values.push_back(Sub_374_set);
      all_compo_names.insert("Sub_374_set");

      Pty_374.add_element(Sub_374);
    }
    elt.add_element(Pty_374);
  } // end Pty
  { // RFQReq
    xml_element RFQReq_0{"RFQReq"};
    multiset<string> RFQReq_0_set;
    RFQReq_0.add_attribute("PrevClsPx", "7546980.980000"); // 1
    RFQReq_0_set.insert("7546980.980000");
    RFQReq_0.add_attribute("ReqTyp", "1"); // 1
    RFQReq_0_set.insert("1");
    RFQReq_0.add_attribute("Typ", "2"); // 1
    RFQReq_0_set.insert("2");
    RFQReq_0.add_attribute("SesID", "6"); // 1
    RFQReq_0_set.insert("6");
    RFQReq_0.add_attribute("SesSub", "1"); // 1
    RFQReq_0_set.insert("1");
    all_values.push_back(RFQReq_0_set);
    all_compo_names.insert("RFQReq_0_set");

    {
      xml_element Instrmt_68{"Instrmt"};
      multiset<string> Instrmt_68_set;
      Instrmt_68.add_attribute("Sym", "Symbol_t_2017666662"); // 2
      Instrmt_68_set.insert("Symbol_t_2017666662");
      Instrmt_68.add_attribute("Sfx", "CD"); // 2
      Instrmt_68_set.insert("CD");
      Instrmt_68.add_attribute("ID", "SecurityID_t_1615486094"); // 2
      Instrmt_68_set.insert("SecurityID_t_1615486094");
      Instrmt_68.add_attribute("Src", "1"); // 2
      Instrmt_68_set.insert("1");
      Instrmt_68.add_attribute("Prod", "3"); // 2
      Instrmt_68_set.insert("3");
      Instrmt_68.add_attribute("ProdCmplx", "ProductComplex_t_328587314"); // 2
      Instrmt_68_set.insert("ProductComplex_t_328587314");
      Instrmt_68.add_attribute("SecGrp", "SecurityGroup_t_1956292138"); // 2
      Instrmt_68_set.insert("SecurityGroup_t_1956292138");
      Instrmt_68.add_attribute("CFI", "CFICode_t_353875735"); // 2
      Instrmt_68_set.insert("CFICode_t_353875735");
      Instrmt_68.add_attribute("SecTyp", "RVLVTRM"); // 2
      Instrmt_68_set.insert("RVLVTRM");
      Instrmt_68.add_attribute("SubTyp", "SecuritySubType_t_74415610"); // 2
      Instrmt_68_set.insert("SecuritySubType_t_74415610");
      Instrmt_68.add_attribute("MMY", "1393476373"); // 2
      Instrmt_68_set.insert("1393476373");
      Instrmt_68.add_attribute("MatDt", "MaturityDate_t_379429912"); // 2
      Instrmt_68_set.insert("MaturityDate_t_379429912");
      Instrmt_68.add_attribute("MatTm", "1428012483"); // 2
      Instrmt_68_set.insert("1428012483");
      Instrmt_68.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1070456912"); // 2
      Instrmt_68_set.insert("SettleOnOpenFlag_t_1070456912");
      Instrmt_68.add_attribute("AsgnMeth", "861146700"); // 2
      Instrmt_68_set.insert("861146700");
      Instrmt_68.add_attribute("Status", "1"); // 2
      Instrmt_68_set.insert("1");
      Instrmt_68.add_attribute("CpnPmt", "CouponPaymentDate_t_572516654"); // 2
      Instrmt_68_set.insert("CouponPaymentDate_t_572516654");
      Instrmt_68.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_68_set.insert("XR");
      Instrmt_68.add_attribute("Snrty", "SR"); // 2
      Instrmt_68_set.insert("SR");
      Instrmt_68.add_attribute("NotlPctOut", "3525884.170000"); // 2
      Instrmt_68_set.insert("3525884.170000");
      Instrmt_68.add_attribute("OrigNotlPctOut", "16839412.050000"); // 2
      Instrmt_68_set.insert("16839412.050000");
      Instrmt_68.add_attribute("AttchPnt", "2892777.280000"); // 2
      Instrmt_68_set.insert("2892777.280000");
      Instrmt_68.add_attribute("DetchPnt", "14450802.200000"); // 2
      Instrmt_68_set.insert("14450802.200000");
      Instrmt_68.add_attribute("Issued", "IssueDate_t_1998860901"); // 2
      Instrmt_68_set.insert("IssueDate_t_1998860901");
      Instrmt_68.add_attribute("RepoCollSecTyp", "1082515687"); // 2
      Instrmt_68_set.insert("1082515687");
      Instrmt_68.add_attribute("RepoTrm", "1157148359"); // 2
      Instrmt_68_set.insert("1157148359");
      Instrmt_68.add_attribute("RepoRt", "6060753.510000"); // 2
      Instrmt_68_set.insert("6060753.510000");
      Instrmt_68.add_attribute("Fctr", "1575988.100000"); // 2
      Instrmt_68_set.insert("1575988.100000");
      Instrmt_68.add_attribute("CrdRtg", "CreditRating_t_1688160089"); // 2
      Instrmt_68_set.insert("CreditRating_t_1688160089");
      Instrmt_68.add_attribute("Rgstry", "InstrRegistry_t_2136463743"); // 2
      Instrmt_68_set.insert("InstrRegistry_t_2136463743");
      Instrmt_68.add_attribute("IssuCtry", "839081437"); // 2
      Instrmt_68_set.insert("839081437");
      Instrmt_68.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1558343104"); // 2
      Instrmt_68_set.insert("StateOrProvinceOfIssue_t_1558343104");
      Instrmt_68.add_attribute("Lcl", "LocaleOfIssue_t_1123596843"); // 2
      Instrmt_68_set.insert("LocaleOfIssue_t_1123596843");
      Instrmt_68.add_attribute("Redeem", "RedemptionDate_t_307083883"); // 2
      Instrmt_68_set.insert("RedemptionDate_t_307083883");
      Instrmt_68.add_attribute("StrkPx", "6245625.400000"); // 2
      Instrmt_68_set.insert("6245625.400000");
      Instrmt_68.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_68_set.insert("CHF");
      Instrmt_68.add_attribute("StrkMult", "4333710.300000"); // 2
      Instrmt_68_set.insert("4333710.300000");
      Instrmt_68.add_attribute("StrkValu", "18823167.900000"); // 2
      Instrmt_68_set.insert("18823167.900000");
      Instrmt_68.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_68_set.insert("3");
      Instrmt_68.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_68_set.insert("2");
      Instrmt_68.add_attribute("StrkPxBndryPrcsn", "11283095.150000"); // 2
      Instrmt_68_set.insert("11283095.150000");
      Instrmt_68.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_68_set.insert("3");
      Instrmt_68.add_attribute("OptAt", "1935799124"); // 2
      Instrmt_68_set.insert("1935799124");
      Instrmt_68.add_attribute("Mult", "512827.790000"); // 2
      Instrmt_68_set.insert("512827.790000");
      Instrmt_68.add_attribute("MultTyp", "1"); // 2
      Instrmt_68_set.insert("1");
      Instrmt_68.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_68_set.insert("2");
      Instrmt_68.add_attribute("MinPxIncr", "6237994.340000"); // 2
      Instrmt_68_set.insert("6237994.340000");
      Instrmt_68.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1174463473"); // 2
      Instrmt_68_set.insert("MinPriceIncrementAmount_t_1174463473");
      Instrmt_68.add_attribute("UOM", "Bu"); // 2
      Instrmt_68_set.insert("Bu");
      Instrmt_68.add_attribute("UOMQty", "9763878.510000"); // 2
      Instrmt_68_set.insert("9763878.510000");
      Instrmt_68.add_attribute("PxUOM", "Bbl"); // 2
      Instrmt_68_set.insert("Bbl");
      Instrmt_68.add_attribute("PxUOMQty", "18262194.440000"); // 2
      Instrmt_68_set.insert("18262194.440000");
      Instrmt_68.add_attribute("SettlMeth", "P"); // 2
      Instrmt_68_set.insert("P");
      Instrmt_68.add_attribute("ExerStyle", "1"); // 2
      Instrmt_68_set.insert("1");
      Instrmt_68.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_68_set.insert("3");
      Instrmt_68.add_attribute("OptPayAmt", "OptPayoutAmount_t_1431132782"); // 2
      Instrmt_68_set.insert("OptPayoutAmount_t_1431132782");
      Instrmt_68.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_68_set.insert("STD");
      Instrmt_68.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_68_set.insert("CDSD");
      Instrmt_68.add_attribute("ListMeth", "0"); // 2
      Instrmt_68_set.insert("0");
      Instrmt_68.add_attribute("CapPx", "11573537.310000"); // 2
      Instrmt_68_set.insert("11573537.310000");
      Instrmt_68.add_attribute("FlrPx", "17579317.310000"); // 2
      Instrmt_68_set.insert("17579317.310000");
      Instrmt_68.add_attribute("PutCall", "0"); // 2
      Instrmt_68_set.insert("0");
      Instrmt_68.add_attribute("FlexInd", "true"); // 2
      Instrmt_68_set.insert("true");
      Instrmt_68.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_68_set.insert("false");
      Instrmt_68.add_attribute("TmUnit", "H"); // 2
      Instrmt_68_set.insert("H");
      Instrmt_68.add_attribute("CpnRt", "16619079.810000"); // 2
      Instrmt_68_set.insert("16619079.810000");
      Instrmt_68.add_attribute("Exch", "SecurityExchange_t_553203164"); // 2
      Instrmt_68_set.insert("SecurityExchange_t_553203164");
      Instrmt_68.add_attribute("PosLmt", "1440602250"); // 2
      Instrmt_68_set.insert("1440602250");
      Instrmt_68.add_attribute("NTPosLmt", "1396741123"); // 2
      Instrmt_68_set.insert("1396741123");
      Instrmt_68.add_attribute("Issr", "Issuer_t_1439419694"); // 2
      Instrmt_68_set.insert("Issuer_t_1439419694");
      Instrmt_68.add_attribute("EncIssrLen", "1948388891"); // 2
      Instrmt_68_set.insert("1948388891");
      Instrmt_68.add_attribute("EncIssr", "EncodedIssuer_t_377566990"); // 2
      Instrmt_68_set.insert("EncodedIssuer_t_377566990");
      Instrmt_68.add_attribute("Desc", "SecurityDesc_t_557582488"); // 2
      Instrmt_68_set.insert("SecurityDesc_t_557582488");
      Instrmt_68.add_attribute("EncSecDescLen", "1736704367"); // 2
      Instrmt_68_set.insert("1736704367");
      Instrmt_68.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_428849769"); // 2
      Instrmt_68_set.insert("EncodedSecurityDesc_t_428849769");
      Instrmt_68.add_attribute("Pool", "Pool_t_536891982"); // 2
      Instrmt_68_set.insert("Pool_t_536891982");
      Instrmt_68.add_attribute("CSetMo", "188404131"); // 2
      Instrmt_68_set.insert("188404131");
      Instrmt_68.add_attribute("CPPgm", "99"); // 2
      Instrmt_68_set.insert("99");
      Instrmt_68.add_attribute("CPRegT", "CPRegType_t_1711355456"); // 2
      Instrmt_68_set.insert("CPRegType_t_1711355456");
      Instrmt_68.add_attribute("Dated", "DatedDate_t_1725345848"); // 2
      Instrmt_68_set.insert("DatedDate_t_1725345848");
      Instrmt_68.add_attribute("IntAcrl", "InterestAccrualDate_t_2029037054"); // 2
      Instrmt_68_set.insert("InterestAccrualDate_t_2029037054");
      all_values.push_back(Instrmt_68_set);
      all_compo_names.insert("Instrmt_68_set");

      {
        xml_element AID_71{"AID"};
        multiset<string> AID_71_set;
        AID_71.add_attribute("AltID", "SecurityAltID_t_274792839"); // 3
        AID_71_set.insert("SecurityAltID_t_274792839");
        AID_71.add_attribute("AltIDSrc", "K"); // 3
        AID_71_set.insert("K");
        all_values.push_back(AID_71_set);
        all_compo_names.insert("AID_71_set");

        Instrmt_68.add_element(AID_71);
      }
      {
        xml_element SecXML_71{"SecXML"};
        multiset<string> SecXML_71_set;
        SecXML_71.add_attribute("Schema", "SecurityXMLSchema_t_155537829"); // 3
        SecXML_71_set.insert("SecurityXMLSchema_t_155537829");
        all_values.push_back(SecXML_71_set);
        all_compo_names.insert("SecXML_71_set");

        Instrmt_68.add_element(SecXML_71);
      }
      {
        xml_element Evnt_71{"Evnt"};
        multiset<string> Evnt_71_set;
        Evnt_71.add_attribute("EventTyp", "4"); // 3
        Evnt_71_set.insert("4");
        Evnt_71.add_attribute("Dt", "EventDate_t_17849480"); // 3
        Evnt_71_set.insert("EventDate_t_17849480");
        Evnt_71.add_attribute("Tm", "EventTime_t_1586670612"); // 3
        Evnt_71_set.insert("EventTime_t_1586670612");
        Evnt_71.add_attribute("Px", "20054647.590000"); // 3
        Evnt_71_set.insert("20054647.590000");
        Evnt_71.add_attribute("Txt", "EventText_t_936699774"); // 3
        Evnt_71_set.insert("EventText_t_936699774");
        all_values.push_back(Evnt_71_set);
        all_compo_names.insert("Evnt_71_set");

        Instrmt_68.add_element(Evnt_71);
      }
      {
        xml_element Pty_375{"Pty"};
        multiset<string> Pty_375_set;
        Pty_375.add_attribute("ID", "InstrumentPartyID_t_410996188"); // 3
        Pty_375_set.insert("InstrumentPartyID_t_410996188");
        Pty_375.add_attribute("Src", "5"); // 3
        Pty_375_set.insert("5");
        Pty_375.add_attribute("R", "84"); // 3
        Pty_375_set.insert("84");
        all_values.push_back(Pty_375_set);
        all_compo_names.insert("Pty_375_set");

        {
          xml_element Sub_375{"Sub"};
          multiset<string> Sub_375_set;
          Sub_375.add_attribute("ID", "InstrumentPartySubID_t_793664868"); // 4
          Sub_375_set.insert("InstrumentPartySubID_t_793664868");
          Sub_375.add_attribute("Typ", "27"); // 4
          Sub_375_set.insert("27");
          all_values.push_back(Sub_375_set);
          all_compo_names.insert("Sub_375_set");

          Pty_375.add_element(Sub_375);
        }
        Instrmt_68.add_element(Pty_375);
      }
      {
        xml_element CmplxEvnt_68{"CmplxEvnt"};
        multiset<string> CmplxEvnt_68_set;
        CmplxEvnt_68.add_attribute("Typ", "7"); // 3
        CmplxEvnt_68_set.insert("7");
        CmplxEvnt_68.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1800896088"); // 3
        CmplxEvnt_68_set.insert("ComplexOptPayoutAmount_t_1800896088");
        CmplxEvnt_68.add_attribute("Px", "6632261.010000"); // 3
        CmplxEvnt_68_set.insert("6632261.010000");
        CmplxEvnt_68.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_68_set.insert("5");
        CmplxEvnt_68.add_attribute("PxBndryPrcsn", "10940146.900000"); // 3
        CmplxEvnt_68_set.insert("10940146.900000");
        CmplxEvnt_68.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_68_set.insert("2");
        CmplxEvnt_68.add_attribute("Cond", "1"); // 3
        CmplxEvnt_68_set.insert("1");
        all_values.push_back(CmplxEvnt_68_set);
        all_compo_names.insert("CmplxEvnt_68_set");

        {
          xml_element EvntDts_68{"EvntDts"};
          multiset<string> EvntDts_68_set;
          EvntDts_68.add_attribute("StartDt", "ComplexEventStartDate_t_894919934"); // 4
          EvntDts_68_set.insert("ComplexEventStartDate_t_894919934");
          EvntDts_68.add_attribute("EndDt", "ComplexEventEndDate_t_290050566"); // 4
          EvntDts_68_set.insert("ComplexEventEndDate_t_290050566");
          all_values.push_back(EvntDts_68_set);
          all_compo_names.insert("EvntDts_68_set");

          {
            xml_element EvntTms_68{"EvntTms"};
            multiset<string> EvntTms_68_set;
            EvntTms_68.add_attribute("StartTm", "867401524"); // 5
            EvntTms_68_set.insert("867401524");
            EvntTms_68.add_attribute("EndTm", "484140653"); // 5
            EvntTms_68_set.insert("484140653");
            all_values.push_back(EvntTms_68_set);
            all_compo_names.insert("EvntTms_68_set");

            EvntDts_68.add_element(EvntTms_68);
          }
          CmplxEvnt_68.add_element(EvntDts_68);
        }
        Instrmt_68.add_element(CmplxEvnt_68);
      }
      RFQReq_0.add_element(Instrmt_68);
    }
    {
      xml_element Undly_96{"Undly"};
      multiset<string> Undly_96_set;
      Undly_96.add_attribute("Sym", "UnderlyingSymbol_t_718900336"); // 2
      Undly_96_set.insert("UnderlyingSymbol_t_718900336");
      Undly_96.add_attribute("Sfx", "WI"); // 2
      Undly_96_set.insert("WI");
      Undly_96.add_attribute("ID", "UnderlyingSecurityID_t_672544785"); // 2
      Undly_96_set.insert("UnderlyingSecurityID_t_672544785");
      Undly_96.add_attribute("Src", "2"); // 2
      Undly_96_set.insert("2");
      Undly_96.add_attribute("Prod", "1"); // 2
      Undly_96_set.insert("1");
      Undly_96.add_attribute("CFI", "UnderlyingCFICode_t_250406985"); // 2
      Undly_96_set.insert("UnderlyingCFICode_t_250406985");
      Undly_96.add_attribute("SecTyp", "ABS"); // 2
      Undly_96_set.insert("ABS");
      Undly_96.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1242958154"); // 2
      Undly_96_set.insert("UnderlyingSecuritySubType_t_1242958154");
      Undly_96.add_attribute("MMY", "1654488629"); // 2
      Undly_96_set.insert("1654488629");
      Undly_96.add_attribute("Mat", "UnderlyingMaturityDate_t_1808640775"); // 2
      Undly_96_set.insert("UnderlyingMaturityDate_t_1808640775");
      Undly_96.add_attribute("MatTm", "2080049277"); // 2
      Undly_96_set.insert("2080049277");
      Undly_96.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1672338110"); // 2
      Undly_96_set.insert("UnderlyingCouponPaymentDate_t_1672338110");
      Undly_96.add_attribute("RestrctTyp", "XR"); // 2
      Undly_96_set.insert("XR");
      Undly_96.add_attribute("Snrty", "SB"); // 2
      Undly_96_set.insert("SB");
      Undly_96.add_attribute("NotlPctOut", "4615542.360000"); // 2
      Undly_96_set.insert("4615542.360000");
      Undly_96.add_attribute("OrigNotlPctOut", "16588239.270000"); // 2
      Undly_96_set.insert("16588239.270000");
      Undly_96.add_attribute("AttchPnt", "8058815.830000"); // 2
      Undly_96_set.insert("8058815.830000");
      Undly_96.add_attribute("DetchPnt", "10087020.940000"); // 2
      Undly_96_set.insert("10087020.940000");
      Undly_96.add_attribute("Issued", "UnderlyingIssueDate_t_305005147"); // 2
      Undly_96_set.insert("UnderlyingIssueDate_t_305005147");
      Undly_96.add_attribute("RepoCollSecTyp", "1954683352"); // 2
      Undly_96_set.insert("1954683352");
      Undly_96.add_attribute("RepoTrm", "1473381919"); // 2
      Undly_96_set.insert("1473381919");
      Undly_96.add_attribute("RepoRt", "21059012.350000"); // 2
      Undly_96_set.insert("21059012.350000");
      Undly_96.add_attribute("Fctr", "4704258.050000"); // 2
      Undly_96_set.insert("4704258.050000");
      Undly_96.add_attribute("CrdRtg", "UnderlyingCreditRating_t_343781261"); // 2
      Undly_96_set.insert("UnderlyingCreditRating_t_343781261");
      Undly_96.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1052432278"); // 2
      Undly_96_set.insert("UnderlyingInstrRegistry_t_1052432278");
      Undly_96.add_attribute("Ctry", "382909382"); // 2
      Undly_96_set.insert("382909382");
      Undly_96.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_653600297"); // 2
      Undly_96_set.insert("UnderlyingStateOrProvinceOfIssue_t_653600297");
      Undly_96.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1947352212"); // 2
      Undly_96_set.insert("UnderlyingLocaleOfIssue_t_1947352212");
      Undly_96.add_attribute("Redeem", "UnderlyingRedemptionDate_t_672959948"); // 2
      Undly_96_set.insert("UnderlyingRedemptionDate_t_672959948");
      Undly_96.add_attribute("StrkPx", "15210018.210000"); // 2
      Undly_96_set.insert("15210018.210000");
      Undly_96.add_attribute("StrkCcy", "USD"); // 2
      Undly_96_set.insert("USD");
      Undly_96.add_attribute("OptA", "777811680"); // 2
      Undly_96_set.insert("777811680");
      Undly_96.add_attribute("Mult", "9565540.020000"); // 2
      Undly_96_set.insert("9565540.020000");
      Undly_96.add_attribute("MultTyp", "2"); // 2
      Undly_96_set.insert("2");
      Undly_96.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_96_set.insert("0");
      Undly_96.add_attribute("UOM", "Bu"); // 2
      Undly_96_set.insert("Bu");
      Undly_96.add_attribute("UOMQty", "5215454.740000"); // 2
      Undly_96_set.insert("5215454.740000");
      Undly_96.add_attribute("PxUOM", "lbs"); // 2
      Undly_96_set.insert("lbs");
      Undly_96.add_attribute("PxUOMQty", "7139659.690000"); // 2
      Undly_96_set.insert("7139659.690000");
      Undly_96.add_attribute("TmUnit", "Wk"); // 2
      Undly_96_set.insert("Wk");
      Undly_96.add_attribute("ExerStyle", "1"); // 2
      Undly_96_set.insert("1");
      Undly_96.add_attribute("CpnRt", "2388204.310000"); // 2
      Undly_96_set.insert("2388204.310000");
      Undly_96.add_attribute("Exch", "UnderlyingSecurityExchange_t_1430530341"); // 2
      Undly_96_set.insert("UnderlyingSecurityExchange_t_1430530341");
      Undly_96.add_attribute("Issr", "UnderlyingIssuer_t_564563872"); // 2
      Undly_96_set.insert("UnderlyingIssuer_t_564563872");
      Undly_96.add_attribute("EncUndIssrLen", "700374667"); // 2
      Undly_96_set.insert("700374667");
      Undly_96.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_941870620"); // 2
      Undly_96_set.insert("EncodedUnderlyingIssuer_t_941870620");
      Undly_96.add_attribute("Desc", "UnderlyingSecurityDesc_t_1370445455"); // 2
      Undly_96_set.insert("UnderlyingSecurityDesc_t_1370445455");
      Undly_96.add_attribute("EncUndSecDescLen", "1709076762"); // 2
      Undly_96_set.insert("1709076762");
      Undly_96.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1246875768"); // 2
      Undly_96_set.insert("EncodedUnderlyingSecurityDesc_t_1246875768");
      Undly_96.add_attribute("CPPgm", "UnderlyingCPProgram_t_1177645159"); // 2
      Undly_96_set.insert("UnderlyingCPProgram_t_1177645159");
      Undly_96.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1034975033"); // 2
      Undly_96_set.insert("UnderlyingCPRegType_t_1034975033");
      Undly_96.add_attribute("AllocPct", "12052933.550000"); // 2
      Undly_96_set.insert("12052933.550000");
      Undly_96.add_attribute("Ccy", "JPY"); // 2
      Undly_96_set.insert("JPY");
      Undly_96.add_attribute("Qty", "1102419.850000"); // 2
      Undly_96_set.insert("1102419.850000");
      Undly_96.add_attribute("SettlTyp", "2"); // 2
      Undly_96_set.insert("2");
      Undly_96.add_attribute("CashAmt", "UnderlyingCashAmount_t_2032356591"); // 2
      Undly_96_set.insert("UnderlyingCashAmount_t_2032356591");
      Undly_96.add_attribute("CashTyp", "DIFF"); // 2
      Undly_96_set.insert("DIFF");
      Undly_96.add_attribute("Px", "5564566.470000"); // 2
      Undly_96_set.insert("5564566.470000");
      Undly_96.add_attribute("DirtPx", "14058747.650000"); // 2
      Undly_96_set.insert("14058747.650000");
      Undly_96.add_attribute("EndPx", "1941197.670000"); // 2
      Undly_96_set.insert("1941197.670000");
      Undly_96.add_attribute("StartVal", "UnderlyingStartValue_t_1948316932"); // 2
      Undly_96_set.insert("UnderlyingStartValue_t_1948316932");
      Undly_96.add_attribute("CurVal", "UnderlyingCurrentValue_t_36202797"); // 2
      Undly_96_set.insert("UnderlyingCurrentValue_t_36202797");
      Undly_96.add_attribute("EndVal", "UnderlyingEndValue_t_1150673769"); // 2
      Undly_96_set.insert("UnderlyingEndValue_t_1150673769");
      Undly_96.add_attribute("AdjQty", "8167594.600000"); // 2
      Undly_96_set.insert("8167594.600000");
      Undly_96.add_attribute("FxRate", "17821797.930000"); // 2
      Undly_96_set.insert("17821797.930000");
      Undly_96.add_attribute("FxRateCalc", "D"); // 2
      Undly_96_set.insert("D");
      Undly_96.add_attribute("CapValu", "UnderlyingCapValue_t_1338304934"); // 2
      Undly_96_set.insert("UnderlyingCapValue_t_1338304934");
      Undly_96.add_attribute("SetMeth", "UnderlyingSettlMethod_t_476147646"); // 2
      Undly_96_set.insert("UnderlyingSettlMethod_t_476147646");
      Undly_96.add_attribute("PutCall", "924117078"); // 2
      Undly_96_set.insert("924117078");
      all_values.push_back(Undly_96_set);
      all_compo_names.insert("Undly_96_set");

      {
        xml_element UndAID_96{"UndAID"};
        multiset<string> UndAID_96_set;
        UndAID_96.add_attribute("AltID", "UnderlyingSecurityAltID_t_1521007535"); // 3
        UndAID_96_set.insert("UnderlyingSecurityAltID_t_1521007535");
        UndAID_96.add_attribute("AltIDSrc", "G"); // 3
        UndAID_96_set.insert("G");
        all_values.push_back(UndAID_96_set);
        all_compo_names.insert("UndAID_96_set");

        Undly_96.add_element(UndAID_96);
      }
      {
        xml_element Stip_157{"Stip"};
        multiset<string> Stip_157_set;
        Stip_157.add_attribute("Typ", "BROKERCREDIT"); // 3
        Stip_157_set.insert("BROKERCREDIT");
        Stip_157.add_attribute("Val", "UnderlyingStipValue_t_804054228"); // 3
        Stip_157_set.insert("UnderlyingStipValue_t_804054228");
        all_values.push_back(Stip_157_set);
        all_compo_names.insert("Stip_157_set");

        Undly_96.add_element(Stip_157);
      }
      {
        xml_element Pty_376{"Pty"};
        multiset<string> Pty_376_set;
        Pty_376.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1814728649"); // 3
        Pty_376_set.insert("UnderlyingInstrumentPartyID_t_1814728649");
        Pty_376.add_attribute("Src", "3"); // 3
        Pty_376_set.insert("3");
        Pty_376.add_attribute("R", "56"); // 3
        Pty_376_set.insert("56");
        all_values.push_back(Pty_376_set);
        all_compo_names.insert("Pty_376_set");

        {
          xml_element Sub_376{"Sub"};
          multiset<string> Sub_376_set;
          Sub_376.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1037690457"); // 4
          Sub_376_set.insert("UnderlyingInstrumentPartySubID_t_1037690457");
          Sub_376.add_attribute("Typ", "15"); // 4
          Sub_376_set.insert("15");
          all_values.push_back(Sub_376_set);
          all_compo_names.insert("Sub_376_set");

          Pty_376.add_element(Sub_376);
        }
        Undly_96.add_element(Pty_376);
      }
      RFQReq_0.add_element(Undly_96);
    }
    {
      xml_element Leg_81{"Leg"};
      multiset<string> Leg_81_set;
      Leg_81.add_attribute("Sym", "LegSymbol_t_845316969"); // 2
      Leg_81_set.insert("LegSymbol_t_845316969");
      Leg_81.add_attribute("Sfx", "CD"); // 2
      Leg_81_set.insert("CD");
      Leg_81.add_attribute("ID", "LegSecurityID_t_312396676"); // 2
      Leg_81_set.insert("LegSecurityID_t_312396676");
      Leg_81.add_attribute("Src", "5"); // 2
      Leg_81_set.insert("5");
      Leg_81.add_attribute("Prod", "7"); // 2
      Leg_81_set.insert("7");
      Leg_81.add_attribute("CFI", "LegCFICode_t_1691152970"); // 2
      Leg_81_set.insert("LegCFICode_t_1691152970");
      Leg_81.add_attribute("SecTyp", "VRDN"); // 2
      Leg_81_set.insert("VRDN");
      Leg_81.add_attribute("SecSubTyp", "LegSecuritySubType_t_1599419632"); // 2
      Leg_81_set.insert("LegSecuritySubType_t_1599419632");
      Leg_81.add_attribute("MMY", "1576025914"); // 2
      Leg_81_set.insert("1576025914");
      Leg_81.add_attribute("Mat", "LegMaturityDate_t_2070962859"); // 2
      Leg_81_set.insert("LegMaturityDate_t_2070962859");
      Leg_81.add_attribute("MatTm", "8392632"); // 2
      Leg_81_set.insert("8392632");
      Leg_81.add_attribute("CpnPmt", "LegCouponPaymentDate_t_834417031"); // 2
      Leg_81_set.insert("LegCouponPaymentDate_t_834417031");
      Leg_81.add_attribute("Issued", "LegIssueDate_t_117598978"); // 2
      Leg_81_set.insert("LegIssueDate_t_117598978");
      Leg_81.add_attribute("RepoCollSecTyp", "1956709564"); // 2
      Leg_81_set.insert("1956709564");
      Leg_81.add_attribute("RepoTrm", "870619828"); // 2
      Leg_81_set.insert("870619828");
      Leg_81.add_attribute("RepoRt", "12682727.480000"); // 2
      Leg_81_set.insert("12682727.480000");
      Leg_81.add_attribute("Fctr", "6259853.760000"); // 2
      Leg_81_set.insert("6259853.760000");
      Leg_81.add_attribute("CrdRtg", "LegCreditRating_t_505315973"); // 2
      Leg_81_set.insert("LegCreditRating_t_505315973");
      Leg_81.add_attribute("Rgstry", "LegInstrRegistry_t_1478423857"); // 2
      Leg_81_set.insert("LegInstrRegistry_t_1478423857");
      Leg_81.add_attribute("Ctry", "1964290310"); // 2
      Leg_81_set.insert("1964290310");
      Leg_81.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_981463620"); // 2
      Leg_81_set.insert("LegStateOrProvinceOfIssue_t_981463620");
      Leg_81.add_attribute("Lcl", "LegLocaleOfIssue_t_255057287"); // 2
      Leg_81_set.insert("LegLocaleOfIssue_t_255057287");
      Leg_81.add_attribute("Redeem", "LegRedemptionDate_t_1337814197"); // 2
      Leg_81_set.insert("LegRedemptionDate_t_1337814197");
      Leg_81.add_attribute("Strk", "841447.490000"); // 2
      Leg_81_set.insert("841447.490000");
      Leg_81.add_attribute("StrkCcy", "USD"); // 2
      Leg_81_set.insert("USD");
      Leg_81.add_attribute("OptA", "1898873399"); // 2
      Leg_81_set.insert("1898873399");
      Leg_81.add_attribute("Cmult", "11338233.240000"); // 2
      Leg_81_set.insert("11338233.240000");
      Leg_81.add_attribute("MultTyp", "0"); // 2
      Leg_81_set.insert("0");
      Leg_81.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_81_set.insert("3");
      Leg_81.add_attribute("UOM", "Gal"); // 2
      Leg_81_set.insert("Gal");
      Leg_81.add_attribute("UOMQty", "4381429.480000"); // 2
      Leg_81_set.insert("4381429.480000");
      Leg_81.add_attribute("PxUOM", "USD"); // 2
      Leg_81_set.insert("USD");
      Leg_81.add_attribute("PxUOMQty", "7236416.430000"); // 2
      Leg_81_set.insert("7236416.430000");
      Leg_81.add_attribute("TmUnit", "D"); // 2
      Leg_81_set.insert("D");
      Leg_81.add_attribute("ExerStyle", "1"); // 2
      Leg_81_set.insert("1");
      Leg_81.add_attribute("CpnRt", "2673109.650000"); // 2
      Leg_81_set.insert("2673109.650000");
      Leg_81.add_attribute("Exch", "LegSecurityExchange_t_354638286"); // 2
      Leg_81_set.insert("LegSecurityExchange_t_354638286");
      Leg_81.add_attribute("Issr", "LegIssuer_t_2024791094"); // 2
      Leg_81_set.insert("LegIssuer_t_2024791094");
      Leg_81.add_attribute("EncLegIssrLen", "1843336879"); // 2
      Leg_81_set.insert("1843336879");
      Leg_81.add_attribute("EncLegIssr", "EncodedLegIssuer_t_278117498"); // 2
      Leg_81_set.insert("EncodedLegIssuer_t_278117498");
      Leg_81.add_attribute("Desc", "LegSecurityDesc_t_2033183726"); // 2
      Leg_81_set.insert("LegSecurityDesc_t_2033183726");
      Leg_81.add_attribute("EncLegSecDescLen", "530270262"); // 2
      Leg_81_set.insert("530270262");
      Leg_81.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_395716476"); // 2
      Leg_81_set.insert("EncodedLegSecurityDesc_t_395716476");
      Leg_81.add_attribute("RatioQty", "18424096.420000"); // 2
      Leg_81_set.insert("18424096.420000");
      Leg_81.add_attribute("Side", "C"); // 2
      Leg_81_set.insert("C");
      Leg_81.add_attribute("Ccy", "GBP"); // 2
      Leg_81_set.insert("GBP");
      Leg_81.add_attribute("Pool", "LegPool_t_1906206064"); // 2
      Leg_81_set.insert("LegPool_t_1906206064");
      Leg_81.add_attribute("Dated", "LegDatedDate_t_994929433"); // 2
      Leg_81_set.insert("LegDatedDate_t_994929433");
      Leg_81.add_attribute("CSetMo", "137718032"); // 2
      Leg_81_set.insert("137718032");
      Leg_81.add_attribute("IntAcrl", "LegInterestAccrualDate_t_740186036"); // 2
      Leg_81_set.insert("LegInterestAccrualDate_t_740186036");
      Leg_81.add_attribute("PutCall", "1249986720"); // 2
      Leg_81_set.insert("1249986720");
      Leg_81.add_attribute("LegOptionRatio", "14755322.300000"); // 2
      Leg_81_set.insert("14755322.300000");
      Leg_81.add_attribute("Px", "8243307.860000"); // 2
      Leg_81_set.insert("8243307.860000");
      all_values.push_back(Leg_81_set);
      all_compo_names.insert("Leg_81_set");

      {
        xml_element LegAID_76{"LegAID"};
        multiset<string> LegAID_76_set;
        LegAID_76.add_attribute("SecAltID", "LegSecurityAltID_t_520497868"); // 3
        LegAID_76_set.insert("LegSecurityAltID_t_520497868");
        LegAID_76.add_attribute("SecAltIDSrc", "B"); // 3
        LegAID_76_set.insert("B");
        all_values.push_back(LegAID_76_set);
        all_compo_names.insert("LegAID_76_set");

        Leg_81.add_element(LegAID_76);
      }
      RFQReq_0.add_element(Leg_81);
    }
    elt.add_element(RFQReq_0);
  } // end RFQReq
  { // RFQReq
    xml_element RFQReq_1{"RFQReq"};
    multiset<string> RFQReq_1_set;
    RFQReq_1.add_attribute("PrevClsPx", "5757205.370000"); // 1
    RFQReq_1_set.insert("5757205.370000");
    RFQReq_1.add_attribute("ReqTyp", "2"); // 1
    RFQReq_1_set.insert("2");
    RFQReq_1.add_attribute("Typ", "3"); // 1
    RFQReq_1_set.insert("3");
    RFQReq_1.add_attribute("SesID", "6"); // 1
    RFQReq_1_set.insert("6");
    RFQReq_1.add_attribute("SesSub", "1"); // 1
    RFQReq_1_set.insert("1");
    all_values.push_back(RFQReq_1_set);
    all_compo_names.insert("RFQReq_1_set");

    {
      xml_element Instrmt_69{"Instrmt"};
      multiset<string> Instrmt_69_set;
      Instrmt_69.add_attribute("Sym", "Symbol_t_1500885935"); // 2
      Instrmt_69_set.insert("Symbol_t_1500885935");
      Instrmt_69.add_attribute("Sfx", "WI"); // 2
      Instrmt_69_set.insert("WI");
      Instrmt_69.add_attribute("ID", "SecurityID_t_641724155"); // 2
      Instrmt_69_set.insert("SecurityID_t_641724155");
      Instrmt_69.add_attribute("Src", "E"); // 2
      Instrmt_69_set.insert("E");
      Instrmt_69.add_attribute("Prod", "12"); // 2
      Instrmt_69_set.insert("12");
      Instrmt_69.add_attribute("ProdCmplx", "ProductComplex_t_909035120"); // 2
      Instrmt_69_set.insert("ProductComplex_t_909035120");
      Instrmt_69.add_attribute("SecGrp", "SecurityGroup_t_49310198"); // 2
      Instrmt_69_set.insert("SecurityGroup_t_49310198");
      Instrmt_69.add_attribute("CFI", "CFICode_t_376928182"); // 2
      Instrmt_69_set.insert("CFICode_t_376928182");
      Instrmt_69.add_attribute("SecTyp", "RAN"); // 2
      Instrmt_69_set.insert("RAN");
      Instrmt_69.add_attribute("SubTyp", "SecuritySubType_t_327427696"); // 2
      Instrmt_69_set.insert("SecuritySubType_t_327427696");
      Instrmt_69.add_attribute("MMY", "262628260"); // 2
      Instrmt_69_set.insert("262628260");
      Instrmt_69.add_attribute("MatDt", "MaturityDate_t_1135158614"); // 2
      Instrmt_69_set.insert("MaturityDate_t_1135158614");
      Instrmt_69.add_attribute("MatTm", "723144172"); // 2
      Instrmt_69_set.insert("723144172");
      Instrmt_69.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2105037903"); // 2
      Instrmt_69_set.insert("SettleOnOpenFlag_t_2105037903");
      Instrmt_69.add_attribute("AsgnMeth", "388565057"); // 2
      Instrmt_69_set.insert("388565057");
      Instrmt_69.add_attribute("Status", "2"); // 2
      Instrmt_69_set.insert("2");
      Instrmt_69.add_attribute("CpnPmt", "CouponPaymentDate_t_278465625"); // 2
      Instrmt_69_set.insert("CouponPaymentDate_t_278465625");
      Instrmt_69.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_69_set.insert("MM");
      Instrmt_69.add_attribute("Snrty", "SD"); // 2
      Instrmt_69_set.insert("SD");
      Instrmt_69.add_attribute("NotlPctOut", "4161836.580000"); // 2
      Instrmt_69_set.insert("4161836.580000");
      Instrmt_69.add_attribute("OrigNotlPctOut", "8874735.100000"); // 2
      Instrmt_69_set.insert("8874735.100000");
      Instrmt_69.add_attribute("AttchPnt", "3370822.550000"); // 2
      Instrmt_69_set.insert("3370822.550000");
      Instrmt_69.add_attribute("DetchPnt", "18917158.880000"); // 2
      Instrmt_69_set.insert("18917158.880000");
      Instrmt_69.add_attribute("Issued", "IssueDate_t_1711804296"); // 2
      Instrmt_69_set.insert("IssueDate_t_1711804296");
      Instrmt_69.add_attribute("RepoCollSecTyp", "857580123"); // 2
      Instrmt_69_set.insert("857580123");
      Instrmt_69.add_attribute("RepoTrm", "1214149248"); // 2
      Instrmt_69_set.insert("1214149248");
      Instrmt_69.add_attribute("RepoRt", "1400411.850000"); // 2
      Instrmt_69_set.insert("1400411.850000");
      Instrmt_69.add_attribute("Fctr", "3644176.680000"); // 2
      Instrmt_69_set.insert("3644176.680000");
      Instrmt_69.add_attribute("CrdRtg", "CreditRating_t_129408587"); // 2
      Instrmt_69_set.insert("CreditRating_t_129408587");
      Instrmt_69.add_attribute("Rgstry", "InstrRegistry_t_1504841930"); // 2
      Instrmt_69_set.insert("InstrRegistry_t_1504841930");
      Instrmt_69.add_attribute("IssuCtry", "282500180"); // 2
      Instrmt_69_set.insert("282500180");
      Instrmt_69.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1630294522"); // 2
      Instrmt_69_set.insert("StateOrProvinceOfIssue_t_1630294522");
      Instrmt_69.add_attribute("Lcl", "LocaleOfIssue_t_1579091204"); // 2
      Instrmt_69_set.insert("LocaleOfIssue_t_1579091204");
      Instrmt_69.add_attribute("Redeem", "RedemptionDate_t_924224335"); // 2
      Instrmt_69_set.insert("RedemptionDate_t_924224335");
      Instrmt_69.add_attribute("StrkPx", "13249664.330000"); // 2
      Instrmt_69_set.insert("13249664.330000");
      Instrmt_69.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_69_set.insert("JPY");
      Instrmt_69.add_attribute("StrkMult", "13742766.310000"); // 2
      Instrmt_69_set.insert("13742766.310000");
      Instrmt_69.add_attribute("StrkValu", "3081564.730000"); // 2
      Instrmt_69_set.insert("3081564.730000");
      Instrmt_69.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_69_set.insert("1");
      Instrmt_69.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_69_set.insert("3");
      Instrmt_69.add_attribute("StrkPxBndryPrcsn", "5707847.340000"); // 2
      Instrmt_69_set.insert("5707847.340000");
      Instrmt_69.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_69_set.insert("3");
      Instrmt_69.add_attribute("OptAt", "277364852"); // 2
      Instrmt_69_set.insert("277364852");
      Instrmt_69.add_attribute("Mult", "5283389.890000"); // 2
      Instrmt_69_set.insert("5283389.890000");
      Instrmt_69.add_attribute("MultTyp", "0"); // 2
      Instrmt_69_set.insert("0");
      Instrmt_69.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_69_set.insert("1");
      Instrmt_69.add_attribute("MinPxIncr", "8068046.140000"); // 2
      Instrmt_69_set.insert("8068046.140000");
      Instrmt_69.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1961675306"); // 2
      Instrmt_69_set.insert("MinPriceIncrementAmount_t_1961675306");
      Instrmt_69.add_attribute("UOM", "t"); // 2
      Instrmt_69_set.insert("t");
      Instrmt_69.add_attribute("UOMQty", "12229882.720000"); // 2
      Instrmt_69_set.insert("12229882.720000");
      Instrmt_69.add_attribute("PxUOM", "USD"); // 2
      Instrmt_69_set.insert("USD");
      Instrmt_69.add_attribute("PxUOMQty", "20886760.380000"); // 2
      Instrmt_69_set.insert("20886760.380000");
      Instrmt_69.add_attribute("SettlMeth", "C"); // 2
      Instrmt_69_set.insert("C");
      Instrmt_69.add_attribute("ExerStyle", "0"); // 2
      Instrmt_69_set.insert("0");
      Instrmt_69.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_69_set.insert("3");
      Instrmt_69.add_attribute("OptPayAmt", "OptPayoutAmount_t_33886112"); // 2
      Instrmt_69_set.insert("OptPayoutAmount_t_33886112");
      Instrmt_69.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_69_set.insert("INT");
      Instrmt_69.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_69_set.insert("FUTDA");
      Instrmt_69.add_attribute("ListMeth", "1"); // 2
      Instrmt_69_set.insert("1");
      Instrmt_69.add_attribute("CapPx", "19108689.330000"); // 2
      Instrmt_69_set.insert("19108689.330000");
      Instrmt_69.add_attribute("FlrPx", "14456903.630000"); // 2
      Instrmt_69_set.insert("14456903.630000");
      Instrmt_69.add_attribute("PutCall", "1"); // 2
      Instrmt_69_set.insert("1");
      Instrmt_69.add_attribute("FlexInd", "false"); // 2
      Instrmt_69_set.insert("false");
      Instrmt_69.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_69_set.insert("true");
      Instrmt_69.add_attribute("TmUnit", "D"); // 2
      Instrmt_69_set.insert("D");
      Instrmt_69.add_attribute("CpnRt", "12737047.800000"); // 2
      Instrmt_69_set.insert("12737047.800000");
      Instrmt_69.add_attribute("Exch", "SecurityExchange_t_2055690506"); // 2
      Instrmt_69_set.insert("SecurityExchange_t_2055690506");
      Instrmt_69.add_attribute("PosLmt", "197864990"); // 2
      Instrmt_69_set.insert("197864990");
      Instrmt_69.add_attribute("NTPosLmt", "1581861254"); // 2
      Instrmt_69_set.insert("1581861254");
      Instrmt_69.add_attribute("Issr", "Issuer_t_198871018"); // 2
      Instrmt_69_set.insert("Issuer_t_198871018");
      Instrmt_69.add_attribute("EncIssrLen", "1899569318"); // 2
      Instrmt_69_set.insert("1899569318");
      Instrmt_69.add_attribute("EncIssr", "EncodedIssuer_t_5162340"); // 2
      Instrmt_69_set.insert("EncodedIssuer_t_5162340");
      Instrmt_69.add_attribute("Desc", "SecurityDesc_t_1624693793"); // 2
      Instrmt_69_set.insert("SecurityDesc_t_1624693793");
      Instrmt_69.add_attribute("EncSecDescLen", "29450522"); // 2
      Instrmt_69_set.insert("29450522");
      Instrmt_69.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_533501329"); // 2
      Instrmt_69_set.insert("EncodedSecurityDesc_t_533501329");
      Instrmt_69.add_attribute("Pool", "Pool_t_1291597977"); // 2
      Instrmt_69_set.insert("Pool_t_1291597977");
      Instrmt_69.add_attribute("CSetMo", "546465123"); // 2
      Instrmt_69_set.insert("546465123");
      Instrmt_69.add_attribute("CPPgm", "99"); // 2
      Instrmt_69_set.insert("99");
      Instrmt_69.add_attribute("CPRegT", "CPRegType_t_1105789635"); // 2
      Instrmt_69_set.insert("CPRegType_t_1105789635");
      Instrmt_69.add_attribute("Dated", "DatedDate_t_150575258"); // 2
      Instrmt_69_set.insert("DatedDate_t_150575258");
      Instrmt_69.add_attribute("IntAcrl", "InterestAccrualDate_t_415810568"); // 2
      Instrmt_69_set.insert("InterestAccrualDate_t_415810568");
      all_values.push_back(Instrmt_69_set);
      all_compo_names.insert("Instrmt_69_set");

      {
        xml_element AID_72{"AID"};
        multiset<string> AID_72_set;
        AID_72.add_attribute("AltID", "SecurityAltID_t_1807454803"); // 3
        AID_72_set.insert("SecurityAltID_t_1807454803");
        AID_72.add_attribute("AltIDSrc", "I"); // 3
        AID_72_set.insert("I");
        all_values.push_back(AID_72_set);
        all_compo_names.insert("AID_72_set");

        Instrmt_69.add_element(AID_72);
      }
      {
        xml_element SecXML_72{"SecXML"};
        multiset<string> SecXML_72_set;
        SecXML_72.add_attribute("Schema", "SecurityXMLSchema_t_1383031080"); // 3
        SecXML_72_set.insert("SecurityXMLSchema_t_1383031080");
        all_values.push_back(SecXML_72_set);
        all_compo_names.insert("SecXML_72_set");

        Instrmt_69.add_element(SecXML_72);
      }
      {
        xml_element Evnt_72{"Evnt"};
        multiset<string> Evnt_72_set;
        Evnt_72.add_attribute("EventTyp", "1"); // 3
        Evnt_72_set.insert("1");
        Evnt_72.add_attribute("Dt", "EventDate_t_890540163"); // 3
        Evnt_72_set.insert("EventDate_t_890540163");
        Evnt_72.add_attribute("Tm", "EventTime_t_1416917193"); // 3
        Evnt_72_set.insert("EventTime_t_1416917193");
        Evnt_72.add_attribute("Px", "3319839.750000"); // 3
        Evnt_72_set.insert("3319839.750000");
        Evnt_72.add_attribute("Txt", "EventText_t_2053730345"); // 3
        Evnt_72_set.insert("EventText_t_2053730345");
        all_values.push_back(Evnt_72_set);
        all_compo_names.insert("Evnt_72_set");

        Instrmt_69.add_element(Evnt_72);
      }
      {
        xml_element Pty_377{"Pty"};
        multiset<string> Pty_377_set;
        Pty_377.add_attribute("ID", "InstrumentPartyID_t_1580211892"); // 3
        Pty_377_set.insert("InstrumentPartyID_t_1580211892");
        Pty_377.add_attribute("Src", "5"); // 3
        Pty_377_set.insert("5");
        Pty_377.add_attribute("R", "70"); // 3
        Pty_377_set.insert("70");
        all_values.push_back(Pty_377_set);
        all_compo_names.insert("Pty_377_set");

        {
          xml_element Sub_377{"Sub"};
          multiset<string> Sub_377_set;
          Sub_377.add_attribute("ID", "InstrumentPartySubID_t_1226317466"); // 4
          Sub_377_set.insert("InstrumentPartySubID_t_1226317466");
          Sub_377.add_attribute("Typ", "19"); // 4
          Sub_377_set.insert("19");
          all_values.push_back(Sub_377_set);
          all_compo_names.insert("Sub_377_set");

          Pty_377.add_element(Sub_377);
        }
        Instrmt_69.add_element(Pty_377);
      }
      {
        xml_element CmplxEvnt_69{"CmplxEvnt"};
        multiset<string> CmplxEvnt_69_set;
        CmplxEvnt_69.add_attribute("Typ", "2"); // 3
        CmplxEvnt_69_set.insert("2");
        CmplxEvnt_69.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_49905825"); // 3
        CmplxEvnt_69_set.insert("ComplexOptPayoutAmount_t_49905825");
        CmplxEvnt_69.add_attribute("Px", "5640668.810000"); // 3
        CmplxEvnt_69_set.insert("5640668.810000");
        CmplxEvnt_69.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_69_set.insert("5");
        CmplxEvnt_69.add_attribute("PxBndryPrcsn", "2477708.150000"); // 3
        CmplxEvnt_69_set.insert("2477708.150000");
        CmplxEvnt_69.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_69_set.insert("2");
        CmplxEvnt_69.add_attribute("Cond", "1"); // 3
        CmplxEvnt_69_set.insert("1");
        all_values.push_back(CmplxEvnt_69_set);
        all_compo_names.insert("CmplxEvnt_69_set");

        {
          xml_element EvntDts_69{"EvntDts"};
          multiset<string> EvntDts_69_set;
          EvntDts_69.add_attribute("StartDt", "ComplexEventStartDate_t_2147340133"); // 4
          EvntDts_69_set.insert("ComplexEventStartDate_t_2147340133");
          EvntDts_69.add_attribute("EndDt", "ComplexEventEndDate_t_3606827"); // 4
          EvntDts_69_set.insert("ComplexEventEndDate_t_3606827");
          all_values.push_back(EvntDts_69_set);
          all_compo_names.insert("EvntDts_69_set");

          {
            xml_element EvntTms_69{"EvntTms"};
            multiset<string> EvntTms_69_set;
            EvntTms_69.add_attribute("StartTm", "1158656133"); // 5
            EvntTms_69_set.insert("1158656133");
            EvntTms_69.add_attribute("EndTm", "29307007"); // 5
            EvntTms_69_set.insert("29307007");
            all_values.push_back(EvntTms_69_set);
            all_compo_names.insert("EvntTms_69_set");

            EvntDts_69.add_element(EvntTms_69);
          }
          CmplxEvnt_69.add_element(EvntDts_69);
        }
        Instrmt_69.add_element(CmplxEvnt_69);
      }
      RFQReq_1.add_element(Instrmt_69);
    }
    {
      xml_element Undly_97{"Undly"};
      multiset<string> Undly_97_set;
      Undly_97.add_attribute("Sym", "UnderlyingSymbol_t_537108156"); // 2
      Undly_97_set.insert("UnderlyingSymbol_t_537108156");
      Undly_97.add_attribute("Sfx", "CD"); // 2
      Undly_97_set.insert("CD");
      Undly_97.add_attribute("ID", "UnderlyingSecurityID_t_575772130"); // 2
      Undly_97_set.insert("UnderlyingSecurityID_t_575772130");
      Undly_97.add_attribute("Src", "D"); // 2
      Undly_97_set.insert("D");
      Undly_97.add_attribute("Prod", "6"); // 2
      Undly_97_set.insert("6");
      Undly_97.add_attribute("CFI", "UnderlyingCFICode_t_726347389"); // 2
      Undly_97_set.insert("UnderlyingCFICode_t_726347389");
      Undly_97.add_attribute("SecTyp", "MT"); // 2
      Undly_97_set.insert("MT");
      Undly_97.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1068531252"); // 2
      Undly_97_set.insert("UnderlyingSecuritySubType_t_1068531252");
      Undly_97.add_attribute("MMY", "818115038"); // 2
      Undly_97_set.insert("818115038");
      Undly_97.add_attribute("Mat", "UnderlyingMaturityDate_t_1528772100"); // 2
      Undly_97_set.insert("UnderlyingMaturityDate_t_1528772100");
      Undly_97.add_attribute("MatTm", "994488225"); // 2
      Undly_97_set.insert("994488225");
      Undly_97.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1708655201"); // 2
      Undly_97_set.insert("UnderlyingCouponPaymentDate_t_1708655201");
      Undly_97.add_attribute("RestrctTyp", "MR"); // 2
      Undly_97_set.insert("MR");
      Undly_97.add_attribute("Snrty", "SD"); // 2
      Undly_97_set.insert("SD");
      Undly_97.add_attribute("NotlPctOut", "16149018.980000"); // 2
      Undly_97_set.insert("16149018.980000");
      Undly_97.add_attribute("OrigNotlPctOut", "2309338.900000"); // 2
      Undly_97_set.insert("2309338.900000");
      Undly_97.add_attribute("AttchPnt", "14218414.600000"); // 2
      Undly_97_set.insert("14218414.600000");
      Undly_97.add_attribute("DetchPnt", "8193553.110000"); // 2
      Undly_97_set.insert("8193553.110000");
      Undly_97.add_attribute("Issued", "UnderlyingIssueDate_t_1457251356"); // 2
      Undly_97_set.insert("UnderlyingIssueDate_t_1457251356");
      Undly_97.add_attribute("RepoCollSecTyp", "712203561"); // 2
      Undly_97_set.insert("712203561");
      Undly_97.add_attribute("RepoTrm", "246239774"); // 2
      Undly_97_set.insert("246239774");
      Undly_97.add_attribute("RepoRt", "15071571.810000"); // 2
      Undly_97_set.insert("15071571.810000");
      Undly_97.add_attribute("Fctr", "12762704.420000"); // 2
      Undly_97_set.insert("12762704.420000");
      Undly_97.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1728814743"); // 2
      Undly_97_set.insert("UnderlyingCreditRating_t_1728814743");
      Undly_97.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1754927996"); // 2
      Undly_97_set.insert("UnderlyingInstrRegistry_t_1754927996");
      Undly_97.add_attribute("Ctry", "1274714930"); // 2
      Undly_97_set.insert("1274714930");
      Undly_97.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1262777083"); // 2
      Undly_97_set.insert("UnderlyingStateOrProvinceOfIssue_t_1262777083");
      Undly_97.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1754784482"); // 2
      Undly_97_set.insert("UnderlyingLocaleOfIssue_t_1754784482");
      Undly_97.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1278321757"); // 2
      Undly_97_set.insert("UnderlyingRedemptionDate_t_1278321757");
      Undly_97.add_attribute("StrkPx", "2739495.680000"); // 2
      Undly_97_set.insert("2739495.680000");
      Undly_97.add_attribute("StrkCcy", "GBP"); // 2
      Undly_97_set.insert("GBP");
      Undly_97.add_attribute("OptA", "576720030"); // 2
      Undly_97_set.insert("576720030");
      Undly_97.add_attribute("Mult", "2123799.720000"); // 2
      Undly_97_set.insert("2123799.720000");
      Undly_97.add_attribute("MultTyp", "0"); // 2
      Undly_97_set.insert("0");
      Undly_97.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_97_set.insert("2");
      Undly_97.add_attribute("UOM", "MWh"); // 2
      Undly_97_set.insert("MWh");
      Undly_97.add_attribute("UOMQty", "16911013.860000"); // 2
      Undly_97_set.insert("16911013.860000");
      Undly_97.add_attribute("PxUOM", "Bu"); // 2
      Undly_97_set.insert("Bu");
      Undly_97.add_attribute("PxUOMQty", "17568423.990000"); // 2
      Undly_97_set.insert("17568423.990000");
      Undly_97.add_attribute("TmUnit", "H"); // 2
      Undly_97_set.insert("H");
      Undly_97.add_attribute("ExerStyle", "0"); // 2
      Undly_97_set.insert("0");
      Undly_97.add_attribute("CpnRt", "13180139.520000"); // 2
      Undly_97_set.insert("13180139.520000");
      Undly_97.add_attribute("Exch", "UnderlyingSecurityExchange_t_1870595484"); // 2
      Undly_97_set.insert("UnderlyingSecurityExchange_t_1870595484");
      Undly_97.add_attribute("Issr", "UnderlyingIssuer_t_1079804509"); // 2
      Undly_97_set.insert("UnderlyingIssuer_t_1079804509");
      Undly_97.add_attribute("EncUndIssrLen", "785432202"); // 2
      Undly_97_set.insert("785432202");
      Undly_97.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2101529374"); // 2
      Undly_97_set.insert("EncodedUnderlyingIssuer_t_2101529374");
      Undly_97.add_attribute("Desc", "UnderlyingSecurityDesc_t_354162321"); // 2
      Undly_97_set.insert("UnderlyingSecurityDesc_t_354162321");
      Undly_97.add_attribute("EncUndSecDescLen", "1604787513"); // 2
      Undly_97_set.insert("1604787513");
      Undly_97.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1411297082"); // 2
      Undly_97_set.insert("EncodedUnderlyingSecurityDesc_t_1411297082");
      Undly_97.add_attribute("CPPgm", "UnderlyingCPProgram_t_1066365882"); // 2
      Undly_97_set.insert("UnderlyingCPProgram_t_1066365882");
      Undly_97.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1851027287"); // 2
      Undly_97_set.insert("UnderlyingCPRegType_t_1851027287");
      Undly_97.add_attribute("AllocPct", "7709706.150000"); // 2
      Undly_97_set.insert("7709706.150000");
      Undly_97.add_attribute("Ccy", "EUR"); // 2
      Undly_97_set.insert("EUR");
      Undly_97.add_attribute("Qty", "3784149.630000"); // 2
      Undly_97_set.insert("3784149.630000");
      Undly_97.add_attribute("SettlTyp", "5"); // 2
      Undly_97_set.insert("5");
      Undly_97.add_attribute("CashAmt", "UnderlyingCashAmount_t_547651818"); // 2
      Undly_97_set.insert("UnderlyingCashAmount_t_547651818");
      Undly_97.add_attribute("CashTyp", "DIFF"); // 2
      Undly_97_set.insert("DIFF");
      Undly_97.add_attribute("Px", "6007057.160000"); // 2
      Undly_97_set.insert("6007057.160000");
      Undly_97.add_attribute("DirtPx", "8216013.870000"); // 2
      Undly_97_set.insert("8216013.870000");
      Undly_97.add_attribute("EndPx", "17698072.870000"); // 2
      Undly_97_set.insert("17698072.870000");
      Undly_97.add_attribute("StartVal", "UnderlyingStartValue_t_268651982"); // 2
      Undly_97_set.insert("UnderlyingStartValue_t_268651982");
      Undly_97.add_attribute("CurVal", "UnderlyingCurrentValue_t_1398321417"); // 2
      Undly_97_set.insert("UnderlyingCurrentValue_t_1398321417");
      Undly_97.add_attribute("EndVal", "UnderlyingEndValue_t_1982187259"); // 2
      Undly_97_set.insert("UnderlyingEndValue_t_1982187259");
      Undly_97.add_attribute("AdjQty", "18140123.480000"); // 2
      Undly_97_set.insert("18140123.480000");
      Undly_97.add_attribute("FxRate", "12361178.970000"); // 2
      Undly_97_set.insert("12361178.970000");
      Undly_97.add_attribute("FxRateCalc", "M"); // 2
      Undly_97_set.insert("M");
      Undly_97.add_attribute("CapValu", "UnderlyingCapValue_t_1357630086"); // 2
      Undly_97_set.insert("UnderlyingCapValue_t_1357630086");
      Undly_97.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2142445629"); // 2
      Undly_97_set.insert("UnderlyingSettlMethod_t_2142445629");
      Undly_97.add_attribute("PutCall", "382789723"); // 2
      Undly_97_set.insert("382789723");
      all_values.push_back(Undly_97_set);
      all_compo_names.insert("Undly_97_set");

      {
        xml_element UndAID_97{"UndAID"};
        multiset<string> UndAID_97_set;
        UndAID_97.add_attribute("AltID", "UnderlyingSecurityAltID_t_282536276"); // 3
        UndAID_97_set.insert("UnderlyingSecurityAltID_t_282536276");
        UndAID_97.add_attribute("AltIDSrc", "B"); // 3
        UndAID_97_set.insert("B");
        all_values.push_back(UndAID_97_set);
        all_compo_names.insert("UndAID_97_set");

        Undly_97.add_element(UndAID_97);
      }
      {
        xml_element Stip_158{"Stip"};
        multiset<string> Stip_158_set;
        Stip_158.add_attribute("Typ", "PRIMARY"); // 3
        Stip_158_set.insert("PRIMARY");
        Stip_158.add_attribute("Val", "UnderlyingStipValue_t_5648112"); // 3
        Stip_158_set.insert("UnderlyingStipValue_t_5648112");
        all_values.push_back(Stip_158_set);
        all_compo_names.insert("Stip_158_set");

        Undly_97.add_element(Stip_158);
      }
      {
        xml_element Pty_378{"Pty"};
        multiset<string> Pty_378_set;
        Pty_378.add_attribute("ID", "UnderlyingInstrumentPartyID_t_828098799"); // 3
        Pty_378_set.insert("UnderlyingInstrumentPartyID_t_828098799");
        Pty_378.add_attribute("Src", "6"); // 3
        Pty_378_set.insert("6");
        Pty_378.add_attribute("R", "30"); // 3
        Pty_378_set.insert("30");
        all_values.push_back(Pty_378_set);
        all_compo_names.insert("Pty_378_set");

        {
          xml_element Sub_378{"Sub"};
          multiset<string> Sub_378_set;
          Sub_378.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1182261120"); // 4
          Sub_378_set.insert("UnderlyingInstrumentPartySubID_t_1182261120");
          Sub_378.add_attribute("Typ", "8"); // 4
          Sub_378_set.insert("8");
          all_values.push_back(Sub_378_set);
          all_compo_names.insert("Sub_378_set");

          Pty_378.add_element(Sub_378);
        }
        Undly_97.add_element(Pty_378);
      }
      RFQReq_1.add_element(Undly_97);
    }
    {
      xml_element Leg_82{"Leg"};
      multiset<string> Leg_82_set;
      Leg_82.add_attribute("Sym", "LegSymbol_t_1370990920"); // 2
      Leg_82_set.insert("LegSymbol_t_1370990920");
      Leg_82.add_attribute("Sfx", "CD"); // 2
      Leg_82_set.insert("CD");
      Leg_82.add_attribute("ID", "LegSecurityID_t_1647083382"); // 2
      Leg_82_set.insert("LegSecurityID_t_1647083382");
      Leg_82.add_attribute("Src", "M"); // 2
      Leg_82_set.insert("M");
      Leg_82.add_attribute("Prod", "13"); // 2
      Leg_82_set.insert("13");
      Leg_82.add_attribute("CFI", "LegCFICode_t_931958117"); // 2
      Leg_82_set.insert("LegCFICode_t_931958117");
      Leg_82.add_attribute("SecTyp", "EUFRN"); // 2
      Leg_82_set.insert("EUFRN");
      Leg_82.add_attribute("SecSubTyp", "LegSecuritySubType_t_1766163637"); // 2
      Leg_82_set.insert("LegSecuritySubType_t_1766163637");
      Leg_82.add_attribute("MMY", "1479609936"); // 2
      Leg_82_set.insert("1479609936");
      Leg_82.add_attribute("Mat", "LegMaturityDate_t_358608648"); // 2
      Leg_82_set.insert("LegMaturityDate_t_358608648");
      Leg_82.add_attribute("MatTm", "219385705"); // 2
      Leg_82_set.insert("219385705");
      Leg_82.add_attribute("CpnPmt", "LegCouponPaymentDate_t_153727675"); // 2
      Leg_82_set.insert("LegCouponPaymentDate_t_153727675");
      Leg_82.add_attribute("Issued", "LegIssueDate_t_2128415935"); // 2
      Leg_82_set.insert("LegIssueDate_t_2128415935");
      Leg_82.add_attribute("RepoCollSecTyp", "488037687"); // 2
      Leg_82_set.insert("488037687");
      Leg_82.add_attribute("RepoTrm", "1552049092"); // 2
      Leg_82_set.insert("1552049092");
      Leg_82.add_attribute("RepoRt", "19631195.460000"); // 2
      Leg_82_set.insert("19631195.460000");
      Leg_82.add_attribute("Fctr", "1545663.870000"); // 2
      Leg_82_set.insert("1545663.870000");
      Leg_82.add_attribute("CrdRtg", "LegCreditRating_t_640683341"); // 2
      Leg_82_set.insert("LegCreditRating_t_640683341");
      Leg_82.add_attribute("Rgstry", "LegInstrRegistry_t_589066870"); // 2
      Leg_82_set.insert("LegInstrRegistry_t_589066870");
      Leg_82.add_attribute("Ctry", "1512196473"); // 2
      Leg_82_set.insert("1512196473");
      Leg_82.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_635645322"); // 2
      Leg_82_set.insert("LegStateOrProvinceOfIssue_t_635645322");
      Leg_82.add_attribute("Lcl", "LegLocaleOfIssue_t_971856593"); // 2
      Leg_82_set.insert("LegLocaleOfIssue_t_971856593");
      Leg_82.add_attribute("Redeem", "LegRedemptionDate_t_1794732749"); // 2
      Leg_82_set.insert("LegRedemptionDate_t_1794732749");
      Leg_82.add_attribute("Strk", "3839396.120000"); // 2
      Leg_82_set.insert("3839396.120000");
      Leg_82.add_attribute("StrkCcy", "USD"); // 2
      Leg_82_set.insert("USD");
      Leg_82.add_attribute("OptA", "1212038411"); // 2
      Leg_82_set.insert("1212038411");
      Leg_82.add_attribute("Cmult", "8639288.500000"); // 2
      Leg_82_set.insert("8639288.500000");
      Leg_82.add_attribute("MultTyp", "2"); // 2
      Leg_82_set.insert("2");
      Leg_82.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_82_set.insert("3");
      Leg_82.add_attribute("UOM", "USD"); // 2
      Leg_82_set.insert("USD");
      Leg_82.add_attribute("UOMQty", "9835819.730000"); // 2
      Leg_82_set.insert("9835819.730000");
      Leg_82.add_attribute("PxUOM", "Bbl"); // 2
      Leg_82_set.insert("Bbl");
      Leg_82.add_attribute("PxUOMQty", "1595846.790000"); // 2
      Leg_82_set.insert("1595846.790000");
      Leg_82.add_attribute("TmUnit", "Min"); // 2
      Leg_82_set.insert("Min");
      Leg_82.add_attribute("ExerStyle", "0"); // 2
      Leg_82_set.insert("0");
      Leg_82.add_attribute("CpnRt", "10915427.970000"); // 2
      Leg_82_set.insert("10915427.970000");
      Leg_82.add_attribute("Exch", "LegSecurityExchange_t_1350952711"); // 2
      Leg_82_set.insert("LegSecurityExchange_t_1350952711");
      Leg_82.add_attribute("Issr", "LegIssuer_t_262935257"); // 2
      Leg_82_set.insert("LegIssuer_t_262935257");
      Leg_82.add_attribute("EncLegIssrLen", "423669085"); // 2
      Leg_82_set.insert("423669085");
      Leg_82.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1709561360"); // 2
      Leg_82_set.insert("EncodedLegIssuer_t_1709561360");
      Leg_82.add_attribute("Desc", "LegSecurityDesc_t_482320962"); // 2
      Leg_82_set.insert("LegSecurityDesc_t_482320962");
      Leg_82.add_attribute("EncLegSecDescLen", "577396760"); // 2
      Leg_82_set.insert("577396760");
      Leg_82.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1690493647"); // 2
      Leg_82_set.insert("EncodedLegSecurityDesc_t_1690493647");
      Leg_82.add_attribute("RatioQty", "9703586.490000"); // 2
      Leg_82_set.insert("9703586.490000");
      Leg_82.add_attribute("Side", "D"); // 2
      Leg_82_set.insert("D");
      Leg_82.add_attribute("Ccy", "USD"); // 2
      Leg_82_set.insert("USD");
      Leg_82.add_attribute("Pool", "LegPool_t_622645546"); // 2
      Leg_82_set.insert("LegPool_t_622645546");
      Leg_82.add_attribute("Dated", "LegDatedDate_t_2095196416"); // 2
      Leg_82_set.insert("LegDatedDate_t_2095196416");
      Leg_82.add_attribute("CSetMo", "489637861"); // 2
      Leg_82_set.insert("489637861");
      Leg_82.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1258290868"); // 2
      Leg_82_set.insert("LegInterestAccrualDate_t_1258290868");
      Leg_82.add_attribute("PutCall", "919569362"); // 2
      Leg_82_set.insert("919569362");
      Leg_82.add_attribute("LegOptionRatio", "1368869.620000"); // 2
      Leg_82_set.insert("1368869.620000");
      Leg_82.add_attribute("Px", "16422304.810000"); // 2
      Leg_82_set.insert("16422304.810000");
      all_values.push_back(Leg_82_set);
      all_compo_names.insert("Leg_82_set");

      {
        xml_element LegAID_77{"LegAID"};
        multiset<string> LegAID_77_set;
        LegAID_77.add_attribute("SecAltID", "LegSecurityAltID_t_1444745982"); // 3
        LegAID_77_set.insert("LegSecurityAltID_t_1444745982");
        LegAID_77.add_attribute("SecAltIDSrc", "9"); // 3
        LegAID_77_set.insert("9");
        all_values.push_back(LegAID_77_set);
        all_compo_names.insert("LegAID_77_set");

        Leg_82.add_element(LegAID_77);
      }
      RFQReq_1.add_element(Leg_82);
    }
    elt.add_element(RFQReq_1);
  } // end RFQReq
  { // RFQReq
    xml_element RFQReq_2{"RFQReq"};
    multiset<string> RFQReq_2_set;
    RFQReq_2.add_attribute("PrevClsPx", "7067852.440000"); // 1
    RFQReq_2_set.insert("7067852.440000");
    RFQReq_2.add_attribute("ReqTyp", "1"); // 1
    RFQReq_2_set.insert("1");
    RFQReq_2.add_attribute("Typ", "1"); // 1
    RFQReq_2_set.insert("1");
    RFQReq_2.add_attribute("SesID", "3"); // 1
    RFQReq_2_set.insert("3");
    RFQReq_2.add_attribute("SesSub", "5"); // 1
    RFQReq_2_set.insert("5");
    all_values.push_back(RFQReq_2_set);
    all_compo_names.insert("RFQReq_2_set");

    {
      xml_element Instrmt_70{"Instrmt"};
      multiset<string> Instrmt_70_set;
      Instrmt_70.add_attribute("Sym", "Symbol_t_385957202"); // 2
      Instrmt_70_set.insert("Symbol_t_385957202");
      Instrmt_70.add_attribute("Sfx", "WI"); // 2
      Instrmt_70_set.insert("WI");
      Instrmt_70.add_attribute("ID", "SecurityID_t_980760809"); // 2
      Instrmt_70_set.insert("SecurityID_t_980760809");
      Instrmt_70.add_attribute("Src", "D"); // 2
      Instrmt_70_set.insert("D");
      Instrmt_70.add_attribute("Prod", "5"); // 2
      Instrmt_70_set.insert("5");
      Instrmt_70.add_attribute("ProdCmplx", "ProductComplex_t_2072303606"); // 2
      Instrmt_70_set.insert("ProductComplex_t_2072303606");
      Instrmt_70.add_attribute("SecGrp", "SecurityGroup_t_567486126"); // 2
      Instrmt_70_set.insert("SecurityGroup_t_567486126");
      Instrmt_70.add_attribute("CFI", "CFICode_t_61267242"); // 2
      Instrmt_70_set.insert("CFICode_t_61267242");
      Instrmt_70.add_attribute("SecTyp", "FXSPOT"); // 2
      Instrmt_70_set.insert("FXSPOT");
      Instrmt_70.add_attribute("SubTyp", "SecuritySubType_t_129563838"); // 2
      Instrmt_70_set.insert("SecuritySubType_t_129563838");
      Instrmt_70.add_attribute("MMY", "543588204"); // 2
      Instrmt_70_set.insert("543588204");
      Instrmt_70.add_attribute("MatDt", "MaturityDate_t_925885803"); // 2
      Instrmt_70_set.insert("MaturityDate_t_925885803");
      Instrmt_70.add_attribute("MatTm", "1820057485"); // 2
      Instrmt_70_set.insert("1820057485");
      Instrmt_70.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1513946853"); // 2
      Instrmt_70_set.insert("SettleOnOpenFlag_t_1513946853");
      Instrmt_70.add_attribute("AsgnMeth", "907848007"); // 2
      Instrmt_70_set.insert("907848007");
      Instrmt_70.add_attribute("Status", "2"); // 2
      Instrmt_70_set.insert("2");
      Instrmt_70.add_attribute("CpnPmt", "CouponPaymentDate_t_491388241"); // 2
      Instrmt_70_set.insert("CouponPaymentDate_t_491388241");
      Instrmt_70.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_70_set.insert("MR");
      Instrmt_70.add_attribute("Snrty", "SB"); // 2
      Instrmt_70_set.insert("SB");
      Instrmt_70.add_attribute("NotlPctOut", "9810261.020000"); // 2
      Instrmt_70_set.insert("9810261.020000");
      Instrmt_70.add_attribute("OrigNotlPctOut", "6413007.740000"); // 2
      Instrmt_70_set.insert("6413007.740000");
      Instrmt_70.add_attribute("AttchPnt", "20459855.140000"); // 2
      Instrmt_70_set.insert("20459855.140000");
      Instrmt_70.add_attribute("DetchPnt", "11179130.650000"); // 2
      Instrmt_70_set.insert("11179130.650000");
      Instrmt_70.add_attribute("Issued", "IssueDate_t_136047607"); // 2
      Instrmt_70_set.insert("IssueDate_t_136047607");
      Instrmt_70.add_attribute("RepoCollSecTyp", "1343247848"); // 2
      Instrmt_70_set.insert("1343247848");
      Instrmt_70.add_attribute("RepoTrm", "907697241"); // 2
      Instrmt_70_set.insert("907697241");
      Instrmt_70.add_attribute("RepoRt", "8428328.510000"); // 2
      Instrmt_70_set.insert("8428328.510000");
      Instrmt_70.add_attribute("Fctr", "15044390.330000"); // 2
      Instrmt_70_set.insert("15044390.330000");
      Instrmt_70.add_attribute("CrdRtg", "CreditRating_t_310072470"); // 2
      Instrmt_70_set.insert("CreditRating_t_310072470");
      Instrmt_70.add_attribute("Rgstry", "InstrRegistry_t_1796433979"); // 2
      Instrmt_70_set.insert("InstrRegistry_t_1796433979");
      Instrmt_70.add_attribute("IssuCtry", "178131514"); // 2
      Instrmt_70_set.insert("178131514");
      Instrmt_70.add_attribute("StPrv", "StateOrProvinceOfIssue_t_696029672"); // 2
      Instrmt_70_set.insert("StateOrProvinceOfIssue_t_696029672");
      Instrmt_70.add_attribute("Lcl", "LocaleOfIssue_t_950510697"); // 2
      Instrmt_70_set.insert("LocaleOfIssue_t_950510697");
      Instrmt_70.add_attribute("Redeem", "RedemptionDate_t_1158892323"); // 2
      Instrmt_70_set.insert("RedemptionDate_t_1158892323");
      Instrmt_70.add_attribute("StrkPx", "20600467.350000"); // 2
      Instrmt_70_set.insert("20600467.350000");
      Instrmt_70.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_70_set.insert("CHF");
      Instrmt_70.add_attribute("StrkMult", "4800492.130000"); // 2
      Instrmt_70_set.insert("4800492.130000");
      Instrmt_70.add_attribute("StrkValu", "8101099.250000"); // 2
      Instrmt_70_set.insert("8101099.250000");
      Instrmt_70.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_70_set.insert("2");
      Instrmt_70.add_attribute("StrkPxBndryPrcsn", "13536981.290000"); // 2
      Instrmt_70_set.insert("13536981.290000");
      Instrmt_70.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_70_set.insert("4");
      Instrmt_70.add_attribute("OptAt", "282186888"); // 2
      Instrmt_70_set.insert("282186888");
      Instrmt_70.add_attribute("Mult", "7201613.350000"); // 2
      Instrmt_70_set.insert("7201613.350000");
      Instrmt_70.add_attribute("MultTyp", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_70_set.insert("2");
      Instrmt_70.add_attribute("MinPxIncr", "12115495.760000"); // 2
      Instrmt_70_set.insert("12115495.760000");
      Instrmt_70.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_501461392"); // 2
      Instrmt_70_set.insert("MinPriceIncrementAmount_t_501461392");
      Instrmt_70.add_attribute("UOM", "Gal"); // 2
      Instrmt_70_set.insert("Gal");
      Instrmt_70.add_attribute("UOMQty", "450920.310000"); // 2
      Instrmt_70_set.insert("450920.310000");
      Instrmt_70.add_attribute("PxUOM", "MWh"); // 2
      Instrmt_70_set.insert("MWh");
      Instrmt_70.add_attribute("PxUOMQty", "3383246.420000"); // 2
      Instrmt_70_set.insert("3383246.420000");
      Instrmt_70.add_attribute("SettlMeth", "C"); // 2
      Instrmt_70_set.insert("C");
      Instrmt_70.add_attribute("ExerStyle", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_70_set.insert("2");
      Instrmt_70.add_attribute("OptPayAmt", "OptPayoutAmount_t_2070702337"); // 2
      Instrmt_70_set.insert("OptPayoutAmount_t_2070702337");
      Instrmt_70.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_70_set.insert("INX");
      Instrmt_70.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_70_set.insert("EQTY");
      Instrmt_70.add_attribute("ListMeth", "0"); // 2
      Instrmt_70_set.insert("0");
      Instrmt_70.add_attribute("CapPx", "17705929.560000"); // 2
      Instrmt_70_set.insert("17705929.560000");
      Instrmt_70.add_attribute("FlrPx", "12166593.900000"); // 2
      Instrmt_70_set.insert("12166593.900000");
      Instrmt_70.add_attribute("PutCall", "0"); // 2
      Instrmt_70_set.insert("0");
      Instrmt_70.add_attribute("FlexInd", "false"); // 2
      Instrmt_70_set.insert("false");
      Instrmt_70.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_70_set.insert("false");
      Instrmt_70.add_attribute("TmUnit", "H"); // 2
      Instrmt_70_set.insert("H");
      Instrmt_70.add_attribute("CpnRt", "13224626.880000"); // 2
      Instrmt_70_set.insert("13224626.880000");
      Instrmt_70.add_attribute("Exch", "SecurityExchange_t_1311780347"); // 2
      Instrmt_70_set.insert("SecurityExchange_t_1311780347");
      Instrmt_70.add_attribute("PosLmt", "1321933132"); // 2
      Instrmt_70_set.insert("1321933132");
      Instrmt_70.add_attribute("NTPosLmt", "2132572613"); // 2
      Instrmt_70_set.insert("2132572613");
      Instrmt_70.add_attribute("Issr", "Issuer_t_596498023"); // 2
      Instrmt_70_set.insert("Issuer_t_596498023");
      Instrmt_70.add_attribute("EncIssrLen", "1931546183"); // 2
      Instrmt_70_set.insert("1931546183");
      Instrmt_70.add_attribute("EncIssr", "EncodedIssuer_t_1338787094"); // 2
      Instrmt_70_set.insert("EncodedIssuer_t_1338787094");
      Instrmt_70.add_attribute("Desc", "SecurityDesc_t_807101503"); // 2
      Instrmt_70_set.insert("SecurityDesc_t_807101503");
      Instrmt_70.add_attribute("EncSecDescLen", "66249424"); // 2
      Instrmt_70_set.insert("66249424");
      Instrmt_70.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2058948429"); // 2
      Instrmt_70_set.insert("EncodedSecurityDesc_t_2058948429");
      Instrmt_70.add_attribute("Pool", "Pool_t_1925552990"); // 2
      Instrmt_70_set.insert("Pool_t_1925552990");
      Instrmt_70.add_attribute("CSetMo", "1527139696"); // 2
      Instrmt_70_set.insert("1527139696");
      Instrmt_70.add_attribute("CPPgm", "2"); // 2
      Instrmt_70_set.insert("2");
      Instrmt_70.add_attribute("CPRegT", "CPRegType_t_279530734"); // 2
      Instrmt_70_set.insert("CPRegType_t_279530734");
      Instrmt_70.add_attribute("Dated", "DatedDate_t_1966962472"); // 2
      Instrmt_70_set.insert("DatedDate_t_1966962472");
      Instrmt_70.add_attribute("IntAcrl", "InterestAccrualDate_t_1168106389"); // 2
      Instrmt_70_set.insert("InterestAccrualDate_t_1168106389");
      all_values.push_back(Instrmt_70_set);
      all_compo_names.insert("Instrmt_70_set");

      {
        xml_element AID_73{"AID"};
        multiset<string> AID_73_set;
        AID_73.add_attribute("AltID", "SecurityAltID_t_1422292901"); // 3
        AID_73_set.insert("SecurityAltID_t_1422292901");
        AID_73.add_attribute("AltIDSrc", "J"); // 3
        AID_73_set.insert("J");
        all_values.push_back(AID_73_set);
        all_compo_names.insert("AID_73_set");

        Instrmt_70.add_element(AID_73);
      }
      {
        xml_element SecXML_73{"SecXML"};
        multiset<string> SecXML_73_set;
        SecXML_73.add_attribute("Schema", "SecurityXMLSchema_t_183627837"); // 3
        SecXML_73_set.insert("SecurityXMLSchema_t_183627837");
        all_values.push_back(SecXML_73_set);
        all_compo_names.insert("SecXML_73_set");

        Instrmt_70.add_element(SecXML_73);
      }
      {
        xml_element Evnt_73{"Evnt"};
        multiset<string> Evnt_73_set;
        Evnt_73.add_attribute("EventTyp", "6"); // 3
        Evnt_73_set.insert("6");
        Evnt_73.add_attribute("Dt", "EventDate_t_1839375956"); // 3
        Evnt_73_set.insert("EventDate_t_1839375956");
        Evnt_73.add_attribute("Tm", "EventTime_t_106846526"); // 3
        Evnt_73_set.insert("EventTime_t_106846526");
        Evnt_73.add_attribute("Px", "5277780.030000"); // 3
        Evnt_73_set.insert("5277780.030000");
        Evnt_73.add_attribute("Txt", "EventText_t_730420184"); // 3
        Evnt_73_set.insert("EventText_t_730420184");
        all_values.push_back(Evnt_73_set);
        all_compo_names.insert("Evnt_73_set");

        Instrmt_70.add_element(Evnt_73);
      }
      {
        xml_element Pty_379{"Pty"};
        multiset<string> Pty_379_set;
        Pty_379.add_attribute("ID", "InstrumentPartyID_t_340137686"); // 3
        Pty_379_set.insert("InstrumentPartyID_t_340137686");
        Pty_379.add_attribute("Src", "9"); // 3
        Pty_379_set.insert("9");
        Pty_379.add_attribute("R", "64"); // 3
        Pty_379_set.insert("64");
        all_values.push_back(Pty_379_set);
        all_compo_names.insert("Pty_379_set");

        {
          xml_element Sub_379{"Sub"};
          multiset<string> Sub_379_set;
          Sub_379.add_attribute("ID", "InstrumentPartySubID_t_1269458519"); // 4
          Sub_379_set.insert("InstrumentPartySubID_t_1269458519");
          Sub_379.add_attribute("Typ", "15"); // 4
          Sub_379_set.insert("15");
          all_values.push_back(Sub_379_set);
          all_compo_names.insert("Sub_379_set");

          Pty_379.add_element(Sub_379);
        }
        Instrmt_70.add_element(Pty_379);
      }
      {
        xml_element CmplxEvnt_70{"CmplxEvnt"};
        multiset<string> CmplxEvnt_70_set;
        CmplxEvnt_70.add_attribute("Typ", "8"); // 3
        CmplxEvnt_70_set.insert("8");
        CmplxEvnt_70.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2111342438"); // 3
        CmplxEvnt_70_set.insert("ComplexOptPayoutAmount_t_2111342438");
        CmplxEvnt_70.add_attribute("Px", "20469700.050000"); // 3
        CmplxEvnt_70_set.insert("20469700.050000");
        CmplxEvnt_70.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_70_set.insert("4");
        CmplxEvnt_70.add_attribute("PxBndryPrcsn", "12857919.230000"); // 3
        CmplxEvnt_70_set.insert("12857919.230000");
        CmplxEvnt_70.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_70_set.insert("1");
        CmplxEvnt_70.add_attribute("Cond", "1"); // 3
        CmplxEvnt_70_set.insert("1");
        all_values.push_back(CmplxEvnt_70_set);
        all_compo_names.insert("CmplxEvnt_70_set");

        {
          xml_element EvntDts_70{"EvntDts"};
          multiset<string> EvntDts_70_set;
          EvntDts_70.add_attribute("StartDt", "ComplexEventStartDate_t_1069854458"); // 4
          EvntDts_70_set.insert("ComplexEventStartDate_t_1069854458");
          EvntDts_70.add_attribute("EndDt", "ComplexEventEndDate_t_1223362417"); // 4
          EvntDts_70_set.insert("ComplexEventEndDate_t_1223362417");
          all_values.push_back(EvntDts_70_set);
          all_compo_names.insert("EvntDts_70_set");

          {
            xml_element EvntTms_70{"EvntTms"};
            multiset<string> EvntTms_70_set;
            EvntTms_70.add_attribute("StartTm", "595560217"); // 5
            EvntTms_70_set.insert("595560217");
            EvntTms_70.add_attribute("EndTm", "1136103882"); // 5
            EvntTms_70_set.insert("1136103882");
            all_values.push_back(EvntTms_70_set);
            all_compo_names.insert("EvntTms_70_set");

            EvntDts_70.add_element(EvntTms_70);
          }
          CmplxEvnt_70.add_element(EvntDts_70);
        }
        Instrmt_70.add_element(CmplxEvnt_70);
      }
      RFQReq_2.add_element(Instrmt_70);
    }
    {
      xml_element Undly_98{"Undly"};
      multiset<string> Undly_98_set;
      Undly_98.add_attribute("Sym", "UnderlyingSymbol_t_1134827198"); // 2
      Undly_98_set.insert("UnderlyingSymbol_t_1134827198");
      Undly_98.add_attribute("Sfx", "WI"); // 2
      Undly_98_set.insert("WI");
      Undly_98.add_attribute("ID", "UnderlyingSecurityID_t_515759930"); // 2
      Undly_98_set.insert("UnderlyingSecurityID_t_515759930");
      Undly_98.add_attribute("Src", "D"); // 2
      Undly_98_set.insert("D");
      Undly_98.add_attribute("Prod", "3"); // 2
      Undly_98_set.insert("3");
      Undly_98.add_attribute("CFI", "UnderlyingCFICode_t_335238754"); // 2
      Undly_98_set.insert("UnderlyingCFICode_t_335238754");
      Undly_98.add_attribute("SecTyp", "DUAL"); // 2
      Undly_98_set.insert("DUAL");
      Undly_98.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2075453194"); // 2
      Undly_98_set.insert("UnderlyingSecuritySubType_t_2075453194");
      Undly_98.add_attribute("MMY", "493042220"); // 2
      Undly_98_set.insert("493042220");
      Undly_98.add_attribute("Mat", "UnderlyingMaturityDate_t_1462092134"); // 2
      Undly_98_set.insert("UnderlyingMaturityDate_t_1462092134");
      Undly_98.add_attribute("MatTm", "481588573"); // 2
      Undly_98_set.insert("481588573");
      Undly_98.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_184934529"); // 2
      Undly_98_set.insert("UnderlyingCouponPaymentDate_t_184934529");
      Undly_98.add_attribute("RestrctTyp", "MR"); // 2
      Undly_98_set.insert("MR");
      Undly_98.add_attribute("Snrty", "SR"); // 2
      Undly_98_set.insert("SR");
      Undly_98.add_attribute("NotlPctOut", "9153547.130000"); // 2
      Undly_98_set.insert("9153547.130000");
      Undly_98.add_attribute("OrigNotlPctOut", "19090763.470000"); // 2
      Undly_98_set.insert("19090763.470000");
      Undly_98.add_attribute("AttchPnt", "11602538.880000"); // 2
      Undly_98_set.insert("11602538.880000");
      Undly_98.add_attribute("DetchPnt", "7149506.390000"); // 2
      Undly_98_set.insert("7149506.390000");
      Undly_98.add_attribute("Issued", "UnderlyingIssueDate_t_1031051218"); // 2
      Undly_98_set.insert("UnderlyingIssueDate_t_1031051218");
      Undly_98.add_attribute("RepoCollSecTyp", "1884761206"); // 2
      Undly_98_set.insert("1884761206");
      Undly_98.add_attribute("RepoTrm", "742614630"); // 2
      Undly_98_set.insert("742614630");
      Undly_98.add_attribute("RepoRt", "9949100.090000"); // 2
      Undly_98_set.insert("9949100.090000");
      Undly_98.add_attribute("Fctr", "17842475.630000"); // 2
      Undly_98_set.insert("17842475.630000");
      Undly_98.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2082058969"); // 2
      Undly_98_set.insert("UnderlyingCreditRating_t_2082058969");
      Undly_98.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_133218284"); // 2
      Undly_98_set.insert("UnderlyingInstrRegistry_t_133218284");
      Undly_98.add_attribute("Ctry", "1668822886"); // 2
      Undly_98_set.insert("1668822886");
      Undly_98.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1870517683"); // 2
      Undly_98_set.insert("UnderlyingStateOrProvinceOfIssue_t_1870517683");
      Undly_98.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1203072742"); // 2
      Undly_98_set.insert("UnderlyingLocaleOfIssue_t_1203072742");
      Undly_98.add_attribute("Redeem", "UnderlyingRedemptionDate_t_744701655"); // 2
      Undly_98_set.insert("UnderlyingRedemptionDate_t_744701655");
      Undly_98.add_attribute("StrkPx", "3185942.520000"); // 2
      Undly_98_set.insert("3185942.520000");
      Undly_98.add_attribute("StrkCcy", "CAN"); // 2
      Undly_98_set.insert("CAN");
      Undly_98.add_attribute("OptA", "692223811"); // 2
      Undly_98_set.insert("692223811");
      Undly_98.add_attribute("Mult", "7074529.070000"); // 2
      Undly_98_set.insert("7074529.070000");
      Undly_98.add_attribute("MultTyp", "1"); // 2
      Undly_98_set.insert("1");
      Undly_98.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_98_set.insert("4");
      Undly_98.add_attribute("UOM", "Alw"); // 2
      Undly_98_set.insert("Alw");
      Undly_98.add_attribute("UOMQty", "11208674.110000"); // 2
      Undly_98_set.insert("11208674.110000");
      Undly_98.add_attribute("PxUOM", "Bu"); // 2
      Undly_98_set.insert("Bu");
      Undly_98.add_attribute("PxUOMQty", "15357338.820000"); // 2
      Undly_98_set.insert("15357338.820000");
      Undly_98.add_attribute("TmUnit", "Wk"); // 2
      Undly_98_set.insert("Wk");
      Undly_98.add_attribute("ExerStyle", "1"); // 2
      Undly_98_set.insert("1");
      Undly_98.add_attribute("CpnRt", "17206684.110000"); // 2
      Undly_98_set.insert("17206684.110000");
      Undly_98.add_attribute("Exch", "UnderlyingSecurityExchange_t_2004414559"); // 2
      Undly_98_set.insert("UnderlyingSecurityExchange_t_2004414559");
      Undly_98.add_attribute("Issr", "UnderlyingIssuer_t_616825152"); // 2
      Undly_98_set.insert("UnderlyingIssuer_t_616825152");
      Undly_98.add_attribute("EncUndIssrLen", "488539476"); // 2
      Undly_98_set.insert("488539476");
      Undly_98.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1766007258"); // 2
      Undly_98_set.insert("EncodedUnderlyingIssuer_t_1766007258");
      Undly_98.add_attribute("Desc", "UnderlyingSecurityDesc_t_1777079041"); // 2
      Undly_98_set.insert("UnderlyingSecurityDesc_t_1777079041");
      Undly_98.add_attribute("EncUndSecDescLen", "1203490115"); // 2
      Undly_98_set.insert("1203490115");
      Undly_98.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_649574829"); // 2
      Undly_98_set.insert("EncodedUnderlyingSecurityDesc_t_649574829");
      Undly_98.add_attribute("CPPgm", "UnderlyingCPProgram_t_1514356599"); // 2
      Undly_98_set.insert("UnderlyingCPProgram_t_1514356599");
      Undly_98.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1946104746"); // 2
      Undly_98_set.insert("UnderlyingCPRegType_t_1946104746");
      Undly_98.add_attribute("AllocPct", "16444848.380000"); // 2
      Undly_98_set.insert("16444848.380000");
      Undly_98.add_attribute("Ccy", "CAN"); // 2
      Undly_98_set.insert("CAN");
      Undly_98.add_attribute("Qty", "17777031.220000"); // 2
      Undly_98_set.insert("17777031.220000");
      Undly_98.add_attribute("SettlTyp", "5"); // 2
      Undly_98_set.insert("5");
      Undly_98.add_attribute("CashAmt", "UnderlyingCashAmount_t_1603714102"); // 2
      Undly_98_set.insert("UnderlyingCashAmount_t_1603714102");
      Undly_98.add_attribute("CashTyp", "FIXED"); // 2
      Undly_98_set.insert("FIXED");
      Undly_98.add_attribute("Px", "14171614.070000"); // 2
      Undly_98_set.insert("14171614.070000");
      Undly_98.add_attribute("DirtPx", "19223083.540000"); // 2
      Undly_98_set.insert("19223083.540000");
      Undly_98.add_attribute("EndPx", "10249851.930000"); // 2
      Undly_98_set.insert("10249851.930000");
      Undly_98.add_attribute("StartVal", "UnderlyingStartValue_t_1149206613"); // 2
      Undly_98_set.insert("UnderlyingStartValue_t_1149206613");
      Undly_98.add_attribute("CurVal", "UnderlyingCurrentValue_t_467048517"); // 2
      Undly_98_set.insert("UnderlyingCurrentValue_t_467048517");
      Undly_98.add_attribute("EndVal", "UnderlyingEndValue_t_1732438101"); // 2
      Undly_98_set.insert("UnderlyingEndValue_t_1732438101");
      Undly_98.add_attribute("AdjQty", "9916097.270000"); // 2
      Undly_98_set.insert("9916097.270000");
      Undly_98.add_attribute("FxRate", "18124326.210000"); // 2
      Undly_98_set.insert("18124326.210000");
      Undly_98.add_attribute("FxRateCalc", "D"); // 2
      Undly_98_set.insert("D");
      Undly_98.add_attribute("CapValu", "UnderlyingCapValue_t_2112477138"); // 2
      Undly_98_set.insert("UnderlyingCapValue_t_2112477138");
      Undly_98.add_attribute("SetMeth", "UnderlyingSettlMethod_t_938302624"); // 2
      Undly_98_set.insert("UnderlyingSettlMethod_t_938302624");
      Undly_98.add_attribute("PutCall", "15896349"); // 2
      Undly_98_set.insert("15896349");
      all_values.push_back(Undly_98_set);
      all_compo_names.insert("Undly_98_set");

      {
        xml_element UndAID_98{"UndAID"};
        multiset<string> UndAID_98_set;
        UndAID_98.add_attribute("AltID", "UnderlyingSecurityAltID_t_400469388"); // 3
        UndAID_98_set.insert("UnderlyingSecurityAltID_t_400469388");
        UndAID_98.add_attribute("AltIDSrc", "7"); // 3
        UndAID_98_set.insert("7");
        all_values.push_back(UndAID_98_set);
        all_compo_names.insert("UndAID_98_set");

        Undly_98.add_element(UndAID_98);
      }
      {
        xml_element Stip_159{"Stip"};
        multiset<string> Stip_159_set;
        Stip_159.add_attribute("Typ", "PURPOSE"); // 3
        Stip_159_set.insert("PURPOSE");
        Stip_159.add_attribute("Val", "UnderlyingStipValue_t_257400299"); // 3
        Stip_159_set.insert("UnderlyingStipValue_t_257400299");
        all_values.push_back(Stip_159_set);
        all_compo_names.insert("Stip_159_set");

        Undly_98.add_element(Stip_159);
      }
      {
        xml_element Pty_380{"Pty"};
        multiset<string> Pty_380_set;
        Pty_380.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1162586353"); // 3
        Pty_380_set.insert("UnderlyingInstrumentPartyID_t_1162586353");
        Pty_380.add_attribute("Src", "I"); // 3
        Pty_380_set.insert("I");
        Pty_380.add_attribute("R", "27"); // 3
        Pty_380_set.insert("27");
        all_values.push_back(Pty_380_set);
        all_compo_names.insert("Pty_380_set");

        {
          xml_element Sub_380{"Sub"};
          multiset<string> Sub_380_set;
          Sub_380.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_792181746"); // 4
          Sub_380_set.insert("UnderlyingInstrumentPartySubID_t_792181746");
          Sub_380.add_attribute("Typ", "25"); // 4
          Sub_380_set.insert("25");
          all_values.push_back(Sub_380_set);
          all_compo_names.insert("Sub_380_set");

          Pty_380.add_element(Sub_380);
        }
        Undly_98.add_element(Pty_380);
      }
      RFQReq_2.add_element(Undly_98);
    }
    {
      xml_element Leg_83{"Leg"};
      multiset<string> Leg_83_set;
      Leg_83.add_attribute("Sym", "LegSymbol_t_525498739"); // 2
      Leg_83_set.insert("LegSymbol_t_525498739");
      Leg_83.add_attribute("Sfx", "WI"); // 2
      Leg_83_set.insert("WI");
      Leg_83.add_attribute("ID", "LegSecurityID_t_1079731803"); // 2
      Leg_83_set.insert("LegSecurityID_t_1079731803");
      Leg_83.add_attribute("Src", "2"); // 2
      Leg_83_set.insert("2");
      Leg_83.add_attribute("Prod", "4"); // 2
      Leg_83_set.insert("4");
      Leg_83.add_attribute("CFI", "LegCFICode_t_812928222"); // 2
      Leg_83_set.insert("LegCFICode_t_812928222");
      Leg_83.add_attribute("SecTyp", "BRIDGE"); // 2
      Leg_83_set.insert("BRIDGE");
      Leg_83.add_attribute("SecSubTyp", "LegSecuritySubType_t_1982634964"); // 2
      Leg_83_set.insert("LegSecuritySubType_t_1982634964");
      Leg_83.add_attribute("MMY", "269158676"); // 2
      Leg_83_set.insert("269158676");
      Leg_83.add_attribute("Mat", "LegMaturityDate_t_486011619"); // 2
      Leg_83_set.insert("LegMaturityDate_t_486011619");
      Leg_83.add_attribute("MatTm", "1252312723"); // 2
      Leg_83_set.insert("1252312723");
      Leg_83.add_attribute("CpnPmt", "LegCouponPaymentDate_t_43983382"); // 2
      Leg_83_set.insert("LegCouponPaymentDate_t_43983382");
      Leg_83.add_attribute("Issued", "LegIssueDate_t_1510996813"); // 2
      Leg_83_set.insert("LegIssueDate_t_1510996813");
      Leg_83.add_attribute("RepoCollSecTyp", "254035688"); // 2
      Leg_83_set.insert("254035688");
      Leg_83.add_attribute("RepoTrm", "511031899"); // 2
      Leg_83_set.insert("511031899");
      Leg_83.add_attribute("RepoRt", "10959512.660000"); // 2
      Leg_83_set.insert("10959512.660000");
      Leg_83.add_attribute("Fctr", "12456454.150000"); // 2
      Leg_83_set.insert("12456454.150000");
      Leg_83.add_attribute("CrdRtg", "LegCreditRating_t_175980872"); // 2
      Leg_83_set.insert("LegCreditRating_t_175980872");
      Leg_83.add_attribute("Rgstry", "LegInstrRegistry_t_1723597381"); // 2
      Leg_83_set.insert("LegInstrRegistry_t_1723597381");
      Leg_83.add_attribute("Ctry", "1210638906"); // 2
      Leg_83_set.insert("1210638906");
      Leg_83.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1114283497"); // 2
      Leg_83_set.insert("LegStateOrProvinceOfIssue_t_1114283497");
      Leg_83.add_attribute("Lcl", "LegLocaleOfIssue_t_1739493730"); // 2
      Leg_83_set.insert("LegLocaleOfIssue_t_1739493730");
      Leg_83.add_attribute("Redeem", "LegRedemptionDate_t_1611108294"); // 2
      Leg_83_set.insert("LegRedemptionDate_t_1611108294");
      Leg_83.add_attribute("Strk", "16600446.970000"); // 2
      Leg_83_set.insert("16600446.970000");
      Leg_83.add_attribute("StrkCcy", "USD"); // 2
      Leg_83_set.insert("USD");
      Leg_83.add_attribute("OptA", "675147402"); // 2
      Leg_83_set.insert("675147402");
      Leg_83.add_attribute("Cmult", "14061954.330000"); // 2
      Leg_83_set.insert("14061954.330000");
      Leg_83.add_attribute("MultTyp", "1"); // 2
      Leg_83_set.insert("1");
      Leg_83.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_83_set.insert("3");
      Leg_83.add_attribute("UOM", "Alw"); // 2
      Leg_83_set.insert("Alw");
      Leg_83.add_attribute("UOMQty", "1224475.950000"); // 2
      Leg_83_set.insert("1224475.950000");
      Leg_83.add_attribute("PxUOM", "oz_tr"); // 2
      Leg_83_set.insert("oz_tr");
      Leg_83.add_attribute("PxUOMQty", "16195542.930000"); // 2
      Leg_83_set.insert("16195542.930000");
      Leg_83.add_attribute("TmUnit", "Min"); // 2
      Leg_83_set.insert("Min");
      Leg_83.add_attribute("ExerStyle", "1"); // 2
      Leg_83_set.insert("1");
      Leg_83.add_attribute("CpnRt", "2849988.670000"); // 2
      Leg_83_set.insert("2849988.670000");
      Leg_83.add_attribute("Exch", "LegSecurityExchange_t_1945150575"); // 2
      Leg_83_set.insert("LegSecurityExchange_t_1945150575");
      Leg_83.add_attribute("Issr", "LegIssuer_t_624226725"); // 2
      Leg_83_set.insert("LegIssuer_t_624226725");
      Leg_83.add_attribute("EncLegIssrLen", "554157543"); // 2
      Leg_83_set.insert("554157543");
      Leg_83.add_attribute("EncLegIssr", "EncodedLegIssuer_t_283678546"); // 2
      Leg_83_set.insert("EncodedLegIssuer_t_283678546");
      Leg_83.add_attribute("Desc", "LegSecurityDesc_t_1876539448"); // 2
      Leg_83_set.insert("LegSecurityDesc_t_1876539448");
      Leg_83.add_attribute("EncLegSecDescLen", "598140925"); // 2
      Leg_83_set.insert("598140925");
      Leg_83.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1794675359"); // 2
      Leg_83_set.insert("EncodedLegSecurityDesc_t_1794675359");
      Leg_83.add_attribute("RatioQty", "21305751.370000"); // 2
      Leg_83_set.insert("21305751.370000");
      Leg_83.add_attribute("Side", "9"); // 2
      Leg_83_set.insert("9");
      Leg_83.add_attribute("Ccy", "USD"); // 2
      Leg_83_set.insert("USD");
      Leg_83.add_attribute("Pool", "LegPool_t_1285153696"); // 2
      Leg_83_set.insert("LegPool_t_1285153696");
      Leg_83.add_attribute("Dated", "LegDatedDate_t_319256710"); // 2
      Leg_83_set.insert("LegDatedDate_t_319256710");
      Leg_83.add_attribute("CSetMo", "291892162"); // 2
      Leg_83_set.insert("291892162");
      Leg_83.add_attribute("IntAcrl", "LegInterestAccrualDate_t_251953545"); // 2
      Leg_83_set.insert("LegInterestAccrualDate_t_251953545");
      Leg_83.add_attribute("PutCall", "2058750441"); // 2
      Leg_83_set.insert("2058750441");
      Leg_83.add_attribute("LegOptionRatio", "19030004.570000"); // 2
      Leg_83_set.insert("19030004.570000");
      Leg_83.add_attribute("Px", "19119982.430000"); // 2
      Leg_83_set.insert("19119982.430000");
      all_values.push_back(Leg_83_set);
      all_compo_names.insert("Leg_83_set");

      {
        xml_element LegAID_78{"LegAID"};
        multiset<string> LegAID_78_set;
        LegAID_78.add_attribute("SecAltID", "LegSecurityAltID_t_1239841636"); // 3
        LegAID_78_set.insert("LegSecurityAltID_t_1239841636");
        LegAID_78.add_attribute("SecAltIDSrc", "C"); // 3
        LegAID_78_set.insert("C");
        all_values.push_back(LegAID_78_set);
        all_compo_names.insert("LegAID_78_set");

        Leg_83.add_element(LegAID_78);
      }
      RFQReq_2.add_element(Leg_83);
    }
    elt.add_element(RFQReq_2);
  } // end RFQReq
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
