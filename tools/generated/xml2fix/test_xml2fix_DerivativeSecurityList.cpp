#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityList_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityList_message_t_0;
  elt.add_attribute("RptID", "179992425"); // 0
  DerivativeSecurityList_message_t_0.insert("179992425");
  elt.add_attribute("ReqID", "SecurityReqID_t_1784353047"); // 0
  DerivativeSecurityList_message_t_0.insert("SecurityReqID_t_1784353047");
  elt.add_attribute("RspID", "SecurityResponseID_t_1070261873"); // 0
  DerivativeSecurityList_message_t_0.insert("SecurityResponseID_t_1070261873");
  elt.add_attribute("ReqRslt", "1"); // 0
  DerivativeSecurityList_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1884570754"); // 0
  DerivativeSecurityList_message_t_0.insert("ClearingBusinessDate_t_1884570754");
  elt.add_attribute("TxnTm", "TransactTime_t_1793991734"); // 0
  DerivativeSecurityList_message_t_0.insert("TransactTime_t_1793991734");
  elt.add_attribute("TotNoReltdSym", "452213939"); // 0
  DerivativeSecurityList_message_t_0.insert("452213939");
  elt.add_attribute("LastFragment", "Y"); // 0
  DerivativeSecurityList_message_t_0.insert("Y");
  all_values.push_back(DerivativeSecurityList_message_t_0);
  all_compo_names.insert("DerivativeSecurityList_message_t");

  { // Hdr
    xml_element Hdr_26{"Hdr"};
    multiset<string> Hdr_26_set;
    Hdr_26.add_attribute("SeqNum", "454804182"); // 1
    Hdr_26_set.insert("454804182");
    Hdr_26.add_attribute("SID", "SenderCompID_t_1184499122"); // 1
    Hdr_26_set.insert("SenderCompID_t_1184499122");
    Hdr_26.add_attribute("TID", "TargetCompID_t_1282334007"); // 1
    Hdr_26_set.insert("TargetCompID_t_1282334007");
    Hdr_26.add_attribute("OBID", "OnBehalfOfCompID_t_2081825344"); // 1
    Hdr_26_set.insert("OnBehalfOfCompID_t_2081825344");
    Hdr_26.add_attribute("D2ID", "DeliverToCompID_t_1663208905"); // 1
    Hdr_26_set.insert("DeliverToCompID_t_1663208905");
    Hdr_26.add_attribute("SSub", "SenderSubID_t_367329727"); // 1
    Hdr_26_set.insert("SenderSubID_t_367329727");
    Hdr_26.add_attribute("SLoc", "SenderLocationID_t_1395291960"); // 1
    Hdr_26_set.insert("SenderLocationID_t_1395291960");
    Hdr_26.add_attribute("TSub", "TargetSubID_t_763765775"); // 1
    Hdr_26_set.insert("TargetSubID_t_763765775");
    Hdr_26.add_attribute("TLoc", "TargetLocationID_t_1974172247"); // 1
    Hdr_26_set.insert("TargetLocationID_t_1974172247");
    Hdr_26.add_attribute("OBSub", "OnBehalfOfSubID_t_503277303"); // 1
    Hdr_26_set.insert("OnBehalfOfSubID_t_503277303");
    Hdr_26.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1008807883"); // 1
    Hdr_26_set.insert("OnBehalfOfLocationID_t_1008807883");
    Hdr_26.add_attribute("D2Sub", "DeliverToSubID_t_366677643"); // 1
    Hdr_26_set.insert("DeliverToSubID_t_366677643");
    Hdr_26.add_attribute("D2Loc", "DeliverToLocationID_t_324137918"); // 1
    Hdr_26_set.insert("DeliverToLocationID_t_324137918");
    Hdr_26.add_attribute("PosDup", "Y"); // 1
    Hdr_26_set.insert("Y");
    Hdr_26.add_attribute("PosRsnd", "N"); // 1
    Hdr_26_set.insert("N");
    Hdr_26.add_attribute("Snt", "SendingTime_t_1601471495"); // 1
    Hdr_26_set.insert("SendingTime_t_1601471495");
    Hdr_26.add_attribute("OrigSnt", "OrigSendingTime_t_1143734848"); // 1
    Hdr_26_set.insert("OrigSendingTime_t_1143734848");
    Hdr_26.add_attribute("MsgEncd", "MessageEncoding_t_254428190"); // 1
    Hdr_26_set.insert("MessageEncoding_t_254428190");
    all_values.push_back(Hdr_26_set);
    all_compo_names.insert("Hdr_26_set");

    {
      xml_element Hop_26{"Hop"};
      multiset<string> Hop_26_set;
      Hop_26.add_attribute("ID", "HopCompID_t_1801491756"); // 2
      Hop_26_set.insert("HopCompID_t_1801491756");
      Hop_26.add_attribute("Ref", "2055184295"); // 2
      Hop_26_set.insert("2055184295");
      Hop_26.add_attribute("Snt", "HopSendingTime_t_748610579"); // 2
      Hop_26_set.insert("HopSendingTime_t_748610579");
      all_values.push_back(Hop_26_set);
      all_compo_names.insert("Hop_26_set");

      Hdr_26.add_element(Hop_26);
    }
    elt.add_element(Hdr_26);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_2{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_2_set;
    ApplSeqCtrl_2.add_attribute("ApplID", "ApplID_t_1420517285"); // 1
    ApplSeqCtrl_2_set.insert("ApplID_t_1420517285");
    ApplSeqCtrl_2.add_attribute("ApplSeqNum", "286946027"); // 1
    ApplSeqCtrl_2_set.insert("286946027");
    ApplSeqCtrl_2.add_attribute("ApplLastSeqNum", "928603005"); // 1
    ApplSeqCtrl_2_set.insert("928603005");
    ApplSeqCtrl_2.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_2_set.insert("true");
    all_values.push_back(ApplSeqCtrl_2_set);
    all_compo_names.insert("ApplSeqCtrl_2_set");

    elt.add_element(ApplSeqCtrl_2);
  } // end ApplSeqCtrl
  { // Undly
    xml_element Undly_29{"Undly"};
    multiset<string> Undly_29_set;
    Undly_29.add_attribute("Sym", "UnderlyingSymbol_t_1357207900"); // 1
    Undly_29_set.insert("UnderlyingSymbol_t_1357207900");
    Undly_29.add_attribute("Sfx", "CD"); // 1
    Undly_29_set.insert("CD");
    Undly_29.add_attribute("ID", "UnderlyingSecurityID_t_794473790"); // 1
    Undly_29_set.insert("UnderlyingSecurityID_t_794473790");
    Undly_29.add_attribute("Src", "K"); // 1
    Undly_29_set.insert("K");
    Undly_29.add_attribute("Prod", "4"); // 1
    Undly_29_set.insert("4");
    Undly_29.add_attribute("CFI", "UnderlyingCFICode_t_817052023"); // 1
    Undly_29_set.insert("UnderlyingCFICode_t_817052023");
    Undly_29.add_attribute("SecTyp", "NONE"); // 1
    Undly_29_set.insert("NONE");
    Undly_29.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_456273568"); // 1
    Undly_29_set.insert("UnderlyingSecuritySubType_t_456273568");
    Undly_29.add_attribute("MMY", "2099386031"); // 1
    Undly_29_set.insert("2099386031");
    Undly_29.add_attribute("Mat", "UnderlyingMaturityDate_t_1392861865"); // 1
    Undly_29_set.insert("UnderlyingMaturityDate_t_1392861865");
    Undly_29.add_attribute("MatTm", "2119482474"); // 1
    Undly_29_set.insert("2119482474");
    Undly_29.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_319232110"); // 1
    Undly_29_set.insert("UnderlyingCouponPaymentDate_t_319232110");
    Undly_29.add_attribute("RestrctTyp", "MR"); // 1
    Undly_29_set.insert("MR");
    Undly_29.add_attribute("Snrty", "SD"); // 1
    Undly_29_set.insert("SD");
    Undly_29.add_attribute("NotlPctOut", "1459207.090000"); // 1
    Undly_29_set.insert("1459207.090000");
    Undly_29.add_attribute("OrigNotlPctOut", "11439474.800000"); // 1
    Undly_29_set.insert("11439474.800000");
    Undly_29.add_attribute("AttchPnt", "17445724.850000"); // 1
    Undly_29_set.insert("17445724.850000");
    Undly_29.add_attribute("DetchPnt", "5125983.520000"); // 1
    Undly_29_set.insert("5125983.520000");
    Undly_29.add_attribute("Issued", "UnderlyingIssueDate_t_1468085398"); // 1
    Undly_29_set.insert("UnderlyingIssueDate_t_1468085398");
    Undly_29.add_attribute("RepoCollSecTyp", "1524388016"); // 1
    Undly_29_set.insert("1524388016");
    Undly_29.add_attribute("RepoTrm", "1600674304"); // 1
    Undly_29_set.insert("1600674304");
    Undly_29.add_attribute("RepoRt", "9220732.460000"); // 1
    Undly_29_set.insert("9220732.460000");
    Undly_29.add_attribute("Fctr", "5206392.160000"); // 1
    Undly_29_set.insert("5206392.160000");
    Undly_29.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1855102495"); // 1
    Undly_29_set.insert("UnderlyingCreditRating_t_1855102495");
    Undly_29.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_576081354"); // 1
    Undly_29_set.insert("UnderlyingInstrRegistry_t_576081354");
    Undly_29.add_attribute("Ctry", "428339863"); // 1
    Undly_29_set.insert("428339863");
    Undly_29.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_456229426"); // 1
    Undly_29_set.insert("UnderlyingStateOrProvinceOfIssue_t_456229426");
    Undly_29.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1996598639"); // 1
    Undly_29_set.insert("UnderlyingLocaleOfIssue_t_1996598639");
    Undly_29.add_attribute("Redeem", "UnderlyingRedemptionDate_t_715285890"); // 1
    Undly_29_set.insert("UnderlyingRedemptionDate_t_715285890");
    Undly_29.add_attribute("StrkPx", "13848324.310000"); // 1
    Undly_29_set.insert("13848324.310000");
    Undly_29.add_attribute("StrkCcy", "CAN"); // 1
    Undly_29_set.insert("CAN");
    Undly_29.add_attribute("OptA", "204392938"); // 1
    Undly_29_set.insert("204392938");
    Undly_29.add_attribute("Mult", "17009754.660000"); // 1
    Undly_29_set.insert("17009754.660000");
    Undly_29.add_attribute("MultTyp", "1"); // 1
    Undly_29_set.insert("1");
    Undly_29.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_29_set.insert("2");
    Undly_29.add_attribute("UOM", "tn"); // 1
    Undly_29_set.insert("tn");
    Undly_29.add_attribute("UOMQty", "2397626.500000"); // 1
    Undly_29_set.insert("2397626.500000");
    Undly_29.add_attribute("PxUOM", "MWh"); // 1
    Undly_29_set.insert("MWh");
    Undly_29.add_attribute("PxUOMQty", "3224462.240000"); // 1
    Undly_29_set.insert("3224462.240000");
    Undly_29.add_attribute("TmUnit", "Wk"); // 1
    Undly_29_set.insert("Wk");
    Undly_29.add_attribute("ExerStyle", "1"); // 1
    Undly_29_set.insert("1");
    Undly_29.add_attribute("CpnRt", "6416783.340000"); // 1
    Undly_29_set.insert("6416783.340000");
    Undly_29.add_attribute("Exch", "UnderlyingSecurityExchange_t_125811044"); // 1
    Undly_29_set.insert("UnderlyingSecurityExchange_t_125811044");
    Undly_29.add_attribute("Issr", "UnderlyingIssuer_t_640204380"); // 1
    Undly_29_set.insert("UnderlyingIssuer_t_640204380");
    Undly_29.add_attribute("EncUndIssrLen", "787599044"); // 1
    Undly_29_set.insert("787599044");
    Undly_29.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1269758524"); // 1
    Undly_29_set.insert("EncodedUnderlyingIssuer_t_1269758524");
    Undly_29.add_attribute("Desc", "UnderlyingSecurityDesc_t_237293217"); // 1
    Undly_29_set.insert("UnderlyingSecurityDesc_t_237293217");
    Undly_29.add_attribute("EncUndSecDescLen", "1300197396"); // 1
    Undly_29_set.insert("1300197396");
    Undly_29.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_590360274"); // 1
    Undly_29_set.insert("EncodedUnderlyingSecurityDesc_t_590360274");
    Undly_29.add_attribute("CPPgm", "UnderlyingCPProgram_t_1761681233"); // 1
    Undly_29_set.insert("UnderlyingCPProgram_t_1761681233");
    Undly_29.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_753388053"); // 1
    Undly_29_set.insert("UnderlyingCPRegType_t_753388053");
    Undly_29.add_attribute("AllocPct", "15124335.200000"); // 1
    Undly_29_set.insert("15124335.200000");
    Undly_29.add_attribute("Ccy", "GBP"); // 1
    Undly_29_set.insert("GBP");
    Undly_29.add_attribute("Qty", "20885148.750000"); // 1
    Undly_29_set.insert("20885148.750000");
    Undly_29.add_attribute("SettlTyp", "5"); // 1
    Undly_29_set.insert("5");
    Undly_29.add_attribute("CashAmt", "UnderlyingCashAmount_t_917236326"); // 1
    Undly_29_set.insert("UnderlyingCashAmount_t_917236326");
    Undly_29.add_attribute("CashTyp", "FIXED"); // 1
    Undly_29_set.insert("FIXED");
    Undly_29.add_attribute("Px", "12784625.550000"); // 1
    Undly_29_set.insert("12784625.550000");
    Undly_29.add_attribute("DirtPx", "1545851.100000"); // 1
    Undly_29_set.insert("1545851.100000");
    Undly_29.add_attribute("EndPx", "6966478.940000"); // 1
    Undly_29_set.insert("6966478.940000");
    Undly_29.add_attribute("StartVal", "UnderlyingStartValue_t_1203472698"); // 1
    Undly_29_set.insert("UnderlyingStartValue_t_1203472698");
    Undly_29.add_attribute("CurVal", "UnderlyingCurrentValue_t_358978048"); // 1
    Undly_29_set.insert("UnderlyingCurrentValue_t_358978048");
    Undly_29.add_attribute("EndVal", "UnderlyingEndValue_t_250139712"); // 1
    Undly_29_set.insert("UnderlyingEndValue_t_250139712");
    Undly_29.add_attribute("AdjQty", "21321988.270000"); // 1
    Undly_29_set.insert("21321988.270000");
    Undly_29.add_attribute("FxRate", "19826290.800000"); // 1
    Undly_29_set.insert("19826290.800000");
    Undly_29.add_attribute("FxRateCalc", "D"); // 1
    Undly_29_set.insert("D");
    Undly_29.add_attribute("CapValu", "UnderlyingCapValue_t_224477829"); // 1
    Undly_29_set.insert("UnderlyingCapValue_t_224477829");
    Undly_29.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1915070032"); // 1
    Undly_29_set.insert("UnderlyingSettlMethod_t_1915070032");
    Undly_29.add_attribute("PutCall", "943129778"); // 1
    Undly_29_set.insert("943129778");
    all_values.push_back(Undly_29_set);
    all_compo_names.insert("Undly_29_set");

    {
      xml_element UndAID_29{"UndAID"};
      multiset<string> UndAID_29_set;
      UndAID_29.add_attribute("AltID", "UnderlyingSecurityAltID_t_1857102344"); // 2
      UndAID_29_set.insert("UnderlyingSecurityAltID_t_1857102344");
      UndAID_29.add_attribute("AltIDSrc", "A"); // 2
      UndAID_29_set.insert("A");
      all_values.push_back(UndAID_29_set);
      all_compo_names.insert("UndAID_29_set");

      Undly_29.add_element(UndAID_29);
    }
    {
      xml_element Stip_49{"Stip"};
      multiset<string> Stip_49_set;
      Stip_49.add_attribute("Typ", "PPC"); // 2
      Stip_49_set.insert("PPC");
      Stip_49.add_attribute("Val", "UnderlyingStipValue_t_1982913388"); // 2
      Stip_49_set.insert("UnderlyingStipValue_t_1982913388");
      all_values.push_back(Stip_49_set);
      all_compo_names.insert("Stip_49_set");

      Undly_29.add_element(Stip_49);
    }
    {
      xml_element Pty_130{"Pty"};
      multiset<string> Pty_130_set;
      Pty_130.add_attribute("ID", "UnderlyingInstrumentPartyID_t_312230543"); // 2
      Pty_130_set.insert("UnderlyingInstrumentPartyID_t_312230543");
      Pty_130.add_attribute("Src", "9"); // 2
      Pty_130_set.insert("9");
      Pty_130.add_attribute("R", "20"); // 2
      Pty_130_set.insert("20");
      all_values.push_back(Pty_130_set);
      all_compo_names.insert("Pty_130_set");

      {
        xml_element Sub_130{"Sub"};
        multiset<string> Sub_130_set;
        Sub_130.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_549523760"); // 3
        Sub_130_set.insert("UnderlyingInstrumentPartySubID_t_549523760");
        Sub_130.add_attribute("Typ", "1"); // 3
        Sub_130_set.insert("1");
        all_values.push_back(Sub_130_set);
        all_compo_names.insert("Sub_130_set");

        Pty_130.add_element(Sub_130);
      }
      Undly_29.add_element(Pty_130);
    }
    elt.add_element(Undly_29);
  } // end Undly
  { // DerivSecDef
    xml_element DerivSecDef_0{"DerivSecDef"};
    {
      xml_element DerivInstrmt_0{"DerivInstrmt"};
      multiset<string> DerivInstrmt_0_set;
      DerivInstrmt_0.add_attribute("Sym", "DerivativeSymbol_t_1695548539"); // 2
      DerivInstrmt_0_set.insert("DerivativeSymbol_t_1695548539");
      DerivInstrmt_0.add_attribute("Sfx", "WI"); // 2
      DerivInstrmt_0_set.insert("WI");
      DerivInstrmt_0.add_attribute("ID", "DerivativeSecurityID_t_131025310"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityID_t_131025310");
      DerivInstrmt_0.add_attribute("Src", "6"); // 2
      DerivInstrmt_0_set.insert("6");
      DerivInstrmt_0.add_attribute("Prod", "12"); // 2
      DerivInstrmt_0_set.insert("12");
      DerivInstrmt_0.add_attribute("ProdCmplx", "DerivativeProductComplex_t_592032210"); // 2
      DerivInstrmt_0_set.insert("DerivativeProductComplex_t_592032210");
      DerivInstrmt_0.add_attribute("FlexProdElig", "true"); // 2
      DerivInstrmt_0_set.insert("true");
      DerivInstrmt_0.add_attribute("SecGrp", "DerivativeSecurityGroup_t_861734810"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityGroup_t_861734810");
      DerivInstrmt_0.add_attribute("CFI", "DerivativeCFICode_t_1509268536"); // 2
      DerivInstrmt_0_set.insert("DerivativeCFICode_t_1509268536");
      DerivInstrmt_0.add_attribute("SecTyp", "PEF"); // 2
      DerivInstrmt_0_set.insert("PEF");
      DerivInstrmt_0.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_2140197365"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecuritySubType_t_2140197365");
      DerivInstrmt_0.add_attribute("MMY", "1663853646"); // 2
      DerivInstrmt_0_set.insert("1663853646");
      DerivInstrmt_0.add_attribute("MatDt", "DerivativeMaturityDate_t_1488323751"); // 2
      DerivInstrmt_0_set.insert("DerivativeMaturityDate_t_1488323751");
      DerivInstrmt_0.add_attribute("MatTm", "1196186415"); // 2
      DerivInstrmt_0_set.insert("1196186415");
      DerivInstrmt_0.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_2022831694"); // 2
      DerivInstrmt_0_set.insert("DerivativeSettleOnOpenFlag_t_2022831694");
      DerivInstrmt_0.add_attribute("AsgnMeth", "1738463463"); // 2
      DerivInstrmt_0_set.insert("1738463463");
      DerivInstrmt_0.add_attribute("Status", "2"); // 2
      DerivInstrmt_0_set.insert("2");
      DerivInstrmt_0.add_attribute("IssDt", "DerivativeIssueDate_t_1857977126"); // 2
      DerivInstrmt_0_set.insert("DerivativeIssueDate_t_1857977126");
      DerivInstrmt_0.add_attribute("Rgstry", "DerivativeInstrRegistry_t_211663368"); // 2
      DerivInstrmt_0_set.insert("DerivativeInstrRegistry_t_211663368");
      DerivInstrmt_0.add_attribute("Ctry", "1405379424"); // 2
      DerivInstrmt_0_set.insert("1405379424");
      DerivInstrmt_0.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_1625563511"); // 2
      DerivInstrmt_0_set.insert("DerivativeStateOrProvinceOfIssue_t_1625563511");
      DerivInstrmt_0.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_1154793146"); // 2
      DerivInstrmt_0_set.insert("DerivativeLocaleOfIssue_t_1154793146");
      DerivInstrmt_0.add_attribute("StrkPx", "11149981.210000"); // 2
      DerivInstrmt_0_set.insert("11149981.210000");
      DerivInstrmt_0.add_attribute("StrkCcy", "CHF"); // 2
      DerivInstrmt_0_set.insert("CHF");
      DerivInstrmt_0.add_attribute("StrkMult", "9504278.610000"); // 2
      DerivInstrmt_0_set.insert("9504278.610000");
      DerivInstrmt_0.add_attribute("StrkValu", "16098202.170000"); // 2
      DerivInstrmt_0_set.insert("16098202.170000");
      DerivInstrmt_0.add_attribute("OptAt", "817041119"); // 2
      DerivInstrmt_0_set.insert("817041119");
      DerivInstrmt_0.add_attribute("Mult", "20556161.260000"); // 2
      DerivInstrmt_0_set.insert("20556161.260000");
      DerivInstrmt_0.add_attribute("MultTyp", "0"); // 2
      DerivInstrmt_0_set.insert("0");
      DerivInstrmt_0.add_attribute("FlowSchedTyp", "1"); // 2
      DerivInstrmt_0_set.insert("1");
      DerivInstrmt_0.add_attribute("MinPxIncr", "16036810.170000"); // 2
      DerivInstrmt_0_set.insert("16036810.170000");
      DerivInstrmt_0.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_175581674"); // 2
      DerivInstrmt_0_set.insert("DerivativeMinPriceIncrementAmount_t_175581674");
      DerivInstrmt_0.add_attribute("UOM", "USD"); // 2
      DerivInstrmt_0_set.insert("USD");
      DerivInstrmt_0.add_attribute("UOMQty", "5166957.800000"); // 2
      DerivInstrmt_0_set.insert("5166957.800000");
      DerivInstrmt_0.add_attribute("PxUOM", "Bu"); // 2
      DerivInstrmt_0_set.insert("Bu");
      DerivInstrmt_0.add_attribute("PxUOMQty", "9177358.960000"); // 2
      DerivInstrmt_0_set.insert("9177358.960000");
      DerivInstrmt_0.add_attribute("SettlMeth", "P"); // 2
      DerivInstrmt_0_set.insert("P");
      DerivInstrmt_0.add_attribute("PxQteMeth", "INT"); // 2
      DerivInstrmt_0_set.insert("INT");
      DerivInstrmt_0.add_attribute("ValMeth", "EQTY"); // 2
      DerivInstrmt_0_set.insert("EQTY");
      DerivInstrmt_0.add_attribute("ListMeth", "0"); // 2
      DerivInstrmt_0_set.insert("0");
      DerivInstrmt_0.add_attribute("CapPx", "13285883.480000"); // 2
      DerivInstrmt_0_set.insert("13285883.480000");
      DerivInstrmt_0.add_attribute("FlrPx", "19433744.310000"); // 2
      DerivInstrmt_0_set.insert("19433744.310000");
      DerivInstrmt_0.add_attribute("PutCall", "1"); // 2
      DerivInstrmt_0_set.insert("1");
      DerivInstrmt_0.add_attribute("ExerStyle", "0"); // 2
      DerivInstrmt_0_set.insert("0");
      DerivInstrmt_0.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_1818722478"); // 2
      DerivInstrmt_0_set.insert("DerivativeOptPayAmount_t_1818722478");
      DerivInstrmt_0.add_attribute("TmUnit", "S"); // 2
      DerivInstrmt_0_set.insert("S");
      DerivInstrmt_0.add_attribute("Exch", "DerivativeSecurityExchange_t_1558192710"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityExchange_t_1558192710");
      DerivInstrmt_0.add_attribute("PosLmt", "1529215956"); // 2
      DerivInstrmt_0_set.insert("1529215956");
      DerivInstrmt_0.add_attribute("NTPosLmt", "1453384562"); // 2
      DerivInstrmt_0_set.insert("1453384562");
      DerivInstrmt_0.add_attribute("Issr", "DerivativeIssuer_t_816088487"); // 2
      DerivInstrmt_0_set.insert("DerivativeIssuer_t_816088487");
      DerivInstrmt_0.add_attribute("EncIssrLen", "1007295819"); // 2
      DerivInstrmt_0_set.insert("1007295819");
      DerivInstrmt_0.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_460694061"); // 2
      DerivInstrmt_0_set.insert("DerivativeEncodedIssuer_t_460694061");
      DerivInstrmt_0.add_attribute("Desc", "DerivativeSecurityDesc_t_1931086608"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityDesc_t_1931086608");
      DerivInstrmt_0.add_attribute("EncSecDescLen", "157401845"); // 2
      DerivInstrmt_0_set.insert("157401845");
      DerivInstrmt_0.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_1052811672"); // 2
      DerivInstrmt_0_set.insert("DerivativeEncodedSecurityDesc_t_1052811672");
      DerivInstrmt_0.add_attribute("CSetMo", "734030821"); // 2
      DerivInstrmt_0_set.insert("734030821");
      all_values.push_back(DerivInstrmt_0_set);
      all_compo_names.insert("DerivInstrmt_0_set");

      {
        xml_element AID_16{"AID"};
        multiset<string> AID_16_set;
        AID_16.add_attribute("ID", "DerivativeSecurityAltID_t_1767222062"); // 3
        AID_16_set.insert("DerivativeSecurityAltID_t_1767222062");
        AID_16.add_attribute("Src", "G"); // 3
        AID_16_set.insert("G");
        all_values.push_back(AID_16_set);
        all_compo_names.insert("AID_16_set");

        DerivInstrmt_0.add_element(AID_16);
      }
      {
        xml_element SecXML_16{"SecXML"};
        multiset<string> SecXML_16_set;
        SecXML_16.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_642163299"); // 3
        SecXML_16_set.insert("DerivativeSecurityXMLSchema_t_642163299");
        all_values.push_back(SecXML_16_set);
        all_compo_names.insert("SecXML_16_set");

        DerivInstrmt_0.add_element(SecXML_16);
      }
      {
        xml_element Evnt_16{"Evnt"};
        multiset<string> Evnt_16_set;
        Evnt_16.add_attribute("EventTyp", "10"); // 3
        Evnt_16_set.insert("10");
        Evnt_16.add_attribute("Dt", "DerivativeEventDate_t_2064531168"); // 3
        Evnt_16_set.insert("DerivativeEventDate_t_2064531168");
        Evnt_16.add_attribute("Tm", "DerivativeEventTime_t_98360668"); // 3
        Evnt_16_set.insert("DerivativeEventTime_t_98360668");
        Evnt_16.add_attribute("Px", "19546640.650000"); // 3
        Evnt_16_set.insert("19546640.650000");
        Evnt_16.add_attribute("Txt", "DerivativeEventText_t_242751206"); // 3
        Evnt_16_set.insert("DerivativeEventText_t_242751206");
        all_values.push_back(Evnt_16_set);
        all_compo_names.insert("Evnt_16_set");

        DerivInstrmt_0.add_element(Evnt_16);
      }
      {
        xml_element Pty_131{"Pty"};
        multiset<string> Pty_131_set;
        Pty_131.add_attribute("ID", "DerivativeInstrumentPartyID_t_615056449"); // 3
        Pty_131_set.insert("DerivativeInstrumentPartyID_t_615056449");
        Pty_131.add_attribute("Src", "2"); // 3
        Pty_131_set.insert("2");
        Pty_131.add_attribute("R", "58"); // 3
        Pty_131_set.insert("58");
        all_values.push_back(Pty_131_set);
        all_compo_names.insert("Pty_131_set");

        {
          xml_element Sub_131{"Sub"};
          multiset<string> Sub_131_set;
          Sub_131.add_attribute("ID", "DerivativeInstrumentPartySubID_t_2133281868"); // 4
          Sub_131_set.insert("DerivativeInstrumentPartySubID_t_2133281868");
          Sub_131.add_attribute("Typ", "12"); // 4
          Sub_131_set.insert("12");
          all_values.push_back(Sub_131_set);
          all_compo_names.insert("Sub_131_set");

          Pty_131.add_element(Sub_131);
        }
        DerivInstrmt_0.add_element(Pty_131);
      }
      DerivSecDef_0.add_element(DerivInstrmt_0);
    }
    {
      xml_element Attrb_4{"Attrb"};
      multiset<string> Attrb_4_set;
      Attrb_4.add_attribute("Typ", "28"); // 2
      Attrb_4_set.insert("28");
      Attrb_4.add_attribute("Val", "DerivativeInstrAttribValue_t_148215848"); // 2
      Attrb_4_set.insert("DerivativeInstrAttribValue_t_148215848");
      all_values.push_back(Attrb_4_set);
      all_compo_names.insert("Attrb_4_set");

      DerivSecDef_0.add_element(Attrb_4);
    }
    {
      xml_element MktSegGrp_0{"MktSegGrp"};
      multiset<string> MktSegGrp_0_set;
      MktSegGrp_0.add_attribute("MktID", "MarketID_t_798299568"); // 2
      MktSegGrp_0_set.insert("MarketID_t_798299568");
      MktSegGrp_0.add_attribute("MktSegID", "MarketSegmentID_t_1235898671"); // 2
      MktSegGrp_0_set.insert("MarketSegmentID_t_1235898671");
      all_values.push_back(MktSegGrp_0_set);
      all_compo_names.insert("MktSegGrp_0_set");

      {
        xml_element SecTrdgRules_0{"SecTrdgRules"};
        {
          xml_element BaseTrdgRules_0{"BaseTrdgRules"};
          multiset<string> BaseTrdgRules_0_set;
          BaseTrdgRules_0.add_attribute("ExpirationCycle", "0"); // 4
          BaseTrdgRules_0_set.insert("0");
          BaseTrdgRules_0.add_attribute("MinTrdVol", "11755906.830000"); // 4
          BaseTrdgRules_0_set.insert("11755906.830000");
          BaseTrdgRules_0.add_attribute("MaxTrdVol", "9071375.010000"); // 4
          BaseTrdgRules_0_set.insert("9071375.010000");
          BaseTrdgRules_0.add_attribute("MxPxVar", "8931947.730000"); // 4
          BaseTrdgRules_0_set.insert("8931947.730000");
          BaseTrdgRules_0.add_attribute("ImpldMktInd", "2"); // 4
          BaseTrdgRules_0_set.insert("2");
          BaseTrdgRules_0.add_attribute("TrdCcy", "CHF"); // 4
          BaseTrdgRules_0_set.insert("CHF");
          BaseTrdgRules_0.add_attribute("RndLot", "14023882.330000"); // 4
          BaseTrdgRules_0_set.insert("14023882.330000");
          BaseTrdgRules_0.add_attribute("MlegModel", "2"); // 4
          BaseTrdgRules_0_set.insert("2");
          BaseTrdgRules_0.add_attribute("MlegPxMeth", "0"); // 4
          BaseTrdgRules_0_set.insert("0");
          BaseTrdgRules_0.add_attribute("PxTyp", "13"); // 4
          BaseTrdgRules_0_set.insert("13");
          all_values.push_back(BaseTrdgRules_0_set);
          all_compo_names.insert("BaseTrdgRules_0_set");

          {
            xml_element TickRules_0{"TickRules"};
            multiset<string> TickRules_0_set;
            TickRules_0.add_attribute("StartTickPxRng", "14535674.750000"); // 5
            TickRules_0_set.insert("14535674.750000");
            TickRules_0.add_attribute("EndTickPxRng", "17126014.200000"); // 5
            TickRules_0_set.insert("17126014.200000");
            TickRules_0.add_attribute("TickIncr", "19200220.140000"); // 5
            TickRules_0_set.insert("19200220.140000");
            TickRules_0.add_attribute("TickRuleTyp", "4"); // 5
            TickRules_0_set.insert("4");
            all_values.push_back(TickRules_0_set);
            all_compo_names.insert("TickRules_0_set");

            BaseTrdgRules_0.add_element(TickRules_0);
          }
          {
            xml_element LotTypeRules_0{"LotTypeRules"};
            multiset<string> LotTypeRules_0_set;
            LotTypeRules_0.add_attribute("LotTyp", "1"); // 5
            LotTypeRules_0_set.insert("1");
            LotTypeRules_0.add_attribute("MinLotSz", "4147016.660000"); // 5
            LotTypeRules_0_set.insert("4147016.660000");
            all_values.push_back(LotTypeRules_0_set);
            all_compo_names.insert("LotTypeRules_0_set");

            BaseTrdgRules_0.add_element(LotTypeRules_0);
          }
          {
            xml_element PxLmts_0{"PxLmts"};
            multiset<string> PxLmts_0_set;
            PxLmts_0.add_attribute("PxLmtTyp", "0"); // 5
            PxLmts_0_set.insert("0");
            PxLmts_0.add_attribute("LowLmtPx", "13520180.840000"); // 5
            PxLmts_0_set.insert("13520180.840000");
            PxLmts_0.add_attribute("HiLmtPx", "5130623.340000"); // 5
            PxLmts_0_set.insert("5130623.340000");
            PxLmts_0.add_attribute("TrdgRefPx", "5120850.500000"); // 5
            PxLmts_0_set.insert("5120850.500000");
            all_values.push_back(PxLmts_0_set);
            all_compo_names.insert("PxLmts_0_set");

            BaseTrdgRules_0.add_element(PxLmts_0);
          }
          SecTrdgRules_0.add_element(BaseTrdgRules_0);
        }
        {
          xml_element TrdgSesRulesGrp_0{"TrdgSesRulesGrp"};
          multiset<string> TrdgSesRulesGrp_0_set;
          TrdgSesRulesGrp_0.add_attribute("SesID", "5"); // 4
          TrdgSesRulesGrp_0_set.insert("5");
          TrdgSesRulesGrp_0.add_attribute("SesSub", "2"); // 4
          TrdgSesRulesGrp_0_set.insert("2");
          all_values.push_back(TrdgSesRulesGrp_0_set);
          all_compo_names.insert("TrdgSesRulesGrp_0_set");

          {
            xml_element TrdgSesRules_0{"TrdgSesRules"};
            {
              xml_element OrdTypRules_0{"OrdTypRules"};
              multiset<string> OrdTypRules_0_set;
              OrdTypRules_0.add_attribute("OrdTyp", "H"); // 6
              OrdTypRules_0_set.insert("H");
              all_values.push_back(OrdTypRules_0_set);
              all_compo_names.insert("OrdTypRules_0_set");

              TrdgSesRules_0.add_element(OrdTypRules_0);
            }
            {
              xml_element TmInForceRules_0{"TmInForceRules"};
              multiset<string> TmInForceRules_0_set;
              TmInForceRules_0.add_attribute("TmInForce", "5"); // 6
              TmInForceRules_0_set.insert("5");
              all_values.push_back(TmInForceRules_0_set);
              all_compo_names.insert("TmInForceRules_0_set");

              TrdgSesRules_0.add_element(TmInForceRules_0);
            }
            {
              xml_element ExecInstRules_0{"ExecInstRules"};
              multiset<string> ExecInstRules_0_set;
              ExecInstRules_0.add_attribute("ExecInstValu", "3"); // 6
              ExecInstRules_0_set.insert("3");
              all_values.push_back(ExecInstRules_0_set);
              all_compo_names.insert("ExecInstRules_0_set");

              TrdgSesRules_0.add_element(ExecInstRules_0);
            }
            {
              xml_element MtchRules_0{"MtchRules"};
              multiset<string> MtchRules_0_set;
              MtchRules_0.add_attribute("MtchAlgo", "MatchAlgorithm_t_263116508"); // 6
              MtchRules_0_set.insert("MatchAlgorithm_t_263116508");
              MtchRules_0.add_attribute("MtchTyp", "S3"); // 6
              MtchRules_0_set.insert("S3");
              all_values.push_back(MtchRules_0_set);
              all_compo_names.insert("MtchRules_0_set");

              TrdgSesRules_0.add_element(MtchRules_0);
            }
            {
              xml_element MDFeedTyps_0{"MDFeedTyps"};
              multiset<string> MDFeedTyps_0_set;
              MDFeedTyps_0.add_attribute("MDFeedTyp", "MDFeedType_t_1262132851"); // 6
              MDFeedTyps_0_set.insert("MDFeedType_t_1262132851");
              MDFeedTyps_0.add_attribute("MktDepth", "1061416076"); // 6
              MDFeedTyps_0_set.insert("1061416076");
              MDFeedTyps_0.add_attribute("MDBkTyp", "3"); // 6
              MDFeedTyps_0_set.insert("3");
              all_values.push_back(MDFeedTyps_0_set);
              all_compo_names.insert("MDFeedTyps_0_set");

              TrdgSesRules_0.add_element(MDFeedTyps_0);
            }
            TrdgSesRulesGrp_0.add_element(TrdgSesRules_0);
          }
          SecTrdgRules_0.add_element(TrdgSesRulesGrp_0);
        }
        {
          xml_element Attrb_5{"Attrb"};
          multiset<string> Attrb_5_set;
          Attrb_5.add_attribute("Typ", "8"); // 4
          Attrb_5_set.insert("8");
          Attrb_5.add_attribute("Val", "NestedInstrAttribValue_t_89523111"); // 4
          Attrb_5_set.insert("NestedInstrAttribValue_t_89523111");
          all_values.push_back(Attrb_5_set);
          all_compo_names.insert("Attrb_5_set");

          SecTrdgRules_0.add_element(Attrb_5);
        }
        MktSegGrp_0.add_element(SecTrdgRules_0);
      }
      {
        xml_element StrkRules_0{"StrkRules"};
        multiset<string> StrkRules_0_set;
        StrkRules_0.add_attribute("StrkRule", "StrikeRuleID_t_2043333158"); // 3
        StrkRules_0_set.insert("StrikeRuleID_t_2043333158");
        StrkRules_0.add_attribute("StartStrkPxRng", "18068012.030000"); // 3
        StrkRules_0_set.insert("18068012.030000");
        StrkRules_0.add_attribute("EndStrkPxRng", "6758228.570000"); // 3
        StrkRules_0_set.insert("6758228.570000");
        StrkRules_0.add_attribute("StrkIncr", "1847193.200000"); // 3
        StrkRules_0_set.insert("1847193.200000");
        StrkRules_0.add_attribute("StrkExrStyle", "0"); // 3
        StrkRules_0_set.insert("0");
        all_values.push_back(StrkRules_0_set);
        all_compo_names.insert("StrkRules_0_set");

        {
          xml_element MatRules_0{"MatRules"};
          multiset<string> MatRules_0_set;
          MatRules_0.add_attribute("MatRuleID", "MaturityRuleID_t_2078211090"); // 4
          MatRules_0_set.insert("MaturityRuleID_t_2078211090");
          MatRules_0.add_attribute("MMYFmt", "2"); // 4
          MatRules_0_set.insert("2");
          MatRules_0.add_attribute("MMYIncrUnits", "3"); // 4
          MatRules_0_set.insert("3");
          MatRules_0.add_attribute("StartMMY", "1116718635"); // 4
          MatRules_0_set.insert("1116718635");
          MatRules_0.add_attribute("EndMMY", "786968777"); // 4
          MatRules_0_set.insert("786968777");
          MatRules_0.add_attribute("MMYIncr", "83320764"); // 4
          MatRules_0_set.insert("83320764");
          all_values.push_back(MatRules_0_set);
          all_compo_names.insert("MatRules_0_set");

          StrkRules_0.add_element(MatRules_0);
        }
        MktSegGrp_0.add_element(StrkRules_0);
      }
      DerivSecDef_0.add_element(MktSegGrp_0);
    }
    elt.add_element(DerivSecDef_0);
  } // end DerivSecDef
  { // RelSym
    xml_element RelSym_0{"RelSym"};
    multiset<string> RelSym_0_set;
    RelSym_0.add_attribute("Ccy", "JPY"); // 1
    RelSym_0_set.insert("JPY");
    RelSym_0.add_attribute("CorpActn", "D"); // 1
    RelSym_0_set.insert("D");
    RelSym_0.add_attribute("TxnTm", "RelSymTransactTime_t_417695651"); // 1
    RelSym_0_set.insert("RelSymTransactTime_t_417695651");
    RelSym_0.add_attribute("Txt", "Text_t_722825764"); // 1
    RelSym_0_set.insert("Text_t_722825764");
    RelSym_0.add_attribute("EncTxtLen", "1817021002"); // 1
    RelSym_0_set.insert("1817021002");
    RelSym_0.add_attribute("EncTxt", "EncodedText_t_929780702"); // 1
    RelSym_0_set.insert("EncodedText_t_929780702");
    all_values.push_back(RelSym_0_set);
    all_compo_names.insert("RelSym_0_set");

    {
      xml_element Instrmt_16{"Instrmt"};
      multiset<string> Instrmt_16_set;
      Instrmt_16.add_attribute("Sym", "Symbol_t_170111406"); // 2
      Instrmt_16_set.insert("Symbol_t_170111406");
      Instrmt_16.add_attribute("Sfx", "CD"); // 2
      Instrmt_16_set.insert("CD");
      Instrmt_16.add_attribute("ID", "SecurityID_t_1723185990"); // 2
      Instrmt_16_set.insert("SecurityID_t_1723185990");
      Instrmt_16.add_attribute("Src", "D"); // 2
      Instrmt_16_set.insert("D");
      Instrmt_16.add_attribute("Prod", "7"); // 2
      Instrmt_16_set.insert("7");
      Instrmt_16.add_attribute("ProdCmplx", "ProductComplex_t_1986302498"); // 2
      Instrmt_16_set.insert("ProductComplex_t_1986302498");
      Instrmt_16.add_attribute("SecGrp", "SecurityGroup_t_678181137"); // 2
      Instrmt_16_set.insert("SecurityGroup_t_678181137");
      Instrmt_16.add_attribute("CFI", "CFICode_t_1026222345"); // 2
      Instrmt_16_set.insert("CFICode_t_1026222345");
      Instrmt_16.add_attribute("SecTyp", "SECPLEDGE"); // 2
      Instrmt_16_set.insert("SECPLEDGE");
      Instrmt_16.add_attribute("SubTyp", "SecuritySubType_t_1814376794"); // 2
      Instrmt_16_set.insert("SecuritySubType_t_1814376794");
      Instrmt_16.add_attribute("MMY", "1939828775"); // 2
      Instrmt_16_set.insert("1939828775");
      Instrmt_16.add_attribute("MatDt", "MaturityDate_t_989758037"); // 2
      Instrmt_16_set.insert("MaturityDate_t_989758037");
      Instrmt_16.add_attribute("MatTm", "1710226305"); // 2
      Instrmt_16_set.insert("1710226305");
      Instrmt_16.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1599146331"); // 2
      Instrmt_16_set.insert("SettleOnOpenFlag_t_1599146331");
      Instrmt_16.add_attribute("AsgnMeth", "1665580895"); // 2
      Instrmt_16_set.insert("1665580895");
      Instrmt_16.add_attribute("Status", "2"); // 2
      Instrmt_16_set.insert("2");
      Instrmt_16.add_attribute("CpnPmt", "CouponPaymentDate_t_1457559574"); // 2
      Instrmt_16_set.insert("CouponPaymentDate_t_1457559574");
      Instrmt_16.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_16_set.insert("MR");
      Instrmt_16.add_attribute("Snrty", "SB"); // 2
      Instrmt_16_set.insert("SB");
      Instrmt_16.add_attribute("NotlPctOut", "19757625.650000"); // 2
      Instrmt_16_set.insert("19757625.650000");
      Instrmt_16.add_attribute("OrigNotlPctOut", "5655433.250000"); // 2
      Instrmt_16_set.insert("5655433.250000");
      Instrmt_16.add_attribute("AttchPnt", "20153157.040000"); // 2
      Instrmt_16_set.insert("20153157.040000");
      Instrmt_16.add_attribute("DetchPnt", "20590833.290000"); // 2
      Instrmt_16_set.insert("20590833.290000");
      Instrmt_16.add_attribute("Issued", "IssueDate_t_1454800327"); // 2
      Instrmt_16_set.insert("IssueDate_t_1454800327");
      Instrmt_16.add_attribute("RepoCollSecTyp", "1728106723"); // 2
      Instrmt_16_set.insert("1728106723");
      Instrmt_16.add_attribute("RepoTrm", "1429891009"); // 2
      Instrmt_16_set.insert("1429891009");
      Instrmt_16.add_attribute("RepoRt", "6112753.470000"); // 2
      Instrmt_16_set.insert("6112753.470000");
      Instrmt_16.add_attribute("Fctr", "21458023.740000"); // 2
      Instrmt_16_set.insert("21458023.740000");
      Instrmt_16.add_attribute("CrdRtg", "CreditRating_t_5233125"); // 2
      Instrmt_16_set.insert("CreditRating_t_5233125");
      Instrmt_16.add_attribute("Rgstry", "InstrRegistry_t_280812701"); // 2
      Instrmt_16_set.insert("InstrRegistry_t_280812701");
      Instrmt_16.add_attribute("IssuCtry", "928099428"); // 2
      Instrmt_16_set.insert("928099428");
      Instrmt_16.add_attribute("StPrv", "StateOrProvinceOfIssue_t_175344532"); // 2
      Instrmt_16_set.insert("StateOrProvinceOfIssue_t_175344532");
      Instrmt_16.add_attribute("Lcl", "LocaleOfIssue_t_1078468839"); // 2
      Instrmt_16_set.insert("LocaleOfIssue_t_1078468839");
      Instrmt_16.add_attribute("Redeem", "RedemptionDate_t_503801770"); // 2
      Instrmt_16_set.insert("RedemptionDate_t_503801770");
      Instrmt_16.add_attribute("StrkPx", "9532286.840000"); // 2
      Instrmt_16_set.insert("9532286.840000");
      Instrmt_16.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_16_set.insert("JPY");
      Instrmt_16.add_attribute("StrkMult", "16314098.210000"); // 2
      Instrmt_16_set.insert("16314098.210000");
      Instrmt_16.add_attribute("StrkValu", "18687806.780000"); // 2
      Instrmt_16_set.insert("18687806.780000");
      Instrmt_16.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_16_set.insert("3");
      Instrmt_16.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_16_set.insert("4");
      Instrmt_16.add_attribute("StrkPxBndryPrcsn", "16611258.050000"); // 2
      Instrmt_16_set.insert("16611258.050000");
      Instrmt_16.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_16_set.insert("1");
      Instrmt_16.add_attribute("OptAt", "861045625"); // 2
      Instrmt_16_set.insert("861045625");
      Instrmt_16.add_attribute("Mult", "11127884.880000"); // 2
      Instrmt_16_set.insert("11127884.880000");
      Instrmt_16.add_attribute("MultTyp", "0"); // 2
      Instrmt_16_set.insert("0");
      Instrmt_16.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_16_set.insert("2");
      Instrmt_16.add_attribute("MinPxIncr", "4228644.140000"); // 2
      Instrmt_16_set.insert("4228644.140000");
      Instrmt_16.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1199535520"); // 2
      Instrmt_16_set.insert("MinPriceIncrementAmount_t_1199535520");
      Instrmt_16.add_attribute("UOM", "t"); // 2
      Instrmt_16_set.insert("t");
      Instrmt_16.add_attribute("UOMQty", "2511433.320000"); // 2
      Instrmt_16_set.insert("2511433.320000");
      Instrmt_16.add_attribute("PxUOM", "Bcf"); // 2
      Instrmt_16_set.insert("Bcf");
      Instrmt_16.add_attribute("PxUOMQty", "17046865.860000"); // 2
      Instrmt_16_set.insert("17046865.860000");
      Instrmt_16.add_attribute("SettlMeth", "P"); // 2
      Instrmt_16_set.insert("P");
      Instrmt_16.add_attribute("ExerStyle", "2"); // 2
      Instrmt_16_set.insert("2");
      Instrmt_16.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_16_set.insert("3");
      Instrmt_16.add_attribute("OptPayAmt", "OptPayoutAmount_t_1592634023"); // 2
      Instrmt_16_set.insert("OptPayoutAmount_t_1592634023");
      Instrmt_16.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_16_set.insert("PCTPAR");
      Instrmt_16.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_16_set.insert("CDS");
      Instrmt_16.add_attribute("ListMeth", "0"); // 2
      Instrmt_16_set.insert("0");
      Instrmt_16.add_attribute("CapPx", "19644835.730000"); // 2
      Instrmt_16_set.insert("19644835.730000");
      Instrmt_16.add_attribute("FlrPx", "642441.680000"); // 2
      Instrmt_16_set.insert("642441.680000");
      Instrmt_16.add_attribute("PutCall", "0"); // 2
      Instrmt_16_set.insert("0");
      Instrmt_16.add_attribute("FlexInd", "true"); // 2
      Instrmt_16_set.insert("true");
      Instrmt_16.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_16_set.insert("false");
      Instrmt_16.add_attribute("TmUnit", "H"); // 2
      Instrmt_16_set.insert("H");
      Instrmt_16.add_attribute("CpnRt", "17380270.970000"); // 2
      Instrmt_16_set.insert("17380270.970000");
      Instrmt_16.add_attribute("Exch", "SecurityExchange_t_910666559"); // 2
      Instrmt_16_set.insert("SecurityExchange_t_910666559");
      Instrmt_16.add_attribute("PosLmt", "62882890"); // 2
      Instrmt_16_set.insert("62882890");
      Instrmt_16.add_attribute("NTPosLmt", "1459324127"); // 2
      Instrmt_16_set.insert("1459324127");
      Instrmt_16.add_attribute("Issr", "Issuer_t_6038458"); // 2
      Instrmt_16_set.insert("Issuer_t_6038458");
      Instrmt_16.add_attribute("EncIssrLen", "1361185858"); // 2
      Instrmt_16_set.insert("1361185858");
      Instrmt_16.add_attribute("EncIssr", "EncodedIssuer_t_972966285"); // 2
      Instrmt_16_set.insert("EncodedIssuer_t_972966285");
      Instrmt_16.add_attribute("Desc", "SecurityDesc_t_91168394"); // 2
      Instrmt_16_set.insert("SecurityDesc_t_91168394");
      Instrmt_16.add_attribute("EncSecDescLen", "74747835"); // 2
      Instrmt_16_set.insert("74747835");
      Instrmt_16.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2085754773"); // 2
      Instrmt_16_set.insert("EncodedSecurityDesc_t_2085754773");
      Instrmt_16.add_attribute("Pool", "Pool_t_1841879225"); // 2
      Instrmt_16_set.insert("Pool_t_1841879225");
      Instrmt_16.add_attribute("CSetMo", "683255437"); // 2
      Instrmt_16_set.insert("683255437");
      Instrmt_16.add_attribute("CPPgm", "2"); // 2
      Instrmt_16_set.insert("2");
      Instrmt_16.add_attribute("CPRegT", "CPRegType_t_893931097"); // 2
      Instrmt_16_set.insert("CPRegType_t_893931097");
      Instrmt_16.add_attribute("Dated", "DatedDate_t_372626319"); // 2
      Instrmt_16_set.insert("DatedDate_t_372626319");
      Instrmt_16.add_attribute("IntAcrl", "InterestAccrualDate_t_612278872"); // 2
      Instrmt_16_set.insert("InterestAccrualDate_t_612278872");
      all_values.push_back(Instrmt_16_set);
      all_compo_names.insert("Instrmt_16_set");

      {
        xml_element AID_17{"AID"};
        multiset<string> AID_17_set;
        AID_17.add_attribute("AltID", "SecurityAltID_t_511526295"); // 3
        AID_17_set.insert("SecurityAltID_t_511526295");
        AID_17.add_attribute("AltIDSrc", "K"); // 3
        AID_17_set.insert("K");
        all_values.push_back(AID_17_set);
        all_compo_names.insert("AID_17_set");

        Instrmt_16.add_element(AID_17);
      }
      {
        xml_element SecXML_17{"SecXML"};
        multiset<string> SecXML_17_set;
        SecXML_17.add_attribute("Schema", "SecurityXMLSchema_t_775021885"); // 3
        SecXML_17_set.insert("SecurityXMLSchema_t_775021885");
        all_values.push_back(SecXML_17_set);
        all_compo_names.insert("SecXML_17_set");

        Instrmt_16.add_element(SecXML_17);
      }
      {
        xml_element Evnt_17{"Evnt"};
        multiset<string> Evnt_17_set;
        Evnt_17.add_attribute("EventTyp", "19"); // 3
        Evnt_17_set.insert("19");
        Evnt_17.add_attribute("Dt", "EventDate_t_1215138919"); // 3
        Evnt_17_set.insert("EventDate_t_1215138919");
        Evnt_17.add_attribute("Tm", "EventTime_t_220172260"); // 3
        Evnt_17_set.insert("EventTime_t_220172260");
        Evnt_17.add_attribute("Px", "11201090.430000"); // 3
        Evnt_17_set.insert("11201090.430000");
        Evnt_17.add_attribute("Txt", "EventText_t_351283659"); // 3
        Evnt_17_set.insert("EventText_t_351283659");
        all_values.push_back(Evnt_17_set);
        all_compo_names.insert("Evnt_17_set");

        Instrmt_16.add_element(Evnt_17);
      }
      {
        xml_element Pty_132{"Pty"};
        multiset<string> Pty_132_set;
        Pty_132.add_attribute("ID", "InstrumentPartyID_t_1818039409"); // 3
        Pty_132_set.insert("InstrumentPartyID_t_1818039409");
        Pty_132.add_attribute("Src", "7"); // 3
        Pty_132_set.insert("7");
        Pty_132.add_attribute("R", "74"); // 3
        Pty_132_set.insert("74");
        all_values.push_back(Pty_132_set);
        all_compo_names.insert("Pty_132_set");

        {
          xml_element Sub_132{"Sub"};
          multiset<string> Sub_132_set;
          Sub_132.add_attribute("ID", "InstrumentPartySubID_t_1443767441"); // 4
          Sub_132_set.insert("InstrumentPartySubID_t_1443767441");
          Sub_132.add_attribute("Typ", "26"); // 4
          Sub_132_set.insert("26");
          all_values.push_back(Sub_132_set);
          all_compo_names.insert("Sub_132_set");

          Pty_132.add_element(Sub_132);
        }
        Instrmt_16.add_element(Pty_132);
      }
      {
        xml_element CmplxEvnt_16{"CmplxEvnt"};
        multiset<string> CmplxEvnt_16_set;
        CmplxEvnt_16.add_attribute("Typ", "2"); // 3
        CmplxEvnt_16_set.insert("2");
        CmplxEvnt_16.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2022724158"); // 3
        CmplxEvnt_16_set.insert("ComplexOptPayoutAmount_t_2022724158");
        CmplxEvnt_16.add_attribute("Px", "14231211.820000"); // 3
        CmplxEvnt_16_set.insert("14231211.820000");
        CmplxEvnt_16.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_16_set.insert("2");
        CmplxEvnt_16.add_attribute("PxBndryPrcsn", "20856070.480000"); // 3
        CmplxEvnt_16_set.insert("20856070.480000");
        CmplxEvnt_16.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_16_set.insert("2");
        CmplxEvnt_16.add_attribute("Cond", "1"); // 3
        CmplxEvnt_16_set.insert("1");
        all_values.push_back(CmplxEvnt_16_set);
        all_compo_names.insert("CmplxEvnt_16_set");

        {
          xml_element EvntDts_16{"EvntDts"};
          multiset<string> EvntDts_16_set;
          EvntDts_16.add_attribute("StartDt", "ComplexEventStartDate_t_1299309258"); // 4
          EvntDts_16_set.insert("ComplexEventStartDate_t_1299309258");
          EvntDts_16.add_attribute("EndDt", "ComplexEventEndDate_t_1707927946"); // 4
          EvntDts_16_set.insert("ComplexEventEndDate_t_1707927946");
          all_values.push_back(EvntDts_16_set);
          all_compo_names.insert("EvntDts_16_set");

          {
            xml_element EvntTms_16{"EvntTms"};
            multiset<string> EvntTms_16_set;
            EvntTms_16.add_attribute("StartTm", "1991447178"); // 5
            EvntTms_16_set.insert("1991447178");
            EvntTms_16.add_attribute("EndTm", "1374057093"); // 5
            EvntTms_16_set.insert("1374057093");
            all_values.push_back(EvntTms_16_set);
            all_compo_names.insert("EvntTms_16_set");

            EvntDts_16.add_element(EvntTms_16);
          }
          CmplxEvnt_16.add_element(EvntDts_16);
        }
        Instrmt_16.add_element(CmplxEvnt_16);
      }
      RelSym_0.add_element(Instrmt_16);
    }
    {
      xml_element PxLmts2_0{"PxLmts2"};
      multiset<string> PxLmts2_0_set;
      PxLmts2_0.add_attribute("PxLmtTyp", "0"); // 2
      PxLmts2_0_set.insert("0");
      PxLmts2_0.add_attribute("LowLmtPx", "16858427.550000"); // 2
      PxLmts2_0_set.insert("16858427.550000");
      PxLmts2_0.add_attribute("HiLmtPx", "20573125.300000"); // 2
      PxLmts2_0_set.insert("20573125.300000");
      PxLmts2_0.add_attribute("TrdgRefPx", "20073346.120000"); // 2
      PxLmts2_0_set.insert("20073346.120000");
      all_values.push_back(PxLmts2_0_set);
      all_compo_names.insert("PxLmts2_0_set");

      RelSym_0.add_element(PxLmts2_0);
    }
    {
      xml_element InstrmtExt_4{"InstrmtExt"};
      multiset<string> InstrmtExt_4_set;
      InstrmtExt_4.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_4_set.insert("2");
      InstrmtExt_4.add_attribute("PctAtRisk", "2824552.020000"); // 2
      InstrmtExt_4_set.insert("2824552.020000");
      all_values.push_back(InstrmtExt_4_set);
      all_compo_names.insert("InstrmtExt_4_set");

      {
        xml_element Attrb_6{"Attrb"};
        multiset<string> Attrb_6_set;
        Attrb_6.add_attribute("Typ", "15"); // 3
        Attrb_6_set.insert("15");
        Attrb_6.add_attribute("Val", "InstrAttribValue_t_943816500"); // 3
        Attrb_6_set.insert("InstrAttribValue_t_943816500");
        all_values.push_back(Attrb_6_set);
        all_compo_names.insert("Attrb_6_set");

        InstrmtExt_4.add_element(Attrb_6);
      }
      RelSym_0.add_element(InstrmtExt_4);
    }
    {
      xml_element Leg_25{"Leg"};
      multiset<string> Leg_25_set;
      Leg_25.add_attribute("Sym", "LegSymbol_t_212284460"); // 2
      Leg_25_set.insert("LegSymbol_t_212284460");
      Leg_25.add_attribute("Sfx", "WI"); // 2
      Leg_25_set.insert("WI");
      Leg_25.add_attribute("ID", "LegSecurityID_t_380254671"); // 2
      Leg_25_set.insert("LegSecurityID_t_380254671");
      Leg_25.add_attribute("Src", "L"); // 2
      Leg_25_set.insert("L");
      Leg_25.add_attribute("Prod", "4"); // 2
      Leg_25_set.insert("4");
      Leg_25.add_attribute("CFI", "LegCFICode_t_1500363714"); // 2
      Leg_25_set.insert("LegCFICode_t_1500363714");
      Leg_25.add_attribute("SecTyp", "PZFJ"); // 2
      Leg_25_set.insert("PZFJ");
      Leg_25.add_attribute("SecSubTyp", "LegSecuritySubType_t_1137879743"); // 2
      Leg_25_set.insert("LegSecuritySubType_t_1137879743");
      Leg_25.add_attribute("MMY", "289989034"); // 2
      Leg_25_set.insert("289989034");
      Leg_25.add_attribute("Mat", "LegMaturityDate_t_46751219"); // 2
      Leg_25_set.insert("LegMaturityDate_t_46751219");
      Leg_25.add_attribute("MatTm", "434163536"); // 2
      Leg_25_set.insert("434163536");
      Leg_25.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2122566767"); // 2
      Leg_25_set.insert("LegCouponPaymentDate_t_2122566767");
      Leg_25.add_attribute("Issued", "LegIssueDate_t_1030324986"); // 2
      Leg_25_set.insert("LegIssueDate_t_1030324986");
      Leg_25.add_attribute("RepoCollSecTyp", "309404046"); // 2
      Leg_25_set.insert("309404046");
      Leg_25.add_attribute("RepoTrm", "1398204301"); // 2
      Leg_25_set.insert("1398204301");
      Leg_25.add_attribute("RepoRt", "7770816.640000"); // 2
      Leg_25_set.insert("7770816.640000");
      Leg_25.add_attribute("Fctr", "2475274.460000"); // 2
      Leg_25_set.insert("2475274.460000");
      Leg_25.add_attribute("CrdRtg", "LegCreditRating_t_2133165962"); // 2
      Leg_25_set.insert("LegCreditRating_t_2133165962");
      Leg_25.add_attribute("Rgstry", "LegInstrRegistry_t_529876801"); // 2
      Leg_25_set.insert("LegInstrRegistry_t_529876801");
      Leg_25.add_attribute("Ctry", "1546836704"); // 2
      Leg_25_set.insert("1546836704");
      Leg_25.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1693610261"); // 2
      Leg_25_set.insert("LegStateOrProvinceOfIssue_t_1693610261");
      Leg_25.add_attribute("Lcl", "LegLocaleOfIssue_t_373840331"); // 2
      Leg_25_set.insert("LegLocaleOfIssue_t_373840331");
      Leg_25.add_attribute("Redeem", "LegRedemptionDate_t_773410149"); // 2
      Leg_25_set.insert("LegRedemptionDate_t_773410149");
      Leg_25.add_attribute("Strk", "11923256.850000"); // 2
      Leg_25_set.insert("11923256.850000");
      Leg_25.add_attribute("StrkCcy", "USD"); // 2
      Leg_25_set.insert("USD");
      Leg_25.add_attribute("OptA", "1052176649"); // 2
      Leg_25_set.insert("1052176649");
      Leg_25.add_attribute("Cmult", "3444896.440000"); // 2
      Leg_25_set.insert("3444896.440000");
      Leg_25.add_attribute("MultTyp", "0"); // 2
      Leg_25_set.insert("0");
      Leg_25.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_25_set.insert("0");
      Leg_25.add_attribute("UOM", "oz_tr"); // 2
      Leg_25_set.insert("oz_tr");
      Leg_25.add_attribute("UOMQty", "11779786.940000"); // 2
      Leg_25_set.insert("11779786.940000");
      Leg_25.add_attribute("PxUOM", "Alw"); // 2
      Leg_25_set.insert("Alw");
      Leg_25.add_attribute("PxUOMQty", "16685608.150000"); // 2
      Leg_25_set.insert("16685608.150000");
      Leg_25.add_attribute("TmUnit", "Yr"); // 2
      Leg_25_set.insert("Yr");
      Leg_25.add_attribute("ExerStyle", "1"); // 2
      Leg_25_set.insert("1");
      Leg_25.add_attribute("CpnRt", "10214408.820000"); // 2
      Leg_25_set.insert("10214408.820000");
      Leg_25.add_attribute("Exch", "LegSecurityExchange_t_89141816"); // 2
      Leg_25_set.insert("LegSecurityExchange_t_89141816");
      Leg_25.add_attribute("Issr", "LegIssuer_t_1081694635"); // 2
      Leg_25_set.insert("LegIssuer_t_1081694635");
      Leg_25.add_attribute("EncLegIssrLen", "1311429916"); // 2
      Leg_25_set.insert("1311429916");
      Leg_25.add_attribute("EncLegIssr", "EncodedLegIssuer_t_135893035"); // 2
      Leg_25_set.insert("EncodedLegIssuer_t_135893035");
      Leg_25.add_attribute("Desc", "LegSecurityDesc_t_1515858172"); // 2
      Leg_25_set.insert("LegSecurityDesc_t_1515858172");
      Leg_25.add_attribute("EncLegSecDescLen", "1286513035"); // 2
      Leg_25_set.insert("1286513035");
      Leg_25.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1166218021"); // 2
      Leg_25_set.insert("EncodedLegSecurityDesc_t_1166218021");
      Leg_25.add_attribute("RatioQty", "18252622.180000"); // 2
      Leg_25_set.insert("18252622.180000");
      Leg_25.add_attribute("Side", "9"); // 2
      Leg_25_set.insert("9");
      Leg_25.add_attribute("Ccy", "EUR"); // 2
      Leg_25_set.insert("EUR");
      Leg_25.add_attribute("Pool", "LegPool_t_522916003"); // 2
      Leg_25_set.insert("LegPool_t_522916003");
      Leg_25.add_attribute("Dated", "LegDatedDate_t_325692839"); // 2
      Leg_25_set.insert("LegDatedDate_t_325692839");
      Leg_25.add_attribute("CSetMo", "1472142721"); // 2
      Leg_25_set.insert("1472142721");
      Leg_25.add_attribute("IntAcrl", "LegInterestAccrualDate_t_69042616"); // 2
      Leg_25_set.insert("LegInterestAccrualDate_t_69042616");
      Leg_25.add_attribute("PutCall", "699533170"); // 2
      Leg_25_set.insert("699533170");
      Leg_25.add_attribute("LegOptionRatio", "980692.230000"); // 2
      Leg_25_set.insert("980692.230000");
      Leg_25.add_attribute("Px", "12613683.010000"); // 2
      Leg_25_set.insert("12613683.010000");
      all_values.push_back(Leg_25_set);
      all_compo_names.insert("Leg_25_set");

      {
        xml_element LegAID_25{"LegAID"};
        multiset<string> LegAID_25_set;
        LegAID_25.add_attribute("SecAltID", "LegSecurityAltID_t_611732609"); // 3
        LegAID_25_set.insert("LegSecurityAltID_t_611732609");
        LegAID_25.add_attribute("SecAltIDSrc", "E"); // 3
        LegAID_25_set.insert("E");
        all_values.push_back(LegAID_25_set);
        all_compo_names.insert("LegAID_25_set");

        Leg_25.add_element(LegAID_25);
      }
      RelSym_0.add_element(Leg_25);
    }
    elt.add_element(RelSym_0);
  } // end RelSym
  { // RelSym
    xml_element RelSym_1{"RelSym"};
    multiset<string> RelSym_1_set;
    RelSym_1.add_attribute("Ccy", "CHF"); // 1
    RelSym_1_set.insert("CHF");
    RelSym_1.add_attribute("CorpActn", "W"); // 1
    RelSym_1_set.insert("W");
    RelSym_1.add_attribute("TxnTm", "RelSymTransactTime_t_1690367787"); // 1
    RelSym_1_set.insert("RelSymTransactTime_t_1690367787");
    RelSym_1.add_attribute("Txt", "Text_t_97044749"); // 1
    RelSym_1_set.insert("Text_t_97044749");
    RelSym_1.add_attribute("EncTxtLen", "777497535"); // 1
    RelSym_1_set.insert("777497535");
    RelSym_1.add_attribute("EncTxt", "EncodedText_t_166858697"); // 1
    RelSym_1_set.insert("EncodedText_t_166858697");
    all_values.push_back(RelSym_1_set);
    all_compo_names.insert("RelSym_1_set");

    {
      xml_element Instrmt_17{"Instrmt"};
      multiset<string> Instrmt_17_set;
      Instrmt_17.add_attribute("Sym", "Symbol_t_1765605565"); // 2
      Instrmt_17_set.insert("Symbol_t_1765605565");
      Instrmt_17.add_attribute("Sfx", "CD"); // 2
      Instrmt_17_set.insert("CD");
      Instrmt_17.add_attribute("ID", "SecurityID_t_110673590"); // 2
      Instrmt_17_set.insert("SecurityID_t_110673590");
      Instrmt_17.add_attribute("Src", "8"); // 2
      Instrmt_17_set.insert("8");
      Instrmt_17.add_attribute("Prod", "7"); // 2
      Instrmt_17_set.insert("7");
      Instrmt_17.add_attribute("ProdCmplx", "ProductComplex_t_1192368225"); // 2
      Instrmt_17_set.insert("ProductComplex_t_1192368225");
      Instrmt_17.add_attribute("SecGrp", "SecurityGroup_t_1950992715"); // 2
      Instrmt_17_set.insert("SecurityGroup_t_1950992715");
      Instrmt_17.add_attribute("CFI", "CFICode_t_1460450812"); // 2
      Instrmt_17_set.insert("CFICode_t_1460450812");
      Instrmt_17.add_attribute("SecTyp", "DUAL"); // 2
      Instrmt_17_set.insert("DUAL");
      Instrmt_17.add_attribute("SubTyp", "SecuritySubType_t_1090022103"); // 2
      Instrmt_17_set.insert("SecuritySubType_t_1090022103");
      Instrmt_17.add_attribute("MMY", "479185186"); // 2
      Instrmt_17_set.insert("479185186");
      Instrmt_17.add_attribute("MatDt", "MaturityDate_t_238521320"); // 2
      Instrmt_17_set.insert("MaturityDate_t_238521320");
      Instrmt_17.add_attribute("MatTm", "1627255791"); // 2
      Instrmt_17_set.insert("1627255791");
      Instrmt_17.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_275001224"); // 2
      Instrmt_17_set.insert("SettleOnOpenFlag_t_275001224");
      Instrmt_17.add_attribute("AsgnMeth", "163827337"); // 2
      Instrmt_17_set.insert("163827337");
      Instrmt_17.add_attribute("Status", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("CpnPmt", "CouponPaymentDate_t_600694063"); // 2
      Instrmt_17_set.insert("CouponPaymentDate_t_600694063");
      Instrmt_17.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_17_set.insert("MM");
      Instrmt_17.add_attribute("Snrty", "SD"); // 2
      Instrmt_17_set.insert("SD");
      Instrmt_17.add_attribute("NotlPctOut", "13002272.330000"); // 2
      Instrmt_17_set.insert("13002272.330000");
      Instrmt_17.add_attribute("OrigNotlPctOut", "17340392.810000"); // 2
      Instrmt_17_set.insert("17340392.810000");
      Instrmt_17.add_attribute("AttchPnt", "13330990.630000"); // 2
      Instrmt_17_set.insert("13330990.630000");
      Instrmt_17.add_attribute("DetchPnt", "19119598.430000"); // 2
      Instrmt_17_set.insert("19119598.430000");
      Instrmt_17.add_attribute("Issued", "IssueDate_t_367863888"); // 2
      Instrmt_17_set.insert("IssueDate_t_367863888");
      Instrmt_17.add_attribute("RepoCollSecTyp", "1499160365"); // 2
      Instrmt_17_set.insert("1499160365");
      Instrmt_17.add_attribute("RepoTrm", "720698448"); // 2
      Instrmt_17_set.insert("720698448");
      Instrmt_17.add_attribute("RepoRt", "21148663.770000"); // 2
      Instrmt_17_set.insert("21148663.770000");
      Instrmt_17.add_attribute("Fctr", "10420445.040000"); // 2
      Instrmt_17_set.insert("10420445.040000");
      Instrmt_17.add_attribute("CrdRtg", "CreditRating_t_817743198"); // 2
      Instrmt_17_set.insert("CreditRating_t_817743198");
      Instrmt_17.add_attribute("Rgstry", "InstrRegistry_t_744880264"); // 2
      Instrmt_17_set.insert("InstrRegistry_t_744880264");
      Instrmt_17.add_attribute("IssuCtry", "1208903202"); // 2
      Instrmt_17_set.insert("1208903202");
      Instrmt_17.add_attribute("StPrv", "StateOrProvinceOfIssue_t_435865115"); // 2
      Instrmt_17_set.insert("StateOrProvinceOfIssue_t_435865115");
      Instrmt_17.add_attribute("Lcl", "LocaleOfIssue_t_1980296225"); // 2
      Instrmt_17_set.insert("LocaleOfIssue_t_1980296225");
      Instrmt_17.add_attribute("Redeem", "RedemptionDate_t_1319576792"); // 2
      Instrmt_17_set.insert("RedemptionDate_t_1319576792");
      Instrmt_17.add_attribute("StrkPx", "10754279.140000"); // 2
      Instrmt_17_set.insert("10754279.140000");
      Instrmt_17.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_17_set.insert("CHF");
      Instrmt_17.add_attribute("StrkMult", "8789369.810000"); // 2
      Instrmt_17_set.insert("8789369.810000");
      Instrmt_17.add_attribute("StrkValu", "4703375.180000"); // 2
      Instrmt_17_set.insert("4703375.180000");
      Instrmt_17.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_17_set.insert("4");
      Instrmt_17.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_17_set.insert("5");
      Instrmt_17.add_attribute("StrkPxBndryPrcsn", "9495227.040000"); // 2
      Instrmt_17_set.insert("9495227.040000");
      Instrmt_17.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_17_set.insert("4");
      Instrmt_17.add_attribute("OptAt", "1448731228"); // 2
      Instrmt_17_set.insert("1448731228");
      Instrmt_17.add_attribute("Mult", "12245239.280000"); // 2
      Instrmt_17_set.insert("12245239.280000");
      Instrmt_17.add_attribute("MultTyp", "0"); // 2
      Instrmt_17_set.insert("0");
      Instrmt_17.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_17_set.insert("4");
      Instrmt_17.add_attribute("MinPxIncr", "18252179.910000"); // 2
      Instrmt_17_set.insert("18252179.910000");
      Instrmt_17.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_816039186"); // 2
      Instrmt_17_set.insert("MinPriceIncrementAmount_t_816039186");
      Instrmt_17.add_attribute("UOM", "Bbl"); // 2
      Instrmt_17_set.insert("Bbl");
      Instrmt_17.add_attribute("UOMQty", "9779615.770000"); // 2
      Instrmt_17_set.insert("9779615.770000");
      Instrmt_17.add_attribute("PxUOM", "t"); // 2
      Instrmt_17_set.insert("t");
      Instrmt_17.add_attribute("PxUOMQty", "7087655.520000"); // 2
      Instrmt_17_set.insert("7087655.520000");
      Instrmt_17.add_attribute("SettlMeth", "C"); // 2
      Instrmt_17_set.insert("C");
      Instrmt_17.add_attribute("ExerStyle", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_17_set.insert("2");
      Instrmt_17.add_attribute("OptPayAmt", "OptPayoutAmount_t_1463136220"); // 2
      Instrmt_17_set.insert("OptPayoutAmount_t_1463136220");
      Instrmt_17.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_17_set.insert("INT");
      Instrmt_17.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_17_set.insert("CDSD");
      Instrmt_17.add_attribute("ListMeth", "0"); // 2
      Instrmt_17_set.insert("0");
      Instrmt_17.add_attribute("CapPx", "14827217.020000"); // 2
      Instrmt_17_set.insert("14827217.020000");
      Instrmt_17.add_attribute("FlrPx", "1639063.280000"); // 2
      Instrmt_17_set.insert("1639063.280000");
      Instrmt_17.add_attribute("PutCall", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("FlexInd", "false"); // 2
      Instrmt_17_set.insert("false");
      Instrmt_17.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_17_set.insert("true");
      Instrmt_17.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_17_set.insert("Mo");
      Instrmt_17.add_attribute("CpnRt", "3254209.850000"); // 2
      Instrmt_17_set.insert("3254209.850000");
      Instrmt_17.add_attribute("Exch", "SecurityExchange_t_1847944490"); // 2
      Instrmt_17_set.insert("SecurityExchange_t_1847944490");
      Instrmt_17.add_attribute("PosLmt", "376142133"); // 2
      Instrmt_17_set.insert("376142133");
      Instrmt_17.add_attribute("NTPosLmt", "795758504"); // 2
      Instrmt_17_set.insert("795758504");
      Instrmt_17.add_attribute("Issr", "Issuer_t_625664961"); // 2
      Instrmt_17_set.insert("Issuer_t_625664961");
      Instrmt_17.add_attribute("EncIssrLen", "197617569"); // 2
      Instrmt_17_set.insert("197617569");
      Instrmt_17.add_attribute("EncIssr", "EncodedIssuer_t_1745281208"); // 2
      Instrmt_17_set.insert("EncodedIssuer_t_1745281208");
      Instrmt_17.add_attribute("Desc", "SecurityDesc_t_1789390400"); // 2
      Instrmt_17_set.insert("SecurityDesc_t_1789390400");
      Instrmt_17.add_attribute("EncSecDescLen", "1646348797"); // 2
      Instrmt_17_set.insert("1646348797");
      Instrmt_17.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_822321489"); // 2
      Instrmt_17_set.insert("EncodedSecurityDesc_t_822321489");
      Instrmt_17.add_attribute("Pool", "Pool_t_969459528"); // 2
      Instrmt_17_set.insert("Pool_t_969459528");
      Instrmt_17.add_attribute("CSetMo", "950284524"); // 2
      Instrmt_17_set.insert("950284524");
      Instrmt_17.add_attribute("CPPgm", "2"); // 2
      Instrmt_17_set.insert("2");
      Instrmt_17.add_attribute("CPRegT", "CPRegType_t_1785498714"); // 2
      Instrmt_17_set.insert("CPRegType_t_1785498714");
      Instrmt_17.add_attribute("Dated", "DatedDate_t_325951013"); // 2
      Instrmt_17_set.insert("DatedDate_t_325951013");
      Instrmt_17.add_attribute("IntAcrl", "InterestAccrualDate_t_1478017409"); // 2
      Instrmt_17_set.insert("InterestAccrualDate_t_1478017409");
      all_values.push_back(Instrmt_17_set);
      all_compo_names.insert("Instrmt_17_set");

      {
        xml_element AID_18{"AID"};
        multiset<string> AID_18_set;
        AID_18.add_attribute("AltID", "SecurityAltID_t_40609886"); // 3
        AID_18_set.insert("SecurityAltID_t_40609886");
        AID_18.add_attribute("AltIDSrc", "4"); // 3
        AID_18_set.insert("4");
        all_values.push_back(AID_18_set);
        all_compo_names.insert("AID_18_set");

        Instrmt_17.add_element(AID_18);
      }
      {
        xml_element SecXML_18{"SecXML"};
        multiset<string> SecXML_18_set;
        SecXML_18.add_attribute("Schema", "SecurityXMLSchema_t_72971533"); // 3
        SecXML_18_set.insert("SecurityXMLSchema_t_72971533");
        all_values.push_back(SecXML_18_set);
        all_compo_names.insert("SecXML_18_set");

        Instrmt_17.add_element(SecXML_18);
      }
      {
        xml_element Evnt_18{"Evnt"};
        multiset<string> Evnt_18_set;
        Evnt_18.add_attribute("EventTyp", "15"); // 3
        Evnt_18_set.insert("15");
        Evnt_18.add_attribute("Dt", "EventDate_t_1095158835"); // 3
        Evnt_18_set.insert("EventDate_t_1095158835");
        Evnt_18.add_attribute("Tm", "EventTime_t_1536107754"); // 3
        Evnt_18_set.insert("EventTime_t_1536107754");
        Evnt_18.add_attribute("Px", "15489100.330000"); // 3
        Evnt_18_set.insert("15489100.330000");
        Evnt_18.add_attribute("Txt", "EventText_t_50161962"); // 3
        Evnt_18_set.insert("EventText_t_50161962");
        all_values.push_back(Evnt_18_set);
        all_compo_names.insert("Evnt_18_set");

        Instrmt_17.add_element(Evnt_18);
      }
      {
        xml_element Pty_133{"Pty"};
        multiset<string> Pty_133_set;
        Pty_133.add_attribute("ID", "InstrumentPartyID_t_1669503524"); // 3
        Pty_133_set.insert("InstrumentPartyID_t_1669503524");
        Pty_133.add_attribute("Src", "4"); // 3
        Pty_133_set.insert("4");
        Pty_133.add_attribute("R", "11"); // 3
        Pty_133_set.insert("11");
        all_values.push_back(Pty_133_set);
        all_compo_names.insert("Pty_133_set");

        {
          xml_element Sub_133{"Sub"};
          multiset<string> Sub_133_set;
          Sub_133.add_attribute("ID", "InstrumentPartySubID_t_91280762"); // 4
          Sub_133_set.insert("InstrumentPartySubID_t_91280762");
          Sub_133.add_attribute("Typ", "20"); // 4
          Sub_133_set.insert("20");
          all_values.push_back(Sub_133_set);
          all_compo_names.insert("Sub_133_set");

          Pty_133.add_element(Sub_133);
        }
        Instrmt_17.add_element(Pty_133);
      }
      {
        xml_element CmplxEvnt_17{"CmplxEvnt"};
        multiset<string> CmplxEvnt_17_set;
        CmplxEvnt_17.add_attribute("Typ", "5"); // 3
        CmplxEvnt_17_set.insert("5");
        CmplxEvnt_17.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1735969561"); // 3
        CmplxEvnt_17_set.insert("ComplexOptPayoutAmount_t_1735969561");
        CmplxEvnt_17.add_attribute("Px", "3776197.040000"); // 3
        CmplxEvnt_17_set.insert("3776197.040000");
        CmplxEvnt_17.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_17_set.insert("4");
        CmplxEvnt_17.add_attribute("PxBndryPrcsn", "21121116.940000"); // 3
        CmplxEvnt_17_set.insert("21121116.940000");
        CmplxEvnt_17.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_17_set.insert("2");
        CmplxEvnt_17.add_attribute("Cond", "1"); // 3
        CmplxEvnt_17_set.insert("1");
        all_values.push_back(CmplxEvnt_17_set);
        all_compo_names.insert("CmplxEvnt_17_set");

        {
          xml_element EvntDts_17{"EvntDts"};
          multiset<string> EvntDts_17_set;
          EvntDts_17.add_attribute("StartDt", "ComplexEventStartDate_t_162245616"); // 4
          EvntDts_17_set.insert("ComplexEventStartDate_t_162245616");
          EvntDts_17.add_attribute("EndDt", "ComplexEventEndDate_t_771175769"); // 4
          EvntDts_17_set.insert("ComplexEventEndDate_t_771175769");
          all_values.push_back(EvntDts_17_set);
          all_compo_names.insert("EvntDts_17_set");

          {
            xml_element EvntTms_17{"EvntTms"};
            multiset<string> EvntTms_17_set;
            EvntTms_17.add_attribute("StartTm", "1665583966"); // 5
            EvntTms_17_set.insert("1665583966");
            EvntTms_17.add_attribute("EndTm", "1808594413"); // 5
            EvntTms_17_set.insert("1808594413");
            all_values.push_back(EvntTms_17_set);
            all_compo_names.insert("EvntTms_17_set");

            EvntDts_17.add_element(EvntTms_17);
          }
          CmplxEvnt_17.add_element(EvntDts_17);
        }
        Instrmt_17.add_element(CmplxEvnt_17);
      }
      RelSym_1.add_element(Instrmt_17);
    }
    {
      xml_element PxLmts2_1{"PxLmts2"};
      multiset<string> PxLmts2_1_set;
      PxLmts2_1.add_attribute("PxLmtTyp", "2"); // 2
      PxLmts2_1_set.insert("2");
      PxLmts2_1.add_attribute("LowLmtPx", "4875598.460000"); // 2
      PxLmts2_1_set.insert("4875598.460000");
      PxLmts2_1.add_attribute("HiLmtPx", "6113952.890000"); // 2
      PxLmts2_1_set.insert("6113952.890000");
      PxLmts2_1.add_attribute("TrdgRefPx", "20935530.900000"); // 2
      PxLmts2_1_set.insert("20935530.900000");
      all_values.push_back(PxLmts2_1_set);
      all_compo_names.insert("PxLmts2_1_set");

      RelSym_1.add_element(PxLmts2_1);
    }
    {
      xml_element InstrmtExt_5{"InstrmtExt"};
      multiset<string> InstrmtExt_5_set;
      InstrmtExt_5.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_5_set.insert("1");
      InstrmtExt_5.add_attribute("PctAtRisk", "9373463.020000"); // 2
      InstrmtExt_5_set.insert("9373463.020000");
      all_values.push_back(InstrmtExt_5_set);
      all_compo_names.insert("InstrmtExt_5_set");

      {
        xml_element Attrb_7{"Attrb"};
        multiset<string> Attrb_7_set;
        Attrb_7.add_attribute("Typ", "99"); // 3
        Attrb_7_set.insert("99");
        Attrb_7.add_attribute("Val", "InstrAttribValue_t_166184799"); // 3
        Attrb_7_set.insert("InstrAttribValue_t_166184799");
        all_values.push_back(Attrb_7_set);
        all_compo_names.insert("Attrb_7_set");

        InstrmtExt_5.add_element(Attrb_7);
      }
      RelSym_1.add_element(InstrmtExt_5);
    }
    {
      xml_element Leg_26{"Leg"};
      multiset<string> Leg_26_set;
      Leg_26.add_attribute("Sym", "LegSymbol_t_1972062868"); // 2
      Leg_26_set.insert("LegSymbol_t_1972062868");
      Leg_26.add_attribute("Sfx", "WI"); // 2
      Leg_26_set.insert("WI");
      Leg_26.add_attribute("ID", "LegSecurityID_t_977253394"); // 2
      Leg_26_set.insert("LegSecurityID_t_977253394");
      Leg_26.add_attribute("Src", "6"); // 2
      Leg_26_set.insert("6");
      Leg_26.add_attribute("Prod", "2"); // 2
      Leg_26_set.insert("2");
      Leg_26.add_attribute("CFI", "LegCFICode_t_378679779"); // 2
      Leg_26_set.insert("LegCFICode_t_378679779");
      Leg_26.add_attribute("SecTyp", "TECP"); // 2
      Leg_26_set.insert("TECP");
      Leg_26.add_attribute("SecSubTyp", "LegSecuritySubType_t_407702368"); // 2
      Leg_26_set.insert("LegSecuritySubType_t_407702368");
      Leg_26.add_attribute("MMY", "1262827866"); // 2
      Leg_26_set.insert("1262827866");
      Leg_26.add_attribute("Mat", "LegMaturityDate_t_1183968308"); // 2
      Leg_26_set.insert("LegMaturityDate_t_1183968308");
      Leg_26.add_attribute("MatTm", "498983130"); // 2
      Leg_26_set.insert("498983130");
      Leg_26.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1315026585"); // 2
      Leg_26_set.insert("LegCouponPaymentDate_t_1315026585");
      Leg_26.add_attribute("Issued", "LegIssueDate_t_734036071"); // 2
      Leg_26_set.insert("LegIssueDate_t_734036071");
      Leg_26.add_attribute("RepoCollSecTyp", "87469043"); // 2
      Leg_26_set.insert("87469043");
      Leg_26.add_attribute("RepoTrm", "1692646290"); // 2
      Leg_26_set.insert("1692646290");
      Leg_26.add_attribute("RepoRt", "21320483.240000"); // 2
      Leg_26_set.insert("21320483.240000");
      Leg_26.add_attribute("Fctr", "520970.900000"); // 2
      Leg_26_set.insert("520970.900000");
      Leg_26.add_attribute("CrdRtg", "LegCreditRating_t_718540850"); // 2
      Leg_26_set.insert("LegCreditRating_t_718540850");
      Leg_26.add_attribute("Rgstry", "LegInstrRegistry_t_2008241890"); // 2
      Leg_26_set.insert("LegInstrRegistry_t_2008241890");
      Leg_26.add_attribute("Ctry", "214342706"); // 2
      Leg_26_set.insert("214342706");
      Leg_26.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1489716619"); // 2
      Leg_26_set.insert("LegStateOrProvinceOfIssue_t_1489716619");
      Leg_26.add_attribute("Lcl", "LegLocaleOfIssue_t_1526342208"); // 2
      Leg_26_set.insert("LegLocaleOfIssue_t_1526342208");
      Leg_26.add_attribute("Redeem", "LegRedemptionDate_t_2022937119"); // 2
      Leg_26_set.insert("LegRedemptionDate_t_2022937119");
      Leg_26.add_attribute("Strk", "9357302.290000"); // 2
      Leg_26_set.insert("9357302.290000");
      Leg_26.add_attribute("StrkCcy", "EUR"); // 2
      Leg_26_set.insert("EUR");
      Leg_26.add_attribute("OptA", "881799672"); // 2
      Leg_26_set.insert("881799672");
      Leg_26.add_attribute("Cmult", "21394769.660000"); // 2
      Leg_26_set.insert("21394769.660000");
      Leg_26.add_attribute("MultTyp", "2"); // 2
      Leg_26_set.insert("2");
      Leg_26.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_26_set.insert("1");
      Leg_26.add_attribute("UOM", "MMbbl"); // 2
      Leg_26_set.insert("MMbbl");
      Leg_26.add_attribute("UOMQty", "12487742.830000"); // 2
      Leg_26_set.insert("12487742.830000");
      Leg_26.add_attribute("PxUOM", "Alw"); // 2
      Leg_26_set.insert("Alw");
      Leg_26.add_attribute("PxUOMQty", "11354315.110000"); // 2
      Leg_26_set.insert("11354315.110000");
      Leg_26.add_attribute("TmUnit", "Mo"); // 2
      Leg_26_set.insert("Mo");
      Leg_26.add_attribute("ExerStyle", "0"); // 2
      Leg_26_set.insert("0");
      Leg_26.add_attribute("CpnRt", "15141112.900000"); // 2
      Leg_26_set.insert("15141112.900000");
      Leg_26.add_attribute("Exch", "LegSecurityExchange_t_990928708"); // 2
      Leg_26_set.insert("LegSecurityExchange_t_990928708");
      Leg_26.add_attribute("Issr", "LegIssuer_t_801362473"); // 2
      Leg_26_set.insert("LegIssuer_t_801362473");
      Leg_26.add_attribute("EncLegIssrLen", "629455509"); // 2
      Leg_26_set.insert("629455509");
      Leg_26.add_attribute("EncLegIssr", "EncodedLegIssuer_t_27413368"); // 2
      Leg_26_set.insert("EncodedLegIssuer_t_27413368");
      Leg_26.add_attribute("Desc", "LegSecurityDesc_t_1300345603"); // 2
      Leg_26_set.insert("LegSecurityDesc_t_1300345603");
      Leg_26.add_attribute("EncLegSecDescLen", "1944482094"); // 2
      Leg_26_set.insert("1944482094");
      Leg_26.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_761449439"); // 2
      Leg_26_set.insert("EncodedLegSecurityDesc_t_761449439");
      Leg_26.add_attribute("RatioQty", "13878146.460000"); // 2
      Leg_26_set.insert("13878146.460000");
      Leg_26.add_attribute("Side", "1"); // 2
      Leg_26_set.insert("1");
      Leg_26.add_attribute("Ccy", "GBP"); // 2
      Leg_26_set.insert("GBP");
      Leg_26.add_attribute("Pool", "LegPool_t_60701939"); // 2
      Leg_26_set.insert("LegPool_t_60701939");
      Leg_26.add_attribute("Dated", "LegDatedDate_t_606772357"); // 2
      Leg_26_set.insert("LegDatedDate_t_606772357");
      Leg_26.add_attribute("CSetMo", "1654254442"); // 2
      Leg_26_set.insert("1654254442");
      Leg_26.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1550418558"); // 2
      Leg_26_set.insert("LegInterestAccrualDate_t_1550418558");
      Leg_26.add_attribute("PutCall", "2133114565"); // 2
      Leg_26_set.insert("2133114565");
      Leg_26.add_attribute("LegOptionRatio", "15297079.140000"); // 2
      Leg_26_set.insert("15297079.140000");
      Leg_26.add_attribute("Px", "3386651.400000"); // 2
      Leg_26_set.insert("3386651.400000");
      all_values.push_back(Leg_26_set);
      all_compo_names.insert("Leg_26_set");

      {
        xml_element LegAID_26{"LegAID"};
        multiset<string> LegAID_26_set;
        LegAID_26.add_attribute("SecAltID", "LegSecurityAltID_t_1999532971"); // 3
        LegAID_26_set.insert("LegSecurityAltID_t_1999532971");
        LegAID_26.add_attribute("SecAltIDSrc", "2"); // 3
        LegAID_26_set.insert("2");
        all_values.push_back(LegAID_26_set);
        all_compo_names.insert("LegAID_26_set");

        Leg_26.add_element(LegAID_26);
      }
      RelSym_1.add_element(Leg_26);
    }
    elt.add_element(RelSym_1);
  } // end RelSym
  { // RelSym
    xml_element RelSym_2{"RelSym"};
    multiset<string> RelSym_2_set;
    RelSym_2.add_attribute("Ccy", "GBP"); // 1
    RelSym_2_set.insert("GBP");
    RelSym_2.add_attribute("CorpActn", "J"); // 1
    RelSym_2_set.insert("J");
    RelSym_2.add_attribute("TxnTm", "RelSymTransactTime_t_1378867688"); // 1
    RelSym_2_set.insert("RelSymTransactTime_t_1378867688");
    RelSym_2.add_attribute("Txt", "Text_t_2220759"); // 1
    RelSym_2_set.insert("Text_t_2220759");
    RelSym_2.add_attribute("EncTxtLen", "394558726"); // 1
    RelSym_2_set.insert("394558726");
    RelSym_2.add_attribute("EncTxt", "EncodedText_t_886845301"); // 1
    RelSym_2_set.insert("EncodedText_t_886845301");
    all_values.push_back(RelSym_2_set);
    all_compo_names.insert("RelSym_2_set");

    {
      xml_element Instrmt_18{"Instrmt"};
      multiset<string> Instrmt_18_set;
      Instrmt_18.add_attribute("Sym", "Symbol_t_1137652271"); // 2
      Instrmt_18_set.insert("Symbol_t_1137652271");
      Instrmt_18.add_attribute("Sfx", "WI"); // 2
      Instrmt_18_set.insert("WI");
      Instrmt_18.add_attribute("ID", "SecurityID_t_1280505406"); // 2
      Instrmt_18_set.insert("SecurityID_t_1280505406");
      Instrmt_18.add_attribute("Src", "6"); // 2
      Instrmt_18_set.insert("6");
      Instrmt_18.add_attribute("Prod", "10"); // 2
      Instrmt_18_set.insert("10");
      Instrmt_18.add_attribute("ProdCmplx", "ProductComplex_t_2081867879"); // 2
      Instrmt_18_set.insert("ProductComplex_t_2081867879");
      Instrmt_18.add_attribute("SecGrp", "SecurityGroup_t_1133735422"); // 2
      Instrmt_18_set.insert("SecurityGroup_t_1133735422");
      Instrmt_18.add_attribute("CFI", "CFICode_t_1433929494"); // 2
      Instrmt_18_set.insert("CFICode_t_1433929494");
      Instrmt_18.add_attribute("SecTyp", "CPP"); // 2
      Instrmt_18_set.insert("CPP");
      Instrmt_18.add_attribute("SubTyp", "SecuritySubType_t_930733869"); // 2
      Instrmt_18_set.insert("SecuritySubType_t_930733869");
      Instrmt_18.add_attribute("MMY", "47895285"); // 2
      Instrmt_18_set.insert("47895285");
      Instrmt_18.add_attribute("MatDt", "MaturityDate_t_475060833"); // 2
      Instrmt_18_set.insert("MaturityDate_t_475060833");
      Instrmt_18.add_attribute("MatTm", "272894957"); // 2
      Instrmt_18_set.insert("272894957");
      Instrmt_18.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_793909401"); // 2
      Instrmt_18_set.insert("SettleOnOpenFlag_t_793909401");
      Instrmt_18.add_attribute("AsgnMeth", "1914972569"); // 2
      Instrmt_18_set.insert("1914972569");
      Instrmt_18.add_attribute("Status", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("CpnPmt", "CouponPaymentDate_t_1400681758"); // 2
      Instrmt_18_set.insert("CouponPaymentDate_t_1400681758");
      Instrmt_18.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_18_set.insert("FR");
      Instrmt_18.add_attribute("Snrty", "SB"); // 2
      Instrmt_18_set.insert("SB");
      Instrmt_18.add_attribute("NotlPctOut", "13863126.760000"); // 2
      Instrmt_18_set.insert("13863126.760000");
      Instrmt_18.add_attribute("OrigNotlPctOut", "8039676.300000"); // 2
      Instrmt_18_set.insert("8039676.300000");
      Instrmt_18.add_attribute("AttchPnt", "751969.470000"); // 2
      Instrmt_18_set.insert("751969.470000");
      Instrmt_18.add_attribute("DetchPnt", "12383619.990000"); // 2
      Instrmt_18_set.insert("12383619.990000");
      Instrmt_18.add_attribute("Issued", "IssueDate_t_673040657"); // 2
      Instrmt_18_set.insert("IssueDate_t_673040657");
      Instrmt_18.add_attribute("RepoCollSecTyp", "1295661759"); // 2
      Instrmt_18_set.insert("1295661759");
      Instrmt_18.add_attribute("RepoTrm", "1082404641"); // 2
      Instrmt_18_set.insert("1082404641");
      Instrmt_18.add_attribute("RepoRt", "19663087.470000"); // 2
      Instrmt_18_set.insert("19663087.470000");
      Instrmt_18.add_attribute("Fctr", "5270457.990000"); // 2
      Instrmt_18_set.insert("5270457.990000");
      Instrmt_18.add_attribute("CrdRtg", "CreditRating_t_1084625401"); // 2
      Instrmt_18_set.insert("CreditRating_t_1084625401");
      Instrmt_18.add_attribute("Rgstry", "InstrRegistry_t_213383825"); // 2
      Instrmt_18_set.insert("InstrRegistry_t_213383825");
      Instrmt_18.add_attribute("IssuCtry", "1413891100"); // 2
      Instrmt_18_set.insert("1413891100");
      Instrmt_18.add_attribute("StPrv", "StateOrProvinceOfIssue_t_74794024"); // 2
      Instrmt_18_set.insert("StateOrProvinceOfIssue_t_74794024");
      Instrmt_18.add_attribute("Lcl", "LocaleOfIssue_t_628971242"); // 2
      Instrmt_18_set.insert("LocaleOfIssue_t_628971242");
      Instrmt_18.add_attribute("Redeem", "RedemptionDate_t_546912859"); // 2
      Instrmt_18_set.insert("RedemptionDate_t_546912859");
      Instrmt_18.add_attribute("StrkPx", "5790739.370000"); // 2
      Instrmt_18_set.insert("5790739.370000");
      Instrmt_18.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_18_set.insert("JPY");
      Instrmt_18.add_attribute("StrkMult", "17128093.600000"); // 2
      Instrmt_18_set.insert("17128093.600000");
      Instrmt_18.add_attribute("StrkValu", "13219332.140000"); // 2
      Instrmt_18_set.insert("13219332.140000");
      Instrmt_18.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("StrkPxBndryPrcsn", "13698284.990000"); // 2
      Instrmt_18_set.insert("13698284.990000");
      Instrmt_18.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_18_set.insert("3");
      Instrmt_18.add_attribute("OptAt", "768954538"); // 2
      Instrmt_18_set.insert("768954538");
      Instrmt_18.add_attribute("Mult", "162542.520000"); // 2
      Instrmt_18_set.insert("162542.520000");
      Instrmt_18.add_attribute("MultTyp", "0"); // 2
      Instrmt_18_set.insert("0");
      Instrmt_18.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_18_set.insert("0");
      Instrmt_18.add_attribute("MinPxIncr", "14169360.110000"); // 2
      Instrmt_18_set.insert("14169360.110000");
      Instrmt_18.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1232836395"); // 2
      Instrmt_18_set.insert("MinPriceIncrementAmount_t_1232836395");
      Instrmt_18.add_attribute("UOM", "Bcf"); // 2
      Instrmt_18_set.insert("Bcf");
      Instrmt_18.add_attribute("UOMQty", "6557650.390000"); // 2
      Instrmt_18_set.insert("6557650.390000");
      Instrmt_18.add_attribute("PxUOM", "USD"); // 2
      Instrmt_18_set.insert("USD");
      Instrmt_18.add_attribute("PxUOMQty", "9142801.890000"); // 2
      Instrmt_18_set.insert("9142801.890000");
      Instrmt_18.add_attribute("SettlMeth", "C"); // 2
      Instrmt_18_set.insert("C");
      Instrmt_18.add_attribute("ExerStyle", "0"); // 2
      Instrmt_18_set.insert("0");
      Instrmt_18.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("OptPayAmt", "OptPayoutAmount_t_829048032"); // 2
      Instrmt_18_set.insert("OptPayoutAmount_t_829048032");
      Instrmt_18.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_18_set.insert("INT");
      Instrmt_18.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_18_set.insert("CDSD");
      Instrmt_18.add_attribute("ListMeth", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("CapPx", "5945699.590000"); // 2
      Instrmt_18_set.insert("5945699.590000");
      Instrmt_18.add_attribute("FlrPx", "20033951.990000"); // 2
      Instrmt_18_set.insert("20033951.990000");
      Instrmt_18.add_attribute("PutCall", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("FlexInd", "true"); // 2
      Instrmt_18_set.insert("true");
      Instrmt_18.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_18_set.insert("true");
      Instrmt_18.add_attribute("TmUnit", "D"); // 2
      Instrmt_18_set.insert("D");
      Instrmt_18.add_attribute("CpnRt", "11115449.220000"); // 2
      Instrmt_18_set.insert("11115449.220000");
      Instrmt_18.add_attribute("Exch", "SecurityExchange_t_884121501"); // 2
      Instrmt_18_set.insert("SecurityExchange_t_884121501");
      Instrmt_18.add_attribute("PosLmt", "2132867106"); // 2
      Instrmt_18_set.insert("2132867106");
      Instrmt_18.add_attribute("NTPosLmt", "285994488"); // 2
      Instrmt_18_set.insert("285994488");
      Instrmt_18.add_attribute("Issr", "Issuer_t_452664778"); // 2
      Instrmt_18_set.insert("Issuer_t_452664778");
      Instrmt_18.add_attribute("EncIssrLen", "481443039"); // 2
      Instrmt_18_set.insert("481443039");
      Instrmt_18.add_attribute("EncIssr", "EncodedIssuer_t_1655822987"); // 2
      Instrmt_18_set.insert("EncodedIssuer_t_1655822987");
      Instrmt_18.add_attribute("Desc", "SecurityDesc_t_496268888"); // 2
      Instrmt_18_set.insert("SecurityDesc_t_496268888");
      Instrmt_18.add_attribute("EncSecDescLen", "1250397578"); // 2
      Instrmt_18_set.insert("1250397578");
      Instrmt_18.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1672077240"); // 2
      Instrmt_18_set.insert("EncodedSecurityDesc_t_1672077240");
      Instrmt_18.add_attribute("Pool", "Pool_t_307361919"); // 2
      Instrmt_18_set.insert("Pool_t_307361919");
      Instrmt_18.add_attribute("CSetMo", "205465365"); // 2
      Instrmt_18_set.insert("205465365");
      Instrmt_18.add_attribute("CPPgm", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("CPRegT", "CPRegType_t_1540198315"); // 2
      Instrmt_18_set.insert("CPRegType_t_1540198315");
      Instrmt_18.add_attribute("Dated", "DatedDate_t_1044548607"); // 2
      Instrmt_18_set.insert("DatedDate_t_1044548607");
      Instrmt_18.add_attribute("IntAcrl", "InterestAccrualDate_t_1597294642"); // 2
      Instrmt_18_set.insert("InterestAccrualDate_t_1597294642");
      all_values.push_back(Instrmt_18_set);
      all_compo_names.insert("Instrmt_18_set");

      {
        xml_element AID_19{"AID"};
        multiset<string> AID_19_set;
        AID_19.add_attribute("AltID", "SecurityAltID_t_1429518692"); // 3
        AID_19_set.insert("SecurityAltID_t_1429518692");
        AID_19.add_attribute("AltIDSrc", "D"); // 3
        AID_19_set.insert("D");
        all_values.push_back(AID_19_set);
        all_compo_names.insert("AID_19_set");

        Instrmt_18.add_element(AID_19);
      }
      {
        xml_element SecXML_19{"SecXML"};
        multiset<string> SecXML_19_set;
        SecXML_19.add_attribute("Schema", "SecurityXMLSchema_t_1343938032"); // 3
        SecXML_19_set.insert("SecurityXMLSchema_t_1343938032");
        all_values.push_back(SecXML_19_set);
        all_compo_names.insert("SecXML_19_set");

        Instrmt_18.add_element(SecXML_19);
      }
      {
        xml_element Evnt_19{"Evnt"};
        multiset<string> Evnt_19_set;
        Evnt_19.add_attribute("EventTyp", "7"); // 3
        Evnt_19_set.insert("7");
        Evnt_19.add_attribute("Dt", "EventDate_t_2021287096"); // 3
        Evnt_19_set.insert("EventDate_t_2021287096");
        Evnt_19.add_attribute("Tm", "EventTime_t_25502416"); // 3
        Evnt_19_set.insert("EventTime_t_25502416");
        Evnt_19.add_attribute("Px", "2255822.130000"); // 3
        Evnt_19_set.insert("2255822.130000");
        Evnt_19.add_attribute("Txt", "EventText_t_463307547"); // 3
        Evnt_19_set.insert("EventText_t_463307547");
        all_values.push_back(Evnt_19_set);
        all_compo_names.insert("Evnt_19_set");

        Instrmt_18.add_element(Evnt_19);
      }
      {
        xml_element Pty_134{"Pty"};
        multiset<string> Pty_134_set;
        Pty_134.add_attribute("ID", "InstrumentPartyID_t_1939175849"); // 3
        Pty_134_set.insert("InstrumentPartyID_t_1939175849");
        Pty_134.add_attribute("Src", "B"); // 3
        Pty_134_set.insert("B");
        Pty_134.add_attribute("R", "38"); // 3
        Pty_134_set.insert("38");
        all_values.push_back(Pty_134_set);
        all_compo_names.insert("Pty_134_set");

        {
          xml_element Sub_134{"Sub"};
          multiset<string> Sub_134_set;
          Sub_134.add_attribute("ID", "InstrumentPartySubID_t_1780159658"); // 4
          Sub_134_set.insert("InstrumentPartySubID_t_1780159658");
          Sub_134.add_attribute("Typ", "17"); // 4
          Sub_134_set.insert("17");
          all_values.push_back(Sub_134_set);
          all_compo_names.insert("Sub_134_set");

          Pty_134.add_element(Sub_134);
        }
        Instrmt_18.add_element(Pty_134);
      }
      {
        xml_element CmplxEvnt_18{"CmplxEvnt"};
        multiset<string> CmplxEvnt_18_set;
        CmplxEvnt_18.add_attribute("Typ", "6"); // 3
        CmplxEvnt_18_set.insert("6");
        CmplxEvnt_18.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_52733757"); // 3
        CmplxEvnt_18_set.insert("ComplexOptPayoutAmount_t_52733757");
        CmplxEvnt_18.add_attribute("Px", "10077546.480000"); // 3
        CmplxEvnt_18_set.insert("10077546.480000");
        CmplxEvnt_18.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_18_set.insert("1");
        CmplxEvnt_18.add_attribute("PxBndryPrcsn", "381172.150000"); // 3
        CmplxEvnt_18_set.insert("381172.150000");
        CmplxEvnt_18.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_18_set.insert("1");
        CmplxEvnt_18.add_attribute("Cond", "1"); // 3
        CmplxEvnt_18_set.insert("1");
        all_values.push_back(CmplxEvnt_18_set);
        all_compo_names.insert("CmplxEvnt_18_set");

        {
          xml_element EvntDts_18{"EvntDts"};
          multiset<string> EvntDts_18_set;
          EvntDts_18.add_attribute("StartDt", "ComplexEventStartDate_t_519560255"); // 4
          EvntDts_18_set.insert("ComplexEventStartDate_t_519560255");
          EvntDts_18.add_attribute("EndDt", "ComplexEventEndDate_t_802088476"); // 4
          EvntDts_18_set.insert("ComplexEventEndDate_t_802088476");
          all_values.push_back(EvntDts_18_set);
          all_compo_names.insert("EvntDts_18_set");

          {
            xml_element EvntTms_18{"EvntTms"};
            multiset<string> EvntTms_18_set;
            EvntTms_18.add_attribute("StartTm", "407615028"); // 5
            EvntTms_18_set.insert("407615028");
            EvntTms_18.add_attribute("EndTm", "1769957833"); // 5
            EvntTms_18_set.insert("1769957833");
            all_values.push_back(EvntTms_18_set);
            all_compo_names.insert("EvntTms_18_set");

            EvntDts_18.add_element(EvntTms_18);
          }
          CmplxEvnt_18.add_element(EvntDts_18);
        }
        Instrmt_18.add_element(CmplxEvnt_18);
      }
      RelSym_2.add_element(Instrmt_18);
    }
    {
      xml_element PxLmts2_2{"PxLmts2"};
      multiset<string> PxLmts2_2_set;
      PxLmts2_2.add_attribute("PxLmtTyp", "2"); // 2
      PxLmts2_2_set.insert("2");
      PxLmts2_2.add_attribute("LowLmtPx", "7149769.470000"); // 2
      PxLmts2_2_set.insert("7149769.470000");
      PxLmts2_2.add_attribute("HiLmtPx", "19754231.980000"); // 2
      PxLmts2_2_set.insert("19754231.980000");
      PxLmts2_2.add_attribute("TrdgRefPx", "12682116.710000"); // 2
      PxLmts2_2_set.insert("12682116.710000");
      all_values.push_back(PxLmts2_2_set);
      all_compo_names.insert("PxLmts2_2_set");

      RelSym_2.add_element(PxLmts2_2);
    }
    {
      xml_element InstrmtExt_6{"InstrmtExt"};
      multiset<string> InstrmtExt_6_set;
      InstrmtExt_6.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_6_set.insert("1");
      InstrmtExt_6.add_attribute("PctAtRisk", "8724881.570000"); // 2
      InstrmtExt_6_set.insert("8724881.570000");
      all_values.push_back(InstrmtExt_6_set);
      all_compo_names.insert("InstrmtExt_6_set");

      {
        xml_element Attrb_8{"Attrb"};
        multiset<string> Attrb_8_set;
        Attrb_8.add_attribute("Typ", "25"); // 3
        Attrb_8_set.insert("25");
        Attrb_8.add_attribute("Val", "InstrAttribValue_t_1537210307"); // 3
        Attrb_8_set.insert("InstrAttribValue_t_1537210307");
        all_values.push_back(Attrb_8_set);
        all_compo_names.insert("Attrb_8_set");

        InstrmtExt_6.add_element(Attrb_8);
      }
      RelSym_2.add_element(InstrmtExt_6);
    }
    {
      xml_element Leg_27{"Leg"};
      multiset<string> Leg_27_set;
      Leg_27.add_attribute("Sym", "LegSymbol_t_683833305"); // 2
      Leg_27_set.insert("LegSymbol_t_683833305");
      Leg_27.add_attribute("Sfx", "WI"); // 2
      Leg_27_set.insert("WI");
      Leg_27.add_attribute("ID", "LegSecurityID_t_1381606386"); // 2
      Leg_27_set.insert("LegSecurityID_t_1381606386");
      Leg_27.add_attribute("Src", "4"); // 2
      Leg_27_set.insert("4");
      Leg_27.add_attribute("Prod", "6"); // 2
      Leg_27_set.insert("6");
      Leg_27.add_attribute("CFI", "LegCFICode_t_1607188599"); // 2
      Leg_27_set.insert("LegCFICode_t_1607188599");
      Leg_27.add_attribute("SecTyp", "MF"); // 2
      Leg_27_set.insert("MF");
      Leg_27.add_attribute("SecSubTyp", "LegSecuritySubType_t_1879155315"); // 2
      Leg_27_set.insert("LegSecuritySubType_t_1879155315");
      Leg_27.add_attribute("MMY", "279857123"); // 2
      Leg_27_set.insert("279857123");
      Leg_27.add_attribute("Mat", "LegMaturityDate_t_1340163398"); // 2
      Leg_27_set.insert("LegMaturityDate_t_1340163398");
      Leg_27.add_attribute("MatTm", "1511831326"); // 2
      Leg_27_set.insert("1511831326");
      Leg_27.add_attribute("CpnPmt", "LegCouponPaymentDate_t_176066850"); // 2
      Leg_27_set.insert("LegCouponPaymentDate_t_176066850");
      Leg_27.add_attribute("Issued", "LegIssueDate_t_2062206907"); // 2
      Leg_27_set.insert("LegIssueDate_t_2062206907");
      Leg_27.add_attribute("RepoCollSecTyp", "1564565083"); // 2
      Leg_27_set.insert("1564565083");
      Leg_27.add_attribute("RepoTrm", "1183821498"); // 2
      Leg_27_set.insert("1183821498");
      Leg_27.add_attribute("RepoRt", "15208882.690000"); // 2
      Leg_27_set.insert("15208882.690000");
      Leg_27.add_attribute("Fctr", "16026822.980000"); // 2
      Leg_27_set.insert("16026822.980000");
      Leg_27.add_attribute("CrdRtg", "LegCreditRating_t_330086987"); // 2
      Leg_27_set.insert("LegCreditRating_t_330086987");
      Leg_27.add_attribute("Rgstry", "LegInstrRegistry_t_1432234409"); // 2
      Leg_27_set.insert("LegInstrRegistry_t_1432234409");
      Leg_27.add_attribute("Ctry", "2122242553"); // 2
      Leg_27_set.insert("2122242553");
      Leg_27.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1132175463"); // 2
      Leg_27_set.insert("LegStateOrProvinceOfIssue_t_1132175463");
      Leg_27.add_attribute("Lcl", "LegLocaleOfIssue_t_1839849437"); // 2
      Leg_27_set.insert("LegLocaleOfIssue_t_1839849437");
      Leg_27.add_attribute("Redeem", "LegRedemptionDate_t_1744716738"); // 2
      Leg_27_set.insert("LegRedemptionDate_t_1744716738");
      Leg_27.add_attribute("Strk", "14588575.310000"); // 2
      Leg_27_set.insert("14588575.310000");
      Leg_27.add_attribute("StrkCcy", "GBP"); // 2
      Leg_27_set.insert("GBP");
      Leg_27.add_attribute("OptA", "579585554"); // 2
      Leg_27_set.insert("579585554");
      Leg_27.add_attribute("Cmult", "5150343.510000"); // 2
      Leg_27_set.insert("5150343.510000");
      Leg_27.add_attribute("MultTyp", "2"); // 2
      Leg_27_set.insert("2");
      Leg_27.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_27_set.insert("4");
      Leg_27.add_attribute("UOM", "USD"); // 2
      Leg_27_set.insert("USD");
      Leg_27.add_attribute("UOMQty", "9814941.020000"); // 2
      Leg_27_set.insert("9814941.020000");
      Leg_27.add_attribute("PxUOM", "t"); // 2
      Leg_27_set.insert("t");
      Leg_27.add_attribute("PxUOMQty", "12863673.960000"); // 2
      Leg_27_set.insert("12863673.960000");
      Leg_27.add_attribute("TmUnit", "D"); // 2
      Leg_27_set.insert("D");
      Leg_27.add_attribute("ExerStyle", "0"); // 2
      Leg_27_set.insert("0");
      Leg_27.add_attribute("CpnRt", "7460723.470000"); // 2
      Leg_27_set.insert("7460723.470000");
      Leg_27.add_attribute("Exch", "LegSecurityExchange_t_412591507"); // 2
      Leg_27_set.insert("LegSecurityExchange_t_412591507");
      Leg_27.add_attribute("Issr", "LegIssuer_t_883736402"); // 2
      Leg_27_set.insert("LegIssuer_t_883736402");
      Leg_27.add_attribute("EncLegIssrLen", "1025929471"); // 2
      Leg_27_set.insert("1025929471");
      Leg_27.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1752754906"); // 2
      Leg_27_set.insert("EncodedLegIssuer_t_1752754906");
      Leg_27.add_attribute("Desc", "LegSecurityDesc_t_248084080"); // 2
      Leg_27_set.insert("LegSecurityDesc_t_248084080");
      Leg_27.add_attribute("EncLegSecDescLen", "1201996321"); // 2
      Leg_27_set.insert("1201996321");
      Leg_27.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1667478165"); // 2
      Leg_27_set.insert("EncodedLegSecurityDesc_t_1667478165");
      Leg_27.add_attribute("RatioQty", "18126491.630000"); // 2
      Leg_27_set.insert("18126491.630000");
      Leg_27.add_attribute("Side", "C"); // 2
      Leg_27_set.insert("C");
      Leg_27.add_attribute("Ccy", "CAN"); // 2
      Leg_27_set.insert("CAN");
      Leg_27.add_attribute("Pool", "LegPool_t_568421158"); // 2
      Leg_27_set.insert("LegPool_t_568421158");
      Leg_27.add_attribute("Dated", "LegDatedDate_t_325633548"); // 2
      Leg_27_set.insert("LegDatedDate_t_325633548");
      Leg_27.add_attribute("CSetMo", "1242606719"); // 2
      Leg_27_set.insert("1242606719");
      Leg_27.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1700596621"); // 2
      Leg_27_set.insert("LegInterestAccrualDate_t_1700596621");
      Leg_27.add_attribute("PutCall", "17999338"); // 2
      Leg_27_set.insert("17999338");
      Leg_27.add_attribute("LegOptionRatio", "8398398.090000"); // 2
      Leg_27_set.insert("8398398.090000");
      Leg_27.add_attribute("Px", "10119705.040000"); // 2
      Leg_27_set.insert("10119705.040000");
      all_values.push_back(Leg_27_set);
      all_compo_names.insert("Leg_27_set");

      {
        xml_element LegAID_27{"LegAID"};
        multiset<string> LegAID_27_set;
        LegAID_27.add_attribute("SecAltID", "LegSecurityAltID_t_425342075"); // 3
        LegAID_27_set.insert("LegSecurityAltID_t_425342075");
        LegAID_27.add_attribute("SecAltIDSrc", "B"); // 3
        LegAID_27_set.insert("B");
        all_values.push_back(LegAID_27_set);
        all_compo_names.insert("LegAID_27_set");

        Leg_27.add_element(LegAID_27);
      }
      RelSym_2.add_element(Leg_27);
    }
    elt.add_element(RelSym_2);
  } // end RelSym
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
