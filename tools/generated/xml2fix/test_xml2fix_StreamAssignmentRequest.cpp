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
  elt.add_attribute("ReqID", "StreamAsgnReqID_t_1365479459"); // 0
  StreamAssignmentRequest_message_t_0.insert("StreamAsgnReqID_t_1365479459");
  elt.add_attribute("AsgnReqTyp", "1"); // 0
  StreamAssignmentRequest_message_t_0.insert("1");
  all_values.push_back(StreamAssignmentRequest_message_t_0);
  all_compo_names.insert("StreamAssignmentRequest_message_t");

  { // Hdr
    xml_element Hdr_95{"Hdr"};
    multiset<string> Hdr_95_set;
    Hdr_95.add_attribute("SeqNum", "1280389242"); // 1
    Hdr_95_set.insert("1280389242");
    Hdr_95.add_attribute("SID", "SenderCompID_t_1083610532"); // 1
    Hdr_95_set.insert("SenderCompID_t_1083610532");
    Hdr_95.add_attribute("TID", "TargetCompID_t_1365900239"); // 1
    Hdr_95_set.insert("TargetCompID_t_1365900239");
    Hdr_95.add_attribute("OBID", "OnBehalfOfCompID_t_2005335522"); // 1
    Hdr_95_set.insert("OnBehalfOfCompID_t_2005335522");
    Hdr_95.add_attribute("D2ID", "DeliverToCompID_t_1097509232"); // 1
    Hdr_95_set.insert("DeliverToCompID_t_1097509232");
    Hdr_95.add_attribute("SSub", "SenderSubID_t_1206628639"); // 1
    Hdr_95_set.insert("SenderSubID_t_1206628639");
    Hdr_95.add_attribute("SLoc", "SenderLocationID_t_1821187738"); // 1
    Hdr_95_set.insert("SenderLocationID_t_1821187738");
    Hdr_95.add_attribute("TSub", "TargetSubID_t_1368401206"); // 1
    Hdr_95_set.insert("TargetSubID_t_1368401206");
    Hdr_95.add_attribute("TLoc", "TargetLocationID_t_366108100"); // 1
    Hdr_95_set.insert("TargetLocationID_t_366108100");
    Hdr_95.add_attribute("OBSub", "OnBehalfOfSubID_t_815451147"); // 1
    Hdr_95_set.insert("OnBehalfOfSubID_t_815451147");
    Hdr_95.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2099150941"); // 1
    Hdr_95_set.insert("OnBehalfOfLocationID_t_2099150941");
    Hdr_95.add_attribute("D2Sub", "DeliverToSubID_t_1774761065"); // 1
    Hdr_95_set.insert("DeliverToSubID_t_1774761065");
    Hdr_95.add_attribute("D2Loc", "DeliverToLocationID_t_2122723351"); // 1
    Hdr_95_set.insert("DeliverToLocationID_t_2122723351");
    Hdr_95.add_attribute("PosDup", "N"); // 1
    Hdr_95_set.insert("N");
    Hdr_95.add_attribute("PosRsnd", "N"); // 1
    Hdr_95_set.insert("N");
    Hdr_95.add_attribute("Snt", "SendingTime_t_2064296040"); // 1
    Hdr_95_set.insert("SendingTime_t_2064296040");
    Hdr_95.add_attribute("OrigSnt", "OrigSendingTime_t_282651364"); // 1
    Hdr_95_set.insert("OrigSendingTime_t_282651364");
    Hdr_95.add_attribute("MsgEncd", "MessageEncoding_t_1960418467"); // 1
    Hdr_95_set.insert("MessageEncoding_t_1960418467");
    all_values.push_back(Hdr_95_set);
    all_compo_names.insert("Hdr_95_set");

    {
      xml_element Hop_95{"Hop"};
      multiset<string> Hop_95_set;
      Hop_95.add_attribute("ID", "HopCompID_t_955331411"); // 2
      Hop_95_set.insert("HopCompID_t_955331411");
      Hop_95.add_attribute("Ref", "818576450"); // 2
      Hop_95_set.insert("818576450");
      Hop_95.add_attribute("Snt", "HopSendingTime_t_338026554"); // 2
      Hop_95_set.insert("HopSendingTime_t_338026554");
      all_values.push_back(Hop_95_set);
      all_compo_names.insert("Hop_95_set");

      Hdr_95.add_element(Hop_95);
    }
    elt.add_element(Hdr_95);
  } // end Hdr
  { // Reqs
    xml_element Reqs_0{"Reqs"};
    {
      xml_element Pty_408{"Pty"};
      multiset<string> Pty_408_set;
      Pty_408.add_attribute("ID", "PartyID_t_995233550"); // 2
      Pty_408_set.insert("PartyID_t_995233550");
      Pty_408.add_attribute("Src", "5"); // 2
      Pty_408_set.insert("5");
      Pty_408.add_attribute("R", "20"); // 2
      Pty_408_set.insert("20");
      all_values.push_back(Pty_408_set);
      all_compo_names.insert("Pty_408_set");

      {
        xml_element Sub_408{"Sub"};
        multiset<string> Sub_408_set;
        Sub_408.add_attribute("ID", "PartySubID_t_329524927"); // 3
        Sub_408_set.insert("PartySubID_t_329524927");
        Sub_408.add_attribute("Typ", "30"); // 3
        Sub_408_set.insert("30");
        all_values.push_back(Sub_408_set);
        all_compo_names.insert("Sub_408_set");

        Pty_408.add_element(Sub_408);
      }
      Reqs_0.add_element(Pty_408);
    }
    {
      xml_element Instrmts_1{"Instrmts"};
      multiset<string> Instrmts_1_set;
      Instrmts_1.add_attribute("SettlTyp", "8"); // 2
      Instrmts_1_set.insert("8");
      Instrmts_1.add_attribute("Sz", "8291489.190000"); // 2
      Instrmts_1_set.insert("8291489.190000");
      Instrmts_1.add_attribute("MDStrmID", "MDStreamID_t_787617146"); // 2
      Instrmts_1_set.insert("MDStreamID_t_787617146");
      all_values.push_back(Instrmts_1_set);
      all_compo_names.insert("Instrmts_1_set");

      {
        xml_element Instrmt_81{"Instrmt"};
        multiset<string> Instrmt_81_set;
        Instrmt_81.add_attribute("Sym", "Symbol_t_781238606"); // 3
        Instrmt_81_set.insert("Symbol_t_781238606");
        Instrmt_81.add_attribute("Sfx", "WI"); // 3
        Instrmt_81_set.insert("WI");
        Instrmt_81.add_attribute("ID", "SecurityID_t_1871227678"); // 3
        Instrmt_81_set.insert("SecurityID_t_1871227678");
        Instrmt_81.add_attribute("Src", "6"); // 3
        Instrmt_81_set.insert("6");
        Instrmt_81.add_attribute("Prod", "1"); // 3
        Instrmt_81_set.insert("1");
        Instrmt_81.add_attribute("ProdCmplx", "ProductComplex_t_821253262"); // 3
        Instrmt_81_set.insert("ProductComplex_t_821253262");
        Instrmt_81.add_attribute("SecGrp", "SecurityGroup_t_1206283837"); // 3
        Instrmt_81_set.insert("SecurityGroup_t_1206283837");
        Instrmt_81.add_attribute("CFI", "CFICode_t_1641094126"); // 3
        Instrmt_81_set.insert("CFICode_t_1641094126");
        Instrmt_81.add_attribute("SecTyp", "CASH"); // 3
        Instrmt_81_set.insert("CASH");
        Instrmt_81.add_attribute("SubTyp", "SecuritySubType_t_1572391937"); // 3
        Instrmt_81_set.insert("SecuritySubType_t_1572391937");
        Instrmt_81.add_attribute("MMY", "309061625"); // 3
        Instrmt_81_set.insert("309061625");
        Instrmt_81.add_attribute("MatDt", "MaturityDate_t_2141321762"); // 3
        Instrmt_81_set.insert("MaturityDate_t_2141321762");
        Instrmt_81.add_attribute("MatTm", "1199669354"); // 3
        Instrmt_81_set.insert("1199669354");
        Instrmt_81.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_284301328"); // 3
        Instrmt_81_set.insert("SettleOnOpenFlag_t_284301328");
        Instrmt_81.add_attribute("AsgnMeth", "1231570984"); // 3
        Instrmt_81_set.insert("1231570984");
        Instrmt_81.add_attribute("Status", "1"); // 3
        Instrmt_81_set.insert("1");
        Instrmt_81.add_attribute("CpnPmt", "CouponPaymentDate_t_201113721"); // 3
        Instrmt_81_set.insert("CouponPaymentDate_t_201113721");
        Instrmt_81.add_attribute("RestrctTyp", "MR"); // 3
        Instrmt_81_set.insert("MR");
        Instrmt_81.add_attribute("Snrty", "SR"); // 3
        Instrmt_81_set.insert("SR");
        Instrmt_81.add_attribute("NotlPctOut", "11564451.320000"); // 3
        Instrmt_81_set.insert("11564451.320000");
        Instrmt_81.add_attribute("OrigNotlPctOut", "1853151.510000"); // 3
        Instrmt_81_set.insert("1853151.510000");
        Instrmt_81.add_attribute("AttchPnt", "5454156.970000"); // 3
        Instrmt_81_set.insert("5454156.970000");
        Instrmt_81.add_attribute("DetchPnt", "1696145.640000"); // 3
        Instrmt_81_set.insert("1696145.640000");
        Instrmt_81.add_attribute("Issued", "IssueDate_t_1180548701"); // 3
        Instrmt_81_set.insert("IssueDate_t_1180548701");
        Instrmt_81.add_attribute("RepoCollSecTyp", "436223524"); // 3
        Instrmt_81_set.insert("436223524");
        Instrmt_81.add_attribute("RepoTrm", "1774875492"); // 3
        Instrmt_81_set.insert("1774875492");
        Instrmt_81.add_attribute("RepoRt", "15100736.280000"); // 3
        Instrmt_81_set.insert("15100736.280000");
        Instrmt_81.add_attribute("Fctr", "20058448.590000"); // 3
        Instrmt_81_set.insert("20058448.590000");
        Instrmt_81.add_attribute("CrdRtg", "CreditRating_t_318751045"); // 3
        Instrmt_81_set.insert("CreditRating_t_318751045");
        Instrmt_81.add_attribute("Rgstry", "InstrRegistry_t_191738899"); // 3
        Instrmt_81_set.insert("InstrRegistry_t_191738899");
        Instrmt_81.add_attribute("IssuCtry", "645978357"); // 3
        Instrmt_81_set.insert("645978357");
        Instrmt_81.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1099989651"); // 3
        Instrmt_81_set.insert("StateOrProvinceOfIssue_t_1099989651");
        Instrmt_81.add_attribute("Lcl", "LocaleOfIssue_t_153793412"); // 3
        Instrmt_81_set.insert("LocaleOfIssue_t_153793412");
        Instrmt_81.add_attribute("Redeem", "RedemptionDate_t_369722387"); // 3
        Instrmt_81_set.insert("RedemptionDate_t_369722387");
        Instrmt_81.add_attribute("StrkPx", "10996448.490000"); // 3
        Instrmt_81_set.insert("10996448.490000");
        Instrmt_81.add_attribute("StrkCcy", "JPY"); // 3
        Instrmt_81_set.insert("JPY");
        Instrmt_81.add_attribute("StrkMult", "1584450.380000"); // 3
        Instrmt_81_set.insert("1584450.380000");
        Instrmt_81.add_attribute("StrkValu", "16147939.260000"); // 3
        Instrmt_81_set.insert("16147939.260000");
        Instrmt_81.add_attribute("StrkPxDtrmnMeth", "3"); // 3
        Instrmt_81_set.insert("3");
        Instrmt_81.add_attribute("StrkPxBndryMeth", "1"); // 3
        Instrmt_81_set.insert("1");
        Instrmt_81.add_attribute("StrkPxBndryPrcsn", "19238555.510000"); // 3
        Instrmt_81_set.insert("19238555.510000");
        Instrmt_81.add_attribute("PxDtrmnMeth", "1"); // 3
        Instrmt_81_set.insert("1");
        Instrmt_81.add_attribute("OptAt", "783022681"); // 3
        Instrmt_81_set.insert("783022681");
        Instrmt_81.add_attribute("Mult", "606732.310000"); // 3
        Instrmt_81_set.insert("606732.310000");
        Instrmt_81.add_attribute("MultTyp", "1"); // 3
        Instrmt_81_set.insert("1");
        Instrmt_81.add_attribute("FlowSchedTyp", "0"); // 3
        Instrmt_81_set.insert("0");
        Instrmt_81.add_attribute("MinPxIncr", "2617869.520000"); // 3
        Instrmt_81_set.insert("2617869.520000");
        Instrmt_81.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1825294270"); // 3
        Instrmt_81_set.insert("MinPriceIncrementAmount_t_1825294270");
        Instrmt_81.add_attribute("UOM", "Gal"); // 3
        Instrmt_81_set.insert("Gal");
        Instrmt_81.add_attribute("UOMQty", "14182320.850000"); // 3
        Instrmt_81_set.insert("14182320.850000");
        Instrmt_81.add_attribute("PxUOM", "Bbl"); // 3
        Instrmt_81_set.insert("Bbl");
        Instrmt_81.add_attribute("PxUOMQty", "19302818.460000"); // 3
        Instrmt_81_set.insert("19302818.460000");
        Instrmt_81.add_attribute("SettlMeth", "P"); // 3
        Instrmt_81_set.insert("P");
        Instrmt_81.add_attribute("ExerStyle", "1"); // 3
        Instrmt_81_set.insert("1");
        Instrmt_81.add_attribute("OptPayoutTyp", "3"); // 3
        Instrmt_81_set.insert("3");
        Instrmt_81.add_attribute("OptPayAmt", "OptPayoutAmount_t_1215238494"); // 3
        Instrmt_81_set.insert("OptPayoutAmount_t_1215238494");
        Instrmt_81.add_attribute("PxQteMeth", "INT"); // 3
        Instrmt_81_set.insert("INT");
        Instrmt_81.add_attribute("ValMeth", "CDS"); // 3
        Instrmt_81_set.insert("CDS");
        Instrmt_81.add_attribute("ListMeth", "1"); // 3
        Instrmt_81_set.insert("1");
        Instrmt_81.add_attribute("CapPx", "5980033.540000"); // 3
        Instrmt_81_set.insert("5980033.540000");
        Instrmt_81.add_attribute("FlrPx", "7233612.900000"); // 3
        Instrmt_81_set.insert("7233612.900000");
        Instrmt_81.add_attribute("PutCall", "0"); // 3
        Instrmt_81_set.insert("0");
        Instrmt_81.add_attribute("FlexInd", "true"); // 3
        Instrmt_81_set.insert("true");
        Instrmt_81.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_81_set.insert("false");
        Instrmt_81.add_attribute("TmUnit", "D"); // 3
        Instrmt_81_set.insert("D");
        Instrmt_81.add_attribute("CpnRt", "7254965.660000"); // 3
        Instrmt_81_set.insert("7254965.660000");
        Instrmt_81.add_attribute("Exch", "SecurityExchange_t_136575679"); // 3
        Instrmt_81_set.insert("SecurityExchange_t_136575679");
        Instrmt_81.add_attribute("PosLmt", "1744585429"); // 3
        Instrmt_81_set.insert("1744585429");
        Instrmt_81.add_attribute("NTPosLmt", "192806844"); // 3
        Instrmt_81_set.insert("192806844");
        Instrmt_81.add_attribute("Issr", "Issuer_t_1369722150"); // 3
        Instrmt_81_set.insert("Issuer_t_1369722150");
        Instrmt_81.add_attribute("EncIssrLen", "1327938756"); // 3
        Instrmt_81_set.insert("1327938756");
        Instrmt_81.add_attribute("EncIssr", "EncodedIssuer_t_2116662395"); // 3
        Instrmt_81_set.insert("EncodedIssuer_t_2116662395");
        Instrmt_81.add_attribute("Desc", "SecurityDesc_t_449223086"); // 3
        Instrmt_81_set.insert("SecurityDesc_t_449223086");
        Instrmt_81.add_attribute("EncSecDescLen", "2110961437"); // 3
        Instrmt_81_set.insert("2110961437");
        Instrmt_81.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_29851979"); // 3
        Instrmt_81_set.insert("EncodedSecurityDesc_t_29851979");
        Instrmt_81.add_attribute("Pool", "Pool_t_760295007"); // 3
        Instrmt_81_set.insert("Pool_t_760295007");
        Instrmt_81.add_attribute("CSetMo", "1140954794"); // 3
        Instrmt_81_set.insert("1140954794");
        Instrmt_81.add_attribute("CPPgm", "1"); // 3
        Instrmt_81_set.insert("1");
        Instrmt_81.add_attribute("CPRegT", "CPRegType_t_438105629"); // 3
        Instrmt_81_set.insert("CPRegType_t_438105629");
        Instrmt_81.add_attribute("Dated", "DatedDate_t_378337295"); // 3
        Instrmt_81_set.insert("DatedDate_t_378337295");
        Instrmt_81.add_attribute("IntAcrl", "InterestAccrualDate_t_1709871016"); // 3
        Instrmt_81_set.insert("InterestAccrualDate_t_1709871016");
        all_values.push_back(Instrmt_81_set);
        all_compo_names.insert("Instrmt_81_set");

        {
          xml_element AID_84{"AID"};
          multiset<string> AID_84_set;
          AID_84.add_attribute("AltID", "SecurityAltID_t_301231402"); // 4
          AID_84_set.insert("SecurityAltID_t_301231402");
          AID_84.add_attribute("AltIDSrc", "E"); // 4
          AID_84_set.insert("E");
          all_values.push_back(AID_84_set);
          all_compo_names.insert("AID_84_set");

          Instrmt_81.add_element(AID_84);
        }
        {
          xml_element SecXML_84{"SecXML"};
          multiset<string> SecXML_84_set;
          SecXML_84.add_attribute("Schema", "SecurityXMLSchema_t_1150234018"); // 4
          SecXML_84_set.insert("SecurityXMLSchema_t_1150234018");
          all_values.push_back(SecXML_84_set);
          all_compo_names.insert("SecXML_84_set");

          Instrmt_81.add_element(SecXML_84);
        }
        {
          xml_element Evnt_84{"Evnt"};
          multiset<string> Evnt_84_set;
          Evnt_84.add_attribute("EventTyp", "16"); // 4
          Evnt_84_set.insert("16");
          Evnt_84.add_attribute("Dt", "EventDate_t_380157215"); // 4
          Evnt_84_set.insert("EventDate_t_380157215");
          Evnt_84.add_attribute("Tm", "EventTime_t_217988864"); // 4
          Evnt_84_set.insert("EventTime_t_217988864");
          Evnt_84.add_attribute("Px", "17511703.310000"); // 4
          Evnt_84_set.insert("17511703.310000");
          Evnt_84.add_attribute("Txt", "EventText_t_457540148"); // 4
          Evnt_84_set.insert("EventText_t_457540148");
          all_values.push_back(Evnt_84_set);
          all_compo_names.insert("Evnt_84_set");

          Instrmt_81.add_element(Evnt_84);
        }
        {
          xml_element Pty_409{"Pty"};
          multiset<string> Pty_409_set;
          Pty_409.add_attribute("ID", "InstrumentPartyID_t_1751978403"); // 4
          Pty_409_set.insert("InstrumentPartyID_t_1751978403");
          Pty_409.add_attribute("Src", "2"); // 4
          Pty_409_set.insert("2");
          Pty_409.add_attribute("R", "41"); // 4
          Pty_409_set.insert("41");
          all_values.push_back(Pty_409_set);
          all_compo_names.insert("Pty_409_set");

          {
            xml_element Sub_409{"Sub"};
            multiset<string> Sub_409_set;
            Sub_409.add_attribute("ID", "InstrumentPartySubID_t_90990297"); // 5
            Sub_409_set.insert("InstrumentPartySubID_t_90990297");
            Sub_409.add_attribute("Typ", "24"); // 5
            Sub_409_set.insert("24");
            all_values.push_back(Sub_409_set);
            all_compo_names.insert("Sub_409_set");

            Pty_409.add_element(Sub_409);
          }
          Instrmt_81.add_element(Pty_409);
        }
        {
          xml_element CmplxEvnt_81{"CmplxEvnt"};
          multiset<string> CmplxEvnt_81_set;
          CmplxEvnt_81.add_attribute("Typ", "6"); // 4
          CmplxEvnt_81_set.insert("6");
          CmplxEvnt_81.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1677130689"); // 4
          CmplxEvnt_81_set.insert("ComplexOptPayoutAmount_t_1677130689");
          CmplxEvnt_81.add_attribute("Px", "16789833.700000"); // 4
          CmplxEvnt_81_set.insert("16789833.700000");
          CmplxEvnt_81.add_attribute("PxBndryMeth", "3"); // 4
          CmplxEvnt_81_set.insert("3");
          CmplxEvnt_81.add_attribute("PxBndryPrcsn", "12742324.700000"); // 4
          CmplxEvnt_81_set.insert("12742324.700000");
          CmplxEvnt_81.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_81_set.insert("2");
          CmplxEvnt_81.add_attribute("Cond", "2"); // 4
          CmplxEvnt_81_set.insert("2");
          all_values.push_back(CmplxEvnt_81_set);
          all_compo_names.insert("CmplxEvnt_81_set");

          {
            xml_element EvntDts_81{"EvntDts"};
            multiset<string> EvntDts_81_set;
            EvntDts_81.add_attribute("StartDt", "ComplexEventStartDate_t_454687579"); // 5
            EvntDts_81_set.insert("ComplexEventStartDate_t_454687579");
            EvntDts_81.add_attribute("EndDt", "ComplexEventEndDate_t_1840968962"); // 5
            EvntDts_81_set.insert("ComplexEventEndDate_t_1840968962");
            all_values.push_back(EvntDts_81_set);
            all_compo_names.insert("EvntDts_81_set");

            {
              xml_element EvntTms_81{"EvntTms"};
              multiset<string> EvntTms_81_set;
              EvntTms_81.add_attribute("StartTm", "2082022383"); // 6
              EvntTms_81_set.insert("2082022383");
              EvntTms_81.add_attribute("EndTm", "418165368"); // 6
              EvntTms_81_set.insert("418165368");
              all_values.push_back(EvntTms_81_set);
              all_compo_names.insert("EvntTms_81_set");

              EvntDts_81.add_element(EvntTms_81);
            }
            CmplxEvnt_81.add_element(EvntDts_81);
          }
          Instrmt_81.add_element(CmplxEvnt_81);
        }
        Instrmts_1.add_element(Instrmt_81);
      }
      Reqs_0.add_element(Instrmts_1);
    }
    elt.add_element(Reqs_0);
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
