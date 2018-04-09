#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Email.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Email_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Email" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Email_message_t_0;
  elt.add_attribute("EmailThreadID", "EmailThreadID_t_332920259"); // 0
  Email_message_t_0.insert("EmailThreadID_t_332920259");
  elt.add_attribute("EmailTyp", "0"); // 0
  Email_message_t_0.insert("0");
  elt.add_attribute("OrigTm", "OrigTime_t_626794162"); // 0
  Email_message_t_0.insert("OrigTime_t_626794162");
  elt.add_attribute("Subject", "Subject_t_1773284673"); // 0
  Email_message_t_0.insert("Subject_t_1773284673");
  elt.add_attribute("EncSubjectLen", "578348017"); // 0
  Email_message_t_0.insert("578348017");
  elt.add_attribute("EncSubject", "EncodedSubject_t_1053341111"); // 0
  Email_message_t_0.insert("EncodedSubject_t_1053341111");
  elt.add_attribute("OrdID", "OrderID_t_141737856"); // 0
  Email_message_t_0.insert("OrderID_t_141737856");
  elt.add_attribute("ClOrdID", "ClOrdID_t_724613300"); // 0
  Email_message_t_0.insert("ClOrdID_t_724613300");
  elt.add_attribute("RawDataLength", "1182523391"); // 0
  Email_message_t_0.insert("1182523391");
  elt.add_attribute("RawData", "RawData_t_448065"); // 0
  Email_message_t_0.insert("RawData_t_448065");
  all_values.push_back(Email_message_t_0);
  all_compo_names.insert("Email_message_t");

  { // Hdr
    xml_element Hdr_30{"Hdr"};
    multiset<string> Hdr_30_set;
    Hdr_30.add_attribute("SeqNum", "1444735747"); // 1
    Hdr_30_set.insert("1444735747");
    Hdr_30.add_attribute("SID", "SenderCompID_t_450089478"); // 1
    Hdr_30_set.insert("SenderCompID_t_450089478");
    Hdr_30.add_attribute("TID", "TargetCompID_t_156152946"); // 1
    Hdr_30_set.insert("TargetCompID_t_156152946");
    Hdr_30.add_attribute("OBID", "OnBehalfOfCompID_t_2144274537"); // 1
    Hdr_30_set.insert("OnBehalfOfCompID_t_2144274537");
    Hdr_30.add_attribute("D2ID", "DeliverToCompID_t_578392887"); // 1
    Hdr_30_set.insert("DeliverToCompID_t_578392887");
    Hdr_30.add_attribute("SSub", "SenderSubID_t_1843978272"); // 1
    Hdr_30_set.insert("SenderSubID_t_1843978272");
    Hdr_30.add_attribute("SLoc", "SenderLocationID_t_111949156"); // 1
    Hdr_30_set.insert("SenderLocationID_t_111949156");
    Hdr_30.add_attribute("TSub", "TargetSubID_t_740677301"); // 1
    Hdr_30_set.insert("TargetSubID_t_740677301");
    Hdr_30.add_attribute("TLoc", "TargetLocationID_t_1165589176"); // 1
    Hdr_30_set.insert("TargetLocationID_t_1165589176");
    Hdr_30.add_attribute("OBSub", "OnBehalfOfSubID_t_1133000550"); // 1
    Hdr_30_set.insert("OnBehalfOfSubID_t_1133000550");
    Hdr_30.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2245051"); // 1
    Hdr_30_set.insert("OnBehalfOfLocationID_t_2245051");
    Hdr_30.add_attribute("D2Sub", "DeliverToSubID_t_242504513"); // 1
    Hdr_30_set.insert("DeliverToSubID_t_242504513");
    Hdr_30.add_attribute("D2Loc", "DeliverToLocationID_t_1088613149"); // 1
    Hdr_30_set.insert("DeliverToLocationID_t_1088613149");
    Hdr_30.add_attribute("PosDup", "N"); // 1
    Hdr_30_set.insert("N");
    Hdr_30.add_attribute("PosRsnd", "N"); // 1
    Hdr_30_set.insert("N");
    Hdr_30.add_attribute("Snt", "SendingTime_t_1500734975"); // 1
    Hdr_30_set.insert("SendingTime_t_1500734975");
    Hdr_30.add_attribute("OrigSnt", "OrigSendingTime_t_1707658517"); // 1
    Hdr_30_set.insert("OrigSendingTime_t_1707658517");
    Hdr_30.add_attribute("MsgEncd", "MessageEncoding_t_673008029"); // 1
    Hdr_30_set.insert("MessageEncoding_t_673008029");
    all_values.push_back(Hdr_30_set);
    all_compo_names.insert("Hdr_30_set");

    {
      xml_element Hop_30{"Hop"};
      multiset<string> Hop_30_set;
      Hop_30.add_attribute("ID", "HopCompID_t_378190295"); // 2
      Hop_30_set.insert("HopCompID_t_378190295");
      Hop_30.add_attribute("Ref", "908233930"); // 2
      Hop_30_set.insert("908233930");
      Hop_30.add_attribute("Snt", "HopSendingTime_t_1799328469"); // 2
      Hop_30_set.insert("HopSendingTime_t_1799328469");
      all_values.push_back(Hop_30_set);
      all_compo_names.insert("Hop_30_set");

      Hdr_30.add_element(Hop_30);
    }
    elt.add_element(Hdr_30);
  } // end Hdr
  { // Rtg
    xml_element Rtg_0{"Rtg"};
    multiset<string> Rtg_0_set;
    Rtg_0.add_attribute("RtgTyp", "3"); // 1
    Rtg_0_set.insert("3");
    Rtg_0.add_attribute("RtgID", "RoutingID_t_278638983"); // 1
    Rtg_0_set.insert("RoutingID_t_278638983");
    all_values.push_back(Rtg_0_set);
    all_compo_names.insert("Rtg_0_set");

    elt.add_element(Rtg_0);
  } // end Rtg
  { // Rtg
    xml_element Rtg_1{"Rtg"};
    multiset<string> Rtg_1_set;
    Rtg_1.add_attribute("RtgTyp", "4"); // 1
    Rtg_1_set.insert("4");
    Rtg_1.add_attribute("RtgID", "RoutingID_t_711698655"); // 1
    Rtg_1_set.insert("RoutingID_t_711698655");
    all_values.push_back(Rtg_1_set);
    all_compo_names.insert("Rtg_1_set");

    elt.add_element(Rtg_1);
  } // end Rtg
  { // Inst
    xml_element Inst_1{"Inst"};
    {
      xml_element Instrmt_20{"Instrmt"};
      multiset<string> Instrmt_20_set;
      Instrmt_20.add_attribute("Sym", "Symbol_t_478649436"); // 2
      Instrmt_20_set.insert("Symbol_t_478649436");
      Instrmt_20.add_attribute("Sfx", "CD"); // 2
      Instrmt_20_set.insert("CD");
      Instrmt_20.add_attribute("ID", "SecurityID_t_367019837"); // 2
      Instrmt_20_set.insert("SecurityID_t_367019837");
      Instrmt_20.add_attribute("Src", "4"); // 2
      Instrmt_20_set.insert("4");
      Instrmt_20.add_attribute("Prod", "12"); // 2
      Instrmt_20_set.insert("12");
      Instrmt_20.add_attribute("ProdCmplx", "ProductComplex_t_817109315"); // 2
      Instrmt_20_set.insert("ProductComplex_t_817109315");
      Instrmt_20.add_attribute("SecGrp", "SecurityGroup_t_635250447"); // 2
      Instrmt_20_set.insert("SecurityGroup_t_635250447");
      Instrmt_20.add_attribute("CFI", "CFICode_t_730354944"); // 2
      Instrmt_20_set.insert("CFICode_t_730354944");
      Instrmt_20.add_attribute("SecTyp", "IRS"); // 2
      Instrmt_20_set.insert("IRS");
      Instrmt_20.add_attribute("SubTyp", "SecuritySubType_t_331745071"); // 2
      Instrmt_20_set.insert("SecuritySubType_t_331745071");
      Instrmt_20.add_attribute("MMY", "842304100"); // 2
      Instrmt_20_set.insert("842304100");
      Instrmt_20.add_attribute("MatDt", "MaturityDate_t_2136179504"); // 2
      Instrmt_20_set.insert("MaturityDate_t_2136179504");
      Instrmt_20.add_attribute("MatTm", "1497334248"); // 2
      Instrmt_20_set.insert("1497334248");
      Instrmt_20.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1975304650"); // 2
      Instrmt_20_set.insert("SettleOnOpenFlag_t_1975304650");
      Instrmt_20.add_attribute("AsgnMeth", "2138424555"); // 2
      Instrmt_20_set.insert("2138424555");
      Instrmt_20.add_attribute("Status", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("CpnPmt", "CouponPaymentDate_t_916434151"); // 2
      Instrmt_20_set.insert("CouponPaymentDate_t_916434151");
      Instrmt_20.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_20_set.insert("MR");
      Instrmt_20.add_attribute("Snrty", "SD"); // 2
      Instrmt_20_set.insert("SD");
      Instrmt_20.add_attribute("NotlPctOut", "2696854.790000"); // 2
      Instrmt_20_set.insert("2696854.790000");
      Instrmt_20.add_attribute("OrigNotlPctOut", "6841615.540000"); // 2
      Instrmt_20_set.insert("6841615.540000");
      Instrmt_20.add_attribute("AttchPnt", "14546845.460000"); // 2
      Instrmt_20_set.insert("14546845.460000");
      Instrmt_20.add_attribute("DetchPnt", "6478757.740000"); // 2
      Instrmt_20_set.insert("6478757.740000");
      Instrmt_20.add_attribute("Issued", "IssueDate_t_1592395484"); // 2
      Instrmt_20_set.insert("IssueDate_t_1592395484");
      Instrmt_20.add_attribute("RepoCollSecTyp", "1106529367"); // 2
      Instrmt_20_set.insert("1106529367");
      Instrmt_20.add_attribute("RepoTrm", "1358986328"); // 2
      Instrmt_20_set.insert("1358986328");
      Instrmt_20.add_attribute("RepoRt", "17257461.220000"); // 2
      Instrmt_20_set.insert("17257461.220000");
      Instrmt_20.add_attribute("Fctr", "13851683.500000"); // 2
      Instrmt_20_set.insert("13851683.500000");
      Instrmt_20.add_attribute("CrdRtg", "CreditRating_t_1695897908"); // 2
      Instrmt_20_set.insert("CreditRating_t_1695897908");
      Instrmt_20.add_attribute("Rgstry", "InstrRegistry_t_289961130"); // 2
      Instrmt_20_set.insert("InstrRegistry_t_289961130");
      Instrmt_20.add_attribute("IssuCtry", "569664796"); // 2
      Instrmt_20_set.insert("569664796");
      Instrmt_20.add_attribute("StPrv", "StateOrProvinceOfIssue_t_27063696"); // 2
      Instrmt_20_set.insert("StateOrProvinceOfIssue_t_27063696");
      Instrmt_20.add_attribute("Lcl", "LocaleOfIssue_t_1726273086"); // 2
      Instrmt_20_set.insert("LocaleOfIssue_t_1726273086");
      Instrmt_20.add_attribute("Redeem", "RedemptionDate_t_936684634"); // 2
      Instrmt_20_set.insert("RedemptionDate_t_936684634");
      Instrmt_20.add_attribute("StrkPx", "5061611.970000"); // 2
      Instrmt_20_set.insert("5061611.970000");
      Instrmt_20.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_20_set.insert("CHF");
      Instrmt_20.add_attribute("StrkMult", "11414116.440000"); // 2
      Instrmt_20_set.insert("11414116.440000");
      Instrmt_20.add_attribute("StrkValu", "10427084.370000"); // 2
      Instrmt_20_set.insert("10427084.370000");
      Instrmt_20.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_20_set.insert("1");
      Instrmt_20.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("StrkPxBndryPrcsn", "18850125.380000"); // 2
      Instrmt_20_set.insert("18850125.380000");
      Instrmt_20.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_20_set.insert("1");
      Instrmt_20.add_attribute("OptAt", "823007316"); // 2
      Instrmt_20_set.insert("823007316");
      Instrmt_20.add_attribute("Mult", "17128335.400000"); // 2
      Instrmt_20_set.insert("17128335.400000");
      Instrmt_20.add_attribute("MultTyp", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_20_set.insert("4");
      Instrmt_20.add_attribute("MinPxIncr", "4817840.440000"); // 2
      Instrmt_20_set.insert("4817840.440000");
      Instrmt_20.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2105435952"); // 2
      Instrmt_20_set.insert("MinPriceIncrementAmount_t_2105435952");
      Instrmt_20.add_attribute("UOM", "Alw"); // 2
      Instrmt_20_set.insert("Alw");
      Instrmt_20.add_attribute("UOMQty", "7514695.230000"); // 2
      Instrmt_20_set.insert("7514695.230000");
      Instrmt_20.add_attribute("PxUOM", "USD"); // 2
      Instrmt_20_set.insert("USD");
      Instrmt_20.add_attribute("PxUOMQty", "5042398.440000"); // 2
      Instrmt_20_set.insert("5042398.440000");
      Instrmt_20.add_attribute("SettlMeth", "P"); // 2
      Instrmt_20_set.insert("P");
      Instrmt_20.add_attribute("ExerStyle", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("OptPayAmt", "OptPayoutAmount_t_610847977"); // 2
      Instrmt_20_set.insert("OptPayoutAmount_t_610847977");
      Instrmt_20.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_20_set.insert("STD");
      Instrmt_20.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_20_set.insert("CDS");
      Instrmt_20.add_attribute("ListMeth", "1"); // 2
      Instrmt_20_set.insert("1");
      Instrmt_20.add_attribute("CapPx", "21027329.460000"); // 2
      Instrmt_20_set.insert("21027329.460000");
      Instrmt_20.add_attribute("FlrPx", "14181187.090000"); // 2
      Instrmt_20_set.insert("14181187.090000");
      Instrmt_20.add_attribute("PutCall", "1"); // 2
      Instrmt_20_set.insert("1");
      Instrmt_20.add_attribute("FlexInd", "true"); // 2
      Instrmt_20_set.insert("true");
      Instrmt_20.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_20_set.insert("false");
      Instrmt_20.add_attribute("TmUnit", "Yr"); // 2
      Instrmt_20_set.insert("Yr");
      Instrmt_20.add_attribute("CpnRt", "19938758.770000"); // 2
      Instrmt_20_set.insert("19938758.770000");
      Instrmt_20.add_attribute("Exch", "SecurityExchange_t_1961113645"); // 2
      Instrmt_20_set.insert("SecurityExchange_t_1961113645");
      Instrmt_20.add_attribute("PosLmt", "1833898775"); // 2
      Instrmt_20_set.insert("1833898775");
      Instrmt_20.add_attribute("NTPosLmt", "889100667"); // 2
      Instrmt_20_set.insert("889100667");
      Instrmt_20.add_attribute("Issr", "Issuer_t_815442501"); // 2
      Instrmt_20_set.insert("Issuer_t_815442501");
      Instrmt_20.add_attribute("EncIssrLen", "1159571843"); // 2
      Instrmt_20_set.insert("1159571843");
      Instrmt_20.add_attribute("EncIssr", "EncodedIssuer_t_626629557"); // 2
      Instrmt_20_set.insert("EncodedIssuer_t_626629557");
      Instrmt_20.add_attribute("Desc", "SecurityDesc_t_1805950861"); // 2
      Instrmt_20_set.insert("SecurityDesc_t_1805950861");
      Instrmt_20.add_attribute("EncSecDescLen", "1982579159"); // 2
      Instrmt_20_set.insert("1982579159");
      Instrmt_20.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_191979449"); // 2
      Instrmt_20_set.insert("EncodedSecurityDesc_t_191979449");
      Instrmt_20.add_attribute("Pool", "Pool_t_639916480"); // 2
      Instrmt_20_set.insert("Pool_t_639916480");
      Instrmt_20.add_attribute("CSetMo", "250457940"); // 2
      Instrmt_20_set.insert("250457940");
      Instrmt_20.add_attribute("CPPgm", "1"); // 2
      Instrmt_20_set.insert("1");
      Instrmt_20.add_attribute("CPRegT", "CPRegType_t_597868784"); // 2
      Instrmt_20_set.insert("CPRegType_t_597868784");
      Instrmt_20.add_attribute("Dated", "DatedDate_t_1447496886"); // 2
      Instrmt_20_set.insert("DatedDate_t_1447496886");
      Instrmt_20.add_attribute("IntAcrl", "InterestAccrualDate_t_1425233016"); // 2
      Instrmt_20_set.insert("InterestAccrualDate_t_1425233016");
      all_values.push_back(Instrmt_20_set);
      all_compo_names.insert("Instrmt_20_set");

      {
        xml_element AID_23{"AID"};
        multiset<string> AID_23_set;
        AID_23.add_attribute("AltID", "SecurityAltID_t_1239982642"); // 3
        AID_23_set.insert("SecurityAltID_t_1239982642");
        AID_23.add_attribute("AltIDSrc", "K"); // 3
        AID_23_set.insert("K");
        all_values.push_back(AID_23_set);
        all_compo_names.insert("AID_23_set");

        Instrmt_20.add_element(AID_23);
      }
      {
        xml_element SecXML_23{"SecXML"};
        multiset<string> SecXML_23_set;
        SecXML_23.add_attribute("Schema", "SecurityXMLSchema_t_677094665"); // 3
        SecXML_23_set.insert("SecurityXMLSchema_t_677094665");
        all_values.push_back(SecXML_23_set);
        all_compo_names.insert("SecXML_23_set");

        Instrmt_20.add_element(SecXML_23);
      }
      {
        xml_element Evnt_23{"Evnt"};
        multiset<string> Evnt_23_set;
        Evnt_23.add_attribute("EventTyp", "16"); // 3
        Evnt_23_set.insert("16");
        Evnt_23.add_attribute("Dt", "EventDate_t_1415022293"); // 3
        Evnt_23_set.insert("EventDate_t_1415022293");
        Evnt_23.add_attribute("Tm", "EventTime_t_1287942643"); // 3
        Evnt_23_set.insert("EventTime_t_1287942643");
        Evnt_23.add_attribute("Px", "9922965.040000"); // 3
        Evnt_23_set.insert("9922965.040000");
        Evnt_23.add_attribute("Txt", "EventText_t_115992558"); // 3
        Evnt_23_set.insert("EventText_t_115992558");
        all_values.push_back(Evnt_23_set);
        all_compo_names.insert("Evnt_23_set");

        Instrmt_20.add_element(Evnt_23);
      }
      {
        xml_element Pty_132{"Pty"};
        multiset<string> Pty_132_set;
        Pty_132.add_attribute("ID", "InstrumentPartyID_t_1447204880"); // 3
        Pty_132_set.insert("InstrumentPartyID_t_1447204880");
        Pty_132.add_attribute("Src", "A"); // 3
        Pty_132_set.insert("A");
        Pty_132.add_attribute("R", "4"); // 3
        Pty_132_set.insert("4");
        all_values.push_back(Pty_132_set);
        all_compo_names.insert("Pty_132_set");

        {
          xml_element Sub_132{"Sub"};
          multiset<string> Sub_132_set;
          Sub_132.add_attribute("ID", "InstrumentPartySubID_t_1633530814"); // 4
          Sub_132_set.insert("InstrumentPartySubID_t_1633530814");
          Sub_132.add_attribute("Typ", "30"); // 4
          Sub_132_set.insert("30");
          all_values.push_back(Sub_132_set);
          all_compo_names.insert("Sub_132_set");

          Pty_132.add_element(Sub_132);
        }
        Instrmt_20.add_element(Pty_132);
      }
      {
        xml_element CmplxEvnt_20{"CmplxEvnt"};
        multiset<string> CmplxEvnt_20_set;
        CmplxEvnt_20.add_attribute("Typ", "3"); // 3
        CmplxEvnt_20_set.insert("3");
        CmplxEvnt_20.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_178534296"); // 3
        CmplxEvnt_20_set.insert("ComplexOptPayoutAmount_t_178534296");
        CmplxEvnt_20.add_attribute("Px", "3279767.690000"); // 3
        CmplxEvnt_20_set.insert("3279767.690000");
        CmplxEvnt_20.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_20_set.insert("1");
        CmplxEvnt_20.add_attribute("PxBndryPrcsn", "20124330.710000"); // 3
        CmplxEvnt_20_set.insert("20124330.710000");
        CmplxEvnt_20.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_20_set.insert("3");
        CmplxEvnt_20.add_attribute("Cond", "2"); // 3
        CmplxEvnt_20_set.insert("2");
        all_values.push_back(CmplxEvnt_20_set);
        all_compo_names.insert("CmplxEvnt_20_set");

        {
          xml_element EvntDts_20{"EvntDts"};
          multiset<string> EvntDts_20_set;
          EvntDts_20.add_attribute("StartDt", "ComplexEventStartDate_t_1024521266"); // 4
          EvntDts_20_set.insert("ComplexEventStartDate_t_1024521266");
          EvntDts_20.add_attribute("EndDt", "ComplexEventEndDate_t_1843706993"); // 4
          EvntDts_20_set.insert("ComplexEventEndDate_t_1843706993");
          all_values.push_back(EvntDts_20_set);
          all_compo_names.insert("EvntDts_20_set");

          {
            xml_element EvntTms_20{"EvntTms"};
            multiset<string> EvntTms_20_set;
            EvntTms_20.add_attribute("StartTm", "2028970674"); // 5
            EvntTms_20_set.insert("2028970674");
            EvntTms_20.add_attribute("EndTm", "859616777"); // 5
            EvntTms_20_set.insert("859616777");
            all_values.push_back(EvntTms_20_set);
            all_compo_names.insert("EvntTms_20_set");

            EvntDts_20.add_element(EvntTms_20);
          }
          CmplxEvnt_20.add_element(EvntDts_20);
        }
        Instrmt_20.add_element(CmplxEvnt_20);
      }
      Inst_1.add_element(Instrmt_20);
    }
    elt.add_element(Inst_1);
  } // end Inst
  { // Inst
    xml_element Inst_2{"Inst"};
    {
      xml_element Instrmt_21{"Instrmt"};
      multiset<string> Instrmt_21_set;
      Instrmt_21.add_attribute("Sym", "Symbol_t_2035686442"); // 2
      Instrmt_21_set.insert("Symbol_t_2035686442");
      Instrmt_21.add_attribute("Sfx", "CD"); // 2
      Instrmt_21_set.insert("CD");
      Instrmt_21.add_attribute("ID", "SecurityID_t_1110074717"); // 2
      Instrmt_21_set.insert("SecurityID_t_1110074717");
      Instrmt_21.add_attribute("Src", "5"); // 2
      Instrmt_21_set.insert("5");
      Instrmt_21.add_attribute("Prod", "3"); // 2
      Instrmt_21_set.insert("3");
      Instrmt_21.add_attribute("ProdCmplx", "ProductComplex_t_410087955"); // 2
      Instrmt_21_set.insert("ProductComplex_t_410087955");
      Instrmt_21.add_attribute("SecGrp", "SecurityGroup_t_1987199304"); // 2
      Instrmt_21_set.insert("SecurityGroup_t_1987199304");
      Instrmt_21.add_attribute("CFI", "CFICode_t_211771284"); // 2
      Instrmt_21_set.insert("CFICode_t_211771284");
      Instrmt_21.add_attribute("SecTyp", "PZFJ"); // 2
      Instrmt_21_set.insert("PZFJ");
      Instrmt_21.add_attribute("SubTyp", "SecuritySubType_t_516810322"); // 2
      Instrmt_21_set.insert("SecuritySubType_t_516810322");
      Instrmt_21.add_attribute("MMY", "1538779620"); // 2
      Instrmt_21_set.insert("1538779620");
      Instrmt_21.add_attribute("MatDt", "MaturityDate_t_1629363330"); // 2
      Instrmt_21_set.insert("MaturityDate_t_1629363330");
      Instrmt_21.add_attribute("MatTm", "1804752965"); // 2
      Instrmt_21_set.insert("1804752965");
      Instrmt_21.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_383592476"); // 2
      Instrmt_21_set.insert("SettleOnOpenFlag_t_383592476");
      Instrmt_21.add_attribute("AsgnMeth", "1745355888"); // 2
      Instrmt_21_set.insert("1745355888");
      Instrmt_21.add_attribute("Status", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("CpnPmt", "CouponPaymentDate_t_1331138279"); // 2
      Instrmt_21_set.insert("CouponPaymentDate_t_1331138279");
      Instrmt_21.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_21_set.insert("FR");
      Instrmt_21.add_attribute("Snrty", "SR"); // 2
      Instrmt_21_set.insert("SR");
      Instrmt_21.add_attribute("NotlPctOut", "18127228.190000"); // 2
      Instrmt_21_set.insert("18127228.190000");
      Instrmt_21.add_attribute("OrigNotlPctOut", "7259308.230000"); // 2
      Instrmt_21_set.insert("7259308.230000");
      Instrmt_21.add_attribute("AttchPnt", "7690556.600000"); // 2
      Instrmt_21_set.insert("7690556.600000");
      Instrmt_21.add_attribute("DetchPnt", "21406995.880000"); // 2
      Instrmt_21_set.insert("21406995.880000");
      Instrmt_21.add_attribute("Issued", "IssueDate_t_133508135"); // 2
      Instrmt_21_set.insert("IssueDate_t_133508135");
      Instrmt_21.add_attribute("RepoCollSecTyp", "634005083"); // 2
      Instrmt_21_set.insert("634005083");
      Instrmt_21.add_attribute("RepoTrm", "1210293376"); // 2
      Instrmt_21_set.insert("1210293376");
      Instrmt_21.add_attribute("RepoRt", "3565279.480000"); // 2
      Instrmt_21_set.insert("3565279.480000");
      Instrmt_21.add_attribute("Fctr", "16585263.500000"); // 2
      Instrmt_21_set.insert("16585263.500000");
      Instrmt_21.add_attribute("CrdRtg", "CreditRating_t_906516721"); // 2
      Instrmt_21_set.insert("CreditRating_t_906516721");
      Instrmt_21.add_attribute("Rgstry", "InstrRegistry_t_238014974"); // 2
      Instrmt_21_set.insert("InstrRegistry_t_238014974");
      Instrmt_21.add_attribute("IssuCtry", "370659479"); // 2
      Instrmt_21_set.insert("370659479");
      Instrmt_21.add_attribute("StPrv", "StateOrProvinceOfIssue_t_794719515"); // 2
      Instrmt_21_set.insert("StateOrProvinceOfIssue_t_794719515");
      Instrmt_21.add_attribute("Lcl", "LocaleOfIssue_t_759418480"); // 2
      Instrmt_21_set.insert("LocaleOfIssue_t_759418480");
      Instrmt_21.add_attribute("Redeem", "RedemptionDate_t_1480734197"); // 2
      Instrmt_21_set.insert("RedemptionDate_t_1480734197");
      Instrmt_21.add_attribute("StrkPx", "13566858.030000"); // 2
      Instrmt_21_set.insert("13566858.030000");
      Instrmt_21.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_21_set.insert("GBP");
      Instrmt_21.add_attribute("StrkMult", "11964014.600000"); // 2
      Instrmt_21_set.insert("11964014.600000");
      Instrmt_21.add_attribute("StrkValu", "20904620.540000"); // 2
      Instrmt_21_set.insert("20904620.540000");
      Instrmt_21.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_21_set.insert("3");
      Instrmt_21.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_21_set.insert("3");
      Instrmt_21.add_attribute("StrkPxBndryPrcsn", "14817580.260000"); // 2
      Instrmt_21_set.insert("14817580.260000");
      Instrmt_21.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("OptAt", "1370481099"); // 2
      Instrmt_21_set.insert("1370481099");
      Instrmt_21.add_attribute("Mult", "18653505.020000"); // 2
      Instrmt_21_set.insert("18653505.020000");
      Instrmt_21.add_attribute("MultTyp", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_21_set.insert("3");
      Instrmt_21.add_attribute("MinPxIncr", "10490051.340000"); // 2
      Instrmt_21_set.insert("10490051.340000");
      Instrmt_21.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_169414973"); // 2
      Instrmt_21_set.insert("MinPriceIncrementAmount_t_169414973");
      Instrmt_21.add_attribute("UOM", "MMBtu"); // 2
      Instrmt_21_set.insert("MMBtu");
      Instrmt_21.add_attribute("UOMQty", "7142443.050000"); // 2
      Instrmt_21_set.insert("7142443.050000");
      Instrmt_21.add_attribute("PxUOM", "lbs"); // 2
      Instrmt_21_set.insert("lbs");
      Instrmt_21.add_attribute("PxUOMQty", "16870486.720000"); // 2
      Instrmt_21_set.insert("16870486.720000");
      Instrmt_21.add_attribute("SettlMeth", "P"); // 2
      Instrmt_21_set.insert("P");
      Instrmt_21.add_attribute("ExerStyle", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("OptPayAmt", "OptPayoutAmount_t_1917753621"); // 2
      Instrmt_21_set.insert("OptPayoutAmount_t_1917753621");
      Instrmt_21.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_21_set.insert("PCTPAR");
      Instrmt_21.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_21_set.insert("FUTDA");
      Instrmt_21.add_attribute("ListMeth", "0"); // 2
      Instrmt_21_set.insert("0");
      Instrmt_21.add_attribute("CapPx", "16233968.530000"); // 2
      Instrmt_21_set.insert("16233968.530000");
      Instrmt_21.add_attribute("FlrPx", "552722.890000"); // 2
      Instrmt_21_set.insert("552722.890000");
      Instrmt_21.add_attribute("PutCall", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("FlexInd", "false"); // 2
      Instrmt_21_set.insert("false");
      Instrmt_21.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_21_set.insert("true");
      Instrmt_21.add_attribute("TmUnit", "Min"); // 2
      Instrmt_21_set.insert("Min");
      Instrmt_21.add_attribute("CpnRt", "21140224.550000"); // 2
      Instrmt_21_set.insert("21140224.550000");
      Instrmt_21.add_attribute("Exch", "SecurityExchange_t_1279344990"); // 2
      Instrmt_21_set.insert("SecurityExchange_t_1279344990");
      Instrmt_21.add_attribute("PosLmt", "1877109825"); // 2
      Instrmt_21_set.insert("1877109825");
      Instrmt_21.add_attribute("NTPosLmt", "2057000861"); // 2
      Instrmt_21_set.insert("2057000861");
      Instrmt_21.add_attribute("Issr", "Issuer_t_1237024532"); // 2
      Instrmt_21_set.insert("Issuer_t_1237024532");
      Instrmt_21.add_attribute("EncIssrLen", "1442837959"); // 2
      Instrmt_21_set.insert("1442837959");
      Instrmt_21.add_attribute("EncIssr", "EncodedIssuer_t_1391275239"); // 2
      Instrmt_21_set.insert("EncodedIssuer_t_1391275239");
      Instrmt_21.add_attribute("Desc", "SecurityDesc_t_676583757"); // 2
      Instrmt_21_set.insert("SecurityDesc_t_676583757");
      Instrmt_21.add_attribute("EncSecDescLen", "665835410"); // 2
      Instrmt_21_set.insert("665835410");
      Instrmt_21.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1109142093"); // 2
      Instrmt_21_set.insert("EncodedSecurityDesc_t_1109142093");
      Instrmt_21.add_attribute("Pool", "Pool_t_1861498870"); // 2
      Instrmt_21_set.insert("Pool_t_1861498870");
      Instrmt_21.add_attribute("CSetMo", "993307058"); // 2
      Instrmt_21_set.insert("993307058");
      Instrmt_21.add_attribute("CPPgm", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("CPRegT", "CPRegType_t_2030913843"); // 2
      Instrmt_21_set.insert("CPRegType_t_2030913843");
      Instrmt_21.add_attribute("Dated", "DatedDate_t_1911300070"); // 2
      Instrmt_21_set.insert("DatedDate_t_1911300070");
      Instrmt_21.add_attribute("IntAcrl", "InterestAccrualDate_t_724907884"); // 2
      Instrmt_21_set.insert("InterestAccrualDate_t_724907884");
      all_values.push_back(Instrmt_21_set);
      all_compo_names.insert("Instrmt_21_set");

      {
        xml_element AID_24{"AID"};
        multiset<string> AID_24_set;
        AID_24.add_attribute("AltID", "SecurityAltID_t_778775991"); // 3
        AID_24_set.insert("SecurityAltID_t_778775991");
        AID_24.add_attribute("AltIDSrc", "9"); // 3
        AID_24_set.insert("9");
        all_values.push_back(AID_24_set);
        all_compo_names.insert("AID_24_set");

        Instrmt_21.add_element(AID_24);
      }
      {
        xml_element SecXML_24{"SecXML"};
        multiset<string> SecXML_24_set;
        SecXML_24.add_attribute("Schema", "SecurityXMLSchema_t_1432368129"); // 3
        SecXML_24_set.insert("SecurityXMLSchema_t_1432368129");
        all_values.push_back(SecXML_24_set);
        all_compo_names.insert("SecXML_24_set");

        Instrmt_21.add_element(SecXML_24);
      }
      {
        xml_element Evnt_24{"Evnt"};
        multiset<string> Evnt_24_set;
        Evnt_24.add_attribute("EventTyp", "3"); // 3
        Evnt_24_set.insert("3");
        Evnt_24.add_attribute("Dt", "EventDate_t_1624435202"); // 3
        Evnt_24_set.insert("EventDate_t_1624435202");
        Evnt_24.add_attribute("Tm", "EventTime_t_1202638102"); // 3
        Evnt_24_set.insert("EventTime_t_1202638102");
        Evnt_24.add_attribute("Px", "10455281.530000"); // 3
        Evnt_24_set.insert("10455281.530000");
        Evnt_24.add_attribute("Txt", "EventText_t_1309048011"); // 3
        Evnt_24_set.insert("EventText_t_1309048011");
        all_values.push_back(Evnt_24_set);
        all_compo_names.insert("Evnt_24_set");

        Instrmt_21.add_element(Evnt_24);
      }
      {
        xml_element Pty_133{"Pty"};
        multiset<string> Pty_133_set;
        Pty_133.add_attribute("ID", "InstrumentPartyID_t_1879424796"); // 3
        Pty_133_set.insert("InstrumentPartyID_t_1879424796");
        Pty_133.add_attribute("Src", "7"); // 3
        Pty_133_set.insert("7");
        Pty_133.add_attribute("R", "36"); // 3
        Pty_133_set.insert("36");
        all_values.push_back(Pty_133_set);
        all_compo_names.insert("Pty_133_set");

        {
          xml_element Sub_133{"Sub"};
          multiset<string> Sub_133_set;
          Sub_133.add_attribute("ID", "InstrumentPartySubID_t_1203447358"); // 4
          Sub_133_set.insert("InstrumentPartySubID_t_1203447358");
          Sub_133.add_attribute("Typ", "23"); // 4
          Sub_133_set.insert("23");
          all_values.push_back(Sub_133_set);
          all_compo_names.insert("Sub_133_set");

          Pty_133.add_element(Sub_133);
        }
        Instrmt_21.add_element(Pty_133);
      }
      {
        xml_element CmplxEvnt_21{"CmplxEvnt"};
        multiset<string> CmplxEvnt_21_set;
        CmplxEvnt_21.add_attribute("Typ", "6"); // 3
        CmplxEvnt_21_set.insert("6");
        CmplxEvnt_21.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1884155723"); // 3
        CmplxEvnt_21_set.insert("ComplexOptPayoutAmount_t_1884155723");
        CmplxEvnt_21.add_attribute("Px", "7233118.500000"); // 3
        CmplxEvnt_21_set.insert("7233118.500000");
        CmplxEvnt_21.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_21_set.insert("5");
        CmplxEvnt_21.add_attribute("PxBndryPrcsn", "16137819.000000"); // 3
        CmplxEvnt_21_set.insert("16137819.000000");
        CmplxEvnt_21.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_21_set.insert("1");
        CmplxEvnt_21.add_attribute("Cond", "2"); // 3
        CmplxEvnt_21_set.insert("2");
        all_values.push_back(CmplxEvnt_21_set);
        all_compo_names.insert("CmplxEvnt_21_set");

        {
          xml_element EvntDts_21{"EvntDts"};
          multiset<string> EvntDts_21_set;
          EvntDts_21.add_attribute("StartDt", "ComplexEventStartDate_t_909136211"); // 4
          EvntDts_21_set.insert("ComplexEventStartDate_t_909136211");
          EvntDts_21.add_attribute("EndDt", "ComplexEventEndDate_t_2024104302"); // 4
          EvntDts_21_set.insert("ComplexEventEndDate_t_2024104302");
          all_values.push_back(EvntDts_21_set);
          all_compo_names.insert("EvntDts_21_set");

          {
            xml_element EvntTms_21{"EvntTms"};
            multiset<string> EvntTms_21_set;
            EvntTms_21.add_attribute("StartTm", "1798312770"); // 5
            EvntTms_21_set.insert("1798312770");
            EvntTms_21.add_attribute("EndTm", "1574971621"); // 5
            EvntTms_21_set.insert("1574971621");
            all_values.push_back(EvntTms_21_set);
            all_compo_names.insert("EvntTms_21_set");

            EvntDts_21.add_element(EvntTms_21);
          }
          CmplxEvnt_21.add_element(EvntDts_21);
        }
        Instrmt_21.add_element(CmplxEvnt_21);
      }
      Inst_2.add_element(Instrmt_21);
    }
    elt.add_element(Inst_2);
  } // end Inst
  { // Inst
    xml_element Inst_3{"Inst"};
    {
      xml_element Instrmt_22{"Instrmt"};
      multiset<string> Instrmt_22_set;
      Instrmt_22.add_attribute("Sym", "Symbol_t_985762747"); // 2
      Instrmt_22_set.insert("Symbol_t_985762747");
      Instrmt_22.add_attribute("Sfx", "CD"); // 2
      Instrmt_22_set.insert("CD");
      Instrmt_22.add_attribute("ID", "SecurityID_t_420795031"); // 2
      Instrmt_22_set.insert("SecurityID_t_420795031");
      Instrmt_22.add_attribute("Src", "I"); // 2
      Instrmt_22_set.insert("I");
      Instrmt_22.add_attribute("Prod", "2"); // 2
      Instrmt_22_set.insert("2");
      Instrmt_22.add_attribute("ProdCmplx", "ProductComplex_t_184611454"); // 2
      Instrmt_22_set.insert("ProductComplex_t_184611454");
      Instrmt_22.add_attribute("SecGrp", "SecurityGroup_t_1721334211"); // 2
      Instrmt_22_set.insert("SecurityGroup_t_1721334211");
      Instrmt_22.add_attribute("CFI", "CFICode_t_27050530"); // 2
      Instrmt_22_set.insert("CFICode_t_27050530");
      Instrmt_22.add_attribute("SecTyp", "VRDN"); // 2
      Instrmt_22_set.insert("VRDN");
      Instrmt_22.add_attribute("SubTyp", "SecuritySubType_t_1006218693"); // 2
      Instrmt_22_set.insert("SecuritySubType_t_1006218693");
      Instrmt_22.add_attribute("MMY", "1834680452"); // 2
      Instrmt_22_set.insert("1834680452");
      Instrmt_22.add_attribute("MatDt", "MaturityDate_t_1112428102"); // 2
      Instrmt_22_set.insert("MaturityDate_t_1112428102");
      Instrmt_22.add_attribute("MatTm", "61373147"); // 2
      Instrmt_22_set.insert("61373147");
      Instrmt_22.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_732724957"); // 2
      Instrmt_22_set.insert("SettleOnOpenFlag_t_732724957");
      Instrmt_22.add_attribute("AsgnMeth", "273992466"); // 2
      Instrmt_22_set.insert("273992466");
      Instrmt_22.add_attribute("Status", "1"); // 2
      Instrmt_22_set.insert("1");
      Instrmt_22.add_attribute("CpnPmt", "CouponPaymentDate_t_1254166315"); // 2
      Instrmt_22_set.insert("CouponPaymentDate_t_1254166315");
      Instrmt_22.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_22_set.insert("MM");
      Instrmt_22.add_attribute("Snrty", "SB"); // 2
      Instrmt_22_set.insert("SB");
      Instrmt_22.add_attribute("NotlPctOut", "20109393.580000"); // 2
      Instrmt_22_set.insert("20109393.580000");
      Instrmt_22.add_attribute("OrigNotlPctOut", "2436722.570000"); // 2
      Instrmt_22_set.insert("2436722.570000");
      Instrmt_22.add_attribute("AttchPnt", "7334337.290000"); // 2
      Instrmt_22_set.insert("7334337.290000");
      Instrmt_22.add_attribute("DetchPnt", "5867675.600000"); // 2
      Instrmt_22_set.insert("5867675.600000");
      Instrmt_22.add_attribute("Issued", "IssueDate_t_128376738"); // 2
      Instrmt_22_set.insert("IssueDate_t_128376738");
      Instrmt_22.add_attribute("RepoCollSecTyp", "199731981"); // 2
      Instrmt_22_set.insert("199731981");
      Instrmt_22.add_attribute("RepoTrm", "1219596623"); // 2
      Instrmt_22_set.insert("1219596623");
      Instrmt_22.add_attribute("RepoRt", "12501057.510000"); // 2
      Instrmt_22_set.insert("12501057.510000");
      Instrmt_22.add_attribute("Fctr", "11088681.920000"); // 2
      Instrmt_22_set.insert("11088681.920000");
      Instrmt_22.add_attribute("CrdRtg", "CreditRating_t_1096217277"); // 2
      Instrmt_22_set.insert("CreditRating_t_1096217277");
      Instrmt_22.add_attribute("Rgstry", "InstrRegistry_t_900934874"); // 2
      Instrmt_22_set.insert("InstrRegistry_t_900934874");
      Instrmt_22.add_attribute("IssuCtry", "536356165"); // 2
      Instrmt_22_set.insert("536356165");
      Instrmt_22.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2081980025"); // 2
      Instrmt_22_set.insert("StateOrProvinceOfIssue_t_2081980025");
      Instrmt_22.add_attribute("Lcl", "LocaleOfIssue_t_265779218"); // 2
      Instrmt_22_set.insert("LocaleOfIssue_t_265779218");
      Instrmt_22.add_attribute("Redeem", "RedemptionDate_t_957151196"); // 2
      Instrmt_22_set.insert("RedemptionDate_t_957151196");
      Instrmt_22.add_attribute("StrkPx", "9309227.040000"); // 2
      Instrmt_22_set.insert("9309227.040000");
      Instrmt_22.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_22_set.insert("USD");
      Instrmt_22.add_attribute("StrkMult", "5047732.670000"); // 2
      Instrmt_22_set.insert("5047732.670000");
      Instrmt_22.add_attribute("StrkValu", "16885879.360000"); // 2
      Instrmt_22_set.insert("16885879.360000");
      Instrmt_22.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_22_set.insert("4");
      Instrmt_22.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_22_set.insert("1");
      Instrmt_22.add_attribute("StrkPxBndryPrcsn", "13757847.410000"); // 2
      Instrmt_22_set.insert("13757847.410000");
      Instrmt_22.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_22_set.insert("2");
      Instrmt_22.add_attribute("OptAt", "1572365108"); // 2
      Instrmt_22_set.insert("1572365108");
      Instrmt_22.add_attribute("Mult", "21085096.980000"); // 2
      Instrmt_22_set.insert("21085096.980000");
      Instrmt_22.add_attribute("MultTyp", "1"); // 2
      Instrmt_22_set.insert("1");
      Instrmt_22.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_22_set.insert("4");
      Instrmt_22.add_attribute("MinPxIncr", "12151923.660000"); // 2
      Instrmt_22_set.insert("12151923.660000");
      Instrmt_22.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1507005238"); // 2
      Instrmt_22_set.insert("MinPriceIncrementAmount_t_1507005238");
      Instrmt_22.add_attribute("UOM", "tn"); // 2
      Instrmt_22_set.insert("tn");
      Instrmt_22.add_attribute("UOMQty", "10786480.760000"); // 2
      Instrmt_22_set.insert("10786480.760000");
      Instrmt_22.add_attribute("PxUOM", "oz_tr"); // 2
      Instrmt_22_set.insert("oz_tr");
      Instrmt_22.add_attribute("PxUOMQty", "9483911.390000"); // 2
      Instrmt_22_set.insert("9483911.390000");
      Instrmt_22.add_attribute("SettlMeth", "P"); // 2
      Instrmt_22_set.insert("P");
      Instrmt_22.add_attribute("ExerStyle", "0"); // 2
      Instrmt_22_set.insert("0");
      Instrmt_22.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_22_set.insert("3");
      Instrmt_22.add_attribute("OptPayAmt", "OptPayoutAmount_t_737528612"); // 2
      Instrmt_22_set.insert("OptPayoutAmount_t_737528612");
      Instrmt_22.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_22_set.insert("STD");
      Instrmt_22.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_22_set.insert("CDSD");
      Instrmt_22.add_attribute("ListMeth", "0"); // 2
      Instrmt_22_set.insert("0");
      Instrmt_22.add_attribute("CapPx", "18826112.100000"); // 2
      Instrmt_22_set.insert("18826112.100000");
      Instrmt_22.add_attribute("FlrPx", "6458638.290000"); // 2
      Instrmt_22_set.insert("6458638.290000");
      Instrmt_22.add_attribute("PutCall", "1"); // 2
      Instrmt_22_set.insert("1");
      Instrmt_22.add_attribute("FlexInd", "false"); // 2
      Instrmt_22_set.insert("false");
      Instrmt_22.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_22_set.insert("false");
      Instrmt_22.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_22_set.insert("Wk");
      Instrmt_22.add_attribute("CpnRt", "16624441.870000"); // 2
      Instrmt_22_set.insert("16624441.870000");
      Instrmt_22.add_attribute("Exch", "SecurityExchange_t_597294028"); // 2
      Instrmt_22_set.insert("SecurityExchange_t_597294028");
      Instrmt_22.add_attribute("PosLmt", "1056454590"); // 2
      Instrmt_22_set.insert("1056454590");
      Instrmt_22.add_attribute("NTPosLmt", "1203548475"); // 2
      Instrmt_22_set.insert("1203548475");
      Instrmt_22.add_attribute("Issr", "Issuer_t_1227049579"); // 2
      Instrmt_22_set.insert("Issuer_t_1227049579");
      Instrmt_22.add_attribute("EncIssrLen", "419962903"); // 2
      Instrmt_22_set.insert("419962903");
      Instrmt_22.add_attribute("EncIssr", "EncodedIssuer_t_431849568"); // 2
      Instrmt_22_set.insert("EncodedIssuer_t_431849568");
      Instrmt_22.add_attribute("Desc", "SecurityDesc_t_821749584"); // 2
      Instrmt_22_set.insert("SecurityDesc_t_821749584");
      Instrmt_22.add_attribute("EncSecDescLen", "1992328011"); // 2
      Instrmt_22_set.insert("1992328011");
      Instrmt_22.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_392875619"); // 2
      Instrmt_22_set.insert("EncodedSecurityDesc_t_392875619");
      Instrmt_22.add_attribute("Pool", "Pool_t_690442056"); // 2
      Instrmt_22_set.insert("Pool_t_690442056");
      Instrmt_22.add_attribute("CSetMo", "1210523767"); // 2
      Instrmt_22_set.insert("1210523767");
      Instrmt_22.add_attribute("CPPgm", "99"); // 2
      Instrmt_22_set.insert("99");
      Instrmt_22.add_attribute("CPRegT", "CPRegType_t_49963646"); // 2
      Instrmt_22_set.insert("CPRegType_t_49963646");
      Instrmt_22.add_attribute("Dated", "DatedDate_t_1425481177"); // 2
      Instrmt_22_set.insert("DatedDate_t_1425481177");
      Instrmt_22.add_attribute("IntAcrl", "InterestAccrualDate_t_539232413"); // 2
      Instrmt_22_set.insert("InterestAccrualDate_t_539232413");
      all_values.push_back(Instrmt_22_set);
      all_compo_names.insert("Instrmt_22_set");

      {
        xml_element AID_25{"AID"};
        multiset<string> AID_25_set;
        AID_25.add_attribute("AltID", "SecurityAltID_t_1800641141"); // 3
        AID_25_set.insert("SecurityAltID_t_1800641141");
        AID_25.add_attribute("AltIDSrc", "1"); // 3
        AID_25_set.insert("1");
        all_values.push_back(AID_25_set);
        all_compo_names.insert("AID_25_set");

        Instrmt_22.add_element(AID_25);
      }
      {
        xml_element SecXML_25{"SecXML"};
        multiset<string> SecXML_25_set;
        SecXML_25.add_attribute("Schema", "SecurityXMLSchema_t_57164402"); // 3
        SecXML_25_set.insert("SecurityXMLSchema_t_57164402");
        all_values.push_back(SecXML_25_set);
        all_compo_names.insert("SecXML_25_set");

        Instrmt_22.add_element(SecXML_25);
      }
      {
        xml_element Evnt_25{"Evnt"};
        multiset<string> Evnt_25_set;
        Evnt_25.add_attribute("EventTyp", "6"); // 3
        Evnt_25_set.insert("6");
        Evnt_25.add_attribute("Dt", "EventDate_t_1374511788"); // 3
        Evnt_25_set.insert("EventDate_t_1374511788");
        Evnt_25.add_attribute("Tm", "EventTime_t_794693015"); // 3
        Evnt_25_set.insert("EventTime_t_794693015");
        Evnt_25.add_attribute("Px", "3664044.140000"); // 3
        Evnt_25_set.insert("3664044.140000");
        Evnt_25.add_attribute("Txt", "EventText_t_1484019452"); // 3
        Evnt_25_set.insert("EventText_t_1484019452");
        all_values.push_back(Evnt_25_set);
        all_compo_names.insert("Evnt_25_set");

        Instrmt_22.add_element(Evnt_25);
      }
      {
        xml_element Pty_134{"Pty"};
        multiset<string> Pty_134_set;
        Pty_134.add_attribute("ID", "InstrumentPartyID_t_480955257"); // 3
        Pty_134_set.insert("InstrumentPartyID_t_480955257");
        Pty_134.add_attribute("Src", "8"); // 3
        Pty_134_set.insert("8");
        Pty_134.add_attribute("R", "37"); // 3
        Pty_134_set.insert("37");
        all_values.push_back(Pty_134_set);
        all_compo_names.insert("Pty_134_set");

        {
          xml_element Sub_134{"Sub"};
          multiset<string> Sub_134_set;
          Sub_134.add_attribute("ID", "InstrumentPartySubID_t_101713876"); // 4
          Sub_134_set.insert("InstrumentPartySubID_t_101713876");
          Sub_134.add_attribute("Typ", "27"); // 4
          Sub_134_set.insert("27");
          all_values.push_back(Sub_134_set);
          all_compo_names.insert("Sub_134_set");

          Pty_134.add_element(Sub_134);
        }
        Instrmt_22.add_element(Pty_134);
      }
      {
        xml_element CmplxEvnt_22{"CmplxEvnt"};
        multiset<string> CmplxEvnt_22_set;
        CmplxEvnt_22.add_attribute("Typ", "3"); // 3
        CmplxEvnt_22_set.insert("3");
        CmplxEvnt_22.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_653395199"); // 3
        CmplxEvnt_22_set.insert("ComplexOptPayoutAmount_t_653395199");
        CmplxEvnt_22.add_attribute("Px", "17648829.450000"); // 3
        CmplxEvnt_22_set.insert("17648829.450000");
        CmplxEvnt_22.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_22_set.insert("4");
        CmplxEvnt_22.add_attribute("PxBndryPrcsn", "17098497.890000"); // 3
        CmplxEvnt_22_set.insert("17098497.890000");
        CmplxEvnt_22.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_22_set.insert("2");
        CmplxEvnt_22.add_attribute("Cond", "2"); // 3
        CmplxEvnt_22_set.insert("2");
        all_values.push_back(CmplxEvnt_22_set);
        all_compo_names.insert("CmplxEvnt_22_set");

        {
          xml_element EvntDts_22{"EvntDts"};
          multiset<string> EvntDts_22_set;
          EvntDts_22.add_attribute("StartDt", "ComplexEventStartDate_t_2129812692"); // 4
          EvntDts_22_set.insert("ComplexEventStartDate_t_2129812692");
          EvntDts_22.add_attribute("EndDt", "ComplexEventEndDate_t_1252797341"); // 4
          EvntDts_22_set.insert("ComplexEventEndDate_t_1252797341");
          all_values.push_back(EvntDts_22_set);
          all_compo_names.insert("EvntDts_22_set");

          {
            xml_element EvntTms_22{"EvntTms"};
            multiset<string> EvntTms_22_set;
            EvntTms_22.add_attribute("StartTm", "2084024202"); // 5
            EvntTms_22_set.insert("2084024202");
            EvntTms_22.add_attribute("EndTm", "1974657055"); // 5
            EvntTms_22_set.insert("1974657055");
            all_values.push_back(EvntTms_22_set);
            all_compo_names.insert("EvntTms_22_set");

            EvntDts_22.add_element(EvntTms_22);
          }
          CmplxEvnt_22.add_element(EvntDts_22);
        }
        Instrmt_22.add_element(CmplxEvnt_22);
      }
      Inst_3.add_element(Instrmt_22);
    }
    elt.add_element(Inst_3);
  } // end Inst
  { // Undly
    xml_element Undly_28{"Undly"};
    multiset<string> Undly_28_set;
    Undly_28.add_attribute("Sym", "UnderlyingSymbol_t_626982610"); // 1
    Undly_28_set.insert("UnderlyingSymbol_t_626982610");
    Undly_28.add_attribute("Sfx", "CD"); // 1
    Undly_28_set.insert("CD");
    Undly_28.add_attribute("ID", "UnderlyingSecurityID_t_1106257297"); // 1
    Undly_28_set.insert("UnderlyingSecurityID_t_1106257297");
    Undly_28.add_attribute("Src", "9"); // 1
    Undly_28_set.insert("9");
    Undly_28.add_attribute("Prod", "9"); // 1
    Undly_28_set.insert("9");
    Undly_28.add_attribute("CFI", "UnderlyingCFICode_t_1645489710"); // 1
    Undly_28_set.insert("UnderlyingCFICode_t_1645489710");
    Undly_28.add_attribute("SecTyp", "MTN"); // 1
    Undly_28_set.insert("MTN");
    Undly_28.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_542083371"); // 1
    Undly_28_set.insert("UnderlyingSecuritySubType_t_542083371");
    Undly_28.add_attribute("MMY", "1702654113"); // 1
    Undly_28_set.insert("1702654113");
    Undly_28.add_attribute("Mat", "UnderlyingMaturityDate_t_1862315475"); // 1
    Undly_28_set.insert("UnderlyingMaturityDate_t_1862315475");
    Undly_28.add_attribute("MatTm", "1916595159"); // 1
    Undly_28_set.insert("1916595159");
    Undly_28.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_349863480"); // 1
    Undly_28_set.insert("UnderlyingCouponPaymentDate_t_349863480");
    Undly_28.add_attribute("RestrctTyp", "MR"); // 1
    Undly_28_set.insert("MR");
    Undly_28.add_attribute("Snrty", "SD"); // 1
    Undly_28_set.insert("SD");
    Undly_28.add_attribute("NotlPctOut", "8308187.370000"); // 1
    Undly_28_set.insert("8308187.370000");
    Undly_28.add_attribute("OrigNotlPctOut", "1827682.180000"); // 1
    Undly_28_set.insert("1827682.180000");
    Undly_28.add_attribute("AttchPnt", "12355305.960000"); // 1
    Undly_28_set.insert("12355305.960000");
    Undly_28.add_attribute("DetchPnt", "9325326.130000"); // 1
    Undly_28_set.insert("9325326.130000");
    Undly_28.add_attribute("Issued", "UnderlyingIssueDate_t_285206976"); // 1
    Undly_28_set.insert("UnderlyingIssueDate_t_285206976");
    Undly_28.add_attribute("RepoCollSecTyp", "673461607"); // 1
    Undly_28_set.insert("673461607");
    Undly_28.add_attribute("RepoTrm", "1585927812"); // 1
    Undly_28_set.insert("1585927812");
    Undly_28.add_attribute("RepoRt", "20500899.210000"); // 1
    Undly_28_set.insert("20500899.210000");
    Undly_28.add_attribute("Fctr", "7086866.450000"); // 1
    Undly_28_set.insert("7086866.450000");
    Undly_28.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1148293953"); // 1
    Undly_28_set.insert("UnderlyingCreditRating_t_1148293953");
    Undly_28.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_723554046"); // 1
    Undly_28_set.insert("UnderlyingInstrRegistry_t_723554046");
    Undly_28.add_attribute("Ctry", "1970961263"); // 1
    Undly_28_set.insert("1970961263");
    Undly_28.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1130622998"); // 1
    Undly_28_set.insert("UnderlyingStateOrProvinceOfIssue_t_1130622998");
    Undly_28.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1976351387"); // 1
    Undly_28_set.insert("UnderlyingLocaleOfIssue_t_1976351387");
    Undly_28.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1907501817"); // 1
    Undly_28_set.insert("UnderlyingRedemptionDate_t_1907501817");
    Undly_28.add_attribute("StrkPx", "9577964.050000"); // 1
    Undly_28_set.insert("9577964.050000");
    Undly_28.add_attribute("StrkCcy", "CAN"); // 1
    Undly_28_set.insert("CAN");
    Undly_28.add_attribute("OptA", "1995493580"); // 1
    Undly_28_set.insert("1995493580");
    Undly_28.add_attribute("Mult", "4333143.480000"); // 1
    Undly_28_set.insert("4333143.480000");
    Undly_28.add_attribute("MultTyp", "2"); // 1
    Undly_28_set.insert("2");
    Undly_28.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_28_set.insert("0");
    Undly_28.add_attribute("UOM", "MMbbl"); // 1
    Undly_28_set.insert("MMbbl");
    Undly_28.add_attribute("UOMQty", "13940507.840000"); // 1
    Undly_28_set.insert("13940507.840000");
    Undly_28.add_attribute("PxUOM", "Bbl"); // 1
    Undly_28_set.insert("Bbl");
    Undly_28.add_attribute("PxUOMQty", "16339745.230000"); // 1
    Undly_28_set.insert("16339745.230000");
    Undly_28.add_attribute("TmUnit", "Wk"); // 1
    Undly_28_set.insert("Wk");
    Undly_28.add_attribute("ExerStyle", "1"); // 1
    Undly_28_set.insert("1");
    Undly_28.add_attribute("CpnRt", "19838380.030000"); // 1
    Undly_28_set.insert("19838380.030000");
    Undly_28.add_attribute("Exch", "UnderlyingSecurityExchange_t_1190118852"); // 1
    Undly_28_set.insert("UnderlyingSecurityExchange_t_1190118852");
    Undly_28.add_attribute("Issr", "UnderlyingIssuer_t_1728030482"); // 1
    Undly_28_set.insert("UnderlyingIssuer_t_1728030482");
    Undly_28.add_attribute("EncUndIssrLen", "667173092"); // 1
    Undly_28_set.insert("667173092");
    Undly_28.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1372887071"); // 1
    Undly_28_set.insert("EncodedUnderlyingIssuer_t_1372887071");
    Undly_28.add_attribute("Desc", "UnderlyingSecurityDesc_t_816077430"); // 1
    Undly_28_set.insert("UnderlyingSecurityDesc_t_816077430");
    Undly_28.add_attribute("EncUndSecDescLen", "1599705705"); // 1
    Undly_28_set.insert("1599705705");
    Undly_28.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1658094047"); // 1
    Undly_28_set.insert("EncodedUnderlyingSecurityDesc_t_1658094047");
    Undly_28.add_attribute("CPPgm", "UnderlyingCPProgram_t_1489539037"); // 1
    Undly_28_set.insert("UnderlyingCPProgram_t_1489539037");
    Undly_28.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1038149869"); // 1
    Undly_28_set.insert("UnderlyingCPRegType_t_1038149869");
    Undly_28.add_attribute("AllocPct", "15607003.210000"); // 1
    Undly_28_set.insert("15607003.210000");
    Undly_28.add_attribute("Ccy", "CHF"); // 1
    Undly_28_set.insert("CHF");
    Undly_28.add_attribute("Qty", "1367707.190000"); // 1
    Undly_28_set.insert("1367707.190000");
    Undly_28.add_attribute("SettlTyp", "4"); // 1
    Undly_28_set.insert("4");
    Undly_28.add_attribute("CashAmt", "UnderlyingCashAmount_t_1169583173"); // 1
    Undly_28_set.insert("UnderlyingCashAmount_t_1169583173");
    Undly_28.add_attribute("CashTyp", "FIXED"); // 1
    Undly_28_set.insert("FIXED");
    Undly_28.add_attribute("Px", "17817214.670000"); // 1
    Undly_28_set.insert("17817214.670000");
    Undly_28.add_attribute("DirtPx", "21273795.780000"); // 1
    Undly_28_set.insert("21273795.780000");
    Undly_28.add_attribute("EndPx", "14401791.570000"); // 1
    Undly_28_set.insert("14401791.570000");
    Undly_28.add_attribute("StartVal", "UnderlyingStartValue_t_21238598"); // 1
    Undly_28_set.insert("UnderlyingStartValue_t_21238598");
    Undly_28.add_attribute("CurVal", "UnderlyingCurrentValue_t_1975389510"); // 1
    Undly_28_set.insert("UnderlyingCurrentValue_t_1975389510");
    Undly_28.add_attribute("EndVal", "UnderlyingEndValue_t_1873493505"); // 1
    Undly_28_set.insert("UnderlyingEndValue_t_1873493505");
    Undly_28.add_attribute("AdjQty", "10851856.330000"); // 1
    Undly_28_set.insert("10851856.330000");
    Undly_28.add_attribute("FxRate", "21390941.460000"); // 1
    Undly_28_set.insert("21390941.460000");
    Undly_28.add_attribute("FxRateCalc", "D"); // 1
    Undly_28_set.insert("D");
    Undly_28.add_attribute("CapValu", "UnderlyingCapValue_t_331752769"); // 1
    Undly_28_set.insert("UnderlyingCapValue_t_331752769");
    Undly_28.add_attribute("SetMeth", "UnderlyingSettlMethod_t_697398505"); // 1
    Undly_28_set.insert("UnderlyingSettlMethod_t_697398505");
    Undly_28.add_attribute("PutCall", "1291304791"); // 1
    Undly_28_set.insert("1291304791");
    all_values.push_back(Undly_28_set);
    all_compo_names.insert("Undly_28_set");

    {
      xml_element UndAID_28{"UndAID"};
      multiset<string> UndAID_28_set;
      UndAID_28.add_attribute("AltID", "UnderlyingSecurityAltID_t_1440635380"); // 2
      UndAID_28_set.insert("UnderlyingSecurityAltID_t_1440635380");
      UndAID_28.add_attribute("AltIDSrc", "I"); // 2
      UndAID_28_set.insert("I");
      all_values.push_back(UndAID_28_set);
      all_compo_names.insert("UndAID_28_set");

      Undly_28.add_element(UndAID_28);
    }
    {
      xml_element Stip_49{"Stip"};
      multiset<string> Stip_49_set;
      Stip_49.add_attribute("Typ", "MININCR"); // 2
      Stip_49_set.insert("MININCR");
      Stip_49.add_attribute("Val", "UnderlyingStipValue_t_483270584"); // 2
      Stip_49_set.insert("UnderlyingStipValue_t_483270584");
      all_values.push_back(Stip_49_set);
      all_compo_names.insert("Stip_49_set");

      Undly_28.add_element(Stip_49);
    }
    {
      xml_element Pty_135{"Pty"};
      multiset<string> Pty_135_set;
      Pty_135.add_attribute("ID", "UnderlyingInstrumentPartyID_t_752844857"); // 2
      Pty_135_set.insert("UnderlyingInstrumentPartyID_t_752844857");
      Pty_135.add_attribute("Src", "4"); // 2
      Pty_135_set.insert("4");
      Pty_135.add_attribute("R", "81"); // 2
      Pty_135_set.insert("81");
      all_values.push_back(Pty_135_set);
      all_compo_names.insert("Pty_135_set");

      {
        xml_element Sub_135{"Sub"};
        multiset<string> Sub_135_set;
        Sub_135.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1568922288"); // 3
        Sub_135_set.insert("UnderlyingInstrumentPartySubID_t_1568922288");
        Sub_135.add_attribute("Typ", "13"); // 3
        Sub_135_set.insert("13");
        all_values.push_back(Sub_135_set);
        all_compo_names.insert("Sub_135_set");

        Pty_135.add_element(Sub_135);
      }
      Undly_28.add_element(Pty_135);
    }
    elt.add_element(Undly_28);
  } // end Undly
  { // Undly
    xml_element Undly_29{"Undly"};
    multiset<string> Undly_29_set;
    Undly_29.add_attribute("Sym", "UnderlyingSymbol_t_1366768055"); // 1
    Undly_29_set.insert("UnderlyingSymbol_t_1366768055");
    Undly_29.add_attribute("Sfx", "WI"); // 1
    Undly_29_set.insert("WI");
    Undly_29.add_attribute("ID", "UnderlyingSecurityID_t_137720518"); // 1
    Undly_29_set.insert("UnderlyingSecurityID_t_137720518");
    Undly_29.add_attribute("Src", "7"); // 1
    Undly_29_set.insert("7");
    Undly_29.add_attribute("Prod", "2"); // 1
    Undly_29_set.insert("2");
    Undly_29.add_attribute("CFI", "UnderlyingCFICode_t_176680693"); // 1
    Undly_29_set.insert("UnderlyingCFICode_t_176680693");
    Undly_29.add_attribute("SecTyp", "TMCP"); // 1
    Undly_29_set.insert("TMCP");
    Undly_29.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_835939362"); // 1
    Undly_29_set.insert("UnderlyingSecuritySubType_t_835939362");
    Undly_29.add_attribute("MMY", "1346263866"); // 1
    Undly_29_set.insert("1346263866");
    Undly_29.add_attribute("Mat", "UnderlyingMaturityDate_t_882393905"); // 1
    Undly_29_set.insert("UnderlyingMaturityDate_t_882393905");
    Undly_29.add_attribute("MatTm", "470177181"); // 1
    Undly_29_set.insert("470177181");
    Undly_29.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1326159796"); // 1
    Undly_29_set.insert("UnderlyingCouponPaymentDate_t_1326159796");
    Undly_29.add_attribute("RestrctTyp", "MM"); // 1
    Undly_29_set.insert("MM");
    Undly_29.add_attribute("Snrty", "SB"); // 1
    Undly_29_set.insert("SB");
    Undly_29.add_attribute("NotlPctOut", "11540656.590000"); // 1
    Undly_29_set.insert("11540656.590000");
    Undly_29.add_attribute("OrigNotlPctOut", "20485829.190000"); // 1
    Undly_29_set.insert("20485829.190000");
    Undly_29.add_attribute("AttchPnt", "15766014.120000"); // 1
    Undly_29_set.insert("15766014.120000");
    Undly_29.add_attribute("DetchPnt", "11456761.570000"); // 1
    Undly_29_set.insert("11456761.570000");
    Undly_29.add_attribute("Issued", "UnderlyingIssueDate_t_1705913186"); // 1
    Undly_29_set.insert("UnderlyingIssueDate_t_1705913186");
    Undly_29.add_attribute("RepoCollSecTyp", "1908354181"); // 1
    Undly_29_set.insert("1908354181");
    Undly_29.add_attribute("RepoTrm", "1843074662"); // 1
    Undly_29_set.insert("1843074662");
    Undly_29.add_attribute("RepoRt", "8497343.290000"); // 1
    Undly_29_set.insert("8497343.290000");
    Undly_29.add_attribute("Fctr", "12015059.130000"); // 1
    Undly_29_set.insert("12015059.130000");
    Undly_29.add_attribute("CrdRtg", "UnderlyingCreditRating_t_867889037"); // 1
    Undly_29_set.insert("UnderlyingCreditRating_t_867889037");
    Undly_29.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1977393476"); // 1
    Undly_29_set.insert("UnderlyingInstrRegistry_t_1977393476");
    Undly_29.add_attribute("Ctry", "1684776498"); // 1
    Undly_29_set.insert("1684776498");
    Undly_29.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1620733895"); // 1
    Undly_29_set.insert("UnderlyingStateOrProvinceOfIssue_t_1620733895");
    Undly_29.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1624742067"); // 1
    Undly_29_set.insert("UnderlyingLocaleOfIssue_t_1624742067");
    Undly_29.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1393450505"); // 1
    Undly_29_set.insert("UnderlyingRedemptionDate_t_1393450505");
    Undly_29.add_attribute("StrkPx", "10421725.350000"); // 1
    Undly_29_set.insert("10421725.350000");
    Undly_29.add_attribute("StrkCcy", "GBP"); // 1
    Undly_29_set.insert("GBP");
    Undly_29.add_attribute("OptA", "1953150212"); // 1
    Undly_29_set.insert("1953150212");
    Undly_29.add_attribute("Mult", "8620332.330000"); // 1
    Undly_29_set.insert("8620332.330000");
    Undly_29.add_attribute("MultTyp", "0"); // 1
    Undly_29_set.insert("0");
    Undly_29.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_29_set.insert("2");
    Undly_29.add_attribute("UOM", "Gal"); // 1
    Undly_29_set.insert("Gal");
    Undly_29.add_attribute("UOMQty", "1619914.390000"); // 1
    Undly_29_set.insert("1619914.390000");
    Undly_29.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_29_set.insert("MMbbl");
    Undly_29.add_attribute("PxUOMQty", "2374941.440000"); // 1
    Undly_29_set.insert("2374941.440000");
    Undly_29.add_attribute("TmUnit", "H"); // 1
    Undly_29_set.insert("H");
    Undly_29.add_attribute("ExerStyle", "0"); // 1
    Undly_29_set.insert("0");
    Undly_29.add_attribute("CpnRt", "15636539.410000"); // 1
    Undly_29_set.insert("15636539.410000");
    Undly_29.add_attribute("Exch", "UnderlyingSecurityExchange_t_1219474758"); // 1
    Undly_29_set.insert("UnderlyingSecurityExchange_t_1219474758");
    Undly_29.add_attribute("Issr", "UnderlyingIssuer_t_417434952"); // 1
    Undly_29_set.insert("UnderlyingIssuer_t_417434952");
    Undly_29.add_attribute("EncUndIssrLen", "570235952"); // 1
    Undly_29_set.insert("570235952");
    Undly_29.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1120574029"); // 1
    Undly_29_set.insert("EncodedUnderlyingIssuer_t_1120574029");
    Undly_29.add_attribute("Desc", "UnderlyingSecurityDesc_t_1994036365"); // 1
    Undly_29_set.insert("UnderlyingSecurityDesc_t_1994036365");
    Undly_29.add_attribute("EncUndSecDescLen", "1715912109"); // 1
    Undly_29_set.insert("1715912109");
    Undly_29.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_679003568"); // 1
    Undly_29_set.insert("EncodedUnderlyingSecurityDesc_t_679003568");
    Undly_29.add_attribute("CPPgm", "UnderlyingCPProgram_t_1754906898"); // 1
    Undly_29_set.insert("UnderlyingCPProgram_t_1754906898");
    Undly_29.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1411503123"); // 1
    Undly_29_set.insert("UnderlyingCPRegType_t_1411503123");
    Undly_29.add_attribute("AllocPct", "15287378.970000"); // 1
    Undly_29_set.insert("15287378.970000");
    Undly_29.add_attribute("Ccy", "USD"); // 1
    Undly_29_set.insert("USD");
    Undly_29.add_attribute("Qty", "13586477.250000"); // 1
    Undly_29_set.insert("13586477.250000");
    Undly_29.add_attribute("SettlTyp", "2"); // 1
    Undly_29_set.insert("2");
    Undly_29.add_attribute("CashAmt", "UnderlyingCashAmount_t_1752642407"); // 1
    Undly_29_set.insert("UnderlyingCashAmount_t_1752642407");
    Undly_29.add_attribute("CashTyp", "FIXED"); // 1
    Undly_29_set.insert("FIXED");
    Undly_29.add_attribute("Px", "17396725.190000"); // 1
    Undly_29_set.insert("17396725.190000");
    Undly_29.add_attribute("DirtPx", "6473312.940000"); // 1
    Undly_29_set.insert("6473312.940000");
    Undly_29.add_attribute("EndPx", "15602188.600000"); // 1
    Undly_29_set.insert("15602188.600000");
    Undly_29.add_attribute("StartVal", "UnderlyingStartValue_t_204923784"); // 1
    Undly_29_set.insert("UnderlyingStartValue_t_204923784");
    Undly_29.add_attribute("CurVal", "UnderlyingCurrentValue_t_452997859"); // 1
    Undly_29_set.insert("UnderlyingCurrentValue_t_452997859");
    Undly_29.add_attribute("EndVal", "UnderlyingEndValue_t_274768445"); // 1
    Undly_29_set.insert("UnderlyingEndValue_t_274768445");
    Undly_29.add_attribute("AdjQty", "15976434.240000"); // 1
    Undly_29_set.insert("15976434.240000");
    Undly_29.add_attribute("FxRate", "12203841.360000"); // 1
    Undly_29_set.insert("12203841.360000");
    Undly_29.add_attribute("FxRateCalc", "M"); // 1
    Undly_29_set.insert("M");
    Undly_29.add_attribute("CapValu", "UnderlyingCapValue_t_1759634864"); // 1
    Undly_29_set.insert("UnderlyingCapValue_t_1759634864");
    Undly_29.add_attribute("SetMeth", "UnderlyingSettlMethod_t_676226127"); // 1
    Undly_29_set.insert("UnderlyingSettlMethod_t_676226127");
    Undly_29.add_attribute("PutCall", "1550976516"); // 1
    Undly_29_set.insert("1550976516");
    all_values.push_back(Undly_29_set);
    all_compo_names.insert("Undly_29_set");

    {
      xml_element UndAID_29{"UndAID"};
      multiset<string> UndAID_29_set;
      UndAID_29.add_attribute("AltID", "UnderlyingSecurityAltID_t_656536560"); // 2
      UndAID_29_set.insert("UnderlyingSecurityAltID_t_656536560");
      UndAID_29.add_attribute("AltIDSrc", "9"); // 2
      UndAID_29_set.insert("9");
      all_values.push_back(UndAID_29_set);
      all_compo_names.insert("UndAID_29_set");

      Undly_29.add_element(UndAID_29);
    }
    {
      xml_element Stip_50{"Stip"};
      multiset<string> Stip_50_set;
      Stip_50.add_attribute("Typ", "CURRENCY"); // 2
      Stip_50_set.insert("CURRENCY");
      Stip_50.add_attribute("Val", "UnderlyingStipValue_t_1876011319"); // 2
      Stip_50_set.insert("UnderlyingStipValue_t_1876011319");
      all_values.push_back(Stip_50_set);
      all_compo_names.insert("Stip_50_set");

      Undly_29.add_element(Stip_50);
    }
    {
      xml_element Pty_136{"Pty"};
      multiset<string> Pty_136_set;
      Pty_136.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1019680253"); // 2
      Pty_136_set.insert("UnderlyingInstrumentPartyID_t_1019680253");
      Pty_136.add_attribute("Src", "8"); // 2
      Pty_136_set.insert("8");
      Pty_136.add_attribute("R", "51"); // 2
      Pty_136_set.insert("51");
      all_values.push_back(Pty_136_set);
      all_compo_names.insert("Pty_136_set");

      {
        xml_element Sub_136{"Sub"};
        multiset<string> Sub_136_set;
        Sub_136.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_866232970"); // 3
        Sub_136_set.insert("UnderlyingInstrumentPartySubID_t_866232970");
        Sub_136.add_attribute("Typ", "33"); // 3
        Sub_136_set.insert("33");
        all_values.push_back(Sub_136_set);
        all_compo_names.insert("Sub_136_set");

        Pty_136.add_element(Sub_136);
      }
      Undly_29.add_element(Pty_136);
    }
    elt.add_element(Undly_29);
  } // end Undly
  { // Leg
    xml_element Leg_31{"Leg"};
    multiset<string> Leg_31_set;
    Leg_31.add_attribute("Sym", "LegSymbol_t_473656220"); // 1
    Leg_31_set.insert("LegSymbol_t_473656220");
    Leg_31.add_attribute("Sfx", "WI"); // 1
    Leg_31_set.insert("WI");
    Leg_31.add_attribute("ID", "LegSecurityID_t_909359518"); // 1
    Leg_31_set.insert("LegSecurityID_t_909359518");
    Leg_31.add_attribute("Src", "F"); // 1
    Leg_31_set.insert("F");
    Leg_31.add_attribute("Prod", "8"); // 1
    Leg_31_set.insert("8");
    Leg_31.add_attribute("CFI", "LegCFICode_t_120523595"); // 1
    Leg_31_set.insert("LegCFICode_t_120523595");
    Leg_31.add_attribute("SecTyp", "RVLVTRM"); // 1
    Leg_31_set.insert("RVLVTRM");
    Leg_31.add_attribute("SecSubTyp", "LegSecuritySubType_t_106897969"); // 1
    Leg_31_set.insert("LegSecuritySubType_t_106897969");
    Leg_31.add_attribute("MMY", "956429740"); // 1
    Leg_31_set.insert("956429740");
    Leg_31.add_attribute("Mat", "LegMaturityDate_t_1220996270"); // 1
    Leg_31_set.insert("LegMaturityDate_t_1220996270");
    Leg_31.add_attribute("MatTm", "754229264"); // 1
    Leg_31_set.insert("754229264");
    Leg_31.add_attribute("CpnPmt", "LegCouponPaymentDate_t_369164952"); // 1
    Leg_31_set.insert("LegCouponPaymentDate_t_369164952");
    Leg_31.add_attribute("Issued", "LegIssueDate_t_1425920054"); // 1
    Leg_31_set.insert("LegIssueDate_t_1425920054");
    Leg_31.add_attribute("RepoCollSecTyp", "1207227123"); // 1
    Leg_31_set.insert("1207227123");
    Leg_31.add_attribute("RepoTrm", "643933397"); // 1
    Leg_31_set.insert("643933397");
    Leg_31.add_attribute("RepoRt", "8760798.300000"); // 1
    Leg_31_set.insert("8760798.300000");
    Leg_31.add_attribute("Fctr", "2801276.110000"); // 1
    Leg_31_set.insert("2801276.110000");
    Leg_31.add_attribute("CrdRtg", "LegCreditRating_t_1957415769"); // 1
    Leg_31_set.insert("LegCreditRating_t_1957415769");
    Leg_31.add_attribute("Rgstry", "LegInstrRegistry_t_488231046"); // 1
    Leg_31_set.insert("LegInstrRegistry_t_488231046");
    Leg_31.add_attribute("Ctry", "956353738"); // 1
    Leg_31_set.insert("956353738");
    Leg_31.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1360908638"); // 1
    Leg_31_set.insert("LegStateOrProvinceOfIssue_t_1360908638");
    Leg_31.add_attribute("Lcl", "LegLocaleOfIssue_t_1144767607"); // 1
    Leg_31_set.insert("LegLocaleOfIssue_t_1144767607");
    Leg_31.add_attribute("Redeem", "LegRedemptionDate_t_1558599039"); // 1
    Leg_31_set.insert("LegRedemptionDate_t_1558599039");
    Leg_31.add_attribute("Strk", "1805717.990000"); // 1
    Leg_31_set.insert("1805717.990000");
    Leg_31.add_attribute("StrkCcy", "USD"); // 1
    Leg_31_set.insert("USD");
    Leg_31.add_attribute("OptA", "1717954561"); // 1
    Leg_31_set.insert("1717954561");
    Leg_31.add_attribute("Cmult", "17223969.780000"); // 1
    Leg_31_set.insert("17223969.780000");
    Leg_31.add_attribute("MultTyp", "1"); // 1
    Leg_31_set.insert("1");
    Leg_31.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_31_set.insert("0");
    Leg_31.add_attribute("UOM", "lbs"); // 1
    Leg_31_set.insert("lbs");
    Leg_31.add_attribute("UOMQty", "17706848.340000"); // 1
    Leg_31_set.insert("17706848.340000");
    Leg_31.add_attribute("PxUOM", "Alw"); // 1
    Leg_31_set.insert("Alw");
    Leg_31.add_attribute("PxUOMQty", "20123781.170000"); // 1
    Leg_31_set.insert("20123781.170000");
    Leg_31.add_attribute("TmUnit", "Wk"); // 1
    Leg_31_set.insert("Wk");
    Leg_31.add_attribute("ExerStyle", "0"); // 1
    Leg_31_set.insert("0");
    Leg_31.add_attribute("CpnRt", "21329017.120000"); // 1
    Leg_31_set.insert("21329017.120000");
    Leg_31.add_attribute("Exch", "LegSecurityExchange_t_387110321"); // 1
    Leg_31_set.insert("LegSecurityExchange_t_387110321");
    Leg_31.add_attribute("Issr", "LegIssuer_t_1654750012"); // 1
    Leg_31_set.insert("LegIssuer_t_1654750012");
    Leg_31.add_attribute("EncLegIssrLen", "941847804"); // 1
    Leg_31_set.insert("941847804");
    Leg_31.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1608106591"); // 1
    Leg_31_set.insert("EncodedLegIssuer_t_1608106591");
    Leg_31.add_attribute("Desc", "LegSecurityDesc_t_261495628"); // 1
    Leg_31_set.insert("LegSecurityDesc_t_261495628");
    Leg_31.add_attribute("EncLegSecDescLen", "1311012756"); // 1
    Leg_31_set.insert("1311012756");
    Leg_31.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_886542997"); // 1
    Leg_31_set.insert("EncodedLegSecurityDesc_t_886542997");
    Leg_31.add_attribute("RatioQty", "14687227.510000"); // 1
    Leg_31_set.insert("14687227.510000");
    Leg_31.add_attribute("Side", "B"); // 1
    Leg_31_set.insert("B");
    Leg_31.add_attribute("Ccy", "GBP"); // 1
    Leg_31_set.insert("GBP");
    Leg_31.add_attribute("Pool", "LegPool_t_1764878275"); // 1
    Leg_31_set.insert("LegPool_t_1764878275");
    Leg_31.add_attribute("Dated", "LegDatedDate_t_103370226"); // 1
    Leg_31_set.insert("LegDatedDate_t_103370226");
    Leg_31.add_attribute("CSetMo", "557720453"); // 1
    Leg_31_set.insert("557720453");
    Leg_31.add_attribute("IntAcrl", "LegInterestAccrualDate_t_978303265"); // 1
    Leg_31_set.insert("LegInterestAccrualDate_t_978303265");
    Leg_31.add_attribute("PutCall", "1248137833"); // 1
    Leg_31_set.insert("1248137833");
    Leg_31.add_attribute("LegOptionRatio", "21163194.920000"); // 1
    Leg_31_set.insert("21163194.920000");
    Leg_31.add_attribute("Px", "11588750.650000"); // 1
    Leg_31_set.insert("11588750.650000");
    all_values.push_back(Leg_31_set);
    all_compo_names.insert("Leg_31_set");

    {
      xml_element LegAID_31{"LegAID"};
      multiset<string> LegAID_31_set;
      LegAID_31.add_attribute("SecAltID", "LegSecurityAltID_t_2121433111"); // 2
      LegAID_31_set.insert("LegSecurityAltID_t_2121433111");
      LegAID_31.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_31_set.insert("F");
      all_values.push_back(LegAID_31_set);
      all_compo_names.insert("LegAID_31_set");

      Leg_31.add_element(LegAID_31);
    }
    elt.add_element(Leg_31);
  } // end Leg
  { // Leg
    xml_element Leg_32{"Leg"};
    multiset<string> Leg_32_set;
    Leg_32.add_attribute("Sym", "LegSymbol_t_729345978"); // 1
    Leg_32_set.insert("LegSymbol_t_729345978");
    Leg_32.add_attribute("Sfx", "CD"); // 1
    Leg_32_set.insert("CD");
    Leg_32.add_attribute("ID", "LegSecurityID_t_1696660102"); // 1
    Leg_32_set.insert("LegSecurityID_t_1696660102");
    Leg_32.add_attribute("Src", "M"); // 1
    Leg_32_set.insert("M");
    Leg_32.add_attribute("Prod", "4"); // 1
    Leg_32_set.insert("4");
    Leg_32.add_attribute("CFI", "LegCFICode_t_1319861288"); // 1
    Leg_32_set.insert("LegCFICode_t_1319861288");
    Leg_32.add_attribute("SecTyp", "TERM"); // 1
    Leg_32_set.insert("TERM");
    Leg_32.add_attribute("SecSubTyp", "LegSecuritySubType_t_516775862"); // 1
    Leg_32_set.insert("LegSecuritySubType_t_516775862");
    Leg_32.add_attribute("MMY", "78164211"); // 1
    Leg_32_set.insert("78164211");
    Leg_32.add_attribute("Mat", "LegMaturityDate_t_1852109341"); // 1
    Leg_32_set.insert("LegMaturityDate_t_1852109341");
    Leg_32.add_attribute("MatTm", "502193926"); // 1
    Leg_32_set.insert("502193926");
    Leg_32.add_attribute("CpnPmt", "LegCouponPaymentDate_t_465274533"); // 1
    Leg_32_set.insert("LegCouponPaymentDate_t_465274533");
    Leg_32.add_attribute("Issued", "LegIssueDate_t_1359375706"); // 1
    Leg_32_set.insert("LegIssueDate_t_1359375706");
    Leg_32.add_attribute("RepoCollSecTyp", "1444041731"); // 1
    Leg_32_set.insert("1444041731");
    Leg_32.add_attribute("RepoTrm", "2073381124"); // 1
    Leg_32_set.insert("2073381124");
    Leg_32.add_attribute("RepoRt", "16208713.340000"); // 1
    Leg_32_set.insert("16208713.340000");
    Leg_32.add_attribute("Fctr", "6075708.390000"); // 1
    Leg_32_set.insert("6075708.390000");
    Leg_32.add_attribute("CrdRtg", "LegCreditRating_t_812440474"); // 1
    Leg_32_set.insert("LegCreditRating_t_812440474");
    Leg_32.add_attribute("Rgstry", "LegInstrRegistry_t_942110438"); // 1
    Leg_32_set.insert("LegInstrRegistry_t_942110438");
    Leg_32.add_attribute("Ctry", "415033345"); // 1
    Leg_32_set.insert("415033345");
    Leg_32.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_427579654"); // 1
    Leg_32_set.insert("LegStateOrProvinceOfIssue_t_427579654");
    Leg_32.add_attribute("Lcl", "LegLocaleOfIssue_t_543477152"); // 1
    Leg_32_set.insert("LegLocaleOfIssue_t_543477152");
    Leg_32.add_attribute("Redeem", "LegRedemptionDate_t_32427973"); // 1
    Leg_32_set.insert("LegRedemptionDate_t_32427973");
    Leg_32.add_attribute("Strk", "5309498.800000"); // 1
    Leg_32_set.insert("5309498.800000");
    Leg_32.add_attribute("StrkCcy", "GBP"); // 1
    Leg_32_set.insert("GBP");
    Leg_32.add_attribute("OptA", "1779087714"); // 1
    Leg_32_set.insert("1779087714");
    Leg_32.add_attribute("Cmult", "10700334.490000"); // 1
    Leg_32_set.insert("10700334.490000");
    Leg_32.add_attribute("MultTyp", "1"); // 1
    Leg_32_set.insert("1");
    Leg_32.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_32_set.insert("2");
    Leg_32.add_attribute("UOM", "MWh"); // 1
    Leg_32_set.insert("MWh");
    Leg_32.add_attribute("UOMQty", "7514686.330000"); // 1
    Leg_32_set.insert("7514686.330000");
    Leg_32.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_32_set.insert("oz_tr");
    Leg_32.add_attribute("PxUOMQty", "10188413.910000"); // 1
    Leg_32_set.insert("10188413.910000");
    Leg_32.add_attribute("TmUnit", "Yr"); // 1
    Leg_32_set.insert("Yr");
    Leg_32.add_attribute("ExerStyle", "2"); // 1
    Leg_32_set.insert("2");
    Leg_32.add_attribute("CpnRt", "1912190.320000"); // 1
    Leg_32_set.insert("1912190.320000");
    Leg_32.add_attribute("Exch", "LegSecurityExchange_t_313870397"); // 1
    Leg_32_set.insert("LegSecurityExchange_t_313870397");
    Leg_32.add_attribute("Issr", "LegIssuer_t_323073578"); // 1
    Leg_32_set.insert("LegIssuer_t_323073578");
    Leg_32.add_attribute("EncLegIssrLen", "269383243"); // 1
    Leg_32_set.insert("269383243");
    Leg_32.add_attribute("EncLegIssr", "EncodedLegIssuer_t_18496091"); // 1
    Leg_32_set.insert("EncodedLegIssuer_t_18496091");
    Leg_32.add_attribute("Desc", "LegSecurityDesc_t_825267505"); // 1
    Leg_32_set.insert("LegSecurityDesc_t_825267505");
    Leg_32.add_attribute("EncLegSecDescLen", "734657776"); // 1
    Leg_32_set.insert("734657776");
    Leg_32.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1377871797"); // 1
    Leg_32_set.insert("EncodedLegSecurityDesc_t_1377871797");
    Leg_32.add_attribute("RatioQty", "1218255.880000"); // 1
    Leg_32_set.insert("1218255.880000");
    Leg_32.add_attribute("Side", "6"); // 1
    Leg_32_set.insert("6");
    Leg_32.add_attribute("Ccy", "EUR"); // 1
    Leg_32_set.insert("EUR");
    Leg_32.add_attribute("Pool", "LegPool_t_1472995727"); // 1
    Leg_32_set.insert("LegPool_t_1472995727");
    Leg_32.add_attribute("Dated", "LegDatedDate_t_1793369921"); // 1
    Leg_32_set.insert("LegDatedDate_t_1793369921");
    Leg_32.add_attribute("CSetMo", "1144429773"); // 1
    Leg_32_set.insert("1144429773");
    Leg_32.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1900575381"); // 1
    Leg_32_set.insert("LegInterestAccrualDate_t_1900575381");
    Leg_32.add_attribute("PutCall", "189363426"); // 1
    Leg_32_set.insert("189363426");
    Leg_32.add_attribute("LegOptionRatio", "11768577.460000"); // 1
    Leg_32_set.insert("11768577.460000");
    Leg_32.add_attribute("Px", "2840416.130000"); // 1
    Leg_32_set.insert("2840416.130000");
    all_values.push_back(Leg_32_set);
    all_compo_names.insert("Leg_32_set");

    {
      xml_element LegAID_32{"LegAID"};
      multiset<string> LegAID_32_set;
      LegAID_32.add_attribute("SecAltID", "LegSecurityAltID_t_1290561031"); // 2
      LegAID_32_set.insert("LegSecurityAltID_t_1290561031");
      LegAID_32.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_32_set.insert("J");
      all_values.push_back(LegAID_32_set);
      all_compo_names.insert("LegAID_32_set");

      Leg_32.add_element(LegAID_32);
    }
    elt.add_element(Leg_32);
  } // end Leg
  { // Leg
    xml_element Leg_33{"Leg"};
    multiset<string> Leg_33_set;
    Leg_33.add_attribute("Sym", "LegSymbol_t_2063129327"); // 1
    Leg_33_set.insert("LegSymbol_t_2063129327");
    Leg_33.add_attribute("Sfx", "WI"); // 1
    Leg_33_set.insert("WI");
    Leg_33.add_attribute("ID", "LegSecurityID_t_62227992"); // 1
    Leg_33_set.insert("LegSecurityID_t_62227992");
    Leg_33.add_attribute("Src", "I"); // 1
    Leg_33_set.insert("I");
    Leg_33.add_attribute("Prod", "1"); // 1
    Leg_33_set.insert("1");
    Leg_33.add_attribute("CFI", "LegCFICode_t_813696625"); // 1
    Leg_33_set.insert("LegCFICode_t_813696625");
    Leg_33.add_attribute("SecTyp", "XCN"); // 1
    Leg_33_set.insert("XCN");
    Leg_33.add_attribute("SecSubTyp", "LegSecuritySubType_t_554133514"); // 1
    Leg_33_set.insert("LegSecuritySubType_t_554133514");
    Leg_33.add_attribute("MMY", "823309724"); // 1
    Leg_33_set.insert("823309724");
    Leg_33.add_attribute("Mat", "LegMaturityDate_t_629396897"); // 1
    Leg_33_set.insert("LegMaturityDate_t_629396897");
    Leg_33.add_attribute("MatTm", "745352546"); // 1
    Leg_33_set.insert("745352546");
    Leg_33.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1137180122"); // 1
    Leg_33_set.insert("LegCouponPaymentDate_t_1137180122");
    Leg_33.add_attribute("Issued", "LegIssueDate_t_952470475"); // 1
    Leg_33_set.insert("LegIssueDate_t_952470475");
    Leg_33.add_attribute("RepoCollSecTyp", "1014735789"); // 1
    Leg_33_set.insert("1014735789");
    Leg_33.add_attribute("RepoTrm", "1155676213"); // 1
    Leg_33_set.insert("1155676213");
    Leg_33.add_attribute("RepoRt", "17777379.800000"); // 1
    Leg_33_set.insert("17777379.800000");
    Leg_33.add_attribute("Fctr", "17493935.660000"); // 1
    Leg_33_set.insert("17493935.660000");
    Leg_33.add_attribute("CrdRtg", "LegCreditRating_t_386064362"); // 1
    Leg_33_set.insert("LegCreditRating_t_386064362");
    Leg_33.add_attribute("Rgstry", "LegInstrRegistry_t_1899563568"); // 1
    Leg_33_set.insert("LegInstrRegistry_t_1899563568");
    Leg_33.add_attribute("Ctry", "262465171"); // 1
    Leg_33_set.insert("262465171");
    Leg_33.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1237323845"); // 1
    Leg_33_set.insert("LegStateOrProvinceOfIssue_t_1237323845");
    Leg_33.add_attribute("Lcl", "LegLocaleOfIssue_t_481476348"); // 1
    Leg_33_set.insert("LegLocaleOfIssue_t_481476348");
    Leg_33.add_attribute("Redeem", "LegRedemptionDate_t_1735460898"); // 1
    Leg_33_set.insert("LegRedemptionDate_t_1735460898");
    Leg_33.add_attribute("Strk", "8832101.190000"); // 1
    Leg_33_set.insert("8832101.190000");
    Leg_33.add_attribute("StrkCcy", "EUR"); // 1
    Leg_33_set.insert("EUR");
    Leg_33.add_attribute("OptA", "1072573545"); // 1
    Leg_33_set.insert("1072573545");
    Leg_33.add_attribute("Cmult", "6552802.190000"); // 1
    Leg_33_set.insert("6552802.190000");
    Leg_33.add_attribute("MultTyp", "0"); // 1
    Leg_33_set.insert("0");
    Leg_33.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_33_set.insert("3");
    Leg_33.add_attribute("UOM", "lbs"); // 1
    Leg_33_set.insert("lbs");
    Leg_33.add_attribute("UOMQty", "16882399.240000"); // 1
    Leg_33_set.insert("16882399.240000");
    Leg_33.add_attribute("PxUOM", "Alw"); // 1
    Leg_33_set.insert("Alw");
    Leg_33.add_attribute("PxUOMQty", "7576135.470000"); // 1
    Leg_33_set.insert("7576135.470000");
    Leg_33.add_attribute("TmUnit", "S"); // 1
    Leg_33_set.insert("S");
    Leg_33.add_attribute("ExerStyle", "0"); // 1
    Leg_33_set.insert("0");
    Leg_33.add_attribute("CpnRt", "15713101.730000"); // 1
    Leg_33_set.insert("15713101.730000");
    Leg_33.add_attribute("Exch", "LegSecurityExchange_t_2032538313"); // 1
    Leg_33_set.insert("LegSecurityExchange_t_2032538313");
    Leg_33.add_attribute("Issr", "LegIssuer_t_518187398"); // 1
    Leg_33_set.insert("LegIssuer_t_518187398");
    Leg_33.add_attribute("EncLegIssrLen", "247136249"); // 1
    Leg_33_set.insert("247136249");
    Leg_33.add_attribute("EncLegIssr", "EncodedLegIssuer_t_514451562"); // 1
    Leg_33_set.insert("EncodedLegIssuer_t_514451562");
    Leg_33.add_attribute("Desc", "LegSecurityDesc_t_1263539944"); // 1
    Leg_33_set.insert("LegSecurityDesc_t_1263539944");
    Leg_33.add_attribute("EncLegSecDescLen", "1384316371"); // 1
    Leg_33_set.insert("1384316371");
    Leg_33.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1466922038"); // 1
    Leg_33_set.insert("EncodedLegSecurityDesc_t_1466922038");
    Leg_33.add_attribute("RatioQty", "1307920.850000"); // 1
    Leg_33_set.insert("1307920.850000");
    Leg_33.add_attribute("Side", "9"); // 1
    Leg_33_set.insert("9");
    Leg_33.add_attribute("Ccy", "EUR"); // 1
    Leg_33_set.insert("EUR");
    Leg_33.add_attribute("Pool", "LegPool_t_778573298"); // 1
    Leg_33_set.insert("LegPool_t_778573298");
    Leg_33.add_attribute("Dated", "LegDatedDate_t_849256291"); // 1
    Leg_33_set.insert("LegDatedDate_t_849256291");
    Leg_33.add_attribute("CSetMo", "2142650822"); // 1
    Leg_33_set.insert("2142650822");
    Leg_33.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2015897144"); // 1
    Leg_33_set.insert("LegInterestAccrualDate_t_2015897144");
    Leg_33.add_attribute("PutCall", "1330732639"); // 1
    Leg_33_set.insert("1330732639");
    Leg_33.add_attribute("LegOptionRatio", "17306280.720000"); // 1
    Leg_33_set.insert("17306280.720000");
    Leg_33.add_attribute("Px", "7516236.150000"); // 1
    Leg_33_set.insert("7516236.150000");
    all_values.push_back(Leg_33_set);
    all_compo_names.insert("Leg_33_set");

    {
      xml_element LegAID_33{"LegAID"};
      multiset<string> LegAID_33_set;
      LegAID_33.add_attribute("SecAltID", "LegSecurityAltID_t_809155112"); // 2
      LegAID_33_set.insert("LegSecurityAltID_t_809155112");
      LegAID_33.add_attribute("SecAltIDSrc", "C"); // 2
      LegAID_33_set.insert("C");
      all_values.push_back(LegAID_33_set);
      all_compo_names.insert("LegAID_33_set");

      Leg_33.add_element(LegAID_33);
    }
    elt.add_element(Leg_33);
  } // end Leg
  { // TxtLn
    xml_element TxtLn_0{"TxtLn"};
    multiset<string> TxtLn_0_set;
    TxtLn_0.add_attribute("Txt", "Text_t_1464435331"); // 1
    TxtLn_0_set.insert("Text_t_1464435331");
    TxtLn_0.add_attribute("EncTxtLen", "696807652"); // 1
    TxtLn_0_set.insert("696807652");
    TxtLn_0.add_attribute("EncTxt", "EncodedText_t_2039848088"); // 1
    TxtLn_0_set.insert("EncodedText_t_2039848088");
    all_values.push_back(TxtLn_0_set);
    all_compo_names.insert("TxtLn_0_set");

    elt.add_element(TxtLn_0);
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
