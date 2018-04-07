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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DkTrd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DontKnowTradeDK_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_57474956"); // 0
  DontKnowTradeDK_message_t_0.insert("OrderID_t_57474956");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_120398622"); // 0
  DontKnowTradeDK_message_t_0.insert("SecondaryOrderID_t_120398622");
  elt.add_attribute("ExecID", "ExecID_t_1513209133"); // 0
  DontKnowTradeDK_message_t_0.insert("ExecID_t_1513209133");
  elt.add_attribute("DkRsn", "E"); // 0
  DontKnowTradeDK_message_t_0.insert("E");
  elt.add_attribute("Side", "3"); // 0
  DontKnowTradeDK_message_t_0.insert("3");
  elt.add_attribute("LastQty", "4155823.720000"); // 0
  DontKnowTradeDK_message_t_0.insert("4155823.720000");
  elt.add_attribute("LastPx", "15192208.680000"); // 0
  DontKnowTradeDK_message_t_0.insert("15192208.680000");
  elt.add_attribute("Txt", "Text_t_985417370"); // 0
  DontKnowTradeDK_message_t_0.insert("Text_t_985417370");
  elt.add_attribute("EncTxtLen", "353370957"); // 0
  DontKnowTradeDK_message_t_0.insert("353370957");
  elt.add_attribute("EncTxt", "EncodedText_t_1755594005"); // 0
  DontKnowTradeDK_message_t_0.insert("EncodedText_t_1755594005");
  all_values.push_back(DontKnowTradeDK_message_t_0);
  all_compo_names.insert("DontKnowTradeDK_message_t");

  { // Hdr
    xml_element Hdr_29{"Hdr"};
    multiset<string> Hdr_29_set;
    Hdr_29.add_attribute("SeqNum", "119202951"); // 1
    Hdr_29_set.insert("119202951");
    Hdr_29.add_attribute("SID", "SenderCompID_t_538787137"); // 1
    Hdr_29_set.insert("SenderCompID_t_538787137");
    Hdr_29.add_attribute("TID", "TargetCompID_t_1393332780"); // 1
    Hdr_29_set.insert("TargetCompID_t_1393332780");
    Hdr_29.add_attribute("OBID", "OnBehalfOfCompID_t_1549230143"); // 1
    Hdr_29_set.insert("OnBehalfOfCompID_t_1549230143");
    Hdr_29.add_attribute("D2ID", "DeliverToCompID_t_1034700328"); // 1
    Hdr_29_set.insert("DeliverToCompID_t_1034700328");
    Hdr_29.add_attribute("SSub", "SenderSubID_t_1288978335"); // 1
    Hdr_29_set.insert("SenderSubID_t_1288978335");
    Hdr_29.add_attribute("SLoc", "SenderLocationID_t_125983671"); // 1
    Hdr_29_set.insert("SenderLocationID_t_125983671");
    Hdr_29.add_attribute("TSub", "TargetSubID_t_184457323"); // 1
    Hdr_29_set.insert("TargetSubID_t_184457323");
    Hdr_29.add_attribute("TLoc", "TargetLocationID_t_1839573159"); // 1
    Hdr_29_set.insert("TargetLocationID_t_1839573159");
    Hdr_29.add_attribute("OBSub", "OnBehalfOfSubID_t_649687405"); // 1
    Hdr_29_set.insert("OnBehalfOfSubID_t_649687405");
    Hdr_29.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1432764616"); // 1
    Hdr_29_set.insert("OnBehalfOfLocationID_t_1432764616");
    Hdr_29.add_attribute("D2Sub", "DeliverToSubID_t_995935526"); // 1
    Hdr_29_set.insert("DeliverToSubID_t_995935526");
    Hdr_29.add_attribute("D2Loc", "DeliverToLocationID_t_1732654336"); // 1
    Hdr_29_set.insert("DeliverToLocationID_t_1732654336");
    Hdr_29.add_attribute("PosDup", "Y"); // 1
    Hdr_29_set.insert("Y");
    Hdr_29.add_attribute("PosRsnd", "N"); // 1
    Hdr_29_set.insert("N");
    Hdr_29.add_attribute("Snt", "SendingTime_t_621030443"); // 1
    Hdr_29_set.insert("SendingTime_t_621030443");
    Hdr_29.add_attribute("OrigSnt", "OrigSendingTime_t_1466172494"); // 1
    Hdr_29_set.insert("OrigSendingTime_t_1466172494");
    Hdr_29.add_attribute("MsgEncd", "MessageEncoding_t_1462340349"); // 1
    Hdr_29_set.insert("MessageEncoding_t_1462340349");
    all_values.push_back(Hdr_29_set);
    all_compo_names.insert("Hdr_29_set");

    {
      xml_element Hop_29{"Hop"};
      multiset<string> Hop_29_set;
      Hop_29.add_attribute("ID", "HopCompID_t_1558566263"); // 2
      Hop_29_set.insert("HopCompID_t_1558566263");
      Hop_29.add_attribute("Ref", "1122980997"); // 2
      Hop_29_set.insert("1122980997");
      Hop_29.add_attribute("Snt", "HopSendingTime_t_518745085"); // 2
      Hop_29_set.insert("HopSendingTime_t_518745085");
      all_values.push_back(Hop_29_set);
      all_compo_names.insert("Hop_29_set");

      Hdr_29.add_element(Hop_29);
    }
    elt.add_element(Hdr_29);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_22{"Instrmt"};
    multiset<string> Instrmt_22_set;
    Instrmt_22.add_attribute("Sym", "Symbol_t_1616041219"); // 1
    Instrmt_22_set.insert("Symbol_t_1616041219");
    Instrmt_22.add_attribute("Sfx", "CD"); // 1
    Instrmt_22_set.insert("CD");
    Instrmt_22.add_attribute("ID", "SecurityID_t_2031954218"); // 1
    Instrmt_22_set.insert("SecurityID_t_2031954218");
    Instrmt_22.add_attribute("Src", "D"); // 1
    Instrmt_22_set.insert("D");
    Instrmt_22.add_attribute("Prod", "4"); // 1
    Instrmt_22_set.insert("4");
    Instrmt_22.add_attribute("ProdCmplx", "ProductComplex_t_300052942"); // 1
    Instrmt_22_set.insert("ProductComplex_t_300052942");
    Instrmt_22.add_attribute("SecGrp", "SecurityGroup_t_65840928"); // 1
    Instrmt_22_set.insert("SecurityGroup_t_65840928");
    Instrmt_22.add_attribute("CFI", "CFICode_t_1262916144"); // 1
    Instrmt_22_set.insert("CFICode_t_1262916144");
    Instrmt_22.add_attribute("SecTyp", "TECP"); // 1
    Instrmt_22_set.insert("TECP");
    Instrmt_22.add_attribute("SubTyp", "SecuritySubType_t_1821434933"); // 1
    Instrmt_22_set.insert("SecuritySubType_t_1821434933");
    Instrmt_22.add_attribute("MMY", "1382119095"); // 1
    Instrmt_22_set.insert("1382119095");
    Instrmt_22.add_attribute("MatDt", "MaturityDate_t_1192211036"); // 1
    Instrmt_22_set.insert("MaturityDate_t_1192211036");
    Instrmt_22.add_attribute("MatTm", "1067284066"); // 1
    Instrmt_22_set.insert("1067284066");
    Instrmt_22.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_783865590"); // 1
    Instrmt_22_set.insert("SettleOnOpenFlag_t_783865590");
    Instrmt_22.add_attribute("AsgnMeth", "79427716"); // 1
    Instrmt_22_set.insert("79427716");
    Instrmt_22.add_attribute("Status", "2"); // 1
    Instrmt_22_set.insert("2");
    Instrmt_22.add_attribute("CpnPmt", "CouponPaymentDate_t_909849261"); // 1
    Instrmt_22_set.insert("CouponPaymentDate_t_909849261");
    Instrmt_22.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_22_set.insert("FR");
    Instrmt_22.add_attribute("Snrty", "SD"); // 1
    Instrmt_22_set.insert("SD");
    Instrmt_22.add_attribute("NotlPctOut", "15595366.660000"); // 1
    Instrmt_22_set.insert("15595366.660000");
    Instrmt_22.add_attribute("OrigNotlPctOut", "16966496.560000"); // 1
    Instrmt_22_set.insert("16966496.560000");
    Instrmt_22.add_attribute("AttchPnt", "8968037.910000"); // 1
    Instrmt_22_set.insert("8968037.910000");
    Instrmt_22.add_attribute("DetchPnt", "11447073.540000"); // 1
    Instrmt_22_set.insert("11447073.540000");
    Instrmt_22.add_attribute("Issued", "IssueDate_t_160928058"); // 1
    Instrmt_22_set.insert("IssueDate_t_160928058");
    Instrmt_22.add_attribute("RepoCollSecTyp", "1407673575"); // 1
    Instrmt_22_set.insert("1407673575");
    Instrmt_22.add_attribute("RepoTrm", "1765737798"); // 1
    Instrmt_22_set.insert("1765737798");
    Instrmt_22.add_attribute("RepoRt", "16271005.520000"); // 1
    Instrmt_22_set.insert("16271005.520000");
    Instrmt_22.add_attribute("Fctr", "7225302.760000"); // 1
    Instrmt_22_set.insert("7225302.760000");
    Instrmt_22.add_attribute("CrdRtg", "CreditRating_t_1176820413"); // 1
    Instrmt_22_set.insert("CreditRating_t_1176820413");
    Instrmt_22.add_attribute("Rgstry", "InstrRegistry_t_602597901"); // 1
    Instrmt_22_set.insert("InstrRegistry_t_602597901");
    Instrmt_22.add_attribute("IssuCtry", "1241275361"); // 1
    Instrmt_22_set.insert("1241275361");
    Instrmt_22.add_attribute("StPrv", "StateOrProvinceOfIssue_t_645377984"); // 1
    Instrmt_22_set.insert("StateOrProvinceOfIssue_t_645377984");
    Instrmt_22.add_attribute("Lcl", "LocaleOfIssue_t_1845977521"); // 1
    Instrmt_22_set.insert("LocaleOfIssue_t_1845977521");
    Instrmt_22.add_attribute("Redeem", "RedemptionDate_t_1125745931"); // 1
    Instrmt_22_set.insert("RedemptionDate_t_1125745931");
    Instrmt_22.add_attribute("StrkPx", "13394816.920000"); // 1
    Instrmt_22_set.insert("13394816.920000");
    Instrmt_22.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_22_set.insert("CHF");
    Instrmt_22.add_attribute("StrkMult", "14053226.200000"); // 1
    Instrmt_22_set.insert("14053226.200000");
    Instrmt_22.add_attribute("StrkValu", "12389087.910000"); // 1
    Instrmt_22_set.insert("12389087.910000");
    Instrmt_22.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_22_set.insert("1");
    Instrmt_22.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_22_set.insert("2");
    Instrmt_22.add_attribute("StrkPxBndryPrcsn", "4735442.380000"); // 1
    Instrmt_22_set.insert("4735442.380000");
    Instrmt_22.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_22_set.insert("1");
    Instrmt_22.add_attribute("OptAt", "2146557972"); // 1
    Instrmt_22_set.insert("2146557972");
    Instrmt_22.add_attribute("Mult", "12574098.290000"); // 1
    Instrmt_22_set.insert("12574098.290000");
    Instrmt_22.add_attribute("MultTyp", "0"); // 1
    Instrmt_22_set.insert("0");
    Instrmt_22.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_22_set.insert("2");
    Instrmt_22.add_attribute("MinPxIncr", "197754.420000"); // 1
    Instrmt_22_set.insert("197754.420000");
    Instrmt_22.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1467262917"); // 1
    Instrmt_22_set.insert("MinPriceIncrementAmount_t_1467262917");
    Instrmt_22.add_attribute("UOM", "Bbl"); // 1
    Instrmt_22_set.insert("Bbl");
    Instrmt_22.add_attribute("UOMQty", "15793121.090000"); // 1
    Instrmt_22_set.insert("15793121.090000");
    Instrmt_22.add_attribute("PxUOM", "tn"); // 1
    Instrmt_22_set.insert("tn");
    Instrmt_22.add_attribute("PxUOMQty", "10055251.330000"); // 1
    Instrmt_22_set.insert("10055251.330000");
    Instrmt_22.add_attribute("SettlMeth", "P"); // 1
    Instrmt_22_set.insert("P");
    Instrmt_22.add_attribute("ExerStyle", "2"); // 1
    Instrmt_22_set.insert("2");
    Instrmt_22.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_22_set.insert("3");
    Instrmt_22.add_attribute("OptPayAmt", "OptPayoutAmount_t_194789965"); // 1
    Instrmt_22_set.insert("OptPayoutAmount_t_194789965");
    Instrmt_22.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_22_set.insert("PCTPAR");
    Instrmt_22.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_22_set.insert("FUT");
    Instrmt_22.add_attribute("ListMeth", "0"); // 1
    Instrmt_22_set.insert("0");
    Instrmt_22.add_attribute("CapPx", "12595717.890000"); // 1
    Instrmt_22_set.insert("12595717.890000");
    Instrmt_22.add_attribute("FlrPx", "820370.490000"); // 1
    Instrmt_22_set.insert("820370.490000");
    Instrmt_22.add_attribute("PutCall", "0"); // 1
    Instrmt_22_set.insert("0");
    Instrmt_22.add_attribute("FlexInd", "true"); // 1
    Instrmt_22_set.insert("true");
    Instrmt_22.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_22_set.insert("true");
    Instrmt_22.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_22_set.insert("Mo");
    Instrmt_22.add_attribute("CpnRt", "9340583.100000"); // 1
    Instrmt_22_set.insert("9340583.100000");
    Instrmt_22.add_attribute("Exch", "SecurityExchange_t_486098205"); // 1
    Instrmt_22_set.insert("SecurityExchange_t_486098205");
    Instrmt_22.add_attribute("PosLmt", "466825379"); // 1
    Instrmt_22_set.insert("466825379");
    Instrmt_22.add_attribute("NTPosLmt", "25483453"); // 1
    Instrmt_22_set.insert("25483453");
    Instrmt_22.add_attribute("Issr", "Issuer_t_417837329"); // 1
    Instrmt_22_set.insert("Issuer_t_417837329");
    Instrmt_22.add_attribute("EncIssrLen", "1546099285"); // 1
    Instrmt_22_set.insert("1546099285");
    Instrmt_22.add_attribute("EncIssr", "EncodedIssuer_t_499027692"); // 1
    Instrmt_22_set.insert("EncodedIssuer_t_499027692");
    Instrmt_22.add_attribute("Desc", "SecurityDesc_t_1541787490"); // 1
    Instrmt_22_set.insert("SecurityDesc_t_1541787490");
    Instrmt_22.add_attribute("EncSecDescLen", "1545173609"); // 1
    Instrmt_22_set.insert("1545173609");
    Instrmt_22.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1756437521"); // 1
    Instrmt_22_set.insert("EncodedSecurityDesc_t_1756437521");
    Instrmt_22.add_attribute("Pool", "Pool_t_597681719"); // 1
    Instrmt_22_set.insert("Pool_t_597681719");
    Instrmt_22.add_attribute("CSetMo", "1753026686"); // 1
    Instrmt_22_set.insert("1753026686");
    Instrmt_22.add_attribute("CPPgm", "99"); // 1
    Instrmt_22_set.insert("99");
    Instrmt_22.add_attribute("CPRegT", "CPRegType_t_2064944636"); // 1
    Instrmt_22_set.insert("CPRegType_t_2064944636");
    Instrmt_22.add_attribute("Dated", "DatedDate_t_1861748029"); // 1
    Instrmt_22_set.insert("DatedDate_t_1861748029");
    Instrmt_22.add_attribute("IntAcrl", "InterestAccrualDate_t_1208041424"); // 1
    Instrmt_22_set.insert("InterestAccrualDate_t_1208041424");
    all_values.push_back(Instrmt_22_set);
    all_compo_names.insert("Instrmt_22_set");

    {
      xml_element AID_25{"AID"};
      multiset<string> AID_25_set;
      AID_25.add_attribute("AltID", "SecurityAltID_t_933889913"); // 2
      AID_25_set.insert("SecurityAltID_t_933889913");
      AID_25.add_attribute("AltIDSrc", "5"); // 2
      AID_25_set.insert("5");
      all_values.push_back(AID_25_set);
      all_compo_names.insert("AID_25_set");

      Instrmt_22.add_element(AID_25);
    }
    {
      xml_element SecXML_25{"SecXML"};
      multiset<string> SecXML_25_set;
      SecXML_25.add_attribute("Schema", "SecurityXMLSchema_t_1784577240"); // 2
      SecXML_25_set.insert("SecurityXMLSchema_t_1784577240");
      all_values.push_back(SecXML_25_set);
      all_compo_names.insert("SecXML_25_set");

      Instrmt_22.add_element(SecXML_25);
    }
    {
      xml_element Evnt_25{"Evnt"};
      multiset<string> Evnt_25_set;
      Evnt_25.add_attribute("EventTyp", "17"); // 2
      Evnt_25_set.insert("17");
      Evnt_25.add_attribute("Dt", "EventDate_t_985504575"); // 2
      Evnt_25_set.insert("EventDate_t_985504575");
      Evnt_25.add_attribute("Tm", "EventTime_t_1979367205"); // 2
      Evnt_25_set.insert("EventTime_t_1979367205");
      Evnt_25.add_attribute("Px", "6207371.360000"); // 2
      Evnt_25_set.insert("6207371.360000");
      Evnt_25.add_attribute("Txt", "EventText_t_1973749911"); // 2
      Evnt_25_set.insert("EventText_t_1973749911");
      all_values.push_back(Evnt_25_set);
      all_compo_names.insert("Evnt_25_set");

      Instrmt_22.add_element(Evnt_25);
    }
    {
      xml_element Pty_148{"Pty"};
      multiset<string> Pty_148_set;
      Pty_148.add_attribute("ID", "InstrumentPartyID_t_1203493936"); // 2
      Pty_148_set.insert("InstrumentPartyID_t_1203493936");
      Pty_148.add_attribute("Src", "I"); // 2
      Pty_148_set.insert("I");
      Pty_148.add_attribute("R", "33"); // 2
      Pty_148_set.insert("33");
      all_values.push_back(Pty_148_set);
      all_compo_names.insert("Pty_148_set");

      {
        xml_element Sub_148{"Sub"};
        multiset<string> Sub_148_set;
        Sub_148.add_attribute("ID", "InstrumentPartySubID_t_1072998650"); // 3
        Sub_148_set.insert("InstrumentPartySubID_t_1072998650");
        Sub_148.add_attribute("Typ", "12"); // 3
        Sub_148_set.insert("12");
        all_values.push_back(Sub_148_set);
        all_compo_names.insert("Sub_148_set");

        Pty_148.add_element(Sub_148);
      }
      Instrmt_22.add_element(Pty_148);
    }
    {
      xml_element CmplxEvnt_22{"CmplxEvnt"};
      multiset<string> CmplxEvnt_22_set;
      CmplxEvnt_22.add_attribute("Typ", "2"); // 2
      CmplxEvnt_22_set.insert("2");
      CmplxEvnt_22.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_134501409"); // 2
      CmplxEvnt_22_set.insert("ComplexOptPayoutAmount_t_134501409");
      CmplxEvnt_22.add_attribute("Px", "16249492.500000"); // 2
      CmplxEvnt_22_set.insert("16249492.500000");
      CmplxEvnt_22.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_22_set.insert("5");
      CmplxEvnt_22.add_attribute("PxBndryPrcsn", "6013267.880000"); // 2
      CmplxEvnt_22_set.insert("6013267.880000");
      CmplxEvnt_22.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_22_set.insert("2");
      CmplxEvnt_22.add_attribute("Cond", "1"); // 2
      CmplxEvnt_22_set.insert("1");
      all_values.push_back(CmplxEvnt_22_set);
      all_compo_names.insert("CmplxEvnt_22_set");

      {
        xml_element EvntDts_22{"EvntDts"};
        multiset<string> EvntDts_22_set;
        EvntDts_22.add_attribute("StartDt", "ComplexEventStartDate_t_2147426073"); // 3
        EvntDts_22_set.insert("ComplexEventStartDate_t_2147426073");
        EvntDts_22.add_attribute("EndDt", "ComplexEventEndDate_t_1976747"); // 3
        EvntDts_22_set.insert("ComplexEventEndDate_t_1976747");
        all_values.push_back(EvntDts_22_set);
        all_compo_names.insert("EvntDts_22_set");

        {
          xml_element EvntTms_22{"EvntTms"};
          multiset<string> EvntTms_22_set;
          EvntTms_22.add_attribute("StartTm", "1414325670"); // 4
          EvntTms_22_set.insert("1414325670");
          EvntTms_22.add_attribute("EndTm", "1545116034"); // 4
          EvntTms_22_set.insert("1545116034");
          all_values.push_back(EvntTms_22_set);
          all_compo_names.insert("EvntTms_22_set");

          EvntDts_22.add_element(EvntTms_22);
        }
        CmplxEvnt_22.add_element(EvntDts_22);
      }
      Instrmt_22.add_element(CmplxEvnt_22);
    }
    elt.add_element(Instrmt_22);
  } // end Instrmt
  { // Undly
    xml_element Undly_31{"Undly"};
    multiset<string> Undly_31_set;
    Undly_31.add_attribute("Sym", "UnderlyingSymbol_t_2012007389"); // 1
    Undly_31_set.insert("UnderlyingSymbol_t_2012007389");
    Undly_31.add_attribute("Sfx", "CD"); // 1
    Undly_31_set.insert("CD");
    Undly_31.add_attribute("ID", "UnderlyingSecurityID_t_1387143584"); // 1
    Undly_31_set.insert("UnderlyingSecurityID_t_1387143584");
    Undly_31.add_attribute("Src", "2"); // 1
    Undly_31_set.insert("2");
    Undly_31.add_attribute("Prod", "13"); // 1
    Undly_31_set.insert("13");
    Undly_31.add_attribute("CFI", "UnderlyingCFICode_t_447701360"); // 1
    Undly_31_set.insert("UnderlyingCFICode_t_447701360");
    Undly_31.add_attribute("SecTyp", "FOR"); // 1
    Undly_31_set.insert("FOR");
    Undly_31.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1584712968"); // 1
    Undly_31_set.insert("UnderlyingSecuritySubType_t_1584712968");
    Undly_31.add_attribute("MMY", "84794952"); // 1
    Undly_31_set.insert("84794952");
    Undly_31.add_attribute("Mat", "UnderlyingMaturityDate_t_679637892"); // 1
    Undly_31_set.insert("UnderlyingMaturityDate_t_679637892");
    Undly_31.add_attribute("MatTm", "422733895"); // 1
    Undly_31_set.insert("422733895");
    Undly_31.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2064162158"); // 1
    Undly_31_set.insert("UnderlyingCouponPaymentDate_t_2064162158");
    Undly_31.add_attribute("RestrctTyp", "FR"); // 1
    Undly_31_set.insert("FR");
    Undly_31.add_attribute("Snrty", "SB"); // 1
    Undly_31_set.insert("SB");
    Undly_31.add_attribute("NotlPctOut", "11201724.460000"); // 1
    Undly_31_set.insert("11201724.460000");
    Undly_31.add_attribute("OrigNotlPctOut", "10332003.060000"); // 1
    Undly_31_set.insert("10332003.060000");
    Undly_31.add_attribute("AttchPnt", "1573034.710000"); // 1
    Undly_31_set.insert("1573034.710000");
    Undly_31.add_attribute("DetchPnt", "456874.480000"); // 1
    Undly_31_set.insert("456874.480000");
    Undly_31.add_attribute("Issued", "UnderlyingIssueDate_t_1724091246"); // 1
    Undly_31_set.insert("UnderlyingIssueDate_t_1724091246");
    Undly_31.add_attribute("RepoCollSecTyp", "1273389765"); // 1
    Undly_31_set.insert("1273389765");
    Undly_31.add_attribute("RepoTrm", "180188857"); // 1
    Undly_31_set.insert("180188857");
    Undly_31.add_attribute("RepoRt", "12015568.480000"); // 1
    Undly_31_set.insert("12015568.480000");
    Undly_31.add_attribute("Fctr", "7280906.160000"); // 1
    Undly_31_set.insert("7280906.160000");
    Undly_31.add_attribute("CrdRtg", "UnderlyingCreditRating_t_781515645"); // 1
    Undly_31_set.insert("UnderlyingCreditRating_t_781515645");
    Undly_31.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_704505903"); // 1
    Undly_31_set.insert("UnderlyingInstrRegistry_t_704505903");
    Undly_31.add_attribute("Ctry", "600628796"); // 1
    Undly_31_set.insert("600628796");
    Undly_31.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_781458070"); // 1
    Undly_31_set.insert("UnderlyingStateOrProvinceOfIssue_t_781458070");
    Undly_31.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_706482651"); // 1
    Undly_31_set.insert("UnderlyingLocaleOfIssue_t_706482651");
    Undly_31.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2014954467"); // 1
    Undly_31_set.insert("UnderlyingRedemptionDate_t_2014954467");
    Undly_31.add_attribute("StrkPx", "1790904.560000"); // 1
    Undly_31_set.insert("1790904.560000");
    Undly_31.add_attribute("StrkCcy", "USD"); // 1
    Undly_31_set.insert("USD");
    Undly_31.add_attribute("OptA", "1329749529"); // 1
    Undly_31_set.insert("1329749529");
    Undly_31.add_attribute("Mult", "17045568.550000"); // 1
    Undly_31_set.insert("17045568.550000");
    Undly_31.add_attribute("MultTyp", "1"); // 1
    Undly_31_set.insert("1");
    Undly_31.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_31_set.insert("4");
    Undly_31.add_attribute("UOM", "MMbbl"); // 1
    Undly_31_set.insert("MMbbl");
    Undly_31.add_attribute("UOMQty", "2298539.330000"); // 1
    Undly_31_set.insert("2298539.330000");
    Undly_31.add_attribute("PxUOM", "t"); // 1
    Undly_31_set.insert("t");
    Undly_31.add_attribute("PxUOMQty", "895695.200000"); // 1
    Undly_31_set.insert("895695.200000");
    Undly_31.add_attribute("TmUnit", "Wk"); // 1
    Undly_31_set.insert("Wk");
    Undly_31.add_attribute("ExerStyle", "1"); // 1
    Undly_31_set.insert("1");
    Undly_31.add_attribute("CpnRt", "62480.300000"); // 1
    Undly_31_set.insert("62480.300000");
    Undly_31.add_attribute("Exch", "UnderlyingSecurityExchange_t_62383205"); // 1
    Undly_31_set.insert("UnderlyingSecurityExchange_t_62383205");
    Undly_31.add_attribute("Issr", "UnderlyingIssuer_t_156152708"); // 1
    Undly_31_set.insert("UnderlyingIssuer_t_156152708");
    Undly_31.add_attribute("EncUndIssrLen", "1126420476"); // 1
    Undly_31_set.insert("1126420476");
    Undly_31.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1095583511"); // 1
    Undly_31_set.insert("EncodedUnderlyingIssuer_t_1095583511");
    Undly_31.add_attribute("Desc", "UnderlyingSecurityDesc_t_313456179"); // 1
    Undly_31_set.insert("UnderlyingSecurityDesc_t_313456179");
    Undly_31.add_attribute("EncUndSecDescLen", "1172107925"); // 1
    Undly_31_set.insert("1172107925");
    Undly_31.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_672191109"); // 1
    Undly_31_set.insert("EncodedUnderlyingSecurityDesc_t_672191109");
    Undly_31.add_attribute("CPPgm", "UnderlyingCPProgram_t_1586845944"); // 1
    Undly_31_set.insert("UnderlyingCPProgram_t_1586845944");
    Undly_31.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1352296782"); // 1
    Undly_31_set.insert("UnderlyingCPRegType_t_1352296782");
    Undly_31.add_attribute("AllocPct", "18737479.570000"); // 1
    Undly_31_set.insert("18737479.570000");
    Undly_31.add_attribute("Ccy", "JPY"); // 1
    Undly_31_set.insert("JPY");
    Undly_31.add_attribute("Qty", "4307702.130000"); // 1
    Undly_31_set.insert("4307702.130000");
    Undly_31.add_attribute("SettlTyp", "4"); // 1
    Undly_31_set.insert("4");
    Undly_31.add_attribute("CashAmt", "UnderlyingCashAmount_t_767786850"); // 1
    Undly_31_set.insert("UnderlyingCashAmount_t_767786850");
    Undly_31.add_attribute("CashTyp", "FIXED"); // 1
    Undly_31_set.insert("FIXED");
    Undly_31.add_attribute("Px", "6355525.280000"); // 1
    Undly_31_set.insert("6355525.280000");
    Undly_31.add_attribute("DirtPx", "9468773.070000"); // 1
    Undly_31_set.insert("9468773.070000");
    Undly_31.add_attribute("EndPx", "14546661.350000"); // 1
    Undly_31_set.insert("14546661.350000");
    Undly_31.add_attribute("StartVal", "UnderlyingStartValue_t_367547088"); // 1
    Undly_31_set.insert("UnderlyingStartValue_t_367547088");
    Undly_31.add_attribute("CurVal", "UnderlyingCurrentValue_t_129143188"); // 1
    Undly_31_set.insert("UnderlyingCurrentValue_t_129143188");
    Undly_31.add_attribute("EndVal", "UnderlyingEndValue_t_1011739343"); // 1
    Undly_31_set.insert("UnderlyingEndValue_t_1011739343");
    Undly_31.add_attribute("AdjQty", "20290100.260000"); // 1
    Undly_31_set.insert("20290100.260000");
    Undly_31.add_attribute("FxRate", "1763325.220000"); // 1
    Undly_31_set.insert("1763325.220000");
    Undly_31.add_attribute("FxRateCalc", "D"); // 1
    Undly_31_set.insert("D");
    Undly_31.add_attribute("CapValu", "UnderlyingCapValue_t_111380311"); // 1
    Undly_31_set.insert("UnderlyingCapValue_t_111380311");
    Undly_31.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1808234825"); // 1
    Undly_31_set.insert("UnderlyingSettlMethod_t_1808234825");
    Undly_31.add_attribute("PutCall", "1106083431"); // 1
    Undly_31_set.insert("1106083431");
    all_values.push_back(Undly_31_set);
    all_compo_names.insert("Undly_31_set");

    {
      xml_element UndAID_31{"UndAID"};
      multiset<string> UndAID_31_set;
      UndAID_31.add_attribute("AltID", "UnderlyingSecurityAltID_t_1020872136"); // 2
      UndAID_31_set.insert("UnderlyingSecurityAltID_t_1020872136");
      UndAID_31.add_attribute("AltIDSrc", "9"); // 2
      UndAID_31_set.insert("9");
      all_values.push_back(UndAID_31_set);
      all_compo_names.insert("UndAID_31_set");

      Undly_31.add_element(UndAID_31);
    }
    {
      xml_element Stip_48{"Stip"};
      multiset<string> Stip_48_set;
      Stip_48.add_attribute("Typ", "MATURITY"); // 2
      Stip_48_set.insert("MATURITY");
      Stip_48.add_attribute("Val", "UnderlyingStipValue_t_1083255342"); // 2
      Stip_48_set.insert("UnderlyingStipValue_t_1083255342");
      all_values.push_back(Stip_48_set);
      all_compo_names.insert("Stip_48_set");

      Undly_31.add_element(Stip_48);
    }
    {
      xml_element Pty_149{"Pty"};
      multiset<string> Pty_149_set;
      Pty_149.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1871540082"); // 2
      Pty_149_set.insert("UnderlyingInstrumentPartyID_t_1871540082");
      Pty_149.add_attribute("Src", "B"); // 2
      Pty_149_set.insert("B");
      Pty_149.add_attribute("R", "3"); // 2
      Pty_149_set.insert("3");
      all_values.push_back(Pty_149_set);
      all_compo_names.insert("Pty_149_set");

      {
        xml_element Sub_149{"Sub"};
        multiset<string> Sub_149_set;
        Sub_149.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_37512614"); // 3
        Sub_149_set.insert("UnderlyingInstrumentPartySubID_t_37512614");
        Sub_149.add_attribute("Typ", "8"); // 3
        Sub_149_set.insert("8");
        all_values.push_back(Sub_149_set);
        all_compo_names.insert("Sub_149_set");

        Pty_149.add_element(Sub_149);
      }
      Undly_31.add_element(Pty_149);
    }
    elt.add_element(Undly_31);
  } // end Undly
  { // Undly
    xml_element Undly_32{"Undly"};
    multiset<string> Undly_32_set;
    Undly_32.add_attribute("Sym", "UnderlyingSymbol_t_703546315"); // 1
    Undly_32_set.insert("UnderlyingSymbol_t_703546315");
    Undly_32.add_attribute("Sfx", "CD"); // 1
    Undly_32_set.insert("CD");
    Undly_32.add_attribute("ID", "UnderlyingSecurityID_t_468189350"); // 1
    Undly_32_set.insert("UnderlyingSecurityID_t_468189350");
    Undly_32.add_attribute("Src", "D"); // 1
    Undly_32_set.insert("D");
    Undly_32.add_attribute("Prod", "5"); // 1
    Undly_32_set.insert("5");
    Undly_32.add_attribute("CFI", "UnderlyingCFICode_t_454518130"); // 1
    Undly_32_set.insert("UnderlyingCFICode_t_454518130");
    Undly_32.add_attribute("SecTyp", "TB"); // 1
    Undly_32_set.insert("TB");
    Undly_32.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_412409532"); // 1
    Undly_32_set.insert("UnderlyingSecuritySubType_t_412409532");
    Undly_32.add_attribute("MMY", "1222304980"); // 1
    Undly_32_set.insert("1222304980");
    Undly_32.add_attribute("Mat", "UnderlyingMaturityDate_t_1997833701"); // 1
    Undly_32_set.insert("UnderlyingMaturityDate_t_1997833701");
    Undly_32.add_attribute("MatTm", "1047962060"); // 1
    Undly_32_set.insert("1047962060");
    Undly_32.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_21698639"); // 1
    Undly_32_set.insert("UnderlyingCouponPaymentDate_t_21698639");
    Undly_32.add_attribute("RestrctTyp", "MR"); // 1
    Undly_32_set.insert("MR");
    Undly_32.add_attribute("Snrty", "SB"); // 1
    Undly_32_set.insert("SB");
    Undly_32.add_attribute("NotlPctOut", "1508418.270000"); // 1
    Undly_32_set.insert("1508418.270000");
    Undly_32.add_attribute("OrigNotlPctOut", "1692718.840000"); // 1
    Undly_32_set.insert("1692718.840000");
    Undly_32.add_attribute("AttchPnt", "12970355.270000"); // 1
    Undly_32_set.insert("12970355.270000");
    Undly_32.add_attribute("DetchPnt", "3271743.500000"); // 1
    Undly_32_set.insert("3271743.500000");
    Undly_32.add_attribute("Issued", "UnderlyingIssueDate_t_1185785795"); // 1
    Undly_32_set.insert("UnderlyingIssueDate_t_1185785795");
    Undly_32.add_attribute("RepoCollSecTyp", "1408415838"); // 1
    Undly_32_set.insert("1408415838");
    Undly_32.add_attribute("RepoTrm", "2135409175"); // 1
    Undly_32_set.insert("2135409175");
    Undly_32.add_attribute("RepoRt", "1443855.780000"); // 1
    Undly_32_set.insert("1443855.780000");
    Undly_32.add_attribute("Fctr", "2818043.270000"); // 1
    Undly_32_set.insert("2818043.270000");
    Undly_32.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1703312901"); // 1
    Undly_32_set.insert("UnderlyingCreditRating_t_1703312901");
    Undly_32.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1256717040"); // 1
    Undly_32_set.insert("UnderlyingInstrRegistry_t_1256717040");
    Undly_32.add_attribute("Ctry", "1365059669"); // 1
    Undly_32_set.insert("1365059669");
    Undly_32.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1427369336"); // 1
    Undly_32_set.insert("UnderlyingStateOrProvinceOfIssue_t_1427369336");
    Undly_32.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1347985331"); // 1
    Undly_32_set.insert("UnderlyingLocaleOfIssue_t_1347985331");
    Undly_32.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1396414874"); // 1
    Undly_32_set.insert("UnderlyingRedemptionDate_t_1396414874");
    Undly_32.add_attribute("StrkPx", "14648819.500000"); // 1
    Undly_32_set.insert("14648819.500000");
    Undly_32.add_attribute("StrkCcy", "CHF"); // 1
    Undly_32_set.insert("CHF");
    Undly_32.add_attribute("OptA", "941756860"); // 1
    Undly_32_set.insert("941756860");
    Undly_32.add_attribute("Mult", "9320672.480000"); // 1
    Undly_32_set.insert("9320672.480000");
    Undly_32.add_attribute("MultTyp", "2"); // 1
    Undly_32_set.insert("2");
    Undly_32.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_32_set.insert("3");
    Undly_32.add_attribute("UOM", "USD"); // 1
    Undly_32_set.insert("USD");
    Undly_32.add_attribute("UOMQty", "12428690.030000"); // 1
    Undly_32_set.insert("12428690.030000");
    Undly_32.add_attribute("PxUOM", "t"); // 1
    Undly_32_set.insert("t");
    Undly_32.add_attribute("PxUOMQty", "4614067.110000"); // 1
    Undly_32_set.insert("4614067.110000");
    Undly_32.add_attribute("TmUnit", "S"); // 1
    Undly_32_set.insert("S");
    Undly_32.add_attribute("ExerStyle", "2"); // 1
    Undly_32_set.insert("2");
    Undly_32.add_attribute("CpnRt", "4831053.500000"); // 1
    Undly_32_set.insert("4831053.500000");
    Undly_32.add_attribute("Exch", "UnderlyingSecurityExchange_t_250751598"); // 1
    Undly_32_set.insert("UnderlyingSecurityExchange_t_250751598");
    Undly_32.add_attribute("Issr", "UnderlyingIssuer_t_1314481776"); // 1
    Undly_32_set.insert("UnderlyingIssuer_t_1314481776");
    Undly_32.add_attribute("EncUndIssrLen", "633947178"); // 1
    Undly_32_set.insert("633947178");
    Undly_32.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_420023482"); // 1
    Undly_32_set.insert("EncodedUnderlyingIssuer_t_420023482");
    Undly_32.add_attribute("Desc", "UnderlyingSecurityDesc_t_464033655"); // 1
    Undly_32_set.insert("UnderlyingSecurityDesc_t_464033655");
    Undly_32.add_attribute("EncUndSecDescLen", "961121528"); // 1
    Undly_32_set.insert("961121528");
    Undly_32.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1605809277"); // 1
    Undly_32_set.insert("EncodedUnderlyingSecurityDesc_t_1605809277");
    Undly_32.add_attribute("CPPgm", "UnderlyingCPProgram_t_1872449493"); // 1
    Undly_32_set.insert("UnderlyingCPProgram_t_1872449493");
    Undly_32.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_949047055"); // 1
    Undly_32_set.insert("UnderlyingCPRegType_t_949047055");
    Undly_32.add_attribute("AllocPct", "17501948.550000"); // 1
    Undly_32_set.insert("17501948.550000");
    Undly_32.add_attribute("Ccy", "GBP"); // 1
    Undly_32_set.insert("GBP");
    Undly_32.add_attribute("Qty", "8594282.480000"); // 1
    Undly_32_set.insert("8594282.480000");
    Undly_32.add_attribute("SettlTyp", "5"); // 1
    Undly_32_set.insert("5");
    Undly_32.add_attribute("CashAmt", "UnderlyingCashAmount_t_1932245644"); // 1
    Undly_32_set.insert("UnderlyingCashAmount_t_1932245644");
    Undly_32.add_attribute("CashTyp", "DIFF"); // 1
    Undly_32_set.insert("DIFF");
    Undly_32.add_attribute("Px", "6207610.680000"); // 1
    Undly_32_set.insert("6207610.680000");
    Undly_32.add_attribute("DirtPx", "12496439.460000"); // 1
    Undly_32_set.insert("12496439.460000");
    Undly_32.add_attribute("EndPx", "5238078.290000"); // 1
    Undly_32_set.insert("5238078.290000");
    Undly_32.add_attribute("StartVal", "UnderlyingStartValue_t_573238609"); // 1
    Undly_32_set.insert("UnderlyingStartValue_t_573238609");
    Undly_32.add_attribute("CurVal", "UnderlyingCurrentValue_t_43917159"); // 1
    Undly_32_set.insert("UnderlyingCurrentValue_t_43917159");
    Undly_32.add_attribute("EndVal", "UnderlyingEndValue_t_1455875078"); // 1
    Undly_32_set.insert("UnderlyingEndValue_t_1455875078");
    Undly_32.add_attribute("AdjQty", "9555267.750000"); // 1
    Undly_32_set.insert("9555267.750000");
    Undly_32.add_attribute("FxRate", "6300018.420000"); // 1
    Undly_32_set.insert("6300018.420000");
    Undly_32.add_attribute("FxRateCalc", "M"); // 1
    Undly_32_set.insert("M");
    Undly_32.add_attribute("CapValu", "UnderlyingCapValue_t_50912131"); // 1
    Undly_32_set.insert("UnderlyingCapValue_t_50912131");
    Undly_32.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1628496058"); // 1
    Undly_32_set.insert("UnderlyingSettlMethod_t_1628496058");
    Undly_32.add_attribute("PutCall", "1156383519"); // 1
    Undly_32_set.insert("1156383519");
    all_values.push_back(Undly_32_set);
    all_compo_names.insert("Undly_32_set");

    {
      xml_element UndAID_32{"UndAID"};
      multiset<string> UndAID_32_set;
      UndAID_32.add_attribute("AltID", "UnderlyingSecurityAltID_t_1144131188"); // 2
      UndAID_32_set.insert("UnderlyingSecurityAltID_t_1144131188");
      UndAID_32.add_attribute("AltIDSrc", "I"); // 2
      UndAID_32_set.insert("I");
      all_values.push_back(UndAID_32_set);
      all_compo_names.insert("UndAID_32_set");

      Undly_32.add_element(UndAID_32);
    }
    {
      xml_element Stip_49{"Stip"};
      multiset<string> Stip_49_set;
      Stip_49.add_attribute("Typ", "INTERNALPX"); // 2
      Stip_49_set.insert("INTERNALPX");
      Stip_49.add_attribute("Val", "UnderlyingStipValue_t_1394882786"); // 2
      Stip_49_set.insert("UnderlyingStipValue_t_1394882786");
      all_values.push_back(Stip_49_set);
      all_compo_names.insert("Stip_49_set");

      Undly_32.add_element(Stip_49);
    }
    {
      xml_element Pty_150{"Pty"};
      multiset<string> Pty_150_set;
      Pty_150.add_attribute("ID", "UnderlyingInstrumentPartyID_t_694466813"); // 2
      Pty_150_set.insert("UnderlyingInstrumentPartyID_t_694466813");
      Pty_150.add_attribute("Src", "B"); // 2
      Pty_150_set.insert("B");
      Pty_150.add_attribute("R", "1"); // 2
      Pty_150_set.insert("1");
      all_values.push_back(Pty_150_set);
      all_compo_names.insert("Pty_150_set");

      {
        xml_element Sub_150{"Sub"};
        multiset<string> Sub_150_set;
        Sub_150.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1158500468"); // 3
        Sub_150_set.insert("UnderlyingInstrumentPartySubID_t_1158500468");
        Sub_150.add_attribute("Typ", "15"); // 3
        Sub_150_set.insert("15");
        all_values.push_back(Sub_150_set);
        all_compo_names.insert("Sub_150_set");

        Pty_150.add_element(Sub_150);
      }
      Undly_32.add_element(Pty_150);
    }
    elt.add_element(Undly_32);
  } // end Undly
  { // Leg
    xml_element Leg_33{"Leg"};
    multiset<string> Leg_33_set;
    Leg_33.add_attribute("Sym", "LegSymbol_t_883466314"); // 1
    Leg_33_set.insert("LegSymbol_t_883466314");
    Leg_33.add_attribute("Sfx", "WI"); // 1
    Leg_33_set.insert("WI");
    Leg_33.add_attribute("ID", "LegSecurityID_t_875943104"); // 1
    Leg_33_set.insert("LegSecurityID_t_875943104");
    Leg_33.add_attribute("Src", "J"); // 1
    Leg_33_set.insert("J");
    Leg_33.add_attribute("Prod", "12"); // 1
    Leg_33_set.insert("12");
    Leg_33.add_attribute("CFI", "LegCFICode_t_1735371352"); // 1
    Leg_33_set.insert("LegCFICode_t_1735371352");
    Leg_33.add_attribute("SecTyp", "TD"); // 1
    Leg_33_set.insert("TD");
    Leg_33.add_attribute("SecSubTyp", "LegSecuritySubType_t_178275640"); // 1
    Leg_33_set.insert("LegSecuritySubType_t_178275640");
    Leg_33.add_attribute("MMY", "1795301283"); // 1
    Leg_33_set.insert("1795301283");
    Leg_33.add_attribute("Mat", "LegMaturityDate_t_735343748"); // 1
    Leg_33_set.insert("LegMaturityDate_t_735343748");
    Leg_33.add_attribute("MatTm", "1427919586"); // 1
    Leg_33_set.insert("1427919586");
    Leg_33.add_attribute("CpnPmt", "LegCouponPaymentDate_t_171625465"); // 1
    Leg_33_set.insert("LegCouponPaymentDate_t_171625465");
    Leg_33.add_attribute("Issued", "LegIssueDate_t_1308582357"); // 1
    Leg_33_set.insert("LegIssueDate_t_1308582357");
    Leg_33.add_attribute("RepoCollSecTyp", "1471836745"); // 1
    Leg_33_set.insert("1471836745");
    Leg_33.add_attribute("RepoTrm", "1627500543"); // 1
    Leg_33_set.insert("1627500543");
    Leg_33.add_attribute("RepoRt", "1166254.850000"); // 1
    Leg_33_set.insert("1166254.850000");
    Leg_33.add_attribute("Fctr", "21018385.880000"); // 1
    Leg_33_set.insert("21018385.880000");
    Leg_33.add_attribute("CrdRtg", "LegCreditRating_t_174993703"); // 1
    Leg_33_set.insert("LegCreditRating_t_174993703");
    Leg_33.add_attribute("Rgstry", "LegInstrRegistry_t_167537616"); // 1
    Leg_33_set.insert("LegInstrRegistry_t_167537616");
    Leg_33.add_attribute("Ctry", "1582850998"); // 1
    Leg_33_set.insert("1582850998");
    Leg_33.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1331377223"); // 1
    Leg_33_set.insert("LegStateOrProvinceOfIssue_t_1331377223");
    Leg_33.add_attribute("Lcl", "LegLocaleOfIssue_t_1311668804"); // 1
    Leg_33_set.insert("LegLocaleOfIssue_t_1311668804");
    Leg_33.add_attribute("Redeem", "LegRedemptionDate_t_962836035"); // 1
    Leg_33_set.insert("LegRedemptionDate_t_962836035");
    Leg_33.add_attribute("Strk", "8233824.450000"); // 1
    Leg_33_set.insert("8233824.450000");
    Leg_33.add_attribute("StrkCcy", "CHF"); // 1
    Leg_33_set.insert("CHF");
    Leg_33.add_attribute("OptA", "949334845"); // 1
    Leg_33_set.insert("949334845");
    Leg_33.add_attribute("Cmult", "2264905.620000"); // 1
    Leg_33_set.insert("2264905.620000");
    Leg_33.add_attribute("MultTyp", "0"); // 1
    Leg_33_set.insert("0");
    Leg_33.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_33_set.insert("3");
    Leg_33.add_attribute("UOM", "MMBtu"); // 1
    Leg_33_set.insert("MMBtu");
    Leg_33.add_attribute("UOMQty", "15517859.830000"); // 1
    Leg_33_set.insert("15517859.830000");
    Leg_33.add_attribute("PxUOM", "Bu"); // 1
    Leg_33_set.insert("Bu");
    Leg_33.add_attribute("PxUOMQty", "2281819.150000"); // 1
    Leg_33_set.insert("2281819.150000");
    Leg_33.add_attribute("TmUnit", "Wk"); // 1
    Leg_33_set.insert("Wk");
    Leg_33.add_attribute("ExerStyle", "2"); // 1
    Leg_33_set.insert("2");
    Leg_33.add_attribute("CpnRt", "19635532.680000"); // 1
    Leg_33_set.insert("19635532.680000");
    Leg_33.add_attribute("Exch", "LegSecurityExchange_t_409121502"); // 1
    Leg_33_set.insert("LegSecurityExchange_t_409121502");
    Leg_33.add_attribute("Issr", "LegIssuer_t_349351743"); // 1
    Leg_33_set.insert("LegIssuer_t_349351743");
    Leg_33.add_attribute("EncLegIssrLen", "1611370903"); // 1
    Leg_33_set.insert("1611370903");
    Leg_33.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1144465250"); // 1
    Leg_33_set.insert("EncodedLegIssuer_t_1144465250");
    Leg_33.add_attribute("Desc", "LegSecurityDesc_t_1777271330"); // 1
    Leg_33_set.insert("LegSecurityDesc_t_1777271330");
    Leg_33.add_attribute("EncLegSecDescLen", "1782996368"); // 1
    Leg_33_set.insert("1782996368");
    Leg_33.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_305563959"); // 1
    Leg_33_set.insert("EncodedLegSecurityDesc_t_305563959");
    Leg_33.add_attribute("RatioQty", "11016244.270000"); // 1
    Leg_33_set.insert("11016244.270000");
    Leg_33.add_attribute("Side", "G"); // 1
    Leg_33_set.insert("G");
    Leg_33.add_attribute("Ccy", "EUR"); // 1
    Leg_33_set.insert("EUR");
    Leg_33.add_attribute("Pool", "LegPool_t_1438006967"); // 1
    Leg_33_set.insert("LegPool_t_1438006967");
    Leg_33.add_attribute("Dated", "LegDatedDate_t_589727060"); // 1
    Leg_33_set.insert("LegDatedDate_t_589727060");
    Leg_33.add_attribute("CSetMo", "491346717"); // 1
    Leg_33_set.insert("491346717");
    Leg_33.add_attribute("IntAcrl", "LegInterestAccrualDate_t_621900542"); // 1
    Leg_33_set.insert("LegInterestAccrualDate_t_621900542");
    Leg_33.add_attribute("PutCall", "1901395864"); // 1
    Leg_33_set.insert("1901395864");
    Leg_33.add_attribute("LegOptionRatio", "14541827.530000"); // 1
    Leg_33_set.insert("14541827.530000");
    Leg_33.add_attribute("Px", "14452829.870000"); // 1
    Leg_33_set.insert("14452829.870000");
    all_values.push_back(Leg_33_set);
    all_compo_names.insert("Leg_33_set");

    {
      xml_element LegAID_33{"LegAID"};
      multiset<string> LegAID_33_set;
      LegAID_33.add_attribute("SecAltID", "LegSecurityAltID_t_312980158"); // 2
      LegAID_33_set.insert("LegSecurityAltID_t_312980158");
      LegAID_33.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_33_set.insert("F");
      all_values.push_back(LegAID_33_set);
      all_compo_names.insert("LegAID_33_set");

      Leg_33.add_element(LegAID_33);
    }
    elt.add_element(Leg_33);
  } // end Leg
  { // Leg
    xml_element Leg_34{"Leg"};
    multiset<string> Leg_34_set;
    Leg_34.add_attribute("Sym", "LegSymbol_t_247134184"); // 1
    Leg_34_set.insert("LegSymbol_t_247134184");
    Leg_34.add_attribute("Sfx", "CD"); // 1
    Leg_34_set.insert("CD");
    Leg_34.add_attribute("ID", "LegSecurityID_t_1632321623"); // 1
    Leg_34_set.insert("LegSecurityID_t_1632321623");
    Leg_34.add_attribute("Src", "2"); // 1
    Leg_34_set.insert("2");
    Leg_34.add_attribute("Prod", "7"); // 1
    Leg_34_set.insert("7");
    Leg_34.add_attribute("CFI", "LegCFICode_t_1036623959"); // 1
    Leg_34_set.insert("LegCFICode_t_1036623959");
    Leg_34.add_attribute("SecTyp", "BRIDGE"); // 1
    Leg_34_set.insert("BRIDGE");
    Leg_34.add_attribute("SecSubTyp", "LegSecuritySubType_t_119891447"); // 1
    Leg_34_set.insert("LegSecuritySubType_t_119891447");
    Leg_34.add_attribute("MMY", "1331162781"); // 1
    Leg_34_set.insert("1331162781");
    Leg_34.add_attribute("Mat", "LegMaturityDate_t_84697872"); // 1
    Leg_34_set.insert("LegMaturityDate_t_84697872");
    Leg_34.add_attribute("MatTm", "2083444715"); // 1
    Leg_34_set.insert("2083444715");
    Leg_34.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1740284283"); // 1
    Leg_34_set.insert("LegCouponPaymentDate_t_1740284283");
    Leg_34.add_attribute("Issued", "LegIssueDate_t_434049616"); // 1
    Leg_34_set.insert("LegIssueDate_t_434049616");
    Leg_34.add_attribute("RepoCollSecTyp", "1547331970"); // 1
    Leg_34_set.insert("1547331970");
    Leg_34.add_attribute("RepoTrm", "737265885"); // 1
    Leg_34_set.insert("737265885");
    Leg_34.add_attribute("RepoRt", "638372.980000"); // 1
    Leg_34_set.insert("638372.980000");
    Leg_34.add_attribute("Fctr", "11828446.910000"); // 1
    Leg_34_set.insert("11828446.910000");
    Leg_34.add_attribute("CrdRtg", "LegCreditRating_t_1042829844"); // 1
    Leg_34_set.insert("LegCreditRating_t_1042829844");
    Leg_34.add_attribute("Rgstry", "LegInstrRegistry_t_1165461725"); // 1
    Leg_34_set.insert("LegInstrRegistry_t_1165461725");
    Leg_34.add_attribute("Ctry", "298374306"); // 1
    Leg_34_set.insert("298374306");
    Leg_34.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1465019289"); // 1
    Leg_34_set.insert("LegStateOrProvinceOfIssue_t_1465019289");
    Leg_34.add_attribute("Lcl", "LegLocaleOfIssue_t_73957445"); // 1
    Leg_34_set.insert("LegLocaleOfIssue_t_73957445");
    Leg_34.add_attribute("Redeem", "LegRedemptionDate_t_1736381273"); // 1
    Leg_34_set.insert("LegRedemptionDate_t_1736381273");
    Leg_34.add_attribute("Strk", "20547463.490000"); // 1
    Leg_34_set.insert("20547463.490000");
    Leg_34.add_attribute("StrkCcy", "CAN"); // 1
    Leg_34_set.insert("CAN");
    Leg_34.add_attribute("OptA", "1808658566"); // 1
    Leg_34_set.insert("1808658566");
    Leg_34.add_attribute("Cmult", "20194869.150000"); // 1
    Leg_34_set.insert("20194869.150000");
    Leg_34.add_attribute("MultTyp", "1"); // 1
    Leg_34_set.insert("1");
    Leg_34.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_34_set.insert("4");
    Leg_34.add_attribute("UOM", "Alw"); // 1
    Leg_34_set.insert("Alw");
    Leg_34.add_attribute("UOMQty", "19032153.380000"); // 1
    Leg_34_set.insert("19032153.380000");
    Leg_34.add_attribute("PxUOM", "USD"); // 1
    Leg_34_set.insert("USD");
    Leg_34.add_attribute("PxUOMQty", "3208431.970000"); // 1
    Leg_34_set.insert("3208431.970000");
    Leg_34.add_attribute("TmUnit", "Wk"); // 1
    Leg_34_set.insert("Wk");
    Leg_34.add_attribute("ExerStyle", "0"); // 1
    Leg_34_set.insert("0");
    Leg_34.add_attribute("CpnRt", "13574671.560000"); // 1
    Leg_34_set.insert("13574671.560000");
    Leg_34.add_attribute("Exch", "LegSecurityExchange_t_1952896416"); // 1
    Leg_34_set.insert("LegSecurityExchange_t_1952896416");
    Leg_34.add_attribute("Issr", "LegIssuer_t_525226775"); // 1
    Leg_34_set.insert("LegIssuer_t_525226775");
    Leg_34.add_attribute("EncLegIssrLen", "541146289"); // 1
    Leg_34_set.insert("541146289");
    Leg_34.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2037594289"); // 1
    Leg_34_set.insert("EncodedLegIssuer_t_2037594289");
    Leg_34.add_attribute("Desc", "LegSecurityDesc_t_461187842"); // 1
    Leg_34_set.insert("LegSecurityDesc_t_461187842");
    Leg_34.add_attribute("EncLegSecDescLen", "133946924"); // 1
    Leg_34_set.insert("133946924");
    Leg_34.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_324160257"); // 1
    Leg_34_set.insert("EncodedLegSecurityDesc_t_324160257");
    Leg_34.add_attribute("RatioQty", "20085198.130000"); // 1
    Leg_34_set.insert("20085198.130000");
    Leg_34.add_attribute("Side", "A"); // 1
    Leg_34_set.insert("A");
    Leg_34.add_attribute("Ccy", "JPY"); // 1
    Leg_34_set.insert("JPY");
    Leg_34.add_attribute("Pool", "LegPool_t_1914042653"); // 1
    Leg_34_set.insert("LegPool_t_1914042653");
    Leg_34.add_attribute("Dated", "LegDatedDate_t_1553459280"); // 1
    Leg_34_set.insert("LegDatedDate_t_1553459280");
    Leg_34.add_attribute("CSetMo", "1342255162"); // 1
    Leg_34_set.insert("1342255162");
    Leg_34.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1231578294"); // 1
    Leg_34_set.insert("LegInterestAccrualDate_t_1231578294");
    Leg_34.add_attribute("PutCall", "1627416725"); // 1
    Leg_34_set.insert("1627416725");
    Leg_34.add_attribute("LegOptionRatio", "9311527.880000"); // 1
    Leg_34_set.insert("9311527.880000");
    Leg_34.add_attribute("Px", "11388409.960000"); // 1
    Leg_34_set.insert("11388409.960000");
    all_values.push_back(Leg_34_set);
    all_compo_names.insert("Leg_34_set");

    {
      xml_element LegAID_34{"LegAID"};
      multiset<string> LegAID_34_set;
      LegAID_34.add_attribute("SecAltID", "LegSecurityAltID_t_45237240"); // 2
      LegAID_34_set.insert("LegSecurityAltID_t_45237240");
      LegAID_34.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_34_set.insert("E");
      all_values.push_back(LegAID_34_set);
      all_compo_names.insert("LegAID_34_set");

      Leg_34.add_element(LegAID_34);
    }
    elt.add_element(Leg_34);
  } // end Leg
  { // OrdQty
    xml_element OrdQty_6{"OrdQty"};
    multiset<string> OrdQty_6_set;
    OrdQty_6.add_attribute("Qty", "8000159.140000"); // 1
    OrdQty_6_set.insert("8000159.140000");
    OrdQty_6.add_attribute("Cash", "20647241.550000"); // 1
    OrdQty_6_set.insert("20647241.550000");
    OrdQty_6.add_attribute("Pct", "6505484.620000"); // 1
    OrdQty_6_set.insert("6505484.620000");
    OrdQty_6.add_attribute("RndDir", "2"); // 1
    OrdQty_6_set.insert("2");
    OrdQty_6.add_attribute("RndMod", "7532457.290000"); // 1
    OrdQty_6_set.insert("7532457.290000");
    all_values.push_back(OrdQty_6_set);
    all_compo_names.insert("OrdQty_6_set");

    elt.add_element(OrdQty_6);
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
