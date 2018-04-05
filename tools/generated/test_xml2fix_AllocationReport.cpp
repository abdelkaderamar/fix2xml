#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReport_message_t_0;
  elt.add_attribute("RptID", "AllocReportID_t_1725678188");
  elt.add_attribute("ID", "AllocID_t_131629236");
  elt.add_attribute("TransTyp", "1");
  elt.add_attribute("RptRefID", "AllocReportRefID_t_363457606");
  elt.add_attribute("CxlRplcRsn", "1");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1186454803");
  elt.add_attribute("RptTyp", "2");
  elt.add_attribute("Stat", "2");
  elt.add_attribute("RejCode", "6");
  elt.add_attribute("RefID", "RefAllocID_t_967557170");
  elt.add_attribute("ImReqTyp", "1");
  elt.add_attribute("LinkID", "AllocLinkID_t_630434016");
  elt.add_attribute("LinkTyp", "0");
  elt.add_attribute("BkngRefID", "BookingRefID_t_455774815");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1147108470");
  elt.add_attribute("TrdTyp", "27");
  elt.add_attribute("TrdSubTyp", "19");
  elt.add_attribute("MLegRptTyp", "1");
  elt.add_attribute("CustCpcty", "2");
  elt.add_attribute("InptSrc", "TradeInputSource_t_2045244007");
  elt.add_attribute("RndPx", "11205842.820000");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1307118066");
  elt.add_attribute("InptDev", "TradeInputDevice_t_656302517");
  elt.add_attribute("AvgPxInd", "0");
  elt.add_attribute("NoOrdsTyp", "0");
  elt.add_attribute("PrevlyRpted", "N");
  elt.add_attribute("ReversalInd", "true");
  elt.add_attribute("MtchTyp", "2");
  elt.add_attribute("Side", "2");
  elt.add_attribute("Qty", "11824593.650000");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("LastMkt", "LastMkt_t_125416286");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1314088601");
  elt.add_attribute("SesID", "4");
  elt.add_attribute("SesSub", "4");
  elt.add_attribute("PxTyp", "10");
  elt.add_attribute("AvgPx", "17064285.220000");
  elt.add_attribute("AvgParPx", "4517642.680000");
  elt.add_attribute("Ccy", "USD");
  elt.add_attribute("AvgPxPrcsn", "1419321438");
  elt.add_attribute("TrdDt", "TradeDate_t_993627765");
  elt.add_attribute("TxnTm", "TransactTime_t_1688508840");
  elt.add_attribute("SettlTyp", "8");
  elt.add_attribute("SettlDt", "SettlDate_t_1449402581");
  elt.add_attribute("BkngTyp", "1");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_715582474");
  elt.add_attribute("Concession", "Concession_t_640881250");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_654419667");
  elt.add_attribute("NetMny", "NetMoney_t_976312467");
  elt.add_attribute("PosEfct", "N");
  elt.add_attribute("AutoAcceptInd", "false");
  elt.add_attribute("Txt", "Text_t_135946885");
  elt.add_attribute("EncTxtLen", "1194944127");
  elt.add_attribute("EncTxt", "EncodedText_t_1864682913");
  elt.add_attribute("NumDaysInt", "1013127317");
  elt.add_attribute("AcrdIntRt", "5530468.130000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1306841440");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_247811332");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1100268559");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_341817157");
  elt.add_attribute("StartCsh", "StartCash_t_117534631");
  elt.add_attribute("EndCsh", "EndCash_t_1225684845");
  elt.add_attribute("LegalCnfm", "Y");
  elt.add_attribute("TotNoAllocs", "637508350");
  elt.add_attribute("LastFragment", "Y");
  all_values.push_back(AllocationReport_message_t_0);
  all_compo_names.insert("AllocationReport_message_t");

  multiset<string> MessageHeader_t_5;
    elt.add_attribute("SeqNum", "631436352");
    elt.add_attribute("SID", "SenderCompID_t_196453224");
    elt.add_attribute("TID", "TargetCompID_t_18839357");
    elt.add_attribute("OBID", "OnBehalfOfCompID_t_946918827");
    elt.add_attribute("D2ID", "DeliverToCompID_t_1254528048");
    elt.add_attribute("SSub", "SenderSubID_t_1438160795");
    elt.add_attribute("SLoc", "SenderLocationID_t_1940546593");
    elt.add_attribute("TSub", "TargetSubID_t_795553240");
    elt.add_attribute("TLoc", "TargetLocationID_t_2017993783");
    elt.add_attribute("OBSub", "OnBehalfOfSubID_t_1242465526");
    elt.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1483686902");
    elt.add_attribute("D2Sub", "DeliverToSubID_t_586092609");
    elt.add_attribute("D2Loc", "DeliverToLocationID_t_1883346776");
    elt.add_attribute("PosDup", "Y");
    elt.add_attribute("PosRsnd", "N");
    elt.add_attribute("Snt", "SendingTime_t_274504738");
    elt.add_attribute("OrigSnt", "OrigSendingTime_t_1765626870");
    elt.add_attribute("MsgEncd", "MessageEncoding_t_1698351961");
  all_values.push_back(MessageHeader_t_5);
  all_compo_names.insert("MessageHeader_t");

  multiset<string> Hop_t_5;
      elt.add_attribute("ID", "HopCompID_t_1469448866");
      elt.add_attribute("Ref", "1482826136");
      elt.add_attribute("Snt", "HopSendingTime_t_563995630");
  all_values.push_back(Hop_t_5);
  all_compo_names.insert("Hop_t");

  multiset<string> OrdAllocGrp_Block_t_2;
    elt.add_attribute("ClOrdID", "ClOrdID_t_2022495679");
    elt.add_attribute("OrdID", "OrderID_t_642183928");
    elt.add_attribute("OrdID2", "SecondaryOrderID_t_811806962");
    elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_975280590");
    elt.add_attribute("ListID", "ListID_t_984001085");
    elt.add_attribute("Qty", "9293415.930000");
    elt.add_attribute("AvgPx", "534817.870000");
    elt.add_attribute("BkngQty", "4924231.960000");
  all_values.push_back(OrdAllocGrp_Block_t_2);
  all_compo_names.insert("OrdAllocGrp_Block_t");

  multiset<string> NestedParties2_Block_t_2;
      elt.add_attribute("ID", "Nested2PartyID_t_1566849943");
      elt.add_attribute("Src", "B");
      elt.add_attribute("R", "36");
  all_values.push_back(NestedParties2_Block_t_2);
  all_compo_names.insert("NestedParties2_Block_t");

  multiset<string> NstdPtys2SubGrp_Block_t_2;
        elt.add_attribute("ID", "Nested2PartySubID_t_1763303167");
        elt.add_attribute("Typ", "15");
  all_values.push_back(NstdPtys2SubGrp_Block_t_2);
  all_compo_names.insert("NstdPtys2SubGrp_Block_t");

  multiset<string> ExecAllocGrp_Block_t_2;
    elt.add_attribute("LastQty", "20707783.760000");
    elt.add_attribute("ExecID", "ExecID_t_870347567");
    elt.add_attribute("ExecID2", "SecondaryExecID_t_1077557028");
    elt.add_attribute("LastPx", "18638413.210000");
    elt.add_attribute("LastParPx", "16659008.070000");
    elt.add_attribute("LastCpcty", "4");
    elt.add_attribute("TrdID", "TradeID_t_958823199");
    elt.add_attribute("FirmTrdID", "FirmTradeID_t_1002104062");
  all_values.push_back(ExecAllocGrp_Block_t_2);
  all_compo_names.insert("ExecAllocGrp_Block_t");

  multiset<string> Instrument_Block_t_4;
    elt.add_attribute("Sym", "Symbol_t_1534159772");
    elt.add_attribute("Sfx", "WI");
    elt.add_attribute("ID", "SecurityID_t_992726983");
    elt.add_attribute("Src", "D");
    elt.add_attribute("Prod", "9");
    elt.add_attribute("ProdCmplx", "ProductComplex_t_610870206");
    elt.add_attribute("SecGrp", "SecurityGroup_t_499949513");
    elt.add_attribute("CFI", "CFICode_t_291156284");
    elt.add_attribute("SecTyp", "MF");
    elt.add_attribute("SubTyp", "SecuritySubType_t_1063945143");
    elt.add_attribute("MMY", "166168315");
    elt.add_attribute("MatDt", "MaturityDate_t_588396622");
    elt.add_attribute("MatTm", "1875752106");
    elt.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1141448906");
    elt.add_attribute("AsgnMeth", "1572397707");
    elt.add_attribute("Status", "2");
    elt.add_attribute("CpnPmt", "CouponPaymentDate_t_1194930693");
    elt.add_attribute("RestrctTyp", "FR");
    elt.add_attribute("Snrty", "SR");
    elt.add_attribute("NotlPctOut", "8154875.700000");
    elt.add_attribute("OrigNotlPctOut", "10411968.040000");
    elt.add_attribute("AttchPnt", "18402795.140000");
    elt.add_attribute("DetchPnt", "4548838.030000");
    elt.add_attribute("Issued", "IssueDate_t_964491532");
    elt.add_attribute("RepoCollSecTyp", "563143434");
    elt.add_attribute("RepoTrm", "1532440832");
    elt.add_attribute("RepoRt", "6808492.050000");
    elt.add_attribute("Fctr", "815605.930000");
    elt.add_attribute("CrdRtg", "CreditRating_t_333024347");
    elt.add_attribute("Rgstry", "InstrRegistry_t_1639672404");
    elt.add_attribute("IssuCtry", "1083664655");
    elt.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1867184120");
    elt.add_attribute("Lcl", "LocaleOfIssue_t_186875084");
    elt.add_attribute("Redeem", "RedemptionDate_t_2076391639");
    elt.add_attribute("StrkPx", "6687816.720000");
    elt.add_attribute("StrkCcy", "CAN");
    elt.add_attribute("StrkMult", "11687311.860000");
    elt.add_attribute("StrkValu", "14472224.340000");
    elt.add_attribute("StrkPxDtrmnMeth", "4");
    elt.add_attribute("StrkPxBndryMeth", "2");
    elt.add_attribute("StrkPxBndryPrcsn", "16133907.490000");
    elt.add_attribute("PxDtrmnMeth", "2");
    elt.add_attribute("OptAt", "1960944787");
    elt.add_attribute("Mult", "6073560.070000");
    elt.add_attribute("MultTyp", "1");
    elt.add_attribute("FlowSchedTyp", "1");
    elt.add_attribute("MinPxIncr", "18022867.010000");
    elt.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_416638828");
    elt.add_attribute("UOM", "Alw");
    elt.add_attribute("UOMQty", "4702906.230000");
    elt.add_attribute("PxUOM", "lbs");
    elt.add_attribute("PxUOMQty", "2408434.040000");
    elt.add_attribute("SettlMeth", "C");
    elt.add_attribute("ExerStyle", "2");
    elt.add_attribute("OptPayoutTyp", "3");
    elt.add_attribute("OptPayAmt", "OptPayoutAmount_t_310131610");
    elt.add_attribute("PxQteMeth", "PCTPAR");
    elt.add_attribute("ValMeth", "FUTDA");
    elt.add_attribute("ListMeth", "0");
    elt.add_attribute("CapPx", "4478814.790000");
    elt.add_attribute("FlrPx", "19692120.870000");
    elt.add_attribute("PutCall", "0");
    elt.add_attribute("FlexInd", "false");
    elt.add_attribute("FlexProdElig", "true");
    elt.add_attribute("TmUnit", "Mo");
    elt.add_attribute("CpnRt", "17908227.130000");
    elt.add_attribute("Exch", "SecurityExchange_t_290414627");
    elt.add_attribute("PosLmt", "52885640");
    elt.add_attribute("NTPosLmt", "1090561499");
    elt.add_attribute("Issr", "Issuer_t_776405518");
    elt.add_attribute("EncIssrLen", "138078322");
    elt.add_attribute("EncIssr", "EncodedIssuer_t_556468601");
    elt.add_attribute("Desc", "SecurityDesc_t_1850793031");
    elt.add_attribute("EncSecDescLen", "2099023109");
    elt.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1163824608");
    elt.add_attribute("Pool", "Pool_t_202610956");
    elt.add_attribute("CSetMo", "422610652");
    elt.add_attribute("CPPgm", "1");
    elt.add_attribute("CPRegT", "CPRegType_t_619249784");
    elt.add_attribute("Dated", "DatedDate_t_970658190");
    elt.add_attribute("IntAcrl", "InterestAccrualDate_t_1288918284");
  all_values.push_back(Instrument_Block_t_4);
  all_compo_names.insert("Instrument_Block_t");

  multiset<string> SecAltIDGrp_Block_t_4;
      elt.add_attribute("AltID", "SecurityAltID_t_2077085417");
      elt.add_attribute("AltIDSrc", "8");
  all_values.push_back(SecAltIDGrp_Block_t_4);
  all_compo_names.insert("SecAltIDGrp_Block_t");

  multiset<string> SecurityXML_Block_t_4;
      elt.add_attribute("Schema", "SecurityXMLSchema_t_66609063");
  all_values.push_back(SecurityXML_Block_t_4);
  all_compo_names.insert("SecurityXML_Block_t");

  multiset<string> EvntGrp_Block_t_4;
      elt.add_attribute("EventTyp", "7");
      elt.add_attribute("Dt", "EventDate_t_2015488433");
      elt.add_attribute("Tm", "EventTime_t_376740673");
      elt.add_attribute("Px", "11601380.100000");
      elt.add_attribute("Txt", "EventText_t_753552217");
  all_values.push_back(EvntGrp_Block_t_4);
  all_compo_names.insert("EvntGrp_Block_t");

  multiset<string> InstrumentParties_Block_t_4;
      elt.add_attribute("ID", "InstrumentPartyID_t_1019896631");
      elt.add_attribute("Src", "2");
      elt.add_attribute("R", "3");
  all_values.push_back(InstrumentParties_Block_t_4);
  all_compo_names.insert("InstrumentParties_Block_t");

  multiset<string> InstrumentPtysSubGrp_Block_t_4;
        elt.add_attribute("ID", "InstrumentPartySubID_t_1382753061");
        elt.add_attribute("Typ", "5");
  all_values.push_back(InstrumentPtysSubGrp_Block_t_4);
  all_compo_names.insert("InstrumentPtysSubGrp_Block_t");

  multiset<string> ComplexEvents_Block_t_4;
      elt.add_attribute("Typ", "7");
      elt.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_266907516");
      elt.add_attribute("Px", "18861151.180000");
      elt.add_attribute("PxBndryMeth", "1");
      elt.add_attribute("PxBndryPrcsn", "3197931.560000");
      elt.add_attribute("PxTmTyp", "3");
      elt.add_attribute("Cond", "2");
  all_values.push_back(ComplexEvents_Block_t_4);
  all_compo_names.insert("ComplexEvents_Block_t");

  multiset<string> ComplexEventDates_Block_t_4;
        elt.add_attribute("StartDt", "ComplexEventStartDate_t_457871478");
        elt.add_attribute("EndDt", "ComplexEventEndDate_t_1385661571");
  all_values.push_back(ComplexEventDates_Block_t_4);
  all_compo_names.insert("ComplexEventDates_Block_t");

  multiset<string> ComplexEventTimes_Block_t_4;
          elt.add_attribute("StartTm", "1096046617");
          elt.add_attribute("EndTm", "409410940");
  all_values.push_back(ComplexEventTimes_Block_t_4);
  all_compo_names.insert("ComplexEventTimes_Block_t");

  multiset<string> InstrumentExtension_Block_t_2;
    elt.add_attribute("DlvryForm", "2");
    elt.add_attribute("PctAtRisk", "12986575.730000");
  all_values.push_back(InstrumentExtension_Block_t_2);
  all_compo_names.insert("InstrumentExtension_Block_t");

  multiset<string> AttrbGrp_Block_t_2;
      elt.add_attribute("Typ", "11");
      elt.add_attribute("Val", "InstrAttribValue_t_1220630193");
  all_values.push_back(AttrbGrp_Block_t_2);
  all_compo_names.insert("AttrbGrp_Block_t");

  multiset<string> FinancingDetails_Block_t_2;
    elt.add_attribute("AgmtDesc", "AgreementDesc_t_1917907357");
    elt.add_attribute("AgmtID", "AgreementID_t_1802679783");
    elt.add_attribute("AgmtDt", "AgreementDate_t_362064829");
    elt.add_attribute("AgmtCcy", "JPY");
    elt.add_attribute("TrmTyp", "1");
    elt.add_attribute("StartDt", "StartDate_t_2051954414");
    elt.add_attribute("EndDt", "EndDate_t_734702515");
    elt.add_attribute("DlvryTyp", "2");
    elt.add_attribute("MgnRatio", "10646087.760000");
  all_values.push_back(FinancingDetails_Block_t_2);
  all_compo_names.insert("FinancingDetails_Block_t");

  multiset<string> UndInstrmtGrp_Block_t_3;
    elt.add_attribute("Sym", "UnderlyingSymbol_t_1488254733");
    elt.add_attribute("Sfx", "WI");
    elt.add_attribute("ID", "UnderlyingSecurityID_t_525144617");
    elt.add_attribute("Src", "5");
    elt.add_attribute("Prod", "9");
    elt.add_attribute("CFI", "UnderlyingCFICode_t_620437022");
    elt.add_attribute("SecTyp", "IET");
    elt.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1327488127");
    elt.add_attribute("MMY", "359068493");
    elt.add_attribute("Mat", "UnderlyingMaturityDate_t_858300544");
    elt.add_attribute("MatTm", "1647281283");
    elt.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1188261463");
    elt.add_attribute("RestrctTyp", "MM");
    elt.add_attribute("Snrty", "SR");
    elt.add_attribute("NotlPctOut", "4264393.860000");
    elt.add_attribute("OrigNotlPctOut", "11996007.470000");
    elt.add_attribute("AttchPnt", "3670800.540000");
    elt.add_attribute("DetchPnt", "8284419.170000");
    elt.add_attribute("Issued", "UnderlyingIssueDate_t_350774672");
    elt.add_attribute("RepoCollSecTyp", "1199101646");
    elt.add_attribute("RepoTrm", "2049072110");
    elt.add_attribute("RepoRt", "1211983.810000");
    elt.add_attribute("Fctr", "8542977.810000");
    elt.add_attribute("CrdRtg", "UnderlyingCreditRating_t_263653292");
    elt.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1968707508");
    elt.add_attribute("Ctry", "1720995511");
    elt.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_692327184");
    elt.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1873178274");
    elt.add_attribute("Redeem", "UnderlyingRedemptionDate_t_308214379");
    elt.add_attribute("StrkPx", "14977417.500000");
    elt.add_attribute("StrkCcy", "JPY");
    elt.add_attribute("OptA", "1175569300");
    elt.add_attribute("Mult", "13154480.200000");
    elt.add_attribute("MultTyp", "2");
    elt.add_attribute("FlowSchedTyp", "3");
    elt.add_attribute("UOM", "MWh");
    elt.add_attribute("UOMQty", "19544896.830000");
    elt.add_attribute("PxUOM", "MMBtu");
    elt.add_attribute("PxUOMQty", "1474698.870000");
    elt.add_attribute("TmUnit", "Min");
    elt.add_attribute("ExerStyle", "2");
    elt.add_attribute("CpnRt", "13357313.500000");
    elt.add_attribute("Exch", "UnderlyingSecurityExchange_t_768860710");
    elt.add_attribute("Issr", "UnderlyingIssuer_t_873621139");
    elt.add_attribute("EncUndIssrLen", "1762170736");
    elt.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1968461457");
    elt.add_attribute("Desc", "UnderlyingSecurityDesc_t_1240701193");
    elt.add_attribute("EncUndSecDescLen", "443129006");
    elt.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_171752481");
    elt.add_attribute("CPPgm", "UnderlyingCPProgram_t_292319192");
    elt.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_344717468");
    elt.add_attribute("AllocPct", "2929508.620000");
    elt.add_attribute("Ccy", "JPY");
    elt.add_attribute("Qty", "1141747.230000");
    elt.add_attribute("SettlTyp", "5");
    elt.add_attribute("CashAmt", "UnderlyingCashAmount_t_1300697945");
    elt.add_attribute("CashTyp", "DIFF");
    elt.add_attribute("Px", "10283432.160000");
    elt.add_attribute("DirtPx", "6509560.470000");
    elt.add_attribute("EndPx", "6301727.520000");
    elt.add_attribute("StartVal", "UnderlyingStartValue_t_677328680");
    elt.add_attribute("CurVal", "UnderlyingCurrentValue_t_1826525347");
    elt.add_attribute("EndVal", "UnderlyingEndValue_t_1945620772");
    elt.add_attribute("AdjQty", "2423658.860000");
    elt.add_attribute("FxRate", "19151916.100000");
    elt.add_attribute("FxRateCalc", "M");
    elt.add_attribute("CapValu", "UnderlyingCapValue_t_49371921");
    elt.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1183862352");
    elt.add_attribute("PutCall", "1881492054");
  all_values.push_back(UndInstrmtGrp_Block_t_3);
  all_compo_names.insert("UndInstrmtGrp_Block_t");

  multiset<string> UndSecAltIDGrp_Block_t_3;
      elt.add_attribute("AltID", "UnderlyingSecurityAltID_t_714678501");
      elt.add_attribute("AltIDSrc", "3");
  all_values.push_back(UndSecAltIDGrp_Block_t_3);
  all_compo_names.insert("UndSecAltIDGrp_Block_t");

  multiset<string> UnderlyingStipulations_Block_t_3;
      elt.add_attribute("Typ", "SALESCREDITOVR");
      elt.add_attribute("Val", "UnderlyingStipValue_t_1483539211");
  all_values.push_back(UnderlyingStipulations_Block_t_3);
  all_compo_names.insert("UnderlyingStipulations_Block_t");

  multiset<string> UndlyInstrumentParties_Block_t_3;
      elt.add_attribute("ID", "UnderlyingInstrumentPartyID_t_825951869");
      elt.add_attribute("Src", "C");
      elt.add_attribute("R", "47");
  all_values.push_back(UndlyInstrumentParties_Block_t_3);
  all_compo_names.insert("UndlyInstrumentParties_Block_t");

  multiset<string> UndlyInstrumentPtysSubGrp_Block_t_3;
        elt.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2066653063");
        elt.add_attribute("Typ", "13");
  all_values.push_back(UndlyInstrumentPtysSubGrp_Block_t_3);
  all_compo_names.insert("UndlyInstrumentPtysSubGrp_Block_t");

  multiset<string> InstrmtLegGrp_Block_t_3;
    elt.add_attribute("Sym", "LegSymbol_t_1476269501");
    elt.add_attribute("Sfx", "WI");
    elt.add_attribute("ID", "LegSecurityID_t_1472273319");
    elt.add_attribute("Src", "B");
    elt.add_attribute("Prod", "1");
    elt.add_attribute("CFI", "LegCFICode_t_2080644080");
    elt.add_attribute("SecTyp", "LQN");
    elt.add_attribute("SecSubTyp", "LegSecuritySubType_t_2078234417");
    elt.add_attribute("MMY", "1233858377");
    elt.add_attribute("Mat", "LegMaturityDate_t_1723264436");
    elt.add_attribute("MatTm", "959093985");
    elt.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1884814424");
    elt.add_attribute("Issued", "LegIssueDate_t_205953540");
    elt.add_attribute("RepoCollSecTyp", "1636422665");
    elt.add_attribute("RepoTrm", "1563856124");
    elt.add_attribute("RepoRt", "40906.640000");
    elt.add_attribute("Fctr", "18787885.510000");
    elt.add_attribute("CrdRtg", "LegCreditRating_t_1331564086");
    elt.add_attribute("Rgstry", "LegInstrRegistry_t_1738112831");
    elt.add_attribute("Ctry", "1928160473");
    elt.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_367942791");
    elt.add_attribute("Lcl", "LegLocaleOfIssue_t_1472121237");
    elt.add_attribute("Redeem", "LegRedemptionDate_t_495355326");
    elt.add_attribute("Strk", "3202735.210000");
    elt.add_attribute("StrkCcy", "GBP");
    elt.add_attribute("OptA", "1146225390");
    elt.add_attribute("Cmult", "10788041.900000");
    elt.add_attribute("MultTyp", "2");
    elt.add_attribute("FlowSchedTyp", "0");
    elt.add_attribute("UOM", "t");
    elt.add_attribute("UOMQty", "4647137.640000");
    elt.add_attribute("PxUOM", "Alw");
    elt.add_attribute("PxUOMQty", "15311497.130000");
    elt.add_attribute("TmUnit", "Wk");
    elt.add_attribute("ExerStyle", "2");
    elt.add_attribute("CpnRt", "14643101.450000");
    elt.add_attribute("Exch", "LegSecurityExchange_t_1969845567");
    elt.add_attribute("Issr", "LegIssuer_t_418256114");
    elt.add_attribute("EncLegIssrLen", "550684874");
    elt.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1545626355");
    elt.add_attribute("Desc", "LegSecurityDesc_t_1377350100");
    elt.add_attribute("EncLegSecDescLen", "288015650");
    elt.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1751579896");
    elt.add_attribute("RatioQty", "8662891.170000");
    elt.add_attribute("Side", "F");
    elt.add_attribute("Ccy", "CHF");
    elt.add_attribute("Pool", "LegPool_t_1035952213");
    elt.add_attribute("Dated", "LegDatedDate_t_1346299743");
    elt.add_attribute("CSetMo", "378270846");
    elt.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1403895004");
    elt.add_attribute("PutCall", "670937332");
    elt.add_attribute("LegOptionRatio", "8736261.720000");
    elt.add_attribute("Px", "17241685.250000");
  all_values.push_back(InstrmtLegGrp_Block_t_3);
  all_compo_names.insert("InstrmtLegGrp_Block_t");

  multiset<string> LegSecAltIDGrp_Block_t_3;
      elt.add_attribute("SecAltID", "LegSecurityAltID_t_1065314678");
      elt.add_attribute("SecAltIDSrc", "5");
  all_values.push_back(LegSecAltIDGrp_Block_t_3);
  all_compo_names.insert("LegSecAltIDGrp_Block_t");

  multiset<string> SpreadOrBenchmarkCurveData_Block_t_2;
    elt.add_attribute("Spread", "7229102.670000");
    elt.add_attribute("Ccy", "CHF");
    elt.add_attribute("Name", "SONIA");
    elt.add_attribute("Point", "BenchmarkCurvePoint_t_55511614");
    elt.add_attribute("Px", "1581950.890000");
    elt.add_attribute("PxTyp", "10");
    elt.add_attribute("SecID", "BenchmarkSecurityID_t_1586661327");
    elt.add_attribute("SecIDSrc", "4");
  all_values.push_back(SpreadOrBenchmarkCurveData_Block_t_2);
  all_compo_names.insert("SpreadOrBenchmarkCurveData_Block_t");

  multiset<string> Parties_Block_t_4;
    elt.add_attribute("ID", "PartyID_t_1405210182");
    elt.add_attribute("Src", "1");
    elt.add_attribute("R", "25");
  all_values.push_back(Parties_Block_t_4);
  all_compo_names.insert("Parties_Block_t");

  multiset<string> PtysSubGrp_Block_t_4;
      elt.add_attribute("ID", "PartySubID_t_1823466297");
      elt.add_attribute("Typ", "2");
  all_values.push_back(PtysSubGrp_Block_t_4);
  all_compo_names.insert("PtysSubGrp_Block_t");

  multiset<string> Stipulations_Block_t_2;
    elt.add_attribute("Typ", "BANKQUAL");
    elt.add_attribute("Val", "StipulationValue_t_1053332749");
  all_values.push_back(Stipulations_Block_t_2);
  all_compo_names.insert("Stipulations_Block_t");

  multiset<string> YieldData_Block_t_2;
    elt.add_attribute("Typ", "SEMIANNUAL");
    elt.add_attribute("Yld", "12167300.910000");
    elt.add_attribute("CalcDt", "YieldCalcDate_t_1919621866");
    elt.add_attribute("RedDt", "YieldRedemptionDate_t_1446576475");
    elt.add_attribute("RedPx", "8249170.040000");
    elt.add_attribute("RedPxTyp", "19");
  all_values.push_back(YieldData_Block_t_2);
  all_compo_names.insert("YieldData_Block_t");

  multiset<string> PositionAmountData_Block_t_2;
    elt.add_attribute("Typ", "TVAR");
    elt.add_attribute("Amt", "PosAmt_t_23733099");
    elt.add_attribute("Ccy", "PositionCurrency_t_748003085");
  all_values.push_back(PositionAmountData_Block_t_2);
  all_compo_names.insert("PositionAmountData_Block_t");

  multiset<string> AllocGrp_Block_t_2;
    elt.add_attribute("Acct", "AllocAccount_t_1738940044");
    elt.add_attribute("ActIDSrc", "3");
    elt.add_attribute("MtchStat", "0");
    elt.add_attribute("Px", "13156249.210000");
    elt.add_attribute("Qty", "17599851.100000");
    elt.add_attribute("IndAllocID", "IndividualAllocID_t_179182672");
    elt.add_attribute("ProcCode", "4");
    elt.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1756620330");
    elt.add_attribute("Meth", "2");
    elt.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1679356613");
    elt.add_attribute("AllocPosEfct", "O");
    elt.add_attribute("Typ", "1");
    elt.add_attribute("NotifyBrkrOfCredit", "Y");
    elt.add_attribute("HandlInst", "3");
    elt.add_attribute("Txt", "AllocText_t_275504655");
    elt.add_attribute("EncAllocTextLen", "1854787985");
    elt.add_attribute("EncAllocText", "EncodedAllocText_t_7313799");
    elt.add_attribute("AvgPx", "3425121.430000");
    elt.add_attribute("NetMny", "AllocNetMoney_t_1530770634");
    elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1461486497");
    elt.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1955145987");
    elt.add_attribute("SettlCcy", "GBP");
    elt.add_attribute("AllocSettlCcy", "GBP");
    elt.add_attribute("SettlCurrFxRt", "3552840.250000");
    elt.add_attribute("SettlCurrFxRtCalc", "M");
    elt.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_578490193");
    elt.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_690329065");
    elt.add_attribute("ClrFeeInd", "B");
    elt.add_attribute("SettlInstTyp", "4");
  all_values.push_back(AllocGrp_Block_t_2);
  all_compo_names.insert("AllocGrp_Block_t");

  multiset<string> NestedParties_Block_t_4;
      elt.add_attribute("ID", "NestedPartyID_t_281785461");
      elt.add_attribute("Src", "5");
      elt.add_attribute("R", "37");
  all_values.push_back(NestedParties_Block_t_4);
  all_compo_names.insert("NestedParties_Block_t");

  multiset<string> NstdPtysSubGrp_Block_t_4;
        elt.add_attribute("ID", "NestedPartySubID_t_1597410382");
        elt.add_attribute("Typ", "28");
  all_values.push_back(NstdPtysSubGrp_Block_t_4);
  all_compo_names.insert("NstdPtysSubGrp_Block_t");

  multiset<string> CommissionData_Block_t_2;
      elt.add_attribute("Comm", "Commission_t_979821561");
      elt.add_attribute("CommTyp", "1");
      elt.add_attribute("Ccy", "CHF");
      elt.add_attribute("FundRenewWaiv", "N");
  all_values.push_back(CommissionData_Block_t_2);
  all_compo_names.insert("CommissionData_Block_t");

  multiset<string> MiscFeesGrp_Block_t_2;
      elt.add_attribute("Amt", "MiscFeeAmt_t_1453999407");
      elt.add_attribute("Curr", "CHF");
      elt.add_attribute("Typ", "11");
      elt.add_attribute("Basis", "1");
  all_values.push_back(MiscFeesGrp_Block_t_2);
  all_compo_names.insert("MiscFeesGrp_Block_t");

  multiset<string> ClrInstGrp_Block_t_2;
      elt.add_attribute("ClrngInstrctn", "4");
  all_values.push_back(ClrInstGrp_Block_t_2);
  all_compo_names.insert("ClrInstGrp_Block_t");

  multiset<string> SettlInstructionsData_Block_t_2;
      elt.add_attribute("DlvryTyp", "2");
      elt.add_attribute("StandInstDbTyp", "4");
      elt.add_attribute("StandInstDbName", "StandInstDbName_t_560504015");
      elt.add_attribute("StandInstDbID", "StandInstDbID_t_2026625679");
  all_values.push_back(SettlInstructionsData_Block_t_2);
  all_compo_names.insert("SettlInstructionsData_Block_t");

  multiset<string> DlvyInstGrp_Block_t_2;
        elt.add_attribute("InstSrc", "1");
        elt.add_attribute("InstTyp", "C");
  all_values.push_back(DlvyInstGrp_Block_t_2);
  all_compo_names.insert("DlvyInstGrp_Block_t");

  multiset<string> SettlParties_Block_t_2;
          elt.add_attribute("ID", "SettlPartyID_t_935333229");
          elt.add_attribute("Src", "1");
          elt.add_attribute("R", "51");
  all_values.push_back(SettlParties_Block_t_2);
  all_compo_names.insert("SettlParties_Block_t");

  multiset<string> SettlPtysSubGrp_Block_t_2;
            elt.add_attribute("ID", "SettlPartySubID_t_1290617254");
            elt.add_attribute("Typ", "1");
  all_values.push_back(SettlPtysSubGrp_Block_t_2);
  all_compo_names.insert("SettlPtysSubGrp_Block_t");

  multiset<string> RateSource_Block_t_1;
    elt.add_attribute("RtSrc", "2");
    elt.add_attribute("RtSrcTyp", "1");
    elt.add_attribute("RefPg", "ReferencePage_t_1760800886");
  all_values.push_back(RateSource_Block_t_1);
  all_compo_names.insert("RateSource_Block_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
