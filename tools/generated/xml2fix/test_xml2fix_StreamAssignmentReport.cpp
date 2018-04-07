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
  elt.add_attribute("RptID", "StreamAsgnRptID_t_1811006489"); // 0
  StreamAssignmentReport_message_t_0.insert("StreamAsgnRptID_t_1811006489");
  elt.add_attribute("AsgnReqTyp", "2"); // 0
  StreamAssignmentReport_message_t_0.insert("2");
  elt.add_attribute("ReqID", "StreamAsgnReqID_t_2103727409"); // 0
  StreamAssignmentReport_message_t_0.insert("StreamAsgnReqID_t_2103727409");
  all_values.push_back(StreamAssignmentReport_message_t_0);
  all_compo_names.insert("StreamAssignmentReport_message_t");

  { // Hdr
    xml_element Hdr_93{"Hdr"};
    multiset<string> Hdr_93_set;
    Hdr_93.add_attribute("SeqNum", "852439364"); // 1
    Hdr_93_set.insert("852439364");
    Hdr_93.add_attribute("SID", "SenderCompID_t_915602962"); // 1
    Hdr_93_set.insert("SenderCompID_t_915602962");
    Hdr_93.add_attribute("TID", "TargetCompID_t_1367939801"); // 1
    Hdr_93_set.insert("TargetCompID_t_1367939801");
    Hdr_93.add_attribute("OBID", "OnBehalfOfCompID_t_1782137497"); // 1
    Hdr_93_set.insert("OnBehalfOfCompID_t_1782137497");
    Hdr_93.add_attribute("D2ID", "DeliverToCompID_t_1882646858"); // 1
    Hdr_93_set.insert("DeliverToCompID_t_1882646858");
    Hdr_93.add_attribute("SSub", "SenderSubID_t_937528237"); // 1
    Hdr_93_set.insert("SenderSubID_t_937528237");
    Hdr_93.add_attribute("SLoc", "SenderLocationID_t_880026246"); // 1
    Hdr_93_set.insert("SenderLocationID_t_880026246");
    Hdr_93.add_attribute("TSub", "TargetSubID_t_1478427568"); // 1
    Hdr_93_set.insert("TargetSubID_t_1478427568");
    Hdr_93.add_attribute("TLoc", "TargetLocationID_t_535746943"); // 1
    Hdr_93_set.insert("TargetLocationID_t_535746943");
    Hdr_93.add_attribute("OBSub", "OnBehalfOfSubID_t_1472420183"); // 1
    Hdr_93_set.insert("OnBehalfOfSubID_t_1472420183");
    Hdr_93.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1518147443"); // 1
    Hdr_93_set.insert("OnBehalfOfLocationID_t_1518147443");
    Hdr_93.add_attribute("D2Sub", "DeliverToSubID_t_411810505"); // 1
    Hdr_93_set.insert("DeliverToSubID_t_411810505");
    Hdr_93.add_attribute("D2Loc", "DeliverToLocationID_t_389565824"); // 1
    Hdr_93_set.insert("DeliverToLocationID_t_389565824");
    Hdr_93.add_attribute("PosDup", "Y"); // 1
    Hdr_93_set.insert("Y");
    Hdr_93.add_attribute("PosRsnd", "N"); // 1
    Hdr_93_set.insert("N");
    Hdr_93.add_attribute("Snt", "SendingTime_t_1608893193"); // 1
    Hdr_93_set.insert("SendingTime_t_1608893193");
    Hdr_93.add_attribute("OrigSnt", "OrigSendingTime_t_1934488375"); // 1
    Hdr_93_set.insert("OrigSendingTime_t_1934488375");
    Hdr_93.add_attribute("MsgEncd", "MessageEncoding_t_1953022039"); // 1
    Hdr_93_set.insert("MessageEncoding_t_1953022039");
    all_values.push_back(Hdr_93_set);
    all_compo_names.insert("Hdr_93_set");

    {
      xml_element Hop_93{"Hop"};
      multiset<string> Hop_93_set;
      Hop_93.add_attribute("ID", "HopCompID_t_934809926"); // 2
      Hop_93_set.insert("HopCompID_t_934809926");
      Hop_93.add_attribute("Ref", "383661950"); // 2
      Hop_93_set.insert("383661950");
      Hop_93.add_attribute("Snt", "HopSendingTime_t_1703048566"); // 2
      Hop_93_set.insert("HopSendingTime_t_1703048566");
      all_values.push_back(Hop_93_set);
      all_compo_names.insert("Hop_93_set");

      Hdr_93.add_element(Hop_93);
    }
    elt.add_element(Hdr_93);
  } // end Hdr
  { // Rpts
    xml_element Rpts_0{"Rpts"};
    {
      xml_element Pty_431{"Pty"};
      multiset<string> Pty_431_set;
      Pty_431.add_attribute("ID", "PartyID_t_1997572384"); // 2
      Pty_431_set.insert("PartyID_t_1997572384");
      Pty_431.add_attribute("Src", "B"); // 2
      Pty_431_set.insert("B");
      Pty_431.add_attribute("R", "10"); // 2
      Pty_431_set.insert("10");
      all_values.push_back(Pty_431_set);
      all_compo_names.insert("Pty_431_set");

      {
        xml_element Sub_431{"Sub"};
        multiset<string> Sub_431_set;
        Sub_431.add_attribute("ID", "PartySubID_t_294444340"); // 3
        Sub_431_set.insert("PartySubID_t_294444340");
        Sub_431.add_attribute("Typ", "1"); // 3
        Sub_431_set.insert("1");
        all_values.push_back(Sub_431_set);
        all_compo_names.insert("Sub_431_set");

        Pty_431.add_element(Sub_431);
      }
      Rpts_0.add_element(Pty_431);
    }
    {
      xml_element Instrmts_0{"Instrmts"};
      multiset<string> Instrmts_0_set;
      Instrmts_0.add_attribute("SettlTyp", "1"); // 2
      Instrmts_0_set.insert("1");
      Instrmts_0.add_attribute("AsgnTyp", "1"); // 2
      Instrmts_0_set.insert("1");
      Instrmts_0.add_attribute("MDStrmID", "MDStreamID_t_1320791171"); // 2
      Instrmts_0_set.insert("MDStreamID_t_1320791171");
      Instrmts_0.add_attribute("RejRsn", "1"); // 2
      Instrmts_0_set.insert("1");
      Instrmts_0.add_attribute("Txt", "Text_t_810406545"); // 2
      Instrmts_0_set.insert("Text_t_810406545");
      Instrmts_0.add_attribute("EncTxtLen", "88910486"); // 2
      Instrmts_0_set.insert("88910486");
      Instrmts_0.add_attribute("EncTxt", "EncodedText_t_356596760"); // 2
      Instrmts_0_set.insert("EncodedText_t_356596760");
      all_values.push_back(Instrmts_0_set);
      all_compo_names.insert("Instrmts_0_set");

      {
        xml_element Instrmt_83{"Instrmt"};
        multiset<string> Instrmt_83_set;
        Instrmt_83.add_attribute("Sym", "Symbol_t_445060394"); // 3
        Instrmt_83_set.insert("Symbol_t_445060394");
        Instrmt_83.add_attribute("Sfx", "CD"); // 3
        Instrmt_83_set.insert("CD");
        Instrmt_83.add_attribute("ID", "SecurityID_t_1294124997"); // 3
        Instrmt_83_set.insert("SecurityID_t_1294124997");
        Instrmt_83.add_attribute("Src", "K"); // 3
        Instrmt_83_set.insert("K");
        Instrmt_83.add_attribute("Prod", "9"); // 3
        Instrmt_83_set.insert("9");
        Instrmt_83.add_attribute("ProdCmplx", "ProductComplex_t_1829871940"); // 3
        Instrmt_83_set.insert("ProductComplex_t_1829871940");
        Instrmt_83.add_attribute("SecGrp", "SecurityGroup_t_650023175"); // 3
        Instrmt_83_set.insert("SecurityGroup_t_650023175");
        Instrmt_83.add_attribute("CFI", "CFICode_t_673165060"); // 3
        Instrmt_83_set.insert("CFICode_t_673165060");
        Instrmt_83.add_attribute("SecTyp", "CDS"); // 3
        Instrmt_83_set.insert("CDS");
        Instrmt_83.add_attribute("SubTyp", "SecuritySubType_t_1039589000"); // 3
        Instrmt_83_set.insert("SecuritySubType_t_1039589000");
        Instrmt_83.add_attribute("MMY", "1982393495"); // 3
        Instrmt_83_set.insert("1982393495");
        Instrmt_83.add_attribute("MatDt", "MaturityDate_t_1130040101"); // 3
        Instrmt_83_set.insert("MaturityDate_t_1130040101");
        Instrmt_83.add_attribute("MatTm", "500998545"); // 3
        Instrmt_83_set.insert("500998545");
        Instrmt_83.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1769398222"); // 3
        Instrmt_83_set.insert("SettleOnOpenFlag_t_1769398222");
        Instrmt_83.add_attribute("AsgnMeth", "935578493"); // 3
        Instrmt_83_set.insert("935578493");
        Instrmt_83.add_attribute("Status", "2"); // 3
        Instrmt_83_set.insert("2");
        Instrmt_83.add_attribute("CpnPmt", "CouponPaymentDate_t_5576524"); // 3
        Instrmt_83_set.insert("CouponPaymentDate_t_5576524");
        Instrmt_83.add_attribute("RestrctTyp", "XR"); // 3
        Instrmt_83_set.insert("XR");
        Instrmt_83.add_attribute("Snrty", "SB"); // 3
        Instrmt_83_set.insert("SB");
        Instrmt_83.add_attribute("NotlPctOut", "20031489.080000"); // 3
        Instrmt_83_set.insert("20031489.080000");
        Instrmt_83.add_attribute("OrigNotlPctOut", "20115358.140000"); // 3
        Instrmt_83_set.insert("20115358.140000");
        Instrmt_83.add_attribute("AttchPnt", "19149858.750000"); // 3
        Instrmt_83_set.insert("19149858.750000");
        Instrmt_83.add_attribute("DetchPnt", "1501096.000000"); // 3
        Instrmt_83_set.insert("1501096.000000");
        Instrmt_83.add_attribute("Issued", "IssueDate_t_363503602"); // 3
        Instrmt_83_set.insert("IssueDate_t_363503602");
        Instrmt_83.add_attribute("RepoCollSecTyp", "947399073"); // 3
        Instrmt_83_set.insert("947399073");
        Instrmt_83.add_attribute("RepoTrm", "108076781"); // 3
        Instrmt_83_set.insert("108076781");
        Instrmt_83.add_attribute("RepoRt", "16842947.740000"); // 3
        Instrmt_83_set.insert("16842947.740000");
        Instrmt_83.add_attribute("Fctr", "20835396.790000"); // 3
        Instrmt_83_set.insert("20835396.790000");
        Instrmt_83.add_attribute("CrdRtg", "CreditRating_t_918483326"); // 3
        Instrmt_83_set.insert("CreditRating_t_918483326");
        Instrmt_83.add_attribute("Rgstry", "InstrRegistry_t_1773205260"); // 3
        Instrmt_83_set.insert("InstrRegistry_t_1773205260");
        Instrmt_83.add_attribute("IssuCtry", "292652791"); // 3
        Instrmt_83_set.insert("292652791");
        Instrmt_83.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1363543720"); // 3
        Instrmt_83_set.insert("StateOrProvinceOfIssue_t_1363543720");
        Instrmt_83.add_attribute("Lcl", "LocaleOfIssue_t_1597278956"); // 3
        Instrmt_83_set.insert("LocaleOfIssue_t_1597278956");
        Instrmt_83.add_attribute("Redeem", "RedemptionDate_t_1586777788"); // 3
        Instrmt_83_set.insert("RedemptionDate_t_1586777788");
        Instrmt_83.add_attribute("StrkPx", "5411467.120000"); // 3
        Instrmt_83_set.insert("5411467.120000");
        Instrmt_83.add_attribute("StrkCcy", "USD"); // 3
        Instrmt_83_set.insert("USD");
        Instrmt_83.add_attribute("StrkMult", "11911698.880000"); // 3
        Instrmt_83_set.insert("11911698.880000");
        Instrmt_83.add_attribute("StrkValu", "14254616.330000"); // 3
        Instrmt_83_set.insert("14254616.330000");
        Instrmt_83.add_attribute("StrkPxDtrmnMeth", "2"); // 3
        Instrmt_83_set.insert("2");
        Instrmt_83.add_attribute("StrkPxBndryMeth", "1"); // 3
        Instrmt_83_set.insert("1");
        Instrmt_83.add_attribute("StrkPxBndryPrcsn", "12603714.800000"); // 3
        Instrmt_83_set.insert("12603714.800000");
        Instrmt_83.add_attribute("PxDtrmnMeth", "4"); // 3
        Instrmt_83_set.insert("4");
        Instrmt_83.add_attribute("OptAt", "584273785"); // 3
        Instrmt_83_set.insert("584273785");
        Instrmt_83.add_attribute("Mult", "8822860.540000"); // 3
        Instrmt_83_set.insert("8822860.540000");
        Instrmt_83.add_attribute("MultTyp", "0"); // 3
        Instrmt_83_set.insert("0");
        Instrmt_83.add_attribute("FlowSchedTyp", "1"); // 3
        Instrmt_83_set.insert("1");
        Instrmt_83.add_attribute("MinPxIncr", "8878625.790000"); // 3
        Instrmt_83_set.insert("8878625.790000");
        Instrmt_83.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1772643235"); // 3
        Instrmt_83_set.insert("MinPriceIncrementAmount_t_1772643235");
        Instrmt_83.add_attribute("UOM", "Bbl"); // 3
        Instrmt_83_set.insert("Bbl");
        Instrmt_83.add_attribute("UOMQty", "7435278.390000"); // 3
        Instrmt_83_set.insert("7435278.390000");
        Instrmt_83.add_attribute("PxUOM", "Gal"); // 3
        Instrmt_83_set.insert("Gal");
        Instrmt_83.add_attribute("PxUOMQty", "1870508.660000"); // 3
        Instrmt_83_set.insert("1870508.660000");
        Instrmt_83.add_attribute("SettlMeth", "C"); // 3
        Instrmt_83_set.insert("C");
        Instrmt_83.add_attribute("ExerStyle", "1"); // 3
        Instrmt_83_set.insert("1");
        Instrmt_83.add_attribute("OptPayoutTyp", "3"); // 3
        Instrmt_83_set.insert("3");
        Instrmt_83.add_attribute("OptPayAmt", "OptPayoutAmount_t_1001714221"); // 3
        Instrmt_83_set.insert("OptPayoutAmount_t_1001714221");
        Instrmt_83.add_attribute("PxQteMeth", "INT"); // 3
        Instrmt_83_set.insert("INT");
        Instrmt_83.add_attribute("ValMeth", "EQTY"); // 3
        Instrmt_83_set.insert("EQTY");
        Instrmt_83.add_attribute("ListMeth", "0"); // 3
        Instrmt_83_set.insert("0");
        Instrmt_83.add_attribute("CapPx", "11627317.420000"); // 3
        Instrmt_83_set.insert("11627317.420000");
        Instrmt_83.add_attribute("FlrPx", "13631587.620000"); // 3
        Instrmt_83_set.insert("13631587.620000");
        Instrmt_83.add_attribute("PutCall", "0"); // 3
        Instrmt_83_set.insert("0");
        Instrmt_83.add_attribute("FlexInd", "true"); // 3
        Instrmt_83_set.insert("true");
        Instrmt_83.add_attribute("FlexProdElig", "true"); // 3
        Instrmt_83_set.insert("true");
        Instrmt_83.add_attribute("TmUnit", "D"); // 3
        Instrmt_83_set.insert("D");
        Instrmt_83.add_attribute("CpnRt", "13648236.230000"); // 3
        Instrmt_83_set.insert("13648236.230000");
        Instrmt_83.add_attribute("Exch", "SecurityExchange_t_2071618983"); // 3
        Instrmt_83_set.insert("SecurityExchange_t_2071618983");
        Instrmt_83.add_attribute("PosLmt", "721090573"); // 3
        Instrmt_83_set.insert("721090573");
        Instrmt_83.add_attribute("NTPosLmt", "642801608"); // 3
        Instrmt_83_set.insert("642801608");
        Instrmt_83.add_attribute("Issr", "Issuer_t_1287500212"); // 3
        Instrmt_83_set.insert("Issuer_t_1287500212");
        Instrmt_83.add_attribute("EncIssrLen", "804365813"); // 3
        Instrmt_83_set.insert("804365813");
        Instrmt_83.add_attribute("EncIssr", "EncodedIssuer_t_1903173088"); // 3
        Instrmt_83_set.insert("EncodedIssuer_t_1903173088");
        Instrmt_83.add_attribute("Desc", "SecurityDesc_t_1633421543"); // 3
        Instrmt_83_set.insert("SecurityDesc_t_1633421543");
        Instrmt_83.add_attribute("EncSecDescLen", "1388639598"); // 3
        Instrmt_83_set.insert("1388639598");
        Instrmt_83.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_637975495"); // 3
        Instrmt_83_set.insert("EncodedSecurityDesc_t_637975495");
        Instrmt_83.add_attribute("Pool", "Pool_t_767437719"); // 3
        Instrmt_83_set.insert("Pool_t_767437719");
        Instrmt_83.add_attribute("CSetMo", "1261238206"); // 3
        Instrmt_83_set.insert("1261238206");
        Instrmt_83.add_attribute("CPPgm", "2"); // 3
        Instrmt_83_set.insert("2");
        Instrmt_83.add_attribute("CPRegT", "CPRegType_t_392597307"); // 3
        Instrmt_83_set.insert("CPRegType_t_392597307");
        Instrmt_83.add_attribute("Dated", "DatedDate_t_1680786844"); // 3
        Instrmt_83_set.insert("DatedDate_t_1680786844");
        Instrmt_83.add_attribute("IntAcrl", "InterestAccrualDate_t_121882265"); // 3
        Instrmt_83_set.insert("InterestAccrualDate_t_121882265");
        all_values.push_back(Instrmt_83_set);
        all_compo_names.insert("Instrmt_83_set");

        {
          xml_element AID_86{"AID"};
          multiset<string> AID_86_set;
          AID_86.add_attribute("AltID", "SecurityAltID_t_2029292708"); // 4
          AID_86_set.insert("SecurityAltID_t_2029292708");
          AID_86.add_attribute("AltIDSrc", "3"); // 4
          AID_86_set.insert("3");
          all_values.push_back(AID_86_set);
          all_compo_names.insert("AID_86_set");

          Instrmt_83.add_element(AID_86);
        }
        {
          xml_element SecXML_86{"SecXML"};
          multiset<string> SecXML_86_set;
          SecXML_86.add_attribute("Schema", "SecurityXMLSchema_t_1015519705"); // 4
          SecXML_86_set.insert("SecurityXMLSchema_t_1015519705");
          all_values.push_back(SecXML_86_set);
          all_compo_names.insert("SecXML_86_set");

          Instrmt_83.add_element(SecXML_86);
        }
        {
          xml_element Evnt_86{"Evnt"};
          multiset<string> Evnt_86_set;
          Evnt_86.add_attribute("EventTyp", "99"); // 4
          Evnt_86_set.insert("99");
          Evnt_86.add_attribute("Dt", "EventDate_t_854804001"); // 4
          Evnt_86_set.insert("EventDate_t_854804001");
          Evnt_86.add_attribute("Tm", "EventTime_t_2017233927"); // 4
          Evnt_86_set.insert("EventTime_t_2017233927");
          Evnt_86.add_attribute("Px", "12715345.460000"); // 4
          Evnt_86_set.insert("12715345.460000");
          Evnt_86.add_attribute("Txt", "EventText_t_1925309972"); // 4
          Evnt_86_set.insert("EventText_t_1925309972");
          all_values.push_back(Evnt_86_set);
          all_compo_names.insert("Evnt_86_set");

          Instrmt_83.add_element(Evnt_86);
        }
        {
          xml_element Pty_432{"Pty"};
          multiset<string> Pty_432_set;
          Pty_432.add_attribute("ID", "InstrumentPartyID_t_1789947827"); // 4
          Pty_432_set.insert("InstrumentPartyID_t_1789947827");
          Pty_432.add_attribute("Src", "H"); // 4
          Pty_432_set.insert("H");
          Pty_432.add_attribute("R", "68"); // 4
          Pty_432_set.insert("68");
          all_values.push_back(Pty_432_set);
          all_compo_names.insert("Pty_432_set");

          {
            xml_element Sub_432{"Sub"};
            multiset<string> Sub_432_set;
            Sub_432.add_attribute("ID", "InstrumentPartySubID_t_778721799"); // 5
            Sub_432_set.insert("InstrumentPartySubID_t_778721799");
            Sub_432.add_attribute("Typ", "28"); // 5
            Sub_432_set.insert("28");
            all_values.push_back(Sub_432_set);
            all_compo_names.insert("Sub_432_set");

            Pty_432.add_element(Sub_432);
          }
          Instrmt_83.add_element(Pty_432);
        }
        {
          xml_element CmplxEvnt_83{"CmplxEvnt"};
          multiset<string> CmplxEvnt_83_set;
          CmplxEvnt_83.add_attribute("Typ", "3"); // 4
          CmplxEvnt_83_set.insert("3");
          CmplxEvnt_83.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_308642484"); // 4
          CmplxEvnt_83_set.insert("ComplexOptPayoutAmount_t_308642484");
          CmplxEvnt_83.add_attribute("Px", "1166496.660000"); // 4
          CmplxEvnt_83_set.insert("1166496.660000");
          CmplxEvnt_83.add_attribute("PxBndryMeth", "4"); // 4
          CmplxEvnt_83_set.insert("4");
          CmplxEvnt_83.add_attribute("PxBndryPrcsn", "10297330.570000"); // 4
          CmplxEvnt_83_set.insert("10297330.570000");
          CmplxEvnt_83.add_attribute("PxTmTyp", "1"); // 4
          CmplxEvnt_83_set.insert("1");
          CmplxEvnt_83.add_attribute("Cond", "1"); // 4
          CmplxEvnt_83_set.insert("1");
          all_values.push_back(CmplxEvnt_83_set);
          all_compo_names.insert("CmplxEvnt_83_set");

          {
            xml_element EvntDts_83{"EvntDts"};
            multiset<string> EvntDts_83_set;
            EvntDts_83.add_attribute("StartDt", "ComplexEventStartDate_t_1834098870"); // 5
            EvntDts_83_set.insert("ComplexEventStartDate_t_1834098870");
            EvntDts_83.add_attribute("EndDt", "ComplexEventEndDate_t_515140715"); // 5
            EvntDts_83_set.insert("ComplexEventEndDate_t_515140715");
            all_values.push_back(EvntDts_83_set);
            all_compo_names.insert("EvntDts_83_set");

            {
              xml_element EvntTms_83{"EvntTms"};
              multiset<string> EvntTms_83_set;
              EvntTms_83.add_attribute("StartTm", "493527783"); // 6
              EvntTms_83_set.insert("493527783");
              EvntTms_83.add_attribute("EndTm", "1075254820"); // 6
              EvntTms_83_set.insert("1075254820");
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
  { // Rpts
    xml_element Rpts_1{"Rpts"};
    {
      xml_element Pty_433{"Pty"};
      multiset<string> Pty_433_set;
      Pty_433.add_attribute("ID", "PartyID_t_1153116210"); // 2
      Pty_433_set.insert("PartyID_t_1153116210");
      Pty_433.add_attribute("Src", "2"); // 2
      Pty_433_set.insert("2");
      Pty_433.add_attribute("R", "57"); // 2
      Pty_433_set.insert("57");
      all_values.push_back(Pty_433_set);
      all_compo_names.insert("Pty_433_set");

      {
        xml_element Sub_433{"Sub"};
        multiset<string> Sub_433_set;
        Sub_433.add_attribute("ID", "PartySubID_t_531470636"); // 3
        Sub_433_set.insert("PartySubID_t_531470636");
        Sub_433.add_attribute("Typ", "32"); // 3
        Sub_433_set.insert("32");
        all_values.push_back(Sub_433_set);
        all_compo_names.insert("Sub_433_set");

        Pty_433.add_element(Sub_433);
      }
      Rpts_1.add_element(Pty_433);
    }
    {
      xml_element Instrmts_1{"Instrmts"};
      multiset<string> Instrmts_1_set;
      Instrmts_1.add_attribute("SettlTyp", "B"); // 2
      Instrmts_1_set.insert("B");
      Instrmts_1.add_attribute("AsgnTyp", "3"); // 2
      Instrmts_1_set.insert("3");
      Instrmts_1.add_attribute("MDStrmID", "MDStreamID_t_1535371870"); // 2
      Instrmts_1_set.insert("MDStreamID_t_1535371870");
      Instrmts_1.add_attribute("RejRsn", "0"); // 2
      Instrmts_1_set.insert("0");
      Instrmts_1.add_attribute("Txt", "Text_t_1668872607"); // 2
      Instrmts_1_set.insert("Text_t_1668872607");
      Instrmts_1.add_attribute("EncTxtLen", "1269896287"); // 2
      Instrmts_1_set.insert("1269896287");
      Instrmts_1.add_attribute("EncTxt", "EncodedText_t_297470639"); // 2
      Instrmts_1_set.insert("EncodedText_t_297470639");
      all_values.push_back(Instrmts_1_set);
      all_compo_names.insert("Instrmts_1_set");

      {
        xml_element Instrmt_84{"Instrmt"};
        multiset<string> Instrmt_84_set;
        Instrmt_84.add_attribute("Sym", "Symbol_t_1538622886"); // 3
        Instrmt_84_set.insert("Symbol_t_1538622886");
        Instrmt_84.add_attribute("Sfx", "WI"); // 3
        Instrmt_84_set.insert("WI");
        Instrmt_84.add_attribute("ID", "SecurityID_t_75296963"); // 3
        Instrmt_84_set.insert("SecurityID_t_75296963");
        Instrmt_84.add_attribute("Src", "G"); // 3
        Instrmt_84_set.insert("G");
        Instrmt_84.add_attribute("Prod", "7"); // 3
        Instrmt_84_set.insert("7");
        Instrmt_84.add_attribute("ProdCmplx", "ProductComplex_t_1216282049"); // 3
        Instrmt_84_set.insert("ProductComplex_t_1216282049");
        Instrmt_84.add_attribute("SecGrp", "SecurityGroup_t_1959808865"); // 3
        Instrmt_84_set.insert("SecurityGroup_t_1959808865");
        Instrmt_84.add_attribute("CFI", "CFICode_t_1580039517"); // 3
        Instrmt_84_set.insert("CFICode_t_1580039517");
        Instrmt_84.add_attribute("SecTyp", "REPLACD"); // 3
        Instrmt_84_set.insert("REPLACD");
        Instrmt_84.add_attribute("SubTyp", "SecuritySubType_t_120967701"); // 3
        Instrmt_84_set.insert("SecuritySubType_t_120967701");
        Instrmt_84.add_attribute("MMY", "1696689183"); // 3
        Instrmt_84_set.insert("1696689183");
        Instrmt_84.add_attribute("MatDt", "MaturityDate_t_732326065"); // 3
        Instrmt_84_set.insert("MaturityDate_t_732326065");
        Instrmt_84.add_attribute("MatTm", "1150700759"); // 3
        Instrmt_84_set.insert("1150700759");
        Instrmt_84.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_308656810"); // 3
        Instrmt_84_set.insert("SettleOnOpenFlag_t_308656810");
        Instrmt_84.add_attribute("AsgnMeth", "1739915953"); // 3
        Instrmt_84_set.insert("1739915953");
        Instrmt_84.add_attribute("Status", "2"); // 3
        Instrmt_84_set.insert("2");
        Instrmt_84.add_attribute("CpnPmt", "CouponPaymentDate_t_823797526"); // 3
        Instrmt_84_set.insert("CouponPaymentDate_t_823797526");
        Instrmt_84.add_attribute("RestrctTyp", "FR"); // 3
        Instrmt_84_set.insert("FR");
        Instrmt_84.add_attribute("Snrty", "SB"); // 3
        Instrmt_84_set.insert("SB");
        Instrmt_84.add_attribute("NotlPctOut", "19769137.360000"); // 3
        Instrmt_84_set.insert("19769137.360000");
        Instrmt_84.add_attribute("OrigNotlPctOut", "13469255.910000"); // 3
        Instrmt_84_set.insert("13469255.910000");
        Instrmt_84.add_attribute("AttchPnt", "21015801.800000"); // 3
        Instrmt_84_set.insert("21015801.800000");
        Instrmt_84.add_attribute("DetchPnt", "3609007.250000"); // 3
        Instrmt_84_set.insert("3609007.250000");
        Instrmt_84.add_attribute("Issued", "IssueDate_t_853004753"); // 3
        Instrmt_84_set.insert("IssueDate_t_853004753");
        Instrmt_84.add_attribute("RepoCollSecTyp", "1823892755"); // 3
        Instrmt_84_set.insert("1823892755");
        Instrmt_84.add_attribute("RepoTrm", "1014253627"); // 3
        Instrmt_84_set.insert("1014253627");
        Instrmt_84.add_attribute("RepoRt", "2408929.760000"); // 3
        Instrmt_84_set.insert("2408929.760000");
        Instrmt_84.add_attribute("Fctr", "12665593.930000"); // 3
        Instrmt_84_set.insert("12665593.930000");
        Instrmt_84.add_attribute("CrdRtg", "CreditRating_t_535642586"); // 3
        Instrmt_84_set.insert("CreditRating_t_535642586");
        Instrmt_84.add_attribute("Rgstry", "InstrRegistry_t_1510789263"); // 3
        Instrmt_84_set.insert("InstrRegistry_t_1510789263");
        Instrmt_84.add_attribute("IssuCtry", "1564030032"); // 3
        Instrmt_84_set.insert("1564030032");
        Instrmt_84.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2074265473"); // 3
        Instrmt_84_set.insert("StateOrProvinceOfIssue_t_2074265473");
        Instrmt_84.add_attribute("Lcl", "LocaleOfIssue_t_1904736448"); // 3
        Instrmt_84_set.insert("LocaleOfIssue_t_1904736448");
        Instrmt_84.add_attribute("Redeem", "RedemptionDate_t_1639326995"); // 3
        Instrmt_84_set.insert("RedemptionDate_t_1639326995");
        Instrmt_84.add_attribute("StrkPx", "11078688.900000"); // 3
        Instrmt_84_set.insert("11078688.900000");
        Instrmt_84.add_attribute("StrkCcy", "GBP"); // 3
        Instrmt_84_set.insert("GBP");
        Instrmt_84.add_attribute("StrkMult", "9201941.070000"); // 3
        Instrmt_84_set.insert("9201941.070000");
        Instrmt_84.add_attribute("StrkValu", "20180221.430000"); // 3
        Instrmt_84_set.insert("20180221.430000");
        Instrmt_84.add_attribute("StrkPxDtrmnMeth", "2"); // 3
        Instrmt_84_set.insert("2");
        Instrmt_84.add_attribute("StrkPxBndryMeth", "5"); // 3
        Instrmt_84_set.insert("5");
        Instrmt_84.add_attribute("StrkPxBndryPrcsn", "15672276.790000"); // 3
        Instrmt_84_set.insert("15672276.790000");
        Instrmt_84.add_attribute("PxDtrmnMeth", "3"); // 3
        Instrmt_84_set.insert("3");
        Instrmt_84.add_attribute("OptAt", "44378920"); // 3
        Instrmt_84_set.insert("44378920");
        Instrmt_84.add_attribute("Mult", "18758844.890000"); // 3
        Instrmt_84_set.insert("18758844.890000");
        Instrmt_84.add_attribute("MultTyp", "1"); // 3
        Instrmt_84_set.insert("1");
        Instrmt_84.add_attribute("FlowSchedTyp", "1"); // 3
        Instrmt_84_set.insert("1");
        Instrmt_84.add_attribute("MinPxIncr", "5521983.670000"); // 3
        Instrmt_84_set.insert("5521983.670000");
        Instrmt_84.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2131080244"); // 3
        Instrmt_84_set.insert("MinPriceIncrementAmount_t_2131080244");
        Instrmt_84.add_attribute("UOM", "Bcf"); // 3
        Instrmt_84_set.insert("Bcf");
        Instrmt_84.add_attribute("UOMQty", "3816284.560000"); // 3
        Instrmt_84_set.insert("3816284.560000");
        Instrmt_84.add_attribute("PxUOM", "lbs"); // 3
        Instrmt_84_set.insert("lbs");
        Instrmt_84.add_attribute("PxUOMQty", "6008785.880000"); // 3
        Instrmt_84_set.insert("6008785.880000");
        Instrmt_84.add_attribute("SettlMeth", "P"); // 3
        Instrmt_84_set.insert("P");
        Instrmt_84.add_attribute("ExerStyle", "0"); // 3
        Instrmt_84_set.insert("0");
        Instrmt_84.add_attribute("OptPayoutTyp", "3"); // 3
        Instrmt_84_set.insert("3");
        Instrmt_84.add_attribute("OptPayAmt", "OptPayoutAmount_t_1756782808"); // 3
        Instrmt_84_set.insert("OptPayoutAmount_t_1756782808");
        Instrmt_84.add_attribute("PxQteMeth", "INX"); // 3
        Instrmt_84_set.insert("INX");
        Instrmt_84.add_attribute("ValMeth", "CDS"); // 3
        Instrmt_84_set.insert("CDS");
        Instrmt_84.add_attribute("ListMeth", "0"); // 3
        Instrmt_84_set.insert("0");
        Instrmt_84.add_attribute("CapPx", "17877255.320000"); // 3
        Instrmt_84_set.insert("17877255.320000");
        Instrmt_84.add_attribute("FlrPx", "9603934.720000"); // 3
        Instrmt_84_set.insert("9603934.720000");
        Instrmt_84.add_attribute("PutCall", "1"); // 3
        Instrmt_84_set.insert("1");
        Instrmt_84.add_attribute("FlexInd", "true"); // 3
        Instrmt_84_set.insert("true");
        Instrmt_84.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_84_set.insert("false");
        Instrmt_84.add_attribute("TmUnit", "Yr"); // 3
        Instrmt_84_set.insert("Yr");
        Instrmt_84.add_attribute("CpnRt", "19829609.590000"); // 3
        Instrmt_84_set.insert("19829609.590000");
        Instrmt_84.add_attribute("Exch", "SecurityExchange_t_1160362215"); // 3
        Instrmt_84_set.insert("SecurityExchange_t_1160362215");
        Instrmt_84.add_attribute("PosLmt", "2099786569"); // 3
        Instrmt_84_set.insert("2099786569");
        Instrmt_84.add_attribute("NTPosLmt", "1853499454"); // 3
        Instrmt_84_set.insert("1853499454");
        Instrmt_84.add_attribute("Issr", "Issuer_t_733240353"); // 3
        Instrmt_84_set.insert("Issuer_t_733240353");
        Instrmt_84.add_attribute("EncIssrLen", "993464730"); // 3
        Instrmt_84_set.insert("993464730");
        Instrmt_84.add_attribute("EncIssr", "EncodedIssuer_t_1273243485"); // 3
        Instrmt_84_set.insert("EncodedIssuer_t_1273243485");
        Instrmt_84.add_attribute("Desc", "SecurityDesc_t_1038444555"); // 3
        Instrmt_84_set.insert("SecurityDesc_t_1038444555");
        Instrmt_84.add_attribute("EncSecDescLen", "1037843650"); // 3
        Instrmt_84_set.insert("1037843650");
        Instrmt_84.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1001644327"); // 3
        Instrmt_84_set.insert("EncodedSecurityDesc_t_1001644327");
        Instrmt_84.add_attribute("Pool", "Pool_t_936081063"); // 3
        Instrmt_84_set.insert("Pool_t_936081063");
        Instrmt_84.add_attribute("CSetMo", "1919538552"); // 3
        Instrmt_84_set.insert("1919538552");
        Instrmt_84.add_attribute("CPPgm", "99"); // 3
        Instrmt_84_set.insert("99");
        Instrmt_84.add_attribute("CPRegT", "CPRegType_t_919677659"); // 3
        Instrmt_84_set.insert("CPRegType_t_919677659");
        Instrmt_84.add_attribute("Dated", "DatedDate_t_418836959"); // 3
        Instrmt_84_set.insert("DatedDate_t_418836959");
        Instrmt_84.add_attribute("IntAcrl", "InterestAccrualDate_t_1935471150"); // 3
        Instrmt_84_set.insert("InterestAccrualDate_t_1935471150");
        all_values.push_back(Instrmt_84_set);
        all_compo_names.insert("Instrmt_84_set");

        {
          xml_element AID_87{"AID"};
          multiset<string> AID_87_set;
          AID_87.add_attribute("AltID", "SecurityAltID_t_102716198"); // 4
          AID_87_set.insert("SecurityAltID_t_102716198");
          AID_87.add_attribute("AltIDSrc", "G"); // 4
          AID_87_set.insert("G");
          all_values.push_back(AID_87_set);
          all_compo_names.insert("AID_87_set");

          Instrmt_84.add_element(AID_87);
        }
        {
          xml_element SecXML_87{"SecXML"};
          multiset<string> SecXML_87_set;
          SecXML_87.add_attribute("Schema", "SecurityXMLSchema_t_530516683"); // 4
          SecXML_87_set.insert("SecurityXMLSchema_t_530516683");
          all_values.push_back(SecXML_87_set);
          all_compo_names.insert("SecXML_87_set");

          Instrmt_84.add_element(SecXML_87);
        }
        {
          xml_element Evnt_87{"Evnt"};
          multiset<string> Evnt_87_set;
          Evnt_87.add_attribute("EventTyp", "10"); // 4
          Evnt_87_set.insert("10");
          Evnt_87.add_attribute("Dt", "EventDate_t_1297003243"); // 4
          Evnt_87_set.insert("EventDate_t_1297003243");
          Evnt_87.add_attribute("Tm", "EventTime_t_139815843"); // 4
          Evnt_87_set.insert("EventTime_t_139815843");
          Evnt_87.add_attribute("Px", "4156957.600000"); // 4
          Evnt_87_set.insert("4156957.600000");
          Evnt_87.add_attribute("Txt", "EventText_t_693366683"); // 4
          Evnt_87_set.insert("EventText_t_693366683");
          all_values.push_back(Evnt_87_set);
          all_compo_names.insert("Evnt_87_set");

          Instrmt_84.add_element(Evnt_87);
        }
        {
          xml_element Pty_434{"Pty"};
          multiset<string> Pty_434_set;
          Pty_434.add_attribute("ID", "InstrumentPartyID_t_284757590"); // 4
          Pty_434_set.insert("InstrumentPartyID_t_284757590");
          Pty_434.add_attribute("Src", "H"); // 4
          Pty_434_set.insert("H");
          Pty_434.add_attribute("R", "78"); // 4
          Pty_434_set.insert("78");
          all_values.push_back(Pty_434_set);
          all_compo_names.insert("Pty_434_set");

          {
            xml_element Sub_434{"Sub"};
            multiset<string> Sub_434_set;
            Sub_434.add_attribute("ID", "InstrumentPartySubID_t_356481161"); // 5
            Sub_434_set.insert("InstrumentPartySubID_t_356481161");
            Sub_434.add_attribute("Typ", "20"); // 5
            Sub_434_set.insert("20");
            all_values.push_back(Sub_434_set);
            all_compo_names.insert("Sub_434_set");

            Pty_434.add_element(Sub_434);
          }
          Instrmt_84.add_element(Pty_434);
        }
        {
          xml_element CmplxEvnt_84{"CmplxEvnt"};
          multiset<string> CmplxEvnt_84_set;
          CmplxEvnt_84.add_attribute("Typ", "9"); // 4
          CmplxEvnt_84_set.insert("9");
          CmplxEvnt_84.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1536073623"); // 4
          CmplxEvnt_84_set.insert("ComplexOptPayoutAmount_t_1536073623");
          CmplxEvnt_84.add_attribute("Px", "14363932.880000"); // 4
          CmplxEvnt_84_set.insert("14363932.880000");
          CmplxEvnt_84.add_attribute("PxBndryMeth", "4"); // 4
          CmplxEvnt_84_set.insert("4");
          CmplxEvnt_84.add_attribute("PxBndryPrcsn", "14883765.450000"); // 4
          CmplxEvnt_84_set.insert("14883765.450000");
          CmplxEvnt_84.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_84_set.insert("2");
          CmplxEvnt_84.add_attribute("Cond", "1"); // 4
          CmplxEvnt_84_set.insert("1");
          all_values.push_back(CmplxEvnt_84_set);
          all_compo_names.insert("CmplxEvnt_84_set");

          {
            xml_element EvntDts_84{"EvntDts"};
            multiset<string> EvntDts_84_set;
            EvntDts_84.add_attribute("StartDt", "ComplexEventStartDate_t_334357627"); // 5
            EvntDts_84_set.insert("ComplexEventStartDate_t_334357627");
            EvntDts_84.add_attribute("EndDt", "ComplexEventEndDate_t_268168932"); // 5
            EvntDts_84_set.insert("ComplexEventEndDate_t_268168932");
            all_values.push_back(EvntDts_84_set);
            all_compo_names.insert("EvntDts_84_set");

            {
              xml_element EvntTms_84{"EvntTms"};
              multiset<string> EvntTms_84_set;
              EvntTms_84.add_attribute("StartTm", "743076803"); // 6
              EvntTms_84_set.insert("743076803");
              EvntTms_84.add_attribute("EndTm", "1372201278"); // 6
              EvntTms_84_set.insert("1372201278");
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
      Rpts_1.add_element(Instrmts_1);
    }
    elt.add_element(Rpts_1);
  } // end Rpts
  { // Rpts
    xml_element Rpts_2{"Rpts"};
    {
      xml_element Pty_435{"Pty"};
      multiset<string> Pty_435_set;
      Pty_435.add_attribute("ID", "PartyID_t_1269813259"); // 2
      Pty_435_set.insert("PartyID_t_1269813259");
      Pty_435.add_attribute("Src", "3"); // 2
      Pty_435_set.insert("3");
      Pty_435.add_attribute("R", "7"); // 2
      Pty_435_set.insert("7");
      all_values.push_back(Pty_435_set);
      all_compo_names.insert("Pty_435_set");

      {
        xml_element Sub_435{"Sub"};
        multiset<string> Sub_435_set;
        Sub_435.add_attribute("ID", "PartySubID_t_676172305"); // 3
        Sub_435_set.insert("PartySubID_t_676172305");
        Sub_435.add_attribute("Typ", "4"); // 3
        Sub_435_set.insert("4");
        all_values.push_back(Sub_435_set);
        all_compo_names.insert("Sub_435_set");

        Pty_435.add_element(Sub_435);
      }
      Rpts_2.add_element(Pty_435);
    }
    {
      xml_element Instrmts_2{"Instrmts"};
      multiset<string> Instrmts_2_set;
      Instrmts_2.add_attribute("SettlTyp", "9"); // 2
      Instrmts_2_set.insert("9");
      Instrmts_2.add_attribute("AsgnTyp", "1"); // 2
      Instrmts_2_set.insert("1");
      Instrmts_2.add_attribute("MDStrmID", "MDStreamID_t_554068076"); // 2
      Instrmts_2_set.insert("MDStreamID_t_554068076");
      Instrmts_2.add_attribute("RejRsn", "1"); // 2
      Instrmts_2_set.insert("1");
      Instrmts_2.add_attribute("Txt", "Text_t_994676491"); // 2
      Instrmts_2_set.insert("Text_t_994676491");
      Instrmts_2.add_attribute("EncTxtLen", "692827567"); // 2
      Instrmts_2_set.insert("692827567");
      Instrmts_2.add_attribute("EncTxt", "EncodedText_t_1732328284"); // 2
      Instrmts_2_set.insert("EncodedText_t_1732328284");
      all_values.push_back(Instrmts_2_set);
      all_compo_names.insert("Instrmts_2_set");

      {
        xml_element Instrmt_85{"Instrmt"};
        multiset<string> Instrmt_85_set;
        Instrmt_85.add_attribute("Sym", "Symbol_t_1134492335"); // 3
        Instrmt_85_set.insert("Symbol_t_1134492335");
        Instrmt_85.add_attribute("Sfx", "CD"); // 3
        Instrmt_85_set.insert("CD");
        Instrmt_85.add_attribute("ID", "SecurityID_t_278211319"); // 3
        Instrmt_85_set.insert("SecurityID_t_278211319");
        Instrmt_85.add_attribute("Src", "6"); // 3
        Instrmt_85_set.insert("6");
        Instrmt_85.add_attribute("Prod", "9"); // 3
        Instrmt_85_set.insert("9");
        Instrmt_85.add_attribute("ProdCmplx", "ProductComplex_t_1931971475"); // 3
        Instrmt_85_set.insert("ProductComplex_t_1931971475");
        Instrmt_85.add_attribute("SecGrp", "SecurityGroup_t_1775731086"); // 3
        Instrmt_85_set.insert("SecurityGroup_t_1775731086");
        Instrmt_85.add_attribute("CFI", "CFICode_t_617893301"); // 3
        Instrmt_85_set.insert("CFICode_t_617893301");
        Instrmt_85.add_attribute("SecTyp", "TCAL"); // 3
        Instrmt_85_set.insert("TCAL");
        Instrmt_85.add_attribute("SubTyp", "SecuritySubType_t_1164321062"); // 3
        Instrmt_85_set.insert("SecuritySubType_t_1164321062");
        Instrmt_85.add_attribute("MMY", "2054286589"); // 3
        Instrmt_85_set.insert("2054286589");
        Instrmt_85.add_attribute("MatDt", "MaturityDate_t_861876698"); // 3
        Instrmt_85_set.insert("MaturityDate_t_861876698");
        Instrmt_85.add_attribute("MatTm", "505213959"); // 3
        Instrmt_85_set.insert("505213959");
        Instrmt_85.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1049212036"); // 3
        Instrmt_85_set.insert("SettleOnOpenFlag_t_1049212036");
        Instrmt_85.add_attribute("AsgnMeth", "566508946"); // 3
        Instrmt_85_set.insert("566508946");
        Instrmt_85.add_attribute("Status", "1"); // 3
        Instrmt_85_set.insert("1");
        Instrmt_85.add_attribute("CpnPmt", "CouponPaymentDate_t_1317380968"); // 3
        Instrmt_85_set.insert("CouponPaymentDate_t_1317380968");
        Instrmt_85.add_attribute("RestrctTyp", "MR"); // 3
        Instrmt_85_set.insert("MR");
        Instrmt_85.add_attribute("Snrty", "SB"); // 3
        Instrmt_85_set.insert("SB");
        Instrmt_85.add_attribute("NotlPctOut", "4397105.790000"); // 3
        Instrmt_85_set.insert("4397105.790000");
        Instrmt_85.add_attribute("OrigNotlPctOut", "8412599.680000"); // 3
        Instrmt_85_set.insert("8412599.680000");
        Instrmt_85.add_attribute("AttchPnt", "12085453.980000"); // 3
        Instrmt_85_set.insert("12085453.980000");
        Instrmt_85.add_attribute("DetchPnt", "11158828.840000"); // 3
        Instrmt_85_set.insert("11158828.840000");
        Instrmt_85.add_attribute("Issued", "IssueDate_t_1292611845"); // 3
        Instrmt_85_set.insert("IssueDate_t_1292611845");
        Instrmt_85.add_attribute("RepoCollSecTyp", "624154892"); // 3
        Instrmt_85_set.insert("624154892");
        Instrmt_85.add_attribute("RepoTrm", "1580042692"); // 3
        Instrmt_85_set.insert("1580042692");
        Instrmt_85.add_attribute("RepoRt", "18466799.210000"); // 3
        Instrmt_85_set.insert("18466799.210000");
        Instrmt_85.add_attribute("Fctr", "10594799.330000"); // 3
        Instrmt_85_set.insert("10594799.330000");
        Instrmt_85.add_attribute("CrdRtg", "CreditRating_t_427235536"); // 3
        Instrmt_85_set.insert("CreditRating_t_427235536");
        Instrmt_85.add_attribute("Rgstry", "InstrRegistry_t_392023841"); // 3
        Instrmt_85_set.insert("InstrRegistry_t_392023841");
        Instrmt_85.add_attribute("IssuCtry", "644324569"); // 3
        Instrmt_85_set.insert("644324569");
        Instrmt_85.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1561727871"); // 3
        Instrmt_85_set.insert("StateOrProvinceOfIssue_t_1561727871");
        Instrmt_85.add_attribute("Lcl", "LocaleOfIssue_t_1500547169"); // 3
        Instrmt_85_set.insert("LocaleOfIssue_t_1500547169");
        Instrmt_85.add_attribute("Redeem", "RedemptionDate_t_922535888"); // 3
        Instrmt_85_set.insert("RedemptionDate_t_922535888");
        Instrmt_85.add_attribute("StrkPx", "8334941.480000"); // 3
        Instrmt_85_set.insert("8334941.480000");
        Instrmt_85.add_attribute("StrkCcy", "USD"); // 3
        Instrmt_85_set.insert("USD");
        Instrmt_85.add_attribute("StrkMult", "4617415.860000"); // 3
        Instrmt_85_set.insert("4617415.860000");
        Instrmt_85.add_attribute("StrkValu", "11354177.950000"); // 3
        Instrmt_85_set.insert("11354177.950000");
        Instrmt_85.add_attribute("StrkPxDtrmnMeth", "4"); // 3
        Instrmt_85_set.insert("4");
        Instrmt_85.add_attribute("StrkPxBndryMeth", "4"); // 3
        Instrmt_85_set.insert("4");
        Instrmt_85.add_attribute("StrkPxBndryPrcsn", "10422207.360000"); // 3
        Instrmt_85_set.insert("10422207.360000");
        Instrmt_85.add_attribute("PxDtrmnMeth", "2"); // 3
        Instrmt_85_set.insert("2");
        Instrmt_85.add_attribute("OptAt", "2131276607"); // 3
        Instrmt_85_set.insert("2131276607");
        Instrmt_85.add_attribute("Mult", "20914327.720000"); // 3
        Instrmt_85_set.insert("20914327.720000");
        Instrmt_85.add_attribute("MultTyp", "1"); // 3
        Instrmt_85_set.insert("1");
        Instrmt_85.add_attribute("FlowSchedTyp", "1"); // 3
        Instrmt_85_set.insert("1");
        Instrmt_85.add_attribute("MinPxIncr", "12613300.920000"); // 3
        Instrmt_85_set.insert("12613300.920000");
        Instrmt_85.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1040512616"); // 3
        Instrmt_85_set.insert("MinPriceIncrementAmount_t_1040512616");
        Instrmt_85.add_attribute("UOM", "oz_tr"); // 3
        Instrmt_85_set.insert("oz_tr");
        Instrmt_85.add_attribute("UOMQty", "17010406.710000"); // 3
        Instrmt_85_set.insert("17010406.710000");
        Instrmt_85.add_attribute("PxUOM", "Gal"); // 3
        Instrmt_85_set.insert("Gal");
        Instrmt_85.add_attribute("PxUOMQty", "20961991.610000"); // 3
        Instrmt_85_set.insert("20961991.610000");
        Instrmt_85.add_attribute("SettlMeth", "C"); // 3
        Instrmt_85_set.insert("C");
        Instrmt_85.add_attribute("ExerStyle", "2"); // 3
        Instrmt_85_set.insert("2");
        Instrmt_85.add_attribute("OptPayoutTyp", "3"); // 3
        Instrmt_85_set.insert("3");
        Instrmt_85.add_attribute("OptPayAmt", "OptPayoutAmount_t_101998952"); // 3
        Instrmt_85_set.insert("OptPayoutAmount_t_101998952");
        Instrmt_85.add_attribute("PxQteMeth", "PCTPAR"); // 3
        Instrmt_85_set.insert("PCTPAR");
        Instrmt_85.add_attribute("ValMeth", "CDS"); // 3
        Instrmt_85_set.insert("CDS");
        Instrmt_85.add_attribute("ListMeth", "0"); // 3
        Instrmt_85_set.insert("0");
        Instrmt_85.add_attribute("CapPx", "11181208.960000"); // 3
        Instrmt_85_set.insert("11181208.960000");
        Instrmt_85.add_attribute("FlrPx", "1291912.590000"); // 3
        Instrmt_85_set.insert("1291912.590000");
        Instrmt_85.add_attribute("PutCall", "1"); // 3
        Instrmt_85_set.insert("1");
        Instrmt_85.add_attribute("FlexInd", "false"); // 3
        Instrmt_85_set.insert("false");
        Instrmt_85.add_attribute("FlexProdElig", "false"); // 3
        Instrmt_85_set.insert("false");
        Instrmt_85.add_attribute("TmUnit", "Mo"); // 3
        Instrmt_85_set.insert("Mo");
        Instrmt_85.add_attribute("CpnRt", "9887089.110000"); // 3
        Instrmt_85_set.insert("9887089.110000");
        Instrmt_85.add_attribute("Exch", "SecurityExchange_t_1758750863"); // 3
        Instrmt_85_set.insert("SecurityExchange_t_1758750863");
        Instrmt_85.add_attribute("PosLmt", "1238714446"); // 3
        Instrmt_85_set.insert("1238714446");
        Instrmt_85.add_attribute("NTPosLmt", "2124126706"); // 3
        Instrmt_85_set.insert("2124126706");
        Instrmt_85.add_attribute("Issr", "Issuer_t_61292086"); // 3
        Instrmt_85_set.insert("Issuer_t_61292086");
        Instrmt_85.add_attribute("EncIssrLen", "717293446"); // 3
        Instrmt_85_set.insert("717293446");
        Instrmt_85.add_attribute("EncIssr", "EncodedIssuer_t_1018863794"); // 3
        Instrmt_85_set.insert("EncodedIssuer_t_1018863794");
        Instrmt_85.add_attribute("Desc", "SecurityDesc_t_1373193655"); // 3
        Instrmt_85_set.insert("SecurityDesc_t_1373193655");
        Instrmt_85.add_attribute("EncSecDescLen", "701086406"); // 3
        Instrmt_85_set.insert("701086406");
        Instrmt_85.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_962812919"); // 3
        Instrmt_85_set.insert("EncodedSecurityDesc_t_962812919");
        Instrmt_85.add_attribute("Pool", "Pool_t_1104120522"); // 3
        Instrmt_85_set.insert("Pool_t_1104120522");
        Instrmt_85.add_attribute("CSetMo", "1524450952"); // 3
        Instrmt_85_set.insert("1524450952");
        Instrmt_85.add_attribute("CPPgm", "1"); // 3
        Instrmt_85_set.insert("1");
        Instrmt_85.add_attribute("CPRegT", "CPRegType_t_2144633139"); // 3
        Instrmt_85_set.insert("CPRegType_t_2144633139");
        Instrmt_85.add_attribute("Dated", "DatedDate_t_264621066"); // 3
        Instrmt_85_set.insert("DatedDate_t_264621066");
        Instrmt_85.add_attribute("IntAcrl", "InterestAccrualDate_t_1777700035"); // 3
        Instrmt_85_set.insert("InterestAccrualDate_t_1777700035");
        all_values.push_back(Instrmt_85_set);
        all_compo_names.insert("Instrmt_85_set");

        {
          xml_element AID_88{"AID"};
          multiset<string> AID_88_set;
          AID_88.add_attribute("AltID", "SecurityAltID_t_1878922075"); // 4
          AID_88_set.insert("SecurityAltID_t_1878922075");
          AID_88.add_attribute("AltIDSrc", "6"); // 4
          AID_88_set.insert("6");
          all_values.push_back(AID_88_set);
          all_compo_names.insert("AID_88_set");

          Instrmt_85.add_element(AID_88);
        }
        {
          xml_element SecXML_88{"SecXML"};
          multiset<string> SecXML_88_set;
          SecXML_88.add_attribute("Schema", "SecurityXMLSchema_t_299656295"); // 4
          SecXML_88_set.insert("SecurityXMLSchema_t_299656295");
          all_values.push_back(SecXML_88_set);
          all_compo_names.insert("SecXML_88_set");

          Instrmt_85.add_element(SecXML_88);
        }
        {
          xml_element Evnt_88{"Evnt"};
          multiset<string> Evnt_88_set;
          Evnt_88.add_attribute("EventTyp", "9"); // 4
          Evnt_88_set.insert("9");
          Evnt_88.add_attribute("Dt", "EventDate_t_786206984"); // 4
          Evnt_88_set.insert("EventDate_t_786206984");
          Evnt_88.add_attribute("Tm", "EventTime_t_401655247"); // 4
          Evnt_88_set.insert("EventTime_t_401655247");
          Evnt_88.add_attribute("Px", "14844362.650000"); // 4
          Evnt_88_set.insert("14844362.650000");
          Evnt_88.add_attribute("Txt", "EventText_t_271073674"); // 4
          Evnt_88_set.insert("EventText_t_271073674");
          all_values.push_back(Evnt_88_set);
          all_compo_names.insert("Evnt_88_set");

          Instrmt_85.add_element(Evnt_88);
        }
        {
          xml_element Pty_436{"Pty"};
          multiset<string> Pty_436_set;
          Pty_436.add_attribute("ID", "InstrumentPartyID_t_930889736"); // 4
          Pty_436_set.insert("InstrumentPartyID_t_930889736");
          Pty_436.add_attribute("Src", "G"); // 4
          Pty_436_set.insert("G");
          Pty_436.add_attribute("R", "63"); // 4
          Pty_436_set.insert("63");
          all_values.push_back(Pty_436_set);
          all_compo_names.insert("Pty_436_set");

          {
            xml_element Sub_436{"Sub"};
            multiset<string> Sub_436_set;
            Sub_436.add_attribute("ID", "InstrumentPartySubID_t_874368447"); // 5
            Sub_436_set.insert("InstrumentPartySubID_t_874368447");
            Sub_436.add_attribute("Typ", "14"); // 5
            Sub_436_set.insert("14");
            all_values.push_back(Sub_436_set);
            all_compo_names.insert("Sub_436_set");

            Pty_436.add_element(Sub_436);
          }
          Instrmt_85.add_element(Pty_436);
        }
        {
          xml_element CmplxEvnt_85{"CmplxEvnt"};
          multiset<string> CmplxEvnt_85_set;
          CmplxEvnt_85.add_attribute("Typ", "5"); // 4
          CmplxEvnt_85_set.insert("5");
          CmplxEvnt_85.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1651341307"); // 4
          CmplxEvnt_85_set.insert("ComplexOptPayoutAmount_t_1651341307");
          CmplxEvnt_85.add_attribute("Px", "19149668.420000"); // 4
          CmplxEvnt_85_set.insert("19149668.420000");
          CmplxEvnt_85.add_attribute("PxBndryMeth", "2"); // 4
          CmplxEvnt_85_set.insert("2");
          CmplxEvnt_85.add_attribute("PxBndryPrcsn", "7425721.050000"); // 4
          CmplxEvnt_85_set.insert("7425721.050000");
          CmplxEvnt_85.add_attribute("PxTmTyp", "2"); // 4
          CmplxEvnt_85_set.insert("2");
          CmplxEvnt_85.add_attribute("Cond", "2"); // 4
          CmplxEvnt_85_set.insert("2");
          all_values.push_back(CmplxEvnt_85_set);
          all_compo_names.insert("CmplxEvnt_85_set");

          {
            xml_element EvntDts_85{"EvntDts"};
            multiset<string> EvntDts_85_set;
            EvntDts_85.add_attribute("StartDt", "ComplexEventStartDate_t_1459865551"); // 5
            EvntDts_85_set.insert("ComplexEventStartDate_t_1459865551");
            EvntDts_85.add_attribute("EndDt", "ComplexEventEndDate_t_762990046"); // 5
            EvntDts_85_set.insert("ComplexEventEndDate_t_762990046");
            all_values.push_back(EvntDts_85_set);
            all_compo_names.insert("EvntDts_85_set");

            {
              xml_element EvntTms_85{"EvntTms"};
              multiset<string> EvntTms_85_set;
              EvntTms_85.add_attribute("StartTm", "350261390"); // 6
              EvntTms_85_set.insert("350261390");
              EvntTms_85.add_attribute("EndTm", "13468309"); // 6
              EvntTms_85_set.insert("13468309");
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
      Rpts_2.add_element(Instrmts_2);
    }
    elt.add_element(Rpts_2);
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
