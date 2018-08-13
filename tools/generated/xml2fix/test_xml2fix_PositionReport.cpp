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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_60197539"); // 0
  PositionReport_message_t_0.insert("PosMaintRptID_t_60197539");
  elt.add_attribute("ReqID", "PosReqID_t_20525488"); // 0
  PositionReport_message_t_0.insert("PosReqID_t_20525488");
  elt.add_attribute("ReqTyp", "3"); // 0
  PositionReport_message_t_0.insert("3");
  elt.add_attribute("SubReqTyp", "0"); // 0
  PositionReport_message_t_0.insert("0");
  elt.add_attribute("TotRpts", "808879643"); // 0
  PositionReport_message_t_0.insert("808879643");
  elt.add_attribute("Rslt", "4"); // 0
  PositionReport_message_t_0.insert("4");
  elt.add_attribute("Unsol", "Y"); // 0
  PositionReport_message_t_0.insert("Y");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_384912913"); // 0
  PositionReport_message_t_0.insert("ClearingBusinessDate_t_384912913");
  elt.add_attribute("SetSesID", "EOD"); // 0
  PositionReport_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_854824688"); // 0
  PositionReport_message_t_0.insert("SettlSessSubID_t_854824688");
  elt.add_attribute("PxTyp", "10"); // 0
  PositionReport_message_t_0.insert("10");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  PositionReport_message_t_0.insert("JPY");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_476018057"); // 0
  PositionReport_message_t_0.insert("MessageEventSource_t_476018057");
  elt.add_attribute("Acct", "Account_t_534270110"); // 0
  PositionReport_message_t_0.insert("Account_t_534270110");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  PositionReport_message_t_0.insert("5");
  elt.add_attribute("AcctTyp", "7"); // 0
  PositionReport_message_t_0.insert("7");
  elt.add_attribute("Ccy", "GBP"); // 0
  PositionReport_message_t_0.insert("GBP");
  elt.add_attribute("SetPx", "1615515.760000"); // 0
  PositionReport_message_t_0.insert("1615515.760000");
  elt.add_attribute("SetPxTyp", "1"); // 0
  PositionReport_message_t_0.insert("1");
  elt.add_attribute("PriSetPx", "5844861.540000"); // 0
  PositionReport_message_t_0.insert("5844861.540000");
  elt.add_attribute("MtchStat", "1"); // 0
  PositionReport_message_t_0.insert("1");
  elt.add_attribute("RegStat", "N"); // 0
  PositionReport_message_t_0.insert("N");
  elt.add_attribute("DlvDt", "DeliveryDate_t_1562496137"); // 0
  PositionReport_message_t_0.insert("DeliveryDate_t_1562496137");
  elt.add_attribute("ModelTyp", "0"); // 0
  PositionReport_message_t_0.insert("0");
  elt.add_attribute("PxDelta", "905944.200000"); // 0
  PositionReport_message_t_0.insert("905944.200000");
  elt.add_attribute("Txt", "Text_t_878391013"); // 0
  PositionReport_message_t_0.insert("Text_t_878391013");
  elt.add_attribute("EncTxtLen", "1760154694"); // 0
  PositionReport_message_t_0.insert("1760154694");
  elt.add_attribute("EncTxt", "EncodedText_t_1689786392"); // 0
  PositionReport_message_t_0.insert("EncodedText_t_1689786392");
  all_values.push_back(PositionReport_message_t_0);
  all_compo_names.insert("PositionReport_message_t");

  { // Hdr
    xml_element Hdr_67{"Hdr"};
    multiset<string> Hdr_67_set;
    Hdr_67.add_attribute("SeqNum", "2042628038"); // 1
    Hdr_67_set.insert("2042628038");
    Hdr_67.add_attribute("SID", "SenderCompID_t_1820352233"); // 1
    Hdr_67_set.insert("SenderCompID_t_1820352233");
    Hdr_67.add_attribute("TID", "TargetCompID_t_1710311881"); // 1
    Hdr_67_set.insert("TargetCompID_t_1710311881");
    Hdr_67.add_attribute("OBID", "OnBehalfOfCompID_t_1284860189"); // 1
    Hdr_67_set.insert("OnBehalfOfCompID_t_1284860189");
    Hdr_67.add_attribute("D2ID", "DeliverToCompID_t_611429469"); // 1
    Hdr_67_set.insert("DeliverToCompID_t_611429469");
    Hdr_67.add_attribute("SSub", "SenderSubID_t_371707876"); // 1
    Hdr_67_set.insert("SenderSubID_t_371707876");
    Hdr_67.add_attribute("SLoc", "SenderLocationID_t_1268590213"); // 1
    Hdr_67_set.insert("SenderLocationID_t_1268590213");
    Hdr_67.add_attribute("TSub", "TargetSubID_t_1713247368"); // 1
    Hdr_67_set.insert("TargetSubID_t_1713247368");
    Hdr_67.add_attribute("TLoc", "TargetLocationID_t_756620789"); // 1
    Hdr_67_set.insert("TargetLocationID_t_756620789");
    Hdr_67.add_attribute("OBSub", "OnBehalfOfSubID_t_346079165"); // 1
    Hdr_67_set.insert("OnBehalfOfSubID_t_346079165");
    Hdr_67.add_attribute("OBLoc", "OnBehalfOfLocationID_t_420588408"); // 1
    Hdr_67_set.insert("OnBehalfOfLocationID_t_420588408");
    Hdr_67.add_attribute("D2Sub", "DeliverToSubID_t_2094808867"); // 1
    Hdr_67_set.insert("DeliverToSubID_t_2094808867");
    Hdr_67.add_attribute("D2Loc", "DeliverToLocationID_t_1770783081"); // 1
    Hdr_67_set.insert("DeliverToLocationID_t_1770783081");
    Hdr_67.add_attribute("PosDup", "N"); // 1
    Hdr_67_set.insert("N");
    Hdr_67.add_attribute("PosRsnd", "N"); // 1
    Hdr_67_set.insert("N");
    Hdr_67.add_attribute("Snt", "SendingTime_t_157569544"); // 1
    Hdr_67_set.insert("SendingTime_t_157569544");
    Hdr_67.add_attribute("OrigSnt", "OrigSendingTime_t_1365201687"); // 1
    Hdr_67_set.insert("OrigSendingTime_t_1365201687");
    Hdr_67.add_attribute("MsgEncd", "MessageEncoding_t_1271066724"); // 1
    Hdr_67_set.insert("MessageEncoding_t_1271066724");
    all_values.push_back(Hdr_67_set);
    all_compo_names.insert("Hdr_67_set");

    {
      xml_element Hop_67{"Hop"};
      multiset<string> Hop_67_set;
      Hop_67.add_attribute("ID", "HopCompID_t_220834405"); // 2
      Hop_67_set.insert("HopCompID_t_220834405");
      Hop_67.add_attribute("Ref", "323110641"); // 2
      Hop_67_set.insert("323110641");
      Hop_67.add_attribute("Snt", "HopSendingTime_t_1432618300"); // 2
      Hop_67_set.insert("HopSendingTime_t_1432618300");
      all_values.push_back(Hop_67_set);
      all_compo_names.insert("Hop_67_set");

      Hdr_67.add_element(Hop_67);
    }
    elt.add_element(Hdr_67);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_11{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_11_set;
    ApplSeqCtrl_11.add_attribute("ApplID", "ApplID_t_26135658"); // 1
    ApplSeqCtrl_11_set.insert("ApplID_t_26135658");
    ApplSeqCtrl_11.add_attribute("ApplSeqNum", "907596796"); // 1
    ApplSeqCtrl_11_set.insert("907596796");
    ApplSeqCtrl_11.add_attribute("ApplLastSeqNum", "1945733021"); // 1
    ApplSeqCtrl_11_set.insert("1945733021");
    ApplSeqCtrl_11.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_11_set.insert("true");
    all_values.push_back(ApplSeqCtrl_11_set);
    all_compo_names.insert("ApplSeqCtrl_11_set");

    elt.add_element(ApplSeqCtrl_11);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_309{"Pty"};
    multiset<string> Pty_309_set;
    Pty_309.add_attribute("ID", "PartyID_t_300164926"); // 1
    Pty_309_set.insert("PartyID_t_300164926");
    Pty_309.add_attribute("Src", "7"); // 1
    Pty_309_set.insert("7");
    Pty_309.add_attribute("R", "53"); // 1
    Pty_309_set.insert("53");
    all_values.push_back(Pty_309_set);
    all_compo_names.insert("Pty_309_set");

    {
      xml_element Sub_309{"Sub"};
      multiset<string> Sub_309_set;
      Sub_309.add_attribute("ID", "PartySubID_t_2060319620"); // 2
      Sub_309_set.insert("PartySubID_t_2060319620");
      Sub_309.add_attribute("Typ", "29"); // 2
      Sub_309_set.insert("29");
      all_values.push_back(Sub_309_set);
      all_compo_names.insert("Sub_309_set");

      Pty_309.add_element(Sub_309);
    }
    elt.add_element(Pty_309);
  } // end Pty
  { // Pty
    xml_element Pty_310{"Pty"};
    multiset<string> Pty_310_set;
    Pty_310.add_attribute("ID", "PartyID_t_1096144688"); // 1
    Pty_310_set.insert("PartyID_t_1096144688");
    Pty_310.add_attribute("Src", "C"); // 1
    Pty_310_set.insert("C");
    Pty_310.add_attribute("R", "27"); // 1
    Pty_310_set.insert("27");
    all_values.push_back(Pty_310_set);
    all_compo_names.insert("Pty_310_set");

    {
      xml_element Sub_310{"Sub"};
      multiset<string> Sub_310_set;
      Sub_310.add_attribute("ID", "PartySubID_t_233521229"); // 2
      Sub_310_set.insert("PartySubID_t_233521229");
      Sub_310.add_attribute("Typ", "20"); // 2
      Sub_310_set.insert("20");
      all_values.push_back(Sub_310_set);
      all_compo_names.insert("Sub_310_set");

      Pty_310.add_element(Sub_310);
    }
    elt.add_element(Pty_310);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_57{"Instrmt"};
    multiset<string> Instrmt_57_set;
    Instrmt_57.add_attribute("Sym", "Symbol_t_700978990"); // 1
    Instrmt_57_set.insert("Symbol_t_700978990");
    Instrmt_57.add_attribute("Sfx", "WI"); // 1
    Instrmt_57_set.insert("WI");
    Instrmt_57.add_attribute("ID", "SecurityID_t_1910381395"); // 1
    Instrmt_57_set.insert("SecurityID_t_1910381395");
    Instrmt_57.add_attribute("Src", "A"); // 1
    Instrmt_57_set.insert("A");
    Instrmt_57.add_attribute("Prod", "13"); // 1
    Instrmt_57_set.insert("13");
    Instrmt_57.add_attribute("ProdCmplx", "ProductComplex_t_183486155"); // 1
    Instrmt_57_set.insert("ProductComplex_t_183486155");
    Instrmt_57.add_attribute("SecGrp", "SecurityGroup_t_1404924998"); // 1
    Instrmt_57_set.insert("SecurityGroup_t_1404924998");
    Instrmt_57.add_attribute("CFI", "CFICode_t_1471490041"); // 1
    Instrmt_57_set.insert("CFICode_t_1471490041");
    Instrmt_57.add_attribute("SecTyp", "FXFWD"); // 1
    Instrmt_57_set.insert("FXFWD");
    Instrmt_57.add_attribute("SubTyp", "SecuritySubType_t_1828268275"); // 1
    Instrmt_57_set.insert("SecuritySubType_t_1828268275");
    Instrmt_57.add_attribute("MMY", "1629059585"); // 1
    Instrmt_57_set.insert("1629059585");
    Instrmt_57.add_attribute("MatDt", "MaturityDate_t_2138393971"); // 1
    Instrmt_57_set.insert("MaturityDate_t_2138393971");
    Instrmt_57.add_attribute("MatTm", "951851351"); // 1
    Instrmt_57_set.insert("951851351");
    Instrmt_57.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1849893991"); // 1
    Instrmt_57_set.insert("SettleOnOpenFlag_t_1849893991");
    Instrmt_57.add_attribute("AsgnMeth", "314020964"); // 1
    Instrmt_57_set.insert("314020964");
    Instrmt_57.add_attribute("Status", "1"); // 1
    Instrmt_57_set.insert("1");
    Instrmt_57.add_attribute("CpnPmt", "CouponPaymentDate_t_1876029649"); // 1
    Instrmt_57_set.insert("CouponPaymentDate_t_1876029649");
    Instrmt_57.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_57_set.insert("FR");
    Instrmt_57.add_attribute("Snrty", "SB"); // 1
    Instrmt_57_set.insert("SB");
    Instrmt_57.add_attribute("NotlPctOut", "8620917.170000"); // 1
    Instrmt_57_set.insert("8620917.170000");
    Instrmt_57.add_attribute("OrigNotlPctOut", "15442270.450000"); // 1
    Instrmt_57_set.insert("15442270.450000");
    Instrmt_57.add_attribute("AttchPnt", "3354003.030000"); // 1
    Instrmt_57_set.insert("3354003.030000");
    Instrmt_57.add_attribute("DetchPnt", "20862318.540000"); // 1
    Instrmt_57_set.insert("20862318.540000");
    Instrmt_57.add_attribute("Issued", "IssueDate_t_597743696"); // 1
    Instrmt_57_set.insert("IssueDate_t_597743696");
    Instrmt_57.add_attribute("RepoCollSecTyp", "248236275"); // 1
    Instrmt_57_set.insert("248236275");
    Instrmt_57.add_attribute("RepoTrm", "705191087"); // 1
    Instrmt_57_set.insert("705191087");
    Instrmt_57.add_attribute("RepoRt", "16938883.840000"); // 1
    Instrmt_57_set.insert("16938883.840000");
    Instrmt_57.add_attribute("Fctr", "19814244.800000"); // 1
    Instrmt_57_set.insert("19814244.800000");
    Instrmt_57.add_attribute("CrdRtg", "CreditRating_t_1034462201"); // 1
    Instrmt_57_set.insert("CreditRating_t_1034462201");
    Instrmt_57.add_attribute("Rgstry", "InstrRegistry_t_1927409614"); // 1
    Instrmt_57_set.insert("InstrRegistry_t_1927409614");
    Instrmt_57.add_attribute("IssuCtry", "31074859"); // 1
    Instrmt_57_set.insert("31074859");
    Instrmt_57.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1735441191"); // 1
    Instrmt_57_set.insert("StateOrProvinceOfIssue_t_1735441191");
    Instrmt_57.add_attribute("Lcl", "LocaleOfIssue_t_1282037409"); // 1
    Instrmt_57_set.insert("LocaleOfIssue_t_1282037409");
    Instrmt_57.add_attribute("Redeem", "RedemptionDate_t_1941456254"); // 1
    Instrmt_57_set.insert("RedemptionDate_t_1941456254");
    Instrmt_57.add_attribute("StrkPx", "10455573.220000"); // 1
    Instrmt_57_set.insert("10455573.220000");
    Instrmt_57.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_57_set.insert("EUR");
    Instrmt_57.add_attribute("StrkMult", "3029986.730000"); // 1
    Instrmt_57_set.insert("3029986.730000");
    Instrmt_57.add_attribute("StrkValu", "3067507.620000"); // 1
    Instrmt_57_set.insert("3067507.620000");
    Instrmt_57.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_57_set.insert("2");
    Instrmt_57.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_57_set.insert("4");
    Instrmt_57.add_attribute("StrkPxBndryPrcsn", "19358103.480000"); // 1
    Instrmt_57_set.insert("19358103.480000");
    Instrmt_57.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_57_set.insert("1");
    Instrmt_57.add_attribute("OptAt", "935634651"); // 1
    Instrmt_57_set.insert("935634651");
    Instrmt_57.add_attribute("Mult", "16382206.910000"); // 1
    Instrmt_57_set.insert("16382206.910000");
    Instrmt_57.add_attribute("MultTyp", "2"); // 1
    Instrmt_57_set.insert("2");
    Instrmt_57.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_57_set.insert("0");
    Instrmt_57.add_attribute("MinPxIncr", "13667666.920000"); // 1
    Instrmt_57_set.insert("13667666.920000");
    Instrmt_57.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_129716445"); // 1
    Instrmt_57_set.insert("MinPriceIncrementAmount_t_129716445");
    Instrmt_57.add_attribute("UOM", "lbs"); // 1
    Instrmt_57_set.insert("lbs");
    Instrmt_57.add_attribute("UOMQty", "813747.610000"); // 1
    Instrmt_57_set.insert("813747.610000");
    Instrmt_57.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_57_set.insert("Alw");
    Instrmt_57.add_attribute("PxUOMQty", "15432563.360000"); // 1
    Instrmt_57_set.insert("15432563.360000");
    Instrmt_57.add_attribute("SettlMeth", "P"); // 1
    Instrmt_57_set.insert("P");
    Instrmt_57.add_attribute("ExerStyle", "2"); // 1
    Instrmt_57_set.insert("2");
    Instrmt_57.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_57_set.insert("1");
    Instrmt_57.add_attribute("OptPayAmt", "OptPayoutAmount_t_725314054"); // 1
    Instrmt_57_set.insert("OptPayoutAmount_t_725314054");
    Instrmt_57.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_57_set.insert("PCTPAR");
    Instrmt_57.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_57_set.insert("CDSD");
    Instrmt_57.add_attribute("ListMeth", "1"); // 1
    Instrmt_57_set.insert("1");
    Instrmt_57.add_attribute("CapPx", "15980178.890000"); // 1
    Instrmt_57_set.insert("15980178.890000");
    Instrmt_57.add_attribute("FlrPx", "16565083.030000"); // 1
    Instrmt_57_set.insert("16565083.030000");
    Instrmt_57.add_attribute("PutCall", "0"); // 1
    Instrmt_57_set.insert("0");
    Instrmt_57.add_attribute("FlexInd", "true"); // 1
    Instrmt_57_set.insert("true");
    Instrmt_57.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_57_set.insert("false");
    Instrmt_57.add_attribute("TmUnit", "H"); // 1
    Instrmt_57_set.insert("H");
    Instrmt_57.add_attribute("CpnRt", "17153160.190000"); // 1
    Instrmt_57_set.insert("17153160.190000");
    Instrmt_57.add_attribute("Exch", "SecurityExchange_t_1427939671"); // 1
    Instrmt_57_set.insert("SecurityExchange_t_1427939671");
    Instrmt_57.add_attribute("PosLmt", "548806146"); // 1
    Instrmt_57_set.insert("548806146");
    Instrmt_57.add_attribute("NTPosLmt", "2022066782"); // 1
    Instrmt_57_set.insert("2022066782");
    Instrmt_57.add_attribute("Issr", "Issuer_t_31107068"); // 1
    Instrmt_57_set.insert("Issuer_t_31107068");
    Instrmt_57.add_attribute("EncIssrLen", "532589446"); // 1
    Instrmt_57_set.insert("532589446");
    Instrmt_57.add_attribute("EncIssr", "EncodedIssuer_t_1810393482"); // 1
    Instrmt_57_set.insert("EncodedIssuer_t_1810393482");
    Instrmt_57.add_attribute("Desc", "SecurityDesc_t_772668437"); // 1
    Instrmt_57_set.insert("SecurityDesc_t_772668437");
    Instrmt_57.add_attribute("EncSecDescLen", "1468224097"); // 1
    Instrmt_57_set.insert("1468224097");
    Instrmt_57.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1301130525"); // 1
    Instrmt_57_set.insert("EncodedSecurityDesc_t_1301130525");
    Instrmt_57.add_attribute("Pool", "Pool_t_1828250770"); // 1
    Instrmt_57_set.insert("Pool_t_1828250770");
    Instrmt_57.add_attribute("CSetMo", "493361105"); // 1
    Instrmt_57_set.insert("493361105");
    Instrmt_57.add_attribute("CPPgm", "99"); // 1
    Instrmt_57_set.insert("99");
    Instrmt_57.add_attribute("CPRegT", "CPRegType_t_1957967215"); // 1
    Instrmt_57_set.insert("CPRegType_t_1957967215");
    Instrmt_57.add_attribute("Dated", "DatedDate_t_1701217138"); // 1
    Instrmt_57_set.insert("DatedDate_t_1701217138");
    Instrmt_57.add_attribute("IntAcrl", "InterestAccrualDate_t_601788330"); // 1
    Instrmt_57_set.insert("InterestAccrualDate_t_601788330");
    all_values.push_back(Instrmt_57_set);
    all_compo_names.insert("Instrmt_57_set");

    {
      xml_element AID_60{"AID"};
      multiset<string> AID_60_set;
      AID_60.add_attribute("AltID", "SecurityAltID_t_1484427058"); // 2
      AID_60_set.insert("SecurityAltID_t_1484427058");
      AID_60.add_attribute("AltIDSrc", "K"); // 2
      AID_60_set.insert("K");
      all_values.push_back(AID_60_set);
      all_compo_names.insert("AID_60_set");

      Instrmt_57.add_element(AID_60);
    }
    {
      xml_element SecXML_60{"SecXML"};
      multiset<string> SecXML_60_set;
      SecXML_60.add_attribute("Schema", "SecurityXMLSchema_t_621911298"); // 2
      SecXML_60_set.insert("SecurityXMLSchema_t_621911298");
      all_values.push_back(SecXML_60_set);
      all_compo_names.insert("SecXML_60_set");

      Instrmt_57.add_element(SecXML_60);
    }
    {
      xml_element Evnt_60{"Evnt"};
      multiset<string> Evnt_60_set;
      Evnt_60.add_attribute("EventTyp", "17"); // 2
      Evnt_60_set.insert("17");
      Evnt_60.add_attribute("Dt", "EventDate_t_740998790"); // 2
      Evnt_60_set.insert("EventDate_t_740998790");
      Evnt_60.add_attribute("Tm", "EventTime_t_1347225352"); // 2
      Evnt_60_set.insert("EventTime_t_1347225352");
      Evnt_60.add_attribute("Px", "12792388.730000"); // 2
      Evnt_60_set.insert("12792388.730000");
      Evnt_60.add_attribute("Txt", "EventText_t_218948587"); // 2
      Evnt_60_set.insert("EventText_t_218948587");
      all_values.push_back(Evnt_60_set);
      all_compo_names.insert("Evnt_60_set");

      Instrmt_57.add_element(Evnt_60);
    }
    {
      xml_element Pty_311{"Pty"};
      multiset<string> Pty_311_set;
      Pty_311.add_attribute("ID", "InstrumentPartyID_t_959517960"); // 2
      Pty_311_set.insert("InstrumentPartyID_t_959517960");
      Pty_311.add_attribute("Src", "F"); // 2
      Pty_311_set.insert("F");
      Pty_311.add_attribute("R", "64"); // 2
      Pty_311_set.insert("64");
      all_values.push_back(Pty_311_set);
      all_compo_names.insert("Pty_311_set");

      {
        xml_element Sub_311{"Sub"};
        multiset<string> Sub_311_set;
        Sub_311.add_attribute("ID", "InstrumentPartySubID_t_159768110"); // 3
        Sub_311_set.insert("InstrumentPartySubID_t_159768110");
        Sub_311.add_attribute("Typ", "8"); // 3
        Sub_311_set.insert("8");
        all_values.push_back(Sub_311_set);
        all_compo_names.insert("Sub_311_set");

        Pty_311.add_element(Sub_311);
      }
      Instrmt_57.add_element(Pty_311);
    }
    {
      xml_element CmplxEvnt_57{"CmplxEvnt"};
      multiset<string> CmplxEvnt_57_set;
      CmplxEvnt_57.add_attribute("Typ", "3"); // 2
      CmplxEvnt_57_set.insert("3");
      CmplxEvnt_57.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_405575583"); // 2
      CmplxEvnt_57_set.insert("ComplexOptPayoutAmount_t_405575583");
      CmplxEvnt_57.add_attribute("Px", "10301771.360000"); // 2
      CmplxEvnt_57_set.insert("10301771.360000");
      CmplxEvnt_57.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_57_set.insert("1");
      CmplxEvnt_57.add_attribute("PxBndryPrcsn", "9543817.290000"); // 2
      CmplxEvnt_57_set.insert("9543817.290000");
      CmplxEvnt_57.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_57_set.insert("3");
      CmplxEvnt_57.add_attribute("Cond", "2"); // 2
      CmplxEvnt_57_set.insert("2");
      all_values.push_back(CmplxEvnt_57_set);
      all_compo_names.insert("CmplxEvnt_57_set");

      {
        xml_element EvntDts_57{"EvntDts"};
        multiset<string> EvntDts_57_set;
        EvntDts_57.add_attribute("StartDt", "ComplexEventStartDate_t_1486971175"); // 3
        EvntDts_57_set.insert("ComplexEventStartDate_t_1486971175");
        EvntDts_57.add_attribute("EndDt", "ComplexEventEndDate_t_567670104"); // 3
        EvntDts_57_set.insert("ComplexEventEndDate_t_567670104");
        all_values.push_back(EvntDts_57_set);
        all_compo_names.insert("EvntDts_57_set");

        {
          xml_element EvntTms_57{"EvntTms"};
          multiset<string> EvntTms_57_set;
          EvntTms_57.add_attribute("StartTm", "1262685680"); // 4
          EvntTms_57_set.insert("1262685680");
          EvntTms_57.add_attribute("EndTm", "807711625"); // 4
          EvntTms_57_set.insert("807711625");
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
    xml_element Leg_60{"Leg"};
    multiset<string> Leg_60_set;
    Leg_60.add_attribute("Sym", "LegSymbol_t_943452802"); // 1
    Leg_60_set.insert("LegSymbol_t_943452802");
    Leg_60.add_attribute("Sfx", "CD"); // 1
    Leg_60_set.insert("CD");
    Leg_60.add_attribute("ID", "LegSecurityID_t_241730550"); // 1
    Leg_60_set.insert("LegSecurityID_t_241730550");
    Leg_60.add_attribute("Src", "1"); // 1
    Leg_60_set.insert("1");
    Leg_60.add_attribute("Prod", "5"); // 1
    Leg_60_set.insert("5");
    Leg_60.add_attribute("CFI", "LegCFICode_t_843518881"); // 1
    Leg_60_set.insert("LegCFICode_t_843518881");
    Leg_60.add_attribute("SecTyp", "TBA"); // 1
    Leg_60_set.insert("TBA");
    Leg_60.add_attribute("SecSubTyp", "LegSecuritySubType_t_1951796046"); // 1
    Leg_60_set.insert("LegSecuritySubType_t_1951796046");
    Leg_60.add_attribute("MMY", "1465430179"); // 1
    Leg_60_set.insert("1465430179");
    Leg_60.add_attribute("Mat", "LegMaturityDate_t_1699510378"); // 1
    Leg_60_set.insert("LegMaturityDate_t_1699510378");
    Leg_60.add_attribute("MatTm", "545311189"); // 1
    Leg_60_set.insert("545311189");
    Leg_60.add_attribute("CpnPmt", "LegCouponPaymentDate_t_665171883"); // 1
    Leg_60_set.insert("LegCouponPaymentDate_t_665171883");
    Leg_60.add_attribute("Issued", "LegIssueDate_t_831265603"); // 1
    Leg_60_set.insert("LegIssueDate_t_831265603");
    Leg_60.add_attribute("RepoCollSecTyp", "764259776"); // 1
    Leg_60_set.insert("764259776");
    Leg_60.add_attribute("RepoTrm", "1624689843"); // 1
    Leg_60_set.insert("1624689843");
    Leg_60.add_attribute("RepoRt", "15610387.170000"); // 1
    Leg_60_set.insert("15610387.170000");
    Leg_60.add_attribute("Fctr", "4922330.180000"); // 1
    Leg_60_set.insert("4922330.180000");
    Leg_60.add_attribute("CrdRtg", "LegCreditRating_t_1784457954"); // 1
    Leg_60_set.insert("LegCreditRating_t_1784457954");
    Leg_60.add_attribute("Rgstry", "LegInstrRegistry_t_875899834"); // 1
    Leg_60_set.insert("LegInstrRegistry_t_875899834");
    Leg_60.add_attribute("Ctry", "1670687170"); // 1
    Leg_60_set.insert("1670687170");
    Leg_60.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_42549889"); // 1
    Leg_60_set.insert("LegStateOrProvinceOfIssue_t_42549889");
    Leg_60.add_attribute("Lcl", "LegLocaleOfIssue_t_1906076971"); // 1
    Leg_60_set.insert("LegLocaleOfIssue_t_1906076971");
    Leg_60.add_attribute("Redeem", "LegRedemptionDate_t_2129597345"); // 1
    Leg_60_set.insert("LegRedemptionDate_t_2129597345");
    Leg_60.add_attribute("Strk", "9969316.190000"); // 1
    Leg_60_set.insert("9969316.190000");
    Leg_60.add_attribute("StrkCcy", "EUR"); // 1
    Leg_60_set.insert("EUR");
    Leg_60.add_attribute("OptA", "336419146"); // 1
    Leg_60_set.insert("336419146");
    Leg_60.add_attribute("Cmult", "12310236.980000"); // 1
    Leg_60_set.insert("12310236.980000");
    Leg_60.add_attribute("MultTyp", "0"); // 1
    Leg_60_set.insert("0");
    Leg_60.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_60_set.insert("1");
    Leg_60.add_attribute("UOM", "t"); // 1
    Leg_60_set.insert("t");
    Leg_60.add_attribute("UOMQty", "5307857.760000"); // 1
    Leg_60_set.insert("5307857.760000");
    Leg_60.add_attribute("PxUOM", "Bbl"); // 1
    Leg_60_set.insert("Bbl");
    Leg_60.add_attribute("PxUOMQty", "11940712.300000"); // 1
    Leg_60_set.insert("11940712.300000");
    Leg_60.add_attribute("TmUnit", "Min"); // 1
    Leg_60_set.insert("Min");
    Leg_60.add_attribute("ExerStyle", "2"); // 1
    Leg_60_set.insert("2");
    Leg_60.add_attribute("CpnRt", "20375901.110000"); // 1
    Leg_60_set.insert("20375901.110000");
    Leg_60.add_attribute("Exch", "LegSecurityExchange_t_1375601926"); // 1
    Leg_60_set.insert("LegSecurityExchange_t_1375601926");
    Leg_60.add_attribute("Issr", "LegIssuer_t_956838472"); // 1
    Leg_60_set.insert("LegIssuer_t_956838472");
    Leg_60.add_attribute("EncLegIssrLen", "1355536642"); // 1
    Leg_60_set.insert("1355536642");
    Leg_60.add_attribute("EncLegIssr", "EncodedLegIssuer_t_927628656"); // 1
    Leg_60_set.insert("EncodedLegIssuer_t_927628656");
    Leg_60.add_attribute("Desc", "LegSecurityDesc_t_1502149661"); // 1
    Leg_60_set.insert("LegSecurityDesc_t_1502149661");
    Leg_60.add_attribute("EncLegSecDescLen", "2020708525"); // 1
    Leg_60_set.insert("2020708525");
    Leg_60.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1758894259"); // 1
    Leg_60_set.insert("EncodedLegSecurityDesc_t_1758894259");
    Leg_60.add_attribute("RatioQty", "1189257.890000"); // 1
    Leg_60_set.insert("1189257.890000");
    Leg_60.add_attribute("Side", "2"); // 1
    Leg_60_set.insert("2");
    Leg_60.add_attribute("Ccy", "EUR"); // 1
    Leg_60_set.insert("EUR");
    Leg_60.add_attribute("Pool", "LegPool_t_1134889027"); // 1
    Leg_60_set.insert("LegPool_t_1134889027");
    Leg_60.add_attribute("Dated", "LegDatedDate_t_2048349163"); // 1
    Leg_60_set.insert("LegDatedDate_t_2048349163");
    Leg_60.add_attribute("CSetMo", "134362330"); // 1
    Leg_60_set.insert("134362330");
    Leg_60.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1177438916"); // 1
    Leg_60_set.insert("LegInterestAccrualDate_t_1177438916");
    Leg_60.add_attribute("PutCall", "1806942486"); // 1
    Leg_60_set.insert("1806942486");
    Leg_60.add_attribute("LegOptionRatio", "1164760.270000"); // 1
    Leg_60_set.insert("1164760.270000");
    Leg_60.add_attribute("Px", "268868.870000"); // 1
    Leg_60_set.insert("268868.870000");
    all_values.push_back(Leg_60_set);
    all_compo_names.insert("Leg_60_set");

    {
      xml_element LegAID_60{"LegAID"};
      multiset<string> LegAID_60_set;
      LegAID_60.add_attribute("SecAltID", "LegSecurityAltID_t_322812432"); // 2
      LegAID_60_set.insert("LegSecurityAltID_t_322812432");
      LegAID_60.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_60_set.insert("5");
      all_values.push_back(LegAID_60_set);
      all_compo_names.insert("LegAID_60_set");

      Leg_60.add_element(LegAID_60);
    }
    elt.add_element(Leg_60);
  } // end Leg
  { // PosUnd
    xml_element PosUnd_0{"PosUnd"};
    multiset<string> PosUnd_0_set;
    PosUnd_0.add_attribute("UndSetPx", "15538361.300000"); // 1
    PosUnd_0_set.insert("15538361.300000");
    PosUnd_0.add_attribute("UndSetPxTyp", "1"); // 1
    PosUnd_0_set.insert("1");
    PosUnd_0.add_attribute("UndlyDlvAmt", "UnderlyingDeliveryAmount_t_1507436805"); // 1
    PosUnd_0_set.insert("UnderlyingDeliveryAmount_t_1507436805");
    all_values.push_back(PosUnd_0_set);
    all_compo_names.insert("PosUnd_0_set");

    {
      xml_element Undly_80{"Undly"};
      multiset<string> Undly_80_set;
      Undly_80.add_attribute("Sym", "UnderlyingSymbol_t_358693161"); // 2
      Undly_80_set.insert("UnderlyingSymbol_t_358693161");
      Undly_80.add_attribute("Sfx", "CD"); // 2
      Undly_80_set.insert("CD");
      Undly_80.add_attribute("ID", "UnderlyingSecurityID_t_1805156659"); // 2
      Undly_80_set.insert("UnderlyingSecurityID_t_1805156659");
      Undly_80.add_attribute("Src", "E"); // 2
      Undly_80_set.insert("E");
      Undly_80.add_attribute("Prod", "12"); // 2
      Undly_80_set.insert("12");
      Undly_80.add_attribute("CFI", "UnderlyingCFICode_t_810199084"); // 2
      Undly_80_set.insert("UnderlyingCFICode_t_810199084");
      Undly_80.add_attribute("SecTyp", "CMBS"); // 2
      Undly_80_set.insert("CMBS");
      Undly_80.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1219566142"); // 2
      Undly_80_set.insert("UnderlyingSecuritySubType_t_1219566142");
      Undly_80.add_attribute("MMY", "1767037556"); // 2
      Undly_80_set.insert("1767037556");
      Undly_80.add_attribute("Mat", "UnderlyingMaturityDate_t_650923848"); // 2
      Undly_80_set.insert("UnderlyingMaturityDate_t_650923848");
      Undly_80.add_attribute("MatTm", "2147194799"); // 2
      Undly_80_set.insert("2147194799");
      Undly_80.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1121703569"); // 2
      Undly_80_set.insert("UnderlyingCouponPaymentDate_t_1121703569");
      Undly_80.add_attribute("RestrctTyp", "MM"); // 2
      Undly_80_set.insert("MM");
      Undly_80.add_attribute("Snrty", "SR"); // 2
      Undly_80_set.insert("SR");
      Undly_80.add_attribute("NotlPctOut", "12406293.580000"); // 2
      Undly_80_set.insert("12406293.580000");
      Undly_80.add_attribute("OrigNotlPctOut", "20220634.470000"); // 2
      Undly_80_set.insert("20220634.470000");
      Undly_80.add_attribute("AttchPnt", "7835710.910000"); // 2
      Undly_80_set.insert("7835710.910000");
      Undly_80.add_attribute("DetchPnt", "18517881.660000"); // 2
      Undly_80_set.insert("18517881.660000");
      Undly_80.add_attribute("Issued", "UnderlyingIssueDate_t_1009468826"); // 2
      Undly_80_set.insert("UnderlyingIssueDate_t_1009468826");
      Undly_80.add_attribute("RepoCollSecTyp", "684436607"); // 2
      Undly_80_set.insert("684436607");
      Undly_80.add_attribute("RepoTrm", "1986150496"); // 2
      Undly_80_set.insert("1986150496");
      Undly_80.add_attribute("RepoRt", "394240.940000"); // 2
      Undly_80_set.insert("394240.940000");
      Undly_80.add_attribute("Fctr", "3438954.450000"); // 2
      Undly_80_set.insert("3438954.450000");
      Undly_80.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2102626523"); // 2
      Undly_80_set.insert("UnderlyingCreditRating_t_2102626523");
      Undly_80.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_66310982"); // 2
      Undly_80_set.insert("UnderlyingInstrRegistry_t_66310982");
      Undly_80.add_attribute("Ctry", "666707877"); // 2
      Undly_80_set.insert("666707877");
      Undly_80.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_543749844"); // 2
      Undly_80_set.insert("UnderlyingStateOrProvinceOfIssue_t_543749844");
      Undly_80.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_429617016"); // 2
      Undly_80_set.insert("UnderlyingLocaleOfIssue_t_429617016");
      Undly_80.add_attribute("Redeem", "UnderlyingRedemptionDate_t_73060359"); // 2
      Undly_80_set.insert("UnderlyingRedemptionDate_t_73060359");
      Undly_80.add_attribute("StrkPx", "7196897.860000"); // 2
      Undly_80_set.insert("7196897.860000");
      Undly_80.add_attribute("StrkCcy", "EUR"); // 2
      Undly_80_set.insert("EUR");
      Undly_80.add_attribute("OptA", "1426415504"); // 2
      Undly_80_set.insert("1426415504");
      Undly_80.add_attribute("Mult", "15947268.320000"); // 2
      Undly_80_set.insert("15947268.320000");
      Undly_80.add_attribute("MultTyp", "2"); // 2
      Undly_80_set.insert("2");
      Undly_80.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_80_set.insert("0");
      Undly_80.add_attribute("UOM", "MMbbl"); // 2
      Undly_80_set.insert("MMbbl");
      Undly_80.add_attribute("UOMQty", "12799051.190000"); // 2
      Undly_80_set.insert("12799051.190000");
      Undly_80.add_attribute("PxUOM", "Gal"); // 2
      Undly_80_set.insert("Gal");
      Undly_80.add_attribute("PxUOMQty", "20244798.250000"); // 2
      Undly_80_set.insert("20244798.250000");
      Undly_80.add_attribute("TmUnit", "Wk"); // 2
      Undly_80_set.insert("Wk");
      Undly_80.add_attribute("ExerStyle", "1"); // 2
      Undly_80_set.insert("1");
      Undly_80.add_attribute("CpnRt", "9986997.470000"); // 2
      Undly_80_set.insert("9986997.470000");
      Undly_80.add_attribute("Exch", "UnderlyingSecurityExchange_t_307494045"); // 2
      Undly_80_set.insert("UnderlyingSecurityExchange_t_307494045");
      Undly_80.add_attribute("Issr", "UnderlyingIssuer_t_2100778776"); // 2
      Undly_80_set.insert("UnderlyingIssuer_t_2100778776");
      Undly_80.add_attribute("EncUndIssrLen", "91845457"); // 2
      Undly_80_set.insert("91845457");
      Undly_80.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_182073844"); // 2
      Undly_80_set.insert("EncodedUnderlyingIssuer_t_182073844");
      Undly_80.add_attribute("Desc", "UnderlyingSecurityDesc_t_736866219"); // 2
      Undly_80_set.insert("UnderlyingSecurityDesc_t_736866219");
      Undly_80.add_attribute("EncUndSecDescLen", "1943633623"); // 2
      Undly_80_set.insert("1943633623");
      Undly_80.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1191542670"); // 2
      Undly_80_set.insert("EncodedUnderlyingSecurityDesc_t_1191542670");
      Undly_80.add_attribute("CPPgm", "UnderlyingCPProgram_t_1421302826"); // 2
      Undly_80_set.insert("UnderlyingCPProgram_t_1421302826");
      Undly_80.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1782300471"); // 2
      Undly_80_set.insert("UnderlyingCPRegType_t_1782300471");
      Undly_80.add_attribute("AllocPct", "12309667.650000"); // 2
      Undly_80_set.insert("12309667.650000");
      Undly_80.add_attribute("Ccy", "EUR"); // 2
      Undly_80_set.insert("EUR");
      Undly_80.add_attribute("Qty", "12972777.470000"); // 2
      Undly_80_set.insert("12972777.470000");
      Undly_80.add_attribute("SettlTyp", "4"); // 2
      Undly_80_set.insert("4");
      Undly_80.add_attribute("CashAmt", "UnderlyingCashAmount_t_133709543"); // 2
      Undly_80_set.insert("UnderlyingCashAmount_t_133709543");
      Undly_80.add_attribute("CashTyp", "DIFF"); // 2
      Undly_80_set.insert("DIFF");
      Undly_80.add_attribute("Px", "3574828.610000"); // 2
      Undly_80_set.insert("3574828.610000");
      Undly_80.add_attribute("DirtPx", "8533993.290000"); // 2
      Undly_80_set.insert("8533993.290000");
      Undly_80.add_attribute("EndPx", "15164649.360000"); // 2
      Undly_80_set.insert("15164649.360000");
      Undly_80.add_attribute("StartVal", "UnderlyingStartValue_t_789236382"); // 2
      Undly_80_set.insert("UnderlyingStartValue_t_789236382");
      Undly_80.add_attribute("CurVal", "UnderlyingCurrentValue_t_132331185"); // 2
      Undly_80_set.insert("UnderlyingCurrentValue_t_132331185");
      Undly_80.add_attribute("EndVal", "UnderlyingEndValue_t_963708121"); // 2
      Undly_80_set.insert("UnderlyingEndValue_t_963708121");
      Undly_80.add_attribute("AdjQty", "6262706.460000"); // 2
      Undly_80_set.insert("6262706.460000");
      Undly_80.add_attribute("FxRate", "14027109.050000"); // 2
      Undly_80_set.insert("14027109.050000");
      Undly_80.add_attribute("FxRateCalc", "M"); // 2
      Undly_80_set.insert("M");
      Undly_80.add_attribute("CapValu", "UnderlyingCapValue_t_1906175765"); // 2
      Undly_80_set.insert("UnderlyingCapValue_t_1906175765");
      Undly_80.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1745173119"); // 2
      Undly_80_set.insert("UnderlyingSettlMethod_t_1745173119");
      Undly_80.add_attribute("PutCall", "1098146567"); // 2
      Undly_80_set.insert("1098146567");
      all_values.push_back(Undly_80_set);
      all_compo_names.insert("Undly_80_set");

      {
        xml_element UndAID_80{"UndAID"};
        multiset<string> UndAID_80_set;
        UndAID_80.add_attribute("AltID", "UnderlyingSecurityAltID_t_1689521085"); // 3
        UndAID_80_set.insert("UnderlyingSecurityAltID_t_1689521085");
        UndAID_80.add_attribute("AltIDSrc", "G"); // 3
        UndAID_80_set.insert("G");
        all_values.push_back(UndAID_80_set);
        all_compo_names.insert("UndAID_80_set");

        Undly_80.add_element(UndAID_80);
      }
      {
        xml_element Stip_118{"Stip"};
        multiset<string> Stip_118_set;
        Stip_118.add_attribute("Typ", "ORDRINCR"); // 3
        Stip_118_set.insert("ORDRINCR");
        Stip_118.add_attribute("Val", "UnderlyingStipValue_t_1997015130"); // 3
        Stip_118_set.insert("UnderlyingStipValue_t_1997015130");
        all_values.push_back(Stip_118_set);
        all_compo_names.insert("Stip_118_set");

        Undly_80.add_element(Stip_118);
      }
      {
        xml_element Pty_312{"Pty"};
        multiset<string> Pty_312_set;
        Pty_312.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2040641613"); // 3
        Pty_312_set.insert("UnderlyingInstrumentPartyID_t_2040641613");
        Pty_312.add_attribute("Src", "5"); // 3
        Pty_312_set.insert("5");
        Pty_312.add_attribute("R", "77"); // 3
        Pty_312_set.insert("77");
        all_values.push_back(Pty_312_set);
        all_compo_names.insert("Pty_312_set");

        {
          xml_element Sub_312{"Sub"};
          multiset<string> Sub_312_set;
          Sub_312.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_630024184"); // 4
          Sub_312_set.insert("UnderlyingInstrumentPartySubID_t_630024184");
          Sub_312.add_attribute("Typ", "4"); // 4
          Sub_312_set.insert("4");
          all_values.push_back(Sub_312_set);
          all_compo_names.insert("Sub_312_set");

          Pty_312.add_element(Sub_312);
        }
        Undly_80.add_element(Pty_312);
      }
      PosUnd_0.add_element(Undly_80);
    }
    {
      xml_element UndDlvAmt_0{"UndDlvAmt"};
      multiset<string> UndDlvAmt_0_set;
      UndDlvAmt_0.add_attribute("PayAmt", "UnderlyingPayAmount_t_1223147997"); // 2
      UndDlvAmt_0_set.insert("UnderlyingPayAmount_t_1223147997");
      UndDlvAmt_0.add_attribute("ColAmt", "UnderlyingCollectAmount_t_2051327011"); // 2
      UndDlvAmt_0_set.insert("UnderlyingCollectAmount_t_2051327011");
      UndDlvAmt_0.add_attribute("StlDt", "UnderlyingSettlementDate_t_1619658571"); // 2
      UndDlvAmt_0_set.insert("UnderlyingSettlementDate_t_1619658571");
      UndDlvAmt_0.add_attribute("SetStat", "UnderlyingSettlementStatus_t_306631114"); // 2
      UndDlvAmt_0_set.insert("UnderlyingSettlementStatus_t_306631114");
      all_values.push_back(UndDlvAmt_0_set);
      all_compo_names.insert("UndDlvAmt_0_set");

      PosUnd_0.add_element(UndDlvAmt_0);
    }
    elt.add_element(PosUnd_0);
  } // end PosUnd
  { // PosUnd
    xml_element PosUnd_1{"PosUnd"};
    multiset<string> PosUnd_1_set;
    PosUnd_1.add_attribute("UndSetPx", "16690416.350000"); // 1
    PosUnd_1_set.insert("16690416.350000");
    PosUnd_1.add_attribute("UndSetPxTyp", "1"); // 1
    PosUnd_1_set.insert("1");
    PosUnd_1.add_attribute("UndlyDlvAmt", "UnderlyingDeliveryAmount_t_1603908861"); // 1
    PosUnd_1_set.insert("UnderlyingDeliveryAmount_t_1603908861");
    all_values.push_back(PosUnd_1_set);
    all_compo_names.insert("PosUnd_1_set");

    {
      xml_element Undly_81{"Undly"};
      multiset<string> Undly_81_set;
      Undly_81.add_attribute("Sym", "UnderlyingSymbol_t_1953464136"); // 2
      Undly_81_set.insert("UnderlyingSymbol_t_1953464136");
      Undly_81.add_attribute("Sfx", "WI"); // 2
      Undly_81_set.insert("WI");
      Undly_81.add_attribute("ID", "UnderlyingSecurityID_t_1183319976"); // 2
      Undly_81_set.insert("UnderlyingSecurityID_t_1183319976");
      Undly_81.add_attribute("Src", "6"); // 2
      Undly_81_set.insert("6");
      Undly_81.add_attribute("Prod", "10"); // 2
      Undly_81_set.insert("10");
      Undly_81.add_attribute("CFI", "UnderlyingCFICode_t_552301265"); // 2
      Undly_81_set.insert("UnderlyingCFICode_t_552301265");
      Undly_81.add_attribute("SecTyp", "SECLOAN"); // 2
      Undly_81_set.insert("SECLOAN");
      Undly_81.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_181574679"); // 2
      Undly_81_set.insert("UnderlyingSecuritySubType_t_181574679");
      Undly_81.add_attribute("MMY", "1516009386"); // 2
      Undly_81_set.insert("1516009386");
      Undly_81.add_attribute("Mat", "UnderlyingMaturityDate_t_1578970378"); // 2
      Undly_81_set.insert("UnderlyingMaturityDate_t_1578970378");
      Undly_81.add_attribute("MatTm", "1584285584"); // 2
      Undly_81_set.insert("1584285584");
      Undly_81.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_589676128"); // 2
      Undly_81_set.insert("UnderlyingCouponPaymentDate_t_589676128");
      Undly_81.add_attribute("RestrctTyp", "XR"); // 2
      Undly_81_set.insert("XR");
      Undly_81.add_attribute("Snrty", "SD"); // 2
      Undly_81_set.insert("SD");
      Undly_81.add_attribute("NotlPctOut", "16878226.950000"); // 2
      Undly_81_set.insert("16878226.950000");
      Undly_81.add_attribute("OrigNotlPctOut", "8796999.320000"); // 2
      Undly_81_set.insert("8796999.320000");
      Undly_81.add_attribute("AttchPnt", "11218378.920000"); // 2
      Undly_81_set.insert("11218378.920000");
      Undly_81.add_attribute("DetchPnt", "16371853.620000"); // 2
      Undly_81_set.insert("16371853.620000");
      Undly_81.add_attribute("Issued", "UnderlyingIssueDate_t_729231415"); // 2
      Undly_81_set.insert("UnderlyingIssueDate_t_729231415");
      Undly_81.add_attribute("RepoCollSecTyp", "1014995857"); // 2
      Undly_81_set.insert("1014995857");
      Undly_81.add_attribute("RepoTrm", "1678393486"); // 2
      Undly_81_set.insert("1678393486");
      Undly_81.add_attribute("RepoRt", "7608367.420000"); // 2
      Undly_81_set.insert("7608367.420000");
      Undly_81.add_attribute("Fctr", "16450200.420000"); // 2
      Undly_81_set.insert("16450200.420000");
      Undly_81.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1515751585"); // 2
      Undly_81_set.insert("UnderlyingCreditRating_t_1515751585");
      Undly_81.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1983984739"); // 2
      Undly_81_set.insert("UnderlyingInstrRegistry_t_1983984739");
      Undly_81.add_attribute("Ctry", "1548863405"); // 2
      Undly_81_set.insert("1548863405");
      Undly_81.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_987926508"); // 2
      Undly_81_set.insert("UnderlyingStateOrProvinceOfIssue_t_987926508");
      Undly_81.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_143132206"); // 2
      Undly_81_set.insert("UnderlyingLocaleOfIssue_t_143132206");
      Undly_81.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1070421392"); // 2
      Undly_81_set.insert("UnderlyingRedemptionDate_t_1070421392");
      Undly_81.add_attribute("StrkPx", "500611.300000"); // 2
      Undly_81_set.insert("500611.300000");
      Undly_81.add_attribute("StrkCcy", "USD"); // 2
      Undly_81_set.insert("USD");
      Undly_81.add_attribute("OptA", "1393388943"); // 2
      Undly_81_set.insert("1393388943");
      Undly_81.add_attribute("Mult", "7828773.960000"); // 2
      Undly_81_set.insert("7828773.960000");
      Undly_81.add_attribute("MultTyp", "1"); // 2
      Undly_81_set.insert("1");
      Undly_81.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_81_set.insert("2");
      Undly_81.add_attribute("UOM", "Bu"); // 2
      Undly_81_set.insert("Bu");
      Undly_81.add_attribute("UOMQty", "19925649.610000"); // 2
      Undly_81_set.insert("19925649.610000");
      Undly_81.add_attribute("PxUOM", "Alw"); // 2
      Undly_81_set.insert("Alw");
      Undly_81.add_attribute("PxUOMQty", "7037043.990000"); // 2
      Undly_81_set.insert("7037043.990000");
      Undly_81.add_attribute("TmUnit", "Yr"); // 2
      Undly_81_set.insert("Yr");
      Undly_81.add_attribute("ExerStyle", "0"); // 2
      Undly_81_set.insert("0");
      Undly_81.add_attribute("CpnRt", "12933805.270000"); // 2
      Undly_81_set.insert("12933805.270000");
      Undly_81.add_attribute("Exch", "UnderlyingSecurityExchange_t_614230539"); // 2
      Undly_81_set.insert("UnderlyingSecurityExchange_t_614230539");
      Undly_81.add_attribute("Issr", "UnderlyingIssuer_t_95500460"); // 2
      Undly_81_set.insert("UnderlyingIssuer_t_95500460");
      Undly_81.add_attribute("EncUndIssrLen", "833719574"); // 2
      Undly_81_set.insert("833719574");
      Undly_81.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1493930471"); // 2
      Undly_81_set.insert("EncodedUnderlyingIssuer_t_1493930471");
      Undly_81.add_attribute("Desc", "UnderlyingSecurityDesc_t_1217338352"); // 2
      Undly_81_set.insert("UnderlyingSecurityDesc_t_1217338352");
      Undly_81.add_attribute("EncUndSecDescLen", "323421288"); // 2
      Undly_81_set.insert("323421288");
      Undly_81.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_75678238"); // 2
      Undly_81_set.insert("EncodedUnderlyingSecurityDesc_t_75678238");
      Undly_81.add_attribute("CPPgm", "UnderlyingCPProgram_t_84850562"); // 2
      Undly_81_set.insert("UnderlyingCPProgram_t_84850562");
      Undly_81.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2001814774"); // 2
      Undly_81_set.insert("UnderlyingCPRegType_t_2001814774");
      Undly_81.add_attribute("AllocPct", "8365149.800000"); // 2
      Undly_81_set.insert("8365149.800000");
      Undly_81.add_attribute("Ccy", "JPY"); // 2
      Undly_81_set.insert("JPY");
      Undly_81.add_attribute("Qty", "6730160.720000"); // 2
      Undly_81_set.insert("6730160.720000");
      Undly_81.add_attribute("SettlTyp", "5"); // 2
      Undly_81_set.insert("5");
      Undly_81.add_attribute("CashAmt", "UnderlyingCashAmount_t_210525572"); // 2
      Undly_81_set.insert("UnderlyingCashAmount_t_210525572");
      Undly_81.add_attribute("CashTyp", "FIXED"); // 2
      Undly_81_set.insert("FIXED");
      Undly_81.add_attribute("Px", "541881.050000"); // 2
      Undly_81_set.insert("541881.050000");
      Undly_81.add_attribute("DirtPx", "2605867.030000"); // 2
      Undly_81_set.insert("2605867.030000");
      Undly_81.add_attribute("EndPx", "4157056.970000"); // 2
      Undly_81_set.insert("4157056.970000");
      Undly_81.add_attribute("StartVal", "UnderlyingStartValue_t_930589985"); // 2
      Undly_81_set.insert("UnderlyingStartValue_t_930589985");
      Undly_81.add_attribute("CurVal", "UnderlyingCurrentValue_t_1653975646"); // 2
      Undly_81_set.insert("UnderlyingCurrentValue_t_1653975646");
      Undly_81.add_attribute("EndVal", "UnderlyingEndValue_t_1198583093"); // 2
      Undly_81_set.insert("UnderlyingEndValue_t_1198583093");
      Undly_81.add_attribute("AdjQty", "19704552.150000"); // 2
      Undly_81_set.insert("19704552.150000");
      Undly_81.add_attribute("FxRate", "9491244.360000"); // 2
      Undly_81_set.insert("9491244.360000");
      Undly_81.add_attribute("FxRateCalc", "M"); // 2
      Undly_81_set.insert("M");
      Undly_81.add_attribute("CapValu", "UnderlyingCapValue_t_1815536529"); // 2
      Undly_81_set.insert("UnderlyingCapValue_t_1815536529");
      Undly_81.add_attribute("SetMeth", "UnderlyingSettlMethod_t_425847904"); // 2
      Undly_81_set.insert("UnderlyingSettlMethod_t_425847904");
      Undly_81.add_attribute("PutCall", "1089982505"); // 2
      Undly_81_set.insert("1089982505");
      all_values.push_back(Undly_81_set);
      all_compo_names.insert("Undly_81_set");

      {
        xml_element UndAID_81{"UndAID"};
        multiset<string> UndAID_81_set;
        UndAID_81.add_attribute("AltID", "UnderlyingSecurityAltID_t_1092104572"); // 3
        UndAID_81_set.insert("UnderlyingSecurityAltID_t_1092104572");
        UndAID_81.add_attribute("AltIDSrc", "4"); // 3
        UndAID_81_set.insert("4");
        all_values.push_back(UndAID_81_set);
        all_compo_names.insert("UndAID_81_set");

        Undly_81.add_element(UndAID_81);
      }
      {
        xml_element Stip_119{"Stip"};
        multiset<string> Stip_119_set;
        Stip_119.add_attribute("Typ", "MHP"); // 3
        Stip_119_set.insert("MHP");
        Stip_119.add_attribute("Val", "UnderlyingStipValue_t_1706335111"); // 3
        Stip_119_set.insert("UnderlyingStipValue_t_1706335111");
        all_values.push_back(Stip_119_set);
        all_compo_names.insert("Stip_119_set");

        Undly_81.add_element(Stip_119);
      }
      {
        xml_element Pty_313{"Pty"};
        multiset<string> Pty_313_set;
        Pty_313.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1582357417"); // 3
        Pty_313_set.insert("UnderlyingInstrumentPartyID_t_1582357417");
        Pty_313.add_attribute("Src", "8"); // 3
        Pty_313_set.insert("8");
        Pty_313.add_attribute("R", "31"); // 3
        Pty_313_set.insert("31");
        all_values.push_back(Pty_313_set);
        all_compo_names.insert("Pty_313_set");

        {
          xml_element Sub_313{"Sub"};
          multiset<string> Sub_313_set;
          Sub_313.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_652212121"); // 4
          Sub_313_set.insert("UnderlyingInstrumentPartySubID_t_652212121");
          Sub_313.add_attribute("Typ", "9"); // 4
          Sub_313_set.insert("9");
          all_values.push_back(Sub_313_set);
          all_compo_names.insert("Sub_313_set");

          Pty_313.add_element(Sub_313);
        }
        Undly_81.add_element(Pty_313);
      }
      PosUnd_1.add_element(Undly_81);
    }
    {
      xml_element UndDlvAmt_1{"UndDlvAmt"};
      multiset<string> UndDlvAmt_1_set;
      UndDlvAmt_1.add_attribute("PayAmt", "UnderlyingPayAmount_t_1128460173"); // 2
      UndDlvAmt_1_set.insert("UnderlyingPayAmount_t_1128460173");
      UndDlvAmt_1.add_attribute("ColAmt", "UnderlyingCollectAmount_t_737062683"); // 2
      UndDlvAmt_1_set.insert("UnderlyingCollectAmount_t_737062683");
      UndDlvAmt_1.add_attribute("StlDt", "UnderlyingSettlementDate_t_1247351374"); // 2
      UndDlvAmt_1_set.insert("UnderlyingSettlementDate_t_1247351374");
      UndDlvAmt_1.add_attribute("SetStat", "UnderlyingSettlementStatus_t_1964975154"); // 2
      UndDlvAmt_1_set.insert("UnderlyingSettlementStatus_t_1964975154");
      all_values.push_back(UndDlvAmt_1_set);
      all_compo_names.insert("UndDlvAmt_1_set");

      PosUnd_1.add_element(UndDlvAmt_1);
    }
    elt.add_element(PosUnd_1);
  } // end PosUnd
  { // Qty
    xml_element Qty_10{"Qty"};
    multiset<string> Qty_10_set;
    Qty_10.add_attribute("Typ", "DN"); // 1
    Qty_10_set.insert("DN");
    Qty_10.add_attribute("Long", "4905075.780000"); // 1
    Qty_10_set.insert("4905075.780000");
    Qty_10.add_attribute("Short", "14507000.000000"); // 1
    Qty_10_set.insert("14507000.000000");
    Qty_10.add_attribute("Stat", "2"); // 1
    Qty_10_set.insert("2");
    Qty_10.add_attribute("QtyDt", "QuantityDate_t_1306655856"); // 1
    Qty_10_set.insert("QuantityDate_t_1306655856");
    all_values.push_back(Qty_10_set);
    all_compo_names.insert("Qty_10_set");

    {
      xml_element Pty_314{"Pty"};
      multiset<string> Pty_314_set;
      Pty_314.add_attribute("ID", "NestedPartyID_t_1504888105"); // 2
      Pty_314_set.insert("NestedPartyID_t_1504888105");
      Pty_314.add_attribute("Src", "G"); // 2
      Pty_314_set.insert("G");
      Pty_314.add_attribute("R", "26"); // 2
      Pty_314_set.insert("26");
      all_values.push_back(Pty_314_set);
      all_compo_names.insert("Pty_314_set");

      {
        xml_element Sub_314{"Sub"};
        multiset<string> Sub_314_set;
        Sub_314.add_attribute("ID", "NestedPartySubID_t_287994443"); // 3
        Sub_314_set.insert("NestedPartySubID_t_287994443");
        Sub_314.add_attribute("Typ", "1"); // 3
        Sub_314_set.insert("1");
        all_values.push_back(Sub_314_set);
        all_compo_names.insert("Sub_314_set");

        Pty_314.add_element(Sub_314);
      }
      Qty_10.add_element(Pty_314);
    }
    elt.add_element(Qty_10);
  } // end Qty
  { // Amt
    xml_element Amt_15{"Amt"};
    multiset<string> Amt_15_set;
    Amt_15.add_attribute("Typ", "TVAR"); // 1
    Amt_15_set.insert("TVAR");
    Amt_15.add_attribute("Amt", "PosAmt_t_1396679148"); // 1
    Amt_15_set.insert("PosAmt_t_1396679148");
    Amt_15.add_attribute("Ccy", "PositionCurrency_t_1159739105"); // 1
    Amt_15_set.insert("PositionCurrency_t_1159739105");
    all_values.push_back(Amt_15_set);
    all_compo_names.insert("Amt_15_set");

    elt.add_element(Amt_15);
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
