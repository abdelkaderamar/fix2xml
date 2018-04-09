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
  elt.add_attribute("RptID", "791396510"); // 0
  DerivativeSecurityList_message_t_0.insert("791396510");
  elt.add_attribute("ReqID", "SecurityReqID_t_1530672181"); // 0
  DerivativeSecurityList_message_t_0.insert("SecurityReqID_t_1530672181");
  elt.add_attribute("RspID", "SecurityResponseID_t_1982058115"); // 0
  DerivativeSecurityList_message_t_0.insert("SecurityResponseID_t_1982058115");
  elt.add_attribute("ReqRslt", "3"); // 0
  DerivativeSecurityList_message_t_0.insert("3");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_607449444"); // 0
  DerivativeSecurityList_message_t_0.insert("ClearingBusinessDate_t_607449444");
  elt.add_attribute("TxnTm", "TransactTime_t_1327814137"); // 0
  DerivativeSecurityList_message_t_0.insert("TransactTime_t_1327814137");
  elt.add_attribute("TotNoReltdSym", "354740395"); // 0
  DerivativeSecurityList_message_t_0.insert("354740395");
  elt.add_attribute("LastFragment", "Y"); // 0
  DerivativeSecurityList_message_t_0.insert("Y");
  all_values.push_back(DerivativeSecurityList_message_t_0);
  all_compo_names.insert("DerivativeSecurityList_message_t");

  { // Hdr
    xml_element Hdr_26{"Hdr"};
    multiset<string> Hdr_26_set;
    Hdr_26.add_attribute("SeqNum", "1445469583"); // 1
    Hdr_26_set.insert("1445469583");
    Hdr_26.add_attribute("SID", "SenderCompID_t_1131852119"); // 1
    Hdr_26_set.insert("SenderCompID_t_1131852119");
    Hdr_26.add_attribute("TID", "TargetCompID_t_675697389"); // 1
    Hdr_26_set.insert("TargetCompID_t_675697389");
    Hdr_26.add_attribute("OBID", "OnBehalfOfCompID_t_573810381"); // 1
    Hdr_26_set.insert("OnBehalfOfCompID_t_573810381");
    Hdr_26.add_attribute("D2ID", "DeliverToCompID_t_1346947793"); // 1
    Hdr_26_set.insert("DeliverToCompID_t_1346947793");
    Hdr_26.add_attribute("SSub", "SenderSubID_t_640001793"); // 1
    Hdr_26_set.insert("SenderSubID_t_640001793");
    Hdr_26.add_attribute("SLoc", "SenderLocationID_t_2014196607"); // 1
    Hdr_26_set.insert("SenderLocationID_t_2014196607");
    Hdr_26.add_attribute("TSub", "TargetSubID_t_164365114"); // 1
    Hdr_26_set.insert("TargetSubID_t_164365114");
    Hdr_26.add_attribute("TLoc", "TargetLocationID_t_1389350536"); // 1
    Hdr_26_set.insert("TargetLocationID_t_1389350536");
    Hdr_26.add_attribute("OBSub", "OnBehalfOfSubID_t_97606859"); // 1
    Hdr_26_set.insert("OnBehalfOfSubID_t_97606859");
    Hdr_26.add_attribute("OBLoc", "OnBehalfOfLocationID_t_727902288"); // 1
    Hdr_26_set.insert("OnBehalfOfLocationID_t_727902288");
    Hdr_26.add_attribute("D2Sub", "DeliverToSubID_t_1499266856"); // 1
    Hdr_26_set.insert("DeliverToSubID_t_1499266856");
    Hdr_26.add_attribute("D2Loc", "DeliverToLocationID_t_1046364497"); // 1
    Hdr_26_set.insert("DeliverToLocationID_t_1046364497");
    Hdr_26.add_attribute("PosDup", "N"); // 1
    Hdr_26_set.insert("N");
    Hdr_26.add_attribute("PosRsnd", "N"); // 1
    Hdr_26_set.insert("N");
    Hdr_26.add_attribute("Snt", "SendingTime_t_1610291876"); // 1
    Hdr_26_set.insert("SendingTime_t_1610291876");
    Hdr_26.add_attribute("OrigSnt", "OrigSendingTime_t_936216409"); // 1
    Hdr_26_set.insert("OrigSendingTime_t_936216409");
    Hdr_26.add_attribute("MsgEncd", "MessageEncoding_t_1844725323"); // 1
    Hdr_26_set.insert("MessageEncoding_t_1844725323");
    all_values.push_back(Hdr_26_set);
    all_compo_names.insert("Hdr_26_set");

    {
      xml_element Hop_26{"Hop"};
      multiset<string> Hop_26_set;
      Hop_26.add_attribute("ID", "HopCompID_t_515401569"); // 2
      Hop_26_set.insert("HopCompID_t_515401569");
      Hop_26.add_attribute("Ref", "1611421663"); // 2
      Hop_26_set.insert("1611421663");
      Hop_26.add_attribute("Snt", "HopSendingTime_t_264809671"); // 2
      Hop_26_set.insert("HopSendingTime_t_264809671");
      all_values.push_back(Hop_26_set);
      all_compo_names.insert("Hop_26_set");

      Hdr_26.add_element(Hop_26);
    }
    elt.add_element(Hdr_26);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_2{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_2_set;
    ApplSeqCtrl_2.add_attribute("ApplID", "ApplID_t_748888505"); // 1
    ApplSeqCtrl_2_set.insert("ApplID_t_748888505");
    ApplSeqCtrl_2.add_attribute("ApplSeqNum", "551363451"); // 1
    ApplSeqCtrl_2_set.insert("551363451");
    ApplSeqCtrl_2.add_attribute("ApplLastSeqNum", "1056206182"); // 1
    ApplSeqCtrl_2_set.insert("1056206182");
    ApplSeqCtrl_2.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_2_set.insert("true");
    all_values.push_back(ApplSeqCtrl_2_set);
    all_compo_names.insert("ApplSeqCtrl_2_set");

    elt.add_element(ApplSeqCtrl_2);
  } // end ApplSeqCtrl
  { // Undly
    xml_element Undly_24{"Undly"};
    multiset<string> Undly_24_set;
    Undly_24.add_attribute("Sym", "UnderlyingSymbol_t_385937918"); // 1
    Undly_24_set.insert("UnderlyingSymbol_t_385937918");
    Undly_24.add_attribute("Sfx", "WI"); // 1
    Undly_24_set.insert("WI");
    Undly_24.add_attribute("ID", "UnderlyingSecurityID_t_739526483"); // 1
    Undly_24_set.insert("UnderlyingSecurityID_t_739526483");
    Undly_24.add_attribute("Src", "G"); // 1
    Undly_24_set.insert("G");
    Undly_24.add_attribute("Prod", "7"); // 1
    Undly_24_set.insert("7");
    Undly_24.add_attribute("CFI", "UnderlyingCFICode_t_222217514"); // 1
    Undly_24_set.insert("UnderlyingCFICode_t_222217514");
    Undly_24.add_attribute("SecTyp", "WITHDRN"); // 1
    Undly_24_set.insert("WITHDRN");
    Undly_24.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2112039936"); // 1
    Undly_24_set.insert("UnderlyingSecuritySubType_t_2112039936");
    Undly_24.add_attribute("MMY", "897914903"); // 1
    Undly_24_set.insert("897914903");
    Undly_24.add_attribute("Mat", "UnderlyingMaturityDate_t_1585548372"); // 1
    Undly_24_set.insert("UnderlyingMaturityDate_t_1585548372");
    Undly_24.add_attribute("MatTm", "1311504081"); // 1
    Undly_24_set.insert("1311504081");
    Undly_24.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1537916696"); // 1
    Undly_24_set.insert("UnderlyingCouponPaymentDate_t_1537916696");
    Undly_24.add_attribute("RestrctTyp", "XR"); // 1
    Undly_24_set.insert("XR");
    Undly_24.add_attribute("Snrty", "SB"); // 1
    Undly_24_set.insert("SB");
    Undly_24.add_attribute("NotlPctOut", "7797835.840000"); // 1
    Undly_24_set.insert("7797835.840000");
    Undly_24.add_attribute("OrigNotlPctOut", "15498681.900000"); // 1
    Undly_24_set.insert("15498681.900000");
    Undly_24.add_attribute("AttchPnt", "562878.360000"); // 1
    Undly_24_set.insert("562878.360000");
    Undly_24.add_attribute("DetchPnt", "1315667.920000"); // 1
    Undly_24_set.insert("1315667.920000");
    Undly_24.add_attribute("Issued", "UnderlyingIssueDate_t_448749039"); // 1
    Undly_24_set.insert("UnderlyingIssueDate_t_448749039");
    Undly_24.add_attribute("RepoCollSecTyp", "1445924708"); // 1
    Undly_24_set.insert("1445924708");
    Undly_24.add_attribute("RepoTrm", "608610027"); // 1
    Undly_24_set.insert("608610027");
    Undly_24.add_attribute("RepoRt", "20590409.160000"); // 1
    Undly_24_set.insert("20590409.160000");
    Undly_24.add_attribute("Fctr", "2346574.700000"); // 1
    Undly_24_set.insert("2346574.700000");
    Undly_24.add_attribute("CrdRtg", "UnderlyingCreditRating_t_305851702"); // 1
    Undly_24_set.insert("UnderlyingCreditRating_t_305851702");
    Undly_24.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_426958837"); // 1
    Undly_24_set.insert("UnderlyingInstrRegistry_t_426958837");
    Undly_24.add_attribute("Ctry", "1846079133"); // 1
    Undly_24_set.insert("1846079133");
    Undly_24.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_570661373"); // 1
    Undly_24_set.insert("UnderlyingStateOrProvinceOfIssue_t_570661373");
    Undly_24.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1175847342"); // 1
    Undly_24_set.insert("UnderlyingLocaleOfIssue_t_1175847342");
    Undly_24.add_attribute("Redeem", "UnderlyingRedemptionDate_t_249958936"); // 1
    Undly_24_set.insert("UnderlyingRedemptionDate_t_249958936");
    Undly_24.add_attribute("StrkPx", "16268675.550000"); // 1
    Undly_24_set.insert("16268675.550000");
    Undly_24.add_attribute("StrkCcy", "USD"); // 1
    Undly_24_set.insert("USD");
    Undly_24.add_attribute("OptA", "104831329"); // 1
    Undly_24_set.insert("104831329");
    Undly_24.add_attribute("Mult", "20474508.640000"); // 1
    Undly_24_set.insert("20474508.640000");
    Undly_24.add_attribute("MultTyp", "1"); // 1
    Undly_24_set.insert("1");
    Undly_24.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_24_set.insert("0");
    Undly_24.add_attribute("UOM", "tn"); // 1
    Undly_24_set.insert("tn");
    Undly_24.add_attribute("UOMQty", "12139032.520000"); // 1
    Undly_24_set.insert("12139032.520000");
    Undly_24.add_attribute("PxUOM", "Bcf"); // 1
    Undly_24_set.insert("Bcf");
    Undly_24.add_attribute("PxUOMQty", "10200996.330000"); // 1
    Undly_24_set.insert("10200996.330000");
    Undly_24.add_attribute("TmUnit", "H"); // 1
    Undly_24_set.insert("H");
    Undly_24.add_attribute("ExerStyle", "1"); // 1
    Undly_24_set.insert("1");
    Undly_24.add_attribute("CpnRt", "4105326.810000"); // 1
    Undly_24_set.insert("4105326.810000");
    Undly_24.add_attribute("Exch", "UnderlyingSecurityExchange_t_2104229307"); // 1
    Undly_24_set.insert("UnderlyingSecurityExchange_t_2104229307");
    Undly_24.add_attribute("Issr", "UnderlyingIssuer_t_1689465063"); // 1
    Undly_24_set.insert("UnderlyingIssuer_t_1689465063");
    Undly_24.add_attribute("EncUndIssrLen", "1190316265"); // 1
    Undly_24_set.insert("1190316265");
    Undly_24.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1506613850"); // 1
    Undly_24_set.insert("EncodedUnderlyingIssuer_t_1506613850");
    Undly_24.add_attribute("Desc", "UnderlyingSecurityDesc_t_1745752899"); // 1
    Undly_24_set.insert("UnderlyingSecurityDesc_t_1745752899");
    Undly_24.add_attribute("EncUndSecDescLen", "1321883057"); // 1
    Undly_24_set.insert("1321883057");
    Undly_24.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1955362889"); // 1
    Undly_24_set.insert("EncodedUnderlyingSecurityDesc_t_1955362889");
    Undly_24.add_attribute("CPPgm", "UnderlyingCPProgram_t_1044193959"); // 1
    Undly_24_set.insert("UnderlyingCPProgram_t_1044193959");
    Undly_24.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1930493084"); // 1
    Undly_24_set.insert("UnderlyingCPRegType_t_1930493084");
    Undly_24.add_attribute("AllocPct", "18669201.570000"); // 1
    Undly_24_set.insert("18669201.570000");
    Undly_24.add_attribute("Ccy", "JPY"); // 1
    Undly_24_set.insert("JPY");
    Undly_24.add_attribute("Qty", "1463953.460000"); // 1
    Undly_24_set.insert("1463953.460000");
    Undly_24.add_attribute("SettlTyp", "2"); // 1
    Undly_24_set.insert("2");
    Undly_24.add_attribute("CashAmt", "UnderlyingCashAmount_t_659522512"); // 1
    Undly_24_set.insert("UnderlyingCashAmount_t_659522512");
    Undly_24.add_attribute("CashTyp", "DIFF"); // 1
    Undly_24_set.insert("DIFF");
    Undly_24.add_attribute("Px", "12274058.500000"); // 1
    Undly_24_set.insert("12274058.500000");
    Undly_24.add_attribute("DirtPx", "1389064.190000"); // 1
    Undly_24_set.insert("1389064.190000");
    Undly_24.add_attribute("EndPx", "4826834.220000"); // 1
    Undly_24_set.insert("4826834.220000");
    Undly_24.add_attribute("StartVal", "UnderlyingStartValue_t_1863302704"); // 1
    Undly_24_set.insert("UnderlyingStartValue_t_1863302704");
    Undly_24.add_attribute("CurVal", "UnderlyingCurrentValue_t_243737748"); // 1
    Undly_24_set.insert("UnderlyingCurrentValue_t_243737748");
    Undly_24.add_attribute("EndVal", "UnderlyingEndValue_t_382650638"); // 1
    Undly_24_set.insert("UnderlyingEndValue_t_382650638");
    Undly_24.add_attribute("AdjQty", "20654679.660000"); // 1
    Undly_24_set.insert("20654679.660000");
    Undly_24.add_attribute("FxRate", "13287568.940000"); // 1
    Undly_24_set.insert("13287568.940000");
    Undly_24.add_attribute("FxRateCalc", "M"); // 1
    Undly_24_set.insert("M");
    Undly_24.add_attribute("CapValu", "UnderlyingCapValue_t_1131887570"); // 1
    Undly_24_set.insert("UnderlyingCapValue_t_1131887570");
    Undly_24.add_attribute("SetMeth", "UnderlyingSettlMethod_t_230848679"); // 1
    Undly_24_set.insert("UnderlyingSettlMethod_t_230848679");
    Undly_24.add_attribute("PutCall", "1524935001"); // 1
    Undly_24_set.insert("1524935001");
    all_values.push_back(Undly_24_set);
    all_compo_names.insert("Undly_24_set");

    {
      xml_element UndAID_24{"UndAID"};
      multiset<string> UndAID_24_set;
      UndAID_24.add_attribute("AltID", "UnderlyingSecurityAltID_t_1783855546"); // 2
      UndAID_24_set.insert("UnderlyingSecurityAltID_t_1783855546");
      UndAID_24.add_attribute("AltIDSrc", "J"); // 2
      UndAID_24_set.insert("J");
      all_values.push_back(UndAID_24_set);
      all_compo_names.insert("UndAID_24_set");

      Undly_24.add_element(UndAID_24);
    }
    {
      xml_element Stip_45{"Stip"};
      multiset<string> Stip_45_set;
      Stip_45.add_attribute("Typ", "AUTOREINV"); // 2
      Stip_45_set.insert("AUTOREINV");
      Stip_45.add_attribute("Val", "UnderlyingStipValue_t_1740601205"); // 2
      Stip_45_set.insert("UnderlyingStipValue_t_1740601205");
      all_values.push_back(Stip_45_set);
      all_compo_names.insert("Stip_45_set");

      Undly_24.add_element(Stip_45);
    }
    {
      xml_element Pty_121{"Pty"};
      multiset<string> Pty_121_set;
      Pty_121.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2133909609"); // 2
      Pty_121_set.insert("UnderlyingInstrumentPartyID_t_2133909609");
      Pty_121.add_attribute("Src", "C"); // 2
      Pty_121_set.insert("C");
      Pty_121.add_attribute("R", "50"); // 2
      Pty_121_set.insert("50");
      all_values.push_back(Pty_121_set);
      all_compo_names.insert("Pty_121_set");

      {
        xml_element Sub_121{"Sub"};
        multiset<string> Sub_121_set;
        Sub_121.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1732178860"); // 3
        Sub_121_set.insert("UnderlyingInstrumentPartySubID_t_1732178860");
        Sub_121.add_attribute("Typ", "30"); // 3
        Sub_121_set.insert("30");
        all_values.push_back(Sub_121_set);
        all_compo_names.insert("Sub_121_set");

        Pty_121.add_element(Sub_121);
      }
      Undly_24.add_element(Pty_121);
    }
    elt.add_element(Undly_24);
  } // end Undly
  { // DerivSecDef
    xml_element DerivSecDef_0{"DerivSecDef"};
    {
      xml_element DerivInstrmt_0{"DerivInstrmt"};
      multiset<string> DerivInstrmt_0_set;
      DerivInstrmt_0.add_attribute("Sym", "DerivativeSymbol_t_907610649"); // 2
      DerivInstrmt_0_set.insert("DerivativeSymbol_t_907610649");
      DerivInstrmt_0.add_attribute("Sfx", "CD"); // 2
      DerivInstrmt_0_set.insert("CD");
      DerivInstrmt_0.add_attribute("ID", "DerivativeSecurityID_t_2083192793"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityID_t_2083192793");
      DerivInstrmt_0.add_attribute("Src", "D"); // 2
      DerivInstrmt_0_set.insert("D");
      DerivInstrmt_0.add_attribute("Prod", "1"); // 2
      DerivInstrmt_0_set.insert("1");
      DerivInstrmt_0.add_attribute("ProdCmplx", "DerivativeProductComplex_t_24570283"); // 2
      DerivInstrmt_0_set.insert("DerivativeProductComplex_t_24570283");
      DerivInstrmt_0.add_attribute("FlexProdElig", "false"); // 2
      DerivInstrmt_0_set.insert("false");
      DerivInstrmt_0.add_attribute("SecGrp", "DerivativeSecurityGroup_t_737703868"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityGroup_t_737703868");
      DerivInstrmt_0.add_attribute("CFI", "DerivativeCFICode_t_684092795"); // 2
      DerivInstrmt_0_set.insert("DerivativeCFICode_t_684092795");
      DerivInstrmt_0.add_attribute("SecTyp", "AN"); // 2
      DerivInstrmt_0_set.insert("AN");
      DerivInstrmt_0.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_1965109718"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecuritySubType_t_1965109718");
      DerivInstrmt_0.add_attribute("MMY", "822999215"); // 2
      DerivInstrmt_0_set.insert("822999215");
      DerivInstrmt_0.add_attribute("MatDt", "DerivativeMaturityDate_t_430884968"); // 2
      DerivInstrmt_0_set.insert("DerivativeMaturityDate_t_430884968");
      DerivInstrmt_0.add_attribute("MatTm", "1680928775"); // 2
      DerivInstrmt_0_set.insert("1680928775");
      DerivInstrmt_0.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_1066736963"); // 2
      DerivInstrmt_0_set.insert("DerivativeSettleOnOpenFlag_t_1066736963");
      DerivInstrmt_0.add_attribute("AsgnMeth", "813535606"); // 2
      DerivInstrmt_0_set.insert("813535606");
      DerivInstrmt_0.add_attribute("Status", "2"); // 2
      DerivInstrmt_0_set.insert("2");
      DerivInstrmt_0.add_attribute("IssDt", "DerivativeIssueDate_t_248010209"); // 2
      DerivInstrmt_0_set.insert("DerivativeIssueDate_t_248010209");
      DerivInstrmt_0.add_attribute("Rgstry", "DerivativeInstrRegistry_t_1318370974"); // 2
      DerivInstrmt_0_set.insert("DerivativeInstrRegistry_t_1318370974");
      DerivInstrmt_0.add_attribute("Ctry", "583317015"); // 2
      DerivInstrmt_0_set.insert("583317015");
      DerivInstrmt_0.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_478858889"); // 2
      DerivInstrmt_0_set.insert("DerivativeStateOrProvinceOfIssue_t_478858889");
      DerivInstrmt_0.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_695822327"); // 2
      DerivInstrmt_0_set.insert("DerivativeLocaleOfIssue_t_695822327");
      DerivInstrmt_0.add_attribute("StrkPx", "2196889.130000"); // 2
      DerivInstrmt_0_set.insert("2196889.130000");
      DerivInstrmt_0.add_attribute("StrkCcy", "CHF"); // 2
      DerivInstrmt_0_set.insert("CHF");
      DerivInstrmt_0.add_attribute("StrkMult", "19602901.180000"); // 2
      DerivInstrmt_0_set.insert("19602901.180000");
      DerivInstrmt_0.add_attribute("StrkValu", "9097293.970000"); // 2
      DerivInstrmt_0_set.insert("9097293.970000");
      DerivInstrmt_0.add_attribute("OptAt", "1462106660"); // 2
      DerivInstrmt_0_set.insert("1462106660");
      DerivInstrmt_0.add_attribute("Mult", "9125378.780000"); // 2
      DerivInstrmt_0_set.insert("9125378.780000");
      DerivInstrmt_0.add_attribute("MultTyp", "0"); // 2
      DerivInstrmt_0_set.insert("0");
      DerivInstrmt_0.add_attribute("FlowSchedTyp", "3"); // 2
      DerivInstrmt_0_set.insert("3");
      DerivInstrmt_0.add_attribute("MinPxIncr", "18201485.270000"); // 2
      DerivInstrmt_0_set.insert("18201485.270000");
      DerivInstrmt_0.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_1123313781"); // 2
      DerivInstrmt_0_set.insert("DerivativeMinPriceIncrementAmount_t_1123313781");
      DerivInstrmt_0.add_attribute("UOM", "MMBtu"); // 2
      DerivInstrmt_0_set.insert("MMBtu");
      DerivInstrmt_0.add_attribute("UOMQty", "2997120.370000"); // 2
      DerivInstrmt_0_set.insert("2997120.370000");
      DerivInstrmt_0.add_attribute("PxUOM", "oz_tr"); // 2
      DerivInstrmt_0_set.insert("oz_tr");
      DerivInstrmt_0.add_attribute("PxUOMQty", "15750857.970000"); // 2
      DerivInstrmt_0_set.insert("15750857.970000");
      DerivInstrmt_0.add_attribute("SettlMeth", "C"); // 2
      DerivInstrmt_0_set.insert("C");
      DerivInstrmt_0.add_attribute("PxQteMeth", "PCTPAR"); // 2
      DerivInstrmt_0_set.insert("PCTPAR");
      DerivInstrmt_0.add_attribute("ValMeth", "CDSD"); // 2
      DerivInstrmt_0_set.insert("CDSD");
      DerivInstrmt_0.add_attribute("ListMeth", "0"); // 2
      DerivInstrmt_0_set.insert("0");
      DerivInstrmt_0.add_attribute("CapPx", "14389006.730000"); // 2
      DerivInstrmt_0_set.insert("14389006.730000");
      DerivInstrmt_0.add_attribute("FlrPx", "9346941.590000"); // 2
      DerivInstrmt_0_set.insert("9346941.590000");
      DerivInstrmt_0.add_attribute("PutCall", "0"); // 2
      DerivInstrmt_0_set.insert("0");
      DerivInstrmt_0.add_attribute("ExerStyle", "2"); // 2
      DerivInstrmt_0_set.insert("2");
      DerivInstrmt_0.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_2001431123"); // 2
      DerivInstrmt_0_set.insert("DerivativeOptPayAmount_t_2001431123");
      DerivInstrmt_0.add_attribute("TmUnit", "S"); // 2
      DerivInstrmt_0_set.insert("S");
      DerivInstrmt_0.add_attribute("Exch", "DerivativeSecurityExchange_t_423775245"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityExchange_t_423775245");
      DerivInstrmt_0.add_attribute("PosLmt", "101957684"); // 2
      DerivInstrmt_0_set.insert("101957684");
      DerivInstrmt_0.add_attribute("NTPosLmt", "1436663988"); // 2
      DerivInstrmt_0_set.insert("1436663988");
      DerivInstrmt_0.add_attribute("Issr", "DerivativeIssuer_t_1007092260"); // 2
      DerivInstrmt_0_set.insert("DerivativeIssuer_t_1007092260");
      DerivInstrmt_0.add_attribute("EncIssrLen", "580816573"); // 2
      DerivInstrmt_0_set.insert("580816573");
      DerivInstrmt_0.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_2132486315"); // 2
      DerivInstrmt_0_set.insert("DerivativeEncodedIssuer_t_2132486315");
      DerivInstrmt_0.add_attribute("Desc", "DerivativeSecurityDesc_t_1226781173"); // 2
      DerivInstrmt_0_set.insert("DerivativeSecurityDesc_t_1226781173");
      DerivInstrmt_0.add_attribute("EncSecDescLen", "1504120009"); // 2
      DerivInstrmt_0_set.insert("1504120009");
      DerivInstrmt_0.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_468809028"); // 2
      DerivInstrmt_0_set.insert("DerivativeEncodedSecurityDesc_t_468809028");
      DerivInstrmt_0.add_attribute("CSetMo", "1039587644"); // 2
      DerivInstrmt_0_set.insert("1039587644");
      all_values.push_back(DerivInstrmt_0_set);
      all_compo_names.insert("DerivInstrmt_0_set");

      {
        xml_element AID_16{"AID"};
        multiset<string> AID_16_set;
        AID_16.add_attribute("ID", "DerivativeSecurityAltID_t_266365758"); // 3
        AID_16_set.insert("DerivativeSecurityAltID_t_266365758");
        AID_16.add_attribute("Src", "K"); // 3
        AID_16_set.insert("K");
        all_values.push_back(AID_16_set);
        all_compo_names.insert("AID_16_set");

        DerivInstrmt_0.add_element(AID_16);
      }
      {
        xml_element SecXML_16{"SecXML"};
        multiset<string> SecXML_16_set;
        SecXML_16.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_1952125522"); // 3
        SecXML_16_set.insert("DerivativeSecurityXMLSchema_t_1952125522");
        all_values.push_back(SecXML_16_set);
        all_compo_names.insert("SecXML_16_set");

        DerivInstrmt_0.add_element(SecXML_16);
      }
      {
        xml_element Evnt_16{"Evnt"};
        multiset<string> Evnt_16_set;
        Evnt_16.add_attribute("EventTyp", "7"); // 3
        Evnt_16_set.insert("7");
        Evnt_16.add_attribute("Dt", "DerivativeEventDate_t_1398238409"); // 3
        Evnt_16_set.insert("DerivativeEventDate_t_1398238409");
        Evnt_16.add_attribute("Tm", "DerivativeEventTime_t_1624790401"); // 3
        Evnt_16_set.insert("DerivativeEventTime_t_1624790401");
        Evnt_16.add_attribute("Px", "18841041.490000"); // 3
        Evnt_16_set.insert("18841041.490000");
        Evnt_16.add_attribute("Txt", "DerivativeEventText_t_801270274"); // 3
        Evnt_16_set.insert("DerivativeEventText_t_801270274");
        all_values.push_back(Evnt_16_set);
        all_compo_names.insert("Evnt_16_set");

        DerivInstrmt_0.add_element(Evnt_16);
      }
      {
        xml_element Pty_122{"Pty"};
        multiset<string> Pty_122_set;
        Pty_122.add_attribute("ID", "DerivativeInstrumentPartyID_t_1924502438"); // 3
        Pty_122_set.insert("DerivativeInstrumentPartyID_t_1924502438");
        Pty_122.add_attribute("Src", "D"); // 3
        Pty_122_set.insert("D");
        Pty_122.add_attribute("R", "61"); // 3
        Pty_122_set.insert("61");
        all_values.push_back(Pty_122_set);
        all_compo_names.insert("Pty_122_set");

        {
          xml_element Sub_122{"Sub"};
          multiset<string> Sub_122_set;
          Sub_122.add_attribute("ID", "DerivativeInstrumentPartySubID_t_850173333"); // 4
          Sub_122_set.insert("DerivativeInstrumentPartySubID_t_850173333");
          Sub_122.add_attribute("Typ", "15"); // 4
          Sub_122_set.insert("15");
          all_values.push_back(Sub_122_set);
          all_compo_names.insert("Sub_122_set");

          Pty_122.add_element(Sub_122);
        }
        DerivInstrmt_0.add_element(Pty_122);
      }
      DerivSecDef_0.add_element(DerivInstrmt_0);
    }
    {
      xml_element Attrb_4{"Attrb"};
      multiset<string> Attrb_4_set;
      Attrb_4.add_attribute("Typ", "6"); // 2
      Attrb_4_set.insert("6");
      Attrb_4.add_attribute("Val", "DerivativeInstrAttribValue_t_1871529421"); // 2
      Attrb_4_set.insert("DerivativeInstrAttribValue_t_1871529421");
      all_values.push_back(Attrb_4_set);
      all_compo_names.insert("Attrb_4_set");

      DerivSecDef_0.add_element(Attrb_4);
    }
    {
      xml_element MktSegGrp_0{"MktSegGrp"};
      multiset<string> MktSegGrp_0_set;
      MktSegGrp_0.add_attribute("MktID", "MarketID_t_1532882864"); // 2
      MktSegGrp_0_set.insert("MarketID_t_1532882864");
      MktSegGrp_0.add_attribute("MktSegID", "MarketSegmentID_t_1275261527"); // 2
      MktSegGrp_0_set.insert("MarketSegmentID_t_1275261527");
      all_values.push_back(MktSegGrp_0_set);
      all_compo_names.insert("MktSegGrp_0_set");

      {
        xml_element SecTrdgRules_0{"SecTrdgRules"};
        {
          xml_element BaseTrdgRules_0{"BaseTrdgRules"};
          multiset<string> BaseTrdgRules_0_set;
          BaseTrdgRules_0.add_attribute("ExpirationCycle", "0"); // 4
          BaseTrdgRules_0_set.insert("0");
          BaseTrdgRules_0.add_attribute("MinTrdVol", "3577450.170000"); // 4
          BaseTrdgRules_0_set.insert("3577450.170000");
          BaseTrdgRules_0.add_attribute("MaxTrdVol", "11292090.020000"); // 4
          BaseTrdgRules_0_set.insert("11292090.020000");
          BaseTrdgRules_0.add_attribute("MxPxVar", "12945798.440000"); // 4
          BaseTrdgRules_0_set.insert("12945798.440000");
          BaseTrdgRules_0.add_attribute("ImpldMktInd", "2"); // 4
          BaseTrdgRules_0_set.insert("2");
          BaseTrdgRules_0.add_attribute("TrdCcy", "EUR"); // 4
          BaseTrdgRules_0_set.insert("EUR");
          BaseTrdgRules_0.add_attribute("RndLot", "17886125.230000"); // 4
          BaseTrdgRules_0_set.insert("17886125.230000");
          BaseTrdgRules_0.add_attribute("MlegModel", "0"); // 4
          BaseTrdgRules_0_set.insert("0");
          BaseTrdgRules_0.add_attribute("MlegPxMeth", "4"); // 4
          BaseTrdgRules_0_set.insert("4");
          BaseTrdgRules_0.add_attribute("PxTyp", "18"); // 4
          BaseTrdgRules_0_set.insert("18");
          all_values.push_back(BaseTrdgRules_0_set);
          all_compo_names.insert("BaseTrdgRules_0_set");

          {
            xml_element TickRules_0{"TickRules"};
            multiset<string> TickRules_0_set;
            TickRules_0.add_attribute("StartTickPxRng", "11686196.210000"); // 5
            TickRules_0_set.insert("11686196.210000");
            TickRules_0.add_attribute("EndTickPxRng", "10375718.810000"); // 5
            TickRules_0_set.insert("10375718.810000");
            TickRules_0.add_attribute("TickIncr", "19074976.920000"); // 5
            TickRules_0_set.insert("19074976.920000");
            TickRules_0.add_attribute("TickRuleTyp", "4"); // 5
            TickRules_0_set.insert("4");
            all_values.push_back(TickRules_0_set);
            all_compo_names.insert("TickRules_0_set");

            BaseTrdgRules_0.add_element(TickRules_0);
          }
          {
            xml_element LotTypeRules_0{"LotTypeRules"};
            multiset<string> LotTypeRules_0_set;
            LotTypeRules_0.add_attribute("LotTyp", "2"); // 5
            LotTypeRules_0_set.insert("2");
            LotTypeRules_0.add_attribute("MinLotSz", "17121395.660000"); // 5
            LotTypeRules_0_set.insert("17121395.660000");
            all_values.push_back(LotTypeRules_0_set);
            all_compo_names.insert("LotTypeRules_0_set");

            BaseTrdgRules_0.add_element(LotTypeRules_0);
          }
          {
            xml_element PxLmts_0{"PxLmts"};
            multiset<string> PxLmts_0_set;
            PxLmts_0.add_attribute("PxLmtTyp", "1"); // 5
            PxLmts_0_set.insert("1");
            PxLmts_0.add_attribute("LowLmtPx", "717586.820000"); // 5
            PxLmts_0_set.insert("717586.820000");
            PxLmts_0.add_attribute("HiLmtPx", "11894463.190000"); // 5
            PxLmts_0_set.insert("11894463.190000");
            PxLmts_0.add_attribute("TrdgRefPx", "19323962.480000"); // 5
            PxLmts_0_set.insert("19323962.480000");
            all_values.push_back(PxLmts_0_set);
            all_compo_names.insert("PxLmts_0_set");

            BaseTrdgRules_0.add_element(PxLmts_0);
          }
          SecTrdgRules_0.add_element(BaseTrdgRules_0);
        }
        {
          xml_element TrdgSesRulesGrp_0{"TrdgSesRulesGrp"};
          multiset<string> TrdgSesRulesGrp_0_set;
          TrdgSesRulesGrp_0.add_attribute("SesID", "2"); // 4
          TrdgSesRulesGrp_0_set.insert("2");
          TrdgSesRulesGrp_0.add_attribute("SesSub", "3"); // 4
          TrdgSesRulesGrp_0_set.insert("3");
          all_values.push_back(TrdgSesRulesGrp_0_set);
          all_compo_names.insert("TrdgSesRulesGrp_0_set");

          {
            xml_element TrdgSesRules_0{"TrdgSesRules"};
            {
              xml_element OrdTypRules_0{"OrdTypRules"};
              multiset<string> OrdTypRules_0_set;
              OrdTypRules_0.add_attribute("OrdTyp", "D"); // 6
              OrdTypRules_0_set.insert("D");
              all_values.push_back(OrdTypRules_0_set);
              all_compo_names.insert("OrdTypRules_0_set");

              TrdgSesRules_0.add_element(OrdTypRules_0);
            }
            {
              xml_element TmInForceRules_0{"TmInForceRules"};
              multiset<string> TmInForceRules_0_set;
              TmInForceRules_0.add_attribute("TmInForce", "0"); // 6
              TmInForceRules_0_set.insert("0");
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
              MtchRules_0.add_attribute("MtchAlgo", "MatchAlgorithm_t_499086027"); // 6
              MtchRules_0_set.insert("MatchAlgorithm_t_499086027");
              MtchRules_0.add_attribute("MtchTyp", "M4"); // 6
              MtchRules_0_set.insert("M4");
              all_values.push_back(MtchRules_0_set);
              all_compo_names.insert("MtchRules_0_set");

              TrdgSesRules_0.add_element(MtchRules_0);
            }
            {
              xml_element MDFeedTyps_0{"MDFeedTyps"};
              multiset<string> MDFeedTyps_0_set;
              MDFeedTyps_0.add_attribute("MDFeedTyp", "MDFeedType_t_1540684216"); // 6
              MDFeedTyps_0_set.insert("MDFeedType_t_1540684216");
              MDFeedTyps_0.add_attribute("MktDepth", "2031968891"); // 6
              MDFeedTyps_0_set.insert("2031968891");
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
          Attrb_5.add_attribute("Typ", "17"); // 4
          Attrb_5_set.insert("17");
          Attrb_5.add_attribute("Val", "NestedInstrAttribValue_t_242230260"); // 4
          Attrb_5_set.insert("NestedInstrAttribValue_t_242230260");
          all_values.push_back(Attrb_5_set);
          all_compo_names.insert("Attrb_5_set");

          SecTrdgRules_0.add_element(Attrb_5);
        }
        MktSegGrp_0.add_element(SecTrdgRules_0);
      }
      {
        xml_element StrkRules_0{"StrkRules"};
        multiset<string> StrkRules_0_set;
        StrkRules_0.add_attribute("StrkRule", "StrikeRuleID_t_1699455630"); // 3
        StrkRules_0_set.insert("StrikeRuleID_t_1699455630");
        StrkRules_0.add_attribute("StartStrkPxRng", "18640672.430000"); // 3
        StrkRules_0_set.insert("18640672.430000");
        StrkRules_0.add_attribute("EndStrkPxRng", "10237505.230000"); // 3
        StrkRules_0_set.insert("10237505.230000");
        StrkRules_0.add_attribute("StrkIncr", "7831386.690000"); // 3
        StrkRules_0_set.insert("7831386.690000");
        StrkRules_0.add_attribute("StrkExrStyle", "1"); // 3
        StrkRules_0_set.insert("1");
        all_values.push_back(StrkRules_0_set);
        all_compo_names.insert("StrkRules_0_set");

        {
          xml_element MatRules_0{"MatRules"};
          multiset<string> MatRules_0_set;
          MatRules_0.add_attribute("MatRuleID", "MaturityRuleID_t_664879398"); // 4
          MatRules_0_set.insert("MaturityRuleID_t_664879398");
          MatRules_0.add_attribute("MMYFmt", "2"); // 4
          MatRules_0_set.insert("2");
          MatRules_0.add_attribute("MMYIncrUnits", "0"); // 4
          MatRules_0_set.insert("0");
          MatRules_0.add_attribute("StartMMY", "1532789446"); // 4
          MatRules_0_set.insert("1532789446");
          MatRules_0.add_attribute("EndMMY", "1616257903"); // 4
          MatRules_0_set.insert("1616257903");
          MatRules_0.add_attribute("MMYIncr", "1906678513"); // 4
          MatRules_0_set.insert("1906678513");
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
    RelSym_0.add_attribute("Ccy", "CAN"); // 1
    RelSym_0_set.insert("CAN");
    RelSym_0.add_attribute("CorpActn", "U"); // 1
    RelSym_0_set.insert("U");
    RelSym_0.add_attribute("TxnTm", "RelSymTransactTime_t_952051734"); // 1
    RelSym_0_set.insert("RelSymTransactTime_t_952051734");
    RelSym_0.add_attribute("Txt", "Text_t_651957469"); // 1
    RelSym_0_set.insert("Text_t_651957469");
    RelSym_0.add_attribute("EncTxtLen", "2046905729"); // 1
    RelSym_0_set.insert("2046905729");
    RelSym_0.add_attribute("EncTxt", "EncodedText_t_736964334"); // 1
    RelSym_0_set.insert("EncodedText_t_736964334");
    all_values.push_back(RelSym_0_set);
    all_compo_names.insert("RelSym_0_set");

    {
      xml_element Instrmt_16{"Instrmt"};
      multiset<string> Instrmt_16_set;
      Instrmt_16.add_attribute("Sym", "Symbol_t_1524986426"); // 2
      Instrmt_16_set.insert("Symbol_t_1524986426");
      Instrmt_16.add_attribute("Sfx", "WI"); // 2
      Instrmt_16_set.insert("WI");
      Instrmt_16.add_attribute("ID", "SecurityID_t_1142068170"); // 2
      Instrmt_16_set.insert("SecurityID_t_1142068170");
      Instrmt_16.add_attribute("Src", "4"); // 2
      Instrmt_16_set.insert("4");
      Instrmt_16.add_attribute("Prod", "8"); // 2
      Instrmt_16_set.insert("8");
      Instrmt_16.add_attribute("ProdCmplx", "ProductComplex_t_1641154197"); // 2
      Instrmt_16_set.insert("ProductComplex_t_1641154197");
      Instrmt_16.add_attribute("SecGrp", "SecurityGroup_t_1921872907"); // 2
      Instrmt_16_set.insert("SecurityGroup_t_1921872907");
      Instrmt_16.add_attribute("CFI", "CFICode_t_2075726202"); // 2
      Instrmt_16_set.insert("CFICode_t_2075726202");
      Instrmt_16.add_attribute("SecTyp", "YANK"); // 2
      Instrmt_16_set.insert("YANK");
      Instrmt_16.add_attribute("SubTyp", "SecuritySubType_t_344635887"); // 2
      Instrmt_16_set.insert("SecuritySubType_t_344635887");
      Instrmt_16.add_attribute("MMY", "497729953"); // 2
      Instrmt_16_set.insert("497729953");
      Instrmt_16.add_attribute("MatDt", "MaturityDate_t_1767869701"); // 2
      Instrmt_16_set.insert("MaturityDate_t_1767869701");
      Instrmt_16.add_attribute("MatTm", "2044091518"); // 2
      Instrmt_16_set.insert("2044091518");
      Instrmt_16.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_214313548"); // 2
      Instrmt_16_set.insert("SettleOnOpenFlag_t_214313548");
      Instrmt_16.add_attribute("AsgnMeth", "644136576"); // 2
      Instrmt_16_set.insert("644136576");
      Instrmt_16.add_attribute("Status", "2"); // 2
      Instrmt_16_set.insert("2");
      Instrmt_16.add_attribute("CpnPmt", "CouponPaymentDate_t_514657328"); // 2
      Instrmt_16_set.insert("CouponPaymentDate_t_514657328");
      Instrmt_16.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_16_set.insert("MM");
      Instrmt_16.add_attribute("Snrty", "SR"); // 2
      Instrmt_16_set.insert("SR");
      Instrmt_16.add_attribute("NotlPctOut", "13837639.600000"); // 2
      Instrmt_16_set.insert("13837639.600000");
      Instrmt_16.add_attribute("OrigNotlPctOut", "6943217.720000"); // 2
      Instrmt_16_set.insert("6943217.720000");
      Instrmt_16.add_attribute("AttchPnt", "5961590.770000"); // 2
      Instrmt_16_set.insert("5961590.770000");
      Instrmt_16.add_attribute("DetchPnt", "11429588.260000"); // 2
      Instrmt_16_set.insert("11429588.260000");
      Instrmt_16.add_attribute("Issued", "IssueDate_t_1987125263"); // 2
      Instrmt_16_set.insert("IssueDate_t_1987125263");
      Instrmt_16.add_attribute("RepoCollSecTyp", "1499918712"); // 2
      Instrmt_16_set.insert("1499918712");
      Instrmt_16.add_attribute("RepoTrm", "1723157613"); // 2
      Instrmt_16_set.insert("1723157613");
      Instrmt_16.add_attribute("RepoRt", "6971010.250000"); // 2
      Instrmt_16_set.insert("6971010.250000");
      Instrmt_16.add_attribute("Fctr", "3044867.980000"); // 2
      Instrmt_16_set.insert("3044867.980000");
      Instrmt_16.add_attribute("CrdRtg", "CreditRating_t_227631434"); // 2
      Instrmt_16_set.insert("CreditRating_t_227631434");
      Instrmt_16.add_attribute("Rgstry", "InstrRegistry_t_596523106"); // 2
      Instrmt_16_set.insert("InstrRegistry_t_596523106");
      Instrmt_16.add_attribute("IssuCtry", "1041451132"); // 2
      Instrmt_16_set.insert("1041451132");
      Instrmt_16.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1752617861"); // 2
      Instrmt_16_set.insert("StateOrProvinceOfIssue_t_1752617861");
      Instrmt_16.add_attribute("Lcl", "LocaleOfIssue_t_1462410297"); // 2
      Instrmt_16_set.insert("LocaleOfIssue_t_1462410297");
      Instrmt_16.add_attribute("Redeem", "RedemptionDate_t_36035654"); // 2
      Instrmt_16_set.insert("RedemptionDate_t_36035654");
      Instrmt_16.add_attribute("StrkPx", "845383.720000"); // 2
      Instrmt_16_set.insert("845383.720000");
      Instrmt_16.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_16_set.insert("CAN");
      Instrmt_16.add_attribute("StrkMult", "20064112.790000"); // 2
      Instrmt_16_set.insert("20064112.790000");
      Instrmt_16.add_attribute("StrkValu", "19256948.370000"); // 2
      Instrmt_16_set.insert("19256948.370000");
      Instrmt_16.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_16_set.insert("4");
      Instrmt_16.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_16_set.insert("5");
      Instrmt_16.add_attribute("StrkPxBndryPrcsn", "2759411.420000"); // 2
      Instrmt_16_set.insert("2759411.420000");
      Instrmt_16.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_16_set.insert("1");
      Instrmt_16.add_attribute("OptAt", "100171389"); // 2
      Instrmt_16_set.insert("100171389");
      Instrmt_16.add_attribute("Mult", "4902546.900000"); // 2
      Instrmt_16_set.insert("4902546.900000");
      Instrmt_16.add_attribute("MultTyp", "2"); // 2
      Instrmt_16_set.insert("2");
      Instrmt_16.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_16_set.insert("3");
      Instrmt_16.add_attribute("MinPxIncr", "10049120.180000"); // 2
      Instrmt_16_set.insert("10049120.180000");
      Instrmt_16.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_481400598"); // 2
      Instrmt_16_set.insert("MinPriceIncrementAmount_t_481400598");
      Instrmt_16.add_attribute("UOM", "Bbl"); // 2
      Instrmt_16_set.insert("Bbl");
      Instrmt_16.add_attribute("UOMQty", "2411923.310000"); // 2
      Instrmt_16_set.insert("2411923.310000");
      Instrmt_16.add_attribute("PxUOM", "tn"); // 2
      Instrmt_16_set.insert("tn");
      Instrmt_16.add_attribute("PxUOMQty", "3559781.790000"); // 2
      Instrmt_16_set.insert("3559781.790000");
      Instrmt_16.add_attribute("SettlMeth", "P"); // 2
      Instrmt_16_set.insert("P");
      Instrmt_16.add_attribute("ExerStyle", "0"); // 2
      Instrmt_16_set.insert("0");
      Instrmt_16.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_16_set.insert("1");
      Instrmt_16.add_attribute("OptPayAmt", "OptPayoutAmount_t_959825122"); // 2
      Instrmt_16_set.insert("OptPayoutAmount_t_959825122");
      Instrmt_16.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_16_set.insert("PCTPAR");
      Instrmt_16.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_16_set.insert("FUT");
      Instrmt_16.add_attribute("ListMeth", "0"); // 2
      Instrmt_16_set.insert("0");
      Instrmt_16.add_attribute("CapPx", "1615044.690000"); // 2
      Instrmt_16_set.insert("1615044.690000");
      Instrmt_16.add_attribute("FlrPx", "10543511.730000"); // 2
      Instrmt_16_set.insert("10543511.730000");
      Instrmt_16.add_attribute("PutCall", "1"); // 2
      Instrmt_16_set.insert("1");
      Instrmt_16.add_attribute("FlexInd", "true"); // 2
      Instrmt_16_set.insert("true");
      Instrmt_16.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_16_set.insert("false");
      Instrmt_16.add_attribute("TmUnit", "S"); // 2
      Instrmt_16_set.insert("S");
      Instrmt_16.add_attribute("CpnRt", "14738834.010000"); // 2
      Instrmt_16_set.insert("14738834.010000");
      Instrmt_16.add_attribute("Exch", "SecurityExchange_t_620093030"); // 2
      Instrmt_16_set.insert("SecurityExchange_t_620093030");
      Instrmt_16.add_attribute("PosLmt", "736056773"); // 2
      Instrmt_16_set.insert("736056773");
      Instrmt_16.add_attribute("NTPosLmt", "1252094591"); // 2
      Instrmt_16_set.insert("1252094591");
      Instrmt_16.add_attribute("Issr", "Issuer_t_1675438673"); // 2
      Instrmt_16_set.insert("Issuer_t_1675438673");
      Instrmt_16.add_attribute("EncIssrLen", "939620292"); // 2
      Instrmt_16_set.insert("939620292");
      Instrmt_16.add_attribute("EncIssr", "EncodedIssuer_t_1528035733"); // 2
      Instrmt_16_set.insert("EncodedIssuer_t_1528035733");
      Instrmt_16.add_attribute("Desc", "SecurityDesc_t_203686722"); // 2
      Instrmt_16_set.insert("SecurityDesc_t_203686722");
      Instrmt_16.add_attribute("EncSecDescLen", "1039791681"); // 2
      Instrmt_16_set.insert("1039791681");
      Instrmt_16.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2018290424"); // 2
      Instrmt_16_set.insert("EncodedSecurityDesc_t_2018290424");
      Instrmt_16.add_attribute("Pool", "Pool_t_1523554994"); // 2
      Instrmt_16_set.insert("Pool_t_1523554994");
      Instrmt_16.add_attribute("CSetMo", "1819709609"); // 2
      Instrmt_16_set.insert("1819709609");
      Instrmt_16.add_attribute("CPPgm", "99"); // 2
      Instrmt_16_set.insert("99");
      Instrmt_16.add_attribute("CPRegT", "CPRegType_t_2004955593"); // 2
      Instrmt_16_set.insert("CPRegType_t_2004955593");
      Instrmt_16.add_attribute("Dated", "DatedDate_t_1579528711"); // 2
      Instrmt_16_set.insert("DatedDate_t_1579528711");
      Instrmt_16.add_attribute("IntAcrl", "InterestAccrualDate_t_1116911125"); // 2
      Instrmt_16_set.insert("InterestAccrualDate_t_1116911125");
      all_values.push_back(Instrmt_16_set);
      all_compo_names.insert("Instrmt_16_set");

      {
        xml_element AID_17{"AID"};
        multiset<string> AID_17_set;
        AID_17.add_attribute("AltID", "SecurityAltID_t_1033194316"); // 3
        AID_17_set.insert("SecurityAltID_t_1033194316");
        AID_17.add_attribute("AltIDSrc", "K"); // 3
        AID_17_set.insert("K");
        all_values.push_back(AID_17_set);
        all_compo_names.insert("AID_17_set");

        Instrmt_16.add_element(AID_17);
      }
      {
        xml_element SecXML_17{"SecXML"};
        multiset<string> SecXML_17_set;
        SecXML_17.add_attribute("Schema", "SecurityXMLSchema_t_353578634"); // 3
        SecXML_17_set.insert("SecurityXMLSchema_t_353578634");
        all_values.push_back(SecXML_17_set);
        all_compo_names.insert("SecXML_17_set");

        Instrmt_16.add_element(SecXML_17);
      }
      {
        xml_element Evnt_17{"Evnt"};
        multiset<string> Evnt_17_set;
        Evnt_17.add_attribute("EventTyp", "3"); // 3
        Evnt_17_set.insert("3");
        Evnt_17.add_attribute("Dt", "EventDate_t_1643920133"); // 3
        Evnt_17_set.insert("EventDate_t_1643920133");
        Evnt_17.add_attribute("Tm", "EventTime_t_1313403756"); // 3
        Evnt_17_set.insert("EventTime_t_1313403756");
        Evnt_17.add_attribute("Px", "16135396.660000"); // 3
        Evnt_17_set.insert("16135396.660000");
        Evnt_17.add_attribute("Txt", "EventText_t_1656820174"); // 3
        Evnt_17_set.insert("EventText_t_1656820174");
        all_values.push_back(Evnt_17_set);
        all_compo_names.insert("Evnt_17_set");

        Instrmt_16.add_element(Evnt_17);
      }
      {
        xml_element Pty_123{"Pty"};
        multiset<string> Pty_123_set;
        Pty_123.add_attribute("ID", "InstrumentPartyID_t_353376665"); // 3
        Pty_123_set.insert("InstrumentPartyID_t_353376665");
        Pty_123.add_attribute("Src", "2"); // 3
        Pty_123_set.insert("2");
        Pty_123.add_attribute("R", "73"); // 3
        Pty_123_set.insert("73");
        all_values.push_back(Pty_123_set);
        all_compo_names.insert("Pty_123_set");

        {
          xml_element Sub_123{"Sub"};
          multiset<string> Sub_123_set;
          Sub_123.add_attribute("ID", "InstrumentPartySubID_t_1145967434"); // 4
          Sub_123_set.insert("InstrumentPartySubID_t_1145967434");
          Sub_123.add_attribute("Typ", "26"); // 4
          Sub_123_set.insert("26");
          all_values.push_back(Sub_123_set);
          all_compo_names.insert("Sub_123_set");

          Pty_123.add_element(Sub_123);
        }
        Instrmt_16.add_element(Pty_123);
      }
      {
        xml_element CmplxEvnt_16{"CmplxEvnt"};
        multiset<string> CmplxEvnt_16_set;
        CmplxEvnt_16.add_attribute("Typ", "5"); // 3
        CmplxEvnt_16_set.insert("5");
        CmplxEvnt_16.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2023096576"); // 3
        CmplxEvnt_16_set.insert("ComplexOptPayoutAmount_t_2023096576");
        CmplxEvnt_16.add_attribute("Px", "5778750.070000"); // 3
        CmplxEvnt_16_set.insert("5778750.070000");
        CmplxEvnt_16.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_16_set.insert("4");
        CmplxEvnt_16.add_attribute("PxBndryPrcsn", "6116697.010000"); // 3
        CmplxEvnt_16_set.insert("6116697.010000");
        CmplxEvnt_16.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_16_set.insert("1");
        CmplxEvnt_16.add_attribute("Cond", "1"); // 3
        CmplxEvnt_16_set.insert("1");
        all_values.push_back(CmplxEvnt_16_set);
        all_compo_names.insert("CmplxEvnt_16_set");

        {
          xml_element EvntDts_16{"EvntDts"};
          multiset<string> EvntDts_16_set;
          EvntDts_16.add_attribute("StartDt", "ComplexEventStartDate_t_1551289993"); // 4
          EvntDts_16_set.insert("ComplexEventStartDate_t_1551289993");
          EvntDts_16.add_attribute("EndDt", "ComplexEventEndDate_t_1210521684"); // 4
          EvntDts_16_set.insert("ComplexEventEndDate_t_1210521684");
          all_values.push_back(EvntDts_16_set);
          all_compo_names.insert("EvntDts_16_set");

          {
            xml_element EvntTms_16{"EvntTms"};
            multiset<string> EvntTms_16_set;
            EvntTms_16.add_attribute("StartTm", "2005809304"); // 5
            EvntTms_16_set.insert("2005809304");
            EvntTms_16.add_attribute("EndTm", "443598026"); // 5
            EvntTms_16_set.insert("443598026");
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
      PxLmts2_0.add_attribute("LowLmtPx", "13818806.500000"); // 2
      PxLmts2_0_set.insert("13818806.500000");
      PxLmts2_0.add_attribute("HiLmtPx", "1158239.870000"); // 2
      PxLmts2_0_set.insert("1158239.870000");
      PxLmts2_0.add_attribute("TrdgRefPx", "19570472.540000"); // 2
      PxLmts2_0_set.insert("19570472.540000");
      all_values.push_back(PxLmts2_0_set);
      all_compo_names.insert("PxLmts2_0_set");

      RelSym_0.add_element(PxLmts2_0);
    }
    {
      xml_element InstrmtExt_4{"InstrmtExt"};
      multiset<string> InstrmtExt_4_set;
      InstrmtExt_4.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_4_set.insert("2");
      InstrmtExt_4.add_attribute("PctAtRisk", "16953526.990000"); // 2
      InstrmtExt_4_set.insert("16953526.990000");
      all_values.push_back(InstrmtExt_4_set);
      all_compo_names.insert("InstrmtExt_4_set");

      {
        xml_element Attrb_6{"Attrb"};
        multiset<string> Attrb_6_set;
        Attrb_6.add_attribute("Typ", "11"); // 3
        Attrb_6_set.insert("11");
        Attrb_6.add_attribute("Val", "InstrAttribValue_t_125063263"); // 3
        Attrb_6_set.insert("InstrAttribValue_t_125063263");
        all_values.push_back(Attrb_6_set);
        all_compo_names.insert("Attrb_6_set");

        InstrmtExt_4.add_element(Attrb_6);
      }
      RelSym_0.add_element(InstrmtExt_4);
    }
    {
      xml_element Leg_27{"Leg"};
      multiset<string> Leg_27_set;
      Leg_27.add_attribute("Sym", "LegSymbol_t_1483375941"); // 2
      Leg_27_set.insert("LegSymbol_t_1483375941");
      Leg_27.add_attribute("Sfx", "CD"); // 2
      Leg_27_set.insert("CD");
      Leg_27.add_attribute("ID", "LegSecurityID_t_26137918"); // 2
      Leg_27_set.insert("LegSecurityID_t_26137918");
      Leg_27.add_attribute("Src", "C"); // 2
      Leg_27_set.insert("C");
      Leg_27.add_attribute("Prod", "9"); // 2
      Leg_27_set.insert("9");
      Leg_27.add_attribute("CFI", "LegCFICode_t_1639677584"); // 2
      Leg_27_set.insert("LegCFICode_t_1639677584");
      Leg_27.add_attribute("SecTyp", "CMO"); // 2
      Leg_27_set.insert("CMO");
      Leg_27.add_attribute("SecSubTyp", "LegSecuritySubType_t_799350140"); // 2
      Leg_27_set.insert("LegSecuritySubType_t_799350140");
      Leg_27.add_attribute("MMY", "1267238071"); // 2
      Leg_27_set.insert("1267238071");
      Leg_27.add_attribute("Mat", "LegMaturityDate_t_1052836653"); // 2
      Leg_27_set.insert("LegMaturityDate_t_1052836653");
      Leg_27.add_attribute("MatTm", "1945317574"); // 2
      Leg_27_set.insert("1945317574");
      Leg_27.add_attribute("CpnPmt", "LegCouponPaymentDate_t_371229677"); // 2
      Leg_27_set.insert("LegCouponPaymentDate_t_371229677");
      Leg_27.add_attribute("Issued", "LegIssueDate_t_559427531"); // 2
      Leg_27_set.insert("LegIssueDate_t_559427531");
      Leg_27.add_attribute("RepoCollSecTyp", "1820930502"); // 2
      Leg_27_set.insert("1820930502");
      Leg_27.add_attribute("RepoTrm", "949104685"); // 2
      Leg_27_set.insert("949104685");
      Leg_27.add_attribute("RepoRt", "6861114.400000"); // 2
      Leg_27_set.insert("6861114.400000");
      Leg_27.add_attribute("Fctr", "2851165.550000"); // 2
      Leg_27_set.insert("2851165.550000");
      Leg_27.add_attribute("CrdRtg", "LegCreditRating_t_631590635"); // 2
      Leg_27_set.insert("LegCreditRating_t_631590635");
      Leg_27.add_attribute("Rgstry", "LegInstrRegistry_t_340750374"); // 2
      Leg_27_set.insert("LegInstrRegistry_t_340750374");
      Leg_27.add_attribute("Ctry", "1836406548"); // 2
      Leg_27_set.insert("1836406548");
      Leg_27.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1842112319"); // 2
      Leg_27_set.insert("LegStateOrProvinceOfIssue_t_1842112319");
      Leg_27.add_attribute("Lcl", "LegLocaleOfIssue_t_199076030"); // 2
      Leg_27_set.insert("LegLocaleOfIssue_t_199076030");
      Leg_27.add_attribute("Redeem", "LegRedemptionDate_t_132520926"); // 2
      Leg_27_set.insert("LegRedemptionDate_t_132520926");
      Leg_27.add_attribute("Strk", "7759571.310000"); // 2
      Leg_27_set.insert("7759571.310000");
      Leg_27.add_attribute("StrkCcy", "USD"); // 2
      Leg_27_set.insert("USD");
      Leg_27.add_attribute("OptA", "585520738"); // 2
      Leg_27_set.insert("585520738");
      Leg_27.add_attribute("Cmult", "6728256.280000"); // 2
      Leg_27_set.insert("6728256.280000");
      Leg_27.add_attribute("MultTyp", "1"); // 2
      Leg_27_set.insert("1");
      Leg_27.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_27_set.insert("0");
      Leg_27.add_attribute("UOM", "lbs"); // 2
      Leg_27_set.insert("lbs");
      Leg_27.add_attribute("UOMQty", "12795899.060000"); // 2
      Leg_27_set.insert("12795899.060000");
      Leg_27.add_attribute("PxUOM", "lbs"); // 2
      Leg_27_set.insert("lbs");
      Leg_27.add_attribute("PxUOMQty", "8240268.090000"); // 2
      Leg_27_set.insert("8240268.090000");
      Leg_27.add_attribute("TmUnit", "Wk"); // 2
      Leg_27_set.insert("Wk");
      Leg_27.add_attribute("ExerStyle", "2"); // 2
      Leg_27_set.insert("2");
      Leg_27.add_attribute("CpnRt", "3162207.450000"); // 2
      Leg_27_set.insert("3162207.450000");
      Leg_27.add_attribute("Exch", "LegSecurityExchange_t_601067639"); // 2
      Leg_27_set.insert("LegSecurityExchange_t_601067639");
      Leg_27.add_attribute("Issr", "LegIssuer_t_1889888803"); // 2
      Leg_27_set.insert("LegIssuer_t_1889888803");
      Leg_27.add_attribute("EncLegIssrLen", "1583458817"); // 2
      Leg_27_set.insert("1583458817");
      Leg_27.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1653904292"); // 2
      Leg_27_set.insert("EncodedLegIssuer_t_1653904292");
      Leg_27.add_attribute("Desc", "LegSecurityDesc_t_1687722730"); // 2
      Leg_27_set.insert("LegSecurityDesc_t_1687722730");
      Leg_27.add_attribute("EncLegSecDescLen", "1954688494"); // 2
      Leg_27_set.insert("1954688494");
      Leg_27.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_65848175"); // 2
      Leg_27_set.insert("EncodedLegSecurityDesc_t_65848175");
      Leg_27.add_attribute("RatioQty", "13611695.840000"); // 2
      Leg_27_set.insert("13611695.840000");
      Leg_27.add_attribute("Side", "C"); // 2
      Leg_27_set.insert("C");
      Leg_27.add_attribute("Ccy", "GBP"); // 2
      Leg_27_set.insert("GBP");
      Leg_27.add_attribute("Pool", "LegPool_t_1387900167"); // 2
      Leg_27_set.insert("LegPool_t_1387900167");
      Leg_27.add_attribute("Dated", "LegDatedDate_t_1092709989"); // 2
      Leg_27_set.insert("LegDatedDate_t_1092709989");
      Leg_27.add_attribute("CSetMo", "1335209040"); // 2
      Leg_27_set.insert("1335209040");
      Leg_27.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1082528838"); // 2
      Leg_27_set.insert("LegInterestAccrualDate_t_1082528838");
      Leg_27.add_attribute("PutCall", "1291786019"); // 2
      Leg_27_set.insert("1291786019");
      Leg_27.add_attribute("LegOptionRatio", "14677299.670000"); // 2
      Leg_27_set.insert("14677299.670000");
      Leg_27.add_attribute("Px", "18584859.700000"); // 2
      Leg_27_set.insert("18584859.700000");
      all_values.push_back(Leg_27_set);
      all_compo_names.insert("Leg_27_set");

      {
        xml_element LegAID_27{"LegAID"};
        multiset<string> LegAID_27_set;
        LegAID_27.add_attribute("SecAltID", "LegSecurityAltID_t_725259052"); // 3
        LegAID_27_set.insert("LegSecurityAltID_t_725259052");
        LegAID_27.add_attribute("SecAltIDSrc", "G"); // 3
        LegAID_27_set.insert("G");
        all_values.push_back(LegAID_27_set);
        all_compo_names.insert("LegAID_27_set");

        Leg_27.add_element(LegAID_27);
      }
      RelSym_0.add_element(Leg_27);
    }
    elt.add_element(RelSym_0);
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
