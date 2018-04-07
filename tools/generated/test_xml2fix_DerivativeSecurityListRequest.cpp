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
  elt.add_attribute("ReqID", "SecurityReqID_t_755956656"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("SecurityReqID_t_755956656");
  elt.add_attribute("ListReqTyp", "3"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("3");
  elt.add_attribute("MktID", "MarketID_t_1133658879"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("MarketID_t_1133658879");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_339989555"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("MarketSegmentID_t_339989555");
  elt.add_attribute("SubTyp", "SecuritySubType_t_462549718"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("SecuritySubType_t_462549718");
  elt.add_attribute("Ccy", "EUR"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("EUR");
  elt.add_attribute("Txt", "Text_t_579149528"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("Text_t_579149528");
  elt.add_attribute("EncTxtLen", "1342047010"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("1342047010");
  elt.add_attribute("EncTxt", "EncodedText_t_1897691708"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("EncodedText_t_1897691708");
  elt.add_attribute("SesID", "1"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "7"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("7");
  elt.add_attribute("SubReqTyp", "1"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("1");
  all_values.push_back(DerivativeSecurityListRequest_message_t_0);
  all_compo_names.insert("DerivativeSecurityListRequest_message_t");

  { // Hdr
    xml_element Hdr_27{"Hdr"};
    multiset<string> Hdr_27_set;
    Hdr_27.add_attribute("SeqNum", "370265992"); // 1
    Hdr_27_set.insert("370265992");
    Hdr_27.add_attribute("SID", "SenderCompID_t_1537605901"); // 1
    Hdr_27_set.insert("SenderCompID_t_1537605901");
    Hdr_27.add_attribute("TID", "TargetCompID_t_1334887415"); // 1
    Hdr_27_set.insert("TargetCompID_t_1334887415");
    Hdr_27.add_attribute("OBID", "OnBehalfOfCompID_t_1208775955"); // 1
    Hdr_27_set.insert("OnBehalfOfCompID_t_1208775955");
    Hdr_27.add_attribute("D2ID", "DeliverToCompID_t_91218091"); // 1
    Hdr_27_set.insert("DeliverToCompID_t_91218091");
    Hdr_27.add_attribute("SSub", "SenderSubID_t_245602568"); // 1
    Hdr_27_set.insert("SenderSubID_t_245602568");
    Hdr_27.add_attribute("SLoc", "SenderLocationID_t_1505497611"); // 1
    Hdr_27_set.insert("SenderLocationID_t_1505497611");
    Hdr_27.add_attribute("TSub", "TargetSubID_t_2092516891"); // 1
    Hdr_27_set.insert("TargetSubID_t_2092516891");
    Hdr_27.add_attribute("TLoc", "TargetLocationID_t_1851824501"); // 1
    Hdr_27_set.insert("TargetLocationID_t_1851824501");
    Hdr_27.add_attribute("OBSub", "OnBehalfOfSubID_t_1731076607"); // 1
    Hdr_27_set.insert("OnBehalfOfSubID_t_1731076607");
    Hdr_27.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1842160240"); // 1
    Hdr_27_set.insert("OnBehalfOfLocationID_t_1842160240");
    Hdr_27.add_attribute("D2Sub", "DeliverToSubID_t_411600735"); // 1
    Hdr_27_set.insert("DeliverToSubID_t_411600735");
    Hdr_27.add_attribute("D2Loc", "DeliverToLocationID_t_947646476"); // 1
    Hdr_27_set.insert("DeliverToLocationID_t_947646476");
    Hdr_27.add_attribute("PosDup", "Y"); // 1
    Hdr_27_set.insert("Y");
    Hdr_27.add_attribute("PosRsnd", "N"); // 1
    Hdr_27_set.insert("N");
    Hdr_27.add_attribute("Snt", "SendingTime_t_493670337"); // 1
    Hdr_27_set.insert("SendingTime_t_493670337");
    Hdr_27.add_attribute("OrigSnt", "OrigSendingTime_t_723803278"); // 1
    Hdr_27_set.insert("OrigSendingTime_t_723803278");
    Hdr_27.add_attribute("MsgEncd", "MessageEncoding_t_1822838346"); // 1
    Hdr_27_set.insert("MessageEncoding_t_1822838346");
    all_values.push_back(Hdr_27_set);
    all_compo_names.insert("Hdr_27_set");

    {
      xml_element Hop_27{"Hop"};
      multiset<string> Hop_27_set;
      Hop_27.add_attribute("ID", "HopCompID_t_1249626994"); // 2
      Hop_27_set.insert("HopCompID_t_1249626994");
      Hop_27.add_attribute("Ref", "713624058"); // 2
      Hop_27_set.insert("713624058");
      Hop_27.add_attribute("Snt", "HopSendingTime_t_809013578"); // 2
      Hop_27_set.insert("HopSendingTime_t_809013578");
      all_values.push_back(Hop_27_set);
      all_compo_names.insert("Hop_27_set");

      Hdr_27.add_element(Hop_27);
    }
    elt.add_element(Hdr_27);
  } // end Hdr
  { // Undly
    xml_element Undly_29{"Undly"};
    multiset<string> Undly_29_set;
    Undly_29.add_attribute("Sym", "UnderlyingSymbol_t_1589616549"); // 1
    Undly_29_set.insert("UnderlyingSymbol_t_1589616549");
    Undly_29.add_attribute("Sfx", "CD"); // 1
    Undly_29_set.insert("CD");
    Undly_29.add_attribute("ID", "UnderlyingSecurityID_t_815646347"); // 1
    Undly_29_set.insert("UnderlyingSecurityID_t_815646347");
    Undly_29.add_attribute("Src", "H"); // 1
    Undly_29_set.insert("H");
    Undly_29.add_attribute("Prod", "4"); // 1
    Undly_29_set.insert("4");
    Undly_29.add_attribute("CFI", "UnderlyingCFICode_t_10209710"); // 1
    Undly_29_set.insert("UnderlyingCFICode_t_10209710");
    Undly_29.add_attribute("SecTyp", "FXFWD"); // 1
    Undly_29_set.insert("FXFWD");
    Undly_29.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_415361278"); // 1
    Undly_29_set.insert("UnderlyingSecuritySubType_t_415361278");
    Undly_29.add_attribute("MMY", "1871740135"); // 1
    Undly_29_set.insert("1871740135");
    Undly_29.add_attribute("Mat", "UnderlyingMaturityDate_t_1655771261"); // 1
    Undly_29_set.insert("UnderlyingMaturityDate_t_1655771261");
    Undly_29.add_attribute("MatTm", "785627270"); // 1
    Undly_29_set.insert("785627270");
    Undly_29.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1261862388"); // 1
    Undly_29_set.insert("UnderlyingCouponPaymentDate_t_1261862388");
    Undly_29.add_attribute("RestrctTyp", "FR"); // 1
    Undly_29_set.insert("FR");
    Undly_29.add_attribute("Snrty", "SD"); // 1
    Undly_29_set.insert("SD");
    Undly_29.add_attribute("NotlPctOut", "13530804.790000"); // 1
    Undly_29_set.insert("13530804.790000");
    Undly_29.add_attribute("OrigNotlPctOut", "10887775.970000"); // 1
    Undly_29_set.insert("10887775.970000");
    Undly_29.add_attribute("AttchPnt", "13524171.890000"); // 1
    Undly_29_set.insert("13524171.890000");
    Undly_29.add_attribute("DetchPnt", "12981137.220000"); // 1
    Undly_29_set.insert("12981137.220000");
    Undly_29.add_attribute("Issued", "UnderlyingIssueDate_t_793118450"); // 1
    Undly_29_set.insert("UnderlyingIssueDate_t_793118450");
    Undly_29.add_attribute("RepoCollSecTyp", "936010148"); // 1
    Undly_29_set.insert("936010148");
    Undly_29.add_attribute("RepoTrm", "992790314"); // 1
    Undly_29_set.insert("992790314");
    Undly_29.add_attribute("RepoRt", "12047191.850000"); // 1
    Undly_29_set.insert("12047191.850000");
    Undly_29.add_attribute("Fctr", "18836566.240000"); // 1
    Undly_29_set.insert("18836566.240000");
    Undly_29.add_attribute("CrdRtg", "UnderlyingCreditRating_t_428854370"); // 1
    Undly_29_set.insert("UnderlyingCreditRating_t_428854370");
    Undly_29.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1028541622"); // 1
    Undly_29_set.insert("UnderlyingInstrRegistry_t_1028541622");
    Undly_29.add_attribute("Ctry", "229843314"); // 1
    Undly_29_set.insert("229843314");
    Undly_29.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1152657648"); // 1
    Undly_29_set.insert("UnderlyingStateOrProvinceOfIssue_t_1152657648");
    Undly_29.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_703896320"); // 1
    Undly_29_set.insert("UnderlyingLocaleOfIssue_t_703896320");
    Undly_29.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1479470308"); // 1
    Undly_29_set.insert("UnderlyingRedemptionDate_t_1479470308");
    Undly_29.add_attribute("StrkPx", "18662817.060000"); // 1
    Undly_29_set.insert("18662817.060000");
    Undly_29.add_attribute("StrkCcy", "CAN"); // 1
    Undly_29_set.insert("CAN");
    Undly_29.add_attribute("OptA", "894971834"); // 1
    Undly_29_set.insert("894971834");
    Undly_29.add_attribute("Mult", "1810725.980000"); // 1
    Undly_29_set.insert("1810725.980000");
    Undly_29.add_attribute("MultTyp", "1"); // 1
    Undly_29_set.insert("1");
    Undly_29.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_29_set.insert("0");
    Undly_29.add_attribute("UOM", "USD"); // 1
    Undly_29_set.insert("USD");
    Undly_29.add_attribute("UOMQty", "17155122.660000"); // 1
    Undly_29_set.insert("17155122.660000");
    Undly_29.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_29_set.insert("MMbbl");
    Undly_29.add_attribute("PxUOMQty", "20630224.430000"); // 1
    Undly_29_set.insert("20630224.430000");
    Undly_29.add_attribute("TmUnit", "Min"); // 1
    Undly_29_set.insert("Min");
    Undly_29.add_attribute("ExerStyle", "0"); // 1
    Undly_29_set.insert("0");
    Undly_29.add_attribute("CpnRt", "11774011.830000"); // 1
    Undly_29_set.insert("11774011.830000");
    Undly_29.add_attribute("Exch", "UnderlyingSecurityExchange_t_2066974908"); // 1
    Undly_29_set.insert("UnderlyingSecurityExchange_t_2066974908");
    Undly_29.add_attribute("Issr", "UnderlyingIssuer_t_1550719616"); // 1
    Undly_29_set.insert("UnderlyingIssuer_t_1550719616");
    Undly_29.add_attribute("EncUndIssrLen", "382998014"); // 1
    Undly_29_set.insert("382998014");
    Undly_29.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1008268857"); // 1
    Undly_29_set.insert("EncodedUnderlyingIssuer_t_1008268857");
    Undly_29.add_attribute("Desc", "UnderlyingSecurityDesc_t_755653157"); // 1
    Undly_29_set.insert("UnderlyingSecurityDesc_t_755653157");
    Undly_29.add_attribute("EncUndSecDescLen", "1681111736"); // 1
    Undly_29_set.insert("1681111736");
    Undly_29.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1801387307"); // 1
    Undly_29_set.insert("EncodedUnderlyingSecurityDesc_t_1801387307");
    Undly_29.add_attribute("CPPgm", "UnderlyingCPProgram_t_1691663305"); // 1
    Undly_29_set.insert("UnderlyingCPProgram_t_1691663305");
    Undly_29.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_526418403"); // 1
    Undly_29_set.insert("UnderlyingCPRegType_t_526418403");
    Undly_29.add_attribute("AllocPct", "8586228.450000"); // 1
    Undly_29_set.insert("8586228.450000");
    Undly_29.add_attribute("Ccy", "CAN"); // 1
    Undly_29_set.insert("CAN");
    Undly_29.add_attribute("Qty", "18871644.670000"); // 1
    Undly_29_set.insert("18871644.670000");
    Undly_29.add_attribute("SettlTyp", "2"); // 1
    Undly_29_set.insert("2");
    Undly_29.add_attribute("CashAmt", "UnderlyingCashAmount_t_2107930421"); // 1
    Undly_29_set.insert("UnderlyingCashAmount_t_2107930421");
    Undly_29.add_attribute("CashTyp", "DIFF"); // 1
    Undly_29_set.insert("DIFF");
    Undly_29.add_attribute("Px", "9896662.550000"); // 1
    Undly_29_set.insert("9896662.550000");
    Undly_29.add_attribute("DirtPx", "18267284.800000"); // 1
    Undly_29_set.insert("18267284.800000");
    Undly_29.add_attribute("EndPx", "19564870.380000"); // 1
    Undly_29_set.insert("19564870.380000");
    Undly_29.add_attribute("StartVal", "UnderlyingStartValue_t_1911269464"); // 1
    Undly_29_set.insert("UnderlyingStartValue_t_1911269464");
    Undly_29.add_attribute("CurVal", "UnderlyingCurrentValue_t_574216666"); // 1
    Undly_29_set.insert("UnderlyingCurrentValue_t_574216666");
    Undly_29.add_attribute("EndVal", "UnderlyingEndValue_t_2137559636"); // 1
    Undly_29_set.insert("UnderlyingEndValue_t_2137559636");
    Undly_29.add_attribute("AdjQty", "1334977.000000"); // 1
    Undly_29_set.insert("1334977.000000");
    Undly_29.add_attribute("FxRate", "10770281.570000"); // 1
    Undly_29_set.insert("10770281.570000");
    Undly_29.add_attribute("FxRateCalc", "M"); // 1
    Undly_29_set.insert("M");
    Undly_29.add_attribute("CapValu", "UnderlyingCapValue_t_1849009966"); // 1
    Undly_29_set.insert("UnderlyingCapValue_t_1849009966");
    Undly_29.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1995200925"); // 1
    Undly_29_set.insert("UnderlyingSettlMethod_t_1995200925");
    Undly_29.add_attribute("PutCall", "96897091"); // 1
    Undly_29_set.insert("96897091");
    all_values.push_back(Undly_29_set);
    all_compo_names.insert("Undly_29_set");

    {
      xml_element UndAID_29{"UndAID"};
      multiset<string> UndAID_29_set;
      UndAID_29.add_attribute("AltID", "UnderlyingSecurityAltID_t_925326197"); // 2
      UndAID_29_set.insert("UnderlyingSecurityAltID_t_925326197");
      UndAID_29.add_attribute("AltIDSrc", "9"); // 2
      UndAID_29_set.insert("9");
      all_values.push_back(UndAID_29_set);
      all_compo_names.insert("UndAID_29_set");

      Undly_29.add_element(UndAID_29);
    }
    {
      xml_element Stip_46{"Stip"};
      multiset<string> Stip_46_set;
      Stip_46.add_attribute("Typ", "PPM"); // 2
      Stip_46_set.insert("PPM");
      Stip_46.add_attribute("Val", "UnderlyingStipValue_t_844817457"); // 2
      Stip_46_set.insert("UnderlyingStipValue_t_844817457");
      all_values.push_back(Stip_46_set);
      all_compo_names.insert("Stip_46_set");

      Undly_29.add_element(Stip_46);
    }
    {
      xml_element Pty_143{"Pty"};
      multiset<string> Pty_143_set;
      Pty_143.add_attribute("ID", "UnderlyingInstrumentPartyID_t_954753284"); // 2
      Pty_143_set.insert("UnderlyingInstrumentPartyID_t_954753284");
      Pty_143.add_attribute("Src", "1"); // 2
      Pty_143_set.insert("1");
      Pty_143.add_attribute("R", "38"); // 2
      Pty_143_set.insert("38");
      all_values.push_back(Pty_143_set);
      all_compo_names.insert("Pty_143_set");

      {
        xml_element Sub_143{"Sub"};
        multiset<string> Sub_143_set;
        Sub_143.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1710406441"); // 3
        Sub_143_set.insert("UnderlyingInstrumentPartySubID_t_1710406441");
        Sub_143.add_attribute("Typ", "23"); // 3
        Sub_143_set.insert("23");
        all_values.push_back(Sub_143_set);
        all_compo_names.insert("Sub_143_set");

        Pty_143.add_element(Sub_143);
      }
      Undly_29.add_element(Pty_143);
    }
    elt.add_element(Undly_29);
  } // end Undly
  { // DerivInstrmt
    xml_element DerivInstrmt_1{"DerivInstrmt"};
    multiset<string> DerivInstrmt_1_set;
    DerivInstrmt_1.add_attribute("Sym", "DerivativeSymbol_t_1506989974"); // 1
    DerivInstrmt_1_set.insert("DerivativeSymbol_t_1506989974");
    DerivInstrmt_1.add_attribute("Sfx", "CD"); // 1
    DerivInstrmt_1_set.insert("CD");
    DerivInstrmt_1.add_attribute("ID", "DerivativeSecurityID_t_1717342779"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityID_t_1717342779");
    DerivInstrmt_1.add_attribute("Src", "8"); // 1
    DerivInstrmt_1_set.insert("8");
    DerivInstrmt_1.add_attribute("Prod", "11"); // 1
    DerivInstrmt_1_set.insert("11");
    DerivInstrmt_1.add_attribute("ProdCmplx", "DerivativeProductComplex_t_525131904"); // 1
    DerivInstrmt_1_set.insert("DerivativeProductComplex_t_525131904");
    DerivInstrmt_1.add_attribute("FlexProdElig", "true"); // 1
    DerivInstrmt_1_set.insert("true");
    DerivInstrmt_1.add_attribute("SecGrp", "DerivativeSecurityGroup_t_45134679"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityGroup_t_45134679");
    DerivInstrmt_1.add_attribute("CFI", "DerivativeCFICode_t_485578678"); // 1
    DerivInstrmt_1_set.insert("DerivativeCFICode_t_485578678");
    DerivInstrmt_1.add_attribute("SecTyp", "OOC"); // 1
    DerivInstrmt_1_set.insert("OOC");
    DerivInstrmt_1.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_1034800934"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecuritySubType_t_1034800934");
    DerivInstrmt_1.add_attribute("MMY", "164823510"); // 1
    DerivInstrmt_1_set.insert("164823510");
    DerivInstrmt_1.add_attribute("MatDt", "DerivativeMaturityDate_t_210390519"); // 1
    DerivInstrmt_1_set.insert("DerivativeMaturityDate_t_210390519");
    DerivInstrmt_1.add_attribute("MatTm", "798586751"); // 1
    DerivInstrmt_1_set.insert("798586751");
    DerivInstrmt_1.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_739040176"); // 1
    DerivInstrmt_1_set.insert("DerivativeSettleOnOpenFlag_t_739040176");
    DerivInstrmt_1.add_attribute("AsgnMeth", "200466507"); // 1
    DerivInstrmt_1_set.insert("200466507");
    DerivInstrmt_1.add_attribute("Status", "2"); // 1
    DerivInstrmt_1_set.insert("2");
    DerivInstrmt_1.add_attribute("IssDt", "DerivativeIssueDate_t_1816068333"); // 1
    DerivInstrmt_1_set.insert("DerivativeIssueDate_t_1816068333");
    DerivInstrmt_1.add_attribute("Rgstry", "DerivativeInstrRegistry_t_381824803"); // 1
    DerivInstrmt_1_set.insert("DerivativeInstrRegistry_t_381824803");
    DerivInstrmt_1.add_attribute("Ctry", "633610769"); // 1
    DerivInstrmt_1_set.insert("633610769");
    DerivInstrmt_1.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_1663785611"); // 1
    DerivInstrmt_1_set.insert("DerivativeStateOrProvinceOfIssue_t_1663785611");
    DerivInstrmt_1.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_478721894"); // 1
    DerivInstrmt_1_set.insert("DerivativeLocaleOfIssue_t_478721894");
    DerivInstrmt_1.add_attribute("StrkPx", "15589369.660000"); // 1
    DerivInstrmt_1_set.insert("15589369.660000");
    DerivInstrmt_1.add_attribute("StrkCcy", "USD"); // 1
    DerivInstrmt_1_set.insert("USD");
    DerivInstrmt_1.add_attribute("StrkMult", "2562707.760000"); // 1
    DerivInstrmt_1_set.insert("2562707.760000");
    DerivInstrmt_1.add_attribute("StrkValu", "20225725.630000"); // 1
    DerivInstrmt_1_set.insert("20225725.630000");
    DerivInstrmt_1.add_attribute("OptAt", "1262832808"); // 1
    DerivInstrmt_1_set.insert("1262832808");
    DerivInstrmt_1.add_attribute("Mult", "21093570.900000"); // 1
    DerivInstrmt_1_set.insert("21093570.900000");
    DerivInstrmt_1.add_attribute("MultTyp", "0"); // 1
    DerivInstrmt_1_set.insert("0");
    DerivInstrmt_1.add_attribute("FlowSchedTyp", "2"); // 1
    DerivInstrmt_1_set.insert("2");
    DerivInstrmt_1.add_attribute("MinPxIncr", "14688634.160000"); // 1
    DerivInstrmt_1_set.insert("14688634.160000");
    DerivInstrmt_1.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_692597806"); // 1
    DerivInstrmt_1_set.insert("DerivativeMinPriceIncrementAmount_t_692597806");
    DerivInstrmt_1.add_attribute("UOM", "lbs"); // 1
    DerivInstrmt_1_set.insert("lbs");
    DerivInstrmt_1.add_attribute("UOMQty", "16869925.870000"); // 1
    DerivInstrmt_1_set.insert("16869925.870000");
    DerivInstrmt_1.add_attribute("PxUOM", "MMbbl"); // 1
    DerivInstrmt_1_set.insert("MMbbl");
    DerivInstrmt_1.add_attribute("PxUOMQty", "4012645.730000"); // 1
    DerivInstrmt_1_set.insert("4012645.730000");
    DerivInstrmt_1.add_attribute("SettlMeth", "P"); // 1
    DerivInstrmt_1_set.insert("P");
    DerivInstrmt_1.add_attribute("PxQteMeth", "STD"); // 1
    DerivInstrmt_1_set.insert("STD");
    DerivInstrmt_1.add_attribute("ValMeth", "FUT"); // 1
    DerivInstrmt_1_set.insert("FUT");
    DerivInstrmt_1.add_attribute("ListMeth", "1"); // 1
    DerivInstrmt_1_set.insert("1");
    DerivInstrmt_1.add_attribute("CapPx", "1599885.030000"); // 1
    DerivInstrmt_1_set.insert("1599885.030000");
    DerivInstrmt_1.add_attribute("FlrPx", "10516667.610000"); // 1
    DerivInstrmt_1_set.insert("10516667.610000");
    DerivInstrmt_1.add_attribute("PutCall", "0"); // 1
    DerivInstrmt_1_set.insert("0");
    DerivInstrmt_1.add_attribute("ExerStyle", "2"); // 1
    DerivInstrmt_1_set.insert("2");
    DerivInstrmt_1.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_1790706937"); // 1
    DerivInstrmt_1_set.insert("DerivativeOptPayAmount_t_1790706937");
    DerivInstrmt_1.add_attribute("TmUnit", "S"); // 1
    DerivInstrmt_1_set.insert("S");
    DerivInstrmt_1.add_attribute("Exch", "DerivativeSecurityExchange_t_1890659705"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityExchange_t_1890659705");
    DerivInstrmt_1.add_attribute("PosLmt", "1459291623"); // 1
    DerivInstrmt_1_set.insert("1459291623");
    DerivInstrmt_1.add_attribute("NTPosLmt", "691387889"); // 1
    DerivInstrmt_1_set.insert("691387889");
    DerivInstrmt_1.add_attribute("Issr", "DerivativeIssuer_t_376786826"); // 1
    DerivInstrmt_1_set.insert("DerivativeIssuer_t_376786826");
    DerivInstrmt_1.add_attribute("EncIssrLen", "975593586"); // 1
    DerivInstrmt_1_set.insert("975593586");
    DerivInstrmt_1.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_1170109784"); // 1
    DerivInstrmt_1_set.insert("DerivativeEncodedIssuer_t_1170109784");
    DerivInstrmt_1.add_attribute("Desc", "DerivativeSecurityDesc_t_1935723792"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityDesc_t_1935723792");
    DerivInstrmt_1.add_attribute("EncSecDescLen", "2043412865"); // 1
    DerivInstrmt_1_set.insert("2043412865");
    DerivInstrmt_1.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_775646304"); // 1
    DerivInstrmt_1_set.insert("DerivativeEncodedSecurityDesc_t_775646304");
    DerivInstrmt_1.add_attribute("CSetMo", "44510920"); // 1
    DerivInstrmt_1_set.insert("44510920");
    all_values.push_back(DerivInstrmt_1_set);
    all_compo_names.insert("DerivInstrmt_1_set");

    {
      xml_element AID_22{"AID"};
      multiset<string> AID_22_set;
      AID_22.add_attribute("ID", "DerivativeSecurityAltID_t_1918501780"); // 2
      AID_22_set.insert("DerivativeSecurityAltID_t_1918501780");
      AID_22.add_attribute("Src", "C"); // 2
      AID_22_set.insert("C");
      all_values.push_back(AID_22_set);
      all_compo_names.insert("AID_22_set");

      DerivInstrmt_1.add_element(AID_22);
    }
    {
      xml_element SecXML_22{"SecXML"};
      multiset<string> SecXML_22_set;
      SecXML_22.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_6384363"); // 2
      SecXML_22_set.insert("DerivativeSecurityXMLSchema_t_6384363");
      all_values.push_back(SecXML_22_set);
      all_compo_names.insert("SecXML_22_set");

      DerivInstrmt_1.add_element(SecXML_22);
    }
    {
      xml_element Evnt_22{"Evnt"};
      multiset<string> Evnt_22_set;
      Evnt_22.add_attribute("EventTyp", "8"); // 2
      Evnt_22_set.insert("8");
      Evnt_22.add_attribute("Dt", "DerivativeEventDate_t_197269002"); // 2
      Evnt_22_set.insert("DerivativeEventDate_t_197269002");
      Evnt_22.add_attribute("Tm", "DerivativeEventTime_t_1475247779"); // 2
      Evnt_22_set.insert("DerivativeEventTime_t_1475247779");
      Evnt_22.add_attribute("Px", "20491112.940000"); // 2
      Evnt_22_set.insert("20491112.940000");
      Evnt_22.add_attribute("Txt", "DerivativeEventText_t_73401670"); // 2
      Evnt_22_set.insert("DerivativeEventText_t_73401670");
      all_values.push_back(Evnt_22_set);
      all_compo_names.insert("Evnt_22_set");

      DerivInstrmt_1.add_element(Evnt_22);
    }
    {
      xml_element Pty_144{"Pty"};
      multiset<string> Pty_144_set;
      Pty_144.add_attribute("ID", "DerivativeInstrumentPartyID_t_1014756719"); // 2
      Pty_144_set.insert("DerivativeInstrumentPartyID_t_1014756719");
      Pty_144.add_attribute("Src", "A"); // 2
      Pty_144_set.insert("A");
      Pty_144.add_attribute("R", "54"); // 2
      Pty_144_set.insert("54");
      all_values.push_back(Pty_144_set);
      all_compo_names.insert("Pty_144_set");

      {
        xml_element Sub_144{"Sub"};
        multiset<string> Sub_144_set;
        Sub_144.add_attribute("ID", "DerivativeInstrumentPartySubID_t_512075648"); // 3
        Sub_144_set.insert("DerivativeInstrumentPartySubID_t_512075648");
        Sub_144.add_attribute("Typ", "29"); // 3
        Sub_144_set.insert("29");
        all_values.push_back(Sub_144_set);
        all_compo_names.insert("Sub_144_set");

        Pty_144.add_element(Sub_144);
      }
      DerivInstrmt_1.add_element(Pty_144);
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
