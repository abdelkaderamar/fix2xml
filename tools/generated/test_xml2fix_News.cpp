#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/News.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( News_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"News" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> News_message_t_0;
  elt.add_attribute("ID", "NewsID_t_1426558911"); // 0
  News_message_t_0.insert("NewsID_t_1426558911");
  elt.add_attribute("NewsCatgy", "1"); // 0
  News_message_t_0.insert("1");
  elt.add_attribute("LangCd", "LanguageCode_t_123496106"); // 0
  News_message_t_0.insert("LanguageCode_t_123496106");
  elt.add_attribute("OrigTm", "OrigTime_t_1489245244"); // 0
  News_message_t_0.insert("OrigTime_t_1489245244");
  elt.add_attribute("Urgency", "2"); // 0
  News_message_t_0.insert("2");
  elt.add_attribute("Headline", "Headline_t_116590285"); // 0
  News_message_t_0.insert("Headline_t_116590285");
  elt.add_attribute("EncHeadlineLen", "1240216201"); // 0
  News_message_t_0.insert("1240216201");
  elt.add_attribute("EncHeadline", "EncodedHeadline_t_246020964"); // 0
  News_message_t_0.insert("EncodedHeadline_t_246020964");
  elt.add_attribute("MktID", "MarketID_t_1233197749"); // 0
  News_message_t_0.insert("MarketID_t_1233197749");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1404419464"); // 0
  News_message_t_0.insert("MarketSegmentID_t_1404419464");
  elt.add_attribute("URL", "URLLink_t_1598040216"); // 0
  News_message_t_0.insert("URLLink_t_1598040216");
  elt.add_attribute("RawDataLength", "1298757092"); // 0
  News_message_t_0.insert("1298757092");
  elt.add_attribute("RawData", "RawData_t_898856769"); // 0
  News_message_t_0.insert("RawData_t_898856769");
  all_values.push_back(News_message_t_0);
  all_compo_names.insert("News_message_t");

  { // Hdr
    xml_element Hdr_55{"Hdr"};
    multiset<string> Hdr_55_set;
    Hdr_55.add_attribute("SeqNum", "234379785"); // 1
    Hdr_55_set.insert("234379785");
    Hdr_55.add_attribute("SID", "SenderCompID_t_1513298570"); // 1
    Hdr_55_set.insert("SenderCompID_t_1513298570");
    Hdr_55.add_attribute("TID", "TargetCompID_t_207091632"); // 1
    Hdr_55_set.insert("TargetCompID_t_207091632");
    Hdr_55.add_attribute("OBID", "OnBehalfOfCompID_t_988279129"); // 1
    Hdr_55_set.insert("OnBehalfOfCompID_t_988279129");
    Hdr_55.add_attribute("D2ID", "DeliverToCompID_t_1724031102"); // 1
    Hdr_55_set.insert("DeliverToCompID_t_1724031102");
    Hdr_55.add_attribute("SSub", "SenderSubID_t_864653146"); // 1
    Hdr_55_set.insert("SenderSubID_t_864653146");
    Hdr_55.add_attribute("SLoc", "SenderLocationID_t_2019309500"); // 1
    Hdr_55_set.insert("SenderLocationID_t_2019309500");
    Hdr_55.add_attribute("TSub", "TargetSubID_t_1196103582"); // 1
    Hdr_55_set.insert("TargetSubID_t_1196103582");
    Hdr_55.add_attribute("TLoc", "TargetLocationID_t_1964699403"); // 1
    Hdr_55_set.insert("TargetLocationID_t_1964699403");
    Hdr_55.add_attribute("OBSub", "OnBehalfOfSubID_t_1136110945"); // 1
    Hdr_55_set.insert("OnBehalfOfSubID_t_1136110945");
    Hdr_55.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1641158678"); // 1
    Hdr_55_set.insert("OnBehalfOfLocationID_t_1641158678");
    Hdr_55.add_attribute("D2Sub", "DeliverToSubID_t_1960960161"); // 1
    Hdr_55_set.insert("DeliverToSubID_t_1960960161");
    Hdr_55.add_attribute("D2Loc", "DeliverToLocationID_t_1171841950"); // 1
    Hdr_55_set.insert("DeliverToLocationID_t_1171841950");
    Hdr_55.add_attribute("PosDup", "Y"); // 1
    Hdr_55_set.insert("Y");
    Hdr_55.add_attribute("PosRsnd", "N"); // 1
    Hdr_55_set.insert("N");
    Hdr_55.add_attribute("Snt", "SendingTime_t_1259529642"); // 1
    Hdr_55_set.insert("SendingTime_t_1259529642");
    Hdr_55.add_attribute("OrigSnt", "OrigSendingTime_t_55754989"); // 1
    Hdr_55_set.insert("OrigSendingTime_t_55754989");
    Hdr_55.add_attribute("MsgEncd", "MessageEncoding_t_1096538325"); // 1
    Hdr_55_set.insert("MessageEncoding_t_1096538325");
    all_values.push_back(Hdr_55_set);
    all_compo_names.insert("Hdr_55_set");

    {
      xml_element Hop_55{"Hop"};
      multiset<string> Hop_55_set;
      Hop_55.add_attribute("ID", "HopCompID_t_538604905"); // 2
      Hop_55_set.insert("HopCompID_t_538604905");
      Hop_55.add_attribute("Ref", "2056651815"); // 2
      Hop_55_set.insert("2056651815");
      Hop_55.add_attribute("Snt", "HopSendingTime_t_1220034432"); // 2
      Hop_55_set.insert("HopSendingTime_t_1220034432");
      all_values.push_back(Hop_55_set);
      all_compo_names.insert("Hop_55_set");

      Hdr_55.add_element(Hop_55);
    }
    elt.add_element(Hdr_55);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_10{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_10_set;
    ApplSeqCtrl_10.add_attribute("ApplID", "ApplID_t_2027850149"); // 1
    ApplSeqCtrl_10_set.insert("ApplID_t_2027850149");
    ApplSeqCtrl_10.add_attribute("ApplSeqNum", "1892672881"); // 1
    ApplSeqCtrl_10_set.insert("1892672881");
    ApplSeqCtrl_10.add_attribute("ApplLastSeqNum", "1336624717"); // 1
    ApplSeqCtrl_10_set.insert("1336624717");
    ApplSeqCtrl_10.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_10_set.insert("true");
    all_values.push_back(ApplSeqCtrl_10_set);
    all_compo_names.insert("ApplSeqCtrl_10_set");

    elt.add_element(ApplSeqCtrl_10);
  } // end ApplSeqCtrl
  { // Refs
    xml_element Refs_0{"Refs"};
    multiset<string> Refs_0_set;
    Refs_0.add_attribute("RefID", "NewsRefID_t_422338818"); // 1
    Refs_0_set.insert("NewsRefID_t_422338818");
    Refs_0.add_attribute("RefTyp", "1"); // 1
    Refs_0_set.insert("1");
    all_values.push_back(Refs_0_set);
    all_compo_names.insert("Refs_0_set");

    elt.add_element(Refs_0);
  } // end Refs
  { // Refs
    xml_element Refs_1{"Refs"};
    multiset<string> Refs_1_set;
    Refs_1.add_attribute("RefID", "NewsRefID_t_1589250414"); // 1
    Refs_1_set.insert("NewsRefID_t_1589250414");
    Refs_1.add_attribute("RefTyp", "2"); // 1
    Refs_1_set.insert("2");
    all_values.push_back(Refs_1_set);
    all_compo_names.insert("Refs_1_set");

    elt.add_element(Refs_1);
  } // end Refs
  { // Rtg
    xml_element Rtg_8{"Rtg"};
    multiset<string> Rtg_8_set;
    Rtg_8.add_attribute("RtgTyp", "4"); // 1
    Rtg_8_set.insert("4");
    Rtg_8.add_attribute("RtgID", "RoutingID_t_1086910832"); // 1
    Rtg_8_set.insert("RoutingID_t_1086910832");
    all_values.push_back(Rtg_8_set);
    all_compo_names.insert("Rtg_8_set");

    elt.add_element(Rtg_8);
  } // end Rtg
  { // Rtg
    xml_element Rtg_9{"Rtg"};
    multiset<string> Rtg_9_set;
    Rtg_9.add_attribute("RtgTyp", "1"); // 1
    Rtg_9_set.insert("1");
    Rtg_9.add_attribute("RtgID", "RoutingID_t_664425680"); // 1
    Rtg_9_set.insert("RoutingID_t_664425680");
    all_values.push_back(Rtg_9_set);
    all_compo_names.insert("Rtg_9_set");

    elt.add_element(Rtg_9);
  } // end Rtg
  { // Inst
    xml_element Inst_6{"Inst"};
    {
      xml_element Instrmt_45{"Instrmt"};
      multiset<string> Instrmt_45_set;
      Instrmt_45.add_attribute("Sym", "Symbol_t_200636418"); // 2
      Instrmt_45_set.insert("Symbol_t_200636418");
      Instrmt_45.add_attribute("Sfx", "CD"); // 2
      Instrmt_45_set.insert("CD");
      Instrmt_45.add_attribute("ID", "SecurityID_t_1859561869"); // 2
      Instrmt_45_set.insert("SecurityID_t_1859561869");
      Instrmt_45.add_attribute("Src", "A"); // 2
      Instrmt_45_set.insert("A");
      Instrmt_45.add_attribute("Prod", "3"); // 2
      Instrmt_45_set.insert("3");
      Instrmt_45.add_attribute("ProdCmplx", "ProductComplex_t_1353236899"); // 2
      Instrmt_45_set.insert("ProductComplex_t_1353236899");
      Instrmt_45.add_attribute("SecGrp", "SecurityGroup_t_1978812334"); // 2
      Instrmt_45_set.insert("SecurityGroup_t_1978812334");
      Instrmt_45.add_attribute("CFI", "CFICode_t_696720779"); // 2
      Instrmt_45_set.insert("CFICode_t_696720779");
      Instrmt_45.add_attribute("SecTyp", "GO"); // 2
      Instrmt_45_set.insert("GO");
      Instrmt_45.add_attribute("SubTyp", "SecuritySubType_t_423708511"); // 2
      Instrmt_45_set.insert("SecuritySubType_t_423708511");
      Instrmt_45.add_attribute("MMY", "1956250421"); // 2
      Instrmt_45_set.insert("1956250421");
      Instrmt_45.add_attribute("MatDt", "MaturityDate_t_1762528971"); // 2
      Instrmt_45_set.insert("MaturityDate_t_1762528971");
      Instrmt_45.add_attribute("MatTm", "1520246836"); // 2
      Instrmt_45_set.insert("1520246836");
      Instrmt_45.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_347371678"); // 2
      Instrmt_45_set.insert("SettleOnOpenFlag_t_347371678");
      Instrmt_45.add_attribute("AsgnMeth", "1671697139"); // 2
      Instrmt_45_set.insert("1671697139");
      Instrmt_45.add_attribute("Status", "1"); // 2
      Instrmt_45_set.insert("1");
      Instrmt_45.add_attribute("CpnPmt", "CouponPaymentDate_t_227738180"); // 2
      Instrmt_45_set.insert("CouponPaymentDate_t_227738180");
      Instrmt_45.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_45_set.insert("FR");
      Instrmt_45.add_attribute("Snrty", "SR"); // 2
      Instrmt_45_set.insert("SR");
      Instrmt_45.add_attribute("NotlPctOut", "13483208.820000"); // 2
      Instrmt_45_set.insert("13483208.820000");
      Instrmt_45.add_attribute("OrigNotlPctOut", "14080965.690000"); // 2
      Instrmt_45_set.insert("14080965.690000");
      Instrmt_45.add_attribute("AttchPnt", "2042775.080000"); // 2
      Instrmt_45_set.insert("2042775.080000");
      Instrmt_45.add_attribute("DetchPnt", "17258394.010000"); // 2
      Instrmt_45_set.insert("17258394.010000");
      Instrmt_45.add_attribute("Issued", "IssueDate_t_849863335"); // 2
      Instrmt_45_set.insert("IssueDate_t_849863335");
      Instrmt_45.add_attribute("RepoCollSecTyp", "1925373419"); // 2
      Instrmt_45_set.insert("1925373419");
      Instrmt_45.add_attribute("RepoTrm", "854731042"); // 2
      Instrmt_45_set.insert("854731042");
      Instrmt_45.add_attribute("RepoRt", "5260098.860000"); // 2
      Instrmt_45_set.insert("5260098.860000");
      Instrmt_45.add_attribute("Fctr", "8648006.030000"); // 2
      Instrmt_45_set.insert("8648006.030000");
      Instrmt_45.add_attribute("CrdRtg", "CreditRating_t_190714314"); // 2
      Instrmt_45_set.insert("CreditRating_t_190714314");
      Instrmt_45.add_attribute("Rgstry", "InstrRegistry_t_1190435566"); // 2
      Instrmt_45_set.insert("InstrRegistry_t_1190435566");
      Instrmt_45.add_attribute("IssuCtry", "1528258890"); // 2
      Instrmt_45_set.insert("1528258890");
      Instrmt_45.add_attribute("StPrv", "StateOrProvinceOfIssue_t_391350733"); // 2
      Instrmt_45_set.insert("StateOrProvinceOfIssue_t_391350733");
      Instrmt_45.add_attribute("Lcl", "LocaleOfIssue_t_1726687098"); // 2
      Instrmt_45_set.insert("LocaleOfIssue_t_1726687098");
      Instrmt_45.add_attribute("Redeem", "RedemptionDate_t_1240337111"); // 2
      Instrmt_45_set.insert("RedemptionDate_t_1240337111");
      Instrmt_45.add_attribute("StrkPx", "4092029.060000"); // 2
      Instrmt_45_set.insert("4092029.060000");
      Instrmt_45.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_45_set.insert("CAN");
      Instrmt_45.add_attribute("StrkMult", "2405315.930000"); // 2
      Instrmt_45_set.insert("2405315.930000");
      Instrmt_45.add_attribute("StrkValu", "19482867.070000"); // 2
      Instrmt_45_set.insert("19482867.070000");
      Instrmt_45.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_45_set.insert("2");
      Instrmt_45.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_45_set.insert("5");
      Instrmt_45.add_attribute("StrkPxBndryPrcsn", "17570534.810000"); // 2
      Instrmt_45_set.insert("17570534.810000");
      Instrmt_45.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_45_set.insert("2");
      Instrmt_45.add_attribute("OptAt", "37003292"); // 2
      Instrmt_45_set.insert("37003292");
      Instrmt_45.add_attribute("Mult", "21044251.590000"); // 2
      Instrmt_45_set.insert("21044251.590000");
      Instrmt_45.add_attribute("MultTyp", "0"); // 2
      Instrmt_45_set.insert("0");
      Instrmt_45.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_45_set.insert("3");
      Instrmt_45.add_attribute("MinPxIncr", "1846796.910000"); // 2
      Instrmt_45_set.insert("1846796.910000");
      Instrmt_45.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_561525884"); // 2
      Instrmt_45_set.insert("MinPriceIncrementAmount_t_561525884");
      Instrmt_45.add_attribute("UOM", "Bbl"); // 2
      Instrmt_45_set.insert("Bbl");
      Instrmt_45.add_attribute("UOMQty", "15330005.740000"); // 2
      Instrmt_45_set.insert("15330005.740000");
      Instrmt_45.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_45_set.insert("MMbbl");
      Instrmt_45.add_attribute("PxUOMQty", "6160171.110000"); // 2
      Instrmt_45_set.insert("6160171.110000");
      Instrmt_45.add_attribute("SettlMeth", "P"); // 2
      Instrmt_45_set.insert("P");
      Instrmt_45.add_attribute("ExerStyle", "2"); // 2
      Instrmt_45_set.insert("2");
      Instrmt_45.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_45_set.insert("1");
      Instrmt_45.add_attribute("OptPayAmt", "OptPayoutAmount_t_1966087369"); // 2
      Instrmt_45_set.insert("OptPayoutAmount_t_1966087369");
      Instrmt_45.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_45_set.insert("PCTPAR");
      Instrmt_45.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_45_set.insert("FUT");
      Instrmt_45.add_attribute("ListMeth", "0"); // 2
      Instrmt_45_set.insert("0");
      Instrmt_45.add_attribute("CapPx", "2409639.460000"); // 2
      Instrmt_45_set.insert("2409639.460000");
      Instrmt_45.add_attribute("FlrPx", "6394827.280000"); // 2
      Instrmt_45_set.insert("6394827.280000");
      Instrmt_45.add_attribute("PutCall", "1"); // 2
      Instrmt_45_set.insert("1");
      Instrmt_45.add_attribute("FlexInd", "true"); // 2
      Instrmt_45_set.insert("true");
      Instrmt_45.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_45_set.insert("true");
      Instrmt_45.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_45_set.insert("Wk");
      Instrmt_45.add_attribute("CpnRt", "10717333.240000"); // 2
      Instrmt_45_set.insert("10717333.240000");
      Instrmt_45.add_attribute("Exch", "SecurityExchange_t_178426555"); // 2
      Instrmt_45_set.insert("SecurityExchange_t_178426555");
      Instrmt_45.add_attribute("PosLmt", "1050403268"); // 2
      Instrmt_45_set.insert("1050403268");
      Instrmt_45.add_attribute("NTPosLmt", "872536384"); // 2
      Instrmt_45_set.insert("872536384");
      Instrmt_45.add_attribute("Issr", "Issuer_t_183807252"); // 2
      Instrmt_45_set.insert("Issuer_t_183807252");
      Instrmt_45.add_attribute("EncIssrLen", "1714643372"); // 2
      Instrmt_45_set.insert("1714643372");
      Instrmt_45.add_attribute("EncIssr", "EncodedIssuer_t_482106217"); // 2
      Instrmt_45_set.insert("EncodedIssuer_t_482106217");
      Instrmt_45.add_attribute("Desc", "SecurityDesc_t_1951716921"); // 2
      Instrmt_45_set.insert("SecurityDesc_t_1951716921");
      Instrmt_45.add_attribute("EncSecDescLen", "1751646665"); // 2
      Instrmt_45_set.insert("1751646665");
      Instrmt_45.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_439047728"); // 2
      Instrmt_45_set.insert("EncodedSecurityDesc_t_439047728");
      Instrmt_45.add_attribute("Pool", "Pool_t_1096356433"); // 2
      Instrmt_45_set.insert("Pool_t_1096356433");
      Instrmt_45.add_attribute("CSetMo", "233963930"); // 2
      Instrmt_45_set.insert("233963930");
      Instrmt_45.add_attribute("CPPgm", "1"); // 2
      Instrmt_45_set.insert("1");
      Instrmt_45.add_attribute("CPRegT", "CPRegType_t_1657882317"); // 2
      Instrmt_45_set.insert("CPRegType_t_1657882317");
      Instrmt_45.add_attribute("Dated", "DatedDate_t_645703533"); // 2
      Instrmt_45_set.insert("DatedDate_t_645703533");
      Instrmt_45.add_attribute("IntAcrl", "InterestAccrualDate_t_9244346"); // 2
      Instrmt_45_set.insert("InterestAccrualDate_t_9244346");
      all_values.push_back(Instrmt_45_set);
      all_compo_names.insert("Instrmt_45_set");

      {
        xml_element AID_48{"AID"};
        multiset<string> AID_48_set;
        AID_48.add_attribute("AltID", "SecurityAltID_t_1480021123"); // 3
        AID_48_set.insert("SecurityAltID_t_1480021123");
        AID_48.add_attribute("AltIDSrc", "9"); // 3
        AID_48_set.insert("9");
        all_values.push_back(AID_48_set);
        all_compo_names.insert("AID_48_set");

        Instrmt_45.add_element(AID_48);
      }
      {
        xml_element SecXML_48{"SecXML"};
        multiset<string> SecXML_48_set;
        SecXML_48.add_attribute("Schema", "SecurityXMLSchema_t_1120600673"); // 3
        SecXML_48_set.insert("SecurityXMLSchema_t_1120600673");
        all_values.push_back(SecXML_48_set);
        all_compo_names.insert("SecXML_48_set");

        Instrmt_45.add_element(SecXML_48);
      }
      {
        xml_element Evnt_48{"Evnt"};
        multiset<string> Evnt_48_set;
        Evnt_48.add_attribute("EventTyp", "16"); // 3
        Evnt_48_set.insert("16");
        Evnt_48.add_attribute("Dt", "EventDate_t_1655627527"); // 3
        Evnt_48_set.insert("EventDate_t_1655627527");
        Evnt_48.add_attribute("Tm", "EventTime_t_939204395"); // 3
        Evnt_48_set.insert("EventTime_t_939204395");
        Evnt_48.add_attribute("Px", "12025516.430000"); // 3
        Evnt_48_set.insert("12025516.430000");
        Evnt_48.add_attribute("Txt", "EventText_t_766851365"); // 3
        Evnt_48_set.insert("EventText_t_766851365");
        all_values.push_back(Evnt_48_set);
        all_compo_names.insert("Evnt_48_set");

        Instrmt_45.add_element(Evnt_48);
      }
      {
        xml_element Pty_260{"Pty"};
        multiset<string> Pty_260_set;
        Pty_260.add_attribute("ID", "InstrumentPartyID_t_948522431"); // 3
        Pty_260_set.insert("InstrumentPartyID_t_948522431");
        Pty_260.add_attribute("Src", "A"); // 3
        Pty_260_set.insert("A");
        Pty_260.add_attribute("R", "48"); // 3
        Pty_260_set.insert("48");
        all_values.push_back(Pty_260_set);
        all_compo_names.insert("Pty_260_set");

        {
          xml_element Sub_260{"Sub"};
          multiset<string> Sub_260_set;
          Sub_260.add_attribute("ID", "InstrumentPartySubID_t_1349191200"); // 4
          Sub_260_set.insert("InstrumentPartySubID_t_1349191200");
          Sub_260.add_attribute("Typ", "28"); // 4
          Sub_260_set.insert("28");
          all_values.push_back(Sub_260_set);
          all_compo_names.insert("Sub_260_set");

          Pty_260.add_element(Sub_260);
        }
        Instrmt_45.add_element(Pty_260);
      }
      {
        xml_element CmplxEvnt_45{"CmplxEvnt"};
        multiset<string> CmplxEvnt_45_set;
        CmplxEvnt_45.add_attribute("Typ", "6"); // 3
        CmplxEvnt_45_set.insert("6");
        CmplxEvnt_45.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_11579227"); // 3
        CmplxEvnt_45_set.insert("ComplexOptPayoutAmount_t_11579227");
        CmplxEvnt_45.add_attribute("Px", "1879326.620000"); // 3
        CmplxEvnt_45_set.insert("1879326.620000");
        CmplxEvnt_45.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_45_set.insert("1");
        CmplxEvnt_45.add_attribute("PxBndryPrcsn", "10619824.960000"); // 3
        CmplxEvnt_45_set.insert("10619824.960000");
        CmplxEvnt_45.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_45_set.insert("1");
        CmplxEvnt_45.add_attribute("Cond", "2"); // 3
        CmplxEvnt_45_set.insert("2");
        all_values.push_back(CmplxEvnt_45_set);
        all_compo_names.insert("CmplxEvnt_45_set");

        {
          xml_element EvntDts_45{"EvntDts"};
          multiset<string> EvntDts_45_set;
          EvntDts_45.add_attribute("StartDt", "ComplexEventStartDate_t_629142220"); // 4
          EvntDts_45_set.insert("ComplexEventStartDate_t_629142220");
          EvntDts_45.add_attribute("EndDt", "ComplexEventEndDate_t_1542575263"); // 4
          EvntDts_45_set.insert("ComplexEventEndDate_t_1542575263");
          all_values.push_back(EvntDts_45_set);
          all_compo_names.insert("EvntDts_45_set");

          {
            xml_element EvntTms_45{"EvntTms"};
            multiset<string> EvntTms_45_set;
            EvntTms_45.add_attribute("StartTm", "1305137366"); // 5
            EvntTms_45_set.insert("1305137366");
            EvntTms_45.add_attribute("EndTm", "233305237"); // 5
            EvntTms_45_set.insert("233305237");
            all_values.push_back(EvntTms_45_set);
            all_compo_names.insert("EvntTms_45_set");

            EvntDts_45.add_element(EvntTms_45);
          }
          CmplxEvnt_45.add_element(EvntDts_45);
        }
        Instrmt_45.add_element(CmplxEvnt_45);
      }
      Inst_6.add_element(Instrmt_45);
    }
    elt.add_element(Inst_6);
  } // end Inst
  { // Inst
    xml_element Inst_7{"Inst"};
    {
      xml_element Instrmt_46{"Instrmt"};
      multiset<string> Instrmt_46_set;
      Instrmt_46.add_attribute("Sym", "Symbol_t_1981622992"); // 2
      Instrmt_46_set.insert("Symbol_t_1981622992");
      Instrmt_46.add_attribute("Sfx", "CD"); // 2
      Instrmt_46_set.insert("CD");
      Instrmt_46.add_attribute("ID", "SecurityID_t_467269167"); // 2
      Instrmt_46_set.insert("SecurityID_t_467269167");
      Instrmt_46.add_attribute("Src", "F"); // 2
      Instrmt_46_set.insert("F");
      Instrmt_46.add_attribute("Prod", "3"); // 2
      Instrmt_46_set.insert("3");
      Instrmt_46.add_attribute("ProdCmplx", "ProductComplex_t_1112972700"); // 2
      Instrmt_46_set.insert("ProductComplex_t_1112972700");
      Instrmt_46.add_attribute("SecGrp", "SecurityGroup_t_467111110"); // 2
      Instrmt_46_set.insert("SecurityGroup_t_467111110");
      Instrmt_46.add_attribute("CFI", "CFICode_t_1244429944"); // 2
      Instrmt_46_set.insert("CFICode_t_1244429944");
      Instrmt_46.add_attribute("SecTyp", "EUFRN"); // 2
      Instrmt_46_set.insert("EUFRN");
      Instrmt_46.add_attribute("SubTyp", "SecuritySubType_t_1587711783"); // 2
      Instrmt_46_set.insert("SecuritySubType_t_1587711783");
      Instrmt_46.add_attribute("MMY", "1248969560"); // 2
      Instrmt_46_set.insert("1248969560");
      Instrmt_46.add_attribute("MatDt", "MaturityDate_t_1882837224"); // 2
      Instrmt_46_set.insert("MaturityDate_t_1882837224");
      Instrmt_46.add_attribute("MatTm", "379432530"); // 2
      Instrmt_46_set.insert("379432530");
      Instrmt_46.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_304037556"); // 2
      Instrmt_46_set.insert("SettleOnOpenFlag_t_304037556");
      Instrmt_46.add_attribute("AsgnMeth", "502204941"); // 2
      Instrmt_46_set.insert("502204941");
      Instrmt_46.add_attribute("Status", "2"); // 2
      Instrmt_46_set.insert("2");
      Instrmt_46.add_attribute("CpnPmt", "CouponPaymentDate_t_1747553145"); // 2
      Instrmt_46_set.insert("CouponPaymentDate_t_1747553145");
      Instrmt_46.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_46_set.insert("MM");
      Instrmt_46.add_attribute("Snrty", "SD"); // 2
      Instrmt_46_set.insert("SD");
      Instrmt_46.add_attribute("NotlPctOut", "8637524.830000"); // 2
      Instrmt_46_set.insert("8637524.830000");
      Instrmt_46.add_attribute("OrigNotlPctOut", "8997256.720000"); // 2
      Instrmt_46_set.insert("8997256.720000");
      Instrmt_46.add_attribute("AttchPnt", "5412417.410000"); // 2
      Instrmt_46_set.insert("5412417.410000");
      Instrmt_46.add_attribute("DetchPnt", "10516851.460000"); // 2
      Instrmt_46_set.insert("10516851.460000");
      Instrmt_46.add_attribute("Issued", "IssueDate_t_69338864"); // 2
      Instrmt_46_set.insert("IssueDate_t_69338864");
      Instrmt_46.add_attribute("RepoCollSecTyp", "1603224237"); // 2
      Instrmt_46_set.insert("1603224237");
      Instrmt_46.add_attribute("RepoTrm", "2112154192"); // 2
      Instrmt_46_set.insert("2112154192");
      Instrmt_46.add_attribute("RepoRt", "15702429.570000"); // 2
      Instrmt_46_set.insert("15702429.570000");
      Instrmt_46.add_attribute("Fctr", "848828.090000"); // 2
      Instrmt_46_set.insert("848828.090000");
      Instrmt_46.add_attribute("CrdRtg", "CreditRating_t_1507245808"); // 2
      Instrmt_46_set.insert("CreditRating_t_1507245808");
      Instrmt_46.add_attribute("Rgstry", "InstrRegistry_t_727896676"); // 2
      Instrmt_46_set.insert("InstrRegistry_t_727896676");
      Instrmt_46.add_attribute("IssuCtry", "318188047"); // 2
      Instrmt_46_set.insert("318188047");
      Instrmt_46.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1341385152"); // 2
      Instrmt_46_set.insert("StateOrProvinceOfIssue_t_1341385152");
      Instrmt_46.add_attribute("Lcl", "LocaleOfIssue_t_981906828"); // 2
      Instrmt_46_set.insert("LocaleOfIssue_t_981906828");
      Instrmt_46.add_attribute("Redeem", "RedemptionDate_t_785457214"); // 2
      Instrmt_46_set.insert("RedemptionDate_t_785457214");
      Instrmt_46.add_attribute("StrkPx", "17992519.160000"); // 2
      Instrmt_46_set.insert("17992519.160000");
      Instrmt_46.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_46_set.insert("CAN");
      Instrmt_46.add_attribute("StrkMult", "1188793.780000"); // 2
      Instrmt_46_set.insert("1188793.780000");
      Instrmt_46.add_attribute("StrkValu", "19907455.940000"); // 2
      Instrmt_46_set.insert("19907455.940000");
      Instrmt_46.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_46_set.insert("1");
      Instrmt_46.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_46_set.insert("2");
      Instrmt_46.add_attribute("StrkPxBndryPrcsn", "10922315.060000"); // 2
      Instrmt_46_set.insert("10922315.060000");
      Instrmt_46.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_46_set.insert("1");
      Instrmt_46.add_attribute("OptAt", "2086023692"); // 2
      Instrmt_46_set.insert("2086023692");
      Instrmt_46.add_attribute("Mult", "13962690.620000"); // 2
      Instrmt_46_set.insert("13962690.620000");
      Instrmt_46.add_attribute("MultTyp", "0"); // 2
      Instrmt_46_set.insert("0");
      Instrmt_46.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_46_set.insert("0");
      Instrmt_46.add_attribute("MinPxIncr", "9963385.600000"); // 2
      Instrmt_46_set.insert("9963385.600000");
      Instrmt_46.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2124253515"); // 2
      Instrmt_46_set.insert("MinPriceIncrementAmount_t_2124253515");
      Instrmt_46.add_attribute("UOM", "MWh"); // 2
      Instrmt_46_set.insert("MWh");
      Instrmt_46.add_attribute("UOMQty", "18600910.430000"); // 2
      Instrmt_46_set.insert("18600910.430000");
      Instrmt_46.add_attribute("PxUOM", "Bcf"); // 2
      Instrmt_46_set.insert("Bcf");
      Instrmt_46.add_attribute("PxUOMQty", "1899156.120000"); // 2
      Instrmt_46_set.insert("1899156.120000");
      Instrmt_46.add_attribute("SettlMeth", "P"); // 2
      Instrmt_46_set.insert("P");
      Instrmt_46.add_attribute("ExerStyle", "2"); // 2
      Instrmt_46_set.insert("2");
      Instrmt_46.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_46_set.insert("1");
      Instrmt_46.add_attribute("OptPayAmt", "OptPayoutAmount_t_728963086"); // 2
      Instrmt_46_set.insert("OptPayoutAmount_t_728963086");
      Instrmt_46.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_46_set.insert("INX");
      Instrmt_46.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_46_set.insert("CDS");
      Instrmt_46.add_attribute("ListMeth", "0"); // 2
      Instrmt_46_set.insert("0");
      Instrmt_46.add_attribute("CapPx", "10964903.890000"); // 2
      Instrmt_46_set.insert("10964903.890000");
      Instrmt_46.add_attribute("FlrPx", "487270.570000"); // 2
      Instrmt_46_set.insert("487270.570000");
      Instrmt_46.add_attribute("PutCall", "0"); // 2
      Instrmt_46_set.insert("0");
      Instrmt_46.add_attribute("FlexInd", "false"); // 2
      Instrmt_46_set.insert("false");
      Instrmt_46.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_46_set.insert("true");
      Instrmt_46.add_attribute("TmUnit", "Min"); // 2
      Instrmt_46_set.insert("Min");
      Instrmt_46.add_attribute("CpnRt", "6772292.190000"); // 2
      Instrmt_46_set.insert("6772292.190000");
      Instrmt_46.add_attribute("Exch", "SecurityExchange_t_585130539"); // 2
      Instrmt_46_set.insert("SecurityExchange_t_585130539");
      Instrmt_46.add_attribute("PosLmt", "1200758044"); // 2
      Instrmt_46_set.insert("1200758044");
      Instrmt_46.add_attribute("NTPosLmt", "520491165"); // 2
      Instrmt_46_set.insert("520491165");
      Instrmt_46.add_attribute("Issr", "Issuer_t_563286503"); // 2
      Instrmt_46_set.insert("Issuer_t_563286503");
      Instrmt_46.add_attribute("EncIssrLen", "759865557"); // 2
      Instrmt_46_set.insert("759865557");
      Instrmt_46.add_attribute("EncIssr", "EncodedIssuer_t_1612722671"); // 2
      Instrmt_46_set.insert("EncodedIssuer_t_1612722671");
      Instrmt_46.add_attribute("Desc", "SecurityDesc_t_276796043"); // 2
      Instrmt_46_set.insert("SecurityDesc_t_276796043");
      Instrmt_46.add_attribute("EncSecDescLen", "698405601"); // 2
      Instrmt_46_set.insert("698405601");
      Instrmt_46.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_861508086"); // 2
      Instrmt_46_set.insert("EncodedSecurityDesc_t_861508086");
      Instrmt_46.add_attribute("Pool", "Pool_t_492510524"); // 2
      Instrmt_46_set.insert("Pool_t_492510524");
      Instrmt_46.add_attribute("CSetMo", "1964900607"); // 2
      Instrmt_46_set.insert("1964900607");
      Instrmt_46.add_attribute("CPPgm", "2"); // 2
      Instrmt_46_set.insert("2");
      Instrmt_46.add_attribute("CPRegT", "CPRegType_t_469280391"); // 2
      Instrmt_46_set.insert("CPRegType_t_469280391");
      Instrmt_46.add_attribute("Dated", "DatedDate_t_1613574478"); // 2
      Instrmt_46_set.insert("DatedDate_t_1613574478");
      Instrmt_46.add_attribute("IntAcrl", "InterestAccrualDate_t_1570454041"); // 2
      Instrmt_46_set.insert("InterestAccrualDate_t_1570454041");
      all_values.push_back(Instrmt_46_set);
      all_compo_names.insert("Instrmt_46_set");

      {
        xml_element AID_49{"AID"};
        multiset<string> AID_49_set;
        AID_49.add_attribute("AltID", "SecurityAltID_t_1345775931"); // 3
        AID_49_set.insert("SecurityAltID_t_1345775931");
        AID_49.add_attribute("AltIDSrc", "7"); // 3
        AID_49_set.insert("7");
        all_values.push_back(AID_49_set);
        all_compo_names.insert("AID_49_set");

        Instrmt_46.add_element(AID_49);
      }
      {
        xml_element SecXML_49{"SecXML"};
        multiset<string> SecXML_49_set;
        SecXML_49.add_attribute("Schema", "SecurityXMLSchema_t_187262935"); // 3
        SecXML_49_set.insert("SecurityXMLSchema_t_187262935");
        all_values.push_back(SecXML_49_set);
        all_compo_names.insert("SecXML_49_set");

        Instrmt_46.add_element(SecXML_49);
      }
      {
        xml_element Evnt_49{"Evnt"};
        multiset<string> Evnt_49_set;
        Evnt_49.add_attribute("EventTyp", "7"); // 3
        Evnt_49_set.insert("7");
        Evnt_49.add_attribute("Dt", "EventDate_t_1449146291"); // 3
        Evnt_49_set.insert("EventDate_t_1449146291");
        Evnt_49.add_attribute("Tm", "EventTime_t_916226021"); // 3
        Evnt_49_set.insert("EventTime_t_916226021");
        Evnt_49.add_attribute("Px", "5127204.000000"); // 3
        Evnt_49_set.insert("5127204.000000");
        Evnt_49.add_attribute("Txt", "EventText_t_1179685301"); // 3
        Evnt_49_set.insert("EventText_t_1179685301");
        all_values.push_back(Evnt_49_set);
        all_compo_names.insert("Evnt_49_set");

        Instrmt_46.add_element(Evnt_49);
      }
      {
        xml_element Pty_261{"Pty"};
        multiset<string> Pty_261_set;
        Pty_261.add_attribute("ID", "InstrumentPartyID_t_1004951267"); // 3
        Pty_261_set.insert("InstrumentPartyID_t_1004951267");
        Pty_261.add_attribute("Src", "9"); // 3
        Pty_261_set.insert("9");
        Pty_261.add_attribute("R", "58"); // 3
        Pty_261_set.insert("58");
        all_values.push_back(Pty_261_set);
        all_compo_names.insert("Pty_261_set");

        {
          xml_element Sub_261{"Sub"};
          multiset<string> Sub_261_set;
          Sub_261.add_attribute("ID", "InstrumentPartySubID_t_287578017"); // 4
          Sub_261_set.insert("InstrumentPartySubID_t_287578017");
          Sub_261.add_attribute("Typ", "13"); // 4
          Sub_261_set.insert("13");
          all_values.push_back(Sub_261_set);
          all_compo_names.insert("Sub_261_set");

          Pty_261.add_element(Sub_261);
        }
        Instrmt_46.add_element(Pty_261);
      }
      {
        xml_element CmplxEvnt_46{"CmplxEvnt"};
        multiset<string> CmplxEvnt_46_set;
        CmplxEvnt_46.add_attribute("Typ", "5"); // 3
        CmplxEvnt_46_set.insert("5");
        CmplxEvnt_46.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1369456683"); // 3
        CmplxEvnt_46_set.insert("ComplexOptPayoutAmount_t_1369456683");
        CmplxEvnt_46.add_attribute("Px", "698699.300000"); // 3
        CmplxEvnt_46_set.insert("698699.300000");
        CmplxEvnt_46.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_46_set.insert("3");
        CmplxEvnt_46.add_attribute("PxBndryPrcsn", "4227310.790000"); // 3
        CmplxEvnt_46_set.insert("4227310.790000");
        CmplxEvnt_46.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_46_set.insert("3");
        CmplxEvnt_46.add_attribute("Cond", "2"); // 3
        CmplxEvnt_46_set.insert("2");
        all_values.push_back(CmplxEvnt_46_set);
        all_compo_names.insert("CmplxEvnt_46_set");

        {
          xml_element EvntDts_46{"EvntDts"};
          multiset<string> EvntDts_46_set;
          EvntDts_46.add_attribute("StartDt", "ComplexEventStartDate_t_1182596636"); // 4
          EvntDts_46_set.insert("ComplexEventStartDate_t_1182596636");
          EvntDts_46.add_attribute("EndDt", "ComplexEventEndDate_t_55600119"); // 4
          EvntDts_46_set.insert("ComplexEventEndDate_t_55600119");
          all_values.push_back(EvntDts_46_set);
          all_compo_names.insert("EvntDts_46_set");

          {
            xml_element EvntTms_46{"EvntTms"};
            multiset<string> EvntTms_46_set;
            EvntTms_46.add_attribute("StartTm", "1340326068"); // 5
            EvntTms_46_set.insert("1340326068");
            EvntTms_46.add_attribute("EndTm", "1881002238"); // 5
            EvntTms_46_set.insert("1881002238");
            all_values.push_back(EvntTms_46_set);
            all_compo_names.insert("EvntTms_46_set");

            EvntDts_46.add_element(EvntTms_46);
          }
          CmplxEvnt_46.add_element(EvntDts_46);
        }
        Instrmt_46.add_element(CmplxEvnt_46);
      }
      Inst_7.add_element(Instrmt_46);
    }
    elt.add_element(Inst_7);
  } // end Inst
  { // Leg
    xml_element Leg_62{"Leg"};
    multiset<string> Leg_62_set;
    Leg_62.add_attribute("Sym", "LegSymbol_t_1832836592"); // 1
    Leg_62_set.insert("LegSymbol_t_1832836592");
    Leg_62.add_attribute("Sfx", "WI"); // 1
    Leg_62_set.insert("WI");
    Leg_62.add_attribute("ID", "LegSecurityID_t_627471203"); // 1
    Leg_62_set.insert("LegSecurityID_t_627471203");
    Leg_62.add_attribute("Src", "M"); // 1
    Leg_62_set.insert("M");
    Leg_62.add_attribute("Prod", "2"); // 1
    Leg_62_set.insert("2");
    Leg_62.add_attribute("CFI", "LegCFICode_t_50441596"); // 1
    Leg_62_set.insert("LegCFICode_t_50441596");
    Leg_62.add_attribute("SecTyp", "WITHDRN"); // 1
    Leg_62_set.insert("WITHDRN");
    Leg_62.add_attribute("SecSubTyp", "LegSecuritySubType_t_820516469"); // 1
    Leg_62_set.insert("LegSecuritySubType_t_820516469");
    Leg_62.add_attribute("MMY", "237704531"); // 1
    Leg_62_set.insert("237704531");
    Leg_62.add_attribute("Mat", "LegMaturityDate_t_1644535953"); // 1
    Leg_62_set.insert("LegMaturityDate_t_1644535953");
    Leg_62.add_attribute("MatTm", "122179112"); // 1
    Leg_62_set.insert("122179112");
    Leg_62.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1153930552"); // 1
    Leg_62_set.insert("LegCouponPaymentDate_t_1153930552");
    Leg_62.add_attribute("Issued", "LegIssueDate_t_9772706"); // 1
    Leg_62_set.insert("LegIssueDate_t_9772706");
    Leg_62.add_attribute("RepoCollSecTyp", "1301864413"); // 1
    Leg_62_set.insert("1301864413");
    Leg_62.add_attribute("RepoTrm", "11398171"); // 1
    Leg_62_set.insert("11398171");
    Leg_62.add_attribute("RepoRt", "16189834.960000"); // 1
    Leg_62_set.insert("16189834.960000");
    Leg_62.add_attribute("Fctr", "3827931.240000"); // 1
    Leg_62_set.insert("3827931.240000");
    Leg_62.add_attribute("CrdRtg", "LegCreditRating_t_298976188"); // 1
    Leg_62_set.insert("LegCreditRating_t_298976188");
    Leg_62.add_attribute("Rgstry", "LegInstrRegistry_t_1011624207"); // 1
    Leg_62_set.insert("LegInstrRegistry_t_1011624207");
    Leg_62.add_attribute("Ctry", "297906107"); // 1
    Leg_62_set.insert("297906107");
    Leg_62.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1668432871"); // 1
    Leg_62_set.insert("LegStateOrProvinceOfIssue_t_1668432871");
    Leg_62.add_attribute("Lcl", "LegLocaleOfIssue_t_1081494138"); // 1
    Leg_62_set.insert("LegLocaleOfIssue_t_1081494138");
    Leg_62.add_attribute("Redeem", "LegRedemptionDate_t_798149629"); // 1
    Leg_62_set.insert("LegRedemptionDate_t_798149629");
    Leg_62.add_attribute("Strk", "20911639.500000"); // 1
    Leg_62_set.insert("20911639.500000");
    Leg_62.add_attribute("StrkCcy", "GBP"); // 1
    Leg_62_set.insert("GBP");
    Leg_62.add_attribute("OptA", "1126276939"); // 1
    Leg_62_set.insert("1126276939");
    Leg_62.add_attribute("Cmult", "17274553.520000"); // 1
    Leg_62_set.insert("17274553.520000");
    Leg_62.add_attribute("MultTyp", "0"); // 1
    Leg_62_set.insert("0");
    Leg_62.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_62_set.insert("4");
    Leg_62.add_attribute("UOM", "MMBtu"); // 1
    Leg_62_set.insert("MMBtu");
    Leg_62.add_attribute("UOMQty", "7398750.180000"); // 1
    Leg_62_set.insert("7398750.180000");
    Leg_62.add_attribute("PxUOM", "t"); // 1
    Leg_62_set.insert("t");
    Leg_62.add_attribute("PxUOMQty", "11245511.120000"); // 1
    Leg_62_set.insert("11245511.120000");
    Leg_62.add_attribute("TmUnit", "Mo"); // 1
    Leg_62_set.insert("Mo");
    Leg_62.add_attribute("ExerStyle", "1"); // 1
    Leg_62_set.insert("1");
    Leg_62.add_attribute("CpnRt", "11749927.090000"); // 1
    Leg_62_set.insert("11749927.090000");
    Leg_62.add_attribute("Exch", "LegSecurityExchange_t_247433972"); // 1
    Leg_62_set.insert("LegSecurityExchange_t_247433972");
    Leg_62.add_attribute("Issr", "LegIssuer_t_248273926"); // 1
    Leg_62_set.insert("LegIssuer_t_248273926");
    Leg_62.add_attribute("EncLegIssrLen", "1412697240"); // 1
    Leg_62_set.insert("1412697240");
    Leg_62.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1891969926"); // 1
    Leg_62_set.insert("EncodedLegIssuer_t_1891969926");
    Leg_62.add_attribute("Desc", "LegSecurityDesc_t_370453038"); // 1
    Leg_62_set.insert("LegSecurityDesc_t_370453038");
    Leg_62.add_attribute("EncLegSecDescLen", "419144145"); // 1
    Leg_62_set.insert("419144145");
    Leg_62.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1901742632"); // 1
    Leg_62_set.insert("EncodedLegSecurityDesc_t_1901742632");
    Leg_62.add_attribute("RatioQty", "16723174.510000"); // 1
    Leg_62_set.insert("16723174.510000");
    Leg_62.add_attribute("Side", "D"); // 1
    Leg_62_set.insert("D");
    Leg_62.add_attribute("Ccy", "GBP"); // 1
    Leg_62_set.insert("GBP");
    Leg_62.add_attribute("Pool", "LegPool_t_729518505"); // 1
    Leg_62_set.insert("LegPool_t_729518505");
    Leg_62.add_attribute("Dated", "LegDatedDate_t_237383039"); // 1
    Leg_62_set.insert("LegDatedDate_t_237383039");
    Leg_62.add_attribute("CSetMo", "205533035"); // 1
    Leg_62_set.insert("205533035");
    Leg_62.add_attribute("IntAcrl", "LegInterestAccrualDate_t_250467728"); // 1
    Leg_62_set.insert("LegInterestAccrualDate_t_250467728");
    Leg_62.add_attribute("PutCall", "1318877177"); // 1
    Leg_62_set.insert("1318877177");
    Leg_62.add_attribute("LegOptionRatio", "10036826.650000"); // 1
    Leg_62_set.insert("10036826.650000");
    Leg_62.add_attribute("Px", "1941480.310000"); // 1
    Leg_62_set.insert("1941480.310000");
    all_values.push_back(Leg_62_set);
    all_compo_names.insert("Leg_62_set");

    {
      xml_element LegAID_62{"LegAID"};
      multiset<string> LegAID_62_set;
      LegAID_62.add_attribute("SecAltID", "LegSecurityAltID_t_843248763"); // 2
      LegAID_62_set.insert("LegSecurityAltID_t_843248763");
      LegAID_62.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_62_set.insert("G");
      all_values.push_back(LegAID_62_set);
      all_compo_names.insert("LegAID_62_set");

      Leg_62.add_element(LegAID_62);
    }
    elt.add_element(Leg_62);
  } // end Leg
  { // Undly
    xml_element Undly_61{"Undly"};
    multiset<string> Undly_61_set;
    Undly_61.add_attribute("Sym", "UnderlyingSymbol_t_423220467"); // 1
    Undly_61_set.insert("UnderlyingSymbol_t_423220467");
    Undly_61.add_attribute("Sfx", "CD"); // 1
    Undly_61_set.insert("CD");
    Undly_61.add_attribute("ID", "UnderlyingSecurityID_t_32736851"); // 1
    Undly_61_set.insert("UnderlyingSecurityID_t_32736851");
    Undly_61.add_attribute("Src", "8"); // 1
    Undly_61_set.insert("8");
    Undly_61.add_attribute("Prod", "1"); // 1
    Undly_61_set.insert("1");
    Undly_61.add_attribute("CFI", "UnderlyingCFICode_t_443467929"); // 1
    Undly_61_set.insert("UnderlyingCFICode_t_443467929");
    Undly_61.add_attribute("SecTyp", "EUFRN"); // 1
    Undly_61_set.insert("EUFRN");
    Undly_61.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1259300470"); // 1
    Undly_61_set.insert("UnderlyingSecuritySubType_t_1259300470");
    Undly_61.add_attribute("MMY", "2018709034"); // 1
    Undly_61_set.insert("2018709034");
    Undly_61.add_attribute("Mat", "UnderlyingMaturityDate_t_1072360550"); // 1
    Undly_61_set.insert("UnderlyingMaturityDate_t_1072360550");
    Undly_61.add_attribute("MatTm", "1506734443"); // 1
    Undly_61_set.insert("1506734443");
    Undly_61.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_119499312"); // 1
    Undly_61_set.insert("UnderlyingCouponPaymentDate_t_119499312");
    Undly_61.add_attribute("RestrctTyp", "XR"); // 1
    Undly_61_set.insert("XR");
    Undly_61.add_attribute("Snrty", "SB"); // 1
    Undly_61_set.insert("SB");
    Undly_61.add_attribute("NotlPctOut", "4899523.500000"); // 1
    Undly_61_set.insert("4899523.500000");
    Undly_61.add_attribute("OrigNotlPctOut", "7567182.880000"); // 1
    Undly_61_set.insert("7567182.880000");
    Undly_61.add_attribute("AttchPnt", "10054797.050000"); // 1
    Undly_61_set.insert("10054797.050000");
    Undly_61.add_attribute("DetchPnt", "147861.530000"); // 1
    Undly_61_set.insert("147861.530000");
    Undly_61.add_attribute("Issued", "UnderlyingIssueDate_t_1187260604"); // 1
    Undly_61_set.insert("UnderlyingIssueDate_t_1187260604");
    Undly_61.add_attribute("RepoCollSecTyp", "231238537"); // 1
    Undly_61_set.insert("231238537");
    Undly_61.add_attribute("RepoTrm", "2069896729"); // 1
    Undly_61_set.insert("2069896729");
    Undly_61.add_attribute("RepoRt", "19167791.090000"); // 1
    Undly_61_set.insert("19167791.090000");
    Undly_61.add_attribute("Fctr", "4686215.760000"); // 1
    Undly_61_set.insert("4686215.760000");
    Undly_61.add_attribute("CrdRtg", "UnderlyingCreditRating_t_127946117"); // 1
    Undly_61_set.insert("UnderlyingCreditRating_t_127946117");
    Undly_61.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_19763190"); // 1
    Undly_61_set.insert("UnderlyingInstrRegistry_t_19763190");
    Undly_61.add_attribute("Ctry", "1787498754"); // 1
    Undly_61_set.insert("1787498754");
    Undly_61.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1131628782"); // 1
    Undly_61_set.insert("UnderlyingStateOrProvinceOfIssue_t_1131628782");
    Undly_61.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_213911221"); // 1
    Undly_61_set.insert("UnderlyingLocaleOfIssue_t_213911221");
    Undly_61.add_attribute("Redeem", "UnderlyingRedemptionDate_t_483263869"); // 1
    Undly_61_set.insert("UnderlyingRedemptionDate_t_483263869");
    Undly_61.add_attribute("StrkPx", "18495074.530000"); // 1
    Undly_61_set.insert("18495074.530000");
    Undly_61.add_attribute("StrkCcy", "JPY"); // 1
    Undly_61_set.insert("JPY");
    Undly_61.add_attribute("OptA", "1474424551"); // 1
    Undly_61_set.insert("1474424551");
    Undly_61.add_attribute("Mult", "15670730.420000"); // 1
    Undly_61_set.insert("15670730.420000");
    Undly_61.add_attribute("MultTyp", "2"); // 1
    Undly_61_set.insert("2");
    Undly_61.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_61_set.insert("3");
    Undly_61.add_attribute("UOM", "Bcf"); // 1
    Undly_61_set.insert("Bcf");
    Undly_61.add_attribute("UOMQty", "17241525.550000"); // 1
    Undly_61_set.insert("17241525.550000");
    Undly_61.add_attribute("PxUOM", "t"); // 1
    Undly_61_set.insert("t");
    Undly_61.add_attribute("PxUOMQty", "18817663.570000"); // 1
    Undly_61_set.insert("18817663.570000");
    Undly_61.add_attribute("TmUnit", "Yr"); // 1
    Undly_61_set.insert("Yr");
    Undly_61.add_attribute("ExerStyle", "0"); // 1
    Undly_61_set.insert("0");
    Undly_61.add_attribute("CpnRt", "20012656.690000"); // 1
    Undly_61_set.insert("20012656.690000");
    Undly_61.add_attribute("Exch", "UnderlyingSecurityExchange_t_986603600"); // 1
    Undly_61_set.insert("UnderlyingSecurityExchange_t_986603600");
    Undly_61.add_attribute("Issr", "UnderlyingIssuer_t_1561505006"); // 1
    Undly_61_set.insert("UnderlyingIssuer_t_1561505006");
    Undly_61.add_attribute("EncUndIssrLen", "343734371"); // 1
    Undly_61_set.insert("343734371");
    Undly_61.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1743321888"); // 1
    Undly_61_set.insert("EncodedUnderlyingIssuer_t_1743321888");
    Undly_61.add_attribute("Desc", "UnderlyingSecurityDesc_t_419501063"); // 1
    Undly_61_set.insert("UnderlyingSecurityDesc_t_419501063");
    Undly_61.add_attribute("EncUndSecDescLen", "358520524"); // 1
    Undly_61_set.insert("358520524");
    Undly_61.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_783098845"); // 1
    Undly_61_set.insert("EncodedUnderlyingSecurityDesc_t_783098845");
    Undly_61.add_attribute("CPPgm", "UnderlyingCPProgram_t_650739600"); // 1
    Undly_61_set.insert("UnderlyingCPProgram_t_650739600");
    Undly_61.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_280933606"); // 1
    Undly_61_set.insert("UnderlyingCPRegType_t_280933606");
    Undly_61.add_attribute("AllocPct", "5523943.060000"); // 1
    Undly_61_set.insert("5523943.060000");
    Undly_61.add_attribute("Ccy", "CHF"); // 1
    Undly_61_set.insert("CHF");
    Undly_61.add_attribute("Qty", "5721574.960000"); // 1
    Undly_61_set.insert("5721574.960000");
    Undly_61.add_attribute("SettlTyp", "5"); // 1
    Undly_61_set.insert("5");
    Undly_61.add_attribute("CashAmt", "UnderlyingCashAmount_t_1540508505"); // 1
    Undly_61_set.insert("UnderlyingCashAmount_t_1540508505");
    Undly_61.add_attribute("CashTyp", "DIFF"); // 1
    Undly_61_set.insert("DIFF");
    Undly_61.add_attribute("Px", "12426401.520000"); // 1
    Undly_61_set.insert("12426401.520000");
    Undly_61.add_attribute("DirtPx", "12425323.100000"); // 1
    Undly_61_set.insert("12425323.100000");
    Undly_61.add_attribute("EndPx", "1729212.600000"); // 1
    Undly_61_set.insert("1729212.600000");
    Undly_61.add_attribute("StartVal", "UnderlyingStartValue_t_1640840"); // 1
    Undly_61_set.insert("UnderlyingStartValue_t_1640840");
    Undly_61.add_attribute("CurVal", "UnderlyingCurrentValue_t_569473214"); // 1
    Undly_61_set.insert("UnderlyingCurrentValue_t_569473214");
    Undly_61.add_attribute("EndVal", "UnderlyingEndValue_t_1739994302"); // 1
    Undly_61_set.insert("UnderlyingEndValue_t_1739994302");
    Undly_61.add_attribute("AdjQty", "18284255.540000"); // 1
    Undly_61_set.insert("18284255.540000");
    Undly_61.add_attribute("FxRate", "2612062.340000"); // 1
    Undly_61_set.insert("2612062.340000");
    Undly_61.add_attribute("FxRateCalc", "D"); // 1
    Undly_61_set.insert("D");
    Undly_61.add_attribute("CapValu", "UnderlyingCapValue_t_1405094461"); // 1
    Undly_61_set.insert("UnderlyingCapValue_t_1405094461");
    Undly_61.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1212239724"); // 1
    Undly_61_set.insert("UnderlyingSettlMethod_t_1212239724");
    Undly_61.add_attribute("PutCall", "1337334334"); // 1
    Undly_61_set.insert("1337334334");
    all_values.push_back(Undly_61_set);
    all_compo_names.insert("Undly_61_set");

    {
      xml_element UndAID_61{"UndAID"};
      multiset<string> UndAID_61_set;
      UndAID_61.add_attribute("AltID", "UnderlyingSecurityAltID_t_2054123918"); // 2
      UndAID_61_set.insert("UnderlyingSecurityAltID_t_2054123918");
      UndAID_61.add_attribute("AltIDSrc", "J"); // 2
      UndAID_61_set.insert("J");
      all_values.push_back(UndAID_61_set);
      all_compo_names.insert("UndAID_61_set");

      Undly_61.add_element(UndAID_61);
    }
    {
      xml_element Stip_97{"Stip"};
      multiset<string> Stip_97_set;
      Stip_97.add_attribute("Typ", "PPT"); // 2
      Stip_97_set.insert("PPT");
      Stip_97.add_attribute("Val", "UnderlyingStipValue_t_893243871"); // 2
      Stip_97_set.insert("UnderlyingStipValue_t_893243871");
      all_values.push_back(Stip_97_set);
      all_compo_names.insert("Stip_97_set");

      Undly_61.add_element(Stip_97);
    }
    {
      xml_element Pty_262{"Pty"};
      multiset<string> Pty_262_set;
      Pty_262.add_attribute("ID", "UnderlyingInstrumentPartyID_t_936545368"); // 2
      Pty_262_set.insert("UnderlyingInstrumentPartyID_t_936545368");
      Pty_262.add_attribute("Src", "F"); // 2
      Pty_262_set.insert("F");
      Pty_262.add_attribute("R", "16"); // 2
      Pty_262_set.insert("16");
      all_values.push_back(Pty_262_set);
      all_compo_names.insert("Pty_262_set");

      {
        xml_element Sub_262{"Sub"};
        multiset<string> Sub_262_set;
        Sub_262.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1356046432"); // 3
        Sub_262_set.insert("UnderlyingInstrumentPartySubID_t_1356046432");
        Sub_262.add_attribute("Typ", "21"); // 3
        Sub_262_set.insert("21");
        all_values.push_back(Sub_262_set);
        all_compo_names.insert("Sub_262_set");

        Pty_262.add_element(Sub_262);
      }
      Undly_61.add_element(Pty_262);
    }
    elt.add_element(Undly_61);
  } // end Undly
  { // Undly
    xml_element Undly_62{"Undly"};
    multiset<string> Undly_62_set;
    Undly_62.add_attribute("Sym", "UnderlyingSymbol_t_1272180956"); // 1
    Undly_62_set.insert("UnderlyingSymbol_t_1272180956");
    Undly_62.add_attribute("Sfx", "CD"); // 1
    Undly_62_set.insert("CD");
    Undly_62.add_attribute("ID", "UnderlyingSecurityID_t_26821209"); // 1
    Undly_62_set.insert("UnderlyingSecurityID_t_26821209");
    Undly_62.add_attribute("Src", "6"); // 1
    Undly_62_set.insert("6");
    Undly_62.add_attribute("Prod", "2"); // 1
    Undly_62_set.insert("2");
    Undly_62.add_attribute("CFI", "UnderlyingCFICode_t_435700932"); // 1
    Undly_62_set.insert("UnderlyingCFICode_t_435700932");
    Undly_62.add_attribute("SecTyp", "SWING"); // 1
    Undly_62_set.insert("SWING");
    Undly_62.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1738039844"); // 1
    Undly_62_set.insert("UnderlyingSecuritySubType_t_1738039844");
    Undly_62.add_attribute("MMY", "1976209437"); // 1
    Undly_62_set.insert("1976209437");
    Undly_62.add_attribute("Mat", "UnderlyingMaturityDate_t_1035317829"); // 1
    Undly_62_set.insert("UnderlyingMaturityDate_t_1035317829");
    Undly_62.add_attribute("MatTm", "833196348"); // 1
    Undly_62_set.insert("833196348");
    Undly_62.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1071258099"); // 1
    Undly_62_set.insert("UnderlyingCouponPaymentDate_t_1071258099");
    Undly_62.add_attribute("RestrctTyp", "MR"); // 1
    Undly_62_set.insert("MR");
    Undly_62.add_attribute("Snrty", "SD"); // 1
    Undly_62_set.insert("SD");
    Undly_62.add_attribute("NotlPctOut", "16407313.130000"); // 1
    Undly_62_set.insert("16407313.130000");
    Undly_62.add_attribute("OrigNotlPctOut", "8007497.440000"); // 1
    Undly_62_set.insert("8007497.440000");
    Undly_62.add_attribute("AttchPnt", "5157790.950000"); // 1
    Undly_62_set.insert("5157790.950000");
    Undly_62.add_attribute("DetchPnt", "19019375.470000"); // 1
    Undly_62_set.insert("19019375.470000");
    Undly_62.add_attribute("Issued", "UnderlyingIssueDate_t_256317721"); // 1
    Undly_62_set.insert("UnderlyingIssueDate_t_256317721");
    Undly_62.add_attribute("RepoCollSecTyp", "1920873556"); // 1
    Undly_62_set.insert("1920873556");
    Undly_62.add_attribute("RepoTrm", "966693624"); // 1
    Undly_62_set.insert("966693624");
    Undly_62.add_attribute("RepoRt", "15936520.560000"); // 1
    Undly_62_set.insert("15936520.560000");
    Undly_62.add_attribute("Fctr", "18275138.260000"); // 1
    Undly_62_set.insert("18275138.260000");
    Undly_62.add_attribute("CrdRtg", "UnderlyingCreditRating_t_341733986"); // 1
    Undly_62_set.insert("UnderlyingCreditRating_t_341733986");
    Undly_62.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_637284763"); // 1
    Undly_62_set.insert("UnderlyingInstrRegistry_t_637284763");
    Undly_62.add_attribute("Ctry", "573274049"); // 1
    Undly_62_set.insert("573274049");
    Undly_62.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1278279354"); // 1
    Undly_62_set.insert("UnderlyingStateOrProvinceOfIssue_t_1278279354");
    Undly_62.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_24651842"); // 1
    Undly_62_set.insert("UnderlyingLocaleOfIssue_t_24651842");
    Undly_62.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1062356161"); // 1
    Undly_62_set.insert("UnderlyingRedemptionDate_t_1062356161");
    Undly_62.add_attribute("StrkPx", "4868421.380000"); // 1
    Undly_62_set.insert("4868421.380000");
    Undly_62.add_attribute("StrkCcy", "EUR"); // 1
    Undly_62_set.insert("EUR");
    Undly_62.add_attribute("OptA", "346144523"); // 1
    Undly_62_set.insert("346144523");
    Undly_62.add_attribute("Mult", "19448443.020000"); // 1
    Undly_62_set.insert("19448443.020000");
    Undly_62.add_attribute("MultTyp", "2"); // 1
    Undly_62_set.insert("2");
    Undly_62.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_62_set.insert("4");
    Undly_62.add_attribute("UOM", "t"); // 1
    Undly_62_set.insert("t");
    Undly_62.add_attribute("UOMQty", "1133941.960000"); // 1
    Undly_62_set.insert("1133941.960000");
    Undly_62.add_attribute("PxUOM", "MWh"); // 1
    Undly_62_set.insert("MWh");
    Undly_62.add_attribute("PxUOMQty", "617873.750000"); // 1
    Undly_62_set.insert("617873.750000");
    Undly_62.add_attribute("TmUnit", "Yr"); // 1
    Undly_62_set.insert("Yr");
    Undly_62.add_attribute("ExerStyle", "0"); // 1
    Undly_62_set.insert("0");
    Undly_62.add_attribute("CpnRt", "11330454.740000"); // 1
    Undly_62_set.insert("11330454.740000");
    Undly_62.add_attribute("Exch", "UnderlyingSecurityExchange_t_209467466"); // 1
    Undly_62_set.insert("UnderlyingSecurityExchange_t_209467466");
    Undly_62.add_attribute("Issr", "UnderlyingIssuer_t_435914170"); // 1
    Undly_62_set.insert("UnderlyingIssuer_t_435914170");
    Undly_62.add_attribute("EncUndIssrLen", "626293140"); // 1
    Undly_62_set.insert("626293140");
    Undly_62.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1010217210"); // 1
    Undly_62_set.insert("EncodedUnderlyingIssuer_t_1010217210");
    Undly_62.add_attribute("Desc", "UnderlyingSecurityDesc_t_951693265"); // 1
    Undly_62_set.insert("UnderlyingSecurityDesc_t_951693265");
    Undly_62.add_attribute("EncUndSecDescLen", "380747039"); // 1
    Undly_62_set.insert("380747039");
    Undly_62.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1266534932"); // 1
    Undly_62_set.insert("EncodedUnderlyingSecurityDesc_t_1266534932");
    Undly_62.add_attribute("CPPgm", "UnderlyingCPProgram_t_725083173"); // 1
    Undly_62_set.insert("UnderlyingCPProgram_t_725083173");
    Undly_62.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1347440663"); // 1
    Undly_62_set.insert("UnderlyingCPRegType_t_1347440663");
    Undly_62.add_attribute("AllocPct", "7127033.400000"); // 1
    Undly_62_set.insert("7127033.400000");
    Undly_62.add_attribute("Ccy", "EUR"); // 1
    Undly_62_set.insert("EUR");
    Undly_62.add_attribute("Qty", "13499881.030000"); // 1
    Undly_62_set.insert("13499881.030000");
    Undly_62.add_attribute("SettlTyp", "5"); // 1
    Undly_62_set.insert("5");
    Undly_62.add_attribute("CashAmt", "UnderlyingCashAmount_t_819970356"); // 1
    Undly_62_set.insert("UnderlyingCashAmount_t_819970356");
    Undly_62.add_attribute("CashTyp", "DIFF"); // 1
    Undly_62_set.insert("DIFF");
    Undly_62.add_attribute("Px", "20407435.620000"); // 1
    Undly_62_set.insert("20407435.620000");
    Undly_62.add_attribute("DirtPx", "13068124.940000"); // 1
    Undly_62_set.insert("13068124.940000");
    Undly_62.add_attribute("EndPx", "11451793.900000"); // 1
    Undly_62_set.insert("11451793.900000");
    Undly_62.add_attribute("StartVal", "UnderlyingStartValue_t_80313384"); // 1
    Undly_62_set.insert("UnderlyingStartValue_t_80313384");
    Undly_62.add_attribute("CurVal", "UnderlyingCurrentValue_t_1652957017"); // 1
    Undly_62_set.insert("UnderlyingCurrentValue_t_1652957017");
    Undly_62.add_attribute("EndVal", "UnderlyingEndValue_t_942540044"); // 1
    Undly_62_set.insert("UnderlyingEndValue_t_942540044");
    Undly_62.add_attribute("AdjQty", "20919421.160000"); // 1
    Undly_62_set.insert("20919421.160000");
    Undly_62.add_attribute("FxRate", "8302814.540000"); // 1
    Undly_62_set.insert("8302814.540000");
    Undly_62.add_attribute("FxRateCalc", "M"); // 1
    Undly_62_set.insert("M");
    Undly_62.add_attribute("CapValu", "UnderlyingCapValue_t_57852664"); // 1
    Undly_62_set.insert("UnderlyingCapValue_t_57852664");
    Undly_62.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1745645735"); // 1
    Undly_62_set.insert("UnderlyingSettlMethod_t_1745645735");
    Undly_62.add_attribute("PutCall", "1237389005"); // 1
    Undly_62_set.insert("1237389005");
    all_values.push_back(Undly_62_set);
    all_compo_names.insert("Undly_62_set");

    {
      xml_element UndAID_62{"UndAID"};
      multiset<string> UndAID_62_set;
      UndAID_62.add_attribute("AltID", "UnderlyingSecurityAltID_t_1206564689"); // 2
      UndAID_62_set.insert("UnderlyingSecurityAltID_t_1206564689");
      UndAID_62.add_attribute("AltIDSrc", "K"); // 2
      UndAID_62_set.insert("K");
      all_values.push_back(UndAID_62_set);
      all_compo_names.insert("UndAID_62_set");

      Undly_62.add_element(UndAID_62);
    }
    {
      xml_element Stip_98{"Stip"};
      multiset<string> Stip_98_set;
      Stip_98.add_attribute("Typ", "PPC"); // 2
      Stip_98_set.insert("PPC");
      Stip_98.add_attribute("Val", "UnderlyingStipValue_t_1416032156"); // 2
      Stip_98_set.insert("UnderlyingStipValue_t_1416032156");
      all_values.push_back(Stip_98_set);
      all_compo_names.insert("Stip_98_set");

      Undly_62.add_element(Stip_98);
    }
    {
      xml_element Pty_263{"Pty"};
      multiset<string> Pty_263_set;
      Pty_263.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1782636887"); // 2
      Pty_263_set.insert("UnderlyingInstrumentPartyID_t_1782636887");
      Pty_263.add_attribute("Src", "D"); // 2
      Pty_263_set.insert("D");
      Pty_263.add_attribute("R", "45"); // 2
      Pty_263_set.insert("45");
      all_values.push_back(Pty_263_set);
      all_compo_names.insert("Pty_263_set");

      {
        xml_element Sub_263{"Sub"};
        multiset<string> Sub_263_set;
        Sub_263.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_586846504"); // 3
        Sub_263_set.insert("UnderlyingInstrumentPartySubID_t_586846504");
        Sub_263.add_attribute("Typ", "30"); // 3
        Sub_263_set.insert("30");
        all_values.push_back(Sub_263_set);
        all_compo_names.insert("Sub_263_set");

        Pty_263.add_element(Sub_263);
      }
      Undly_62.add_element(Pty_263);
    }
    elt.add_element(Undly_62);
  } // end Undly
  { // Undly
    xml_element Undly_63{"Undly"};
    multiset<string> Undly_63_set;
    Undly_63.add_attribute("Sym", "UnderlyingSymbol_t_1545300650"); // 1
    Undly_63_set.insert("UnderlyingSymbol_t_1545300650");
    Undly_63.add_attribute("Sfx", "CD"); // 1
    Undly_63_set.insert("CD");
    Undly_63.add_attribute("ID", "UnderlyingSecurityID_t_429948027"); // 1
    Undly_63_set.insert("UnderlyingSecurityID_t_429948027");
    Undly_63.add_attribute("Src", "K"); // 1
    Undly_63_set.insert("K");
    Undly_63.add_attribute("Prod", "10"); // 1
    Undly_63_set.insert("10");
    Undly_63.add_attribute("CFI", "UnderlyingCFICode_t_2119122676"); // 1
    Undly_63_set.insert("UnderlyingCFICode_t_2119122676");
    Undly_63.add_attribute("SecTyp", "EUCP"); // 1
    Undly_63_set.insert("EUCP");
    Undly_63.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_547946783"); // 1
    Undly_63_set.insert("UnderlyingSecuritySubType_t_547946783");
    Undly_63.add_attribute("MMY", "791609384"); // 1
    Undly_63_set.insert("791609384");
    Undly_63.add_attribute("Mat", "UnderlyingMaturityDate_t_687664743"); // 1
    Undly_63_set.insert("UnderlyingMaturityDate_t_687664743");
    Undly_63.add_attribute("MatTm", "441206698"); // 1
    Undly_63_set.insert("441206698");
    Undly_63.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2098421879"); // 1
    Undly_63_set.insert("UnderlyingCouponPaymentDate_t_2098421879");
    Undly_63.add_attribute("RestrctTyp", "MM"); // 1
    Undly_63_set.insert("MM");
    Undly_63.add_attribute("Snrty", "SR"); // 1
    Undly_63_set.insert("SR");
    Undly_63.add_attribute("NotlPctOut", "16038952.480000"); // 1
    Undly_63_set.insert("16038952.480000");
    Undly_63.add_attribute("OrigNotlPctOut", "6279005.300000"); // 1
    Undly_63_set.insert("6279005.300000");
    Undly_63.add_attribute("AttchPnt", "4659785.500000"); // 1
    Undly_63_set.insert("4659785.500000");
    Undly_63.add_attribute("DetchPnt", "2866930.540000"); // 1
    Undly_63_set.insert("2866930.540000");
    Undly_63.add_attribute("Issued", "UnderlyingIssueDate_t_1803502161"); // 1
    Undly_63_set.insert("UnderlyingIssueDate_t_1803502161");
    Undly_63.add_attribute("RepoCollSecTyp", "523831215"); // 1
    Undly_63_set.insert("523831215");
    Undly_63.add_attribute("RepoTrm", "2032338789"); // 1
    Undly_63_set.insert("2032338789");
    Undly_63.add_attribute("RepoRt", "8934075.180000"); // 1
    Undly_63_set.insert("8934075.180000");
    Undly_63.add_attribute("Fctr", "17303959.040000"); // 1
    Undly_63_set.insert("17303959.040000");
    Undly_63.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1231577858"); // 1
    Undly_63_set.insert("UnderlyingCreditRating_t_1231577858");
    Undly_63.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1116358350"); // 1
    Undly_63_set.insert("UnderlyingInstrRegistry_t_1116358350");
    Undly_63.add_attribute("Ctry", "998944412"); // 1
    Undly_63_set.insert("998944412");
    Undly_63.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_866731097"); // 1
    Undly_63_set.insert("UnderlyingStateOrProvinceOfIssue_t_866731097");
    Undly_63.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1965602322"); // 1
    Undly_63_set.insert("UnderlyingLocaleOfIssue_t_1965602322");
    Undly_63.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1277710131"); // 1
    Undly_63_set.insert("UnderlyingRedemptionDate_t_1277710131");
    Undly_63.add_attribute("StrkPx", "14535776.010000"); // 1
    Undly_63_set.insert("14535776.010000");
    Undly_63.add_attribute("StrkCcy", "CHF"); // 1
    Undly_63_set.insert("CHF");
    Undly_63.add_attribute("OptA", "618023631"); // 1
    Undly_63_set.insert("618023631");
    Undly_63.add_attribute("Mult", "14780577.130000"); // 1
    Undly_63_set.insert("14780577.130000");
    Undly_63.add_attribute("MultTyp", "1"); // 1
    Undly_63_set.insert("1");
    Undly_63.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_63_set.insert("3");
    Undly_63.add_attribute("UOM", "Alw"); // 1
    Undly_63_set.insert("Alw");
    Undly_63.add_attribute("UOMQty", "990722.740000"); // 1
    Undly_63_set.insert("990722.740000");
    Undly_63.add_attribute("PxUOM", "Bbl"); // 1
    Undly_63_set.insert("Bbl");
    Undly_63.add_attribute("PxUOMQty", "938224.780000"); // 1
    Undly_63_set.insert("938224.780000");
    Undly_63.add_attribute("TmUnit", "D"); // 1
    Undly_63_set.insert("D");
    Undly_63.add_attribute("ExerStyle", "1"); // 1
    Undly_63_set.insert("1");
    Undly_63.add_attribute("CpnRt", "447607.090000"); // 1
    Undly_63_set.insert("447607.090000");
    Undly_63.add_attribute("Exch", "UnderlyingSecurityExchange_t_472097503"); // 1
    Undly_63_set.insert("UnderlyingSecurityExchange_t_472097503");
    Undly_63.add_attribute("Issr", "UnderlyingIssuer_t_1698256577"); // 1
    Undly_63_set.insert("UnderlyingIssuer_t_1698256577");
    Undly_63.add_attribute("EncUndIssrLen", "1648655957"); // 1
    Undly_63_set.insert("1648655957");
    Undly_63.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1099998034"); // 1
    Undly_63_set.insert("EncodedUnderlyingIssuer_t_1099998034");
    Undly_63.add_attribute("Desc", "UnderlyingSecurityDesc_t_16751479"); // 1
    Undly_63_set.insert("UnderlyingSecurityDesc_t_16751479");
    Undly_63.add_attribute("EncUndSecDescLen", "1935349012"); // 1
    Undly_63_set.insert("1935349012");
    Undly_63.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_756016547"); // 1
    Undly_63_set.insert("EncodedUnderlyingSecurityDesc_t_756016547");
    Undly_63.add_attribute("CPPgm", "UnderlyingCPProgram_t_540582694"); // 1
    Undly_63_set.insert("UnderlyingCPProgram_t_540582694");
    Undly_63.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1820204153"); // 1
    Undly_63_set.insert("UnderlyingCPRegType_t_1820204153");
    Undly_63.add_attribute("AllocPct", "16494240.650000"); // 1
    Undly_63_set.insert("16494240.650000");
    Undly_63.add_attribute("Ccy", "CAN"); // 1
    Undly_63_set.insert("CAN");
    Undly_63.add_attribute("Qty", "6182987.680000"); // 1
    Undly_63_set.insert("6182987.680000");
    Undly_63.add_attribute("SettlTyp", "4"); // 1
    Undly_63_set.insert("4");
    Undly_63.add_attribute("CashAmt", "UnderlyingCashAmount_t_1771029460"); // 1
    Undly_63_set.insert("UnderlyingCashAmount_t_1771029460");
    Undly_63.add_attribute("CashTyp", "FIXED"); // 1
    Undly_63_set.insert("FIXED");
    Undly_63.add_attribute("Px", "2526658.460000"); // 1
    Undly_63_set.insert("2526658.460000");
    Undly_63.add_attribute("DirtPx", "10771234.140000"); // 1
    Undly_63_set.insert("10771234.140000");
    Undly_63.add_attribute("EndPx", "14845271.280000"); // 1
    Undly_63_set.insert("14845271.280000");
    Undly_63.add_attribute("StartVal", "UnderlyingStartValue_t_928192980"); // 1
    Undly_63_set.insert("UnderlyingStartValue_t_928192980");
    Undly_63.add_attribute("CurVal", "UnderlyingCurrentValue_t_1695147045"); // 1
    Undly_63_set.insert("UnderlyingCurrentValue_t_1695147045");
    Undly_63.add_attribute("EndVal", "UnderlyingEndValue_t_815101193"); // 1
    Undly_63_set.insert("UnderlyingEndValue_t_815101193");
    Undly_63.add_attribute("AdjQty", "17142404.560000"); // 1
    Undly_63_set.insert("17142404.560000");
    Undly_63.add_attribute("FxRate", "18827300.590000"); // 1
    Undly_63_set.insert("18827300.590000");
    Undly_63.add_attribute("FxRateCalc", "D"); // 1
    Undly_63_set.insert("D");
    Undly_63.add_attribute("CapValu", "UnderlyingCapValue_t_1813312730"); // 1
    Undly_63_set.insert("UnderlyingCapValue_t_1813312730");
    Undly_63.add_attribute("SetMeth", "UnderlyingSettlMethod_t_470776208"); // 1
    Undly_63_set.insert("UnderlyingSettlMethod_t_470776208");
    Undly_63.add_attribute("PutCall", "211136765"); // 1
    Undly_63_set.insert("211136765");
    all_values.push_back(Undly_63_set);
    all_compo_names.insert("Undly_63_set");

    {
      xml_element UndAID_63{"UndAID"};
      multiset<string> UndAID_63_set;
      UndAID_63.add_attribute("AltID", "UnderlyingSecurityAltID_t_452566099"); // 2
      UndAID_63_set.insert("UnderlyingSecurityAltID_t_452566099");
      UndAID_63.add_attribute("AltIDSrc", "2"); // 2
      UndAID_63_set.insert("2");
      all_values.push_back(UndAID_63_set);
      all_compo_names.insert("UndAID_63_set");

      Undly_63.add_element(UndAID_63);
    }
    {
      xml_element Stip_99{"Stip"};
      multiset<string> Stip_99_set;
      Stip_99.add_attribute("Typ", "PPM"); // 2
      Stip_99_set.insert("PPM");
      Stip_99.add_attribute("Val", "UnderlyingStipValue_t_924663603"); // 2
      Stip_99_set.insert("UnderlyingStipValue_t_924663603");
      all_values.push_back(Stip_99_set);
      all_compo_names.insert("Stip_99_set");

      Undly_63.add_element(Stip_99);
    }
    {
      xml_element Pty_264{"Pty"};
      multiset<string> Pty_264_set;
      Pty_264.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1198285632"); // 2
      Pty_264_set.insert("UnderlyingInstrumentPartyID_t_1198285632");
      Pty_264.add_attribute("Src", "I"); // 2
      Pty_264_set.insert("I");
      Pty_264.add_attribute("R", "63"); // 2
      Pty_264_set.insert("63");
      all_values.push_back(Pty_264_set);
      all_compo_names.insert("Pty_264_set");

      {
        xml_element Sub_264{"Sub"};
        multiset<string> Sub_264_set;
        Sub_264.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1215037111"); // 3
        Sub_264_set.insert("UnderlyingInstrumentPartySubID_t_1215037111");
        Sub_264.add_attribute("Typ", "10"); // 3
        Sub_264_set.insert("10");
        all_values.push_back(Sub_264_set);
        all_compo_names.insert("Sub_264_set");

        Pty_264.add_element(Sub_264);
      }
      Undly_63.add_element(Pty_264);
    }
    elt.add_element(Undly_63);
  } // end Undly
  { // TxtLn
    xml_element TxtLn_1{"TxtLn"};
    multiset<string> TxtLn_1_set;
    TxtLn_1.add_attribute("Txt", "Text_t_1755619806"); // 1
    TxtLn_1_set.insert("Text_t_1755619806");
    TxtLn_1.add_attribute("EncTxtLen", "1365139301"); // 1
    TxtLn_1_set.insert("1365139301");
    TxtLn_1.add_attribute("EncTxt", "EncodedText_t_135134953"); // 1
    TxtLn_1_set.insert("EncodedText_t_135134953");
    all_values.push_back(TxtLn_1_set);
    all_compo_names.insert("TxtLn_1_set");

    elt.add_element(TxtLn_1);
  } // end TxtLn
  { // TxtLn
    xml_element TxtLn_2{"TxtLn"};
    multiset<string> TxtLn_2_set;
    TxtLn_2.add_attribute("Txt", "Text_t_1879114757"); // 1
    TxtLn_2_set.insert("Text_t_1879114757");
    TxtLn_2.add_attribute("EncTxtLen", "121954016"); // 1
    TxtLn_2_set.insert("121954016");
    TxtLn_2.add_attribute("EncTxt", "EncodedText_t_753433721"); // 1
    TxtLn_2_set.insert("EncodedText_t_753433721");
    all_values.push_back(TxtLn_2_set);
    all_compo_names.insert("TxtLn_2_set");

    elt.add_element(TxtLn_2);
  } // end TxtLn
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
