#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecListUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListUpdateReport_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1445286657"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("SecurityReqID_t_1445286657");
  elt.add_attribute("RspID", "SecurityResponseID_t_1481990190"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("SecurityResponseID_t_1481990190");
  elt.add_attribute("ReqRslt", "1"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("1");
  elt.add_attribute("UpdActn", "A"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("A");
  elt.add_attribute("TxnTm", "TransactTime_t_1125325926"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("TransactTime_t_1125325926");
  elt.add_attribute("TotNoReltdSym", "1444973855"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("1444973855");
  elt.add_attribute("LastFragment", "Y"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("Y");
  all_values.push_back(DerivativeSecurityListUpdateReport_message_t_0);
  all_compo_names.insert("DerivativeSecurityListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_28{"Hdr"};
    multiset<string> Hdr_28_set;
    Hdr_28.add_attribute("SeqNum", "1853149458"); // 1
    Hdr_28_set.insert("1853149458");
    Hdr_28.add_attribute("SID", "SenderCompID_t_1697676532"); // 1
    Hdr_28_set.insert("SenderCompID_t_1697676532");
    Hdr_28.add_attribute("TID", "TargetCompID_t_500574280"); // 1
    Hdr_28_set.insert("TargetCompID_t_500574280");
    Hdr_28.add_attribute("OBID", "OnBehalfOfCompID_t_1208659295"); // 1
    Hdr_28_set.insert("OnBehalfOfCompID_t_1208659295");
    Hdr_28.add_attribute("D2ID", "DeliverToCompID_t_741814291"); // 1
    Hdr_28_set.insert("DeliverToCompID_t_741814291");
    Hdr_28.add_attribute("SSub", "SenderSubID_t_2145981824"); // 1
    Hdr_28_set.insert("SenderSubID_t_2145981824");
    Hdr_28.add_attribute("SLoc", "SenderLocationID_t_1219328058"); // 1
    Hdr_28_set.insert("SenderLocationID_t_1219328058");
    Hdr_28.add_attribute("TSub", "TargetSubID_t_1335933531"); // 1
    Hdr_28_set.insert("TargetSubID_t_1335933531");
    Hdr_28.add_attribute("TLoc", "TargetLocationID_t_1707767344"); // 1
    Hdr_28_set.insert("TargetLocationID_t_1707767344");
    Hdr_28.add_attribute("OBSub", "OnBehalfOfSubID_t_1932411618"); // 1
    Hdr_28_set.insert("OnBehalfOfSubID_t_1932411618");
    Hdr_28.add_attribute("OBLoc", "OnBehalfOfLocationID_t_146636222"); // 1
    Hdr_28_set.insert("OnBehalfOfLocationID_t_146636222");
    Hdr_28.add_attribute("D2Sub", "DeliverToSubID_t_790755236"); // 1
    Hdr_28_set.insert("DeliverToSubID_t_790755236");
    Hdr_28.add_attribute("D2Loc", "DeliverToLocationID_t_1866581006"); // 1
    Hdr_28_set.insert("DeliverToLocationID_t_1866581006");
    Hdr_28.add_attribute("PosDup", "N"); // 1
    Hdr_28_set.insert("N");
    Hdr_28.add_attribute("PosRsnd", "N"); // 1
    Hdr_28_set.insert("N");
    Hdr_28.add_attribute("Snt", "SendingTime_t_2125592611"); // 1
    Hdr_28_set.insert("SendingTime_t_2125592611");
    Hdr_28.add_attribute("OrigSnt", "OrigSendingTime_t_274734780"); // 1
    Hdr_28_set.insert("OrigSendingTime_t_274734780");
    Hdr_28.add_attribute("MsgEncd", "MessageEncoding_t_966121683"); // 1
    Hdr_28_set.insert("MessageEncoding_t_966121683");
    all_values.push_back(Hdr_28_set);
    all_compo_names.insert("Hdr_28_set");

    {
      xml_element Hop_28{"Hop"};
      multiset<string> Hop_28_set;
      Hop_28.add_attribute("ID", "HopCompID_t_1614728306"); // 2
      Hop_28_set.insert("HopCompID_t_1614728306");
      Hop_28.add_attribute("Ref", "77646358"); // 2
      Hop_28_set.insert("77646358");
      Hop_28.add_attribute("Snt", "HopSendingTime_t_1300417386"); // 2
      Hop_28_set.insert("HopSendingTime_t_1300417386");
      all_values.push_back(Hop_28_set);
      all_compo_names.insert("Hop_28_set");

      Hdr_28.add_element(Hop_28);
    }
    elt.add_element(Hdr_28);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_3{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_3_set;
    ApplSeqCtrl_3.add_attribute("ApplID", "ApplID_t_557874035"); // 1
    ApplSeqCtrl_3_set.insert("ApplID_t_557874035");
    ApplSeqCtrl_3.add_attribute("ApplSeqNum", "180163221"); // 1
    ApplSeqCtrl_3_set.insert("180163221");
    ApplSeqCtrl_3.add_attribute("ApplLastSeqNum", "572367485"); // 1
    ApplSeqCtrl_3_set.insert("572367485");
    ApplSeqCtrl_3.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_3_set.insert("true");
    all_values.push_back(ApplSeqCtrl_3_set);
    all_compo_names.insert("ApplSeqCtrl_3_set");

    elt.add_element(ApplSeqCtrl_3);
  } // end ApplSeqCtrl
  { // Undly
    xml_element Undly_31{"Undly"};
    multiset<string> Undly_31_set;
    Undly_31.add_attribute("Sym", "UnderlyingSymbol_t_1662153411"); // 1
    Undly_31_set.insert("UnderlyingSymbol_t_1662153411");
    Undly_31.add_attribute("Sfx", "CD"); // 1
    Undly_31_set.insert("CD");
    Undly_31.add_attribute("ID", "UnderlyingSecurityID_t_1520125482"); // 1
    Undly_31_set.insert("UnderlyingSecurityID_t_1520125482");
    Undly_31.add_attribute("Src", "5"); // 1
    Undly_31_set.insert("5");
    Undly_31.add_attribute("Prod", "12"); // 1
    Undly_31_set.insert("12");
    Undly_31.add_attribute("CFI", "UnderlyingCFICode_t_293269562"); // 1
    Undly_31_set.insert("UnderlyingCFICode_t_293269562");
    Undly_31.add_attribute("SecTyp", "VRDN"); // 1
    Undly_31_set.insert("VRDN");
    Undly_31.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_668127588"); // 1
    Undly_31_set.insert("UnderlyingSecuritySubType_t_668127588");
    Undly_31.add_attribute("MMY", "793843842"); // 1
    Undly_31_set.insert("793843842");
    Undly_31.add_attribute("Mat", "UnderlyingMaturityDate_t_1554320795"); // 1
    Undly_31_set.insert("UnderlyingMaturityDate_t_1554320795");
    Undly_31.add_attribute("MatTm", "1409941879"); // 1
    Undly_31_set.insert("1409941879");
    Undly_31.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_792342018"); // 1
    Undly_31_set.insert("UnderlyingCouponPaymentDate_t_792342018");
    Undly_31.add_attribute("RestrctTyp", "MM"); // 1
    Undly_31_set.insert("MM");
    Undly_31.add_attribute("Snrty", "SB"); // 1
    Undly_31_set.insert("SB");
    Undly_31.add_attribute("NotlPctOut", "3526257.150000"); // 1
    Undly_31_set.insert("3526257.150000");
    Undly_31.add_attribute("OrigNotlPctOut", "4110931.760000"); // 1
    Undly_31_set.insert("4110931.760000");
    Undly_31.add_attribute("AttchPnt", "7450279.840000"); // 1
    Undly_31_set.insert("7450279.840000");
    Undly_31.add_attribute("DetchPnt", "11433809.510000"); // 1
    Undly_31_set.insert("11433809.510000");
    Undly_31.add_attribute("Issued", "UnderlyingIssueDate_t_130190534"); // 1
    Undly_31_set.insert("UnderlyingIssueDate_t_130190534");
    Undly_31.add_attribute("RepoCollSecTyp", "1608915785"); // 1
    Undly_31_set.insert("1608915785");
    Undly_31.add_attribute("RepoTrm", "1263259415"); // 1
    Undly_31_set.insert("1263259415");
    Undly_31.add_attribute("RepoRt", "1082994.970000"); // 1
    Undly_31_set.insert("1082994.970000");
    Undly_31.add_attribute("Fctr", "18836505.650000"); // 1
    Undly_31_set.insert("18836505.650000");
    Undly_31.add_attribute("CrdRtg", "UnderlyingCreditRating_t_81897451"); // 1
    Undly_31_set.insert("UnderlyingCreditRating_t_81897451");
    Undly_31.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1723027803"); // 1
    Undly_31_set.insert("UnderlyingInstrRegistry_t_1723027803");
    Undly_31.add_attribute("Ctry", "1961296923"); // 1
    Undly_31_set.insert("1961296923");
    Undly_31.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1382314837"); // 1
    Undly_31_set.insert("UnderlyingStateOrProvinceOfIssue_t_1382314837");
    Undly_31.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_133418190"); // 1
    Undly_31_set.insert("UnderlyingLocaleOfIssue_t_133418190");
    Undly_31.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2141460144"); // 1
    Undly_31_set.insert("UnderlyingRedemptionDate_t_2141460144");
    Undly_31.add_attribute("StrkPx", "19546823.220000"); // 1
    Undly_31_set.insert("19546823.220000");
    Undly_31.add_attribute("StrkCcy", "GBP"); // 1
    Undly_31_set.insert("GBP");
    Undly_31.add_attribute("OptA", "1627643171"); // 1
    Undly_31_set.insert("1627643171");
    Undly_31.add_attribute("Mult", "15092207.170000"); // 1
    Undly_31_set.insert("15092207.170000");
    Undly_31.add_attribute("MultTyp", "2"); // 1
    Undly_31_set.insert("2");
    Undly_31.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_31_set.insert("2");
    Undly_31.add_attribute("UOM", "tn"); // 1
    Undly_31_set.insert("tn");
    Undly_31.add_attribute("UOMQty", "4943034.500000"); // 1
    Undly_31_set.insert("4943034.500000");
    Undly_31.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_31_set.insert("MMBtu");
    Undly_31.add_attribute("PxUOMQty", "4488504.730000"); // 1
    Undly_31_set.insert("4488504.730000");
    Undly_31.add_attribute("TmUnit", "Wk"); // 1
    Undly_31_set.insert("Wk");
    Undly_31.add_attribute("ExerStyle", "0"); // 1
    Undly_31_set.insert("0");
    Undly_31.add_attribute("CpnRt", "12411924.920000"); // 1
    Undly_31_set.insert("12411924.920000");
    Undly_31.add_attribute("Exch", "UnderlyingSecurityExchange_t_527305804"); // 1
    Undly_31_set.insert("UnderlyingSecurityExchange_t_527305804");
    Undly_31.add_attribute("Issr", "UnderlyingIssuer_t_1127071809"); // 1
    Undly_31_set.insert("UnderlyingIssuer_t_1127071809");
    Undly_31.add_attribute("EncUndIssrLen", "1593818207"); // 1
    Undly_31_set.insert("1593818207");
    Undly_31.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_938398980"); // 1
    Undly_31_set.insert("EncodedUnderlyingIssuer_t_938398980");
    Undly_31.add_attribute("Desc", "UnderlyingSecurityDesc_t_1872099793"); // 1
    Undly_31_set.insert("UnderlyingSecurityDesc_t_1872099793");
    Undly_31.add_attribute("EncUndSecDescLen", "589715510"); // 1
    Undly_31_set.insert("589715510");
    Undly_31.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1068589514"); // 1
    Undly_31_set.insert("EncodedUnderlyingSecurityDesc_t_1068589514");
    Undly_31.add_attribute("CPPgm", "UnderlyingCPProgram_t_1333531930"); // 1
    Undly_31_set.insert("UnderlyingCPProgram_t_1333531930");
    Undly_31.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1852974925"); // 1
    Undly_31_set.insert("UnderlyingCPRegType_t_1852974925");
    Undly_31.add_attribute("AllocPct", "11768890.110000"); // 1
    Undly_31_set.insert("11768890.110000");
    Undly_31.add_attribute("Ccy", "GBP"); // 1
    Undly_31_set.insert("GBP");
    Undly_31.add_attribute("Qty", "7524331.660000"); // 1
    Undly_31_set.insert("7524331.660000");
    Undly_31.add_attribute("SettlTyp", "2"); // 1
    Undly_31_set.insert("2");
    Undly_31.add_attribute("CashAmt", "UnderlyingCashAmount_t_1169703565"); // 1
    Undly_31_set.insert("UnderlyingCashAmount_t_1169703565");
    Undly_31.add_attribute("CashTyp", "FIXED"); // 1
    Undly_31_set.insert("FIXED");
    Undly_31.add_attribute("Px", "8774886.190000"); // 1
    Undly_31_set.insert("8774886.190000");
    Undly_31.add_attribute("DirtPx", "9769022.400000"); // 1
    Undly_31_set.insert("9769022.400000");
    Undly_31.add_attribute("EndPx", "8749465.900000"); // 1
    Undly_31_set.insert("8749465.900000");
    Undly_31.add_attribute("StartVal", "UnderlyingStartValue_t_386134879"); // 1
    Undly_31_set.insert("UnderlyingStartValue_t_386134879");
    Undly_31.add_attribute("CurVal", "UnderlyingCurrentValue_t_457061763"); // 1
    Undly_31_set.insert("UnderlyingCurrentValue_t_457061763");
    Undly_31.add_attribute("EndVal", "UnderlyingEndValue_t_236683659"); // 1
    Undly_31_set.insert("UnderlyingEndValue_t_236683659");
    Undly_31.add_attribute("AdjQty", "5347768.290000"); // 1
    Undly_31_set.insert("5347768.290000");
    Undly_31.add_attribute("FxRate", "10551559.900000"); // 1
    Undly_31_set.insert("10551559.900000");
    Undly_31.add_attribute("FxRateCalc", "M"); // 1
    Undly_31_set.insert("M");
    Undly_31.add_attribute("CapValu", "UnderlyingCapValue_t_1029080280"); // 1
    Undly_31_set.insert("UnderlyingCapValue_t_1029080280");
    Undly_31.add_attribute("SetMeth", "UnderlyingSettlMethod_t_173894157"); // 1
    Undly_31_set.insert("UnderlyingSettlMethod_t_173894157");
    Undly_31.add_attribute("PutCall", "340540764"); // 1
    Undly_31_set.insert("340540764");
    all_values.push_back(Undly_31_set);
    all_compo_names.insert("Undly_31_set");

    {
      xml_element UndAID_31{"UndAID"};
      multiset<string> UndAID_31_set;
      UndAID_31.add_attribute("AltID", "UnderlyingSecurityAltID_t_930220878"); // 2
      UndAID_31_set.insert("UnderlyingSecurityAltID_t_930220878");
      UndAID_31.add_attribute("AltIDSrc", "2"); // 2
      UndAID_31_set.insert("2");
      all_values.push_back(UndAID_31_set);
      all_compo_names.insert("UndAID_31_set");

      Undly_31.add_element(UndAID_31);
    }
    {
      xml_element Stip_51{"Stip"};
      multiset<string> Stip_51_set;
      Stip_51.add_attribute("Typ", "WALA"); // 2
      Stip_51_set.insert("WALA");
      Stip_51.add_attribute("Val", "UnderlyingStipValue_t_1457526682"); // 2
      Stip_51_set.insert("UnderlyingStipValue_t_1457526682");
      all_values.push_back(Stip_51_set);
      all_compo_names.insert("Stip_51_set");

      Undly_31.add_element(Stip_51);
    }
    {
      xml_element Pty_137{"Pty"};
      multiset<string> Pty_137_set;
      Pty_137.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1829646012"); // 2
      Pty_137_set.insert("UnderlyingInstrumentPartyID_t_1829646012");
      Pty_137.add_attribute("Src", "C"); // 2
      Pty_137_set.insert("C");
      Pty_137.add_attribute("R", "11"); // 2
      Pty_137_set.insert("11");
      all_values.push_back(Pty_137_set);
      all_compo_names.insert("Pty_137_set");

      {
        xml_element Sub_137{"Sub"};
        multiset<string> Sub_137_set;
        Sub_137.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1554262158"); // 3
        Sub_137_set.insert("UnderlyingInstrumentPartySubID_t_1554262158");
        Sub_137.add_attribute("Typ", "13"); // 3
        Sub_137_set.insert("13");
        all_values.push_back(Sub_137_set);
        all_compo_names.insert("Sub_137_set");

        Pty_137.add_element(Sub_137);
      }
      Undly_31.add_element(Pty_137);
    }
    elt.add_element(Undly_31);
  } // end Undly
  { // DerivSecDef
    xml_element DerivSecDef_1{"DerivSecDef"};
    {
      xml_element DerivInstrmt_2{"DerivInstrmt"};
      multiset<string> DerivInstrmt_2_set;
      DerivInstrmt_2.add_attribute("Sym", "DerivativeSymbol_t_1317031528"); // 2
      DerivInstrmt_2_set.insert("DerivativeSymbol_t_1317031528");
      DerivInstrmt_2.add_attribute("Sfx", "CD"); // 2
      DerivInstrmt_2_set.insert("CD");
      DerivInstrmt_2.add_attribute("ID", "DerivativeSecurityID_t_1323274602"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityID_t_1323274602");
      DerivInstrmt_2.add_attribute("Src", "A"); // 2
      DerivInstrmt_2_set.insert("A");
      DerivInstrmt_2.add_attribute("Prod", "6"); // 2
      DerivInstrmt_2_set.insert("6");
      DerivInstrmt_2.add_attribute("ProdCmplx", "DerivativeProductComplex_t_1110663331"); // 2
      DerivInstrmt_2_set.insert("DerivativeProductComplex_t_1110663331");
      DerivInstrmt_2.add_attribute("FlexProdElig", "false"); // 2
      DerivInstrmt_2_set.insert("false");
      DerivInstrmt_2.add_attribute("SecGrp", "DerivativeSecurityGroup_t_546037763"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityGroup_t_546037763");
      DerivInstrmt_2.add_attribute("CFI", "DerivativeCFICode_t_132883248"); // 2
      DerivInstrmt_2_set.insert("DerivativeCFICode_t_132883248");
      DerivInstrmt_2.add_attribute("SecTyp", "FXSWAP"); // 2
      DerivInstrmt_2_set.insert("FXSWAP");
      DerivInstrmt_2.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_1423526382"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecuritySubType_t_1423526382");
      DerivInstrmt_2.add_attribute("MMY", "1109785488"); // 2
      DerivInstrmt_2_set.insert("1109785488");
      DerivInstrmt_2.add_attribute("MatDt", "DerivativeMaturityDate_t_712184355"); // 2
      DerivInstrmt_2_set.insert("DerivativeMaturityDate_t_712184355");
      DerivInstrmt_2.add_attribute("MatTm", "1809661262"); // 2
      DerivInstrmt_2_set.insert("1809661262");
      DerivInstrmt_2.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_1566847251"); // 2
      DerivInstrmt_2_set.insert("DerivativeSettleOnOpenFlag_t_1566847251");
      DerivInstrmt_2.add_attribute("AsgnMeth", "948868015"); // 2
      DerivInstrmt_2_set.insert("948868015");
      DerivInstrmt_2.add_attribute("Status", "2"); // 2
      DerivInstrmt_2_set.insert("2");
      DerivInstrmt_2.add_attribute("IssDt", "DerivativeIssueDate_t_474519593"); // 2
      DerivInstrmt_2_set.insert("DerivativeIssueDate_t_474519593");
      DerivInstrmt_2.add_attribute("Rgstry", "DerivativeInstrRegistry_t_840558305"); // 2
      DerivInstrmt_2_set.insert("DerivativeInstrRegistry_t_840558305");
      DerivInstrmt_2.add_attribute("Ctry", "1226034723"); // 2
      DerivInstrmt_2_set.insert("1226034723");
      DerivInstrmt_2.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_648413750"); // 2
      DerivInstrmt_2_set.insert("DerivativeStateOrProvinceOfIssue_t_648413750");
      DerivInstrmt_2.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_1181099069"); // 2
      DerivInstrmt_2_set.insert("DerivativeLocaleOfIssue_t_1181099069");
      DerivInstrmt_2.add_attribute("StrkPx", "87719.530000"); // 2
      DerivInstrmt_2_set.insert("87719.530000");
      DerivInstrmt_2.add_attribute("StrkCcy", "CAN"); // 2
      DerivInstrmt_2_set.insert("CAN");
      DerivInstrmt_2.add_attribute("StrkMult", "14662986.350000"); // 2
      DerivInstrmt_2_set.insert("14662986.350000");
      DerivInstrmt_2.add_attribute("StrkValu", "10331503.180000"); // 2
      DerivInstrmt_2_set.insert("10331503.180000");
      DerivInstrmt_2.add_attribute("OptAt", "1643416492"); // 2
      DerivInstrmt_2_set.insert("1643416492");
      DerivInstrmt_2.add_attribute("Mult", "17147406.490000"); // 2
      DerivInstrmt_2_set.insert("17147406.490000");
      DerivInstrmt_2.add_attribute("MultTyp", "2"); // 2
      DerivInstrmt_2_set.insert("2");
      DerivInstrmt_2.add_attribute("FlowSchedTyp", "4"); // 2
      DerivInstrmt_2_set.insert("4");
      DerivInstrmt_2.add_attribute("MinPxIncr", "8842885.290000"); // 2
      DerivInstrmt_2_set.insert("8842885.290000");
      DerivInstrmt_2.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_1180239269"); // 2
      DerivInstrmt_2_set.insert("DerivativeMinPriceIncrementAmount_t_1180239269");
      DerivInstrmt_2.add_attribute("UOM", "Bcf"); // 2
      DerivInstrmt_2_set.insert("Bcf");
      DerivInstrmt_2.add_attribute("UOMQty", "12307254.200000"); // 2
      DerivInstrmt_2_set.insert("12307254.200000");
      DerivInstrmt_2.add_attribute("PxUOM", "Alw"); // 2
      DerivInstrmt_2_set.insert("Alw");
      DerivInstrmt_2.add_attribute("PxUOMQty", "14001704.550000"); // 2
      DerivInstrmt_2_set.insert("14001704.550000");
      DerivInstrmt_2.add_attribute("SettlMeth", "P"); // 2
      DerivInstrmt_2_set.insert("P");
      DerivInstrmt_2.add_attribute("PxQteMeth", "STD"); // 2
      DerivInstrmt_2_set.insert("STD");
      DerivInstrmt_2.add_attribute("ValMeth", "CDS"); // 2
      DerivInstrmt_2_set.insert("CDS");
      DerivInstrmt_2.add_attribute("ListMeth", "0"); // 2
      DerivInstrmt_2_set.insert("0");
      DerivInstrmt_2.add_attribute("CapPx", "6648454.060000"); // 2
      DerivInstrmt_2_set.insert("6648454.060000");
      DerivInstrmt_2.add_attribute("FlrPx", "4953555.440000"); // 2
      DerivInstrmt_2_set.insert("4953555.440000");
      DerivInstrmt_2.add_attribute("PutCall", "0"); // 2
      DerivInstrmt_2_set.insert("0");
      DerivInstrmt_2.add_attribute("ExerStyle", "1"); // 2
      DerivInstrmt_2_set.insert("1");
      DerivInstrmt_2.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_2062202795"); // 2
      DerivInstrmt_2_set.insert("DerivativeOptPayAmount_t_2062202795");
      DerivInstrmt_2.add_attribute("TmUnit", "Wk"); // 2
      DerivInstrmt_2_set.insert("Wk");
      DerivInstrmt_2.add_attribute("Exch", "DerivativeSecurityExchange_t_523977464"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityExchange_t_523977464");
      DerivInstrmt_2.add_attribute("PosLmt", "389238741"); // 2
      DerivInstrmt_2_set.insert("389238741");
      DerivInstrmt_2.add_attribute("NTPosLmt", "373476622"); // 2
      DerivInstrmt_2_set.insert("373476622");
      DerivInstrmt_2.add_attribute("Issr", "DerivativeIssuer_t_1750012187"); // 2
      DerivInstrmt_2_set.insert("DerivativeIssuer_t_1750012187");
      DerivInstrmt_2.add_attribute("EncIssrLen", "1037652491"); // 2
      DerivInstrmt_2_set.insert("1037652491");
      DerivInstrmt_2.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_1554575692"); // 2
      DerivInstrmt_2_set.insert("DerivativeEncodedIssuer_t_1554575692");
      DerivInstrmt_2.add_attribute("Desc", "DerivativeSecurityDesc_t_1758784141"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityDesc_t_1758784141");
      DerivInstrmt_2.add_attribute("EncSecDescLen", "241156797"); // 2
      DerivInstrmt_2_set.insert("241156797");
      DerivInstrmt_2.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_22440721"); // 2
      DerivInstrmt_2_set.insert("DerivativeEncodedSecurityDesc_t_22440721");
      DerivInstrmt_2.add_attribute("CSetMo", "1077599128"); // 2
      DerivInstrmt_2_set.insert("1077599128");
      all_values.push_back(DerivInstrmt_2_set);
      all_compo_names.insert("DerivInstrmt_2_set");

      {
        xml_element AID_21{"AID"};
        multiset<string> AID_21_set;
        AID_21.add_attribute("ID", "DerivativeSecurityAltID_t_1274307116"); // 3
        AID_21_set.insert("DerivativeSecurityAltID_t_1274307116");
        AID_21.add_attribute("Src", "B"); // 3
        AID_21_set.insert("B");
        all_values.push_back(AID_21_set);
        all_compo_names.insert("AID_21_set");

        DerivInstrmt_2.add_element(AID_21);
      }
      {
        xml_element SecXML_21{"SecXML"};
        multiset<string> SecXML_21_set;
        SecXML_21.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_644856130"); // 3
        SecXML_21_set.insert("DerivativeSecurityXMLSchema_t_644856130");
        all_values.push_back(SecXML_21_set);
        all_compo_names.insert("SecXML_21_set");

        DerivInstrmt_2.add_element(SecXML_21);
      }
      {
        xml_element Evnt_21{"Evnt"};
        multiset<string> Evnt_21_set;
        Evnt_21.add_attribute("EventTyp", "99"); // 3
        Evnt_21_set.insert("99");
        Evnt_21.add_attribute("Dt", "DerivativeEventDate_t_632089735"); // 3
        Evnt_21_set.insert("DerivativeEventDate_t_632089735");
        Evnt_21.add_attribute("Tm", "DerivativeEventTime_t_1529144659"); // 3
        Evnt_21_set.insert("DerivativeEventTime_t_1529144659");
        Evnt_21.add_attribute("Px", "7469915.650000"); // 3
        Evnt_21_set.insert("7469915.650000");
        Evnt_21.add_attribute("Txt", "DerivativeEventText_t_921596859"); // 3
        Evnt_21_set.insert("DerivativeEventText_t_921596859");
        all_values.push_back(Evnt_21_set);
        all_compo_names.insert("Evnt_21_set");

        DerivInstrmt_2.add_element(Evnt_21);
      }
      {
        xml_element Pty_138{"Pty"};
        multiset<string> Pty_138_set;
        Pty_138.add_attribute("ID", "DerivativeInstrumentPartyID_t_612386432"); // 3
        Pty_138_set.insert("DerivativeInstrumentPartyID_t_612386432");
        Pty_138.add_attribute("Src", "3"); // 3
        Pty_138_set.insert("3");
        Pty_138.add_attribute("R", "49"); // 3
        Pty_138_set.insert("49");
        all_values.push_back(Pty_138_set);
        all_compo_names.insert("Pty_138_set");

        {
          xml_element Sub_138{"Sub"};
          multiset<string> Sub_138_set;
          Sub_138.add_attribute("ID", "DerivativeInstrumentPartySubID_t_794498261"); // 4
          Sub_138_set.insert("DerivativeInstrumentPartySubID_t_794498261");
          Sub_138.add_attribute("Typ", "1"); // 4
          Sub_138_set.insert("1");
          all_values.push_back(Sub_138_set);
          all_compo_names.insert("Sub_138_set");

          Pty_138.add_element(Sub_138);
        }
        DerivInstrmt_2.add_element(Pty_138);
      }
      DerivSecDef_1.add_element(DerivInstrmt_2);
    }
    {
      xml_element Attrb_9{"Attrb"};
      multiset<string> Attrb_9_set;
      Attrb_9.add_attribute("Typ", "8"); // 2
      Attrb_9_set.insert("8");
      Attrb_9.add_attribute("Val", "DerivativeInstrAttribValue_t_813847856"); // 2
      Attrb_9_set.insert("DerivativeInstrAttribValue_t_813847856");
      all_values.push_back(Attrb_9_set);
      all_compo_names.insert("Attrb_9_set");

      DerivSecDef_1.add_element(Attrb_9);
    }
    {
      xml_element MktSegGrp_1{"MktSegGrp"};
      multiset<string> MktSegGrp_1_set;
      MktSegGrp_1.add_attribute("MktID", "MarketID_t_1495920905"); // 2
      MktSegGrp_1_set.insert("MarketID_t_1495920905");
      MktSegGrp_1.add_attribute("MktSegID", "MarketSegmentID_t_55209266"); // 2
      MktSegGrp_1_set.insert("MarketSegmentID_t_55209266");
      all_values.push_back(MktSegGrp_1_set);
      all_compo_names.insert("MktSegGrp_1_set");

      {
        xml_element SecTrdgRules_1{"SecTrdgRules"};
        {
          xml_element BaseTrdgRules_1{"BaseTrdgRules"};
          multiset<string> BaseTrdgRules_1_set;
          BaseTrdgRules_1.add_attribute("ExpirationCycle", "2"); // 4
          BaseTrdgRules_1_set.insert("2");
          BaseTrdgRules_1.add_attribute("MinTrdVol", "18229439.250000"); // 4
          BaseTrdgRules_1_set.insert("18229439.250000");
          BaseTrdgRules_1.add_attribute("MaxTrdVol", "21174120.610000"); // 4
          BaseTrdgRules_1_set.insert("21174120.610000");
          BaseTrdgRules_1.add_attribute("MxPxVar", "10783001.230000"); // 4
          BaseTrdgRules_1_set.insert("10783001.230000");
          BaseTrdgRules_1.add_attribute("ImpldMktInd", "1"); // 4
          BaseTrdgRules_1_set.insert("1");
          BaseTrdgRules_1.add_attribute("TrdCcy", "CAN"); // 4
          BaseTrdgRules_1_set.insert("CAN");
          BaseTrdgRules_1.add_attribute("RndLot", "19494499.290000"); // 4
          BaseTrdgRules_1_set.insert("19494499.290000");
          BaseTrdgRules_1.add_attribute("MlegModel", "2"); // 4
          BaseTrdgRules_1_set.insert("2");
          BaseTrdgRules_1.add_attribute("MlegPxMeth", "1"); // 4
          BaseTrdgRules_1_set.insert("1");
          BaseTrdgRules_1.add_attribute("PxTyp", "16"); // 4
          BaseTrdgRules_1_set.insert("16");
          all_values.push_back(BaseTrdgRules_1_set);
          all_compo_names.insert("BaseTrdgRules_1_set");

          {
            xml_element TickRules_1{"TickRules"};
            multiset<string> TickRules_1_set;
            TickRules_1.add_attribute("StartTickPxRng", "16379764.430000"); // 5
            TickRules_1_set.insert("16379764.430000");
            TickRules_1.add_attribute("EndTickPxRng", "8813095.110000"); // 5
            TickRules_1_set.insert("8813095.110000");
            TickRules_1.add_attribute("TickIncr", "4908659.020000"); // 5
            TickRules_1_set.insert("4908659.020000");
            TickRules_1.add_attribute("TickRuleTyp", "1"); // 5
            TickRules_1_set.insert("1");
            all_values.push_back(TickRules_1_set);
            all_compo_names.insert("TickRules_1_set");

            BaseTrdgRules_1.add_element(TickRules_1);
          }
          {
            xml_element LotTypeRules_1{"LotTypeRules"};
            multiset<string> LotTypeRules_1_set;
            LotTypeRules_1.add_attribute("LotTyp", "2"); // 5
            LotTypeRules_1_set.insert("2");
            LotTypeRules_1.add_attribute("MinLotSz", "11357220.320000"); // 5
            LotTypeRules_1_set.insert("11357220.320000");
            all_values.push_back(LotTypeRules_1_set);
            all_compo_names.insert("LotTypeRules_1_set");

            BaseTrdgRules_1.add_element(LotTypeRules_1);
          }
          {
            xml_element PxLmts_1{"PxLmts"};
            multiset<string> PxLmts_1_set;
            PxLmts_1.add_attribute("PxLmtTyp", "2"); // 5
            PxLmts_1_set.insert("2");
            PxLmts_1.add_attribute("LowLmtPx", "10317728.120000"); // 5
            PxLmts_1_set.insert("10317728.120000");
            PxLmts_1.add_attribute("HiLmtPx", "5173830.440000"); // 5
            PxLmts_1_set.insert("5173830.440000");
            PxLmts_1.add_attribute("TrdgRefPx", "10785437.730000"); // 5
            PxLmts_1_set.insert("10785437.730000");
            all_values.push_back(PxLmts_1_set);
            all_compo_names.insert("PxLmts_1_set");

            BaseTrdgRules_1.add_element(PxLmts_1);
          }
          SecTrdgRules_1.add_element(BaseTrdgRules_1);
        }
        {
          xml_element TrdgSesRulesGrp_1{"TrdgSesRulesGrp"};
          multiset<string> TrdgSesRulesGrp_1_set;
          TrdgSesRulesGrp_1.add_attribute("SesID", "1"); // 4
          TrdgSesRulesGrp_1_set.insert("1");
          TrdgSesRulesGrp_1.add_attribute("SesSub", "4"); // 4
          TrdgSesRulesGrp_1_set.insert("4");
          all_values.push_back(TrdgSesRulesGrp_1_set);
          all_compo_names.insert("TrdgSesRulesGrp_1_set");

          {
            xml_element TrdgSesRules_1{"TrdgSesRules"};
            {
              xml_element OrdTypRules_1{"OrdTypRules"};
              multiset<string> OrdTypRules_1_set;
              OrdTypRules_1.add_attribute("OrdTyp", "H"); // 6
              OrdTypRules_1_set.insert("H");
              all_values.push_back(OrdTypRules_1_set);
              all_compo_names.insert("OrdTypRules_1_set");

              TrdgSesRules_1.add_element(OrdTypRules_1);
            }
            {
              xml_element TmInForceRules_1{"TmInForceRules"};
              multiset<string> TmInForceRules_1_set;
              TmInForceRules_1.add_attribute("TmInForce", "8"); // 6
              TmInForceRules_1_set.insert("8");
              all_values.push_back(TmInForceRules_1_set);
              all_compo_names.insert("TmInForceRules_1_set");

              TrdgSesRules_1.add_element(TmInForceRules_1);
            }
            {
              xml_element ExecInstRules_1{"ExecInstRules"};
              multiset<string> ExecInstRules_1_set;
              ExecInstRules_1.add_attribute("ExecInstValu", "n"); // 6
              ExecInstRules_1_set.insert("n");
              all_values.push_back(ExecInstRules_1_set);
              all_compo_names.insert("ExecInstRules_1_set");

              TrdgSesRules_1.add_element(ExecInstRules_1);
            }
            {
              xml_element MtchRules_1{"MtchRules"};
              multiset<string> MtchRules_1_set;
              MtchRules_1.add_attribute("MtchAlgo", "MatchAlgorithm_t_1351892098"); // 6
              MtchRules_1_set.insert("MatchAlgorithm_t_1351892098");
              MtchRules_1.add_attribute("MtchTyp", "1"); // 6
              MtchRules_1_set.insert("1");
              all_values.push_back(MtchRules_1_set);
              all_compo_names.insert("MtchRules_1_set");

              TrdgSesRules_1.add_element(MtchRules_1);
            }
            {
              xml_element MDFeedTyps_1{"MDFeedTyps"};
              multiset<string> MDFeedTyps_1_set;
              MDFeedTyps_1.add_attribute("MDFeedTyp", "MDFeedType_t_590631945"); // 6
              MDFeedTyps_1_set.insert("MDFeedType_t_590631945");
              MDFeedTyps_1.add_attribute("MktDepth", "700329355"); // 6
              MDFeedTyps_1_set.insert("700329355");
              MDFeedTyps_1.add_attribute("MDBkTyp", "1"); // 6
              MDFeedTyps_1_set.insert("1");
              all_values.push_back(MDFeedTyps_1_set);
              all_compo_names.insert("MDFeedTyps_1_set");

              TrdgSesRules_1.add_element(MDFeedTyps_1);
            }
            TrdgSesRulesGrp_1.add_element(TrdgSesRules_1);
          }
          SecTrdgRules_1.add_element(TrdgSesRulesGrp_1);
        }
        {
          xml_element Attrb_10{"Attrb"};
          multiset<string> Attrb_10_set;
          Attrb_10.add_attribute("Typ", "2"); // 4
          Attrb_10_set.insert("2");
          Attrb_10.add_attribute("Val", "NestedInstrAttribValue_t_375789633"); // 4
          Attrb_10_set.insert("NestedInstrAttribValue_t_375789633");
          all_values.push_back(Attrb_10_set);
          all_compo_names.insert("Attrb_10_set");

          SecTrdgRules_1.add_element(Attrb_10);
        }
        MktSegGrp_1.add_element(SecTrdgRules_1);
      }
      {
        xml_element StrkRules_1{"StrkRules"};
        multiset<string> StrkRules_1_set;
        StrkRules_1.add_attribute("StrkRule", "StrikeRuleID_t_1712644740"); // 3
        StrkRules_1_set.insert("StrikeRuleID_t_1712644740");
        StrkRules_1.add_attribute("StartStrkPxRng", "10668302.260000"); // 3
        StrkRules_1_set.insert("10668302.260000");
        StrkRules_1.add_attribute("EndStrkPxRng", "5752273.740000"); // 3
        StrkRules_1_set.insert("5752273.740000");
        StrkRules_1.add_attribute("StrkIncr", "20718118.940000"); // 3
        StrkRules_1_set.insert("20718118.940000");
        StrkRules_1.add_attribute("StrkExrStyle", "2"); // 3
        StrkRules_1_set.insert("2");
        all_values.push_back(StrkRules_1_set);
        all_compo_names.insert("StrkRules_1_set");

        {
          xml_element MatRules_1{"MatRules"};
          multiset<string> MatRules_1_set;
          MatRules_1.add_attribute("MatRuleID", "MaturityRuleID_t_377193655"); // 4
          MatRules_1_set.insert("MaturityRuleID_t_377193655");
          MatRules_1.add_attribute("MMYFmt", "2"); // 4
          MatRules_1_set.insert("2");
          MatRules_1.add_attribute("MMYIncrUnits", "1"); // 4
          MatRules_1_set.insert("1");
          MatRules_1.add_attribute("StartMMY", "1937944077"); // 4
          MatRules_1_set.insert("1937944077");
          MatRules_1.add_attribute("EndMMY", "811640688"); // 4
          MatRules_1_set.insert("811640688");
          MatRules_1.add_attribute("MMYIncr", "2111301624"); // 4
          MatRules_1_set.insert("2111301624");
          all_values.push_back(MatRules_1_set);
          all_compo_names.insert("MatRules_1_set");

          StrkRules_1.add_element(MatRules_1);
        }
        MktSegGrp_1.add_element(StrkRules_1);
      }
      DerivSecDef_1.add_element(MktSegGrp_1);
    }
    elt.add_element(DerivSecDef_1);
  } // end DerivSecDef
  { // RelSym
    xml_element RelSym_3{"RelSym"};
    multiset<string> RelSym_3_set;
    RelSym_3.add_attribute("ListUpdActn", "M"); // 1
    RelSym_3_set.insert("M");
    RelSym_3.add_attribute("CorpActn", "O"); // 1
    RelSym_3_set.insert("O");
    RelSym_3.add_attribute("Ccy", "EUR"); // 1
    RelSym_3_set.insert("EUR");
    RelSym_3.add_attribute("TxnTm", "RelSymTransactTime_t_1395273866"); // 1
    RelSym_3_set.insert("RelSymTransactTime_t_1395273866");
    RelSym_3.add_attribute("Txt", "Text_t_1934431408"); // 1
    RelSym_3_set.insert("Text_t_1934431408");
    RelSym_3.add_attribute("EncTxtLen", "839052933"); // 1
    RelSym_3_set.insert("839052933");
    RelSym_3.add_attribute("EncTxt", "EncodedText_t_1201159890"); // 1
    RelSym_3_set.insert("EncodedText_t_1201159890");
    all_values.push_back(RelSym_3_set);
    all_compo_names.insert("RelSym_3_set");

    {
      xml_element Instrmt_19{"Instrmt"};
      multiset<string> Instrmt_19_set;
      Instrmt_19.add_attribute("Sym", "Symbol_t_916717236"); // 2
      Instrmt_19_set.insert("Symbol_t_916717236");
      Instrmt_19.add_attribute("Sfx", "WI"); // 2
      Instrmt_19_set.insert("WI");
      Instrmt_19.add_attribute("ID", "SecurityID_t_1181329580"); // 2
      Instrmt_19_set.insert("SecurityID_t_1181329580");
      Instrmt_19.add_attribute("Src", "D"); // 2
      Instrmt_19_set.insert("D");
      Instrmt_19.add_attribute("Prod", "6"); // 2
      Instrmt_19_set.insert("6");
      Instrmt_19.add_attribute("ProdCmplx", "ProductComplex_t_721352993"); // 2
      Instrmt_19_set.insert("ProductComplex_t_721352993");
      Instrmt_19.add_attribute("SecGrp", "SecurityGroup_t_1284133271"); // 2
      Instrmt_19_set.insert("SecurityGroup_t_1284133271");
      Instrmt_19.add_attribute("CFI", "CFICode_t_1264607339"); // 2
      Instrmt_19_set.insert("CFICode_t_1264607339");
      Instrmt_19.add_attribute("SecTyp", "ONITE"); // 2
      Instrmt_19_set.insert("ONITE");
      Instrmt_19.add_attribute("SubTyp", "SecuritySubType_t_1272663375"); // 2
      Instrmt_19_set.insert("SecuritySubType_t_1272663375");
      Instrmt_19.add_attribute("MMY", "1640396972"); // 2
      Instrmt_19_set.insert("1640396972");
      Instrmt_19.add_attribute("MatDt", "MaturityDate_t_2029230411"); // 2
      Instrmt_19_set.insert("MaturityDate_t_2029230411");
      Instrmt_19.add_attribute("MatTm", "192009953"); // 2
      Instrmt_19_set.insert("192009953");
      Instrmt_19.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_68140698"); // 2
      Instrmt_19_set.insert("SettleOnOpenFlag_t_68140698");
      Instrmt_19.add_attribute("AsgnMeth", "1953558658"); // 2
      Instrmt_19_set.insert("1953558658");
      Instrmt_19.add_attribute("Status", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("CpnPmt", "CouponPaymentDate_t_445334354"); // 2
      Instrmt_19_set.insert("CouponPaymentDate_t_445334354");
      Instrmt_19.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_19_set.insert("MM");
      Instrmt_19.add_attribute("Snrty", "SB"); // 2
      Instrmt_19_set.insert("SB");
      Instrmt_19.add_attribute("NotlPctOut", "2357947.830000"); // 2
      Instrmt_19_set.insert("2357947.830000");
      Instrmt_19.add_attribute("OrigNotlPctOut", "19388635.900000"); // 2
      Instrmt_19_set.insert("19388635.900000");
      Instrmt_19.add_attribute("AttchPnt", "17569433.670000"); // 2
      Instrmt_19_set.insert("17569433.670000");
      Instrmt_19.add_attribute("DetchPnt", "5171211.150000"); // 2
      Instrmt_19_set.insert("5171211.150000");
      Instrmt_19.add_attribute("Issued", "IssueDate_t_1367820542"); // 2
      Instrmt_19_set.insert("IssueDate_t_1367820542");
      Instrmt_19.add_attribute("RepoCollSecTyp", "2120444421"); // 2
      Instrmt_19_set.insert("2120444421");
      Instrmt_19.add_attribute("RepoTrm", "1934169480"); // 2
      Instrmt_19_set.insert("1934169480");
      Instrmt_19.add_attribute("RepoRt", "11283297.010000"); // 2
      Instrmt_19_set.insert("11283297.010000");
      Instrmt_19.add_attribute("Fctr", "13682346.390000"); // 2
      Instrmt_19_set.insert("13682346.390000");
      Instrmt_19.add_attribute("CrdRtg", "CreditRating_t_1721117240"); // 2
      Instrmt_19_set.insert("CreditRating_t_1721117240");
      Instrmt_19.add_attribute("Rgstry", "InstrRegistry_t_1967382634"); // 2
      Instrmt_19_set.insert("InstrRegistry_t_1967382634");
      Instrmt_19.add_attribute("IssuCtry", "421910881"); // 2
      Instrmt_19_set.insert("421910881");
      Instrmt_19.add_attribute("StPrv", "StateOrProvinceOfIssue_t_490350829"); // 2
      Instrmt_19_set.insert("StateOrProvinceOfIssue_t_490350829");
      Instrmt_19.add_attribute("Lcl", "LocaleOfIssue_t_1179768519"); // 2
      Instrmt_19_set.insert("LocaleOfIssue_t_1179768519");
      Instrmt_19.add_attribute("Redeem", "RedemptionDate_t_1603240461"); // 2
      Instrmt_19_set.insert("RedemptionDate_t_1603240461");
      Instrmt_19.add_attribute("StrkPx", "11838521.550000"); // 2
      Instrmt_19_set.insert("11838521.550000");
      Instrmt_19.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_19_set.insert("USD");
      Instrmt_19.add_attribute("StrkMult", "3205017.780000"); // 2
      Instrmt_19_set.insert("3205017.780000");
      Instrmt_19.add_attribute("StrkValu", "8611701.940000"); // 2
      Instrmt_19_set.insert("8611701.940000");
      Instrmt_19.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_19_set.insert("3");
      Instrmt_19.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_19_set.insert("4");
      Instrmt_19.add_attribute("StrkPxBndryPrcsn", "3540835.180000"); // 2
      Instrmt_19_set.insert("3540835.180000");
      Instrmt_19.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("OptAt", "1785175107"); // 2
      Instrmt_19_set.insert("1785175107");
      Instrmt_19.add_attribute("Mult", "4222242.160000"); // 2
      Instrmt_19_set.insert("4222242.160000");
      Instrmt_19.add_attribute("MultTyp", "1"); // 2
      Instrmt_19_set.insert("1");
      Instrmt_19.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_19_set.insert("1");
      Instrmt_19.add_attribute("MinPxIncr", "8675585.700000"); // 2
      Instrmt_19_set.insert("8675585.700000");
      Instrmt_19.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1308740154"); // 2
      Instrmt_19_set.insert("MinPriceIncrementAmount_t_1308740154");
      Instrmt_19.add_attribute("UOM", "MWh"); // 2
      Instrmt_19_set.insert("MWh");
      Instrmt_19.add_attribute("UOMQty", "11033533.540000"); // 2
      Instrmt_19_set.insert("11033533.540000");
      Instrmt_19.add_attribute("PxUOM", "Bcf"); // 2
      Instrmt_19_set.insert("Bcf");
      Instrmt_19.add_attribute("PxUOMQty", "16034098.470000"); // 2
      Instrmt_19_set.insert("16034098.470000");
      Instrmt_19.add_attribute("SettlMeth", "P"); // 2
      Instrmt_19_set.insert("P");
      Instrmt_19.add_attribute("ExerStyle", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("OptPayAmt", "OptPayoutAmount_t_1407160301"); // 2
      Instrmt_19_set.insert("OptPayoutAmount_t_1407160301");
      Instrmt_19.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_19_set.insert("STD");
      Instrmt_19.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_19_set.insert("FUT");
      Instrmt_19.add_attribute("ListMeth", "0"); // 2
      Instrmt_19_set.insert("0");
      Instrmt_19.add_attribute("CapPx", "12686856.780000"); // 2
      Instrmt_19_set.insert("12686856.780000");
      Instrmt_19.add_attribute("FlrPx", "12190324.920000"); // 2
      Instrmt_19_set.insert("12190324.920000");
      Instrmt_19.add_attribute("PutCall", "1"); // 2
      Instrmt_19_set.insert("1");
      Instrmt_19.add_attribute("FlexInd", "true"); // 2
      Instrmt_19_set.insert("true");
      Instrmt_19.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_19_set.insert("false");
      Instrmt_19.add_attribute("TmUnit", "S"); // 2
      Instrmt_19_set.insert("S");
      Instrmt_19.add_attribute("CpnRt", "20450170.530000"); // 2
      Instrmt_19_set.insert("20450170.530000");
      Instrmt_19.add_attribute("Exch", "SecurityExchange_t_851899112"); // 2
      Instrmt_19_set.insert("SecurityExchange_t_851899112");
      Instrmt_19.add_attribute("PosLmt", "828015008"); // 2
      Instrmt_19_set.insert("828015008");
      Instrmt_19.add_attribute("NTPosLmt", "758703599"); // 2
      Instrmt_19_set.insert("758703599");
      Instrmt_19.add_attribute("Issr", "Issuer_t_1345594590"); // 2
      Instrmt_19_set.insert("Issuer_t_1345594590");
      Instrmt_19.add_attribute("EncIssrLen", "273696514"); // 2
      Instrmt_19_set.insert("273696514");
      Instrmt_19.add_attribute("EncIssr", "EncodedIssuer_t_1112787117"); // 2
      Instrmt_19_set.insert("EncodedIssuer_t_1112787117");
      Instrmt_19.add_attribute("Desc", "SecurityDesc_t_1721036831"); // 2
      Instrmt_19_set.insert("SecurityDesc_t_1721036831");
      Instrmt_19.add_attribute("EncSecDescLen", "2058871621"); // 2
      Instrmt_19_set.insert("2058871621");
      Instrmt_19.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1535011333"); // 2
      Instrmt_19_set.insert("EncodedSecurityDesc_t_1535011333");
      Instrmt_19.add_attribute("Pool", "Pool_t_1902554083"); // 2
      Instrmt_19_set.insert("Pool_t_1902554083");
      Instrmt_19.add_attribute("CSetMo", "112212709"); // 2
      Instrmt_19_set.insert("112212709");
      Instrmt_19.add_attribute("CPPgm", "1"); // 2
      Instrmt_19_set.insert("1");
      Instrmt_19.add_attribute("CPRegT", "CPRegType_t_1063810589"); // 2
      Instrmt_19_set.insert("CPRegType_t_1063810589");
      Instrmt_19.add_attribute("Dated", "DatedDate_t_2106162837"); // 2
      Instrmt_19_set.insert("DatedDate_t_2106162837");
      Instrmt_19.add_attribute("IntAcrl", "InterestAccrualDate_t_1358439610"); // 2
      Instrmt_19_set.insert("InterestAccrualDate_t_1358439610");
      all_values.push_back(Instrmt_19_set);
      all_compo_names.insert("Instrmt_19_set");

      {
        xml_element AID_22{"AID"};
        multiset<string> AID_22_set;
        AID_22.add_attribute("AltID", "SecurityAltID_t_16447037"); // 3
        AID_22_set.insert("SecurityAltID_t_16447037");
        AID_22.add_attribute("AltIDSrc", "3"); // 3
        AID_22_set.insert("3");
        all_values.push_back(AID_22_set);
        all_compo_names.insert("AID_22_set");

        Instrmt_19.add_element(AID_22);
      }
      {
        xml_element SecXML_22{"SecXML"};
        multiset<string> SecXML_22_set;
        SecXML_22.add_attribute("Schema", "SecurityXMLSchema_t_831430431"); // 3
        SecXML_22_set.insert("SecurityXMLSchema_t_831430431");
        all_values.push_back(SecXML_22_set);
        all_compo_names.insert("SecXML_22_set");

        Instrmt_19.add_element(SecXML_22);
      }
      {
        xml_element Evnt_22{"Evnt"};
        multiset<string> Evnt_22_set;
        Evnt_22.add_attribute("EventTyp", "8"); // 3
        Evnt_22_set.insert("8");
        Evnt_22.add_attribute("Dt", "EventDate_t_990976008"); // 3
        Evnt_22_set.insert("EventDate_t_990976008");
        Evnt_22.add_attribute("Tm", "EventTime_t_91107085"); // 3
        Evnt_22_set.insert("EventTime_t_91107085");
        Evnt_22.add_attribute("Px", "17856907.200000"); // 3
        Evnt_22_set.insert("17856907.200000");
        Evnt_22.add_attribute("Txt", "EventText_t_1788097619"); // 3
        Evnt_22_set.insert("EventText_t_1788097619");
        all_values.push_back(Evnt_22_set);
        all_compo_names.insert("Evnt_22_set");

        Instrmt_19.add_element(Evnt_22);
      }
      {
        xml_element Pty_139{"Pty"};
        multiset<string> Pty_139_set;
        Pty_139.add_attribute("ID", "InstrumentPartyID_t_1071900979"); // 3
        Pty_139_set.insert("InstrumentPartyID_t_1071900979");
        Pty_139.add_attribute("Src", "B"); // 3
        Pty_139_set.insert("B");
        Pty_139.add_attribute("R", "42"); // 3
        Pty_139_set.insert("42");
        all_values.push_back(Pty_139_set);
        all_compo_names.insert("Pty_139_set");

        {
          xml_element Sub_139{"Sub"};
          multiset<string> Sub_139_set;
          Sub_139.add_attribute("ID", "InstrumentPartySubID_t_395562054"); // 4
          Sub_139_set.insert("InstrumentPartySubID_t_395562054");
          Sub_139.add_attribute("Typ", "15"); // 4
          Sub_139_set.insert("15");
          all_values.push_back(Sub_139_set);
          all_compo_names.insert("Sub_139_set");

          Pty_139.add_element(Sub_139);
        }
        Instrmt_19.add_element(Pty_139);
      }
      {
        xml_element CmplxEvnt_19{"CmplxEvnt"};
        multiset<string> CmplxEvnt_19_set;
        CmplxEvnt_19.add_attribute("Typ", "2"); // 3
        CmplxEvnt_19_set.insert("2");
        CmplxEvnt_19.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_903075284"); // 3
        CmplxEvnt_19_set.insert("ComplexOptPayoutAmount_t_903075284");
        CmplxEvnt_19.add_attribute("Px", "11053967.050000"); // 3
        CmplxEvnt_19_set.insert("11053967.050000");
        CmplxEvnt_19.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_19_set.insert("3");
        CmplxEvnt_19.add_attribute("PxBndryPrcsn", "17310902.920000"); // 3
        CmplxEvnt_19_set.insert("17310902.920000");
        CmplxEvnt_19.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_19_set.insert("1");
        CmplxEvnt_19.add_attribute("Cond", "1"); // 3
        CmplxEvnt_19_set.insert("1");
        all_values.push_back(CmplxEvnt_19_set);
        all_compo_names.insert("CmplxEvnt_19_set");

        {
          xml_element EvntDts_19{"EvntDts"};
          multiset<string> EvntDts_19_set;
          EvntDts_19.add_attribute("StartDt", "ComplexEventStartDate_t_2004786806"); // 4
          EvntDts_19_set.insert("ComplexEventStartDate_t_2004786806");
          EvntDts_19.add_attribute("EndDt", "ComplexEventEndDate_t_829403773"); // 4
          EvntDts_19_set.insert("ComplexEventEndDate_t_829403773");
          all_values.push_back(EvntDts_19_set);
          all_compo_names.insert("EvntDts_19_set");

          {
            xml_element EvntTms_19{"EvntTms"};
            multiset<string> EvntTms_19_set;
            EvntTms_19.add_attribute("StartTm", "1157999006"); // 5
            EvntTms_19_set.insert("1157999006");
            EvntTms_19.add_attribute("EndTm", "1916174779"); // 5
            EvntTms_19_set.insert("1916174779");
            all_values.push_back(EvntTms_19_set);
            all_compo_names.insert("EvntTms_19_set");

            EvntDts_19.add_element(EvntTms_19);
          }
          CmplxEvnt_19.add_element(EvntDts_19);
        }
        Instrmt_19.add_element(CmplxEvnt_19);
      }
      RelSym_3.add_element(Instrmt_19);
    }
    {
      xml_element InstrmtExt_7{"InstrmtExt"};
      multiset<string> InstrmtExt_7_set;
      InstrmtExt_7.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_7_set.insert("2");
      InstrmtExt_7.add_attribute("PctAtRisk", "9130694.410000"); // 2
      InstrmtExt_7_set.insert("9130694.410000");
      all_values.push_back(InstrmtExt_7_set);
      all_compo_names.insert("InstrmtExt_7_set");

      {
        xml_element Attrb_11{"Attrb"};
        multiset<string> Attrb_11_set;
        Attrb_11.add_attribute("Typ", "18"); // 3
        Attrb_11_set.insert("18");
        Attrb_11.add_attribute("Val", "InstrAttribValue_t_472017715"); // 3
        Attrb_11_set.insert("InstrAttribValue_t_472017715");
        all_values.push_back(Attrb_11_set);
        all_compo_names.insert("Attrb_11_set");

        InstrmtExt_7.add_element(Attrb_11);
      }
      RelSym_3.add_element(InstrmtExt_7);
    }
    {
      xml_element PxLmts2_3{"PxLmts2"};
      multiset<string> PxLmts2_3_set;
      PxLmts2_3.add_attribute("PxLmtTyp", "0"); // 2
      PxLmts2_3_set.insert("0");
      PxLmts2_3.add_attribute("LowLmtPx", "19870666.780000"); // 2
      PxLmts2_3_set.insert("19870666.780000");
      PxLmts2_3.add_attribute("HiLmtPx", "18304573.250000"); // 2
      PxLmts2_3_set.insert("18304573.250000");
      PxLmts2_3.add_attribute("TrdgRefPx", "19933270.670000"); // 2
      PxLmts2_3_set.insert("19933270.670000");
      all_values.push_back(PxLmts2_3_set);
      all_compo_names.insert("PxLmts2_3_set");

      RelSym_3.add_element(PxLmts2_3);
    }
    {
      xml_element Leg_28{"Leg"};
      multiset<string> Leg_28_set;
      Leg_28.add_attribute("Sym", "LegSymbol_t_1401672066"); // 2
      Leg_28_set.insert("LegSymbol_t_1401672066");
      Leg_28.add_attribute("Sfx", "CD"); // 2
      Leg_28_set.insert("CD");
      Leg_28.add_attribute("ID", "LegSecurityID_t_182747447"); // 2
      Leg_28_set.insert("LegSecurityID_t_182747447");
      Leg_28.add_attribute("Src", "D"); // 2
      Leg_28_set.insert("D");
      Leg_28.add_attribute("Prod", "10"); // 2
      Leg_28_set.insert("10");
      Leg_28.add_attribute("CFI", "LegCFICode_t_1968438167"); // 2
      Leg_28_set.insert("LegCFICode_t_1968438167");
      Leg_28.add_attribute("SecTyp", "FUT"); // 2
      Leg_28_set.insert("FUT");
      Leg_28.add_attribute("SecSubTyp", "LegSecuritySubType_t_1677412172"); // 2
      Leg_28_set.insert("LegSecuritySubType_t_1677412172");
      Leg_28.add_attribute("MMY", "727847270"); // 2
      Leg_28_set.insert("727847270");
      Leg_28.add_attribute("Mat", "LegMaturityDate_t_745424860"); // 2
      Leg_28_set.insert("LegMaturityDate_t_745424860");
      Leg_28.add_attribute("MatTm", "2072974226"); // 2
      Leg_28_set.insert("2072974226");
      Leg_28.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1935710570"); // 2
      Leg_28_set.insert("LegCouponPaymentDate_t_1935710570");
      Leg_28.add_attribute("Issued", "LegIssueDate_t_132376980"); // 2
      Leg_28_set.insert("LegIssueDate_t_132376980");
      Leg_28.add_attribute("RepoCollSecTyp", "828565862"); // 2
      Leg_28_set.insert("828565862");
      Leg_28.add_attribute("RepoTrm", "893623628"); // 2
      Leg_28_set.insert("893623628");
      Leg_28.add_attribute("RepoRt", "3712282.130000"); // 2
      Leg_28_set.insert("3712282.130000");
      Leg_28.add_attribute("Fctr", "4121725.070000"); // 2
      Leg_28_set.insert("4121725.070000");
      Leg_28.add_attribute("CrdRtg", "LegCreditRating_t_610240284"); // 2
      Leg_28_set.insert("LegCreditRating_t_610240284");
      Leg_28.add_attribute("Rgstry", "LegInstrRegistry_t_1955674035"); // 2
      Leg_28_set.insert("LegInstrRegistry_t_1955674035");
      Leg_28.add_attribute("Ctry", "269475665"); // 2
      Leg_28_set.insert("269475665");
      Leg_28.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1439644058"); // 2
      Leg_28_set.insert("LegStateOrProvinceOfIssue_t_1439644058");
      Leg_28.add_attribute("Lcl", "LegLocaleOfIssue_t_966189393"); // 2
      Leg_28_set.insert("LegLocaleOfIssue_t_966189393");
      Leg_28.add_attribute("Redeem", "LegRedemptionDate_t_38166797"); // 2
      Leg_28_set.insert("LegRedemptionDate_t_38166797");
      Leg_28.add_attribute("Strk", "16565755.170000"); // 2
      Leg_28_set.insert("16565755.170000");
      Leg_28.add_attribute("StrkCcy", "GBP"); // 2
      Leg_28_set.insert("GBP");
      Leg_28.add_attribute("OptA", "2128593232"); // 2
      Leg_28_set.insert("2128593232");
      Leg_28.add_attribute("Cmult", "17086552.160000"); // 2
      Leg_28_set.insert("17086552.160000");
      Leg_28.add_attribute("MultTyp", "1"); // 2
      Leg_28_set.insert("1");
      Leg_28.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_28_set.insert("4");
      Leg_28.add_attribute("UOM", "Bbl"); // 2
      Leg_28_set.insert("Bbl");
      Leg_28.add_attribute("UOMQty", "11603257.340000"); // 2
      Leg_28_set.insert("11603257.340000");
      Leg_28.add_attribute("PxUOM", "oz_tr"); // 2
      Leg_28_set.insert("oz_tr");
      Leg_28.add_attribute("PxUOMQty", "17372460.830000"); // 2
      Leg_28_set.insert("17372460.830000");
      Leg_28.add_attribute("TmUnit", "Wk"); // 2
      Leg_28_set.insert("Wk");
      Leg_28.add_attribute("ExerStyle", "1"); // 2
      Leg_28_set.insert("1");
      Leg_28.add_attribute("CpnRt", "15582006.030000"); // 2
      Leg_28_set.insert("15582006.030000");
      Leg_28.add_attribute("Exch", "LegSecurityExchange_t_1291268557"); // 2
      Leg_28_set.insert("LegSecurityExchange_t_1291268557");
      Leg_28.add_attribute("Issr", "LegIssuer_t_313927087"); // 2
      Leg_28_set.insert("LegIssuer_t_313927087");
      Leg_28.add_attribute("EncLegIssrLen", "138564225"); // 2
      Leg_28_set.insert("138564225");
      Leg_28.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2036693417"); // 2
      Leg_28_set.insert("EncodedLegIssuer_t_2036693417");
      Leg_28.add_attribute("Desc", "LegSecurityDesc_t_239417666"); // 2
      Leg_28_set.insert("LegSecurityDesc_t_239417666");
      Leg_28.add_attribute("EncLegSecDescLen", "2074274795"); // 2
      Leg_28_set.insert("2074274795");
      Leg_28.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_21586749"); // 2
      Leg_28_set.insert("EncodedLegSecurityDesc_t_21586749");
      Leg_28.add_attribute("RatioQty", "10679835.280000"); // 2
      Leg_28_set.insert("10679835.280000");
      Leg_28.add_attribute("Side", "8"); // 2
      Leg_28_set.insert("8");
      Leg_28.add_attribute("Ccy", "CHF"); // 2
      Leg_28_set.insert("CHF");
      Leg_28.add_attribute("Pool", "LegPool_t_1430655060"); // 2
      Leg_28_set.insert("LegPool_t_1430655060");
      Leg_28.add_attribute("Dated", "LegDatedDate_t_201005350"); // 2
      Leg_28_set.insert("LegDatedDate_t_201005350");
      Leg_28.add_attribute("CSetMo", "1749631701"); // 2
      Leg_28_set.insert("1749631701");
      Leg_28.add_attribute("IntAcrl", "LegInterestAccrualDate_t_722815470"); // 2
      Leg_28_set.insert("LegInterestAccrualDate_t_722815470");
      Leg_28.add_attribute("PutCall", "1167194743"); // 2
      Leg_28_set.insert("1167194743");
      Leg_28.add_attribute("LegOptionRatio", "17877984.980000"); // 2
      Leg_28_set.insert("17877984.980000");
      Leg_28.add_attribute("Px", "2319073.390000"); // 2
      Leg_28_set.insert("2319073.390000");
      all_values.push_back(Leg_28_set);
      all_compo_names.insert("Leg_28_set");

      {
        xml_element LegAID_28{"LegAID"};
        multiset<string> LegAID_28_set;
        LegAID_28.add_attribute("SecAltID", "LegSecurityAltID_t_898969930"); // 3
        LegAID_28_set.insert("LegSecurityAltID_t_898969930");
        LegAID_28.add_attribute("SecAltIDSrc", "H"); // 3
        LegAID_28_set.insert("H");
        all_values.push_back(LegAID_28_set);
        all_compo_names.insert("LegAID_28_set");

        Leg_28.add_element(LegAID_28);
      }
      RelSym_3.add_element(Leg_28);
    }
    elt.add_element(RelSym_3);
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
