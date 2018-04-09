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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"RFQReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RFQRequest_message_t_0;
  elt.add_attribute("RFQReqID", "RFQReqID_t_1560855465"); // 0
  RFQRequest_message_t_0.insert("RFQReqID_t_1560855465");
  elt.add_attribute("SubReqTyp", "2"); // 0
  RFQRequest_message_t_0.insert("2");
  elt.add_attribute("PrvtQt", "false"); // 0
  RFQRequest_message_t_0.insert("false");
  all_values.push_back(RFQRequest_message_t_0);
  all_compo_names.insert("RFQRequest_message_t");

  { // Hdr
    xml_element Hdr_75{"Hdr"};
    multiset<string> Hdr_75_set;
    Hdr_75.add_attribute("SeqNum", "490946012"); // 1
    Hdr_75_set.insert("490946012");
    Hdr_75.add_attribute("SID", "SenderCompID_t_596869039"); // 1
    Hdr_75_set.insert("SenderCompID_t_596869039");
    Hdr_75.add_attribute("TID", "TargetCompID_t_1641213818"); // 1
    Hdr_75_set.insert("TargetCompID_t_1641213818");
    Hdr_75.add_attribute("OBID", "OnBehalfOfCompID_t_1557864507"); // 1
    Hdr_75_set.insert("OnBehalfOfCompID_t_1557864507");
    Hdr_75.add_attribute("D2ID", "DeliverToCompID_t_2091325926"); // 1
    Hdr_75_set.insert("DeliverToCompID_t_2091325926");
    Hdr_75.add_attribute("SSub", "SenderSubID_t_395799646"); // 1
    Hdr_75_set.insert("SenderSubID_t_395799646");
    Hdr_75.add_attribute("SLoc", "SenderLocationID_t_1732207635"); // 1
    Hdr_75_set.insert("SenderLocationID_t_1732207635");
    Hdr_75.add_attribute("TSub", "TargetSubID_t_1129391171"); // 1
    Hdr_75_set.insert("TargetSubID_t_1129391171");
    Hdr_75.add_attribute("TLoc", "TargetLocationID_t_2116654574"); // 1
    Hdr_75_set.insert("TargetLocationID_t_2116654574");
    Hdr_75.add_attribute("OBSub", "OnBehalfOfSubID_t_994129968"); // 1
    Hdr_75_set.insert("OnBehalfOfSubID_t_994129968");
    Hdr_75.add_attribute("OBLoc", "OnBehalfOfLocationID_t_158938562"); // 1
    Hdr_75_set.insert("OnBehalfOfLocationID_t_158938562");
    Hdr_75.add_attribute("D2Sub", "DeliverToSubID_t_136562765"); // 1
    Hdr_75_set.insert("DeliverToSubID_t_136562765");
    Hdr_75.add_attribute("D2Loc", "DeliverToLocationID_t_694614756"); // 1
    Hdr_75_set.insert("DeliverToLocationID_t_694614756");
    Hdr_75.add_attribute("PosDup", "N"); // 1
    Hdr_75_set.insert("N");
    Hdr_75.add_attribute("PosRsnd", "N"); // 1
    Hdr_75_set.insert("N");
    Hdr_75.add_attribute("Snt", "SendingTime_t_795902936"); // 1
    Hdr_75_set.insert("SendingTime_t_795902936");
    Hdr_75.add_attribute("OrigSnt", "OrigSendingTime_t_375338722"); // 1
    Hdr_75_set.insert("OrigSendingTime_t_375338722");
    Hdr_75.add_attribute("MsgEncd", "MessageEncoding_t_456790885"); // 1
    Hdr_75_set.insert("MessageEncoding_t_456790885");
    all_values.push_back(Hdr_75_set);
    all_compo_names.insert("Hdr_75_set");

    {
      xml_element Hop_75{"Hop"};
      multiset<string> Hop_75_set;
      Hop_75.add_attribute("ID", "HopCompID_t_502389824"); // 2
      Hop_75_set.insert("HopCompID_t_502389824");
      Hop_75.add_attribute("Ref", "1286766948"); // 2
      Hop_75_set.insert("1286766948");
      Hop_75.add_attribute("Snt", "HopSendingTime_t_1972874727"); // 2
      Hop_75_set.insert("HopSendingTime_t_1972874727");
      all_values.push_back(Hop_75_set);
      all_compo_names.insert("Hop_75_set");

      Hdr_75.add_element(Hop_75);
    }
    elt.add_element(Hdr_75);
  } // end Hdr
  { // Pty
    xml_element Pty_347{"Pty"};
    multiset<string> Pty_347_set;
    Pty_347.add_attribute("ID", "PartyID_t_2051719400"); // 1
    Pty_347_set.insert("PartyID_t_2051719400");
    Pty_347.add_attribute("Src", "D"); // 1
    Pty_347_set.insert("D");
    Pty_347.add_attribute("R", "49"); // 1
    Pty_347_set.insert("49");
    all_values.push_back(Pty_347_set);
    all_compo_names.insert("Pty_347_set");

    {
      xml_element Sub_347{"Sub"};
      multiset<string> Sub_347_set;
      Sub_347.add_attribute("ID", "PartySubID_t_376455404"); // 2
      Sub_347_set.insert("PartySubID_t_376455404");
      Sub_347.add_attribute("Typ", "16"); // 2
      Sub_347_set.insert("16");
      all_values.push_back(Sub_347_set);
      all_compo_names.insert("Sub_347_set");

      Pty_347.add_element(Sub_347);
    }
    elt.add_element(Pty_347);
  } // end Pty
  { // Pty
    xml_element Pty_348{"Pty"};
    multiset<string> Pty_348_set;
    Pty_348.add_attribute("ID", "PartyID_t_252002584"); // 1
    Pty_348_set.insert("PartyID_t_252002584");
    Pty_348.add_attribute("Src", "C"); // 1
    Pty_348_set.insert("C");
    Pty_348.add_attribute("R", "6"); // 1
    Pty_348_set.insert("6");
    all_values.push_back(Pty_348_set);
    all_compo_names.insert("Pty_348_set");

    {
      xml_element Sub_348{"Sub"};
      multiset<string> Sub_348_set;
      Sub_348.add_attribute("ID", "PartySubID_t_214645369"); // 2
      Sub_348_set.insert("PartySubID_t_214645369");
      Sub_348.add_attribute("Typ", "27"); // 2
      Sub_348_set.insert("27");
      all_values.push_back(Sub_348_set);
      all_compo_names.insert("Sub_348_set");

      Pty_348.add_element(Sub_348);
    }
    elt.add_element(Pty_348);
  } // end Pty
  { // Pty
    xml_element Pty_349{"Pty"};
    multiset<string> Pty_349_set;
    Pty_349.add_attribute("ID", "PartyID_t_1923765077"); // 1
    Pty_349_set.insert("PartyID_t_1923765077");
    Pty_349.add_attribute("Src", "4"); // 1
    Pty_349_set.insert("4");
    Pty_349.add_attribute("R", "47"); // 1
    Pty_349_set.insert("47");
    all_values.push_back(Pty_349_set);
    all_compo_names.insert("Pty_349_set");

    {
      xml_element Sub_349{"Sub"};
      multiset<string> Sub_349_set;
      Sub_349.add_attribute("ID", "PartySubID_t_1867607355"); // 2
      Sub_349_set.insert("PartySubID_t_1867607355");
      Sub_349.add_attribute("Typ", "28"); // 2
      Sub_349_set.insert("28");
      all_values.push_back(Sub_349_set);
      all_compo_names.insert("Sub_349_set");

      Pty_349.add_element(Sub_349);
    }
    elt.add_element(Pty_349);
  } // end Pty
  { // RFQReq
    xml_element RFQReq_0{"RFQReq"};
    multiset<string> RFQReq_0_set;
    RFQReq_0.add_attribute("PrevClsPx", "8495148.790000"); // 1
    RFQReq_0_set.insert("8495148.790000");
    RFQReq_0.add_attribute("ReqTyp", "1"); // 1
    RFQReq_0_set.insert("1");
    RFQReq_0.add_attribute("Typ", "0"); // 1
    RFQReq_0_set.insert("0");
    RFQReq_0.add_attribute("SesID", "4"); // 1
    RFQReq_0_set.insert("4");
    RFQReq_0.add_attribute("SesSub", "4"); // 1
    RFQReq_0_set.insert("4");
    all_values.push_back(RFQReq_0_set);
    all_compo_names.insert("RFQReq_0_set");

    {
      xml_element Instrmt_65{"Instrmt"};
      multiset<string> Instrmt_65_set;
      Instrmt_65.add_attribute("Sym", "Symbol_t_964622804"); // 2
      Instrmt_65_set.insert("Symbol_t_964622804");
      Instrmt_65.add_attribute("Sfx", "WI"); // 2
      Instrmt_65_set.insert("WI");
      Instrmt_65.add_attribute("ID", "SecurityID_t_169618841"); // 2
      Instrmt_65_set.insert("SecurityID_t_169618841");
      Instrmt_65.add_attribute("Src", "7"); // 2
      Instrmt_65_set.insert("7");
      Instrmt_65.add_attribute("Prod", "3"); // 2
      Instrmt_65_set.insert("3");
      Instrmt_65.add_attribute("ProdCmplx", "ProductComplex_t_626409726"); // 2
      Instrmt_65_set.insert("ProductComplex_t_626409726");
      Instrmt_65.add_attribute("SecGrp", "SecurityGroup_t_115431917"); // 2
      Instrmt_65_set.insert("SecurityGroup_t_115431917");
      Instrmt_65.add_attribute("CFI", "CFICode_t_814721422"); // 2
      Instrmt_65_set.insert("CFICode_t_814721422");
      Instrmt_65.add_attribute("SecTyp", "MT"); // 2
      Instrmt_65_set.insert("MT");
      Instrmt_65.add_attribute("SubTyp", "SecuritySubType_t_1029221821"); // 2
      Instrmt_65_set.insert("SecuritySubType_t_1029221821");
      Instrmt_65.add_attribute("MMY", "718957174"); // 2
      Instrmt_65_set.insert("718957174");
      Instrmt_65.add_attribute("MatDt", "MaturityDate_t_517506218"); // 2
      Instrmt_65_set.insert("MaturityDate_t_517506218");
      Instrmt_65.add_attribute("MatTm", "256456095"); // 2
      Instrmt_65_set.insert("256456095");
      Instrmt_65.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1095412578"); // 2
      Instrmt_65_set.insert("SettleOnOpenFlag_t_1095412578");
      Instrmt_65.add_attribute("AsgnMeth", "962682429"); // 2
      Instrmt_65_set.insert("962682429");
      Instrmt_65.add_attribute("Status", "2"); // 2
      Instrmt_65_set.insert("2");
      Instrmt_65.add_attribute("CpnPmt", "CouponPaymentDate_t_885239799"); // 2
      Instrmt_65_set.insert("CouponPaymentDate_t_885239799");
      Instrmt_65.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_65_set.insert("XR");
      Instrmt_65.add_attribute("Snrty", "SD"); // 2
      Instrmt_65_set.insert("SD");
      Instrmt_65.add_attribute("NotlPctOut", "11660130.330000"); // 2
      Instrmt_65_set.insert("11660130.330000");
      Instrmt_65.add_attribute("OrigNotlPctOut", "20658598.960000"); // 2
      Instrmt_65_set.insert("20658598.960000");
      Instrmt_65.add_attribute("AttchPnt", "4314795.880000"); // 2
      Instrmt_65_set.insert("4314795.880000");
      Instrmt_65.add_attribute("DetchPnt", "8571671.250000"); // 2
      Instrmt_65_set.insert("8571671.250000");
      Instrmt_65.add_attribute("Issued", "IssueDate_t_1785983603"); // 2
      Instrmt_65_set.insert("IssueDate_t_1785983603");
      Instrmt_65.add_attribute("RepoCollSecTyp", "535654774"); // 2
      Instrmt_65_set.insert("535654774");
      Instrmt_65.add_attribute("RepoTrm", "133045205"); // 2
      Instrmt_65_set.insert("133045205");
      Instrmt_65.add_attribute("RepoRt", "4880148.340000"); // 2
      Instrmt_65_set.insert("4880148.340000");
      Instrmt_65.add_attribute("Fctr", "6090008.860000"); // 2
      Instrmt_65_set.insert("6090008.860000");
      Instrmt_65.add_attribute("CrdRtg", "CreditRating_t_403053253"); // 2
      Instrmt_65_set.insert("CreditRating_t_403053253");
      Instrmt_65.add_attribute("Rgstry", "InstrRegistry_t_1496468276"); // 2
      Instrmt_65_set.insert("InstrRegistry_t_1496468276");
      Instrmt_65.add_attribute("IssuCtry", "818909763"); // 2
      Instrmt_65_set.insert("818909763");
      Instrmt_65.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1367676057"); // 2
      Instrmt_65_set.insert("StateOrProvinceOfIssue_t_1367676057");
      Instrmt_65.add_attribute("Lcl", "LocaleOfIssue_t_649084027"); // 2
      Instrmt_65_set.insert("LocaleOfIssue_t_649084027");
      Instrmt_65.add_attribute("Redeem", "RedemptionDate_t_988528605"); // 2
      Instrmt_65_set.insert("RedemptionDate_t_988528605");
      Instrmt_65.add_attribute("StrkPx", "9807181.490000"); // 2
      Instrmt_65_set.insert("9807181.490000");
      Instrmt_65.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_65_set.insert("CHF");
      Instrmt_65.add_attribute("StrkMult", "10961500.660000"); // 2
      Instrmt_65_set.insert("10961500.660000");
      Instrmt_65.add_attribute("StrkValu", "9917599.230000"); // 2
      Instrmt_65_set.insert("9917599.230000");
      Instrmt_65.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_65_set.insert("2");
      Instrmt_65.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_65_set.insert("3");
      Instrmt_65.add_attribute("StrkPxBndryPrcsn", "17107170.970000"); // 2
      Instrmt_65_set.insert("17107170.970000");
      Instrmt_65.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_65_set.insert("4");
      Instrmt_65.add_attribute("OptAt", "234344334"); // 2
      Instrmt_65_set.insert("234344334");
      Instrmt_65.add_attribute("Mult", "6586460.270000"); // 2
      Instrmt_65_set.insert("6586460.270000");
      Instrmt_65.add_attribute("MultTyp", "0"); // 2
      Instrmt_65_set.insert("0");
      Instrmt_65.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_65_set.insert("4");
      Instrmt_65.add_attribute("MinPxIncr", "15438858.260000"); // 2
      Instrmt_65_set.insert("15438858.260000");
      Instrmt_65.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1541538956"); // 2
      Instrmt_65_set.insert("MinPriceIncrementAmount_t_1541538956");
      Instrmt_65.add_attribute("UOM", "Bcf"); // 2
      Instrmt_65_set.insert("Bcf");
      Instrmt_65.add_attribute("UOMQty", "5624152.110000"); // 2
      Instrmt_65_set.insert("5624152.110000");
      Instrmt_65.add_attribute("PxUOM", "lbs"); // 2
      Instrmt_65_set.insert("lbs");
      Instrmt_65.add_attribute("PxUOMQty", "18973866.510000"); // 2
      Instrmt_65_set.insert("18973866.510000");
      Instrmt_65.add_attribute("SettlMeth", "P"); // 2
      Instrmt_65_set.insert("P");
      Instrmt_65.add_attribute("ExerStyle", "1"); // 2
      Instrmt_65_set.insert("1");
      Instrmt_65.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_65_set.insert("1");
      Instrmt_65.add_attribute("OptPayAmt", "OptPayoutAmount_t_1552627542"); // 2
      Instrmt_65_set.insert("OptPayoutAmount_t_1552627542");
      Instrmt_65.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_65_set.insert("INT");
      Instrmt_65.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_65_set.insert("CDSD");
      Instrmt_65.add_attribute("ListMeth", "1"); // 2
      Instrmt_65_set.insert("1");
      Instrmt_65.add_attribute("CapPx", "9354146.220000"); // 2
      Instrmt_65_set.insert("9354146.220000");
      Instrmt_65.add_attribute("FlrPx", "17134684.280000"); // 2
      Instrmt_65_set.insert("17134684.280000");
      Instrmt_65.add_attribute("PutCall", "0"); // 2
      Instrmt_65_set.insert("0");
      Instrmt_65.add_attribute("FlexInd", "false"); // 2
      Instrmt_65_set.insert("false");
      Instrmt_65.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_65_set.insert("false");
      Instrmt_65.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_65_set.insert("Mo");
      Instrmt_65.add_attribute("CpnRt", "17615371.500000"); // 2
      Instrmt_65_set.insert("17615371.500000");
      Instrmt_65.add_attribute("Exch", "SecurityExchange_t_21968068"); // 2
      Instrmt_65_set.insert("SecurityExchange_t_21968068");
      Instrmt_65.add_attribute("PosLmt", "1105257772"); // 2
      Instrmt_65_set.insert("1105257772");
      Instrmt_65.add_attribute("NTPosLmt", "605813425"); // 2
      Instrmt_65_set.insert("605813425");
      Instrmt_65.add_attribute("Issr", "Issuer_t_2088707206"); // 2
      Instrmt_65_set.insert("Issuer_t_2088707206");
      Instrmt_65.add_attribute("EncIssrLen", "1083146011"); // 2
      Instrmt_65_set.insert("1083146011");
      Instrmt_65.add_attribute("EncIssr", "EncodedIssuer_t_169046874"); // 2
      Instrmt_65_set.insert("EncodedIssuer_t_169046874");
      Instrmt_65.add_attribute("Desc", "SecurityDesc_t_377985265"); // 2
      Instrmt_65_set.insert("SecurityDesc_t_377985265");
      Instrmt_65.add_attribute("EncSecDescLen", "1317490346"); // 2
      Instrmt_65_set.insert("1317490346");
      Instrmt_65.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_827692901"); // 2
      Instrmt_65_set.insert("EncodedSecurityDesc_t_827692901");
      Instrmt_65.add_attribute("Pool", "Pool_t_1777429402"); // 2
      Instrmt_65_set.insert("Pool_t_1777429402");
      Instrmt_65.add_attribute("CSetMo", "2060293360"); // 2
      Instrmt_65_set.insert("2060293360");
      Instrmt_65.add_attribute("CPPgm", "1"); // 2
      Instrmt_65_set.insert("1");
      Instrmt_65.add_attribute("CPRegT", "CPRegType_t_1171484710"); // 2
      Instrmt_65_set.insert("CPRegType_t_1171484710");
      Instrmt_65.add_attribute("Dated", "DatedDate_t_1378716775"); // 2
      Instrmt_65_set.insert("DatedDate_t_1378716775");
      Instrmt_65.add_attribute("IntAcrl", "InterestAccrualDate_t_786510291"); // 2
      Instrmt_65_set.insert("InterestAccrualDate_t_786510291");
      all_values.push_back(Instrmt_65_set);
      all_compo_names.insert("Instrmt_65_set");

      {
        xml_element AID_68{"AID"};
        multiset<string> AID_68_set;
        AID_68.add_attribute("AltID", "SecurityAltID_t_483916266"); // 3
        AID_68_set.insert("SecurityAltID_t_483916266");
        AID_68.add_attribute("AltIDSrc", "1"); // 3
        AID_68_set.insert("1");
        all_values.push_back(AID_68_set);
        all_compo_names.insert("AID_68_set");

        Instrmt_65.add_element(AID_68);
      }
      {
        xml_element SecXML_68{"SecXML"};
        multiset<string> SecXML_68_set;
        SecXML_68.add_attribute("Schema", "SecurityXMLSchema_t_58608980"); // 3
        SecXML_68_set.insert("SecurityXMLSchema_t_58608980");
        all_values.push_back(SecXML_68_set);
        all_compo_names.insert("SecXML_68_set");

        Instrmt_65.add_element(SecXML_68);
      }
      {
        xml_element Evnt_68{"Evnt"};
        multiset<string> Evnt_68_set;
        Evnt_68.add_attribute("EventTyp", "6"); // 3
        Evnt_68_set.insert("6");
        Evnt_68.add_attribute("Dt", "EventDate_t_1414177556"); // 3
        Evnt_68_set.insert("EventDate_t_1414177556");
        Evnt_68.add_attribute("Tm", "EventTime_t_1611236522"); // 3
        Evnt_68_set.insert("EventTime_t_1611236522");
        Evnt_68.add_attribute("Px", "10212777.720000"); // 3
        Evnt_68_set.insert("10212777.720000");
        Evnt_68.add_attribute("Txt", "EventText_t_161252573"); // 3
        Evnt_68_set.insert("EventText_t_161252573");
        all_values.push_back(Evnt_68_set);
        all_compo_names.insert("Evnt_68_set");

        Instrmt_65.add_element(Evnt_68);
      }
      {
        xml_element Pty_350{"Pty"};
        multiset<string> Pty_350_set;
        Pty_350.add_attribute("ID", "InstrumentPartyID_t_1419433669"); // 3
        Pty_350_set.insert("InstrumentPartyID_t_1419433669");
        Pty_350.add_attribute("Src", "1"); // 3
        Pty_350_set.insert("1");
        Pty_350.add_attribute("R", "21"); // 3
        Pty_350_set.insert("21");
        all_values.push_back(Pty_350_set);
        all_compo_names.insert("Pty_350_set");

        {
          xml_element Sub_350{"Sub"};
          multiset<string> Sub_350_set;
          Sub_350.add_attribute("ID", "InstrumentPartySubID_t_447823225"); // 4
          Sub_350_set.insert("InstrumentPartySubID_t_447823225");
          Sub_350.add_attribute("Typ", "22"); // 4
          Sub_350_set.insert("22");
          all_values.push_back(Sub_350_set);
          all_compo_names.insert("Sub_350_set");

          Pty_350.add_element(Sub_350);
        }
        Instrmt_65.add_element(Pty_350);
      }
      {
        xml_element CmplxEvnt_65{"CmplxEvnt"};
        multiset<string> CmplxEvnt_65_set;
        CmplxEvnt_65.add_attribute("Typ", "6"); // 3
        CmplxEvnt_65_set.insert("6");
        CmplxEvnt_65.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_456930931"); // 3
        CmplxEvnt_65_set.insert("ComplexOptPayoutAmount_t_456930931");
        CmplxEvnt_65.add_attribute("Px", "10077608.980000"); // 3
        CmplxEvnt_65_set.insert("10077608.980000");
        CmplxEvnt_65.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_65_set.insert("2");
        CmplxEvnt_65.add_attribute("PxBndryPrcsn", "15621887.030000"); // 3
        CmplxEvnt_65_set.insert("15621887.030000");
        CmplxEvnt_65.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_65_set.insert("3");
        CmplxEvnt_65.add_attribute("Cond", "1"); // 3
        CmplxEvnt_65_set.insert("1");
        all_values.push_back(CmplxEvnt_65_set);
        all_compo_names.insert("CmplxEvnt_65_set");

        {
          xml_element EvntDts_65{"EvntDts"};
          multiset<string> EvntDts_65_set;
          EvntDts_65.add_attribute("StartDt", "ComplexEventStartDate_t_497851066"); // 4
          EvntDts_65_set.insert("ComplexEventStartDate_t_497851066");
          EvntDts_65.add_attribute("EndDt", "ComplexEventEndDate_t_1782621198"); // 4
          EvntDts_65_set.insert("ComplexEventEndDate_t_1782621198");
          all_values.push_back(EvntDts_65_set);
          all_compo_names.insert("EvntDts_65_set");

          {
            xml_element EvntTms_65{"EvntTms"};
            multiset<string> EvntTms_65_set;
            EvntTms_65.add_attribute("StartTm", "622927630"); // 5
            EvntTms_65_set.insert("622927630");
            EvntTms_65.add_attribute("EndTm", "1815341412"); // 5
            EvntTms_65_set.insert("1815341412");
            all_values.push_back(EvntTms_65_set);
            all_compo_names.insert("EvntTms_65_set");

            EvntDts_65.add_element(EvntTms_65);
          }
          CmplxEvnt_65.add_element(EvntDts_65);
        }
        Instrmt_65.add_element(CmplxEvnt_65);
      }
      RFQReq_0.add_element(Instrmt_65);
    }
    {
      xml_element Undly_93{"Undly"};
      multiset<string> Undly_93_set;
      Undly_93.add_attribute("Sym", "UnderlyingSymbol_t_462830451"); // 2
      Undly_93_set.insert("UnderlyingSymbol_t_462830451");
      Undly_93.add_attribute("Sfx", "CD"); // 2
      Undly_93_set.insert("CD");
      Undly_93.add_attribute("ID", "UnderlyingSecurityID_t_1728151124"); // 2
      Undly_93_set.insert("UnderlyingSecurityID_t_1728151124");
      Undly_93.add_attribute("Src", "I"); // 2
      Undly_93_set.insert("I");
      Undly_93.add_attribute("Prod", "13"); // 2
      Undly_93_set.insert("13");
      Undly_93.add_attribute("CFI", "UnderlyingCFICode_t_959384251"); // 2
      Undly_93_set.insert("UnderlyingCFICode_t_959384251");
      Undly_93.add_attribute("SecTyp", "FOR"); // 2
      Undly_93_set.insert("FOR");
      Undly_93.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1908274361"); // 2
      Undly_93_set.insert("UnderlyingSecuritySubType_t_1908274361");
      Undly_93.add_attribute("MMY", "2088004030"); // 2
      Undly_93_set.insert("2088004030");
      Undly_93.add_attribute("Mat", "UnderlyingMaturityDate_t_1532044803"); // 2
      Undly_93_set.insert("UnderlyingMaturityDate_t_1532044803");
      Undly_93.add_attribute("MatTm", "1343122139"); // 2
      Undly_93_set.insert("1343122139");
      Undly_93.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1354697938"); // 2
      Undly_93_set.insert("UnderlyingCouponPaymentDate_t_1354697938");
      Undly_93.add_attribute("RestrctTyp", "MM"); // 2
      Undly_93_set.insert("MM");
      Undly_93.add_attribute("Snrty", "SD"); // 2
      Undly_93_set.insert("SD");
      Undly_93.add_attribute("NotlPctOut", "15159505.110000"); // 2
      Undly_93_set.insert("15159505.110000");
      Undly_93.add_attribute("OrigNotlPctOut", "2677476.990000"); // 2
      Undly_93_set.insert("2677476.990000");
      Undly_93.add_attribute("AttchPnt", "261250.090000"); // 2
      Undly_93_set.insert("261250.090000");
      Undly_93.add_attribute("DetchPnt", "12431878.640000"); // 2
      Undly_93_set.insert("12431878.640000");
      Undly_93.add_attribute("Issued", "UnderlyingIssueDate_t_715570925"); // 2
      Undly_93_set.insert("UnderlyingIssueDate_t_715570925");
      Undly_93.add_attribute("RepoCollSecTyp", "1419832405"); // 2
      Undly_93_set.insert("1419832405");
      Undly_93.add_attribute("RepoTrm", "1524938602"); // 2
      Undly_93_set.insert("1524938602");
      Undly_93.add_attribute("RepoRt", "11725018.560000"); // 2
      Undly_93_set.insert("11725018.560000");
      Undly_93.add_attribute("Fctr", "2801096.550000"); // 2
      Undly_93_set.insert("2801096.550000");
      Undly_93.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1828657409"); // 2
      Undly_93_set.insert("UnderlyingCreditRating_t_1828657409");
      Undly_93.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_587206911"); // 2
      Undly_93_set.insert("UnderlyingInstrRegistry_t_587206911");
      Undly_93.add_attribute("Ctry", "1893683978"); // 2
      Undly_93_set.insert("1893683978");
      Undly_93.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2073599773"); // 2
      Undly_93_set.insert("UnderlyingStateOrProvinceOfIssue_t_2073599773");
      Undly_93.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1085057977"); // 2
      Undly_93_set.insert("UnderlyingLocaleOfIssue_t_1085057977");
      Undly_93.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1528821528"); // 2
      Undly_93_set.insert("UnderlyingRedemptionDate_t_1528821528");
      Undly_93.add_attribute("StrkPx", "5490437.550000"); // 2
      Undly_93_set.insert("5490437.550000");
      Undly_93.add_attribute("StrkCcy", "JPY"); // 2
      Undly_93_set.insert("JPY");
      Undly_93.add_attribute("OptA", "801917140"); // 2
      Undly_93_set.insert("801917140");
      Undly_93.add_attribute("Mult", "3335832.180000"); // 2
      Undly_93_set.insert("3335832.180000");
      Undly_93.add_attribute("MultTyp", "2"); // 2
      Undly_93_set.insert("2");
      Undly_93.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_93_set.insert("2");
      Undly_93.add_attribute("UOM", "Bbl"); // 2
      Undly_93_set.insert("Bbl");
      Undly_93.add_attribute("UOMQty", "20045296.860000"); // 2
      Undly_93_set.insert("20045296.860000");
      Undly_93.add_attribute("PxUOM", "Bcf"); // 2
      Undly_93_set.insert("Bcf");
      Undly_93.add_attribute("PxUOMQty", "12334878.520000"); // 2
      Undly_93_set.insert("12334878.520000");
      Undly_93.add_attribute("TmUnit", "Yr"); // 2
      Undly_93_set.insert("Yr");
      Undly_93.add_attribute("ExerStyle", "1"); // 2
      Undly_93_set.insert("1");
      Undly_93.add_attribute("CpnRt", "4407021.420000"); // 2
      Undly_93_set.insert("4407021.420000");
      Undly_93.add_attribute("Exch", "UnderlyingSecurityExchange_t_237404872"); // 2
      Undly_93_set.insert("UnderlyingSecurityExchange_t_237404872");
      Undly_93.add_attribute("Issr", "UnderlyingIssuer_t_1399620703"); // 2
      Undly_93_set.insert("UnderlyingIssuer_t_1399620703");
      Undly_93.add_attribute("EncUndIssrLen", "1956652654"); // 2
      Undly_93_set.insert("1956652654");
      Undly_93.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_505152571"); // 2
      Undly_93_set.insert("EncodedUnderlyingIssuer_t_505152571");
      Undly_93.add_attribute("Desc", "UnderlyingSecurityDesc_t_1425745713"); // 2
      Undly_93_set.insert("UnderlyingSecurityDesc_t_1425745713");
      Undly_93.add_attribute("EncUndSecDescLen", "1052356870"); // 2
      Undly_93_set.insert("1052356870");
      Undly_93.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1220723496"); // 2
      Undly_93_set.insert("EncodedUnderlyingSecurityDesc_t_1220723496");
      Undly_93.add_attribute("CPPgm", "UnderlyingCPProgram_t_698094470"); // 2
      Undly_93_set.insert("UnderlyingCPProgram_t_698094470");
      Undly_93.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_429811825"); // 2
      Undly_93_set.insert("UnderlyingCPRegType_t_429811825");
      Undly_93.add_attribute("AllocPct", "2457417.040000"); // 2
      Undly_93_set.insert("2457417.040000");
      Undly_93.add_attribute("Ccy", "JPY"); // 2
      Undly_93_set.insert("JPY");
      Undly_93.add_attribute("Qty", "8329486.150000"); // 2
      Undly_93_set.insert("8329486.150000");
      Undly_93.add_attribute("SettlTyp", "5"); // 2
      Undly_93_set.insert("5");
      Undly_93.add_attribute("CashAmt", "UnderlyingCashAmount_t_37101711"); // 2
      Undly_93_set.insert("UnderlyingCashAmount_t_37101711");
      Undly_93.add_attribute("CashTyp", "DIFF"); // 2
      Undly_93_set.insert("DIFF");
      Undly_93.add_attribute("Px", "1057423.360000"); // 2
      Undly_93_set.insert("1057423.360000");
      Undly_93.add_attribute("DirtPx", "5861454.670000"); // 2
      Undly_93_set.insert("5861454.670000");
      Undly_93.add_attribute("EndPx", "5234386.870000"); // 2
      Undly_93_set.insert("5234386.870000");
      Undly_93.add_attribute("StartVal", "UnderlyingStartValue_t_2097394316"); // 2
      Undly_93_set.insert("UnderlyingStartValue_t_2097394316");
      Undly_93.add_attribute("CurVal", "UnderlyingCurrentValue_t_1388062607"); // 2
      Undly_93_set.insert("UnderlyingCurrentValue_t_1388062607");
      Undly_93.add_attribute("EndVal", "UnderlyingEndValue_t_857021905"); // 2
      Undly_93_set.insert("UnderlyingEndValue_t_857021905");
      Undly_93.add_attribute("AdjQty", "4810045.310000"); // 2
      Undly_93_set.insert("4810045.310000");
      Undly_93.add_attribute("FxRate", "14668541.940000"); // 2
      Undly_93_set.insert("14668541.940000");
      Undly_93.add_attribute("FxRateCalc", "D"); // 2
      Undly_93_set.insert("D");
      Undly_93.add_attribute("CapValu", "UnderlyingCapValue_t_338050570"); // 2
      Undly_93_set.insert("UnderlyingCapValue_t_338050570");
      Undly_93.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1306436494"); // 2
      Undly_93_set.insert("UnderlyingSettlMethod_t_1306436494");
      Undly_93.add_attribute("PutCall", "1235993579"); // 2
      Undly_93_set.insert("1235993579");
      all_values.push_back(Undly_93_set);
      all_compo_names.insert("Undly_93_set");

      {
        xml_element UndAID_93{"UndAID"};
        multiset<string> UndAID_93_set;
        UndAID_93.add_attribute("AltID", "UnderlyingSecurityAltID_t_1727141412"); // 3
        UndAID_93_set.insert("UnderlyingSecurityAltID_t_1727141412");
        UndAID_93.add_attribute("AltIDSrc", "F"); // 3
        UndAID_93_set.insert("F");
        all_values.push_back(UndAID_93_set);
        all_compo_names.insert("UndAID_93_set");

        Undly_93.add_element(UndAID_93);
      }
      {
        xml_element Stip_149{"Stip"};
        multiset<string> Stip_149_set;
        Stip_149.add_attribute("Typ", "PXSOURCE"); // 3
        Stip_149_set.insert("PXSOURCE");
        Stip_149.add_attribute("Val", "UnderlyingStipValue_t_1964546284"); // 3
        Stip_149_set.insert("UnderlyingStipValue_t_1964546284");
        all_values.push_back(Stip_149_set);
        all_compo_names.insert("Stip_149_set");

        Undly_93.add_element(Stip_149);
      }
      {
        xml_element Pty_351{"Pty"};
        multiset<string> Pty_351_set;
        Pty_351.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1741277990"); // 3
        Pty_351_set.insert("UnderlyingInstrumentPartyID_t_1741277990");
        Pty_351.add_attribute("Src", "9"); // 3
        Pty_351_set.insert("9");
        Pty_351.add_attribute("R", "35"); // 3
        Pty_351_set.insert("35");
        all_values.push_back(Pty_351_set);
        all_compo_names.insert("Pty_351_set");

        {
          xml_element Sub_351{"Sub"};
          multiset<string> Sub_351_set;
          Sub_351.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1019540055"); // 4
          Sub_351_set.insert("UnderlyingInstrumentPartySubID_t_1019540055");
          Sub_351.add_attribute("Typ", "32"); // 4
          Sub_351_set.insert("32");
          all_values.push_back(Sub_351_set);
          all_compo_names.insert("Sub_351_set");

          Pty_351.add_element(Sub_351);
        }
        Undly_93.add_element(Pty_351);
      }
      RFQReq_0.add_element(Undly_93);
    }
    {
      xml_element Leg_79{"Leg"};
      multiset<string> Leg_79_set;
      Leg_79.add_attribute("Sym", "LegSymbol_t_1542938704"); // 2
      Leg_79_set.insert("LegSymbol_t_1542938704");
      Leg_79.add_attribute("Sfx", "WI"); // 2
      Leg_79_set.insert("WI");
      Leg_79.add_attribute("ID", "LegSecurityID_t_820549775"); // 2
      Leg_79_set.insert("LegSecurityID_t_820549775");
      Leg_79.add_attribute("Src", "K"); // 2
      Leg_79_set.insert("K");
      Leg_79.add_attribute("Prod", "1"); // 2
      Leg_79_set.insert("1");
      Leg_79.add_attribute("CFI", "LegCFICode_t_931535361"); // 2
      Leg_79_set.insert("LegCFICode_t_931535361");
      Leg_79.add_attribute("SecTyp", "CPP"); // 2
      Leg_79_set.insert("CPP");
      Leg_79.add_attribute("SecSubTyp", "LegSecuritySubType_t_1272759457"); // 2
      Leg_79_set.insert("LegSecuritySubType_t_1272759457");
      Leg_79.add_attribute("MMY", "968637073"); // 2
      Leg_79_set.insert("968637073");
      Leg_79.add_attribute("Mat", "LegMaturityDate_t_244668321"); // 2
      Leg_79_set.insert("LegMaturityDate_t_244668321");
      Leg_79.add_attribute("MatTm", "1378501793"); // 2
      Leg_79_set.insert("1378501793");
      Leg_79.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1554782540"); // 2
      Leg_79_set.insert("LegCouponPaymentDate_t_1554782540");
      Leg_79.add_attribute("Issued", "LegIssueDate_t_768107008"); // 2
      Leg_79_set.insert("LegIssueDate_t_768107008");
      Leg_79.add_attribute("RepoCollSecTyp", "1328412461"); // 2
      Leg_79_set.insert("1328412461");
      Leg_79.add_attribute("RepoTrm", "795361499"); // 2
      Leg_79_set.insert("795361499");
      Leg_79.add_attribute("RepoRt", "16251289.130000"); // 2
      Leg_79_set.insert("16251289.130000");
      Leg_79.add_attribute("Fctr", "18094169.930000"); // 2
      Leg_79_set.insert("18094169.930000");
      Leg_79.add_attribute("CrdRtg", "LegCreditRating_t_114732045"); // 2
      Leg_79_set.insert("LegCreditRating_t_114732045");
      Leg_79.add_attribute("Rgstry", "LegInstrRegistry_t_1627634641"); // 2
      Leg_79_set.insert("LegInstrRegistry_t_1627634641");
      Leg_79.add_attribute("Ctry", "2147467563"); // 2
      Leg_79_set.insert("2147467563");
      Leg_79.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1421168539"); // 2
      Leg_79_set.insert("LegStateOrProvinceOfIssue_t_1421168539");
      Leg_79.add_attribute("Lcl", "LegLocaleOfIssue_t_716144572"); // 2
      Leg_79_set.insert("LegLocaleOfIssue_t_716144572");
      Leg_79.add_attribute("Redeem", "LegRedemptionDate_t_1727125327"); // 2
      Leg_79_set.insert("LegRedemptionDate_t_1727125327");
      Leg_79.add_attribute("Strk", "17628258.260000"); // 2
      Leg_79_set.insert("17628258.260000");
      Leg_79.add_attribute("StrkCcy", "CHF"); // 2
      Leg_79_set.insert("CHF");
      Leg_79.add_attribute("OptA", "1356620168"); // 2
      Leg_79_set.insert("1356620168");
      Leg_79.add_attribute("Cmult", "17312213.740000"); // 2
      Leg_79_set.insert("17312213.740000");
      Leg_79.add_attribute("MultTyp", "0"); // 2
      Leg_79_set.insert("0");
      Leg_79.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_79_set.insert("0");
      Leg_79.add_attribute("UOM", "tn"); // 2
      Leg_79_set.insert("tn");
      Leg_79.add_attribute("UOMQty", "12618582.260000"); // 2
      Leg_79_set.insert("12618582.260000");
      Leg_79.add_attribute("PxUOM", "MMbbl"); // 2
      Leg_79_set.insert("MMbbl");
      Leg_79.add_attribute("PxUOMQty", "7950254.520000"); // 2
      Leg_79_set.insert("7950254.520000");
      Leg_79.add_attribute("TmUnit", "H"); // 2
      Leg_79_set.insert("H");
      Leg_79.add_attribute("ExerStyle", "2"); // 2
      Leg_79_set.insert("2");
      Leg_79.add_attribute("CpnRt", "17265608.140000"); // 2
      Leg_79_set.insert("17265608.140000");
      Leg_79.add_attribute("Exch", "LegSecurityExchange_t_1377200363"); // 2
      Leg_79_set.insert("LegSecurityExchange_t_1377200363");
      Leg_79.add_attribute("Issr", "LegIssuer_t_1619941911"); // 2
      Leg_79_set.insert("LegIssuer_t_1619941911");
      Leg_79.add_attribute("EncLegIssrLen", "547714239"); // 2
      Leg_79_set.insert("547714239");
      Leg_79.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1621868684"); // 2
      Leg_79_set.insert("EncodedLegIssuer_t_1621868684");
      Leg_79.add_attribute("Desc", "LegSecurityDesc_t_850960057"); // 2
      Leg_79_set.insert("LegSecurityDesc_t_850960057");
      Leg_79.add_attribute("EncLegSecDescLen", "2102496779"); // 2
      Leg_79_set.insert("2102496779");
      Leg_79.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_242492044"); // 2
      Leg_79_set.insert("EncodedLegSecurityDesc_t_242492044");
      Leg_79.add_attribute("RatioQty", "318888.700000"); // 2
      Leg_79_set.insert("318888.700000");
      Leg_79.add_attribute("Side", "7"); // 2
      Leg_79_set.insert("7");
      Leg_79.add_attribute("Ccy", "CHF"); // 2
      Leg_79_set.insert("CHF");
      Leg_79.add_attribute("Pool", "LegPool_t_865106675"); // 2
      Leg_79_set.insert("LegPool_t_865106675");
      Leg_79.add_attribute("Dated", "LegDatedDate_t_1347771950"); // 2
      Leg_79_set.insert("LegDatedDate_t_1347771950");
      Leg_79.add_attribute("CSetMo", "1841289778"); // 2
      Leg_79_set.insert("1841289778");
      Leg_79.add_attribute("IntAcrl", "LegInterestAccrualDate_t_138791566"); // 2
      Leg_79_set.insert("LegInterestAccrualDate_t_138791566");
      Leg_79.add_attribute("PutCall", "2063916523"); // 2
      Leg_79_set.insert("2063916523");
      Leg_79.add_attribute("LegOptionRatio", "14209314.570000"); // 2
      Leg_79_set.insert("14209314.570000");
      Leg_79.add_attribute("Px", "19016173.920000"); // 2
      Leg_79_set.insert("19016173.920000");
      all_values.push_back(Leg_79_set);
      all_compo_names.insert("Leg_79_set");

      {
        xml_element LegAID_76{"LegAID"};
        multiset<string> LegAID_76_set;
        LegAID_76.add_attribute("SecAltID", "LegSecurityAltID_t_161789521"); // 3
        LegAID_76_set.insert("LegSecurityAltID_t_161789521");
        LegAID_76.add_attribute("SecAltIDSrc", "9"); // 3
        LegAID_76_set.insert("9");
        all_values.push_back(LegAID_76_set);
        all_compo_names.insert("LegAID_76_set");

        Leg_79.add_element(LegAID_76);
      }
      RFQReq_0.add_element(Leg_79);
    }
    elt.add_element(RFQReq_0);
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
