#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DontKnowTrade.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DontKnowTradeDK_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DkTrd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DontKnowTradeDK_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_213016923"); // 0
  DontKnowTradeDK_message_t_0.insert("OrderID_t_213016923");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_460141498"); // 0
  DontKnowTradeDK_message_t_0.insert("SecondaryOrderID_t_460141498");
  elt.add_attribute("ExecID", "ExecID_t_1465522804"); // 0
  DontKnowTradeDK_message_t_0.insert("ExecID_t_1465522804");
  elt.add_attribute("DkRsn", "F"); // 0
  DontKnowTradeDK_message_t_0.insert("F");
  elt.add_attribute("Side", "7"); // 0
  DontKnowTradeDK_message_t_0.insert("7");
  elt.add_attribute("LastQty", "4783648.900000"); // 0
  DontKnowTradeDK_message_t_0.insert("4783648.900000");
  elt.add_attribute("LastPx", "555875.530000"); // 0
  DontKnowTradeDK_message_t_0.insert("555875.530000");
  elt.add_attribute("Txt", "Text_t_1604402570"); // 0
  DontKnowTradeDK_message_t_0.insert("Text_t_1604402570");
  elt.add_attribute("EncTxtLen", "1883855050"); // 0
  DontKnowTradeDK_message_t_0.insert("1883855050");
  elt.add_attribute("EncTxt", "EncodedText_t_839586116"); // 0
  DontKnowTradeDK_message_t_0.insert("EncodedText_t_839586116");
  all_values.push_back(DontKnowTradeDK_message_t_0);
  all_compo_names.insert("DontKnowTradeDK_message_t");

  { // Hdr
    xml_element Hdr_29{"Hdr"};
    multiset<string> Hdr_29_set;
    Hdr_29.add_attribute("SeqNum", "1015119525"); // 1
    Hdr_29_set.insert("1015119525");
    Hdr_29.add_attribute("SID", "SenderCompID_t_1027639959"); // 1
    Hdr_29_set.insert("SenderCompID_t_1027639959");
    Hdr_29.add_attribute("TID", "TargetCompID_t_1153513204"); // 1
    Hdr_29_set.insert("TargetCompID_t_1153513204");
    Hdr_29.add_attribute("OBID", "OnBehalfOfCompID_t_1153683750"); // 1
    Hdr_29_set.insert("OnBehalfOfCompID_t_1153683750");
    Hdr_29.add_attribute("D2ID", "DeliverToCompID_t_916849728"); // 1
    Hdr_29_set.insert("DeliverToCompID_t_916849728");
    Hdr_29.add_attribute("SSub", "SenderSubID_t_1392930870"); // 1
    Hdr_29_set.insert("SenderSubID_t_1392930870");
    Hdr_29.add_attribute("SLoc", "SenderLocationID_t_1080474897"); // 1
    Hdr_29_set.insert("SenderLocationID_t_1080474897");
    Hdr_29.add_attribute("TSub", "TargetSubID_t_938436477"); // 1
    Hdr_29_set.insert("TargetSubID_t_938436477");
    Hdr_29.add_attribute("TLoc", "TargetLocationID_t_313430750"); // 1
    Hdr_29_set.insert("TargetLocationID_t_313430750");
    Hdr_29.add_attribute("OBSub", "OnBehalfOfSubID_t_1900889673"); // 1
    Hdr_29_set.insert("OnBehalfOfSubID_t_1900889673");
    Hdr_29.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1331251440"); // 1
    Hdr_29_set.insert("OnBehalfOfLocationID_t_1331251440");
    Hdr_29.add_attribute("D2Sub", "DeliverToSubID_t_1793586786"); // 1
    Hdr_29_set.insert("DeliverToSubID_t_1793586786");
    Hdr_29.add_attribute("D2Loc", "DeliverToLocationID_t_1184061085"); // 1
    Hdr_29_set.insert("DeliverToLocationID_t_1184061085");
    Hdr_29.add_attribute("PosDup", "N"); // 1
    Hdr_29_set.insert("N");
    Hdr_29.add_attribute("PosRsnd", "Y"); // 1
    Hdr_29_set.insert("Y");
    Hdr_29.add_attribute("Snt", "SendingTime_t_1906876555"); // 1
    Hdr_29_set.insert("SendingTime_t_1906876555");
    Hdr_29.add_attribute("OrigSnt", "OrigSendingTime_t_551967885"); // 1
    Hdr_29_set.insert("OrigSendingTime_t_551967885");
    Hdr_29.add_attribute("MsgEncd", "MessageEncoding_t_1036049689"); // 1
    Hdr_29_set.insert("MessageEncoding_t_1036049689");
    all_values.push_back(Hdr_29_set);
    all_compo_names.insert("Hdr_29_set");

    {
      xml_element Hop_29{"Hop"};
      multiset<string> Hop_29_set;
      Hop_29.add_attribute("ID", "HopCompID_t_2138783894"); // 2
      Hop_29_set.insert("HopCompID_t_2138783894");
      Hop_29.add_attribute("Ref", "1450937815"); // 2
      Hop_29_set.insert("1450937815");
      Hop_29.add_attribute("Snt", "HopSendingTime_t_595435177"); // 2
      Hop_29_set.insert("HopSendingTime_t_595435177");
      all_values.push_back(Hop_29_set);
      all_compo_names.insert("Hop_29_set");

      Hdr_29.add_element(Hop_29);
    }
    elt.add_element(Hdr_29);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_20{"Instrmt"};
    multiset<string> Instrmt_20_set;
    Instrmt_20.add_attribute("Sym", "Symbol_t_204317169"); // 1
    Instrmt_20_set.insert("Symbol_t_204317169");
    Instrmt_20.add_attribute("Sfx", "CD"); // 1
    Instrmt_20_set.insert("CD");
    Instrmt_20.add_attribute("ID", "SecurityID_t_2060957981"); // 1
    Instrmt_20_set.insert("SecurityID_t_2060957981");
    Instrmt_20.add_attribute("Src", "I"); // 1
    Instrmt_20_set.insert("I");
    Instrmt_20.add_attribute("Prod", "12"); // 1
    Instrmt_20_set.insert("12");
    Instrmt_20.add_attribute("ProdCmplx", "ProductComplex_t_391839223"); // 1
    Instrmt_20_set.insert("ProductComplex_t_391839223");
    Instrmt_20.add_attribute("SecGrp", "SecurityGroup_t_137004906"); // 1
    Instrmt_20_set.insert("SecurityGroup_t_137004906");
    Instrmt_20.add_attribute("CFI", "CFICode_t_1235154722"); // 1
    Instrmt_20_set.insert("CFICode_t_1235154722");
    Instrmt_20.add_attribute("SecTyp", "TRAN"); // 1
    Instrmt_20_set.insert("TRAN");
    Instrmt_20.add_attribute("SubTyp", "SecuritySubType_t_976591023"); // 1
    Instrmt_20_set.insert("SecuritySubType_t_976591023");
    Instrmt_20.add_attribute("MMY", "102790599"); // 1
    Instrmt_20_set.insert("102790599");
    Instrmt_20.add_attribute("MatDt", "MaturityDate_t_1155850584"); // 1
    Instrmt_20_set.insert("MaturityDate_t_1155850584");
    Instrmt_20.add_attribute("MatTm", "2130104227"); // 1
    Instrmt_20_set.insert("2130104227");
    Instrmt_20.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1256474349"); // 1
    Instrmt_20_set.insert("SettleOnOpenFlag_t_1256474349");
    Instrmt_20.add_attribute("AsgnMeth", "2072700312"); // 1
    Instrmt_20_set.insert("2072700312");
    Instrmt_20.add_attribute("Status", "2"); // 1
    Instrmt_20_set.insert("2");
    Instrmt_20.add_attribute("CpnPmt", "CouponPaymentDate_t_189465599"); // 1
    Instrmt_20_set.insert("CouponPaymentDate_t_189465599");
    Instrmt_20.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_20_set.insert("MR");
    Instrmt_20.add_attribute("Snrty", "SR"); // 1
    Instrmt_20_set.insert("SR");
    Instrmt_20.add_attribute("NotlPctOut", "20903552.720000"); // 1
    Instrmt_20_set.insert("20903552.720000");
    Instrmt_20.add_attribute("OrigNotlPctOut", "474209.330000"); // 1
    Instrmt_20_set.insert("474209.330000");
    Instrmt_20.add_attribute("AttchPnt", "13350853.370000"); // 1
    Instrmt_20_set.insert("13350853.370000");
    Instrmt_20.add_attribute("DetchPnt", "11269327.090000"); // 1
    Instrmt_20_set.insert("11269327.090000");
    Instrmt_20.add_attribute("Issued", "IssueDate_t_1579677723"); // 1
    Instrmt_20_set.insert("IssueDate_t_1579677723");
    Instrmt_20.add_attribute("RepoCollSecTyp", "583336528"); // 1
    Instrmt_20_set.insert("583336528");
    Instrmt_20.add_attribute("RepoTrm", "886325616"); // 1
    Instrmt_20_set.insert("886325616");
    Instrmt_20.add_attribute("RepoRt", "21316456.090000"); // 1
    Instrmt_20_set.insert("21316456.090000");
    Instrmt_20.add_attribute("Fctr", "16193862.170000"); // 1
    Instrmt_20_set.insert("16193862.170000");
    Instrmt_20.add_attribute("CrdRtg", "CreditRating_t_877625862"); // 1
    Instrmt_20_set.insert("CreditRating_t_877625862");
    Instrmt_20.add_attribute("Rgstry", "InstrRegistry_t_1435099776"); // 1
    Instrmt_20_set.insert("InstrRegistry_t_1435099776");
    Instrmt_20.add_attribute("IssuCtry", "67337746"); // 1
    Instrmt_20_set.insert("67337746");
    Instrmt_20.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1081943031"); // 1
    Instrmt_20_set.insert("StateOrProvinceOfIssue_t_1081943031");
    Instrmt_20.add_attribute("Lcl", "LocaleOfIssue_t_1198695442"); // 1
    Instrmt_20_set.insert("LocaleOfIssue_t_1198695442");
    Instrmt_20.add_attribute("Redeem", "RedemptionDate_t_2128295727"); // 1
    Instrmt_20_set.insert("RedemptionDate_t_2128295727");
    Instrmt_20.add_attribute("StrkPx", "11633603.840000"); // 1
    Instrmt_20_set.insert("11633603.840000");
    Instrmt_20.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_20_set.insert("GBP");
    Instrmt_20.add_attribute("StrkMult", "13003652.900000"); // 1
    Instrmt_20_set.insert("13003652.900000");
    Instrmt_20.add_attribute("StrkValu", "20646023.170000"); // 1
    Instrmt_20_set.insert("20646023.170000");
    Instrmt_20.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_20_set.insert("4");
    Instrmt_20.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_20_set.insert("1");
    Instrmt_20.add_attribute("StrkPxBndryPrcsn", "199092.690000"); // 1
    Instrmt_20_set.insert("199092.690000");
    Instrmt_20.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_20_set.insert("4");
    Instrmt_20.add_attribute("OptAt", "112093244"); // 1
    Instrmt_20_set.insert("112093244");
    Instrmt_20.add_attribute("Mult", "12763836.180000"); // 1
    Instrmt_20_set.insert("12763836.180000");
    Instrmt_20.add_attribute("MultTyp", "0"); // 1
    Instrmt_20_set.insert("0");
    Instrmt_20.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_20_set.insert("3");
    Instrmt_20.add_attribute("MinPxIncr", "14658492.170000"); // 1
    Instrmt_20_set.insert("14658492.170000");
    Instrmt_20.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_298098669"); // 1
    Instrmt_20_set.insert("MinPriceIncrementAmount_t_298098669");
    Instrmt_20.add_attribute("UOM", "MWh"); // 1
    Instrmt_20_set.insert("MWh");
    Instrmt_20.add_attribute("UOMQty", "14087208.410000"); // 1
    Instrmt_20_set.insert("14087208.410000");
    Instrmt_20.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_20_set.insert("Alw");
    Instrmt_20.add_attribute("PxUOMQty", "2167449.340000"); // 1
    Instrmt_20_set.insert("2167449.340000");
    Instrmt_20.add_attribute("SettlMeth", "C"); // 1
    Instrmt_20_set.insert("C");
    Instrmt_20.add_attribute("ExerStyle", "0"); // 1
    Instrmt_20_set.insert("0");
    Instrmt_20.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_20_set.insert("1");
    Instrmt_20.add_attribute("OptPayAmt", "OptPayoutAmount_t_1274495518"); // 1
    Instrmt_20_set.insert("OptPayoutAmount_t_1274495518");
    Instrmt_20.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_20_set.insert("PCTPAR");
    Instrmt_20.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_20_set.insert("FUTDA");
    Instrmt_20.add_attribute("ListMeth", "0"); // 1
    Instrmt_20_set.insert("0");
    Instrmt_20.add_attribute("CapPx", "11969754.150000"); // 1
    Instrmt_20_set.insert("11969754.150000");
    Instrmt_20.add_attribute("FlrPx", "3393217.790000"); // 1
    Instrmt_20_set.insert("3393217.790000");
    Instrmt_20.add_attribute("PutCall", "1"); // 1
    Instrmt_20_set.insert("1");
    Instrmt_20.add_attribute("FlexInd", "true"); // 1
    Instrmt_20_set.insert("true");
    Instrmt_20.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_20_set.insert("true");
    Instrmt_20.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_20_set.insert("Wk");
    Instrmt_20.add_attribute("CpnRt", "10776348.050000"); // 1
    Instrmt_20_set.insert("10776348.050000");
    Instrmt_20.add_attribute("Exch", "SecurityExchange_t_692785161"); // 1
    Instrmt_20_set.insert("SecurityExchange_t_692785161");
    Instrmt_20.add_attribute("PosLmt", "1402822790"); // 1
    Instrmt_20_set.insert("1402822790");
    Instrmt_20.add_attribute("NTPosLmt", "994753474"); // 1
    Instrmt_20_set.insert("994753474");
    Instrmt_20.add_attribute("Issr", "Issuer_t_1193647088"); // 1
    Instrmt_20_set.insert("Issuer_t_1193647088");
    Instrmt_20.add_attribute("EncIssrLen", "1532295455"); // 1
    Instrmt_20_set.insert("1532295455");
    Instrmt_20.add_attribute("EncIssr", "EncodedIssuer_t_1014662743"); // 1
    Instrmt_20_set.insert("EncodedIssuer_t_1014662743");
    Instrmt_20.add_attribute("Desc", "SecurityDesc_t_702875952"); // 1
    Instrmt_20_set.insert("SecurityDesc_t_702875952");
    Instrmt_20.add_attribute("EncSecDescLen", "1644388700"); // 1
    Instrmt_20_set.insert("1644388700");
    Instrmt_20.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_143562714"); // 1
    Instrmt_20_set.insert("EncodedSecurityDesc_t_143562714");
    Instrmt_20.add_attribute("Pool", "Pool_t_137321479"); // 1
    Instrmt_20_set.insert("Pool_t_137321479");
    Instrmt_20.add_attribute("CSetMo", "984549745"); // 1
    Instrmt_20_set.insert("984549745");
    Instrmt_20.add_attribute("CPPgm", "99"); // 1
    Instrmt_20_set.insert("99");
    Instrmt_20.add_attribute("CPRegT", "CPRegType_t_435420148"); // 1
    Instrmt_20_set.insert("CPRegType_t_435420148");
    Instrmt_20.add_attribute("Dated", "DatedDate_t_2013692990"); // 1
    Instrmt_20_set.insert("DatedDate_t_2013692990");
    Instrmt_20.add_attribute("IntAcrl", "InterestAccrualDate_t_870649125"); // 1
    Instrmt_20_set.insert("InterestAccrualDate_t_870649125");
    all_values.push_back(Instrmt_20_set);
    all_compo_names.insert("Instrmt_20_set");

    {
      xml_element AID_23{"AID"};
      multiset<string> AID_23_set;
      AID_23.add_attribute("AltID", "SecurityAltID_t_780939751"); // 2
      AID_23_set.insert("SecurityAltID_t_780939751");
      AID_23.add_attribute("AltIDSrc", "M"); // 2
      AID_23_set.insert("M");
      all_values.push_back(AID_23_set);
      all_compo_names.insert("AID_23_set");

      Instrmt_20.add_element(AID_23);
    }
    {
      xml_element SecXML_23{"SecXML"};
      multiset<string> SecXML_23_set;
      SecXML_23.add_attribute("Schema", "SecurityXMLSchema_t_1258819027"); // 2
      SecXML_23_set.insert("SecurityXMLSchema_t_1258819027");
      all_values.push_back(SecXML_23_set);
      all_compo_names.insert("SecXML_23_set");

      Instrmt_20.add_element(SecXML_23);
    }
    {
      xml_element Evnt_23{"Evnt"};
      multiset<string> Evnt_23_set;
      Evnt_23.add_attribute("EventTyp", "9"); // 2
      Evnt_23_set.insert("9");
      Evnt_23.add_attribute("Dt", "EventDate_t_883035740"); // 2
      Evnt_23_set.insert("EventDate_t_883035740");
      Evnt_23.add_attribute("Tm", "EventTime_t_385830898"); // 2
      Evnt_23_set.insert("EventTime_t_385830898");
      Evnt_23.add_attribute("Px", "3205290.680000"); // 2
      Evnt_23_set.insert("3205290.680000");
      Evnt_23.add_attribute("Txt", "EventText_t_1155019772"); // 2
      Evnt_23_set.insert("EventText_t_1155019772");
      all_values.push_back(Evnt_23_set);
      all_compo_names.insert("Evnt_23_set");

      Instrmt_20.add_element(Evnt_23);
    }
    {
      xml_element Pty_140{"Pty"};
      multiset<string> Pty_140_set;
      Pty_140.add_attribute("ID", "InstrumentPartyID_t_390468630"); // 2
      Pty_140_set.insert("InstrumentPartyID_t_390468630");
      Pty_140.add_attribute("Src", "C"); // 2
      Pty_140_set.insert("C");
      Pty_140.add_attribute("R", "4"); // 2
      Pty_140_set.insert("4");
      all_values.push_back(Pty_140_set);
      all_compo_names.insert("Pty_140_set");

      {
        xml_element Sub_140{"Sub"};
        multiset<string> Sub_140_set;
        Sub_140.add_attribute("ID", "InstrumentPartySubID_t_1477049394"); // 3
        Sub_140_set.insert("InstrumentPartySubID_t_1477049394");
        Sub_140.add_attribute("Typ", "30"); // 3
        Sub_140_set.insert("30");
        all_values.push_back(Sub_140_set);
        all_compo_names.insert("Sub_140_set");

        Pty_140.add_element(Sub_140);
      }
      Instrmt_20.add_element(Pty_140);
    }
    {
      xml_element CmplxEvnt_20{"CmplxEvnt"};
      multiset<string> CmplxEvnt_20_set;
      CmplxEvnt_20.add_attribute("Typ", "9"); // 2
      CmplxEvnt_20_set.insert("9");
      CmplxEvnt_20.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1579506893"); // 2
      CmplxEvnt_20_set.insert("ComplexOptPayoutAmount_t_1579506893");
      CmplxEvnt_20.add_attribute("Px", "6958428.500000"); // 2
      CmplxEvnt_20_set.insert("6958428.500000");
      CmplxEvnt_20.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_20_set.insert("4");
      CmplxEvnt_20.add_attribute("PxBndryPrcsn", "8348460.350000"); // 2
      CmplxEvnt_20_set.insert("8348460.350000");
      CmplxEvnt_20.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_20_set.insert("2");
      CmplxEvnt_20.add_attribute("Cond", "2"); // 2
      CmplxEvnt_20_set.insert("2");
      all_values.push_back(CmplxEvnt_20_set);
      all_compo_names.insert("CmplxEvnt_20_set");

      {
        xml_element EvntDts_20{"EvntDts"};
        multiset<string> EvntDts_20_set;
        EvntDts_20.add_attribute("StartDt", "ComplexEventStartDate_t_219657843"); // 3
        EvntDts_20_set.insert("ComplexEventStartDate_t_219657843");
        EvntDts_20.add_attribute("EndDt", "ComplexEventEndDate_t_557775420"); // 3
        EvntDts_20_set.insert("ComplexEventEndDate_t_557775420");
        all_values.push_back(EvntDts_20_set);
        all_compo_names.insert("EvntDts_20_set");

        {
          xml_element EvntTms_20{"EvntTms"};
          multiset<string> EvntTms_20_set;
          EvntTms_20.add_attribute("StartTm", "108816315"); // 4
          EvntTms_20_set.insert("108816315");
          EvntTms_20.add_attribute("EndTm", "1864046543"); // 4
          EvntTms_20_set.insert("1864046543");
          all_values.push_back(EvntTms_20_set);
          all_compo_names.insert("EvntTms_20_set");

          EvntDts_20.add_element(EvntTms_20);
        }
        CmplxEvnt_20.add_element(EvntDts_20);
      }
      Instrmt_20.add_element(CmplxEvnt_20);
    }
    elt.add_element(Instrmt_20);
  } // end Instrmt
  { // Undly
    xml_element Undly_32{"Undly"};
    multiset<string> Undly_32_set;
    Undly_32.add_attribute("Sym", "UnderlyingSymbol_t_246137795"); // 1
    Undly_32_set.insert("UnderlyingSymbol_t_246137795");
    Undly_32.add_attribute("Sfx", "CD"); // 1
    Undly_32_set.insert("CD");
    Undly_32.add_attribute("ID", "UnderlyingSecurityID_t_163266418"); // 1
    Undly_32_set.insert("UnderlyingSecurityID_t_163266418");
    Undly_32.add_attribute("Src", "C"); // 1
    Undly_32_set.insert("C");
    Undly_32.add_attribute("Prod", "4"); // 1
    Undly_32_set.insert("4");
    Undly_32.add_attribute("CFI", "UnderlyingCFICode_t_1033915543"); // 1
    Undly_32_set.insert("UnderlyingCFICode_t_1033915543");
    Undly_32.add_attribute("SecTyp", "FADN"); // 1
    Undly_32_set.insert("FADN");
    Undly_32.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_650276260"); // 1
    Undly_32_set.insert("UnderlyingSecuritySubType_t_650276260");
    Undly_32.add_attribute("MMY", "145250922"); // 1
    Undly_32_set.insert("145250922");
    Undly_32.add_attribute("Mat", "UnderlyingMaturityDate_t_2021151123"); // 1
    Undly_32_set.insert("UnderlyingMaturityDate_t_2021151123");
    Undly_32.add_attribute("MatTm", "1533312000"); // 1
    Undly_32_set.insert("1533312000");
    Undly_32.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_531081820"); // 1
    Undly_32_set.insert("UnderlyingCouponPaymentDate_t_531081820");
    Undly_32.add_attribute("RestrctTyp", "XR"); // 1
    Undly_32_set.insert("XR");
    Undly_32.add_attribute("Snrty", "SD"); // 1
    Undly_32_set.insert("SD");
    Undly_32.add_attribute("NotlPctOut", "9215504.510000"); // 1
    Undly_32_set.insert("9215504.510000");
    Undly_32.add_attribute("OrigNotlPctOut", "17117010.270000"); // 1
    Undly_32_set.insert("17117010.270000");
    Undly_32.add_attribute("AttchPnt", "20351896.760000"); // 1
    Undly_32_set.insert("20351896.760000");
    Undly_32.add_attribute("DetchPnt", "2511161.970000"); // 1
    Undly_32_set.insert("2511161.970000");
    Undly_32.add_attribute("Issued", "UnderlyingIssueDate_t_1329909072"); // 1
    Undly_32_set.insert("UnderlyingIssueDate_t_1329909072");
    Undly_32.add_attribute("RepoCollSecTyp", "1702181438"); // 1
    Undly_32_set.insert("1702181438");
    Undly_32.add_attribute("RepoTrm", "1830623090"); // 1
    Undly_32_set.insert("1830623090");
    Undly_32.add_attribute("RepoRt", "20257519.230000"); // 1
    Undly_32_set.insert("20257519.230000");
    Undly_32.add_attribute("Fctr", "20619583.610000"); // 1
    Undly_32_set.insert("20619583.610000");
    Undly_32.add_attribute("CrdRtg", "UnderlyingCreditRating_t_517985478"); // 1
    Undly_32_set.insert("UnderlyingCreditRating_t_517985478");
    Undly_32.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1568864600"); // 1
    Undly_32_set.insert("UnderlyingInstrRegistry_t_1568864600");
    Undly_32.add_attribute("Ctry", "1467898724"); // 1
    Undly_32_set.insert("1467898724");
    Undly_32.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_737643321"); // 1
    Undly_32_set.insert("UnderlyingStateOrProvinceOfIssue_t_737643321");
    Undly_32.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2126640020"); // 1
    Undly_32_set.insert("UnderlyingLocaleOfIssue_t_2126640020");
    Undly_32.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1576715040"); // 1
    Undly_32_set.insert("UnderlyingRedemptionDate_t_1576715040");
    Undly_32.add_attribute("StrkPx", "4542062.160000"); // 1
    Undly_32_set.insert("4542062.160000");
    Undly_32.add_attribute("StrkCcy", "CAN"); // 1
    Undly_32_set.insert("CAN");
    Undly_32.add_attribute("OptA", "1155318856"); // 1
    Undly_32_set.insert("1155318856");
    Undly_32.add_attribute("Mult", "8437609.250000"); // 1
    Undly_32_set.insert("8437609.250000");
    Undly_32.add_attribute("MultTyp", "0"); // 1
    Undly_32_set.insert("0");
    Undly_32.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_32_set.insert("4");
    Undly_32.add_attribute("UOM", "tn"); // 1
    Undly_32_set.insert("tn");
    Undly_32.add_attribute("UOMQty", "18194248.250000"); // 1
    Undly_32_set.insert("18194248.250000");
    Undly_32.add_attribute("PxUOM", "USD"); // 1
    Undly_32_set.insert("USD");
    Undly_32.add_attribute("PxUOMQty", "20229273.900000"); // 1
    Undly_32_set.insert("20229273.900000");
    Undly_32.add_attribute("TmUnit", "Wk"); // 1
    Undly_32_set.insert("Wk");
    Undly_32.add_attribute("ExerStyle", "2"); // 1
    Undly_32_set.insert("2");
    Undly_32.add_attribute("CpnRt", "4065255.630000"); // 1
    Undly_32_set.insert("4065255.630000");
    Undly_32.add_attribute("Exch", "UnderlyingSecurityExchange_t_1887288844"); // 1
    Undly_32_set.insert("UnderlyingSecurityExchange_t_1887288844");
    Undly_32.add_attribute("Issr", "UnderlyingIssuer_t_152109928"); // 1
    Undly_32_set.insert("UnderlyingIssuer_t_152109928");
    Undly_32.add_attribute("EncUndIssrLen", "1328076014"); // 1
    Undly_32_set.insert("1328076014");
    Undly_32.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1451506223"); // 1
    Undly_32_set.insert("EncodedUnderlyingIssuer_t_1451506223");
    Undly_32.add_attribute("Desc", "UnderlyingSecurityDesc_t_39815956"); // 1
    Undly_32_set.insert("UnderlyingSecurityDesc_t_39815956");
    Undly_32.add_attribute("EncUndSecDescLen", "1579192211"); // 1
    Undly_32_set.insert("1579192211");
    Undly_32.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_633931647"); // 1
    Undly_32_set.insert("EncodedUnderlyingSecurityDesc_t_633931647");
    Undly_32.add_attribute("CPPgm", "UnderlyingCPProgram_t_1741997394"); // 1
    Undly_32_set.insert("UnderlyingCPProgram_t_1741997394");
    Undly_32.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1262331653"); // 1
    Undly_32_set.insert("UnderlyingCPRegType_t_1262331653");
    Undly_32.add_attribute("AllocPct", "5121999.220000"); // 1
    Undly_32_set.insert("5121999.220000");
    Undly_32.add_attribute("Ccy", "CAN"); // 1
    Undly_32_set.insert("CAN");
    Undly_32.add_attribute("Qty", "20810645.220000"); // 1
    Undly_32_set.insert("20810645.220000");
    Undly_32.add_attribute("SettlTyp", "2"); // 1
    Undly_32_set.insert("2");
    Undly_32.add_attribute("CashAmt", "UnderlyingCashAmount_t_370476804"); // 1
    Undly_32_set.insert("UnderlyingCashAmount_t_370476804");
    Undly_32.add_attribute("CashTyp", "DIFF"); // 1
    Undly_32_set.insert("DIFF");
    Undly_32.add_attribute("Px", "4061185.750000"); // 1
    Undly_32_set.insert("4061185.750000");
    Undly_32.add_attribute("DirtPx", "8246830.200000"); // 1
    Undly_32_set.insert("8246830.200000");
    Undly_32.add_attribute("EndPx", "5932317.540000"); // 1
    Undly_32_set.insert("5932317.540000");
    Undly_32.add_attribute("StartVal", "UnderlyingStartValue_t_81487762"); // 1
    Undly_32_set.insert("UnderlyingStartValue_t_81487762");
    Undly_32.add_attribute("CurVal", "UnderlyingCurrentValue_t_1980001877"); // 1
    Undly_32_set.insert("UnderlyingCurrentValue_t_1980001877");
    Undly_32.add_attribute("EndVal", "UnderlyingEndValue_t_1436992679"); // 1
    Undly_32_set.insert("UnderlyingEndValue_t_1436992679");
    Undly_32.add_attribute("AdjQty", "4384148.930000"); // 1
    Undly_32_set.insert("4384148.930000");
    Undly_32.add_attribute("FxRate", "15551590.680000"); // 1
    Undly_32_set.insert("15551590.680000");
    Undly_32.add_attribute("FxRateCalc", "D"); // 1
    Undly_32_set.insert("D");
    Undly_32.add_attribute("CapValu", "UnderlyingCapValue_t_110356070"); // 1
    Undly_32_set.insert("UnderlyingCapValue_t_110356070");
    Undly_32.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1780592520"); // 1
    Undly_32_set.insert("UnderlyingSettlMethod_t_1780592520");
    Undly_32.add_attribute("PutCall", "1042629241"); // 1
    Undly_32_set.insert("1042629241");
    all_values.push_back(Undly_32_set);
    all_compo_names.insert("Undly_32_set");

    {
      xml_element UndAID_32{"UndAID"};
      multiset<string> UndAID_32_set;
      UndAID_32.add_attribute("AltID", "UnderlyingSecurityAltID_t_1803448370"); // 2
      UndAID_32_set.insert("UnderlyingSecurityAltID_t_1803448370");
      UndAID_32.add_attribute("AltIDSrc", "E"); // 2
      UndAID_32_set.insert("E");
      all_values.push_back(UndAID_32_set);
      all_compo_names.insert("UndAID_32_set");

      Undly_32.add_element(UndAID_32);
    }
    {
      xml_element Stip_52{"Stip"};
      multiset<string> Stip_52_set;
      Stip_52.add_attribute("Typ", "BGNCON"); // 2
      Stip_52_set.insert("BGNCON");
      Stip_52.add_attribute("Val", "UnderlyingStipValue_t_1543253566"); // 2
      Stip_52_set.insert("UnderlyingStipValue_t_1543253566");
      all_values.push_back(Stip_52_set);
      all_compo_names.insert("Stip_52_set");

      Undly_32.add_element(Stip_52);
    }
    {
      xml_element Pty_141{"Pty"};
      multiset<string> Pty_141_set;
      Pty_141.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1543964251"); // 2
      Pty_141_set.insert("UnderlyingInstrumentPartyID_t_1543964251");
      Pty_141.add_attribute("Src", "H"); // 2
      Pty_141_set.insert("H");
      Pty_141.add_attribute("R", "63"); // 2
      Pty_141_set.insert("63");
      all_values.push_back(Pty_141_set);
      all_compo_names.insert("Pty_141_set");

      {
        xml_element Sub_141{"Sub"};
        multiset<string> Sub_141_set;
        Sub_141.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1583780207"); // 3
        Sub_141_set.insert("UnderlyingInstrumentPartySubID_t_1583780207");
        Sub_141.add_attribute("Typ", "32"); // 3
        Sub_141_set.insert("32");
        all_values.push_back(Sub_141_set);
        all_compo_names.insert("Sub_141_set");

        Pty_141.add_element(Sub_141);
      }
      Undly_32.add_element(Pty_141);
    }
    elt.add_element(Undly_32);
  } // end Undly
  { // Leg
    xml_element Leg_29{"Leg"};
    multiset<string> Leg_29_set;
    Leg_29.add_attribute("Sym", "LegSymbol_t_1178293953"); // 1
    Leg_29_set.insert("LegSymbol_t_1178293953");
    Leg_29.add_attribute("Sfx", "WI"); // 1
    Leg_29_set.insert("WI");
    Leg_29.add_attribute("ID", "LegSecurityID_t_1993407711"); // 1
    Leg_29_set.insert("LegSecurityID_t_1993407711");
    Leg_29.add_attribute("Src", "F"); // 1
    Leg_29_set.insert("F");
    Leg_29.add_attribute("Prod", "7"); // 1
    Leg_29_set.insert("7");
    Leg_29.add_attribute("CFI", "LegCFICode_t_1926988586"); // 1
    Leg_29_set.insert("LegCFICode_t_1926988586");
    Leg_29.add_attribute("SecTyp", "DEFLTED"); // 1
    Leg_29_set.insert("DEFLTED");
    Leg_29.add_attribute("SecSubTyp", "LegSecuritySubType_t_1327097675"); // 1
    Leg_29_set.insert("LegSecuritySubType_t_1327097675");
    Leg_29.add_attribute("MMY", "1839725833"); // 1
    Leg_29_set.insert("1839725833");
    Leg_29.add_attribute("Mat", "LegMaturityDate_t_2070288171"); // 1
    Leg_29_set.insert("LegMaturityDate_t_2070288171");
    Leg_29.add_attribute("MatTm", "4297047"); // 1
    Leg_29_set.insert("4297047");
    Leg_29.add_attribute("CpnPmt", "LegCouponPaymentDate_t_285473939"); // 1
    Leg_29_set.insert("LegCouponPaymentDate_t_285473939");
    Leg_29.add_attribute("Issued", "LegIssueDate_t_4292286"); // 1
    Leg_29_set.insert("LegIssueDate_t_4292286");
    Leg_29.add_attribute("RepoCollSecTyp", "1984298924"); // 1
    Leg_29_set.insert("1984298924");
    Leg_29.add_attribute("RepoTrm", "1722466618"); // 1
    Leg_29_set.insert("1722466618");
    Leg_29.add_attribute("RepoRt", "4427071.790000"); // 1
    Leg_29_set.insert("4427071.790000");
    Leg_29.add_attribute("Fctr", "13919743.450000"); // 1
    Leg_29_set.insert("13919743.450000");
    Leg_29.add_attribute("CrdRtg", "LegCreditRating_t_742168469"); // 1
    Leg_29_set.insert("LegCreditRating_t_742168469");
    Leg_29.add_attribute("Rgstry", "LegInstrRegistry_t_553063249"); // 1
    Leg_29_set.insert("LegInstrRegistry_t_553063249");
    Leg_29.add_attribute("Ctry", "1025083217"); // 1
    Leg_29_set.insert("1025083217");
    Leg_29.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1784797710"); // 1
    Leg_29_set.insert("LegStateOrProvinceOfIssue_t_1784797710");
    Leg_29.add_attribute("Lcl", "LegLocaleOfIssue_t_209027971"); // 1
    Leg_29_set.insert("LegLocaleOfIssue_t_209027971");
    Leg_29.add_attribute("Redeem", "LegRedemptionDate_t_269453892"); // 1
    Leg_29_set.insert("LegRedemptionDate_t_269453892");
    Leg_29.add_attribute("Strk", "10864688.670000"); // 1
    Leg_29_set.insert("10864688.670000");
    Leg_29.add_attribute("StrkCcy", "GBP"); // 1
    Leg_29_set.insert("GBP");
    Leg_29.add_attribute("OptA", "1716216037"); // 1
    Leg_29_set.insert("1716216037");
    Leg_29.add_attribute("Cmult", "4520740.310000"); // 1
    Leg_29_set.insert("4520740.310000");
    Leg_29.add_attribute("MultTyp", "2"); // 1
    Leg_29_set.insert("2");
    Leg_29.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_29_set.insert("1");
    Leg_29.add_attribute("UOM", "Bbl"); // 1
    Leg_29_set.insert("Bbl");
    Leg_29.add_attribute("UOMQty", "2805250.090000"); // 1
    Leg_29_set.insert("2805250.090000");
    Leg_29.add_attribute("PxUOM", "lbs"); // 1
    Leg_29_set.insert("lbs");
    Leg_29.add_attribute("PxUOMQty", "17792058.840000"); // 1
    Leg_29_set.insert("17792058.840000");
    Leg_29.add_attribute("TmUnit", "S"); // 1
    Leg_29_set.insert("S");
    Leg_29.add_attribute("ExerStyle", "0"); // 1
    Leg_29_set.insert("0");
    Leg_29.add_attribute("CpnRt", "15587108.220000"); // 1
    Leg_29_set.insert("15587108.220000");
    Leg_29.add_attribute("Exch", "LegSecurityExchange_t_484493369"); // 1
    Leg_29_set.insert("LegSecurityExchange_t_484493369");
    Leg_29.add_attribute("Issr", "LegIssuer_t_1090210407"); // 1
    Leg_29_set.insert("LegIssuer_t_1090210407");
    Leg_29.add_attribute("EncLegIssrLen", "1250953007"); // 1
    Leg_29_set.insert("1250953007");
    Leg_29.add_attribute("EncLegIssr", "EncodedLegIssuer_t_407297893"); // 1
    Leg_29_set.insert("EncodedLegIssuer_t_407297893");
    Leg_29.add_attribute("Desc", "LegSecurityDesc_t_1094507455"); // 1
    Leg_29_set.insert("LegSecurityDesc_t_1094507455");
    Leg_29.add_attribute("EncLegSecDescLen", "1536426946"); // 1
    Leg_29_set.insert("1536426946");
    Leg_29.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_411590179"); // 1
    Leg_29_set.insert("EncodedLegSecurityDesc_t_411590179");
    Leg_29.add_attribute("RatioQty", "9313227.310000"); // 1
    Leg_29_set.insert("9313227.310000");
    Leg_29.add_attribute("Side", "D"); // 1
    Leg_29_set.insert("D");
    Leg_29.add_attribute("Ccy", "USD"); // 1
    Leg_29_set.insert("USD");
    Leg_29.add_attribute("Pool", "LegPool_t_1853578385"); // 1
    Leg_29_set.insert("LegPool_t_1853578385");
    Leg_29.add_attribute("Dated", "LegDatedDate_t_1407360607"); // 1
    Leg_29_set.insert("LegDatedDate_t_1407360607");
    Leg_29.add_attribute("CSetMo", "1200896645"); // 1
    Leg_29_set.insert("1200896645");
    Leg_29.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1490892447"); // 1
    Leg_29_set.insert("LegInterestAccrualDate_t_1490892447");
    Leg_29.add_attribute("PutCall", "1616388578"); // 1
    Leg_29_set.insert("1616388578");
    Leg_29.add_attribute("LegOptionRatio", "14703505.380000"); // 1
    Leg_29_set.insert("14703505.380000");
    Leg_29.add_attribute("Px", "4298776.660000"); // 1
    Leg_29_set.insert("4298776.660000");
    all_values.push_back(Leg_29_set);
    all_compo_names.insert("Leg_29_set");

    {
      xml_element LegAID_29{"LegAID"};
      multiset<string> LegAID_29_set;
      LegAID_29.add_attribute("SecAltID", "LegSecurityAltID_t_1221186468"); // 2
      LegAID_29_set.insert("LegSecurityAltID_t_1221186468");
      LegAID_29.add_attribute("SecAltIDSrc", "H"); // 2
      LegAID_29_set.insert("H");
      all_values.push_back(LegAID_29_set);
      all_compo_names.insert("LegAID_29_set");

      Leg_29.add_element(LegAID_29);
    }
    elt.add_element(Leg_29);
  } // end Leg
  { // Leg
    xml_element Leg_30{"Leg"};
    multiset<string> Leg_30_set;
    Leg_30.add_attribute("Sym", "LegSymbol_t_2146093704"); // 1
    Leg_30_set.insert("LegSymbol_t_2146093704");
    Leg_30.add_attribute("Sfx", "CD"); // 1
    Leg_30_set.insert("CD");
    Leg_30.add_attribute("ID", "LegSecurityID_t_238516089"); // 1
    Leg_30_set.insert("LegSecurityID_t_238516089");
    Leg_30.add_attribute("Src", "2"); // 1
    Leg_30_set.insert("2");
    Leg_30.add_attribute("Prod", "3"); // 1
    Leg_30_set.insert("3");
    Leg_30.add_attribute("CFI", "LegCFICode_t_519041098"); // 1
    Leg_30_set.insert("LegCFICode_t_519041098");
    Leg_30.add_attribute("SecTyp", "CB"); // 1
    Leg_30_set.insert("CB");
    Leg_30.add_attribute("SecSubTyp", "LegSecuritySubType_t_1090780908"); // 1
    Leg_30_set.insert("LegSecuritySubType_t_1090780908");
    Leg_30.add_attribute("MMY", "1486848520"); // 1
    Leg_30_set.insert("1486848520");
    Leg_30.add_attribute("Mat", "LegMaturityDate_t_345886421"); // 1
    Leg_30_set.insert("LegMaturityDate_t_345886421");
    Leg_30.add_attribute("MatTm", "502008082"); // 1
    Leg_30_set.insert("502008082");
    Leg_30.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1971341889"); // 1
    Leg_30_set.insert("LegCouponPaymentDate_t_1971341889");
    Leg_30.add_attribute("Issued", "LegIssueDate_t_1436096829"); // 1
    Leg_30_set.insert("LegIssueDate_t_1436096829");
    Leg_30.add_attribute("RepoCollSecTyp", "1752961089"); // 1
    Leg_30_set.insert("1752961089");
    Leg_30.add_attribute("RepoTrm", "231156134"); // 1
    Leg_30_set.insert("231156134");
    Leg_30.add_attribute("RepoRt", "3831206.360000"); // 1
    Leg_30_set.insert("3831206.360000");
    Leg_30.add_attribute("Fctr", "11419043.870000"); // 1
    Leg_30_set.insert("11419043.870000");
    Leg_30.add_attribute("CrdRtg", "LegCreditRating_t_642746313"); // 1
    Leg_30_set.insert("LegCreditRating_t_642746313");
    Leg_30.add_attribute("Rgstry", "LegInstrRegistry_t_1314443367"); // 1
    Leg_30_set.insert("LegInstrRegistry_t_1314443367");
    Leg_30.add_attribute("Ctry", "105830655"); // 1
    Leg_30_set.insert("105830655");
    Leg_30.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1497043671"); // 1
    Leg_30_set.insert("LegStateOrProvinceOfIssue_t_1497043671");
    Leg_30.add_attribute("Lcl", "LegLocaleOfIssue_t_1490256796"); // 1
    Leg_30_set.insert("LegLocaleOfIssue_t_1490256796");
    Leg_30.add_attribute("Redeem", "LegRedemptionDate_t_1959409040"); // 1
    Leg_30_set.insert("LegRedemptionDate_t_1959409040");
    Leg_30.add_attribute("Strk", "7569206.300000"); // 1
    Leg_30_set.insert("7569206.300000");
    Leg_30.add_attribute("StrkCcy", "JPY"); // 1
    Leg_30_set.insert("JPY");
    Leg_30.add_attribute("OptA", "225825561"); // 1
    Leg_30_set.insert("225825561");
    Leg_30.add_attribute("Cmult", "20140203.310000"); // 1
    Leg_30_set.insert("20140203.310000");
    Leg_30.add_attribute("MultTyp", "2"); // 1
    Leg_30_set.insert("2");
    Leg_30.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_30_set.insert("4");
    Leg_30.add_attribute("UOM", "MMBtu"); // 1
    Leg_30_set.insert("MMBtu");
    Leg_30.add_attribute("UOMQty", "17313055.620000"); // 1
    Leg_30_set.insert("17313055.620000");
    Leg_30.add_attribute("PxUOM", "Alw"); // 1
    Leg_30_set.insert("Alw");
    Leg_30.add_attribute("PxUOMQty", "12413378.070000"); // 1
    Leg_30_set.insert("12413378.070000");
    Leg_30.add_attribute("TmUnit", "D"); // 1
    Leg_30_set.insert("D");
    Leg_30.add_attribute("ExerStyle", "2"); // 1
    Leg_30_set.insert("2");
    Leg_30.add_attribute("CpnRt", "17603789.050000"); // 1
    Leg_30_set.insert("17603789.050000");
    Leg_30.add_attribute("Exch", "LegSecurityExchange_t_1942877430"); // 1
    Leg_30_set.insert("LegSecurityExchange_t_1942877430");
    Leg_30.add_attribute("Issr", "LegIssuer_t_1375144814"); // 1
    Leg_30_set.insert("LegIssuer_t_1375144814");
    Leg_30.add_attribute("EncLegIssrLen", "1099743777"); // 1
    Leg_30_set.insert("1099743777");
    Leg_30.add_attribute("EncLegIssr", "EncodedLegIssuer_t_141280204"); // 1
    Leg_30_set.insert("EncodedLegIssuer_t_141280204");
    Leg_30.add_attribute("Desc", "LegSecurityDesc_t_1877152897"); // 1
    Leg_30_set.insert("LegSecurityDesc_t_1877152897");
    Leg_30.add_attribute("EncLegSecDescLen", "923602019"); // 1
    Leg_30_set.insert("923602019");
    Leg_30.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1577377033"); // 1
    Leg_30_set.insert("EncodedLegSecurityDesc_t_1577377033");
    Leg_30.add_attribute("RatioQty", "14826303.380000"); // 1
    Leg_30_set.insert("14826303.380000");
    Leg_30.add_attribute("Side", "A"); // 1
    Leg_30_set.insert("A");
    Leg_30.add_attribute("Ccy", "USD"); // 1
    Leg_30_set.insert("USD");
    Leg_30.add_attribute("Pool", "LegPool_t_1797504467"); // 1
    Leg_30_set.insert("LegPool_t_1797504467");
    Leg_30.add_attribute("Dated", "LegDatedDate_t_1127457388"); // 1
    Leg_30_set.insert("LegDatedDate_t_1127457388");
    Leg_30.add_attribute("CSetMo", "582881733"); // 1
    Leg_30_set.insert("582881733");
    Leg_30.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1147064490"); // 1
    Leg_30_set.insert("LegInterestAccrualDate_t_1147064490");
    Leg_30.add_attribute("PutCall", "470230536"); // 1
    Leg_30_set.insert("470230536");
    Leg_30.add_attribute("LegOptionRatio", "3948071.260000"); // 1
    Leg_30_set.insert("3948071.260000");
    Leg_30.add_attribute("Px", "19039851.210000"); // 1
    Leg_30_set.insert("19039851.210000");
    all_values.push_back(Leg_30_set);
    all_compo_names.insert("Leg_30_set");

    {
      xml_element LegAID_30{"LegAID"};
      multiset<string> LegAID_30_set;
      LegAID_30.add_attribute("SecAltID", "LegSecurityAltID_t_1013900330"); // 2
      LegAID_30_set.insert("LegSecurityAltID_t_1013900330");
      LegAID_30.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_30_set.insert("5");
      all_values.push_back(LegAID_30_set);
      all_compo_names.insert("LegAID_30_set");

      Leg_30.add_element(LegAID_30);
    }
    elt.add_element(Leg_30);
  } // end Leg
  { // Leg
    xml_element Leg_31{"Leg"};
    multiset<string> Leg_31_set;
    Leg_31.add_attribute("Sym", "LegSymbol_t_2129810682"); // 1
    Leg_31_set.insert("LegSymbol_t_2129810682");
    Leg_31.add_attribute("Sfx", "WI"); // 1
    Leg_31_set.insert("WI");
    Leg_31.add_attribute("ID", "LegSecurityID_t_1282836824"); // 1
    Leg_31_set.insert("LegSecurityID_t_1282836824");
    Leg_31.add_attribute("Src", "A"); // 1
    Leg_31_set.insert("A");
    Leg_31.add_attribute("Prod", "12"); // 1
    Leg_31_set.insert("12");
    Leg_31.add_attribute("CFI", "LegCFICode_t_866658739"); // 1
    Leg_31_set.insert("LegCFICode_t_866658739");
    Leg_31.add_attribute("SecTyp", "RVLV"); // 1
    Leg_31_set.insert("RVLV");
    Leg_31.add_attribute("SecSubTyp", "LegSecuritySubType_t_977112890"); // 1
    Leg_31_set.insert("LegSecuritySubType_t_977112890");
    Leg_31.add_attribute("MMY", "79278832"); // 1
    Leg_31_set.insert("79278832");
    Leg_31.add_attribute("Mat", "LegMaturityDate_t_539008203"); // 1
    Leg_31_set.insert("LegMaturityDate_t_539008203");
    Leg_31.add_attribute("MatTm", "590008147"); // 1
    Leg_31_set.insert("590008147");
    Leg_31.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2022156263"); // 1
    Leg_31_set.insert("LegCouponPaymentDate_t_2022156263");
    Leg_31.add_attribute("Issued", "LegIssueDate_t_1914153017"); // 1
    Leg_31_set.insert("LegIssueDate_t_1914153017");
    Leg_31.add_attribute("RepoCollSecTyp", "1689751925"); // 1
    Leg_31_set.insert("1689751925");
    Leg_31.add_attribute("RepoTrm", "15952819"); // 1
    Leg_31_set.insert("15952819");
    Leg_31.add_attribute("RepoRt", "16438222.660000"); // 1
    Leg_31_set.insert("16438222.660000");
    Leg_31.add_attribute("Fctr", "4658702.960000"); // 1
    Leg_31_set.insert("4658702.960000");
    Leg_31.add_attribute("CrdRtg", "LegCreditRating_t_1593329852"); // 1
    Leg_31_set.insert("LegCreditRating_t_1593329852");
    Leg_31.add_attribute("Rgstry", "LegInstrRegistry_t_978968957"); // 1
    Leg_31_set.insert("LegInstrRegistry_t_978968957");
    Leg_31.add_attribute("Ctry", "1620628449"); // 1
    Leg_31_set.insert("1620628449");
    Leg_31.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1406343873"); // 1
    Leg_31_set.insert("LegStateOrProvinceOfIssue_t_1406343873");
    Leg_31.add_attribute("Lcl", "LegLocaleOfIssue_t_1456020035"); // 1
    Leg_31_set.insert("LegLocaleOfIssue_t_1456020035");
    Leg_31.add_attribute("Redeem", "LegRedemptionDate_t_1270649268"); // 1
    Leg_31_set.insert("LegRedemptionDate_t_1270649268");
    Leg_31.add_attribute("Strk", "3863176.130000"); // 1
    Leg_31_set.insert("3863176.130000");
    Leg_31.add_attribute("StrkCcy", "CAN"); // 1
    Leg_31_set.insert("CAN");
    Leg_31.add_attribute("OptA", "856548150"); // 1
    Leg_31_set.insert("856548150");
    Leg_31.add_attribute("Cmult", "2862252.460000"); // 1
    Leg_31_set.insert("2862252.460000");
    Leg_31.add_attribute("MultTyp", "0"); // 1
    Leg_31_set.insert("0");
    Leg_31.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_31_set.insert("0");
    Leg_31.add_attribute("UOM", "MMbbl"); // 1
    Leg_31_set.insert("MMbbl");
    Leg_31.add_attribute("UOMQty", "90586.180000"); // 1
    Leg_31_set.insert("90586.180000");
    Leg_31.add_attribute("PxUOM", "lbs"); // 1
    Leg_31_set.insert("lbs");
    Leg_31.add_attribute("PxUOMQty", "11192033.890000"); // 1
    Leg_31_set.insert("11192033.890000");
    Leg_31.add_attribute("TmUnit", "S"); // 1
    Leg_31_set.insert("S");
    Leg_31.add_attribute("ExerStyle", "0"); // 1
    Leg_31_set.insert("0");
    Leg_31.add_attribute("CpnRt", "19858621.280000"); // 1
    Leg_31_set.insert("19858621.280000");
    Leg_31.add_attribute("Exch", "LegSecurityExchange_t_1693041978"); // 1
    Leg_31_set.insert("LegSecurityExchange_t_1693041978");
    Leg_31.add_attribute("Issr", "LegIssuer_t_1316289818"); // 1
    Leg_31_set.insert("LegIssuer_t_1316289818");
    Leg_31.add_attribute("EncLegIssrLen", "2065140960"); // 1
    Leg_31_set.insert("2065140960");
    Leg_31.add_attribute("EncLegIssr", "EncodedLegIssuer_t_84566533"); // 1
    Leg_31_set.insert("EncodedLegIssuer_t_84566533");
    Leg_31.add_attribute("Desc", "LegSecurityDesc_t_1906297966"); // 1
    Leg_31_set.insert("LegSecurityDesc_t_1906297966");
    Leg_31.add_attribute("EncLegSecDescLen", "1939813575"); // 1
    Leg_31_set.insert("1939813575");
    Leg_31.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1998719551"); // 1
    Leg_31_set.insert("EncodedLegSecurityDesc_t_1998719551");
    Leg_31.add_attribute("RatioQty", "14485662.430000"); // 1
    Leg_31_set.insert("14485662.430000");
    Leg_31.add_attribute("Side", "B"); // 1
    Leg_31_set.insert("B");
    Leg_31.add_attribute("Ccy", "CHF"); // 1
    Leg_31_set.insert("CHF");
    Leg_31.add_attribute("Pool", "LegPool_t_1401612598"); // 1
    Leg_31_set.insert("LegPool_t_1401612598");
    Leg_31.add_attribute("Dated", "LegDatedDate_t_326543478"); // 1
    Leg_31_set.insert("LegDatedDate_t_326543478");
    Leg_31.add_attribute("CSetMo", "1387581340"); // 1
    Leg_31_set.insert("1387581340");
    Leg_31.add_attribute("IntAcrl", "LegInterestAccrualDate_t_660472823"); // 1
    Leg_31_set.insert("LegInterestAccrualDate_t_660472823");
    Leg_31.add_attribute("PutCall", "1782563513"); // 1
    Leg_31_set.insert("1782563513");
    Leg_31.add_attribute("LegOptionRatio", "5107469.610000"); // 1
    Leg_31_set.insert("5107469.610000");
    Leg_31.add_attribute("Px", "10467904.370000"); // 1
    Leg_31_set.insert("10467904.370000");
    all_values.push_back(Leg_31_set);
    all_compo_names.insert("Leg_31_set");

    {
      xml_element LegAID_31{"LegAID"};
      multiset<string> LegAID_31_set;
      LegAID_31.add_attribute("SecAltID", "LegSecurityAltID_t_1673981634"); // 2
      LegAID_31_set.insert("LegSecurityAltID_t_1673981634");
      LegAID_31.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_31_set.insert("J");
      all_values.push_back(LegAID_31_set);
      all_compo_names.insert("LegAID_31_set");

      Leg_31.add_element(LegAID_31);
    }
    elt.add_element(Leg_31);
  } // end Leg
  { // OrdQty
    xml_element OrdQty_4{"OrdQty"};
    multiset<string> OrdQty_4_set;
    OrdQty_4.add_attribute("Qty", "19033385.870000"); // 1
    OrdQty_4_set.insert("19033385.870000");
    OrdQty_4.add_attribute("Cash", "19602068.800000"); // 1
    OrdQty_4_set.insert("19602068.800000");
    OrdQty_4.add_attribute("Pct", "8077086.560000"); // 1
    OrdQty_4_set.insert("8077086.560000");
    OrdQty_4.add_attribute("RndDir", "2"); // 1
    OrdQty_4_set.insert("2");
    OrdQty_4.add_attribute("RndMod", "17965734.450000"); // 1
    OrdQty_4_set.insert("17965734.450000");
    all_values.push_back(OrdQty_4_set);
    all_compo_names.insert("OrdQty_4_set");

    elt.add_element(OrdQty_4);
  } // end OrdQty
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
