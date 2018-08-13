#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/StreamAssignmentRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"StrmAsgnReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentRequest_message_t_0;
  elt.add_attribute("ReqID", "StreamAsgnReqID_t_391778502"); // 0
  StreamAssignmentRequest_message_t_0.insert("StreamAsgnReqID_t_391778502");
  elt.add_attribute("AsgnReqTyp", "2"); // 0
  StreamAssignmentRequest_message_t_0.insert("2");
  all_values.push_back(StreamAssignmentRequest_message_t_0);
  all_compo_names.insert("StreamAssignmentRequest_message_t");

  { // Hdr
    xml_element Hdr_95{"Hdr"};
    multiset<string> Hdr_95_set;
    Hdr_95.add_attribute("SeqNum", "29662048"); // 1
    Hdr_95_set.insert("29662048");
    Hdr_95.add_attribute("SID", "SenderCompID_t_1211563162"); // 1
    Hdr_95_set.insert("SenderCompID_t_1211563162");
    Hdr_95.add_attribute("TID", "TargetCompID_t_135313223"); // 1
    Hdr_95_set.insert("TargetCompID_t_135313223");
    Hdr_95.add_attribute("OBID", "OnBehalfOfCompID_t_1964728772"); // 1
    Hdr_95_set.insert("OnBehalfOfCompID_t_1964728772");
    Hdr_95.add_attribute("D2ID", "DeliverToCompID_t_1258769463"); // 1
    Hdr_95_set.insert("DeliverToCompID_t_1258769463");
    Hdr_95.add_attribute("SSub", "SenderSubID_t_1580459588"); // 1
    Hdr_95_set.insert("SenderSubID_t_1580459588");
    Hdr_95.add_attribute("SLoc", "SenderLocationID_t_955097957"); // 1
    Hdr_95_set.insert("SenderLocationID_t_955097957");
    Hdr_95.add_attribute("TSub", "TargetSubID_t_75545119"); // 1
    Hdr_95_set.insert("TargetSubID_t_75545119");
    Hdr_95.add_attribute("TLoc", "TargetLocationID_t_729805518"); // 1
    Hdr_95_set.insert("TargetLocationID_t_729805518");
    Hdr_95.add_attribute("OBSub", "OnBehalfOfSubID_t_426069462"); // 1
    Hdr_95_set.insert("OnBehalfOfSubID_t_426069462");
    Hdr_95.add_attribute("OBLoc", "OnBehalfOfLocationID_t_318506014"); // 1
    Hdr_95_set.insert("OnBehalfOfLocationID_t_318506014");
    Hdr_95.add_attribute("D2Sub", "DeliverToSubID_t_363246564"); // 1
    Hdr_95_set.insert("DeliverToSubID_t_363246564");
    Hdr_95.add_attribute("D2Loc", "DeliverToLocationID_t_106621844"); // 1
    Hdr_95_set.insert("DeliverToLocationID_t_106621844");
    Hdr_95.add_attribute("PosDup", "Y"); // 1
    Hdr_95_set.insert("Y");
    Hdr_95.add_attribute("PosRsnd", "N"); // 1
    Hdr_95_set.insert("N");
    Hdr_95.add_attribute("Snt", "SendingTime_t_733646431"); // 1
    Hdr_95_set.insert("SendingTime_t_733646431");
    Hdr_95.add_attribute("OrigSnt", "OrigSendingTime_t_1071860689"); // 1
    Hdr_95_set.insert("OrigSendingTime_t_1071860689");
    Hdr_95.add_attribute("MsgEncd", "MessageEncoding_t_1141216041"); // 1
    Hdr_95_set.insert("MessageEncoding_t_1141216041");
    all_values.push_back(Hdr_95_set);
    all_compo_names.insert("Hdr_95_set");

    {
      xml_element Hop_95{"Hop"};
      multiset<string> Hop_95_set;
      Hop_95.add_attribute("ID", "HopCompID_t_1403640581"); // 2
      Hop_95_set.insert("HopCompID_t_1403640581");
      Hop_95.add_attribute("Ref", "1098567283"); // 2
      Hop_95_set.insert("1098567283");
      Hop_95.add_attribute("Snt", "HopSendingTime_t_902713100"); // 2
      Hop_95_set.insert("HopSendingTime_t_902713100");
      all_values.push_back(Hop_95_set);
      all_compo_names.insert("Hop_95_set");

      Hdr_95.add_element(Hop_95);
    }
    elt.add_element(Hdr_95);
  } // end Hdr
  { // Reqs
    xml_element Reqs_0{"Reqs"};
    {
      xml_element Pty_429{"Pty"};
      multiset<string> Pty_429_set;
      Pty_429.add_attribute("ID", "PartyID_t_412527609"); // 2
      Pty_429_set.insert("PartyID_t_412527609");
      Pty_429.add_attribute("Src", "B"); // 2
      Pty_429_set.insert("B");
      Pty_429.add_attribute("R", "82"); // 2
      Pty_429_set.insert("82");
      all_values.push_back(Pty_429_set);
      all_compo_names.insert("Pty_429_set");

      {
        xml_element Sub_429{"Sub"};
        multiset<string> Sub_429_set;
        Sub_429.add_attribute("ID", "PartySubID_t_403996727"); // 3
        Sub_429_set.insert("PartySubID_t_403996727");
        Sub_429.add_attribute("Typ", "20"); // 3
        Sub_429_set.insert("20");
        all_values.push_back(Sub_429_set);
        all_compo_names.insert("Sub_429_set");

        Pty_429.add_element(Sub_429);
      }
      Reqs_0.add_element(Pty_429);
    }
    {
      xml_element Instrmts_1{"Instrmts"};
      multiset<string> Instrmts_1_set;
      Instrmts_1.add_attribute("SettlTyp", "8"); // 2
      Instrmts_1_set.insert("8");
      Instrmts_1.add_attribute("Sz", "12025760.450000"); // 2
      Instrmts_1_set.insert("12025760.450000");
      Instrmts_1.add_attribute("MDStrmID", "MDStreamID_t_390449569"); // 2
      Instrmts_1_set.insert("MDStreamID_t_390449569");
      all_values.push_back(Instrmts_1_set);
      all_compo_names.insert("Instrmts_1_set");

      {
        xml_element Instrmt_84{"Instrmt"};
        multiset<string> Instrmt_84_set;
        Instrmt_84.add_attribute("Sym", "Symbol_t_1959010273"); // 3
        Instrmt_84_set.insert("Symbol_t_1959010273");
        Instrmt_84.add_attribute("Sfx", "WI"); // 3
        Instrmt_84_set.insert("WI");
        Instrmt_84.add_attribute("ID", "SecurityID_t_1602012731"); // 3
        Instrmt_84_set.insert("SecurityID_t_1602012731");
        Instrmt_84.add_attribute("Src", "E"); // 3
        Instrmt_84_set.insert("E");
        Instrmt_84.add_attribute("Prod", "13"); // 3
        Instrmt_84_set.insert("13");
        Instrmt_84.add_attribute("ProdCmplx", "ProductComplex_t_713298546"); // 3
        Instrmt_84_set.insert("ProductComplex_t_713298546");
        Instrmt_84.add_attribute("SecGrp", "SecurityGroup_t_1527299437"); // 3
        Instrmt_84_set.insert("SecurityGroup_t_1527299437");
        Instrmt_84.add_attribute("CFI", "CFICode_t_2004581175"); // 3
        Instrmt_84_set.insert("CFICode_t_2004581175");
        Instrmt_84.add_attribute("SecTyp", "YCD"); // 3
        Instrmt_84_set.insert("YCD");
        Instrmt_84.add_attribute("SubTyp", "SecuritySubType_t_109621308"); // 3
        Instrmt_84_set.insert("SecuritySubType_t_109621308");
        Instrmt_84.add_attribute("MMY", "283166989"); // 3
        Instrmt_84_set.insert("283166989");
        Instrmt_84.add_attribute("MatDt", "MaturityDate_t_1107349679"); // 3
        Instrmt_84_set.insert("MaturityDate_t_1107349679");
        Instrmt_84.add_attribute("MatTm", "472867872"); // 3
        Instrmt_84_set.insert("472867872");
        Instrmt_84.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_389788834"); // 3
        Instrmt_84_set.insert("SettleOnOpenFlag_t_389788834");
        Instrmt_84.add_attribute("AsgnMeth", "1322232988"); // 3
        Instrmt_84_set.insert("1322232988");
        Instrmt_84.add_attribute("Status", "1"); // 3
        Instrmt_84_set.insert("1");
        Instrmt_84.add_attribute("CpnPmt", "CouponPaymentDate_t_1123435265"); // 3
        Instrmt_84_set.insert("CouponPaymentDate_t_1123435265");
        Instrmt_84.add_attribute("RestrctTyp", "MR"); // 3
        Instrmt_84_set.insert("MR");
        Instrmt_84.add_attribute("Snrty", "SB"); // 3
        Instrmt_84_set.insert("SB");
        Instrmt_84.add_attribute("NotlPctOut", "3795921.980000"); // 3
        Instrmt_84_set.insert("3795921.980000");
        Instrmt_84.add_attribute("OrigNotlPctOut", "13451773.130000"); // 3
        Instrmt_84_set.insert("13451773.130000");
        Instrmt_84.add_attribute("AttchPnt", "17827683.640000"); // 3
        Instrmt_84_set.insert("17827683.640000");
        Instrmt_84.add_attribute("DetchPnt", "10438090.980000"); // 3
        Instrmt_84_set.insert("10438090.980000");
        Instrmt_84.add_attribute("Issued", "IssueDate_t_1757704922"); // 3
        Instrmt_84_set.insert("IssueDate_t_1757704922");
        Instrmt_84.add_attribute("RepoCollSecTyp", "1634239788"); // 3
        Instrmt_84_set.insert("1634239788");
        Instrmt_84.add_attribute("RepoTrm", "1536169971"); // 3
        Instrmt_84_set.insert("1536169971");
        Instrmt_84.add_attribute("RepoRt", "142180.010000"); // 3
        Instrmt_84_set.insert("142180.010000");
        Instrmt_84.add_attribute("Fctr", "16329108.550000"); // 3
        Instrmt_84_set.insert("16329108.550000");
        Instrmt_84.add_attribute("CrdRtg", "CreditRating_t_1491476871"); // 3
        Instrmt_84_set.insert("CreditRating_t_1491476871");
        Instrmt_84.add_attribute("Rgstry", "InstrRegistry_t_1216794046"); // 3
        Instrmt_84_set.insert("InstrRegistry_t_1216794046");
        Instrmt_84.add_attribute("IssuCtry", "2023360424"); // 3
        Instrmt_84_set.insert("2023360424");
        Instrmt_84.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1303003497"); // 3
        Instrmt_84_set.insert("StateOrProvinceOfIssue_t_1303003497");
        Instrmt_84.add_attribute("Lcl", "LocaleOfIssue_t_301548492"); // 3
        Instrmt_84_set.insert("LocaleOfIssue_t_301548492");
        Instrmt_84.add_attribute("Redeem", "RedemptionDate_t_1477889508"); // 3
        Instrmt_84_set.insert("RedemptionDate_t_1477889508");
        Instrmt_84.add_attribute("StrkPx", "12498433.460000"); // 3
        Instrmt_84_set.insert("12498433.460000");
        Instrmt_84.add_attribute("StrkCcy", "JPY"); // 3
        Instrmt_84_set.insert("JPY");
        Instrmt_84.add_attribute("StrkMult", "6296591.350000"); // 3
        Instrmt_84_set.insert("6296591.350000");
        Instrmt_84.add_attribute("StrkValu", "12081292.370000"); // 3
        Instrmt_84_set.insert("12081292.370000");
        Instrmt_84.add_attribute("StrkPxDtrmnMeth", "1"); // 3
        Instrmt_84_set.insert("1");
        Instrmt_84.add_attribute("StrkPxBndryMeth", "4"); // 3
        Instrmt_84_set.insert("4");
        Instrmt_84.add_attribute("StrkPxBndryPrcsn", "14912962.270000"); // 3
        Instrmt_84_set.insert("14912962.270000");
        Instrmt_84.add_attribute("PxDtrmnMeth", "4"); // 3
        Instrmt_84_set.insert("4");
        Instrmt_84.add_attribute("OptAt", "1212148316"); // 3
        Instrmt_84_set.insert("1212148316");
        Instrmt_84.add_attribute("Mult", "18810850.610000"); // 3
        Instrmt_84_set.insert("18810850.610000");
        Instrmt_84.add_attribute("MultTyp", "2"); // 3
        Instrmt_84_set.insert("2");
        Instrmt_84.add_attribute("FlowSchedTyp", "3"); // 3
        Instrmt_84_set.insert("3");
        Instrmt_84.add_attribute("MinPxIncr", "8570366.780000"); // 3
        Instrmt_84_set.insert("8570366.780000");
        Instrmt_84.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1361257121"); // 3
        Instrmt_84_set.insert("MinPriceIncrementAmount_t_1361257121");
        Instrmt_84.add_attribute("UOM", "t"); // 3
        Instrmt_84_set.insert("t");
        Instrmt_84.add_attribute("UOMQty", "12366288.760000"); // 3
        Instrmt_84_set.insert("12366288.760000");
        Instrmt_84.add_attribute("PxUOM", "t"); // 3
        Instrmt_84_set.insert("t");
        Instrmt_84.add_attribute("PxUOMQty", "14663275.190000"); // 3
        Instrmt_84_set.insert("14663275.190000");
        Instrmt_84.add_attribute("SettlMeth", "P"); // 3
        Instrmt_84_set.insert("P");
        Instrmt_84.add_attribute("ExerStyle", "2"); // 3
        Instrmt_84_set.insert("2");
        Instrmt_84.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_84_set.insert("1");
        Instrmt_84.add_attribute("OptPayAmt", "OptPayoutAmount_t_1669124298"); // 3
        Instrmt_84_set.insert("OptPayoutAmount_t_1669124298");
        Instrmt_84.add_attribute("PxQteMeth", "INX"); // 3
        Instrmt_84_set.insert("INX");
        Instrmt_84.add_attribute("ValMeth", "FUTDA"); // 3
        Instrmt_84_set.insert("FUTDA");
        Instrmt_84.add_attribute("ListMeth", "1"); // 3
        Instrmt_84_set.insert("1");
        Instrmt_84.add_attribute("CapPx", "14001841.080000"); // 3
        Instrmt_84_set.insert("14001841.080000");
        Instrmt_84.add_attribute("FlrPx", "3143876.430000"); // 3
        Instrmt_84_set.insert("3143876.430000");
        Instrmt_84.add_attribute("PutCall", "0"); // 3
        Instrmt_84_set.insert("0");
        Instrmt_84.add_attribute("FlexInd", "true"); // 3
        Instrmt_84_set.insert("true");
        Instrmt_84.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_84_set.insert("false");
        Instrmt_84.add_attribute("TmUnit", "H"); // 3
        Instrmt_84_set.insert("H");
        Instrmt_84.add_attribute("CpnRt", "9052806.620000"); // 3
        Instrmt_84_set.insert("9052806.620000");
        Instrmt_84.add_attribute("Exch", "SecurityExchange_t_1835981558"); // 3
        Instrmt_84_set.insert("SecurityExchange_t_1835981558");
        Instrmt_84.add_attribute("PosLmt", "2048139852"); // 3
        Instrmt_84_set.insert("2048139852");
        Instrmt_84.add_attribute("NTPosLmt", "2113409899"); // 3
        Instrmt_84_set.insert("2113409899");
        Instrmt_84.add_attribute("Issr", "Issuer_t_521045982"); // 3
        Instrmt_84_set.insert("Issuer_t_521045982");
        Instrmt_84.add_attribute("EncIssrLen", "639936647"); // 3
        Instrmt_84_set.insert("639936647");
        Instrmt_84.add_attribute("EncIssr", "EncodedIssuer_t_1457222478"); // 3
        Instrmt_84_set.insert("EncodedIssuer_t_1457222478");
        Instrmt_84.add_attribute("Desc", "SecurityDesc_t_313460085"); // 3
        Instrmt_84_set.insert("SecurityDesc_t_313460085");
        Instrmt_84.add_attribute("EncSecDescLen", "1852084963"); // 3
        Instrmt_84_set.insert("1852084963");
        Instrmt_84.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1190823891"); // 3
        Instrmt_84_set.insert("EncodedSecurityDesc_t_1190823891");
        Instrmt_84.add_attribute("Pool", "Pool_t_1428107177"); // 3
        Instrmt_84_set.insert("Pool_t_1428107177");
        Instrmt_84.add_attribute("CSetMo", "655588854"); // 3
        Instrmt_84_set.insert("655588854");
        Instrmt_84.add_attribute("CPPgm", "99"); // 3
        Instrmt_84_set.insert("99");
        Instrmt_84.add_attribute("CPRegT", "CPRegType_t_641880651"); // 3
        Instrmt_84_set.insert("CPRegType_t_641880651");
        Instrmt_84.add_attribute("Dated", "DatedDate_t_339148008"); // 3
        Instrmt_84_set.insert("DatedDate_t_339148008");
        Instrmt_84.add_attribute("IntAcrl", "InterestAccrualDate_t_1137005798"); // 3
        Instrmt_84_set.insert("InterestAccrualDate_t_1137005798");
        all_values.push_back(Instrmt_84_set);
        all_compo_names.insert("Instrmt_84_set");

        {
          xml_element AID_87{"AID"};
          multiset<string> AID_87_set;
          AID_87.add_attribute("AltID", "SecurityAltID_t_1200831437"); // 4
          AID_87_set.insert("SecurityAltID_t_1200831437");
          AID_87.add_attribute("AltIDSrc", "A"); // 4
          AID_87_set.insert("A");
          all_values.push_back(AID_87_set);
          all_compo_names.insert("AID_87_set");

          Instrmt_84.add_element(AID_87);
        }
        {
          xml_element SecXML_87{"SecXML"};
          multiset<string> SecXML_87_set;
          SecXML_87.add_attribute("Schema", "SecurityXMLSchema_t_1269960125"); // 4
          SecXML_87_set.insert("SecurityXMLSchema_t_1269960125");
          all_values.push_back(SecXML_87_set);
          all_compo_names.insert("SecXML_87_set");

          Instrmt_84.add_element(SecXML_87);
        }
        {
          xml_element Evnt_87{"Evnt"};
          multiset<string> Evnt_87_set;
          Evnt_87.add_attribute("EventTyp", "18"); // 4
          Evnt_87_set.insert("18");
          Evnt_87.add_attribute("Dt", "EventDate_t_611075539"); // 4
          Evnt_87_set.insert("EventDate_t_611075539");
          Evnt_87.add_attribute("Tm", "EventTime_t_791600775"); // 4
          Evnt_87_set.insert("EventTime_t_791600775");
          Evnt_87.add_attribute("Px", "15533935.590000"); // 4
          Evnt_87_set.insert("15533935.590000");
          Evnt_87.add_attribute("Txt", "EventText_t_1049586406"); // 4
          Evnt_87_set.insert("EventText_t_1049586406");
          all_values.push_back(Evnt_87_set);
          all_compo_names.insert("Evnt_87_set");

          Instrmt_84.add_element(Evnt_87);
        }
        {
          xml_element Pty_430{"Pty"};
          multiset<string> Pty_430_set;
          Pty_430.add_attribute("ID", "InstrumentPartyID_t_1804718296"); // 4
          Pty_430_set.insert("InstrumentPartyID_t_1804718296");
          Pty_430.add_attribute("Src", "2"); // 4
          Pty_430_set.insert("2");
          Pty_430.add_attribute("R", "33"); // 4
          Pty_430_set.insert("33");
          all_values.push_back(Pty_430_set);
          all_compo_names.insert("Pty_430_set");

          {
            xml_element Sub_430{"Sub"};
            multiset<string> Sub_430_set;
            Sub_430.add_attribute("ID", "InstrumentPartySubID_t_1973355667"); // 5
            Sub_430_set.insert("InstrumentPartySubID_t_1973355667");
            Sub_430.add_attribute("Typ", "33"); // 5
            Sub_430_set.insert("33");
            all_values.push_back(Sub_430_set);
            all_compo_names.insert("Sub_430_set");

            Pty_430.add_element(Sub_430);
          }
          Instrmt_84.add_element(Pty_430);
        }
        {
          xml_element CmplxEvnt_84{"CmplxEvnt"};
          multiset<string> CmplxEvnt_84_set;
          CmplxEvnt_84.add_attribute("Typ", "7"); // 4
          CmplxEvnt_84_set.insert("7");
          CmplxEvnt_84.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1244352735"); // 4
          CmplxEvnt_84_set.insert("ComplexOptPayoutAmount_t_1244352735");
          CmplxEvnt_84.add_attribute("Px", "12656236.330000"); // 4
          CmplxEvnt_84_set.insert("12656236.330000");
          CmplxEvnt_84.add_attribute("PxBndryMeth", "4"); // 4
          CmplxEvnt_84_set.insert("4");
          CmplxEvnt_84.add_attribute("PxBndryPrcsn", "11450089.390000"); // 4
          CmplxEvnt_84_set.insert("11450089.390000");
          CmplxEvnt_84.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_84_set.insert("2");
          CmplxEvnt_84.add_attribute("Cond", "2"); // 4
          CmplxEvnt_84_set.insert("2");
          all_values.push_back(CmplxEvnt_84_set);
          all_compo_names.insert("CmplxEvnt_84_set");

          {
            xml_element EvntDts_84{"EvntDts"};
            multiset<string> EvntDts_84_set;
            EvntDts_84.add_attribute("StartDt", "ComplexEventStartDate_t_1784945587"); // 5
            EvntDts_84_set.insert("ComplexEventStartDate_t_1784945587");
            EvntDts_84.add_attribute("EndDt", "ComplexEventEndDate_t_541288715"); // 5
            EvntDts_84_set.insert("ComplexEventEndDate_t_541288715");
            all_values.push_back(EvntDts_84_set);
            all_compo_names.insert("EvntDts_84_set");

            {
              xml_element EvntTms_84{"EvntTms"};
              multiset<string> EvntTms_84_set;
              EvntTms_84.add_attribute("StartTm", "1531771530"); // 6
              EvntTms_84_set.insert("1531771530");
              EvntTms_84.add_attribute("EndTm", "1489546902"); // 6
              EvntTms_84_set.insert("1489546902");
              all_values.push_back(EvntTms_84_set);
              all_compo_names.insert("EvntTms_84_set");

              EvntDts_84.add_element(EvntTms_84);
            }
            CmplxEvnt_84.add_element(EvntDts_84);
          }
          Instrmt_84.add_element(CmplxEvnt_84);
        }
        Instrmts_1.add_element(Instrmt_84);
      }
      Reqs_0.add_element(Instrmts_1);
    }
    elt.add_element(Reqs_0);
  } // end Reqs
  { // Reqs
    xml_element Reqs_1{"Reqs"};
    {
      xml_element Pty_431{"Pty"};
      multiset<string> Pty_431_set;
      Pty_431.add_attribute("ID", "PartyID_t_1732112607"); // 2
      Pty_431_set.insert("PartyID_t_1732112607");
      Pty_431.add_attribute("Src", "H"); // 2
      Pty_431_set.insert("H");
      Pty_431.add_attribute("R", "9"); // 2
      Pty_431_set.insert("9");
      all_values.push_back(Pty_431_set);
      all_compo_names.insert("Pty_431_set");

      {
        xml_element Sub_431{"Sub"};
        multiset<string> Sub_431_set;
        Sub_431.add_attribute("ID", "PartySubID_t_1632489528"); // 3
        Sub_431_set.insert("PartySubID_t_1632489528");
        Sub_431.add_attribute("Typ", "32"); // 3
        Sub_431_set.insert("32");
        all_values.push_back(Sub_431_set);
        all_compo_names.insert("Sub_431_set");

        Pty_431.add_element(Sub_431);
      }
      Reqs_1.add_element(Pty_431);
    }
    {
      xml_element Instrmts_2{"Instrmts"};
      multiset<string> Instrmts_2_set;
      Instrmts_2.add_attribute("SettlTyp", "5"); // 2
      Instrmts_2_set.insert("5");
      Instrmts_2.add_attribute("Sz", "6220116.780000"); // 2
      Instrmts_2_set.insert("6220116.780000");
      Instrmts_2.add_attribute("MDStrmID", "MDStreamID_t_507623500"); // 2
      Instrmts_2_set.insert("MDStreamID_t_507623500");
      all_values.push_back(Instrmts_2_set);
      all_compo_names.insert("Instrmts_2_set");

      {
        xml_element Instrmt_85{"Instrmt"};
        multiset<string> Instrmt_85_set;
        Instrmt_85.add_attribute("Sym", "Symbol_t_2142275644"); // 3
        Instrmt_85_set.insert("Symbol_t_2142275644");
        Instrmt_85.add_attribute("Sfx", "WI"); // 3
        Instrmt_85_set.insert("WI");
        Instrmt_85.add_attribute("ID", "SecurityID_t_1877626998"); // 3
        Instrmt_85_set.insert("SecurityID_t_1877626998");
        Instrmt_85.add_attribute("Src", "A"); // 3
        Instrmt_85_set.insert("A");
        Instrmt_85.add_attribute("Prod", "1"); // 3
        Instrmt_85_set.insert("1");
        Instrmt_85.add_attribute("ProdCmplx", "ProductComplex_t_1283536910"); // 3
        Instrmt_85_set.insert("ProductComplex_t_1283536910");
        Instrmt_85.add_attribute("SecGrp", "SecurityGroup_t_1655453941"); // 3
        Instrmt_85_set.insert("SecurityGroup_t_1655453941");
        Instrmt_85.add_attribute("CFI", "CFICode_t_193323579"); // 3
        Instrmt_85_set.insert("CFICode_t_193323579");
        Instrmt_85.add_attribute("SecTyp", "TINT"); // 3
        Instrmt_85_set.insert("TINT");
        Instrmt_85.add_attribute("SubTyp", "SecuritySubType_t_871944343"); // 3
        Instrmt_85_set.insert("SecuritySubType_t_871944343");
        Instrmt_85.add_attribute("MMY", "19195598"); // 3
        Instrmt_85_set.insert("19195598");
        Instrmt_85.add_attribute("MatDt", "MaturityDate_t_302490253"); // 3
        Instrmt_85_set.insert("MaturityDate_t_302490253");
        Instrmt_85.add_attribute("MatTm", "1880711896"); // 3
        Instrmt_85_set.insert("1880711896");
        Instrmt_85.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1263548333"); // 3
        Instrmt_85_set.insert("SettleOnOpenFlag_t_1263548333");
        Instrmt_85.add_attribute("AsgnMeth", "1568113886"); // 3
        Instrmt_85_set.insert("1568113886");
        Instrmt_85.add_attribute("Status", "2"); // 3
        Instrmt_85_set.insert("2");
        Instrmt_85.add_attribute("CpnPmt", "CouponPaymentDate_t_261073625"); // 3
        Instrmt_85_set.insert("CouponPaymentDate_t_261073625");
        Instrmt_85.add_attribute("RestrctTyp", "XR"); // 3
        Instrmt_85_set.insert("XR");
        Instrmt_85.add_attribute("Snrty", "SB"); // 3
        Instrmt_85_set.insert("SB");
        Instrmt_85.add_attribute("NotlPctOut", "20460192.120000"); // 3
        Instrmt_85_set.insert("20460192.120000");
        Instrmt_85.add_attribute("OrigNotlPctOut", "11934688.390000"); // 3
        Instrmt_85_set.insert("11934688.390000");
        Instrmt_85.add_attribute("AttchPnt", "10330930.380000"); // 3
        Instrmt_85_set.insert("10330930.380000");
        Instrmt_85.add_attribute("DetchPnt", "13880824.660000"); // 3
        Instrmt_85_set.insert("13880824.660000");
        Instrmt_85.add_attribute("Issued", "IssueDate_t_778097798"); // 3
        Instrmt_85_set.insert("IssueDate_t_778097798");
        Instrmt_85.add_attribute("RepoCollSecTyp", "1845488098"); // 3
        Instrmt_85_set.insert("1845488098");
        Instrmt_85.add_attribute("RepoTrm", "1385734575"); // 3
        Instrmt_85_set.insert("1385734575");
        Instrmt_85.add_attribute("RepoRt", "2631036.780000"); // 3
        Instrmt_85_set.insert("2631036.780000");
        Instrmt_85.add_attribute("Fctr", "11522801.610000"); // 3
        Instrmt_85_set.insert("11522801.610000");
        Instrmt_85.add_attribute("CrdRtg", "CreditRating_t_1722534692"); // 3
        Instrmt_85_set.insert("CreditRating_t_1722534692");
        Instrmt_85.add_attribute("Rgstry", "InstrRegistry_t_885115357"); // 3
        Instrmt_85_set.insert("InstrRegistry_t_885115357");
        Instrmt_85.add_attribute("IssuCtry", "1659903662"); // 3
        Instrmt_85_set.insert("1659903662");
        Instrmt_85.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1717326688"); // 3
        Instrmt_85_set.insert("StateOrProvinceOfIssue_t_1717326688");
        Instrmt_85.add_attribute("Lcl", "LocaleOfIssue_t_629603512"); // 3
        Instrmt_85_set.insert("LocaleOfIssue_t_629603512");
        Instrmt_85.add_attribute("Redeem", "RedemptionDate_t_1390047012"); // 3
        Instrmt_85_set.insert("RedemptionDate_t_1390047012");
        Instrmt_85.add_attribute("StrkPx", "1757105.760000"); // 3
        Instrmt_85_set.insert("1757105.760000");
        Instrmt_85.add_attribute("StrkCcy", "USD"); // 3
        Instrmt_85_set.insert("USD");
        Instrmt_85.add_attribute("StrkMult", "18311645.170000"); // 3
        Instrmt_85_set.insert("18311645.170000");
        Instrmt_85.add_attribute("StrkValu", "13590160.220000"); // 3
        Instrmt_85_set.insert("13590160.220000");
        Instrmt_85.add_attribute("StrkPxDtrmnMeth", "1"); // 3
        Instrmt_85_set.insert("1");
        Instrmt_85.add_attribute("StrkPxBndryMeth", "3"); // 3
        Instrmt_85_set.insert("3");
        Instrmt_85.add_attribute("StrkPxBndryPrcsn", "13782116.200000"); // 3
        Instrmt_85_set.insert("13782116.200000");
        Instrmt_85.add_attribute("PxDtrmnMeth", "2"); // 3
        Instrmt_85_set.insert("2");
        Instrmt_85.add_attribute("OptAt", "288853460"); // 3
        Instrmt_85_set.insert("288853460");
        Instrmt_85.add_attribute("Mult", "4942763.050000"); // 3
        Instrmt_85_set.insert("4942763.050000");
        Instrmt_85.add_attribute("MultTyp", "0"); // 3
        Instrmt_85_set.insert("0");
        Instrmt_85.add_attribute("FlowSchedTyp", "1"); // 3
        Instrmt_85_set.insert("1");
        Instrmt_85.add_attribute("MinPxIncr", "7553499.300000"); // 3
        Instrmt_85_set.insert("7553499.300000");
        Instrmt_85.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_843548171"); // 3
        Instrmt_85_set.insert("MinPriceIncrementAmount_t_843548171");
        Instrmt_85.add_attribute("UOM", "Bcf"); // 3
        Instrmt_85_set.insert("Bcf");
        Instrmt_85.add_attribute("UOMQty", "6538854.940000"); // 3
        Instrmt_85_set.insert("6538854.940000");
        Instrmt_85.add_attribute("PxUOM", "Bbl"); // 3
        Instrmt_85_set.insert("Bbl");
        Instrmt_85.add_attribute("PxUOMQty", "12537617.180000"); // 3
        Instrmt_85_set.insert("12537617.180000");
        Instrmt_85.add_attribute("SettlMeth", "P"); // 3
        Instrmt_85_set.insert("P");
        Instrmt_85.add_attribute("ExerStyle", "0"); // 3
        Instrmt_85_set.insert("0");
        Instrmt_85.add_attribute("OptPayoutTyp", "2"); // 3
        Instrmt_85_set.insert("2");
        Instrmt_85.add_attribute("OptPayAmt", "OptPayoutAmount_t_1280218888"); // 3
        Instrmt_85_set.insert("OptPayoutAmount_t_1280218888");
        Instrmt_85.add_attribute("PxQteMeth", "INT"); // 3
        Instrmt_85_set.insert("INT");
        Instrmt_85.add_attribute("ValMeth", "EQTY"); // 3
        Instrmt_85_set.insert("EQTY");
        Instrmt_85.add_attribute("ListMeth", "0"); // 3
        Instrmt_85_set.insert("0");
        Instrmt_85.add_attribute("CapPx", "18158501.950000"); // 3
        Instrmt_85_set.insert("18158501.950000");
        Instrmt_85.add_attribute("FlrPx", "16164663.440000"); // 3
        Instrmt_85_set.insert("16164663.440000");
        Instrmt_85.add_attribute("PutCall", "0"); // 3
        Instrmt_85_set.insert("0");
        Instrmt_85.add_attribute("FlexInd", "true"); // 3
        Instrmt_85_set.insert("true");
        Instrmt_85.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_85_set.insert("true");
        Instrmt_85.add_attribute("TmUnit", "D"); // 3
        Instrmt_85_set.insert("D");
        Instrmt_85.add_attribute("CpnRt", "14636625.030000"); // 3
        Instrmt_85_set.insert("14636625.030000");
        Instrmt_85.add_attribute("Exch", "SecurityExchange_t_1385129983"); // 3
        Instrmt_85_set.insert("SecurityExchange_t_1385129983");
        Instrmt_85.add_attribute("PosLmt", "284504418"); // 3
        Instrmt_85_set.insert("284504418");
        Instrmt_85.add_attribute("NTPosLmt", "675194877"); // 3
        Instrmt_85_set.insert("675194877");
        Instrmt_85.add_attribute("Issr", "Issuer_t_1853377539"); // 3
        Instrmt_85_set.insert("Issuer_t_1853377539");
        Instrmt_85.add_attribute("EncIssrLen", "840129630"); // 3
        Instrmt_85_set.insert("840129630");
        Instrmt_85.add_attribute("EncIssr", "EncodedIssuer_t_2053406497"); // 3
        Instrmt_85_set.insert("EncodedIssuer_t_2053406497");
        Instrmt_85.add_attribute("Desc", "SecurityDesc_t_476631700"); // 3
        Instrmt_85_set.insert("SecurityDesc_t_476631700");
        Instrmt_85.add_attribute("EncSecDescLen", "1128983091"); // 3
        Instrmt_85_set.insert("1128983091");
        Instrmt_85.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_400199154"); // 3
        Instrmt_85_set.insert("EncodedSecurityDesc_t_400199154");
        Instrmt_85.add_attribute("Pool", "Pool_t_667999747"); // 3
        Instrmt_85_set.insert("Pool_t_667999747");
        Instrmt_85.add_attribute("CSetMo", "1848330262"); // 3
        Instrmt_85_set.insert("1848330262");
        Instrmt_85.add_attribute("CPPgm", "2"); // 3
        Instrmt_85_set.insert("2");
        Instrmt_85.add_attribute("CPRegT", "CPRegType_t_1511547918"); // 3
        Instrmt_85_set.insert("CPRegType_t_1511547918");
        Instrmt_85.add_attribute("Dated", "DatedDate_t_2068998942"); // 3
        Instrmt_85_set.insert("DatedDate_t_2068998942");
        Instrmt_85.add_attribute("IntAcrl", "InterestAccrualDate_t_1809434579"); // 3
        Instrmt_85_set.insert("InterestAccrualDate_t_1809434579");
        all_values.push_back(Instrmt_85_set);
        all_compo_names.insert("Instrmt_85_set");

        {
          xml_element AID_88{"AID"};
          multiset<string> AID_88_set;
          AID_88.add_attribute("AltID", "SecurityAltID_t_1401081280"); // 4
          AID_88_set.insert("SecurityAltID_t_1401081280");
          AID_88.add_attribute("AltIDSrc", "9"); // 4
          AID_88_set.insert("9");
          all_values.push_back(AID_88_set);
          all_compo_names.insert("AID_88_set");

          Instrmt_85.add_element(AID_88);
        }
        {
          xml_element SecXML_88{"SecXML"};
          multiset<string> SecXML_88_set;
          SecXML_88.add_attribute("Schema", "SecurityXMLSchema_t_1703918892"); // 4
          SecXML_88_set.insert("SecurityXMLSchema_t_1703918892");
          all_values.push_back(SecXML_88_set);
          all_compo_names.insert("SecXML_88_set");

          Instrmt_85.add_element(SecXML_88);
        }
        {
          xml_element Evnt_88{"Evnt"};
          multiset<string> Evnt_88_set;
          Evnt_88.add_attribute("EventTyp", "1"); // 4
          Evnt_88_set.insert("1");
          Evnt_88.add_attribute("Dt", "EventDate_t_2127043180"); // 4
          Evnt_88_set.insert("EventDate_t_2127043180");
          Evnt_88.add_attribute("Tm", "EventTime_t_836654132"); // 4
          Evnt_88_set.insert("EventTime_t_836654132");
          Evnt_88.add_attribute("Px", "8519636.310000"); // 4
          Evnt_88_set.insert("8519636.310000");
          Evnt_88.add_attribute("Txt", "EventText_t_2083605862"); // 4
          Evnt_88_set.insert("EventText_t_2083605862");
          all_values.push_back(Evnt_88_set);
          all_compo_names.insert("Evnt_88_set");

          Instrmt_85.add_element(Evnt_88);
        }
        {
          xml_element Pty_432{"Pty"};
          multiset<string> Pty_432_set;
          Pty_432.add_attribute("ID", "InstrumentPartyID_t_1691924064"); // 4
          Pty_432_set.insert("InstrumentPartyID_t_1691924064");
          Pty_432.add_attribute("Src", "3"); // 4
          Pty_432_set.insert("3");
          Pty_432.add_attribute("R", "19"); // 4
          Pty_432_set.insert("19");
          all_values.push_back(Pty_432_set);
          all_compo_names.insert("Pty_432_set");

          {
            xml_element Sub_432{"Sub"};
            multiset<string> Sub_432_set;
            Sub_432.add_attribute("ID", "InstrumentPartySubID_t_2117037037"); // 5
            Sub_432_set.insert("InstrumentPartySubID_t_2117037037");
            Sub_432.add_attribute("Typ", "31"); // 5
            Sub_432_set.insert("31");
            all_values.push_back(Sub_432_set);
            all_compo_names.insert("Sub_432_set");

            Pty_432.add_element(Sub_432);
          }
          Instrmt_85.add_element(Pty_432);
        }
        {
          xml_element CmplxEvnt_85{"CmplxEvnt"};
          multiset<string> CmplxEvnt_85_set;
          CmplxEvnt_85.add_attribute("Typ", "1"); // 4
          CmplxEvnt_85_set.insert("1");
          CmplxEvnt_85.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_570376937"); // 4
          CmplxEvnt_85_set.insert("ComplexOptPayoutAmount_t_570376937");
          CmplxEvnt_85.add_attribute("Px", "1344790.930000"); // 4
          CmplxEvnt_85_set.insert("1344790.930000");
          CmplxEvnt_85.add_attribute("PxBndryMeth", "3"); // 4
          CmplxEvnt_85_set.insert("3");
          CmplxEvnt_85.add_attribute("PxBndryPrcsn", "8548813.550000"); // 4
          CmplxEvnt_85_set.insert("8548813.550000");
          CmplxEvnt_85.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_85_set.insert("2");
          CmplxEvnt_85.add_attribute("Cond", "2"); // 4
          CmplxEvnt_85_set.insert("2");
          all_values.push_back(CmplxEvnt_85_set);
          all_compo_names.insert("CmplxEvnt_85_set");

          {
            xml_element EvntDts_85{"EvntDts"};
            multiset<string> EvntDts_85_set;
            EvntDts_85.add_attribute("StartDt", "ComplexEventStartDate_t_1695010986"); // 5
            EvntDts_85_set.insert("ComplexEventStartDate_t_1695010986");
            EvntDts_85.add_attribute("EndDt", "ComplexEventEndDate_t_715596819"); // 5
            EvntDts_85_set.insert("ComplexEventEndDate_t_715596819");
            all_values.push_back(EvntDts_85_set);
            all_compo_names.insert("EvntDts_85_set");

            {
              xml_element EvntTms_85{"EvntTms"};
              multiset<string> EvntTms_85_set;
              EvntTms_85.add_attribute("StartTm", "1831790193"); // 6
              EvntTms_85_set.insert("1831790193");
              EvntTms_85.add_attribute("EndTm", "676510429"); // 6
              EvntTms_85_set.insert("676510429");
              all_values.push_back(EvntTms_85_set);
              all_compo_names.insert("EvntTms_85_set");

              EvntDts_85.add_element(EvntTms_85);
            }
            CmplxEvnt_85.add_element(EvntDts_85);
          }
          Instrmt_85.add_element(CmplxEvnt_85);
        }
        Instrmts_2.add_element(Instrmt_85);
      }
      Reqs_1.add_element(Instrmts_2);
    }
    elt.add_element(Reqs_1);
  } // end Reqs
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
