#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Advertisement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Advertisement_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Adv" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Advertisement_message_t_0;
  elt.add_attribute("AdvId", "AdvId_t_585850830"); // 0
  Advertisement_message_t_0.insert("AdvId_t_585850830");
  elt.add_attribute("AdvTransTyp", "R"); // 0
  Advertisement_message_t_0.insert("R");
  elt.add_attribute("AdvRefID", "AdvRefID_t_706897679"); // 0
  Advertisement_message_t_0.insert("AdvRefID_t_706897679");
  elt.add_attribute("AdvSide", "T"); // 0
  Advertisement_message_t_0.insert("T");
  elt.add_attribute("Qty", "8506171.850000"); // 0
  Advertisement_message_t_0.insert("8506171.850000");
  elt.add_attribute("QtyTyp", "2"); // 0
  Advertisement_message_t_0.insert("2");
  elt.add_attribute("Px", "534231.350000"); // 0
  Advertisement_message_t_0.insert("534231.350000");
  elt.add_attribute("Ccy", "CHF"); // 0
  Advertisement_message_t_0.insert("CHF");
  elt.add_attribute("TrdDt", "TradeDate_t_342897362"); // 0
  Advertisement_message_t_0.insert("TradeDate_t_342897362");
  elt.add_attribute("TxnTm", "TransactTime_t_5334563"); // 0
  Advertisement_message_t_0.insert("TransactTime_t_5334563");
  elt.add_attribute("Txt", "Text_t_286618046"); // 0
  Advertisement_message_t_0.insert("Text_t_286618046");
  elt.add_attribute("EncTxtLen", "1478024903"); // 0
  Advertisement_message_t_0.insert("1478024903");
  elt.add_attribute("EncTxt", "EncodedText_t_1819516184"); // 0
  Advertisement_message_t_0.insert("EncodedText_t_1819516184");
  elt.add_attribute("URL", "URLLink_t_1602040183"); // 0
  Advertisement_message_t_0.insert("URLLink_t_1602040183");
  elt.add_attribute("LastMkt", "LastMkt_t_1997752889"); // 0
  Advertisement_message_t_0.insert("LastMkt_t_1997752889");
  elt.add_attribute("SesID", "2"); // 0
  Advertisement_message_t_0.insert("2");
  elt.add_attribute("SesSub", "5"); // 0
  Advertisement_message_t_0.insert("5");
  all_values.push_back(Advertisement_message_t_0);
  all_compo_names.insert("Advertisement_message_t");

  { // Hdr
    xml_element Hdr_1{"Hdr"};
    multiset<string> Hdr_1_set;
    Hdr_1.add_attribute("SeqNum", "1898285142"); // 1
    Hdr_1_set.insert("1898285142");
    Hdr_1.add_attribute("SID", "SenderCompID_t_1642806607"); // 1
    Hdr_1_set.insert("SenderCompID_t_1642806607");
    Hdr_1.add_attribute("TID", "TargetCompID_t_2104538312"); // 1
    Hdr_1_set.insert("TargetCompID_t_2104538312");
    Hdr_1.add_attribute("OBID", "OnBehalfOfCompID_t_889451507"); // 1
    Hdr_1_set.insert("OnBehalfOfCompID_t_889451507");
    Hdr_1.add_attribute("D2ID", "DeliverToCompID_t_1221176534"); // 1
    Hdr_1_set.insert("DeliverToCompID_t_1221176534");
    Hdr_1.add_attribute("SSub", "SenderSubID_t_1495896761"); // 1
    Hdr_1_set.insert("SenderSubID_t_1495896761");
    Hdr_1.add_attribute("SLoc", "SenderLocationID_t_1094663821"); // 1
    Hdr_1_set.insert("SenderLocationID_t_1094663821");
    Hdr_1.add_attribute("TSub", "TargetSubID_t_387232474"); // 1
    Hdr_1_set.insert("TargetSubID_t_387232474");
    Hdr_1.add_attribute("TLoc", "TargetLocationID_t_1376888737"); // 1
    Hdr_1_set.insert("TargetLocationID_t_1376888737");
    Hdr_1.add_attribute("OBSub", "OnBehalfOfSubID_t_2016545366"); // 1
    Hdr_1_set.insert("OnBehalfOfSubID_t_2016545366");
    Hdr_1.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1234777206"); // 1
    Hdr_1_set.insert("OnBehalfOfLocationID_t_1234777206");
    Hdr_1.add_attribute("D2Sub", "DeliverToSubID_t_81065094"); // 1
    Hdr_1_set.insert("DeliverToSubID_t_81065094");
    Hdr_1.add_attribute("D2Loc", "DeliverToLocationID_t_1279344425"); // 1
    Hdr_1_set.insert("DeliverToLocationID_t_1279344425");
    Hdr_1.add_attribute("PosDup", "Y"); // 1
    Hdr_1_set.insert("Y");
    Hdr_1.add_attribute("PosRsnd", "Y"); // 1
    Hdr_1_set.insert("Y");
    Hdr_1.add_attribute("Snt", "SendingTime_t_1986242105"); // 1
    Hdr_1_set.insert("SendingTime_t_1986242105");
    Hdr_1.add_attribute("OrigSnt", "OrigSendingTime_t_732595519"); // 1
    Hdr_1_set.insert("OrigSendingTime_t_732595519");
    Hdr_1.add_attribute("MsgEncd", "MessageEncoding_t_196190451"); // 1
    Hdr_1_set.insert("MessageEncoding_t_196190451");
    all_values.push_back(Hdr_1_set);
    all_compo_names.insert("Hdr_1_set");

    {
      xml_element Hop_1{"Hop"};
      multiset<string> Hop_1_set;
      Hop_1.add_attribute("ID", "HopCompID_t_1454072786"); // 2
      Hop_1_set.insert("HopCompID_t_1454072786");
      Hop_1.add_attribute("Ref", "786018654"); // 2
      Hop_1_set.insert("786018654");
      Hop_1.add_attribute("Snt", "HopSendingTime_t_1328959098"); // 2
      Hop_1_set.insert("HopSendingTime_t_1328959098");
      all_values.push_back(Hop_1_set);
      all_compo_names.insert("Hop_1_set");

      Hdr_1.add_element(Hop_1);
    }
    elt.add_element(Hdr_1);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_1{"Instrmt"};
    multiset<string> Instrmt_1_set;
    Instrmt_1.add_attribute("Sym", "Symbol_t_1883690663"); // 1
    Instrmt_1_set.insert("Symbol_t_1883690663");
    Instrmt_1.add_attribute("Sfx", "CD"); // 1
    Instrmt_1_set.insert("CD");
    Instrmt_1.add_attribute("ID", "SecurityID_t_1334293661"); // 1
    Instrmt_1_set.insert("SecurityID_t_1334293661");
    Instrmt_1.add_attribute("Src", "J"); // 1
    Instrmt_1_set.insert("J");
    Instrmt_1.add_attribute("Prod", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("ProdCmplx", "ProductComplex_t_1006326198"); // 1
    Instrmt_1_set.insert("ProductComplex_t_1006326198");
    Instrmt_1.add_attribute("SecGrp", "SecurityGroup_t_1624865245"); // 1
    Instrmt_1_set.insert("SecurityGroup_t_1624865245");
    Instrmt_1.add_attribute("CFI", "CFICode_t_309726512"); // 1
    Instrmt_1_set.insert("CFICode_t_309726512");
    Instrmt_1.add_attribute("SecTyp", "CP"); // 1
    Instrmt_1_set.insert("CP");
    Instrmt_1.add_attribute("SubTyp", "SecuritySubType_t_1962882362"); // 1
    Instrmt_1_set.insert("SecuritySubType_t_1962882362");
    Instrmt_1.add_attribute("MMY", "60528006"); // 1
    Instrmt_1_set.insert("60528006");
    Instrmt_1.add_attribute("MatDt", "MaturityDate_t_1385718613"); // 1
    Instrmt_1_set.insert("MaturityDate_t_1385718613");
    Instrmt_1.add_attribute("MatTm", "1919937027"); // 1
    Instrmt_1_set.insert("1919937027");
    Instrmt_1.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_949979513"); // 1
    Instrmt_1_set.insert("SettleOnOpenFlag_t_949979513");
    Instrmt_1.add_attribute("AsgnMeth", "459411499"); // 1
    Instrmt_1_set.insert("459411499");
    Instrmt_1.add_attribute("Status", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("CpnPmt", "CouponPaymentDate_t_2044643334"); // 1
    Instrmt_1_set.insert("CouponPaymentDate_t_2044643334");
    Instrmt_1.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_1_set.insert("MR");
    Instrmt_1.add_attribute("Snrty", "SB"); // 1
    Instrmt_1_set.insert("SB");
    Instrmt_1.add_attribute("NotlPctOut", "19137050.530000"); // 1
    Instrmt_1_set.insert("19137050.530000");
    Instrmt_1.add_attribute("OrigNotlPctOut", "20814211.800000"); // 1
    Instrmt_1_set.insert("20814211.800000");
    Instrmt_1.add_attribute("AttchPnt", "5788203.230000"); // 1
    Instrmt_1_set.insert("5788203.230000");
    Instrmt_1.add_attribute("DetchPnt", "10455658.300000"); // 1
    Instrmt_1_set.insert("10455658.300000");
    Instrmt_1.add_attribute("Issued", "IssueDate_t_1754565569"); // 1
    Instrmt_1_set.insert("IssueDate_t_1754565569");
    Instrmt_1.add_attribute("RepoCollSecTyp", "2071877237"); // 1
    Instrmt_1_set.insert("2071877237");
    Instrmt_1.add_attribute("RepoTrm", "884324287"); // 1
    Instrmt_1_set.insert("884324287");
    Instrmt_1.add_attribute("RepoRt", "3396774.400000"); // 1
    Instrmt_1_set.insert("3396774.400000");
    Instrmt_1.add_attribute("Fctr", "1205840.400000"); // 1
    Instrmt_1_set.insert("1205840.400000");
    Instrmt_1.add_attribute("CrdRtg", "CreditRating_t_190913426"); // 1
    Instrmt_1_set.insert("CreditRating_t_190913426");
    Instrmt_1.add_attribute("Rgstry", "InstrRegistry_t_1125696094"); // 1
    Instrmt_1_set.insert("InstrRegistry_t_1125696094");
    Instrmt_1.add_attribute("IssuCtry", "1449543138"); // 1
    Instrmt_1_set.insert("1449543138");
    Instrmt_1.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2074604089"); // 1
    Instrmt_1_set.insert("StateOrProvinceOfIssue_t_2074604089");
    Instrmt_1.add_attribute("Lcl", "LocaleOfIssue_t_107128462"); // 1
    Instrmt_1_set.insert("LocaleOfIssue_t_107128462");
    Instrmt_1.add_attribute("Redeem", "RedemptionDate_t_636353152"); // 1
    Instrmt_1_set.insert("RedemptionDate_t_636353152");
    Instrmt_1.add_attribute("StrkPx", "20974291.510000"); // 1
    Instrmt_1_set.insert("20974291.510000");
    Instrmt_1.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_1_set.insert("JPY");
    Instrmt_1.add_attribute("StrkMult", "15748107.490000"); // 1
    Instrmt_1_set.insert("15748107.490000");
    Instrmt_1.add_attribute("StrkValu", "8763122.450000"); // 1
    Instrmt_1_set.insert("8763122.450000");
    Instrmt_1.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_1_set.insert("4");
    Instrmt_1.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_1_set.insert("4");
    Instrmt_1.add_attribute("StrkPxBndryPrcsn", "9368402.510000"); // 1
    Instrmt_1_set.insert("9368402.510000");
    Instrmt_1.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("OptAt", "1162662842"); // 1
    Instrmt_1_set.insert("1162662842");
    Instrmt_1.add_attribute("Mult", "18868197.640000"); // 1
    Instrmt_1_set.insert("18868197.640000");
    Instrmt_1.add_attribute("MultTyp", "0"); // 1
    Instrmt_1_set.insert("0");
    Instrmt_1.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_1_set.insert("0");
    Instrmt_1.add_attribute("MinPxIncr", "17839794.510000"); // 1
    Instrmt_1_set.insert("17839794.510000");
    Instrmt_1.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1929881793"); // 1
    Instrmt_1_set.insert("MinPriceIncrementAmount_t_1929881793");
    Instrmt_1.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_1_set.insert("oz_tr");
    Instrmt_1.add_attribute("UOMQty", "15502008.560000"); // 1
    Instrmt_1_set.insert("15502008.560000");
    Instrmt_1.add_attribute("PxUOM", "t"); // 1
    Instrmt_1_set.insert("t");
    Instrmt_1.add_attribute("PxUOMQty", "13601048.880000"); // 1
    Instrmt_1_set.insert("13601048.880000");
    Instrmt_1.add_attribute("SettlMeth", "C"); // 1
    Instrmt_1_set.insert("C");
    Instrmt_1.add_attribute("ExerStyle", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("OptPayAmt", "OptPayoutAmount_t_1332607326"); // 1
    Instrmt_1_set.insert("OptPayoutAmount_t_1332607326");
    Instrmt_1.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_1_set.insert("INT");
    Instrmt_1.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_1_set.insert("FUTDA");
    Instrmt_1.add_attribute("ListMeth", "0"); // 1
    Instrmt_1_set.insert("0");
    Instrmt_1.add_attribute("CapPx", "7887911.320000"); // 1
    Instrmt_1_set.insert("7887911.320000");
    Instrmt_1.add_attribute("FlrPx", "7071420.070000"); // 1
    Instrmt_1_set.insert("7071420.070000");
    Instrmt_1.add_attribute("PutCall", "1"); // 1
    Instrmt_1_set.insert("1");
    Instrmt_1.add_attribute("FlexInd", "true"); // 1
    Instrmt_1_set.insert("true");
    Instrmt_1.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_1_set.insert("false");
    Instrmt_1.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_1_set.insert("Yr");
    Instrmt_1.add_attribute("CpnRt", "14625053.270000"); // 1
    Instrmt_1_set.insert("14625053.270000");
    Instrmt_1.add_attribute("Exch", "SecurityExchange_t_838690861"); // 1
    Instrmt_1_set.insert("SecurityExchange_t_838690861");
    Instrmt_1.add_attribute("PosLmt", "827913798"); // 1
    Instrmt_1_set.insert("827913798");
    Instrmt_1.add_attribute("NTPosLmt", "191333924"); // 1
    Instrmt_1_set.insert("191333924");
    Instrmt_1.add_attribute("Issr", "Issuer_t_76798569"); // 1
    Instrmt_1_set.insert("Issuer_t_76798569");
    Instrmt_1.add_attribute("EncIssrLen", "70639613"); // 1
    Instrmt_1_set.insert("70639613");
    Instrmt_1.add_attribute("EncIssr", "EncodedIssuer_t_1128174175"); // 1
    Instrmt_1_set.insert("EncodedIssuer_t_1128174175");
    Instrmt_1.add_attribute("Desc", "SecurityDesc_t_700624889"); // 1
    Instrmt_1_set.insert("SecurityDesc_t_700624889");
    Instrmt_1.add_attribute("EncSecDescLen", "1233302456"); // 1
    Instrmt_1_set.insert("1233302456");
    Instrmt_1.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_867510291"); // 1
    Instrmt_1_set.insert("EncodedSecurityDesc_t_867510291");
    Instrmt_1.add_attribute("Pool", "Pool_t_1783862709"); // 1
    Instrmt_1_set.insert("Pool_t_1783862709");
    Instrmt_1.add_attribute("CSetMo", "1516831791"); // 1
    Instrmt_1_set.insert("1516831791");
    Instrmt_1.add_attribute("CPPgm", "2"); // 1
    Instrmt_1_set.insert("2");
    Instrmt_1.add_attribute("CPRegT", "CPRegType_t_1566260854"); // 1
    Instrmt_1_set.insert("CPRegType_t_1566260854");
    Instrmt_1.add_attribute("Dated", "DatedDate_t_150632707"); // 1
    Instrmt_1_set.insert("DatedDate_t_150632707");
    Instrmt_1.add_attribute("IntAcrl", "InterestAccrualDate_t_2054206950"); // 1
    Instrmt_1_set.insert("InterestAccrualDate_t_2054206950");
    all_values.push_back(Instrmt_1_set);
    all_compo_names.insert("Instrmt_1_set");

    {
      xml_element AID_1{"AID"};
      multiset<string> AID_1_set;
      AID_1.add_attribute("AltID", "SecurityAltID_t_1282596531"); // 2
      AID_1_set.insert("SecurityAltID_t_1282596531");
      AID_1.add_attribute("AltIDSrc", "G"); // 2
      AID_1_set.insert("G");
      all_values.push_back(AID_1_set);
      all_compo_names.insert("AID_1_set");

      Instrmt_1.add_element(AID_1);
    }
    {
      xml_element SecXML_1{"SecXML"};
      multiset<string> SecXML_1_set;
      SecXML_1.add_attribute("Schema", "SecurityXMLSchema_t_355006341"); // 2
      SecXML_1_set.insert("SecurityXMLSchema_t_355006341");
      all_values.push_back(SecXML_1_set);
      all_compo_names.insert("SecXML_1_set");

      Instrmt_1.add_element(SecXML_1);
    }
    {
      xml_element Evnt_1{"Evnt"};
      multiset<string> Evnt_1_set;
      Evnt_1.add_attribute("EventTyp", "9"); // 2
      Evnt_1_set.insert("9");
      Evnt_1.add_attribute("Dt", "EventDate_t_647752424"); // 2
      Evnt_1_set.insert("EventDate_t_647752424");
      Evnt_1.add_attribute("Tm", "EventTime_t_1687613667"); // 2
      Evnt_1_set.insert("EventTime_t_1687613667");
      Evnt_1.add_attribute("Px", "2691091.670000"); // 2
      Evnt_1_set.insert("2691091.670000");
      Evnt_1.add_attribute("Txt", "EventText_t_2052834941"); // 2
      Evnt_1_set.insert("EventText_t_2052834941");
      all_values.push_back(Evnt_1_set);
      all_compo_names.insert("Evnt_1_set");

      Instrmt_1.add_element(Evnt_1);
    }
    {
      xml_element Pty_4{"Pty"};
      multiset<string> Pty_4_set;
      Pty_4.add_attribute("ID", "InstrumentPartyID_t_1063650771"); // 2
      Pty_4_set.insert("InstrumentPartyID_t_1063650771");
      Pty_4.add_attribute("Src", "G"); // 2
      Pty_4_set.insert("G");
      Pty_4.add_attribute("R", "79"); // 2
      Pty_4_set.insert("79");
      all_values.push_back(Pty_4_set);
      all_compo_names.insert("Pty_4_set");

      {
        xml_element Sub_4{"Sub"};
        multiset<string> Sub_4_set;
        Sub_4.add_attribute("ID", "InstrumentPartySubID_t_366808316"); // 3
        Sub_4_set.insert("InstrumentPartySubID_t_366808316");
        Sub_4.add_attribute("Typ", "22"); // 3
        Sub_4_set.insert("22");
        all_values.push_back(Sub_4_set);
        all_compo_names.insert("Sub_4_set");

        Pty_4.add_element(Sub_4);
      }
      Instrmt_1.add_element(Pty_4);
    }
    {
      xml_element CmplxEvnt_1{"CmplxEvnt"};
      multiset<string> CmplxEvnt_1_set;
      CmplxEvnt_1.add_attribute("Typ", "2"); // 2
      CmplxEvnt_1_set.insert("2");
      CmplxEvnt_1.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1767395013"); // 2
      CmplxEvnt_1_set.insert("ComplexOptPayoutAmount_t_1767395013");
      CmplxEvnt_1.add_attribute("Px", "12688415.720000"); // 2
      CmplxEvnt_1_set.insert("12688415.720000");
      CmplxEvnt_1.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_1_set.insert("5");
      CmplxEvnt_1.add_attribute("PxBndryPrcsn", "4478251.630000"); // 2
      CmplxEvnt_1_set.insert("4478251.630000");
      CmplxEvnt_1.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_1_set.insert("2");
      CmplxEvnt_1.add_attribute("Cond", "2"); // 2
      CmplxEvnt_1_set.insert("2");
      all_values.push_back(CmplxEvnt_1_set);
      all_compo_names.insert("CmplxEvnt_1_set");

      {
        xml_element EvntDts_1{"EvntDts"};
        multiset<string> EvntDts_1_set;
        EvntDts_1.add_attribute("StartDt", "ComplexEventStartDate_t_518464777"); // 3
        EvntDts_1_set.insert("ComplexEventStartDate_t_518464777");
        EvntDts_1.add_attribute("EndDt", "ComplexEventEndDate_t_440866023"); // 3
        EvntDts_1_set.insert("ComplexEventEndDate_t_440866023");
        all_values.push_back(EvntDts_1_set);
        all_compo_names.insert("EvntDts_1_set");

        {
          xml_element EvntTms_1{"EvntTms"};
          multiset<string> EvntTms_1_set;
          EvntTms_1.add_attribute("StartTm", "1424619132"); // 4
          EvntTms_1_set.insert("1424619132");
          EvntTms_1.add_attribute("EndTm", "1751767233"); // 4
          EvntTms_1_set.insert("1751767233");
          all_values.push_back(EvntTms_1_set);
          all_compo_names.insert("EvntTms_1_set");

          EvntDts_1.add_element(EvntTms_1);
        }
        CmplxEvnt_1.add_element(EvntDts_1);
      }
      Instrmt_1.add_element(CmplxEvnt_1);
    }
    elt.add_element(Instrmt_1);
  } // end Instrmt
  { // Leg
    xml_element Leg_0{"Leg"};
    multiset<string> Leg_0_set;
    Leg_0.add_attribute("Sym", "LegSymbol_t_1060998193"); // 1
    Leg_0_set.insert("LegSymbol_t_1060998193");
    Leg_0.add_attribute("Sfx", "CD"); // 1
    Leg_0_set.insert("CD");
    Leg_0.add_attribute("ID", "LegSecurityID_t_1812382409"); // 1
    Leg_0_set.insert("LegSecurityID_t_1812382409");
    Leg_0.add_attribute("Src", "G"); // 1
    Leg_0_set.insert("G");
    Leg_0.add_attribute("Prod", "5"); // 1
    Leg_0_set.insert("5");
    Leg_0.add_attribute("CFI", "LegCFICode_t_1719105711"); // 1
    Leg_0_set.insert("LegCFICode_t_1719105711");
    Leg_0.add_attribute("SecTyp", "MF"); // 1
    Leg_0_set.insert("MF");
    Leg_0.add_attribute("SecSubTyp", "LegSecuritySubType_t_635002031"); // 1
    Leg_0_set.insert("LegSecuritySubType_t_635002031");
    Leg_0.add_attribute("MMY", "2074112052"); // 1
    Leg_0_set.insert("2074112052");
    Leg_0.add_attribute("Mat", "LegMaturityDate_t_220902411"); // 1
    Leg_0_set.insert("LegMaturityDate_t_220902411");
    Leg_0.add_attribute("MatTm", "1282754455"); // 1
    Leg_0_set.insert("1282754455");
    Leg_0.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1614242071"); // 1
    Leg_0_set.insert("LegCouponPaymentDate_t_1614242071");
    Leg_0.add_attribute("Issued", "LegIssueDate_t_490011578"); // 1
    Leg_0_set.insert("LegIssueDate_t_490011578");
    Leg_0.add_attribute("RepoCollSecTyp", "1188105749"); // 1
    Leg_0_set.insert("1188105749");
    Leg_0.add_attribute("RepoTrm", "530409194"); // 1
    Leg_0_set.insert("530409194");
    Leg_0.add_attribute("RepoRt", "15479118.770000"); // 1
    Leg_0_set.insert("15479118.770000");
    Leg_0.add_attribute("Fctr", "18005990.500000"); // 1
    Leg_0_set.insert("18005990.500000");
    Leg_0.add_attribute("CrdRtg", "LegCreditRating_t_897217511"); // 1
    Leg_0_set.insert("LegCreditRating_t_897217511");
    Leg_0.add_attribute("Rgstry", "LegInstrRegistry_t_1354248122"); // 1
    Leg_0_set.insert("LegInstrRegistry_t_1354248122");
    Leg_0.add_attribute("Ctry", "1609103862"); // 1
    Leg_0_set.insert("1609103862");
    Leg_0.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_517128876"); // 1
    Leg_0_set.insert("LegStateOrProvinceOfIssue_t_517128876");
    Leg_0.add_attribute("Lcl", "LegLocaleOfIssue_t_475606046"); // 1
    Leg_0_set.insert("LegLocaleOfIssue_t_475606046");
    Leg_0.add_attribute("Redeem", "LegRedemptionDate_t_108815888"); // 1
    Leg_0_set.insert("LegRedemptionDate_t_108815888");
    Leg_0.add_attribute("Strk", "9649540.400000"); // 1
    Leg_0_set.insert("9649540.400000");
    Leg_0.add_attribute("StrkCcy", "CHF"); // 1
    Leg_0_set.insert("CHF");
    Leg_0.add_attribute("OptA", "1483418817"); // 1
    Leg_0_set.insert("1483418817");
    Leg_0.add_attribute("Cmult", "2291639.170000"); // 1
    Leg_0_set.insert("2291639.170000");
    Leg_0.add_attribute("MultTyp", "2"); // 1
    Leg_0_set.insert("2");
    Leg_0.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_0_set.insert("2");
    Leg_0.add_attribute("UOM", "lbs"); // 1
    Leg_0_set.insert("lbs");
    Leg_0.add_attribute("UOMQty", "11709438.090000"); // 1
    Leg_0_set.insert("11709438.090000");
    Leg_0.add_attribute("PxUOM", "MWh"); // 1
    Leg_0_set.insert("MWh");
    Leg_0.add_attribute("PxUOMQty", "12024389.930000"); // 1
    Leg_0_set.insert("12024389.930000");
    Leg_0.add_attribute("TmUnit", "Yr"); // 1
    Leg_0_set.insert("Yr");
    Leg_0.add_attribute("ExerStyle", "2"); // 1
    Leg_0_set.insert("2");
    Leg_0.add_attribute("CpnRt", "7740610.560000"); // 1
    Leg_0_set.insert("7740610.560000");
    Leg_0.add_attribute("Exch", "LegSecurityExchange_t_1265607491"); // 1
    Leg_0_set.insert("LegSecurityExchange_t_1265607491");
    Leg_0.add_attribute("Issr", "LegIssuer_t_1968084244"); // 1
    Leg_0_set.insert("LegIssuer_t_1968084244");
    Leg_0.add_attribute("EncLegIssrLen", "700689461"); // 1
    Leg_0_set.insert("700689461");
    Leg_0.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1486509903"); // 1
    Leg_0_set.insert("EncodedLegIssuer_t_1486509903");
    Leg_0.add_attribute("Desc", "LegSecurityDesc_t_1103355052"); // 1
    Leg_0_set.insert("LegSecurityDesc_t_1103355052");
    Leg_0.add_attribute("EncLegSecDescLen", "167447884"); // 1
    Leg_0_set.insert("167447884");
    Leg_0.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1976521481"); // 1
    Leg_0_set.insert("EncodedLegSecurityDesc_t_1976521481");
    Leg_0.add_attribute("RatioQty", "1439771.530000"); // 1
    Leg_0_set.insert("1439771.530000");
    Leg_0.add_attribute("Side", "8"); // 1
    Leg_0_set.insert("8");
    Leg_0.add_attribute("Ccy", "CAN"); // 1
    Leg_0_set.insert("CAN");
    Leg_0.add_attribute("Pool", "LegPool_t_1595074590"); // 1
    Leg_0_set.insert("LegPool_t_1595074590");
    Leg_0.add_attribute("Dated", "LegDatedDate_t_583714185"); // 1
    Leg_0_set.insert("LegDatedDate_t_583714185");
    Leg_0.add_attribute("CSetMo", "1406196417"); // 1
    Leg_0_set.insert("1406196417");
    Leg_0.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2112203466"); // 1
    Leg_0_set.insert("LegInterestAccrualDate_t_2112203466");
    Leg_0.add_attribute("PutCall", "1059320232"); // 1
    Leg_0_set.insert("1059320232");
    Leg_0.add_attribute("LegOptionRatio", "15150123.060000"); // 1
    Leg_0_set.insert("15150123.060000");
    Leg_0.add_attribute("Px", "9296738.580000"); // 1
    Leg_0_set.insert("9296738.580000");
    all_values.push_back(Leg_0_set);
    all_compo_names.insert("Leg_0_set");

    {
      xml_element LegAID_0{"LegAID"};
      multiset<string> LegAID_0_set;
      LegAID_0.add_attribute("SecAltID", "LegSecurityAltID_t_847618126"); // 2
      LegAID_0_set.insert("LegSecurityAltID_t_847618126");
      LegAID_0.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_0_set.insert("E");
      all_values.push_back(LegAID_0_set);
      all_compo_names.insert("LegAID_0_set");

      Leg_0.add_element(LegAID_0);
    }
    elt.add_element(Leg_0);
  } // end Leg
  { // Undly
    xml_element Undly_0{"Undly"};
    multiset<string> Undly_0_set;
    Undly_0.add_attribute("Sym", "UnderlyingSymbol_t_1076782044"); // 1
    Undly_0_set.insert("UnderlyingSymbol_t_1076782044");
    Undly_0.add_attribute("Sfx", "WI"); // 1
    Undly_0_set.insert("WI");
    Undly_0.add_attribute("ID", "UnderlyingSecurityID_t_1353311429"); // 1
    Undly_0_set.insert("UnderlyingSecurityID_t_1353311429");
    Undly_0.add_attribute("Src", "F"); // 1
    Undly_0_set.insert("F");
    Undly_0.add_attribute("Prod", "9"); // 1
    Undly_0_set.insert("9");
    Undly_0.add_attribute("CFI", "UnderlyingCFICode_t_1414645559"); // 1
    Undly_0_set.insert("UnderlyingCFICode_t_1414645559");
    Undly_0.add_attribute("SecTyp", "RVLV"); // 1
    Undly_0_set.insert("RVLV");
    Undly_0.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_984463776"); // 1
    Undly_0_set.insert("UnderlyingSecuritySubType_t_984463776");
    Undly_0.add_attribute("MMY", "600244125"); // 1
    Undly_0_set.insert("600244125");
    Undly_0.add_attribute("Mat", "UnderlyingMaturityDate_t_295855029"); // 1
    Undly_0_set.insert("UnderlyingMaturityDate_t_295855029");
    Undly_0.add_attribute("MatTm", "102587619"); // 1
    Undly_0_set.insert("102587619");
    Undly_0.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_420844721"); // 1
    Undly_0_set.insert("UnderlyingCouponPaymentDate_t_420844721");
    Undly_0.add_attribute("RestrctTyp", "MM"); // 1
    Undly_0_set.insert("MM");
    Undly_0.add_attribute("Snrty", "SD"); // 1
    Undly_0_set.insert("SD");
    Undly_0.add_attribute("NotlPctOut", "15241997.730000"); // 1
    Undly_0_set.insert("15241997.730000");
    Undly_0.add_attribute("OrigNotlPctOut", "11639923.750000"); // 1
    Undly_0_set.insert("11639923.750000");
    Undly_0.add_attribute("AttchPnt", "14181353.560000"); // 1
    Undly_0_set.insert("14181353.560000");
    Undly_0.add_attribute("DetchPnt", "16681769.260000"); // 1
    Undly_0_set.insert("16681769.260000");
    Undly_0.add_attribute("Issued", "UnderlyingIssueDate_t_1861849454"); // 1
    Undly_0_set.insert("UnderlyingIssueDate_t_1861849454");
    Undly_0.add_attribute("RepoCollSecTyp", "647601419"); // 1
    Undly_0_set.insert("647601419");
    Undly_0.add_attribute("RepoTrm", "1465269481"); // 1
    Undly_0_set.insert("1465269481");
    Undly_0.add_attribute("RepoRt", "13094403.960000"); // 1
    Undly_0_set.insert("13094403.960000");
    Undly_0.add_attribute("Fctr", "12313156.040000"); // 1
    Undly_0_set.insert("12313156.040000");
    Undly_0.add_attribute("CrdRtg", "UnderlyingCreditRating_t_723982251"); // 1
    Undly_0_set.insert("UnderlyingCreditRating_t_723982251");
    Undly_0.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1274160214"); // 1
    Undly_0_set.insert("UnderlyingInstrRegistry_t_1274160214");
    Undly_0.add_attribute("Ctry", "143152188"); // 1
    Undly_0_set.insert("143152188");
    Undly_0.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_91510909"); // 1
    Undly_0_set.insert("UnderlyingStateOrProvinceOfIssue_t_91510909");
    Undly_0.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_56350425"); // 1
    Undly_0_set.insert("UnderlyingLocaleOfIssue_t_56350425");
    Undly_0.add_attribute("Redeem", "UnderlyingRedemptionDate_t_990770315"); // 1
    Undly_0_set.insert("UnderlyingRedemptionDate_t_990770315");
    Undly_0.add_attribute("StrkPx", "2918496.980000"); // 1
    Undly_0_set.insert("2918496.980000");
    Undly_0.add_attribute("StrkCcy", "CAN"); // 1
    Undly_0_set.insert("CAN");
    Undly_0.add_attribute("OptA", "602134104"); // 1
    Undly_0_set.insert("602134104");
    Undly_0.add_attribute("Mult", "16752708.820000"); // 1
    Undly_0_set.insert("16752708.820000");
    Undly_0.add_attribute("MultTyp", "0"); // 1
    Undly_0_set.insert("0");
    Undly_0.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_0_set.insert("4");
    Undly_0.add_attribute("UOM", "Gal"); // 1
    Undly_0_set.insert("Gal");
    Undly_0.add_attribute("UOMQty", "20561849.600000"); // 1
    Undly_0_set.insert("20561849.600000");
    Undly_0.add_attribute("PxUOM", "Bu"); // 1
    Undly_0_set.insert("Bu");
    Undly_0.add_attribute("PxUOMQty", "15426769.180000"); // 1
    Undly_0_set.insert("15426769.180000");
    Undly_0.add_attribute("TmUnit", "D"); // 1
    Undly_0_set.insert("D");
    Undly_0.add_attribute("ExerStyle", "2"); // 1
    Undly_0_set.insert("2");
    Undly_0.add_attribute("CpnRt", "19635216.400000"); // 1
    Undly_0_set.insert("19635216.400000");
    Undly_0.add_attribute("Exch", "UnderlyingSecurityExchange_t_1201100832"); // 1
    Undly_0_set.insert("UnderlyingSecurityExchange_t_1201100832");
    Undly_0.add_attribute("Issr", "UnderlyingIssuer_t_464543941"); // 1
    Undly_0_set.insert("UnderlyingIssuer_t_464543941");
    Undly_0.add_attribute("EncUndIssrLen", "1340237765"); // 1
    Undly_0_set.insert("1340237765");
    Undly_0.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_217609559"); // 1
    Undly_0_set.insert("EncodedUnderlyingIssuer_t_217609559");
    Undly_0.add_attribute("Desc", "UnderlyingSecurityDesc_t_1882679297"); // 1
    Undly_0_set.insert("UnderlyingSecurityDesc_t_1882679297");
    Undly_0.add_attribute("EncUndSecDescLen", "860931044"); // 1
    Undly_0_set.insert("860931044");
    Undly_0.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2079459013"); // 1
    Undly_0_set.insert("EncodedUnderlyingSecurityDesc_t_2079459013");
    Undly_0.add_attribute("CPPgm", "UnderlyingCPProgram_t_382797068"); // 1
    Undly_0_set.insert("UnderlyingCPProgram_t_382797068");
    Undly_0.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_178716877"); // 1
    Undly_0_set.insert("UnderlyingCPRegType_t_178716877");
    Undly_0.add_attribute("AllocPct", "12414157.610000"); // 1
    Undly_0_set.insert("12414157.610000");
    Undly_0.add_attribute("Ccy", "JPY"); // 1
    Undly_0_set.insert("JPY");
    Undly_0.add_attribute("Qty", "3680923.270000"); // 1
    Undly_0_set.insert("3680923.270000");
    Undly_0.add_attribute("SettlTyp", "5"); // 1
    Undly_0_set.insert("5");
    Undly_0.add_attribute("CashAmt", "UnderlyingCashAmount_t_994210037"); // 1
    Undly_0_set.insert("UnderlyingCashAmount_t_994210037");
    Undly_0.add_attribute("CashTyp", "FIXED"); // 1
    Undly_0_set.insert("FIXED");
    Undly_0.add_attribute("Px", "6005515.280000"); // 1
    Undly_0_set.insert("6005515.280000");
    Undly_0.add_attribute("DirtPx", "12860597.360000"); // 1
    Undly_0_set.insert("12860597.360000");
    Undly_0.add_attribute("EndPx", "7464022.050000"); // 1
    Undly_0_set.insert("7464022.050000");
    Undly_0.add_attribute("StartVal", "UnderlyingStartValue_t_520620239"); // 1
    Undly_0_set.insert("UnderlyingStartValue_t_520620239");
    Undly_0.add_attribute("CurVal", "UnderlyingCurrentValue_t_1888193840"); // 1
    Undly_0_set.insert("UnderlyingCurrentValue_t_1888193840");
    Undly_0.add_attribute("EndVal", "UnderlyingEndValue_t_274189439"); // 1
    Undly_0_set.insert("UnderlyingEndValue_t_274189439");
    Undly_0.add_attribute("AdjQty", "9075275.780000"); // 1
    Undly_0_set.insert("9075275.780000");
    Undly_0.add_attribute("FxRate", "18240725.110000"); // 1
    Undly_0_set.insert("18240725.110000");
    Undly_0.add_attribute("FxRateCalc", "M"); // 1
    Undly_0_set.insert("M");
    Undly_0.add_attribute("CapValu", "UnderlyingCapValue_t_816228890"); // 1
    Undly_0_set.insert("UnderlyingCapValue_t_816228890");
    Undly_0.add_attribute("SetMeth", "UnderlyingSettlMethod_t_596931310"); // 1
    Undly_0_set.insert("UnderlyingSettlMethod_t_596931310");
    Undly_0.add_attribute("PutCall", "611815503"); // 1
    Undly_0_set.insert("611815503");
    all_values.push_back(Undly_0_set);
    all_compo_names.insert("Undly_0_set");

    {
      xml_element UndAID_0{"UndAID"};
      multiset<string> UndAID_0_set;
      UndAID_0.add_attribute("AltID", "UnderlyingSecurityAltID_t_1020785231"); // 2
      UndAID_0_set.insert("UnderlyingSecurityAltID_t_1020785231");
      UndAID_0.add_attribute("AltIDSrc", "D"); // 2
      UndAID_0_set.insert("D");
      all_values.push_back(UndAID_0_set);
      all_compo_names.insert("UndAID_0_set");

      Undly_0.add_element(UndAID_0);
    }
    {
      xml_element Stip_0{"Stip"};
      multiset<string> Stip_0_set;
      Stip_0.add_attribute("Typ", "WAL"); // 2
      Stip_0_set.insert("WAL");
      Stip_0.add_attribute("Val", "UnderlyingStipValue_t_74402415"); // 2
      Stip_0_set.insert("UnderlyingStipValue_t_74402415");
      all_values.push_back(Stip_0_set);
      all_compo_names.insert("Stip_0_set");

      Undly_0.add_element(Stip_0);
    }
    {
      xml_element Pty_5{"Pty"};
      multiset<string> Pty_5_set;
      Pty_5.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2084405317"); // 2
      Pty_5_set.insert("UnderlyingInstrumentPartyID_t_2084405317");
      Pty_5.add_attribute("Src", "5"); // 2
      Pty_5_set.insert("5");
      Pty_5.add_attribute("R", "11"); // 2
      Pty_5_set.insert("11");
      all_values.push_back(Pty_5_set);
      all_compo_names.insert("Pty_5_set");

      {
        xml_element Sub_5{"Sub"};
        multiset<string> Sub_5_set;
        Sub_5.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1819600966"); // 3
        Sub_5_set.insert("UnderlyingInstrumentPartySubID_t_1819600966");
        Sub_5.add_attribute("Typ", "24"); // 3
        Sub_5_set.insert("24");
        all_values.push_back(Sub_5_set);
        all_compo_names.insert("Sub_5_set");

        Pty_5.add_element(Sub_5);
      }
      Undly_0.add_element(Pty_5);
    }
    elt.add_element(Undly_0);
  } // end Undly
  { // Undly
    xml_element Undly_1{"Undly"};
    multiset<string> Undly_1_set;
    Undly_1.add_attribute("Sym", "UnderlyingSymbol_t_223987339"); // 1
    Undly_1_set.insert("UnderlyingSymbol_t_223987339");
    Undly_1.add_attribute("Sfx", "CD"); // 1
    Undly_1_set.insert("CD");
    Undly_1.add_attribute("ID", "UnderlyingSecurityID_t_660255534"); // 1
    Undly_1_set.insert("UnderlyingSecurityID_t_660255534");
    Undly_1.add_attribute("Src", "J"); // 1
    Undly_1_set.insert("J");
    Undly_1.add_attribute("Prod", "8"); // 1
    Undly_1_set.insert("8");
    Undly_1.add_attribute("CFI", "UnderlyingCFICode_t_1562954662"); // 1
    Undly_1_set.insert("UnderlyingCFICode_t_1562954662");
    Undly_1.add_attribute("SecTyp", "IRS"); // 1
    Undly_1_set.insert("IRS");
    Undly_1.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1278808272"); // 1
    Undly_1_set.insert("UnderlyingSecuritySubType_t_1278808272");
    Undly_1.add_attribute("MMY", "409681052"); // 1
    Undly_1_set.insert("409681052");
    Undly_1.add_attribute("Mat", "UnderlyingMaturityDate_t_110454532"); // 1
    Undly_1_set.insert("UnderlyingMaturityDate_t_110454532");
    Undly_1.add_attribute("MatTm", "1879359800"); // 1
    Undly_1_set.insert("1879359800");
    Undly_1.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1695740788"); // 1
    Undly_1_set.insert("UnderlyingCouponPaymentDate_t_1695740788");
    Undly_1.add_attribute("RestrctTyp", "MR"); // 1
    Undly_1_set.insert("MR");
    Undly_1.add_attribute("Snrty", "SB"); // 1
    Undly_1_set.insert("SB");
    Undly_1.add_attribute("NotlPctOut", "14364509.800000"); // 1
    Undly_1_set.insert("14364509.800000");
    Undly_1.add_attribute("OrigNotlPctOut", "11310461.760000"); // 1
    Undly_1_set.insert("11310461.760000");
    Undly_1.add_attribute("AttchPnt", "11600239.690000"); // 1
    Undly_1_set.insert("11600239.690000");
    Undly_1.add_attribute("DetchPnt", "11130398.430000"); // 1
    Undly_1_set.insert("11130398.430000");
    Undly_1.add_attribute("Issued", "UnderlyingIssueDate_t_200184761"); // 1
    Undly_1_set.insert("UnderlyingIssueDate_t_200184761");
    Undly_1.add_attribute("RepoCollSecTyp", "1976252859"); // 1
    Undly_1_set.insert("1976252859");
    Undly_1.add_attribute("RepoTrm", "1709971153"); // 1
    Undly_1_set.insert("1709971153");
    Undly_1.add_attribute("RepoRt", "8120002.640000"); // 1
    Undly_1_set.insert("8120002.640000");
    Undly_1.add_attribute("Fctr", "8495544.420000"); // 1
    Undly_1_set.insert("8495544.420000");
    Undly_1.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1182348881"); // 1
    Undly_1_set.insert("UnderlyingCreditRating_t_1182348881");
    Undly_1.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1239853759"); // 1
    Undly_1_set.insert("UnderlyingInstrRegistry_t_1239853759");
    Undly_1.add_attribute("Ctry", "923956858"); // 1
    Undly_1_set.insert("923956858");
    Undly_1.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1119270551"); // 1
    Undly_1_set.insert("UnderlyingStateOrProvinceOfIssue_t_1119270551");
    Undly_1.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_860461371"); // 1
    Undly_1_set.insert("UnderlyingLocaleOfIssue_t_860461371");
    Undly_1.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1215968832"); // 1
    Undly_1_set.insert("UnderlyingRedemptionDate_t_1215968832");
    Undly_1.add_attribute("StrkPx", "7913878.690000"); // 1
    Undly_1_set.insert("7913878.690000");
    Undly_1.add_attribute("StrkCcy", "GBP"); // 1
    Undly_1_set.insert("GBP");
    Undly_1.add_attribute("OptA", "846302256"); // 1
    Undly_1_set.insert("846302256");
    Undly_1.add_attribute("Mult", "20022555.620000"); // 1
    Undly_1_set.insert("20022555.620000");
    Undly_1.add_attribute("MultTyp", "0"); // 1
    Undly_1_set.insert("0");
    Undly_1.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_1_set.insert("2");
    Undly_1.add_attribute("UOM", "MMbbl"); // 1
    Undly_1_set.insert("MMbbl");
    Undly_1.add_attribute("UOMQty", "4438874.040000"); // 1
    Undly_1_set.insert("4438874.040000");
    Undly_1.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_1_set.insert("oz_tr");
    Undly_1.add_attribute("PxUOMQty", "18274076.280000"); // 1
    Undly_1_set.insert("18274076.280000");
    Undly_1.add_attribute("TmUnit", "H"); // 1
    Undly_1_set.insert("H");
    Undly_1.add_attribute("ExerStyle", "1"); // 1
    Undly_1_set.insert("1");
    Undly_1.add_attribute("CpnRt", "13756647.680000"); // 1
    Undly_1_set.insert("13756647.680000");
    Undly_1.add_attribute("Exch", "UnderlyingSecurityExchange_t_1411198674"); // 1
    Undly_1_set.insert("UnderlyingSecurityExchange_t_1411198674");
    Undly_1.add_attribute("Issr", "UnderlyingIssuer_t_1631026482"); // 1
    Undly_1_set.insert("UnderlyingIssuer_t_1631026482");
    Undly_1.add_attribute("EncUndIssrLen", "664632100"); // 1
    Undly_1_set.insert("664632100");
    Undly_1.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_394761203"); // 1
    Undly_1_set.insert("EncodedUnderlyingIssuer_t_394761203");
    Undly_1.add_attribute("Desc", "UnderlyingSecurityDesc_t_643566803"); // 1
    Undly_1_set.insert("UnderlyingSecurityDesc_t_643566803");
    Undly_1.add_attribute("EncUndSecDescLen", "1777671943"); // 1
    Undly_1_set.insert("1777671943");
    Undly_1.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_594945964"); // 1
    Undly_1_set.insert("EncodedUnderlyingSecurityDesc_t_594945964");
    Undly_1.add_attribute("CPPgm", "UnderlyingCPProgram_t_472336014"); // 1
    Undly_1_set.insert("UnderlyingCPProgram_t_472336014");
    Undly_1.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1340159448"); // 1
    Undly_1_set.insert("UnderlyingCPRegType_t_1340159448");
    Undly_1.add_attribute("AllocPct", "14069462.280000"); // 1
    Undly_1_set.insert("14069462.280000");
    Undly_1.add_attribute("Ccy", "JPY"); // 1
    Undly_1_set.insert("JPY");
    Undly_1.add_attribute("Qty", "4993163.390000"); // 1
    Undly_1_set.insert("4993163.390000");
    Undly_1.add_attribute("SettlTyp", "5"); // 1
    Undly_1_set.insert("5");
    Undly_1.add_attribute("CashAmt", "UnderlyingCashAmount_t_1494295233"); // 1
    Undly_1_set.insert("UnderlyingCashAmount_t_1494295233");
    Undly_1.add_attribute("CashTyp", "FIXED"); // 1
    Undly_1_set.insert("FIXED");
    Undly_1.add_attribute("Px", "13143324.990000"); // 1
    Undly_1_set.insert("13143324.990000");
    Undly_1.add_attribute("DirtPx", "1381994.540000"); // 1
    Undly_1_set.insert("1381994.540000");
    Undly_1.add_attribute("EndPx", "5542940.900000"); // 1
    Undly_1_set.insert("5542940.900000");
    Undly_1.add_attribute("StartVal", "UnderlyingStartValue_t_606805023"); // 1
    Undly_1_set.insert("UnderlyingStartValue_t_606805023");
    Undly_1.add_attribute("CurVal", "UnderlyingCurrentValue_t_984501710"); // 1
    Undly_1_set.insert("UnderlyingCurrentValue_t_984501710");
    Undly_1.add_attribute("EndVal", "UnderlyingEndValue_t_409066004"); // 1
    Undly_1_set.insert("UnderlyingEndValue_t_409066004");
    Undly_1.add_attribute("AdjQty", "13646806.470000"); // 1
    Undly_1_set.insert("13646806.470000");
    Undly_1.add_attribute("FxRate", "13523473.770000"); // 1
    Undly_1_set.insert("13523473.770000");
    Undly_1.add_attribute("FxRateCalc", "D"); // 1
    Undly_1_set.insert("D");
    Undly_1.add_attribute("CapValu", "UnderlyingCapValue_t_1808568052"); // 1
    Undly_1_set.insert("UnderlyingCapValue_t_1808568052");
    Undly_1.add_attribute("SetMeth", "UnderlyingSettlMethod_t_851517668"); // 1
    Undly_1_set.insert("UnderlyingSettlMethod_t_851517668");
    Undly_1.add_attribute("PutCall", "1506716561"); // 1
    Undly_1_set.insert("1506716561");
    all_values.push_back(Undly_1_set);
    all_compo_names.insert("Undly_1_set");

    {
      xml_element UndAID_1{"UndAID"};
      multiset<string> UndAID_1_set;
      UndAID_1.add_attribute("AltID", "UnderlyingSecurityAltID_t_215426341"); // 2
      UndAID_1_set.insert("UnderlyingSecurityAltID_t_215426341");
      UndAID_1.add_attribute("AltIDSrc", "4"); // 2
      UndAID_1_set.insert("4");
      all_values.push_back(UndAID_1_set);
      all_compo_names.insert("UndAID_1_set");

      Undly_1.add_element(UndAID_1);
    }
    {
      xml_element Stip_1{"Stip"};
      multiset<string> Stip_1_set;
      Stip_1.add_attribute("Typ", "AUTOREINV"); // 2
      Stip_1_set.insert("AUTOREINV");
      Stip_1.add_attribute("Val", "UnderlyingStipValue_t_1626625015"); // 2
      Stip_1_set.insert("UnderlyingStipValue_t_1626625015");
      all_values.push_back(Stip_1_set);
      all_compo_names.insert("Stip_1_set");

      Undly_1.add_element(Stip_1);
    }
    {
      xml_element Pty_6{"Pty"};
      multiset<string> Pty_6_set;
      Pty_6.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1713590593"); // 2
      Pty_6_set.insert("UnderlyingInstrumentPartyID_t_1713590593");
      Pty_6.add_attribute("Src", "B"); // 2
      Pty_6_set.insert("B");
      Pty_6.add_attribute("R", "57"); // 2
      Pty_6_set.insert("57");
      all_values.push_back(Pty_6_set);
      all_compo_names.insert("Pty_6_set");

      {
        xml_element Sub_6{"Sub"};
        multiset<string> Sub_6_set;
        Sub_6.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_209673748"); // 3
        Sub_6_set.insert("UnderlyingInstrumentPartySubID_t_209673748");
        Sub_6.add_attribute("Typ", "13"); // 3
        Sub_6_set.insert("13");
        all_values.push_back(Sub_6_set);
        all_compo_names.insert("Sub_6_set");

        Pty_6.add_element(Sub_6);
      }
      Undly_1.add_element(Pty_6);
    }
    elt.add_element(Undly_1);
  } // end Undly
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
