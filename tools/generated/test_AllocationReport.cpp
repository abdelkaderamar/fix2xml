#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AllocationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationReport msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationReport_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_2;
  AccruedInterestAmt_2.setString("4535216");
  msg.set(AccruedInterestAmt_2);
  AllocationReport_0.insert(AccruedInterestAmt_2.getString());
  FIX::AccruedInterestRate AccruedInterestRate_2;
  AccruedInterestRate_2.setString("29.810000");
  msg.set(AccruedInterestRate_2);
  AllocationReport_0.insert(AccruedInterestRate_2.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_2(99);
  msg.set(AllocCancReplaceReason_2);
  AllocationReport_0.insert(AllocCancReplaceReason_2.getString());
  FIX::AllocID AllocID_3("STRING_2113112557");
  msg.set(AllocID_3);
  AllocationReport_0.insert(AllocID_3.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_3(6);
  msg.set(AllocIntermedReqType_3);
  AllocationReport_0.insert(AllocIntermedReqType_3.getString());
  FIX::AllocLinkID AllocLinkID_2("STRING_1312920268");
  msg.set(AllocLinkID_2);
  AllocationReport_0.insert(AllocLinkID_2.getString());
  FIX::AllocLinkType AllocLinkType_2(0);
  msg.set(AllocLinkType_2);
  AllocationReport_0.insert(AllocLinkType_2.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_2(1);
  msg.set(AllocNoOrdersType_2);
  AllocationReport_0.insert(AllocNoOrdersType_2.getString());
  FIX::AllocRejCode AllocRejCode_1(4);
  msg.set(AllocRejCode_1);
  AllocationReport_0.insert(AllocRejCode_1.getString());
  FIX::AllocReportID AllocReportID_0("STRING_53091811");
  msg.set(AllocReportID_0);
  AllocationReport_0.insert(AllocReportID_0.getString());
  FIX::AllocReportRefID AllocReportRefID_0("STRING_1125352771");
  msg.set(AllocReportRefID_0);
  AllocationReport_0.insert(AllocReportRefID_0.getString());
  FIX::AllocReportType AllocReportType_0(3);
  msg.set(AllocReportType_0);
  AllocationReport_0.insert(AllocReportType_0.getString());
  FIX::AllocStatus AllocStatus_1(4);
  msg.set(AllocStatus_1);
  AllocationReport_0.insert(AllocStatus_1.getString());
  FIX::AllocTransType AllocTransType_2('3');
  msg.set(AllocTransType_2);
  AllocationReport_0.insert(AllocTransType_2.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_2(false);
  msg.set(AutoAcceptIndicator_2);
  AllocationReport_0.insert(AutoAcceptIndicator_2.getString());
  FIX::AvgParPx AvgParPx_2;
  AvgParPx_2.setString("2628385");
  msg.set(AvgParPx_2);
  AllocationReport_0.insert(AvgParPx_2.getString());
  FIX::AvgPx AvgPx_2;
  AvgPx_2.setString("20502474");
  msg.set(AvgPx_2);
  AllocationReport_0.insert(AvgPx_2.getString());
  FIX::AvgPxIndicator AvgPxIndicator_2(0);
  msg.set(AvgPxIndicator_2);
  AllocationReport_0.insert(AvgPxIndicator_2.getString());
  FIX::AvgPxPrecision AvgPxPrecision_2(224119701);
  msg.set(AvgPxPrecision_2);
  AllocationReport_0.insert(AvgPxPrecision_2.getString());
  FIX::BookingRefID BookingRefID_2("STRING_1149362995");
  msg.set(BookingRefID_2);
  AllocationReport_0.insert(BookingRefID_2.getString());
  FIX::BookingType BookingType_2(1);
  msg.set(BookingType_2);
  AllocationReport_0.insert(BookingType_2.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_3("LOCALMKTDATE_1418295534");
  msg.set(ClearingBusinessDate_3);
  AllocationReport_0.insert(ClearingBusinessDate_3.getString());
  FIX::Concession Concession_2;
  Concession_2.setString("1533566");
  msg.set(Concession_2);
  AllocationReport_0.insert(Concession_2.getString());
  FIX::Currency Currency_3("CHF");
  msg.set(Currency_3);
  AllocationReport_0.insert(Currency_3.getString());
  FIX::CustOrderCapacity CustOrderCapacity_2(1);
  msg.set(CustOrderCapacity_2);
  AllocationReport_0.insert(CustOrderCapacity_2.getString());
  FIX::EncodedText EncodedText_4("DATA_1420258607");
  msg.set(EncodedText_4);
  AllocationReport_0.insert(EncodedText_4.getString());
  FIX::EncodedTextLen EncodedTextLen_4(667927432);
  msg.set(EncodedTextLen_4);
  AllocationReport_0.insert(EncodedTextLen_4.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_2;
  EndAccruedInterestAmt_2.setString("19847816");
  msg.set(EndAccruedInterestAmt_2);
  AllocationReport_0.insert(EndAccruedInterestAmt_2.getString());
  FIX::EndCash EndCash_2;
  EndCash_2.setString("17115325");
  msg.set(EndCash_2);
  AllocationReport_0.insert(EndCash_2.getString());
  FIX::GrossTradeAmt GrossTradeAmt_2;
  GrossTradeAmt_2.setString("15739547");
  msg.set(GrossTradeAmt_2);
  AllocationReport_0.insert(GrossTradeAmt_2.getString());
  FIX::InterestAtMaturity InterestAtMaturity_2;
  InterestAtMaturity_2.setString("2908196");
  msg.set(InterestAtMaturity_2);
  AllocationReport_0.insert(InterestAtMaturity_2.getString());
  FIX::LastFragment LastFragment_2(true);
  msg.set(LastFragment_2);
  AllocationReport_0.insert(LastFragment_2.getString());
  FIX::LastMkt LastMkt_3("EXCHANGE_724283526");
  msg.set(LastMkt_3);
  AllocationReport_0.insert(LastMkt_3.getString());
  FIX::LegalConfirm LegalConfirm_2(false);
  msg.set(LegalConfirm_2);
  AllocationReport_0.insert(LegalConfirm_2.getString());
  FIX::MatchType MatchType_2("STRING_3");
  msg.set(MatchType_2);
  AllocationReport_0.insert(MatchType_2.getString());
  FIX::MessageEventSource MessageEventSource_2("STRING_2037203794");
  msg.set(MessageEventSource_2);
  AllocationReport_0.insert(MessageEventSource_2.getString());
  FIX::MultiLegReportingType MultiLegReportingType_2('1');
  msg.set(MultiLegReportingType_2);
  AllocationReport_0.insert(MultiLegReportingType_2.getString());
  FIX::NetMoney NetMoney_2;
  NetMoney_2.setString("5917463");
  msg.set(NetMoney_2);
  AllocationReport_0.insert(NetMoney_2.getString());
  FIX::NumDaysInterest NumDaysInterest_2(43021156);
  msg.set(NumDaysInterest_2);
  AllocationReport_0.insert(NumDaysInterest_2.getString());
  FIX::PositionEffect PositionEffect_2('F');
  msg.set(PositionEffect_2);
  AllocationReport_0.insert(PositionEffect_2.getString());
  FIX::PreviouslyReported PreviouslyReported_2(true);
  msg.set(PreviouslyReported_2);
  AllocationReport_0.insert(PreviouslyReported_2.getString());
  FIX::PriceType PriceType_2(2);
  msg.set(PriceType_2);
  AllocationReport_0.insert(PriceType_2.getString());
  FIX::QtyType QtyType_3(2);
  msg.set(QtyType_3);
  AllocationReport_0.insert(QtyType_3.getString());
  FIX::Quantity Quantity_3;
  Quantity_3.setString("311213");
  msg.set(Quantity_3);
  AllocationReport_0.insert(Quantity_3.getString());
  FIX::RefAllocID RefAllocID_2("STRING_1149256066");
  msg.set(RefAllocID_2);
  AllocationReport_0.insert(RefAllocID_2.getString());
  FIX::ReversalIndicator ReversalIndicator_2(true);
  msg.set(ReversalIndicator_2);
  AllocationReport_0.insert(ReversalIndicator_2.getString());
  FIX::RndPx RndPx_2;
  RndPx_2.setString("20813688");
  msg.set(RndPx_2);
  AllocationReport_0.insert(RndPx_2.getString());
  FIX::SecondaryAllocID SecondaryAllocID_3("STRING_320254179");
  msg.set(SecondaryAllocID_3);
  AllocationReport_0.insert(SecondaryAllocID_3.getString());
  FIX::SettlDate SettlDate_2("LOCALMKTDATE_1873367731");
  msg.set(SettlDate_2);
  AllocationReport_0.insert(SettlDate_2.getString());
  FIX::SettlType SettlType_2("STRING_2");
  msg.set(SettlType_2);
  AllocationReport_0.insert(SettlType_2.getString());
  FIX::Side Side_2('F');
  msg.set(Side_2);
  AllocationReport_0.insert(Side_2.getString());
  FIX::StartCash StartCash_2;
  StartCash_2.setString("11441796");
  msg.set(StartCash_2);
  AllocationReport_0.insert(StartCash_2.getString());
  FIX::Text Text_4("STRING_1236604771");
  msg.set(Text_4);
  AllocationReport_0.insert(Text_4.getString());
  FIX::TotNoAllocs TotNoAllocs_2(549078483);
  msg.set(TotNoAllocs_2);
  AllocationReport_0.insert(TotNoAllocs_2.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_2;
  TotalAccruedInterestAmt_2.setString("1164754");
  msg.set(TotalAccruedInterestAmt_2);
  AllocationReport_0.insert(TotalAccruedInterestAmt_2.getString());
  FIX::TotalTakedown TotalTakedown_2;
  TotalTakedown_2.setString("13686401");
  msg.set(TotalTakedown_2);
  AllocationReport_0.insert(TotalTakedown_2.getString());
  FIX::TradeDate TradeDate_4("LOCALMKTDATE_1969337090");
  msg.set(TradeDate_4);
  AllocationReport_0.insert(TradeDate_4.getString());
  FIX::TradeInputDevice TradeInputDevice_0("STRING_784402841");
  msg.set(TradeInputDevice_0);
  AllocationReport_0.insert(TradeInputDevice_0.getString());
  FIX::TradeInputSource TradeInputSource_2("STRING_1205938150");
  msg.set(TradeInputSource_2);
  AllocationReport_0.insert(TradeInputSource_2.getString());
  FIX::TradeOriginationDate TradeOriginationDate_2("LOCALMKTDATE_1533386027");
  msg.set(TradeOriginationDate_2);
  AllocationReport_0.insert(TradeOriginationDate_2.getString());
  FIX::TradingSessionID TradingSessionID_3("STRING_1");
  msg.set(TradingSessionID_3);
  AllocationReport_0.insert(TradingSessionID_3.getString());
  FIX::TradingSessionSubID TradingSessionSubID_3("STRING_4");
  msg.set(TradingSessionSubID_3);
  AllocationReport_0.insert(TradingSessionSubID_3.getString());
  FIX::TransactTime TransactTime_4(FIX::UTCTIMESTAMP(0, 8, 22, 2, 32011));
  msg.set(TransactTime_4);
  AllocationReport_0.insert(TransactTime_4.getString());
  FIX::TrdSubType TrdSubType_2(10);
  msg.set(TrdSubType_2);
  AllocationReport_0.insert(TrdSubType_2.getString());
  FIX::TrdType TrdType_2(28);
  msg.set(TrdType_2);
  AllocationReport_0.insert(TrdType_2.getString());
  all_values.push_back(AllocationReport_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_4;
    FIX::AllocAccount AllocAccount_6("STRING_1804668344");
    noAllocs_0_0.set(AllocAccount_6);
    AllocGrp_NoAllocs_4.insert(AllocAccount_6.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_4;
    AllocAccruedInterestAmt_4.setString("17428515");
    noAllocs_0_0.set(AllocAccruedInterestAmt_4);
    AllocGrp_NoAllocs_4.insert(AllocAccruedInterestAmt_4.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_6(1091639946);
    noAllocs_0_0.set(AllocAcctIDSource_6);
    AllocGrp_NoAllocs_4.insert(AllocAcctIDSource_6.getString());
    FIX::AllocAvgPx AllocAvgPx_4;
    AllocAvgPx_4.setString("8064407");
    noAllocs_0_0.set(AllocAvgPx_4);
    AllocGrp_NoAllocs_4.insert(AllocAvgPx_4.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_6("STRING_1244615951");
    noAllocs_0_0.set(AllocCustomerCapacity_6);
    AllocGrp_NoAllocs_4.insert(AllocCustomerCapacity_6.getString());
    FIX::AllocHandlInst AllocHandlInst_4(2);
    noAllocs_0_0.set(AllocHandlInst_4);
    AllocGrp_NoAllocs_4.insert(AllocHandlInst_4.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_4;
    AllocInterestAtMaturity_4.setString("11266949");
    noAllocs_0_0.set(AllocInterestAtMaturity_4);
    AllocGrp_NoAllocs_4.insert(AllocInterestAtMaturity_4.getString());
    FIX::AllocMethod AllocMethod_4(3);
    noAllocs_0_0.set(AllocMethod_4);
    AllocGrp_NoAllocs_4.insert(AllocMethod_4.getString());
    FIX::AllocNetMoney AllocNetMoney_4;
    AllocNetMoney_4.setString("21087732");
    noAllocs_0_0.set(AllocNetMoney_4);
    AllocGrp_NoAllocs_4.insert(AllocNetMoney_4.getString());
    FIX::AllocPositionEffect AllocPositionEffect_6('F');
    noAllocs_0_0.set(AllocPositionEffect_6);
    AllocGrp_NoAllocs_4.insert(AllocPositionEffect_6.getString());
    FIX::AllocPrice AllocPrice_6;
    AllocPrice_6.setString("21146796");
    noAllocs_0_0.set(AllocPrice_6);
    AllocGrp_NoAllocs_4.insert(AllocPrice_6.getString());
    FIX::AllocQty AllocQty_6;
    AllocQty_6.setString("11978943");
    noAllocs_0_0.set(AllocQty_6);
    AllocGrp_NoAllocs_4.insert(AllocQty_6.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_4;
    AllocSettlCurrAmt_4.setString("17560734");
    noAllocs_0_0.set(AllocSettlCurrAmt_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlCurrAmt_4.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_4("GBP");
    noAllocs_0_0.set(AllocSettlCurrency_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlCurrency_4.getString());
    FIX::AllocSettlInstType AllocSettlInstType_4(1);
    noAllocs_0_0.set(AllocSettlInstType_4);
    AllocGrp_NoAllocs_4.insert(AllocSettlInstType_4.getString());
    FIX::AllocText AllocText_6("STRING_868074255");
    noAllocs_0_0.set(AllocText_6);
    AllocGrp_NoAllocs_4.insert(AllocText_6.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_4("STRING_3");
    noAllocs_0_0.set(ClearingFeeIndicator_4);
    AllocGrp_NoAllocs_4.insert(ClearingFeeIndicator_4.getString());
    FIX::EncodedAllocText EncodedAllocText_6("DATA_963829276");
    noAllocs_0_0.set(EncodedAllocText_6);
    AllocGrp_NoAllocs_4.insert(EncodedAllocText_6.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_6(1078948233);
    noAllocs_0_0.set(EncodedAllocTextLen_6);
    AllocGrp_NoAllocs_4.insert(EncodedAllocTextLen_6.getString());
    FIX::IndividualAllocID IndividualAllocID_6("STRING_974263216");
    noAllocs_0_0.set(IndividualAllocID_6);
    AllocGrp_NoAllocs_4.insert(IndividualAllocID_6.getString());
    FIX::IndividualAllocType IndividualAllocType_6(1);
    noAllocs_0_0.set(IndividualAllocType_6);
    AllocGrp_NoAllocs_4.insert(IndividualAllocType_6.getString());
    FIX::MatchStatus MatchStatus_5('0');
    noAllocs_0_0.set(MatchStatus_5);
    AllocGrp_NoAllocs_4.insert(MatchStatus_5.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_4(true);
    noAllocs_0_0.set(NotifyBrokerOfCredit_4);
    AllocGrp_NoAllocs_4.insert(NotifyBrokerOfCredit_4.getString());
    FIX::ProcessCode ProcessCode_4('6');
    noAllocs_0_0.set(ProcessCode_4);
    AllocGrp_NoAllocs_4.insert(ProcessCode_4.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_6("STRING_691499739");
    noAllocs_0_0.set(SecondaryIndividualAllocID_6);
    AllocGrp_NoAllocs_4.insert(SecondaryIndividualAllocID_6.getString());
    FIX::SettlCurrAmt SettlCurrAmt_4;
    SettlCurrAmt_4.setString("5345224");
    noAllocs_0_0.set(SettlCurrAmt_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrAmt_4.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_4;
    SettlCurrFxRate_4.setString("508759");
    noAllocs_0_0.set(SettlCurrFxRate_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrFxRate_4.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_4('M');
    noAllocs_0_0.set(SettlCurrFxRateCalc_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrFxRateCalc_4.getString());
    FIX::SettlCurrency SettlCurrency_4("CAN");
    noAllocs_0_0.set(SettlCurrency_4);
    AllocGrp_NoAllocs_4.insert(SettlCurrency_4.getString());
    all_values.push_back(AllocGrp_NoAllocs_4);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_9;
      FIX::ClearingInstruction ClearingInstruction_9(3);
      noClearingInstructions_0_1_0.set(ClearingInstruction_9);
      ClrInstGrp_NoClearingInstructions_9.insert(ClearingInstruction_9.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_9);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_10;
      FIX::ClearingInstruction ClearingInstruction_10(6);
      noClearingInstructions_0_1_1.set(ClearingInstruction_10);
      ClrInstGrp_NoClearingInstructions_10.insert(ClearingInstruction_10.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_10);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_4;
    FIX::CommCurrency CommCurrency_4("EUR");
    noAllocs_0_0.set(CommCurrency_4);
    CommissionData_4.insert(CommCurrency_4.getString());
    FIX::CommType CommType_4('6');
    noAllocs_0_0.set(CommType_4);
    CommissionData_4.insert(CommType_4.getString());
    FIX::Commission Commission_4;
    Commission_4.setString("10022352");
    noAllocs_0_0.set(Commission_4);
    CommissionData_4.insert(Commission_4.getString());
    FIX::FundRenewWaiv FundRenewWaiv_4('N');
    noAllocs_0_0.set(FundRenewWaiv_4);
    CommissionData_4.insert(FundRenewWaiv_4.getString());
    all_values.push_back(CommissionData_4);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_8;
      FIX::MiscFeeAmt MiscFeeAmt_8;
      MiscFeeAmt_8.setString("617466");
      noMiscFees_0_1_0.set(MiscFeeAmt_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeAmt_8.getString());
      FIX::MiscFeeBasis MiscFeeBasis_8(0);
      noMiscFees_0_1_0.set(MiscFeeBasis_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeBasis_8.getString());
      FIX::MiscFeeCurr MiscFeeCurr_8("JPY");
      noMiscFees_0_1_0.set(MiscFeeCurr_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeCurr_8.getString());
      FIX::MiscFeeType MiscFeeType_8("STRING_9");
      noMiscFees_0_1_0.set(MiscFeeType_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeType_8.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_8);

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_9;
      FIX::MiscFeeAmt MiscFeeAmt_9;
      MiscFeeAmt_9.setString("5118272");
      noMiscFees_0_1_1.set(MiscFeeAmt_9);
      MiscFeesGrp_NoMiscFees_9.insert(MiscFeeAmt_9.getString());
      FIX::MiscFeeBasis MiscFeeBasis_9(2);
      noMiscFees_0_1_1.set(MiscFeeBasis_9);
      MiscFeesGrp_NoMiscFees_9.insert(MiscFeeBasis_9.getString());
      FIX::MiscFeeCurr MiscFeeCurr_9("CHF");
      noMiscFees_0_1_1.set(MiscFeeCurr_9);
      MiscFeesGrp_NoMiscFees_9.insert(MiscFeeCurr_9.getString());
      FIX::MiscFeeType MiscFeeType_9("STRING_3");
      noMiscFees_0_1_1.set(MiscFeeType_9);
      MiscFeesGrp_NoMiscFees_9.insert(MiscFeeType_9.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_9);

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_16;
      FIX::NestedPartyID NestedPartyID_16("STRING_963595842");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyID_16.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_16('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyIDSource_16.getString());
      FIX::NestedPartyRole NestedPartyRole_16(270993081);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyRole_16.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_16);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_27;
        FIX::NestedPartySubID NestedPartySubID_27("STRING_580365466");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_27);
        NstdPtysSubGrp_NoNestedPartySubIDs_27.insert(NestedPartySubID_27.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_27(962492820);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_27);
        NstdPtysSubGrp_NoNestedPartySubIDs_27.insert(NestedPartySubIDType_27.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_27);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_28;
        FIX::NestedPartySubID NestedPartySubID_28("STRING_2078104197");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_28);
        NstdPtysSubGrp_NoNestedPartySubIDs_28.insert(NestedPartySubID_28.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_28(631241464);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_28);
        NstdPtysSubGrp_NoNestedPartySubIDs_28.insert(NestedPartySubIDType_28.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_28);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_17;
      FIX::NestedPartyID NestedPartyID_17("STRING_374407718");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyID_17.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_17('8');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyIDSource_17.getString());
      FIX::NestedPartyRole NestedPartyRole_17(1742636037);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyRole_17.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_17);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_29;
        FIX::NestedPartySubID NestedPartySubID_29("STRING_1307917418");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_29);
        NstdPtysSubGrp_NoNestedPartySubIDs_29.insert(NestedPartySubID_29.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_29(1798186909);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_29);
        NstdPtysSubGrp_NoNestedPartySubIDs_29.insert(NestedPartySubIDType_29.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_29);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_18;
      FIX::NestedPartyID NestedPartyID_18("STRING_1466531317");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyID_18.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_18('8');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyIDSource_18.getString());
      FIX::NestedPartyRole NestedPartyRole_18(731779235);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyRole_18.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_18);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_30;
        FIX::NestedPartySubID NestedPartySubID_30("STRING_1445346851");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_30);
        NstdPtysSubGrp_NoNestedPartySubIDs_30.insert(NestedPartySubID_30.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_30(1774144812);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_30);
        NstdPtysSubGrp_NoNestedPartySubIDs_30.insert(NestedPartySubIDType_30.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_30);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_31;
        FIX::NestedPartySubID NestedPartySubID_31("STRING_383029588");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_31);
        NstdPtysSubGrp_NoNestedPartySubIDs_31.insert(NestedPartySubID_31.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_31(1966507590);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_31);
        NstdPtysSubGrp_NoNestedPartySubIDs_31.insert(NestedPartySubIDType_31.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_31);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_4;
    FIX::SettlDeliveryType SettlDeliveryType_4(3);
    noAllocs_0_0.set(SettlDeliveryType_4);
    SettlInstructionsData_4.insert(SettlDeliveryType_4.getString());
    FIX::StandInstDbID StandInstDbID_4("STRING_53366016");
    noAllocs_0_0.set(StandInstDbID_4);
    SettlInstructionsData_4.insert(StandInstDbID_4.getString());
    FIX::StandInstDbName StandInstDbName_4("STRING_423856094");
    noAllocs_0_0.set(StandInstDbName_4);
    SettlInstructionsData_4.insert(StandInstDbName_4.getString());
    FIX::StandInstDbType StandInstDbType_4(1);
    noAllocs_0_0.set(StandInstDbType_4);
    SettlInstructionsData_4.insert(StandInstDbType_4.getString());
    all_values.push_back(SettlInstructionsData_4);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_9;
      FIX::DlvyInstType DlvyInstType_9('S');
      noDlvyInst_0_1_0.set(DlvyInstType_9);
      DlvyInstGrp_NoDlvyInst_9.insert(DlvyInstType_9.getString());
      FIX::SettlInstSource SettlInstSource_9('2');
      noDlvyInst_0_1_0.set(SettlInstSource_9);
      DlvyInstGrp_NoDlvyInst_9.insert(SettlInstSource_9.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_9);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_17;
        FIX::SettlPartyID SettlPartyID_17("STRING_153649845");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_17);
        SettlParties_NoSettlPartyIDs_17.insert(SettlPartyID_17.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_17('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_17);
        SettlParties_NoSettlPartyIDs_17.insert(SettlPartyIDSource_17.getString());
        FIX::SettlPartyRole SettlPartyRole_17(1239147172);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_17);
        SettlParties_NoSettlPartyIDs_17.insert(SettlPartyRole_17.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_17);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_35;
          FIX::SettlPartySubID SettlPartySubID_35("STRING_580291279");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_35);
          SettlPtysSubGrp_NoSettlPartySubIDs_35.insert(SettlPartySubID_35.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_35(1819512638);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_35);
          SettlPtysSubGrp_NoSettlPartySubIDs_35.insert(SettlPartySubIDType_35.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_35);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_18;
        FIX::SettlPartyID SettlPartyID_18("STRING_1387135746");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_18);
        SettlParties_NoSettlPartyIDs_18.insert(SettlPartyID_18.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_18('5');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_18);
        SettlParties_NoSettlPartyIDs_18.insert(SettlPartyIDSource_18.getString());
        FIX::SettlPartyRole SettlPartyRole_18(303270454);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_18);
        SettlParties_NoSettlPartyIDs_18.insert(SettlPartyRole_18.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_18);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_36;
          FIX::SettlPartySubID SettlPartySubID_36("STRING_1332496851");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_36);
          SettlPtysSubGrp_NoSettlPartySubIDs_36.insert(SettlPartySubID_36.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_36(2045906492);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_36);
          SettlPtysSubGrp_NoSettlPartySubIDs_36.insert(SettlPartySubIDType_36.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_36);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_6;
    FIX::ExecID ExecID_6("STRING_492930621");
    noExecs_0_0.set(ExecID_6);
    ExecAllocGrp_NoExecs_6.insert(ExecID_6.getString());
    FIX::FirmTradeID FirmTradeID_6("STRING_1696609753");
    noExecs_0_0.set(FirmTradeID_6);
    ExecAllocGrp_NoExecs_6.insert(FirmTradeID_6.getString());
    FIX::LastCapacity LastCapacity_6('3');
    noExecs_0_0.set(LastCapacity_6);
    ExecAllocGrp_NoExecs_6.insert(LastCapacity_6.getString());
    FIX::LastParPx LastParPx_6;
    LastParPx_6.setString("13843127");
    noExecs_0_0.set(LastParPx_6);
    ExecAllocGrp_NoExecs_6.insert(LastParPx_6.getString());
    FIX::LastPx LastPx_6;
    LastPx_6.setString("2809053");
    noExecs_0_0.set(LastPx_6);
    ExecAllocGrp_NoExecs_6.insert(LastPx_6.getString());
    FIX::LastQty LastQty_6;
    LastQty_6.setString("8453814");
    noExecs_0_0.set(LastQty_6);
    ExecAllocGrp_NoExecs_6.insert(LastQty_6.getString());
    FIX::SecondaryExecID SecondaryExecID_6("STRING_682175942");
    noExecs_0_0.set(SecondaryExecID_6);
    ExecAllocGrp_NoExecs_6.insert(SecondaryExecID_6.getString());
    FIX::TradeID TradeID_6("STRING_2055050152");
    noExecs_0_0.set(TradeID_6);
    ExecAllocGrp_NoExecs_6.insert(TradeID_6.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_6);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_7;
    FIX::ExecID ExecID_7("STRING_1228411002");
    noExecs_0_1.set(ExecID_7);
    ExecAllocGrp_NoExecs_7.insert(ExecID_7.getString());
    FIX::FirmTradeID FirmTradeID_7("STRING_501199884");
    noExecs_0_1.set(FirmTradeID_7);
    ExecAllocGrp_NoExecs_7.insert(FirmTradeID_7.getString());
    FIX::LastCapacity LastCapacity_7('1');
    noExecs_0_1.set(LastCapacity_7);
    ExecAllocGrp_NoExecs_7.insert(LastCapacity_7.getString());
    FIX::LastParPx LastParPx_7;
    LastParPx_7.setString("12817770");
    noExecs_0_1.set(LastParPx_7);
    ExecAllocGrp_NoExecs_7.insert(LastParPx_7.getString());
    FIX::LastPx LastPx_7;
    LastPx_7.setString("9250559");
    noExecs_0_1.set(LastPx_7);
    ExecAllocGrp_NoExecs_7.insert(LastPx_7.getString());
    FIX::LastQty LastQty_7;
    LastQty_7.setString("20057523");
    noExecs_0_1.set(LastQty_7);
    ExecAllocGrp_NoExecs_7.insert(LastQty_7.getString());
    FIX::SecondaryExecID SecondaryExecID_7("STRING_435922711");
    noExecs_0_1.set(SecondaryExecID_7);
    ExecAllocGrp_NoExecs_7.insert(SecondaryExecID_7.getString());
    FIX::TradeID TradeID_7("STRING_674334831");
    noExecs_0_1.set(TradeID_7);
    ExecAllocGrp_NoExecs_7.insert(TradeID_7.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_7);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_2;
  FIX::AgreementCurrency AgreementCurrency_2("CHF");
  msg.set(AgreementCurrency_2);
  FinancingDetails_2.insert(AgreementCurrency_2.getString());
  FIX::AgreementDate AgreementDate_2("LOCALMKTDATE_827984676");
  msg.set(AgreementDate_2);
  FinancingDetails_2.insert(AgreementDate_2.getString());
  FIX::AgreementDesc AgreementDesc_2("STRING_1263059108");
  msg.set(AgreementDesc_2);
  FinancingDetails_2.insert(AgreementDesc_2.getString());
  FIX::AgreementID AgreementID_2("STRING_893824529");
  msg.set(AgreementID_2);
  FinancingDetails_2.insert(AgreementID_2.getString());
  FIX::DeliveryType DeliveryType_2(2);
  msg.set(DeliveryType_2);
  FinancingDetails_2.insert(DeliveryType_2.getString());
  FIX::EndDate EndDate_2("LOCALMKTDATE_1843350387");
  msg.set(EndDate_2);
  FinancingDetails_2.insert(EndDate_2.getString());
  FIX::MarginRatio MarginRatio_2;
  MarginRatio_2.setString("35.190000");
  msg.set(MarginRatio_2);
  FinancingDetails_2.insert(MarginRatio_2.getString());
  FIX::StartDate StartDate_2("LOCALMKTDATE_492279701");
  msg.set(StartDate_2);
  FinancingDetails_2.insert(StartDate_2.getString());
  FIX::TerminationType TerminationType_2(4);
  msg.set(TerminationType_2);
  FinancingDetails_2.insert(TerminationType_2.getString());
  all_values.push_back(FinancingDetails_2);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_7;
    FIX::EncodedLegIssuer EncodedLegIssuer_7("DATA_106339518");
    noLegs_0_0.set(EncodedLegIssuer_7);
    InstrumentLeg_7.insert(EncodedLegIssuer_7.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_7(1539275418);
    noLegs_0_0.set(EncodedLegIssuerLen_7);
    InstrumentLeg_7.insert(EncodedLegIssuerLen_7.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_7("DATA_767546818");
    noLegs_0_0.set(EncodedLegSecurityDesc_7);
    InstrumentLeg_7.insert(EncodedLegSecurityDesc_7.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_7(1311390295);
    noLegs_0_0.set(EncodedLegSecurityDescLen_7);
    InstrumentLeg_7.insert(EncodedLegSecurityDescLen_7.getString());
    FIX::LegCFICode LegCFICode_7("STRING_2032206039");
    noLegs_0_0.set(LegCFICode_7);
    InstrumentLeg_7.insert(LegCFICode_7.getString());
    FIX::LegContractMultiplier LegContractMultiplier_7;
    LegContractMultiplier_7.setString("3166729");
    noLegs_0_0.set(LegContractMultiplier_7);
    InstrumentLeg_7.insert(LegContractMultiplier_7.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_7(1835488742);
    noLegs_0_0.set(LegContractMultiplierUnit_7);
    InstrumentLeg_7.insert(LegContractMultiplierUnit_7.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_7("MONTHYEAR_1269035130");
    noLegs_0_0.set(LegContractSettlMonth_7);
    InstrumentLeg_7.insert(LegContractSettlMonth_7.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_7("COUNTRY_597578264");
    noLegs_0_0.set(LegCountryOfIssue_7);
    InstrumentLeg_7.insert(LegCountryOfIssue_7.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_7("LOCALMKTDATE_533386507");
    noLegs_0_0.set(LegCouponPaymentDate_7);
    InstrumentLeg_7.insert(LegCouponPaymentDate_7.getString());
    FIX::LegCouponRate LegCouponRate_7;
    LegCouponRate_7.setString("10.730000");
    noLegs_0_0.set(LegCouponRate_7);
    InstrumentLeg_7.insert(LegCouponRate_7.getString());
    FIX::LegCreditRating LegCreditRating_7("STRING_505144768");
    noLegs_0_0.set(LegCreditRating_7);
    InstrumentLeg_7.insert(LegCreditRating_7.getString());
    FIX::LegCurrency LegCurrency_7("EUR");
    noLegs_0_0.set(LegCurrency_7);
    InstrumentLeg_7.insert(LegCurrency_7.getString());
    FIX::LegDatedDate LegDatedDate_7("LOCALMKTDATE_132148740");
    noLegs_0_0.set(LegDatedDate_7);
    InstrumentLeg_7.insert(LegDatedDate_7.getString());
    FIX::LegExerciseStyle LegExerciseStyle_7(896090880);
    noLegs_0_0.set(LegExerciseStyle_7);
    InstrumentLeg_7.insert(LegExerciseStyle_7.getString());
    FIX::LegFactor LegFactor_7;
    LegFactor_7.setString("12299832");
    noLegs_0_0.set(LegFactor_7);
    InstrumentLeg_7.insert(LegFactor_7.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_7(2137901041);
    noLegs_0_0.set(LegFlowScheduleType_7);
    InstrumentLeg_7.insert(LegFlowScheduleType_7.getString());
    FIX::LegInstrRegistry LegInstrRegistry_7("STRING_1332013591");
    noLegs_0_0.set(LegInstrRegistry_7);
    InstrumentLeg_7.insert(LegInstrRegistry_7.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_7("LOCALMKTDATE_1904318119");
    noLegs_0_0.set(LegInterestAccrualDate_7);
    InstrumentLeg_7.insert(LegInterestAccrualDate_7.getString());
    FIX::LegIssueDate LegIssueDate_7("LOCALMKTDATE_69283353");
    noLegs_0_0.set(LegIssueDate_7);
    InstrumentLeg_7.insert(LegIssueDate_7.getString());
    FIX::LegIssuer LegIssuer_7("STRING_986690948");
    noLegs_0_0.set(LegIssuer_7);
    InstrumentLeg_7.insert(LegIssuer_7.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_7("STRING_584819148");
    noLegs_0_0.set(LegLocaleOfIssue_7);
    InstrumentLeg_7.insert(LegLocaleOfIssue_7.getString());
    FIX::LegMaturityDate LegMaturityDate_7("LOCALMKTDATE_1332342461");
    noLegs_0_0.set(LegMaturityDate_7);
    InstrumentLeg_7.insert(LegMaturityDate_7.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_7("MONTHYEAR_1880515477");
    noLegs_0_0.set(LegMaturityMonthYear_7);
    InstrumentLeg_7.insert(LegMaturityMonthYear_7.getString());
    FIX::LegMaturityTime LegMaturityTime_7("TZTIMEONLY_1837446750");
    noLegs_0_0.set(LegMaturityTime_7);
    InstrumentLeg_7.insert(LegMaturityTime_7.getString());
    FIX::LegOptAttribute LegOptAttribute_7('1');
    noLegs_0_0.set(LegOptAttribute_7);
    InstrumentLeg_7.insert(LegOptAttribute_7.getString());
    FIX::LegOptionRatio LegOptionRatio_7;
    LegOptionRatio_7.setString("2988853");
    noLegs_0_0.set(LegOptionRatio_7);
    InstrumentLeg_7.insert(LegOptionRatio_7.getString());
    FIX::LegPool LegPool_7("STRING_182242803");
    noLegs_0_0.set(LegPool_7);
    InstrumentLeg_7.insert(LegPool_7.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_7("STRING_1234987767");
    noLegs_0_0.set(LegPriceUnitOfMeasure_7);
    InstrumentLeg_7.insert(LegPriceUnitOfMeasure_7.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_7;
    LegPriceUnitOfMeasureQty_7.setString("11680093");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_7);
    InstrumentLeg_7.insert(LegPriceUnitOfMeasureQty_7.getString());
    FIX::LegProduct LegProduct_7(288582321);
    noLegs_0_0.set(LegProduct_7);
    InstrumentLeg_7.insert(LegProduct_7.getString());
    FIX::LegPutOrCall LegPutOrCall_7(626779537);
    noLegs_0_0.set(LegPutOrCall_7);
    InstrumentLeg_7.insert(LegPutOrCall_7.getString());
    FIX::LegRatioQty LegRatioQty_7;
    LegRatioQty_7.setString("19355561");
    noLegs_0_0.set(LegRatioQty_7);
    InstrumentLeg_7.insert(LegRatioQty_7.getString());
    FIX::LegRedemptionDate LegRedemptionDate_7("LOCALMKTDATE_1599972617");
    noLegs_0_0.set(LegRedemptionDate_7);
    InstrumentLeg_7.insert(LegRedemptionDate_7.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_7("STRING_511501928");
    noLegs_0_0.set(LegRepoCollateralSecurityType_7);
    InstrumentLeg_7.insert(LegRepoCollateralSecurityType_7.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_7;
    LegRepurchaseRate_7.setString("54.160000");
    noLegs_0_0.set(LegRepurchaseRate_7);
    InstrumentLeg_7.insert(LegRepurchaseRate_7.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_7(1287977711);
    noLegs_0_0.set(LegRepurchaseTerm_7);
    InstrumentLeg_7.insert(LegRepurchaseTerm_7.getString());
    FIX::LegSecurityDesc LegSecurityDesc_7("STRING_1780537059");
    noLegs_0_0.set(LegSecurityDesc_7);
    InstrumentLeg_7.insert(LegSecurityDesc_7.getString());
    FIX::LegSecurityExchange LegSecurityExchange_7("EXCHANGE_702323680");
    noLegs_0_0.set(LegSecurityExchange_7);
    InstrumentLeg_7.insert(LegSecurityExchange_7.getString());
    FIX::LegSecurityID LegSecurityID_7("STRING_1821364218");
    noLegs_0_0.set(LegSecurityID_7);
    InstrumentLeg_7.insert(LegSecurityID_7.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_7("STRING_1584264484");
    noLegs_0_0.set(LegSecurityIDSource_7);
    InstrumentLeg_7.insert(LegSecurityIDSource_7.getString());
    FIX::LegSecuritySubType LegSecuritySubType_7("STRING_1207468449");
    noLegs_0_0.set(LegSecuritySubType_7);
    InstrumentLeg_7.insert(LegSecuritySubType_7.getString());
    FIX::LegSecurityType LegSecurityType_7("STRING_1435678080");
    noLegs_0_0.set(LegSecurityType_7);
    InstrumentLeg_7.insert(LegSecurityType_7.getString());
    FIX::LegSide LegSide_7('1');
    noLegs_0_0.set(LegSide_7);
    InstrumentLeg_7.insert(LegSide_7.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_7("STRING_1339617189");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_7);
    InstrumentLeg_7.insert(LegStateOrProvinceOfIssue_7.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_7("EUR");
    noLegs_0_0.set(LegStrikeCurrency_7);
    InstrumentLeg_7.insert(LegStrikeCurrency_7.getString());
    FIX::LegStrikePrice LegStrikePrice_7;
    LegStrikePrice_7.setString("13300345");
    noLegs_0_0.set(LegStrikePrice_7);
    InstrumentLeg_7.insert(LegStrikePrice_7.getString());
    FIX::LegSymbol LegSymbol_7("STRING_1516298903");
    noLegs_0_0.set(LegSymbol_7);
    InstrumentLeg_7.insert(LegSymbol_7.getString());
    FIX::LegSymbolSfx LegSymbolSfx_7("STRING_728525905");
    noLegs_0_0.set(LegSymbolSfx_7);
    InstrumentLeg_7.insert(LegSymbolSfx_7.getString());
    FIX::LegTimeUnit LegTimeUnit_7("STRING_1399317936");
    noLegs_0_0.set(LegTimeUnit_7);
    InstrumentLeg_7.insert(LegTimeUnit_7.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_7("STRING_355506204");
    noLegs_0_0.set(LegUnitOfMeasure_7);
    InstrumentLeg_7.insert(LegUnitOfMeasure_7.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_7;
    LegUnitOfMeasureQty_7.setString("13133450");
    noLegs_0_0.set(LegUnitOfMeasureQty_7);
    InstrumentLeg_7.insert(LegUnitOfMeasureQty_7.getString());
    all_values.push_back(InstrumentLeg_7);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_10;
      FIX::LegSecurityAltID LegSecurityAltID_10("STRING_88538033");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_10);
      LegSecAltIDGrp_NoLegSecurityAltID_10.insert(LegSecurityAltID_10.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_10("STRING_1003308155");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_10);
      LegSecAltIDGrp_NoLegSecurityAltID_10.insert(LegSecurityAltIDSource_10.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_10);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_8;
    FIX::EncodedLegIssuer EncodedLegIssuer_8("DATA_1612385949");
    noLegs_0_1.set(EncodedLegIssuer_8);
    InstrumentLeg_8.insert(EncodedLegIssuer_8.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_8(387423382);
    noLegs_0_1.set(EncodedLegIssuerLen_8);
    InstrumentLeg_8.insert(EncodedLegIssuerLen_8.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_8("DATA_1185550959");
    noLegs_0_1.set(EncodedLegSecurityDesc_8);
    InstrumentLeg_8.insert(EncodedLegSecurityDesc_8.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_8(699890068);
    noLegs_0_1.set(EncodedLegSecurityDescLen_8);
    InstrumentLeg_8.insert(EncodedLegSecurityDescLen_8.getString());
    FIX::LegCFICode LegCFICode_8("STRING_1555432705");
    noLegs_0_1.set(LegCFICode_8);
    InstrumentLeg_8.insert(LegCFICode_8.getString());
    FIX::LegContractMultiplier LegContractMultiplier_8;
    LegContractMultiplier_8.setString("14741332");
    noLegs_0_1.set(LegContractMultiplier_8);
    InstrumentLeg_8.insert(LegContractMultiplier_8.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_8(1326669605);
    noLegs_0_1.set(LegContractMultiplierUnit_8);
    InstrumentLeg_8.insert(LegContractMultiplierUnit_8.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_8("MONTHYEAR_1343505198");
    noLegs_0_1.set(LegContractSettlMonth_8);
    InstrumentLeg_8.insert(LegContractSettlMonth_8.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_8("COUNTRY_926622249");
    noLegs_0_1.set(LegCountryOfIssue_8);
    InstrumentLeg_8.insert(LegCountryOfIssue_8.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_8("LOCALMKTDATE_1838171533");
    noLegs_0_1.set(LegCouponPaymentDate_8);
    InstrumentLeg_8.insert(LegCouponPaymentDate_8.getString());
    FIX::LegCouponRate LegCouponRate_8;
    LegCouponRate_8.setString("6.150000");
    noLegs_0_1.set(LegCouponRate_8);
    InstrumentLeg_8.insert(LegCouponRate_8.getString());
    FIX::LegCreditRating LegCreditRating_8("STRING_67116312");
    noLegs_0_1.set(LegCreditRating_8);
    InstrumentLeg_8.insert(LegCreditRating_8.getString());
    FIX::LegCurrency LegCurrency_8("CAN");
    noLegs_0_1.set(LegCurrency_8);
    InstrumentLeg_8.insert(LegCurrency_8.getString());
    FIX::LegDatedDate LegDatedDate_8("LOCALMKTDATE_1888480531");
    noLegs_0_1.set(LegDatedDate_8);
    InstrumentLeg_8.insert(LegDatedDate_8.getString());
    FIX::LegExerciseStyle LegExerciseStyle_8(908005780);
    noLegs_0_1.set(LegExerciseStyle_8);
    InstrumentLeg_8.insert(LegExerciseStyle_8.getString());
    FIX::LegFactor LegFactor_8;
    LegFactor_8.setString("12105590");
    noLegs_0_1.set(LegFactor_8);
    InstrumentLeg_8.insert(LegFactor_8.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_8(1176674963);
    noLegs_0_1.set(LegFlowScheduleType_8);
    InstrumentLeg_8.insert(LegFlowScheduleType_8.getString());
    FIX::LegInstrRegistry LegInstrRegistry_8("STRING_649713926");
    noLegs_0_1.set(LegInstrRegistry_8);
    InstrumentLeg_8.insert(LegInstrRegistry_8.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_8("LOCALMKTDATE_402692638");
    noLegs_0_1.set(LegInterestAccrualDate_8);
    InstrumentLeg_8.insert(LegInterestAccrualDate_8.getString());
    FIX::LegIssueDate LegIssueDate_8("LOCALMKTDATE_1360960275");
    noLegs_0_1.set(LegIssueDate_8);
    InstrumentLeg_8.insert(LegIssueDate_8.getString());
    FIX::LegIssuer LegIssuer_8("STRING_1621405359");
    noLegs_0_1.set(LegIssuer_8);
    InstrumentLeg_8.insert(LegIssuer_8.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_8("STRING_1732727221");
    noLegs_0_1.set(LegLocaleOfIssue_8);
    InstrumentLeg_8.insert(LegLocaleOfIssue_8.getString());
    FIX::LegMaturityDate LegMaturityDate_8("LOCALMKTDATE_729775530");
    noLegs_0_1.set(LegMaturityDate_8);
    InstrumentLeg_8.insert(LegMaturityDate_8.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_8("MONTHYEAR_202447616");
    noLegs_0_1.set(LegMaturityMonthYear_8);
    InstrumentLeg_8.insert(LegMaturityMonthYear_8.getString());
    FIX::LegMaturityTime LegMaturityTime_8("TZTIMEONLY_984561509");
    noLegs_0_1.set(LegMaturityTime_8);
    InstrumentLeg_8.insert(LegMaturityTime_8.getString());
    FIX::LegOptAttribute LegOptAttribute_8('1');
    noLegs_0_1.set(LegOptAttribute_8);
    InstrumentLeg_8.insert(LegOptAttribute_8.getString());
    FIX::LegOptionRatio LegOptionRatio_8;
    LegOptionRatio_8.setString("15157926");
    noLegs_0_1.set(LegOptionRatio_8);
    InstrumentLeg_8.insert(LegOptionRatio_8.getString());
    FIX::LegPool LegPool_8("STRING_1568738258");
    noLegs_0_1.set(LegPool_8);
    InstrumentLeg_8.insert(LegPool_8.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_8("STRING_1173819768");
    noLegs_0_1.set(LegPriceUnitOfMeasure_8);
    InstrumentLeg_8.insert(LegPriceUnitOfMeasure_8.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_8;
    LegPriceUnitOfMeasureQty_8.setString("3716171");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_8);
    InstrumentLeg_8.insert(LegPriceUnitOfMeasureQty_8.getString());
    FIX::LegProduct LegProduct_8(1033640559);
    noLegs_0_1.set(LegProduct_8);
    InstrumentLeg_8.insert(LegProduct_8.getString());
    FIX::LegPutOrCall LegPutOrCall_8(1561243150);
    noLegs_0_1.set(LegPutOrCall_8);
    InstrumentLeg_8.insert(LegPutOrCall_8.getString());
    FIX::LegRatioQty LegRatioQty_8;
    LegRatioQty_8.setString("15571681");
    noLegs_0_1.set(LegRatioQty_8);
    InstrumentLeg_8.insert(LegRatioQty_8.getString());
    FIX::LegRedemptionDate LegRedemptionDate_8("LOCALMKTDATE_1733530627");
    noLegs_0_1.set(LegRedemptionDate_8);
    InstrumentLeg_8.insert(LegRedemptionDate_8.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_8("STRING_969192208");
    noLegs_0_1.set(LegRepoCollateralSecurityType_8);
    InstrumentLeg_8.insert(LegRepoCollateralSecurityType_8.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_8;
    LegRepurchaseRate_8.setString("77.680000");
    noLegs_0_1.set(LegRepurchaseRate_8);
    InstrumentLeg_8.insert(LegRepurchaseRate_8.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_8(912716584);
    noLegs_0_1.set(LegRepurchaseTerm_8);
    InstrumentLeg_8.insert(LegRepurchaseTerm_8.getString());
    FIX::LegSecurityDesc LegSecurityDesc_8("STRING_165213758");
    noLegs_0_1.set(LegSecurityDesc_8);
    InstrumentLeg_8.insert(LegSecurityDesc_8.getString());
    FIX::LegSecurityExchange LegSecurityExchange_8("EXCHANGE_1810440018");
    noLegs_0_1.set(LegSecurityExchange_8);
    InstrumentLeg_8.insert(LegSecurityExchange_8.getString());
    FIX::LegSecurityID LegSecurityID_8("STRING_603404469");
    noLegs_0_1.set(LegSecurityID_8);
    InstrumentLeg_8.insert(LegSecurityID_8.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_8("STRING_1613464373");
    noLegs_0_1.set(LegSecurityIDSource_8);
    InstrumentLeg_8.insert(LegSecurityIDSource_8.getString());
    FIX::LegSecuritySubType LegSecuritySubType_8("STRING_1877556330");
    noLegs_0_1.set(LegSecuritySubType_8);
    InstrumentLeg_8.insert(LegSecuritySubType_8.getString());
    FIX::LegSecurityType LegSecurityType_8("STRING_2074629414");
    noLegs_0_1.set(LegSecurityType_8);
    InstrumentLeg_8.insert(LegSecurityType_8.getString());
    FIX::LegSide LegSide_8('1');
    noLegs_0_1.set(LegSide_8);
    InstrumentLeg_8.insert(LegSide_8.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_8("STRING_1618553213");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_8);
    InstrumentLeg_8.insert(LegStateOrProvinceOfIssue_8.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_8("CAN");
    noLegs_0_1.set(LegStrikeCurrency_8);
    InstrumentLeg_8.insert(LegStrikeCurrency_8.getString());
    FIX::LegStrikePrice LegStrikePrice_8;
    LegStrikePrice_8.setString("6477445");
    noLegs_0_1.set(LegStrikePrice_8);
    InstrumentLeg_8.insert(LegStrikePrice_8.getString());
    FIX::LegSymbol LegSymbol_8("STRING_1484865472");
    noLegs_0_1.set(LegSymbol_8);
    InstrumentLeg_8.insert(LegSymbol_8.getString());
    FIX::LegSymbolSfx LegSymbolSfx_8("STRING_1082323107");
    noLegs_0_1.set(LegSymbolSfx_8);
    InstrumentLeg_8.insert(LegSymbolSfx_8.getString());
    FIX::LegTimeUnit LegTimeUnit_8("STRING_2008704803");
    noLegs_0_1.set(LegTimeUnit_8);
    InstrumentLeg_8.insert(LegTimeUnit_8.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_8("STRING_958787184");
    noLegs_0_1.set(LegUnitOfMeasure_8);
    InstrumentLeg_8.insert(LegUnitOfMeasure_8.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_8;
    LegUnitOfMeasureQty_8.setString("6675666");
    noLegs_0_1.set(LegUnitOfMeasureQty_8);
    InstrumentLeg_8.insert(LegUnitOfMeasureQty_8.getString());
    all_values.push_back(InstrumentLeg_8);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_11;
      FIX::LegSecurityAltID LegSecurityAltID_11("STRING_1161234800");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_11);
      LegSecAltIDGrp_NoLegSecurityAltID_11.insert(LegSecurityAltID_11.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_11("STRING_1652128189");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_11);
      LegSecAltIDGrp_NoLegSecurityAltID_11.insert(LegSecurityAltIDSource_11.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_11);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_12;
      FIX::LegSecurityAltID LegSecurityAltID_12("STRING_1676278420");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_12);
      LegSecAltIDGrp_NoLegSecurityAltID_12.insert(LegSecurityAltID_12.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_12("STRING_529543822");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_12);
      LegSecAltIDGrp_NoLegSecurityAltID_12.insert(LegSecurityAltIDSource_12.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_12);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_5;
  FIX::AttachmentPoint AttachmentPoint_5;
  AttachmentPoint_5.setString("27.990000");
  msg.set(AttachmentPoint_5);
  Instrument_5.insert(AttachmentPoint_5.getString());
  FIX::CFICode CFICode_5("STRING_702614540");
  msg.set(CFICode_5);
  Instrument_5.insert(CFICode_5.getString());
  FIX::CPProgram CPProgram_5(99);
  msg.set(CPProgram_5);
  Instrument_5.insert(CPProgram_5.getString());
  FIX::CPRegType CPRegType_5("STRING_2107023358");
  msg.set(CPRegType_5);
  Instrument_5.insert(CPRegType_5.getString());
  FIX::CapPrice CapPrice_5;
  CapPrice_5.setString("1163740");
  msg.set(CapPrice_5);
  Instrument_5.insert(CapPrice_5.getString());
  FIX::ContractMultiplier ContractMultiplier_5;
  ContractMultiplier_5.setString("3108454");
  msg.set(ContractMultiplier_5);
  Instrument_5.insert(ContractMultiplier_5.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_5(0);
  msg.set(ContractMultiplierUnit_5);
  Instrument_5.insert(ContractMultiplierUnit_5.getString());
  FIX::ContractSettlMonth ContractSettlMonth_5("MONTHYEAR_1085566251");
  msg.set(ContractSettlMonth_5);
  Instrument_5.insert(ContractSettlMonth_5.getString());
  FIX::CountryOfIssue CountryOfIssue_5("COUNTRY_1194663255");
  msg.set(CountryOfIssue_5);
  Instrument_5.insert(CountryOfIssue_5.getString());
  FIX::CouponPaymentDate CouponPaymentDate_5("LOCALMKTDATE_458303273");
  msg.set(CouponPaymentDate_5);
  Instrument_5.insert(CouponPaymentDate_5.getString());
  FIX::CouponRate CouponRate_5;
  CouponRate_5.setString("0.090000");
  msg.set(CouponRate_5);
  Instrument_5.insert(CouponRate_5.getString());
  FIX::CreditRating CreditRating_5("STRING_857619625");
  msg.set(CreditRating_5);
  Instrument_5.insert(CreditRating_5.getString());
  FIX::DatedDate DatedDate_5("LOCALMKTDATE_1061707743");
  msg.set(DatedDate_5);
  Instrument_5.insert(DatedDate_5.getString());
  FIX::DetachmentPoint DetachmentPoint_5;
  DetachmentPoint_5.setString("7.350000");
  msg.set(DetachmentPoint_5);
  Instrument_5.insert(DetachmentPoint_5.getString());
  FIX::EncodedIssuer EncodedIssuer_5("DATA_587692308");
  msg.set(EncodedIssuer_5);
  Instrument_5.insert(EncodedIssuer_5.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_5(988853509);
  msg.set(EncodedIssuerLen_5);
  Instrument_5.insert(EncodedIssuerLen_5.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_5("DATA_185832108");
  msg.set(EncodedSecurityDesc_5);
  Instrument_5.insert(EncodedSecurityDesc_5.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_5(58761873);
  msg.set(EncodedSecurityDescLen_5);
  Instrument_5.insert(EncodedSecurityDescLen_5.getString());
  FIX::ExerciseStyle ExerciseStyle_5(0);
  msg.set(ExerciseStyle_5);
  Instrument_5.insert(ExerciseStyle_5.getString());
  FIX::Factor Factor_5;
  Factor_5.setString("8654625");
  msg.set(Factor_5);
  Instrument_5.insert(Factor_5.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_5(true);
  msg.set(FlexProductEligibilityIndicator_5);
  Instrument_5.insert(FlexProductEligibilityIndicator_5.getString());
  FIX::FlexibleIndicator FlexibleIndicator_5(true);
  msg.set(FlexibleIndicator_5);
  Instrument_5.insert(FlexibleIndicator_5.getString());
  FIX::FloorPrice FloorPrice_5;
  FloorPrice_5.setString("19477856");
  msg.set(FloorPrice_5);
  Instrument_5.insert(FloorPrice_5.getString());
  FIX::FlowScheduleType FlowScheduleType_5(2);
  msg.set(FlowScheduleType_5);
  Instrument_5.insert(FlowScheduleType_5.getString());
  FIX::InstrRegistry InstrRegistry_5("STRING_2120174064");
  msg.set(InstrRegistry_5);
  Instrument_5.insert(InstrRegistry_5.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_5('4');
  msg.set(InstrmtAssignmentMethod_5);
  Instrument_5.insert(InstrmtAssignmentMethod_5.getString());
  FIX::InterestAccrualDate InterestAccrualDate_5("LOCALMKTDATE_1158724243");
  msg.set(InterestAccrualDate_5);
  Instrument_5.insert(InterestAccrualDate_5.getString());
  FIX::IssueDate IssueDate_5("LOCALMKTDATE_1133925216");
  msg.set(IssueDate_5);
  Instrument_5.insert(IssueDate_5.getString());
  FIX::Issuer Issuer_5("STRING_2119996907");
  msg.set(Issuer_5);
  Instrument_5.insert(Issuer_5.getString());
  FIX::ListMethod ListMethod_5(0);
  msg.set(ListMethod_5);
  Instrument_5.insert(ListMethod_5.getString());
  FIX::LocaleOfIssue LocaleOfIssue_5("STRING_1663469038");
  msg.set(LocaleOfIssue_5);
  Instrument_5.insert(LocaleOfIssue_5.getString());
  FIX::MaturityDate MaturityDate_5("LOCALMKTDATE_1045896058");
  msg.set(MaturityDate_5);
  Instrument_5.insert(MaturityDate_5.getString());
  FIX::MaturityMonthYear MaturityMonthYear_5("MONTHYEAR_1390133556");
  msg.set(MaturityMonthYear_5);
  Instrument_5.insert(MaturityMonthYear_5.getString());
  FIX::MaturityTime MaturityTime_5("TZTIMEONLY_417146389");
  msg.set(MaturityTime_5);
  Instrument_5.insert(MaturityTime_5.getString());
  FIX::MinPriceIncrement MinPriceIncrement_5;
  MinPriceIncrement_5.setString("10054357");
  msg.set(MinPriceIncrement_5);
  Instrument_5.insert(MinPriceIncrement_5.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_5;
  MinPriceIncrementAmount_5.setString("15065075");
  msg.set(MinPriceIncrementAmount_5);
  Instrument_5.insert(MinPriceIncrementAmount_5.getString());
  FIX::NTPositionLimit NTPositionLimit_5(727991876);
  msg.set(NTPositionLimit_5);
  Instrument_5.insert(NTPositionLimit_5.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_5;
  NotionalPercentageOutstanding_5.setString("24.580000");
  msg.set(NotionalPercentageOutstanding_5);
  Instrument_5.insert(NotionalPercentageOutstanding_5.getString());
  FIX::OptAttribute OptAttribute_5('4');
  msg.set(OptAttribute_5);
  Instrument_5.insert(OptAttribute_5.getString());
  FIX::OptPayoutAmount OptPayoutAmount_5;
  OptPayoutAmount_5.setString("19226551");
  msg.set(OptPayoutAmount_5);
  Instrument_5.insert(OptPayoutAmount_5.getString());
  FIX::OptPayoutType OptPayoutType_5(3);
  msg.set(OptPayoutType_5);
  Instrument_5.insert(OptPayoutType_5.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_5;
  OriginalNotionalPercentageOutstanding_5.setString("2.120000");
  msg.set(OriginalNotionalPercentageOutstanding_5);
  Instrument_5.insert(OriginalNotionalPercentageOutstanding_5.getString());
  FIX::Pool Pool_5("STRING_632791109");
  msg.set(Pool_5);
  Instrument_5.insert(Pool_5.getString());
  FIX::PositionLimit PositionLimit_5(2071033475);
  msg.set(PositionLimit_5);
  Instrument_5.insert(PositionLimit_5.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_5("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_5);
  Instrument_5.insert(PriceQuoteMethod_5.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_5("STRING_1220483417");
  msg.set(PriceUnitOfMeasure_5);
  Instrument_5.insert(PriceUnitOfMeasure_5.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_5;
  PriceUnitOfMeasureQty_5.setString("9124033");
  msg.set(PriceUnitOfMeasureQty_5);
  Instrument_5.insert(PriceUnitOfMeasureQty_5.getString());
  FIX::Product Product_6(2);
  msg.set(Product_6);
  Instrument_5.insert(Product_6.getString());
  FIX::ProductComplex ProductComplex_5("STRING_1279245291");
  msg.set(ProductComplex_5);
  Instrument_5.insert(ProductComplex_5.getString());
  FIX::PutOrCall PutOrCall_5(1);
  msg.set(PutOrCall_5);
  Instrument_5.insert(PutOrCall_5.getString());
  FIX::RedemptionDate RedemptionDate_5("LOCALMKTDATE_1315941984");
  msg.set(RedemptionDate_5);
  Instrument_5.insert(RedemptionDate_5.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_5("STRING_1985751693");
  msg.set(RepoCollateralSecurityType_5);
  Instrument_5.insert(RepoCollateralSecurityType_5.getString());
  FIX::RepurchaseRate RepurchaseRate_5;
  RepurchaseRate_5.setString("16.230000");
  msg.set(RepurchaseRate_5);
  Instrument_5.insert(RepurchaseRate_5.getString());
  FIX::RepurchaseTerm RepurchaseTerm_5(1116244021);
  msg.set(RepurchaseTerm_5);
  Instrument_5.insert(RepurchaseTerm_5.getString());
  FIX::RestructuringType RestructuringType_5("STRING_MM");
  msg.set(RestructuringType_5);
  Instrument_5.insert(RestructuringType_5.getString());
  FIX::SecurityDesc SecurityDesc_5("STRING_1723002039");
  msg.set(SecurityDesc_5);
  Instrument_5.insert(SecurityDesc_5.getString());
  FIX::SecurityExchange SecurityExchange_5("EXCHANGE_1584112739");
  msg.set(SecurityExchange_5);
  Instrument_5.insert(SecurityExchange_5.getString());
  FIX::SecurityGroup SecurityGroup_5("STRING_1564719846");
  msg.set(SecurityGroup_5);
  Instrument_5.insert(SecurityGroup_5.getString());
  FIX::SecurityID SecurityID_5("STRING_709443608");
  msg.set(SecurityID_5);
  Instrument_5.insert(SecurityID_5.getString());
  FIX::SecurityIDSource SecurityIDSource_5("STRING_5");
  msg.set(SecurityIDSource_5);
  Instrument_5.insert(SecurityIDSource_5.getString());
  FIX::SecurityStatus SecurityStatus_5("STRING_1");
  msg.set(SecurityStatus_5);
  Instrument_5.insert(SecurityStatus_5.getString());
  FIX::SecuritySubType SecuritySubType_5("STRING_225428998");
  msg.set(SecuritySubType_5);
  Instrument_5.insert(SecuritySubType_5.getString());
  FIX::SecurityType SecurityType_6("STRING_CMBS");
  msg.set(SecurityType_6);
  Instrument_5.insert(SecurityType_6.getString());
  FIX::Seniority Seniority_5("STRING_SB");
  msg.set(Seniority_5);
  Instrument_5.insert(Seniority_5.getString());
  FIX::SettlMethod SettlMethod_5('C');
  msg.set(SettlMethod_5);
  Instrument_5.insert(SettlMethod_5.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_5("STRING_1460474177");
  msg.set(SettleOnOpenFlag_5);
  Instrument_5.insert(SettleOnOpenFlag_5.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_5("STRING_853912722");
  msg.set(StateOrProvinceOfIssue_5);
  Instrument_5.insert(StateOrProvinceOfIssue_5.getString());
  FIX::StrikeCurrency StrikeCurrency_5("GBP");
  msg.set(StrikeCurrency_5);
  Instrument_5.insert(StrikeCurrency_5.getString());
  FIX::StrikeMultiplier StrikeMultiplier_5;
  StrikeMultiplier_5.setString("12985029");
  msg.set(StrikeMultiplier_5);
  Instrument_5.insert(StrikeMultiplier_5.getString());
  FIX::StrikePrice StrikePrice_5;
  StrikePrice_5.setString("11457387");
  msg.set(StrikePrice_5);
  Instrument_5.insert(StrikePrice_5.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_5(1);
  msg.set(StrikePriceBoundaryMethod_5);
  Instrument_5.insert(StrikePriceBoundaryMethod_5.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_5;
  StrikePriceBoundaryPrecision_5.setString("94.880000");
  msg.set(StrikePriceBoundaryPrecision_5);
  Instrument_5.insert(StrikePriceBoundaryPrecision_5.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_5(3);
  msg.set(StrikePriceDeterminationMethod_5);
  Instrument_5.insert(StrikePriceDeterminationMethod_5.getString());
  FIX::StrikeValue StrikeValue_5;
  StrikeValue_5.setString("7968885");
  msg.set(StrikeValue_5);
  Instrument_5.insert(StrikeValue_5.getString());
  FIX::Symbol Symbol_5("STRING_1111036787");
  msg.set(Symbol_5);
  Instrument_5.insert(Symbol_5.getString());
  FIX::SymbolSfx SymbolSfx_5("STRING_WI");
  msg.set(SymbolSfx_5);
  Instrument_5.insert(SymbolSfx_5.getString());
  FIX::TimeUnit TimeUnit_5("STRING_Mo");
  msg.set(TimeUnit_5);
  Instrument_5.insert(TimeUnit_5.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_5(3);
  msg.set(UnderlyingPriceDeterminationMethod_5);
  Instrument_5.insert(UnderlyingPriceDeterminationMethod_5.getString());
  FIX::UnitOfMeasure UnitOfMeasure_5("STRING_Alw");
  msg.set(UnitOfMeasure_5);
  Instrument_5.insert(UnitOfMeasure_5.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_5;
  UnitOfMeasureQty_5.setString("1507329");
  msg.set(UnitOfMeasureQty_5);
  Instrument_5.insert(UnitOfMeasureQty_5.getString());
  FIX::ValuationMethod ValuationMethod_5("STRING_FUT");
  msg.set(ValuationMethod_5);
  Instrument_5.insert(ValuationMethod_5.getString());
  all_values.push_back(Instrument_5);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_11;
    FIX::ComplexEventCondition ComplexEventCondition_11(1);
    noComplexEvents_0_0.set(ComplexEventCondition_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventCondition_11.getString());
    FIX::ComplexEventPrice ComplexEventPrice_11;
    ComplexEventPrice_11.setString("18462185");
    noComplexEvents_0_0.set(ComplexEventPrice_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPrice_11.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_11(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceBoundaryMethod_11.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_11;
    ComplexEventPriceBoundaryPrecision_11.setString("29.930000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceBoundaryPrecision_11.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_11(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceTimeType_11.getString());
    FIX::ComplexEventType ComplexEventType_11(5);
    noComplexEvents_0_0.set(ComplexEventType_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventType_11.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_11;
    ComplexOptPayoutAmount_11.setString("385229");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexOptPayoutAmount_11.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_11);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_22;
      FIX::ComplexEventEndDate ComplexEventEndDate_22(FIX::UTCTIMESTAMP(0, 2, 0, 12, 122000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_22);
      ComplexEventDates_NoComplexEventDates_22.insert(ComplexEventEndDate_22.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_22(FIX::UTCTIMESTAMP(23, 59, 25, 3, 42011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_22);
      ComplexEventDates_NoComplexEventDates_22.insert(ComplexEventStartDate_22.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_22);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_41;
        FIX::ComplexEventEndTime ComplexEventEndTime_41(FIX::UTCTIMEONLY(14, 1, 53));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_41);
        ComplexEventTimes_NoComplexEventTimes_41.insert(ComplexEventEndTime_41.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_41(FIX::UTCTIMEONLY(8, 4, 48));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_41);
        ComplexEventTimes_NoComplexEventTimes_41.insert(ComplexEventStartTime_41.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_41);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_12;
    FIX::ComplexEventCondition ComplexEventCondition_12(1);
    noComplexEvents_0_1.set(ComplexEventCondition_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventCondition_12.getString());
    FIX::ComplexEventPrice ComplexEventPrice_12;
    ComplexEventPrice_12.setString("9020517");
    noComplexEvents_0_1.set(ComplexEventPrice_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPrice_12.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_12(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceBoundaryMethod_12.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_12;
    ComplexEventPriceBoundaryPrecision_12.setString("6.990000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceBoundaryPrecision_12.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_12(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceTimeType_12.getString());
    FIX::ComplexEventType ComplexEventType_12(1);
    noComplexEvents_0_1.set(ComplexEventType_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventType_12.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_12;
    ComplexOptPayoutAmount_12.setString("8279636");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexOptPayoutAmount_12.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_12);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_23;
      FIX::ComplexEventEndDate ComplexEventEndDate_23(FIX::UTCTIMESTAMP(13, 40, 45, 9, 82007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_23);
      ComplexEventDates_NoComplexEventDates_23.insert(ComplexEventEndDate_23.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_23(FIX::UTCTIMESTAMP(7, 18, 18, 6, 32009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_23);
      ComplexEventDates_NoComplexEventDates_23.insert(ComplexEventStartDate_23.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_23);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_42;
        FIX::ComplexEventEndTime ComplexEventEndTime_42(FIX::UTCTIMEONLY(0, 54, 30));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_42);
        ComplexEventTimes_NoComplexEventTimes_42.insert(ComplexEventEndTime_42.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_42(FIX::UTCTIMEONLY(6, 35, 33));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_42);
        ComplexEventTimes_NoComplexEventTimes_42.insert(ComplexEventStartTime_42.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_42);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_43;
        FIX::ComplexEventEndTime ComplexEventEndTime_43(FIX::UTCTIMEONLY(0, 12, 52));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_43);
        ComplexEventTimes_NoComplexEventTimes_43.insert(ComplexEventEndTime_43.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_43(FIX::UTCTIMEONLY(6, 5, 18));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_43);
        ComplexEventTimes_NoComplexEventTimes_43.insert(ComplexEventStartTime_43.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_43);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_24;
      FIX::ComplexEventEndDate ComplexEventEndDate_24(FIX::UTCTIMESTAMP(22, 50, 24, 23, 112013));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_24);
      ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventEndDate_24.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_24(FIX::UTCTIMESTAMP(5, 54, 51, 19, 12006));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_24);
      ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventStartDate_24.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_24);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_44;
        FIX::ComplexEventEndTime ComplexEventEndTime_44(FIX::UTCTIMEONLY(4, 59, 31));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_44);
        ComplexEventTimes_NoComplexEventTimes_44.insert(ComplexEventEndTime_44.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_44(FIX::UTCTIMEONLY(9, 58, 35));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_44);
        ComplexEventTimes_NoComplexEventTimes_44.insert(ComplexEventStartTime_44.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_44);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_45;
        FIX::ComplexEventEndTime ComplexEventEndTime_45(FIX::UTCTIMEONLY(10, 47, 42));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_45);
        ComplexEventTimes_NoComplexEventTimes_45.insert(ComplexEventEndTime_45.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_45(FIX::UTCTIMEONLY(9, 39, 25));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_45);
        ComplexEventTimes_NoComplexEventTimes_45.insert(ComplexEventStartTime_45.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_45);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_25;
      FIX::ComplexEventEndDate ComplexEventEndDate_25(FIX::UTCTIMESTAMP(13, 8, 28, 0, 112010));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_25);
      ComplexEventDates_NoComplexEventDates_25.insert(ComplexEventEndDate_25.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_25(FIX::UTCTIMESTAMP(7, 58, 55, 14, 112008));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_25);
      ComplexEventDates_NoComplexEventDates_25.insert(ComplexEventStartDate_25.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_25);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_46;
        FIX::ComplexEventEndTime ComplexEventEndTime_46(FIX::UTCTIMEONLY(4, 42, 46));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_46);
        ComplexEventTimes_NoComplexEventTimes_46.insert(ComplexEventEndTime_46.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_46(FIX::UTCTIMEONLY(3, 45, 9));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_46);
        ComplexEventTimes_NoComplexEventTimes_46.insert(ComplexEventStartTime_46.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_46);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_9;
    FIX::EventDate EventDate_9("LOCALMKTDATE_1376378051");
    noEvents_0_0.set(EventDate_9);
    EvntGrp_NoEvents_9.insert(EventDate_9.getString());
    FIX::EventPx EventPx_9;
    EventPx_9.setString("16429764");
    noEvents_0_0.set(EventPx_9);
    EvntGrp_NoEvents_9.insert(EventPx_9.getString());
    FIX::EventText EventText_9("STRING_1543077851");
    noEvents_0_0.set(EventText_9);
    EvntGrp_NoEvents_9.insert(EventText_9.getString());
    FIX::EventTime EventTime_9(FIX::UTCTIMESTAMP(9, 50, 36, 6, 42000));
    noEvents_0_0.set(EventTime_9);
    EvntGrp_NoEvents_9.insert(EventTime_9.getString());
    FIX::EventType EventType_9(15);
    noEvents_0_0.set(EventType_9);
    EvntGrp_NoEvents_9.insert(EventType_9.getString());
    all_values.push_back(EvntGrp_NoEvents_9);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_10;
    FIX::EventDate EventDate_10("LOCALMKTDATE_625558163");
    noEvents_0_1.set(EventDate_10);
    EvntGrp_NoEvents_10.insert(EventDate_10.getString());
    FIX::EventPx EventPx_10;
    EventPx_10.setString("12255939");
    noEvents_0_1.set(EventPx_10);
    EvntGrp_NoEvents_10.insert(EventPx_10.getString());
    FIX::EventText EventText_10("STRING_277080290");
    noEvents_0_1.set(EventText_10);
    EvntGrp_NoEvents_10.insert(EventText_10.getString());
    FIX::EventTime EventTime_10(FIX::UTCTIMESTAMP(17, 48, 31, 27, 32001));
    noEvents_0_1.set(EventTime_10);
    EvntGrp_NoEvents_10.insert(EventTime_10.getString());
    FIX::EventType EventType_10(11);
    noEvents_0_1.set(EventType_10);
    EvntGrp_NoEvents_10.insert(EventType_10.getString());
    all_values.push_back(EvntGrp_NoEvents_10);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_11;
    FIX::EventDate EventDate_11("LOCALMKTDATE_14178137");
    noEvents_0_2.set(EventDate_11);
    EvntGrp_NoEvents_11.insert(EventDate_11.getString());
    FIX::EventPx EventPx_11;
    EventPx_11.setString("1004207");
    noEvents_0_2.set(EventPx_11);
    EvntGrp_NoEvents_11.insert(EventPx_11.getString());
    FIX::EventText EventText_11("STRING_37910884");
    noEvents_0_2.set(EventText_11);
    EvntGrp_NoEvents_11.insert(EventText_11.getString());
    FIX::EventTime EventTime_11(FIX::UTCTIMESTAMP(10, 44, 41, 11, 22004));
    noEvents_0_2.set(EventTime_11);
    EvntGrp_NoEvents_11.insert(EventTime_11.getString());
    FIX::EventType EventType_11(8);
    noEvents_0_2.set(EventType_11);
    EvntGrp_NoEvents_11.insert(EventType_11.getString());
    all_values.push_back(EvntGrp_NoEvents_11);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_8;
    FIX::InstrumentPartyID InstrumentPartyID_8("STRING_1296785643");
    noInstrumentParties_0_0.set(InstrumentPartyID_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyID_8.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_8('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyIDSource_8.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_8(346348259);
    noInstrumentParties_0_0.set(InstrumentPartyRole_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyRole_8.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_8);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13;
      FIX::InstrumentPartySubID InstrumentPartySubID_13("STRING_183745006");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_13);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13.insert(InstrumentPartySubID_13.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_13(261516883);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_13);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13.insert(InstrumentPartySubIDType_13.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14;
      FIX::InstrumentPartySubID InstrumentPartySubID_14("STRING_1664595007");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_14);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14.insert(InstrumentPartySubID_14.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_14(4246413);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_14);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14.insert(InstrumentPartySubIDType_14.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_9;
    FIX::InstrumentPartyID InstrumentPartyID_9("STRING_887075046");
    noInstrumentParties_0_1.set(InstrumentPartyID_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyID_9.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_9('7');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyIDSource_9.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_9(281326703);
    noInstrumentParties_0_1.set(InstrumentPartyRole_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyRole_9.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_9);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15;
      FIX::InstrumentPartySubID InstrumentPartySubID_15("STRING_108856434");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_15);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15.insert(InstrumentPartySubID_15.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_15(1760395332);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_15);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15.insert(InstrumentPartySubIDType_15.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16;
      FIX::InstrumentPartySubID InstrumentPartySubID_16("STRING_7995298");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_16);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubID_16.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_16(1296856533);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_16);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubIDType_16.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_10;
    FIX::InstrumentPartyID InstrumentPartyID_10("STRING_174534966");
    noInstrumentParties_0_2.set(InstrumentPartyID_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyID_10.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_10('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyIDSource_10.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_10(955210376);
    noInstrumentParties_0_2.set(InstrumentPartyRole_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyRole_10.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_10);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17;
      FIX::InstrumentPartySubID InstrumentPartySubID_17("STRING_1593033381");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_17);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17.insert(InstrumentPartySubID_17.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_17(993121260);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_17);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17.insert(InstrumentPartySubIDType_17.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_11;
    FIX::SecurityAltID SecurityAltID_11("STRING_655582583");
    noSecurityAltID_0_0.set(SecurityAltID_11);
    SecAltIDGrp_NoSecurityAltID_11.insert(SecurityAltID_11.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_11("STRING_1697356844");
    noSecurityAltID_0_0.set(SecurityAltIDSource_11);
    SecAltIDGrp_NoSecurityAltID_11.insert(SecurityAltIDSource_11.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_11);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_12;
    FIX::SecurityAltID SecurityAltID_12("STRING_1039546809");
    noSecurityAltID_0_1.set(SecurityAltID_12);
    SecAltIDGrp_NoSecurityAltID_12.insert(SecurityAltID_12.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_12("STRING_1955852502");
    noSecurityAltID_0_1.set(SecurityAltIDSource_12);
    SecAltIDGrp_NoSecurityAltID_12.insert(SecurityAltIDSource_12.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_12);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_10;
  FIX::SecurityXML SecurityXML_11("XMLDATA_1045126850");
  msg.set(SecurityXML_11);
  FIX::SecurityXMLLen SecurityXMLLen_5(467249213);
  msg.set(SecurityXMLLen_5);
  FIX::SecurityXMLSchema SecurityXMLSchema_5("STRING_604131581");
  msg.set(SecurityXMLSchema_5);
  SecurityXML_10.insert(SecurityXMLSchema_5.getString());
  all_values.push_back(SecurityXML_10);

  // InstrumentExtension
  multiset<string> InstrumentExtension_2;
  FIX::DeliveryForm DeliveryForm_2(2);
  msg.set(DeliveryForm_2);
  InstrumentExtension_2.insert(DeliveryForm_2.getString());
  FIX::PctAtRisk PctAtRisk_2;
  PctAtRisk_2.setString("48.560000");
  msg.set(PctAtRisk_2);
  InstrumentExtension_2.insert(PctAtRisk_2.getString());
  all_values.push_back(InstrumentExtension_2);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_3;
    FIX::InstrAttribType InstrAttribType_3(29);
    noInstrAttrib_0_0.set(InstrAttribType_3);
    AttrbGrp_NoInstrAttrib_3.insert(InstrAttribType_3.getString());
    FIX::InstrAttribValue InstrAttribValue_3("STRING_520156759");
    noInstrAttrib_0_0.set(InstrAttribValue_3);
    AttrbGrp_NoInstrAttrib_3.insert(InstrAttribValue_3.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_3);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_4;
    FIX::InstrAttribType InstrAttribType_4(19);
    noInstrAttrib_0_1.set(InstrAttribType_4);
    AttrbGrp_NoInstrAttrib_4.insert(InstrAttribType_4.getString());
    FIX::InstrAttribValue InstrAttribValue_4("STRING_396356201");
    noInstrAttrib_0_1.set(InstrAttribValue_4);
    AttrbGrp_NoInstrAttrib_4.insert(InstrAttribValue_4.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_4);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_5;
    FIX::InstrAttribType InstrAttribType_5(19);
    noInstrAttrib_0_2.set(InstrAttribType_5);
    AttrbGrp_NoInstrAttrib_5.insert(InstrAttribType_5.getString());
    FIX::InstrAttribValue InstrAttribValue_5("STRING_200903601");
    noInstrAttrib_0_2.set(InstrAttribValue_5);
    AttrbGrp_NoInstrAttrib_5.insert(InstrAttribValue_5.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_5);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_4;
    FIX::ClOrdID ClOrdID_4("STRING_779973447");
    noOrders_0_0.set(ClOrdID_4);
    OrdAllocGrp_NoOrders_4.insert(ClOrdID_4.getString());
    FIX::ListID ListID_4("STRING_482230305");
    noOrders_0_0.set(ListID_4);
    OrdAllocGrp_NoOrders_4.insert(ListID_4.getString());
    FIX::OrderAvgPx OrderAvgPx_4;
    OrderAvgPx_4.setString("15902619");
    noOrders_0_0.set(OrderAvgPx_4);
    OrdAllocGrp_NoOrders_4.insert(OrderAvgPx_4.getString());
    FIX::OrderBookingQty OrderBookingQty_4;
    OrderBookingQty_4.setString("8888298");
    noOrders_0_0.set(OrderBookingQty_4);
    OrdAllocGrp_NoOrders_4.insert(OrderBookingQty_4.getString());
    FIX::OrderID OrderID_4("STRING_95141989");
    noOrders_0_0.set(OrderID_4);
    OrdAllocGrp_NoOrders_4.insert(OrderID_4.getString());
    FIX::OrderQty OrderQty_4;
    OrderQty_4.setString("15982572");
    noOrders_0_0.set(OrderQty_4);
    OrdAllocGrp_NoOrders_4.insert(OrderQty_4.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_4("STRING_38202767");
    noOrders_0_0.set(SecondaryClOrdID_4);
    OrdAllocGrp_NoOrders_4.insert(SecondaryClOrdID_4.getString());
    FIX::SecondaryOrderID SecondaryOrderID_4("STRING_269676955");
    noOrders_0_0.set(SecondaryOrderID_4);
    OrdAllocGrp_NoOrders_4.insert(SecondaryOrderID_4.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_4);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_10;
      FIX::Nested2PartyID Nested2PartyID_10("STRING_993413143");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyID_10.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_10('4');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyIDSource_10.getString());
      FIX::Nested2PartyRole Nested2PartyRole_10(388935979);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyRole_10.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_10);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_20;
        FIX::Nested2PartySubID Nested2PartySubID_20("STRING_1299128867");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_20);
        NstdPtys2SubGrp_NoNested2PartySubIDs_20.insert(Nested2PartySubID_20.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_20(1044518563);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_20);
        NstdPtys2SubGrp_NoNested2PartySubIDs_20.insert(Nested2PartySubIDType_20.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_20);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_21;
        FIX::Nested2PartySubID Nested2PartySubID_21("STRING_1536407600");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_21);
        NstdPtys2SubGrp_NoNested2PartySubIDs_21.insert(Nested2PartySubID_21.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_21(191192028);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_21);
        NstdPtys2SubGrp_NoNested2PartySubIDs_21.insert(Nested2PartySubIDType_21.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_21);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    msg.addGroup(noOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_11;
    FIX::PartyID PartyID_11("STRING_434050802");
    noPartyIDs_0_0.set(PartyID_11);
    Parties_NoPartyIDs_11.insert(PartyID_11.getString());
    FIX::PartyIDSource PartyIDSource_11('6');
    noPartyIDs_0_0.set(PartyIDSource_11);
    Parties_NoPartyIDs_11.insert(PartyIDSource_11.getString());
    FIX::PartyRole PartyRole_11(25);
    noPartyIDs_0_0.set(PartyRole_11);
    Parties_NoPartyIDs_11.insert(PartyRole_11.getString());
    all_values.push_back(Parties_NoPartyIDs_11);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_25;
      FIX::PartySubID PartySubID_25("STRING_274992450");
      noPartySubIDs_0_1_0.set(PartySubID_25);
      PtysSubGrp_NoPartySubIDs_25.insert(PartySubID_25.getString());
      FIX::PartySubIDType PartySubIDType_25(5);
      noPartySubIDs_0_1_0.set(PartySubIDType_25);
      PtysSubGrp_NoPartySubIDs_25.insert(PartySubIDType_25.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_25);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_26;
      FIX::PartySubID PartySubID_26("STRING_357381179");
      noPartySubIDs_0_1_1.set(PartySubID_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubID_26.getString());
      FIX::PartySubIDType PartySubIDType_26(21);
      noPartySubIDs_0_1_1.set(PartySubIDType_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubIDType_26.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_26);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_12;
    FIX::PartyID PartyID_12("STRING_1666588369");
    noPartyIDs_0_1.set(PartyID_12);
    Parties_NoPartyIDs_12.insert(PartyID_12.getString());
    FIX::PartyIDSource PartyIDSource_12('H');
    noPartyIDs_0_1.set(PartyIDSource_12);
    Parties_NoPartyIDs_12.insert(PartyIDSource_12.getString());
    FIX::PartyRole PartyRole_12(9);
    noPartyIDs_0_1.set(PartyRole_12);
    Parties_NoPartyIDs_12.insert(PartyRole_12.getString());
    all_values.push_back(Parties_NoPartyIDs_12);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_27;
      FIX::PartySubID PartySubID_27("STRING_2037168629");
      noPartySubIDs_1_1_0.set(PartySubID_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubID_27.getString());
      FIX::PartySubIDType PartySubIDType_27(19);
      noPartySubIDs_1_1_0.set(PartySubIDType_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubIDType_27.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_27);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_28;
      FIX::PartySubID PartySubID_28("STRING_202238628");
      noPartySubIDs_1_1_1.set(PartySubID_28);
      PtysSubGrp_NoPartySubIDs_28.insert(PartySubID_28.getString());
      FIX::PartySubIDType PartySubIDType_28(29);
      noPartySubIDs_1_1_1.set(PartySubIDType_28);
      PtysSubGrp_NoPartySubIDs_28.insert(PartySubIDType_28.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_28);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_29;
      FIX::PartySubID PartySubID_29("STRING_353737009");
      noPartySubIDs_1_1_2.set(PartySubID_29);
      PtysSubGrp_NoPartySubIDs_29.insert(PartySubID_29.getString());
      FIX::PartySubIDType PartySubIDType_29(29);
      noPartySubIDs_1_1_2.set(PartySubIDType_29);
      PtysSubGrp_NoPartySubIDs_29.insert(PartySubIDType_29.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_29);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_13;
    FIX::PartyID PartyID_13("STRING_930720476");
    noPartyIDs_0_2.set(PartyID_13);
    Parties_NoPartyIDs_13.insert(PartyID_13.getString());
    FIX::PartyIDSource PartyIDSource_13('6');
    noPartyIDs_0_2.set(PartyIDSource_13);
    Parties_NoPartyIDs_13.insert(PartyIDSource_13.getString());
    FIX::PartyRole PartyRole_13(34);
    noPartyIDs_0_2.set(PartyRole_13);
    Parties_NoPartyIDs_13.insert(PartyRole_13.getString());
    all_values.push_back(Parties_NoPartyIDs_13);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_30;
      FIX::PartySubID PartySubID_30("STRING_1385352919");
      noPartySubIDs_2_1_0.set(PartySubID_30);
      PtysSubGrp_NoPartySubIDs_30.insert(PartySubID_30.getString());
      FIX::PartySubIDType PartySubIDType_30(23);
      noPartySubIDs_2_1_0.set(PartySubIDType_30);
      PtysSubGrp_NoPartySubIDs_30.insert(PartySubIDType_30.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_30);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_31;
      FIX::PartySubID PartySubID_31("STRING_115559053");
      noPartySubIDs_2_1_1.set(PartySubID_31);
      PtysSubGrp_NoPartySubIDs_31.insert(PartySubID_31.getString());
      FIX::PartySubIDType PartySubIDType_31(23);
      noPartySubIDs_2_1_1.set(PartySubIDType_31);
      PtysSubGrp_NoPartySubIDs_31.insert(PartySubIDType_31.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_31);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_32;
      FIX::PartySubID PartySubID_32("STRING_177092851");
      noPartySubIDs_2_1_2.set(PartySubID_32);
      PtysSubGrp_NoPartySubIDs_32.insert(PartySubID_32.getString());
      FIX::PartySubIDType PartySubIDType_32(6);
      noPartySubIDs_2_1_2.set(PartySubIDType_32);
      PtysSubGrp_NoPartySubIDs_32.insert(PartySubIDType_32.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_32);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_3;
    FIX::PosAmt PosAmt_3;
    PosAmt_3.setString("3682848");
    noPosAmt_0_0.set(PosAmt_3);
    PositionAmountData_NoPosAmt_3.insert(PosAmt_3.getString());
    FIX::PosAmtType PosAmtType_3("STRING_ICMTM");
    noPosAmt_0_0.set(PosAmtType_3);
    PositionAmountData_NoPosAmt_3.insert(PosAmtType_3.getString());
    FIX::PositionCurrency PositionCurrency_3("STRING_1047378429");
    noPosAmt_0_0.set(PositionCurrency_3);
    PositionAmountData_NoPosAmt_3.insert(PositionCurrency_3.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_3);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_4;
    FIX::PosAmt PosAmt_4;
    PosAmt_4.setString("10267261");
    noPosAmt_0_1.set(PosAmt_4);
    PositionAmountData_NoPosAmt_4.insert(PosAmt_4.getString());
    FIX::PosAmtType PosAmtType_4("STRING_CPN");
    noPosAmt_0_1.set(PosAmtType_4);
    PositionAmountData_NoPosAmt_4.insert(PosAmtType_4.getString());
    FIX::PositionCurrency PositionCurrency_4("STRING_1269920290");
    noPosAmt_0_1.set(PositionCurrency_4);
    PositionAmountData_NoPosAmt_4.insert(PositionCurrency_4.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_4);

    msg.addGroup(noPosAmt_0_1);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_3;
    FIX::RateSource RateSource_5(2);
    noRateSources_0_0.set(RateSource_5);
    RateSource_NoRateSources_3.insert(RateSource_5.getString());
    FIX::RateSourceType RateSourceType_3(1);
    noRateSources_0_0.set(RateSourceType_3);
    RateSource_NoRateSources_3.insert(RateSourceType_3.getString());
    FIX::ReferencePage ReferencePage_3("STRING_2096867782");
    noRateSources_0_0.set(ReferencePage_3);
    RateSource_NoRateSources_3.insert(ReferencePage_3.getString());
    all_values.push_back(RateSource_NoRateSources_3);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_4;
    FIX::RateSource RateSource_6(99);
    noRateSources_0_1.set(RateSource_6);
    RateSource_NoRateSources_4.insert(RateSource_6.getString());
    FIX::RateSourceType RateSourceType_4(0);
    noRateSources_0_1.set(RateSourceType_4);
    RateSource_NoRateSources_4.insert(RateSourceType_4.getString());
    FIX::ReferencePage ReferencePage_4("STRING_781801463");
    noRateSources_0_1.set(ReferencePage_4);
    RateSource_NoRateSources_4.insert(ReferencePage_4.getString());
    all_values.push_back(RateSource_NoRateSources_4);

    msg.addGroup(noRateSources_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_2;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_5;
    FIX::RateSource RateSource_7(2);
    noRateSources_0_2.set(RateSource_7);
    RateSource_NoRateSources_5.insert(RateSource_7.getString());
    FIX::RateSourceType RateSourceType_5(1);
    noRateSources_0_2.set(RateSourceType_5);
    RateSource_NoRateSources_5.insert(RateSourceType_5.getString());
    FIX::ReferencePage ReferencePage_5("STRING_246708591");
    noRateSources_0_2.set(ReferencePage_5);
    RateSource_NoRateSources_5.insert(ReferencePage_5.getString());
    all_values.push_back(RateSource_NoRateSources_5);

    msg.addGroup(noRateSources_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_2;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_2("CAN");
  msg.set(BenchmarkCurveCurrency_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurveCurrency_2.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_2("STRING_LIBID");
  msg.set(BenchmarkCurveName_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurveName_2.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_2("STRING_383680207");
  msg.set(BenchmarkCurvePoint_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurvePoint_2.getString());
  FIX::BenchmarkPrice BenchmarkPrice_2;
  BenchmarkPrice_2.setString("3864239");
  msg.set(BenchmarkPrice_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkPrice_2.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_2(992385377);
  msg.set(BenchmarkPriceType_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkPriceType_2.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_2("STRING_950737780");
  msg.set(BenchmarkSecurityID_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkSecurityID_2.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_2("STRING_113046989");
  msg.set(BenchmarkSecurityIDSource_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkSecurityIDSource_2.getString());
  FIX::Spread Spread_2;
  Spread_2.setString("2302546");
  msg.set(Spread_2);
  SpreadOrBenchmarkCurveData_2.insert(Spread_2.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_2);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_2;
    FIX::StipulationType StipulationType_2("STRING_TEXT");
    noStipulations_0_0.set(StipulationType_2);
    Stipulations_NoStipulations_2.insert(StipulationType_2.getString());
    FIX::StipulationValue StipulationValue_2("STRING_1454658323");
    noStipulations_0_0.set(StipulationValue_2);
    Stipulations_NoStipulations_2.insert(StipulationValue_2.getString());
    all_values.push_back(Stipulations_NoStipulations_2);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_3;
    FIX::StipulationType StipulationType_3("STRING_REFTRADE");
    noStipulations_0_1.set(StipulationType_3);
    Stipulations_NoStipulations_3.insert(StipulationType_3.getString());
    FIX::StipulationValue StipulationValue_3("STRING_1388683659");
    noStipulations_0_1.set(StipulationValue_3);
    Stipulations_NoStipulations_3.insert(StipulationValue_3.getString());
    all_values.push_back(Stipulations_NoStipulations_3);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_4;
    FIX::StipulationType StipulationType_4("STRING_PROD");
    noStipulations_0_2.set(StipulationType_4);
    Stipulations_NoStipulations_4.insert(StipulationType_4.getString());
    FIX::StipulationValue StipulationValue_4("STRING_374079495");
    noStipulations_0_2.set(StipulationValue_4);
    Stipulations_NoStipulations_4.insert(StipulationValue_4.getString());
    all_values.push_back(Stipulations_NoStipulations_4);

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_4;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_4("DATA_967880731");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingIssuer_4.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_4(1400805617);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingIssuerLen_4.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_4("DATA_429181782");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingSecurityDesc_4.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_4(90317373);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_4);
    UnderlyingInstrument_4.insert(EncodedUnderlyingSecurityDescLen_4.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_4;
    UnderlyingAdjustedQuantity_4.setString("5550405");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_4);
    UnderlyingInstrument_4.insert(UnderlyingAdjustedQuantity_4.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_4;
    UnderlyingAllocationPercent_4.setString("97.000000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_4);
    UnderlyingInstrument_4.insert(UnderlyingAllocationPercent_4.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_4;
    UnderlyingAttachmentPoint_4.setString("88.430000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_4);
    UnderlyingInstrument_4.insert(UnderlyingAttachmentPoint_4.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_4("STRING_504424676");
    noUnderlyings_0_0.set(UnderlyingCFICode_4);
    UnderlyingInstrument_4.insert(UnderlyingCFICode_4.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_4("STRING_1238182339");
    noUnderlyings_0_0.set(UnderlyingCPProgram_4);
    UnderlyingInstrument_4.insert(UnderlyingCPProgram_4.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_4("STRING_1951174045");
    noUnderlyings_0_0.set(UnderlyingCPRegType_4);
    UnderlyingInstrument_4.insert(UnderlyingCPRegType_4.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_4;
    UnderlyingCapValue_4.setString("12862261");
    noUnderlyings_0_0.set(UnderlyingCapValue_4);
    UnderlyingInstrument_4.insert(UnderlyingCapValue_4.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_4;
    UnderlyingCashAmount_4.setString("11222433");
    noUnderlyings_0_0.set(UnderlyingCashAmount_4);
    UnderlyingInstrument_4.insert(UnderlyingCashAmount_4.getString());
    FIX::UnderlyingCashType UnderlyingCashType_4("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_4);
    UnderlyingInstrument_4.insert(UnderlyingCashType_4.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_4;
    UnderlyingContractMultiplier_4.setString("15329347");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_4);
    UnderlyingInstrument_4.insert(UnderlyingContractMultiplier_4.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_4(1208542892);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_4);
    UnderlyingInstrument_4.insert(UnderlyingContractMultiplierUnit_4.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_4("COUNTRY_1530117668");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingCountryOfIssue_4.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_4("LOCALMKTDATE_2133380331");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_4);
    UnderlyingInstrument_4.insert(UnderlyingCouponPaymentDate_4.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_4;
    UnderlyingCouponRate_4.setString("31.000000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_4);
    UnderlyingInstrument_4.insert(UnderlyingCouponRate_4.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_4("STRING_1916541583");
    noUnderlyings_0_0.set(UnderlyingCreditRating_4);
    UnderlyingInstrument_4.insert(UnderlyingCreditRating_4.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_4("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_4);
    UnderlyingInstrument_4.insert(UnderlyingCurrency_4.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_4;
    UnderlyingCurrentValue_4.setString("20295885");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_4);
    UnderlyingInstrument_4.insert(UnderlyingCurrentValue_4.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_4;
    UnderlyingDetachmentPoint_4.setString("67.080000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_4);
    UnderlyingInstrument_4.insert(UnderlyingDetachmentPoint_4.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_4;
    UnderlyingDirtyPrice_4.setString("2241789");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_4);
    UnderlyingInstrument_4.insert(UnderlyingDirtyPrice_4.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_4;
    UnderlyingEndPrice_4.setString("1107109");
    noUnderlyings_0_0.set(UnderlyingEndPrice_4);
    UnderlyingInstrument_4.insert(UnderlyingEndPrice_4.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_4;
    UnderlyingEndValue_4.setString("5157113");
    noUnderlyings_0_0.set(UnderlyingEndValue_4);
    UnderlyingInstrument_4.insert(UnderlyingEndValue_4.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_4(229973611);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_4);
    UnderlyingInstrument_4.insert(UnderlyingExerciseStyle_4.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_4;
    UnderlyingFXRate_4.setString("14993946");
    noUnderlyings_0_0.set(UnderlyingFXRate_4);
    UnderlyingInstrument_4.insert(UnderlyingFXRate_4.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_4('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_4);
    UnderlyingInstrument_4.insert(UnderlyingFXRateCalc_4.getString());
    FIX::UnderlyingFactor UnderlyingFactor_4;
    UnderlyingFactor_4.setString("6040531");
    noUnderlyings_0_0.set(UnderlyingFactor_4);
    UnderlyingInstrument_4.insert(UnderlyingFactor_4.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_4(606076022);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_4);
    UnderlyingInstrument_4.insert(UnderlyingFlowScheduleType_4.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_4("STRING_1404094418");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_4);
    UnderlyingInstrument_4.insert(UnderlyingInstrRegistry_4.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_4("LOCALMKTDATE_2004858724");
    noUnderlyings_0_0.set(UnderlyingIssueDate_4);
    UnderlyingInstrument_4.insert(UnderlyingIssueDate_4.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_4("STRING_1035257804");
    noUnderlyings_0_0.set(UnderlyingIssuer_4);
    UnderlyingInstrument_4.insert(UnderlyingIssuer_4.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_4("STRING_1494411791");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingLocaleOfIssue_4.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_4("LOCALMKTDATE_412415618");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityDate_4.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_4("MONTHYEAR_2109387504");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityMonthYear_4.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_4("TZTIMEONLY_1064546986");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_4);
    UnderlyingInstrument_4.insert(UnderlyingMaturityTime_4.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_4;
    UnderlyingNotionalPercentageOutstanding_4.setString("2.950000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_4);
    UnderlyingInstrument_4.insert(UnderlyingNotionalPercentageOutstanding_4.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_4('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_4);
    UnderlyingInstrument_4.insert(UnderlyingOptAttribute_4.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_4;
    UnderlyingOriginalNotionalPercentageOutstanding_4.setString("73.840000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_4);
    UnderlyingInstrument_4.insert(UnderlyingOriginalNotionalPercentageOutstanding_4.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_4("STRING_55582786");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_4);
    UnderlyingInstrument_4.insert(UnderlyingPriceUnitOfMeasure_4.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_4;
    UnderlyingPriceUnitOfMeasureQty_4.setString("1748458");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_4);
    UnderlyingInstrument_4.insert(UnderlyingPriceUnitOfMeasureQty_4.getString());
    FIX::UnderlyingProduct UnderlyingProduct_4(795167965);
    noUnderlyings_0_0.set(UnderlyingProduct_4);
    UnderlyingInstrument_4.insert(UnderlyingProduct_4.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_4(1588517517);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_4);
    UnderlyingInstrument_4.insert(UnderlyingPutOrCall_4.getString());
    FIX::UnderlyingPx UnderlyingPx_4;
    UnderlyingPx_4.setString("13833887");
    noUnderlyings_0_0.set(UnderlyingPx_4);
    UnderlyingInstrument_4.insert(UnderlyingPx_4.getString());
    FIX::UnderlyingQty UnderlyingQty_4;
    UnderlyingQty_4.setString("1778019");
    noUnderlyings_0_0.set(UnderlyingQty_4);
    UnderlyingInstrument_4.insert(UnderlyingQty_4.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_4("LOCALMKTDATE_1574414200");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_4);
    UnderlyingInstrument_4.insert(UnderlyingRedemptionDate_4.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_4("STRING_828128194");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_4);
    UnderlyingInstrument_4.insert(UnderlyingRepoCollateralSecurityType_4.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_4;
    UnderlyingRepurchaseRate_4.setString("35.680000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_4);
    UnderlyingInstrument_4.insert(UnderlyingRepurchaseRate_4.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_4(405212612);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_4);
    UnderlyingInstrument_4.insert(UnderlyingRepurchaseTerm_4.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_4("STRING_1223605426");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_4);
    UnderlyingInstrument_4.insert(UnderlyingRestructuringType_4.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_4("STRING_1976448492");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityDesc_4.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_4("EXCHANGE_1613749320");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityExchange_4.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_4("STRING_1447784422");
    noUnderlyings_0_0.set(UnderlyingSecurityID_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityID_4.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_4("STRING_2087159458");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityIDSource_4.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_4("STRING_2129460704");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_4);
    UnderlyingInstrument_4.insert(UnderlyingSecuritySubType_4.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_4("STRING_1677758034");
    noUnderlyings_0_0.set(UnderlyingSecurityType_4);
    UnderlyingInstrument_4.insert(UnderlyingSecurityType_4.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_4("STRING_1439070436");
    noUnderlyings_0_0.set(UnderlyingSeniority_4);
    UnderlyingInstrument_4.insert(UnderlyingSeniority_4.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_4("STRING_418190743");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_4);
    UnderlyingInstrument_4.insert(UnderlyingSettlMethod_4.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_4(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_4);
    UnderlyingInstrument_4.insert(UnderlyingSettlementType_4.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_4;
    UnderlyingStartValue_4.setString("20451464");
    noUnderlyings_0_0.set(UnderlyingStartValue_4);
    UnderlyingInstrument_4.insert(UnderlyingStartValue_4.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_4("STRING_1822285161");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_4);
    UnderlyingInstrument_4.insert(UnderlyingStateOrProvinceOfIssue_4.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_4("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_4);
    UnderlyingInstrument_4.insert(UnderlyingStrikeCurrency_4.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_4;
    UnderlyingStrikePrice_4.setString("11692133");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_4);
    UnderlyingInstrument_4.insert(UnderlyingStrikePrice_4.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_4("STRING_404118188");
    noUnderlyings_0_0.set(UnderlyingSymbol_4);
    UnderlyingInstrument_4.insert(UnderlyingSymbol_4.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_4("STRING_894824471");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_4);
    UnderlyingInstrument_4.insert(UnderlyingSymbolSfx_4.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_4("STRING_86276643");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_4);
    UnderlyingInstrument_4.insert(UnderlyingTimeUnit_4.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_4("STRING_1320958483");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_4);
    UnderlyingInstrument_4.insert(UnderlyingUnitOfMeasure_4.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_4;
    UnderlyingUnitOfMeasureQty_4.setString("20949106");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_4);
    UnderlyingInstrument_4.insert(UnderlyingUnitOfMeasureQty_4.getString());
    all_values.push_back(UnderlyingInstrument_4);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_7;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_7("STRING_1376541269");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_7);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_7.insert(UnderlyingSecurityAltID_7.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_7("STRING_122272869");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_7);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_7.insert(UnderlyingSecurityAltIDSource_7.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_8;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_8("STRING_1749681992");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_8);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_8.insert(UnderlyingSecurityAltID_8.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_8("STRING_817575138");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_8);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_8.insert(UnderlyingSecurityAltIDSource_8.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_6;
      FIX::UnderlyingStipType UnderlyingStipType_6("STRING_1927483977");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_6);
      UnderlyingStipulations_NoUnderlyingStips_6.insert(UnderlyingStipType_6.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_6("STRING_244505690");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_6);
      UnderlyingStipulations_NoUnderlyingStips_6.insert(UnderlyingStipValue_6.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_6);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_7;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_7("STRING_1874343897");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyID_7.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_7('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyIDSource_7.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_7(1409911585);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyRole_7.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_7);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_13("STRING_115983975");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_13);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13.insert(UnderlyingInstrumentPartySubID_13.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_13(710212359);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_13);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13.insert(UnderlyingInstrumentPartySubIDType_13.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_14("STRING_1642984551");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_14);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14.insert(UnderlyingInstrumentPartySubID_14.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_14(97961031);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_14);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14.insert(UnderlyingInstrumentPartySubIDType_14.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_8;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_8("STRING_240486745");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyID_8.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_8('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyIDSource_8.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_8(516151774);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyRole_8.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_8);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_15("STRING_832234150");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_15);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubID_15.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_15(190953287);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_15);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubIDType_15.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_16("STRING_366516808");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_16);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16.insert(UnderlyingInstrumentPartySubID_16.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_16(1765154765);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_16);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16.insert(UnderlyingInstrumentPartySubIDType_16.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_9;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_9("STRING_1360166592");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyID_9.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_9('7');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyIDSource_9.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_9(512495588);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_9);
      UndlyInstrumentParties_NoUndlyInstrumentParties_9.insert(UnderlyingInstrumentPartyRole_9.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_9);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_17("STRING_2091593479");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_17);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17.insert(UnderlyingInstrumentPartySubID_17.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_17(459922608);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_17);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17.insert(UnderlyingInstrumentPartySubIDType_17.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_2;
  FIX::Yield Yield_2;
  Yield_2.setString("36.140000");
  msg.set(Yield_2);
  YieldData_2.insert(Yield_2.getString());
  FIX::YieldCalcDate YieldCalcDate_2("LOCALMKTDATE_1320651100");
  msg.set(YieldCalcDate_2);
  YieldData_2.insert(YieldCalcDate_2.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_2("LOCALMKTDATE_582195477");
  msg.set(YieldRedemptionDate_2);
  YieldData_2.insert(YieldRedemptionDate_2.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_2;
  YieldRedemptionPrice_2.setString("20031556");
  msg.set(YieldRedemptionPrice_2);
  YieldData_2.insert(YieldRedemptionPrice_2.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_2(2138226239);
  msg.set(YieldRedemptionPriceType_2);
  YieldData_2.insert(YieldRedemptionPriceType_2.getString());
  FIX::YieldType YieldType_2("STRING_LASTMONTH");
  msg.set(YieldType_2);
  YieldData_2.insert(YieldType_2.getString());
  all_values.push_back(YieldData_2);


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }

  for (const auto& xml_l : elt_lists) {
    bool found = false;
    for (const auto& l : all_values) {
      if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {
        found = true;
        break;
      } // end if includes
    } // end for all_values
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
