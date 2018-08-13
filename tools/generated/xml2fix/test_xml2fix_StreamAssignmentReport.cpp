#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/StreamAssignmentReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"StrmAsgnRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReport_message_t_0;
  elt.add_attribute("RptID", "StreamAsgnRptID_t_254545481"); // 0
  StreamAssignmentReport_message_t_0.insert("StreamAsgnRptID_t_254545481");
  elt.add_attribute("AsgnReqTyp", "1"); // 0
  StreamAssignmentReport_message_t_0.insert("1");
  elt.add_attribute("ReqID", "StreamAsgnReqID_t_20804601"); // 0
  StreamAssignmentReport_message_t_0.insert("StreamAsgnReqID_t_20804601");
  all_values.push_back(StreamAssignmentReport_message_t_0);
  all_compo_names.insert("StreamAssignmentReport_message_t");

  { // Hdr
    xml_element Hdr_93{"Hdr"};
    multiset<string> Hdr_93_set;
    Hdr_93.add_attribute("SeqNum", "1969341066"); // 1
    Hdr_93_set.insert("1969341066");
    Hdr_93.add_attribute("SID", "SenderCompID_t_1237393790"); // 1
    Hdr_93_set.insert("SenderCompID_t_1237393790");
    Hdr_93.add_attribute("TID", "TargetCompID_t_1345041210"); // 1
    Hdr_93_set.insert("TargetCompID_t_1345041210");
    Hdr_93.add_attribute("OBID", "OnBehalfOfCompID_t_1002014409"); // 1
    Hdr_93_set.insert("OnBehalfOfCompID_t_1002014409");
    Hdr_93.add_attribute("D2ID", "DeliverToCompID_t_1592332295"); // 1
    Hdr_93_set.insert("DeliverToCompID_t_1592332295");
    Hdr_93.add_attribute("SSub", "SenderSubID_t_447038782"); // 1
    Hdr_93_set.insert("SenderSubID_t_447038782");
    Hdr_93.add_attribute("SLoc", "SenderLocationID_t_967043964"); // 1
    Hdr_93_set.insert("SenderLocationID_t_967043964");
    Hdr_93.add_attribute("TSub", "TargetSubID_t_739264780"); // 1
    Hdr_93_set.insert("TargetSubID_t_739264780");
    Hdr_93.add_attribute("TLoc", "TargetLocationID_t_800336159"); // 1
    Hdr_93_set.insert("TargetLocationID_t_800336159");
    Hdr_93.add_attribute("OBSub", "OnBehalfOfSubID_t_620951062"); // 1
    Hdr_93_set.insert("OnBehalfOfSubID_t_620951062");
    Hdr_93.add_attribute("OBLoc", "OnBehalfOfLocationID_t_420036635"); // 1
    Hdr_93_set.insert("OnBehalfOfLocationID_t_420036635");
    Hdr_93.add_attribute("D2Sub", "DeliverToSubID_t_249764291"); // 1
    Hdr_93_set.insert("DeliverToSubID_t_249764291");
    Hdr_93.add_attribute("D2Loc", "DeliverToLocationID_t_2001891604"); // 1
    Hdr_93_set.insert("DeliverToLocationID_t_2001891604");
    Hdr_93.add_attribute("PosDup", "Y"); // 1
    Hdr_93_set.insert("Y");
    Hdr_93.add_attribute("PosRsnd", "Y"); // 1
    Hdr_93_set.insert("Y");
    Hdr_93.add_attribute("Snt", "SendingTime_t_1726873507"); // 1
    Hdr_93_set.insert("SendingTime_t_1726873507");
    Hdr_93.add_attribute("OrigSnt", "OrigSendingTime_t_1425057187"); // 1
    Hdr_93_set.insert("OrigSendingTime_t_1425057187");
    Hdr_93.add_attribute("MsgEncd", "MessageEncoding_t_2135648274"); // 1
    Hdr_93_set.insert("MessageEncoding_t_2135648274");
    all_values.push_back(Hdr_93_set);
    all_compo_names.insert("Hdr_93_set");

    {
      xml_element Hop_93{"Hop"};
      multiset<string> Hop_93_set;
      Hop_93.add_attribute("ID", "HopCompID_t_1218971391"); // 2
      Hop_93_set.insert("HopCompID_t_1218971391");
      Hop_93.add_attribute("Ref", "421806689"); // 2
      Hop_93_set.insert("421806689");
      Hop_93.add_attribute("Snt", "HopSendingTime_t_1265535838"); // 2
      Hop_93_set.insert("HopSendingTime_t_1265535838");
      all_values.push_back(Hop_93_set);
      all_compo_names.insert("Hop_93_set");

      Hdr_93.add_element(Hop_93);
    }
    elt.add_element(Hdr_93);
  } // end Hdr
  { // Rpts
    xml_element Rpts_0{"Rpts"};
    {
      xml_element Pty_427{"Pty"};
      multiset<string> Pty_427_set;
      Pty_427.add_attribute("ID", "PartyID_t_1694963320"); // 2
      Pty_427_set.insert("PartyID_t_1694963320");
      Pty_427.add_attribute("Src", "3"); // 2
      Pty_427_set.insert("3");
      Pty_427.add_attribute("R", "4"); // 2
      Pty_427_set.insert("4");
      all_values.push_back(Pty_427_set);
      all_compo_names.insert("Pty_427_set");

      {
        xml_element Sub_427{"Sub"};
        multiset<string> Sub_427_set;
        Sub_427.add_attribute("ID", "PartySubID_t_246416979"); // 3
        Sub_427_set.insert("PartySubID_t_246416979");
        Sub_427.add_attribute("Typ", "29"); // 3
        Sub_427_set.insert("29");
        all_values.push_back(Sub_427_set);
        all_compo_names.insert("Sub_427_set");

        Pty_427.add_element(Sub_427);
      }
      Rpts_0.add_element(Pty_427);
    }
    {
      xml_element Instrmts_0{"Instrmts"};
      multiset<string> Instrmts_0_set;
      Instrmts_0.add_attribute("SettlTyp", "1"); // 2
      Instrmts_0_set.insert("1");
      Instrmts_0.add_attribute("AsgnTyp", "3"); // 2
      Instrmts_0_set.insert("3");
      Instrmts_0.add_attribute("MDStrmID", "MDStreamID_t_409266772"); // 2
      Instrmts_0_set.insert("MDStreamID_t_409266772");
      Instrmts_0.add_attribute("RejRsn", "2"); // 2
      Instrmts_0_set.insert("2");
      Instrmts_0.add_attribute("Txt", "Text_t_322819878"); // 2
      Instrmts_0_set.insert("Text_t_322819878");
      Instrmts_0.add_attribute("EncTxtLen", "1646660562"); // 2
      Instrmts_0_set.insert("1646660562");
      Instrmts_0.add_attribute("EncTxt", "EncodedText_t_264443864"); // 2
      Instrmts_0_set.insert("EncodedText_t_264443864");
      all_values.push_back(Instrmts_0_set);
      all_compo_names.insert("Instrmts_0_set");

      {
        xml_element Instrmt_83{"Instrmt"};
        multiset<string> Instrmt_83_set;
        Instrmt_83.add_attribute("Sym", "Symbol_t_1324834288"); // 3
        Instrmt_83_set.insert("Symbol_t_1324834288");
        Instrmt_83.add_attribute("Sfx", "CD"); // 3
        Instrmt_83_set.insert("CD");
        Instrmt_83.add_attribute("ID", "SecurityID_t_711482646"); // 3
        Instrmt_83_set.insert("SecurityID_t_711482646");
        Instrmt_83.add_attribute("Src", "3"); // 3
        Instrmt_83_set.insert("3");
        Instrmt_83.add_attribute("Prod", "3"); // 3
        Instrmt_83_set.insert("3");
        Instrmt_83.add_attribute("ProdCmplx", "ProductComplex_t_1511818806"); // 3
        Instrmt_83_set.insert("ProductComplex_t_1511818806");
        Instrmt_83.add_attribute("SecGrp", "SecurityGroup_t_765345666"); // 3
        Instrmt_83_set.insert("SecurityGroup_t_765345666");
        Instrmt_83.add_attribute("CFI", "CFICode_t_103326977"); // 3
        Instrmt_83_set.insert("CFICode_t_103326977");
        Instrmt_83.add_attribute("SecTyp", "LQN"); // 3
        Instrmt_83_set.insert("LQN");
        Instrmt_83.add_attribute("SubTyp", "SecuritySubType_t_619753622"); // 3
        Instrmt_83_set.insert("SecuritySubType_t_619753622");
        Instrmt_83.add_attribute("MMY", "306021028"); // 3
        Instrmt_83_set.insert("306021028");
        Instrmt_83.add_attribute("MatDt", "MaturityDate_t_1702508422"); // 3
        Instrmt_83_set.insert("MaturityDate_t_1702508422");
        Instrmt_83.add_attribute("MatTm", "199143481"); // 3
        Instrmt_83_set.insert("199143481");
        Instrmt_83.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1731078216"); // 3
        Instrmt_83_set.insert("SettleOnOpenFlag_t_1731078216");
        Instrmt_83.add_attribute("AsgnMeth", "1690673049"); // 3
        Instrmt_83_set.insert("1690673049");
        Instrmt_83.add_attribute("Status", "1"); // 3
        Instrmt_83_set.insert("1");
        Instrmt_83.add_attribute("CpnPmt", "CouponPaymentDate_t_5401257"); // 3
        Instrmt_83_set.insert("CouponPaymentDate_t_5401257");
        Instrmt_83.add_attribute("RestrctTyp", "XR"); // 3
        Instrmt_83_set.insert("XR");
        Instrmt_83.add_attribute("Snrty", "SD"); // 3
        Instrmt_83_set.insert("SD");
        Instrmt_83.add_attribute("NotlPctOut", "17003645.770000"); // 3
        Instrmt_83_set.insert("17003645.770000");
        Instrmt_83.add_attribute("OrigNotlPctOut", "4840468.010000"); // 3
        Instrmt_83_set.insert("4840468.010000");
        Instrmt_83.add_attribute("AttchPnt", "9669845.200000"); // 3
        Instrmt_83_set.insert("9669845.200000");
        Instrmt_83.add_attribute("DetchPnt", "19467815.560000"); // 3
        Instrmt_83_set.insert("19467815.560000");
        Instrmt_83.add_attribute("Issued", "IssueDate_t_598645995"); // 3
        Instrmt_83_set.insert("IssueDate_t_598645995");
        Instrmt_83.add_attribute("RepoCollSecTyp", "2013066221"); // 3
        Instrmt_83_set.insert("2013066221");
        Instrmt_83.add_attribute("RepoTrm", "300260368"); // 3
        Instrmt_83_set.insert("300260368");
        Instrmt_83.add_attribute("RepoRt", "10079127.670000"); // 3
        Instrmt_83_set.insert("10079127.670000");
        Instrmt_83.add_attribute("Fctr", "9324688.760000"); // 3
        Instrmt_83_set.insert("9324688.760000");
        Instrmt_83.add_attribute("CrdRtg", "CreditRating_t_623080247"); // 3
        Instrmt_83_set.insert("CreditRating_t_623080247");
        Instrmt_83.add_attribute("Rgstry", "InstrRegistry_t_507089682"); // 3
        Instrmt_83_set.insert("InstrRegistry_t_507089682");
        Instrmt_83.add_attribute("IssuCtry", "1196912740"); // 3
        Instrmt_83_set.insert("1196912740");
        Instrmt_83.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1947914535"); // 3
        Instrmt_83_set.insert("StateOrProvinceOfIssue_t_1947914535");
        Instrmt_83.add_attribute("Lcl", "LocaleOfIssue_t_1598598892"); // 3
        Instrmt_83_set.insert("LocaleOfIssue_t_1598598892");
        Instrmt_83.add_attribute("Redeem", "RedemptionDate_t_1908395387"); // 3
        Instrmt_83_set.insert("RedemptionDate_t_1908395387");
        Instrmt_83.add_attribute("StrkPx", "20923091.390000"); // 3
        Instrmt_83_set.insert("20923091.390000");
        Instrmt_83.add_attribute("StrkCcy", "CHF"); // 3
        Instrmt_83_set.insert("CHF");
        Instrmt_83.add_attribute("StrkMult", "7101711.580000"); // 3
        Instrmt_83_set.insert("7101711.580000");
        Instrmt_83.add_attribute("StrkValu", "13852162.110000"); // 3
        Instrmt_83_set.insert("13852162.110000");
        Instrmt_83.add_attribute("StrkPxDtrmnMeth", "3"); // 3
        Instrmt_83_set.insert("3");
        Instrmt_83.add_attribute("StrkPxBndryMeth", "1"); // 3
        Instrmt_83_set.insert("1");
        Instrmt_83.add_attribute("StrkPxBndryPrcsn", "16912372.400000"); // 3
        Instrmt_83_set.insert("16912372.400000");
        Instrmt_83.add_attribute("PxDtrmnMeth", "2"); // 3
        Instrmt_83_set.insert("2");
        Instrmt_83.add_attribute("OptAt", "1529068262"); // 3
        Instrmt_83_set.insert("1529068262");
        Instrmt_83.add_attribute("Mult", "12748318.080000"); // 3
        Instrmt_83_set.insert("12748318.080000");
        Instrmt_83.add_attribute("MultTyp", "0"); // 3
        Instrmt_83_set.insert("0");
        Instrmt_83.add_attribute("FlowSchedTyp", "1"); // 3
        Instrmt_83_set.insert("1");
        Instrmt_83.add_attribute("MinPxIncr", "12802330.650000"); // 3
        Instrmt_83_set.insert("12802330.650000");
        Instrmt_83.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_793769409"); // 3
        Instrmt_83_set.insert("MinPriceIncrementAmount_t_793769409");
        Instrmt_83.add_attribute("UOM", "t"); // 3
        Instrmt_83_set.insert("t");
        Instrmt_83.add_attribute("UOMQty", "8331139.940000"); // 3
        Instrmt_83_set.insert("8331139.940000");
        Instrmt_83.add_attribute("PxUOM", "USD"); // 3
        Instrmt_83_set.insert("USD");
        Instrmt_83.add_attribute("PxUOMQty", "5091322.350000"); // 3
        Instrmt_83_set.insert("5091322.350000");
        Instrmt_83.add_attribute("SettlMeth", "P"); // 3
        Instrmt_83_set.insert("P");
        Instrmt_83.add_attribute("ExerStyle", "0"); // 3
        Instrmt_83_set.insert("0");
        Instrmt_83.add_attribute("OptPayoutTyp", "2"); // 3
        Instrmt_83_set.insert("2");
        Instrmt_83.add_attribute("OptPayAmt", "OptPayoutAmount_t_932672271"); // 3
        Instrmt_83_set.insert("OptPayoutAmount_t_932672271");
        Instrmt_83.add_attribute("PxQteMeth", "INT"); // 3
        Instrmt_83_set.insert("INT");
        Instrmt_83.add_attribute("ValMeth", "EQTY"); // 3
        Instrmt_83_set.insert("EQTY");
        Instrmt_83.add_attribute("ListMeth", "0"); // 3
        Instrmt_83_set.insert("0");
        Instrmt_83.add_attribute("CapPx", "12439810.080000"); // 3
        Instrmt_83_set.insert("12439810.080000");
        Instrmt_83.add_attribute("FlrPx", "3566127.770000"); // 3
        Instrmt_83_set.insert("3566127.770000");
        Instrmt_83.add_attribute("PutCall", "1"); // 3
        Instrmt_83_set.insert("1");
        Instrmt_83.add_attribute("FlexInd", "true"); // 3
        Instrmt_83_set.insert("true");
        Instrmt_83.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_83_set.insert("true");
        Instrmt_83.add_attribute("TmUnit", "Yr"); // 3
        Instrmt_83_set.insert("Yr");
        Instrmt_83.add_attribute("CpnRt", "19769854.860000"); // 3
        Instrmt_83_set.insert("19769854.860000");
        Instrmt_83.add_attribute("Exch", "SecurityExchange_t_1390255061"); // 3
        Instrmt_83_set.insert("SecurityExchange_t_1390255061");
        Instrmt_83.add_attribute("PosLmt", "2011180055"); // 3
        Instrmt_83_set.insert("2011180055");
        Instrmt_83.add_attribute("NTPosLmt", "1214718049"); // 3
        Instrmt_83_set.insert("1214718049");
        Instrmt_83.add_attribute("Issr", "Issuer_t_129601408"); // 3
        Instrmt_83_set.insert("Issuer_t_129601408");
        Instrmt_83.add_attribute("EncIssrLen", "1193621187"); // 3
        Instrmt_83_set.insert("1193621187");
        Instrmt_83.add_attribute("EncIssr", "EncodedIssuer_t_758471641"); // 3
        Instrmt_83_set.insert("EncodedIssuer_t_758471641");
        Instrmt_83.add_attribute("Desc", "SecurityDesc_t_571456177"); // 3
        Instrmt_83_set.insert("SecurityDesc_t_571456177");
        Instrmt_83.add_attribute("EncSecDescLen", "575205801"); // 3
        Instrmt_83_set.insert("575205801");
        Instrmt_83.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2033303449"); // 3
        Instrmt_83_set.insert("EncodedSecurityDesc_t_2033303449");
        Instrmt_83.add_attribute("Pool", "Pool_t_556500347"); // 3
        Instrmt_83_set.insert("Pool_t_556500347");
        Instrmt_83.add_attribute("CSetMo", "1374905288"); // 3
        Instrmt_83_set.insert("1374905288");
        Instrmt_83.add_attribute("CPPgm", "99"); // 3
        Instrmt_83_set.insert("99");
        Instrmt_83.add_attribute("CPRegT", "CPRegType_t_1350269756"); // 3
        Instrmt_83_set.insert("CPRegType_t_1350269756");
        Instrmt_83.add_attribute("Dated", "DatedDate_t_917053003"); // 3
        Instrmt_83_set.insert("DatedDate_t_917053003");
        Instrmt_83.add_attribute("IntAcrl", "InterestAccrualDate_t_1999166861"); // 3
        Instrmt_83_set.insert("InterestAccrualDate_t_1999166861");
        all_values.push_back(Instrmt_83_set);
        all_compo_names.insert("Instrmt_83_set");

        {
          xml_element AID_86{"AID"};
          multiset<string> AID_86_set;
          AID_86.add_attribute("AltID", "SecurityAltID_t_480602319"); // 4
          AID_86_set.insert("SecurityAltID_t_480602319");
          AID_86.add_attribute("AltIDSrc", "I"); // 4
          AID_86_set.insert("I");
          all_values.push_back(AID_86_set);
          all_compo_names.insert("AID_86_set");

          Instrmt_83.add_element(AID_86);
        }
        {
          xml_element SecXML_86{"SecXML"};
          multiset<string> SecXML_86_set;
          SecXML_86.add_attribute("Schema", "SecurityXMLSchema_t_484095116"); // 4
          SecXML_86_set.insert("SecurityXMLSchema_t_484095116");
          all_values.push_back(SecXML_86_set);
          all_compo_names.insert("SecXML_86_set");

          Instrmt_83.add_element(SecXML_86);
        }
        {
          xml_element Evnt_86{"Evnt"};
          multiset<string> Evnt_86_set;
          Evnt_86.add_attribute("EventTyp", "18"); // 4
          Evnt_86_set.insert("18");
          Evnt_86.add_attribute("Dt", "EventDate_t_1800900048"); // 4
          Evnt_86_set.insert("EventDate_t_1800900048");
          Evnt_86.add_attribute("Tm", "EventTime_t_1416767387"); // 4
          Evnt_86_set.insert("EventTime_t_1416767387");
          Evnt_86.add_attribute("Px", "9464722.040000"); // 4
          Evnt_86_set.insert("9464722.040000");
          Evnt_86.add_attribute("Txt", "EventText_t_960600085"); // 4
          Evnt_86_set.insert("EventText_t_960600085");
          all_values.push_back(Evnt_86_set);
          all_compo_names.insert("Evnt_86_set");

          Instrmt_83.add_element(Evnt_86);
        }
        {
          xml_element Pty_428{"Pty"};
          multiset<string> Pty_428_set;
          Pty_428.add_attribute("ID", "InstrumentPartyID_t_825036258"); // 4
          Pty_428_set.insert("InstrumentPartyID_t_825036258");
          Pty_428.add_attribute("Src", "1"); // 4
          Pty_428_set.insert("1");
          Pty_428.add_attribute("R", "45"); // 4
          Pty_428_set.insert("45");
          all_values.push_back(Pty_428_set);
          all_compo_names.insert("Pty_428_set");

          {
            xml_element Sub_428{"Sub"};
            multiset<string> Sub_428_set;
            Sub_428.add_attribute("ID", "InstrumentPartySubID_t_33736015"); // 5
            Sub_428_set.insert("InstrumentPartySubID_t_33736015");
            Sub_428.add_attribute("Typ", "27"); // 5
            Sub_428_set.insert("27");
            all_values.push_back(Sub_428_set);
            all_compo_names.insert("Sub_428_set");

            Pty_428.add_element(Sub_428);
          }
          Instrmt_83.add_element(Pty_428);
        }
        {
          xml_element CmplxEvnt_83{"CmplxEvnt"};
          multiset<string> CmplxEvnt_83_set;
          CmplxEvnt_83.add_attribute("Typ", "4"); // 4
          CmplxEvnt_83_set.insert("4");
          CmplxEvnt_83.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1334744912"); // 4
          CmplxEvnt_83_set.insert("ComplexOptPayoutAmount_t_1334744912");
          CmplxEvnt_83.add_attribute("Px", "5675676.540000"); // 4
          CmplxEvnt_83_set.insert("5675676.540000");
          CmplxEvnt_83.add_attribute("PxBndryMeth", "3"); // 4
          CmplxEvnt_83_set.insert("3");
          CmplxEvnt_83.add_attribute("PxBndryPrcsn", "11984413.190000"); // 4
          CmplxEvnt_83_set.insert("11984413.190000");
          CmplxEvnt_83.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_83_set.insert("2");
          CmplxEvnt_83.add_attribute("Cond", "1"); // 4
          CmplxEvnt_83_set.insert("1");
          all_values.push_back(CmplxEvnt_83_set);
          all_compo_names.insert("CmplxEvnt_83_set");

          {
            xml_element EvntDts_83{"EvntDts"};
            multiset<string> EvntDts_83_set;
            EvntDts_83.add_attribute("StartDt", "ComplexEventStartDate_t_244578859"); // 5
            EvntDts_83_set.insert("ComplexEventStartDate_t_244578859");
            EvntDts_83.add_attribute("EndDt", "ComplexEventEndDate_t_393273697"); // 5
            EvntDts_83_set.insert("ComplexEventEndDate_t_393273697");
            all_values.push_back(EvntDts_83_set);
            all_compo_names.insert("EvntDts_83_set");

            {
              xml_element EvntTms_83{"EvntTms"};
              multiset<string> EvntTms_83_set;
              EvntTms_83.add_attribute("StartTm", "1378566377"); // 6
              EvntTms_83_set.insert("1378566377");
              EvntTms_83.add_attribute("EndTm", "819784660"); // 6
              EvntTms_83_set.insert("819784660");
              all_values.push_back(EvntTms_83_set);
              all_compo_names.insert("EvntTms_83_set");

              EvntDts_83.add_element(EvntTms_83);
            }
            CmplxEvnt_83.add_element(EvntDts_83);
          }
          Instrmt_83.add_element(CmplxEvnt_83);
        }
        Instrmts_0.add_element(Instrmt_83);
      }
      Rpts_0.add_element(Instrmts_0);
    }
    elt.add_element(Rpts_0);
  } // end Rpts
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
