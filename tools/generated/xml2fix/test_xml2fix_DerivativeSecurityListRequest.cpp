#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecListReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_296523060"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("SecurityReqID_t_296523060");
  elt.add_attribute("ListReqTyp", "2"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("2");
  elt.add_attribute("MktID", "MarketID_t_1512288846"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("MarketID_t_1512288846");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1808518530"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("MarketSegmentID_t_1808518530");
  elt.add_attribute("SubTyp", "SecuritySubType_t_48489923"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("SecuritySubType_t_48489923");
  elt.add_attribute("Ccy", "USD"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("USD");
  elt.add_attribute("Txt", "Text_t_872516733"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("Text_t_872516733");
  elt.add_attribute("EncTxtLen", "756313790"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("756313790");
  elt.add_attribute("EncTxt", "EncodedText_t_1396138734"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("EncodedText_t_1396138734");
  elt.add_attribute("SesID", "1"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "6"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("6");
  elt.add_attribute("SubReqTyp", "2"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("2");
  all_values.push_back(DerivativeSecurityListRequest_message_t_0);
  all_compo_names.insert("DerivativeSecurityListRequest_message_t");

  { // Hdr
    xml_element Hdr_27{"Hdr"};
    multiset<string> Hdr_27_set;
    Hdr_27.add_attribute("SeqNum", "624712647"); // 1
    Hdr_27_set.insert("624712647");
    Hdr_27.add_attribute("SID", "SenderCompID_t_863802073"); // 1
    Hdr_27_set.insert("SenderCompID_t_863802073");
    Hdr_27.add_attribute("TID", "TargetCompID_t_678782971"); // 1
    Hdr_27_set.insert("TargetCompID_t_678782971");
    Hdr_27.add_attribute("OBID", "OnBehalfOfCompID_t_431917494"); // 1
    Hdr_27_set.insert("OnBehalfOfCompID_t_431917494");
    Hdr_27.add_attribute("D2ID", "DeliverToCompID_t_929650248"); // 1
    Hdr_27_set.insert("DeliverToCompID_t_929650248");
    Hdr_27.add_attribute("SSub", "SenderSubID_t_2039952556"); // 1
    Hdr_27_set.insert("SenderSubID_t_2039952556");
    Hdr_27.add_attribute("SLoc", "SenderLocationID_t_1188227025"); // 1
    Hdr_27_set.insert("SenderLocationID_t_1188227025");
    Hdr_27.add_attribute("TSub", "TargetSubID_t_1681609864"); // 1
    Hdr_27_set.insert("TargetSubID_t_1681609864");
    Hdr_27.add_attribute("TLoc", "TargetLocationID_t_1538755048"); // 1
    Hdr_27_set.insert("TargetLocationID_t_1538755048");
    Hdr_27.add_attribute("OBSub", "OnBehalfOfSubID_t_428643544"); // 1
    Hdr_27_set.insert("OnBehalfOfSubID_t_428643544");
    Hdr_27.add_attribute("OBLoc", "OnBehalfOfLocationID_t_626836205"); // 1
    Hdr_27_set.insert("OnBehalfOfLocationID_t_626836205");
    Hdr_27.add_attribute("D2Sub", "DeliverToSubID_t_726480440"); // 1
    Hdr_27_set.insert("DeliverToSubID_t_726480440");
    Hdr_27.add_attribute("D2Loc", "DeliverToLocationID_t_1511172383"); // 1
    Hdr_27_set.insert("DeliverToLocationID_t_1511172383");
    Hdr_27.add_attribute("PosDup", "Y"); // 1
    Hdr_27_set.insert("Y");
    Hdr_27.add_attribute("PosRsnd", "Y"); // 1
    Hdr_27_set.insert("Y");
    Hdr_27.add_attribute("Snt", "SendingTime_t_1222174705"); // 1
    Hdr_27_set.insert("SendingTime_t_1222174705");
    Hdr_27.add_attribute("OrigSnt", "OrigSendingTime_t_496397629"); // 1
    Hdr_27_set.insert("OrigSendingTime_t_496397629");
    Hdr_27.add_attribute("MsgEncd", "MessageEncoding_t_1762801640"); // 1
    Hdr_27_set.insert("MessageEncoding_t_1762801640");
    all_values.push_back(Hdr_27_set);
    all_compo_names.insert("Hdr_27_set");

    {
      xml_element Hop_27{"Hop"};
      multiset<string> Hop_27_set;
      Hop_27.add_attribute("ID", "HopCompID_t_1518697765"); // 2
      Hop_27_set.insert("HopCompID_t_1518697765");
      Hop_27.add_attribute("Ref", "1894482309"); // 2
      Hop_27_set.insert("1894482309");
      Hop_27.add_attribute("Snt", "HopSendingTime_t_1127606838"); // 2
      Hop_27_set.insert("HopSendingTime_t_1127606838");
      all_values.push_back(Hop_27_set);
      all_compo_names.insert("Hop_27_set");

      Hdr_27.add_element(Hop_27);
    }
    elt.add_element(Hdr_27);
  } // end Hdr
  { // Undly
    xml_element Undly_25{"Undly"};
    multiset<string> Undly_25_set;
    Undly_25.add_attribute("Sym", "UnderlyingSymbol_t_1179732647"); // 1
    Undly_25_set.insert("UnderlyingSymbol_t_1179732647");
    Undly_25.add_attribute("Sfx", "CD"); // 1
    Undly_25_set.insert("CD");
    Undly_25.add_attribute("ID", "UnderlyingSecurityID_t_1772001943"); // 1
    Undly_25_set.insert("UnderlyingSecurityID_t_1772001943");
    Undly_25.add_attribute("Src", "C"); // 1
    Undly_25_set.insert("C");
    Undly_25.add_attribute("Prod", "2"); // 1
    Undly_25_set.insert("2");
    Undly_25.add_attribute("CFI", "UnderlyingCFICode_t_380832085"); // 1
    Undly_25_set.insert("UnderlyingCFICode_t_380832085");
    Undly_25.add_attribute("SecTyp", "TAXA"); // 1
    Undly_25_set.insert("TAXA");
    Undly_25.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1856742796"); // 1
    Undly_25_set.insert("UnderlyingSecuritySubType_t_1856742796");
    Undly_25.add_attribute("MMY", "1738213514"); // 1
    Undly_25_set.insert("1738213514");
    Undly_25.add_attribute("Mat", "UnderlyingMaturityDate_t_1872531693"); // 1
    Undly_25_set.insert("UnderlyingMaturityDate_t_1872531693");
    Undly_25.add_attribute("MatTm", "333971795"); // 1
    Undly_25_set.insert("333971795");
    Undly_25.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_454531939"); // 1
    Undly_25_set.insert("UnderlyingCouponPaymentDate_t_454531939");
    Undly_25.add_attribute("RestrctTyp", "FR"); // 1
    Undly_25_set.insert("FR");
    Undly_25.add_attribute("Snrty", "SB"); // 1
    Undly_25_set.insert("SB");
    Undly_25.add_attribute("NotlPctOut", "13841821.870000"); // 1
    Undly_25_set.insert("13841821.870000");
    Undly_25.add_attribute("OrigNotlPctOut", "2962999.240000"); // 1
    Undly_25_set.insert("2962999.240000");
    Undly_25.add_attribute("AttchPnt", "19541163.150000"); // 1
    Undly_25_set.insert("19541163.150000");
    Undly_25.add_attribute("DetchPnt", "9183084.030000"); // 1
    Undly_25_set.insert("9183084.030000");
    Undly_25.add_attribute("Issued", "UnderlyingIssueDate_t_1835054972"); // 1
    Undly_25_set.insert("UnderlyingIssueDate_t_1835054972");
    Undly_25.add_attribute("RepoCollSecTyp", "235276211"); // 1
    Undly_25_set.insert("235276211");
    Undly_25.add_attribute("RepoTrm", "1545144609"); // 1
    Undly_25_set.insert("1545144609");
    Undly_25.add_attribute("RepoRt", "4140517.650000"); // 1
    Undly_25_set.insert("4140517.650000");
    Undly_25.add_attribute("Fctr", "17464485.940000"); // 1
    Undly_25_set.insert("17464485.940000");
    Undly_25.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1316283186"); // 1
    Undly_25_set.insert("UnderlyingCreditRating_t_1316283186");
    Undly_25.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_460778524"); // 1
    Undly_25_set.insert("UnderlyingInstrRegistry_t_460778524");
    Undly_25.add_attribute("Ctry", "821139651"); // 1
    Undly_25_set.insert("821139651");
    Undly_25.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1812680815"); // 1
    Undly_25_set.insert("UnderlyingStateOrProvinceOfIssue_t_1812680815");
    Undly_25.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_76096517"); // 1
    Undly_25_set.insert("UnderlyingLocaleOfIssue_t_76096517");
    Undly_25.add_attribute("Redeem", "UnderlyingRedemptionDate_t_192353768"); // 1
    Undly_25_set.insert("UnderlyingRedemptionDate_t_192353768");
    Undly_25.add_attribute("StrkPx", "15596794.760000"); // 1
    Undly_25_set.insert("15596794.760000");
    Undly_25.add_attribute("StrkCcy", "EUR"); // 1
    Undly_25_set.insert("EUR");
    Undly_25.add_attribute("OptA", "1355168060"); // 1
    Undly_25_set.insert("1355168060");
    Undly_25.add_attribute("Mult", "8282216.500000"); // 1
    Undly_25_set.insert("8282216.500000");
    Undly_25.add_attribute("MultTyp", "2"); // 1
    Undly_25_set.insert("2");
    Undly_25.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_25_set.insert("3");
    Undly_25.add_attribute("UOM", "MMbbl"); // 1
    Undly_25_set.insert("MMbbl");
    Undly_25.add_attribute("UOMQty", "14439232.880000"); // 1
    Undly_25_set.insert("14439232.880000");
    Undly_25.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_25_set.insert("MMbbl");
    Undly_25.add_attribute("PxUOMQty", "7997836.010000"); // 1
    Undly_25_set.insert("7997836.010000");
    Undly_25.add_attribute("TmUnit", "Mo"); // 1
    Undly_25_set.insert("Mo");
    Undly_25.add_attribute("ExerStyle", "1"); // 1
    Undly_25_set.insert("1");
    Undly_25.add_attribute("CpnRt", "12543155.400000"); // 1
    Undly_25_set.insert("12543155.400000");
    Undly_25.add_attribute("Exch", "UnderlyingSecurityExchange_t_1572802350"); // 1
    Undly_25_set.insert("UnderlyingSecurityExchange_t_1572802350");
    Undly_25.add_attribute("Issr", "UnderlyingIssuer_t_684809963"); // 1
    Undly_25_set.insert("UnderlyingIssuer_t_684809963");
    Undly_25.add_attribute("EncUndIssrLen", "491014080"); // 1
    Undly_25_set.insert("491014080");
    Undly_25.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1869102274"); // 1
    Undly_25_set.insert("EncodedUnderlyingIssuer_t_1869102274");
    Undly_25.add_attribute("Desc", "UnderlyingSecurityDesc_t_491442630"); // 1
    Undly_25_set.insert("UnderlyingSecurityDesc_t_491442630");
    Undly_25.add_attribute("EncUndSecDescLen", "1409322483"); // 1
    Undly_25_set.insert("1409322483");
    Undly_25.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1556673599"); // 1
    Undly_25_set.insert("EncodedUnderlyingSecurityDesc_t_1556673599");
    Undly_25.add_attribute("CPPgm", "UnderlyingCPProgram_t_726718841"); // 1
    Undly_25_set.insert("UnderlyingCPProgram_t_726718841");
    Undly_25.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_806983444"); // 1
    Undly_25_set.insert("UnderlyingCPRegType_t_806983444");
    Undly_25.add_attribute("AllocPct", "19707253.640000"); // 1
    Undly_25_set.insert("19707253.640000");
    Undly_25.add_attribute("Ccy", "JPY"); // 1
    Undly_25_set.insert("JPY");
    Undly_25.add_attribute("Qty", "2840202.400000"); // 1
    Undly_25_set.insert("2840202.400000");
    Undly_25.add_attribute("SettlTyp", "5"); // 1
    Undly_25_set.insert("5");
    Undly_25.add_attribute("CashAmt", "UnderlyingCashAmount_t_1788463797"); // 1
    Undly_25_set.insert("UnderlyingCashAmount_t_1788463797");
    Undly_25.add_attribute("CashTyp", "DIFF"); // 1
    Undly_25_set.insert("DIFF");
    Undly_25.add_attribute("Px", "13391772.080000"); // 1
    Undly_25_set.insert("13391772.080000");
    Undly_25.add_attribute("DirtPx", "12006596.250000"); // 1
    Undly_25_set.insert("12006596.250000");
    Undly_25.add_attribute("EndPx", "15638201.130000"); // 1
    Undly_25_set.insert("15638201.130000");
    Undly_25.add_attribute("StartVal", "UnderlyingStartValue_t_563779975"); // 1
    Undly_25_set.insert("UnderlyingStartValue_t_563779975");
    Undly_25.add_attribute("CurVal", "UnderlyingCurrentValue_t_408344038"); // 1
    Undly_25_set.insert("UnderlyingCurrentValue_t_408344038");
    Undly_25.add_attribute("EndVal", "UnderlyingEndValue_t_244558115"); // 1
    Undly_25_set.insert("UnderlyingEndValue_t_244558115");
    Undly_25.add_attribute("AdjQty", "12737154.600000"); // 1
    Undly_25_set.insert("12737154.600000");
    Undly_25.add_attribute("FxRate", "2840337.680000"); // 1
    Undly_25_set.insert("2840337.680000");
    Undly_25.add_attribute("FxRateCalc", "D"); // 1
    Undly_25_set.insert("D");
    Undly_25.add_attribute("CapValu", "UnderlyingCapValue_t_570155101"); // 1
    Undly_25_set.insert("UnderlyingCapValue_t_570155101");
    Undly_25.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2016466294"); // 1
    Undly_25_set.insert("UnderlyingSettlMethod_t_2016466294");
    Undly_25.add_attribute("PutCall", "105911804"); // 1
    Undly_25_set.insert("105911804");
    all_values.push_back(Undly_25_set);
    all_compo_names.insert("Undly_25_set");

    {
      xml_element UndAID_25{"UndAID"};
      multiset<string> UndAID_25_set;
      UndAID_25.add_attribute("AltID", "UnderlyingSecurityAltID_t_1739126434"); // 2
      UndAID_25_set.insert("UnderlyingSecurityAltID_t_1739126434");
      UndAID_25.add_attribute("AltIDSrc", "L"); // 2
      UndAID_25_set.insert("L");
      all_values.push_back(UndAID_25_set);
      all_compo_names.insert("UndAID_25_set");

      Undly_25.add_element(UndAID_25);
    }
    {
      xml_element Stip_46{"Stip"};
      multiset<string> Stip_46_set;
      Stip_46.add_attribute("Typ", "REFTRADE"); // 2
      Stip_46_set.insert("REFTRADE");
      Stip_46.add_attribute("Val", "UnderlyingStipValue_t_1164445136"); // 2
      Stip_46_set.insert("UnderlyingStipValue_t_1164445136");
      all_values.push_back(Stip_46_set);
      all_compo_names.insert("Stip_46_set");

      Undly_25.add_element(Stip_46);
    }
    {
      xml_element Pty_124{"Pty"};
      multiset<string> Pty_124_set;
      Pty_124.add_attribute("ID", "UnderlyingInstrumentPartyID_t_472713282"); // 2
      Pty_124_set.insert("UnderlyingInstrumentPartyID_t_472713282");
      Pty_124.add_attribute("Src", "G"); // 2
      Pty_124_set.insert("G");
      Pty_124.add_attribute("R", "2"); // 2
      Pty_124_set.insert("2");
      all_values.push_back(Pty_124_set);
      all_compo_names.insert("Pty_124_set");

      {
        xml_element Sub_124{"Sub"};
        multiset<string> Sub_124_set;
        Sub_124.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_964155912"); // 3
        Sub_124_set.insert("UnderlyingInstrumentPartySubID_t_964155912");
        Sub_124.add_attribute("Typ", "29"); // 3
        Sub_124_set.insert("29");
        all_values.push_back(Sub_124_set);
        all_compo_names.insert("Sub_124_set");

        Pty_124.add_element(Sub_124);
      }
      Undly_25.add_element(Pty_124);
    }
    elt.add_element(Undly_25);
  } // end Undly
  { // DerivInstrmt
    xml_element DerivInstrmt_1{"DerivInstrmt"};
    multiset<string> DerivInstrmt_1_set;
    DerivInstrmt_1.add_attribute("Sym", "DerivativeSymbol_t_295253714"); // 1
    DerivInstrmt_1_set.insert("DerivativeSymbol_t_295253714");
    DerivInstrmt_1.add_attribute("Sfx", "CD"); // 1
    DerivInstrmt_1_set.insert("CD");
    DerivInstrmt_1.add_attribute("ID", "DerivativeSecurityID_t_1920063705"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityID_t_1920063705");
    DerivInstrmt_1.add_attribute("Src", "K"); // 1
    DerivInstrmt_1_set.insert("K");
    DerivInstrmt_1.add_attribute("Prod", "8"); // 1
    DerivInstrmt_1_set.insert("8");
    DerivInstrmt_1.add_attribute("ProdCmplx", "DerivativeProductComplex_t_1895846687"); // 1
    DerivInstrmt_1_set.insert("DerivativeProductComplex_t_1895846687");
    DerivInstrmt_1.add_attribute("FlexProdElig", "true"); // 1
    DerivInstrmt_1_set.insert("true");
    DerivInstrmt_1.add_attribute("SecGrp", "DerivativeSecurityGroup_t_1015898333"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityGroup_t_1015898333");
    DerivInstrmt_1.add_attribute("CFI", "DerivativeCFICode_t_1536826837"); // 1
    DerivInstrmt_1_set.insert("DerivativeCFICode_t_1536826837");
    DerivInstrmt_1.add_attribute("SecTyp", "TERM"); // 1
    DerivInstrmt_1_set.insert("TERM");
    DerivInstrmt_1.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_207591893"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecuritySubType_t_207591893");
    DerivInstrmt_1.add_attribute("MMY", "590002814"); // 1
    DerivInstrmt_1_set.insert("590002814");
    DerivInstrmt_1.add_attribute("MatDt", "DerivativeMaturityDate_t_178968893"); // 1
    DerivInstrmt_1_set.insert("DerivativeMaturityDate_t_178968893");
    DerivInstrmt_1.add_attribute("MatTm", "771371869"); // 1
    DerivInstrmt_1_set.insert("771371869");
    DerivInstrmt_1.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_998346852"); // 1
    DerivInstrmt_1_set.insert("DerivativeSettleOnOpenFlag_t_998346852");
    DerivInstrmt_1.add_attribute("AsgnMeth", "423527008"); // 1
    DerivInstrmt_1_set.insert("423527008");
    DerivInstrmt_1.add_attribute("Status", "2"); // 1
    DerivInstrmt_1_set.insert("2");
    DerivInstrmt_1.add_attribute("IssDt", "DerivativeIssueDate_t_1282380620"); // 1
    DerivInstrmt_1_set.insert("DerivativeIssueDate_t_1282380620");
    DerivInstrmt_1.add_attribute("Rgstry", "DerivativeInstrRegistry_t_1877138859"); // 1
    DerivInstrmt_1_set.insert("DerivativeInstrRegistry_t_1877138859");
    DerivInstrmt_1.add_attribute("Ctry", "467758782"); // 1
    DerivInstrmt_1_set.insert("467758782");
    DerivInstrmt_1.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_1151363266"); // 1
    DerivInstrmt_1_set.insert("DerivativeStateOrProvinceOfIssue_t_1151363266");
    DerivInstrmt_1.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_1983050664"); // 1
    DerivInstrmt_1_set.insert("DerivativeLocaleOfIssue_t_1983050664");
    DerivInstrmt_1.add_attribute("StrkPx", "594015.690000"); // 1
    DerivInstrmt_1_set.insert("594015.690000");
    DerivInstrmt_1.add_attribute("StrkCcy", "EUR"); // 1
    DerivInstrmt_1_set.insert("EUR");
    DerivInstrmt_1.add_attribute("StrkMult", "12238467.050000"); // 1
    DerivInstrmt_1_set.insert("12238467.050000");
    DerivInstrmt_1.add_attribute("StrkValu", "14119798.680000"); // 1
    DerivInstrmt_1_set.insert("14119798.680000");
    DerivInstrmt_1.add_attribute("OptAt", "899552138"); // 1
    DerivInstrmt_1_set.insert("899552138");
    DerivInstrmt_1.add_attribute("Mult", "21099104.680000"); // 1
    DerivInstrmt_1_set.insert("21099104.680000");
    DerivInstrmt_1.add_attribute("MultTyp", "2"); // 1
    DerivInstrmt_1_set.insert("2");
    DerivInstrmt_1.add_attribute("FlowSchedTyp", "3"); // 1
    DerivInstrmt_1_set.insert("3");
    DerivInstrmt_1.add_attribute("MinPxIncr", "2576805.340000"); // 1
    DerivInstrmt_1_set.insert("2576805.340000");
    DerivInstrmt_1.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_1919526887"); // 1
    DerivInstrmt_1_set.insert("DerivativeMinPriceIncrementAmount_t_1919526887");
    DerivInstrmt_1.add_attribute("UOM", "MWh"); // 1
    DerivInstrmt_1_set.insert("MWh");
    DerivInstrmt_1.add_attribute("UOMQty", "3761759.640000"); // 1
    DerivInstrmt_1_set.insert("3761759.640000");
    DerivInstrmt_1.add_attribute("PxUOM", "tn"); // 1
    DerivInstrmt_1_set.insert("tn");
    DerivInstrmt_1.add_attribute("PxUOMQty", "15335754.950000"); // 1
    DerivInstrmt_1_set.insert("15335754.950000");
    DerivInstrmt_1.add_attribute("SettlMeth", "P"); // 1
    DerivInstrmt_1_set.insert("P");
    DerivInstrmt_1.add_attribute("PxQteMeth", "INT"); // 1
    DerivInstrmt_1_set.insert("INT");
    DerivInstrmt_1.add_attribute("ValMeth", "CDSD"); // 1
    DerivInstrmt_1_set.insert("CDSD");
    DerivInstrmt_1.add_attribute("ListMeth", "1"); // 1
    DerivInstrmt_1_set.insert("1");
    DerivInstrmt_1.add_attribute("CapPx", "8646083.600000"); // 1
    DerivInstrmt_1_set.insert("8646083.600000");
    DerivInstrmt_1.add_attribute("FlrPx", "15129214.980000"); // 1
    DerivInstrmt_1_set.insert("15129214.980000");
    DerivInstrmt_1.add_attribute("PutCall", "0"); // 1
    DerivInstrmt_1_set.insert("0");
    DerivInstrmt_1.add_attribute("ExerStyle", "0"); // 1
    DerivInstrmt_1_set.insert("0");
    DerivInstrmt_1.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_363784703"); // 1
    DerivInstrmt_1_set.insert("DerivativeOptPayAmount_t_363784703");
    DerivInstrmt_1.add_attribute("TmUnit", "Yr"); // 1
    DerivInstrmt_1_set.insert("Yr");
    DerivInstrmt_1.add_attribute("Exch", "DerivativeSecurityExchange_t_1533583910"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityExchange_t_1533583910");
    DerivInstrmt_1.add_attribute("PosLmt", "1646165323"); // 1
    DerivInstrmt_1_set.insert("1646165323");
    DerivInstrmt_1.add_attribute("NTPosLmt", "1873475176"); // 1
    DerivInstrmt_1_set.insert("1873475176");
    DerivInstrmt_1.add_attribute("Issr", "DerivativeIssuer_t_2001342693"); // 1
    DerivInstrmt_1_set.insert("DerivativeIssuer_t_2001342693");
    DerivInstrmt_1.add_attribute("EncIssrLen", "650044942"); // 1
    DerivInstrmt_1_set.insert("650044942");
    DerivInstrmt_1.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_1709042192"); // 1
    DerivInstrmt_1_set.insert("DerivativeEncodedIssuer_t_1709042192");
    DerivInstrmt_1.add_attribute("Desc", "DerivativeSecurityDesc_t_2060744262"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityDesc_t_2060744262");
    DerivInstrmt_1.add_attribute("EncSecDescLen", "1589311528"); // 1
    DerivInstrmt_1_set.insert("1589311528");
    DerivInstrmt_1.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_757352905"); // 1
    DerivInstrmt_1_set.insert("DerivativeEncodedSecurityDesc_t_757352905");
    DerivInstrmt_1.add_attribute("CSetMo", "1137107319"); // 1
    DerivInstrmt_1_set.insert("1137107319");
    all_values.push_back(DerivInstrmt_1_set);
    all_compo_names.insert("DerivInstrmt_1_set");

    {
      xml_element AID_18{"AID"};
      multiset<string> AID_18_set;
      AID_18.add_attribute("ID", "DerivativeSecurityAltID_t_853807748"); // 2
      AID_18_set.insert("DerivativeSecurityAltID_t_853807748");
      AID_18.add_attribute("Src", "E"); // 2
      AID_18_set.insert("E");
      all_values.push_back(AID_18_set);
      all_compo_names.insert("AID_18_set");

      DerivInstrmt_1.add_element(AID_18);
    }
    {
      xml_element SecXML_18{"SecXML"};
      multiset<string> SecXML_18_set;
      SecXML_18.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_1099534140"); // 2
      SecXML_18_set.insert("DerivativeSecurityXMLSchema_t_1099534140");
      all_values.push_back(SecXML_18_set);
      all_compo_names.insert("SecXML_18_set");

      DerivInstrmt_1.add_element(SecXML_18);
    }
    {
      xml_element Evnt_18{"Evnt"};
      multiset<string> Evnt_18_set;
      Evnt_18.add_attribute("EventTyp", "2"); // 2
      Evnt_18_set.insert("2");
      Evnt_18.add_attribute("Dt", "DerivativeEventDate_t_1522053793"); // 2
      Evnt_18_set.insert("DerivativeEventDate_t_1522053793");
      Evnt_18.add_attribute("Tm", "DerivativeEventTime_t_1357214674"); // 2
      Evnt_18_set.insert("DerivativeEventTime_t_1357214674");
      Evnt_18.add_attribute("Px", "8545031.200000"); // 2
      Evnt_18_set.insert("8545031.200000");
      Evnt_18.add_attribute("Txt", "DerivativeEventText_t_1159782601"); // 2
      Evnt_18_set.insert("DerivativeEventText_t_1159782601");
      all_values.push_back(Evnt_18_set);
      all_compo_names.insert("Evnt_18_set");

      DerivInstrmt_1.add_element(Evnt_18);
    }
    {
      xml_element Pty_125{"Pty"};
      multiset<string> Pty_125_set;
      Pty_125.add_attribute("ID", "DerivativeInstrumentPartyID_t_1733390639"); // 2
      Pty_125_set.insert("DerivativeInstrumentPartyID_t_1733390639");
      Pty_125.add_attribute("Src", "2"); // 2
      Pty_125_set.insert("2");
      Pty_125.add_attribute("R", "36"); // 2
      Pty_125_set.insert("36");
      all_values.push_back(Pty_125_set);
      all_compo_names.insert("Pty_125_set");

      {
        xml_element Sub_125{"Sub"};
        multiset<string> Sub_125_set;
        Sub_125.add_attribute("ID", "DerivativeInstrumentPartySubID_t_364598626"); // 3
        Sub_125_set.insert("DerivativeInstrumentPartySubID_t_364598626");
        Sub_125.add_attribute("Typ", "9"); // 3
        Sub_125_set.insert("9");
        all_values.push_back(Sub_125_set);
        all_compo_names.insert("Sub_125_set");

        Pty_125.add_element(Sub_125);
      }
      DerivInstrmt_1.add_element(Pty_125);
    }
    elt.add_element(DerivInstrmt_1);
  } // end DerivInstrmt
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
