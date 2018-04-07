#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositionsAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositionsAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ReqForPossAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositionsAck_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_872766372"); // 0
  RequestForPositionsAck_message_t_0.insert("PosMaintRptID_t_872766372");
  elt.add_attribute("ReqID", "PosReqID_t_202098117"); // 0
  RequestForPositionsAck_message_t_0.insert("PosReqID_t_202098117");
  elt.add_attribute("TotRpts", "660656825"); // 0
  RequestForPositionsAck_message_t_0.insert("660656825");
  elt.add_attribute("Unsol", "N"); // 0
  RequestForPositionsAck_message_t_0.insert("N");
  elt.add_attribute("Rslt", "2"); // 0
  RequestForPositionsAck_message_t_0.insert("2");
  elt.add_attribute("Stat", "1"); // 0
  RequestForPositionsAck_message_t_0.insert("1");
  elt.add_attribute("ReqTyp", "2"); // 0
  RequestForPositionsAck_message_t_0.insert("2");
  elt.add_attribute("MtchStat", "0"); // 0
  RequestForPositionsAck_message_t_0.insert("0");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1526324445"); // 0
  RequestForPositionsAck_message_t_0.insert("ClearingBusinessDate_t_1526324445");
  elt.add_attribute("SubReqTyp", "1"); // 0
  RequestForPositionsAck_message_t_0.insert("1");
  elt.add_attribute("SetSesID", "EOD"); // 0
  RequestForPositionsAck_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_925376530"); // 0
  RequestForPositionsAck_message_t_0.insert("SettlSessSubID_t_925376530");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  RequestForPositionsAck_message_t_0.insert("JPY");
  elt.add_attribute("Acct", "Account_t_1654715959"); // 0
  RequestForPositionsAck_message_t_0.insert("Account_t_1654715959");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  RequestForPositionsAck_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "2"); // 0
  RequestForPositionsAck_message_t_0.insert("2");
  elt.add_attribute("Ccy", "JPY"); // 0
  RequestForPositionsAck_message_t_0.insert("JPY");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  RequestForPositionsAck_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_792527552"); // 0
  RequestForPositionsAck_message_t_0.insert("ResponseDestination_t_792527552");
  elt.add_attribute("Txt", "Text_t_1790248670"); // 0
  RequestForPositionsAck_message_t_0.insert("Text_t_1790248670");
  elt.add_attribute("EncTxtLen", "1469610040"); // 0
  RequestForPositionsAck_message_t_0.insert("1469610040");
  elt.add_attribute("EncTxt", "EncodedText_t_2016557027"); // 0
  RequestForPositionsAck_message_t_0.insert("EncodedText_t_2016557027");
  all_values.push_back(RequestForPositionsAck_message_t_0);
  all_compo_names.insert("RequestForPositionsAck_message_t");

  { // Hdr
    xml_element Hdr_79{"Hdr"};
    multiset<string> Hdr_79_set;
    Hdr_79.add_attribute("SeqNum", "383060568"); // 1
    Hdr_79_set.insert("383060568");
    Hdr_79.add_attribute("SID", "SenderCompID_t_90871290"); // 1
    Hdr_79_set.insert("SenderCompID_t_90871290");
    Hdr_79.add_attribute("TID", "TargetCompID_t_1505475195"); // 1
    Hdr_79_set.insert("TargetCompID_t_1505475195");
    Hdr_79.add_attribute("OBID", "OnBehalfOfCompID_t_1449497872"); // 1
    Hdr_79_set.insert("OnBehalfOfCompID_t_1449497872");
    Hdr_79.add_attribute("D2ID", "DeliverToCompID_t_1807355947"); // 1
    Hdr_79_set.insert("DeliverToCompID_t_1807355947");
    Hdr_79.add_attribute("SSub", "SenderSubID_t_146748946"); // 1
    Hdr_79_set.insert("SenderSubID_t_146748946");
    Hdr_79.add_attribute("SLoc", "SenderLocationID_t_1444478899"); // 1
    Hdr_79_set.insert("SenderLocationID_t_1444478899");
    Hdr_79.add_attribute("TSub", "TargetSubID_t_532638671"); // 1
    Hdr_79_set.insert("TargetSubID_t_532638671");
    Hdr_79.add_attribute("TLoc", "TargetLocationID_t_348847064"); // 1
    Hdr_79_set.insert("TargetLocationID_t_348847064");
    Hdr_79.add_attribute("OBSub", "OnBehalfOfSubID_t_2105135724"); // 1
    Hdr_79_set.insert("OnBehalfOfSubID_t_2105135724");
    Hdr_79.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1595770103"); // 1
    Hdr_79_set.insert("OnBehalfOfLocationID_t_1595770103");
    Hdr_79.add_attribute("D2Sub", "DeliverToSubID_t_749226760"); // 1
    Hdr_79_set.insert("DeliverToSubID_t_749226760");
    Hdr_79.add_attribute("D2Loc", "DeliverToLocationID_t_1549549802"); // 1
    Hdr_79_set.insert("DeliverToLocationID_t_1549549802");
    Hdr_79.add_attribute("PosDup", "N"); // 1
    Hdr_79_set.insert("N");
    Hdr_79.add_attribute("PosRsnd", "Y"); // 1
    Hdr_79_set.insert("Y");
    Hdr_79.add_attribute("Snt", "SendingTime_t_928390599"); // 1
    Hdr_79_set.insert("SendingTime_t_928390599");
    Hdr_79.add_attribute("OrigSnt", "OrigSendingTime_t_881896596"); // 1
    Hdr_79_set.insert("OrigSendingTime_t_881896596");
    Hdr_79.add_attribute("MsgEncd", "MessageEncoding_t_2043174576"); // 1
    Hdr_79_set.insert("MessageEncoding_t_2043174576");
    all_values.push_back(Hdr_79_set);
    all_compo_names.insert("Hdr_79_set");

    {
      xml_element Hop_79{"Hop"};
      multiset<string> Hop_79_set;
      Hop_79.add_attribute("ID", "HopCompID_t_1853767129"); // 2
      Hop_79_set.insert("HopCompID_t_1853767129");
      Hop_79.add_attribute("Ref", "578118386"); // 2
      Hop_79_set.insert("578118386");
      Hop_79.add_attribute("Snt", "HopSendingTime_t_2016135770"); // 2
      Hop_79_set.insert("HopSendingTime_t_2016135770");
      all_values.push_back(Hop_79_set);
      all_compo_names.insert("Hop_79_set");

      Hdr_79.add_element(Hop_79);
    }
    elt.add_element(Hdr_79);
  } // end Hdr
  { // Pty
    xml_element Pty_395{"Pty"};
    multiset<string> Pty_395_set;
    Pty_395.add_attribute("ID", "PartyID_t_643271491"); // 1
    Pty_395_set.insert("PartyID_t_643271491");
    Pty_395.add_attribute("Src", "F"); // 1
    Pty_395_set.insert("F");
    Pty_395.add_attribute("R", "57"); // 1
    Pty_395_set.insert("57");
    all_values.push_back(Pty_395_set);
    all_compo_names.insert("Pty_395_set");

    {
      xml_element Sub_395{"Sub"};
      multiset<string> Sub_395_set;
      Sub_395.add_attribute("ID", "PartySubID_t_1949895480"); // 2
      Sub_395_set.insert("PartySubID_t_1949895480");
      Sub_395.add_attribute("Typ", "15"); // 2
      Sub_395_set.insert("15");
      all_values.push_back(Sub_395_set);
      all_compo_names.insert("Sub_395_set");

      Pty_395.add_element(Sub_395);
    }
    elt.add_element(Pty_395);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_72{"Instrmt"};
    multiset<string> Instrmt_72_set;
    Instrmt_72.add_attribute("Sym", "Symbol_t_1560874430"); // 1
    Instrmt_72_set.insert("Symbol_t_1560874430");
    Instrmt_72.add_attribute("Sfx", "CD"); // 1
    Instrmt_72_set.insert("CD");
    Instrmt_72.add_attribute("ID", "SecurityID_t_1708753951"); // 1
    Instrmt_72_set.insert("SecurityID_t_1708753951");
    Instrmt_72.add_attribute("Src", "G"); // 1
    Instrmt_72_set.insert("G");
    Instrmt_72.add_attribute("Prod", "9"); // 1
    Instrmt_72_set.insert("9");
    Instrmt_72.add_attribute("ProdCmplx", "ProductComplex_t_1799625242"); // 1
    Instrmt_72_set.insert("ProductComplex_t_1799625242");
    Instrmt_72.add_attribute("SecGrp", "SecurityGroup_t_787939357"); // 1
    Instrmt_72_set.insert("SecurityGroup_t_787939357");
    Instrmt_72.add_attribute("CFI", "CFICode_t_1277735295"); // 1
    Instrmt_72_set.insert("CFICode_t_1277735295");
    Instrmt_72.add_attribute("SecTyp", "EUSOV"); // 1
    Instrmt_72_set.insert("EUSOV");
    Instrmt_72.add_attribute("SubTyp", "SecuritySubType_t_934688303"); // 1
    Instrmt_72_set.insert("SecuritySubType_t_934688303");
    Instrmt_72.add_attribute("MMY", "574730546"); // 1
    Instrmt_72_set.insert("574730546");
    Instrmt_72.add_attribute("MatDt", "MaturityDate_t_1992136212"); // 1
    Instrmt_72_set.insert("MaturityDate_t_1992136212");
    Instrmt_72.add_attribute("MatTm", "1283535367"); // 1
    Instrmt_72_set.insert("1283535367");
    Instrmt_72.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_532382622"); // 1
    Instrmt_72_set.insert("SettleOnOpenFlag_t_532382622");
    Instrmt_72.add_attribute("AsgnMeth", "1440422667"); // 1
    Instrmt_72_set.insert("1440422667");
    Instrmt_72.add_attribute("Status", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("CpnPmt", "CouponPaymentDate_t_2081932424"); // 1
    Instrmt_72_set.insert("CouponPaymentDate_t_2081932424");
    Instrmt_72.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_72_set.insert("FR");
    Instrmt_72.add_attribute("Snrty", "SB"); // 1
    Instrmt_72_set.insert("SB");
    Instrmt_72.add_attribute("NotlPctOut", "8628393.760000"); // 1
    Instrmt_72_set.insert("8628393.760000");
    Instrmt_72.add_attribute("OrigNotlPctOut", "13174275.320000"); // 1
    Instrmt_72_set.insert("13174275.320000");
    Instrmt_72.add_attribute("AttchPnt", "12115796.730000"); // 1
    Instrmt_72_set.insert("12115796.730000");
    Instrmt_72.add_attribute("DetchPnt", "5691228.570000"); // 1
    Instrmt_72_set.insert("5691228.570000");
    Instrmt_72.add_attribute("Issued", "IssueDate_t_1895545918"); // 1
    Instrmt_72_set.insert("IssueDate_t_1895545918");
    Instrmt_72.add_attribute("RepoCollSecTyp", "1080231796"); // 1
    Instrmt_72_set.insert("1080231796");
    Instrmt_72.add_attribute("RepoTrm", "1930122298"); // 1
    Instrmt_72_set.insert("1930122298");
    Instrmt_72.add_attribute("RepoRt", "3913337.610000"); // 1
    Instrmt_72_set.insert("3913337.610000");
    Instrmt_72.add_attribute("Fctr", "17296745.460000"); // 1
    Instrmt_72_set.insert("17296745.460000");
    Instrmt_72.add_attribute("CrdRtg", "CreditRating_t_550985528"); // 1
    Instrmt_72_set.insert("CreditRating_t_550985528");
    Instrmt_72.add_attribute("Rgstry", "InstrRegistry_t_193745593"); // 1
    Instrmt_72_set.insert("InstrRegistry_t_193745593");
    Instrmt_72.add_attribute("IssuCtry", "1968818457"); // 1
    Instrmt_72_set.insert("1968818457");
    Instrmt_72.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2111859958"); // 1
    Instrmt_72_set.insert("StateOrProvinceOfIssue_t_2111859958");
    Instrmt_72.add_attribute("Lcl", "LocaleOfIssue_t_1786406096"); // 1
    Instrmt_72_set.insert("LocaleOfIssue_t_1786406096");
    Instrmt_72.add_attribute("Redeem", "RedemptionDate_t_1530088761"); // 1
    Instrmt_72_set.insert("RedemptionDate_t_1530088761");
    Instrmt_72.add_attribute("StrkPx", "13943241.190000"); // 1
    Instrmt_72_set.insert("13943241.190000");
    Instrmt_72.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_72_set.insert("CHF");
    Instrmt_72.add_attribute("StrkMult", "347798.280000"); // 1
    Instrmt_72_set.insert("347798.280000");
    Instrmt_72.add_attribute("StrkValu", "7448951.660000"); // 1
    Instrmt_72_set.insert("7448951.660000");
    Instrmt_72.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_72_set.insert("3");
    Instrmt_72.add_attribute("StrkPxBndryPrcsn", "13196257.130000"); // 1
    Instrmt_72_set.insert("13196257.130000");
    Instrmt_72.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("OptAt", "105519851"); // 1
    Instrmt_72_set.insert("105519851");
    Instrmt_72.add_attribute("Mult", "18520083.350000"); // 1
    Instrmt_72_set.insert("18520083.350000");
    Instrmt_72.add_attribute("MultTyp", "0"); // 1
    Instrmt_72_set.insert("0");
    Instrmt_72.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_72_set.insert("4");
    Instrmt_72.add_attribute("MinPxIncr", "17864571.120000"); // 1
    Instrmt_72_set.insert("17864571.120000");
    Instrmt_72.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_67366767"); // 1
    Instrmt_72_set.insert("MinPriceIncrementAmount_t_67366767");
    Instrmt_72.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_72_set.insert("MMbbl");
    Instrmt_72.add_attribute("UOMQty", "5018128.400000"); // 1
    Instrmt_72_set.insert("5018128.400000");
    Instrmt_72.add_attribute("PxUOM", "tn"); // 1
    Instrmt_72_set.insert("tn");
    Instrmt_72.add_attribute("PxUOMQty", "3707831.010000"); // 1
    Instrmt_72_set.insert("3707831.010000");
    Instrmt_72.add_attribute("SettlMeth", "P"); // 1
    Instrmt_72_set.insert("P");
    Instrmt_72.add_attribute("ExerStyle", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("OptPayAmt", "OptPayoutAmount_t_853574347"); // 1
    Instrmt_72_set.insert("OptPayoutAmount_t_853574347");
    Instrmt_72.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_72_set.insert("PCTPAR");
    Instrmt_72.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_72_set.insert("EQTY");
    Instrmt_72.add_attribute("ListMeth", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("CapPx", "17179359.240000"); // 1
    Instrmt_72_set.insert("17179359.240000");
    Instrmt_72.add_attribute("FlrPx", "8545406.050000"); // 1
    Instrmt_72_set.insert("8545406.050000");
    Instrmt_72.add_attribute("PutCall", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("FlexInd", "true"); // 1
    Instrmt_72_set.insert("true");
    Instrmt_72.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_72_set.insert("true");
    Instrmt_72.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_72_set.insert("Yr");
    Instrmt_72.add_attribute("CpnRt", "8240182.430000"); // 1
    Instrmt_72_set.insert("8240182.430000");
    Instrmt_72.add_attribute("Exch", "SecurityExchange_t_1419376073"); // 1
    Instrmt_72_set.insert("SecurityExchange_t_1419376073");
    Instrmt_72.add_attribute("PosLmt", "650556485"); // 1
    Instrmt_72_set.insert("650556485");
    Instrmt_72.add_attribute("NTPosLmt", "1568913410"); // 1
    Instrmt_72_set.insert("1568913410");
    Instrmt_72.add_attribute("Issr", "Issuer_t_1913620321"); // 1
    Instrmt_72_set.insert("Issuer_t_1913620321");
    Instrmt_72.add_attribute("EncIssrLen", "1620024617"); // 1
    Instrmt_72_set.insert("1620024617");
    Instrmt_72.add_attribute("EncIssr", "EncodedIssuer_t_741055475"); // 1
    Instrmt_72_set.insert("EncodedIssuer_t_741055475");
    Instrmt_72.add_attribute("Desc", "SecurityDesc_t_105033485"); // 1
    Instrmt_72_set.insert("SecurityDesc_t_105033485");
    Instrmt_72.add_attribute("EncSecDescLen", "1725544469"); // 1
    Instrmt_72_set.insert("1725544469");
    Instrmt_72.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_445580162"); // 1
    Instrmt_72_set.insert("EncodedSecurityDesc_t_445580162");
    Instrmt_72.add_attribute("Pool", "Pool_t_1884352964"); // 1
    Instrmt_72_set.insert("Pool_t_1884352964");
    Instrmt_72.add_attribute("CSetMo", "1716342800"); // 1
    Instrmt_72_set.insert("1716342800");
    Instrmt_72.add_attribute("CPPgm", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("CPRegT", "CPRegType_t_1951719732"); // 1
    Instrmt_72_set.insert("CPRegType_t_1951719732");
    Instrmt_72.add_attribute("Dated", "DatedDate_t_875546228"); // 1
    Instrmt_72_set.insert("DatedDate_t_875546228");
    Instrmt_72.add_attribute("IntAcrl", "InterestAccrualDate_t_586366466"); // 1
    Instrmt_72_set.insert("InterestAccrualDate_t_586366466");
    all_values.push_back(Instrmt_72_set);
    all_compo_names.insert("Instrmt_72_set");

    {
      xml_element AID_75{"AID"};
      multiset<string> AID_75_set;
      AID_75.add_attribute("AltID", "SecurityAltID_t_1189030383"); // 2
      AID_75_set.insert("SecurityAltID_t_1189030383");
      AID_75.add_attribute("AltIDSrc", "4"); // 2
      AID_75_set.insert("4");
      all_values.push_back(AID_75_set);
      all_compo_names.insert("AID_75_set");

      Instrmt_72.add_element(AID_75);
    }
    {
      xml_element SecXML_75{"SecXML"};
      multiset<string> SecXML_75_set;
      SecXML_75.add_attribute("Schema", "SecurityXMLSchema_t_1657302164"); // 2
      SecXML_75_set.insert("SecurityXMLSchema_t_1657302164");
      all_values.push_back(SecXML_75_set);
      all_compo_names.insert("SecXML_75_set");

      Instrmt_72.add_element(SecXML_75);
    }
    {
      xml_element Evnt_75{"Evnt"};
      multiset<string> Evnt_75_set;
      Evnt_75.add_attribute("EventTyp", "5"); // 2
      Evnt_75_set.insert("5");
      Evnt_75.add_attribute("Dt", "EventDate_t_549860579"); // 2
      Evnt_75_set.insert("EventDate_t_549860579");
      Evnt_75.add_attribute("Tm", "EventTime_t_363392863"); // 2
      Evnt_75_set.insert("EventTime_t_363392863");
      Evnt_75.add_attribute("Px", "16985936.360000"); // 2
      Evnt_75_set.insert("16985936.360000");
      Evnt_75.add_attribute("Txt", "EventText_t_1583066374"); // 2
      Evnt_75_set.insert("EventText_t_1583066374");
      all_values.push_back(Evnt_75_set);
      all_compo_names.insert("Evnt_75_set");

      Instrmt_72.add_element(Evnt_75);
    }
    {
      xml_element Pty_396{"Pty"};
      multiset<string> Pty_396_set;
      Pty_396.add_attribute("ID", "InstrumentPartyID_t_1767952739"); // 2
      Pty_396_set.insert("InstrumentPartyID_t_1767952739");
      Pty_396.add_attribute("Src", "D"); // 2
      Pty_396_set.insert("D");
      Pty_396.add_attribute("R", "24"); // 2
      Pty_396_set.insert("24");
      all_values.push_back(Pty_396_set);
      all_compo_names.insert("Pty_396_set");

      {
        xml_element Sub_396{"Sub"};
        multiset<string> Sub_396_set;
        Sub_396.add_attribute("ID", "InstrumentPartySubID_t_989405276"); // 3
        Sub_396_set.insert("InstrumentPartySubID_t_989405276");
        Sub_396.add_attribute("Typ", "11"); // 3
        Sub_396_set.insert("11");
        all_values.push_back(Sub_396_set);
        all_compo_names.insert("Sub_396_set");

        Pty_396.add_element(Sub_396);
      }
      Instrmt_72.add_element(Pty_396);
    }
    {
      xml_element CmplxEvnt_72{"CmplxEvnt"};
      multiset<string> CmplxEvnt_72_set;
      CmplxEvnt_72.add_attribute("Typ", "9"); // 2
      CmplxEvnt_72_set.insert("9");
      CmplxEvnt_72.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1605181933"); // 2
      CmplxEvnt_72_set.insert("ComplexOptPayoutAmount_t_1605181933");
      CmplxEvnt_72.add_attribute("Px", "13024388.800000"); // 2
      CmplxEvnt_72_set.insert("13024388.800000");
      CmplxEvnt_72.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_72_set.insert("3");
      CmplxEvnt_72.add_attribute("PxBndryPrcsn", "1082547.710000"); // 2
      CmplxEvnt_72_set.insert("1082547.710000");
      CmplxEvnt_72.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_72_set.insert("2");
      CmplxEvnt_72.add_attribute("Cond", "2"); // 2
      CmplxEvnt_72_set.insert("2");
      all_values.push_back(CmplxEvnt_72_set);
      all_compo_names.insert("CmplxEvnt_72_set");

      {
        xml_element EvntDts_72{"EvntDts"};
        multiset<string> EvntDts_72_set;
        EvntDts_72.add_attribute("StartDt", "ComplexEventStartDate_t_1728279388"); // 3
        EvntDts_72_set.insert("ComplexEventStartDate_t_1728279388");
        EvntDts_72.add_attribute("EndDt", "ComplexEventEndDate_t_1464924117"); // 3
        EvntDts_72_set.insert("ComplexEventEndDate_t_1464924117");
        all_values.push_back(EvntDts_72_set);
        all_compo_names.insert("EvntDts_72_set");

        {
          xml_element EvntTms_72{"EvntTms"};
          multiset<string> EvntTms_72_set;
          EvntTms_72.add_attribute("StartTm", "1817815280"); // 4
          EvntTms_72_set.insert("1817815280");
          EvntTms_72.add_attribute("EndTm", "1306340209"); // 4
          EvntTms_72_set.insert("1306340209");
          all_values.push_back(EvntTms_72_set);
          all_compo_names.insert("EvntTms_72_set");

          EvntDts_72.add_element(EvntTms_72);
        }
        CmplxEvnt_72.add_element(EvntDts_72);
      }
      Instrmt_72.add_element(CmplxEvnt_72);
    }
    elt.add_element(Instrmt_72);
  } // end Instrmt
  { // Leg
    xml_element Leg_89{"Leg"};
    multiset<string> Leg_89_set;
    Leg_89.add_attribute("Sym", "LegSymbol_t_1554684597"); // 1
    Leg_89_set.insert("LegSymbol_t_1554684597");
    Leg_89.add_attribute("Sfx", "WI"); // 1
    Leg_89_set.insert("WI");
    Leg_89.add_attribute("ID", "LegSecurityID_t_1995057906"); // 1
    Leg_89_set.insert("LegSecurityID_t_1995057906");
    Leg_89.add_attribute("Src", "L"); // 1
    Leg_89_set.insert("L");
    Leg_89.add_attribute("Prod", "5"); // 1
    Leg_89_set.insert("5");
    Leg_89.add_attribute("CFI", "LegCFICode_t_433940725"); // 1
    Leg_89_set.insert("LegCFICode_t_433940725");
    Leg_89.add_attribute("SecTyp", "TD"); // 1
    Leg_89_set.insert("TD");
    Leg_89.add_attribute("SecSubTyp", "LegSecuritySubType_t_849591271"); // 1
    Leg_89_set.insert("LegSecuritySubType_t_849591271");
    Leg_89.add_attribute("MMY", "2091242889"); // 1
    Leg_89_set.insert("2091242889");
    Leg_89.add_attribute("Mat", "LegMaturityDate_t_574870721"); // 1
    Leg_89_set.insert("LegMaturityDate_t_574870721");
    Leg_89.add_attribute("MatTm", "1399451850"); // 1
    Leg_89_set.insert("1399451850");
    Leg_89.add_attribute("CpnPmt", "LegCouponPaymentDate_t_307152104"); // 1
    Leg_89_set.insert("LegCouponPaymentDate_t_307152104");
    Leg_89.add_attribute("Issued", "LegIssueDate_t_125980709"); // 1
    Leg_89_set.insert("LegIssueDate_t_125980709");
    Leg_89.add_attribute("RepoCollSecTyp", "835034576"); // 1
    Leg_89_set.insert("835034576");
    Leg_89.add_attribute("RepoTrm", "2075104843"); // 1
    Leg_89_set.insert("2075104843");
    Leg_89.add_attribute("RepoRt", "13950266.220000"); // 1
    Leg_89_set.insert("13950266.220000");
    Leg_89.add_attribute("Fctr", "11251579.080000"); // 1
    Leg_89_set.insert("11251579.080000");
    Leg_89.add_attribute("CrdRtg", "LegCreditRating_t_917026472"); // 1
    Leg_89_set.insert("LegCreditRating_t_917026472");
    Leg_89.add_attribute("Rgstry", "LegInstrRegistry_t_1873447259"); // 1
    Leg_89_set.insert("LegInstrRegistry_t_1873447259");
    Leg_89.add_attribute("Ctry", "1652426957"); // 1
    Leg_89_set.insert("1652426957");
    Leg_89.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_374724757"); // 1
    Leg_89_set.insert("LegStateOrProvinceOfIssue_t_374724757");
    Leg_89.add_attribute("Lcl", "LegLocaleOfIssue_t_1028402491"); // 1
    Leg_89_set.insert("LegLocaleOfIssue_t_1028402491");
    Leg_89.add_attribute("Redeem", "LegRedemptionDate_t_1451588432"); // 1
    Leg_89_set.insert("LegRedemptionDate_t_1451588432");
    Leg_89.add_attribute("Strk", "4829795.280000"); // 1
    Leg_89_set.insert("4829795.280000");
    Leg_89.add_attribute("StrkCcy", "CHF"); // 1
    Leg_89_set.insert("CHF");
    Leg_89.add_attribute("OptA", "63775269"); // 1
    Leg_89_set.insert("63775269");
    Leg_89.add_attribute("Cmult", "10697116.030000"); // 1
    Leg_89_set.insert("10697116.030000");
    Leg_89.add_attribute("MultTyp", "1"); // 1
    Leg_89_set.insert("1");
    Leg_89.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_89_set.insert("3");
    Leg_89.add_attribute("UOM", "Bcf"); // 1
    Leg_89_set.insert("Bcf");
    Leg_89.add_attribute("UOMQty", "944191.610000"); // 1
    Leg_89_set.insert("944191.610000");
    Leg_89.add_attribute("PxUOM", "t"); // 1
    Leg_89_set.insert("t");
    Leg_89.add_attribute("PxUOMQty", "6803064.940000"); // 1
    Leg_89_set.insert("6803064.940000");
    Leg_89.add_attribute("TmUnit", "D"); // 1
    Leg_89_set.insert("D");
    Leg_89.add_attribute("ExerStyle", "1"); // 1
    Leg_89_set.insert("1");
    Leg_89.add_attribute("CpnRt", "11142472.190000"); // 1
    Leg_89_set.insert("11142472.190000");
    Leg_89.add_attribute("Exch", "LegSecurityExchange_t_1853807258"); // 1
    Leg_89_set.insert("LegSecurityExchange_t_1853807258");
    Leg_89.add_attribute("Issr", "LegIssuer_t_550684404"); // 1
    Leg_89_set.insert("LegIssuer_t_550684404");
    Leg_89.add_attribute("EncLegIssrLen", "1058006460"); // 1
    Leg_89_set.insert("1058006460");
    Leg_89.add_attribute("EncLegIssr", "EncodedLegIssuer_t_281194332"); // 1
    Leg_89_set.insert("EncodedLegIssuer_t_281194332");
    Leg_89.add_attribute("Desc", "LegSecurityDesc_t_1950136254"); // 1
    Leg_89_set.insert("LegSecurityDesc_t_1950136254");
    Leg_89.add_attribute("EncLegSecDescLen", "1365158564"); // 1
    Leg_89_set.insert("1365158564");
    Leg_89.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_407175041"); // 1
    Leg_89_set.insert("EncodedLegSecurityDesc_t_407175041");
    Leg_89.add_attribute("RatioQty", "6376871.830000"); // 1
    Leg_89_set.insert("6376871.830000");
    Leg_89.add_attribute("Side", "1"); // 1
    Leg_89_set.insert("1");
    Leg_89.add_attribute("Ccy", "EUR"); // 1
    Leg_89_set.insert("EUR");
    Leg_89.add_attribute("Pool", "LegPool_t_62322584"); // 1
    Leg_89_set.insert("LegPool_t_62322584");
    Leg_89.add_attribute("Dated", "LegDatedDate_t_1528165274"); // 1
    Leg_89_set.insert("LegDatedDate_t_1528165274");
    Leg_89.add_attribute("CSetMo", "1267788400"); // 1
    Leg_89_set.insert("1267788400");
    Leg_89.add_attribute("IntAcrl", "LegInterestAccrualDate_t_437047341"); // 1
    Leg_89_set.insert("LegInterestAccrualDate_t_437047341");
    Leg_89.add_attribute("PutCall", "409084118"); // 1
    Leg_89_set.insert("409084118");
    Leg_89.add_attribute("LegOptionRatio", "5718931.840000"); // 1
    Leg_89_set.insert("5718931.840000");
    Leg_89.add_attribute("Px", "9200268.700000"); // 1
    Leg_89_set.insert("9200268.700000");
    all_values.push_back(Leg_89_set);
    all_compo_names.insert("Leg_89_set");

    {
      xml_element LegAID_84{"LegAID"};
      multiset<string> LegAID_84_set;
      LegAID_84.add_attribute("SecAltID", "LegSecurityAltID_t_13871604"); // 2
      LegAID_84_set.insert("LegSecurityAltID_t_13871604");
      LegAID_84.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_84_set.insert("1");
      all_values.push_back(LegAID_84_set);
      all_compo_names.insert("LegAID_84_set");

      Leg_89.add_element(LegAID_84);
    }
    elt.add_element(Leg_89);
  } // end Leg
  { // Undly
    xml_element Undly_100{"Undly"};
    multiset<string> Undly_100_set;
    Undly_100.add_attribute("Sym", "UnderlyingSymbol_t_1083583207"); // 1
    Undly_100_set.insert("UnderlyingSymbol_t_1083583207");
    Undly_100.add_attribute("Sfx", "CD"); // 1
    Undly_100_set.insert("CD");
    Undly_100.add_attribute("ID", "UnderlyingSecurityID_t_206433969"); // 1
    Undly_100_set.insert("UnderlyingSecurityID_t_206433969");
    Undly_100.add_attribute("Src", "A"); // 1
    Undly_100_set.insert("A");
    Undly_100.add_attribute("Prod", "9"); // 1
    Undly_100_set.insert("9");
    Undly_100.add_attribute("CFI", "UnderlyingCFICode_t_304265161"); // 1
    Undly_100_set.insert("UnderlyingCFICode_t_304265161");
    Undly_100.add_attribute("SecTyp", "TINT"); // 1
    Undly_100_set.insert("TINT");
    Undly_100.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1676273331"); // 1
    Undly_100_set.insert("UnderlyingSecuritySubType_t_1676273331");
    Undly_100.add_attribute("MMY", "5358295"); // 1
    Undly_100_set.insert("5358295");
    Undly_100.add_attribute("Mat", "UnderlyingMaturityDate_t_1563385508"); // 1
    Undly_100_set.insert("UnderlyingMaturityDate_t_1563385508");
    Undly_100.add_attribute("MatTm", "1382596941"); // 1
    Undly_100_set.insert("1382596941");
    Undly_100.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_556042699"); // 1
    Undly_100_set.insert("UnderlyingCouponPaymentDate_t_556042699");
    Undly_100.add_attribute("RestrctTyp", "FR"); // 1
    Undly_100_set.insert("FR");
    Undly_100.add_attribute("Snrty", "SD"); // 1
    Undly_100_set.insert("SD");
    Undly_100.add_attribute("NotlPctOut", "3586953.060000"); // 1
    Undly_100_set.insert("3586953.060000");
    Undly_100.add_attribute("OrigNotlPctOut", "18390668.840000"); // 1
    Undly_100_set.insert("18390668.840000");
    Undly_100.add_attribute("AttchPnt", "20709663.150000"); // 1
    Undly_100_set.insert("20709663.150000");
    Undly_100.add_attribute("DetchPnt", "9963824.890000"); // 1
    Undly_100_set.insert("9963824.890000");
    Undly_100.add_attribute("Issued", "UnderlyingIssueDate_t_984362996"); // 1
    Undly_100_set.insert("UnderlyingIssueDate_t_984362996");
    Undly_100.add_attribute("RepoCollSecTyp", "1725684330"); // 1
    Undly_100_set.insert("1725684330");
    Undly_100.add_attribute("RepoTrm", "611743932"); // 1
    Undly_100_set.insert("611743932");
    Undly_100.add_attribute("RepoRt", "10466855.800000"); // 1
    Undly_100_set.insert("10466855.800000");
    Undly_100.add_attribute("Fctr", "11063659.570000"); // 1
    Undly_100_set.insert("11063659.570000");
    Undly_100.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1879532332"); // 1
    Undly_100_set.insert("UnderlyingCreditRating_t_1879532332");
    Undly_100.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1483732922"); // 1
    Undly_100_set.insert("UnderlyingInstrRegistry_t_1483732922");
    Undly_100.add_attribute("Ctry", "1515450075"); // 1
    Undly_100_set.insert("1515450075");
    Undly_100.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_303941869"); // 1
    Undly_100_set.insert("UnderlyingStateOrProvinceOfIssue_t_303941869");
    Undly_100.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_256276144"); // 1
    Undly_100_set.insert("UnderlyingLocaleOfIssue_t_256276144");
    Undly_100.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1529321679"); // 1
    Undly_100_set.insert("UnderlyingRedemptionDate_t_1529321679");
    Undly_100.add_attribute("StrkPx", "18927216.330000"); // 1
    Undly_100_set.insert("18927216.330000");
    Undly_100.add_attribute("StrkCcy", "GBP"); // 1
    Undly_100_set.insert("GBP");
    Undly_100.add_attribute("OptA", "2021235961"); // 1
    Undly_100_set.insert("2021235961");
    Undly_100.add_attribute("Mult", "14465122.520000"); // 1
    Undly_100_set.insert("14465122.520000");
    Undly_100.add_attribute("MultTyp", "1"); // 1
    Undly_100_set.insert("1");
    Undly_100.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_100_set.insert("2");
    Undly_100.add_attribute("UOM", "USD"); // 1
    Undly_100_set.insert("USD");
    Undly_100.add_attribute("UOMQty", "6833913.220000"); // 1
    Undly_100_set.insert("6833913.220000");
    Undly_100.add_attribute("PxUOM", "Bcf"); // 1
    Undly_100_set.insert("Bcf");
    Undly_100.add_attribute("PxUOMQty", "17561357.090000"); // 1
    Undly_100_set.insert("17561357.090000");
    Undly_100.add_attribute("TmUnit", "H"); // 1
    Undly_100_set.insert("H");
    Undly_100.add_attribute("ExerStyle", "0"); // 1
    Undly_100_set.insert("0");
    Undly_100.add_attribute("CpnRt", "1646947.600000"); // 1
    Undly_100_set.insert("1646947.600000");
    Undly_100.add_attribute("Exch", "UnderlyingSecurityExchange_t_573201502"); // 1
    Undly_100_set.insert("UnderlyingSecurityExchange_t_573201502");
    Undly_100.add_attribute("Issr", "UnderlyingIssuer_t_524380052"); // 1
    Undly_100_set.insert("UnderlyingIssuer_t_524380052");
    Undly_100.add_attribute("EncUndIssrLen", "523390066"); // 1
    Undly_100_set.insert("523390066");
    Undly_100.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_264784739"); // 1
    Undly_100_set.insert("EncodedUnderlyingIssuer_t_264784739");
    Undly_100.add_attribute("Desc", "UnderlyingSecurityDesc_t_447862719"); // 1
    Undly_100_set.insert("UnderlyingSecurityDesc_t_447862719");
    Undly_100.add_attribute("EncUndSecDescLen", "1519772555"); // 1
    Undly_100_set.insert("1519772555");
    Undly_100.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1249147735"); // 1
    Undly_100_set.insert("EncodedUnderlyingSecurityDesc_t_1249147735");
    Undly_100.add_attribute("CPPgm", "UnderlyingCPProgram_t_26063401"); // 1
    Undly_100_set.insert("UnderlyingCPProgram_t_26063401");
    Undly_100.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2131516487"); // 1
    Undly_100_set.insert("UnderlyingCPRegType_t_2131516487");
    Undly_100.add_attribute("AllocPct", "1483496.680000"); // 1
    Undly_100_set.insert("1483496.680000");
    Undly_100.add_attribute("Ccy", "GBP"); // 1
    Undly_100_set.insert("GBP");
    Undly_100.add_attribute("Qty", "16320825.900000"); // 1
    Undly_100_set.insert("16320825.900000");
    Undly_100.add_attribute("SettlTyp", "2"); // 1
    Undly_100_set.insert("2");
    Undly_100.add_attribute("CashAmt", "UnderlyingCashAmount_t_20023393"); // 1
    Undly_100_set.insert("UnderlyingCashAmount_t_20023393");
    Undly_100.add_attribute("CashTyp", "FIXED"); // 1
    Undly_100_set.insert("FIXED");
    Undly_100.add_attribute("Px", "20297174.640000"); // 1
    Undly_100_set.insert("20297174.640000");
    Undly_100.add_attribute("DirtPx", "19127450.260000"); // 1
    Undly_100_set.insert("19127450.260000");
    Undly_100.add_attribute("EndPx", "9809533.690000"); // 1
    Undly_100_set.insert("9809533.690000");
    Undly_100.add_attribute("StartVal", "UnderlyingStartValue_t_347655055"); // 1
    Undly_100_set.insert("UnderlyingStartValue_t_347655055");
    Undly_100.add_attribute("CurVal", "UnderlyingCurrentValue_t_1786497339"); // 1
    Undly_100_set.insert("UnderlyingCurrentValue_t_1786497339");
    Undly_100.add_attribute("EndVal", "UnderlyingEndValue_t_279981973"); // 1
    Undly_100_set.insert("UnderlyingEndValue_t_279981973");
    Undly_100.add_attribute("AdjQty", "5819080.880000"); // 1
    Undly_100_set.insert("5819080.880000");
    Undly_100.add_attribute("FxRate", "18831831.410000"); // 1
    Undly_100_set.insert("18831831.410000");
    Undly_100.add_attribute("FxRateCalc", "D"); // 1
    Undly_100_set.insert("D");
    Undly_100.add_attribute("CapValu", "UnderlyingCapValue_t_1265299411"); // 1
    Undly_100_set.insert("UnderlyingCapValue_t_1265299411");
    Undly_100.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1508658626"); // 1
    Undly_100_set.insert("UnderlyingSettlMethod_t_1508658626");
    Undly_100.add_attribute("PutCall", "1639411448"); // 1
    Undly_100_set.insert("1639411448");
    all_values.push_back(Undly_100_set);
    all_compo_names.insert("Undly_100_set");

    {
      xml_element UndAID_100{"UndAID"};
      multiset<string> UndAID_100_set;
      UndAID_100.add_attribute("AltID", "UnderlyingSecurityAltID_t_1364592593"); // 2
      UndAID_100_set.insert("UnderlyingSecurityAltID_t_1364592593");
      UndAID_100.add_attribute("AltIDSrc", "K"); // 2
      UndAID_100_set.insert("K");
      all_values.push_back(UndAID_100_set);
      all_compo_names.insert("UndAID_100_set");

      Undly_100.add_element(UndAID_100);
    }
    {
      xml_element Stip_156{"Stip"};
      multiset<string> Stip_156_set;
      Stip_156.add_attribute("Typ", "STRUCT"); // 2
      Stip_156_set.insert("STRUCT");
      Stip_156.add_attribute("Val", "UnderlyingStipValue_t_1937794096"); // 2
      Stip_156_set.insert("UnderlyingStipValue_t_1937794096");
      all_values.push_back(Stip_156_set);
      all_compo_names.insert("Stip_156_set");

      Undly_100.add_element(Stip_156);
    }
    {
      xml_element Pty_397{"Pty"};
      multiset<string> Pty_397_set;
      Pty_397.add_attribute("ID", "UnderlyingInstrumentPartyID_t_893627456"); // 2
      Pty_397_set.insert("UnderlyingInstrumentPartyID_t_893627456");
      Pty_397.add_attribute("Src", "A"); // 2
      Pty_397_set.insert("A");
      Pty_397.add_attribute("R", "16"); // 2
      Pty_397_set.insert("16");
      all_values.push_back(Pty_397_set);
      all_compo_names.insert("Pty_397_set");

      {
        xml_element Sub_397{"Sub"};
        multiset<string> Sub_397_set;
        Sub_397.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1341490175"); // 3
        Sub_397_set.insert("UnderlyingInstrumentPartySubID_t_1341490175");
        Sub_397.add_attribute("Typ", "31"); // 3
        Sub_397_set.insert("31");
        all_values.push_back(Sub_397_set);
        all_compo_names.insert("Sub_397_set");

        Pty_397.add_element(Sub_397);
      }
      Undly_100.add_element(Pty_397);
    }
    elt.add_element(Undly_100);
  } // end Undly
  { // Undly
    xml_element Undly_101{"Undly"};
    multiset<string> Undly_101_set;
    Undly_101.add_attribute("Sym", "UnderlyingSymbol_t_1304242922"); // 1
    Undly_101_set.insert("UnderlyingSymbol_t_1304242922");
    Undly_101.add_attribute("Sfx", "WI"); // 1
    Undly_101_set.insert("WI");
    Undly_101.add_attribute("ID", "UnderlyingSecurityID_t_1683818022"); // 1
    Undly_101_set.insert("UnderlyingSecurityID_t_1683818022");
    Undly_101.add_attribute("Src", "K"); // 1
    Undly_101_set.insert("K");
    Undly_101.add_attribute("Prod", "7"); // 1
    Undly_101_set.insert("7");
    Undly_101.add_attribute("CFI", "UnderlyingCFICode_t_1399899546"); // 1
    Undly_101_set.insert("UnderlyingCFICode_t_1399899546");
    Undly_101.add_attribute("SecTyp", "COFO"); // 1
    Undly_101_set.insert("COFO");
    Undly_101.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_852895073"); // 1
    Undly_101_set.insert("UnderlyingSecuritySubType_t_852895073");
    Undly_101.add_attribute("MMY", "1419922939"); // 1
    Undly_101_set.insert("1419922939");
    Undly_101.add_attribute("Mat", "UnderlyingMaturityDate_t_678066618"); // 1
    Undly_101_set.insert("UnderlyingMaturityDate_t_678066618");
    Undly_101.add_attribute("MatTm", "735128889"); // 1
    Undly_101_set.insert("735128889");
    Undly_101.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1185184317"); // 1
    Undly_101_set.insert("UnderlyingCouponPaymentDate_t_1185184317");
    Undly_101.add_attribute("RestrctTyp", "XR"); // 1
    Undly_101_set.insert("XR");
    Undly_101.add_attribute("Snrty", "SR"); // 1
    Undly_101_set.insert("SR");
    Undly_101.add_attribute("NotlPctOut", "8241980.080000"); // 1
    Undly_101_set.insert("8241980.080000");
    Undly_101.add_attribute("OrigNotlPctOut", "19390019.610000"); // 1
    Undly_101_set.insert("19390019.610000");
    Undly_101.add_attribute("AttchPnt", "16646920.330000"); // 1
    Undly_101_set.insert("16646920.330000");
    Undly_101.add_attribute("DetchPnt", "5598975.010000"); // 1
    Undly_101_set.insert("5598975.010000");
    Undly_101.add_attribute("Issued", "UnderlyingIssueDate_t_1822277700"); // 1
    Undly_101_set.insert("UnderlyingIssueDate_t_1822277700");
    Undly_101.add_attribute("RepoCollSecTyp", "782507796"); // 1
    Undly_101_set.insert("782507796");
    Undly_101.add_attribute("RepoTrm", "2068556127"); // 1
    Undly_101_set.insert("2068556127");
    Undly_101.add_attribute("RepoRt", "13142055.010000"); // 1
    Undly_101_set.insert("13142055.010000");
    Undly_101.add_attribute("Fctr", "21471003.890000"); // 1
    Undly_101_set.insert("21471003.890000");
    Undly_101.add_attribute("CrdRtg", "UnderlyingCreditRating_t_290319884"); // 1
    Undly_101_set.insert("UnderlyingCreditRating_t_290319884");
    Undly_101.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_970828062"); // 1
    Undly_101_set.insert("UnderlyingInstrRegistry_t_970828062");
    Undly_101.add_attribute("Ctry", "1937410837"); // 1
    Undly_101_set.insert("1937410837");
    Undly_101.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1183947340"); // 1
    Undly_101_set.insert("UnderlyingStateOrProvinceOfIssue_t_1183947340");
    Undly_101.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1150840689"); // 1
    Undly_101_set.insert("UnderlyingLocaleOfIssue_t_1150840689");
    Undly_101.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1992506024"); // 1
    Undly_101_set.insert("UnderlyingRedemptionDate_t_1992506024");
    Undly_101.add_attribute("StrkPx", "3779538.680000"); // 1
    Undly_101_set.insert("3779538.680000");
    Undly_101.add_attribute("StrkCcy", "CHF"); // 1
    Undly_101_set.insert("CHF");
    Undly_101.add_attribute("OptA", "1745507445"); // 1
    Undly_101_set.insert("1745507445");
    Undly_101.add_attribute("Mult", "2394765.990000"); // 1
    Undly_101_set.insert("2394765.990000");
    Undly_101.add_attribute("MultTyp", "1"); // 1
    Undly_101_set.insert("1");
    Undly_101.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_101_set.insert("2");
    Undly_101.add_attribute("UOM", "t"); // 1
    Undly_101_set.insert("t");
    Undly_101.add_attribute("UOMQty", "13915657.740000"); // 1
    Undly_101_set.insert("13915657.740000");
    Undly_101.add_attribute("PxUOM", "USD"); // 1
    Undly_101_set.insert("USD");
    Undly_101.add_attribute("PxUOMQty", "9118154.370000"); // 1
    Undly_101_set.insert("9118154.370000");
    Undly_101.add_attribute("TmUnit", "H"); // 1
    Undly_101_set.insert("H");
    Undly_101.add_attribute("ExerStyle", "2"); // 1
    Undly_101_set.insert("2");
    Undly_101.add_attribute("CpnRt", "20969997.540000"); // 1
    Undly_101_set.insert("20969997.540000");
    Undly_101.add_attribute("Exch", "UnderlyingSecurityExchange_t_1581168732"); // 1
    Undly_101_set.insert("UnderlyingSecurityExchange_t_1581168732");
    Undly_101.add_attribute("Issr", "UnderlyingIssuer_t_473847343"); // 1
    Undly_101_set.insert("UnderlyingIssuer_t_473847343");
    Undly_101.add_attribute("EncUndIssrLen", "773714115"); // 1
    Undly_101_set.insert("773714115");
    Undly_101.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1372687045"); // 1
    Undly_101_set.insert("EncodedUnderlyingIssuer_t_1372687045");
    Undly_101.add_attribute("Desc", "UnderlyingSecurityDesc_t_2138539376"); // 1
    Undly_101_set.insert("UnderlyingSecurityDesc_t_2138539376");
    Undly_101.add_attribute("EncUndSecDescLen", "1333611616"); // 1
    Undly_101_set.insert("1333611616");
    Undly_101.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1047481097"); // 1
    Undly_101_set.insert("EncodedUnderlyingSecurityDesc_t_1047481097");
    Undly_101.add_attribute("CPPgm", "UnderlyingCPProgram_t_773563524"); // 1
    Undly_101_set.insert("UnderlyingCPProgram_t_773563524");
    Undly_101.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1254684096"); // 1
    Undly_101_set.insert("UnderlyingCPRegType_t_1254684096");
    Undly_101.add_attribute("AllocPct", "2142029.500000"); // 1
    Undly_101_set.insert("2142029.500000");
    Undly_101.add_attribute("Ccy", "GBP"); // 1
    Undly_101_set.insert("GBP");
    Undly_101.add_attribute("Qty", "11850310.120000"); // 1
    Undly_101_set.insert("11850310.120000");
    Undly_101.add_attribute("SettlTyp", "2"); // 1
    Undly_101_set.insert("2");
    Undly_101.add_attribute("CashAmt", "UnderlyingCashAmount_t_581467672"); // 1
    Undly_101_set.insert("UnderlyingCashAmount_t_581467672");
    Undly_101.add_attribute("CashTyp", "FIXED"); // 1
    Undly_101_set.insert("FIXED");
    Undly_101.add_attribute("Px", "4081298.320000"); // 1
    Undly_101_set.insert("4081298.320000");
    Undly_101.add_attribute("DirtPx", "9594215.400000"); // 1
    Undly_101_set.insert("9594215.400000");
    Undly_101.add_attribute("EndPx", "8915302.780000"); // 1
    Undly_101_set.insert("8915302.780000");
    Undly_101.add_attribute("StartVal", "UnderlyingStartValue_t_1557395131"); // 1
    Undly_101_set.insert("UnderlyingStartValue_t_1557395131");
    Undly_101.add_attribute("CurVal", "UnderlyingCurrentValue_t_557445337"); // 1
    Undly_101_set.insert("UnderlyingCurrentValue_t_557445337");
    Undly_101.add_attribute("EndVal", "UnderlyingEndValue_t_1131006877"); // 1
    Undly_101_set.insert("UnderlyingEndValue_t_1131006877");
    Undly_101.add_attribute("AdjQty", "20117693.720000"); // 1
    Undly_101_set.insert("20117693.720000");
    Undly_101.add_attribute("FxRate", "5079684.220000"); // 1
    Undly_101_set.insert("5079684.220000");
    Undly_101.add_attribute("FxRateCalc", "D"); // 1
    Undly_101_set.insert("D");
    Undly_101.add_attribute("CapValu", "UnderlyingCapValue_t_1255851498"); // 1
    Undly_101_set.insert("UnderlyingCapValue_t_1255851498");
    Undly_101.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1311386579"); // 1
    Undly_101_set.insert("UnderlyingSettlMethod_t_1311386579");
    Undly_101.add_attribute("PutCall", "1534714812"); // 1
    Undly_101_set.insert("1534714812");
    all_values.push_back(Undly_101_set);
    all_compo_names.insert("Undly_101_set");

    {
      xml_element UndAID_101{"UndAID"};
      multiset<string> UndAID_101_set;
      UndAID_101.add_attribute("AltID", "UnderlyingSecurityAltID_t_1178000243"); // 2
      UndAID_101_set.insert("UnderlyingSecurityAltID_t_1178000243");
      UndAID_101.add_attribute("AltIDSrc", "B"); // 2
      UndAID_101_set.insert("B");
      all_values.push_back(UndAID_101_set);
      all_compo_names.insert("UndAID_101_set");

      Undly_101.add_element(UndAID_101);
    }
    {
      xml_element Stip_157{"Stip"};
      multiset<string> Stip_157_set;
      Stip_157.add_attribute("Typ", "PROD"); // 2
      Stip_157_set.insert("PROD");
      Stip_157.add_attribute("Val", "UnderlyingStipValue_t_611685327"); // 2
      Stip_157_set.insert("UnderlyingStipValue_t_611685327");
      all_values.push_back(Stip_157_set);
      all_compo_names.insert("Stip_157_set");

      Undly_101.add_element(Stip_157);
    }
    {
      xml_element Pty_398{"Pty"};
      multiset<string> Pty_398_set;
      Pty_398.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1176297322"); // 2
      Pty_398_set.insert("UnderlyingInstrumentPartyID_t_1176297322");
      Pty_398.add_attribute("Src", "C"); // 2
      Pty_398_set.insert("C");
      Pty_398.add_attribute("R", "55"); // 2
      Pty_398_set.insert("55");
      all_values.push_back(Pty_398_set);
      all_compo_names.insert("Pty_398_set");

      {
        xml_element Sub_398{"Sub"};
        multiset<string> Sub_398_set;
        Sub_398.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1167353050"); // 3
        Sub_398_set.insert("UnderlyingInstrumentPartySubID_t_1167353050");
        Sub_398.add_attribute("Typ", "32"); // 3
        Sub_398_set.insert("32");
        all_values.push_back(Sub_398_set);
        all_compo_names.insert("Sub_398_set");

        Pty_398.add_element(Sub_398);
      }
      Undly_101.add_element(Pty_398);
    }
    elt.add_element(Undly_101);
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
