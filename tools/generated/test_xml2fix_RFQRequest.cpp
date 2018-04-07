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
  elt.add_attribute("RFQReqID", "RFQReqID_t_671830608"); // 0
  RFQRequest_message_t_0.insert("RFQReqID_t_671830608");
  elt.add_attribute("SubReqTyp", "0"); // 0
  RFQRequest_message_t_0.insert("0");
  elt.add_attribute("PrvtQt", "true"); // 0
  RFQRequest_message_t_0.insert("true");
  all_values.push_back(RFQRequest_message_t_0);
  all_compo_names.insert("RFQRequest_message_t");

  { // Hdr
    xml_element Hdr_75{"Hdr"};
    multiset<string> Hdr_75_set;
    Hdr_75.add_attribute("SeqNum", "1846903042"); // 1
    Hdr_75_set.insert("1846903042");
    Hdr_75.add_attribute("SID", "SenderCompID_t_852799021"); // 1
    Hdr_75_set.insert("SenderCompID_t_852799021");
    Hdr_75.add_attribute("TID", "TargetCompID_t_1872928521"); // 1
    Hdr_75_set.insert("TargetCompID_t_1872928521");
    Hdr_75.add_attribute("OBID", "OnBehalfOfCompID_t_198160309"); // 1
    Hdr_75_set.insert("OnBehalfOfCompID_t_198160309");
    Hdr_75.add_attribute("D2ID", "DeliverToCompID_t_1131105493"); // 1
    Hdr_75_set.insert("DeliverToCompID_t_1131105493");
    Hdr_75.add_attribute("SSub", "SenderSubID_t_2061376005"); // 1
    Hdr_75_set.insert("SenderSubID_t_2061376005");
    Hdr_75.add_attribute("SLoc", "SenderLocationID_t_975761971"); // 1
    Hdr_75_set.insert("SenderLocationID_t_975761971");
    Hdr_75.add_attribute("TSub", "TargetSubID_t_570669043"); // 1
    Hdr_75_set.insert("TargetSubID_t_570669043");
    Hdr_75.add_attribute("TLoc", "TargetLocationID_t_276659695"); // 1
    Hdr_75_set.insert("TargetLocationID_t_276659695");
    Hdr_75.add_attribute("OBSub", "OnBehalfOfSubID_t_900456129"); // 1
    Hdr_75_set.insert("OnBehalfOfSubID_t_900456129");
    Hdr_75.add_attribute("OBLoc", "OnBehalfOfLocationID_t_334108065"); // 1
    Hdr_75_set.insert("OnBehalfOfLocationID_t_334108065");
    Hdr_75.add_attribute("D2Sub", "DeliverToSubID_t_1195618714"); // 1
    Hdr_75_set.insert("DeliverToSubID_t_1195618714");
    Hdr_75.add_attribute("D2Loc", "DeliverToLocationID_t_1204316762"); // 1
    Hdr_75_set.insert("DeliverToLocationID_t_1204316762");
    Hdr_75.add_attribute("PosDup", "N"); // 1
    Hdr_75_set.insert("N");
    Hdr_75.add_attribute("PosRsnd", "N"); // 1
    Hdr_75_set.insert("N");
    Hdr_75.add_attribute("Snt", "SendingTime_t_1079866985"); // 1
    Hdr_75_set.insert("SendingTime_t_1079866985");
    Hdr_75.add_attribute("OrigSnt", "OrigSendingTime_t_1949497623"); // 1
    Hdr_75_set.insert("OrigSendingTime_t_1949497623");
    Hdr_75.add_attribute("MsgEncd", "MessageEncoding_t_1381442853"); // 1
    Hdr_75_set.insert("MessageEncoding_t_1381442853");
    all_values.push_back(Hdr_75_set);
    all_compo_names.insert("Hdr_75_set");

    {
      xml_element Hop_75{"Hop"};
      multiset<string> Hop_75_set;
      Hop_75.add_attribute("ID", "HopCompID_t_76671868"); // 2
      Hop_75_set.insert("HopCompID_t_76671868");
      Hop_75.add_attribute("Ref", "1880903007"); // 2
      Hop_75_set.insert("1880903007");
      Hop_75.add_attribute("Snt", "HopSendingTime_t_791849621"); // 2
      Hop_75_set.insert("HopSendingTime_t_791849621");
      all_values.push_back(Hop_75_set);
      all_compo_names.insert("Hop_75_set");

      Hdr_75.add_element(Hop_75);
    }
    elt.add_element(Hdr_75);
  } // end Hdr
  { // Pty
    xml_element Pty_376{"Pty"};
    multiset<string> Pty_376_set;
    Pty_376.add_attribute("ID", "PartyID_t_688750089"); // 1
    Pty_376_set.insert("PartyID_t_688750089");
    Pty_376.add_attribute("Src", "8"); // 1
    Pty_376_set.insert("8");
    Pty_376.add_attribute("R", "74"); // 1
    Pty_376_set.insert("74");
    all_values.push_back(Pty_376_set);
    all_compo_names.insert("Pty_376_set");

    {
      xml_element Sub_376{"Sub"};
      multiset<string> Sub_376_set;
      Sub_376.add_attribute("ID", "PartySubID_t_233786168"); // 2
      Sub_376_set.insert("PartySubID_t_233786168");
      Sub_376.add_attribute("Typ", "22"); // 2
      Sub_376_set.insert("22");
      all_values.push_back(Sub_376_set);
      all_compo_names.insert("Sub_376_set");

      Pty_376.add_element(Sub_376);
    }
    elt.add_element(Pty_376);
  } // end Pty
  { // Pty
    xml_element Pty_377{"Pty"};
    multiset<string> Pty_377_set;
    Pty_377.add_attribute("ID", "PartyID_t_1977115080"); // 1
    Pty_377_set.insert("PartyID_t_1977115080");
    Pty_377.add_attribute("Src", "3"); // 1
    Pty_377_set.insert("3");
    Pty_377.add_attribute("R", "5"); // 1
    Pty_377_set.insert("5");
    all_values.push_back(Pty_377_set);
    all_compo_names.insert("Pty_377_set");

    {
      xml_element Sub_377{"Sub"};
      multiset<string> Sub_377_set;
      Sub_377.add_attribute("ID", "PartySubID_t_403362410"); // 2
      Sub_377_set.insert("PartySubID_t_403362410");
      Sub_377.add_attribute("Typ", "21"); // 2
      Sub_377_set.insert("21");
      all_values.push_back(Sub_377_set);
      all_compo_names.insert("Sub_377_set");

      Pty_377.add_element(Sub_377);
    }
    elt.add_element(Pty_377);
  } // end Pty
  { // Pty
    xml_element Pty_378{"Pty"};
    multiset<string> Pty_378_set;
    Pty_378.add_attribute("ID", "PartyID_t_1587785697"); // 1
    Pty_378_set.insert("PartyID_t_1587785697");
    Pty_378.add_attribute("Src", "4"); // 1
    Pty_378_set.insert("4");
    Pty_378.add_attribute("R", "73"); // 1
    Pty_378_set.insert("73");
    all_values.push_back(Pty_378_set);
    all_compo_names.insert("Pty_378_set");

    {
      xml_element Sub_378{"Sub"};
      multiset<string> Sub_378_set;
      Sub_378.add_attribute("ID", "PartySubID_t_571407542"); // 2
      Sub_378_set.insert("PartySubID_t_571407542");
      Sub_378.add_attribute("Typ", "24"); // 2
      Sub_378_set.insert("24");
      all_values.push_back(Sub_378_set);
      all_compo_names.insert("Sub_378_set");

      Pty_378.add_element(Sub_378);
    }
    elt.add_element(Pty_378);
  } // end Pty
  { // RFQReq
    xml_element RFQReq_0{"RFQReq"};
    multiset<string> RFQReq_0_set;
    RFQReq_0.add_attribute("PrevClsPx", "11420765.850000"); // 1
    RFQReq_0_set.insert("11420765.850000");
    RFQReq_0.add_attribute("ReqTyp", "2"); // 1
    RFQReq_0_set.insert("2");
    RFQReq_0.add_attribute("Typ", "0"); // 1
    RFQReq_0_set.insert("0");
    RFQReq_0.add_attribute("SesID", "2"); // 1
    RFQReq_0_set.insert("2");
    RFQReq_0.add_attribute("SesSub", "6"); // 1
    RFQReq_0_set.insert("6");
    all_values.push_back(RFQReq_0_set);
    all_compo_names.insert("RFQReq_0_set");

    {
      xml_element Instrmt_69{"Instrmt"};
      multiset<string> Instrmt_69_set;
      Instrmt_69.add_attribute("Sym", "Symbol_t_1736247694"); // 2
      Instrmt_69_set.insert("Symbol_t_1736247694");
      Instrmt_69.add_attribute("Sfx", "WI"); // 2
      Instrmt_69_set.insert("WI");
      Instrmt_69.add_attribute("ID", "SecurityID_t_288017520"); // 2
      Instrmt_69_set.insert("SecurityID_t_288017520");
      Instrmt_69.add_attribute("Src", "E"); // 2
      Instrmt_69_set.insert("E");
      Instrmt_69.add_attribute("Prod", "6"); // 2
      Instrmt_69_set.insert("6");
      Instrmt_69.add_attribute("ProdCmplx", "ProductComplex_t_1669460373"); // 2
      Instrmt_69_set.insert("ProductComplex_t_1669460373");
      Instrmt_69.add_attribute("SecGrp", "SecurityGroup_t_745302900"); // 2
      Instrmt_69_set.insert("SecurityGroup_t_745302900");
      Instrmt_69.add_attribute("CFI", "CFICode_t_1462165504"); // 2
      Instrmt_69_set.insert("CFICode_t_1462165504");
      Instrmt_69.add_attribute("SecTyp", "LQN"); // 2
      Instrmt_69_set.insert("LQN");
      Instrmt_69.add_attribute("SubTyp", "SecuritySubType_t_1400808185"); // 2
      Instrmt_69_set.insert("SecuritySubType_t_1400808185");
      Instrmt_69.add_attribute("MMY", "3431945"); // 2
      Instrmt_69_set.insert("3431945");
      Instrmt_69.add_attribute("MatDt", "MaturityDate_t_1902533804"); // 2
      Instrmt_69_set.insert("MaturityDate_t_1902533804");
      Instrmt_69.add_attribute("MatTm", "1516456181"); // 2
      Instrmt_69_set.insert("1516456181");
      Instrmt_69.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_237218113"); // 2
      Instrmt_69_set.insert("SettleOnOpenFlag_t_237218113");
      Instrmt_69.add_attribute("AsgnMeth", "2077670197"); // 2
      Instrmt_69_set.insert("2077670197");
      Instrmt_69.add_attribute("Status", "2"); // 2
      Instrmt_69_set.insert("2");
      Instrmt_69.add_attribute("CpnPmt", "CouponPaymentDate_t_1142834890"); // 2
      Instrmt_69_set.insert("CouponPaymentDate_t_1142834890");
      Instrmt_69.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_69_set.insert("MR");
      Instrmt_69.add_attribute("Snrty", "SD"); // 2
      Instrmt_69_set.insert("SD");
      Instrmt_69.add_attribute("NotlPctOut", "17478710.600000"); // 2
      Instrmt_69_set.insert("17478710.600000");
      Instrmt_69.add_attribute("OrigNotlPctOut", "1054752.750000"); // 2
      Instrmt_69_set.insert("1054752.750000");
      Instrmt_69.add_attribute("AttchPnt", "18782573.070000"); // 2
      Instrmt_69_set.insert("18782573.070000");
      Instrmt_69.add_attribute("DetchPnt", "4035838.920000"); // 2
      Instrmt_69_set.insert("4035838.920000");
      Instrmt_69.add_attribute("Issued", "IssueDate_t_676882817"); // 2
      Instrmt_69_set.insert("IssueDate_t_676882817");
      Instrmt_69.add_attribute("RepoCollSecTyp", "1920956948"); // 2
      Instrmt_69_set.insert("1920956948");
      Instrmt_69.add_attribute("RepoTrm", "35058695"); // 2
      Instrmt_69_set.insert("35058695");
      Instrmt_69.add_attribute("RepoRt", "18189594.030000"); // 2
      Instrmt_69_set.insert("18189594.030000");
      Instrmt_69.add_attribute("Fctr", "928326.350000"); // 2
      Instrmt_69_set.insert("928326.350000");
      Instrmt_69.add_attribute("CrdRtg", "CreditRating_t_566989627"); // 2
      Instrmt_69_set.insert("CreditRating_t_566989627");
      Instrmt_69.add_attribute("Rgstry", "InstrRegistry_t_1147660406"); // 2
      Instrmt_69_set.insert("InstrRegistry_t_1147660406");
      Instrmt_69.add_attribute("IssuCtry", "1607810685"); // 2
      Instrmt_69_set.insert("1607810685");
      Instrmt_69.add_attribute("StPrv", "StateOrProvinceOfIssue_t_155753673"); // 2
      Instrmt_69_set.insert("StateOrProvinceOfIssue_t_155753673");
      Instrmt_69.add_attribute("Lcl", "LocaleOfIssue_t_926908927"); // 2
      Instrmt_69_set.insert("LocaleOfIssue_t_926908927");
      Instrmt_69.add_attribute("Redeem", "RedemptionDate_t_1895828205"); // 2
      Instrmt_69_set.insert("RedemptionDate_t_1895828205");
      Instrmt_69.add_attribute("StrkPx", "8243847.040000"); // 2
      Instrmt_69_set.insert("8243847.040000");
      Instrmt_69.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_69_set.insert("CAN");
      Instrmt_69.add_attribute("StrkMult", "15696876.040000"); // 2
      Instrmt_69_set.insert("15696876.040000");
      Instrmt_69.add_attribute("StrkValu", "19703369.290000"); // 2
      Instrmt_69_set.insert("19703369.290000");
      Instrmt_69.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_69_set.insert("3");
      Instrmt_69.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_69_set.insert("3");
      Instrmt_69.add_attribute("StrkPxBndryPrcsn", "19737688.740000"); // 2
      Instrmt_69_set.insert("19737688.740000");
      Instrmt_69.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_69_set.insert("3");
      Instrmt_69.add_attribute("OptAt", "191984675"); // 2
      Instrmt_69_set.insert("191984675");
      Instrmt_69.add_attribute("Mult", "635033.400000"); // 2
      Instrmt_69_set.insert("635033.400000");
      Instrmt_69.add_attribute("MultTyp", "0"); // 2
      Instrmt_69_set.insert("0");
      Instrmt_69.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_69_set.insert("4");
      Instrmt_69.add_attribute("MinPxIncr", "12063382.300000"); // 2
      Instrmt_69_set.insert("12063382.300000");
      Instrmt_69.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2082041209"); // 2
      Instrmt_69_set.insert("MinPriceIncrementAmount_t_2082041209");
      Instrmt_69.add_attribute("UOM", "Alw"); // 2
      Instrmt_69_set.insert("Alw");
      Instrmt_69.add_attribute("UOMQty", "8067256.420000"); // 2
      Instrmt_69_set.insert("8067256.420000");
      Instrmt_69.add_attribute("PxUOM", "Alw"); // 2
      Instrmt_69_set.insert("Alw");
      Instrmt_69.add_attribute("PxUOMQty", "8708123.240000"); // 2
      Instrmt_69_set.insert("8708123.240000");
      Instrmt_69.add_attribute("SettlMeth", "C"); // 2
      Instrmt_69_set.insert("C");
      Instrmt_69.add_attribute("ExerStyle", "2"); // 2
      Instrmt_69_set.insert("2");
      Instrmt_69.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_69_set.insert("3");
      Instrmt_69.add_attribute("OptPayAmt", "OptPayoutAmount_t_1245368229"); // 2
      Instrmt_69_set.insert("OptPayoutAmount_t_1245368229");
      Instrmt_69.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_69_set.insert("INX");
      Instrmt_69.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_69_set.insert("EQTY");
      Instrmt_69.add_attribute("ListMeth", "0"); // 2
      Instrmt_69_set.insert("0");
      Instrmt_69.add_attribute("CapPx", "15360518.150000"); // 2
      Instrmt_69_set.insert("15360518.150000");
      Instrmt_69.add_attribute("FlrPx", "1974452.970000"); // 2
      Instrmt_69_set.insert("1974452.970000");
      Instrmt_69.add_attribute("PutCall", "1"); // 2
      Instrmt_69_set.insert("1");
      Instrmt_69.add_attribute("FlexInd", "true"); // 2
      Instrmt_69_set.insert("true");
      Instrmt_69.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_69_set.insert("false");
      Instrmt_69.add_attribute("TmUnit", "Min"); // 2
      Instrmt_69_set.insert("Min");
      Instrmt_69.add_attribute("CpnRt", "8236485.190000"); // 2
      Instrmt_69_set.insert("8236485.190000");
      Instrmt_69.add_attribute("Exch", "SecurityExchange_t_1363594786"); // 2
      Instrmt_69_set.insert("SecurityExchange_t_1363594786");
      Instrmt_69.add_attribute("PosLmt", "67216542"); // 2
      Instrmt_69_set.insert("67216542");
      Instrmt_69.add_attribute("NTPosLmt", "646501800"); // 2
      Instrmt_69_set.insert("646501800");
      Instrmt_69.add_attribute("Issr", "Issuer_t_947742416"); // 2
      Instrmt_69_set.insert("Issuer_t_947742416");
      Instrmt_69.add_attribute("EncIssrLen", "890228684"); // 2
      Instrmt_69_set.insert("890228684");
      Instrmt_69.add_attribute("EncIssr", "EncodedIssuer_t_472787026"); // 2
      Instrmt_69_set.insert("EncodedIssuer_t_472787026");
      Instrmt_69.add_attribute("Desc", "SecurityDesc_t_286940202"); // 2
      Instrmt_69_set.insert("SecurityDesc_t_286940202");
      Instrmt_69.add_attribute("EncSecDescLen", "1082213360"); // 2
      Instrmt_69_set.insert("1082213360");
      Instrmt_69.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_536290366"); // 2
      Instrmt_69_set.insert("EncodedSecurityDesc_t_536290366");
      Instrmt_69.add_attribute("Pool", "Pool_t_1703808186"); // 2
      Instrmt_69_set.insert("Pool_t_1703808186");
      Instrmt_69.add_attribute("CSetMo", "472802001"); // 2
      Instrmt_69_set.insert("472802001");
      Instrmt_69.add_attribute("CPPgm", "99"); // 2
      Instrmt_69_set.insert("99");
      Instrmt_69.add_attribute("CPRegT", "CPRegType_t_1638365748"); // 2
      Instrmt_69_set.insert("CPRegType_t_1638365748");
      Instrmt_69.add_attribute("Dated", "DatedDate_t_1612840666"); // 2
      Instrmt_69_set.insert("DatedDate_t_1612840666");
      Instrmt_69.add_attribute("IntAcrl", "InterestAccrualDate_t_401870591"); // 2
      Instrmt_69_set.insert("InterestAccrualDate_t_401870591");
      all_values.push_back(Instrmt_69_set);
      all_compo_names.insert("Instrmt_69_set");

      {
        xml_element AID_72{"AID"};
        multiset<string> AID_72_set;
        AID_72.add_attribute("AltID", "SecurityAltID_t_1678398584"); // 3
        AID_72_set.insert("SecurityAltID_t_1678398584");
        AID_72.add_attribute("AltIDSrc", "F"); // 3
        AID_72_set.insert("F");
        all_values.push_back(AID_72_set);
        all_compo_names.insert("AID_72_set");

        Instrmt_69.add_element(AID_72);
      }
      {
        xml_element SecXML_72{"SecXML"};
        multiset<string> SecXML_72_set;
        SecXML_72.add_attribute("Schema", "SecurityXMLSchema_t_1612180125"); // 3
        SecXML_72_set.insert("SecurityXMLSchema_t_1612180125");
        all_values.push_back(SecXML_72_set);
        all_compo_names.insert("SecXML_72_set");

        Instrmt_69.add_element(SecXML_72);
      }
      {
        xml_element Evnt_72{"Evnt"};
        multiset<string> Evnt_72_set;
        Evnt_72.add_attribute("EventTyp", "11"); // 3
        Evnt_72_set.insert("11");
        Evnt_72.add_attribute("Dt", "EventDate_t_980454967"); // 3
        Evnt_72_set.insert("EventDate_t_980454967");
        Evnt_72.add_attribute("Tm", "EventTime_t_710064707"); // 3
        Evnt_72_set.insert("EventTime_t_710064707");
        Evnt_72.add_attribute("Px", "6362219.990000"); // 3
        Evnt_72_set.insert("6362219.990000");
        Evnt_72.add_attribute("Txt", "EventText_t_1717573227"); // 3
        Evnt_72_set.insert("EventText_t_1717573227");
        all_values.push_back(Evnt_72_set);
        all_compo_names.insert("Evnt_72_set");

        Instrmt_69.add_element(Evnt_72);
      }
      {
        xml_element Pty_379{"Pty"};
        multiset<string> Pty_379_set;
        Pty_379.add_attribute("ID", "InstrumentPartyID_t_374938915"); // 3
        Pty_379_set.insert("InstrumentPartyID_t_374938915");
        Pty_379.add_attribute("Src", "9"); // 3
        Pty_379_set.insert("9");
        Pty_379.add_attribute("R", "51"); // 3
        Pty_379_set.insert("51");
        all_values.push_back(Pty_379_set);
        all_compo_names.insert("Pty_379_set");

        {
          xml_element Sub_379{"Sub"};
          multiset<string> Sub_379_set;
          Sub_379.add_attribute("ID", "InstrumentPartySubID_t_195566797"); // 4
          Sub_379_set.insert("InstrumentPartySubID_t_195566797");
          Sub_379.add_attribute("Typ", "13"); // 4
          Sub_379_set.insert("13");
          all_values.push_back(Sub_379_set);
          all_compo_names.insert("Sub_379_set");

          Pty_379.add_element(Sub_379);
        }
        Instrmt_69.add_element(Pty_379);
      }
      {
        xml_element CmplxEvnt_69{"CmplxEvnt"};
        multiset<string> CmplxEvnt_69_set;
        CmplxEvnt_69.add_attribute("Typ", "6"); // 3
        CmplxEvnt_69_set.insert("6");
        CmplxEvnt_69.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_840579383"); // 3
        CmplxEvnt_69_set.insert("ComplexOptPayoutAmount_t_840579383");
        CmplxEvnt_69.add_attribute("Px", "11639157.800000"); // 3
        CmplxEvnt_69_set.insert("11639157.800000");
        CmplxEvnt_69.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_69_set.insert("3");
        CmplxEvnt_69.add_attribute("PxBndryPrcsn", "9077959.250000"); // 3
        CmplxEvnt_69_set.insert("9077959.250000");
        CmplxEvnt_69.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_69_set.insert("3");
        CmplxEvnt_69.add_attribute("Cond", "2"); // 3
        CmplxEvnt_69_set.insert("2");
        all_values.push_back(CmplxEvnt_69_set);
        all_compo_names.insert("CmplxEvnt_69_set");

        {
          xml_element EvntDts_69{"EvntDts"};
          multiset<string> EvntDts_69_set;
          EvntDts_69.add_attribute("StartDt", "ComplexEventStartDate_t_1798024610"); // 4
          EvntDts_69_set.insert("ComplexEventStartDate_t_1798024610");
          EvntDts_69.add_attribute("EndDt", "ComplexEventEndDate_t_135720958"); // 4
          EvntDts_69_set.insert("ComplexEventEndDate_t_135720958");
          all_values.push_back(EvntDts_69_set);
          all_compo_names.insert("EvntDts_69_set");

          {
            xml_element EvntTms_69{"EvntTms"};
            multiset<string> EvntTms_69_set;
            EvntTms_69.add_attribute("StartTm", "164118488"); // 5
            EvntTms_69_set.insert("164118488");
            EvntTms_69.add_attribute("EndTm", "732754322"); // 5
            EvntTms_69_set.insert("732754322");
            all_values.push_back(EvntTms_69_set);
            all_compo_names.insert("EvntTms_69_set");

            EvntDts_69.add_element(EvntTms_69);
          }
          CmplxEvnt_69.add_element(EvntDts_69);
        }
        Instrmt_69.add_element(CmplxEvnt_69);
      }
      RFQReq_0.add_element(Instrmt_69);
    }
    {
      xml_element Undly_95{"Undly"};
      multiset<string> Undly_95_set;
      Undly_95.add_attribute("Sym", "UnderlyingSymbol_t_672011325"); // 2
      Undly_95_set.insert("UnderlyingSymbol_t_672011325");
      Undly_95.add_attribute("Sfx", "CD"); // 2
      Undly_95_set.insert("CD");
      Undly_95.add_attribute("ID", "UnderlyingSecurityID_t_1205556323"); // 2
      Undly_95_set.insert("UnderlyingSecurityID_t_1205556323");
      Undly_95.add_attribute("Src", "M"); // 2
      Undly_95_set.insert("M");
      Undly_95.add_attribute("Prod", "8"); // 2
      Undly_95_set.insert("8");
      Undly_95.add_attribute("CFI", "UnderlyingCFICode_t_670913341"); // 2
      Undly_95_set.insert("UnderlyingCFICode_t_670913341");
      Undly_95.add_attribute("SecTyp", "DN"); // 2
      Undly_95_set.insert("DN");
      Undly_95.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_889723711"); // 2
      Undly_95_set.insert("UnderlyingSecuritySubType_t_889723711");
      Undly_95.add_attribute("MMY", "1007082683"); // 2
      Undly_95_set.insert("1007082683");
      Undly_95.add_attribute("Mat", "UnderlyingMaturityDate_t_133723342"); // 2
      Undly_95_set.insert("UnderlyingMaturityDate_t_133723342");
      Undly_95.add_attribute("MatTm", "1137554301"); // 2
      Undly_95_set.insert("1137554301");
      Undly_95.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1987537650"); // 2
      Undly_95_set.insert("UnderlyingCouponPaymentDate_t_1987537650");
      Undly_95.add_attribute("RestrctTyp", "MR"); // 2
      Undly_95_set.insert("MR");
      Undly_95.add_attribute("Snrty", "SD"); // 2
      Undly_95_set.insert("SD");
      Undly_95.add_attribute("NotlPctOut", "15576272.290000"); // 2
      Undly_95_set.insert("15576272.290000");
      Undly_95.add_attribute("OrigNotlPctOut", "12187269.640000"); // 2
      Undly_95_set.insert("12187269.640000");
      Undly_95.add_attribute("AttchPnt", "17985664.670000"); // 2
      Undly_95_set.insert("17985664.670000");
      Undly_95.add_attribute("DetchPnt", "13251621.060000"); // 2
      Undly_95_set.insert("13251621.060000");
      Undly_95.add_attribute("Issued", "UnderlyingIssueDate_t_1414293761"); // 2
      Undly_95_set.insert("UnderlyingIssueDate_t_1414293761");
      Undly_95.add_attribute("RepoCollSecTyp", "2138833728"); // 2
      Undly_95_set.insert("2138833728");
      Undly_95.add_attribute("RepoTrm", "1038486837"); // 2
      Undly_95_set.insert("1038486837");
      Undly_95.add_attribute("RepoRt", "1073894.960000"); // 2
      Undly_95_set.insert("1073894.960000");
      Undly_95.add_attribute("Fctr", "11552658.600000"); // 2
      Undly_95_set.insert("11552658.600000");
      Undly_95.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2115406355"); // 2
      Undly_95_set.insert("UnderlyingCreditRating_t_2115406355");
      Undly_95.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1015185422"); // 2
      Undly_95_set.insert("UnderlyingInstrRegistry_t_1015185422");
      Undly_95.add_attribute("Ctry", "818199792"); // 2
      Undly_95_set.insert("818199792");
      Undly_95.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1992584640"); // 2
      Undly_95_set.insert("UnderlyingStateOrProvinceOfIssue_t_1992584640");
      Undly_95.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_665726384"); // 2
      Undly_95_set.insert("UnderlyingLocaleOfIssue_t_665726384");
      Undly_95.add_attribute("Redeem", "UnderlyingRedemptionDate_t_953920751"); // 2
      Undly_95_set.insert("UnderlyingRedemptionDate_t_953920751");
      Undly_95.add_attribute("StrkPx", "92194.800000"); // 2
      Undly_95_set.insert("92194.800000");
      Undly_95.add_attribute("StrkCcy", "GBP"); // 2
      Undly_95_set.insert("GBP");
      Undly_95.add_attribute("OptA", "1877146155"); // 2
      Undly_95_set.insert("1877146155");
      Undly_95.add_attribute("Mult", "4565533.810000"); // 2
      Undly_95_set.insert("4565533.810000");
      Undly_95.add_attribute("MultTyp", "2"); // 2
      Undly_95_set.insert("2");
      Undly_95.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_95_set.insert("1");
      Undly_95.add_attribute("UOM", "tn"); // 2
      Undly_95_set.insert("tn");
      Undly_95.add_attribute("UOMQty", "4146315.660000"); // 2
      Undly_95_set.insert("4146315.660000");
      Undly_95.add_attribute("PxUOM", "lbs"); // 2
      Undly_95_set.insert("lbs");
      Undly_95.add_attribute("PxUOMQty", "21345494.050000"); // 2
      Undly_95_set.insert("21345494.050000");
      Undly_95.add_attribute("TmUnit", "D"); // 2
      Undly_95_set.insert("D");
      Undly_95.add_attribute("ExerStyle", "1"); // 2
      Undly_95_set.insert("1");
      Undly_95.add_attribute("CpnRt", "19746034.080000"); // 2
      Undly_95_set.insert("19746034.080000");
      Undly_95.add_attribute("Exch", "UnderlyingSecurityExchange_t_1392142957"); // 2
      Undly_95_set.insert("UnderlyingSecurityExchange_t_1392142957");
      Undly_95.add_attribute("Issr", "UnderlyingIssuer_t_594558299"); // 2
      Undly_95_set.insert("UnderlyingIssuer_t_594558299");
      Undly_95.add_attribute("EncUndIssrLen", "1384746989"); // 2
      Undly_95_set.insert("1384746989");
      Undly_95.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_463386273"); // 2
      Undly_95_set.insert("EncodedUnderlyingIssuer_t_463386273");
      Undly_95.add_attribute("Desc", "UnderlyingSecurityDesc_t_245641118"); // 2
      Undly_95_set.insert("UnderlyingSecurityDesc_t_245641118");
      Undly_95.add_attribute("EncUndSecDescLen", "562425447"); // 2
      Undly_95_set.insert("562425447");
      Undly_95.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1877680035"); // 2
      Undly_95_set.insert("EncodedUnderlyingSecurityDesc_t_1877680035");
      Undly_95.add_attribute("CPPgm", "UnderlyingCPProgram_t_236991199"); // 2
      Undly_95_set.insert("UnderlyingCPProgram_t_236991199");
      Undly_95.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1600912285"); // 2
      Undly_95_set.insert("UnderlyingCPRegType_t_1600912285");
      Undly_95.add_attribute("AllocPct", "19850695.310000"); // 2
      Undly_95_set.insert("19850695.310000");
      Undly_95.add_attribute("Ccy", "JPY"); // 2
      Undly_95_set.insert("JPY");
      Undly_95.add_attribute("Qty", "8527713.050000"); // 2
      Undly_95_set.insert("8527713.050000");
      Undly_95.add_attribute("SettlTyp", "2"); // 2
      Undly_95_set.insert("2");
      Undly_95.add_attribute("CashAmt", "UnderlyingCashAmount_t_1413935984"); // 2
      Undly_95_set.insert("UnderlyingCashAmount_t_1413935984");
      Undly_95.add_attribute("CashTyp", "DIFF"); // 2
      Undly_95_set.insert("DIFF");
      Undly_95.add_attribute("Px", "10168939.550000"); // 2
      Undly_95_set.insert("10168939.550000");
      Undly_95.add_attribute("DirtPx", "14231554.650000"); // 2
      Undly_95_set.insert("14231554.650000");
      Undly_95.add_attribute("EndPx", "7694947.470000"); // 2
      Undly_95_set.insert("7694947.470000");
      Undly_95.add_attribute("StartVal", "UnderlyingStartValue_t_495342383"); // 2
      Undly_95_set.insert("UnderlyingStartValue_t_495342383");
      Undly_95.add_attribute("CurVal", "UnderlyingCurrentValue_t_1152817972"); // 2
      Undly_95_set.insert("UnderlyingCurrentValue_t_1152817972");
      Undly_95.add_attribute("EndVal", "UnderlyingEndValue_t_1226048128"); // 2
      Undly_95_set.insert("UnderlyingEndValue_t_1226048128");
      Undly_95.add_attribute("AdjQty", "2409470.840000"); // 2
      Undly_95_set.insert("2409470.840000");
      Undly_95.add_attribute("FxRate", "938056.050000"); // 2
      Undly_95_set.insert("938056.050000");
      Undly_95.add_attribute("FxRateCalc", "M"); // 2
      Undly_95_set.insert("M");
      Undly_95.add_attribute("CapValu", "UnderlyingCapValue_t_655578650"); // 2
      Undly_95_set.insert("UnderlyingCapValue_t_655578650");
      Undly_95.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2072000598"); // 2
      Undly_95_set.insert("UnderlyingSettlMethod_t_2072000598");
      Undly_95.add_attribute("PutCall", "193096960"); // 2
      Undly_95_set.insert("193096960");
      all_values.push_back(Undly_95_set);
      all_compo_names.insert("Undly_95_set");

      {
        xml_element UndAID_95{"UndAID"};
        multiset<string> UndAID_95_set;
        UndAID_95.add_attribute("AltID", "UnderlyingSecurityAltID_t_1203933558"); // 3
        UndAID_95_set.insert("UnderlyingSecurityAltID_t_1203933558");
        UndAID_95.add_attribute("AltIDSrc", "3"); // 3
        UndAID_95_set.insert("3");
        all_values.push_back(UndAID_95_set);
        all_compo_names.insert("UndAID_95_set");

        Undly_95.add_element(UndAID_95);
      }
      {
        xml_element Stip_151{"Stip"};
        multiset<string> Stip_151_set;
        Stip_151.add_attribute("Typ", "ABS"); // 3
        Stip_151_set.insert("ABS");
        Stip_151.add_attribute("Val", "UnderlyingStipValue_t_448592867"); // 3
        Stip_151_set.insert("UnderlyingStipValue_t_448592867");
        all_values.push_back(Stip_151_set);
        all_compo_names.insert("Stip_151_set");

        Undly_95.add_element(Stip_151);
      }
      {
        xml_element Pty_380{"Pty"};
        multiset<string> Pty_380_set;
        Pty_380.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1487340895"); // 3
        Pty_380_set.insert("UnderlyingInstrumentPartyID_t_1487340895");
        Pty_380.add_attribute("Src", "8"); // 3
        Pty_380_set.insert("8");
        Pty_380.add_attribute("R", "48"); // 3
        Pty_380_set.insert("48");
        all_values.push_back(Pty_380_set);
        all_compo_names.insert("Pty_380_set");

        {
          xml_element Sub_380{"Sub"};
          multiset<string> Sub_380_set;
          Sub_380.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1732982013"); // 4
          Sub_380_set.insert("UnderlyingInstrumentPartySubID_t_1732982013");
          Sub_380.add_attribute("Typ", "17"); // 4
          Sub_380_set.insert("17");
          all_values.push_back(Sub_380_set);
          all_compo_names.insert("Sub_380_set");

          Pty_380.add_element(Sub_380);
        }
        Undly_95.add_element(Pty_380);
      }
      RFQReq_0.add_element(Undly_95);
    }
    {
      xml_element Leg_85{"Leg"};
      multiset<string> Leg_85_set;
      Leg_85.add_attribute("Sym", "LegSymbol_t_642175528"); // 2
      Leg_85_set.insert("LegSymbol_t_642175528");
      Leg_85.add_attribute("Sfx", "CD"); // 2
      Leg_85_set.insert("CD");
      Leg_85.add_attribute("ID", "LegSecurityID_t_1420817794"); // 2
      Leg_85_set.insert("LegSecurityID_t_1420817794");
      Leg_85.add_attribute("Src", "L"); // 2
      Leg_85_set.insert("L");
      Leg_85.add_attribute("Prod", "1"); // 2
      Leg_85_set.insert("1");
      Leg_85.add_attribute("CFI", "LegCFICode_t_842169138"); // 2
      Leg_85_set.insert("LegCFICode_t_842169138");
      Leg_85.add_attribute("SecTyp", "CP"); // 2
      Leg_85_set.insert("CP");
      Leg_85.add_attribute("SecSubTyp", "LegSecuritySubType_t_1277719828"); // 2
      Leg_85_set.insert("LegSecuritySubType_t_1277719828");
      Leg_85.add_attribute("MMY", "108621474"); // 2
      Leg_85_set.insert("108621474");
      Leg_85.add_attribute("Mat", "LegMaturityDate_t_703546758"); // 2
      Leg_85_set.insert("LegMaturityDate_t_703546758");
      Leg_85.add_attribute("MatTm", "147130135"); // 2
      Leg_85_set.insert("147130135");
      Leg_85.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1531776939"); // 2
      Leg_85_set.insert("LegCouponPaymentDate_t_1531776939");
      Leg_85.add_attribute("Issued", "LegIssueDate_t_1473041506"); // 2
      Leg_85_set.insert("LegIssueDate_t_1473041506");
      Leg_85.add_attribute("RepoCollSecTyp", "642472518"); // 2
      Leg_85_set.insert("642472518");
      Leg_85.add_attribute("RepoTrm", "537111263"); // 2
      Leg_85_set.insert("537111263");
      Leg_85.add_attribute("RepoRt", "5516059.860000"); // 2
      Leg_85_set.insert("5516059.860000");
      Leg_85.add_attribute("Fctr", "8834196.020000"); // 2
      Leg_85_set.insert("8834196.020000");
      Leg_85.add_attribute("CrdRtg", "LegCreditRating_t_630916869"); // 2
      Leg_85_set.insert("LegCreditRating_t_630916869");
      Leg_85.add_attribute("Rgstry", "LegInstrRegistry_t_757637189"); // 2
      Leg_85_set.insert("LegInstrRegistry_t_757637189");
      Leg_85.add_attribute("Ctry", "1538998253"); // 2
      Leg_85_set.insert("1538998253");
      Leg_85.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_555433819"); // 2
      Leg_85_set.insert("LegStateOrProvinceOfIssue_t_555433819");
      Leg_85.add_attribute("Lcl", "LegLocaleOfIssue_t_950734149"); // 2
      Leg_85_set.insert("LegLocaleOfIssue_t_950734149");
      Leg_85.add_attribute("Redeem", "LegRedemptionDate_t_595448163"); // 2
      Leg_85_set.insert("LegRedemptionDate_t_595448163");
      Leg_85.add_attribute("Strk", "14482164.150000"); // 2
      Leg_85_set.insert("14482164.150000");
      Leg_85.add_attribute("StrkCcy", "CHF"); // 2
      Leg_85_set.insert("CHF");
      Leg_85.add_attribute("OptA", "788073662"); // 2
      Leg_85_set.insert("788073662");
      Leg_85.add_attribute("Cmult", "2284309.300000"); // 2
      Leg_85_set.insert("2284309.300000");
      Leg_85.add_attribute("MultTyp", "0"); // 2
      Leg_85_set.insert("0");
      Leg_85.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_85_set.insert("2");
      Leg_85.add_attribute("UOM", "oz_tr"); // 2
      Leg_85_set.insert("oz_tr");
      Leg_85.add_attribute("UOMQty", "4507120.520000"); // 2
      Leg_85_set.insert("4507120.520000");
      Leg_85.add_attribute("PxUOM", "Alw"); // 2
      Leg_85_set.insert("Alw");
      Leg_85.add_attribute("PxUOMQty", "14691542.330000"); // 2
      Leg_85_set.insert("14691542.330000");
      Leg_85.add_attribute("TmUnit", "D"); // 2
      Leg_85_set.insert("D");
      Leg_85.add_attribute("ExerStyle", "1"); // 2
      Leg_85_set.insert("1");
      Leg_85.add_attribute("CpnRt", "1638397.230000"); // 2
      Leg_85_set.insert("1638397.230000");
      Leg_85.add_attribute("Exch", "LegSecurityExchange_t_115522532"); // 2
      Leg_85_set.insert("LegSecurityExchange_t_115522532");
      Leg_85.add_attribute("Issr", "LegIssuer_t_541044396"); // 2
      Leg_85_set.insert("LegIssuer_t_541044396");
      Leg_85.add_attribute("EncLegIssrLen", "272461198"); // 2
      Leg_85_set.insert("272461198");
      Leg_85.add_attribute("EncLegIssr", "EncodedLegIssuer_t_819069291"); // 2
      Leg_85_set.insert("EncodedLegIssuer_t_819069291");
      Leg_85.add_attribute("Desc", "LegSecurityDesc_t_688174531"); // 2
      Leg_85_set.insert("LegSecurityDesc_t_688174531");
      Leg_85.add_attribute("EncLegSecDescLen", "1804238137"); // 2
      Leg_85_set.insert("1804238137");
      Leg_85.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_144627149"); // 2
      Leg_85_set.insert("EncodedLegSecurityDesc_t_144627149");
      Leg_85.add_attribute("RatioQty", "13306470.490000"); // 2
      Leg_85_set.insert("13306470.490000");
      Leg_85.add_attribute("Side", "A"); // 2
      Leg_85_set.insert("A");
      Leg_85.add_attribute("Ccy", "EUR"); // 2
      Leg_85_set.insert("EUR");
      Leg_85.add_attribute("Pool", "LegPool_t_824782622"); // 2
      Leg_85_set.insert("LegPool_t_824782622");
      Leg_85.add_attribute("Dated", "LegDatedDate_t_1453870324"); // 2
      Leg_85_set.insert("LegDatedDate_t_1453870324");
      Leg_85.add_attribute("CSetMo", "1605581256"); // 2
      Leg_85_set.insert("1605581256");
      Leg_85.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1380216441"); // 2
      Leg_85_set.insert("LegInterestAccrualDate_t_1380216441");
      Leg_85.add_attribute("PutCall", "257120825"); // 2
      Leg_85_set.insert("257120825");
      Leg_85.add_attribute("LegOptionRatio", "535457.720000"); // 2
      Leg_85_set.insert("535457.720000");
      Leg_85.add_attribute("Px", "6809492.080000"); // 2
      Leg_85_set.insert("6809492.080000");
      all_values.push_back(Leg_85_set);
      all_compo_names.insert("Leg_85_set");

      {
        xml_element LegAID_80{"LegAID"};
        multiset<string> LegAID_80_set;
        LegAID_80.add_attribute("SecAltID", "LegSecurityAltID_t_1228071694"); // 3
        LegAID_80_set.insert("LegSecurityAltID_t_1228071694");
        LegAID_80.add_attribute("SecAltIDSrc", "6"); // 3
        LegAID_80_set.insert("6");
        all_values.push_back(LegAID_80_set);
        all_compo_names.insert("LegAID_80_set");

        Leg_85.add_element(LegAID_80);
      }
      RFQReq_0.add_element(Leg_85);
    }
    elt.add_element(RFQReq_0);
  } // end RFQReq
  { // RFQReq
    xml_element RFQReq_1{"RFQReq"};
    multiset<string> RFQReq_1_set;
    RFQReq_1.add_attribute("PrevClsPx", "14690228.700000"); // 1
    RFQReq_1_set.insert("14690228.700000");
    RFQReq_1.add_attribute("ReqTyp", "2"); // 1
    RFQReq_1_set.insert("2");
    RFQReq_1.add_attribute("Typ", "3"); // 1
    RFQReq_1_set.insert("3");
    RFQReq_1.add_attribute("SesID", "4"); // 1
    RFQReq_1_set.insert("4");
    RFQReq_1.add_attribute("SesSub", "2"); // 1
    RFQReq_1_set.insert("2");
    all_values.push_back(RFQReq_1_set);
    all_compo_names.insert("RFQReq_1_set");

    {
      xml_element Instrmt_70{"Instrmt"};
      multiset<string> Instrmt_70_set;
      Instrmt_70.add_attribute("Sym", "Symbol_t_1356835379"); // 2
      Instrmt_70_set.insert("Symbol_t_1356835379");
      Instrmt_70.add_attribute("Sfx", "WI"); // 2
      Instrmt_70_set.insert("WI");
      Instrmt_70.add_attribute("ID", "SecurityID_t_826509650"); // 2
      Instrmt_70_set.insert("SecurityID_t_826509650");
      Instrmt_70.add_attribute("Src", "F"); // 2
      Instrmt_70_set.insert("F");
      Instrmt_70.add_attribute("Prod", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("ProdCmplx", "ProductComplex_t_990349373"); // 2
      Instrmt_70_set.insert("ProductComplex_t_990349373");
      Instrmt_70.add_attribute("SecGrp", "SecurityGroup_t_255347727"); // 2
      Instrmt_70_set.insert("SecurityGroup_t_255347727");
      Instrmt_70.add_attribute("CFI", "CFICode_t_1843025453"); // 2
      Instrmt_70_set.insert("CFICode_t_1843025453");
      Instrmt_70.add_attribute("SecTyp", "RETIRED"); // 2
      Instrmt_70_set.insert("RETIRED");
      Instrmt_70.add_attribute("SubTyp", "SecuritySubType_t_1074417018"); // 2
      Instrmt_70_set.insert("SecuritySubType_t_1074417018");
      Instrmt_70.add_attribute("MMY", "383716336"); // 2
      Instrmt_70_set.insert("383716336");
      Instrmt_70.add_attribute("MatDt", "MaturityDate_t_919565061"); // 2
      Instrmt_70_set.insert("MaturityDate_t_919565061");
      Instrmt_70.add_attribute("MatTm", "1219044167"); // 2
      Instrmt_70_set.insert("1219044167");
      Instrmt_70.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1714363385"); // 2
      Instrmt_70_set.insert("SettleOnOpenFlag_t_1714363385");
      Instrmt_70.add_attribute("AsgnMeth", "1113430814"); // 2
      Instrmt_70_set.insert("1113430814");
      Instrmt_70.add_attribute("Status", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("CpnPmt", "CouponPaymentDate_t_1780946389"); // 2
      Instrmt_70_set.insert("CouponPaymentDate_t_1780946389");
      Instrmt_70.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_70_set.insert("FR");
      Instrmt_70.add_attribute("Snrty", "SR"); // 2
      Instrmt_70_set.insert("SR");
      Instrmt_70.add_attribute("NotlPctOut", "12390439.970000"); // 2
      Instrmt_70_set.insert("12390439.970000");
      Instrmt_70.add_attribute("OrigNotlPctOut", "11709462.290000"); // 2
      Instrmt_70_set.insert("11709462.290000");
      Instrmt_70.add_attribute("AttchPnt", "14787848.040000"); // 2
      Instrmt_70_set.insert("14787848.040000");
      Instrmt_70.add_attribute("DetchPnt", "12925897.690000"); // 2
      Instrmt_70_set.insert("12925897.690000");
      Instrmt_70.add_attribute("Issued", "IssueDate_t_1851895437"); // 2
      Instrmt_70_set.insert("IssueDate_t_1851895437");
      Instrmt_70.add_attribute("RepoCollSecTyp", "559372851"); // 2
      Instrmt_70_set.insert("559372851");
      Instrmt_70.add_attribute("RepoTrm", "242692924"); // 2
      Instrmt_70_set.insert("242692924");
      Instrmt_70.add_attribute("RepoRt", "11734346.590000"); // 2
      Instrmt_70_set.insert("11734346.590000");
      Instrmt_70.add_attribute("Fctr", "20158754.760000"); // 2
      Instrmt_70_set.insert("20158754.760000");
      Instrmt_70.add_attribute("CrdRtg", "CreditRating_t_1148816251"); // 2
      Instrmt_70_set.insert("CreditRating_t_1148816251");
      Instrmt_70.add_attribute("Rgstry", "InstrRegistry_t_868545908"); // 2
      Instrmt_70_set.insert("InstrRegistry_t_868545908");
      Instrmt_70.add_attribute("IssuCtry", "1373230892"); // 2
      Instrmt_70_set.insert("1373230892");
      Instrmt_70.add_attribute("StPrv", "StateOrProvinceOfIssue_t_358167982"); // 2
      Instrmt_70_set.insert("StateOrProvinceOfIssue_t_358167982");
      Instrmt_70.add_attribute("Lcl", "LocaleOfIssue_t_759718750"); // 2
      Instrmt_70_set.insert("LocaleOfIssue_t_759718750");
      Instrmt_70.add_attribute("Redeem", "RedemptionDate_t_52256894"); // 2
      Instrmt_70_set.insert("RedemptionDate_t_52256894");
      Instrmt_70.add_attribute("StrkPx", "4979931.770000"); // 2
      Instrmt_70_set.insert("4979931.770000");
      Instrmt_70.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_70_set.insert("GBP");
      Instrmt_70.add_attribute("StrkMult", "7533409.040000"); // 2
      Instrmt_70_set.insert("7533409.040000");
      Instrmt_70.add_attribute("StrkValu", "17572416.130000"); // 2
      Instrmt_70_set.insert("17572416.130000");
      Instrmt_70.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_70_set.insert("4");
      Instrmt_70.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_70_set.insert("3");
      Instrmt_70.add_attribute("StrkPxBndryPrcsn", "21409579.490000"); // 2
      Instrmt_70_set.insert("21409579.490000");
      Instrmt_70.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("OptAt", "899318441"); // 2
      Instrmt_70_set.insert("899318441");
      Instrmt_70.add_attribute("Mult", "17078376.870000"); // 2
      Instrmt_70_set.insert("17078376.870000");
      Instrmt_70.add_attribute("MultTyp", "0"); // 2
      Instrmt_70_set.insert("0");
      Instrmt_70.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_70_set.insert("0");
      Instrmt_70.add_attribute("MinPxIncr", "13413004.280000"); // 2
      Instrmt_70_set.insert("13413004.280000");
      Instrmt_70.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1981658854"); // 2
      Instrmt_70_set.insert("MinPriceIncrementAmount_t_1981658854");
      Instrmt_70.add_attribute("UOM", "Gal"); // 2
      Instrmt_70_set.insert("Gal");
      Instrmt_70.add_attribute("UOMQty", "4328607.770000"); // 2
      Instrmt_70_set.insert("4328607.770000");
      Instrmt_70.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_70_set.insert("MMbbl");
      Instrmt_70.add_attribute("PxUOMQty", "12200772.310000"); // 2
      Instrmt_70_set.insert("12200772.310000");
      Instrmt_70.add_attribute("SettlMeth", "P"); // 2
      Instrmt_70_set.insert("P");
      Instrmt_70.add_attribute("ExerStyle", "2"); // 2
      Instrmt_70_set.insert("2");
      Instrmt_70.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_70_set.insert("2");
      Instrmt_70.add_attribute("OptPayAmt", "OptPayoutAmount_t_1968143471"); // 2
      Instrmt_70_set.insert("OptPayoutAmount_t_1968143471");
      Instrmt_70.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_70_set.insert("PCTPAR");
      Instrmt_70.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_70_set.insert("EQTY");
      Instrmt_70.add_attribute("ListMeth", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("CapPx", "6040301.440000"); // 2
      Instrmt_70_set.insert("6040301.440000");
      Instrmt_70.add_attribute("FlrPx", "8735891.540000"); // 2
      Instrmt_70_set.insert("8735891.540000");
      Instrmt_70.add_attribute("PutCall", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("FlexInd", "true"); // 2
      Instrmt_70_set.insert("true");
      Instrmt_70.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_70_set.insert("false");
      Instrmt_70.add_attribute("TmUnit", "Min"); // 2
      Instrmt_70_set.insert("Min");
      Instrmt_70.add_attribute("CpnRt", "12779650.530000"); // 2
      Instrmt_70_set.insert("12779650.530000");
      Instrmt_70.add_attribute("Exch", "SecurityExchange_t_1968452317"); // 2
      Instrmt_70_set.insert("SecurityExchange_t_1968452317");
      Instrmt_70.add_attribute("PosLmt", "431494490"); // 2
      Instrmt_70_set.insert("431494490");
      Instrmt_70.add_attribute("NTPosLmt", "887723018"); // 2
      Instrmt_70_set.insert("887723018");
      Instrmt_70.add_attribute("Issr", "Issuer_t_2126385508"); // 2
      Instrmt_70_set.insert("Issuer_t_2126385508");
      Instrmt_70.add_attribute("EncIssrLen", "111768764"); // 2
      Instrmt_70_set.insert("111768764");
      Instrmt_70.add_attribute("EncIssr", "EncodedIssuer_t_881197320"); // 2
      Instrmt_70_set.insert("EncodedIssuer_t_881197320");
      Instrmt_70.add_attribute("Desc", "SecurityDesc_t_1056400113"); // 2
      Instrmt_70_set.insert("SecurityDesc_t_1056400113");
      Instrmt_70.add_attribute("EncSecDescLen", "1011087205"); // 2
      Instrmt_70_set.insert("1011087205");
      Instrmt_70.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_441551359"); // 2
      Instrmt_70_set.insert("EncodedSecurityDesc_t_441551359");
      Instrmt_70.add_attribute("Pool", "Pool_t_1099845531"); // 2
      Instrmt_70_set.insert("Pool_t_1099845531");
      Instrmt_70.add_attribute("CSetMo", "1678199301"); // 2
      Instrmt_70_set.insert("1678199301");
      Instrmt_70.add_attribute("CPPgm", "1"); // 2
      Instrmt_70_set.insert("1");
      Instrmt_70.add_attribute("CPRegT", "CPRegType_t_934020738"); // 2
      Instrmt_70_set.insert("CPRegType_t_934020738");
      Instrmt_70.add_attribute("Dated", "DatedDate_t_1419491727"); // 2
      Instrmt_70_set.insert("DatedDate_t_1419491727");
      Instrmt_70.add_attribute("IntAcrl", "InterestAccrualDate_t_68228916"); // 2
      Instrmt_70_set.insert("InterestAccrualDate_t_68228916");
      all_values.push_back(Instrmt_70_set);
      all_compo_names.insert("Instrmt_70_set");

      {
        xml_element AID_73{"AID"};
        multiset<string> AID_73_set;
        AID_73.add_attribute("AltID", "SecurityAltID_t_1939142173"); // 3
        AID_73_set.insert("SecurityAltID_t_1939142173");
        AID_73.add_attribute("AltIDSrc", "3"); // 3
        AID_73_set.insert("3");
        all_values.push_back(AID_73_set);
        all_compo_names.insert("AID_73_set");

        Instrmt_70.add_element(AID_73);
      }
      {
        xml_element SecXML_73{"SecXML"};
        multiset<string> SecXML_73_set;
        SecXML_73.add_attribute("Schema", "SecurityXMLSchema_t_1793679463"); // 3
        SecXML_73_set.insert("SecurityXMLSchema_t_1793679463");
        all_values.push_back(SecXML_73_set);
        all_compo_names.insert("SecXML_73_set");

        Instrmt_70.add_element(SecXML_73);
      }
      {
        xml_element Evnt_73{"Evnt"};
        multiset<string> Evnt_73_set;
        Evnt_73.add_attribute("EventTyp", "11"); // 3
        Evnt_73_set.insert("11");
        Evnt_73.add_attribute("Dt", "EventDate_t_124051744"); // 3
        Evnt_73_set.insert("EventDate_t_124051744");
        Evnt_73.add_attribute("Tm", "EventTime_t_1614339287"); // 3
        Evnt_73_set.insert("EventTime_t_1614339287");
        Evnt_73.add_attribute("Px", "2366759.850000"); // 3
        Evnt_73_set.insert("2366759.850000");
        Evnt_73.add_attribute("Txt", "EventText_t_1771893654"); // 3
        Evnt_73_set.insert("EventText_t_1771893654");
        all_values.push_back(Evnt_73_set);
        all_compo_names.insert("Evnt_73_set");

        Instrmt_70.add_element(Evnt_73);
      }
      {
        xml_element Pty_381{"Pty"};
        multiset<string> Pty_381_set;
        Pty_381.add_attribute("ID", "InstrumentPartyID_t_436331714"); // 3
        Pty_381_set.insert("InstrumentPartyID_t_436331714");
        Pty_381.add_attribute("Src", "2"); // 3
        Pty_381_set.insert("2");
        Pty_381.add_attribute("R", "60"); // 3
        Pty_381_set.insert("60");
        all_values.push_back(Pty_381_set);
        all_compo_names.insert("Pty_381_set");

        {
          xml_element Sub_381{"Sub"};
          multiset<string> Sub_381_set;
          Sub_381.add_attribute("ID", "InstrumentPartySubID_t_1763975771"); // 4
          Sub_381_set.insert("InstrumentPartySubID_t_1763975771");
          Sub_381.add_attribute("Typ", "19"); // 4
          Sub_381_set.insert("19");
          all_values.push_back(Sub_381_set);
          all_compo_names.insert("Sub_381_set");

          Pty_381.add_element(Sub_381);
        }
        Instrmt_70.add_element(Pty_381);
      }
      {
        xml_element CmplxEvnt_70{"CmplxEvnt"};
        multiset<string> CmplxEvnt_70_set;
        CmplxEvnt_70.add_attribute("Typ", "4"); // 3
        CmplxEvnt_70_set.insert("4");
        CmplxEvnt_70.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1442129358"); // 3
        CmplxEvnt_70_set.insert("ComplexOptPayoutAmount_t_1442129358");
        CmplxEvnt_70.add_attribute("Px", "13349364.290000"); // 3
        CmplxEvnt_70_set.insert("13349364.290000");
        CmplxEvnt_70.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_70_set.insert("5");
        CmplxEvnt_70.add_attribute("PxBndryPrcsn", "18736238.480000"); // 3
        CmplxEvnt_70_set.insert("18736238.480000");
        CmplxEvnt_70.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_70_set.insert("3");
        CmplxEvnt_70.add_attribute("Cond", "2"); // 3
        CmplxEvnt_70_set.insert("2");
        all_values.push_back(CmplxEvnt_70_set);
        all_compo_names.insert("CmplxEvnt_70_set");

        {
          xml_element EvntDts_70{"EvntDts"};
          multiset<string> EvntDts_70_set;
          EvntDts_70.add_attribute("StartDt", "ComplexEventStartDate_t_1985392613"); // 4
          EvntDts_70_set.insert("ComplexEventStartDate_t_1985392613");
          EvntDts_70.add_attribute("EndDt", "ComplexEventEndDate_t_956373119"); // 4
          EvntDts_70_set.insert("ComplexEventEndDate_t_956373119");
          all_values.push_back(EvntDts_70_set);
          all_compo_names.insert("EvntDts_70_set");

          {
            xml_element EvntTms_70{"EvntTms"};
            multiset<string> EvntTms_70_set;
            EvntTms_70.add_attribute("StartTm", "132632204"); // 5
            EvntTms_70_set.insert("132632204");
            EvntTms_70.add_attribute("EndTm", "848996170"); // 5
            EvntTms_70_set.insert("848996170");
            all_values.push_back(EvntTms_70_set);
            all_compo_names.insert("EvntTms_70_set");

            EvntDts_70.add_element(EvntTms_70);
          }
          CmplxEvnt_70.add_element(EvntDts_70);
        }
        Instrmt_70.add_element(CmplxEvnt_70);
      }
      RFQReq_1.add_element(Instrmt_70);
    }
    {
      xml_element Undly_96{"Undly"};
      multiset<string> Undly_96_set;
      Undly_96.add_attribute("Sym", "UnderlyingSymbol_t_1397924478"); // 2
      Undly_96_set.insert("UnderlyingSymbol_t_1397924478");
      Undly_96.add_attribute("Sfx", "CD"); // 2
      Undly_96_set.insert("CD");
      Undly_96.add_attribute("ID", "UnderlyingSecurityID_t_379711823"); // 2
      Undly_96_set.insert("UnderlyingSecurityID_t_379711823");
      Undly_96.add_attribute("Src", "6"); // 2
      Undly_96_set.insert("6");
      Undly_96.add_attribute("Prod", "9"); // 2
      Undly_96_set.insert("9");
      Undly_96.add_attribute("CFI", "UnderlyingCFICode_t_1799203551"); // 2
      Undly_96_set.insert("UnderlyingCFICode_t_1799203551");
      Undly_96.add_attribute("SecTyp", "FADN"); // 2
      Undly_96_set.insert("FADN");
      Undly_96.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1958156999"); // 2
      Undly_96_set.insert("UnderlyingSecuritySubType_t_1958156999");
      Undly_96.add_attribute("MMY", "143805213"); // 2
      Undly_96_set.insert("143805213");
      Undly_96.add_attribute("Mat", "UnderlyingMaturityDate_t_747717349"); // 2
      Undly_96_set.insert("UnderlyingMaturityDate_t_747717349");
      Undly_96.add_attribute("MatTm", "311865101"); // 2
      Undly_96_set.insert("311865101");
      Undly_96.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_267856958"); // 2
      Undly_96_set.insert("UnderlyingCouponPaymentDate_t_267856958");
      Undly_96.add_attribute("RestrctTyp", "FR"); // 2
      Undly_96_set.insert("FR");
      Undly_96.add_attribute("Snrty", "SD"); // 2
      Undly_96_set.insert("SD");
      Undly_96.add_attribute("NotlPctOut", "20397506.120000"); // 2
      Undly_96_set.insert("20397506.120000");
      Undly_96.add_attribute("OrigNotlPctOut", "6509047.020000"); // 2
      Undly_96_set.insert("6509047.020000");
      Undly_96.add_attribute("AttchPnt", "13892472.160000"); // 2
      Undly_96_set.insert("13892472.160000");
      Undly_96.add_attribute("DetchPnt", "3902661.250000"); // 2
      Undly_96_set.insert("3902661.250000");
      Undly_96.add_attribute("Issued", "UnderlyingIssueDate_t_267396826"); // 2
      Undly_96_set.insert("UnderlyingIssueDate_t_267396826");
      Undly_96.add_attribute("RepoCollSecTyp", "1446218592"); // 2
      Undly_96_set.insert("1446218592");
      Undly_96.add_attribute("RepoTrm", "1814111335"); // 2
      Undly_96_set.insert("1814111335");
      Undly_96.add_attribute("RepoRt", "17095261.840000"); // 2
      Undly_96_set.insert("17095261.840000");
      Undly_96.add_attribute("Fctr", "6336713.730000"); // 2
      Undly_96_set.insert("6336713.730000");
      Undly_96.add_attribute("CrdRtg", "UnderlyingCreditRating_t_911441566"); // 2
      Undly_96_set.insert("UnderlyingCreditRating_t_911441566");
      Undly_96.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1435666384"); // 2
      Undly_96_set.insert("UnderlyingInstrRegistry_t_1435666384");
      Undly_96.add_attribute("Ctry", "708847172"); // 2
      Undly_96_set.insert("708847172");
      Undly_96.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2135157306"); // 2
      Undly_96_set.insert("UnderlyingStateOrProvinceOfIssue_t_2135157306");
      Undly_96.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1273575349"); // 2
      Undly_96_set.insert("UnderlyingLocaleOfIssue_t_1273575349");
      Undly_96.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1665220292"); // 2
      Undly_96_set.insert("UnderlyingRedemptionDate_t_1665220292");
      Undly_96.add_attribute("StrkPx", "1203058.620000"); // 2
      Undly_96_set.insert("1203058.620000");
      Undly_96.add_attribute("StrkCcy", "USD"); // 2
      Undly_96_set.insert("USD");
      Undly_96.add_attribute("OptA", "1352783598"); // 2
      Undly_96_set.insert("1352783598");
      Undly_96.add_attribute("Mult", "3547996.950000"); // 2
      Undly_96_set.insert("3547996.950000");
      Undly_96.add_attribute("MultTyp", "2"); // 2
      Undly_96_set.insert("2");
      Undly_96.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_96_set.insert("4");
      Undly_96.add_attribute("UOM", "lbs"); // 2
      Undly_96_set.insert("lbs");
      Undly_96.add_attribute("UOMQty", "9029916.260000"); // 2
      Undly_96_set.insert("9029916.260000");
      Undly_96.add_attribute("PxUOM", "tn"); // 2
      Undly_96_set.insert("tn");
      Undly_96.add_attribute("PxUOMQty", "1503248.120000"); // 2
      Undly_96_set.insert("1503248.120000");
      Undly_96.add_attribute("TmUnit", "Yr"); // 2
      Undly_96_set.insert("Yr");
      Undly_96.add_attribute("ExerStyle", "1"); // 2
      Undly_96_set.insert("1");
      Undly_96.add_attribute("CpnRt", "4181817.700000"); // 2
      Undly_96_set.insert("4181817.700000");
      Undly_96.add_attribute("Exch", "UnderlyingSecurityExchange_t_1865281964"); // 2
      Undly_96_set.insert("UnderlyingSecurityExchange_t_1865281964");
      Undly_96.add_attribute("Issr", "UnderlyingIssuer_t_2042877964"); // 2
      Undly_96_set.insert("UnderlyingIssuer_t_2042877964");
      Undly_96.add_attribute("EncUndIssrLen", "310448734"); // 2
      Undly_96_set.insert("310448734");
      Undly_96.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_368703018"); // 2
      Undly_96_set.insert("EncodedUnderlyingIssuer_t_368703018");
      Undly_96.add_attribute("Desc", "UnderlyingSecurityDesc_t_1284641533"); // 2
      Undly_96_set.insert("UnderlyingSecurityDesc_t_1284641533");
      Undly_96.add_attribute("EncUndSecDescLen", "700714860"); // 2
      Undly_96_set.insert("700714860");
      Undly_96.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_636099844"); // 2
      Undly_96_set.insert("EncodedUnderlyingSecurityDesc_t_636099844");
      Undly_96.add_attribute("CPPgm", "UnderlyingCPProgram_t_583376477"); // 2
      Undly_96_set.insert("UnderlyingCPProgram_t_583376477");
      Undly_96.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_367342547"); // 2
      Undly_96_set.insert("UnderlyingCPRegType_t_367342547");
      Undly_96.add_attribute("AllocPct", "1981423.800000"); // 2
      Undly_96_set.insert("1981423.800000");
      Undly_96.add_attribute("Ccy", "JPY"); // 2
      Undly_96_set.insert("JPY");
      Undly_96.add_attribute("Qty", "16338087.650000"); // 2
      Undly_96_set.insert("16338087.650000");
      Undly_96.add_attribute("SettlTyp", "4"); // 2
      Undly_96_set.insert("4");
      Undly_96.add_attribute("CashAmt", "UnderlyingCashAmount_t_1266457772"); // 2
      Undly_96_set.insert("UnderlyingCashAmount_t_1266457772");
      Undly_96.add_attribute("CashTyp", "FIXED"); // 2
      Undly_96_set.insert("FIXED");
      Undly_96.add_attribute("Px", "14436316.660000"); // 2
      Undly_96_set.insert("14436316.660000");
      Undly_96.add_attribute("DirtPx", "13867636.340000"); // 2
      Undly_96_set.insert("13867636.340000");
      Undly_96.add_attribute("EndPx", "7349883.380000"); // 2
      Undly_96_set.insert("7349883.380000");
      Undly_96.add_attribute("StartVal", "UnderlyingStartValue_t_211809141"); // 2
      Undly_96_set.insert("UnderlyingStartValue_t_211809141");
      Undly_96.add_attribute("CurVal", "UnderlyingCurrentValue_t_592063585"); // 2
      Undly_96_set.insert("UnderlyingCurrentValue_t_592063585");
      Undly_96.add_attribute("EndVal", "UnderlyingEndValue_t_1089788034"); // 2
      Undly_96_set.insert("UnderlyingEndValue_t_1089788034");
      Undly_96.add_attribute("AdjQty", "132792.330000"); // 2
      Undly_96_set.insert("132792.330000");
      Undly_96.add_attribute("FxRate", "19638620.090000"); // 2
      Undly_96_set.insert("19638620.090000");
      Undly_96.add_attribute("FxRateCalc", "M"); // 2
      Undly_96_set.insert("M");
      Undly_96.add_attribute("CapValu", "UnderlyingCapValue_t_916270859"); // 2
      Undly_96_set.insert("UnderlyingCapValue_t_916270859");
      Undly_96.add_attribute("SetMeth", "UnderlyingSettlMethod_t_998850137"); // 2
      Undly_96_set.insert("UnderlyingSettlMethod_t_998850137");
      Undly_96.add_attribute("PutCall", "1246632444"); // 2
      Undly_96_set.insert("1246632444");
      all_values.push_back(Undly_96_set);
      all_compo_names.insert("Undly_96_set");

      {
        xml_element UndAID_96{"UndAID"};
        multiset<string> UndAID_96_set;
        UndAID_96.add_attribute("AltID", "UnderlyingSecurityAltID_t_419496186"); // 3
        UndAID_96_set.insert("UnderlyingSecurityAltID_t_419496186");
        UndAID_96.add_attribute("AltIDSrc", "A"); // 3
        UndAID_96_set.insert("A");
        all_values.push_back(UndAID_96_set);
        all_compo_names.insert("UndAID_96_set");

        Undly_96.add_element(UndAID_96);
      }
      {
        xml_element Stip_152{"Stip"};
        multiset<string> Stip_152_set;
        Stip_152.add_attribute("Typ", "WAC"); // 3
        Stip_152_set.insert("WAC");
        Stip_152.add_attribute("Val", "UnderlyingStipValue_t_137294502"); // 3
        Stip_152_set.insert("UnderlyingStipValue_t_137294502");
        all_values.push_back(Stip_152_set);
        all_compo_names.insert("Stip_152_set");

        Undly_96.add_element(Stip_152);
      }
      {
        xml_element Pty_382{"Pty"};
        multiset<string> Pty_382_set;
        Pty_382.add_attribute("ID", "UnderlyingInstrumentPartyID_t_241097683"); // 3
        Pty_382_set.insert("UnderlyingInstrumentPartyID_t_241097683");
        Pty_382.add_attribute("Src", "A"); // 3
        Pty_382_set.insert("A");
        Pty_382.add_attribute("R", "10"); // 3
        Pty_382_set.insert("10");
        all_values.push_back(Pty_382_set);
        all_compo_names.insert("Pty_382_set");

        {
          xml_element Sub_382{"Sub"};
          multiset<string> Sub_382_set;
          Sub_382.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1525739216"); // 4
          Sub_382_set.insert("UnderlyingInstrumentPartySubID_t_1525739216");
          Sub_382.add_attribute("Typ", "3"); // 4
          Sub_382_set.insert("3");
          all_values.push_back(Sub_382_set);
          all_compo_names.insert("Sub_382_set");

          Pty_382.add_element(Sub_382);
        }
        Undly_96.add_element(Pty_382);
      }
      RFQReq_1.add_element(Undly_96);
    }
    {
      xml_element Leg_86{"Leg"};
      multiset<string> Leg_86_set;
      Leg_86.add_attribute("Sym", "LegSymbol_t_1142097365"); // 2
      Leg_86_set.insert("LegSymbol_t_1142097365");
      Leg_86.add_attribute("Sfx", "WI"); // 2
      Leg_86_set.insert("WI");
      Leg_86.add_attribute("ID", "LegSecurityID_t_895836708"); // 2
      Leg_86_set.insert("LegSecurityID_t_895836708");
      Leg_86.add_attribute("Src", "B"); // 2
      Leg_86_set.insert("B");
      Leg_86.add_attribute("Prod", "12"); // 2
      Leg_86_set.insert("12");
      Leg_86.add_attribute("CFI", "LegCFICode_t_27137174"); // 2
      Leg_86_set.insert("LegCFICode_t_27137174");
      Leg_86.add_attribute("SecTyp", "FXSPOT"); // 2
      Leg_86_set.insert("FXSPOT");
      Leg_86.add_attribute("SecSubTyp", "LegSecuritySubType_t_957091270"); // 2
      Leg_86_set.insert("LegSecuritySubType_t_957091270");
      Leg_86.add_attribute("MMY", "1293594946"); // 2
      Leg_86_set.insert("1293594946");
      Leg_86.add_attribute("Mat", "LegMaturityDate_t_1586465329"); // 2
      Leg_86_set.insert("LegMaturityDate_t_1586465329");
      Leg_86.add_attribute("MatTm", "253239288"); // 2
      Leg_86_set.insert("253239288");
      Leg_86.add_attribute("CpnPmt", "LegCouponPaymentDate_t_532874933"); // 2
      Leg_86_set.insert("LegCouponPaymentDate_t_532874933");
      Leg_86.add_attribute("Issued", "LegIssueDate_t_173970020"); // 2
      Leg_86_set.insert("LegIssueDate_t_173970020");
      Leg_86.add_attribute("RepoCollSecTyp", "465048429"); // 2
      Leg_86_set.insert("465048429");
      Leg_86.add_attribute("RepoTrm", "1124938518"); // 2
      Leg_86_set.insert("1124938518");
      Leg_86.add_attribute("RepoRt", "12637580.540000"); // 2
      Leg_86_set.insert("12637580.540000");
      Leg_86.add_attribute("Fctr", "4783276.620000"); // 2
      Leg_86_set.insert("4783276.620000");
      Leg_86.add_attribute("CrdRtg", "LegCreditRating_t_941316879"); // 2
      Leg_86_set.insert("LegCreditRating_t_941316879");
      Leg_86.add_attribute("Rgstry", "LegInstrRegistry_t_212582038"); // 2
      Leg_86_set.insert("LegInstrRegistry_t_212582038");
      Leg_86.add_attribute("Ctry", "1394598521"); // 2
      Leg_86_set.insert("1394598521");
      Leg_86.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1940167017"); // 2
      Leg_86_set.insert("LegStateOrProvinceOfIssue_t_1940167017");
      Leg_86.add_attribute("Lcl", "LegLocaleOfIssue_t_1459214483"); // 2
      Leg_86_set.insert("LegLocaleOfIssue_t_1459214483");
      Leg_86.add_attribute("Redeem", "LegRedemptionDate_t_1814094708"); // 2
      Leg_86_set.insert("LegRedemptionDate_t_1814094708");
      Leg_86.add_attribute("Strk", "1383867.360000"); // 2
      Leg_86_set.insert("1383867.360000");
      Leg_86.add_attribute("StrkCcy", "USD"); // 2
      Leg_86_set.insert("USD");
      Leg_86.add_attribute("OptA", "379484419"); // 2
      Leg_86_set.insert("379484419");
      Leg_86.add_attribute("Cmult", "8043243.500000"); // 2
      Leg_86_set.insert("8043243.500000");
      Leg_86.add_attribute("MultTyp", "2"); // 2
      Leg_86_set.insert("2");
      Leg_86.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_86_set.insert("1");
      Leg_86.add_attribute("UOM", "Bu"); // 2
      Leg_86_set.insert("Bu");
      Leg_86.add_attribute("UOMQty", "14520004.490000"); // 2
      Leg_86_set.insert("14520004.490000");
      Leg_86.add_attribute("PxUOM", "Bbl"); // 2
      Leg_86_set.insert("Bbl");
      Leg_86.add_attribute("PxUOMQty", "811715.720000"); // 2
      Leg_86_set.insert("811715.720000");
      Leg_86.add_attribute("TmUnit", "Min"); // 2
      Leg_86_set.insert("Min");
      Leg_86.add_attribute("ExerStyle", "0"); // 2
      Leg_86_set.insert("0");
      Leg_86.add_attribute("CpnRt", "1083087.460000"); // 2
      Leg_86_set.insert("1083087.460000");
      Leg_86.add_attribute("Exch", "LegSecurityExchange_t_1471321410"); // 2
      Leg_86_set.insert("LegSecurityExchange_t_1471321410");
      Leg_86.add_attribute("Issr", "LegIssuer_t_1855143199"); // 2
      Leg_86_set.insert("LegIssuer_t_1855143199");
      Leg_86.add_attribute("EncLegIssrLen", "1401903693"); // 2
      Leg_86_set.insert("1401903693");
      Leg_86.add_attribute("EncLegIssr", "EncodedLegIssuer_t_910303091"); // 2
      Leg_86_set.insert("EncodedLegIssuer_t_910303091");
      Leg_86.add_attribute("Desc", "LegSecurityDesc_t_2108382487"); // 2
      Leg_86_set.insert("LegSecurityDesc_t_2108382487");
      Leg_86.add_attribute("EncLegSecDescLen", "1934778626"); // 2
      Leg_86_set.insert("1934778626");
      Leg_86.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1084273111"); // 2
      Leg_86_set.insert("EncodedLegSecurityDesc_t_1084273111");
      Leg_86.add_attribute("RatioQty", "4259472.690000"); // 2
      Leg_86_set.insert("4259472.690000");
      Leg_86.add_attribute("Side", "9"); // 2
      Leg_86_set.insert("9");
      Leg_86.add_attribute("Ccy", "CHF"); // 2
      Leg_86_set.insert("CHF");
      Leg_86.add_attribute("Pool", "LegPool_t_1853550375"); // 2
      Leg_86_set.insert("LegPool_t_1853550375");
      Leg_86.add_attribute("Dated", "LegDatedDate_t_413129556"); // 2
      Leg_86_set.insert("LegDatedDate_t_413129556");
      Leg_86.add_attribute("CSetMo", "151389805"); // 2
      Leg_86_set.insert("151389805");
      Leg_86.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1646233744"); // 2
      Leg_86_set.insert("LegInterestAccrualDate_t_1646233744");
      Leg_86.add_attribute("PutCall", "1872344039"); // 2
      Leg_86_set.insert("1872344039");
      Leg_86.add_attribute("LegOptionRatio", "19654845.130000"); // 2
      Leg_86_set.insert("19654845.130000");
      Leg_86.add_attribute("Px", "17846204.800000"); // 2
      Leg_86_set.insert("17846204.800000");
      all_values.push_back(Leg_86_set);
      all_compo_names.insert("Leg_86_set");

      {
        xml_element LegAID_81{"LegAID"};
        multiset<string> LegAID_81_set;
        LegAID_81.add_attribute("SecAltID", "LegSecurityAltID_t_701405440"); // 3
        LegAID_81_set.insert("LegSecurityAltID_t_701405440");
        LegAID_81.add_attribute("SecAltIDSrc", "E"); // 3
        LegAID_81_set.insert("E");
        all_values.push_back(LegAID_81_set);
        all_compo_names.insert("LegAID_81_set");

        Leg_86.add_element(LegAID_81);
      }
      RFQReq_1.add_element(Leg_86);
    }
    elt.add_element(RFQReq_1);
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
