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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstruction msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationInstruction_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_0;
  AccruedInterestAmt_0.setString("7766272");
  msg.set(AccruedInterestAmt_0);
  AllocationInstruction_0.insert(AccruedInterestAmt_0.getString());
  FIX::AccruedInterestRate AccruedInterestRate_0;
  AccruedInterestRate_0.setString("48.770000");
  msg.set(AccruedInterestRate_0);
  AllocationInstruction_0.insert(AccruedInterestRate_0.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_0(99);
  msg.set(AllocCancReplaceReason_0);
  AllocationInstruction_0.insert(AllocCancReplaceReason_0.getString());
  FIX::AllocID AllocID_0("STRING_183540360");
  msg.set(AllocID_0);
  AllocationInstruction_0.insert(AllocID_0.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_0(3);
  msg.set(AllocIntermedReqType_0);
  AllocationInstruction_0.insert(AllocIntermedReqType_0.getString());
  FIX::AllocLinkID AllocLinkID_0("STRING_1042292021");
  msg.set(AllocLinkID_0);
  AllocationInstruction_0.insert(AllocLinkID_0.getString());
  FIX::AllocLinkType AllocLinkType_0(1);
  msg.set(AllocLinkType_0);
  AllocationInstruction_0.insert(AllocLinkType_0.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_0(0);
  msg.set(AllocNoOrdersType_0);
  AllocationInstruction_0.insert(AllocNoOrdersType_0.getString());
  FIX::AllocTransType AllocTransType_0('3');
  msg.set(AllocTransType_0);
  AllocationInstruction_0.insert(AllocTransType_0.getString());
  FIX::AllocType AllocType_0(12);
  msg.set(AllocType_0);
  AllocationInstruction_0.insert(AllocType_0.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_0(false);
  msg.set(AutoAcceptIndicator_0);
  AllocationInstruction_0.insert(AutoAcceptIndicator_0.getString());
  FIX::AvgParPx AvgParPx_0;
  AvgParPx_0.setString("37769");
  msg.set(AvgParPx_0);
  AllocationInstruction_0.insert(AvgParPx_0.getString());
  FIX::AvgPx AvgPx_0;
  AvgPx_0.setString("14778334");
  msg.set(AvgPx_0);
  AllocationInstruction_0.insert(AvgPx_0.getString());
  FIX::AvgPxIndicator AvgPxIndicator_0(1);
  msg.set(AvgPxIndicator_0);
  AllocationInstruction_0.insert(AvgPxIndicator_0.getString());
  FIX::AvgPxPrecision AvgPxPrecision_0(501547793);
  msg.set(AvgPxPrecision_0);
  AllocationInstruction_0.insert(AvgPxPrecision_0.getString());
  FIX::BookingRefID BookingRefID_0("STRING_1465477072");
  msg.set(BookingRefID_0);
  AllocationInstruction_0.insert(BookingRefID_0.getString());
  FIX::BookingType BookingType_0(2);
  msg.set(BookingType_0);
  AllocationInstruction_0.insert(BookingType_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_1("LOCALMKTDATE_313951439");
  msg.set(ClearingBusinessDate_1);
  AllocationInstruction_0.insert(ClearingBusinessDate_1.getString());
  FIX::Concession Concession_0;
  Concession_0.setString("4483126");
  msg.set(Concession_0);
  AllocationInstruction_0.insert(Concession_0.getString());
  FIX::Currency Currency_1("USD");
  msg.set(Currency_1);
  AllocationInstruction_0.insert(Currency_1.getString());
  FIX::CustOrderCapacity CustOrderCapacity_0(1);
  msg.set(CustOrderCapacity_0);
  AllocationInstruction_0.insert(CustOrderCapacity_0.getString());
  FIX::EncodedText EncodedText_1("DATA_995280680");
  msg.set(EncodedText_1);
  AllocationInstruction_0.insert(EncodedText_1.getString());
  FIX::EncodedTextLen EncodedTextLen_1(689135063);
  msg.set(EncodedTextLen_1);
  AllocationInstruction_0.insert(EncodedTextLen_1.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_0;
  EndAccruedInterestAmt_0.setString("9574430");
  msg.set(EndAccruedInterestAmt_0);
  AllocationInstruction_0.insert(EndAccruedInterestAmt_0.getString());
  FIX::EndCash EndCash_0;
  EndCash_0.setString("9695015");
  msg.set(EndCash_0);
  AllocationInstruction_0.insert(EndCash_0.getString());
  FIX::GrossTradeAmt GrossTradeAmt_0;
  GrossTradeAmt_0.setString("9909063");
  msg.set(GrossTradeAmt_0);
  AllocationInstruction_0.insert(GrossTradeAmt_0.getString());
  FIX::InterestAtMaturity InterestAtMaturity_0;
  InterestAtMaturity_0.setString("11420805");
  msg.set(InterestAtMaturity_0);
  AllocationInstruction_0.insert(InterestAtMaturity_0.getString());
  FIX::LastFragment LastFragment_0(false);
  msg.set(LastFragment_0);
  AllocationInstruction_0.insert(LastFragment_0.getString());
  FIX::LastMkt LastMkt_1("EXCHANGE_1389804200");
  msg.set(LastMkt_1);
  AllocationInstruction_0.insert(LastMkt_1.getString());
  FIX::LegalConfirm LegalConfirm_0(true);
  msg.set(LegalConfirm_0);
  AllocationInstruction_0.insert(LegalConfirm_0.getString());
  FIX::MatchType MatchType_0("STRING_2");
  msg.set(MatchType_0);
  AllocationInstruction_0.insert(MatchType_0.getString());
  FIX::MessageEventSource MessageEventSource_0("STRING_1704139077");
  msg.set(MessageEventSource_0);
  AllocationInstruction_0.insert(MessageEventSource_0.getString());
  FIX::MultiLegReportingType MultiLegReportingType_0('2');
  msg.set(MultiLegReportingType_0);
  AllocationInstruction_0.insert(MultiLegReportingType_0.getString());
  FIX::NetMoney NetMoney_0;
  NetMoney_0.setString("7281042");
  msg.set(NetMoney_0);
  AllocationInstruction_0.insert(NetMoney_0.getString());
  FIX::NumDaysInterest NumDaysInterest_0(1149534058);
  msg.set(NumDaysInterest_0);
  AllocationInstruction_0.insert(NumDaysInterest_0.getString());
  FIX::PositionEffect PositionEffect_0('F');
  msg.set(PositionEffect_0);
  AllocationInstruction_0.insert(PositionEffect_0.getString());
  FIX::PreviouslyReported PreviouslyReported_0(false);
  msg.set(PreviouslyReported_0);
  AllocationInstruction_0.insert(PreviouslyReported_0.getString());
  FIX::PriceType PriceType_0(1);
  msg.set(PriceType_0);
  AllocationInstruction_0.insert(PriceType_0.getString());
  FIX::QtyType QtyType_1(1);
  msg.set(QtyType_1);
  AllocationInstruction_0.insert(QtyType_1.getString());
  FIX::Quantity Quantity_1;
  Quantity_1.setString("19376556");
  msg.set(Quantity_1);
  AllocationInstruction_0.insert(Quantity_1.getString());
  FIX::RefAllocID RefAllocID_0("STRING_882716755");
  msg.set(RefAllocID_0);
  AllocationInstruction_0.insert(RefAllocID_0.getString());
  FIX::ReversalIndicator ReversalIndicator_0(true);
  msg.set(ReversalIndicator_0);
  AllocationInstruction_0.insert(ReversalIndicator_0.getString());
  FIX::RndPx RndPx_0;
  RndPx_0.setString("12680054");
  msg.set(RndPx_0);
  AllocationInstruction_0.insert(RndPx_0.getString());
  FIX::SecondaryAllocID SecondaryAllocID_0("STRING_1305255419");
  msg.set(SecondaryAllocID_0);
  AllocationInstruction_0.insert(SecondaryAllocID_0.getString());
  FIX::SettlDate SettlDate_0("LOCALMKTDATE_1324900004");
  msg.set(SettlDate_0);
  AllocationInstruction_0.insert(SettlDate_0.getString());
  FIX::SettlType SettlType_0("STRING_C");
  msg.set(SettlType_0);
  AllocationInstruction_0.insert(SettlType_0.getString());
  FIX::Side Side_0('6');
  msg.set(Side_0);
  AllocationInstruction_0.insert(Side_0.getString());
  FIX::StartCash StartCash_0;
  StartCash_0.setString("16388514");
  msg.set(StartCash_0);
  AllocationInstruction_0.insert(StartCash_0.getString());
  FIX::Text Text_1("STRING_1034311464");
  msg.set(Text_1);
  AllocationInstruction_0.insert(Text_1.getString());
  FIX::TotNoAllocs TotNoAllocs_0(2012641675);
  msg.set(TotNoAllocs_0);
  AllocationInstruction_0.insert(TotNoAllocs_0.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_0;
  TotalAccruedInterestAmt_0.setString("17392458");
  msg.set(TotalAccruedInterestAmt_0);
  AllocationInstruction_0.insert(TotalAccruedInterestAmt_0.getString());
  FIX::TotalTakedown TotalTakedown_0;
  TotalTakedown_0.setString("2704143");
  msg.set(TotalTakedown_0);
  AllocationInstruction_0.insert(TotalTakedown_0.getString());
  FIX::TradeDate TradeDate_1("LOCALMKTDATE_860438707");
  msg.set(TradeDate_1);
  AllocationInstruction_0.insert(TradeDate_1.getString());
  FIX::TradeInputSource TradeInputSource_0("STRING_280897270");
  msg.set(TradeInputSource_0);
  AllocationInstruction_0.insert(TradeInputSource_0.getString());
  FIX::TradeOriginationDate TradeOriginationDate_0("LOCALMKTDATE_1227857431");
  msg.set(TradeOriginationDate_0);
  AllocationInstruction_0.insert(TradeOriginationDate_0.getString());
  FIX::TradingSessionID TradingSessionID_1("STRING_3");
  msg.set(TradingSessionID_1);
  AllocationInstruction_0.insert(TradingSessionID_1.getString());
  FIX::TradingSessionSubID TradingSessionSubID_1("STRING_1");
  msg.set(TradingSessionSubID_1);
  AllocationInstruction_0.insert(TradingSessionSubID_1.getString());
  FIX::TransactTime TransactTime_1(FIX::UTCTIMESTAMP(21, 34, 37, 4, 1, 2015));
  msg.set(TransactTime_1);
  AllocationInstruction_0.insert(TransactTime_1.getString());
  FIX::TrdSubType TrdSubType_0(32);
  msg.set(TrdSubType_0);
  AllocationInstruction_0.insert(TrdSubType_0.getString());
  FIX::TrdType TrdType_0(23);
  msg.set(TrdType_0);
  AllocationInstruction_0.insert(TrdType_0.getString());
  all_values.push_back(AllocationInstruction_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_0("STRING_1022296273");
    noAllocs_0_0.set(AllocAccount_0);
    AllocGrp_NoAllocs_0.insert(AllocAccount_0.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_0;
    AllocAccruedInterestAmt_0.setString("3667598");
    noAllocs_0_0.set(AllocAccruedInterestAmt_0);
    AllocGrp_NoAllocs_0.insert(AllocAccruedInterestAmt_0.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_0(1213535793);
    noAllocs_0_0.set(AllocAcctIDSource_0);
    AllocGrp_NoAllocs_0.insert(AllocAcctIDSource_0.getString());
    FIX::AllocAvgPx AllocAvgPx_0;
    AllocAvgPx_0.setString("8124682");
    noAllocs_0_0.set(AllocAvgPx_0);
    AllocGrp_NoAllocs_0.insert(AllocAvgPx_0.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_0("STRING_1249476586");
    noAllocs_0_0.set(AllocCustomerCapacity_0);
    AllocGrp_NoAllocs_0.insert(AllocCustomerCapacity_0.getString());
    FIX::AllocHandlInst AllocHandlInst_0(3);
    noAllocs_0_0.set(AllocHandlInst_0);
    AllocGrp_NoAllocs_0.insert(AllocHandlInst_0.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_0;
    AllocInterestAtMaturity_0.setString("20804736");
    noAllocs_0_0.set(AllocInterestAtMaturity_0);
    AllocGrp_NoAllocs_0.insert(AllocInterestAtMaturity_0.getString());
    FIX::AllocMethod AllocMethod_0(2);
    noAllocs_0_0.set(AllocMethod_0);
    AllocGrp_NoAllocs_0.insert(AllocMethod_0.getString());
    FIX::AllocNetMoney AllocNetMoney_0;
    AllocNetMoney_0.setString("12143043");
    noAllocs_0_0.set(AllocNetMoney_0);
    AllocGrp_NoAllocs_0.insert(AllocNetMoney_0.getString());
    FIX::AllocPositionEffect AllocPositionEffect_0('O');
    noAllocs_0_0.set(AllocPositionEffect_0);
    AllocGrp_NoAllocs_0.insert(AllocPositionEffect_0.getString());
    FIX::AllocPrice AllocPrice_0;
    AllocPrice_0.setString("10939744");
    noAllocs_0_0.set(AllocPrice_0);
    AllocGrp_NoAllocs_0.insert(AllocPrice_0.getString());
    FIX::AllocQty AllocQty_0;
    AllocQty_0.setString("7056721");
    noAllocs_0_0.set(AllocQty_0);
    AllocGrp_NoAllocs_0.insert(AllocQty_0.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_0;
    AllocSettlCurrAmt_0.setString("15533003");
    noAllocs_0_0.set(AllocSettlCurrAmt_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlCurrAmt_0.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_0("CHF");
    noAllocs_0_0.set(AllocSettlCurrency_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlCurrency_0.getString());
    FIX::AllocSettlInstType AllocSettlInstType_0(2);
    noAllocs_0_0.set(AllocSettlInstType_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlInstType_0.getString());
    FIX::AllocText AllocText_0("STRING_1819571161");
    noAllocs_0_0.set(AllocText_0);
    AllocGrp_NoAllocs_0.insert(AllocText_0.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_0("STRING_4");
    noAllocs_0_0.set(ClearingFeeIndicator_0);
    AllocGrp_NoAllocs_0.insert(ClearingFeeIndicator_0.getString());
    FIX::EncodedAllocText EncodedAllocText_0("DATA_904088505");
    noAllocs_0_0.set(EncodedAllocText_0);
    AllocGrp_NoAllocs_0.insert(EncodedAllocText_0.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_0(1502027779);
    noAllocs_0_0.set(EncodedAllocTextLen_0);
    AllocGrp_NoAllocs_0.insert(EncodedAllocTextLen_0.getString());
    FIX::IndividualAllocID IndividualAllocID_0("STRING_1850135214");
    noAllocs_0_0.set(IndividualAllocID_0);
    AllocGrp_NoAllocs_0.insert(IndividualAllocID_0.getString());
    FIX::IndividualAllocType IndividualAllocType_0(1);
    noAllocs_0_0.set(IndividualAllocType_0);
    AllocGrp_NoAllocs_0.insert(IndividualAllocType_0.getString());
    FIX::MatchStatus MatchStatus_0('2');
    noAllocs_0_0.set(MatchStatus_0);
    AllocGrp_NoAllocs_0.insert(MatchStatus_0.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_0(true);
    noAllocs_0_0.set(NotifyBrokerOfCredit_0);
    AllocGrp_NoAllocs_0.insert(NotifyBrokerOfCredit_0.getString());
    FIX::ProcessCode ProcessCode_0('0');
    noAllocs_0_0.set(ProcessCode_0);
    AllocGrp_NoAllocs_0.insert(ProcessCode_0.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_0("STRING_947378208");
    noAllocs_0_0.set(SecondaryIndividualAllocID_0);
    AllocGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_0.getString());
    FIX::SettlCurrAmt SettlCurrAmt_0;
    SettlCurrAmt_0.setString("2875552");
    noAllocs_0_0.set(SettlCurrAmt_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrAmt_0.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_0;
    SettlCurrFxRate_0.setString("7057119");
    noAllocs_0_0.set(SettlCurrFxRate_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrFxRate_0.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_0('D');
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
      FIX::ClearingInstruction ClearingInstruction_0(3);
      noClearingInstructions_0_1_0.set(ClearingInstruction_0);
      ClrInstGrp_NoClearingInstructions_0.insert(ClearingInstruction_0.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_0);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_1;
      FIX::ClearingInstruction ClearingInstruction_1(10);
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
    FIX::CommCurrency CommCurrency_0("JPY");
    noAllocs_0_0.set(CommCurrency_0);
    CommissionData_0.insert(CommCurrency_0.getString());
    FIX::CommType CommType_0('4');
    noAllocs_0_0.set(CommType_0);
    CommissionData_0.insert(CommType_0.getString());
    FIX::Commission Commission_0;
    Commission_0.setString("13838700");
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
      MiscFeeAmt_0.setString("3303607");
      noMiscFees_0_1_0.set(MiscFeeAmt_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeAmt_0.getString());
      FIX::MiscFeeBasis MiscFeeBasis_0(2);
      noMiscFees_0_1_0.set(MiscFeeBasis_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeBasis_0.getString());
      FIX::MiscFeeCurr MiscFeeCurr_0("CAN");
      noMiscFees_0_1_0.set(MiscFeeCurr_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeCurr_0.getString());
      FIX::MiscFeeType MiscFeeType_0("STRING_12");
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
      MiscFeeAmt_1.setString("8917471");
      noMiscFees_0_1_1.set(MiscFeeAmt_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeAmt_1.getString());
      FIX::MiscFeeBasis MiscFeeBasis_1(1);
      noMiscFees_0_1_1.set(MiscFeeBasis_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeBasis_1.getString());
      FIX::MiscFeeCurr MiscFeeCurr_1("GBP");
      noMiscFees_0_1_1.set(MiscFeeCurr_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeCurr_1.getString());
      FIX::MiscFeeType MiscFeeType_1("STRING_4");
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
      multiset<string> NestedParties_NoNestedPartyIDs_3;
      FIX::NestedPartyID NestedPartyID_3("STRING_774894832");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyID_3.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_3('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyIDSource_3.getString());
      FIX::NestedPartyRole NestedPartyRole_3(622815113);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyRole_3.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_3);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_5;
        FIX::NestedPartySubID NestedPartySubID_5("STRING_68440498");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_5);
        NstdPtysSubGrp_NoNestedPartySubIDs_5.insert(NestedPartySubID_5.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_5(910370378);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_5);
        NstdPtysSubGrp_NoNestedPartySubIDs_5.insert(NestedPartySubIDType_5.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_5);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_6;
        FIX::NestedPartySubID NestedPartySubID_6("STRING_1826878412");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_6);
        NstdPtysSubGrp_NoNestedPartySubIDs_6.insert(NestedPartySubID_6.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_6(1738880119);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_6);
        NstdPtysSubGrp_NoNestedPartySubIDs_6.insert(NestedPartySubIDType_6.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_6);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_0;
    FIX::SettlDeliveryType SettlDeliveryType_0(0);
    noAllocs_0_0.set(SettlDeliveryType_0);
    SettlInstructionsData_0.insert(SettlDeliveryType_0.getString());
    FIX::StandInstDbID StandInstDbID_0("STRING_779067252");
    noAllocs_0_0.set(StandInstDbID_0);
    SettlInstructionsData_0.insert(StandInstDbID_0.getString());
    FIX::StandInstDbName StandInstDbName_0("STRING_136648717");
    noAllocs_0_0.set(StandInstDbName_0);
    SettlInstructionsData_0.insert(StandInstDbName_0.getString());
    FIX::StandInstDbType StandInstDbType_0(3);
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
      FIX::SettlInstSource SettlInstSource_0('1');
      noDlvyInst_0_1_0.set(SettlInstSource_0);
      DlvyInstGrp_NoDlvyInst_0.insert(SettlInstSource_0.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_0);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_0;
        FIX::SettlPartyID SettlPartyID_0("STRING_637596023");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyID_0.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_0('2');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyIDSource_0.getString());
        FIX::SettlPartyRole SettlPartyRole_0(121870572);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyRole_0.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_0);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_0;
          FIX::SettlPartySubID SettlPartySubID_0("STRING_541269496");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_0);
          SettlPtysSubGrp_NoSettlPartySubIDs_0.insert(SettlPartySubID_0.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_0(2096976074);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_0);
          SettlPtysSubGrp_NoSettlPartySubIDs_0.insert(SettlPartySubIDType_0.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_0);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_1;
          FIX::SettlPartySubID SettlPartySubID_1("STRING_1515327748");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_1);
          SettlPtysSubGrp_NoSettlPartySubIDs_1.insert(SettlPartySubID_1.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_1(1830762742);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_1);
          SettlPtysSubGrp_NoSettlPartySubIDs_1.insert(SettlPartySubIDType_1.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_1);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_1;
        FIX::SettlPartyID SettlPartyID_1("STRING_74548641");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyID_1.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_1('2');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyIDSource_1.getString());
        FIX::SettlPartyRole SettlPartyRole_1(644859852);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyRole_1.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_1);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_2;
          FIX::SettlPartySubID SettlPartySubID_2("STRING_2055426807");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_2);
          SettlPtysSubGrp_NoSettlPartySubIDs_2.insert(SettlPartySubID_2.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_2(960984742);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_2);
          SettlPtysSubGrp_NoSettlPartySubIDs_2.insert(SettlPartySubIDType_2.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_2);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_3;
          FIX::SettlPartySubID SettlPartySubID_3("STRING_1183975901");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_3);
          SettlPtysSubGrp_NoSettlPartySubIDs_3.insert(SettlPartySubID_3.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_3(682837991);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_3);
          SettlPtysSubGrp_NoSettlPartySubIDs_3.insert(SettlPartySubIDType_3.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_3);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_4;
          FIX::SettlPartySubID SettlPartySubID_4("STRING_82047031");
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubID_4);
          SettlPtysSubGrp_NoSettlPartySubIDs_4.insert(SettlPartySubID_4.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_4(1806791015);
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubIDType_4);
          SettlPtysSubGrp_NoSettlPartySubIDs_4.insert(SettlPartySubIDType_4.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_4);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_1("STRING_1804004407");
    noAllocs_0_1.set(AllocAccount_1);
    AllocGrp_NoAllocs_1.insert(AllocAccount_1.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_1;
    AllocAccruedInterestAmt_1.setString("1504875");
    noAllocs_0_1.set(AllocAccruedInterestAmt_1);
    AllocGrp_NoAllocs_1.insert(AllocAccruedInterestAmt_1.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_1(569677745);
    noAllocs_0_1.set(AllocAcctIDSource_1);
    AllocGrp_NoAllocs_1.insert(AllocAcctIDSource_1.getString());
    FIX::AllocAvgPx AllocAvgPx_1;
    AllocAvgPx_1.setString("14833991");
    noAllocs_0_1.set(AllocAvgPx_1);
    AllocGrp_NoAllocs_1.insert(AllocAvgPx_1.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_1("STRING_1889367648");
    noAllocs_0_1.set(AllocCustomerCapacity_1);
    AllocGrp_NoAllocs_1.insert(AllocCustomerCapacity_1.getString());
    FIX::AllocHandlInst AllocHandlInst_1(3);
    noAllocs_0_1.set(AllocHandlInst_1);
    AllocGrp_NoAllocs_1.insert(AllocHandlInst_1.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_1;
    AllocInterestAtMaturity_1.setString("1149827");
    noAllocs_0_1.set(AllocInterestAtMaturity_1);
    AllocGrp_NoAllocs_1.insert(AllocInterestAtMaturity_1.getString());
    FIX::AllocMethod AllocMethod_1(3);
    noAllocs_0_1.set(AllocMethod_1);
    AllocGrp_NoAllocs_1.insert(AllocMethod_1.getString());
    FIX::AllocNetMoney AllocNetMoney_1;
    AllocNetMoney_1.setString("8383340");
    noAllocs_0_1.set(AllocNetMoney_1);
    AllocGrp_NoAllocs_1.insert(AllocNetMoney_1.getString());
    FIX::AllocPositionEffect AllocPositionEffect_1('O');
    noAllocs_0_1.set(AllocPositionEffect_1);
    AllocGrp_NoAllocs_1.insert(AllocPositionEffect_1.getString());
    FIX::AllocPrice AllocPrice_1;
    AllocPrice_1.setString("13729019");
    noAllocs_0_1.set(AllocPrice_1);
    AllocGrp_NoAllocs_1.insert(AllocPrice_1.getString());
    FIX::AllocQty AllocQty_1;
    AllocQty_1.setString("18128563");
    noAllocs_0_1.set(AllocQty_1);
    AllocGrp_NoAllocs_1.insert(AllocQty_1.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_1;
    AllocSettlCurrAmt_1.setString("20596955");
    noAllocs_0_1.set(AllocSettlCurrAmt_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlCurrAmt_1.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_1("USD");
    noAllocs_0_1.set(AllocSettlCurrency_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlCurrency_1.getString());
    FIX::AllocSettlInstType AllocSettlInstType_1(1);
    noAllocs_0_1.set(AllocSettlInstType_1);
    AllocGrp_NoAllocs_1.insert(AllocSettlInstType_1.getString());
    FIX::AllocText AllocText_1("STRING_162826005");
    noAllocs_0_1.set(AllocText_1);
    AllocGrp_NoAllocs_1.insert(AllocText_1.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_1("STRING_4");
    noAllocs_0_1.set(ClearingFeeIndicator_1);
    AllocGrp_NoAllocs_1.insert(ClearingFeeIndicator_1.getString());
    FIX::EncodedAllocText EncodedAllocText_1("DATA_2131058530");
    noAllocs_0_1.set(EncodedAllocText_1);
    AllocGrp_NoAllocs_1.insert(EncodedAllocText_1.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_1(1678153753);
    noAllocs_0_1.set(EncodedAllocTextLen_1);
    AllocGrp_NoAllocs_1.insert(EncodedAllocTextLen_1.getString());
    FIX::IndividualAllocID IndividualAllocID_1("STRING_100830035");
    noAllocs_0_1.set(IndividualAllocID_1);
    AllocGrp_NoAllocs_1.insert(IndividualAllocID_1.getString());
    FIX::IndividualAllocType IndividualAllocType_1(1);
    noAllocs_0_1.set(IndividualAllocType_1);
    AllocGrp_NoAllocs_1.insert(IndividualAllocType_1.getString());
    FIX::MatchStatus MatchStatus_1('0');
    noAllocs_0_1.set(MatchStatus_1);
    AllocGrp_NoAllocs_1.insert(MatchStatus_1.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_1(false);
    noAllocs_0_1.set(NotifyBrokerOfCredit_1);
    AllocGrp_NoAllocs_1.insert(NotifyBrokerOfCredit_1.getString());
    FIX::ProcessCode ProcessCode_1('4');
    noAllocs_0_1.set(ProcessCode_1);
    AllocGrp_NoAllocs_1.insert(ProcessCode_1.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_1("STRING_1845688114");
    noAllocs_0_1.set(SecondaryIndividualAllocID_1);
    AllocGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_1.getString());
    FIX::SettlCurrAmt SettlCurrAmt_1;
    SettlCurrAmt_1.setString("17066746");
    noAllocs_0_1.set(SettlCurrAmt_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrAmt_1.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_1;
    SettlCurrFxRate_1.setString("20200359");
    noAllocs_0_1.set(SettlCurrFxRate_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrFxRate_1.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_1('M');
    noAllocs_0_1.set(SettlCurrFxRateCalc_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrFxRateCalc_1.getString());
    FIX::SettlCurrency SettlCurrency_1("CAN");
    noAllocs_0_1.set(SettlCurrency_1);
    AllocGrp_NoAllocs_1.insert(SettlCurrency_1.getString());
    all_values.push_back(AllocGrp_NoAllocs_1);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_3;
      FIX::ClearingInstruction ClearingInstruction_3(2);
      noClearingInstructions_1_1_0.set(ClearingInstruction_3);
      ClrInstGrp_NoClearingInstructions_3.insert(ClearingInstruction_3.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_3);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_4;
      FIX::ClearingInstruction ClearingInstruction_4(12);
      noClearingInstructions_1_1_1.set(ClearingInstruction_4);
      ClrInstGrp_NoClearingInstructions_4.insert(ClearingInstruction_4.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_4);

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_1;
    FIX::CommCurrency CommCurrency_1("CHF");
    noAllocs_0_1.set(CommCurrency_1);
    CommissionData_1.insert(CommCurrency_1.getString());
    FIX::CommType CommType_1('2');
    noAllocs_0_1.set(CommType_1);
    CommissionData_1.insert(CommType_1.getString());
    FIX::Commission Commission_1;
    Commission_1.setString("16359451");
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
      MiscFeeAmt_2.setString("5482361");
      noMiscFees_1_1_0.set(MiscFeeAmt_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeAmt_2.getString());
      FIX::MiscFeeBasis MiscFeeBasis_2(2);
      noMiscFees_1_1_0.set(MiscFeeBasis_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeBasis_2.getString());
      FIX::MiscFeeCurr MiscFeeCurr_2("GBP");
      noMiscFees_1_1_0.set(MiscFeeCurr_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeCurr_2.getString());
      FIX::MiscFeeType MiscFeeType_2("STRING_7");
      noMiscFees_1_1_0.set(MiscFeeType_2);
      MiscFeesGrp_NoMiscFees_2.insert(MiscFeeType_2.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_2);

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_3;
      FIX::MiscFeeAmt MiscFeeAmt_3;
      MiscFeeAmt_3.setString("13219589");
      noMiscFees_1_1_1.set(MiscFeeAmt_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeAmt_3.getString());
      FIX::MiscFeeBasis MiscFeeBasis_3(2);
      noMiscFees_1_1_1.set(MiscFeeBasis_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeBasis_3.getString());
      FIX::MiscFeeCurr MiscFeeCurr_3("CHF");
      noMiscFees_1_1_1.set(MiscFeeCurr_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeCurr_3.getString());
      FIX::MiscFeeType MiscFeeType_3("STRING_10");
      noMiscFees_1_1_1.set(MiscFeeType_3);
      MiscFeesGrp_NoMiscFees_3.insert(MiscFeeType_3.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_3);

      noAllocs_0_1.addGroup(noMiscFees_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_1_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_4;
      FIX::MiscFeeAmt MiscFeeAmt_4;
      MiscFeeAmt_4.setString("3415545");
      noMiscFees_1_1_2.set(MiscFeeAmt_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeAmt_4.getString());
      FIX::MiscFeeBasis MiscFeeBasis_4(2);
      noMiscFees_1_1_2.set(MiscFeeBasis_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeBasis_4.getString());
      FIX::MiscFeeCurr MiscFeeCurr_4("JPY");
      noMiscFees_1_1_2.set(MiscFeeCurr_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeCurr_4.getString());
      FIX::MiscFeeType MiscFeeType_4("STRING_9");
      noMiscFees_1_1_2.set(MiscFeeType_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeType_4.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_4);

      noAllocs_0_1.addGroup(noMiscFees_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_4;
      FIX::NestedPartyID NestedPartyID_4("STRING_1977503984");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyID_4.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_4('2');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyIDSource_4.getString());
      FIX::NestedPartyRole NestedPartyRole_4(1244841202);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyRole_4.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_4);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_7;
        FIX::NestedPartySubID NestedPartySubID_7("STRING_1786458828");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_7);
        NstdPtysSubGrp_NoNestedPartySubIDs_7.insert(NestedPartySubID_7.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_7(776700835);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_7);
        NstdPtysSubGrp_NoNestedPartySubIDs_7.insert(NestedPartySubIDType_7.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_7);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_8;
        FIX::NestedPartySubID NestedPartySubID_8("STRING_248626011");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_8);
        NstdPtysSubGrp_NoNestedPartySubIDs_8.insert(NestedPartySubID_8.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_8(1578184371);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_8);
        NstdPtysSubGrp_NoNestedPartySubIDs_8.insert(NestedPartySubIDType_8.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_8);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_9;
        FIX::NestedPartySubID NestedPartySubID_9("STRING_878238213");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_9);
        NstdPtysSubGrp_NoNestedPartySubIDs_9.insert(NestedPartySubID_9.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_9(1769588400);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_9);
        NstdPtysSubGrp_NoNestedPartySubIDs_9.insert(NestedPartySubIDType_9.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_9);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_5;
      FIX::NestedPartyID NestedPartyID_5("STRING_1111793914");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyID_5.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_5('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyIDSource_5.getString());
      FIX::NestedPartyRole NestedPartyRole_5(1258049916);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyRole_5.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_5);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_10;
        FIX::NestedPartySubID NestedPartySubID_10("STRING_1453030091");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_10);
        NstdPtysSubGrp_NoNestedPartySubIDs_10.insert(NestedPartySubID_10.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_10(1806286092);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_10);
        NstdPtysSubGrp_NoNestedPartySubIDs_10.insert(NestedPartySubIDType_10.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_10);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_11;
        FIX::NestedPartySubID NestedPartySubID_11("STRING_1308980344");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_11);
        NstdPtysSubGrp_NoNestedPartySubIDs_11.insert(NestedPartySubID_11.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_11(751223969);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_11);
        NstdPtysSubGrp_NoNestedPartySubIDs_11.insert(NestedPartySubIDType_11.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_11);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_12;
        FIX::NestedPartySubID NestedPartySubID_12("STRING_119250504");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_12);
        NstdPtysSubGrp_NoNestedPartySubIDs_12.insert(NestedPartySubID_12.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_12(1957038796);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_12);
        NstdPtysSubGrp_NoNestedPartySubIDs_12.insert(NestedPartySubIDType_12.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_12);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_1;
    FIX::SettlDeliveryType SettlDeliveryType_1(3);
    noAllocs_0_1.set(SettlDeliveryType_1);
    SettlInstructionsData_1.insert(SettlDeliveryType_1.getString());
    FIX::StandInstDbID StandInstDbID_1("STRING_613781021");
    noAllocs_0_1.set(StandInstDbID_1);
    SettlInstructionsData_1.insert(StandInstDbID_1.getString());
    FIX::StandInstDbName StandInstDbName_1("STRING_620439606");
    noAllocs_0_1.set(StandInstDbName_1);
    SettlInstructionsData_1.insert(StandInstDbName_1.getString());
    FIX::StandInstDbType StandInstDbType_1(3);
    noAllocs_0_1.set(StandInstDbType_1);
    SettlInstructionsData_1.insert(StandInstDbType_1.getString());
    all_values.push_back(SettlInstructionsData_1);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_1;
      FIX::DlvyInstType DlvyInstType_1('S');
      noDlvyInst_1_1_0.set(DlvyInstType_1);
      DlvyInstGrp_NoDlvyInst_1.insert(DlvyInstType_1.getString());
      FIX::SettlInstSource SettlInstSource_1('2');
      noDlvyInst_1_1_0.set(SettlInstSource_1);
      DlvyInstGrp_NoDlvyInst_1.insert(SettlInstSource_1.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_1);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_2;
        FIX::SettlPartyID SettlPartyID_2("STRING_1093810039");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyID_2.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_2('1');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyIDSource_2.getString());
        FIX::SettlPartyRole SettlPartyRole_2(852920632);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyRole_2.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_2);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_5;
          FIX::SettlPartySubID SettlPartySubID_5("STRING_1794348855");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_5);
          SettlPtysSubGrp_NoSettlPartySubIDs_5.insert(SettlPartySubID_5.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_5(2097761834);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_5);
          SettlPtysSubGrp_NoSettlPartySubIDs_5.insert(SettlPartySubIDType_5.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_5);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_6;
          FIX::SettlPartySubID SettlPartySubID_6("STRING_1134893170");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_6);
          SettlPtysSubGrp_NoSettlPartySubIDs_6.insert(SettlPartySubID_6.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_6(1433324035);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_6);
          SettlPtysSubGrp_NoSettlPartySubIDs_6.insert(SettlPartySubIDType_6.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_6);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_3;
        FIX::SettlPartyID SettlPartyID_3("STRING_726979021");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyID_3.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_3('1');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyIDSource_3.getString());
        FIX::SettlPartyRole SettlPartyRole_3(864024758);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyRole_3.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_3);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_7;
          FIX::SettlPartySubID SettlPartySubID_7("STRING_1005623933");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_7);
          SettlPtysSubGrp_NoSettlPartySubIDs_7.insert(SettlPartySubID_7.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_7(1975818672);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_7);
          SettlPtysSubGrp_NoSettlPartySubIDs_7.insert(SettlPartySubIDType_7.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_7);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_8;
          FIX::SettlPartySubID SettlPartySubID_8("STRING_1277942539");
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubID_8);
          SettlPtysSubGrp_NoSettlPartySubIDs_8.insert(SettlPartySubID_8.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_8(116190201);
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubIDType_8);
          SettlPtysSubGrp_NoSettlPartySubIDs_8.insert(SettlPartySubIDType_8.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_8);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_4;
        FIX::SettlPartyID SettlPartyID_4("STRING_352271199");
        noSettlPartyIDs_1_0_2_2.set(SettlPartyID_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyID_4.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_4('5');
        noSettlPartyIDs_1_0_2_2.set(SettlPartyIDSource_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyIDSource_4.getString());
        FIX::SettlPartyRole SettlPartyRole_4(1922476293);
        noSettlPartyIDs_1_0_2_2.set(SettlPartyRole_4);
        SettlParties_NoSettlPartyIDs_4.insert(SettlPartyRole_4.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_4);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_9;
          FIX::SettlPartySubID SettlPartySubID_9("STRING_1334712951");
          noSettlPartySubIDs_1_0_2_3_0.set(SettlPartySubID_9);
          SettlPtysSubGrp_NoSettlPartySubIDs_9.insert(SettlPartySubID_9.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_9(2041726798);
          noSettlPartySubIDs_1_0_2_3_0.set(SettlPartySubIDType_9);
          SettlPtysSubGrp_NoSettlPartySubIDs_9.insert(SettlPartySubIDType_9.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_9);

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_10;
          FIX::SettlPartySubID SettlPartySubID_10("STRING_1470806692");
          noSettlPartySubIDs_1_0_2_3_1.set(SettlPartySubID_10);
          SettlPtysSubGrp_NoSettlPartySubIDs_10.insert(SettlPartySubID_10.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_10(1260412242);
          noSettlPartySubIDs_1_0_2_3_1.set(SettlPartySubIDType_10);
          SettlPtysSubGrp_NoSettlPartySubIDs_10.insert(SettlPartySubIDType_10.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_10);

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_1_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_2;
      FIX::DlvyInstType DlvyInstType_2('S');
      noDlvyInst_1_1_1.set(DlvyInstType_2);
      DlvyInstGrp_NoDlvyInst_2.insert(DlvyInstType_2.getString());
      FIX::SettlInstSource SettlInstSource_2('2');
      noDlvyInst_1_1_1.set(SettlInstSource_2);
      DlvyInstGrp_NoDlvyInst_2.insert(SettlInstSource_2.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_2);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_5;
        FIX::SettlPartyID SettlPartyID_5("STRING_1599910592");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyID_5.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_5('9');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyIDSource_5.getString());
        FIX::SettlPartyRole SettlPartyRole_5(2136203299);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyRole_5.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_5);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_11;
          FIX::SettlPartySubID SettlPartySubID_11("STRING_1999566858");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_11);
          SettlPtysSubGrp_NoSettlPartySubIDs_11.insert(SettlPartySubID_11.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_11(1785331338);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_11);
          SettlPtysSubGrp_NoSettlPartySubIDs_11.insert(SettlPartySubIDType_11.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_11);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_6;
        FIX::SettlPartyID SettlPartyID_6("STRING_1933462921");
        noSettlPartyIDs_1_1_2_1.set(SettlPartyID_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyID_6.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_6('7');
        noSettlPartyIDs_1_1_2_1.set(SettlPartyIDSource_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyIDSource_6.getString());
        FIX::SettlPartyRole SettlPartyRole_6(1432196545);
        noSettlPartyIDs_1_1_2_1.set(SettlPartyRole_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyRole_6.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_6);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_12;
          FIX::SettlPartySubID SettlPartySubID_12("STRING_1910806755");
          noSettlPartySubIDs_1_1_1_3_0.set(SettlPartySubID_12);
          SettlPtysSubGrp_NoSettlPartySubIDs_12.insert(SettlPartySubID_12.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_12(718036933);
          noSettlPartySubIDs_1_1_1_3_0.set(SettlPartySubIDType_12);
          SettlPtysSubGrp_NoSettlPartySubIDs_12.insert(SettlPartySubIDType_12.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_12);

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_13;
          FIX::SettlPartySubID SettlPartySubID_13("STRING_463236481");
          noSettlPartySubIDs_1_1_1_3_1.set(SettlPartySubID_13);
          SettlPtysSubGrp_NoSettlPartySubIDs_13.insert(SettlPartySubID_13.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_13(1146842289);
          noSettlPartySubIDs_1_1_1_3_1.set(SettlPartySubIDType_13);
          SettlPtysSubGrp_NoSettlPartySubIDs_13.insert(SettlPartySubIDType_13.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_13);

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_14;
          FIX::SettlPartySubID SettlPartySubID_14("STRING_1582061691");
          noSettlPartySubIDs_1_1_1_3_2.set(SettlPartySubID_14);
          SettlPtysSubGrp_NoSettlPartySubIDs_14.insert(SettlPartySubID_14.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_14(2068453716);
          noSettlPartySubIDs_1_1_1_3_2.set(SettlPartySubIDType_14);
          SettlPtysSubGrp_NoSettlPartySubIDs_14.insert(SettlPartySubIDType_14.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_14);

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_2);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_7;
        FIX::SettlPartyID SettlPartyID_7("STRING_4982574");
        noSettlPartyIDs_1_1_2_2.set(SettlPartyID_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyID_7.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_7('1');
        noSettlPartyIDs_1_1_2_2.set(SettlPartyIDSource_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyIDSource_7.getString());
        FIX::SettlPartyRole SettlPartyRole_7(1198912607);
        noSettlPartyIDs_1_1_2_2.set(SettlPartyRole_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyRole_7.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_7);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_15;
          FIX::SettlPartySubID SettlPartySubID_15("STRING_1762667915");
          noSettlPartySubIDs_1_1_2_3_0.set(SettlPartySubID_15);
          SettlPtysSubGrp_NoSettlPartySubIDs_15.insert(SettlPartySubID_15.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_15(1782401589);
          noSettlPartySubIDs_1_1_2_3_0.set(SettlPartySubIDType_15);
          SettlPtysSubGrp_NoSettlPartySubIDs_15.insert(SettlPartySubIDType_15.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_15);

          noSettlPartyIDs_1_1_2_2.addGroup(noSettlPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_16;
          FIX::SettlPartySubID SettlPartySubID_16("STRING_2043649069");
          noSettlPartySubIDs_1_1_2_3_1.set(SettlPartySubID_16);
          SettlPtysSubGrp_NoSettlPartySubIDs_16.insert(SettlPartySubID_16.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_16(1276435811);
          noSettlPartySubIDs_1_1_2_3_1.set(SettlPartySubIDType_16);
          SettlPtysSubGrp_NoSettlPartySubIDs_16.insert(SettlPartySubIDType_16.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_16);

          noSettlPartyIDs_1_1_2_2.addGroup(noSettlPartySubIDs_1_1_2_3_1);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_0;
    FIX::ExecID ExecID_0("STRING_1937892219");
    noExecs_0_0.set(ExecID_0);
    ExecAllocGrp_NoExecs_0.insert(ExecID_0.getString());
    FIX::FirmTradeID FirmTradeID_0("STRING_599758855");
    noExecs_0_0.set(FirmTradeID_0);
    ExecAllocGrp_NoExecs_0.insert(FirmTradeID_0.getString());
    FIX::LastCapacity LastCapacity_0('3');
    noExecs_0_0.set(LastCapacity_0);
    ExecAllocGrp_NoExecs_0.insert(LastCapacity_0.getString());
    FIX::LastParPx LastParPx_0;
    LastParPx_0.setString("2984327");
    noExecs_0_0.set(LastParPx_0);
    ExecAllocGrp_NoExecs_0.insert(LastParPx_0.getString());
    FIX::LastPx LastPx_0;
    LastPx_0.setString("5435215");
    noExecs_0_0.set(LastPx_0);
    ExecAllocGrp_NoExecs_0.insert(LastPx_0.getString());
    FIX::LastQty LastQty_0;
    LastQty_0.setString("8606972");
    noExecs_0_0.set(LastQty_0);
    ExecAllocGrp_NoExecs_0.insert(LastQty_0.getString());
    FIX::SecondaryExecID SecondaryExecID_0("STRING_1898343335");
    noExecs_0_0.set(SecondaryExecID_0);
    ExecAllocGrp_NoExecs_0.insert(SecondaryExecID_0.getString());
    FIX::TradeID TradeID_0("STRING_1449278324");
    noExecs_0_0.set(TradeID_0);
    ExecAllocGrp_NoExecs_0.insert(TradeID_0.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_0);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_1;
    FIX::ExecID ExecID_1("STRING_849416935");
    noExecs_0_1.set(ExecID_1);
    ExecAllocGrp_NoExecs_1.insert(ExecID_1.getString());
    FIX::FirmTradeID FirmTradeID_1("STRING_831401976");
    noExecs_0_1.set(FirmTradeID_1);
    ExecAllocGrp_NoExecs_1.insert(FirmTradeID_1.getString());
    FIX::LastCapacity LastCapacity_1('3');
    noExecs_0_1.set(LastCapacity_1);
    ExecAllocGrp_NoExecs_1.insert(LastCapacity_1.getString());
    FIX::LastParPx LastParPx_1;
    LastParPx_1.setString("4872646");
    noExecs_0_1.set(LastParPx_1);
    ExecAllocGrp_NoExecs_1.insert(LastParPx_1.getString());
    FIX::LastPx LastPx_1;
    LastPx_1.setString("6173812");
    noExecs_0_1.set(LastPx_1);
    ExecAllocGrp_NoExecs_1.insert(LastPx_1.getString());
    FIX::LastQty LastQty_1;
    LastQty_1.setString("20772751");
    noExecs_0_1.set(LastQty_1);
    ExecAllocGrp_NoExecs_1.insert(LastQty_1.getString());
    FIX::SecondaryExecID SecondaryExecID_1("STRING_1919461171");
    noExecs_0_1.set(SecondaryExecID_1);
    ExecAllocGrp_NoExecs_1.insert(SecondaryExecID_1.getString());
    FIX::TradeID TradeID_1("STRING_353638710");
    noExecs_0_1.set(TradeID_1);
    ExecAllocGrp_NoExecs_1.insert(TradeID_1.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_1);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_0;
  FIX::AgreementCurrency AgreementCurrency_0("USD");
  msg.set(AgreementCurrency_0);
  FinancingDetails_0.insert(AgreementCurrency_0.getString());
  FIX::AgreementDate AgreementDate_0("LOCALMKTDATE_816875191");
  msg.set(AgreementDate_0);
  FinancingDetails_0.insert(AgreementDate_0.getString());
  FIX::AgreementDesc AgreementDesc_0("STRING_839956868");
  msg.set(AgreementDesc_0);
  FinancingDetails_0.insert(AgreementDesc_0.getString());
  FIX::AgreementID AgreementID_0("STRING_2072076147");
  msg.set(AgreementID_0);
  FinancingDetails_0.insert(AgreementID_0.getString());
  FIX::DeliveryType DeliveryType_0(3);
  msg.set(DeliveryType_0);
  FinancingDetails_0.insert(DeliveryType_0.getString());
  FIX::EndDate EndDate_0("LOCALMKTDATE_844939442");
  msg.set(EndDate_0);
  FinancingDetails_0.insert(EndDate_0.getString());
  FIX::MarginRatio MarginRatio_0;
  MarginRatio_0.setString("92.150000");
  msg.set(MarginRatio_0);
  FinancingDetails_0.insert(MarginRatio_0.getString());
  FIX::StartDate StartDate_0("LOCALMKTDATE_1936757866");
  msg.set(StartDate_0);
  FinancingDetails_0.insert(StartDate_0.getString());
  FIX::TerminationType TerminationType_0(3);
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
    FIX::EncodedLegIssuer EncodedLegIssuer_1("DATA_1571675807");
    noLegs_0_0.set(EncodedLegIssuer_1);
    InstrumentLeg_1.insert(EncodedLegIssuer_1.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_1(862277640);
    noLegs_0_0.set(EncodedLegIssuerLen_1);
    InstrumentLeg_1.insert(EncodedLegIssuerLen_1.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_1("DATA_79125646");
    noLegs_0_0.set(EncodedLegSecurityDesc_1);
    InstrumentLeg_1.insert(EncodedLegSecurityDesc_1.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_1(393823051);
    noLegs_0_0.set(EncodedLegSecurityDescLen_1);
    InstrumentLeg_1.insert(EncodedLegSecurityDescLen_1.getString());
    FIX::LegCFICode LegCFICode_1("STRING_652686211");
    noLegs_0_0.set(LegCFICode_1);
    InstrumentLeg_1.insert(LegCFICode_1.getString());
    FIX::LegContractMultiplier LegContractMultiplier_1;
    LegContractMultiplier_1.setString("6788845");
    noLegs_0_0.set(LegContractMultiplier_1);
    InstrumentLeg_1.insert(LegContractMultiplier_1.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_1(476382538);
    noLegs_0_0.set(LegContractMultiplierUnit_1);
    InstrumentLeg_1.insert(LegContractMultiplierUnit_1.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_1("MONTHYEAR_951118954");
    noLegs_0_0.set(LegContractSettlMonth_1);
    InstrumentLeg_1.insert(LegContractSettlMonth_1.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_1("COUNTRY_1222406006");
    noLegs_0_0.set(LegCountryOfIssue_1);
    InstrumentLeg_1.insert(LegCountryOfIssue_1.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_1("LOCALMKTDATE_1337079822");
    noLegs_0_0.set(LegCouponPaymentDate_1);
    InstrumentLeg_1.insert(LegCouponPaymentDate_1.getString());
    FIX::LegCouponRate LegCouponRate_1;
    LegCouponRate_1.setString("86.420000");
    noLegs_0_0.set(LegCouponRate_1);
    InstrumentLeg_1.insert(LegCouponRate_1.getString());
    FIX::LegCreditRating LegCreditRating_1("STRING_524200682");
    noLegs_0_0.set(LegCreditRating_1);
    InstrumentLeg_1.insert(LegCreditRating_1.getString());
    FIX::LegCurrency LegCurrency_1("GBP");
    noLegs_0_0.set(LegCurrency_1);
    InstrumentLeg_1.insert(LegCurrency_1.getString());
    FIX::LegDatedDate LegDatedDate_1("LOCALMKTDATE_1825562216");
    noLegs_0_0.set(LegDatedDate_1);
    InstrumentLeg_1.insert(LegDatedDate_1.getString());
    FIX::LegExerciseStyle LegExerciseStyle_1(526277734);
    noLegs_0_0.set(LegExerciseStyle_1);
    InstrumentLeg_1.insert(LegExerciseStyle_1.getString());
    FIX::LegFactor LegFactor_1;
    LegFactor_1.setString("32782");
    noLegs_0_0.set(LegFactor_1);
    InstrumentLeg_1.insert(LegFactor_1.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_1(1755353687);
    noLegs_0_0.set(LegFlowScheduleType_1);
    InstrumentLeg_1.insert(LegFlowScheduleType_1.getString());
    FIX::LegInstrRegistry LegInstrRegistry_1("STRING_298255257");
    noLegs_0_0.set(LegInstrRegistry_1);
    InstrumentLeg_1.insert(LegInstrRegistry_1.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_1("LOCALMKTDATE_356916930");
    noLegs_0_0.set(LegInterestAccrualDate_1);
    InstrumentLeg_1.insert(LegInterestAccrualDate_1.getString());
    FIX::LegIssueDate LegIssueDate_1("LOCALMKTDATE_1448468266");
    noLegs_0_0.set(LegIssueDate_1);
    InstrumentLeg_1.insert(LegIssueDate_1.getString());
    FIX::LegIssuer LegIssuer_1("STRING_788269713");
    noLegs_0_0.set(LegIssuer_1);
    InstrumentLeg_1.insert(LegIssuer_1.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_1("STRING_1173792122");
    noLegs_0_0.set(LegLocaleOfIssue_1);
    InstrumentLeg_1.insert(LegLocaleOfIssue_1.getString());
    FIX::LegMaturityDate LegMaturityDate_1("LOCALMKTDATE_140941486");
    noLegs_0_0.set(LegMaturityDate_1);
    InstrumentLeg_1.insert(LegMaturityDate_1.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_1("MONTHYEAR_712862213");
    noLegs_0_0.set(LegMaturityMonthYear_1);
    InstrumentLeg_1.insert(LegMaturityMonthYear_1.getString());
    FIX::LegMaturityTime LegMaturityTime_1("TZTIMEONLY_1911637381");
    noLegs_0_0.set(LegMaturityTime_1);
    InstrumentLeg_1.insert(LegMaturityTime_1.getString());
    FIX::LegOptAttribute LegOptAttribute_1('9');
    noLegs_0_0.set(LegOptAttribute_1);
    InstrumentLeg_1.insert(LegOptAttribute_1.getString());
    FIX::LegOptionRatio LegOptionRatio_1;
    LegOptionRatio_1.setString("20478514");
    noLegs_0_0.set(LegOptionRatio_1);
    InstrumentLeg_1.insert(LegOptionRatio_1.getString());
    FIX::LegPool LegPool_1("STRING_1700911600");
    noLegs_0_0.set(LegPool_1);
    InstrumentLeg_1.insert(LegPool_1.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_1("STRING_1951993147");
    noLegs_0_0.set(LegPriceUnitOfMeasure_1);
    InstrumentLeg_1.insert(LegPriceUnitOfMeasure_1.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_1;
    LegPriceUnitOfMeasureQty_1.setString("8505412");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_1);
    InstrumentLeg_1.insert(LegPriceUnitOfMeasureQty_1.getString());
    FIX::LegProduct LegProduct_1(1125103759);
    noLegs_0_0.set(LegProduct_1);
    InstrumentLeg_1.insert(LegProduct_1.getString());
    FIX::LegPutOrCall LegPutOrCall_1(666787139);
    noLegs_0_0.set(LegPutOrCall_1);
    InstrumentLeg_1.insert(LegPutOrCall_1.getString());
    FIX::LegRatioQty LegRatioQty_1;
    LegRatioQty_1.setString("9296669");
    noLegs_0_0.set(LegRatioQty_1);
    InstrumentLeg_1.insert(LegRatioQty_1.getString());
    FIX::LegRedemptionDate LegRedemptionDate_1("LOCALMKTDATE_1518926811");
    noLegs_0_0.set(LegRedemptionDate_1);
    InstrumentLeg_1.insert(LegRedemptionDate_1.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_1("STRING_1319473351");
    noLegs_0_0.set(LegRepoCollateralSecurityType_1);
    InstrumentLeg_1.insert(LegRepoCollateralSecurityType_1.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_1;
    LegRepurchaseRate_1.setString("14.100000");
    noLegs_0_0.set(LegRepurchaseRate_1);
    InstrumentLeg_1.insert(LegRepurchaseRate_1.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_1(1995309349);
    noLegs_0_0.set(LegRepurchaseTerm_1);
    InstrumentLeg_1.insert(LegRepurchaseTerm_1.getString());
    FIX::LegSecurityDesc LegSecurityDesc_1("STRING_123108657");
    noLegs_0_0.set(LegSecurityDesc_1);
    InstrumentLeg_1.insert(LegSecurityDesc_1.getString());
    FIX::LegSecurityExchange LegSecurityExchange_1("EXCHANGE_683473768");
    noLegs_0_0.set(LegSecurityExchange_1);
    InstrumentLeg_1.insert(LegSecurityExchange_1.getString());
    FIX::LegSecurityID LegSecurityID_1("STRING_1184905523");
    noLegs_0_0.set(LegSecurityID_1);
    InstrumentLeg_1.insert(LegSecurityID_1.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_1("STRING_825087299");
    noLegs_0_0.set(LegSecurityIDSource_1);
    InstrumentLeg_1.insert(LegSecurityIDSource_1.getString());
    FIX::LegSecuritySubType LegSecuritySubType_1("STRING_1207674450");
    noLegs_0_0.set(LegSecuritySubType_1);
    InstrumentLeg_1.insert(LegSecuritySubType_1.getString());
    FIX::LegSecurityType LegSecurityType_1("STRING_1223918632");
    noLegs_0_0.set(LegSecurityType_1);
    InstrumentLeg_1.insert(LegSecurityType_1.getString());
    FIX::LegSide LegSide_1('2');
    noLegs_0_0.set(LegSide_1);
    InstrumentLeg_1.insert(LegSide_1.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_1("STRING_885753018");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_1);
    InstrumentLeg_1.insert(LegStateOrProvinceOfIssue_1.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_1("USD");
    noLegs_0_0.set(LegStrikeCurrency_1);
    InstrumentLeg_1.insert(LegStrikeCurrency_1.getString());
    FIX::LegStrikePrice LegStrikePrice_1;
    LegStrikePrice_1.setString("4936230");
    noLegs_0_0.set(LegStrikePrice_1);
    InstrumentLeg_1.insert(LegStrikePrice_1.getString());
    FIX::LegSymbol LegSymbol_1("STRING_2048451624");
    noLegs_0_0.set(LegSymbol_1);
    InstrumentLeg_1.insert(LegSymbol_1.getString());
    FIX::LegSymbolSfx LegSymbolSfx_1("STRING_571179421");
    noLegs_0_0.set(LegSymbolSfx_1);
    InstrumentLeg_1.insert(LegSymbolSfx_1.getString());
    FIX::LegTimeUnit LegTimeUnit_1("STRING_1942091324");
    noLegs_0_0.set(LegTimeUnit_1);
    InstrumentLeg_1.insert(LegTimeUnit_1.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_1("STRING_689237689");
    noLegs_0_0.set(LegUnitOfMeasure_1);
    InstrumentLeg_1.insert(LegUnitOfMeasure_1.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_1;
    LegUnitOfMeasureQty_1.setString("17449715");
    noLegs_0_0.set(LegUnitOfMeasureQty_1);
    InstrumentLeg_1.insert(LegUnitOfMeasureQty_1.getString());
    all_values.push_back(InstrumentLeg_1);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_1;
      FIX::LegSecurityAltID LegSecurityAltID_1("STRING_1402099902");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_1);
      LegSecAltIDGrp_NoLegSecurityAltID_1.insert(LegSecurityAltID_1.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_1("STRING_1509125276");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_1);
      LegSecAltIDGrp_NoLegSecurityAltID_1.insert(LegSecurityAltIDSource_1.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_1);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_2;
      FIX::LegSecurityAltID LegSecurityAltID_2("STRING_921430092");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_2);
      LegSecAltIDGrp_NoLegSecurityAltID_2.insert(LegSecurityAltID_2.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_2("STRING_1302467683");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_2);
      LegSecAltIDGrp_NoLegSecurityAltID_2.insert(LegSecurityAltIDSource_2.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_2);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_2;
    FIX::EncodedLegIssuer EncodedLegIssuer_2("DATA_1062553228");
    noLegs_0_1.set(EncodedLegIssuer_2);
    InstrumentLeg_2.insert(EncodedLegIssuer_2.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_2(725939591);
    noLegs_0_1.set(EncodedLegIssuerLen_2);
    InstrumentLeg_2.insert(EncodedLegIssuerLen_2.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_2("DATA_5525298");
    noLegs_0_1.set(EncodedLegSecurityDesc_2);
    InstrumentLeg_2.insert(EncodedLegSecurityDesc_2.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_2(40173340);
    noLegs_0_1.set(EncodedLegSecurityDescLen_2);
    InstrumentLeg_2.insert(EncodedLegSecurityDescLen_2.getString());
    FIX::LegCFICode LegCFICode_2("STRING_1392726731");
    noLegs_0_1.set(LegCFICode_2);
    InstrumentLeg_2.insert(LegCFICode_2.getString());
    FIX::LegContractMultiplier LegContractMultiplier_2;
    LegContractMultiplier_2.setString("9351922");
    noLegs_0_1.set(LegContractMultiplier_2);
    InstrumentLeg_2.insert(LegContractMultiplier_2.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_2(1559100151);
    noLegs_0_1.set(LegContractMultiplierUnit_2);
    InstrumentLeg_2.insert(LegContractMultiplierUnit_2.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_2("MONTHYEAR_564716434");
    noLegs_0_1.set(LegContractSettlMonth_2);
    InstrumentLeg_2.insert(LegContractSettlMonth_2.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_2("COUNTRY_396259970");
    noLegs_0_1.set(LegCountryOfIssue_2);
    InstrumentLeg_2.insert(LegCountryOfIssue_2.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_2("LOCALMKTDATE_1406925852");
    noLegs_0_1.set(LegCouponPaymentDate_2);
    InstrumentLeg_2.insert(LegCouponPaymentDate_2.getString());
    FIX::LegCouponRate LegCouponRate_2;
    LegCouponRate_2.setString("50.910000");
    noLegs_0_1.set(LegCouponRate_2);
    InstrumentLeg_2.insert(LegCouponRate_2.getString());
    FIX::LegCreditRating LegCreditRating_2("STRING_1079733739");
    noLegs_0_1.set(LegCreditRating_2);
    InstrumentLeg_2.insert(LegCreditRating_2.getString());
    FIX::LegCurrency LegCurrency_2("EUR");
    noLegs_0_1.set(LegCurrency_2);
    InstrumentLeg_2.insert(LegCurrency_2.getString());
    FIX::LegDatedDate LegDatedDate_2("LOCALMKTDATE_139924541");
    noLegs_0_1.set(LegDatedDate_2);
    InstrumentLeg_2.insert(LegDatedDate_2.getString());
    FIX::LegExerciseStyle LegExerciseStyle_2(1668266359);
    noLegs_0_1.set(LegExerciseStyle_2);
    InstrumentLeg_2.insert(LegExerciseStyle_2.getString());
    FIX::LegFactor LegFactor_2;
    LegFactor_2.setString("17238966");
    noLegs_0_1.set(LegFactor_2);
    InstrumentLeg_2.insert(LegFactor_2.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_2(1025677560);
    noLegs_0_1.set(LegFlowScheduleType_2);
    InstrumentLeg_2.insert(LegFlowScheduleType_2.getString());
    FIX::LegInstrRegistry LegInstrRegistry_2("STRING_1270979077");
    noLegs_0_1.set(LegInstrRegistry_2);
    InstrumentLeg_2.insert(LegInstrRegistry_2.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_2("LOCALMKTDATE_1938159151");
    noLegs_0_1.set(LegInterestAccrualDate_2);
    InstrumentLeg_2.insert(LegInterestAccrualDate_2.getString());
    FIX::LegIssueDate LegIssueDate_2("LOCALMKTDATE_1519300618");
    noLegs_0_1.set(LegIssueDate_2);
    InstrumentLeg_2.insert(LegIssueDate_2.getString());
    FIX::LegIssuer LegIssuer_2("STRING_1171947053");
    noLegs_0_1.set(LegIssuer_2);
    InstrumentLeg_2.insert(LegIssuer_2.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_2("STRING_361854924");
    noLegs_0_1.set(LegLocaleOfIssue_2);
    InstrumentLeg_2.insert(LegLocaleOfIssue_2.getString());
    FIX::LegMaturityDate LegMaturityDate_2("LOCALMKTDATE_1313908294");
    noLegs_0_1.set(LegMaturityDate_2);
    InstrumentLeg_2.insert(LegMaturityDate_2.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_2("MONTHYEAR_1861184743");
    noLegs_0_1.set(LegMaturityMonthYear_2);
    InstrumentLeg_2.insert(LegMaturityMonthYear_2.getString());
    FIX::LegMaturityTime LegMaturityTime_2("TZTIMEONLY_2106826467");
    noLegs_0_1.set(LegMaturityTime_2);
    InstrumentLeg_2.insert(LegMaturityTime_2.getString());
    FIX::LegOptAttribute LegOptAttribute_2('1');
    noLegs_0_1.set(LegOptAttribute_2);
    InstrumentLeg_2.insert(LegOptAttribute_2.getString());
    FIX::LegOptionRatio LegOptionRatio_2;
    LegOptionRatio_2.setString("11158009");
    noLegs_0_1.set(LegOptionRatio_2);
    InstrumentLeg_2.insert(LegOptionRatio_2.getString());
    FIX::LegPool LegPool_2("STRING_1468468096");
    noLegs_0_1.set(LegPool_2);
    InstrumentLeg_2.insert(LegPool_2.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_2("STRING_23403901");
    noLegs_0_1.set(LegPriceUnitOfMeasure_2);
    InstrumentLeg_2.insert(LegPriceUnitOfMeasure_2.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_2;
    LegPriceUnitOfMeasureQty_2.setString("2707850");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_2);
    InstrumentLeg_2.insert(LegPriceUnitOfMeasureQty_2.getString());
    FIX::LegProduct LegProduct_2(383537676);
    noLegs_0_1.set(LegProduct_2);
    InstrumentLeg_2.insert(LegProduct_2.getString());
    FIX::LegPutOrCall LegPutOrCall_2(749343493);
    noLegs_0_1.set(LegPutOrCall_2);
    InstrumentLeg_2.insert(LegPutOrCall_2.getString());
    FIX::LegRatioQty LegRatioQty_2;
    LegRatioQty_2.setString("2763103");
    noLegs_0_1.set(LegRatioQty_2);
    InstrumentLeg_2.insert(LegRatioQty_2.getString());
    FIX::LegRedemptionDate LegRedemptionDate_2("LOCALMKTDATE_423711016");
    noLegs_0_1.set(LegRedemptionDate_2);
    InstrumentLeg_2.insert(LegRedemptionDate_2.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_2("STRING_2142070224");
    noLegs_0_1.set(LegRepoCollateralSecurityType_2);
    InstrumentLeg_2.insert(LegRepoCollateralSecurityType_2.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_2;
    LegRepurchaseRate_2.setString("25.390000");
    noLegs_0_1.set(LegRepurchaseRate_2);
    InstrumentLeg_2.insert(LegRepurchaseRate_2.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_2(1982811167);
    noLegs_0_1.set(LegRepurchaseTerm_2);
    InstrumentLeg_2.insert(LegRepurchaseTerm_2.getString());
    FIX::LegSecurityDesc LegSecurityDesc_2("STRING_559303010");
    noLegs_0_1.set(LegSecurityDesc_2);
    InstrumentLeg_2.insert(LegSecurityDesc_2.getString());
    FIX::LegSecurityExchange LegSecurityExchange_2("EXCHANGE_1607762509");
    noLegs_0_1.set(LegSecurityExchange_2);
    InstrumentLeg_2.insert(LegSecurityExchange_2.getString());
    FIX::LegSecurityID LegSecurityID_2("STRING_1242253371");
    noLegs_0_1.set(LegSecurityID_2);
    InstrumentLeg_2.insert(LegSecurityID_2.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_2("STRING_1247128101");
    noLegs_0_1.set(LegSecurityIDSource_2);
    InstrumentLeg_2.insert(LegSecurityIDSource_2.getString());
    FIX::LegSecuritySubType LegSecuritySubType_2("STRING_540012600");
    noLegs_0_1.set(LegSecuritySubType_2);
    InstrumentLeg_2.insert(LegSecuritySubType_2.getString());
    FIX::LegSecurityType LegSecurityType_2("STRING_1686601098");
    noLegs_0_1.set(LegSecurityType_2);
    InstrumentLeg_2.insert(LegSecurityType_2.getString());
    FIX::LegSide LegSide_2('6');
    noLegs_0_1.set(LegSide_2);
    InstrumentLeg_2.insert(LegSide_2.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_2("STRING_679937142");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_2);
    InstrumentLeg_2.insert(LegStateOrProvinceOfIssue_2.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_2("EUR");
    noLegs_0_1.set(LegStrikeCurrency_2);
    InstrumentLeg_2.insert(LegStrikeCurrency_2.getString());
    FIX::LegStrikePrice LegStrikePrice_2;
    LegStrikePrice_2.setString("17056147");
    noLegs_0_1.set(LegStrikePrice_2);
    InstrumentLeg_2.insert(LegStrikePrice_2.getString());
    FIX::LegSymbol LegSymbol_2("STRING_330879239");
    noLegs_0_1.set(LegSymbol_2);
    InstrumentLeg_2.insert(LegSymbol_2.getString());
    FIX::LegSymbolSfx LegSymbolSfx_2("STRING_2127129009");
    noLegs_0_1.set(LegSymbolSfx_2);
    InstrumentLeg_2.insert(LegSymbolSfx_2.getString());
    FIX::LegTimeUnit LegTimeUnit_2("STRING_1077431672");
    noLegs_0_1.set(LegTimeUnit_2);
    InstrumentLeg_2.insert(LegTimeUnit_2.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_2("STRING_1502826292");
    noLegs_0_1.set(LegUnitOfMeasure_2);
    InstrumentLeg_2.insert(LegUnitOfMeasure_2.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_2;
    LegUnitOfMeasureQty_2.setString("3415002");
    noLegs_0_1.set(LegUnitOfMeasureQty_2);
    InstrumentLeg_2.insert(LegUnitOfMeasureQty_2.getString());
    all_values.push_back(InstrumentLeg_2);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_3;
      FIX::LegSecurityAltID LegSecurityAltID_3("STRING_1216527387");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_3);
      LegSecAltIDGrp_NoLegSecurityAltID_3.insert(LegSecurityAltID_3.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_3("STRING_300843105");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_3);
      LegSecAltIDGrp_NoLegSecurityAltID_3.insert(LegSecurityAltIDSource_3.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_3);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_4;
      FIX::LegSecurityAltID LegSecurityAltID_4("STRING_1493313776");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_4);
      LegSecAltIDGrp_NoLegSecurityAltID_4.insert(LegSecurityAltID_4.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_4("STRING_184844737");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_4);
      LegSecAltIDGrp_NoLegSecurityAltID_4.insert(LegSecurityAltIDSource_4.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_4);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_4;
  FIX::AttachmentPoint AttachmentPoint_4;
  AttachmentPoint_4.setString("12.010000");
  msg.set(AttachmentPoint_4);
  Instrument_4.insert(AttachmentPoint_4.getString());
  FIX::CFICode CFICode_4("STRING_1516717677");
  msg.set(CFICode_4);
  Instrument_4.insert(CFICode_4.getString());
  FIX::CPProgram CPProgram_4(99);
  msg.set(CPProgram_4);
  Instrument_4.insert(CPProgram_4.getString());
  FIX::CPRegType CPRegType_4("STRING_5365229");
  msg.set(CPRegType_4);
  Instrument_4.insert(CPRegType_4.getString());
  FIX::CapPrice CapPrice_4;
  CapPrice_4.setString("1185775");
  msg.set(CapPrice_4);
  Instrument_4.insert(CapPrice_4.getString());
  FIX::ContractMultiplier ContractMultiplier_4;
  ContractMultiplier_4.setString("7319401");
  msg.set(ContractMultiplier_4);
  Instrument_4.insert(ContractMultiplier_4.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_4(1);
  msg.set(ContractMultiplierUnit_4);
  Instrument_4.insert(ContractMultiplierUnit_4.getString());
  FIX::ContractSettlMonth ContractSettlMonth_4("MONTHYEAR_113164098");
  msg.set(ContractSettlMonth_4);
  Instrument_4.insert(ContractSettlMonth_4.getString());
  FIX::CountryOfIssue CountryOfIssue_4("COUNTRY_1943442639");
  msg.set(CountryOfIssue_4);
  Instrument_4.insert(CountryOfIssue_4.getString());
  FIX::CouponPaymentDate CouponPaymentDate_4("LOCALMKTDATE_264403765");
  msg.set(CouponPaymentDate_4);
  Instrument_4.insert(CouponPaymentDate_4.getString());
  FIX::CouponRate CouponRate_4;
  CouponRate_4.setString("71.080000");
  msg.set(CouponRate_4);
  Instrument_4.insert(CouponRate_4.getString());
  FIX::CreditRating CreditRating_4("STRING_1403721501");
  msg.set(CreditRating_4);
  Instrument_4.insert(CreditRating_4.getString());
  FIX::DatedDate DatedDate_4("LOCALMKTDATE_1506657137");
  msg.set(DatedDate_4);
  Instrument_4.insert(DatedDate_4.getString());
  FIX::DetachmentPoint DetachmentPoint_4;
  DetachmentPoint_4.setString("52.100000");
  msg.set(DetachmentPoint_4);
  Instrument_4.insert(DetachmentPoint_4.getString());
  FIX::EncodedIssuer EncodedIssuer_4("DATA_1943734101");
  msg.set(EncodedIssuer_4);
  Instrument_4.insert(EncodedIssuer_4.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_4(1045774587);
  msg.set(EncodedIssuerLen_4);
  Instrument_4.insert(EncodedIssuerLen_4.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_4("DATA_384668406");
  msg.set(EncodedSecurityDesc_4);
  Instrument_4.insert(EncodedSecurityDesc_4.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_4(476187595);
  msg.set(EncodedSecurityDescLen_4);
  Instrument_4.insert(EncodedSecurityDescLen_4.getString());
  FIX::ExerciseStyle ExerciseStyle_4(1);
  msg.set(ExerciseStyle_4);
  Instrument_4.insert(ExerciseStyle_4.getString());
  FIX::Factor Factor_4;
  Factor_4.setString("5736382");
  msg.set(Factor_4);
  Instrument_4.insert(Factor_4.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_4(false);
  msg.set(FlexProductEligibilityIndicator_4);
  Instrument_4.insert(FlexProductEligibilityIndicator_4.getString());
  FIX::FlexibleIndicator FlexibleIndicator_4(true);
  msg.set(FlexibleIndicator_4);
  Instrument_4.insert(FlexibleIndicator_4.getString());
  FIX::FloorPrice FloorPrice_4;
  FloorPrice_4.setString("5532836");
  msg.set(FloorPrice_4);
  Instrument_4.insert(FloorPrice_4.getString());
  FIX::FlowScheduleType FlowScheduleType_4(1);
  msg.set(FlowScheduleType_4);
  Instrument_4.insert(FlowScheduleType_4.getString());
  FIX::InstrRegistry InstrRegistry_4("STRING_1939380280");
  msg.set(InstrRegistry_4);
  Instrument_4.insert(InstrRegistry_4.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_4('8');
  msg.set(InstrmtAssignmentMethod_4);
  Instrument_4.insert(InstrmtAssignmentMethod_4.getString());
  FIX::InterestAccrualDate InterestAccrualDate_4("LOCALMKTDATE_1355606640");
  msg.set(InterestAccrualDate_4);
  Instrument_4.insert(InterestAccrualDate_4.getString());
  FIX::IssueDate IssueDate_4("LOCALMKTDATE_1008424020");
  msg.set(IssueDate_4);
  Instrument_4.insert(IssueDate_4.getString());
  FIX::Issuer Issuer_4("STRING_1195627015");
  msg.set(Issuer_4);
  Instrument_4.insert(Issuer_4.getString());
  FIX::ListMethod ListMethod_4(0);
  msg.set(ListMethod_4);
  Instrument_4.insert(ListMethod_4.getString());
  FIX::LocaleOfIssue LocaleOfIssue_4("STRING_1193268757");
  msg.set(LocaleOfIssue_4);
  Instrument_4.insert(LocaleOfIssue_4.getString());
  FIX::MaturityDate MaturityDate_4("LOCALMKTDATE_817454568");
  msg.set(MaturityDate_4);
  Instrument_4.insert(MaturityDate_4.getString());
  FIX::MaturityMonthYear MaturityMonthYear_4("MONTHYEAR_70670797");
  msg.set(MaturityMonthYear_4);
  Instrument_4.insert(MaturityMonthYear_4.getString());
  FIX::MaturityTime MaturityTime_4("TZTIMEONLY_1648898526");
  msg.set(MaturityTime_4);
  Instrument_4.insert(MaturityTime_4.getString());
  FIX::MinPriceIncrement MinPriceIncrement_4;
  MinPriceIncrement_4.setString("8228197");
  msg.set(MinPriceIncrement_4);
  Instrument_4.insert(MinPriceIncrement_4.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_4;
  MinPriceIncrementAmount_4.setString("1892483");
  msg.set(MinPriceIncrementAmount_4);
  Instrument_4.insert(MinPriceIncrementAmount_4.getString());
  FIX::NTPositionLimit NTPositionLimit_4(233354979);
  msg.set(NTPositionLimit_4);
  Instrument_4.insert(NTPositionLimit_4.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_4;
  NotionalPercentageOutstanding_4.setString("60.440000");
  msg.set(NotionalPercentageOutstanding_4);
  Instrument_4.insert(NotionalPercentageOutstanding_4.getString());
  FIX::OptAttribute OptAttribute_4('3');
  msg.set(OptAttribute_4);
  Instrument_4.insert(OptAttribute_4.getString());
  FIX::OptPayoutAmount OptPayoutAmount_4;
  OptPayoutAmount_4.setString("293139");
  msg.set(OptPayoutAmount_4);
  Instrument_4.insert(OptPayoutAmount_4.getString());
  FIX::OptPayoutType OptPayoutType_4(3);
  msg.set(OptPayoutType_4);
  Instrument_4.insert(OptPayoutType_4.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_4;
  OriginalNotionalPercentageOutstanding_4.setString("95.270000");
  msg.set(OriginalNotionalPercentageOutstanding_4);
  Instrument_4.insert(OriginalNotionalPercentageOutstanding_4.getString());
  FIX::Pool Pool_4("STRING_1433035471");
  msg.set(Pool_4);
  Instrument_4.insert(Pool_4.getString());
  FIX::PositionLimit PositionLimit_4(875473298);
  msg.set(PositionLimit_4);
  Instrument_4.insert(PositionLimit_4.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_4("STRING_INX");
  msg.set(PriceQuoteMethod_4);
  Instrument_4.insert(PriceQuoteMethod_4.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_4("STRING_1229285925");
  msg.set(PriceUnitOfMeasure_4);
  Instrument_4.insert(PriceUnitOfMeasure_4.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_4;
  PriceUnitOfMeasureQty_4.setString("19212478");
  msg.set(PriceUnitOfMeasureQty_4);
  Instrument_4.insert(PriceUnitOfMeasureQty_4.getString());
  FIX::Product Product_4(6);
  msg.set(Product_4);
  Instrument_4.insert(Product_4.getString());
  FIX::ProductComplex ProductComplex_4("STRING_1705473520");
  msg.set(ProductComplex_4);
  Instrument_4.insert(ProductComplex_4.getString());
  FIX::PutOrCall PutOrCall_4(1);
  msg.set(PutOrCall_4);
  Instrument_4.insert(PutOrCall_4.getString());
  FIX::RedemptionDate RedemptionDate_4("LOCALMKTDATE_1705297759");
  msg.set(RedemptionDate_4);
  Instrument_4.insert(RedemptionDate_4.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_4("STRING_1739792170");
  msg.set(RepoCollateralSecurityType_4);
  Instrument_4.insert(RepoCollateralSecurityType_4.getString());
  FIX::RepurchaseRate RepurchaseRate_4;
  RepurchaseRate_4.setString("29.750000");
  msg.set(RepurchaseRate_4);
  Instrument_4.insert(RepurchaseRate_4.getString());
  FIX::RepurchaseTerm RepurchaseTerm_4(111097736);
  msg.set(RepurchaseTerm_4);
  Instrument_4.insert(RepurchaseTerm_4.getString());
  FIX::RestructuringType RestructuringType_4("STRING_XR");
  msg.set(RestructuringType_4);
  Instrument_4.insert(RestructuringType_4.getString());
  FIX::SecurityDesc SecurityDesc_4("STRING_107889607");
  msg.set(SecurityDesc_4);
  Instrument_4.insert(SecurityDesc_4.getString());
  FIX::SecurityExchange SecurityExchange_4("EXCHANGE_1005881647");
  msg.set(SecurityExchange_4);
  Instrument_4.insert(SecurityExchange_4.getString());
  FIX::SecurityGroup SecurityGroup_4("STRING_2059665483");
  msg.set(SecurityGroup_4);
  Instrument_4.insert(SecurityGroup_4.getString());
  FIX::SecurityID SecurityID_4("STRING_1116313627");
  msg.set(SecurityID_4);
  Instrument_4.insert(SecurityID_4.getString());
  FIX::SecurityIDSource SecurityIDSource_4("STRING_B");
  msg.set(SecurityIDSource_4);
  Instrument_4.insert(SecurityIDSource_4.getString());
  FIX::SecurityStatus SecurityStatus_4("STRING_2");
  msg.set(SecurityStatus_4);
  Instrument_4.insert(SecurityStatus_4.getString());
  FIX::SecuritySubType SecuritySubType_4("STRING_162098736");
  msg.set(SecuritySubType_4);
  Instrument_4.insert(SecuritySubType_4.getString());
  FIX::SecurityType SecurityType_4("STRING_IRS");
  msg.set(SecurityType_4);
  Instrument_4.insert(SecurityType_4.getString());
  FIX::Seniority Seniority_4("STRING_SD");
  msg.set(Seniority_4);
  Instrument_4.insert(Seniority_4.getString());
  FIX::SettlMethod SettlMethod_4('P');
  msg.set(SettlMethod_4);
  Instrument_4.insert(SettlMethod_4.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_4("STRING_1694299381");
  msg.set(SettleOnOpenFlag_4);
  Instrument_4.insert(SettleOnOpenFlag_4.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_4("STRING_873537721");
  msg.set(StateOrProvinceOfIssue_4);
  Instrument_4.insert(StateOrProvinceOfIssue_4.getString());
  FIX::StrikeCurrency StrikeCurrency_4("CHF");
  msg.set(StrikeCurrency_4);
  Instrument_4.insert(StrikeCurrency_4.getString());
  FIX::StrikeMultiplier StrikeMultiplier_4;
  StrikeMultiplier_4.setString("11759501");
  msg.set(StrikeMultiplier_4);
  Instrument_4.insert(StrikeMultiplier_4.getString());
  FIX::StrikePrice StrikePrice_4;
  StrikePrice_4.setString("20736662");
  msg.set(StrikePrice_4);
  Instrument_4.insert(StrikePrice_4.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_4(4);
  msg.set(StrikePriceBoundaryMethod_4);
  Instrument_4.insert(StrikePriceBoundaryMethod_4.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_4;
  StrikePriceBoundaryPrecision_4.setString("60.180000");
  msg.set(StrikePriceBoundaryPrecision_4);
  Instrument_4.insert(StrikePriceBoundaryPrecision_4.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_4(1);
  msg.set(StrikePriceDeterminationMethod_4);
  Instrument_4.insert(StrikePriceDeterminationMethod_4.getString());
  FIX::StrikeValue StrikeValue_4;
  StrikeValue_4.setString("10430012");
  msg.set(StrikeValue_4);
  Instrument_4.insert(StrikeValue_4.getString());
  FIX::Symbol Symbol_4("STRING_750337107");
  msg.set(Symbol_4);
  Instrument_4.insert(Symbol_4.getString());
  FIX::SymbolSfx SymbolSfx_4("STRING_WI");
  msg.set(SymbolSfx_4);
  Instrument_4.insert(SymbolSfx_4.getString());
  FIX::TimeUnit TimeUnit_4("STRING_Min");
  msg.set(TimeUnit_4);
  Instrument_4.insert(TimeUnit_4.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_4(4);
  msg.set(UnderlyingPriceDeterminationMethod_4);
  Instrument_4.insert(UnderlyingPriceDeterminationMethod_4.getString());
  FIX::UnitOfMeasure UnitOfMeasure_4("STRING_MWh");
  msg.set(UnitOfMeasure_4);
  Instrument_4.insert(UnitOfMeasure_4.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_4;
  UnitOfMeasureQty_4.setString("6962044");
  msg.set(UnitOfMeasureQty_4);
  Instrument_4.insert(UnitOfMeasureQty_4.getString());
  FIX::ValuationMethod ValuationMethod_4("STRING_CDSD");
  msg.set(ValuationMethod_4);
  Instrument_4.insert(ValuationMethod_4.getString());
  all_values.push_back(Instrument_4);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_8;
    FIX::ComplexEventCondition ComplexEventCondition_8(2);
    noComplexEvents_0_0.set(ComplexEventCondition_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventCondition_8.getString());
    FIX::ComplexEventPrice ComplexEventPrice_8;
    ComplexEventPrice_8.setString("15509084");
    noComplexEvents_0_0.set(ComplexEventPrice_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPrice_8.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_8(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceBoundaryMethod_8.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_8;
    ComplexEventPriceBoundaryPrecision_8.setString("70.440000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceBoundaryPrecision_8.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_8(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventPriceTimeType_8.getString());
    FIX::ComplexEventType ComplexEventType_8(1);
    noComplexEvents_0_0.set(ComplexEventType_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexEventType_8.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_8;
    ComplexOptPayoutAmount_8.setString("889170");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_8);
    ComplexEvents_NoComplexEvents_8.insert(ComplexOptPayoutAmount_8.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_8);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_13;
      FIX::ComplexEventEndDate ComplexEventEndDate_13(FIX::UTCTIMESTAMP(0, 47, 11, 7, 5, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_13);
      ComplexEventDates_NoComplexEventDates_13.insert(ComplexEventEndDate_13.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_13(FIX::UTCTIMESTAMP(13, 3, 22, 0, 3, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_13);
      ComplexEventDates_NoComplexEventDates_13.insert(ComplexEventStartDate_13.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_13);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_24;
        FIX::ComplexEventEndTime ComplexEventEndTime_24(FIX::UTCTIMEONLY(19, 40, 24));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_24);
        ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventEndTime_24.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_24(FIX::UTCTIMEONLY(14, 31, 56));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_24);
        ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventStartTime_24.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_24);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_14;
      FIX::ComplexEventEndDate ComplexEventEndDate_14(FIX::UTCTIMESTAMP(10, 7, 47, 12, 2, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_14);
      ComplexEventDates_NoComplexEventDates_14.insert(ComplexEventEndDate_14.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_14(FIX::UTCTIMESTAMP(7, 12, 28, 22, 12, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_14);
      ComplexEventDates_NoComplexEventDates_14.insert(ComplexEventStartDate_14.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_14);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_25;
        FIX::ComplexEventEndTime ComplexEventEndTime_25(FIX::UTCTIMEONLY(14, 6, 59));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_25);
        ComplexEventTimes_NoComplexEventTimes_25.insert(ComplexEventEndTime_25.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_25(FIX::UTCTIMEONLY(0, 1, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_25);
        ComplexEventTimes_NoComplexEventTimes_25.insert(ComplexEventStartTime_25.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_25);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_26;
        FIX::ComplexEventEndTime ComplexEventEndTime_26(FIX::UTCTIMEONLY(12, 43, 38));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventEndTime_26.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_26(FIX::UTCTIMEONLY(9, 9, 12));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventStartTime_26.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_26);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_9;
    FIX::EventDate EventDate_9("LOCALMKTDATE_2106359263");
    noEvents_0_0.set(EventDate_9);
    EvntGrp_NoEvents_9.insert(EventDate_9.getString());
    FIX::EventPx EventPx_9;
    EventPx_9.setString("1777805");
    noEvents_0_0.set(EventPx_9);
    EvntGrp_NoEvents_9.insert(EventPx_9.getString());
    FIX::EventText EventText_9("STRING_98425147");
    noEvents_0_0.set(EventText_9);
    EvntGrp_NoEvents_9.insert(EventText_9.getString());
    FIX::EventTime EventTime_9(FIX::UTCTIMESTAMP(1, 19, 59, 4, 8, 2003));
    noEvents_0_0.set(EventTime_9);
    EvntGrp_NoEvents_9.insert(EventTime_9.getString());
    FIX::EventType EventType_9(99);
    noEvents_0_0.set(EventType_9);
    EvntGrp_NoEvents_9.insert(EventType_9.getString());
    all_values.push_back(EvntGrp_NoEvents_9);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_10;
    FIX::EventDate EventDate_10("LOCALMKTDATE_1062750738");
    noEvents_0_1.set(EventDate_10);
    EvntGrp_NoEvents_10.insert(EventDate_10.getString());
    FIX::EventPx EventPx_10;
    EventPx_10.setString("3130883");
    noEvents_0_1.set(EventPx_10);
    EvntGrp_NoEvents_10.insert(EventPx_10.getString());
    FIX::EventText EventText_10("STRING_1670691381");
    noEvents_0_1.set(EventText_10);
    EvntGrp_NoEvents_10.insert(EventText_10.getString());
    FIX::EventTime EventTime_10(FIX::UTCTIMESTAMP(18, 19, 46, 8, 8, 2005));
    noEvents_0_1.set(EventTime_10);
    EvntGrp_NoEvents_10.insert(EventTime_10.getString());
    FIX::EventType EventType_10(16);
    noEvents_0_1.set(EventType_10);
    EvntGrp_NoEvents_10.insert(EventType_10.getString());
    all_values.push_back(EvntGrp_NoEvents_10);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_11;
    FIX::EventDate EventDate_11("LOCALMKTDATE_1968814361");
    noEvents_0_2.set(EventDate_11);
    EvntGrp_NoEvents_11.insert(EventDate_11.getString());
    FIX::EventPx EventPx_11;
    EventPx_11.setString("3500664");
    noEvents_0_2.set(EventPx_11);
    EvntGrp_NoEvents_11.insert(EventPx_11.getString());
    FIX::EventText EventText_11("STRING_282169870");
    noEvents_0_2.set(EventText_11);
    EvntGrp_NoEvents_11.insert(EventText_11.getString());
    FIX::EventTime EventTime_11(FIX::UTCTIMESTAMP(8, 7, 20, 12, 4, 2007));
    noEvents_0_2.set(EventTime_11);
    EvntGrp_NoEvents_11.insert(EventTime_11.getString());
    FIX::EventType EventType_11(17);
    noEvents_0_2.set(EventType_11);
    EvntGrp_NoEvents_11.insert(EventType_11.getString());
    all_values.push_back(EvntGrp_NoEvents_11);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_8;
    FIX::InstrumentPartyID InstrumentPartyID_8("STRING_434208966");
    noInstrumentParties_0_0.set(InstrumentPartyID_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyID_8.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_8('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyIDSource_8.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_8(1697532113);
    noInstrumentParties_0_0.set(InstrumentPartyRole_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyRole_8.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_8);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15;
      FIX::InstrumentPartySubID InstrumentPartySubID_15("STRING_830719225");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_15);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15.insert(InstrumentPartySubID_15.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_15(264665836);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_15);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15.insert(InstrumentPartySubIDType_15.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16;
      FIX::InstrumentPartySubID InstrumentPartySubID_16("STRING_1637944713");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_16);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubID_16.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_16(459642696);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_16);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubIDType_16.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17;
      FIX::InstrumentPartySubID InstrumentPartySubID_17("STRING_1327416575");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_17);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17.insert(InstrumentPartySubID_17.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_17(1951033021);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_17);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17.insert(InstrumentPartySubIDType_17.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_9;
    FIX::InstrumentPartyID InstrumentPartyID_9("STRING_2130334078");
    noInstrumentParties_0_1.set(InstrumentPartyID_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyID_9.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_9('4');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyIDSource_9.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_9(1182504239);
    noInstrumentParties_0_1.set(InstrumentPartyRole_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyRole_9.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_9);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18;
      FIX::InstrumentPartySubID InstrumentPartySubID_18("STRING_1521608949");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_18);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18.insert(InstrumentPartySubID_18.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_18(1180224863);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_18);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18.insert(InstrumentPartySubIDType_18.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_11;
    FIX::SecurityAltID SecurityAltID_11("STRING_1487429688");
    noSecurityAltID_0_0.set(SecurityAltID_11);
    SecAltIDGrp_NoSecurityAltID_11.insert(SecurityAltID_11.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_11("STRING_540095330");
    noSecurityAltID_0_0.set(SecurityAltIDSource_11);
    SecAltIDGrp_NoSecurityAltID_11.insert(SecurityAltIDSource_11.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_11);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_8;
  FIX::SecurityXML SecurityXML_9("XMLDATA_2019198182");
  msg.set(SecurityXML_9);
  FIX::SecurityXMLLen SecurityXMLLen_4(1837496104);
  msg.set(SecurityXMLLen_4);
  FIX::SecurityXMLSchema SecurityXMLSchema_4("STRING_822265200");
  msg.set(SecurityXMLSchema_4);
  SecurityXML_8.insert(SecurityXMLSchema_4.getString());
  all_values.push_back(SecurityXML_8);

  // InstrumentExtension
  multiset<string> InstrumentExtension_0;
  FIX::DeliveryForm DeliveryForm_0(2);
  msg.set(DeliveryForm_0);
  InstrumentExtension_0.insert(DeliveryForm_0.getString());
  FIX::PctAtRisk PctAtRisk_0;
  PctAtRisk_0.setString("36.160000");
  msg.set(PctAtRisk_0);
  InstrumentExtension_0.insert(PctAtRisk_0.getString());
  all_values.push_back(InstrumentExtension_0);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_0;
    FIX::InstrAttribType InstrAttribType_0(26);
    noInstrAttrib_0_0.set(InstrAttribType_0);
    AttrbGrp_NoInstrAttrib_0.insert(InstrAttribType_0.getString());
    FIX::InstrAttribValue InstrAttribValue_0("STRING_839066352");
    noInstrAttrib_0_0.set(InstrAttribValue_0);
    AttrbGrp_NoInstrAttrib_0.insert(InstrAttribValue_0.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_0);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_1;
    FIX::InstrAttribType InstrAttribType_1(27);
    noInstrAttrib_0_1.set(InstrAttribType_1);
    AttrbGrp_NoInstrAttrib_1.insert(InstrAttribType_1.getString());
    FIX::InstrAttribValue InstrAttribValue_1("STRING_1157812932");
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
    FIX::ClOrdID ClOrdID_0("STRING_575249872");
    noOrders_0_0.set(ClOrdID_0);
    OrdAllocGrp_NoOrders_0.insert(ClOrdID_0.getString());
    FIX::ListID ListID_0("STRING_1592021898");
    noOrders_0_0.set(ListID_0);
    OrdAllocGrp_NoOrders_0.insert(ListID_0.getString());
    FIX::OrderAvgPx OrderAvgPx_0;
    OrderAvgPx_0.setString("7593181");
    noOrders_0_0.set(OrderAvgPx_0);
    OrdAllocGrp_NoOrders_0.insert(OrderAvgPx_0.getString());
    FIX::OrderBookingQty OrderBookingQty_0;
    OrderBookingQty_0.setString("1252983");
    noOrders_0_0.set(OrderBookingQty_0);
    OrdAllocGrp_NoOrders_0.insert(OrderBookingQty_0.getString());
    FIX::OrderID OrderID_0("STRING_154922655");
    noOrders_0_0.set(OrderID_0);
    OrdAllocGrp_NoOrders_0.insert(OrderID_0.getString());
    FIX::OrderQty OrderQty_0;
    OrderQty_0.setString("15900374");
    noOrders_0_0.set(OrderQty_0);
    OrdAllocGrp_NoOrders_0.insert(OrderQty_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_0("STRING_389964174");
    noOrders_0_0.set(SecondaryClOrdID_0);
    OrdAllocGrp_NoOrders_0.insert(SecondaryClOrdID_0.getString());
    FIX::SecondaryOrderID SecondaryOrderID_0("STRING_1792867368");
    noOrders_0_0.set(SecondaryOrderID_0);
    OrdAllocGrp_NoOrders_0.insert(SecondaryOrderID_0.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_0);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_0;
      FIX::Nested2PartyID Nested2PartyID_0("STRING_1717380749");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyID_0.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_0('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyIDSource_0.getString());
      FIX::Nested2PartyRole Nested2PartyRole_0(2032530545);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyRole_0.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_0);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_0;
        FIX::Nested2PartySubID Nested2PartySubID_0("STRING_631437332");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_0);
        NstdPtys2SubGrp_NoNested2PartySubIDs_0.insert(Nested2PartySubID_0.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_0(692860927);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_0);
        NstdPtys2SubGrp_NoNested2PartySubIDs_0.insert(Nested2PartySubIDType_0.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_0);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_1;
        FIX::Nested2PartySubID Nested2PartySubID_1("STRING_1493721053");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_1);
        NstdPtys2SubGrp_NoNested2PartySubIDs_1.insert(Nested2PartySubID_1.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_1(1811662195);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_1);
        NstdPtys2SubGrp_NoNested2PartySubIDs_1.insert(Nested2PartySubIDType_1.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_1);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_1;
    FIX::ClOrdID ClOrdID_1("STRING_743244748");
    noOrders_0_1.set(ClOrdID_1);
    OrdAllocGrp_NoOrders_1.insert(ClOrdID_1.getString());
    FIX::ListID ListID_1("STRING_833667093");
    noOrders_0_1.set(ListID_1);
    OrdAllocGrp_NoOrders_1.insert(ListID_1.getString());
    FIX::OrderAvgPx OrderAvgPx_1;
    OrderAvgPx_1.setString("2042738");
    noOrders_0_1.set(OrderAvgPx_1);
    OrdAllocGrp_NoOrders_1.insert(OrderAvgPx_1.getString());
    FIX::OrderBookingQty OrderBookingQty_1;
    OrderBookingQty_1.setString("6149592");
    noOrders_0_1.set(OrderBookingQty_1);
    OrdAllocGrp_NoOrders_1.insert(OrderBookingQty_1.getString());
    FIX::OrderID OrderID_1("STRING_523679549");
    noOrders_0_1.set(OrderID_1);
    OrdAllocGrp_NoOrders_1.insert(OrderID_1.getString());
    FIX::OrderQty OrderQty_1;
    OrderQty_1.setString("10265390");
    noOrders_0_1.set(OrderQty_1);
    OrdAllocGrp_NoOrders_1.insert(OrderQty_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_1("STRING_634949487");
    noOrders_0_1.set(SecondaryClOrdID_1);
    OrdAllocGrp_NoOrders_1.insert(SecondaryClOrdID_1.getString());
    FIX::SecondaryOrderID SecondaryOrderID_1("STRING_337349517");
    noOrders_0_1.set(SecondaryOrderID_1);
    OrdAllocGrp_NoOrders_1.insert(SecondaryOrderID_1.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_1);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_1;
      FIX::Nested2PartyID Nested2PartyID_1("STRING_170671424");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyID_1.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_1('1');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyIDSource_1.getString());
      FIX::Nested2PartyRole Nested2PartyRole_1(173391414);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyRole_1.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_1);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_2;
        FIX::Nested2PartySubID Nested2PartySubID_2("STRING_1071175510");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_2);
        NstdPtys2SubGrp_NoNested2PartySubIDs_2.insert(Nested2PartySubID_2.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_2(748641287);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_2);
        NstdPtys2SubGrp_NoNested2PartySubIDs_2.insert(Nested2PartySubIDType_2.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_2);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_3;
        FIX::Nested2PartySubID Nested2PartySubID_3("STRING_773022606");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_3);
        NstdPtys2SubGrp_NoNested2PartySubIDs_3.insert(Nested2PartySubID_3.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_3(1830493704);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_3);
        NstdPtys2SubGrp_NoNested2PartySubIDs_3.insert(Nested2PartySubIDType_3.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_3);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_4;
        FIX::Nested2PartySubID Nested2PartySubID_4("STRING_873939625");
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubID_4);
        NstdPtys2SubGrp_NoNested2PartySubIDs_4.insert(Nested2PartySubID_4.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_4(927945261);
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubIDType_4);
        NstdPtys2SubGrp_NoNested2PartySubIDs_4.insert(Nested2PartySubIDType_4.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_4);

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
    FIX::ClOrdID ClOrdID_2("STRING_1273047475");
    noOrders_0_2.set(ClOrdID_2);
    OrdAllocGrp_NoOrders_2.insert(ClOrdID_2.getString());
    FIX::ListID ListID_2("STRING_1263903799");
    noOrders_0_2.set(ListID_2);
    OrdAllocGrp_NoOrders_2.insert(ListID_2.getString());
    FIX::OrderAvgPx OrderAvgPx_2;
    OrderAvgPx_2.setString("5733289");
    noOrders_0_2.set(OrderAvgPx_2);
    OrdAllocGrp_NoOrders_2.insert(OrderAvgPx_2.getString());
    FIX::OrderBookingQty OrderBookingQty_2;
    OrderBookingQty_2.setString("11752439");
    noOrders_0_2.set(OrderBookingQty_2);
    OrdAllocGrp_NoOrders_2.insert(OrderBookingQty_2.getString());
    FIX::OrderID OrderID_2("STRING_833800901");
    noOrders_0_2.set(OrderID_2);
    OrdAllocGrp_NoOrders_2.insert(OrderID_2.getString());
    FIX::OrderQty OrderQty_2;
    OrderQty_2.setString("222620");
    noOrders_0_2.set(OrderQty_2);
    OrdAllocGrp_NoOrders_2.insert(OrderQty_2.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_2("STRING_1060290840");
    noOrders_0_2.set(SecondaryClOrdID_2);
    OrdAllocGrp_NoOrders_2.insert(SecondaryClOrdID_2.getString());
    FIX::SecondaryOrderID SecondaryOrderID_2("STRING_805913005");
    noOrders_0_2.set(SecondaryOrderID_2);
    OrdAllocGrp_NoOrders_2.insert(SecondaryOrderID_2.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_2);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_2;
      FIX::Nested2PartyID Nested2PartyID_2("STRING_1753151767");
      noNested2PartyIDs_2_1_0.set(Nested2PartyID_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyID_2.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_2('1');
      noNested2PartyIDs_2_1_0.set(Nested2PartyIDSource_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyIDSource_2.getString());
      FIX::Nested2PartyRole Nested2PartyRole_2(317877955);
      noNested2PartyIDs_2_1_0.set(Nested2PartyRole_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyRole_2.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_2);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_5;
        FIX::Nested2PartySubID Nested2PartySubID_5("STRING_985817503");
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubID_5);
        NstdPtys2SubGrp_NoNested2PartySubIDs_5.insert(Nested2PartySubID_5.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_5(522151833);
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubIDType_5);
        NstdPtys2SubGrp_NoNested2PartySubIDs_5.insert(Nested2PartySubIDType_5.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_5);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_0);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_3;
      FIX::Nested2PartyID Nested2PartyID_3("STRING_963872149");
      noNested2PartyIDs_2_1_1.set(Nested2PartyID_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyID_3.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_3('1');
      noNested2PartyIDs_2_1_1.set(Nested2PartyIDSource_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyIDSource_3.getString());
      FIX::Nested2PartyRole Nested2PartyRole_3(1548690910);
      noNested2PartyIDs_2_1_1.set(Nested2PartyRole_3);
      NestedParties2_NoNested2PartyIDs_3.insert(Nested2PartyRole_3.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_3);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_6;
        FIX::Nested2PartySubID Nested2PartySubID_6("STRING_1846846570");
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubID_6);
        NstdPtys2SubGrp_NoNested2PartySubIDs_6.insert(Nested2PartySubID_6.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_6(415867539);
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubIDType_6);
        NstdPtys2SubGrp_NoNested2PartySubIDs_6.insert(Nested2PartySubIDType_6.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_6);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_7;
        FIX::Nested2PartySubID Nested2PartySubID_7("STRING_1769493060");
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubID_7);
        NstdPtys2SubGrp_NoNested2PartySubIDs_7.insert(Nested2PartySubID_7.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_7(875778792);
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubIDType_7);
        NstdPtys2SubGrp_NoNested2PartySubIDs_7.insert(Nested2PartySubIDType_7.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_7);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_1);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_4;
      FIX::Nested2PartyID Nested2PartyID_4("STRING_589258953");
      noNested2PartyIDs_2_1_2.set(Nested2PartyID_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyID_4.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_4('9');
      noNested2PartyIDs_2_1_2.set(Nested2PartyIDSource_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyIDSource_4.getString());
      FIX::Nested2PartyRole Nested2PartyRole_4(1946954303);
      noNested2PartyIDs_2_1_2.set(Nested2PartyRole_4);
      NestedParties2_NoNested2PartyIDs_4.insert(Nested2PartyRole_4.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_4);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_8;
        FIX::Nested2PartySubID Nested2PartySubID_8("STRING_1723516374");
        noNested2PartySubIDs_2_2_2_0.set(Nested2PartySubID_8);
        NstdPtys2SubGrp_NoNested2PartySubIDs_8.insert(Nested2PartySubID_8.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_8(1629964359);
        noNested2PartySubIDs_2_2_2_0.set(Nested2PartySubIDType_8);
        NstdPtys2SubGrp_NoNested2PartySubIDs_8.insert(Nested2PartySubIDType_8.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_8);

        noNested2PartyIDs_2_1_2.addGroup(noNested2PartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_9;
        FIX::Nested2PartySubID Nested2PartySubID_9("STRING_64356217");
        noNested2PartySubIDs_2_2_2_1.set(Nested2PartySubID_9);
        NstdPtys2SubGrp_NoNested2PartySubIDs_9.insert(Nested2PartySubID_9.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_9(503977987);
        noNested2PartySubIDs_2_2_2_1.set(Nested2PartySubIDType_9);
        NstdPtys2SubGrp_NoNested2PartySubIDs_9.insert(Nested2PartySubIDType_9.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_9);

        noNested2PartyIDs_2_1_2.addGroup(noNested2PartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_10;
        FIX::Nested2PartySubID Nested2PartySubID_10("STRING_755528186");
        noNested2PartySubIDs_2_2_2_2.set(Nested2PartySubID_10);
        NstdPtys2SubGrp_NoNested2PartySubIDs_10.insert(Nested2PartySubID_10.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_10(1328260017);
        noNested2PartySubIDs_2_2_2_2.set(Nested2PartySubIDType_10);
        NstdPtys2SubGrp_NoNested2PartySubIDs_10.insert(Nested2PartySubIDType_10.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_10);

        noNested2PartyIDs_2_1_2.addGroup(noNested2PartySubIDs_2_2_2_2);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_2);
    }
    msg.addGroup(noOrders_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_2;
    FIX::PartyID PartyID_2("STRING_1930772128");
    noPartyIDs_0_0.set(PartyID_2);
    Parties_NoPartyIDs_2.insert(PartyID_2.getString());
    FIX::PartyIDSource PartyIDSource_2('2');
    noPartyIDs_0_0.set(PartyIDSource_2);
    Parties_NoPartyIDs_2.insert(PartyIDSource_2.getString());
    FIX::PartyRole PartyRole_2(59);
    noPartyIDs_0_0.set(PartyRole_2);
    Parties_NoPartyIDs_2.insert(PartyRole_2.getString());
    all_values.push_back(Parties_NoPartyIDs_2);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_5;
      FIX::PartySubID PartySubID_5("STRING_820490275");
      noPartySubIDs_0_1_0.set(PartySubID_5);
      PtysSubGrp_NoPartySubIDs_5.insert(PartySubID_5.getString());
      FIX::PartySubIDType PartySubIDType_5(3);
      noPartySubIDs_0_1_0.set(PartySubIDType_5);
      PtysSubGrp_NoPartySubIDs_5.insert(PartySubIDType_5.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_5);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_6;
      FIX::PartySubID PartySubID_6("STRING_449247439");
      noPartySubIDs_0_1_1.set(PartySubID_6);
      PtysSubGrp_NoPartySubIDs_6.insert(PartySubID_6.getString());
      FIX::PartySubIDType PartySubIDType_6(6);
      noPartySubIDs_0_1_1.set(PartySubIDType_6);
      PtysSubGrp_NoPartySubIDs_6.insert(PartySubIDType_6.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_6);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_7;
      FIX::PartySubID PartySubID_7("STRING_2071146408");
      noPartySubIDs_0_1_2.set(PartySubID_7);
      PtysSubGrp_NoPartySubIDs_7.insert(PartySubID_7.getString());
      FIX::PartySubIDType PartySubIDType_7(32);
      noPartySubIDs_0_1_2.set(PartySubIDType_7);
      PtysSubGrp_NoPartySubIDs_7.insert(PartySubIDType_7.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_7);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_0;
    FIX::PosAmt PosAmt_0;
    PosAmt_0.setString("4458145");
    noPosAmt_0_0.set(PosAmt_0);
    PositionAmountData_NoPosAmt_0.insert(PosAmt_0.getString());
    FIX::PosAmtType PosAmtType_0("STRING_COLAT");
    noPosAmt_0_0.set(PosAmtType_0);
    PositionAmountData_NoPosAmt_0.insert(PosAmtType_0.getString());
    FIX::PositionCurrency PositionCurrency_0("STRING_1320471593");
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
    FIX::RateSource RateSource_1(99);
    noRateSources_0_0.set(RateSource_1);
    RateSource_NoRateSources_0.insert(RateSource_1.getString());
    FIX::RateSourceType RateSourceType_0(0);
    noRateSources_0_0.set(RateSourceType_0);
    RateSource_NoRateSources_0.insert(RateSourceType_0.getString());
    FIX::ReferencePage ReferencePage_0("STRING_262889395");
    noRateSources_0_0.set(ReferencePage_0);
    RateSource_NoRateSources_0.insert(ReferencePage_0.getString());
    all_values.push_back(RateSource_NoRateSources_0);

    msg.addGroup(noRateSources_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_0;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_0("GBP");
  msg.set(BenchmarkCurveCurrency_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurveCurrency_0.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_0("STRING_LIBID");
  msg.set(BenchmarkCurveName_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurveName_0.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_0("STRING_1785873623");
  msg.set(BenchmarkCurvePoint_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurvePoint_0.getString());
  FIX::BenchmarkPrice BenchmarkPrice_0;
  BenchmarkPrice_0.setString("16950839");
  msg.set(BenchmarkPrice_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkPrice_0.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_0(42564941);
  msg.set(BenchmarkPriceType_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkPriceType_0.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_0("STRING_1361906349");
  msg.set(BenchmarkSecurityID_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkSecurityID_0.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_0("STRING_1177564674");
  msg.set(BenchmarkSecurityIDSource_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkSecurityIDSource_0.getString());
  FIX::Spread Spread_0;
  Spread_0.setString("1069211");
  msg.set(Spread_0);
  SpreadOrBenchmarkCurveData_0.insert(Spread_0.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_0);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_0;
    FIX::StipulationType StipulationType_0("STRING_INTERNALPX");
    noStipulations_0_0.set(StipulationType_0);
    Stipulations_NoStipulations_0.insert(StipulationType_0.getString());
    FIX::StipulationValue StipulationValue_0("STRING_1435181175");
    noStipulations_0_0.set(StipulationValue_0);
    Stipulations_NoStipulations_0.insert(StipulationValue_0.getString());
    all_values.push_back(Stipulations_NoStipulations_0);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_1;
    FIX::StipulationType StipulationType_1("STRING_AVAILQTY");
    noStipulations_0_1.set(StipulationType_1);
    Stipulations_NoStipulations_1.insert(StipulationType_1.getString());
    FIX::StipulationValue StipulationValue_1("STRING_1716381341");
    noStipulations_0_1.set(StipulationValue_1);
    Stipulations_NoStipulations_1.insert(StipulationValue_1.getString());
    all_values.push_back(Stipulations_NoStipulations_1);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_2;
    FIX::StipulationType StipulationType_2("STRING_WAL");
    noStipulations_0_2.set(StipulationType_2);
    Stipulations_NoStipulations_2.insert(StipulationType_2.getString());
    FIX::StipulationValue StipulationValue_2("STRING_1895276703");
    noStipulations_0_2.set(StipulationValue_2);
    Stipulations_NoStipulations_2.insert(StipulationValue_2.getString());
    all_values.push_back(Stipulations_NoStipulations_2);

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_1;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_1("DATA_122765072");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingIssuer_1.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_1(1501061508);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingIssuerLen_1.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_1("DATA_861724453");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingSecurityDesc_1.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_1(1095405757);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingSecurityDescLen_1.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_1;
    UnderlyingAdjustedQuantity_1.setString("14247242");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_1);
    UnderlyingInstrument_1.insert(UnderlyingAdjustedQuantity_1.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_1;
    UnderlyingAllocationPercent_1.setString("47.590000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_1);
    UnderlyingInstrument_1.insert(UnderlyingAllocationPercent_1.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_1;
    UnderlyingAttachmentPoint_1.setString("2.980000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_1);
    UnderlyingInstrument_1.insert(UnderlyingAttachmentPoint_1.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_1("STRING_1870538862");
    noUnderlyings_0_0.set(UnderlyingCFICode_1);
    UnderlyingInstrument_1.insert(UnderlyingCFICode_1.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_1("STRING_1274433567");
    noUnderlyings_0_0.set(UnderlyingCPProgram_1);
    UnderlyingInstrument_1.insert(UnderlyingCPProgram_1.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_1("STRING_79368243");
    noUnderlyings_0_0.set(UnderlyingCPRegType_1);
    UnderlyingInstrument_1.insert(UnderlyingCPRegType_1.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_1;
    UnderlyingCapValue_1.setString("17175607");
    noUnderlyings_0_0.set(UnderlyingCapValue_1);
    UnderlyingInstrument_1.insert(UnderlyingCapValue_1.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_1;
    UnderlyingCashAmount_1.setString("3403203");
    noUnderlyings_0_0.set(UnderlyingCashAmount_1);
    UnderlyingInstrument_1.insert(UnderlyingCashAmount_1.getString());
    FIX::UnderlyingCashType UnderlyingCashType_1("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_1);
    UnderlyingInstrument_1.insert(UnderlyingCashType_1.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_1;
    UnderlyingContractMultiplier_1.setString("19804501");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_1);
    UnderlyingInstrument_1.insert(UnderlyingContractMultiplier_1.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_1(1175700218);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_1);
    UnderlyingInstrument_1.insert(UnderlyingContractMultiplierUnit_1.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_1("COUNTRY_847332420");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingCountryOfIssue_1.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_1("LOCALMKTDATE_685114814");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_1);
    UnderlyingInstrument_1.insert(UnderlyingCouponPaymentDate_1.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_1;
    UnderlyingCouponRate_1.setString("1.930000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_1);
    UnderlyingInstrument_1.insert(UnderlyingCouponRate_1.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_1("STRING_394932735");
    noUnderlyings_0_0.set(UnderlyingCreditRating_1);
    UnderlyingInstrument_1.insert(UnderlyingCreditRating_1.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_1("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_1);
    UnderlyingInstrument_1.insert(UnderlyingCurrency_1.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_1;
    UnderlyingCurrentValue_1.setString("15724974");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_1);
    UnderlyingInstrument_1.insert(UnderlyingCurrentValue_1.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_1;
    UnderlyingDetachmentPoint_1.setString("9.130000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_1);
    UnderlyingInstrument_1.insert(UnderlyingDetachmentPoint_1.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_1;
    UnderlyingDirtyPrice_1.setString("18943972");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_1);
    UnderlyingInstrument_1.insert(UnderlyingDirtyPrice_1.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_1;
    UnderlyingEndPrice_1.setString("13581066");
    noUnderlyings_0_0.set(UnderlyingEndPrice_1);
    UnderlyingInstrument_1.insert(UnderlyingEndPrice_1.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_1;
    UnderlyingEndValue_1.setString("1222984");
    noUnderlyings_0_0.set(UnderlyingEndValue_1);
    UnderlyingInstrument_1.insert(UnderlyingEndValue_1.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_1(542621242);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_1);
    UnderlyingInstrument_1.insert(UnderlyingExerciseStyle_1.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_1;
    UnderlyingFXRate_1.setString("9270043");
    noUnderlyings_0_0.set(UnderlyingFXRate_1);
    UnderlyingInstrument_1.insert(UnderlyingFXRate_1.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_1('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_1);
    UnderlyingInstrument_1.insert(UnderlyingFXRateCalc_1.getString());
    FIX::UnderlyingFactor UnderlyingFactor_1;
    UnderlyingFactor_1.setString("2904142");
    noUnderlyings_0_0.set(UnderlyingFactor_1);
    UnderlyingInstrument_1.insert(UnderlyingFactor_1.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_1(1339481329);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_1);
    UnderlyingInstrument_1.insert(UnderlyingFlowScheduleType_1.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_1("STRING_1694821959");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_1);
    UnderlyingInstrument_1.insert(UnderlyingInstrRegistry_1.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_1("LOCALMKTDATE_1791475806");
    noUnderlyings_0_0.set(UnderlyingIssueDate_1);
    UnderlyingInstrument_1.insert(UnderlyingIssueDate_1.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_1("STRING_53722134");
    noUnderlyings_0_0.set(UnderlyingIssuer_1);
    UnderlyingInstrument_1.insert(UnderlyingIssuer_1.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_1("STRING_642744068");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingLocaleOfIssue_1.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_1("LOCALMKTDATE_1068716427");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityDate_1.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_1("MONTHYEAR_1713606893");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityMonthYear_1.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_1("TZTIMEONLY_1549124366");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityTime_1.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_1;
    UnderlyingNotionalPercentageOutstanding_1.setString("16.420000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_1);
    UnderlyingInstrument_1.insert(UnderlyingNotionalPercentageOutstanding_1.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_1('8');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_1);
    UnderlyingInstrument_1.insert(UnderlyingOptAttribute_1.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_1;
    UnderlyingOriginalNotionalPercentageOutstanding_1.setString("26.100000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_1);
    UnderlyingInstrument_1.insert(UnderlyingOriginalNotionalPercentageOutstanding_1.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_1("STRING_361848712");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_1);
    UnderlyingInstrument_1.insert(UnderlyingPriceUnitOfMeasure_1.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_1;
    UnderlyingPriceUnitOfMeasureQty_1.setString("11808771");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_1);
    UnderlyingInstrument_1.insert(UnderlyingPriceUnitOfMeasureQty_1.getString());
    FIX::UnderlyingProduct UnderlyingProduct_1(580211721);
    noUnderlyings_0_0.set(UnderlyingProduct_1);
    UnderlyingInstrument_1.insert(UnderlyingProduct_1.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_1(194815178);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_1);
    UnderlyingInstrument_1.insert(UnderlyingPutOrCall_1.getString());
    FIX::UnderlyingPx UnderlyingPx_1;
    UnderlyingPx_1.setString("2090937");
    noUnderlyings_0_0.set(UnderlyingPx_1);
    UnderlyingInstrument_1.insert(UnderlyingPx_1.getString());
    FIX::UnderlyingQty UnderlyingQty_1;
    UnderlyingQty_1.setString("14275441");
    noUnderlyings_0_0.set(UnderlyingQty_1);
    UnderlyingInstrument_1.insert(UnderlyingQty_1.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_1("LOCALMKTDATE_879929992");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_1);
    UnderlyingInstrument_1.insert(UnderlyingRedemptionDate_1.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_1("STRING_1023183938");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_1);
    UnderlyingInstrument_1.insert(UnderlyingRepoCollateralSecurityType_1.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_1;
    UnderlyingRepurchaseRate_1.setString("68.770000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_1);
    UnderlyingInstrument_1.insert(UnderlyingRepurchaseRate_1.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_1(1607609747);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_1);
    UnderlyingInstrument_1.insert(UnderlyingRepurchaseTerm_1.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_1("STRING_1051696833");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_1);
    UnderlyingInstrument_1.insert(UnderlyingRestructuringType_1.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_1("STRING_1247490639");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityDesc_1.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_1("EXCHANGE_294727012");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityExchange_1.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_1("STRING_798610417");
    noUnderlyings_0_0.set(UnderlyingSecurityID_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityID_1.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_1("STRING_458113613");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityIDSource_1.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_1("STRING_417025453");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_1);
    UnderlyingInstrument_1.insert(UnderlyingSecuritySubType_1.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_1("STRING_1341231660");
    noUnderlyings_0_0.set(UnderlyingSecurityType_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityType_1.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_1("STRING_1385117929");
    noUnderlyings_0_0.set(UnderlyingSeniority_1);
    UnderlyingInstrument_1.insert(UnderlyingSeniority_1.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_1("STRING_1989082340");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_1);
    UnderlyingInstrument_1.insert(UnderlyingSettlMethod_1.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_1(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_1);
    UnderlyingInstrument_1.insert(UnderlyingSettlementType_1.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_1;
    UnderlyingStartValue_1.setString("5771156");
    noUnderlyings_0_0.set(UnderlyingStartValue_1);
    UnderlyingInstrument_1.insert(UnderlyingStartValue_1.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_1("STRING_1536420651");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingStateOrProvinceOfIssue_1.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_1("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_1);
    UnderlyingInstrument_1.insert(UnderlyingStrikeCurrency_1.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_1;
    UnderlyingStrikePrice_1.setString("316810");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_1);
    UnderlyingInstrument_1.insert(UnderlyingStrikePrice_1.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_1("STRING_196870896");
    noUnderlyings_0_0.set(UnderlyingSymbol_1);
    UnderlyingInstrument_1.insert(UnderlyingSymbol_1.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_1("STRING_196960989");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_1);
    UnderlyingInstrument_1.insert(UnderlyingSymbolSfx_1.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_1("STRING_1580805438");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_1);
    UnderlyingInstrument_1.insert(UnderlyingTimeUnit_1.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_1("STRING_988642538");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_1);
    UnderlyingInstrument_1.insert(UnderlyingUnitOfMeasure_1.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_1;
    UnderlyingUnitOfMeasureQty_1.setString("10375178");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_1);
    UnderlyingInstrument_1.insert(UnderlyingUnitOfMeasureQty_1.getString());
    all_values.push_back(UnderlyingInstrument_1);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_3;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_3("STRING_1350491250");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_3);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_3.insert(UnderlyingSecurityAltID_3.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_3("STRING_70911329");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_3);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_3.insert(UnderlyingSecurityAltIDSource_3.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_4;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_4("STRING_1642026121");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_4);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_4.insert(UnderlyingSecurityAltID_4.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_4("STRING_1545306428");
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
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_1;
      FIX::UnderlyingStipType UnderlyingStipType_1("STRING_922086615");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_1);
      UnderlyingStipulations_NoUnderlyingStips_1.insert(UnderlyingStipType_1.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_1("STRING_277752772");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_1);
      UnderlyingStipulations_NoUnderlyingStips_1.insert(UnderlyingStipValue_1.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_1);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_2;
      FIX::UnderlyingStipType UnderlyingStipType_2("STRING_1303189012");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_2);
      UnderlyingStipulations_NoUnderlyingStips_2.insert(UnderlyingStipType_2.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_2("STRING_597079844");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_2);
      UnderlyingStipulations_NoUnderlyingStips_2.insert(UnderlyingStipValue_2.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_2);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_3;
      FIX::UnderlyingStipType UnderlyingStipType_3("STRING_1885362519");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_3);
      UnderlyingStipulations_NoUnderlyingStips_3.insert(UnderlyingStipType_3.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_3("STRING_207402198");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_3);
      UnderlyingStipulations_NoUnderlyingStips_3.insert(UnderlyingStipValue_3.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_3);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_2;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_2("STRING_32605884");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyID_2.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_2('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyIDSource_2.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_2(155200448);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyRole_2.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_2);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_3("STRING_199760627");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_3);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3.insert(UnderlyingInstrumentPartySubID_3.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_3(1540318377);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_3);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3.insert(UnderlyingInstrumentPartySubIDType_3.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_4("STRING_291230029");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_4);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4.insert(UnderlyingInstrumentPartySubID_4.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_4(1831406585);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_4);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4.insert(UnderlyingInstrumentPartySubIDType_4.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_3;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_3("STRING_2117433987");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyID_3.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_3('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyIDSource_3.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_3(959561054);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyRole_3.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_3);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_5("STRING_1859331752");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_5);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5.insert(UnderlyingInstrumentPartySubID_5.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_5(1156431950);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_5);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5.insert(UnderlyingInstrumentPartySubIDType_5.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_6("STRING_797749073");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_6);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6.insert(UnderlyingInstrumentPartySubID_6.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_6(1292653542);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_6);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6.insert(UnderlyingInstrumentPartySubIDType_6.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_4;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_4("STRING_2145074488");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyID_4.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_4('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyIDSource_4.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_4(206984294);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyRole_4.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_4);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_7("STRING_1906178204");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_7);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7.insert(UnderlyingInstrumentPartySubID_7.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_7(1849010415);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_7);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7.insert(UnderlyingInstrumentPartySubIDType_7.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_8("STRING_745904871");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_8);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8.insert(UnderlyingInstrumentPartySubID_8.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_8(38699630);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_8);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8.insert(UnderlyingInstrumentPartySubIDType_8.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_9("STRING_623613382");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_9);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9.insert(UnderlyingInstrumentPartySubID_9.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_9(1023657643);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_9);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9.insert(UnderlyingInstrumentPartySubIDType_9.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_2;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_2("DATA_1341888642");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingIssuer_2.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_2(1220693226);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingIssuerLen_2.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_2("DATA_761536515");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingSecurityDesc_2.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_2(1549290840);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingSecurityDescLen_2.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_2;
    UnderlyingAdjustedQuantity_2.setString("9177800");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_2);
    UnderlyingInstrument_2.insert(UnderlyingAdjustedQuantity_2.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_2;
    UnderlyingAllocationPercent_2.setString("23.990000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_2);
    UnderlyingInstrument_2.insert(UnderlyingAllocationPercent_2.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_2;
    UnderlyingAttachmentPoint_2.setString("98.080000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_2);
    UnderlyingInstrument_2.insert(UnderlyingAttachmentPoint_2.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_2("STRING_1072980510");
    noUnderlyings_0_1.set(UnderlyingCFICode_2);
    UnderlyingInstrument_2.insert(UnderlyingCFICode_2.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_2("STRING_1243773736");
    noUnderlyings_0_1.set(UnderlyingCPProgram_2);
    UnderlyingInstrument_2.insert(UnderlyingCPProgram_2.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_2("STRING_607580435");
    noUnderlyings_0_1.set(UnderlyingCPRegType_2);
    UnderlyingInstrument_2.insert(UnderlyingCPRegType_2.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_2;
    UnderlyingCapValue_2.setString("4658152");
    noUnderlyings_0_1.set(UnderlyingCapValue_2);
    UnderlyingInstrument_2.insert(UnderlyingCapValue_2.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_2;
    UnderlyingCashAmount_2.setString("15350037");
    noUnderlyings_0_1.set(UnderlyingCashAmount_2);
    UnderlyingInstrument_2.insert(UnderlyingCashAmount_2.getString());
    FIX::UnderlyingCashType UnderlyingCashType_2("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_2);
    UnderlyingInstrument_2.insert(UnderlyingCashType_2.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_2;
    UnderlyingContractMultiplier_2.setString("4357655");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_2);
    UnderlyingInstrument_2.insert(UnderlyingContractMultiplier_2.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_2(1215170798);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_2);
    UnderlyingInstrument_2.insert(UnderlyingContractMultiplierUnit_2.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_2("COUNTRY_1251064427");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingCountryOfIssue_2.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_2("LOCALMKTDATE_1036553662");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_2);
    UnderlyingInstrument_2.insert(UnderlyingCouponPaymentDate_2.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_2;
    UnderlyingCouponRate_2.setString("89.020000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_2);
    UnderlyingInstrument_2.insert(UnderlyingCouponRate_2.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_2("STRING_260012729");
    noUnderlyings_0_1.set(UnderlyingCreditRating_2);
    UnderlyingInstrument_2.insert(UnderlyingCreditRating_2.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_2("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_2);
    UnderlyingInstrument_2.insert(UnderlyingCurrency_2.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_2;
    UnderlyingCurrentValue_2.setString("2576035");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_2);
    UnderlyingInstrument_2.insert(UnderlyingCurrentValue_2.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_2;
    UnderlyingDetachmentPoint_2.setString("59.620000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_2);
    UnderlyingInstrument_2.insert(UnderlyingDetachmentPoint_2.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_2;
    UnderlyingDirtyPrice_2.setString("2791730");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_2);
    UnderlyingInstrument_2.insert(UnderlyingDirtyPrice_2.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_2;
    UnderlyingEndPrice_2.setString("16056856");
    noUnderlyings_0_1.set(UnderlyingEndPrice_2);
    UnderlyingInstrument_2.insert(UnderlyingEndPrice_2.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_2;
    UnderlyingEndValue_2.setString("12807805");
    noUnderlyings_0_1.set(UnderlyingEndValue_2);
    UnderlyingInstrument_2.insert(UnderlyingEndValue_2.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_2(2128183506);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_2);
    UnderlyingInstrument_2.insert(UnderlyingExerciseStyle_2.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_2;
    UnderlyingFXRate_2.setString("2041068");
    noUnderlyings_0_1.set(UnderlyingFXRate_2);
    UnderlyingInstrument_2.insert(UnderlyingFXRate_2.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_2('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_2);
    UnderlyingInstrument_2.insert(UnderlyingFXRateCalc_2.getString());
    FIX::UnderlyingFactor UnderlyingFactor_2;
    UnderlyingFactor_2.setString("6043132");
    noUnderlyings_0_1.set(UnderlyingFactor_2);
    UnderlyingInstrument_2.insert(UnderlyingFactor_2.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_2(1227764526);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_2);
    UnderlyingInstrument_2.insert(UnderlyingFlowScheduleType_2.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_2("STRING_513885143");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_2);
    UnderlyingInstrument_2.insert(UnderlyingInstrRegistry_2.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_2("LOCALMKTDATE_1825006467");
    noUnderlyings_0_1.set(UnderlyingIssueDate_2);
    UnderlyingInstrument_2.insert(UnderlyingIssueDate_2.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_2("STRING_1989301041");
    noUnderlyings_0_1.set(UnderlyingIssuer_2);
    UnderlyingInstrument_2.insert(UnderlyingIssuer_2.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_2("STRING_2063175983");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingLocaleOfIssue_2.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_2("LOCALMKTDATE_595302880");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityDate_2.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_2("MONTHYEAR_635959792");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityMonthYear_2.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_2("TZTIMEONLY_323512143");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityTime_2.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_2;
    UnderlyingNotionalPercentageOutstanding_2.setString("33.900000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_2);
    UnderlyingInstrument_2.insert(UnderlyingNotionalPercentageOutstanding_2.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_2('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_2);
    UnderlyingInstrument_2.insert(UnderlyingOptAttribute_2.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_2;
    UnderlyingOriginalNotionalPercentageOutstanding_2.setString("25.790000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_2);
    UnderlyingInstrument_2.insert(UnderlyingOriginalNotionalPercentageOutstanding_2.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_2("STRING_2134098630");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_2);
    UnderlyingInstrument_2.insert(UnderlyingPriceUnitOfMeasure_2.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_2;
    UnderlyingPriceUnitOfMeasureQty_2.setString("12672536");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_2);
    UnderlyingInstrument_2.insert(UnderlyingPriceUnitOfMeasureQty_2.getString());
    FIX::UnderlyingProduct UnderlyingProduct_2(1222595952);
    noUnderlyings_0_1.set(UnderlyingProduct_2);
    UnderlyingInstrument_2.insert(UnderlyingProduct_2.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_2(422380561);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_2);
    UnderlyingInstrument_2.insert(UnderlyingPutOrCall_2.getString());
    FIX::UnderlyingPx UnderlyingPx_2;
    UnderlyingPx_2.setString("3349407");
    noUnderlyings_0_1.set(UnderlyingPx_2);
    UnderlyingInstrument_2.insert(UnderlyingPx_2.getString());
    FIX::UnderlyingQty UnderlyingQty_2;
    UnderlyingQty_2.setString("3261767");
    noUnderlyings_0_1.set(UnderlyingQty_2);
    UnderlyingInstrument_2.insert(UnderlyingQty_2.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_2("LOCALMKTDATE_1458934223");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_2);
    UnderlyingInstrument_2.insert(UnderlyingRedemptionDate_2.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_2("STRING_1261959699");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_2);
    UnderlyingInstrument_2.insert(UnderlyingRepoCollateralSecurityType_2.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_2;
    UnderlyingRepurchaseRate_2.setString("94.600000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_2);
    UnderlyingInstrument_2.insert(UnderlyingRepurchaseRate_2.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_2(1145753311);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_2);
    UnderlyingInstrument_2.insert(UnderlyingRepurchaseTerm_2.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_2("STRING_1334148496");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_2);
    UnderlyingInstrument_2.insert(UnderlyingRestructuringType_2.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_2("STRING_843793029");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityDesc_2.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_2("EXCHANGE_520355625");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityExchange_2.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_2("STRING_1613321586");
    noUnderlyings_0_1.set(UnderlyingSecurityID_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityID_2.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_2("STRING_301995040");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityIDSource_2.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_2("STRING_1801136144");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_2);
    UnderlyingInstrument_2.insert(UnderlyingSecuritySubType_2.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_2("STRING_1594021444");
    noUnderlyings_0_1.set(UnderlyingSecurityType_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityType_2.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_2("STRING_506101923");
    noUnderlyings_0_1.set(UnderlyingSeniority_2);
    UnderlyingInstrument_2.insert(UnderlyingSeniority_2.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_2("STRING_973132644");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_2);
    UnderlyingInstrument_2.insert(UnderlyingSettlMethod_2.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_2(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_2);
    UnderlyingInstrument_2.insert(UnderlyingSettlementType_2.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_2;
    UnderlyingStartValue_2.setString("17338664");
    noUnderlyings_0_1.set(UnderlyingStartValue_2);
    UnderlyingInstrument_2.insert(UnderlyingStartValue_2.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_2("STRING_1487017787");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingStateOrProvinceOfIssue_2.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_2("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_2);
    UnderlyingInstrument_2.insert(UnderlyingStrikeCurrency_2.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_2;
    UnderlyingStrikePrice_2.setString("14027101");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_2);
    UnderlyingInstrument_2.insert(UnderlyingStrikePrice_2.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_2("STRING_323676736");
    noUnderlyings_0_1.set(UnderlyingSymbol_2);
    UnderlyingInstrument_2.insert(UnderlyingSymbol_2.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_2("STRING_64159986");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_2);
    UnderlyingInstrument_2.insert(UnderlyingSymbolSfx_2.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_2("STRING_1726222266");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_2);
    UnderlyingInstrument_2.insert(UnderlyingTimeUnit_2.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_2("STRING_1991960127");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_2);
    UnderlyingInstrument_2.insert(UnderlyingUnitOfMeasure_2.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_2;
    UnderlyingUnitOfMeasureQty_2.setString("19438935");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_2);
    UnderlyingInstrument_2.insert(UnderlyingUnitOfMeasureQty_2.getString());
    all_values.push_back(UnderlyingInstrument_2);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_5;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_5("STRING_1978575109");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_5);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_5.insert(UnderlyingSecurityAltID_5.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_5("STRING_1063663513");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_5);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_5.insert(UnderlyingSecurityAltIDSource_5.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_6;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_6("STRING_1732427149");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_6);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_6.insert(UnderlyingSecurityAltID_6.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_6("STRING_253472022");
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
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_4;
      FIX::UnderlyingStipType UnderlyingStipType_4("STRING_2058603880");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_4);
      UnderlyingStipulations_NoUnderlyingStips_4.insert(UnderlyingStipType_4.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_4("STRING_1712406245");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_4);
      UnderlyingStipulations_NoUnderlyingStips_4.insert(UnderlyingStipValue_4.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_4);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_5;
      FIX::UnderlyingStipType UnderlyingStipType_5("STRING_513080361");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_5);
      UnderlyingStipulations_NoUnderlyingStips_5.insert(UnderlyingStipType_5.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_5("STRING_497309692");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_5);
      UnderlyingStipulations_NoUnderlyingStips_5.insert(UnderlyingStipValue_5.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_5);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_6;
      FIX::UnderlyingStipType UnderlyingStipType_6("STRING_710675908");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_6);
      UnderlyingStipulations_NoUnderlyingStips_6.insert(UnderlyingStipType_6.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_6("STRING_1847228857");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_6);
      UnderlyingStipulations_NoUnderlyingStips_6.insert(UnderlyingStipValue_6.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_6);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_5;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_5("STRING_1231031534");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyID_5.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_5('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyIDSource_5.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_5(1643097762);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyRole_5.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_5);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_10("STRING_759604592");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_10);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10.insert(UnderlyingInstrumentPartySubID_10.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_10(1716037);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_10);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10.insert(UnderlyingInstrumentPartySubIDType_10.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_11("STRING_1857816674");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_11);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11.insert(UnderlyingInstrumentPartySubID_11.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_11(810455629);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_11);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11.insert(UnderlyingInstrumentPartySubIDType_11.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_12("STRING_1735582486");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_12);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12.insert(UnderlyingInstrumentPartySubID_12.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_12(1197350814);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_12);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12.insert(UnderlyingInstrumentPartySubIDType_12.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_6;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_6("STRING_538829485");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyID_6.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_6('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyIDSource_6.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_6(452577289);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyRole_6.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_6);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_13("STRING_1227942666");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_13);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13.insert(UnderlyingInstrumentPartySubID_13.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_13(31315907);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_13);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13.insert(UnderlyingInstrumentPartySubIDType_13.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_3;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_3("DATA_706982701");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingIssuer_3.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_3(1024352532);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingIssuerLen_3.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_3("DATA_541147105");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingSecurityDesc_3.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_3(538074162);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingSecurityDescLen_3.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_3;
    UnderlyingAdjustedQuantity_3.setString("20880160");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_3);
    UnderlyingInstrument_3.insert(UnderlyingAdjustedQuantity_3.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_3;
    UnderlyingAllocationPercent_3.setString("6.060000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_3);
    UnderlyingInstrument_3.insert(UnderlyingAllocationPercent_3.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_3;
    UnderlyingAttachmentPoint_3.setString("61.840000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_3);
    UnderlyingInstrument_3.insert(UnderlyingAttachmentPoint_3.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_3("STRING_1339136707");
    noUnderlyings_0_2.set(UnderlyingCFICode_3);
    UnderlyingInstrument_3.insert(UnderlyingCFICode_3.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_3("STRING_37210839");
    noUnderlyings_0_2.set(UnderlyingCPProgram_3);
    UnderlyingInstrument_3.insert(UnderlyingCPProgram_3.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_3("STRING_356468781");
    noUnderlyings_0_2.set(UnderlyingCPRegType_3);
    UnderlyingInstrument_3.insert(UnderlyingCPRegType_3.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_3;
    UnderlyingCapValue_3.setString("18522170");
    noUnderlyings_0_2.set(UnderlyingCapValue_3);
    UnderlyingInstrument_3.insert(UnderlyingCapValue_3.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_3;
    UnderlyingCashAmount_3.setString("5345205");
    noUnderlyings_0_2.set(UnderlyingCashAmount_3);
    UnderlyingInstrument_3.insert(UnderlyingCashAmount_3.getString());
    FIX::UnderlyingCashType UnderlyingCashType_3("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_3);
    UnderlyingInstrument_3.insert(UnderlyingCashType_3.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_3;
    UnderlyingContractMultiplier_3.setString("15519622");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_3);
    UnderlyingInstrument_3.insert(UnderlyingContractMultiplier_3.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_3(1875623253);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_3);
    UnderlyingInstrument_3.insert(UnderlyingContractMultiplierUnit_3.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_3("COUNTRY_150692576");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingCountryOfIssue_3.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_3("LOCALMKTDATE_717545426");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_3);
    UnderlyingInstrument_3.insert(UnderlyingCouponPaymentDate_3.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_3;
    UnderlyingCouponRate_3.setString("73.670000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_3);
    UnderlyingInstrument_3.insert(UnderlyingCouponRate_3.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_3("STRING_1035376606");
    noUnderlyings_0_2.set(UnderlyingCreditRating_3);
    UnderlyingInstrument_3.insert(UnderlyingCreditRating_3.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_3("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_3);
    UnderlyingInstrument_3.insert(UnderlyingCurrency_3.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_3;
    UnderlyingCurrentValue_3.setString("7457096");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_3);
    UnderlyingInstrument_3.insert(UnderlyingCurrentValue_3.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_3;
    UnderlyingDetachmentPoint_3.setString("20.000000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_3);
    UnderlyingInstrument_3.insert(UnderlyingDetachmentPoint_3.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_3;
    UnderlyingDirtyPrice_3.setString("9610522");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_3);
    UnderlyingInstrument_3.insert(UnderlyingDirtyPrice_3.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_3;
    UnderlyingEndPrice_3.setString("19430604");
    noUnderlyings_0_2.set(UnderlyingEndPrice_3);
    UnderlyingInstrument_3.insert(UnderlyingEndPrice_3.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_3;
    UnderlyingEndValue_3.setString("6789514");
    noUnderlyings_0_2.set(UnderlyingEndValue_3);
    UnderlyingInstrument_3.insert(UnderlyingEndValue_3.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_3(2124834922);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_3);
    UnderlyingInstrument_3.insert(UnderlyingExerciseStyle_3.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_3;
    UnderlyingFXRate_3.setString("2481540");
    noUnderlyings_0_2.set(UnderlyingFXRate_3);
    UnderlyingInstrument_3.insert(UnderlyingFXRate_3.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_3('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_3);
    UnderlyingInstrument_3.insert(UnderlyingFXRateCalc_3.getString());
    FIX::UnderlyingFactor UnderlyingFactor_3;
    UnderlyingFactor_3.setString("12052939");
    noUnderlyings_0_2.set(UnderlyingFactor_3);
    UnderlyingInstrument_3.insert(UnderlyingFactor_3.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_3(279469995);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_3);
    UnderlyingInstrument_3.insert(UnderlyingFlowScheduleType_3.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_3("STRING_100956761");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_3);
    UnderlyingInstrument_3.insert(UnderlyingInstrRegistry_3.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_3("LOCALMKTDATE_82162824");
    noUnderlyings_0_2.set(UnderlyingIssueDate_3);
    UnderlyingInstrument_3.insert(UnderlyingIssueDate_3.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_3("STRING_820617100");
    noUnderlyings_0_2.set(UnderlyingIssuer_3);
    UnderlyingInstrument_3.insert(UnderlyingIssuer_3.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_3("STRING_639030923");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingLocaleOfIssue_3.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_3("LOCALMKTDATE_22695222");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityDate_3.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_3("MONTHYEAR_946707706");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityMonthYear_3.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_3("TZTIMEONLY_1430577107");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityTime_3.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_3;
    UnderlyingNotionalPercentageOutstanding_3.setString("19.290000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_3);
    UnderlyingInstrument_3.insert(UnderlyingNotionalPercentageOutstanding_3.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_3('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_3);
    UnderlyingInstrument_3.insert(UnderlyingOptAttribute_3.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_3;
    UnderlyingOriginalNotionalPercentageOutstanding_3.setString("58.880000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_3);
    UnderlyingInstrument_3.insert(UnderlyingOriginalNotionalPercentageOutstanding_3.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_3("STRING_1066565350");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_3);
    UnderlyingInstrument_3.insert(UnderlyingPriceUnitOfMeasure_3.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_3;
    UnderlyingPriceUnitOfMeasureQty_3.setString("15184390");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_3);
    UnderlyingInstrument_3.insert(UnderlyingPriceUnitOfMeasureQty_3.getString());
    FIX::UnderlyingProduct UnderlyingProduct_3(706706930);
    noUnderlyings_0_2.set(UnderlyingProduct_3);
    UnderlyingInstrument_3.insert(UnderlyingProduct_3.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_3(471043981);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_3);
    UnderlyingInstrument_3.insert(UnderlyingPutOrCall_3.getString());
    FIX::UnderlyingPx UnderlyingPx_3;
    UnderlyingPx_3.setString("12465786");
    noUnderlyings_0_2.set(UnderlyingPx_3);
    UnderlyingInstrument_3.insert(UnderlyingPx_3.getString());
    FIX::UnderlyingQty UnderlyingQty_3;
    UnderlyingQty_3.setString("8573995");
    noUnderlyings_0_2.set(UnderlyingQty_3);
    UnderlyingInstrument_3.insert(UnderlyingQty_3.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_3("LOCALMKTDATE_1188589407");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_3);
    UnderlyingInstrument_3.insert(UnderlyingRedemptionDate_3.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_3("STRING_470332401");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_3);
    UnderlyingInstrument_3.insert(UnderlyingRepoCollateralSecurityType_3.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_3;
    UnderlyingRepurchaseRate_3.setString("61.120000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_3);
    UnderlyingInstrument_3.insert(UnderlyingRepurchaseRate_3.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_3(518255778);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_3);
    UnderlyingInstrument_3.insert(UnderlyingRepurchaseTerm_3.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_3("STRING_1843285805");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_3);
    UnderlyingInstrument_3.insert(UnderlyingRestructuringType_3.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_3("STRING_491002097");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityDesc_3.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_3("EXCHANGE_658377779");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityExchange_3.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_3("STRING_656854399");
    noUnderlyings_0_2.set(UnderlyingSecurityID_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityID_3.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_3("STRING_286578895");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityIDSource_3.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_3("STRING_1337329265");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_3);
    UnderlyingInstrument_3.insert(UnderlyingSecuritySubType_3.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_3("STRING_634205673");
    noUnderlyings_0_2.set(UnderlyingSecurityType_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityType_3.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_3("STRING_534732983");
    noUnderlyings_0_2.set(UnderlyingSeniority_3);
    UnderlyingInstrument_3.insert(UnderlyingSeniority_3.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_3("STRING_731303325");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_3);
    UnderlyingInstrument_3.insert(UnderlyingSettlMethod_3.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_3(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_3);
    UnderlyingInstrument_3.insert(UnderlyingSettlementType_3.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_3;
    UnderlyingStartValue_3.setString("8142029");
    noUnderlyings_0_2.set(UnderlyingStartValue_3);
    UnderlyingInstrument_3.insert(UnderlyingStartValue_3.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_3("STRING_832260086");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingStateOrProvinceOfIssue_3.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_3("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_3);
    UnderlyingInstrument_3.insert(UnderlyingStrikeCurrency_3.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_3;
    UnderlyingStrikePrice_3.setString("14712910");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_3);
    UnderlyingInstrument_3.insert(UnderlyingStrikePrice_3.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_3("STRING_1944357659");
    noUnderlyings_0_2.set(UnderlyingSymbol_3);
    UnderlyingInstrument_3.insert(UnderlyingSymbol_3.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_3("STRING_434044136");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_3);
    UnderlyingInstrument_3.insert(UnderlyingSymbolSfx_3.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_3("STRING_754384468");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_3);
    UnderlyingInstrument_3.insert(UnderlyingTimeUnit_3.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_3("STRING_1158705941");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_3);
    UnderlyingInstrument_3.insert(UnderlyingUnitOfMeasure_3.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_3;
    UnderlyingUnitOfMeasureQty_3.setString("14179626");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_3);
    UnderlyingInstrument_3.insert(UnderlyingUnitOfMeasureQty_3.getString());
    all_values.push_back(UnderlyingInstrument_3);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_7;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_7("STRING_77787643");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_7);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_7.insert(UnderlyingSecurityAltID_7.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_7("STRING_788918111");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_7);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_7.insert(UnderlyingSecurityAltIDSource_7.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_8;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_8("STRING_1100653639");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_8);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_8.insert(UnderlyingSecurityAltID_8.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_8("STRING_548831624");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_8);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_8.insert(UnderlyingSecurityAltIDSource_8.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_7;
      FIX::UnderlyingStipType UnderlyingStipType_7("STRING_1958053145");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_7);
      UnderlyingStipulations_NoUnderlyingStips_7.insert(UnderlyingStipType_7.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_7("STRING_1737421032");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_7);
      UnderlyingStipulations_NoUnderlyingStips_7.insert(UnderlyingStipValue_7.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_7);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_7;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_7("STRING_1703345610");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyID_7.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_7('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyIDSource_7.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_7(54147703);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyRole_7.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_7);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_14("STRING_766570941");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_14);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14.insert(UnderlyingInstrumentPartySubID_14.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_14(711002102);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_14);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14.insert(UnderlyingInstrumentPartySubIDType_14.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_8;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_8("STRING_333442954");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyID_8.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_8('2');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyIDSource_8.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_8(1345207775);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_8);
      UndlyInstrumentParties_NoUndlyInstrumentParties_8.insert(UnderlyingInstrumentPartyRole_8.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_8);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_15("STRING_687719883");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_15);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubID_15.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_15(1037223740);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_15);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubIDType_15.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_0;
  FIX::Yield Yield_0;
  Yield_0.setString("89.150000");
  msg.set(Yield_0);
  YieldData_0.insert(Yield_0.getString());
  FIX::YieldCalcDate YieldCalcDate_0("LOCALMKTDATE_1519979969");
  msg.set(YieldCalcDate_0);
  YieldData_0.insert(YieldCalcDate_0.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_0("LOCALMKTDATE_811402529");
  msg.set(YieldRedemptionDate_0);
  YieldData_0.insert(YieldRedemptionDate_0.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_0;
  YieldRedemptionPrice_0.setString("11697153");
  msg.set(YieldRedemptionPrice_0);
  YieldData_0.insert(YieldRedemptionPrice_0.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_0(843787330);
  msg.set(YieldRedemptionPriceType_0);
  YieldData_0.insert(YieldRedemptionPriceType_0.getString());
  FIX::YieldType YieldType_0("STRING_LASTYEAR");
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
