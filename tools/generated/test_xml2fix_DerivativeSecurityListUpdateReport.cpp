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
  elt.add_attribute("ReqID", "SecurityReqID_t_1361509494"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("SecurityReqID_t_1361509494");
  elt.add_attribute("RspID", "SecurityResponseID_t_410781707"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("SecurityResponseID_t_410781707");
  elt.add_attribute("ReqRslt", "1"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("1");
  elt.add_attribute("UpdActn", "D"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("D");
  elt.add_attribute("TxnTm", "TransactTime_t_519878286"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("TransactTime_t_519878286");
  elt.add_attribute("TotNoReltdSym", "1372915509"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("1372915509");
  elt.add_attribute("LastFragment", "Y"); // 0
  DerivativeSecurityListUpdateReport_message_t_0.insert("Y");
  all_values.push_back(DerivativeSecurityListUpdateReport_message_t_0);
  all_compo_names.insert("DerivativeSecurityListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_28{"Hdr"};
    multiset<string> Hdr_28_set;
    Hdr_28.add_attribute("SeqNum", "829441372"); // 1
    Hdr_28_set.insert("829441372");
    Hdr_28.add_attribute("SID", "SenderCompID_t_1116091566"); // 1
    Hdr_28_set.insert("SenderCompID_t_1116091566");
    Hdr_28.add_attribute("TID", "TargetCompID_t_1368207520"); // 1
    Hdr_28_set.insert("TargetCompID_t_1368207520");
    Hdr_28.add_attribute("OBID", "OnBehalfOfCompID_t_1520829261"); // 1
    Hdr_28_set.insert("OnBehalfOfCompID_t_1520829261");
    Hdr_28.add_attribute("D2ID", "DeliverToCompID_t_1492878392"); // 1
    Hdr_28_set.insert("DeliverToCompID_t_1492878392");
    Hdr_28.add_attribute("SSub", "SenderSubID_t_196317458"); // 1
    Hdr_28_set.insert("SenderSubID_t_196317458");
    Hdr_28.add_attribute("SLoc", "SenderLocationID_t_543455397"); // 1
    Hdr_28_set.insert("SenderLocationID_t_543455397");
    Hdr_28.add_attribute("TSub", "TargetSubID_t_1281118536"); // 1
    Hdr_28_set.insert("TargetSubID_t_1281118536");
    Hdr_28.add_attribute("TLoc", "TargetLocationID_t_92246675"); // 1
    Hdr_28_set.insert("TargetLocationID_t_92246675");
    Hdr_28.add_attribute("OBSub", "OnBehalfOfSubID_t_1319101702"); // 1
    Hdr_28_set.insert("OnBehalfOfSubID_t_1319101702");
    Hdr_28.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1325629457"); // 1
    Hdr_28_set.insert("OnBehalfOfLocationID_t_1325629457");
    Hdr_28.add_attribute("D2Sub", "DeliverToSubID_t_2010748455"); // 1
    Hdr_28_set.insert("DeliverToSubID_t_2010748455");
    Hdr_28.add_attribute("D2Loc", "DeliverToLocationID_t_1210097167"); // 1
    Hdr_28_set.insert("DeliverToLocationID_t_1210097167");
    Hdr_28.add_attribute("PosDup", "N"); // 1
    Hdr_28_set.insert("N");
    Hdr_28.add_attribute("PosRsnd", "Y"); // 1
    Hdr_28_set.insert("Y");
    Hdr_28.add_attribute("Snt", "SendingTime_t_1407366169"); // 1
    Hdr_28_set.insert("SendingTime_t_1407366169");
    Hdr_28.add_attribute("OrigSnt", "OrigSendingTime_t_659777951"); // 1
    Hdr_28_set.insert("OrigSendingTime_t_659777951");
    Hdr_28.add_attribute("MsgEncd", "MessageEncoding_t_1121405941"); // 1
    Hdr_28_set.insert("MessageEncoding_t_1121405941");
    all_values.push_back(Hdr_28_set);
    all_compo_names.insert("Hdr_28_set");

    {
      xml_element Hop_28{"Hop"};
      multiset<string> Hop_28_set;
      Hop_28.add_attribute("ID", "HopCompID_t_1480767839"); // 2
      Hop_28_set.insert("HopCompID_t_1480767839");
      Hop_28.add_attribute("Ref", "1674534670"); // 2
      Hop_28_set.insert("1674534670");
      Hop_28.add_attribute("Snt", "HopSendingTime_t_103086476"); // 2
      Hop_28_set.insert("HopSendingTime_t_103086476");
      all_values.push_back(Hop_28_set);
      all_compo_names.insert("Hop_28_set");

      Hdr_28.add_element(Hop_28);
    }
    elt.add_element(Hdr_28);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_3{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_3_set;
    ApplSeqCtrl_3.add_attribute("ApplID", "ApplID_t_1955434083"); // 1
    ApplSeqCtrl_3_set.insert("ApplID_t_1955434083");
    ApplSeqCtrl_3.add_attribute("ApplSeqNum", "39126671"); // 1
    ApplSeqCtrl_3_set.insert("39126671");
    ApplSeqCtrl_3.add_attribute("ApplLastSeqNum", "357438228"); // 1
    ApplSeqCtrl_3_set.insert("357438228");
    ApplSeqCtrl_3.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_3_set.insert("false");
    all_values.push_back(ApplSeqCtrl_3_set);
    all_compo_names.insert("ApplSeqCtrl_3_set");

    elt.add_element(ApplSeqCtrl_3);
  } // end ApplSeqCtrl
  { // Undly
    xml_element Undly_30{"Undly"};
    multiset<string> Undly_30_set;
    Undly_30.add_attribute("Sym", "UnderlyingSymbol_t_449908378"); // 1
    Undly_30_set.insert("UnderlyingSymbol_t_449908378");
    Undly_30.add_attribute("Sfx", "WI"); // 1
    Undly_30_set.insert("WI");
    Undly_30.add_attribute("ID", "UnderlyingSecurityID_t_1435152537"); // 1
    Undly_30_set.insert("UnderlyingSecurityID_t_1435152537");
    Undly_30.add_attribute("Src", "1"); // 1
    Undly_30_set.insert("1");
    Undly_30.add_attribute("Prod", "9"); // 1
    Undly_30_set.insert("9");
    Undly_30.add_attribute("CFI", "UnderlyingCFICode_t_1344068434"); // 1
    Undly_30_set.insert("UnderlyingCFICode_t_1344068434");
    Undly_30.add_attribute("SecTyp", "EUCP"); // 1
    Undly_30_set.insert("EUCP");
    Undly_30.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1113301910"); // 1
    Undly_30_set.insert("UnderlyingSecuritySubType_t_1113301910");
    Undly_30.add_attribute("MMY", "564792306"); // 1
    Undly_30_set.insert("564792306");
    Undly_30.add_attribute("Mat", "UnderlyingMaturityDate_t_1172573650"); // 1
    Undly_30_set.insert("UnderlyingMaturityDate_t_1172573650");
    Undly_30.add_attribute("MatTm", "458696654"); // 1
    Undly_30_set.insert("458696654");
    Undly_30.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_761109764"); // 1
    Undly_30_set.insert("UnderlyingCouponPaymentDate_t_761109764");
    Undly_30.add_attribute("RestrctTyp", "XR"); // 1
    Undly_30_set.insert("XR");
    Undly_30.add_attribute("Snrty", "SD"); // 1
    Undly_30_set.insert("SD");
    Undly_30.add_attribute("NotlPctOut", "8533564.390000"); // 1
    Undly_30_set.insert("8533564.390000");
    Undly_30.add_attribute("OrigNotlPctOut", "8876471.010000"); // 1
    Undly_30_set.insert("8876471.010000");
    Undly_30.add_attribute("AttchPnt", "9179610.000000"); // 1
    Undly_30_set.insert("9179610.000000");
    Undly_30.add_attribute("DetchPnt", "7166212.460000"); // 1
    Undly_30_set.insert("7166212.460000");
    Undly_30.add_attribute("Issued", "UnderlyingIssueDate_t_2097744268"); // 1
    Undly_30_set.insert("UnderlyingIssueDate_t_2097744268");
    Undly_30.add_attribute("RepoCollSecTyp", "102491172"); // 1
    Undly_30_set.insert("102491172");
    Undly_30.add_attribute("RepoTrm", "1936399541"); // 1
    Undly_30_set.insert("1936399541");
    Undly_30.add_attribute("RepoRt", "13576267.890000"); // 1
    Undly_30_set.insert("13576267.890000");
    Undly_30.add_attribute("Fctr", "7622691.230000"); // 1
    Undly_30_set.insert("7622691.230000");
    Undly_30.add_attribute("CrdRtg", "UnderlyingCreditRating_t_910321834"); // 1
    Undly_30_set.insert("UnderlyingCreditRating_t_910321834");
    Undly_30.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_690910981"); // 1
    Undly_30_set.insert("UnderlyingInstrRegistry_t_690910981");
    Undly_30.add_attribute("Ctry", "289320146"); // 1
    Undly_30_set.insert("289320146");
    Undly_30.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1013408310"); // 1
    Undly_30_set.insert("UnderlyingStateOrProvinceOfIssue_t_1013408310");
    Undly_30.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_498861416"); // 1
    Undly_30_set.insert("UnderlyingLocaleOfIssue_t_498861416");
    Undly_30.add_attribute("Redeem", "UnderlyingRedemptionDate_t_328446817"); // 1
    Undly_30_set.insert("UnderlyingRedemptionDate_t_328446817");
    Undly_30.add_attribute("StrkPx", "13708465.390000"); // 1
    Undly_30_set.insert("13708465.390000");
    Undly_30.add_attribute("StrkCcy", "CAN"); // 1
    Undly_30_set.insert("CAN");
    Undly_30.add_attribute("OptA", "2142625022"); // 1
    Undly_30_set.insert("2142625022");
    Undly_30.add_attribute("Mult", "9559902.340000"); // 1
    Undly_30_set.insert("9559902.340000");
    Undly_30.add_attribute("MultTyp", "1"); // 1
    Undly_30_set.insert("1");
    Undly_30.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_30_set.insert("2");
    Undly_30.add_attribute("UOM", "MWh"); // 1
    Undly_30_set.insert("MWh");
    Undly_30.add_attribute("UOMQty", "13998862.480000"); // 1
    Undly_30_set.insert("13998862.480000");
    Undly_30.add_attribute("PxUOM", "Bbl"); // 1
    Undly_30_set.insert("Bbl");
    Undly_30.add_attribute("PxUOMQty", "7173673.260000"); // 1
    Undly_30_set.insert("7173673.260000");
    Undly_30.add_attribute("TmUnit", "Yr"); // 1
    Undly_30_set.insert("Yr");
    Undly_30.add_attribute("ExerStyle", "2"); // 1
    Undly_30_set.insert("2");
    Undly_30.add_attribute("CpnRt", "14784770.900000"); // 1
    Undly_30_set.insert("14784770.900000");
    Undly_30.add_attribute("Exch", "UnderlyingSecurityExchange_t_2141005298"); // 1
    Undly_30_set.insert("UnderlyingSecurityExchange_t_2141005298");
    Undly_30.add_attribute("Issr", "UnderlyingIssuer_t_1156681827"); // 1
    Undly_30_set.insert("UnderlyingIssuer_t_1156681827");
    Undly_30.add_attribute("EncUndIssrLen", "184349881"); // 1
    Undly_30_set.insert("184349881");
    Undly_30.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_881168751"); // 1
    Undly_30_set.insert("EncodedUnderlyingIssuer_t_881168751");
    Undly_30.add_attribute("Desc", "UnderlyingSecurityDesc_t_2074642827"); // 1
    Undly_30_set.insert("UnderlyingSecurityDesc_t_2074642827");
    Undly_30.add_attribute("EncUndSecDescLen", "900971127"); // 1
    Undly_30_set.insert("900971127");
    Undly_30.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_831429372"); // 1
    Undly_30_set.insert("EncodedUnderlyingSecurityDesc_t_831429372");
    Undly_30.add_attribute("CPPgm", "UnderlyingCPProgram_t_29650351"); // 1
    Undly_30_set.insert("UnderlyingCPProgram_t_29650351");
    Undly_30.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_689887020"); // 1
    Undly_30_set.insert("UnderlyingCPRegType_t_689887020");
    Undly_30.add_attribute("AllocPct", "415725.130000"); // 1
    Undly_30_set.insert("415725.130000");
    Undly_30.add_attribute("Ccy", "JPY"); // 1
    Undly_30_set.insert("JPY");
    Undly_30.add_attribute("Qty", "7324834.940000"); // 1
    Undly_30_set.insert("7324834.940000");
    Undly_30.add_attribute("SettlTyp", "5"); // 1
    Undly_30_set.insert("5");
    Undly_30.add_attribute("CashAmt", "UnderlyingCashAmount_t_466133517"); // 1
    Undly_30_set.insert("UnderlyingCashAmount_t_466133517");
    Undly_30.add_attribute("CashTyp", "FIXED"); // 1
    Undly_30_set.insert("FIXED");
    Undly_30.add_attribute("Px", "14096864.370000"); // 1
    Undly_30_set.insert("14096864.370000");
    Undly_30.add_attribute("DirtPx", "18369800.560000"); // 1
    Undly_30_set.insert("18369800.560000");
    Undly_30.add_attribute("EndPx", "7521826.080000"); // 1
    Undly_30_set.insert("7521826.080000");
    Undly_30.add_attribute("StartVal", "UnderlyingStartValue_t_40557985"); // 1
    Undly_30_set.insert("UnderlyingStartValue_t_40557985");
    Undly_30.add_attribute("CurVal", "UnderlyingCurrentValue_t_1832121430"); // 1
    Undly_30_set.insert("UnderlyingCurrentValue_t_1832121430");
    Undly_30.add_attribute("EndVal", "UnderlyingEndValue_t_1708172842"); // 1
    Undly_30_set.insert("UnderlyingEndValue_t_1708172842");
    Undly_30.add_attribute("AdjQty", "17886998.450000"); // 1
    Undly_30_set.insert("17886998.450000");
    Undly_30.add_attribute("FxRate", "18244731.490000"); // 1
    Undly_30_set.insert("18244731.490000");
    Undly_30.add_attribute("FxRateCalc", "D"); // 1
    Undly_30_set.insert("D");
    Undly_30.add_attribute("CapValu", "UnderlyingCapValue_t_1041102445"); // 1
    Undly_30_set.insert("UnderlyingCapValue_t_1041102445");
    Undly_30.add_attribute("SetMeth", "UnderlyingSettlMethod_t_782643131"); // 1
    Undly_30_set.insert("UnderlyingSettlMethod_t_782643131");
    Undly_30.add_attribute("PutCall", "430631541"); // 1
    Undly_30_set.insert("430631541");
    all_values.push_back(Undly_30_set);
    all_compo_names.insert("Undly_30_set");

    {
      xml_element UndAID_30{"UndAID"};
      multiset<string> UndAID_30_set;
      UndAID_30.add_attribute("AltID", "UnderlyingSecurityAltID_t_1466078696"); // 2
      UndAID_30_set.insert("UnderlyingSecurityAltID_t_1466078696");
      UndAID_30.add_attribute("AltIDSrc", "I"); // 2
      UndAID_30_set.insert("I");
      all_values.push_back(UndAID_30_set);
      all_compo_names.insert("UndAID_30_set");

      Undly_30.add_element(UndAID_30);
    }
    {
      xml_element Stip_47{"Stip"};
      multiset<string> Stip_47_set;
      Stip_47.add_attribute("Typ", "LEAVEQTY"); // 2
      Stip_47_set.insert("LEAVEQTY");
      Stip_47.add_attribute("Val", "UnderlyingStipValue_t_1459600346"); // 2
      Stip_47_set.insert("UnderlyingStipValue_t_1459600346");
      all_values.push_back(Stip_47_set);
      all_compo_names.insert("Stip_47_set");

      Undly_30.add_element(Stip_47);
    }
    {
      xml_element Pty_145{"Pty"};
      multiset<string> Pty_145_set;
      Pty_145.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1356191594"); // 2
      Pty_145_set.insert("UnderlyingInstrumentPartyID_t_1356191594");
      Pty_145.add_attribute("Src", "E"); // 2
      Pty_145_set.insert("E");
      Pty_145.add_attribute("R", "3"); // 2
      Pty_145_set.insert("3");
      all_values.push_back(Pty_145_set);
      all_compo_names.insert("Pty_145_set");

      {
        xml_element Sub_145{"Sub"};
        multiset<string> Sub_145_set;
        Sub_145.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1283350773"); // 3
        Sub_145_set.insert("UnderlyingInstrumentPartySubID_t_1283350773");
        Sub_145.add_attribute("Typ", "12"); // 3
        Sub_145_set.insert("12");
        all_values.push_back(Sub_145_set);
        all_compo_names.insert("Sub_145_set");

        Pty_145.add_element(Sub_145);
      }
      Undly_30.add_element(Pty_145);
    }
    elt.add_element(Undly_30);
  } // end Undly
  { // DerivSecDef
    xml_element DerivSecDef_1{"DerivSecDef"};
    {
      xml_element DerivInstrmt_2{"DerivInstrmt"};
      multiset<string> DerivInstrmt_2_set;
      DerivInstrmt_2.add_attribute("Sym", "DerivativeSymbol_t_1024714821"); // 2
      DerivInstrmt_2_set.insert("DerivativeSymbol_t_1024714821");
      DerivInstrmt_2.add_attribute("Sfx", "CD"); // 2
      DerivInstrmt_2_set.insert("CD");
      DerivInstrmt_2.add_attribute("ID", "DerivativeSecurityID_t_1536833013"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityID_t_1536833013");
      DerivInstrmt_2.add_attribute("Src", "4"); // 2
      DerivInstrmt_2_set.insert("4");
      DerivInstrmt_2.add_attribute("Prod", "10"); // 2
      DerivInstrmt_2_set.insert("10");
      DerivInstrmt_2.add_attribute("ProdCmplx", "DerivativeProductComplex_t_989558220"); // 2
      DerivInstrmt_2_set.insert("DerivativeProductComplex_t_989558220");
      DerivInstrmt_2.add_attribute("FlexProdElig", "false"); // 2
      DerivInstrmt_2_set.insert("false");
      DerivInstrmt_2.add_attribute("SecGrp", "DerivativeSecurityGroup_t_1038676571"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityGroup_t_1038676571");
      DerivInstrmt_2.add_attribute("CFI", "DerivativeCFICode_t_1455691737"); // 2
      DerivInstrmt_2_set.insert("DerivativeCFICode_t_1455691737");
      DerivInstrmt_2.add_attribute("SecTyp", "FXFWD"); // 2
      DerivInstrmt_2_set.insert("FXFWD");
      DerivInstrmt_2.add_attribute("SecSubTyp", "DerivativeSecuritySubType_t_300879360"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecuritySubType_t_300879360");
      DerivInstrmt_2.add_attribute("MMY", "1145188145"); // 2
      DerivInstrmt_2_set.insert("1145188145");
      DerivInstrmt_2.add_attribute("MatDt", "DerivativeMaturityDate_t_1634814700"); // 2
      DerivInstrmt_2_set.insert("DerivativeMaturityDate_t_1634814700");
      DerivInstrmt_2.add_attribute("MatTm", "341437345"); // 2
      DerivInstrmt_2_set.insert("341437345");
      DerivInstrmt_2.add_attribute("OpenCloseSettlFlag", "DerivativeSettleOnOpenFlag_t_829825927"); // 2
      DerivInstrmt_2_set.insert("DerivativeSettleOnOpenFlag_t_829825927");
      DerivInstrmt_2.add_attribute("AsgnMeth", "1195503894"); // 2
      DerivInstrmt_2_set.insert("1195503894");
      DerivInstrmt_2.add_attribute("Status", "1"); // 2
      DerivInstrmt_2_set.insert("1");
      DerivInstrmt_2.add_attribute("IssDt", "DerivativeIssueDate_t_506815429"); // 2
      DerivInstrmt_2_set.insert("DerivativeIssueDate_t_506815429");
      DerivInstrmt_2.add_attribute("Rgstry", "DerivativeInstrRegistry_t_908768109"); // 2
      DerivInstrmt_2_set.insert("DerivativeInstrRegistry_t_908768109");
      DerivInstrmt_2.add_attribute("Ctry", "1023755988"); // 2
      DerivInstrmt_2_set.insert("1023755988");
      DerivInstrmt_2.add_attribute("StPrv", "DerivativeStateOrProvinceOfIssue_t_1289458560"); // 2
      DerivInstrmt_2_set.insert("DerivativeStateOrProvinceOfIssue_t_1289458560");
      DerivInstrmt_2.add_attribute("Lcl", "DerivativeLocaleOfIssue_t_1339399651"); // 2
      DerivInstrmt_2_set.insert("DerivativeLocaleOfIssue_t_1339399651");
      DerivInstrmt_2.add_attribute("StrkPx", "3423510.360000"); // 2
      DerivInstrmt_2_set.insert("3423510.360000");
      DerivInstrmt_2.add_attribute("StrkCcy", "CAN"); // 2
      DerivInstrmt_2_set.insert("CAN");
      DerivInstrmt_2.add_attribute("StrkMult", "18019513.820000"); // 2
      DerivInstrmt_2_set.insert("18019513.820000");
      DerivInstrmt_2.add_attribute("StrkValu", "6976762.730000"); // 2
      DerivInstrmt_2_set.insert("6976762.730000");
      DerivInstrmt_2.add_attribute("OptAt", "1046999500"); // 2
      DerivInstrmt_2_set.insert("1046999500");
      DerivInstrmt_2.add_attribute("Mult", "19952368.310000"); // 2
      DerivInstrmt_2_set.insert("19952368.310000");
      DerivInstrmt_2.add_attribute("MultTyp", "2"); // 2
      DerivInstrmt_2_set.insert("2");
      DerivInstrmt_2.add_attribute("FlowSchedTyp", "3"); // 2
      DerivInstrmt_2_set.insert("3");
      DerivInstrmt_2.add_attribute("MinPxIncr", "8724680.050000"); // 2
      DerivInstrmt_2_set.insert("8724680.050000");
      DerivInstrmt_2.add_attribute("MinPxIncrAmt", "DerivativeMinPriceIncrementAmount_t_1146544522"); // 2
      DerivInstrmt_2_set.insert("DerivativeMinPriceIncrementAmount_t_1146544522");
      DerivInstrmt_2.add_attribute("UOM", "Bbl"); // 2
      DerivInstrmt_2_set.insert("Bbl");
      DerivInstrmt_2.add_attribute("UOMQty", "19387553.400000"); // 2
      DerivInstrmt_2_set.insert("19387553.400000");
      DerivInstrmt_2.add_attribute("PxUOM", "USD"); // 2
      DerivInstrmt_2_set.insert("USD");
      DerivInstrmt_2.add_attribute("PxUOMQty", "1253694.310000"); // 2
      DerivInstrmt_2_set.insert("1253694.310000");
      DerivInstrmt_2.add_attribute("SettlMeth", "P"); // 2
      DerivInstrmt_2_set.insert("P");
      DerivInstrmt_2.add_attribute("PxQteMeth", "PCTPAR"); // 2
      DerivInstrmt_2_set.insert("PCTPAR");
      DerivInstrmt_2.add_attribute("ValMeth", "CDS"); // 2
      DerivInstrmt_2_set.insert("CDS");
      DerivInstrmt_2.add_attribute("ListMeth", "1"); // 2
      DerivInstrmt_2_set.insert("1");
      DerivInstrmt_2.add_attribute("CapPx", "2960537.560000"); // 2
      DerivInstrmt_2_set.insert("2960537.560000");
      DerivInstrmt_2.add_attribute("FlrPx", "5787656.650000"); // 2
      DerivInstrmt_2_set.insert("5787656.650000");
      DerivInstrmt_2.add_attribute("PutCall", "1"); // 2
      DerivInstrmt_2_set.insert("1");
      DerivInstrmt_2.add_attribute("ExerStyle", "2"); // 2
      DerivInstrmt_2_set.insert("2");
      DerivInstrmt_2.add_attribute("OptPayAmt", "DerivativeOptPayAmount_t_1408591592"); // 2
      DerivInstrmt_2_set.insert("DerivativeOptPayAmount_t_1408591592");
      DerivInstrmt_2.add_attribute("TmUnit", "Mo"); // 2
      DerivInstrmt_2_set.insert("Mo");
      DerivInstrmt_2.add_attribute("Exch", "DerivativeSecurityExchange_t_620144644"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityExchange_t_620144644");
      DerivInstrmt_2.add_attribute("PosLmt", "1915407021"); // 2
      DerivInstrmt_2_set.insert("1915407021");
      DerivInstrmt_2.add_attribute("NTPosLmt", "1916794021"); // 2
      DerivInstrmt_2_set.insert("1916794021");
      DerivInstrmt_2.add_attribute("Issr", "DerivativeIssuer_t_1643900632"); // 2
      DerivInstrmt_2_set.insert("DerivativeIssuer_t_1643900632");
      DerivInstrmt_2.add_attribute("EncIssrLen", "1057381933"); // 2
      DerivInstrmt_2_set.insert("1057381933");
      DerivInstrmt_2.add_attribute("EncIssr", "DerivativeEncodedIssuer_t_1108710024"); // 2
      DerivInstrmt_2_set.insert("DerivativeEncodedIssuer_t_1108710024");
      DerivInstrmt_2.add_attribute("Desc", "DerivativeSecurityDesc_t_1986251668"); // 2
      DerivInstrmt_2_set.insert("DerivativeSecurityDesc_t_1986251668");
      DerivInstrmt_2.add_attribute("EncSecDescLen", "398866612"); // 2
      DerivInstrmt_2_set.insert("398866612");
      DerivInstrmt_2.add_attribute("EncSecDesc", "DerivativeEncodedSecurityDesc_t_62251011"); // 2
      DerivInstrmt_2_set.insert("DerivativeEncodedSecurityDesc_t_62251011");
      DerivInstrmt_2.add_attribute("CSetMo", "1640719402"); // 2
      DerivInstrmt_2_set.insert("1640719402");
      all_values.push_back(DerivInstrmt_2_set);
      all_compo_names.insert("DerivInstrmt_2_set");

      {
        xml_element AID_23{"AID"};
        multiset<string> AID_23_set;
        AID_23.add_attribute("ID", "DerivativeSecurityAltID_t_1096542885"); // 3
        AID_23_set.insert("DerivativeSecurityAltID_t_1096542885");
        AID_23.add_attribute("Src", "J"); // 3
        AID_23_set.insert("J");
        all_values.push_back(AID_23_set);
        all_compo_names.insert("AID_23_set");

        DerivInstrmt_2.add_element(AID_23);
      }
      {
        xml_element SecXML_23{"SecXML"};
        multiset<string> SecXML_23_set;
        SecXML_23.add_attribute("Schema", "DerivativeSecurityXMLSchema_t_1488472585"); // 3
        SecXML_23_set.insert("DerivativeSecurityXMLSchema_t_1488472585");
        all_values.push_back(SecXML_23_set);
        all_compo_names.insert("SecXML_23_set");

        DerivInstrmt_2.add_element(SecXML_23);
      }
      {
        xml_element Evnt_23{"Evnt"};
        multiset<string> Evnt_23_set;
        Evnt_23.add_attribute("EventTyp", "4"); // 3
        Evnt_23_set.insert("4");
        Evnt_23.add_attribute("Dt", "DerivativeEventDate_t_855712357"); // 3
        Evnt_23_set.insert("DerivativeEventDate_t_855712357");
        Evnt_23.add_attribute("Tm", "DerivativeEventTime_t_213456942"); // 3
        Evnt_23_set.insert("DerivativeEventTime_t_213456942");
        Evnt_23.add_attribute("Px", "20766308.050000"); // 3
        Evnt_23_set.insert("20766308.050000");
        Evnt_23.add_attribute("Txt", "DerivativeEventText_t_2139007216"); // 3
        Evnt_23_set.insert("DerivativeEventText_t_2139007216");
        all_values.push_back(Evnt_23_set);
        all_compo_names.insert("Evnt_23_set");

        DerivInstrmt_2.add_element(Evnt_23);
      }
      {
        xml_element Pty_146{"Pty"};
        multiset<string> Pty_146_set;
        Pty_146.add_attribute("ID", "DerivativeInstrumentPartyID_t_4728634"); // 3
        Pty_146_set.insert("DerivativeInstrumentPartyID_t_4728634");
        Pty_146.add_attribute("Src", "1"); // 3
        Pty_146_set.insert("1");
        Pty_146.add_attribute("R", "35"); // 3
        Pty_146_set.insert("35");
        all_values.push_back(Pty_146_set);
        all_compo_names.insert("Pty_146_set");

        {
          xml_element Sub_146{"Sub"};
          multiset<string> Sub_146_set;
          Sub_146.add_attribute("ID", "DerivativeInstrumentPartySubID_t_1594771156"); // 4
          Sub_146_set.insert("DerivativeInstrumentPartySubID_t_1594771156");
          Sub_146.add_attribute("Typ", "8"); // 4
          Sub_146_set.insert("8");
          all_values.push_back(Sub_146_set);
          all_compo_names.insert("Sub_146_set");

          Pty_146.add_element(Sub_146);
        }
        DerivInstrmt_2.add_element(Pty_146);
      }
      DerivSecDef_1.add_element(DerivInstrmt_2);
    }
    {
      xml_element Attrb_9{"Attrb"};
      multiset<string> Attrb_9_set;
      Attrb_9.add_attribute("Typ", "16"); // 2
      Attrb_9_set.insert("16");
      Attrb_9.add_attribute("Val", "DerivativeInstrAttribValue_t_1919962121"); // 2
      Attrb_9_set.insert("DerivativeInstrAttribValue_t_1919962121");
      all_values.push_back(Attrb_9_set);
      all_compo_names.insert("Attrb_9_set");

      DerivSecDef_1.add_element(Attrb_9);
    }
    {
      xml_element MktSegGrp_1{"MktSegGrp"};
      multiset<string> MktSegGrp_1_set;
      MktSegGrp_1.add_attribute("MktID", "MarketID_t_1324356781"); // 2
      MktSegGrp_1_set.insert("MarketID_t_1324356781");
      MktSegGrp_1.add_attribute("MktSegID", "MarketSegmentID_t_129236184"); // 2
      MktSegGrp_1_set.insert("MarketSegmentID_t_129236184");
      all_values.push_back(MktSegGrp_1_set);
      all_compo_names.insert("MktSegGrp_1_set");

      {
        xml_element SecTrdgRules_1{"SecTrdgRules"};
        {
          xml_element BaseTrdgRules_1{"BaseTrdgRules"};
          multiset<string> BaseTrdgRules_1_set;
          BaseTrdgRules_1.add_attribute("ExpirationCycle", "0"); // 4
          BaseTrdgRules_1_set.insert("0");
          BaseTrdgRules_1.add_attribute("MinTrdVol", "19618478.830000"); // 4
          BaseTrdgRules_1_set.insert("19618478.830000");
          BaseTrdgRules_1.add_attribute("MaxTrdVol", "15378277.770000"); // 4
          BaseTrdgRules_1_set.insert("15378277.770000");
          BaseTrdgRules_1.add_attribute("MxPxVar", "5930264.030000"); // 4
          BaseTrdgRules_1_set.insert("5930264.030000");
          BaseTrdgRules_1.add_attribute("ImpldMktInd", "3"); // 4
          BaseTrdgRules_1_set.insert("3");
          BaseTrdgRules_1.add_attribute("TrdCcy", "JPY"); // 4
          BaseTrdgRules_1_set.insert("JPY");
          BaseTrdgRules_1.add_attribute("RndLot", "20784095.110000"); // 4
          BaseTrdgRules_1_set.insert("20784095.110000");
          BaseTrdgRules_1.add_attribute("MlegModel", "1"); // 4
          BaseTrdgRules_1_set.insert("1");
          BaseTrdgRules_1.add_attribute("MlegPxMeth", "5"); // 4
          BaseTrdgRules_1_set.insert("5");
          BaseTrdgRules_1.add_attribute("PxTyp", "17"); // 4
          BaseTrdgRules_1_set.insert("17");
          all_values.push_back(BaseTrdgRules_1_set);
          all_compo_names.insert("BaseTrdgRules_1_set");

          {
            xml_element TickRules_1{"TickRules"};
            multiset<string> TickRules_1_set;
            TickRules_1.add_attribute("StartTickPxRng", "6145160.480000"); // 5
            TickRules_1_set.insert("6145160.480000");
            TickRules_1.add_attribute("EndTickPxRng", "15332978.120000"); // 5
            TickRules_1_set.insert("15332978.120000");
            TickRules_1.add_attribute("TickIncr", "14104132.850000"); // 5
            TickRules_1_set.insert("14104132.850000");
            TickRules_1.add_attribute("TickRuleTyp", "4"); // 5
            TickRules_1_set.insert("4");
            all_values.push_back(TickRules_1_set);
            all_compo_names.insert("TickRules_1_set");

            BaseTrdgRules_1.add_element(TickRules_1);
          }
          {
            xml_element LotTypeRules_1{"LotTypeRules"};
            multiset<string> LotTypeRules_1_set;
            LotTypeRules_1.add_attribute("LotTyp", "1"); // 5
            LotTypeRules_1_set.insert("1");
            LotTypeRules_1.add_attribute("MinLotSz", "7514022.220000"); // 5
            LotTypeRules_1_set.insert("7514022.220000");
            all_values.push_back(LotTypeRules_1_set);
            all_compo_names.insert("LotTypeRules_1_set");

            BaseTrdgRules_1.add_element(LotTypeRules_1);
          }
          {
            xml_element PxLmts_1{"PxLmts"};
            multiset<string> PxLmts_1_set;
            PxLmts_1.add_attribute("PxLmtTyp", "1"); // 5
            PxLmts_1_set.insert("1");
            PxLmts_1.add_attribute("LowLmtPx", "13507770.340000"); // 5
            PxLmts_1_set.insert("13507770.340000");
            PxLmts_1.add_attribute("HiLmtPx", "9648591.650000"); // 5
            PxLmts_1_set.insert("9648591.650000");
            PxLmts_1.add_attribute("TrdgRefPx", "4228087.270000"); // 5
            PxLmts_1_set.insert("4228087.270000");
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
          TrdgSesRulesGrp_1.add_attribute("SesSub", "6"); // 4
          TrdgSesRulesGrp_1_set.insert("6");
          all_values.push_back(TrdgSesRulesGrp_1_set);
          all_compo_names.insert("TrdgSesRulesGrp_1_set");

          {
            xml_element TrdgSesRules_1{"TrdgSesRules"};
            {
              xml_element OrdTypRules_1{"OrdTypRules"};
              multiset<string> OrdTypRules_1_set;
              OrdTypRules_1.add_attribute("OrdTyp", "E"); // 6
              OrdTypRules_1_set.insert("E");
              all_values.push_back(OrdTypRules_1_set);
              all_compo_names.insert("OrdTypRules_1_set");

              TrdgSesRules_1.add_element(OrdTypRules_1);
            }
            {
              xml_element TmInForceRules_1{"TmInForceRules"};
              multiset<string> TmInForceRules_1_set;
              TmInForceRules_1.add_attribute("TmInForce", "2"); // 6
              TmInForceRules_1_set.insert("2");
              all_values.push_back(TmInForceRules_1_set);
              all_compo_names.insert("TmInForceRules_1_set");

              TrdgSesRules_1.add_element(TmInForceRules_1);
            }
            {
              xml_element ExecInstRules_1{"ExecInstRules"};
              multiset<string> ExecInstRules_1_set;
              ExecInstRules_1.add_attribute("ExecInstValu", "p"); // 6
              ExecInstRules_1_set.insert("p");
              all_values.push_back(ExecInstRules_1_set);
              all_compo_names.insert("ExecInstRules_1_set");

              TrdgSesRules_1.add_element(ExecInstRules_1);
            }
            {
              xml_element MtchRules_1{"MtchRules"};
              multiset<string> MtchRules_1_set;
              MtchRules_1.add_attribute("MtchAlgo", "MatchAlgorithm_t_336756734"); // 6
              MtchRules_1_set.insert("MatchAlgorithm_t_336756734");
              MtchRules_1.add_attribute("MtchTyp", "M2"); // 6
              MtchRules_1_set.insert("M2");
              all_values.push_back(MtchRules_1_set);
              all_compo_names.insert("MtchRules_1_set");

              TrdgSesRules_1.add_element(MtchRules_1);
            }
            {
              xml_element MDFeedTyps_1{"MDFeedTyps"};
              multiset<string> MDFeedTyps_1_set;
              MDFeedTyps_1.add_attribute("MDFeedTyp", "MDFeedType_t_189353781"); // 6
              MDFeedTyps_1_set.insert("MDFeedType_t_189353781");
              MDFeedTyps_1.add_attribute("MktDepth", "1661113516"); // 6
              MDFeedTyps_1_set.insert("1661113516");
              MDFeedTyps_1.add_attribute("MDBkTyp", "2"); // 6
              MDFeedTyps_1_set.insert("2");
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
          Attrb_10.add_attribute("Typ", "1"); // 4
          Attrb_10_set.insert("1");
          Attrb_10.add_attribute("Val", "NestedInstrAttribValue_t_1475477751"); // 4
          Attrb_10_set.insert("NestedInstrAttribValue_t_1475477751");
          all_values.push_back(Attrb_10_set);
          all_compo_names.insert("Attrb_10_set");

          SecTrdgRules_1.add_element(Attrb_10);
        }
        MktSegGrp_1.add_element(SecTrdgRules_1);
      }
      {
        xml_element StrkRules_1{"StrkRules"};
        multiset<string> StrkRules_1_set;
        StrkRules_1.add_attribute("StrkRule", "StrikeRuleID_t_529244435"); // 3
        StrkRules_1_set.insert("StrikeRuleID_t_529244435");
        StrkRules_1.add_attribute("StartStrkPxRng", "3673806.750000"); // 3
        StrkRules_1_set.insert("3673806.750000");
        StrkRules_1.add_attribute("EndStrkPxRng", "19099866.300000"); // 3
        StrkRules_1_set.insert("19099866.300000");
        StrkRules_1.add_attribute("StrkIncr", "18349955.850000"); // 3
        StrkRules_1_set.insert("18349955.850000");
        StrkRules_1.add_attribute("StrkExrStyle", "1"); // 3
        StrkRules_1_set.insert("1");
        all_values.push_back(StrkRules_1_set);
        all_compo_names.insert("StrkRules_1_set");

        {
          xml_element MatRules_1{"MatRules"};
          multiset<string> MatRules_1_set;
          MatRules_1.add_attribute("MatRuleID", "MaturityRuleID_t_1840912493"); // 4
          MatRules_1_set.insert("MaturityRuleID_t_1840912493");
          MatRules_1.add_attribute("MMYFmt", "1"); // 4
          MatRules_1_set.insert("1");
          MatRules_1.add_attribute("MMYIncrUnits", "0"); // 4
          MatRules_1_set.insert("0");
          MatRules_1.add_attribute("StartMMY", "1610606376"); // 4
          MatRules_1_set.insert("1610606376");
          MatRules_1.add_attribute("EndMMY", "517677422"); // 4
          MatRules_1_set.insert("517677422");
          MatRules_1.add_attribute("MMYIncr", "1586578417"); // 4
          MatRules_1_set.insert("1586578417");
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
    RelSym_3.add_attribute("ListUpdActn", "A"); // 1
    RelSym_3_set.insert("A");
    RelSym_3.add_attribute("CorpActn", "K"); // 1
    RelSym_3_set.insert("K");
    RelSym_3.add_attribute("Ccy", "EUR"); // 1
    RelSym_3_set.insert("EUR");
    RelSym_3.add_attribute("TxnTm", "RelSymTransactTime_t_1284936479"); // 1
    RelSym_3_set.insert("RelSymTransactTime_t_1284936479");
    RelSym_3.add_attribute("Txt", "Text_t_442313752"); // 1
    RelSym_3_set.insert("Text_t_442313752");
    RelSym_3.add_attribute("EncTxtLen", "997723004"); // 1
    RelSym_3_set.insert("997723004");
    RelSym_3.add_attribute("EncTxt", "EncodedText_t_479753434"); // 1
    RelSym_3_set.insert("EncodedText_t_479753434");
    all_values.push_back(RelSym_3_set);
    all_compo_names.insert("RelSym_3_set");

    {
      xml_element Instrmt_21{"Instrmt"};
      multiset<string> Instrmt_21_set;
      Instrmt_21.add_attribute("Sym", "Symbol_t_1411901552"); // 2
      Instrmt_21_set.insert("Symbol_t_1411901552");
      Instrmt_21.add_attribute("Sfx", "WI"); // 2
      Instrmt_21_set.insert("WI");
      Instrmt_21.add_attribute("ID", "SecurityID_t_1938947036"); // 2
      Instrmt_21_set.insert("SecurityID_t_1938947036");
      Instrmt_21.add_attribute("Src", "L"); // 2
      Instrmt_21_set.insert("L");
      Instrmt_21.add_attribute("Prod", "10"); // 2
      Instrmt_21_set.insert("10");
      Instrmt_21.add_attribute("ProdCmplx", "ProductComplex_t_801127509"); // 2
      Instrmt_21_set.insert("ProductComplex_t_801127509");
      Instrmt_21.add_attribute("SecGrp", "SecurityGroup_t_2018130640"); // 2
      Instrmt_21_set.insert("SecurityGroup_t_2018130640");
      Instrmt_21.add_attribute("CFI", "CFICode_t_156563316"); // 2
      Instrmt_21_set.insert("CFICode_t_156563316");
      Instrmt_21.add_attribute("SecTyp", "TINT"); // 2
      Instrmt_21_set.insert("TINT");
      Instrmt_21.add_attribute("SubTyp", "SecuritySubType_t_1792484912"); // 2
      Instrmt_21_set.insert("SecuritySubType_t_1792484912");
      Instrmt_21.add_attribute("MMY", "1632041067"); // 2
      Instrmt_21_set.insert("1632041067");
      Instrmt_21.add_attribute("MatDt", "MaturityDate_t_321788602"); // 2
      Instrmt_21_set.insert("MaturityDate_t_321788602");
      Instrmt_21.add_attribute("MatTm", "12381939"); // 2
      Instrmt_21_set.insert("12381939");
      Instrmt_21.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1394544049"); // 2
      Instrmt_21_set.insert("SettleOnOpenFlag_t_1394544049");
      Instrmt_21.add_attribute("AsgnMeth", "9300540"); // 2
      Instrmt_21_set.insert("9300540");
      Instrmt_21.add_attribute("Status", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("CpnPmt", "CouponPaymentDate_t_1087972894"); // 2
      Instrmt_21_set.insert("CouponPaymentDate_t_1087972894");
      Instrmt_21.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_21_set.insert("MR");
      Instrmt_21.add_attribute("Snrty", "SD"); // 2
      Instrmt_21_set.insert("SD");
      Instrmt_21.add_attribute("NotlPctOut", "5510956.220000"); // 2
      Instrmt_21_set.insert("5510956.220000");
      Instrmt_21.add_attribute("OrigNotlPctOut", "4301393.350000"); // 2
      Instrmt_21_set.insert("4301393.350000");
      Instrmt_21.add_attribute("AttchPnt", "2344747.640000"); // 2
      Instrmt_21_set.insert("2344747.640000");
      Instrmt_21.add_attribute("DetchPnt", "14246316.350000"); // 2
      Instrmt_21_set.insert("14246316.350000");
      Instrmt_21.add_attribute("Issued", "IssueDate_t_511392043"); // 2
      Instrmt_21_set.insert("IssueDate_t_511392043");
      Instrmt_21.add_attribute("RepoCollSecTyp", "168634210"); // 2
      Instrmt_21_set.insert("168634210");
      Instrmt_21.add_attribute("RepoTrm", "902086222"); // 2
      Instrmt_21_set.insert("902086222");
      Instrmt_21.add_attribute("RepoRt", "10863063.210000"); // 2
      Instrmt_21_set.insert("10863063.210000");
      Instrmt_21.add_attribute("Fctr", "14535706.890000"); // 2
      Instrmt_21_set.insert("14535706.890000");
      Instrmt_21.add_attribute("CrdRtg", "CreditRating_t_1344399975"); // 2
      Instrmt_21_set.insert("CreditRating_t_1344399975");
      Instrmt_21.add_attribute("Rgstry", "InstrRegistry_t_2084029325"); // 2
      Instrmt_21_set.insert("InstrRegistry_t_2084029325");
      Instrmt_21.add_attribute("IssuCtry", "1933324123"); // 2
      Instrmt_21_set.insert("1933324123");
      Instrmt_21.add_attribute("StPrv", "StateOrProvinceOfIssue_t_608817879"); // 2
      Instrmt_21_set.insert("StateOrProvinceOfIssue_t_608817879");
      Instrmt_21.add_attribute("Lcl", "LocaleOfIssue_t_242722391"); // 2
      Instrmt_21_set.insert("LocaleOfIssue_t_242722391");
      Instrmt_21.add_attribute("Redeem", "RedemptionDate_t_1724787511"); // 2
      Instrmt_21_set.insert("RedemptionDate_t_1724787511");
      Instrmt_21.add_attribute("StrkPx", "2901110.900000"); // 2
      Instrmt_21_set.insert("2901110.900000");
      Instrmt_21.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_21_set.insert("CHF");
      Instrmt_21.add_attribute("StrkMult", "1607580.830000"); // 2
      Instrmt_21_set.insert("1607580.830000");
      Instrmt_21.add_attribute("StrkValu", "10422191.550000"); // 2
      Instrmt_21_set.insert("10422191.550000");
      Instrmt_21.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("StrkPxBndryPrcsn", "5267765.740000"); // 2
      Instrmt_21_set.insert("5267765.740000");
      Instrmt_21.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_21_set.insert("4");
      Instrmt_21.add_attribute("OptAt", "1965624935"); // 2
      Instrmt_21_set.insert("1965624935");
      Instrmt_21.add_attribute("Mult", "19213206.230000"); // 2
      Instrmt_21_set.insert("19213206.230000");
      Instrmt_21.add_attribute("MultTyp", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_21_set.insert("3");
      Instrmt_21.add_attribute("MinPxIncr", "8618098.690000"); // 2
      Instrmt_21_set.insert("8618098.690000");
      Instrmt_21.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_414526596"); // 2
      Instrmt_21_set.insert("MinPriceIncrementAmount_t_414526596");
      Instrmt_21.add_attribute("UOM", "t"); // 2
      Instrmt_21_set.insert("t");
      Instrmt_21.add_attribute("UOMQty", "14129054.910000"); // 2
      Instrmt_21_set.insert("14129054.910000");
      Instrmt_21.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_21_set.insert("MMbbl");
      Instrmt_21.add_attribute("PxUOMQty", "15900954.380000"); // 2
      Instrmt_21_set.insert("15900954.380000");
      Instrmt_21.add_attribute("SettlMeth", "C"); // 2
      Instrmt_21_set.insert("C");
      Instrmt_21.add_attribute("ExerStyle", "0"); // 2
      Instrmt_21_set.insert("0");
      Instrmt_21.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("OptPayAmt", "OptPayoutAmount_t_1592139700"); // 2
      Instrmt_21_set.insert("OptPayoutAmount_t_1592139700");
      Instrmt_21.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_21_set.insert("STD");
      Instrmt_21.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_21_set.insert("CDSD");
      Instrmt_21.add_attribute("ListMeth", "1"); // 2
      Instrmt_21_set.insert("1");
      Instrmt_21.add_attribute("CapPx", "2314263.260000"); // 2
      Instrmt_21_set.insert("2314263.260000");
      Instrmt_21.add_attribute("FlrPx", "8506571.650000"); // 2
      Instrmt_21_set.insert("8506571.650000");
      Instrmt_21.add_attribute("PutCall", "0"); // 2
      Instrmt_21_set.insert("0");
      Instrmt_21.add_attribute("FlexInd", "false"); // 2
      Instrmt_21_set.insert("false");
      Instrmt_21.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_21_set.insert("true");
      Instrmt_21.add_attribute("TmUnit", "Yr"); // 2
      Instrmt_21_set.insert("Yr");
      Instrmt_21.add_attribute("CpnRt", "13598045.560000"); // 2
      Instrmt_21_set.insert("13598045.560000");
      Instrmt_21.add_attribute("Exch", "SecurityExchange_t_806392401"); // 2
      Instrmt_21_set.insert("SecurityExchange_t_806392401");
      Instrmt_21.add_attribute("PosLmt", "1848743080"); // 2
      Instrmt_21_set.insert("1848743080");
      Instrmt_21.add_attribute("NTPosLmt", "254540063"); // 2
      Instrmt_21_set.insert("254540063");
      Instrmt_21.add_attribute("Issr", "Issuer_t_977367942"); // 2
      Instrmt_21_set.insert("Issuer_t_977367942");
      Instrmt_21.add_attribute("EncIssrLen", "1654502427"); // 2
      Instrmt_21_set.insert("1654502427");
      Instrmt_21.add_attribute("EncIssr", "EncodedIssuer_t_781316637"); // 2
      Instrmt_21_set.insert("EncodedIssuer_t_781316637");
      Instrmt_21.add_attribute("Desc", "SecurityDesc_t_1470132085"); // 2
      Instrmt_21_set.insert("SecurityDesc_t_1470132085");
      Instrmt_21.add_attribute("EncSecDescLen", "1472643714"); // 2
      Instrmt_21_set.insert("1472643714");
      Instrmt_21.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_555153612"); // 2
      Instrmt_21_set.insert("EncodedSecurityDesc_t_555153612");
      Instrmt_21.add_attribute("Pool", "Pool_t_1972196768"); // 2
      Instrmt_21_set.insert("Pool_t_1972196768");
      Instrmt_21.add_attribute("CSetMo", "2032884392"); // 2
      Instrmt_21_set.insert("2032884392");
      Instrmt_21.add_attribute("CPPgm", "2"); // 2
      Instrmt_21_set.insert("2");
      Instrmt_21.add_attribute("CPRegT", "CPRegType_t_239239716"); // 2
      Instrmt_21_set.insert("CPRegType_t_239239716");
      Instrmt_21.add_attribute("Dated", "DatedDate_t_1241021418"); // 2
      Instrmt_21_set.insert("DatedDate_t_1241021418");
      Instrmt_21.add_attribute("IntAcrl", "InterestAccrualDate_t_682385324"); // 2
      Instrmt_21_set.insert("InterestAccrualDate_t_682385324");
      all_values.push_back(Instrmt_21_set);
      all_compo_names.insert("Instrmt_21_set");

      {
        xml_element AID_24{"AID"};
        multiset<string> AID_24_set;
        AID_24.add_attribute("AltID", "SecurityAltID_t_1083905648"); // 3
        AID_24_set.insert("SecurityAltID_t_1083905648");
        AID_24.add_attribute("AltIDSrc", "H"); // 3
        AID_24_set.insert("H");
        all_values.push_back(AID_24_set);
        all_compo_names.insert("AID_24_set");

        Instrmt_21.add_element(AID_24);
      }
      {
        xml_element SecXML_24{"SecXML"};
        multiset<string> SecXML_24_set;
        SecXML_24.add_attribute("Schema", "SecurityXMLSchema_t_1372438802"); // 3
        SecXML_24_set.insert("SecurityXMLSchema_t_1372438802");
        all_values.push_back(SecXML_24_set);
        all_compo_names.insert("SecXML_24_set");

        Instrmt_21.add_element(SecXML_24);
      }
      {
        xml_element Evnt_24{"Evnt"};
        multiset<string> Evnt_24_set;
        Evnt_24.add_attribute("EventTyp", "16"); // 3
        Evnt_24_set.insert("16");
        Evnt_24.add_attribute("Dt", "EventDate_t_294879208"); // 3
        Evnt_24_set.insert("EventDate_t_294879208");
        Evnt_24.add_attribute("Tm", "EventTime_t_817094854"); // 3
        Evnt_24_set.insert("EventTime_t_817094854");
        Evnt_24.add_attribute("Px", "5873606.240000"); // 3
        Evnt_24_set.insert("5873606.240000");
        Evnt_24.add_attribute("Txt", "EventText_t_1359695897"); // 3
        Evnt_24_set.insert("EventText_t_1359695897");
        all_values.push_back(Evnt_24_set);
        all_compo_names.insert("Evnt_24_set");

        Instrmt_21.add_element(Evnt_24);
      }
      {
        xml_element Pty_147{"Pty"};
        multiset<string> Pty_147_set;
        Pty_147.add_attribute("ID", "InstrumentPartyID_t_1606150882"); // 3
        Pty_147_set.insert("InstrumentPartyID_t_1606150882");
        Pty_147.add_attribute("Src", "H"); // 3
        Pty_147_set.insert("H");
        Pty_147.add_attribute("R", "7"); // 3
        Pty_147_set.insert("7");
        all_values.push_back(Pty_147_set);
        all_compo_names.insert("Pty_147_set");

        {
          xml_element Sub_147{"Sub"};
          multiset<string> Sub_147_set;
          Sub_147.add_attribute("ID", "InstrumentPartySubID_t_856541140"); // 4
          Sub_147_set.insert("InstrumentPartySubID_t_856541140");
          Sub_147.add_attribute("Typ", "7"); // 4
          Sub_147_set.insert("7");
          all_values.push_back(Sub_147_set);
          all_compo_names.insert("Sub_147_set");

          Pty_147.add_element(Sub_147);
        }
        Instrmt_21.add_element(Pty_147);
      }
      {
        xml_element CmplxEvnt_21{"CmplxEvnt"};
        multiset<string> CmplxEvnt_21_set;
        CmplxEvnt_21.add_attribute("Typ", "9"); // 3
        CmplxEvnt_21_set.insert("9");
        CmplxEvnt_21.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_397042489"); // 3
        CmplxEvnt_21_set.insert("ComplexOptPayoutAmount_t_397042489");
        CmplxEvnt_21.add_attribute("Px", "5052565.750000"); // 3
        CmplxEvnt_21_set.insert("5052565.750000");
        CmplxEvnt_21.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_21_set.insert("5");
        CmplxEvnt_21.add_attribute("PxBndryPrcsn", "983019.210000"); // 3
        CmplxEvnt_21_set.insert("983019.210000");
        CmplxEvnt_21.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_21_set.insert("1");
        CmplxEvnt_21.add_attribute("Cond", "1"); // 3
        CmplxEvnt_21_set.insert("1");
        all_values.push_back(CmplxEvnt_21_set);
        all_compo_names.insert("CmplxEvnt_21_set");

        {
          xml_element EvntDts_21{"EvntDts"};
          multiset<string> EvntDts_21_set;
          EvntDts_21.add_attribute("StartDt", "ComplexEventStartDate_t_1752804349"); // 4
          EvntDts_21_set.insert("ComplexEventStartDate_t_1752804349");
          EvntDts_21.add_attribute("EndDt", "ComplexEventEndDate_t_1541113275"); // 4
          EvntDts_21_set.insert("ComplexEventEndDate_t_1541113275");
          all_values.push_back(EvntDts_21_set);
          all_compo_names.insert("EvntDts_21_set");

          {
            xml_element EvntTms_21{"EvntTms"};
            multiset<string> EvntTms_21_set;
            EvntTms_21.add_attribute("StartTm", "1597239223"); // 5
            EvntTms_21_set.insert("1597239223");
            EvntTms_21.add_attribute("EndTm", "1077964415"); // 5
            EvntTms_21_set.insert("1077964415");
            all_values.push_back(EvntTms_21_set);
            all_compo_names.insert("EvntTms_21_set");

            EvntDts_21.add_element(EvntTms_21);
          }
          CmplxEvnt_21.add_element(EvntDts_21);
        }
        Instrmt_21.add_element(CmplxEvnt_21);
      }
      RelSym_3.add_element(Instrmt_21);
    }
    {
      xml_element InstrmtExt_7{"InstrmtExt"};
      multiset<string> InstrmtExt_7_set;
      InstrmtExt_7.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_7_set.insert("2");
      InstrmtExt_7.add_attribute("PctAtRisk", "14219523.430000"); // 2
      InstrmtExt_7_set.insert("14219523.430000");
      all_values.push_back(InstrmtExt_7_set);
      all_compo_names.insert("InstrmtExt_7_set");

      {
        xml_element Attrb_11{"Attrb"};
        multiset<string> Attrb_11_set;
        Attrb_11.add_attribute("Typ", "1"); // 3
        Attrb_11_set.insert("1");
        Attrb_11.add_attribute("Val", "InstrAttribValue_t_1365746720"); // 3
        Attrb_11_set.insert("InstrAttribValue_t_1365746720");
        all_values.push_back(Attrb_11_set);
        all_compo_names.insert("Attrb_11_set");

        InstrmtExt_7.add_element(Attrb_11);
      }
      RelSym_3.add_element(InstrmtExt_7);
    }
    {
      xml_element PxLmts2_3{"PxLmts2"};
      multiset<string> PxLmts2_3_set;
      PxLmts2_3.add_attribute("PxLmtTyp", "2"); // 2
      PxLmts2_3_set.insert("2");
      PxLmts2_3.add_attribute("LowLmtPx", "569029.300000"); // 2
      PxLmts2_3_set.insert("569029.300000");
      PxLmts2_3.add_attribute("HiLmtPx", "20481320.440000"); // 2
      PxLmts2_3_set.insert("20481320.440000");
      PxLmts2_3.add_attribute("TrdgRefPx", "5976140.600000"); // 2
      PxLmts2_3_set.insert("5976140.600000");
      all_values.push_back(PxLmts2_3_set);
      all_compo_names.insert("PxLmts2_3_set");

      RelSym_3.add_element(PxLmts2_3);
    }
    {
      xml_element Leg_32{"Leg"};
      multiset<string> Leg_32_set;
      Leg_32.add_attribute("Sym", "LegSymbol_t_740536138"); // 2
      Leg_32_set.insert("LegSymbol_t_740536138");
      Leg_32.add_attribute("Sfx", "CD"); // 2
      Leg_32_set.insert("CD");
      Leg_32.add_attribute("ID", "LegSecurityID_t_890094036"); // 2
      Leg_32_set.insert("LegSecurityID_t_890094036");
      Leg_32.add_attribute("Src", "K"); // 2
      Leg_32_set.insert("K");
      Leg_32.add_attribute("Prod", "8"); // 2
      Leg_32_set.insert("8");
      Leg_32.add_attribute("CFI", "LegCFICode_t_1477454661"); // 2
      Leg_32_set.insert("LegCFICode_t_1477454661");
      Leg_32.add_attribute("SecTyp", "TB"); // 2
      Leg_32_set.insert("TB");
      Leg_32.add_attribute("SecSubTyp", "LegSecuritySubType_t_1548849287"); // 2
      Leg_32_set.insert("LegSecuritySubType_t_1548849287");
      Leg_32.add_attribute("MMY", "148757963"); // 2
      Leg_32_set.insert("148757963");
      Leg_32.add_attribute("Mat", "LegMaturityDate_t_310497010"); // 2
      Leg_32_set.insert("LegMaturityDate_t_310497010");
      Leg_32.add_attribute("MatTm", "257906779"); // 2
      Leg_32_set.insert("257906779");
      Leg_32.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1441693631"); // 2
      Leg_32_set.insert("LegCouponPaymentDate_t_1441693631");
      Leg_32.add_attribute("Issued", "LegIssueDate_t_801327453"); // 2
      Leg_32_set.insert("LegIssueDate_t_801327453");
      Leg_32.add_attribute("RepoCollSecTyp", "654949269"); // 2
      Leg_32_set.insert("654949269");
      Leg_32.add_attribute("RepoTrm", "1946950206"); // 2
      Leg_32_set.insert("1946950206");
      Leg_32.add_attribute("RepoRt", "20985502.970000"); // 2
      Leg_32_set.insert("20985502.970000");
      Leg_32.add_attribute("Fctr", "7532511.900000"); // 2
      Leg_32_set.insert("7532511.900000");
      Leg_32.add_attribute("CrdRtg", "LegCreditRating_t_559263197"); // 2
      Leg_32_set.insert("LegCreditRating_t_559263197");
      Leg_32.add_attribute("Rgstry", "LegInstrRegistry_t_78173788"); // 2
      Leg_32_set.insert("LegInstrRegistry_t_78173788");
      Leg_32.add_attribute("Ctry", "358571891"); // 2
      Leg_32_set.insert("358571891");
      Leg_32.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2100376472"); // 2
      Leg_32_set.insert("LegStateOrProvinceOfIssue_t_2100376472");
      Leg_32.add_attribute("Lcl", "LegLocaleOfIssue_t_1675413011"); // 2
      Leg_32_set.insert("LegLocaleOfIssue_t_1675413011");
      Leg_32.add_attribute("Redeem", "LegRedemptionDate_t_1436536307"); // 2
      Leg_32_set.insert("LegRedemptionDate_t_1436536307");
      Leg_32.add_attribute("Strk", "20491597.120000"); // 2
      Leg_32_set.insert("20491597.120000");
      Leg_32.add_attribute("StrkCcy", "CHF"); // 2
      Leg_32_set.insert("CHF");
      Leg_32.add_attribute("OptA", "1267422784"); // 2
      Leg_32_set.insert("1267422784");
      Leg_32.add_attribute("Cmult", "4635901.190000"); // 2
      Leg_32_set.insert("4635901.190000");
      Leg_32.add_attribute("MultTyp", "1"); // 2
      Leg_32_set.insert("1");
      Leg_32.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_32_set.insert("1");
      Leg_32.add_attribute("UOM", "USD"); // 2
      Leg_32_set.insert("USD");
      Leg_32.add_attribute("UOMQty", "10498568.870000"); // 2
      Leg_32_set.insert("10498568.870000");
      Leg_32.add_attribute("PxUOM", "Alw"); // 2
      Leg_32_set.insert("Alw");
      Leg_32.add_attribute("PxUOMQty", "19512982.160000"); // 2
      Leg_32_set.insert("19512982.160000");
      Leg_32.add_attribute("TmUnit", "H"); // 2
      Leg_32_set.insert("H");
      Leg_32.add_attribute("ExerStyle", "1"); // 2
      Leg_32_set.insert("1");
      Leg_32.add_attribute("CpnRt", "12812692.290000"); // 2
      Leg_32_set.insert("12812692.290000");
      Leg_32.add_attribute("Exch", "LegSecurityExchange_t_185416180"); // 2
      Leg_32_set.insert("LegSecurityExchange_t_185416180");
      Leg_32.add_attribute("Issr", "LegIssuer_t_1785222423"); // 2
      Leg_32_set.insert("LegIssuer_t_1785222423");
      Leg_32.add_attribute("EncLegIssrLen", "1430027192"); // 2
      Leg_32_set.insert("1430027192");
      Leg_32.add_attribute("EncLegIssr", "EncodedLegIssuer_t_495913190"); // 2
      Leg_32_set.insert("EncodedLegIssuer_t_495913190");
      Leg_32.add_attribute("Desc", "LegSecurityDesc_t_2043129203"); // 2
      Leg_32_set.insert("LegSecurityDesc_t_2043129203");
      Leg_32.add_attribute("EncLegSecDescLen", "724237175"); // 2
      Leg_32_set.insert("724237175");
      Leg_32.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1297240643"); // 2
      Leg_32_set.insert("EncodedLegSecurityDesc_t_1297240643");
      Leg_32.add_attribute("RatioQty", "5505948.240000"); // 2
      Leg_32_set.insert("5505948.240000");
      Leg_32.add_attribute("Side", "7"); // 2
      Leg_32_set.insert("7");
      Leg_32.add_attribute("Ccy", "USD"); // 2
      Leg_32_set.insert("USD");
      Leg_32.add_attribute("Pool", "LegPool_t_1082966931"); // 2
      Leg_32_set.insert("LegPool_t_1082966931");
      Leg_32.add_attribute("Dated", "LegDatedDate_t_1326481081"); // 2
      Leg_32_set.insert("LegDatedDate_t_1326481081");
      Leg_32.add_attribute("CSetMo", "1662417906"); // 2
      Leg_32_set.insert("1662417906");
      Leg_32.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1035859755"); // 2
      Leg_32_set.insert("LegInterestAccrualDate_t_1035859755");
      Leg_32.add_attribute("PutCall", "854410444"); // 2
      Leg_32_set.insert("854410444");
      Leg_32.add_attribute("LegOptionRatio", "9514705.650000"); // 2
      Leg_32_set.insert("9514705.650000");
      Leg_32.add_attribute("Px", "9375358.190000"); // 2
      Leg_32_set.insert("9375358.190000");
      all_values.push_back(Leg_32_set);
      all_compo_names.insert("Leg_32_set");

      {
        xml_element LegAID_32{"LegAID"};
        multiset<string> LegAID_32_set;
        LegAID_32.add_attribute("SecAltID", "LegSecurityAltID_t_1804292151"); // 3
        LegAID_32_set.insert("LegSecurityAltID_t_1804292151");
        LegAID_32.add_attribute("SecAltIDSrc", "7"); // 3
        LegAID_32_set.insert("7");
        all_values.push_back(LegAID_32_set);
        all_compo_names.insert("LegAID_32_set");

        Leg_32.add_element(LegAID_32);
      }
      RelSym_3.add_element(Leg_32);
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
