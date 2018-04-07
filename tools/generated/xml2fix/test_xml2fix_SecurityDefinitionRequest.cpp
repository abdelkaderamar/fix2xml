#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDefReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_2110040978"); // 0
  SecurityDefinitionRequest_message_t_0.insert("SecurityReqID_t_2110040978");
  elt.add_attribute("ReqTyp", "8"); // 0
  SecurityDefinitionRequest_message_t_0.insert("8");
  elt.add_attribute("MktID", "MarketID_t_761739773"); // 0
  SecurityDefinitionRequest_message_t_0.insert("MarketID_t_761739773");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_207354692"); // 0
  SecurityDefinitionRequest_message_t_0.insert("MarketSegmentID_t_207354692");
  elt.add_attribute("Ccy", "EUR"); // 0
  SecurityDefinitionRequest_message_t_0.insert("EUR");
  elt.add_attribute("Txt", "Text_t_1153454271"); // 0
  SecurityDefinitionRequest_message_t_0.insert("Text_t_1153454271");
  elt.add_attribute("EncTxtLen", "1282819408"); // 0
  SecurityDefinitionRequest_message_t_0.insert("1282819408");
  elt.add_attribute("EncTxt", "EncodedText_t_1202195757"); // 0
  SecurityDefinitionRequest_message_t_0.insert("EncodedText_t_1202195757");
  elt.add_attribute("SesID", "2"); // 0
  SecurityDefinitionRequest_message_t_0.insert("2");
  elt.add_attribute("SesSub", "7"); // 0
  SecurityDefinitionRequest_message_t_0.insert("7");
  elt.add_attribute("ExpirationCycle", "2"); // 0
  SecurityDefinitionRequest_message_t_0.insert("2");
  elt.add_attribute("SubReqTyp", "0"); // 0
  SecurityDefinitionRequest_message_t_0.insert("0");
  all_values.push_back(SecurityDefinitionRequest_message_t_0);
  all_compo_names.insert("SecurityDefinitionRequest_message_t");

  { // Hdr
    xml_element Hdr_81{"Hdr"};
    multiset<string> Hdr_81_set;
    Hdr_81.add_attribute("SeqNum", "1115029939"); // 1
    Hdr_81_set.insert("1115029939");
    Hdr_81.add_attribute("SID", "SenderCompID_t_1905580555"); // 1
    Hdr_81_set.insert("SenderCompID_t_1905580555");
    Hdr_81.add_attribute("TID", "TargetCompID_t_1247481105"); // 1
    Hdr_81_set.insert("TargetCompID_t_1247481105");
    Hdr_81.add_attribute("OBID", "OnBehalfOfCompID_t_238096445"); // 1
    Hdr_81_set.insert("OnBehalfOfCompID_t_238096445");
    Hdr_81.add_attribute("D2ID", "DeliverToCompID_t_851461587"); // 1
    Hdr_81_set.insert("DeliverToCompID_t_851461587");
    Hdr_81.add_attribute("SSub", "SenderSubID_t_2009117215"); // 1
    Hdr_81_set.insert("SenderSubID_t_2009117215");
    Hdr_81.add_attribute("SLoc", "SenderLocationID_t_2065019853"); // 1
    Hdr_81_set.insert("SenderLocationID_t_2065019853");
    Hdr_81.add_attribute("TSub", "TargetSubID_t_1900873700"); // 1
    Hdr_81_set.insert("TargetSubID_t_1900873700");
    Hdr_81.add_attribute("TLoc", "TargetLocationID_t_1493028905"); // 1
    Hdr_81_set.insert("TargetLocationID_t_1493028905");
    Hdr_81.add_attribute("OBSub", "OnBehalfOfSubID_t_1899517520"); // 1
    Hdr_81_set.insert("OnBehalfOfSubID_t_1899517520");
    Hdr_81.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1310052680"); // 1
    Hdr_81_set.insert("OnBehalfOfLocationID_t_1310052680");
    Hdr_81.add_attribute("D2Sub", "DeliverToSubID_t_968503812"); // 1
    Hdr_81_set.insert("DeliverToSubID_t_968503812");
    Hdr_81.add_attribute("D2Loc", "DeliverToLocationID_t_283219385"); // 1
    Hdr_81_set.insert("DeliverToLocationID_t_283219385");
    Hdr_81.add_attribute("PosDup", "Y"); // 1
    Hdr_81_set.insert("Y");
    Hdr_81.add_attribute("PosRsnd", "N"); // 1
    Hdr_81_set.insert("N");
    Hdr_81.add_attribute("Snt", "SendingTime_t_1403776650"); // 1
    Hdr_81_set.insert("SendingTime_t_1403776650");
    Hdr_81.add_attribute("OrigSnt", "OrigSendingTime_t_1164146637"); // 1
    Hdr_81_set.insert("OrigSendingTime_t_1164146637");
    Hdr_81.add_attribute("MsgEncd", "MessageEncoding_t_1770168395"); // 1
    Hdr_81_set.insert("MessageEncoding_t_1770168395");
    all_values.push_back(Hdr_81_set);
    all_compo_names.insert("Hdr_81_set");

    {
      xml_element Hop_81{"Hop"};
      multiset<string> Hop_81_set;
      Hop_81.add_attribute("ID", "HopCompID_t_1366333980"); // 2
      Hop_81_set.insert("HopCompID_t_1366333980");
      Hop_81.add_attribute("Ref", "445454258"); // 2
      Hop_81_set.insert("445454258");
      Hop_81.add_attribute("Snt", "HopSendingTime_t_384424520"); // 2
      Hop_81_set.insert("HopSendingTime_t_384424520");
      all_values.push_back(Hop_81_set);
      all_compo_names.insert("Hop_81_set");

      Hdr_81.add_element(Hop_81);
    }
    elt.add_element(Hdr_81);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_74{"Instrmt"};
    multiset<string> Instrmt_74_set;
    Instrmt_74.add_attribute("Sym", "Symbol_t_1573688672"); // 1
    Instrmt_74_set.insert("Symbol_t_1573688672");
    Instrmt_74.add_attribute("Sfx", "CD"); // 1
    Instrmt_74_set.insert("CD");
    Instrmt_74.add_attribute("ID", "SecurityID_t_1857958498"); // 1
    Instrmt_74_set.insert("SecurityID_t_1857958498");
    Instrmt_74.add_attribute("Src", "J"); // 1
    Instrmt_74_set.insert("J");
    Instrmt_74.add_attribute("Prod", "4"); // 1
    Instrmt_74_set.insert("4");
    Instrmt_74.add_attribute("ProdCmplx", "ProductComplex_t_912670607"); // 1
    Instrmt_74_set.insert("ProductComplex_t_912670607");
    Instrmt_74.add_attribute("SecGrp", "SecurityGroup_t_1578159299"); // 1
    Instrmt_74_set.insert("SecurityGroup_t_1578159299");
    Instrmt_74.add_attribute("CFI", "CFICode_t_2143937445"); // 1
    Instrmt_74_set.insert("CFICode_t_2143937445");
    Instrmt_74.add_attribute("SecTyp", "SPCLO"); // 1
    Instrmt_74_set.insert("SPCLO");
    Instrmt_74.add_attribute("SubTyp", "SecuritySubType_t_1399106130"); // 1
    Instrmt_74_set.insert("SecuritySubType_t_1399106130");
    Instrmt_74.add_attribute("MMY", "1111483736"); // 1
    Instrmt_74_set.insert("1111483736");
    Instrmt_74.add_attribute("MatDt", "MaturityDate_t_674929125"); // 1
    Instrmt_74_set.insert("MaturityDate_t_674929125");
    Instrmt_74.add_attribute("MatTm", "499103587"); // 1
    Instrmt_74_set.insert("499103587");
    Instrmt_74.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1349580181"); // 1
    Instrmt_74_set.insert("SettleOnOpenFlag_t_1349580181");
    Instrmt_74.add_attribute("AsgnMeth", "1526390712"); // 1
    Instrmt_74_set.insert("1526390712");
    Instrmt_74.add_attribute("Status", "2"); // 1
    Instrmt_74_set.insert("2");
    Instrmt_74.add_attribute("CpnPmt", "CouponPaymentDate_t_1267116387"); // 1
    Instrmt_74_set.insert("CouponPaymentDate_t_1267116387");
    Instrmt_74.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_74_set.insert("FR");
    Instrmt_74.add_attribute("Snrty", "SD"); // 1
    Instrmt_74_set.insert("SD");
    Instrmt_74.add_attribute("NotlPctOut", "10191502.590000"); // 1
    Instrmt_74_set.insert("10191502.590000");
    Instrmt_74.add_attribute("OrigNotlPctOut", "4423497.960000"); // 1
    Instrmt_74_set.insert("4423497.960000");
    Instrmt_74.add_attribute("AttchPnt", "6747862.240000"); // 1
    Instrmt_74_set.insert("6747862.240000");
    Instrmt_74.add_attribute("DetchPnt", "13023696.440000"); // 1
    Instrmt_74_set.insert("13023696.440000");
    Instrmt_74.add_attribute("Issued", "IssueDate_t_77058703"); // 1
    Instrmt_74_set.insert("IssueDate_t_77058703");
    Instrmt_74.add_attribute("RepoCollSecTyp", "2098739335"); // 1
    Instrmt_74_set.insert("2098739335");
    Instrmt_74.add_attribute("RepoTrm", "558662646"); // 1
    Instrmt_74_set.insert("558662646");
    Instrmt_74.add_attribute("RepoRt", "12412053.410000"); // 1
    Instrmt_74_set.insert("12412053.410000");
    Instrmt_74.add_attribute("Fctr", "17214240.820000"); // 1
    Instrmt_74_set.insert("17214240.820000");
    Instrmt_74.add_attribute("CrdRtg", "CreditRating_t_1924996627"); // 1
    Instrmt_74_set.insert("CreditRating_t_1924996627");
    Instrmt_74.add_attribute("Rgstry", "InstrRegistry_t_1686659599"); // 1
    Instrmt_74_set.insert("InstrRegistry_t_1686659599");
    Instrmt_74.add_attribute("IssuCtry", "2105848602"); // 1
    Instrmt_74_set.insert("2105848602");
    Instrmt_74.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1351201651"); // 1
    Instrmt_74_set.insert("StateOrProvinceOfIssue_t_1351201651");
    Instrmt_74.add_attribute("Lcl", "LocaleOfIssue_t_1381253011"); // 1
    Instrmt_74_set.insert("LocaleOfIssue_t_1381253011");
    Instrmt_74.add_attribute("Redeem", "RedemptionDate_t_1816323452"); // 1
    Instrmt_74_set.insert("RedemptionDate_t_1816323452");
    Instrmt_74.add_attribute("StrkPx", "19308609.470000"); // 1
    Instrmt_74_set.insert("19308609.470000");
    Instrmt_74.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_74_set.insert("CAN");
    Instrmt_74.add_attribute("StrkMult", "13615365.980000"); // 1
    Instrmt_74_set.insert("13615365.980000");
    Instrmt_74.add_attribute("StrkValu", "2076359.800000"); // 1
    Instrmt_74_set.insert("2076359.800000");
    Instrmt_74.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_74_set.insert("2");
    Instrmt_74.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_74_set.insert("1");
    Instrmt_74.add_attribute("StrkPxBndryPrcsn", "13191197.160000"); // 1
    Instrmt_74_set.insert("13191197.160000");
    Instrmt_74.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_74_set.insert("3");
    Instrmt_74.add_attribute("OptAt", "1112262668"); // 1
    Instrmt_74_set.insert("1112262668");
    Instrmt_74.add_attribute("Mult", "5212162.500000"); // 1
    Instrmt_74_set.insert("5212162.500000");
    Instrmt_74.add_attribute("MultTyp", "1"); // 1
    Instrmt_74_set.insert("1");
    Instrmt_74.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_74_set.insert("3");
    Instrmt_74.add_attribute("MinPxIncr", "17883326.370000"); // 1
    Instrmt_74_set.insert("17883326.370000");
    Instrmt_74.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_684475935"); // 1
    Instrmt_74_set.insert("MinPriceIncrementAmount_t_684475935");
    Instrmt_74.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_74_set.insert("MMBtu");
    Instrmt_74.add_attribute("UOMQty", "6599992.480000"); // 1
    Instrmt_74_set.insert("6599992.480000");
    Instrmt_74.add_attribute("PxUOM", "tn"); // 1
    Instrmt_74_set.insert("tn");
    Instrmt_74.add_attribute("PxUOMQty", "18540684.590000"); // 1
    Instrmt_74_set.insert("18540684.590000");
    Instrmt_74.add_attribute("SettlMeth", "P"); // 1
    Instrmt_74_set.insert("P");
    Instrmt_74.add_attribute("ExerStyle", "2"); // 1
    Instrmt_74_set.insert("2");
    Instrmt_74.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_74_set.insert("2");
    Instrmt_74.add_attribute("OptPayAmt", "OptPayoutAmount_t_373547891"); // 1
    Instrmt_74_set.insert("OptPayoutAmount_t_373547891");
    Instrmt_74.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_74_set.insert("STD");
    Instrmt_74.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_74_set.insert("EQTY");
    Instrmt_74.add_attribute("ListMeth", "0"); // 1
    Instrmt_74_set.insert("0");
    Instrmt_74.add_attribute("CapPx", "19842657.270000"); // 1
    Instrmt_74_set.insert("19842657.270000");
    Instrmt_74.add_attribute("FlrPx", "13376295.350000"); // 1
    Instrmt_74_set.insert("13376295.350000");
    Instrmt_74.add_attribute("PutCall", "0"); // 1
    Instrmt_74_set.insert("0");
    Instrmt_74.add_attribute("FlexInd", "true"); // 1
    Instrmt_74_set.insert("true");
    Instrmt_74.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_74_set.insert("false");
    Instrmt_74.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_74_set.insert("Wk");
    Instrmt_74.add_attribute("CpnRt", "14292172.730000"); // 1
    Instrmt_74_set.insert("14292172.730000");
    Instrmt_74.add_attribute("Exch", "SecurityExchange_t_1587979751"); // 1
    Instrmt_74_set.insert("SecurityExchange_t_1587979751");
    Instrmt_74.add_attribute("PosLmt", "499692772"); // 1
    Instrmt_74_set.insert("499692772");
    Instrmt_74.add_attribute("NTPosLmt", "1636853254"); // 1
    Instrmt_74_set.insert("1636853254");
    Instrmt_74.add_attribute("Issr", "Issuer_t_938838732"); // 1
    Instrmt_74_set.insert("Issuer_t_938838732");
    Instrmt_74.add_attribute("EncIssrLen", "1112851852"); // 1
    Instrmt_74_set.insert("1112851852");
    Instrmt_74.add_attribute("EncIssr", "EncodedIssuer_t_808489322"); // 1
    Instrmt_74_set.insert("EncodedIssuer_t_808489322");
    Instrmt_74.add_attribute("Desc", "SecurityDesc_t_964626839"); // 1
    Instrmt_74_set.insert("SecurityDesc_t_964626839");
    Instrmt_74.add_attribute("EncSecDescLen", "77630872"); // 1
    Instrmt_74_set.insert("77630872");
    Instrmt_74.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1329705572"); // 1
    Instrmt_74_set.insert("EncodedSecurityDesc_t_1329705572");
    Instrmt_74.add_attribute("Pool", "Pool_t_369322009"); // 1
    Instrmt_74_set.insert("Pool_t_369322009");
    Instrmt_74.add_attribute("CSetMo", "1550630695"); // 1
    Instrmt_74_set.insert("1550630695");
    Instrmt_74.add_attribute("CPPgm", "1"); // 1
    Instrmt_74_set.insert("1");
    Instrmt_74.add_attribute("CPRegT", "CPRegType_t_1053797944"); // 1
    Instrmt_74_set.insert("CPRegType_t_1053797944");
    Instrmt_74.add_attribute("Dated", "DatedDate_t_582429282"); // 1
    Instrmt_74_set.insert("DatedDate_t_582429282");
    Instrmt_74.add_attribute("IntAcrl", "InterestAccrualDate_t_1630553810"); // 1
    Instrmt_74_set.insert("InterestAccrualDate_t_1630553810");
    all_values.push_back(Instrmt_74_set);
    all_compo_names.insert("Instrmt_74_set");

    {
      xml_element AID_77{"AID"};
      multiset<string> AID_77_set;
      AID_77.add_attribute("AltID", "SecurityAltID_t_33140028"); // 2
      AID_77_set.insert("SecurityAltID_t_33140028");
      AID_77.add_attribute("AltIDSrc", "7"); // 2
      AID_77_set.insert("7");
      all_values.push_back(AID_77_set);
      all_compo_names.insert("AID_77_set");

      Instrmt_74.add_element(AID_77);
    }
    {
      xml_element SecXML_77{"SecXML"};
      multiset<string> SecXML_77_set;
      SecXML_77.add_attribute("Schema", "SecurityXMLSchema_t_1445439055"); // 2
      SecXML_77_set.insert("SecurityXMLSchema_t_1445439055");
      all_values.push_back(SecXML_77_set);
      all_compo_names.insert("SecXML_77_set");

      Instrmt_74.add_element(SecXML_77);
    }
    {
      xml_element Evnt_77{"Evnt"};
      multiset<string> Evnt_77_set;
      Evnt_77.add_attribute("EventTyp", "4"); // 2
      Evnt_77_set.insert("4");
      Evnt_77.add_attribute("Dt", "EventDate_t_2094338240"); // 2
      Evnt_77_set.insert("EventDate_t_2094338240");
      Evnt_77.add_attribute("Tm", "EventTime_t_1818986946"); // 2
      Evnt_77_set.insert("EventTime_t_1818986946");
      Evnt_77.add_attribute("Px", "15346305.910000"); // 2
      Evnt_77_set.insert("15346305.910000");
      Evnt_77.add_attribute("Txt", "EventText_t_1326119173"); // 2
      Evnt_77_set.insert("EventText_t_1326119173");
      all_values.push_back(Evnt_77_set);
      all_compo_names.insert("Evnt_77_set");

      Instrmt_74.add_element(Evnt_77);
    }
    {
      xml_element Pty_402{"Pty"};
      multiset<string> Pty_402_set;
      Pty_402.add_attribute("ID", "InstrumentPartyID_t_1970047817"); // 2
      Pty_402_set.insert("InstrumentPartyID_t_1970047817");
      Pty_402.add_attribute("Src", "F"); // 2
      Pty_402_set.insert("F");
      Pty_402.add_attribute("R", "55"); // 2
      Pty_402_set.insert("55");
      all_values.push_back(Pty_402_set);
      all_compo_names.insert("Pty_402_set");

      {
        xml_element Sub_402{"Sub"};
        multiset<string> Sub_402_set;
        Sub_402.add_attribute("ID", "InstrumentPartySubID_t_1324826691"); // 3
        Sub_402_set.insert("InstrumentPartySubID_t_1324826691");
        Sub_402.add_attribute("Typ", "30"); // 3
        Sub_402_set.insert("30");
        all_values.push_back(Sub_402_set);
        all_compo_names.insert("Sub_402_set");

        Pty_402.add_element(Sub_402);
      }
      Instrmt_74.add_element(Pty_402);
    }
    {
      xml_element CmplxEvnt_74{"CmplxEvnt"};
      multiset<string> CmplxEvnt_74_set;
      CmplxEvnt_74.add_attribute("Typ", "1"); // 2
      CmplxEvnt_74_set.insert("1");
      CmplxEvnt_74.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_462982864"); // 2
      CmplxEvnt_74_set.insert("ComplexOptPayoutAmount_t_462982864");
      CmplxEvnt_74.add_attribute("Px", "18711813.850000"); // 2
      CmplxEvnt_74_set.insert("18711813.850000");
      CmplxEvnt_74.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_74_set.insert("3");
      CmplxEvnt_74.add_attribute("PxBndryPrcsn", "9626756.360000"); // 2
      CmplxEvnt_74_set.insert("9626756.360000");
      CmplxEvnt_74.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_74_set.insert("1");
      CmplxEvnt_74.add_attribute("Cond", "2"); // 2
      CmplxEvnt_74_set.insert("2");
      all_values.push_back(CmplxEvnt_74_set);
      all_compo_names.insert("CmplxEvnt_74_set");

      {
        xml_element EvntDts_74{"EvntDts"};
        multiset<string> EvntDts_74_set;
        EvntDts_74.add_attribute("StartDt", "ComplexEventStartDate_t_2075527489"); // 3
        EvntDts_74_set.insert("ComplexEventStartDate_t_2075527489");
        EvntDts_74.add_attribute("EndDt", "ComplexEventEndDate_t_21556666"); // 3
        EvntDts_74_set.insert("ComplexEventEndDate_t_21556666");
        all_values.push_back(EvntDts_74_set);
        all_compo_names.insert("EvntDts_74_set");

        {
          xml_element EvntTms_74{"EvntTms"};
          multiset<string> EvntTms_74_set;
          EvntTms_74.add_attribute("StartTm", "719212426"); // 4
          EvntTms_74_set.insert("719212426");
          EvntTms_74.add_attribute("EndTm", "5674713"); // 4
          EvntTms_74_set.insert("5674713");
          all_values.push_back(EvntTms_74_set);
          all_compo_names.insert("EvntTms_74_set");

          EvntDts_74.add_element(EvntTms_74);
        }
        CmplxEvnt_74.add_element(EvntDts_74);
      }
      Instrmt_74.add_element(CmplxEvnt_74);
    }
    elt.add_element(Instrmt_74);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_9{"InstrmtExt"};
    multiset<string> InstrmtExt_9_set;
    InstrmtExt_9.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_9_set.insert("1");
    InstrmtExt_9.add_attribute("PctAtRisk", "10885344.350000"); // 1
    InstrmtExt_9_set.insert("10885344.350000");
    all_values.push_back(InstrmtExt_9_set);
    all_compo_names.insert("InstrmtExt_9_set");

    {
      xml_element Attrb_14{"Attrb"};
      multiset<string> Attrb_14_set;
      Attrb_14.add_attribute("Typ", "29"); // 2
      Attrb_14_set.insert("29");
      Attrb_14.add_attribute("Val", "InstrAttribValue_t_174333152"); // 2
      Attrb_14_set.insert("InstrAttribValue_t_174333152");
      all_values.push_back(Attrb_14_set);
      all_compo_names.insert("Attrb_14_set");

      InstrmtExt_9.add_element(Attrb_14);
    }
    elt.add_element(InstrmtExt_9);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_104{"Undly"};
    multiset<string> Undly_104_set;
    Undly_104.add_attribute("Sym", "UnderlyingSymbol_t_2138734691"); // 1
    Undly_104_set.insert("UnderlyingSymbol_t_2138734691");
    Undly_104.add_attribute("Sfx", "CD"); // 1
    Undly_104_set.insert("CD");
    Undly_104.add_attribute("ID", "UnderlyingSecurityID_t_27988760"); // 1
    Undly_104_set.insert("UnderlyingSecurityID_t_27988760");
    Undly_104.add_attribute("Src", "A"); // 1
    Undly_104_set.insert("A");
    Undly_104.add_attribute("Prod", "2"); // 1
    Undly_104_set.insert("2");
    Undly_104.add_attribute("CFI", "UnderlyingCFICode_t_1265013223"); // 1
    Undly_104_set.insert("UnderlyingCFICode_t_1265013223");
    Undly_104.add_attribute("SecTyp", "RAN"); // 1
    Undly_104_set.insert("RAN");
    Undly_104.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_774345667"); // 1
    Undly_104_set.insert("UnderlyingSecuritySubType_t_774345667");
    Undly_104.add_attribute("MMY", "652160166"); // 1
    Undly_104_set.insert("652160166");
    Undly_104.add_attribute("Mat", "UnderlyingMaturityDate_t_1553238903"); // 1
    Undly_104_set.insert("UnderlyingMaturityDate_t_1553238903");
    Undly_104.add_attribute("MatTm", "596909836"); // 1
    Undly_104_set.insert("596909836");
    Undly_104.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2023572836"); // 1
    Undly_104_set.insert("UnderlyingCouponPaymentDate_t_2023572836");
    Undly_104.add_attribute("RestrctTyp", "XR"); // 1
    Undly_104_set.insert("XR");
    Undly_104.add_attribute("Snrty", "SR"); // 1
    Undly_104_set.insert("SR");
    Undly_104.add_attribute("NotlPctOut", "3180533.000000"); // 1
    Undly_104_set.insert("3180533.000000");
    Undly_104.add_attribute("OrigNotlPctOut", "14447547.140000"); // 1
    Undly_104_set.insert("14447547.140000");
    Undly_104.add_attribute("AttchPnt", "2372357.440000"); // 1
    Undly_104_set.insert("2372357.440000");
    Undly_104.add_attribute("DetchPnt", "417510.370000"); // 1
    Undly_104_set.insert("417510.370000");
    Undly_104.add_attribute("Issued", "UnderlyingIssueDate_t_260501569"); // 1
    Undly_104_set.insert("UnderlyingIssueDate_t_260501569");
    Undly_104.add_attribute("RepoCollSecTyp", "1199911380"); // 1
    Undly_104_set.insert("1199911380");
    Undly_104.add_attribute("RepoTrm", "1402302029"); // 1
    Undly_104_set.insert("1402302029");
    Undly_104.add_attribute("RepoRt", "150871.560000"); // 1
    Undly_104_set.insert("150871.560000");
    Undly_104.add_attribute("Fctr", "11279552.210000"); // 1
    Undly_104_set.insert("11279552.210000");
    Undly_104.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1423858695"); // 1
    Undly_104_set.insert("UnderlyingCreditRating_t_1423858695");
    Undly_104.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_734299582"); // 1
    Undly_104_set.insert("UnderlyingInstrRegistry_t_734299582");
    Undly_104.add_attribute("Ctry", "1133629935"); // 1
    Undly_104_set.insert("1133629935");
    Undly_104.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_627637285"); // 1
    Undly_104_set.insert("UnderlyingStateOrProvinceOfIssue_t_627637285");
    Undly_104.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1822834017"); // 1
    Undly_104_set.insert("UnderlyingLocaleOfIssue_t_1822834017");
    Undly_104.add_attribute("Redeem", "UnderlyingRedemptionDate_t_542451696"); // 1
    Undly_104_set.insert("UnderlyingRedemptionDate_t_542451696");
    Undly_104.add_attribute("StrkPx", "8019704.370000"); // 1
    Undly_104_set.insert("8019704.370000");
    Undly_104.add_attribute("StrkCcy", "CHF"); // 1
    Undly_104_set.insert("CHF");
    Undly_104.add_attribute("OptA", "459373751"); // 1
    Undly_104_set.insert("459373751");
    Undly_104.add_attribute("Mult", "18456715.090000"); // 1
    Undly_104_set.insert("18456715.090000");
    Undly_104.add_attribute("MultTyp", "2"); // 1
    Undly_104_set.insert("2");
    Undly_104.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_104_set.insert("0");
    Undly_104.add_attribute("UOM", "MMBtu"); // 1
    Undly_104_set.insert("MMBtu");
    Undly_104.add_attribute("UOMQty", "10410876.070000"); // 1
    Undly_104_set.insert("10410876.070000");
    Undly_104.add_attribute("PxUOM", "t"); // 1
    Undly_104_set.insert("t");
    Undly_104.add_attribute("PxUOMQty", "16153612.500000"); // 1
    Undly_104_set.insert("16153612.500000");
    Undly_104.add_attribute("TmUnit", "Wk"); // 1
    Undly_104_set.insert("Wk");
    Undly_104.add_attribute("ExerStyle", "0"); // 1
    Undly_104_set.insert("0");
    Undly_104.add_attribute("CpnRt", "14914504.380000"); // 1
    Undly_104_set.insert("14914504.380000");
    Undly_104.add_attribute("Exch", "UnderlyingSecurityExchange_t_368863177"); // 1
    Undly_104_set.insert("UnderlyingSecurityExchange_t_368863177");
    Undly_104.add_attribute("Issr", "UnderlyingIssuer_t_560240856"); // 1
    Undly_104_set.insert("UnderlyingIssuer_t_560240856");
    Undly_104.add_attribute("EncUndIssrLen", "1809503738"); // 1
    Undly_104_set.insert("1809503738");
    Undly_104.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1813617891"); // 1
    Undly_104_set.insert("EncodedUnderlyingIssuer_t_1813617891");
    Undly_104.add_attribute("Desc", "UnderlyingSecurityDesc_t_797476600"); // 1
    Undly_104_set.insert("UnderlyingSecurityDesc_t_797476600");
    Undly_104.add_attribute("EncUndSecDescLen", "1851254776"); // 1
    Undly_104_set.insert("1851254776");
    Undly_104.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2074119460"); // 1
    Undly_104_set.insert("EncodedUnderlyingSecurityDesc_t_2074119460");
    Undly_104.add_attribute("CPPgm", "UnderlyingCPProgram_t_1997387980"); // 1
    Undly_104_set.insert("UnderlyingCPProgram_t_1997387980");
    Undly_104.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1106073157"); // 1
    Undly_104_set.insert("UnderlyingCPRegType_t_1106073157");
    Undly_104.add_attribute("AllocPct", "20892066.160000"); // 1
    Undly_104_set.insert("20892066.160000");
    Undly_104.add_attribute("Ccy", "GBP"); // 1
    Undly_104_set.insert("GBP");
    Undly_104.add_attribute("Qty", "6760225.500000"); // 1
    Undly_104_set.insert("6760225.500000");
    Undly_104.add_attribute("SettlTyp", "5"); // 1
    Undly_104_set.insert("5");
    Undly_104.add_attribute("CashAmt", "UnderlyingCashAmount_t_1010085489"); // 1
    Undly_104_set.insert("UnderlyingCashAmount_t_1010085489");
    Undly_104.add_attribute("CashTyp", "FIXED"); // 1
    Undly_104_set.insert("FIXED");
    Undly_104.add_attribute("Px", "5064575.370000"); // 1
    Undly_104_set.insert("5064575.370000");
    Undly_104.add_attribute("DirtPx", "18120559.270000"); // 1
    Undly_104_set.insert("18120559.270000");
    Undly_104.add_attribute("EndPx", "215720.210000"); // 1
    Undly_104_set.insert("215720.210000");
    Undly_104.add_attribute("StartVal", "UnderlyingStartValue_t_1040160276"); // 1
    Undly_104_set.insert("UnderlyingStartValue_t_1040160276");
    Undly_104.add_attribute("CurVal", "UnderlyingCurrentValue_t_123946030"); // 1
    Undly_104_set.insert("UnderlyingCurrentValue_t_123946030");
    Undly_104.add_attribute("EndVal", "UnderlyingEndValue_t_1867243531"); // 1
    Undly_104_set.insert("UnderlyingEndValue_t_1867243531");
    Undly_104.add_attribute("AdjQty", "18541281.530000"); // 1
    Undly_104_set.insert("18541281.530000");
    Undly_104.add_attribute("FxRate", "16861621.510000"); // 1
    Undly_104_set.insert("16861621.510000");
    Undly_104.add_attribute("FxRateCalc", "D"); // 1
    Undly_104_set.insert("D");
    Undly_104.add_attribute("CapValu", "UnderlyingCapValue_t_747732112"); // 1
    Undly_104_set.insert("UnderlyingCapValue_t_747732112");
    Undly_104.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1875240291"); // 1
    Undly_104_set.insert("UnderlyingSettlMethod_t_1875240291");
    Undly_104.add_attribute("PutCall", "150838570"); // 1
    Undly_104_set.insert("150838570");
    all_values.push_back(Undly_104_set);
    all_compo_names.insert("Undly_104_set");

    {
      xml_element UndAID_104{"UndAID"};
      multiset<string> UndAID_104_set;
      UndAID_104.add_attribute("AltID", "UnderlyingSecurityAltID_t_1194574974"); // 2
      UndAID_104_set.insert("UnderlyingSecurityAltID_t_1194574974");
      UndAID_104.add_attribute("AltIDSrc", "4"); // 2
      UndAID_104_set.insert("4");
      all_values.push_back(UndAID_104_set);
      all_compo_names.insert("UndAID_104_set");

      Undly_104.add_element(UndAID_104);
    }
    {
      xml_element Stip_163{"Stip"};
      multiset<string> Stip_163_set;
      Stip_163.add_attribute("Typ", "SMM"); // 2
      Stip_163_set.insert("SMM");
      Stip_163.add_attribute("Val", "UnderlyingStipValue_t_1563438151"); // 2
      Stip_163_set.insert("UnderlyingStipValue_t_1563438151");
      all_values.push_back(Stip_163_set);
      all_compo_names.insert("Stip_163_set");

      Undly_104.add_element(Stip_163);
    }
    {
      xml_element Pty_403{"Pty"};
      multiset<string> Pty_403_set;
      Pty_403.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1073985475"); // 2
      Pty_403_set.insert("UnderlyingInstrumentPartyID_t_1073985475");
      Pty_403.add_attribute("Src", "C"); // 2
      Pty_403_set.insert("C");
      Pty_403.add_attribute("R", "54"); // 2
      Pty_403_set.insert("54");
      all_values.push_back(Pty_403_set);
      all_compo_names.insert("Pty_403_set");

      {
        xml_element Sub_403{"Sub"};
        multiset<string> Sub_403_set;
        Sub_403.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1871462075"); // 3
        Sub_403_set.insert("UnderlyingInstrumentPartySubID_t_1871462075");
        Sub_403.add_attribute("Typ", "6"); // 3
        Sub_403_set.insert("6");
        all_values.push_back(Sub_403_set);
        all_compo_names.insert("Sub_403_set");

        Pty_403.add_element(Sub_403);
      }
      Undly_104.add_element(Pty_403);
    }
    elt.add_element(Undly_104);
  } // end Undly
  { // Undly
    xml_element Undly_105{"Undly"};
    multiset<string> Undly_105_set;
    Undly_105.add_attribute("Sym", "UnderlyingSymbol_t_1156208207"); // 1
    Undly_105_set.insert("UnderlyingSymbol_t_1156208207");
    Undly_105.add_attribute("Sfx", "CD"); // 1
    Undly_105_set.insert("CD");
    Undly_105.add_attribute("ID", "UnderlyingSecurityID_t_2114153384"); // 1
    Undly_105_set.insert("UnderlyingSecurityID_t_2114153384");
    Undly_105.add_attribute("Src", "D"); // 1
    Undly_105_set.insert("D");
    Undly_105.add_attribute("Prod", "3"); // 1
    Undly_105_set.insert("3");
    Undly_105.add_attribute("CFI", "UnderlyingCFICode_t_349117940"); // 1
    Undly_105_set.insert("UnderlyingCFICode_t_349117940");
    Undly_105.add_attribute("SecTyp", "CPP"); // 1
    Undly_105_set.insert("CPP");
    Undly_105.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_515748155"); // 1
    Undly_105_set.insert("UnderlyingSecuritySubType_t_515748155");
    Undly_105.add_attribute("MMY", "1359203429"); // 1
    Undly_105_set.insert("1359203429");
    Undly_105.add_attribute("Mat", "UnderlyingMaturityDate_t_2125326646"); // 1
    Undly_105_set.insert("UnderlyingMaturityDate_t_2125326646");
    Undly_105.add_attribute("MatTm", "1022205692"); // 1
    Undly_105_set.insert("1022205692");
    Undly_105.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1023775708"); // 1
    Undly_105_set.insert("UnderlyingCouponPaymentDate_t_1023775708");
    Undly_105.add_attribute("RestrctTyp", "FR"); // 1
    Undly_105_set.insert("FR");
    Undly_105.add_attribute("Snrty", "SB"); // 1
    Undly_105_set.insert("SB");
    Undly_105.add_attribute("NotlPctOut", "11477217.390000"); // 1
    Undly_105_set.insert("11477217.390000");
    Undly_105.add_attribute("OrigNotlPctOut", "18666585.510000"); // 1
    Undly_105_set.insert("18666585.510000");
    Undly_105.add_attribute("AttchPnt", "17690104.740000"); // 1
    Undly_105_set.insert("17690104.740000");
    Undly_105.add_attribute("DetchPnt", "6864002.420000"); // 1
    Undly_105_set.insert("6864002.420000");
    Undly_105.add_attribute("Issued", "UnderlyingIssueDate_t_402135870"); // 1
    Undly_105_set.insert("UnderlyingIssueDate_t_402135870");
    Undly_105.add_attribute("RepoCollSecTyp", "369258938"); // 1
    Undly_105_set.insert("369258938");
    Undly_105.add_attribute("RepoTrm", "414156885"); // 1
    Undly_105_set.insert("414156885");
    Undly_105.add_attribute("RepoRt", "5529744.400000"); // 1
    Undly_105_set.insert("5529744.400000");
    Undly_105.add_attribute("Fctr", "15638339.130000"); // 1
    Undly_105_set.insert("15638339.130000");
    Undly_105.add_attribute("CrdRtg", "UnderlyingCreditRating_t_927901504"); // 1
    Undly_105_set.insert("UnderlyingCreditRating_t_927901504");
    Undly_105.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_47779801"); // 1
    Undly_105_set.insert("UnderlyingInstrRegistry_t_47779801");
    Undly_105.add_attribute("Ctry", "979788416"); // 1
    Undly_105_set.insert("979788416");
    Undly_105.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2001886980"); // 1
    Undly_105_set.insert("UnderlyingStateOrProvinceOfIssue_t_2001886980");
    Undly_105.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1352088900"); // 1
    Undly_105_set.insert("UnderlyingLocaleOfIssue_t_1352088900");
    Undly_105.add_attribute("Redeem", "UnderlyingRedemptionDate_t_61877163"); // 1
    Undly_105_set.insert("UnderlyingRedemptionDate_t_61877163");
    Undly_105.add_attribute("StrkPx", "17258654.070000"); // 1
    Undly_105_set.insert("17258654.070000");
    Undly_105.add_attribute("StrkCcy", "CHF"); // 1
    Undly_105_set.insert("CHF");
    Undly_105.add_attribute("OptA", "1299748167"); // 1
    Undly_105_set.insert("1299748167");
    Undly_105.add_attribute("Mult", "1793552.150000"); // 1
    Undly_105_set.insert("1793552.150000");
    Undly_105.add_attribute("MultTyp", "0"); // 1
    Undly_105_set.insert("0");
    Undly_105.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_105_set.insert("1");
    Undly_105.add_attribute("UOM", "Bbl"); // 1
    Undly_105_set.insert("Bbl");
    Undly_105.add_attribute("UOMQty", "19424866.250000"); // 1
    Undly_105_set.insert("19424866.250000");
    Undly_105.add_attribute("PxUOM", "Bu"); // 1
    Undly_105_set.insert("Bu");
    Undly_105.add_attribute("PxUOMQty", "18876765.840000"); // 1
    Undly_105_set.insert("18876765.840000");
    Undly_105.add_attribute("TmUnit", "D"); // 1
    Undly_105_set.insert("D");
    Undly_105.add_attribute("ExerStyle", "1"); // 1
    Undly_105_set.insert("1");
    Undly_105.add_attribute("CpnRt", "7639686.450000"); // 1
    Undly_105_set.insert("7639686.450000");
    Undly_105.add_attribute("Exch", "UnderlyingSecurityExchange_t_1919744644"); // 1
    Undly_105_set.insert("UnderlyingSecurityExchange_t_1919744644");
    Undly_105.add_attribute("Issr", "UnderlyingIssuer_t_1156843001"); // 1
    Undly_105_set.insert("UnderlyingIssuer_t_1156843001");
    Undly_105.add_attribute("EncUndIssrLen", "1911690384"); // 1
    Undly_105_set.insert("1911690384");
    Undly_105.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1638919547"); // 1
    Undly_105_set.insert("EncodedUnderlyingIssuer_t_1638919547");
    Undly_105.add_attribute("Desc", "UnderlyingSecurityDesc_t_778369827"); // 1
    Undly_105_set.insert("UnderlyingSecurityDesc_t_778369827");
    Undly_105.add_attribute("EncUndSecDescLen", "450606978"); // 1
    Undly_105_set.insert("450606978");
    Undly_105.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2041055417"); // 1
    Undly_105_set.insert("EncodedUnderlyingSecurityDesc_t_2041055417");
    Undly_105.add_attribute("CPPgm", "UnderlyingCPProgram_t_1147628765"); // 1
    Undly_105_set.insert("UnderlyingCPProgram_t_1147628765");
    Undly_105.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_864763863"); // 1
    Undly_105_set.insert("UnderlyingCPRegType_t_864763863");
    Undly_105.add_attribute("AllocPct", "4465462.100000"); // 1
    Undly_105_set.insert("4465462.100000");
    Undly_105.add_attribute("Ccy", "EUR"); // 1
    Undly_105_set.insert("EUR");
    Undly_105.add_attribute("Qty", "4943260.110000"); // 1
    Undly_105_set.insert("4943260.110000");
    Undly_105.add_attribute("SettlTyp", "2"); // 1
    Undly_105_set.insert("2");
    Undly_105.add_attribute("CashAmt", "UnderlyingCashAmount_t_1647068699"); // 1
    Undly_105_set.insert("UnderlyingCashAmount_t_1647068699");
    Undly_105.add_attribute("CashTyp", "DIFF"); // 1
    Undly_105_set.insert("DIFF");
    Undly_105.add_attribute("Px", "16056446.100000"); // 1
    Undly_105_set.insert("16056446.100000");
    Undly_105.add_attribute("DirtPx", "12254504.590000"); // 1
    Undly_105_set.insert("12254504.590000");
    Undly_105.add_attribute("EndPx", "20591003.900000"); // 1
    Undly_105_set.insert("20591003.900000");
    Undly_105.add_attribute("StartVal", "UnderlyingStartValue_t_676246333"); // 1
    Undly_105_set.insert("UnderlyingStartValue_t_676246333");
    Undly_105.add_attribute("CurVal", "UnderlyingCurrentValue_t_377714978"); // 1
    Undly_105_set.insert("UnderlyingCurrentValue_t_377714978");
    Undly_105.add_attribute("EndVal", "UnderlyingEndValue_t_90971957"); // 1
    Undly_105_set.insert("UnderlyingEndValue_t_90971957");
    Undly_105.add_attribute("AdjQty", "8447792.320000"); // 1
    Undly_105_set.insert("8447792.320000");
    Undly_105.add_attribute("FxRate", "817218.120000"); // 1
    Undly_105_set.insert("817218.120000");
    Undly_105.add_attribute("FxRateCalc", "M"); // 1
    Undly_105_set.insert("M");
    Undly_105.add_attribute("CapValu", "UnderlyingCapValue_t_639782210"); // 1
    Undly_105_set.insert("UnderlyingCapValue_t_639782210");
    Undly_105.add_attribute("SetMeth", "UnderlyingSettlMethod_t_301476800"); // 1
    Undly_105_set.insert("UnderlyingSettlMethod_t_301476800");
    Undly_105.add_attribute("PutCall", "359638048"); // 1
    Undly_105_set.insert("359638048");
    all_values.push_back(Undly_105_set);
    all_compo_names.insert("Undly_105_set");

    {
      xml_element UndAID_105{"UndAID"};
      multiset<string> UndAID_105_set;
      UndAID_105.add_attribute("AltID", "UnderlyingSecurityAltID_t_412628186"); // 2
      UndAID_105_set.insert("UnderlyingSecurityAltID_t_412628186");
      UndAID_105.add_attribute("AltIDSrc", "4"); // 2
      UndAID_105_set.insert("4");
      all_values.push_back(UndAID_105_set);
      all_compo_names.insert("UndAID_105_set");

      Undly_105.add_element(UndAID_105);
    }
    {
      xml_element Stip_164{"Stip"};
      multiset<string> Stip_164_set;
      Stip_164.add_attribute("Typ", "TRDVAR"); // 2
      Stip_164_set.insert("TRDVAR");
      Stip_164.add_attribute("Val", "UnderlyingStipValue_t_184889182"); // 2
      Stip_164_set.insert("UnderlyingStipValue_t_184889182");
      all_values.push_back(Stip_164_set);
      all_compo_names.insert("Stip_164_set");

      Undly_105.add_element(Stip_164);
    }
    {
      xml_element Pty_404{"Pty"};
      multiset<string> Pty_404_set;
      Pty_404.add_attribute("ID", "UnderlyingInstrumentPartyID_t_552796834"); // 2
      Pty_404_set.insert("UnderlyingInstrumentPartyID_t_552796834");
      Pty_404.add_attribute("Src", "6"); // 2
      Pty_404_set.insert("6");
      Pty_404.add_attribute("R", "39"); // 2
      Pty_404_set.insert("39");
      all_values.push_back(Pty_404_set);
      all_compo_names.insert("Pty_404_set");

      {
        xml_element Sub_404{"Sub"};
        multiset<string> Sub_404_set;
        Sub_404.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1331166661"); // 3
        Sub_404_set.insert("UnderlyingInstrumentPartySubID_t_1331166661");
        Sub_404.add_attribute("Typ", "14"); // 3
        Sub_404_set.insert("14");
        all_values.push_back(Sub_404_set);
        all_compo_names.insert("Sub_404_set");

        Pty_404.add_element(Sub_404);
      }
      Undly_105.add_element(Pty_404);
    }
    elt.add_element(Undly_105);
  } // end Undly
  { // Stip
    xml_element Stip_165{"Stip"};
    multiset<string> Stip_165_set;
    Stip_165.add_attribute("Typ", "LOOKBACK"); // 1
    Stip_165_set.insert("LOOKBACK");
    Stip_165.add_attribute("Val", "StipulationValue_t_55700622"); // 1
    Stip_165_set.insert("StipulationValue_t_55700622");
    all_values.push_back(Stip_165_set);
    all_compo_names.insert("Stip_165_set");

    elt.add_element(Stip_165);
  } // end Stip
  { // Leg
    xml_element Leg_92{"Leg"};
    multiset<string> Leg_92_set;
    Leg_92.add_attribute("Sym", "LegSymbol_t_895290809"); // 1
    Leg_92_set.insert("LegSymbol_t_895290809");
    Leg_92.add_attribute("Sfx", "CD"); // 1
    Leg_92_set.insert("CD");
    Leg_92.add_attribute("ID", "LegSecurityID_t_510769071"); // 1
    Leg_92_set.insert("LegSecurityID_t_510769071");
    Leg_92.add_attribute("Src", "7"); // 1
    Leg_92_set.insert("7");
    Leg_92.add_attribute("Prod", "5"); // 1
    Leg_92_set.insert("5");
    Leg_92.add_attribute("CFI", "LegCFICode_t_209700334"); // 1
    Leg_92_set.insert("LegCFICode_t_209700334");
    Leg_92.add_attribute("SecTyp", "FXNDF"); // 1
    Leg_92_set.insert("FXNDF");
    Leg_92.add_attribute("SecSubTyp", "LegSecuritySubType_t_425917852"); // 1
    Leg_92_set.insert("LegSecuritySubType_t_425917852");
    Leg_92.add_attribute("MMY", "121317076"); // 1
    Leg_92_set.insert("121317076");
    Leg_92.add_attribute("Mat", "LegMaturityDate_t_425981904"); // 1
    Leg_92_set.insert("LegMaturityDate_t_425981904");
    Leg_92.add_attribute("MatTm", "803632831"); // 1
    Leg_92_set.insert("803632831");
    Leg_92.add_attribute("CpnPmt", "LegCouponPaymentDate_t_212289033"); // 1
    Leg_92_set.insert("LegCouponPaymentDate_t_212289033");
    Leg_92.add_attribute("Issued", "LegIssueDate_t_1270761136"); // 1
    Leg_92_set.insert("LegIssueDate_t_1270761136");
    Leg_92.add_attribute("RepoCollSecTyp", "885354643"); // 1
    Leg_92_set.insert("885354643");
    Leg_92.add_attribute("RepoTrm", "831734145"); // 1
    Leg_92_set.insert("831734145");
    Leg_92.add_attribute("RepoRt", "19105433.460000"); // 1
    Leg_92_set.insert("19105433.460000");
    Leg_92.add_attribute("Fctr", "11868314.430000"); // 1
    Leg_92_set.insert("11868314.430000");
    Leg_92.add_attribute("CrdRtg", "LegCreditRating_t_1191372194"); // 1
    Leg_92_set.insert("LegCreditRating_t_1191372194");
    Leg_92.add_attribute("Rgstry", "LegInstrRegistry_t_175687884"); // 1
    Leg_92_set.insert("LegInstrRegistry_t_175687884");
    Leg_92.add_attribute("Ctry", "582785276"); // 1
    Leg_92_set.insert("582785276");
    Leg_92.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_167495239"); // 1
    Leg_92_set.insert("LegStateOrProvinceOfIssue_t_167495239");
    Leg_92.add_attribute("Lcl", "LegLocaleOfIssue_t_360577066"); // 1
    Leg_92_set.insert("LegLocaleOfIssue_t_360577066");
    Leg_92.add_attribute("Redeem", "LegRedemptionDate_t_1135582110"); // 1
    Leg_92_set.insert("LegRedemptionDate_t_1135582110");
    Leg_92.add_attribute("Strk", "10553086.690000"); // 1
    Leg_92_set.insert("10553086.690000");
    Leg_92.add_attribute("StrkCcy", "CAN"); // 1
    Leg_92_set.insert("CAN");
    Leg_92.add_attribute("OptA", "246245428"); // 1
    Leg_92_set.insert("246245428");
    Leg_92.add_attribute("Cmult", "17542826.460000"); // 1
    Leg_92_set.insert("17542826.460000");
    Leg_92.add_attribute("MultTyp", "1"); // 1
    Leg_92_set.insert("1");
    Leg_92.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_92_set.insert("1");
    Leg_92.add_attribute("UOM", "USD"); // 1
    Leg_92_set.insert("USD");
    Leg_92.add_attribute("UOMQty", "15458677.110000"); // 1
    Leg_92_set.insert("15458677.110000");
    Leg_92.add_attribute("PxUOM", "USD"); // 1
    Leg_92_set.insert("USD");
    Leg_92.add_attribute("PxUOMQty", "1340111.300000"); // 1
    Leg_92_set.insert("1340111.300000");
    Leg_92.add_attribute("TmUnit", "Yr"); // 1
    Leg_92_set.insert("Yr");
    Leg_92.add_attribute("ExerStyle", "1"); // 1
    Leg_92_set.insert("1");
    Leg_92.add_attribute("CpnRt", "3437114.640000"); // 1
    Leg_92_set.insert("3437114.640000");
    Leg_92.add_attribute("Exch", "LegSecurityExchange_t_1587177889"); // 1
    Leg_92_set.insert("LegSecurityExchange_t_1587177889");
    Leg_92.add_attribute("Issr", "LegIssuer_t_1776697287"); // 1
    Leg_92_set.insert("LegIssuer_t_1776697287");
    Leg_92.add_attribute("EncLegIssrLen", "465028541"); // 1
    Leg_92_set.insert("465028541");
    Leg_92.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2013159793"); // 1
    Leg_92_set.insert("EncodedLegIssuer_t_2013159793");
    Leg_92.add_attribute("Desc", "LegSecurityDesc_t_432846470"); // 1
    Leg_92_set.insert("LegSecurityDesc_t_432846470");
    Leg_92.add_attribute("EncLegSecDescLen", "677317574"); // 1
    Leg_92_set.insert("677317574");
    Leg_92.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1136437282"); // 1
    Leg_92_set.insert("EncodedLegSecurityDesc_t_1136437282");
    Leg_92.add_attribute("RatioQty", "13182011.130000"); // 1
    Leg_92_set.insert("13182011.130000");
    Leg_92.add_attribute("Side", "9"); // 1
    Leg_92_set.insert("9");
    Leg_92.add_attribute("Ccy", "JPY"); // 1
    Leg_92_set.insert("JPY");
    Leg_92.add_attribute("Pool", "LegPool_t_552940266"); // 1
    Leg_92_set.insert("LegPool_t_552940266");
    Leg_92.add_attribute("Dated", "LegDatedDate_t_1075184865"); // 1
    Leg_92_set.insert("LegDatedDate_t_1075184865");
    Leg_92.add_attribute("CSetMo", "940334185"); // 1
    Leg_92_set.insert("940334185");
    Leg_92.add_attribute("IntAcrl", "LegInterestAccrualDate_t_720435505"); // 1
    Leg_92_set.insert("LegInterestAccrualDate_t_720435505");
    Leg_92.add_attribute("PutCall", "1435761931"); // 1
    Leg_92_set.insert("1435761931");
    Leg_92.add_attribute("LegOptionRatio", "20759162.950000"); // 1
    Leg_92_set.insert("20759162.950000");
    Leg_92.add_attribute("Px", "17757441.740000"); // 1
    Leg_92_set.insert("17757441.740000");
    all_values.push_back(Leg_92_set);
    all_compo_names.insert("Leg_92_set");

    {
      xml_element LegAID_87{"LegAID"};
      multiset<string> LegAID_87_set;
      LegAID_87.add_attribute("SecAltID", "LegSecurityAltID_t_1472664079"); // 2
      LegAID_87_set.insert("LegSecurityAltID_t_1472664079");
      LegAID_87.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_87_set.insert("E");
      all_values.push_back(LegAID_87_set);
      all_compo_names.insert("LegAID_87_set");

      Leg_92.add_element(LegAID_87);
    }
    elt.add_element(Leg_92);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_30{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_30_set;
    SprdBnchmkCurve_30.add_attribute("Spread", "20219896.030000"); // 1
    SprdBnchmkCurve_30_set.insert("20219896.030000");
    SprdBnchmkCurve_30.add_attribute("Ccy", "CHF"); // 1
    SprdBnchmkCurve_30_set.insert("CHF");
    SprdBnchmkCurve_30.add_attribute("Name", "SWAP"); // 1
    SprdBnchmkCurve_30_set.insert("SWAP");
    SprdBnchmkCurve_30.add_attribute("Point", "BenchmarkCurvePoint_t_702705135"); // 1
    SprdBnchmkCurve_30_set.insert("BenchmarkCurvePoint_t_702705135");
    SprdBnchmkCurve_30.add_attribute("Px", "2966587.360000"); // 1
    SprdBnchmkCurve_30_set.insert("2966587.360000");
    SprdBnchmkCurve_30.add_attribute("PxTyp", "2"); // 1
    SprdBnchmkCurve_30_set.insert("2");
    SprdBnchmkCurve_30.add_attribute("SecID", "BenchmarkSecurityID_t_836716265"); // 1
    SprdBnchmkCurve_30_set.insert("BenchmarkSecurityID_t_836716265");
    SprdBnchmkCurve_30.add_attribute("SecIDSrc", "A"); // 1
    SprdBnchmkCurve_30_set.insert("A");
    all_values.push_back(SprdBnchmkCurve_30_set);
    all_compo_names.insert("SprdBnchmkCurve_30_set");

    elt.add_element(SprdBnchmkCurve_30);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_25{"Yield"};
    multiset<string> Yield_25_set;
    Yield_25.add_attribute("Typ", "SHORTAVGLIFE"); // 1
    Yield_25_set.insert("SHORTAVGLIFE");
    Yield_25.add_attribute("Yld", "11804277.300000"); // 1
    Yield_25_set.insert("11804277.300000");
    Yield_25.add_attribute("CalcDt", "YieldCalcDate_t_1573795296"); // 1
    Yield_25_set.insert("YieldCalcDate_t_1573795296");
    Yield_25.add_attribute("RedDt", "YieldRedemptionDate_t_1159273472"); // 1
    Yield_25_set.insert("YieldRedemptionDate_t_1159273472");
    Yield_25.add_attribute("RedPx", "16454562.710000"); // 1
    Yield_25_set.insert("16454562.710000");
    Yield_25.add_attribute("RedPxTyp", "14"); // 1
    Yield_25_set.insert("14");
    all_values.push_back(Yield_25_set);
    all_compo_names.insert("Yield_25_set");

    elt.add_element(Yield_25);
  } // end Yield
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
