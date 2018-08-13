#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ExecutionAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionAcknowledgement_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ExecAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionAcknowledgement_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_941060082"); // 0
  ExecutionAcknowledgement_message_t_0.insert("OrderID_t_941060082");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_642026665"); // 0
  ExecutionAcknowledgement_message_t_0.insert("SecondaryOrderID_t_642026665");
  elt.add_attribute("ID", "ClOrdID_t_1921287962"); // 0
  ExecutionAcknowledgement_message_t_0.insert("ClOrdID_t_1921287962");
  elt.add_attribute("ExecAckStat", "2"); // 0
  ExecutionAcknowledgement_message_t_0.insert("2");
  elt.add_attribute("ExecID", "ExecID_t_741154884"); // 0
  ExecutionAcknowledgement_message_t_0.insert("ExecID_t_741154884");
  elt.add_attribute("DkRsn", "B"); // 0
  ExecutionAcknowledgement_message_t_0.insert("B");
  elt.add_attribute("Side", "D"); // 0
  ExecutionAcknowledgement_message_t_0.insert("D");
  elt.add_attribute("LastQty", "2852071.530000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("2852071.530000");
  elt.add_attribute("LastPx", "434117.940000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("434117.940000");
  elt.add_attribute("PxTyp", "17"); // 0
  ExecutionAcknowledgement_message_t_0.insert("17");
  elt.add_attribute("LastParPx", "4901421.830000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("4901421.830000");
  elt.add_attribute("CumQty", "1371255.400000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("1371255.400000");
  elt.add_attribute("AvgPx", "10171264.920000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("10171264.920000");
  elt.add_attribute("Txt", "Text_t_497062294"); // 0
  ExecutionAcknowledgement_message_t_0.insert("Text_t_497062294");
  elt.add_attribute("EncTxtLen", "1943005859"); // 0
  ExecutionAcknowledgement_message_t_0.insert("1943005859");
  elt.add_attribute("EncTxt", "EncodedText_t_1492088612"); // 0
  ExecutionAcknowledgement_message_t_0.insert("EncodedText_t_1492088612");
  all_values.push_back(ExecutionAcknowledgement_message_t_0);
  all_compo_names.insert("ExecutionAcknowledgement_message_t");

  { // Hdr
    xml_element Hdr_31{"Hdr"};
    multiset<string> Hdr_31_set;
    Hdr_31.add_attribute("SeqNum", "1887910757"); // 1
    Hdr_31_set.insert("1887910757");
    Hdr_31.add_attribute("SID", "SenderCompID_t_1938094946"); // 1
    Hdr_31_set.insert("SenderCompID_t_1938094946");
    Hdr_31.add_attribute("TID", "TargetCompID_t_412444081"); // 1
    Hdr_31_set.insert("TargetCompID_t_412444081");
    Hdr_31.add_attribute("OBID", "OnBehalfOfCompID_t_421239293"); // 1
    Hdr_31_set.insert("OnBehalfOfCompID_t_421239293");
    Hdr_31.add_attribute("D2ID", "DeliverToCompID_t_833359330"); // 1
    Hdr_31_set.insert("DeliverToCompID_t_833359330");
    Hdr_31.add_attribute("SSub", "SenderSubID_t_533602488"); // 1
    Hdr_31_set.insert("SenderSubID_t_533602488");
    Hdr_31.add_attribute("SLoc", "SenderLocationID_t_110378612"); // 1
    Hdr_31_set.insert("SenderLocationID_t_110378612");
    Hdr_31.add_attribute("TSub", "TargetSubID_t_715676808"); // 1
    Hdr_31_set.insert("TargetSubID_t_715676808");
    Hdr_31.add_attribute("TLoc", "TargetLocationID_t_1317898060"); // 1
    Hdr_31_set.insert("TargetLocationID_t_1317898060");
    Hdr_31.add_attribute("OBSub", "OnBehalfOfSubID_t_14801325"); // 1
    Hdr_31_set.insert("OnBehalfOfSubID_t_14801325");
    Hdr_31.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1768887812"); // 1
    Hdr_31_set.insert("OnBehalfOfLocationID_t_1768887812");
    Hdr_31.add_attribute("D2Sub", "DeliverToSubID_t_1999767683"); // 1
    Hdr_31_set.insert("DeliverToSubID_t_1999767683");
    Hdr_31.add_attribute("D2Loc", "DeliverToLocationID_t_37752738"); // 1
    Hdr_31_set.insert("DeliverToLocationID_t_37752738");
    Hdr_31.add_attribute("PosDup", "N"); // 1
    Hdr_31_set.insert("N");
    Hdr_31.add_attribute("PosRsnd", "Y"); // 1
    Hdr_31_set.insert("Y");
    Hdr_31.add_attribute("Snt", "SendingTime_t_978812820"); // 1
    Hdr_31_set.insert("SendingTime_t_978812820");
    Hdr_31.add_attribute("OrigSnt", "OrigSendingTime_t_1973393743"); // 1
    Hdr_31_set.insert("OrigSendingTime_t_1973393743");
    Hdr_31.add_attribute("MsgEncd", "MessageEncoding_t_1809296773"); // 1
    Hdr_31_set.insert("MessageEncoding_t_1809296773");
    all_values.push_back(Hdr_31_set);
    all_compo_names.insert("Hdr_31_set");

    {
      xml_element Hop_31{"Hop"};
      multiset<string> Hop_31_set;
      Hop_31.add_attribute("ID", "HopCompID_t_895508485"); // 2
      Hop_31_set.insert("HopCompID_t_895508485");
      Hop_31.add_attribute("Ref", "567064980"); // 2
      Hop_31_set.insert("567064980");
      Hop_31.add_attribute("Snt", "HopSendingTime_t_1382601762"); // 2
      Hop_31_set.insert("HopSendingTime_t_1382601762");
      all_values.push_back(Hop_31_set);
      all_compo_names.insert("Hop_31_set");

      Hdr_31.add_element(Hop_31);
    }
    elt.add_element(Hdr_31);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_24{"Instrmt"};
    multiset<string> Instrmt_24_set;
    Instrmt_24.add_attribute("Sym", "Symbol_t_1096079601"); // 1
    Instrmt_24_set.insert("Symbol_t_1096079601");
    Instrmt_24.add_attribute("Sfx", "WI"); // 1
    Instrmt_24_set.insert("WI");
    Instrmt_24.add_attribute("ID", "SecurityID_t_1426013556"); // 1
    Instrmt_24_set.insert("SecurityID_t_1426013556");
    Instrmt_24.add_attribute("Src", "9"); // 1
    Instrmt_24_set.insert("9");
    Instrmt_24.add_attribute("Prod", "6"); // 1
    Instrmt_24_set.insert("6");
    Instrmt_24.add_attribute("ProdCmplx", "ProductComplex_t_1563139097"); // 1
    Instrmt_24_set.insert("ProductComplex_t_1563139097");
    Instrmt_24.add_attribute("SecGrp", "SecurityGroup_t_941544310"); // 1
    Instrmt_24_set.insert("SecurityGroup_t_941544310");
    Instrmt_24.add_attribute("CFI", "CFICode_t_1839476610"); // 1
    Instrmt_24_set.insert("CFICode_t_1839476610");
    Instrmt_24.add_attribute("SecTyp", "CTB"); // 1
    Instrmt_24_set.insert("CTB");
    Instrmt_24.add_attribute("SubTyp", "SecuritySubType_t_286149275"); // 1
    Instrmt_24_set.insert("SecuritySubType_t_286149275");
    Instrmt_24.add_attribute("MMY", "1579903719"); // 1
    Instrmt_24_set.insert("1579903719");
    Instrmt_24.add_attribute("MatDt", "MaturityDate_t_1149272606"); // 1
    Instrmt_24_set.insert("MaturityDate_t_1149272606");
    Instrmt_24.add_attribute("MatTm", "698593356"); // 1
    Instrmt_24_set.insert("698593356");
    Instrmt_24.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2001143013"); // 1
    Instrmt_24_set.insert("SettleOnOpenFlag_t_2001143013");
    Instrmt_24.add_attribute("AsgnMeth", "1982631936"); // 1
    Instrmt_24_set.insert("1982631936");
    Instrmt_24.add_attribute("Status", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("CpnPmt", "CouponPaymentDate_t_2111521625"); // 1
    Instrmt_24_set.insert("CouponPaymentDate_t_2111521625");
    Instrmt_24.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_24_set.insert("FR");
    Instrmt_24.add_attribute("Snrty", "SD"); // 1
    Instrmt_24_set.insert("SD");
    Instrmt_24.add_attribute("NotlPctOut", "21263229.500000"); // 1
    Instrmt_24_set.insert("21263229.500000");
    Instrmt_24.add_attribute("OrigNotlPctOut", "1722292.600000"); // 1
    Instrmt_24_set.insert("1722292.600000");
    Instrmt_24.add_attribute("AttchPnt", "2548942.920000"); // 1
    Instrmt_24_set.insert("2548942.920000");
    Instrmt_24.add_attribute("DetchPnt", "165920.400000"); // 1
    Instrmt_24_set.insert("165920.400000");
    Instrmt_24.add_attribute("Issued", "IssueDate_t_1503596338"); // 1
    Instrmt_24_set.insert("IssueDate_t_1503596338");
    Instrmt_24.add_attribute("RepoCollSecTyp", "142903104"); // 1
    Instrmt_24_set.insert("142903104");
    Instrmt_24.add_attribute("RepoTrm", "995404861"); // 1
    Instrmt_24_set.insert("995404861");
    Instrmt_24.add_attribute("RepoRt", "13295064.340000"); // 1
    Instrmt_24_set.insert("13295064.340000");
    Instrmt_24.add_attribute("Fctr", "19521998.770000"); // 1
    Instrmt_24_set.insert("19521998.770000");
    Instrmt_24.add_attribute("CrdRtg", "CreditRating_t_1890913346"); // 1
    Instrmt_24_set.insert("CreditRating_t_1890913346");
    Instrmt_24.add_attribute("Rgstry", "InstrRegistry_t_1896571414"); // 1
    Instrmt_24_set.insert("InstrRegistry_t_1896571414");
    Instrmt_24.add_attribute("IssuCtry", "1187317992"); // 1
    Instrmt_24_set.insert("1187317992");
    Instrmt_24.add_attribute("StPrv", "StateOrProvinceOfIssue_t_839509299"); // 1
    Instrmt_24_set.insert("StateOrProvinceOfIssue_t_839509299");
    Instrmt_24.add_attribute("Lcl", "LocaleOfIssue_t_601359899"); // 1
    Instrmt_24_set.insert("LocaleOfIssue_t_601359899");
    Instrmt_24.add_attribute("Redeem", "RedemptionDate_t_465847900"); // 1
    Instrmt_24_set.insert("RedemptionDate_t_465847900");
    Instrmt_24.add_attribute("StrkPx", "7639271.180000"); // 1
    Instrmt_24_set.insert("7639271.180000");
    Instrmt_24.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_24_set.insert("CHF");
    Instrmt_24.add_attribute("StrkMult", "17054714.280000"); // 1
    Instrmt_24_set.insert("17054714.280000");
    Instrmt_24.add_attribute("StrkValu", "16357671.770000"); // 1
    Instrmt_24_set.insert("16357671.770000");
    Instrmt_24.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_24_set.insert("4");
    Instrmt_24.add_attribute("StrkPxBndryPrcsn", "10681872.480000"); // 1
    Instrmt_24_set.insert("10681872.480000");
    Instrmt_24.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_24_set.insert("1");
    Instrmt_24.add_attribute("OptAt", "542730412"); // 1
    Instrmt_24_set.insert("542730412");
    Instrmt_24.add_attribute("Mult", "9218466.130000"); // 1
    Instrmt_24_set.insert("9218466.130000");
    Instrmt_24.add_attribute("MultTyp", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("MinPxIncr", "8858845.900000"); // 1
    Instrmt_24_set.insert("8858845.900000");
    Instrmt_24.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_627927001"); // 1
    Instrmt_24_set.insert("MinPriceIncrementAmount_t_627927001");
    Instrmt_24.add_attribute("UOM", "Alw"); // 1
    Instrmt_24_set.insert("Alw");
    Instrmt_24.add_attribute("UOMQty", "8647238.930000"); // 1
    Instrmt_24_set.insert("8647238.930000");
    Instrmt_24.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_24_set.insert("oz_tr");
    Instrmt_24.add_attribute("PxUOMQty", "2849471.590000"); // 1
    Instrmt_24_set.insert("2849471.590000");
    Instrmt_24.add_attribute("SettlMeth", "P"); // 1
    Instrmt_24_set.insert("P");
    Instrmt_24.add_attribute("ExerStyle", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("OptPayAmt", "OptPayoutAmount_t_1876720794"); // 1
    Instrmt_24_set.insert("OptPayoutAmount_t_1876720794");
    Instrmt_24.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_24_set.insert("INT");
    Instrmt_24.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_24_set.insert("FUTDA");
    Instrmt_24.add_attribute("ListMeth", "0"); // 1
    Instrmt_24_set.insert("0");
    Instrmt_24.add_attribute("CapPx", "12348631.520000"); // 1
    Instrmt_24_set.insert("12348631.520000");
    Instrmt_24.add_attribute("FlrPx", "14198844.840000"); // 1
    Instrmt_24_set.insert("14198844.840000");
    Instrmt_24.add_attribute("PutCall", "0"); // 1
    Instrmt_24_set.insert("0");
    Instrmt_24.add_attribute("FlexInd", "false"); // 1
    Instrmt_24_set.insert("false");
    Instrmt_24.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_24_set.insert("false");
    Instrmt_24.add_attribute("TmUnit", "D"); // 1
    Instrmt_24_set.insert("D");
    Instrmt_24.add_attribute("CpnRt", "16325136.180000"); // 1
    Instrmt_24_set.insert("16325136.180000");
    Instrmt_24.add_attribute("Exch", "SecurityExchange_t_1767235734"); // 1
    Instrmt_24_set.insert("SecurityExchange_t_1767235734");
    Instrmt_24.add_attribute("PosLmt", "634091042"); // 1
    Instrmt_24_set.insert("634091042");
    Instrmt_24.add_attribute("NTPosLmt", "1120797147"); // 1
    Instrmt_24_set.insert("1120797147");
    Instrmt_24.add_attribute("Issr", "Issuer_t_859916744"); // 1
    Instrmt_24_set.insert("Issuer_t_859916744");
    Instrmt_24.add_attribute("EncIssrLen", "478228098"); // 1
    Instrmt_24_set.insert("478228098");
    Instrmt_24.add_attribute("EncIssr", "EncodedIssuer_t_41500747"); // 1
    Instrmt_24_set.insert("EncodedIssuer_t_41500747");
    Instrmt_24.add_attribute("Desc", "SecurityDesc_t_1101870360"); // 1
    Instrmt_24_set.insert("SecurityDesc_t_1101870360");
    Instrmt_24.add_attribute("EncSecDescLen", "1020958510"); // 1
    Instrmt_24_set.insert("1020958510");
    Instrmt_24.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_963347361"); // 1
    Instrmt_24_set.insert("EncodedSecurityDesc_t_963347361");
    Instrmt_24.add_attribute("Pool", "Pool_t_1178972264"); // 1
    Instrmt_24_set.insert("Pool_t_1178972264");
    Instrmt_24.add_attribute("CSetMo", "648401119"); // 1
    Instrmt_24_set.insert("648401119");
    Instrmt_24.add_attribute("CPPgm", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("CPRegT", "CPRegType_t_1806899265"); // 1
    Instrmt_24_set.insert("CPRegType_t_1806899265");
    Instrmt_24.add_attribute("Dated", "DatedDate_t_678453985"); // 1
    Instrmt_24_set.insert("DatedDate_t_678453985");
    Instrmt_24.add_attribute("IntAcrl", "InterestAccrualDate_t_566472196"); // 1
    Instrmt_24_set.insert("InterestAccrualDate_t_566472196");
    all_values.push_back(Instrmt_24_set);
    all_compo_names.insert("Instrmt_24_set");

    {
      xml_element AID_27{"AID"};
      multiset<string> AID_27_set;
      AID_27.add_attribute("AltID", "SecurityAltID_t_459571879"); // 2
      AID_27_set.insert("SecurityAltID_t_459571879");
      AID_27.add_attribute("AltIDSrc", "3"); // 2
      AID_27_set.insert("3");
      all_values.push_back(AID_27_set);
      all_compo_names.insert("AID_27_set");

      Instrmt_24.add_element(AID_27);
    }
    {
      xml_element SecXML_27{"SecXML"};
      multiset<string> SecXML_27_set;
      SecXML_27.add_attribute("Schema", "SecurityXMLSchema_t_1447788130"); // 2
      SecXML_27_set.insert("SecurityXMLSchema_t_1447788130");
      all_values.push_back(SecXML_27_set);
      all_compo_names.insert("SecXML_27_set");

      Instrmt_24.add_element(SecXML_27);
    }
    {
      xml_element Evnt_27{"Evnt"};
      multiset<string> Evnt_27_set;
      Evnt_27.add_attribute("EventTyp", "10"); // 2
      Evnt_27_set.insert("10");
      Evnt_27.add_attribute("Dt", "EventDate_t_1391251407"); // 2
      Evnt_27_set.insert("EventDate_t_1391251407");
      Evnt_27.add_attribute("Tm", "EventTime_t_1177025276"); // 2
      Evnt_27_set.insert("EventTime_t_1177025276");
      Evnt_27.add_attribute("Px", "21016162.170000"); // 2
      Evnt_27_set.insert("21016162.170000");
      Evnt_27.add_attribute("Txt", "EventText_t_1623817900"); // 2
      Evnt_27_set.insert("EventText_t_1623817900");
      all_values.push_back(Evnt_27_set);
      all_compo_names.insert("Evnt_27_set");

      Instrmt_24.add_element(Evnt_27);
    }
    {
      xml_element Pty_146{"Pty"};
      multiset<string> Pty_146_set;
      Pty_146.add_attribute("ID", "InstrumentPartyID_t_649692121"); // 2
      Pty_146_set.insert("InstrumentPartyID_t_649692121");
      Pty_146.add_attribute("Src", "G"); // 2
      Pty_146_set.insert("G");
      Pty_146.add_attribute("R", "59"); // 2
      Pty_146_set.insert("59");
      all_values.push_back(Pty_146_set);
      all_compo_names.insert("Pty_146_set");

      {
        xml_element Sub_146{"Sub"};
        multiset<string> Sub_146_set;
        Sub_146.add_attribute("ID", "InstrumentPartySubID_t_961868265"); // 3
        Sub_146_set.insert("InstrumentPartySubID_t_961868265");
        Sub_146.add_attribute("Typ", "11"); // 3
        Sub_146_set.insert("11");
        all_values.push_back(Sub_146_set);
        all_compo_names.insert("Sub_146_set");

        Pty_146.add_element(Sub_146);
      }
      Instrmt_24.add_element(Pty_146);
    }
    {
      xml_element CmplxEvnt_24{"CmplxEvnt"};
      multiset<string> CmplxEvnt_24_set;
      CmplxEvnt_24.add_attribute("Typ", "9"); // 2
      CmplxEvnt_24_set.insert("9");
      CmplxEvnt_24.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2037971527"); // 2
      CmplxEvnt_24_set.insert("ComplexOptPayoutAmount_t_2037971527");
      CmplxEvnt_24.add_attribute("Px", "3627650.940000"); // 2
      CmplxEvnt_24_set.insert("3627650.940000");
      CmplxEvnt_24.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_24_set.insert("1");
      CmplxEvnt_24.add_attribute("PxBndryPrcsn", "5245789.210000"); // 2
      CmplxEvnt_24_set.insert("5245789.210000");
      CmplxEvnt_24.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_24_set.insert("1");
      CmplxEvnt_24.add_attribute("Cond", "1"); // 2
      CmplxEvnt_24_set.insert("1");
      all_values.push_back(CmplxEvnt_24_set);
      all_compo_names.insert("CmplxEvnt_24_set");

      {
        xml_element EvntDts_24{"EvntDts"};
        multiset<string> EvntDts_24_set;
        EvntDts_24.add_attribute("StartDt", "ComplexEventStartDate_t_1002807019"); // 3
        EvntDts_24_set.insert("ComplexEventStartDate_t_1002807019");
        EvntDts_24.add_attribute("EndDt", "ComplexEventEndDate_t_1525062988"); // 3
        EvntDts_24_set.insert("ComplexEventEndDate_t_1525062988");
        all_values.push_back(EvntDts_24_set);
        all_compo_names.insert("EvntDts_24_set");

        {
          xml_element EvntTms_24{"EvntTms"};
          multiset<string> EvntTms_24_set;
          EvntTms_24.add_attribute("StartTm", "68523016"); // 4
          EvntTms_24_set.insert("68523016");
          EvntTms_24.add_attribute("EndTm", "2023765529"); // 4
          EvntTms_24_set.insert("2023765529");
          all_values.push_back(EvntTms_24_set);
          all_compo_names.insert("EvntTms_24_set");

          EvntDts_24.add_element(EvntTms_24);
        }
        CmplxEvnt_24.add_element(EvntDts_24);
      }
      Instrmt_24.add_element(CmplxEvnt_24);
    }
    elt.add_element(Instrmt_24);
  } // end Instrmt
  { // Undly
    xml_element Undly_34{"Undly"};
    multiset<string> Undly_34_set;
    Undly_34.add_attribute("Sym", "UnderlyingSymbol_t_1247495280"); // 1
    Undly_34_set.insert("UnderlyingSymbol_t_1247495280");
    Undly_34.add_attribute("Sfx", "CD"); // 1
    Undly_34_set.insert("CD");
    Undly_34.add_attribute("ID", "UnderlyingSecurityID_t_42675005"); // 1
    Undly_34_set.insert("UnderlyingSecurityID_t_42675005");
    Undly_34.add_attribute("Src", "F"); // 1
    Undly_34_set.insert("F");
    Undly_34.add_attribute("Prod", "9"); // 1
    Undly_34_set.insert("9");
    Undly_34.add_attribute("CFI", "UnderlyingCFICode_t_609147201"); // 1
    Undly_34_set.insert("UnderlyingCFICode_t_609147201");
    Undly_34.add_attribute("SecTyp", "RVLV"); // 1
    Undly_34_set.insert("RVLV");
    Undly_34.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_19054482"); // 1
    Undly_34_set.insert("UnderlyingSecuritySubType_t_19054482");
    Undly_34.add_attribute("MMY", "2056935331"); // 1
    Undly_34_set.insert("2056935331");
    Undly_34.add_attribute("Mat", "UnderlyingMaturityDate_t_1982323608"); // 1
    Undly_34_set.insert("UnderlyingMaturityDate_t_1982323608");
    Undly_34.add_attribute("MatTm", "1410305890"); // 1
    Undly_34_set.insert("1410305890");
    Undly_34.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1086476960"); // 1
    Undly_34_set.insert("UnderlyingCouponPaymentDate_t_1086476960");
    Undly_34.add_attribute("RestrctTyp", "MR"); // 1
    Undly_34_set.insert("MR");
    Undly_34.add_attribute("Snrty", "SD"); // 1
    Undly_34_set.insert("SD");
    Undly_34.add_attribute("NotlPctOut", "17361690.810000"); // 1
    Undly_34_set.insert("17361690.810000");
    Undly_34.add_attribute("OrigNotlPctOut", "9779682.500000"); // 1
    Undly_34_set.insert("9779682.500000");
    Undly_34.add_attribute("AttchPnt", "17828588.780000"); // 1
    Undly_34_set.insert("17828588.780000");
    Undly_34.add_attribute("DetchPnt", "5505536.980000"); // 1
    Undly_34_set.insert("5505536.980000");
    Undly_34.add_attribute("Issued", "UnderlyingIssueDate_t_1855703374"); // 1
    Undly_34_set.insert("UnderlyingIssueDate_t_1855703374");
    Undly_34.add_attribute("RepoCollSecTyp", "269842704"); // 1
    Undly_34_set.insert("269842704");
    Undly_34.add_attribute("RepoTrm", "441041577"); // 1
    Undly_34_set.insert("441041577");
    Undly_34.add_attribute("RepoRt", "709848.200000"); // 1
    Undly_34_set.insert("709848.200000");
    Undly_34.add_attribute("Fctr", "5240622.640000"); // 1
    Undly_34_set.insert("5240622.640000");
    Undly_34.add_attribute("CrdRtg", "UnderlyingCreditRating_t_965620498"); // 1
    Undly_34_set.insert("UnderlyingCreditRating_t_965620498");
    Undly_34.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1554547061"); // 1
    Undly_34_set.insert("UnderlyingInstrRegistry_t_1554547061");
    Undly_34.add_attribute("Ctry", "1638198568"); // 1
    Undly_34_set.insert("1638198568");
    Undly_34.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1968427518"); // 1
    Undly_34_set.insert("UnderlyingStateOrProvinceOfIssue_t_1968427518");
    Undly_34.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_932126401"); // 1
    Undly_34_set.insert("UnderlyingLocaleOfIssue_t_932126401");
    Undly_34.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1706721584"); // 1
    Undly_34_set.insert("UnderlyingRedemptionDate_t_1706721584");
    Undly_34.add_attribute("StrkPx", "18447093.990000"); // 1
    Undly_34_set.insert("18447093.990000");
    Undly_34.add_attribute("StrkCcy", "USD"); // 1
    Undly_34_set.insert("USD");
    Undly_34.add_attribute("OptA", "221908752"); // 1
    Undly_34_set.insert("221908752");
    Undly_34.add_attribute("Mult", "13157281.080000"); // 1
    Undly_34_set.insert("13157281.080000");
    Undly_34.add_attribute("MultTyp", "2"); // 1
    Undly_34_set.insert("2");
    Undly_34.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_34_set.insert("3");
    Undly_34.add_attribute("UOM", "MMbbl"); // 1
    Undly_34_set.insert("MMbbl");
    Undly_34.add_attribute("UOMQty", "9326432.430000"); // 1
    Undly_34_set.insert("9326432.430000");
    Undly_34.add_attribute("PxUOM", "t"); // 1
    Undly_34_set.insert("t");
    Undly_34.add_attribute("PxUOMQty", "18343269.930000"); // 1
    Undly_34_set.insert("18343269.930000");
    Undly_34.add_attribute("TmUnit", "Wk"); // 1
    Undly_34_set.insert("Wk");
    Undly_34.add_attribute("ExerStyle", "2"); // 1
    Undly_34_set.insert("2");
    Undly_34.add_attribute("CpnRt", "7733203.050000"); // 1
    Undly_34_set.insert("7733203.050000");
    Undly_34.add_attribute("Exch", "UnderlyingSecurityExchange_t_556455732"); // 1
    Undly_34_set.insert("UnderlyingSecurityExchange_t_556455732");
    Undly_34.add_attribute("Issr", "UnderlyingIssuer_t_1593562604"); // 1
    Undly_34_set.insert("UnderlyingIssuer_t_1593562604");
    Undly_34.add_attribute("EncUndIssrLen", "362005738"); // 1
    Undly_34_set.insert("362005738");
    Undly_34.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1534423982"); // 1
    Undly_34_set.insert("EncodedUnderlyingIssuer_t_1534423982");
    Undly_34.add_attribute("Desc", "UnderlyingSecurityDesc_t_1228937835"); // 1
    Undly_34_set.insert("UnderlyingSecurityDesc_t_1228937835");
    Undly_34.add_attribute("EncUndSecDescLen", "912559436"); // 1
    Undly_34_set.insert("912559436");
    Undly_34.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1242643708"); // 1
    Undly_34_set.insert("EncodedUnderlyingSecurityDesc_t_1242643708");
    Undly_34.add_attribute("CPPgm", "UnderlyingCPProgram_t_1498780539"); // 1
    Undly_34_set.insert("UnderlyingCPProgram_t_1498780539");
    Undly_34.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1353601013"); // 1
    Undly_34_set.insert("UnderlyingCPRegType_t_1353601013");
    Undly_34.add_attribute("AllocPct", "13136285.280000"); // 1
    Undly_34_set.insert("13136285.280000");
    Undly_34.add_attribute("Ccy", "EUR"); // 1
    Undly_34_set.insert("EUR");
    Undly_34.add_attribute("Qty", "7206919.410000"); // 1
    Undly_34_set.insert("7206919.410000");
    Undly_34.add_attribute("SettlTyp", "2"); // 1
    Undly_34_set.insert("2");
    Undly_34.add_attribute("CashAmt", "UnderlyingCashAmount_t_2140165381"); // 1
    Undly_34_set.insert("UnderlyingCashAmount_t_2140165381");
    Undly_34.add_attribute("CashTyp", "DIFF"); // 1
    Undly_34_set.insert("DIFF");
    Undly_34.add_attribute("Px", "10727956.590000"); // 1
    Undly_34_set.insert("10727956.590000");
    Undly_34.add_attribute("DirtPx", "18373911.330000"); // 1
    Undly_34_set.insert("18373911.330000");
    Undly_34.add_attribute("EndPx", "7783877.980000"); // 1
    Undly_34_set.insert("7783877.980000");
    Undly_34.add_attribute("StartVal", "UnderlyingStartValue_t_1879528875"); // 1
    Undly_34_set.insert("UnderlyingStartValue_t_1879528875");
    Undly_34.add_attribute("CurVal", "UnderlyingCurrentValue_t_2059299885"); // 1
    Undly_34_set.insert("UnderlyingCurrentValue_t_2059299885");
    Undly_34.add_attribute("EndVal", "UnderlyingEndValue_t_2094115906"); // 1
    Undly_34_set.insert("UnderlyingEndValue_t_2094115906");
    Undly_34.add_attribute("AdjQty", "14456893.420000"); // 1
    Undly_34_set.insert("14456893.420000");
    Undly_34.add_attribute("FxRate", "13368619.750000"); // 1
    Undly_34_set.insert("13368619.750000");
    Undly_34.add_attribute("FxRateCalc", "D"); // 1
    Undly_34_set.insert("D");
    Undly_34.add_attribute("CapValu", "UnderlyingCapValue_t_230848937"); // 1
    Undly_34_set.insert("UnderlyingCapValue_t_230848937");
    Undly_34.add_attribute("SetMeth", "UnderlyingSettlMethod_t_633478547"); // 1
    Undly_34_set.insert("UnderlyingSettlMethod_t_633478547");
    Undly_34.add_attribute("PutCall", "1558350912"); // 1
    Undly_34_set.insert("1558350912");
    all_values.push_back(Undly_34_set);
    all_compo_names.insert("Undly_34_set");

    {
      xml_element UndAID_34{"UndAID"};
      multiset<string> UndAID_34_set;
      UndAID_34.add_attribute("AltID", "UnderlyingSecurityAltID_t_998332141"); // 2
      UndAID_34_set.insert("UnderlyingSecurityAltID_t_998332141");
      UndAID_34.add_attribute("AltIDSrc", "F"); // 2
      UndAID_34_set.insert("F");
      all_values.push_back(UndAID_34_set);
      all_compo_names.insert("UndAID_34_set");

      Undly_34.add_element(UndAID_34);
    }
    {
      xml_element Stip_54{"Stip"};
      multiset<string> Stip_54_set;
      Stip_54.add_attribute("Typ", "STRUCT"); // 2
      Stip_54_set.insert("STRUCT");
      Stip_54.add_attribute("Val", "UnderlyingStipValue_t_1554787873"); // 2
      Stip_54_set.insert("UnderlyingStipValue_t_1554787873");
      all_values.push_back(Stip_54_set);
      all_compo_names.insert("Stip_54_set");

      Undly_34.add_element(Stip_54);
    }
    {
      xml_element Pty_147{"Pty"};
      multiset<string> Pty_147_set;
      Pty_147.add_attribute("ID", "UnderlyingInstrumentPartyID_t_786479966"); // 2
      Pty_147_set.insert("UnderlyingInstrumentPartyID_t_786479966");
      Pty_147.add_attribute("Src", "C"); // 2
      Pty_147_set.insert("C");
      Pty_147.add_attribute("R", "17"); // 2
      Pty_147_set.insert("17");
      all_values.push_back(Pty_147_set);
      all_compo_names.insert("Pty_147_set");

      {
        xml_element Sub_147{"Sub"};
        multiset<string> Sub_147_set;
        Sub_147.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2015417801"); // 3
        Sub_147_set.insert("UnderlyingInstrumentPartySubID_t_2015417801");
        Sub_147.add_attribute("Typ", "3"); // 3
        Sub_147_set.insert("3");
        all_values.push_back(Sub_147_set);
        all_compo_names.insert("Sub_147_set");

        Pty_147.add_element(Sub_147);
      }
      Undly_34.add_element(Pty_147);
    }
    elt.add_element(Undly_34);
  } // end Undly
  { // Undly
    xml_element Undly_35{"Undly"};
    multiset<string> Undly_35_set;
    Undly_35.add_attribute("Sym", "UnderlyingSymbol_t_36888268"); // 1
    Undly_35_set.insert("UnderlyingSymbol_t_36888268");
    Undly_35.add_attribute("Sfx", "CD"); // 1
    Undly_35_set.insert("CD");
    Undly_35.add_attribute("ID", "UnderlyingSecurityID_t_664870108"); // 1
    Undly_35_set.insert("UnderlyingSecurityID_t_664870108");
    Undly_35.add_attribute("Src", "4"); // 1
    Undly_35_set.insert("4");
    Undly_35.add_attribute("Prod", "10"); // 1
    Undly_35_set.insert("10");
    Undly_35.add_attribute("CFI", "UnderlyingCFICode_t_836607972"); // 1
    Undly_35_set.insert("UnderlyingCFICode_t_836607972");
    Undly_35.add_attribute("SecTyp", "OPT"); // 1
    Undly_35_set.insert("OPT");
    Undly_35.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_608147922"); // 1
    Undly_35_set.insert("UnderlyingSecuritySubType_t_608147922");
    Undly_35.add_attribute("MMY", "829289705"); // 1
    Undly_35_set.insert("829289705");
    Undly_35.add_attribute("Mat", "UnderlyingMaturityDate_t_1576543433"); // 1
    Undly_35_set.insert("UnderlyingMaturityDate_t_1576543433");
    Undly_35.add_attribute("MatTm", "1680943581"); // 1
    Undly_35_set.insert("1680943581");
    Undly_35.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_519197190"); // 1
    Undly_35_set.insert("UnderlyingCouponPaymentDate_t_519197190");
    Undly_35.add_attribute("RestrctTyp", "XR"); // 1
    Undly_35_set.insert("XR");
    Undly_35.add_attribute("Snrty", "SB"); // 1
    Undly_35_set.insert("SB");
    Undly_35.add_attribute("NotlPctOut", "4310134.270000"); // 1
    Undly_35_set.insert("4310134.270000");
    Undly_35.add_attribute("OrigNotlPctOut", "1540798.410000"); // 1
    Undly_35_set.insert("1540798.410000");
    Undly_35.add_attribute("AttchPnt", "7111945.030000"); // 1
    Undly_35_set.insert("7111945.030000");
    Undly_35.add_attribute("DetchPnt", "17678754.020000"); // 1
    Undly_35_set.insert("17678754.020000");
    Undly_35.add_attribute("Issued", "UnderlyingIssueDate_t_2025587409"); // 1
    Undly_35_set.insert("UnderlyingIssueDate_t_2025587409");
    Undly_35.add_attribute("RepoCollSecTyp", "942043440"); // 1
    Undly_35_set.insert("942043440");
    Undly_35.add_attribute("RepoTrm", "253870302"); // 1
    Undly_35_set.insert("253870302");
    Undly_35.add_attribute("RepoRt", "14364546.730000"); // 1
    Undly_35_set.insert("14364546.730000");
    Undly_35.add_attribute("Fctr", "19403755.810000"); // 1
    Undly_35_set.insert("19403755.810000");
    Undly_35.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1594271312"); // 1
    Undly_35_set.insert("UnderlyingCreditRating_t_1594271312");
    Undly_35.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1620642243"); // 1
    Undly_35_set.insert("UnderlyingInstrRegistry_t_1620642243");
    Undly_35.add_attribute("Ctry", "1347679807"); // 1
    Undly_35_set.insert("1347679807");
    Undly_35.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_233267630"); // 1
    Undly_35_set.insert("UnderlyingStateOrProvinceOfIssue_t_233267630");
    Undly_35.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_19351902"); // 1
    Undly_35_set.insert("UnderlyingLocaleOfIssue_t_19351902");
    Undly_35.add_attribute("Redeem", "UnderlyingRedemptionDate_t_141924367"); // 1
    Undly_35_set.insert("UnderlyingRedemptionDate_t_141924367");
    Undly_35.add_attribute("StrkPx", "1012017.840000"); // 1
    Undly_35_set.insert("1012017.840000");
    Undly_35.add_attribute("StrkCcy", "CAN"); // 1
    Undly_35_set.insert("CAN");
    Undly_35.add_attribute("OptA", "1467916476"); // 1
    Undly_35_set.insert("1467916476");
    Undly_35.add_attribute("Mult", "21429747.540000"); // 1
    Undly_35_set.insert("21429747.540000");
    Undly_35.add_attribute("MultTyp", "1"); // 1
    Undly_35_set.insert("1");
    Undly_35.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_35_set.insert("1");
    Undly_35.add_attribute("UOM", "tn"); // 1
    Undly_35_set.insert("tn");
    Undly_35.add_attribute("UOMQty", "14530545.230000"); // 1
    Undly_35_set.insert("14530545.230000");
    Undly_35.add_attribute("PxUOM", "USD"); // 1
    Undly_35_set.insert("USD");
    Undly_35.add_attribute("PxUOMQty", "16613887.840000"); // 1
    Undly_35_set.insert("16613887.840000");
    Undly_35.add_attribute("TmUnit", "Mo"); // 1
    Undly_35_set.insert("Mo");
    Undly_35.add_attribute("ExerStyle", "0"); // 1
    Undly_35_set.insert("0");
    Undly_35.add_attribute("CpnRt", "331023.260000"); // 1
    Undly_35_set.insert("331023.260000");
    Undly_35.add_attribute("Exch", "UnderlyingSecurityExchange_t_1089561892"); // 1
    Undly_35_set.insert("UnderlyingSecurityExchange_t_1089561892");
    Undly_35.add_attribute("Issr", "UnderlyingIssuer_t_2117103341"); // 1
    Undly_35_set.insert("UnderlyingIssuer_t_2117103341");
    Undly_35.add_attribute("EncUndIssrLen", "464115754"); // 1
    Undly_35_set.insert("464115754");
    Undly_35.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1243641733"); // 1
    Undly_35_set.insert("EncodedUnderlyingIssuer_t_1243641733");
    Undly_35.add_attribute("Desc", "UnderlyingSecurityDesc_t_680814196"); // 1
    Undly_35_set.insert("UnderlyingSecurityDesc_t_680814196");
    Undly_35.add_attribute("EncUndSecDescLen", "84507508"); // 1
    Undly_35_set.insert("84507508");
    Undly_35.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1121745494"); // 1
    Undly_35_set.insert("EncodedUnderlyingSecurityDesc_t_1121745494");
    Undly_35.add_attribute("CPPgm", "UnderlyingCPProgram_t_1622857636"); // 1
    Undly_35_set.insert("UnderlyingCPProgram_t_1622857636");
    Undly_35.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_338377810"); // 1
    Undly_35_set.insert("UnderlyingCPRegType_t_338377810");
    Undly_35.add_attribute("AllocPct", "4107165.200000"); // 1
    Undly_35_set.insert("4107165.200000");
    Undly_35.add_attribute("Ccy", "USD"); // 1
    Undly_35_set.insert("USD");
    Undly_35.add_attribute("Qty", "20313587.630000"); // 1
    Undly_35_set.insert("20313587.630000");
    Undly_35.add_attribute("SettlTyp", "2"); // 1
    Undly_35_set.insert("2");
    Undly_35.add_attribute("CashAmt", "UnderlyingCashAmount_t_18433105"); // 1
    Undly_35_set.insert("UnderlyingCashAmount_t_18433105");
    Undly_35.add_attribute("CashTyp", "DIFF"); // 1
    Undly_35_set.insert("DIFF");
    Undly_35.add_attribute("Px", "7578700.960000"); // 1
    Undly_35_set.insert("7578700.960000");
    Undly_35.add_attribute("DirtPx", "1196348.890000"); // 1
    Undly_35_set.insert("1196348.890000");
    Undly_35.add_attribute("EndPx", "13813316.630000"); // 1
    Undly_35_set.insert("13813316.630000");
    Undly_35.add_attribute("StartVal", "UnderlyingStartValue_t_936682731"); // 1
    Undly_35_set.insert("UnderlyingStartValue_t_936682731");
    Undly_35.add_attribute("CurVal", "UnderlyingCurrentValue_t_1587551365"); // 1
    Undly_35_set.insert("UnderlyingCurrentValue_t_1587551365");
    Undly_35.add_attribute("EndVal", "UnderlyingEndValue_t_1376822770"); // 1
    Undly_35_set.insert("UnderlyingEndValue_t_1376822770");
    Undly_35.add_attribute("AdjQty", "3185285.160000"); // 1
    Undly_35_set.insert("3185285.160000");
    Undly_35.add_attribute("FxRate", "25743.930000"); // 1
    Undly_35_set.insert("25743.930000");
    Undly_35.add_attribute("FxRateCalc", "M"); // 1
    Undly_35_set.insert("M");
    Undly_35.add_attribute("CapValu", "UnderlyingCapValue_t_1771583039"); // 1
    Undly_35_set.insert("UnderlyingCapValue_t_1771583039");
    Undly_35.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1173228992"); // 1
    Undly_35_set.insert("UnderlyingSettlMethod_t_1173228992");
    Undly_35.add_attribute("PutCall", "1722826984"); // 1
    Undly_35_set.insert("1722826984");
    all_values.push_back(Undly_35_set);
    all_compo_names.insert("Undly_35_set");

    {
      xml_element UndAID_35{"UndAID"};
      multiset<string> UndAID_35_set;
      UndAID_35.add_attribute("AltID", "UnderlyingSecurityAltID_t_506213699"); // 2
      UndAID_35_set.insert("UnderlyingSecurityAltID_t_506213699");
      UndAID_35.add_attribute("AltIDSrc", "D"); // 2
      UndAID_35_set.insert("D");
      all_values.push_back(UndAID_35_set);
      all_compo_names.insert("UndAID_35_set");

      Undly_35.add_element(UndAID_35);
    }
    {
      xml_element Stip_55{"Stip"};
      multiset<string> Stip_55_set;
      Stip_55.add_attribute("Typ", "PMAX"); // 2
      Stip_55_set.insert("PMAX");
      Stip_55.add_attribute("Val", "UnderlyingStipValue_t_1595775591"); // 2
      Stip_55_set.insert("UnderlyingStipValue_t_1595775591");
      all_values.push_back(Stip_55_set);
      all_compo_names.insert("Stip_55_set");

      Undly_35.add_element(Stip_55);
    }
    {
      xml_element Pty_148{"Pty"};
      multiset<string> Pty_148_set;
      Pty_148.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1846963217"); // 2
      Pty_148_set.insert("UnderlyingInstrumentPartyID_t_1846963217");
      Pty_148.add_attribute("Src", "G"); // 2
      Pty_148_set.insert("G");
      Pty_148.add_attribute("R", "39"); // 2
      Pty_148_set.insert("39");
      all_values.push_back(Pty_148_set);
      all_compo_names.insert("Pty_148_set");

      {
        xml_element Sub_148{"Sub"};
        multiset<string> Sub_148_set;
        Sub_148.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_380293765"); // 3
        Sub_148_set.insert("UnderlyingInstrumentPartySubID_t_380293765");
        Sub_148.add_attribute("Typ", "21"); // 3
        Sub_148_set.insert("21");
        all_values.push_back(Sub_148_set);
        all_compo_names.insert("Sub_148_set");

        Pty_148.add_element(Sub_148);
      }
      Undly_35.add_element(Pty_148);
    }
    elt.add_element(Undly_35);
  } // end Undly
  { // Undly
    xml_element Undly_36{"Undly"};
    multiset<string> Undly_36_set;
    Undly_36.add_attribute("Sym", "UnderlyingSymbol_t_1813679171"); // 1
    Undly_36_set.insert("UnderlyingSymbol_t_1813679171");
    Undly_36.add_attribute("Sfx", "WI"); // 1
    Undly_36_set.insert("WI");
    Undly_36.add_attribute("ID", "UnderlyingSecurityID_t_495446736"); // 1
    Undly_36_set.insert("UnderlyingSecurityID_t_495446736");
    Undly_36.add_attribute("Src", "M"); // 1
    Undly_36_set.insert("M");
    Undly_36.add_attribute("Prod", "4"); // 1
    Undly_36_set.insert("4");
    Undly_36.add_attribute("CFI", "UnderlyingCFICode_t_280612210"); // 1
    Undly_36_set.insert("UnderlyingCFICode_t_280612210");
    Undly_36.add_attribute("SecTyp", "VRDN"); // 1
    Undly_36_set.insert("VRDN");
    Undly_36.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1887363052"); // 1
    Undly_36_set.insert("UnderlyingSecuritySubType_t_1887363052");
    Undly_36.add_attribute("MMY", "299045315"); // 1
    Undly_36_set.insert("299045315");
    Undly_36.add_attribute("Mat", "UnderlyingMaturityDate_t_2011497824"); // 1
    Undly_36_set.insert("UnderlyingMaturityDate_t_2011497824");
    Undly_36.add_attribute("MatTm", "497749500"); // 1
    Undly_36_set.insert("497749500");
    Undly_36.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_418680204"); // 1
    Undly_36_set.insert("UnderlyingCouponPaymentDate_t_418680204");
    Undly_36.add_attribute("RestrctTyp", "XR"); // 1
    Undly_36_set.insert("XR");
    Undly_36.add_attribute("Snrty", "SR"); // 1
    Undly_36_set.insert("SR");
    Undly_36.add_attribute("NotlPctOut", "20062315.700000"); // 1
    Undly_36_set.insert("20062315.700000");
    Undly_36.add_attribute("OrigNotlPctOut", "4746849.610000"); // 1
    Undly_36_set.insert("4746849.610000");
    Undly_36.add_attribute("AttchPnt", "17529607.480000"); // 1
    Undly_36_set.insert("17529607.480000");
    Undly_36.add_attribute("DetchPnt", "20088059.630000"); // 1
    Undly_36_set.insert("20088059.630000");
    Undly_36.add_attribute("Issued", "UnderlyingIssueDate_t_536123162"); // 1
    Undly_36_set.insert("UnderlyingIssueDate_t_536123162");
    Undly_36.add_attribute("RepoCollSecTyp", "1377060139"); // 1
    Undly_36_set.insert("1377060139");
    Undly_36.add_attribute("RepoTrm", "1034551307"); // 1
    Undly_36_set.insert("1034551307");
    Undly_36.add_attribute("RepoRt", "1114664.980000"); // 1
    Undly_36_set.insert("1114664.980000");
    Undly_36.add_attribute("Fctr", "18832738.380000"); // 1
    Undly_36_set.insert("18832738.380000");
    Undly_36.add_attribute("CrdRtg", "UnderlyingCreditRating_t_764411183"); // 1
    Undly_36_set.insert("UnderlyingCreditRating_t_764411183");
    Undly_36.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1867395809"); // 1
    Undly_36_set.insert("UnderlyingInstrRegistry_t_1867395809");
    Undly_36.add_attribute("Ctry", "1331565782"); // 1
    Undly_36_set.insert("1331565782");
    Undly_36.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_463890752"); // 1
    Undly_36_set.insert("UnderlyingStateOrProvinceOfIssue_t_463890752");
    Undly_36.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1939957226"); // 1
    Undly_36_set.insert("UnderlyingLocaleOfIssue_t_1939957226");
    Undly_36.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2023499459"); // 1
    Undly_36_set.insert("UnderlyingRedemptionDate_t_2023499459");
    Undly_36.add_attribute("StrkPx", "8441845.170000"); // 1
    Undly_36_set.insert("8441845.170000");
    Undly_36.add_attribute("StrkCcy", "GBP"); // 1
    Undly_36_set.insert("GBP");
    Undly_36.add_attribute("OptA", "699852271"); // 1
    Undly_36_set.insert("699852271");
    Undly_36.add_attribute("Mult", "4449892.400000"); // 1
    Undly_36_set.insert("4449892.400000");
    Undly_36.add_attribute("MultTyp", "2"); // 1
    Undly_36_set.insert("2");
    Undly_36.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_36_set.insert("4");
    Undly_36.add_attribute("UOM", "Bbl"); // 1
    Undly_36_set.insert("Bbl");
    Undly_36.add_attribute("UOMQty", "17273941.840000"); // 1
    Undly_36_set.insert("17273941.840000");
    Undly_36.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_36_set.insert("MMBtu");
    Undly_36.add_attribute("PxUOMQty", "10246467.660000"); // 1
    Undly_36_set.insert("10246467.660000");
    Undly_36.add_attribute("TmUnit", "D"); // 1
    Undly_36_set.insert("D");
    Undly_36.add_attribute("ExerStyle", "0"); // 1
    Undly_36_set.insert("0");
    Undly_36.add_attribute("CpnRt", "14433269.700000"); // 1
    Undly_36_set.insert("14433269.700000");
    Undly_36.add_attribute("Exch", "UnderlyingSecurityExchange_t_689270552"); // 1
    Undly_36_set.insert("UnderlyingSecurityExchange_t_689270552");
    Undly_36.add_attribute("Issr", "UnderlyingIssuer_t_1495847083"); // 1
    Undly_36_set.insert("UnderlyingIssuer_t_1495847083");
    Undly_36.add_attribute("EncUndIssrLen", "1302074892"); // 1
    Undly_36_set.insert("1302074892");
    Undly_36.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1163955513"); // 1
    Undly_36_set.insert("EncodedUnderlyingIssuer_t_1163955513");
    Undly_36.add_attribute("Desc", "UnderlyingSecurityDesc_t_1101324183"); // 1
    Undly_36_set.insert("UnderlyingSecurityDesc_t_1101324183");
    Undly_36.add_attribute("EncUndSecDescLen", "1163397208"); // 1
    Undly_36_set.insert("1163397208");
    Undly_36.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1700078675"); // 1
    Undly_36_set.insert("EncodedUnderlyingSecurityDesc_t_1700078675");
    Undly_36.add_attribute("CPPgm", "UnderlyingCPProgram_t_330900674"); // 1
    Undly_36_set.insert("UnderlyingCPProgram_t_330900674");
    Undly_36.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_50464867"); // 1
    Undly_36_set.insert("UnderlyingCPRegType_t_50464867");
    Undly_36.add_attribute("AllocPct", "18115451.740000"); // 1
    Undly_36_set.insert("18115451.740000");
    Undly_36.add_attribute("Ccy", "EUR"); // 1
    Undly_36_set.insert("EUR");
    Undly_36.add_attribute("Qty", "15314573.350000"); // 1
    Undly_36_set.insert("15314573.350000");
    Undly_36.add_attribute("SettlTyp", "2"); // 1
    Undly_36_set.insert("2");
    Undly_36.add_attribute("CashAmt", "UnderlyingCashAmount_t_1278766803"); // 1
    Undly_36_set.insert("UnderlyingCashAmount_t_1278766803");
    Undly_36.add_attribute("CashTyp", "FIXED"); // 1
    Undly_36_set.insert("FIXED");
    Undly_36.add_attribute("Px", "12742724.580000"); // 1
    Undly_36_set.insert("12742724.580000");
    Undly_36.add_attribute("DirtPx", "21229513.210000"); // 1
    Undly_36_set.insert("21229513.210000");
    Undly_36.add_attribute("EndPx", "12734734.180000"); // 1
    Undly_36_set.insert("12734734.180000");
    Undly_36.add_attribute("StartVal", "UnderlyingStartValue_t_816483792"); // 1
    Undly_36_set.insert("UnderlyingStartValue_t_816483792");
    Undly_36.add_attribute("CurVal", "UnderlyingCurrentValue_t_675319944"); // 1
    Undly_36_set.insert("UnderlyingCurrentValue_t_675319944");
    Undly_36.add_attribute("EndVal", "UnderlyingEndValue_t_1718462658"); // 1
    Undly_36_set.insert("UnderlyingEndValue_t_1718462658");
    Undly_36.add_attribute("AdjQty", "4356071.700000"); // 1
    Undly_36_set.insert("4356071.700000");
    Undly_36.add_attribute("FxRate", "4991058.900000"); // 1
    Undly_36_set.insert("4991058.900000");
    Undly_36.add_attribute("FxRateCalc", "M"); // 1
    Undly_36_set.insert("M");
    Undly_36.add_attribute("CapValu", "UnderlyingCapValue_t_15517707"); // 1
    Undly_36_set.insert("UnderlyingCapValue_t_15517707");
    Undly_36.add_attribute("SetMeth", "UnderlyingSettlMethod_t_62771241"); // 1
    Undly_36_set.insert("UnderlyingSettlMethod_t_62771241");
    Undly_36.add_attribute("PutCall", "1321227226"); // 1
    Undly_36_set.insert("1321227226");
    all_values.push_back(Undly_36_set);
    all_compo_names.insert("Undly_36_set");

    {
      xml_element UndAID_36{"UndAID"};
      multiset<string> UndAID_36_set;
      UndAID_36.add_attribute("AltID", "UnderlyingSecurityAltID_t_1606926067"); // 2
      UndAID_36_set.insert("UnderlyingSecurityAltID_t_1606926067");
      UndAID_36.add_attribute("AltIDSrc", "A"); // 2
      UndAID_36_set.insert("A");
      all_values.push_back(UndAID_36_set);
      all_compo_names.insert("UndAID_36_set");

      Undly_36.add_element(UndAID_36);
    }
    {
      xml_element Stip_56{"Stip"};
      multiset<string> Stip_56_set;
      Stip_56.add_attribute("Typ", "BROKERCREDIT"); // 2
      Stip_56_set.insert("BROKERCREDIT");
      Stip_56.add_attribute("Val", "UnderlyingStipValue_t_148712971"); // 2
      Stip_56_set.insert("UnderlyingStipValue_t_148712971");
      all_values.push_back(Stip_56_set);
      all_compo_names.insert("Stip_56_set");

      Undly_36.add_element(Stip_56);
    }
    {
      xml_element Pty_149{"Pty"};
      multiset<string> Pty_149_set;
      Pty_149.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1620033176"); // 2
      Pty_149_set.insert("UnderlyingInstrumentPartyID_t_1620033176");
      Pty_149.add_attribute("Src", "4"); // 2
      Pty_149_set.insert("4");
      Pty_149.add_attribute("R", "67"); // 2
      Pty_149_set.insert("67");
      all_values.push_back(Pty_149_set);
      all_compo_names.insert("Pty_149_set");

      {
        xml_element Sub_149{"Sub"};
        multiset<string> Sub_149_set;
        Sub_149.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_573873712"); // 3
        Sub_149_set.insert("UnderlyingInstrumentPartySubID_t_573873712");
        Sub_149.add_attribute("Typ", "17"); // 3
        Sub_149_set.insert("17");
        all_values.push_back(Sub_149_set);
        all_compo_names.insert("Sub_149_set");

        Pty_149.add_element(Sub_149);
      }
      Undly_36.add_element(Pty_149);
    }
    elt.add_element(Undly_36);
  } // end Undly
  { // Leg
    xml_element Leg_35{"Leg"};
    multiset<string> Leg_35_set;
    Leg_35.add_attribute("Sym", "LegSymbol_t_904774386"); // 1
    Leg_35_set.insert("LegSymbol_t_904774386");
    Leg_35.add_attribute("Sfx", "WI"); // 1
    Leg_35_set.insert("WI");
    Leg_35.add_attribute("ID", "LegSecurityID_t_529325038"); // 1
    Leg_35_set.insert("LegSecurityID_t_529325038");
    Leg_35.add_attribute("Src", "A"); // 1
    Leg_35_set.insert("A");
    Leg_35.add_attribute("Prod", "4"); // 1
    Leg_35_set.insert("4");
    Leg_35.add_attribute("CFI", "LegCFICode_t_2060782374"); // 1
    Leg_35_set.insert("LegCFICode_t_2060782374");
    Leg_35.add_attribute("SecTyp", "ABS"); // 1
    Leg_35_set.insert("ABS");
    Leg_35.add_attribute("SecSubTyp", "LegSecuritySubType_t_931683075"); // 1
    Leg_35_set.insert("LegSecuritySubType_t_931683075");
    Leg_35.add_attribute("MMY", "1237229640"); // 1
    Leg_35_set.insert("1237229640");
    Leg_35.add_attribute("Mat", "LegMaturityDate_t_1496510708"); // 1
    Leg_35_set.insert("LegMaturityDate_t_1496510708");
    Leg_35.add_attribute("MatTm", "907150748"); // 1
    Leg_35_set.insert("907150748");
    Leg_35.add_attribute("CpnPmt", "LegCouponPaymentDate_t_363219410"); // 1
    Leg_35_set.insert("LegCouponPaymentDate_t_363219410");
    Leg_35.add_attribute("Issued", "LegIssueDate_t_165510853"); // 1
    Leg_35_set.insert("LegIssueDate_t_165510853");
    Leg_35.add_attribute("RepoCollSecTyp", "1582470692"); // 1
    Leg_35_set.insert("1582470692");
    Leg_35.add_attribute("RepoTrm", "2081682068"); // 1
    Leg_35_set.insert("2081682068");
    Leg_35.add_attribute("RepoRt", "6011180.230000"); // 1
    Leg_35_set.insert("6011180.230000");
    Leg_35.add_attribute("Fctr", "20815765.830000"); // 1
    Leg_35_set.insert("20815765.830000");
    Leg_35.add_attribute("CrdRtg", "LegCreditRating_t_230778880"); // 1
    Leg_35_set.insert("LegCreditRating_t_230778880");
    Leg_35.add_attribute("Rgstry", "LegInstrRegistry_t_616635730"); // 1
    Leg_35_set.insert("LegInstrRegistry_t_616635730");
    Leg_35.add_attribute("Ctry", "2144347824"); // 1
    Leg_35_set.insert("2144347824");
    Leg_35.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1552006107"); // 1
    Leg_35_set.insert("LegStateOrProvinceOfIssue_t_1552006107");
    Leg_35.add_attribute("Lcl", "LegLocaleOfIssue_t_76078150"); // 1
    Leg_35_set.insert("LegLocaleOfIssue_t_76078150");
    Leg_35.add_attribute("Redeem", "LegRedemptionDate_t_121050269"); // 1
    Leg_35_set.insert("LegRedemptionDate_t_121050269");
    Leg_35.add_attribute("Strk", "215930.080000"); // 1
    Leg_35_set.insert("215930.080000");
    Leg_35.add_attribute("StrkCcy", "GBP"); // 1
    Leg_35_set.insert("GBP");
    Leg_35.add_attribute("OptA", "1940738449"); // 1
    Leg_35_set.insert("1940738449");
    Leg_35.add_attribute("Cmult", "15374596.060000"); // 1
    Leg_35_set.insert("15374596.060000");
    Leg_35.add_attribute("MultTyp", "1"); // 1
    Leg_35_set.insert("1");
    Leg_35.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_35_set.insert("3");
    Leg_35.add_attribute("UOM", "MMbbl"); // 1
    Leg_35_set.insert("MMbbl");
    Leg_35.add_attribute("UOMQty", "10722478.960000"); // 1
    Leg_35_set.insert("10722478.960000");
    Leg_35.add_attribute("PxUOM", "MMBtu"); // 1
    Leg_35_set.insert("MMBtu");
    Leg_35.add_attribute("PxUOMQty", "7845645.090000"); // 1
    Leg_35_set.insert("7845645.090000");
    Leg_35.add_attribute("TmUnit", "Min"); // 1
    Leg_35_set.insert("Min");
    Leg_35.add_attribute("ExerStyle", "0"); // 1
    Leg_35_set.insert("0");
    Leg_35.add_attribute("CpnRt", "6978632.350000"); // 1
    Leg_35_set.insert("6978632.350000");
    Leg_35.add_attribute("Exch", "LegSecurityExchange_t_118467750"); // 1
    Leg_35_set.insert("LegSecurityExchange_t_118467750");
    Leg_35.add_attribute("Issr", "LegIssuer_t_150953371"); // 1
    Leg_35_set.insert("LegIssuer_t_150953371");
    Leg_35.add_attribute("EncLegIssrLen", "1935092875"); // 1
    Leg_35_set.insert("1935092875");
    Leg_35.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1614978459"); // 1
    Leg_35_set.insert("EncodedLegIssuer_t_1614978459");
    Leg_35.add_attribute("Desc", "LegSecurityDesc_t_1058104120"); // 1
    Leg_35_set.insert("LegSecurityDesc_t_1058104120");
    Leg_35.add_attribute("EncLegSecDescLen", "150828637"); // 1
    Leg_35_set.insert("150828637");
    Leg_35.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1780489312"); // 1
    Leg_35_set.insert("EncodedLegSecurityDesc_t_1780489312");
    Leg_35.add_attribute("RatioQty", "4930911.640000"); // 1
    Leg_35_set.insert("4930911.640000");
    Leg_35.add_attribute("Side", "2"); // 1
    Leg_35_set.insert("2");
    Leg_35.add_attribute("Ccy", "CAN"); // 1
    Leg_35_set.insert("CAN");
    Leg_35.add_attribute("Pool", "LegPool_t_315805938"); // 1
    Leg_35_set.insert("LegPool_t_315805938");
    Leg_35.add_attribute("Dated", "LegDatedDate_t_850759418"); // 1
    Leg_35_set.insert("LegDatedDate_t_850759418");
    Leg_35.add_attribute("CSetMo", "424048276"); // 1
    Leg_35_set.insert("424048276");
    Leg_35.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1867812045"); // 1
    Leg_35_set.insert("LegInterestAccrualDate_t_1867812045");
    Leg_35.add_attribute("PutCall", "926837568"); // 1
    Leg_35_set.insert("926837568");
    Leg_35.add_attribute("LegOptionRatio", "5450985.450000"); // 1
    Leg_35_set.insert("5450985.450000");
    Leg_35.add_attribute("Px", "18894050.530000"); // 1
    Leg_35_set.insert("18894050.530000");
    all_values.push_back(Leg_35_set);
    all_compo_names.insert("Leg_35_set");

    {
      xml_element LegAID_35{"LegAID"};
      multiset<string> LegAID_35_set;
      LegAID_35.add_attribute("SecAltID", "LegSecurityAltID_t_1151628689"); // 2
      LegAID_35_set.insert("LegSecurityAltID_t_1151628689");
      LegAID_35.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_35_set.insert("4");
      all_values.push_back(LegAID_35_set);
      all_compo_names.insert("LegAID_35_set");

      Leg_35.add_element(LegAID_35);
    }
    elt.add_element(Leg_35);
  } // end Leg
  { // Leg
    xml_element Leg_36{"Leg"};
    multiset<string> Leg_36_set;
    Leg_36.add_attribute("Sym", "LegSymbol_t_1682659854"); // 1
    Leg_36_set.insert("LegSymbol_t_1682659854");
    Leg_36.add_attribute("Sfx", "CD"); // 1
    Leg_36_set.insert("CD");
    Leg_36.add_attribute("ID", "LegSecurityID_t_306171853"); // 1
    Leg_36_set.insert("LegSecurityID_t_306171853");
    Leg_36.add_attribute("Src", "E"); // 1
    Leg_36_set.insert("E");
    Leg_36.add_attribute("Prod", "3"); // 1
    Leg_36_set.insert("3");
    Leg_36.add_attribute("CFI", "LegCFICode_t_1378419750"); // 1
    Leg_36_set.insert("LegCFICode_t_1378419750");
    Leg_36.add_attribute("SecTyp", "FAC"); // 1
    Leg_36_set.insert("FAC");
    Leg_36.add_attribute("SecSubTyp", "LegSecuritySubType_t_1581408628"); // 1
    Leg_36_set.insert("LegSecuritySubType_t_1581408628");
    Leg_36.add_attribute("MMY", "1274649250"); // 1
    Leg_36_set.insert("1274649250");
    Leg_36.add_attribute("Mat", "LegMaturityDate_t_1196597977"); // 1
    Leg_36_set.insert("LegMaturityDate_t_1196597977");
    Leg_36.add_attribute("MatTm", "131788216"); // 1
    Leg_36_set.insert("131788216");
    Leg_36.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1393117000"); // 1
    Leg_36_set.insert("LegCouponPaymentDate_t_1393117000");
    Leg_36.add_attribute("Issued", "LegIssueDate_t_1347551349"); // 1
    Leg_36_set.insert("LegIssueDate_t_1347551349");
    Leg_36.add_attribute("RepoCollSecTyp", "2066881091"); // 1
    Leg_36_set.insert("2066881091");
    Leg_36.add_attribute("RepoTrm", "860611811"); // 1
    Leg_36_set.insert("860611811");
    Leg_36.add_attribute("RepoRt", "2581718.210000"); // 1
    Leg_36_set.insert("2581718.210000");
    Leg_36.add_attribute("Fctr", "702260.810000"); // 1
    Leg_36_set.insert("702260.810000");
    Leg_36.add_attribute("CrdRtg", "LegCreditRating_t_493617475"); // 1
    Leg_36_set.insert("LegCreditRating_t_493617475");
    Leg_36.add_attribute("Rgstry", "LegInstrRegistry_t_751262985"); // 1
    Leg_36_set.insert("LegInstrRegistry_t_751262985");
    Leg_36.add_attribute("Ctry", "155253138"); // 1
    Leg_36_set.insert("155253138");
    Leg_36.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_727741163"); // 1
    Leg_36_set.insert("LegStateOrProvinceOfIssue_t_727741163");
    Leg_36.add_attribute("Lcl", "LegLocaleOfIssue_t_1178447085"); // 1
    Leg_36_set.insert("LegLocaleOfIssue_t_1178447085");
    Leg_36.add_attribute("Redeem", "LegRedemptionDate_t_471059076"); // 1
    Leg_36_set.insert("LegRedemptionDate_t_471059076");
    Leg_36.add_attribute("Strk", "15785005.810000"); // 1
    Leg_36_set.insert("15785005.810000");
    Leg_36.add_attribute("StrkCcy", "EUR"); // 1
    Leg_36_set.insert("EUR");
    Leg_36.add_attribute("OptA", "357854501"); // 1
    Leg_36_set.insert("357854501");
    Leg_36.add_attribute("Cmult", "1102.580000"); // 1
    Leg_36_set.insert("1102.580000");
    Leg_36.add_attribute("MultTyp", "2"); // 1
    Leg_36_set.insert("2");
    Leg_36.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_36_set.insert("0");
    Leg_36.add_attribute("UOM", "Bcf"); // 1
    Leg_36_set.insert("Bcf");
    Leg_36.add_attribute("UOMQty", "16159687.330000"); // 1
    Leg_36_set.insert("16159687.330000");
    Leg_36.add_attribute("PxUOM", "lbs"); // 1
    Leg_36_set.insert("lbs");
    Leg_36.add_attribute("PxUOMQty", "4449804.550000"); // 1
    Leg_36_set.insert("4449804.550000");
    Leg_36.add_attribute("TmUnit", "S"); // 1
    Leg_36_set.insert("S");
    Leg_36.add_attribute("ExerStyle", "2"); // 1
    Leg_36_set.insert("2");
    Leg_36.add_attribute("CpnRt", "18234002.050000"); // 1
    Leg_36_set.insert("18234002.050000");
    Leg_36.add_attribute("Exch", "LegSecurityExchange_t_1709302776"); // 1
    Leg_36_set.insert("LegSecurityExchange_t_1709302776");
    Leg_36.add_attribute("Issr", "LegIssuer_t_134373290"); // 1
    Leg_36_set.insert("LegIssuer_t_134373290");
    Leg_36.add_attribute("EncLegIssrLen", "950565807"); // 1
    Leg_36_set.insert("950565807");
    Leg_36.add_attribute("EncLegIssr", "EncodedLegIssuer_t_758417105"); // 1
    Leg_36_set.insert("EncodedLegIssuer_t_758417105");
    Leg_36.add_attribute("Desc", "LegSecurityDesc_t_266161506"); // 1
    Leg_36_set.insert("LegSecurityDesc_t_266161506");
    Leg_36.add_attribute("EncLegSecDescLen", "196199160"); // 1
    Leg_36_set.insert("196199160");
    Leg_36.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2105968454"); // 1
    Leg_36_set.insert("EncodedLegSecurityDesc_t_2105968454");
    Leg_36.add_attribute("RatioQty", "1855589.490000"); // 1
    Leg_36_set.insert("1855589.490000");
    Leg_36.add_attribute("Side", "C"); // 1
    Leg_36_set.insert("C");
    Leg_36.add_attribute("Ccy", "GBP"); // 1
    Leg_36_set.insert("GBP");
    Leg_36.add_attribute("Pool", "LegPool_t_1550428447"); // 1
    Leg_36_set.insert("LegPool_t_1550428447");
    Leg_36.add_attribute("Dated", "LegDatedDate_t_967919613"); // 1
    Leg_36_set.insert("LegDatedDate_t_967919613");
    Leg_36.add_attribute("CSetMo", "411038169"); // 1
    Leg_36_set.insert("411038169");
    Leg_36.add_attribute("IntAcrl", "LegInterestAccrualDate_t_130685962"); // 1
    Leg_36_set.insert("LegInterestAccrualDate_t_130685962");
    Leg_36.add_attribute("PutCall", "2146366698"); // 1
    Leg_36_set.insert("2146366698");
    Leg_36.add_attribute("LegOptionRatio", "8820972.450000"); // 1
    Leg_36_set.insert("8820972.450000");
    Leg_36.add_attribute("Px", "17091865.430000"); // 1
    Leg_36_set.insert("17091865.430000");
    all_values.push_back(Leg_36_set);
    all_compo_names.insert("Leg_36_set");

    {
      xml_element LegAID_36{"LegAID"};
      multiset<string> LegAID_36_set;
      LegAID_36.add_attribute("SecAltID", "LegSecurityAltID_t_1601378411"); // 2
      LegAID_36_set.insert("LegSecurityAltID_t_1601378411");
      LegAID_36.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_36_set.insert("M");
      all_values.push_back(LegAID_36_set);
      all_compo_names.insert("LegAID_36_set");

      Leg_36.add_element(LegAID_36);
    }
    elt.add_element(Leg_36);
  } // end Leg
  { // Leg
    xml_element Leg_37{"Leg"};
    multiset<string> Leg_37_set;
    Leg_37.add_attribute("Sym", "LegSymbol_t_2067041044"); // 1
    Leg_37_set.insert("LegSymbol_t_2067041044");
    Leg_37.add_attribute("Sfx", "WI"); // 1
    Leg_37_set.insert("WI");
    Leg_37.add_attribute("ID", "LegSecurityID_t_1006793597"); // 1
    Leg_37_set.insert("LegSecurityID_t_1006793597");
    Leg_37.add_attribute("Src", "7"); // 1
    Leg_37_set.insert("7");
    Leg_37.add_attribute("Prod", "8"); // 1
    Leg_37_set.insert("8");
    Leg_37.add_attribute("CFI", "LegCFICode_t_475278682"); // 1
    Leg_37_set.insert("LegCFICode_t_475278682");
    Leg_37.add_attribute("SecTyp", "YCD"); // 1
    Leg_37_set.insert("YCD");
    Leg_37.add_attribute("SecSubTyp", "LegSecuritySubType_t_37794079"); // 1
    Leg_37_set.insert("LegSecuritySubType_t_37794079");
    Leg_37.add_attribute("MMY", "207253777"); // 1
    Leg_37_set.insert("207253777");
    Leg_37.add_attribute("Mat", "LegMaturityDate_t_2033093086"); // 1
    Leg_37_set.insert("LegMaturityDate_t_2033093086");
    Leg_37.add_attribute("MatTm", "1861194284"); // 1
    Leg_37_set.insert("1861194284");
    Leg_37.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1916556553"); // 1
    Leg_37_set.insert("LegCouponPaymentDate_t_1916556553");
    Leg_37.add_attribute("Issued", "LegIssueDate_t_19982728"); // 1
    Leg_37_set.insert("LegIssueDate_t_19982728");
    Leg_37.add_attribute("RepoCollSecTyp", "664276444"); // 1
    Leg_37_set.insert("664276444");
    Leg_37.add_attribute("RepoTrm", "527490010"); // 1
    Leg_37_set.insert("527490010");
    Leg_37.add_attribute("RepoRt", "2861442.340000"); // 1
    Leg_37_set.insert("2861442.340000");
    Leg_37.add_attribute("Fctr", "8604756.040000"); // 1
    Leg_37_set.insert("8604756.040000");
    Leg_37.add_attribute("CrdRtg", "LegCreditRating_t_485974817"); // 1
    Leg_37_set.insert("LegCreditRating_t_485974817");
    Leg_37.add_attribute("Rgstry", "LegInstrRegistry_t_471703184"); // 1
    Leg_37_set.insert("LegInstrRegistry_t_471703184");
    Leg_37.add_attribute("Ctry", "1917286575"); // 1
    Leg_37_set.insert("1917286575");
    Leg_37.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_702631444"); // 1
    Leg_37_set.insert("LegStateOrProvinceOfIssue_t_702631444");
    Leg_37.add_attribute("Lcl", "LegLocaleOfIssue_t_727488214"); // 1
    Leg_37_set.insert("LegLocaleOfIssue_t_727488214");
    Leg_37.add_attribute("Redeem", "LegRedemptionDate_t_1320231374"); // 1
    Leg_37_set.insert("LegRedemptionDate_t_1320231374");
    Leg_37.add_attribute("Strk", "16705510.570000"); // 1
    Leg_37_set.insert("16705510.570000");
    Leg_37.add_attribute("StrkCcy", "USD"); // 1
    Leg_37_set.insert("USD");
    Leg_37.add_attribute("OptA", "1669434107"); // 1
    Leg_37_set.insert("1669434107");
    Leg_37.add_attribute("Cmult", "20206236.290000"); // 1
    Leg_37_set.insert("20206236.290000");
    Leg_37.add_attribute("MultTyp", "0"); // 1
    Leg_37_set.insert("0");
    Leg_37.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_37_set.insert("0");
    Leg_37.add_attribute("UOM", "oz_tr"); // 1
    Leg_37_set.insert("oz_tr");
    Leg_37.add_attribute("UOMQty", "9321776.270000"); // 1
    Leg_37_set.insert("9321776.270000");
    Leg_37.add_attribute("PxUOM", "tn"); // 1
    Leg_37_set.insert("tn");
    Leg_37.add_attribute("PxUOMQty", "19534182.970000"); // 1
    Leg_37_set.insert("19534182.970000");
    Leg_37.add_attribute("TmUnit", "D"); // 1
    Leg_37_set.insert("D");
    Leg_37.add_attribute("ExerStyle", "1"); // 1
    Leg_37_set.insert("1");
    Leg_37.add_attribute("CpnRt", "2812133.320000"); // 1
    Leg_37_set.insert("2812133.320000");
    Leg_37.add_attribute("Exch", "LegSecurityExchange_t_1546379343"); // 1
    Leg_37_set.insert("LegSecurityExchange_t_1546379343");
    Leg_37.add_attribute("Issr", "LegIssuer_t_207941594"); // 1
    Leg_37_set.insert("LegIssuer_t_207941594");
    Leg_37.add_attribute("EncLegIssrLen", "488467109"); // 1
    Leg_37_set.insert("488467109");
    Leg_37.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1431988781"); // 1
    Leg_37_set.insert("EncodedLegIssuer_t_1431988781");
    Leg_37.add_attribute("Desc", "LegSecurityDesc_t_2069135879"); // 1
    Leg_37_set.insert("LegSecurityDesc_t_2069135879");
    Leg_37.add_attribute("EncLegSecDescLen", "257540014"); // 1
    Leg_37_set.insert("257540014");
    Leg_37.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1451971510"); // 1
    Leg_37_set.insert("EncodedLegSecurityDesc_t_1451971510");
    Leg_37.add_attribute("RatioQty", "5859286.750000"); // 1
    Leg_37_set.insert("5859286.750000");
    Leg_37.add_attribute("Side", "9"); // 1
    Leg_37_set.insert("9");
    Leg_37.add_attribute("Ccy", "CAN"); // 1
    Leg_37_set.insert("CAN");
    Leg_37.add_attribute("Pool", "LegPool_t_1271004841"); // 1
    Leg_37_set.insert("LegPool_t_1271004841");
    Leg_37.add_attribute("Dated", "LegDatedDate_t_62335280"); // 1
    Leg_37_set.insert("LegDatedDate_t_62335280");
    Leg_37.add_attribute("CSetMo", "1216207206"); // 1
    Leg_37_set.insert("1216207206");
    Leg_37.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1973636286"); // 1
    Leg_37_set.insert("LegInterestAccrualDate_t_1973636286");
    Leg_37.add_attribute("PutCall", "789823495"); // 1
    Leg_37_set.insert("789823495");
    Leg_37.add_attribute("LegOptionRatio", "3889549.330000"); // 1
    Leg_37_set.insert("3889549.330000");
    Leg_37.add_attribute("Px", "14967036.950000"); // 1
    Leg_37_set.insert("14967036.950000");
    all_values.push_back(Leg_37_set);
    all_compo_names.insert("Leg_37_set");

    {
      xml_element LegAID_37{"LegAID"};
      multiset<string> LegAID_37_set;
      LegAID_37.add_attribute("SecAltID", "LegSecurityAltID_t_1928349878"); // 2
      LegAID_37_set.insert("LegSecurityAltID_t_1928349878");
      LegAID_37.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_37_set.insert("G");
      all_values.push_back(LegAID_37_set);
      all_compo_names.insert("LegAID_37_set");

      Leg_37.add_element(LegAID_37);
    }
    elt.add_element(Leg_37);
  } // end Leg
  { // OrdQty
    xml_element OrdQty_5{"OrdQty"};
    multiset<string> OrdQty_5_set;
    OrdQty_5.add_attribute("Qty", "10186541.550000"); // 1
    OrdQty_5_set.insert("10186541.550000");
    OrdQty_5.add_attribute("Cash", "18014898.590000"); // 1
    OrdQty_5_set.insert("18014898.590000");
    OrdQty_5.add_attribute("Pct", "7050088.530000"); // 1
    OrdQty_5_set.insert("7050088.530000");
    OrdQty_5.add_attribute("RndDir", "2"); // 1
    OrdQty_5_set.insert("2");
    OrdQty_5.add_attribute("RndMod", "6006309.110000"); // 1
    OrdQty_5_set.insert("6006309.110000");
    all_values.push_back(OrdQty_5_set);
    all_compo_names.insert("OrdQty_5_set");

    elt.add_element(OrdQty_5);
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
