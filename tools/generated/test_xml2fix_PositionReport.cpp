#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_454835585"); // 0
  PositionReport_message_t_0.insert("PosMaintRptID_t_454835585");
  elt.add_attribute("ReqID", "PosReqID_t_616838182"); // 0
  PositionReport_message_t_0.insert("PosReqID_t_616838182");
  elt.add_attribute("ReqTyp", "2"); // 0
  PositionReport_message_t_0.insert("2");
  elt.add_attribute("SubReqTyp", "2"); // 0
  PositionReport_message_t_0.insert("2");
  elt.add_attribute("TotRpts", "508441894"); // 0
  PositionReport_message_t_0.insert("508441894");
  elt.add_attribute("Rslt", "2"); // 0
  PositionReport_message_t_0.insert("2");
  elt.add_attribute("Unsol", "Y"); // 0
  PositionReport_message_t_0.insert("Y");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_153938613"); // 0
  PositionReport_message_t_0.insert("ClearingBusinessDate_t_153938613");
  elt.add_attribute("SetSesID", "RTH"); // 0
  PositionReport_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_102259457"); // 0
  PositionReport_message_t_0.insert("SettlSessSubID_t_102259457");
  elt.add_attribute("PxTyp", "13"); // 0
  PositionReport_message_t_0.insert("13");
  elt.add_attribute("SettlCcy", "EUR"); // 0
  PositionReport_message_t_0.insert("EUR");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_23598239"); // 0
  PositionReport_message_t_0.insert("MessageEventSource_t_23598239");
  elt.add_attribute("Acct", "Account_t_161598118"); // 0
  PositionReport_message_t_0.insert("Account_t_161598118");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  PositionReport_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "6"); // 0
  PositionReport_message_t_0.insert("6");
  elt.add_attribute("Ccy", "JPY"); // 0
  PositionReport_message_t_0.insert("JPY");
  elt.add_attribute("SetPx", "15700119.660000"); // 0
  PositionReport_message_t_0.insert("15700119.660000");
  elt.add_attribute("SetPxTyp", "1"); // 0
  PositionReport_message_t_0.insert("1");
  elt.add_attribute("PriSetPx", "16332265.950000"); // 0
  PositionReport_message_t_0.insert("16332265.950000");
  elt.add_attribute("MtchStat", "2"); // 0
  PositionReport_message_t_0.insert("2");
  elt.add_attribute("RegStat", "N"); // 0
  PositionReport_message_t_0.insert("N");
  elt.add_attribute("DlvDt", "DeliveryDate_t_951976402"); // 0
  PositionReport_message_t_0.insert("DeliveryDate_t_951976402");
  elt.add_attribute("ModelTyp", "0"); // 0
  PositionReport_message_t_0.insert("0");
  elt.add_attribute("PxDelta", "9969818.780000"); // 0
  PositionReport_message_t_0.insert("9969818.780000");
  elt.add_attribute("Txt", "Text_t_1306677937"); // 0
  PositionReport_message_t_0.insert("Text_t_1306677937");
  elt.add_attribute("EncTxtLen", "1293084449"); // 0
  PositionReport_message_t_0.insert("1293084449");
  elt.add_attribute("EncTxt", "EncodedText_t_694554074"); // 0
  PositionReport_message_t_0.insert("EncodedText_t_694554074");
  all_values.push_back(PositionReport_message_t_0);
  all_compo_names.insert("PositionReport_message_t");

  { // Hdr
    xml_element Hdr_67{"Hdr"};
    multiset<string> Hdr_67_set;
    Hdr_67.add_attribute("SeqNum", "2022506729"); // 1
    Hdr_67_set.insert("2022506729");
    Hdr_67.add_attribute("SID", "SenderCompID_t_1747920034"); // 1
    Hdr_67_set.insert("SenderCompID_t_1747920034");
    Hdr_67.add_attribute("TID", "TargetCompID_t_1311392256"); // 1
    Hdr_67_set.insert("TargetCompID_t_1311392256");
    Hdr_67.add_attribute("OBID", "OnBehalfOfCompID_t_483532194"); // 1
    Hdr_67_set.insert("OnBehalfOfCompID_t_483532194");
    Hdr_67.add_attribute("D2ID", "DeliverToCompID_t_1510437679"); // 1
    Hdr_67_set.insert("DeliverToCompID_t_1510437679");
    Hdr_67.add_attribute("SSub", "SenderSubID_t_1819834150"); // 1
    Hdr_67_set.insert("SenderSubID_t_1819834150");
    Hdr_67.add_attribute("SLoc", "SenderLocationID_t_1661387811"); // 1
    Hdr_67_set.insert("SenderLocationID_t_1661387811");
    Hdr_67.add_attribute("TSub", "TargetSubID_t_1766442214"); // 1
    Hdr_67_set.insert("TargetSubID_t_1766442214");
    Hdr_67.add_attribute("TLoc", "TargetLocationID_t_1973772763"); // 1
    Hdr_67_set.insert("TargetLocationID_t_1973772763");
    Hdr_67.add_attribute("OBSub", "OnBehalfOfSubID_t_207964104"); // 1
    Hdr_67_set.insert("OnBehalfOfSubID_t_207964104");
    Hdr_67.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1868701672"); // 1
    Hdr_67_set.insert("OnBehalfOfLocationID_t_1868701672");
    Hdr_67.add_attribute("D2Sub", "DeliverToSubID_t_464637005"); // 1
    Hdr_67_set.insert("DeliverToSubID_t_464637005");
    Hdr_67.add_attribute("D2Loc", "DeliverToLocationID_t_816599159"); // 1
    Hdr_67_set.insert("DeliverToLocationID_t_816599159");
    Hdr_67.add_attribute("PosDup", "Y"); // 1
    Hdr_67_set.insert("Y");
    Hdr_67.add_attribute("PosRsnd", "N"); // 1
    Hdr_67_set.insert("N");
    Hdr_67.add_attribute("Snt", "SendingTime_t_978197277"); // 1
    Hdr_67_set.insert("SendingTime_t_978197277");
    Hdr_67.add_attribute("OrigSnt", "OrigSendingTime_t_1177058905"); // 1
    Hdr_67_set.insert("OrigSendingTime_t_1177058905");
    Hdr_67.add_attribute("MsgEncd", "MessageEncoding_t_973886842"); // 1
    Hdr_67_set.insert("MessageEncoding_t_973886842");
    all_values.push_back(Hdr_67_set);
    all_compo_names.insert("Hdr_67_set");

    {
      xml_element Hop_67{"Hop"};
      multiset<string> Hop_67_set;
      Hop_67.add_attribute("ID", "HopCompID_t_2145842258"); // 2
      Hop_67_set.insert("HopCompID_t_2145842258");
      Hop_67.add_attribute("Ref", "735803848"); // 2
      Hop_67_set.insert("735803848");
      Hop_67.add_attribute("Snt", "HopSendingTime_t_396415160"); // 2
      Hop_67_set.insert("HopSendingTime_t_396415160");
      all_values.push_back(Hop_67_set);
      all_compo_names.insert("Hop_67_set");

      Hdr_67.add_element(Hop_67);
    }
    elt.add_element(Hdr_67);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_11{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_11_set;
    ApplSeqCtrl_11.add_attribute("ApplID", "ApplID_t_876430438"); // 1
    ApplSeqCtrl_11_set.insert("ApplID_t_876430438");
    ApplSeqCtrl_11.add_attribute("ApplSeqNum", "221546795"); // 1
    ApplSeqCtrl_11_set.insert("221546795");
    ApplSeqCtrl_11.add_attribute("ApplLastSeqNum", "935270101"); // 1
    ApplSeqCtrl_11_set.insert("935270101");
    ApplSeqCtrl_11.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_11_set.insert("true");
    all_values.push_back(ApplSeqCtrl_11_set);
    all_compo_names.insert("ApplSeqCtrl_11_set");

    elt.add_element(ApplSeqCtrl_11);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_318{"Pty"};
    multiset<string> Pty_318_set;
    Pty_318.add_attribute("ID", "PartyID_t_883512173"); // 1
    Pty_318_set.insert("PartyID_t_883512173");
    Pty_318.add_attribute("Src", "8"); // 1
    Pty_318_set.insert("8");
    Pty_318.add_attribute("R", "42"); // 1
    Pty_318_set.insert("42");
    all_values.push_back(Pty_318_set);
    all_compo_names.insert("Pty_318_set");

    {
      xml_element Sub_318{"Sub"};
      multiset<string> Sub_318_set;
      Sub_318.add_attribute("ID", "PartySubID_t_29112974"); // 2
      Sub_318_set.insert("PartySubID_t_29112974");
      Sub_318.add_attribute("Typ", "18"); // 2
      Sub_318_set.insert("18");
      all_values.push_back(Sub_318_set);
      all_compo_names.insert("Sub_318_set");

      Pty_318.add_element(Sub_318);
    }
    elt.add_element(Pty_318);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_57{"Instrmt"};
    multiset<string> Instrmt_57_set;
    Instrmt_57.add_attribute("Sym", "Symbol_t_207740568"); // 1
    Instrmt_57_set.insert("Symbol_t_207740568");
    Instrmt_57.add_attribute("Sfx", "CD"); // 1
    Instrmt_57_set.insert("CD");
    Instrmt_57.add_attribute("ID", "SecurityID_t_1150187330"); // 1
    Instrmt_57_set.insert("SecurityID_t_1150187330");
    Instrmt_57.add_attribute("Src", "5"); // 1
    Instrmt_57_set.insert("5");
    Instrmt_57.add_attribute("Prod", "7"); // 1
    Instrmt_57_set.insert("7");
    Instrmt_57.add_attribute("ProdCmplx", "ProductComplex_t_822537832"); // 1
    Instrmt_57_set.insert("ProductComplex_t_822537832");
    Instrmt_57.add_attribute("SecGrp", "SecurityGroup_t_205176925"); // 1
    Instrmt_57_set.insert("SecurityGroup_t_205176925");
    Instrmt_57.add_attribute("CFI", "CFICode_t_758945606"); // 1
    Instrmt_57_set.insert("CFICode_t_758945606");
    Instrmt_57.add_attribute("SecTyp", "PS"); // 1
    Instrmt_57_set.insert("PS");
    Instrmt_57.add_attribute("SubTyp", "SecuritySubType_t_413141030"); // 1
    Instrmt_57_set.insert("SecuritySubType_t_413141030");
    Instrmt_57.add_attribute("MMY", "480163630"); // 1
    Instrmt_57_set.insert("480163630");
    Instrmt_57.add_attribute("MatDt", "MaturityDate_t_1113463953"); // 1
    Instrmt_57_set.insert("MaturityDate_t_1113463953");
    Instrmt_57.add_attribute("MatTm", "1229740189"); // 1
    Instrmt_57_set.insert("1229740189");
    Instrmt_57.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1872476581"); // 1
    Instrmt_57_set.insert("SettleOnOpenFlag_t_1872476581");
    Instrmt_57.add_attribute("AsgnMeth", "1601699197"); // 1
    Instrmt_57_set.insert("1601699197");
    Instrmt_57.add_attribute("Status", "2"); // 1
    Instrmt_57_set.insert("2");
    Instrmt_57.add_attribute("CpnPmt", "CouponPaymentDate_t_902051839"); // 1
    Instrmt_57_set.insert("CouponPaymentDate_t_902051839");
    Instrmt_57.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_57_set.insert("XR");
    Instrmt_57.add_attribute("Snrty", "SD"); // 1
    Instrmt_57_set.insert("SD");
    Instrmt_57.add_attribute("NotlPctOut", "16378556.870000"); // 1
    Instrmt_57_set.insert("16378556.870000");
    Instrmt_57.add_attribute("OrigNotlPctOut", "8245175.510000"); // 1
    Instrmt_57_set.insert("8245175.510000");
    Instrmt_57.add_attribute("AttchPnt", "9352428.670000"); // 1
    Instrmt_57_set.insert("9352428.670000");
    Instrmt_57.add_attribute("DetchPnt", "18594024.820000"); // 1
    Instrmt_57_set.insert("18594024.820000");
    Instrmt_57.add_attribute("Issued", "IssueDate_t_1759787652"); // 1
    Instrmt_57_set.insert("IssueDate_t_1759787652");
    Instrmt_57.add_attribute("RepoCollSecTyp", "1229985635"); // 1
    Instrmt_57_set.insert("1229985635");
    Instrmt_57.add_attribute("RepoTrm", "885442031"); // 1
    Instrmt_57_set.insert("885442031");
    Instrmt_57.add_attribute("RepoRt", "4958161.770000"); // 1
    Instrmt_57_set.insert("4958161.770000");
    Instrmt_57.add_attribute("Fctr", "3742266.340000"); // 1
    Instrmt_57_set.insert("3742266.340000");
    Instrmt_57.add_attribute("CrdRtg", "CreditRating_t_1218159518"); // 1
    Instrmt_57_set.insert("CreditRating_t_1218159518");
    Instrmt_57.add_attribute("Rgstry", "InstrRegistry_t_524929151"); // 1
    Instrmt_57_set.insert("InstrRegistry_t_524929151");
    Instrmt_57.add_attribute("IssuCtry", "213021708"); // 1
    Instrmt_57_set.insert("213021708");
    Instrmt_57.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1425900086"); // 1
    Instrmt_57_set.insert("StateOrProvinceOfIssue_t_1425900086");
    Instrmt_57.add_attribute("Lcl", "LocaleOfIssue_t_154478512"); // 1
    Instrmt_57_set.insert("LocaleOfIssue_t_154478512");
    Instrmt_57.add_attribute("Redeem", "RedemptionDate_t_1363209038"); // 1
    Instrmt_57_set.insert("RedemptionDate_t_1363209038");
    Instrmt_57.add_attribute("StrkPx", "21171728.490000"); // 1
    Instrmt_57_set.insert("21171728.490000");
    Instrmt_57.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_57_set.insert("JPY");
    Instrmt_57.add_attribute("StrkMult", "1748661.260000"); // 1
    Instrmt_57_set.insert("1748661.260000");
    Instrmt_57.add_attribute("StrkValu", "20534111.580000"); // 1
    Instrmt_57_set.insert("20534111.580000");
    Instrmt_57.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_57_set.insert("3");
    Instrmt_57.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_57_set.insert("2");
    Instrmt_57.add_attribute("StrkPxBndryPrcsn", "3860911.410000"); // 1
    Instrmt_57_set.insert("3860911.410000");
    Instrmt_57.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_57_set.insert("4");
    Instrmt_57.add_attribute("OptAt", "1817747346"); // 1
    Instrmt_57_set.insert("1817747346");
    Instrmt_57.add_attribute("Mult", "1110840.740000"); // 1
    Instrmt_57_set.insert("1110840.740000");
    Instrmt_57.add_attribute("MultTyp", "2"); // 1
    Instrmt_57_set.insert("2");
    Instrmt_57.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_57_set.insert("0");
    Instrmt_57.add_attribute("MinPxIncr", "10131359.130000"); // 1
    Instrmt_57_set.insert("10131359.130000");
    Instrmt_57.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1682872064"); // 1
    Instrmt_57_set.insert("MinPriceIncrementAmount_t_1682872064");
    Instrmt_57.add_attribute("UOM", "USD"); // 1
    Instrmt_57_set.insert("USD");
    Instrmt_57.add_attribute("UOMQty", "5035079.520000"); // 1
    Instrmt_57_set.insert("5035079.520000");
    Instrmt_57.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_57_set.insert("MMbbl");
    Instrmt_57.add_attribute("PxUOMQty", "7247728.130000"); // 1
    Instrmt_57_set.insert("7247728.130000");
    Instrmt_57.add_attribute("SettlMeth", "C"); // 1
    Instrmt_57_set.insert("C");
    Instrmt_57.add_attribute("ExerStyle", "0"); // 1
    Instrmt_57_set.insert("0");
    Instrmt_57.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_57_set.insert("2");
    Instrmt_57.add_attribute("OptPayAmt", "OptPayoutAmount_t_1100868818"); // 1
    Instrmt_57_set.insert("OptPayoutAmount_t_1100868818");
    Instrmt_57.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_57_set.insert("INT");
    Instrmt_57.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_57_set.insert("EQTY");
    Instrmt_57.add_attribute("ListMeth", "0"); // 1
    Instrmt_57_set.insert("0");
    Instrmt_57.add_attribute("CapPx", "9929553.010000"); // 1
    Instrmt_57_set.insert("9929553.010000");
    Instrmt_57.add_attribute("FlrPx", "3945231.430000"); // 1
    Instrmt_57_set.insert("3945231.430000");
    Instrmt_57.add_attribute("PutCall", "1"); // 1
    Instrmt_57_set.insert("1");
    Instrmt_57.add_attribute("FlexInd", "false"); // 1
    Instrmt_57_set.insert("false");
    Instrmt_57.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_57_set.insert("false");
    Instrmt_57.add_attribute("TmUnit", "H"); // 1
    Instrmt_57_set.insert("H");
    Instrmt_57.add_attribute("CpnRt", "2944157.170000"); // 1
    Instrmt_57_set.insert("2944157.170000");
    Instrmt_57.add_attribute("Exch", "SecurityExchange_t_1795995403"); // 1
    Instrmt_57_set.insert("SecurityExchange_t_1795995403");
    Instrmt_57.add_attribute("PosLmt", "1742000102"); // 1
    Instrmt_57_set.insert("1742000102");
    Instrmt_57.add_attribute("NTPosLmt", "200343228"); // 1
    Instrmt_57_set.insert("200343228");
    Instrmt_57.add_attribute("Issr", "Issuer_t_335601926"); // 1
    Instrmt_57_set.insert("Issuer_t_335601926");
    Instrmt_57.add_attribute("EncIssrLen", "182523611"); // 1
    Instrmt_57_set.insert("182523611");
    Instrmt_57.add_attribute("EncIssr", "EncodedIssuer_t_586434369"); // 1
    Instrmt_57_set.insert("EncodedIssuer_t_586434369");
    Instrmt_57.add_attribute("Desc", "SecurityDesc_t_2136156049"); // 1
    Instrmt_57_set.insert("SecurityDesc_t_2136156049");
    Instrmt_57.add_attribute("EncSecDescLen", "2000270957"); // 1
    Instrmt_57_set.insert("2000270957");
    Instrmt_57.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_697518443"); // 1
    Instrmt_57_set.insert("EncodedSecurityDesc_t_697518443");
    Instrmt_57.add_attribute("Pool", "Pool_t_1243442074"); // 1
    Instrmt_57_set.insert("Pool_t_1243442074");
    Instrmt_57.add_attribute("CSetMo", "1730988474"); // 1
    Instrmt_57_set.insert("1730988474");
    Instrmt_57.add_attribute("CPPgm", "1"); // 1
    Instrmt_57_set.insert("1");
    Instrmt_57.add_attribute("CPRegT", "CPRegType_t_778830491"); // 1
    Instrmt_57_set.insert("CPRegType_t_778830491");
    Instrmt_57.add_attribute("Dated", "DatedDate_t_1520518420"); // 1
    Instrmt_57_set.insert("DatedDate_t_1520518420");
    Instrmt_57.add_attribute("IntAcrl", "InterestAccrualDate_t_66678661"); // 1
    Instrmt_57_set.insert("InterestAccrualDate_t_66678661");
    all_values.push_back(Instrmt_57_set);
    all_compo_names.insert("Instrmt_57_set");

    {
      xml_element AID_60{"AID"};
      multiset<string> AID_60_set;
      AID_60.add_attribute("AltID", "SecurityAltID_t_1138736459"); // 2
      AID_60_set.insert("SecurityAltID_t_1138736459");
      AID_60.add_attribute("AltIDSrc", "8"); // 2
      AID_60_set.insert("8");
      all_values.push_back(AID_60_set);
      all_compo_names.insert("AID_60_set");

      Instrmt_57.add_element(AID_60);
    }
    {
      xml_element SecXML_60{"SecXML"};
      multiset<string> SecXML_60_set;
      SecXML_60.add_attribute("Schema", "SecurityXMLSchema_t_282105448"); // 2
      SecXML_60_set.insert("SecurityXMLSchema_t_282105448");
      all_values.push_back(SecXML_60_set);
      all_compo_names.insert("SecXML_60_set");

      Instrmt_57.add_element(SecXML_60);
    }
    {
      xml_element Evnt_60{"Evnt"};
      multiset<string> Evnt_60_set;
      Evnt_60.add_attribute("EventTyp", "10"); // 2
      Evnt_60_set.insert("10");
      Evnt_60.add_attribute("Dt", "EventDate_t_2052566033"); // 2
      Evnt_60_set.insert("EventDate_t_2052566033");
      Evnt_60.add_attribute("Tm", "EventTime_t_1382974266"); // 2
      Evnt_60_set.insert("EventTime_t_1382974266");
      Evnt_60.add_attribute("Px", "15789725.810000"); // 2
      Evnt_60_set.insert("15789725.810000");
      Evnt_60.add_attribute("Txt", "EventText_t_86583820"); // 2
      Evnt_60_set.insert("EventText_t_86583820");
      all_values.push_back(Evnt_60_set);
      all_compo_names.insert("Evnt_60_set");

      Instrmt_57.add_element(Evnt_60);
    }
    {
      xml_element Pty_319{"Pty"};
      multiset<string> Pty_319_set;
      Pty_319.add_attribute("ID", "InstrumentPartyID_t_1554518954"); // 2
      Pty_319_set.insert("InstrumentPartyID_t_1554518954");
      Pty_319.add_attribute("Src", "6"); // 2
      Pty_319_set.insert("6");
      Pty_319.add_attribute("R", "73"); // 2
      Pty_319_set.insert("73");
      all_values.push_back(Pty_319_set);
      all_compo_names.insert("Pty_319_set");

      {
        xml_element Sub_319{"Sub"};
        multiset<string> Sub_319_set;
        Sub_319.add_attribute("ID", "InstrumentPartySubID_t_1004480081"); // 3
        Sub_319_set.insert("InstrumentPartySubID_t_1004480081");
        Sub_319.add_attribute("Typ", "13"); // 3
        Sub_319_set.insert("13");
        all_values.push_back(Sub_319_set);
        all_compo_names.insert("Sub_319_set");

        Pty_319.add_element(Sub_319);
      }
      Instrmt_57.add_element(Pty_319);
    }
    {
      xml_element CmplxEvnt_57{"CmplxEvnt"};
      multiset<string> CmplxEvnt_57_set;
      CmplxEvnt_57.add_attribute("Typ", "7"); // 2
      CmplxEvnt_57_set.insert("7");
      CmplxEvnt_57.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_424130409"); // 2
      CmplxEvnt_57_set.insert("ComplexOptPayoutAmount_t_424130409");
      CmplxEvnt_57.add_attribute("Px", "18662937.660000"); // 2
      CmplxEvnt_57_set.insert("18662937.660000");
      CmplxEvnt_57.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_57_set.insert("1");
      CmplxEvnt_57.add_attribute("PxBndryPrcsn", "186468.640000"); // 2
      CmplxEvnt_57_set.insert("186468.640000");
      CmplxEvnt_57.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_57_set.insert("1");
      CmplxEvnt_57.add_attribute("Cond", "1"); // 2
      CmplxEvnt_57_set.insert("1");
      all_values.push_back(CmplxEvnt_57_set);
      all_compo_names.insert("CmplxEvnt_57_set");

      {
        xml_element EvntDts_57{"EvntDts"};
        multiset<string> EvntDts_57_set;
        EvntDts_57.add_attribute("StartDt", "ComplexEventStartDate_t_201170475"); // 3
        EvntDts_57_set.insert("ComplexEventStartDate_t_201170475");
        EvntDts_57.add_attribute("EndDt", "ComplexEventEndDate_t_505587715"); // 3
        EvntDts_57_set.insert("ComplexEventEndDate_t_505587715");
        all_values.push_back(EvntDts_57_set);
        all_compo_names.insert("EvntDts_57_set");

        {
          xml_element EvntTms_57{"EvntTms"};
          multiset<string> EvntTms_57_set;
          EvntTms_57.add_attribute("StartTm", "64141579"); // 4
          EvntTms_57_set.insert("64141579");
          EvntTms_57.add_attribute("EndTm", "53957784"); // 4
          EvntTms_57_set.insert("53957784");
          all_values.push_back(EvntTms_57_set);
          all_compo_names.insert("EvntTms_57_set");

          EvntDts_57.add_element(EvntTms_57);
        }
        CmplxEvnt_57.add_element(EvntDts_57);
      }
      Instrmt_57.add_element(CmplxEvnt_57);
    }
    elt.add_element(Instrmt_57);
  } // end Instrmt
  { // Leg
    xml_element Leg_67{"Leg"};
    multiset<string> Leg_67_set;
    Leg_67.add_attribute("Sym", "LegSymbol_t_1307583654"); // 1
    Leg_67_set.insert("LegSymbol_t_1307583654");
    Leg_67.add_attribute("Sfx", "CD"); // 1
    Leg_67_set.insert("CD");
    Leg_67.add_attribute("ID", "LegSecurityID_t_766276867"); // 1
    Leg_67_set.insert("LegSecurityID_t_766276867");
    Leg_67.add_attribute("Src", "E"); // 1
    Leg_67_set.insert("E");
    Leg_67.add_attribute("Prod", "8"); // 1
    Leg_67_set.insert("8");
    Leg_67.add_attribute("CFI", "LegCFICode_t_832955529"); // 1
    Leg_67_set.insert("LegCFICode_t_832955529");
    Leg_67.add_attribute("SecTyp", "OOP"); // 1
    Leg_67_set.insert("OOP");
    Leg_67.add_attribute("SecSubTyp", "LegSecuritySubType_t_1255788615"); // 1
    Leg_67_set.insert("LegSecuritySubType_t_1255788615");
    Leg_67.add_attribute("MMY", "1115060977"); // 1
    Leg_67_set.insert("1115060977");
    Leg_67.add_attribute("Mat", "LegMaturityDate_t_41129739"); // 1
    Leg_67_set.insert("LegMaturityDate_t_41129739");
    Leg_67.add_attribute("MatTm", "1160871000"); // 1
    Leg_67_set.insert("1160871000");
    Leg_67.add_attribute("CpnPmt", "LegCouponPaymentDate_t_350551595"); // 1
    Leg_67_set.insert("LegCouponPaymentDate_t_350551595");
    Leg_67.add_attribute("Issued", "LegIssueDate_t_1620102321"); // 1
    Leg_67_set.insert("LegIssueDate_t_1620102321");
    Leg_67.add_attribute("RepoCollSecTyp", "1247454821"); // 1
    Leg_67_set.insert("1247454821");
    Leg_67.add_attribute("RepoTrm", "1905070549"); // 1
    Leg_67_set.insert("1905070549");
    Leg_67.add_attribute("RepoRt", "20445465.560000"); // 1
    Leg_67_set.insert("20445465.560000");
    Leg_67.add_attribute("Fctr", "17285617.840000"); // 1
    Leg_67_set.insert("17285617.840000");
    Leg_67.add_attribute("CrdRtg", "LegCreditRating_t_762066983"); // 1
    Leg_67_set.insert("LegCreditRating_t_762066983");
    Leg_67.add_attribute("Rgstry", "LegInstrRegistry_t_1468940956"); // 1
    Leg_67_set.insert("LegInstrRegistry_t_1468940956");
    Leg_67.add_attribute("Ctry", "1819917281"); // 1
    Leg_67_set.insert("1819917281");
    Leg_67.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1186197392"); // 1
    Leg_67_set.insert("LegStateOrProvinceOfIssue_t_1186197392");
    Leg_67.add_attribute("Lcl", "LegLocaleOfIssue_t_1187751074"); // 1
    Leg_67_set.insert("LegLocaleOfIssue_t_1187751074");
    Leg_67.add_attribute("Redeem", "LegRedemptionDate_t_1559784533"); // 1
    Leg_67_set.insert("LegRedemptionDate_t_1559784533");
    Leg_67.add_attribute("Strk", "12048442.560000"); // 1
    Leg_67_set.insert("12048442.560000");
    Leg_67.add_attribute("StrkCcy", "EUR"); // 1
    Leg_67_set.insert("EUR");
    Leg_67.add_attribute("OptA", "1406014731"); // 1
    Leg_67_set.insert("1406014731");
    Leg_67.add_attribute("Cmult", "16124921.350000"); // 1
    Leg_67_set.insert("16124921.350000");
    Leg_67.add_attribute("MultTyp", "2"); // 1
    Leg_67_set.insert("2");
    Leg_67.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_67_set.insert("0");
    Leg_67.add_attribute("UOM", "t"); // 1
    Leg_67_set.insert("t");
    Leg_67.add_attribute("UOMQty", "8594952.960000"); // 1
    Leg_67_set.insert("8594952.960000");
    Leg_67.add_attribute("PxUOM", "lbs"); // 1
    Leg_67_set.insert("lbs");
    Leg_67.add_attribute("PxUOMQty", "14343915.130000"); // 1
    Leg_67_set.insert("14343915.130000");
    Leg_67.add_attribute("TmUnit", "Wk"); // 1
    Leg_67_set.insert("Wk");
    Leg_67.add_attribute("ExerStyle", "1"); // 1
    Leg_67_set.insert("1");
    Leg_67.add_attribute("CpnRt", "1198633.940000"); // 1
    Leg_67_set.insert("1198633.940000");
    Leg_67.add_attribute("Exch", "LegSecurityExchange_t_1876092749"); // 1
    Leg_67_set.insert("LegSecurityExchange_t_1876092749");
    Leg_67.add_attribute("Issr", "LegIssuer_t_1363721122"); // 1
    Leg_67_set.insert("LegIssuer_t_1363721122");
    Leg_67.add_attribute("EncLegIssrLen", "1234924371"); // 1
    Leg_67_set.insert("1234924371");
    Leg_67.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1917222489"); // 1
    Leg_67_set.insert("EncodedLegIssuer_t_1917222489");
    Leg_67.add_attribute("Desc", "LegSecurityDesc_t_377108475"); // 1
    Leg_67_set.insert("LegSecurityDesc_t_377108475");
    Leg_67.add_attribute("EncLegSecDescLen", "1585475966"); // 1
    Leg_67_set.insert("1585475966");
    Leg_67.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1389841162"); // 1
    Leg_67_set.insert("EncodedLegSecurityDesc_t_1389841162");
    Leg_67.add_attribute("RatioQty", "16245632.960000"); // 1
    Leg_67_set.insert("16245632.960000");
    Leg_67.add_attribute("Side", "5"); // 1
    Leg_67_set.insert("5");
    Leg_67.add_attribute("Ccy", "JPY"); // 1
    Leg_67_set.insert("JPY");
    Leg_67.add_attribute("Pool", "LegPool_t_2105129851"); // 1
    Leg_67_set.insert("LegPool_t_2105129851");
    Leg_67.add_attribute("Dated", "LegDatedDate_t_608361378"); // 1
    Leg_67_set.insert("LegDatedDate_t_608361378");
    Leg_67.add_attribute("CSetMo", "878075065"); // 1
    Leg_67_set.insert("878075065");
    Leg_67.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1143843595"); // 1
    Leg_67_set.insert("LegInterestAccrualDate_t_1143843595");
    Leg_67.add_attribute("PutCall", "1796112453"); // 1
    Leg_67_set.insert("1796112453");
    Leg_67.add_attribute("LegOptionRatio", "2903759.500000"); // 1
    Leg_67_set.insert("2903759.500000");
    Leg_67.add_attribute("Px", "2012042.040000"); // 1
    Leg_67_set.insert("2012042.040000");
    all_values.push_back(Leg_67_set);
    all_compo_names.insert("Leg_67_set");

    {
      xml_element LegAID_67{"LegAID"};
      multiset<string> LegAID_67_set;
      LegAID_67.add_attribute("SecAltID", "LegSecurityAltID_t_755533225"); // 2
      LegAID_67_set.insert("LegSecurityAltID_t_755533225");
      LegAID_67.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_67_set.insert("M");
      all_values.push_back(LegAID_67_set);
      all_compo_names.insert("LegAID_67_set");

      Leg_67.add_element(LegAID_67);
    }
    elt.add_element(Leg_67);
  } // end Leg
  { // PosUnd
    xml_element PosUnd_0{"PosUnd"};
    multiset<string> PosUnd_0_set;
    PosUnd_0.add_attribute("UndSetPx", "2205417.130000"); // 1
    PosUnd_0_set.insert("2205417.130000");
    PosUnd_0.add_attribute("UndSetPxTyp", "1"); // 1
    PosUnd_0_set.insert("1");
    PosUnd_0.add_attribute("UndlyDlvAmt", "UnderlyingDeliveryAmount_t_919707803"); // 1
    PosUnd_0_set.insert("UnderlyingDeliveryAmount_t_919707803");
    all_values.push_back(PosUnd_0_set);
    all_compo_names.insert("PosUnd_0_set");

    {
      xml_element Undly_80{"Undly"};
      multiset<string> Undly_80_set;
      Undly_80.add_attribute("Sym", "UnderlyingSymbol_t_888656359"); // 2
      Undly_80_set.insert("UnderlyingSymbol_t_888656359");
      Undly_80.add_attribute("Sfx", "CD"); // 2
      Undly_80_set.insert("CD");
      Undly_80.add_attribute("ID", "UnderlyingSecurityID_t_2017142928"); // 2
      Undly_80_set.insert("UnderlyingSecurityID_t_2017142928");
      Undly_80.add_attribute("Src", "1"); // 2
      Undly_80_set.insert("1");
      Undly_80.add_attribute("Prod", "10"); // 2
      Undly_80_set.insert("10");
      Undly_80.add_attribute("CFI", "UnderlyingCFICode_t_2125075436"); // 2
      Undly_80_set.insert("UnderlyingCFICode_t_2125075436");
      Undly_80.add_attribute("SecTyp", "CDS"); // 2
      Undly_80_set.insert("CDS");
      Undly_80.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_716587847"); // 2
      Undly_80_set.insert("UnderlyingSecuritySubType_t_716587847");
      Undly_80.add_attribute("MMY", "1341312910"); // 2
      Undly_80_set.insert("1341312910");
      Undly_80.add_attribute("Mat", "UnderlyingMaturityDate_t_1530351990"); // 2
      Undly_80_set.insert("UnderlyingMaturityDate_t_1530351990");
      Undly_80.add_attribute("MatTm", "486326688"); // 2
      Undly_80_set.insert("486326688");
      Undly_80.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1718421385"); // 2
      Undly_80_set.insert("UnderlyingCouponPaymentDate_t_1718421385");
      Undly_80.add_attribute("RestrctTyp", "MR"); // 2
      Undly_80_set.insert("MR");
      Undly_80.add_attribute("Snrty", "SR"); // 2
      Undly_80_set.insert("SR");
      Undly_80.add_attribute("NotlPctOut", "11955010.330000"); // 2
      Undly_80_set.insert("11955010.330000");
      Undly_80.add_attribute("OrigNotlPctOut", "1639235.290000"); // 2
      Undly_80_set.insert("1639235.290000");
      Undly_80.add_attribute("AttchPnt", "10155882.720000"); // 2
      Undly_80_set.insert("10155882.720000");
      Undly_80.add_attribute("DetchPnt", "2536588.180000"); // 2
      Undly_80_set.insert("2536588.180000");
      Undly_80.add_attribute("Issued", "UnderlyingIssueDate_t_121569732"); // 2
      Undly_80_set.insert("UnderlyingIssueDate_t_121569732");
      Undly_80.add_attribute("RepoCollSecTyp", "1623949651"); // 2
      Undly_80_set.insert("1623949651");
      Undly_80.add_attribute("RepoTrm", "1131733883"); // 2
      Undly_80_set.insert("1131733883");
      Undly_80.add_attribute("RepoRt", "12654133.270000"); // 2
      Undly_80_set.insert("12654133.270000");
      Undly_80.add_attribute("Fctr", "12725784.560000"); // 2
      Undly_80_set.insert("12725784.560000");
      Undly_80.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1422109834"); // 2
      Undly_80_set.insert("UnderlyingCreditRating_t_1422109834");
      Undly_80.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1466617531"); // 2
      Undly_80_set.insert("UnderlyingInstrRegistry_t_1466617531");
      Undly_80.add_attribute("Ctry", "2028111681"); // 2
      Undly_80_set.insert("2028111681");
      Undly_80.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1200255847"); // 2
      Undly_80_set.insert("UnderlyingStateOrProvinceOfIssue_t_1200255847");
      Undly_80.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_926352819"); // 2
      Undly_80_set.insert("UnderlyingLocaleOfIssue_t_926352819");
      Undly_80.add_attribute("Redeem", "UnderlyingRedemptionDate_t_101169746"); // 2
      Undly_80_set.insert("UnderlyingRedemptionDate_t_101169746");
      Undly_80.add_attribute("StrkPx", "5303135.030000"); // 2
      Undly_80_set.insert("5303135.030000");
      Undly_80.add_attribute("StrkCcy", "CHF"); // 2
      Undly_80_set.insert("CHF");
      Undly_80.add_attribute("OptA", "719866456"); // 2
      Undly_80_set.insert("719866456");
      Undly_80.add_attribute("Mult", "17157199.020000"); // 2
      Undly_80_set.insert("17157199.020000");
      Undly_80.add_attribute("MultTyp", "1"); // 2
      Undly_80_set.insert("1");
      Undly_80.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_80_set.insert("2");
      Undly_80.add_attribute("UOM", "tn"); // 2
      Undly_80_set.insert("tn");
      Undly_80.add_attribute("UOMQty", "14608179.490000"); // 2
      Undly_80_set.insert("14608179.490000");
      Undly_80.add_attribute("PxUOM", "MMBtu"); // 2
      Undly_80_set.insert("MMBtu");
      Undly_80.add_attribute("PxUOMQty", "8871409.530000"); // 2
      Undly_80_set.insert("8871409.530000");
      Undly_80.add_attribute("TmUnit", "S"); // 2
      Undly_80_set.insert("S");
      Undly_80.add_attribute("ExerStyle", "1"); // 2
      Undly_80_set.insert("1");
      Undly_80.add_attribute("CpnRt", "4580786.900000"); // 2
      Undly_80_set.insert("4580786.900000");
      Undly_80.add_attribute("Exch", "UnderlyingSecurityExchange_t_1812030600"); // 2
      Undly_80_set.insert("UnderlyingSecurityExchange_t_1812030600");
      Undly_80.add_attribute("Issr", "UnderlyingIssuer_t_491960292"); // 2
      Undly_80_set.insert("UnderlyingIssuer_t_491960292");
      Undly_80.add_attribute("EncUndIssrLen", "1653579724"); // 2
      Undly_80_set.insert("1653579724");
      Undly_80.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1975954129"); // 2
      Undly_80_set.insert("EncodedUnderlyingIssuer_t_1975954129");
      Undly_80.add_attribute("Desc", "UnderlyingSecurityDesc_t_1507548565"); // 2
      Undly_80_set.insert("UnderlyingSecurityDesc_t_1507548565");
      Undly_80.add_attribute("EncUndSecDescLen", "1907238542"); // 2
      Undly_80_set.insert("1907238542");
      Undly_80.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2097523861"); // 2
      Undly_80_set.insert("EncodedUnderlyingSecurityDesc_t_2097523861");
      Undly_80.add_attribute("CPPgm", "UnderlyingCPProgram_t_984014568"); // 2
      Undly_80_set.insert("UnderlyingCPProgram_t_984014568");
      Undly_80.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_891488777"); // 2
      Undly_80_set.insert("UnderlyingCPRegType_t_891488777");
      Undly_80.add_attribute("AllocPct", "12154535.410000"); // 2
      Undly_80_set.insert("12154535.410000");
      Undly_80.add_attribute("Ccy", "EUR"); // 2
      Undly_80_set.insert("EUR");
      Undly_80.add_attribute("Qty", "5345874.240000"); // 2
      Undly_80_set.insert("5345874.240000");
      Undly_80.add_attribute("SettlTyp", "2"); // 2
      Undly_80_set.insert("2");
      Undly_80.add_attribute("CashAmt", "UnderlyingCashAmount_t_1366370811"); // 2
      Undly_80_set.insert("UnderlyingCashAmount_t_1366370811");
      Undly_80.add_attribute("CashTyp", "DIFF"); // 2
      Undly_80_set.insert("DIFF");
      Undly_80.add_attribute("Px", "909071.560000"); // 2
      Undly_80_set.insert("909071.560000");
      Undly_80.add_attribute("DirtPx", "18966843.140000"); // 2
      Undly_80_set.insert("18966843.140000");
      Undly_80.add_attribute("EndPx", "11595172.170000"); // 2
      Undly_80_set.insert("11595172.170000");
      Undly_80.add_attribute("StartVal", "UnderlyingStartValue_t_1080733261"); // 2
      Undly_80_set.insert("UnderlyingStartValue_t_1080733261");
      Undly_80.add_attribute("CurVal", "UnderlyingCurrentValue_t_469067122"); // 2
      Undly_80_set.insert("UnderlyingCurrentValue_t_469067122");
      Undly_80.add_attribute("EndVal", "UnderlyingEndValue_t_727753472"); // 2
      Undly_80_set.insert("UnderlyingEndValue_t_727753472");
      Undly_80.add_attribute("AdjQty", "986399.430000"); // 2
      Undly_80_set.insert("986399.430000");
      Undly_80.add_attribute("FxRate", "294286.760000"); // 2
      Undly_80_set.insert("294286.760000");
      Undly_80.add_attribute("FxRateCalc", "M"); // 2
      Undly_80_set.insert("M");
      Undly_80.add_attribute("CapValu", "UnderlyingCapValue_t_1559457892"); // 2
      Undly_80_set.insert("UnderlyingCapValue_t_1559457892");
      Undly_80.add_attribute("SetMeth", "UnderlyingSettlMethod_t_306378078"); // 2
      Undly_80_set.insert("UnderlyingSettlMethod_t_306378078");
      Undly_80.add_attribute("PutCall", "1160722467"); // 2
      Undly_80_set.insert("1160722467");
      all_values.push_back(Undly_80_set);
      all_compo_names.insert("Undly_80_set");

      {
        xml_element UndAID_80{"UndAID"};
        multiset<string> UndAID_80_set;
        UndAID_80.add_attribute("AltID", "UnderlyingSecurityAltID_t_255660536"); // 3
        UndAID_80_set.insert("UnderlyingSecurityAltID_t_255660536");
        UndAID_80.add_attribute("AltIDSrc", "1"); // 3
        UndAID_80_set.insert("1");
        all_values.push_back(UndAID_80_set);
        all_compo_names.insert("UndAID_80_set");

        Undly_80.add_element(UndAID_80);
      }
      {
        xml_element Stip_116{"Stip"};
        multiset<string> Stip_116_set;
        Stip_116.add_attribute("Typ", "PROD"); // 3
        Stip_116_set.insert("PROD");
        Stip_116.add_attribute("Val", "UnderlyingStipValue_t_2067691136"); // 3
        Stip_116_set.insert("UnderlyingStipValue_t_2067691136");
        all_values.push_back(Stip_116_set);
        all_compo_names.insert("Stip_116_set");

        Undly_80.add_element(Stip_116);
      }
      {
        xml_element Pty_320{"Pty"};
        multiset<string> Pty_320_set;
        Pty_320.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1561614460"); // 3
        Pty_320_set.insert("UnderlyingInstrumentPartyID_t_1561614460");
        Pty_320.add_attribute("Src", "F"); // 3
        Pty_320_set.insert("F");
        Pty_320.add_attribute("R", "53"); // 3
        Pty_320_set.insert("53");
        all_values.push_back(Pty_320_set);
        all_compo_names.insert("Pty_320_set");

        {
          xml_element Sub_320{"Sub"};
          multiset<string> Sub_320_set;
          Sub_320.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_921679377"); // 4
          Sub_320_set.insert("UnderlyingInstrumentPartySubID_t_921679377");
          Sub_320.add_attribute("Typ", "17"); // 4
          Sub_320_set.insert("17");
          all_values.push_back(Sub_320_set);
          all_compo_names.insert("Sub_320_set");

          Pty_320.add_element(Sub_320);
        }
        Undly_80.add_element(Pty_320);
      }
      PosUnd_0.add_element(Undly_80);
    }
    {
      xml_element UndDlvAmt_0{"UndDlvAmt"};
      multiset<string> UndDlvAmt_0_set;
      UndDlvAmt_0.add_attribute("PayAmt", "UnderlyingPayAmount_t_1846201831"); // 2
      UndDlvAmt_0_set.insert("UnderlyingPayAmount_t_1846201831");
      UndDlvAmt_0.add_attribute("ColAmt", "UnderlyingCollectAmount_t_1905693945"); // 2
      UndDlvAmt_0_set.insert("UnderlyingCollectAmount_t_1905693945");
      UndDlvAmt_0.add_attribute("StlDt", "UnderlyingSettlementDate_t_1776140905"); // 2
      UndDlvAmt_0_set.insert("UnderlyingSettlementDate_t_1776140905");
      UndDlvAmt_0.add_attribute("SetStat", "UnderlyingSettlementStatus_t_914171724"); // 2
      UndDlvAmt_0_set.insert("UnderlyingSettlementStatus_t_914171724");
      all_values.push_back(UndDlvAmt_0_set);
      all_compo_names.insert("UndDlvAmt_0_set");

      PosUnd_0.add_element(UndDlvAmt_0);
    }
    elt.add_element(PosUnd_0);
  } // end PosUnd
  { // Qty
    xml_element Qty_8{"Qty"};
    multiset<string> Qty_8_set;
    Qty_8.add_attribute("Typ", "TQ"); // 1
    Qty_8_set.insert("TQ");
    Qty_8.add_attribute("Long", "14487591.490000"); // 1
    Qty_8_set.insert("14487591.490000");
    Qty_8.add_attribute("Short", "20045407.310000"); // 1
    Qty_8_set.insert("20045407.310000");
    Qty_8.add_attribute("Stat", "1"); // 1
    Qty_8_set.insert("1");
    Qty_8.add_attribute("QtyDt", "QuantityDate_t_762215744"); // 1
    Qty_8_set.insert("QuantityDate_t_762215744");
    all_values.push_back(Qty_8_set);
    all_compo_names.insert("Qty_8_set");

    {
      xml_element Pty_321{"Pty"};
      multiset<string> Pty_321_set;
      Pty_321.add_attribute("ID", "NestedPartyID_t_2095447887"); // 2
      Pty_321_set.insert("NestedPartyID_t_2095447887");
      Pty_321.add_attribute("Src", "H"); // 2
      Pty_321_set.insert("H");
      Pty_321.add_attribute("R", "38"); // 2
      Pty_321_set.insert("38");
      all_values.push_back(Pty_321_set);
      all_compo_names.insert("Pty_321_set");

      {
        xml_element Sub_321{"Sub"};
        multiset<string> Sub_321_set;
        Sub_321.add_attribute("ID", "NestedPartySubID_t_1028697500"); // 3
        Sub_321_set.insert("NestedPartySubID_t_1028697500");
        Sub_321.add_attribute("Typ", "31"); // 3
        Sub_321_set.insert("31");
        all_values.push_back(Sub_321_set);
        all_compo_names.insert("Sub_321_set");

        Pty_321.add_element(Sub_321);
      }
      Qty_8.add_element(Pty_321);
    }
    elt.add_element(Qty_8);
  } // end Qty
  { // Amt
    xml_element Amt_14{"Amt"};
    multiset<string> Amt_14_set;
    Amt_14.add_attribute("Typ", "CASH"); // 1
    Amt_14_set.insert("CASH");
    Amt_14.add_attribute("Amt", "PosAmt_t_1408839497"); // 1
    Amt_14_set.insert("PosAmt_t_1408839497");
    Amt_14.add_attribute("Ccy", "PositionCurrency_t_775584300"); // 1
    Amt_14_set.insert("PositionCurrency_t_775584300");
    all_values.push_back(Amt_14_set);
    all_compo_names.insert("Amt_14_set");

    elt.add_element(Amt_14);
  } // end Amt
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
