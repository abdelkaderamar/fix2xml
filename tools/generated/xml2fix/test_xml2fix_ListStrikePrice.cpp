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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListStrkPx" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStrikePrice_message_t_0;
  elt.add_attribute("ID", "ListID_t_2012096884"); // 0
  ListStrikePrice_message_t_0.insert("ListID_t_2012096884");
  elt.add_attribute("TotNoStrks", "1461102938"); // 0
  ListStrikePrice_message_t_0.insert("1461102938");
  elt.add_attribute("LastFragment", "N"); // 0
  ListStrikePrice_message_t_0.insert("N");
  all_values.push_back(ListStrikePrice_message_t_0);
  all_compo_names.insert("ListStrikePrice_message_t");

  { // Hdr
    xml_element Hdr_38{"Hdr"};
    multiset<string> Hdr_38_set;
    Hdr_38.add_attribute("SeqNum", "1932410587"); // 1
    Hdr_38_set.insert("1932410587");
    Hdr_38.add_attribute("SID", "SenderCompID_t_2088630347"); // 1
    Hdr_38_set.insert("SenderCompID_t_2088630347");
    Hdr_38.add_attribute("TID", "TargetCompID_t_1979094606"); // 1
    Hdr_38_set.insert("TargetCompID_t_1979094606");
    Hdr_38.add_attribute("OBID", "OnBehalfOfCompID_t_1022371083"); // 1
    Hdr_38_set.insert("OnBehalfOfCompID_t_1022371083");
    Hdr_38.add_attribute("D2ID", "DeliverToCompID_t_1228260560"); // 1
    Hdr_38_set.insert("DeliverToCompID_t_1228260560");
    Hdr_38.add_attribute("SSub", "SenderSubID_t_457757931"); // 1
    Hdr_38_set.insert("SenderSubID_t_457757931");
    Hdr_38.add_attribute("SLoc", "SenderLocationID_t_1678503934"); // 1
    Hdr_38_set.insert("SenderLocationID_t_1678503934");
    Hdr_38.add_attribute("TSub", "TargetSubID_t_829735205"); // 1
    Hdr_38_set.insert("TargetSubID_t_829735205");
    Hdr_38.add_attribute("TLoc", "TargetLocationID_t_1696249452"); // 1
    Hdr_38_set.insert("TargetLocationID_t_1696249452");
    Hdr_38.add_attribute("OBSub", "OnBehalfOfSubID_t_877509770"); // 1
    Hdr_38_set.insert("OnBehalfOfSubID_t_877509770");
    Hdr_38.add_attribute("OBLoc", "OnBehalfOfLocationID_t_255121126"); // 1
    Hdr_38_set.insert("OnBehalfOfLocationID_t_255121126");
    Hdr_38.add_attribute("D2Sub", "DeliverToSubID_t_132538163"); // 1
    Hdr_38_set.insert("DeliverToSubID_t_132538163");
    Hdr_38.add_attribute("D2Loc", "DeliverToLocationID_t_109826235"); // 1
    Hdr_38_set.insert("DeliverToLocationID_t_109826235");
    Hdr_38.add_attribute("PosDup", "N"); // 1
    Hdr_38_set.insert("N");
    Hdr_38.add_attribute("PosRsnd", "N"); // 1
    Hdr_38_set.insert("N");
    Hdr_38.add_attribute("Snt", "SendingTime_t_573269628"); // 1
    Hdr_38_set.insert("SendingTime_t_573269628");
    Hdr_38.add_attribute("OrigSnt", "OrigSendingTime_t_963130807"); // 1
    Hdr_38_set.insert("OrigSendingTime_t_963130807");
    Hdr_38.add_attribute("MsgEncd", "MessageEncoding_t_955877463"); // 1
    Hdr_38_set.insert("MessageEncoding_t_955877463");
    all_values.push_back(Hdr_38_set);
    all_compo_names.insert("Hdr_38_set");

    {
      xml_element Hop_38{"Hop"};
      multiset<string> Hop_38_set;
      Hop_38.add_attribute("ID", "HopCompID_t_1857984362"); // 2
      Hop_38_set.insert("HopCompID_t_1857984362");
      Hop_38.add_attribute("Ref", "168761349"); // 2
      Hop_38_set.insert("168761349");
      Hop_38.add_attribute("Snt", "HopSendingTime_t_656099101"); // 2
      Hop_38_set.insert("HopSendingTime_t_656099101");
      all_values.push_back(Hop_38_set);
      all_compo_names.insert("Hop_38_set");

      Hdr_38.add_element(Hop_38);
    }
    elt.add_element(Hdr_38);
  } // end Hdr
  { // StrkPX
    xml_element StrkPX_0{"StrkPX"};
    multiset<string> StrkPX_0_set;
    StrkPX_0.add_attribute("PrevClsPx", "16319719.540000"); // 1
    StrkPX_0_set.insert("16319719.540000");
    StrkPX_0.add_attribute("ClOrdID", "ClOrdID_t_1439693711"); // 1
    StrkPX_0_set.insert("ClOrdID_t_1439693711");
    StrkPX_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1858246943"); // 1
    StrkPX_0_set.insert("SecondaryClOrdID_t_1858246943");
    StrkPX_0.add_attribute("Side", "8"); // 1
    StrkPX_0_set.insert("8");
    StrkPX_0.add_attribute("Px", "20619143.290000"); // 1
    StrkPX_0_set.insert("20619143.290000");
    StrkPX_0.add_attribute("Ccy", "CAN"); // 1
    StrkPX_0_set.insert("CAN");
    StrkPX_0.add_attribute("Txt", "Text_t_1375533619"); // 1
    StrkPX_0_set.insert("Text_t_1375533619");
    StrkPX_0.add_attribute("EncTxtLen", "997716970"); // 1
    StrkPX_0_set.insert("997716970");
    StrkPX_0.add_attribute("EncTxt", "EncodedText_t_1123842647"); // 1
    StrkPX_0_set.insert("EncodedText_t_1123842647");
    all_values.push_back(StrkPX_0_set);
    all_compo_names.insert("StrkPX_0_set");

    {
      xml_element Instrmt_26{"Instrmt"};
      multiset<string> Instrmt_26_set;
      Instrmt_26.add_attribute("Sym", "Symbol_t_1316680319"); // 2
      Instrmt_26_set.insert("Symbol_t_1316680319");
      Instrmt_26.add_attribute("Sfx", "CD"); // 2
      Instrmt_26_set.insert("CD");
      Instrmt_26.add_attribute("ID", "SecurityID_t_2146213730"); // 2
      Instrmt_26_set.insert("SecurityID_t_2146213730");
      Instrmt_26.add_attribute("Src", "I"); // 2
      Instrmt_26_set.insert("I");
      Instrmt_26.add_attribute("Prod", "5"); // 2
      Instrmt_26_set.insert("5");
      Instrmt_26.add_attribute("ProdCmplx", "ProductComplex_t_1677234016"); // 2
      Instrmt_26_set.insert("ProductComplex_t_1677234016");
      Instrmt_26.add_attribute("SecGrp", "SecurityGroup_t_1227192436"); // 2
      Instrmt_26_set.insert("SecurityGroup_t_1227192436");
      Instrmt_26.add_attribute("CFI", "CFICode_t_835851664"); // 2
      Instrmt_26_set.insert("CFICode_t_835851664");
      Instrmt_26.add_attribute("SecTyp", "CMBS"); // 2
      Instrmt_26_set.insert("CMBS");
      Instrmt_26.add_attribute("SubTyp", "SecuritySubType_t_1482313563"); // 2
      Instrmt_26_set.insert("SecuritySubType_t_1482313563");
      Instrmt_26.add_attribute("MMY", "968389827"); // 2
      Instrmt_26_set.insert("968389827");
      Instrmt_26.add_attribute("MatDt", "MaturityDate_t_517086374"); // 2
      Instrmt_26_set.insert("MaturityDate_t_517086374");
      Instrmt_26.add_attribute("MatTm", "1279682597"); // 2
      Instrmt_26_set.insert("1279682597");
      Instrmt_26.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2070211001"); // 2
      Instrmt_26_set.insert("SettleOnOpenFlag_t_2070211001");
      Instrmt_26.add_attribute("AsgnMeth", "1090356002"); // 2
      Instrmt_26_set.insert("1090356002");
      Instrmt_26.add_attribute("Status", "1"); // 2
      Instrmt_26_set.insert("1");
      Instrmt_26.add_attribute("CpnPmt", "CouponPaymentDate_t_878604816"); // 2
      Instrmt_26_set.insert("CouponPaymentDate_t_878604816");
      Instrmt_26.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_26_set.insert("FR");
      Instrmt_26.add_attribute("Snrty", "SB"); // 2
      Instrmt_26_set.insert("SB");
      Instrmt_26.add_attribute("NotlPctOut", "15347039.170000"); // 2
      Instrmt_26_set.insert("15347039.170000");
      Instrmt_26.add_attribute("OrigNotlPctOut", "1609516.880000"); // 2
      Instrmt_26_set.insert("1609516.880000");
      Instrmt_26.add_attribute("AttchPnt", "18960630.600000"); // 2
      Instrmt_26_set.insert("18960630.600000");
      Instrmt_26.add_attribute("DetchPnt", "8269139.800000"); // 2
      Instrmt_26_set.insert("8269139.800000");
      Instrmt_26.add_attribute("Issued", "IssueDate_t_2019198631"); // 2
      Instrmt_26_set.insert("IssueDate_t_2019198631");
      Instrmt_26.add_attribute("RepoCollSecTyp", "1222881883"); // 2
      Instrmt_26_set.insert("1222881883");
      Instrmt_26.add_attribute("RepoTrm", "741344661"); // 2
      Instrmt_26_set.insert("741344661");
      Instrmt_26.add_attribute("RepoRt", "466018.050000"); // 2
      Instrmt_26_set.insert("466018.050000");
      Instrmt_26.add_attribute("Fctr", "4143139.420000"); // 2
      Instrmt_26_set.insert("4143139.420000");
      Instrmt_26.add_attribute("CrdRtg", "CreditRating_t_2116878281"); // 2
      Instrmt_26_set.insert("CreditRating_t_2116878281");
      Instrmt_26.add_attribute("Rgstry", "InstrRegistry_t_1044318775"); // 2
      Instrmt_26_set.insert("InstrRegistry_t_1044318775");
      Instrmt_26.add_attribute("IssuCtry", "1538156589"); // 2
      Instrmt_26_set.insert("1538156589");
      Instrmt_26.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1286074952"); // 2
      Instrmt_26_set.insert("StateOrProvinceOfIssue_t_1286074952");
      Instrmt_26.add_attribute("Lcl", "LocaleOfIssue_t_1873646704"); // 2
      Instrmt_26_set.insert("LocaleOfIssue_t_1873646704");
      Instrmt_26.add_attribute("Redeem", "RedemptionDate_t_1536886671"); // 2
      Instrmt_26_set.insert("RedemptionDate_t_1536886671");
      Instrmt_26.add_attribute("StrkPx", "16835321.830000"); // 2
      Instrmt_26_set.insert("16835321.830000");
      Instrmt_26.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_26_set.insert("CAN");
      Instrmt_26.add_attribute("StrkMult", "7632409.710000"); // 2
      Instrmt_26_set.insert("7632409.710000");
      Instrmt_26.add_attribute("StrkValu", "18491005.800000"); // 2
      Instrmt_26_set.insert("18491005.800000");
      Instrmt_26.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_26_set.insert("3");
      Instrmt_26.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_26_set.insert("2");
      Instrmt_26.add_attribute("StrkPxBndryPrcsn", "6700067.590000"); // 2
      Instrmt_26_set.insert("6700067.590000");
      Instrmt_26.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_26_set.insert("1");
      Instrmt_26.add_attribute("OptAt", "1377753483"); // 2
      Instrmt_26_set.insert("1377753483");
      Instrmt_26.add_attribute("Mult", "5927341.120000"); // 2
      Instrmt_26_set.insert("5927341.120000");
      Instrmt_26.add_attribute("MultTyp", "0"); // 2
      Instrmt_26_set.insert("0");
      Instrmt_26.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_26_set.insert("0");
      Instrmt_26.add_attribute("MinPxIncr", "14713389.280000"); // 2
      Instrmt_26_set.insert("14713389.280000");
      Instrmt_26.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1734712622"); // 2
      Instrmt_26_set.insert("MinPriceIncrementAmount_t_1734712622");
      Instrmt_26.add_attribute("UOM", "Bu"); // 2
      Instrmt_26_set.insert("Bu");
      Instrmt_26.add_attribute("UOMQty", "8585591.970000"); // 2
      Instrmt_26_set.insert("8585591.970000");
      Instrmt_26.add_attribute("PxUOM", "lbs"); // 2
      Instrmt_26_set.insert("lbs");
      Instrmt_26.add_attribute("PxUOMQty", "14857537.580000"); // 2
      Instrmt_26_set.insert("14857537.580000");
      Instrmt_26.add_attribute("SettlMeth", "P"); // 2
      Instrmt_26_set.insert("P");
      Instrmt_26.add_attribute("ExerStyle", "0"); // 2
      Instrmt_26_set.insert("0");
      Instrmt_26.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_26_set.insert("2");
      Instrmt_26.add_attribute("OptPayAmt", "OptPayoutAmount_t_279334190"); // 2
      Instrmt_26_set.insert("OptPayoutAmount_t_279334190");
      Instrmt_26.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_26_set.insert("PCTPAR");
      Instrmt_26.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_26_set.insert("EQTY");
      Instrmt_26.add_attribute("ListMeth", "1"); // 2
      Instrmt_26_set.insert("1");
      Instrmt_26.add_attribute("CapPx", "7108162.260000"); // 2
      Instrmt_26_set.insert("7108162.260000");
      Instrmt_26.add_attribute("FlrPx", "3661388.770000"); // 2
      Instrmt_26_set.insert("3661388.770000");
      Instrmt_26.add_attribute("PutCall", "1"); // 2
      Instrmt_26_set.insert("1");
      Instrmt_26.add_attribute("FlexInd", "true"); // 2
      Instrmt_26_set.insert("true");
      Instrmt_26.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_26_set.insert("true");
      Instrmt_26.add_attribute("TmUnit", "D"); // 2
      Instrmt_26_set.insert("D");
      Instrmt_26.add_attribute("CpnRt", "14502281.980000"); // 2
      Instrmt_26_set.insert("14502281.980000");
      Instrmt_26.add_attribute("Exch", "SecurityExchange_t_822178940"); // 2
      Instrmt_26_set.insert("SecurityExchange_t_822178940");
      Instrmt_26.add_attribute("PosLmt", "1834093282"); // 2
      Instrmt_26_set.insert("1834093282");
      Instrmt_26.add_attribute("NTPosLmt", "1151845130"); // 2
      Instrmt_26_set.insert("1151845130");
      Instrmt_26.add_attribute("Issr", "Issuer_t_148592470"); // 2
      Instrmt_26_set.insert("Issuer_t_148592470");
      Instrmt_26.add_attribute("EncIssrLen", "1932164168"); // 2
      Instrmt_26_set.insert("1932164168");
      Instrmt_26.add_attribute("EncIssr", "EncodedIssuer_t_1821851889"); // 2
      Instrmt_26_set.insert("EncodedIssuer_t_1821851889");
      Instrmt_26.add_attribute("Desc", "SecurityDesc_t_2139576022"); // 2
      Instrmt_26_set.insert("SecurityDesc_t_2139576022");
      Instrmt_26.add_attribute("EncSecDescLen", "1162434004"); // 2
      Instrmt_26_set.insert("1162434004");
      Instrmt_26.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_267102353"); // 2
      Instrmt_26_set.insert("EncodedSecurityDesc_t_267102353");
      Instrmt_26.add_attribute("Pool", "Pool_t_925948280"); // 2
      Instrmt_26_set.insert("Pool_t_925948280");
      Instrmt_26.add_attribute("CSetMo", "488033596"); // 2
      Instrmt_26_set.insert("488033596");
      Instrmt_26.add_attribute("CPPgm", "1"); // 2
      Instrmt_26_set.insert("1");
      Instrmt_26.add_attribute("CPRegT", "CPRegType_t_513177254"); // 2
      Instrmt_26_set.insert("CPRegType_t_513177254");
      Instrmt_26.add_attribute("Dated", "DatedDate_t_77724294"); // 2
      Instrmt_26_set.insert("DatedDate_t_77724294");
      Instrmt_26.add_attribute("IntAcrl", "InterestAccrualDate_t_449516830"); // 2
      Instrmt_26_set.insert("InterestAccrualDate_t_449516830");
      all_values.push_back(Instrmt_26_set);
      all_compo_names.insert("Instrmt_26_set");

      {
        xml_element AID_29{"AID"};
        multiset<string> AID_29_set;
        AID_29.add_attribute("AltID", "SecurityAltID_t_261357916"); // 3
        AID_29_set.insert("SecurityAltID_t_261357916");
        AID_29.add_attribute("AltIDSrc", "5"); // 3
        AID_29_set.insert("5");
        all_values.push_back(AID_29_set);
        all_compo_names.insert("AID_29_set");

        Instrmt_26.add_element(AID_29);
      }
      {
        xml_element SecXML_29{"SecXML"};
        multiset<string> SecXML_29_set;
        SecXML_29.add_attribute("Schema", "SecurityXMLSchema_t_2134990007"); // 3
        SecXML_29_set.insert("SecurityXMLSchema_t_2134990007");
        all_values.push_back(SecXML_29_set);
        all_compo_names.insert("SecXML_29_set");

        Instrmt_26.add_element(SecXML_29);
      }
      {
        xml_element Evnt_29{"Evnt"};
        multiset<string> Evnt_29_set;
        Evnt_29.add_attribute("EventTyp", "9"); // 3
        Evnt_29_set.insert("9");
        Evnt_29.add_attribute("Dt", "EventDate_t_2124630045"); // 3
        Evnt_29_set.insert("EventDate_t_2124630045");
        Evnt_29.add_attribute("Tm", "EventTime_t_266840550"); // 3
        Evnt_29_set.insert("EventTime_t_266840550");
        Evnt_29.add_attribute("Px", "16952346.600000"); // 3
        Evnt_29_set.insert("16952346.600000");
        Evnt_29.add_attribute("Txt", "EventText_t_952612332"); // 3
        Evnt_29_set.insert("EventText_t_952612332");
        all_values.push_back(Evnt_29_set);
        all_compo_names.insert("Evnt_29_set");

        Instrmt_26.add_element(Evnt_29);
      }
      {
        xml_element Pty_158{"Pty"};
        multiset<string> Pty_158_set;
        Pty_158.add_attribute("ID", "InstrumentPartyID_t_515569373"); // 3
        Pty_158_set.insert("InstrumentPartyID_t_515569373");
        Pty_158.add_attribute("Src", "C"); // 3
        Pty_158_set.insert("C");
        Pty_158.add_attribute("R", "21"); // 3
        Pty_158_set.insert("21");
        all_values.push_back(Pty_158_set);
        all_compo_names.insert("Pty_158_set");

        {
          xml_element Sub_158{"Sub"};
          multiset<string> Sub_158_set;
          Sub_158.add_attribute("ID", "InstrumentPartySubID_t_2050373149"); // 4
          Sub_158_set.insert("InstrumentPartySubID_t_2050373149");
          Sub_158.add_attribute("Typ", "19"); // 4
          Sub_158_set.insert("19");
          all_values.push_back(Sub_158_set);
          all_compo_names.insert("Sub_158_set");

          Pty_158.add_element(Sub_158);
        }
        Instrmt_26.add_element(Pty_158);
      }
      {
        xml_element CmplxEvnt_26{"CmplxEvnt"};
        multiset<string> CmplxEvnt_26_set;
        CmplxEvnt_26.add_attribute("Typ", "2"); // 3
        CmplxEvnt_26_set.insert("2");
        CmplxEvnt_26.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_973741811"); // 3
        CmplxEvnt_26_set.insert("ComplexOptPayoutAmount_t_973741811");
        CmplxEvnt_26.add_attribute("Px", "21457747.200000"); // 3
        CmplxEvnt_26_set.insert("21457747.200000");
        CmplxEvnt_26.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_26_set.insert("1");
        CmplxEvnt_26.add_attribute("PxBndryPrcsn", "6603514.450000"); // 3
        CmplxEvnt_26_set.insert("6603514.450000");
        CmplxEvnt_26.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_26_set.insert("1");
        CmplxEvnt_26.add_attribute("Cond", "1"); // 3
        CmplxEvnt_26_set.insert("1");
        all_values.push_back(CmplxEvnt_26_set);
        all_compo_names.insert("CmplxEvnt_26_set");

        {
          xml_element EvntDts_26{"EvntDts"};
          multiset<string> EvntDts_26_set;
          EvntDts_26.add_attribute("StartDt", "ComplexEventStartDate_t_445031966"); // 4
          EvntDts_26_set.insert("ComplexEventStartDate_t_445031966");
          EvntDts_26.add_attribute("EndDt", "ComplexEventEndDate_t_824504444"); // 4
          EvntDts_26_set.insert("ComplexEventEndDate_t_824504444");
          all_values.push_back(EvntDts_26_set);
          all_compo_names.insert("EvntDts_26_set");

          {
            xml_element EvntTms_26{"EvntTms"};
            multiset<string> EvntTms_26_set;
            EvntTms_26.add_attribute("StartTm", "2037156894"); // 5
            EvntTms_26_set.insert("2037156894");
            EvntTms_26.add_attribute("EndTm", "1607465970"); // 5
            EvntTms_26_set.insert("1607465970");
            all_values.push_back(EvntTms_26_set);
            all_compo_names.insert("EvntTms_26_set");

            EvntDts_26.add_element(EvntTms_26);
          }
          CmplxEvnt_26.add_element(EvntDts_26);
        }
        Instrmt_26.add_element(CmplxEvnt_26);
      }
      StrkPX_0.add_element(Instrmt_26);
    }
    {
      xml_element Undly_38{"Undly"};
      multiset<string> Undly_38_set;
      Undly_38.add_attribute("Sym", "UnderlyingSymbol_t_1091606797"); // 2
      Undly_38_set.insert("UnderlyingSymbol_t_1091606797");
      Undly_38.add_attribute("Sfx", "CD"); // 2
      Undly_38_set.insert("CD");
      Undly_38.add_attribute("ID", "UnderlyingSecurityID_t_2095499566"); // 2
      Undly_38_set.insert("UnderlyingSecurityID_t_2095499566");
      Undly_38.add_attribute("Src", "M"); // 2
      Undly_38_set.insert("M");
      Undly_38.add_attribute("Prod", "7"); // 2
      Undly_38_set.insert("7");
      Undly_38.add_attribute("CFI", "UnderlyingCFICode_t_25740212"); // 2
      Undly_38_set.insert("UnderlyingCFICode_t_25740212");
      Undly_38.add_attribute("SecTyp", "FXSWAP"); // 2
      Undly_38_set.insert("FXSWAP");
      Undly_38.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1590156696"); // 2
      Undly_38_set.insert("UnderlyingSecuritySubType_t_1590156696");
      Undly_38.add_attribute("MMY", "1589218264"); // 2
      Undly_38_set.insert("1589218264");
      Undly_38.add_attribute("Mat", "UnderlyingMaturityDate_t_1119587621"); // 2
      Undly_38_set.insert("UnderlyingMaturityDate_t_1119587621");
      Undly_38.add_attribute("MatTm", "1471410257"); // 2
      Undly_38_set.insert("1471410257");
      Undly_38.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1566364661"); // 2
      Undly_38_set.insert("UnderlyingCouponPaymentDate_t_1566364661");
      Undly_38.add_attribute("RestrctTyp", "XR"); // 2
      Undly_38_set.insert("XR");
      Undly_38.add_attribute("Snrty", "SR"); // 2
      Undly_38_set.insert("SR");
      Undly_38.add_attribute("NotlPctOut", "3714933.450000"); // 2
      Undly_38_set.insert("3714933.450000");
      Undly_38.add_attribute("OrigNotlPctOut", "19019975.440000"); // 2
      Undly_38_set.insert("19019975.440000");
      Undly_38.add_attribute("AttchPnt", "12777285.090000"); // 2
      Undly_38_set.insert("12777285.090000");
      Undly_38.add_attribute("DetchPnt", "16902445.550000"); // 2
      Undly_38_set.insert("16902445.550000");
      Undly_38.add_attribute("Issued", "UnderlyingIssueDate_t_1804887045"); // 2
      Undly_38_set.insert("UnderlyingIssueDate_t_1804887045");
      Undly_38.add_attribute("RepoCollSecTyp", "1973275030"); // 2
      Undly_38_set.insert("1973275030");
      Undly_38.add_attribute("RepoTrm", "617054017"); // 2
      Undly_38_set.insert("617054017");
      Undly_38.add_attribute("RepoRt", "6311452.090000"); // 2
      Undly_38_set.insert("6311452.090000");
      Undly_38.add_attribute("Fctr", "19715661.020000"); // 2
      Undly_38_set.insert("19715661.020000");
      Undly_38.add_attribute("CrdRtg", "UnderlyingCreditRating_t_366042419"); // 2
      Undly_38_set.insert("UnderlyingCreditRating_t_366042419");
      Undly_38.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1291496654"); // 2
      Undly_38_set.insert("UnderlyingInstrRegistry_t_1291496654");
      Undly_38.add_attribute("Ctry", "974218657"); // 2
      Undly_38_set.insert("974218657");
      Undly_38.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_263623291"); // 2
      Undly_38_set.insert("UnderlyingStateOrProvinceOfIssue_t_263623291");
      Undly_38.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1736528620"); // 2
      Undly_38_set.insert("UnderlyingLocaleOfIssue_t_1736528620");
      Undly_38.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1798723101"); // 2
      Undly_38_set.insert("UnderlyingRedemptionDate_t_1798723101");
      Undly_38.add_attribute("StrkPx", "1532965.370000"); // 2
      Undly_38_set.insert("1532965.370000");
      Undly_38.add_attribute("StrkCcy", "GBP"); // 2
      Undly_38_set.insert("GBP");
      Undly_38.add_attribute("OptA", "968918063"); // 2
      Undly_38_set.insert("968918063");
      Undly_38.add_attribute("Mult", "11445268.600000"); // 2
      Undly_38_set.insert("11445268.600000");
      Undly_38.add_attribute("MultTyp", "2"); // 2
      Undly_38_set.insert("2");
      Undly_38.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_38_set.insert("0");
      Undly_38.add_attribute("UOM", "MWh"); // 2
      Undly_38_set.insert("MWh");
      Undly_38.add_attribute("UOMQty", "4100082.950000"); // 2
      Undly_38_set.insert("4100082.950000");
      Undly_38.add_attribute("PxUOM", "MMbbl"); // 2
      Undly_38_set.insert("MMbbl");
      Undly_38.add_attribute("PxUOMQty", "6120016.880000"); // 2
      Undly_38_set.insert("6120016.880000");
      Undly_38.add_attribute("TmUnit", "H"); // 2
      Undly_38_set.insert("H");
      Undly_38.add_attribute("ExerStyle", "2"); // 2
      Undly_38_set.insert("2");
      Undly_38.add_attribute("CpnRt", "308827.010000"); // 2
      Undly_38_set.insert("308827.010000");
      Undly_38.add_attribute("Exch", "UnderlyingSecurityExchange_t_768540439"); // 2
      Undly_38_set.insert("UnderlyingSecurityExchange_t_768540439");
      Undly_38.add_attribute("Issr", "UnderlyingIssuer_t_2083477770"); // 2
      Undly_38_set.insert("UnderlyingIssuer_t_2083477770");
      Undly_38.add_attribute("EncUndIssrLen", "402376047"); // 2
      Undly_38_set.insert("402376047");
      Undly_38.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_523054335"); // 2
      Undly_38_set.insert("EncodedUnderlyingIssuer_t_523054335");
      Undly_38.add_attribute("Desc", "UnderlyingSecurityDesc_t_1213722631"); // 2
      Undly_38_set.insert("UnderlyingSecurityDesc_t_1213722631");
      Undly_38.add_attribute("EncUndSecDescLen", "2092620602"); // 2
      Undly_38_set.insert("2092620602");
      Undly_38.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_180457733"); // 2
      Undly_38_set.insert("EncodedUnderlyingSecurityDesc_t_180457733");
      Undly_38.add_attribute("CPPgm", "UnderlyingCPProgram_t_1039514014"); // 2
      Undly_38_set.insert("UnderlyingCPProgram_t_1039514014");
      Undly_38.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_562190971"); // 2
      Undly_38_set.insert("UnderlyingCPRegType_t_562190971");
      Undly_38.add_attribute("AllocPct", "8116029.420000"); // 2
      Undly_38_set.insert("8116029.420000");
      Undly_38.add_attribute("Ccy", "USD"); // 2
      Undly_38_set.insert("USD");
      Undly_38.add_attribute("Qty", "21030995.960000"); // 2
      Undly_38_set.insert("21030995.960000");
      Undly_38.add_attribute("SettlTyp", "5"); // 2
      Undly_38_set.insert("5");
      Undly_38.add_attribute("CashAmt", "UnderlyingCashAmount_t_1191856681"); // 2
      Undly_38_set.insert("UnderlyingCashAmount_t_1191856681");
      Undly_38.add_attribute("CashTyp", "DIFF"); // 2
      Undly_38_set.insert("DIFF");
      Undly_38.add_attribute("Px", "14890545.780000"); // 2
      Undly_38_set.insert("14890545.780000");
      Undly_38.add_attribute("DirtPx", "13451532.180000"); // 2
      Undly_38_set.insert("13451532.180000");
      Undly_38.add_attribute("EndPx", "7411718.630000"); // 2
      Undly_38_set.insert("7411718.630000");
      Undly_38.add_attribute("StartVal", "UnderlyingStartValue_t_84417181"); // 2
      Undly_38_set.insert("UnderlyingStartValue_t_84417181");
      Undly_38.add_attribute("CurVal", "UnderlyingCurrentValue_t_166587633"); // 2
      Undly_38_set.insert("UnderlyingCurrentValue_t_166587633");
      Undly_38.add_attribute("EndVal", "UnderlyingEndValue_t_1885698724"); // 2
      Undly_38_set.insert("UnderlyingEndValue_t_1885698724");
      Undly_38.add_attribute("AdjQty", "15098278.620000"); // 2
      Undly_38_set.insert("15098278.620000");
      Undly_38.add_attribute("FxRate", "3168208.280000"); // 2
      Undly_38_set.insert("3168208.280000");
      Undly_38.add_attribute("FxRateCalc", "M"); // 2
      Undly_38_set.insert("M");
      Undly_38.add_attribute("CapValu", "UnderlyingCapValue_t_1919836157"); // 2
      Undly_38_set.insert("UnderlyingCapValue_t_1919836157");
      Undly_38.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2057210719"); // 2
      Undly_38_set.insert("UnderlyingSettlMethod_t_2057210719");
      Undly_38.add_attribute("PutCall", "1520483837"); // 2
      Undly_38_set.insert("1520483837");
      all_values.push_back(Undly_38_set);
      all_compo_names.insert("Undly_38_set");

      {
        xml_element UndAID_38{"UndAID"};
        multiset<string> UndAID_38_set;
        UndAID_38.add_attribute("AltID", "UnderlyingSecurityAltID_t_1301948425"); // 3
        UndAID_38_set.insert("UnderlyingSecurityAltID_t_1301948425");
        UndAID_38.add_attribute("AltIDSrc", "I"); // 3
        UndAID_38_set.insert("I");
        all_values.push_back(UndAID_38_set);
        all_compo_names.insert("UndAID_38_set");

        Undly_38.add_element(UndAID_38);
      }
      {
        xml_element Stip_65{"Stip"};
        multiset<string> Stip_65_set;
        Stip_65.add_attribute("Typ", "WHOLE"); // 3
        Stip_65_set.insert("WHOLE");
        Stip_65.add_attribute("Val", "UnderlyingStipValue_t_2070488864"); // 3
        Stip_65_set.insert("UnderlyingStipValue_t_2070488864");
        all_values.push_back(Stip_65_set);
        all_compo_names.insert("Stip_65_set");

        Undly_38.add_element(Stip_65);
      }
      {
        xml_element Pty_159{"Pty"};
        multiset<string> Pty_159_set;
        Pty_159.add_attribute("ID", "UnderlyingInstrumentPartyID_t_910037694"); // 3
        Pty_159_set.insert("UnderlyingInstrumentPartyID_t_910037694");
        Pty_159.add_attribute("Src", "E"); // 3
        Pty_159_set.insert("E");
        Pty_159.add_attribute("R", "66"); // 3
        Pty_159_set.insert("66");
        all_values.push_back(Pty_159_set);
        all_compo_names.insert("Pty_159_set");

        {
          xml_element Sub_159{"Sub"};
          multiset<string> Sub_159_set;
          Sub_159.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2123760325"); // 4
          Sub_159_set.insert("UnderlyingInstrumentPartySubID_t_2123760325");
          Sub_159.add_attribute("Typ", "16"); // 4
          Sub_159_set.insert("16");
          all_values.push_back(Sub_159_set);
          all_compo_names.insert("Sub_159_set");

          Pty_159.add_element(Sub_159);
        }
        Undly_38.add_element(Pty_159);
      }
      StrkPX_0.add_element(Undly_38);
    }
    elt.add_element(StrkPX_0);
  } // end StrkPX
  { // StrkPX
    xml_element StrkPX_1{"StrkPX"};
    multiset<string> StrkPX_1_set;
    StrkPX_1.add_attribute("PrevClsPx", "6265172.850000"); // 1
    StrkPX_1_set.insert("6265172.850000");
    StrkPX_1.add_attribute("ClOrdID", "ClOrdID_t_1015790691"); // 1
    StrkPX_1_set.insert("ClOrdID_t_1015790691");
    StrkPX_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_313586862"); // 1
    StrkPX_1_set.insert("SecondaryClOrdID_t_313586862");
    StrkPX_1.add_attribute("Side", "4"); // 1
    StrkPX_1_set.insert("4");
    StrkPX_1.add_attribute("Px", "18793871.600000"); // 1
    StrkPX_1_set.insert("18793871.600000");
    StrkPX_1.add_attribute("Ccy", "CHF"); // 1
    StrkPX_1_set.insert("CHF");
    StrkPX_1.add_attribute("Txt", "Text_t_1569718637"); // 1
    StrkPX_1_set.insert("Text_t_1569718637");
    StrkPX_1.add_attribute("EncTxtLen", "286193285"); // 1
    StrkPX_1_set.insert("286193285");
    StrkPX_1.add_attribute("EncTxt", "EncodedText_t_938397096"); // 1
    StrkPX_1_set.insert("EncodedText_t_938397096");
    all_values.push_back(StrkPX_1_set);
    all_compo_names.insert("StrkPX_1_set");

    {
      xml_element Instrmt_27{"Instrmt"};
      multiset<string> Instrmt_27_set;
      Instrmt_27.add_attribute("Sym", "Symbol_t_911289568"); // 2
      Instrmt_27_set.insert("Symbol_t_911289568");
      Instrmt_27.add_attribute("Sfx", "WI"); // 2
      Instrmt_27_set.insert("WI");
      Instrmt_27.add_attribute("ID", "SecurityID_t_1679568960"); // 2
      Instrmt_27_set.insert("SecurityID_t_1679568960");
      Instrmt_27.add_attribute("Src", "G"); // 2
      Instrmt_27_set.insert("G");
      Instrmt_27.add_attribute("Prod", "8"); // 2
      Instrmt_27_set.insert("8");
      Instrmt_27.add_attribute("ProdCmplx", "ProductComplex_t_1417784036"); // 2
      Instrmt_27_set.insert("ProductComplex_t_1417784036");
      Instrmt_27.add_attribute("SecGrp", "SecurityGroup_t_358050963"); // 2
      Instrmt_27_set.insert("SecurityGroup_t_358050963");
      Instrmt_27.add_attribute("CFI", "CFICode_t_2114754964"); // 2
      Instrmt_27_set.insert("CFICode_t_2114754964");
      Instrmt_27.add_attribute("SecTyp", "EUSUPRA"); // 2
      Instrmt_27_set.insert("EUSUPRA");
      Instrmt_27.add_attribute("SubTyp", "SecuritySubType_t_130403473"); // 2
      Instrmt_27_set.insert("SecuritySubType_t_130403473");
      Instrmt_27.add_attribute("MMY", "2024482035"); // 2
      Instrmt_27_set.insert("2024482035");
      Instrmt_27.add_attribute("MatDt", "MaturityDate_t_1699266373"); // 2
      Instrmt_27_set.insert("MaturityDate_t_1699266373");
      Instrmt_27.add_attribute("MatTm", "1432351898"); // 2
      Instrmt_27_set.insert("1432351898");
      Instrmt_27.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_851041959"); // 2
      Instrmt_27_set.insert("SettleOnOpenFlag_t_851041959");
      Instrmt_27.add_attribute("AsgnMeth", "1103149264"); // 2
      Instrmt_27_set.insert("1103149264");
      Instrmt_27.add_attribute("Status", "2"); // 2
      Instrmt_27_set.insert("2");
      Instrmt_27.add_attribute("CpnPmt", "CouponPaymentDate_t_1761079653"); // 2
      Instrmt_27_set.insert("CouponPaymentDate_t_1761079653");
      Instrmt_27.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_27_set.insert("MR");
      Instrmt_27.add_attribute("Snrty", "SR"); // 2
      Instrmt_27_set.insert("SR");
      Instrmt_27.add_attribute("NotlPctOut", "17373563.300000"); // 2
      Instrmt_27_set.insert("17373563.300000");
      Instrmt_27.add_attribute("OrigNotlPctOut", "6608040.930000"); // 2
      Instrmt_27_set.insert("6608040.930000");
      Instrmt_27.add_attribute("AttchPnt", "2804503.040000"); // 2
      Instrmt_27_set.insert("2804503.040000");
      Instrmt_27.add_attribute("DetchPnt", "6056633.740000"); // 2
      Instrmt_27_set.insert("6056633.740000");
      Instrmt_27.add_attribute("Issued", "IssueDate_t_974390955"); // 2
      Instrmt_27_set.insert("IssueDate_t_974390955");
      Instrmt_27.add_attribute("RepoCollSecTyp", "1718570531"); // 2
      Instrmt_27_set.insert("1718570531");
      Instrmt_27.add_attribute("RepoTrm", "337566886"); // 2
      Instrmt_27_set.insert("337566886");
      Instrmt_27.add_attribute("RepoRt", "687275.600000"); // 2
      Instrmt_27_set.insert("687275.600000");
      Instrmt_27.add_attribute("Fctr", "9648230.580000"); // 2
      Instrmt_27_set.insert("9648230.580000");
      Instrmt_27.add_attribute("CrdRtg", "CreditRating_t_1907285523"); // 2
      Instrmt_27_set.insert("CreditRating_t_1907285523");
      Instrmt_27.add_attribute("Rgstry", "InstrRegistry_t_354920845"); // 2
      Instrmt_27_set.insert("InstrRegistry_t_354920845");
      Instrmt_27.add_attribute("IssuCtry", "1903220155"); // 2
      Instrmt_27_set.insert("1903220155");
      Instrmt_27.add_attribute("StPrv", "StateOrProvinceOfIssue_t_671091443"); // 2
      Instrmt_27_set.insert("StateOrProvinceOfIssue_t_671091443");
      Instrmt_27.add_attribute("Lcl", "LocaleOfIssue_t_1986267349"); // 2
      Instrmt_27_set.insert("LocaleOfIssue_t_1986267349");
      Instrmt_27.add_attribute("Redeem", "RedemptionDate_t_1435305467"); // 2
      Instrmt_27_set.insert("RedemptionDate_t_1435305467");
      Instrmt_27.add_attribute("StrkPx", "16667981.920000"); // 2
      Instrmt_27_set.insert("16667981.920000");
      Instrmt_27.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_27_set.insert("CAN");
      Instrmt_27.add_attribute("StrkMult", "20248491.560000"); // 2
      Instrmt_27_set.insert("20248491.560000");
      Instrmt_27.add_attribute("StrkValu", "16039891.540000"); // 2
      Instrmt_27_set.insert("16039891.540000");
      Instrmt_27.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_27_set.insert("4");
      Instrmt_27.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_27_set.insert("2");
      Instrmt_27.add_attribute("StrkPxBndryPrcsn", "14809875.410000"); // 2
      Instrmt_27_set.insert("14809875.410000");
      Instrmt_27.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_27_set.insert("2");
      Instrmt_27.add_attribute("OptAt", "1440120879"); // 2
      Instrmt_27_set.insert("1440120879");
      Instrmt_27.add_attribute("Mult", "1845458.520000"); // 2
      Instrmt_27_set.insert("1845458.520000");
      Instrmt_27.add_attribute("MultTyp", "2"); // 2
      Instrmt_27_set.insert("2");
      Instrmt_27.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("MinPxIncr", "19456255.050000"); // 2
      Instrmt_27_set.insert("19456255.050000");
      Instrmt_27.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_301244934"); // 2
      Instrmt_27_set.insert("MinPriceIncrementAmount_t_301244934");
      Instrmt_27.add_attribute("UOM", "Alw"); // 2
      Instrmt_27_set.insert("Alw");
      Instrmt_27.add_attribute("UOMQty", "15354981.880000"); // 2
      Instrmt_27_set.insert("15354981.880000");
      Instrmt_27.add_attribute("PxUOM", "t"); // 2
      Instrmt_27_set.insert("t");
      Instrmt_27.add_attribute("PxUOMQty", "5823776.690000"); // 2
      Instrmt_27_set.insert("5823776.690000");
      Instrmt_27.add_attribute("SettlMeth", "C"); // 2
      Instrmt_27_set.insert("C");
      Instrmt_27.add_attribute("ExerStyle", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_27_set.insert("3");
      Instrmt_27.add_attribute("OptPayAmt", "OptPayoutAmount_t_331244800"); // 2
      Instrmt_27_set.insert("OptPayoutAmount_t_331244800");
      Instrmt_27.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_27_set.insert("PCTPAR");
      Instrmt_27.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_27_set.insert("FUT");
      Instrmt_27.add_attribute("ListMeth", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("CapPx", "2126047.400000"); // 2
      Instrmt_27_set.insert("2126047.400000");
      Instrmt_27.add_attribute("FlrPx", "8740241.180000"); // 2
      Instrmt_27_set.insert("8740241.180000");
      Instrmt_27.add_attribute("PutCall", "1"); // 2
      Instrmt_27_set.insert("1");
      Instrmt_27.add_attribute("FlexInd", "false"); // 2
      Instrmt_27_set.insert("false");
      Instrmt_27.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_27_set.insert("false");
      Instrmt_27.add_attribute("TmUnit", "H"); // 2
      Instrmt_27_set.insert("H");
      Instrmt_27.add_attribute("CpnRt", "16881062.790000"); // 2
      Instrmt_27_set.insert("16881062.790000");
      Instrmt_27.add_attribute("Exch", "SecurityExchange_t_867451792"); // 2
      Instrmt_27_set.insert("SecurityExchange_t_867451792");
      Instrmt_27.add_attribute("PosLmt", "158818171"); // 2
      Instrmt_27_set.insert("158818171");
      Instrmt_27.add_attribute("NTPosLmt", "1144611785"); // 2
      Instrmt_27_set.insert("1144611785");
      Instrmt_27.add_attribute("Issr", "Issuer_t_1751840183"); // 2
      Instrmt_27_set.insert("Issuer_t_1751840183");
      Instrmt_27.add_attribute("EncIssrLen", "166587152"); // 2
      Instrmt_27_set.insert("166587152");
      Instrmt_27.add_attribute("EncIssr", "EncodedIssuer_t_478115678"); // 2
      Instrmt_27_set.insert("EncodedIssuer_t_478115678");
      Instrmt_27.add_attribute("Desc", "SecurityDesc_t_40527652"); // 2
      Instrmt_27_set.insert("SecurityDesc_t_40527652");
      Instrmt_27.add_attribute("EncSecDescLen", "1606708032"); // 2
      Instrmt_27_set.insert("1606708032");
      Instrmt_27.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_662661531"); // 2
      Instrmt_27_set.insert("EncodedSecurityDesc_t_662661531");
      Instrmt_27.add_attribute("Pool", "Pool_t_1579848033"); // 2
      Instrmt_27_set.insert("Pool_t_1579848033");
      Instrmt_27.add_attribute("CSetMo", "107218730"); // 2
      Instrmt_27_set.insert("107218730");
      Instrmt_27.add_attribute("CPPgm", "2"); // 2
      Instrmt_27_set.insert("2");
      Instrmt_27.add_attribute("CPRegT", "CPRegType_t_1881092968"); // 2
      Instrmt_27_set.insert("CPRegType_t_1881092968");
      Instrmt_27.add_attribute("Dated", "DatedDate_t_409146096"); // 2
      Instrmt_27_set.insert("DatedDate_t_409146096");
      Instrmt_27.add_attribute("IntAcrl", "InterestAccrualDate_t_1996301576"); // 2
      Instrmt_27_set.insert("InterestAccrualDate_t_1996301576");
      all_values.push_back(Instrmt_27_set);
      all_compo_names.insert("Instrmt_27_set");

      {
        xml_element AID_30{"AID"};
        multiset<string> AID_30_set;
        AID_30.add_attribute("AltID", "SecurityAltID_t_695658347"); // 3
        AID_30_set.insert("SecurityAltID_t_695658347");
        AID_30.add_attribute("AltIDSrc", "2"); // 3
        AID_30_set.insert("2");
        all_values.push_back(AID_30_set);
        all_compo_names.insert("AID_30_set");

        Instrmt_27.add_element(AID_30);
      }
      {
        xml_element SecXML_30{"SecXML"};
        multiset<string> SecXML_30_set;
        SecXML_30.add_attribute("Schema", "SecurityXMLSchema_t_1989979490"); // 3
        SecXML_30_set.insert("SecurityXMLSchema_t_1989979490");
        all_values.push_back(SecXML_30_set);
        all_compo_names.insert("SecXML_30_set");

        Instrmt_27.add_element(SecXML_30);
      }
      {
        xml_element Evnt_30{"Evnt"};
        multiset<string> Evnt_30_set;
        Evnt_30.add_attribute("EventTyp", "3"); // 3
        Evnt_30_set.insert("3");
        Evnt_30.add_attribute("Dt", "EventDate_t_1144988318"); // 3
        Evnt_30_set.insert("EventDate_t_1144988318");
        Evnt_30.add_attribute("Tm", "EventTime_t_173740642"); // 3
        Evnt_30_set.insert("EventTime_t_173740642");
        Evnt_30.add_attribute("Px", "3422985.770000"); // 3
        Evnt_30_set.insert("3422985.770000");
        Evnt_30.add_attribute("Txt", "EventText_t_115792281"); // 3
        Evnt_30_set.insert("EventText_t_115792281");
        all_values.push_back(Evnt_30_set);
        all_compo_names.insert("Evnt_30_set");

        Instrmt_27.add_element(Evnt_30);
      }
      {
        xml_element Pty_160{"Pty"};
        multiset<string> Pty_160_set;
        Pty_160.add_attribute("ID", "InstrumentPartyID_t_264787318"); // 3
        Pty_160_set.insert("InstrumentPartyID_t_264787318");
        Pty_160.add_attribute("Src", "3"); // 3
        Pty_160_set.insert("3");
        Pty_160.add_attribute("R", "50"); // 3
        Pty_160_set.insert("50");
        all_values.push_back(Pty_160_set);
        all_compo_names.insert("Pty_160_set");

        {
          xml_element Sub_160{"Sub"};
          multiset<string> Sub_160_set;
          Sub_160.add_attribute("ID", "InstrumentPartySubID_t_1026925437"); // 4
          Sub_160_set.insert("InstrumentPartySubID_t_1026925437");
          Sub_160.add_attribute("Typ", "26"); // 4
          Sub_160_set.insert("26");
          all_values.push_back(Sub_160_set);
          all_compo_names.insert("Sub_160_set");

          Pty_160.add_element(Sub_160);
        }
        Instrmt_27.add_element(Pty_160);
      }
      {
        xml_element CmplxEvnt_27{"CmplxEvnt"};
        multiset<string> CmplxEvnt_27_set;
        CmplxEvnt_27.add_attribute("Typ", "8"); // 3
        CmplxEvnt_27_set.insert("8");
        CmplxEvnt_27.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1308378100"); // 3
        CmplxEvnt_27_set.insert("ComplexOptPayoutAmount_t_1308378100");
        CmplxEvnt_27.add_attribute("Px", "1469143.900000"); // 3
        CmplxEvnt_27_set.insert("1469143.900000");
        CmplxEvnt_27.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_27_set.insert("4");
        CmplxEvnt_27.add_attribute("PxBndryPrcsn", "14671962.720000"); // 3
        CmplxEvnt_27_set.insert("14671962.720000");
        CmplxEvnt_27.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_27_set.insert("1");
        CmplxEvnt_27.add_attribute("Cond", "2"); // 3
        CmplxEvnt_27_set.insert("2");
        all_values.push_back(CmplxEvnt_27_set);
        all_compo_names.insert("CmplxEvnt_27_set");

        {
          xml_element EvntDts_27{"EvntDts"};
          multiset<string> EvntDts_27_set;
          EvntDts_27.add_attribute("StartDt", "ComplexEventStartDate_t_1633783424"); // 4
          EvntDts_27_set.insert("ComplexEventStartDate_t_1633783424");
          EvntDts_27.add_attribute("EndDt", "ComplexEventEndDate_t_1769641854"); // 4
          EvntDts_27_set.insert("ComplexEventEndDate_t_1769641854");
          all_values.push_back(EvntDts_27_set);
          all_compo_names.insert("EvntDts_27_set");

          {
            xml_element EvntTms_27{"EvntTms"};
            multiset<string> EvntTms_27_set;
            EvntTms_27.add_attribute("StartTm", "1663998316"); // 5
            EvntTms_27_set.insert("1663998316");
            EvntTms_27.add_attribute("EndTm", "1093007808"); // 5
            EvntTms_27_set.insert("1093007808");
            all_values.push_back(EvntTms_27_set);
            all_compo_names.insert("EvntTms_27_set");

            EvntDts_27.add_element(EvntTms_27);
          }
          CmplxEvnt_27.add_element(EvntDts_27);
        }
        Instrmt_27.add_element(CmplxEvnt_27);
      }
      StrkPX_1.add_element(Instrmt_27);
    }
    {
      xml_element Undly_39{"Undly"};
      multiset<string> Undly_39_set;
      Undly_39.add_attribute("Sym", "UnderlyingSymbol_t_284819737"); // 2
      Undly_39_set.insert("UnderlyingSymbol_t_284819737");
      Undly_39.add_attribute("Sfx", "WI"); // 2
      Undly_39_set.insert("WI");
      Undly_39.add_attribute("ID", "UnderlyingSecurityID_t_1200226539"); // 2
      Undly_39_set.insert("UnderlyingSecurityID_t_1200226539");
      Undly_39.add_attribute("Src", "6"); // 2
      Undly_39_set.insert("6");
      Undly_39.add_attribute("Prod", "5"); // 2
      Undly_39_set.insert("5");
      Undly_39.add_attribute("CFI", "UnderlyingCFICode_t_1609372635"); // 2
      Undly_39_set.insert("UnderlyingCFICode_t_1609372635");
      Undly_39.add_attribute("SecTyp", "BRADY"); // 2
      Undly_39_set.insert("BRADY");
      Undly_39.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1525630369"); // 2
      Undly_39_set.insert("UnderlyingSecuritySubType_t_1525630369");
      Undly_39.add_attribute("MMY", "453412752"); // 2
      Undly_39_set.insert("453412752");
      Undly_39.add_attribute("Mat", "UnderlyingMaturityDate_t_436936896"); // 2
      Undly_39_set.insert("UnderlyingMaturityDate_t_436936896");
      Undly_39.add_attribute("MatTm", "2010245051"); // 2
      Undly_39_set.insert("2010245051");
      Undly_39.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1598401070"); // 2
      Undly_39_set.insert("UnderlyingCouponPaymentDate_t_1598401070");
      Undly_39.add_attribute("RestrctTyp", "XR"); // 2
      Undly_39_set.insert("XR");
      Undly_39.add_attribute("Snrty", "SD"); // 2
      Undly_39_set.insert("SD");
      Undly_39.add_attribute("NotlPctOut", "17141933.510000"); // 2
      Undly_39_set.insert("17141933.510000");
      Undly_39.add_attribute("OrigNotlPctOut", "8754648.570000"); // 2
      Undly_39_set.insert("8754648.570000");
      Undly_39.add_attribute("AttchPnt", "7599632.990000"); // 2
      Undly_39_set.insert("7599632.990000");
      Undly_39.add_attribute("DetchPnt", "5565261.020000"); // 2
      Undly_39_set.insert("5565261.020000");
      Undly_39.add_attribute("Issued", "UnderlyingIssueDate_t_1902390294"); // 2
      Undly_39_set.insert("UnderlyingIssueDate_t_1902390294");
      Undly_39.add_attribute("RepoCollSecTyp", "1366255058"); // 2
      Undly_39_set.insert("1366255058");
      Undly_39.add_attribute("RepoTrm", "1708188438"); // 2
      Undly_39_set.insert("1708188438");
      Undly_39.add_attribute("RepoRt", "10632847.460000"); // 2
      Undly_39_set.insert("10632847.460000");
      Undly_39.add_attribute("Fctr", "15131694.490000"); // 2
      Undly_39_set.insert("15131694.490000");
      Undly_39.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1579818918"); // 2
      Undly_39_set.insert("UnderlyingCreditRating_t_1579818918");
      Undly_39.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_382997370"); // 2
      Undly_39_set.insert("UnderlyingInstrRegistry_t_382997370");
      Undly_39.add_attribute("Ctry", "657211976"); // 2
      Undly_39_set.insert("657211976");
      Undly_39.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1055805934"); // 2
      Undly_39_set.insert("UnderlyingStateOrProvinceOfIssue_t_1055805934");
      Undly_39.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2016780795"); // 2
      Undly_39_set.insert("UnderlyingLocaleOfIssue_t_2016780795");
      Undly_39.add_attribute("Redeem", "UnderlyingRedemptionDate_t_279370182"); // 2
      Undly_39_set.insert("UnderlyingRedemptionDate_t_279370182");
      Undly_39.add_attribute("StrkPx", "5723206.020000"); // 2
      Undly_39_set.insert("5723206.020000");
      Undly_39.add_attribute("StrkCcy", "EUR"); // 2
      Undly_39_set.insert("EUR");
      Undly_39.add_attribute("OptA", "1668683303"); // 2
      Undly_39_set.insert("1668683303");
      Undly_39.add_attribute("Mult", "150478.460000"); // 2
      Undly_39_set.insert("150478.460000");
      Undly_39.add_attribute("MultTyp", "1"); // 2
      Undly_39_set.insert("1");
      Undly_39.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_39_set.insert("2");
      Undly_39.add_attribute("UOM", "oz_tr"); // 2
      Undly_39_set.insert("oz_tr");
      Undly_39.add_attribute("UOMQty", "19042540.990000"); // 2
      Undly_39_set.insert("19042540.990000");
      Undly_39.add_attribute("PxUOM", "Bbl"); // 2
      Undly_39_set.insert("Bbl");
      Undly_39.add_attribute("PxUOMQty", "20778332.340000"); // 2
      Undly_39_set.insert("20778332.340000");
      Undly_39.add_attribute("TmUnit", "Min"); // 2
      Undly_39_set.insert("Min");
      Undly_39.add_attribute("ExerStyle", "0"); // 2
      Undly_39_set.insert("0");
      Undly_39.add_attribute("CpnRt", "15287506.560000"); // 2
      Undly_39_set.insert("15287506.560000");
      Undly_39.add_attribute("Exch", "UnderlyingSecurityExchange_t_804384886"); // 2
      Undly_39_set.insert("UnderlyingSecurityExchange_t_804384886");
      Undly_39.add_attribute("Issr", "UnderlyingIssuer_t_1944623430"); // 2
      Undly_39_set.insert("UnderlyingIssuer_t_1944623430");
      Undly_39.add_attribute("EncUndIssrLen", "1095460360"); // 2
      Undly_39_set.insert("1095460360");
      Undly_39.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1679849743"); // 2
      Undly_39_set.insert("EncodedUnderlyingIssuer_t_1679849743");
      Undly_39.add_attribute("Desc", "UnderlyingSecurityDesc_t_557103081"); // 2
      Undly_39_set.insert("UnderlyingSecurityDesc_t_557103081");
      Undly_39.add_attribute("EncUndSecDescLen", "1651986462"); // 2
      Undly_39_set.insert("1651986462");
      Undly_39.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1434756389"); // 2
      Undly_39_set.insert("EncodedUnderlyingSecurityDesc_t_1434756389");
      Undly_39.add_attribute("CPPgm", "UnderlyingCPProgram_t_1923358140"); // 2
      Undly_39_set.insert("UnderlyingCPProgram_t_1923358140");
      Undly_39.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1212691253"); // 2
      Undly_39_set.insert("UnderlyingCPRegType_t_1212691253");
      Undly_39.add_attribute("AllocPct", "3505574.880000"); // 2
      Undly_39_set.insert("3505574.880000");
      Undly_39.add_attribute("Ccy", "CHF"); // 2
      Undly_39_set.insert("CHF");
      Undly_39.add_attribute("Qty", "7335548.580000"); // 2
      Undly_39_set.insert("7335548.580000");
      Undly_39.add_attribute("SettlTyp", "4"); // 2
      Undly_39_set.insert("4");
      Undly_39.add_attribute("CashAmt", "UnderlyingCashAmount_t_1700832457"); // 2
      Undly_39_set.insert("UnderlyingCashAmount_t_1700832457");
      Undly_39.add_attribute("CashTyp", "DIFF"); // 2
      Undly_39_set.insert("DIFF");
      Undly_39.add_attribute("Px", "781424.520000"); // 2
      Undly_39_set.insert("781424.520000");
      Undly_39.add_attribute("DirtPx", "1256694.110000"); // 2
      Undly_39_set.insert("1256694.110000");
      Undly_39.add_attribute("EndPx", "15651569.610000"); // 2
      Undly_39_set.insert("15651569.610000");
      Undly_39.add_attribute("StartVal", "UnderlyingStartValue_t_642332371"); // 2
      Undly_39_set.insert("UnderlyingStartValue_t_642332371");
      Undly_39.add_attribute("CurVal", "UnderlyingCurrentValue_t_1794352715"); // 2
      Undly_39_set.insert("UnderlyingCurrentValue_t_1794352715");
      Undly_39.add_attribute("EndVal", "UnderlyingEndValue_t_1580204807"); // 2
      Undly_39_set.insert("UnderlyingEndValue_t_1580204807");
      Undly_39.add_attribute("AdjQty", "19521454.160000"); // 2
      Undly_39_set.insert("19521454.160000");
      Undly_39.add_attribute("FxRate", "21455243.920000"); // 2
      Undly_39_set.insert("21455243.920000");
      Undly_39.add_attribute("FxRateCalc", "D"); // 2
      Undly_39_set.insert("D");
      Undly_39.add_attribute("CapValu", "UnderlyingCapValue_t_1708915867"); // 2
      Undly_39_set.insert("UnderlyingCapValue_t_1708915867");
      Undly_39.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1874842790"); // 2
      Undly_39_set.insert("UnderlyingSettlMethod_t_1874842790");
      Undly_39.add_attribute("PutCall", "987491227"); // 2
      Undly_39_set.insert("987491227");
      all_values.push_back(Undly_39_set);
      all_compo_names.insert("Undly_39_set");

      {
        xml_element UndAID_39{"UndAID"};
        multiset<string> UndAID_39_set;
        UndAID_39.add_attribute("AltID", "UnderlyingSecurityAltID_t_1902623215"); // 3
        UndAID_39_set.insert("UnderlyingSecurityAltID_t_1902623215");
        UndAID_39.add_attribute("AltIDSrc", "E"); // 3
        UndAID_39_set.insert("E");
        all_values.push_back(UndAID_39_set);
        all_compo_names.insert("UndAID_39_set");

        Undly_39.add_element(UndAID_39);
      }
      {
        xml_element Stip_66{"Stip"};
        multiset<string> Stip_66_set;
        Stip_66.add_attribute("Typ", "PRIMARY"); // 3
        Stip_66_set.insert("PRIMARY");
        Stip_66.add_attribute("Val", "UnderlyingStipValue_t_559524453"); // 3
        Stip_66_set.insert("UnderlyingStipValue_t_559524453");
        all_values.push_back(Stip_66_set);
        all_compo_names.insert("Stip_66_set");

        Undly_39.add_element(Stip_66);
      }
      {
        xml_element Pty_161{"Pty"};
        multiset<string> Pty_161_set;
        Pty_161.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1264062374"); // 3
        Pty_161_set.insert("UnderlyingInstrumentPartyID_t_1264062374");
        Pty_161.add_attribute("Src", "A"); // 3
        Pty_161_set.insert("A");
        Pty_161.add_attribute("R", "18"); // 3
        Pty_161_set.insert("18");
        all_values.push_back(Pty_161_set);
        all_compo_names.insert("Pty_161_set");

        {
          xml_element Sub_161{"Sub"};
          multiset<string> Sub_161_set;
          Sub_161.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1821165455"); // 4
          Sub_161_set.insert("UnderlyingInstrumentPartySubID_t_1821165455");
          Sub_161.add_attribute("Typ", "17"); // 4
          Sub_161_set.insert("17");
          all_values.push_back(Sub_161_set);
          all_compo_names.insert("Sub_161_set");

          Pty_161.add_element(Sub_161);
        }
        Undly_39.add_element(Pty_161);
      }
      StrkPX_1.add_element(Undly_39);
    }
    elt.add_element(StrkPX_1);
  } // end StrkPX
  { // StrkPX
    xml_element StrkPX_2{"StrkPX"};
    multiset<string> StrkPX_2_set;
    StrkPX_2.add_attribute("PrevClsPx", "15266469.380000"); // 1
    StrkPX_2_set.insert("15266469.380000");
    StrkPX_2.add_attribute("ClOrdID", "ClOrdID_t_1597039947"); // 1
    StrkPX_2_set.insert("ClOrdID_t_1597039947");
    StrkPX_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_33929015"); // 1
    StrkPX_2_set.insert("SecondaryClOrdID_t_33929015");
    StrkPX_2.add_attribute("Side", "B"); // 1
    StrkPX_2_set.insert("B");
    StrkPX_2.add_attribute("Px", "7386002.400000"); // 1
    StrkPX_2_set.insert("7386002.400000");
    StrkPX_2.add_attribute("Ccy", "EUR"); // 1
    StrkPX_2_set.insert("EUR");
    StrkPX_2.add_attribute("Txt", "Text_t_537372510"); // 1
    StrkPX_2_set.insert("Text_t_537372510");
    StrkPX_2.add_attribute("EncTxtLen", "232304348"); // 1
    StrkPX_2_set.insert("232304348");
    StrkPX_2.add_attribute("EncTxt", "EncodedText_t_1066127642"); // 1
    StrkPX_2_set.insert("EncodedText_t_1066127642");
    all_values.push_back(StrkPX_2_set);
    all_compo_names.insert("StrkPX_2_set");

    {
      xml_element Instrmt_28{"Instrmt"};
      multiset<string> Instrmt_28_set;
      Instrmt_28.add_attribute("Sym", "Symbol_t_615514962"); // 2
      Instrmt_28_set.insert("Symbol_t_615514962");
      Instrmt_28.add_attribute("Sfx", "WI"); // 2
      Instrmt_28_set.insert("WI");
      Instrmt_28.add_attribute("ID", "SecurityID_t_483800955"); // 2
      Instrmt_28_set.insert("SecurityID_t_483800955");
      Instrmt_28.add_attribute("Src", "I"); // 2
      Instrmt_28_set.insert("I");
      Instrmt_28.add_attribute("Prod", "10"); // 2
      Instrmt_28_set.insert("10");
      Instrmt_28.add_attribute("ProdCmplx", "ProductComplex_t_2064005763"); // 2
      Instrmt_28_set.insert("ProductComplex_t_2064005763");
      Instrmt_28.add_attribute("SecGrp", "SecurityGroup_t_1062509102"); // 2
      Instrmt_28_set.insert("SecurityGroup_t_1062509102");
      Instrmt_28.add_attribute("CFI", "CFICode_t_2883570"); // 2
      Instrmt_28_set.insert("CFICode_t_2883570");
      Instrmt_28.add_attribute("SecTyp", "WITHDRN"); // 2
      Instrmt_28_set.insert("WITHDRN");
      Instrmt_28.add_attribute("SubTyp", "SecuritySubType_t_623941321"); // 2
      Instrmt_28_set.insert("SecuritySubType_t_623941321");
      Instrmt_28.add_attribute("MMY", "1877726360"); // 2
      Instrmt_28_set.insert("1877726360");
      Instrmt_28.add_attribute("MatDt", "MaturityDate_t_1961154983"); // 2
      Instrmt_28_set.insert("MaturityDate_t_1961154983");
      Instrmt_28.add_attribute("MatTm", "379080888"); // 2
      Instrmt_28_set.insert("379080888");
      Instrmt_28.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1197165304"); // 2
      Instrmt_28_set.insert("SettleOnOpenFlag_t_1197165304");
      Instrmt_28.add_attribute("AsgnMeth", "182429570"); // 2
      Instrmt_28_set.insert("182429570");
      Instrmt_28.add_attribute("Status", "1"); // 2
      Instrmt_28_set.insert("1");
      Instrmt_28.add_attribute("CpnPmt", "CouponPaymentDate_t_313744030"); // 2
      Instrmt_28_set.insert("CouponPaymentDate_t_313744030");
      Instrmt_28.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_28_set.insert("MM");
      Instrmt_28.add_attribute("Snrty", "SR"); // 2
      Instrmt_28_set.insert("SR");
      Instrmt_28.add_attribute("NotlPctOut", "21349094.850000"); // 2
      Instrmt_28_set.insert("21349094.850000");
      Instrmt_28.add_attribute("OrigNotlPctOut", "4678859.280000"); // 2
      Instrmt_28_set.insert("4678859.280000");
      Instrmt_28.add_attribute("AttchPnt", "4096591.810000"); // 2
      Instrmt_28_set.insert("4096591.810000");
      Instrmt_28.add_attribute("DetchPnt", "15844657.850000"); // 2
      Instrmt_28_set.insert("15844657.850000");
      Instrmt_28.add_attribute("Issued", "IssueDate_t_501814943"); // 2
      Instrmt_28_set.insert("IssueDate_t_501814943");
      Instrmt_28.add_attribute("RepoCollSecTyp", "139379960"); // 2
      Instrmt_28_set.insert("139379960");
      Instrmt_28.add_attribute("RepoTrm", "175582377"); // 2
      Instrmt_28_set.insert("175582377");
      Instrmt_28.add_attribute("RepoRt", "11807704.810000"); // 2
      Instrmt_28_set.insert("11807704.810000");
      Instrmt_28.add_attribute("Fctr", "6026555.970000"); // 2
      Instrmt_28_set.insert("6026555.970000");
      Instrmt_28.add_attribute("CrdRtg", "CreditRating_t_712954887"); // 2
      Instrmt_28_set.insert("CreditRating_t_712954887");
      Instrmt_28.add_attribute("Rgstry", "InstrRegistry_t_1413074829"); // 2
      Instrmt_28_set.insert("InstrRegistry_t_1413074829");
      Instrmt_28.add_attribute("IssuCtry", "1668783239"); // 2
      Instrmt_28_set.insert("1668783239");
      Instrmt_28.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1328469849"); // 2
      Instrmt_28_set.insert("StateOrProvinceOfIssue_t_1328469849");
      Instrmt_28.add_attribute("Lcl", "LocaleOfIssue_t_1771048589"); // 2
      Instrmt_28_set.insert("LocaleOfIssue_t_1771048589");
      Instrmt_28.add_attribute("Redeem", "RedemptionDate_t_5100547"); // 2
      Instrmt_28_set.insert("RedemptionDate_t_5100547");
      Instrmt_28.add_attribute("StrkPx", "4388335.350000"); // 2
      Instrmt_28_set.insert("4388335.350000");
      Instrmt_28.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_28_set.insert("JPY");
      Instrmt_28.add_attribute("StrkMult", "15013426.370000"); // 2
      Instrmt_28_set.insert("15013426.370000");
      Instrmt_28.add_attribute("StrkValu", "17787749.860000"); // 2
      Instrmt_28_set.insert("17787749.860000");
      Instrmt_28.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_28_set.insert("3");
      Instrmt_28.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_28_set.insert("4");
      Instrmt_28.add_attribute("StrkPxBndryPrcsn", "15090176.980000"); // 2
      Instrmt_28_set.insert("15090176.980000");
      Instrmt_28.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_28_set.insert("2");
      Instrmt_28.add_attribute("OptAt", "356881199"); // 2
      Instrmt_28_set.insert("356881199");
      Instrmt_28.add_attribute("Mult", "5586993.540000"); // 2
      Instrmt_28_set.insert("5586993.540000");
      Instrmt_28.add_attribute("MultTyp", "2"); // 2
      Instrmt_28_set.insert("2");
      Instrmt_28.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_28_set.insert("1");
      Instrmt_28.add_attribute("MinPxIncr", "8724433.840000"); // 2
      Instrmt_28_set.insert("8724433.840000");
      Instrmt_28.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_390551841"); // 2
      Instrmt_28_set.insert("MinPriceIncrementAmount_t_390551841");
      Instrmt_28.add_attribute("UOM", "USD"); // 2
      Instrmt_28_set.insert("USD");
      Instrmt_28.add_attribute("UOMQty", "8598692.220000"); // 2
      Instrmt_28_set.insert("8598692.220000");
      Instrmt_28.add_attribute("PxUOM", "lbs"); // 2
      Instrmt_28_set.insert("lbs");
      Instrmt_28.add_attribute("PxUOMQty", "5881579.650000"); // 2
      Instrmt_28_set.insert("5881579.650000");
      Instrmt_28.add_attribute("SettlMeth", "P"); // 2
      Instrmt_28_set.insert("P");
      Instrmt_28.add_attribute("ExerStyle", "2"); // 2
      Instrmt_28_set.insert("2");
      Instrmt_28.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_28_set.insert("3");
      Instrmt_28.add_attribute("OptPayAmt", "OptPayoutAmount_t_472433736"); // 2
      Instrmt_28_set.insert("OptPayoutAmount_t_472433736");
      Instrmt_28.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_28_set.insert("INT");
      Instrmt_28.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_28_set.insert("FUTDA");
      Instrmt_28.add_attribute("ListMeth", "0"); // 2
      Instrmt_28_set.insert("0");
      Instrmt_28.add_attribute("CapPx", "18066143.750000"); // 2
      Instrmt_28_set.insert("18066143.750000");
      Instrmt_28.add_attribute("FlrPx", "8514931.140000"); // 2
      Instrmt_28_set.insert("8514931.140000");
      Instrmt_28.add_attribute("PutCall", "1"); // 2
      Instrmt_28_set.insert("1");
      Instrmt_28.add_attribute("FlexInd", "true"); // 2
      Instrmt_28_set.insert("true");
      Instrmt_28.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_28_set.insert("false");
      Instrmt_28.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_28_set.insert("Mo");
      Instrmt_28.add_attribute("CpnRt", "10585870.840000"); // 2
      Instrmt_28_set.insert("10585870.840000");
      Instrmt_28.add_attribute("Exch", "SecurityExchange_t_778216323"); // 2
      Instrmt_28_set.insert("SecurityExchange_t_778216323");
      Instrmt_28.add_attribute("PosLmt", "159067349"); // 2
      Instrmt_28_set.insert("159067349");
      Instrmt_28.add_attribute("NTPosLmt", "689878422"); // 2
      Instrmt_28_set.insert("689878422");
      Instrmt_28.add_attribute("Issr", "Issuer_t_1673502741"); // 2
      Instrmt_28_set.insert("Issuer_t_1673502741");
      Instrmt_28.add_attribute("EncIssrLen", "136867660"); // 2
      Instrmt_28_set.insert("136867660");
      Instrmt_28.add_attribute("EncIssr", "EncodedIssuer_t_51412472"); // 2
      Instrmt_28_set.insert("EncodedIssuer_t_51412472");
      Instrmt_28.add_attribute("Desc", "SecurityDesc_t_234976846"); // 2
      Instrmt_28_set.insert("SecurityDesc_t_234976846");
      Instrmt_28.add_attribute("EncSecDescLen", "493748859"); // 2
      Instrmt_28_set.insert("493748859");
      Instrmt_28.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_610111827"); // 2
      Instrmt_28_set.insert("EncodedSecurityDesc_t_610111827");
      Instrmt_28.add_attribute("Pool", "Pool_t_1126364169"); // 2
      Instrmt_28_set.insert("Pool_t_1126364169");
      Instrmt_28.add_attribute("CSetMo", "1789235400"); // 2
      Instrmt_28_set.insert("1789235400");
      Instrmt_28.add_attribute("CPPgm", "2"); // 2
      Instrmt_28_set.insert("2");
      Instrmt_28.add_attribute("CPRegT", "CPRegType_t_1516916011"); // 2
      Instrmt_28_set.insert("CPRegType_t_1516916011");
      Instrmt_28.add_attribute("Dated", "DatedDate_t_1967734184"); // 2
      Instrmt_28_set.insert("DatedDate_t_1967734184");
      Instrmt_28.add_attribute("IntAcrl", "InterestAccrualDate_t_194940785"); // 2
      Instrmt_28_set.insert("InterestAccrualDate_t_194940785");
      all_values.push_back(Instrmt_28_set);
      all_compo_names.insert("Instrmt_28_set");

      {
        xml_element AID_31{"AID"};
        multiset<string> AID_31_set;
        AID_31.add_attribute("AltID", "SecurityAltID_t_227870132"); // 3
        AID_31_set.insert("SecurityAltID_t_227870132");
        AID_31.add_attribute("AltIDSrc", "I"); // 3
        AID_31_set.insert("I");
        all_values.push_back(AID_31_set);
        all_compo_names.insert("AID_31_set");

        Instrmt_28.add_element(AID_31);
      }
      {
        xml_element SecXML_31{"SecXML"};
        multiset<string> SecXML_31_set;
        SecXML_31.add_attribute("Schema", "SecurityXMLSchema_t_491792144"); // 3
        SecXML_31_set.insert("SecurityXMLSchema_t_491792144");
        all_values.push_back(SecXML_31_set);
        all_compo_names.insert("SecXML_31_set");

        Instrmt_28.add_element(SecXML_31);
      }
      {
        xml_element Evnt_31{"Evnt"};
        multiset<string> Evnt_31_set;
        Evnt_31.add_attribute("EventTyp", "5"); // 3
        Evnt_31_set.insert("5");
        Evnt_31.add_attribute("Dt", "EventDate_t_1135946427"); // 3
        Evnt_31_set.insert("EventDate_t_1135946427");
        Evnt_31.add_attribute("Tm", "EventTime_t_964225881"); // 3
        Evnt_31_set.insert("EventTime_t_964225881");
        Evnt_31.add_attribute("Px", "19816623.910000"); // 3
        Evnt_31_set.insert("19816623.910000");
        Evnt_31.add_attribute("Txt", "EventText_t_318656301"); // 3
        Evnt_31_set.insert("EventText_t_318656301");
        all_values.push_back(Evnt_31_set);
        all_compo_names.insert("Evnt_31_set");

        Instrmt_28.add_element(Evnt_31);
      }
      {
        xml_element Pty_162{"Pty"};
        multiset<string> Pty_162_set;
        Pty_162.add_attribute("ID", "InstrumentPartyID_t_2130857"); // 3
        Pty_162_set.insert("InstrumentPartyID_t_2130857");
        Pty_162.add_attribute("Src", "5"); // 3
        Pty_162_set.insert("5");
        Pty_162.add_attribute("R", "24"); // 3
        Pty_162_set.insert("24");
        all_values.push_back(Pty_162_set);
        all_compo_names.insert("Pty_162_set");

        {
          xml_element Sub_162{"Sub"};
          multiset<string> Sub_162_set;
          Sub_162.add_attribute("ID", "InstrumentPartySubID_t_368505682"); // 4
          Sub_162_set.insert("InstrumentPartySubID_t_368505682");
          Sub_162.add_attribute("Typ", "7"); // 4
          Sub_162_set.insert("7");
          all_values.push_back(Sub_162_set);
          all_compo_names.insert("Sub_162_set");

          Pty_162.add_element(Sub_162);
        }
        Instrmt_28.add_element(Pty_162);
      }
      {
        xml_element CmplxEvnt_28{"CmplxEvnt"};
        multiset<string> CmplxEvnt_28_set;
        CmplxEvnt_28.add_attribute("Typ", "2"); // 3
        CmplxEvnt_28_set.insert("2");
        CmplxEvnt_28.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1173714043"); // 3
        CmplxEvnt_28_set.insert("ComplexOptPayoutAmount_t_1173714043");
        CmplxEvnt_28.add_attribute("Px", "19820758.710000"); // 3
        CmplxEvnt_28_set.insert("19820758.710000");
        CmplxEvnt_28.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_28_set.insert("2");
        CmplxEvnt_28.add_attribute("PxBndryPrcsn", "13327813.920000"); // 3
        CmplxEvnt_28_set.insert("13327813.920000");
        CmplxEvnt_28.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_28_set.insert("2");
        CmplxEvnt_28.add_attribute("Cond", "1"); // 3
        CmplxEvnt_28_set.insert("1");
        all_values.push_back(CmplxEvnt_28_set);
        all_compo_names.insert("CmplxEvnt_28_set");

        {
          xml_element EvntDts_28{"EvntDts"};
          multiset<string> EvntDts_28_set;
          EvntDts_28.add_attribute("StartDt", "ComplexEventStartDate_t_1469649052"); // 4
          EvntDts_28_set.insert("ComplexEventStartDate_t_1469649052");
          EvntDts_28.add_attribute("EndDt", "ComplexEventEndDate_t_575883117"); // 4
          EvntDts_28_set.insert("ComplexEventEndDate_t_575883117");
          all_values.push_back(EvntDts_28_set);
          all_compo_names.insert("EvntDts_28_set");

          {
            xml_element EvntTms_28{"EvntTms"};
            multiset<string> EvntTms_28_set;
            EvntTms_28.add_attribute("StartTm", "418471690"); // 5
            EvntTms_28_set.insert("418471690");
            EvntTms_28.add_attribute("EndTm", "1963397911"); // 5
            EvntTms_28_set.insert("1963397911");
            all_values.push_back(EvntTms_28_set);
            all_compo_names.insert("EvntTms_28_set");

            EvntDts_28.add_element(EvntTms_28);
          }
          CmplxEvnt_28.add_element(EvntDts_28);
        }
        Instrmt_28.add_element(CmplxEvnt_28);
      }
      StrkPX_2.add_element(Instrmt_28);
    }
    {
      xml_element Undly_40{"Undly"};
      multiset<string> Undly_40_set;
      Undly_40.add_attribute("Sym", "UnderlyingSymbol_t_1185994944"); // 2
      Undly_40_set.insert("UnderlyingSymbol_t_1185994944");
      Undly_40.add_attribute("Sfx", "CD"); // 2
      Undly_40_set.insert("CD");
      Undly_40.add_attribute("ID", "UnderlyingSecurityID_t_1605149663"); // 2
      Undly_40_set.insert("UnderlyingSecurityID_t_1605149663");
      Undly_40.add_attribute("Src", "7"); // 2
      Undly_40_set.insert("7");
      Undly_40.add_attribute("Prod", "8"); // 2
      Undly_40_set.insert("8");
      Undly_40.add_attribute("CFI", "UnderlyingCFICode_t_1425400199"); // 2
      Undly_40_set.insert("UnderlyingCFICode_t_1425400199");
      Undly_40.add_attribute("SecTyp", "ONITE"); // 2
      Undly_40_set.insert("ONITE");
      Undly_40.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1142138355"); // 2
      Undly_40_set.insert("UnderlyingSecuritySubType_t_1142138355");
      Undly_40.add_attribute("MMY", "1833808701"); // 2
      Undly_40_set.insert("1833808701");
      Undly_40.add_attribute("Mat", "UnderlyingMaturityDate_t_1207799438"); // 2
      Undly_40_set.insert("UnderlyingMaturityDate_t_1207799438");
      Undly_40.add_attribute("MatTm", "582777552"); // 2
      Undly_40_set.insert("582777552");
      Undly_40.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_822271480"); // 2
      Undly_40_set.insert("UnderlyingCouponPaymentDate_t_822271480");
      Undly_40.add_attribute("RestrctTyp", "XR"); // 2
      Undly_40_set.insert("XR");
      Undly_40.add_attribute("Snrty", "SB"); // 2
      Undly_40_set.insert("SB");
      Undly_40.add_attribute("NotlPctOut", "11409277.810000"); // 2
      Undly_40_set.insert("11409277.810000");
      Undly_40.add_attribute("OrigNotlPctOut", "266725.280000"); // 2
      Undly_40_set.insert("266725.280000");
      Undly_40.add_attribute("AttchPnt", "20577494.140000"); // 2
      Undly_40_set.insert("20577494.140000");
      Undly_40.add_attribute("DetchPnt", "1635935.490000"); // 2
      Undly_40_set.insert("1635935.490000");
      Undly_40.add_attribute("Issued", "UnderlyingIssueDate_t_395178210"); // 2
      Undly_40_set.insert("UnderlyingIssueDate_t_395178210");
      Undly_40.add_attribute("RepoCollSecTyp", "833754553"); // 2
      Undly_40_set.insert("833754553");
      Undly_40.add_attribute("RepoTrm", "42852977"); // 2
      Undly_40_set.insert("42852977");
      Undly_40.add_attribute("RepoRt", "15688922.530000"); // 2
      Undly_40_set.insert("15688922.530000");
      Undly_40.add_attribute("Fctr", "6683467.760000"); // 2
      Undly_40_set.insert("6683467.760000");
      Undly_40.add_attribute("CrdRtg", "UnderlyingCreditRating_t_700328729"); // 2
      Undly_40_set.insert("UnderlyingCreditRating_t_700328729");
      Undly_40.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_754189998"); // 2
      Undly_40_set.insert("UnderlyingInstrRegistry_t_754189998");
      Undly_40.add_attribute("Ctry", "1192817421"); // 2
      Undly_40_set.insert("1192817421");
      Undly_40.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_883823573"); // 2
      Undly_40_set.insert("UnderlyingStateOrProvinceOfIssue_t_883823573");
      Undly_40.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_76355402"); // 2
      Undly_40_set.insert("UnderlyingLocaleOfIssue_t_76355402");
      Undly_40.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1768700538"); // 2
      Undly_40_set.insert("UnderlyingRedemptionDate_t_1768700538");
      Undly_40.add_attribute("StrkPx", "13022952.640000"); // 2
      Undly_40_set.insert("13022952.640000");
      Undly_40.add_attribute("StrkCcy", "CAN"); // 2
      Undly_40_set.insert("CAN");
      Undly_40.add_attribute("OptA", "699647476"); // 2
      Undly_40_set.insert("699647476");
      Undly_40.add_attribute("Mult", "14974193.290000"); // 2
      Undly_40_set.insert("14974193.290000");
      Undly_40.add_attribute("MultTyp", "2"); // 2
      Undly_40_set.insert("2");
      Undly_40.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_40_set.insert("4");
      Undly_40.add_attribute("UOM", "oz_tr"); // 2
      Undly_40_set.insert("oz_tr");
      Undly_40.add_attribute("UOMQty", "20442856.360000"); // 2
      Undly_40_set.insert("20442856.360000");
      Undly_40.add_attribute("PxUOM", "Bbl"); // 2
      Undly_40_set.insert("Bbl");
      Undly_40.add_attribute("PxUOMQty", "4616609.340000"); // 2
      Undly_40_set.insert("4616609.340000");
      Undly_40.add_attribute("TmUnit", "Mo"); // 2
      Undly_40_set.insert("Mo");
      Undly_40.add_attribute("ExerStyle", "1"); // 2
      Undly_40_set.insert("1");
      Undly_40.add_attribute("CpnRt", "12839324.140000"); // 2
      Undly_40_set.insert("12839324.140000");
      Undly_40.add_attribute("Exch", "UnderlyingSecurityExchange_t_1129143097"); // 2
      Undly_40_set.insert("UnderlyingSecurityExchange_t_1129143097");
      Undly_40.add_attribute("Issr", "UnderlyingIssuer_t_1608304254"); // 2
      Undly_40_set.insert("UnderlyingIssuer_t_1608304254");
      Undly_40.add_attribute("EncUndIssrLen", "277376547"); // 2
      Undly_40_set.insert("277376547");
      Undly_40.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1155815625"); // 2
      Undly_40_set.insert("EncodedUnderlyingIssuer_t_1155815625");
      Undly_40.add_attribute("Desc", "UnderlyingSecurityDesc_t_1518570020"); // 2
      Undly_40_set.insert("UnderlyingSecurityDesc_t_1518570020");
      Undly_40.add_attribute("EncUndSecDescLen", "440970096"); // 2
      Undly_40_set.insert("440970096");
      Undly_40.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1550993836"); // 2
      Undly_40_set.insert("EncodedUnderlyingSecurityDesc_t_1550993836");
      Undly_40.add_attribute("CPPgm", "UnderlyingCPProgram_t_204840925"); // 2
      Undly_40_set.insert("UnderlyingCPProgram_t_204840925");
      Undly_40.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_483823074"); // 2
      Undly_40_set.insert("UnderlyingCPRegType_t_483823074");
      Undly_40.add_attribute("AllocPct", "9724024.410000"); // 2
      Undly_40_set.insert("9724024.410000");
      Undly_40.add_attribute("Ccy", "CAN"); // 2
      Undly_40_set.insert("CAN");
      Undly_40.add_attribute("Qty", "17265924.390000"); // 2
      Undly_40_set.insert("17265924.390000");
      Undly_40.add_attribute("SettlTyp", "2"); // 2
      Undly_40_set.insert("2");
      Undly_40.add_attribute("CashAmt", "UnderlyingCashAmount_t_2067975376"); // 2
      Undly_40_set.insert("UnderlyingCashAmount_t_2067975376");
      Undly_40.add_attribute("CashTyp", "FIXED"); // 2
      Undly_40_set.insert("FIXED");
      Undly_40.add_attribute("Px", "16872220.130000"); // 2
      Undly_40_set.insert("16872220.130000");
      Undly_40.add_attribute("DirtPx", "12227869.920000"); // 2
      Undly_40_set.insert("12227869.920000");
      Undly_40.add_attribute("EndPx", "16952175.080000"); // 2
      Undly_40_set.insert("16952175.080000");
      Undly_40.add_attribute("StartVal", "UnderlyingStartValue_t_346950200"); // 2
      Undly_40_set.insert("UnderlyingStartValue_t_346950200");
      Undly_40.add_attribute("CurVal", "UnderlyingCurrentValue_t_1922434468"); // 2
      Undly_40_set.insert("UnderlyingCurrentValue_t_1922434468");
      Undly_40.add_attribute("EndVal", "UnderlyingEndValue_t_1045153189"); // 2
      Undly_40_set.insert("UnderlyingEndValue_t_1045153189");
      Undly_40.add_attribute("AdjQty", "16752285.430000"); // 2
      Undly_40_set.insert("16752285.430000");
      Undly_40.add_attribute("FxRate", "13888665.190000"); // 2
      Undly_40_set.insert("13888665.190000");
      Undly_40.add_attribute("FxRateCalc", "M"); // 2
      Undly_40_set.insert("M");
      Undly_40.add_attribute("CapValu", "UnderlyingCapValue_t_1572030531"); // 2
      Undly_40_set.insert("UnderlyingCapValue_t_1572030531");
      Undly_40.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1997436926"); // 2
      Undly_40_set.insert("UnderlyingSettlMethod_t_1997436926");
      Undly_40.add_attribute("PutCall", "134666356"); // 2
      Undly_40_set.insert("134666356");
      all_values.push_back(Undly_40_set);
      all_compo_names.insert("Undly_40_set");

      {
        xml_element UndAID_40{"UndAID"};
        multiset<string> UndAID_40_set;
        UndAID_40.add_attribute("AltID", "UnderlyingSecurityAltID_t_529148310"); // 3
        UndAID_40_set.insert("UnderlyingSecurityAltID_t_529148310");
        UndAID_40.add_attribute("AltIDSrc", "A"); // 3
        UndAID_40_set.insert("A");
        all_values.push_back(UndAID_40_set);
        all_compo_names.insert("UndAID_40_set");

        Undly_40.add_element(UndAID_40);
      }
      {
        xml_element Stip_67{"Stip"};
        multiset<string> Stip_67_set;
        Stip_67.add_attribute("Typ", "SUBSFREQ"); // 3
        Stip_67_set.insert("SUBSFREQ");
        Stip_67.add_attribute("Val", "UnderlyingStipValue_t_1658291407"); // 3
        Stip_67_set.insert("UnderlyingStipValue_t_1658291407");
        all_values.push_back(Stip_67_set);
        all_compo_names.insert("Stip_67_set");

        Undly_40.add_element(Stip_67);
      }
      {
        xml_element Pty_163{"Pty"};
        multiset<string> Pty_163_set;
        Pty_163.add_attribute("ID", "UnderlyingInstrumentPartyID_t_502121843"); // 3
        Pty_163_set.insert("UnderlyingInstrumentPartyID_t_502121843");
        Pty_163.add_attribute("Src", "1"); // 3
        Pty_163_set.insert("1");
        Pty_163.add_attribute("R", "39"); // 3
        Pty_163_set.insert("39");
        all_values.push_back(Pty_163_set);
        all_compo_names.insert("Pty_163_set");

        {
          xml_element Sub_163{"Sub"};
          multiset<string> Sub_163_set;
          Sub_163.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2020691864"); // 4
          Sub_163_set.insert("UnderlyingInstrumentPartySubID_t_2020691864");
          Sub_163.add_attribute("Typ", "5"); // 4
          Sub_163_set.insert("5");
          all_values.push_back(Sub_163_set);
          all_compo_names.insert("Sub_163_set");

          Pty_163.add_element(Sub_163);
        }
        Undly_40.add_element(Pty_163);
      }
      StrkPX_2.add_element(Undly_40);
    }
    elt.add_element(StrkPX_2);
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
