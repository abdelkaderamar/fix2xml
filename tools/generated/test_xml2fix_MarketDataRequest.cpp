#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequest_message_t_0;
  elt.add_attribute("ReqID", "MDReqID_t_1218900872"); // 0
  MarketDataRequest_message_t_0.insert("MDReqID_t_1218900872");
  elt.add_attribute("SubReqTyp", "0"); // 0
  MarketDataRequest_message_t_0.insert("0");
  elt.add_attribute("MktDepth", "422464431"); // 0
  MarketDataRequest_message_t_0.insert("422464431");
  elt.add_attribute("UpdtTyp", "0"); // 0
  MarketDataRequest_message_t_0.insert("0");
  elt.add_attribute("AggBook", "Y"); // 0
  MarketDataRequest_message_t_0.insert("Y");
  elt.add_attribute("OpenClsSettlFlag", "2"); // 0
  MarketDataRequest_message_t_0.insert("2");
  elt.add_attribute("Scope", "3"); // 0
  MarketDataRequest_message_t_0.insert("3");
  elt.add_attribute("ImplctDel", "N"); // 0
  MarketDataRequest_message_t_0.insert("N");
  elt.add_attribute("ApplQuActn", "2"); // 0
  MarketDataRequest_message_t_0.insert("2");
  elt.add_attribute("ApplQuMax", "1020251261"); // 0
  MarketDataRequest_message_t_0.insert("1020251261");
  elt.add_attribute("MDQteTyp", "0"); // 0
  MarketDataRequest_message_t_0.insert("0");
  all_values.push_back(MarketDataRequest_message_t_0);
  all_compo_names.insert("MarketDataRequest_message_t");

  { // Hdr
    xml_element Hdr_40{"Hdr"};
    multiset<string> Hdr_40_set;
    Hdr_40.add_attribute("SeqNum", "1566436142"); // 1
    Hdr_40_set.insert("1566436142");
    Hdr_40.add_attribute("SID", "SenderCompID_t_847381899"); // 1
    Hdr_40_set.insert("SenderCompID_t_847381899");
    Hdr_40.add_attribute("TID", "TargetCompID_t_1246319800"); // 1
    Hdr_40_set.insert("TargetCompID_t_1246319800");
    Hdr_40.add_attribute("OBID", "OnBehalfOfCompID_t_73694498"); // 1
    Hdr_40_set.insert("OnBehalfOfCompID_t_73694498");
    Hdr_40.add_attribute("D2ID", "DeliverToCompID_t_471363106"); // 1
    Hdr_40_set.insert("DeliverToCompID_t_471363106");
    Hdr_40.add_attribute("SSub", "SenderSubID_t_1361163955"); // 1
    Hdr_40_set.insert("SenderSubID_t_1361163955");
    Hdr_40.add_attribute("SLoc", "SenderLocationID_t_1552240933"); // 1
    Hdr_40_set.insert("SenderLocationID_t_1552240933");
    Hdr_40.add_attribute("TSub", "TargetSubID_t_827057299"); // 1
    Hdr_40_set.insert("TargetSubID_t_827057299");
    Hdr_40.add_attribute("TLoc", "TargetLocationID_t_113383809"); // 1
    Hdr_40_set.insert("TargetLocationID_t_113383809");
    Hdr_40.add_attribute("OBSub", "OnBehalfOfSubID_t_1485707786"); // 1
    Hdr_40_set.insert("OnBehalfOfSubID_t_1485707786");
    Hdr_40.add_attribute("OBLoc", "OnBehalfOfLocationID_t_780365194"); // 1
    Hdr_40_set.insert("OnBehalfOfLocationID_t_780365194");
    Hdr_40.add_attribute("D2Sub", "DeliverToSubID_t_1303861293"); // 1
    Hdr_40_set.insert("DeliverToSubID_t_1303861293");
    Hdr_40.add_attribute("D2Loc", "DeliverToLocationID_t_112654529"); // 1
    Hdr_40_set.insert("DeliverToLocationID_t_112654529");
    Hdr_40.add_attribute("PosDup", "Y"); // 1
    Hdr_40_set.insert("Y");
    Hdr_40.add_attribute("PosRsnd", "N"); // 1
    Hdr_40_set.insert("N");
    Hdr_40.add_attribute("Snt", "SendingTime_t_1190952476"); // 1
    Hdr_40_set.insert("SendingTime_t_1190952476");
    Hdr_40.add_attribute("OrigSnt", "OrigSendingTime_t_1981538304"); // 1
    Hdr_40_set.insert("OrigSendingTime_t_1981538304");
    Hdr_40.add_attribute("MsgEncd", "MessageEncoding_t_477994654"); // 1
    Hdr_40_set.insert("MessageEncoding_t_477994654");
    all_values.push_back(Hdr_40_set);
    all_compo_names.insert("Hdr_40_set");

    {
      xml_element Hop_40{"Hop"};
      multiset<string> Hop_40_set;
      Hop_40.add_attribute("ID", "HopCompID_t_2102041358"); // 2
      Hop_40_set.insert("HopCompID_t_2102041358");
      Hop_40.add_attribute("Ref", "174347495"); // 2
      Hop_40_set.insert("174347495");
      Hop_40.add_attribute("Snt", "HopSendingTime_t_1696895526"); // 2
      Hop_40_set.insert("HopSendingTime_t_1696895526");
      all_values.push_back(Hop_40_set);
      all_compo_names.insert("Hop_40_set");

      Hdr_40.add_element(Hop_40);
    }
    elt.add_element(Hdr_40);
  } // end Hdr
  { // Pty
    xml_element Pty_190{"Pty"};
    multiset<string> Pty_190_set;
    Pty_190.add_attribute("ID", "PartyID_t_596811926"); // 1
    Pty_190_set.insert("PartyID_t_596811926");
    Pty_190.add_attribute("Src", "B"); // 1
    Pty_190_set.insert("B");
    Pty_190.add_attribute("R", "15"); // 1
    Pty_190_set.insert("15");
    all_values.push_back(Pty_190_set);
    all_compo_names.insert("Pty_190_set");

    {
      xml_element Sub_190{"Sub"};
      multiset<string> Sub_190_set;
      Sub_190.add_attribute("ID", "PartySubID_t_270648104"); // 2
      Sub_190_set.insert("PartySubID_t_270648104");
      Sub_190.add_attribute("Typ", "16"); // 2
      Sub_190_set.insert("16");
      all_values.push_back(Sub_190_set);
      all_compo_names.insert("Sub_190_set");

      Pty_190.add_element(Sub_190);
    }
    elt.add_element(Pty_190);
  } // end Pty
  { // Req
    xml_element Req_0{"Req"};
    multiset<string> Req_0_set;
    Req_0.add_attribute("Typ", "Y"); // 1
    Req_0_set.insert("Y");
    all_values.push_back(Req_0_set);
    all_compo_names.insert("Req_0_set");

    elt.add_element(Req_0);
  } // end Req
  { // Req
    xml_element Req_1{"Req"};
    multiset<string> Req_1_set;
    Req_1.add_attribute("Typ", "J"); // 1
    Req_1_set.insert("J");
    all_values.push_back(Req_1_set);
    all_compo_names.insert("Req_1_set");

    elt.add_element(Req_1);
  } // end Req
  { // Req
    xml_element Req_2{"Req"};
    multiset<string> Req_2_set;
    Req_2.add_attribute("Typ", "A"); // 1
    Req_2_set.insert("A");
    all_values.push_back(Req_2_set);
    all_compo_names.insert("Req_2_set");

    elt.add_element(Req_2);
  } // end Req
  { // InstReq
    xml_element InstReq_0{"InstReq"};
    multiset<string> InstReq_0_set;
    InstReq_0.add_attribute("Ccy", "USD"); // 1
    InstReq_0_set.insert("USD");
    InstReq_0.add_attribute("Typ", "3"); // 1
    InstReq_0_set.insert("3");
    InstReq_0.add_attribute("SettlTyp", "B"); // 1
    InstReq_0_set.insert("B");
    InstReq_0.add_attribute("SettlDt", "SettlDate_t_186721613"); // 1
    InstReq_0_set.insert("SettlDate_t_186721613");
    InstReq_0.add_attribute("Sz", "11605801.130000"); // 1
    InstReq_0_set.insert("11605801.130000");
    InstReq_0.add_attribute("MDStrmID", "MDStreamID_t_1608732882"); // 1
    InstReq_0_set.insert("MDStreamID_t_1608732882");
    all_values.push_back(InstReq_0_set);
    all_compo_names.insert("InstReq_0_set");

    {
      xml_element Instrmt_33{"Instrmt"};
      multiset<string> Instrmt_33_set;
      Instrmt_33.add_attribute("Sym", "Symbol_t_300105423"); // 2
      Instrmt_33_set.insert("Symbol_t_300105423");
      Instrmt_33.add_attribute("Sfx", "WI"); // 2
      Instrmt_33_set.insert("WI");
      Instrmt_33.add_attribute("ID", "SecurityID_t_241614428"); // 2
      Instrmt_33_set.insert("SecurityID_t_241614428");
      Instrmt_33.add_attribute("Src", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("Prod", "7"); // 2
      Instrmt_33_set.insert("7");
      Instrmt_33.add_attribute("ProdCmplx", "ProductComplex_t_1512967860"); // 2
      Instrmt_33_set.insert("ProductComplex_t_1512967860");
      Instrmt_33.add_attribute("SecGrp", "SecurityGroup_t_456497683"); // 2
      Instrmt_33_set.insert("SecurityGroup_t_456497683");
      Instrmt_33.add_attribute("CFI", "CFICode_t_1802411256"); // 2
      Instrmt_33_set.insert("CFICode_t_1802411256");
      Instrmt_33.add_attribute("SecTyp", "BRADY"); // 2
      Instrmt_33_set.insert("BRADY");
      Instrmt_33.add_attribute("SubTyp", "SecuritySubType_t_934492337"); // 2
      Instrmt_33_set.insert("SecuritySubType_t_934492337");
      Instrmt_33.add_attribute("MMY", "1756968966"); // 2
      Instrmt_33_set.insert("1756968966");
      Instrmt_33.add_attribute("MatDt", "MaturityDate_t_1521370011"); // 2
      Instrmt_33_set.insert("MaturityDate_t_1521370011");
      Instrmt_33.add_attribute("MatTm", "483904215"); // 2
      Instrmt_33_set.insert("483904215");
      Instrmt_33.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_476530169"); // 2
      Instrmt_33_set.insert("SettleOnOpenFlag_t_476530169");
      Instrmt_33.add_attribute("AsgnMeth", "2118181937"); // 2
      Instrmt_33_set.insert("2118181937");
      Instrmt_33.add_attribute("Status", "2"); // 2
      Instrmt_33_set.insert("2");
      Instrmt_33.add_attribute("CpnPmt", "CouponPaymentDate_t_1701434891"); // 2
      Instrmt_33_set.insert("CouponPaymentDate_t_1701434891");
      Instrmt_33.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_33_set.insert("MM");
      Instrmt_33.add_attribute("Snrty", "SB"); // 2
      Instrmt_33_set.insert("SB");
      Instrmt_33.add_attribute("NotlPctOut", "14028797.820000"); // 2
      Instrmt_33_set.insert("14028797.820000");
      Instrmt_33.add_attribute("OrigNotlPctOut", "3570385.810000"); // 2
      Instrmt_33_set.insert("3570385.810000");
      Instrmt_33.add_attribute("AttchPnt", "13162974.900000"); // 2
      Instrmt_33_set.insert("13162974.900000");
      Instrmt_33.add_attribute("DetchPnt", "11296012.880000"); // 2
      Instrmt_33_set.insert("11296012.880000");
      Instrmt_33.add_attribute("Issued", "IssueDate_t_2039166910"); // 2
      Instrmt_33_set.insert("IssueDate_t_2039166910");
      Instrmt_33.add_attribute("RepoCollSecTyp", "1626609967"); // 2
      Instrmt_33_set.insert("1626609967");
      Instrmt_33.add_attribute("RepoTrm", "2102642594"); // 2
      Instrmt_33_set.insert("2102642594");
      Instrmt_33.add_attribute("RepoRt", "16475060.890000"); // 2
      Instrmt_33_set.insert("16475060.890000");
      Instrmt_33.add_attribute("Fctr", "2608019.030000"); // 2
      Instrmt_33_set.insert("2608019.030000");
      Instrmt_33.add_attribute("CrdRtg", "CreditRating_t_141880559"); // 2
      Instrmt_33_set.insert("CreditRating_t_141880559");
      Instrmt_33.add_attribute("Rgstry", "InstrRegistry_t_660602554"); // 2
      Instrmt_33_set.insert("InstrRegistry_t_660602554");
      Instrmt_33.add_attribute("IssuCtry", "1869534785"); // 2
      Instrmt_33_set.insert("1869534785");
      Instrmt_33.add_attribute("StPrv", "StateOrProvinceOfIssue_t_441985982"); // 2
      Instrmt_33_set.insert("StateOrProvinceOfIssue_t_441985982");
      Instrmt_33.add_attribute("Lcl", "LocaleOfIssue_t_1159406805"); // 2
      Instrmt_33_set.insert("LocaleOfIssue_t_1159406805");
      Instrmt_33.add_attribute("Redeem", "RedemptionDate_t_2111149214"); // 2
      Instrmt_33_set.insert("RedemptionDate_t_2111149214");
      Instrmt_33.add_attribute("StrkPx", "20459526.990000"); // 2
      Instrmt_33_set.insert("20459526.990000");
      Instrmt_33.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_33_set.insert("USD");
      Instrmt_33.add_attribute("StrkMult", "3549667.340000"); // 2
      Instrmt_33_set.insert("3549667.340000");
      Instrmt_33.add_attribute("StrkValu", "14257931.940000"); // 2
      Instrmt_33_set.insert("14257931.940000");
      Instrmt_33.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_33_set.insert("3");
      Instrmt_33.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_33_set.insert("2");
      Instrmt_33.add_attribute("StrkPxBndryPrcsn", "10352785.130000"); // 2
      Instrmt_33_set.insert("10352785.130000");
      Instrmt_33.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_33_set.insert("3");
      Instrmt_33.add_attribute("OptAt", "1773363286"); // 2
      Instrmt_33_set.insert("1773363286");
      Instrmt_33.add_attribute("Mult", "15118086.820000"); // 2
      Instrmt_33_set.insert("15118086.820000");
      Instrmt_33.add_attribute("MultTyp", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_33_set.insert("0");
      Instrmt_33.add_attribute("MinPxIncr", "10657599.250000"); // 2
      Instrmt_33_set.insert("10657599.250000");
      Instrmt_33.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_262103341"); // 2
      Instrmt_33_set.insert("MinPriceIncrementAmount_t_262103341");
      Instrmt_33.add_attribute("UOM", "USD"); // 2
      Instrmt_33_set.insert("USD");
      Instrmt_33.add_attribute("UOMQty", "3211560.590000"); // 2
      Instrmt_33_set.insert("3211560.590000");
      Instrmt_33.add_attribute("PxUOM", "USD"); // 2
      Instrmt_33_set.insert("USD");
      Instrmt_33.add_attribute("PxUOMQty", "19112643.390000"); // 2
      Instrmt_33_set.insert("19112643.390000");
      Instrmt_33.add_attribute("SettlMeth", "P"); // 2
      Instrmt_33_set.insert("P");
      Instrmt_33.add_attribute("ExerStyle", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_33_set.insert("3");
      Instrmt_33.add_attribute("OptPayAmt", "OptPayoutAmount_t_1405916293"); // 2
      Instrmt_33_set.insert("OptPayoutAmount_t_1405916293");
      Instrmt_33.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_33_set.insert("INT");
      Instrmt_33.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_33_set.insert("FUT");
      Instrmt_33.add_attribute("ListMeth", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("CapPx", "6714501.800000"); // 2
      Instrmt_33_set.insert("6714501.800000");
      Instrmt_33.add_attribute("FlrPx", "13732436.990000"); // 2
      Instrmt_33_set.insert("13732436.990000");
      Instrmt_33.add_attribute("PutCall", "1"); // 2
      Instrmt_33_set.insert("1");
      Instrmt_33.add_attribute("FlexInd", "true"); // 2
      Instrmt_33_set.insert("true");
      Instrmt_33.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_33_set.insert("false");
      Instrmt_33.add_attribute("TmUnit", "D"); // 2
      Instrmt_33_set.insert("D");
      Instrmt_33.add_attribute("CpnRt", "14542389.240000"); // 2
      Instrmt_33_set.insert("14542389.240000");
      Instrmt_33.add_attribute("Exch", "SecurityExchange_t_666059043"); // 2
      Instrmt_33_set.insert("SecurityExchange_t_666059043");
      Instrmt_33.add_attribute("PosLmt", "95734972"); // 2
      Instrmt_33_set.insert("95734972");
      Instrmt_33.add_attribute("NTPosLmt", "732548470"); // 2
      Instrmt_33_set.insert("732548470");
      Instrmt_33.add_attribute("Issr", "Issuer_t_1342231337"); // 2
      Instrmt_33_set.insert("Issuer_t_1342231337");
      Instrmt_33.add_attribute("EncIssrLen", "1385194043"); // 2
      Instrmt_33_set.insert("1385194043");
      Instrmt_33.add_attribute("EncIssr", "EncodedIssuer_t_1767826983"); // 2
      Instrmt_33_set.insert("EncodedIssuer_t_1767826983");
      Instrmt_33.add_attribute("Desc", "SecurityDesc_t_1392289995"); // 2
      Instrmt_33_set.insert("SecurityDesc_t_1392289995");
      Instrmt_33.add_attribute("EncSecDescLen", "1011073681"); // 2
      Instrmt_33_set.insert("1011073681");
      Instrmt_33.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1132152017"); // 2
      Instrmt_33_set.insert("EncodedSecurityDesc_t_1132152017");
      Instrmt_33.add_attribute("Pool", "Pool_t_1413046943"); // 2
      Instrmt_33_set.insert("Pool_t_1413046943");
      Instrmt_33.add_attribute("CSetMo", "1900157266"); // 2
      Instrmt_33_set.insert("1900157266");
      Instrmt_33.add_attribute("CPPgm", "99"); // 2
      Instrmt_33_set.insert("99");
      Instrmt_33.add_attribute("CPRegT", "CPRegType_t_1675150284"); // 2
      Instrmt_33_set.insert("CPRegType_t_1675150284");
      Instrmt_33.add_attribute("Dated", "DatedDate_t_347640467"); // 2
      Instrmt_33_set.insert("DatedDate_t_347640467");
      Instrmt_33.add_attribute("IntAcrl", "InterestAccrualDate_t_371584354"); // 2
      Instrmt_33_set.insert("InterestAccrualDate_t_371584354");
      all_values.push_back(Instrmt_33_set);
      all_compo_names.insert("Instrmt_33_set");

      {
        xml_element AID_36{"AID"};
        multiset<string> AID_36_set;
        AID_36.add_attribute("AltID", "SecurityAltID_t_146808559"); // 3
        AID_36_set.insert("SecurityAltID_t_146808559");
        AID_36.add_attribute("AltIDSrc", "3"); // 3
        AID_36_set.insert("3");
        all_values.push_back(AID_36_set);
        all_compo_names.insert("AID_36_set");

        Instrmt_33.add_element(AID_36);
      }
      {
        xml_element SecXML_36{"SecXML"};
        multiset<string> SecXML_36_set;
        SecXML_36.add_attribute("Schema", "SecurityXMLSchema_t_1822341702"); // 3
        SecXML_36_set.insert("SecurityXMLSchema_t_1822341702");
        all_values.push_back(SecXML_36_set);
        all_compo_names.insert("SecXML_36_set");

        Instrmt_33.add_element(SecXML_36);
      }
      {
        xml_element Evnt_36{"Evnt"};
        multiset<string> Evnt_36_set;
        Evnt_36.add_attribute("EventTyp", "4"); // 3
        Evnt_36_set.insert("4");
        Evnt_36.add_attribute("Dt", "EventDate_t_1501811817"); // 3
        Evnt_36_set.insert("EventDate_t_1501811817");
        Evnt_36.add_attribute("Tm", "EventTime_t_1080774347"); // 3
        Evnt_36_set.insert("EventTime_t_1080774347");
        Evnt_36.add_attribute("Px", "6684813.690000"); // 3
        Evnt_36_set.insert("6684813.690000");
        Evnt_36.add_attribute("Txt", "EventText_t_1005520730"); // 3
        Evnt_36_set.insert("EventText_t_1005520730");
        all_values.push_back(Evnt_36_set);
        all_compo_names.insert("Evnt_36_set");

        Instrmt_33.add_element(Evnt_36);
      }
      {
        xml_element Pty_191{"Pty"};
        multiset<string> Pty_191_set;
        Pty_191.add_attribute("ID", "InstrumentPartyID_t_481087552"); // 3
        Pty_191_set.insert("InstrumentPartyID_t_481087552");
        Pty_191.add_attribute("Src", "D"); // 3
        Pty_191_set.insert("D");
        Pty_191.add_attribute("R", "56"); // 3
        Pty_191_set.insert("56");
        all_values.push_back(Pty_191_set);
        all_compo_names.insert("Pty_191_set");

        {
          xml_element Sub_191{"Sub"};
          multiset<string> Sub_191_set;
          Sub_191.add_attribute("ID", "InstrumentPartySubID_t_323386740"); // 4
          Sub_191_set.insert("InstrumentPartySubID_t_323386740");
          Sub_191.add_attribute("Typ", "10"); // 4
          Sub_191_set.insert("10");
          all_values.push_back(Sub_191_set);
          all_compo_names.insert("Sub_191_set");

          Pty_191.add_element(Sub_191);
        }
        Instrmt_33.add_element(Pty_191);
      }
      {
        xml_element CmplxEvnt_33{"CmplxEvnt"};
        multiset<string> CmplxEvnt_33_set;
        CmplxEvnt_33.add_attribute("Typ", "5"); // 3
        CmplxEvnt_33_set.insert("5");
        CmplxEvnt_33.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_64154978"); // 3
        CmplxEvnt_33_set.insert("ComplexOptPayoutAmount_t_64154978");
        CmplxEvnt_33.add_attribute("Px", "3300601.640000"); // 3
        CmplxEvnt_33_set.insert("3300601.640000");
        CmplxEvnt_33.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_33_set.insert("2");
        CmplxEvnt_33.add_attribute("PxBndryPrcsn", "1598899.510000"); // 3
        CmplxEvnt_33_set.insert("1598899.510000");
        CmplxEvnt_33.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_33_set.insert("1");
        CmplxEvnt_33.add_attribute("Cond", "2"); // 3
        CmplxEvnt_33_set.insert("2");
        all_values.push_back(CmplxEvnt_33_set);
        all_compo_names.insert("CmplxEvnt_33_set");

        {
          xml_element EvntDts_33{"EvntDts"};
          multiset<string> EvntDts_33_set;
          EvntDts_33.add_attribute("StartDt", "ComplexEventStartDate_t_1545083994"); // 4
          EvntDts_33_set.insert("ComplexEventStartDate_t_1545083994");
          EvntDts_33.add_attribute("EndDt", "ComplexEventEndDate_t_682951970"); // 4
          EvntDts_33_set.insert("ComplexEventEndDate_t_682951970");
          all_values.push_back(EvntDts_33_set);
          all_compo_names.insert("EvntDts_33_set");

          {
            xml_element EvntTms_33{"EvntTms"};
            multiset<string> EvntTms_33_set;
            EvntTms_33.add_attribute("StartTm", "673803126"); // 5
            EvntTms_33_set.insert("673803126");
            EvntTms_33.add_attribute("EndTm", "408674028"); // 5
            EvntTms_33_set.insert("408674028");
            all_values.push_back(EvntTms_33_set);
            all_compo_names.insert("EvntTms_33_set");

            EvntDts_33.add_element(EvntTms_33);
          }
          CmplxEvnt_33.add_element(EvntDts_33);
        }
        Instrmt_33.add_element(CmplxEvnt_33);
      }
      InstReq_0.add_element(Instrmt_33);
    }
    {
      xml_element Undly_46{"Undly"};
      multiset<string> Undly_46_set;
      Undly_46.add_attribute("Sym", "UnderlyingSymbol_t_1815103987"); // 2
      Undly_46_set.insert("UnderlyingSymbol_t_1815103987");
      Undly_46.add_attribute("Sfx", "WI"); // 2
      Undly_46_set.insert("WI");
      Undly_46.add_attribute("ID", "UnderlyingSecurityID_t_161347646"); // 2
      Undly_46_set.insert("UnderlyingSecurityID_t_161347646");
      Undly_46.add_attribute("Src", "K"); // 2
      Undly_46_set.insert("K");
      Undly_46.add_attribute("Prod", "7"); // 2
      Undly_46_set.insert("7");
      Undly_46.add_attribute("CFI", "UnderlyingCFICode_t_508988114"); // 2
      Undly_46_set.insert("UnderlyingCFICode_t_508988114");
      Undly_46.add_attribute("SecTyp", "SWING"); // 2
      Undly_46_set.insert("SWING");
      Undly_46.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1761325265"); // 2
      Undly_46_set.insert("UnderlyingSecuritySubType_t_1761325265");
      Undly_46.add_attribute("MMY", "620409272"); // 2
      Undly_46_set.insert("620409272");
      Undly_46.add_attribute("Mat", "UnderlyingMaturityDate_t_1911974691"); // 2
      Undly_46_set.insert("UnderlyingMaturityDate_t_1911974691");
      Undly_46.add_attribute("MatTm", "271475360"); // 2
      Undly_46_set.insert("271475360");
      Undly_46.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2122221089"); // 2
      Undly_46_set.insert("UnderlyingCouponPaymentDate_t_2122221089");
      Undly_46.add_attribute("RestrctTyp", "MM"); // 2
      Undly_46_set.insert("MM");
      Undly_46.add_attribute("Snrty", "SD"); // 2
      Undly_46_set.insert("SD");
      Undly_46.add_attribute("NotlPctOut", "9802581.720000"); // 2
      Undly_46_set.insert("9802581.720000");
      Undly_46.add_attribute("OrigNotlPctOut", "13263529.430000"); // 2
      Undly_46_set.insert("13263529.430000");
      Undly_46.add_attribute("AttchPnt", "1324046.320000"); // 2
      Undly_46_set.insert("1324046.320000");
      Undly_46.add_attribute("DetchPnt", "12115389.530000"); // 2
      Undly_46_set.insert("12115389.530000");
      Undly_46.add_attribute("Issued", "UnderlyingIssueDate_t_1649739683"); // 2
      Undly_46_set.insert("UnderlyingIssueDate_t_1649739683");
      Undly_46.add_attribute("RepoCollSecTyp", "1155709520"); // 2
      Undly_46_set.insert("1155709520");
      Undly_46.add_attribute("RepoTrm", "632245352"); // 2
      Undly_46_set.insert("632245352");
      Undly_46.add_attribute("RepoRt", "17138946.610000"); // 2
      Undly_46_set.insert("17138946.610000");
      Undly_46.add_attribute("Fctr", "14857696.840000"); // 2
      Undly_46_set.insert("14857696.840000");
      Undly_46.add_attribute("CrdRtg", "UnderlyingCreditRating_t_719010793"); // 2
      Undly_46_set.insert("UnderlyingCreditRating_t_719010793");
      Undly_46.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1873784612"); // 2
      Undly_46_set.insert("UnderlyingInstrRegistry_t_1873784612");
      Undly_46.add_attribute("Ctry", "400894670"); // 2
      Undly_46_set.insert("400894670");
      Undly_46.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_523924"); // 2
      Undly_46_set.insert("UnderlyingStateOrProvinceOfIssue_t_523924");
      Undly_46.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1271384959"); // 2
      Undly_46_set.insert("UnderlyingLocaleOfIssue_t_1271384959");
      Undly_46.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1083846640"); // 2
      Undly_46_set.insert("UnderlyingRedemptionDate_t_1083846640");
      Undly_46.add_attribute("StrkPx", "6743270.510000"); // 2
      Undly_46_set.insert("6743270.510000");
      Undly_46.add_attribute("StrkCcy", "JPY"); // 2
      Undly_46_set.insert("JPY");
      Undly_46.add_attribute("OptA", "613693472"); // 2
      Undly_46_set.insert("613693472");
      Undly_46.add_attribute("Mult", "18414066.330000"); // 2
      Undly_46_set.insert("18414066.330000");
      Undly_46.add_attribute("MultTyp", "2"); // 2
      Undly_46_set.insert("2");
      Undly_46.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_46_set.insert("0");
      Undly_46.add_attribute("UOM", "MMBtu"); // 2
      Undly_46_set.insert("MMBtu");
      Undly_46.add_attribute("UOMQty", "5591486.030000"); // 2
      Undly_46_set.insert("5591486.030000");
      Undly_46.add_attribute("PxUOM", "Alw"); // 2
      Undly_46_set.insert("Alw");
      Undly_46.add_attribute("PxUOMQty", "8233203.720000"); // 2
      Undly_46_set.insert("8233203.720000");
      Undly_46.add_attribute("TmUnit", "Min"); // 2
      Undly_46_set.insert("Min");
      Undly_46.add_attribute("ExerStyle", "0"); // 2
      Undly_46_set.insert("0");
      Undly_46.add_attribute("CpnRt", "7980578.130000"); // 2
      Undly_46_set.insert("7980578.130000");
      Undly_46.add_attribute("Exch", "UnderlyingSecurityExchange_t_1168905037"); // 2
      Undly_46_set.insert("UnderlyingSecurityExchange_t_1168905037");
      Undly_46.add_attribute("Issr", "UnderlyingIssuer_t_906000238"); // 2
      Undly_46_set.insert("UnderlyingIssuer_t_906000238");
      Undly_46.add_attribute("EncUndIssrLen", "1778315985"); // 2
      Undly_46_set.insert("1778315985");
      Undly_46.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_347774332"); // 2
      Undly_46_set.insert("EncodedUnderlyingIssuer_t_347774332");
      Undly_46.add_attribute("Desc", "UnderlyingSecurityDesc_t_1038404870"); // 2
      Undly_46_set.insert("UnderlyingSecurityDesc_t_1038404870");
      Undly_46.add_attribute("EncUndSecDescLen", "842371291"); // 2
      Undly_46_set.insert("842371291");
      Undly_46.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1997514015"); // 2
      Undly_46_set.insert("EncodedUnderlyingSecurityDesc_t_1997514015");
      Undly_46.add_attribute("CPPgm", "UnderlyingCPProgram_t_46630742"); // 2
      Undly_46_set.insert("UnderlyingCPProgram_t_46630742");
      Undly_46.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1474616643"); // 2
      Undly_46_set.insert("UnderlyingCPRegType_t_1474616643");
      Undly_46.add_attribute("AllocPct", "15639250.280000"); // 2
      Undly_46_set.insert("15639250.280000");
      Undly_46.add_attribute("Ccy", "GBP"); // 2
      Undly_46_set.insert("GBP");
      Undly_46.add_attribute("Qty", "12902259.930000"); // 2
      Undly_46_set.insert("12902259.930000");
      Undly_46.add_attribute("SettlTyp", "5"); // 2
      Undly_46_set.insert("5");
      Undly_46.add_attribute("CashAmt", "UnderlyingCashAmount_t_46667713"); // 2
      Undly_46_set.insert("UnderlyingCashAmount_t_46667713");
      Undly_46.add_attribute("CashTyp", "FIXED"); // 2
      Undly_46_set.insert("FIXED");
      Undly_46.add_attribute("Px", "8696580.890000"); // 2
      Undly_46_set.insert("8696580.890000");
      Undly_46.add_attribute("DirtPx", "7209947.640000"); // 2
      Undly_46_set.insert("7209947.640000");
      Undly_46.add_attribute("EndPx", "20941862.910000"); // 2
      Undly_46_set.insert("20941862.910000");
      Undly_46.add_attribute("StartVal", "UnderlyingStartValue_t_1621125069"); // 2
      Undly_46_set.insert("UnderlyingStartValue_t_1621125069");
      Undly_46.add_attribute("CurVal", "UnderlyingCurrentValue_t_1334688236"); // 2
      Undly_46_set.insert("UnderlyingCurrentValue_t_1334688236");
      Undly_46.add_attribute("EndVal", "UnderlyingEndValue_t_1788109276"); // 2
      Undly_46_set.insert("UnderlyingEndValue_t_1788109276");
      Undly_46.add_attribute("AdjQty", "20906406.830000"); // 2
      Undly_46_set.insert("20906406.830000");
      Undly_46.add_attribute("FxRate", "14154147.670000"); // 2
      Undly_46_set.insert("14154147.670000");
      Undly_46.add_attribute("FxRateCalc", "M"); // 2
      Undly_46_set.insert("M");
      Undly_46.add_attribute("CapValu", "UnderlyingCapValue_t_502305639"); // 2
      Undly_46_set.insert("UnderlyingCapValue_t_502305639");
      Undly_46.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1109982914"); // 2
      Undly_46_set.insert("UnderlyingSettlMethod_t_1109982914");
      Undly_46.add_attribute("PutCall", "666857100"); // 2
      Undly_46_set.insert("666857100");
      all_values.push_back(Undly_46_set);
      all_compo_names.insert("Undly_46_set");

      {
        xml_element UndAID_46{"UndAID"};
        multiset<string> UndAID_46_set;
        UndAID_46.add_attribute("AltID", "UnderlyingSecurityAltID_t_825945285"); // 3
        UndAID_46_set.insert("UnderlyingSecurityAltID_t_825945285");
        UndAID_46.add_attribute("AltIDSrc", "K"); // 3
        UndAID_46_set.insert("K");
        all_values.push_back(UndAID_46_set);
        all_compo_names.insert("UndAID_46_set");

        Undly_46.add_element(UndAID_46);
      }
      {
        xml_element Stip_70{"Stip"};
        multiset<string> Stip_70_set;
        Stip_70.add_attribute("Typ", "PPL"); // 3
        Stip_70_set.insert("PPL");
        Stip_70.add_attribute("Val", "UnderlyingStipValue_t_1994850322"); // 3
        Stip_70_set.insert("UnderlyingStipValue_t_1994850322");
        all_values.push_back(Stip_70_set);
        all_compo_names.insert("Stip_70_set");

        Undly_46.add_element(Stip_70);
      }
      {
        xml_element Pty_192{"Pty"};
        multiset<string> Pty_192_set;
        Pty_192.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1982026660"); // 3
        Pty_192_set.insert("UnderlyingInstrumentPartyID_t_1982026660");
        Pty_192.add_attribute("Src", "6"); // 3
        Pty_192_set.insert("6");
        Pty_192.add_attribute("R", "27"); // 3
        Pty_192_set.insert("27");
        all_values.push_back(Pty_192_set);
        all_compo_names.insert("Pty_192_set");

        {
          xml_element Sub_192{"Sub"};
          multiset<string> Sub_192_set;
          Sub_192.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_872947882"); // 4
          Sub_192_set.insert("UnderlyingInstrumentPartySubID_t_872947882");
          Sub_192.add_attribute("Typ", "31"); // 4
          Sub_192_set.insert("31");
          all_values.push_back(Sub_192_set);
          all_compo_names.insert("Sub_192_set");

          Pty_192.add_element(Sub_192);
        }
        Undly_46.add_element(Pty_192);
      }
      InstReq_0.add_element(Undly_46);
    }
    {
      xml_element Leg_44{"Leg"};
      multiset<string> Leg_44_set;
      Leg_44.add_attribute("Sym", "LegSymbol_t_45171373"); // 2
      Leg_44_set.insert("LegSymbol_t_45171373");
      Leg_44.add_attribute("Sfx", "CD"); // 2
      Leg_44_set.insert("CD");
      Leg_44.add_attribute("ID", "LegSecurityID_t_1265251537"); // 2
      Leg_44_set.insert("LegSecurityID_t_1265251537");
      Leg_44.add_attribute("Src", "D"); // 2
      Leg_44_set.insert("D");
      Leg_44.add_attribute("Prod", "12"); // 2
      Leg_44_set.insert("12");
      Leg_44.add_attribute("CFI", "LegCFICode_t_1311395325"); // 2
      Leg_44_set.insert("LegCFICode_t_1311395325");
      Leg_44.add_attribute("SecTyp", "YCD"); // 2
      Leg_44_set.insert("YCD");
      Leg_44.add_attribute("SecSubTyp", "LegSecuritySubType_t_90306851"); // 2
      Leg_44_set.insert("LegSecuritySubType_t_90306851");
      Leg_44.add_attribute("MMY", "1358063038"); // 2
      Leg_44_set.insert("1358063038");
      Leg_44.add_attribute("Mat", "LegMaturityDate_t_1165966051"); // 2
      Leg_44_set.insert("LegMaturityDate_t_1165966051");
      Leg_44.add_attribute("MatTm", "959964940"); // 2
      Leg_44_set.insert("959964940");
      Leg_44.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2079057802"); // 2
      Leg_44_set.insert("LegCouponPaymentDate_t_2079057802");
      Leg_44.add_attribute("Issued", "LegIssueDate_t_1112668694"); // 2
      Leg_44_set.insert("LegIssueDate_t_1112668694");
      Leg_44.add_attribute("RepoCollSecTyp", "433606361"); // 2
      Leg_44_set.insert("433606361");
      Leg_44.add_attribute("RepoTrm", "1266262391"); // 2
      Leg_44_set.insert("1266262391");
      Leg_44.add_attribute("RepoRt", "7532943.220000"); // 2
      Leg_44_set.insert("7532943.220000");
      Leg_44.add_attribute("Fctr", "3767633.960000"); // 2
      Leg_44_set.insert("3767633.960000");
      Leg_44.add_attribute("CrdRtg", "LegCreditRating_t_534193510"); // 2
      Leg_44_set.insert("LegCreditRating_t_534193510");
      Leg_44.add_attribute("Rgstry", "LegInstrRegistry_t_596831050"); // 2
      Leg_44_set.insert("LegInstrRegistry_t_596831050");
      Leg_44.add_attribute("Ctry", "879069035"); // 2
      Leg_44_set.insert("879069035");
      Leg_44.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1644176424"); // 2
      Leg_44_set.insert("LegStateOrProvinceOfIssue_t_1644176424");
      Leg_44.add_attribute("Lcl", "LegLocaleOfIssue_t_1263688150"); // 2
      Leg_44_set.insert("LegLocaleOfIssue_t_1263688150");
      Leg_44.add_attribute("Redeem", "LegRedemptionDate_t_1705014321"); // 2
      Leg_44_set.insert("LegRedemptionDate_t_1705014321");
      Leg_44.add_attribute("Strk", "5727191.990000"); // 2
      Leg_44_set.insert("5727191.990000");
      Leg_44.add_attribute("StrkCcy", "CAN"); // 2
      Leg_44_set.insert("CAN");
      Leg_44.add_attribute("OptA", "407262211"); // 2
      Leg_44_set.insert("407262211");
      Leg_44.add_attribute("Cmult", "16768666.670000"); // 2
      Leg_44_set.insert("16768666.670000");
      Leg_44.add_attribute("MultTyp", "0"); // 2
      Leg_44_set.insert("0");
      Leg_44.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_44_set.insert("4");
      Leg_44.add_attribute("UOM", "MMbbl"); // 2
      Leg_44_set.insert("MMbbl");
      Leg_44.add_attribute("UOMQty", "17926933.750000"); // 2
      Leg_44_set.insert("17926933.750000");
      Leg_44.add_attribute("PxUOM", "Alw"); // 2
      Leg_44_set.insert("Alw");
      Leg_44.add_attribute("PxUOMQty", "5852694.500000"); // 2
      Leg_44_set.insert("5852694.500000");
      Leg_44.add_attribute("TmUnit", "Yr"); // 2
      Leg_44_set.insert("Yr");
      Leg_44.add_attribute("ExerStyle", "0"); // 2
      Leg_44_set.insert("0");
      Leg_44.add_attribute("CpnRt", "18966647.750000"); // 2
      Leg_44_set.insert("18966647.750000");
      Leg_44.add_attribute("Exch", "LegSecurityExchange_t_2006144876"); // 2
      Leg_44_set.insert("LegSecurityExchange_t_2006144876");
      Leg_44.add_attribute("Issr", "LegIssuer_t_447107324"); // 2
      Leg_44_set.insert("LegIssuer_t_447107324");
      Leg_44.add_attribute("EncLegIssrLen", "1107244166"); // 2
      Leg_44_set.insert("1107244166");
      Leg_44.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1024627279"); // 2
      Leg_44_set.insert("EncodedLegIssuer_t_1024627279");
      Leg_44.add_attribute("Desc", "LegSecurityDesc_t_1407072264"); // 2
      Leg_44_set.insert("LegSecurityDesc_t_1407072264");
      Leg_44.add_attribute("EncLegSecDescLen", "1038818320"); // 2
      Leg_44_set.insert("1038818320");
      Leg_44.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2137295973"); // 2
      Leg_44_set.insert("EncodedLegSecurityDesc_t_2137295973");
      Leg_44.add_attribute("RatioQty", "18406786.250000"); // 2
      Leg_44_set.insert("18406786.250000");
      Leg_44.add_attribute("Side", "8"); // 2
      Leg_44_set.insert("8");
      Leg_44.add_attribute("Ccy", "CAN"); // 2
      Leg_44_set.insert("CAN");
      Leg_44.add_attribute("Pool", "LegPool_t_691790573"); // 2
      Leg_44_set.insert("LegPool_t_691790573");
      Leg_44.add_attribute("Dated", "LegDatedDate_t_1339937698"); // 2
      Leg_44_set.insert("LegDatedDate_t_1339937698");
      Leg_44.add_attribute("CSetMo", "949027409"); // 2
      Leg_44_set.insert("949027409");
      Leg_44.add_attribute("IntAcrl", "LegInterestAccrualDate_t_188483350"); // 2
      Leg_44_set.insert("LegInterestAccrualDate_t_188483350");
      Leg_44.add_attribute("PutCall", "456142201"); // 2
      Leg_44_set.insert("456142201");
      Leg_44.add_attribute("LegOptionRatio", "5065580.820000"); // 2
      Leg_44_set.insert("5065580.820000");
      Leg_44.add_attribute("Px", "7612025.490000"); // 2
      Leg_44_set.insert("7612025.490000");
      all_values.push_back(Leg_44_set);
      all_compo_names.insert("Leg_44_set");

      {
        xml_element LegAID_44{"LegAID"};
        multiset<string> LegAID_44_set;
        LegAID_44.add_attribute("SecAltID", "LegSecurityAltID_t_1037261617"); // 3
        LegAID_44_set.insert("LegSecurityAltID_t_1037261617");
        LegAID_44.add_attribute("SecAltIDSrc", "L"); // 3
        LegAID_44_set.insert("L");
        all_values.push_back(LegAID_44_set);
        all_compo_names.insert("LegAID_44_set");

        Leg_44.add_element(LegAID_44);
      }
      InstReq_0.add_element(Leg_44);
    }
    elt.add_element(InstReq_0);
  } // end InstReq
  { // TrdSes
    xml_element TrdSes_2{"TrdSes"};
    multiset<string> TrdSes_2_set;
    TrdSes_2.add_attribute("SesID", "5"); // 1
    TrdSes_2_set.insert("5");
    TrdSes_2.add_attribute("SesSub", "7"); // 1
    TrdSes_2_set.insert("7");
    all_values.push_back(TrdSes_2_set);
    all_compo_names.insert("TrdSes_2_set");

    elt.add_element(TrdSes_2);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_3{"TrdSes"};
    multiset<string> TrdSes_3_set;
    TrdSes_3.add_attribute("SesID", "3"); // 1
    TrdSes_3_set.insert("3");
    TrdSes_3.add_attribute("SesSub", "7"); // 1
    TrdSes_3_set.insert("7");
    all_values.push_back(TrdSes_3_set);
    all_compo_names.insert("TrdSes_3_set");

    elt.add_element(TrdSes_3);
  } // end TrdSes
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
