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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecListUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListUpdateReport_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1468793132"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("SecurityReqID_t_1468793132");
  elt.add_attribute("RspID", "SecurityResponseID_t_1905922689"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("SecurityResponseID_t_1905922689");
  elt.add_attribute("ReqRslt", "0"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("0");
  elt.add_attribute("UpdActn", "A"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("A");
  elt.add_attribute("TxnTm", "TransactTime_t_1478731997"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("TransactTime_t_1478731997");
  elt.add_attribute("TotNoReltdSym", "1505742661"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("1505742661");
  elt.add_attribute("LastFragment", "Y"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("Y");
  all_values.push_back(DerivativeSecurityListUpdateReport_message_t_0);
  all_compo_names.insert("DerivativeSecurityListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_28{"Hdr"};
    multiset<string> Hdr_28_set;
    Hdr_28.add_attribute("SeqNum", "1475068313"); // 1
    Hdr_28_set.insert("1475068313");
    Hdr_28.add_attribute("SID", "SenderCompID_t_891842923"); // 1
    Hdr_28_set.insert("SenderCompID_t_891842923");
    Hdr_28.add_attribute("TID", "TargetCompID_t_696697361"); // 1
    Hdr_28_set.insert("TargetCompID_t_696697361");
    Hdr_28.add_attribute("OBID", "OnBehalfOfCompID_t_1201059841"); // 1
    Hdr_28_set.insert("OnBehalfOfCompID_t_1201059841");
    Hdr_28.add_attribute("D2ID", "DeliverToCompID_t_745701968"); // 1
    Hdr_28_set.insert("DeliverToCompID_t_745701968");
    Hdr_28.add_attribute("SSub", "SenderSubID_t_1346742303"); // 1
    Hdr_28_set.insert("SenderSubID_t_1346742303");
    Hdr_28.add_attribute("SLoc", "SenderLocationID_t_762618385"); // 1
    Hdr_28_set.insert("SenderLocationID_t_762618385");
    Hdr_28.add_attribute("TSub", "TargetSubID_t_658962582"); // 1
    Hdr_28_set.insert("TargetSubID_t_658962582");
    Hdr_28.add_attribute("TLoc", "TargetLocationID_t_788570183"); // 1
    Hdr_28_set.insert("TargetLocationID_t_788570183");
    Hdr_28.add_attribute("OBSub", "OnBehalfOfSubID_t_1519971290"); // 1
    Hdr_28_set.insert("OnBehalfOfSubID_t_1519971290");
    Hdr_28.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1796069902"); // 1
    Hdr_28_set.insert("OnBehalfOfLocationID_t_1796069902");
    Hdr_28.add_attribute("D2Sub", "DeliverToSubID_t_1642377931"); // 1
    Hdr_28_set.insert("DeliverToSubID_t_1642377931");
    Hdr_28.add_attribute("D2Loc", "DeliverToLocationID_t_1029392685"); // 1
    Hdr_28_set.insert("DeliverToLocationID_t_1029392685");
    Hdr_28.add_attribute("PosDup", "N"); // 1
    Hdr_28_set.insert("N");
    Hdr_28.add_attribute("PosRsnd", "Y"); // 1
    Hdr_28_set.insert("Y");
    Hdr_28.add_attribute("Snt", "SendingTime_t_403962831"); // 1
    Hdr_28_set.insert("SendingTime_t_403962831");
    Hdr_28.add_attribute("OrigSnt", "OrigSendingTime_t_2105335068"); // 1
    Hdr_28_set.insert("OrigSendingTime_t_2105335068");
    Hdr_28.add_attribute("MsgEncd", "MessageEncoding_t_1431857285"); // 1
    Hdr_28_set.insert("MessageEncoding_t_1431857285");
    all_values.push_back(Hdr_28_set);
    all_compo_names.insert("Hdr_28_set");

    {
      xml_element Hop_28{"Hop"};
      multiset<string> Hop_28_set;
      Hop_28.add_attribute("ID", "HopCompID_t_1563745432"); // 2
      Hop_28_set.insert("HopCompID_t_1563745432");
      Hop_28.add_attribute("Ref", "1691242059"); // 2
      Hop_28_set.insert("1691242059");
      Hop_28.add_attribute("Snt", "HopSendingTime_t_1927478539"); // 2
      Hop_28_set.insert("HopSendingTime_t_1927478539");
      all_values.push_back(Hop_28_set);
      all_compo_names.insert("Hop_28_set");

      Hdr_28.add_element(Hop_28);
    }
    elt.add_element(Hdr_28);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_3{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_3_set;
    ApplSeqCtrl_3.add_attribute("ApplID", "ApplID_t_2109619880"); // 1
    ApplSeqCtrl_3_set.insert("ApplID_t_2109619880");
    ApplSeqCtrl_3.add_attribute("ApplSeqNum", "2055840685"); // 1
    ApplSeqCtrl_3_set.insert("2055840685");
    ApplSeqCtrl_3.add_attribute("ApplLastSeqNum", "932632611"); // 1
    ApplSeqCtrl_3_set.insert("932632611");
    ApplSeqCtrl_3.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_3_set.insert("true");
    all_values.push_back(ApplSeqCtrl_3_set);
    all_compo_names.insert("ApplSeqCtrl_3_set");

    elt.add_element(ApplSeqCtrl_3);
  } // end ApplSeqCtrl
  { // Undly
    xml_element Undly_26{"Undly"};
    multiset<string> Undly_26_set;
    Undly_26.add_attribute("Sym", "UnderlyingSymbol_t_1814279726"); // 1
    Undly_26_set.insert("UnderlyingSymbol_t_1814279726");
    Undly_26.add_attribute("Sfx", "WI"); // 1
    Undly_26_set.insert("WI");
    Undly_26.add_attribute("ID", "UnderlyingSecurityID_t_117676698"); // 1
    Undly_26_set.insert("UnderlyingSecurityID_t_117676698");
    Undly_26.add_attribute("Src", "M"); // 1
    Undly_26_set.insert("M");
    Undly_26.add_attribute("Prod", "13"); // 1
    Undly_26_set.insert("13");
    Undly_26.add_attribute("CFI", "UnderlyingCFICode_t_1315692384"); // 1
    Undly_26_set.insert("UnderlyingCFICode_t_1315692384");
    Undly_26.add_attribute("SecTyp", "AMENDED"); // 1
    Undly_26_set.insert("AMENDED");
    Undly_26.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1052496979"); // 1
    Undly_26_set.insert("UnderlyingSecuritySubType_t_1052496979");
    Undly_26.add_attribute("MMY", "2012389745"); // 1
    Undly_26_set.insert("2012389745");
    Undly_26.add_attribute("Mat", "UnderlyingMaturityDate_t_1674172582"); // 1
    Undly_26_set.insert("UnderlyingMaturityDate_t_1674172582");
    Undly_26.add_attribute("MatTm", "1798198948"); // 1
    Undly_26_set.insert("1798198948");
    Undly_26.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1211648400"); // 1
    Undly_26_set.insert("UnderlyingCouponPaymentDate_t_1211648400");
    Undly_26.add_attribute("RestrctTyp", "FR"); // 1
    Undly_26_set.insert("FR");
    Undly_26.add_attribute("Snrty", "SB"); // 1
    Undly_26_set.insert("SB");
    Undly_26.add_attribute("NotlPctOut", "20002185.830000"); // 1
    Undly_26_set.insert("20002185.830000");
    Undly_26.add_attribute("OrigNotlPctOut", "18092786.100000"); // 1
    Undly_26_set.insert("18092786.100000");
    Undly_26.add_attribute("AttchPnt", "21057477.840000"); // 1
    Undly_26_set.insert("21057477.840000");
    Undly_26.add_attribute("DetchPnt", "14951128.660000"); // 1
    Undly_26_set.insert("14951128.660000");
    Undly_26.add_attribute("Issued", "UnderlyingIssueDate_t_691187648"); // 1
    Undly_26_set.insert("UnderlyingIssueDate_t_691187648");
    Undly_26.add_attribute("RepoCollSecTyp", "706384530"); // 1
    Undly_26_set.insert("706384530");
    Undly_26.add_attribute("RepoTrm", "2072467031"); // 1
    Undly_26_set.insert("2072467031");
    Undly_26.add_attribute("RepoRt", "10951504.790000"); // 1
    Undly_26_set.insert("10951504.790000");
    Undly_26.add_attribute("Fctr", "6642359.510000"); // 1
    Undly_26_set.insert("6642359.510000");
    Undly_26.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1356840669"); // 1
    Undly_26_set.insert("UnderlyingCreditRating_t_1356840669");
    Undly_26.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_511412263"); // 1
    Undly_26_set.insert("UnderlyingInstrRegistry_t_511412263");
    Undly_26.add_attribute("Ctry", "207994362"); // 1
    Undly_26_set.insert("207994362");
    Undly_26.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1136835560"); // 1
    Undly_26_set.insert("UnderlyingStateOrProvinceOfIssue_t_1136835560");
    Undly_26.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_473548495"); // 1
    Undly_26_set.insert("UnderlyingLocaleOfIssue_t_473548495");
    Undly_26.add_attribute("Redeem", "UnderlyingRedemptionDate_t_116351400"); // 1
    Undly_26_set.insert("UnderlyingRedemptionDate_t_116351400");
    Undly_26.add_attribute("StrkPx", "20694681.710000"); // 1
    Undly_26_set.insert("20694681.710000");
    Undly_26.add_attribute("StrkCcy", "GBP"); // 1
    Undly_26_set.insert("GBP");
    Undly_26.add_attribute("OptA", "724379566"); // 1
    Undly_26_set.insert("724379566");
    Undly_26.add_attribute("Mult", "20221545.570000"); // 1
    Undly_26_set.insert("20221545.570000");
    Undly_26.add_attribute("MultTyp", "0"); // 1
    Undly_26_set.insert("0");
    Undly_26.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_26_set.insert("2");
    Undly_26.add_attribute("UOM", "Bbl"); // 1
    Undly_26_set.insert("Bbl");
    Undly_26.add_attribute("UOMQty", "14017882.950000"); // 1
    Undly_26_set.insert("14017882.950000");
    Undly_26.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_26_set.insert("MMbbl");
    Undly_26.add_attribute("PxUOMQty", "10552693.900000"); // 1
    Undly_26_set.insert("10552693.900000");
    Undly_26.add_attribute("TmUnit", "Min"); // 1
    Undly_26_set.insert("Min");
    Undly_26.add_attribute("ExerStyle", "1"); // 1
    Undly_26_set.insert("1");
    Undly_26.add_attribute("CpnRt", "1194341.420000"); // 1
    Undly_26_set.insert("1194341.420000");
    Undly_26.add_attribute("Exch", "UnderlyingSecurityExchange_t_1217784549"); // 1
    Undly_26_set.insert("UnderlyingSecurityExchange_t_1217784549");
    Undly_26.add_attribute("Issr", "UnderlyingIssuer_t_1897923784"); // 1
    Undly_26_set.insert("UnderlyingIssuer_t_1897923784");
    Undly_26.add_attribute("EncUndIssrLen", "2119652725"); // 1
    Undly_26_set.insert("2119652725");
    Undly_26.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_879579512"); // 1
    Undly_26_set.insert("EncodedUnderlyingIssuer_t_879579512");
    Undly_26.add_attribute("Desc", "UnderlyingSecurityDesc_t_1856187920"); // 1
    Undly_26_set.insert("UnderlyingSecurityDesc_t_1856187920");
    Undly_26.add_attribute("EncUndSecDescLen", "1467281944"); // 1
    Undly_26_set.insert("1467281944");
    Undly_26.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1570767160"); // 1
    Undly_26_set.insert("EncodedUnderlyingSecurityDesc_t_1570767160");
    Undly_26.add_attribute("CPPgm", "UnderlyingCPProgram_t_415088803"); // 1
    Undly_26_set.insert("UnderlyingCPProgram_t_415088803");
    Undly_26.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1392265327"); // 1
    Undly_26_set.insert("UnderlyingCPRegType_t_1392265327");
    Undly_26.add_attribute("AllocPct", "5184339.910000"); // 1
    Undly_26_set.insert("5184339.910000");
    Undly_26.add_attribute("Ccy", "GBP"); // 1
    Undly_26_set.insert("GBP");
    Undly_26.add_attribute("Qty", "10298462.540000"); // 1
    Undly_26_set.insert("10298462.540000");
    Undly_26.add_attribute("SettlTyp", "2"); // 1
    Undly_26_set.insert("2");
    Undly_26.add_attribute("CashAmt", "UnderlyingCashAmount_t_1738457908"); // 1
    Undly_26_set.insert("UnderlyingCashAmount_t_1738457908");
    Undly_26.add_attribute("CashTyp", "DIFF"); // 1
    Undly_26_set.insert("DIFF");
    Undly_26.add_attribute("Px", "14036705.160000"); // 1
    Undly_26_set.insert("14036705.160000");
    Undly_26.add_attribute("DirtPx", "16604424.310000"); // 1
    Undly_26_set.insert("16604424.310000");
    Undly_26.add_attribute("EndPx", "12603889.600000"); // 1
    Undly_26_set.insert("12603889.600000");
    Undly_26.add_attribute("StartVal", "UnderlyingStartValue_t_1186817995"); // 1
    Undly_26_set.insert("UnderlyingStartValue_t_1186817995");
    Undly_26.add_attribute("CurVal", "UnderlyingCurrentValue_t_237338349"); // 1
    Undly_26_set.insert("UnderlyingCurrentValue_t_237338349");
    Undly_26.add_attribute("EndVal", "UnderlyingEndValue_t_1135059869"); // 1
    Undly_26_set.insert("UnderlyingEndValue_t_1135059869");
    Undly_26.add_attribute("AdjQty", "21154935.490000"); // 1
    Undly_26_set.insert("21154935.490000");
    Undly_26.add_attribute("FxRate", "11223719.710000"); // 1
    Undly_26_set.insert("11223719.710000");
    Undly_26.add_attribute("FxRateCalc", "D"); // 1
    Undly_26_set.insert("D");
    Undly_26.add_attribute("CapValu", "UnderlyingCapValue_t_1369798196"); // 1
    Undly_26_set.insert("UnderlyingCapValue_t_1369798196");
    Undly_26.add_attribute("SetMeth", "UnderlyingSettlMethod_t_912418925"); // 1
    Undly_26_set.insert("UnderlyingSettlMethod_t_912418925");
    Undly_26.add_attribute("PutCall", "1233208905"); // 1
    Undly_26_set.insert("1233208905");
    all_values.push_back(Undly_26_set);
    all_compo_names.insert("Undly_26_set");

    {
      xml_element UndAID_26{"UndAID"};
      multiset<string> UndAID_26_set;
      UndAID_26.add_attribute("AltID", "UnderlyingSecurityAltID_t_150791777"); // 2
      UndAID_26_set.insert("UnderlyingSecurityAltID_t_150791777");
      UndAID_26.add_attribute("AltIDSrc", "K"); // 2
      UndAID_26_set.insert("K");
      all_values.push_back(UndAID_26_set);
      all_compo_names.insert("UndAID_26_set");

      Undly_26.add_element(UndAID_26);
    }
    {
      xml_element Stip_47{"Stip"};
      multiset<string> Stip_47_set;
      Stip_47.add_attribute("Typ", "CPY"); // 2
      Stip_47_set.insert("CPY");
      Stip_47.add_attribute("Val", "UnderlyingStipValue_t_1368576327"); // 2
      Stip_47_set.insert("UnderlyingStipValue_t_1368576327");
      all_values.push_back(Stip_47_set);
      all_compo_names.insert("Stip_47_set");

      Undly_26.add_element(Stip_47);
    }
    {
      xml_element Pty_126{"Pty"};
      multiset<string> Pty_126_set;
      Pty_126.add_attribute("ID", "UnderlyingInstrumentPartyID_t_103621314"); // 2
      Pty_126_set.insert("UnderlyingInstrumentPartyID_t_103621314");
      Pty_126.add_attribute("Src", "C"); // 2
      Pty_126_set.insert("C");
      Pty_126.add_attribute("R", "42"); // 2
      Pty_126_set.insert("42");
      all_values.push_back(Pty_126_set);
      all_compo_names.insert("Pty_126_set");

      {
        xml_element Sub_126{"Sub"};
        multiset<string> Sub_126_set;
        Sub_126.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1959809235"); // 3
        Sub_126_set.insert("UnderlyingInstrumentPartySubID_t_1959809235");
        Sub_126.add_attribute("Typ", "13"); // 3
        Sub_126_set.insert("13");
        all_values.push_back(Sub_126_set);
        all_compo_names.insert("Sub_126_set");

        Pty_126.add_element(Sub_126);
      }
      Undly_26.add_element(Pty_126);
    }
    elt.add_element(Undly_26);
  } // end Undly
  { // DerivSecDef
    xml_element DerivSecDef_1{"DerivSecDef"};
    {
      xml_element DerivInstrmt_2{"DerivInstrmt"};
      multiset<string> DerivInstrmt_2_set;
      DerivInstrmt_2.add_attribute("Sym", "DerivativeSymbol_t_1671439351"); // 2
      DerivInstrmt_2_set.insert("DerivativeSymbol_t_1671439351");
      DerivInstrmt_2.add_attribute("Sfx", "CD"); // 2
      DerivInstrmt_2_set.insert("CD");
      DerivInstrmt_2.add_attribute("ID", "DerivativeSecurityID_t_2036875749"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityID_t_2036875749");
      DerivInstrmt_2.add_attribute("Src", "7"); // 2
      DerivInstrmt_2_set.insert("7");
      DerivInstrmt_2.add_attribute("Prod", "6"); // 2
      DerivInstrmt_2_set.insert("6");
      DerivInstrmt_2.add_attribute("ProdCmplx", "DerivativeProductComplex_t_491014449"); // 2
      DerivInstrmt_2_set.insert("DerivativeProductComplex_t_491014449");
      DerivInstrmt_2.add_attribute("FlexProdElig", "true"); // 2
      DerivInstrmt_2_set.insert("true");
      DerivInstrmt_2.add_attribute("SecGrp", "DerivativeSecurityGroup_t_446574612"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityGroup_t_446574612");
      DerivInstrmt_2.add_attribute("CFI", "DerivativeCFICode_t_81988710"); // 2
      DerivInstrmt_2_set.insert("DerivativeCFICode_t_81988710");
      DerivInstrmt_2.add_attribute("SecTyp", "OOF"); // 2
      DerivInstrmt_2_set.insert("OOF");
      DerivInstrmt_2.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_1850245129"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecuritySubType_t_1850245129");
      DerivInstrmt_2.add_attribute("MMY", "1742431141"); // 2
      DerivInstrmt_2_set.insert("1742431141");
      DerivInstrmt_2.add_attribute("MatDt", "DerivativeMaturityDate_t_1688536009"); // 2
      DerivInstrmt_2_set.insert("DerivativeMaturityDate_t_1688536009");
      DerivInstrmt_2.add_attribute("MatTm", "889579476"); // 2
      DerivInstrmt_2_set.insert("889579476");
      DerivInstrmt_2.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_1979769491"); // 2
      DerivInstrmt_2_set.insert("DerivativeSettleOnOpenFlag_t_1979769491");
      DerivInstrmt_2.add_attribute("AsgnMeth", "676112230"); // 2
      DerivInstrmt_2_set.insert("676112230");
      DerivInstrmt_2.add_attribute("Status", "2"); // 2
      DerivInstrmt_2_set.insert("2");
      DerivInstrmt_2.add_attribute("IssDt", "DerivativeIssueDate_t_954657814"); // 2
      DerivInstrmt_2_set.insert("DerivativeIssueDate_t_954657814");
      DerivInstrmt_2.add_attribute("Rgstry", "DerivativeInstrRegistry_t_854051745"); // 2
      DerivInstrmt_2_set.insert("DerivativeInstrRegistry_t_854051745");
      DerivInstrmt_2.add_attribute("Ctry", "79903925"); // 2
      DerivInstrmt_2_set.insert("79903925");
      DerivInstrmt_2.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_1867076739"); // 2
      DerivInstrmt_2_set.insert("DerivativeStateOrProvinceOfIssue_t_1867076739");
      DerivInstrmt_2.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_2087260651"); // 2
      DerivInstrmt_2_set.insert("DerivativeLocaleOfIssue_t_2087260651");
      DerivInstrmt_2.add_attribute("StrkPx", "2306957.020000"); // 2
      DerivInstrmt_2_set.insert("2306957.020000");
      DerivInstrmt_2.add_attribute("StrkCcy", "CAN"); // 2
      DerivInstrmt_2_set.insert("CAN");
      DerivInstrmt_2.add_attribute("StrkMult", "15992720.290000"); // 2
      DerivInstrmt_2_set.insert("15992720.290000");
      DerivInstrmt_2.add_attribute("StrkValu", "1763955.840000"); // 2
      DerivInstrmt_2_set.insert("1763955.840000");
      DerivInstrmt_2.add_attribute("OptAt", "469748528"); // 2
      DerivInstrmt_2_set.insert("469748528");
      DerivInstrmt_2.add_attribute("Mult", "16999442.200000"); // 2
      DerivInstrmt_2_set.insert("16999442.200000");
      DerivInstrmt_2.add_attribute("MultTyp", "0"); // 2
      DerivInstrmt_2_set.insert("0");
      DerivInstrmt_2.add_attribute("FlowSchedTyp", "0"); // 2
      DerivInstrmt_2_set.insert("0");
      DerivInstrmt_2.add_attribute("MinPxIncr", "12238999.230000"); // 2
      DerivInstrmt_2_set.insert("12238999.230000");
      DerivInstrmt_2.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_216135561"); // 2
      DerivInstrmt_2_set.insert("DerivativeMinPriceIncrementAmount_t_216135561");
      DerivInstrmt_2.add_attribute("UOM", "t"); // 2
      DerivInstrmt_2_set.insert("t");
      DerivInstrmt_2.add_attribute("UOMQty", "12662896.170000"); // 2
      DerivInstrmt_2_set.insert("12662896.170000");
      DerivInstrmt_2.add_attribute("PxUOM", "MMBtu"); // 2
      DerivInstrmt_2_set.insert("MMBtu");
      DerivInstrmt_2.add_attribute("PxUOMQty", "14947655.000000"); // 2
      DerivInstrmt_2_set.insert("14947655.000000");
      DerivInstrmt_2.add_attribute("SettlMeth", "P"); // 2
      DerivInstrmt_2_set.insert("P");
      DerivInstrmt_2.add_attribute("PxQteMeth", "INT"); // 2
      DerivInstrmt_2_set.insert("INT");
      DerivInstrmt_2.add_attribute("ValMeth", "EQTY"); // 2
      DerivInstrmt_2_set.insert("EQTY");
      DerivInstrmt_2.add_attribute("ListMeth", "0"); // 2
      DerivInstrmt_2_set.insert("0");
      DerivInstrmt_2.add_attribute("CapPx", "16722107.990000"); // 2
      DerivInstrmt_2_set.insert("16722107.990000");
      DerivInstrmt_2.add_attribute("FlrPx", "11717017.040000"); // 2
      DerivInstrmt_2_set.insert("11717017.040000");
      DerivInstrmt_2.add_attribute("PutCall", "1"); // 2
      DerivInstrmt_2_set.insert("1");
      DerivInstrmt_2.add_attribute("ExerStyle", "0"); // 2
      DerivInstrmt_2_set.insert("0");
      DerivInstrmt_2.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_1003987547"); // 2
      DerivInstrmt_2_set.insert("DerivativeOptPayAmount_t_1003987547");
      DerivInstrmt_2.add_attribute("TmUnit", "Mo"); // 2
      DerivInstrmt_2_set.insert("Mo");
      DerivInstrmt_2.add_attribute("Exch", "DerivativeSecurityExchange_t_1271896004"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityExchange_t_1271896004");
      DerivInstrmt_2.add_attribute("PosLmt", "1958645361"); // 2
      DerivInstrmt_2_set.insert("1958645361");
      DerivInstrmt_2.add_attribute("NTPosLmt", "1690405303"); // 2
      DerivInstrmt_2_set.insert("1690405303");
      DerivInstrmt_2.add_attribute("Issr", "DerivativeIssuer_t_1351799929"); // 2
      DerivInstrmt_2_set.insert("DerivativeIssuer_t_1351799929");
      DerivInstrmt_2.add_attribute("EncIssrLen", "1678238453"); // 2
      DerivInstrmt_2_set.insert("1678238453");
      DerivInstrmt_2.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_1630182306"); // 2
      DerivInstrmt_2_set.insert("DerivativeEncodedIssuer_t_1630182306");
      DerivInstrmt_2.add_attribute("Desc", "DerivativeSecurityDesc_t_1582495631"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityDesc_t_1582495631");
      DerivInstrmt_2.add_attribute("EncSecDescLen", "1751012723"); // 2
      DerivInstrmt_2_set.insert("1751012723");
      DerivInstrmt_2.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_775118709"); // 2
      DerivInstrmt_2_set.insert("DerivativeEncodedSecurityDesc_t_775118709");
      DerivInstrmt_2.add_attribute("CSetMo", "1034284013"); // 2
      DerivInstrmt_2_set.insert("1034284013");
      all_values.push_back(DerivInstrmt_2_set);
      all_compo_names.insert("DerivInstrmt_2_set");

      {
        xml_element AID_19{"AID"};
        multiset<string> AID_19_set;
        AID_19.add_attribute("ID", "DerivativeSecurityAltID_t_1927408307"); // 3
        AID_19_set.insert("DerivativeSecurityAltID_t_1927408307");
        AID_19.add_attribute("Src", "B"); // 3
        AID_19_set.insert("B");
        all_values.push_back(AID_19_set);
        all_compo_names.insert("AID_19_set");

        DerivInstrmt_2.add_element(AID_19);
      }
      {
        xml_element SecXML_19{"SecXML"};
        multiset<string> SecXML_19_set;
        SecXML_19.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_586744585"); // 3
        SecXML_19_set.insert("DerivativeSecurityXMLSchema_t_586744585");
        all_values.push_back(SecXML_19_set);
        all_compo_names.insert("SecXML_19_set");

        DerivInstrmt_2.add_element(SecXML_19);
      }
      {
        xml_element Evnt_19{"Evnt"};
        multiset<string> Evnt_19_set;
        Evnt_19.add_attribute("EventTyp", "19"); // 3
        Evnt_19_set.insert("19");
        Evnt_19.add_attribute("Dt", "DerivativeEventDate_t_211742540"); // 3
        Evnt_19_set.insert("DerivativeEventDate_t_211742540");
        Evnt_19.add_attribute("Tm", "DerivativeEventTime_t_1810644509"); // 3
        Evnt_19_set.insert("DerivativeEventTime_t_1810644509");
        Evnt_19.add_attribute("Px", "21322650.400000"); // 3
        Evnt_19_set.insert("21322650.400000");
        Evnt_19.add_attribute("Txt", "DerivativeEventText_t_1215493591"); // 3
        Evnt_19_set.insert("DerivativeEventText_t_1215493591");
        all_values.push_back(Evnt_19_set);
        all_compo_names.insert("Evnt_19_set");

        DerivInstrmt_2.add_element(Evnt_19);
      }
      {
        xml_element Pty_127{"Pty"};
        multiset<string> Pty_127_set;
        Pty_127.add_attribute("ID", "DerivativeInstrumentPartyID_t_929450478"); // 3
        Pty_127_set.insert("DerivativeInstrumentPartyID_t_929450478");
        Pty_127.add_attribute("Src", "3"); // 3
        Pty_127_set.insert("3");
        Pty_127.add_attribute("R", "58"); // 3
        Pty_127_set.insert("58");
        all_values.push_back(Pty_127_set);
        all_compo_names.insert("Pty_127_set");

        {
          xml_element Sub_127{"Sub"};
          multiset<string> Sub_127_set;
          Sub_127.add_attribute("ID", "DerivativeInstrumentPartySubID_t_1120492396"); // 4
          Sub_127_set.insert("DerivativeInstrumentPartySubID_t_1120492396");
          Sub_127.add_attribute("Typ", "8"); // 4
          Sub_127_set.insert("8");
          all_values.push_back(Sub_127_set);
          all_compo_names.insert("Sub_127_set");

          Pty_127.add_element(Sub_127);
        }
        DerivInstrmt_2.add_element(Pty_127);
      }
      DerivSecDef_1.add_element(DerivInstrmt_2);
    }
    {
      xml_element Attrb_7{"Attrb"};
      multiset<string> Attrb_7_set;
      Attrb_7.add_attribute("Typ", "13"); // 2
      Attrb_7_set.insert("13");
      Attrb_7.add_attribute("Val", "DerivativeInstrAttribValue_t_1739681362"); // 2
      Attrb_7_set.insert("DerivativeInstrAttribValue_t_1739681362");
      all_values.push_back(Attrb_7_set);
      all_compo_names.insert("Attrb_7_set");

      DerivSecDef_1.add_element(Attrb_7);
    }
    {
      xml_element MktSegGrp_1{"MktSegGrp"};
      multiset<string> MktSegGrp_1_set;
      MktSegGrp_1.add_attribute("MktID", "MarketID_t_854348919"); // 2
      MktSegGrp_1_set.insert("MarketID_t_854348919");
      MktSegGrp_1.add_attribute("MktSegID", "MarketSegmentID_t_1163747710"); // 2
      MktSegGrp_1_set.insert("MarketSegmentID_t_1163747710");
      all_values.push_back(MktSegGrp_1_set);
      all_compo_names.insert("MktSegGrp_1_set");

      {
        xml_element SecTrdgRules_1{"SecTrdgRules"};
        {
          xml_element BaseTrdgRules_1{"BaseTrdgRules"};
          multiset<string> BaseTrdgRules_1_set;
          BaseTrdgRules_1.add_attribute("ExpirationCycle", "1"); // 4
          BaseTrdgRules_1_set.insert("1");
          BaseTrdgRules_1.add_attribute("MinTrdVol", "12686555.460000"); // 4
          BaseTrdgRules_1_set.insert("12686555.460000");
          BaseTrdgRules_1.add_attribute("MaxTrdVol", "202516.090000"); // 4
          BaseTrdgRules_1_set.insert("202516.090000");
          BaseTrdgRules_1.add_attribute("MxPxVar", "5887926.000000"); // 4
          BaseTrdgRules_1_set.insert("5887926.000000");
          BaseTrdgRules_1.add_attribute("ImpldMktInd", "2"); // 4
          BaseTrdgRules_1_set.insert("2");
          BaseTrdgRules_1.add_attribute("TrdCcy", "CAN"); // 4
          BaseTrdgRules_1_set.insert("CAN");
          BaseTrdgRules_1.add_attribute("RndLot", "17448678.310000"); // 4
          BaseTrdgRules_1_set.insert("17448678.310000");
          BaseTrdgRules_1.add_attribute("MlegModel", "1"); // 4
          BaseTrdgRules_1_set.insert("1");
          BaseTrdgRules_1.add_attribute("MlegPxMeth", "0"); // 4
          BaseTrdgRules_1_set.insert("0");
          BaseTrdgRules_1.add_attribute("PxTyp", "9"); // 4
          BaseTrdgRules_1_set.insert("9");
          all_values.push_back(BaseTrdgRules_1_set);
          all_compo_names.insert("BaseTrdgRules_1_set");

          {
            xml_element TickRules_1{"TickRules"};
            multiset<string> TickRules_1_set;
            TickRules_1.add_attribute("StartTickPxRng", "11131808.500000"); // 5
            TickRules_1_set.insert("11131808.500000");
            TickRules_1.add_attribute("EndTickPxRng", "3895316.230000"); // 5
            TickRules_1_set.insert("3895316.230000");
            TickRules_1.add_attribute("TickIncr", "666801.790000"); // 5
            TickRules_1_set.insert("666801.790000");
            TickRules_1.add_attribute("TickRuleTyp", "0"); // 5
            TickRules_1_set.insert("0");
            all_values.push_back(TickRules_1_set);
            all_compo_names.insert("TickRules_1_set");

            BaseTrdgRules_1.add_element(TickRules_1);
          }
          {
            xml_element LotTypeRules_1{"LotTypeRules"};
            multiset<string> LotTypeRules_1_set;
            LotTypeRules_1.add_attribute("LotTyp", "2"); // 5
            LotTypeRules_1_set.insert("2");
            LotTypeRules_1.add_attribute("MinLotSz", "6534247.650000"); // 5
            LotTypeRules_1_set.insert("6534247.650000");
            all_values.push_back(LotTypeRules_1_set);
            all_compo_names.insert("LotTypeRules_1_set");

            BaseTrdgRules_1.add_element(LotTypeRules_1);
          }
          {
            xml_element PxLmts_1{"PxLmts"};
            multiset<string> PxLmts_1_set;
            PxLmts_1.add_attribute("PxLmtTyp", "1"); // 5
            PxLmts_1_set.insert("1");
            PxLmts_1.add_attribute("LowLmtPx", "18461414.010000"); // 5
            PxLmts_1_set.insert("18461414.010000");
            PxLmts_1.add_attribute("HiLmtPx", "3165856.260000"); // 5
            PxLmts_1_set.insert("3165856.260000");
            PxLmts_1.add_attribute("TrdgRefPx", "6465327.330000"); // 5
            PxLmts_1_set.insert("6465327.330000");
            all_values.push_back(PxLmts_1_set);
            all_compo_names.insert("PxLmts_1_set");

            BaseTrdgRules_1.add_element(PxLmts_1);
          }
          SecTrdgRules_1.add_element(BaseTrdgRules_1);
        }
        {
          xml_element TrdgSesRulesGrp_1{"TrdgSesRulesGrp"};
          multiset<string> TrdgSesRulesGrp_1_set;
          TrdgSesRulesGrp_1.add_attribute("SesID", "3"); // 4
          TrdgSesRulesGrp_1_set.insert("3");
          TrdgSesRulesGrp_1.add_attribute("SesSub", "6"); // 4
          TrdgSesRulesGrp_1_set.insert("6");
          all_values.push_back(TrdgSesRulesGrp_1_set);
          all_compo_names.insert("TrdgSesRulesGrp_1_set");

          {
            xml_element TrdgSesRules_1{"TrdgSesRules"};
            {
              xml_element OrdTypRules_1{"OrdTypRules"};
              multiset<string> OrdTypRules_1_set;
              OrdTypRules_1.add_attribute("OrdTyp", "G"); // 6
              OrdTypRules_1_set.insert("G");
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
              ExecInstRules_1.add_attribute("ExecInstValu", "B"); // 6
              ExecInstRules_1_set.insert("B");
              all_values.push_back(ExecInstRules_1_set);
              all_compo_names.insert("ExecInstRules_1_set");

              TrdgSesRules_1.add_element(ExecInstRules_1);
            }
            {
              xml_element MtchRules_1{"MtchRules"};
              multiset<string> MtchRules_1_set;
              MtchRules_1.add_attribute("MtchAlgo", "MatchAlgorithm_t_1336326951"); // 6
              MtchRules_1_set.insert("MatchAlgorithm_t_1336326951");
              MtchRules_1.add_attribute("MtchTyp", "S4"); // 6
              MtchRules_1_set.insert("S4");
              all_values.push_back(MtchRules_1_set);
              all_compo_names.insert("MtchRules_1_set");

              TrdgSesRules_1.add_element(MtchRules_1);
            }
            {
              xml_element MDFeedTyps_1{"MDFeedTyps"};
              multiset<string> MDFeedTyps_1_set;
              MDFeedTyps_1.add_attribute("MDFeedTyp", "MDFeedType_t_1958726215"); // 6
              MDFeedTyps_1_set.insert("MDFeedType_t_1958726215");
              MDFeedTyps_1.add_attribute("MktDepth", "43192222"); // 6
              MDFeedTyps_1_set.insert("43192222");
              MDFeedTyps_1.add_attribute("MDBkTyp", "3"); // 6
              MDFeedTyps_1_set.insert("3");
              all_values.push_back(MDFeedTyps_1_set);
              all_compo_names.insert("MDFeedTyps_1_set");

              TrdgSesRules_1.add_element(MDFeedTyps_1);
            }
            TrdgSesRulesGrp_1.add_element(TrdgSesRules_1);
          }
          SecTrdgRules_1.add_element(TrdgSesRulesGrp_1);
        }
        {
          xml_element Attrb_8{"Attrb"};
          multiset<string> Attrb_8_set;
          Attrb_8.add_attribute("Typ", "27"); // 4
          Attrb_8_set.insert("27");
          Attrb_8.add_attribute("Val", "NestedInstrAttribValue_t_1311847768"); // 4
          Attrb_8_set.insert("NestedInstrAttribValue_t_1311847768");
          all_values.push_back(Attrb_8_set);
          all_compo_names.insert("Attrb_8_set");

          SecTrdgRules_1.add_element(Attrb_8);
        }
        MktSegGrp_1.add_element(SecTrdgRules_1);
      }
      {
        xml_element StrkRules_1{"StrkRules"};
        multiset<string> StrkRules_1_set;
        StrkRules_1.add_attribute("StrkRule", "StrikeRuleID_t_505488465"); // 3
        StrkRules_1_set.insert("StrikeRuleID_t_505488465");
        StrkRules_1.add_attribute("StartStrkPxRng", "1524742.090000"); // 3
        StrkRules_1_set.insert("1524742.090000");
        StrkRules_1.add_attribute("EndStrkPxRng", "17049156.700000"); // 3
        StrkRules_1_set.insert("17049156.700000");
        StrkRules_1.add_attribute("StrkIncr", "3369017.870000"); // 3
        StrkRules_1_set.insert("3369017.870000");
        StrkRules_1.add_attribute("StrkExrStyle", "0"); // 3
        StrkRules_1_set.insert("0");
        all_values.push_back(StrkRules_1_set);
        all_compo_names.insert("StrkRules_1_set");

        {
          xml_element MatRules_1{"MatRules"};
          multiset<string> MatRules_1_set;
          MatRules_1.add_attribute("MatRuleID", "MaturityRuleID_t_1302299853"); // 4
          MatRules_1_set.insert("MaturityRuleID_t_1302299853");
          MatRules_1.add_attribute("MMYFmt", "1"); // 4
          MatRules_1_set.insert("1");
          MatRules_1.add_attribute("MMYIncrUnits", "2"); // 4
          MatRules_1_set.insert("2");
          MatRules_1.add_attribute("StartMMY", "334696020"); // 4
          MatRules_1_set.insert("334696020");
          MatRules_1.add_attribute("EndMMY", "812250765"); // 4
          MatRules_1_set.insert("812250765");
          MatRules_1.add_attribute("MMYIncr", "288133002"); // 4
          MatRules_1_set.insert("288133002");
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
    xml_element RelSym_1{"RelSym"};
    multiset<string> RelSym_1_set;
    RelSym_1.add_attribute("ListUpdActn", "M"); // 1
    RelSym_1_set.insert("M");
    RelSym_1.add_attribute("CorpActn", "U"); // 1
    RelSym_1_set.insert("U");
    RelSym_1.add_attribute("Ccy", "JPY"); // 1
    RelSym_1_set.insert("JPY");
    RelSym_1.add_attribute("TxnTm", "RelSymTransactTime_t_1621189617"); // 1
    RelSym_1_set.insert("RelSymTransactTime_t_1621189617");
    RelSym_1.add_attribute("Txt", "Text_t_1371386590"); // 1
    RelSym_1_set.insert("Text_t_1371386590");
    RelSym_1.add_attribute("EncTxtLen", "866156702"); // 1
    RelSym_1_set.insert("866156702");
    RelSym_1.add_attribute("EncTxt", "EncodedText_t_387857313"); // 1
    RelSym_1_set.insert("EncodedText_t_387857313");
    all_values.push_back(RelSym_1_set);
    all_compo_names.insert("RelSym_1_set");

    {
      xml_element Instrmt_17{"Instrmt"};
      multiset<string> Instrmt_17_set;
      Instrmt_17.add_attribute("Sym", "Symbol_t_469939047"); // 2
      Instrmt_17_set.insert("Symbol_t_469939047");
      Instrmt_17.add_attribute("Sfx", "WI"); // 2
      Instrmt_17_set.insert("WI");
      Instrmt_17.add_attribute("ID", "SecurityID_t_1864784101"); // 2
      Instrmt_17_set.insert("SecurityID_t_1864784101");
      Instrmt_17.add_attribute("Src", "M"); // 2
      Instrmt_17_set.insert("M");
      Instrmt_17.add_attribute("Prod", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("ProdCmplx", "ProductComplex_t_1186273247"); // 2
      Instrmt_17_set.insert("ProductComplex_t_1186273247");
      Instrmt_17.add_attribute("SecGrp", "SecurityGroup_t_500226466"); // 2
      Instrmt_17_set.insert("SecurityGroup_t_500226466");
      Instrmt_17.add_attribute("CFI", "CFICode_t_104897411"); // 2
      Instrmt_17_set.insert("CFICode_t_104897411");
      Instrmt_17.add_attribute("SecTyp", "BDN"); // 2
      Instrmt_17_set.insert("BDN");
      Instrmt_17.add_attribute("SubTyp", "SecuritySubType_t_63908075"); // 2
      Instrmt_17_set.insert("SecuritySubType_t_63908075");
      Instrmt_17.add_attribute("MMY", "1416745180"); // 2
      Instrmt_17_set.insert("1416745180");
      Instrmt_17.add_attribute("MatDt", "MaturityDate_t_29514920"); // 2
      Instrmt_17_set.insert("MaturityDate_t_29514920");
      Instrmt_17.add_attribute("MatTm", "216382284"); // 2
      Instrmt_17_set.insert("216382284");
      Instrmt_17.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_974177202"); // 2
      Instrmt_17_set.insert("SettleOnOpenFlag_t_974177202");
      Instrmt_17.add_attribute("AsgnMeth", "366416708"); // 2
      Instrmt_17_set.insert("366416708");
      Instrmt_17.add_attribute("Status", "2"); // 2
      Instrmt_17_set.insert("2");
      Instrmt_17.add_attribute("CpnPmt", "CouponPaymentDate_t_128993408"); // 2
      Instrmt_17_set.insert("CouponPaymentDate_t_128993408");
      Instrmt_17.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_17_set.insert("XR");
      Instrmt_17.add_attribute("Snrty", "SB"); // 2
      Instrmt_17_set.insert("SB");
      Instrmt_17.add_attribute("NotlPctOut", "4636894.280000"); // 2
      Instrmt_17_set.insert("4636894.280000");
      Instrmt_17.add_attribute("OrigNotlPctOut", "8777373.880000"); // 2
      Instrmt_17_set.insert("8777373.880000");
      Instrmt_17.add_attribute("AttchPnt", "6873051.290000"); // 2
      Instrmt_17_set.insert("6873051.290000");
      Instrmt_17.add_attribute("DetchPnt", "8650656.270000"); // 2
      Instrmt_17_set.insert("8650656.270000");
      Instrmt_17.add_attribute("Issued", "IssueDate_t_435610016"); // 2
      Instrmt_17_set.insert("IssueDate_t_435610016");
      Instrmt_17.add_attribute("RepoCollSecTyp", "462353345"); // 2
      Instrmt_17_set.insert("462353345");
      Instrmt_17.add_attribute("RepoTrm", "1919866592"); // 2
      Instrmt_17_set.insert("1919866592");
      Instrmt_17.add_attribute("RepoRt", "6552339.840000"); // 2
      Instrmt_17_set.insert("6552339.840000");
      Instrmt_17.add_attribute("Fctr", "20835429.620000"); // 2
      Instrmt_17_set.insert("20835429.620000");
      Instrmt_17.add_attribute("CrdRtg", "CreditRating_t_1143769534"); // 2
      Instrmt_17_set.insert("CreditRating_t_1143769534");
      Instrmt_17.add_attribute("Rgstry", "InstrRegistry_t_1521390686"); // 2
      Instrmt_17_set.insert("InstrRegistry_t_1521390686");
      Instrmt_17.add_attribute("IssuCtry", "323916627"); // 2
      Instrmt_17_set.insert("323916627");
      Instrmt_17.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1613708581"); // 2
      Instrmt_17_set.insert("StateOrProvinceOfIssue_t_1613708581");
      Instrmt_17.add_attribute("Lcl", "LocaleOfIssue_t_246768924"); // 2
      Instrmt_17_set.insert("LocaleOfIssue_t_246768924");
      Instrmt_17.add_attribute("Redeem", "RedemptionDate_t_41217081"); // 2
      Instrmt_17_set.insert("RedemptionDate_t_41217081");
      Instrmt_17.add_attribute("StrkPx", "1552088.330000"); // 2
      Instrmt_17_set.insert("1552088.330000");
      Instrmt_17.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_17_set.insert("GBP");
      Instrmt_17.add_attribute("StrkMult", "6554352.990000"); // 2
      Instrmt_17_set.insert("6554352.990000");
      Instrmt_17.add_attribute("StrkValu", "4133715.240000"); // 2
      Instrmt_17_set.insert("4133715.240000");
      Instrmt_17.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("StrkPxBndryPrcsn", "18301167.040000"); // 2
      Instrmt_17_set.insert("18301167.040000");
      Instrmt_17.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("OptAt", "935725659"); // 2
      Instrmt_17_set.insert("935725659");
      Instrmt_17.add_attribute("Mult", "6568102.590000"); // 2
      Instrmt_17_set.insert("6568102.590000");
      Instrmt_17.add_attribute("MultTyp", "0"); // 2
      Instrmt_17_set.insert("0");
      Instrmt_17.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_17_set.insert("3");
      Instrmt_17.add_attribute("MinPxIncr", "7858036.670000"); // 2
      Instrmt_17_set.insert("7858036.670000");
      Instrmt_17.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1212935035"); // 2
      Instrmt_17_set.insert("MinPriceIncrementAmount_t_1212935035");
      Instrmt_17.add_attribute("UOM", "tn"); // 2
      Instrmt_17_set.insert("tn");
      Instrmt_17.add_attribute("UOMQty", "12494930.950000"); // 2
      Instrmt_17_set.insert("12494930.950000");
      Instrmt_17.add_attribute("PxUOM", "USD"); // 2
      Instrmt_17_set.insert("USD");
      Instrmt_17.add_attribute("PxUOMQty", "3752900.170000"); // 2
      Instrmt_17_set.insert("3752900.170000");
      Instrmt_17.add_attribute("SettlMeth", "C"); // 2
      Instrmt_17_set.insert("C");
      Instrmt_17.add_attribute("ExerStyle", "0"); // 2
      Instrmt_17_set.insert("0");
      Instrmt_17.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("OptPayAmt", "OptPayoutAmount_t_1886941666"); // 2
      Instrmt_17_set.insert("OptPayoutAmount_t_1886941666");
      Instrmt_17.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_17_set.insert("STD");
      Instrmt_17.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_17_set.insert("FUT");
      Instrmt_17.add_attribute("ListMeth", "1"); // 2
      Instrmt_17_set.insert("1");
      Instrmt_17.add_attribute("CapPx", "4079398.150000"); // 2
      Instrmt_17_set.insert("4079398.150000");
      Instrmt_17.add_attribute("FlrPx", "10976193.040000"); // 2
      Instrmt_17_set.insert("10976193.040000");
      Instrmt_17.add_attribute("PutCall", "0"); // 2
      Instrmt_17_set.insert("0");
      Instrmt_17.add_attribute("FlexInd", "false"); // 2
      Instrmt_17_set.insert("false");
      Instrmt_17.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_17_set.insert("false");
      Instrmt_17.add_attribute("TmUnit", "Min"); // 2
      Instrmt_17_set.insert("Min");
      Instrmt_17.add_attribute("CpnRt", "9631828.520000"); // 2
      Instrmt_17_set.insert("9631828.520000");
      Instrmt_17.add_attribute("Exch", "SecurityExchange_t_218843065"); // 2
      Instrmt_17_set.insert("SecurityExchange_t_218843065");
      Instrmt_17.add_attribute("PosLmt", "1160096619"); // 2
      Instrmt_17_set.insert("1160096619");
      Instrmt_17.add_attribute("NTPosLmt", "1376554376"); // 2
      Instrmt_17_set.insert("1376554376");
      Instrmt_17.add_attribute("Issr", "Issuer_t_970359849"); // 2
      Instrmt_17_set.insert("Issuer_t_970359849");
      Instrmt_17.add_attribute("EncIssrLen", "1879439994"); // 2
      Instrmt_17_set.insert("1879439994");
      Instrmt_17.add_attribute("EncIssr", "EncodedIssuer_t_1059187433"); // 2
      Instrmt_17_set.insert("EncodedIssuer_t_1059187433");
      Instrmt_17.add_attribute("Desc", "SecurityDesc_t_1751391554"); // 2
      Instrmt_17_set.insert("SecurityDesc_t_1751391554");
      Instrmt_17.add_attribute("EncSecDescLen", "667682005"); // 2
      Instrmt_17_set.insert("667682005");
      Instrmt_17.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1715997692"); // 2
      Instrmt_17_set.insert("EncodedSecurityDesc_t_1715997692");
      Instrmt_17.add_attribute("Pool", "Pool_t_751356318"); // 2
      Instrmt_17_set.insert("Pool_t_751356318");
      Instrmt_17.add_attribute("CSetMo", "2103978414"); // 2
      Instrmt_17_set.insert("2103978414");
      Instrmt_17.add_attribute("CPPgm", "99"); // 2
      Instrmt_17_set.insert("99");
      Instrmt_17.add_attribute("CPRegT", "CPRegType_t_1964291354"); // 2
      Instrmt_17_set.insert("CPRegType_t_1964291354");
      Instrmt_17.add_attribute("Dated", "DatedDate_t_1791963302"); // 2
      Instrmt_17_set.insert("DatedDate_t_1791963302");
      Instrmt_17.add_attribute("IntAcrl", "InterestAccrualDate_t_1603810806"); // 2
      Instrmt_17_set.insert("InterestAccrualDate_t_1603810806");
      all_values.push_back(Instrmt_17_set);
      all_compo_names.insert("Instrmt_17_set");

      {
        xml_element AID_20{"AID"};
        multiset<string> AID_20_set;
        AID_20.add_attribute("AltID", "SecurityAltID_t_1907480130"); // 3
        AID_20_set.insert("SecurityAltID_t_1907480130");
        AID_20.add_attribute("AltIDSrc", "A"); // 3
        AID_20_set.insert("A");
        all_values.push_back(AID_20_set);
        all_compo_names.insert("AID_20_set");

        Instrmt_17.add_element(AID_20);
      }
      {
        xml_element SecXML_20{"SecXML"};
        multiset<string> SecXML_20_set;
        SecXML_20.add_attribute("Schema", "SecurityXMLSchema_t_1570885880"); // 3
        SecXML_20_set.insert("SecurityXMLSchema_t_1570885880");
        all_values.push_back(SecXML_20_set);
        all_compo_names.insert("SecXML_20_set");

        Instrmt_17.add_element(SecXML_20);
      }
      {
        xml_element Evnt_20{"Evnt"};
        multiset<string> Evnt_20_set;
        Evnt_20.add_attribute("EventTyp", "14"); // 3
        Evnt_20_set.insert("14");
        Evnt_20.add_attribute("Dt", "EventDate_t_857413034"); // 3
        Evnt_20_set.insert("EventDate_t_857413034");
        Evnt_20.add_attribute("Tm", "EventTime_t_1310343899"); // 3
        Evnt_20_set.insert("EventTime_t_1310343899");
        Evnt_20.add_attribute("Px", "11728280.500000"); // 3
        Evnt_20_set.insert("11728280.500000");
        Evnt_20.add_attribute("Txt", "EventText_t_1631115710"); // 3
        Evnt_20_set.insert("EventText_t_1631115710");
        all_values.push_back(Evnt_20_set);
        all_compo_names.insert("Evnt_20_set");

        Instrmt_17.add_element(Evnt_20);
      }
      {
        xml_element Pty_128{"Pty"};
        multiset<string> Pty_128_set;
        Pty_128.add_attribute("ID", "InstrumentPartyID_t_46087804"); // 3
        Pty_128_set.insert("InstrumentPartyID_t_46087804");
        Pty_128.add_attribute("Src", "I"); // 3
        Pty_128_set.insert("I");
        Pty_128.add_attribute("R", "19"); // 3
        Pty_128_set.insert("19");
        all_values.push_back(Pty_128_set);
        all_compo_names.insert("Pty_128_set");

        {
          xml_element Sub_128{"Sub"};
          multiset<string> Sub_128_set;
          Sub_128.add_attribute("ID", "InstrumentPartySubID_t_395540290"); // 4
          Sub_128_set.insert("InstrumentPartySubID_t_395540290");
          Sub_128.add_attribute("Typ", "16"); // 4
          Sub_128_set.insert("16");
          all_values.push_back(Sub_128_set);
          all_compo_names.insert("Sub_128_set");

          Pty_128.add_element(Sub_128);
        }
        Instrmt_17.add_element(Pty_128);
      }
      {
        xml_element CmplxEvnt_17{"CmplxEvnt"};
        multiset<string> CmplxEvnt_17_set;
        CmplxEvnt_17.add_attribute("Typ", "3"); // 3
        CmplxEvnt_17_set.insert("3");
        CmplxEvnt_17.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_900201610"); // 3
        CmplxEvnt_17_set.insert("ComplexOptPayoutAmount_t_900201610");
        CmplxEvnt_17.add_attribute("Px", "10511758.080000"); // 3
        CmplxEvnt_17_set.insert("10511758.080000");
        CmplxEvnt_17.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_17_set.insert("3");
        CmplxEvnt_17.add_attribute("PxBndryPrcsn", "20602982.290000"); // 3
        CmplxEvnt_17_set.insert("20602982.290000");
        CmplxEvnt_17.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_17_set.insert("2");
        CmplxEvnt_17.add_attribute("Cond", "1"); // 3
        CmplxEvnt_17_set.insert("1");
        all_values.push_back(CmplxEvnt_17_set);
        all_compo_names.insert("CmplxEvnt_17_set");

        {
          xml_element EvntDts_17{"EvntDts"};
          multiset<string> EvntDts_17_set;
          EvntDts_17.add_attribute("StartDt", "ComplexEventStartDate_t_1792254575"); // 4
          EvntDts_17_set.insert("ComplexEventStartDate_t_1792254575");
          EvntDts_17.add_attribute("EndDt", "ComplexEventEndDate_t_1339433970"); // 4
          EvntDts_17_set.insert("ComplexEventEndDate_t_1339433970");
          all_values.push_back(EvntDts_17_set);
          all_compo_names.insert("EvntDts_17_set");

          {
            xml_element EvntTms_17{"EvntTms"};
            multiset<string> EvntTms_17_set;
            EvntTms_17.add_attribute("StartTm", "365714924"); // 5
            EvntTms_17_set.insert("365714924");
            EvntTms_17.add_attribute("EndTm", "312452932"); // 5
            EvntTms_17_set.insert("312452932");
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
      xml_element InstrmtExt_5{"InstrmtExt"};
      multiset<string> InstrmtExt_5_set;
      InstrmtExt_5.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_5_set.insert("1");
      InstrmtExt_5.add_attribute("PctAtRisk", "11170712.430000"); // 2
      InstrmtExt_5_set.insert("11170712.430000");
      all_values.push_back(InstrmtExt_5_set);
      all_compo_names.insert("InstrmtExt_5_set");

      {
        xml_element Attrb_9{"Attrb"};
        multiset<string> Attrb_9_set;
        Attrb_9.add_attribute("Typ", "17"); // 3
        Attrb_9_set.insert("17");
        Attrb_9.add_attribute("Val", "InstrAttribValue_t_1262265725"); // 3
        Attrb_9_set.insert("InstrAttribValue_t_1262265725");
        all_values.push_back(Attrb_9_set);
        all_compo_names.insert("Attrb_9_set");

        InstrmtExt_5.add_element(Attrb_9);
      }
      RelSym_1.add_element(InstrmtExt_5);
    }
    {
      xml_element PxLmts2_1{"PxLmts2"};
      multiset<string> PxLmts2_1_set;
      PxLmts2_1.add_attribute("PxLmtTyp", "0"); // 2
      PxLmts2_1_set.insert("0");
      PxLmts2_1.add_attribute("LowLmtPx", "20609110.000000"); // 2
      PxLmts2_1_set.insert("20609110.000000");
      PxLmts2_1.add_attribute("HiLmtPx", "7185928.830000"); // 2
      PxLmts2_1_set.insert("7185928.830000");
      PxLmts2_1.add_attribute("TrdgRefPx", "6938754.310000"); // 2
      PxLmts2_1_set.insert("6938754.310000");
      all_values.push_back(PxLmts2_1_set);
      all_compo_names.insert("PxLmts2_1_set");

      RelSym_1.add_element(PxLmts2_1);
    }
    {
      xml_element Leg_28{"Leg"};
      multiset<string> Leg_28_set;
      Leg_28.add_attribute("Sym", "LegSymbol_t_2080680672"); // 2
      Leg_28_set.insert("LegSymbol_t_2080680672");
      Leg_28.add_attribute("Sfx", "WI"); // 2
      Leg_28_set.insert("WI");
      Leg_28.add_attribute("ID", "LegSecurityID_t_832670705"); // 2
      Leg_28_set.insert("LegSecurityID_t_832670705");
      Leg_28.add_attribute("Src", "J"); // 2
      Leg_28_set.insert("J");
      Leg_28.add_attribute("Prod", "6"); // 2
      Leg_28_set.insert("6");
      Leg_28.add_attribute("CFI", "LegCFICode_t_2005498755"); // 2
      Leg_28_set.insert("LegCFICode_t_2005498755");
      Leg_28.add_attribute("SecTyp", "WITHDRN"); // 2
      Leg_28_set.insert("WITHDRN");
      Leg_28.add_attribute("SecSubTyp", "LegSecuritySubType_t_1498426818"); // 2
      Leg_28_set.insert("LegSecuritySubType_t_1498426818");
      Leg_28.add_attribute("MMY", "1438782973"); // 2
      Leg_28_set.insert("1438782973");
      Leg_28.add_attribute("Mat", "LegMaturityDate_t_855493487"); // 2
      Leg_28_set.insert("LegMaturityDate_t_855493487");
      Leg_28.add_attribute("MatTm", "1893967109"); // 2
      Leg_28_set.insert("1893967109");
      Leg_28.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1526775929"); // 2
      Leg_28_set.insert("LegCouponPaymentDate_t_1526775929");
      Leg_28.add_attribute("Issued", "LegIssueDate_t_428097590"); // 2
      Leg_28_set.insert("LegIssueDate_t_428097590");
      Leg_28.add_attribute("RepoCollSecTyp", "646685071"); // 2
      Leg_28_set.insert("646685071");
      Leg_28.add_attribute("RepoTrm", "430468090"); // 2
      Leg_28_set.insert("430468090");
      Leg_28.add_attribute("RepoRt", "2195447.590000"); // 2
      Leg_28_set.insert("2195447.590000");
      Leg_28.add_attribute("Fctr", "5594996.520000"); // 2
      Leg_28_set.insert("5594996.520000");
      Leg_28.add_attribute("CrdRtg", "LegCreditRating_t_710714627"); // 2
      Leg_28_set.insert("LegCreditRating_t_710714627");
      Leg_28.add_attribute("Rgstry", "LegInstrRegistry_t_981351778"); // 2
      Leg_28_set.insert("LegInstrRegistry_t_981351778");
      Leg_28.add_attribute("Ctry", "204270579"); // 2
      Leg_28_set.insert("204270579");
      Leg_28.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2050148597"); // 2
      Leg_28_set.insert("LegStateOrProvinceOfIssue_t_2050148597");
      Leg_28.add_attribute("Lcl", "LegLocaleOfIssue_t_1347066702"); // 2
      Leg_28_set.insert("LegLocaleOfIssue_t_1347066702");
      Leg_28.add_attribute("Redeem", "LegRedemptionDate_t_516723511"); // 2
      Leg_28_set.insert("LegRedemptionDate_t_516723511");
      Leg_28.add_attribute("Strk", "8106129.630000"); // 2
      Leg_28_set.insert("8106129.630000");
      Leg_28.add_attribute("StrkCcy", "JPY"); // 2
      Leg_28_set.insert("JPY");
      Leg_28.add_attribute("OptA", "2072878688"); // 2
      Leg_28_set.insert("2072878688");
      Leg_28.add_attribute("Cmult", "12505332.460000"); // 2
      Leg_28_set.insert("12505332.460000");
      Leg_28.add_attribute("MultTyp", "0"); // 2
      Leg_28_set.insert("0");
      Leg_28.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_28_set.insert("3");
      Leg_28.add_attribute("UOM", "Gal"); // 2
      Leg_28_set.insert("Gal");
      Leg_28.add_attribute("UOMQty", "6322955.860000"); // 2
      Leg_28_set.insert("6322955.860000");
      Leg_28.add_attribute("PxUOM", "USD"); // 2
      Leg_28_set.insert("USD");
      Leg_28.add_attribute("PxUOMQty", "6295957.340000"); // 2
      Leg_28_set.insert("6295957.340000");
      Leg_28.add_attribute("TmUnit", "Yr"); // 2
      Leg_28_set.insert("Yr");
      Leg_28.add_attribute("ExerStyle", "1"); // 2
      Leg_28_set.insert("1");
      Leg_28.add_attribute("CpnRt", "4876108.420000"); // 2
      Leg_28_set.insert("4876108.420000");
      Leg_28.add_attribute("Exch", "LegSecurityExchange_t_1697147765"); // 2
      Leg_28_set.insert("LegSecurityExchange_t_1697147765");
      Leg_28.add_attribute("Issr", "LegIssuer_t_1589265223"); // 2
      Leg_28_set.insert("LegIssuer_t_1589265223");
      Leg_28.add_attribute("EncLegIssrLen", "1926393815"); // 2
      Leg_28_set.insert("1926393815");
      Leg_28.add_attribute("EncLegIssr", "EncodedLegIssuer_t_405157604"); // 2
      Leg_28_set.insert("EncodedLegIssuer_t_405157604");
      Leg_28.add_attribute("Desc", "LegSecurityDesc_t_1335748684"); // 2
      Leg_28_set.insert("LegSecurityDesc_t_1335748684");
      Leg_28.add_attribute("EncLegSecDescLen", "1305686096"); // 2
      Leg_28_set.insert("1305686096");
      Leg_28.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_833255194"); // 2
      Leg_28_set.insert("EncodedLegSecurityDesc_t_833255194");
      Leg_28.add_attribute("RatioQty", "19824337.550000"); // 2
      Leg_28_set.insert("19824337.550000");
      Leg_28.add_attribute("Side", "B"); // 2
      Leg_28_set.insert("B");
      Leg_28.add_attribute("Ccy", "CHF"); // 2
      Leg_28_set.insert("CHF");
      Leg_28.add_attribute("Pool", "LegPool_t_299385165"); // 2
      Leg_28_set.insert("LegPool_t_299385165");
      Leg_28.add_attribute("Dated", "LegDatedDate_t_2034151732"); // 2
      Leg_28_set.insert("LegDatedDate_t_2034151732");
      Leg_28.add_attribute("CSetMo", "598720338"); // 2
      Leg_28_set.insert("598720338");
      Leg_28.add_attribute("IntAcrl", "LegInterestAccrualDate_t_202050114"); // 2
      Leg_28_set.insert("LegInterestAccrualDate_t_202050114");
      Leg_28.add_attribute("PutCall", "1233734786"); // 2
      Leg_28_set.insert("1233734786");
      Leg_28.add_attribute("LegOptionRatio", "11154438.500000"); // 2
      Leg_28_set.insert("11154438.500000");
      Leg_28.add_attribute("Px", "10126630.770000"); // 2
      Leg_28_set.insert("10126630.770000");
      all_values.push_back(Leg_28_set);
      all_compo_names.insert("Leg_28_set");

      {
        xml_element LegAID_28{"LegAID"};
        multiset<string> LegAID_28_set;
        LegAID_28.add_attribute("SecAltID", "LegSecurityAltID_t_1550389084"); // 3
        LegAID_28_set.insert("LegSecurityAltID_t_1550389084");
        LegAID_28.add_attribute("SecAltIDSrc", "K"); // 3
        LegAID_28_set.insert("K");
        all_values.push_back(LegAID_28_set);
        all_compo_names.insert("LegAID_28_set");

        Leg_28.add_element(LegAID_28);
      }
      RelSym_1.add_element(Leg_28);
    }
    elt.add_element(RelSym_1);
  } // end RelSym
  { // RelSym
    xml_element RelSym_2{"RelSym"};
    multiset<string> RelSym_2_set;
    RelSym_2.add_attribute("ListUpdActn", "A"); // 1
    RelSym_2_set.insert("A");
    RelSym_2.add_attribute("CorpActn", "L"); // 1
    RelSym_2_set.insert("L");
    RelSym_2.add_attribute("Ccy", "USD"); // 1
    RelSym_2_set.insert("USD");
    RelSym_2.add_attribute("TxnTm", "RelSymTransactTime_t_450363712"); // 1
    RelSym_2_set.insert("RelSymTransactTime_t_450363712");
    RelSym_2.add_attribute("Txt", "Text_t_1085025561"); // 1
    RelSym_2_set.insert("Text_t_1085025561");
    RelSym_2.add_attribute("EncTxtLen", "220545431"); // 1
    RelSym_2_set.insert("220545431");
    RelSym_2.add_attribute("EncTxt", "EncodedText_t_1079959446"); // 1
    RelSym_2_set.insert("EncodedText_t_1079959446");
    all_values.push_back(RelSym_2_set);
    all_compo_names.insert("RelSym_2_set");

    {
      xml_element Instrmt_18{"Instrmt"};
      multiset<string> Instrmt_18_set;
      Instrmt_18.add_attribute("Sym", "Symbol_t_360447557"); // 2
      Instrmt_18_set.insert("Symbol_t_360447557");
      Instrmt_18.add_attribute("Sfx", "CD"); // 2
      Instrmt_18_set.insert("CD");
      Instrmt_18.add_attribute("ID", "SecurityID_t_1567570288"); // 2
      Instrmt_18_set.insert("SecurityID_t_1567570288");
      Instrmt_18.add_attribute("Src", "3"); // 2
      Instrmt_18_set.insert("3");
      Instrmt_18.add_attribute("Prod", "7"); // 2
      Instrmt_18_set.insert("7");
      Instrmt_18.add_attribute("ProdCmplx", "ProductComplex_t_1346480455"); // 2
      Instrmt_18_set.insert("ProductComplex_t_1346480455");
      Instrmt_18.add_attribute("SecGrp", "SecurityGroup_t_315269278"); // 2
      Instrmt_18_set.insert("SecurityGroup_t_315269278");
      Instrmt_18.add_attribute("CFI", "CFICode_t_1088914096"); // 2
      Instrmt_18_set.insert("CFICode_t_1088914096");
      Instrmt_18.add_attribute("SecTyp", "WITHDRN"); // 2
      Instrmt_18_set.insert("WITHDRN");
      Instrmt_18.add_attribute("SubTyp", "SecuritySubType_t_1148524473"); // 2
      Instrmt_18_set.insert("SecuritySubType_t_1148524473");
      Instrmt_18.add_attribute("MMY", "923864203"); // 2
      Instrmt_18_set.insert("923864203");
      Instrmt_18.add_attribute("MatDt", "MaturityDate_t_93353442"); // 2
      Instrmt_18_set.insert("MaturityDate_t_93353442");
      Instrmt_18.add_attribute("MatTm", "53840779"); // 2
      Instrmt_18_set.insert("53840779");
      Instrmt_18.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1318313963"); // 2
      Instrmt_18_set.insert("SettleOnOpenFlag_t_1318313963");
      Instrmt_18.add_attribute("AsgnMeth", "392738608"); // 2
      Instrmt_18_set.insert("392738608");
      Instrmt_18.add_attribute("Status", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("CpnPmt", "CouponPaymentDate_t_1917034301"); // 2
      Instrmt_18_set.insert("CouponPaymentDate_t_1917034301");
      Instrmt_18.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_18_set.insert("MM");
      Instrmt_18.add_attribute("Snrty", "SB"); // 2
      Instrmt_18_set.insert("SB");
      Instrmt_18.add_attribute("NotlPctOut", "8849945.030000"); // 2
      Instrmt_18_set.insert("8849945.030000");
      Instrmt_18.add_attribute("OrigNotlPctOut", "16074518.000000"); // 2
      Instrmt_18_set.insert("16074518.000000");
      Instrmt_18.add_attribute("AttchPnt", "5771490.850000"); // 2
      Instrmt_18_set.insert("5771490.850000");
      Instrmt_18.add_attribute("DetchPnt", "6386259.150000"); // 2
      Instrmt_18_set.insert("6386259.150000");
      Instrmt_18.add_attribute("Issued", "IssueDate_t_398026269"); // 2
      Instrmt_18_set.insert("IssueDate_t_398026269");
      Instrmt_18.add_attribute("RepoCollSecTyp", "1230587768"); // 2
      Instrmt_18_set.insert("1230587768");
      Instrmt_18.add_attribute("RepoTrm", "1091355890"); // 2
      Instrmt_18_set.insert("1091355890");
      Instrmt_18.add_attribute("RepoRt", "19800723.100000"); // 2
      Instrmt_18_set.insert("19800723.100000");
      Instrmt_18.add_attribute("Fctr", "16809514.800000"); // 2
      Instrmt_18_set.insert("16809514.800000");
      Instrmt_18.add_attribute("CrdRtg", "CreditRating_t_28897803"); // 2
      Instrmt_18_set.insert("CreditRating_t_28897803");
      Instrmt_18.add_attribute("Rgstry", "InstrRegistry_t_53134093"); // 2
      Instrmt_18_set.insert("InstrRegistry_t_53134093");
      Instrmt_18.add_attribute("IssuCtry", "613427278"); // 2
      Instrmt_18_set.insert("613427278");
      Instrmt_18.add_attribute("StPrv", "StateOrProvinceOfIssue_t_389345360"); // 2
      Instrmt_18_set.insert("StateOrProvinceOfIssue_t_389345360");
      Instrmt_18.add_attribute("Lcl", "LocaleOfIssue_t_364517929"); // 2
      Instrmt_18_set.insert("LocaleOfIssue_t_364517929");
      Instrmt_18.add_attribute("Redeem", "RedemptionDate_t_33513919"); // 2
      Instrmt_18_set.insert("RedemptionDate_t_33513919");
      Instrmt_18.add_attribute("StrkPx", "2994570.350000"); // 2
      Instrmt_18_set.insert("2994570.350000");
      Instrmt_18.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_18_set.insert("GBP");
      Instrmt_18.add_attribute("StrkMult", "6147263.130000"); // 2
      Instrmt_18_set.insert("6147263.130000");
      Instrmt_18.add_attribute("StrkValu", "12065974.360000"); // 2
      Instrmt_18_set.insert("12065974.360000");
      Instrmt_18.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_18_set.insert("3");
      Instrmt_18.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("StrkPxBndryPrcsn", "21304616.400000"); // 2
      Instrmt_18_set.insert("21304616.400000");
      Instrmt_18.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_18_set.insert("2");
      Instrmt_18.add_attribute("OptAt", "1817091565"); // 2
      Instrmt_18_set.insert("1817091565");
      Instrmt_18.add_attribute("Mult", "13012919.550000"); // 2
      Instrmt_18_set.insert("13012919.550000");
      Instrmt_18.add_attribute("MultTyp", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_18_set.insert("3");
      Instrmt_18.add_attribute("MinPxIncr", "10708426.080000"); // 2
      Instrmt_18_set.insert("10708426.080000");
      Instrmt_18.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_818074403"); // 2
      Instrmt_18_set.insert("MinPriceIncrementAmount_t_818074403");
      Instrmt_18.add_attribute("UOM", "USD"); // 2
      Instrmt_18_set.insert("USD");
      Instrmt_18.add_attribute("UOMQty", "19558371.120000"); // 2
      Instrmt_18_set.insert("19558371.120000");
      Instrmt_18.add_attribute("PxUOM", "Bu"); // 2
      Instrmt_18_set.insert("Bu");
      Instrmt_18.add_attribute("PxUOMQty", "13615095.150000"); // 2
      Instrmt_18_set.insert("13615095.150000");
      Instrmt_18.add_attribute("SettlMeth", "P"); // 2
      Instrmt_18_set.insert("P");
      Instrmt_18.add_attribute("ExerStyle", "0"); // 2
      Instrmt_18_set.insert("0");
      Instrmt_18.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("OptPayAmt", "OptPayoutAmount_t_1538335269"); // 2
      Instrmt_18_set.insert("OptPayoutAmount_t_1538335269");
      Instrmt_18.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_18_set.insert("PCTPAR");
      Instrmt_18.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_18_set.insert("EQTY");
      Instrmt_18.add_attribute("ListMeth", "0"); // 2
      Instrmt_18_set.insert("0");
      Instrmt_18.add_attribute("CapPx", "5617915.800000"); // 2
      Instrmt_18_set.insert("5617915.800000");
      Instrmt_18.add_attribute("FlrPx", "5915087.460000"); // 2
      Instrmt_18_set.insert("5915087.460000");
      Instrmt_18.add_attribute("PutCall", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("FlexInd", "false"); // 2
      Instrmt_18_set.insert("false");
      Instrmt_18.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_18_set.insert("false");
      Instrmt_18.add_attribute("TmUnit", "Yr"); // 2
      Instrmt_18_set.insert("Yr");
      Instrmt_18.add_attribute("CpnRt", "10439928.490000"); // 2
      Instrmt_18_set.insert("10439928.490000");
      Instrmt_18.add_attribute("Exch", "SecurityExchange_t_2005017039"); // 2
      Instrmt_18_set.insert("SecurityExchange_t_2005017039");
      Instrmt_18.add_attribute("PosLmt", "723278133"); // 2
      Instrmt_18_set.insert("723278133");
      Instrmt_18.add_attribute("NTPosLmt", "103106638"); // 2
      Instrmt_18_set.insert("103106638");
      Instrmt_18.add_attribute("Issr", "Issuer_t_1742210670"); // 2
      Instrmt_18_set.insert("Issuer_t_1742210670");
      Instrmt_18.add_attribute("EncIssrLen", "339045272"); // 2
      Instrmt_18_set.insert("339045272");
      Instrmt_18.add_attribute("EncIssr", "EncodedIssuer_t_86084630"); // 2
      Instrmt_18_set.insert("EncodedIssuer_t_86084630");
      Instrmt_18.add_attribute("Desc", "SecurityDesc_t_1572757743"); // 2
      Instrmt_18_set.insert("SecurityDesc_t_1572757743");
      Instrmt_18.add_attribute("EncSecDescLen", "8653189"); // 2
      Instrmt_18_set.insert("8653189");
      Instrmt_18.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1387376585"); // 2
      Instrmt_18_set.insert("EncodedSecurityDesc_t_1387376585");
      Instrmt_18.add_attribute("Pool", "Pool_t_1796043424"); // 2
      Instrmt_18_set.insert("Pool_t_1796043424");
      Instrmt_18.add_attribute("CSetMo", "1766253618"); // 2
      Instrmt_18_set.insert("1766253618");
      Instrmt_18.add_attribute("CPPgm", "1"); // 2
      Instrmt_18_set.insert("1");
      Instrmt_18.add_attribute("CPRegT", "CPRegType_t_466634179"); // 2
      Instrmt_18_set.insert("CPRegType_t_466634179");
      Instrmt_18.add_attribute("Dated", "DatedDate_t_403130400"); // 2
      Instrmt_18_set.insert("DatedDate_t_403130400");
      Instrmt_18.add_attribute("IntAcrl", "InterestAccrualDate_t_119089009"); // 2
      Instrmt_18_set.insert("InterestAccrualDate_t_119089009");
      all_values.push_back(Instrmt_18_set);
      all_compo_names.insert("Instrmt_18_set");

      {
        xml_element AID_21{"AID"};
        multiset<string> AID_21_set;
        AID_21.add_attribute("AltID", "SecurityAltID_t_744676735"); // 3
        AID_21_set.insert("SecurityAltID_t_744676735");
        AID_21.add_attribute("AltIDSrc", "6"); // 3
        AID_21_set.insert("6");
        all_values.push_back(AID_21_set);
        all_compo_names.insert("AID_21_set");

        Instrmt_18.add_element(AID_21);
      }
      {
        xml_element SecXML_21{"SecXML"};
        multiset<string> SecXML_21_set;
        SecXML_21.add_attribute("Schema", "SecurityXMLSchema_t_566068389"); // 3
        SecXML_21_set.insert("SecurityXMLSchema_t_566068389");
        all_values.push_back(SecXML_21_set);
        all_compo_names.insert("SecXML_21_set");

        Instrmt_18.add_element(SecXML_21);
      }
      {
        xml_element Evnt_21{"Evnt"};
        multiset<string> Evnt_21_set;
        Evnt_21.add_attribute("EventTyp", "1"); // 3
        Evnt_21_set.insert("1");
        Evnt_21.add_attribute("Dt", "EventDate_t_61769903"); // 3
        Evnt_21_set.insert("EventDate_t_61769903");
        Evnt_21.add_attribute("Tm", "EventTime_t_2104403658"); // 3
        Evnt_21_set.insert("EventTime_t_2104403658");
        Evnt_21.add_attribute("Px", "19294030.470000"); // 3
        Evnt_21_set.insert("19294030.470000");
        Evnt_21.add_attribute("Txt", "EventText_t_39851370"); // 3
        Evnt_21_set.insert("EventText_t_39851370");
        all_values.push_back(Evnt_21_set);
        all_compo_names.insert("Evnt_21_set");

        Instrmt_18.add_element(Evnt_21);
      }
      {
        xml_element Pty_129{"Pty"};
        multiset<string> Pty_129_set;
        Pty_129.add_attribute("ID", "InstrumentPartyID_t_1524153083"); // 3
        Pty_129_set.insert("InstrumentPartyID_t_1524153083");
        Pty_129.add_attribute("Src", "8"); // 3
        Pty_129_set.insert("8");
        Pty_129.add_attribute("R", "74"); // 3
        Pty_129_set.insert("74");
        all_values.push_back(Pty_129_set);
        all_compo_names.insert("Pty_129_set");

        {
          xml_element Sub_129{"Sub"};
          multiset<string> Sub_129_set;
          Sub_129.add_attribute("ID", "InstrumentPartySubID_t_1333247868"); // 4
          Sub_129_set.insert("InstrumentPartySubID_t_1333247868");
          Sub_129.add_attribute("Typ", "2"); // 4
          Sub_129_set.insert("2");
          all_values.push_back(Sub_129_set);
          all_compo_names.insert("Sub_129_set");

          Pty_129.add_element(Sub_129);
        }
        Instrmt_18.add_element(Pty_129);
      }
      {
        xml_element CmplxEvnt_18{"CmplxEvnt"};
        multiset<string> CmplxEvnt_18_set;
        CmplxEvnt_18.add_attribute("Typ", "8"); // 3
        CmplxEvnt_18_set.insert("8");
        CmplxEvnt_18.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1441799688"); // 3
        CmplxEvnt_18_set.insert("ComplexOptPayoutAmount_t_1441799688");
        CmplxEvnt_18.add_attribute("Px", "1665296.890000"); // 3
        CmplxEvnt_18_set.insert("1665296.890000");
        CmplxEvnt_18.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_18_set.insert("4");
        CmplxEvnt_18.add_attribute("PxBndryPrcsn", "175941.730000"); // 3
        CmplxEvnt_18_set.insert("175941.730000");
        CmplxEvnt_18.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_18_set.insert("3");
        CmplxEvnt_18.add_attribute("Cond", "2"); // 3
        CmplxEvnt_18_set.insert("2");
        all_values.push_back(CmplxEvnt_18_set);
        all_compo_names.insert("CmplxEvnt_18_set");

        {
          xml_element EvntDts_18{"EvntDts"};
          multiset<string> EvntDts_18_set;
          EvntDts_18.add_attribute("StartDt", "ComplexEventStartDate_t_356639445"); // 4
          EvntDts_18_set.insert("ComplexEventStartDate_t_356639445");
          EvntDts_18.add_attribute("EndDt", "ComplexEventEndDate_t_355720957"); // 4
          EvntDts_18_set.insert("ComplexEventEndDate_t_355720957");
          all_values.push_back(EvntDts_18_set);
          all_compo_names.insert("EvntDts_18_set");

          {
            xml_element EvntTms_18{"EvntTms"};
            multiset<string> EvntTms_18_set;
            EvntTms_18.add_attribute("StartTm", "133917290"); // 5
            EvntTms_18_set.insert("133917290");
            EvntTms_18.add_attribute("EndTm", "365292635"); // 5
            EvntTms_18_set.insert("365292635");
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
      xml_element InstrmtExt_6{"InstrmtExt"};
      multiset<string> InstrmtExt_6_set;
      InstrmtExt_6.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_6_set.insert("1");
      InstrmtExt_6.add_attribute("PctAtRisk", "19299607.140000"); // 2
      InstrmtExt_6_set.insert("19299607.140000");
      all_values.push_back(InstrmtExt_6_set);
      all_compo_names.insert("InstrmtExt_6_set");

      {
        xml_element Attrb_10{"Attrb"};
        multiset<string> Attrb_10_set;
        Attrb_10.add_attribute("Typ", "23"); // 3
        Attrb_10_set.insert("23");
        Attrb_10.add_attribute("Val", "InstrAttribValue_t_2053833088"); // 3
        Attrb_10_set.insert("InstrAttribValue_t_2053833088");
        all_values.push_back(Attrb_10_set);
        all_compo_names.insert("Attrb_10_set");

        InstrmtExt_6.add_element(Attrb_10);
      }
      RelSym_2.add_element(InstrmtExt_6);
    }
    {
      xml_element PxLmts2_2{"PxLmts2"};
      multiset<string> PxLmts2_2_set;
      PxLmts2_2.add_attribute("PxLmtTyp", "2"); // 2
      PxLmts2_2_set.insert("2");
      PxLmts2_2.add_attribute("LowLmtPx", "3871930.050000"); // 2
      PxLmts2_2_set.insert("3871930.050000");
      PxLmts2_2.add_attribute("HiLmtPx", "254384.490000"); // 2
      PxLmts2_2_set.insert("254384.490000");
      PxLmts2_2.add_attribute("TrdgRefPx", "9937879.800000"); // 2
      PxLmts2_2_set.insert("9937879.800000");
      all_values.push_back(PxLmts2_2_set);
      all_compo_names.insert("PxLmts2_2_set");

      RelSym_2.add_element(PxLmts2_2);
    }
    {
      xml_element Leg_29{"Leg"};
      multiset<string> Leg_29_set;
      Leg_29.add_attribute("Sym", "LegSymbol_t_4349272"); // 2
      Leg_29_set.insert("LegSymbol_t_4349272");
      Leg_29.add_attribute("Sfx", "CD"); // 2
      Leg_29_set.insert("CD");
      Leg_29.add_attribute("ID", "LegSecurityID_t_267049892"); // 2
      Leg_29_set.insert("LegSecurityID_t_267049892");
      Leg_29.add_attribute("Src", "2"); // 2
      Leg_29_set.insert("2");
      Leg_29.add_attribute("Prod", "6"); // 2
      Leg_29_set.insert("6");
      Leg_29.add_attribute("CFI", "LegCFICode_t_48969291"); // 2
      Leg_29_set.insert("LegCFICode_t_48969291");
      Leg_29.add_attribute("SecTyp", "RAN"); // 2
      Leg_29_set.insert("RAN");
      Leg_29.add_attribute("SecSubTyp", "LegSecuritySubType_t_2072579932"); // 2
      Leg_29_set.insert("LegSecuritySubType_t_2072579932");
      Leg_29.add_attribute("MMY", "392680270"); // 2
      Leg_29_set.insert("392680270");
      Leg_29.add_attribute("Mat", "LegMaturityDate_t_737330662"); // 2
      Leg_29_set.insert("LegMaturityDate_t_737330662");
      Leg_29.add_attribute("MatTm", "1258344152"); // 2
      Leg_29_set.insert("1258344152");
      Leg_29.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1662700758"); // 2
      Leg_29_set.insert("LegCouponPaymentDate_t_1662700758");
      Leg_29.add_attribute("Issued", "LegIssueDate_t_1993713444"); // 2
      Leg_29_set.insert("LegIssueDate_t_1993713444");
      Leg_29.add_attribute("RepoCollSecTyp", "552660192"); // 2
      Leg_29_set.insert("552660192");
      Leg_29.add_attribute("RepoTrm", "1829230448"); // 2
      Leg_29_set.insert("1829230448");
      Leg_29.add_attribute("RepoRt", "9601459.690000"); // 2
      Leg_29_set.insert("9601459.690000");
      Leg_29.add_attribute("Fctr", "5702543.650000"); // 2
      Leg_29_set.insert("5702543.650000");
      Leg_29.add_attribute("CrdRtg", "LegCreditRating_t_2098866775"); // 2
      Leg_29_set.insert("LegCreditRating_t_2098866775");
      Leg_29.add_attribute("Rgstry", "LegInstrRegistry_t_1668789164"); // 2
      Leg_29_set.insert("LegInstrRegistry_t_1668789164");
      Leg_29.add_attribute("Ctry", "926893811"); // 2
      Leg_29_set.insert("926893811");
      Leg_29.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_307104085"); // 2
      Leg_29_set.insert("LegStateOrProvinceOfIssue_t_307104085");
      Leg_29.add_attribute("Lcl", "LegLocaleOfIssue_t_1802706454"); // 2
      Leg_29_set.insert("LegLocaleOfIssue_t_1802706454");
      Leg_29.add_attribute("Redeem", "LegRedemptionDate_t_1292186446"); // 2
      Leg_29_set.insert("LegRedemptionDate_t_1292186446");
      Leg_29.add_attribute("Strk", "20502016.270000"); // 2
      Leg_29_set.insert("20502016.270000");
      Leg_29.add_attribute("StrkCcy", "EUR"); // 2
      Leg_29_set.insert("EUR");
      Leg_29.add_attribute("OptA", "1956551067"); // 2
      Leg_29_set.insert("1956551067");
      Leg_29.add_attribute("Cmult", "18342947.650000"); // 2
      Leg_29_set.insert("18342947.650000");
      Leg_29.add_attribute("MultTyp", "1"); // 2
      Leg_29_set.insert("1");
      Leg_29.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_29_set.insert("2");
      Leg_29.add_attribute("UOM", "Bcf"); // 2
      Leg_29_set.insert("Bcf");
      Leg_29.add_attribute("UOMQty", "16677913.280000"); // 2
      Leg_29_set.insert("16677913.280000");
      Leg_29.add_attribute("PxUOM", "Gal"); // 2
      Leg_29_set.insert("Gal");
      Leg_29.add_attribute("PxUOMQty", "9476489.900000"); // 2
      Leg_29_set.insert("9476489.900000");
      Leg_29.add_attribute("TmUnit", "Wk"); // 2
      Leg_29_set.insert("Wk");
      Leg_29.add_attribute("ExerStyle", "1"); // 2
      Leg_29_set.insert("1");
      Leg_29.add_attribute("CpnRt", "9966182.820000"); // 2
      Leg_29_set.insert("9966182.820000");
      Leg_29.add_attribute("Exch", "LegSecurityExchange_t_1839881050"); // 2
      Leg_29_set.insert("LegSecurityExchange_t_1839881050");
      Leg_29.add_attribute("Issr", "LegIssuer_t_899535840"); // 2
      Leg_29_set.insert("LegIssuer_t_899535840");
      Leg_29.add_attribute("EncLegIssrLen", "1389298552"); // 2
      Leg_29_set.insert("1389298552");
      Leg_29.add_attribute("EncLegIssr", "EncodedLegIssuer_t_429728064"); // 2
      Leg_29_set.insert("EncodedLegIssuer_t_429728064");
      Leg_29.add_attribute("Desc", "LegSecurityDesc_t_10396344"); // 2
      Leg_29_set.insert("LegSecurityDesc_t_10396344");
      Leg_29.add_attribute("EncLegSecDescLen", "904515663"); // 2
      Leg_29_set.insert("904515663");
      Leg_29.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_275957860"); // 2
      Leg_29_set.insert("EncodedLegSecurityDesc_t_275957860");
      Leg_29.add_attribute("RatioQty", "5630565.360000"); // 2
      Leg_29_set.insert("5630565.360000");
      Leg_29.add_attribute("Side", "G"); // 2
      Leg_29_set.insert("G");
      Leg_29.add_attribute("Ccy", "GBP"); // 2
      Leg_29_set.insert("GBP");
      Leg_29.add_attribute("Pool", "LegPool_t_537645590"); // 2
      Leg_29_set.insert("LegPool_t_537645590");
      Leg_29.add_attribute("Dated", "LegDatedDate_t_757409345"); // 2
      Leg_29_set.insert("LegDatedDate_t_757409345");
      Leg_29.add_attribute("CSetMo", "2060204713"); // 2
      Leg_29_set.insert("2060204713");
      Leg_29.add_attribute("IntAcrl", "LegInterestAccrualDate_t_844749675"); // 2
      Leg_29_set.insert("LegInterestAccrualDate_t_844749675");
      Leg_29.add_attribute("PutCall", "412632151"); // 2
      Leg_29_set.insert("412632151");
      Leg_29.add_attribute("LegOptionRatio", "12049075.110000"); // 2
      Leg_29_set.insert("12049075.110000");
      Leg_29.add_attribute("Px", "7474676.550000"); // 2
      Leg_29_set.insert("7474676.550000");
      all_values.push_back(Leg_29_set);
      all_compo_names.insert("Leg_29_set");

      {
        xml_element LegAID_29{"LegAID"};
        multiset<string> LegAID_29_set;
        LegAID_29.add_attribute("SecAltID", "LegSecurityAltID_t_1997815671"); // 3
        LegAID_29_set.insert("LegSecurityAltID_t_1997815671");
        LegAID_29.add_attribute("SecAltIDSrc", "F"); // 3
        LegAID_29_set.insert("F");
        all_values.push_back(LegAID_29_set);
        all_compo_names.insert("LegAID_29_set");

        Leg_29.add_element(LegAID_29);
      }
      RelSym_2.add_element(Leg_29);
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
