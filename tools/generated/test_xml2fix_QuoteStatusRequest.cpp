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
  elt.add_attribute("StatReqID", "QuoteStatusReqID_t_987782691"); // 0
  QuoteStatusRequest_message_t_0.insert("QuoteStatusReqID_t_987782691");
  elt.add_attribute("QID", "QuoteID_t_1951432369"); // 0
  QuoteStatusRequest_message_t_0.insert("QuoteID_t_1951432369");
  elt.add_attribute("Acct", "Account_t_1198741136"); // 0
  QuoteStatusRequest_message_t_0.insert("Account_t_1198741136");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  QuoteStatusRequest_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "1"); // 0
  QuoteStatusRequest_message_t_0.insert("1");
  elt.add_attribute("SesID", "5"); // 0
  QuoteStatusRequest_message_t_0.insert("5");
  elt.add_attribute("SesSub", "3"); // 0
  QuoteStatusRequest_message_t_0.insert("3");
  elt.add_attribute("SubReqTyp", "1"); // 0
  QuoteStatusRequest_message_t_0.insert("1");
  all_values.push_back(QuoteStatusRequest_message_t_0);
  all_compo_names.insert("QuoteStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_74{"Hdr"};
    multiset<string> Hdr_74_set;
    Hdr_74.add_attribute("SeqNum", "1537275565"); // 1
    Hdr_74_set.insert("1537275565");
    Hdr_74.add_attribute("SID", "SenderCompID_t_508412974"); // 1
    Hdr_74_set.insert("SenderCompID_t_508412974");
    Hdr_74.add_attribute("TID", "TargetCompID_t_97703942"); // 1
    Hdr_74_set.insert("TargetCompID_t_97703942");
    Hdr_74.add_attribute("OBID", "OnBehalfOfCompID_t_1832682407"); // 1
    Hdr_74_set.insert("OnBehalfOfCompID_t_1832682407");
    Hdr_74.add_attribute("D2ID", "DeliverToCompID_t_774485874"); // 1
    Hdr_74_set.insert("DeliverToCompID_t_774485874");
    Hdr_74.add_attribute("SSub", "SenderSubID_t_306120606"); // 1
    Hdr_74_set.insert("SenderSubID_t_306120606");
    Hdr_74.add_attribute("SLoc", "SenderLocationID_t_315160347"); // 1
    Hdr_74_set.insert("SenderLocationID_t_315160347");
    Hdr_74.add_attribute("TSub", "TargetSubID_t_977952676"); // 1
    Hdr_74_set.insert("TargetSubID_t_977952676");
    Hdr_74.add_attribute("TLoc", "TargetLocationID_t_1391434024"); // 1
    Hdr_74_set.insert("TargetLocationID_t_1391434024");
    Hdr_74.add_attribute("OBSub", "OnBehalfOfSubID_t_1253490944"); // 1
    Hdr_74_set.insert("OnBehalfOfSubID_t_1253490944");
    Hdr_74.add_attribute("OBLoc", "OnBehalfOfLocationID_t_85056796"); // 1
    Hdr_74_set.insert("OnBehalfOfLocationID_t_85056796");
    Hdr_74.add_attribute("D2Sub", "DeliverToSubID_t_162654934"); // 1
    Hdr_74_set.insert("DeliverToSubID_t_162654934");
    Hdr_74.add_attribute("D2Loc", "DeliverToLocationID_t_935176645"); // 1
    Hdr_74_set.insert("DeliverToLocationID_t_935176645");
    Hdr_74.add_attribute("PosDup", "Y"); // 1
    Hdr_74_set.insert("Y");
    Hdr_74.add_attribute("PosRsnd", "N"); // 1
    Hdr_74_set.insert("N");
    Hdr_74.add_attribute("Snt", "SendingTime_t_442285906"); // 1
    Hdr_74_set.insert("SendingTime_t_442285906");
    Hdr_74.add_attribute("OrigSnt", "OrigSendingTime_t_1801779043"); // 1
    Hdr_74_set.insert("OrigSendingTime_t_1801779043");
    Hdr_74.add_attribute("MsgEncd", "MessageEncoding_t_837996019"); // 1
    Hdr_74_set.insert("MessageEncoding_t_837996019");
    all_values.push_back(Hdr_74_set);
    all_compo_names.insert("Hdr_74_set");

    {
      xml_element Hop_74{"Hop"};
      multiset<string> Hop_74_set;
      Hop_74.add_attribute("ID", "HopCompID_t_253510190"); // 2
      Hop_74_set.insert("HopCompID_t_253510190");
      Hop_74.add_attribute("Ref", "1748445085"); // 2
      Hop_74_set.insert("1748445085");
      Hop_74.add_attribute("Snt", "HopSendingTime_t_2089812545"); // 2
      Hop_74_set.insert("HopSendingTime_t_2089812545");
      all_values.push_back(Hop_74_set);
      all_compo_names.insert("Hop_74_set");

      Hdr_74.add_element(Hop_74);
    }
    elt.add_element(Hdr_74);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_68{"Instrmt"};
    multiset<string> Instrmt_68_set;
    Instrmt_68.add_attribute("Sym", "Symbol_t_939614122"); // 1
    Instrmt_68_set.insert("Symbol_t_939614122");
    Instrmt_68.add_attribute("Sfx", "WI"); // 1
    Instrmt_68_set.insert("WI");
    Instrmt_68.add_attribute("ID", "SecurityID_t_930111588"); // 1
    Instrmt_68_set.insert("SecurityID_t_930111588");
    Instrmt_68.add_attribute("Src", "3"); // 1
    Instrmt_68_set.insert("3");
    Instrmt_68.add_attribute("Prod", "6"); // 1
    Instrmt_68_set.insert("6");
    Instrmt_68.add_attribute("ProdCmplx", "ProductComplex_t_289237251"); // 1
    Instrmt_68_set.insert("ProductComplex_t_289237251");
    Instrmt_68.add_attribute("SecGrp", "SecurityGroup_t_575545020"); // 1
    Instrmt_68_set.insert("SecurityGroup_t_575545020");
    Instrmt_68.add_attribute("CFI", "CFICode_t_575966181"); // 1
    Instrmt_68_set.insert("CFICode_t_575966181");
    Instrmt_68.add_attribute("SecTyp", "TD"); // 1
    Instrmt_68_set.insert("TD");
    Instrmt_68.add_attribute("SubTyp", "SecuritySubType_t_1164263693"); // 1
    Instrmt_68_set.insert("SecuritySubType_t_1164263693");
    Instrmt_68.add_attribute("MMY", "2113241746"); // 1
    Instrmt_68_set.insert("2113241746");
    Instrmt_68.add_attribute("MatDt", "MaturityDate_t_875111150"); // 1
    Instrmt_68_set.insert("MaturityDate_t_875111150");
    Instrmt_68.add_attribute("MatTm", "1261967635"); // 1
    Instrmt_68_set.insert("1261967635");
    Instrmt_68.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1798440506"); // 1
    Instrmt_68_set.insert("SettleOnOpenFlag_t_1798440506");
    Instrmt_68.add_attribute("AsgnMeth", "1649597025"); // 1
    Instrmt_68_set.insert("1649597025");
    Instrmt_68.add_attribute("Status", "2"); // 1
    Instrmt_68_set.insert("2");
    Instrmt_68.add_attribute("CpnPmt", "CouponPaymentDate_t_2113600853"); // 1
    Instrmt_68_set.insert("CouponPaymentDate_t_2113600853");
    Instrmt_68.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_68_set.insert("MR");
    Instrmt_68.add_attribute("Snrty", "SD"); // 1
    Instrmt_68_set.insert("SD");
    Instrmt_68.add_attribute("NotlPctOut", "12196081.500000"); // 1
    Instrmt_68_set.insert("12196081.500000");
    Instrmt_68.add_attribute("OrigNotlPctOut", "5651228.490000"); // 1
    Instrmt_68_set.insert("5651228.490000");
    Instrmt_68.add_attribute("AttchPnt", "9746935.520000"); // 1
    Instrmt_68_set.insert("9746935.520000");
    Instrmt_68.add_attribute("DetchPnt", "73011.470000"); // 1
    Instrmt_68_set.insert("73011.470000");
    Instrmt_68.add_attribute("Issued", "IssueDate_t_791306547"); // 1
    Instrmt_68_set.insert("IssueDate_t_791306547");
    Instrmt_68.add_attribute("RepoCollSecTyp", "2058598890"); // 1
    Instrmt_68_set.insert("2058598890");
    Instrmt_68.add_attribute("RepoTrm", "449587054"); // 1
    Instrmt_68_set.insert("449587054");
    Instrmt_68.add_attribute("RepoRt", "4456019.420000"); // 1
    Instrmt_68_set.insert("4456019.420000");
    Instrmt_68.add_attribute("Fctr", "7491112.610000"); // 1
    Instrmt_68_set.insert("7491112.610000");
    Instrmt_68.add_attribute("CrdRtg", "CreditRating_t_703097244"); // 1
    Instrmt_68_set.insert("CreditRating_t_703097244");
    Instrmt_68.add_attribute("Rgstry", "InstrRegistry_t_46563379"); // 1
    Instrmt_68_set.insert("InstrRegistry_t_46563379");
    Instrmt_68.add_attribute("IssuCtry", "691440158"); // 1
    Instrmt_68_set.insert("691440158");
    Instrmt_68.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1642711366"); // 1
    Instrmt_68_set.insert("StateOrProvinceOfIssue_t_1642711366");
    Instrmt_68.add_attribute("Lcl", "LocaleOfIssue_t_693718434"); // 1
    Instrmt_68_set.insert("LocaleOfIssue_t_693718434");
    Instrmt_68.add_attribute("Redeem", "RedemptionDate_t_1621551747"); // 1
    Instrmt_68_set.insert("RedemptionDate_t_1621551747");
    Instrmt_68.add_attribute("StrkPx", "2387905.620000"); // 1
    Instrmt_68_set.insert("2387905.620000");
    Instrmt_68.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_68_set.insert("USD");
    Instrmt_68.add_attribute("StrkMult", "8143355.830000"); // 1
    Instrmt_68_set.insert("8143355.830000");
    Instrmt_68.add_attribute("StrkValu", "9680971.590000"); // 1
    Instrmt_68_set.insert("9680971.590000");
    Instrmt_68.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_68_set.insert("3");
    Instrmt_68.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_68_set.insert("2");
    Instrmt_68.add_attribute("StrkPxBndryPrcsn", "9338552.570000"); // 1
    Instrmt_68_set.insert("9338552.570000");
    Instrmt_68.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_68_set.insert("2");
    Instrmt_68.add_attribute("OptAt", "1093083263"); // 1
    Instrmt_68_set.insert("1093083263");
    Instrmt_68.add_attribute("Mult", "5848121.150000"); // 1
    Instrmt_68_set.insert("5848121.150000");
    Instrmt_68.add_attribute("MultTyp", "0"); // 1
    Instrmt_68_set.insert("0");
    Instrmt_68.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_68_set.insert("1");
    Instrmt_68.add_attribute("MinPxIncr", "5509293.210000"); // 1
    Instrmt_68_set.insert("5509293.210000");
    Instrmt_68.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_987294107"); // 1
    Instrmt_68_set.insert("MinPriceIncrementAmount_t_987294107");
    Instrmt_68.add_attribute("UOM", "lbs"); // 1
    Instrmt_68_set.insert("lbs");
    Instrmt_68.add_attribute("UOMQty", "17705374.710000"); // 1
    Instrmt_68_set.insert("17705374.710000");
    Instrmt_68.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_68_set.insert("MWh");
    Instrmt_68.add_attribute("PxUOMQty", "1529363.780000"); // 1
    Instrmt_68_set.insert("1529363.780000");
    Instrmt_68.add_attribute("SettlMeth", "C"); // 1
    Instrmt_68_set.insert("C");
    Instrmt_68.add_attribute("ExerStyle", "1"); // 1
    Instrmt_68_set.insert("1");
    Instrmt_68.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_68_set.insert("1");
    Instrmt_68.add_attribute("OptPayAmt", "OptPayoutAmount_t_79942024"); // 1
    Instrmt_68_set.insert("OptPayoutAmount_t_79942024");
    Instrmt_68.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_68_set.insert("INT");
    Instrmt_68.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_68_set.insert("FUT");
    Instrmt_68.add_attribute("ListMeth", "0"); // 1
    Instrmt_68_set.insert("0");
    Instrmt_68.add_attribute("CapPx", "6884051.770000"); // 1
    Instrmt_68_set.insert("6884051.770000");
    Instrmt_68.add_attribute("FlrPx", "15046030.390000"); // 1
    Instrmt_68_set.insert("15046030.390000");
    Instrmt_68.add_attribute("PutCall", "1"); // 1
    Instrmt_68_set.insert("1");
    Instrmt_68.add_attribute("FlexInd", "true"); // 1
    Instrmt_68_set.insert("true");
    Instrmt_68.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_68_set.insert("true");
    Instrmt_68.add_attribute("TmUnit", "Min"); // 1
    Instrmt_68_set.insert("Min");
    Instrmt_68.add_attribute("CpnRt", "17742545.890000"); // 1
    Instrmt_68_set.insert("17742545.890000");
    Instrmt_68.add_attribute("Exch", "SecurityExchange_t_741976489"); // 1
    Instrmt_68_set.insert("SecurityExchange_t_741976489");
    Instrmt_68.add_attribute("PosLmt", "1331393132"); // 1
    Instrmt_68_set.insert("1331393132");
    Instrmt_68.add_attribute("NTPosLmt", "594868100"); // 1
    Instrmt_68_set.insert("594868100");
    Instrmt_68.add_attribute("Issr", "Issuer_t_871980015"); // 1
    Instrmt_68_set.insert("Issuer_t_871980015");
    Instrmt_68.add_attribute("EncIssrLen", "1162508760"); // 1
    Instrmt_68_set.insert("1162508760");
    Instrmt_68.add_attribute("EncIssr", "EncodedIssuer_t_1528723358"); // 1
    Instrmt_68_set.insert("EncodedIssuer_t_1528723358");
    Instrmt_68.add_attribute("Desc", "SecurityDesc_t_1877094692"); // 1
    Instrmt_68_set.insert("SecurityDesc_t_1877094692");
    Instrmt_68.add_attribute("EncSecDescLen", "108108375"); // 1
    Instrmt_68_set.insert("108108375");
    Instrmt_68.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2113535473"); // 1
    Instrmt_68_set.insert("EncodedSecurityDesc_t_2113535473");
    Instrmt_68.add_attribute("Pool", "Pool_t_236839098"); // 1
    Instrmt_68_set.insert("Pool_t_236839098");
    Instrmt_68.add_attribute("CSetMo", "621796232"); // 1
    Instrmt_68_set.insert("621796232");
    Instrmt_68.add_attribute("CPPgm", "99"); // 1
    Instrmt_68_set.insert("99");
    Instrmt_68.add_attribute("CPRegT", "CPRegType_t_1224133206"); // 1
    Instrmt_68_set.insert("CPRegType_t_1224133206");
    Instrmt_68.add_attribute("Dated", "DatedDate_t_1947522706"); // 1
    Instrmt_68_set.insert("DatedDate_t_1947522706");
    Instrmt_68.add_attribute("IntAcrl", "InterestAccrualDate_t_140034969"); // 1
    Instrmt_68_set.insert("InterestAccrualDate_t_140034969");
    all_values.push_back(Instrmt_68_set);
    all_compo_names.insert("Instrmt_68_set");

    {
      xml_element AID_71{"AID"};
      multiset<string> AID_71_set;
      AID_71.add_attribute("AltID", "SecurityAltID_t_629066515"); // 2
      AID_71_set.insert("SecurityAltID_t_629066515");
      AID_71.add_attribute("AltIDSrc", "K"); // 2
      AID_71_set.insert("K");
      all_values.push_back(AID_71_set);
      all_compo_names.insert("AID_71_set");

      Instrmt_68.add_element(AID_71);
    }
    {
      xml_element SecXML_71{"SecXML"};
      multiset<string> SecXML_71_set;
      SecXML_71.add_attribute("Schema", "SecurityXMLSchema_t_1917873588"); // 2
      SecXML_71_set.insert("SecurityXMLSchema_t_1917873588");
      all_values.push_back(SecXML_71_set);
      all_compo_names.insert("SecXML_71_set");

      Instrmt_68.add_element(SecXML_71);
    }
    {
      xml_element Evnt_71{"Evnt"};
      multiset<string> Evnt_71_set;
      Evnt_71.add_attribute("EventTyp", "10"); // 2
      Evnt_71_set.insert("10");
      Evnt_71.add_attribute("Dt", "EventDate_t_17027056"); // 2
      Evnt_71_set.insert("EventDate_t_17027056");
      Evnt_71.add_attribute("Tm", "EventTime_t_1997815612"); // 2
      Evnt_71_set.insert("EventTime_t_1997815612");
      Evnt_71.add_attribute("Px", "14671481.690000"); // 2
      Evnt_71_set.insert("14671481.690000");
      Evnt_71.add_attribute("Txt", "EventText_t_830189937"); // 2
      Evnt_71_set.insert("EventText_t_830189937");
      all_values.push_back(Evnt_71_set);
      all_compo_names.insert("Evnt_71_set");

      Instrmt_68.add_element(Evnt_71);
    }
    {
      xml_element Pty_372{"Pty"};
      multiset<string> Pty_372_set;
      Pty_372.add_attribute("ID", "InstrumentPartyID_t_633371233"); // 2
      Pty_372_set.insert("InstrumentPartyID_t_633371233");
      Pty_372.add_attribute("Src", "B"); // 2
      Pty_372_set.insert("B");
      Pty_372.add_attribute("R", "82"); // 2
      Pty_372_set.insert("82");
      all_values.push_back(Pty_372_set);
      all_compo_names.insert("Pty_372_set");

      {
        xml_element Sub_372{"Sub"};
        multiset<string> Sub_372_set;
        Sub_372.add_attribute("ID", "InstrumentPartySubID_t_911638220"); // 3
        Sub_372_set.insert("InstrumentPartySubID_t_911638220");
        Sub_372.add_attribute("Typ", "1"); // 3
        Sub_372_set.insert("1");
        all_values.push_back(Sub_372_set);
        all_compo_names.insert("Sub_372_set");

        Pty_372.add_element(Sub_372);
      }
      Instrmt_68.add_element(Pty_372);
    }
    {
      xml_element CmplxEvnt_68{"CmplxEvnt"};
      multiset<string> CmplxEvnt_68_set;
      CmplxEvnt_68.add_attribute("Typ", "3"); // 2
      CmplxEvnt_68_set.insert("3");
      CmplxEvnt_68.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1428695769"); // 2
      CmplxEvnt_68_set.insert("ComplexOptPayoutAmount_t_1428695769");
      CmplxEvnt_68.add_attribute("Px", "10169642.520000"); // 2
      CmplxEvnt_68_set.insert("10169642.520000");
      CmplxEvnt_68.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_68_set.insert("2");
      CmplxEvnt_68.add_attribute("PxBndryPrcsn", "6126052.540000"); // 2
      CmplxEvnt_68_set.insert("6126052.540000");
      CmplxEvnt_68.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_68_set.insert("3");
      CmplxEvnt_68.add_attribute("Cond", "2"); // 2
      CmplxEvnt_68_set.insert("2");
      all_values.push_back(CmplxEvnt_68_set);
      all_compo_names.insert("CmplxEvnt_68_set");

      {
        xml_element EvntDts_68{"EvntDts"};
        multiset<string> EvntDts_68_set;
        EvntDts_68.add_attribute("StartDt", "ComplexEventStartDate_t_1775114014"); // 3
        EvntDts_68_set.insert("ComplexEventStartDate_t_1775114014");
        EvntDts_68.add_attribute("EndDt", "ComplexEventEndDate_t_993072062"); // 3
        EvntDts_68_set.insert("ComplexEventEndDate_t_993072062");
        all_values.push_back(EvntDts_68_set);
        all_compo_names.insert("EvntDts_68_set");

        {
          xml_element EvntTms_68{"EvntTms"};
          multiset<string> EvntTms_68_set;
          EvntTms_68.add_attribute("StartTm", "362064368"); // 4
          EvntTms_68_set.insert("362064368");
          EvntTms_68.add_attribute("EndTm", "1883222390"); // 4
          EvntTms_68_set.insert("1883222390");
          all_values.push_back(EvntTms_68_set);
          all_compo_names.insert("EvntTms_68_set");

          EvntDts_68.add_element(EvntTms_68);
        }
        CmplxEvnt_68.add_element(EvntDts_68);
      }
      Instrmt_68.add_element(CmplxEvnt_68);
    }
    elt.add_element(Instrmt_68);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_26{"FinDetls"};
    multiset<string> FinDetls_26_set;
    FinDetls_26.add_attribute("AgmtDesc", "AgreementDesc_t_959123888"); // 1
    FinDetls_26_set.insert("AgreementDesc_t_959123888");
    FinDetls_26.add_attribute("AgmtID", "AgreementID_t_598903466"); // 1
    FinDetls_26_set.insert("AgreementID_t_598903466");
    FinDetls_26.add_attribute("AgmtDt", "AgreementDate_t_357534974"); // 1
    FinDetls_26_set.insert("AgreementDate_t_357534974");
    FinDetls_26.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_26_set.insert("GBP");
    FinDetls_26.add_attribute("TrmTyp", "1"); // 1
    FinDetls_26_set.insert("1");
    FinDetls_26.add_attribute("StartDt", "StartDate_t_1616140004"); // 1
    FinDetls_26_set.insert("StartDate_t_1616140004");
    FinDetls_26.add_attribute("EndDt", "EndDate_t_304619539"); // 1
    FinDetls_26_set.insert("EndDate_t_304619539");
    FinDetls_26.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_26_set.insert("0");
    FinDetls_26.add_attribute("MgnRatio", "13865299.440000"); // 1
    FinDetls_26_set.insert("13865299.440000");
    all_values.push_back(FinDetls_26_set);
    all_compo_names.insert("FinDetls_26_set");

    elt.add_element(FinDetls_26);
  } // end FinDetls
  { // Undly
    xml_element Undly_94{"Undly"};
    multiset<string> Undly_94_set;
    Undly_94.add_attribute("Sym", "UnderlyingSymbol_t_127576524"); // 1
    Undly_94_set.insert("UnderlyingSymbol_t_127576524");
    Undly_94.add_attribute("Sfx", "CD"); // 1
    Undly_94_set.insert("CD");
    Undly_94.add_attribute("ID", "UnderlyingSecurityID_t_449590431"); // 1
    Undly_94_set.insert("UnderlyingSecurityID_t_449590431");
    Undly_94.add_attribute("Src", "4"); // 1
    Undly_94_set.insert("4");
    Undly_94.add_attribute("Prod", "7"); // 1
    Undly_94_set.insert("7");
    Undly_94.add_attribute("CFI", "UnderlyingCFICode_t_457660130"); // 1
    Undly_94_set.insert("UnderlyingCFICode_t_457660130");
    Undly_94.add_attribute("SecTyp", "CMO"); // 1
    Undly_94_set.insert("CMO");
    Undly_94.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_634387713"); // 1
    Undly_94_set.insert("UnderlyingSecuritySubType_t_634387713");
    Undly_94.add_attribute("MMY", "1847853440"); // 1
    Undly_94_set.insert("1847853440");
    Undly_94.add_attribute("Mat", "UnderlyingMaturityDate_t_163572608"); // 1
    Undly_94_set.insert("UnderlyingMaturityDate_t_163572608");
    Undly_94.add_attribute("MatTm", "2063083483"); // 1
    Undly_94_set.insert("2063083483");
    Undly_94.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_717334044"); // 1
    Undly_94_set.insert("UnderlyingCouponPaymentDate_t_717334044");
    Undly_94.add_attribute("RestrctTyp", "FR"); // 1
    Undly_94_set.insert("FR");
    Undly_94.add_attribute("Snrty", "SD"); // 1
    Undly_94_set.insert("SD");
    Undly_94.add_attribute("NotlPctOut", "1816827.490000"); // 1
    Undly_94_set.insert("1816827.490000");
    Undly_94.add_attribute("OrigNotlPctOut", "5564992.400000"); // 1
    Undly_94_set.insert("5564992.400000");
    Undly_94.add_attribute("AttchPnt", "1558354.550000"); // 1
    Undly_94_set.insert("1558354.550000");
    Undly_94.add_attribute("DetchPnt", "11747548.110000"); // 1
    Undly_94_set.insert("11747548.110000");
    Undly_94.add_attribute("Issued", "UnderlyingIssueDate_t_918563608"); // 1
    Undly_94_set.insert("UnderlyingIssueDate_t_918563608");
    Undly_94.add_attribute("RepoCollSecTyp", "2039057845"); // 1
    Undly_94_set.insert("2039057845");
    Undly_94.add_attribute("RepoTrm", "2133878699"); // 1
    Undly_94_set.insert("2133878699");
    Undly_94.add_attribute("RepoRt", "15174670.740000"); // 1
    Undly_94_set.insert("15174670.740000");
    Undly_94.add_attribute("Fctr", "2491091.710000"); // 1
    Undly_94_set.insert("2491091.710000");
    Undly_94.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1462500086"); // 1
    Undly_94_set.insert("UnderlyingCreditRating_t_1462500086");
    Undly_94.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1193020099"); // 1
    Undly_94_set.insert("UnderlyingInstrRegistry_t_1193020099");
    Undly_94.add_attribute("Ctry", "406683203"); // 1
    Undly_94_set.insert("406683203");
    Undly_94.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_931156442"); // 1
    Undly_94_set.insert("UnderlyingStateOrProvinceOfIssue_t_931156442");
    Undly_94.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1497639638"); // 1
    Undly_94_set.insert("UnderlyingLocaleOfIssue_t_1497639638");
    Undly_94.add_attribute("Redeem", "UnderlyingRedemptionDate_t_517232671"); // 1
    Undly_94_set.insert("UnderlyingRedemptionDate_t_517232671");
    Undly_94.add_attribute("StrkPx", "1702027.380000"); // 1
    Undly_94_set.insert("1702027.380000");
    Undly_94.add_attribute("StrkCcy", "EUR"); // 1
    Undly_94_set.insert("EUR");
    Undly_94.add_attribute("OptA", "1407064646"); // 1
    Undly_94_set.insert("1407064646");
    Undly_94.add_attribute("Mult", "9296723.320000"); // 1
    Undly_94_set.insert("9296723.320000");
    Undly_94.add_attribute("MultTyp", "1"); // 1
    Undly_94_set.insert("1");
    Undly_94.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_94_set.insert("0");
    Undly_94.add_attribute("UOM", "USD"); // 1
    Undly_94_set.insert("USD");
    Undly_94.add_attribute("UOMQty", "6001677.980000"); // 1
    Undly_94_set.insert("6001677.980000");
    Undly_94.add_attribute("PxUOM", "Bu"); // 1
    Undly_94_set.insert("Bu");
    Undly_94.add_attribute("PxUOMQty", "10877022.550000"); // 1
    Undly_94_set.insert("10877022.550000");
    Undly_94.add_attribute("TmUnit", "H"); // 1
    Undly_94_set.insert("H");
    Undly_94.add_attribute("ExerStyle", "0"); // 1
    Undly_94_set.insert("0");
    Undly_94.add_attribute("CpnRt", "18050362.990000"); // 1
    Undly_94_set.insert("18050362.990000");
    Undly_94.add_attribute("Exch", "UnderlyingSecurityExchange_t_687786323"); // 1
    Undly_94_set.insert("UnderlyingSecurityExchange_t_687786323");
    Undly_94.add_attribute("Issr", "UnderlyingIssuer_t_60523129"); // 1
    Undly_94_set.insert("UnderlyingIssuer_t_60523129");
    Undly_94.add_attribute("EncUndIssrLen", "1986719048"); // 1
    Undly_94_set.insert("1986719048");
    Undly_94.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1244285563"); // 1
    Undly_94_set.insert("EncodedUnderlyingIssuer_t_1244285563");
    Undly_94.add_attribute("Desc", "UnderlyingSecurityDesc_t_216358585"); // 1
    Undly_94_set.insert("UnderlyingSecurityDesc_t_216358585");
    Undly_94.add_attribute("EncUndSecDescLen", "1013990212"); // 1
    Undly_94_set.insert("1013990212");
    Undly_94.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_15365523"); // 1
    Undly_94_set.insert("EncodedUnderlyingSecurityDesc_t_15365523");
    Undly_94.add_attribute("CPPgm", "UnderlyingCPProgram_t_107932782"); // 1
    Undly_94_set.insert("UnderlyingCPProgram_t_107932782");
    Undly_94.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1000385263"); // 1
    Undly_94_set.insert("UnderlyingCPRegType_t_1000385263");
    Undly_94.add_attribute("AllocPct", "15328325.970000"); // 1
    Undly_94_set.insert("15328325.970000");
    Undly_94.add_attribute("Ccy", "EUR"); // 1
    Undly_94_set.insert("EUR");
    Undly_94.add_attribute("Qty", "5783690.480000"); // 1
    Undly_94_set.insert("5783690.480000");
    Undly_94.add_attribute("SettlTyp", "4"); // 1
    Undly_94_set.insert("4");
    Undly_94.add_attribute("CashAmt", "UnderlyingCashAmount_t_1246558143"); // 1
    Undly_94_set.insert("UnderlyingCashAmount_t_1246558143");
    Undly_94.add_attribute("CashTyp", "DIFF"); // 1
    Undly_94_set.insert("DIFF");
    Undly_94.add_attribute("Px", "12809578.290000"); // 1
    Undly_94_set.insert("12809578.290000");
    Undly_94.add_attribute("DirtPx", "14167608.810000"); // 1
    Undly_94_set.insert("14167608.810000");
    Undly_94.add_attribute("EndPx", "4086069.400000"); // 1
    Undly_94_set.insert("4086069.400000");
    Undly_94.add_attribute("StartVal", "UnderlyingStartValue_t_1925767024"); // 1
    Undly_94_set.insert("UnderlyingStartValue_t_1925767024");
    Undly_94.add_attribute("CurVal", "UnderlyingCurrentValue_t_676341880"); // 1
    Undly_94_set.insert("UnderlyingCurrentValue_t_676341880");
    Undly_94.add_attribute("EndVal", "UnderlyingEndValue_t_1338279272"); // 1
    Undly_94_set.insert("UnderlyingEndValue_t_1338279272");
    Undly_94.add_attribute("AdjQty", "13808590.330000"); // 1
    Undly_94_set.insert("13808590.330000");
    Undly_94.add_attribute("FxRate", "18061560.200000"); // 1
    Undly_94_set.insert("18061560.200000");
    Undly_94.add_attribute("FxRateCalc", "D"); // 1
    Undly_94_set.insert("D");
    Undly_94.add_attribute("CapValu", "UnderlyingCapValue_t_1981026831"); // 1
    Undly_94_set.insert("UnderlyingCapValue_t_1981026831");
    Undly_94.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1422874225"); // 1
    Undly_94_set.insert("UnderlyingSettlMethod_t_1422874225");
    Undly_94.add_attribute("PutCall", "1665830342"); // 1
    Undly_94_set.insert("1665830342");
    all_values.push_back(Undly_94_set);
    all_compo_names.insert("Undly_94_set");

    {
      xml_element UndAID_94{"UndAID"};
      multiset<string> UndAID_94_set;
      UndAID_94.add_attribute("AltID", "UnderlyingSecurityAltID_t_597283589"); // 2
      UndAID_94_set.insert("UnderlyingSecurityAltID_t_597283589");
      UndAID_94.add_attribute("AltIDSrc", "7"); // 2
      UndAID_94_set.insert("7");
      all_values.push_back(UndAID_94_set);
      all_compo_names.insert("UndAID_94_set");

      Undly_94.add_element(UndAID_94);
    }
    {
      xml_element Stip_150{"Stip"};
      multiset<string> Stip_150_set;
      Stip_150.add_attribute("Typ", "PPL"); // 2
      Stip_150_set.insert("PPL");
      Stip_150.add_attribute("Val", "UnderlyingStipValue_t_1285069912"); // 2
      Stip_150_set.insert("UnderlyingStipValue_t_1285069912");
      all_values.push_back(Stip_150_set);
      all_compo_names.insert("Stip_150_set");

      Undly_94.add_element(Stip_150);
    }
    {
      xml_element Pty_373{"Pty"};
      multiset<string> Pty_373_set;
      Pty_373.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1015715395"); // 2
      Pty_373_set.insert("UnderlyingInstrumentPartyID_t_1015715395");
      Pty_373.add_attribute("Src", "F"); // 2
      Pty_373_set.insert("F");
      Pty_373.add_attribute("R", "24"); // 2
      Pty_373_set.insert("24");
      all_values.push_back(Pty_373_set);
      all_compo_names.insert("Pty_373_set");

      {
        xml_element Sub_373{"Sub"};
        multiset<string> Sub_373_set;
        Sub_373.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1232073980"); // 3
        Sub_373_set.insert("UnderlyingInstrumentPartySubID_t_1232073980");
        Sub_373.add_attribute("Typ", "24"); // 3
        Sub_373_set.insert("24");
        all_values.push_back(Sub_373_set);
        all_compo_names.insert("Sub_373_set");

        Pty_373.add_element(Sub_373);
      }
      Undly_94.add_element(Pty_373);
    }
    elt.add_element(Undly_94);
  } // end Undly
  { // Leg
    xml_element Leg_84{"Leg"};
    multiset<string> Leg_84_set;
    Leg_84.add_attribute("Sym", "LegSymbol_t_1340006763"); // 1
    Leg_84_set.insert("LegSymbol_t_1340006763");
    Leg_84.add_attribute("Sfx", "WI"); // 1
    Leg_84_set.insert("WI");
    Leg_84.add_attribute("ID", "LegSecurityID_t_1930069948"); // 1
    Leg_84_set.insert("LegSecurityID_t_1930069948");
    Leg_84.add_attribute("Src", "2"); // 1
    Leg_84_set.insert("2");
    Leg_84.add_attribute("Prod", "13"); // 1
    Leg_84_set.insert("13");
    Leg_84.add_attribute("CFI", "LegCFICode_t_360955348"); // 1
    Leg_84_set.insert("LegCFICode_t_360955348");
    Leg_84.add_attribute("SecTyp", "FRN"); // 1
    Leg_84_set.insert("FRN");
    Leg_84.add_attribute("SecSubTyp", "LegSecuritySubType_t_443986418"); // 1
    Leg_84_set.insert("LegSecuritySubType_t_443986418");
    Leg_84.add_attribute("MMY", "289480387"); // 1
    Leg_84_set.insert("289480387");
    Leg_84.add_attribute("Mat", "LegMaturityDate_t_1594248055"); // 1
    Leg_84_set.insert("LegMaturityDate_t_1594248055");
    Leg_84.add_attribute("MatTm", "1860747300"); // 1
    Leg_84_set.insert("1860747300");
    Leg_84.add_attribute("CpnPmt", "LegCouponPaymentDate_t_698087327"); // 1
    Leg_84_set.insert("LegCouponPaymentDate_t_698087327");
    Leg_84.add_attribute("Issued", "LegIssueDate_t_1372531432"); // 1
    Leg_84_set.insert("LegIssueDate_t_1372531432");
    Leg_84.add_attribute("RepoCollSecTyp", "389605532"); // 1
    Leg_84_set.insert("389605532");
    Leg_84.add_attribute("RepoTrm", "2036366600"); // 1
    Leg_84_set.insert("2036366600");
    Leg_84.add_attribute("RepoRt", "6059068.170000"); // 1
    Leg_84_set.insert("6059068.170000");
    Leg_84.add_attribute("Fctr", "482779.040000"); // 1
    Leg_84_set.insert("482779.040000");
    Leg_84.add_attribute("CrdRtg", "LegCreditRating_t_467011039"); // 1
    Leg_84_set.insert("LegCreditRating_t_467011039");
    Leg_84.add_attribute("Rgstry", "LegInstrRegistry_t_439450000"); // 1
    Leg_84_set.insert("LegInstrRegistry_t_439450000");
    Leg_84.add_attribute("Ctry", "1471152129"); // 1
    Leg_84_set.insert("1471152129");
    Leg_84.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2132841381"); // 1
    Leg_84_set.insert("LegStateOrProvinceOfIssue_t_2132841381");
    Leg_84.add_attribute("Lcl", "LegLocaleOfIssue_t_1036733589"); // 1
    Leg_84_set.insert("LegLocaleOfIssue_t_1036733589");
    Leg_84.add_attribute("Redeem", "LegRedemptionDate_t_278860747"); // 1
    Leg_84_set.insert("LegRedemptionDate_t_278860747");
    Leg_84.add_attribute("Strk", "13087407.260000"); // 1
    Leg_84_set.insert("13087407.260000");
    Leg_84.add_attribute("StrkCcy", "CHF"); // 1
    Leg_84_set.insert("CHF");
    Leg_84.add_attribute("OptA", "323875472"); // 1
    Leg_84_set.insert("323875472");
    Leg_84.add_attribute("Cmult", "5561916.810000"); // 1
    Leg_84_set.insert("5561916.810000");
    Leg_84.add_attribute("MultTyp", "0"); // 1
    Leg_84_set.insert("0");
    Leg_84.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_84_set.insert("0");
    Leg_84.add_attribute("UOM", "Bcf"); // 1
    Leg_84_set.insert("Bcf");
    Leg_84.add_attribute("UOMQty", "17191732.380000"); // 1
    Leg_84_set.insert("17191732.380000");
    Leg_84.add_attribute("PxUOM", "Gal"); // 1
    Leg_84_set.insert("Gal");
    Leg_84.add_attribute("PxUOMQty", "7360153.320000"); // 1
    Leg_84_set.insert("7360153.320000");
    Leg_84.add_attribute("TmUnit", "Wk"); // 1
    Leg_84_set.insert("Wk");
    Leg_84.add_attribute("ExerStyle", "2"); // 1
    Leg_84_set.insert("2");
    Leg_84.add_attribute("CpnRt", "10969706.800000"); // 1
    Leg_84_set.insert("10969706.800000");
    Leg_84.add_attribute("Exch", "LegSecurityExchange_t_1582028534"); // 1
    Leg_84_set.insert("LegSecurityExchange_t_1582028534");
    Leg_84.add_attribute("Issr", "LegIssuer_t_1023925345"); // 1
    Leg_84_set.insert("LegIssuer_t_1023925345");
    Leg_84.add_attribute("EncLegIssrLen", "1386451068"); // 1
    Leg_84_set.insert("1386451068");
    Leg_84.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1028792941"); // 1
    Leg_84_set.insert("EncodedLegIssuer_t_1028792941");
    Leg_84.add_attribute("Desc", "LegSecurityDesc_t_737188997"); // 1
    Leg_84_set.insert("LegSecurityDesc_t_737188997");
    Leg_84.add_attribute("EncLegSecDescLen", "2084538395"); // 1
    Leg_84_set.insert("2084538395");
    Leg_84.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_253840725"); // 1
    Leg_84_set.insert("EncodedLegSecurityDesc_t_253840725");
    Leg_84.add_attribute("RatioQty", "11267945.290000"); // 1
    Leg_84_set.insert("11267945.290000");
    Leg_84.add_attribute("Side", "4"); // 1
    Leg_84_set.insert("4");
    Leg_84.add_attribute("Ccy", "CHF"); // 1
    Leg_84_set.insert("CHF");
    Leg_84.add_attribute("Pool", "LegPool_t_292948738"); // 1
    Leg_84_set.insert("LegPool_t_292948738");
    Leg_84.add_attribute("Dated", "LegDatedDate_t_1299197542"); // 1
    Leg_84_set.insert("LegDatedDate_t_1299197542");
    Leg_84.add_attribute("CSetMo", "498740915"); // 1
    Leg_84_set.insert("498740915");
    Leg_84.add_attribute("IntAcrl", "LegInterestAccrualDate_t_278306471"); // 1
    Leg_84_set.insert("LegInterestAccrualDate_t_278306471");
    Leg_84.add_attribute("PutCall", "188447484"); // 1
    Leg_84_set.insert("188447484");
    Leg_84.add_attribute("LegOptionRatio", "7776016.620000"); // 1
    Leg_84_set.insert("7776016.620000");
    Leg_84.add_attribute("Px", "15870471.980000"); // 1
    Leg_84_set.insert("15870471.980000");
    all_values.push_back(Leg_84_set);
    all_compo_names.insert("Leg_84_set");

    {
      xml_element LegAID_79{"LegAID"};
      multiset<string> LegAID_79_set;
      LegAID_79.add_attribute("SecAltID", "LegSecurityAltID_t_362767338"); // 2
      LegAID_79_set.insert("LegSecurityAltID_t_362767338");
      LegAID_79.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_79_set.insert("6");
      all_values.push_back(LegAID_79_set);
      all_compo_names.insert("LegAID_79_set");

      Leg_84.add_element(LegAID_79);
    }
    elt.add_element(Leg_84);
  } // end Leg
  { // Pty
    xml_element Pty_374{"Pty"};
    multiset<string> Pty_374_set;
    Pty_374.add_attribute("ID", "PartyID_t_918959019"); // 1
    Pty_374_set.insert("PartyID_t_918959019");
    Pty_374.add_attribute("Src", "6"); // 1
    Pty_374_set.insert("6");
    Pty_374.add_attribute("R", "83"); // 1
    Pty_374_set.insert("83");
    all_values.push_back(Pty_374_set);
    all_compo_names.insert("Pty_374_set");

    {
      xml_element Sub_374{"Sub"};
      multiset<string> Sub_374_set;
      Sub_374.add_attribute("ID", "PartySubID_t_1872388051"); // 2
      Sub_374_set.insert("PartySubID_t_1872388051");
      Sub_374.add_attribute("Typ", "7"); // 2
      Sub_374_set.insert("7");
      all_values.push_back(Sub_374_set);
      all_compo_names.insert("Sub_374_set");

      Pty_374.add_element(Sub_374);
    }
    elt.add_element(Pty_374);
  } // end Pty
  { // Pty
    xml_element Pty_375{"Pty"};
    multiset<string> Pty_375_set;
    Pty_375.add_attribute("ID", "PartyID_t_1498950105"); // 1
    Pty_375_set.insert("PartyID_t_1498950105");
    Pty_375.add_attribute("Src", "I"); // 1
    Pty_375_set.insert("I");
    Pty_375.add_attribute("R", "46"); // 1
    Pty_375_set.insert("46");
    all_values.push_back(Pty_375_set);
    all_compo_names.insert("Pty_375_set");

    {
      xml_element Sub_375{"Sub"};
      multiset<string> Sub_375_set;
      Sub_375.add_attribute("ID", "PartySubID_t_2078889032"); // 2
      Sub_375_set.insert("PartySubID_t_2078889032");
      Sub_375.add_attribute("Typ", "24"); // 2
      Sub_375_set.insert("24");
      all_values.push_back(Sub_375_set);
      all_compo_names.insert("Sub_375_set");

      Pty_375.add_element(Sub_375);
    }
    elt.add_element(Pty_375);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_15{"TgtPty"};
    multiset<string> TgtPty_15_set;
    TgtPty_15.add_attribute("ID", "TargetPartyID_t_955330729"); // 1
    TgtPty_15_set.insert("TargetPartyID_t_955330729");
    TgtPty_15.add_attribute("Src", "F"); // 1
    TgtPty_15_set.insert("F");
    TgtPty_15.add_attribute("R", "11"); // 1
    TgtPty_15_set.insert("11");
    all_values.push_back(TgtPty_15_set);
    all_compo_names.insert("TgtPty_15_set");

    elt.add_element(TgtPty_15);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_16{"TgtPty"};
    multiset<string> TgtPty_16_set;
    TgtPty_16.add_attribute("ID", "TargetPartyID_t_1692519727"); // 1
    TgtPty_16_set.insert("TargetPartyID_t_1692519727");
    TgtPty_16.add_attribute("Src", "6"); // 1
    TgtPty_16_set.insert("6");
    TgtPty_16.add_attribute("R", "9"); // 1
    TgtPty_16_set.insert("9");
    all_values.push_back(TgtPty_16_set);
    all_compo_names.insert("TgtPty_16_set");

    elt.add_element(TgtPty_16);
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
