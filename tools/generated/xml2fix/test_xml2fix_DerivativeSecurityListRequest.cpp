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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecListReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1591556058"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("SecurityReqID_t_1591556058");
  elt.add_attribute("ListReqTyp", "2"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("2");
  elt.add_attribute("MktID", "MarketID_t_562673247"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("MarketID_t_562673247");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_741680629"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("MarketSegmentID_t_741680629");
  elt.add_attribute("SubTyp", "SecuritySubType_t_845137437"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("SecuritySubType_t_845137437");
  elt.add_attribute("Ccy", "JPY"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("JPY");
  elt.add_attribute("Txt", "Text_t_2131504833"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("Text_t_2131504833");
  elt.add_attribute("EncTxtLen", "935814557"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("935814557");
  elt.add_attribute("EncTxt", "EncodedText_t_958346984"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("EncodedText_t_958346984");
  elt.add_attribute("SesID", "4"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("4");
  elt.add_attribute("SesSub", "7"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("7");
  elt.add_attribute("SubReqTyp", "1"); // 0
  DerivativeSecurityListRequest_message_t_0.insert("1");
  all_values.push_back(DerivativeSecurityListRequest_message_t_0);
  all_compo_names.insert("DerivativeSecurityListRequest_message_t");

  { // Hdr
    xml_element Hdr_27{"Hdr"};
    multiset<string> Hdr_27_set;
    Hdr_27.add_attribute("SeqNum", "1756023004"); // 1
    Hdr_27_set.insert("1756023004");
    Hdr_27.add_attribute("SID", "SenderCompID_t_953677323"); // 1
    Hdr_27_set.insert("SenderCompID_t_953677323");
    Hdr_27.add_attribute("TID", "TargetCompID_t_2090167466"); // 1
    Hdr_27_set.insert("TargetCompID_t_2090167466");
    Hdr_27.add_attribute("OBID", "OnBehalfOfCompID_t_810535677"); // 1
    Hdr_27_set.insert("OnBehalfOfCompID_t_810535677");
    Hdr_27.add_attribute("D2ID", "DeliverToCompID_t_473671840"); // 1
    Hdr_27_set.insert("DeliverToCompID_t_473671840");
    Hdr_27.add_attribute("SSub", "SenderSubID_t_1755332981"); // 1
    Hdr_27_set.insert("SenderSubID_t_1755332981");
    Hdr_27.add_attribute("SLoc", "SenderLocationID_t_1048869848"); // 1
    Hdr_27_set.insert("SenderLocationID_t_1048869848");
    Hdr_27.add_attribute("TSub", "TargetSubID_t_1514554627"); // 1
    Hdr_27_set.insert("TargetSubID_t_1514554627");
    Hdr_27.add_attribute("TLoc", "TargetLocationID_t_875697147"); // 1
    Hdr_27_set.insert("TargetLocationID_t_875697147");
    Hdr_27.add_attribute("OBSub", "OnBehalfOfSubID_t_1617291007"); // 1
    Hdr_27_set.insert("OnBehalfOfSubID_t_1617291007");
    Hdr_27.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1840188176"); // 1
    Hdr_27_set.insert("OnBehalfOfLocationID_t_1840188176");
    Hdr_27.add_attribute("D2Sub", "DeliverToSubID_t_2118303866"); // 1
    Hdr_27_set.insert("DeliverToSubID_t_2118303866");
    Hdr_27.add_attribute("D2Loc", "DeliverToLocationID_t_1170403980"); // 1
    Hdr_27_set.insert("DeliverToLocationID_t_1170403980");
    Hdr_27.add_attribute("PosDup", "N"); // 1
    Hdr_27_set.insert("N");
    Hdr_27.add_attribute("PosRsnd", "Y"); // 1
    Hdr_27_set.insert("Y");
    Hdr_27.add_attribute("Snt", "SendingTime_t_34890837"); // 1
    Hdr_27_set.insert("SendingTime_t_34890837");
    Hdr_27.add_attribute("OrigSnt", "OrigSendingTime_t_136045941"); // 1
    Hdr_27_set.insert("OrigSendingTime_t_136045941");
    Hdr_27.add_attribute("MsgEncd", "MessageEncoding_t_1075672477"); // 1
    Hdr_27_set.insert("MessageEncoding_t_1075672477");
    all_values.push_back(Hdr_27_set);
    all_compo_names.insert("Hdr_27_set");

    {
      xml_element Hop_27{"Hop"};
      multiset<string> Hop_27_set;
      Hop_27.add_attribute("ID", "HopCompID_t_1626446895"); // 2
      Hop_27_set.insert("HopCompID_t_1626446895");
      Hop_27.add_attribute("Ref", "1076422367"); // 2
      Hop_27_set.insert("1076422367");
      Hop_27.add_attribute("Snt", "HopSendingTime_t_1638345725"); // 2
      Hop_27_set.insert("HopSendingTime_t_1638345725");
      all_values.push_back(Hop_27_set);
      all_compo_names.insert("Hop_27_set");

      Hdr_27.add_element(Hop_27);
    }
    elt.add_element(Hdr_27);
  } // end Hdr
  { // Undly
    xml_element Undly_30{"Undly"};
    multiset<string> Undly_30_set;
    Undly_30.add_attribute("Sym", "UnderlyingSymbol_t_220643877"); // 1
    Undly_30_set.insert("UnderlyingSymbol_t_220643877");
    Undly_30.add_attribute("Sfx", "CD"); // 1
    Undly_30_set.insert("CD");
    Undly_30.add_attribute("ID", "UnderlyingSecurityID_t_1035029427"); // 1
    Undly_30_set.insert("UnderlyingSecurityID_t_1035029427");
    Undly_30.add_attribute("Src", "L"); // 1
    Undly_30_set.insert("L");
    Undly_30.add_attribute("Prod", "10"); // 1
    Undly_30_set.insert("10");
    Undly_30.add_attribute("CFI", "UnderlyingCFICode_t_1970843984"); // 1
    Undly_30_set.insert("UnderlyingCFICode_t_1970843984");
    Undly_30.add_attribute("SecTyp", "COFP"); // 1
    Undly_30_set.insert("COFP");
    Undly_30.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_488190875"); // 1
    Undly_30_set.insert("UnderlyingSecuritySubType_t_488190875");
    Undly_30.add_attribute("MMY", "1171766401"); // 1
    Undly_30_set.insert("1171766401");
    Undly_30.add_attribute("Mat", "UnderlyingMaturityDate_t_679872850"); // 1
    Undly_30_set.insert("UnderlyingMaturityDate_t_679872850");
    Undly_30.add_attribute("MatTm", "96730231"); // 1
    Undly_30_set.insert("96730231");
    Undly_30.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2125443724"); // 1
    Undly_30_set.insert("UnderlyingCouponPaymentDate_t_2125443724");
    Undly_30.add_attribute("RestrctTyp", "FR"); // 1
    Undly_30_set.insert("FR");
    Undly_30.add_attribute("Snrty", "SR"); // 1
    Undly_30_set.insert("SR");
    Undly_30.add_attribute("NotlPctOut", "4516319.170000"); // 1
    Undly_30_set.insert("4516319.170000");
    Undly_30.add_attribute("OrigNotlPctOut", "2304060.020000"); // 1
    Undly_30_set.insert("2304060.020000");
    Undly_30.add_attribute("AttchPnt", "19561357.560000"); // 1
    Undly_30_set.insert("19561357.560000");
    Undly_30.add_attribute("DetchPnt", "19661865.440000"); // 1
    Undly_30_set.insert("19661865.440000");
    Undly_30.add_attribute("Issued", "UnderlyingIssueDate_t_1106103149"); // 1
    Undly_30_set.insert("UnderlyingIssueDate_t_1106103149");
    Undly_30.add_attribute("RepoCollSecTyp", "1425943115"); // 1
    Undly_30_set.insert("1425943115");
    Undly_30.add_attribute("RepoTrm", "1658891072"); // 1
    Undly_30_set.insert("1658891072");
    Undly_30.add_attribute("RepoRt", "10769233.670000"); // 1
    Undly_30_set.insert("10769233.670000");
    Undly_30.add_attribute("Fctr", "4488634.480000"); // 1
    Undly_30_set.insert("4488634.480000");
    Undly_30.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1369594938"); // 1
    Undly_30_set.insert("UnderlyingCreditRating_t_1369594938");
    Undly_30.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1887583394"); // 1
    Undly_30_set.insert("UnderlyingInstrRegistry_t_1887583394");
    Undly_30.add_attribute("Ctry", "483754285"); // 1
    Undly_30_set.insert("483754285");
    Undly_30.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1505640879"); // 1
    Undly_30_set.insert("UnderlyingStateOrProvinceOfIssue_t_1505640879");
    Undly_30.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_815772224"); // 1
    Undly_30_set.insert("UnderlyingLocaleOfIssue_t_815772224");
    Undly_30.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2110201180"); // 1
    Undly_30_set.insert("UnderlyingRedemptionDate_t_2110201180");
    Undly_30.add_attribute("StrkPx", "4345795.990000"); // 1
    Undly_30_set.insert("4345795.990000");
    Undly_30.add_attribute("StrkCcy", "CAN"); // 1
    Undly_30_set.insert("CAN");
    Undly_30.add_attribute("OptA", "208655755"); // 1
    Undly_30_set.insert("208655755");
    Undly_30.add_attribute("Mult", "13416637.280000"); // 1
    Undly_30_set.insert("13416637.280000");
    Undly_30.add_attribute("MultTyp", "1"); // 1
    Undly_30_set.insert("1");
    Undly_30.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_30_set.insert("0");
    Undly_30.add_attribute("UOM", "USD"); // 1
    Undly_30_set.insert("USD");
    Undly_30.add_attribute("UOMQty", "11955606.480000"); // 1
    Undly_30_set.insert("11955606.480000");
    Undly_30.add_attribute("PxUOM", "Bbl"); // 1
    Undly_30_set.insert("Bbl");
    Undly_30.add_attribute("PxUOMQty", "1893068.180000"); // 1
    Undly_30_set.insert("1893068.180000");
    Undly_30.add_attribute("TmUnit", "Min"); // 1
    Undly_30_set.insert("Min");
    Undly_30.add_attribute("ExerStyle", "0"); // 1
    Undly_30_set.insert("0");
    Undly_30.add_attribute("CpnRt", "1672668.940000"); // 1
    Undly_30_set.insert("1672668.940000");
    Undly_30.add_attribute("Exch", "UnderlyingSecurityExchange_t_350506518"); // 1
    Undly_30_set.insert("UnderlyingSecurityExchange_t_350506518");
    Undly_30.add_attribute("Issr", "UnderlyingIssuer_t_1458940111"); // 1
    Undly_30_set.insert("UnderlyingIssuer_t_1458940111");
    Undly_30.add_attribute("EncUndIssrLen", "618898811"); // 1
    Undly_30_set.insert("618898811");
    Undly_30.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_580912520"); // 1
    Undly_30_set.insert("EncodedUnderlyingIssuer_t_580912520");
    Undly_30.add_attribute("Desc", "UnderlyingSecurityDesc_t_1267592220"); // 1
    Undly_30_set.insert("UnderlyingSecurityDesc_t_1267592220");
    Undly_30.add_attribute("EncUndSecDescLen", "437601708"); // 1
    Undly_30_set.insert("437601708");
    Undly_30.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1687015669"); // 1
    Undly_30_set.insert("EncodedUnderlyingSecurityDesc_t_1687015669");
    Undly_30.add_attribute("CPPgm", "UnderlyingCPProgram_t_546051687"); // 1
    Undly_30_set.insert("UnderlyingCPProgram_t_546051687");
    Undly_30.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2096492780"); // 1
    Undly_30_set.insert("UnderlyingCPRegType_t_2096492780");
    Undly_30.add_attribute("AllocPct", "6164553.880000"); // 1
    Undly_30_set.insert("6164553.880000");
    Undly_30.add_attribute("Ccy", "EUR"); // 1
    Undly_30_set.insert("EUR");
    Undly_30.add_attribute("Qty", "3565551.350000"); // 1
    Undly_30_set.insert("3565551.350000");
    Undly_30.add_attribute("SettlTyp", "5"); // 1
    Undly_30_set.insert("5");
    Undly_30.add_attribute("CashAmt", "UnderlyingCashAmount_t_676761302"); // 1
    Undly_30_set.insert("UnderlyingCashAmount_t_676761302");
    Undly_30.add_attribute("CashTyp", "DIFF"); // 1
    Undly_30_set.insert("DIFF");
    Undly_30.add_attribute("Px", "14413869.530000"); // 1
    Undly_30_set.insert("14413869.530000");
    Undly_30.add_attribute("DirtPx", "11113409.010000"); // 1
    Undly_30_set.insert("11113409.010000");
    Undly_30.add_attribute("EndPx", "14789616.600000"); // 1
    Undly_30_set.insert("14789616.600000");
    Undly_30.add_attribute("StartVal", "UnderlyingStartValue_t_1624748362"); // 1
    Undly_30_set.insert("UnderlyingStartValue_t_1624748362");
    Undly_30.add_attribute("CurVal", "UnderlyingCurrentValue_t_1319996657"); // 1
    Undly_30_set.insert("UnderlyingCurrentValue_t_1319996657");
    Undly_30.add_attribute("EndVal", "UnderlyingEndValue_t_673141740"); // 1
    Undly_30_set.insert("UnderlyingEndValue_t_673141740");
    Undly_30.add_attribute("AdjQty", "18350358.990000"); // 1
    Undly_30_set.insert("18350358.990000");
    Undly_30.add_attribute("FxRate", "12867497.540000"); // 1
    Undly_30_set.insert("12867497.540000");
    Undly_30.add_attribute("FxRateCalc", "M"); // 1
    Undly_30_set.insert("M");
    Undly_30.add_attribute("CapValu", "UnderlyingCapValue_t_883112899"); // 1
    Undly_30_set.insert("UnderlyingCapValue_t_883112899");
    Undly_30.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1741693727"); // 1
    Undly_30_set.insert("UnderlyingSettlMethod_t_1741693727");
    Undly_30.add_attribute("PutCall", "2027472622"); // 1
    Undly_30_set.insert("2027472622");
    all_values.push_back(Undly_30_set);
    all_compo_names.insert("Undly_30_set");

    {
      xml_element UndAID_30{"UndAID"};
      multiset<string> UndAID_30_set;
      UndAID_30.add_attribute("AltID", "UnderlyingSecurityAltID_t_611062749"); // 2
      UndAID_30_set.insert("UnderlyingSecurityAltID_t_611062749");
      UndAID_30.add_attribute("AltIDSrc", "H"); // 2
      UndAID_30_set.insert("H");
      all_values.push_back(UndAID_30_set);
      all_compo_names.insert("UndAID_30_set");

      Undly_30.add_element(UndAID_30);
    }
    {
      xml_element Stip_50{"Stip"};
      multiset<string> Stip_50_set;
      Stip_50.add_attribute("Typ", "PAYFREQ"); // 2
      Stip_50_set.insert("PAYFREQ");
      Stip_50.add_attribute("Val", "UnderlyingStipValue_t_961569267"); // 2
      Stip_50_set.insert("UnderlyingStipValue_t_961569267");
      all_values.push_back(Stip_50_set);
      all_compo_names.insert("Stip_50_set");

      Undly_30.add_element(Stip_50);
    }
    {
      xml_element Pty_135{"Pty"};
      multiset<string> Pty_135_set;
      Pty_135.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1604824394"); // 2
      Pty_135_set.insert("UnderlyingInstrumentPartyID_t_1604824394");
      Pty_135.add_attribute("Src", "7"); // 2
      Pty_135_set.insert("7");
      Pty_135.add_attribute("R", "9"); // 2
      Pty_135_set.insert("9");
      all_values.push_back(Pty_135_set);
      all_compo_names.insert("Pty_135_set");

      {
        xml_element Sub_135{"Sub"};
        multiset<string> Sub_135_set;
        Sub_135.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_724932966"); // 3
        Sub_135_set.insert("UnderlyingInstrumentPartySubID_t_724932966");
        Sub_135.add_attribute("Typ", "18"); // 3
        Sub_135_set.insert("18");
        all_values.push_back(Sub_135_set);
        all_compo_names.insert("Sub_135_set");

        Pty_135.add_element(Sub_135);
      }
      Undly_30.add_element(Pty_135);
    }
    elt.add_element(Undly_30);
  } // end Undly
  { // DerivInstrmt
    xml_element DerivInstrmt_1{"DerivInstrmt"};
    multiset<string> DerivInstrmt_1_set;
    DerivInstrmt_1.add_attribute("Sym", "DerivativeSymbol_t_1082013809"); // 1
    DerivInstrmt_1_set.insert("DerivativeSymbol_t_1082013809");
    DerivInstrmt_1.add_attribute("Sfx", "WI"); // 1
    DerivInstrmt_1_set.insert("WI");
    DerivInstrmt_1.add_attribute("ID", "DerivativeSecurityID_t_1052765521"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityID_t_1052765521");
    DerivInstrmt_1.add_attribute("Src", "9"); // 1
    DerivInstrmt_1_set.insert("9");
    DerivInstrmt_1.add_attribute("Prod", "9"); // 1
    DerivInstrmt_1_set.insert("9");
    DerivInstrmt_1.add_attribute("ProdCmplx", "DerivativeProductComplex_t_223885944"); // 1
    DerivInstrmt_1_set.insert("DerivativeProductComplex_t_223885944");
    DerivInstrmt_1.add_attribute("FlexProdElig", "false"); // 1
    DerivInstrmt_1_set.insert("false");
    DerivInstrmt_1.add_attribute("SecGrp", "DerivativeSecurityGroup_t_1597085561"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityGroup_t_1597085561");
    DerivInstrmt_1.add_attribute("CFI", "DerivativeCFICode_t_900647246"); // 1
    DerivInstrmt_1_set.insert("DerivativeCFICode_t_900647246");
    DerivInstrmt_1.add_attribute("SecTyp", "CMBS"); // 1
    DerivInstrmt_1_set.insert("CMBS");
    DerivInstrmt_1.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_890988866"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecuritySubType_t_890988866");
    DerivInstrmt_1.add_attribute("MMY", "2011988148"); // 1
    DerivInstrmt_1_set.insert("2011988148");
    DerivInstrmt_1.add_attribute("MatDt", "DerivativeMaturityDate_t_411346056"); // 1
    DerivInstrmt_1_set.insert("DerivativeMaturityDate_t_411346056");
    DerivInstrmt_1.add_attribute("MatTm", "368253581"); // 1
    DerivInstrmt_1_set.insert("368253581");
    DerivInstrmt_1.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_1184501157"); // 1
    DerivInstrmt_1_set.insert("DerivativeSettleOnOpenFlag_t_1184501157");
    DerivInstrmt_1.add_attribute("AsgnMeth", "1084487796"); // 1
    DerivInstrmt_1_set.insert("1084487796");
    DerivInstrmt_1.add_attribute("Status", "1"); // 1
    DerivInstrmt_1_set.insert("1");
    DerivInstrmt_1.add_attribute("IssDt", "DerivativeIssueDate_t_323767263"); // 1
    DerivInstrmt_1_set.insert("DerivativeIssueDate_t_323767263");
    DerivInstrmt_1.add_attribute("Rgstry", "DerivativeInstrRegistry_t_775169952"); // 1
    DerivInstrmt_1_set.insert("DerivativeInstrRegistry_t_775169952");
    DerivInstrmt_1.add_attribute("Ctry", "938918731"); // 1
    DerivInstrmt_1_set.insert("938918731");
    DerivInstrmt_1.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_2065460990"); // 1
    DerivInstrmt_1_set.insert("DerivativeStateOrProvinceOfIssue_t_2065460990");
    DerivInstrmt_1.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_655158927"); // 1
    DerivInstrmt_1_set.insert("DerivativeLocaleOfIssue_t_655158927");
    DerivInstrmt_1.add_attribute("StrkPx", "15499814.800000"); // 1
    DerivInstrmt_1_set.insert("15499814.800000");
    DerivInstrmt_1.add_attribute("StrkCcy", "JPY"); // 1
    DerivInstrmt_1_set.insert("JPY");
    DerivInstrmt_1.add_attribute("StrkMult", "3640670.990000"); // 1
    DerivInstrmt_1_set.insert("3640670.990000");
    DerivInstrmt_1.add_attribute("StrkValu", "16686860.190000"); // 1
    DerivInstrmt_1_set.insert("16686860.190000");
    DerivInstrmt_1.add_attribute("OptAt", "1368569476"); // 1
    DerivInstrmt_1_set.insert("1368569476");
    DerivInstrmt_1.add_attribute("Mult", "19065488.870000"); // 1
    DerivInstrmt_1_set.insert("19065488.870000");
    DerivInstrmt_1.add_attribute("MultTyp", "1"); // 1
    DerivInstrmt_1_set.insert("1");
    DerivInstrmt_1.add_attribute("FlowSchedTyp", "2"); // 1
    DerivInstrmt_1_set.insert("2");
    DerivInstrmt_1.add_attribute("MinPxIncr", "8410790.490000"); // 1
    DerivInstrmt_1_set.insert("8410790.490000");
    DerivInstrmt_1.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_1517119990"); // 1
    DerivInstrmt_1_set.insert("DerivativeMinPriceIncrementAmount_t_1517119990");
    DerivInstrmt_1.add_attribute("UOM", "MWh"); // 1
    DerivInstrmt_1_set.insert("MWh");
    DerivInstrmt_1.add_attribute("UOMQty", "3920645.990000"); // 1
    DerivInstrmt_1_set.insert("3920645.990000");
    DerivInstrmt_1.add_attribute("PxUOM", "oz_tr"); // 1
    DerivInstrmt_1_set.insert("oz_tr");
    DerivInstrmt_1.add_attribute("PxUOMQty", "16014936.820000"); // 1
    DerivInstrmt_1_set.insert("16014936.820000");
    DerivInstrmt_1.add_attribute("SettlMeth", "C"); // 1
    DerivInstrmt_1_set.insert("C");
    DerivInstrmt_1.add_attribute("PxQteMeth", "INX"); // 1
    DerivInstrmt_1_set.insert("INX");
    DerivInstrmt_1.add_attribute("ValMeth", "EQTY"); // 1
    DerivInstrmt_1_set.insert("EQTY");
    DerivInstrmt_1.add_attribute("ListMeth", "0"); // 1
    DerivInstrmt_1_set.insert("0");
    DerivInstrmt_1.add_attribute("CapPx", "19761269.110000"); // 1
    DerivInstrmt_1_set.insert("19761269.110000");
    DerivInstrmt_1.add_attribute("FlrPx", "2191617.800000"); // 1
    DerivInstrmt_1_set.insert("2191617.800000");
    DerivInstrmt_1.add_attribute("PutCall", "0"); // 1
    DerivInstrmt_1_set.insert("0");
    DerivInstrmt_1.add_attribute("ExerStyle", "1"); // 1
    DerivInstrmt_1_set.insert("1");
    DerivInstrmt_1.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_1403662937"); // 1
    DerivInstrmt_1_set.insert("DerivativeOptPayAmount_t_1403662937");
    DerivInstrmt_1.add_attribute("TmUnit", "H"); // 1
    DerivInstrmt_1_set.insert("H");
    DerivInstrmt_1.add_attribute("Exch", "DerivativeSecurityExchange_t_252702676"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityExchange_t_252702676");
    DerivInstrmt_1.add_attribute("PosLmt", "1727430201"); // 1
    DerivInstrmt_1_set.insert("1727430201");
    DerivInstrmt_1.add_attribute("NTPosLmt", "1502993484"); // 1
    DerivInstrmt_1_set.insert("1502993484");
    DerivInstrmt_1.add_attribute("Issr", "DerivativeIssuer_t_1191621407"); // 1
    DerivInstrmt_1_set.insert("DerivativeIssuer_t_1191621407");
    DerivInstrmt_1.add_attribute("EncIssrLen", "1645407543"); // 1
    DerivInstrmt_1_set.insert("1645407543");
    DerivInstrmt_1.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_10668763"); // 1
    DerivInstrmt_1_set.insert("DerivativeEncodedIssuer_t_10668763");
    DerivInstrmt_1.add_attribute("Desc", "DerivativeSecurityDesc_t_594119239"); // 1
    DerivInstrmt_1_set.insert("DerivativeSecurityDesc_t_594119239");
    DerivInstrmt_1.add_attribute("EncSecDescLen", "1709269168"); // 1
    DerivInstrmt_1_set.insert("1709269168");
    DerivInstrmt_1.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_713083559"); // 1
    DerivInstrmt_1_set.insert("DerivativeEncodedSecurityDesc_t_713083559");
    DerivInstrmt_1.add_attribute("CSetMo", "958186339"); // 1
    DerivInstrmt_1_set.insert("958186339");
    all_values.push_back(DerivInstrmt_1_set);
    all_compo_names.insert("DerivInstrmt_1_set");

    {
      xml_element AID_20{"AID"};
      multiset<string> AID_20_set;
      AID_20.add_attribute("ID", "DerivativeSecurityAltID_t_1230471539"); // 2
      AID_20_set.insert("DerivativeSecurityAltID_t_1230471539");
      AID_20.add_attribute("Src", "D"); // 2
      AID_20_set.insert("D");
      all_values.push_back(AID_20_set);
      all_compo_names.insert("AID_20_set");

      DerivInstrmt_1.add_element(AID_20);
    }
    {
      xml_element SecXML_20{"SecXML"};
      multiset<string> SecXML_20_set;
      SecXML_20.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_717251578"); // 2
      SecXML_20_set.insert("DerivativeSecurityXMLSchema_t_717251578");
      all_values.push_back(SecXML_20_set);
      all_compo_names.insert("SecXML_20_set");

      DerivInstrmt_1.add_element(SecXML_20);
    }
    {
      xml_element Evnt_20{"Evnt"};
      multiset<string> Evnt_20_set;
      Evnt_20.add_attribute("EventTyp", "16"); // 2
      Evnt_20_set.insert("16");
      Evnt_20.add_attribute("Dt", "DerivativeEventDate_t_259011605"); // 2
      Evnt_20_set.insert("DerivativeEventDate_t_259011605");
      Evnt_20.add_attribute("Tm", "DerivativeEventTime_t_1558330627"); // 2
      Evnt_20_set.insert("DerivativeEventTime_t_1558330627");
      Evnt_20.add_attribute("Px", "8462432.190000"); // 2
      Evnt_20_set.insert("8462432.190000");
      Evnt_20.add_attribute("Txt", "DerivativeEventText_t_1636619343"); // 2
      Evnt_20_set.insert("DerivativeEventText_t_1636619343");
      all_values.push_back(Evnt_20_set);
      all_compo_names.insert("Evnt_20_set");

      DerivInstrmt_1.add_element(Evnt_20);
    }
    {
      xml_element Pty_136{"Pty"};
      multiset<string> Pty_136_set;
      Pty_136.add_attribute("ID", "DerivativeInstrumentPartyID_t_1950395226"); // 2
      Pty_136_set.insert("DerivativeInstrumentPartyID_t_1950395226");
      Pty_136.add_attribute("Src", "9"); // 2
      Pty_136_set.insert("9");
      Pty_136.add_attribute("R", "14"); // 2
      Pty_136_set.insert("14");
      all_values.push_back(Pty_136_set);
      all_compo_names.insert("Pty_136_set");

      {
        xml_element Sub_136{"Sub"};
        multiset<string> Sub_136_set;
        Sub_136.add_attribute("ID", "DerivativeInstrumentPartySubID_t_102516862"); // 3
        Sub_136_set.insert("DerivativeInstrumentPartySubID_t_102516862");
        Sub_136.add_attribute("Typ", "29"); // 3
        Sub_136_set.insert("29");
        all_values.push_back(Sub_136_set);
        all_compo_names.insert("Sub_136_set");

        Pty_136.add_element(Sub_136);
      }
      DerivInstrmt_1.add_element(Pty_136);
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
