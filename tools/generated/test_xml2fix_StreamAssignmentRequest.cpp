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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"StrmAsgnReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentRequest_message_t_0;
  elt.add_attribute("ReqID", "StreamAsgnReqID_t_1350576461"); // 0
  StreamAssignmentRequest_message_t_0.insert("StreamAsgnReqID_t_1350576461");
  elt.add_attribute("AsgnReqTyp", "2"); // 0
  StreamAssignmentRequest_message_t_0.insert("2");
  all_values.push_back(StreamAssignmentRequest_message_t_0);
  all_compo_names.insert("StreamAssignmentRequest_message_t");

  { // Hdr
    xml_element Hdr_95{"Hdr"};
    multiset<string> Hdr_95_set;
    Hdr_95.add_attribute("SeqNum", "1021035707"); // 1
    Hdr_95_set.insert("1021035707");
    Hdr_95.add_attribute("SID", "SenderCompID_t_1364044771"); // 1
    Hdr_95_set.insert("SenderCompID_t_1364044771");
    Hdr_95.add_attribute("TID", "TargetCompID_t_365028264"); // 1
    Hdr_95_set.insert("TargetCompID_t_365028264");
    Hdr_95.add_attribute("OBID", "OnBehalfOfCompID_t_327933972"); // 1
    Hdr_95_set.insert("OnBehalfOfCompID_t_327933972");
    Hdr_95.add_attribute("D2ID", "DeliverToCompID_t_754480384"); // 1
    Hdr_95_set.insert("DeliverToCompID_t_754480384");
    Hdr_95.add_attribute("SSub", "SenderSubID_t_20006945"); // 1
    Hdr_95_set.insert("SenderSubID_t_20006945");
    Hdr_95.add_attribute("SLoc", "SenderLocationID_t_1779465376"); // 1
    Hdr_95_set.insert("SenderLocationID_t_1779465376");
    Hdr_95.add_attribute("TSub", "TargetSubID_t_409537064"); // 1
    Hdr_95_set.insert("TargetSubID_t_409537064");
    Hdr_95.add_attribute("TLoc", "TargetLocationID_t_1452685661"); // 1
    Hdr_95_set.insert("TargetLocationID_t_1452685661");
    Hdr_95.add_attribute("OBSub", "OnBehalfOfSubID_t_814951559"); // 1
    Hdr_95_set.insert("OnBehalfOfSubID_t_814951559");
    Hdr_95.add_attribute("OBLoc", "OnBehalfOfLocationID_t_277930324"); // 1
    Hdr_95_set.insert("OnBehalfOfLocationID_t_277930324");
    Hdr_95.add_attribute("D2Sub", "DeliverToSubID_t_1037537024"); // 1
    Hdr_95_set.insert("DeliverToSubID_t_1037537024");
    Hdr_95.add_attribute("D2Loc", "DeliverToLocationID_t_608776952"); // 1
    Hdr_95_set.insert("DeliverToLocationID_t_608776952");
    Hdr_95.add_attribute("PosDup", "N"); // 1
    Hdr_95_set.insert("N");
    Hdr_95.add_attribute("PosRsnd", "Y"); // 1
    Hdr_95_set.insert("Y");
    Hdr_95.add_attribute("Snt", "SendingTime_t_1887038610"); // 1
    Hdr_95_set.insert("SendingTime_t_1887038610");
    Hdr_95.add_attribute("OrigSnt", "OrigSendingTime_t_1858204486"); // 1
    Hdr_95_set.insert("OrigSendingTime_t_1858204486");
    Hdr_95.add_attribute("MsgEncd", "MessageEncoding_t_1941439981"); // 1
    Hdr_95_set.insert("MessageEncoding_t_1941439981");
    all_values.push_back(Hdr_95_set);
    all_compo_names.insert("Hdr_95_set");

    {
      xml_element Hop_95{"Hop"};
      multiset<string> Hop_95_set;
      Hop_95.add_attribute("ID", "HopCompID_t_1472890134"); // 2
      Hop_95_set.insert("HopCompID_t_1472890134");
      Hop_95.add_attribute("Ref", "1036659690"); // 2
      Hop_95_set.insert("1036659690");
      Hop_95.add_attribute("Snt", "HopSendingTime_t_1585721127"); // 2
      Hop_95_set.insert("HopSendingTime_t_1585721127");
      all_values.push_back(Hop_95_set);
      all_compo_names.insert("Hop_95_set");

      Hdr_95.add_element(Hop_95);
    }
    elt.add_element(Hdr_95);
  } // end Hdr
  { // Reqs
    xml_element Reqs_0{"Reqs"};
    {
      xml_element Pty_437{"Pty"};
      multiset<string> Pty_437_set;
      Pty_437.add_attribute("ID", "PartyID_t_1667106975"); // 2
      Pty_437_set.insert("PartyID_t_1667106975");
      Pty_437.add_attribute("Src", "5"); // 2
      Pty_437_set.insert("5");
      Pty_437.add_attribute("R", "75"); // 2
      Pty_437_set.insert("75");
      all_values.push_back(Pty_437_set);
      all_compo_names.insert("Pty_437_set");

      {
        xml_element Sub_437{"Sub"};
        multiset<string> Sub_437_set;
        Sub_437.add_attribute("ID", "PartySubID_t_1213329909"); // 3
        Sub_437_set.insert("PartySubID_t_1213329909");
        Sub_437.add_attribute("Typ", "14"); // 3
        Sub_437_set.insert("14");
        all_values.push_back(Sub_437_set);
        all_compo_names.insert("Sub_437_set");

        Pty_437.add_element(Sub_437);
      }
      Reqs_0.add_element(Pty_437);
    }
    {
      xml_element Instrmts_3{"Instrmts"};
      multiset<string> Instrmts_3_set;
      Instrmts_3.add_attribute("SettlTyp", "1"); // 2
      Instrmts_3_set.insert("1");
      Instrmts_3.add_attribute("Sz", "18841042.250000"); // 2
      Instrmts_3_set.insert("18841042.250000");
      Instrmts_3.add_attribute("MDStrmID", "MDStreamID_t_1975147304"); // 2
      Instrmts_3_set.insert("MDStreamID_t_1975147304");
      all_values.push_back(Instrmts_3_set);
      all_compo_names.insert("Instrmts_3_set");

      {
        xml_element Instrmt_86{"Instrmt"};
        multiset<string> Instrmt_86_set;
        Instrmt_86.add_attribute("Sym", "Symbol_t_927536436"); // 3
        Instrmt_86_set.insert("Symbol_t_927536436");
        Instrmt_86.add_attribute("Sfx", "CD"); // 3
        Instrmt_86_set.insert("CD");
        Instrmt_86.add_attribute("ID", "SecurityID_t_1191708427"); // 3
        Instrmt_86_set.insert("SecurityID_t_1191708427");
        Instrmt_86.add_attribute("Src", "M"); // 3
        Instrmt_86_set.insert("M");
        Instrmt_86.add_attribute("Prod", "7"); // 3
        Instrmt_86_set.insert("7");
        Instrmt_86.add_attribute("ProdCmplx", "ProductComplex_t_1946188811"); // 3
        Instrmt_86_set.insert("ProductComplex_t_1946188811");
        Instrmt_86.add_attribute("SecGrp", "SecurityGroup_t_1312571646"); // 3
        Instrmt_86_set.insert("SecurityGroup_t_1312571646");
        Instrmt_86.add_attribute("CFI", "CFICode_t_717571984"); // 3
        Instrmt_86_set.insert("CFICode_t_717571984");
        Instrmt_86.add_attribute("SecTyp", "TBOND"); // 3
        Instrmt_86_set.insert("TBOND");
        Instrmt_86.add_attribute("SubTyp", "SecuritySubType_t_617773660"); // 3
        Instrmt_86_set.insert("SecuritySubType_t_617773660");
        Instrmt_86.add_attribute("MMY", "1532523544"); // 3
        Instrmt_86_set.insert("1532523544");
        Instrmt_86.add_attribute("MatDt", "MaturityDate_t_486172552"); // 3
        Instrmt_86_set.insert("MaturityDate_t_486172552");
        Instrmt_86.add_attribute("MatTm", "1655310684"); // 3
        Instrmt_86_set.insert("1655310684");
        Instrmt_86.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2141300496"); // 3
        Instrmt_86_set.insert("SettleOnOpenFlag_t_2141300496");
        Instrmt_86.add_attribute("AsgnMeth", "1418703120"); // 3
        Instrmt_86_set.insert("1418703120");
        Instrmt_86.add_attribute("Status", "2"); // 3
        Instrmt_86_set.insert("2");
        Instrmt_86.add_attribute("CpnPmt", "CouponPaymentDate_t_1880855459"); // 3
        Instrmt_86_set.insert("CouponPaymentDate_t_1880855459");
        Instrmt_86.add_attribute("RestrctTyp", "MM"); // 3
        Instrmt_86_set.insert("MM");
        Instrmt_86.add_attribute("Snrty", "SB"); // 3
        Instrmt_86_set.insert("SB");
        Instrmt_86.add_attribute("NotlPctOut", "12062619.450000"); // 3
        Instrmt_86_set.insert("12062619.450000");
        Instrmt_86.add_attribute("OrigNotlPctOut", "186000.010000"); // 3
        Instrmt_86_set.insert("186000.010000");
        Instrmt_86.add_attribute("AttchPnt", "19115481.320000"); // 3
        Instrmt_86_set.insert("19115481.320000");
        Instrmt_86.add_attribute("DetchPnt", "10437778.850000"); // 3
        Instrmt_86_set.insert("10437778.850000");
        Instrmt_86.add_attribute("Issued", "IssueDate_t_1685706976"); // 3
        Instrmt_86_set.insert("IssueDate_t_1685706976");
        Instrmt_86.add_attribute("RepoCollSecTyp", "497924417"); // 3
        Instrmt_86_set.insert("497924417");
        Instrmt_86.add_attribute("RepoTrm", "1160886474"); // 3
        Instrmt_86_set.insert("1160886474");
        Instrmt_86.add_attribute("RepoRt", "7515532.370000"); // 3
        Instrmt_86_set.insert("7515532.370000");
        Instrmt_86.add_attribute("Fctr", "11224952.590000"); // 3
        Instrmt_86_set.insert("11224952.590000");
        Instrmt_86.add_attribute("CrdRtg", "CreditRating_t_1301713964"); // 3
        Instrmt_86_set.insert("CreditRating_t_1301713964");
        Instrmt_86.add_attribute("Rgstry", "InstrRegistry_t_488173815"); // 3
        Instrmt_86_set.insert("InstrRegistry_t_488173815");
        Instrmt_86.add_attribute("IssuCtry", "950158915"); // 3
        Instrmt_86_set.insert("950158915");
        Instrmt_86.add_attribute("StPrv", "StateOrProvinceOfIssue_t_81766752"); // 3
        Instrmt_86_set.insert("StateOrProvinceOfIssue_t_81766752");
        Instrmt_86.add_attribute("Lcl", "LocaleOfIssue_t_1245830099"); // 3
        Instrmt_86_set.insert("LocaleOfIssue_t_1245830099");
        Instrmt_86.add_attribute("Redeem", "RedemptionDate_t_2141867342"); // 3
        Instrmt_86_set.insert("RedemptionDate_t_2141867342");
        Instrmt_86.add_attribute("StrkPx", "13743314.530000"); // 3
        Instrmt_86_set.insert("13743314.530000");
        Instrmt_86.add_attribute("StrkCcy", "USD"); // 3
        Instrmt_86_set.insert("USD");
        Instrmt_86.add_attribute("StrkMult", "5394194.520000"); // 3
        Instrmt_86_set.insert("5394194.520000");
        Instrmt_86.add_attribute("StrkValu", "9015086.920000"); // 3
        Instrmt_86_set.insert("9015086.920000");
        Instrmt_86.add_attribute("StrkPxDtrmnMeth", "3"); // 3
        Instrmt_86_set.insert("3");
        Instrmt_86.add_attribute("StrkPxBndryMeth", "3"); // 3
        Instrmt_86_set.insert("3");
        Instrmt_86.add_attribute("StrkPxBndryPrcsn", "2865485.880000"); // 3
        Instrmt_86_set.insert("2865485.880000");
        Instrmt_86.add_attribute("PxDtrmnMeth", "3"); // 3
        Instrmt_86_set.insert("3");
        Instrmt_86.add_attribute("OptAt", "665020148"); // 3
        Instrmt_86_set.insert("665020148");
        Instrmt_86.add_attribute("Mult", "2803654.370000"); // 3
        Instrmt_86_set.insert("2803654.370000");
        Instrmt_86.add_attribute("MultTyp", "2"); // 3
        Instrmt_86_set.insert("2");
        Instrmt_86.add_attribute("FlowSchedTyp", "0"); // 3
        Instrmt_86_set.insert("0");
        Instrmt_86.add_attribute("MinPxIncr", "137372.480000"); // 3
        Instrmt_86_set.insert("137372.480000");
        Instrmt_86.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_888147068"); // 3
        Instrmt_86_set.insert("MinPriceIncrementAmount_t_888147068");
        Instrmt_86.add_attribute("UOM", "tn"); // 3
        Instrmt_86_set.insert("tn");
        Instrmt_86.add_attribute("UOMQty", "12199991.930000"); // 3
        Instrmt_86_set.insert("12199991.930000");
        Instrmt_86.add_attribute("PxUOM", "lbs"); // 3
        Instrmt_86_set.insert("lbs");
        Instrmt_86.add_attribute("PxUOMQty", "12867823.090000"); // 3
        Instrmt_86_set.insert("12867823.090000");
        Instrmt_86.add_attribute("SettlMeth", "C"); // 3
        Instrmt_86_set.insert("C");
        Instrmt_86.add_attribute("ExerStyle", "0"); // 3
        Instrmt_86_set.insert("0");
        Instrmt_86.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_86_set.insert("1");
        Instrmt_86.add_attribute("OptPayAmt", "OptPayoutAmount_t_1277179905"); // 3
        Instrmt_86_set.insert("OptPayoutAmount_t_1277179905");
        Instrmt_86.add_attribute("PxQteMeth", "PCTPAR"); // 3
        Instrmt_86_set.insert("PCTPAR");
        Instrmt_86.add_attribute("ValMeth", "CDS"); // 3
        Instrmt_86_set.insert("CDS");
        Instrmt_86.add_attribute("ListMeth", "1"); // 3
        Instrmt_86_set.insert("1");
        Instrmt_86.add_attribute("CapPx", "16846974.500000"); // 3
        Instrmt_86_set.insert("16846974.500000");
        Instrmt_86.add_attribute("FlrPx", "17098772.530000"); // 3
        Instrmt_86_set.insert("17098772.530000");
        Instrmt_86.add_attribute("PutCall", "1"); // 3
        Instrmt_86_set.insert("1");
        Instrmt_86.add_attribute("FlexInd", "true"); // 3
        Instrmt_86_set.insert("true");
        Instrmt_86.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_86_set.insert("true");
        Instrmt_86.add_attribute("TmUnit", "S"); // 3
        Instrmt_86_set.insert("S");
        Instrmt_86.add_attribute("CpnRt", "9669806.100000"); // 3
        Instrmt_86_set.insert("9669806.100000");
        Instrmt_86.add_attribute("Exch", "SecurityExchange_t_1497349806"); // 3
        Instrmt_86_set.insert("SecurityExchange_t_1497349806");
        Instrmt_86.add_attribute("PosLmt", "279444231"); // 3
        Instrmt_86_set.insert("279444231");
        Instrmt_86.add_attribute("NTPosLmt", "1868489302"); // 3
        Instrmt_86_set.insert("1868489302");
        Instrmt_86.add_attribute("Issr", "Issuer_t_1498680892"); // 3
        Instrmt_86_set.insert("Issuer_t_1498680892");
        Instrmt_86.add_attribute("EncIssrLen", "1436637343"); // 3
        Instrmt_86_set.insert("1436637343");
        Instrmt_86.add_attribute("EncIssr", "EncodedIssuer_t_7554243"); // 3
        Instrmt_86_set.insert("EncodedIssuer_t_7554243");
        Instrmt_86.add_attribute("Desc", "SecurityDesc_t_1986184530"); // 3
        Instrmt_86_set.insert("SecurityDesc_t_1986184530");
        Instrmt_86.add_attribute("EncSecDescLen", "2101657491"); // 3
        Instrmt_86_set.insert("2101657491");
        Instrmt_86.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_287919680"); // 3
        Instrmt_86_set.insert("EncodedSecurityDesc_t_287919680");
        Instrmt_86.add_attribute("Pool", "Pool_t_1744907640"); // 3
        Instrmt_86_set.insert("Pool_t_1744907640");
        Instrmt_86.add_attribute("CSetMo", "1151064663"); // 3
        Instrmt_86_set.insert("1151064663");
        Instrmt_86.add_attribute("CPPgm", "2"); // 3
        Instrmt_86_set.insert("2");
        Instrmt_86.add_attribute("CPRegT", "CPRegType_t_485571060"); // 3
        Instrmt_86_set.insert("CPRegType_t_485571060");
        Instrmt_86.add_attribute("Dated", "DatedDate_t_526298840"); // 3
        Instrmt_86_set.insert("DatedDate_t_526298840");
        Instrmt_86.add_attribute("IntAcrl", "InterestAccrualDate_t_1521656121"); // 3
        Instrmt_86_set.insert("InterestAccrualDate_t_1521656121");
        all_values.push_back(Instrmt_86_set);
        all_compo_names.insert("Instrmt_86_set");

        {
          xml_element AID_89{"AID"};
          multiset<string> AID_89_set;
          AID_89.add_attribute("AltID", "SecurityAltID_t_1392318130"); // 4
          AID_89_set.insert("SecurityAltID_t_1392318130");
          AID_89.add_attribute("AltIDSrc", "D"); // 4
          AID_89_set.insert("D");
          all_values.push_back(AID_89_set);
          all_compo_names.insert("AID_89_set");

          Instrmt_86.add_element(AID_89);
        }
        {
          xml_element SecXML_89{"SecXML"};
          multiset<string> SecXML_89_set;
          SecXML_89.add_attribute("Schema", "SecurityXMLSchema_t_1637949551"); // 4
          SecXML_89_set.insert("SecurityXMLSchema_t_1637949551");
          all_values.push_back(SecXML_89_set);
          all_compo_names.insert("SecXML_89_set");

          Instrmt_86.add_element(SecXML_89);
        }
        {
          xml_element Evnt_89{"Evnt"};
          multiset<string> Evnt_89_set;
          Evnt_89.add_attribute("EventTyp", "8"); // 4
          Evnt_89_set.insert("8");
          Evnt_89.add_attribute("Dt", "EventDate_t_1450304228"); // 4
          Evnt_89_set.insert("EventDate_t_1450304228");
          Evnt_89.add_attribute("Tm", "EventTime_t_767645808"); // 4
          Evnt_89_set.insert("EventTime_t_767645808");
          Evnt_89.add_attribute("Px", "8863285.150000"); // 4
          Evnt_89_set.insert("8863285.150000");
          Evnt_89.add_attribute("Txt", "EventText_t_62538918"); // 4
          Evnt_89_set.insert("EventText_t_62538918");
          all_values.push_back(Evnt_89_set);
          all_compo_names.insert("Evnt_89_set");

          Instrmt_86.add_element(Evnt_89);
        }
        {
          xml_element Pty_438{"Pty"};
          multiset<string> Pty_438_set;
          Pty_438.add_attribute("ID", "InstrumentPartyID_t_1199056029"); // 4
          Pty_438_set.insert("InstrumentPartyID_t_1199056029");
          Pty_438.add_attribute("Src", "F"); // 4
          Pty_438_set.insert("F");
          Pty_438.add_attribute("R", "47"); // 4
          Pty_438_set.insert("47");
          all_values.push_back(Pty_438_set);
          all_compo_names.insert("Pty_438_set");

          {
            xml_element Sub_438{"Sub"};
            multiset<string> Sub_438_set;
            Sub_438.add_attribute("ID", "InstrumentPartySubID_t_1712233003"); // 5
            Sub_438_set.insert("InstrumentPartySubID_t_1712233003");
            Sub_438.add_attribute("Typ", "27"); // 5
            Sub_438_set.insert("27");
            all_values.push_back(Sub_438_set);
            all_compo_names.insert("Sub_438_set");

            Pty_438.add_element(Sub_438);
          }
          Instrmt_86.add_element(Pty_438);
        }
        {
          xml_element CmplxEvnt_86{"CmplxEvnt"};
          multiset<string> CmplxEvnt_86_set;
          CmplxEvnt_86.add_attribute("Typ", "6"); // 4
          CmplxEvnt_86_set.insert("6");
          CmplxEvnt_86.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1452257782"); // 4
          CmplxEvnt_86_set.insert("ComplexOptPayoutAmount_t_1452257782");
          CmplxEvnt_86.add_attribute("Px", "260831.820000"); // 4
          CmplxEvnt_86_set.insert("260831.820000");
          CmplxEvnt_86.add_attribute("PxBndryMeth", "1"); // 4
          CmplxEvnt_86_set.insert("1");
          CmplxEvnt_86.add_attribute("PxBndryPrcsn", "17317020.130000"); // 4
          CmplxEvnt_86_set.insert("17317020.130000");
          CmplxEvnt_86.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_86_set.insert("2");
          CmplxEvnt_86.add_attribute("Cond", "1"); // 4
          CmplxEvnt_86_set.insert("1");
          all_values.push_back(CmplxEvnt_86_set);
          all_compo_names.insert("CmplxEvnt_86_set");

          {
            xml_element EvntDts_86{"EvntDts"};
            multiset<string> EvntDts_86_set;
            EvntDts_86.add_attribute("StartDt", "ComplexEventStartDate_t_1020855708"); // 5
            EvntDts_86_set.insert("ComplexEventStartDate_t_1020855708");
            EvntDts_86.add_attribute("EndDt", "ComplexEventEndDate_t_1902126727"); // 5
            EvntDts_86_set.insert("ComplexEventEndDate_t_1902126727");
            all_values.push_back(EvntDts_86_set);
            all_compo_names.insert("EvntDts_86_set");

            {
              xml_element EvntTms_86{"EvntTms"};
              multiset<string> EvntTms_86_set;
              EvntTms_86.add_attribute("StartTm", "2016441404"); // 6
              EvntTms_86_set.insert("2016441404");
              EvntTms_86.add_attribute("EndTm", "975029551"); // 6
              EvntTms_86_set.insert("975029551");
              all_values.push_back(EvntTms_86_set);
              all_compo_names.insert("EvntTms_86_set");

              EvntDts_86.add_element(EvntTms_86);
            }
            CmplxEvnt_86.add_element(EvntDts_86);
          }
          Instrmt_86.add_element(CmplxEvnt_86);
        }
        Instrmts_3.add_element(Instrmt_86);
      }
      Reqs_0.add_element(Instrmts_3);
    }
    elt.add_element(Reqs_0);
  } // end Reqs
  { // Reqs
    xml_element Reqs_1{"Reqs"};
    {
      xml_element Pty_439{"Pty"};
      multiset<string> Pty_439_set;
      Pty_439.add_attribute("ID", "PartyID_t_42562759"); // 2
      Pty_439_set.insert("PartyID_t_42562759");
      Pty_439.add_attribute("Src", "D"); // 2
      Pty_439_set.insert("D");
      Pty_439.add_attribute("R", "8"); // 2
      Pty_439_set.insert("8");
      all_values.push_back(Pty_439_set);
      all_compo_names.insert("Pty_439_set");

      {
        xml_element Sub_439{"Sub"};
        multiset<string> Sub_439_set;
        Sub_439.add_attribute("ID", "PartySubID_t_344219687"); // 3
        Sub_439_set.insert("PartySubID_t_344219687");
        Sub_439.add_attribute("Typ", "26"); // 3
        Sub_439_set.insert("26");
        all_values.push_back(Sub_439_set);
        all_compo_names.insert("Sub_439_set");

        Pty_439.add_element(Sub_439);
      }
      Reqs_1.add_element(Pty_439);
    }
    {
      xml_element Instrmts_4{"Instrmts"};
      multiset<string> Instrmts_4_set;
      Instrmts_4.add_attribute("SettlTyp", "B"); // 2
      Instrmts_4_set.insert("B");
      Instrmts_4.add_attribute("Sz", "18658758.080000"); // 2
      Instrmts_4_set.insert("18658758.080000");
      Instrmts_4.add_attribute("MDStrmID", "MDStreamID_t_1344270938"); // 2
      Instrmts_4_set.insert("MDStreamID_t_1344270938");
      all_values.push_back(Instrmts_4_set);
      all_compo_names.insert("Instrmts_4_set");

      {
        xml_element Instrmt_87{"Instrmt"};
        multiset<string> Instrmt_87_set;
        Instrmt_87.add_attribute("Sym", "Symbol_t_170506909"); // 3
        Instrmt_87_set.insert("Symbol_t_170506909");
        Instrmt_87.add_attribute("Sfx", "CD"); // 3
        Instrmt_87_set.insert("CD");
        Instrmt_87.add_attribute("ID", "SecurityID_t_1034075818"); // 3
        Instrmt_87_set.insert("SecurityID_t_1034075818");
        Instrmt_87.add_attribute("Src", "D"); // 3
        Instrmt_87_set.insert("D");
        Instrmt_87.add_attribute("Prod", "2"); // 3
        Instrmt_87_set.insert("2");
        Instrmt_87.add_attribute("ProdCmplx", "ProductComplex_t_1920404334"); // 3
        Instrmt_87_set.insert("ProductComplex_t_1920404334");
        Instrmt_87.add_attribute("SecGrp", "SecurityGroup_t_1683350056"); // 3
        Instrmt_87_set.insert("SecurityGroup_t_1683350056");
        Instrmt_87.add_attribute("CFI", "CFICode_t_1175559902"); // 3
        Instrmt_87_set.insert("CFICode_t_1175559902");
        Instrmt_87.add_attribute("SecTyp", "TPRN"); // 3
        Instrmt_87_set.insert("TPRN");
        Instrmt_87.add_attribute("SubTyp", "SecuritySubType_t_1308282580"); // 3
        Instrmt_87_set.insert("SecuritySubType_t_1308282580");
        Instrmt_87.add_attribute("MMY", "740309257"); // 3
        Instrmt_87_set.insert("740309257");
        Instrmt_87.add_attribute("MatDt", "MaturityDate_t_1403049224"); // 3
        Instrmt_87_set.insert("MaturityDate_t_1403049224");
        Instrmt_87.add_attribute("MatTm", "489992404"); // 3
        Instrmt_87_set.insert("489992404");
        Instrmt_87.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_45083391"); // 3
        Instrmt_87_set.insert("SettleOnOpenFlag_t_45083391");
        Instrmt_87.add_attribute("AsgnMeth", "1429132406"); // 3
        Instrmt_87_set.insert("1429132406");
        Instrmt_87.add_attribute("Status", "1"); // 3
        Instrmt_87_set.insert("1");
        Instrmt_87.add_attribute("CpnPmt", "CouponPaymentDate_t_1776785404"); // 3
        Instrmt_87_set.insert("CouponPaymentDate_t_1776785404");
        Instrmt_87.add_attribute("RestrctTyp", "MM"); // 3
        Instrmt_87_set.insert("MM");
        Instrmt_87.add_attribute("Snrty", "SD"); // 3
        Instrmt_87_set.insert("SD");
        Instrmt_87.add_attribute("NotlPctOut", "6501574.640000"); // 3
        Instrmt_87_set.insert("6501574.640000");
        Instrmt_87.add_attribute("OrigNotlPctOut", "9308643.220000"); // 3
        Instrmt_87_set.insert("9308643.220000");
        Instrmt_87.add_attribute("AttchPnt", "10682666.640000"); // 3
        Instrmt_87_set.insert("10682666.640000");
        Instrmt_87.add_attribute("DetchPnt", "16251870.150000"); // 3
        Instrmt_87_set.insert("16251870.150000");
        Instrmt_87.add_attribute("Issued", "IssueDate_t_973427081"); // 3
        Instrmt_87_set.insert("IssueDate_t_973427081");
        Instrmt_87.add_attribute("RepoCollSecTyp", "534648412"); // 3
        Instrmt_87_set.insert("534648412");
        Instrmt_87.add_attribute("RepoTrm", "1603797582"); // 3
        Instrmt_87_set.insert("1603797582");
        Instrmt_87.add_attribute("RepoRt", "13176467.690000"); // 3
        Instrmt_87_set.insert("13176467.690000");
        Instrmt_87.add_attribute("Fctr", "4866012.210000"); // 3
        Instrmt_87_set.insert("4866012.210000");
        Instrmt_87.add_attribute("CrdRtg", "CreditRating_t_2108706990"); // 3
        Instrmt_87_set.insert("CreditRating_t_2108706990");
        Instrmt_87.add_attribute("Rgstry", "InstrRegistry_t_1036038929"); // 3
        Instrmt_87_set.insert("InstrRegistry_t_1036038929");
        Instrmt_87.add_attribute("IssuCtry", "1830872159"); // 3
        Instrmt_87_set.insert("1830872159");
        Instrmt_87.add_attribute("StPrv", "StateOrProvinceOfIssue_t_131730251"); // 3
        Instrmt_87_set.insert("StateOrProvinceOfIssue_t_131730251");
        Instrmt_87.add_attribute("Lcl", "LocaleOfIssue_t_244896993"); // 3
        Instrmt_87_set.insert("LocaleOfIssue_t_244896993");
        Instrmt_87.add_attribute("Redeem", "RedemptionDate_t_717464330"); // 3
        Instrmt_87_set.insert("RedemptionDate_t_717464330");
        Instrmt_87.add_attribute("StrkPx", "17525413.890000"); // 3
        Instrmt_87_set.insert("17525413.890000");
        Instrmt_87.add_attribute("StrkCcy", "USD"); // 3
        Instrmt_87_set.insert("USD");
        Instrmt_87.add_attribute("StrkMult", "12884077.980000"); // 3
        Instrmt_87_set.insert("12884077.980000");
        Instrmt_87.add_attribute("StrkValu", "13969607.680000"); // 3
        Instrmt_87_set.insert("13969607.680000");
        Instrmt_87.add_attribute("StrkPxDtrmnMeth", "1"); // 3
        Instrmt_87_set.insert("1");
        Instrmt_87.add_attribute("StrkPxBndryMeth", "1"); // 3
        Instrmt_87_set.insert("1");
        Instrmt_87.add_attribute("StrkPxBndryPrcsn", "21372700.250000"); // 3
        Instrmt_87_set.insert("21372700.250000");
        Instrmt_87.add_attribute("PxDtrmnMeth", "1"); // 3
        Instrmt_87_set.insert("1");
        Instrmt_87.add_attribute("OptAt", "939199135"); // 3
        Instrmt_87_set.insert("939199135");
        Instrmt_87.add_attribute("Mult", "348697.680000"); // 3
        Instrmt_87_set.insert("348697.680000");
        Instrmt_87.add_attribute("MultTyp", "2"); // 3
        Instrmt_87_set.insert("2");
        Instrmt_87.add_attribute("FlowSchedTyp", "4"); // 3
        Instrmt_87_set.insert("4");
        Instrmt_87.add_attribute("MinPxIncr", "18116551.720000"); // 3
        Instrmt_87_set.insert("18116551.720000");
        Instrmt_87.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_400283596"); // 3
        Instrmt_87_set.insert("MinPriceIncrementAmount_t_400283596");
        Instrmt_87.add_attribute("UOM", "MMbbl"); // 3
        Instrmt_87_set.insert("MMbbl");
        Instrmt_87.add_attribute("UOMQty", "3143289.880000"); // 3
        Instrmt_87_set.insert("3143289.880000");
        Instrmt_87.add_attribute("PxUOM", "USD"); // 3
        Instrmt_87_set.insert("USD");
        Instrmt_87.add_attribute("PxUOMQty", "808594.460000"); // 3
        Instrmt_87_set.insert("808594.460000");
        Instrmt_87.add_attribute("SettlMeth", "P"); // 3
        Instrmt_87_set.insert("P");
        Instrmt_87.add_attribute("ExerStyle", "0"); // 3
        Instrmt_87_set.insert("0");
        Instrmt_87.add_attribute("OptPayoutTyp", "2"); // 3
        Instrmt_87_set.insert("2");
        Instrmt_87.add_attribute("OptPayAmt", "OptPayoutAmount_t_1395829938"); // 3
        Instrmt_87_set.insert("OptPayoutAmount_t_1395829938");
        Instrmt_87.add_attribute("PxQteMeth", "INX"); // 3
        Instrmt_87_set.insert("INX");
        Instrmt_87.add_attribute("ValMeth", "EQTY"); // 3
        Instrmt_87_set.insert("EQTY");
        Instrmt_87.add_attribute("ListMeth", "0"); // 3
        Instrmt_87_set.insert("0");
        Instrmt_87.add_attribute("CapPx", "3632934.020000"); // 3
        Instrmt_87_set.insert("3632934.020000");
        Instrmt_87.add_attribute("FlrPx", "7854975.910000"); // 3
        Instrmt_87_set.insert("7854975.910000");
        Instrmt_87.add_attribute("PutCall", "1"); // 3
        Instrmt_87_set.insert("1");
        Instrmt_87.add_attribute("FlexInd", "true"); // 3
        Instrmt_87_set.insert("true");
        Instrmt_87.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_87_set.insert("false");
        Instrmt_87.add_attribute("TmUnit", "S"); // 3
        Instrmt_87_set.insert("S");
        Instrmt_87.add_attribute("CpnRt", "8295912.620000"); // 3
        Instrmt_87_set.insert("8295912.620000");
        Instrmt_87.add_attribute("Exch", "SecurityExchange_t_1993346937"); // 3
        Instrmt_87_set.insert("SecurityExchange_t_1993346937");
        Instrmt_87.add_attribute("PosLmt", "234765423"); // 3
        Instrmt_87_set.insert("234765423");
        Instrmt_87.add_attribute("NTPosLmt", "79068382"); // 3
        Instrmt_87_set.insert("79068382");
        Instrmt_87.add_attribute("Issr", "Issuer_t_532711309"); // 3
        Instrmt_87_set.insert("Issuer_t_532711309");
        Instrmt_87.add_attribute("EncIssrLen", "683972153"); // 3
        Instrmt_87_set.insert("683972153");
        Instrmt_87.add_attribute("EncIssr", "EncodedIssuer_t_68854759"); // 3
        Instrmt_87_set.insert("EncodedIssuer_t_68854759");
        Instrmt_87.add_attribute("Desc", "SecurityDesc_t_475124905"); // 3
        Instrmt_87_set.insert("SecurityDesc_t_475124905");
        Instrmt_87.add_attribute("EncSecDescLen", "1623171288"); // 3
        Instrmt_87_set.insert("1623171288");
        Instrmt_87.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_103724527"); // 3
        Instrmt_87_set.insert("EncodedSecurityDesc_t_103724527");
        Instrmt_87.add_attribute("Pool", "Pool_t_1846670907"); // 3
        Instrmt_87_set.insert("Pool_t_1846670907");
        Instrmt_87.add_attribute("CSetMo", "1583938810"); // 3
        Instrmt_87_set.insert("1583938810");
        Instrmt_87.add_attribute("CPPgm", "99"); // 3
        Instrmt_87_set.insert("99");
        Instrmt_87.add_attribute("CPRegT", "CPRegType_t_99470856"); // 3
        Instrmt_87_set.insert("CPRegType_t_99470856");
        Instrmt_87.add_attribute("Dated", "DatedDate_t_596531592"); // 3
        Instrmt_87_set.insert("DatedDate_t_596531592");
        Instrmt_87.add_attribute("IntAcrl", "InterestAccrualDate_t_82225039"); // 3
        Instrmt_87_set.insert("InterestAccrualDate_t_82225039");
        all_values.push_back(Instrmt_87_set);
        all_compo_names.insert("Instrmt_87_set");

        {
          xml_element AID_90{"AID"};
          multiset<string> AID_90_set;
          AID_90.add_attribute("AltID", "SecurityAltID_t_1430618774"); // 4
          AID_90_set.insert("SecurityAltID_t_1430618774");
          AID_90.add_attribute("AltIDSrc", "H"); // 4
          AID_90_set.insert("H");
          all_values.push_back(AID_90_set);
          all_compo_names.insert("AID_90_set");

          Instrmt_87.add_element(AID_90);
        }
        {
          xml_element SecXML_90{"SecXML"};
          multiset<string> SecXML_90_set;
          SecXML_90.add_attribute("Schema", "SecurityXMLSchema_t_2021741042"); // 4
          SecXML_90_set.insert("SecurityXMLSchema_t_2021741042");
          all_values.push_back(SecXML_90_set);
          all_compo_names.insert("SecXML_90_set");

          Instrmt_87.add_element(SecXML_90);
        }
        {
          xml_element Evnt_90{"Evnt"};
          multiset<string> Evnt_90_set;
          Evnt_90.add_attribute("EventTyp", "6"); // 4
          Evnt_90_set.insert("6");
          Evnt_90.add_attribute("Dt", "EventDate_t_1292898897"); // 4
          Evnt_90_set.insert("EventDate_t_1292898897");
          Evnt_90.add_attribute("Tm", "EventTime_t_1270087332"); // 4
          Evnt_90_set.insert("EventTime_t_1270087332");
          Evnt_90.add_attribute("Px", "9149645.990000"); // 4
          Evnt_90_set.insert("9149645.990000");
          Evnt_90.add_attribute("Txt", "EventText_t_247524329"); // 4
          Evnt_90_set.insert("EventText_t_247524329");
          all_values.push_back(Evnt_90_set);
          all_compo_names.insert("Evnt_90_set");

          Instrmt_87.add_element(Evnt_90);
        }
        {
          xml_element Pty_440{"Pty"};
          multiset<string> Pty_440_set;
          Pty_440.add_attribute("ID", "InstrumentPartyID_t_479656964"); // 4
          Pty_440_set.insert("InstrumentPartyID_t_479656964");
          Pty_440.add_attribute("Src", "9"); // 4
          Pty_440_set.insert("9");
          Pty_440.add_attribute("R", "10"); // 4
          Pty_440_set.insert("10");
          all_values.push_back(Pty_440_set);
          all_compo_names.insert("Pty_440_set");

          {
            xml_element Sub_440{"Sub"};
            multiset<string> Sub_440_set;
            Sub_440.add_attribute("ID", "InstrumentPartySubID_t_1968440496"); // 5
            Sub_440_set.insert("InstrumentPartySubID_t_1968440496");
            Sub_440.add_attribute("Typ", "33"); // 5
            Sub_440_set.insert("33");
            all_values.push_back(Sub_440_set);
            all_compo_names.insert("Sub_440_set");

            Pty_440.add_element(Sub_440);
          }
          Instrmt_87.add_element(Pty_440);
        }
        {
          xml_element CmplxEvnt_87{"CmplxEvnt"};
          multiset<string> CmplxEvnt_87_set;
          CmplxEvnt_87.add_attribute("Typ", "3"); // 4
          CmplxEvnt_87_set.insert("3");
          CmplxEvnt_87.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_914798121"); // 4
          CmplxEvnt_87_set.insert("ComplexOptPayoutAmount_t_914798121");
          CmplxEvnt_87.add_attribute("Px", "5685560.120000"); // 4
          CmplxEvnt_87_set.insert("5685560.120000");
          CmplxEvnt_87.add_attribute("PxBndryMeth", "5"); // 4
          CmplxEvnt_87_set.insert("5");
          CmplxEvnt_87.add_attribute("PxBndryPrcsn", "11495635.440000"); // 4
          CmplxEvnt_87_set.insert("11495635.440000");
          CmplxEvnt_87.add_attribute("PxTmTyp", "1"); // 4
          CmplxEvnt_87_set.insert("1");
          CmplxEvnt_87.add_attribute("Cond", "2"); // 4
          CmplxEvnt_87_set.insert("2");
          all_values.push_back(CmplxEvnt_87_set);
          all_compo_names.insert("CmplxEvnt_87_set");

          {
            xml_element EvntDts_87{"EvntDts"};
            multiset<string> EvntDts_87_set;
            EvntDts_87.add_attribute("StartDt", "ComplexEventStartDate_t_1833535697"); // 5
            EvntDts_87_set.insert("ComplexEventStartDate_t_1833535697");
            EvntDts_87.add_attribute("EndDt", "ComplexEventEndDate_t_716479153"); // 5
            EvntDts_87_set.insert("ComplexEventEndDate_t_716479153");
            all_values.push_back(EvntDts_87_set);
            all_compo_names.insert("EvntDts_87_set");

            {
              xml_element EvntTms_87{"EvntTms"};
              multiset<string> EvntTms_87_set;
              EvntTms_87.add_attribute("StartTm", "1242199699"); // 6
              EvntTms_87_set.insert("1242199699");
              EvntTms_87.add_attribute("EndTm", "1309223338"); // 6
              EvntTms_87_set.insert("1309223338");
              all_values.push_back(EvntTms_87_set);
              all_compo_names.insert("EvntTms_87_set");

              EvntDts_87.add_element(EvntTms_87);
            }
            CmplxEvnt_87.add_element(EvntDts_87);
          }
          Instrmt_87.add_element(CmplxEvnt_87);
        }
        Instrmts_4.add_element(Instrmt_87);
      }
      Reqs_1.add_element(Instrmts_4);
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
