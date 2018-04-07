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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityList_message_t_0;
  elt.add_attribute("RptID", "512787632"); // 0
  DerivativeSecurityList_message_t_0.insert("512787632");
  elt.add_attribute("ReqID", "SecurityReqID_t_1293685883"); // 0
  DerivativeSecurityList_message_t_0.insert("SecurityReqID_t_1293685883");
  elt.add_attribute("RspID", "SecurityResponseID_t_977304432"); // 0
  DerivativeSecurityList_message_t_0.insert("SecurityResponseID_t_977304432");
  elt.add_attribute("ReqRslt", "5"); // 0
  DerivativeSecurityList_message_t_0.insert("5");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1562507041"); // 0
  DerivativeSecurityList_message_t_0.insert("ClearingBusinessDate_t_1562507041");
  elt.add_attribute("TxnTm", "TransactTime_t_1164276752"); // 0
  DerivativeSecurityList_message_t_0.insert("TransactTime_t_1164276752");
  elt.add_attribute("TotNoReltdSym", "498529361"); // 0
  DerivativeSecurityList_message_t_0.insert("498529361");
  elt.add_attribute("LastFragment", "N"); // 0
  DerivativeSecurityList_message_t_0.insert("N");
  all_values.push_back(DerivativeSecurityList_message_t_0);
  all_compo_names.insert("DerivativeSecurityList_message_t");

  { // Hdr
    xml_element Hdr_26{"Hdr"};
    multiset<string> Hdr_26_set;
    Hdr_26.add_attribute("SeqNum", "279574393"); // 1
    Hdr_26_set.insert("279574393");
    Hdr_26.add_attribute("SID", "SenderCompID_t_1600460417"); // 1
    Hdr_26_set.insert("SenderCompID_t_1600460417");
    Hdr_26.add_attribute("TID", "TargetCompID_t_1461829192"); // 1
    Hdr_26_set.insert("TargetCompID_t_1461829192");
    Hdr_26.add_attribute("OBID", "OnBehalfOfCompID_t_1947702032"); // 1
    Hdr_26_set.insert("OnBehalfOfCompID_t_1947702032");
    Hdr_26.add_attribute("D2ID", "DeliverToCompID_t_513265170"); // 1
    Hdr_26_set.insert("DeliverToCompID_t_513265170");
    Hdr_26.add_attribute("SSub", "SenderSubID_t_1644919758"); // 1
    Hdr_26_set.insert("SenderSubID_t_1644919758");
    Hdr_26.add_attribute("SLoc", "SenderLocationID_t_100800772"); // 1
    Hdr_26_set.insert("SenderLocationID_t_100800772");
    Hdr_26.add_attribute("TSub", "TargetSubID_t_1766036442"); // 1
    Hdr_26_set.insert("TargetSubID_t_1766036442");
    Hdr_26.add_attribute("TLoc", "TargetLocationID_t_1358489027"); // 1
    Hdr_26_set.insert("TargetLocationID_t_1358489027");
    Hdr_26.add_attribute("OBSub", "OnBehalfOfSubID_t_1937595630"); // 1
    Hdr_26_set.insert("OnBehalfOfSubID_t_1937595630");
    Hdr_26.add_attribute("OBLoc", "OnBehalfOfLocationID_t_544200334"); // 1
    Hdr_26_set.insert("OnBehalfOfLocationID_t_544200334");
    Hdr_26.add_attribute("D2Sub", "DeliverToSubID_t_2107582929"); // 1
    Hdr_26_set.insert("DeliverToSubID_t_2107582929");
    Hdr_26.add_attribute("D2Loc", "DeliverToLocationID_t_1903998455"); // 1
    Hdr_26_set.insert("DeliverToLocationID_t_1903998455");
    Hdr_26.add_attribute("PosDup", "Y"); // 1
    Hdr_26_set.insert("Y");
    Hdr_26.add_attribute("PosRsnd", "Y"); // 1
    Hdr_26_set.insert("Y");
    Hdr_26.add_attribute("Snt", "SendingTime_t_1043238375"); // 1
    Hdr_26_set.insert("SendingTime_t_1043238375");
    Hdr_26.add_attribute("OrigSnt", "OrigSendingTime_t_958470277"); // 1
    Hdr_26_set.insert("OrigSendingTime_t_958470277");
    Hdr_26.add_attribute("MsgEncd", "MessageEncoding_t_1021409452"); // 1
    Hdr_26_set.insert("MessageEncoding_t_1021409452");
    all_values.push_back(Hdr_26_set);
    all_compo_names.insert("Hdr_26_set");

    {
      xml_element Hop_26{"Hop"};
      multiset<string> Hop_26_set;
      Hop_26.add_attribute("ID", "HopCompID_t_647055597"); // 2
      Hop_26_set.insert("HopCompID_t_647055597");
      Hop_26.add_attribute("Ref", "1842234475"); // 2
      Hop_26_set.insert("1842234475");
      Hop_26.add_attribute("Snt", "HopSendingTime_t_583481719"); // 2
      Hop_26_set.insert("HopSendingTime_t_583481719");
      all_values.push_back(Hop_26_set);
      all_compo_names.insert("Hop_26_set");

      Hdr_26.add_element(Hop_26);
    }
    elt.add_element(Hdr_26);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_2{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_2_set;
    ApplSeqCtrl_2.add_attribute("ApplID", "ApplID_t_196280739"); // 1
    ApplSeqCtrl_2_set.insert("ApplID_t_196280739");
    ApplSeqCtrl_2.add_attribute("ApplSeqNum", "2055591696"); // 1
    ApplSeqCtrl_2_set.insert("2055591696");
    ApplSeqCtrl_2.add_attribute("ApplLastSeqNum", "1096269352"); // 1
    ApplSeqCtrl_2_set.insert("1096269352");
    ApplSeqCtrl_2.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_2_set.insert("true");
    all_values.push_back(ApplSeqCtrl_2_set);
    all_compo_names.insert("ApplSeqCtrl_2_set");

    elt.add_element(ApplSeqCtrl_2);
  } // end ApplSeqCtrl
  { // Undly
    xml_element Undly_28{"Undly"};
    multiset<string> Undly_28_set;
    Undly_28.add_attribute("Sym", "UnderlyingSymbol_t_885412480"); // 1
    Undly_28_set.insert("UnderlyingSymbol_t_885412480");
    Undly_28.add_attribute("Sfx", "WI"); // 1
    Undly_28_set.insert("WI");
    Undly_28.add_attribute("ID", "UnderlyingSecurityID_t_904990015"); // 1
    Undly_28_set.insert("UnderlyingSecurityID_t_904990015");
    Undly_28.add_attribute("Src", "9"); // 1
    Undly_28_set.insert("9");
    Undly_28.add_attribute("Prod", "12"); // 1
    Undly_28_set.insert("12");
    Undly_28.add_attribute("CFI", "UnderlyingCFICode_t_1212269335"); // 1
    Undly_28_set.insert("UnderlyingCFICode_t_1212269335");
    Undly_28.add_attribute("SecTyp", "FUT"); // 1
    Undly_28_set.insert("FUT");
    Undly_28.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2078926733"); // 1
    Undly_28_set.insert("UnderlyingSecuritySubType_t_2078926733");
    Undly_28.add_attribute("MMY", "526614879"); // 1
    Undly_28_set.insert("526614879");
    Undly_28.add_attribute("Mat", "UnderlyingMaturityDate_t_2129482009"); // 1
    Undly_28_set.insert("UnderlyingMaturityDate_t_2129482009");
    Undly_28.add_attribute("MatTm", "444708255"); // 1
    Undly_28_set.insert("444708255");
    Undly_28.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_24050989"); // 1
    Undly_28_set.insert("UnderlyingCouponPaymentDate_t_24050989");
    Undly_28.add_attribute("RestrctTyp", "MR"); // 1
    Undly_28_set.insert("MR");
    Undly_28.add_attribute("Snrty", "SB"); // 1
    Undly_28_set.insert("SB");
    Undly_28.add_attribute("NotlPctOut", "13825400.170000"); // 1
    Undly_28_set.insert("13825400.170000");
    Undly_28.add_attribute("OrigNotlPctOut", "20203947.640000"); // 1
    Undly_28_set.insert("20203947.640000");
    Undly_28.add_attribute("AttchPnt", "6074613.840000"); // 1
    Undly_28_set.insert("6074613.840000");
    Undly_28.add_attribute("DetchPnt", "13426392.980000"); // 1
    Undly_28_set.insert("13426392.980000");
    Undly_28.add_attribute("Issued", "UnderlyingIssueDate_t_1776909571"); // 1
    Undly_28_set.insert("UnderlyingIssueDate_t_1776909571");
    Undly_28.add_attribute("RepoCollSecTyp", "447254553"); // 1
    Undly_28_set.insert("447254553");
    Undly_28.add_attribute("RepoTrm", "1030470543"); // 1
    Undly_28_set.insert("1030470543");
    Undly_28.add_attribute("RepoRt", "6726642.990000"); // 1
    Undly_28_set.insert("6726642.990000");
    Undly_28.add_attribute("Fctr", "14057248.300000"); // 1
    Undly_28_set.insert("14057248.300000");
    Undly_28.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2051879995"); // 1
    Undly_28_set.insert("UnderlyingCreditRating_t_2051879995");
    Undly_28.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1319719896"); // 1
    Undly_28_set.insert("UnderlyingInstrRegistry_t_1319719896");
    Undly_28.add_attribute("Ctry", "1100475657"); // 1
    Undly_28_set.insert("1100475657");
    Undly_28.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_487878067"); // 1
    Undly_28_set.insert("UnderlyingStateOrProvinceOfIssue_t_487878067");
    Undly_28.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1516000635"); // 1
    Undly_28_set.insert("UnderlyingLocaleOfIssue_t_1516000635");
    Undly_28.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1008583706"); // 1
    Undly_28_set.insert("UnderlyingRedemptionDate_t_1008583706");
    Undly_28.add_attribute("StrkPx", "15841474.190000"); // 1
    Undly_28_set.insert("15841474.190000");
    Undly_28.add_attribute("StrkCcy", "USD"); // 1
    Undly_28_set.insert("USD");
    Undly_28.add_attribute("OptA", "1564084374"); // 1
    Undly_28_set.insert("1564084374");
    Undly_28.add_attribute("Mult", "17634736.250000"); // 1
    Undly_28_set.insert("17634736.250000");
    Undly_28.add_attribute("MultTyp", "2"); // 1
    Undly_28_set.insert("2");
    Undly_28.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_28_set.insert("0");
    Undly_28.add_attribute("UOM", "Bu"); // 1
    Undly_28_set.insert("Bu");
    Undly_28.add_attribute("UOMQty", "19779817.480000"); // 1
    Undly_28_set.insert("19779817.480000");
    Undly_28.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_28_set.insert("MMBtu");
    Undly_28.add_attribute("PxUOMQty", "13548741.920000"); // 1
    Undly_28_set.insert("13548741.920000");
    Undly_28.add_attribute("TmUnit", "Wk"); // 1
    Undly_28_set.insert("Wk");
    Undly_28.add_attribute("ExerStyle", "2"); // 1
    Undly_28_set.insert("2");
    Undly_28.add_attribute("CpnRt", "13789251.820000"); // 1
    Undly_28_set.insert("13789251.820000");
    Undly_28.add_attribute("Exch", "UnderlyingSecurityExchange_t_2042779243"); // 1
    Undly_28_set.insert("UnderlyingSecurityExchange_t_2042779243");
    Undly_28.add_attribute("Issr", "UnderlyingIssuer_t_334479433"); // 1
    Undly_28_set.insert("UnderlyingIssuer_t_334479433");
    Undly_28.add_attribute("EncUndIssrLen", "613981551"); // 1
    Undly_28_set.insert("613981551");
    Undly_28.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1915690359"); // 1
    Undly_28_set.insert("EncodedUnderlyingIssuer_t_1915690359");
    Undly_28.add_attribute("Desc", "UnderlyingSecurityDesc_t_941940818"); // 1
    Undly_28_set.insert("UnderlyingSecurityDesc_t_941940818");
    Undly_28.add_attribute("EncUndSecDescLen", "1956620849"); // 1
    Undly_28_set.insert("1956620849");
    Undly_28.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1545116283"); // 1
    Undly_28_set.insert("EncodedUnderlyingSecurityDesc_t_1545116283");
    Undly_28.add_attribute("CPPgm", "UnderlyingCPProgram_t_1389195371"); // 1
    Undly_28_set.insert("UnderlyingCPProgram_t_1389195371");
    Undly_28.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_839607745"); // 1
    Undly_28_set.insert("UnderlyingCPRegType_t_839607745");
    Undly_28.add_attribute("AllocPct", "702969.340000"); // 1
    Undly_28_set.insert("702969.340000");
    Undly_28.add_attribute("Ccy", "USD"); // 1
    Undly_28_set.insert("USD");
    Undly_28.add_attribute("Qty", "13900168.300000"); // 1
    Undly_28_set.insert("13900168.300000");
    Undly_28.add_attribute("SettlTyp", "5"); // 1
    Undly_28_set.insert("5");
    Undly_28.add_attribute("CashAmt", "UnderlyingCashAmount_t_1231882159"); // 1
    Undly_28_set.insert("UnderlyingCashAmount_t_1231882159");
    Undly_28.add_attribute("CashTyp", "FIXED"); // 1
    Undly_28_set.insert("FIXED");
    Undly_28.add_attribute("Px", "6090122.690000"); // 1
    Undly_28_set.insert("6090122.690000");
    Undly_28.add_attribute("DirtPx", "6685459.300000"); // 1
    Undly_28_set.insert("6685459.300000");
    Undly_28.add_attribute("EndPx", "16170174.280000"); // 1
    Undly_28_set.insert("16170174.280000");
    Undly_28.add_attribute("StartVal", "UnderlyingStartValue_t_355524808"); // 1
    Undly_28_set.insert("UnderlyingStartValue_t_355524808");
    Undly_28.add_attribute("CurVal", "UnderlyingCurrentValue_t_85146656"); // 1
    Undly_28_set.insert("UnderlyingCurrentValue_t_85146656");
    Undly_28.add_attribute("EndVal", "UnderlyingEndValue_t_1233007405"); // 1
    Undly_28_set.insert("UnderlyingEndValue_t_1233007405");
    Undly_28.add_attribute("AdjQty", "42429.310000"); // 1
    Undly_28_set.insert("42429.310000");
    Undly_28.add_attribute("FxRate", "21276973.470000"); // 1
    Undly_28_set.insert("21276973.470000");
    Undly_28.add_attribute("FxRateCalc", "M"); // 1
    Undly_28_set.insert("M");
    Undly_28.add_attribute("CapValu", "UnderlyingCapValue_t_1982224679"); // 1
    Undly_28_set.insert("UnderlyingCapValue_t_1982224679");
    Undly_28.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1954207475"); // 1
    Undly_28_set.insert("UnderlyingSettlMethod_t_1954207475");
    Undly_28.add_attribute("PutCall", "1268657263"); // 1
    Undly_28_set.insert("1268657263");
    all_values.push_back(Undly_28_set);
    all_compo_names.insert("Undly_28_set");

    {
      xml_element UndAID_28{"UndAID"};
      multiset<string> UndAID_28_set;
      UndAID_28.add_attribute("AltID", "UnderlyingSecurityAltID_t_1794721141"); // 2
      UndAID_28_set.insert("UnderlyingSecurityAltID_t_1794721141");
      UndAID_28.add_attribute("AltIDSrc", "H"); // 2
      UndAID_28_set.insert("H");
      all_values.push_back(UndAID_28_set);
      all_compo_names.insert("UndAID_28_set");

      Undly_28.add_element(UndAID_28);
    }
    {
      xml_element Stip_45{"Stip"};
      multiset<string> Stip_45_set;
      Stip_45.add_attribute("Typ", "TRADERCREDIT"); // 2
      Stip_45_set.insert("TRADERCREDIT");
      Stip_45.add_attribute("Val", "UnderlyingStipValue_t_1690016737"); // 2
      Stip_45_set.insert("UnderlyingStipValue_t_1690016737");
      all_values.push_back(Stip_45_set);
      all_compo_names.insert("Stip_45_set");

      Undly_28.add_element(Stip_45);
    }
    {
      xml_element Pty_138{"Pty"};
      multiset<string> Pty_138_set;
      Pty_138.add_attribute("ID", "UnderlyingInstrumentPartyID_t_412421644"); // 2
      Pty_138_set.insert("UnderlyingInstrumentPartyID_t_412421644");
      Pty_138.add_attribute("Src", "D"); // 2
      Pty_138_set.insert("D");
      Pty_138.add_attribute("R", "82"); // 2
      Pty_138_set.insert("82");
      all_values.push_back(Pty_138_set);
      all_compo_names.insert("Pty_138_set");

      {
        xml_element Sub_138{"Sub"};
        multiset<string> Sub_138_set;
        Sub_138.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1354362462"); // 3
        Sub_138_set.insert("UnderlyingInstrumentPartySubID_t_1354362462");
        Sub_138.add_attribute("Typ", "20"); // 3
        Sub_138_set.insert("20");
        all_values.push_back(Sub_138_set);
        all_compo_names.insert("Sub_138_set");

        Pty_138.add_element(Sub_138);
      }
      Undly_28.add_element(Pty_138);
    }
    elt.add_element(Undly_28);
  } // end Undly
  { // DerivSecDef
    xml_element DerivSecDef_0{"DerivSecDef"};
    {
      xml_element DerivInstrmt_0{"DerivInstrmt"};
      multiset<string> DerivInstrmt_0_set;
      DerivInstrmt_0.add_attribute("Sym", "DerivativeSymbol_t_855856083"); // 2
      DerivInstrmt_0_set.insert("DerivativeSymbol_t_855856083");
      DerivInstrmt_0.add_attribute("Sfx", "WI"); // 2
      DerivInstrmt_0_set.insert("WI");
      DerivInstrmt_0.add_attribute("ID", "DerivativeSecurityID_t_1762825294"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityID_t_1762825294");
      DerivInstrmt_0.add_attribute("Src", "A"); // 2
      DerivInstrmt_0_set.insert("A");
      DerivInstrmt_0.add_attribute("Prod", "12"); // 2
      DerivInstrmt_0_set.insert("12");
      DerivInstrmt_0.add_attribute("ProdCmplx", "DerivativeProductComplex_t_359345739"); // 2
      DerivInstrmt_0_set.insert("DerivativeProductComplex_t_359345739");
      DerivInstrmt_0.add_attribute("FlexProdElig", "true"); // 2
      DerivInstrmt_0_set.insert("true");
      DerivInstrmt_0.add_attribute("SecGrp", "DerivativeSecurityGroup_t_843939303"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityGroup_t_843939303");
      DerivInstrmt_0.add_attribute("CFI", "DerivativeCFICode_t_1591227898"); // 2
      DerivInstrmt_0_set.insert("DerivativeCFICode_t_1591227898");
      DerivInstrmt_0.add_attribute("SecTyp", "WITHDRN"); // 2
      DerivInstrmt_0_set.insert("WITHDRN");
      DerivInstrmt_0.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_1452951572"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecuritySubType_t_1452951572");
      DerivInstrmt_0.add_attribute("MMY", "112290181"); // 2
      DerivInstrmt_0_set.insert("112290181");
      DerivInstrmt_0.add_attribute("MatDt", "DerivativeMaturityDate_t_396753798"); // 2
      DerivInstrmt_0_set.insert("DerivativeMaturityDate_t_396753798");
      DerivInstrmt_0.add_attribute("MatTm", "1808476380"); // 2
      DerivInstrmt_0_set.insert("1808476380");
      DerivInstrmt_0.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_197436837"); // 2
      DerivInstrmt_0_set.insert("DerivativeSettleOnOpenFlag_t_197436837");
      DerivInstrmt_0.add_attribute("AsgnMeth", "1629761203"); // 2
      DerivInstrmt_0_set.insert("1629761203");
      DerivInstrmt_0.add_attribute("Status", "2"); // 2
      DerivInstrmt_0_set.insert("2");
      DerivInstrmt_0.add_attribute("IssDt", "DerivativeIssueDate_t_177650536"); // 2
      DerivInstrmt_0_set.insert("DerivativeIssueDate_t_177650536");
      DerivInstrmt_0.add_attribute("Rgstry", "DerivativeInstrRegistry_t_1543544274"); // 2
      DerivInstrmt_0_set.insert("DerivativeInstrRegistry_t_1543544274");
      DerivInstrmt_0.add_attribute("Ctry", "1647460343"); // 2
      DerivInstrmt_0_set.insert("1647460343");
      DerivInstrmt_0.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_2131858011"); // 2
      DerivInstrmt_0_set.insert("DerivativeStateOrProvinceOfIssue_t_2131858011");
      DerivInstrmt_0.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_664717889"); // 2
      DerivInstrmt_0_set.insert("DerivativeLocaleOfIssue_t_664717889");
      DerivInstrmt_0.add_attribute("StrkPx", "12946978.360000"); // 2
      DerivInstrmt_0_set.insert("12946978.360000");
      DerivInstrmt_0.add_attribute("StrkCcy", "GBP"); // 2
      DerivInstrmt_0_set.insert("GBP");
      DerivInstrmt_0.add_attribute("StrkMult", "8372309.250000"); // 2
      DerivInstrmt_0_set.insert("8372309.250000");
      DerivInstrmt_0.add_attribute("StrkValu", "4747382.180000"); // 2
      DerivInstrmt_0_set.insert("4747382.180000");
      DerivInstrmt_0.add_attribute("OptAt", "131413386"); // 2
      DerivInstrmt_0_set.insert("131413386");
      DerivInstrmt_0.add_attribute("Mult", "1479707.260000"); // 2
      DerivInstrmt_0_set.insert("1479707.260000");
      DerivInstrmt_0.add_attribute("MultTyp", "2"); // 2
      DerivInstrmt_0_set.insert("2");
      DerivInstrmt_0.add_attribute("FlowSchedTyp", "0"); // 2
      DerivInstrmt_0_set.insert("0");
      DerivInstrmt_0.add_attribute("MinPxIncr", "10038268.090000"); // 2
      DerivInstrmt_0_set.insert("10038268.090000");
      DerivInstrmt_0.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_277691217"); // 2
      DerivInstrmt_0_set.insert("DerivativeMinPriceIncrementAmount_t_277691217");
      DerivInstrmt_0.add_attribute("UOM", "MMbbl"); // 2
      DerivInstrmt_0_set.insert("MMbbl");
      DerivInstrmt_0.add_attribute("UOMQty", "19299798.270000"); // 2
      DerivInstrmt_0_set.insert("19299798.270000");
      DerivInstrmt_0.add_attribute("PxUOM", "Bbl"); // 2
      DerivInstrmt_0_set.insert("Bbl");
      DerivInstrmt_0.add_attribute("PxUOMQty", "10293183.210000"); // 2
      DerivInstrmt_0_set.insert("10293183.210000");
      DerivInstrmt_0.add_attribute("SettlMeth", "P"); // 2
      DerivInstrmt_0_set.insert("P");
      DerivInstrmt_0.add_attribute("PxQteMeth", "STD"); // 2
      DerivInstrmt_0_set.insert("STD");
      DerivInstrmt_0.add_attribute("ValMeth", "FUT"); // 2
      DerivInstrmt_0_set.insert("FUT");
      DerivInstrmt_0.add_attribute("ListMeth", "1"); // 2
      DerivInstrmt_0_set.insert("1");
      DerivInstrmt_0.add_attribute("CapPx", "16706091.840000"); // 2
      DerivInstrmt_0_set.insert("16706091.840000");
      DerivInstrmt_0.add_attribute("FlrPx", "5853527.520000"); // 2
      DerivInstrmt_0_set.insert("5853527.520000");
      DerivInstrmt_0.add_attribute("PutCall", "1"); // 2
      DerivInstrmt_0_set.insert("1");
      DerivInstrmt_0.add_attribute("ExerStyle", "2"); // 2
      DerivInstrmt_0_set.insert("2");
      DerivInstrmt_0.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_782789590"); // 2
      DerivInstrmt_0_set.insert("DerivativeOptPayAmount_t_782789590");
      DerivInstrmt_0.add_attribute("TmUnit", "D"); // 2
      DerivInstrmt_0_set.insert("D");
      DerivInstrmt_0.add_attribute("Exch", "DerivativeSecurityExchange_t_996837580"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityExchange_t_996837580");
      DerivInstrmt_0.add_attribute("PosLmt", "960440126"); // 2
      DerivInstrmt_0_set.insert("960440126");
      DerivInstrmt_0.add_attribute("NTPosLmt", "153494376"); // 2
      DerivInstrmt_0_set.insert("153494376");
      DerivInstrmt_0.add_attribute("Issr", "DerivativeIssuer_t_496814275"); // 2
      DerivInstrmt_0_set.insert("DerivativeIssuer_t_496814275");
      DerivInstrmt_0.add_attribute("EncIssrLen", "944814490"); // 2
      DerivInstrmt_0_set.insert("944814490");
      DerivInstrmt_0.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_818212265"); // 2
      DerivInstrmt_0_set.insert("DerivativeEncodedIssuer_t_818212265");
      DerivInstrmt_0.add_attribute("Desc", "DerivativeSecurityDesc_t_1791512112"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityDesc_t_1791512112");
      DerivInstrmt_0.add_attribute("EncSecDescLen", "1007131064"); // 2
      DerivInstrmt_0_set.insert("1007131064");
      DerivInstrmt_0.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_1983028951"); // 2
      DerivInstrmt_0_set.insert("DerivativeEncodedSecurityDesc_t_1983028951");
      DerivInstrmt_0.add_attribute("CSetMo", "481259389"); // 2
      DerivInstrmt_0_set.insert("481259389");
      all_values.push_back(DerivInstrmt_0_set);
      all_compo_names.insert("DerivInstrmt_0_set");

      {
        xml_element AID_18{"AID"};
        multiset<string> AID_18_set;
        AID_18.add_attribute("ID", "DerivativeSecurityAltID_t_1481869282"); // 3
        AID_18_set.insert("DerivativeSecurityAltID_t_1481869282");
        AID_18.add_attribute("Src", "8"); // 3
        AID_18_set.insert("8");
        all_values.push_back(AID_18_set);
        all_compo_names.insert("AID_18_set");

        DerivInstrmt_0.add_element(AID_18);
      }
      {
        xml_element SecXML_18{"SecXML"};
        multiset<string> SecXML_18_set;
        SecXML_18.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_629230115"); // 3
        SecXML_18_set.insert("DerivativeSecurityXMLSchema_t_629230115");
        all_values.push_back(SecXML_18_set);
        all_compo_names.insert("SecXML_18_set");

        DerivInstrmt_0.add_element(SecXML_18);
      }
      {
        xml_element Evnt_18{"Evnt"};
        multiset<string> Evnt_18_set;
        Evnt_18.add_attribute("EventTyp", "14"); // 3
        Evnt_18_set.insert("14");
        Evnt_18.add_attribute("Dt", "DerivativeEventDate_t_1021589625"); // 3
        Evnt_18_set.insert("DerivativeEventDate_t_1021589625");
        Evnt_18.add_attribute("Tm", "DerivativeEventTime_t_1633056925"); // 3
        Evnt_18_set.insert("DerivativeEventTime_t_1633056925");
        Evnt_18.add_attribute("Px", "14411775.310000"); // 3
        Evnt_18_set.insert("14411775.310000");
        Evnt_18.add_attribute("Txt", "DerivativeEventText_t_1691562207"); // 3
        Evnt_18_set.insert("DerivativeEventText_t_1691562207");
        all_values.push_back(Evnt_18_set);
        all_compo_names.insert("Evnt_18_set");

        DerivInstrmt_0.add_element(Evnt_18);
      }
      {
        xml_element Pty_139{"Pty"};
        multiset<string> Pty_139_set;
        Pty_139.add_attribute("ID", "DerivativeInstrumentPartyID_t_1415553104"); // 3
        Pty_139_set.insert("DerivativeInstrumentPartyID_t_1415553104");
        Pty_139.add_attribute("Src", "3"); // 3
        Pty_139_set.insert("3");
        Pty_139.add_attribute("R", "36"); // 3
        Pty_139_set.insert("36");
        all_values.push_back(Pty_139_set);
        all_compo_names.insert("Pty_139_set");

        {
          xml_element Sub_139{"Sub"};
          multiset<string> Sub_139_set;
          Sub_139.add_attribute("ID", "DerivativeInstrumentPartySubID_t_1366735483"); // 4
          Sub_139_set.insert("DerivativeInstrumentPartySubID_t_1366735483");
          Sub_139.add_attribute("Typ", "26"); // 4
          Sub_139_set.insert("26");
          all_values.push_back(Sub_139_set);
          all_compo_names.insert("Sub_139_set");

          Pty_139.add_element(Sub_139);
        }
        DerivInstrmt_0.add_element(Pty_139);
      }
      DerivSecDef_0.add_element(DerivInstrmt_0);
    }
    {
      xml_element Attrb_4{"Attrb"};
      multiset<string> Attrb_4_set;
      Attrb_4.add_attribute("Typ", "9"); // 2
      Attrb_4_set.insert("9");
      Attrb_4.add_attribute("Val", "DerivativeInstrAttribValue_t_97654232"); // 2
      Attrb_4_set.insert("DerivativeInstrAttribValue_t_97654232");
      all_values.push_back(Attrb_4_set);
      all_compo_names.insert("Attrb_4_set");

      DerivSecDef_0.add_element(Attrb_4);
    }
    {
      xml_element MktSegGrp_0{"MktSegGrp"};
      multiset<string> MktSegGrp_0_set;
      MktSegGrp_0.add_attribute("MktID", "MarketID_t_555678989"); // 2
      MktSegGrp_0_set.insert("MarketID_t_555678989");
      MktSegGrp_0.add_attribute("MktSegID", "MarketSegmentID_t_1631812204"); // 2
      MktSegGrp_0_set.insert("MarketSegmentID_t_1631812204");
      all_values.push_back(MktSegGrp_0_set);
      all_compo_names.insert("MktSegGrp_0_set");

      {
        xml_element SecTrdgRules_0{"SecTrdgRules"};
        {
          xml_element BaseTrdgRules_0{"BaseTrdgRules"};
          multiset<string> BaseTrdgRules_0_set;
          BaseTrdgRules_0.add_attribute("ExpirationCycle", "2"); // 4
          BaseTrdgRules_0_set.insert("2");
          BaseTrdgRules_0.add_attribute("MinTrdVol", "18872809.060000"); // 4
          BaseTrdgRules_0_set.insert("18872809.060000");
          BaseTrdgRules_0.add_attribute("MaxTrdVol", "2671181.460000"); // 4
          BaseTrdgRules_0_set.insert("2671181.460000");
          BaseTrdgRules_0.add_attribute("MxPxVar", "21302441.770000"); // 4
          BaseTrdgRules_0_set.insert("21302441.770000");
          BaseTrdgRules_0.add_attribute("ImpldMktInd", "2"); // 4
          BaseTrdgRules_0_set.insert("2");
          BaseTrdgRules_0.add_attribute("TrdCcy", "USD"); // 4
          BaseTrdgRules_0_set.insert("USD");
          BaseTrdgRules_0.add_attribute("RndLot", "12334491.140000"); // 4
          BaseTrdgRules_0_set.insert("12334491.140000");
          BaseTrdgRules_0.add_attribute("MlegModel", "1"); // 4
          BaseTrdgRules_0_set.insert("1");
          BaseTrdgRules_0.add_attribute("MlegPxMeth", "5"); // 4
          BaseTrdgRules_0_set.insert("5");
          BaseTrdgRules_0.add_attribute("PxTyp", "5"); // 4
          BaseTrdgRules_0_set.insert("5");
          all_values.push_back(BaseTrdgRules_0_set);
          all_compo_names.insert("BaseTrdgRules_0_set");

          {
            xml_element TickRules_0{"TickRules"};
            multiset<string> TickRules_0_set;
            TickRules_0.add_attribute("StartTickPxRng", "10320201.780000"); // 5
            TickRules_0_set.insert("10320201.780000");
            TickRules_0.add_attribute("EndTickPxRng", "7900124.750000"); // 5
            TickRules_0_set.insert("7900124.750000");
            TickRules_0.add_attribute("TickIncr", "13587369.670000"); // 5
            TickRules_0_set.insert("13587369.670000");
            TickRules_0.add_attribute("TickRuleTyp", "2"); // 5
            TickRules_0_set.insert("2");
            all_values.push_back(TickRules_0_set);
            all_compo_names.insert("TickRules_0_set");

            BaseTrdgRules_0.add_element(TickRules_0);
          }
          {
            xml_element LotTypeRules_0{"LotTypeRules"};
            multiset<string> LotTypeRules_0_set;
            LotTypeRules_0.add_attribute("LotTyp", "1"); // 5
            LotTypeRules_0_set.insert("1");
            LotTypeRules_0.add_attribute("MinLotSz", "19879670.830000"); // 5
            LotTypeRules_0_set.insert("19879670.830000");
            all_values.push_back(LotTypeRules_0_set);
            all_compo_names.insert("LotTypeRules_0_set");

            BaseTrdgRules_0.add_element(LotTypeRules_0);
          }
          {
            xml_element PxLmts_0{"PxLmts"};
            multiset<string> PxLmts_0_set;
            PxLmts_0.add_attribute("PxLmtTyp", "0"); // 5
            PxLmts_0_set.insert("0");
            PxLmts_0.add_attribute("LowLmtPx", "17785607.890000"); // 5
            PxLmts_0_set.insert("17785607.890000");
            PxLmts_0.add_attribute("HiLmtPx", "14735403.600000"); // 5
            PxLmts_0_set.insert("14735403.600000");
            PxLmts_0.add_attribute("TrdgRefPx", "8235860.100000"); // 5
            PxLmts_0_set.insert("8235860.100000");
            all_values.push_back(PxLmts_0_set);
            all_compo_names.insert("PxLmts_0_set");

            BaseTrdgRules_0.add_element(PxLmts_0);
          }
          SecTrdgRules_0.add_element(BaseTrdgRules_0);
        }
        {
          xml_element TrdgSesRulesGrp_0{"TrdgSesRulesGrp"};
          multiset<string> TrdgSesRulesGrp_0_set;
          TrdgSesRulesGrp_0.add_attribute("SesID", "3"); // 4
          TrdgSesRulesGrp_0_set.insert("3");
          TrdgSesRulesGrp_0.add_attribute("SesSub", "4"); // 4
          TrdgSesRulesGrp_0_set.insert("4");
          all_values.push_back(TrdgSesRulesGrp_0_set);
          all_compo_names.insert("TrdgSesRulesGrp_0_set");

          {
            xml_element TrdgSesRules_0{"TrdgSesRules"};
            {
              xml_element OrdTypRules_0{"OrdTypRules"};
              multiset<string> OrdTypRules_0_set;
              OrdTypRules_0.add_attribute("OrdTyp", "3"); // 6
              OrdTypRules_0_set.insert("3");
              all_values.push_back(OrdTypRules_0_set);
              all_compo_names.insert("OrdTypRules_0_set");

              TrdgSesRules_0.add_element(OrdTypRules_0);
            }
            {
              xml_element TmInForceRules_0{"TmInForceRules"};
              multiset<string> TmInForceRules_0_set;
              TmInForceRules_0.add_attribute("TmInForce", "8"); // 6
              TmInForceRules_0_set.insert("8");
              all_values.push_back(TmInForceRules_0_set);
              all_compo_names.insert("TmInForceRules_0_set");

              TrdgSesRules_0.add_element(TmInForceRules_0);
            }
            {
              xml_element ExecInstRules_0{"ExecInstRules"};
              multiset<string> ExecInstRules_0_set;
              ExecInstRules_0.add_attribute("ExecInstValu", "a"); // 6
              ExecInstRules_0_set.insert("a");
              all_values.push_back(ExecInstRules_0_set);
              all_compo_names.insert("ExecInstRules_0_set");

              TrdgSesRules_0.add_element(ExecInstRules_0);
            }
            {
              xml_element MtchRules_0{"MtchRules"};
              multiset<string> MtchRules_0_set;
              MtchRules_0.add_attribute("MtchAlgo", "MatchAlgorithm_t_523551655"); // 6
              MtchRules_0_set.insert("MatchAlgorithm_t_523551655");
              MtchRules_0.add_attribute("MtchTyp", "5"); // 6
              MtchRules_0_set.insert("5");
              all_values.push_back(MtchRules_0_set);
              all_compo_names.insert("MtchRules_0_set");

              TrdgSesRules_0.add_element(MtchRules_0);
            }
            {
              xml_element MDFeedTyps_0{"MDFeedTyps"};
              multiset<string> MDFeedTyps_0_set;
              MDFeedTyps_0.add_attribute("MDFeedTyp", "MDFeedType_t_58515883"); // 6
              MDFeedTyps_0_set.insert("MDFeedType_t_58515883");
              MDFeedTyps_0.add_attribute("MktDepth", "1079230644"); // 6
              MDFeedTyps_0_set.insert("1079230644");
              MDFeedTyps_0.add_attribute("MDBkTyp", "2"); // 6
              MDFeedTyps_0_set.insert("2");
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
          Attrb_5.add_attribute("Typ", "1"); // 4
          Attrb_5_set.insert("1");
          Attrb_5.add_attribute("Val", "NestedInstrAttribValue_t_819027902"); // 4
          Attrb_5_set.insert("NestedInstrAttribValue_t_819027902");
          all_values.push_back(Attrb_5_set);
          all_compo_names.insert("Attrb_5_set");

          SecTrdgRules_0.add_element(Attrb_5);
        }
        MktSegGrp_0.add_element(SecTrdgRules_0);
      }
      {
        xml_element StrkRules_0{"StrkRules"};
        multiset<string> StrkRules_0_set;
        StrkRules_0.add_attribute("StrkRule", "StrikeRuleID_t_546458734"); // 3
        StrkRules_0_set.insert("StrikeRuleID_t_546458734");
        StrkRules_0.add_attribute("StartStrkPxRng", "14140868.390000"); // 3
        StrkRules_0_set.insert("14140868.390000");
        StrkRules_0.add_attribute("EndStrkPxRng", "15556627.400000"); // 3
        StrkRules_0_set.insert("15556627.400000");
        StrkRules_0.add_attribute("StrkIncr", "17740170.060000"); // 3
        StrkRules_0_set.insert("17740170.060000");
        StrkRules_0.add_attribute("StrkExrStyle", "2"); // 3
        StrkRules_0_set.insert("2");
        all_values.push_back(StrkRules_0_set);
        all_compo_names.insert("StrkRules_0_set");

        {
          xml_element MatRules_0{"MatRules"};
          multiset<string> MatRules_0_set;
          MatRules_0.add_attribute("MatRuleID", "MaturityRuleID_t_641628206"); // 4
          MatRules_0_set.insert("MaturityRuleID_t_641628206");
          MatRules_0.add_attribute("MMYFmt", "2"); // 4
          MatRules_0_set.insert("2");
          MatRules_0.add_attribute("MMYIncrUnits", "1"); // 4
          MatRules_0_set.insert("1");
          MatRules_0.add_attribute("StartMMY", "1519105784"); // 4
          MatRules_0_set.insert("1519105784");
          MatRules_0.add_attribute("EndMMY", "683442651"); // 4
          MatRules_0_set.insert("683442651");
          MatRules_0.add_attribute("MMYIncr", "1147337744"); // 4
          MatRules_0_set.insert("1147337744");
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
    RelSym_0.add_attribute("Ccy", "USD"); // 1
    RelSym_0_set.insert("USD");
    RelSym_0.add_attribute("CorpActn", "T"); // 1
    RelSym_0_set.insert("T");
    RelSym_0.add_attribute("TxnTm", "RelSymTransactTime_t_432256942"); // 1
    RelSym_0_set.insert("RelSymTransactTime_t_432256942");
    RelSym_0.add_attribute("Txt", "Text_t_1535386050"); // 1
    RelSym_0_set.insert("Text_t_1535386050");
    RelSym_0.add_attribute("EncTxtLen", "2044382899"); // 1
    RelSym_0_set.insert("2044382899");
    RelSym_0.add_attribute("EncTxt", "EncodedText_t_1255842952"); // 1
    RelSym_0_set.insert("EncodedText_t_1255842952");
    all_values.push_back(RelSym_0_set);
    all_compo_names.insert("RelSym_0_set");

    {
      xml_element Instrmt_18{"Instrmt"};
      multiset<string> Instrmt_18_set;
      Instrmt_18.add_attribute("Sym", "Symbol_t_710541750"); // 2
      Instrmt_18_set.insert("Symbol_t_710541750");
      Instrmt_18.add_attribute("Sfx", "WI"); // 2
      Instrmt_18_set.insert("WI");
      Instrmt_18.add_attribute("ID", "SecurityID_t_746841155"); // 2
      Instrmt_18_set.insert("SecurityID_t_746841155");
      Instrmt_18.add_attribute("Src", "4"); // 2
      Instrmt_18_set.insert("4");
      Instrmt_18.add_attribute("Prod", "8"); // 2
      Instrmt_18_set.insert("8");
      Instrmt_18.add_attribute("ProdCmplx", "ProductComplex_t_1270392810"); // 2
      Instrmt_18_set.insert("ProductComplex_t_1270392810");
      Instrmt_18.add_attribute("SecGrp", "SecurityGroup_t_1254106363"); // 2
      Instrmt_18_set.insert("SecurityGroup_t_1254106363");
      Instrmt_18.add_attribute("CFI", "CFICode_t_657886601"); // 2
      Instrmt_18_set.insert("CFICode_t_657886601");
      Instrmt_18.add_attribute("SecTyp", "EUCD"); // 2
      Instrmt_18_set.insert("EUCD");
      Instrmt_18.add_attribute("SubTyp", "SecuritySubType_t_1533446951"); // 2
      Instrmt_18_set.insert("SecuritySubType_t_1533446951");
      Instrmt_18.add_attribute("MMY", "2089212911"); // 2
      Instrmt_18_set.insert("2089212911");
      Instrmt_18.add_attribute("MatDt", "MaturityDate_t_1021167708"); // 2
      Instrmt_18_set.insert("MaturityDate_t_1021167708");
      Instrmt_18.add_attribute("MatTm", "2079905685"); // 2
      Instrmt_18_set.insert("2079905685");
      Instrmt_18.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1355816102"); // 2
      Instrmt_18_set.insert("SettleOnOpenFlag_t_1355816102");
      Instrmt_18.add_attribute("AsgnMeth", "429346800"); // 2
      Instrmt_18_set.insert("429346800");
      Instrmt_18.add_attribute("Status", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("CpnPmt", "CouponPaymentDate_t_758674200"); // 2
      Instrmt_18_set.insert("CouponPaymentDate_t_758674200");
      Instrmt_18.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_18_set.insert("XR");
      Instrmt_18.add_attribute("Snrty", "SR"); // 2
      Instrmt_18_set.insert("SR");
      Instrmt_18.add_attribute("NotlPctOut", "11159994.690000"); // 2
      Instrmt_18_set.insert("11159994.690000");
      Instrmt_18.add_attribute("OrigNotlPctOut", "4425971.430000"); // 2
      Instrmt_18_set.insert("4425971.430000");
      Instrmt_18.add_attribute("AttchPnt", "20413041.680000"); // 2
      Instrmt_18_set.insert("20413041.680000");
      Instrmt_18.add_attribute("DetchPnt", "1158535.650000"); // 2
      Instrmt_18_set.insert("1158535.650000");
      Instrmt_18.add_attribute("Issued", "IssueDate_t_1172956247"); // 2
      Instrmt_18_set.insert("IssueDate_t_1172956247");
      Instrmt_18.add_attribute("RepoCollSecTyp", "943668984"); // 2
      Instrmt_18_set.insert("943668984");
      Instrmt_18.add_attribute("RepoTrm", "2020162473"); // 2
      Instrmt_18_set.insert("2020162473");
      Instrmt_18.add_attribute("RepoRt", "17437987.860000"); // 2
      Instrmt_18_set.insert("17437987.860000");
      Instrmt_18.add_attribute("Fctr", "13759259.260000"); // 2
      Instrmt_18_set.insert("13759259.260000");
      Instrmt_18.add_attribute("CrdRtg", "CreditRating_t_1408064875"); // 2
      Instrmt_18_set.insert("CreditRating_t_1408064875");
      Instrmt_18.add_attribute("Rgstry", "InstrRegistry_t_1640698037"); // 2
      Instrmt_18_set.insert("InstrRegistry_t_1640698037");
      Instrmt_18.add_attribute("IssuCtry", "484285231"); // 2
      Instrmt_18_set.insert("484285231");
      Instrmt_18.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2118606626"); // 2
      Instrmt_18_set.insert("StateOrProvinceOfIssue_t_2118606626");
      Instrmt_18.add_attribute("Lcl", "LocaleOfIssue_t_131723456"); // 2
      Instrmt_18_set.insert("LocaleOfIssue_t_131723456");
      Instrmt_18.add_attribute("Redeem", "RedemptionDate_t_1231126386"); // 2
      Instrmt_18_set.insert("RedemptionDate_t_1231126386");
      Instrmt_18.add_attribute("StrkPx", "4302173.090000"); // 2
      Instrmt_18_set.insert("4302173.090000");
      Instrmt_18.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_18_set.insert("JPY");
      Instrmt_18.add_attribute("StrkMult", "16843236.720000"); // 2
      Instrmt_18_set.insert("16843236.720000");
      Instrmt_18.add_attribute("StrkValu", "13889807.750000"); // 2
      Instrmt_18_set.insert("13889807.750000");
      Instrmt_18.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_18_set.insert("3");
      Instrmt_18.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("StrkPxBndryPrcsn", "13307100.380000"); // 2
      Instrmt_18_set.insert("13307100.380000");
      Instrmt_18.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_18_set.insert("3");
      Instrmt_18.add_attribute("OptAt", "1002709012"); // 2
      Instrmt_18_set.insert("1002709012");
      Instrmt_18.add_attribute("Mult", "5390424.930000"); // 2
      Instrmt_18_set.insert("5390424.930000");
      Instrmt_18.add_attribute("MultTyp", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("MinPxIncr", "12977166.930000"); // 2
      Instrmt_18_set.insert("12977166.930000");
      Instrmt_18.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_930181221"); // 2
      Instrmt_18_set.insert("MinPriceIncrementAmount_t_930181221");
      Instrmt_18.add_attribute("UOM", "t"); // 2
      Instrmt_18_set.insert("t");
      Instrmt_18.add_attribute("UOMQty", "2662325.140000"); // 2
      Instrmt_18_set.insert("2662325.140000");
      Instrmt_18.add_attribute("PxUOM", "Bcf"); // 2
      Instrmt_18_set.insert("Bcf");
      Instrmt_18.add_attribute("PxUOMQty", "18133464.440000"); // 2
      Instrmt_18_set.insert("18133464.440000");
      Instrmt_18.add_attribute("SettlMeth", "P"); // 2
      Instrmt_18_set.insert("P");
      Instrmt_18.add_attribute("ExerStyle", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("OptPayAmt", "OptPayoutAmount_t_254764904"); // 2
      Instrmt_18_set.insert("OptPayoutAmount_t_254764904");
      Instrmt_18.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_18_set.insert("PCTPAR");
      Instrmt_18.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_18_set.insert("FUT");
      Instrmt_18.add_attribute("ListMeth", "0"); // 2
      Instrmt_18_set.insert("0");
      Instrmt_18.add_attribute("CapPx", "16352641.400000"); // 2
      Instrmt_18_set.insert("16352641.400000");
      Instrmt_18.add_attribute("FlrPx", "3222592.890000"); // 2
      Instrmt_18_set.insert("3222592.890000");
      Instrmt_18.add_attribute("PutCall", "0"); // 2
      Instrmt_18_set.insert("0");
      Instrmt_18.add_attribute("FlexInd", "false"); // 2
      Instrmt_18_set.insert("false");
      Instrmt_18.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_18_set.insert("false");
      Instrmt_18.add_attribute("TmUnit", "Min"); // 2
      Instrmt_18_set.insert("Min");
      Instrmt_18.add_attribute("CpnRt", "3505981.230000"); // 2
      Instrmt_18_set.insert("3505981.230000");
      Instrmt_18.add_attribute("Exch", "SecurityExchange_t_1907421223"); // 2
      Instrmt_18_set.insert("SecurityExchange_t_1907421223");
      Instrmt_18.add_attribute("PosLmt", "1601010091"); // 2
      Instrmt_18_set.insert("1601010091");
      Instrmt_18.add_attribute("NTPosLmt", "1739578899"); // 2
      Instrmt_18_set.insert("1739578899");
      Instrmt_18.add_attribute("Issr", "Issuer_t_316112929"); // 2
      Instrmt_18_set.insert("Issuer_t_316112929");
      Instrmt_18.add_attribute("EncIssrLen", "523813418"); // 2
      Instrmt_18_set.insert("523813418");
      Instrmt_18.add_attribute("EncIssr", "EncodedIssuer_t_922805289"); // 2
      Instrmt_18_set.insert("EncodedIssuer_t_922805289");
      Instrmt_18.add_attribute("Desc", "SecurityDesc_t_1893455991"); // 2
      Instrmt_18_set.insert("SecurityDesc_t_1893455991");
      Instrmt_18.add_attribute("EncSecDescLen", "1526522430"); // 2
      Instrmt_18_set.insert("1526522430");
      Instrmt_18.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1461847782"); // 2
      Instrmt_18_set.insert("EncodedSecurityDesc_t_1461847782");
      Instrmt_18.add_attribute("Pool", "Pool_t_1752662206"); // 2
      Instrmt_18_set.insert("Pool_t_1752662206");
      Instrmt_18.add_attribute("CSetMo", "2088186837"); // 2
      Instrmt_18_set.insert("2088186837");
      Instrmt_18.add_attribute("CPPgm", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("CPRegT", "CPRegType_t_535359779"); // 2
      Instrmt_18_set.insert("CPRegType_t_535359779");
      Instrmt_18.add_attribute("Dated", "DatedDate_t_1860229113"); // 2
      Instrmt_18_set.insert("DatedDate_t_1860229113");
      Instrmt_18.add_attribute("IntAcrl", "InterestAccrualDate_t_878313341"); // 2
      Instrmt_18_set.insert("InterestAccrualDate_t_878313341");
      all_values.push_back(Instrmt_18_set);
      all_compo_names.insert("Instrmt_18_set");

      {
        xml_element AID_19{"AID"};
        multiset<string> AID_19_set;
        AID_19.add_attribute("AltID", "SecurityAltID_t_1908138144"); // 3
        AID_19_set.insert("SecurityAltID_t_1908138144");
        AID_19.add_attribute("AltIDSrc", "2"); // 3
        AID_19_set.insert("2");
        all_values.push_back(AID_19_set);
        all_compo_names.insert("AID_19_set");

        Instrmt_18.add_element(AID_19);
      }
      {
        xml_element SecXML_19{"SecXML"};
        multiset<string> SecXML_19_set;
        SecXML_19.add_attribute("Schema", "SecurityXMLSchema_t_1260399420"); // 3
        SecXML_19_set.insert("SecurityXMLSchema_t_1260399420");
        all_values.push_back(SecXML_19_set);
        all_compo_names.insert("SecXML_19_set");

        Instrmt_18.add_element(SecXML_19);
      }
      {
        xml_element Evnt_19{"Evnt"};
        multiset<string> Evnt_19_set;
        Evnt_19.add_attribute("EventTyp", "2"); // 3
        Evnt_19_set.insert("2");
        Evnt_19.add_attribute("Dt", "EventDate_t_2135623689"); // 3
        Evnt_19_set.insert("EventDate_t_2135623689");
        Evnt_19.add_attribute("Tm", "EventTime_t_1515164325"); // 3
        Evnt_19_set.insert("EventTime_t_1515164325");
        Evnt_19.add_attribute("Px", "1534715.640000"); // 3
        Evnt_19_set.insert("1534715.640000");
        Evnt_19.add_attribute("Txt", "EventText_t_1973597748"); // 3
        Evnt_19_set.insert("EventText_t_1973597748");
        all_values.push_back(Evnt_19_set);
        all_compo_names.insert("Evnt_19_set");

        Instrmt_18.add_element(Evnt_19);
      }
      {
        xml_element Pty_140{"Pty"};
        multiset<string> Pty_140_set;
        Pty_140.add_attribute("ID", "InstrumentPartyID_t_1030510457"); // 3
        Pty_140_set.insert("InstrumentPartyID_t_1030510457");
        Pty_140.add_attribute("Src", "F"); // 3
        Pty_140_set.insert("F");
        Pty_140.add_attribute("R", "75"); // 3
        Pty_140_set.insert("75");
        all_values.push_back(Pty_140_set);
        all_compo_names.insert("Pty_140_set");

        {
          xml_element Sub_140{"Sub"};
          multiset<string> Sub_140_set;
          Sub_140.add_attribute("ID", "InstrumentPartySubID_t_516979567"); // 4
          Sub_140_set.insert("InstrumentPartySubID_t_516979567");
          Sub_140.add_attribute("Typ", "30"); // 4
          Sub_140_set.insert("30");
          all_values.push_back(Sub_140_set);
          all_compo_names.insert("Sub_140_set");

          Pty_140.add_element(Sub_140);
        }
        Instrmt_18.add_element(Pty_140);
      }
      {
        xml_element CmplxEvnt_18{"CmplxEvnt"};
        multiset<string> CmplxEvnt_18_set;
        CmplxEvnt_18.add_attribute("Typ", "6"); // 3
        CmplxEvnt_18_set.insert("6");
        CmplxEvnt_18.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_433665986"); // 3
        CmplxEvnt_18_set.insert("ComplexOptPayoutAmount_t_433665986");
        CmplxEvnt_18.add_attribute("Px", "17588377.770000"); // 3
        CmplxEvnt_18_set.insert("17588377.770000");
        CmplxEvnt_18.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_18_set.insert("1");
        CmplxEvnt_18.add_attribute("PxBndryPrcsn", "20346760.770000"); // 3
        CmplxEvnt_18_set.insert("20346760.770000");
        CmplxEvnt_18.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_18_set.insert("2");
        CmplxEvnt_18.add_attribute("Cond", "1"); // 3
        CmplxEvnt_18_set.insert("1");
        all_values.push_back(CmplxEvnt_18_set);
        all_compo_names.insert("CmplxEvnt_18_set");

        {
          xml_element EvntDts_18{"EvntDts"};
          multiset<string> EvntDts_18_set;
          EvntDts_18.add_attribute("StartDt", "ComplexEventStartDate_t_411005847"); // 4
          EvntDts_18_set.insert("ComplexEventStartDate_t_411005847");
          EvntDts_18.add_attribute("EndDt", "ComplexEventEndDate_t_126254669"); // 4
          EvntDts_18_set.insert("ComplexEventEndDate_t_126254669");
          all_values.push_back(EvntDts_18_set);
          all_compo_names.insert("EvntDts_18_set");

          {
            xml_element EvntTms_18{"EvntTms"};
            multiset<string> EvntTms_18_set;
            EvntTms_18.add_attribute("StartTm", "1523781913"); // 5
            EvntTms_18_set.insert("1523781913");
            EvntTms_18.add_attribute("EndTm", "1937528277"); // 5
            EvntTms_18_set.insert("1937528277");
            all_values.push_back(EvntTms_18_set);
            all_compo_names.insert("EvntTms_18_set");

            EvntDts_18.add_element(EvntTms_18);
          }
          CmplxEvnt_18.add_element(EvntDts_18);
        }
        Instrmt_18.add_element(CmplxEvnt_18);
      }
      RelSym_0.add_element(Instrmt_18);
    }
    {
      xml_element PxLmts2_0{"PxLmts2"};
      multiset<string> PxLmts2_0_set;
      PxLmts2_0.add_attribute("PxLmtTyp", "0"); // 2
      PxLmts2_0_set.insert("0");
      PxLmts2_0.add_attribute("LowLmtPx", "11289604.710000"); // 2
      PxLmts2_0_set.insert("11289604.710000");
      PxLmts2_0.add_attribute("HiLmtPx", "18782314.660000"); // 2
      PxLmts2_0_set.insert("18782314.660000");
      PxLmts2_0.add_attribute("TrdgRefPx", "526996.310000"); // 2
      PxLmts2_0_set.insert("526996.310000");
      all_values.push_back(PxLmts2_0_set);
      all_compo_names.insert("PxLmts2_0_set");

      RelSym_0.add_element(PxLmts2_0);
    }
    {
      xml_element InstrmtExt_4{"InstrmtExt"};
      multiset<string> InstrmtExt_4_set;
      InstrmtExt_4.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_4_set.insert("2");
      InstrmtExt_4.add_attribute("PctAtRisk", "15909769.320000"); // 2
      InstrmtExt_4_set.insert("15909769.320000");
      all_values.push_back(InstrmtExt_4_set);
      all_compo_names.insert("InstrmtExt_4_set");

      {
        xml_element Attrb_6{"Attrb"};
        multiset<string> Attrb_6_set;
        Attrb_6.add_attribute("Typ", "23"); // 3
        Attrb_6_set.insert("23");
        Attrb_6.add_attribute("Val", "InstrAttribValue_t_1424974747"); // 3
        Attrb_6_set.insert("InstrAttribValue_t_1424974747");
        all_values.push_back(Attrb_6_set);
        all_compo_names.insert("Attrb_6_set");

        InstrmtExt_4.add_element(Attrb_6);
      }
      RelSym_0.add_element(InstrmtExt_4);
    }
    {
      xml_element Leg_29{"Leg"};
      multiset<string> Leg_29_set;
      Leg_29.add_attribute("Sym", "LegSymbol_t_969585193"); // 2
      Leg_29_set.insert("LegSymbol_t_969585193");
      Leg_29.add_attribute("Sfx", "WI"); // 2
      Leg_29_set.insert("WI");
      Leg_29.add_attribute("ID", "LegSecurityID_t_1583880208"); // 2
      Leg_29_set.insert("LegSecurityID_t_1583880208");
      Leg_29.add_attribute("Src", "6"); // 2
      Leg_29_set.insert("6");
      Leg_29.add_attribute("Prod", "11"); // 2
      Leg_29_set.insert("11");
      Leg_29.add_attribute("CFI", "LegCFICode_t_1737351772"); // 2
      Leg_29_set.insert("LegCFICode_t_1737351772");
      Leg_29.add_attribute("SecTyp", "EUSOV"); // 2
      Leg_29_set.insert("EUSOV");
      Leg_29.add_attribute("SecSubTyp", "LegSecuritySubType_t_442119879"); // 2
      Leg_29_set.insert("LegSecuritySubType_t_442119879");
      Leg_29.add_attribute("MMY", "1378603829"); // 2
      Leg_29_set.insert("1378603829");
      Leg_29.add_attribute("Mat", "LegMaturityDate_t_932212724"); // 2
      Leg_29_set.insert("LegMaturityDate_t_932212724");
      Leg_29.add_attribute("MatTm", "959099446"); // 2
      Leg_29_set.insert("959099446");
      Leg_29.add_attribute("CpnPmt", "LegCouponPaymentDate_t_639359834"); // 2
      Leg_29_set.insert("LegCouponPaymentDate_t_639359834");
      Leg_29.add_attribute("Issued", "LegIssueDate_t_486488141"); // 2
      Leg_29_set.insert("LegIssueDate_t_486488141");
      Leg_29.add_attribute("RepoCollSecTyp", "1392765432"); // 2
      Leg_29_set.insert("1392765432");
      Leg_29.add_attribute("RepoTrm", "250713963"); // 2
      Leg_29_set.insert("250713963");
      Leg_29.add_attribute("RepoRt", "19481847.820000"); // 2
      Leg_29_set.insert("19481847.820000");
      Leg_29.add_attribute("Fctr", "12799578.610000"); // 2
      Leg_29_set.insert("12799578.610000");
      Leg_29.add_attribute("CrdRtg", "LegCreditRating_t_1601646991"); // 2
      Leg_29_set.insert("LegCreditRating_t_1601646991");
      Leg_29.add_attribute("Rgstry", "LegInstrRegistry_t_1578510704"); // 2
      Leg_29_set.insert("LegInstrRegistry_t_1578510704");
      Leg_29.add_attribute("Ctry", "1690963708"); // 2
      Leg_29_set.insert("1690963708");
      Leg_29.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1727901661"); // 2
      Leg_29_set.insert("LegStateOrProvinceOfIssue_t_1727901661");
      Leg_29.add_attribute("Lcl", "LegLocaleOfIssue_t_954808969"); // 2
      Leg_29_set.insert("LegLocaleOfIssue_t_954808969");
      Leg_29.add_attribute("Redeem", "LegRedemptionDate_t_1481008337"); // 2
      Leg_29_set.insert("LegRedemptionDate_t_1481008337");
      Leg_29.add_attribute("Strk", "11685204.650000"); // 2
      Leg_29_set.insert("11685204.650000");
      Leg_29.add_attribute("StrkCcy", "GBP"); // 2
      Leg_29_set.insert("GBP");
      Leg_29.add_attribute("OptA", "1221220096"); // 2
      Leg_29_set.insert("1221220096");
      Leg_29.add_attribute("Cmult", "16006060.440000"); // 2
      Leg_29_set.insert("16006060.440000");
      Leg_29.add_attribute("MultTyp", "0"); // 2
      Leg_29_set.insert("0");
      Leg_29.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_29_set.insert("1");
      Leg_29.add_attribute("UOM", "MMBtu"); // 2
      Leg_29_set.insert("MMBtu");
      Leg_29.add_attribute("UOMQty", "16248346.330000"); // 2
      Leg_29_set.insert("16248346.330000");
      Leg_29.add_attribute("PxUOM", "tn"); // 2
      Leg_29_set.insert("tn");
      Leg_29.add_attribute("PxUOMQty", "3144937.040000"); // 2
      Leg_29_set.insert("3144937.040000");
      Leg_29.add_attribute("TmUnit", "Mo"); // 2
      Leg_29_set.insert("Mo");
      Leg_29.add_attribute("ExerStyle", "2"); // 2
      Leg_29_set.insert("2");
      Leg_29.add_attribute("CpnRt", "20518454.760000"); // 2
      Leg_29_set.insert("20518454.760000");
      Leg_29.add_attribute("Exch", "LegSecurityExchange_t_1218915555"); // 2
      Leg_29_set.insert("LegSecurityExchange_t_1218915555");
      Leg_29.add_attribute("Issr", "LegIssuer_t_2049891117"); // 2
      Leg_29_set.insert("LegIssuer_t_2049891117");
      Leg_29.add_attribute("EncLegIssrLen", "1282965657"); // 2
      Leg_29_set.insert("1282965657");
      Leg_29.add_attribute("EncLegIssr", "EncodedLegIssuer_t_3644632"); // 2
      Leg_29_set.insert("EncodedLegIssuer_t_3644632");
      Leg_29.add_attribute("Desc", "LegSecurityDesc_t_861506915"); // 2
      Leg_29_set.insert("LegSecurityDesc_t_861506915");
      Leg_29.add_attribute("EncLegSecDescLen", "1922325492"); // 2
      Leg_29_set.insert("1922325492");
      Leg_29.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_490132773"); // 2
      Leg_29_set.insert("EncodedLegSecurityDesc_t_490132773");
      Leg_29.add_attribute("RatioQty", "1067887.000000"); // 2
      Leg_29_set.insert("1067887.000000");
      Leg_29.add_attribute("Side", "G"); // 2
      Leg_29_set.insert("G");
      Leg_29.add_attribute("Ccy", "CAN"); // 2
      Leg_29_set.insert("CAN");
      Leg_29.add_attribute("Pool", "LegPool_t_1627202799"); // 2
      Leg_29_set.insert("LegPool_t_1627202799");
      Leg_29.add_attribute("Dated", "LegDatedDate_t_1869344611"); // 2
      Leg_29_set.insert("LegDatedDate_t_1869344611");
      Leg_29.add_attribute("CSetMo", "930226622"); // 2
      Leg_29_set.insert("930226622");
      Leg_29.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1207620812"); // 2
      Leg_29_set.insert("LegInterestAccrualDate_t_1207620812");
      Leg_29.add_attribute("PutCall", "676669933"); // 2
      Leg_29_set.insert("676669933");
      Leg_29.add_attribute("LegOptionRatio", "2637513.110000"); // 2
      Leg_29_set.insert("2637513.110000");
      Leg_29.add_attribute("Px", "2286576.290000"); // 2
      Leg_29_set.insert("2286576.290000");
      all_values.push_back(Leg_29_set);
      all_compo_names.insert("Leg_29_set");

      {
        xml_element LegAID_29{"LegAID"};
        multiset<string> LegAID_29_set;
        LegAID_29.add_attribute("SecAltID", "LegSecurityAltID_t_612955726"); // 3
        LegAID_29_set.insert("LegSecurityAltID_t_612955726");
        LegAID_29.add_attribute("SecAltIDSrc", "6"); // 3
        LegAID_29_set.insert("6");
        all_values.push_back(LegAID_29_set);
        all_compo_names.insert("LegAID_29_set");

        Leg_29.add_element(LegAID_29);
      }
      RelSym_0.add_element(Leg_29);
    }
    elt.add_element(RelSym_0);
  } // end RelSym
  { // RelSym
    xml_element RelSym_1{"RelSym"};
    multiset<string> RelSym_1_set;
    RelSym_1.add_attribute("Ccy", "GBP"); // 1
    RelSym_1_set.insert("GBP");
    RelSym_1.add_attribute("CorpActn", "P"); // 1
    RelSym_1_set.insert("P");
    RelSym_1.add_attribute("TxnTm", "RelSymTransactTime_t_1454627147"); // 1
    RelSym_1_set.insert("RelSymTransactTime_t_1454627147");
    RelSym_1.add_attribute("Txt", "Text_t_944175265"); // 1
    RelSym_1_set.insert("Text_t_944175265");
    RelSym_1.add_attribute("EncTxtLen", "1608107893"); // 1
    RelSym_1_set.insert("1608107893");
    RelSym_1.add_attribute("EncTxt", "EncodedText_t_1503305314"); // 1
    RelSym_1_set.insert("EncodedText_t_1503305314");
    all_values.push_back(RelSym_1_set);
    all_compo_names.insert("RelSym_1_set");

    {
      xml_element Instrmt_19{"Instrmt"};
      multiset<string> Instrmt_19_set;
      Instrmt_19.add_attribute("Sym", "Symbol_t_1258668969"); // 2
      Instrmt_19_set.insert("Symbol_t_1258668969");
      Instrmt_19.add_attribute("Sfx", "WI"); // 2
      Instrmt_19_set.insert("WI");
      Instrmt_19.add_attribute("ID", "SecurityID_t_963592903"); // 2
      Instrmt_19_set.insert("SecurityID_t_963592903");
      Instrmt_19.add_attribute("Src", "7"); // 2
      Instrmt_19_set.insert("7");
      Instrmt_19.add_attribute("Prod", "9"); // 2
      Instrmt_19_set.insert("9");
      Instrmt_19.add_attribute("ProdCmplx", "ProductComplex_t_866000372"); // 2
      Instrmt_19_set.insert("ProductComplex_t_866000372");
      Instrmt_19.add_attribute("SecGrp", "SecurityGroup_t_298512807"); // 2
      Instrmt_19_set.insert("SecurityGroup_t_298512807");
      Instrmt_19.add_attribute("CFI", "CFICode_t_1118260653"); // 2
      Instrmt_19_set.insert("CFICode_t_1118260653");
      Instrmt_19.add_attribute("SecTyp", "FORWARD"); // 2
      Instrmt_19_set.insert("FORWARD");
      Instrmt_19.add_attribute("SubTyp", "SecuritySubType_t_73354651"); // 2
      Instrmt_19_set.insert("SecuritySubType_t_73354651");
      Instrmt_19.add_attribute("MMY", "1608393426"); // 2
      Instrmt_19_set.insert("1608393426");
      Instrmt_19.add_attribute("MatDt", "MaturityDate_t_1834295988"); // 2
      Instrmt_19_set.insert("MaturityDate_t_1834295988");
      Instrmt_19.add_attribute("MatTm", "98910459"); // 2
      Instrmt_19_set.insert("98910459");
      Instrmt_19.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1899227334"); // 2
      Instrmt_19_set.insert("SettleOnOpenFlag_t_1899227334");
      Instrmt_19.add_attribute("AsgnMeth", "1073558901"); // 2
      Instrmt_19_set.insert("1073558901");
      Instrmt_19.add_attribute("Status", "1"); // 2
      Instrmt_19_set.insert("1");
      Instrmt_19.add_attribute("CpnPmt", "CouponPaymentDate_t_1621088297"); // 2
      Instrmt_19_set.insert("CouponPaymentDate_t_1621088297");
      Instrmt_19.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_19_set.insert("XR");
      Instrmt_19.add_attribute("Snrty", "SD"); // 2
      Instrmt_19_set.insert("SD");
      Instrmt_19.add_attribute("NotlPctOut", "1502745.820000"); // 2
      Instrmt_19_set.insert("1502745.820000");
      Instrmt_19.add_attribute("OrigNotlPctOut", "1200531.870000"); // 2
      Instrmt_19_set.insert("1200531.870000");
      Instrmt_19.add_attribute("AttchPnt", "10149080.510000"); // 2
      Instrmt_19_set.insert("10149080.510000");
      Instrmt_19.add_attribute("DetchPnt", "7632303.080000"); // 2
      Instrmt_19_set.insert("7632303.080000");
      Instrmt_19.add_attribute("Issued", "IssueDate_t_1595560654"); // 2
      Instrmt_19_set.insert("IssueDate_t_1595560654");
      Instrmt_19.add_attribute("RepoCollSecTyp", "317302128"); // 2
      Instrmt_19_set.insert("317302128");
      Instrmt_19.add_attribute("RepoTrm", "829308430"); // 2
      Instrmt_19_set.insert("829308430");
      Instrmt_19.add_attribute("RepoRt", "15788339.140000"); // 2
      Instrmt_19_set.insert("15788339.140000");
      Instrmt_19.add_attribute("Fctr", "17719292.750000"); // 2
      Instrmt_19_set.insert("17719292.750000");
      Instrmt_19.add_attribute("CrdRtg", "CreditRating_t_1773483696"); // 2
      Instrmt_19_set.insert("CreditRating_t_1773483696");
      Instrmt_19.add_attribute("Rgstry", "InstrRegistry_t_1039458159"); // 2
      Instrmt_19_set.insert("InstrRegistry_t_1039458159");
      Instrmt_19.add_attribute("IssuCtry", "1127750941"); // 2
      Instrmt_19_set.insert("1127750941");
      Instrmt_19.add_attribute("StPrv", "StateOrProvinceOfIssue_t_884669017"); // 2
      Instrmt_19_set.insert("StateOrProvinceOfIssue_t_884669017");
      Instrmt_19.add_attribute("Lcl", "LocaleOfIssue_t_935158624"); // 2
      Instrmt_19_set.insert("LocaleOfIssue_t_935158624");
      Instrmt_19.add_attribute("Redeem", "RedemptionDate_t_2091343845"); // 2
      Instrmt_19_set.insert("RedemptionDate_t_2091343845");
      Instrmt_19.add_attribute("StrkPx", "20476998.150000"); // 2
      Instrmt_19_set.insert("20476998.150000");
      Instrmt_19.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_19_set.insert("CHF");
      Instrmt_19.add_attribute("StrkMult", "1987289.750000"); // 2
      Instrmt_19_set.insert("1987289.750000");
      Instrmt_19.add_attribute("StrkValu", "10205516.500000"); // 2
      Instrmt_19_set.insert("10205516.500000");
      Instrmt_19.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("StrkPxBndryPrcsn", "4814614.290000"); // 2
      Instrmt_19_set.insert("4814614.290000");
      Instrmt_19.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("OptAt", "370994085"); // 2
      Instrmt_19_set.insert("370994085");
      Instrmt_19.add_attribute("Mult", "2332051.150000"); // 2
      Instrmt_19_set.insert("2332051.150000");
      Instrmt_19.add_attribute("MultTyp", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_19_set.insert("3");
      Instrmt_19.add_attribute("MinPxIncr", "18542934.120000"); // 2
      Instrmt_19_set.insert("18542934.120000");
      Instrmt_19.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1006557326"); // 2
      Instrmt_19_set.insert("MinPriceIncrementAmount_t_1006557326");
      Instrmt_19.add_attribute("UOM", "t"); // 2
      Instrmt_19_set.insert("t");
      Instrmt_19.add_attribute("UOMQty", "20045679.950000"); // 2
      Instrmt_19_set.insert("20045679.950000");
      Instrmt_19.add_attribute("PxUOM", "Bbl"); // 2
      Instrmt_19_set.insert("Bbl");
      Instrmt_19.add_attribute("PxUOMQty", "17507821.680000"); // 2
      Instrmt_19_set.insert("17507821.680000");
      Instrmt_19.add_attribute("SettlMeth", "P"); // 2
      Instrmt_19_set.insert("P");
      Instrmt_19.add_attribute("ExerStyle", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_19_set.insert("2");
      Instrmt_19.add_attribute("OptPayAmt", "OptPayoutAmount_t_1449623086"); // 2
      Instrmt_19_set.insert("OptPayoutAmount_t_1449623086");
      Instrmt_19.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_19_set.insert("INT");
      Instrmt_19.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_19_set.insert("CDSD");
      Instrmt_19.add_attribute("ListMeth", "0"); // 2
      Instrmt_19_set.insert("0");
      Instrmt_19.add_attribute("CapPx", "10454959.450000"); // 2
      Instrmt_19_set.insert("10454959.450000");
      Instrmt_19.add_attribute("FlrPx", "6727972.180000"); // 2
      Instrmt_19_set.insert("6727972.180000");
      Instrmt_19.add_attribute("PutCall", "1"); // 2
      Instrmt_19_set.insert("1");
      Instrmt_19.add_attribute("FlexInd", "false"); // 2
      Instrmt_19_set.insert("false");
      Instrmt_19.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_19_set.insert("false");
      Instrmt_19.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_19_set.insert("Mo");
      Instrmt_19.add_attribute("CpnRt", "18829455.670000"); // 2
      Instrmt_19_set.insert("18829455.670000");
      Instrmt_19.add_attribute("Exch", "SecurityExchange_t_1426517984"); // 2
      Instrmt_19_set.insert("SecurityExchange_t_1426517984");
      Instrmt_19.add_attribute("PosLmt", "2059237294"); // 2
      Instrmt_19_set.insert("2059237294");
      Instrmt_19.add_attribute("NTPosLmt", "756013569"); // 2
      Instrmt_19_set.insert("756013569");
      Instrmt_19.add_attribute("Issr", "Issuer_t_1816402194"); // 2
      Instrmt_19_set.insert("Issuer_t_1816402194");
      Instrmt_19.add_attribute("EncIssrLen", "183837272"); // 2
      Instrmt_19_set.insert("183837272");
      Instrmt_19.add_attribute("EncIssr", "EncodedIssuer_t_1237474998"); // 2
      Instrmt_19_set.insert("EncodedIssuer_t_1237474998");
      Instrmt_19.add_attribute("Desc", "SecurityDesc_t_1893098743"); // 2
      Instrmt_19_set.insert("SecurityDesc_t_1893098743");
      Instrmt_19.add_attribute("EncSecDescLen", "554831358"); // 2
      Instrmt_19_set.insert("554831358");
      Instrmt_19.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1470680113"); // 2
      Instrmt_19_set.insert("EncodedSecurityDesc_t_1470680113");
      Instrmt_19.add_attribute("Pool", "Pool_t_895870546"); // 2
      Instrmt_19_set.insert("Pool_t_895870546");
      Instrmt_19.add_attribute("CSetMo", "504455053"); // 2
      Instrmt_19_set.insert("504455053");
      Instrmt_19.add_attribute("CPPgm", "1"); // 2
      Instrmt_19_set.insert("1");
      Instrmt_19.add_attribute("CPRegT", "CPRegType_t_1902427873"); // 2
      Instrmt_19_set.insert("CPRegType_t_1902427873");
      Instrmt_19.add_attribute("Dated", "DatedDate_t_1240329171"); // 2
      Instrmt_19_set.insert("DatedDate_t_1240329171");
      Instrmt_19.add_attribute("IntAcrl", "InterestAccrualDate_t_1034574225"); // 2
      Instrmt_19_set.insert("InterestAccrualDate_t_1034574225");
      all_values.push_back(Instrmt_19_set);
      all_compo_names.insert("Instrmt_19_set");

      {
        xml_element AID_20{"AID"};
        multiset<string> AID_20_set;
        AID_20.add_attribute("AltID", "SecurityAltID_t_881554738"); // 3
        AID_20_set.insert("SecurityAltID_t_881554738");
        AID_20.add_attribute("AltIDSrc", "6"); // 3
        AID_20_set.insert("6");
        all_values.push_back(AID_20_set);
        all_compo_names.insert("AID_20_set");

        Instrmt_19.add_element(AID_20);
      }
      {
        xml_element SecXML_20{"SecXML"};
        multiset<string> SecXML_20_set;
        SecXML_20.add_attribute("Schema", "SecurityXMLSchema_t_1654888880"); // 3
        SecXML_20_set.insert("SecurityXMLSchema_t_1654888880");
        all_values.push_back(SecXML_20_set);
        all_compo_names.insert("SecXML_20_set");

        Instrmt_19.add_element(SecXML_20);
      }
      {
        xml_element Evnt_20{"Evnt"};
        multiset<string> Evnt_20_set;
        Evnt_20.add_attribute("EventTyp", "18"); // 3
        Evnt_20_set.insert("18");
        Evnt_20.add_attribute("Dt", "EventDate_t_764228340"); // 3
        Evnt_20_set.insert("EventDate_t_764228340");
        Evnt_20.add_attribute("Tm", "EventTime_t_957028318"); // 3
        Evnt_20_set.insert("EventTime_t_957028318");
        Evnt_20.add_attribute("Px", "14622800.440000"); // 3
        Evnt_20_set.insert("14622800.440000");
        Evnt_20.add_attribute("Txt", "EventText_t_309274617"); // 3
        Evnt_20_set.insert("EventText_t_309274617");
        all_values.push_back(Evnt_20_set);
        all_compo_names.insert("Evnt_20_set");

        Instrmt_19.add_element(Evnt_20);
      }
      {
        xml_element Pty_141{"Pty"};
        multiset<string> Pty_141_set;
        Pty_141.add_attribute("ID", "InstrumentPartyID_t_2032651452"); // 3
        Pty_141_set.insert("InstrumentPartyID_t_2032651452");
        Pty_141.add_attribute("Src", "4"); // 3
        Pty_141_set.insert("4");
        Pty_141.add_attribute("R", "4"); // 3
        Pty_141_set.insert("4");
        all_values.push_back(Pty_141_set);
        all_compo_names.insert("Pty_141_set");

        {
          xml_element Sub_141{"Sub"};
          multiset<string> Sub_141_set;
          Sub_141.add_attribute("ID", "InstrumentPartySubID_t_1845459956"); // 4
          Sub_141_set.insert("InstrumentPartySubID_t_1845459956");
          Sub_141.add_attribute("Typ", "13"); // 4
          Sub_141_set.insert("13");
          all_values.push_back(Sub_141_set);
          all_compo_names.insert("Sub_141_set");

          Pty_141.add_element(Sub_141);
        }
        Instrmt_19.add_element(Pty_141);
      }
      {
        xml_element CmplxEvnt_19{"CmplxEvnt"};
        multiset<string> CmplxEvnt_19_set;
        CmplxEvnt_19.add_attribute("Typ", "4"); // 3
        CmplxEvnt_19_set.insert("4");
        CmplxEvnt_19.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1558484627"); // 3
        CmplxEvnt_19_set.insert("ComplexOptPayoutAmount_t_1558484627");
        CmplxEvnt_19.add_attribute("Px", "20764088.300000"); // 3
        CmplxEvnt_19_set.insert("20764088.300000");
        CmplxEvnt_19.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_19_set.insert("2");
        CmplxEvnt_19.add_attribute("PxBndryPrcsn", "14702382.730000"); // 3
        CmplxEvnt_19_set.insert("14702382.730000");
        CmplxEvnt_19.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_19_set.insert("1");
        CmplxEvnt_19.add_attribute("Cond", "1"); // 3
        CmplxEvnt_19_set.insert("1");
        all_values.push_back(CmplxEvnt_19_set);
        all_compo_names.insert("CmplxEvnt_19_set");

        {
          xml_element EvntDts_19{"EvntDts"};
          multiset<string> EvntDts_19_set;
          EvntDts_19.add_attribute("StartDt", "ComplexEventStartDate_t_1654075545"); // 4
          EvntDts_19_set.insert("ComplexEventStartDate_t_1654075545");
          EvntDts_19.add_attribute("EndDt", "ComplexEventEndDate_t_1922413750"); // 4
          EvntDts_19_set.insert("ComplexEventEndDate_t_1922413750");
          all_values.push_back(EvntDts_19_set);
          all_compo_names.insert("EvntDts_19_set");

          {
            xml_element EvntTms_19{"EvntTms"};
            multiset<string> EvntTms_19_set;
            EvntTms_19.add_attribute("StartTm", "292297228"); // 5
            EvntTms_19_set.insert("292297228");
            EvntTms_19.add_attribute("EndTm", "61423255"); // 5
            EvntTms_19_set.insert("61423255");
            all_values.push_back(EvntTms_19_set);
            all_compo_names.insert("EvntTms_19_set");

            EvntDts_19.add_element(EvntTms_19);
          }
          CmplxEvnt_19.add_element(EvntDts_19);
        }
        Instrmt_19.add_element(CmplxEvnt_19);
      }
      RelSym_1.add_element(Instrmt_19);
    }
    {
      xml_element PxLmts2_1{"PxLmts2"};
      multiset<string> PxLmts2_1_set;
      PxLmts2_1.add_attribute("PxLmtTyp", "0"); // 2
      PxLmts2_1_set.insert("0");
      PxLmts2_1.add_attribute("LowLmtPx", "11881677.740000"); // 2
      PxLmts2_1_set.insert("11881677.740000");
      PxLmts2_1.add_attribute("HiLmtPx", "5658783.090000"); // 2
      PxLmts2_1_set.insert("5658783.090000");
      PxLmts2_1.add_attribute("TrdgRefPx", "2756164.450000"); // 2
      PxLmts2_1_set.insert("2756164.450000");
      all_values.push_back(PxLmts2_1_set);
      all_compo_names.insert("PxLmts2_1_set");

      RelSym_1.add_element(PxLmts2_1);
    }
    {
      xml_element InstrmtExt_5{"InstrmtExt"};
      multiset<string> InstrmtExt_5_set;
      InstrmtExt_5.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_5_set.insert("2");
      InstrmtExt_5.add_attribute("PctAtRisk", "18062074.800000"); // 2
      InstrmtExt_5_set.insert("18062074.800000");
      all_values.push_back(InstrmtExt_5_set);
      all_compo_names.insert("InstrmtExt_5_set");

      {
        xml_element Attrb_7{"Attrb"};
        multiset<string> Attrb_7_set;
        Attrb_7.add_attribute("Typ", "19"); // 3
        Attrb_7_set.insert("19");
        Attrb_7.add_attribute("Val", "InstrAttribValue_t_1824666738"); // 3
        Attrb_7_set.insert("InstrAttribValue_t_1824666738");
        all_values.push_back(Attrb_7_set);
        all_compo_names.insert("Attrb_7_set");

        InstrmtExt_5.add_element(Attrb_7);
      }
      RelSym_1.add_element(InstrmtExt_5);
    }
    {
      xml_element Leg_30{"Leg"};
      multiset<string> Leg_30_set;
      Leg_30.add_attribute("Sym", "LegSymbol_t_502351523"); // 2
      Leg_30_set.insert("LegSymbol_t_502351523");
      Leg_30.add_attribute("Sfx", "WI"); // 2
      Leg_30_set.insert("WI");
      Leg_30.add_attribute("ID", "LegSecurityID_t_1133425348"); // 2
      Leg_30_set.insert("LegSecurityID_t_1133425348");
      Leg_30.add_attribute("Src", "1"); // 2
      Leg_30_set.insert("1");
      Leg_30.add_attribute("Prod", "3"); // 2
      Leg_30_set.insert("3");
      Leg_30.add_attribute("CFI", "LegCFICode_t_448221745"); // 2
      Leg_30_set.insert("LegCFICode_t_448221745");
      Leg_30.add_attribute("SecTyp", "FXSWAP"); // 2
      Leg_30_set.insert("FXSWAP");
      Leg_30.add_attribute("SecSubTyp", "LegSecuritySubType_t_1659792026"); // 2
      Leg_30_set.insert("LegSecuritySubType_t_1659792026");
      Leg_30.add_attribute("MMY", "808514086"); // 2
      Leg_30_set.insert("808514086");
      Leg_30.add_attribute("Mat", "LegMaturityDate_t_410442668"); // 2
      Leg_30_set.insert("LegMaturityDate_t_410442668");
      Leg_30.add_attribute("MatTm", "1357768334"); // 2
      Leg_30_set.insert("1357768334");
      Leg_30.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1001977349"); // 2
      Leg_30_set.insert("LegCouponPaymentDate_t_1001977349");
      Leg_30.add_attribute("Issued", "LegIssueDate_t_2009171918"); // 2
      Leg_30_set.insert("LegIssueDate_t_2009171918");
      Leg_30.add_attribute("RepoCollSecTyp", "768769313"); // 2
      Leg_30_set.insert("768769313");
      Leg_30.add_attribute("RepoTrm", "930902531"); // 2
      Leg_30_set.insert("930902531");
      Leg_30.add_attribute("RepoRt", "7394518.560000"); // 2
      Leg_30_set.insert("7394518.560000");
      Leg_30.add_attribute("Fctr", "915239.380000"); // 2
      Leg_30_set.insert("915239.380000");
      Leg_30.add_attribute("CrdRtg", "LegCreditRating_t_1615841283"); // 2
      Leg_30_set.insert("LegCreditRating_t_1615841283");
      Leg_30.add_attribute("Rgstry", "LegInstrRegistry_t_1286133989"); // 2
      Leg_30_set.insert("LegInstrRegistry_t_1286133989");
      Leg_30.add_attribute("Ctry", "1745599483"); // 2
      Leg_30_set.insert("1745599483");
      Leg_30.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1390771385"); // 2
      Leg_30_set.insert("LegStateOrProvinceOfIssue_t_1390771385");
      Leg_30.add_attribute("Lcl", "LegLocaleOfIssue_t_1578431217"); // 2
      Leg_30_set.insert("LegLocaleOfIssue_t_1578431217");
      Leg_30.add_attribute("Redeem", "LegRedemptionDate_t_1807022739"); // 2
      Leg_30_set.insert("LegRedemptionDate_t_1807022739");
      Leg_30.add_attribute("Strk", "4888979.520000"); // 2
      Leg_30_set.insert("4888979.520000");
      Leg_30.add_attribute("StrkCcy", "JPY"); // 2
      Leg_30_set.insert("JPY");
      Leg_30.add_attribute("OptA", "764514398"); // 2
      Leg_30_set.insert("764514398");
      Leg_30.add_attribute("Cmult", "15622273.430000"); // 2
      Leg_30_set.insert("15622273.430000");
      Leg_30.add_attribute("MultTyp", "1"); // 2
      Leg_30_set.insert("1");
      Leg_30.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_30_set.insert("3");
      Leg_30.add_attribute("UOM", "MMBtu"); // 2
      Leg_30_set.insert("MMBtu");
      Leg_30.add_attribute("UOMQty", "3864927.550000"); // 2
      Leg_30_set.insert("3864927.550000");
      Leg_30.add_attribute("PxUOM", "Gal"); // 2
      Leg_30_set.insert("Gal");
      Leg_30.add_attribute("PxUOMQty", "2253521.330000"); // 2
      Leg_30_set.insert("2253521.330000");
      Leg_30.add_attribute("TmUnit", "H"); // 2
      Leg_30_set.insert("H");
      Leg_30.add_attribute("ExerStyle", "2"); // 2
      Leg_30_set.insert("2");
      Leg_30.add_attribute("CpnRt", "6735738.780000"); // 2
      Leg_30_set.insert("6735738.780000");
      Leg_30.add_attribute("Exch", "LegSecurityExchange_t_1081443452"); // 2
      Leg_30_set.insert("LegSecurityExchange_t_1081443452");
      Leg_30.add_attribute("Issr", "LegIssuer_t_2031749923"); // 2
      Leg_30_set.insert("LegIssuer_t_2031749923");
      Leg_30.add_attribute("EncLegIssrLen", "1482087965"); // 2
      Leg_30_set.insert("1482087965");
      Leg_30.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1491886120"); // 2
      Leg_30_set.insert("EncodedLegIssuer_t_1491886120");
      Leg_30.add_attribute("Desc", "LegSecurityDesc_t_1242034609"); // 2
      Leg_30_set.insert("LegSecurityDesc_t_1242034609");
      Leg_30.add_attribute("EncLegSecDescLen", "336581666"); // 2
      Leg_30_set.insert("336581666");
      Leg_30.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1353574390"); // 2
      Leg_30_set.insert("EncodedLegSecurityDesc_t_1353574390");
      Leg_30.add_attribute("RatioQty", "20108039.220000"); // 2
      Leg_30_set.insert("20108039.220000");
      Leg_30.add_attribute("Side", "7"); // 2
      Leg_30_set.insert("7");
      Leg_30.add_attribute("Ccy", "JPY"); // 2
      Leg_30_set.insert("JPY");
      Leg_30.add_attribute("Pool", "LegPool_t_735841833"); // 2
      Leg_30_set.insert("LegPool_t_735841833");
      Leg_30.add_attribute("Dated", "LegDatedDate_t_1231676588"); // 2
      Leg_30_set.insert("LegDatedDate_t_1231676588");
      Leg_30.add_attribute("CSetMo", "1700443695"); // 2
      Leg_30_set.insert("1700443695");
      Leg_30.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2126613218"); // 2
      Leg_30_set.insert("LegInterestAccrualDate_t_2126613218");
      Leg_30.add_attribute("PutCall", "662624157"); // 2
      Leg_30_set.insert("662624157");
      Leg_30.add_attribute("LegOptionRatio", "13599827.860000"); // 2
      Leg_30_set.insert("13599827.860000");
      Leg_30.add_attribute("Px", "4680275.220000"); // 2
      Leg_30_set.insert("4680275.220000");
      all_values.push_back(Leg_30_set);
      all_compo_names.insert("Leg_30_set");

      {
        xml_element LegAID_30{"LegAID"};
        multiset<string> LegAID_30_set;
        LegAID_30.add_attribute("SecAltID", "LegSecurityAltID_t_1281739500"); // 3
        LegAID_30_set.insert("LegSecurityAltID_t_1281739500");
        LegAID_30.add_attribute("SecAltIDSrc", "J"); // 3
        LegAID_30_set.insert("J");
        all_values.push_back(LegAID_30_set);
        all_compo_names.insert("LegAID_30_set");

        Leg_30.add_element(LegAID_30);
      }
      RelSym_1.add_element(Leg_30);
    }
    elt.add_element(RelSym_1);
  } // end RelSym
  { // RelSym
    xml_element RelSym_2{"RelSym"};
    multiset<string> RelSym_2_set;
    RelSym_2.add_attribute("Ccy", "CHF"); // 1
    RelSym_2_set.insert("CHF");
    RelSym_2.add_attribute("CorpActn", "D"); // 1
    RelSym_2_set.insert("D");
    RelSym_2.add_attribute("TxnTm", "RelSymTransactTime_t_1159763341"); // 1
    RelSym_2_set.insert("RelSymTransactTime_t_1159763341");
    RelSym_2.add_attribute("Txt", "Text_t_1935893628"); // 1
    RelSym_2_set.insert("Text_t_1935893628");
    RelSym_2.add_attribute("EncTxtLen", "1856034174"); // 1
    RelSym_2_set.insert("1856034174");
    RelSym_2.add_attribute("EncTxt", "EncodedText_t_1904580664"); // 1
    RelSym_2_set.insert("EncodedText_t_1904580664");
    all_values.push_back(RelSym_2_set);
    all_compo_names.insert("RelSym_2_set");

    {
      xml_element Instrmt_20{"Instrmt"};
      multiset<string> Instrmt_20_set;
      Instrmt_20.add_attribute("Sym", "Symbol_t_13762114"); // 2
      Instrmt_20_set.insert("Symbol_t_13762114");
      Instrmt_20.add_attribute("Sfx", "WI"); // 2
      Instrmt_20_set.insert("WI");
      Instrmt_20.add_attribute("ID", "SecurityID_t_129054913"); // 2
      Instrmt_20_set.insert("SecurityID_t_129054913");
      Instrmt_20.add_attribute("Src", "3"); // 2
      Instrmt_20_set.insert("3");
      Instrmt_20.add_attribute("Prod", "1"); // 2
      Instrmt_20_set.insert("1");
      Instrmt_20.add_attribute("ProdCmplx", "ProductComplex_t_13321188"); // 2
      Instrmt_20_set.insert("ProductComplex_t_13321188");
      Instrmt_20.add_attribute("SecGrp", "SecurityGroup_t_21940309"); // 2
      Instrmt_20_set.insert("SecurityGroup_t_21940309");
      Instrmt_20.add_attribute("CFI", "CFICode_t_1787469070"); // 2
      Instrmt_20_set.insert("CFICode_t_1787469070");
      Instrmt_20.add_attribute("SecTyp", "PN"); // 2
      Instrmt_20_set.insert("PN");
      Instrmt_20.add_attribute("SubTyp", "SecuritySubType_t_358521976"); // 2
      Instrmt_20_set.insert("SecuritySubType_t_358521976");
      Instrmt_20.add_attribute("MMY", "993559813"); // 2
      Instrmt_20_set.insert("993559813");
      Instrmt_20.add_attribute("MatDt", "MaturityDate_t_1118676071"); // 2
      Instrmt_20_set.insert("MaturityDate_t_1118676071");
      Instrmt_20.add_attribute("MatTm", "1626006174"); // 2
      Instrmt_20_set.insert("1626006174");
      Instrmt_20.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_939102412"); // 2
      Instrmt_20_set.insert("SettleOnOpenFlag_t_939102412");
      Instrmt_20.add_attribute("AsgnMeth", "1073520283"); // 2
      Instrmt_20_set.insert("1073520283");
      Instrmt_20.add_attribute("Status", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("CpnPmt", "CouponPaymentDate_t_23295352"); // 2
      Instrmt_20_set.insert("CouponPaymentDate_t_23295352");
      Instrmt_20.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_20_set.insert("XR");
      Instrmt_20.add_attribute("Snrty", "SR"); // 2
      Instrmt_20_set.insert("SR");
      Instrmt_20.add_attribute("NotlPctOut", "6859195.090000"); // 2
      Instrmt_20_set.insert("6859195.090000");
      Instrmt_20.add_attribute("OrigNotlPctOut", "19864631.170000"); // 2
      Instrmt_20_set.insert("19864631.170000");
      Instrmt_20.add_attribute("AttchPnt", "6615214.510000"); // 2
      Instrmt_20_set.insert("6615214.510000");
      Instrmt_20.add_attribute("DetchPnt", "19676590.090000"); // 2
      Instrmt_20_set.insert("19676590.090000");
      Instrmt_20.add_attribute("Issued", "IssueDate_t_1424379656"); // 2
      Instrmt_20_set.insert("IssueDate_t_1424379656");
      Instrmt_20.add_attribute("RepoCollSecTyp", "1894063372"); // 2
      Instrmt_20_set.insert("1894063372");
      Instrmt_20.add_attribute("RepoTrm", "516658557"); // 2
      Instrmt_20_set.insert("516658557");
      Instrmt_20.add_attribute("RepoRt", "7464374.260000"); // 2
      Instrmt_20_set.insert("7464374.260000");
      Instrmt_20.add_attribute("Fctr", "9063430.650000"); // 2
      Instrmt_20_set.insert("9063430.650000");
      Instrmt_20.add_attribute("CrdRtg", "CreditRating_t_305068537"); // 2
      Instrmt_20_set.insert("CreditRating_t_305068537");
      Instrmt_20.add_attribute("Rgstry", "InstrRegistry_t_454987952"); // 2
      Instrmt_20_set.insert("InstrRegistry_t_454987952");
      Instrmt_20.add_attribute("IssuCtry", "663440081"); // 2
      Instrmt_20_set.insert("663440081");
      Instrmt_20.add_attribute("StPrv", "StateOrProvinceOfIssue_t_318830651"); // 2
      Instrmt_20_set.insert("StateOrProvinceOfIssue_t_318830651");
      Instrmt_20.add_attribute("Lcl", "LocaleOfIssue_t_1816611098"); // 2
      Instrmt_20_set.insert("LocaleOfIssue_t_1816611098");
      Instrmt_20.add_attribute("Redeem", "RedemptionDate_t_792494995"); // 2
      Instrmt_20_set.insert("RedemptionDate_t_792494995");
      Instrmt_20.add_attribute("StrkPx", "10061666.440000"); // 2
      Instrmt_20_set.insert("10061666.440000");
      Instrmt_20.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_20_set.insert("EUR");
      Instrmt_20.add_attribute("StrkMult", "10281069.530000"); // 2
      Instrmt_20_set.insert("10281069.530000");
      Instrmt_20.add_attribute("StrkValu", "17521794.700000"); // 2
      Instrmt_20_set.insert("17521794.700000");
      Instrmt_20.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_20_set.insert("5");
      Instrmt_20.add_attribute("StrkPxBndryPrcsn", "5982556.350000"); // 2
      Instrmt_20_set.insert("5982556.350000");
      Instrmt_20.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_20_set.insert("1");
      Instrmt_20.add_attribute("OptAt", "865151455"); // 2
      Instrmt_20_set.insert("865151455");
      Instrmt_20.add_attribute("Mult", "15373580.470000"); // 2
      Instrmt_20_set.insert("15373580.470000");
      Instrmt_20.add_attribute("MultTyp", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_20_set.insert("4");
      Instrmt_20.add_attribute("MinPxIncr", "15606533.990000"); // 2
      Instrmt_20_set.insert("15606533.990000");
      Instrmt_20.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_584881371"); // 2
      Instrmt_20_set.insert("MinPriceIncrementAmount_t_584881371");
      Instrmt_20.add_attribute("UOM", "tn"); // 2
      Instrmt_20_set.insert("tn");
      Instrmt_20.add_attribute("UOMQty", "990892.600000"); // 2
      Instrmt_20_set.insert("990892.600000");
      Instrmt_20.add_attribute("PxUOM", "MWh"); // 2
      Instrmt_20_set.insert("MWh");
      Instrmt_20.add_attribute("PxUOMQty", "19345311.950000"); // 2
      Instrmt_20_set.insert("19345311.950000");
      Instrmt_20.add_attribute("SettlMeth", "C"); // 2
      Instrmt_20_set.insert("C");
      Instrmt_20.add_attribute("ExerStyle", "1"); // 2
      Instrmt_20_set.insert("1");
      Instrmt_20.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_20_set.insert("2");
      Instrmt_20.add_attribute("OptPayAmt", "OptPayoutAmount_t_435923179"); // 2
      Instrmt_20_set.insert("OptPayoutAmount_t_435923179");
      Instrmt_20.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_20_set.insert("PCTPAR");
      Instrmt_20.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_20_set.insert("FUT");
      Instrmt_20.add_attribute("ListMeth", "0"); // 2
      Instrmt_20_set.insert("0");
      Instrmt_20.add_attribute("CapPx", "9021822.270000"); // 2
      Instrmt_20_set.insert("9021822.270000");
      Instrmt_20.add_attribute("FlrPx", "11034104.170000"); // 2
      Instrmt_20_set.insert("11034104.170000");
      Instrmt_20.add_attribute("PutCall", "0"); // 2
      Instrmt_20_set.insert("0");
      Instrmt_20.add_attribute("FlexInd", "false"); // 2
      Instrmt_20_set.insert("false");
      Instrmt_20.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_20_set.insert("true");
      Instrmt_20.add_attribute("TmUnit", "D"); // 2
      Instrmt_20_set.insert("D");
      Instrmt_20.add_attribute("CpnRt", "5360200.770000"); // 2
      Instrmt_20_set.insert("5360200.770000");
      Instrmt_20.add_attribute("Exch", "SecurityExchange_t_554237948"); // 2
      Instrmt_20_set.insert("SecurityExchange_t_554237948");
      Instrmt_20.add_attribute("PosLmt", "946612317"); // 2
      Instrmt_20_set.insert("946612317");
      Instrmt_20.add_attribute("NTPosLmt", "140715900"); // 2
      Instrmt_20_set.insert("140715900");
      Instrmt_20.add_attribute("Issr", "Issuer_t_467926281"); // 2
      Instrmt_20_set.insert("Issuer_t_467926281");
      Instrmt_20.add_attribute("EncIssrLen", "185757599"); // 2
      Instrmt_20_set.insert("185757599");
      Instrmt_20.add_attribute("EncIssr", "EncodedIssuer_t_738971535"); // 2
      Instrmt_20_set.insert("EncodedIssuer_t_738971535");
      Instrmt_20.add_attribute("Desc", "SecurityDesc_t_1500290685"); // 2
      Instrmt_20_set.insert("SecurityDesc_t_1500290685");
      Instrmt_20.add_attribute("EncSecDescLen", "1050909054"); // 2
      Instrmt_20_set.insert("1050909054");
      Instrmt_20.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_128845935"); // 2
      Instrmt_20_set.insert("EncodedSecurityDesc_t_128845935");
      Instrmt_20.add_attribute("Pool", "Pool_t_1458691725"); // 2
      Instrmt_20_set.insert("Pool_t_1458691725");
      Instrmt_20.add_attribute("CSetMo", "2130424869"); // 2
      Instrmt_20_set.insert("2130424869");
      Instrmt_20.add_attribute("CPPgm", "99"); // 2
      Instrmt_20_set.insert("99");
      Instrmt_20.add_attribute("CPRegT", "CPRegType_t_2043573096"); // 2
      Instrmt_20_set.insert("CPRegType_t_2043573096");
      Instrmt_20.add_attribute("Dated", "DatedDate_t_1255950964"); // 2
      Instrmt_20_set.insert("DatedDate_t_1255950964");
      Instrmt_20.add_attribute("IntAcrl", "InterestAccrualDate_t_1788588595"); // 2
      Instrmt_20_set.insert("InterestAccrualDate_t_1788588595");
      all_values.push_back(Instrmt_20_set);
      all_compo_names.insert("Instrmt_20_set");

      {
        xml_element AID_21{"AID"};
        multiset<string> AID_21_set;
        AID_21.add_attribute("AltID", "SecurityAltID_t_319950289"); // 3
        AID_21_set.insert("SecurityAltID_t_319950289");
        AID_21.add_attribute("AltIDSrc", "6"); // 3
        AID_21_set.insert("6");
        all_values.push_back(AID_21_set);
        all_compo_names.insert("AID_21_set");

        Instrmt_20.add_element(AID_21);
      }
      {
        xml_element SecXML_21{"SecXML"};
        multiset<string> SecXML_21_set;
        SecXML_21.add_attribute("Schema", "SecurityXMLSchema_t_1707853217"); // 3
        SecXML_21_set.insert("SecurityXMLSchema_t_1707853217");
        all_values.push_back(SecXML_21_set);
        all_compo_names.insert("SecXML_21_set");

        Instrmt_20.add_element(SecXML_21);
      }
      {
        xml_element Evnt_21{"Evnt"};
        multiset<string> Evnt_21_set;
        Evnt_21.add_attribute("EventTyp", "17"); // 3
        Evnt_21_set.insert("17");
        Evnt_21.add_attribute("Dt", "EventDate_t_576625782"); // 3
        Evnt_21_set.insert("EventDate_t_576625782");
        Evnt_21.add_attribute("Tm", "EventTime_t_2143776396"); // 3
        Evnt_21_set.insert("EventTime_t_2143776396");
        Evnt_21.add_attribute("Px", "4679014.120000"); // 3
        Evnt_21_set.insert("4679014.120000");
        Evnt_21.add_attribute("Txt", "EventText_t_1016596118"); // 3
        Evnt_21_set.insert("EventText_t_1016596118");
        all_values.push_back(Evnt_21_set);
        all_compo_names.insert("Evnt_21_set");

        Instrmt_20.add_element(Evnt_21);
      }
      {
        xml_element Pty_142{"Pty"};
        multiset<string> Pty_142_set;
        Pty_142.add_attribute("ID", "InstrumentPartyID_t_737284464"); // 3
        Pty_142_set.insert("InstrumentPartyID_t_737284464");
        Pty_142.add_attribute("Src", "F"); // 3
        Pty_142_set.insert("F");
        Pty_142.add_attribute("R", "13"); // 3
        Pty_142_set.insert("13");
        all_values.push_back(Pty_142_set);
        all_compo_names.insert("Pty_142_set");

        {
          xml_element Sub_142{"Sub"};
          multiset<string> Sub_142_set;
          Sub_142.add_attribute("ID", "InstrumentPartySubID_t_1797106832"); // 4
          Sub_142_set.insert("InstrumentPartySubID_t_1797106832");
          Sub_142.add_attribute("Typ", "25"); // 4
          Sub_142_set.insert("25");
          all_values.push_back(Sub_142_set);
          all_compo_names.insert("Sub_142_set");

          Pty_142.add_element(Sub_142);
        }
        Instrmt_20.add_element(Pty_142);
      }
      {
        xml_element CmplxEvnt_20{"CmplxEvnt"};
        multiset<string> CmplxEvnt_20_set;
        CmplxEvnt_20.add_attribute("Typ", "5"); // 3
        CmplxEvnt_20_set.insert("5");
        CmplxEvnt_20.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1715612196"); // 3
        CmplxEvnt_20_set.insert("ComplexOptPayoutAmount_t_1715612196");
        CmplxEvnt_20.add_attribute("Px", "3299297.470000"); // 3
        CmplxEvnt_20_set.insert("3299297.470000");
        CmplxEvnt_20.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_20_set.insert("1");
        CmplxEvnt_20.add_attribute("PxBndryPrcsn", "5147408.660000"); // 3
        CmplxEvnt_20_set.insert("5147408.660000");
        CmplxEvnt_20.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_20_set.insert("2");
        CmplxEvnt_20.add_attribute("Cond", "2"); // 3
        CmplxEvnt_20_set.insert("2");
        all_values.push_back(CmplxEvnt_20_set);
        all_compo_names.insert("CmplxEvnt_20_set");

        {
          xml_element EvntDts_20{"EvntDts"};
          multiset<string> EvntDts_20_set;
          EvntDts_20.add_attribute("StartDt", "ComplexEventStartDate_t_700498465"); // 4
          EvntDts_20_set.insert("ComplexEventStartDate_t_700498465");
          EvntDts_20.add_attribute("EndDt", "ComplexEventEndDate_t_1209617182"); // 4
          EvntDts_20_set.insert("ComplexEventEndDate_t_1209617182");
          all_values.push_back(EvntDts_20_set);
          all_compo_names.insert("EvntDts_20_set");

          {
            xml_element EvntTms_20{"EvntTms"};
            multiset<string> EvntTms_20_set;
            EvntTms_20.add_attribute("StartTm", "95915919"); // 5
            EvntTms_20_set.insert("95915919");
            EvntTms_20.add_attribute("EndTm", "1751407519"); // 5
            EvntTms_20_set.insert("1751407519");
            all_values.push_back(EvntTms_20_set);
            all_compo_names.insert("EvntTms_20_set");

            EvntDts_20.add_element(EvntTms_20);
          }
          CmplxEvnt_20.add_element(EvntDts_20);
        }
        Instrmt_20.add_element(CmplxEvnt_20);
      }
      RelSym_2.add_element(Instrmt_20);
    }
    {
      xml_element PxLmts2_2{"PxLmts2"};
      multiset<string> PxLmts2_2_set;
      PxLmts2_2.add_attribute("PxLmtTyp", "1"); // 2
      PxLmts2_2_set.insert("1");
      PxLmts2_2.add_attribute("LowLmtPx", "15546076.440000"); // 2
      PxLmts2_2_set.insert("15546076.440000");
      PxLmts2_2.add_attribute("HiLmtPx", "17343487.400000"); // 2
      PxLmts2_2_set.insert("17343487.400000");
      PxLmts2_2.add_attribute("TrdgRefPx", "8804788.040000"); // 2
      PxLmts2_2_set.insert("8804788.040000");
      all_values.push_back(PxLmts2_2_set);
      all_compo_names.insert("PxLmts2_2_set");

      RelSym_2.add_element(PxLmts2_2);
    }
    {
      xml_element InstrmtExt_6{"InstrmtExt"};
      multiset<string> InstrmtExt_6_set;
      InstrmtExt_6.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_6_set.insert("2");
      InstrmtExt_6.add_attribute("PctAtRisk", "8428160.570000"); // 2
      InstrmtExt_6_set.insert("8428160.570000");
      all_values.push_back(InstrmtExt_6_set);
      all_compo_names.insert("InstrmtExt_6_set");

      {
        xml_element Attrb_8{"Attrb"};
        multiset<string> Attrb_8_set;
        Attrb_8.add_attribute("Typ", "10"); // 3
        Attrb_8_set.insert("10");
        Attrb_8.add_attribute("Val", "InstrAttribValue_t_1770647382"); // 3
        Attrb_8_set.insert("InstrAttribValue_t_1770647382");
        all_values.push_back(Attrb_8_set);
        all_compo_names.insert("Attrb_8_set");

        InstrmtExt_6.add_element(Attrb_8);
      }
      RelSym_2.add_element(InstrmtExt_6);
    }
    {
      xml_element Leg_31{"Leg"};
      multiset<string> Leg_31_set;
      Leg_31.add_attribute("Sym", "LegSymbol_t_1885814568"); // 2
      Leg_31_set.insert("LegSymbol_t_1885814568");
      Leg_31.add_attribute("Sfx", "CD"); // 2
      Leg_31_set.insert("CD");
      Leg_31.add_attribute("ID", "LegSecurityID_t_1791354519"); // 2
      Leg_31_set.insert("LegSecurityID_t_1791354519");
      Leg_31.add_attribute("Src", "I"); // 2
      Leg_31_set.insert("I");
      Leg_31.add_attribute("Prod", "13"); // 2
      Leg_31_set.insert("13");
      Leg_31.add_attribute("CFI", "LegCFICode_t_111772284"); // 2
      Leg_31_set.insert("LegCFICode_t_111772284");
      Leg_31.add_attribute("SecTyp", "TB"); // 2
      Leg_31_set.insert("TB");
      Leg_31.add_attribute("SecSubTyp", "LegSecuritySubType_t_815530532"); // 2
      Leg_31_set.insert("LegSecuritySubType_t_815530532");
      Leg_31.add_attribute("MMY", "1481855924"); // 2
      Leg_31_set.insert("1481855924");
      Leg_31.add_attribute("Mat", "LegMaturityDate_t_1304075709"); // 2
      Leg_31_set.insert("LegMaturityDate_t_1304075709");
      Leg_31.add_attribute("MatTm", "465153717"); // 2
      Leg_31_set.insert("465153717");
      Leg_31.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1275765593"); // 2
      Leg_31_set.insert("LegCouponPaymentDate_t_1275765593");
      Leg_31.add_attribute("Issued", "LegIssueDate_t_1025020362"); // 2
      Leg_31_set.insert("LegIssueDate_t_1025020362");
      Leg_31.add_attribute("RepoCollSecTyp", "33282265"); // 2
      Leg_31_set.insert("33282265");
      Leg_31.add_attribute("RepoTrm", "1605695340"); // 2
      Leg_31_set.insert("1605695340");
      Leg_31.add_attribute("RepoRt", "13002029.620000"); // 2
      Leg_31_set.insert("13002029.620000");
      Leg_31.add_attribute("Fctr", "5480231.310000"); // 2
      Leg_31_set.insert("5480231.310000");
      Leg_31.add_attribute("CrdRtg", "LegCreditRating_t_2076340987"); // 2
      Leg_31_set.insert("LegCreditRating_t_2076340987");
      Leg_31.add_attribute("Rgstry", "LegInstrRegistry_t_2043311844"); // 2
      Leg_31_set.insert("LegInstrRegistry_t_2043311844");
      Leg_31.add_attribute("Ctry", "1248521596"); // 2
      Leg_31_set.insert("1248521596");
      Leg_31.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1138474522"); // 2
      Leg_31_set.insert("LegStateOrProvinceOfIssue_t_1138474522");
      Leg_31.add_attribute("Lcl", "LegLocaleOfIssue_t_2139227763"); // 2
      Leg_31_set.insert("LegLocaleOfIssue_t_2139227763");
      Leg_31.add_attribute("Redeem", "LegRedemptionDate_t_852445468"); // 2
      Leg_31_set.insert("LegRedemptionDate_t_852445468");
      Leg_31.add_attribute("Strk", "3294539.910000"); // 2
      Leg_31_set.insert("3294539.910000");
      Leg_31.add_attribute("StrkCcy", "JPY"); // 2
      Leg_31_set.insert("JPY");
      Leg_31.add_attribute("OptA", "1209932795"); // 2
      Leg_31_set.insert("1209932795");
      Leg_31.add_attribute("Cmult", "8495652.040000"); // 2
      Leg_31_set.insert("8495652.040000");
      Leg_31.add_attribute("MultTyp", "0"); // 2
      Leg_31_set.insert("0");
      Leg_31.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_31_set.insert("1");
      Leg_31.add_attribute("UOM", "MMbbl"); // 2
      Leg_31_set.insert("MMbbl");
      Leg_31.add_attribute("UOMQty", "10204575.380000"); // 2
      Leg_31_set.insert("10204575.380000");
      Leg_31.add_attribute("PxUOM", "MWh"); // 2
      Leg_31_set.insert("MWh");
      Leg_31.add_attribute("PxUOMQty", "1165998.100000"); // 2
      Leg_31_set.insert("1165998.100000");
      Leg_31.add_attribute("TmUnit", "S"); // 2
      Leg_31_set.insert("S");
      Leg_31.add_attribute("ExerStyle", "0"); // 2
      Leg_31_set.insert("0");
      Leg_31.add_attribute("CpnRt", "2283720.940000"); // 2
      Leg_31_set.insert("2283720.940000");
      Leg_31.add_attribute("Exch", "LegSecurityExchange_t_519483414"); // 2
      Leg_31_set.insert("LegSecurityExchange_t_519483414");
      Leg_31.add_attribute("Issr", "LegIssuer_t_559762819"); // 2
      Leg_31_set.insert("LegIssuer_t_559762819");
      Leg_31.add_attribute("EncLegIssrLen", "1710228018"); // 2
      Leg_31_set.insert("1710228018");
      Leg_31.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1823559124"); // 2
      Leg_31_set.insert("EncodedLegIssuer_t_1823559124");
      Leg_31.add_attribute("Desc", "LegSecurityDesc_t_1024916536"); // 2
      Leg_31_set.insert("LegSecurityDesc_t_1024916536");
      Leg_31.add_attribute("EncLegSecDescLen", "838509963"); // 2
      Leg_31_set.insert("838509963");
      Leg_31.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_701095838"); // 2
      Leg_31_set.insert("EncodedLegSecurityDesc_t_701095838");
      Leg_31.add_attribute("RatioQty", "10581988.010000"); // 2
      Leg_31_set.insert("10581988.010000");
      Leg_31.add_attribute("Side", "9"); // 2
      Leg_31_set.insert("9");
      Leg_31.add_attribute("Ccy", "CHF"); // 2
      Leg_31_set.insert("CHF");
      Leg_31.add_attribute("Pool", "LegPool_t_225578995"); // 2
      Leg_31_set.insert("LegPool_t_225578995");
      Leg_31.add_attribute("Dated", "LegDatedDate_t_1897126996"); // 2
      Leg_31_set.insert("LegDatedDate_t_1897126996");
      Leg_31.add_attribute("CSetMo", "707259881"); // 2
      Leg_31_set.insert("707259881");
      Leg_31.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1364053517"); // 2
      Leg_31_set.insert("LegInterestAccrualDate_t_1364053517");
      Leg_31.add_attribute("PutCall", "1888871111"); // 2
      Leg_31_set.insert("1888871111");
      Leg_31.add_attribute("LegOptionRatio", "15597053.490000"); // 2
      Leg_31_set.insert("15597053.490000");
      Leg_31.add_attribute("Px", "16935075.090000"); // 2
      Leg_31_set.insert("16935075.090000");
      all_values.push_back(Leg_31_set);
      all_compo_names.insert("Leg_31_set");

      {
        xml_element LegAID_31{"LegAID"};
        multiset<string> LegAID_31_set;
        LegAID_31.add_attribute("SecAltID", "LegSecurityAltID_t_1287739223"); // 3
        LegAID_31_set.insert("LegSecurityAltID_t_1287739223");
        LegAID_31.add_attribute("SecAltIDSrc", "D"); // 3
        LegAID_31_set.insert("D");
        all_values.push_back(LegAID_31_set);
        all_compo_names.insert("LegAID_31_set");

        Leg_31.add_element(LegAID_31);
      }
      RelSym_2.add_element(Leg_31);
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
