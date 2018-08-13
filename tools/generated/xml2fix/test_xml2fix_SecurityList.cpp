#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityList_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityList_message_t_0;
  elt.add_attribute("RptID", "1561558203"); // 0
  SecurityList_message_t_0.insert("1561558203");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1056358039"); // 0
  SecurityList_message_t_0.insert("ClearingBusinessDate_t_1056358039");
  elt.add_attribute("ListID", "SecurityListID_t_1954083897"); // 0
  SecurityList_message_t_0.insert("SecurityListID_t_1954083897");
  elt.add_attribute("ListRefID", "SecurityListRefID_t_1585287053"); // 0
  SecurityList_message_t_0.insert("SecurityListRefID_t_1585287053");
  elt.add_attribute("ListDesc", "SecurityListDesc_t_685401403"); // 0
  SecurityList_message_t_0.insert("SecurityListDesc_t_685401403");
  elt.add_attribute("ListTyp", "4"); // 0
  SecurityList_message_t_0.insert("4");
  elt.add_attribute("LstTypSrc", "3"); // 0
  SecurityList_message_t_0.insert("3");
  elt.add_attribute("ReqID", "SecurityReqID_t_1062827419"); // 0
  SecurityList_message_t_0.insert("SecurityReqID_t_1062827419");
  elt.add_attribute("RspID", "SecurityResponseID_t_726444442"); // 0
  SecurityList_message_t_0.insert("SecurityResponseID_t_726444442");
  elt.add_attribute("ReqRslt", "3"); // 0
  SecurityList_message_t_0.insert("3");
  elt.add_attribute("TxnTm", "TransactTime_t_543434187"); // 0
  SecurityList_message_t_0.insert("TransactTime_t_543434187");
  elt.add_attribute("TotNoReltdSym", "900118969"); // 0
  SecurityList_message_t_0.insert("900118969");
  elt.add_attribute("MktID", "MarketID_t_495659008"); // 0
  SecurityList_message_t_0.insert("MarketID_t_495659008");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_130024559"); // 0
  SecurityList_message_t_0.insert("MarketSegmentID_t_130024559");
  elt.add_attribute("LastFragment", "Y"); // 0
  SecurityList_message_t_0.insert("Y");
  all_values.push_back(SecurityList_message_t_0);
  all_compo_names.insert("SecurityList_message_t");

  { // Hdr
    xml_element Hdr_83{"Hdr"};
    multiset<string> Hdr_83_set;
    Hdr_83.add_attribute("SeqNum", "1396485924"); // 1
    Hdr_83_set.insert("1396485924");
    Hdr_83.add_attribute("SID", "SenderCompID_t_1760729316"); // 1
    Hdr_83_set.insert("SenderCompID_t_1760729316");
    Hdr_83.add_attribute("TID", "TargetCompID_t_643866787"); // 1
    Hdr_83_set.insert("TargetCompID_t_643866787");
    Hdr_83.add_attribute("OBID", "OnBehalfOfCompID_t_2070836034"); // 1
    Hdr_83_set.insert("OnBehalfOfCompID_t_2070836034");
    Hdr_83.add_attribute("D2ID", "DeliverToCompID_t_825657700"); // 1
    Hdr_83_set.insert("DeliverToCompID_t_825657700");
    Hdr_83.add_attribute("SSub", "SenderSubID_t_1281379134"); // 1
    Hdr_83_set.insert("SenderSubID_t_1281379134");
    Hdr_83.add_attribute("SLoc", "SenderLocationID_t_1450804940"); // 1
    Hdr_83_set.insert("SenderLocationID_t_1450804940");
    Hdr_83.add_attribute("TSub", "TargetSubID_t_1541101157"); // 1
    Hdr_83_set.insert("TargetSubID_t_1541101157");
    Hdr_83.add_attribute("TLoc", "TargetLocationID_t_548094900"); // 1
    Hdr_83_set.insert("TargetLocationID_t_548094900");
    Hdr_83.add_attribute("OBSub", "OnBehalfOfSubID_t_1508445650"); // 1
    Hdr_83_set.insert("OnBehalfOfSubID_t_1508445650");
    Hdr_83.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1022657819"); // 1
    Hdr_83_set.insert("OnBehalfOfLocationID_t_1022657819");
    Hdr_83.add_attribute("D2Sub", "DeliverToSubID_t_982352123"); // 1
    Hdr_83_set.insert("DeliverToSubID_t_982352123");
    Hdr_83.add_attribute("D2Loc", "DeliverToLocationID_t_1361937999"); // 1
    Hdr_83_set.insert("DeliverToLocationID_t_1361937999");
    Hdr_83.add_attribute("PosDup", "Y"); // 1
    Hdr_83_set.insert("Y");
    Hdr_83.add_attribute("PosRsnd", "N"); // 1
    Hdr_83_set.insert("N");
    Hdr_83.add_attribute("Snt", "SendingTime_t_1240039844"); // 1
    Hdr_83_set.insert("SendingTime_t_1240039844");
    Hdr_83.add_attribute("OrigSnt", "OrigSendingTime_t_1895571351"); // 1
    Hdr_83_set.insert("OrigSendingTime_t_1895571351");
    Hdr_83.add_attribute("MsgEncd", "MessageEncoding_t_1510636389"); // 1
    Hdr_83_set.insert("MessageEncoding_t_1510636389");
    all_values.push_back(Hdr_83_set);
    all_compo_names.insert("Hdr_83_set");

    {
      xml_element Hop_83{"Hop"};
      multiset<string> Hop_83_set;
      Hop_83.add_attribute("ID", "HopCompID_t_1046640094"); // 2
      Hop_83_set.insert("HopCompID_t_1046640094");
      Hop_83.add_attribute("Ref", "1333374756"); // 2
      Hop_83_set.insert("1333374756");
      Hop_83.add_attribute("Snt", "HopSendingTime_t_48554144"); // 2
      Hop_83_set.insert("HopSendingTime_t_48554144");
      all_values.push_back(Hop_83_set);
      all_compo_names.insert("Hop_83_set");

      Hdr_83.add_element(Hop_83);
    }
    elt.add_element(Hdr_83);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_14{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_14_set;
    ApplSeqCtrl_14.add_attribute("ApplID", "ApplID_t_547293677"); // 1
    ApplSeqCtrl_14_set.insert("ApplID_t_547293677");
    ApplSeqCtrl_14.add_attribute("ApplSeqNum", "1714188636"); // 1
    ApplSeqCtrl_14_set.insert("1714188636");
    ApplSeqCtrl_14.add_attribute("ApplLastSeqNum", "1111381564"); // 1
    ApplSeqCtrl_14_set.insert("1111381564");
    ApplSeqCtrl_14.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_14_set.insert("true");
    all_values.push_back(ApplSeqCtrl_14_set);
    all_compo_names.insert("ApplSeqCtrl_14_set");

    elt.add_element(ApplSeqCtrl_14);
  } // end ApplSeqCtrl
  { // SecL
    xml_element SecL_0{"SecL"};
    multiset<string> SecL_0_set;
    SecL_0.add_attribute("Ccy", "CHF"); // 1
    SecL_0_set.insert("CHF");
    SecL_0.add_attribute("TxnTm", "RelSymTransactTime_t_1921752197"); // 1
    SecL_0_set.insert("RelSymTransactTime_t_1921752197");
    SecL_0.add_attribute("Txt", "Text_t_1784840310"); // 1
    SecL_0_set.insert("Text_t_1784840310");
    SecL_0.add_attribute("EncTxtLen", "1816934665"); // 1
    SecL_0_set.insert("1816934665");
    SecL_0.add_attribute("EncTxt", "EncodedText_t_1170754473"); // 1
    SecL_0_set.insert("EncodedText_t_1170754473");
    all_values.push_back(SecL_0_set);
    all_compo_names.insert("SecL_0_set");

    {
      xml_element Instrmt_76{"Instrmt"};
      multiset<string> Instrmt_76_set;
      Instrmt_76.add_attribute("Sym", "Symbol_t_1398085979"); // 2
      Instrmt_76_set.insert("Symbol_t_1398085979");
      Instrmt_76.add_attribute("Sfx", "CD"); // 2
      Instrmt_76_set.insert("CD");
      Instrmt_76.add_attribute("ID", "SecurityID_t_1094106859"); // 2
      Instrmt_76_set.insert("SecurityID_t_1094106859");
      Instrmt_76.add_attribute("Src", "2"); // 2
      Instrmt_76_set.insert("2");
      Instrmt_76.add_attribute("Prod", "12"); // 2
      Instrmt_76_set.insert("12");
      Instrmt_76.add_attribute("ProdCmplx", "ProductComplex_t_397428151"); // 2
      Instrmt_76_set.insert("ProductComplex_t_397428151");
      Instrmt_76.add_attribute("SecGrp", "SecurityGroup_t_1617361188"); // 2
      Instrmt_76_set.insert("SecurityGroup_t_1617361188");
      Instrmt_76.add_attribute("CFI", "CFICode_t_2142791838"); // 2
      Instrmt_76_set.insert("CFICode_t_2142791838");
      Instrmt_76.add_attribute("SecTyp", "CDS"); // 2
      Instrmt_76_set.insert("CDS");
      Instrmt_76.add_attribute("SubTyp", "SecuritySubType_t_492535359"); // 2
      Instrmt_76_set.insert("SecuritySubType_t_492535359");
      Instrmt_76.add_attribute("MMY", "977660313"); // 2
      Instrmt_76_set.insert("977660313");
      Instrmt_76.add_attribute("MatDt", "MaturityDate_t_1120328152"); // 2
      Instrmt_76_set.insert("MaturityDate_t_1120328152");
      Instrmt_76.add_attribute("MatTm", "826548506"); // 2
      Instrmt_76_set.insert("826548506");
      Instrmt_76.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1431938663"); // 2
      Instrmt_76_set.insert("SettleOnOpenFlag_t_1431938663");
      Instrmt_76.add_attribute("AsgnMeth", "212884349"); // 2
      Instrmt_76_set.insert("212884349");
      Instrmt_76.add_attribute("Status", "2"); // 2
      Instrmt_76_set.insert("2");
      Instrmt_76.add_attribute("CpnPmt", "CouponPaymentDate_t_795091405"); // 2
      Instrmt_76_set.insert("CouponPaymentDate_t_795091405");
      Instrmt_76.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_76_set.insert("XR");
      Instrmt_76.add_attribute("Snrty", "SR"); // 2
      Instrmt_76_set.insert("SR");
      Instrmt_76.add_attribute("NotlPctOut", "8436455.490000"); // 2
      Instrmt_76_set.insert("8436455.490000");
      Instrmt_76.add_attribute("OrigNotlPctOut", "18068181.200000"); // 2
      Instrmt_76_set.insert("18068181.200000");
      Instrmt_76.add_attribute("AttchPnt", "14747159.540000"); // 2
      Instrmt_76_set.insert("14747159.540000");
      Instrmt_76.add_attribute("DetchPnt", "19550271.130000"); // 2
      Instrmt_76_set.insert("19550271.130000");
      Instrmt_76.add_attribute("Issued", "IssueDate_t_933072592"); // 2
      Instrmt_76_set.insert("IssueDate_t_933072592");
      Instrmt_76.add_attribute("RepoCollSecTyp", "753325495"); // 2
      Instrmt_76_set.insert("753325495");
      Instrmt_76.add_attribute("RepoTrm", "1462359216"); // 2
      Instrmt_76_set.insert("1462359216");
      Instrmt_76.add_attribute("RepoRt", "9594460.340000"); // 2
      Instrmt_76_set.insert("9594460.340000");
      Instrmt_76.add_attribute("Fctr", "5275940.440000"); // 2
      Instrmt_76_set.insert("5275940.440000");
      Instrmt_76.add_attribute("CrdRtg", "CreditRating_t_1099715879"); // 2
      Instrmt_76_set.insert("CreditRating_t_1099715879");
      Instrmt_76.add_attribute("Rgstry", "InstrRegistry_t_628897051"); // 2
      Instrmt_76_set.insert("InstrRegistry_t_628897051");
      Instrmt_76.add_attribute("IssuCtry", "1698348517"); // 2
      Instrmt_76_set.insert("1698348517");
      Instrmt_76.add_attribute("StPrv", "StateOrProvinceOfIssue_t_350318210"); // 2
      Instrmt_76_set.insert("StateOrProvinceOfIssue_t_350318210");
      Instrmt_76.add_attribute("Lcl", "LocaleOfIssue_t_942214855"); // 2
      Instrmt_76_set.insert("LocaleOfIssue_t_942214855");
      Instrmt_76.add_attribute("Redeem", "RedemptionDate_t_644971728"); // 2
      Instrmt_76_set.insert("RedemptionDate_t_644971728");
      Instrmt_76.add_attribute("StrkPx", "4265782.410000"); // 2
      Instrmt_76_set.insert("4265782.410000");
      Instrmt_76.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_76_set.insert("EUR");
      Instrmt_76.add_attribute("StrkMult", "20439394.290000"); // 2
      Instrmt_76_set.insert("20439394.290000");
      Instrmt_76.add_attribute("StrkValu", "3847363.360000"); // 2
      Instrmt_76_set.insert("3847363.360000");
      Instrmt_76.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("StrkPxBndryPrcsn", "13623966.500000"); // 2
      Instrmt_76_set.insert("13623966.500000");
      Instrmt_76.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("OptAt", "1215539646"); // 2
      Instrmt_76_set.insert("1215539646");
      Instrmt_76.add_attribute("Mult", "6468516.650000"); // 2
      Instrmt_76_set.insert("6468516.650000");
      Instrmt_76.add_attribute("MultTyp", "2"); // 2
      Instrmt_76_set.insert("2");
      Instrmt_76.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("MinPxIncr", "14419430.700000"); // 2
      Instrmt_76_set.insert("14419430.700000");
      Instrmt_76.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1246043328"); // 2
      Instrmt_76_set.insert("MinPriceIncrementAmount_t_1246043328");
      Instrmt_76.add_attribute("UOM", "lbs"); // 2
      Instrmt_76_set.insert("lbs");
      Instrmt_76.add_attribute("UOMQty", "1381049.720000"); // 2
      Instrmt_76_set.insert("1381049.720000");
      Instrmt_76.add_attribute("PxUOM", "Gal"); // 2
      Instrmt_76_set.insert("Gal");
      Instrmt_76.add_attribute("PxUOMQty", "8779354.800000"); // 2
      Instrmt_76_set.insert("8779354.800000");
      Instrmt_76.add_attribute("SettlMeth", "P"); // 2
      Instrmt_76_set.insert("P");
      Instrmt_76.add_attribute("ExerStyle", "2"); // 2
      Instrmt_76_set.insert("2");
      Instrmt_76.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_76_set.insert("2");
      Instrmt_76.add_attribute("OptPayAmt", "OptPayoutAmount_t_1408007654"); // 2
      Instrmt_76_set.insert("OptPayoutAmount_t_1408007654");
      Instrmt_76.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_76_set.insert("PCTPAR");
      Instrmt_76.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_76_set.insert("FUT");
      Instrmt_76.add_attribute("ListMeth", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("CapPx", "12793098.300000"); // 2
      Instrmt_76_set.insert("12793098.300000");
      Instrmt_76.add_attribute("FlrPx", "17097198.880000"); // 2
      Instrmt_76_set.insert("17097198.880000");
      Instrmt_76.add_attribute("PutCall", "1"); // 2
      Instrmt_76_set.insert("1");
      Instrmt_76.add_attribute("FlexInd", "true"); // 2
      Instrmt_76_set.insert("true");
      Instrmt_76.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_76_set.insert("true");
      Instrmt_76.add_attribute("TmUnit", "S"); // 2
      Instrmt_76_set.insert("S");
      Instrmt_76.add_attribute("CpnRt", "4634691.840000"); // 2
      Instrmt_76_set.insert("4634691.840000");
      Instrmt_76.add_attribute("Exch", "SecurityExchange_t_1249607847"); // 2
      Instrmt_76_set.insert("SecurityExchange_t_1249607847");
      Instrmt_76.add_attribute("PosLmt", "1033592117"); // 2
      Instrmt_76_set.insert("1033592117");
      Instrmt_76.add_attribute("NTPosLmt", "848205520"); // 2
      Instrmt_76_set.insert("848205520");
      Instrmt_76.add_attribute("Issr", "Issuer_t_2050397879"); // 2
      Instrmt_76_set.insert("Issuer_t_2050397879");
      Instrmt_76.add_attribute("EncIssrLen", "1422583257"); // 2
      Instrmt_76_set.insert("1422583257");
      Instrmt_76.add_attribute("EncIssr", "EncodedIssuer_t_63118522"); // 2
      Instrmt_76_set.insert("EncodedIssuer_t_63118522");
      Instrmt_76.add_attribute("Desc", "SecurityDesc_t_1824032415"); // 2
      Instrmt_76_set.insert("SecurityDesc_t_1824032415");
      Instrmt_76.add_attribute("EncSecDescLen", "490639255"); // 2
      Instrmt_76_set.insert("490639255");
      Instrmt_76.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_709970188"); // 2
      Instrmt_76_set.insert("EncodedSecurityDesc_t_709970188");
      Instrmt_76.add_attribute("Pool", "Pool_t_1810551301"); // 2
      Instrmt_76_set.insert("Pool_t_1810551301");
      Instrmt_76.add_attribute("CSetMo", "133331463"); // 2
      Instrmt_76_set.insert("133331463");
      Instrmt_76.add_attribute("CPPgm", "99"); // 2
      Instrmt_76_set.insert("99");
      Instrmt_76.add_attribute("CPRegT", "CPRegType_t_909110981"); // 2
      Instrmt_76_set.insert("CPRegType_t_909110981");
      Instrmt_76.add_attribute("Dated", "DatedDate_t_1684034637"); // 2
      Instrmt_76_set.insert("DatedDate_t_1684034637");
      Instrmt_76.add_attribute("IntAcrl", "InterestAccrualDate_t_142534582"); // 2
      Instrmt_76_set.insert("InterestAccrualDate_t_142534582");
      all_values.push_back(Instrmt_76_set);
      all_compo_names.insert("Instrmt_76_set");

      {
        xml_element AID_79{"AID"};
        multiset<string> AID_79_set;
        AID_79.add_attribute("AltID", "SecurityAltID_t_1814488782"); // 3
        AID_79_set.insert("SecurityAltID_t_1814488782");
        AID_79.add_attribute("AltIDSrc", "2"); // 3
        AID_79_set.insert("2");
        all_values.push_back(AID_79_set);
        all_compo_names.insert("AID_79_set");

        Instrmt_76.add_element(AID_79);
      }
      {
        xml_element SecXML_79{"SecXML"};
        multiset<string> SecXML_79_set;
        SecXML_79.add_attribute("Schema", "SecurityXMLSchema_t_88183020"); // 3
        SecXML_79_set.insert("SecurityXMLSchema_t_88183020");
        all_values.push_back(SecXML_79_set);
        all_compo_names.insert("SecXML_79_set");

        Instrmt_76.add_element(SecXML_79);
      }
      {
        xml_element Evnt_79{"Evnt"};
        multiset<string> Evnt_79_set;
        Evnt_79.add_attribute("EventTyp", "8"); // 3
        Evnt_79_set.insert("8");
        Evnt_79.add_attribute("Dt", "EventDate_t_2045747444"); // 3
        Evnt_79_set.insert("EventDate_t_2045747444");
        Evnt_79.add_attribute("Tm", "EventTime_t_1496190674"); // 3
        Evnt_79_set.insert("EventTime_t_1496190674");
        Evnt_79.add_attribute("Px", "83846.590000"); // 3
        Evnt_79_set.insert("83846.590000");
        Evnt_79.add_attribute("Txt", "EventText_t_2057118815"); // 3
        Evnt_79_set.insert("EventText_t_2057118815");
        all_values.push_back(Evnt_79_set);
        all_compo_names.insert("Evnt_79_set");

        Instrmt_76.add_element(Evnt_79);
      }
      {
        xml_element Pty_403{"Pty"};
        multiset<string> Pty_403_set;
        Pty_403.add_attribute("ID", "InstrumentPartyID_t_1856430559"); // 3
        Pty_403_set.insert("InstrumentPartyID_t_1856430559");
        Pty_403.add_attribute("Src", "F"); // 3
        Pty_403_set.insert("F");
        Pty_403.add_attribute("R", "4"); // 3
        Pty_403_set.insert("4");
        all_values.push_back(Pty_403_set);
        all_compo_names.insert("Pty_403_set");

        {
          xml_element Sub_403{"Sub"};
          multiset<string> Sub_403_set;
          Sub_403.add_attribute("ID", "InstrumentPartySubID_t_419505006"); // 4
          Sub_403_set.insert("InstrumentPartySubID_t_419505006");
          Sub_403.add_attribute("Typ", "33"); // 4
          Sub_403_set.insert("33");
          all_values.push_back(Sub_403_set);
          all_compo_names.insert("Sub_403_set");

          Pty_403.add_element(Sub_403);
        }
        Instrmt_76.add_element(Pty_403);
      }
      {
        xml_element CmplxEvnt_76{"CmplxEvnt"};
        multiset<string> CmplxEvnt_76_set;
        CmplxEvnt_76.add_attribute("Typ", "1"); // 3
        CmplxEvnt_76_set.insert("1");
        CmplxEvnt_76.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1556641342"); // 3
        CmplxEvnt_76_set.insert("ComplexOptPayoutAmount_t_1556641342");
        CmplxEvnt_76.add_attribute("Px", "18252047.120000"); // 3
        CmplxEvnt_76_set.insert("18252047.120000");
        CmplxEvnt_76.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_76_set.insert("3");
        CmplxEvnt_76.add_attribute("PxBndryPrcsn", "4427498.110000"); // 3
        CmplxEvnt_76_set.insert("4427498.110000");
        CmplxEvnt_76.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_76_set.insert("2");
        CmplxEvnt_76.add_attribute("Cond", "2"); // 3
        CmplxEvnt_76_set.insert("2");
        all_values.push_back(CmplxEvnt_76_set);
        all_compo_names.insert("CmplxEvnt_76_set");

        {
          xml_element EvntDts_76{"EvntDts"};
          multiset<string> EvntDts_76_set;
          EvntDts_76.add_attribute("StartDt", "ComplexEventStartDate_t_1865333068"); // 4
          EvntDts_76_set.insert("ComplexEventStartDate_t_1865333068");
          EvntDts_76.add_attribute("EndDt", "ComplexEventEndDate_t_589045107"); // 4
          EvntDts_76_set.insert("ComplexEventEndDate_t_589045107");
          all_values.push_back(EvntDts_76_set);
          all_compo_names.insert("EvntDts_76_set");

          {
            xml_element EvntTms_76{"EvntTms"};
            multiset<string> EvntTms_76_set;
            EvntTms_76.add_attribute("StartTm", "508150221"); // 5
            EvntTms_76_set.insert("508150221");
            EvntTms_76.add_attribute("EndTm", "208488675"); // 5
            EvntTms_76_set.insert("208488675");
            all_values.push_back(EvntTms_76_set);
            all_compo_names.insert("EvntTms_76_set");

            EvntDts_76.add_element(EvntTms_76);
          }
          CmplxEvnt_76.add_element(EvntDts_76);
        }
        Instrmt_76.add_element(CmplxEvnt_76);
      }
      SecL_0.add_element(Instrmt_76);
    }
    {
      xml_element InstrmtExt_11{"InstrmtExt"};
      multiset<string> InstrmtExt_11_set;
      InstrmtExt_11.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_11_set.insert("2");
      InstrmtExt_11.add_attribute("PctAtRisk", "1712178.740000"); // 2
      InstrmtExt_11_set.insert("1712178.740000");
      all_values.push_back(InstrmtExt_11_set);
      all_compo_names.insert("InstrmtExt_11_set");

      {
        xml_element Attrb_19{"Attrb"};
        multiset<string> Attrb_19_set;
        Attrb_19.add_attribute("Typ", "7"); // 3
        Attrb_19_set.insert("7");
        Attrb_19.add_attribute("Val", "InstrAttribValue_t_1303444905"); // 3
        Attrb_19_set.insert("InstrAttribValue_t_1303444905");
        all_values.push_back(Attrb_19_set);
        all_compo_names.insert("Attrb_19_set");

        InstrmtExt_11.add_element(Attrb_19);
      }
      SecL_0.add_element(InstrmtExt_11);
    }
    {
      xml_element FinDetls_26{"FinDetls"};
      multiset<string> FinDetls_26_set;
      FinDetls_26.add_attribute("AgmtDesc", "AgreementDesc_t_1080328855"); // 2
      FinDetls_26_set.insert("AgreementDesc_t_1080328855");
      FinDetls_26.add_attribute("AgmtID", "AgreementID_t_2025854776"); // 2
      FinDetls_26_set.insert("AgreementID_t_2025854776");
      FinDetls_26.add_attribute("AgmtDt", "AgreementDate_t_1445979488"); // 2
      FinDetls_26_set.insert("AgreementDate_t_1445979488");
      FinDetls_26.add_attribute("AgmtCcy", "JPY"); // 2
      FinDetls_26_set.insert("JPY");
      FinDetls_26.add_attribute("TrmTyp", "1"); // 2
      FinDetls_26_set.insert("1");
      FinDetls_26.add_attribute("StartDt", "StartDate_t_105305870"); // 2
      FinDetls_26_set.insert("StartDate_t_105305870");
      FinDetls_26.add_attribute("EndDt", "EndDate_t_191121394"); // 2
      FinDetls_26_set.insert("EndDate_t_191121394");
      FinDetls_26.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_26_set.insert("2");
      FinDetls_26.add_attribute("MgnRatio", "1136905.290000"); // 2
      FinDetls_26_set.insert("1136905.290000");
      all_values.push_back(FinDetls_26_set);
      all_compo_names.insert("FinDetls_26_set");

      SecL_0.add_element(FinDetls_26);
    }
    {
      xml_element SecTrdgRules_6{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_8{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_8_set;
        BaseTrdgRules_8.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_8_set.insert("2");
        BaseTrdgRules_8.add_attribute("MinTrdVol", "5918164.450000"); // 3
        BaseTrdgRules_8_set.insert("5918164.450000");
        BaseTrdgRules_8.add_attribute("MaxTrdVol", "14013850.190000"); // 3
        BaseTrdgRules_8_set.insert("14013850.190000");
        BaseTrdgRules_8.add_attribute("MxPxVar", "17201116.170000"); // 3
        BaseTrdgRules_8_set.insert("17201116.170000");
        BaseTrdgRules_8.add_attribute("ImpldMktInd", "3"); // 3
        BaseTrdgRules_8_set.insert("3");
        BaseTrdgRules_8.add_attribute("TrdCcy", "CAN"); // 3
        BaseTrdgRules_8_set.insert("CAN");
        BaseTrdgRules_8.add_attribute("RndLot", "4204791.450000"); // 3
        BaseTrdgRules_8_set.insert("4204791.450000");
        BaseTrdgRules_8.add_attribute("MlegModel", "2"); // 3
        BaseTrdgRules_8_set.insert("2");
        BaseTrdgRules_8.add_attribute("MlegPxMeth", "1"); // 3
        BaseTrdgRules_8_set.insert("1");
        BaseTrdgRules_8.add_attribute("PxTyp", "3"); // 3
        BaseTrdgRules_8_set.insert("3");
        all_values.push_back(BaseTrdgRules_8_set);
        all_compo_names.insert("BaseTrdgRules_8_set");

        {
          xml_element TickRules_8{"TickRules"};
          multiset<string> TickRules_8_set;
          TickRules_8.add_attribute("StartTickPxRng", "8192845.480000"); // 4
          TickRules_8_set.insert("8192845.480000");
          TickRules_8.add_attribute("EndTickPxRng", "10119960.210000"); // 4
          TickRules_8_set.insert("10119960.210000");
          TickRules_8.add_attribute("TickIncr", "5810783.760000"); // 4
          TickRules_8_set.insert("5810783.760000");
          TickRules_8.add_attribute("TickRuleTyp", "0"); // 4
          TickRules_8_set.insert("0");
          all_values.push_back(TickRules_8_set);
          all_compo_names.insert("TickRules_8_set");

          BaseTrdgRules_8.add_element(TickRules_8);
        }
        {
          xml_element LotTypeRules_8{"LotTypeRules"};
          multiset<string> LotTypeRules_8_set;
          LotTypeRules_8.add_attribute("LotTyp", "3"); // 4
          LotTypeRules_8_set.insert("3");
          LotTypeRules_8.add_attribute("MinLotSz", "7895670.510000"); // 4
          LotTypeRules_8_set.insert("7895670.510000");
          all_values.push_back(LotTypeRules_8_set);
          all_compo_names.insert("LotTypeRules_8_set");

          BaseTrdgRules_8.add_element(LotTypeRules_8);
        }
        {
          xml_element PxLmts_8{"PxLmts"};
          multiset<string> PxLmts_8_set;
          PxLmts_8.add_attribute("PxLmtTyp", "0"); // 4
          PxLmts_8_set.insert("0");
          PxLmts_8.add_attribute("LowLmtPx", "16913641.160000"); // 4
          PxLmts_8_set.insert("16913641.160000");
          PxLmts_8.add_attribute("HiLmtPx", "11313871.900000"); // 4
          PxLmts_8_set.insert("11313871.900000");
          PxLmts_8.add_attribute("TrdgRefPx", "18633062.070000"); // 4
          PxLmts_8_set.insert("18633062.070000");
          all_values.push_back(PxLmts_8_set);
          all_compo_names.insert("PxLmts_8_set");

          BaseTrdgRules_8.add_element(PxLmts_8);
        }
        SecTrdgRules_6.add_element(BaseTrdgRules_8);
      }
      {
        xml_element TrdgSesRulesGrp_6{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_6_set;
        TrdgSesRulesGrp_6.add_attribute("SesID", "2"); // 3
        TrdgSesRulesGrp_6_set.insert("2");
        TrdgSesRulesGrp_6.add_attribute("SesSub", "4"); // 3
        TrdgSesRulesGrp_6_set.insert("4");
        all_values.push_back(TrdgSesRulesGrp_6_set);
        all_compo_names.insert("TrdgSesRulesGrp_6_set");

        {
          xml_element TrdgSesRules_6{"TrdgSesRules"};
          {
            xml_element OrdTypRules_11{"OrdTypRules"};
            multiset<string> OrdTypRules_11_set;
            OrdTypRules_11.add_attribute("OrdTyp", "G"); // 5
            OrdTypRules_11_set.insert("G");
            all_values.push_back(OrdTypRules_11_set);
            all_compo_names.insert("OrdTypRules_11_set");

            TrdgSesRules_6.add_element(OrdTypRules_11);
          }
          {
            xml_element TmInForceRules_10{"TmInForceRules"};
            multiset<string> TmInForceRules_10_set;
            TmInForceRules_10.add_attribute("TmInForce", "3"); // 5
            TmInForceRules_10_set.insert("3");
            all_values.push_back(TmInForceRules_10_set);
            all_compo_names.insert("TmInForceRules_10_set");

            TrdgSesRules_6.add_element(TmInForceRules_10);
          }
          {
            xml_element ExecInstRules_9{"ExecInstRules"};
            multiset<string> ExecInstRules_9_set;
            ExecInstRules_9.add_attribute("ExecInstValu", "O"); // 5
            ExecInstRules_9_set.insert("O");
            all_values.push_back(ExecInstRules_9_set);
            all_compo_names.insert("ExecInstRules_9_set");

            TrdgSesRules_6.add_element(ExecInstRules_9);
          }
          {
            xml_element MtchRules_6{"MtchRules"};
            multiset<string> MtchRules_6_set;
            MtchRules_6.add_attribute("MtchAlgo", "MatchAlgorithm_t_548480907"); // 5
            MtchRules_6_set.insert("MatchAlgorithm_t_548480907");
            MtchRules_6.add_attribute("MtchTyp", "S5"); // 5
            MtchRules_6_set.insert("S5");
            all_values.push_back(MtchRules_6_set);
            all_compo_names.insert("MtchRules_6_set");

            TrdgSesRules_6.add_element(MtchRules_6);
          }
          {
            xml_element MDFeedTyps_6{"MDFeedTyps"};
            multiset<string> MDFeedTyps_6_set;
            MDFeedTyps_6.add_attribute("MDFeedTyp", "MDFeedType_t_1493737311"); // 5
            MDFeedTyps_6_set.insert("MDFeedType_t_1493737311");
            MDFeedTyps_6.add_attribute("MktDepth", "1431350441"); // 5
            MDFeedTyps_6_set.insert("1431350441");
            MDFeedTyps_6.add_attribute("MDBkTyp", "2"); // 5
            MDFeedTyps_6_set.insert("2");
            all_values.push_back(MDFeedTyps_6_set);
            all_compo_names.insert("MDFeedTyps_6_set");

            TrdgSesRules_6.add_element(MDFeedTyps_6);
          }
          TrdgSesRulesGrp_6.add_element(TrdgSesRules_6);
        }
        SecTrdgRules_6.add_element(TrdgSesRulesGrp_6);
      }
      {
        xml_element Attrb_20{"Attrb"};
        multiset<string> Attrb_20_set;
        Attrb_20.add_attribute("Typ", "23"); // 3
        Attrb_20_set.insert("23");
        Attrb_20.add_attribute("Val", "NestedInstrAttribValue_t_2023166886"); // 3
        Attrb_20_set.insert("NestedInstrAttribValue_t_2023166886");
        all_values.push_back(Attrb_20_set);
        all_compo_names.insert("Attrb_20_set");

        SecTrdgRules_6.add_element(Attrb_20);
      }
      SecL_0.add_element(SecTrdgRules_6);
    }
    {
      xml_element StrkRules_6{"StrkRules"};
      multiset<string> StrkRules_6_set;
      StrkRules_6.add_attribute("StrkRule", "StrikeRuleID_t_844441084"); // 2
      StrkRules_6_set.insert("StrikeRuleID_t_844441084");
      StrkRules_6.add_attribute("StartStrkPxRng", "11671218.430000"); // 2
      StrkRules_6_set.insert("11671218.430000");
      StrkRules_6.add_attribute("EndStrkPxRng", "8870046.890000"); // 2
      StrkRules_6_set.insert("8870046.890000");
      StrkRules_6.add_attribute("StrkIncr", "14600779.840000"); // 2
      StrkRules_6_set.insert("14600779.840000");
      StrkRules_6.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_6_set.insert("1");
      all_values.push_back(StrkRules_6_set);
      all_compo_names.insert("StrkRules_6_set");

      {
        xml_element MatRules_6{"MatRules"};
        multiset<string> MatRules_6_set;
        MatRules_6.add_attribute("MatRuleID", "MaturityRuleID_t_1307483834"); // 3
        MatRules_6_set.insert("MaturityRuleID_t_1307483834");
        MatRules_6.add_attribute("MMYFmt", "0"); // 3
        MatRules_6_set.insert("0");
        MatRules_6.add_attribute("MMYIncrUnits", "3"); // 3
        MatRules_6_set.insert("3");
        MatRules_6.add_attribute("StartMMY", "23229142"); // 3
        MatRules_6_set.insert("23229142");
        MatRules_6.add_attribute("EndMMY", "425236847"); // 3
        MatRules_6_set.insert("425236847");
        MatRules_6.add_attribute("MMYIncr", "1611219776"); // 3
        MatRules_6_set.insert("1611219776");
        all_values.push_back(MatRules_6_set);
        all_compo_names.insert("MatRules_6_set");

        StrkRules_6.add_element(MatRules_6);
      }
      SecL_0.add_element(StrkRules_6);
    }
    {
      xml_element Undly_110{"Undly"};
      multiset<string> Undly_110_set;
      Undly_110.add_attribute("Sym", "UnderlyingSymbol_t_604307518"); // 2
      Undly_110_set.insert("UnderlyingSymbol_t_604307518");
      Undly_110.add_attribute("Sfx", "CD"); // 2
      Undly_110_set.insert("CD");
      Undly_110.add_attribute("ID", "UnderlyingSecurityID_t_983882370"); // 2
      Undly_110_set.insert("UnderlyingSecurityID_t_983882370");
      Undly_110.add_attribute("Src", "1"); // 2
      Undly_110_set.insert("1");
      Undly_110.add_attribute("Prod", "12"); // 2
      Undly_110_set.insert("12");
      Undly_110.add_attribute("CFI", "UnderlyingCFICode_t_527762838"); // 2
      Undly_110_set.insert("UnderlyingCFICode_t_527762838");
      Undly_110.add_attribute("SecTyp", "OPT"); // 2
      Undly_110_set.insert("OPT");
      Undly_110.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2109250364"); // 2
      Undly_110_set.insert("UnderlyingSecuritySubType_t_2109250364");
      Undly_110.add_attribute("MMY", "1151972162"); // 2
      Undly_110_set.insert("1151972162");
      Undly_110.add_attribute("Mat", "UnderlyingMaturityDate_t_1387536431"); // 2
      Undly_110_set.insert("UnderlyingMaturityDate_t_1387536431");
      Undly_110.add_attribute("MatTm", "1123568763"); // 2
      Undly_110_set.insert("1123568763");
      Undly_110.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_376031827"); // 2
      Undly_110_set.insert("UnderlyingCouponPaymentDate_t_376031827");
      Undly_110.add_attribute("RestrctTyp", "FR"); // 2
      Undly_110_set.insert("FR");
      Undly_110.add_attribute("Snrty", "SR"); // 2
      Undly_110_set.insert("SR");
      Undly_110.add_attribute("NotlPctOut", "18528810.110000"); // 2
      Undly_110_set.insert("18528810.110000");
      Undly_110.add_attribute("OrigNotlPctOut", "20364060.120000"); // 2
      Undly_110_set.insert("20364060.120000");
      Undly_110.add_attribute("AttchPnt", "9559164.640000"); // 2
      Undly_110_set.insert("9559164.640000");
      Undly_110.add_attribute("DetchPnt", "12959370.760000"); // 2
      Undly_110_set.insert("12959370.760000");
      Undly_110.add_attribute("Issued", "UnderlyingIssueDate_t_1483416237"); // 2
      Undly_110_set.insert("UnderlyingIssueDate_t_1483416237");
      Undly_110.add_attribute("RepoCollSecTyp", "831599703"); // 2
      Undly_110_set.insert("831599703");
      Undly_110.add_attribute("RepoTrm", "2140378160"); // 2
      Undly_110_set.insert("2140378160");
      Undly_110.add_attribute("RepoRt", "5030544.320000"); // 2
      Undly_110_set.insert("5030544.320000");
      Undly_110.add_attribute("Fctr", "17186043.920000"); // 2
      Undly_110_set.insert("17186043.920000");
      Undly_110.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1452972496"); // 2
      Undly_110_set.insert("UnderlyingCreditRating_t_1452972496");
      Undly_110.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_921883620"); // 2
      Undly_110_set.insert("UnderlyingInstrRegistry_t_921883620");
      Undly_110.add_attribute("Ctry", "878604579"); // 2
      Undly_110_set.insert("878604579");
      Undly_110.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1058924796"); // 2
      Undly_110_set.insert("UnderlyingStateOrProvinceOfIssue_t_1058924796");
      Undly_110.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1521107376"); // 2
      Undly_110_set.insert("UnderlyingLocaleOfIssue_t_1521107376");
      Undly_110.add_attribute("Redeem", "UnderlyingRedemptionDate_t_901833721"); // 2
      Undly_110_set.insert("UnderlyingRedemptionDate_t_901833721");
      Undly_110.add_attribute("StrkPx", "14841616.430000"); // 2
      Undly_110_set.insert("14841616.430000");
      Undly_110.add_attribute("StrkCcy", "USD"); // 2
      Undly_110_set.insert("USD");
      Undly_110.add_attribute("OptA", "1170244498"); // 2
      Undly_110_set.insert("1170244498");
      Undly_110.add_attribute("Mult", "19687258.750000"); // 2
      Undly_110_set.insert("19687258.750000");
      Undly_110.add_attribute("MultTyp", "0"); // 2
      Undly_110_set.insert("0");
      Undly_110.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_110_set.insert("4");
      Undly_110.add_attribute("UOM", "MMbbl"); // 2
      Undly_110_set.insert("MMbbl");
      Undly_110.add_attribute("UOMQty", "11303102.740000"); // 2
      Undly_110_set.insert("11303102.740000");
      Undly_110.add_attribute("PxUOM", "Alw"); // 2
      Undly_110_set.insert("Alw");
      Undly_110.add_attribute("PxUOMQty", "15009772.270000"); // 2
      Undly_110_set.insert("15009772.270000");
      Undly_110.add_attribute("TmUnit", "H"); // 2
      Undly_110_set.insert("H");
      Undly_110.add_attribute("ExerStyle", "1"); // 2
      Undly_110_set.insert("1");
      Undly_110.add_attribute("CpnRt", "18770090.550000"); // 2
      Undly_110_set.insert("18770090.550000");
      Undly_110.add_attribute("Exch", "UnderlyingSecurityExchange_t_913031758"); // 2
      Undly_110_set.insert("UnderlyingSecurityExchange_t_913031758");
      Undly_110.add_attribute("Issr", "UnderlyingIssuer_t_2026090157"); // 2
      Undly_110_set.insert("UnderlyingIssuer_t_2026090157");
      Undly_110.add_attribute("EncUndIssrLen", "1582406418"); // 2
      Undly_110_set.insert("1582406418");
      Undly_110.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_801954122"); // 2
      Undly_110_set.insert("EncodedUnderlyingIssuer_t_801954122");
      Undly_110.add_attribute("Desc", "UnderlyingSecurityDesc_t_834522973"); // 2
      Undly_110_set.insert("UnderlyingSecurityDesc_t_834522973");
      Undly_110.add_attribute("EncUndSecDescLen", "730859846"); // 2
      Undly_110_set.insert("730859846");
      Undly_110.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_137886712"); // 2
      Undly_110_set.insert("EncodedUnderlyingSecurityDesc_t_137886712");
      Undly_110.add_attribute("CPPgm", "UnderlyingCPProgram_t_1666122676"); // 2
      Undly_110_set.insert("UnderlyingCPProgram_t_1666122676");
      Undly_110.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_723754358"); // 2
      Undly_110_set.insert("UnderlyingCPRegType_t_723754358");
      Undly_110.add_attribute("AllocPct", "6409411.440000"); // 2
      Undly_110_set.insert("6409411.440000");
      Undly_110.add_attribute("Ccy", "CAN"); // 2
      Undly_110_set.insert("CAN");
      Undly_110.add_attribute("Qty", "15628247.650000"); // 2
      Undly_110_set.insert("15628247.650000");
      Undly_110.add_attribute("SettlTyp", "5"); // 2
      Undly_110_set.insert("5");
      Undly_110.add_attribute("CashAmt", "UnderlyingCashAmount_t_1088168003"); // 2
      Undly_110_set.insert("UnderlyingCashAmount_t_1088168003");
      Undly_110.add_attribute("CashTyp", "DIFF"); // 2
      Undly_110_set.insert("DIFF");
      Undly_110.add_attribute("Px", "8701980.730000"); // 2
      Undly_110_set.insert("8701980.730000");
      Undly_110.add_attribute("DirtPx", "4248459.980000"); // 2
      Undly_110_set.insert("4248459.980000");
      Undly_110.add_attribute("EndPx", "19212919.970000"); // 2
      Undly_110_set.insert("19212919.970000");
      Undly_110.add_attribute("StartVal", "UnderlyingStartValue_t_228855665"); // 2
      Undly_110_set.insert("UnderlyingStartValue_t_228855665");
      Undly_110.add_attribute("CurVal", "UnderlyingCurrentValue_t_1595090496"); // 2
      Undly_110_set.insert("UnderlyingCurrentValue_t_1595090496");
      Undly_110.add_attribute("EndVal", "UnderlyingEndValue_t_1742534224"); // 2
      Undly_110_set.insert("UnderlyingEndValue_t_1742534224");
      Undly_110.add_attribute("AdjQty", "9813878.270000"); // 2
      Undly_110_set.insert("9813878.270000");
      Undly_110.add_attribute("FxRate", "8637955.030000"); // 2
      Undly_110_set.insert("8637955.030000");
      Undly_110.add_attribute("FxRateCalc", "M"); // 2
      Undly_110_set.insert("M");
      Undly_110.add_attribute("CapValu", "UnderlyingCapValue_t_2111698102"); // 2
      Undly_110_set.insert("UnderlyingCapValue_t_2111698102");
      Undly_110.add_attribute("SetMeth", "UnderlyingSettlMethod_t_94267225"); // 2
      Undly_110_set.insert("UnderlyingSettlMethod_t_94267225");
      Undly_110.add_attribute("PutCall", "1445032869"); // 2
      Undly_110_set.insert("1445032869");
      all_values.push_back(Undly_110_set);
      all_compo_names.insert("Undly_110_set");

      {
        xml_element UndAID_110{"UndAID"};
        multiset<string> UndAID_110_set;
        UndAID_110.add_attribute("AltID", "UnderlyingSecurityAltID_t_334577512"); // 3
        UndAID_110_set.insert("UnderlyingSecurityAltID_t_334577512");
        UndAID_110.add_attribute("AltIDSrc", "6"); // 3
        UndAID_110_set.insert("6");
        all_values.push_back(UndAID_110_set);
        all_compo_names.insert("UndAID_110_set");

        Undly_110.add_element(UndAID_110);
      }
      {
        xml_element Stip_175{"Stip"};
        multiset<string> Stip_175_set;
        Stip_175.add_attribute("Typ", "PRICE"); // 3
        Stip_175_set.insert("PRICE");
        Stip_175.add_attribute("Val", "UnderlyingStipValue_t_1247609270"); // 3
        Stip_175_set.insert("UnderlyingStipValue_t_1247609270");
        all_values.push_back(Stip_175_set);
        all_compo_names.insert("Stip_175_set");

        Undly_110.add_element(Stip_175);
      }
      {
        xml_element Pty_404{"Pty"};
        multiset<string> Pty_404_set;
        Pty_404.add_attribute("ID", "UnderlyingInstrumentPartyID_t_326914220"); // 3
        Pty_404_set.insert("UnderlyingInstrumentPartyID_t_326914220");
        Pty_404.add_attribute("Src", "3"); // 3
        Pty_404_set.insert("3");
        Pty_404.add_attribute("R", "26"); // 3
        Pty_404_set.insert("26");
        all_values.push_back(Pty_404_set);
        all_compo_names.insert("Pty_404_set");

        {
          xml_element Sub_404{"Sub"};
          multiset<string> Sub_404_set;
          Sub_404.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1161437194"); // 4
          Sub_404_set.insert("UnderlyingInstrumentPartySubID_t_1161437194");
          Sub_404.add_attribute("Typ", "6"); // 4
          Sub_404_set.insert("6");
          all_values.push_back(Sub_404_set);
          all_compo_names.insert("Sub_404_set");

          Pty_404.add_element(Sub_404);
        }
        Undly_110.add_element(Pty_404);
      }
      SecL_0.add_element(Undly_110);
    }
    {
      xml_element Stip_176{"Stip"};
      multiset<string> Stip_176_set;
      Stip_176.add_attribute("Typ", "WAM"); // 2
      Stip_176_set.insert("WAM");
      Stip_176.add_attribute("Val", "StipulationValue_t_680076222"); // 2
      Stip_176_set.insert("StipulationValue_t_680076222");
      all_values.push_back(Stip_176_set);
      all_compo_names.insert("Stip_176_set");

      SecL_0.add_element(Stip_176);
    }
    {
      xml_element SecL_1{"SecL"};
      multiset<string> SecL_1_set;
      SecL_1.add_attribute("SwapTyp", "5"); // 2
      SecL_1_set.insert("5");
      SecL_1.add_attribute("SettlTyp", "1"); // 2
      SecL_1_set.insert("1");
      all_values.push_back(SecL_1_set);
      all_compo_names.insert("SecL_1_set");

      {
        xml_element Leg_93{"Leg"};
        multiset<string> Leg_93_set;
        Leg_93.add_attribute("Sym", "LegSymbol_t_1917319643"); // 3
        Leg_93_set.insert("LegSymbol_t_1917319643");
        Leg_93.add_attribute("Sfx", "CD"); // 3
        Leg_93_set.insert("CD");
        Leg_93.add_attribute("ID", "LegSecurityID_t_96248718"); // 3
        Leg_93_set.insert("LegSecurityID_t_96248718");
        Leg_93.add_attribute("Src", "L"); // 3
        Leg_93_set.insert("L");
        Leg_93.add_attribute("Prod", "2"); // 3
        Leg_93_set.insert("2");
        Leg_93.add_attribute("CFI", "LegCFICode_t_1032697211"); // 3
        Leg_93_set.insert("LegCFICode_t_1032697211");
        Leg_93.add_attribute("SecTyp", "OOF"); // 3
        Leg_93_set.insert("OOF");
        Leg_93.add_attribute("SecSubTyp", "LegSecuritySubType_t_1458868811"); // 3
        Leg_93_set.insert("LegSecuritySubType_t_1458868811");
        Leg_93.add_attribute("MMY", "806505561"); // 3
        Leg_93_set.insert("806505561");
        Leg_93.add_attribute("Mat", "LegMaturityDate_t_837254086"); // 3
        Leg_93_set.insert("LegMaturityDate_t_837254086");
        Leg_93.add_attribute("MatTm", "906475660"); // 3
        Leg_93_set.insert("906475660");
        Leg_93.add_attribute("CpnPmt", "LegCouponPaymentDate_t_401556137"); // 3
        Leg_93_set.insert("LegCouponPaymentDate_t_401556137");
        Leg_93.add_attribute("Issued", "LegIssueDate_t_1818641914"); // 3
        Leg_93_set.insert("LegIssueDate_t_1818641914");
        Leg_93.add_attribute("RepoCollSecTyp", "1770271163"); // 3
        Leg_93_set.insert("1770271163");
        Leg_93.add_attribute("RepoTrm", "345611779"); // 3
        Leg_93_set.insert("345611779");
        Leg_93.add_attribute("RepoRt", "17828563.680000"); // 3
        Leg_93_set.insert("17828563.680000");
        Leg_93.add_attribute("Fctr", "18645383.880000"); // 3
        Leg_93_set.insert("18645383.880000");
        Leg_93.add_attribute("CrdRtg", "LegCreditRating_t_1790644649"); // 3
        Leg_93_set.insert("LegCreditRating_t_1790644649");
        Leg_93.add_attribute("Rgstry", "LegInstrRegistry_t_2117433880"); // 3
        Leg_93_set.insert("LegInstrRegistry_t_2117433880");
        Leg_93.add_attribute("Ctry", "165362452"); // 3
        Leg_93_set.insert("165362452");
        Leg_93.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_817719277"); // 3
        Leg_93_set.insert("LegStateOrProvinceOfIssue_t_817719277");
        Leg_93.add_attribute("Lcl", "LegLocaleOfIssue_t_1217559502"); // 3
        Leg_93_set.insert("LegLocaleOfIssue_t_1217559502");
        Leg_93.add_attribute("Redeem", "LegRedemptionDate_t_492276672"); // 3
        Leg_93_set.insert("LegRedemptionDate_t_492276672");
        Leg_93.add_attribute("Strk", "14272003.240000"); // 3
        Leg_93_set.insert("14272003.240000");
        Leg_93.add_attribute("StrkCcy", "JPY"); // 3
        Leg_93_set.insert("JPY");
        Leg_93.add_attribute("OptA", "620057568"); // 3
        Leg_93_set.insert("620057568");
        Leg_93.add_attribute("Cmult", "11596057.040000"); // 3
        Leg_93_set.insert("11596057.040000");
        Leg_93.add_attribute("MultTyp", "0"); // 3
        Leg_93_set.insert("0");
        Leg_93.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_93_set.insert("1");
        Leg_93.add_attribute("UOM", "oz_tr"); // 3
        Leg_93_set.insert("oz_tr");
        Leg_93.add_attribute("UOMQty", "21036260.840000"); // 3
        Leg_93_set.insert("21036260.840000");
        Leg_93.add_attribute("PxUOM", "t"); // 3
        Leg_93_set.insert("t");
        Leg_93.add_attribute("PxUOMQty", "19367620.240000"); // 3
        Leg_93_set.insert("19367620.240000");
        Leg_93.add_attribute("TmUnit", "Mo"); // 3
        Leg_93_set.insert("Mo");
        Leg_93.add_attribute("ExerStyle", "0"); // 3
        Leg_93_set.insert("0");
        Leg_93.add_attribute("CpnRt", "8219755.880000"); // 3
        Leg_93_set.insert("8219755.880000");
        Leg_93.add_attribute("Exch", "LegSecurityExchange_t_302741205"); // 3
        Leg_93_set.insert("LegSecurityExchange_t_302741205");
        Leg_93.add_attribute("Issr", "LegIssuer_t_827931958"); // 3
        Leg_93_set.insert("LegIssuer_t_827931958");
        Leg_93.add_attribute("EncLegIssrLen", "1628481149"); // 3
        Leg_93_set.insert("1628481149");
        Leg_93.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1139995291"); // 3
        Leg_93_set.insert("EncodedLegIssuer_t_1139995291");
        Leg_93.add_attribute("Desc", "LegSecurityDesc_t_1734407618"); // 3
        Leg_93_set.insert("LegSecurityDesc_t_1734407618");
        Leg_93.add_attribute("EncLegSecDescLen", "2030037286"); // 3
        Leg_93_set.insert("2030037286");
        Leg_93.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_811153557"); // 3
        Leg_93_set.insert("EncodedLegSecurityDesc_t_811153557");
        Leg_93.add_attribute("RatioQty", "13571951.330000"); // 3
        Leg_93_set.insert("13571951.330000");
        Leg_93.add_attribute("Side", "B"); // 3
        Leg_93_set.insert("B");
        Leg_93.add_attribute("Ccy", "CHF"); // 3
        Leg_93_set.insert("CHF");
        Leg_93.add_attribute("Pool", "LegPool_t_2018810067"); // 3
        Leg_93_set.insert("LegPool_t_2018810067");
        Leg_93.add_attribute("Dated", "LegDatedDate_t_416476509"); // 3
        Leg_93_set.insert("LegDatedDate_t_416476509");
        Leg_93.add_attribute("CSetMo", "1239612325"); // 3
        Leg_93_set.insert("1239612325");
        Leg_93.add_attribute("IntAcrl", "LegInterestAccrualDate_t_689045696"); // 3
        Leg_93_set.insert("LegInterestAccrualDate_t_689045696");
        Leg_93.add_attribute("PutCall", "1634036012"); // 3
        Leg_93_set.insert("1634036012");
        Leg_93.add_attribute("LegOptionRatio", "17318889.980000"); // 3
        Leg_93_set.insert("17318889.980000");
        Leg_93.add_attribute("Px", "21162460.200000"); // 3
        Leg_93_set.insert("21162460.200000");
        all_values.push_back(Leg_93_set);
        all_compo_names.insert("Leg_93_set");

        {
          xml_element LegAID_88{"LegAID"};
          multiset<string> LegAID_88_set;
          LegAID_88.add_attribute("SecAltID", "LegSecurityAltID_t_606191611"); // 4
          LegAID_88_set.insert("LegSecurityAltID_t_606191611");
          LegAID_88.add_attribute("SecAltIDSrc", "5"); // 4
          LegAID_88_set.insert("5");
          all_values.push_back(LegAID_88_set);
          all_compo_names.insert("LegAID_88_set");

          Leg_93.add_element(LegAID_88);
        }
        SecL_1.add_element(Leg_93);
      }
      {
        xml_element Stip_177{"Stip"};
        multiset<string> Stip_177_set;
        Stip_177.add_attribute("StipTyp", "MAT"); // 3
        Stip_177_set.insert("MAT");
        Stip_177.add_attribute("StipVal", "LegStipulationValue_t_1765797316"); // 3
        Stip_177_set.insert("LegStipulationValue_t_1765797316");
        all_values.push_back(Stip_177_set);
        all_compo_names.insert("Stip_177_set");

        SecL_1.add_element(Stip_177);
      }
      {
        xml_element BnchmkCurve_10{"BnchmkCurve"};
        multiset<string> BnchmkCurve_10_set;
        BnchmkCurve_10.add_attribute("Ccy", "JPY"); // 3
        BnchmkCurve_10_set.insert("JPY");
        BnchmkCurve_10.add_attribute("Name", "MuniAAA"); // 3
        BnchmkCurve_10_set.insert("MuniAAA");
        BnchmkCurve_10.add_attribute("Point", "LegBenchmarkCurvePoint_t_1380568094"); // 3
        BnchmkCurve_10_set.insert("LegBenchmarkCurvePoint_t_1380568094");
        BnchmkCurve_10.add_attribute("Px", "16080130.940000"); // 3
        BnchmkCurve_10_set.insert("16080130.940000");
        BnchmkCurve_10.add_attribute("PxTyp", "1248105350"); // 3
        BnchmkCurve_10_set.insert("1248105350");
        all_values.push_back(BnchmkCurve_10_set);
        all_compo_names.insert("BnchmkCurve_10_set");

        SecL_1.add_element(BnchmkCurve_10);
      }
      SecL_0.add_element(SecL_1);
    }
    {
      xml_element SprdBnchmkCurve_34{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_34_set;
      SprdBnchmkCurve_34.add_attribute("Spread", "10749108.780000"); // 2
      SprdBnchmkCurve_34_set.insert("10749108.780000");
      SprdBnchmkCurve_34.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_34_set.insert("JPY");
      SprdBnchmkCurve_34.add_attribute("Name", "FutureSWAP"); // 2
      SprdBnchmkCurve_34_set.insert("FutureSWAP");
      SprdBnchmkCurve_34.add_attribute("Point", "BenchmarkCurvePoint_t_1805008198"); // 2
      SprdBnchmkCurve_34_set.insert("BenchmarkCurvePoint_t_1805008198");
      SprdBnchmkCurve_34.add_attribute("Px", "15510784.390000"); // 2
      SprdBnchmkCurve_34_set.insert("15510784.390000");
      SprdBnchmkCurve_34.add_attribute("PxTyp", "7"); // 2
      SprdBnchmkCurve_34_set.insert("7");
      SprdBnchmkCurve_34.add_attribute("SecID", "BenchmarkSecurityID_t_1391932168"); // 2
      SprdBnchmkCurve_34_set.insert("BenchmarkSecurityID_t_1391932168");
      SprdBnchmkCurve_34.add_attribute("SecIDSrc", "B"); // 2
      SprdBnchmkCurve_34_set.insert("B");
      all_values.push_back(SprdBnchmkCurve_34_set);
      all_compo_names.insert("SprdBnchmkCurve_34_set");

      SecL_0.add_element(SprdBnchmkCurve_34);
    }
    {
      xml_element Yield_29{"Yield"};
      multiset<string> Yield_29_set;
      Yield_29.add_attribute("Typ", "AFTERTAX"); // 2
      Yield_29_set.insert("AFTERTAX");
      Yield_29.add_attribute("Yld", "6016436.530000"); // 2
      Yield_29_set.insert("6016436.530000");
      Yield_29.add_attribute("CalcDt", "YieldCalcDate_t_1661797496"); // 2
      Yield_29_set.insert("YieldCalcDate_t_1661797496");
      Yield_29.add_attribute("RedDt", "YieldRedemptionDate_t_1627843561"); // 2
      Yield_29_set.insert("YieldRedemptionDate_t_1627843561");
      Yield_29.add_attribute("RedPx", "16758935.270000"); // 2
      Yield_29_set.insert("16758935.270000");
      Yield_29.add_attribute("RedPxTyp", "17"); // 2
      Yield_29_set.insert("17");
      all_values.push_back(Yield_29_set);
      all_compo_names.insert("Yield_29_set");

      SecL_0.add_element(Yield_29);
    }
    elt.add_element(SecL_0);
  } // end SecL
  { // SecL
    xml_element SecL_2{"SecL"};
    multiset<string> SecL_2_set;
    SecL_2.add_attribute("Ccy", "JPY"); // 1
    SecL_2_set.insert("JPY");
    SecL_2.add_attribute("TxnTm", "RelSymTransactTime_t_74685963"); // 1
    SecL_2_set.insert("RelSymTransactTime_t_74685963");
    SecL_2.add_attribute("Txt", "Text_t_1530872435"); // 1
    SecL_2_set.insert("Text_t_1530872435");
    SecL_2.add_attribute("EncTxtLen", "352427554"); // 1
    SecL_2_set.insert("352427554");
    SecL_2.add_attribute("EncTxt", "EncodedText_t_43448336"); // 1
    SecL_2_set.insert("EncodedText_t_43448336");
    all_values.push_back(SecL_2_set);
    all_compo_names.insert("SecL_2_set");

    {
      xml_element Instrmt_77{"Instrmt"};
      multiset<string> Instrmt_77_set;
      Instrmt_77.add_attribute("Sym", "Symbol_t_2137064046"); // 2
      Instrmt_77_set.insert("Symbol_t_2137064046");
      Instrmt_77.add_attribute("Sfx", "WI"); // 2
      Instrmt_77_set.insert("WI");
      Instrmt_77.add_attribute("ID", "SecurityID_t_632268277"); // 2
      Instrmt_77_set.insert("SecurityID_t_632268277");
      Instrmt_77.add_attribute("Src", "3"); // 2
      Instrmt_77_set.insert("3");
      Instrmt_77.add_attribute("Prod", "11"); // 2
      Instrmt_77_set.insert("11");
      Instrmt_77.add_attribute("ProdCmplx", "ProductComplex_t_1757757389"); // 2
      Instrmt_77_set.insert("ProductComplex_t_1757757389");
      Instrmt_77.add_attribute("SecGrp", "SecurityGroup_t_1066721040"); // 2
      Instrmt_77_set.insert("SecurityGroup_t_1066721040");
      Instrmt_77.add_attribute("CFI", "CFICode_t_100573226"); // 2
      Instrmt_77_set.insert("CFICode_t_100573226");
      Instrmt_77.add_attribute("SecTyp", "TNOTE"); // 2
      Instrmt_77_set.insert("TNOTE");
      Instrmt_77.add_attribute("SubTyp", "SecuritySubType_t_167342743"); // 2
      Instrmt_77_set.insert("SecuritySubType_t_167342743");
      Instrmt_77.add_attribute("MMY", "1175484104"); // 2
      Instrmt_77_set.insert("1175484104");
      Instrmt_77.add_attribute("MatDt", "MaturityDate_t_47879428"); // 2
      Instrmt_77_set.insert("MaturityDate_t_47879428");
      Instrmt_77.add_attribute("MatTm", "89940033"); // 2
      Instrmt_77_set.insert("89940033");
      Instrmt_77.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_405652539"); // 2
      Instrmt_77_set.insert("SettleOnOpenFlag_t_405652539");
      Instrmt_77.add_attribute("AsgnMeth", "1852887626"); // 2
      Instrmt_77_set.insert("1852887626");
      Instrmt_77.add_attribute("Status", "2"); // 2
      Instrmt_77_set.insert("2");
      Instrmt_77.add_attribute("CpnPmt", "CouponPaymentDate_t_775816266"); // 2
      Instrmt_77_set.insert("CouponPaymentDate_t_775816266");
      Instrmt_77.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_77_set.insert("XR");
      Instrmt_77.add_attribute("Snrty", "SR"); // 2
      Instrmt_77_set.insert("SR");
      Instrmt_77.add_attribute("NotlPctOut", "19571335.500000"); // 2
      Instrmt_77_set.insert("19571335.500000");
      Instrmt_77.add_attribute("OrigNotlPctOut", "16989798.000000"); // 2
      Instrmt_77_set.insert("16989798.000000");
      Instrmt_77.add_attribute("AttchPnt", "4414807.510000"); // 2
      Instrmt_77_set.insert("4414807.510000");
      Instrmt_77.add_attribute("DetchPnt", "14374934.630000"); // 2
      Instrmt_77_set.insert("14374934.630000");
      Instrmt_77.add_attribute("Issued", "IssueDate_t_1227389679"); // 2
      Instrmt_77_set.insert("IssueDate_t_1227389679");
      Instrmt_77.add_attribute("RepoCollSecTyp", "1974604666"); // 2
      Instrmt_77_set.insert("1974604666");
      Instrmt_77.add_attribute("RepoTrm", "1334329886"); // 2
      Instrmt_77_set.insert("1334329886");
      Instrmt_77.add_attribute("RepoRt", "19954118.840000"); // 2
      Instrmt_77_set.insert("19954118.840000");
      Instrmt_77.add_attribute("Fctr", "20492906.290000"); // 2
      Instrmt_77_set.insert("20492906.290000");
      Instrmt_77.add_attribute("CrdRtg", "CreditRating_t_717718673"); // 2
      Instrmt_77_set.insert("CreditRating_t_717718673");
      Instrmt_77.add_attribute("Rgstry", "InstrRegistry_t_200355790"); // 2
      Instrmt_77_set.insert("InstrRegistry_t_200355790");
      Instrmt_77.add_attribute("IssuCtry", "2092738965"); // 2
      Instrmt_77_set.insert("2092738965");
      Instrmt_77.add_attribute("StPrv", "StateOrProvinceOfIssue_t_707299072"); // 2
      Instrmt_77_set.insert("StateOrProvinceOfIssue_t_707299072");
      Instrmt_77.add_attribute("Lcl", "LocaleOfIssue_t_1790902561"); // 2
      Instrmt_77_set.insert("LocaleOfIssue_t_1790902561");
      Instrmt_77.add_attribute("Redeem", "RedemptionDate_t_577523594"); // 2
      Instrmt_77_set.insert("RedemptionDate_t_577523594");
      Instrmt_77.add_attribute("StrkPx", "3151931.380000"); // 2
      Instrmt_77_set.insert("3151931.380000");
      Instrmt_77.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_77_set.insert("USD");
      Instrmt_77.add_attribute("StrkMult", "13819141.790000"); // 2
      Instrmt_77_set.insert("13819141.790000");
      Instrmt_77.add_attribute("StrkValu", "6114809.200000"); // 2
      Instrmt_77_set.insert("6114809.200000");
      Instrmt_77.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_77_set.insert("4");
      Instrmt_77.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_77_set.insert("3");
      Instrmt_77.add_attribute("StrkPxBndryPrcsn", "17869650.250000"); // 2
      Instrmt_77_set.insert("17869650.250000");
      Instrmt_77.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_77_set.insert("4");
      Instrmt_77.add_attribute("OptAt", "1639196955"); // 2
      Instrmt_77_set.insert("1639196955");
      Instrmt_77.add_attribute("Mult", "451339.160000"); // 2
      Instrmt_77_set.insert("451339.160000");
      Instrmt_77.add_attribute("MultTyp", "1"); // 2
      Instrmt_77_set.insert("1");
      Instrmt_77.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_77_set.insert("0");
      Instrmt_77.add_attribute("MinPxIncr", "8209501.820000"); // 2
      Instrmt_77_set.insert("8209501.820000");
      Instrmt_77.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_109220077"); // 2
      Instrmt_77_set.insert("MinPriceIncrementAmount_t_109220077");
      Instrmt_77.add_attribute("UOM", "Bu"); // 2
      Instrmt_77_set.insert("Bu");
      Instrmt_77.add_attribute("UOMQty", "6306000.840000"); // 2
      Instrmt_77_set.insert("6306000.840000");
      Instrmt_77.add_attribute("PxUOM", "Gal"); // 2
      Instrmt_77_set.insert("Gal");
      Instrmt_77.add_attribute("PxUOMQty", "3538957.860000"); // 2
      Instrmt_77_set.insert("3538957.860000");
      Instrmt_77.add_attribute("SettlMeth", "C"); // 2
      Instrmt_77_set.insert("C");
      Instrmt_77.add_attribute("ExerStyle", "0"); // 2
      Instrmt_77_set.insert("0");
      Instrmt_77.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_77_set.insert("3");
      Instrmt_77.add_attribute("OptPayAmt", "OptPayoutAmount_t_1254939786"); // 2
      Instrmt_77_set.insert("OptPayoutAmount_t_1254939786");
      Instrmt_77.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_77_set.insert("INX");
      Instrmt_77.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_77_set.insert("FUT");
      Instrmt_77.add_attribute("ListMeth", "0"); // 2
      Instrmt_77_set.insert("0");
      Instrmt_77.add_attribute("CapPx", "9363899.350000"); // 2
      Instrmt_77_set.insert("9363899.350000");
      Instrmt_77.add_attribute("FlrPx", "280791.030000"); // 2
      Instrmt_77_set.insert("280791.030000");
      Instrmt_77.add_attribute("PutCall", "0"); // 2
      Instrmt_77_set.insert("0");
      Instrmt_77.add_attribute("FlexInd", "false"); // 2
      Instrmt_77_set.insert("false");
      Instrmt_77.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_77_set.insert("true");
      Instrmt_77.add_attribute("TmUnit", "Yr"); // 2
      Instrmt_77_set.insert("Yr");
      Instrmt_77.add_attribute("CpnRt", "10907165.430000"); // 2
      Instrmt_77_set.insert("10907165.430000");
      Instrmt_77.add_attribute("Exch", "SecurityExchange_t_793400034"); // 2
      Instrmt_77_set.insert("SecurityExchange_t_793400034");
      Instrmt_77.add_attribute("PosLmt", "82097553"); // 2
      Instrmt_77_set.insert("82097553");
      Instrmt_77.add_attribute("NTPosLmt", "1702197463"); // 2
      Instrmt_77_set.insert("1702197463");
      Instrmt_77.add_attribute("Issr", "Issuer_t_52000557"); // 2
      Instrmt_77_set.insert("Issuer_t_52000557");
      Instrmt_77.add_attribute("EncIssrLen", "1631354475"); // 2
      Instrmt_77_set.insert("1631354475");
      Instrmt_77.add_attribute("EncIssr", "EncodedIssuer_t_1341678840"); // 2
      Instrmt_77_set.insert("EncodedIssuer_t_1341678840");
      Instrmt_77.add_attribute("Desc", "SecurityDesc_t_1505964157"); // 2
      Instrmt_77_set.insert("SecurityDesc_t_1505964157");
      Instrmt_77.add_attribute("EncSecDescLen", "1123067783"); // 2
      Instrmt_77_set.insert("1123067783");
      Instrmt_77.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1386812757"); // 2
      Instrmt_77_set.insert("EncodedSecurityDesc_t_1386812757");
      Instrmt_77.add_attribute("Pool", "Pool_t_517848087"); // 2
      Instrmt_77_set.insert("Pool_t_517848087");
      Instrmt_77.add_attribute("CSetMo", "108315915"); // 2
      Instrmt_77_set.insert("108315915");
      Instrmt_77.add_attribute("CPPgm", "1"); // 2
      Instrmt_77_set.insert("1");
      Instrmt_77.add_attribute("CPRegT", "CPRegType_t_627068164"); // 2
      Instrmt_77_set.insert("CPRegType_t_627068164");
      Instrmt_77.add_attribute("Dated", "DatedDate_t_20730951"); // 2
      Instrmt_77_set.insert("DatedDate_t_20730951");
      Instrmt_77.add_attribute("IntAcrl", "InterestAccrualDate_t_690879376"); // 2
      Instrmt_77_set.insert("InterestAccrualDate_t_690879376");
      all_values.push_back(Instrmt_77_set);
      all_compo_names.insert("Instrmt_77_set");

      {
        xml_element AID_80{"AID"};
        multiset<string> AID_80_set;
        AID_80.add_attribute("AltID", "SecurityAltID_t_287784393"); // 3
        AID_80_set.insert("SecurityAltID_t_287784393");
        AID_80.add_attribute("AltIDSrc", "2"); // 3
        AID_80_set.insert("2");
        all_values.push_back(AID_80_set);
        all_compo_names.insert("AID_80_set");

        Instrmt_77.add_element(AID_80);
      }
      {
        xml_element SecXML_80{"SecXML"};
        multiset<string> SecXML_80_set;
        SecXML_80.add_attribute("Schema", "SecurityXMLSchema_t_611489276"); // 3
        SecXML_80_set.insert("SecurityXMLSchema_t_611489276");
        all_values.push_back(SecXML_80_set);
        all_compo_names.insert("SecXML_80_set");

        Instrmt_77.add_element(SecXML_80);
      }
      {
        xml_element Evnt_80{"Evnt"};
        multiset<string> Evnt_80_set;
        Evnt_80.add_attribute("EventTyp", "3"); // 3
        Evnt_80_set.insert("3");
        Evnt_80.add_attribute("Dt", "EventDate_t_555643542"); // 3
        Evnt_80_set.insert("EventDate_t_555643542");
        Evnt_80.add_attribute("Tm", "EventTime_t_1866429062"); // 3
        Evnt_80_set.insert("EventTime_t_1866429062");
        Evnt_80.add_attribute("Px", "19119244.470000"); // 3
        Evnt_80_set.insert("19119244.470000");
        Evnt_80.add_attribute("Txt", "EventText_t_638467328"); // 3
        Evnt_80_set.insert("EventText_t_638467328");
        all_values.push_back(Evnt_80_set);
        all_compo_names.insert("Evnt_80_set");

        Instrmt_77.add_element(Evnt_80);
      }
      {
        xml_element Pty_405{"Pty"};
        multiset<string> Pty_405_set;
        Pty_405.add_attribute("ID", "InstrumentPartyID_t_1691603874"); // 3
        Pty_405_set.insert("InstrumentPartyID_t_1691603874");
        Pty_405.add_attribute("Src", "G"); // 3
        Pty_405_set.insert("G");
        Pty_405.add_attribute("R", "50"); // 3
        Pty_405_set.insert("50");
        all_values.push_back(Pty_405_set);
        all_compo_names.insert("Pty_405_set");

        {
          xml_element Sub_405{"Sub"};
          multiset<string> Sub_405_set;
          Sub_405.add_attribute("ID", "InstrumentPartySubID_t_76594110"); // 4
          Sub_405_set.insert("InstrumentPartySubID_t_76594110");
          Sub_405.add_attribute("Typ", "13"); // 4
          Sub_405_set.insert("13");
          all_values.push_back(Sub_405_set);
          all_compo_names.insert("Sub_405_set");

          Pty_405.add_element(Sub_405);
        }
        Instrmt_77.add_element(Pty_405);
      }
      {
        xml_element CmplxEvnt_77{"CmplxEvnt"};
        multiset<string> CmplxEvnt_77_set;
        CmplxEvnt_77.add_attribute("Typ", "3"); // 3
        CmplxEvnt_77_set.insert("3");
        CmplxEvnt_77.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_924261133"); // 3
        CmplxEvnt_77_set.insert("ComplexOptPayoutAmount_t_924261133");
        CmplxEvnt_77.add_attribute("Px", "2238724.790000"); // 3
        CmplxEvnt_77_set.insert("2238724.790000");
        CmplxEvnt_77.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_77_set.insert("4");
        CmplxEvnt_77.add_attribute("PxBndryPrcsn", "10063586.860000"); // 3
        CmplxEvnt_77_set.insert("10063586.860000");
        CmplxEvnt_77.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_77_set.insert("1");
        CmplxEvnt_77.add_attribute("Cond", "2"); // 3
        CmplxEvnt_77_set.insert("2");
        all_values.push_back(CmplxEvnt_77_set);
        all_compo_names.insert("CmplxEvnt_77_set");

        {
          xml_element EvntDts_77{"EvntDts"};
          multiset<string> EvntDts_77_set;
          EvntDts_77.add_attribute("StartDt", "ComplexEventStartDate_t_490229514"); // 4
          EvntDts_77_set.insert("ComplexEventStartDate_t_490229514");
          EvntDts_77.add_attribute("EndDt", "ComplexEventEndDate_t_1120265135"); // 4
          EvntDts_77_set.insert("ComplexEventEndDate_t_1120265135");
          all_values.push_back(EvntDts_77_set);
          all_compo_names.insert("EvntDts_77_set");

          {
            xml_element EvntTms_77{"EvntTms"};
            multiset<string> EvntTms_77_set;
            EvntTms_77.add_attribute("StartTm", "1476030230"); // 5
            EvntTms_77_set.insert("1476030230");
            EvntTms_77.add_attribute("EndTm", "1613297297"); // 5
            EvntTms_77_set.insert("1613297297");
            all_values.push_back(EvntTms_77_set);
            all_compo_names.insert("EvntTms_77_set");

            EvntDts_77.add_element(EvntTms_77);
          }
          CmplxEvnt_77.add_element(EvntDts_77);
        }
        Instrmt_77.add_element(CmplxEvnt_77);
      }
      SecL_2.add_element(Instrmt_77);
    }
    {
      xml_element InstrmtExt_12{"InstrmtExt"};
      multiset<string> InstrmtExt_12_set;
      InstrmtExt_12.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_12_set.insert("1");
      InstrmtExt_12.add_attribute("PctAtRisk", "19938783.170000"); // 2
      InstrmtExt_12_set.insert("19938783.170000");
      all_values.push_back(InstrmtExt_12_set);
      all_compo_names.insert("InstrmtExt_12_set");

      {
        xml_element Attrb_21{"Attrb"};
        multiset<string> Attrb_21_set;
        Attrb_21.add_attribute("Typ", "11"); // 3
        Attrb_21_set.insert("11");
        Attrb_21.add_attribute("Val", "InstrAttribValue_t_419873535"); // 3
        Attrb_21_set.insert("InstrAttribValue_t_419873535");
        all_values.push_back(Attrb_21_set);
        all_compo_names.insert("Attrb_21_set");

        InstrmtExt_12.add_element(Attrb_21);
      }
      SecL_2.add_element(InstrmtExt_12);
    }
    {
      xml_element FinDetls_27{"FinDetls"};
      multiset<string> FinDetls_27_set;
      FinDetls_27.add_attribute("AgmtDesc", "AgreementDesc_t_473462833"); // 2
      FinDetls_27_set.insert("AgreementDesc_t_473462833");
      FinDetls_27.add_attribute("AgmtID", "AgreementID_t_1742344163"); // 2
      FinDetls_27_set.insert("AgreementID_t_1742344163");
      FinDetls_27.add_attribute("AgmtDt", "AgreementDate_t_1110752911"); // 2
      FinDetls_27_set.insert("AgreementDate_t_1110752911");
      FinDetls_27.add_attribute("AgmtCcy", "CHF"); // 2
      FinDetls_27_set.insert("CHF");
      FinDetls_27.add_attribute("TrmTyp", "4"); // 2
      FinDetls_27_set.insert("4");
      FinDetls_27.add_attribute("StartDt", "StartDate_t_1937137529"); // 2
      FinDetls_27_set.insert("StartDate_t_1937137529");
      FinDetls_27.add_attribute("EndDt", "EndDate_t_525130795"); // 2
      FinDetls_27_set.insert("EndDate_t_525130795");
      FinDetls_27.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_27_set.insert("2");
      FinDetls_27.add_attribute("MgnRatio", "17015783.280000"); // 2
      FinDetls_27_set.insert("17015783.280000");
      all_values.push_back(FinDetls_27_set);
      all_compo_names.insert("FinDetls_27_set");

      SecL_2.add_element(FinDetls_27);
    }
    {
      xml_element SecTrdgRules_7{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_9{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_9_set;
        BaseTrdgRules_9.add_attribute("ExpirationCycle", "0"); // 3
        BaseTrdgRules_9_set.insert("0");
        BaseTrdgRules_9.add_attribute("MinTrdVol", "9853078.280000"); // 3
        BaseTrdgRules_9_set.insert("9853078.280000");
        BaseTrdgRules_9.add_attribute("MaxTrdVol", "2549254.150000"); // 3
        BaseTrdgRules_9_set.insert("2549254.150000");
        BaseTrdgRules_9.add_attribute("MxPxVar", "18301445.540000"); // 3
        BaseTrdgRules_9_set.insert("18301445.540000");
        BaseTrdgRules_9.add_attribute("ImpldMktInd", "3"); // 3
        BaseTrdgRules_9_set.insert("3");
        BaseTrdgRules_9.add_attribute("TrdCcy", "USD"); // 3
        BaseTrdgRules_9_set.insert("USD");
        BaseTrdgRules_9.add_attribute("RndLot", "19861630.720000"); // 3
        BaseTrdgRules_9_set.insert("19861630.720000");
        BaseTrdgRules_9.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_9_set.insert("1");
        BaseTrdgRules_9.add_attribute("MlegPxMeth", "3"); // 3
        BaseTrdgRules_9_set.insert("3");
        BaseTrdgRules_9.add_attribute("PxTyp", "14"); // 3
        BaseTrdgRules_9_set.insert("14");
        all_values.push_back(BaseTrdgRules_9_set);
        all_compo_names.insert("BaseTrdgRules_9_set");

        {
          xml_element TickRules_9{"TickRules"};
          multiset<string> TickRules_9_set;
          TickRules_9.add_attribute("StartTickPxRng", "15380237.730000"); // 4
          TickRules_9_set.insert("15380237.730000");
          TickRules_9.add_attribute("EndTickPxRng", "8429416.240000"); // 4
          TickRules_9_set.insert("8429416.240000");
          TickRules_9.add_attribute("TickIncr", "13352676.240000"); // 4
          TickRules_9_set.insert("13352676.240000");
          TickRules_9.add_attribute("TickRuleTyp", "0"); // 4
          TickRules_9_set.insert("0");
          all_values.push_back(TickRules_9_set);
          all_compo_names.insert("TickRules_9_set");

          BaseTrdgRules_9.add_element(TickRules_9);
        }
        {
          xml_element LotTypeRules_9{"LotTypeRules"};
          multiset<string> LotTypeRules_9_set;
          LotTypeRules_9.add_attribute("LotTyp", "3"); // 4
          LotTypeRules_9_set.insert("3");
          LotTypeRules_9.add_attribute("MinLotSz", "8010812.730000"); // 4
          LotTypeRules_9_set.insert("8010812.730000");
          all_values.push_back(LotTypeRules_9_set);
          all_compo_names.insert("LotTypeRules_9_set");

          BaseTrdgRules_9.add_element(LotTypeRules_9);
        }
        {
          xml_element PxLmts_9{"PxLmts"};
          multiset<string> PxLmts_9_set;
          PxLmts_9.add_attribute("PxLmtTyp", "0"); // 4
          PxLmts_9_set.insert("0");
          PxLmts_9.add_attribute("LowLmtPx", "178828.750000"); // 4
          PxLmts_9_set.insert("178828.750000");
          PxLmts_9.add_attribute("HiLmtPx", "3752108.380000"); // 4
          PxLmts_9_set.insert("3752108.380000");
          PxLmts_9.add_attribute("TrdgRefPx", "12902730.390000"); // 4
          PxLmts_9_set.insert("12902730.390000");
          all_values.push_back(PxLmts_9_set);
          all_compo_names.insert("PxLmts_9_set");

          BaseTrdgRules_9.add_element(PxLmts_9);
        }
        SecTrdgRules_7.add_element(BaseTrdgRules_9);
      }
      {
        xml_element TrdgSesRulesGrp_7{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_7_set;
        TrdgSesRulesGrp_7.add_attribute("SesID", "3"); // 3
        TrdgSesRulesGrp_7_set.insert("3");
        TrdgSesRulesGrp_7.add_attribute("SesSub", "3"); // 3
        TrdgSesRulesGrp_7_set.insert("3");
        all_values.push_back(TrdgSesRulesGrp_7_set);
        all_compo_names.insert("TrdgSesRulesGrp_7_set");

        {
          xml_element TrdgSesRules_7{"TrdgSesRules"};
          {
            xml_element OrdTypRules_12{"OrdTypRules"};
            multiset<string> OrdTypRules_12_set;
            OrdTypRules_12.add_attribute("OrdTyp", "G"); // 5
            OrdTypRules_12_set.insert("G");
            all_values.push_back(OrdTypRules_12_set);
            all_compo_names.insert("OrdTypRules_12_set");

            TrdgSesRules_7.add_element(OrdTypRules_12);
          }
          {
            xml_element TmInForceRules_11{"TmInForceRules"};
            multiset<string> TmInForceRules_11_set;
            TmInForceRules_11.add_attribute("TmInForce", "5"); // 5
            TmInForceRules_11_set.insert("5");
            all_values.push_back(TmInForceRules_11_set);
            all_compo_names.insert("TmInForceRules_11_set");

            TrdgSesRules_7.add_element(TmInForceRules_11);
          }
          {
            xml_element ExecInstRules_10{"ExecInstRules"};
            multiset<string> ExecInstRules_10_set;
            ExecInstRules_10.add_attribute("ExecInstValu", "Y"); // 5
            ExecInstRules_10_set.insert("Y");
            all_values.push_back(ExecInstRules_10_set);
            all_compo_names.insert("ExecInstRules_10_set");

            TrdgSesRules_7.add_element(ExecInstRules_10);
          }
          {
            xml_element MtchRules_7{"MtchRules"};
            multiset<string> MtchRules_7_set;
            MtchRules_7.add_attribute("MtchAlgo", "MatchAlgorithm_t_1975784490"); // 5
            MtchRules_7_set.insert("MatchAlgorithm_t_1975784490");
            MtchRules_7.add_attribute("MtchTyp", "A1"); // 5
            MtchRules_7_set.insert("A1");
            all_values.push_back(MtchRules_7_set);
            all_compo_names.insert("MtchRules_7_set");

            TrdgSesRules_7.add_element(MtchRules_7);
          }
          {
            xml_element MDFeedTyps_7{"MDFeedTyps"};
            multiset<string> MDFeedTyps_7_set;
            MDFeedTyps_7.add_attribute("MDFeedTyp", "MDFeedType_t_464689401"); // 5
            MDFeedTyps_7_set.insert("MDFeedType_t_464689401");
            MDFeedTyps_7.add_attribute("MktDepth", "1269488444"); // 5
            MDFeedTyps_7_set.insert("1269488444");
            MDFeedTyps_7.add_attribute("MDBkTyp", "3"); // 5
            MDFeedTyps_7_set.insert("3");
            all_values.push_back(MDFeedTyps_7_set);
            all_compo_names.insert("MDFeedTyps_7_set");

            TrdgSesRules_7.add_element(MDFeedTyps_7);
          }
          TrdgSesRulesGrp_7.add_element(TrdgSesRules_7);
        }
        SecTrdgRules_7.add_element(TrdgSesRulesGrp_7);
      }
      {
        xml_element Attrb_22{"Attrb"};
        multiset<string> Attrb_22_set;
        Attrb_22.add_attribute("Typ", "24"); // 3
        Attrb_22_set.insert("24");
        Attrb_22.add_attribute("Val", "NestedInstrAttribValue_t_107312625"); // 3
        Attrb_22_set.insert("NestedInstrAttribValue_t_107312625");
        all_values.push_back(Attrb_22_set);
        all_compo_names.insert("Attrb_22_set");

        SecTrdgRules_7.add_element(Attrb_22);
      }
      SecL_2.add_element(SecTrdgRules_7);
    }
    {
      xml_element StrkRules_7{"StrkRules"};
      multiset<string> StrkRules_7_set;
      StrkRules_7.add_attribute("StrkRule", "StrikeRuleID_t_851266912"); // 2
      StrkRules_7_set.insert("StrikeRuleID_t_851266912");
      StrkRules_7.add_attribute("StartStrkPxRng", "13109484.310000"); // 2
      StrkRules_7_set.insert("13109484.310000");
      StrkRules_7.add_attribute("EndStrkPxRng", "11692145.640000"); // 2
      StrkRules_7_set.insert("11692145.640000");
      StrkRules_7.add_attribute("StrkIncr", "2393482.630000"); // 2
      StrkRules_7_set.insert("2393482.630000");
      StrkRules_7.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_7_set.insert("2");
      all_values.push_back(StrkRules_7_set);
      all_compo_names.insert("StrkRules_7_set");

      {
        xml_element MatRules_7{"MatRules"};
        multiset<string> MatRules_7_set;
        MatRules_7.add_attribute("MatRuleID", "MaturityRuleID_t_1007893988"); // 3
        MatRules_7_set.insert("MaturityRuleID_t_1007893988");
        MatRules_7.add_attribute("MMYFmt", "0"); // 3
        MatRules_7_set.insert("0");
        MatRules_7.add_attribute("MMYIncrUnits", "2"); // 3
        MatRules_7_set.insert("2");
        MatRules_7.add_attribute("StartMMY", "1852932098"); // 3
        MatRules_7_set.insert("1852932098");
        MatRules_7.add_attribute("EndMMY", "1389325867"); // 3
        MatRules_7_set.insert("1389325867");
        MatRules_7.add_attribute("MMYIncr", "1834091995"); // 3
        MatRules_7_set.insert("1834091995");
        all_values.push_back(MatRules_7_set);
        all_compo_names.insert("MatRules_7_set");

        StrkRules_7.add_element(MatRules_7);
      }
      SecL_2.add_element(StrkRules_7);
    }
    {
      xml_element Undly_111{"Undly"};
      multiset<string> Undly_111_set;
      Undly_111.add_attribute("Sym", "UnderlyingSymbol_t_1040716075"); // 2
      Undly_111_set.insert("UnderlyingSymbol_t_1040716075");
      Undly_111.add_attribute("Sfx", "WI"); // 2
      Undly_111_set.insert("WI");
      Undly_111.add_attribute("ID", "UnderlyingSecurityID_t_2005580201"); // 2
      Undly_111_set.insert("UnderlyingSecurityID_t_2005580201");
      Undly_111.add_attribute("Src", "7"); // 2
      Undly_111_set.insert("7");
      Undly_111.add_attribute("Prod", "1"); // 2
      Undly_111_set.insert("1");
      Undly_111.add_attribute("CFI", "UnderlyingCFICode_t_2023463077"); // 2
      Undly_111_set.insert("UnderlyingCFICode_t_2023463077");
      Undly_111.add_attribute("SecTyp", "ABS"); // 2
      Undly_111_set.insert("ABS");
      Undly_111.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1913320022"); // 2
      Undly_111_set.insert("UnderlyingSecuritySubType_t_1913320022");
      Undly_111.add_attribute("MMY", "367325137"); // 2
      Undly_111_set.insert("367325137");
      Undly_111.add_attribute("Mat", "UnderlyingMaturityDate_t_39595892"); // 2
      Undly_111_set.insert("UnderlyingMaturityDate_t_39595892");
      Undly_111.add_attribute("MatTm", "19378677"); // 2
      Undly_111_set.insert("19378677");
      Undly_111.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1619918072"); // 2
      Undly_111_set.insert("UnderlyingCouponPaymentDate_t_1619918072");
      Undly_111.add_attribute("RestrctTyp", "MM"); // 2
      Undly_111_set.insert("MM");
      Undly_111.add_attribute("Snrty", "SR"); // 2
      Undly_111_set.insert("SR");
      Undly_111.add_attribute("NotlPctOut", "5146812.400000"); // 2
      Undly_111_set.insert("5146812.400000");
      Undly_111.add_attribute("OrigNotlPctOut", "4438439.000000"); // 2
      Undly_111_set.insert("4438439.000000");
      Undly_111.add_attribute("AttchPnt", "11171679.640000"); // 2
      Undly_111_set.insert("11171679.640000");
      Undly_111.add_attribute("DetchPnt", "11110227.370000"); // 2
      Undly_111_set.insert("11110227.370000");
      Undly_111.add_attribute("Issued", "UnderlyingIssueDate_t_2072131424"); // 2
      Undly_111_set.insert("UnderlyingIssueDate_t_2072131424");
      Undly_111.add_attribute("RepoCollSecTyp", "1224480589"); // 2
      Undly_111_set.insert("1224480589");
      Undly_111.add_attribute("RepoTrm", "1962289649"); // 2
      Undly_111_set.insert("1962289649");
      Undly_111.add_attribute("RepoRt", "12355962.070000"); // 2
      Undly_111_set.insert("12355962.070000");
      Undly_111.add_attribute("Fctr", "2462115.050000"); // 2
      Undly_111_set.insert("2462115.050000");
      Undly_111.add_attribute("CrdRtg", "UnderlyingCreditRating_t_54154264"); // 2
      Undly_111_set.insert("UnderlyingCreditRating_t_54154264");
      Undly_111.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1353871026"); // 2
      Undly_111_set.insert("UnderlyingInstrRegistry_t_1353871026");
      Undly_111.add_attribute("Ctry", "1254105493"); // 2
      Undly_111_set.insert("1254105493");
      Undly_111.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2052940006"); // 2
      Undly_111_set.insert("UnderlyingStateOrProvinceOfIssue_t_2052940006");
      Undly_111.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_197537749"); // 2
      Undly_111_set.insert("UnderlyingLocaleOfIssue_t_197537749");
      Undly_111.add_attribute("Redeem", "UnderlyingRedemptionDate_t_959553944"); // 2
      Undly_111_set.insert("UnderlyingRedemptionDate_t_959553944");
      Undly_111.add_attribute("StrkPx", "12947822.250000"); // 2
      Undly_111_set.insert("12947822.250000");
      Undly_111.add_attribute("StrkCcy", "CHF"); // 2
      Undly_111_set.insert("CHF");
      Undly_111.add_attribute("OptA", "1047429704"); // 2
      Undly_111_set.insert("1047429704");
      Undly_111.add_attribute("Mult", "18897262.970000"); // 2
      Undly_111_set.insert("18897262.970000");
      Undly_111.add_attribute("MultTyp", "2"); // 2
      Undly_111_set.insert("2");
      Undly_111.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_111_set.insert("2");
      Undly_111.add_attribute("UOM", "tn"); // 2
      Undly_111_set.insert("tn");
      Undly_111.add_attribute("UOMQty", "17641082.580000"); // 2
      Undly_111_set.insert("17641082.580000");
      Undly_111.add_attribute("PxUOM", "Bbl"); // 2
      Undly_111_set.insert("Bbl");
      Undly_111.add_attribute("PxUOMQty", "21330308.640000"); // 2
      Undly_111_set.insert("21330308.640000");
      Undly_111.add_attribute("TmUnit", "D"); // 2
      Undly_111_set.insert("D");
      Undly_111.add_attribute("ExerStyle", "2"); // 2
      Undly_111_set.insert("2");
      Undly_111.add_attribute("CpnRt", "16054652.880000"); // 2
      Undly_111_set.insert("16054652.880000");
      Undly_111.add_attribute("Exch", "UnderlyingSecurityExchange_t_1782858648"); // 2
      Undly_111_set.insert("UnderlyingSecurityExchange_t_1782858648");
      Undly_111.add_attribute("Issr", "UnderlyingIssuer_t_1303371259"); // 2
      Undly_111_set.insert("UnderlyingIssuer_t_1303371259");
      Undly_111.add_attribute("EncUndIssrLen", "2120146529"); // 2
      Undly_111_set.insert("2120146529");
      Undly_111.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_79218900"); // 2
      Undly_111_set.insert("EncodedUnderlyingIssuer_t_79218900");
      Undly_111.add_attribute("Desc", "UnderlyingSecurityDesc_t_273055576"); // 2
      Undly_111_set.insert("UnderlyingSecurityDesc_t_273055576");
      Undly_111.add_attribute("EncUndSecDescLen", "1083685618"); // 2
      Undly_111_set.insert("1083685618");
      Undly_111.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_3866677"); // 2
      Undly_111_set.insert("EncodedUnderlyingSecurityDesc_t_3866677");
      Undly_111.add_attribute("CPPgm", "UnderlyingCPProgram_t_1497536165"); // 2
      Undly_111_set.insert("UnderlyingCPProgram_t_1497536165");
      Undly_111.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_898491619"); // 2
      Undly_111_set.insert("UnderlyingCPRegType_t_898491619");
      Undly_111.add_attribute("AllocPct", "12394628.840000"); // 2
      Undly_111_set.insert("12394628.840000");
      Undly_111.add_attribute("Ccy", "CAN"); // 2
      Undly_111_set.insert("CAN");
      Undly_111.add_attribute("Qty", "4458502.630000"); // 2
      Undly_111_set.insert("4458502.630000");
      Undly_111.add_attribute("SettlTyp", "4"); // 2
      Undly_111_set.insert("4");
      Undly_111.add_attribute("CashAmt", "UnderlyingCashAmount_t_858102242"); // 2
      Undly_111_set.insert("UnderlyingCashAmount_t_858102242");
      Undly_111.add_attribute("CashTyp", "FIXED"); // 2
      Undly_111_set.insert("FIXED");
      Undly_111.add_attribute("Px", "18099234.600000"); // 2
      Undly_111_set.insert("18099234.600000");
      Undly_111.add_attribute("DirtPx", "54008.190000"); // 2
      Undly_111_set.insert("54008.190000");
      Undly_111.add_attribute("EndPx", "5275341.080000"); // 2
      Undly_111_set.insert("5275341.080000");
      Undly_111.add_attribute("StartVal", "UnderlyingStartValue_t_1662709831"); // 2
      Undly_111_set.insert("UnderlyingStartValue_t_1662709831");
      Undly_111.add_attribute("CurVal", "UnderlyingCurrentValue_t_1052830524"); // 2
      Undly_111_set.insert("UnderlyingCurrentValue_t_1052830524");
      Undly_111.add_attribute("EndVal", "UnderlyingEndValue_t_269776757"); // 2
      Undly_111_set.insert("UnderlyingEndValue_t_269776757");
      Undly_111.add_attribute("AdjQty", "12098099.030000"); // 2
      Undly_111_set.insert("12098099.030000");
      Undly_111.add_attribute("FxRate", "5758235.630000"); // 2
      Undly_111_set.insert("5758235.630000");
      Undly_111.add_attribute("FxRateCalc", "M"); // 2
      Undly_111_set.insert("M");
      Undly_111.add_attribute("CapValu", "UnderlyingCapValue_t_826434513"); // 2
      Undly_111_set.insert("UnderlyingCapValue_t_826434513");
      Undly_111.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2012136625"); // 2
      Undly_111_set.insert("UnderlyingSettlMethod_t_2012136625");
      Undly_111.add_attribute("PutCall", "2021029700"); // 2
      Undly_111_set.insert("2021029700");
      all_values.push_back(Undly_111_set);
      all_compo_names.insert("Undly_111_set");

      {
        xml_element UndAID_111{"UndAID"};
        multiset<string> UndAID_111_set;
        UndAID_111.add_attribute("AltID", "UnderlyingSecurityAltID_t_482655015"); // 3
        UndAID_111_set.insert("UnderlyingSecurityAltID_t_482655015");
        UndAID_111.add_attribute("AltIDSrc", "M"); // 3
        UndAID_111_set.insert("M");
        all_values.push_back(UndAID_111_set);
        all_compo_names.insert("UndAID_111_set");

        Undly_111.add_element(UndAID_111);
      }
      {
        xml_element Stip_178{"Stip"};
        multiset<string> Stip_178_set;
        Stip_178.add_attribute("Typ", "AVFICO"); // 3
        Stip_178_set.insert("AVFICO");
        Stip_178.add_attribute("Val", "UnderlyingStipValue_t_118030015"); // 3
        Stip_178_set.insert("UnderlyingStipValue_t_118030015");
        all_values.push_back(Stip_178_set);
        all_compo_names.insert("Stip_178_set");

        Undly_111.add_element(Stip_178);
      }
      {
        xml_element Pty_406{"Pty"};
        multiset<string> Pty_406_set;
        Pty_406.add_attribute("ID", "UnderlyingInstrumentPartyID_t_476232328"); // 3
        Pty_406_set.insert("UnderlyingInstrumentPartyID_t_476232328");
        Pty_406.add_attribute("Src", "G"); // 3
        Pty_406_set.insert("G");
        Pty_406.add_attribute("R", "5"); // 3
        Pty_406_set.insert("5");
        all_values.push_back(Pty_406_set);
        all_compo_names.insert("Pty_406_set");

        {
          xml_element Sub_406{"Sub"};
          multiset<string> Sub_406_set;
          Sub_406.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_749287904"); // 4
          Sub_406_set.insert("UnderlyingInstrumentPartySubID_t_749287904");
          Sub_406.add_attribute("Typ", "33"); // 4
          Sub_406_set.insert("33");
          all_values.push_back(Sub_406_set);
          all_compo_names.insert("Sub_406_set");

          Pty_406.add_element(Sub_406);
        }
        Undly_111.add_element(Pty_406);
      }
      SecL_2.add_element(Undly_111);
    }
    {
      xml_element Stip_179{"Stip"};
      multiset<string> Stip_179_set;
      Stip_179.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_179_set.insert("MAXORDQTY");
      Stip_179.add_attribute("Val", "StipulationValue_t_99340422"); // 2
      Stip_179_set.insert("StipulationValue_t_99340422");
      all_values.push_back(Stip_179_set);
      all_compo_names.insert("Stip_179_set");

      SecL_2.add_element(Stip_179);
    }
    {
      xml_element SecL_3{"SecL"};
      multiset<string> SecL_3_set;
      SecL_3.add_attribute("SwapTyp", "4"); // 2
      SecL_3_set.insert("4");
      SecL_3.add_attribute("SettlTyp", "5"); // 2
      SecL_3_set.insert("5");
      all_values.push_back(SecL_3_set);
      all_compo_names.insert("SecL_3_set");

      {
        xml_element Leg_94{"Leg"};
        multiset<string> Leg_94_set;
        Leg_94.add_attribute("Sym", "LegSymbol_t_1843088093"); // 3
        Leg_94_set.insert("LegSymbol_t_1843088093");
        Leg_94.add_attribute("Sfx", "CD"); // 3
        Leg_94_set.insert("CD");
        Leg_94.add_attribute("ID", "LegSecurityID_t_1886428740"); // 3
        Leg_94_set.insert("LegSecurityID_t_1886428740");
        Leg_94.add_attribute("Src", "6"); // 3
        Leg_94_set.insert("6");
        Leg_94.add_attribute("Prod", "4"); // 3
        Leg_94_set.insert("4");
        Leg_94.add_attribute("CFI", "LegCFICode_t_382333104"); // 3
        Leg_94_set.insert("LegCFICode_t_382333104");
        Leg_94.add_attribute("SecTyp", "OPT"); // 3
        Leg_94_set.insert("OPT");
        Leg_94.add_attribute("SecSubTyp", "LegSecuritySubType_t_955033107"); // 3
        Leg_94_set.insert("LegSecuritySubType_t_955033107");
        Leg_94.add_attribute("MMY", "909867212"); // 3
        Leg_94_set.insert("909867212");
        Leg_94.add_attribute("Mat", "LegMaturityDate_t_1871123605"); // 3
        Leg_94_set.insert("LegMaturityDate_t_1871123605");
        Leg_94.add_attribute("MatTm", "2007863631"); // 3
        Leg_94_set.insert("2007863631");
        Leg_94.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1179643970"); // 3
        Leg_94_set.insert("LegCouponPaymentDate_t_1179643970");
        Leg_94.add_attribute("Issued", "LegIssueDate_t_933449860"); // 3
        Leg_94_set.insert("LegIssueDate_t_933449860");
        Leg_94.add_attribute("RepoCollSecTyp", "436203547"); // 3
        Leg_94_set.insert("436203547");
        Leg_94.add_attribute("RepoTrm", "1067642806"); // 3
        Leg_94_set.insert("1067642806");
        Leg_94.add_attribute("RepoRt", "17598843.730000"); // 3
        Leg_94_set.insert("17598843.730000");
        Leg_94.add_attribute("Fctr", "3008565.240000"); // 3
        Leg_94_set.insert("3008565.240000");
        Leg_94.add_attribute("CrdRtg", "LegCreditRating_t_941188858"); // 3
        Leg_94_set.insert("LegCreditRating_t_941188858");
        Leg_94.add_attribute("Rgstry", "LegInstrRegistry_t_95055740"); // 3
        Leg_94_set.insert("LegInstrRegistry_t_95055740");
        Leg_94.add_attribute("Ctry", "1621201241"); // 3
        Leg_94_set.insert("1621201241");
        Leg_94.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_272716550"); // 3
        Leg_94_set.insert("LegStateOrProvinceOfIssue_t_272716550");
        Leg_94.add_attribute("Lcl", "LegLocaleOfIssue_t_213085756"); // 3
        Leg_94_set.insert("LegLocaleOfIssue_t_213085756");
        Leg_94.add_attribute("Redeem", "LegRedemptionDate_t_2097433570"); // 3
        Leg_94_set.insert("LegRedemptionDate_t_2097433570");
        Leg_94.add_attribute("Strk", "17243907.720000"); // 3
        Leg_94_set.insert("17243907.720000");
        Leg_94.add_attribute("StrkCcy", "JPY"); // 3
        Leg_94_set.insert("JPY");
        Leg_94.add_attribute("OptA", "2112266963"); // 3
        Leg_94_set.insert("2112266963");
        Leg_94.add_attribute("Cmult", "6114502.650000"); // 3
        Leg_94_set.insert("6114502.650000");
        Leg_94.add_attribute("MultTyp", "1"); // 3
        Leg_94_set.insert("1");
        Leg_94.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_94_set.insert("1");
        Leg_94.add_attribute("UOM", "Bcf"); // 3
        Leg_94_set.insert("Bcf");
        Leg_94.add_attribute("UOMQty", "4941826.930000"); // 3
        Leg_94_set.insert("4941826.930000");
        Leg_94.add_attribute("PxUOM", "MMBtu"); // 3
        Leg_94_set.insert("MMBtu");
        Leg_94.add_attribute("PxUOMQty", "17909738.350000"); // 3
        Leg_94_set.insert("17909738.350000");
        Leg_94.add_attribute("TmUnit", "Yr"); // 3
        Leg_94_set.insert("Yr");
        Leg_94.add_attribute("ExerStyle", "0"); // 3
        Leg_94_set.insert("0");
        Leg_94.add_attribute("CpnRt", "258232.910000"); // 3
        Leg_94_set.insert("258232.910000");
        Leg_94.add_attribute("Exch", "LegSecurityExchange_t_1248570429"); // 3
        Leg_94_set.insert("LegSecurityExchange_t_1248570429");
        Leg_94.add_attribute("Issr", "LegIssuer_t_1099862919"); // 3
        Leg_94_set.insert("LegIssuer_t_1099862919");
        Leg_94.add_attribute("EncLegIssrLen", "935690504"); // 3
        Leg_94_set.insert("935690504");
        Leg_94.add_attribute("EncLegIssr", "EncodedLegIssuer_t_972210386"); // 3
        Leg_94_set.insert("EncodedLegIssuer_t_972210386");
        Leg_94.add_attribute("Desc", "LegSecurityDesc_t_960242903"); // 3
        Leg_94_set.insert("LegSecurityDesc_t_960242903");
        Leg_94.add_attribute("EncLegSecDescLen", "2115334474"); // 3
        Leg_94_set.insert("2115334474");
        Leg_94.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1905660247"); // 3
        Leg_94_set.insert("EncodedLegSecurityDesc_t_1905660247");
        Leg_94.add_attribute("RatioQty", "13964464.500000"); // 3
        Leg_94_set.insert("13964464.500000");
        Leg_94.add_attribute("Side", "1"); // 3
        Leg_94_set.insert("1");
        Leg_94.add_attribute("Ccy", "USD"); // 3
        Leg_94_set.insert("USD");
        Leg_94.add_attribute("Pool", "LegPool_t_1976682490"); // 3
        Leg_94_set.insert("LegPool_t_1976682490");
        Leg_94.add_attribute("Dated", "LegDatedDate_t_1613116713"); // 3
        Leg_94_set.insert("LegDatedDate_t_1613116713");
        Leg_94.add_attribute("CSetMo", "1171020568"); // 3
        Leg_94_set.insert("1171020568");
        Leg_94.add_attribute("IntAcrl", "LegInterestAccrualDate_t_101915392"); // 3
        Leg_94_set.insert("LegInterestAccrualDate_t_101915392");
        Leg_94.add_attribute("PutCall", "1826202469"); // 3
        Leg_94_set.insert("1826202469");
        Leg_94.add_attribute("LegOptionRatio", "11209704.900000"); // 3
        Leg_94_set.insert("11209704.900000");
        Leg_94.add_attribute("Px", "18263061.640000"); // 3
        Leg_94_set.insert("18263061.640000");
        all_values.push_back(Leg_94_set);
        all_compo_names.insert("Leg_94_set");

        {
          xml_element LegAID_89{"LegAID"};
          multiset<string> LegAID_89_set;
          LegAID_89.add_attribute("SecAltID", "LegSecurityAltID_t_89053493"); // 4
          LegAID_89_set.insert("LegSecurityAltID_t_89053493");
          LegAID_89.add_attribute("SecAltIDSrc", "F"); // 4
          LegAID_89_set.insert("F");
          all_values.push_back(LegAID_89_set);
          all_compo_names.insert("LegAID_89_set");

          Leg_94.add_element(LegAID_89);
        }
        SecL_3.add_element(Leg_94);
      }
      {
        xml_element Stip_180{"Stip"};
        multiset<string> Stip_180_set;
        Stip_180.add_attribute("StipTyp", "PSA"); // 3
        Stip_180_set.insert("PSA");
        Stip_180.add_attribute("StipVal", "LegStipulationValue_t_700503758"); // 3
        Stip_180_set.insert("LegStipulationValue_t_700503758");
        all_values.push_back(Stip_180_set);
        all_compo_names.insert("Stip_180_set");

        SecL_3.add_element(Stip_180);
      }
      {
        xml_element BnchmkCurve_11{"BnchmkCurve"};
        multiset<string> BnchmkCurve_11_set;
        BnchmkCurve_11.add_attribute("Ccy", "JPY"); // 3
        BnchmkCurve_11_set.insert("JPY");
        BnchmkCurve_11.add_attribute("Name", "Pfandbriefe"); // 3
        BnchmkCurve_11_set.insert("Pfandbriefe");
        BnchmkCurve_11.add_attribute("Point", "LegBenchmarkCurvePoint_t_965485610"); // 3
        BnchmkCurve_11_set.insert("LegBenchmarkCurvePoint_t_965485610");
        BnchmkCurve_11.add_attribute("Px", "899544.820000"); // 3
        BnchmkCurve_11_set.insert("899544.820000");
        BnchmkCurve_11.add_attribute("PxTyp", "248539039"); // 3
        BnchmkCurve_11_set.insert("248539039");
        all_values.push_back(BnchmkCurve_11_set);
        all_compo_names.insert("BnchmkCurve_11_set");

        SecL_3.add_element(BnchmkCurve_11);
      }
      SecL_2.add_element(SecL_3);
    }
    {
      xml_element SprdBnchmkCurve_35{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_35_set;
      SprdBnchmkCurve_35.add_attribute("Spread", "20056422.650000"); // 2
      SprdBnchmkCurve_35_set.insert("20056422.650000");
      SprdBnchmkCurve_35.add_attribute("Ccy", "EUR"); // 2
      SprdBnchmkCurve_35_set.insert("EUR");
      SprdBnchmkCurve_35.add_attribute("Name", "MuniAAA"); // 2
      SprdBnchmkCurve_35_set.insert("MuniAAA");
      SprdBnchmkCurve_35.add_attribute("Point", "BenchmarkCurvePoint_t_1334647213"); // 2
      SprdBnchmkCurve_35_set.insert("BenchmarkCurvePoint_t_1334647213");
      SprdBnchmkCurve_35.add_attribute("Px", "12100528.350000"); // 2
      SprdBnchmkCurve_35_set.insert("12100528.350000");
      SprdBnchmkCurve_35.add_attribute("PxTyp", "2"); // 2
      SprdBnchmkCurve_35_set.insert("2");
      SprdBnchmkCurve_35.add_attribute("SecID", "BenchmarkSecurityID_t_147406468"); // 2
      SprdBnchmkCurve_35_set.insert("BenchmarkSecurityID_t_147406468");
      SprdBnchmkCurve_35.add_attribute("SecIDSrc", "C"); // 2
      SprdBnchmkCurve_35_set.insert("C");
      all_values.push_back(SprdBnchmkCurve_35_set);
      all_compo_names.insert("SprdBnchmkCurve_35_set");

      SecL_2.add_element(SprdBnchmkCurve_35);
    }
    {
      xml_element Yield_30{"Yield"};
      multiset<string> Yield_30_set;
      Yield_30.add_attribute("Typ", "LASTQUARTER"); // 2
      Yield_30_set.insert("LASTQUARTER");
      Yield_30.add_attribute("Yld", "15438529.180000"); // 2
      Yield_30_set.insert("15438529.180000");
      Yield_30.add_attribute("CalcDt", "YieldCalcDate_t_65913645"); // 2
      Yield_30_set.insert("YieldCalcDate_t_65913645");
      Yield_30.add_attribute("RedDt", "YieldRedemptionDate_t_1207693356"); // 2
      Yield_30_set.insert("YieldRedemptionDate_t_1207693356");
      Yield_30.add_attribute("RedPx", "10936722.450000"); // 2
      Yield_30_set.insert("10936722.450000");
      Yield_30.add_attribute("RedPxTyp", "10"); // 2
      Yield_30_set.insert("10");
      all_values.push_back(Yield_30_set);
      all_compo_names.insert("Yield_30_set");

      SecL_2.add_element(Yield_30);
    }
    elt.add_element(SecL_2);
  } // end SecL
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
