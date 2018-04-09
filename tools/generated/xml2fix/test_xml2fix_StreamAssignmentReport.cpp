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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"StrmAsgnRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReport_message_t_0;
  elt.add_attribute("RptID", "StreamAsgnRptID_t_1825494599"); // 0
  StreamAssignmentReport_message_t_0.insert("StreamAsgnRptID_t_1825494599");
  elt.add_attribute("AsgnReqTyp", "2"); // 0
  StreamAssignmentReport_message_t_0.insert("2");
  elt.add_attribute("ReqID", "StreamAsgnReqID_t_1859497944"); // 0
  StreamAssignmentReport_message_t_0.insert("StreamAsgnReqID_t_1859497944");
  all_values.push_back(StreamAssignmentReport_message_t_0);
  all_compo_names.insert("StreamAssignmentReport_message_t");

  { // Hdr
    xml_element Hdr_93{"Hdr"};
    multiset<string> Hdr_93_set;
    Hdr_93.add_attribute("SeqNum", "1725131819"); // 1
    Hdr_93_set.insert("1725131819");
    Hdr_93.add_attribute("SID", "SenderCompID_t_1340221853"); // 1
    Hdr_93_set.insert("SenderCompID_t_1340221853");
    Hdr_93.add_attribute("TID", "TargetCompID_t_1467633961"); // 1
    Hdr_93_set.insert("TargetCompID_t_1467633961");
    Hdr_93.add_attribute("OBID", "OnBehalfOfCompID_t_749361045"); // 1
    Hdr_93_set.insert("OnBehalfOfCompID_t_749361045");
    Hdr_93.add_attribute("D2ID", "DeliverToCompID_t_133516373"); // 1
    Hdr_93_set.insert("DeliverToCompID_t_133516373");
    Hdr_93.add_attribute("SSub", "SenderSubID_t_2090737674"); // 1
    Hdr_93_set.insert("SenderSubID_t_2090737674");
    Hdr_93.add_attribute("SLoc", "SenderLocationID_t_285145393"); // 1
    Hdr_93_set.insert("SenderLocationID_t_285145393");
    Hdr_93.add_attribute("TSub", "TargetSubID_t_749691235"); // 1
    Hdr_93_set.insert("TargetSubID_t_749691235");
    Hdr_93.add_attribute("TLoc", "TargetLocationID_t_1880780758"); // 1
    Hdr_93_set.insert("TargetLocationID_t_1880780758");
    Hdr_93.add_attribute("OBSub", "OnBehalfOfSubID_t_1560694444"); // 1
    Hdr_93_set.insert("OnBehalfOfSubID_t_1560694444");
    Hdr_93.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1964062304"); // 1
    Hdr_93_set.insert("OnBehalfOfLocationID_t_1964062304");
    Hdr_93.add_attribute("D2Sub", "DeliverToSubID_t_616465086"); // 1
    Hdr_93_set.insert("DeliverToSubID_t_616465086");
    Hdr_93.add_attribute("D2Loc", "DeliverToLocationID_t_1803934527"); // 1
    Hdr_93_set.insert("DeliverToLocationID_t_1803934527");
    Hdr_93.add_attribute("PosDup", "N"); // 1
    Hdr_93_set.insert("N");
    Hdr_93.add_attribute("PosRsnd", "Y"); // 1
    Hdr_93_set.insert("Y");
    Hdr_93.add_attribute("Snt", "SendingTime_t_343975236"); // 1
    Hdr_93_set.insert("SendingTime_t_343975236");
    Hdr_93.add_attribute("OrigSnt", "OrigSendingTime_t_204398665"); // 1
    Hdr_93_set.insert("OrigSendingTime_t_204398665");
    Hdr_93.add_attribute("MsgEncd", "MessageEncoding_t_1161624923"); // 1
    Hdr_93_set.insert("MessageEncoding_t_1161624923");
    all_values.push_back(Hdr_93_set);
    all_compo_names.insert("Hdr_93_set");

    {
      xml_element Hop_93{"Hop"};
      multiset<string> Hop_93_set;
      Hop_93.add_attribute("ID", "HopCompID_t_522348942"); // 2
      Hop_93_set.insert("HopCompID_t_522348942");
      Hop_93.add_attribute("Ref", "2137689055"); // 2
      Hop_93_set.insert("2137689055");
      Hop_93.add_attribute("Snt", "HopSendingTime_t_391929714"); // 2
      Hop_93_set.insert("HopSendingTime_t_391929714");
      all_values.push_back(Hop_93_set);
      all_compo_names.insert("Hop_93_set");

      Hdr_93.add_element(Hop_93);
    }
    elt.add_element(Hdr_93);
  } // end Hdr
  { // Rpts
    xml_element Rpts_0{"Rpts"};
    {
      xml_element Pty_406{"Pty"};
      multiset<string> Pty_406_set;
      Pty_406.add_attribute("ID", "PartyID_t_2079056747"); // 2
      Pty_406_set.insert("PartyID_t_2079056747");
      Pty_406.add_attribute("Src", "C"); // 2
      Pty_406_set.insert("C");
      Pty_406.add_attribute("R", "56"); // 2
      Pty_406_set.insert("56");
      all_values.push_back(Pty_406_set);
      all_compo_names.insert("Pty_406_set");

      {
        xml_element Sub_406{"Sub"};
        multiset<string> Sub_406_set;
        Sub_406.add_attribute("ID", "PartySubID_t_1862286975"); // 3
        Sub_406_set.insert("PartySubID_t_1862286975");
        Sub_406.add_attribute("Typ", "16"); // 3
        Sub_406_set.insert("16");
        all_values.push_back(Sub_406_set);
        all_compo_names.insert("Sub_406_set");

        Pty_406.add_element(Sub_406);
      }
      Rpts_0.add_element(Pty_406);
    }
    {
      xml_element Instrmts_0{"Instrmts"};
      multiset<string> Instrmts_0_set;
      Instrmts_0.add_attribute("SettlTyp", "C"); // 2
      Instrmts_0_set.insert("C");
      Instrmts_0.add_attribute("AsgnTyp", "2"); // 2
      Instrmts_0_set.insert("2");
      Instrmts_0.add_attribute("MDStrmID", "MDStreamID_t_877019978"); // 2
      Instrmts_0_set.insert("MDStreamID_t_877019978");
      Instrmts_0.add_attribute("RejRsn", "3"); // 2
      Instrmts_0_set.insert("3");
      Instrmts_0.add_attribute("Txt", "Text_t_1117946098"); // 2
      Instrmts_0_set.insert("Text_t_1117946098");
      Instrmts_0.add_attribute("EncTxtLen", "69758184"); // 2
      Instrmts_0_set.insert("69758184");
      Instrmts_0.add_attribute("EncTxt", "EncodedText_t_830603011"); // 2
      Instrmts_0_set.insert("EncodedText_t_830603011");
      all_values.push_back(Instrmts_0_set);
      all_compo_names.insert("Instrmts_0_set");

      {
        xml_element Instrmt_80{"Instrmt"};
        multiset<string> Instrmt_80_set;
        Instrmt_80.add_attribute("Sym", "Symbol_t_1867307143"); // 3
        Instrmt_80_set.insert("Symbol_t_1867307143");
        Instrmt_80.add_attribute("Sfx", "WI"); // 3
        Instrmt_80_set.insert("WI");
        Instrmt_80.add_attribute("ID", "SecurityID_t_773857037"); // 3
        Instrmt_80_set.insert("SecurityID_t_773857037");
        Instrmt_80.add_attribute("Src", "D"); // 3
        Instrmt_80_set.insert("D");
        Instrmt_80.add_attribute("Prod", "9"); // 3
        Instrmt_80_set.insert("9");
        Instrmt_80.add_attribute("ProdCmplx", "ProductComplex_t_507154147"); // 3
        Instrmt_80_set.insert("ProductComplex_t_507154147");
        Instrmt_80.add_attribute("SecGrp", "SecurityGroup_t_1565663332"); // 3
        Instrmt_80_set.insert("SecurityGroup_t_1565663332");
        Instrmt_80.add_attribute("CFI", "CFICode_t_769544448"); // 3
        Instrmt_80_set.insert("CFICode_t_769544448");
        Instrmt_80.add_attribute("SecTyp", "CDS"); // 3
        Instrmt_80_set.insert("CDS");
        Instrmt_80.add_attribute("SubTyp", "SecuritySubType_t_1222114211"); // 3
        Instrmt_80_set.insert("SecuritySubType_t_1222114211");
        Instrmt_80.add_attribute("MMY", "187914805"); // 3
        Instrmt_80_set.insert("187914805");
        Instrmt_80.add_attribute("MatDt", "MaturityDate_t_1559389170"); // 3
        Instrmt_80_set.insert("MaturityDate_t_1559389170");
        Instrmt_80.add_attribute("MatTm", "1566089448"); // 3
        Instrmt_80_set.insert("1566089448");
        Instrmt_80.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_392313470"); // 3
        Instrmt_80_set.insert("SettleOnOpenFlag_t_392313470");
        Instrmt_80.add_attribute("AsgnMeth", "573530445"); // 3
        Instrmt_80_set.insert("573530445");
        Instrmt_80.add_attribute("Status", "1"); // 3
        Instrmt_80_set.insert("1");
        Instrmt_80.add_attribute("CpnPmt", "CouponPaymentDate_t_382518877"); // 3
        Instrmt_80_set.insert("CouponPaymentDate_t_382518877");
        Instrmt_80.add_attribute("RestrctTyp", "FR"); // 3
        Instrmt_80_set.insert("FR");
        Instrmt_80.add_attribute("Snrty", "SR"); // 3
        Instrmt_80_set.insert("SR");
        Instrmt_80.add_attribute("NotlPctOut", "3140919.760000"); // 3
        Instrmt_80_set.insert("3140919.760000");
        Instrmt_80.add_attribute("OrigNotlPctOut", "9407803.510000"); // 3
        Instrmt_80_set.insert("9407803.510000");
        Instrmt_80.add_attribute("AttchPnt", "2416388.380000"); // 3
        Instrmt_80_set.insert("2416388.380000");
        Instrmt_80.add_attribute("DetchPnt", "288953.040000"); // 3
        Instrmt_80_set.insert("288953.040000");
        Instrmt_80.add_attribute("Issued", "IssueDate_t_899608698"); // 3
        Instrmt_80_set.insert("IssueDate_t_899608698");
        Instrmt_80.add_attribute("RepoCollSecTyp", "2040077241"); // 3
        Instrmt_80_set.insert("2040077241");
        Instrmt_80.add_attribute("RepoTrm", "1569193231"); // 3
        Instrmt_80_set.insert("1569193231");
        Instrmt_80.add_attribute("RepoRt", "17766286.770000"); // 3
        Instrmt_80_set.insert("17766286.770000");
        Instrmt_80.add_attribute("Fctr", "14030462.910000"); // 3
        Instrmt_80_set.insert("14030462.910000");
        Instrmt_80.add_attribute("CrdRtg", "CreditRating_t_539655681"); // 3
        Instrmt_80_set.insert("CreditRating_t_539655681");
        Instrmt_80.add_attribute("Rgstry", "InstrRegistry_t_1846386861"); // 3
        Instrmt_80_set.insert("InstrRegistry_t_1846386861");
        Instrmt_80.add_attribute("IssuCtry", "86165655"); // 3
        Instrmt_80_set.insert("86165655");
        Instrmt_80.add_attribute("StPrv", "StateOrProvinceOfIssue_t_259479176"); // 3
        Instrmt_80_set.insert("StateOrProvinceOfIssue_t_259479176");
        Instrmt_80.add_attribute("Lcl", "LocaleOfIssue_t_2049661418"); // 3
        Instrmt_80_set.insert("LocaleOfIssue_t_2049661418");
        Instrmt_80.add_attribute("Redeem", "RedemptionDate_t_860022692"); // 3
        Instrmt_80_set.insert("RedemptionDate_t_860022692");
        Instrmt_80.add_attribute("StrkPx", "2644480.640000"); // 3
        Instrmt_80_set.insert("2644480.640000");
        Instrmt_80.add_attribute("StrkCcy", "JPY"); // 3
        Instrmt_80_set.insert("JPY");
        Instrmt_80.add_attribute("StrkMult", "18301113.970000"); // 3
        Instrmt_80_set.insert("18301113.970000");
        Instrmt_80.add_attribute("StrkValu", "16246880.110000"); // 3
        Instrmt_80_set.insert("16246880.110000");
        Instrmt_80.add_attribute("StrkPxDtrmnMeth", "2"); // 3
        Instrmt_80_set.insert("2");
        Instrmt_80.add_attribute("StrkPxBndryMeth", "1"); // 3
        Instrmt_80_set.insert("1");
        Instrmt_80.add_attribute("StrkPxBndryPrcsn", "18126028.160000"); // 3
        Instrmt_80_set.insert("18126028.160000");
        Instrmt_80.add_attribute("PxDtrmnMeth", "1"); // 3
        Instrmt_80_set.insert("1");
        Instrmt_80.add_attribute("OptAt", "323347760"); // 3
        Instrmt_80_set.insert("323347760");
        Instrmt_80.add_attribute("Mult", "574326.380000"); // 3
        Instrmt_80_set.insert("574326.380000");
        Instrmt_80.add_attribute("MultTyp", "2"); // 3
        Instrmt_80_set.insert("2");
        Instrmt_80.add_attribute("FlowSchedTyp", "3"); // 3
        Instrmt_80_set.insert("3");
        Instrmt_80.add_attribute("MinPxIncr", "4399515.160000"); // 3
        Instrmt_80_set.insert("4399515.160000");
        Instrmt_80.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1294208553"); // 3
        Instrmt_80_set.insert("MinPriceIncrementAmount_t_1294208553");
        Instrmt_80.add_attribute("UOM", "tn"); // 3
        Instrmt_80_set.insert("tn");
        Instrmt_80.add_attribute("UOMQty", "7540434.920000"); // 3
        Instrmt_80_set.insert("7540434.920000");
        Instrmt_80.add_attribute("PxUOM", "oz_tr"); // 3
        Instrmt_80_set.insert("oz_tr");
        Instrmt_80.add_attribute("PxUOMQty", "2028644.870000"); // 3
        Instrmt_80_set.insert("2028644.870000");
        Instrmt_80.add_attribute("SettlMeth", "C"); // 3
        Instrmt_80_set.insert("C");
        Instrmt_80.add_attribute("ExerStyle", "0"); // 3
        Instrmt_80_set.insert("0");
        Instrmt_80.add_attribute("OptPayoutTyp", "1"); // 3
        Instrmt_80_set.insert("1");
        Instrmt_80.add_attribute("OptPayAmt", "OptPayoutAmount_t_204648379"); // 3
        Instrmt_80_set.insert("OptPayoutAmount_t_204648379");
        Instrmt_80.add_attribute("PxQteMeth", "STD"); // 3
        Instrmt_80_set.insert("STD");
        Instrmt_80.add_attribute("ValMeth", "FUT"); // 3
        Instrmt_80_set.insert("FUT");
        Instrmt_80.add_attribute("ListMeth", "0"); // 3
        Instrmt_80_set.insert("0");
        Instrmt_80.add_attribute("CapPx", "3151621.970000"); // 3
        Instrmt_80_set.insert("3151621.970000");
        Instrmt_80.add_attribute("FlrPx", "15846700.260000"); // 3
        Instrmt_80_set.insert("15846700.260000");
        Instrmt_80.add_attribute("PutCall", "0"); // 3
        Instrmt_80_set.insert("0");
        Instrmt_80.add_attribute("FlexInd", "false"); // 3
        Instrmt_80_set.insert("false");
        Instrmt_80.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_80_set.insert("false");
        Instrmt_80.add_attribute("TmUnit", "Min"); // 3
        Instrmt_80_set.insert("Min");
        Instrmt_80.add_attribute("CpnRt", "10724835.300000"); // 3
        Instrmt_80_set.insert("10724835.300000");
        Instrmt_80.add_attribute("Exch", "SecurityExchange_t_1664385911"); // 3
        Instrmt_80_set.insert("SecurityExchange_t_1664385911");
        Instrmt_80.add_attribute("PosLmt", "950859050"); // 3
        Instrmt_80_set.insert("950859050");
        Instrmt_80.add_attribute("NTPosLmt", "549687893"); // 3
        Instrmt_80_set.insert("549687893");
        Instrmt_80.add_attribute("Issr", "Issuer_t_2007698336"); // 3
        Instrmt_80_set.insert("Issuer_t_2007698336");
        Instrmt_80.add_attribute("EncIssrLen", "1855601010"); // 3
        Instrmt_80_set.insert("1855601010");
        Instrmt_80.add_attribute("EncIssr", "EncodedIssuer_t_214807061"); // 3
        Instrmt_80_set.insert("EncodedIssuer_t_214807061");
        Instrmt_80.add_attribute("Desc", "SecurityDesc_t_1762916284"); // 3
        Instrmt_80_set.insert("SecurityDesc_t_1762916284");
        Instrmt_80.add_attribute("EncSecDescLen", "31465123"); // 3
        Instrmt_80_set.insert("31465123");
        Instrmt_80.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_272239699"); // 3
        Instrmt_80_set.insert("EncodedSecurityDesc_t_272239699");
        Instrmt_80.add_attribute("Pool", "Pool_t_2091664678"); // 3
        Instrmt_80_set.insert("Pool_t_2091664678");
        Instrmt_80.add_attribute("CSetMo", "295767626"); // 3
        Instrmt_80_set.insert("295767626");
        Instrmt_80.add_attribute("CPPgm", "99"); // 3
        Instrmt_80_set.insert("99");
        Instrmt_80.add_attribute("CPRegT", "CPRegType_t_1238389583"); // 3
        Instrmt_80_set.insert("CPRegType_t_1238389583");
        Instrmt_80.add_attribute("Dated", "DatedDate_t_256993274"); // 3
        Instrmt_80_set.insert("DatedDate_t_256993274");
        Instrmt_80.add_attribute("IntAcrl", "InterestAccrualDate_t_1466234708"); // 3
        Instrmt_80_set.insert("InterestAccrualDate_t_1466234708");
        all_values.push_back(Instrmt_80_set);
        all_compo_names.insert("Instrmt_80_set");

        {
          xml_element AID_83{"AID"};
          multiset<string> AID_83_set;
          AID_83.add_attribute("AltID", "SecurityAltID_t_1325894840"); // 4
          AID_83_set.insert("SecurityAltID_t_1325894840");
          AID_83.add_attribute("AltIDSrc", "C"); // 4
          AID_83_set.insert("C");
          all_values.push_back(AID_83_set);
          all_compo_names.insert("AID_83_set");

          Instrmt_80.add_element(AID_83);
        }
        {
          xml_element SecXML_83{"SecXML"};
          multiset<string> SecXML_83_set;
          SecXML_83.add_attribute("Schema", "SecurityXMLSchema_t_101689856"); // 4
          SecXML_83_set.insert("SecurityXMLSchema_t_101689856");
          all_values.push_back(SecXML_83_set);
          all_compo_names.insert("SecXML_83_set");

          Instrmt_80.add_element(SecXML_83);
        }
        {
          xml_element Evnt_83{"Evnt"};
          multiset<string> Evnt_83_set;
          Evnt_83.add_attribute("EventTyp", "8"); // 4
          Evnt_83_set.insert("8");
          Evnt_83.add_attribute("Dt", "EventDate_t_555315841"); // 4
          Evnt_83_set.insert("EventDate_t_555315841");
          Evnt_83.add_attribute("Tm", "EventTime_t_306338236"); // 4
          Evnt_83_set.insert("EventTime_t_306338236");
          Evnt_83.add_attribute("Px", "7817841.320000"); // 4
          Evnt_83_set.insert("7817841.320000");
          Evnt_83.add_attribute("Txt", "EventText_t_2053820213"); // 4
          Evnt_83_set.insert("EventText_t_2053820213");
          all_values.push_back(Evnt_83_set);
          all_compo_names.insert("Evnt_83_set");

          Instrmt_80.add_element(Evnt_83);
        }
        {
          xml_element Pty_407{"Pty"};
          multiset<string> Pty_407_set;
          Pty_407.add_attribute("ID", "InstrumentPartyID_t_1050642296"); // 4
          Pty_407_set.insert("InstrumentPartyID_t_1050642296");
          Pty_407.add_attribute("Src", "F"); // 4
          Pty_407_set.insert("F");
          Pty_407.add_attribute("R", "42"); // 4
          Pty_407_set.insert("42");
          all_values.push_back(Pty_407_set);
          all_compo_names.insert("Pty_407_set");

          {
            xml_element Sub_407{"Sub"};
            multiset<string> Sub_407_set;
            Sub_407.add_attribute("ID", "InstrumentPartySubID_t_2054425533"); // 5
            Sub_407_set.insert("InstrumentPartySubID_t_2054425533");
            Sub_407.add_attribute("Typ", "24"); // 5
            Sub_407_set.insert("24");
            all_values.push_back(Sub_407_set);
            all_compo_names.insert("Sub_407_set");

            Pty_407.add_element(Sub_407);
          }
          Instrmt_80.add_element(Pty_407);
        }
        {
          xml_element CmplxEvnt_80{"CmplxEvnt"};
          multiset<string> CmplxEvnt_80_set;
          CmplxEvnt_80.add_attribute("Typ", "2"); // 4
          CmplxEvnt_80_set.insert("2");
          CmplxEvnt_80.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1175173186"); // 4
          CmplxEvnt_80_set.insert("ComplexOptPayoutAmount_t_1175173186");
          CmplxEvnt_80.add_attribute("Px", "2392861.790000"); // 4
          CmplxEvnt_80_set.insert("2392861.790000");
          CmplxEvnt_80.add_attribute("PxBndryMeth", "1"); // 4
          CmplxEvnt_80_set.insert("1");
          CmplxEvnt_80.add_attribute("PxBndryPrcsn", "21260322.360000"); // 4
          CmplxEvnt_80_set.insert("21260322.360000");
          CmplxEvnt_80.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_80_set.insert("2");
          CmplxEvnt_80.add_attribute("Cond", "1"); // 4
          CmplxEvnt_80_set.insert("1");
          all_values.push_back(CmplxEvnt_80_set);
          all_compo_names.insert("CmplxEvnt_80_set");

          {
            xml_element EvntDts_80{"EvntDts"};
            multiset<string> EvntDts_80_set;
            EvntDts_80.add_attribute("StartDt", "ComplexEventStartDate_t_1834149598"); // 5
            EvntDts_80_set.insert("ComplexEventStartDate_t_1834149598");
            EvntDts_80.add_attribute("EndDt", "ComplexEventEndDate_t_1003781133"); // 5
            EvntDts_80_set.insert("ComplexEventEndDate_t_1003781133");
            all_values.push_back(EvntDts_80_set);
            all_compo_names.insert("EvntDts_80_set");

            {
              xml_element EvntTms_80{"EvntTms"};
              multiset<string> EvntTms_80_set;
              EvntTms_80.add_attribute("StartTm", "780765250"); // 6
              EvntTms_80_set.insert("780765250");
              EvntTms_80.add_attribute("EndTm", "1865614721"); // 6
              EvntTms_80_set.insert("1865614721");
              all_values.push_back(EvntTms_80_set);
              all_compo_names.insert("EvntTms_80_set");

              EvntDts_80.add_element(EvntTms_80);
            }
            CmplxEvnt_80.add_element(EvntDts_80);
          }
          Instrmt_80.add_element(CmplxEvnt_80);
        }
        Instrmts_0.add_element(Instrmt_80);
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
