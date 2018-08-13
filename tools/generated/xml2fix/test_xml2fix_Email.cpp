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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Email" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Email_message_t_0;
  elt.add_attribute("EmailThreadID", "EmailThreadID_t_816767274"); // 0
  Email_message_t_0.insert("EmailThreadID_t_816767274");
  elt.add_attribute("EmailTyp", "1"); // 0
  Email_message_t_0.insert("1");
  elt.add_attribute("OrigTm", "OrigTime_t_768293186"); // 0
  Email_message_t_0.insert("OrigTime_t_768293186");
  elt.add_attribute("Subject", "Subject_t_107681307"); // 0
  Email_message_t_0.insert("Subject_t_107681307");
  elt.add_attribute("EncSubjectLen", "421398545"); // 0
  Email_message_t_0.insert("421398545");
  elt.add_attribute("EncSubject", "EncodedSubject_t_606671666"); // 0
  Email_message_t_0.insert("EncodedSubject_t_606671666");
  elt.add_attribute("OrdID", "OrderID_t_1800723286"); // 0
  Email_message_t_0.insert("OrderID_t_1800723286");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1737688363"); // 0
  Email_message_t_0.insert("ClOrdID_t_1737688363");
  elt.add_attribute("RawDataLength", "524328978"); // 0
  Email_message_t_0.insert("524328978");
  elt.add_attribute("RawData", "RawData_t_1885289819"); // 0
  Email_message_t_0.insert("RawData_t_1885289819");
  all_values.push_back(Email_message_t_0);
  all_compo_names.insert("Email_message_t");

  { // Hdr
    xml_element Hdr_30{"Hdr"};
    multiset<string> Hdr_30_set;
    Hdr_30.add_attribute("SeqNum", "1496502681"); // 1
    Hdr_30_set.insert("1496502681");
    Hdr_30.add_attribute("SID", "SenderCompID_t_316658906"); // 1
    Hdr_30_set.insert("SenderCompID_t_316658906");
    Hdr_30.add_attribute("TID", "TargetCompID_t_1736525722"); // 1
    Hdr_30_set.insert("TargetCompID_t_1736525722");
    Hdr_30.add_attribute("OBID", "OnBehalfOfCompID_t_797585276"); // 1
    Hdr_30_set.insert("OnBehalfOfCompID_t_797585276");
    Hdr_30.add_attribute("D2ID", "DeliverToCompID_t_124941652"); // 1
    Hdr_30_set.insert("DeliverToCompID_t_124941652");
    Hdr_30.add_attribute("SSub", "SenderSubID_t_1084100244"); // 1
    Hdr_30_set.insert("SenderSubID_t_1084100244");
    Hdr_30.add_attribute("SLoc", "SenderLocationID_t_564538167"); // 1
    Hdr_30_set.insert("SenderLocationID_t_564538167");
    Hdr_30.add_attribute("TSub", "TargetSubID_t_1526554251"); // 1
    Hdr_30_set.insert("TargetSubID_t_1526554251");
    Hdr_30.add_attribute("TLoc", "TargetLocationID_t_1410643722"); // 1
    Hdr_30_set.insert("TargetLocationID_t_1410643722");
    Hdr_30.add_attribute("OBSub", "OnBehalfOfSubID_t_1952119508"); // 1
    Hdr_30_set.insert("OnBehalfOfSubID_t_1952119508");
    Hdr_30.add_attribute("OBLoc", "OnBehalfOfLocationID_t_39543426"); // 1
    Hdr_30_set.insert("OnBehalfOfLocationID_t_39543426");
    Hdr_30.add_attribute("D2Sub", "DeliverToSubID_t_1045723588"); // 1
    Hdr_30_set.insert("DeliverToSubID_t_1045723588");
    Hdr_30.add_attribute("D2Loc", "DeliverToLocationID_t_315382821"); // 1
    Hdr_30_set.insert("DeliverToLocationID_t_315382821");
    Hdr_30.add_attribute("PosDup", "Y"); // 1
    Hdr_30_set.insert("Y");
    Hdr_30.add_attribute("PosRsnd", "N"); // 1
    Hdr_30_set.insert("N");
    Hdr_30.add_attribute("Snt", "SendingTime_t_1096359893"); // 1
    Hdr_30_set.insert("SendingTime_t_1096359893");
    Hdr_30.add_attribute("OrigSnt", "OrigSendingTime_t_842188802"); // 1
    Hdr_30_set.insert("OrigSendingTime_t_842188802");
    Hdr_30.add_attribute("MsgEncd", "MessageEncoding_t_384944806"); // 1
    Hdr_30_set.insert("MessageEncoding_t_384944806");
    all_values.push_back(Hdr_30_set);
    all_compo_names.insert("Hdr_30_set");

    {
      xml_element Hop_30{"Hop"};
      multiset<string> Hop_30_set;
      Hop_30.add_attribute("ID", "HopCompID_t_1904068549"); // 2
      Hop_30_set.insert("HopCompID_t_1904068549");
      Hop_30.add_attribute("Ref", "321008573"); // 2
      Hop_30_set.insert("321008573");
      Hop_30.add_attribute("Snt", "HopSendingTime_t_34034603"); // 2
      Hop_30_set.insert("HopSendingTime_t_34034603");
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
    Rtg_0.add_attribute("RtgID", "RoutingID_t_802327789"); // 1
    Rtg_0_set.insert("RoutingID_t_802327789");
    all_values.push_back(Rtg_0_set);
    all_compo_names.insert("Rtg_0_set");

    elt.add_element(Rtg_0);
  } // end Rtg
  { // Rtg
    xml_element Rtg_1{"Rtg"};
    multiset<string> Rtg_1_set;
    Rtg_1.add_attribute("RtgTyp", "3"); // 1
    Rtg_1_set.insert("3");
    Rtg_1.add_attribute("RtgID", "RoutingID_t_824628735"); // 1
    Rtg_1_set.insert("RoutingID_t_824628735");
    all_values.push_back(Rtg_1_set);
    all_compo_names.insert("Rtg_1_set");

    elt.add_element(Rtg_1);
  } // end Rtg
  { // Rtg
    xml_element Rtg_2{"Rtg"};
    multiset<string> Rtg_2_set;
    Rtg_2.add_attribute("RtgTyp", "4"); // 1
    Rtg_2_set.insert("4");
    Rtg_2.add_attribute("RtgID", "RoutingID_t_334273120"); // 1
    Rtg_2_set.insert("RoutingID_t_334273120");
    all_values.push_back(Rtg_2_set);
    all_compo_names.insert("Rtg_2_set");

    elt.add_element(Rtg_2);
  } // end Rtg
  { // Inst
    xml_element Inst_1{"Inst"};
    {
      xml_element Instrmt_21{"Instrmt"};
      multiset<string> Instrmt_21_set;
      Instrmt_21.add_attribute("Sym", "Symbol_t_1933328434"); // 2
      Instrmt_21_set.insert("Symbol_t_1933328434");
      Instrmt_21.add_attribute("Sfx", "CD"); // 2
      Instrmt_21_set.insert("CD");
      Instrmt_21.add_attribute("ID", "SecurityID_t_1911336132"); // 2
      Instrmt_21_set.insert("SecurityID_t_1911336132");
      Instrmt_21.add_attribute("Src", "H"); // 2
      Instrmt_21_set.insert("H");
      Instrmt_21.add_attribute("Prod", "5"); // 2
      Instrmt_21_set.insert("5");
      Instrmt_21.add_attribute("ProdCmplx", "ProductComplex_t_561437760"); // 2
      Instrmt_21_set.insert("ProductComplex_t_561437760");
      Instrmt_21.add_attribute("SecGrp", "SecurityGroup_t_227445344"); // 2
      Instrmt_21_set.insert("SecurityGroup_t_227445344");
      Instrmt_21.add_attribute("CFI", "CFICode_t_745221610"); // 2
      Instrmt_21_set.insert("CFICode_t_745221610");
      Instrmt_21.add_attribute("SecTyp", "CTB"); // 2
      Instrmt_21_set.insert("CTB");
      Instrmt_21.add_attribute("SubTyp", "SecuritySubType_t_1753999595"); // 2
      Instrmt_21_set.insert("SecuritySubType_t_1753999595");
      Instrmt_21.add_attribute("MMY", "8381685"); // 2
      Instrmt_21_set.insert("8381685");
      Instrmt_21.add_attribute("MatDt", "MaturityDate_t_930611788"); // 2
      Instrmt_21_set.insert("MaturityDate_t_930611788");
      Instrmt_21.add_attribute("MatTm", "1793543022"); // 2
      Instrmt_21_set.insert("1793543022");
      Instrmt_21.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1054105273"); // 2
      Instrmt_21_set.insert("SettleOnOpenFlag_t_1054105273");
      Instrmt_21.add_attribute("AsgnMeth", "1245994609"); // 2
      Instrmt_21_set.insert("1245994609");
      Instrmt_21.add_attribute("Status", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("CpnPmt", "CouponPaymentDate_t_1626326847"); // 2
      Instrmt_21_set.insert("CouponPaymentDate_t_1626326847");
      Instrmt_21.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_21_set.insert("MM");
      Instrmt_21.add_attribute("Snrty", "SD"); // 2
      Instrmt_21_set.insert("SD");
      Instrmt_21.add_attribute("NotlPctOut", "20112716.530000"); // 2
      Instrmt_21_set.insert("20112716.530000");
      Instrmt_21.add_attribute("OrigNotlPctOut", "20989394.030000"); // 2
      Instrmt_21_set.insert("20989394.030000");
      Instrmt_21.add_attribute("AttchPnt", "18955906.130000"); // 2
      Instrmt_21_set.insert("18955906.130000");
      Instrmt_21.add_attribute("DetchPnt", "20453062.570000"); // 2
      Instrmt_21_set.insert("20453062.570000");
      Instrmt_21.add_attribute("Issued", "IssueDate_t_524807930"); // 2
      Instrmt_21_set.insert("IssueDate_t_524807930");
      Instrmt_21.add_attribute("RepoCollSecTyp", "151337155"); // 2
      Instrmt_21_set.insert("151337155");
      Instrmt_21.add_attribute("RepoTrm", "700150398"); // 2
      Instrmt_21_set.insert("700150398");
      Instrmt_21.add_attribute("RepoRt", "12058414.120000"); // 2
      Instrmt_21_set.insert("12058414.120000");
      Instrmt_21.add_attribute("Fctr", "9759658.900000"); // 2
      Instrmt_21_set.insert("9759658.900000");
      Instrmt_21.add_attribute("CrdRtg", "CreditRating_t_2109149854"); // 2
      Instrmt_21_set.insert("CreditRating_t_2109149854");
      Instrmt_21.add_attribute("Rgstry", "InstrRegistry_t_1540114533"); // 2
      Instrmt_21_set.insert("InstrRegistry_t_1540114533");
      Instrmt_21.add_attribute("IssuCtry", "1390799341"); // 2
      Instrmt_21_set.insert("1390799341");
      Instrmt_21.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1894994640"); // 2
      Instrmt_21_set.insert("StateOrProvinceOfIssue_t_1894994640");
      Instrmt_21.add_attribute("Lcl", "LocaleOfIssue_t_1612193825"); // 2
      Instrmt_21_set.insert("LocaleOfIssue_t_1612193825");
      Instrmt_21.add_attribute("Redeem", "RedemptionDate_t_1154651825"); // 2
      Instrmt_21_set.insert("RedemptionDate_t_1154651825");
      Instrmt_21.add_attribute("StrkPx", "19974983.320000"); // 2
      Instrmt_21_set.insert("19974983.320000");
      Instrmt_21.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_21_set.insert("CAN");
      Instrmt_21.add_attribute("StrkMult", "774600.280000"); // 2
      Instrmt_21_set.insert("774600.280000");
      Instrmt_21.add_attribute("StrkValu", "20185368.020000"); // 2
      Instrmt_21_set.insert("20185368.020000");
      Instrmt_21.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_21_set.insert("5");
      Instrmt_21.add_attribute("StrkPxBndryPrcsn", "20269184.870000"); // 2
      Instrmt_21_set.insert("20269184.870000");
      Instrmt_21.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("OptAt", "1477518998"); // 2
      Instrmt_21_set.insert("1477518998");
      Instrmt_21.add_attribute("Mult", "9335401.120000"); // 2
      Instrmt_21_set.insert("9335401.120000");
      Instrmt_21.add_attribute("MultTyp", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("MinPxIncr", "4123833.110000"); // 2
      Instrmt_21_set.insert("4123833.110000");
      Instrmt_21.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_918575468"); // 2
      Instrmt_21_set.insert("MinPriceIncrementAmount_t_918575468");
      Instrmt_21.add_attribute("UOM", "tn"); // 2
      Instrmt_21_set.insert("tn");
      Instrmt_21.add_attribute("UOMQty", "2761713.160000"); // 2
      Instrmt_21_set.insert("2761713.160000");
      Instrmt_21.add_attribute("PxUOM", "USD"); // 2
      Instrmt_21_set.insert("USD");
      Instrmt_21.add_attribute("PxUOMQty", "13851175.930000"); // 2
      Instrmt_21_set.insert("13851175.930000");
      Instrmt_21.add_attribute("SettlMeth", "P"); // 2
      Instrmt_21_set.insert("P");
      Instrmt_21.add_attribute("ExerStyle", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_21_set.insert("3");
      Instrmt_21.add_attribute("OptPayAmt", "OptPayoutAmount_t_874144324"); // 2
      Instrmt_21_set.insert("OptPayoutAmount_t_874144324");
      Instrmt_21.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_21_set.insert("INT");
      Instrmt_21.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_21_set.insert("FUT");
      Instrmt_21.add_attribute("ListMeth", "0"); // 2
      Instrmt_21_set.insert("0");
      Instrmt_21.add_attribute("CapPx", "19933114.510000"); // 2
      Instrmt_21_set.insert("19933114.510000");
      Instrmt_21.add_attribute("FlrPx", "17557363.320000"); // 2
      Instrmt_21_set.insert("17557363.320000");
      Instrmt_21.add_attribute("PutCall", "0"); // 2
      Instrmt_21_set.insert("0");
      Instrmt_21.add_attribute("FlexInd", "true"); // 2
      Instrmt_21_set.insert("true");
      Instrmt_21.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_21_set.insert("false");
      Instrmt_21.add_attribute("TmUnit", "H"); // 2
      Instrmt_21_set.insert("H");
      Instrmt_21.add_attribute("CpnRt", "5838531.710000"); // 2
      Instrmt_21_set.insert("5838531.710000");
      Instrmt_21.add_attribute("Exch", "SecurityExchange_t_331510446"); // 2
      Instrmt_21_set.insert("SecurityExchange_t_331510446");
      Instrmt_21.add_attribute("PosLmt", "510796234"); // 2
      Instrmt_21_set.insert("510796234");
      Instrmt_21.add_attribute("NTPosLmt", "454906325"); // 2
      Instrmt_21_set.insert("454906325");
      Instrmt_21.add_attribute("Issr", "Issuer_t_1026092312"); // 2
      Instrmt_21_set.insert("Issuer_t_1026092312");
      Instrmt_21.add_attribute("EncIssrLen", "194772210"); // 2
      Instrmt_21_set.insert("194772210");
      Instrmt_21.add_attribute("EncIssr", "EncodedIssuer_t_334341164"); // 2
      Instrmt_21_set.insert("EncodedIssuer_t_334341164");
      Instrmt_21.add_attribute("Desc", "SecurityDesc_t_503802317"); // 2
      Instrmt_21_set.insert("SecurityDesc_t_503802317");
      Instrmt_21.add_attribute("EncSecDescLen", "1672291208"); // 2
      Instrmt_21_set.insert("1672291208");
      Instrmt_21.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1267881276"); // 2
      Instrmt_21_set.insert("EncodedSecurityDesc_t_1267881276");
      Instrmt_21.add_attribute("Pool", "Pool_t_1227506932"); // 2
      Instrmt_21_set.insert("Pool_t_1227506932");
      Instrmt_21.add_attribute("CSetMo", "1734719796"); // 2
      Instrmt_21_set.insert("1734719796");
      Instrmt_21.add_attribute("CPPgm", "99"); // 2
      Instrmt_21_set.insert("99");
      Instrmt_21.add_attribute("CPRegT", "CPRegType_t_2146082400"); // 2
      Instrmt_21_set.insert("CPRegType_t_2146082400");
      Instrmt_21.add_attribute("Dated", "DatedDate_t_1224246775"); // 2
      Instrmt_21_set.insert("DatedDate_t_1224246775");
      Instrmt_21.add_attribute("IntAcrl", "InterestAccrualDate_t_1956435904"); // 2
      Instrmt_21_set.insert("InterestAccrualDate_t_1956435904");
      all_values.push_back(Instrmt_21_set);
      all_compo_names.insert("Instrmt_21_set");

      {
        xml_element AID_24{"AID"};
        multiset<string> AID_24_set;
        AID_24.add_attribute("AltID", "SecurityAltID_t_868629976"); // 3
        AID_24_set.insert("SecurityAltID_t_868629976");
        AID_24.add_attribute("AltIDSrc", "5"); // 3
        AID_24_set.insert("5");
        all_values.push_back(AID_24_set);
        all_compo_names.insert("AID_24_set");

        Instrmt_21.add_element(AID_24);
      }
      {
        xml_element SecXML_24{"SecXML"};
        multiset<string> SecXML_24_set;
        SecXML_24.add_attribute("Schema", "SecurityXMLSchema_t_2130429829"); // 3
        SecXML_24_set.insert("SecurityXMLSchema_t_2130429829");
        all_values.push_back(SecXML_24_set);
        all_compo_names.insert("SecXML_24_set");

        Instrmt_21.add_element(SecXML_24);
      }
      {
        xml_element Evnt_24{"Evnt"};
        multiset<string> Evnt_24_set;
        Evnt_24.add_attribute("EventTyp", "2"); // 3
        Evnt_24_set.insert("2");
        Evnt_24.add_attribute("Dt", "EventDate_t_1998335469"); // 3
        Evnt_24_set.insert("EventDate_t_1998335469");
        Evnt_24.add_attribute("Tm", "EventTime_t_857090505"); // 3
        Evnt_24_set.insert("EventTime_t_857090505");
        Evnt_24.add_attribute("Px", "5691823.990000"); // 3
        Evnt_24_set.insert("5691823.990000");
        Evnt_24.add_attribute("Txt", "EventText_t_215788812"); // 3
        Evnt_24_set.insert("EventText_t_215788812");
        all_values.push_back(Evnt_24_set);
        all_compo_names.insert("Evnt_24_set");

        Instrmt_21.add_element(Evnt_24);
      }
      {
        xml_element Pty_142{"Pty"};
        multiset<string> Pty_142_set;
        Pty_142.add_attribute("ID", "InstrumentPartyID_t_1692901035"); // 3
        Pty_142_set.insert("InstrumentPartyID_t_1692901035");
        Pty_142.add_attribute("Src", "7"); // 3
        Pty_142_set.insert("7");
        Pty_142.add_attribute("R", "9"); // 3
        Pty_142_set.insert("9");
        all_values.push_back(Pty_142_set);
        all_compo_names.insert("Pty_142_set");

        {
          xml_element Sub_142{"Sub"};
          multiset<string> Sub_142_set;
          Sub_142.add_attribute("ID", "InstrumentPartySubID_t_128738909"); // 4
          Sub_142_set.insert("InstrumentPartySubID_t_128738909");
          Sub_142.add_attribute("Typ", "19"); // 4
          Sub_142_set.insert("19");
          all_values.push_back(Sub_142_set);
          all_compo_names.insert("Sub_142_set");

          Pty_142.add_element(Sub_142);
        }
        Instrmt_21.add_element(Pty_142);
      }
      {
        xml_element CmplxEvnt_21{"CmplxEvnt"};
        multiset<string> CmplxEvnt_21_set;
        CmplxEvnt_21.add_attribute("Typ", "8"); // 3
        CmplxEvnt_21_set.insert("8");
        CmplxEvnt_21.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_562075115"); // 3
        CmplxEvnt_21_set.insert("ComplexOptPayoutAmount_t_562075115");
        CmplxEvnt_21.add_attribute("Px", "3094013.540000"); // 3
        CmplxEvnt_21_set.insert("3094013.540000");
        CmplxEvnt_21.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_21_set.insert("2");
        CmplxEvnt_21.add_attribute("PxBndryPrcsn", "10728713.500000"); // 3
        CmplxEvnt_21_set.insert("10728713.500000");
        CmplxEvnt_21.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_21_set.insert("2");
        CmplxEvnt_21.add_attribute("Cond", "2"); // 3
        CmplxEvnt_21_set.insert("2");
        all_values.push_back(CmplxEvnt_21_set);
        all_compo_names.insert("CmplxEvnt_21_set");

        {
          xml_element EvntDts_21{"EvntDts"};
          multiset<string> EvntDts_21_set;
          EvntDts_21.add_attribute("StartDt", "ComplexEventStartDate_t_1267643560"); // 4
          EvntDts_21_set.insert("ComplexEventStartDate_t_1267643560");
          EvntDts_21.add_attribute("EndDt", "ComplexEventEndDate_t_1098648844"); // 4
          EvntDts_21_set.insert("ComplexEventEndDate_t_1098648844");
          all_values.push_back(EvntDts_21_set);
          all_compo_names.insert("EvntDts_21_set");

          {
            xml_element EvntTms_21{"EvntTms"};
            multiset<string> EvntTms_21_set;
            EvntTms_21.add_attribute("StartTm", "300867433"); // 5
            EvntTms_21_set.insert("300867433");
            EvntTms_21.add_attribute("EndTm", "792451121"); // 5
            EvntTms_21_set.insert("792451121");
            all_values.push_back(EvntTms_21_set);
            all_compo_names.insert("EvntTms_21_set");

            EvntDts_21.add_element(EvntTms_21);
          }
          CmplxEvnt_21.add_element(EvntDts_21);
        }
        Instrmt_21.add_element(CmplxEvnt_21);
      }
      Inst_1.add_element(Instrmt_21);
    }
    elt.add_element(Inst_1);
  } // end Inst
  { // Inst
    xml_element Inst_2{"Inst"};
    {
      xml_element Instrmt_22{"Instrmt"};
      multiset<string> Instrmt_22_set;
      Instrmt_22.add_attribute("Sym", "Symbol_t_219046472"); // 2
      Instrmt_22_set.insert("Symbol_t_219046472");
      Instrmt_22.add_attribute("Sfx", "WI"); // 2
      Instrmt_22_set.insert("WI");
      Instrmt_22.add_attribute("ID", "SecurityID_t_379687269"); // 2
      Instrmt_22_set.insert("SecurityID_t_379687269");
      Instrmt_22.add_attribute("Src", "K"); // 2
      Instrmt_22_set.insert("K");
      Instrmt_22.add_attribute("Prod", "4"); // 2
      Instrmt_22_set.insert("4");
      Instrmt_22.add_attribute("ProdCmplx", "ProductComplex_t_1603934044"); // 2
      Instrmt_22_set.insert("ProductComplex_t_1603934044");
      Instrmt_22.add_attribute("SecGrp", "SecurityGroup_t_1708263316"); // 2
      Instrmt_22_set.insert("SecurityGroup_t_1708263316");
      Instrmt_22.add_attribute("CFI", "CFICode_t_248119445"); // 2
      Instrmt_22_set.insert("CFICode_t_248119445");
      Instrmt_22.add_attribute("SecTyp", "XLINKD"); // 2
      Instrmt_22_set.insert("XLINKD");
      Instrmt_22.add_attribute("SubTyp", "SecuritySubType_t_1691209497"); // 2
      Instrmt_22_set.insert("SecuritySubType_t_1691209497");
      Instrmt_22.add_attribute("MMY", "364104927"); // 2
      Instrmt_22_set.insert("364104927");
      Instrmt_22.add_attribute("MatDt", "MaturityDate_t_1916666586"); // 2
      Instrmt_22_set.insert("MaturityDate_t_1916666586");
      Instrmt_22.add_attribute("MatTm", "400816355"); // 2
      Instrmt_22_set.insert("400816355");
      Instrmt_22.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_933287326"); // 2
      Instrmt_22_set.insert("SettleOnOpenFlag_t_933287326");
      Instrmt_22.add_attribute("AsgnMeth", "2132455398"); // 2
      Instrmt_22_set.insert("2132455398");
      Instrmt_22.add_attribute("Status", "1"); // 2
      Instrmt_22_set.insert("1");
      Instrmt_22.add_attribute("CpnPmt", "CouponPaymentDate_t_1348297529"); // 2
      Instrmt_22_set.insert("CouponPaymentDate_t_1348297529");
      Instrmt_22.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_22_set.insert("MM");
      Instrmt_22.add_attribute("Snrty", "SD"); // 2
      Instrmt_22_set.insert("SD");
      Instrmt_22.add_attribute("NotlPctOut", "10738457.110000"); // 2
      Instrmt_22_set.insert("10738457.110000");
      Instrmt_22.add_attribute("OrigNotlPctOut", "3959592.510000"); // 2
      Instrmt_22_set.insert("3959592.510000");
      Instrmt_22.add_attribute("AttchPnt", "6370477.670000"); // 2
      Instrmt_22_set.insert("6370477.670000");
      Instrmt_22.add_attribute("DetchPnt", "13832470.650000"); // 2
      Instrmt_22_set.insert("13832470.650000");
      Instrmt_22.add_attribute("Issued", "IssueDate_t_1314415702"); // 2
      Instrmt_22_set.insert("IssueDate_t_1314415702");
      Instrmt_22.add_attribute("RepoCollSecTyp", "1709919117"); // 2
      Instrmt_22_set.insert("1709919117");
      Instrmt_22.add_attribute("RepoTrm", "71097"); // 2
      Instrmt_22_set.insert("71097");
      Instrmt_22.add_attribute("RepoRt", "11114808.180000"); // 2
      Instrmt_22_set.insert("11114808.180000");
      Instrmt_22.add_attribute("Fctr", "8300790.300000"); // 2
      Instrmt_22_set.insert("8300790.300000");
      Instrmt_22.add_attribute("CrdRtg", "CreditRating_t_1098719941"); // 2
      Instrmt_22_set.insert("CreditRating_t_1098719941");
      Instrmt_22.add_attribute("Rgstry", "InstrRegistry_t_1412348251"); // 2
      Instrmt_22_set.insert("InstrRegistry_t_1412348251");
      Instrmt_22.add_attribute("IssuCtry", "1622530151"); // 2
      Instrmt_22_set.insert("1622530151");
      Instrmt_22.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1317766413"); // 2
      Instrmt_22_set.insert("StateOrProvinceOfIssue_t_1317766413");
      Instrmt_22.add_attribute("Lcl", "LocaleOfIssue_t_793238968"); // 2
      Instrmt_22_set.insert("LocaleOfIssue_t_793238968");
      Instrmt_22.add_attribute("Redeem", "RedemptionDate_t_2002217420"); // 2
      Instrmt_22_set.insert("RedemptionDate_t_2002217420");
      Instrmt_22.add_attribute("StrkPx", "10695938.250000"); // 2
      Instrmt_22_set.insert("10695938.250000");
      Instrmt_22.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_22_set.insert("JPY");
      Instrmt_22.add_attribute("StrkMult", "6303734.930000"); // 2
      Instrmt_22_set.insert("6303734.930000");
      Instrmt_22.add_attribute("StrkValu", "4208478.830000"); // 2
      Instrmt_22_set.insert("4208478.830000");
      Instrmt_22.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_22_set.insert("2");
      Instrmt_22.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_22_set.insert("4");
      Instrmt_22.add_attribute("StrkPxBndryPrcsn", "7849528.100000"); // 2
      Instrmt_22_set.insert("7849528.100000");
      Instrmt_22.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_22_set.insert("4");
      Instrmt_22.add_attribute("OptAt", "574915698"); // 2
      Instrmt_22_set.insert("574915698");
      Instrmt_22.add_attribute("Mult", "17182401.360000"); // 2
      Instrmt_22_set.insert("17182401.360000");
      Instrmt_22.add_attribute("MultTyp", "0"); // 2
      Instrmt_22_set.insert("0");
      Instrmt_22.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_22_set.insert("0");
      Instrmt_22.add_attribute("MinPxIncr", "9190540.170000"); // 2
      Instrmt_22_set.insert("9190540.170000");
      Instrmt_22.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_940166867"); // 2
      Instrmt_22_set.insert("MinPriceIncrementAmount_t_940166867");
      Instrmt_22.add_attribute("UOM", "lbs"); // 2
      Instrmt_22_set.insert("lbs");
      Instrmt_22.add_attribute("UOMQty", "19928997.290000"); // 2
      Instrmt_22_set.insert("19928997.290000");
      Instrmt_22.add_attribute("PxUOM", "Bbl"); // 2
      Instrmt_22_set.insert("Bbl");
      Instrmt_22.add_attribute("PxUOMQty", "12331698.600000"); // 2
      Instrmt_22_set.insert("12331698.600000");
      Instrmt_22.add_attribute("SettlMeth", "C"); // 2
      Instrmt_22_set.insert("C");
      Instrmt_22.add_attribute("ExerStyle", "2"); // 2
      Instrmt_22_set.insert("2");
      Instrmt_22.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_22_set.insert("2");
      Instrmt_22.add_attribute("OptPayAmt", "OptPayoutAmount_t_1228734243"); // 2
      Instrmt_22_set.insert("OptPayoutAmount_t_1228734243");
      Instrmt_22.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_22_set.insert("PCTPAR");
      Instrmt_22.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_22_set.insert("CDSD");
      Instrmt_22.add_attribute("ListMeth", "0"); // 2
      Instrmt_22_set.insert("0");
      Instrmt_22.add_attribute("CapPx", "8794035.940000"); // 2
      Instrmt_22_set.insert("8794035.940000");
      Instrmt_22.add_attribute("FlrPx", "11007308.620000"); // 2
      Instrmt_22_set.insert("11007308.620000");
      Instrmt_22.add_attribute("PutCall", "0"); // 2
      Instrmt_22_set.insert("0");
      Instrmt_22.add_attribute("FlexInd", "true"); // 2
      Instrmt_22_set.insert("true");
      Instrmt_22.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_22_set.insert("true");
      Instrmt_22.add_attribute("TmUnit", "S"); // 2
      Instrmt_22_set.insert("S");
      Instrmt_22.add_attribute("CpnRt", "18453709.990000"); // 2
      Instrmt_22_set.insert("18453709.990000");
      Instrmt_22.add_attribute("Exch", "SecurityExchange_t_266648803"); // 2
      Instrmt_22_set.insert("SecurityExchange_t_266648803");
      Instrmt_22.add_attribute("PosLmt", "1050220621"); // 2
      Instrmt_22_set.insert("1050220621");
      Instrmt_22.add_attribute("NTPosLmt", "118735234"); // 2
      Instrmt_22_set.insert("118735234");
      Instrmt_22.add_attribute("Issr", "Issuer_t_1643647736"); // 2
      Instrmt_22_set.insert("Issuer_t_1643647736");
      Instrmt_22.add_attribute("EncIssrLen", "1224319964"); // 2
      Instrmt_22_set.insert("1224319964");
      Instrmt_22.add_attribute("EncIssr", "EncodedIssuer_t_903688044"); // 2
      Instrmt_22_set.insert("EncodedIssuer_t_903688044");
      Instrmt_22.add_attribute("Desc", "SecurityDesc_t_642345960"); // 2
      Instrmt_22_set.insert("SecurityDesc_t_642345960");
      Instrmt_22.add_attribute("EncSecDescLen", "1799235662"); // 2
      Instrmt_22_set.insert("1799235662");
      Instrmt_22.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_474444533"); // 2
      Instrmt_22_set.insert("EncodedSecurityDesc_t_474444533");
      Instrmt_22.add_attribute("Pool", "Pool_t_1773499581"); // 2
      Instrmt_22_set.insert("Pool_t_1773499581");
      Instrmt_22.add_attribute("CSetMo", "172901454"); // 2
      Instrmt_22_set.insert("172901454");
      Instrmt_22.add_attribute("CPPgm", "99"); // 2
      Instrmt_22_set.insert("99");
      Instrmt_22.add_attribute("CPRegT", "CPRegType_t_566182801"); // 2
      Instrmt_22_set.insert("CPRegType_t_566182801");
      Instrmt_22.add_attribute("Dated", "DatedDate_t_769023547"); // 2
      Instrmt_22_set.insert("DatedDate_t_769023547");
      Instrmt_22.add_attribute("IntAcrl", "InterestAccrualDate_t_1238914631"); // 2
      Instrmt_22_set.insert("InterestAccrualDate_t_1238914631");
      all_values.push_back(Instrmt_22_set);
      all_compo_names.insert("Instrmt_22_set");

      {
        xml_element AID_25{"AID"};
        multiset<string> AID_25_set;
        AID_25.add_attribute("AltID", "SecurityAltID_t_1902308919"); // 3
        AID_25_set.insert("SecurityAltID_t_1902308919");
        AID_25.add_attribute("AltIDSrc", "6"); // 3
        AID_25_set.insert("6");
        all_values.push_back(AID_25_set);
        all_compo_names.insert("AID_25_set");

        Instrmt_22.add_element(AID_25);
      }
      {
        xml_element SecXML_25{"SecXML"};
        multiset<string> SecXML_25_set;
        SecXML_25.add_attribute("Schema", "SecurityXMLSchema_t_320094130"); // 3
        SecXML_25_set.insert("SecurityXMLSchema_t_320094130");
        all_values.push_back(SecXML_25_set);
        all_compo_names.insert("SecXML_25_set");

        Instrmt_22.add_element(SecXML_25);
      }
      {
        xml_element Evnt_25{"Evnt"};
        multiset<string> Evnt_25_set;
        Evnt_25.add_attribute("EventTyp", "99"); // 3
        Evnt_25_set.insert("99");
        Evnt_25.add_attribute("Dt", "EventDate_t_650315088"); // 3
        Evnt_25_set.insert("EventDate_t_650315088");
        Evnt_25.add_attribute("Tm", "EventTime_t_1548828373"); // 3
        Evnt_25_set.insert("EventTime_t_1548828373");
        Evnt_25.add_attribute("Px", "18724224.350000"); // 3
        Evnt_25_set.insert("18724224.350000");
        Evnt_25.add_attribute("Txt", "EventText_t_128515800"); // 3
        Evnt_25_set.insert("EventText_t_128515800");
        all_values.push_back(Evnt_25_set);
        all_compo_names.insert("Evnt_25_set");

        Instrmt_22.add_element(Evnt_25);
      }
      {
        xml_element Pty_143{"Pty"};
        multiset<string> Pty_143_set;
        Pty_143.add_attribute("ID", "InstrumentPartyID_t_1728798910"); // 3
        Pty_143_set.insert("InstrumentPartyID_t_1728798910");
        Pty_143.add_attribute("Src", "E"); // 3
        Pty_143_set.insert("E");
        Pty_143.add_attribute("R", "72"); // 3
        Pty_143_set.insert("72");
        all_values.push_back(Pty_143_set);
        all_compo_names.insert("Pty_143_set");

        {
          xml_element Sub_143{"Sub"};
          multiset<string> Sub_143_set;
          Sub_143.add_attribute("ID", "InstrumentPartySubID_t_1079052212"); // 4
          Sub_143_set.insert("InstrumentPartySubID_t_1079052212");
          Sub_143.add_attribute("Typ", "6"); // 4
          Sub_143_set.insert("6");
          all_values.push_back(Sub_143_set);
          all_compo_names.insert("Sub_143_set");

          Pty_143.add_element(Sub_143);
        }
        Instrmt_22.add_element(Pty_143);
      }
      {
        xml_element CmplxEvnt_22{"CmplxEvnt"};
        multiset<string> CmplxEvnt_22_set;
        CmplxEvnt_22.add_attribute("Typ", "5"); // 3
        CmplxEvnt_22_set.insert("5");
        CmplxEvnt_22.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1498899339"); // 3
        CmplxEvnt_22_set.insert("ComplexOptPayoutAmount_t_1498899339");
        CmplxEvnt_22.add_attribute("Px", "19748722.950000"); // 3
        CmplxEvnt_22_set.insert("19748722.950000");
        CmplxEvnt_22.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_22_set.insert("3");
        CmplxEvnt_22.add_attribute("PxBndryPrcsn", "4016363.120000"); // 3
        CmplxEvnt_22_set.insert("4016363.120000");
        CmplxEvnt_22.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_22_set.insert("2");
        CmplxEvnt_22.add_attribute("Cond", "1"); // 3
        CmplxEvnt_22_set.insert("1");
        all_values.push_back(CmplxEvnt_22_set);
        all_compo_names.insert("CmplxEvnt_22_set");

        {
          xml_element EvntDts_22{"EvntDts"};
          multiset<string> EvntDts_22_set;
          EvntDts_22.add_attribute("StartDt", "ComplexEventStartDate_t_1625956276"); // 4
          EvntDts_22_set.insert("ComplexEventStartDate_t_1625956276");
          EvntDts_22.add_attribute("EndDt", "ComplexEventEndDate_t_849811926"); // 4
          EvntDts_22_set.insert("ComplexEventEndDate_t_849811926");
          all_values.push_back(EvntDts_22_set);
          all_compo_names.insert("EvntDts_22_set");

          {
            xml_element EvntTms_22{"EvntTms"};
            multiset<string> EvntTms_22_set;
            EvntTms_22.add_attribute("StartTm", "442386500"); // 5
            EvntTms_22_set.insert("442386500");
            EvntTms_22.add_attribute("EndTm", "1277708290"); // 5
            EvntTms_22_set.insert("1277708290");
            all_values.push_back(EvntTms_22_set);
            all_compo_names.insert("EvntTms_22_set");

            EvntDts_22.add_element(EvntTms_22);
          }
          CmplxEvnt_22.add_element(EvntDts_22);
        }
        Instrmt_22.add_element(CmplxEvnt_22);
      }
      Inst_2.add_element(Instrmt_22);
    }
    elt.add_element(Inst_2);
  } // end Inst
  { // Inst
    xml_element Inst_3{"Inst"};
    {
      xml_element Instrmt_23{"Instrmt"};
      multiset<string> Instrmt_23_set;
      Instrmt_23.add_attribute("Sym", "Symbol_t_1324256459"); // 2
      Instrmt_23_set.insert("Symbol_t_1324256459");
      Instrmt_23.add_attribute("Sfx", "CD"); // 2
      Instrmt_23_set.insert("CD");
      Instrmt_23.add_attribute("ID", "SecurityID_t_1450609745"); // 2
      Instrmt_23_set.insert("SecurityID_t_1450609745");
      Instrmt_23.add_attribute("Src", "C"); // 2
      Instrmt_23_set.insert("C");
      Instrmt_23.add_attribute("Prod", "8"); // 2
      Instrmt_23_set.insert("8");
      Instrmt_23.add_attribute("ProdCmplx", "ProductComplex_t_72149644"); // 2
      Instrmt_23_set.insert("ProductComplex_t_72149644");
      Instrmt_23.add_attribute("SecGrp", "SecurityGroup_t_1809185993"); // 2
      Instrmt_23_set.insert("SecurityGroup_t_1809185993");
      Instrmt_23.add_attribute("CFI", "CFICode_t_389410506"); // 2
      Instrmt_23_set.insert("CFICode_t_389410506");
      Instrmt_23.add_attribute("SecTyp", "MTN"); // 2
      Instrmt_23_set.insert("MTN");
      Instrmt_23.add_attribute("SubTyp", "SecuritySubType_t_2129280123"); // 2
      Instrmt_23_set.insert("SecuritySubType_t_2129280123");
      Instrmt_23.add_attribute("MMY", "647293951"); // 2
      Instrmt_23_set.insert("647293951");
      Instrmt_23.add_attribute("MatDt", "MaturityDate_t_577174491"); // 2
      Instrmt_23_set.insert("MaturityDate_t_577174491");
      Instrmt_23.add_attribute("MatTm", "1530624848"); // 2
      Instrmt_23_set.insert("1530624848");
      Instrmt_23.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_372232738"); // 2
      Instrmt_23_set.insert("SettleOnOpenFlag_t_372232738");
      Instrmt_23.add_attribute("AsgnMeth", "705690291"); // 2
      Instrmt_23_set.insert("705690291");
      Instrmt_23.add_attribute("Status", "1"); // 2
      Instrmt_23_set.insert("1");
      Instrmt_23.add_attribute("CpnPmt", "CouponPaymentDate_t_976575120"); // 2
      Instrmt_23_set.insert("CouponPaymentDate_t_976575120");
      Instrmt_23.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_23_set.insert("MM");
      Instrmt_23.add_attribute("Snrty", "SR"); // 2
      Instrmt_23_set.insert("SR");
      Instrmt_23.add_attribute("NotlPctOut", "11060764.150000"); // 2
      Instrmt_23_set.insert("11060764.150000");
      Instrmt_23.add_attribute("OrigNotlPctOut", "19721646.030000"); // 2
      Instrmt_23_set.insert("19721646.030000");
      Instrmt_23.add_attribute("AttchPnt", "15424080.140000"); // 2
      Instrmt_23_set.insert("15424080.140000");
      Instrmt_23.add_attribute("DetchPnt", "9334650.620000"); // 2
      Instrmt_23_set.insert("9334650.620000");
      Instrmt_23.add_attribute("Issued", "IssueDate_t_128557407"); // 2
      Instrmt_23_set.insert("IssueDate_t_128557407");
      Instrmt_23.add_attribute("RepoCollSecTyp", "1944044326"); // 2
      Instrmt_23_set.insert("1944044326");
      Instrmt_23.add_attribute("RepoTrm", "879588944"); // 2
      Instrmt_23_set.insert("879588944");
      Instrmt_23.add_attribute("RepoRt", "20760815.950000"); // 2
      Instrmt_23_set.insert("20760815.950000");
      Instrmt_23.add_attribute("Fctr", "14225169.550000"); // 2
      Instrmt_23_set.insert("14225169.550000");
      Instrmt_23.add_attribute("CrdRtg", "CreditRating_t_1729400870"); // 2
      Instrmt_23_set.insert("CreditRating_t_1729400870");
      Instrmt_23.add_attribute("Rgstry", "InstrRegistry_t_370984448"); // 2
      Instrmt_23_set.insert("InstrRegistry_t_370984448");
      Instrmt_23.add_attribute("IssuCtry", "552741597"); // 2
      Instrmt_23_set.insert("552741597");
      Instrmt_23.add_attribute("StPrv", "StateOrProvinceOfIssue_t_906173681"); // 2
      Instrmt_23_set.insert("StateOrProvinceOfIssue_t_906173681");
      Instrmt_23.add_attribute("Lcl", "LocaleOfIssue_t_439386882"); // 2
      Instrmt_23_set.insert("LocaleOfIssue_t_439386882");
      Instrmt_23.add_attribute("Redeem", "RedemptionDate_t_2003351342"); // 2
      Instrmt_23_set.insert("RedemptionDate_t_2003351342");
      Instrmt_23.add_attribute("StrkPx", "14764450.420000"); // 2
      Instrmt_23_set.insert("14764450.420000");
      Instrmt_23.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_23_set.insert("USD");
      Instrmt_23.add_attribute("StrkMult", "11381473.870000"); // 2
      Instrmt_23_set.insert("11381473.870000");
      Instrmt_23.add_attribute("StrkValu", "14633826.230000"); // 2
      Instrmt_23_set.insert("14633826.230000");
      Instrmt_23.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_23_set.insert("2");
      Instrmt_23.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_23_set.insert("3");
      Instrmt_23.add_attribute("StrkPxBndryPrcsn", "21106765.740000"); // 2
      Instrmt_23_set.insert("21106765.740000");
      Instrmt_23.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_23_set.insert("2");
      Instrmt_23.add_attribute("OptAt", "503085063"); // 2
      Instrmt_23_set.insert("503085063");
      Instrmt_23.add_attribute("Mult", "3354256.650000"); // 2
      Instrmt_23_set.insert("3354256.650000");
      Instrmt_23.add_attribute("MultTyp", "2"); // 2
      Instrmt_23_set.insert("2");
      Instrmt_23.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_23_set.insert("3");
      Instrmt_23.add_attribute("MinPxIncr", "13120007.850000"); // 2
      Instrmt_23_set.insert("13120007.850000");
      Instrmt_23.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_925194830"); // 2
      Instrmt_23_set.insert("MinPriceIncrementAmount_t_925194830");
      Instrmt_23.add_attribute("UOM", "Bcf"); // 2
      Instrmt_23_set.insert("Bcf");
      Instrmt_23.add_attribute("UOMQty", "2705935.520000"); // 2
      Instrmt_23_set.insert("2705935.520000");
      Instrmt_23.add_attribute("PxUOM", "USD"); // 2
      Instrmt_23_set.insert("USD");
      Instrmt_23.add_attribute("PxUOMQty", "10534582.140000"); // 2
      Instrmt_23_set.insert("10534582.140000");
      Instrmt_23.add_attribute("SettlMeth", "P"); // 2
      Instrmt_23_set.insert("P");
      Instrmt_23.add_attribute("ExerStyle", "0"); // 2
      Instrmt_23_set.insert("0");
      Instrmt_23.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_23_set.insert("3");
      Instrmt_23.add_attribute("OptPayAmt", "OptPayoutAmount_t_2083647559"); // 2
      Instrmt_23_set.insert("OptPayoutAmount_t_2083647559");
      Instrmt_23.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_23_set.insert("STD");
      Instrmt_23.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_23_set.insert("CDSD");
      Instrmt_23.add_attribute("ListMeth", "1"); // 2
      Instrmt_23_set.insert("1");
      Instrmt_23.add_attribute("CapPx", "11780155.880000"); // 2
      Instrmt_23_set.insert("11780155.880000");
      Instrmt_23.add_attribute("FlrPx", "6777937.970000"); // 2
      Instrmt_23_set.insert("6777937.970000");
      Instrmt_23.add_attribute("PutCall", "0"); // 2
      Instrmt_23_set.insert("0");
      Instrmt_23.add_attribute("FlexInd", "true"); // 2
      Instrmt_23_set.insert("true");
      Instrmt_23.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_23_set.insert("false");
      Instrmt_23.add_attribute("TmUnit", "Yr"); // 2
      Instrmt_23_set.insert("Yr");
      Instrmt_23.add_attribute("CpnRt", "5438909.390000"); // 2
      Instrmt_23_set.insert("5438909.390000");
      Instrmt_23.add_attribute("Exch", "SecurityExchange_t_461678830"); // 2
      Instrmt_23_set.insert("SecurityExchange_t_461678830");
      Instrmt_23.add_attribute("PosLmt", "891363596"); // 2
      Instrmt_23_set.insert("891363596");
      Instrmt_23.add_attribute("NTPosLmt", "2007273562"); // 2
      Instrmt_23_set.insert("2007273562");
      Instrmt_23.add_attribute("Issr", "Issuer_t_316555571"); // 2
      Instrmt_23_set.insert("Issuer_t_316555571");
      Instrmt_23.add_attribute("EncIssrLen", "2011307458"); // 2
      Instrmt_23_set.insert("2011307458");
      Instrmt_23.add_attribute("EncIssr", "EncodedIssuer_t_1970466489"); // 2
      Instrmt_23_set.insert("EncodedIssuer_t_1970466489");
      Instrmt_23.add_attribute("Desc", "SecurityDesc_t_748606804"); // 2
      Instrmt_23_set.insert("SecurityDesc_t_748606804");
      Instrmt_23.add_attribute("EncSecDescLen", "366908873"); // 2
      Instrmt_23_set.insert("366908873");
      Instrmt_23.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_158408506"); // 2
      Instrmt_23_set.insert("EncodedSecurityDesc_t_158408506");
      Instrmt_23.add_attribute("Pool", "Pool_t_1886348329"); // 2
      Instrmt_23_set.insert("Pool_t_1886348329");
      Instrmt_23.add_attribute("CSetMo", "1981934047"); // 2
      Instrmt_23_set.insert("1981934047");
      Instrmt_23.add_attribute("CPPgm", "2"); // 2
      Instrmt_23_set.insert("2");
      Instrmt_23.add_attribute("CPRegT", "CPRegType_t_664059511"); // 2
      Instrmt_23_set.insert("CPRegType_t_664059511");
      Instrmt_23.add_attribute("Dated", "DatedDate_t_1492984247"); // 2
      Instrmt_23_set.insert("DatedDate_t_1492984247");
      Instrmt_23.add_attribute("IntAcrl", "InterestAccrualDate_t_1741002843"); // 2
      Instrmt_23_set.insert("InterestAccrualDate_t_1741002843");
      all_values.push_back(Instrmt_23_set);
      all_compo_names.insert("Instrmt_23_set");

      {
        xml_element AID_26{"AID"};
        multiset<string> AID_26_set;
        AID_26.add_attribute("AltID", "SecurityAltID_t_1413935297"); // 3
        AID_26_set.insert("SecurityAltID_t_1413935297");
        AID_26.add_attribute("AltIDSrc", "C"); // 3
        AID_26_set.insert("C");
        all_values.push_back(AID_26_set);
        all_compo_names.insert("AID_26_set");

        Instrmt_23.add_element(AID_26);
      }
      {
        xml_element SecXML_26{"SecXML"};
        multiset<string> SecXML_26_set;
        SecXML_26.add_attribute("Schema", "SecurityXMLSchema_t_797577810"); // 3
        SecXML_26_set.insert("SecurityXMLSchema_t_797577810");
        all_values.push_back(SecXML_26_set);
        all_compo_names.insert("SecXML_26_set");

        Instrmt_23.add_element(SecXML_26);
      }
      {
        xml_element Evnt_26{"Evnt"};
        multiset<string> Evnt_26_set;
        Evnt_26.add_attribute("EventTyp", "2"); // 3
        Evnt_26_set.insert("2");
        Evnt_26.add_attribute("Dt", "EventDate_t_1248977705"); // 3
        Evnt_26_set.insert("EventDate_t_1248977705");
        Evnt_26.add_attribute("Tm", "EventTime_t_733741721"); // 3
        Evnt_26_set.insert("EventTime_t_733741721");
        Evnt_26.add_attribute("Px", "9519159.810000"); // 3
        Evnt_26_set.insert("9519159.810000");
        Evnt_26.add_attribute("Txt", "EventText_t_1374029905"); // 3
        Evnt_26_set.insert("EventText_t_1374029905");
        all_values.push_back(Evnt_26_set);
        all_compo_names.insert("Evnt_26_set");

        Instrmt_23.add_element(Evnt_26);
      }
      {
        xml_element Pty_144{"Pty"};
        multiset<string> Pty_144_set;
        Pty_144.add_attribute("ID", "InstrumentPartyID_t_251822854"); // 3
        Pty_144_set.insert("InstrumentPartyID_t_251822854");
        Pty_144.add_attribute("Src", "C"); // 3
        Pty_144_set.insert("C");
        Pty_144.add_attribute("R", "57"); // 3
        Pty_144_set.insert("57");
        all_values.push_back(Pty_144_set);
        all_compo_names.insert("Pty_144_set");

        {
          xml_element Sub_144{"Sub"};
          multiset<string> Sub_144_set;
          Sub_144.add_attribute("ID", "InstrumentPartySubID_t_676077668"); // 4
          Sub_144_set.insert("InstrumentPartySubID_t_676077668");
          Sub_144.add_attribute("Typ", "30"); // 4
          Sub_144_set.insert("30");
          all_values.push_back(Sub_144_set);
          all_compo_names.insert("Sub_144_set");

          Pty_144.add_element(Sub_144);
        }
        Instrmt_23.add_element(Pty_144);
      }
      {
        xml_element CmplxEvnt_23{"CmplxEvnt"};
        multiset<string> CmplxEvnt_23_set;
        CmplxEvnt_23.add_attribute("Typ", "4"); // 3
        CmplxEvnt_23_set.insert("4");
        CmplxEvnt_23.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_429293877"); // 3
        CmplxEvnt_23_set.insert("ComplexOptPayoutAmount_t_429293877");
        CmplxEvnt_23.add_attribute("Px", "21437413.300000"); // 3
        CmplxEvnt_23_set.insert("21437413.300000");
        CmplxEvnt_23.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_23_set.insert("1");
        CmplxEvnt_23.add_attribute("PxBndryPrcsn", "13206574.730000"); // 3
        CmplxEvnt_23_set.insert("13206574.730000");
        CmplxEvnt_23.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_23_set.insert("2");
        CmplxEvnt_23.add_attribute("Cond", "2"); // 3
        CmplxEvnt_23_set.insert("2");
        all_values.push_back(CmplxEvnt_23_set);
        all_compo_names.insert("CmplxEvnt_23_set");

        {
          xml_element EvntDts_23{"EvntDts"};
          multiset<string> EvntDts_23_set;
          EvntDts_23.add_attribute("StartDt", "ComplexEventStartDate_t_1184481283"); // 4
          EvntDts_23_set.insert("ComplexEventStartDate_t_1184481283");
          EvntDts_23.add_attribute("EndDt", "ComplexEventEndDate_t_1826514086"); // 4
          EvntDts_23_set.insert("ComplexEventEndDate_t_1826514086");
          all_values.push_back(EvntDts_23_set);
          all_compo_names.insert("EvntDts_23_set");

          {
            xml_element EvntTms_23{"EvntTms"};
            multiset<string> EvntTms_23_set;
            EvntTms_23.add_attribute("StartTm", "1964842751"); // 5
            EvntTms_23_set.insert("1964842751");
            EvntTms_23.add_attribute("EndTm", "1551390157"); // 5
            EvntTms_23_set.insert("1551390157");
            all_values.push_back(EvntTms_23_set);
            all_compo_names.insert("EvntTms_23_set");

            EvntDts_23.add_element(EvntTms_23);
          }
          CmplxEvnt_23.add_element(EvntDts_23);
        }
        Instrmt_23.add_element(CmplxEvnt_23);
      }
      Inst_3.add_element(Instrmt_23);
    }
    elt.add_element(Inst_3);
  } // end Inst
  { // Undly
    xml_element Undly_33{"Undly"};
    multiset<string> Undly_33_set;
    Undly_33.add_attribute("Sym", "UnderlyingSymbol_t_1703707432"); // 1
    Undly_33_set.insert("UnderlyingSymbol_t_1703707432");
    Undly_33.add_attribute("Sfx", "CD"); // 1
    Undly_33_set.insert("CD");
    Undly_33.add_attribute("ID", "UnderlyingSecurityID_t_1307848235"); // 1
    Undly_33_set.insert("UnderlyingSecurityID_t_1307848235");
    Undly_33.add_attribute("Src", "3"); // 1
    Undly_33_set.insert("3");
    Undly_33.add_attribute("Prod", "9"); // 1
    Undly_33_set.insert("9");
    Undly_33.add_attribute("CFI", "UnderlyingCFICode_t_901367430"); // 1
    Undly_33_set.insert("UnderlyingCFICode_t_901367430");
    Undly_33.add_attribute("SecTyp", "CMO"); // 1
    Undly_33_set.insert("CMO");
    Undly_33.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1130299968"); // 1
    Undly_33_set.insert("UnderlyingSecuritySubType_t_1130299968");
    Undly_33.add_attribute("MMY", "1698945241"); // 1
    Undly_33_set.insert("1698945241");
    Undly_33.add_attribute("Mat", "UnderlyingMaturityDate_t_1779103434"); // 1
    Undly_33_set.insert("UnderlyingMaturityDate_t_1779103434");
    Undly_33.add_attribute("MatTm", "231794025"); // 1
    Undly_33_set.insert("231794025");
    Undly_33.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_285203314"); // 1
    Undly_33_set.insert("UnderlyingCouponPaymentDate_t_285203314");
    Undly_33.add_attribute("RestrctTyp", "FR"); // 1
    Undly_33_set.insert("FR");
    Undly_33.add_attribute("Snrty", "SR"); // 1
    Undly_33_set.insert("SR");
    Undly_33.add_attribute("NotlPctOut", "5370261.690000"); // 1
    Undly_33_set.insert("5370261.690000");
    Undly_33.add_attribute("OrigNotlPctOut", "5659836.890000"); // 1
    Undly_33_set.insert("5659836.890000");
    Undly_33.add_attribute("AttchPnt", "15101639.840000"); // 1
    Undly_33_set.insert("15101639.840000");
    Undly_33.add_attribute("DetchPnt", "12131038.370000"); // 1
    Undly_33_set.insert("12131038.370000");
    Undly_33.add_attribute("Issued", "UnderlyingIssueDate_t_18350433"); // 1
    Undly_33_set.insert("UnderlyingIssueDate_t_18350433");
    Undly_33.add_attribute("RepoCollSecTyp", "1948165530"); // 1
    Undly_33_set.insert("1948165530");
    Undly_33.add_attribute("RepoTrm", "1642397714"); // 1
    Undly_33_set.insert("1642397714");
    Undly_33.add_attribute("RepoRt", "146081.150000"); // 1
    Undly_33_set.insert("146081.150000");
    Undly_33.add_attribute("Fctr", "7003622.570000"); // 1
    Undly_33_set.insert("7003622.570000");
    Undly_33.add_attribute("CrdRtg", "UnderlyingCreditRating_t_815571539"); // 1
    Undly_33_set.insert("UnderlyingCreditRating_t_815571539");
    Undly_33.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2018139360"); // 1
    Undly_33_set.insert("UnderlyingInstrRegistry_t_2018139360");
    Undly_33.add_attribute("Ctry", "1916598204"); // 1
    Undly_33_set.insert("1916598204");
    Undly_33.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2000052823"); // 1
    Undly_33_set.insert("UnderlyingStateOrProvinceOfIssue_t_2000052823");
    Undly_33.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1697169798"); // 1
    Undly_33_set.insert("UnderlyingLocaleOfIssue_t_1697169798");
    Undly_33.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1733957308"); // 1
    Undly_33_set.insert("UnderlyingRedemptionDate_t_1733957308");
    Undly_33.add_attribute("StrkPx", "14039593.320000"); // 1
    Undly_33_set.insert("14039593.320000");
    Undly_33.add_attribute("StrkCcy", "USD"); // 1
    Undly_33_set.insert("USD");
    Undly_33.add_attribute("OptA", "642316240"); // 1
    Undly_33_set.insert("642316240");
    Undly_33.add_attribute("Mult", "6949733.290000"); // 1
    Undly_33_set.insert("6949733.290000");
    Undly_33.add_attribute("MultTyp", "1"); // 1
    Undly_33_set.insert("1");
    Undly_33.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_33_set.insert("0");
    Undly_33.add_attribute("UOM", "MMBtu"); // 1
    Undly_33_set.insert("MMBtu");
    Undly_33.add_attribute("UOMQty", "9971993.330000"); // 1
    Undly_33_set.insert("9971993.330000");
    Undly_33.add_attribute("PxUOM", "MWh"); // 1
    Undly_33_set.insert("MWh");
    Undly_33.add_attribute("PxUOMQty", "11478023.530000"); // 1
    Undly_33_set.insert("11478023.530000");
    Undly_33.add_attribute("TmUnit", "Yr"); // 1
    Undly_33_set.insert("Yr");
    Undly_33.add_attribute("ExerStyle", "2"); // 1
    Undly_33_set.insert("2");
    Undly_33.add_attribute("CpnRt", "14330056.670000"); // 1
    Undly_33_set.insert("14330056.670000");
    Undly_33.add_attribute("Exch", "UnderlyingSecurityExchange_t_1212354888"); // 1
    Undly_33_set.insert("UnderlyingSecurityExchange_t_1212354888");
    Undly_33.add_attribute("Issr", "UnderlyingIssuer_t_46608023"); // 1
    Undly_33_set.insert("UnderlyingIssuer_t_46608023");
    Undly_33.add_attribute("EncUndIssrLen", "1970031836"); // 1
    Undly_33_set.insert("1970031836");
    Undly_33.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1778338577"); // 1
    Undly_33_set.insert("EncodedUnderlyingIssuer_t_1778338577");
    Undly_33.add_attribute("Desc", "UnderlyingSecurityDesc_t_1556772007"); // 1
    Undly_33_set.insert("UnderlyingSecurityDesc_t_1556772007");
    Undly_33.add_attribute("EncUndSecDescLen", "1035652026"); // 1
    Undly_33_set.insert("1035652026");
    Undly_33.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1796689010"); // 1
    Undly_33_set.insert("EncodedUnderlyingSecurityDesc_t_1796689010");
    Undly_33.add_attribute("CPPgm", "UnderlyingCPProgram_t_1357453889"); // 1
    Undly_33_set.insert("UnderlyingCPProgram_t_1357453889");
    Undly_33.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_530566092"); // 1
    Undly_33_set.insert("UnderlyingCPRegType_t_530566092");
    Undly_33.add_attribute("AllocPct", "18112971.260000"); // 1
    Undly_33_set.insert("18112971.260000");
    Undly_33.add_attribute("Ccy", "USD"); // 1
    Undly_33_set.insert("USD");
    Undly_33.add_attribute("Qty", "16819528.380000"); // 1
    Undly_33_set.insert("16819528.380000");
    Undly_33.add_attribute("SettlTyp", "2"); // 1
    Undly_33_set.insert("2");
    Undly_33.add_attribute("CashAmt", "UnderlyingCashAmount_t_1198706807"); // 1
    Undly_33_set.insert("UnderlyingCashAmount_t_1198706807");
    Undly_33.add_attribute("CashTyp", "DIFF"); // 1
    Undly_33_set.insert("DIFF");
    Undly_33.add_attribute("Px", "14134043.630000"); // 1
    Undly_33_set.insert("14134043.630000");
    Undly_33.add_attribute("DirtPx", "4551824.910000"); // 1
    Undly_33_set.insert("4551824.910000");
    Undly_33.add_attribute("EndPx", "6187640.830000"); // 1
    Undly_33_set.insert("6187640.830000");
    Undly_33.add_attribute("StartVal", "UnderlyingStartValue_t_556101808"); // 1
    Undly_33_set.insert("UnderlyingStartValue_t_556101808");
    Undly_33.add_attribute("CurVal", "UnderlyingCurrentValue_t_1097498731"); // 1
    Undly_33_set.insert("UnderlyingCurrentValue_t_1097498731");
    Undly_33.add_attribute("EndVal", "UnderlyingEndValue_t_1313737413"); // 1
    Undly_33_set.insert("UnderlyingEndValue_t_1313737413");
    Undly_33.add_attribute("AdjQty", "20665661.960000"); // 1
    Undly_33_set.insert("20665661.960000");
    Undly_33.add_attribute("FxRate", "3236724.780000"); // 1
    Undly_33_set.insert("3236724.780000");
    Undly_33.add_attribute("FxRateCalc", "D"); // 1
    Undly_33_set.insert("D");
    Undly_33.add_attribute("CapValu", "UnderlyingCapValue_t_916281882"); // 1
    Undly_33_set.insert("UnderlyingCapValue_t_916281882");
    Undly_33.add_attribute("SetMeth", "UnderlyingSettlMethod_t_680146193"); // 1
    Undly_33_set.insert("UnderlyingSettlMethod_t_680146193");
    Undly_33.add_attribute("PutCall", "1910396878"); // 1
    Undly_33_set.insert("1910396878");
    all_values.push_back(Undly_33_set);
    all_compo_names.insert("Undly_33_set");

    {
      xml_element UndAID_33{"UndAID"};
      multiset<string> UndAID_33_set;
      UndAID_33.add_attribute("AltID", "UnderlyingSecurityAltID_t_1545101002"); // 2
      UndAID_33_set.insert("UnderlyingSecurityAltID_t_1545101002");
      UndAID_33.add_attribute("AltIDSrc", "I"); // 2
      UndAID_33_set.insert("I");
      all_values.push_back(UndAID_33_set);
      all_compo_names.insert("UndAID_33_set");

      Undly_33.add_element(UndAID_33);
    }
    {
      xml_element Stip_53{"Stip"};
      multiset<string> Stip_53_set;
      Stip_53.add_attribute("Typ", "ISSUESIZE"); // 2
      Stip_53_set.insert("ISSUESIZE");
      Stip_53.add_attribute("Val", "UnderlyingStipValue_t_609972242"); // 2
      Stip_53_set.insert("UnderlyingStipValue_t_609972242");
      all_values.push_back(Stip_53_set);
      all_compo_names.insert("Stip_53_set");

      Undly_33.add_element(Stip_53);
    }
    {
      xml_element Pty_145{"Pty"};
      multiset<string> Pty_145_set;
      Pty_145.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1315021956"); // 2
      Pty_145_set.insert("UnderlyingInstrumentPartyID_t_1315021956");
      Pty_145.add_attribute("Src", "F"); // 2
      Pty_145_set.insert("F");
      Pty_145.add_attribute("R", "2"); // 2
      Pty_145_set.insert("2");
      all_values.push_back(Pty_145_set);
      all_compo_names.insert("Pty_145_set");

      {
        xml_element Sub_145{"Sub"};
        multiset<string> Sub_145_set;
        Sub_145.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_724310316"); // 3
        Sub_145_set.insert("UnderlyingInstrumentPartySubID_t_724310316");
        Sub_145.add_attribute("Typ", "7"); // 3
        Sub_145_set.insert("7");
        all_values.push_back(Sub_145_set);
        all_compo_names.insert("Sub_145_set");

        Pty_145.add_element(Sub_145);
      }
      Undly_33.add_element(Pty_145);
    }
    elt.add_element(Undly_33);
  } // end Undly
  { // Leg
    xml_element Leg_32{"Leg"};
    multiset<string> Leg_32_set;
    Leg_32.add_attribute("Sym", "LegSymbol_t_2081764205"); // 1
    Leg_32_set.insert("LegSymbol_t_2081764205");
    Leg_32.add_attribute("Sfx", "CD"); // 1
    Leg_32_set.insert("CD");
    Leg_32.add_attribute("ID", "LegSecurityID_t_1701329660"); // 1
    Leg_32_set.insert("LegSecurityID_t_1701329660");
    Leg_32.add_attribute("Src", "5"); // 1
    Leg_32_set.insert("5");
    Leg_32.add_attribute("Prod", "4"); // 1
    Leg_32_set.insert("4");
    Leg_32.add_attribute("CFI", "LegCFICode_t_1235798850"); // 1
    Leg_32_set.insert("LegCFICode_t_1235798850");
    Leg_32.add_attribute("SecTyp", "CD"); // 1
    Leg_32_set.insert("CD");
    Leg_32.add_attribute("SecSubTyp", "LegSecuritySubType_t_834562347"); // 1
    Leg_32_set.insert("LegSecuritySubType_t_834562347");
    Leg_32.add_attribute("MMY", "319954191"); // 1
    Leg_32_set.insert("319954191");
    Leg_32.add_attribute("Mat", "LegMaturityDate_t_937464475"); // 1
    Leg_32_set.insert("LegMaturityDate_t_937464475");
    Leg_32.add_attribute("MatTm", "1289744838"); // 1
    Leg_32_set.insert("1289744838");
    Leg_32.add_attribute("CpnPmt", "LegCouponPaymentDate_t_938718275"); // 1
    Leg_32_set.insert("LegCouponPaymentDate_t_938718275");
    Leg_32.add_attribute("Issued", "LegIssueDate_t_1493566283"); // 1
    Leg_32_set.insert("LegIssueDate_t_1493566283");
    Leg_32.add_attribute("RepoCollSecTyp", "239759921"); // 1
    Leg_32_set.insert("239759921");
    Leg_32.add_attribute("RepoTrm", "104972040"); // 1
    Leg_32_set.insert("104972040");
    Leg_32.add_attribute("RepoRt", "14126488.320000"); // 1
    Leg_32_set.insert("14126488.320000");
    Leg_32.add_attribute("Fctr", "5634323.990000"); // 1
    Leg_32_set.insert("5634323.990000");
    Leg_32.add_attribute("CrdRtg", "LegCreditRating_t_867566565"); // 1
    Leg_32_set.insert("LegCreditRating_t_867566565");
    Leg_32.add_attribute("Rgstry", "LegInstrRegistry_t_181447066"); // 1
    Leg_32_set.insert("LegInstrRegistry_t_181447066");
    Leg_32.add_attribute("Ctry", "1243578592"); // 1
    Leg_32_set.insert("1243578592");
    Leg_32.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_630479795"); // 1
    Leg_32_set.insert("LegStateOrProvinceOfIssue_t_630479795");
    Leg_32.add_attribute("Lcl", "LegLocaleOfIssue_t_1726548068"); // 1
    Leg_32_set.insert("LegLocaleOfIssue_t_1726548068");
    Leg_32.add_attribute("Redeem", "LegRedemptionDate_t_364508878"); // 1
    Leg_32_set.insert("LegRedemptionDate_t_364508878");
    Leg_32.add_attribute("Strk", "18263986.920000"); // 1
    Leg_32_set.insert("18263986.920000");
    Leg_32.add_attribute("StrkCcy", "JPY"); // 1
    Leg_32_set.insert("JPY");
    Leg_32.add_attribute("OptA", "697382130"); // 1
    Leg_32_set.insert("697382130");
    Leg_32.add_attribute("Cmult", "4298638.330000"); // 1
    Leg_32_set.insert("4298638.330000");
    Leg_32.add_attribute("MultTyp", "2"); // 1
    Leg_32_set.insert("2");
    Leg_32.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_32_set.insert("4");
    Leg_32.add_attribute("UOM", "Bu"); // 1
    Leg_32_set.insert("Bu");
    Leg_32.add_attribute("UOMQty", "1906380.600000"); // 1
    Leg_32_set.insert("1906380.600000");
    Leg_32.add_attribute("PxUOM", "Bu"); // 1
    Leg_32_set.insert("Bu");
    Leg_32.add_attribute("PxUOMQty", "20212260.270000"); // 1
    Leg_32_set.insert("20212260.270000");
    Leg_32.add_attribute("TmUnit", "Mo"); // 1
    Leg_32_set.insert("Mo");
    Leg_32.add_attribute("ExerStyle", "2"); // 1
    Leg_32_set.insert("2");
    Leg_32.add_attribute("CpnRt", "11095412.300000"); // 1
    Leg_32_set.insert("11095412.300000");
    Leg_32.add_attribute("Exch", "LegSecurityExchange_t_1706794876"); // 1
    Leg_32_set.insert("LegSecurityExchange_t_1706794876");
    Leg_32.add_attribute("Issr", "LegIssuer_t_1511637039"); // 1
    Leg_32_set.insert("LegIssuer_t_1511637039");
    Leg_32.add_attribute("EncLegIssrLen", "1429495421"); // 1
    Leg_32_set.insert("1429495421");
    Leg_32.add_attribute("EncLegIssr", "EncodedLegIssuer_t_496775704"); // 1
    Leg_32_set.insert("EncodedLegIssuer_t_496775704");
    Leg_32.add_attribute("Desc", "LegSecurityDesc_t_653898229"); // 1
    Leg_32_set.insert("LegSecurityDesc_t_653898229");
    Leg_32.add_attribute("EncLegSecDescLen", "220730048"); // 1
    Leg_32_set.insert("220730048");
    Leg_32.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1990341987"); // 1
    Leg_32_set.insert("EncodedLegSecurityDesc_t_1990341987");
    Leg_32.add_attribute("RatioQty", "8936581.510000"); // 1
    Leg_32_set.insert("8936581.510000");
    Leg_32.add_attribute("Side", "9"); // 1
    Leg_32_set.insert("9");
    Leg_32.add_attribute("Ccy", "USD"); // 1
    Leg_32_set.insert("USD");
    Leg_32.add_attribute("Pool", "LegPool_t_1193268653"); // 1
    Leg_32_set.insert("LegPool_t_1193268653");
    Leg_32.add_attribute("Dated", "LegDatedDate_t_1436954237"); // 1
    Leg_32_set.insert("LegDatedDate_t_1436954237");
    Leg_32.add_attribute("CSetMo", "553185495"); // 1
    Leg_32_set.insert("553185495");
    Leg_32.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1823748448"); // 1
    Leg_32_set.insert("LegInterestAccrualDate_t_1823748448");
    Leg_32.add_attribute("PutCall", "1016018657"); // 1
    Leg_32_set.insert("1016018657");
    Leg_32.add_attribute("LegOptionRatio", "9176943.730000"); // 1
    Leg_32_set.insert("9176943.730000");
    Leg_32.add_attribute("Px", "15026634.930000"); // 1
    Leg_32_set.insert("15026634.930000");
    all_values.push_back(Leg_32_set);
    all_compo_names.insert("Leg_32_set");

    {
      xml_element LegAID_32{"LegAID"};
      multiset<string> LegAID_32_set;
      LegAID_32.add_attribute("SecAltID", "LegSecurityAltID_t_1205055319"); // 2
      LegAID_32_set.insert("LegSecurityAltID_t_1205055319");
      LegAID_32.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_32_set.insert("4");
      all_values.push_back(LegAID_32_set);
      all_compo_names.insert("LegAID_32_set");

      Leg_32.add_element(LegAID_32);
    }
    elt.add_element(Leg_32);
  } // end Leg
  { // Leg
    xml_element Leg_33{"Leg"};
    multiset<string> Leg_33_set;
    Leg_33.add_attribute("Sym", "LegSymbol_t_52561975"); // 1
    Leg_33_set.insert("LegSymbol_t_52561975");
    Leg_33.add_attribute("Sfx", "WI"); // 1
    Leg_33_set.insert("WI");
    Leg_33.add_attribute("ID", "LegSecurityID_t_706099062"); // 1
    Leg_33_set.insert("LegSecurityID_t_706099062");
    Leg_33.add_attribute("Src", "K"); // 1
    Leg_33_set.insert("K");
    Leg_33.add_attribute("Prod", "5"); // 1
    Leg_33_set.insert("5");
    Leg_33.add_attribute("CFI", "LegCFICode_t_896737122"); // 1
    Leg_33_set.insert("LegCFICode_t_896737122");
    Leg_33.add_attribute("SecTyp", "WAR"); // 1
    Leg_33_set.insert("WAR");
    Leg_33.add_attribute("SecSubTyp", "LegSecuritySubType_t_1828557900"); // 1
    Leg_33_set.insert("LegSecuritySubType_t_1828557900");
    Leg_33.add_attribute("MMY", "931988238"); // 1
    Leg_33_set.insert("931988238");
    Leg_33.add_attribute("Mat", "LegMaturityDate_t_227389764"); // 1
    Leg_33_set.insert("LegMaturityDate_t_227389764");
    Leg_33.add_attribute("MatTm", "790615482"); // 1
    Leg_33_set.insert("790615482");
    Leg_33.add_attribute("CpnPmt", "LegCouponPaymentDate_t_491299467"); // 1
    Leg_33_set.insert("LegCouponPaymentDate_t_491299467");
    Leg_33.add_attribute("Issued", "LegIssueDate_t_1739026803"); // 1
    Leg_33_set.insert("LegIssueDate_t_1739026803");
    Leg_33.add_attribute("RepoCollSecTyp", "72627255"); // 1
    Leg_33_set.insert("72627255");
    Leg_33.add_attribute("RepoTrm", "988075171"); // 1
    Leg_33_set.insert("988075171");
    Leg_33.add_attribute("RepoRt", "2454413.850000"); // 1
    Leg_33_set.insert("2454413.850000");
    Leg_33.add_attribute("Fctr", "2933573.040000"); // 1
    Leg_33_set.insert("2933573.040000");
    Leg_33.add_attribute("CrdRtg", "LegCreditRating_t_830933510"); // 1
    Leg_33_set.insert("LegCreditRating_t_830933510");
    Leg_33.add_attribute("Rgstry", "LegInstrRegistry_t_1139099536"); // 1
    Leg_33_set.insert("LegInstrRegistry_t_1139099536");
    Leg_33.add_attribute("Ctry", "619059392"); // 1
    Leg_33_set.insert("619059392");
    Leg_33.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2086440682"); // 1
    Leg_33_set.insert("LegStateOrProvinceOfIssue_t_2086440682");
    Leg_33.add_attribute("Lcl", "LegLocaleOfIssue_t_448706438"); // 1
    Leg_33_set.insert("LegLocaleOfIssue_t_448706438");
    Leg_33.add_attribute("Redeem", "LegRedemptionDate_t_1812328046"); // 1
    Leg_33_set.insert("LegRedemptionDate_t_1812328046");
    Leg_33.add_attribute("Strk", "13759112.710000"); // 1
    Leg_33_set.insert("13759112.710000");
    Leg_33.add_attribute("StrkCcy", "JPY"); // 1
    Leg_33_set.insert("JPY");
    Leg_33.add_attribute("OptA", "244446281"); // 1
    Leg_33_set.insert("244446281");
    Leg_33.add_attribute("Cmult", "19195863.060000"); // 1
    Leg_33_set.insert("19195863.060000");
    Leg_33.add_attribute("MultTyp", "2"); // 1
    Leg_33_set.insert("2");
    Leg_33.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_33_set.insert("0");
    Leg_33.add_attribute("UOM", "Bu"); // 1
    Leg_33_set.insert("Bu");
    Leg_33.add_attribute("UOMQty", "8963346.670000"); // 1
    Leg_33_set.insert("8963346.670000");
    Leg_33.add_attribute("PxUOM", "MWh"); // 1
    Leg_33_set.insert("MWh");
    Leg_33.add_attribute("PxUOMQty", "9279432.800000"); // 1
    Leg_33_set.insert("9279432.800000");
    Leg_33.add_attribute("TmUnit", "S"); // 1
    Leg_33_set.insert("S");
    Leg_33.add_attribute("ExerStyle", "1"); // 1
    Leg_33_set.insert("1");
    Leg_33.add_attribute("CpnRt", "18246804.020000"); // 1
    Leg_33_set.insert("18246804.020000");
    Leg_33.add_attribute("Exch", "LegSecurityExchange_t_1103229310"); // 1
    Leg_33_set.insert("LegSecurityExchange_t_1103229310");
    Leg_33.add_attribute("Issr", "LegIssuer_t_425343230"); // 1
    Leg_33_set.insert("LegIssuer_t_425343230");
    Leg_33.add_attribute("EncLegIssrLen", "609184992"); // 1
    Leg_33_set.insert("609184992");
    Leg_33.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1330619074"); // 1
    Leg_33_set.insert("EncodedLegIssuer_t_1330619074");
    Leg_33.add_attribute("Desc", "LegSecurityDesc_t_1215958712"); // 1
    Leg_33_set.insert("LegSecurityDesc_t_1215958712");
    Leg_33.add_attribute("EncLegSecDescLen", "1100484459"); // 1
    Leg_33_set.insert("1100484459");
    Leg_33.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_922162230"); // 1
    Leg_33_set.insert("EncodedLegSecurityDesc_t_922162230");
    Leg_33.add_attribute("RatioQty", "12885859.670000"); // 1
    Leg_33_set.insert("12885859.670000");
    Leg_33.add_attribute("Side", "F"); // 1
    Leg_33_set.insert("F");
    Leg_33.add_attribute("Ccy", "CAN"); // 1
    Leg_33_set.insert("CAN");
    Leg_33.add_attribute("Pool", "LegPool_t_772009493"); // 1
    Leg_33_set.insert("LegPool_t_772009493");
    Leg_33.add_attribute("Dated", "LegDatedDate_t_159219503"); // 1
    Leg_33_set.insert("LegDatedDate_t_159219503");
    Leg_33.add_attribute("CSetMo", "53519016"); // 1
    Leg_33_set.insert("53519016");
    Leg_33.add_attribute("IntAcrl", "LegInterestAccrualDate_t_710966527"); // 1
    Leg_33_set.insert("LegInterestAccrualDate_t_710966527");
    Leg_33.add_attribute("PutCall", "607925941"); // 1
    Leg_33_set.insert("607925941");
    Leg_33.add_attribute("LegOptionRatio", "18658470.620000"); // 1
    Leg_33_set.insert("18658470.620000");
    Leg_33.add_attribute("Px", "20868777.980000"); // 1
    Leg_33_set.insert("20868777.980000");
    all_values.push_back(Leg_33_set);
    all_compo_names.insert("Leg_33_set");

    {
      xml_element LegAID_33{"LegAID"};
      multiset<string> LegAID_33_set;
      LegAID_33.add_attribute("SecAltID", "LegSecurityAltID_t_1609817875"); // 2
      LegAID_33_set.insert("LegSecurityAltID_t_1609817875");
      LegAID_33.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_33_set.insert("5");
      all_values.push_back(LegAID_33_set);
      all_compo_names.insert("LegAID_33_set");

      Leg_33.add_element(LegAID_33);
    }
    elt.add_element(Leg_33);
  } // end Leg
  { // Leg
    xml_element Leg_34{"Leg"};
    multiset<string> Leg_34_set;
    Leg_34.add_attribute("Sym", "LegSymbol_t_183840431"); // 1
    Leg_34_set.insert("LegSymbol_t_183840431");
    Leg_34.add_attribute("Sfx", "WI"); // 1
    Leg_34_set.insert("WI");
    Leg_34.add_attribute("ID", "LegSecurityID_t_2050728952"); // 1
    Leg_34_set.insert("LegSecurityID_t_2050728952");
    Leg_34.add_attribute("Src", "F"); // 1
    Leg_34_set.insert("F");
    Leg_34.add_attribute("Prod", "13"); // 1
    Leg_34_set.insert("13");
    Leg_34.add_attribute("CFI", "LegCFICode_t_799579971"); // 1
    Leg_34_set.insert("LegCFICode_t_799579971");
    Leg_34.add_attribute("SecTyp", "TAXA"); // 1
    Leg_34_set.insert("TAXA");
    Leg_34.add_attribute("SecSubTyp", "LegSecuritySubType_t_384224383"); // 1
    Leg_34_set.insert("LegSecuritySubType_t_384224383");
    Leg_34.add_attribute("MMY", "205010560"); // 1
    Leg_34_set.insert("205010560");
    Leg_34.add_attribute("Mat", "LegMaturityDate_t_1167064467"); // 1
    Leg_34_set.insert("LegMaturityDate_t_1167064467");
    Leg_34.add_attribute("MatTm", "61421137"); // 1
    Leg_34_set.insert("61421137");
    Leg_34.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1308239870"); // 1
    Leg_34_set.insert("LegCouponPaymentDate_t_1308239870");
    Leg_34.add_attribute("Issued", "LegIssueDate_t_1592407697"); // 1
    Leg_34_set.insert("LegIssueDate_t_1592407697");
    Leg_34.add_attribute("RepoCollSecTyp", "670606130"); // 1
    Leg_34_set.insert("670606130");
    Leg_34.add_attribute("RepoTrm", "491375296"); // 1
    Leg_34_set.insert("491375296");
    Leg_34.add_attribute("RepoRt", "6608827.610000"); // 1
    Leg_34_set.insert("6608827.610000");
    Leg_34.add_attribute("Fctr", "17710905.890000"); // 1
    Leg_34_set.insert("17710905.890000");
    Leg_34.add_attribute("CrdRtg", "LegCreditRating_t_1413537526"); // 1
    Leg_34_set.insert("LegCreditRating_t_1413537526");
    Leg_34.add_attribute("Rgstry", "LegInstrRegistry_t_1949468729"); // 1
    Leg_34_set.insert("LegInstrRegistry_t_1949468729");
    Leg_34.add_attribute("Ctry", "1712166572"); // 1
    Leg_34_set.insert("1712166572");
    Leg_34.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_433657493"); // 1
    Leg_34_set.insert("LegStateOrProvinceOfIssue_t_433657493");
    Leg_34.add_attribute("Lcl", "LegLocaleOfIssue_t_1383928352"); // 1
    Leg_34_set.insert("LegLocaleOfIssue_t_1383928352");
    Leg_34.add_attribute("Redeem", "LegRedemptionDate_t_336692417"); // 1
    Leg_34_set.insert("LegRedemptionDate_t_336692417");
    Leg_34.add_attribute("Strk", "5928769.960000"); // 1
    Leg_34_set.insert("5928769.960000");
    Leg_34.add_attribute("StrkCcy", "USD"); // 1
    Leg_34_set.insert("USD");
    Leg_34.add_attribute("OptA", "1200802938"); // 1
    Leg_34_set.insert("1200802938");
    Leg_34.add_attribute("Cmult", "11558107.820000"); // 1
    Leg_34_set.insert("11558107.820000");
    Leg_34.add_attribute("MultTyp", "0"); // 1
    Leg_34_set.insert("0");
    Leg_34.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_34_set.insert("0");
    Leg_34.add_attribute("UOM", "Bbl"); // 1
    Leg_34_set.insert("Bbl");
    Leg_34.add_attribute("UOMQty", "11708935.260000"); // 1
    Leg_34_set.insert("11708935.260000");
    Leg_34.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_34_set.insert("oz_tr");
    Leg_34.add_attribute("PxUOMQty", "1185286.990000"); // 1
    Leg_34_set.insert("1185286.990000");
    Leg_34.add_attribute("TmUnit", "D"); // 1
    Leg_34_set.insert("D");
    Leg_34.add_attribute("ExerStyle", "1"); // 1
    Leg_34_set.insert("1");
    Leg_34.add_attribute("CpnRt", "9181086.700000"); // 1
    Leg_34_set.insert("9181086.700000");
    Leg_34.add_attribute("Exch", "LegSecurityExchange_t_1079547399"); // 1
    Leg_34_set.insert("LegSecurityExchange_t_1079547399");
    Leg_34.add_attribute("Issr", "LegIssuer_t_1885563185"); // 1
    Leg_34_set.insert("LegIssuer_t_1885563185");
    Leg_34.add_attribute("EncLegIssrLen", "1123119230"); // 1
    Leg_34_set.insert("1123119230");
    Leg_34.add_attribute("EncLegIssr", "EncodedLegIssuer_t_99128219"); // 1
    Leg_34_set.insert("EncodedLegIssuer_t_99128219");
    Leg_34.add_attribute("Desc", "LegSecurityDesc_t_1946984323"); // 1
    Leg_34_set.insert("LegSecurityDesc_t_1946984323");
    Leg_34.add_attribute("EncLegSecDescLen", "283875452"); // 1
    Leg_34_set.insert("283875452");
    Leg_34.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1691535916"); // 1
    Leg_34_set.insert("EncodedLegSecurityDesc_t_1691535916");
    Leg_34.add_attribute("RatioQty", "4701068.050000"); // 1
    Leg_34_set.insert("4701068.050000");
    Leg_34.add_attribute("Side", "D"); // 1
    Leg_34_set.insert("D");
    Leg_34.add_attribute("Ccy", "JPY"); // 1
    Leg_34_set.insert("JPY");
    Leg_34.add_attribute("Pool", "LegPool_t_41304627"); // 1
    Leg_34_set.insert("LegPool_t_41304627");
    Leg_34.add_attribute("Dated", "LegDatedDate_t_6920111"); // 1
    Leg_34_set.insert("LegDatedDate_t_6920111");
    Leg_34.add_attribute("CSetMo", "1805880318"); // 1
    Leg_34_set.insert("1805880318");
    Leg_34.add_attribute("IntAcrl", "LegInterestAccrualDate_t_474962120"); // 1
    Leg_34_set.insert("LegInterestAccrualDate_t_474962120");
    Leg_34.add_attribute("PutCall", "1390848463"); // 1
    Leg_34_set.insert("1390848463");
    Leg_34.add_attribute("LegOptionRatio", "21425727.350000"); // 1
    Leg_34_set.insert("21425727.350000");
    Leg_34.add_attribute("Px", "10678391.170000"); // 1
    Leg_34_set.insert("10678391.170000");
    all_values.push_back(Leg_34_set);
    all_compo_names.insert("Leg_34_set");

    {
      xml_element LegAID_34{"LegAID"};
      multiset<string> LegAID_34_set;
      LegAID_34.add_attribute("SecAltID", "LegSecurityAltID_t_680812184"); // 2
      LegAID_34_set.insert("LegSecurityAltID_t_680812184");
      LegAID_34.add_attribute("SecAltIDSrc", "I"); // 2
      LegAID_34_set.insert("I");
      all_values.push_back(LegAID_34_set);
      all_compo_names.insert("LegAID_34_set");

      Leg_34.add_element(LegAID_34);
    }
    elt.add_element(Leg_34);
  } // end Leg
  { // TxtLn
    xml_element TxtLn_0{"TxtLn"};
    multiset<string> TxtLn_0_set;
    TxtLn_0.add_attribute("Txt", "Text_t_1836622966"); // 1
    TxtLn_0_set.insert("Text_t_1836622966");
    TxtLn_0.add_attribute("EncTxtLen", "2029801126"); // 1
    TxtLn_0_set.insert("2029801126");
    TxtLn_0.add_attribute("EncTxt", "EncodedText_t_784295572"); // 1
    TxtLn_0_set.insert("EncodedText_t_784295572");
    all_values.push_back(TxtLn_0_set);
    all_compo_names.insert("TxtLn_0_set");

    elt.add_element(TxtLn_0);
  } // end TxtLn
  { // TxtLn
    xml_element TxtLn_1{"TxtLn"};
    multiset<string> TxtLn_1_set;
    TxtLn_1.add_attribute("Txt", "Text_t_2051906361"); // 1
    TxtLn_1_set.insert("Text_t_2051906361");
    TxtLn_1.add_attribute("EncTxtLen", "1053211004"); // 1
    TxtLn_1_set.insert("1053211004");
    TxtLn_1.add_attribute("EncTxt", "EncodedText_t_681869622"); // 1
    TxtLn_1_set.insert("EncodedText_t_681869622");
    all_values.push_back(TxtLn_1_set);
    all_compo_names.insert("TxtLn_1_set");

    elt.add_element(TxtLn_1);
  } // end TxtLn
  { // TxtLn
    xml_element TxtLn_2{"TxtLn"};
    multiset<string> TxtLn_2_set;
    TxtLn_2.add_attribute("Txt", "Text_t_22951412"); // 1
    TxtLn_2_set.insert("Text_t_22951412");
    TxtLn_2.add_attribute("EncTxtLen", "1709962914"); // 1
    TxtLn_2_set.insert("1709962914");
    TxtLn_2.add_attribute("EncTxt", "EncodedText_t_35724776"); // 1
    TxtLn_2_set.insert("EncodedText_t_35724776");
    all_values.push_back(TxtLn_2_set);
    all_compo_names.insert("TxtLn_2_set");

    elt.add_element(TxtLn_2);
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
