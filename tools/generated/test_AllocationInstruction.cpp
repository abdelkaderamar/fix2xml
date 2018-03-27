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
  AccruedInterestAmt_0.setString("92420");
  msg.set(AccruedInterestAmt_0);
  AllocationInstruction_0.insert(AccruedInterestAmt_0.getString());
  FIX::AccruedInterestRate AccruedInterestRate_0;
  AccruedInterestRate_0.setString("94.150000");
  msg.set(AccruedInterestRate_0);
  AllocationInstruction_0.insert(AccruedInterestRate_0.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_0(2);
  msg.set(AllocCancReplaceReason_0);
  AllocationInstruction_0.insert(AllocCancReplaceReason_0.getString());
  FIX::AllocID AllocID_0("STRING_55547841");
  msg.set(AllocID_0);
  AllocationInstruction_0.insert(AllocID_0.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_0(6);
  msg.set(AllocIntermedReqType_0);
  AllocationInstruction_0.insert(AllocIntermedReqType_0.getString());
  FIX::AllocLinkID AllocLinkID_0("STRING_597743884");
  msg.set(AllocLinkID_0);
  AllocationInstruction_0.insert(AllocLinkID_0.getString());
  FIX::AllocLinkType AllocLinkType_0(0);
  msg.set(AllocLinkType_0);
  AllocationInstruction_0.insert(AllocLinkType_0.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_0(1);
  msg.set(AllocNoOrdersType_0);
  AllocationInstruction_0.insert(AllocNoOrdersType_0.getString());
  FIX::AllocTransType AllocTransType_0('3');
  msg.set(AllocTransType_0);
  AllocationInstruction_0.insert(AllocTransType_0.getString());
  FIX::AllocType AllocType_0(11);
  msg.set(AllocType_0);
  AllocationInstruction_0.insert(AllocType_0.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_0(false);
  msg.set(AutoAcceptIndicator_0);
  AllocationInstruction_0.insert(AutoAcceptIndicator_0.getString());
  FIX::AvgParPx AvgParPx_0;
  AvgParPx_0.setString("12717143");
  msg.set(AvgParPx_0);
  AllocationInstruction_0.insert(AvgParPx_0.getString());
  FIX::AvgPx AvgPx_0;
  AvgPx_0.setString("13084528");
  msg.set(AvgPx_0);
  AllocationInstruction_0.insert(AvgPx_0.getString());
  FIX::AvgPxIndicator AvgPxIndicator_0(0);
  msg.set(AvgPxIndicator_0);
  AllocationInstruction_0.insert(AvgPxIndicator_0.getString());
  FIX::AvgPxPrecision AvgPxPrecision_0(601213073);
  msg.set(AvgPxPrecision_0);
  AllocationInstruction_0.insert(AvgPxPrecision_0.getString());
  FIX::BookingRefID BookingRefID_0("STRING_1067376502");
  msg.set(BookingRefID_0);
  AllocationInstruction_0.insert(BookingRefID_0.getString());
  FIX::BookingType BookingType_0(0);
  msg.set(BookingType_0);
  AllocationInstruction_0.insert(BookingType_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_1("LOCALMKTDATE_1107039347");
  msg.set(ClearingBusinessDate_1);
  AllocationInstruction_0.insert(ClearingBusinessDate_1.getString());
  FIX::Concession Concession_0;
  Concession_0.setString("87174");
  msg.set(Concession_0);
  AllocationInstruction_0.insert(Concession_0.getString());
  FIX::Currency Currency_1("GBP");
  msg.set(Currency_1);
  AllocationInstruction_0.insert(Currency_1.getString());
  FIX::CustOrderCapacity CustOrderCapacity_0(4);
  msg.set(CustOrderCapacity_0);
  AllocationInstruction_0.insert(CustOrderCapacity_0.getString());
  FIX::EncodedText EncodedText_1("DATA_1041042888");
  msg.set(EncodedText_1);
  AllocationInstruction_0.insert(EncodedText_1.getString());
  FIX::EncodedTextLen EncodedTextLen_1(87642735);
  msg.set(EncodedTextLen_1);
  AllocationInstruction_0.insert(EncodedTextLen_1.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_0;
  EndAccruedInterestAmt_0.setString("5491010");
  msg.set(EndAccruedInterestAmt_0);
  AllocationInstruction_0.insert(EndAccruedInterestAmt_0.getString());
  FIX::EndCash EndCash_0;
  EndCash_0.setString("12255569");
  msg.set(EndCash_0);
  AllocationInstruction_0.insert(EndCash_0.getString());
  FIX::GrossTradeAmt GrossTradeAmt_0;
  GrossTradeAmt_0.setString("6876353");
  msg.set(GrossTradeAmt_0);
  AllocationInstruction_0.insert(GrossTradeAmt_0.getString());
  FIX::InterestAtMaturity InterestAtMaturity_0;
  InterestAtMaturity_0.setString("19913309");
  msg.set(InterestAtMaturity_0);
  AllocationInstruction_0.insert(InterestAtMaturity_0.getString());
  FIX::LastFragment LastFragment_0(false);
  msg.set(LastFragment_0);
  AllocationInstruction_0.insert(LastFragment_0.getString());
  FIX::LastMkt LastMkt_1("EXCHANGE_2040493264");
  msg.set(LastMkt_1);
  AllocationInstruction_0.insert(LastMkt_1.getString());
  FIX::LegalConfirm LegalConfirm_0(false);
  msg.set(LegalConfirm_0);
  AllocationInstruction_0.insert(LegalConfirm_0.getString());
  FIX::MatchType MatchType_0("STRING_M3");
  msg.set(MatchType_0);
  AllocationInstruction_0.insert(MatchType_0.getString());
  FIX::MessageEventSource MessageEventSource_0("STRING_2037199031");
  msg.set(MessageEventSource_0);
  AllocationInstruction_0.insert(MessageEventSource_0.getString());
  FIX::MultiLegReportingType MultiLegReportingType_0('3');
  msg.set(MultiLegReportingType_0);
  AllocationInstruction_0.insert(MultiLegReportingType_0.getString());
  FIX::NetMoney NetMoney_0;
  NetMoney_0.setString("13462659");
  msg.set(NetMoney_0);
  AllocationInstruction_0.insert(NetMoney_0.getString());
  FIX::NumDaysInterest NumDaysInterest_0(345507086);
  msg.set(NumDaysInterest_0);
  AllocationInstruction_0.insert(NumDaysInterest_0.getString());
  FIX::PositionEffect PositionEffect_0('N');
  msg.set(PositionEffect_0);
  AllocationInstruction_0.insert(PositionEffect_0.getString());
  FIX::PreviouslyReported PreviouslyReported_0(true);
  msg.set(PreviouslyReported_0);
  AllocationInstruction_0.insert(PreviouslyReported_0.getString());
  FIX::PriceType PriceType_0(15);
  msg.set(PriceType_0);
  AllocationInstruction_0.insert(PriceType_0.getString());
  FIX::QtyType QtyType_1(2);
  msg.set(QtyType_1);
  AllocationInstruction_0.insert(QtyType_1.getString());
  FIX::Quantity Quantity_1;
  Quantity_1.setString("11794563");
  msg.set(Quantity_1);
  AllocationInstruction_0.insert(Quantity_1.getString());
  FIX::RefAllocID RefAllocID_0("STRING_1194664164");
  msg.set(RefAllocID_0);
  AllocationInstruction_0.insert(RefAllocID_0.getString());
  FIX::ReversalIndicator ReversalIndicator_0(false);
  msg.set(ReversalIndicator_0);
  AllocationInstruction_0.insert(ReversalIndicator_0.getString());
  FIX::RndPx RndPx_0;
  RndPx_0.setString("3404255");
  msg.set(RndPx_0);
  AllocationInstruction_0.insert(RndPx_0.getString());
  FIX::SecondaryAllocID SecondaryAllocID_0("STRING_1069330447");
  msg.set(SecondaryAllocID_0);
  AllocationInstruction_0.insert(SecondaryAllocID_0.getString());
  FIX::SettlDate SettlDate_0("LOCALMKTDATE_244964307");
  msg.set(SettlDate_0);
  AllocationInstruction_0.insert(SettlDate_0.getString());
  FIX::SettlType SettlType_0("STRING_2");
  msg.set(SettlType_0);
  AllocationInstruction_0.insert(SettlType_0.getString());
  FIX::Side Side_0('A');
  msg.set(Side_0);
  AllocationInstruction_0.insert(Side_0.getString());
  FIX::StartCash StartCash_0;
  StartCash_0.setString("13520036");
  msg.set(StartCash_0);
  AllocationInstruction_0.insert(StartCash_0.getString());
  FIX::Text Text_1("STRING_1416519472");
  msg.set(Text_1);
  AllocationInstruction_0.insert(Text_1.getString());
  FIX::TotNoAllocs TotNoAllocs_0(708643116);
  msg.set(TotNoAllocs_0);
  AllocationInstruction_0.insert(TotNoAllocs_0.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_0;
  TotalAccruedInterestAmt_0.setString("6033399");
  msg.set(TotalAccruedInterestAmt_0);
  AllocationInstruction_0.insert(TotalAccruedInterestAmt_0.getString());
  FIX::TotalTakedown TotalTakedown_0;
  TotalTakedown_0.setString("1490034");
  msg.set(TotalTakedown_0);
  AllocationInstruction_0.insert(TotalTakedown_0.getString());
  FIX::TradeDate TradeDate_1("LOCALMKTDATE_1749686004");
  msg.set(TradeDate_1);
  AllocationInstruction_0.insert(TradeDate_1.getString());
  FIX::TradeInputSource TradeInputSource_0("STRING_690982661");
  msg.set(TradeInputSource_0);
  AllocationInstruction_0.insert(TradeInputSource_0.getString());
  FIX::TradeOriginationDate TradeOriginationDate_0("LOCALMKTDATE_698104542");
  msg.set(TradeOriginationDate_0);
  AllocationInstruction_0.insert(TradeOriginationDate_0.getString());
  FIX::TradingSessionID TradingSessionID_1("STRING_2");
  msg.set(TradingSessionID_1);
  AllocationInstruction_0.insert(TradingSessionID_1.getString());
  FIX::TradingSessionSubID TradingSessionSubID_1("STRING_4");
  msg.set(TradingSessionSubID_1);
  AllocationInstruction_0.insert(TradingSessionSubID_1.getString());
  FIX::TransactTime TransactTime_1(FIX::UTCTIMESTAMP(7, 17, 52, 7, 92016));
  msg.set(TransactTime_1);
  AllocationInstruction_0.insert(TransactTime_1.getString());
  FIX::TrdSubType TrdSubType_0(33);
  msg.set(TrdSubType_0);
  AllocationInstruction_0.insert(TrdSubType_0.getString());
  FIX::TrdType TrdType_0(1);
  msg.set(TrdType_0);
  AllocationInstruction_0.insert(TrdType_0.getString());
  all_values.push_back(AllocationInstruction_0);

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_0("STRING_1081338434");
    noAllocs_0_0.set(AllocAccount_0);
    AllocGrp_NoAllocs_0.insert(AllocAccount_0.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_0;
    AllocAccruedInterestAmt_0.setString("14371484");
    noAllocs_0_0.set(AllocAccruedInterestAmt_0);
    AllocGrp_NoAllocs_0.insert(AllocAccruedInterestAmt_0.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_0(1176329504);
    noAllocs_0_0.set(AllocAcctIDSource_0);
    AllocGrp_NoAllocs_0.insert(AllocAcctIDSource_0.getString());
    FIX::AllocAvgPx AllocAvgPx_0;
    AllocAvgPx_0.setString("1133111");
    noAllocs_0_0.set(AllocAvgPx_0);
    AllocGrp_NoAllocs_0.insert(AllocAvgPx_0.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_0("STRING_484329001");
    noAllocs_0_0.set(AllocCustomerCapacity_0);
    AllocGrp_NoAllocs_0.insert(AllocCustomerCapacity_0.getString());
    FIX::AllocHandlInst AllocHandlInst_0(1);
    noAllocs_0_0.set(AllocHandlInst_0);
    AllocGrp_NoAllocs_0.insert(AllocHandlInst_0.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_0;
    AllocInterestAtMaturity_0.setString("4537366");
    noAllocs_0_0.set(AllocInterestAtMaturity_0);
    AllocGrp_NoAllocs_0.insert(AllocInterestAtMaturity_0.getString());
    FIX::AllocMethod AllocMethod_0(3);
    noAllocs_0_0.set(AllocMethod_0);
    AllocGrp_NoAllocs_0.insert(AllocMethod_0.getString());
    FIX::AllocNetMoney AllocNetMoney_0;
    AllocNetMoney_0.setString("10650450");
    noAllocs_0_0.set(AllocNetMoney_0);
    AllocGrp_NoAllocs_0.insert(AllocNetMoney_0.getString());
    FIX::AllocPositionEffect AllocPositionEffect_0('F');
    noAllocs_0_0.set(AllocPositionEffect_0);
    AllocGrp_NoAllocs_0.insert(AllocPositionEffect_0.getString());
    FIX::AllocPrice AllocPrice_0;
    AllocPrice_0.setString("2282187");
    noAllocs_0_0.set(AllocPrice_0);
    AllocGrp_NoAllocs_0.insert(AllocPrice_0.getString());
    FIX::AllocQty AllocQty_0;
    AllocQty_0.setString("2695650");
    noAllocs_0_0.set(AllocQty_0);
    AllocGrp_NoAllocs_0.insert(AllocQty_0.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_0;
    AllocSettlCurrAmt_0.setString("11305744");
    noAllocs_0_0.set(AllocSettlCurrAmt_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlCurrAmt_0.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_0("CAN");
    noAllocs_0_0.set(AllocSettlCurrency_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlCurrency_0.getString());
    FIX::AllocSettlInstType AllocSettlInstType_0(1);
    noAllocs_0_0.set(AllocSettlInstType_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlInstType_0.getString());
    FIX::AllocText AllocText_0("STRING_539064178");
    noAllocs_0_0.set(AllocText_0);
    AllocGrp_NoAllocs_0.insert(AllocText_0.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_0("STRING_M");
    noAllocs_0_0.set(ClearingFeeIndicator_0);
    AllocGrp_NoAllocs_0.insert(ClearingFeeIndicator_0.getString());
    FIX::EncodedAllocText EncodedAllocText_0("DATA_1977682489");
    noAllocs_0_0.set(EncodedAllocText_0);
    AllocGrp_NoAllocs_0.insert(EncodedAllocText_0.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_0(1366823519);
    noAllocs_0_0.set(EncodedAllocTextLen_0);
    AllocGrp_NoAllocs_0.insert(EncodedAllocTextLen_0.getString());
    FIX::IndividualAllocID IndividualAllocID_0("STRING_795022032");
    noAllocs_0_0.set(IndividualAllocID_0);
    AllocGrp_NoAllocs_0.insert(IndividualAllocID_0.getString());
    FIX::IndividualAllocType IndividualAllocType_0(1);
    noAllocs_0_0.set(IndividualAllocType_0);
    AllocGrp_NoAllocs_0.insert(IndividualAllocType_0.getString());
    FIX::MatchStatus MatchStatus_0('1');
    noAllocs_0_0.set(MatchStatus_0);
    AllocGrp_NoAllocs_0.insert(MatchStatus_0.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_0(false);
    noAllocs_0_0.set(NotifyBrokerOfCredit_0);
    AllocGrp_NoAllocs_0.insert(NotifyBrokerOfCredit_0.getString());
    FIX::ProcessCode ProcessCode_0('2');
    noAllocs_0_0.set(ProcessCode_0);
    AllocGrp_NoAllocs_0.insert(ProcessCode_0.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_0("STRING_433561581");
    noAllocs_0_0.set(SecondaryIndividualAllocID_0);
    AllocGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_0.getString());
    FIX::SettlCurrAmt SettlCurrAmt_0;
    SettlCurrAmt_0.setString("10805090");
    noAllocs_0_0.set(SettlCurrAmt_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrAmt_0.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_0;
    SettlCurrFxRate_0.setString("11409982");
    noAllocs_0_0.set(SettlCurrFxRate_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrFxRate_0.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_0('M');
    noAllocs_0_0.set(SettlCurrFxRateCalc_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrFxRateCalc_0.getString());
    FIX::SettlCurrency SettlCurrency_0("GBP");
    noAllocs_0_0.set(SettlCurrency_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrency_0.getString());
    all_values.push_back(AllocGrp_NoAllocs_0);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_0;
      FIX::ClearingInstruction ClearingInstruction_0(0);
      noClearingInstructions_0_1_0.set(ClearingInstruction_0);
      ClrInstGrp_NoClearingInstructions_0.insert(ClearingInstruction_0.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_0);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_1;
      FIX::ClearingInstruction ClearingInstruction_1(11);
      noClearingInstructions_0_1_1.set(ClearingInstruction_1);
      ClrInstGrp_NoClearingInstructions_1.insert(ClearingInstruction_1.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_1);

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_0;
    FIX::CommCurrency CommCurrency_0("CHF");
    noAllocs_0_0.set(CommCurrency_0);
    CommissionData_0.insert(CommCurrency_0.getString());
    FIX::CommType CommType_0('4');
    noAllocs_0_0.set(CommType_0);
    CommissionData_0.insert(CommType_0.getString());
    FIX::Commission Commission_0;
    Commission_0.setString("3857163");
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
      MiscFeeAmt_0.setString("997713");
      noMiscFees_0_1_0.set(MiscFeeAmt_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeAmt_0.getString());
      FIX::MiscFeeBasis MiscFeeBasis_0(1);
      noMiscFees_0_1_0.set(MiscFeeBasis_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeBasis_0.getString());
      FIX::MiscFeeCurr MiscFeeCurr_0("GBP");
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
      MiscFeeAmt_1.setString("17067652");
      noMiscFees_0_1_1.set(MiscFeeAmt_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeAmt_1.getString());
      FIX::MiscFeeBasis MiscFeeBasis_1(1);
      noMiscFees_0_1_1.set(MiscFeeBasis_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeBasis_1.getString());
      FIX::MiscFeeCurr MiscFeeCurr_1("CHF");
      noMiscFees_0_1_1.set(MiscFeeCurr_1);
      MiscFeesGrp_NoMiscFees_1.insert(MiscFeeCurr_1.getString());
      FIX::MiscFeeType MiscFeeType_1("STRING_5");
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
      FIX::NestedPartyID NestedPartyID_2("STRING_1918191255");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyID_2.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_2('5');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyIDSource_2.getString());
      FIX::NestedPartyRole NestedPartyRole_2(1872105091);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyRole_2.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_2);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_2;
        FIX::NestedPartySubID NestedPartySubID_2("STRING_1429817037");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_2);
        NstdPtysSubGrp_NoNestedPartySubIDs_2.insert(NestedPartySubID_2.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_2(158183025);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_2);
        NstdPtysSubGrp_NoNestedPartySubIDs_2.insert(NestedPartySubIDType_2.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_2);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_0;
    FIX::SettlDeliveryType SettlDeliveryType_0(1);
    noAllocs_0_0.set(SettlDeliveryType_0);
    SettlInstructionsData_0.insert(SettlDeliveryType_0.getString());
    FIX::StandInstDbID StandInstDbID_0("STRING_423331633");
    noAllocs_0_0.set(StandInstDbID_0);
    SettlInstructionsData_0.insert(StandInstDbID_0.getString());
    FIX::StandInstDbName StandInstDbName_0("STRING_1042996823");
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
      FIX::DlvyInstType DlvyInstType_0('S');
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
        FIX::SettlPartyID SettlPartyID_0("STRING_793645101");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyID_0.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_0('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyIDSource_0.getString());
        FIX::SettlPartyRole SettlPartyRole_0(399558425);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyRole_0.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_0);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_0;
          FIX::SettlPartySubID SettlPartySubID_0("STRING_773713278");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_0);
          SettlPtysSubGrp_NoSettlPartySubIDs_0.insert(SettlPartySubID_0.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_0(963853629);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_0);
          SettlPtysSubGrp_NoSettlPartySubIDs_0.insert(SettlPartySubIDType_0.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_0);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_1;
          FIX::SettlPartySubID SettlPartySubID_1("STRING_1279132749");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_1);
          SettlPtysSubGrp_NoSettlPartySubIDs_1.insert(SettlPartySubID_1.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_1(621977180);
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
        FIX::SettlPartyID SettlPartyID_1("STRING_1797713884");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyID_1.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_1('3');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyIDSource_1.getString());
        FIX::SettlPartyRole SettlPartyRole_1(1407102904);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyRole_1.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_1);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_2;
          FIX::SettlPartySubID SettlPartySubID_2("STRING_724435000");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_2);
          SettlPtysSubGrp_NoSettlPartySubIDs_2.insert(SettlPartySubID_2.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_2(583809157);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_2);
          SettlPtysSubGrp_NoSettlPartySubIDs_2.insert(SettlPartySubIDType_2.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_2);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_1;
      FIX::DlvyInstType DlvyInstType_1('C');
      noDlvyInst_0_1_1.set(DlvyInstType_1);
      DlvyInstGrp_NoDlvyInst_1.insert(DlvyInstType_1.getString());
      FIX::SettlInstSource SettlInstSource_1('2');
      noDlvyInst_0_1_1.set(SettlInstSource_1);
      DlvyInstGrp_NoDlvyInst_1.insert(SettlInstSource_1.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_1);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_2;
        FIX::SettlPartyID SettlPartyID_2("STRING_103388652");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyID_2.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_2('1');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyIDSource_2.getString());
        FIX::SettlPartyRole SettlPartyRole_2(851960374);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_2);
        SettlParties_NoSettlPartyIDs_2.insert(SettlPartyRole_2.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_2);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_3;
          FIX::SettlPartySubID SettlPartySubID_3("STRING_764196992");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_3);
          SettlPtysSubGrp_NoSettlPartySubIDs_3.insert(SettlPartySubID_3.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_3(1010143399);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_3);
          SettlPtysSubGrp_NoSettlPartySubIDs_3.insert(SettlPartySubIDType_3.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_3);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_3;
        FIX::SettlPartyID SettlPartyID_3("STRING_563645030");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyID_3.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_3('1');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyIDSource_3.getString());
        FIX::SettlPartyRole SettlPartyRole_3(2053140222);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_3);
        SettlParties_NoSettlPartyIDs_3.insert(SettlPartyRole_3.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_3);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_4;
          FIX::SettlPartySubID SettlPartySubID_4("STRING_1261183823");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_4);
          SettlPtysSubGrp_NoSettlPartySubIDs_4.insert(SettlPartySubID_4.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_4(767321981);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_4);
          SettlPtysSubGrp_NoSettlPartySubIDs_4.insert(SettlPartySubIDType_4.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_4);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_0;
    FIX::ExecID ExecID_0("STRING_14008441");
    noExecs_0_0.set(ExecID_0);
    ExecAllocGrp_NoExecs_0.insert(ExecID_0.getString());
    FIX::FirmTradeID FirmTradeID_0("STRING_1560967082");
    noExecs_0_0.set(FirmTradeID_0);
    ExecAllocGrp_NoExecs_0.insert(FirmTradeID_0.getString());
    FIX::LastCapacity LastCapacity_0('1');
    noExecs_0_0.set(LastCapacity_0);
    ExecAllocGrp_NoExecs_0.insert(LastCapacity_0.getString());
    FIX::LastParPx LastParPx_0;
    LastParPx_0.setString("4135668");
    noExecs_0_0.set(LastParPx_0);
    ExecAllocGrp_NoExecs_0.insert(LastParPx_0.getString());
    FIX::LastPx LastPx_0;
    LastPx_0.setString("5928448");
    noExecs_0_0.set(LastPx_0);
    ExecAllocGrp_NoExecs_0.insert(LastPx_0.getString());
    FIX::LastQty LastQty_0;
    LastQty_0.setString("3461160");
    noExecs_0_0.set(LastQty_0);
    ExecAllocGrp_NoExecs_0.insert(LastQty_0.getString());
    FIX::SecondaryExecID SecondaryExecID_0("STRING_1377420496");
    noExecs_0_0.set(SecondaryExecID_0);
    ExecAllocGrp_NoExecs_0.insert(SecondaryExecID_0.getString());
    FIX::TradeID TradeID_0("STRING_1871977607");
    noExecs_0_0.set(TradeID_0);
    ExecAllocGrp_NoExecs_0.insert(TradeID_0.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_0);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_1;
    FIX::ExecID ExecID_1("STRING_968093247");
    noExecs_0_1.set(ExecID_1);
    ExecAllocGrp_NoExecs_1.insert(ExecID_1.getString());
    FIX::FirmTradeID FirmTradeID_1("STRING_1027650733");
    noExecs_0_1.set(FirmTradeID_1);
    ExecAllocGrp_NoExecs_1.insert(FirmTradeID_1.getString());
    FIX::LastCapacity LastCapacity_1('1');
    noExecs_0_1.set(LastCapacity_1);
    ExecAllocGrp_NoExecs_1.insert(LastCapacity_1.getString());
    FIX::LastParPx LastParPx_1;
    LastParPx_1.setString("2277125");
    noExecs_0_1.set(LastParPx_1);
    ExecAllocGrp_NoExecs_1.insert(LastParPx_1.getString());
    FIX::LastPx LastPx_1;
    LastPx_1.setString("2371625");
    noExecs_0_1.set(LastPx_1);
    ExecAllocGrp_NoExecs_1.insert(LastPx_1.getString());
    FIX::LastQty LastQty_1;
    LastQty_1.setString("8109238");
    noExecs_0_1.set(LastQty_1);
    ExecAllocGrp_NoExecs_1.insert(LastQty_1.getString());
    FIX::SecondaryExecID SecondaryExecID_1("STRING_811521661");
    noExecs_0_1.set(SecondaryExecID_1);
    ExecAllocGrp_NoExecs_1.insert(SecondaryExecID_1.getString());
    FIX::TradeID TradeID_1("STRING_569843598");
    noExecs_0_1.set(TradeID_1);
    ExecAllocGrp_NoExecs_1.insert(TradeID_1.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_1);

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_2;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_2;
    FIX::ExecID ExecID_2("STRING_1727997801");
    noExecs_0_2.set(ExecID_2);
    ExecAllocGrp_NoExecs_2.insert(ExecID_2.getString());
    FIX::FirmTradeID FirmTradeID_2("STRING_1938860591");
    noExecs_0_2.set(FirmTradeID_2);
    ExecAllocGrp_NoExecs_2.insert(FirmTradeID_2.getString());
    FIX::LastCapacity LastCapacity_2('3');
    noExecs_0_2.set(LastCapacity_2);
    ExecAllocGrp_NoExecs_2.insert(LastCapacity_2.getString());
    FIX::LastParPx LastParPx_2;
    LastParPx_2.setString("10623777");
    noExecs_0_2.set(LastParPx_2);
    ExecAllocGrp_NoExecs_2.insert(LastParPx_2.getString());
    FIX::LastPx LastPx_2;
    LastPx_2.setString("6433373");
    noExecs_0_2.set(LastPx_2);
    ExecAllocGrp_NoExecs_2.insert(LastPx_2.getString());
    FIX::LastQty LastQty_2;
    LastQty_2.setString("4664945");
    noExecs_0_2.set(LastQty_2);
    ExecAllocGrp_NoExecs_2.insert(LastQty_2.getString());
    FIX::SecondaryExecID SecondaryExecID_2("STRING_1826574749");
    noExecs_0_2.set(SecondaryExecID_2);
    ExecAllocGrp_NoExecs_2.insert(SecondaryExecID_2.getString());
    FIX::TradeID TradeID_2("STRING_1653480716");
    noExecs_0_2.set(TradeID_2);
    ExecAllocGrp_NoExecs_2.insert(TradeID_2.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_2);

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_0;
  FIX::AgreementCurrency AgreementCurrency_0("USD");
  msg.set(AgreementCurrency_0);
  FinancingDetails_0.insert(AgreementCurrency_0.getString());
  FIX::AgreementDate AgreementDate_0("LOCALMKTDATE_1559137290");
  msg.set(AgreementDate_0);
  FinancingDetails_0.insert(AgreementDate_0.getString());
  FIX::AgreementDesc AgreementDesc_0("STRING_656559251");
  msg.set(AgreementDesc_0);
  FinancingDetails_0.insert(AgreementDesc_0.getString());
  FIX::AgreementID AgreementID_0("STRING_2127803549");
  msg.set(AgreementID_0);
  FinancingDetails_0.insert(AgreementID_0.getString());
  FIX::DeliveryType DeliveryType_0(0);
  msg.set(DeliveryType_0);
  FinancingDetails_0.insert(DeliveryType_0.getString());
  FIX::EndDate EndDate_0("LOCALMKTDATE_1222777606");
  msg.set(EndDate_0);
  FinancingDetails_0.insert(EndDate_0.getString());
  FIX::MarginRatio MarginRatio_0;
  MarginRatio_0.setString("19.910000");
  msg.set(MarginRatio_0);
  FinancingDetails_0.insert(MarginRatio_0.getString());
  FIX::StartDate StartDate_0("LOCALMKTDATE_1739942706");
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
    multiset<string> InstrumentLeg_3;
    FIX::EncodedLegIssuer EncodedLegIssuer_3("DATA_185303916");
    noLegs_0_0.set(EncodedLegIssuer_3);
    InstrumentLeg_3.insert(EncodedLegIssuer_3.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_3(1141296462);
    noLegs_0_0.set(EncodedLegIssuerLen_3);
    InstrumentLeg_3.insert(EncodedLegIssuerLen_3.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_3("DATA_1785315706");
    noLegs_0_0.set(EncodedLegSecurityDesc_3);
    InstrumentLeg_3.insert(EncodedLegSecurityDesc_3.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_3(2057281523);
    noLegs_0_0.set(EncodedLegSecurityDescLen_3);
    InstrumentLeg_3.insert(EncodedLegSecurityDescLen_3.getString());
    FIX::LegCFICode LegCFICode_3("STRING_2109389709");
    noLegs_0_0.set(LegCFICode_3);
    InstrumentLeg_3.insert(LegCFICode_3.getString());
    FIX::LegContractMultiplier LegContractMultiplier_3;
    LegContractMultiplier_3.setString("6654827");
    noLegs_0_0.set(LegContractMultiplier_3);
    InstrumentLeg_3.insert(LegContractMultiplier_3.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_3(2143770384);
    noLegs_0_0.set(LegContractMultiplierUnit_3);
    InstrumentLeg_3.insert(LegContractMultiplierUnit_3.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_3("MONTHYEAR_189618565");
    noLegs_0_0.set(LegContractSettlMonth_3);
    InstrumentLeg_3.insert(LegContractSettlMonth_3.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_3("COUNTRY_902645345");
    noLegs_0_0.set(LegCountryOfIssue_3);
    InstrumentLeg_3.insert(LegCountryOfIssue_3.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_3("LOCALMKTDATE_807210597");
    noLegs_0_0.set(LegCouponPaymentDate_3);
    InstrumentLeg_3.insert(LegCouponPaymentDate_3.getString());
    FIX::LegCouponRate LegCouponRate_3;
    LegCouponRate_3.setString("2.260000");
    noLegs_0_0.set(LegCouponRate_3);
    InstrumentLeg_3.insert(LegCouponRate_3.getString());
    FIX::LegCreditRating LegCreditRating_3("STRING_1472488944");
    noLegs_0_0.set(LegCreditRating_3);
    InstrumentLeg_3.insert(LegCreditRating_3.getString());
    FIX::LegCurrency LegCurrency_3("CAN");
    noLegs_0_0.set(LegCurrency_3);
    InstrumentLeg_3.insert(LegCurrency_3.getString());
    FIX::LegDatedDate LegDatedDate_3("LOCALMKTDATE_2145721194");
    noLegs_0_0.set(LegDatedDate_3);
    InstrumentLeg_3.insert(LegDatedDate_3.getString());
    FIX::LegExerciseStyle LegExerciseStyle_3(1450102507);
    noLegs_0_0.set(LegExerciseStyle_3);
    InstrumentLeg_3.insert(LegExerciseStyle_3.getString());
    FIX::LegFactor LegFactor_3;
    LegFactor_3.setString("14358544");
    noLegs_0_0.set(LegFactor_3);
    InstrumentLeg_3.insert(LegFactor_3.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_3(464732097);
    noLegs_0_0.set(LegFlowScheduleType_3);
    InstrumentLeg_3.insert(LegFlowScheduleType_3.getString());
    FIX::LegInstrRegistry LegInstrRegistry_3("STRING_1129193608");
    noLegs_0_0.set(LegInstrRegistry_3);
    InstrumentLeg_3.insert(LegInstrRegistry_3.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_3("LOCALMKTDATE_941851555");
    noLegs_0_0.set(LegInterestAccrualDate_3);
    InstrumentLeg_3.insert(LegInterestAccrualDate_3.getString());
    FIX::LegIssueDate LegIssueDate_3("LOCALMKTDATE_1494871678");
    noLegs_0_0.set(LegIssueDate_3);
    InstrumentLeg_3.insert(LegIssueDate_3.getString());
    FIX::LegIssuer LegIssuer_3("STRING_1995813334");
    noLegs_0_0.set(LegIssuer_3);
    InstrumentLeg_3.insert(LegIssuer_3.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_3("STRING_353505198");
    noLegs_0_0.set(LegLocaleOfIssue_3);
    InstrumentLeg_3.insert(LegLocaleOfIssue_3.getString());
    FIX::LegMaturityDate LegMaturityDate_3("LOCALMKTDATE_3947282");
    noLegs_0_0.set(LegMaturityDate_3);
    InstrumentLeg_3.insert(LegMaturityDate_3.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_3("MONTHYEAR_1976133236");
    noLegs_0_0.set(LegMaturityMonthYear_3);
    InstrumentLeg_3.insert(LegMaturityMonthYear_3.getString());
    FIX::LegMaturityTime LegMaturityTime_3("TZTIMEONLY_532480822");
    noLegs_0_0.set(LegMaturityTime_3);
    InstrumentLeg_3.insert(LegMaturityTime_3.getString());
    FIX::LegOptAttribute LegOptAttribute_3('1');
    noLegs_0_0.set(LegOptAttribute_3);
    InstrumentLeg_3.insert(LegOptAttribute_3.getString());
    FIX::LegOptionRatio LegOptionRatio_3;
    LegOptionRatio_3.setString("19704615");
    noLegs_0_0.set(LegOptionRatio_3);
    InstrumentLeg_3.insert(LegOptionRatio_3.getString());
    FIX::LegPool LegPool_3("STRING_124939880");
    noLegs_0_0.set(LegPool_3);
    InstrumentLeg_3.insert(LegPool_3.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_3("STRING_2021905283");
    noLegs_0_0.set(LegPriceUnitOfMeasure_3);
    InstrumentLeg_3.insert(LegPriceUnitOfMeasure_3.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_3;
    LegPriceUnitOfMeasureQty_3.setString("2308731");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_3);
    InstrumentLeg_3.insert(LegPriceUnitOfMeasureQty_3.getString());
    FIX::LegProduct LegProduct_3(310243797);
    noLegs_0_0.set(LegProduct_3);
    InstrumentLeg_3.insert(LegProduct_3.getString());
    FIX::LegPutOrCall LegPutOrCall_3(1015718097);
    noLegs_0_0.set(LegPutOrCall_3);
    InstrumentLeg_3.insert(LegPutOrCall_3.getString());
    FIX::LegRatioQty LegRatioQty_3;
    LegRatioQty_3.setString("20161888");
    noLegs_0_0.set(LegRatioQty_3);
    InstrumentLeg_3.insert(LegRatioQty_3.getString());
    FIX::LegRedemptionDate LegRedemptionDate_3("LOCALMKTDATE_220041672");
    noLegs_0_0.set(LegRedemptionDate_3);
    InstrumentLeg_3.insert(LegRedemptionDate_3.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_3("STRING_977624159");
    noLegs_0_0.set(LegRepoCollateralSecurityType_3);
    InstrumentLeg_3.insert(LegRepoCollateralSecurityType_3.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_3;
    LegRepurchaseRate_3.setString("79.910000");
    noLegs_0_0.set(LegRepurchaseRate_3);
    InstrumentLeg_3.insert(LegRepurchaseRate_3.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_3(216328408);
    noLegs_0_0.set(LegRepurchaseTerm_3);
    InstrumentLeg_3.insert(LegRepurchaseTerm_3.getString());
    FIX::LegSecurityDesc LegSecurityDesc_3("STRING_1167242724");
    noLegs_0_0.set(LegSecurityDesc_3);
    InstrumentLeg_3.insert(LegSecurityDesc_3.getString());
    FIX::LegSecurityExchange LegSecurityExchange_3("EXCHANGE_1436833336");
    noLegs_0_0.set(LegSecurityExchange_3);
    InstrumentLeg_3.insert(LegSecurityExchange_3.getString());
    FIX::LegSecurityID LegSecurityID_3("STRING_1023539005");
    noLegs_0_0.set(LegSecurityID_3);
    InstrumentLeg_3.insert(LegSecurityID_3.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_3("STRING_20899302");
    noLegs_0_0.set(LegSecurityIDSource_3);
    InstrumentLeg_3.insert(LegSecurityIDSource_3.getString());
    FIX::LegSecuritySubType LegSecuritySubType_3("STRING_761838632");
    noLegs_0_0.set(LegSecuritySubType_3);
    InstrumentLeg_3.insert(LegSecuritySubType_3.getString());
    FIX::LegSecurityType LegSecurityType_3("STRING_1411263756");
    noLegs_0_0.set(LegSecurityType_3);
    InstrumentLeg_3.insert(LegSecurityType_3.getString());
    FIX::LegSide LegSide_3('8');
    noLegs_0_0.set(LegSide_3);
    InstrumentLeg_3.insert(LegSide_3.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_3("STRING_760076179");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_3);
    InstrumentLeg_3.insert(LegStateOrProvinceOfIssue_3.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_3("JPY");
    noLegs_0_0.set(LegStrikeCurrency_3);
    InstrumentLeg_3.insert(LegStrikeCurrency_3.getString());
    FIX::LegStrikePrice LegStrikePrice_3;
    LegStrikePrice_3.setString("12248082");
    noLegs_0_0.set(LegStrikePrice_3);
    InstrumentLeg_3.insert(LegStrikePrice_3.getString());
    FIX::LegSymbol LegSymbol_3("STRING_1843076223");
    noLegs_0_0.set(LegSymbol_3);
    InstrumentLeg_3.insert(LegSymbol_3.getString());
    FIX::LegSymbolSfx LegSymbolSfx_3("STRING_1043638866");
    noLegs_0_0.set(LegSymbolSfx_3);
    InstrumentLeg_3.insert(LegSymbolSfx_3.getString());
    FIX::LegTimeUnit LegTimeUnit_3("STRING_572196307");
    noLegs_0_0.set(LegTimeUnit_3);
    InstrumentLeg_3.insert(LegTimeUnit_3.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_3("STRING_1691405909");
    noLegs_0_0.set(LegUnitOfMeasure_3);
    InstrumentLeg_3.insert(LegUnitOfMeasure_3.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_3;
    LegUnitOfMeasureQty_3.setString("13971440");
    noLegs_0_0.set(LegUnitOfMeasureQty_3);
    InstrumentLeg_3.insert(LegUnitOfMeasureQty_3.getString());
    all_values.push_back(InstrumentLeg_3);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_5;
      FIX::LegSecurityAltID LegSecurityAltID_5("STRING_1520055497");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_5);
      LegSecAltIDGrp_NoLegSecurityAltID_5.insert(LegSecurityAltID_5.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_5("STRING_1929624886");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_5);
      LegSecAltIDGrp_NoLegSecurityAltID_5.insert(LegSecurityAltIDSource_5.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_5);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_3;
  FIX::AttachmentPoint AttachmentPoint_3;
  AttachmentPoint_3.setString("84.770000");
  msg.set(AttachmentPoint_3);
  Instrument_3.insert(AttachmentPoint_3.getString());
  FIX::CFICode CFICode_3("STRING_1343033428");
  msg.set(CFICode_3);
  Instrument_3.insert(CFICode_3.getString());
  FIX::CPProgram CPProgram_3(1);
  msg.set(CPProgram_3);
  Instrument_3.insert(CPProgram_3.getString());
  FIX::CPRegType CPRegType_3("STRING_1677290113");
  msg.set(CPRegType_3);
  Instrument_3.insert(CPRegType_3.getString());
  FIX::CapPrice CapPrice_3;
  CapPrice_3.setString("15739065");
  msg.set(CapPrice_3);
  Instrument_3.insert(CapPrice_3.getString());
  FIX::ContractMultiplier ContractMultiplier_3;
  ContractMultiplier_3.setString("2173249");
  msg.set(ContractMultiplier_3);
  Instrument_3.insert(ContractMultiplier_3.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_3(2);
  msg.set(ContractMultiplierUnit_3);
  Instrument_3.insert(ContractMultiplierUnit_3.getString());
  FIX::ContractSettlMonth ContractSettlMonth_3("MONTHYEAR_1442611769");
  msg.set(ContractSettlMonth_3);
  Instrument_3.insert(ContractSettlMonth_3.getString());
  FIX::CountryOfIssue CountryOfIssue_3("COUNTRY_437366588");
  msg.set(CountryOfIssue_3);
  Instrument_3.insert(CountryOfIssue_3.getString());
  FIX::CouponPaymentDate CouponPaymentDate_3("LOCALMKTDATE_1523148721");
  msg.set(CouponPaymentDate_3);
  Instrument_3.insert(CouponPaymentDate_3.getString());
  FIX::CouponRate CouponRate_3;
  CouponRate_3.setString("97.600000");
  msg.set(CouponRate_3);
  Instrument_3.insert(CouponRate_3.getString());
  FIX::CreditRating CreditRating_3("STRING_653694996");
  msg.set(CreditRating_3);
  Instrument_3.insert(CreditRating_3.getString());
  FIX::DatedDate DatedDate_3("LOCALMKTDATE_542907797");
  msg.set(DatedDate_3);
  Instrument_3.insert(DatedDate_3.getString());
  FIX::DetachmentPoint DetachmentPoint_3;
  DetachmentPoint_3.setString("94.480000");
  msg.set(DetachmentPoint_3);
  Instrument_3.insert(DetachmentPoint_3.getString());
  FIX::EncodedIssuer EncodedIssuer_3("DATA_1677234002");
  msg.set(EncodedIssuer_3);
  Instrument_3.insert(EncodedIssuer_3.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_3(563807099);
  msg.set(EncodedIssuerLen_3);
  Instrument_3.insert(EncodedIssuerLen_3.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_3("DATA_2027988081");
  msg.set(EncodedSecurityDesc_3);
  Instrument_3.insert(EncodedSecurityDesc_3.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_3(941014110);
  msg.set(EncodedSecurityDescLen_3);
  Instrument_3.insert(EncodedSecurityDescLen_3.getString());
  FIX::ExerciseStyle ExerciseStyle_3(2);
  msg.set(ExerciseStyle_3);
  Instrument_3.insert(ExerciseStyle_3.getString());
  FIX::Factor Factor_3;
  Factor_3.setString("6405806");
  msg.set(Factor_3);
  Instrument_3.insert(Factor_3.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_3(false);
  msg.set(FlexProductEligibilityIndicator_3);
  Instrument_3.insert(FlexProductEligibilityIndicator_3.getString());
  FIX::FlexibleIndicator FlexibleIndicator_3(false);
  msg.set(FlexibleIndicator_3);
  Instrument_3.insert(FlexibleIndicator_3.getString());
  FIX::FloorPrice FloorPrice_3;
  FloorPrice_3.setString("18653888");
  msg.set(FloorPrice_3);
  Instrument_3.insert(FloorPrice_3.getString());
  FIX::FlowScheduleType FlowScheduleType_3(0);
  msg.set(FlowScheduleType_3);
  Instrument_3.insert(FlowScheduleType_3.getString());
  FIX::InstrRegistry InstrRegistry_3("STRING_375166099");
  msg.set(InstrRegistry_3);
  Instrument_3.insert(InstrRegistry_3.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_3('2');
  msg.set(InstrmtAssignmentMethod_3);
  Instrument_3.insert(InstrmtAssignmentMethod_3.getString());
  FIX::InterestAccrualDate InterestAccrualDate_3("LOCALMKTDATE_894411561");
  msg.set(InterestAccrualDate_3);
  Instrument_3.insert(InterestAccrualDate_3.getString());
  FIX::IssueDate IssueDate_3("LOCALMKTDATE_1772310163");
  msg.set(IssueDate_3);
  Instrument_3.insert(IssueDate_3.getString());
  FIX::Issuer Issuer_3("STRING_866245136");
  msg.set(Issuer_3);
  Instrument_3.insert(Issuer_3.getString());
  FIX::ListMethod ListMethod_3(1);
  msg.set(ListMethod_3);
  Instrument_3.insert(ListMethod_3.getString());
  FIX::LocaleOfIssue LocaleOfIssue_3("STRING_1554451401");
  msg.set(LocaleOfIssue_3);
  Instrument_3.insert(LocaleOfIssue_3.getString());
  FIX::MaturityDate MaturityDate_3("LOCALMKTDATE_521629966");
  msg.set(MaturityDate_3);
  Instrument_3.insert(MaturityDate_3.getString());
  FIX::MaturityMonthYear MaturityMonthYear_3("MONTHYEAR_1610016839");
  msg.set(MaturityMonthYear_3);
  Instrument_3.insert(MaturityMonthYear_3.getString());
  FIX::MaturityTime MaturityTime_3("TZTIMEONLY_1461532520");
  msg.set(MaturityTime_3);
  Instrument_3.insert(MaturityTime_3.getString());
  FIX::MinPriceIncrement MinPriceIncrement_3;
  MinPriceIncrement_3.setString("514364");
  msg.set(MinPriceIncrement_3);
  Instrument_3.insert(MinPriceIncrement_3.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_3;
  MinPriceIncrementAmount_3.setString("10364397");
  msg.set(MinPriceIncrementAmount_3);
  Instrument_3.insert(MinPriceIncrementAmount_3.getString());
  FIX::NTPositionLimit NTPositionLimit_3(1678857435);
  msg.set(NTPositionLimit_3);
  Instrument_3.insert(NTPositionLimit_3.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_3;
  NotionalPercentageOutstanding_3.setString("9.930000");
  msg.set(NotionalPercentageOutstanding_3);
  Instrument_3.insert(NotionalPercentageOutstanding_3.getString());
  FIX::OptAttribute OptAttribute_3('3');
  msg.set(OptAttribute_3);
  Instrument_3.insert(OptAttribute_3.getString());
  FIX::OptPayoutAmount OptPayoutAmount_3;
  OptPayoutAmount_3.setString("21162240");
  msg.set(OptPayoutAmount_3);
  Instrument_3.insert(OptPayoutAmount_3.getString());
  FIX::OptPayoutType OptPayoutType_3(2);
  msg.set(OptPayoutType_3);
  Instrument_3.insert(OptPayoutType_3.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_3;
  OriginalNotionalPercentageOutstanding_3.setString("39.940000");
  msg.set(OriginalNotionalPercentageOutstanding_3);
  Instrument_3.insert(OriginalNotionalPercentageOutstanding_3.getString());
  FIX::Pool Pool_3("STRING_622435372");
  msg.set(Pool_3);
  Instrument_3.insert(Pool_3.getString());
  FIX::PositionLimit PositionLimit_3(515533864);
  msg.set(PositionLimit_3);
  Instrument_3.insert(PositionLimit_3.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_3("STRING_INT");
  msg.set(PriceQuoteMethod_3);
  Instrument_3.insert(PriceQuoteMethod_3.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_3("STRING_152185726");
  msg.set(PriceUnitOfMeasure_3);
  Instrument_3.insert(PriceUnitOfMeasure_3.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_3;
  PriceUnitOfMeasureQty_3.setString("10793409");
  msg.set(PriceUnitOfMeasureQty_3);
  Instrument_3.insert(PriceUnitOfMeasureQty_3.getString());
  FIX::Product Product_3(8);
  msg.set(Product_3);
  Instrument_3.insert(Product_3.getString());
  FIX::ProductComplex ProductComplex_3("STRING_1093199836");
  msg.set(ProductComplex_3);
  Instrument_3.insert(ProductComplex_3.getString());
  FIX::PutOrCall PutOrCall_3(1);
  msg.set(PutOrCall_3);
  Instrument_3.insert(PutOrCall_3.getString());
  FIX::RedemptionDate RedemptionDate_3("LOCALMKTDATE_1948118487");
  msg.set(RedemptionDate_3);
  Instrument_3.insert(RedemptionDate_3.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_3("STRING_600612913");
  msg.set(RepoCollateralSecurityType_3);
  Instrument_3.insert(RepoCollateralSecurityType_3.getString());
  FIX::RepurchaseRate RepurchaseRate_3;
  RepurchaseRate_3.setString("17.680000");
  msg.set(RepurchaseRate_3);
  Instrument_3.insert(RepurchaseRate_3.getString());
  FIX::RepurchaseTerm RepurchaseTerm_3(1666023728);
  msg.set(RepurchaseTerm_3);
  Instrument_3.insert(RepurchaseTerm_3.getString());
  FIX::RestructuringType RestructuringType_3("STRING_MR");
  msg.set(RestructuringType_3);
  Instrument_3.insert(RestructuringType_3.getString());
  FIX::SecurityDesc SecurityDesc_3("STRING_15774220");
  msg.set(SecurityDesc_3);
  Instrument_3.insert(SecurityDesc_3.getString());
  FIX::SecurityExchange SecurityExchange_3("EXCHANGE_1956125275");
  msg.set(SecurityExchange_3);
  Instrument_3.insert(SecurityExchange_3.getString());
  FIX::SecurityGroup SecurityGroup_3("STRING_698030126");
  msg.set(SecurityGroup_3);
  Instrument_3.insert(SecurityGroup_3.getString());
  FIX::SecurityID SecurityID_3("STRING_1788084383");
  msg.set(SecurityID_3);
  Instrument_3.insert(SecurityID_3.getString());
  FIX::SecurityIDSource SecurityIDSource_3("STRING_3");
  msg.set(SecurityIDSource_3);
  Instrument_3.insert(SecurityIDSource_3.getString());
  FIX::SecurityStatus SecurityStatus_3("STRING_2");
  msg.set(SecurityStatus_3);
  Instrument_3.insert(SecurityStatus_3.getString());
  FIX::SecuritySubType SecuritySubType_3("STRING_1195052137");
  msg.set(SecuritySubType_3);
  Instrument_3.insert(SecuritySubType_3.getString());
  FIX::SecurityType SecurityType_3("STRING_CTB");
  msg.set(SecurityType_3);
  Instrument_3.insert(SecurityType_3.getString());
  FIX::Seniority Seniority_3("STRING_SR");
  msg.set(Seniority_3);
  Instrument_3.insert(Seniority_3.getString());
  FIX::SettlMethod SettlMethod_3('P');
  msg.set(SettlMethod_3);
  Instrument_3.insert(SettlMethod_3.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_3("STRING_1247953161");
  msg.set(SettleOnOpenFlag_3);
  Instrument_3.insert(SettleOnOpenFlag_3.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_3("STRING_1463986490");
  msg.set(StateOrProvinceOfIssue_3);
  Instrument_3.insert(StateOrProvinceOfIssue_3.getString());
  FIX::StrikeCurrency StrikeCurrency_3("GBP");
  msg.set(StrikeCurrency_3);
  Instrument_3.insert(StrikeCurrency_3.getString());
  FIX::StrikeMultiplier StrikeMultiplier_3;
  StrikeMultiplier_3.setString("17955543");
  msg.set(StrikeMultiplier_3);
  Instrument_3.insert(StrikeMultiplier_3.getString());
  FIX::StrikePrice StrikePrice_3;
  StrikePrice_3.setString("92151");
  msg.set(StrikePrice_3);
  Instrument_3.insert(StrikePrice_3.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_3(2);
  msg.set(StrikePriceBoundaryMethod_3);
  Instrument_3.insert(StrikePriceBoundaryMethod_3.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_3;
  StrikePriceBoundaryPrecision_3.setString("83.660000");
  msg.set(StrikePriceBoundaryPrecision_3);
  Instrument_3.insert(StrikePriceBoundaryPrecision_3.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_3(1);
  msg.set(StrikePriceDeterminationMethod_3);
  Instrument_3.insert(StrikePriceDeterminationMethod_3.getString());
  FIX::StrikeValue StrikeValue_3;
  StrikeValue_3.setString("1855904");
  msg.set(StrikeValue_3);
  Instrument_3.insert(StrikeValue_3.getString());
  FIX::Symbol Symbol_3("STRING_1235988160");
  msg.set(Symbol_3);
  Instrument_3.insert(Symbol_3.getString());
  FIX::SymbolSfx SymbolSfx_3("STRING_CD");
  msg.set(SymbolSfx_3);
  Instrument_3.insert(SymbolSfx_3.getString());
  FIX::TimeUnit TimeUnit_3("STRING_H");
  msg.set(TimeUnit_3);
  Instrument_3.insert(TimeUnit_3.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_3(1);
  msg.set(UnderlyingPriceDeterminationMethod_3);
  Instrument_3.insert(UnderlyingPriceDeterminationMethod_3.getString());
  FIX::UnitOfMeasure UnitOfMeasure_3("STRING_tn");
  msg.set(UnitOfMeasure_3);
  Instrument_3.insert(UnitOfMeasure_3.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_3;
  UnitOfMeasureQty_3.setString("15740122");
  msg.set(UnitOfMeasureQty_3);
  Instrument_3.insert(UnitOfMeasureQty_3.getString());
  FIX::ValuationMethod ValuationMethod_3("STRING_FUTDA");
  msg.set(ValuationMethod_3);
  Instrument_3.insert(ValuationMethod_3.getString());
  all_values.push_back(Instrument_3);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_5;
    FIX::ComplexEventCondition ComplexEventCondition_5(2);
    noComplexEvents_0_0.set(ComplexEventCondition_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventCondition_5.getString());
    FIX::ComplexEventPrice ComplexEventPrice_5;
    ComplexEventPrice_5.setString("18627009");
    noComplexEvents_0_0.set(ComplexEventPrice_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPrice_5.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_5(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceBoundaryMethod_5.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_5;
    ComplexEventPriceBoundaryPrecision_5.setString("46.290000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceBoundaryPrecision_5.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_5(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceTimeType_5.getString());
    FIX::ComplexEventType ComplexEventType_5(7);
    noComplexEvents_0_0.set(ComplexEventType_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventType_5.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_5;
    ComplexOptPayoutAmount_5.setString("8709953");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexOptPayoutAmount_5.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_5);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_10;
      FIX::ComplexEventEndDate ComplexEventEndDate_10(FIX::UTCTIMESTAMP(14, 49, 21, 3, 32005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_10);
      ComplexEventDates_NoComplexEventDates_10.insert(ComplexEventEndDate_10.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_10(FIX::UTCTIMESTAMP(8, 15, 51, 18, 22013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_10);
      ComplexEventDates_NoComplexEventDates_10.insert(ComplexEventStartDate_10.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_10);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_17;
        FIX::ComplexEventEndTime ComplexEventEndTime_17(FIX::UTCTIMEONLY(21, 2, 13));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_17);
        ComplexEventTimes_NoComplexEventTimes_17.insert(ComplexEventEndTime_17.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_17(FIX::UTCTIMEONLY(15, 1, 54));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_17);
        ComplexEventTimes_NoComplexEventTimes_17.insert(ComplexEventStartTime_17.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_17);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_11;
      FIX::ComplexEventEndDate ComplexEventEndDate_11(FIX::UTCTIMESTAMP(0, 10, 34, 15, 102011));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_11);
      ComplexEventDates_NoComplexEventDates_11.insert(ComplexEventEndDate_11.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_11(FIX::UTCTIMESTAMP(17, 53, 31, 18, 52015));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_11);
      ComplexEventDates_NoComplexEventDates_11.insert(ComplexEventStartDate_11.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_11);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_18;
        FIX::ComplexEventEndTime ComplexEventEndTime_18(FIX::UTCTIMEONLY(22, 56, 59));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_18);
        ComplexEventTimes_NoComplexEventTimes_18.insert(ComplexEventEndTime_18.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_18(FIX::UTCTIMEONLY(9, 46, 44));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_18);
        ComplexEventTimes_NoComplexEventTimes_18.insert(ComplexEventStartTime_18.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_18);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_19;
        FIX::ComplexEventEndTime ComplexEventEndTime_19(FIX::UTCTIMEONLY(8, 38, 0));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_19);
        ComplexEventTimes_NoComplexEventTimes_19.insert(ComplexEventEndTime_19.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_19(FIX::UTCTIMEONLY(5, 1, 54));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_19);
        ComplexEventTimes_NoComplexEventTimes_19.insert(ComplexEventStartTime_19.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_19);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_6;
    FIX::ComplexEventCondition ComplexEventCondition_6(2);
    noComplexEvents_0_1.set(ComplexEventCondition_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventCondition_6.getString());
    FIX::ComplexEventPrice ComplexEventPrice_6;
    ComplexEventPrice_6.setString("15719962");
    noComplexEvents_0_1.set(ComplexEventPrice_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPrice_6.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_6(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceBoundaryMethod_6.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_6;
    ComplexEventPriceBoundaryPrecision_6.setString("42.110000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceBoundaryPrecision_6.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_6(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceTimeType_6.getString());
    FIX::ComplexEventType ComplexEventType_6(6);
    noComplexEvents_0_1.set(ComplexEventType_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventType_6.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_6;
    ComplexOptPayoutAmount_6.setString("4786968");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexOptPayoutAmount_6.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_6);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_12;
      FIX::ComplexEventEndDate ComplexEventEndDate_12(FIX::UTCTIMESTAMP(7, 19, 28, 11, 92003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_12);
      ComplexEventDates_NoComplexEventDates_12.insert(ComplexEventEndDate_12.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_12(FIX::UTCTIMESTAMP(18, 5, 42, 14, 72016));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_12);
      ComplexEventDates_NoComplexEventDates_12.insert(ComplexEventStartDate_12.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_12);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_20;
        FIX::ComplexEventEndTime ComplexEventEndTime_20(FIX::UTCTIMEONLY(16, 8, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_20);
        ComplexEventTimes_NoComplexEventTimes_20.insert(ComplexEventEndTime_20.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_20(FIX::UTCTIMEONLY(17, 46, 46));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_20);
        ComplexEventTimes_NoComplexEventTimes_20.insert(ComplexEventStartTime_20.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_20);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_13;
      FIX::ComplexEventEndDate ComplexEventEndDate_13(FIX::UTCTIMESTAMP(3, 34, 2, 24, 92013));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_13);
      ComplexEventDates_NoComplexEventDates_13.insert(ComplexEventEndDate_13.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_13(FIX::UTCTIMESTAMP(10, 32, 39, 23, 92005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_13);
      ComplexEventDates_NoComplexEventDates_13.insert(ComplexEventStartDate_13.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_13);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_21;
        FIX::ComplexEventEndTime ComplexEventEndTime_21(FIX::UTCTIMEONLY(6, 34, 25));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_21);
        ComplexEventTimes_NoComplexEventTimes_21.insert(ComplexEventEndTime_21.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_21(FIX::UTCTIMEONLY(20, 45, 59));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_21);
        ComplexEventTimes_NoComplexEventTimes_21.insert(ComplexEventStartTime_21.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_21);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_22;
        FIX::ComplexEventEndTime ComplexEventEndTime_22(FIX::UTCTIMEONLY(18, 59, 2));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_22);
        ComplexEventTimes_NoComplexEventTimes_22.insert(ComplexEventEndTime_22.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_22(FIX::UTCTIMEONLY(9, 48, 0));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_22);
        ComplexEventTimes_NoComplexEventTimes_22.insert(ComplexEventStartTime_22.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_22);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_7;
    FIX::ComplexEventCondition ComplexEventCondition_7(1);
    noComplexEvents_0_2.set(ComplexEventCondition_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventCondition_7.getString());
    FIX::ComplexEventPrice ComplexEventPrice_7;
    ComplexEventPrice_7.setString("21308121");
    noComplexEvents_0_2.set(ComplexEventPrice_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPrice_7.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_7(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceBoundaryMethod_7.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_7;
    ComplexEventPriceBoundaryPrecision_7.setString("71.860000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceBoundaryPrecision_7.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_7(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceTimeType_7.getString());
    FIX::ComplexEventType ComplexEventType_7(8);
    noComplexEvents_0_2.set(ComplexEventType_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventType_7.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_7;
    ComplexOptPayoutAmount_7.setString("13938740");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexOptPayoutAmount_7.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_7);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_14;
      FIX::ComplexEventEndDate ComplexEventEndDate_14(FIX::UTCTIMESTAMP(20, 47, 52, 4, 42014));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_14);
      ComplexEventDates_NoComplexEventDates_14.insert(ComplexEventEndDate_14.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_14(FIX::UTCTIMESTAMP(1, 46, 4, 17, 122007));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_14);
      ComplexEventDates_NoComplexEventDates_14.insert(ComplexEventStartDate_14.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_14);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_23;
        FIX::ComplexEventEndTime ComplexEventEndTime_23(FIX::UTCTIMEONLY(11, 56, 31));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_23);
        ComplexEventTimes_NoComplexEventTimes_23.insert(ComplexEventEndTime_23.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_23(FIX::UTCTIMEONLY(9, 11, 25));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_23);
        ComplexEventTimes_NoComplexEventTimes_23.insert(ComplexEventStartTime_23.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_23);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_24;
        FIX::ComplexEventEndTime ComplexEventEndTime_24(FIX::UTCTIMEONLY(19, 44, 23));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_24);
        ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventEndTime_24.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_24(FIX::UTCTIMEONLY(10, 55, 0));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_24);
        ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventStartTime_24.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_24);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_25;
        FIX::ComplexEventEndTime ComplexEventEndTime_25(FIX::UTCTIMEONLY(3, 48, 19));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_25);
        ComplexEventTimes_NoComplexEventTimes_25.insert(ComplexEventEndTime_25.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_25(FIX::UTCTIMEONLY(7, 32, 34));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_25);
        ComplexEventTimes_NoComplexEventTimes_25.insert(ComplexEventStartTime_25.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_25);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_15;
      FIX::ComplexEventEndDate ComplexEventEndDate_15(FIX::UTCTIMESTAMP(18, 38, 25, 13, 82002));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_15);
      ComplexEventDates_NoComplexEventDates_15.insert(ComplexEventEndDate_15.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_15(FIX::UTCTIMESTAMP(19, 2, 13, 24, 122004));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_15);
      ComplexEventDates_NoComplexEventDates_15.insert(ComplexEventStartDate_15.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_15);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_26;
        FIX::ComplexEventEndTime ComplexEventEndTime_26(FIX::UTCTIMEONLY(12, 50, 3));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventEndTime_26.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_26(FIX::UTCTIMEONLY(0, 58, 28));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventStartTime_26.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_26);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_16;
      FIX::ComplexEventEndDate ComplexEventEndDate_16(FIX::UTCTIMESTAMP(5, 16, 55, 24, 42009));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_16);
      ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventEndDate_16.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_16(FIX::UTCTIMESTAMP(23, 38, 24, 25, 42014));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_16);
      ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventStartDate_16.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_16);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_27;
        FIX::ComplexEventEndTime ComplexEventEndTime_27(FIX::UTCTIMEONLY(19, 45, 46));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_27);
        ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventEndTime_27.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_27(FIX::UTCTIMEONLY(0, 3, 1));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_27);
        ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventStartTime_27.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_27);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_28;
        FIX::ComplexEventEndTime ComplexEventEndTime_28(FIX::UTCTIMEONLY(15, 43, 43));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_28);
        ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventEndTime_28.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_28(FIX::UTCTIMEONLY(20, 34, 35));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_28);
        ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventStartTime_28.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_28);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_6;
    FIX::EventDate EventDate_6("LOCALMKTDATE_1259643195");
    noEvents_0_0.set(EventDate_6);
    EvntGrp_NoEvents_6.insert(EventDate_6.getString());
    FIX::EventPx EventPx_6;
    EventPx_6.setString("19093727");
    noEvents_0_0.set(EventPx_6);
    EvntGrp_NoEvents_6.insert(EventPx_6.getString());
    FIX::EventText EventText_6("STRING_785014139");
    noEvents_0_0.set(EventText_6);
    EvntGrp_NoEvents_6.insert(EventText_6.getString());
    FIX::EventTime EventTime_6(FIX::UTCTIMESTAMP(11, 19, 30, 3, 22007));
    noEvents_0_0.set(EventTime_6);
    EvntGrp_NoEvents_6.insert(EventTime_6.getString());
    FIX::EventType EventType_6(9);
    noEvents_0_0.set(EventType_6);
    EvntGrp_NoEvents_6.insert(EventType_6.getString());
    all_values.push_back(EvntGrp_NoEvents_6);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_5;
    FIX::InstrumentPartyID InstrumentPartyID_5("STRING_909532531");
    noInstrumentParties_0_0.set(InstrumentPartyID_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyID_5.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_5('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyIDSource_5.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_5(365112554);
    noInstrumentParties_0_0.set(InstrumentPartyRole_5);
    InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyRole_5.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_5);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9;
      FIX::InstrumentPartySubID InstrumentPartySubID_9("STRING_2112886828");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_9);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9.insert(InstrumentPartySubID_9.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_9(1130648940);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_9);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9.insert(InstrumentPartySubIDType_9.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_6;
    FIX::InstrumentPartyID InstrumentPartyID_6("STRING_2133380545");
    noInstrumentParties_0_1.set(InstrumentPartyID_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyID_6.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_6('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyIDSource_6.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_6(1974008943);
    noInstrumentParties_0_1.set(InstrumentPartyRole_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyRole_6.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_6);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10;
      FIX::InstrumentPartySubID InstrumentPartySubID_10("STRING_645397740");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_10);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10.insert(InstrumentPartySubID_10.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_10(1840706734);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_10);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10.insert(InstrumentPartySubIDType_10.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11;
      FIX::InstrumentPartySubID InstrumentPartySubID_11("STRING_667508754");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_11);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11.insert(InstrumentPartySubID_11.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_11(1377743383);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_11);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11.insert(InstrumentPartySubIDType_11.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_8;
    FIX::SecurityAltID SecurityAltID_8("STRING_321812910");
    noSecurityAltID_0_0.set(SecurityAltID_8);
    SecAltIDGrp_NoSecurityAltID_8.insert(SecurityAltID_8.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_8("STRING_1641445397");
    noSecurityAltID_0_0.set(SecurityAltIDSource_8);
    SecAltIDGrp_NoSecurityAltID_8.insert(SecurityAltIDSource_8.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_8);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_6;
  FIX::SecurityXML SecurityXML_7("XMLDATA_1657897441");
  msg.set(SecurityXML_7);
  FIX::SecurityXMLLen SecurityXMLLen_3(1440846942);
  msg.set(SecurityXMLLen_3);
  FIX::SecurityXMLSchema SecurityXMLSchema_3("STRING_753604945");
  msg.set(SecurityXMLSchema_3);
  SecurityXML_6.insert(SecurityXMLSchema_3.getString());
  all_values.push_back(SecurityXML_6);

  // InstrumentExtension
  multiset<string> InstrumentExtension_0;
  FIX::DeliveryForm DeliveryForm_0(2);
  msg.set(DeliveryForm_0);
  InstrumentExtension_0.insert(DeliveryForm_0.getString());
  FIX::PctAtRisk PctAtRisk_0;
  PctAtRisk_0.setString("74.340000");
  msg.set(PctAtRisk_0);
  InstrumentExtension_0.insert(PctAtRisk_0.getString());
  all_values.push_back(InstrumentExtension_0);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_0;
    FIX::InstrAttribType InstrAttribType_0(5);
    noInstrAttrib_0_0.set(InstrAttribType_0);
    AttrbGrp_NoInstrAttrib_0.insert(InstrAttribType_0.getString());
    FIX::InstrAttribValue InstrAttribValue_0("STRING_828964133");
    noInstrAttrib_0_0.set(InstrAttribValue_0);
    AttrbGrp_NoInstrAttrib_0.insert(InstrAttribValue_0.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_0);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_1;
    FIX::InstrAttribType InstrAttribType_1(24);
    noInstrAttrib_0_1.set(InstrAttribType_1);
    AttrbGrp_NoInstrAttrib_1.insert(InstrAttribType_1.getString());
    FIX::InstrAttribValue InstrAttribValue_1("STRING_2070403123");
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
    FIX::ClOrdID ClOrdID_0("STRING_1740529998");
    noOrders_0_0.set(ClOrdID_0);
    OrdAllocGrp_NoOrders_0.insert(ClOrdID_0.getString());
    FIX::ListID ListID_0("STRING_1548990523");
    noOrders_0_0.set(ListID_0);
    OrdAllocGrp_NoOrders_0.insert(ListID_0.getString());
    FIX::OrderAvgPx OrderAvgPx_0;
    OrderAvgPx_0.setString("20639262");
    noOrders_0_0.set(OrderAvgPx_0);
    OrdAllocGrp_NoOrders_0.insert(OrderAvgPx_0.getString());
    FIX::OrderBookingQty OrderBookingQty_0;
    OrderBookingQty_0.setString("5025788");
    noOrders_0_0.set(OrderBookingQty_0);
    OrdAllocGrp_NoOrders_0.insert(OrderBookingQty_0.getString());
    FIX::OrderID OrderID_0("STRING_129837678");
    noOrders_0_0.set(OrderID_0);
    OrdAllocGrp_NoOrders_0.insert(OrderID_0.getString());
    FIX::OrderQty OrderQty_0;
    OrderQty_0.setString("2815551");
    noOrders_0_0.set(OrderQty_0);
    OrdAllocGrp_NoOrders_0.insert(OrderQty_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_0("STRING_828639071");
    noOrders_0_0.set(SecondaryClOrdID_0);
    OrdAllocGrp_NoOrders_0.insert(SecondaryClOrdID_0.getString());
    FIX::SecondaryOrderID SecondaryOrderID_0("STRING_95240858");
    noOrders_0_0.set(SecondaryOrderID_0);
    OrdAllocGrp_NoOrders_0.insert(SecondaryOrderID_0.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_0);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_0;
      FIX::Nested2PartyID Nested2PartyID_0("STRING_814535969");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyID_0.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_0('2');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyIDSource_0.getString());
      FIX::Nested2PartyRole Nested2PartyRole_0(1238729364);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyRole_0.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_0);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_0;
        FIX::Nested2PartySubID Nested2PartySubID_0("STRING_921106378");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_0);
        NstdPtys2SubGrp_NoNested2PartySubIDs_0.insert(Nested2PartySubID_0.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_0(931952451);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_0);
        NstdPtys2SubGrp_NoNested2PartySubIDs_0.insert(Nested2PartySubIDType_0.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_0);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_1;
        FIX::Nested2PartySubID Nested2PartySubID_1("STRING_1349912434");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_1);
        NstdPtys2SubGrp_NoNested2PartySubIDs_1.insert(Nested2PartySubID_1.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_1(151366114);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_1);
        NstdPtys2SubGrp_NoNested2PartySubIDs_1.insert(Nested2PartySubIDType_1.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_1);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_1;
      FIX::Nested2PartyID Nested2PartyID_1("STRING_469118056");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyID_1.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_1('1');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyIDSource_1.getString());
      FIX::Nested2PartyRole Nested2PartyRole_1(1792811511);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyRole_1.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_1);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_2;
        FIX::Nested2PartySubID Nested2PartySubID_2("STRING_965088639");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_2);
        NstdPtys2SubGrp_NoNested2PartySubIDs_2.insert(Nested2PartySubID_2.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_2(398932808);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_2);
        NstdPtys2SubGrp_NoNested2PartySubIDs_2.insert(Nested2PartySubIDType_2.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_2);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_3;
        FIX::Nested2PartySubID Nested2PartySubID_3("STRING_1399318366");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_3);
        NstdPtys2SubGrp_NoNested2PartySubIDs_3.insert(Nested2PartySubID_3.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_3(1043466073);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_3);
        NstdPtys2SubGrp_NoNested2PartySubIDs_3.insert(Nested2PartySubIDType_3.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_3);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_4;
        FIX::Nested2PartySubID Nested2PartySubID_4("STRING_1703784849");
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubID_4);
        NstdPtys2SubGrp_NoNested2PartySubIDs_4.insert(Nested2PartySubID_4.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_4(530215783);
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubIDType_4);
        NstdPtys2SubGrp_NoNested2PartySubIDs_4.insert(Nested2PartySubIDType_4.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_4);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_2;
      FIX::Nested2PartyID Nested2PartyID_2("STRING_1872430206");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyID_2.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_2('2');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyIDSource_2.getString());
      FIX::Nested2PartyRole Nested2PartyRole_2(453135258);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyRole_2.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_2);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_5;
        FIX::Nested2PartySubID Nested2PartySubID_5("STRING_1633438843");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_5);
        NstdPtys2SubGrp_NoNested2PartySubIDs_5.insert(Nested2PartySubID_5.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_5(2002125782);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_5);
        NstdPtys2SubGrp_NoNested2PartySubIDs_5.insert(Nested2PartySubIDType_5.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_5);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_6;
        FIX::Nested2PartySubID Nested2PartySubID_6("STRING_990101215");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_6);
        NstdPtys2SubGrp_NoNested2PartySubIDs_6.insert(Nested2PartySubID_6.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_6(2136017725);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_6);
        NstdPtys2SubGrp_NoNested2PartySubIDs_6.insert(Nested2PartySubIDType_6.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_6);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_3;
    FIX::PartyID PartyID_3("STRING_1271656343");
    noPartyIDs_0_0.set(PartyID_3);
    Parties_NoPartyIDs_3.insert(PartyID_3.getString());
    FIX::PartyIDSource PartyIDSource_3('A');
    noPartyIDs_0_0.set(PartyIDSource_3);
    Parties_NoPartyIDs_3.insert(PartyIDSource_3.getString());
    FIX::PartyRole PartyRole_3(53);
    noPartyIDs_0_0.set(PartyRole_3);
    Parties_NoPartyIDs_3.insert(PartyRole_3.getString());
    all_values.push_back(Parties_NoPartyIDs_3);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_8;
      FIX::PartySubID PartySubID_8("STRING_1631709117");
      noPartySubIDs_0_1_0.set(PartySubID_8);
      PtysSubGrp_NoPartySubIDs_8.insert(PartySubID_8.getString());
      FIX::PartySubIDType PartySubIDType_8(5);
      noPartySubIDs_0_1_0.set(PartySubIDType_8);
      PtysSubGrp_NoPartySubIDs_8.insert(PartySubIDType_8.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_8);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_9;
      FIX::PartySubID PartySubID_9("STRING_1775106129");
      noPartySubIDs_0_1_1.set(PartySubID_9);
      PtysSubGrp_NoPartySubIDs_9.insert(PartySubID_9.getString());
      FIX::PartySubIDType PartySubIDType_9(6);
      noPartySubIDs_0_1_1.set(PartySubIDType_9);
      PtysSubGrp_NoPartySubIDs_9.insert(PartySubIDType_9.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_9);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_10;
      FIX::PartySubID PartySubID_10("STRING_1276535688");
      noPartySubIDs_0_1_2.set(PartySubID_10);
      PtysSubGrp_NoPartySubIDs_10.insert(PartySubID_10.getString());
      FIX::PartySubIDType PartySubIDType_10(5);
      noPartySubIDs_0_1_2.set(PartySubIDType_10);
      PtysSubGrp_NoPartySubIDs_10.insert(PartySubIDType_10.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_10);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_4;
    FIX::PartyID PartyID_4("STRING_1516541584");
    noPartyIDs_0_1.set(PartyID_4);
    Parties_NoPartyIDs_4.insert(PartyID_4.getString());
    FIX::PartyIDSource PartyIDSource_4('G');
    noPartyIDs_0_1.set(PartyIDSource_4);
    Parties_NoPartyIDs_4.insert(PartyIDSource_4.getString());
    FIX::PartyRole PartyRole_4(9);
    noPartyIDs_0_1.set(PartyRole_4);
    Parties_NoPartyIDs_4.insert(PartyRole_4.getString());
    all_values.push_back(Parties_NoPartyIDs_4);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_11;
      FIX::PartySubID PartySubID_11("STRING_1073229665");
      noPartySubIDs_1_1_0.set(PartySubID_11);
      PtysSubGrp_NoPartySubIDs_11.insert(PartySubID_11.getString());
      FIX::PartySubIDType PartySubIDType_11(28);
      noPartySubIDs_1_1_0.set(PartySubIDType_11);
      PtysSubGrp_NoPartySubIDs_11.insert(PartySubIDType_11.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_11);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_12;
      FIX::PartySubID PartySubID_12("STRING_2005871920");
      noPartySubIDs_1_1_1.set(PartySubID_12);
      PtysSubGrp_NoPartySubIDs_12.insert(PartySubID_12.getString());
      FIX::PartySubIDType PartySubIDType_12(3);
      noPartySubIDs_1_1_1.set(PartySubIDType_12);
      PtysSubGrp_NoPartySubIDs_12.insert(PartySubIDType_12.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_12);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_5;
    FIX::PartyID PartyID_5("STRING_260059556");
    noPartyIDs_0_2.set(PartyID_5);
    Parties_NoPartyIDs_5.insert(PartyID_5.getString());
    FIX::PartyIDSource PartyIDSource_5('A');
    noPartyIDs_0_2.set(PartyIDSource_5);
    Parties_NoPartyIDs_5.insert(PartyIDSource_5.getString());
    FIX::PartyRole PartyRole_5(16);
    noPartyIDs_0_2.set(PartyRole_5);
    Parties_NoPartyIDs_5.insert(PartyRole_5.getString());
    all_values.push_back(Parties_NoPartyIDs_5);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_13;
      FIX::PartySubID PartySubID_13("STRING_626800904");
      noPartySubIDs_2_1_0.set(PartySubID_13);
      PtysSubGrp_NoPartySubIDs_13.insert(PartySubID_13.getString());
      FIX::PartySubIDType PartySubIDType_13(14);
      noPartySubIDs_2_1_0.set(PartySubIDType_13);
      PtysSubGrp_NoPartySubIDs_13.insert(PartySubIDType_13.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_13);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_0;
    FIX::PosAmt PosAmt_0;
    PosAmt_0.setString("17004595");
    noPosAmt_0_0.set(PosAmt_0);
    PositionAmountData_NoPosAmt_0.insert(PosAmt_0.getString());
    FIX::PosAmtType PosAmtType_0("STRING_ACPN");
    noPosAmt_0_0.set(PosAmtType_0);
    PositionAmountData_NoPosAmt_0.insert(PosAmtType_0.getString());
    FIX::PositionCurrency PositionCurrency_0("STRING_1098052732");
    noPosAmt_0_0.set(PositionCurrency_0);
    PositionAmountData_NoPosAmt_0.insert(PositionCurrency_0.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_0);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_1;
    FIX::PosAmt PosAmt_1;
    PosAmt_1.setString("5430771");
    noPosAmt_0_1.set(PosAmt_1);
    PositionAmountData_NoPosAmt_1.insert(PosAmt_1.getString());
    FIX::PosAmtType PosAmtType_1("STRING_DLV");
    noPosAmt_0_1.set(PosAmtType_1);
    PositionAmountData_NoPosAmt_1.insert(PosAmtType_1.getString());
    FIX::PositionCurrency PositionCurrency_1("STRING_1082532544");
    noPosAmt_0_1.set(PositionCurrency_1);
    PositionAmountData_NoPosAmt_1.insert(PositionCurrency_1.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_1);

    msg.addGroup(noPosAmt_0_1);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_0;
    FIX::RateSource RateSource_1(1);
    noRateSources_0_0.set(RateSource_1);
    RateSource_NoRateSources_0.insert(RateSource_1.getString());
    FIX::RateSourceType RateSourceType_0(1);
    noRateSources_0_0.set(RateSourceType_0);
    RateSource_NoRateSources_0.insert(RateSourceType_0.getString());
    FIX::ReferencePage ReferencePage_0("STRING_203626572");
    noRateSources_0_0.set(ReferencePage_0);
    RateSource_NoRateSources_0.insert(ReferencePage_0.getString());
    all_values.push_back(RateSource_NoRateSources_0);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_1;
    FIX::RateSource RateSource_2(99);
    noRateSources_0_1.set(RateSource_2);
    RateSource_NoRateSources_1.insert(RateSource_2.getString());
    FIX::RateSourceType RateSourceType_1(1);
    noRateSources_0_1.set(RateSourceType_1);
    RateSource_NoRateSources_1.insert(RateSourceType_1.getString());
    FIX::ReferencePage ReferencePage_1("STRING_1978732701");
    noRateSources_0_1.set(ReferencePage_1);
    RateSource_NoRateSources_1.insert(ReferencePage_1.getString());
    all_values.push_back(RateSource_NoRateSources_1);

    msg.addGroup(noRateSources_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_2;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_2;
    FIX::RateSource RateSource_3(0);
    noRateSources_0_2.set(RateSource_3);
    RateSource_NoRateSources_2.insert(RateSource_3.getString());
    FIX::RateSourceType RateSourceType_2(1);
    noRateSources_0_2.set(RateSourceType_2);
    RateSource_NoRateSources_2.insert(RateSourceType_2.getString());
    FIX::ReferencePage ReferencePage_2("STRING_390823985");
    noRateSources_0_2.set(ReferencePage_2);
    RateSource_NoRateSources_2.insert(ReferencePage_2.getString());
    all_values.push_back(RateSource_NoRateSources_2);

    msg.addGroup(noRateSources_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_0;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_0("CAN");
  msg.set(BenchmarkCurveCurrency_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurveCurrency_0.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_0("STRING_EUREPO");
  msg.set(BenchmarkCurveName_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurveName_0.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_0("STRING_1273730777");
  msg.set(BenchmarkCurvePoint_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurvePoint_0.getString());
  FIX::BenchmarkPrice BenchmarkPrice_0;
  BenchmarkPrice_0.setString("10003823");
  msg.set(BenchmarkPrice_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkPrice_0.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_0(280258163);
  msg.set(BenchmarkPriceType_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkPriceType_0.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_0("STRING_1132119050");
  msg.set(BenchmarkSecurityID_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkSecurityID_0.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_0("STRING_325061210");
  msg.set(BenchmarkSecurityIDSource_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkSecurityIDSource_0.getString());
  FIX::Spread Spread_0;
  Spread_0.setString("5403177");
  msg.set(Spread_0);
  SpreadOrBenchmarkCurveData_0.insert(Spread_0.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_0);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_0;
    FIX::StipulationType StipulationType_0("STRING_CUSTOMDATE");
    noStipulations_0_0.set(StipulationType_0);
    Stipulations_NoStipulations_0.insert(StipulationType_0.getString());
    FIX::StipulationValue StipulationValue_0("STRING_1330593059");
    noStipulations_0_0.set(StipulationValue_0);
    Stipulations_NoStipulations_0.insert(StipulationValue_0.getString());
    all_values.push_back(Stipulations_NoStipulations_0);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_1;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_1("DATA_127413758");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingIssuer_1.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_1(426520009);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingIssuerLen_1.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_1("DATA_66266549");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingSecurityDesc_1.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_1(534741474);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingSecurityDescLen_1.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_1;
    UnderlyingAdjustedQuantity_1.setString("15245727");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_1);
    UnderlyingInstrument_1.insert(UnderlyingAdjustedQuantity_1.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_1;
    UnderlyingAllocationPercent_1.setString("36.610000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_1);
    UnderlyingInstrument_1.insert(UnderlyingAllocationPercent_1.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_1;
    UnderlyingAttachmentPoint_1.setString("32.670000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_1);
    UnderlyingInstrument_1.insert(UnderlyingAttachmentPoint_1.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_1("STRING_459621638");
    noUnderlyings_0_0.set(UnderlyingCFICode_1);
    UnderlyingInstrument_1.insert(UnderlyingCFICode_1.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_1("STRING_276593469");
    noUnderlyings_0_0.set(UnderlyingCPProgram_1);
    UnderlyingInstrument_1.insert(UnderlyingCPProgram_1.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_1("STRING_2143638209");
    noUnderlyings_0_0.set(UnderlyingCPRegType_1);
    UnderlyingInstrument_1.insert(UnderlyingCPRegType_1.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_1;
    UnderlyingCapValue_1.setString("16218748");
    noUnderlyings_0_0.set(UnderlyingCapValue_1);
    UnderlyingInstrument_1.insert(UnderlyingCapValue_1.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_1;
    UnderlyingCashAmount_1.setString("4802200");
    noUnderlyings_0_0.set(UnderlyingCashAmount_1);
    UnderlyingInstrument_1.insert(UnderlyingCashAmount_1.getString());
    FIX::UnderlyingCashType UnderlyingCashType_1("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_1);
    UnderlyingInstrument_1.insert(UnderlyingCashType_1.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_1;
    UnderlyingContractMultiplier_1.setString("9920737");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_1);
    UnderlyingInstrument_1.insert(UnderlyingContractMultiplier_1.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_1(311469094);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_1);
    UnderlyingInstrument_1.insert(UnderlyingContractMultiplierUnit_1.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_1("COUNTRY_1557304532");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingCountryOfIssue_1.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_1("LOCALMKTDATE_1638808295");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_1);
    UnderlyingInstrument_1.insert(UnderlyingCouponPaymentDate_1.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_1;
    UnderlyingCouponRate_1.setString("30.790000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_1);
    UnderlyingInstrument_1.insert(UnderlyingCouponRate_1.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_1("STRING_1790252029");
    noUnderlyings_0_0.set(UnderlyingCreditRating_1);
    UnderlyingInstrument_1.insert(UnderlyingCreditRating_1.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_1("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_1);
    UnderlyingInstrument_1.insert(UnderlyingCurrency_1.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_1;
    UnderlyingCurrentValue_1.setString("9164991");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_1);
    UnderlyingInstrument_1.insert(UnderlyingCurrentValue_1.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_1;
    UnderlyingDetachmentPoint_1.setString("97.510000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_1);
    UnderlyingInstrument_1.insert(UnderlyingDetachmentPoint_1.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_1;
    UnderlyingDirtyPrice_1.setString("2545845");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_1);
    UnderlyingInstrument_1.insert(UnderlyingDirtyPrice_1.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_1;
    UnderlyingEndPrice_1.setString("20486182");
    noUnderlyings_0_0.set(UnderlyingEndPrice_1);
    UnderlyingInstrument_1.insert(UnderlyingEndPrice_1.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_1;
    UnderlyingEndValue_1.setString("7439209");
    noUnderlyings_0_0.set(UnderlyingEndValue_1);
    UnderlyingInstrument_1.insert(UnderlyingEndValue_1.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_1(794902288);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_1);
    UnderlyingInstrument_1.insert(UnderlyingExerciseStyle_1.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_1;
    UnderlyingFXRate_1.setString("19351079");
    noUnderlyings_0_0.set(UnderlyingFXRate_1);
    UnderlyingInstrument_1.insert(UnderlyingFXRate_1.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_1('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_1);
    UnderlyingInstrument_1.insert(UnderlyingFXRateCalc_1.getString());
    FIX::UnderlyingFactor UnderlyingFactor_1;
    UnderlyingFactor_1.setString("21254953");
    noUnderlyings_0_0.set(UnderlyingFactor_1);
    UnderlyingInstrument_1.insert(UnderlyingFactor_1.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_1(300914961);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_1);
    UnderlyingInstrument_1.insert(UnderlyingFlowScheduleType_1.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_1("STRING_77375958");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_1);
    UnderlyingInstrument_1.insert(UnderlyingInstrRegistry_1.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_1("LOCALMKTDATE_404531709");
    noUnderlyings_0_0.set(UnderlyingIssueDate_1);
    UnderlyingInstrument_1.insert(UnderlyingIssueDate_1.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_1("STRING_367181510");
    noUnderlyings_0_0.set(UnderlyingIssuer_1);
    UnderlyingInstrument_1.insert(UnderlyingIssuer_1.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_1("STRING_612117432");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingLocaleOfIssue_1.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_1("LOCALMKTDATE_1929104450");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityDate_1.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_1("MONTHYEAR_976525172");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityMonthYear_1.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_1("TZTIMEONLY_1542720700");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityTime_1.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_1;
    UnderlyingNotionalPercentageOutstanding_1.setString("24.400000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_1);
    UnderlyingInstrument_1.insert(UnderlyingNotionalPercentageOutstanding_1.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_1('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_1);
    UnderlyingInstrument_1.insert(UnderlyingOptAttribute_1.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_1;
    UnderlyingOriginalNotionalPercentageOutstanding_1.setString("52.610000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_1);
    UnderlyingInstrument_1.insert(UnderlyingOriginalNotionalPercentageOutstanding_1.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_1("STRING_1863117294");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_1);
    UnderlyingInstrument_1.insert(UnderlyingPriceUnitOfMeasure_1.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_1;
    UnderlyingPriceUnitOfMeasureQty_1.setString("17333386");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_1);
    UnderlyingInstrument_1.insert(UnderlyingPriceUnitOfMeasureQty_1.getString());
    FIX::UnderlyingProduct UnderlyingProduct_1(84806585);
    noUnderlyings_0_0.set(UnderlyingProduct_1);
    UnderlyingInstrument_1.insert(UnderlyingProduct_1.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_1(707707376);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_1);
    UnderlyingInstrument_1.insert(UnderlyingPutOrCall_1.getString());
    FIX::UnderlyingPx UnderlyingPx_1;
    UnderlyingPx_1.setString("20448077");
    noUnderlyings_0_0.set(UnderlyingPx_1);
    UnderlyingInstrument_1.insert(UnderlyingPx_1.getString());
    FIX::UnderlyingQty UnderlyingQty_1;
    UnderlyingQty_1.setString("16421111");
    noUnderlyings_0_0.set(UnderlyingQty_1);
    UnderlyingInstrument_1.insert(UnderlyingQty_1.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_1("LOCALMKTDATE_199032024");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_1);
    UnderlyingInstrument_1.insert(UnderlyingRedemptionDate_1.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_1("STRING_599617207");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_1);
    UnderlyingInstrument_1.insert(UnderlyingRepoCollateralSecurityType_1.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_1;
    UnderlyingRepurchaseRate_1.setString("94.980000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_1);
    UnderlyingInstrument_1.insert(UnderlyingRepurchaseRate_1.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_1(1764993038);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_1);
    UnderlyingInstrument_1.insert(UnderlyingRepurchaseTerm_1.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_1("STRING_573943611");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_1);
    UnderlyingInstrument_1.insert(UnderlyingRestructuringType_1.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_1("STRING_53895009");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityDesc_1.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_1("EXCHANGE_36369141");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityExchange_1.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_1("STRING_828528179");
    noUnderlyings_0_0.set(UnderlyingSecurityID_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityID_1.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_1("STRING_2102513217");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityIDSource_1.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_1("STRING_780290103");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_1);
    UnderlyingInstrument_1.insert(UnderlyingSecuritySubType_1.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_1("STRING_1623430467");
    noUnderlyings_0_0.set(UnderlyingSecurityType_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityType_1.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_1("STRING_1890137526");
    noUnderlyings_0_0.set(UnderlyingSeniority_1);
    UnderlyingInstrument_1.insert(UnderlyingSeniority_1.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_1("STRING_730252302");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_1);
    UnderlyingInstrument_1.insert(UnderlyingSettlMethod_1.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_1(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_1);
    UnderlyingInstrument_1.insert(UnderlyingSettlementType_1.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_1;
    UnderlyingStartValue_1.setString("435688");
    noUnderlyings_0_0.set(UnderlyingStartValue_1);
    UnderlyingInstrument_1.insert(UnderlyingStartValue_1.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_1("STRING_807628260");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingStateOrProvinceOfIssue_1.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_1("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_1);
    UnderlyingInstrument_1.insert(UnderlyingStrikeCurrency_1.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_1;
    UnderlyingStrikePrice_1.setString("14197456");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_1);
    UnderlyingInstrument_1.insert(UnderlyingStrikePrice_1.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_1("STRING_1787594678");
    noUnderlyings_0_0.set(UnderlyingSymbol_1);
    UnderlyingInstrument_1.insert(UnderlyingSymbol_1.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_1("STRING_1387275521");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_1);
    UnderlyingInstrument_1.insert(UnderlyingSymbolSfx_1.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_1("STRING_814982745");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_1);
    UnderlyingInstrument_1.insert(UnderlyingTimeUnit_1.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_1("STRING_2028837119");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_1);
    UnderlyingInstrument_1.insert(UnderlyingUnitOfMeasure_1.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_1;
    UnderlyingUnitOfMeasureQty_1.setString("4929105");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_1);
    UnderlyingInstrument_1.insert(UnderlyingUnitOfMeasureQty_1.getString());
    all_values.push_back(UnderlyingInstrument_1);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_2;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_2("STRING_1744470765");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_2);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_2.insert(UnderlyingSecurityAltID_2.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_2("STRING_78765548");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_2);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_2.insert(UnderlyingSecurityAltIDSource_2.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_3;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_3("STRING_291180943");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_3);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_3.insert(UnderlyingSecurityAltID_3.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_3("STRING_304694493");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_3);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_3.insert(UnderlyingSecurityAltIDSource_3.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_4;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_4("STRING_2123573324");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_4);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_4.insert(UnderlyingSecurityAltID_4.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_4("STRING_1933292060");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_4);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_4.insert(UnderlyingSecurityAltIDSource_4.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_3;
      FIX::UnderlyingStipType UnderlyingStipType_3("STRING_575706883");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_3);
      UnderlyingStipulations_NoUnderlyingStips_3.insert(UnderlyingStipType_3.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_3("STRING_1070687911");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_3);
      UnderlyingStipulations_NoUnderlyingStips_3.insert(UnderlyingStipValue_3.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_3);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_1;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_1("STRING_1149650495");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyID_1.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_1('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyIDSource_1.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_1(157605049);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyRole_1.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_1);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_3("STRING_1079612489");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_3);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3.insert(UnderlyingInstrumentPartySubID_3.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_3(937895152);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_3);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3.insert(UnderlyingInstrumentPartySubIDType_3.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_4("STRING_1454125494");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_4);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4.insert(UnderlyingInstrumentPartySubID_4.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_4(822266367);
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
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_2;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_2("STRING_1668147455");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyID_2.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_2('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyIDSource_2.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_2(865835206);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyRole_2.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_2);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_5("STRING_766574241");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_5);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5.insert(UnderlyingInstrumentPartySubID_5.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_5(1276585556);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_5);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5.insert(UnderlyingInstrumentPartySubIDType_5.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_0;
  FIX::Yield Yield_0;
  Yield_0.setString("77.600000");
  msg.set(Yield_0);
  YieldData_0.insert(Yield_0.getString());
  FIX::YieldCalcDate YieldCalcDate_0("LOCALMKTDATE_406685271");
  msg.set(YieldCalcDate_0);
  YieldData_0.insert(YieldCalcDate_0.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_0("LOCALMKTDATE_516377429");
  msg.set(YieldRedemptionDate_0);
  YieldData_0.insert(YieldRedemptionDate_0.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_0;
  YieldRedemptionPrice_0.setString("4155368");
  msg.set(YieldRedemptionPrice_0);
  YieldData_0.insert(YieldRedemptionPrice_0.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_0(288038742);
  msg.set(YieldRedemptionPriceType_0);
  YieldData_0.insert(YieldRedemptionPriceType_0.getString());
  FIX::YieldType YieldType_0("STRING_LONGAVGLIFE");
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
