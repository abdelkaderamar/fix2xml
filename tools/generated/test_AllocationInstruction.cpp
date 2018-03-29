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
  multiset<string> all_compo_names;
  multiset<string> AllocationInstruction_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_0;
  AccruedInterestAmt_0.setString("21119185");
  msg.set(AccruedInterestAmt_0);
  AllocationInstruction_0.insert(AccruedInterestAmt_0.getString());
  FIX::AccruedInterestRate AccruedInterestRate_0;
  AccruedInterestRate_0.setString("25.980000");
  msg.set(AccruedInterestRate_0);
  AllocationInstruction_0.insert(AccruedInterestRate_0.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_0(99);
  msg.set(AllocCancReplaceReason_0);
  AllocationInstruction_0.insert(AllocCancReplaceReason_0.getString());
  FIX::AllocID AllocID_0("STRING_715288338");
  msg.set(AllocID_0);
  AllocationInstruction_0.insert(AllocID_0.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_0(3);
  msg.set(AllocIntermedReqType_0);
  AllocationInstruction_0.insert(AllocIntermedReqType_0.getString());
  FIX::AllocLinkID AllocLinkID_0("STRING_1271626723");
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
  FIX::AutoAcceptIndicator AutoAcceptIndicator_0(false);
  msg.set(AutoAcceptIndicator_0);
  AllocationInstruction_0.insert(AutoAcceptIndicator_0.getString());
  FIX::AvgParPx AvgParPx_0;
  AvgParPx_0.setString("3100810");
  msg.set(AvgParPx_0);
  AllocationInstruction_0.insert(AvgParPx_0.getString());
  FIX::AvgPx AvgPx_0;
  AvgPx_0.setString("18306033");
  msg.set(AvgPx_0);
  AllocationInstruction_0.insert(AvgPx_0.getString());
  FIX::AvgPxIndicator AvgPxIndicator_0(0);
  msg.set(AvgPxIndicator_0);
  AllocationInstruction_0.insert(AvgPxIndicator_0.getString());
  FIX::AvgPxPrecision AvgPxPrecision_0(1609858356);
  msg.set(AvgPxPrecision_0);
  AllocationInstruction_0.insert(AvgPxPrecision_0.getString());
  FIX::BookingRefID BookingRefID_0("STRING_1628027653");
  msg.set(BookingRefID_0);
  AllocationInstruction_0.insert(BookingRefID_0.getString());
  FIX::BookingType BookingType_0(2);
  msg.set(BookingType_0);
  AllocationInstruction_0.insert(BookingType_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_1("LOCALMKTDATE_817202228");
  msg.set(ClearingBusinessDate_1);
  AllocationInstruction_0.insert(ClearingBusinessDate_1.getString());
  FIX::Concession Concession_0;
  Concession_0.setString("17933263");
  msg.set(Concession_0);
  AllocationInstruction_0.insert(Concession_0.getString());
  FIX::Currency Currency_1("EUR");
  msg.set(Currency_1);
  AllocationInstruction_0.insert(Currency_1.getString());
  FIX::CustOrderCapacity CustOrderCapacity_0(4);
  msg.set(CustOrderCapacity_0);
  AllocationInstruction_0.insert(CustOrderCapacity_0.getString());
  FIX::EncodedText EncodedText_1("DATA_401781626");
  msg.set(EncodedText_1);
  AllocationInstruction_0.insert(EncodedText_1.getString());
  FIX::EncodedTextLen EncodedTextLen_1(1439601494);
  msg.set(EncodedTextLen_1);
  AllocationInstruction_0.insert(EncodedTextLen_1.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_0;
  EndAccruedInterestAmt_0.setString("13245783");
  msg.set(EndAccruedInterestAmt_0);
  AllocationInstruction_0.insert(EndAccruedInterestAmt_0.getString());
  FIX::EndCash EndCash_0;
  EndCash_0.setString("16500909");
  msg.set(EndCash_0);
  AllocationInstruction_0.insert(EndCash_0.getString());
  FIX::GrossTradeAmt GrossTradeAmt_0;
  GrossTradeAmt_0.setString("14365992");
  msg.set(GrossTradeAmt_0);
  AllocationInstruction_0.insert(GrossTradeAmt_0.getString());
  FIX::InterestAtMaturity InterestAtMaturity_0;
  InterestAtMaturity_0.setString("8205040");
  msg.set(InterestAtMaturity_0);
  AllocationInstruction_0.insert(InterestAtMaturity_0.getString());
  FIX::LastFragment LastFragment_0(false);
  msg.set(LastFragment_0);
  AllocationInstruction_0.insert(LastFragment_0.getString());
  FIX::LastMkt LastMkt_1("EXCHANGE_347777914");
  msg.set(LastMkt_1);
  AllocationInstruction_0.insert(LastMkt_1.getString());
  FIX::LegalConfirm LegalConfirm_0(false);
  msg.set(LegalConfirm_0);
  AllocationInstruction_0.insert(LegalConfirm_0.getString());
  FIX::MatchType MatchType_0("STRING_A5");
  msg.set(MatchType_0);
  AllocationInstruction_0.insert(MatchType_0.getString());
  FIX::MessageEventSource MessageEventSource_0("STRING_1814270512");
  msg.set(MessageEventSource_0);
  AllocationInstruction_0.insert(MessageEventSource_0.getString());
  FIX::MultiLegReportingType MultiLegReportingType_0('2');
  msg.set(MultiLegReportingType_0);
  AllocationInstruction_0.insert(MultiLegReportingType_0.getString());
  FIX::NetMoney NetMoney_0;
  NetMoney_0.setString("8127765");
  msg.set(NetMoney_0);
  AllocationInstruction_0.insert(NetMoney_0.getString());
  FIX::NumDaysInterest NumDaysInterest_0(562579780);
  msg.set(NumDaysInterest_0);
  AllocationInstruction_0.insert(NumDaysInterest_0.getString());
  FIX::PositionEffect PositionEffect_0('C');
  msg.set(PositionEffect_0);
  AllocationInstruction_0.insert(PositionEffect_0.getString());
  FIX::PreviouslyReported PreviouslyReported_0(true);
  msg.set(PreviouslyReported_0);
  AllocationInstruction_0.insert(PreviouslyReported_0.getString());
  FIX::PriceType PriceType_0(10);
  msg.set(PriceType_0);
  AllocationInstruction_0.insert(PriceType_0.getString());
  FIX::QtyType QtyType_1(1);
  msg.set(QtyType_1);
  AllocationInstruction_0.insert(QtyType_1.getString());
  FIX::Quantity Quantity_1;
  Quantity_1.setString("4843815");
  msg.set(Quantity_1);
  AllocationInstruction_0.insert(Quantity_1.getString());
  FIX::RefAllocID RefAllocID_0("STRING_1154883775");
  msg.set(RefAllocID_0);
  AllocationInstruction_0.insert(RefAllocID_0.getString());
  FIX::ReversalIndicator ReversalIndicator_0(true);
  msg.set(ReversalIndicator_0);
  AllocationInstruction_0.insert(ReversalIndicator_0.getString());
  FIX::RndPx RndPx_0;
  RndPx_0.setString("1675013");
  msg.set(RndPx_0);
  AllocationInstruction_0.insert(RndPx_0.getString());
  FIX::SecondaryAllocID SecondaryAllocID_0("STRING_1239416605");
  msg.set(SecondaryAllocID_0);
  AllocationInstruction_0.insert(SecondaryAllocID_0.getString());
  FIX::SettlDate SettlDate_0("LOCALMKTDATE_1582085371");
  msg.set(SettlDate_0);
  AllocationInstruction_0.insert(SettlDate_0.getString());
  FIX::SettlType SettlType_0("STRING_6");
  msg.set(SettlType_0);
  AllocationInstruction_0.insert(SettlType_0.getString());
  FIX::Side Side_0('7');
  msg.set(Side_0);
  AllocationInstruction_0.insert(Side_0.getString());
  FIX::StartCash StartCash_0;
  StartCash_0.setString("2518039");
  msg.set(StartCash_0);
  AllocationInstruction_0.insert(StartCash_0.getString());
  FIX::Text Text_1("STRING_1441371621");
  msg.set(Text_1);
  AllocationInstruction_0.insert(Text_1.getString());
  FIX::TotNoAllocs TotNoAllocs_0(338670208);
  msg.set(TotNoAllocs_0);
  AllocationInstruction_0.insert(TotNoAllocs_0.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_0;
  TotalAccruedInterestAmt_0.setString("15180693");
  msg.set(TotalAccruedInterestAmt_0);
  AllocationInstruction_0.insert(TotalAccruedInterestAmt_0.getString());
  FIX::TotalTakedown TotalTakedown_0;
  TotalTakedown_0.setString("20094840");
  msg.set(TotalTakedown_0);
  AllocationInstruction_0.insert(TotalTakedown_0.getString());
  FIX::TradeDate TradeDate_1("LOCALMKTDATE_740451835");
  msg.set(TradeDate_1);
  AllocationInstruction_0.insert(TradeDate_1.getString());
  FIX::TradeInputSource TradeInputSource_0("STRING_810187197");
  msg.set(TradeInputSource_0);
  AllocationInstruction_0.insert(TradeInputSource_0.getString());
  FIX::TradeOriginationDate TradeOriginationDate_0("LOCALMKTDATE_1186578760");
  msg.set(TradeOriginationDate_0);
  AllocationInstruction_0.insert(TradeOriginationDate_0.getString());
  FIX::TradingSessionID TradingSessionID_1("STRING_4");
  msg.set(TradingSessionID_1);
  AllocationInstruction_0.insert(TradingSessionID_1.getString());
  FIX::TradingSessionSubID TradingSessionSubID_1("STRING_4");
  msg.set(TradingSessionSubID_1);
  AllocationInstruction_0.insert(TradingSessionSubID_1.getString());
  FIX::TransactTime TransactTime_1(FIX::UTCTIMESTAMP(18, 44, 23, 2, 5, 2012));
  msg.set(TransactTime_1);
  AllocationInstruction_0.insert(TransactTime_1.getString());
  FIX::TrdSubType TrdSubType_0(25);
  msg.set(TrdSubType_0);
  AllocationInstruction_0.insert(TrdSubType_0.getString());
  FIX::TrdType TrdType_0(49);
  msg.set(TrdType_0);
  AllocationInstruction_0.insert(TrdType_0.getString());
  all_values.push_back(AllocationInstruction_0);

  all_compo_names.insert("AllocationInstruction");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_0("STRING_200753231");
    noAllocs_0_0.set(AllocAccount_0);
    AllocGrp_NoAllocs_0.insert(AllocAccount_0.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_0;
    AllocAccruedInterestAmt_0.setString("12620684");
    noAllocs_0_0.set(AllocAccruedInterestAmt_0);
    AllocGrp_NoAllocs_0.insert(AllocAccruedInterestAmt_0.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_0(1661468928);
    noAllocs_0_0.set(AllocAcctIDSource_0);
    AllocGrp_NoAllocs_0.insert(AllocAcctIDSource_0.getString());
    FIX::AllocAvgPx AllocAvgPx_0;
    AllocAvgPx_0.setString("6851348");
    noAllocs_0_0.set(AllocAvgPx_0);
    AllocGrp_NoAllocs_0.insert(AllocAvgPx_0.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_0("STRING_269468543");
    noAllocs_0_0.set(AllocCustomerCapacity_0);
    AllocGrp_NoAllocs_0.insert(AllocCustomerCapacity_0.getString());
    FIX::AllocHandlInst AllocHandlInst_0(1);
    noAllocs_0_0.set(AllocHandlInst_0);
    AllocGrp_NoAllocs_0.insert(AllocHandlInst_0.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_0;
    AllocInterestAtMaturity_0.setString("8526361");
    noAllocs_0_0.set(AllocInterestAtMaturity_0);
    AllocGrp_NoAllocs_0.insert(AllocInterestAtMaturity_0.getString());
    FIX::AllocMethod AllocMethod_0(1);
    noAllocs_0_0.set(AllocMethod_0);
    AllocGrp_NoAllocs_0.insert(AllocMethod_0.getString());
    FIX::AllocNetMoney AllocNetMoney_0;
    AllocNetMoney_0.setString("10682976");
    noAllocs_0_0.set(AllocNetMoney_0);
    AllocGrp_NoAllocs_0.insert(AllocNetMoney_0.getString());
    FIX::AllocPositionEffect AllocPositionEffect_0('O');
    noAllocs_0_0.set(AllocPositionEffect_0);
    AllocGrp_NoAllocs_0.insert(AllocPositionEffect_0.getString());
    FIX::AllocPrice AllocPrice_0;
    AllocPrice_0.setString("9970602");
    noAllocs_0_0.set(AllocPrice_0);
    AllocGrp_NoAllocs_0.insert(AllocPrice_0.getString());
    FIX::AllocQty AllocQty_0;
    AllocQty_0.setString("13201016");
    noAllocs_0_0.set(AllocQty_0);
    AllocGrp_NoAllocs_0.insert(AllocQty_0.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_0;
    AllocSettlCurrAmt_0.setString("19420530");
    noAllocs_0_0.set(AllocSettlCurrAmt_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlCurrAmt_0.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_0("GBP");
    noAllocs_0_0.set(AllocSettlCurrency_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlCurrency_0.getString());
    FIX::AllocSettlInstType AllocSettlInstType_0(1);
    noAllocs_0_0.set(AllocSettlInstType_0);
    AllocGrp_NoAllocs_0.insert(AllocSettlInstType_0.getString());
    FIX::AllocText AllocText_0("STRING_2076182302");
    noAllocs_0_0.set(AllocText_0);
    AllocGrp_NoAllocs_0.insert(AllocText_0.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_0("STRING_F");
    noAllocs_0_0.set(ClearingFeeIndicator_0);
    AllocGrp_NoAllocs_0.insert(ClearingFeeIndicator_0.getString());
    FIX::EncodedAllocText EncodedAllocText_0("DATA_843148598");
    noAllocs_0_0.set(EncodedAllocText_0);
    AllocGrp_NoAllocs_0.insert(EncodedAllocText_0.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_0(171757811);
    noAllocs_0_0.set(EncodedAllocTextLen_0);
    AllocGrp_NoAllocs_0.insert(EncodedAllocTextLen_0.getString());
    FIX::IndividualAllocID IndividualAllocID_0("STRING_1600177347");
    noAllocs_0_0.set(IndividualAllocID_0);
    AllocGrp_NoAllocs_0.insert(IndividualAllocID_0.getString());
    FIX::IndividualAllocType IndividualAllocType_0(1);
    noAllocs_0_0.set(IndividualAllocType_0);
    AllocGrp_NoAllocs_0.insert(IndividualAllocType_0.getString());
    FIX::MatchStatus MatchStatus_0('0');
    noAllocs_0_0.set(MatchStatus_0);
    AllocGrp_NoAllocs_0.insert(MatchStatus_0.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_0(false);
    noAllocs_0_0.set(NotifyBrokerOfCredit_0);
    AllocGrp_NoAllocs_0.insert(NotifyBrokerOfCredit_0.getString());
    FIX::ProcessCode ProcessCode_0('5');
    noAllocs_0_0.set(ProcessCode_0);
    AllocGrp_NoAllocs_0.insert(ProcessCode_0.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_0("STRING_1021470908");
    noAllocs_0_0.set(SecondaryIndividualAllocID_0);
    AllocGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_0.getString());
    FIX::SettlCurrAmt SettlCurrAmt_0;
    SettlCurrAmt_0.setString("136420");
    noAllocs_0_0.set(SettlCurrAmt_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrAmt_0.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_0;
    SettlCurrFxRate_0.setString("9487784");
    noAllocs_0_0.set(SettlCurrFxRate_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrFxRate_0.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_0('D');
    noAllocs_0_0.set(SettlCurrFxRateCalc_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrFxRateCalc_0.getString());
    FIX::SettlCurrency SettlCurrency_0("CHF");
    noAllocs_0_0.set(SettlCurrency_0);
    AllocGrp_NoAllocs_0.insert(SettlCurrency_0.getString());
    all_values.push_back(AllocGrp_NoAllocs_0);
    all_compo_names.insert("AllocGrp.NoAllocs");

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
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_1;
      FIX::ClearingInstruction ClearingInstruction_1(1);
      noClearingInstructions_0_1_1.set(ClearingInstruction_1);
      ClrInstGrp_NoClearingInstructions_1.insert(ClearingInstruction_1.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_1);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_2;
      FIX::ClearingInstruction ClearingInstruction_2(7);
      noClearingInstructions_0_1_2.set(ClearingInstruction_2);
      ClrInstGrp_NoClearingInstructions_2.insert(ClearingInstruction_2.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_2);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_0;
    FIX::CommCurrency CommCurrency_0("GBP");
    noAllocs_0_0.set(CommCurrency_0);
    CommissionData_0.insert(CommCurrency_0.getString());
    FIX::CommType CommType_0('5');
    noAllocs_0_0.set(CommType_0);
    CommissionData_0.insert(CommType_0.getString());
    FIX::Commission Commission_0;
    Commission_0.setString("15830279");
    noAllocs_0_0.set(Commission_0);
    CommissionData_0.insert(Commission_0.getString());
    FIX::FundRenewWaiv FundRenewWaiv_0('Y');
    noAllocs_0_0.set(FundRenewWaiv_0);
    CommissionData_0.insert(FundRenewWaiv_0.getString());
    all_values.push_back(CommissionData_0);
    all_compo_names.insert("CommissionData");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_0;
      FIX::MiscFeeAmt MiscFeeAmt_0;
      MiscFeeAmt_0.setString("4326045");
      noMiscFees_0_1_0.set(MiscFeeAmt_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeAmt_0.getString());
      FIX::MiscFeeBasis MiscFeeBasis_0(1);
      noMiscFees_0_1_0.set(MiscFeeBasis_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeBasis_0.getString());
      FIX::MiscFeeCurr MiscFeeCurr_0("CHF");
      noMiscFees_0_1_0.set(MiscFeeCurr_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeCurr_0.getString());
      FIX::MiscFeeType MiscFeeType_0("STRING_7");
      noMiscFees_0_1_0.set(MiscFeeType_0);
      MiscFeesGrp_NoMiscFees_0.insert(MiscFeeType_0.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_0);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_2;
      FIX::NestedPartyID NestedPartyID_2("STRING_1697033634");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyID_2.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_2('8');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyIDSource_2.getString());
      FIX::NestedPartyRole NestedPartyRole_2(546374232);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyRole_2.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_2);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_6;
        FIX::NestedPartySubID NestedPartySubID_6("STRING_1685986483");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_6);
        NstdPtysSubGrp_NoNestedPartySubIDs_6.insert(NestedPartySubID_6.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_6(1249122014);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_6);
        NstdPtysSubGrp_NoNestedPartySubIDs_6.insert(NestedPartySubIDType_6.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_6);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_7;
        FIX::NestedPartySubID NestedPartySubID_7("STRING_269178051");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_7);
        NstdPtysSubGrp_NoNestedPartySubIDs_7.insert(NestedPartySubID_7.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_7(1585760926);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_7);
        NstdPtysSubGrp_NoNestedPartySubIDs_7.insert(NestedPartySubIDType_7.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_7);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_8;
        FIX::NestedPartySubID NestedPartySubID_8("STRING_441669091");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_8);
        NstdPtysSubGrp_NoNestedPartySubIDs_8.insert(NestedPartySubID_8.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_8(1290648960);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_8);
        NstdPtysSubGrp_NoNestedPartySubIDs_8.insert(NestedPartySubIDType_8.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_8);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_0;
    FIX::SettlDeliveryType SettlDeliveryType_0(1);
    noAllocs_0_0.set(SettlDeliveryType_0);
    SettlInstructionsData_0.insert(SettlDeliveryType_0.getString());
    FIX::StandInstDbID StandInstDbID_0("STRING_1390447560");
    noAllocs_0_0.set(StandInstDbID_0);
    SettlInstructionsData_0.insert(StandInstDbID_0.getString());
    FIX::StandInstDbName StandInstDbName_0("STRING_1451013425");
    noAllocs_0_0.set(StandInstDbName_0);
    SettlInstructionsData_0.insert(StandInstDbName_0.getString());
    FIX::StandInstDbType StandInstDbType_0(0);
    noAllocs_0_0.set(StandInstDbType_0);
    SettlInstructionsData_0.insert(StandInstDbType_0.getString());
    all_values.push_back(SettlInstructionsData_0);
    all_compo_names.insert("SettlInstructionsData");

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
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_0;
        FIX::SettlPartyID SettlPartyID_0("STRING_710899975");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyID_0.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_0('2');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyIDSource_0.getString());
        FIX::SettlPartyRole SettlPartyRole_0(158999979);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_0);
        SettlParties_NoSettlPartyIDs_0.insert(SettlPartyRole_0.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_0);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_0;
          FIX::SettlPartySubID SettlPartySubID_0("STRING_1603853632");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_0);
          SettlPtysSubGrp_NoSettlPartySubIDs_0.insert(SettlPartySubID_0.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_0(1028112956);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_0);
          SettlPtysSubGrp_NoSettlPartySubIDs_0.insert(SettlPartySubIDType_0.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_0);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_1;
          FIX::SettlPartySubID SettlPartySubID_1("STRING_714391336");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_1);
          SettlPtysSubGrp_NoSettlPartySubIDs_1.insert(SettlPartySubID_1.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_1(2036458144);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_1);
          SettlPtysSubGrp_NoSettlPartySubIDs_1.insert(SettlPartySubIDType_1.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_1);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_1;
      FIX::DlvyInstType DlvyInstType_1('S');
      noDlvyInst_0_1_1.set(DlvyInstType_1);
      DlvyInstGrp_NoDlvyInst_1.insert(DlvyInstType_1.getString());
      FIX::SettlInstSource SettlInstSource_1('2');
      noDlvyInst_0_1_1.set(SettlInstSource_1);
      DlvyInstGrp_NoDlvyInst_1.insert(SettlInstSource_1.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_1);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_1;
        FIX::SettlPartyID SettlPartyID_1("STRING_1802262169");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyID_1.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_1('4');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyIDSource_1.getString());
        FIX::SettlPartyRole SettlPartyRole_1(1206859462);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_1);
        SettlParties_NoSettlPartyIDs_1.insert(SettlPartyRole_1.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_1);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_2;
          FIX::SettlPartySubID SettlPartySubID_2("STRING_1010646998");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_2);
          SettlPtysSubGrp_NoSettlPartySubIDs_2.insert(SettlPartySubID_2.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_2(928167259);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_2);
          SettlPtysSubGrp_NoSettlPartySubIDs_2.insert(SettlPartySubIDType_2.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_2);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_3;
          FIX::SettlPartySubID SettlPartySubID_3("STRING_1426574140");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_3);
          SettlPtysSubGrp_NoSettlPartySubIDs_3.insert(SettlPartySubID_3.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_3(112285364);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_3);
          SettlPtysSubGrp_NoSettlPartySubIDs_3.insert(SettlPartySubIDType_3.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_3);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_4;
          FIX::SettlPartySubID SettlPartySubID_4("STRING_1197345311");
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubID_4);
          SettlPtysSubGrp_NoSettlPartySubIDs_4.insert(SettlPartySubID_4.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_4(864851418);
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubIDType_4);
          SettlPtysSubGrp_NoSettlPartySubIDs_4.insert(SettlPartySubIDType_4.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_4);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
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
    FIX::ExecID ExecID_0("STRING_340510623");
    noExecs_0_0.set(ExecID_0);
    ExecAllocGrp_NoExecs_0.insert(ExecID_0.getString());
    FIX::FirmTradeID FirmTradeID_0("STRING_316770748");
    noExecs_0_0.set(FirmTradeID_0);
    ExecAllocGrp_NoExecs_0.insert(FirmTradeID_0.getString());
    FIX::LastCapacity LastCapacity_0('4');
    noExecs_0_0.set(LastCapacity_0);
    ExecAllocGrp_NoExecs_0.insert(LastCapacity_0.getString());
    FIX::LastParPx LastParPx_0;
    LastParPx_0.setString("17915240");
    noExecs_0_0.set(LastParPx_0);
    ExecAllocGrp_NoExecs_0.insert(LastParPx_0.getString());
    FIX::LastPx LastPx_0;
    LastPx_0.setString("4587795");
    noExecs_0_0.set(LastPx_0);
    ExecAllocGrp_NoExecs_0.insert(LastPx_0.getString());
    FIX::LastQty LastQty_0;
    LastQty_0.setString("19879836");
    noExecs_0_0.set(LastQty_0);
    ExecAllocGrp_NoExecs_0.insert(LastQty_0.getString());
    FIX::SecondaryExecID SecondaryExecID_0("STRING_1456171523");
    noExecs_0_0.set(SecondaryExecID_0);
    ExecAllocGrp_NoExecs_0.insert(SecondaryExecID_0.getString());
    FIX::TradeID TradeID_0("STRING_405462497");
    noExecs_0_0.set(TradeID_0);
    ExecAllocGrp_NoExecs_0.insert(TradeID_0.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_0);
    all_compo_names.insert("ExecAllocGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_0;
  FIX::AgreementCurrency AgreementCurrency_0("JPY");
  msg.set(AgreementCurrency_0);
  FinancingDetails_0.insert(AgreementCurrency_0.getString());
  FIX::AgreementDate AgreementDate_0("LOCALMKTDATE_426288228");
  msg.set(AgreementDate_0);
  FinancingDetails_0.insert(AgreementDate_0.getString());
  FIX::AgreementDesc AgreementDesc_0("STRING_357684663");
  msg.set(AgreementDesc_0);
  FinancingDetails_0.insert(AgreementDesc_0.getString());
  FIX::AgreementID AgreementID_0("STRING_481892792");
  msg.set(AgreementID_0);
  FinancingDetails_0.insert(AgreementID_0.getString());
  FIX::DeliveryType DeliveryType_0(1);
  msg.set(DeliveryType_0);
  FinancingDetails_0.insert(DeliveryType_0.getString());
  FIX::EndDate EndDate_0("LOCALMKTDATE_1385797619");
  msg.set(EndDate_0);
  FinancingDetails_0.insert(EndDate_0.getString());
  FIX::MarginRatio MarginRatio_0;
  MarginRatio_0.setString("41.290000");
  msg.set(MarginRatio_0);
  FinancingDetails_0.insert(MarginRatio_0.getString());
  FIX::StartDate StartDate_0("LOCALMKTDATE_1919116357");
  msg.set(StartDate_0);
  FinancingDetails_0.insert(StartDate_0.getString());
  FIX::TerminationType TerminationType_0(3);
  msg.set(TerminationType_0);
  FinancingDetails_0.insert(TerminationType_0.getString());
  all_values.push_back(FinancingDetails_0);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstruction::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_2;
    FIX::EncodedLegIssuer EncodedLegIssuer_2("DATA_1428942185");
    noLegs_0_0.set(EncodedLegIssuer_2);
    InstrumentLeg_2.insert(EncodedLegIssuer_2.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_2(2110420044);
    noLegs_0_0.set(EncodedLegIssuerLen_2);
    InstrumentLeg_2.insert(EncodedLegIssuerLen_2.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_2("DATA_274120380");
    noLegs_0_0.set(EncodedLegSecurityDesc_2);
    InstrumentLeg_2.insert(EncodedLegSecurityDesc_2.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_2(488317999);
    noLegs_0_0.set(EncodedLegSecurityDescLen_2);
    InstrumentLeg_2.insert(EncodedLegSecurityDescLen_2.getString());
    FIX::LegCFICode LegCFICode_2("STRING_1851007701");
    noLegs_0_0.set(LegCFICode_2);
    InstrumentLeg_2.insert(LegCFICode_2.getString());
    FIX::LegContractMultiplier LegContractMultiplier_2;
    LegContractMultiplier_2.setString("12847673");
    noLegs_0_0.set(LegContractMultiplier_2);
    InstrumentLeg_2.insert(LegContractMultiplier_2.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_2(1416485259);
    noLegs_0_0.set(LegContractMultiplierUnit_2);
    InstrumentLeg_2.insert(LegContractMultiplierUnit_2.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_2("MONTHYEAR_1130098194");
    noLegs_0_0.set(LegContractSettlMonth_2);
    InstrumentLeg_2.insert(LegContractSettlMonth_2.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_2("COUNTRY_1397052743");
    noLegs_0_0.set(LegCountryOfIssue_2);
    InstrumentLeg_2.insert(LegCountryOfIssue_2.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_2("LOCALMKTDATE_466346922");
    noLegs_0_0.set(LegCouponPaymentDate_2);
    InstrumentLeg_2.insert(LegCouponPaymentDate_2.getString());
    FIX::LegCouponRate LegCouponRate_2;
    LegCouponRate_2.setString("96.120000");
    noLegs_0_0.set(LegCouponRate_2);
    InstrumentLeg_2.insert(LegCouponRate_2.getString());
    FIX::LegCreditRating LegCreditRating_2("STRING_1951007198");
    noLegs_0_0.set(LegCreditRating_2);
    InstrumentLeg_2.insert(LegCreditRating_2.getString());
    FIX::LegCurrency LegCurrency_2("GBP");
    noLegs_0_0.set(LegCurrency_2);
    InstrumentLeg_2.insert(LegCurrency_2.getString());
    FIX::LegDatedDate LegDatedDate_2("LOCALMKTDATE_1747925566");
    noLegs_0_0.set(LegDatedDate_2);
    InstrumentLeg_2.insert(LegDatedDate_2.getString());
    FIX::LegExerciseStyle LegExerciseStyle_2(450897945);
    noLegs_0_0.set(LegExerciseStyle_2);
    InstrumentLeg_2.insert(LegExerciseStyle_2.getString());
    FIX::LegFactor LegFactor_2;
    LegFactor_2.setString("6230162");
    noLegs_0_0.set(LegFactor_2);
    InstrumentLeg_2.insert(LegFactor_2.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_2(1588425583);
    noLegs_0_0.set(LegFlowScheduleType_2);
    InstrumentLeg_2.insert(LegFlowScheduleType_2.getString());
    FIX::LegInstrRegistry LegInstrRegistry_2("STRING_1907069468");
    noLegs_0_0.set(LegInstrRegistry_2);
    InstrumentLeg_2.insert(LegInstrRegistry_2.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_2("LOCALMKTDATE_1028478727");
    noLegs_0_0.set(LegInterestAccrualDate_2);
    InstrumentLeg_2.insert(LegInterestAccrualDate_2.getString());
    FIX::LegIssueDate LegIssueDate_2("LOCALMKTDATE_1787110267");
    noLegs_0_0.set(LegIssueDate_2);
    InstrumentLeg_2.insert(LegIssueDate_2.getString());
    FIX::LegIssuer LegIssuer_2("STRING_1926657319");
    noLegs_0_0.set(LegIssuer_2);
    InstrumentLeg_2.insert(LegIssuer_2.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_2("STRING_1454766956");
    noLegs_0_0.set(LegLocaleOfIssue_2);
    InstrumentLeg_2.insert(LegLocaleOfIssue_2.getString());
    FIX::LegMaturityDate LegMaturityDate_2("LOCALMKTDATE_2144794930");
    noLegs_0_0.set(LegMaturityDate_2);
    InstrumentLeg_2.insert(LegMaturityDate_2.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_2("MONTHYEAR_261066463");
    noLegs_0_0.set(LegMaturityMonthYear_2);
    InstrumentLeg_2.insert(LegMaturityMonthYear_2.getString());
    FIX::LegMaturityTime LegMaturityTime_2("TZTIMEONLY_1337425169");
    noLegs_0_0.set(LegMaturityTime_2);
    InstrumentLeg_2.insert(LegMaturityTime_2.getString());
    FIX::LegOptAttribute LegOptAttribute_2('1');
    noLegs_0_0.set(LegOptAttribute_2);
    InstrumentLeg_2.insert(LegOptAttribute_2.getString());
    FIX::LegOptionRatio LegOptionRatio_2;
    LegOptionRatio_2.setString("14573505");
    noLegs_0_0.set(LegOptionRatio_2);
    InstrumentLeg_2.insert(LegOptionRatio_2.getString());
    FIX::LegPool LegPool_2("STRING_1109057878");
    noLegs_0_0.set(LegPool_2);
    InstrumentLeg_2.insert(LegPool_2.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_2("STRING_1691266776");
    noLegs_0_0.set(LegPriceUnitOfMeasure_2);
    InstrumentLeg_2.insert(LegPriceUnitOfMeasure_2.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_2;
    LegPriceUnitOfMeasureQty_2.setString("12671982");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_2);
    InstrumentLeg_2.insert(LegPriceUnitOfMeasureQty_2.getString());
    FIX::LegProduct LegProduct_2(390516416);
    noLegs_0_0.set(LegProduct_2);
    InstrumentLeg_2.insert(LegProduct_2.getString());
    FIX::LegPutOrCall LegPutOrCall_2(1654203172);
    noLegs_0_0.set(LegPutOrCall_2);
    InstrumentLeg_2.insert(LegPutOrCall_2.getString());
    FIX::LegRatioQty LegRatioQty_2;
    LegRatioQty_2.setString("15413185");
    noLegs_0_0.set(LegRatioQty_2);
    InstrumentLeg_2.insert(LegRatioQty_2.getString());
    FIX::LegRedemptionDate LegRedemptionDate_2("LOCALMKTDATE_878834415");
    noLegs_0_0.set(LegRedemptionDate_2);
    InstrumentLeg_2.insert(LegRedemptionDate_2.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_2("STRING_1357727225");
    noLegs_0_0.set(LegRepoCollateralSecurityType_2);
    InstrumentLeg_2.insert(LegRepoCollateralSecurityType_2.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_2;
    LegRepurchaseRate_2.setString("23.160000");
    noLegs_0_0.set(LegRepurchaseRate_2);
    InstrumentLeg_2.insert(LegRepurchaseRate_2.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_2(147836026);
    noLegs_0_0.set(LegRepurchaseTerm_2);
    InstrumentLeg_2.insert(LegRepurchaseTerm_2.getString());
    FIX::LegSecurityDesc LegSecurityDesc_2("STRING_340341771");
    noLegs_0_0.set(LegSecurityDesc_2);
    InstrumentLeg_2.insert(LegSecurityDesc_2.getString());
    FIX::LegSecurityExchange LegSecurityExchange_2("EXCHANGE_2075655059");
    noLegs_0_0.set(LegSecurityExchange_2);
    InstrumentLeg_2.insert(LegSecurityExchange_2.getString());
    FIX::LegSecurityID LegSecurityID_2("STRING_614182948");
    noLegs_0_0.set(LegSecurityID_2);
    InstrumentLeg_2.insert(LegSecurityID_2.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_2("STRING_187807736");
    noLegs_0_0.set(LegSecurityIDSource_2);
    InstrumentLeg_2.insert(LegSecurityIDSource_2.getString());
    FIX::LegSecuritySubType LegSecuritySubType_2("STRING_1879178610");
    noLegs_0_0.set(LegSecuritySubType_2);
    InstrumentLeg_2.insert(LegSecuritySubType_2.getString());
    FIX::LegSecurityType LegSecurityType_2("STRING_1421040493");
    noLegs_0_0.set(LegSecurityType_2);
    InstrumentLeg_2.insert(LegSecurityType_2.getString());
    FIX::LegSide LegSide_2('3');
    noLegs_0_0.set(LegSide_2);
    InstrumentLeg_2.insert(LegSide_2.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_2("STRING_1479620528");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_2);
    InstrumentLeg_2.insert(LegStateOrProvinceOfIssue_2.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_2("EUR");
    noLegs_0_0.set(LegStrikeCurrency_2);
    InstrumentLeg_2.insert(LegStrikeCurrency_2.getString());
    FIX::LegStrikePrice LegStrikePrice_2;
    LegStrikePrice_2.setString("9205624");
    noLegs_0_0.set(LegStrikePrice_2);
    InstrumentLeg_2.insert(LegStrikePrice_2.getString());
    FIX::LegSymbol LegSymbol_2("STRING_1631524259");
    noLegs_0_0.set(LegSymbol_2);
    InstrumentLeg_2.insert(LegSymbol_2.getString());
    FIX::LegSymbolSfx LegSymbolSfx_2("STRING_2003539406");
    noLegs_0_0.set(LegSymbolSfx_2);
    InstrumentLeg_2.insert(LegSymbolSfx_2.getString());
    FIX::LegTimeUnit LegTimeUnit_2("STRING_560189082");
    noLegs_0_0.set(LegTimeUnit_2);
    InstrumentLeg_2.insert(LegTimeUnit_2.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_2("STRING_1410697930");
    noLegs_0_0.set(LegUnitOfMeasure_2);
    InstrumentLeg_2.insert(LegUnitOfMeasure_2.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_2;
    LegUnitOfMeasureQty_2.setString("13108227");
    noLegs_0_0.set(LegUnitOfMeasureQty_2);
    InstrumentLeg_2.insert(LegUnitOfMeasureQty_2.getString());
    all_values.push_back(InstrumentLeg_2);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_4;
      FIX::LegSecurityAltID LegSecurityAltID_4("STRING_1671764394");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_4);
      LegSecAltIDGrp_NoLegSecurityAltID_4.insert(LegSecurityAltID_4.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_4("STRING_500764235");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_4);
      LegSecAltIDGrp_NoLegSecurityAltID_4.insert(LegSecurityAltIDSource_4.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_4);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_5;
      FIX::LegSecurityAltID LegSecurityAltID_5("STRING_1940609265");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_5);
      LegSecAltIDGrp_NoLegSecurityAltID_5.insert(LegSecurityAltID_5.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_5("STRING_981631338");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_5);
      LegSecAltIDGrp_NoLegSecurityAltID_5.insert(LegSecurityAltIDSource_5.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_5);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_6;
      FIX::LegSecurityAltID LegSecurityAltID_6("STRING_1609822114");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_6);
      LegSecAltIDGrp_NoLegSecurityAltID_6.insert(LegSecurityAltID_6.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_6("STRING_1484392393");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_6);
      LegSecAltIDGrp_NoLegSecurityAltID_6.insert(LegSecurityAltIDSource_6.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_6);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_3;
    FIX::EncodedLegIssuer EncodedLegIssuer_3("DATA_101345896");
    noLegs_0_1.set(EncodedLegIssuer_3);
    InstrumentLeg_3.insert(EncodedLegIssuer_3.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_3(2000338530);
    noLegs_0_1.set(EncodedLegIssuerLen_3);
    InstrumentLeg_3.insert(EncodedLegIssuerLen_3.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_3("DATA_991111917");
    noLegs_0_1.set(EncodedLegSecurityDesc_3);
    InstrumentLeg_3.insert(EncodedLegSecurityDesc_3.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_3(1642664482);
    noLegs_0_1.set(EncodedLegSecurityDescLen_3);
    InstrumentLeg_3.insert(EncodedLegSecurityDescLen_3.getString());
    FIX::LegCFICode LegCFICode_3("STRING_731689297");
    noLegs_0_1.set(LegCFICode_3);
    InstrumentLeg_3.insert(LegCFICode_3.getString());
    FIX::LegContractMultiplier LegContractMultiplier_3;
    LegContractMultiplier_3.setString("2013554");
    noLegs_0_1.set(LegContractMultiplier_3);
    InstrumentLeg_3.insert(LegContractMultiplier_3.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_3(173783151);
    noLegs_0_1.set(LegContractMultiplierUnit_3);
    InstrumentLeg_3.insert(LegContractMultiplierUnit_3.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_3("MONTHYEAR_879525324");
    noLegs_0_1.set(LegContractSettlMonth_3);
    InstrumentLeg_3.insert(LegContractSettlMonth_3.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_3("COUNTRY_541697266");
    noLegs_0_1.set(LegCountryOfIssue_3);
    InstrumentLeg_3.insert(LegCountryOfIssue_3.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_3("LOCALMKTDATE_101954562");
    noLegs_0_1.set(LegCouponPaymentDate_3);
    InstrumentLeg_3.insert(LegCouponPaymentDate_3.getString());
    FIX::LegCouponRate LegCouponRate_3;
    LegCouponRate_3.setString("82.720000");
    noLegs_0_1.set(LegCouponRate_3);
    InstrumentLeg_3.insert(LegCouponRate_3.getString());
    FIX::LegCreditRating LegCreditRating_3("STRING_729505002");
    noLegs_0_1.set(LegCreditRating_3);
    InstrumentLeg_3.insert(LegCreditRating_3.getString());
    FIX::LegCurrency LegCurrency_3("JPY");
    noLegs_0_1.set(LegCurrency_3);
    InstrumentLeg_3.insert(LegCurrency_3.getString());
    FIX::LegDatedDate LegDatedDate_3("LOCALMKTDATE_1081549451");
    noLegs_0_1.set(LegDatedDate_3);
    InstrumentLeg_3.insert(LegDatedDate_3.getString());
    FIX::LegExerciseStyle LegExerciseStyle_3(1313270052);
    noLegs_0_1.set(LegExerciseStyle_3);
    InstrumentLeg_3.insert(LegExerciseStyle_3.getString());
    FIX::LegFactor LegFactor_3;
    LegFactor_3.setString("4917199");
    noLegs_0_1.set(LegFactor_3);
    InstrumentLeg_3.insert(LegFactor_3.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_3(2056610130);
    noLegs_0_1.set(LegFlowScheduleType_3);
    InstrumentLeg_3.insert(LegFlowScheduleType_3.getString());
    FIX::LegInstrRegistry LegInstrRegistry_3("STRING_86348867");
    noLegs_0_1.set(LegInstrRegistry_3);
    InstrumentLeg_3.insert(LegInstrRegistry_3.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_3("LOCALMKTDATE_2123244168");
    noLegs_0_1.set(LegInterestAccrualDate_3);
    InstrumentLeg_3.insert(LegInterestAccrualDate_3.getString());
    FIX::LegIssueDate LegIssueDate_3("LOCALMKTDATE_1912665888");
    noLegs_0_1.set(LegIssueDate_3);
    InstrumentLeg_3.insert(LegIssueDate_3.getString());
    FIX::LegIssuer LegIssuer_3("STRING_646537949");
    noLegs_0_1.set(LegIssuer_3);
    InstrumentLeg_3.insert(LegIssuer_3.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_3("STRING_1386458451");
    noLegs_0_1.set(LegLocaleOfIssue_3);
    InstrumentLeg_3.insert(LegLocaleOfIssue_3.getString());
    FIX::LegMaturityDate LegMaturityDate_3("LOCALMKTDATE_1076004955");
    noLegs_0_1.set(LegMaturityDate_3);
    InstrumentLeg_3.insert(LegMaturityDate_3.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_3("MONTHYEAR_1204038313");
    noLegs_0_1.set(LegMaturityMonthYear_3);
    InstrumentLeg_3.insert(LegMaturityMonthYear_3.getString());
    FIX::LegMaturityTime LegMaturityTime_3("TZTIMEONLY_910739197");
    noLegs_0_1.set(LegMaturityTime_3);
    InstrumentLeg_3.insert(LegMaturityTime_3.getString());
    FIX::LegOptAttribute LegOptAttribute_3('1');
    noLegs_0_1.set(LegOptAttribute_3);
    InstrumentLeg_3.insert(LegOptAttribute_3.getString());
    FIX::LegOptionRatio LegOptionRatio_3;
    LegOptionRatio_3.setString("9971639");
    noLegs_0_1.set(LegOptionRatio_3);
    InstrumentLeg_3.insert(LegOptionRatio_3.getString());
    FIX::LegPool LegPool_3("STRING_1892370535");
    noLegs_0_1.set(LegPool_3);
    InstrumentLeg_3.insert(LegPool_3.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_3("STRING_1039107656");
    noLegs_0_1.set(LegPriceUnitOfMeasure_3);
    InstrumentLeg_3.insert(LegPriceUnitOfMeasure_3.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_3;
    LegPriceUnitOfMeasureQty_3.setString("3340726");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_3);
    InstrumentLeg_3.insert(LegPriceUnitOfMeasureQty_3.getString());
    FIX::LegProduct LegProduct_3(1993716432);
    noLegs_0_1.set(LegProduct_3);
    InstrumentLeg_3.insert(LegProduct_3.getString());
    FIX::LegPutOrCall LegPutOrCall_3(891962538);
    noLegs_0_1.set(LegPutOrCall_3);
    InstrumentLeg_3.insert(LegPutOrCall_3.getString());
    FIX::LegRatioQty LegRatioQty_3;
    LegRatioQty_3.setString("13251845");
    noLegs_0_1.set(LegRatioQty_3);
    InstrumentLeg_3.insert(LegRatioQty_3.getString());
    FIX::LegRedemptionDate LegRedemptionDate_3("LOCALMKTDATE_1488897266");
    noLegs_0_1.set(LegRedemptionDate_3);
    InstrumentLeg_3.insert(LegRedemptionDate_3.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_3("STRING_1623651836");
    noLegs_0_1.set(LegRepoCollateralSecurityType_3);
    InstrumentLeg_3.insert(LegRepoCollateralSecurityType_3.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_3;
    LegRepurchaseRate_3.setString("0.890000");
    noLegs_0_1.set(LegRepurchaseRate_3);
    InstrumentLeg_3.insert(LegRepurchaseRate_3.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_3(1662680417);
    noLegs_0_1.set(LegRepurchaseTerm_3);
    InstrumentLeg_3.insert(LegRepurchaseTerm_3.getString());
    FIX::LegSecurityDesc LegSecurityDesc_3("STRING_355693512");
    noLegs_0_1.set(LegSecurityDesc_3);
    InstrumentLeg_3.insert(LegSecurityDesc_3.getString());
    FIX::LegSecurityExchange LegSecurityExchange_3("EXCHANGE_2068237355");
    noLegs_0_1.set(LegSecurityExchange_3);
    InstrumentLeg_3.insert(LegSecurityExchange_3.getString());
    FIX::LegSecurityID LegSecurityID_3("STRING_1764634980");
    noLegs_0_1.set(LegSecurityID_3);
    InstrumentLeg_3.insert(LegSecurityID_3.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_3("STRING_1849401784");
    noLegs_0_1.set(LegSecurityIDSource_3);
    InstrumentLeg_3.insert(LegSecurityIDSource_3.getString());
    FIX::LegSecuritySubType LegSecuritySubType_3("STRING_650258710");
    noLegs_0_1.set(LegSecuritySubType_3);
    InstrumentLeg_3.insert(LegSecuritySubType_3.getString());
    FIX::LegSecurityType LegSecurityType_3("STRING_1598284504");
    noLegs_0_1.set(LegSecurityType_3);
    InstrumentLeg_3.insert(LegSecurityType_3.getString());
    FIX::LegSide LegSide_3('4');
    noLegs_0_1.set(LegSide_3);
    InstrumentLeg_3.insert(LegSide_3.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_3("STRING_1731808161");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_3);
    InstrumentLeg_3.insert(LegStateOrProvinceOfIssue_3.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_3("EUR");
    noLegs_0_1.set(LegStrikeCurrency_3);
    InstrumentLeg_3.insert(LegStrikeCurrency_3.getString());
    FIX::LegStrikePrice LegStrikePrice_3;
    LegStrikePrice_3.setString("16409346");
    noLegs_0_1.set(LegStrikePrice_3);
    InstrumentLeg_3.insert(LegStrikePrice_3.getString());
    FIX::LegSymbol LegSymbol_3("STRING_850419776");
    noLegs_0_1.set(LegSymbol_3);
    InstrumentLeg_3.insert(LegSymbol_3.getString());
    FIX::LegSymbolSfx LegSymbolSfx_3("STRING_936663684");
    noLegs_0_1.set(LegSymbolSfx_3);
    InstrumentLeg_3.insert(LegSymbolSfx_3.getString());
    FIX::LegTimeUnit LegTimeUnit_3("STRING_1406116883");
    noLegs_0_1.set(LegTimeUnit_3);
    InstrumentLeg_3.insert(LegTimeUnit_3.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_3("STRING_1496957726");
    noLegs_0_1.set(LegUnitOfMeasure_3);
    InstrumentLeg_3.insert(LegUnitOfMeasure_3.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_3;
    LegUnitOfMeasureQty_3.setString("1756384");
    noLegs_0_1.set(LegUnitOfMeasureQty_3);
    InstrumentLeg_3.insert(LegUnitOfMeasureQty_3.getString());
    all_values.push_back(InstrumentLeg_3);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_7;
      FIX::LegSecurityAltID LegSecurityAltID_7("STRING_553512391");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_7);
      LegSecAltIDGrp_NoLegSecurityAltID_7.insert(LegSecurityAltID_7.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_7("STRING_1086377684");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_7);
      LegSecAltIDGrp_NoLegSecurityAltID_7.insert(LegSecurityAltIDSource_7.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_7);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_8;
      FIX::LegSecurityAltID LegSecurityAltID_8("STRING_1911407381");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_8);
      LegSecAltIDGrp_NoLegSecurityAltID_8.insert(LegSecurityAltID_8.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_8("STRING_1550676322");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_8);
      LegSecAltIDGrp_NoLegSecurityAltID_8.insert(LegSecurityAltIDSource_8.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_8);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_4;
    FIX::EncodedLegIssuer EncodedLegIssuer_4("DATA_831264571");
    noLegs_0_2.set(EncodedLegIssuer_4);
    InstrumentLeg_4.insert(EncodedLegIssuer_4.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_4(803031389);
    noLegs_0_2.set(EncodedLegIssuerLen_4);
    InstrumentLeg_4.insert(EncodedLegIssuerLen_4.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_4("DATA_1884748999");
    noLegs_0_2.set(EncodedLegSecurityDesc_4);
    InstrumentLeg_4.insert(EncodedLegSecurityDesc_4.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_4(677497355);
    noLegs_0_2.set(EncodedLegSecurityDescLen_4);
    InstrumentLeg_4.insert(EncodedLegSecurityDescLen_4.getString());
    FIX::LegCFICode LegCFICode_4("STRING_1694993928");
    noLegs_0_2.set(LegCFICode_4);
    InstrumentLeg_4.insert(LegCFICode_4.getString());
    FIX::LegContractMultiplier LegContractMultiplier_4;
    LegContractMultiplier_4.setString("10624499");
    noLegs_0_2.set(LegContractMultiplier_4);
    InstrumentLeg_4.insert(LegContractMultiplier_4.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_4(18910974);
    noLegs_0_2.set(LegContractMultiplierUnit_4);
    InstrumentLeg_4.insert(LegContractMultiplierUnit_4.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_4("MONTHYEAR_1171162116");
    noLegs_0_2.set(LegContractSettlMonth_4);
    InstrumentLeg_4.insert(LegContractSettlMonth_4.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_4("COUNTRY_441506386");
    noLegs_0_2.set(LegCountryOfIssue_4);
    InstrumentLeg_4.insert(LegCountryOfIssue_4.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_4("LOCALMKTDATE_1681591391");
    noLegs_0_2.set(LegCouponPaymentDate_4);
    InstrumentLeg_4.insert(LegCouponPaymentDate_4.getString());
    FIX::LegCouponRate LegCouponRate_4;
    LegCouponRate_4.setString("56.280000");
    noLegs_0_2.set(LegCouponRate_4);
    InstrumentLeg_4.insert(LegCouponRate_4.getString());
    FIX::LegCreditRating LegCreditRating_4("STRING_362260093");
    noLegs_0_2.set(LegCreditRating_4);
    InstrumentLeg_4.insert(LegCreditRating_4.getString());
    FIX::LegCurrency LegCurrency_4("GBP");
    noLegs_0_2.set(LegCurrency_4);
    InstrumentLeg_4.insert(LegCurrency_4.getString());
    FIX::LegDatedDate LegDatedDate_4("LOCALMKTDATE_1012518803");
    noLegs_0_2.set(LegDatedDate_4);
    InstrumentLeg_4.insert(LegDatedDate_4.getString());
    FIX::LegExerciseStyle LegExerciseStyle_4(749543580);
    noLegs_0_2.set(LegExerciseStyle_4);
    InstrumentLeg_4.insert(LegExerciseStyle_4.getString());
    FIX::LegFactor LegFactor_4;
    LegFactor_4.setString("16979570");
    noLegs_0_2.set(LegFactor_4);
    InstrumentLeg_4.insert(LegFactor_4.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_4(596843316);
    noLegs_0_2.set(LegFlowScheduleType_4);
    InstrumentLeg_4.insert(LegFlowScheduleType_4.getString());
    FIX::LegInstrRegistry LegInstrRegistry_4("STRING_1513614489");
    noLegs_0_2.set(LegInstrRegistry_4);
    InstrumentLeg_4.insert(LegInstrRegistry_4.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_4("LOCALMKTDATE_511376534");
    noLegs_0_2.set(LegInterestAccrualDate_4);
    InstrumentLeg_4.insert(LegInterestAccrualDate_4.getString());
    FIX::LegIssueDate LegIssueDate_4("LOCALMKTDATE_90294311");
    noLegs_0_2.set(LegIssueDate_4);
    InstrumentLeg_4.insert(LegIssueDate_4.getString());
    FIX::LegIssuer LegIssuer_4("STRING_216550617");
    noLegs_0_2.set(LegIssuer_4);
    InstrumentLeg_4.insert(LegIssuer_4.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_4("STRING_1448040218");
    noLegs_0_2.set(LegLocaleOfIssue_4);
    InstrumentLeg_4.insert(LegLocaleOfIssue_4.getString());
    FIX::LegMaturityDate LegMaturityDate_4("LOCALMKTDATE_1496411195");
    noLegs_0_2.set(LegMaturityDate_4);
    InstrumentLeg_4.insert(LegMaturityDate_4.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_4("MONTHYEAR_1713508343");
    noLegs_0_2.set(LegMaturityMonthYear_4);
    InstrumentLeg_4.insert(LegMaturityMonthYear_4.getString());
    FIX::LegMaturityTime LegMaturityTime_4("TZTIMEONLY_1623678705");
    noLegs_0_2.set(LegMaturityTime_4);
    InstrumentLeg_4.insert(LegMaturityTime_4.getString());
    FIX::LegOptAttribute LegOptAttribute_4('1');
    noLegs_0_2.set(LegOptAttribute_4);
    InstrumentLeg_4.insert(LegOptAttribute_4.getString());
    FIX::LegOptionRatio LegOptionRatio_4;
    LegOptionRatio_4.setString("1195370");
    noLegs_0_2.set(LegOptionRatio_4);
    InstrumentLeg_4.insert(LegOptionRatio_4.getString());
    FIX::LegPool LegPool_4("STRING_562572741");
    noLegs_0_2.set(LegPool_4);
    InstrumentLeg_4.insert(LegPool_4.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_4("STRING_1594973118");
    noLegs_0_2.set(LegPriceUnitOfMeasure_4);
    InstrumentLeg_4.insert(LegPriceUnitOfMeasure_4.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_4;
    LegPriceUnitOfMeasureQty_4.setString("16702134");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_4);
    InstrumentLeg_4.insert(LegPriceUnitOfMeasureQty_4.getString());
    FIX::LegProduct LegProduct_4(1393837313);
    noLegs_0_2.set(LegProduct_4);
    InstrumentLeg_4.insert(LegProduct_4.getString());
    FIX::LegPutOrCall LegPutOrCall_4(250520860);
    noLegs_0_2.set(LegPutOrCall_4);
    InstrumentLeg_4.insert(LegPutOrCall_4.getString());
    FIX::LegRatioQty LegRatioQty_4;
    LegRatioQty_4.setString("14074787");
    noLegs_0_2.set(LegRatioQty_4);
    InstrumentLeg_4.insert(LegRatioQty_4.getString());
    FIX::LegRedemptionDate LegRedemptionDate_4("LOCALMKTDATE_2071334668");
    noLegs_0_2.set(LegRedemptionDate_4);
    InstrumentLeg_4.insert(LegRedemptionDate_4.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_4("STRING_1945514788");
    noLegs_0_2.set(LegRepoCollateralSecurityType_4);
    InstrumentLeg_4.insert(LegRepoCollateralSecurityType_4.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_4;
    LegRepurchaseRate_4.setString("50.570000");
    noLegs_0_2.set(LegRepurchaseRate_4);
    InstrumentLeg_4.insert(LegRepurchaseRate_4.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_4(2090245642);
    noLegs_0_2.set(LegRepurchaseTerm_4);
    InstrumentLeg_4.insert(LegRepurchaseTerm_4.getString());
    FIX::LegSecurityDesc LegSecurityDesc_4("STRING_969193256");
    noLegs_0_2.set(LegSecurityDesc_4);
    InstrumentLeg_4.insert(LegSecurityDesc_4.getString());
    FIX::LegSecurityExchange LegSecurityExchange_4("EXCHANGE_763951443");
    noLegs_0_2.set(LegSecurityExchange_4);
    InstrumentLeg_4.insert(LegSecurityExchange_4.getString());
    FIX::LegSecurityID LegSecurityID_4("STRING_1624353386");
    noLegs_0_2.set(LegSecurityID_4);
    InstrumentLeg_4.insert(LegSecurityID_4.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_4("STRING_348565236");
    noLegs_0_2.set(LegSecurityIDSource_4);
    InstrumentLeg_4.insert(LegSecurityIDSource_4.getString());
    FIX::LegSecuritySubType LegSecuritySubType_4("STRING_1126211537");
    noLegs_0_2.set(LegSecuritySubType_4);
    InstrumentLeg_4.insert(LegSecuritySubType_4.getString());
    FIX::LegSecurityType LegSecurityType_4("STRING_775612461");
    noLegs_0_2.set(LegSecurityType_4);
    InstrumentLeg_4.insert(LegSecurityType_4.getString());
    FIX::LegSide LegSide_4('1');
    noLegs_0_2.set(LegSide_4);
    InstrumentLeg_4.insert(LegSide_4.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_4("STRING_2138730340");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_4);
    InstrumentLeg_4.insert(LegStateOrProvinceOfIssue_4.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_4("CHF");
    noLegs_0_2.set(LegStrikeCurrency_4);
    InstrumentLeg_4.insert(LegStrikeCurrency_4.getString());
    FIX::LegStrikePrice LegStrikePrice_4;
    LegStrikePrice_4.setString("5880900");
    noLegs_0_2.set(LegStrikePrice_4);
    InstrumentLeg_4.insert(LegStrikePrice_4.getString());
    FIX::LegSymbol LegSymbol_4("STRING_891286882");
    noLegs_0_2.set(LegSymbol_4);
    InstrumentLeg_4.insert(LegSymbol_4.getString());
    FIX::LegSymbolSfx LegSymbolSfx_4("STRING_1639188906");
    noLegs_0_2.set(LegSymbolSfx_4);
    InstrumentLeg_4.insert(LegSymbolSfx_4.getString());
    FIX::LegTimeUnit LegTimeUnit_4("STRING_678384320");
    noLegs_0_2.set(LegTimeUnit_4);
    InstrumentLeg_4.insert(LegTimeUnit_4.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_4("STRING_1107837500");
    noLegs_0_2.set(LegUnitOfMeasure_4);
    InstrumentLeg_4.insert(LegUnitOfMeasure_4.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_4;
    LegUnitOfMeasureQty_4.setString("9397454");
    noLegs_0_2.set(LegUnitOfMeasureQty_4);
    InstrumentLeg_4.insert(LegUnitOfMeasureQty_4.getString());
    all_values.push_back(InstrumentLeg_4);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_9;
      FIX::LegSecurityAltID LegSecurityAltID_9("STRING_673862195");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_9);
      LegSecAltIDGrp_NoLegSecurityAltID_9.insert(LegSecurityAltID_9.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_9("STRING_415940534");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_9);
      LegSecAltIDGrp_NoLegSecurityAltID_9.insert(LegSecurityAltIDSource_9.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_9);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_10;
      FIX::LegSecurityAltID LegSecurityAltID_10("STRING_1858361253");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_10);
      LegSecAltIDGrp_NoLegSecurityAltID_10.insert(LegSecurityAltID_10.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_10("STRING_793399282");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_10);
      LegSecAltIDGrp_NoLegSecurityAltID_10.insert(LegSecurityAltIDSource_10.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_10);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_11;
      FIX::LegSecurityAltID LegSecurityAltID_11("STRING_978513275");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_11);
      LegSecAltIDGrp_NoLegSecurityAltID_11.insert(LegSecurityAltID_11.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_11("STRING_1305850723");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_11);
      LegSecAltIDGrp_NoLegSecurityAltID_11.insert(LegSecurityAltIDSource_11.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_11);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_2;
  FIX::AttachmentPoint AttachmentPoint_2;
  AttachmentPoint_2.setString("90.440000");
  msg.set(AttachmentPoint_2);
  Instrument_2.insert(AttachmentPoint_2.getString());
  FIX::CFICode CFICode_2("STRING_224866940");
  msg.set(CFICode_2);
  Instrument_2.insert(CFICode_2.getString());
  FIX::CPProgram CPProgram_2(99);
  msg.set(CPProgram_2);
  Instrument_2.insert(CPProgram_2.getString());
  FIX::CPRegType CPRegType_2("STRING_1723607804");
  msg.set(CPRegType_2);
  Instrument_2.insert(CPRegType_2.getString());
  FIX::CapPrice CapPrice_2;
  CapPrice_2.setString("1487179");
  msg.set(CapPrice_2);
  Instrument_2.insert(CapPrice_2.getString());
  FIX::ContractMultiplier ContractMultiplier_2;
  ContractMultiplier_2.setString("13544027");
  msg.set(ContractMultiplier_2);
  Instrument_2.insert(ContractMultiplier_2.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_2(2);
  msg.set(ContractMultiplierUnit_2);
  Instrument_2.insert(ContractMultiplierUnit_2.getString());
  FIX::ContractSettlMonth ContractSettlMonth_2("MONTHYEAR_91479955");
  msg.set(ContractSettlMonth_2);
  Instrument_2.insert(ContractSettlMonth_2.getString());
  FIX::CountryOfIssue CountryOfIssue_2("COUNTRY_176112331");
  msg.set(CountryOfIssue_2);
  Instrument_2.insert(CountryOfIssue_2.getString());
  FIX::CouponPaymentDate CouponPaymentDate_2("LOCALMKTDATE_662520657");
  msg.set(CouponPaymentDate_2);
  Instrument_2.insert(CouponPaymentDate_2.getString());
  FIX::CouponRate CouponRate_2;
  CouponRate_2.setString("33.410000");
  msg.set(CouponRate_2);
  Instrument_2.insert(CouponRate_2.getString());
  FIX::CreditRating CreditRating_2("STRING_524677567");
  msg.set(CreditRating_2);
  Instrument_2.insert(CreditRating_2.getString());
  FIX::DatedDate DatedDate_2("LOCALMKTDATE_1788732194");
  msg.set(DatedDate_2);
  Instrument_2.insert(DatedDate_2.getString());
  FIX::DetachmentPoint DetachmentPoint_2;
  DetachmentPoint_2.setString("21.550000");
  msg.set(DetachmentPoint_2);
  Instrument_2.insert(DetachmentPoint_2.getString());
  FIX::EncodedIssuer EncodedIssuer_2("DATA_2102016568");
  msg.set(EncodedIssuer_2);
  Instrument_2.insert(EncodedIssuer_2.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_2(1779978887);
  msg.set(EncodedIssuerLen_2);
  Instrument_2.insert(EncodedIssuerLen_2.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_2("DATA_1869118196");
  msg.set(EncodedSecurityDesc_2);
  Instrument_2.insert(EncodedSecurityDesc_2.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_2(1082345291);
  msg.set(EncodedSecurityDescLen_2);
  Instrument_2.insert(EncodedSecurityDescLen_2.getString());
  FIX::ExerciseStyle ExerciseStyle_2(0);
  msg.set(ExerciseStyle_2);
  Instrument_2.insert(ExerciseStyle_2.getString());
  FIX::Factor Factor_2;
  Factor_2.setString("6129214");
  msg.set(Factor_2);
  Instrument_2.insert(Factor_2.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_2(false);
  msg.set(FlexProductEligibilityIndicator_2);
  Instrument_2.insert(FlexProductEligibilityIndicator_2.getString());
  FIX::FlexibleIndicator FlexibleIndicator_2(true);
  msg.set(FlexibleIndicator_2);
  Instrument_2.insert(FlexibleIndicator_2.getString());
  FIX::FloorPrice FloorPrice_2;
  FloorPrice_2.setString("17207589");
  msg.set(FloorPrice_2);
  Instrument_2.insert(FloorPrice_2.getString());
  FIX::FlowScheduleType FlowScheduleType_2(1);
  msg.set(FlowScheduleType_2);
  Instrument_2.insert(FlowScheduleType_2.getString());
  FIX::InstrRegistry InstrRegistry_2("STRING_926281436");
  msg.set(InstrRegistry_2);
  Instrument_2.insert(InstrRegistry_2.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_2('2');
  msg.set(InstrmtAssignmentMethod_2);
  Instrument_2.insert(InstrmtAssignmentMethod_2.getString());
  FIX::InterestAccrualDate InterestAccrualDate_2("LOCALMKTDATE_1929736560");
  msg.set(InterestAccrualDate_2);
  Instrument_2.insert(InterestAccrualDate_2.getString());
  FIX::IssueDate IssueDate_2("LOCALMKTDATE_637159041");
  msg.set(IssueDate_2);
  Instrument_2.insert(IssueDate_2.getString());
  FIX::Issuer Issuer_2("STRING_1040536761");
  msg.set(Issuer_2);
  Instrument_2.insert(Issuer_2.getString());
  FIX::ListMethod ListMethod_2(1);
  msg.set(ListMethod_2);
  Instrument_2.insert(ListMethod_2.getString());
  FIX::LocaleOfIssue LocaleOfIssue_2("STRING_1943009764");
  msg.set(LocaleOfIssue_2);
  Instrument_2.insert(LocaleOfIssue_2.getString());
  FIX::MaturityDate MaturityDate_2("LOCALMKTDATE_1356665805");
  msg.set(MaturityDate_2);
  Instrument_2.insert(MaturityDate_2.getString());
  FIX::MaturityMonthYear MaturityMonthYear_2("MONTHYEAR_985633128");
  msg.set(MaturityMonthYear_2);
  Instrument_2.insert(MaturityMonthYear_2.getString());
  FIX::MaturityTime MaturityTime_2("TZTIMEONLY_1351897700");
  msg.set(MaturityTime_2);
  Instrument_2.insert(MaturityTime_2.getString());
  FIX::MinPriceIncrement MinPriceIncrement_2;
  MinPriceIncrement_2.setString("9327899");
  msg.set(MinPriceIncrement_2);
  Instrument_2.insert(MinPriceIncrement_2.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_2;
  MinPriceIncrementAmount_2.setString("11343510");
  msg.set(MinPriceIncrementAmount_2);
  Instrument_2.insert(MinPriceIncrementAmount_2.getString());
  FIX::NTPositionLimit NTPositionLimit_2(558816775);
  msg.set(NTPositionLimit_2);
  Instrument_2.insert(NTPositionLimit_2.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_2;
  NotionalPercentageOutstanding_2.setString("91.750000");
  msg.set(NotionalPercentageOutstanding_2);
  Instrument_2.insert(NotionalPercentageOutstanding_2.getString());
  FIX::OptAttribute OptAttribute_2('1');
  msg.set(OptAttribute_2);
  Instrument_2.insert(OptAttribute_2.getString());
  FIX::OptPayoutAmount OptPayoutAmount_2;
  OptPayoutAmount_2.setString("7349291");
  msg.set(OptPayoutAmount_2);
  Instrument_2.insert(OptPayoutAmount_2.getString());
  FIX::OptPayoutType OptPayoutType_2(2);
  msg.set(OptPayoutType_2);
  Instrument_2.insert(OptPayoutType_2.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_2;
  OriginalNotionalPercentageOutstanding_2.setString("7.380000");
  msg.set(OriginalNotionalPercentageOutstanding_2);
  Instrument_2.insert(OriginalNotionalPercentageOutstanding_2.getString());
  FIX::Pool Pool_2("STRING_1259606674");
  msg.set(Pool_2);
  Instrument_2.insert(Pool_2.getString());
  FIX::PositionLimit PositionLimit_2(1135128379);
  msg.set(PositionLimit_2);
  Instrument_2.insert(PositionLimit_2.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_2("STRING_INX");
  msg.set(PriceQuoteMethod_2);
  Instrument_2.insert(PriceQuoteMethod_2.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_2("STRING_1214139594");
  msg.set(PriceUnitOfMeasure_2);
  Instrument_2.insert(PriceUnitOfMeasure_2.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_2;
  PriceUnitOfMeasureQty_2.setString("7676236");
  msg.set(PriceUnitOfMeasureQty_2);
  Instrument_2.insert(PriceUnitOfMeasureQty_2.getString());
  FIX::Product Product_2(4);
  msg.set(Product_2);
  Instrument_2.insert(Product_2.getString());
  FIX::ProductComplex ProductComplex_2("STRING_149001238");
  msg.set(ProductComplex_2);
  Instrument_2.insert(ProductComplex_2.getString());
  FIX::PutOrCall PutOrCall_2(0);
  msg.set(PutOrCall_2);
  Instrument_2.insert(PutOrCall_2.getString());
  FIX::RedemptionDate RedemptionDate_2("LOCALMKTDATE_1472698872");
  msg.set(RedemptionDate_2);
  Instrument_2.insert(RedemptionDate_2.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_2("STRING_723051787");
  msg.set(RepoCollateralSecurityType_2);
  Instrument_2.insert(RepoCollateralSecurityType_2.getString());
  FIX::RepurchaseRate RepurchaseRate_2;
  RepurchaseRate_2.setString("84.350000");
  msg.set(RepurchaseRate_2);
  Instrument_2.insert(RepurchaseRate_2.getString());
  FIX::RepurchaseTerm RepurchaseTerm_2(1045974155);
  msg.set(RepurchaseTerm_2);
  Instrument_2.insert(RepurchaseTerm_2.getString());
  FIX::RestructuringType RestructuringType_2("STRING_MR");
  msg.set(RestructuringType_2);
  Instrument_2.insert(RestructuringType_2.getString());
  FIX::SecurityDesc SecurityDesc_2("STRING_665976223");
  msg.set(SecurityDesc_2);
  Instrument_2.insert(SecurityDesc_2.getString());
  FIX::SecurityExchange SecurityExchange_2("EXCHANGE_1293111634");
  msg.set(SecurityExchange_2);
  Instrument_2.insert(SecurityExchange_2.getString());
  FIX::SecurityGroup SecurityGroup_2("STRING_2019100725");
  msg.set(SecurityGroup_2);
  Instrument_2.insert(SecurityGroup_2.getString());
  FIX::SecurityID SecurityID_2("STRING_1303135264");
  msg.set(SecurityID_2);
  Instrument_2.insert(SecurityID_2.getString());
  FIX::SecurityIDSource SecurityIDSource_2("STRING_M");
  msg.set(SecurityIDSource_2);
  Instrument_2.insert(SecurityIDSource_2.getString());
  FIX::SecurityStatus SecurityStatus_2("STRING_2");
  msg.set(SecurityStatus_2);
  Instrument_2.insert(SecurityStatus_2.getString());
  FIX::SecuritySubType SecuritySubType_2("STRING_1098661380");
  msg.set(SecuritySubType_2);
  Instrument_2.insert(SecuritySubType_2.getString());
  FIX::SecurityType SecurityType_2("STRING_OOP");
  msg.set(SecurityType_2);
  Instrument_2.insert(SecurityType_2.getString());
  FIX::Seniority Seniority_2("STRING_SB");
  msg.set(Seniority_2);
  Instrument_2.insert(Seniority_2.getString());
  FIX::SettlMethod SettlMethod_2('C');
  msg.set(SettlMethod_2);
  Instrument_2.insert(SettlMethod_2.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_2("STRING_328136865");
  msg.set(SettleOnOpenFlag_2);
  Instrument_2.insert(SettleOnOpenFlag_2.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_2("STRING_604883834");
  msg.set(StateOrProvinceOfIssue_2);
  Instrument_2.insert(StateOrProvinceOfIssue_2.getString());
  FIX::StrikeCurrency StrikeCurrency_2("EUR");
  msg.set(StrikeCurrency_2);
  Instrument_2.insert(StrikeCurrency_2.getString());
  FIX::StrikeMultiplier StrikeMultiplier_2;
  StrikeMultiplier_2.setString("18307148");
  msg.set(StrikeMultiplier_2);
  Instrument_2.insert(StrikeMultiplier_2.getString());
  FIX::StrikePrice StrikePrice_2;
  StrikePrice_2.setString("15968213");
  msg.set(StrikePrice_2);
  Instrument_2.insert(StrikePrice_2.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_2(2);
  msg.set(StrikePriceBoundaryMethod_2);
  Instrument_2.insert(StrikePriceBoundaryMethod_2.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_2;
  StrikePriceBoundaryPrecision_2.setString("19.680000");
  msg.set(StrikePriceBoundaryPrecision_2);
  Instrument_2.insert(StrikePriceBoundaryPrecision_2.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_2(2);
  msg.set(StrikePriceDeterminationMethod_2);
  Instrument_2.insert(StrikePriceDeterminationMethod_2.getString());
  FIX::StrikeValue StrikeValue_2;
  StrikeValue_2.setString("16410206");
  msg.set(StrikeValue_2);
  Instrument_2.insert(StrikeValue_2.getString());
  FIX::Symbol Symbol_2("STRING_1615554861");
  msg.set(Symbol_2);
  Instrument_2.insert(Symbol_2.getString());
  FIX::SymbolSfx SymbolSfx_2("STRING_CD");
  msg.set(SymbolSfx_2);
  Instrument_2.insert(SymbolSfx_2.getString());
  FIX::TimeUnit TimeUnit_2("STRING_Mo");
  msg.set(TimeUnit_2);
  Instrument_2.insert(TimeUnit_2.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_2(4);
  msg.set(UnderlyingPriceDeterminationMethod_2);
  Instrument_2.insert(UnderlyingPriceDeterminationMethod_2.getString());
  FIX::UnitOfMeasure UnitOfMeasure_2("STRING_MWh");
  msg.set(UnitOfMeasure_2);
  Instrument_2.insert(UnitOfMeasure_2.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_2;
  UnitOfMeasureQty_2.setString("12493694");
  msg.set(UnitOfMeasureQty_2);
  Instrument_2.insert(UnitOfMeasureQty_2.getString());
  FIX::ValuationMethod ValuationMethod_2("STRING_FUTDA");
  msg.set(ValuationMethod_2);
  Instrument_2.insert(ValuationMethod_2.getString());
  all_values.push_back(Instrument_2);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_4;
    FIX::ComplexEventCondition ComplexEventCondition_4(2);
    noComplexEvents_0_0.set(ComplexEventCondition_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventCondition_4.getString());
    FIX::ComplexEventPrice ComplexEventPrice_4;
    ComplexEventPrice_4.setString("6990380");
    noComplexEvents_0_0.set(ComplexEventPrice_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventPrice_4.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_4(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceBoundaryMethod_4.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_4;
    ComplexEventPriceBoundaryPrecision_4.setString("4.520000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceBoundaryPrecision_4.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_4(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceTimeType_4.getString());
    FIX::ComplexEventType ComplexEventType_4(8);
    noComplexEvents_0_0.set(ComplexEventType_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventType_4.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_4;
    ComplexOptPayoutAmount_4.setString("8106920");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexOptPayoutAmount_4.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_4);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_10;
      FIX::ComplexEventEndDate ComplexEventEndDate_10(FIX::UTCTIMESTAMP(17, 40, 6, 17, 2, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_10);
      ComplexEventDates_NoComplexEventDates_10.insert(ComplexEventEndDate_10.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_10(FIX::UTCTIMESTAMP(18, 51, 8, 16, 12, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_10);
      ComplexEventDates_NoComplexEventDates_10.insert(ComplexEventStartDate_10.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_10);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_20;
        FIX::ComplexEventEndTime ComplexEventEndTime_20(FIX::UTCTIMEONLY(10, 58, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_20);
        ComplexEventTimes_NoComplexEventTimes_20.insert(ComplexEventEndTime_20.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_20(FIX::UTCTIMEONLY(4, 47, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_20);
        ComplexEventTimes_NoComplexEventTimes_20.insert(ComplexEventStartTime_20.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_20);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_11;
      FIX::ComplexEventEndDate ComplexEventEndDate_11(FIX::UTCTIMESTAMP(6, 8, 6, 15, 2, 2005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_11);
      ComplexEventDates_NoComplexEventDates_11.insert(ComplexEventEndDate_11.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_11(FIX::UTCTIMESTAMP(10, 56, 43, 25, 6, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_11);
      ComplexEventDates_NoComplexEventDates_11.insert(ComplexEventStartDate_11.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_11);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_21;
        FIX::ComplexEventEndTime ComplexEventEndTime_21(FIX::UTCTIMEONLY(7, 48, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_21);
        ComplexEventTimes_NoComplexEventTimes_21.insert(ComplexEventEndTime_21.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_21(FIX::UTCTIMEONLY(0, 21, 18));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_21);
        ComplexEventTimes_NoComplexEventTimes_21.insert(ComplexEventStartTime_21.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_21);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_22;
        FIX::ComplexEventEndTime ComplexEventEndTime_22(FIX::UTCTIMEONLY(23, 8, 13));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_22);
        ComplexEventTimes_NoComplexEventTimes_22.insert(ComplexEventEndTime_22.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_22(FIX::UTCTIMEONLY(12, 0, 25));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_22);
        ComplexEventTimes_NoComplexEventTimes_22.insert(ComplexEventStartTime_22.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_22);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_23;
        FIX::ComplexEventEndTime ComplexEventEndTime_23(FIX::UTCTIMEONLY(11, 33, 41));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_23);
        ComplexEventTimes_NoComplexEventTimes_23.insert(ComplexEventEndTime_23.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_23(FIX::UTCTIMEONLY(22, 8, 42));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_23);
        ComplexEventTimes_NoComplexEventTimes_23.insert(ComplexEventStartTime_23.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_23);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_12;
      FIX::ComplexEventEndDate ComplexEventEndDate_12(FIX::UTCTIMESTAMP(4, 17, 22, 21, 7, 2001));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_12);
      ComplexEventDates_NoComplexEventDates_12.insert(ComplexEventEndDate_12.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_12(FIX::UTCTIMESTAMP(18, 8, 40, 26, 1, 2011));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_12);
      ComplexEventDates_NoComplexEventDates_12.insert(ComplexEventStartDate_12.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_12);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_24;
        FIX::ComplexEventEndTime ComplexEventEndTime_24(FIX::UTCTIMEONLY(17, 24, 46));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_24);
        ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventEndTime_24.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_24(FIX::UTCTIMEONLY(16, 46, 17));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_24);
        ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventStartTime_24.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_24);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_25;
        FIX::ComplexEventEndTime ComplexEventEndTime_25(FIX::UTCTIMEONLY(9, 51, 32));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_25);
        ComplexEventTimes_NoComplexEventTimes_25.insert(ComplexEventEndTime_25.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_25(FIX::UTCTIMEONLY(17, 40, 26));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_25);
        ComplexEventTimes_NoComplexEventTimes_25.insert(ComplexEventStartTime_25.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_25);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_5;
    FIX::ComplexEventCondition ComplexEventCondition_5(1);
    noComplexEvents_0_1.set(ComplexEventCondition_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventCondition_5.getString());
    FIX::ComplexEventPrice ComplexEventPrice_5;
    ComplexEventPrice_5.setString("15774412");
    noComplexEvents_0_1.set(ComplexEventPrice_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPrice_5.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_5(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceBoundaryMethod_5.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_5;
    ComplexEventPriceBoundaryPrecision_5.setString("68.120000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceBoundaryPrecision_5.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_5(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceTimeType_5.getString());
    FIX::ComplexEventType ComplexEventType_5(3);
    noComplexEvents_0_1.set(ComplexEventType_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventType_5.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_5;
    ComplexOptPayoutAmount_5.setString("12490523");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexOptPayoutAmount_5.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_5);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_13;
      FIX::ComplexEventEndDate ComplexEventEndDate_13(FIX::UTCTIMESTAMP(4, 54, 38, 16, 4, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_13);
      ComplexEventDates_NoComplexEventDates_13.insert(ComplexEventEndDate_13.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_13(FIX::UTCTIMESTAMP(8, 10, 51, 21, 7, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_13);
      ComplexEventDates_NoComplexEventDates_13.insert(ComplexEventStartDate_13.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_13);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_26;
        FIX::ComplexEventEndTime ComplexEventEndTime_26(FIX::UTCTIMEONLY(3, 29, 33));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventEndTime_26.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_26(FIX::UTCTIMEONLY(23, 5, 9));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventStartTime_26.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_26);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_27;
        FIX::ComplexEventEndTime ComplexEventEndTime_27(FIX::UTCTIMEONLY(17, 44, 54));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_27);
        ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventEndTime_27.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_27(FIX::UTCTIMEONLY(22, 38, 49));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_27);
        ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventStartTime_27.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_27);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_14;
      FIX::ComplexEventEndDate ComplexEventEndDate_14(FIX::UTCTIMESTAMP(18, 35, 40, 14, 3, 2002));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_14);
      ComplexEventDates_NoComplexEventDates_14.insert(ComplexEventEndDate_14.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_14(FIX::UTCTIMESTAMP(3, 28, 58, 8, 12, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_14);
      ComplexEventDates_NoComplexEventDates_14.insert(ComplexEventStartDate_14.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_14);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_28;
        FIX::ComplexEventEndTime ComplexEventEndTime_28(FIX::UTCTIMEONLY(2, 20, 30));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_28);
        ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventEndTime_28.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_28(FIX::UTCTIMEONLY(19, 27, 2));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_28);
        ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventStartTime_28.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_28);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_29;
        FIX::ComplexEventEndTime ComplexEventEndTime_29(FIX::UTCTIMEONLY(9, 47, 38));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_29);
        ComplexEventTimes_NoComplexEventTimes_29.insert(ComplexEventEndTime_29.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_29(FIX::UTCTIMEONLY(13, 16, 17));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_29);
        ComplexEventTimes_NoComplexEventTimes_29.insert(ComplexEventStartTime_29.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_29);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_6;
    FIX::ComplexEventCondition ComplexEventCondition_6(1);
    noComplexEvents_0_2.set(ComplexEventCondition_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventCondition_6.getString());
    FIX::ComplexEventPrice ComplexEventPrice_6;
    ComplexEventPrice_6.setString("19346723");
    noComplexEvents_0_2.set(ComplexEventPrice_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPrice_6.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_6(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceBoundaryMethod_6.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_6;
    ComplexEventPriceBoundaryPrecision_6.setString("9.960000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceBoundaryPrecision_6.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_6(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceTimeType_6.getString());
    FIX::ComplexEventType ComplexEventType_6(2);
    noComplexEvents_0_2.set(ComplexEventType_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventType_6.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_6;
    ComplexOptPayoutAmount_6.setString("12022634");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexOptPayoutAmount_6.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_6);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_15;
      FIX::ComplexEventEndDate ComplexEventEndDate_15(FIX::UTCTIMESTAMP(11, 45, 1, 18, 2, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_15);
      ComplexEventDates_NoComplexEventDates_15.insert(ComplexEventEndDate_15.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_15(FIX::UTCTIMESTAMP(7, 12, 1, 1, 12, 2010));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_15);
      ComplexEventDates_NoComplexEventDates_15.insert(ComplexEventStartDate_15.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_15);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_30;
        FIX::ComplexEventEndTime ComplexEventEndTime_30(FIX::UTCTIMEONLY(1, 6, 58));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_30);
        ComplexEventTimes_NoComplexEventTimes_30.insert(ComplexEventEndTime_30.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_30(FIX::UTCTIMEONLY(20, 6, 14));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_30);
        ComplexEventTimes_NoComplexEventTimes_30.insert(ComplexEventStartTime_30.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_30);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_16;
      FIX::ComplexEventEndDate ComplexEventEndDate_16(FIX::UTCTIMESTAMP(21, 58, 16, 1, 10, 2011));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_16);
      ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventEndDate_16.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_16(FIX::UTCTIMESTAMP(18, 3, 50, 20, 6, 2009));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_16);
      ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventStartDate_16.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_16);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_31;
        FIX::ComplexEventEndTime ComplexEventEndTime_31(FIX::UTCTIMEONLY(11, 28, 33));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_31);
        ComplexEventTimes_NoComplexEventTimes_31.insert(ComplexEventEndTime_31.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_31(FIX::UTCTIMEONLY(15, 54, 19));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_31);
        ComplexEventTimes_NoComplexEventTimes_31.insert(ComplexEventStartTime_31.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_31);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_32;
        FIX::ComplexEventEndTime ComplexEventEndTime_32(FIX::UTCTIMEONLY(11, 18, 12));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_32);
        ComplexEventTimes_NoComplexEventTimes_32.insert(ComplexEventEndTime_32.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_32(FIX::UTCTIMEONLY(2, 19, 35));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_32);
        ComplexEventTimes_NoComplexEventTimes_32.insert(ComplexEventStartTime_32.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_32);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_17;
      FIX::ComplexEventEndDate ComplexEventEndDate_17(FIX::UTCTIMESTAMP(8, 34, 6, 17, 12, 2016));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_17);
      ComplexEventDates_NoComplexEventDates_17.insert(ComplexEventEndDate_17.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_17(FIX::UTCTIMESTAMP(5, 1, 17, 1, 11, 2002));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_17);
      ComplexEventDates_NoComplexEventDates_17.insert(ComplexEventStartDate_17.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_17);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_33;
        FIX::ComplexEventEndTime ComplexEventEndTime_33(FIX::UTCTIMEONLY(23, 53, 36));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_33);
        ComplexEventTimes_NoComplexEventTimes_33.insert(ComplexEventEndTime_33.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_33(FIX::UTCTIMEONLY(12, 30, 51));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_33);
        ComplexEventTimes_NoComplexEventTimes_33.insert(ComplexEventStartTime_33.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_33);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
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
    multiset<string> EvntGrp_NoEvents_4;
    FIX::EventDate EventDate_4("LOCALMKTDATE_511946934");
    noEvents_0_0.set(EventDate_4);
    EvntGrp_NoEvents_4.insert(EventDate_4.getString());
    FIX::EventPx EventPx_4;
    EventPx_4.setString("6513359");
    noEvents_0_0.set(EventPx_4);
    EvntGrp_NoEvents_4.insert(EventPx_4.getString());
    FIX::EventText EventText_4("STRING_1570387");
    noEvents_0_0.set(EventText_4);
    EvntGrp_NoEvents_4.insert(EventText_4.getString());
    FIX::EventTime EventTime_4(FIX::UTCTIMESTAMP(23, 26, 50, 13, 11, 2006));
    noEvents_0_0.set(EventTime_4);
    EvntGrp_NoEvents_4.insert(EventTime_4.getString());
    FIX::EventType EventType_4(99);
    noEvents_0_0.set(EventType_4);
    EvntGrp_NoEvents_4.insert(EventType_4.getString());
    all_values.push_back(EvntGrp_NoEvents_4);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_3;
    FIX::InstrumentPartyID InstrumentPartyID_3("STRING_1287591819");
    noInstrumentParties_0_0.set(InstrumentPartyID_3);
    InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyID_3.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_3('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_3);
    InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyIDSource_3.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_3(480524522);
    noInstrumentParties_0_0.set(InstrumentPartyRole_3);
    InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyRole_3.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_3);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6;
      FIX::InstrumentPartySubID InstrumentPartySubID_6("STRING_1815536858");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_6);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6.insert(InstrumentPartySubID_6.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_6(831263659);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_6);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6.insert(InstrumentPartySubIDType_6.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7;
      FIX::InstrumentPartySubID InstrumentPartySubID_7("STRING_1620428502");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_7);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7.insert(InstrumentPartySubID_7.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_7(475941137);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_7);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7.insert(InstrumentPartySubIDType_7.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_4;
    FIX::SecurityAltID SecurityAltID_4("STRING_1189161008");
    noSecurityAltID_0_0.set(SecurityAltID_4);
    SecAltIDGrp_NoSecurityAltID_4.insert(SecurityAltID_4.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_4("STRING_937802608");
    noSecurityAltID_0_0.set(SecurityAltIDSource_4);
    SecAltIDGrp_NoSecurityAltID_4.insert(SecurityAltIDSource_4.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_4);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_5;
    FIX::SecurityAltID SecurityAltID_5("STRING_1551333679");
    noSecurityAltID_0_1.set(SecurityAltID_5);
    SecAltIDGrp_NoSecurityAltID_5.insert(SecurityAltID_5.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_5("STRING_112971773");
    noSecurityAltID_0_1.set(SecurityAltIDSource_5);
    SecAltIDGrp_NoSecurityAltID_5.insert(SecurityAltIDSource_5.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_5);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_6;
    FIX::SecurityAltID SecurityAltID_6("STRING_1248669784");
    noSecurityAltID_0_2.set(SecurityAltID_6);
    SecAltIDGrp_NoSecurityAltID_6.insert(SecurityAltID_6.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_6("STRING_612047271");
    noSecurityAltID_0_2.set(SecurityAltIDSource_6);
    SecAltIDGrp_NoSecurityAltID_6.insert(SecurityAltIDSource_6.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_6);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_4;
  FIX::SecurityXML SecurityXML_5("XMLDATA_837381042");
  msg.set(SecurityXML_5);
  FIX::SecurityXMLLen SecurityXMLLen_2(1694003435);
  msg.set(SecurityXMLLen_2);
  FIX::SecurityXMLSchema SecurityXMLSchema_2("STRING_1106648862");
  msg.set(SecurityXMLSchema_2);
  SecurityXML_4.insert(SecurityXMLSchema_2.getString());
  all_values.push_back(SecurityXML_4);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_0;
  FIX::DeliveryForm DeliveryForm_0(2);
  msg.set(DeliveryForm_0);
  InstrumentExtension_0.insert(DeliveryForm_0.getString());
  FIX::PctAtRisk PctAtRisk_0;
  PctAtRisk_0.setString("67.210000");
  msg.set(PctAtRisk_0);
  InstrumentExtension_0.insert(PctAtRisk_0.getString());
  all_values.push_back(InstrumentExtension_0);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_0;
    FIX::InstrAttribType InstrAttribType_0(23);
    noInstrAttrib_0_0.set(InstrAttribType_0);
    AttrbGrp_NoInstrAttrib_0.insert(InstrAttribType_0.getString());
    FIX::InstrAttribValue InstrAttribValue_0("STRING_220924656");
    noInstrAttrib_0_0.set(InstrAttribValue_0);
    AttrbGrp_NoInstrAttrib_0.insert(InstrAttribValue_0.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_0);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationInstruction::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_0;
    FIX::ClOrdID ClOrdID_0("STRING_1355879351");
    noOrders_0_0.set(ClOrdID_0);
    OrdAllocGrp_NoOrders_0.insert(ClOrdID_0.getString());
    FIX::ListID ListID_0("STRING_932032406");
    noOrders_0_0.set(ListID_0);
    OrdAllocGrp_NoOrders_0.insert(ListID_0.getString());
    FIX::OrderAvgPx OrderAvgPx_0;
    OrderAvgPx_0.setString("5554220");
    noOrders_0_0.set(OrderAvgPx_0);
    OrdAllocGrp_NoOrders_0.insert(OrderAvgPx_0.getString());
    FIX::OrderBookingQty OrderBookingQty_0;
    OrderBookingQty_0.setString("12466302");
    noOrders_0_0.set(OrderBookingQty_0);
    OrdAllocGrp_NoOrders_0.insert(OrderBookingQty_0.getString());
    FIX::OrderID OrderID_0("STRING_908711863");
    noOrders_0_0.set(OrderID_0);
    OrdAllocGrp_NoOrders_0.insert(OrderID_0.getString());
    FIX::OrderQty OrderQty_0;
    OrderQty_0.setString("6003248");
    noOrders_0_0.set(OrderQty_0);
    OrdAllocGrp_NoOrders_0.insert(OrderQty_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_0("STRING_1832881021");
    noOrders_0_0.set(SecondaryClOrdID_0);
    OrdAllocGrp_NoOrders_0.insert(SecondaryClOrdID_0.getString());
    FIX::SecondaryOrderID SecondaryOrderID_0("STRING_48820034");
    noOrders_0_0.set(SecondaryOrderID_0);
    OrdAllocGrp_NoOrders_0.insert(SecondaryOrderID_0.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_0);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_0;
      FIX::Nested2PartyID Nested2PartyID_0("STRING_165921896");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyID_0.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_0('5');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyIDSource_0.getString());
      FIX::Nested2PartyRole Nested2PartyRole_0(699097142);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_0);
      NestedParties2_NoNested2PartyIDs_0.insert(Nested2PartyRole_0.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_0);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_0;
        FIX::Nested2PartySubID Nested2PartySubID_0("STRING_28876514");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_0);
        NstdPtys2SubGrp_NoNested2PartySubIDs_0.insert(Nested2PartySubID_0.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_0(1175038279);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_0);
        NstdPtys2SubGrp_NoNested2PartySubIDs_0.insert(Nested2PartySubIDType_0.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_0);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_1;
      FIX::Nested2PartyID Nested2PartyID_1("STRING_1238191667");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyID_1.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_1('1');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyIDSource_1.getString());
      FIX::Nested2PartyRole Nested2PartyRole_1(2112840887);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_1);
      NestedParties2_NoNested2PartyIDs_1.insert(Nested2PartyRole_1.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_1);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_1;
        FIX::Nested2PartySubID Nested2PartySubID_1("STRING_1331009295");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_1);
        NstdPtys2SubGrp_NoNested2PartySubIDs_1.insert(Nested2PartySubID_1.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_1(1214027024);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_1);
        NstdPtys2SubGrp_NoNested2PartySubIDs_1.insert(Nested2PartySubIDType_1.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_1);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_2;
        FIX::Nested2PartySubID Nested2PartySubID_2("STRING_1254088970");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_2);
        NstdPtys2SubGrp_NoNested2PartySubIDs_2.insert(Nested2PartySubID_2.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_2(20906689);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_2);
        NstdPtys2SubGrp_NoNested2PartySubIDs_2.insert(Nested2PartySubIDType_2.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_2);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_3;
        FIX::Nested2PartySubID Nested2PartySubID_3("STRING_760546811");
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubID_3);
        NstdPtys2SubGrp_NoNested2PartySubIDs_3.insert(Nested2PartySubID_3.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_3(213254184);
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubIDType_3);
        NstdPtys2SubGrp_NoNested2PartySubIDs_3.insert(Nested2PartySubIDType_3.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_3);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_2;
      FIX::Nested2PartyID Nested2PartyID_2("STRING_1579542934");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyID_2.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_2('8');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyIDSource_2.getString());
      FIX::Nested2PartyRole Nested2PartyRole_2(1971238995);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_2);
      NestedParties2_NoNested2PartyIDs_2.insert(Nested2PartyRole_2.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_2);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_4;
        FIX::Nested2PartySubID Nested2PartySubID_4("STRING_1039938188");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_4);
        NstdPtys2SubGrp_NoNested2PartySubIDs_4.insert(Nested2PartySubID_4.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_4(1526996749);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_4);
        NstdPtys2SubGrp_NoNested2PartySubIDs_4.insert(Nested2PartySubIDType_4.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_4);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_5;
        FIX::Nested2PartySubID Nested2PartySubID_5("STRING_200661622");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_5);
        NstdPtys2SubGrp_NoNested2PartySubIDs_5.insert(Nested2PartySubID_5.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_5(1971970594);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_5);
        NstdPtys2SubGrp_NoNested2PartySubIDs_5.insert(Nested2PartySubIDType_5.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_5);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

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
    FIX::PartyID PartyID_3("STRING_1447291907");
    noPartyIDs_0_0.set(PartyID_3);
    Parties_NoPartyIDs_3.insert(PartyID_3.getString());
    FIX::PartyIDSource PartyIDSource_3('9');
    noPartyIDs_0_0.set(PartyIDSource_3);
    Parties_NoPartyIDs_3.insert(PartyIDSource_3.getString());
    FIX::PartyRole PartyRole_3(64);
    noPartyIDs_0_0.set(PartyRole_3);
    Parties_NoPartyIDs_3.insert(PartyRole_3.getString());
    all_values.push_back(Parties_NoPartyIDs_3);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_7;
      FIX::PartySubID PartySubID_7("STRING_782018844");
      noPartySubIDs_0_1_0.set(PartySubID_7);
      PtysSubGrp_NoPartySubIDs_7.insert(PartySubID_7.getString());
      FIX::PartySubIDType PartySubIDType_7(8);
      noPartySubIDs_0_1_0.set(PartySubIDType_7);
      PtysSubGrp_NoPartySubIDs_7.insert(PartySubIDType_7.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_7);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_8;
      FIX::PartySubID PartySubID_8("STRING_1298611177");
      noPartySubIDs_0_1_1.set(PartySubID_8);
      PtysSubGrp_NoPartySubIDs_8.insert(PartySubID_8.getString());
      FIX::PartySubIDType PartySubIDType_8(22);
      noPartySubIDs_0_1_1.set(PartySubIDType_8);
      PtysSubGrp_NoPartySubIDs_8.insert(PartySubIDType_8.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_8);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_9;
      FIX::PartySubID PartySubID_9("STRING_117917417");
      noPartySubIDs_0_1_2.set(PartySubID_9);
      PtysSubGrp_NoPartySubIDs_9.insert(PartySubID_9.getString());
      FIX::PartySubIDType PartySubIDType_9(30);
      noPartySubIDs_0_1_2.set(PartySubIDType_9);
      PtysSubGrp_NoPartySubIDs_9.insert(PartySubIDType_9.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_9);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_4;
    FIX::PartyID PartyID_4("STRING_1366827017");
    noPartyIDs_0_1.set(PartyID_4);
    Parties_NoPartyIDs_4.insert(PartyID_4.getString());
    FIX::PartyIDSource PartyIDSource_4('6');
    noPartyIDs_0_1.set(PartyIDSource_4);
    Parties_NoPartyIDs_4.insert(PartyIDSource_4.getString());
    FIX::PartyRole PartyRole_4(82);
    noPartyIDs_0_1.set(PartyRole_4);
    Parties_NoPartyIDs_4.insert(PartyRole_4.getString());
    all_values.push_back(Parties_NoPartyIDs_4);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_10;
      FIX::PartySubID PartySubID_10("STRING_1258312936");
      noPartySubIDs_1_1_0.set(PartySubID_10);
      PtysSubGrp_NoPartySubIDs_10.insert(PartySubID_10.getString());
      FIX::PartySubIDType PartySubIDType_10(20);
      noPartySubIDs_1_1_0.set(PartySubIDType_10);
      PtysSubGrp_NoPartySubIDs_10.insert(PartySubIDType_10.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_10);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_11;
      FIX::PartySubID PartySubID_11("STRING_1768390187");
      noPartySubIDs_1_1_1.set(PartySubID_11);
      PtysSubGrp_NoPartySubIDs_11.insert(PartySubID_11.getString());
      FIX::PartySubIDType PartySubIDType_11(23);
      noPartySubIDs_1_1_1.set(PartySubIDType_11);
      PtysSubGrp_NoPartySubIDs_11.insert(PartySubIDType_11.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_11);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

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
    PosAmt_0.setString("17892968");
    noPosAmt_0_0.set(PosAmt_0);
    PositionAmountData_NoPosAmt_0.insert(PosAmt_0.getString());
    FIX::PosAmtType PosAmtType_0("STRING_ICPN");
    noPosAmt_0_0.set(PosAmtType_0);
    PositionAmountData_NoPosAmt_0.insert(PosAmtType_0.getString());
    FIX::PositionCurrency PositionCurrency_0("STRING_1348405957");
    noPosAmt_0_0.set(PositionCurrency_0);
    PositionAmountData_NoPosAmt_0.insert(PositionCurrency_0.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_0);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_1;
    FIX::PosAmt PosAmt_1;
    PosAmt_1.setString("12213561");
    noPosAmt_0_1.set(PosAmt_1);
    PositionAmountData_NoPosAmt_1.insert(PosAmt_1.getString());
    FIX::PosAmtType PosAmtType_1("STRING_SMTM");
    noPosAmt_0_1.set(PosAmtType_1);
    PositionAmountData_NoPosAmt_1.insert(PosAmtType_1.getString());
    FIX::PositionCurrency PositionCurrency_1("STRING_1172161304");
    noPosAmt_0_1.set(PositionCurrency_1);
    PositionAmountData_NoPosAmt_1.insert(PositionCurrency_1.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_1);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
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
    FIX::RateSourceType RateSourceType_0(1);
    noRateSources_0_0.set(RateSourceType_0);
    RateSource_NoRateSources_0.insert(RateSourceType_0.getString());
    FIX::ReferencePage ReferencePage_0("STRING_266800056");
    noRateSources_0_0.set(ReferencePage_0);
    RateSource_NoRateSources_0.insert(ReferencePage_0.getString());
    all_values.push_back(RateSource_NoRateSources_0);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_1;
    FIX::RateSource RateSource_2(1);
    noRateSources_0_1.set(RateSource_2);
    RateSource_NoRateSources_1.insert(RateSource_2.getString());
    FIX::RateSourceType RateSourceType_1(1);
    noRateSources_0_1.set(RateSourceType_1);
    RateSource_NoRateSources_1.insert(RateSourceType_1.getString());
    FIX::ReferencePage ReferencePage_1("STRING_1714091963");
    noRateSources_0_1.set(ReferencePage_1);
    RateSource_NoRateSources_1.insert(ReferencePage_1.getString());
    all_values.push_back(RateSource_NoRateSources_1);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_2;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_2;
    FIX::RateSource RateSource_3(99);
    noRateSources_0_2.set(RateSource_3);
    RateSource_NoRateSources_2.insert(RateSource_3.getString());
    FIX::RateSourceType RateSourceType_2(1);
    noRateSources_0_2.set(RateSourceType_2);
    RateSource_NoRateSources_2.insert(RateSourceType_2.getString());
    FIX::ReferencePage ReferencePage_2("STRING_699297596");
    noRateSources_0_2.set(ReferencePage_2);
    RateSource_NoRateSources_2.insert(ReferencePage_2.getString());
    all_values.push_back(RateSource_NoRateSources_2);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_0;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_0("GBP");
  msg.set(BenchmarkCurveCurrency_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurveCurrency_0.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_0("STRING_SONIA");
  msg.set(BenchmarkCurveName_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurveName_0.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_0("STRING_1327042650");
  msg.set(BenchmarkCurvePoint_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkCurvePoint_0.getString());
  FIX::BenchmarkPrice BenchmarkPrice_0;
  BenchmarkPrice_0.setString("5586072");
  msg.set(BenchmarkPrice_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkPrice_0.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_0(2146221858);
  msg.set(BenchmarkPriceType_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkPriceType_0.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_0("STRING_546386020");
  msg.set(BenchmarkSecurityID_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkSecurityID_0.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_0("STRING_1851562939");
  msg.set(BenchmarkSecurityIDSource_0);
  SpreadOrBenchmarkCurveData_0.insert(BenchmarkSecurityIDSource_0.getString());
  FIX::Spread Spread_0;
  Spread_0.setString("13852429");
  msg.set(Spread_0);
  SpreadOrBenchmarkCurveData_0.insert(Spread_0.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_0);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_0;
    FIX::StipulationType StipulationType_0("STRING_TRADERCREDIT");
    noStipulations_0_0.set(StipulationType_0);
    Stipulations_NoStipulations_0.insert(StipulationType_0.getString());
    FIX::StipulationValue StipulationValue_0("STRING_1266305765");
    noStipulations_0_0.set(StipulationValue_0);
    Stipulations_NoStipulations_0.insert(StipulationValue_0.getString());
    all_values.push_back(Stipulations_NoStipulations_0);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_1;
    FIX::StipulationType StipulationType_1("STRING_ISSUE");
    noStipulations_0_1.set(StipulationType_1);
    Stipulations_NoStipulations_1.insert(StipulationType_1.getString());
    FIX::StipulationValue StipulationValue_1("STRING_1287248539");
    noStipulations_0_1.set(StipulationValue_1);
    Stipulations_NoStipulations_1.insert(StipulationValue_1.getString());
    all_values.push_back(Stipulations_NoStipulations_1);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_2;
    FIX::StipulationType StipulationType_2("STRING_AVFICO");
    noStipulations_0_2.set(StipulationType_2);
    Stipulations_NoStipulations_2.insert(StipulationType_2.getString());
    FIX::StipulationValue StipulationValue_2("STRING_246486679");
    noStipulations_0_2.set(StipulationValue_2);
    Stipulations_NoStipulations_2.insert(StipulationValue_2.getString());
    all_values.push_back(Stipulations_NoStipulations_2);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_1;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_1("DATA_1602379847");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingIssuer_1.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_1(1467842842);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingIssuerLen_1.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_1("DATA_2129584669");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingSecurityDesc_1.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_1(627057503);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_1);
    UnderlyingInstrument_1.insert(EncodedUnderlyingSecurityDescLen_1.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_1;
    UnderlyingAdjustedQuantity_1.setString("15339812");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_1);
    UnderlyingInstrument_1.insert(UnderlyingAdjustedQuantity_1.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_1;
    UnderlyingAllocationPercent_1.setString("22.160000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_1);
    UnderlyingInstrument_1.insert(UnderlyingAllocationPercent_1.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_1;
    UnderlyingAttachmentPoint_1.setString("19.080000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_1);
    UnderlyingInstrument_1.insert(UnderlyingAttachmentPoint_1.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_1("STRING_1800781332");
    noUnderlyings_0_0.set(UnderlyingCFICode_1);
    UnderlyingInstrument_1.insert(UnderlyingCFICode_1.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_1("STRING_1400330358");
    noUnderlyings_0_0.set(UnderlyingCPProgram_1);
    UnderlyingInstrument_1.insert(UnderlyingCPProgram_1.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_1("STRING_1665341469");
    noUnderlyings_0_0.set(UnderlyingCPRegType_1);
    UnderlyingInstrument_1.insert(UnderlyingCPRegType_1.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_1;
    UnderlyingCapValue_1.setString("13673896");
    noUnderlyings_0_0.set(UnderlyingCapValue_1);
    UnderlyingInstrument_1.insert(UnderlyingCapValue_1.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_1;
    UnderlyingCashAmount_1.setString("6074036");
    noUnderlyings_0_0.set(UnderlyingCashAmount_1);
    UnderlyingInstrument_1.insert(UnderlyingCashAmount_1.getString());
    FIX::UnderlyingCashType UnderlyingCashType_1("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_1);
    UnderlyingInstrument_1.insert(UnderlyingCashType_1.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_1;
    UnderlyingContractMultiplier_1.setString("20666872");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_1);
    UnderlyingInstrument_1.insert(UnderlyingContractMultiplier_1.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_1(596495808);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_1);
    UnderlyingInstrument_1.insert(UnderlyingContractMultiplierUnit_1.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_1("COUNTRY_980417198");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingCountryOfIssue_1.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_1("LOCALMKTDATE_1917112369");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_1);
    UnderlyingInstrument_1.insert(UnderlyingCouponPaymentDate_1.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_1;
    UnderlyingCouponRate_1.setString("84.580000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_1);
    UnderlyingInstrument_1.insert(UnderlyingCouponRate_1.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_1("STRING_1539024441");
    noUnderlyings_0_0.set(UnderlyingCreditRating_1);
    UnderlyingInstrument_1.insert(UnderlyingCreditRating_1.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_1("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_1);
    UnderlyingInstrument_1.insert(UnderlyingCurrency_1.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_1;
    UnderlyingCurrentValue_1.setString("12431037");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_1);
    UnderlyingInstrument_1.insert(UnderlyingCurrentValue_1.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_1;
    UnderlyingDetachmentPoint_1.setString("98.930000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_1);
    UnderlyingInstrument_1.insert(UnderlyingDetachmentPoint_1.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_1;
    UnderlyingDirtyPrice_1.setString("13062077");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_1);
    UnderlyingInstrument_1.insert(UnderlyingDirtyPrice_1.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_1;
    UnderlyingEndPrice_1.setString("580123");
    noUnderlyings_0_0.set(UnderlyingEndPrice_1);
    UnderlyingInstrument_1.insert(UnderlyingEndPrice_1.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_1;
    UnderlyingEndValue_1.setString("2724320");
    noUnderlyings_0_0.set(UnderlyingEndValue_1);
    UnderlyingInstrument_1.insert(UnderlyingEndValue_1.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_1(1910881192);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_1);
    UnderlyingInstrument_1.insert(UnderlyingExerciseStyle_1.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_1;
    UnderlyingFXRate_1.setString("13452608");
    noUnderlyings_0_0.set(UnderlyingFXRate_1);
    UnderlyingInstrument_1.insert(UnderlyingFXRate_1.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_1('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_1);
    UnderlyingInstrument_1.insert(UnderlyingFXRateCalc_1.getString());
    FIX::UnderlyingFactor UnderlyingFactor_1;
    UnderlyingFactor_1.setString("98842");
    noUnderlyings_0_0.set(UnderlyingFactor_1);
    UnderlyingInstrument_1.insert(UnderlyingFactor_1.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_1(1570428866);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_1);
    UnderlyingInstrument_1.insert(UnderlyingFlowScheduleType_1.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_1("STRING_2128785747");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_1);
    UnderlyingInstrument_1.insert(UnderlyingInstrRegistry_1.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_1("LOCALMKTDATE_1477727065");
    noUnderlyings_0_0.set(UnderlyingIssueDate_1);
    UnderlyingInstrument_1.insert(UnderlyingIssueDate_1.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_1("STRING_1552529888");
    noUnderlyings_0_0.set(UnderlyingIssuer_1);
    UnderlyingInstrument_1.insert(UnderlyingIssuer_1.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_1("STRING_608359602");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingLocaleOfIssue_1.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_1("LOCALMKTDATE_864224693");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityDate_1.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_1("MONTHYEAR_184018456");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityMonthYear_1.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_1("TZTIMEONLY_1787091510");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_1);
    UnderlyingInstrument_1.insert(UnderlyingMaturityTime_1.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_1;
    UnderlyingNotionalPercentageOutstanding_1.setString("23.770000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_1);
    UnderlyingInstrument_1.insert(UnderlyingNotionalPercentageOutstanding_1.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_1('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_1);
    UnderlyingInstrument_1.insert(UnderlyingOptAttribute_1.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_1;
    UnderlyingOriginalNotionalPercentageOutstanding_1.setString("93.310000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_1);
    UnderlyingInstrument_1.insert(UnderlyingOriginalNotionalPercentageOutstanding_1.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_1("STRING_1884912025");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_1);
    UnderlyingInstrument_1.insert(UnderlyingPriceUnitOfMeasure_1.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_1;
    UnderlyingPriceUnitOfMeasureQty_1.setString("442688");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_1);
    UnderlyingInstrument_1.insert(UnderlyingPriceUnitOfMeasureQty_1.getString());
    FIX::UnderlyingProduct UnderlyingProduct_1(1844676704);
    noUnderlyings_0_0.set(UnderlyingProduct_1);
    UnderlyingInstrument_1.insert(UnderlyingProduct_1.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_1(1804115621);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_1);
    UnderlyingInstrument_1.insert(UnderlyingPutOrCall_1.getString());
    FIX::UnderlyingPx UnderlyingPx_1;
    UnderlyingPx_1.setString("6407646");
    noUnderlyings_0_0.set(UnderlyingPx_1);
    UnderlyingInstrument_1.insert(UnderlyingPx_1.getString());
    FIX::UnderlyingQty UnderlyingQty_1;
    UnderlyingQty_1.setString("6776102");
    noUnderlyings_0_0.set(UnderlyingQty_1);
    UnderlyingInstrument_1.insert(UnderlyingQty_1.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_1("LOCALMKTDATE_1573744342");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_1);
    UnderlyingInstrument_1.insert(UnderlyingRedemptionDate_1.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_1("STRING_416819446");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_1);
    UnderlyingInstrument_1.insert(UnderlyingRepoCollateralSecurityType_1.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_1;
    UnderlyingRepurchaseRate_1.setString("10.480000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_1);
    UnderlyingInstrument_1.insert(UnderlyingRepurchaseRate_1.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_1(1342111274);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_1);
    UnderlyingInstrument_1.insert(UnderlyingRepurchaseTerm_1.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_1("STRING_739260276");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_1);
    UnderlyingInstrument_1.insert(UnderlyingRestructuringType_1.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_1("STRING_1312254781");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityDesc_1.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_1("EXCHANGE_348237519");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityExchange_1.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_1("STRING_2045468018");
    noUnderlyings_0_0.set(UnderlyingSecurityID_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityID_1.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_1("STRING_1370267093");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityIDSource_1.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_1("STRING_620669530");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_1);
    UnderlyingInstrument_1.insert(UnderlyingSecuritySubType_1.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_1("STRING_1808865563");
    noUnderlyings_0_0.set(UnderlyingSecurityType_1);
    UnderlyingInstrument_1.insert(UnderlyingSecurityType_1.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_1("STRING_568044297");
    noUnderlyings_0_0.set(UnderlyingSeniority_1);
    UnderlyingInstrument_1.insert(UnderlyingSeniority_1.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_1("STRING_1147075430");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_1);
    UnderlyingInstrument_1.insert(UnderlyingSettlMethod_1.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_1(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_1);
    UnderlyingInstrument_1.insert(UnderlyingSettlementType_1.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_1;
    UnderlyingStartValue_1.setString("21384731");
    noUnderlyings_0_0.set(UnderlyingStartValue_1);
    UnderlyingInstrument_1.insert(UnderlyingStartValue_1.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_1("STRING_1128377530");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_1);
    UnderlyingInstrument_1.insert(UnderlyingStateOrProvinceOfIssue_1.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_1("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_1);
    UnderlyingInstrument_1.insert(UnderlyingStrikeCurrency_1.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_1;
    UnderlyingStrikePrice_1.setString("17367371");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_1);
    UnderlyingInstrument_1.insert(UnderlyingStrikePrice_1.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_1("STRING_2013217897");
    noUnderlyings_0_0.set(UnderlyingSymbol_1);
    UnderlyingInstrument_1.insert(UnderlyingSymbol_1.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_1("STRING_1727537860");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_1);
    UnderlyingInstrument_1.insert(UnderlyingSymbolSfx_1.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_1("STRING_1376344995");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_1);
    UnderlyingInstrument_1.insert(UnderlyingTimeUnit_1.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_1("STRING_383256627");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_1);
    UnderlyingInstrument_1.insert(UnderlyingUnitOfMeasure_1.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_1;
    UnderlyingUnitOfMeasureQty_1.setString("11644030");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_1);
    UnderlyingInstrument_1.insert(UnderlyingUnitOfMeasureQty_1.getString());
    all_values.push_back(UnderlyingInstrument_1);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_3;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_3("STRING_120685004");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_3);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_3.insert(UnderlyingSecurityAltID_3.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_3("STRING_1208671854");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_3);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_3.insert(UnderlyingSecurityAltIDSource_3.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_4;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_4("STRING_231003734");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_4);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_4.insert(UnderlyingSecurityAltID_4.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_4("STRING_1924800625");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_4);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_4.insert(UnderlyingSecurityAltIDSource_4.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_5;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_5("STRING_1849436490");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_5);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_5.insert(UnderlyingSecurityAltID_5.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_5("STRING_908613989");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_5);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_5.insert(UnderlyingSecurityAltIDSource_5.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_3;
      FIX::UnderlyingStipType UnderlyingStipType_3("STRING_118772288");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_3);
      UnderlyingStipulations_NoUnderlyingStips_3.insert(UnderlyingStipType_3.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_3("STRING_977765037");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_3);
      UnderlyingStipulations_NoUnderlyingStips_3.insert(UnderlyingStipValue_3.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_3);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_2;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_2("STRING_858032564");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyID_2.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_2('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyIDSource_2.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_2(893926465);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_2);
      UndlyInstrumentParties_NoUndlyInstrumentParties_2.insert(UnderlyingInstrumentPartyRole_2.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_5("STRING_1512803263");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_5);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5.insert(UnderlyingInstrumentPartySubID_5.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_5(1514595995);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_5);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5.insert(UnderlyingInstrumentPartySubIDType_5.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_2;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_2("DATA_417398850");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingIssuer_2.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_2(2080847561);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingIssuerLen_2.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_2("DATA_514187777");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingSecurityDesc_2.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_2(88664988);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_2);
    UnderlyingInstrument_2.insert(EncodedUnderlyingSecurityDescLen_2.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_2;
    UnderlyingAdjustedQuantity_2.setString("20718370");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_2);
    UnderlyingInstrument_2.insert(UnderlyingAdjustedQuantity_2.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_2;
    UnderlyingAllocationPercent_2.setString("53.070000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_2);
    UnderlyingInstrument_2.insert(UnderlyingAllocationPercent_2.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_2;
    UnderlyingAttachmentPoint_2.setString("81.920000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_2);
    UnderlyingInstrument_2.insert(UnderlyingAttachmentPoint_2.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_2("STRING_1467872833");
    noUnderlyings_0_1.set(UnderlyingCFICode_2);
    UnderlyingInstrument_2.insert(UnderlyingCFICode_2.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_2("STRING_1231818792");
    noUnderlyings_0_1.set(UnderlyingCPProgram_2);
    UnderlyingInstrument_2.insert(UnderlyingCPProgram_2.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_2("STRING_1103392442");
    noUnderlyings_0_1.set(UnderlyingCPRegType_2);
    UnderlyingInstrument_2.insert(UnderlyingCPRegType_2.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_2;
    UnderlyingCapValue_2.setString("10479270");
    noUnderlyings_0_1.set(UnderlyingCapValue_2);
    UnderlyingInstrument_2.insert(UnderlyingCapValue_2.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_2;
    UnderlyingCashAmount_2.setString("4606801");
    noUnderlyings_0_1.set(UnderlyingCashAmount_2);
    UnderlyingInstrument_2.insert(UnderlyingCashAmount_2.getString());
    FIX::UnderlyingCashType UnderlyingCashType_2("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_2);
    UnderlyingInstrument_2.insert(UnderlyingCashType_2.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_2;
    UnderlyingContractMultiplier_2.setString("648464");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_2);
    UnderlyingInstrument_2.insert(UnderlyingContractMultiplier_2.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_2(994490817);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_2);
    UnderlyingInstrument_2.insert(UnderlyingContractMultiplierUnit_2.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_2("COUNTRY_1607334073");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingCountryOfIssue_2.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_2("LOCALMKTDATE_1273518279");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_2);
    UnderlyingInstrument_2.insert(UnderlyingCouponPaymentDate_2.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_2;
    UnderlyingCouponRate_2.setString("45.520000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_2);
    UnderlyingInstrument_2.insert(UnderlyingCouponRate_2.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_2("STRING_1384651050");
    noUnderlyings_0_1.set(UnderlyingCreditRating_2);
    UnderlyingInstrument_2.insert(UnderlyingCreditRating_2.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_2("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_2);
    UnderlyingInstrument_2.insert(UnderlyingCurrency_2.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_2;
    UnderlyingCurrentValue_2.setString("5882287");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_2);
    UnderlyingInstrument_2.insert(UnderlyingCurrentValue_2.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_2;
    UnderlyingDetachmentPoint_2.setString("34.090000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_2);
    UnderlyingInstrument_2.insert(UnderlyingDetachmentPoint_2.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_2;
    UnderlyingDirtyPrice_2.setString("9643899");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_2);
    UnderlyingInstrument_2.insert(UnderlyingDirtyPrice_2.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_2;
    UnderlyingEndPrice_2.setString("11339176");
    noUnderlyings_0_1.set(UnderlyingEndPrice_2);
    UnderlyingInstrument_2.insert(UnderlyingEndPrice_2.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_2;
    UnderlyingEndValue_2.setString("19522759");
    noUnderlyings_0_1.set(UnderlyingEndValue_2);
    UnderlyingInstrument_2.insert(UnderlyingEndValue_2.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_2(1106926100);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_2);
    UnderlyingInstrument_2.insert(UnderlyingExerciseStyle_2.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_2;
    UnderlyingFXRate_2.setString("20278441");
    noUnderlyings_0_1.set(UnderlyingFXRate_2);
    UnderlyingInstrument_2.insert(UnderlyingFXRate_2.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_2('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_2);
    UnderlyingInstrument_2.insert(UnderlyingFXRateCalc_2.getString());
    FIX::UnderlyingFactor UnderlyingFactor_2;
    UnderlyingFactor_2.setString("4722457");
    noUnderlyings_0_1.set(UnderlyingFactor_2);
    UnderlyingInstrument_2.insert(UnderlyingFactor_2.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_2(1394956479);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_2);
    UnderlyingInstrument_2.insert(UnderlyingFlowScheduleType_2.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_2("STRING_978208110");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_2);
    UnderlyingInstrument_2.insert(UnderlyingInstrRegistry_2.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_2("LOCALMKTDATE_405609628");
    noUnderlyings_0_1.set(UnderlyingIssueDate_2);
    UnderlyingInstrument_2.insert(UnderlyingIssueDate_2.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_2("STRING_1909144256");
    noUnderlyings_0_1.set(UnderlyingIssuer_2);
    UnderlyingInstrument_2.insert(UnderlyingIssuer_2.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_2("STRING_1066873099");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingLocaleOfIssue_2.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_2("LOCALMKTDATE_329963057");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityDate_2.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_2("MONTHYEAR_1404225916");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityMonthYear_2.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_2("TZTIMEONLY_157047643");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_2);
    UnderlyingInstrument_2.insert(UnderlyingMaturityTime_2.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_2;
    UnderlyingNotionalPercentageOutstanding_2.setString("58.900000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_2);
    UnderlyingInstrument_2.insert(UnderlyingNotionalPercentageOutstanding_2.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_2('4');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_2);
    UnderlyingInstrument_2.insert(UnderlyingOptAttribute_2.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_2;
    UnderlyingOriginalNotionalPercentageOutstanding_2.setString("0.850000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_2);
    UnderlyingInstrument_2.insert(UnderlyingOriginalNotionalPercentageOutstanding_2.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_2("STRING_698279288");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_2);
    UnderlyingInstrument_2.insert(UnderlyingPriceUnitOfMeasure_2.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_2;
    UnderlyingPriceUnitOfMeasureQty_2.setString("9492411");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_2);
    UnderlyingInstrument_2.insert(UnderlyingPriceUnitOfMeasureQty_2.getString());
    FIX::UnderlyingProduct UnderlyingProduct_2(599605506);
    noUnderlyings_0_1.set(UnderlyingProduct_2);
    UnderlyingInstrument_2.insert(UnderlyingProduct_2.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_2(763125712);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_2);
    UnderlyingInstrument_2.insert(UnderlyingPutOrCall_2.getString());
    FIX::UnderlyingPx UnderlyingPx_2;
    UnderlyingPx_2.setString("19437320");
    noUnderlyings_0_1.set(UnderlyingPx_2);
    UnderlyingInstrument_2.insert(UnderlyingPx_2.getString());
    FIX::UnderlyingQty UnderlyingQty_2;
    UnderlyingQty_2.setString("594559");
    noUnderlyings_0_1.set(UnderlyingQty_2);
    UnderlyingInstrument_2.insert(UnderlyingQty_2.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_2("LOCALMKTDATE_2036643991");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_2);
    UnderlyingInstrument_2.insert(UnderlyingRedemptionDate_2.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_2("STRING_1021742920");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_2);
    UnderlyingInstrument_2.insert(UnderlyingRepoCollateralSecurityType_2.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_2;
    UnderlyingRepurchaseRate_2.setString("69.810000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_2);
    UnderlyingInstrument_2.insert(UnderlyingRepurchaseRate_2.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_2(864631464);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_2);
    UnderlyingInstrument_2.insert(UnderlyingRepurchaseTerm_2.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_2("STRING_1008367813");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_2);
    UnderlyingInstrument_2.insert(UnderlyingRestructuringType_2.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_2("STRING_2032335703");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityDesc_2.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_2("EXCHANGE_1958874873");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityExchange_2.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_2("STRING_1972757743");
    noUnderlyings_0_1.set(UnderlyingSecurityID_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityID_2.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_2("STRING_1018769722");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityIDSource_2.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_2("STRING_1763667199");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_2);
    UnderlyingInstrument_2.insert(UnderlyingSecuritySubType_2.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_2("STRING_932200195");
    noUnderlyings_0_1.set(UnderlyingSecurityType_2);
    UnderlyingInstrument_2.insert(UnderlyingSecurityType_2.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_2("STRING_899130206");
    noUnderlyings_0_1.set(UnderlyingSeniority_2);
    UnderlyingInstrument_2.insert(UnderlyingSeniority_2.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_2("STRING_176992811");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_2);
    UnderlyingInstrument_2.insert(UnderlyingSettlMethod_2.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_2(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_2);
    UnderlyingInstrument_2.insert(UnderlyingSettlementType_2.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_2;
    UnderlyingStartValue_2.setString("1466030");
    noUnderlyings_0_1.set(UnderlyingStartValue_2);
    UnderlyingInstrument_2.insert(UnderlyingStartValue_2.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_2("STRING_1155200922");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_2);
    UnderlyingInstrument_2.insert(UnderlyingStateOrProvinceOfIssue_2.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_2("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_2);
    UnderlyingInstrument_2.insert(UnderlyingStrikeCurrency_2.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_2;
    UnderlyingStrikePrice_2.setString("745903");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_2);
    UnderlyingInstrument_2.insert(UnderlyingStrikePrice_2.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_2("STRING_2140018597");
    noUnderlyings_0_1.set(UnderlyingSymbol_2);
    UnderlyingInstrument_2.insert(UnderlyingSymbol_2.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_2("STRING_1312489561");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_2);
    UnderlyingInstrument_2.insert(UnderlyingSymbolSfx_2.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_2("STRING_231638016");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_2);
    UnderlyingInstrument_2.insert(UnderlyingTimeUnit_2.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_2("STRING_1790370839");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_2);
    UnderlyingInstrument_2.insert(UnderlyingUnitOfMeasure_2.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_2;
    UnderlyingUnitOfMeasureQty_2.setString("18010506");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_2);
    UnderlyingInstrument_2.insert(UnderlyingUnitOfMeasureQty_2.getString());
    all_values.push_back(UnderlyingInstrument_2);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_6;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_6("STRING_341166479");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_6);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_6.insert(UnderlyingSecurityAltID_6.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_6("STRING_602808172");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_6);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_6.insert(UnderlyingSecurityAltIDSource_6.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_7;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_7("STRING_2091683608");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_7);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_7.insert(UnderlyingSecurityAltID_7.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_7("STRING_1104292192");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_7);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_7.insert(UnderlyingSecurityAltIDSource_7.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_4;
      FIX::UnderlyingStipType UnderlyingStipType_4("STRING_3655892");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_4);
      UnderlyingStipulations_NoUnderlyingStips_4.insert(UnderlyingStipType_4.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_4("STRING_993452535");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_4);
      UnderlyingStipulations_NoUnderlyingStips_4.insert(UnderlyingStipValue_4.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_4);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_3;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_3("STRING_1447762873");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyID_3.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_3('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyIDSource_3.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_3(281683627);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_3);
      UndlyInstrumentParties_NoUndlyInstrumentParties_3.insert(UnderlyingInstrumentPartyRole_3.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_6("STRING_1669475225");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_6);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6.insert(UnderlyingInstrumentPartySubID_6.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_6(106957722);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_6);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6.insert(UnderlyingInstrumentPartySubIDType_6.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_4;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_4("STRING_203901002");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyID_4.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_4('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyIDSource_4.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_4(1039157918);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_4);
      UndlyInstrumentParties_NoUndlyInstrumentParties_4.insert(UnderlyingInstrumentPartyRole_4.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_7("STRING_1462651588");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_7);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7.insert(UnderlyingInstrumentPartySubID_7.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_7(296120181);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_7);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7.insert(UnderlyingInstrumentPartySubIDType_7.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_8("STRING_1249634245");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_8);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8.insert(UnderlyingInstrumentPartySubID_8.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_8(470368862);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_8);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8.insert(UnderlyingInstrumentPartySubIDType_8.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
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
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_3("DATA_2106175720");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingIssuer_3.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_3(1157897891);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingIssuerLen_3.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_3("DATA_544959235");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingSecurityDesc_3.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_3(2098710669);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_3);
    UnderlyingInstrument_3.insert(EncodedUnderlyingSecurityDescLen_3.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_3;
    UnderlyingAdjustedQuantity_3.setString("3229038");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_3);
    UnderlyingInstrument_3.insert(UnderlyingAdjustedQuantity_3.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_3;
    UnderlyingAllocationPercent_3.setString("72.510000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_3);
    UnderlyingInstrument_3.insert(UnderlyingAllocationPercent_3.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_3;
    UnderlyingAttachmentPoint_3.setString("78.610000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_3);
    UnderlyingInstrument_3.insert(UnderlyingAttachmentPoint_3.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_3("STRING_2123954426");
    noUnderlyings_0_2.set(UnderlyingCFICode_3);
    UnderlyingInstrument_3.insert(UnderlyingCFICode_3.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_3("STRING_121191705");
    noUnderlyings_0_2.set(UnderlyingCPProgram_3);
    UnderlyingInstrument_3.insert(UnderlyingCPProgram_3.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_3("STRING_2082764340");
    noUnderlyings_0_2.set(UnderlyingCPRegType_3);
    UnderlyingInstrument_3.insert(UnderlyingCPRegType_3.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_3;
    UnderlyingCapValue_3.setString("5792789");
    noUnderlyings_0_2.set(UnderlyingCapValue_3);
    UnderlyingInstrument_3.insert(UnderlyingCapValue_3.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_3;
    UnderlyingCashAmount_3.setString("653916");
    noUnderlyings_0_2.set(UnderlyingCashAmount_3);
    UnderlyingInstrument_3.insert(UnderlyingCashAmount_3.getString());
    FIX::UnderlyingCashType UnderlyingCashType_3("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_3);
    UnderlyingInstrument_3.insert(UnderlyingCashType_3.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_3;
    UnderlyingContractMultiplier_3.setString("9783354");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_3);
    UnderlyingInstrument_3.insert(UnderlyingContractMultiplier_3.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_3(69047558);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_3);
    UnderlyingInstrument_3.insert(UnderlyingContractMultiplierUnit_3.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_3("COUNTRY_2033025420");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingCountryOfIssue_3.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_3("LOCALMKTDATE_251651305");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_3);
    UnderlyingInstrument_3.insert(UnderlyingCouponPaymentDate_3.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_3;
    UnderlyingCouponRate_3.setString("4.310000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_3);
    UnderlyingInstrument_3.insert(UnderlyingCouponRate_3.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_3("STRING_1743625772");
    noUnderlyings_0_2.set(UnderlyingCreditRating_3);
    UnderlyingInstrument_3.insert(UnderlyingCreditRating_3.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_3("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_3);
    UnderlyingInstrument_3.insert(UnderlyingCurrency_3.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_3;
    UnderlyingCurrentValue_3.setString("12656173");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_3);
    UnderlyingInstrument_3.insert(UnderlyingCurrentValue_3.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_3;
    UnderlyingDetachmentPoint_3.setString("26.540000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_3);
    UnderlyingInstrument_3.insert(UnderlyingDetachmentPoint_3.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_3;
    UnderlyingDirtyPrice_3.setString("9058427");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_3);
    UnderlyingInstrument_3.insert(UnderlyingDirtyPrice_3.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_3;
    UnderlyingEndPrice_3.setString("4037924");
    noUnderlyings_0_2.set(UnderlyingEndPrice_3);
    UnderlyingInstrument_3.insert(UnderlyingEndPrice_3.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_3;
    UnderlyingEndValue_3.setString("16794505");
    noUnderlyings_0_2.set(UnderlyingEndValue_3);
    UnderlyingInstrument_3.insert(UnderlyingEndValue_3.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_3(2008873923);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_3);
    UnderlyingInstrument_3.insert(UnderlyingExerciseStyle_3.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_3;
    UnderlyingFXRate_3.setString("18664440");
    noUnderlyings_0_2.set(UnderlyingFXRate_3);
    UnderlyingInstrument_3.insert(UnderlyingFXRate_3.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_3('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_3);
    UnderlyingInstrument_3.insert(UnderlyingFXRateCalc_3.getString());
    FIX::UnderlyingFactor UnderlyingFactor_3;
    UnderlyingFactor_3.setString("11110245");
    noUnderlyings_0_2.set(UnderlyingFactor_3);
    UnderlyingInstrument_3.insert(UnderlyingFactor_3.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_3(189329280);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_3);
    UnderlyingInstrument_3.insert(UnderlyingFlowScheduleType_3.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_3("STRING_1934262826");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_3);
    UnderlyingInstrument_3.insert(UnderlyingInstrRegistry_3.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_3("LOCALMKTDATE_121438763");
    noUnderlyings_0_2.set(UnderlyingIssueDate_3);
    UnderlyingInstrument_3.insert(UnderlyingIssueDate_3.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_3("STRING_734288515");
    noUnderlyings_0_2.set(UnderlyingIssuer_3);
    UnderlyingInstrument_3.insert(UnderlyingIssuer_3.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_3("STRING_1885489847");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingLocaleOfIssue_3.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_3("LOCALMKTDATE_444342568");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityDate_3.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_3("MONTHYEAR_1510885766");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityMonthYear_3.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_3("TZTIMEONLY_1479604060");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_3);
    UnderlyingInstrument_3.insert(UnderlyingMaturityTime_3.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_3;
    UnderlyingNotionalPercentageOutstanding_3.setString("33.460000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_3);
    UnderlyingInstrument_3.insert(UnderlyingNotionalPercentageOutstanding_3.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_3('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_3);
    UnderlyingInstrument_3.insert(UnderlyingOptAttribute_3.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_3;
    UnderlyingOriginalNotionalPercentageOutstanding_3.setString("47.530000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_3);
    UnderlyingInstrument_3.insert(UnderlyingOriginalNotionalPercentageOutstanding_3.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_3("STRING_1000092296");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_3);
    UnderlyingInstrument_3.insert(UnderlyingPriceUnitOfMeasure_3.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_3;
    UnderlyingPriceUnitOfMeasureQty_3.setString("16974691");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_3);
    UnderlyingInstrument_3.insert(UnderlyingPriceUnitOfMeasureQty_3.getString());
    FIX::UnderlyingProduct UnderlyingProduct_3(306973989);
    noUnderlyings_0_2.set(UnderlyingProduct_3);
    UnderlyingInstrument_3.insert(UnderlyingProduct_3.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_3(1978427788);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_3);
    UnderlyingInstrument_3.insert(UnderlyingPutOrCall_3.getString());
    FIX::UnderlyingPx UnderlyingPx_3;
    UnderlyingPx_3.setString("17665166");
    noUnderlyings_0_2.set(UnderlyingPx_3);
    UnderlyingInstrument_3.insert(UnderlyingPx_3.getString());
    FIX::UnderlyingQty UnderlyingQty_3;
    UnderlyingQty_3.setString("1925157");
    noUnderlyings_0_2.set(UnderlyingQty_3);
    UnderlyingInstrument_3.insert(UnderlyingQty_3.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_3("LOCALMKTDATE_82595445");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_3);
    UnderlyingInstrument_3.insert(UnderlyingRedemptionDate_3.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_3("STRING_1135843479");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_3);
    UnderlyingInstrument_3.insert(UnderlyingRepoCollateralSecurityType_3.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_3;
    UnderlyingRepurchaseRate_3.setString("15.330000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_3);
    UnderlyingInstrument_3.insert(UnderlyingRepurchaseRate_3.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_3(615930377);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_3);
    UnderlyingInstrument_3.insert(UnderlyingRepurchaseTerm_3.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_3("STRING_1837785191");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_3);
    UnderlyingInstrument_3.insert(UnderlyingRestructuringType_3.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_3("STRING_1054275235");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityDesc_3.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_3("EXCHANGE_1256223031");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityExchange_3.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_3("STRING_596144258");
    noUnderlyings_0_2.set(UnderlyingSecurityID_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityID_3.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_3("STRING_1458067713");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityIDSource_3.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_3("STRING_788189956");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_3);
    UnderlyingInstrument_3.insert(UnderlyingSecuritySubType_3.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_3("STRING_457534533");
    noUnderlyings_0_2.set(UnderlyingSecurityType_3);
    UnderlyingInstrument_3.insert(UnderlyingSecurityType_3.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_3("STRING_1177028131");
    noUnderlyings_0_2.set(UnderlyingSeniority_3);
    UnderlyingInstrument_3.insert(UnderlyingSeniority_3.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_3("STRING_616277061");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_3);
    UnderlyingInstrument_3.insert(UnderlyingSettlMethod_3.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_3(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_3);
    UnderlyingInstrument_3.insert(UnderlyingSettlementType_3.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_3;
    UnderlyingStartValue_3.setString("13663574");
    noUnderlyings_0_2.set(UnderlyingStartValue_3);
    UnderlyingInstrument_3.insert(UnderlyingStartValue_3.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_3("STRING_403056239");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_3);
    UnderlyingInstrument_3.insert(UnderlyingStateOrProvinceOfIssue_3.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_3("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_3);
    UnderlyingInstrument_3.insert(UnderlyingStrikeCurrency_3.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_3;
    UnderlyingStrikePrice_3.setString("1410624");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_3);
    UnderlyingInstrument_3.insert(UnderlyingStrikePrice_3.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_3("STRING_2134340385");
    noUnderlyings_0_2.set(UnderlyingSymbol_3);
    UnderlyingInstrument_3.insert(UnderlyingSymbol_3.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_3("STRING_1464048044");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_3);
    UnderlyingInstrument_3.insert(UnderlyingSymbolSfx_3.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_3("STRING_1620666499");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_3);
    UnderlyingInstrument_3.insert(UnderlyingTimeUnit_3.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_3("STRING_407670083");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_3);
    UnderlyingInstrument_3.insert(UnderlyingUnitOfMeasure_3.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_3;
    UnderlyingUnitOfMeasureQty_3.setString("9486418");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_3);
    UnderlyingInstrument_3.insert(UnderlyingUnitOfMeasureQty_3.getString());
    all_values.push_back(UnderlyingInstrument_3);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_8;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_8("STRING_1407762379");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_8);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_8.insert(UnderlyingSecurityAltID_8.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_8("STRING_498627358");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_8);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_8.insert(UnderlyingSecurityAltIDSource_8.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_9;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_9("STRING_1195041594");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_9);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_9.insert(UnderlyingSecurityAltID_9.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_9("STRING_1238706519");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_9);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_9.insert(UnderlyingSecurityAltIDSource_9.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_10;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_10("STRING_117660406");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_10);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_10.insert(UnderlyingSecurityAltID_10.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_10("STRING_1387557355");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_10);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_10.insert(UnderlyingSecurityAltIDSource_10.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_5;
      FIX::UnderlyingStipType UnderlyingStipType_5("STRING_1253503886");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_5);
      UnderlyingStipulations_NoUnderlyingStips_5.insert(UnderlyingStipType_5.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_5("STRING_1176215241");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_5);
      UnderlyingStipulations_NoUnderlyingStips_5.insert(UnderlyingStipValue_5.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_5);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_5;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_5("STRING_943805429");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyID_5.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_5('8');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyIDSource_5.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_5(1045971725);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_5);
      UndlyInstrumentParties_NoUndlyInstrumentParties_5.insert(UnderlyingInstrumentPartyRole_5.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_9("STRING_1541074541");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_9);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9.insert(UnderlyingInstrumentPartySubID_9.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_9(1834161681);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_9);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9.insert(UnderlyingInstrumentPartySubIDType_9.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_10("STRING_1997484220");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_10);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10.insert(UnderlyingInstrumentPartySubID_10.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_10(570619024);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_10);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10.insert(UnderlyingInstrumentPartySubIDType_10.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_6;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_6("STRING_302955094");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyID_6.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_6('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyIDSource_6.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_6(1936976435);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_6);
      UndlyInstrumentParties_NoUndlyInstrumentParties_6.insert(UnderlyingInstrumentPartyRole_6.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_11("STRING_961073795");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_11);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11.insert(UnderlyingInstrumentPartySubID_11.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_11(1890138713);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_11);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11.insert(UnderlyingInstrumentPartySubIDType_11.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_12("STRING_847073773");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_12);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12.insert(UnderlyingInstrumentPartySubID_12.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_12(947930532);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_12);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12.insert(UnderlyingInstrumentPartySubIDType_12.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_7;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_7("STRING_1206703109");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyID_7.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_7('3');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyIDSource_7.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_7(1355600615);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_7);
      UndlyInstrumentParties_NoUndlyInstrumentParties_7.insert(UnderlyingInstrumentPartyRole_7.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_13("STRING_1208324229");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_13);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13.insert(UnderlyingInstrumentPartySubID_13.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_13(615879346);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_13);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13.insert(UnderlyingInstrumentPartySubIDType_13.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_14("STRING_506488688");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_14);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14.insert(UnderlyingInstrumentPartySubID_14.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_14(255882175);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_14);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14.insert(UnderlyingInstrumentPartySubIDType_14.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_0;
  FIX::Yield Yield_0;
  Yield_0.setString("58.660000");
  msg.set(Yield_0);
  YieldData_0.insert(Yield_0.getString());
  FIX::YieldCalcDate YieldCalcDate_0("LOCALMKTDATE_624149095");
  msg.set(YieldCalcDate_0);
  YieldData_0.insert(YieldCalcDate_0.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_0("LOCALMKTDATE_1643439530");
  msg.set(YieldRedemptionDate_0);
  YieldData_0.insert(YieldRedemptionDate_0.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_0;
  YieldRedemptionPrice_0.setString("10284041");
  msg.set(YieldRedemptionPrice_0);
  YieldData_0.insert(YieldRedemptionPrice_0.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_0(1877652981);
  msg.set(YieldRedemptionPriceType_0);
  YieldData_0.insert(YieldRedemptionPriceType_0.getString());
  FIX::YieldType YieldType_0("STRING_TRUE");
  msg.set(YieldType_0);
  YieldData_0.insert(YieldType_0.getString());
  all_values.push_back(YieldData_0);
  all_compo_names.insert("YieldData");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
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
