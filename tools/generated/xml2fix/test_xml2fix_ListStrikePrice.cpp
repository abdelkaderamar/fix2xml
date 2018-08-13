#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStrikePrice.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStrikePrice_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListStrkPx" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStrikePrice_message_t_0;
  elt.add_attribute("ID", "ListID_t_1101058709"); // 0
  ListStrikePrice_message_t_0.insert("ListID_t_1101058709");
  elt.add_attribute("TotNoStrks", "1270671512"); // 0
  ListStrikePrice_message_t_0.insert("1270671512");
  elt.add_attribute("LastFragment", "Y"); // 0
  ListStrikePrice_message_t_0.insert("Y");
  all_values.push_back(ListStrikePrice_message_t_0);
  all_compo_names.insert("ListStrikePrice_message_t");

  { // Hdr
    xml_element Hdr_38{"Hdr"};
    multiset<string> Hdr_38_set;
    Hdr_38.add_attribute("SeqNum", "1247244868"); // 1
    Hdr_38_set.insert("1247244868");
    Hdr_38.add_attribute("SID", "SenderCompID_t_458405434"); // 1
    Hdr_38_set.insert("SenderCompID_t_458405434");
    Hdr_38.add_attribute("TID", "TargetCompID_t_1447668459"); // 1
    Hdr_38_set.insert("TargetCompID_t_1447668459");
    Hdr_38.add_attribute("OBID", "OnBehalfOfCompID_t_1152915150"); // 1
    Hdr_38_set.insert("OnBehalfOfCompID_t_1152915150");
    Hdr_38.add_attribute("D2ID", "DeliverToCompID_t_104359799"); // 1
    Hdr_38_set.insert("DeliverToCompID_t_104359799");
    Hdr_38.add_attribute("SSub", "SenderSubID_t_141332265"); // 1
    Hdr_38_set.insert("SenderSubID_t_141332265");
    Hdr_38.add_attribute("SLoc", "SenderLocationID_t_361877312"); // 1
    Hdr_38_set.insert("SenderLocationID_t_361877312");
    Hdr_38.add_attribute("TSub", "TargetSubID_t_129791824"); // 1
    Hdr_38_set.insert("TargetSubID_t_129791824");
    Hdr_38.add_attribute("TLoc", "TargetLocationID_t_1234732375"); // 1
    Hdr_38_set.insert("TargetLocationID_t_1234732375");
    Hdr_38.add_attribute("OBSub", "OnBehalfOfSubID_t_158432291"); // 1
    Hdr_38_set.insert("OnBehalfOfSubID_t_158432291");
    Hdr_38.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1821754581"); // 1
    Hdr_38_set.insert("OnBehalfOfLocationID_t_1821754581");
    Hdr_38.add_attribute("D2Sub", "DeliverToSubID_t_263220884"); // 1
    Hdr_38_set.insert("DeliverToSubID_t_263220884");
    Hdr_38.add_attribute("D2Loc", "DeliverToLocationID_t_796088600"); // 1
    Hdr_38_set.insert("DeliverToLocationID_t_796088600");
    Hdr_38.add_attribute("PosDup", "Y"); // 1
    Hdr_38_set.insert("Y");
    Hdr_38.add_attribute("PosRsnd", "N"); // 1
    Hdr_38_set.insert("N");
    Hdr_38.add_attribute("Snt", "SendingTime_t_1515106594"); // 1
    Hdr_38_set.insert("SendingTime_t_1515106594");
    Hdr_38.add_attribute("OrigSnt", "OrigSendingTime_t_1610361825"); // 1
    Hdr_38_set.insert("OrigSendingTime_t_1610361825");
    Hdr_38.add_attribute("MsgEncd", "MessageEncoding_t_79479856"); // 1
    Hdr_38_set.insert("MessageEncoding_t_79479856");
    all_values.push_back(Hdr_38_set);
    all_compo_names.insert("Hdr_38_set");

    {
      xml_element Hop_38{"Hop"};
      multiset<string> Hop_38_set;
      Hop_38.add_attribute("ID", "HopCompID_t_968283239"); // 2
      Hop_38_set.insert("HopCompID_t_968283239");
      Hop_38.add_attribute("Ref", "1918158367"); // 2
      Hop_38_set.insert("1918158367");
      Hop_38.add_attribute("Snt", "HopSendingTime_t_205463826"); // 2
      Hop_38_set.insert("HopSendingTime_t_205463826");
      all_values.push_back(Hop_38_set);
      all_compo_names.insert("Hop_38_set");

      Hdr_38.add_element(Hop_38);
    }
    elt.add_element(Hdr_38);
  } // end Hdr
  { // StrkPX
    xml_element StrkPX_0{"StrkPX"};
    multiset<string> StrkPX_0_set;
    StrkPX_0.add_attribute("PrevClsPx", "21218567.650000"); // 1
    StrkPX_0_set.insert("21218567.650000");
    StrkPX_0.add_attribute("ClOrdID", "ClOrdID_t_1351456550"); // 1
    StrkPX_0_set.insert("ClOrdID_t_1351456550");
    StrkPX_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_839994251"); // 1
    StrkPX_0_set.insert("SecondaryClOrdID_t_839994251");
    StrkPX_0.add_attribute("Side", "G"); // 1
    StrkPX_0_set.insert("G");
    StrkPX_0.add_attribute("Px", "20898406.360000"); // 1
    StrkPX_0_set.insert("20898406.360000");
    StrkPX_0.add_attribute("Ccy", "GBP"); // 1
    StrkPX_0_set.insert("GBP");
    StrkPX_0.add_attribute("Txt", "Text_t_1213028500"); // 1
    StrkPX_0_set.insert("Text_t_1213028500");
    StrkPX_0.add_attribute("EncTxtLen", "1836172263"); // 1
    StrkPX_0_set.insert("1836172263");
    StrkPX_0.add_attribute("EncTxt", "EncodedText_t_304088776"); // 1
    StrkPX_0_set.insert("EncodedText_t_304088776");
    all_values.push_back(StrkPX_0_set);
    all_compo_names.insert("StrkPX_0_set");

    {
      xml_element Instrmt_27{"Instrmt"};
      multiset<string> Instrmt_27_set;
      Instrmt_27.add_attribute("Sym", "Symbol_t_1671433934"); // 2
      Instrmt_27_set.insert("Symbol_t_1671433934");
      Instrmt_27.add_attribute("Sfx", "CD"); // 2
      Instrmt_27_set.insert("CD");
      Instrmt_27.add_attribute("ID", "SecurityID_t_1457003926"); // 2
      Instrmt_27_set.insert("SecurityID_t_1457003926");
      Instrmt_27.add_attribute("Src", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("Prod", "13"); // 2
      Instrmt_27_set.insert("13");
      Instrmt_27.add_attribute("ProdCmplx", "ProductComplex_t_1818881238"); // 2
      Instrmt_27_set.insert("ProductComplex_t_1818881238");
      Instrmt_27.add_attribute("SecGrp", "SecurityGroup_t_1905585558"); // 2
      Instrmt_27_set.insert("SecurityGroup_t_1905585558");
      Instrmt_27.add_attribute("CFI", "CFICode_t_364938066"); // 2
      Instrmt_27_set.insert("CFICode_t_364938066");
      Instrmt_27.add_attribute("SecTyp", "LQN"); // 2
      Instrmt_27_set.insert("LQN");
      Instrmt_27.add_attribute("SubTyp", "SecuritySubType_t_1579856491"); // 2
      Instrmt_27_set.insert("SecuritySubType_t_1579856491");
      Instrmt_27.add_attribute("MMY", "628158951"); // 2
      Instrmt_27_set.insert("628158951");
      Instrmt_27.add_attribute("MatDt", "MaturityDate_t_625918482"); // 2
      Instrmt_27_set.insert("MaturityDate_t_625918482");
      Instrmt_27.add_attribute("MatTm", "147122733"); // 2
      Instrmt_27_set.insert("147122733");
      Instrmt_27.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1012903543"); // 2
      Instrmt_27_set.insert("SettleOnOpenFlag_t_1012903543");
      Instrmt_27.add_attribute("AsgnMeth", "2141025076"); // 2
      Instrmt_27_set.insert("2141025076");
      Instrmt_27.add_attribute("Status", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("CpnPmt", "CouponPaymentDate_t_1092383399"); // 2
      Instrmt_27_set.insert("CouponPaymentDate_t_1092383399");
      Instrmt_27.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_27_set.insert("XR");
      Instrmt_27.add_attribute("Snrty", "SB"); // 2
      Instrmt_27_set.insert("SB");
      Instrmt_27.add_attribute("NotlPctOut", "12978472.250000"); // 2
      Instrmt_27_set.insert("12978472.250000");
      Instrmt_27.add_attribute("OrigNotlPctOut", "67344.440000"); // 2
      Instrmt_27_set.insert("67344.440000");
      Instrmt_27.add_attribute("AttchPnt", "15025323.950000"); // 2
      Instrmt_27_set.insert("15025323.950000");
      Instrmt_27.add_attribute("DetchPnt", "5018201.270000"); // 2
      Instrmt_27_set.insert("5018201.270000");
      Instrmt_27.add_attribute("Issued", "IssueDate_t_846728695"); // 2
      Instrmt_27_set.insert("IssueDate_t_846728695");
      Instrmt_27.add_attribute("RepoCollSecTyp", "1605801242"); // 2
      Instrmt_27_set.insert("1605801242");
      Instrmt_27.add_attribute("RepoTrm", "444177116"); // 2
      Instrmt_27_set.insert("444177116");
      Instrmt_27.add_attribute("RepoRt", "6405084.550000"); // 2
      Instrmt_27_set.insert("6405084.550000");
      Instrmt_27.add_attribute("Fctr", "6626451.500000"); // 2
      Instrmt_27_set.insert("6626451.500000");
      Instrmt_27.add_attribute("CrdRtg", "CreditRating_t_1657205616"); // 2
      Instrmt_27_set.insert("CreditRating_t_1657205616");
      Instrmt_27.add_attribute("Rgstry", "InstrRegistry_t_329197070"); // 2
      Instrmt_27_set.insert("InstrRegistry_t_329197070");
      Instrmt_27.add_attribute("IssuCtry", "966733926"); // 2
      Instrmt_27_set.insert("966733926");
      Instrmt_27.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1181155903"); // 2
      Instrmt_27_set.insert("StateOrProvinceOfIssue_t_1181155903");
      Instrmt_27.add_attribute("Lcl", "LocaleOfIssue_t_1465554144"); // 2
      Instrmt_27_set.insert("LocaleOfIssue_t_1465554144");
      Instrmt_27.add_attribute("Redeem", "RedemptionDate_t_276254204"); // 2
      Instrmt_27_set.insert("RedemptionDate_t_276254204");
      Instrmt_27.add_attribute("StrkPx", "8094659.890000"); // 2
      Instrmt_27_set.insert("8094659.890000");
      Instrmt_27.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_27_set.insert("GBP");
      Instrmt_27.add_attribute("StrkMult", "5675678.990000"); // 2
      Instrmt_27_set.insert("5675678.990000");
      Instrmt_27.add_attribute("StrkValu", "9606979.020000"); // 2
      Instrmt_27_set.insert("9606979.020000");
      Instrmt_27.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_27_set.insert("2");
      Instrmt_27.add_attribute("StrkPxBndryPrcsn", "15888568.530000"); // 2
      Instrmt_27_set.insert("15888568.530000");
      Instrmt_27.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_27_set.insert("3");
      Instrmt_27.add_attribute("OptAt", "147063476"); // 2
      Instrmt_27_set.insert("147063476");
      Instrmt_27.add_attribute("Mult", "4542767.480000"); // 2
      Instrmt_27_set.insert("4542767.480000");
      Instrmt_27.add_attribute("MultTyp", "0"); // 2
      Instrmt_27_set.insert("0");
      Instrmt_27.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_27_set.insert("4");
      Instrmt_27.add_attribute("MinPxIncr", "15466601.470000"); // 2
      Instrmt_27_set.insert("15466601.470000");
      Instrmt_27.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1358766253"); // 2
      Instrmt_27_set.insert("MinPriceIncrementAmount_t_1358766253");
      Instrmt_27.add_attribute("UOM", "USD"); // 2
      Instrmt_27_set.insert("USD");
      Instrmt_27.add_attribute("UOMQty", "6970237.240000"); // 2
      Instrmt_27_set.insert("6970237.240000");
      Instrmt_27.add_attribute("PxUOM", "Gal"); // 2
      Instrmt_27_set.insert("Gal");
      Instrmt_27.add_attribute("PxUOMQty", "6402724.100000"); // 2
      Instrmt_27_set.insert("6402724.100000");
      Instrmt_27.add_attribute("SettlMeth", "C"); // 2
      Instrmt_27_set.insert("C");
      Instrmt_27.add_attribute("ExerStyle", "0"); // 2
      Instrmt_27_set.insert("0");
      Instrmt_27.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_27_set.insert("3");
      Instrmt_27.add_attribute("OptPayAmt", "OptPayoutAmount_t_1643020968"); // 2
      Instrmt_27_set.insert("OptPayoutAmount_t_1643020968");
      Instrmt_27.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_27_set.insert("STD");
      Instrmt_27.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_27_set.insert("CDSD");
      Instrmt_27.add_attribute("ListMeth", "0"); // 2
      Instrmt_27_set.insert("0");
      Instrmt_27.add_attribute("CapPx", "10344512.700000"); // 2
      Instrmt_27_set.insert("10344512.700000");
      Instrmt_27.add_attribute("FlrPx", "17279690.800000"); // 2
      Instrmt_27_set.insert("17279690.800000");
      Instrmt_27.add_attribute("PutCall", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("FlexInd", "false"); // 2
      Instrmt_27_set.insert("false");
      Instrmt_27.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_27_set.insert("true");
      Instrmt_27.add_attribute("TmUnit", "S"); // 2
      Instrmt_27_set.insert("S");
      Instrmt_27.add_attribute("CpnRt", "9482816.030000"); // 2
      Instrmt_27_set.insert("9482816.030000");
      Instrmt_27.add_attribute("Exch", "SecurityExchange_t_1951875079"); // 2
      Instrmt_27_set.insert("SecurityExchange_t_1951875079");
      Instrmt_27.add_attribute("PosLmt", "1563449080"); // 2
      Instrmt_27_set.insert("1563449080");
      Instrmt_27.add_attribute("NTPosLmt", "1908979505"); // 2
      Instrmt_27_set.insert("1908979505");
      Instrmt_27.add_attribute("Issr", "Issuer_t_1729356755"); // 2
      Instrmt_27_set.insert("Issuer_t_1729356755");
      Instrmt_27.add_attribute("EncIssrLen", "1563389823"); // 2
      Instrmt_27_set.insert("1563389823");
      Instrmt_27.add_attribute("EncIssr", "EncodedIssuer_t_1350352711"); // 2
      Instrmt_27_set.insert("EncodedIssuer_t_1350352711");
      Instrmt_27.add_attribute("Desc", "SecurityDesc_t_2132756913"); // 2
      Instrmt_27_set.insert("SecurityDesc_t_2132756913");
      Instrmt_27.add_attribute("EncSecDescLen", "1710453299"); // 2
      Instrmt_27_set.insert("1710453299");
      Instrmt_27.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1804629459"); // 2
      Instrmt_27_set.insert("EncodedSecurityDesc_t_1804629459");
      Instrmt_27.add_attribute("Pool", "Pool_t_382214851"); // 2
      Instrmt_27_set.insert("Pool_t_382214851");
      Instrmt_27.add_attribute("CSetMo", "1467517685"); // 2
      Instrmt_27_set.insert("1467517685");
      Instrmt_27.add_attribute("CPPgm", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("CPRegT", "CPRegType_t_1740981104"); // 2
      Instrmt_27_set.insert("CPRegType_t_1740981104");
      Instrmt_27.add_attribute("Dated", "DatedDate_t_605257700"); // 2
      Instrmt_27_set.insert("DatedDate_t_605257700");
      Instrmt_27.add_attribute("IntAcrl", "InterestAccrualDate_t_1900829683"); // 2
      Instrmt_27_set.insert("InterestAccrualDate_t_1900829683");
      all_values.push_back(Instrmt_27_set);
      all_compo_names.insert("Instrmt_27_set");

      {
        xml_element AID_30{"AID"};
        multiset<string> AID_30_set;
        AID_30.add_attribute("AltID", "SecurityAltID_t_958998154"); // 3
        AID_30_set.insert("SecurityAltID_t_958998154");
        AID_30.add_attribute("AltIDSrc", "2"); // 3
        AID_30_set.insert("2");
        all_values.push_back(AID_30_set);
        all_compo_names.insert("AID_30_set");

        Instrmt_27.add_element(AID_30);
      }
      {
        xml_element SecXML_30{"SecXML"};
        multiset<string> SecXML_30_set;
        SecXML_30.add_attribute("Schema", "SecurityXMLSchema_t_952189887"); // 3
        SecXML_30_set.insert("SecurityXMLSchema_t_952189887");
        all_values.push_back(SecXML_30_set);
        all_compo_names.insert("SecXML_30_set");

        Instrmt_27.add_element(SecXML_30);
      }
      {
        xml_element Evnt_30{"Evnt"};
        multiset<string> Evnt_30_set;
        Evnt_30.add_attribute("EventTyp", "1"); // 3
        Evnt_30_set.insert("1");
        Evnt_30.add_attribute("Dt", "EventDate_t_1344120115"); // 3
        Evnt_30_set.insert("EventDate_t_1344120115");
        Evnt_30.add_attribute("Tm", "EventTime_t_447727207"); // 3
        Evnt_30_set.insert("EventTime_t_447727207");
        Evnt_30.add_attribute("Px", "17289981.000000"); // 3
        Evnt_30_set.insert("17289981.000000");
        Evnt_30.add_attribute("Txt", "EventText_t_2105355270"); // 3
        Evnt_30_set.insert("EventText_t_2105355270");
        all_values.push_back(Evnt_30_set);
        all_compo_names.insert("Evnt_30_set");

        Instrmt_27.add_element(Evnt_30);
      }
      {
        xml_element Pty_163{"Pty"};
        multiset<string> Pty_163_set;
        Pty_163.add_attribute("ID", "InstrumentPartyID_t_1600470144"); // 3
        Pty_163_set.insert("InstrumentPartyID_t_1600470144");
        Pty_163.add_attribute("Src", "I"); // 3
        Pty_163_set.insert("I");
        Pty_163.add_attribute("R", "22"); // 3
        Pty_163_set.insert("22");
        all_values.push_back(Pty_163_set);
        all_compo_names.insert("Pty_163_set");

        {
          xml_element Sub_163{"Sub"};
          multiset<string> Sub_163_set;
          Sub_163.add_attribute("ID", "InstrumentPartySubID_t_1786885335"); // 4
          Sub_163_set.insert("InstrumentPartySubID_t_1786885335");
          Sub_163.add_attribute("Typ", "9"); // 4
          Sub_163_set.insert("9");
          all_values.push_back(Sub_163_set);
          all_compo_names.insert("Sub_163_set");

          Pty_163.add_element(Sub_163);
        }
        Instrmt_27.add_element(Pty_163);
      }
      {
        xml_element CmplxEvnt_27{"CmplxEvnt"};
        multiset<string> CmplxEvnt_27_set;
        CmplxEvnt_27.add_attribute("Typ", "5"); // 3
        CmplxEvnt_27_set.insert("5");
        CmplxEvnt_27.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_635282868"); // 3
        CmplxEvnt_27_set.insert("ComplexOptPayoutAmount_t_635282868");
        CmplxEvnt_27.add_attribute("Px", "19167690.930000"); // 3
        CmplxEvnt_27_set.insert("19167690.930000");
        CmplxEvnt_27.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_27_set.insert("1");
        CmplxEvnt_27.add_attribute("PxBndryPrcsn", "512483.000000"); // 3
        CmplxEvnt_27_set.insert("512483.000000");
        CmplxEvnt_27.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_27_set.insert("1");
        CmplxEvnt_27.add_attribute("Cond", "2"); // 3
        CmplxEvnt_27_set.insert("2");
        all_values.push_back(CmplxEvnt_27_set);
        all_compo_names.insert("CmplxEvnt_27_set");

        {
          xml_element EvntDts_27{"EvntDts"};
          multiset<string> EvntDts_27_set;
          EvntDts_27.add_attribute("StartDt", "ComplexEventStartDate_t_1614638123"); // 4
          EvntDts_27_set.insert("ComplexEventStartDate_t_1614638123");
          EvntDts_27.add_attribute("EndDt", "ComplexEventEndDate_t_881134013"); // 4
          EvntDts_27_set.insert("ComplexEventEndDate_t_881134013");
          all_values.push_back(EvntDts_27_set);
          all_compo_names.insert("EvntDts_27_set");

          {
            xml_element EvntTms_27{"EvntTms"};
            multiset<string> EvntTms_27_set;
            EvntTms_27.add_attribute("StartTm", "914118142"); // 5
            EvntTms_27_set.insert("914118142");
            EvntTms_27.add_attribute("EndTm", "1177607774"); // 5
            EvntTms_27_set.insert("1177607774");
            all_values.push_back(EvntTms_27_set);
            all_compo_names.insert("EvntTms_27_set");

            EvntDts_27.add_element(EvntTms_27);
          }
          CmplxEvnt_27.add_element(EvntDts_27);
        }
        Instrmt_27.add_element(CmplxEvnt_27);
      }
      StrkPX_0.add_element(Instrmt_27);
    }
    {
      xml_element Undly_39{"Undly"};
      multiset<string> Undly_39_set;
      Undly_39.add_attribute("Sym", "UnderlyingSymbol_t_538279825"); // 2
      Undly_39_set.insert("UnderlyingSymbol_t_538279825");
      Undly_39.add_attribute("Sfx", "WI"); // 2
      Undly_39_set.insert("WI");
      Undly_39.add_attribute("ID", "UnderlyingSecurityID_t_497641811"); // 2
      Undly_39_set.insert("UnderlyingSecurityID_t_497641811");
      Undly_39.add_attribute("Src", "B"); // 2
      Undly_39_set.insert("B");
      Undly_39.add_attribute("Prod", "10"); // 2
      Undly_39_set.insert("10");
      Undly_39.add_attribute("CFI", "UnderlyingCFICode_t_1102899511"); // 2
      Undly_39_set.insert("UnderlyingCFICode_t_1102899511");
      Undly_39.add_attribute("SecTyp", "AMENDED"); // 2
      Undly_39_set.insert("AMENDED");
      Undly_39.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1848828604"); // 2
      Undly_39_set.insert("UnderlyingSecuritySubType_t_1848828604");
      Undly_39.add_attribute("MMY", "200945974"); // 2
      Undly_39_set.insert("200945974");
      Undly_39.add_attribute("Mat", "UnderlyingMaturityDate_t_300138059"); // 2
      Undly_39_set.insert("UnderlyingMaturityDate_t_300138059");
      Undly_39.add_attribute("MatTm", "725088856"); // 2
      Undly_39_set.insert("725088856");
      Undly_39.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1545066090"); // 2
      Undly_39_set.insert("UnderlyingCouponPaymentDate_t_1545066090");
      Undly_39.add_attribute("RestrctTyp", "MM"); // 2
      Undly_39_set.insert("MM");
      Undly_39.add_attribute("Snrty", "SB"); // 2
      Undly_39_set.insert("SB");
      Undly_39.add_attribute("NotlPctOut", "15029377.120000"); // 2
      Undly_39_set.insert("15029377.120000");
      Undly_39.add_attribute("OrigNotlPctOut", "2008517.620000"); // 2
      Undly_39_set.insert("2008517.620000");
      Undly_39.add_attribute("AttchPnt", "9225690.310000"); // 2
      Undly_39_set.insert("9225690.310000");
      Undly_39.add_attribute("DetchPnt", "10412947.660000"); // 2
      Undly_39_set.insert("10412947.660000");
      Undly_39.add_attribute("Issued", "UnderlyingIssueDate_t_1987737098"); // 2
      Undly_39_set.insert("UnderlyingIssueDate_t_1987737098");
      Undly_39.add_attribute("RepoCollSecTyp", "1891056521"); // 2
      Undly_39_set.insert("1891056521");
      Undly_39.add_attribute("RepoTrm", "436391457"); // 2
      Undly_39_set.insert("436391457");
      Undly_39.add_attribute("RepoRt", "4755363.180000"); // 2
      Undly_39_set.insert("4755363.180000");
      Undly_39.add_attribute("Fctr", "16603419.660000"); // 2
      Undly_39_set.insert("16603419.660000");
      Undly_39.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1783363227"); // 2
      Undly_39_set.insert("UnderlyingCreditRating_t_1783363227");
      Undly_39.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_526784618"); // 2
      Undly_39_set.insert("UnderlyingInstrRegistry_t_526784618");
      Undly_39.add_attribute("Ctry", "1191123269"); // 2
      Undly_39_set.insert("1191123269");
      Undly_39.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_564724456"); // 2
      Undly_39_set.insert("UnderlyingStateOrProvinceOfIssue_t_564724456");
      Undly_39.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2141422741"); // 2
      Undly_39_set.insert("UnderlyingLocaleOfIssue_t_2141422741");
      Undly_39.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2072257282"); // 2
      Undly_39_set.insert("UnderlyingRedemptionDate_t_2072257282");
      Undly_39.add_attribute("StrkPx", "14788425.980000"); // 2
      Undly_39_set.insert("14788425.980000");
      Undly_39.add_attribute("StrkCcy", "CHF"); // 2
      Undly_39_set.insert("CHF");
      Undly_39.add_attribute("OptA", "627691943"); // 2
      Undly_39_set.insert("627691943");
      Undly_39.add_attribute("Mult", "16691886.780000"); // 2
      Undly_39_set.insert("16691886.780000");
      Undly_39.add_attribute("MultTyp", "2"); // 2
      Undly_39_set.insert("2");
      Undly_39.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_39_set.insert("3");
      Undly_39.add_attribute("UOM", "Bbl"); // 2
      Undly_39_set.insert("Bbl");
      Undly_39.add_attribute("UOMQty", "15530874.150000"); // 2
      Undly_39_set.insert("15530874.150000");
      Undly_39.add_attribute("PxUOM", "Bu"); // 2
      Undly_39_set.insert("Bu");
      Undly_39.add_attribute("PxUOMQty", "8255505.160000"); // 2
      Undly_39_set.insert("8255505.160000");
      Undly_39.add_attribute("TmUnit", "H"); // 2
      Undly_39_set.insert("H");
      Undly_39.add_attribute("ExerStyle", "2"); // 2
      Undly_39_set.insert("2");
      Undly_39.add_attribute("CpnRt", "2231329.580000"); // 2
      Undly_39_set.insert("2231329.580000");
      Undly_39.add_attribute("Exch", "UnderlyingSecurityExchange_t_453607092"); // 2
      Undly_39_set.insert("UnderlyingSecurityExchange_t_453607092");
      Undly_39.add_attribute("Issr", "UnderlyingIssuer_t_103075865"); // 2
      Undly_39_set.insert("UnderlyingIssuer_t_103075865");
      Undly_39.add_attribute("EncUndIssrLen", "1726070670"); // 2
      Undly_39_set.insert("1726070670");
      Undly_39.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_654458855"); // 2
      Undly_39_set.insert("EncodedUnderlyingIssuer_t_654458855");
      Undly_39.add_attribute("Desc", "UnderlyingSecurityDesc_t_1025644897"); // 2
      Undly_39_set.insert("UnderlyingSecurityDesc_t_1025644897");
      Undly_39.add_attribute("EncUndSecDescLen", "619881788"); // 2
      Undly_39_set.insert("619881788");
      Undly_39.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_494712305"); // 2
      Undly_39_set.insert("EncodedUnderlyingSecurityDesc_t_494712305");
      Undly_39.add_attribute("CPPgm", "UnderlyingCPProgram_t_769217770"); // 2
      Undly_39_set.insert("UnderlyingCPProgram_t_769217770");
      Undly_39.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1056273246"); // 2
      Undly_39_set.insert("UnderlyingCPRegType_t_1056273246");
      Undly_39.add_attribute("AllocPct", "9702486.230000"); // 2
      Undly_39_set.insert("9702486.230000");
      Undly_39.add_attribute("Ccy", "EUR"); // 2
      Undly_39_set.insert("EUR");
      Undly_39.add_attribute("Qty", "14970332.410000"); // 2
      Undly_39_set.insert("14970332.410000");
      Undly_39.add_attribute("SettlTyp", "5"); // 2
      Undly_39_set.insert("5");
      Undly_39.add_attribute("CashAmt", "UnderlyingCashAmount_t_1256877282"); // 2
      Undly_39_set.insert("UnderlyingCashAmount_t_1256877282");
      Undly_39.add_attribute("CashTyp", "FIXED"); // 2
      Undly_39_set.insert("FIXED");
      Undly_39.add_attribute("Px", "13979729.920000"); // 2
      Undly_39_set.insert("13979729.920000");
      Undly_39.add_attribute("DirtPx", "5882362.320000"); // 2
      Undly_39_set.insert("5882362.320000");
      Undly_39.add_attribute("EndPx", "5150355.530000"); // 2
      Undly_39_set.insert("5150355.530000");
      Undly_39.add_attribute("StartVal", "UnderlyingStartValue_t_1861026452"); // 2
      Undly_39_set.insert("UnderlyingStartValue_t_1861026452");
      Undly_39.add_attribute("CurVal", "UnderlyingCurrentValue_t_1215928176"); // 2
      Undly_39_set.insert("UnderlyingCurrentValue_t_1215928176");
      Undly_39.add_attribute("EndVal", "UnderlyingEndValue_t_36740583"); // 2
      Undly_39_set.insert("UnderlyingEndValue_t_36740583");
      Undly_39.add_attribute("AdjQty", "19186820.470000"); // 2
      Undly_39_set.insert("19186820.470000");
      Undly_39.add_attribute("FxRate", "5859669.210000"); // 2
      Undly_39_set.insert("5859669.210000");
      Undly_39.add_attribute("FxRateCalc", "M"); // 2
      Undly_39_set.insert("M");
      Undly_39.add_attribute("CapValu", "UnderlyingCapValue_t_1324285814"); // 2
      Undly_39_set.insert("UnderlyingCapValue_t_1324285814");
      Undly_39.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1804834270"); // 2
      Undly_39_set.insert("UnderlyingSettlMethod_t_1804834270");
      Undly_39.add_attribute("PutCall", "1486895640"); // 2
      Undly_39_set.insert("1486895640");
      all_values.push_back(Undly_39_set);
      all_compo_names.insert("Undly_39_set");

      {
        xml_element UndAID_39{"UndAID"};
        multiset<string> UndAID_39_set;
        UndAID_39.add_attribute("AltID", "UnderlyingSecurityAltID_t_1030027640"); // 3
        UndAID_39_set.insert("UnderlyingSecurityAltID_t_1030027640");
        UndAID_39.add_attribute("AltIDSrc", "M"); // 3
        UndAID_39_set.insert("M");
        all_values.push_back(UndAID_39_set);
        all_compo_names.insert("UndAID_39_set");

        Undly_39.add_element(UndAID_39);
      }
      {
        xml_element Stip_66{"Stip"};
        multiset<string> Stip_66_set;
        Stip_66.add_attribute("Typ", "PROD"); // 3
        Stip_66_set.insert("PROD");
        Stip_66.add_attribute("Val", "UnderlyingStipValue_t_1483634733"); // 3
        Stip_66_set.insert("UnderlyingStipValue_t_1483634733");
        all_values.push_back(Stip_66_set);
        all_compo_names.insert("Stip_66_set");

        Undly_39.add_element(Stip_66);
      }
      {
        xml_element Pty_164{"Pty"};
        multiset<string> Pty_164_set;
        Pty_164.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1704382692"); // 3
        Pty_164_set.insert("UnderlyingInstrumentPartyID_t_1704382692");
        Pty_164.add_attribute("Src", "D"); // 3
        Pty_164_set.insert("D");
        Pty_164.add_attribute("R", "17"); // 3
        Pty_164_set.insert("17");
        all_values.push_back(Pty_164_set);
        all_compo_names.insert("Pty_164_set");

        {
          xml_element Sub_164{"Sub"};
          multiset<string> Sub_164_set;
          Sub_164.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_582543941"); // 4
          Sub_164_set.insert("UnderlyingInstrumentPartySubID_t_582543941");
          Sub_164.add_attribute("Typ", "28"); // 4
          Sub_164_set.insert("28");
          all_values.push_back(Sub_164_set);
          all_compo_names.insert("Sub_164_set");

          Pty_164.add_element(Sub_164);
        }
        Undly_39.add_element(Pty_164);
      }
      StrkPX_0.add_element(Undly_39);
    }
    elt.add_element(StrkPX_0);
  } // end StrkPX
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
