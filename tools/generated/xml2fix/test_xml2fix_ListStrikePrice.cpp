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
  elt.add_attribute("ID", "ListID_t_809154819"); // 0
  ListStrikePrice_message_t_0.insert("ListID_t_809154819");
  elt.add_attribute("TotNoStrks", "1754007793"); // 0
  ListStrikePrice_message_t_0.insert("1754007793");
  elt.add_attribute("LastFragment", "N"); // 0
  ListStrikePrice_message_t_0.insert("N");
  all_values.push_back(ListStrikePrice_message_t_0);
  all_compo_names.insert("ListStrikePrice_message_t");

  { // Hdr
    xml_element Hdr_38{"Hdr"};
    multiset<string> Hdr_38_set;
    Hdr_38.add_attribute("SeqNum", "529783488"); // 1
    Hdr_38_set.insert("529783488");
    Hdr_38.add_attribute("SID", "SenderCompID_t_1775552422"); // 1
    Hdr_38_set.insert("SenderCompID_t_1775552422");
    Hdr_38.add_attribute("TID", "TargetCompID_t_1133362576"); // 1
    Hdr_38_set.insert("TargetCompID_t_1133362576");
    Hdr_38.add_attribute("OBID", "OnBehalfOfCompID_t_615305383"); // 1
    Hdr_38_set.insert("OnBehalfOfCompID_t_615305383");
    Hdr_38.add_attribute("D2ID", "DeliverToCompID_t_460540599"); // 1
    Hdr_38_set.insert("DeliverToCompID_t_460540599");
    Hdr_38.add_attribute("SSub", "SenderSubID_t_1251028964"); // 1
    Hdr_38_set.insert("SenderSubID_t_1251028964");
    Hdr_38.add_attribute("SLoc", "SenderLocationID_t_1750557219"); // 1
    Hdr_38_set.insert("SenderLocationID_t_1750557219");
    Hdr_38.add_attribute("TSub", "TargetSubID_t_952959645"); // 1
    Hdr_38_set.insert("TargetSubID_t_952959645");
    Hdr_38.add_attribute("TLoc", "TargetLocationID_t_529485181"); // 1
    Hdr_38_set.insert("TargetLocationID_t_529485181");
    Hdr_38.add_attribute("OBSub", "OnBehalfOfSubID_t_720520441"); // 1
    Hdr_38_set.insert("OnBehalfOfSubID_t_720520441");
    Hdr_38.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1211738313"); // 1
    Hdr_38_set.insert("OnBehalfOfLocationID_t_1211738313");
    Hdr_38.add_attribute("D2Sub", "DeliverToSubID_t_1314516854"); // 1
    Hdr_38_set.insert("DeliverToSubID_t_1314516854");
    Hdr_38.add_attribute("D2Loc", "DeliverToLocationID_t_1712277470"); // 1
    Hdr_38_set.insert("DeliverToLocationID_t_1712277470");
    Hdr_38.add_attribute("PosDup", "N"); // 1
    Hdr_38_set.insert("N");
    Hdr_38.add_attribute("PosRsnd", "Y"); // 1
    Hdr_38_set.insert("Y");
    Hdr_38.add_attribute("Snt", "SendingTime_t_16539907"); // 1
    Hdr_38_set.insert("SendingTime_t_16539907");
    Hdr_38.add_attribute("OrigSnt", "OrigSendingTime_t_2100067012"); // 1
    Hdr_38_set.insert("OrigSendingTime_t_2100067012");
    Hdr_38.add_attribute("MsgEncd", "MessageEncoding_t_1218564677"); // 1
    Hdr_38_set.insert("MessageEncoding_t_1218564677");
    all_values.push_back(Hdr_38_set);
    all_compo_names.insert("Hdr_38_set");

    {
      xml_element Hop_38{"Hop"};
      multiset<string> Hop_38_set;
      Hop_38.add_attribute("ID", "HopCompID_t_1229128199"); // 2
      Hop_38_set.insert("HopCompID_t_1229128199");
      Hop_38.add_attribute("Ref", "594254945"); // 2
      Hop_38_set.insert("594254945");
      Hop_38.add_attribute("Snt", "HopSendingTime_t_337419541"); // 2
      Hop_38_set.insert("HopSendingTime_t_337419541");
      all_values.push_back(Hop_38_set);
      all_compo_names.insert("Hop_38_set");

      Hdr_38.add_element(Hop_38);
    }
    elt.add_element(Hdr_38);
  } // end Hdr
  { // StrkPX
    xml_element StrkPX_0{"StrkPX"};
    multiset<string> StrkPX_0_set;
    StrkPX_0.add_attribute("PrevClsPx", "8320109.070000"); // 1
    StrkPX_0_set.insert("8320109.070000");
    StrkPX_0.add_attribute("ClOrdID", "ClOrdID_t_1905442030"); // 1
    StrkPX_0_set.insert("ClOrdID_t_1905442030");
    StrkPX_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1565415976"); // 1
    StrkPX_0_set.insert("SecondaryClOrdID_t_1565415976");
    StrkPX_0.add_attribute("Side", "D"); // 1
    StrkPX_0_set.insert("D");
    StrkPX_0.add_attribute("Px", "10140654.340000"); // 1
    StrkPX_0_set.insert("10140654.340000");
    StrkPX_0.add_attribute("Ccy", "EUR"); // 1
    StrkPX_0_set.insert("EUR");
    StrkPX_0.add_attribute("Txt", "Text_t_620589579"); // 1
    StrkPX_0_set.insert("Text_t_620589579");
    StrkPX_0.add_attribute("EncTxtLen", "1521590878"); // 1
    StrkPX_0_set.insert("1521590878");
    StrkPX_0.add_attribute("EncTxt", "EncodedText_t_2046376592"); // 1
    StrkPX_0_set.insert("EncodedText_t_2046376592");
    all_values.push_back(StrkPX_0_set);
    all_compo_names.insert("StrkPX_0_set");

    {
      xml_element Instrmt_29{"Instrmt"};
      multiset<string> Instrmt_29_set;
      Instrmt_29.add_attribute("Sym", "Symbol_t_248658353"); // 2
      Instrmt_29_set.insert("Symbol_t_248658353");
      Instrmt_29.add_attribute("Sfx", "CD"); // 2
      Instrmt_29_set.insert("CD");
      Instrmt_29.add_attribute("ID", "SecurityID_t_514198327"); // 2
      Instrmt_29_set.insert("SecurityID_t_514198327");
      Instrmt_29.add_attribute("Src", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("Prod", "11"); // 2
      Instrmt_29_set.insert("11");
      Instrmt_29.add_attribute("ProdCmplx", "ProductComplex_t_117271898"); // 2
      Instrmt_29_set.insert("ProductComplex_t_117271898");
      Instrmt_29.add_attribute("SecGrp", "SecurityGroup_t_1662158597"); // 2
      Instrmt_29_set.insert("SecurityGroup_t_1662158597");
      Instrmt_29.add_attribute("CFI", "CFICode_t_140500303"); // 2
      Instrmt_29_set.insert("CFICode_t_140500303");
      Instrmt_29.add_attribute("SecTyp", "CD"); // 2
      Instrmt_29_set.insert("CD");
      Instrmt_29.add_attribute("SubTyp", "SecuritySubType_t_726413262"); // 2
      Instrmt_29_set.insert("SecuritySubType_t_726413262");
      Instrmt_29.add_attribute("MMY", "1455017157"); // 2
      Instrmt_29_set.insert("1455017157");
      Instrmt_29.add_attribute("MatDt", "MaturityDate_t_402586162"); // 2
      Instrmt_29_set.insert("MaturityDate_t_402586162");
      Instrmt_29.add_attribute("MatTm", "136554392"); // 2
      Instrmt_29_set.insert("136554392");
      Instrmt_29.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2107217146"); // 2
      Instrmt_29_set.insert("SettleOnOpenFlag_t_2107217146");
      Instrmt_29.add_attribute("AsgnMeth", "419126069"); // 2
      Instrmt_29_set.insert("419126069");
      Instrmt_29.add_attribute("Status", "2"); // 2
      Instrmt_29_set.insert("2");
      Instrmt_29.add_attribute("CpnPmt", "CouponPaymentDate_t_1178298175"); // 2
      Instrmt_29_set.insert("CouponPaymentDate_t_1178298175");
      Instrmt_29.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_29_set.insert("FR");
      Instrmt_29.add_attribute("Snrty", "SR"); // 2
      Instrmt_29_set.insert("SR");
      Instrmt_29.add_attribute("NotlPctOut", "15157177.160000"); // 2
      Instrmt_29_set.insert("15157177.160000");
      Instrmt_29.add_attribute("OrigNotlPctOut", "20622190.190000"); // 2
      Instrmt_29_set.insert("20622190.190000");
      Instrmt_29.add_attribute("AttchPnt", "15154036.090000"); // 2
      Instrmt_29_set.insert("15154036.090000");
      Instrmt_29.add_attribute("DetchPnt", "12736760.980000"); // 2
      Instrmt_29_set.insert("12736760.980000");
      Instrmt_29.add_attribute("Issued", "IssueDate_t_1480151347"); // 2
      Instrmt_29_set.insert("IssueDate_t_1480151347");
      Instrmt_29.add_attribute("RepoCollSecTyp", "75358246"); // 2
      Instrmt_29_set.insert("75358246");
      Instrmt_29.add_attribute("RepoTrm", "140257884"); // 2
      Instrmt_29_set.insert("140257884");
      Instrmt_29.add_attribute("RepoRt", "18124900.300000"); // 2
      Instrmt_29_set.insert("18124900.300000");
      Instrmt_29.add_attribute("Fctr", "15919513.490000"); // 2
      Instrmt_29_set.insert("15919513.490000");
      Instrmt_29.add_attribute("CrdRtg", "CreditRating_t_760847463"); // 2
      Instrmt_29_set.insert("CreditRating_t_760847463");
      Instrmt_29.add_attribute("Rgstry", "InstrRegistry_t_1186597260"); // 2
      Instrmt_29_set.insert("InstrRegistry_t_1186597260");
      Instrmt_29.add_attribute("IssuCtry", "1490844293"); // 2
      Instrmt_29_set.insert("1490844293");
      Instrmt_29.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1009505816"); // 2
      Instrmt_29_set.insert("StateOrProvinceOfIssue_t_1009505816");
      Instrmt_29.add_attribute("Lcl", "LocaleOfIssue_t_1694067066"); // 2
      Instrmt_29_set.insert("LocaleOfIssue_t_1694067066");
      Instrmt_29.add_attribute("Redeem", "RedemptionDate_t_2005042621"); // 2
      Instrmt_29_set.insert("RedemptionDate_t_2005042621");
      Instrmt_29.add_attribute("StrkPx", "17187047.680000"); // 2
      Instrmt_29_set.insert("17187047.680000");
      Instrmt_29.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_29_set.insert("CHF");
      Instrmt_29.add_attribute("StrkMult", "12333797.170000"); // 2
      Instrmt_29_set.insert("12333797.170000");
      Instrmt_29.add_attribute("StrkValu", "14455824.910000"); // 2
      Instrmt_29_set.insert("14455824.910000");
      Instrmt_29.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_29_set.insert("4");
      Instrmt_29.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_29_set.insert("5");
      Instrmt_29.add_attribute("StrkPxBndryPrcsn", "7531160.000000"); // 2
      Instrmt_29_set.insert("7531160.000000");
      Instrmt_29.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_29_set.insert("3");
      Instrmt_29.add_attribute("OptAt", "2096347372"); // 2
      Instrmt_29_set.insert("2096347372");
      Instrmt_29.add_attribute("Mult", "7128494.990000"); // 2
      Instrmt_29_set.insert("7128494.990000");
      Instrmt_29.add_attribute("MultTyp", "0"); // 2
      Instrmt_29_set.insert("0");
      Instrmt_29.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("MinPxIncr", "18911476.740000"); // 2
      Instrmt_29_set.insert("18911476.740000");
      Instrmt_29.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1135106064"); // 2
      Instrmt_29_set.insert("MinPriceIncrementAmount_t_1135106064");
      Instrmt_29.add_attribute("UOM", "Gal"); // 2
      Instrmt_29_set.insert("Gal");
      Instrmt_29.add_attribute("UOMQty", "12593817.430000"); // 2
      Instrmt_29_set.insert("12593817.430000");
      Instrmt_29.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_29_set.insert("MMbbl");
      Instrmt_29.add_attribute("PxUOMQty", "893141.450000"); // 2
      Instrmt_29_set.insert("893141.450000");
      Instrmt_29.add_attribute("SettlMeth", "P"); // 2
      Instrmt_29_set.insert("P");
      Instrmt_29.add_attribute("ExerStyle", "2"); // 2
      Instrmt_29_set.insert("2");
      Instrmt_29.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("OptPayAmt", "OptPayoutAmount_t_525832078"); // 2
      Instrmt_29_set.insert("OptPayoutAmount_t_525832078");
      Instrmt_29.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_29_set.insert("STD");
      Instrmt_29.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_29_set.insert("EQTY");
      Instrmt_29.add_attribute("ListMeth", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("CapPx", "12341127.770000"); // 2
      Instrmt_29_set.insert("12341127.770000");
      Instrmt_29.add_attribute("FlrPx", "10999843.860000"); // 2
      Instrmt_29_set.insert("10999843.860000");
      Instrmt_29.add_attribute("PutCall", "0"); // 2
      Instrmt_29_set.insert("0");
      Instrmt_29.add_attribute("FlexInd", "false"); // 2
      Instrmt_29_set.insert("false");
      Instrmt_29.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_29_set.insert("false");
      Instrmt_29.add_attribute("TmUnit", "S"); // 2
      Instrmt_29_set.insert("S");
      Instrmt_29.add_attribute("CpnRt", "20857783.840000"); // 2
      Instrmt_29_set.insert("20857783.840000");
      Instrmt_29.add_attribute("Exch", "SecurityExchange_t_932374230"); // 2
      Instrmt_29_set.insert("SecurityExchange_t_932374230");
      Instrmt_29.add_attribute("PosLmt", "953302548"); // 2
      Instrmt_29_set.insert("953302548");
      Instrmt_29.add_attribute("NTPosLmt", "1383877227"); // 2
      Instrmt_29_set.insert("1383877227");
      Instrmt_29.add_attribute("Issr", "Issuer_t_1744997442"); // 2
      Instrmt_29_set.insert("Issuer_t_1744997442");
      Instrmt_29.add_attribute("EncIssrLen", "765611879"); // 2
      Instrmt_29_set.insert("765611879");
      Instrmt_29.add_attribute("EncIssr", "EncodedIssuer_t_2136993228"); // 2
      Instrmt_29_set.insert("EncodedIssuer_t_2136993228");
      Instrmt_29.add_attribute("Desc", "SecurityDesc_t_812723168"); // 2
      Instrmt_29_set.insert("SecurityDesc_t_812723168");
      Instrmt_29.add_attribute("EncSecDescLen", "714475603"); // 2
      Instrmt_29_set.insert("714475603");
      Instrmt_29.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_702359079"); // 2
      Instrmt_29_set.insert("EncodedSecurityDesc_t_702359079");
      Instrmt_29.add_attribute("Pool", "Pool_t_299574963"); // 2
      Instrmt_29_set.insert("Pool_t_299574963");
      Instrmt_29.add_attribute("CSetMo", "752477084"); // 2
      Instrmt_29_set.insert("752477084");
      Instrmt_29.add_attribute("CPPgm", "2"); // 2
      Instrmt_29_set.insert("2");
      Instrmt_29.add_attribute("CPRegT", "CPRegType_t_1434681027"); // 2
      Instrmt_29_set.insert("CPRegType_t_1434681027");
      Instrmt_29.add_attribute("Dated", "DatedDate_t_1473871268"); // 2
      Instrmt_29_set.insert("DatedDate_t_1473871268");
      Instrmt_29.add_attribute("IntAcrl", "InterestAccrualDate_t_1705404848"); // 2
      Instrmt_29_set.insert("InterestAccrualDate_t_1705404848");
      all_values.push_back(Instrmt_29_set);
      all_compo_names.insert("Instrmt_29_set");

      {
        xml_element AID_32{"AID"};
        multiset<string> AID_32_set;
        AID_32.add_attribute("AltID", "SecurityAltID_t_337038814"); // 3
        AID_32_set.insert("SecurityAltID_t_337038814");
        AID_32.add_attribute("AltIDSrc", "A"); // 3
        AID_32_set.insert("A");
        all_values.push_back(AID_32_set);
        all_compo_names.insert("AID_32_set");

        Instrmt_29.add_element(AID_32);
      }
      {
        xml_element SecXML_32{"SecXML"};
        multiset<string> SecXML_32_set;
        SecXML_32.add_attribute("Schema", "SecurityXMLSchema_t_2090979042"); // 3
        SecXML_32_set.insert("SecurityXMLSchema_t_2090979042");
        all_values.push_back(SecXML_32_set);
        all_compo_names.insert("SecXML_32_set");

        Instrmt_29.add_element(SecXML_32);
      }
      {
        xml_element Evnt_32{"Evnt"};
        multiset<string> Evnt_32_set;
        Evnt_32.add_attribute("EventTyp", "8"); // 3
        Evnt_32_set.insert("8");
        Evnt_32.add_attribute("Dt", "EventDate_t_1727857804"); // 3
        Evnt_32_set.insert("EventDate_t_1727857804");
        Evnt_32.add_attribute("Tm", "EventTime_t_469327472"); // 3
        Evnt_32_set.insert("EventTime_t_469327472");
        Evnt_32.add_attribute("Px", "7670634.650000"); // 3
        Evnt_32_set.insert("7670634.650000");
        Evnt_32.add_attribute("Txt", "EventText_t_1336997896"); // 3
        Evnt_32_set.insert("EventText_t_1336997896");
        all_values.push_back(Evnt_32_set);
        all_compo_names.insert("Evnt_32_set");

        Instrmt_29.add_element(Evnt_32);
      }
      {
        xml_element Pty_179{"Pty"};
        multiset<string> Pty_179_set;
        Pty_179.add_attribute("ID", "InstrumentPartyID_t_1756007013"); // 3
        Pty_179_set.insert("InstrumentPartyID_t_1756007013");
        Pty_179.add_attribute("Src", "H"); // 3
        Pty_179_set.insert("H");
        Pty_179.add_attribute("R", "34"); // 3
        Pty_179_set.insert("34");
        all_values.push_back(Pty_179_set);
        all_compo_names.insert("Pty_179_set");

        {
          xml_element Sub_179{"Sub"};
          multiset<string> Sub_179_set;
          Sub_179.add_attribute("ID", "InstrumentPartySubID_t_1904708723"); // 4
          Sub_179_set.insert("InstrumentPartySubID_t_1904708723");
          Sub_179.add_attribute("Typ", "7"); // 4
          Sub_179_set.insert("7");
          all_values.push_back(Sub_179_set);
          all_compo_names.insert("Sub_179_set");

          Pty_179.add_element(Sub_179);
        }
        Instrmt_29.add_element(Pty_179);
      }
      {
        xml_element CmplxEvnt_29{"CmplxEvnt"};
        multiset<string> CmplxEvnt_29_set;
        CmplxEvnt_29.add_attribute("Typ", "5"); // 3
        CmplxEvnt_29_set.insert("5");
        CmplxEvnt_29.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1624631554"); // 3
        CmplxEvnt_29_set.insert("ComplexOptPayoutAmount_t_1624631554");
        CmplxEvnt_29.add_attribute("Px", "5726835.250000"); // 3
        CmplxEvnt_29_set.insert("5726835.250000");
        CmplxEvnt_29.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_29_set.insert("2");
        CmplxEvnt_29.add_attribute("PxBndryPrcsn", "4304504.540000"); // 3
        CmplxEvnt_29_set.insert("4304504.540000");
        CmplxEvnt_29.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_29_set.insert("3");
        CmplxEvnt_29.add_attribute("Cond", "1"); // 3
        CmplxEvnt_29_set.insert("1");
        all_values.push_back(CmplxEvnt_29_set);
        all_compo_names.insert("CmplxEvnt_29_set");

        {
          xml_element EvntDts_29{"EvntDts"};
          multiset<string> EvntDts_29_set;
          EvntDts_29.add_attribute("StartDt", "ComplexEventStartDate_t_1196062333"); // 4
          EvntDts_29_set.insert("ComplexEventStartDate_t_1196062333");
          EvntDts_29.add_attribute("EndDt", "ComplexEventEndDate_t_1946070333"); // 4
          EvntDts_29_set.insert("ComplexEventEndDate_t_1946070333");
          all_values.push_back(EvntDts_29_set);
          all_compo_names.insert("EvntDts_29_set");

          {
            xml_element EvntTms_29{"EvntTms"};
            multiset<string> EvntTms_29_set;
            EvntTms_29.add_attribute("StartTm", "442169538"); // 5
            EvntTms_29_set.insert("442169538");
            EvntTms_29.add_attribute("EndTm", "1910537937"); // 5
            EvntTms_29_set.insert("1910537937");
            all_values.push_back(EvntTms_29_set);
            all_compo_names.insert("EvntTms_29_set");

            EvntDts_29.add_element(EvntTms_29);
          }
          CmplxEvnt_29.add_element(EvntDts_29);
        }
        Instrmt_29.add_element(CmplxEvnt_29);
      }
      StrkPX_0.add_element(Instrmt_29);
    }
    {
      xml_element Undly_42{"Undly"};
      multiset<string> Undly_42_set;
      Undly_42.add_attribute("Sym", "UnderlyingSymbol_t_500945764"); // 2
      Undly_42_set.insert("UnderlyingSymbol_t_500945764");
      Undly_42.add_attribute("Sfx", "WI"); // 2
      Undly_42_set.insert("WI");
      Undly_42.add_attribute("ID", "UnderlyingSecurityID_t_515531373"); // 2
      Undly_42_set.insert("UnderlyingSecurityID_t_515531373");
      Undly_42.add_attribute("Src", "C"); // 2
      Undly_42_set.insert("C");
      Undly_42.add_attribute("Prod", "4"); // 2
      Undly_42_set.insert("4");
      Undly_42.add_attribute("CFI", "UnderlyingCFICode_t_1989402641"); // 2
      Undly_42_set.insert("UnderlyingCFICode_t_1989402641");
      Undly_42.add_attribute("SecTyp", "NONE"); // 2
      Undly_42_set.insert("NONE");
      Undly_42.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_365980695"); // 2
      Undly_42_set.insert("UnderlyingSecuritySubType_t_365980695");
      Undly_42.add_attribute("MMY", "1405104406"); // 2
      Undly_42_set.insert("1405104406");
      Undly_42.add_attribute("Mat", "UnderlyingMaturityDate_t_448385464"); // 2
      Undly_42_set.insert("UnderlyingMaturityDate_t_448385464");
      Undly_42.add_attribute("MatTm", "1085528644"); // 2
      Undly_42_set.insert("1085528644");
      Undly_42.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_985478562"); // 2
      Undly_42_set.insert("UnderlyingCouponPaymentDate_t_985478562");
      Undly_42.add_attribute("RestrctTyp", "FR"); // 2
      Undly_42_set.insert("FR");
      Undly_42.add_attribute("Snrty", "SD"); // 2
      Undly_42_set.insert("SD");
      Undly_42.add_attribute("NotlPctOut", "1749928.110000"); // 2
      Undly_42_set.insert("1749928.110000");
      Undly_42.add_attribute("OrigNotlPctOut", "5262363.010000"); // 2
      Undly_42_set.insert("5262363.010000");
      Undly_42.add_attribute("AttchPnt", "17062847.030000"); // 2
      Undly_42_set.insert("17062847.030000");
      Undly_42.add_attribute("DetchPnt", "4644914.450000"); // 2
      Undly_42_set.insert("4644914.450000");
      Undly_42.add_attribute("Issued", "UnderlyingIssueDate_t_283461377"); // 2
      Undly_42_set.insert("UnderlyingIssueDate_t_283461377");
      Undly_42.add_attribute("RepoCollSecTyp", "193189844"); // 2
      Undly_42_set.insert("193189844");
      Undly_42.add_attribute("RepoTrm", "1711533439"); // 2
      Undly_42_set.insert("1711533439");
      Undly_42.add_attribute("RepoRt", "19080929.310000"); // 2
      Undly_42_set.insert("19080929.310000");
      Undly_42.add_attribute("Fctr", "7658733.700000"); // 2
      Undly_42_set.insert("7658733.700000");
      Undly_42.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1743466015"); // 2
      Undly_42_set.insert("UnderlyingCreditRating_t_1743466015");
      Undly_42.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_191059737"); // 2
      Undly_42_set.insert("UnderlyingInstrRegistry_t_191059737");
      Undly_42.add_attribute("Ctry", "574950475"); // 2
      Undly_42_set.insert("574950475");
      Undly_42.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1372912385"); // 2
      Undly_42_set.insert("UnderlyingStateOrProvinceOfIssue_t_1372912385");
      Undly_42.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1387122070"); // 2
      Undly_42_set.insert("UnderlyingLocaleOfIssue_t_1387122070");
      Undly_42.add_attribute("Redeem", "UnderlyingRedemptionDate_t_373537160"); // 2
      Undly_42_set.insert("UnderlyingRedemptionDate_t_373537160");
      Undly_42.add_attribute("StrkPx", "18150819.230000"); // 2
      Undly_42_set.insert("18150819.230000");
      Undly_42.add_attribute("StrkCcy", "USD"); // 2
      Undly_42_set.insert("USD");
      Undly_42.add_attribute("OptA", "409342776"); // 2
      Undly_42_set.insert("409342776");
      Undly_42.add_attribute("Mult", "16657077.330000"); // 2
      Undly_42_set.insert("16657077.330000");
      Undly_42.add_attribute("MultTyp", "2"); // 2
      Undly_42_set.insert("2");
      Undly_42.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_42_set.insert("2");
      Undly_42.add_attribute("UOM", "oz_tr"); // 2
      Undly_42_set.insert("oz_tr");
      Undly_42.add_attribute("UOMQty", "1788582.150000"); // 2
      Undly_42_set.insert("1788582.150000");
      Undly_42.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_42_set.insert("oz_tr");
      Undly_42.add_attribute("PxUOMQty", "7652474.850000"); // 2
      Undly_42_set.insert("7652474.850000");
      Undly_42.add_attribute("TmUnit", "Yr"); // 2
      Undly_42_set.insert("Yr");
      Undly_42.add_attribute("ExerStyle", "1"); // 2
      Undly_42_set.insert("1");
      Undly_42.add_attribute("CpnRt", "17507260.470000"); // 2
      Undly_42_set.insert("17507260.470000");
      Undly_42.add_attribute("Exch", "UnderlyingSecurityExchange_t_1544956615"); // 2
      Undly_42_set.insert("UnderlyingSecurityExchange_t_1544956615");
      Undly_42.add_attribute("Issr", "UnderlyingIssuer_t_1594902458"); // 2
      Undly_42_set.insert("UnderlyingIssuer_t_1594902458");
      Undly_42.add_attribute("EncUndIssrLen", "1925718858"); // 2
      Undly_42_set.insert("1925718858");
      Undly_42.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2071192917"); // 2
      Undly_42_set.insert("EncodedUnderlyingIssuer_t_2071192917");
      Undly_42.add_attribute("Desc", "UnderlyingSecurityDesc_t_1153703513"); // 2
      Undly_42_set.insert("UnderlyingSecurityDesc_t_1153703513");
      Undly_42.add_attribute("EncUndSecDescLen", "242726656"); // 2
      Undly_42_set.insert("242726656");
      Undly_42.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_207170646"); // 2
      Undly_42_set.insert("EncodedUnderlyingSecurityDesc_t_207170646");
      Undly_42.add_attribute("CPPgm", "UnderlyingCPProgram_t_1346893357"); // 2
      Undly_42_set.insert("UnderlyingCPProgram_t_1346893357");
      Undly_42.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1954260095"); // 2
      Undly_42_set.insert("UnderlyingCPRegType_t_1954260095");
      Undly_42.add_attribute("AllocPct", "21152635.770000"); // 2
      Undly_42_set.insert("21152635.770000");
      Undly_42.add_attribute("Ccy", "JPY"); // 2
      Undly_42_set.insert("JPY");
      Undly_42.add_attribute("Qty", "1588396.660000"); // 2
      Undly_42_set.insert("1588396.660000");
      Undly_42.add_attribute("SettlTyp", "4"); // 2
      Undly_42_set.insert("4");
      Undly_42.add_attribute("CashAmt", "UnderlyingCashAmount_t_775671199"); // 2
      Undly_42_set.insert("UnderlyingCashAmount_t_775671199");
      Undly_42.add_attribute("CashTyp", "FIXED"); // 2
      Undly_42_set.insert("FIXED");
      Undly_42.add_attribute("Px", "9137707.140000"); // 2
      Undly_42_set.insert("9137707.140000");
      Undly_42.add_attribute("DirtPx", "4432694.740000"); // 2
      Undly_42_set.insert("4432694.740000");
      Undly_42.add_attribute("EndPx", "5486544.480000"); // 2
      Undly_42_set.insert("5486544.480000");
      Undly_42.add_attribute("StartVal", "UnderlyingStartValue_t_1788253638"); // 2
      Undly_42_set.insert("UnderlyingStartValue_t_1788253638");
      Undly_42.add_attribute("CurVal", "UnderlyingCurrentValue_t_852612250"); // 2
      Undly_42_set.insert("UnderlyingCurrentValue_t_852612250");
      Undly_42.add_attribute("EndVal", "UnderlyingEndValue_t_66878533"); // 2
      Undly_42_set.insert("UnderlyingEndValue_t_66878533");
      Undly_42.add_attribute("AdjQty", "14622217.840000"); // 2
      Undly_42_set.insert("14622217.840000");
      Undly_42.add_attribute("FxRate", "12908969.080000"); // 2
      Undly_42_set.insert("12908969.080000");
      Undly_42.add_attribute("FxRateCalc", "D"); // 2
      Undly_42_set.insert("D");
      Undly_42.add_attribute("CapValu", "UnderlyingCapValue_t_1641079999"); // 2
      Undly_42_set.insert("UnderlyingCapValue_t_1641079999");
      Undly_42.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2095162261"); // 2
      Undly_42_set.insert("UnderlyingSettlMethod_t_2095162261");
      Undly_42.add_attribute("PutCall", "192269096"); // 2
      Undly_42_set.insert("192269096");
      all_values.push_back(Undly_42_set);
      all_compo_names.insert("Undly_42_set");

      {
        xml_element UndAID_42{"UndAID"};
        multiset<string> UndAID_42_set;
        UndAID_42.add_attribute("AltID", "UnderlyingSecurityAltID_t_120840031"); // 3
        UndAID_42_set.insert("UnderlyingSecurityAltID_t_120840031");
        UndAID_42.add_attribute("AltIDSrc", "7"); // 3
        UndAID_42_set.insert("7");
        all_values.push_back(UndAID_42_set);
        all_compo_names.insert("UndAID_42_set");

        Undly_42.add_element(UndAID_42);
      }
      {
        xml_element Stip_66{"Stip"};
        multiset<string> Stip_66_set;
        Stip_66.add_attribute("Typ", "MHP"); // 3
        Stip_66_set.insert("MHP");
        Stip_66.add_attribute("Val", "UnderlyingStipValue_t_1665796646"); // 3
        Stip_66_set.insert("UnderlyingStipValue_t_1665796646");
        all_values.push_back(Stip_66_set);
        all_compo_names.insert("Stip_66_set");

        Undly_42.add_element(Stip_66);
      }
      {
        xml_element Pty_180{"Pty"};
        multiset<string> Pty_180_set;
        Pty_180.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1284891420"); // 3
        Pty_180_set.insert("UnderlyingInstrumentPartyID_t_1284891420");
        Pty_180.add_attribute("Src", "B"); // 3
        Pty_180_set.insert("B");
        Pty_180.add_attribute("R", "42"); // 3
        Pty_180_set.insert("42");
        all_values.push_back(Pty_180_set);
        all_compo_names.insert("Pty_180_set");

        {
          xml_element Sub_180{"Sub"};
          multiset<string> Sub_180_set;
          Sub_180.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_291111285"); // 4
          Sub_180_set.insert("UnderlyingInstrumentPartySubID_t_291111285");
          Sub_180.add_attribute("Typ", "27"); // 4
          Sub_180_set.insert("27");
          all_values.push_back(Sub_180_set);
          all_compo_names.insert("Sub_180_set");

          Pty_180.add_element(Sub_180);
        }
        Undly_42.add_element(Pty_180);
      }
      StrkPX_0.add_element(Undly_42);
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
