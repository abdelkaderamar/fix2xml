#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AllocationInstruction.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstruction, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstruction msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationInstruction_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_0;
  AccruedInterestAmt_0.setString("8293119");
  msg.set(AccruedInterestAmt_0);
  AllocationInstruction_0.insert(AccruedInterestAmt_0.getString());
  FIX::AccruedInterestRate AccruedInterestRate_0;
  AccruedInterestRate_0.setString("91.790000");
  msg.set(AccruedInterestRate_0);
  AllocationInstruction_0.insert(AccruedInterestRate_0.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_0(99);
  msg.set(AllocCancReplaceReason_0);
  AllocationInstruction_0.insert(AllocCancReplaceReason_0.getString());
  FIX::AllocID AllocID_0("STRING_1004187554");
  msg.set(AllocID_0);
  AllocationInstruction_0.insert(AllocID_0.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_0(4);
  msg.set(AllocIntermedReqType_0);
  AllocationInstruction_0.insert(AllocIntermedReqType_0.getString());
  FIX::AllocLinkID AllocLinkID_0("STRING_2093804038");
  msg.set(AllocLinkID_0);
  AllocationInstruction_0.insert(AllocLinkID_0.getString());
  FIX::AllocLinkType AllocLinkType_0(0);
  msg.set(AllocLinkType_0);
  AllocationInstruction_0.insert(AllocLinkType_0.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_0(1);
  msg.set(AllocNoOrdersType_0);
  AllocationInstruction_0.insert(AllocNoOrdersType_0.getString());
  FIX::AllocTransType AllocTransType_0('1');
  msg.set(AllocTransType_0);
  AllocationInstruction_0.insert(AllocTransType_0.getString());
  FIX::AllocType AllocType_0(5);
  msg.set(AllocType_0);
  AllocationInstruction_0.insert(AllocType_0.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_0(true);
  msg.set(AutoAcceptIndicator_0);
  AllocationInstruction_0.insert(AutoAcceptIndicator_0.getString());
  FIX::AvgParPx AvgParPx_0;
  AvgParPx_0.setString("16401858");
  msg.set(AvgParPx_0);
  AllocationInstruction_0.insert(AvgParPx_0.getString());
  FIX::AvgPx AvgPx_0;
  AvgPx_0.setString("17161031");
  msg.set(AvgPx_0);
  AllocationInstruction_0.insert(AvgPx_0.getString());
  FIX::AvgPxIndicator AvgPxIndicator_0(0);
  msg.set(AvgPxIndicator_0);
  AllocationInstruction_0.insert(AvgPxIndicator_0.getString());
  FIX::AvgPxPrecision AvgPxPrecision_0(323911073);
  msg.set(AvgPxPrecision_0);
  AllocationInstruction_0.insert(AvgPxPrecision_0.getString());
  FIX::BookingRefID BookingRefID_0("STRING_860604286");
  msg.set(BookingRefID_0);
  AllocationInstruction_0.insert(BookingRefID_0.getString());
  FIX::BookingType BookingType_0(1);
  msg.set(BookingType_0);
  AllocationInstruction_0.insert(BookingType_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_1("LOCALMKTDATE_1478613568");
  msg.set(ClearingBusinessDate_1);
  AllocationInstruction_0.insert(ClearingBusinessDate_1.getString());
  FIX::Concession Concession_0;
  Concession_0.setString("19310339");
  msg.set(Concession_0);
  AllocationInstruction_0.insert(Concession_0.getString());
  FIX::Currency Currency_1("EUR");
  msg.set(Currency_1);
  AllocationInstruction_0.insert(Currency_1.getString());
  FIX::CustOrderCapacity CustOrderCapacity_0(2);
  msg.set(CustOrderCapacity_0);
  AllocationInstruction_0.insert(CustOrderCapacity_0.getString());
  FIX::EncodedText EncodedText_1("DATA_1651014007");
  msg.set(EncodedText_1);
  AllocationInstruction_0.insert(EncodedText_1.getString());
  FIX::EncodedTextLen EncodedTextLen_1(107615085);
  msg.set(EncodedTextLen_1);
  AllocationInstruction_0.insert(EncodedTextLen_1.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_0;
  EndAccruedInterestAmt_0.setString("9979022");
  msg.set(EndAccruedInterestAmt_0);
  AllocationInstruction_0.insert(EndAccruedInterestAmt_0.getString());
  FIX::EndCash EndCash_0;
  EndCash_0.setString("12059646");
  msg.set(EndCash_0);
  AllocationInstruction_0.insert(EndCash_0.getString());
  FIX::GrossTradeAmt GrossTradeAmt_0;
  GrossTradeAmt_0.setString("1313304");
  msg.set(GrossTradeAmt_0);
  AllocationInstruction_0.insert(GrossTradeAmt_0.getString());
  FIX::InterestAtMaturity InterestAtMaturity_0;
  InterestAtMaturity_0.setString("3716678");
  msg.set(InterestAtMaturity_0);
  AllocationInstruction_0.insert(InterestAtMaturity_0.getString());
  FIX::LastFragment LastFragment_0(true);
  msg.set(LastFragment_0);
  AllocationInstruction_0.insert(LastFragment_0.getString());
  FIX::LastMkt LastMkt_1("EXCHANGE_1963404663");
  msg.set(LastMkt_1);
  AllocationInstruction_0.insert(LastMkt_1.getString());
  FIX::LegalConfirm LegalConfirm_0(false);
  msg.set(LegalConfirm_0);
  AllocationInstruction_0.insert(LegalConfirm_0.getString());
  FIX::MatchType MatchType_0("STRING_M6");
  msg.set(MatchType_0);
  AllocationInstruction_0.insert(MatchType_0.getString());
  FIX::MessageEventSource MessageEventSource_0("STRING_1171110194");
  msg.set(MessageEventSource_0);
  AllocationInstruction_0.insert(MessageEventSource_0.getString());
  FIX::MultiLegReportingType MultiLegReportingType_0('2');
  msg.set(MultiLegReportingType_0);
  AllocationInstruction_0.insert(MultiLegReportingType_0.getString());
  FIX::NetMoney NetMoney_0;
  NetMoney_0.setString("6589518");
  msg.set(NetMoney_0);
  AllocationInstruction_0.insert(NetMoney_0.getString());
  FIX::NumDaysInterest NumDaysInterest_0(1158808605);
  msg.set(NumDaysInterest_0);
  AllocationInstruction_0.insert(NumDaysInterest_0.getString());
  FIX::PositionEffect PositionEffect_0('R');
  msg.set(PositionEffect_0);
  AllocationInstruction_0.insert(PositionEffect_0.getString());
  FIX::PreviouslyReported PreviouslyReported_0(false);
  msg.set(PreviouslyReported_0);
  AllocationInstruction_0.insert(PreviouslyReported_0.getString());
  FIX::PriceType PriceType_0(6);
  msg.set(PriceType_0);
  AllocationInstruction_0.insert(PriceType_0.getString());
  FIX::QtyType QtyType_1(1);
  msg.set(QtyType_1);
  AllocationInstruction_0.insert(QtyType_1.getString());
  FIX::Quantity Quantity_1;
  Quantity_1.setString("668656");
  msg.set(Quantity_1);
  AllocationInstruction_0.insert(Quantity_1.getString());
  FIX::RefAllocID RefAllocID_0("STRING_75665315");
  msg.set(RefAllocID_0);
  AllocationInstruction_0.insert(RefAllocID_0.getString());
  FIX::ReversalIndicator ReversalIndicator_0(false);
  msg.set(ReversalIndicator_0);
  AllocationInstruction_0.insert(ReversalIndicator_0.getString());
  FIX::RndPx RndPx_0;
  RndPx_0.setString("17829688");
  msg.set(RndPx_0);
  AllocationInstruction_0.insert(RndPx_0.getString());
  FIX::SecondaryAllocID SecondaryAllocID_0("STRING_1186991141");
  msg.set(SecondaryAllocID_0);
  AllocationInstruction_0.insert(SecondaryAllocID_0.getString());
  FIX::SettlDate SettlDate_0("LOCALMKTDATE_733783614");
  msg.set(SettlDate_0);
  AllocationInstruction_0.insert(SettlDate_0.getString());
  FIX::SettlType SettlType_0("STRING_9");
  msg.set(SettlType_0);
  AllocationInstruction_0.insert(SettlType_0.getString());
  FIX::Side Side_0('1');
  msg.set(Side_0);
  AllocationInstruction_0.insert(Side_0.getString());
  FIX::StartCash StartCash_0;
  StartCash_0.setString("649135");
  msg.set(StartCash_0);
  AllocationInstruction_0.insert(StartCash_0.getString());
  FIX::Text Text_1("STRING_279639801");
  msg.set(Text_1);
  AllocationInstruction_0.insert(Text_1.getString());
  FIX::TotNoAllocs TotNoAllocs_0(200673434);
  msg.set(TotNoAllocs_0);
  AllocationInstruction_0.insert(TotNoAllocs_0.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_0;
  TotalAccruedInterestAmt_0.setString("8353007");
  msg.set(TotalAccruedInterestAmt_0);
  AllocationInstruction_0.insert(TotalAccruedInterestAmt_0.getString());
  FIX::TotalTakedown TotalTakedown_0;
  TotalTakedown_0.setString("9327952");
  msg.set(TotalTakedown_0);
  AllocationInstruction_0.insert(TotalTakedown_0.getString());
  FIX::TradeDate TradeDate_1("LOCALMKTDATE_1851687441");
  msg.set(TradeDate_1);
  AllocationInstruction_0.insert(TradeDate_1.getString());
  FIX::TradeInputSource TradeInputSource_0("STRING_942915853");
  msg.set(TradeInputSource_0);
  AllocationInstruction_0.insert(TradeInputSource_0.getString());
  FIX::TradeOriginationDate TradeOriginationDate_0("LOCALMKTDATE_1930697524");
  msg.set(TradeOriginationDate_0);
  AllocationInstruction_0.insert(TradeOriginationDate_0.getString());
  FIX::TradingSessionID TradingSessionID_1("STRING_4");
  msg.set(TradingSessionID_1);
  AllocationInstruction_0.insert(TradingSessionID_1.getString());
  FIX::TradingSessionSubID TradingSessionSubID_1("STRING_6");
  msg.set(TradingSessionSubID_1);
  AllocationInstruction_0.insert(TradingSessionSubID_1.getString());
  FIX::TransactTime TransactTime_1(FIX::UTCTIMESTAMP(16, 6, 34, 19, 10, 2012));
  msg.set(TransactTime_1);
  AllocationInstruction_0.insert(TransactTime_1.getString());
  FIX::TrdSubType TrdSubType_0(10);
  msg.set(TrdSubType_0);
  AllocationInstruction_0.insert(TrdSubType_0.getString());
  FIX::TrdType TrdType_0(13);
  msg.set(TrdType_0);
  AllocationInstruction_0.insert(TrdType_0.getString());
  all_values.push_back(AllocationInstruction_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_0("STRING_1611562404");
    noAllocs_0_0.set(AllocAccount_0);
    AllocGrp_NoAllocs_0.insert(AllocAccount_0.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_0;
    AllocAccruedInterestAmt_0.setString("18576824");
    noAllocs_0_0.set(AllocAccruedInterestAmt_0);
    AllocGrp_NoAllocs_0.insert(AllocAccruedInterestAmt_0.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_0(357785887);
    noAllocs_0_0.set(AllocAcctIDSource_0);
    AllocGrp_NoAllocs_0.insert(AllocAcctIDSource_0.getString());
    FIX::AllocAvgPx AllocAvgPx_0;
    AllocAvgPx_0.setString("16784280");
    noAllocs_0_0.set(AllocAvgPx_0);
    AllocGrp_NoAllocs_0.insert(AllocAvgPx_0.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_0("STRING_1933347716");
    noAllocs_0_0.set(AllocCustomerCapacity_0);
    AllocGrp_NoAllocs_0.insert(AllocCustomerCapacity_0.getString());
    FIX::AllocHandlInst AllocHandlInst_0(3);
    noAllocs_0_0.set(AllocHandlInst_0);
    AllocGrp_NoAllocs_0.insert(AllocHandlInst_0.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_0;
    AllocInterestAtMaturity_0.setString("13139132");
    noAllocs_0_0.set(AllocInterestAtMaturity_0);
    AllocGrp_NoAllocs_0.insert(AllocInterestAtMaturity_0.getString());
    FIX::AllocMethod AllocMethod_0(1);
    noAllocs_0_0.set(AllocMethod_0);
    AllocGrp_NoAllocs_0.insert(AllocMethod_0.getString());
    FIX::AllocNetMoney AllocNetMoney_0;
    AllocNetMoney_0.setString("15014420");
    noAllocs_0_0.set(AllocNetMoney_0);
    AllocGrp_NoAllocs_0.insert(AllocNetMoney_0.getString());
    FIX::AllocPositionEffect AllocPositionEffect_0('C');
    noAllocs_0_0.set(AllocPositionEffect_0);
    AllocGrp_NoAllocs_0.insert(AllocPositionEffect_0.getString());
    FIX::AllocPrice AllocPrice_0;
    AllocPrice_0.setString("5776274");
    noAllocs_0_0.set(AllocPrice_0);
    AllocGrp_NoAllocs_0.insert(AllocPrice_0.getString());
    FIX::AllocQty AllocQty_0;
    AllocQty_0.setString("15663555");
    noAllocs_0_0.set(AllocQty_0);
    AllocGrp_NoAllocs_0.insert(AllocQty_0.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_0;
    AllocSettlCurrAmt_0.setString("20896424");
    noAllocs_0_0.set(AllocSettlCurrAmt_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlCurrAmt_0.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_0("EUR");
    noAllocs_0_0.set(AllocSettlCurrency_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlCurrency_0.getString());
    FIX::AllocSettlInstType AllocSettlInstType_0(1);
    noAllocs_0_0.set(AllocSettlInstType_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlInstType_0.getString());
    FIX::AllocText AllocText_0("STRING_482504677");
    noAllocs_0_0.set(AllocText_0);
    AllocGrp_NoAllocs_0.insert(AllocText_0.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_0("STRING_1");
    noAllocs_0_0.set(ClearingFeeIndicator_0);
    AllocGrp_NoAllocs_0.insert(ClearingFeeIndicator_0.getString());
    FIX::EncodedAllocText EncodedAllocText_0("DATA_658167922");
    noAllocs_0_0.set(EncodedAllocText_0);
    AllocGrp_NoAllocs_0.insert(EncodedAllocText_0.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_0(1392673127);
    noAllocs_0_0.set(EncodedAllocTextLen_0);
    AllocGrp_NoAllocs_0.insert(EncodedAllocTextLen_0.getString());
    FIX::IndividualAllocID IndividualAllocID_0("STRING_123851213");
    noAllocs_0_0.set(IndividualAllocID_0);
    AllocGrp_NoAllocs_0.insert(IndividualAllocID_0.getString());
    FIX::IndividualAllocType IndividualAllocType_0(2);
    noAllocs_0_0.set(IndividualAllocType_0);
    AllocGrp_NoAllocs_0.insert(IndividualAllocType_0.getString());
    FIX::MatchStatus MatchStatus_0('1');
    noAllocs_0_0.set(MatchStatus_0);
    AllocGrp_NoAllocs_0.insert(MatchStatus_0.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_0(true);
    noAllocs_0_0.set(NotifyBrokerOfCredit_0);
    AllocGrp_NoAllocs_0.insert(NotifyBrokerOfCredit_0.getString());
    FIX::ProcessCode ProcessCode_0('6');
    noAllocs_0_0.set(ProcessCode_0);
    AllocGrp_NoAllocs_0.insert(ProcessCode_0.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_0("STRING_518679082");
    noAllocs_0_0.set(SecondaryIndividualAllocID_0);
    AllocGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_0.getString());
    FIX::SettlCurrAmt SettlCurrAmt_0;
    SettlCurrAmt_0.setString("9278124");
    noAllocs_0_0.set(SettlCurrAmt_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrAmt_0.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_0;
    SettlCurrFxRate_0.setString("8421463");
    noAllocs_0_0.set(SettlCurrFxRate_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrFxRate_0.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_0('M');
    noAllocs_0_0.set(SettlCurrFxRateCalc_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrFxRateCalc_0.getString());
    FIX::SettlCurrency SettlCurrency_0("CAN");
    noAllocs_0_0.set(SettlCurrency_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrency_0.getString());
    all_values.push_back(AllocGrp_NoAllocs_0);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_0;
      FIX::ClearingInstruction ClearingInstruction_0(13);
      noClearingInstructions_0_1_0.set(ClearingInstruction_0);
      ClrInstGrp_NoClearingInstructions_0.insert(ClearingInstruction_0.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_0);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_1;
      FIX::ClearingInstruction ClearingInstruction_1(0);
      noClearingInstructions_0_1_1.set(ClearingInstruction_1);
      ClrInstGrp_NoClearingInstructions_1.insert(ClearingInstruction_1.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_1);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_2;
      FIX::ClearingInstruction ClearingInstruction_2(10);
      noClearingInstructions_0_1_2.set(ClearingInstruction_2);
      ClrInstGrp_NoClearingInstructions_2.insert(ClearingInstruction_2.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_2);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_0;
    FIX::CommCurrency CommCurrency_0("GBP");
    noAllocs_0_0.set(CommCurrency_0);
    CommissionData_0.insert(CommCurrency_0.getString());
    FIX::CommType CommType_0('2');
    noAllocs_0_0.set(CommType_0);
    CommissionData_0.insert(CommType_0.getString());
    FIX::Commission Commission_0;
    Commission_0.setString("3218492");
    noAllocs_0_0.set(Commission_0);
    CommissionData_0.insert(Commission_0.getString());
    FIX::FundRenewWaiv FundRenewWaiv_0('Y');
    noAllocs_0_0.set(FundRenewWaiv_0);
    CommissionData_0.insert(FundRenewWaiv_0.getString());
    all_values.push_back(CommissionData_0);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_0;
      FIX::MiscFeeAmt MiscFeeAmt_0;
      MiscFeeAmt_0.setString("8994767");
      noMiscFees_0_1_0.set(MiscFeeAmt_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeAmt_0.getString());
      FIX::MiscFeeBasis MiscFeeBasis_0(0);
      noMiscFees_0_1_0.set(MiscFeeBasis_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeBasis_0.getString());
      FIX::MiscFeeCurr MiscFeeCurr_0("JPY");
      noMiscFees_0_1_0.set(MiscFeeCurr_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeCurr_0.getString());
      FIX::MiscFeeType MiscFeeType_0("STRING_11");
      noMiscFees_0_1_0.set(MiscFeeType_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeType_0.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_0);

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_1;
      FIX::MiscFeeAmt MiscFeeAmt_1;
      MiscFeeAmt_1.setString("13565842");
      noMiscFees_0_1_1.set(MiscFeeAmt_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeAmt_1.getString());
      FIX::MiscFeeBasis MiscFeeBasis_1(1);
      noMiscFees_0_1_1.set(MiscFeeBasis_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeBasis_1.getString());
      FIX::MiscFeeCurr MiscFeeCurr_1("CAN");
      noMiscFees_0_1_1.set(MiscFeeCurr_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeCurr_1.getString());
      FIX::MiscFeeType MiscFeeType_1("STRING_8");
      noMiscFees_0_1_1.set(MiscFeeType_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeType_1.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_1);

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_2;
      FIX::NestedPartyID NestedPartyID_2("STRING_680318233");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyID_2.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_2('3');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyIDSource_2.getString());
      FIX::NestedPartyRole NestedPartyRole_2(622683860);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyRole_2.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_2);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_4;
        FIX::NestedPartySubID NestedPartySubID_4("STRING_904961160");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_4);
        NstdPtysSubGrp_NoNestedPartySubIDs_4.insert(NestedPartySubID_4.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_4(1550496273);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_4);
        NstdPtysSubGrp_NoNestedPartySubIDs_4.insert(NestedPartySubIDType_4.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_4);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_3;
      FIX::NestedPartyID NestedPartyID_3("STRING_375996619");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyID_3.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_3('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyIDSource_3.getString());
      FIX::NestedPartyRole NestedPartyRole_3(1403427516);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyRole_3.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_3);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_5;
        FIX::NestedPartySubID NestedPartySubID_5("STRING_1505072017");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_5);
        NstdPtysSubGrp_NoNestedPartySubIDs_5.insert(NestedPartySubID_5.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_5(966557513);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_5);
        NstdPtysSubGrp_NoNestedPartySubIDs_5.insert(NestedPartySubIDType_5.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_5);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_0;
    FIX::SettlDeliveryType SettlDeliveryType_0(1);
    noAllocs_0_0.set(SettlDeliveryType_0);
    SettlInstructionsData_0.insert(SettlDeliveryType_0.getString());
    FIX::StandInstDbID StandInstDbID_0("STRING_1068111221");
    noAllocs_0_0.set(StandInstDbID_0);
    SettlInstructionsData_0.insert(StandInstDbID_0.getString());
    FIX::StandInstDbName StandInstDbName_0("STRING_315551579");
    noAllocs_0_0.set(StandInstDbName_0);
    SettlInstructionsData_0.insert(StandInstDbName_0.getString());
    FIX::StandInstDbType StandInstDbType_0(0);
    noAllocs_0_0.set(StandInstDbType_0);
    SettlInstructionsData_0.insert(StandInstDbType_0.getString());
    all_values.push_back(SettlInstructionsData_0);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_0;
      FIX::DlvyInstType DlvyInstType_0('C');
      noDlvyInst_0_1_0.set(DlvyInstType_0);
      DlvyInstGrp_NoDlvyInst_0.insert(DlvyInstType_0.getString());
      FIX::SettlInstSource SettlInstSource_0('2');
      noDlvyInst_0_1_0.set(SettlInstSource_0);
      DlvyInstGrp_NoDlvyInst_0.insert(SettlInstSource_0.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_0);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_0;
        FIX::SettlPartyID SettlPartyID_0("STRING_1536877580");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyID_0.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_0('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyIDSource_0.getString());
        FIX::SettlPartyRole SettlPartyRole_0(818681678);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyRole_0.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_0);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_0;
          FIX::SettlPartySubID SettlPartySubID_0("STRING_1938439063");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_0);
          SettlPtysSubGrp_NoSettlPartySubIDs_0.insert(SettlPartySubID_0.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_0(27782330);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_0);
          SettlPtysSubGrp_NoSettlPartySubIDs_0.insert(SettlPartySubIDType_0.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_0);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_1;
          FIX::SettlPartySubID SettlPartySubID_1("STRING_1079970183");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_1);
          SettlPtysSubGrp_NoSettlPartySubIDs_1.insert(SettlPartySubID_1.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_1(1423253169);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_1);
          SettlPtysSubGrp_NoSettlPartySubIDs_1.insert(SettlPartySubIDType_1.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_1);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_2;
          FIX::SettlPartySubID SettlPartySubID_2("STRING_2042534551");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_2);
          SettlPtysSubGrp_NoSettlPartySubIDs_2.insert(SettlPartySubID_2.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_2(337958302);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_2);
          SettlPtysSubGrp_NoSettlPartySubIDs_2.insert(SettlPartySubIDType_2.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_2);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_1("STRING_1031918489");
    noAllocs_0_1.set(AllocAccount_1);
    AllocGrp_NoAllocs_1.insert(AllocAccount_1.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_1;
    AllocAccruedInterestAmt_1.setString("5753691");
    noAllocs_0_1.set(AllocAccruedInterestAmt_1);
    AllocGrp_NoAllocs_1.insert(AllocAccruedInterestAmt_1.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_1(724240380);
    noAllocs_0_1.set(AllocAcctIDSource_1);
    AllocGrp_NoAllocs_1.insert(AllocAcctIDSource_1.getString());
    FIX::AllocAvgPx AllocAvgPx_1;
    AllocAvgPx_1.setString("16546023");
    noAllocs_0_1.set(AllocAvgPx_1);
    AllocGrp_NoAllocs_1.insert(AllocAvgPx_1.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_1("STRING_109219435");
    noAllocs_0_1.set(AllocCustomerCapacity_1);
    AllocGrp_NoAllocs_1.insert(AllocCustomerCapacity_1.getString());
    FIX::AllocHandlInst AllocHandlInst_1(1);
    noAllocs_0_1.set(AllocHandlInst_1);
    AllocGrp_NoAllocs_1.insert(AllocHandlInst_1.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_1;
    AllocInterestAtMaturity_1.setString("10576149");
    noAllocs_0_1.set(AllocInterestAtMaturity_1);
    AllocGrp_NoAllocs_1.insert(AllocInterestAtMaturity_1.getString());
    FIX::AllocMethod AllocMethod_1(3);
    noAllocs_0_1.set(AllocMethod_1);
    AllocGrp_NoAllocs_1.insert(AllocMethod_1.getString());
    FIX::AllocNetMoney AllocNetMoney_1;
    AllocNetMoney_1.setString("9546951");
    noAllocs_0_1.set(AllocNetMoney_1);
    AllocGrp_NoAllocs_1.insert(AllocNetMoney_1.getString());
    FIX::AllocPositionEffect AllocPositionEffect_1('F');
    noAllocs_0_1.set(AllocPositionEffect_1);
    AllocGrp_NoAllocs_1.insert(AllocPositionEffect_1.getString());
    FIX::AllocPrice AllocPrice_1;
    AllocPrice_1.setString("11439745");
    noAllocs_0_1.set(AllocPrice_1);
    AllocGrp_NoAllocs_1.insert(AllocPrice_1.getString());
    FIX::AllocQty AllocQty_1;
    AllocQty_1.setString("3122834");
    noAllocs_0_1.set(AllocQty_1);
    AllocGrp_NoAllocs_1.insert(AllocQty_1.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_1;
    AllocSettlCurrAmt_1.setString("12801163");
    noAllocs_0_1.set(AllocSettlCurrAmt_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlCurrAmt_1.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_1("EUR");
    noAllocs_0_1.set(AllocSettlCurrency_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlCurrency_1.getString());
    FIX::AllocSettlInstType AllocSettlInstType_1(0);
    noAllocs_0_1.set(AllocSettlInstType_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlInstType_1.getString());
    FIX::AllocText AllocText_1("STRING_855825909");
    noAllocs_0_1.set(AllocText_1);
    AllocGrp_NoAllocs_1.insert(AllocText_1.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_1("STRING_I");
    noAllocs_0_1.set(ClearingFeeIndicator_1);
    AllocGrp_NoAllocs_1.insert(ClearingFeeIndicator_1.getString());
    FIX::EncodedAllocText EncodedAllocText_1("DATA_85585142");
    noAllocs_0_1.set(EncodedAllocText_1);
    AllocGrp_NoAllocs_1.insert(EncodedAllocText_1.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_1(30535614);
    noAllocs_0_1.set(EncodedAllocTextLen_1);
    AllocGrp_NoAllocs_1.insert(EncodedAllocTextLen_1.getString());
    FIX::IndividualAllocID IndividualAllocID_1("STRING_1515026108");
    noAllocs_0_1.set(IndividualAllocID_1);
    AllocGrp_NoAllocs_1.insert(IndividualAllocID_1.getString());
    FIX::IndividualAllocType IndividualAllocType_1(1);
    noAllocs_0_1.set(IndividualAllocType_1);
    AllocGrp_NoAllocs_1.insert(IndividualAllocType_1.getString());
    FIX::MatchStatus MatchStatus_1('2');
    noAllocs_0_1.set(MatchStatus_1);
    AllocGrp_NoAllocs_1.insert(MatchStatus_1.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_1(false);
    noAllocs_0_1.set(NotifyBrokerOfCredit_1);
    AllocGrp_NoAllocs_1.insert(NotifyBrokerOfCredit_1.getString());
    FIX::ProcessCode ProcessCode_1('1');
    noAllocs_0_1.set(ProcessCode_1);
    AllocGrp_NoAllocs_1.insert(ProcessCode_1.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_1("STRING_1324720888");
    noAllocs_0_1.set(SecondaryIndividualAllocID_1);
    AllocGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_1.getString());
    FIX::SettlCurrAmt SettlCurrAmt_1;
    SettlCurrAmt_1.setString("2140064");
    noAllocs_0_1.set(SettlCurrAmt_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrAmt_1.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_1;
    SettlCurrFxRate_1.setString("16221208");
    noAllocs_0_1.set(SettlCurrFxRate_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrFxRate_1.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_1('D');
    noAllocs_0_1.set(SettlCurrFxRateCalc_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrFxRateCalc_1.getString());
    FIX::SettlCurrency SettlCurrency_1("GBP");
    noAllocs_0_1.set(SettlCurrency_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrency_1.getString());
    all_values.push_back(AllocGrp_NoAllocs_1);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_3;
      FIX::ClearingInstruction ClearingInstruction_3(11);
      noClearingInstructions_1_1_0.set(ClearingInstruction_3);
      ClrInstGrp_NoClearingInstructions_3.insert(ClearingInstruction_3.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_3);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_4;
      FIX::ClearingInstruction ClearingInstruction_4(10);
      noClearingInstructions_1_1_1.set(ClearingInstruction_4);
      ClrInstGrp_NoClearingInstructions_4.insert(ClearingInstruction_4.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_4);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_5;
      FIX::ClearingInstruction ClearingInstruction_5(8);
      noClearingInstructions_1_1_2.set(ClearingInstruction_5);
      ClrInstGrp_NoClearingInstructions_5.insert(ClearingInstruction_5.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_5);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_1;
    FIX::CommCurrency CommCurrency_1("JPY");
    noAllocs_0_1.set(CommCurrency_1);
    CommissionData_1.insert(CommCurrency_1.getString());
    FIX::CommType CommType_1('6');
    noAllocs_0_1.set(CommType_1);
    CommissionData_1.insert(CommType_1.getString());
    FIX::Commission Commission_1;
    Commission_1.setString("12788619");
    noAllocs_0_1.set(Commission_1);
    CommissionData_1.insert(Commission_1.getString());
    FIX::FundRenewWaiv FundRenewWaiv_1('Y');
    noAllocs_0_1.set(FundRenewWaiv_1);
    CommissionData_1.insert(FundRenewWaiv_1.getString());
    all_values.push_back(CommissionData_1);

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_2;
      FIX::MiscFeeAmt MiscFeeAmt_2;
      MiscFeeAmt_2.setString("2753528");
      noMiscFees_1_1_0.set(MiscFeeAmt_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeAmt_2.getString());
      FIX::MiscFeeBasis MiscFeeBasis_2(2);
      noMiscFees_1_1_0.set(MiscFeeBasis_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeBasis_2.getString());
      FIX::MiscFeeCurr MiscFeeCurr_2("USD");
      noMiscFees_1_1_0.set(MiscFeeCurr_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeCurr_2.getString());
      FIX::MiscFeeType MiscFeeType_2("STRING_8");
      noMiscFees_1_1_0.set(MiscFeeType_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeType_2.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_2);

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_4;
      FIX::NestedPartyID NestedPartyID_4("STRING_1426975935");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyID_4.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_4('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyIDSource_4.getString());
      FIX::NestedPartyRole NestedPartyRole_4(1177103556);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyRole_4.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_4);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_6;
        FIX::NestedPartySubID NestedPartySubID_6("STRING_1063960489");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_6);
        NstdPtysSubGrp_NoNestedPartySubIDs_6.insert(NestedPartySubID_6.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_6(652082630);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_6);
        NstdPtysSubGrp_NoNestedPartySubIDs_6.insert(NestedPartySubIDType_6.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_6);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_5;
      FIX::NestedPartyID NestedPartyID_5("STRING_843793374");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyID_5.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_5('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyIDSource_5.getString());
      FIX::NestedPartyRole NestedPartyRole_5(1194233248);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyRole_5.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_5);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_7;
        FIX::NestedPartySubID NestedPartySubID_7("STRING_1464191097");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_7);
        NstdPtysSubGrp_NoNestedPartySubIDs_7.insert(NestedPartySubID_7.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_7(668870400);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_7);
        NstdPtysSubGrp_NoNestedPartySubIDs_7.insert(NestedPartySubIDType_7.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_7);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_8;
        FIX::NestedPartySubID NestedPartySubID_8("STRING_621521024");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_8);
        NstdPtysSubGrp_NoNestedPartySubIDs_8.insert(NestedPartySubID_8.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_8(1573248470);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_8);
        NstdPtysSubGrp_NoNestedPartySubIDs_8.insert(NestedPartySubIDType_8.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_8);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_9;
        FIX::NestedPartySubID NestedPartySubID_9("STRING_481465855");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_9);
        NstdPtysSubGrp_NoNestedPartySubIDs_9.insert(NestedPartySubID_9.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_9(106446275);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_9);
        NstdPtysSubGrp_NoNestedPartySubIDs_9.insert(NestedPartySubIDType_9.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_9);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_1;
    FIX::SettlDeliveryType SettlDeliveryType_1(3);
    noAllocs_0_1.set(SettlDeliveryType_1);
    SettlInstructionsData_1.insert(SettlDeliveryType_1.getString());
    FIX::StandInstDbID StandInstDbID_1("STRING_1018301689");
    noAllocs_0_1.set(StandInstDbID_1);
    SettlInstructionsData_1.insert(StandInstDbID_1.getString());
    FIX::StandInstDbName StandInstDbName_1("STRING_1245973875");
    noAllocs_0_1.set(StandInstDbName_1);
    SettlInstructionsData_1.insert(StandInstDbName_1.getString());
    FIX::StandInstDbType StandInstDbType_1(0);
    noAllocs_0_1.set(StandInstDbType_1);
    SettlInstructionsData_1.insert(StandInstDbType_1.getString());
    all_values.push_back(SettlInstructionsData_1);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_1;
      FIX::DlvyInstType DlvyInstType_1('C');
      noDlvyInst_1_1_0.set(DlvyInstType_1);
      DlvyInstGrp_NoDlvyInst_1.insert(DlvyInstType_1.getString());
      FIX::SettlInstSource SettlInstSource_1('1');
      noDlvyInst_1_1_0.set(SettlInstSource_1);
      DlvyInstGrp_NoDlvyInst_1.insert(SettlInstSource_1.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_1);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_1;
        FIX::SettlPartyID SettlPartyID_1("STRING_1658850572");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyID_1.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_1('3');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyIDSource_1.getString());
        FIX::SettlPartyRole SettlPartyRole_1(1148152897);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyRole_1.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_1);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_3;
          FIX::SettlPartySubID SettlPartySubID_3("STRING_881718544");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_3);
          SettlPtysSubGrp_NoSettlPartySubIDs_3.insert(SettlPartySubID_3.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_3(1666596243);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_3);
          SettlPtysSubGrp_NoSettlPartySubIDs_3.insert(SettlPartySubIDType_3.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_3);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_4;
          FIX::SettlPartySubID SettlPartySubID_4("STRING_98735817");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_4);
          SettlPtysSubGrp_NoSettlPartySubIDs_4.insert(SettlPartySubID_4.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_4(161210832);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_4);
          SettlPtysSubGrp_NoSettlPartySubIDs_4.insert(SettlPartySubIDType_4.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_4);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_2;
        FIX::SettlPartyID SettlPartyID_2("STRING_1215530624");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyID_2.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_2('1');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyIDSource_2.getString());
        FIX::SettlPartyRole SettlPartyRole_2(1618722381);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyRole_2.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_2);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_5;
          FIX::SettlPartySubID SettlPartySubID_5("STRING_1927922003");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_5);
          SettlPtysSubGrp_NoSettlPartySubIDs_5.insert(SettlPartySubID_5.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_5(315032108);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_5);
          SettlPtysSubGrp_NoSettlPartySubIDs_5.insert(SettlPartySubIDType_5.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_5);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_6;
          FIX::SettlPartySubID SettlPartySubID_6("STRING_1382192094");
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubID_6);
          SettlPtysSubGrp_NoSettlPartySubIDs_6.insert(SettlPartySubID_6.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_6(974671603);
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubIDType_6);
          SettlPtysSubGrp_NoSettlPartySubIDs_6.insert(SettlPartySubIDType_6.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_6);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_0;
    FIX::ExecID ExecID_0("STRING_698899543");
    noExecs_0_0.set(ExecID_0);
    ExecAllocGrp_NoExecs_0.insert(ExecID_0.getString());
    FIX::FirmTradeID FirmTradeID_0("STRING_1643542004");
    noExecs_0_0.set(FirmTradeID_0);
    ExecAllocGrp_NoExecs_0.insert(FirmTradeID_0.getString());
    FIX::LastCapacity LastCapacity_0('3');
    noExecs_0_0.set(LastCapacity_0);
    ExecAllocGrp_NoExecs_0.insert(LastCapacity_0.getString());
    FIX::LastParPx LastParPx_0;
    LastParPx_0.setString("1246643");
    noExecs_0_0.set(LastParPx_0);
    ExecAllocGrp_NoExecs_0.insert(LastParPx_0.getString());
    FIX::LastPx LastPx_0;
    LastPx_0.setString("21250078");
    noExecs_0_0.set(LastPx_0);
    ExecAllocGrp_NoExecs_0.insert(LastPx_0.getString());
    FIX::LastQty LastQty_0;
    LastQty_0.setString("10640300");
    noExecs_0_0.set(LastQty_0);
    ExecAllocGrp_NoExecs_0.insert(LastQty_0.getString());
    FIX::SecondaryExecID SecondaryExecID_0("STRING_234855696");
    noExecs_0_0.set(SecondaryExecID_0);
    ExecAllocGrp_NoExecs_0.insert(SecondaryExecID_0.getString());
    FIX::TradeID TradeID_0("STRING_995825900");
    noExecs_0_0.set(TradeID_0);
    ExecAllocGrp_NoExecs_0.insert(TradeID_0.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_0);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_1;
    FIX::ExecID ExecID_1("STRING_162520249");
    noExecs_0_1.set(ExecID_1);
    ExecAllocGrp_NoExecs_1.insert(ExecID_1.getString());
    FIX::FirmTradeID FirmTradeID_1("STRING_1138692972");
    noExecs_0_1.set(FirmTradeID_1);
    ExecAllocGrp_NoExecs_1.insert(FirmTradeID_1.getString());
    FIX::LastCapacity LastCapacity_1('1');
    noExecs_0_1.set(LastCapacity_1);
    ExecAllocGrp_NoExecs_1.insert(LastCapacity_1.getString());
    FIX::LastParPx LastParPx_1;
    LastParPx_1.setString("14581530");
    noExecs_0_1.set(LastParPx_1);
    ExecAllocGrp_NoExecs_1.insert(LastParPx_1.getString());
    FIX::LastPx LastPx_1;
    LastPx_1.setString("11739085");
    noExecs_0_1.set(LastPx_1);
    ExecAllocGrp_NoExecs_1.insert(LastPx_1.getString());
    FIX::LastQty LastQty_1;
    LastQty_1.setString("18953019");
    noExecs_0_1.set(LastQty_1);
    ExecAllocGrp_NoExecs_1.insert(LastQty_1.getString());
    FIX::SecondaryExecID SecondaryExecID_1("STRING_969519976");
    noExecs_0_1.set(SecondaryExecID_1);
    ExecAllocGrp_NoExecs_1.insert(SecondaryExecID_1.getString());
    FIX::TradeID TradeID_1("STRING_1484477117");
    noExecs_0_1.set(TradeID_1);
    ExecAllocGrp_NoExecs_1.insert(TradeID_1.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_1);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_0;
  FIX::AgreementCurrency AgreementCurrency_0("CAN");
  msg.set(AgreementCurrency_0);
  FinancingDetails_0.insert(AgreementCurrency_0.getString());
  FIX::AgreementDate AgreementDate_0("LOCALMKTDATE_218712013");
  msg.set(AgreementDate_0);
  FinancingDetails_0.insert(AgreementDate_0.getString());
  FIX::AgreementDesc AgreementDesc_0("STRING_415083758");
  msg.set(AgreementDesc_0);
  FinancingDetails_0.insert(AgreementDesc_0.getString());
  FIX::AgreementID AgreementID_0("STRING_75473196");
  msg.set(AgreementID_0);
  FinancingDetails_0.insert(AgreementID_0.getString());
  FIX::DeliveryType DeliveryType_0(1);
  msg.set(DeliveryType_0);
  FinancingDetails_0.insert(DeliveryType_0.getString());
  FIX::EndDate EndDate_0("LOCALMKTDATE_1630614382");
  msg.set(EndDate_0);
  FinancingDetails_0.insert(EndDate_0.getString());
  FIX::MarginRatio MarginRatio_0;
  MarginRatio_0.setString("25.690000");
  msg.set(MarginRatio_0);
  FinancingDetails_0.insert(MarginRatio_0.getString());
  FIX::StartDate StartDate_0("LOCALMKTDATE_1998645227");
  msg.set(StartDate_0);
  FinancingDetails_0.insert(StartDate_0.getString());
  FIX::TerminationType TerminationType_0(4);
  msg.set(TerminationType_0);
  FinancingDetails_0.insert(TerminationType_0.getString());
  all_values.push_back(FinancingDetails_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstruction::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_1;
    FIX::EncodedLegIssuer EncodedLegIssuer_1("DATA_166193687");
    noLegs_0_0.set(EncodedLegIssuer_1);
    InstrumentLeg_1.insert(EncodedLegIssuer_1.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_1(997330293);
    noLegs_0_0.set(EncodedLegIssuerLen_1);
    InstrumentLeg_1.insert(EncodedLegIssuerLen_1.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_1("DATA_2106422528");
    noLegs_0_0.set(EncodedLegSecurityDesc_1);
    InstrumentLeg_1.insert(EncodedLegSecurityDesc_1.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_1(502256409);
    noLegs_0_0.set(EncodedLegSecurityDescLen_1);
    InstrumentLeg_1.insert(EncodedLegSecurityDescLen_1.getString());
    FIX::LegCFICode LegCFICode_1("STRING_1696229837");
    noLegs_0_0.set(LegCFICode_1);
    InstrumentLeg_1.insert(LegCFICode_1.getString());
    FIX::LegContractMultiplier LegContractMultiplier_1;
    LegContractMultiplier_1.setString("16024808");
    noLegs_0_0.set(LegContractMultiplier_1);
    InstrumentLeg_1.insert(LegContractMultiplier_1.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_1(1459840156);
    noLegs_0_0.set(LegContractMultiplierUnit_1);
    InstrumentLeg_1.insert(LegContractMultiplierUnit_1.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_1("MONTHYEAR_1820894202");
    noLegs_0_0.set(LegContractSettlMonth_1);
    InstrumentLeg_1.insert(LegContractSettlMonth_1.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_1("COUNTRY_1580005095");
    noLegs_0_0.set(LegCountryOfIssue_1);
    InstrumentLeg_1.insert(LegCountryOfIssue_1.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_1("LOCALMKTDATE_376386529");
    noLegs_0_0.set(LegCouponPaymentDate_1);
    InstrumentLeg_1.insert(LegCouponPaymentDate_1.getString());
    FIX::LegCouponRate LegCouponRate_1;
    LegCouponRate_1.setString("98.990000");
    noLegs_0_0.set(LegCouponRate_1);
    InstrumentLeg_1.insert(LegCouponRate_1.getString());
    FIX::LegCreditRating LegCreditRating_1("STRING_428347347");
    noLegs_0_0.set(LegCreditRating_1);
    InstrumentLeg_1.insert(LegCreditRating_1.getString());
    FIX::LegCurrency LegCurrency_1("CAN");
    noLegs_0_0.set(LegCurrency_1);
    InstrumentLeg_1.insert(LegCurrency_1.getString());
    FIX::LegDatedDate LegDatedDate_1("LOCALMKTDATE_313545016");
    noLegs_0_0.set(LegDatedDate_1);
    InstrumentLeg_1.insert(LegDatedDate_1.getString());
    FIX::LegExerciseStyle LegExerciseStyle_1(1997059830);
    noLegs_0_0.set(LegExerciseStyle_1);
    InstrumentLeg_1.insert(LegExerciseStyle_1.getString());
    FIX::LegFactor LegFactor_1;
    LegFactor_1.setString("733841");
    noLegs_0_0.set(LegFactor_1);
    InstrumentLeg_1.insert(LegFactor_1.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_1(61363281);
    noLegs_0_0.set(LegFlowScheduleType_1);
    InstrumentLeg_1.insert(LegFlowScheduleType_1.getString());
    FIX::LegInstrRegistry LegInstrRegistry_1("STRING_819096158");
    noLegs_0_0.set(LegInstrRegistry_1);
    InstrumentLeg_1.insert(LegInstrRegistry_1.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_1("LOCALMKTDATE_1557861290");
    noLegs_0_0.set(LegInterestAccrualDate_1);
    InstrumentLeg_1.insert(LegInterestAccrualDate_1.getString());
    FIX::LegIssueDate LegIssueDate_1("LOCALMKTDATE_957334444");
    noLegs_0_0.set(LegIssueDate_1);
    InstrumentLeg_1.insert(LegIssueDate_1.getString());
    FIX::LegIssuer LegIssuer_1("STRING_795833537");
    noLegs_0_0.set(LegIssuer_1);
    InstrumentLeg_1.insert(LegIssuer_1.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_1("STRING_1776573304");
    noLegs_0_0.set(LegLocaleOfIssue_1);
    InstrumentLeg_1.insert(LegLocaleOfIssue_1.getString());
    FIX::LegMaturityDate LegMaturityDate_1("LOCALMKTDATE_1372418202");
    noLegs_0_0.set(LegMaturityDate_1);
    InstrumentLeg_1.insert(LegMaturityDate_1.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_1("MONTHYEAR_871306733");
    noLegs_0_0.set(LegMaturityMonthYear_1);
    InstrumentLeg_1.insert(LegMaturityMonthYear_1.getString());
    FIX::LegMaturityTime LegMaturityTime_1("TZTIMEONLY_9012501");
    noLegs_0_0.set(LegMaturityTime_1);
    InstrumentLeg_1.insert(LegMaturityTime_1.getString());
    FIX::LegOptAttribute LegOptAttribute_1('8');
    noLegs_0_0.set(LegOptAttribute_1);
    InstrumentLeg_1.insert(LegOptAttribute_1.getString());
    FIX::LegOptionRatio LegOptionRatio_1;
    LegOptionRatio_1.setString("751356");
    noLegs_0_0.set(LegOptionRatio_1);
    InstrumentLeg_1.insert(LegOptionRatio_1.getString());
    FIX::LegPool LegPool_1("STRING_2007657728");
    noLegs_0_0.set(LegPool_1);
    InstrumentLeg_1.insert(LegPool_1.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_1("STRING_470687136");
    noLegs_0_0.set(LegPriceUnitOfMeasure_1);
    InstrumentLeg_1.insert(LegPriceUnitOfMeasure_1.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_1;
    LegPriceUnitOfMeasureQty_1.setString("12068865");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_1);
    InstrumentLeg_1.insert(LegPriceUnitOfMeasureQty_1.getString());
    FIX::LegProduct LegProduct_1(26367767);
    noLegs_0_0.set(LegProduct_1);
    InstrumentLeg_1.insert(LegProduct_1.getString());
    FIX::LegPutOrCall LegPutOrCall_1(1468017429);
    noLegs_0_0.set(LegPutOrCall_1);
    InstrumentLeg_1.insert(LegPutOrCall_1.getString());
    FIX::LegRatioQty LegRatioQty_1;
    LegRatioQty_1.setString("11658254");
    noLegs_0_0.set(LegRatioQty_1);
    InstrumentLeg_1.insert(LegRatioQty_1.getString());
    FIX::LegRedemptionDate LegRedemptionDate_1("LOCALMKTDATE_528624177");
    noLegs_0_0.set(LegRedemptionDate_1);
    InstrumentLeg_1.insert(LegRedemptionDate_1.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_1("STRING_1016763618");
    noLegs_0_0.set(LegRepoCollateralSecurityType_1);
    InstrumentLeg_1.insert(LegRepoCollateralSecurityType_1.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_1;
    LegRepurchaseRate_1.setString("26.940000");
    noLegs_0_0.set(LegRepurchaseRate_1);
    InstrumentLeg_1.insert(LegRepurchaseRate_1.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_1(1988464333);
    noLegs_0_0.set(LegRepurchaseTerm_1);
    InstrumentLeg_1.insert(LegRepurchaseTerm_1.getString());
    FIX::LegSecurityDesc LegSecurityDesc_1("STRING_690174173");
    noLegs_0_0.set(LegSecurityDesc_1);
    InstrumentLeg_1.insert(LegSecurityDesc_1.getString());
    FIX::LegSecurityExchange LegSecurityExchange_1("EXCHANGE_53344141");
    noLegs_0_0.set(LegSecurityExchange_1);
    InstrumentLeg_1.insert(LegSecurityExchange_1.getString());
    FIX::LegSecurityID LegSecurityID_1("STRING_217367214");
    noLegs_0_0.set(LegSecurityID_1);
    InstrumentLeg_1.insert(LegSecurityID_1.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_1("STRING_598440424");
    noLegs_0_0.set(LegSecurityIDSource_1);
    InstrumentLeg_1.insert(LegSecurityIDSource_1.getString());
    FIX::LegSecuritySubType LegSecuritySubType_1("STRING_481691489");
    noLegs_0_0.set(LegSecuritySubType_1);
    InstrumentLeg_1.insert(LegSecuritySubType_1.getString());
    FIX::LegSecurityType LegSecurityType_1("STRING_756273993");
    noLegs_0_0.set(LegSecurityType_1);
    InstrumentLeg_1.insert(LegSecurityType_1.getString());
    FIX::LegSide LegSide_1('1');
    noLegs_0_0.set(LegSide_1);
    InstrumentLeg_1.insert(LegSide_1.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_1("STRING_795236505");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_1);
    InstrumentLeg_1.insert(LegStateOrProvinceOfIssue_1.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_1("USD");
    noLegs_0_0.set(LegStrikeCurrency_1);
    InstrumentLeg_1.insert(LegStrikeCurrency_1.getString());
    FIX::LegStrikePrice LegStrikePrice_1;
    LegStrikePrice_1.setString("8565997");
    noLegs_0_0.set(LegStrikePrice_1);
    InstrumentLeg_1.insert(LegStrikePrice_1.getString());
    FIX::LegSymbol LegSymbol_1("STRING_1424946333");
    noLegs_0_0.set(LegSymbol_1);
    InstrumentLeg_1.insert(LegSymbol_1.getString());
    FIX::LegSymbolSfx LegSymbolSfx_1("STRING_1129161463");
    noLegs_0_0.set(LegSymbolSfx_1);
    InstrumentLeg_1.insert(LegSymbolSfx_1.getString());
    FIX::LegTimeUnit LegTimeUnit_1("STRING_1813934231");
    noLegs_0_0.set(LegTimeUnit_1);
    InstrumentLeg_1.insert(LegTimeUnit_1.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_1("STRING_73296222");
    noLegs_0_0.set(LegUnitOfMeasure_1);
    InstrumentLeg_1.insert(LegUnitOfMeasure_1.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_1;
    LegUnitOfMeasureQty_1.setString("7582511");
    noLegs_0_0.set(LegUnitOfMeasureQty_1);
    InstrumentLeg_1.insert(LegUnitOfMeasureQty_1.getString());
    all_values.push_back(InstrumentLeg_1);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_3;
      FIX::LegSecurityAltID LegSecurityAltID_3("STRING_944602955");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_3);
      LegSecAltIDGrp_NoLegSecurityAltID_3.insert(LegSecurityAltID_3.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_3("STRING_767263620");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_3);
      LegSecAltIDGrp_NoLegSecurityAltID_3.insert(LegSecurityAltIDSource_3.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_3);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_3;
  FIX::AttachmentPoint AttachmentPoint_3;
  AttachmentPoint_3.setString("77.220000");
  msg.set(AttachmentPoint_3);
  Instrument_3.insert(AttachmentPoint_3.getString());
  FIX::CFICode CFICode_3("STRING_1019738609");
  msg.set(CFICode_3);
  Instrument_3.insert(CFICode_3.getString());
  FIX::CPProgram CPProgram_3(2);
  msg.set(CPProgram_3);
  Instrument_3.insert(CPProgram_3.getString());
  FIX::CPRegType CPRegType_3("STRING_217621210");
  msg.set(CPRegType_3);
  Instrument_3.insert(CPRegType_3.getString());
  FIX::CapPrice CapPrice_3;
  CapPrice_3.setString("791415");
  msg.set(CapPrice_3);
  Instrument_3.insert(CapPrice_3.getString());
  FIX::ContractMultiplier ContractMultiplier_3;
  ContractMultiplier_3.setString("6538054");
  msg.set(ContractMultiplier_3);
  Instrument_3.insert(ContractMultiplier_3.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_3(1);
  msg.set(ContractMultiplierUnit_3);
  Instrument_3.insert(ContractMultiplierUnit_3.getString());
  FIX::ContractSettlMonth ContractSettlMonth_3("MONTHYEAR_1244966998");
  msg.set(ContractSettlMonth_3);
  Instrument_3.insert(ContractSettlMonth_3.getString());
  FIX::CountryOfIssue CountryOfIssue_3("COUNTRY_1182429645");
  msg.set(CountryOfIssue_3);
  Instrument_3.insert(CountryOfIssue_3.getString());
  FIX::CouponPaymentDate CouponPaymentDate_3("LOCALMKTDATE_554918610");
  msg.set(CouponPaymentDate_3);
  Instrument_3.insert(CouponPaymentDate_3.getString());
  FIX::CouponRate CouponRate_3;
  CouponRate_3.setString("96.920000");
  msg.set(CouponRate_3);
  Instrument_3.insert(CouponRate_3.getString());
  FIX::CreditRating CreditRating_3("STRING_1023410330");
  msg.set(CreditRating_3);
  Instrument_3.insert(CreditRating_3.getString());
  FIX::DatedDate DatedDate_3("LOCALMKTDATE_1245092783");
  msg.set(DatedDate_3);
  Instrument_3.insert(DatedDate_3.getString());
  FIX::DetachmentPoint DetachmentPoint_3;
  DetachmentPoint_3.setString("38.340000");
  msg.set(DetachmentPoint_3);
  Instrument_3.insert(DetachmentPoint_3.getString());
  FIX::EncodedIssuer EncodedIssuer_3("DATA_1240777545");
  msg.set(EncodedIssuer_3);
  Instrument_3.insert(EncodedIssuer_3.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_3(1843533207);
  msg.set(EncodedIssuerLen_3);
  Instrument_3.insert(EncodedIssuerLen_3.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_3("DATA_253341675");
  msg.set(EncodedSecurityDesc_3);
  Instrument_3.insert(EncodedSecurityDesc_3.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_3(1997051538);
  msg.set(EncodedSecurityDescLen_3);
  Instrument_3.insert(EncodedSecurityDescLen_3.getString());
  FIX::ExerciseStyle ExerciseStyle_3(1);
  msg.set(ExerciseStyle_3);
  Instrument_3.insert(ExerciseStyle_3.getString());
  FIX::Factor Factor_3;
  Factor_3.setString("10485781");
  msg.set(Factor_3);
  Instrument_3.insert(Factor_3.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_3(false);
  msg.set(FlexProductEligibilityIndicator_3);
  Instrument_3.insert(FlexProductEligibilityIndicator_3.getString());
  FIX::FlexibleIndicator FlexibleIndicator_3(true);
  msg.set(FlexibleIndicator_3);
  Instrument_3.insert(FlexibleIndicator_3.getString());
  FIX::FloorPrice FloorPrice_3;
  FloorPrice_3.setString("19051779");
  msg.set(FloorPrice_3);
  Instrument_3.insert(FloorPrice_3.getString());
  FIX::FlowScheduleType FlowScheduleType_3(3);
  msg.set(FlowScheduleType_3);
  Instrument_3.insert(FlowScheduleType_3.getString());
  FIX::InstrRegistry InstrRegistry_3("STRING_2041910841");
  msg.set(InstrRegistry_3);
  Instrument_3.insert(InstrRegistry_3.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_3('1');
  msg.set(InstrmtAssignmentMethod_3);
  Instrument_3.insert(InstrmtAssignmentMethod_3.getString());
  FIX::InterestAccrualDate InterestAccrualDate_3("LOCALMKTDATE_1953660620");
  msg.set(InterestAccrualDate_3);
  Instrument_3.insert(InterestAccrualDate_3.getString());
  FIX::IssueDate IssueDate_3("LOCALMKTDATE_652678312");
  msg.set(IssueDate_3);
  Instrument_3.insert(IssueDate_3.getString());
  FIX::Issuer Issuer_3("STRING_463013687");
  msg.set(Issuer_3);
  Instrument_3.insert(Issuer_3.getString());
  FIX::ListMethod ListMethod_3(1);
  msg.set(ListMethod_3);
  Instrument_3.insert(ListMethod_3.getString());
  FIX::LocaleOfIssue LocaleOfIssue_3("STRING_1419941933");
  msg.set(LocaleOfIssue_3);
  Instrument_3.insert(LocaleOfIssue_3.getString());
  FIX::MaturityDate MaturityDate_3("LOCALMKTDATE_209947761");
  msg.set(MaturityDate_3);
  Instrument_3.insert(MaturityDate_3.getString());
  FIX::MaturityMonthYear MaturityMonthYear_3("MONTHYEAR_1770518536");
  msg.set(MaturityMonthYear_3);
  Instrument_3.insert(MaturityMonthYear_3.getString());
  FIX::MaturityTime MaturityTime_3("TZTIMEONLY_2047379634");
  msg.set(MaturityTime_3);
  Instrument_3.insert(MaturityTime_3.getString());
  FIX::MinPriceIncrement MinPriceIncrement_3;
  MinPriceIncrement_3.setString("4275689");
  msg.set(MinPriceIncrement_3);
  Instrument_3.insert(MinPriceIncrement_3.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_3;
  MinPriceIncrementAmount_3.setString("18496600");
  msg.set(MinPriceIncrementAmount_3);
  Instrument_3.insert(MinPriceIncrementAmount_3.getString());
  FIX::NTPositionLimit NTPositionLimit_3(553701454);
  msg.set(NTPositionLimit_3);
  Instrument_3.insert(NTPositionLimit_3.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_3;
  NotionalPercentageOutstanding_3.setString("76.100000");
  msg.set(NotionalPercentageOutstanding_3);
  Instrument_3.insert(NotionalPercentageOutstanding_3.getString());
  FIX::OptAttribute OptAttribute_3('9');
  msg.set(OptAttribute_3);
  Instrument_3.insert(OptAttribute_3.getString());
  FIX::OptPayoutAmount OptPayoutAmount_3;
  OptPayoutAmount_3.setString("17361311");
  msg.set(OptPayoutAmount_3);
  Instrument_3.insert(OptPayoutAmount_3.getString());
  FIX::OptPayoutType OptPayoutType_3(1);
  msg.set(OptPayoutType_3);
  Instrument_3.insert(OptPayoutType_3.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_3;
  OriginalNotionalPercentageOutstanding_3.setString("94.700000");
  msg.set(OriginalNotionalPercentageOutstanding_3);
  Instrument_3.insert(OriginalNotionalPercentageOutstanding_3.getString());
  FIX::Pool Pool_3("STRING_612057782");
  msg.set(Pool_3);
  Instrument_3.insert(Pool_3.getString());
  FIX::PositionLimit PositionLimit_3(1765735355);
  msg.set(PositionLimit_3);
  Instrument_3.insert(PositionLimit_3.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_3("STRING_STD");
  msg.set(PriceQuoteMethod_3);
  Instrument_3.insert(PriceQuoteMethod_3.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_3("STRING_1852835327");
  msg.set(PriceUnitOfMeasure_3);
  Instrument_3.insert(PriceUnitOfMeasure_3.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_3;
  PriceUnitOfMeasureQty_3.setString("14617849");
  msg.set(PriceUnitOfMeasureQty_3);
  Instrument_3.insert(PriceUnitOfMeasureQty_3.getString());
  FIX::Product Product_3(9);
  msg.set(Product_3);
  Instrument_3.insert(Product_3.getString());
  FIX::ProductComplex ProductComplex_3("STRING_1702403217");
  msg.set(ProductComplex_3);
  Instrument_3.insert(ProductComplex_3.getString());
  FIX::PutOrCall PutOrCall_3(0);
  msg.set(PutOrCall_3);
  Instrument_3.insert(PutOrCall_3.getString());
  FIX::RedemptionDate RedemptionDate_3("LOCALMKTDATE_1739019511");
  msg.set(RedemptionDate_3);
  Instrument_3.insert(RedemptionDate_3.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_3("STRING_10337634");
  msg.set(RepoCollateralSecurityType_3);
  Instrument_3.insert(RepoCollateralSecurityType_3.getString());
  FIX::RepurchaseRate RepurchaseRate_3;
  RepurchaseRate_3.setString("98.510000");
  msg.set(RepurchaseRate_3);
  Instrument_3.insert(RepurchaseRate_3.getString());
  FIX::RepurchaseTerm RepurchaseTerm_3(1496713829);
  msg.set(RepurchaseTerm_3);
  Instrument_3.insert(RepurchaseTerm_3.getString());
  FIX::RestructuringType RestructuringType_3("STRING_FR");
  msg.set(RestructuringType_3);
  Instrument_3.insert(RestructuringType_3.getString());
  FIX::SecurityDesc SecurityDesc_3("STRING_1462927044");
  msg.set(SecurityDesc_3);
  Instrument_3.insert(SecurityDesc_3.getString());
  FIX::SecurityExchange SecurityExchange_3("EXCHANGE_920858731");
  msg.set(SecurityExchange_3);
  Instrument_3.insert(SecurityExchange_3.getString());
  FIX::SecurityGroup SecurityGroup_3("STRING_1696879004");
  msg.set(SecurityGroup_3);
  Instrument_3.insert(SecurityGroup_3.getString());
  FIX::SecurityID SecurityID_3("STRING_2115605357");
  msg.set(SecurityID_3);
  Instrument_3.insert(SecurityID_3.getString());
  FIX::SecurityIDSource SecurityIDSource_3("STRING_H");
  msg.set(SecurityIDSource_3);
  Instrument_3.insert(SecurityIDSource_3.getString());
  FIX::SecurityStatus SecurityStatus_3("STRING_2");
  msg.set(SecurityStatus_3);
  Instrument_3.insert(SecurityStatus_3.getString());
  FIX::SecuritySubType SecuritySubType_3("STRING_1388063642");
  msg.set(SecuritySubType_3);
  Instrument_3.insert(SecuritySubType_3.getString());
  FIX::SecurityType SecurityType_3("STRING_YCD");
  msg.set(SecurityType_3);
  Instrument_3.insert(SecurityType_3.getString());
  FIX::Seniority Seniority_3("STRING_SD");
  msg.set(Seniority_3);
  Instrument_3.insert(Seniority_3.getString());
  FIX::SettlMethod SettlMethod_3('C');
  msg.set(SettlMethod_3);
  Instrument_3.insert(SettlMethod_3.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_3("STRING_2021389150");
  msg.set(SettleOnOpenFlag_3);
  Instrument_3.insert(SettleOnOpenFlag_3.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_3("STRING_1772870247");
  msg.set(StateOrProvinceOfIssue_3);
  Instrument_3.insert(StateOrProvinceOfIssue_3.getString());
  FIX::StrikeCurrency StrikeCurrency_3("JPY");
  msg.set(StrikeCurrency_3);
  Instrument_3.insert(StrikeCurrency_3.getString());
  FIX::StrikeMultiplier StrikeMultiplier_3;
  StrikeMultiplier_3.setString("5725300");
  msg.set(StrikeMultiplier_3);
  Instrument_3.insert(StrikeMultiplier_3.getString());
  FIX::StrikePrice StrikePrice_3;
  StrikePrice_3.setString("14303085");
  msg.set(StrikePrice_3);
  Instrument_3.insert(StrikePrice_3.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_3(3);
  msg.set(StrikePriceBoundaryMethod_3);
  Instrument_3.insert(StrikePriceBoundaryMethod_3.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_3;
  StrikePriceBoundaryPrecision_3.setString("94.940000");
  msg.set(StrikePriceBoundaryPrecision_3);
  Instrument_3.insert(StrikePriceBoundaryPrecision_3.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_3(2);
  msg.set(StrikePriceDeterminationMethod_3);
  Instrument_3.insert(StrikePriceDeterminationMethod_3.getString());
  FIX::StrikeValue StrikeValue_3;
  StrikeValue_3.setString("21260073");
  msg.set(StrikeValue_3);
  Instrument_3.insert(StrikeValue_3.getString());
  FIX::Symbol Symbol_3("STRING_1675079150");
  msg.set(Symbol_3);
  Instrument_3.insert(Symbol_3.getString());
  FIX::SymbolSfx SymbolSfx_3("STRING_CD");
  msg.set(SymbolSfx_3);
  Instrument_3.insert(SymbolSfx_3.getString());
  FIX::TimeUnit TimeUnit_3("STRING_Yr");
  msg.set(TimeUnit_3);
  Instrument_3.insert(TimeUnit_3.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_3(2);
  msg.set(UnderlyingPriceDeterminationMethod_3);
  Instrument_3.insert(UnderlyingPriceDeterminationMethod_3.getString());
  FIX::UnitOfMeasure UnitOfMeasure_3("STRING_t");
  msg.set(UnitOfMeasure_3);
  Instrument_3.insert(UnitOfMeasure_3.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_3;
  UnitOfMeasureQty_3.setString("20960591");
  msg.set(UnitOfMeasureQty_3);
  Instrument_3.insert(UnitOfMeasureQty_3.getString());
  FIX::ValuationMethod ValuationMethod_3("STRING_CDSD");
  msg.set(ValuationMethod_3);
  Instrument_3.insert(ValuationMethod_3.getString());
  all_values.push_back(Instrument_3);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_9;
    FIX::ComplexEventCondition ComplexEventCondition_9(1);
    noComplexEvents_0_0.set(ComplexEventCondition_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventCondition_9.getString());
    FIX::ComplexEventPrice ComplexEventPrice_9;
    ComplexEventPrice_9.setString("13062865");
    noComplexEvents_0_0.set(ComplexEventPrice_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPrice_9.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_9(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceBoundaryMethod_9.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_9;
    ComplexEventPriceBoundaryPrecision_9.setString("87.310000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceBoundaryPrecision_9.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_9(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventPriceTimeType_9.getString());
    FIX::ComplexEventType ComplexEventType_9(2);
    noComplexEvents_0_0.set(ComplexEventType_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexEventType_9.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_9;
    ComplexOptPayoutAmount_9.setString("8006404");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_9);
    ComplexEvents_NoComplexEvents_9.insert(ComplexOptPayoutAmount_9.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_9);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_19;
      FIX::ComplexEventEndDate ComplexEventEndDate_19(FIX::UTCTIMESTAMP(2, 18, 56, 14, 9, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_19);
      ComplexEventDates_NoComplexEventDates_19.insert(ComplexEventEndDate_19.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_19(FIX::UTCTIMESTAMP(4, 20, 43, 13, 11, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_19);
      ComplexEventDates_NoComplexEventDates_19.insert(ComplexEventStartDate_19.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_19);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_35;
        FIX::ComplexEventEndTime ComplexEventEndTime_35(FIX::UTCTIMEONLY(16, 37, 50));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_35);
        ComplexEventTimes_NoComplexEventTimes_35.insert(ComplexEventEndTime_35.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_35(FIX::UTCTIMEONLY(8, 27, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_35);
        ComplexEventTimes_NoComplexEventTimes_35.insert(ComplexEventStartTime_35.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_35);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_36;
        FIX::ComplexEventEndTime ComplexEventEndTime_36(FIX::UTCTIMEONLY(1, 44, 18));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_36);
        ComplexEventTimes_NoComplexEventTimes_36.insert(ComplexEventEndTime_36.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_36(FIX::UTCTIMEONLY(21, 38, 33));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_36);
        ComplexEventTimes_NoComplexEventTimes_36.insert(ComplexEventStartTime_36.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_36);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_37;
        FIX::ComplexEventEndTime ComplexEventEndTime_37(FIX::UTCTIMEONLY(4, 51, 59));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_37);
        ComplexEventTimes_NoComplexEventTimes_37.insert(ComplexEventEndTime_37.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_37(FIX::UTCTIMEONLY(23, 14, 2));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_37);
        ComplexEventTimes_NoComplexEventTimes_37.insert(ComplexEventStartTime_37.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_37);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_20;
      FIX::ComplexEventEndDate ComplexEventEndDate_20(FIX::UTCTIMESTAMP(2, 45, 9, 13, 10, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_20);
      ComplexEventDates_NoComplexEventDates_20.insert(ComplexEventEndDate_20.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_20(FIX::UTCTIMESTAMP(6, 4, 24, 8, 1, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_20);
      ComplexEventDates_NoComplexEventDates_20.insert(ComplexEventStartDate_20.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_20);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_38;
        FIX::ComplexEventEndTime ComplexEventEndTime_38(FIX::UTCTIMEONLY(20, 31, 49));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_38);
        ComplexEventTimes_NoComplexEventTimes_38.insert(ComplexEventEndTime_38.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_38(FIX::UTCTIMEONLY(17, 27, 27));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_38);
        ComplexEventTimes_NoComplexEventTimes_38.insert(ComplexEventStartTime_38.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_38);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_39;
        FIX::ComplexEventEndTime ComplexEventEndTime_39(FIX::UTCTIMEONLY(11, 18, 2));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_39);
        ComplexEventTimes_NoComplexEventTimes_39.insert(ComplexEventEndTime_39.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_39(FIX::UTCTIMEONLY(21, 17, 52));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_39);
        ComplexEventTimes_NoComplexEventTimes_39.insert(ComplexEventStartTime_39.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_39);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_21;
      FIX::ComplexEventEndDate ComplexEventEndDate_21(FIX::UTCTIMESTAMP(11, 29, 30, 8, 8, 2003));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_21);
      ComplexEventDates_NoComplexEventDates_21.insert(ComplexEventEndDate_21.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_21(FIX::UTCTIMESTAMP(13, 53, 47, 13, 6, 2012));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_21);
      ComplexEventDates_NoComplexEventDates_21.insert(ComplexEventStartDate_21.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_21);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_40;
        FIX::ComplexEventEndTime ComplexEventEndTime_40(FIX::UTCTIMEONLY(15, 32, 30));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_40);
        ComplexEventTimes_NoComplexEventTimes_40.insert(ComplexEventEndTime_40.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_40(FIX::UTCTIMEONLY(17, 58, 53));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_40);
        ComplexEventTimes_NoComplexEventTimes_40.insert(ComplexEventStartTime_40.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_40);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_41;
        FIX::ComplexEventEndTime ComplexEventEndTime_41(FIX::UTCTIMEONLY(1, 11, 47));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_41);
        ComplexEventTimes_NoComplexEventTimes_41.insert(ComplexEventEndTime_41.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_41(FIX::UTCTIMEONLY(13, 56, 43));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_41);
        ComplexEventTimes_NoComplexEventTimes_41.insert(ComplexEventStartTime_41.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_41);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_7;
    FIX::EventDate EventDate_7("LOCALMKTDATE_699185312");
    noEvents_0_0.set(EventDate_7);
    EvntGrp_NoEvents_7.insert(EventDate_7.getString());
    FIX::EventPx EventPx_7;
    EventPx_7.setString("16922937");
    noEvents_0_0.set(EventPx_7);
    EvntGrp_NoEvents_7.insert(EventPx_7.getString());
    FIX::EventText EventText_7("STRING_773334548");
    noEvents_0_0.set(EventText_7);
    EvntGrp_NoEvents_7.insert(EventText_7.getString());
    FIX::EventTime EventTime_7(FIX::UTCTIMESTAMP(7, 57, 35, 12, 3, 2016));
    noEvents_0_0.set(EventTime_7);
    EvntGrp_NoEvents_7.insert(EventTime_7.getString());
    FIX::EventType EventType_7(19);
    noEvents_0_0.set(EventType_7);
    EvntGrp_NoEvents_7.insert(EventType_7.getString());
    all_values.push_back(EvntGrp_NoEvents_7);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_8;
    FIX::EventDate EventDate_8("LOCALMKTDATE_1988287207");
    noEvents_0_1.set(EventDate_8);
    EvntGrp_NoEvents_8.insert(EventDate_8.getString());
    FIX::EventPx EventPx_8;
    EventPx_8.setString("16849000");
    noEvents_0_1.set(EventPx_8);
    EvntGrp_NoEvents_8.insert(EventPx_8.getString());
    FIX::EventText EventText_8("STRING_1786828379");
    noEvents_0_1.set(EventText_8);
    EvntGrp_NoEvents_8.insert(EventText_8.getString());
    FIX::EventTime EventTime_8(FIX::UTCTIMESTAMP(23, 23, 19, 9, 10, 2009));
    noEvents_0_1.set(EventTime_8);
    EvntGrp_NoEvents_8.insert(EventTime_8.getString());
    FIX::EventType EventType_8(3);
    noEvents_0_1.set(EventType_8);
    EvntGrp_NoEvents_8.insert(EventType_8.getString());
    all_values.push_back(EvntGrp_NoEvents_8);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_5;
    FIX::InstrumentPartyID InstrumentPartyID_5("STRING_406276502");
    noInstrumentParties_0_0.set(InstrumentPartyID_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyID_5.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_5('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyIDSource_5.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_5(1242786569);
    noInstrumentParties_0_0.set(InstrumentPartyRole_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyRole_5.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_5);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11;
      FIX::InstrumentPartySubID InstrumentPartySubID_11("STRING_331431002");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_11);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11.insert(InstrumentPartySubID_11.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_11(1254998606);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_11);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11.insert(InstrumentPartySubIDType_11.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12;
      FIX::InstrumentPartySubID InstrumentPartySubID_12("STRING_2105383716");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_12);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12.insert(InstrumentPartySubID_12.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_12(1707783168);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_12);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12.insert(InstrumentPartySubIDType_12.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13;
      FIX::InstrumentPartySubID InstrumentPartySubID_13("STRING_1954183918");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_13);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13.insert(InstrumentPartySubID_13.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_13(1650193781);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_13);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13.insert(InstrumentPartySubIDType_13.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_7;
    FIX::SecurityAltID SecurityAltID_7("STRING_14996462");
    noSecurityAltID_0_0.set(SecurityAltID_7);
    SecAltIDGrp_NoSecurityAltID_7.insert(SecurityAltID_7.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_7("STRING_1439663284");
    noSecurityAltID_0_0.set(SecurityAltIDSource_7);
    SecAltIDGrp_NoSecurityAltID_7.insert(SecurityAltIDSource_7.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_7);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_6;
  FIX::SecurityXML SecurityXML_7("XMLDATA_846505125");
  msg.set(SecurityXML_7);
  FIX::SecurityXMLLen SecurityXMLLen_3(347007157);
  msg.set(SecurityXMLLen_3);
  FIX::SecurityXMLSchema SecurityXMLSchema_3("STRING_1087482417");
  msg.set(SecurityXMLSchema_3);
  SecurityXML_6.insert(SecurityXMLSchema_3.getString());
  all_values.push_back(SecurityXML_6);

  // InstrumentExtension
  multiset<string> InstrumentExtension_0;
  FIX::DeliveryForm DeliveryForm_0(2);
  msg.set(DeliveryForm_0);
  InstrumentExtension_0.insert(DeliveryForm_0.getString());
  FIX::PctAtRisk PctAtRisk_0;
  PctAtRisk_0.setString("51.790000");
  msg.set(PctAtRisk_0);
  InstrumentExtension_0.insert(PctAtRisk_0.getString());
  all_values.push_back(InstrumentExtension_0);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_0;
    FIX::InstrAttribType InstrAttribType_0(6);
    noInstrAttrib_0_0.set(InstrAttribType_0);
    AttrbGrp_NoInstrAttrib_0.insert(InstrAttribType_0.getString());
    FIX::InstrAttribValue InstrAttribValue_0("STRING_817771604");
    noInstrAttrib_0_0.set(InstrAttribValue_0);
    AttrbGrp_NoInstrAttrib_0.insert(InstrAttribValue_0.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_0);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_1;
    FIX::InstrAttribType InstrAttribType_1(17);
    noInstrAttrib_0_1.set(InstrAttribType_1);
    AttrbGrp_NoInstrAttrib_1.insert(InstrAttribType_1.getString());
    FIX::InstrAttribValue InstrAttribValue_1("STRING_743291535");
    noInstrAttrib_0_1.set(InstrAttribValue_1);
    AttrbGrp_NoInstrAttrib_1.insert(InstrAttribValue_1.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_1);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationInstruction::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_0;
    FIX::ClOrdID ClOrdID_0("STRING_170710741");
    noOrders_0_0.set(ClOrdID_0);
    OrdAllocGrp_NoOrders_0.insert(ClOrdID_0.getString());
    FIX::ListID ListID_0("STRING_94565606");
    noOrders_0_0.set(ListID_0);
    OrdAllocGrp_NoOrders_0.insert(ListID_0.getString());
    FIX::OrderAvgPx OrderAvgPx_0;
    OrderAvgPx_0.setString("12797222");
    noOrders_0_0.set(OrderAvgPx_0);
    OrdAllocGrp_NoOrders_0.insert(OrderAvgPx_0.getString());
    FIX::OrderBookingQty OrderBookingQty_0;
    OrderBookingQty_0.setString("10679465");
    noOrders_0_0.set(OrderBookingQty_0);
    OrdAllocGrp_NoOrders_0.insert(OrderBookingQty_0.getString());
    FIX::OrderID OrderID_0("STRING_1577559515");
    noOrders_0_0.set(OrderID_0);
    OrdAllocGrp_NoOrders_0.insert(OrderID_0.getString());
    FIX::OrderQty OrderQty_0;
    OrderQty_0.setString("5116623");
    noOrders_0_0.set(OrderQty_0);
    OrdAllocGrp_NoOrders_0.insert(OrderQty_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_0("STRING_2133259960");
    noOrders_0_0.set(SecondaryClOrdID_0);
    OrdAllocGrp_NoOrders_0.insert(SecondaryClOrdID_0.getString());
    FIX::SecondaryOrderID SecondaryOrderID_0("STRING_1983836018");
    noOrders_0_0.set(SecondaryOrderID_0);
    OrdAllocGrp_NoOrders_0.insert(SecondaryOrderID_0.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_0);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_0;
      FIX::Nested2PartyID Nested2PartyID_0("STRING_1228562882");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyID_0.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_0('6');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyIDSource_0.getString());
      FIX::Nested2PartyRole Nested2PartyRole_0(1962285430);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyRole_0.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_0);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_0;
        FIX::Nested2PartySubID Nested2PartySubID_0("STRING_639611092");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_0);
        NstdPtys2SubGrp_NoNested2PartySubIDs_0.insert(Nested2PartySubID_0.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_0(1522584951);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_0);
        NstdPtys2SubGrp_NoNested2PartySubIDs_0.insert(Nested2PartySubIDType_0.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_0);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_1;
        FIX::Nested2PartySubID Nested2PartySubID_1("STRING_142778110");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_1);
        NstdPtys2SubGrp_NoNested2PartySubIDs_1.insert(Nested2PartySubID_1.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_1(142321225);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_1);
        NstdPtys2SubGrp_NoNested2PartySubIDs_1.insert(Nested2PartySubIDType_1.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_1);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_2;
        FIX::Nested2PartySubID Nested2PartySubID_2("STRING_1856219019");
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubID_2);
        NstdPtys2SubGrp_NoNested2PartySubIDs_2.insert(Nested2PartySubID_2.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_2(157774572);
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubIDType_2);
        NstdPtys2SubGrp_NoNested2PartySubIDs_2.insert(Nested2PartySubIDType_2.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_2);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_1;
      FIX::Nested2PartyID Nested2PartyID_1("STRING_1581984509");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyID_1.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_1('5');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyIDSource_1.getString());
      FIX::Nested2PartyRole Nested2PartyRole_1(504781730);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyRole_1.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_1);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_3;
        FIX::Nested2PartySubID Nested2PartySubID_3("STRING_104249984");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_3);
        NstdPtys2SubGrp_NoNested2PartySubIDs_3.insert(Nested2PartySubID_3.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_3(1785136909);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_3);
        NstdPtys2SubGrp_NoNested2PartySubIDs_3.insert(Nested2PartySubIDType_3.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_3);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_2;
      FIX::Nested2PartyID Nested2PartyID_2("STRING_1833261613");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyID_2.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_2('1');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyIDSource_2.getString());
      FIX::Nested2PartyRole Nested2PartyRole_2(455424865);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyRole_2.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_2);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_4;
        FIX::Nested2PartySubID Nested2PartySubID_4("STRING_237354567");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_4);
        NstdPtys2SubGrp_NoNested2PartySubIDs_4.insert(Nested2PartySubID_4.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_4(543774445);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_4);
        NstdPtys2SubGrp_NoNested2PartySubIDs_4.insert(Nested2PartySubIDType_4.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_4);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_1;
    FIX::ClOrdID ClOrdID_1("STRING_807111773");
    noOrders_0_1.set(ClOrdID_1);
    OrdAllocGrp_NoOrders_1.insert(ClOrdID_1.getString());
    FIX::ListID ListID_1("STRING_331920173");
    noOrders_0_1.set(ListID_1);
    OrdAllocGrp_NoOrders_1.insert(ListID_1.getString());
    FIX::OrderAvgPx OrderAvgPx_1;
    OrderAvgPx_1.setString("18234967");
    noOrders_0_1.set(OrderAvgPx_1);
    OrdAllocGrp_NoOrders_1.insert(OrderAvgPx_1.getString());
    FIX::OrderBookingQty OrderBookingQty_1;
    OrderBookingQty_1.setString("18750583");
    noOrders_0_1.set(OrderBookingQty_1);
    OrdAllocGrp_NoOrders_1.insert(OrderBookingQty_1.getString());
    FIX::OrderID OrderID_1("STRING_1909479689");
    noOrders_0_1.set(OrderID_1);
    OrdAllocGrp_NoOrders_1.insert(OrderID_1.getString());
    FIX::OrderQty OrderQty_1;
    OrderQty_1.setString("1876754");
    noOrders_0_1.set(OrderQty_1);
    OrdAllocGrp_NoOrders_1.insert(OrderQty_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_1("STRING_1860834624");
    noOrders_0_1.set(SecondaryClOrdID_1);
    OrdAllocGrp_NoOrders_1.insert(SecondaryClOrdID_1.getString());
    FIX::SecondaryOrderID SecondaryOrderID_1("STRING_1745832059");
    noOrders_0_1.set(SecondaryOrderID_1);
    OrdAllocGrp_NoOrders_1.insert(SecondaryOrderID_1.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_1);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_3;
      FIX::Nested2PartyID Nested2PartyID_3("STRING_941913858");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyID_3.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_3('2');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyIDSource_3.getString());
      FIX::Nested2PartyRole Nested2PartyRole_3(1633331678);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyRole_3.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_3);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_5;
        FIX::Nested2PartySubID Nested2PartySubID_5("STRING_919670526");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_5);
        NstdPtys2SubGrp_NoNested2PartySubIDs_5.insert(Nested2PartySubID_5.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_5(1008432981);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_5);
        NstdPtys2SubGrp_NoNested2PartySubIDs_5.insert(Nested2PartySubIDType_5.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_5);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_6;
        FIX::Nested2PartySubID Nested2PartySubID_6("STRING_1420769808");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_6);
        NstdPtys2SubGrp_NoNested2PartySubIDs_6.insert(Nested2PartySubID_6.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_6(1061991751);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_6);
        NstdPtys2SubGrp_NoNested2PartySubIDs_6.insert(Nested2PartySubIDType_6.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_6);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_7;
        FIX::Nested2PartySubID Nested2PartySubID_7("STRING_717168353");
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubID_7);
        NstdPtys2SubGrp_NoNested2PartySubIDs_7.insert(Nested2PartySubID_7.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_7(1578544380);
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubIDType_7);
        NstdPtys2SubGrp_NoNested2PartySubIDs_7.insert(Nested2PartySubIDType_7.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_7);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoOrders noOrders_0_2;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_2;
    FIX::ClOrdID ClOrdID_2("STRING_496492613");
    noOrders_0_2.set(ClOrdID_2);
    OrdAllocGrp_NoOrders_2.insert(ClOrdID_2.getString());
    FIX::ListID ListID_2("STRING_1272408850");
    noOrders_0_2.set(ListID_2);
    OrdAllocGrp_NoOrders_2.insert(ListID_2.getString());
    FIX::OrderAvgPx OrderAvgPx_2;
    OrderAvgPx_2.setString("20833261");
    noOrders_0_2.set(OrderAvgPx_2);
    OrdAllocGrp_NoOrders_2.insert(OrderAvgPx_2.getString());
    FIX::OrderBookingQty OrderBookingQty_2;
    OrderBookingQty_2.setString("10184758");
    noOrders_0_2.set(OrderBookingQty_2);
    OrdAllocGrp_NoOrders_2.insert(OrderBookingQty_2.getString());
    FIX::OrderID OrderID_2("STRING_1376658834");
    noOrders_0_2.set(OrderID_2);
    OrdAllocGrp_NoOrders_2.insert(OrderID_2.getString());
    FIX::OrderQty OrderQty_2;
    OrderQty_2.setString("17209793");
    noOrders_0_2.set(OrderQty_2);
    OrdAllocGrp_NoOrders_2.insert(OrderQty_2.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_2("STRING_704253857");
    noOrders_0_2.set(SecondaryClOrdID_2);
    OrdAllocGrp_NoOrders_2.insert(SecondaryClOrdID_2.getString());
    FIX::SecondaryOrderID SecondaryOrderID_2("STRING_870721866");
    noOrders_0_2.set(SecondaryOrderID_2);
    OrdAllocGrp_NoOrders_2.insert(SecondaryOrderID_2.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_2);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_4;
      FIX::Nested2PartyID Nested2PartyID_4("STRING_1340654888");
      noNested2PartyIDs_2_1_0.set(Nested2PartyID_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyID_4.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_4('1');
      noNested2PartyIDs_2_1_0.set(Nested2PartyIDSource_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyIDSource_4.getString());
      FIX::Nested2PartyRole Nested2PartyRole_4(572695034);
      noNested2PartyIDs_2_1_0.set(Nested2PartyRole_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyRole_4.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_4);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_8;
        FIX::Nested2PartySubID Nested2PartySubID_8("STRING_1439996606");
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubID_8);
        NstdPtys2SubGrp_NoNested2PartySubIDs_8.insert(Nested2PartySubID_8.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_8(248708120);
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubIDType_8);
        NstdPtys2SubGrp_NoNested2PartySubIDs_8.insert(Nested2PartySubIDType_8.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_8);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_9;
        FIX::Nested2PartySubID Nested2PartySubID_9("STRING_1875341325");
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubID_9);
        NstdPtys2SubGrp_NoNested2PartySubIDs_9.insert(Nested2PartySubID_9.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_9(1201992647);
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubIDType_9);
        NstdPtys2SubGrp_NoNested2PartySubIDs_9.insert(Nested2PartySubIDType_9.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_9);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_10;
        FIX::Nested2PartySubID Nested2PartySubID_10("STRING_436383588");
        noNested2PartySubIDs_2_0_2_2.set(Nested2PartySubID_10);
        NstdPtys2SubGrp_NoNested2PartySubIDs_10.insert(Nested2PartySubID_10.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_10(1588692301);
        noNested2PartySubIDs_2_0_2_2.set(Nested2PartySubIDType_10);
        NstdPtys2SubGrp_NoNested2PartySubIDs_10.insert(Nested2PartySubIDType_10.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_10);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_2);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_5;
      FIX::Nested2PartyID Nested2PartyID_5("STRING_800341058");
      noNested2PartyIDs_2_1_1.set(Nested2PartyID_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyID_5.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_5('1');
      noNested2PartyIDs_2_1_1.set(Nested2PartyIDSource_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyIDSource_5.getString());
      FIX::Nested2PartyRole Nested2PartyRole_5(383122511);
      noNested2PartyIDs_2_1_1.set(Nested2PartyRole_5);
      NestedParties2_NoNested2PartyIDs_5.insert(Nested2PartyRole_5.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_5);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_11;
        FIX::Nested2PartySubID Nested2PartySubID_11("STRING_1740761514");
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubID_11);
        NstdPtys2SubGrp_NoNested2PartySubIDs_11.insert(Nested2PartySubID_11.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_11(1661114209);
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubIDType_11);
        NstdPtys2SubGrp_NoNested2PartySubIDs_11.insert(Nested2PartySubIDType_11.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_11);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_12;
        FIX::Nested2PartySubID Nested2PartySubID_12("STRING_2000071019");
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubID_12);
        NstdPtys2SubGrp_NoNested2PartySubIDs_12.insert(Nested2PartySubID_12.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_12(601710848);
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubIDType_12);
        NstdPtys2SubGrp_NoNested2PartySubIDs_12.insert(Nested2PartySubIDType_12.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_12);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_13;
        FIX::Nested2PartySubID Nested2PartySubID_13("STRING_934400369");
        noNested2PartySubIDs_2_1_2_2.set(Nested2PartySubID_13);
        NstdPtys2SubGrp_NoNested2PartySubIDs_13.insert(Nested2PartySubID_13.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_13(914579123);
        noNested2PartySubIDs_2_1_2_2.set(Nested2PartySubIDType_13);
        NstdPtys2SubGrp_NoNested2PartySubIDs_13.insert(Nested2PartySubIDType_13.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_13);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_2);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_1);
    }
    msg.addGroup(noOrders_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_2;
    FIX::PartyID PartyID_2("STRING_365461101");
    noPartyIDs_0_0.set(PartyID_2);
    Parties_NoPartyIDs_2.insert(PartyID_2.getString());
    FIX::PartyIDSource PartyIDSource_2('A');
    noPartyIDs_0_0.set(PartyIDSource_2);
    Parties_NoPartyIDs_2.insert(PartyIDSource_2.getString());
    FIX::PartyRole PartyRole_2(65);
    noPartyIDs_0_0.set(PartyRole_2);
    Parties_NoPartyIDs_2.insert(PartyRole_2.getString());
    all_values.push_back(Parties_NoPartyIDs_2);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_2;
      FIX::PartySubID PartySubID_2("STRING_282063979");
      noPartySubIDs_0_1_0.set(PartySubID_2);
      PtysSubGrp_NoPartySubIDs_2.insert(PartySubID_2.getString());
      FIX::PartySubIDType PartySubIDType_2(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_2);
      PtysSubGrp_NoPartySubIDs_2.insert(PartySubIDType_2.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_2);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_3;
      FIX::PartySubID PartySubID_3("STRING_2022282936");
      noPartySubIDs_0_1_1.set(PartySubID_3);
      PtysSubGrp_NoPartySubIDs_3.insert(PartySubID_3.getString());
      FIX::PartySubIDType PartySubIDType_3(10);
      noPartySubIDs_0_1_1.set(PartySubIDType_3);
      PtysSubGrp_NoPartySubIDs_3.insert(PartySubIDType_3.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_3);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_3;
    FIX::PartyID PartyID_3("STRING_543701455");
    noPartyIDs_0_1.set(PartyID_3);
    Parties_NoPartyIDs_3.insert(PartyID_3.getString());
    FIX::PartyIDSource PartyIDSource_3('3');
    noPartyIDs_0_1.set(PartyIDSource_3);
    Parties_NoPartyIDs_3.insert(PartyIDSource_3.getString());
    FIX::PartyRole PartyRole_3(63);
    noPartyIDs_0_1.set(PartyRole_3);
    Parties_NoPartyIDs_3.insert(PartyRole_3.getString());
    all_values.push_back(Parties_NoPartyIDs_3);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_4;
      FIX::PartySubID PartySubID_4("STRING_476414912");
      noPartySubIDs_1_1_0.set(PartySubID_4);
      PtysSubGrp_NoPartySubIDs_4.insert(PartySubID_4.getString());
      FIX::PartySubIDType PartySubIDType_4(4);
      noPartySubIDs_1_1_0.set(PartySubIDType_4);
      PtysSubGrp_NoPartySubIDs_4.insert(PartySubIDType_4.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_4);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_5;
      FIX::PartySubID PartySubID_5("STRING_944290847");
      noPartySubIDs_1_1_1.set(PartySubID_5);
      PtysSubGrp_NoPartySubIDs_5.insert(PartySubID_5.getString());
      FIX::PartySubIDType PartySubIDType_5(8);
      noPartySubIDs_1_1_1.set(PartySubIDType_5);
      PtysSubGrp_NoPartySubIDs_5.insert(PartySubIDType_5.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_5);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_0;
    FIX::PosAmt PosAmt_0;
    PosAmt_0.setString("21462834");
    noPosAmt_0_0.set(PosAmt_0);
    PositionAmountData_NoPosAmt_0.insert(PosAmt_0.getString());
    FIX::PosAmtType PosAmtType_0("STRING_ACPN");
    noPosAmt_0_0.set(PosAmtType_0);
    PositionAmountData_NoPosAmt_0.insert(PosAmtType_0.getString());
    FIX::PositionCurrency PositionCurrency_0("STRING_1496322068");
    noPosAmt_0_0.set(PositionCurrency_0);
    PositionAmountData_NoPosAmt_0.insert(PositionCurrency_0.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_0);

    msg.addGroup(noPosAmt_0_0);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_0;
    FIX::RateSource RateSource_1(0);
    noRateSources_0_0.set(RateSource_1);
    RateSource_NoRateSources_0.insert(RateSource_1.getString());
    FIX::RateSourceType RateSourceType_0(1);
    noRateSources_0_0.set(RateSourceType_0);
    RateSource_NoRateSources_0.insert(RateSourceType_0.getString());
    FIX::ReferencePage ReferencePage_0("STRING_1879541398");
    noRateSources_0_0.set(ReferencePage_0);
    RateSource_NoRateSources_0.insert(ReferencePage_0.getString());
    all_values.push_back(RateSource_NoRateSources_0);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_1;
    FIX::RateSource RateSource_2(2);
    noRateSources_0_1.set(RateSource_2);
    RateSource_NoRateSources_1.insert(RateSource_2.getString());
    FIX::RateSourceType RateSourceType_1(0);
    noRateSources_0_1.set(RateSourceType_1);
    RateSource_NoRateSources_1.insert(RateSourceType_1.getString());
    FIX::ReferencePage ReferencePage_1("STRING_1732128769");
    noRateSources_0_1.set(ReferencePage_1);
    RateSource_NoRateSources_1.insert(ReferencePage_1.getString());
    all_values.push_back(RateSource_NoRateSources_1);

    msg.addGroup(noRateSources_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_2;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_2;
    FIX::RateSource RateSource_3(2);
    noRateSources_0_2.set(RateSource_3);
    RateSource_NoRateSources_2.insert(RateSource_3.getString());
    FIX::RateSourceType RateSourceType_2(1);
    noRateSources_0_2.set(RateSourceType_2);
    RateSource_NoRateSources_2.insert(RateSourceType_2.getString());
    FIX::ReferencePage ReferencePage_2("STRING_499224244");
    noRateSources_0_2.set(ReferencePage_2);
    RateSource_NoRateSources_2.insert(ReferencePage_2.getString());
    all_values.push_back(RateSource_NoRateSources_2);

    msg.addGroup(noRateSources_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_0;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_0("EUR");
  msg.set(BenchmarkCurveCurrency_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurveCurrency_0.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_0("STRING_Pfandbriefe");
  msg.set(BenchmarkCurveName_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurveName_0.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_0("STRING_1079125126");
  msg.set(BenchmarkCurvePoint_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurvePoint_0.getString());
  FIX::BenchmarkPrice BenchmarkPrice_0;
  BenchmarkPrice_0.setString("8467565");
  msg.set(BenchmarkPrice_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkPrice_0.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_0(44876312);
  msg.set(BenchmarkPriceType_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkPriceType_0.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_0("STRING_752104716");
  msg.set(BenchmarkSecurityID_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkSecurityID_0.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_0("STRING_721555815");
  msg.set(BenchmarkSecurityIDSource_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkSecurityIDSource_0.getString());
  FIX::Spread Spread_0;
  Spread_0.setString("10311941");
  msg.set(Spread_0);
  SpreadOrBenchmarkCurveData_0.insert(Spread_0.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_0);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_0;
    FIX::StipulationType StipulationType_0("STRING_ISSUESIZE");
    noStipulations_0_0.set(StipulationType_0);
    Stipulations_NoStipulations_0.insert(StipulationType_0.getString());
    FIX::StipulationValue StipulationValue_0("STRING_1210683225");
    noStipulations_0_0.set(StipulationValue_0);
    Stipulations_NoStipulations_0.insert(StipulationValue_0.getString());
    all_values.push_back(Stipulations_NoStipulations_0);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_1;
    FIX::StipulationType StipulationType_1("STRING_ISSUESIZE");
    noStipulations_0_1.set(StipulationType_1);
    Stipulations_NoStipulations_1.insert(StipulationType_1.getString());
    FIX::StipulationValue StipulationValue_1("STRING_1101690604");
    noStipulations_0_1.set(StipulationValue_1);
    Stipulations_NoStipulations_1.insert(StipulationValue_1.getString());
    all_values.push_back(Stipulations_NoStipulations_1);

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_2;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_2("DATA_1744391259");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingIssuer_2.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_2(1826813636);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingIssuerLen_2.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_2("DATA_1298085083");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingSecurityDesc_2.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_2(1743191105);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingSecurityDescLen_2.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_2;
    UnderlyingAdjustedQuantity_2.setString("8408366");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_2);
    UnderlyingInstrument_2.insert(UnderlyingAdjustedQuantity_2.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_2;
    UnderlyingAllocationPercent_2.setString("35.040000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_2);
    UnderlyingInstrument_2.insert(UnderlyingAllocationPercent_2.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_2;
    UnderlyingAttachmentPoint_2.setString("83.620000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_2);
    UnderlyingInstrument_2.insert(UnderlyingAttachmentPoint_2.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_2("STRING_2109773064");
    noUnderlyings_0_0.set(UnderlyingCFICode_2);
    UnderlyingInstrument_2.insert(UnderlyingCFICode_2.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_2("STRING_378884435");
    noUnderlyings_0_0.set(UnderlyingCPProgram_2);
    UnderlyingInstrument_2.insert(UnderlyingCPProgram_2.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_2("STRING_126906112");
    noUnderlyings_0_0.set(UnderlyingCPRegType_2);
    UnderlyingInstrument_2.insert(UnderlyingCPRegType_2.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_2;
    UnderlyingCapValue_2.setString("8245037");
    noUnderlyings_0_0.set(UnderlyingCapValue_2);
    UnderlyingInstrument_2.insert(UnderlyingCapValue_2.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_2;
    UnderlyingCashAmount_2.setString("17719595");
    noUnderlyings_0_0.set(UnderlyingCashAmount_2);
    UnderlyingInstrument_2.insert(UnderlyingCashAmount_2.getString());
    FIX::UnderlyingCashType UnderlyingCashType_2("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_2);
    UnderlyingInstrument_2.insert(UnderlyingCashType_2.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_2;
    UnderlyingContractMultiplier_2.setString("1409452");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_2);
    UnderlyingInstrument_2.insert(UnderlyingContractMultiplier_2.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_2(1951951437);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_2);
    UnderlyingInstrument_2.insert(UnderlyingContractMultiplierUnit_2.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_2("COUNTRY_210775478");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingCountryOfIssue_2.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_2("LOCALMKTDATE_776265985");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_2);
    UnderlyingInstrument_2.insert(UnderlyingCouponPaymentDate_2.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_2;
    UnderlyingCouponRate_2.setString("7.520000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_2);
    UnderlyingInstrument_2.insert(UnderlyingCouponRate_2.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_2("STRING_2121071459");
    noUnderlyings_0_0.set(UnderlyingCreditRating_2);
    UnderlyingInstrument_2.insert(UnderlyingCreditRating_2.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_2("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_2);
    UnderlyingInstrument_2.insert(UnderlyingCurrency_2.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_2;
    UnderlyingCurrentValue_2.setString("184641");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_2);
    UnderlyingInstrument_2.insert(UnderlyingCurrentValue_2.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_2;
    UnderlyingDetachmentPoint_2.setString("21.790000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_2);
    UnderlyingInstrument_2.insert(UnderlyingDetachmentPoint_2.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_2;
    UnderlyingDirtyPrice_2.setString("19182330");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_2);
    UnderlyingInstrument_2.insert(UnderlyingDirtyPrice_2.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_2;
    UnderlyingEndPrice_2.setString("10496582");
    noUnderlyings_0_0.set(UnderlyingEndPrice_2);
    UnderlyingInstrument_2.insert(UnderlyingEndPrice_2.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_2;
    UnderlyingEndValue_2.setString("17558183");
    noUnderlyings_0_0.set(UnderlyingEndValue_2);
    UnderlyingInstrument_2.insert(UnderlyingEndValue_2.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_2(396025139);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_2);
    UnderlyingInstrument_2.insert(UnderlyingExerciseStyle_2.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_2;
    UnderlyingFXRate_2.setString("1128578");
    noUnderlyings_0_0.set(UnderlyingFXRate_2);
    UnderlyingInstrument_2.insert(UnderlyingFXRate_2.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_2('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_2);
    UnderlyingInstrument_2.insert(UnderlyingFXRateCalc_2.getString());
    FIX::UnderlyingFactor UnderlyingFactor_2;
    UnderlyingFactor_2.setString("14977157");
    noUnderlyings_0_0.set(UnderlyingFactor_2);
    UnderlyingInstrument_2.insert(UnderlyingFactor_2.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_2(1503313165);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_2);
    UnderlyingInstrument_2.insert(UnderlyingFlowScheduleType_2.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_2("STRING_5342726");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_2);
    UnderlyingInstrument_2.insert(UnderlyingInstrRegistry_2.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_2("LOCALMKTDATE_1177045732");
    noUnderlyings_0_0.set(UnderlyingIssueDate_2);
    UnderlyingInstrument_2.insert(UnderlyingIssueDate_2.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_2("STRING_653914600");
    noUnderlyings_0_0.set(UnderlyingIssuer_2);
    UnderlyingInstrument_2.insert(UnderlyingIssuer_2.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_2("STRING_1748533831");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingLocaleOfIssue_2.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_2("LOCALMKTDATE_2017882340");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityDate_2.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_2("MONTHYEAR_1300838104");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityMonthYear_2.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_2("TZTIMEONLY_2143382194");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityTime_2.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_2;
    UnderlyingNotionalPercentageOutstanding_2.setString("17.570000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_2);
    UnderlyingInstrument_2.insert(UnderlyingNotionalPercentageOutstanding_2.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_2('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_2);
    UnderlyingInstrument_2.insert(UnderlyingOptAttribute_2.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_2;
    UnderlyingOriginalNotionalPercentageOutstanding_2.setString("46.580000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_2);
    UnderlyingInstrument_2.insert(UnderlyingOriginalNotionalPercentageOutstanding_2.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_2("STRING_657191848");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_2);
    UnderlyingInstrument_2.insert(UnderlyingPriceUnitOfMeasure_2.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_2;
    UnderlyingPriceUnitOfMeasureQty_2.setString("13041984");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_2);
    UnderlyingInstrument_2.insert(UnderlyingPriceUnitOfMeasureQty_2.getString());
    FIX::UnderlyingProduct UnderlyingProduct_2(1981839540);
    noUnderlyings_0_0.set(UnderlyingProduct_2);
    UnderlyingInstrument_2.insert(UnderlyingProduct_2.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_2(798137109);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_2);
    UnderlyingInstrument_2.insert(UnderlyingPutOrCall_2.getString());
    FIX::UnderlyingPx UnderlyingPx_2;
    UnderlyingPx_2.setString("11086662");
    noUnderlyings_0_0.set(UnderlyingPx_2);
    UnderlyingInstrument_2.insert(UnderlyingPx_2.getString());
    FIX::UnderlyingQty UnderlyingQty_2;
    UnderlyingQty_2.setString("451313");
    noUnderlyings_0_0.set(UnderlyingQty_2);
    UnderlyingInstrument_2.insert(UnderlyingQty_2.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_2("LOCALMKTDATE_1574403094");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_2);
    UnderlyingInstrument_2.insert(UnderlyingRedemptionDate_2.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_2("STRING_1458587010");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_2);
    UnderlyingInstrument_2.insert(UnderlyingRepoCollateralSecurityType_2.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_2;
    UnderlyingRepurchaseRate_2.setString("91.820000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_2);
    UnderlyingInstrument_2.insert(UnderlyingRepurchaseRate_2.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_2(1282310558);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_2);
    UnderlyingInstrument_2.insert(UnderlyingRepurchaseTerm_2.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_2("STRING_507780641");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_2);
    UnderlyingInstrument_2.insert(UnderlyingRestructuringType_2.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_2("STRING_37183305");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityDesc_2.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_2("EXCHANGE_1742322737");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityExchange_2.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_2("STRING_278530088");
    noUnderlyings_0_0.set(UnderlyingSecurityID_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityID_2.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_2("STRING_1086841576");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityIDSource_2.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_2("STRING_1350657440");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_2);
    UnderlyingInstrument_2.insert(UnderlyingSecuritySubType_2.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_2("STRING_674555227");
    noUnderlyings_0_0.set(UnderlyingSecurityType_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityType_2.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_2("STRING_1199699425");
    noUnderlyings_0_0.set(UnderlyingSeniority_2);
    UnderlyingInstrument_2.insert(UnderlyingSeniority_2.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_2("STRING_1759092555");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_2);
    UnderlyingInstrument_2.insert(UnderlyingSettlMethod_2.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_2(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_2);
    UnderlyingInstrument_2.insert(UnderlyingSettlementType_2.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_2;
    UnderlyingStartValue_2.setString("5555289");
    noUnderlyings_0_0.set(UnderlyingStartValue_2);
    UnderlyingInstrument_2.insert(UnderlyingStartValue_2.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_2("STRING_1764435281");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingStateOrProvinceOfIssue_2.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_2("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_2);
    UnderlyingInstrument_2.insert(UnderlyingStrikeCurrency_2.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_2;
    UnderlyingStrikePrice_2.setString("13654854");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_2);
    UnderlyingInstrument_2.insert(UnderlyingStrikePrice_2.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_2("STRING_1072231747");
    noUnderlyings_0_0.set(UnderlyingSymbol_2);
    UnderlyingInstrument_2.insert(UnderlyingSymbol_2.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_2("STRING_362797999");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_2);
    UnderlyingInstrument_2.insert(UnderlyingSymbolSfx_2.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_2("STRING_1361384011");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_2);
    UnderlyingInstrument_2.insert(UnderlyingTimeUnit_2.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_2("STRING_904919856");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_2);
    UnderlyingInstrument_2.insert(UnderlyingUnitOfMeasure_2.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_2;
    UnderlyingUnitOfMeasureQty_2.setString("20425205");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_2);
    UnderlyingInstrument_2.insert(UnderlyingUnitOfMeasureQty_2.getString());
    all_values.push_back(UnderlyingInstrument_2);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_3;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_3("STRING_1562111704");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_3);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_3.insert(UnderlyingSecurityAltID_3.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_3("STRING_1199235359");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_3);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_3.insert(UnderlyingSecurityAltIDSource_3.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_4;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_4("STRING_1318544562");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_4);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_4.insert(UnderlyingSecurityAltID_4.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_4("STRING_212765165");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_4);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_4.insert(UnderlyingSecurityAltIDSource_4.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_4;
      FIX::UnderlyingStipType UnderlyingStipType_4("STRING_1363675933");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_4);
      UnderlyingStipulations_NoUnderlyingStips_4.insert(UnderlyingStipType_4.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_4("STRING_1787168260");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_4);
      UnderlyingStipulations_NoUnderlyingStips_4.insert(UnderlyingStipValue_4.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_4);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_5;
      FIX::UnderlyingStipType UnderlyingStipType_5("STRING_1619004979");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_5);
      UnderlyingStipulations_NoUnderlyingStips_5.insert(UnderlyingStipType_5.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_5("STRING_1382395115");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_5);
      UnderlyingStipulations_NoUnderlyingStips_5.insert(UnderlyingStipValue_5.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_5);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_6;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_6("STRING_2126785620");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyID_6.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_6('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyIDSource_6.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_6(516834259);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyRole_6.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_6);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_13("STRING_358936348");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_13);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13.insert(UnderlyingInstrumentPartySubID_13.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_13(1867491700);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_13);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13.insert(UnderlyingInstrumentPartySubIDType_13.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_7;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_7("STRING_932387287");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyID_7.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_7('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyIDSource_7.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_7(1479100607);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyRole_7.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_7);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_14("STRING_2114164716");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_14);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14.insert(UnderlyingInstrumentPartySubID_14.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_14(1096052241);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_14);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14.insert(UnderlyingInstrumentPartySubIDType_14.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_15("STRING_11524016");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_15);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubID_15.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_15(1176124611);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_15);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubIDType_15.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_3;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_3("DATA_314054058");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingIssuer_3.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_3(1083755763);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingIssuerLen_3.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_3("DATA_1538922611");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingSecurityDesc_3.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_3(1675438069);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingSecurityDescLen_3.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_3;
    UnderlyingAdjustedQuantity_3.setString("19886756");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_3);
    UnderlyingInstrument_3.insert(UnderlyingAdjustedQuantity_3.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_3;
    UnderlyingAllocationPercent_3.setString("95.020000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_3);
    UnderlyingInstrument_3.insert(UnderlyingAllocationPercent_3.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_3;
    UnderlyingAttachmentPoint_3.setString("30.900000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_3);
    UnderlyingInstrument_3.insert(UnderlyingAttachmentPoint_3.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_3("STRING_1403303675");
    noUnderlyings_0_1.set(UnderlyingCFICode_3);
    UnderlyingInstrument_3.insert(UnderlyingCFICode_3.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_3("STRING_485711214");
    noUnderlyings_0_1.set(UnderlyingCPProgram_3);
    UnderlyingInstrument_3.insert(UnderlyingCPProgram_3.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_3("STRING_183204004");
    noUnderlyings_0_1.set(UnderlyingCPRegType_3);
    UnderlyingInstrument_3.insert(UnderlyingCPRegType_3.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_3;
    UnderlyingCapValue_3.setString("16160688");
    noUnderlyings_0_1.set(UnderlyingCapValue_3);
    UnderlyingInstrument_3.insert(UnderlyingCapValue_3.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_3;
    UnderlyingCashAmount_3.setString("6461291");
    noUnderlyings_0_1.set(UnderlyingCashAmount_3);
    UnderlyingInstrument_3.insert(UnderlyingCashAmount_3.getString());
    FIX::UnderlyingCashType UnderlyingCashType_3("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_3);
    UnderlyingInstrument_3.insert(UnderlyingCashType_3.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_3;
    UnderlyingContractMultiplier_3.setString("12557534");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_3);
    UnderlyingInstrument_3.insert(UnderlyingContractMultiplier_3.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_3(117650514);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_3);
    UnderlyingInstrument_3.insert(UnderlyingContractMultiplierUnit_3.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_3("COUNTRY_781791404");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingCountryOfIssue_3.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_3("LOCALMKTDATE_30264975");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_3);
    UnderlyingInstrument_3.insert(UnderlyingCouponPaymentDate_3.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_3;
    UnderlyingCouponRate_3.setString("24.860000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_3);
    UnderlyingInstrument_3.insert(UnderlyingCouponRate_3.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_3("STRING_53886176");
    noUnderlyings_0_1.set(UnderlyingCreditRating_3);
    UnderlyingInstrument_3.insert(UnderlyingCreditRating_3.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_3("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_3);
    UnderlyingInstrument_3.insert(UnderlyingCurrency_3.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_3;
    UnderlyingCurrentValue_3.setString("4128225");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_3);
    UnderlyingInstrument_3.insert(UnderlyingCurrentValue_3.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_3;
    UnderlyingDetachmentPoint_3.setString("72.860000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_3);
    UnderlyingInstrument_3.insert(UnderlyingDetachmentPoint_3.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_3;
    UnderlyingDirtyPrice_3.setString("12871718");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_3);
    UnderlyingInstrument_3.insert(UnderlyingDirtyPrice_3.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_3;
    UnderlyingEndPrice_3.setString("19714582");
    noUnderlyings_0_1.set(UnderlyingEndPrice_3);
    UnderlyingInstrument_3.insert(UnderlyingEndPrice_3.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_3;
    UnderlyingEndValue_3.setString("17462078");
    noUnderlyings_0_1.set(UnderlyingEndValue_3);
    UnderlyingInstrument_3.insert(UnderlyingEndValue_3.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_3(96862796);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_3);
    UnderlyingInstrument_3.insert(UnderlyingExerciseStyle_3.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_3;
    UnderlyingFXRate_3.setString("19381393");
    noUnderlyings_0_1.set(UnderlyingFXRate_3);
    UnderlyingInstrument_3.insert(UnderlyingFXRate_3.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_3('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_3);
    UnderlyingInstrument_3.insert(UnderlyingFXRateCalc_3.getString());
    FIX::UnderlyingFactor UnderlyingFactor_3;
    UnderlyingFactor_3.setString("1083868");
    noUnderlyings_0_1.set(UnderlyingFactor_3);
    UnderlyingInstrument_3.insert(UnderlyingFactor_3.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_3(966780331);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_3);
    UnderlyingInstrument_3.insert(UnderlyingFlowScheduleType_3.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_3("STRING_1008830545");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_3);
    UnderlyingInstrument_3.insert(UnderlyingInstrRegistry_3.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_3("LOCALMKTDATE_1192142576");
    noUnderlyings_0_1.set(UnderlyingIssueDate_3);
    UnderlyingInstrument_3.insert(UnderlyingIssueDate_3.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_3("STRING_358219294");
    noUnderlyings_0_1.set(UnderlyingIssuer_3);
    UnderlyingInstrument_3.insert(UnderlyingIssuer_3.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_3("STRING_536784966");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingLocaleOfIssue_3.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_3("LOCALMKTDATE_1033334548");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityDate_3.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_3("MONTHYEAR_1792178796");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityMonthYear_3.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_3("TZTIMEONLY_1548928056");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityTime_3.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_3;
    UnderlyingNotionalPercentageOutstanding_3.setString("45.750000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_3);
    UnderlyingInstrument_3.insert(UnderlyingNotionalPercentageOutstanding_3.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_3('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_3);
    UnderlyingInstrument_3.insert(UnderlyingOptAttribute_3.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_3;
    UnderlyingOriginalNotionalPercentageOutstanding_3.setString("20.610000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_3);
    UnderlyingInstrument_3.insert(UnderlyingOriginalNotionalPercentageOutstanding_3.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_3("STRING_1905223416");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_3);
    UnderlyingInstrument_3.insert(UnderlyingPriceUnitOfMeasure_3.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_3;
    UnderlyingPriceUnitOfMeasureQty_3.setString("7765355");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_3);
    UnderlyingInstrument_3.insert(UnderlyingPriceUnitOfMeasureQty_3.getString());
    FIX::UnderlyingProduct UnderlyingProduct_3(1131528350);
    noUnderlyings_0_1.set(UnderlyingProduct_3);
    UnderlyingInstrument_3.insert(UnderlyingProduct_3.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_3(1013493221);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_3);
    UnderlyingInstrument_3.insert(UnderlyingPutOrCall_3.getString());
    FIX::UnderlyingPx UnderlyingPx_3;
    UnderlyingPx_3.setString("8941860");
    noUnderlyings_0_1.set(UnderlyingPx_3);
    UnderlyingInstrument_3.insert(UnderlyingPx_3.getString());
    FIX::UnderlyingQty UnderlyingQty_3;
    UnderlyingQty_3.setString("19133197");
    noUnderlyings_0_1.set(UnderlyingQty_3);
    UnderlyingInstrument_3.insert(UnderlyingQty_3.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_3("LOCALMKTDATE_1043758196");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_3);
    UnderlyingInstrument_3.insert(UnderlyingRedemptionDate_3.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_3("STRING_991138546");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_3);
    UnderlyingInstrument_3.insert(UnderlyingRepoCollateralSecurityType_3.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_3;
    UnderlyingRepurchaseRate_3.setString("59.310000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_3);
    UnderlyingInstrument_3.insert(UnderlyingRepurchaseRate_3.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_3(1590857431);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_3);
    UnderlyingInstrument_3.insert(UnderlyingRepurchaseTerm_3.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_3("STRING_1345923093");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_3);
    UnderlyingInstrument_3.insert(UnderlyingRestructuringType_3.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_3("STRING_232544808");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityDesc_3.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_3("EXCHANGE_1857964717");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityExchange_3.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_3("STRING_485611279");
    noUnderlyings_0_1.set(UnderlyingSecurityID_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityID_3.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_3("STRING_56519459");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityIDSource_3.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_3("STRING_1456688963");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_3);
    UnderlyingInstrument_3.insert(UnderlyingSecuritySubType_3.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_3("STRING_582474076");
    noUnderlyings_0_1.set(UnderlyingSecurityType_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityType_3.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_3("STRING_1994658827");
    noUnderlyings_0_1.set(UnderlyingSeniority_3);
    UnderlyingInstrument_3.insert(UnderlyingSeniority_3.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_3("STRING_3981802");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_3);
    UnderlyingInstrument_3.insert(UnderlyingSettlMethod_3.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_3(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_3);
    UnderlyingInstrument_3.insert(UnderlyingSettlementType_3.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_3;
    UnderlyingStartValue_3.setString("8139555");
    noUnderlyings_0_1.set(UnderlyingStartValue_3);
    UnderlyingInstrument_3.insert(UnderlyingStartValue_3.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_3("STRING_1012812347");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingStateOrProvinceOfIssue_3.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_3("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_3);
    UnderlyingInstrument_3.insert(UnderlyingStrikeCurrency_3.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_3;
    UnderlyingStrikePrice_3.setString("15495973");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_3);
    UnderlyingInstrument_3.insert(UnderlyingStrikePrice_3.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_3("STRING_768854365");
    noUnderlyings_0_1.set(UnderlyingSymbol_3);
    UnderlyingInstrument_3.insert(UnderlyingSymbol_3.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_3("STRING_816869952");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_3);
    UnderlyingInstrument_3.insert(UnderlyingSymbolSfx_3.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_3("STRING_951041722");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_3);
    UnderlyingInstrument_3.insert(UnderlyingTimeUnit_3.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_3("STRING_1058008941");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_3);
    UnderlyingInstrument_3.insert(UnderlyingUnitOfMeasure_3.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_3;
    UnderlyingUnitOfMeasureQty_3.setString("9472763");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_3);
    UnderlyingInstrument_3.insert(UnderlyingUnitOfMeasureQty_3.getString());
    all_values.push_back(UnderlyingInstrument_3);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_5;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_5("STRING_815748709");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_5);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_5.insert(UnderlyingSecurityAltID_5.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_5("STRING_1723811860");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_5);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_5.insert(UnderlyingSecurityAltIDSource_5.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_6;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_6("STRING_1667218485");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_6);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_6.insert(UnderlyingSecurityAltID_6.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_6("STRING_1829241931");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_6);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_6.insert(UnderlyingSecurityAltIDSource_6.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_6;
      FIX::UnderlyingStipType UnderlyingStipType_6("STRING_1433054592");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_6);
      UnderlyingStipulations_NoUnderlyingStips_6.insert(UnderlyingStipType_6.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_6("STRING_725516479");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_6);
      UnderlyingStipulations_NoUnderlyingStips_6.insert(UnderlyingStipValue_6.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_6);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_7;
      FIX::UnderlyingStipType UnderlyingStipType_7("STRING_1461652818");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_7);
      UnderlyingStipulations_NoUnderlyingStips_7.insert(UnderlyingStipType_7.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_7("STRING_1252776876");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_7);
      UnderlyingStipulations_NoUnderlyingStips_7.insert(UnderlyingStipValue_7.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_7);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_8;
      FIX::UnderlyingStipType UnderlyingStipType_8("STRING_168890262");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_8);
      UnderlyingStipulations_NoUnderlyingStips_8.insert(UnderlyingStipType_8.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_8("STRING_660092263");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_8);
      UnderlyingStipulations_NoUnderlyingStips_8.insert(UnderlyingStipValue_8.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_8);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_8;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_8("STRING_2026854980");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyID_8.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_8('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyIDSource_8.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_8(1541841144);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyRole_8.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_8);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_16("STRING_1728177618");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_16);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16.insert(UnderlyingInstrumentPartySubID_16.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_16(1389016323);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_16);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16.insert(UnderlyingInstrumentPartySubIDType_16.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_17("STRING_1340042098");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_17);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17.insert(UnderlyingInstrumentPartySubID_17.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_17(271554859);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_17);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17.insert(UnderlyingInstrumentPartySubIDType_17.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_18("STRING_55488185");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_18);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18.insert(UnderlyingInstrumentPartySubID_18.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_18(205370797);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_18);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18.insert(UnderlyingInstrumentPartySubIDType_18.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_0;
  FIX::Yield Yield_0;
  Yield_0.setString("46.770000");
  msg.set(Yield_0);
  YieldData_0.insert(Yield_0.getString());
  FIX::YieldCalcDate YieldCalcDate_0("LOCALMKTDATE_1227662989");
  msg.set(YieldCalcDate_0);
  YieldData_0.insert(YieldCalcDate_0.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_0("LOCALMKTDATE_1754968111");
  msg.set(YieldRedemptionDate_0);
  YieldData_0.insert(YieldRedemptionDate_0.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_0;
  YieldRedemptionPrice_0.setString("7759290");
  msg.set(YieldRedemptionPrice_0);
  YieldData_0.insert(YieldRedemptionPrice_0.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_0(2044532941);
  msg.set(YieldRedemptionPriceType_0);
  YieldData_0.insert(YieldRedemptionPriceType_0.getString());
  FIX::YieldType YieldType_0("STRING_PUT");
  msg.set(YieldType_0);
  YieldData_0.insert(YieldType_0.getString());
  all_values.push_back(YieldData_0);


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
