#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusRequest_message_t_0;
  elt.add_attribute("StatReqID", "QuoteStatusReqID_t_1446604252"); // 0
  QuoteStatusRequest_message_t_0.insert("QuoteStatusReqID_t_1446604252");
  elt.add_attribute("QID", "QuoteID_t_1909523585"); // 0
  QuoteStatusRequest_message_t_0.insert("QuoteID_t_1909523585");
  elt.add_attribute("Acct", "Account_t_1337933007"); // 0
  QuoteStatusRequest_message_t_0.insert("Account_t_1337933007");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  QuoteStatusRequest_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "4"); // 0
  QuoteStatusRequest_message_t_0.insert("4");
  elt.add_attribute("SesID", "1"); // 0
  QuoteStatusRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "6"); // 0
  QuoteStatusRequest_message_t_0.insert("6");
  elt.add_attribute("SubReqTyp", "1"); // 0
  QuoteStatusRequest_message_t_0.insert("1");
  all_values.push_back(QuoteStatusRequest_message_t_0);
  all_compo_names.insert("QuoteStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_74{"Hdr"};
    multiset<string> Hdr_74_set;
    Hdr_74.add_attribute("SeqNum", "689193224"); // 1
    Hdr_74_set.insert("689193224");
    Hdr_74.add_attribute("SID", "SenderCompID_t_2006064748"); // 1
    Hdr_74_set.insert("SenderCompID_t_2006064748");
    Hdr_74.add_attribute("TID", "TargetCompID_t_483615959"); // 1
    Hdr_74_set.insert("TargetCompID_t_483615959");
    Hdr_74.add_attribute("OBID", "OnBehalfOfCompID_t_1341542538"); // 1
    Hdr_74_set.insert("OnBehalfOfCompID_t_1341542538");
    Hdr_74.add_attribute("D2ID", "DeliverToCompID_t_673180363"); // 1
    Hdr_74_set.insert("DeliverToCompID_t_673180363");
    Hdr_74.add_attribute("SSub", "SenderSubID_t_1818027822"); // 1
    Hdr_74_set.insert("SenderSubID_t_1818027822");
    Hdr_74.add_attribute("SLoc", "SenderLocationID_t_604242361"); // 1
    Hdr_74_set.insert("SenderLocationID_t_604242361");
    Hdr_74.add_attribute("TSub", "TargetSubID_t_1273936012"); // 1
    Hdr_74_set.insert("TargetSubID_t_1273936012");
    Hdr_74.add_attribute("TLoc", "TargetLocationID_t_1841476794"); // 1
    Hdr_74_set.insert("TargetLocationID_t_1841476794");
    Hdr_74.add_attribute("OBSub", "OnBehalfOfSubID_t_240607128"); // 1
    Hdr_74_set.insert("OnBehalfOfSubID_t_240607128");
    Hdr_74.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1081915024"); // 1
    Hdr_74_set.insert("OnBehalfOfLocationID_t_1081915024");
    Hdr_74.add_attribute("D2Sub", "DeliverToSubID_t_1556508863"); // 1
    Hdr_74_set.insert("DeliverToSubID_t_1556508863");
    Hdr_74.add_attribute("D2Loc", "DeliverToLocationID_t_820573238"); // 1
    Hdr_74_set.insert("DeliverToLocationID_t_820573238");
    Hdr_74.add_attribute("PosDup", "N"); // 1
    Hdr_74_set.insert("N");
    Hdr_74.add_attribute("PosRsnd", "Y"); // 1
    Hdr_74_set.insert("Y");
    Hdr_74.add_attribute("Snt", "SendingTime_t_1407688853"); // 1
    Hdr_74_set.insert("SendingTime_t_1407688853");
    Hdr_74.add_attribute("OrigSnt", "OrigSendingTime_t_942395046"); // 1
    Hdr_74_set.insert("OrigSendingTime_t_942395046");
    Hdr_74.add_attribute("MsgEncd", "MessageEncoding_t_775323358"); // 1
    Hdr_74_set.insert("MessageEncoding_t_775323358");
    all_values.push_back(Hdr_74_set);
    all_compo_names.insert("Hdr_74_set");

    {
      xml_element Hop_74{"Hop"};
      multiset<string> Hop_74_set;
      Hop_74.add_attribute("ID", "HopCompID_t_488836041"); // 2
      Hop_74_set.insert("HopCompID_t_488836041");
      Hop_74.add_attribute("Ref", "586750479"); // 2
      Hop_74_set.insert("586750479");
      Hop_74.add_attribute("Snt", "HopSendingTime_t_886404489"); // 2
      Hop_74_set.insert("HopSendingTime_t_886404489");
      all_values.push_back(Hop_74_set);
      all_compo_names.insert("Hop_74_set");

      Hdr_74.add_element(Hop_74);
    }
    elt.add_element(Hdr_74);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_64{"Instrmt"};
    multiset<string> Instrmt_64_set;
    Instrmt_64.add_attribute("Sym", "Symbol_t_844423895"); // 1
    Instrmt_64_set.insert("Symbol_t_844423895");
    Instrmt_64.add_attribute("Sfx", "CD"); // 1
    Instrmt_64_set.insert("CD");
    Instrmt_64.add_attribute("ID", "SecurityID_t_185525093"); // 1
    Instrmt_64_set.insert("SecurityID_t_185525093");
    Instrmt_64.add_attribute("Src", "J"); // 1
    Instrmt_64_set.insert("J");
    Instrmt_64.add_attribute("Prod", "12"); // 1
    Instrmt_64_set.insert("12");
    Instrmt_64.add_attribute("ProdCmplx", "ProductComplex_t_1553687657"); // 1
    Instrmt_64_set.insert("ProductComplex_t_1553687657");
    Instrmt_64.add_attribute("SecGrp", "SecurityGroup_t_173311295"); // 1
    Instrmt_64_set.insert("SecurityGroup_t_173311295");
    Instrmt_64.add_attribute("CFI", "CFICode_t_814092384"); // 1
    Instrmt_64_set.insert("CFICode_t_814092384");
    Instrmt_64.add_attribute("SecTyp", "TIPS"); // 1
    Instrmt_64_set.insert("TIPS");
    Instrmt_64.add_attribute("SubTyp", "SecuritySubType_t_216401524"); // 1
    Instrmt_64_set.insert("SecuritySubType_t_216401524");
    Instrmt_64.add_attribute("MMY", "1503285608"); // 1
    Instrmt_64_set.insert("1503285608");
    Instrmt_64.add_attribute("MatDt", "MaturityDate_t_943958870"); // 1
    Instrmt_64_set.insert("MaturityDate_t_943958870");
    Instrmt_64.add_attribute("MatTm", "700017483"); // 1
    Instrmt_64_set.insert("700017483");
    Instrmt_64.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_697344498"); // 1
    Instrmt_64_set.insert("SettleOnOpenFlag_t_697344498");
    Instrmt_64.add_attribute("AsgnMeth", "1617139233"); // 1
    Instrmt_64_set.insert("1617139233");
    Instrmt_64.add_attribute("Status", "1"); // 1
    Instrmt_64_set.insert("1");
    Instrmt_64.add_attribute("CpnPmt", "CouponPaymentDate_t_1301586859"); // 1
    Instrmt_64_set.insert("CouponPaymentDate_t_1301586859");
    Instrmt_64.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_64_set.insert("MR");
    Instrmt_64.add_attribute("Snrty", "SD"); // 1
    Instrmt_64_set.insert("SD");
    Instrmt_64.add_attribute("NotlPctOut", "15421939.870000"); // 1
    Instrmt_64_set.insert("15421939.870000");
    Instrmt_64.add_attribute("OrigNotlPctOut", "18255066.210000"); // 1
    Instrmt_64_set.insert("18255066.210000");
    Instrmt_64.add_attribute("AttchPnt", "16210636.680000"); // 1
    Instrmt_64_set.insert("16210636.680000");
    Instrmt_64.add_attribute("DetchPnt", "2152835.780000"); // 1
    Instrmt_64_set.insert("2152835.780000");
    Instrmt_64.add_attribute("Issued", "IssueDate_t_871568796"); // 1
    Instrmt_64_set.insert("IssueDate_t_871568796");
    Instrmt_64.add_attribute("RepoCollSecTyp", "1051841619"); // 1
    Instrmt_64_set.insert("1051841619");
    Instrmt_64.add_attribute("RepoTrm", "1622972431"); // 1
    Instrmt_64_set.insert("1622972431");
    Instrmt_64.add_attribute("RepoRt", "18139638.420000"); // 1
    Instrmt_64_set.insert("18139638.420000");
    Instrmt_64.add_attribute("Fctr", "18271649.770000"); // 1
    Instrmt_64_set.insert("18271649.770000");
    Instrmt_64.add_attribute("CrdRtg", "CreditRating_t_2111808473"); // 1
    Instrmt_64_set.insert("CreditRating_t_2111808473");
    Instrmt_64.add_attribute("Rgstry", "InstrRegistry_t_253230673"); // 1
    Instrmt_64_set.insert("InstrRegistry_t_253230673");
    Instrmt_64.add_attribute("IssuCtry", "566085819"); // 1
    Instrmt_64_set.insert("566085819");
    Instrmt_64.add_attribute("StPrv", "StateOrProvinceOfIssue_t_808748720"); // 1
    Instrmt_64_set.insert("StateOrProvinceOfIssue_t_808748720");
    Instrmt_64.add_attribute("Lcl", "LocaleOfIssue_t_107234051"); // 1
    Instrmt_64_set.insert("LocaleOfIssue_t_107234051");
    Instrmt_64.add_attribute("Redeem", "RedemptionDate_t_751610912"); // 1
    Instrmt_64_set.insert("RedemptionDate_t_751610912");
    Instrmt_64.add_attribute("StrkPx", "14152125.520000"); // 1
    Instrmt_64_set.insert("14152125.520000");
    Instrmt_64.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_64_set.insert("USD");
    Instrmt_64.add_attribute("StrkMult", "15885238.470000"); // 1
    Instrmt_64_set.insert("15885238.470000");
    Instrmt_64.add_attribute("StrkValu", "21132628.200000"); // 1
    Instrmt_64_set.insert("21132628.200000");
    Instrmt_64.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_64_set.insert("1");
    Instrmt_64.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_64_set.insert("2");
    Instrmt_64.add_attribute("StrkPxBndryPrcsn", "14690647.800000"); // 1
    Instrmt_64_set.insert("14690647.800000");
    Instrmt_64.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_64_set.insert("3");
    Instrmt_64.add_attribute("OptAt", "357459207"); // 1
    Instrmt_64_set.insert("357459207");
    Instrmt_64.add_attribute("Mult", "189256.300000"); // 1
    Instrmt_64_set.insert("189256.300000");
    Instrmt_64.add_attribute("MultTyp", "0"); // 1
    Instrmt_64_set.insert("0");
    Instrmt_64.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_64_set.insert("0");
    Instrmt_64.add_attribute("MinPxIncr", "13205124.900000"); // 1
    Instrmt_64_set.insert("13205124.900000");
    Instrmt_64.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_252915096"); // 1
    Instrmt_64_set.insert("MinPriceIncrementAmount_t_252915096");
    Instrmt_64.add_attribute("UOM", "Bbl"); // 1
    Instrmt_64_set.insert("Bbl");
    Instrmt_64.add_attribute("UOMQty", "7152228.290000"); // 1
    Instrmt_64_set.insert("7152228.290000");
    Instrmt_64.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_64_set.insert("oz_tr");
    Instrmt_64.add_attribute("PxUOMQty", "2661556.890000"); // 1
    Instrmt_64_set.insert("2661556.890000");
    Instrmt_64.add_attribute("SettlMeth", "P"); // 1
    Instrmt_64_set.insert("P");
    Instrmt_64.add_attribute("ExerStyle", "1"); // 1
    Instrmt_64_set.insert("1");
    Instrmt_64.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_64_set.insert("1");
    Instrmt_64.add_attribute("OptPayAmt", "OptPayoutAmount_t_405995191"); // 1
    Instrmt_64_set.insert("OptPayoutAmount_t_405995191");
    Instrmt_64.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_64_set.insert("PCTPAR");
    Instrmt_64.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_64_set.insert("CDS");
    Instrmt_64.add_attribute("ListMeth", "0"); // 1
    Instrmt_64_set.insert("0");
    Instrmt_64.add_attribute("CapPx", "7222177.320000"); // 1
    Instrmt_64_set.insert("7222177.320000");
    Instrmt_64.add_attribute("FlrPx", "15637644.570000"); // 1
    Instrmt_64_set.insert("15637644.570000");
    Instrmt_64.add_attribute("PutCall", "0"); // 1
    Instrmt_64_set.insert("0");
    Instrmt_64.add_attribute("FlexInd", "false"); // 1
    Instrmt_64_set.insert("false");
    Instrmt_64.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_64_set.insert("false");
    Instrmt_64.add_attribute("TmUnit", "H"); // 1
    Instrmt_64_set.insert("H");
    Instrmt_64.add_attribute("CpnRt", "21286222.200000"); // 1
    Instrmt_64_set.insert("21286222.200000");
    Instrmt_64.add_attribute("Exch", "SecurityExchange_t_325706643"); // 1
    Instrmt_64_set.insert("SecurityExchange_t_325706643");
    Instrmt_64.add_attribute("PosLmt", "2035321487"); // 1
    Instrmt_64_set.insert("2035321487");
    Instrmt_64.add_attribute("NTPosLmt", "2094401392"); // 1
    Instrmt_64_set.insert("2094401392");
    Instrmt_64.add_attribute("Issr", "Issuer_t_1568899335"); // 1
    Instrmt_64_set.insert("Issuer_t_1568899335");
    Instrmt_64.add_attribute("EncIssrLen", "1692763211"); // 1
    Instrmt_64_set.insert("1692763211");
    Instrmt_64.add_attribute("EncIssr", "EncodedIssuer_t_1415982525"); // 1
    Instrmt_64_set.insert("EncodedIssuer_t_1415982525");
    Instrmt_64.add_attribute("Desc", "SecurityDesc_t_1608567249"); // 1
    Instrmt_64_set.insert("SecurityDesc_t_1608567249");
    Instrmt_64.add_attribute("EncSecDescLen", "2050222418"); // 1
    Instrmt_64_set.insert("2050222418");
    Instrmt_64.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1434908155"); // 1
    Instrmt_64_set.insert("EncodedSecurityDesc_t_1434908155");
    Instrmt_64.add_attribute("Pool", "Pool_t_1117890748"); // 1
    Instrmt_64_set.insert("Pool_t_1117890748");
    Instrmt_64.add_attribute("CSetMo", "630759635"); // 1
    Instrmt_64_set.insert("630759635");
    Instrmt_64.add_attribute("CPPgm", "99"); // 1
    Instrmt_64_set.insert("99");
    Instrmt_64.add_attribute("CPRegT", "CPRegType_t_1370805844"); // 1
    Instrmt_64_set.insert("CPRegType_t_1370805844");
    Instrmt_64.add_attribute("Dated", "DatedDate_t_1423335304"); // 1
    Instrmt_64_set.insert("DatedDate_t_1423335304");
    Instrmt_64.add_attribute("IntAcrl", "InterestAccrualDate_t_1323159827"); // 1
    Instrmt_64_set.insert("InterestAccrualDate_t_1323159827");
    all_values.push_back(Instrmt_64_set);
    all_compo_names.insert("Instrmt_64_set");

    {
      xml_element AID_67{"AID"};
      multiset<string> AID_67_set;
      AID_67.add_attribute("AltID", "SecurityAltID_t_1301743914"); // 2
      AID_67_set.insert("SecurityAltID_t_1301743914");
      AID_67.add_attribute("AltIDSrc", "5"); // 2
      AID_67_set.insert("5");
      all_values.push_back(AID_67_set);
      all_compo_names.insert("AID_67_set");

      Instrmt_64.add_element(AID_67);
    }
    {
      xml_element SecXML_67{"SecXML"};
      multiset<string> SecXML_67_set;
      SecXML_67.add_attribute("Schema", "SecurityXMLSchema_t_106182586"); // 2
      SecXML_67_set.insert("SecurityXMLSchema_t_106182586");
      all_values.push_back(SecXML_67_set);
      all_compo_names.insert("SecXML_67_set");

      Instrmt_64.add_element(SecXML_67);
    }
    {
      xml_element Evnt_67{"Evnt"};
      multiset<string> Evnt_67_set;
      Evnt_67.add_attribute("EventTyp", "19"); // 2
      Evnt_67_set.insert("19");
      Evnt_67.add_attribute("Dt", "EventDate_t_860004654"); // 2
      Evnt_67_set.insert("EventDate_t_860004654");
      Evnt_67.add_attribute("Tm", "EventTime_t_512177777"); // 2
      Evnt_67_set.insert("EventTime_t_512177777");
      Evnt_67.add_attribute("Px", "4257541.910000"); // 2
      Evnt_67_set.insert("4257541.910000");
      Evnt_67.add_attribute("Txt", "EventText_t_1857683292"); // 2
      Evnt_67_set.insert("EventText_t_1857683292");
      all_values.push_back(Evnt_67_set);
      all_compo_names.insert("Evnt_67_set");

      Instrmt_64.add_element(Evnt_67);
    }
    {
      xml_element Pty_341{"Pty"};
      multiset<string> Pty_341_set;
      Pty_341.add_attribute("ID", "InstrumentPartyID_t_882497793"); // 2
      Pty_341_set.insert("InstrumentPartyID_t_882497793");
      Pty_341.add_attribute("Src", "I"); // 2
      Pty_341_set.insert("I");
      Pty_341.add_attribute("R", "33"); // 2
      Pty_341_set.insert("33");
      all_values.push_back(Pty_341_set);
      all_compo_names.insert("Pty_341_set");

      {
        xml_element Sub_341{"Sub"};
        multiset<string> Sub_341_set;
        Sub_341.add_attribute("ID", "InstrumentPartySubID_t_2061566529"); // 3
        Sub_341_set.insert("InstrumentPartySubID_t_2061566529");
        Sub_341.add_attribute("Typ", "25"); // 3
        Sub_341_set.insert("25");
        all_values.push_back(Sub_341_set);
        all_compo_names.insert("Sub_341_set");

        Pty_341.add_element(Sub_341);
      }
      Instrmt_64.add_element(Pty_341);
    }
    {
      xml_element CmplxEvnt_64{"CmplxEvnt"};
      multiset<string> CmplxEvnt_64_set;
      CmplxEvnt_64.add_attribute("Typ", "6"); // 2
      CmplxEvnt_64_set.insert("6");
      CmplxEvnt_64.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_360880521"); // 2
      CmplxEvnt_64_set.insert("ComplexOptPayoutAmount_t_360880521");
      CmplxEvnt_64.add_attribute("Px", "19585622.790000"); // 2
      CmplxEvnt_64_set.insert("19585622.790000");
      CmplxEvnt_64.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_64_set.insert("2");
      CmplxEvnt_64.add_attribute("PxBndryPrcsn", "2487183.610000"); // 2
      CmplxEvnt_64_set.insert("2487183.610000");
      CmplxEvnt_64.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_64_set.insert("3");
      CmplxEvnt_64.add_attribute("Cond", "1"); // 2
      CmplxEvnt_64_set.insert("1");
      all_values.push_back(CmplxEvnt_64_set);
      all_compo_names.insert("CmplxEvnt_64_set");

      {
        xml_element EvntDts_64{"EvntDts"};
        multiset<string> EvntDts_64_set;
        EvntDts_64.add_attribute("StartDt", "ComplexEventStartDate_t_1941481572"); // 3
        EvntDts_64_set.insert("ComplexEventStartDate_t_1941481572");
        EvntDts_64.add_attribute("EndDt", "ComplexEventEndDate_t_1173978900"); // 3
        EvntDts_64_set.insert("ComplexEventEndDate_t_1173978900");
        all_values.push_back(EvntDts_64_set);
        all_compo_names.insert("EvntDts_64_set");

        {
          xml_element EvntTms_64{"EvntTms"};
          multiset<string> EvntTms_64_set;
          EvntTms_64.add_attribute("StartTm", "650061755"); // 4
          EvntTms_64_set.insert("650061755");
          EvntTms_64.add_attribute("EndTm", "1844220342"); // 4
          EvntTms_64_set.insert("1844220342");
          all_values.push_back(EvntTms_64_set);
          all_compo_names.insert("EvntTms_64_set");

          EvntDts_64.add_element(EvntTms_64);
        }
        CmplxEvnt_64.add_element(EvntDts_64);
      }
      Instrmt_64.add_element(CmplxEvnt_64);
    }
    elt.add_element(Instrmt_64);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_24{"FinDetls"};
    multiset<string> FinDetls_24_set;
    FinDetls_24.add_attribute("AgmtDesc", "AgreementDesc_t_461403408"); // 1
    FinDetls_24_set.insert("AgreementDesc_t_461403408");
    FinDetls_24.add_attribute("AgmtID", "AgreementID_t_1767952504"); // 1
    FinDetls_24_set.insert("AgreementID_t_1767952504");
    FinDetls_24.add_attribute("AgmtDt", "AgreementDate_t_327496329"); // 1
    FinDetls_24_set.insert("AgreementDate_t_327496329");
    FinDetls_24.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_24_set.insert("USD");
    FinDetls_24.add_attribute("TrmTyp", "2"); // 1
    FinDetls_24_set.insert("2");
    FinDetls_24.add_attribute("StartDt", "StartDate_t_245016584"); // 1
    FinDetls_24_set.insert("StartDate_t_245016584");
    FinDetls_24.add_attribute("EndDt", "EndDate_t_145534966"); // 1
    FinDetls_24_set.insert("EndDate_t_145534966");
    FinDetls_24.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_24_set.insert("3");
    FinDetls_24.add_attribute("MgnRatio", "3511991.710000"); // 1
    FinDetls_24_set.insert("3511991.710000");
    all_values.push_back(FinDetls_24_set);
    all_compo_names.insert("FinDetls_24_set");

    elt.add_element(FinDetls_24);
  } // end FinDetls
  { // Undly
    xml_element Undly_91{"Undly"};
    multiset<string> Undly_91_set;
    Undly_91.add_attribute("Sym", "UnderlyingSymbol_t_5359986"); // 1
    Undly_91_set.insert("UnderlyingSymbol_t_5359986");
    Undly_91.add_attribute("Sfx", "CD"); // 1
    Undly_91_set.insert("CD");
    Undly_91.add_attribute("ID", "UnderlyingSecurityID_t_528056289"); // 1
    Undly_91_set.insert("UnderlyingSecurityID_t_528056289");
    Undly_91.add_attribute("Src", "9"); // 1
    Undly_91_set.insert("9");
    Undly_91.add_attribute("Prod", "10"); // 1
    Undly_91_set.insert("10");
    Undly_91.add_attribute("CFI", "UnderlyingCFICode_t_1676028212"); // 1
    Undly_91_set.insert("UnderlyingCFICode_t_1676028212");
    Undly_91.add_attribute("SecTyp", "MF"); // 1
    Undly_91_set.insert("MF");
    Undly_91.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1659957623"); // 1
    Undly_91_set.insert("UnderlyingSecuritySubType_t_1659957623");
    Undly_91.add_attribute("MMY", "1505968271"); // 1
    Undly_91_set.insert("1505968271");
    Undly_91.add_attribute("Mat", "UnderlyingMaturityDate_t_283895907"); // 1
    Undly_91_set.insert("UnderlyingMaturityDate_t_283895907");
    Undly_91.add_attribute("MatTm", "2020838145"); // 1
    Undly_91_set.insert("2020838145");
    Undly_91.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1317046902"); // 1
    Undly_91_set.insert("UnderlyingCouponPaymentDate_t_1317046902");
    Undly_91.add_attribute("RestrctTyp", "MR"); // 1
    Undly_91_set.insert("MR");
    Undly_91.add_attribute("Snrty", "SB"); // 1
    Undly_91_set.insert("SB");
    Undly_91.add_attribute("NotlPctOut", "10750432.780000"); // 1
    Undly_91_set.insert("10750432.780000");
    Undly_91.add_attribute("OrigNotlPctOut", "10929528.790000"); // 1
    Undly_91_set.insert("10929528.790000");
    Undly_91.add_attribute("AttchPnt", "20635544.300000"); // 1
    Undly_91_set.insert("20635544.300000");
    Undly_91.add_attribute("DetchPnt", "1015385.300000"); // 1
    Undly_91_set.insert("1015385.300000");
    Undly_91.add_attribute("Issued", "UnderlyingIssueDate_t_1743014635"); // 1
    Undly_91_set.insert("UnderlyingIssueDate_t_1743014635");
    Undly_91.add_attribute("RepoCollSecTyp", "1760291124"); // 1
    Undly_91_set.insert("1760291124");
    Undly_91.add_attribute("RepoTrm", "562941938"); // 1
    Undly_91_set.insert("562941938");
    Undly_91.add_attribute("RepoRt", "13634834.910000"); // 1
    Undly_91_set.insert("13634834.910000");
    Undly_91.add_attribute("Fctr", "20877874.530000"); // 1
    Undly_91_set.insert("20877874.530000");
    Undly_91.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1632282344"); // 1
    Undly_91_set.insert("UnderlyingCreditRating_t_1632282344");
    Undly_91.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_207274543"); // 1
    Undly_91_set.insert("UnderlyingInstrRegistry_t_207274543");
    Undly_91.add_attribute("Ctry", "1691135438"); // 1
    Undly_91_set.insert("1691135438");
    Undly_91.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1877298928"); // 1
    Undly_91_set.insert("UnderlyingStateOrProvinceOfIssue_t_1877298928");
    Undly_91.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_352809510"); // 1
    Undly_91_set.insert("UnderlyingLocaleOfIssue_t_352809510");
    Undly_91.add_attribute("Redeem", "UnderlyingRedemptionDate_t_836490770"); // 1
    Undly_91_set.insert("UnderlyingRedemptionDate_t_836490770");
    Undly_91.add_attribute("StrkPx", "810144.510000"); // 1
    Undly_91_set.insert("810144.510000");
    Undly_91.add_attribute("StrkCcy", "GBP"); // 1
    Undly_91_set.insert("GBP");
    Undly_91.add_attribute("OptA", "944391400"); // 1
    Undly_91_set.insert("944391400");
    Undly_91.add_attribute("Mult", "9831678.970000"); // 1
    Undly_91_set.insert("9831678.970000");
    Undly_91.add_attribute("MultTyp", "0"); // 1
    Undly_91_set.insert("0");
    Undly_91.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_91_set.insert("4");
    Undly_91.add_attribute("UOM", "MWh"); // 1
    Undly_91_set.insert("MWh");
    Undly_91.add_attribute("UOMQty", "15469341.180000"); // 1
    Undly_91_set.insert("15469341.180000");
    Undly_91.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_91_set.insert("oz_tr");
    Undly_91.add_attribute("PxUOMQty", "20176807.330000"); // 1
    Undly_91_set.insert("20176807.330000");
    Undly_91.add_attribute("TmUnit", "D"); // 1
    Undly_91_set.insert("D");
    Undly_91.add_attribute("ExerStyle", "0"); // 1
    Undly_91_set.insert("0");
    Undly_91.add_attribute("CpnRt", "11872439.870000"); // 1
    Undly_91_set.insert("11872439.870000");
    Undly_91.add_attribute("Exch", "UnderlyingSecurityExchange_t_1734804751"); // 1
    Undly_91_set.insert("UnderlyingSecurityExchange_t_1734804751");
    Undly_91.add_attribute("Issr", "UnderlyingIssuer_t_50683824"); // 1
    Undly_91_set.insert("UnderlyingIssuer_t_50683824");
    Undly_91.add_attribute("EncUndIssrLen", "114803617"); // 1
    Undly_91_set.insert("114803617");
    Undly_91.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_680273982"); // 1
    Undly_91_set.insert("EncodedUnderlyingIssuer_t_680273982");
    Undly_91.add_attribute("Desc", "UnderlyingSecurityDesc_t_2114238254"); // 1
    Undly_91_set.insert("UnderlyingSecurityDesc_t_2114238254");
    Undly_91.add_attribute("EncUndSecDescLen", "216342148"); // 1
    Undly_91_set.insert("216342148");
    Undly_91.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_275804969"); // 1
    Undly_91_set.insert("EncodedUnderlyingSecurityDesc_t_275804969");
    Undly_91.add_attribute("CPPgm", "UnderlyingCPProgram_t_1727045730"); // 1
    Undly_91_set.insert("UnderlyingCPProgram_t_1727045730");
    Undly_91.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_779284086"); // 1
    Undly_91_set.insert("UnderlyingCPRegType_t_779284086");
    Undly_91.add_attribute("AllocPct", "16392884.600000"); // 1
    Undly_91_set.insert("16392884.600000");
    Undly_91.add_attribute("Ccy", "USD"); // 1
    Undly_91_set.insert("USD");
    Undly_91.add_attribute("Qty", "18465630.040000"); // 1
    Undly_91_set.insert("18465630.040000");
    Undly_91.add_attribute("SettlTyp", "5"); // 1
    Undly_91_set.insert("5");
    Undly_91.add_attribute("CashAmt", "UnderlyingCashAmount_t_2141381711"); // 1
    Undly_91_set.insert("UnderlyingCashAmount_t_2141381711");
    Undly_91.add_attribute("CashTyp", "FIXED"); // 1
    Undly_91_set.insert("FIXED");
    Undly_91.add_attribute("Px", "20474920.960000"); // 1
    Undly_91_set.insert("20474920.960000");
    Undly_91.add_attribute("DirtPx", "749125.140000"); // 1
    Undly_91_set.insert("749125.140000");
    Undly_91.add_attribute("EndPx", "5070004.740000"); // 1
    Undly_91_set.insert("5070004.740000");
    Undly_91.add_attribute("StartVal", "UnderlyingStartValue_t_741859204"); // 1
    Undly_91_set.insert("UnderlyingStartValue_t_741859204");
    Undly_91.add_attribute("CurVal", "UnderlyingCurrentValue_t_1019303914"); // 1
    Undly_91_set.insert("UnderlyingCurrentValue_t_1019303914");
    Undly_91.add_attribute("EndVal", "UnderlyingEndValue_t_1490168371"); // 1
    Undly_91_set.insert("UnderlyingEndValue_t_1490168371");
    Undly_91.add_attribute("AdjQty", "12992695.900000"); // 1
    Undly_91_set.insert("12992695.900000");
    Undly_91.add_attribute("FxRate", "15620864.080000"); // 1
    Undly_91_set.insert("15620864.080000");
    Undly_91.add_attribute("FxRateCalc", "M"); // 1
    Undly_91_set.insert("M");
    Undly_91.add_attribute("CapValu", "UnderlyingCapValue_t_698720061"); // 1
    Undly_91_set.insert("UnderlyingCapValue_t_698720061");
    Undly_91.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1617342878"); // 1
    Undly_91_set.insert("UnderlyingSettlMethod_t_1617342878");
    Undly_91.add_attribute("PutCall", "1872077917"); // 1
    Undly_91_set.insert("1872077917");
    all_values.push_back(Undly_91_set);
    all_compo_names.insert("Undly_91_set");

    {
      xml_element UndAID_91{"UndAID"};
      multiset<string> UndAID_91_set;
      UndAID_91.add_attribute("AltID", "UnderlyingSecurityAltID_t_382066438"); // 2
      UndAID_91_set.insert("UnderlyingSecurityAltID_t_382066438");
      UndAID_91.add_attribute("AltIDSrc", "7"); // 2
      UndAID_91_set.insert("7");
      all_values.push_back(UndAID_91_set);
      all_compo_names.insert("UndAID_91_set");

      Undly_91.add_element(UndAID_91);
    }
    {
      xml_element Stip_147{"Stip"};
      multiset<string> Stip_147_set;
      Stip_147.add_attribute("Typ", "ISSUESIZE"); // 2
      Stip_147_set.insert("ISSUESIZE");
      Stip_147.add_attribute("Val", "UnderlyingStipValue_t_2116871189"); // 2
      Stip_147_set.insert("UnderlyingStipValue_t_2116871189");
      all_values.push_back(Stip_147_set);
      all_compo_names.insert("Stip_147_set");

      Undly_91.add_element(Stip_147);
    }
    {
      xml_element Pty_342{"Pty"};
      multiset<string> Pty_342_set;
      Pty_342.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1596637669"); // 2
      Pty_342_set.insert("UnderlyingInstrumentPartyID_t_1596637669");
      Pty_342.add_attribute("Src", "D"); // 2
      Pty_342_set.insert("D");
      Pty_342.add_attribute("R", "66"); // 2
      Pty_342_set.insert("66");
      all_values.push_back(Pty_342_set);
      all_compo_names.insert("Pty_342_set");

      {
        xml_element Sub_342{"Sub"};
        multiset<string> Sub_342_set;
        Sub_342.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1563392275"); // 3
        Sub_342_set.insert("UnderlyingInstrumentPartySubID_t_1563392275");
        Sub_342.add_attribute("Typ", "24"); // 3
        Sub_342_set.insert("24");
        all_values.push_back(Sub_342_set);
        all_compo_names.insert("Sub_342_set");

        Pty_342.add_element(Sub_342);
      }
      Undly_91.add_element(Pty_342);
    }
    elt.add_element(Undly_91);
  } // end Undly
  { // Undly
    xml_element Undly_92{"Undly"};
    multiset<string> Undly_92_set;
    Undly_92.add_attribute("Sym", "UnderlyingSymbol_t_925466493"); // 1
    Undly_92_set.insert("UnderlyingSymbol_t_925466493");
    Undly_92.add_attribute("Sfx", "CD"); // 1
    Undly_92_set.insert("CD");
    Undly_92.add_attribute("ID", "UnderlyingSecurityID_t_2022268109"); // 1
    Undly_92_set.insert("UnderlyingSecurityID_t_2022268109");
    Undly_92.add_attribute("Src", "D"); // 1
    Undly_92_set.insert("D");
    Undly_92.add_attribute("Prod", "6"); // 1
    Undly_92_set.insert("6");
    Undly_92.add_attribute("CFI", "UnderlyingCFICode_t_138867243"); // 1
    Undly_92_set.insert("UnderlyingCFICode_t_138867243");
    Undly_92.add_attribute("SecTyp", "SPCLO"); // 1
    Undly_92_set.insert("SPCLO");
    Undly_92.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1873821571"); // 1
    Undly_92_set.insert("UnderlyingSecuritySubType_t_1873821571");
    Undly_92.add_attribute("MMY", "132765306"); // 1
    Undly_92_set.insert("132765306");
    Undly_92.add_attribute("Mat", "UnderlyingMaturityDate_t_168239528"); // 1
    Undly_92_set.insert("UnderlyingMaturityDate_t_168239528");
    Undly_92.add_attribute("MatTm", "1773830019"); // 1
    Undly_92_set.insert("1773830019");
    Undly_92.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_207677821"); // 1
    Undly_92_set.insert("UnderlyingCouponPaymentDate_t_207677821");
    Undly_92.add_attribute("RestrctTyp", "MM"); // 1
    Undly_92_set.insert("MM");
    Undly_92.add_attribute("Snrty", "SB"); // 1
    Undly_92_set.insert("SB");
    Undly_92.add_attribute("NotlPctOut", "12269817.350000"); // 1
    Undly_92_set.insert("12269817.350000");
    Undly_92.add_attribute("OrigNotlPctOut", "179247.250000"); // 1
    Undly_92_set.insert("179247.250000");
    Undly_92.add_attribute("AttchPnt", "16674751.660000"); // 1
    Undly_92_set.insert("16674751.660000");
    Undly_92.add_attribute("DetchPnt", "6415844.960000"); // 1
    Undly_92_set.insert("6415844.960000");
    Undly_92.add_attribute("Issued", "UnderlyingIssueDate_t_2019805557"); // 1
    Undly_92_set.insert("UnderlyingIssueDate_t_2019805557");
    Undly_92.add_attribute("RepoCollSecTyp", "218711579"); // 1
    Undly_92_set.insert("218711579");
    Undly_92.add_attribute("RepoTrm", "111443726"); // 1
    Undly_92_set.insert("111443726");
    Undly_92.add_attribute("RepoRt", "17443998.270000"); // 1
    Undly_92_set.insert("17443998.270000");
    Undly_92.add_attribute("Fctr", "6007780.170000"); // 1
    Undly_92_set.insert("6007780.170000");
    Undly_92.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1657397570"); // 1
    Undly_92_set.insert("UnderlyingCreditRating_t_1657397570");
    Undly_92.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_508754436"); // 1
    Undly_92_set.insert("UnderlyingInstrRegistry_t_508754436");
    Undly_92.add_attribute("Ctry", "570165559"); // 1
    Undly_92_set.insert("570165559");
    Undly_92.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1106551591"); // 1
    Undly_92_set.insert("UnderlyingStateOrProvinceOfIssue_t_1106551591");
    Undly_92.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1535396310"); // 1
    Undly_92_set.insert("UnderlyingLocaleOfIssue_t_1535396310");
    Undly_92.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1219827083"); // 1
    Undly_92_set.insert("UnderlyingRedemptionDate_t_1219827083");
    Undly_92.add_attribute("StrkPx", "5224602.190000"); // 1
    Undly_92_set.insert("5224602.190000");
    Undly_92.add_attribute("StrkCcy", "GBP"); // 1
    Undly_92_set.insert("GBP");
    Undly_92.add_attribute("OptA", "1665414577"); // 1
    Undly_92_set.insert("1665414577");
    Undly_92.add_attribute("Mult", "5056811.460000"); // 1
    Undly_92_set.insert("5056811.460000");
    Undly_92.add_attribute("MultTyp", "1"); // 1
    Undly_92_set.insert("1");
    Undly_92.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_92_set.insert("4");
    Undly_92.add_attribute("UOM", "t"); // 1
    Undly_92_set.insert("t");
    Undly_92.add_attribute("UOMQty", "5314318.960000"); // 1
    Undly_92_set.insert("5314318.960000");
    Undly_92.add_attribute("PxUOM", "tn"); // 1
    Undly_92_set.insert("tn");
    Undly_92.add_attribute("PxUOMQty", "7773136.960000"); // 1
    Undly_92_set.insert("7773136.960000");
    Undly_92.add_attribute("TmUnit", "Wk"); // 1
    Undly_92_set.insert("Wk");
    Undly_92.add_attribute("ExerStyle", "1"); // 1
    Undly_92_set.insert("1");
    Undly_92.add_attribute("CpnRt", "9849915.170000"); // 1
    Undly_92_set.insert("9849915.170000");
    Undly_92.add_attribute("Exch", "UnderlyingSecurityExchange_t_1374911426"); // 1
    Undly_92_set.insert("UnderlyingSecurityExchange_t_1374911426");
    Undly_92.add_attribute("Issr", "UnderlyingIssuer_t_2049124693"); // 1
    Undly_92_set.insert("UnderlyingIssuer_t_2049124693");
    Undly_92.add_attribute("EncUndIssrLen", "64489604"); // 1
    Undly_92_set.insert("64489604");
    Undly_92.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1392836151"); // 1
    Undly_92_set.insert("EncodedUnderlyingIssuer_t_1392836151");
    Undly_92.add_attribute("Desc", "UnderlyingSecurityDesc_t_1569116211"); // 1
    Undly_92_set.insert("UnderlyingSecurityDesc_t_1569116211");
    Undly_92.add_attribute("EncUndSecDescLen", "706074100"); // 1
    Undly_92_set.insert("706074100");
    Undly_92.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1265158061"); // 1
    Undly_92_set.insert("EncodedUnderlyingSecurityDesc_t_1265158061");
    Undly_92.add_attribute("CPPgm", "UnderlyingCPProgram_t_1787827790"); // 1
    Undly_92_set.insert("UnderlyingCPProgram_t_1787827790");
    Undly_92.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_817517826"); // 1
    Undly_92_set.insert("UnderlyingCPRegType_t_817517826");
    Undly_92.add_attribute("AllocPct", "8620742.400000"); // 1
    Undly_92_set.insert("8620742.400000");
    Undly_92.add_attribute("Ccy", "EUR"); // 1
    Undly_92_set.insert("EUR");
    Undly_92.add_attribute("Qty", "13708286.760000"); // 1
    Undly_92_set.insert("13708286.760000");
    Undly_92.add_attribute("SettlTyp", "4"); // 1
    Undly_92_set.insert("4");
    Undly_92.add_attribute("CashAmt", "UnderlyingCashAmount_t_1433983340"); // 1
    Undly_92_set.insert("UnderlyingCashAmount_t_1433983340");
    Undly_92.add_attribute("CashTyp", "FIXED"); // 1
    Undly_92_set.insert("FIXED");
    Undly_92.add_attribute("Px", "20311148.010000"); // 1
    Undly_92_set.insert("20311148.010000");
    Undly_92.add_attribute("DirtPx", "19564435.590000"); // 1
    Undly_92_set.insert("19564435.590000");
    Undly_92.add_attribute("EndPx", "13896380.230000"); // 1
    Undly_92_set.insert("13896380.230000");
    Undly_92.add_attribute("StartVal", "UnderlyingStartValue_t_2028924730"); // 1
    Undly_92_set.insert("UnderlyingStartValue_t_2028924730");
    Undly_92.add_attribute("CurVal", "UnderlyingCurrentValue_t_1474374488"); // 1
    Undly_92_set.insert("UnderlyingCurrentValue_t_1474374488");
    Undly_92.add_attribute("EndVal", "UnderlyingEndValue_t_1895319169"); // 1
    Undly_92_set.insert("UnderlyingEndValue_t_1895319169");
    Undly_92.add_attribute("AdjQty", "2965223.160000"); // 1
    Undly_92_set.insert("2965223.160000");
    Undly_92.add_attribute("FxRate", "16551256.630000"); // 1
    Undly_92_set.insert("16551256.630000");
    Undly_92.add_attribute("FxRateCalc", "D"); // 1
    Undly_92_set.insert("D");
    Undly_92.add_attribute("CapValu", "UnderlyingCapValue_t_827954213"); // 1
    Undly_92_set.insert("UnderlyingCapValue_t_827954213");
    Undly_92.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1562214761"); // 1
    Undly_92_set.insert("UnderlyingSettlMethod_t_1562214761");
    Undly_92.add_attribute("PutCall", "1169697607"); // 1
    Undly_92_set.insert("1169697607");
    all_values.push_back(Undly_92_set);
    all_compo_names.insert("Undly_92_set");

    {
      xml_element UndAID_92{"UndAID"};
      multiset<string> UndAID_92_set;
      UndAID_92.add_attribute("AltID", "UnderlyingSecurityAltID_t_1527625637"); // 2
      UndAID_92_set.insert("UnderlyingSecurityAltID_t_1527625637");
      UndAID_92.add_attribute("AltIDSrc", "5"); // 2
      UndAID_92_set.insert("5");
      all_values.push_back(UndAID_92_set);
      all_compo_names.insert("UndAID_92_set");

      Undly_92.add_element(UndAID_92);
    }
    {
      xml_element Stip_148{"Stip"};
      multiset<string> Stip_148_set;
      Stip_148.add_attribute("Typ", "PRICE"); // 2
      Stip_148_set.insert("PRICE");
      Stip_148.add_attribute("Val", "UnderlyingStipValue_t_755053416"); // 2
      Stip_148_set.insert("UnderlyingStipValue_t_755053416");
      all_values.push_back(Stip_148_set);
      all_compo_names.insert("Stip_148_set");

      Undly_92.add_element(Stip_148);
    }
    {
      xml_element Pty_343{"Pty"};
      multiset<string> Pty_343_set;
      Pty_343.add_attribute("ID", "UnderlyingInstrumentPartyID_t_997291275"); // 2
      Pty_343_set.insert("UnderlyingInstrumentPartyID_t_997291275");
      Pty_343.add_attribute("Src", "1"); // 2
      Pty_343_set.insert("1");
      Pty_343.add_attribute("R", "4"); // 2
      Pty_343_set.insert("4");
      all_values.push_back(Pty_343_set);
      all_compo_names.insert("Pty_343_set");

      {
        xml_element Sub_343{"Sub"};
        multiset<string> Sub_343_set;
        Sub_343.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_418923838"); // 3
        Sub_343_set.insert("UnderlyingInstrumentPartySubID_t_418923838");
        Sub_343.add_attribute("Typ", "11"); // 3
        Sub_343_set.insert("11");
        all_values.push_back(Sub_343_set);
        all_compo_names.insert("Sub_343_set");

        Pty_343.add_element(Sub_343);
      }
      Undly_92.add_element(Pty_343);
    }
    elt.add_element(Undly_92);
  } // end Undly
  { // Leg
    xml_element Leg_78{"Leg"};
    multiset<string> Leg_78_set;
    Leg_78.add_attribute("Sym", "LegSymbol_t_59267980"); // 1
    Leg_78_set.insert("LegSymbol_t_59267980");
    Leg_78.add_attribute("Sfx", "WI"); // 1
    Leg_78_set.insert("WI");
    Leg_78.add_attribute("ID", "LegSecurityID_t_2127638220"); // 1
    Leg_78_set.insert("LegSecurityID_t_2127638220");
    Leg_78.add_attribute("Src", "7"); // 1
    Leg_78_set.insert("7");
    Leg_78.add_attribute("Prod", "7"); // 1
    Leg_78_set.insert("7");
    Leg_78.add_attribute("CFI", "LegCFICode_t_1350983248"); // 1
    Leg_78_set.insert("LegCFICode_t_1350983248");
    Leg_78.add_attribute("SecTyp", "YANK"); // 1
    Leg_78_set.insert("YANK");
    Leg_78.add_attribute("SecSubTyp", "LegSecuritySubType_t_1209218449"); // 1
    Leg_78_set.insert("LegSecuritySubType_t_1209218449");
    Leg_78.add_attribute("MMY", "2109724587"); // 1
    Leg_78_set.insert("2109724587");
    Leg_78.add_attribute("Mat", "LegMaturityDate_t_995309012"); // 1
    Leg_78_set.insert("LegMaturityDate_t_995309012");
    Leg_78.add_attribute("MatTm", "1018178360"); // 1
    Leg_78_set.insert("1018178360");
    Leg_78.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1351878962"); // 1
    Leg_78_set.insert("LegCouponPaymentDate_t_1351878962");
    Leg_78.add_attribute("Issued", "LegIssueDate_t_876750094"); // 1
    Leg_78_set.insert("LegIssueDate_t_876750094");
    Leg_78.add_attribute("RepoCollSecTyp", "345069201"); // 1
    Leg_78_set.insert("345069201");
    Leg_78.add_attribute("RepoTrm", "1099714484"); // 1
    Leg_78_set.insert("1099714484");
    Leg_78.add_attribute("RepoRt", "11732724.100000"); // 1
    Leg_78_set.insert("11732724.100000");
    Leg_78.add_attribute("Fctr", "20001948.640000"); // 1
    Leg_78_set.insert("20001948.640000");
    Leg_78.add_attribute("CrdRtg", "LegCreditRating_t_1492098395"); // 1
    Leg_78_set.insert("LegCreditRating_t_1492098395");
    Leg_78.add_attribute("Rgstry", "LegInstrRegistry_t_2001226623"); // 1
    Leg_78_set.insert("LegInstrRegistry_t_2001226623");
    Leg_78.add_attribute("Ctry", "1414925977"); // 1
    Leg_78_set.insert("1414925977");
    Leg_78.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_514312354"); // 1
    Leg_78_set.insert("LegStateOrProvinceOfIssue_t_514312354");
    Leg_78.add_attribute("Lcl", "LegLocaleOfIssue_t_1381368613"); // 1
    Leg_78_set.insert("LegLocaleOfIssue_t_1381368613");
    Leg_78.add_attribute("Redeem", "LegRedemptionDate_t_363092559"); // 1
    Leg_78_set.insert("LegRedemptionDate_t_363092559");
    Leg_78.add_attribute("Strk", "5215178.300000"); // 1
    Leg_78_set.insert("5215178.300000");
    Leg_78.add_attribute("StrkCcy", "EUR"); // 1
    Leg_78_set.insert("EUR");
    Leg_78.add_attribute("OptA", "593212910"); // 1
    Leg_78_set.insert("593212910");
    Leg_78.add_attribute("Cmult", "21368279.480000"); // 1
    Leg_78_set.insert("21368279.480000");
    Leg_78.add_attribute("MultTyp", "2"); // 1
    Leg_78_set.insert("2");
    Leg_78.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_78_set.insert("1");
    Leg_78.add_attribute("UOM", "Gal"); // 1
    Leg_78_set.insert("Gal");
    Leg_78.add_attribute("UOMQty", "18385756.540000"); // 1
    Leg_78_set.insert("18385756.540000");
    Leg_78.add_attribute("PxUOM", "Gal"); // 1
    Leg_78_set.insert("Gal");
    Leg_78.add_attribute("PxUOMQty", "12350628.530000"); // 1
    Leg_78_set.insert("12350628.530000");
    Leg_78.add_attribute("TmUnit", "S"); // 1
    Leg_78_set.insert("S");
    Leg_78.add_attribute("ExerStyle", "0"); // 1
    Leg_78_set.insert("0");
    Leg_78.add_attribute("CpnRt", "4385624.540000"); // 1
    Leg_78_set.insert("4385624.540000");
    Leg_78.add_attribute("Exch", "LegSecurityExchange_t_1103160004"); // 1
    Leg_78_set.insert("LegSecurityExchange_t_1103160004");
    Leg_78.add_attribute("Issr", "LegIssuer_t_1803239008"); // 1
    Leg_78_set.insert("LegIssuer_t_1803239008");
    Leg_78.add_attribute("EncLegIssrLen", "400803393"); // 1
    Leg_78_set.insert("400803393");
    Leg_78.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2098469016"); // 1
    Leg_78_set.insert("EncodedLegIssuer_t_2098469016");
    Leg_78.add_attribute("Desc", "LegSecurityDesc_t_673933721"); // 1
    Leg_78_set.insert("LegSecurityDesc_t_673933721");
    Leg_78.add_attribute("EncLegSecDescLen", "1752682355"); // 1
    Leg_78_set.insert("1752682355");
    Leg_78.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_827735462"); // 1
    Leg_78_set.insert("EncodedLegSecurityDesc_t_827735462");
    Leg_78.add_attribute("RatioQty", "10190029.220000"); // 1
    Leg_78_set.insert("10190029.220000");
    Leg_78.add_attribute("Side", "8"); // 1
    Leg_78_set.insert("8");
    Leg_78.add_attribute("Ccy", "JPY"); // 1
    Leg_78_set.insert("JPY");
    Leg_78.add_attribute("Pool", "LegPool_t_49527938"); // 1
    Leg_78_set.insert("LegPool_t_49527938");
    Leg_78.add_attribute("Dated", "LegDatedDate_t_1854750848"); // 1
    Leg_78_set.insert("LegDatedDate_t_1854750848");
    Leg_78.add_attribute("CSetMo", "139156467"); // 1
    Leg_78_set.insert("139156467");
    Leg_78.add_attribute("IntAcrl", "LegInterestAccrualDate_t_563840292"); // 1
    Leg_78_set.insert("LegInterestAccrualDate_t_563840292");
    Leg_78.add_attribute("PutCall", "1088635813"); // 1
    Leg_78_set.insert("1088635813");
    Leg_78.add_attribute("LegOptionRatio", "5022490.260000"); // 1
    Leg_78_set.insert("5022490.260000");
    Leg_78.add_attribute("Px", "10853581.220000"); // 1
    Leg_78_set.insert("10853581.220000");
    all_values.push_back(Leg_78_set);
    all_compo_names.insert("Leg_78_set");

    {
      xml_element LegAID_75{"LegAID"};
      multiset<string> LegAID_75_set;
      LegAID_75.add_attribute("SecAltID", "LegSecurityAltID_t_1077574194"); // 2
      LegAID_75_set.insert("LegSecurityAltID_t_1077574194");
      LegAID_75.add_attribute("SecAltIDSrc", "2"); // 2
      LegAID_75_set.insert("2");
      all_values.push_back(LegAID_75_set);
      all_compo_names.insert("LegAID_75_set");

      Leg_78.add_element(LegAID_75);
    }
    elt.add_element(Leg_78);
  } // end Leg
  { // Pty
    xml_element Pty_344{"Pty"};
    multiset<string> Pty_344_set;
    Pty_344.add_attribute("ID", "PartyID_t_1066918495"); // 1
    Pty_344_set.insert("PartyID_t_1066918495");
    Pty_344.add_attribute("Src", "C"); // 1
    Pty_344_set.insert("C");
    Pty_344.add_attribute("R", "36"); // 1
    Pty_344_set.insert("36");
    all_values.push_back(Pty_344_set);
    all_compo_names.insert("Pty_344_set");

    {
      xml_element Sub_344{"Sub"};
      multiset<string> Sub_344_set;
      Sub_344.add_attribute("ID", "PartySubID_t_174343128"); // 2
      Sub_344_set.insert("PartySubID_t_174343128");
      Sub_344.add_attribute("Typ", "10"); // 2
      Sub_344_set.insert("10");
      all_values.push_back(Sub_344_set);
      all_compo_names.insert("Sub_344_set");

      Pty_344.add_element(Sub_344);
    }
    elt.add_element(Pty_344);
  } // end Pty
  { // Pty
    xml_element Pty_345{"Pty"};
    multiset<string> Pty_345_set;
    Pty_345.add_attribute("ID", "PartyID_t_1720854927"); // 1
    Pty_345_set.insert("PartyID_t_1720854927");
    Pty_345.add_attribute("Src", "6"); // 1
    Pty_345_set.insert("6");
    Pty_345.add_attribute("R", "31"); // 1
    Pty_345_set.insert("31");
    all_values.push_back(Pty_345_set);
    all_compo_names.insert("Pty_345_set");

    {
      xml_element Sub_345{"Sub"};
      multiset<string> Sub_345_set;
      Sub_345.add_attribute("ID", "PartySubID_t_167391839"); // 2
      Sub_345_set.insert("PartySubID_t_167391839");
      Sub_345.add_attribute("Typ", "24"); // 2
      Sub_345_set.insert("24");
      all_values.push_back(Sub_345_set);
      all_compo_names.insert("Sub_345_set");

      Pty_345.add_element(Sub_345);
    }
    elt.add_element(Pty_345);
  } // end Pty
  { // Pty
    xml_element Pty_346{"Pty"};
    multiset<string> Pty_346_set;
    Pty_346.add_attribute("ID", "PartyID_t_132707395"); // 1
    Pty_346_set.insert("PartyID_t_132707395");
    Pty_346.add_attribute("Src", "A"); // 1
    Pty_346_set.insert("A");
    Pty_346.add_attribute("R", "59"); // 1
    Pty_346_set.insert("59");
    all_values.push_back(Pty_346_set);
    all_compo_names.insert("Pty_346_set");

    {
      xml_element Sub_346{"Sub"};
      multiset<string> Sub_346_set;
      Sub_346.add_attribute("ID", "PartySubID_t_83692764"); // 2
      Sub_346_set.insert("PartySubID_t_83692764");
      Sub_346.add_attribute("Typ", "15"); // 2
      Sub_346_set.insert("15");
      all_values.push_back(Sub_346_set);
      all_compo_names.insert("Sub_346_set");

      Pty_346.add_element(Sub_346);
    }
    elt.add_element(Pty_346);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_18{"TgtPty"};
    multiset<string> TgtPty_18_set;
    TgtPty_18.add_attribute("ID", "TargetPartyID_t_911428226"); // 1
    TgtPty_18_set.insert("TargetPartyID_t_911428226");
    TgtPty_18.add_attribute("Src", "3"); // 1
    TgtPty_18_set.insert("3");
    TgtPty_18.add_attribute("R", "85"); // 1
    TgtPty_18_set.insert("85");
    all_values.push_back(TgtPty_18_set);
    all_compo_names.insert("TgtPty_18_set");

    elt.add_element(TgtPty_18);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_19{"TgtPty"};
    multiset<string> TgtPty_19_set;
    TgtPty_19.add_attribute("ID", "TargetPartyID_t_764952451"); // 1
    TgtPty_19_set.insert("TargetPartyID_t_764952451");
    TgtPty_19.add_attribute("Src", "5"); // 1
    TgtPty_19_set.insert("5");
    TgtPty_19.add_attribute("R", "34"); // 1
    TgtPty_19_set.insert("34");
    all_values.push_back(TgtPty_19_set);
    all_compo_names.insert("TgtPty_19_set");

    elt.add_element(TgtPty_19);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_20{"TgtPty"};
    multiset<string> TgtPty_20_set;
    TgtPty_20.add_attribute("ID", "TargetPartyID_t_472219652"); // 1
    TgtPty_20_set.insert("TargetPartyID_t_472219652");
    TgtPty_20.add_attribute("Src", "2"); // 1
    TgtPty_20_set.insert("2");
    TgtPty_20.add_attribute("R", "64"); // 1
    TgtPty_20_set.insert("64");
    all_values.push_back(TgtPty_20_set);
    all_compo_names.insert("TgtPty_20_set");

    elt.add_element(TgtPty_20);
  } // end TgtPty
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
